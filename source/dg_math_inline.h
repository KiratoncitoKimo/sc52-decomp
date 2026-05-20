#ifndef DG_MATH_INLINE_H
#define DG_MATH_INLINE_H

#include "dg_math.h"

Float dgMathSin(dgMathAngle1 n);
Float dgMathCos(dgMathAngle1 n);
Float dgMathTan(dgMathAngle1 n);
dgMathAngle1 dgMathAsin(Float n);
dgMathAngle1 dgMathAcos(Float n);
dgMathAngle1 dgMathAtan(Float n);
Float dgMathSinh(dgMathAngle1 n);
Float dgMathCosh(dgMathAngle1 n);
Float dgMathTanh(dgMathAngle1 n);
Float dgMathCeil(Float n);
Float dgMathFabs(Float n);
Float dgMathFloor(Float n);
Float dgMathFraction(Float n);
Float dgMathRoundOff(Float n);
Float dgMathRoundUp(Float n);
Float dgMathInvertSqrt(Float n);
Float dgMathSqrt(Float n);
Float dgMathExp(Float x);
Float dgMathLog(Float n);
Float dgMathLog10(Float n);
Float dgMathPow(Float n1, Float n2);
Float dgMathRand();
void dgMathSrand(Uint32 n);
dgMathAngle1 dgMathDegreeToAngle(Float deg);
dgMathAngle1 dgMathAngleMaskU(dgMathAngle1 ang);
dgMathAngle1 dgMathAngleMaskS(dgMathAngle1 ang);
Float dgMathAngleToDegree(dgMathAngle1 ang);
void dgMathInitMatrix(dgMathMatrix* pBuf, Uint32 nSize);
void dgMathPushMatrix();
void dgMathPopMatrix();
void dgMathUnitMatrix();
void dgMathUnitMatrixM(dgMathMatrix* m);
void dgMathCopyMatrixM(dgMathMatrix* dst, dgMathMatrix* src);
void dgMathGetMatrix(dgMathMatrix* m);
void dgMathSetMatrix(dgMathMatrix* m);
void dgMathMultiMatrix(dgMathMatrix* m);
void dgMathAddMatrix(dgMathMatrix* m);
void dgMathSubMatrix(dgMathMatrix* m);
void dgMathTranslate(dgMathVector3* v);
void dgMathRotateX(dgMathAngle1 ang);
void dgMathRotateY(dgMathAngle1 ang);
void dgMathRotateZ(dgMathAngle1 ang);
void dgMathRotateXYZ(dgMathAngle3* ang);
void dgMathRotateZXY(dgMathAngle3* ang);
void dgMathScale(dgMathVector3* v);
void dgMathScaleXYZ(dgMathVector1 x, dgMathVector1 y, dgMathVector1 z);
void dgMathGetTranslation(dgMathVector3* v);
void dgMathGetTranslationM(dgMathVector3* v, dgMathMatrix* m);
void dgMathSetTranslation(dgMathVector3* v);
void dgMathSetTranslationM(dgMathMatrix* m, dgMathVector3* v);
Float dgMathDetMatrix();
Bool dgMathInvertMatrix(dgMathMatrix* m);
void dgMathTransposeMatrix(dgMathMatrix* m);
void dgMathCalcPoint(dgMathVector3* dst, dgMathVector3* src);
void dgMathCalcPoints(dgMathVector3* dst, dgMathVector3* src, int num);
void dgMathCalcVector(dgMathVector3* dst, dgMathVector3* src);
void dgMathCalcVectors(dgMathVector3* dst, dgMathVector3* src, int num);
void dgMathCopyAngle(dgMathAngle3* dst, dgMathAngle3* src);
void dgMathCopyVector(dgMathVector3* dst, dgMathVector3* src);
void dgMathUnitVector(dgMathVector3* v);
Float dgMathGetVectorLength(dgMathVector3* v);
Float dgMathGetVectorLength2(dgMathVector3* v);
Float dgMathInnerProduct(dgMathVector3* v1, dgMathVector3* v2);
Float dgMathOuterProduct(dgMathVector3* ov, dgMathVector3* v1, dgMathVector3* v2);

#endif // DG_MATH_INLINE_H