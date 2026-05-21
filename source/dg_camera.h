#ifndef DG_CAMERA_H
#define DG_CAMERA_H

#include "sdk/ninja.h"
#include "sdk/gindows.h"

#include "dg_math.h"

typedef struct
{
	dgMathVector3 ceye, cint;
	dgMathAngle1  roll, ang;
} 
  dgCamera;

typedef enum
{
	DG_CAM_MIRROR_NON,
	DG_CAM_MIRROR_X,
	DG_CAM_MIRROR_Y,
	DG_CAM_MIRROR_Z,
	DG_CAM_MIRROR_MAX
} 
  dgCameraMirrorMode;

typedef struct { // 0x190
	/* 0x000 */ Sint8 mirror_mode;
	/* 0x001 */ Sint8 relative_mode;
	/* 0x002 */ Sint8 dummy8[14];
	/* 0x010 */ dgCamera camera;
	/* 0x030 */ dgMathMatrix cam_mat;
	/* 0x070 */ dgMathMatrix inv_mat;
	/* 0x0b0 */ dgMathMatrix inv_mat_nomirror;
	/* 0x0f0 */ dgMathMatrix relative_mat;
	/* 0x130 */ float inv_sin;
	/* 0x134 */ float cos2;
	/* 0x138 */ GWHWND hwnd;
	/* 0x13c */ float frame;
	/* 0x140 */ float prev_frame;
	/* 0x144 */ NJS_MOTION* motion;
	/* 0x148 */ NJS_MKEY_F* cpos;
	/* 0x14c */ NJS_MKEY_F* ctarget;
	/* 0x150 */ NJS_MKEY_SA1* croll;
	/* 0x154 */ NJS_MKEY_SA1* cangle;
	/* 0x158 */ dgMathVector1 mkeyf_blend_param;
	/* 0x15c */ dgMathAngle1 mkeysa1_blend_param;
	/* 0x160 */ Sint32 blend_disable_flag;
	/* 0x164 */ void (*user_disp_func)(/* parameters unknown */);
	/* 0x168 */ NJS_CAMERA nj_camera;
} Camera;

void dgCameraCreateWindow(void* parent_task);
void* dgCameraSet(void* parent_task, NJS_MOTION* motion);
void* dgCameraGet();
void dgCameraInit();
void dgCameraSetFrame(float frame);
Float dgCameraGetFrame();
Float dgCameraGetMaxFrame();
NJS_CAMERA* dgCameraGetPtr();
dgMathMatrix* dgCameraGetMatrix();
dgMathMatrix* dgCameraGetInvMatrix();
dgMathMatrix* dgCameraGetInvMatrixNoMirror();
void dgCameraSetMotion(NJS_MOTION* motion);
void dgCameraExecMotion(Float frame);
void dgCameraSetUserFunc(void (*func)());
void dgCameraDisp();
Float dgCameraInvSin();
Float dgCameraCos2();
dgCamera* dgCameraGetCamera();
void dgCameraSetMatrix(dgCamera* cam);
void dgCameraMakeMatrix(dgMathMatrix* m, dgCamera* cam);
void dgCameraDrawViewLine(dgCamera* cam, Float z, Uint32 color);
dgCamera* dgCameraCreate();
void dgCameraDestroy(dgCamera* cam);
void dgCameraCopy(dgCamera* dst, dgCamera* src);
void dgCameraGetCameraPosition(dgCamera* cam, dgMathVector3* pos);
void dgCameraGetInterestPosition(dgCamera* cam, dgMathVector3* pos);
void dgCameraGetCameraVector(dgCamera* cam, dgMathVector3* vec);
dgMathAngle1 dgCameraGetRoll(dgCamera* cam);
dgMathAngle1 dgCameraGetAngle(dgCamera* cam);
void dgCameraSetCameraPosition(dgCamera* cam, dgMathVector3* pos);
void dgCameraSetInterestPosition(dgCamera* cam, dgMathVector3* pos);
void dgCameraSetRoll(dgCamera* cam, dgMathAngle1 roll);
void dgCameraSetAngle(dgCamera* cam, dgMathAngle1 ang);
void dgCameraSetMirrorMode(dgCameraMirrorMode mode);
dgCameraMirrorMode dgCameraGetMirrorMode();
Bool dgCameraIsMirror();
void dgCameraSetRelativeMode(Bool flag);
void dgCameraSetRelativeMatrix(dgMathMatrix* m);

#endif // DG_CAMERA_H 