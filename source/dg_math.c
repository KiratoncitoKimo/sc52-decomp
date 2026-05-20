#include "dg_math.h"
#include "dg_math_inline.h"
#include "dg_camera.h"

float atan2f(float y, float x);  // temp

void dgMathScaleVector(dgMathVector3* vd, dgMathVector3* vs, Float scale) 
{
    vd->x = vs->x * scale;
    vd->y = vs->y * scale;
    vd->z = vs->z * scale;
}

void dgMathScaleVector_2P(dgMathVector3* vd, Float scale) 
{
    vd->x *= scale;
    vd->y *= scale;
    vd->z *= scale;
}

void dgMathScaleVector2(dgMathVector2* vd, dgMathVector2* vs, Float scale) 
{
    vd->x = vs->x * scale;
    vd->y = vs->y * scale;
}

void dgMathScaleVector2_2P(dgMathVector2* vd, Float scale) 
{
    vd->x *= scale;
    vd->y *= scale;
}

void dgMathScaleQuaternion(dgMathQuaternion* vd, dgMathQuaternion* vs, Float scale) 
{
    vd->re    = vs->re    * scale;
    vd->im[0] = vs->im[0] * scale;
    vd->im[1] = vs->im[1] * scale;
    vd->im[2] = vs->im[2] * scale;
}

void dgMathScaleQuaternion_2P(dgMathQuaternion* vd, Float scale) 
{
    vd->re    *= scale;
    vd->im[0] *= scale;
    vd->im[1] *= scale;
    vd->im[2] *= scale;
}

Float dgMathGetQuaternionLength(dgMathQuaternion* v) 
{
    return dgMathSqrt(dgMathInnerProductQuaternion(v, v));
}

Float dgMathGetQuaternionLength2(dgMathQuaternion* v) 
{
    return dgMathInnerProductQuaternion(v, v);
}

void dgMathNormalizeQuaternion(dgMathQuaternion* v) 
{
    dgMathScaleQuaternion(v, v, 
        dgMathInvertSqrt(dgMathInnerProductQuaternion(v, v)));
}

Float dgMathInnerProductQuaternion(dgMathQuaternion* v1, dgMathQuaternion* v2) 
{
    return (v1->re    * v2->re)    + (v1->im[0] * v2->im[0]) + 
           (v1->im[1] * v2->im[1]) + (v1->im[2] * v2->im[2]);
}

void dgMathMultiQuaternion(dgMathQuaternion* ov, dgMathQuaternion* v1, dgMathQuaternion* v2) 
{
    dgMathQuaternion tmp;

    tmp.re    = (v1->re * v2->re)    - (v1->im[0] * v2->im[0]) - (v1->im[1] * v2->im[1]) - (v1->im[2] * v2->im[2]);
    tmp.im[0] = (v1->re * v2->im[0]) + (v1->im[0] * v2->re)    + (v1->im[1] * v2->im[2]) - (v1->im[2] * v2->im[1]);
    tmp.im[1] = (v1->re * v2->im[1]) - (v1->im[0] * v2->im[2]) + (v1->im[1] * v2->re)    + (v1->im[2] * v2->im[0]);
    tmp.im[2] = (v1->re * v2->im[2]) + (v1->im[0] * v2->im[1]) - (v1->im[1] * v2->im[0]) + (v1->im[2] * v2->re);

    ov->re    = tmp.re;
    ov->im[0] = tmp.im[0];
    ov->im[1] = tmp.im[1];
    ov->im[2] = tmp.im[2];
}

