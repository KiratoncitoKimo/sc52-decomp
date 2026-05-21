#ifndef DG_MAIN_H
#define DG_MAIN_H

typedef enum {
	DSP_LIST_PRIO_CAMERA = 0,
	DSP_LIST_PRIO_0 = 1,
	DSP_LIST_PRIO_1 = 2,
	DSP_LIST_PRIO_2 = 3,
	DSP_LIST_PRIO_3 = 4,
	DSP_LIST_PRIO_4 = 5,
	DSP_LIST_PRIO_5 = 6,
	DSP_LIST_PRIO_6 = 7,
	DSP_LIST_PRIO_7 = 8,
	DSP_LIST_PRIO_8 = 9,
	DSP_LIST_PRIO_9 = 10,
	DSP_LIST_PRIO_A = 11,
	DSP_LIST_PRIO_B = 12,
	DSP_LIST_PRIO_C = 13,
	DSP_LIST_PRIO_D = 14,
	DSP_LIST_PRIO_E = 15,
	DSP_LIST_PRIO_NUM = 16
} dgMainDisplayListPrio;

float dgMainGetRenderTime();
Bool dgMainSetFlushFlagEnable(Bool flag);
Sint32 dgVSyncCallbackEntry(void (*func)(), void* arg_work, Uint32 priority);
void dgVSyncCallbackDelete(Sint32 id);
void AppChangeTVSetting(int type);
dgMainDisplayListPrio dgMainSetCurrentDisplayList(dgMainDisplayListPrio prio);
// int main(int argc, char** argv);
void dgMainLoop(Bool gindows_flag, Bool debug_flag);
int dgMainGetVSyncMysterious();

#endif // DG_MAIN_H