#include "lib/uga.h"

#include "dg_camera.h"
#include "dg_debug.h"
#include "dg_main.h"
#include "dg_math_inline.h"
#include "dg_camdebug.h"
#include "dg_printf.h"
#include "dg_camedit_neo.h"
#include "dg_task.h"
#include "dg_screen.h"

float fabsf(float x);  // temp

static Camera* ctask;
static Camera cam_buf;

static const dgDebugEditInfo param_info = { "Mirror : %d  ", &cam_buf, DEB_S8, 0.0f, 3.0f, 1.0f, 1.0f };

static void camera_disp(Camera* cam);

#define SET_DIR_VEC(vec, target, origin) \
do {                                     \
    (vec).x = (target).x - (origin).x;   \
    (vec).y = (target).y - (origin).y;   \
    (vec).z = (target).z - (origin).z;   \
} while(0)

/* 0012cf88 000002a0 */ static void motion_play_blend(/* a1 5 */ Camera* cam) {
    /* a2 6 */  dgCamera* c;
    /* f3 41 */ Float alpha;
    /* f4 42 */ Float inv_alpha;

    c = &cam->camera;

    alpha = (cam->frame - (cam->cpos - 1)->keyframe) / (cam->cpos[0].keyframe - (cam->cpos - 1)->keyframe);
    inv_alpha = 1.0f - alpha;
    c->ceye.x = (inv_alpha * (cam->cpos - 1)->key[0]) + (alpha * cam->cpos[0].key[0]);
    c->ceye.y = (inv_alpha * (cam->cpos - 1)->key[1]) + (alpha * cam->cpos[0].key[1]);
    c->ceye.z = (inv_alpha * (cam->cpos - 1)->key[2]) + (alpha * cam->cpos[0].key[2]);


    alpha = (cam->frame - (cam->ctarget - 1)->keyframe) / (cam->ctarget[0].keyframe - (cam->ctarget - 1)->keyframe);
    inv_alpha = 1.0f - alpha;
    c->cint.x = (inv_alpha * (cam->ctarget - 1)->key[0]) + (alpha * cam->ctarget[0].key[0]);
    c->cint.y = (inv_alpha * (cam->ctarget - 1)->key[1]) + (alpha * cam->ctarget[0].key[1]);
    c->cint.z = (inv_alpha * (cam->ctarget - 1)->key[2]) + (alpha * cam->ctarget[0].key[2]);


    alpha = (cam->frame - (cam->croll - 1)->keyframe) / (cam->croll[0].keyframe - (cam->croll - 1)->keyframe);
    inv_alpha = 1.0f - alpha;
    c->roll = (inv_alpha * (cam->croll - 1)->key) + (alpha * cam->croll[0].key);


    alpha = (cam->frame - (cam->cangle - 1)->keyframe) / (cam->cangle[0].keyframe - (cam->cangle - 1)->keyframe);
    inv_alpha = 1.0f - alpha;
    c->ang = (inv_alpha * (cam->cangle - 1)->key) + (alpha * cam->cangle[0].key);
}

/* 0012d228 00000060 */ static void motion_play_noblend(/* a0 4 */ Camera* cam) {
    /* v1 3 */ dgCamera* c;
    /* v0 2 */ NJS_MKEY_F* mkey;

    c = &cam->camera;
    mkey = cam->cpos - 1;



    c->ceye.x = mkey->key[0];
    c->ceye.y = mkey->key[1];
    c->ceye.z = mkey->key[2];


    mkey = cam->ctarget - 1;
    c->cint.x = mkey->key[0];
    c->cint.y = mkey->key[1];
    c->cint.z = mkey->key[2];


    c->roll = (cam->croll - 1)->key;


    c->ang = (cam->cangle - 1)->key;
}

/* 0012d288 000000c8 */ static void motion_play_endframe(/* a0 4 */ Camera* cam) {
    /* a3 7 */ dgCamera* c;
    /* a1 5 */ NJS_MDATA4* data;

    c = &cam->camera;
    data = cam->motion->mdata;

    cam->cpos = &((NJS_MKEY_F*)data->p[0])[data->nb[0]] - 1;
    cam->ctarget = &((NJS_MKEY_F*)data->p[1])[data->nb[1]] - 1;
    cam->croll = &((NJS_MKEY_SA1*)data->p[2])[data->nb[2]] - 1;
    cam->cangle = &((NJS_MKEY_SA1*)data->p[3])[data->nb[3]] - 1;

    c->ceye.x = cam->cpos->key[0];
    c->ceye.y = cam->cpos->key[1];
    c->ceye.z = cam->cpos->key[2];
    c->cint.x = cam->ctarget->key[0];
    c->cint.y = cam->ctarget->key[1];
    c->cint.z = cam->ctarget->key[2];
    c->roll = cam->croll->key;
    c->ang = cam->cangle->key;
}