void dgMathMultiQuaternion_2P(dgMathQuaternion* ov, dgMathQuaternion* v) 
{
    dgMathQuaternion tmp;

    tmp.re    = (ov->re * v->re)    - (ov->im[0] * v->im[0]) - (ov->im[1] * v->im[1]) - (ov->im[2] * v->im[2]);
    tmp.im[0] = (ov->re * v->im[0]) + (ov->im[0] * v->re)    + (ov->im[1] * v->im[2]) - (ov->im[2] * v->im[1]);
    tmp.im[1] = (ov->re * v->im[1]) - (ov->im[0] * v->im[2]) + (ov->im[1] * v->re)    + (ov->im[2] * v->im[0]);
    tmp.im[2] = (ov->re * v->im[2]) + (ov->im[0] * v->im[1]) - (ov->im[1] * v->im[0]) + (ov->im[2] * v->re);

    ov->re    = tmp.re;
    ov->im[0] = tmp.im[0];
    ov->im[1] = tmp.im[1];
    ov->im[2] = tmp.im[2];
}

void dgMathQuaternionToMatrix(dgMathMatrix* m, dgMathQuaternion* q) 
{
    Float wx, wy, wz;
    Float xx, xy, xz;
    Float yy, yz, zz;

    wx = 2.0f * q->re    * q->im[0];
    wy = 2.0f * q->re    * q->im[1];
    wz = 2.0f * q->re    * q->im[2];
    xx = 2.0f * q->im[0] * q->im[0];
    xy = 2.0f * q->im[0] * q->im[1];
    xz = 2.0f * q->im[0] * q->im[2];
    yy = 2.0f * q->im[1] * q->im[1];
    yz = 2.0f * q->im[1] * q->im[2];
    zz = 2.0f * q->im[2] * q->im[2];

    m->m00 = (1.0f - yy) - zz;  m->m10 = xy - wz;         m->m20 = xz + wy;         m->m30 = 0.0f;
    m->m01 = xy + wz;           m->m11 = 1.0f - xx - zz;  m->m21 = yz - wx;         m->m31 = 0.0f;
    m->m02 = xz - wy;           m->m12 = yz + wx;         m->m22 = 1.0f - xx - yy;  m->m32 = 0.0f;
    m->m03 = 0.0f;              m->m13 = 0.0f;            m->m23 = 0.0f;            m->m33 = 1.0f;
}

void dgMathMatrixToQuaternion(dgMathQuaternion* q, dgMathMatrix* m) 
{
    Float tr;
    Float w;
    int i;
    Float max;

    tr = m->m00 + m->m11 + m->m22;

    if (tr >= 0.0f) 
    {
        w = dgMathSqrt(tr + 1.0f);
        q->re = w * 0.5f;

        w = 0.5f / w;
        q->im[0] = (m->m12 - m->m21) * w;
        q->im[1] = (m->m20 - m->m02) * w;
        q->im[2] = (m->m01 - m->m10) * w;

        return;
    }

    i = 0; max = m->m00;

    if (max < m->m11) { i = 1; max = m->m11; }
    if (max < m->m22) { i = 2; }

    switch (i) 
    {
    case 0:
        w = dgMathSqrt(m->m00 - m->m11 - m->m22 + 1.0f);
        q->im[0] = w * 0.5f;

        w = 0.5f / w;
        q->im[1] = (m->m10 + m->m01) * w;
        q->im[2] = (m->m02 + m->m20) * w;
        q->re    = (m->m12 - m->m21) * w;

        break;

    case 1:
        w = dgMathSqrt(m->m11 - m->m22 - m->m00 + 1.0f);
        q->im[1] = w * 0.5f;

        w = 0.5f / w;
        q->im[2] = (m->m21 + m->m12) * w;
        q->im[0] = (m->m10 + m->m01) * w;
        q->re    = (m->m20 - m->m02) * w;

        break;

    case 2:
        w = dgMathSqrt(m->m22 - m->m00 - m->m11 + 1.0f);
        q->im[2] = w * 0.5f;

        w = 0.5f / w;
        q->im[0] = (m->m02 + m->m20) * w;
        q->im[1] = (m->m21 + m->m12) * w;
        q->re    = (m->m01 - m->m10) * w;

        break;
    }
}

void dgMathSetQuaternionMatrix(dgMathQuaternion* q) 
{
    dgMathMatrix m;

    dgMathQuaternionToMatrix(&m, q);
    dgMathSetMatrix(&m);
}

