#ifndef DG_MATH_H
#define DG_MATH_H

typedef Angle dgMathAngle1;
typedef float dgMathVector1;
typedef NJS_POINT2 dgMathVector2;
typedef NJS_POINT3 dgMathVector3;
typedef NJS_QUATERNION dgMathQuaternion;

typedef struct
{
	dgMathVector1 x;
	dgMathVector1 y;
	dgMathVector1 z;
	dgMathVector1 w;
} 
  dgMathVector4;

typedef struct
{
	dgMathAngle1 x;
	dgMathAngle1 y;
} 
  dgMathAngle2;

typedef struct
{
	dgMathAngle1 x;
	dgMathAngle1 y;
	dgMathAngle1 z;
} 
  dgMathAngle3;

typedef struct {
	Float m00, m01, m02, m03;
	Float m10, m11, m12, m13;
	Float m20, m21, m22, m23;
	Float m30, m31, m32, m33;
} 
  dgMathMatrix;

void dgMathScaleVector(dgMathVector3* vd, dgMathVector3* vs, Float scale);
void dgMathScaleVector_2P(dgMathVector3* vd, Float scale);
void dgMathScaleVector2(dgMathVector2* vd, dgMathVector2* vs, Float scale);
void dgMathScaleVector2_2P(dgMathVector2* vd, Float scale);
void dgMathScaleQuaternion(dgMathQuaternion* vd, dgMathQuaternion* vs, Float scale);
void dgMathScaleQuaternion_2P(dgMathQuaternion* vd, Float scale);
Float dgMathGetQuaternionLength(dgMathQuaternion* v);
Float dgMathGetQuaternionLength2(dgMathQuaternion* v);
void dgMathNormalizeQuaternion(dgMathQuaternion* v);
Float dgMathInnerProductQuaternion(dgMathQuaternion* v1, dgMathQuaternion* v2);
void dgMathMultiQuaternion(dgMathQuaternion* ov, dgMathQuaternion* v1, dgMathQuaternion* v2);
void dgMathMultiQuaternion_2P(dgMathQuaternion* ov, dgMathQuaternion* v);
void dgMathQuaternionToMatrix(dgMathMatrix* m, dgMathQuaternion* q);
void dgMathMatrixToQuaternion(dgMathQuaternion* q, dgMathMatrix* m);
void dgMathSetQuaternionMatrix(dgMathQuaternion* q);
void dgMathMultiQuaternionMatrix(dgMathQuaternion* q);
void dgMathGetShadowMatrix(dgMathMatrix* m, Float* p, dgMathVector3* lvec);
void dgMathSposToVpos(dgMathVector3* vpos, dgMathVector2* spos, dgMathVector1 z);
dgMathAngle1 dgMathAtan2(Float y, Float x);
Bool dgMathIsSphereInScreen_Wpos(dgMathVector3* wpos, dgMathVector1 radius);
Bool dgMathIsSphereInScreen_Vpos(dgMathVector3* vpos, dgMathVector1 radius);
Float dgMathVposToSpos(dgMathVector2* spos, dgMathVector3* vpos);
Float dgMathCalcBspline(Float p0, Float p1, Float p2, Float p3, Float t);

#endif // DG_MATH_H