/* 0012d350 00000074 */ static Bool is_enable_blend_mkey_f(/* s0 16 */ Camera* cam, /* a1 5 */ NJS_MKEY_F* mkey1) {
    /* v0 2 */ NJS_MKEY_F* mkey0;
    /* 0x0(sp) */ dgMathVector3 vec;

    mkey0 = mkey1 - 1;


    vec.x = mkey0->key[0] - mkey1->key[0];
    vec.y = mkey0->key[1] - mkey1->key[1];
    vec.z = mkey0->key[2] - mkey1->key[2];

    return dgMathGetVectorLength2(&vec) < cam->mkeyf_blend_param;
}

/* 0012d3c8 00000030 */ static Bool is_enable_blend_mkey_sa1(/* a0 4 */ Camera* cam, /* a1 5 */ NJS_MKEY_SA1* mkey) {
    return (0 <= mkey->key - (mkey - 1)->key)
        ? (mkey->key - (mkey - 1)->key) < cam->mkeysa1_blend_param
        : ((mkey - 1)->key - mkey->key) < cam->mkeysa1_blend_param;
}

/* 0012d3f8 00000258 */ static void motion_play(/* s0 16 */ Camera* cam, /* a1 5 */ int limit_frame) {
    /* s1 17 */ dgCamera* c;

    c = &cam->camera;

    if (cam->frame < limit_frame) {
        while (cam->cpos->keyframe <= cam->frame)
            cam->cpos++;

        while (cam->ctarget->keyframe <= cam->frame)
            cam->ctarget++;

        while (cam->croll->keyframe <= cam->frame)
            cam->croll++;

        while (cam->cangle->keyframe <= cam->frame)
            cam->cangle++;


        if (is_enable_blend_mkey_f(cam, cam->cpos) &&
            is_enable_blend_mkey_f(cam, cam->ctarget) &&
            is_enable_blend_mkey_sa1(cam, cam->croll) &&
            is_enable_blend_mkey_sa1(cam, cam->cangle)) {
            motion_play_blend(cam);
        }
        else {
            cam->blend_disable_flag = 1;
            motion_play_noblend(cam);
        }
    }
    else {
        motion_play_endframe(cam);
    }

    c->roll = dgCamDebugModifyRoll(c->roll);
    c->ang = dgCamDebugModifyAngle(c->ang);
    c->ang = dgMathAtan(dgMathTan(0.5f * c->ang) * 1.33f) * 2;
}

/* 0012d650 00000028 */ static void motion_init(/* a0 4 */ Camera* cam, /* a1 5 */ NJS_MOTION* motion) {
    /* v1 3 */ NJS_MDATA4* data;

    data = motion->mdata;

    cam->cpos = data->p[0];
    cam->ctarget = data->p[1];
    cam->croll = data->p[2];
    cam->cangle = data->p[3];
}

/* 0012d678 00000068 */ static void dg_camera_init(/* a0 4 */ Camera* cam) {
    /* s0 16 */ dgCamera* c;

    c = &cam->camera;

    c->ceye.x = c->ceye.y = c->ceye.z = 0.0f;
    c->cint.x = c->cint.y = 0.0f;
    c->cint.z = 1.0f;
    c->roll = 0;
    c->ang = dgMathDegreeToAngle(45.0f);

    dgCameraSetMatrix(c);
    camera_disp(&cam_buf);
}

/* 0012d6e0 0000004c */ static void dg_camera_copy(/* s1 17 */ dgCamera* dst, /* s0 16 */ dgCamera* src) {
    dgMathCopyVector(&dst->ceye, &src->ceye);
    dgMathCopyVector(&dst->cint, &src->cint);
    dst->roll = src->roll;
    dst->ang = src->ang;
}

