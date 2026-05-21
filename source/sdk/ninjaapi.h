#ifndef NINJAAPI_H
#define NINJAAPI_H

void njInitCamera(NJS_CAMERA* camera);
void njSetCamera(NJS_CAMERA* camera);
void njPitchCameraInterestEx(Angle ang);
void njYawCameraInterestEx(Angle ang);
void njRollCameraInterestEx(Angle ang);
void njForwardCameraPositionEx(Float x);
void njForwardCameraPosition(NJS_CAMERA* c, Float x);
void njPitchCameraInterest(NJS_CAMERA* c, Angle ang);
void njYawCameraInterest(NJS_CAMERA* c, Angle ang);
void njCameraExLookAt(NJS_POINT3* eye, NJS_POINT3* center, NJS_VECTOR* up);
void njRotateXCameraEx(Angle ang);
void njRotateYCameraEx(Angle ang);
void njRotateZCameraEx(Angle ang);
void njTranslateCameraEx(Float x, Float y, Float z);

void njQuaternionEx2(Float re, Float* im);
void njQuaternionEx(NJS_QUATERNION* qua);
Float njScalor(NJS_VECTOR* v);
Float njScalor2(NJS_VECTOR* v);
void njMirror(NJS_MATRIX* m, NJS_PLANE* pl);
void njTransposeMatrix(NJS_MATRIX* m);
void njAddMatrix(NJS_MATRIX* md, NJS_MATRIX* ms);
void njSubMatrix(NJS_MATRIX* md, NJS_MATRIX* ms);
void njInitMatrix(NJS_MATRIX* pBuf, Uint32 nSize);
Bool njPushMatrix(NJS_MATRIX* m);
Bool njPushMatrixEx();
Bool njPopMatrix(Uint32 n);
Bool njPopMatrixEx();
void njUnitMatrix(NJS_MATRIX* m);
void njTranslate(NJS_MATRIX* m, Float x, Float y, Float z);
void njTranslateV(NJS_MATRIX* m, NJS_VECTOR* v);
void njTranslateEx(NJS_VECTOR* v);
void njScale(NJS_MATRIX* m, Float sx, Float sy, Float sz);
void njScaleV(NJS_MATRIX* m, NJS_VECTOR* v);
void njScaleEx(NJS_VECTOR* v);
void njRotateX(NJS_MATRIX* m, Angle ang);
void njRotateY(NJS_MATRIX* m, Angle ang);
void njRotateZ(NJS_MATRIX* m, Angle ang);
void njRotateZXY(NJS_MATRIX* m, Angle x, Angle y, Angle z);
void njRotateXYZ(NJS_MATRIX* m, Angle angx, Angle angy, Angle angz);
void njRotateEx(Angle* ang, Sint32 lv);
void njGetMatrix(NJS_MATRIX* m);
void njSetMatrix(NJS_MATRIX* md, NJS_MATRIX* ms);
void njMultiMatrix(NJS_MATRIX* md, NJS_MATRIX* ms);
Bool njInvertMatrix(NJS_MATRIX* m);
void njUnitRotPortion(NJS_MATRIX* m);
void njGetTranslation(NJS_MATRIX* m, NJS_POINT3* p);
Float njUnitVector(NJS_VECTOR* v);
Float njInnerProduct(NJS_VECTOR* v1, NJS_VECTOR* v2);
Float njOuterProduct(NJS_VECTOR* v1, NJS_VECTOR* v2, NJS_VECTOR* vd);
void njAddVector(NJS_VECTOR* vd, NJS_VECTOR* vs);
void njSubVector(NJS_VECTOR* vd, NJS_VECTOR* vs);
void njCalcPoint(NJS_MATRIX* m, NJS_POINT3* ps, NJS_POINT3* pd);
void njCalcPointEx(NJS_POINT3* ps, NJS_POINT3* pd);
void njCalcPoints(NJS_MATRIX* m, NJS_POINT3* ps, NJS_POINT3* pd, Int num);
void njCalcVector(NJS_MATRIX* m, NJS_VECTOR* vs, NJS_VECTOR* vd);
void njCalcVectorEx(NJS_VECTOR* vs, NJS_VECTOR* vd);
void njCalcVectors(NJS_MATRIX* m, NJS_VECTOR* vs, NJS_VECTOR* vd, Int num);
Float njDetMatrix(NJS_MATRIX* m);

void njSetCnkBlendMode(Uint32 attr);
void njControl3D(Uint32 flag);
void njSetConstantAttr(Uint32 and_attr, Uint32 or_attr);

void njClipZ(Float n, Float f);
void njSetScreenDist(Float dist);
void njSetPerspective(Angle ang);
void njSetAspect(Float ax, Float ay);
void njSetScreen(NJS_SCREEN* s);
void njInitScreen();

void njDrawLine3DExStart(Float r, Uint32 BaseColor, Sint32 Trans);
void njDrawLine3DExEnd();
void njDrawLine3DExSetList(NJS_POINT3* vtx, Sint32 Count);
void njDrawLine3DExSetStrip(NJS_POINT3* vtx, Sint32 Count);

#endif // NINJAAPI_H