#ifndef DG_SCREEN_H
#define DG_SCREEN_H

#include "sdk/ninja.h"

void dgScreenGet(NJS_SCREEN* scr);
void dgScreenGetCenter(NJS_SCREEN* scr, Float* cx, Float* cy);
void dgScreenGetAspect(NJS_SCREEN* scr, Float* ax, Float* ay);
void dgScreenGetSize(NJS_SCREEN* scr, Float* w, Float* h);
void dgScreenSet(NJS_SCREEN* scr);
void dgScreenSetCenter(NJS_SCREEN* scr, Float cx, Float cy);
void dgScreenSetAspect(NJS_SCREEN* scr, Float ax, Float ay);
void dgScreenSetSize(NJS_SCREEN* scr, Float w, Float h);
void dgScreenCopy(NJS_SCREEN* dst, NJS_SCREEN* src);
Float dgScreenSetNearClipZ(Float near_z);
Float dgScreenSetFarClipZ(Float far_z);

#endif // DG_SCREEN_H