void dgMathMultiQuaternionMatrix(dgMathQuaternion* q) 
{
    dgMathMatrix m;

    dgMathQuaternionToMatrix(&m, q);
    dgMathMultiMatrix(&m);
}

void dgMathGetShadowMatrix(dgMathMatrix* m, Float* p, dgMathVector3* lvec) 
{
    Float ip_inv;
    Float tmp;
    dgMathVector3 v;

    dgMathCopyVector(&v, lvec);
    dgMathUnitVector(&v);

    ip_inv = 1.0f / ((p[0] * v.x) + (p[1] * v.y) + (p[2] * v.z));

    tmp = -p[0] * ip_inv;
    m->m00 = tmp * v.x + 1.0f;
    m->m01 = tmp * v.y;
    m->m02 = tmp * v.z;
    m->m03 = 0.0f;

    tmp = -p[1] * ip_inv;
    m->m10 = tmp * v.x;
    m->m11 = tmp * v.y + 1.0f;
    m->m12 = tmp * v.z;
    m->m13 = 0.0f;

    tmp = -p[2] * ip_inv;
    m->m20 = tmp * v.x;
    m->m21 = tmp * v.y;
    m->m22 = tmp * v.z + 1.0f;
    m->m23 = 0.0f;

    tmp = -p[3] * ip_inv;
    m->m30 = tmp * v.x;
    m->m31 = tmp * v.y;
    m->m32 = tmp * v.z;
    m->m33 = 1.0f;
}

void dgMathSposToVpos(dgMathVector3* vpos, dgMathVector2* spos, dgMathVector1 z) 
{
    NJS_SCREEN* s = &_nj_screen_;

    vpos->x = (spos->x - s->cx) * s->ooxad * z;
    vpos->y = (spos->y - s->cy) * s->ooyad * z;
    vpos->z = -z;
}

dgMathAngle1 dgMathAtan2(Float y, Float x) 
{
    return atan2f(y, x) * (0x8000 / 3.141592f);
}

Bool dgMathIsSphereInScreen_Wpos(dgMathVector3* wpos, dgMathVector1 radius) 
{
    Bool ret;
    dgMathVector3 vpos;

    dgMathPushMatrix();
    dgMathCalcPoint(&vpos, wpos);

    ret = dgMathIsSphereInScreen_Vpos(&vpos, radius);

    dgMathPopMatrix();

    return ret;
}

Bool dgMathIsSphereInScreen_Vpos(dgMathVector3* vpos, dgMathVector1 radius) 
{
    dgMathVector3 tmp;

    if ((-_nj_clip_.n_clip + radius) < vpos->z)  return FALSE;
    if (vpos->z < (-_nj_clip_.f_clip - radius))  return FALSE;

    tmp.x = vpos->x;
    tmp.y = vpos->y;
    tmp.z = vpos->z - (radius * dgCameraInvSin());

    return (tmp.z * tmp.z) >= (dgMathInnerProduct(&tmp, &tmp) * dgCameraCos2());
}

Float dgMathVposToSpos(dgMathVector2* spos, dgMathVector3* vpos) 
{
    Float ooz;

    ooz = -1.0f / vpos->z;

    spos->x = (_nj_screen_.xad * vpos->x * ooz) + _nj_screen_.cx;
    spos->y = (_nj_screen_.yad * vpos->y * ooz) + _nj_screen_.cy;

    return ooz;
}

Float dgMathCalcBspline(Float p0, Float p1, Float p2, Float p3, Float t) 
{
    Float res;
    Float a, b, c, d;
    Float invt, invt2, t2;

    invt  = 1.0f - t;
    invt2 = invt * invt;
    t2    = t    * t;

    a = invt2 * invt;
    b = invt2 * t * 3.0f;
    c = t2 * invt * 3.0f;
    d = t2 * t;

    res = (a * p0) + (b * p1) + (c * p2) + (d * p3);

    return res;
}