/* 0012d730 000000a8 */ static void camera_init(/* s0 16 */ Camera* cam, /* s1 17 */ NJS_MOTION* motion) {
    dgMathUnitMatrixM(&cam->cam_mat);
    dgMathUnitMatrixM(&cam->inv_mat);
    dgMathUnitMatrixM(&cam->inv_mat_nomirror);
    cam->frame = cam->prev_frame = 0.0f;
    cam->user_disp_func = NULL;
    cam->mkeyf_blend_param = 900.0f;
    cam->mkeysa1_blend_param = dgMathDegreeToAngle(3.0f);
    cam->motion = motion;
    if (motion) {
        motion_init(cam, motion);
    }
    else {
        cam->cpos = NULL;
        cam->ctarget = NULL;
        cam->croll = NULL;
        cam->cangle = NULL;
    }

    njInitCamera(&cam->nj_camera);
    dg_camera_init(cam);
}

// TODO: Confirm printf "..." param existance

/* 0012d7d8 000004b8 */ static void camera_draw(/* s1 17 */ GWHWND hwnd) {
    /* s5 21 */ Camera* cam;
    /* s0 16 */ dgCamera* c;
    /* s0 16 */ NJS_SCREEN* scr;
    /* s6 22 */ dgMathMatrix* m;

    cam = &cam_buf;
    c = &cam->camera;

    dgPrintfInEditWindow(hwnd);
    dgPrintfSeparaterInWindow(hwnd);

    dgPrintfInWindow(hwnd, "frame: %f [%d]", cam->frame, cam->blend_disable_flag);
    dgPrintfInWindow(hwnd, "eye  : %f %f %f", c->ceye.x, c->ceye.y, c->ceye.z);
    dgPrintfInWindow(hwnd, "int  : %f %f %f", c->cint.x, c->cint.y, c->cint.z);
    dgPrintfInWindow(hwnd, "roll : %f", dgMathAngleToDegree(c->roll));
    dgPrintfInWindow(hwnd, "ang  : %f", dgMathAngleToDegree(c->ang));


    scr = &_nj_screen_;

    dgPrintfSeparaterInWindow(hwnd);
    dgPrintfInWindow(hwnd, "aspect     : %f (=%f/%f)", scr->aspect, scr->ay, scr->ax);
    dgPrintfInWindow(hwnd, "dist       : %f", scr->dist);
    dgPrintfInWindow(hwnd, "xad,yad    : %f, %f", scr->xad, scr->yad);
    dgPrintfInWindow(hwnd, "ooxad,ooyad: %f, %f", scr->ooxad, scr->ooyad);
    dgPrintfInWindow(hwnd, "cx,cy      : %f, %f", scr->cx, scr->cy);
    dgPrintfInWindow(hwnd, "w,h        : %f, %f", scr->w, scr->h);






    dgPrintfSeparaterInWindow(hwnd);
    m = &cam->cam_mat;
    dgPrintfInWindow(hwnd, "%.3f %.3f %.3f %.3f", m->m00, m->m01, m->m02, m->m03);
    dgPrintfInWindow(hwnd, "%.3f %.3f %.3f %.3f", m->m10, m->m11, m->m12, m->m13);
    dgPrintfInWindow(hwnd, "%.3f %.3f %.3f %.3f", m->m20, m->m21, m->m22, m->m23);
    dgPrintfInWindow(hwnd, "%.3f %.3f %.3f %.3f", m->m30, m->m31, m->m32, m->m33);

    dgPrintfSeparaterInWindow(hwnd);
    m = &cam->inv_mat;
    dgPrintfInWindow(hwnd, "%.3f %.3f %.3f %.3f", m->m00, m->m01, m->m02, m->m03);
    dgPrintfInWindow(hwnd, "%.3f %.3f %.3f %.3f", m->m10, m->m11, m->m12, m->m13);
    dgPrintfInWindow(hwnd, "%.3f %.3f %.3f %.3f", m->m20, m->m21, m->m22, m->m23);
    dgPrintfInWindow(hwnd, "%.3f %.3f %.3f %.3f", m->m30, m->m31, m->m32, m->m33);
}

/* 0012dc90 00000068 */ void dgCameraCreateWindow(/* a0 4 */ void* parent_task) {
    cam_buf.hwnd = dgDebugCreateWindow_Sub(parent_task, cam_buf.hwnd, "Camera", 0, 40, camera_draw, NULL, 0, 0, &param_info, 1);
}

