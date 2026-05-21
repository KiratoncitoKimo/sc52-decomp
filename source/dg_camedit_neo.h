#ifndef DG_CAMEDIT_NEO_H
#define DG_CAMEDIT_NEO_H

#include "sdk/ninja.h"
#include "dg_math.h"
#include "dg_camera.h"
#include "dg_char.h"

void* dgCamEditNeoSet(void* parent_task);
Bool dgCamEditNeoDisp();
void dgCamEditSetPosAng(Float beat, dgMathMatrix* pc_mat, dgMathMatrix* pc_mat_ixy, dgMathVector3* pb_pos, dgMathAngle3* pb_ang);
int dgCamEditNeoGetCamVarNo();
void dgCamEditNeoSetPlayerCharNo(dgCharNo no);
void dgCenInit();
void dgCenFinish();
void dgCenAbsolute(void* ptr);
void dgCenSetPlayerPosAng(dgMathMatrix* pc_mat, dgMathMatrix* pc_mat_ixy, dgMathVector3* pb_pos, dgMathAngle3* pb_ang);
void dgCenPlay(dgCamera* cam);
void dgCenSetPlayEndCallbackFunc(void (*func)());
Bool dgCenIsExistSeqNo(int seq_no);
void dgCenSetSeqNo(int seq_no);
void dgCenSetBaseFrame(Float frame);

#endif // DG_CAMEDIT_NEO_H