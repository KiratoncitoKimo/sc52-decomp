#ifndef DG_PRINTF_H
#define DG_PRINTF_H

#include "sdk/ninja.h"
#include "sdk/gindows.h"

#include "dg_debug.h"

void dgPrintfInit();
void dgPrintfExit();
void dgPrintfForce(int x, int y, char* fmt);
void dgPrintf(int x, int y, char* fmt);
int dgPrintfSetSize(int size);
int dgPrintfGetSize();
void dgPrintfSetFlag(int flag);
int dgPrintfGetFlag();
void dgPrintfSwitchFlag();
Uint32 dgPrintfGetTextColor(dgDebugColor type);
void dgPrintfInWindow(GWHWND hWnd, char* fmt, ...);
void dgPrintfKanjiInWindow(GWHWND hWnd, char* fmt);
void dgPrintfSeparaterInWindow(GWHWND hWnd);
void dgPrintfInEditWindow(GWHWND hWnd);
void dgPrintfInConsole(dgDebugColor type, char* fmt);

#endif // DG_PRINTF_H