/* 0012dcf8 0000005c */ static void dgcam_to_njcam(/* a0 4 */ NJS_CAMERA* nj_cam, /* a1 5 */ dgCamera* dg_cam) {
    nj_cam->px = dg_cam->ceye.x;
    nj_cam->py = dg_cam->ceye.y;
    nj_cam->pz = dg_cam->ceye.z;
    nj_cam->vx = dg_cam->cint.x - dg_cam->ceye.x;
    nj_cam->vy = dg_cam->cint.y - dg_cam->ceye.y;
    nj_cam->vz = dg_cam->cint.z - dg_cam->ceye.z;
    nj_cam->roll = dg_cam->roll;
    nj_cam->ang = dg_cam->ang;
}

/* 0012dd58 000000b4 */ static void cam_mirror(/* a0 4 */ Camera* cam) {
    /* 0x0(sp) */ NJS_PLANE pl;

    pl.px = cam->camera.ceye.x;
    pl.py = cam->camera.ceye.y;
    pl.pz = cam->camera.ceye.z;

    switch (cam->mirror_mode) {
    case 1:
        pl.vx = cam->inv_mat_nomirror.m00;
        pl.vy = cam->inv_mat_nomirror.m01;
        pl.vz = cam->inv_mat_nomirror.m02;
        break;
    case 2:
        pl.vx = cam->inv_mat_nomirror.m10;
        pl.vy = cam->inv_mat_nomirror.m11;
        pl.vz = cam->inv_mat_nomirror.m12;
        break;
    case 3:
        pl.vx = cam->inv_mat_nomirror.m20;
        pl.vy = cam->inv_mat_nomirror.m21;
        pl.vz = cam->inv_mat_nomirror.m22;
        break;
    }

    njMirror(NULL, &pl);
}

/* 0012de10 000000a0 */ static void cam_relative(/* s0 16 */ Camera* cam) {
    /* 0x0(sp) */  dgMathVector3 abs_pos[2];
    /* 0x20(sp) */ dgMathVector3 rel_pos[2];

    dgMathPushMatrix();
    dgMathSetMatrix(&cam->relative_mat);

    abs_pos[0].x = cam->camera.ceye.x;  abs_pos[0].y = cam->camera.ceye.y;  abs_pos[0].z = cam->camera.ceye.z;
    abs_pos[1].x = cam->camera.cint.x;  abs_pos[1].y = cam->camera.cint.y;  abs_pos[1].z = cam->camera.cint.z;
    dgMathCalcPoints(rel_pos, abs_pos, 2);
    cam->camera.ceye.x = rel_pos[0].x;  cam->camera.ceye.y = rel_pos[0].y;  cam->camera.ceye.z = rel_pos[0].z;
    cam->camera.cint.x = rel_pos[1].x;  cam->camera.cint.y = rel_pos[1].y;  cam->camera.cint.z = rel_pos[1].z;
    dgMathPopMatrix();
}

/* 0012deb0 00000194 */ static void camera_disp(/* s1 17 */ Camera* cam) {
    /* s3 19 */ dgMainDisplayListPrio rsv;
    /* s0 16 */ dgMathAngle1 ang_2;
    /* 0x0(sp) */ ulMatrix mat;

    rsv = dgMainSetCurrentDisplayList(DSP_LIST_PRIO_CAMERA);


    dgcam_to_njcam(&cam->nj_camera, &cam->camera);


    dgMathUnitMatrix();
    dgCameraSetMatrix(&cam->camera);

    if (cam->user_disp_func) {
        cam->user_disp_func(&cam->nj_camera);
    }
    else if (ctask) {
        dgCenPlay(&cam->camera);
    }


    if (!dgCamEditNeoDisp())
        dgCamDebugDisp();



    ang_2 = cam->camera.ang * 5 / 8;

    cam->inv_sin = 1.0f / dgMathSin(ang_2);
    cam->cos2 = dgMathCos(ang_2) * dgMathCos(ang_2);


    njSetDirectClip();

    dgMathGetMatrix(&cam->inv_mat_nomirror);
    dgMathInvertMatrix(&cam->inv_mat_nomirror);

    if (cam->mirror_mode) {
        cam_mirror(cam);
        njControl3D(NJD_CONTROL_3D_MIRROR_MODEL);
    }
    else {
        njControl3D(0);
    }

    dgMathGetMatrix(&cam->cam_mat);
    dgMathGetMatrix(&cam->inv_mat);
    dgMathInvertMatrix(&cam->inv_mat);





    ulMatrixUnit(&mat);
    ulGxSetTransform(1, &mat);

    dgMainSetCurrentDisplayList(rsv);
}

