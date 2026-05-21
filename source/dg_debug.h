#ifndef DG_DEBUG_H
#define DG_DEBUG_H

#include "sdk/ninja.h"
#include "sdk/gindows.h"

#include "dg_mem.h"

typedef enum {
	DEB_COL_N = 0,
	DEB_COL_E = 1,
	DEB_COL_W = 2,
	DEB_COL_O = 3,
	DEB_COL_MAX = 4
} dgDebugColor;

typedef enum {
	DEB_F = 0,
	DEB_S8 = 1,
	DEB_S16 = 2,
	DEB_S32 = 3,
	DEB_U8 = 4,
	DEB_U16 = 5,
	DEB_U32 = 6,
	DEB_GLOBAL = 6,
	DEB_TF = 7,
	DEB_TS8 = 8,
	DEB_TS16 = 9,
	DEB_TS32 = 10,
	DEB_TU8 = 11,
	DEB_TU16 = 12,
	DEB_TU32 = 13
} dgDebugDataType;

typedef struct { // 0x1c
	/* 0x00 */ char* fmt;
	/* 0x04 */ void* ptr;
	/* 0x08 */ dgDebugDataType ptr_type;
	/* 0x0c */ float min_value;
	/* 0x10 */ float max_value;
	/* 0x14 */ float delta_value;
	/* 0x18 */ float page_value;
} dgDebugEditInfo;

int dgDebugCheckWho(int w);
void dgDebugSetWho(int w);
void dgDebugSetWindowFlag(Bool flag);
Bool dgDebugGetWindowFlag();
void dgDebugSwitchWindowFlag();
void dgDebugSetWindowTransFlag(Bool flag);
Bool dgDebugGetWindowTransFlag();
void dgDebugSwitchWindowTransFlag();
void dgDebugDefaultWindowColor();
void dgDebugInitWindow();
void dgDebugExitWindow();
void* dgDebugSet(void* parent_task);
void* dgDebugGetTaskPtr();
void* dgDebugGetParentTaskOfWindow(GWHWND hWnd);
GWHWND dgDebugCreateWindow_Sub(void* parent_task, GWHWND hWnd, char* caption, int x, int y, void (*client_draw)(), void (*destructor)(), Sint32 param1, Sint32 param2, const dgDebugEditInfo* info, int info_num);
dgMemPartition* dgDebugGetMemPartition();
void dgDebugInitPerformance();
void dgDebugWatchPerformance();
Bool dgDebugIsDropFrame();
Uint32 dgDebugGetPerformanceMicro();
void dgDebugStartPerformance();
void dgDebugEndPerformance();
void dgDebugStartTaskPerformance();
void dgDebugEndTaskPerformance();
Sint32 dgDebugGetTaskPerformance();
void dgDebugStartPrePerformance();
void dgDebugEndPrePerformance();
void dgDebugStartPostPerformance();
void dgDebugEndPostPerformance();
void dgDebugStartGindowsPerformance();
void dgDebugEndGindowsPerformance();
void dgDebugCreatePerformanceWindow(void* parent_p);
void dgDebugCreatePeripheralInfoWindow(void* parent_p);
void dgDebugCreateRenderInfoWindow(void* parent_p);

#endif // DG_DEBUG_H