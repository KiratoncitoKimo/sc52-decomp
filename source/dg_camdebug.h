#ifndef DG_CAMDEBUG_H
#define DG_CAMDEBUG_H

#include "sdk/ninja.h"
#include "dg_math.h"

void* dgCamDebugSet(void* parent_task);
Bool dgCamDebugDisp();
void dgCamDebugSetPlayerCenterPosition(dgMathVector3* pos);
void dgCamDebugSetSelectPosition(dgMathVector3* pos);
void dgCamDebugLock(int flag);
void dgCamDebugGetCameraPosition(dgMathVector3* pos);
void dgCamDebugGetInterestPosition(dgMathVector3* pos);
dgMathAngle1 dgCamDebugGetRoll();
dgMathAngle1 dgCamDebugGetAngle();
void dgCamDebugSetCameraPosition(dgMathVector3* pos);
void dgCamDebugSetInterestPosition(dgMathVector3* pos);
void dgCamDebugSetRoll(dgMathAngle1 roll);
void dgCamDebugSetAngle(dgMathAngle1 ang);
dgMathAngle1 dgCamDebugModifyRoll(dgMathAngle1 angle);
dgMathAngle1 dgCamDebugModifyAngle(dgMathAngle1 angle);

#endif // DG_CAMDEBUG_H