/* 0012e048 00000018 */ static void camera_del(/* a0 4 */ Camera* task) {
    ctask = NULL;
    camera_init(&cam_buf, NULL);
}

/* 0012e060 0000005c */ void* dgCameraSet(/* a0 4 */ void* parent_task, /* s1 17 */ NJS_MOTION* motion) {
    /* rdata 343a00 */ static dgTaskParam param = { "camera", NULL, NULL, camera_del };

    ctask = dgTaskSetChild(parent_task, sizeof(Camera) + 8, &param);
    if (ctask) { camera_init(&cam_buf, motion); }


    return ctask;
}

/* 0012e0c0 0000000c */ void* dgCameraGet() {
    return ctask;
}

/* 0012e0d0 0000000c */ void dgCameraInit() {
    dg_camera_init(&cam_buf);
}

/* 0012e0e0 0000000c */ void dgCameraSetFrame(/* f12 50 */ float frame) {
    cam_buf.frame = frame;
}

/* 0012e0f0 0000000c */ Float dgCameraGetFrame() {
    return cam_buf.frame;
}

/* 0012e100 00000050 */ Float dgCameraGetMaxFrame() {
    return cam_buf.motion ? cam_buf.motion->nbFrame : 0.0f;
}

/* 0012e150 0000000c */ NJS_CAMERA* dgCameraGetPtr() {
    return &cam_buf.nj_camera;
}

/* 0012e160 0000000c */ dgMathMatrix* dgCameraGetMatrix() {
    return &cam_buf.cam_mat;
}

/* 0012e170 0000000c */ dgMathMatrix* dgCameraGetInvMatrix() {
    return &cam_buf.inv_mat;
}

/* 0012e180 0000000c */ dgMathMatrix* dgCameraGetInvMatrixNoMirror() {
    return &cam_buf.inv_mat_nomirror;
}

/* 0012e190 0000003c */ void dgCameraSetMotion(/* a1 5 */ NJS_MOTION* motion) {
    /* a0 4 */ Camera* cam;

    cam = &cam_buf;

    cam->frame = cam->prev_frame = 0.0f;
    cam->motion = motion;
    if (motion) {
        motion_init(cam, motion);
    }
    else {
        cam->cpos = NULL;
        cam->ctarget = NULL;
        cam->croll = NULL;
        cam->cangle = NULL;
    }
}

/* 0012e1d0 00000110 */ void dgCameraExecMotion(/* f12 50 */ Float frame) {
    /* s0 16 */ Camera* cam;

    cam = &cam_buf;

    cam->blend_disable_flag = 0;
    if (cam->motion) {
        cam->frame = frame;
        if (cam->motion->nbFrame - 1 <= cam->frame) {
            cam->frame = cam->motion->nbFrame - 1;
        }
        if (cam->frame < cam->prev_frame) {
            motion_init(cam, cam->motion);
        }
        cam->prev_frame = cam->frame;
        motion_play(cam, cam->motion->nbFrame - 1);
        if (cam->relative_mode) {
            cam_relative(cam);
        }
    }
}

/* 0012e2e0 0000000c */ void dgCameraSetUserFunc(/* a0 4 */ void (*func)(/* parameters unknown */)) {
    cam_buf.user_disp_func = func;
}

/* 0012e2f0 0000000c */ void dgCameraDisp() {
    camera_disp(&cam_buf);
}

/* 0012e300 0000000c */ Float dgCameraInvSin() {
    return cam_buf.inv_sin;
}

/* 0012e310 0000000c */ Float dgCameraCos2() {
    return cam_buf.cos2;
}

/* 0012e320 0000000c */ dgCamera* dgCameraGetCamera() {
    return &cam_buf.camera;
}

