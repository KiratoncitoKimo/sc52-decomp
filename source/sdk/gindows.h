#ifndef GINDOWS_H
#define GINDOWS_H

#include "ninja.h"

struct _gwWindow;

struct _gwWindow { // 0xa4
	/* 0x00 */ Sint32 style;
	/* 0x04 */ Sint32 wClass;
	/* 0x08 */ Sint32 ctrl_flag;
	/* 0x0c */ struct _gwWindow* parent;
	/* 0x10 */ struct _gwWindow* child;
	/* 0x14 */ struct _gwWindow* prev;
	/* 0x18 */ struct _gwWindow* next;
	/* 0x1c */ Sint32 x;
	/* 0x20 */ Sint32 y;
	/* 0x24 */ Sint32 w;
	/* 0x28 */ Sint32 h;
	/* 0x2c */ char* caption;
	/* 0x30 */ Sint32 fonttype;
	/* 0x34 */ Sint32 fsx;
	/* 0x38 */ Sint32 fsy;
	/* 0x3c */ Uint32 col[4];
	/* 0x4c */ Bool trans;
	/* 0x50 */ void (*execFunc)(/* parameters unknown */);
	/* 0x54 */ void (*drawFunc)(/* parameters unknown */);
	/* 0x58 */ void (*exitFunc)(/* parameters unknown */);
	/* 0x5c */ void (*clientExec)(/* parameters unknown */);
	/* 0x60 */ void (*clientDraw)(/* parameters unknown */);
	/* 0x64 */ void (*destructor)(/* parameters unknown */);
	/* 0x68 */ void* userBuf;
	/* 0x6c */ Sint32 param1;
	/* 0x70 */ Sint32 param2;
	/* 0x74 */ Sint32 param[4];
	/* 0x84 */ Float prio;
	/* 0x88 */ Uint32 text_color;
	/* 0x8c */ struct _gwWindow* hWndClip;
	/* 0x90 */ Sint16 mode;
	/* 0x92 */ Sint16 sizemode;
	/* 0x94 */ Sint32 org_x;
	/* 0x98 */ Sint32 org_y;
	/* 0x9c */ Sint32 org_w;
	/* 0xa0 */ Sint32 org_h;
};

typedef struct _gwWindow gwWindow;
typedef gwWindow* GWHWND;

#endif // GINDOWS_H