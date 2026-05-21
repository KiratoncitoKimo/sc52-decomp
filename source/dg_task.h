#ifndef DG_TASK_H
#define DG_TASK_H

#include "sdk/ninja.h"
#include "dg_mem.h"
#include "dg_main.h"

typedef struct dgTaskParam  dgTaskParam;
typedef struct dgTaskRoot   dgTaskRoot;
typedef struct dgTaskHeader dgTaskHeader;

struct dgTaskParam 
{ // 0x10
	/* 0x0 */ char* caption;
	/* 0x4 */ void (*exe_func)(/* parameters unknown */);
	/* 0x8 */ void (*dsp_func)(/* parameters unknown */);
	/* 0xc */ void (*del_func)(/* parameters unknown */);
};

struct dgTaskRoot 
{ // 0x8
	/* 0x0 */ Sint8 pause_flag;
	/* 0x1 */ Sint8 pause_enable_flag;
	/* 0x4 */ Sint32 task_num;
};

struct dgTaskHeader 
{ // 0x40
	/* 0x00 */ Sint32 head_mark;
	/* 0x04 */ Uint32 id;
	/* 0x08 */ Uint32 status;
	/* 0x0c */ dgTaskHeader* parent;
	/* 0x10 */ dgTaskHeader* child;
	/* 0x14 */ dgTaskHeader* sibling;
	/* 0x18 */ char* caption;
	/* 0x1c */ dgMemPartition* mem_partition;
	/* 0x20 */ void (*exe_func)(/* parameters unknown */);
	/* 0x24 */ void (*dsp_func)(/* parameters unknown */);
	/* 0x28 */ void (*del_func)(/* parameters unknown */);
	/* 0x2c */ Uint32 exe_micro;
	/* 0x30 */ Uint32 dsp_micro;
	/* 0x34 */ Uint32 exe_micro_hrc;
	/* 0x38 */ Uint32 dsp_micro_hrc;
	/* 0x3c */ dgMainDisplayListPrio draw_prio;
};

void dgTaskInit();
dgTaskRoot* dgTaskGetRoot();
dgTaskHeader* dgTaskGetHeader(void* task);
void* dgTaskGetTaskFromHeader(dgTaskHeader* h);
void* dgTaskGetChild(void* task);
void* dgTaskGetSibling(void* task);
void* dgTaskGetParent(void* task);
void dgTaskLoop();
void dgTaskFreeze(void* task);
void dgTaskMelt(void* task);
void* dgTaskSetChild(void* task, size_t size, dgTaskParam* param);
void* dgTaskSetChildP(dgMemPartition* p, void* task, size_t size, dgTaskParam* param);
void* dgTaskSetSibling(void* task, size_t size, dgTaskParam* param);
void* dgTaskSetSiblingP(dgMemPartition* p, void* task, size_t size, dgTaskParam* param);
void dgTaskDelete(void* task);
Bool dgTaskIsActive(void* task);
void dgTaskChangeExecFunc(void* task, void* func);
void dgTaskChangeDispFunc(void* task, void* func);
void dgTaskChangeDeleteFunc(void* task, void* func);
void dgTaskChangeCaption(void* task, char* caption);
char* dgTaskGetCaption(void* task);
Bool dgTaskIsPause();
void dgTaskEnablePause(Bool flag);
Bool dgTaskIsEnablePause();
void* dgTaskMalloc(void* task, size_t size);
void* dgTaskCalloc(void* task, size_t size);
void dgTaskFree(void* task, void* ptr);
int dgTaskGetNum();
dgMainDisplayListPrio dgTaskSetPrio(void* task, dgMainDisplayListPrio prio);
void dgTaskSetPauseFlag(Sint8 pause_flag);
Sint8 dgTaskGetPauseFlag();
Uint32 dgTaskGetExecMicro(void* task);
Uint32 dgTaskGetDispMicro(void* task);
Uint32 dgTaskGetHrcExecMicro(void* task);
Uint32 dgTaskGetHrcDispMicro(void* task);

#endif // DG_TASK_H