/* 0012e330 00000074 */ static void roll_to_upvec(/* s1 17 */ dgMathVector3* vec, /* s0 16 */ dgMathAngle1 roll) {
    /* 0x0(sp) */ dgMathVector3 tmp;

    tmp.x = dgMathSin(roll);
    tmp.y = dgMathCos(roll);
    tmp.z = 0.0f;

    dgMathUnitMatrix();
    dgMathRotateY(-dgMathAtan2(vec->x, vec->z));
    dgMathInvertMatrix(NULL);
    dgMathCalcVector(vec, &tmp);
}

/* 0012e3a8 00000128 */ void dgCameraSetMatrix(/* s1 17 */ dgCamera* cam) {
    /* 0x0(sp) */ dgMathVector3 vec;
    /* s0 16 */ NJS_CAMERA* njs_cam;
    /* s2 18 */ dgMainDisplayListPrio rsv;

    njs_cam = &cam_buf.nj_camera;

    rsv = dgMainSetCurrentDisplayList(DSP_LIST_PRIO_CAMERA);
    
    SET_DIR_VEC(vec, cam->cint, cam->ceye);

    dgMathCopyVector((NJS_VECTOR*)&njs_cam->px, &cam->ceye);
    dgMathCopyVector((NJS_VECTOR*)&njs_cam->vx, &vec);
    njs_cam->roll = cam->roll;
    njs_cam->ang = cam->ang;
    if (fabsf((vec.x * vec.x) + (vec.z * vec.z)) < 5.960465e-8f) {  // TODO: ugly! (5.960465e-8f)
        vec.x = 0.0f;
        vec.y = 0.0f;
        vec.z = -1.0f;
    }
    else {
        roll_to_upvec(&vec, cam->roll);
    }
    dgMathUnitMatrix();
    njCameraExLookAt(&cam->ceye, &cam->cint, &vec);
    njSetPerspective(cam->ang);
    dg_camera_copy(&cam_buf.camera, cam);
    dgMainSetCurrentDisplayList(rsv);
}

/* 0012e4d0 000000fc */ void dgCameraMakeMatrix(/* s2 18 */ dgMathMatrix* m, /* s0 16 */ dgCamera* cam) {
    /* 0x0(sp) */ dgMathVector3 vec;
    /* s1 17 */ dgMainDisplayListPrio rsv;

    rsv = dgMainSetCurrentDisplayList(DSP_LIST_PRIO_CAMERA);


    SET_DIR_VEC(vec, cam->ceye, cam->cint);

    if (fabsf((vec.x * vec.x) + (vec.z * vec.z)) < 5.960465e-8f) {
        vec.x = 0.0f;
        vec.y = 0.0f;
        vec.z = -1.0f;
    }
    else {
        roll_to_upvec(&vec, cam->roll);
    }

    dgMathPushMatrix();
    dgMathUnitMatrix();
    njCameraExLookAt(&cam->ceye, &cam->cint, &vec);
    dgMathGetMatrix(m);
    dgMathPopMatrix();


    dgMainSetCurrentDisplayList(rsv);
}

/* 0012e5d0 000001b8 */ void dgCameraDrawViewLine(/* s1 17 */ dgCamera* cam, /* f20 58 */ Float z, /* s5 21 */ Uint32 color) {
    /* 0x0(sp) */ dgMathVector3 wpos[9];
    /* 0x70(sp) */ dgMathVector2 spos;
    /* 0x80(sp) */ NJS_SCREEN tmp;

    dgScreenGet(&tmp);
    njSetPerspective(cam->ang);

    dgMathPushMatrix();
    dgCameraSetMatrix(cam);

    dgMathPushMatrix();
    dgMathInvertMatrix(NULL);

    spos.x = 0.0f;
    spos.y = 0.0f;
    dgMathSposToVpos(&wpos[0], &spos, z);
    dgMathCalcPoint(&wpos[1], &wpos[0]);

    spos.x = 640.0f;
    dgMathSposToVpos(&wpos[0], &spos, z);
    dgMathCalcPoint(&wpos[2], &wpos[0]);

    spos.y = 480.0f;
    dgMathSposToVpos(&wpos[0], &spos, z);
    dgMathCalcPoint(&wpos[3], &wpos[0]);

    spos.x = 0.0f;
    dgMathSposToVpos(&wpos[0], &spos, z);
    dgMathCalcPoint(&wpos[4], &wpos[0]);

    dgMathPopMatrix();
    dgMathPopMatrix();

    dgMathCopyVector(&wpos[0], &cam->ceye);
    dgMathCopyVector(&wpos[5], &wpos[0]);
    dgMathCopyVector(&wpos[6], &wpos[2]);
    dgMathCopyVector(&wpos[7], &wpos[3]);
    dgMathCopyVector(&wpos[8], &wpos[0]);

    dgScreenSet(&tmp);


    dgMathPushMatrix();





    njDrawLine3DExStart(0.5f, color, 0);
    njDrawLine3DExSetStrip(wpos, 9);
    njDrawLine3DExEnd();

    dgMathPopMatrix();
}

