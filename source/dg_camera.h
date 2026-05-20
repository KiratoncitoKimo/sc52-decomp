#ifndef DG_CAMERA_H
#define DG_CAMERA_H

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