/* 0012e788 00000054 */ dgCamera* dgCameraCreate() {
    /* s0 16 */ dgCamera* cam;

    cam = dgMemCalloc(1, sizeof(dgCamera));

    if (cam) {
        cam->cint.z = 1.0f;
        cam->ang = dgMathDegreeToAngle(45.0f);
    }
    return cam;
}

/* 0012e7e0 00000008 */ void dgCameraDestroy(/* a0 4 */ dgCamera* cam) {
    dgMemFree(cam);
}

/* 0012e7e8 0000004c */ void dgCameraCopy(/* s1 17 */ dgCamera* dst, /* s0 16 */ dgCamera* src) {
    dgMathCopyVector(&dst->ceye, &src->ceye);
    dgMathCopyVector(&dst->cint, &src->cint);
    dst->roll = src->roll;
    dst->ang  = src->ang;
}

/* 0012e838 00000010 */ void dgCameraGetCameraPosition(/* v0 2 */ dgCamera* cam, /* a1 5 */ dgMathVector3* pos) {
    dgMathCopyVector(pos, &cam->ceye);
}

/* 0012e848 00000010 */ void dgCameraGetInterestPosition(/* a0 4 */ dgCamera* cam, /* a1 5 */ dgMathVector3* pos) {
    dgMathCopyVector(pos, &cam->cint);
}

/* 0012e858 00000034 */ void dgCameraGetCameraVector(/* a0 4 */ dgCamera* cam, /* a1 5 */ dgMathVector3* vec) {
    SET_DIR_VEC(*vec, cam->cint, cam->ceye);
}

/* 0012e890 00000008 */ dgMathAngle1 dgCameraGetRoll(/* a0 4 */ dgCamera* cam) {
    return cam->roll;
}

/* 0012e898 00000008 */ dgMathAngle1 dgCameraGetAngle(/* a0 4 */ dgCamera* cam) {
    return cam->ang;
}

/* 0012e8a0 00000008 */ void dgCameraSetCameraPosition(/* a0 4 */ dgCamera* cam, /* a1 5 */ dgMathVector3* pos) {
    dgMathCopyVector(&cam->ceye, pos);
}

/* 0012e8a8 00000008 */ void dgCameraSetInterestPosition(/* a0 4 */ dgCamera* cam, /* a1 5 */ dgMathVector3* pos) {
    dgMathCopyVector(&cam->cint, pos);
}

/* 0012e8b0 00000008 */ void dgCameraSetRoll(/* a0 4 */ dgCamera* cam, /* a1 5 */ dgMathAngle1 roll) {
    cam->roll = roll;
}

/* 0012e8b8 00000008 */ void dgCameraSetAngle(/* a0 4 */ dgCamera* cam, /* a1 5 */ dgMathAngle1 ang) {
    cam->ang = ang;
}

/* 0012e8c0 0000000c */ void dgCameraSetMirrorMode(/* a0 4 */ dgCameraMirrorMode mode) {
    cam_buf.mirror_mode = mode;
}

/* 0012e8d0 0000000c */ dgCameraMirrorMode dgCameraGetMirrorMode() {
    return cam_buf.mirror_mode;
}

/* 0012e8e0 00000010 */ Bool dgCameraIsMirror() {
    return cam_buf.mirror_mode != DG_CAM_MIRROR_NON;
}

/* 0012e8f0 0000000c */ void dgCameraSetRelativeMode(/* a0 4 */ Bool flag) {
    cam_buf.relative_mode = flag;
}

/* 0012e900 00000010 */ void dgCameraSetRelativeMatrix(/* a1 5 */ dgMathMatrix* m) {
    dgMathCopyMatrixM(&cam_buf.relative_mat, m);
}