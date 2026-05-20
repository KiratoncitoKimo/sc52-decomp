// File written by stdump v2.1 on 2026-05-20
// 
// Input file:
//   SC52.ELF
// Toolchain version(s):
//   unknown
// Built-in types:
//   Sint128                  128-bit integer
//   Uint128                  128-bit integer
//   Void                     void
//   char                     8-bit integer
//   complex double           64-bit floating point
//   complex double           128-bit floating point
//   complex float            32-bit floating point
//   complex float            64-bit floating point
//   complex long double      64-bit floating point
//   complex long double      128-bit floating point
//   double                   64-bit floating point
//   float                    32-bit floating point
//   int                      32-bit signed integer
//   long double              64-bit floating point
//   long int                 64-bit signed integer
//   long long int            64-bit signed integer
//   long long unsigned int   64-bit unsigned integer
//   long unsigned int        64-bit unsigned integer
//   long128                  128-bit integer
//   short int                16-bit signed integer
//   short unsigned int       16-bit unsigned integer
//   signed char              8-bit signed integer
//   u_long128                128-bit integer
//   ulTask                   void
//   unsigned char            8-bit unsigned integer
//   unsigned int             32-bit unsigned integer
//   void                     void

typedef struct { // 0x8
	/* 0x0 */ int real;
	/* 0x4 */ int imag;
} complex int;

typedef unsigned char Uint8;
typedef signed char Sint8;
typedef short unsigned int Uint16;
typedef short int Sint16;
typedef unsigned int Uint32;
typedef int Sint32;
typedef long int Sint64;
typedef long unsigned int Uint64;
typedef float Float;
typedef Sint32 Bool;
typedef Uint32 ulPackedColor;
typedef ulPackedColor ulPColor;
typedef ulPackedColor ulPCol;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef unsigned int size_t;
typedef int wchar_t;
typedef long unsigned int clock_t;
typedef long int time_t;

struct tm { // 0x24
	/* 0x00 */ int tm_sec;
	/* 0x04 */ int tm_min;
	/* 0x08 */ int tm_hour;
	/* 0x0c */ int tm_mday;
	/* 0x10 */ int tm_mon;
	/* 0x14 */ int tm_year;
	/* 0x18 */ int tm_wday;
	/* 0x1c */ int tm_yday;
	/* 0x20 */ int tm_isdst;
};

// warning: multiple differing types with the same name (type name not equal)
typedef __uint32_t ULong;

struct _glue { // 0xc
	/* 0x0 */ _glue *_next;
	/* 0x4 */ int _niobs;
	/* 0x8 */ __sFILE *_iobs;
};

// warning: multiple differing types with the same name (type name not equal)
typedef struct { // 0x18
	/* 0x00 */ _Bigint *_next;
	/* 0x04 */ int _k;
	/* 0x08 */ int _maxwds;
	/* 0x0c */ int _sign;
	/* 0x10 */ int _wds;
	/* 0x14 */ ULong _x[1];
} _Bigint;

struct _atexit { // 0x88
	/* 0x00 */ _atexit *_next;
	/* 0x04 */ int _ind;
	/* 0x08 */ void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf { // 0x8
	/* 0x0 */ unsigned char *_base;
	/* 0x4 */ int _size;
};

typedef long int _fpos_t;

struct __sFILE { // 0x58
	/* 0x00 */ unsigned char *_p;
	/* 0x04 */ int _r;
	/* 0x08 */ int _w;
	/* 0x0c */ short int _flags;
	/* 0x0e */ short int _file;
	/* 0x10 */ __sbuf _bf;
	/* 0x18 */ int _lbfsize;
	/* 0x1c */ void *_cookie;
	/* 0x20 */ int (*_read)(/* parameters unknown */);
	/* 0x24 */ int (*_write)(/* parameters unknown */);
	/* 0x28 */ _fpos_t (*_seek)(/* parameters unknown */);
	/* 0x2c */ int (*_close)(/* parameters unknown */);
	/* 0x30 */ __sbuf _ub;
	/* 0x38 */ unsigned char *_up;
	/* 0x3c */ int _ur;
	/* 0x40 */ unsigned char _ubuf[3];
	/* 0x43 */ unsigned char _nbuf[1];
	/* 0x44 */ __sbuf _lb;
	/* 0x4c */ int _blksize;
	/* 0x50 */ int _offset;
	/* 0x54 */ _reent *_data;
};

// warning: multiple differing types with the same name (size not equal)
struct _reent { // 0x2ec
	/* 0x000 */ int _errno;
	/* 0x004 */ __sFILE *_stdin;
	/* 0x008 */ __sFILE *_stdout;
	/* 0x00c */ __sFILE *_stderr;
	/* 0x010 */ int _inc;
	/* 0x014 */ char _emergency[25];
	/* 0x030 */ int _current_category;
	/* 0x034 */ char *_current_locale;
	/* 0x038 */ int __sdidinit;
	/* 0x03c */ void (*__cleanup)(/* parameters unknown */);
	/* 0x040 */ _Bigint *_result;
	/* 0x044 */ int _result_k;
	/* 0x048 */ _Bigint *_p5s;
	/* 0x04c */ _Bigint **_freelist;
	/* 0x050 */ int _cvtlen;
	/* 0x054 */ char *_cvtbuf;
	/* 0x058 */ union { // 0xf0
		/* 0x058 */ struct { // 0x4c
			/* 0x058 */ unsigned int _rand_next;
			/* 0x05c */ char *_strtok_last;
			/* 0x060 */ char _asctime_buf[26];
			/* 0x07c */ tm _localtime_buf;
			/* 0x0a0 */ int _gamma_signgam;
		} _reent;
		/* 0x058 */ struct { // 0xf0
			/* 0x058 */ unsigned char *_nextf[30];
			/* 0x0d0 */ unsigned int _nmalloc[30];
		} _unused;
	} _new;
	/* 0x148 */ _atexit *_atexit;
	/* 0x14c */ _atexit _atexit0;
	/* 0x1d4 */ void (**_sig_func)(/* parameters unknown */);
	/* 0x1d8 */ _glue __sglue;
	/* 0x1e4 */ __sFILE __sf[3];
};

typedef struct { // 0x8
	/* 0x0 */ int quot;
	/* 0x4 */ int rem;
} div_t;

typedef struct { // 0x10
	/* 0x0 */ long int quot;
	/* 0x8 */ long int rem;
} ldiv_t;

// warning: multiple differing types with the same name (descriptor not equal)
typedef char *__gnuc_va_list;
typedef _fpos_t fpos_t;
typedef __sFILE FILE;

union __dmath { // 0x8
	/* 0x0 */ __uint32_t i[2];
	/* 0x0 */ double d;
};

struct exception { // 0x28
	/* 0x00 */ int type;
	/* 0x04 */ char *name;
	/* 0x08 */ double arg1;
	/* 0x10 */ double arg2;
	/* 0x18 */ double retval;
	/* 0x20 */ int err;
};

enum __fdlibm_version {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
};

typedef unsigned char u_char;
typedef short unsigned int u_short;
typedef unsigned int u_int;
typedef long unsigned int u_long;

struct ThreadParam { // 0x30
	/* 0x00 */ int status;
	/* 0x04 */ void *entry;
	/* 0x08 */ void *stack;
	/* 0x0c */ int stackSize;
	/* 0x10 */ void *gpReg;
	/* 0x14 */ int initPriority;
	/* 0x18 */ int currentPriority;
	/* 0x1c */ u_int attr;
	/* 0x20 */ u_int option;
	/* 0x24 */ int waitType;
	/* 0x28 */ int waitId;
	/* 0x2c */ int wakeupCount;
};

struct SemaParam { // 0x18
	/* 0x00 */ int currentCount;
	/* 0x04 */ int maxCount;
	/* 0x08 */ int initCount;
	/* 0x0c */ int numWaitThreads;
	/* 0x10 */ u_int attr;
	/* 0x14 */ u_int option;
};

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int COUNT : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_COUNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CLKS : 2;
	/* 0x0:2 */ unsigned int GATE : 1;
	/* 0x0:3 */ unsigned int GATS : 1;
	/* 0x0:4 */ unsigned int GATM : 2;
	/* 0x0:6 */ unsigned int ZRET : 1;
	/* 0x0:7 */ unsigned int CUE : 1;
	/* 0x1:0 */ unsigned int CMPE : 1;
	/* 0x1:1 */ unsigned int OVFE : 1;
	/* 0x1:2 */ unsigned int EQUF : 1;
	/* 0x1:3 */ unsigned int OVFF : 1;
	/* 0x1:4 */ unsigned int p0 : 20;
} tT_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int COMP : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_COMP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int HOLD : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_HOLD;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OPTION : 28;
	/* 0x3:4 */ unsigned int CODE : 4;
} tIPU_CMD_write;

typedef struct { // 0x8
	/* 0x0 */ unsigned int DATA;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_CMD_read;

typedef struct { // 0x8
	/* 0x0 */ unsigned int BSTOP;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_TOP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int IFC : 4;
	/* 0x0:4 */ unsigned int OFC : 4;
	/* 0x1:0 */ unsigned int CBP : 6;
	/* 0x1:6 */ unsigned int ECD : 1;
	/* 0x1:7 */ unsigned int SCD : 1;
	/* 0x2:0 */ unsigned int IDP : 2;
	/* 0x2:2 */ unsigned int p0 : 2;
	/* 0x2:4 */ unsigned int AS : 1;
	/* 0x2:5 */ unsigned int IVF : 1;
	/* 0x2:6 */ unsigned int QST : 1;
	/* 0x2:7 */ unsigned int MP1 : 1;
	/* 0x3:0 */ unsigned int PCT : 3;
	/* 0x3:3 */ unsigned int p1 : 3;
	/* 0x3:6 */ unsigned int RST : 1;
	/* 0x3:7 */ unsigned int BUSY : 1;
} tIPU_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int BP : 7;
	/* 0x0:7 */ unsigned int p0 : 1;
	/* 0x1:0 */ unsigned int IFC : 4;
	/* 0x1:4 */ unsigned int p1 : 4;
	/* 0x2:0 */ unsigned int FP : 2;
	/* 0x2:2 */ unsigned int p2 : 14;
} tIPU_BP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int p0 : 2;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p1 : 28;
} tGIF_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int p1 : 29;
} tGIF_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int M3P : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p0 : 1;
	/* 0x0:5 */ unsigned int IP3 : 1;
	/* 0x0:6 */ unsigned int P3Q : 1;
	/* 0x0:7 */ unsigned int P2Q : 1;
	/* 0x1:0 */ unsigned int P1Q : 1;
	/* 0x1:1 */ unsigned int OPH : 1;
	/* 0x1:2 */ unsigned int APATH : 2;
	/* 0x1:4 */ unsigned int DIR : 1;
	/* 0x1:5 */ unsigned int p1 : 11;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
} tGIF_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int NLOOP : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int tag : 16;
} tGIF_TAG0;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int tag : 14;
	/* 0x1:6 */ unsigned int PRE : 1;
	/* 0x1:7 */ unsigned int PRIM : 11;
	/* 0x3:2 */ unsigned int FLG : 2;
	/* 0x3:4 */ unsigned int NREG : 4;
} tGIF_TAG1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int tag;
} tGIF_TAG2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int tag;
} tGIF_TAG3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int p0 : 1;
	/* 0x2:0 */ unsigned int REGCNT : 4;
	/* 0x2:4 */ unsigned int VUADDR : 10;
	/* 0x3:6 */ unsigned int p1 : 2;
} tGIF_CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int P3CNT : 15;
	/* 0x1:7 */ unsigned int p0 : 17;
} tGIF_P3CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int p0 : 16;
} tGIF_P3TAG;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int p0 : 3;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int p1 : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p2 : 10;
	/* 0x3:0 */ unsigned int FQC : 4;
	/* 0x3:4 */ unsigned int p3 : 4;
} tVIF0_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
} tVIF0_FBRST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
} tVIF0_ERR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MARK : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF_MARK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CL : 8;
	/* 0x1:0 */ unsigned int WL : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF_CYCLE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MOD : 2;
	/* 0x0:2 */ unsigned int p0 : 30;
} tVIF_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
} tVIF0_NUM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int m0 : 2;
	/* 0x0:2 */ unsigned int m1 : 2;
	/* 0x0:4 */ unsigned int m2 : 2;
	/* 0x0:6 */ unsigned int m3 : 2;
	/* 0x1:0 */ unsigned int m4 : 2;
	/* 0x1:2 */ unsigned int m5 : 2;
	/* 0x1:4 */ unsigned int m6 : 2;
	/* 0x1:6 */ unsigned int m7 : 2;
	/* 0x2:0 */ unsigned int m8 : 2;
	/* 0x2:2 */ unsigned int m9 : 2;
	/* 0x2:4 */ unsigned int m10 : 2;
	/* 0x2:6 */ unsigned int m11 : 2;
	/* 0x3:0 */ unsigned int m12 : 2;
	/* 0x3:2 */ unsigned int m13 : 2;
	/* 0x3:4 */ unsigned int m14 : 2;
	/* 0x3:6 */ unsigned int m15 : 2;
} tVIF_MASK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int immediate : 16;
	/* 0x2:0 */ unsigned int num : 8;
	/* 0x3:0 */ unsigned int CMD : 8;
} tVIF_CODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ITOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF_ITOPS;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ITOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF_ITOP;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R0;
} tVIF_R0;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R1;
} tVIF_R1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R2;
} tVIF_R2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R3;
} tVIF_R3;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C0;
} tVIF_C0;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C1;
} tVIF_C1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C2;
} tVIF_C2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C3;
} tVIF_C3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int VGW : 1;
	/* 0x0:4 */ unsigned int p0 : 2;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int DBF : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p1 : 9;
	/* 0x2:7 */ unsigned int FDR : 1;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
} tVIF1_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
} tVIF1_FBRST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
} tVIF1_ERR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
} tVIF1_NUM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int BASE : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_BASE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OFFSET : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_OFST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_TOPS;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_TOP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int MOD : 2;
	/* 0x0:4 */ unsigned int ASP : 2;
	/* 0x0:6 */ unsigned int TTE : 1;
	/* 0x0:7 */ unsigned int TIE : 1;
	/* 0x1:0 */ unsigned int STR : 1;
	/* 0x1:1 */ unsigned int p1 : 7;
	/* 0x2:0 */ unsigned int TAG : 16;
} tD_CHCR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_MADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int QWC : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tD_QWC;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_TADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR0;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR1;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 14;
	/* 0x1:6 */ unsigned int p0 : 18;
} tD_SADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DMAE : 1;
	/* 0x0:1 */ unsigned int RELE : 1;
	/* 0x0:2 */ unsigned int MFD : 2;
	/* 0x0:4 */ unsigned int STS : 2;
	/* 0x0:6 */ unsigned int STD : 2;
	/* 0x1:0 */ unsigned int RCYC : 3;
	/* 0x1:3 */ unsigned int p0 : 21;
} tD_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CIS0 : 1;
	/* 0x0:1 */ unsigned int CIS1 : 1;
	/* 0x0:2 */ unsigned int CIS2 : 1;
	/* 0x0:3 */ unsigned int CIS3 : 1;
	/* 0x0:4 */ unsigned int CIS4 : 1;
	/* 0x0:5 */ unsigned int CIS5 : 1;
	/* 0x0:6 */ unsigned int CIS6 : 1;
	/* 0x0:7 */ unsigned int CIS7 : 1;
	/* 0x1:0 */ unsigned int CIS8 : 1;
	/* 0x1:1 */ unsigned int CIS9 : 1;
	/* 0x1:2 */ unsigned int p0 : 3;
	/* 0x1:5 */ unsigned int SIS : 1;
	/* 0x1:6 */ unsigned int MEIS : 1;
	/* 0x1:7 */ unsigned int BEIS : 1;
	/* 0x2:0 */ unsigned int CIM0 : 1;
	/* 0x2:1 */ unsigned int CIM1 : 1;
	/* 0x2:2 */ unsigned int CIM2 : 1;
	/* 0x2:3 */ unsigned int CIM3 : 1;
	/* 0x2:4 */ unsigned int CIM4 : 1;
	/* 0x2:5 */ unsigned int CIM5 : 1;
	/* 0x2:6 */ unsigned int CIM6 : 1;
	/* 0x2:7 */ unsigned int CIM7 : 1;
	/* 0x3:0 */ unsigned int CIM8 : 1;
	/* 0x3:1 */ unsigned int CIM9 : 1;
	/* 0x3:2 */ unsigned int p1 : 3;
	/* 0x3:5 */ unsigned int SIM : 1;
	/* 0x3:6 */ unsigned int MEIM : 1;
	/* 0x3:7 */ unsigned int p2 : 1;
} tD_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CPC0 : 1;
	/* 0x0:1 */ unsigned int CPC1 : 1;
	/* 0x0:2 */ unsigned int CPC2 : 1;
	/* 0x0:3 */ unsigned int CPC3 : 1;
	/* 0x0:4 */ unsigned int CPC4 : 1;
	/* 0x0:5 */ unsigned int CPC5 : 1;
	/* 0x0:6 */ unsigned int CPC6 : 1;
	/* 0x0:7 */ unsigned int CPC7 : 1;
	/* 0x1:0 */ unsigned int CPC8 : 1;
	/* 0x1:1 */ unsigned int CPC9 : 1;
	/* 0x1:2 */ unsigned int p0 : 6;
	/* 0x2:0 */ unsigned int CDE0 : 1;
	/* 0x2:1 */ unsigned int CDE1 : 1;
	/* 0x2:2 */ unsigned int CDE2 : 1;
	/* 0x2:3 */ unsigned int CDE3 : 1;
	/* 0x2:4 */ unsigned int CDE4 : 1;
	/* 0x2:5 */ unsigned int CDE5 : 1;
	/* 0x2:6 */ unsigned int CDE6 : 1;
	/* 0x2:7 */ unsigned int CDE7 : 1;
	/* 0x3:0 */ unsigned int CDE8 : 1;
	/* 0x3:1 */ unsigned int CDE9 : 1;
	/* 0x3:2 */ unsigned int p1 : 5;
	/* 0x3:7 */ unsigned int PCE : 1;
} tD_PCR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int SQWC : 8;
	/* 0x1:0 */ unsigned int p0 : 8;
	/* 0x2:0 */ unsigned int TQWC : 8;
	/* 0x3:0 */ unsigned int p1 : 8;
} tD_SQWC;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RMSK : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_RBSR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_RBOR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_STADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
} tD_ENABLER;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
} tD_ENABLEW;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EN1 : 1;
	/* 0x0:1 */ unsigned int EN2 : 1;
	/* 0x0:2 */ unsigned int CRTMD : 3;
	/* 0x0:5 */ unsigned int MMOD : 1;
	/* 0x0:6 */ unsigned int AMOD : 1;
	/* 0x0:7 */ unsigned int SLBG : 1;
	/* 0x1:0 */ unsigned int ALP : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
	/* 0x4 */ unsigned int p1;
} tGS_PMODE;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int INT : 1;
	/* 0x0:1 */ unsigned int FFMD : 1;
	/* 0x0:2 */ unsigned int DPMS : 2;
	/* 0x0:4 */ unsigned int p0 : 28;
	/* 0x4 */ unsigned int p1;
} tGS_SMODE2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_DISPFB1;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_DISPLAY1;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_DISPLAY2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EXBP : 14;
	/* 0x1:6 */ unsigned int EXBW : 6;
	/* 0x2:4 */ unsigned int FBIN : 2;
	/* 0x2:6 */ unsigned int WFFMD : 1;
	/* 0x2:7 */ unsigned int EMODA : 2;
	/* 0x3:1 */ unsigned int EMODC : 2;
	/* 0x3:3 */ unsigned int p0 : 5;
	/* 0x4:0 */ unsigned int WDX : 11;
	/* 0x5:3 */ unsigned int WDY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_EXTBUF;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SX : 12;
	/* 0x1:4 */ unsigned int SY : 11;
	/* 0x2:7 */ unsigned int SMPH : 4;
	/* 0x3:3 */ unsigned int SMPV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int WW : 12;
	/* 0x5:4 */ unsigned int WH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_EXTDATA;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int WRITE : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_EXTWRITE;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int R : 8;
	/* 0x1:0 */ unsigned int G : 8;
	/* 0x2:0 */ unsigned int B : 8;
	/* 0x3:0 */ unsigned int p0 : 8;
	/* 0x4 */ unsigned int p1;
} tGS_BGCOLOR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SIGNAL : 1;
	/* 0x0:1 */ unsigned int FINISH : 1;
	/* 0x0:2 */ unsigned int HSINT : 1;
	/* 0x0:3 */ unsigned int VSINT : 1;
	/* 0x0:4 */ unsigned int EDWINT : 1;
	/* 0x0:5 */ unsigned int p0 : 3;
	/* 0x1:0 */ unsigned int FLUSH : 1;
	/* 0x1:1 */ unsigned int RESET : 1;
	/* 0x1:2 */ unsigned int p1 : 2;
	/* 0x1:4 */ unsigned int NFIELD : 1;
	/* 0x1:5 */ unsigned int FIELD : 1;
	/* 0x1:6 */ unsigned int FIFO : 2;
	/* 0x2:0 */ unsigned int REV : 8;
	/* 0x3:0 */ unsigned int ID : 8;
	/* 0x4 */ unsigned int p2;
} tGS_CSR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int p0 : 8;
	/* 0x1:0 */ unsigned int SIGMSK : 1;
	/* 0x1:1 */ unsigned int FINISHMSK : 1;
	/* 0x1:2 */ unsigned int HSMSK : 1;
	/* 0x1:3 */ unsigned int VSMSK : 1;
	/* 0x1:4 */ unsigned int EDWMSK : 1;
	/* 0x1:5 */ unsigned int p1 : 19;
	/* 0x4 */ unsigned int p2;
} tGS_IMR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_BUSDIR;

typedef struct { // 0x8
	/* 0x0 */ unsigned int SIGID;
	/* 0x4 */ unsigned int LBLID;
} tGS_SIGLBLID;

typedef struct { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_short vi[16];
} sceDevVu0Cnd;

typedef struct { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_int p;
	/* 0x21c */ u_short vi[16];
} sceDevVu1Cnd;

typedef struct { // 0x30
	/* 0x00 */ u_long128 tag;
	/* 0x10 */ u_int stat;
	/* 0x14 */ u_int count;
	/* 0x18 */ u_int p3count;
	/* 0x1c */ u_int p3tag;
	/* 0x20 */ u_int pad;
} sceDevGifCnd;

typedef struct { // 0x3c
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short mark;
	/* 0x32 */ u_short num;
	/* 0x34 */ u_char error;
	/* 0x35 */ u_char cl;
	/* 0x36 */ u_char wl;
	/* 0x37 */ u_char cmod;
	/* 0x38 */ u_char pad;
} sceDevVif0Cnd;

typedef struct { // 0x44
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short base;
	/* 0x32 */ u_short offset;
	/* 0x34 */ u_short top;
	/* 0x36 */ u_short tops;
	/* 0x38 */ u_short mark;
	/* 0x3a */ u_short num;
	/* 0x3c */ u_char error;
	/* 0x3d */ u_char cl;
	/* 0x3e */ u_char wl;
	/* 0x3f */ u_char cmod;
	/* 0x40 */ u_char pad;
} sceDevVif1Cnd;

typedef struct { // 0x10
	/* 0x0:0 */ long unsigned int NLOOP : 15;
	/* 0x1:7 */ long unsigned int EOP : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int id : 14;
	/* 0x5:6 */ long unsigned int PRE : 1;
	/* 0x5:7 */ long unsigned int PRIM : 11;
	/* 0x7:2 */ long unsigned int FLG : 2;
	/* 0x7:4 */ long unsigned int NREG : 4;
	/* 0x8:0 */ long unsigned int REGS0 : 4;
	/* 0x8:4 */ long unsigned int REGS1 : 4;
	/* 0x9:0 */ long unsigned int REGS2 : 4;
	/* 0x9:4 */ long unsigned int REGS3 : 4;
	/* 0xa:0 */ long unsigned int REGS4 : 4;
	/* 0xa:4 */ long unsigned int REGS5 : 4;
	/* 0xb:0 */ long unsigned int REGS6 : 4;
	/* 0xb:4 */ long unsigned int REGS7 : 4;
	/* 0xc:0 */ long unsigned int REGS8 : 4;
	/* 0xc:4 */ long unsigned int REGS9 : 4;
	/* 0xd:0 */ long unsigned int REGS10 : 4;
	/* 0xd:4 */ long unsigned int REGS11 : 4;
	/* 0xe:0 */ long unsigned int REGS12 : 4;
	/* 0xe:4 */ long unsigned int REGS13 : 4;
	/* 0xf:0 */ long unsigned int REGS14 : 4;
	/* 0xf:4 */ long unsigned int REGS15 : 4;
} sceGifTag;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int A : 2;
	/* 0x0:2 */ long unsigned int B : 2;
	/* 0x0:4 */ long unsigned int C : 2;
	/* 0x0:6 */ long unsigned int D : 2;
	/* 0x1:0 */ long unsigned int pad8 : 24;
	/* 0x4:0 */ long unsigned int FIX : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
} sceGsAlpha;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SBP : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int SBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int SPSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int DBP : 14;
	/* 0x5:6 */ long unsigned int pad46 : 2;
	/* 0x6:0 */ long unsigned int DBW : 6;
	/* 0x6:6 */ long unsigned int pad54 : 2;
	/* 0x7:0 */ long unsigned int DPSM : 6;
	/* 0x7:6 */ long unsigned int pad62 : 2;
} sceGsBitbltbuf;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int WMS : 2;
	/* 0x0:2 */ long unsigned int WMT : 2;
	/* 0x0:4 */ long unsigned int MINU : 10;
	/* 0x1:6 */ long unsigned int MAXU : 10;
	/* 0x3:0 */ long unsigned int MINV : 10;
	/* 0x4:2 */ long unsigned int MAXV : 10;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsClamp;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int CLAMP : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsColclamp;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int DIMX00 : 3;
	/* 0x0:3 */ long unsigned int pad00 : 1;
	/* 0x0:4 */ long unsigned int DIMX01 : 3;
	/* 0x0:7 */ long unsigned int pad01 : 1;
	/* 0x1:0 */ long unsigned int DIMX02 : 3;
	/* 0x1:3 */ long unsigned int pad02 : 1;
	/* 0x1:4 */ long unsigned int DIMX03 : 3;
	/* 0x1:7 */ long unsigned int pad03 : 1;
	/* 0x2:0 */ long unsigned int DIMX10 : 3;
	/* 0x2:3 */ long unsigned int pad10 : 1;
	/* 0x2:4 */ long unsigned int DIMX11 : 3;
	/* 0x2:7 */ long unsigned int pad11 : 1;
	/* 0x3:0 */ long unsigned int DIMX12 : 3;
	/* 0x3:3 */ long unsigned int pad12 : 1;
	/* 0x3:4 */ long unsigned int DIMX13 : 3;
	/* 0x3:7 */ long unsigned int pad13 : 1;
	/* 0x4:0 */ long unsigned int DIMX20 : 3;
	/* 0x4:3 */ long unsigned int pad20 : 1;
	/* 0x4:4 */ long unsigned int DIMX21 : 3;
	/* 0x4:7 */ long unsigned int pad21 : 1;
	/* 0x5:0 */ long unsigned int DIMX22 : 3;
	/* 0x5:3 */ long unsigned int pad22 : 1;
	/* 0x5:4 */ long unsigned int DIMX23 : 3;
	/* 0x5:7 */ long unsigned int pad23 : 1;
	/* 0x6:0 */ long unsigned int DIMX30 : 3;
	/* 0x6:3 */ long unsigned int pad30 : 1;
	/* 0x6:4 */ long unsigned int DIMX31 : 3;
	/* 0x6:7 */ long unsigned int pad31 : 1;
	/* 0x7:0 */ long unsigned int DIMX32 : 3;
	/* 0x7:3 */ long unsigned int pad32 : 1;
	/* 0x7:4 */ long unsigned int DIMX33 : 3;
	/* 0x7:7 */ long unsigned int pad33 : 1;
} sceGsDimx;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int DTHE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsDthe;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FBA : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsFba;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int pad00;
} sceGsFinish;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 56;
	/* 0x7:0 */ long unsigned int F : 8;
} sceGsFog;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FCR : 8;
	/* 0x1:0 */ long unsigned int FCG : 8;
	/* 0x2:0 */ long unsigned int FCB : 8;
	/* 0x3:0 */ long unsigned int pad24 : 40;
} sceGsFogcol;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 7;
	/* 0x2:0 */ long unsigned int FBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int PSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int FBMSK : 32;
} sceGsFrame;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int WDATA;
} sceGsHwreg;

typedef struct { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
} sceGsLabel;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP1 : 14;
	/* 0x1:6 */ long unsigned int TBW1 : 6;
	/* 0x2:4 */ long unsigned int TBP2 : 14;
	/* 0x4:2 */ long unsigned int TBW2 : 6;
	/* 0x5:0 */ long unsigned int TBP3 : 14;
	/* 0x6:6 */ long unsigned int TBW3 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
} sceGsMiptbp1;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP4 : 14;
	/* 0x1:6 */ long unsigned int TBW4 : 6;
	/* 0x2:4 */ long unsigned int TBP5 : 14;
	/* 0x4:2 */ long unsigned int TBW5 : 6;
	/* 0x5:0 */ long unsigned int TBP6 : 14;
	/* 0x6:6 */ long unsigned int TBW6 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
} sceGsMiptbp2;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int PABE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsPabe;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int PRIM : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
} sceGsPrim;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
} sceGsPrmode;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int AC : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsPrmodecont;

typedef struct { // 0x8
	/* 0x0:0 */ u_int R : 8;
	/* 0x1:0 */ u_int G : 8;
	/* 0x2:0 */ u_int B : 8;
	/* 0x3:0 */ u_int A : 8;
	/* 0x4 */ float Q;
} sceGsRgbaq;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int MSK : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
} sceGsScanmsk;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SCAX0 : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SCAX1 : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int SCAY0 : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int SCAY1 : 11;
	/* 0x7:3 */ long unsigned int pad59 : 5;
} sceGsScissor;

typedef struct { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
} sceGsSignal;

typedef struct { // 0x8
	/* 0x0 */ float S;
	/* 0x4 */ float T;
} sceGsSt;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int ATE : 1;
	/* 0x0:1 */ long unsigned int ATST : 3;
	/* 0x0:4 */ long unsigned int AREF : 8;
	/* 0x1:4 */ long unsigned int AFAIL : 2;
	/* 0x1:6 */ long unsigned int DATE : 1;
	/* 0x1:7 */ long unsigned int DATM : 1;
	/* 0x2:0 */ long unsigned int ZTE : 1;
	/* 0x2:1 */ long unsigned int ZTST : 2;
	/* 0x2:3 */ long unsigned int pad19 : 45;
} sceGsTest;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP0 : 14;
	/* 0x1:6 */ long unsigned int TBW : 6;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int TW : 4;
	/* 0x3:6 */ long unsigned int TH : 4;
	/* 0x4:2 */ long unsigned int TCC : 1;
	/* 0x4:3 */ long unsigned int TFX : 2;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
} sceGsTex0;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int LCM : 1;
	/* 0x0:1 */ long unsigned int pad01 : 1;
	/* 0x0:2 */ long unsigned int MXL : 3;
	/* 0x0:5 */ long unsigned int MMAG : 1;
	/* 0x0:6 */ long unsigned int MMIN : 3;
	/* 0x1:1 */ long unsigned int MTBA : 1;
	/* 0x1:2 */ long unsigned int pad10 : 9;
	/* 0x2:3 */ long unsigned int L : 2;
	/* 0x2:5 */ long unsigned int pad21 : 11;
	/* 0x4:0 */ long unsigned int K : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsTex1;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 20;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int pad26 : 11;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
} sceGsTex2;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TA0 : 8;
	/* 0x1:0 */ long unsigned int pad08 : 7;
	/* 0x1:7 */ long unsigned int AEM : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int TA1 : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
} sceGsTexa;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int CBW : 6;
	/* 0x0:6 */ long unsigned int COU : 6;
	/* 0x1:4 */ long unsigned int COV : 10;
	/* 0x2:6 */ long unsigned int pad22 : 42;
} sceGsTexclut;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int pad00;
} sceGsTexflush;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int XDR : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
} sceGsTrxdir;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SSAX : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SSAY : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int DSAX : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int DSAY : 11;
	/* 0x7:3 */ long unsigned int DIR : 2;
	/* 0x7:5 */ long unsigned int pad61 : 3;
} sceGsTrxpos;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int RRW : 12;
	/* 0x1:4 */ long unsigned int pad12 : 20;
	/* 0x4:0 */ long unsigned int RRH : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsTrxreg;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int U : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int V : 14;
	/* 0x3:6 */ long unsigned int pad30 : 34;
} sceGsUv;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int OFX : 16;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int OFY : 16;
	/* 0x6:0 */ long unsigned int pad48 : 16;
} sceGsXyoffset;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 32;
} sceGsXyz;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 24;
	/* 0x7:0 */ long unsigned int F : 8;
} sceGsXyzf;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int ZBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 15;
	/* 0x3:0 */ long unsigned int PSM : 4;
	/* 0x3:4 */ long unsigned int pad28 : 4;
	/* 0x4:0 */ long unsigned int ZMSK : 1;
	/* 0x4:1 */ long unsigned int pad33 : 31;
} sceGsZbuf;

struct _sceDmaTag { // 0x10
	/* 0x0 */ u_short qwc;
	/* 0x2 */ u_char mark;
	/* 0x3 */ u_char id;
	/* 0x4 */ _sceDmaTag *next;
	/* 0x8 */ u_int p[2];
};

typedef _sceDmaTag sceDmaTag;

typedef struct { // 0x14
	/* 0x00 */ u_char sts;
	/* 0x01 */ u_char std;
	/* 0x02 */ u_char mfd;
	/* 0x03 */ u_char rcycle;
	/* 0x04 */ u_short express;
	/* 0x06 */ u_short notify;
	/* 0x08 */ u_short sqwc;
	/* 0x0a */ u_short tqwc;
	/* 0x0c */ void *rbadr;
	/* 0x10 */ u_int rbmsk;
} sceDmaEnv;

typedef struct { // 0x90
	/* 0x00 */ tD_CHCR chcr;
	/* 0x04 */ u_int p0[3];
	/* 0x10 */ void *madr;
	/* 0x14 */ u_int p1[3];
	/* 0x20 */ u_int qwc;
	/* 0x24 */ u_int p2[3];
	/* 0x30 */ sceDmaTag *tadr;
	/* 0x34 */ u_int p3[3];
	/* 0x40 */ void *as0;
	/* 0x44 */ u_int p4[3];
	/* 0x50 */ void *as1;
	/* 0x54 */ u_int p5[3];
	/* 0x60 */ u_int p6[4];
	/* 0x70 */ u_int p7[4];
	/* 0x80 */ void *sadr;
	/* 0x84 */ u_int p8[3];
} sceDmaChan;

typedef struct { // 0x28
	/* 0x00 */ tGS_PMODE pmode;
	/* 0x08 */ tGS_SMODE2 smode2;
	/* 0x10 */ tGS_DISPFB2 dispfb;
	/* 0x18 */ tGS_DISPLAY2 display;
	/* 0x20 */ tGS_BGCOLOR bgcolor;
} sceGsDispEnv;

typedef struct { // 0x80
	/* 0x00 */ sceGsFrame frame1;
	/* 0x08 */ u_long frame1addr;
	/* 0x10 */ sceGsZbuf zbuf1;
	/* 0x18 */ long int zbuf1addr;
	/* 0x20 */ sceGsXyoffset xyoffset1;
	/* 0x28 */ long int xyoffset1addr;
	/* 0x30 */ sceGsScissor scissor1;
	/* 0x38 */ long int scissor1addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test1;
	/* 0x78 */ long int test1addr;
} sceGsDrawEnv1;

typedef struct { // 0x80
	/* 0x00 */ sceGsFrame frame2;
	/* 0x08 */ u_long frame2addr;
	/* 0x10 */ sceGsZbuf zbuf2;
	/* 0x18 */ long int zbuf2addr;
	/* 0x20 */ sceGsXyoffset xyoffset2;
	/* 0x28 */ long int xyoffset2addr;
	/* 0x30 */ sceGsScissor scissor2;
	/* 0x38 */ long int scissor2addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test2;
	/* 0x78 */ long int test2addr;
} sceGsDrawEnv2;

typedef struct { // 0x60
	/* 0x00 */ sceGsTest testa;
	/* 0x08 */ long int testaaddr;
	/* 0x10 */ sceGsPrim prim;
	/* 0x18 */ long int primaddr;
	/* 0x20 */ sceGsRgbaq rgbaq;
	/* 0x28 */ long int rgbaqaddr;
	/* 0x30 */ sceGsXyz xyz2a;
	/* 0x38 */ long int xyz2aaddr;
	/* 0x40 */ sceGsXyz xyz2b;
	/* 0x48 */ long int xyz2baddr;
	/* 0x50 */ sceGsTest testb;
	/* 0x58 */ long int testbaddr;
} sceGsClear;

typedef struct { // 0x230
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw0;
	/* 0x0e0 */ sceGsClear clear0;
	/* 0x140 */ sceGifTag giftag1;
	/* 0x150 */ sceGsDrawEnv1 draw1;
	/* 0x1d0 */ sceGsClear clear1;
} sceGsDBuff;

typedef struct { // 0x330
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw01;
	/* 0x0e0 */ sceGsDrawEnv2 draw02;
	/* 0x160 */ sceGsClear clear0;
	/* 0x1c0 */ sceGifTag giftag1;
	/* 0x1d0 */ sceGsDrawEnv1 draw11;
	/* 0x250 */ sceGsDrawEnv2 draw12;
	/* 0x2d0 */ sceGsClear clear1;
} sceGsDBuffDc;

typedef struct { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex11;
	/* 0x18 */ long int tex11addr;
	/* 0x20 */ sceGsTex0 tex01;
	/* 0x28 */ long int tex01addr;
	/* 0x30 */ sceGsClamp clamp1;
	/* 0x38 */ long int clamp1addr;
} sceGsTexEnv;

typedef struct { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex12;
	/* 0x18 */ long int tex12addr;
	/* 0x20 */ sceGsTex0 tex02;
	/* 0x28 */ long int tex02addr;
	/* 0x30 */ sceGsClamp clamp2;
	/* 0x38 */ long int clamp2addr;
} sceGsTexEnv2;

typedef struct { // 0x40
	/* 0x00 */ sceGsAlpha alpha1;
	/* 0x08 */ long int alpha1addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba1;
	/* 0x38 */ long int fba1addr;
} sceGsAlphaEnv;

typedef struct { // 0x40
	/* 0x00 */ sceGsAlpha alpha2;
	/* 0x08 */ long int alpha2addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba2;
	/* 0x38 */ long int fba2addr;
} sceGsAlphaEnv2;

typedef struct { // 0x60
	/* 0x00 */ sceGifTag giftag0;
	/* 0x10 */ sceGsBitbltbuf bitbltbuf;
	/* 0x18 */ long int bitbltbufaddr;
	/* 0x20 */ sceGsTrxpos trxpos;
	/* 0x28 */ long int trxposaddr;
	/* 0x30 */ sceGsTrxreg trxreg;
	/* 0x38 */ long int trxregaddr;
	/* 0x40 */ sceGsTrxdir trxdir;
	/* 0x48 */ long int trxdiraddr;
	/* 0x50 */ sceGifTag giftag1;
} sceGsLoadImage;

typedef struct { // 0x70
	/* 0x00 */ u_int vifcode[4];
	/* 0x10 */ sceGifTag giftag;
	/* 0x20 */ sceGsBitbltbuf bitbltbuf;
	/* 0x28 */ long int bitbltbufaddr;
	/* 0x30 */ sceGsTrxpos trxpos;
	/* 0x38 */ long int trxposaddr;
	/* 0x40 */ sceGsTrxreg trxreg;
	/* 0x48 */ long int trxregaddr;
	/* 0x50 */ sceGsFinish finish;
	/* 0x58 */ long int finishaddr;
	/* 0x60 */ sceGsTrxdir trxdir;
	/* 0x68 */ long int trxdiraddr;
} sceGsStoreImage;

typedef struct { // 0x10
	/* 0x0 */ short int sceGsInterMode;
	/* 0x2 */ short int sceGsOutMode;
	/* 0x4 */ short int sceGsFFMode;
	/* 0x6 */ short int sceGsVersion;
	/* 0x8 */ int (*sceGsVSCfunc)(/* parameters unknown */);
	/* 0xc */ int sceGsVSCid;
} sceGsGParam;

typedef struct { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_long *pGifTag;
} sceGifPacket;

typedef struct { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_int pad03;
} sceDmaPacket;

typedef struct { // 0x20
	/* 0x00 */ u_int *pCurrent;
	/* 0x04 */ u_long128 *pBase;
	/* 0x08 */ u_long128 *pDmaTag;
	/* 0x0c */ u_int *pVifCode;
	/* 0x10 */ u_int numlen;
	/* 0x14 */ u_int pad11;
	/* 0x18 */ u_int pad12;
	/* 0x1c */ u_int pad13;
} sceVif0Packet;

typedef struct { // 0x20
	/* 0x00 */ u_int *pCurrent;
	/* 0x04 */ u_long128 *pBase;
	/* 0x08 */ u_long128 *pDmaTag;
	/* 0x0c */ u_int *pVifCode;
	/* 0x10 */ u_int numlen;
	/* 0x14 */ u_long *pGifTag;
	/* 0x18 */ u_int pad12;
	/* 0x1c */ u_int pad13;
} sceVif1Packet;

typedef int qword[4];
typedef int sceVu0IVECTOR[4];
typedef float sceVu0FVECTOR[4];
typedef float sceVu0FMATRIX[4][4];

struct sce_stat { // 0x40
	/* 0x00 */ unsigned int st_mode;
	/* 0x04 */ unsigned int st_attr;
	/* 0x08 */ unsigned int st_size;
	/* 0x0c */ unsigned char st_ctime[8];
	/* 0x14 */ unsigned char st_atime[8];
	/* 0x1c */ unsigned char st_mtime[8];
	/* 0x24 */ unsigned int st_hisize;
	/* 0x28 */ unsigned int st_private[6];
};

struct sce_dirent { // 0x144
	/* 0x000 */ sce_stat d_stat;
	/* 0x040 */ char d_name[256];
	/* 0x140 */ void *d_private;
};

typedef struct { // 0x10
	/* 0x0 */ unsigned int epc;
	/* 0x4 */ unsigned int gp;
	/* 0x8 */ unsigned int sp;
	/* 0xc */ unsigned int dummy;
} sceExecData;

struct _sif_rpc_data { // 0x10
	/* 0x0 */ void *paddr;
	/* 0x4 */ unsigned int pid;
	/* 0x8 */ int tid;
	/* 0xc */ unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;
typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data { // 0x28
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ unsigned int command;
	/* 0x14 */ void *buff;
	/* 0x18 */ void *cbuff;
	/* 0x1c */ sceSifEndFunc func;
	/* 0x20 */ void *para;
	/* 0x24 */ _sif_serve_data *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_receive_data { // 0x1c
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ void *src;
	/* 0x14 */ void *dest;
	/* 0x18 */ int size;
};

typedef _sif_receive_data sceSifReceiveData;
typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_serve_data { // 0x44
	/* 0x00 */ unsigned int command;
	/* 0x04 */ sceSifRpcFunc func;
	/* 0x08 */ void *buff;
	/* 0x0c */ int size;
	/* 0x10 */ sceSifRpcFunc cfunc;
	/* 0x14 */ void *cbuff;
	/* 0x18 */ int csize;
	/* 0x1c */ sceSifClientData *client;
	/* 0x20 */ void *paddr;
	/* 0x24 */ unsigned int fno;
	/* 0x28 */ void *receive;
	/* 0x2c */ int rsize;
	/* 0x30 */ int rmode;
	/* 0x34 */ unsigned int rid;
	/* 0x38 */ _sif_serve_data *link;
	/* 0x3c */ _sif_serve_data *next;
	/* 0x40 */ _sif_queue_data *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data { // 0x18
	/* 0x00 */ int key;
	/* 0x04 */ int active;
	/* 0x08 */ _sif_serve_data *link;
	/* 0x0c */ _sif_serve_data *start;
	/* 0x10 */ _sif_serve_data *end;
	/* 0x14 */ _sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

typedef struct { // 0x10
	/* 0x0:0 */ unsigned int psize : 8;
	/* 0x1:0 */ unsigned int dsize : 24;
	/* 0x4 */ unsigned int daddr;
	/* 0x8 */ unsigned int fcode;
	/* 0xc */ unsigned int opt;
} sceSifCmdHdr;

typedef void (*sceSifCmdHandler)(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ sceSifCmdHandler func;
	/* 0x4 */ void *data;
} sceSifCmdData;

typedef struct { // 0x14
	/* 0x00 */ sceSifCmdHdr chdr;
	/* 0x10 */ void *newaddr;
} sceSifCmdCSData;

typedef struct { // 0x18
	/* 0x00 */ sceSifCmdHdr chdr;
	/* 0x10 */ int rno;
	/* 0x14 */ unsigned int value;
} sceSifCmdSRData;

typedef struct { // 0x68
	/* 0x00 */ sceSifCmdHdr chdr;
	/* 0x10 */ int size;
	/* 0x14 */ int flag;
	/* 0x18 */ char arg[80];
} sceSifCmdResetData;

typedef enum {
	PS_DMA_ID_VIF0 = 0,
	PS_DMA_ID_VIF1 = 1,
	PS_DMA_ID_GIF = 2,
	PS_DMA_ID_FROM_IPU = 3,
	PS_DMA_ID_TO_IPU = 4,
	PS_DMA_ID_SIF0 = 5,
	PS_DMA_ID_SIF1 = 6,
	PS_DMA_ID_FROM_SPR = 7,
	PS_DMA_ID_TO_SPR = 8,
	PS_DMA_ID_MAX = 9
} psDmaId;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int QWC : 16;
	/* 0x2:0 */ long unsigned int pad1 : 10;
	/* 0x3:2 */ long unsigned int PCE : 2;
	/* 0x3:4 */ long unsigned int ID : 3;
	/* 0x3:7 */ long unsigned int IRQ : 1;
	/* 0x4:0 */ long unsigned int ADDR : 31;
	/* 0x7:7 */ long unsigned int SPR : 1;
} psDmaTag;

typedef struct { // 0xc
	/* 0x0 */ sceDmaChan *channel;
	/* 0x4 */ psDmaId id;
	/* 0x8 */ int sendFlag;
} psDmaInfo;

typedef sceGifTag psGifTag;

typedef struct { // 0x10
	/* 0x0 */ int prim;
	/* 0x4 */ int pad[3];
} psGifPackPRIM;

typedef struct { // 0x10
	/* 0x0 */ int r;
	/* 0x4 */ int g;
	/* 0x8 */ int b;
	/* 0xc */ int a;
} psGifPackRGBAQ;

typedef struct { // 0x10
	/* 0x0 */ float s;
	/* 0x4 */ float t;
	/* 0x8 */ float q;
	/* 0xc */ float pad[1];
} psGifPackST;

typedef struct { // 0x10
	/* 0x0 */ int u;
	/* 0x4 */ int v;
	/* 0x8 */ int pad[2];
} psGifPackUV;

typedef struct { // 0x10
	/* 0x0 */ int x;
	/* 0x4 */ int y;
	/* 0x8 */ int z;
	/* 0xc */ int f;
} psGifPackXYZF2;

typedef struct { // 0x10
	/* 0x0 */ int x;
	/* 0x4 */ int y;
	/* 0x8 */ int z;
	/* 0xc */ int f;
} psGifPackXYZ2;

typedef struct { // 0x10
	/* 0x0 */ int pad[3];
	/* 0xc */ int f;
} psGifPackFOG;

typedef struct { // 0x10
	/* 0x0 */ u_long data;
	/* 0x8 */ u_long addr;
} psGifPackAD;

typedef union { // 0x10
	/* 0x0 */ psGifPackPRIM prim;
	/* 0x0 */ psGifPackRGBAQ rgbaq;
	/* 0x0 */ psGifPackST st;
	/* 0x0 */ psGifPackUV uv;
	/* 0x0 */ psGifPackXYZF2 xyzf2;
	/* 0x0 */ psGifPackXYZ2 xyz2;
	/* 0x0 */ psGifPackFOG fog;
	/* 0x0 */ psGifPackAD ad;
} psGifData;

typedef struct { // 0x20
	/* 0x00 */ psGifPackRGBAQ rgbaq;
	/* 0x10 */ psGifPackXYZ2 xyzf2;
} psGifPolyVtx;

typedef struct { // 0x30
	/* 0x00 */ psGifPackST st;
	/* 0x10 */ psGifPackRGBAQ rgbaq;
	/* 0x20 */ psGifPackXYZ2 xyzf2;
} psGifTexVtx;

typedef struct { // 0x350
	/* 0x000 */ sceGsPrim prim;
	/* 0x008 */ u_long prim_addr;
	/* 0x010 */ sceGsRgbaq rgbaq;
	/* 0x018 */ u_long rgbq_addr;
	/* 0x020 */ sceGsSt st;
	/* 0x028 */ u_long st_addr;
	/* 0x030 */ sceGsUv uv;
	/* 0x038 */ u_long uv_addr;
	/* 0x040 */ sceGsXyzf xyzf2;
	/* 0x048 */ u_long xyzf2_addr;
	/* 0x050 */ sceGsXyz xyz2;
	/* 0x058 */ u_long xyz2_addr;
	/* 0x060 */ sceGsTex0 tex0_1;
	/* 0x068 */ u_long tex0_1_addr;
	/* 0x070 */ sceGsTex0 tex0_2;
	/* 0x078 */ u_long tex0_2_addr;
	/* 0x080 */ sceGsClamp clamp_1;
	/* 0x088 */ u_long clamp_1_addr;
	/* 0x090 */ sceGsFog fog;
	/* 0x098 */ u_long fog_addr;
	/* 0x0a0 */ sceGsXyzf xyzf3;
	/* 0x0a8 */ u_long xyzf3_addr;
	/* 0x0b0 */ sceGsXyz xyz3;
	/* 0x0b8 */ u_long xyz3_addr;
	/* 0x0c0 */ sceGsTex1 tex1_1;
	/* 0x0c8 */ u_long tex1_1_addr;
	/* 0x0d0 */ sceGsTex1 tex1_2;
	/* 0x0d8 */ u_long tex1_2_addr;
	/* 0x0e0 */ sceGsTex2 tex2_1;
	/* 0x0e8 */ u_long tex2_1_addr;
	/* 0x0f0 */ sceGsTex2 tex2_2;
	/* 0x0f8 */ u_long tex2_2_addr;
	/* 0x100 */ sceGsXyoffset xyoffset_1;
	/* 0x108 */ u_long xyoffset_1_addr;
	/* 0x110 */ sceGsXyoffset xyoffset_2;
	/* 0x118 */ u_long xyoffset_2_addr;
	/* 0x120 */ sceGsPrmodecont prmodecont;
	/* 0x128 */ u_long prmodecont_addr;
	/* 0x130 */ sceGsPrmode prmode;
	/* 0x138 */ u_long prmode_addr;
	/* 0x140 */ sceGsTexclut texclut;
	/* 0x148 */ u_long texclut_addr;
	/* 0x150 */ sceGsScanmsk scanmask;
	/* 0x158 */ u_long scanmask_addr;
	/* 0x160 */ sceGsMiptbp1 miptbp1_1;
	/* 0x168 */ u_long miptbp1_1_addr;
	/* 0x170 */ sceGsMiptbp1 miptbp1_2;
	/* 0x178 */ u_long miptbp1_2_addr;
	/* 0x180 */ sceGsMiptbp2 miptbp2_1;
	/* 0x188 */ u_long miptbp2_1_addr;
	/* 0x190 */ sceGsMiptbp2 miptbp2_2;
	/* 0x198 */ u_long miptbp2_2_addr;
	/* 0x1a0 */ sceGsTexa texa;
	/* 0x1a8 */ u_long texa_addr;
	/* 0x1b0 */ sceGsFogcol fogcol;
	/* 0x1b8 */ u_long fogcol_addr;
	/* 0x1c0 */ sceGsTexflush texflush;
	/* 0x1c8 */ u_long texflush_addr;
	/* 0x1d0 */ sceGsScissor scissor_1;
	/* 0x1d8 */ u_long scissor_addr;
	/* 0x1e0 */ sceGsScissor scissor_2;
	/* 0x1e8 */ u_long scissor_2_addr;
	/* 0x1f0 */ sceGsAlpha alpha_1;
	/* 0x1f8 */ u_long alpha_1_addr;
	/* 0x200 */ sceGsAlpha alpha_2;
	/* 0x208 */ u_long alpha_2_addr;
	/* 0x210 */ sceGsDimx dimx;
	/* 0x218 */ u_long dimx_addr;
	/* 0x220 */ sceGsDthe dthe;
	/* 0x228 */ u_long dthe_addr;
	/* 0x230 */ sceGsColclamp colclamp;
	/* 0x238 */ u_long colclamp_addr;
	/* 0x240 */ sceGsTest test_1;
	/* 0x248 */ u_long test_1_addr;
	/* 0x250 */ sceGsTest test_2;
	/* 0x258 */ u_long test_2_addr;
	/* 0x260 */ sceGsPabe pabe;
	/* 0x268 */ u_long pabe_addr;
	/* 0x270 */ sceGsFba fba_1;
	/* 0x278 */ u_long fba_1_addr;
	/* 0x280 */ sceGsFba fba_2;
	/* 0x288 */ u_long fba_2_addr;
	/* 0x290 */ sceGsFrame frame_1;
	/* 0x298 */ u_long frame_1_addr;
	/* 0x2a0 */ sceGsFrame frame_2;
	/* 0x2a8 */ u_long frame_2_addr;
	/* 0x2b0 */ sceGsZbuf zbuf_1;
	/* 0x2b8 */ u_long zbuf_1_addr;
	/* 0x2c0 */ sceGsZbuf zbuf_2;
	/* 0x2c8 */ u_long zbuf_2_addr;
	/* 0x2d0 */ sceGsBitbltbuf bitbltbuf;
	/* 0x2d8 */ u_long bitbltbuf_addr;
	/* 0x2e0 */ sceGsTrxpos trxpos;
	/* 0x2e8 */ u_long trxpos_addr;
	/* 0x2f0 */ sceGsTrxreg trxreg;
	/* 0x2f8 */ u_long trxreg_addr;
	/* 0x300 */ sceGsTrxdir trxdir;
	/* 0x308 */ u_long trxdir_addr;
	/* 0x310 */ sceGsHwreg hwreg;
	/* 0x318 */ u_long hwreg_addr;
	/* 0x320 */ sceGsSignal signal;
	/* 0x328 */ u_long signal_addr;
	/* 0x330 */ sceGsFinish finish;
	/* 0x338 */ u_long finish_addr;
	/* 0x340 */ sceGsLabel label;
	/* 0x348 */ u_long label_addr;
} psGsRegList;

typedef struct { // 0x10
	/* 0x0 */ u_long data;
	/* 0x8 */ u_long addr;
} psGsReg;

typedef struct { // 0x8
	/* 0x0 */ float x;
	/* 0x4 */ float y;
} ulVector2;

typedef struct { // 0x8
	/* 0x0 */ float x;
	/* 0x4 */ float y;
} ulPoint2;

typedef struct { // 0xc
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
} ulVector3;

typedef struct { // 0xc
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
} ulPoint3;

typedef struct { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ float w;
} ulVector4;

typedef struct { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ float w;
} ulPoint4;

typedef ulVector3 ulVector;
typedef ulPoint3 ulPoint;
typedef ulVector4 ulQuaternion;

typedef struct { // 0x10
	/* 0x0 */ int x;
	/* 0x4 */ int y;
	/* 0x8 */ int z;
	/* 0xc */ int w;
} ulIVector4;

typedef Sint32 ulAngle;

typedef struct { // 0xc
	/* 0x0 */ ulAngle x;
	/* 0x4 */ ulAngle y;
	/* 0x8 */ ulAngle z;
} ulAngVec;

typedef struct { // 0x10
	/* 0x0 */ float r;
	/* 0x4 */ float g;
	/* 0x8 */ float b;
	/* 0xc */ float a;
} ulColor;

typedef struct { // 0x30
	/* 0x00 */ ulColor diffuse;
	/* 0x10 */ ulColor ambient;
	/* 0x20 */ ulColor specular;
} ulMaterial;

typedef union { // 0x10
	/* 0x0 */ u_long i64[2];
	/* 0x0 */ u_int i32[4];
	/* 0x0 */ float f[4];
	/* 0x0 */ ulVector4 vec4;
	/* 0x0 */ ulColor color;
} ulData128;

typedef union { // 0x10
	/* 0x0 */ u_long128 i128;
	/* 0x0 */ u_long i64[2];
	/* 0x0 */ u_int i32[4];
	/* 0x0 */ float f[4];
} psData128;

typedef psData128 psQWData;

typedef struct { // 0x10
	/* 0x0 */ float v[4];
} psVector;

typedef struct { // 0x10
	/* 0x0 */ int i[4];
} psIVector;

typedef struct { // 0x40
	/* 0x00 */ float m[4][4];
} psMatrix;

typedef tVIF_CODE sceVifCode;

struct _psLocalMem { // 0x20
	/* 0x00 */ int magic;
	/* 0x04 */ int use;
	/* 0x08 */ _psLocalMem *prev;
	/* 0x0c */ _psLocalMem *next;
	/* 0x10 */ u_int local_addr;
	/* 0x14 */ u_int local_size;
	/* 0x18 */ int padding[2];
};

typedef _psLocalMem psLocalMem;

typedef struct { // 0x28
	/* 0x00 */ void *buf;
	/* 0x04 */ size_t bufSize;
	/* 0x08 */ u_int *pktBufTop;
	/* 0x0c */ size_t pktBufSize;
	/* 0x10 */ u_int *pktPtr;
	/* 0x14 */ size_t pktSize;
	/* 0x18 */ int flags;
	/* 0x1c */ int pad[3];
} psDmaPktBuf;

typedef psDmaPktBuf psPktBuf;

typedef struct { // 0x8
	/* 0x0 */ size_t pktSize;
	/* 0x4 */ size_t maxPktSize;
} psPktBufInfo;

typedef struct { // 0x20
	/* 0x00 */ u_long128 *pktBase;
	/* 0x04 */ u_int *pktPtr;
	/* 0x08 */ size_t pktSize;
	/* 0x0c */ sceDmaTag *dmaTag;
	/* 0x10 */ sceVifCode *vifCode;
	/* 0x14 */ size_t vifCodeSize;
	/* 0x18 */ sceGifTag *gifTag;
	/* 0x1c */ size_t gifDataSize;
} psVifPkt;

typedef psVifPkt psPkt;
typedef psVifPkt psGifPkt;

struct _psDiplayList { // 0x6f0
	/* 0x000 */ u_long128 *dmaTagBufTop;
	/* 0x004 */ size_t dmaTagBufSize;
	/* 0x008 */ psDmaPktBuf *dmaPktBuf;
	/* 0x00c */ psDmaTag *dmaTagTop;
	/* 0x010 */ psDmaTag *dmaTagEnd;
	/* 0x014 */ psDmaTag *dmaTag;
	/* 0x018 */ size_t nbDmaTags;
	/* 0x01c */ size_t nbMaxDmaTags;
	/* 0x020 */ int flags;
	/* 0x024 */ _psDiplayList *prev;
	/* 0x028 */ _psDiplayList *next;
	/* 0x02c */ int pad[1];
	/* 0x030 */ psVifPkt vifPkt;
	/* 0x050 */ char gsRegChgFlags[99];
	/* 0x0c0 */ psQWData gsRegImg[99];
};

typedef _psDiplayList psDisplayList;

typedef struct { // 0x8
	/* 0x0 */ size_t nbDmaTags;
	/* 0x4 */ size_t nbMaxDmaTags;
} psDisplayListInfo;

struct _psVMemBlk { // 0x20
	/* 0x00 */ int magic;
	/* 0x04 */ int use;
	/* 0x08 */ _psVMemBlk *prev;
	/* 0x0c */ _psVMemBlk *next;
	/* 0x10 */ u_int addr;
	/* 0x14 */ u_int size;
	/* 0x18 */ void *vheap;
	/* 0x1c */ int pad[1];
};

typedef _psVMemBlk psVMemBlk;

typedef struct { // 0x40
	/* 0x00 */ psVMemBlk *mbBufTop;
	/* 0x04 */ psVMemBlk *mbBufEnd;
	/* 0x08 */ psVMemBlk *mbCur;
	/* 0x0c */ u_int vaddr;
	/* 0x10 */ size_t vsize;
	/* 0x14 */ int block;
	/* 0x18 */ int alignment;
	/* 0x1c */ int pad[1];
	/* 0x20 */ psVMemBlk mbDummy;
} psVHeap;

typedef struct { // 0x18
	/* 0x00 */ size_t use_size;
	/* 0x04 */ size_t free_size;
	/* 0x08 */ size_t max_free_size;
	/* 0x0c */ int use_block_num;
	/* 0x10 */ int free_block_num;
	/* 0x14 */ int block_num;
} psVHeapInfo;

typedef u_int psVifPktData;
typedef u_long128 psGifPktData;

typedef struct { // 0x34
	/* 0x00 */ u_int *pktBuf[2];
	/* 0x08 */ size_t pktBufSize;
	/* 0x0c */ int pktNo;
	/* 0x10 */ u_int *pktTop;
	/* 0x14 */ u_int *pktPtr;
	/* 0x18 */ size_t pktSize;
	/* 0x1c */ size_t pktMaxSize;
	/* 0x20 */ sceDmaTag *dmaTag;
	/* 0x24 */ sceVifCode *vifCode;
	/* 0x28 */ sceGifTag *gifTag;
	/* 0x2c */ int gifPktSize;
	/* 0x30 */ int dmaId;
} psGxPacket;

typedef struct { // 0x14
	/* 0x00 */ int width;
	/* 0x04 */ int height;
	/* 0x08 */ int mxl;
	/* 0x0c */ int psm;
	/* 0x10 */ int cpsm;
} psGxTexDesc;

typedef struct { // 0x80
	/* 0x00 */ sceGsTex0 tex0;
	/* 0x08 */ sceGsTex1 tex1;
	/* 0x10 */ sceGsMiptbp1 miptbp1;
	/* 0x18 */ sceGsMiptbp2 miptbp2;
	/* 0x20 */ psVMemBlk *vmb;
	/* 0x24 */ int addr;
	/* 0x28 */ int size;
	/* 0x2c */ int width;
	/* 0x30 */ int height;
	/* 0x34 */ int mipLevel;
	/* 0x38 */ int pixelFormat;
	/* 0x3c */ int clutPixelFormat;
	/* 0x40 */ int imgAddr[7];
	/* 0x5c */ int imgSize[7];
	/* 0x78 */ int clutAddr;
} psGxTexSurface;

typedef struct { // 0x1c
	/* 0x00 */ int lmAddr;
	/* 0x04 */ int lmSize;
	/* 0x08 */ int fixAddr;
	/* 0x0c */ int fixSize;
	/* 0x10 */ int clutAddr;
	/* 0x14 */ int clutSize;
	/* 0x18 */ psVHeap *texHeap;
} psGxTexSys;

typedef psVHeap psGxTexHeap;
typedef psVHeapInfo psGxTexHeapInfo;

typedef struct { // 0x20
	/* 0x00 */ int interlaceMode;
	/* 0x04 */ int videoSignal;
	/* 0x08 */ int ffMode;
	/* 0x0c */ int frameBufWidth;
	/* 0x10 */ int frameBufHeight;
	/* 0x14 */ void *texHeapBuf;
	/* 0x18 */ size_t texHeapSize;
	/* 0x1c */ int nbTextures;
} psGxDesc;

typedef struct { // 0x20
	/* 0x00 */ sceGifTag gifTag;
	/* 0x10 */ u_long addr;
	/* 0x18 */ sceGsScanmsk mask;
} psGxScanMask;

typedef struct { // 0x14
	/* 0x00 */ u_int fbuf0Addr;
	/* 0x04 */ u_int fbuf1Addr;
	/* 0x08 */ u_int zbufAddr;
	/* 0x0c */ u_int sysTexAddr;
	/* 0x10 */ u_int userTexAddr;
} psGxLocalMemoryInfo;

typedef struct { // 0x290
	/* 0x000 */ sceGsDBuff db;
	/* 0x230 */ psGxScanMask scanMask;
	/* 0x250 */ int ffMode;
	/* 0x254 */ int width;
	/* 0x258 */ int height;
	/* 0x25c */ int xoffset;
	/* 0x260 */ int yoffset;
	/* 0x264 */ int xcenter;
	/* 0x268 */ int ycenter;
	/* 0x26c */ u_int nbFrame;
	/* 0x270 */ int field;
	/* 0x274 */ int syncFrame;
	/* 0x278 */ int vsyncCnt;
	/* 0x280 */ sceGsFrame dispFBuf;
	/* 0x288 */ sceGsFrame drawFBuf;
} psGxRenderFrame;

typedef struct { // 0xa0
	/* 0x00 */ psGifPackAD tex0;
	/* 0x10 */ psGifPackAD tex1;
	/* 0x20 */ psGifPackAD clamp;
	/* 0x30 */ psGifPackAD miptbp1;
	/* 0x40 */ psGifPackAD miptbp2;
	/* 0x50 */ psGifPackAD prim;
	/* 0x60 */ psGifPackAD alpha;
	/* 0x70 */ psGifPackAD fogcol;
	/* 0x80 */ psGifPackAD test;
	/* 0x90 */ psGifPackAD texa;
} psGxGsRegImg;

typedef struct { // 0x380
	/* 0x000 */ psGxGsRegImg regImg;
	/* 0x0a0 */ psGxRenderFrame renderFrame;
	/* 0x330 */ psGxLocalMemoryInfo localMemInfo;
	/* 0x344 */ psGxPacket sysPkt;
	/* 0x378 */ psGxTexHeap *defaultTexHeap;
	/* 0x37c */ psGxTexHeap *systemTexHeap;
} psGxParam;

typedef psGxParam psGxSys;

struct tagpsGxAlphaBlendModeParam { // 0x14
	/* 0x00 */ int a;
	/* 0x04 */ int b;
	/* 0x08 */ int c;
	/* 0x0c */ int d;
	/* 0x10 */ int fix;
};

typedef tagpsGxAlphaBlendModeParam psGxAlphaBlendModeParam;
typedef _ulMatrix ulMatrix;

struct _ulMatrix { // 0x40
	/* 0x00 */ float m[4][4];
};

typedef float *ulMatrixPtr[4];

typedef struct { // 0x10
	/* 0x0 */ ulMatrix *top;
	/* 0x4 */ int maxDepth;
	/* 0x8 */ ulMatrix *current;
	/* 0xc */ int depth;
} ulMatrixStack;

typedef enum {
	UL_LIGHT_TYPE_NOUSE = 0,
	UL_LIGHT_TYPE_AMBIENT = 1,
	UL_LIGHT_TYPE_DIRECTIONAL = 2,
	UL_LIGHT_TYPE_POINT = 3,
	UL_LIGHT_TYPE_SPOT = 4,
	UL_LIGHT_TYPE_NUM = 5
} ulLightType;

typedef struct { // 0x70
	/* 0x00 */ ulLightType type;
	/* 0x04 */ Bool enable;
	/* 0x08 */ int magic;
	/* 0x0c */ float range;
	/* 0x10 */ ulVector4 pos;
	/* 0x20 */ ulVector4 dir;
	/* 0x30 */ ulColor color;
	/* 0x40 */ ulMaterial material;
} ulLight;

typedef void (*CdlCB)(/* parameters unknown */);

typedef struct { // 0x4
	/* 0x0 */ u_char trycount;
	/* 0x1 */ u_char spindlctrl;
	/* 0x2 */ u_char datapattern;
	/* 0x3 */ u_char pad;
} sceCdRMode;

typedef struct { // 0x4
	/* 0x0 */ u_char minute;
	/* 0x1 */ u_char second;
	/* 0x2 */ u_char sector;
	/* 0x3 */ u_char track;
} sceCdlLOCCD;

typedef struct { // 0x24
	/* 0x00 */ u_int lsn;
	/* 0x04 */ u_int size;
	/* 0x08 */ char name[16];
	/* 0x18 */ u_char date[8];
	/* 0x20 */ u_int flag;
} sceCdlFILE;

typedef struct { // 0x8
	/* 0x0 */ u_char stat;
	/* 0x1 */ u_char second;
	/* 0x2 */ u_char minute;
	/* 0x3 */ u_char hour;
	/* 0x4 */ u_char pad;
	/* 0x5 */ u_char day;
	/* 0x6 */ u_char month;
	/* 0x7 */ u_char year;
} sceCdCLOCK;

typedef short int Float16;
typedef float Float32;
typedef double Float64;
typedef long int Fixed32;
typedef char Char8;

struct _UUID { // 0x10
	/* 0x0 */ Uint32 Data1;
	/* 0x4 */ Uint16 Data2;
	/* 0x6 */ Uint16 Data3;
	/* 0x8 */ Uint8 Data4[8];
};

typedef _UUID UUID;

typedef struct { // 0x8
	/* 0x0 */ Sint8 *data;
	/* 0x4 */ Sint32 len;
} SJCK;

typedef struct { // 0x4
	/* 0x0 */ _sj_vtbl *vtbl;
} SJ_OBJ;

typedef SJ_OBJ *SJ;

struct _sj_vtbl { // 0x30
	/* 0x00 */ void (*QueryInterface)(/* parameters unknown */);
	/* 0x04 */ void (*AddRef)(/* parameters unknown */);
	/* 0x08 */ void (*Release)(/* parameters unknown */);
	/* 0x0c */ void (*Destroy)(/* parameters unknown */);
	/* 0x10 */ UUID* (*GetUuid)(/* parameters unknown */);
	/* 0x14 */ void (*Reset)(/* parameters unknown */);
	/* 0x18 */ void (*GetChunk)(/* parameters unknown */);
	/* 0x1c */ void (*UngetChunk)(/* parameters unknown */);
	/* 0x20 */ void (*PutChunk)(/* parameters unknown */);
	/* 0x24 */ Sint32 (*GetNumData)(/* parameters unknown */);
	/* 0x28 */ Sint32 (*IsGetChunk)(/* parameters unknown */);
	/* 0x2c */ void (*EntryErrFunc)(/* parameters unknown */);
};

typedef _sj_vtbl SJ_IF;
typedef SJ_IF *SJIF;
typedef void *ADXSTM;

struct _adx_fs { // 0x138
	/* 0x000 */ Sint8 used;
	/* 0x001 */ Sint8 stat;
	/* 0x002 */ Sint8 sjflag;
	/* 0x003 */ Sint8 rev;
	/* 0x004 */ ADXSTM stm;
	/* 0x008 */ SJ sj;
	/* 0x00c */ Sint32 fnsct;
	/* 0x010 */ Sint32 fsize;
	/* 0x014 */ Sint32 skpos;
	/* 0x018 */ Sint32 rdstpos;
	/* 0x01c */ Sint32 rqsct;
	/* 0x020 */ Sint32 rdsct;
	/* 0x024 */ Sint8 *buf;
	/* 0x028 */ Sint32 bsize;
	/* 0x02c */ Sint32 rqrdsct;
	/* 0x030 */ Sint32 ofst;
	/* 0x034 */ Sint8 fname[256];
	/* 0x134 */ void *dir;
};

typedef _adx_fs ADX_FS;
typedef ADX_FS *ADXF;

struct _adxf_ptinfo { // 0x118
	/* 0x000 */ _adxf_ptinfo *next;
	/* 0x004 */ Sint32 size;
	/* 0x008 */ Sint32 nfile;
	/* 0x00c */ Uint16 nentry;
	/* 0x00e */ Sint8 type;
	/* 0x00f */ Sint8 rev;
	/* 0x010 */ Sint8 fname[256];
	/* 0x110 */ void *curdir;
	/* 0x114 */ Sint32 top;
};

typedef _adxf_ptinfo ADXF_PTINFO;

struct _adxf_add_info { // 0x8
	/* 0x0 */ Uint16 flid;
	/* 0x2 */ Uint16 fnsct;
	/* 0x4 */ Sint32 ofst;
};

typedef _adxf_add_info ADXF_ADD_INFO;

struct _adxf_cmd_hstry { // 0x10
	/* 0x0 */ Uint8 cmdid;
	/* 0x1 */ Uint8 fg;
	/* 0x2 */ Uint16 ncall;
	/* 0x4 */ Sint32 prm[3];
};

typedef _adxf_cmd_hstry ADXF_CMD_HSTRY;
typedef ADXF_ROFS_STWK ADXF_ROFS_WK;
typedef ADXF_ROFS_PFSIFTBL ADXF_ROFS_PFSTBL;
typedef ADXF_ROFS_DEVIFTBLE ADXF_ROFS_DEVTBL;
typedef ADXF_ROFS_LIBIFTBLE ADXF_ROFS_LIFTBL;

typedef struct { // 0x30
	/* 0x00 */ Sint32 fad;
	/* 0x04 */ Sint32 fsize;
	/* 0x08 */ Uint8 flag;
	/* 0x09 */ Uint8 sid;
	/* 0x0a */ Char8 fname[32];
	/* 0x2a */ Uint8 pad[6];
} ADXF_ROFS_DIRRECENT;

typedef struct { // 0x60
	/* 0x00 */ Sint32 dir_num;
	/* 0x04 */ Sint32 max_ent;
	/* 0x08 */ Sint32 dir_fad;
	/* 0x0c */ Char8 volname[32];
	/* 0x2c */ Sint32 pad;
	/* 0x30 */ ADXF_ROFS_DIRRECENT dirrec_tbl[1];
} ADXF_ROFS_DIRREC;

typedef ADXF_ROFS_DIRREC *ADXF_ROFS_DIRRECBUF;

typedef struct { // 0x20
	/* 0x00 */ Char8 volname[9];
	/* 0x0c */ void *img_hn;
	/* 0x10 */ Sint32 zisb;
	/* 0x14 */ Sint32 ptbl_cba;
	/* 0x18 */ Sint32 ptbl_size;
	/* 0x1c */ ADXF_ROFS_DIRRECBUF curdir;
} ADXF_ROFS_VOL;

typedef struct { // 0x38
	/* 0x00 */ ADXF_ROFS_WK *wk;
	/* 0x04 */ Sint32 fid;
	/* 0x08 */ Sint32 fad;
	/* 0x0c */ Sint32 ofs;
	/* 0x10 */ Sint32 fsize;
	/* 0x14 */ Sint32 fsctsize;
	/* 0x18 */ ADXF_ROFS_VOL *vol;
	/* 0x1c */ Sint32 rsize;
	/* 0x20 */ Sint32 trns_seg;
	/* 0x24 */ Sint32 trns_ofs;
	/* 0x28 */ Sint32 trns_unit;
	/* 0x2c */ Uint8 *rdadr;
	/* 0x30 */ Sint16 used;
	/* 0x32 */ Sint16 act;
	/* 0x34 */ Sint16 stat;
	/* 0x36 */ Sint16 err;
} ADXF_ROFS_OBJ;

typedef ADXF_ROFS_OBJ *ADXF_ROFS;

struct ADXF_ROFS_STWK { // 0x10b4
	/* 0x0000 */ Bool f_init;
	/* 0x0004 */ Sint32 max_open;
	/* 0x0008 */ Sint32 max_volume;
	/* 0x000c */ Sint32 max_dirent;
	/* 0x0010 */ Uint32 exec_server_cnt;
	/* 0x0014 */ ADXF_ROFS syshdl;
	/* 0x0018 */ ADXF_ROFS hndtbl;
	/* 0x001c */ ADXF_ROFS_VOL *vollist;
	/* 0x0020 */ ADXF_ROFS_VOL *curvol;
	/* 0x0024 */ ADXF_ROFS_DIRRECBUF dirbuf;
	/* 0x0028 */ ADXF_ROFS_PFSTBL *pfs;
	/* 0x002c */ ADXF_ROFS_DEVTBL *dev;
	/* 0x0030 */ ADXF_ROFS_LIFTBL *liftbl;
	/* 0x0034 */ void (*g_errcb)(/* parameters unknown */);
	/* 0x0038 */ void *g_errcb_1st;
	/* 0x003c */ Uint32 sctbuf[1040];
	/* 0x107c */ ADXF_ROFS_OBJ hndlist[1];
};

typedef struct { // 0x10
	/* 0x0 */ Sint32 max_open;
	/* 0x4 */ Sint32 max_volume;
	/* 0x8 */ Sint32 max_dirent;
	/* 0xc */ void *rofs_work;
} ADXF_SPRM_ROFS;

typedef struct { // 0x2c
	/* 0x00 */ char useFlag;
	/* 0x01 */ char device;
	/* 0x02 */ char index;
	/* 0x03 */ char reqFlag;
	/* 0x04 */ int status;
	/* 0x08 */ size_t size;
	/* 0x0c */ char name[16];
	/* 0x1c */ u_int curSect;
	/* 0x20 */ u_int endSect;
	/* 0x24 */ ADXF adxf;
	/* 0x28 */ int hostFd;
} ulFile;

typedef struct { // 0x1c
	/* 0x00 */ int sect;
	/* 0x04 */ size_t size;
	/* 0x08 */ int fid;
	/* 0x0c */ char filename[16];
} ulFsDirRecEnt;

typedef struct { // 0x8
	/* 0x0 */ int nbMaxEntries;
	/* 0x4 */ int nbEntries;
} ulFsDirRecTbl;

typedef ulFsDirRecTbl ulFsDirRec;

typedef struct { // 0x34c
	/* 0x000 */ int nbMaxFiles;
	/* 0x004 */ int nbOpenFiles;
	/* 0x008 */ int curFileIndex;
	/* 0x00c */ ulFsDirRecTbl *curDirRec;
	/* 0x010 */ int curDevice;
	/* 0x014 */ int hostType;
	/* 0x018 */ char dirSep;
	/* 0x019 */ char currentDirectory[256];
	/* 0x119 */ char hostRootPath[256];
	/* 0x219 */ char sceFilename[256];
	/* 0x319 */ sceCdRMode cdRMode;
	/* 0x320 */ ulFile fileBuf[1];
} ulFsWork;

typedef struct { // 0x8
	/* 0x0 */ u_int type;
	/* 0x4 */ u_int size;
} ulChunkHeader;

typedef ulChunkHeader ulCnk;

typedef struct { // 0x14
	/* 0x00 */ int width;
	/* 0x04 */ int height;
	/* 0x08 */ int mipLevel;
	/* 0x0c */ int type;
	/* 0x10 */ void *texImage;
} ulTexDesc;

typedef struct { // 0x20
	/* 0x00 */ psGxTexDesc psTexDesc;
	/* 0x14 */ u_int imageOffset;
	/* 0x18 */ u_int imageSize;
	/* 0x1c */ u_int id;
} ulTexData;

typedef ulTexData ulPstHeader;

typedef struct { // 0xb0
	/* 0x00 */ psGxTexSurface psTex;
	/* 0x80 */ char name[32];
	/* 0xa0 */ int flags;
	/* 0xa4 */ void *texImage;
	/* 0xa8 */ int id;
	/* 0xac */ int ptrBufIndex;
} ulTexSurface;

typedef ulTexSurface ulTexture;

typedef struct { // 0xc
	/* 0x0 */ void *filename;
	/* 0x4 */ u_int attr;
	/* 0x8 */ ulTexture *texture;
} ulTexName;

typedef struct { // 0x8
	/* 0x0 */ ulTexName *texnames;
	/* 0x4 */ int nbTextures;
} ulTexList;

typedef psGxTexHeap ulTexHeap;
typedef psGxTexHeapInfo ulTexHeapInfo;

typedef struct { // 0x1c
	/* 0x00 */ size_t allSize;
	/* 0x04 */ size_t useSize;
	/* 0x08 */ size_t freeSize;
	/* 0x0c */ int nbEntries;
	/* 0x10 */ int nbMaxEntries;
	/* 0x14 */ ulTexture *lastTex;
	/* 0x18 */ int lastAddr;
} ulTexSysInfo;

typedef struct { // 0x8
	/* 0x0 */ u_int flag;
	/* 0x4 */ u_short width;
	/* 0x6 */ u_short height;
} PstHeader;

typedef struct { // 0x4
	/* 0x0 */ u_short statusFlag;
	/* 0x2 */ u_short entryCount;
} PtmHeader;

typedef struct { // 0x20
	/* 0x00 */ ulCnk chunk;
	/* 0x08 */ int version;
	/* 0x0c */ Uint32 id;
	/* 0x10 */ short int width;
	/* 0x12 */ short int height;
	/* 0x14 */ u_char psm;
	/* 0x15 */ u_char cpsm;
	/* 0x16 */ u_char mxl;
	/* 0x17 */ u_char flag;
	/* 0x18 */ Uint32 imageSize;
	/* 0x1c */ Uint32 imageOffset;
} PstCnk;

typedef struct { // 0xc
	/* 0x0 */ ulCnk chunk;
	/* 0x8 */ u_short statusFlag;
	/* 0xa */ u_short entryCount;
} PtmCnk;

typedef PstCnk ulPst;
typedef PtmCnk ulPtm;

typedef struct { // 0x40
	/* 0x00 */ ulVector4 pos3d;
	/* 0x10 */ ulVector4 pos2d;
	/* 0x20 */ ulColor color;
	/* 0x30 */ float u;
	/* 0x34 */ float v;
	/* 0x38 */ float ooz;
	/* 0x3c */ int clipflag;
} ulGeoVertex;

typedef ulGeoVertex ulVertexBuf;
typedef ulGeoVertex ulScisVertex;

typedef struct { // 0x44
	/* 0x00 */ float w;
	/* 0x04 */ float h;
	/* 0x08 */ float cx;
	/* 0x0c */ float cy;
	/* 0x10 */ float ax;
	/* 0x14 */ float ay;
	/* 0x18 */ float fovy;
	/* 0x1c */ float near;
	/* 0x20 */ float far;
	/* 0x24 */ float dist;
	/* 0x28 */ float aspect;
	/* 0x2c */ float oon;
	/* 0x30 */ float oof;
	/* 0x34 */ float ax_2d;
	/* 0x38 */ float ay_2d;
	/* 0x3c */ float ax_ps2;
	/* 0x40 */ float ay_ps2;
} ulScreen;

typedef struct { // 0x2c
	/* 0x00 */ float dist;
	/* 0x04 */ float ax;
	/* 0x08 */ float ay;
	/* 0x0c */ float near;
	/* 0x10 */ float far;
	/* 0x14 */ float cx;
	/* 0x18 */ float cy;
	/* 0x1c */ float zmin;
	/* 0x20 */ float zmax;
	/* 0x24 */ float clip_x;
	/* 0x28 */ float clip_y;
} ulViewVolume;

// warning: multiple differing types with the same name (name not equal)
typedef struct { // 0x5f0
	/* 0x000 */ ulMatrix worldTransform;
	/* 0x040 */ ulMatrix viewTransform;
	/* 0x080 */ ulMatrix projectTransform;
	/* 0x0c0 */ ulMatrix vwTransform;
	/* 0x100 */ ulMatrix pvTransform;
	/* 0x140 */ ulMatrix pvwTransform;
	/* 0x180 */ ulMatrix dirLightRotMatrix;
	/* 0x1c0 */ ulMatrix dirLightColMatrix;
	/* 0x200 */ ulMatrix pntLightPosMatrix;
	/* 0x240 */ ulMatrix pntLightColMatrix;
	/* 0x280 */ ulMatrix textureMatrix;
	/* 0x2c0 */ ulMatrix view_clip_matrix;
	/* 0x300 */ ulMatrix local_clip_matrix;
	/* 0x340 */ ulMatrix clip2_matrix;
	/* 0x380 */ ulVector4 clipVtxMin;
	/* 0x390 */ ulVector4 clipVtxMax;
	/* 0x3a0 */ ulVector4 scrnVtxMin;
	/* 0x3b0 */ ulVector4 scrnVtxMax;
	/* 0x3c0 */ ulColor ambLightColor;
	/* 0x3d0 */ ulColor matDiffuse;
	/* 0x3e0 */ ulColor matAmbient;
	/* 0x3f0 */ ulColor matSpecular;
	/* 0x400 */ ulData128 primFlag;
	/* 0x410 */ ulColor nonTexColorRatio;
	/* 0x420 */ ulColor texColorRatio;
	/* 0x430 */ ulData128 nonTexGifTag;
	/* 0x440 */ ulData128 texGifTag;
	/* 0x450 */ ulData128 nonTexStripGifTag;
	/* 0x460 */ ulData128 texStripGifTag;
	/* 0x470 */ ulVector4 gsCoordScale;
	/* 0x480 */ ulVector4 gsCoordOffset;
	/* 0x490 */ ulVector4 clipCoordScale;
	/* 0x4a0 */ ulVector4 clipCoordOffset;
	/* 0x4b0 */ ulData128 primGifTag;
	/* 0x4c0 */ ulData128 vtxGifTag;
	/* 0x4d0 */ ulData128 paramRatio0;
	/* 0x4e0 */ ulData128 paramRatio1;
	/* 0x4f0 */ ulVector4 envmapScale;
	/* 0x500 */ ulVector4 envmapOffset;
	/* 0x510 */ ulVector4 shadowTexScale;
	/* 0x520 */ ulVector4 shadowTexOffset;
	/* 0x530 */ ulVector4 simpleLightVec;
	/* 0x540 */ ulVector4 simpleLightCol;
	/* 0x550 */ ulVector4 colorRatio;
	/* 0x560 */ ulVector4 fogParam;
	/* 0x570 */ ulData128 rezWireParam;
	/* 0x580 */ ulData128 rezWireColor;
	/* 0x590 */ ulMatrix to_screen_matrix;
	/* 0x5d0 */ ulVector4 scrn2dClipScale;
	/* 0x5e0 */ ulVector4 scrn2dClipOffset;
} ulGeoVuParam;

typedef struct { // 0x940
	/* 0x000 */ ulGeoVuParam vuParam;
	/* 0x5f0 */ int vbufSize;
	/* 0x5f4 */ float envWeightRatio;
	/* 0x5f8 */ float uvRatio;
	/* 0x5fc */ int primReg;
	/* 0x600 */ psGxPacket *packet;
	/* 0x604 */ Sint32 systemFlag;
	/* 0x608 */ ulScreen screen;
	/* 0x64c */ ulVertexBuf *vertexBuf;
	/* 0x650 */ size_t vertexBufSize;
	/* 0x654 */ int nbMaxVertice;
	/* 0x658 */ Sint16 *plistCache[32];
	/* 0x6d8 */ int nbCachedPlist;
	/* 0x6e0 */ ulMatrix dirLightVecMatrix[2];
	/* 0x760 */ ulMatrix dirLightColMatrix[2];
	/* 0x7e0 */ ulMatrix pntLightPosMatrix;
	/* 0x820 */ ulMatrix pntLightColMatrix;
	/* 0x860 */ int nbLightMatrix;
	/* 0x868 */ u_long gsALPHA;
	/* 0x870 */ u_long gsTEX0;
	/* 0x878 */ u_long gsTEX1;
	/* 0x880 */ u_long gsCLAMP;
	/* 0x888 */ u_long gsPRIM;
	/* 0x890 */ ulTexture *curTexture;
	/* 0x894 */ ulTexList *texlist;
	/* 0x898 */ int texId;
	/* 0x8a0 */ ulMaterial cnkMaterial;
	/* 0x8d0 */ ulViewVolume view;
	/* 0x8fc */ int PRMODEforModel;
	/* 0x900 */ int PRMODEforPrim;
	/* 0x904 */ int tid_headbits;
	/* 0x908 */ int cm_headbits;
	/* 0x90c */ int cs_headbits;
	/* 0x910 */ int cv_type;
	/* 0x914 */ int nj_flag;
	/* 0x918 */ int nbClip3dVertices;
	/* 0x91c */ int nbClip2dVertices;
	/* 0x920 */ int nbCalcVertice;
	/* 0x924 */ int nbCalcPolygons;
	/* 0x928 */ int nbScisPolygons;
	/* 0x92c */ int nbDrawPolygons;
	/* 0x930 */ int calcVlistTime;
	/* 0x934 */ int calcPlistTime;
	/* 0x938 */ int dmaWaitTime;
} ulGeoParam;

typedef struct { // 0x1c
	/* 0x00 */ void *vertexBuf;
	/* 0x04 */ size_t vertexBufSize;
	/* 0x08 */ void *gsPktBuf;
	/* 0x0c */ size_t gsPktBufSize;
	/* 0x10 */ void *vifPktBuf;
	/* 0x14 */ size_t vifPktBufSize;
	/* 0x18 */ int nbTextures;
} ulGeoInfo;

typedef enum {
	UL_DISPLAYMODE_640x224 = 0,
	UL_DISPLAYMODE_640x448 = 1,
	UL_DISPLAYMODE_640x240 = 2,
	UL_DISPLAYMODE_320x240 = 3,
	UL_DISPLAYMODE_DC_640x480 = 4,
	UL_DISPLAYMODE_DC_640x512 = 5,
	UL_DISPLAYMODE_DC_640x512_AUTO = 6,
	UL_DISPLAYMODE_MAX = 7
} ulGxDisplayMode;

typedef enum {
	UL_GX_TRANSFORM_WORLD = 0,
	UL_GX_TRANSFORM_VIEW = 1,
	UL_GX_TRANSFORM_PROJECTION = 2,
	UL_GX_TRANSFORM_CLIP = 3,
	UL_GX_TRANSFORM_NINJA = 4,
	UL_GX_TRANSFORM_TEXTURE = 5,
	UL_GX_TRANSFORM_NUM = 6
} ulGxTrasformType;

typedef struct { // 0x20
	/* 0x00 */ int displayMode;
	/* 0x04 */ int videoSignal;
	/* 0x08 */ int ffMode;
	/* 0x0c */ int nbTextures;
	/* 0x10 */ size_t vifPktBufSize;
	/* 0x14 */ size_t gifPktBufSize;
	/* 0x18 */ void *gxWork;
	/* 0x1c */ size_t gxWorkSize;
} ulGxDesc;

typedef struct { // 0x8c
	/* 0x00 */ psGxSys *psGx;
	/* 0x04 */ void *pktBuf;
	/* 0x08 */ void *texMngBuf;
	/* 0x0c */ int nbTexMhg;
	/* 0x10 */ void *texHeapBuf;
	/* 0x14 */ size_t texHeapBufSize;
	/* 0x18 */ int fbufWidth;
	/* 0x1c */ int fbufHeight;
	/* 0x20 */ int frameInterval;
	/* 0x24 */ psGxPacket vifPkt;
	/* 0x58 */ psGxPacket gifPkt;
} ulGxSys;

struct tagulFogParam { // 0x20
	/* 0x00 */ float near;
	/* 0x04 */ float far;
	/* 0x08 */ float min;
	/* 0x0c */ float max;
	/* 0x10 */ Bool flag;
	/* 0x14 */ float r;
	/* 0x18 */ float g;
	/* 0x1c */ float b;
};

typedef tagulFogParam ulFogParam;
typedef char ulCnsChar;

typedef struct { // 0x50
	/* 0x00 */ int w;
	/* 0x04 */ int h;
	/* 0x08 */ int charsize;
	/* 0x0c */ int x;
	/* 0x10 */ int y;
	/* 0x14 */ int fontSizeW;
	/* 0x18 */ int fontSizeH;
	/* 0x20 */ ulData128 fontColor;
	/* 0x30 */ short int texaddr;
	/* 0x34 */ size_t scrnBufSize;
	/* 0x38 */ ulCnsChar *locChar;
	/* 0x3c */ float z;
	/* 0x40 */ float ooz;
	/* 0x44 */ ulCnsChar charBuf[1];
} ulConsole;

typedef struct { // 0x80
	/* 0x00 */ ulPoint4 p[8];
} ulBoundingBox;

typedef struct { // 0x18
	/* 0x00 */ Sint32 *vlist;
	/* 0x04 */ Sint16 *plist;
	/* 0x08 */ ulPoint center;
	/* 0x14 */ float r;
} ulMesh;

struct _ulModel { // 0x38
	/* 0x00 */ int evalflags;
	/* 0x04 */ ulMesh *mesh;
	/* 0x08 */ ulVector3 pos;
	/* 0x14 */ ulAngVec ang;
	/* 0x20 */ ulVector3 scl;
	/* 0x2c */ _ulModel *child;
	/* 0x30 */ _ulModel *sibling;
	/* 0x34 */ float re_quat;
};

typedef _ulModel ulModel;
typedef _ulHeapInfo ulHeapInfo;
typedef void *ulHeapHandle;

struct _ulMemBlock { // 0x40
	/* 0x00 */ Uint16 magic;
	/* 0x02 */ Sint16 use;
	/* 0x04 */ Uint32 size;
	/* 0x08 */ _ulMemBlock *prev;
	/* 0x0c */ _ulMemBlock *next;
	/* 0x10 */ ulHeapInfo *handle;
	/* 0x14 */ char *filename;
	/* 0x18 */ Uint32 line;
	/* 0x1c */ int pad[9];
};

typedef _ulMemBlock ulMemBlock;

struct _ulHeapInfo { // 0x40
	/* 0x00 */ void *buf_top;
	/* 0x04 */ size_t buf_size;
	/* 0x08 */ void *root_top;
	/* 0x0c */ size_t root_size;
	/* 0x10 */ void *heap_top;
	/* 0x14 */ size_t heap_size;
	/* 0x18 */ ulMemBlock *cur_mb;
	/* 0x1c */ size_t mbMinSize;
	/* 0x20 */ Uint32 pad[8];
};

typedef struct { // 0x14
	/* 0x00 */ size_t use_size;
	/* 0x04 */ size_t free_size;
	/* 0x08 */ size_t max_size;
	/* 0x0c */ int use_block;
	/* 0x10 */ int free_block;
} ulHeapStatus;

typedef struct { // 0x10
	/* 0x0 */ ulTexList *texlist;
	/* 0x4 */ ulModel *model;
	/* 0x8 */ void *ptr;
	/* 0xc */ ulPtm *ptm;
} ulModelInfo;

typedef struct { // 0x20
	/* 0x00 */ ulCnk chunk;
	/* 0x08 */ int formatId;
	/* 0x0c */ int nbPictures;
	/* 0x10 */ int width;
	/* 0x14 */ int height;
	/* 0x18 */ size_t pictureSize;
	/* 0x1c */ size_t allPictureSize;
} PmiCnk;

typedef void (*ulMeshDrawFunc)(/* parameters unknown */);

typedef struct { // 0x18
	/* 0x00 */ ulVector3 v;
	/* 0x0c */ ulVector3 n;
} ulCnkVtx_VN;

typedef struct { // 0x1c
	/* 0x00 */ ulVector3 v;
	/* 0x0c */ ulVector3 n;
	/* 0x18 */ Sint32 flag;
} ulCnkVtx_VN_NF;

typedef struct { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ ulPackedColor color;
} ulPolygonVertex;

typedef struct { // 0x18
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ float z;
	/* 0x0c */ float u;
	/* 0x10 */ float v;
	/* 0x14 */ ulPackedColor color;
} ulTextureVertex;

typedef struct { // 0x18
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ float z;
	/* 0x0c */ float u;
	/* 0x10 */ float v;
	/* 0x14 */ ulPackedColor color;
} ulSpriteVertex;

typedef void (*UL_TASK_FUNC)(/* parameters unknown */);

struct _ulTaskHead { // 0x40
	/* 0x00 */ void (*init)(/* parameters unknown */);
	/* 0x04 */ void (*exec)(/* parameters unknown */);
	/* 0x08 */ void (*draw)(/* parameters unknown */);
	/* 0x0c */ void (*exit)(/* parameters unknown */);
	/* 0x10 */ _ulTaskHead *prev;
	/* 0x14 */ _ulTaskHead *next;
	/* 0x18 */ _ulTaskHead *child;
	/* 0x1c */ _ulTaskHead *parent;
	/* 0x20 */ _ulTaskHead *lchild;
	/* 0x24 */ Sint32 flag;
	/* 0x28 */ Sint32 userflag;
	/* 0x2c */ Uint32 magic;
	/* 0x30 */ size_t wksize;
	/* 0x34 */ char *name;
	/* 0x38 */ Uint16 exec_time;
	/* 0x3a */ Uint16 draw_time;
	/* 0x3c */ Sint32 dummy[1];
};

typedef _ulTaskHead ulTaskHead;

typedef struct { // 0x14
	/* 0x00 */ void *init;
	/* 0x04 */ void (*exec)(/* parameters unknown */);
	/* 0x08 */ void (*draw)(/* parameters unknown */);
	/* 0x0c */ void (*exit)(/* parameters unknown */);
	/* 0x10 */ size_t size;
} ulTaskInfo;

typedef ulTaskInfo ulTaskDesc;

typedef struct { // 0x10
	/* 0x0 */ void (*init)(/* parameters unknown */);
	/* 0x4 */ void (*main)(/* parameters unknown */);
	/* 0x8 */ void (*exit)(/* parameters unknown */);
	/* 0xc */ char *module_filename;
} ulModeData;

typedef enum {
	UL_PERI_PORT_0 = 0,
	UL_PERI_PORT_1 = 1,
	UL_PERI_PORT_MAX = 2
} ulPeriPort;

typedef struct { // 0x10
	/* 0x0 */ int func;
	/* 0x4 */ int sub;
	/* 0x8 */ int size;
	/* 0xc */ int curr;
} psPadActInfo;

typedef struct { // 0x4c
	/* 0x00 */ Uint8 id;
	/* 0x01 */ Uint8 cur_id;
	/* 0x02 */ Uint8 cur_id_ofs;
	/* 0x03 */ Uint8 nb_mode_id;
	/* 0x04 */ Uint8 mode_id_tbl[4];
	/* 0x08 */ int act_num;
	/* 0x0c */ psPadActInfo act_info[4];
} ulPeriInfo;

typedef struct { // 0x64
	/* 0x00 */ unsigned char data[32];
	/* 0x20 */ ulPeriInfo *info;
	/* 0x24 */ Uint8 state;
	/* 0x25 */ Uint8 id;
	/* 0x26 */ Uint8 flags;
	/* 0x27 */ Uint8 req_flags;
	/* 0x28 */ u_int on;
	/* 0x2c */ u_int off;
	/* 0x30 */ u_int press;
	/* 0x34 */ u_int release;
	/* 0x38 */ u_int repeat;
	/* 0x3c */ u_int repeatTimer;
	/* 0x40 */ Uint8 analog_r_x;
	/* 0x41 */ Uint8 analog_r_y;
	/* 0x42 */ Uint8 analog_l_x;
	/* 0x43 */ Uint8 analog_l_y;
	/* 0x44 */ int pad[3];
	/* 0x50 */ ulVector2 stick[2];
	/* 0x60 */ Uint8 port;
	/* 0x61 */ Uint8 slot;
} ulPeripheral;

typedef void (*UL_PERI_STATECALLBACK)(/* parameters unknown */);
typedef int Int;
typedef Sint32 Angle;
typedef Sint16 Sangle;
// warning: multiple differing types with the same name (descriptor not equal)
typedef ulMatrix NJS_MATRIX;
typedef Sint8 NJS_SYS_ATTR[64];
typedef void (*NJS_INT_FUNC)(/* parameters unknown */);

typedef struct { // 0x4
	/* 0x0 */ Sint16 u;
	/* 0x2 */ Sint16 v;
} NJS_TEX;

typedef struct { // 0x4
	/* 0x0 */ Uint8 b;
	/* 0x1 */ Uint8 g;
	/* 0x2 */ Uint8 r;
	/* 0x3 */ Uint8 a;
} NJS_BGRA;

typedef union { // 0x4
	/* 0x0 */ Uint32 color;
	/* 0x0 */ NJS_TEX tex;
	/* 0x0 */ NJS_BGRA argb;
} NJS_COLOR;

typedef struct { // 0x10
	/* 0x0 */ Float a;
	/* 0x4 */ Float r;
	/* 0x8 */ Float g;
	/* 0xc */ Float b;
} NJS_ARGB;

typedef struct { // 0x4
	/* 0x0 */ Sint16 x;
	/* 0x2 */ Sint16 y;
} NJS_POINT2I;

typedef struct { // 0x8
	/* 0x0 */ Float x;
	/* 0x4 */ Float y;
} NJS_POINT2;

// warning: multiple differing types with the same name (descriptor not equal)
typedef ulVector3 NJS_POINT3;
// warning: multiple differing types with the same name (descriptor not equal)
typedef ulVector3 NJS_VECTOR;

typedef struct { // 0x18
	/* 0x00 */ Float px;
	/* 0x04 */ Float py;
	/* 0x08 */ Float pz;
	/* 0x0c */ Float vx;
	/* 0x10 */ Float vy;
	/* 0x14 */ Float vz;
} NJS_LINE;

typedef struct { // 0x18
	/* 0x00 */ Float px;
	/* 0x04 */ Float py;
	/* 0x08 */ Float pz;
	/* 0x0c */ Float vx;
	/* 0x10 */ Float vy;
	/* 0x14 */ Float vz;
} NJS_PLANE;

typedef struct { // 0x18
	/* 0x00 */ Float px;
	/* 0x04 */ Float py;
	/* 0x08 */ Float pz;
	/* 0x0c */ Float vx;
	/* 0x10 */ Float vy;
	/* 0x14 */ Float vz;
} NJS_PVECTOR;

typedef struct { // 0x10
	/* 0x0 */ float re;
	/* 0x4 */ float im[3];
} NJS_QUATERNION;

typedef struct { // 0xc
	/* 0x0 */ void *filename;
	/* 0x4 */ Uint32 attr;
	/* 0x8 */ Uint32 texaddr;
} NJS_TEXNAME;

typedef struct { // 0x8
	/* 0x0 */ NJS_TEXNAME *textures;
	/* 0x4 */ Uint32 nbTexture;
} NJS_TEXLIST;

typedef struct { // 0x10
	/* 0x0 */ Float x;
	/* 0x4 */ Float y;
	/* 0x8 */ Float z;
	/* 0xc */ Uint32 col;
} NJS_POLYGON_VTX;

typedef struct { // 0x18
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Float u;
	/* 0x10 */ Float v;
	/* 0x14 */ Uint32 col;
} NJS_TEXTURE_VTX;

typedef struct { // 0x1c
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Float u;
	/* 0x10 */ Float v;
	/* 0x14 */ Uint32 bcol;
	/* 0x18 */ Uint32 ocol;
} NJS_TEXTUREH_VTX;

enum {
	NJD_SYSTEM_CTX = 0,
	NJD_DEBUG_CTX = 1,
	NJD_NINDOWS_CTX = 2,
	NJD_USER0_CTX = 3,
	NJD_USER1_CTX = 4,
	NJD_USER2_CTX = 5,
	NJD_CONTEXT_MAX = 6
};

typedef struct { // 0x1e8
	/* 0x000 */ Uint32 flags;
	/* 0x004 */ Uint32 nLastRenderTime[8];
	/* 0x024 */ Uint32 nLastDMATime[8];
	/* 0x044 */ Uint32 nCurrentTimeOutCount;
	/* 0x048 */ Uint32 nDMATimeOutCount;
	/* 0x04c */ Uint32 nRenderTimeOutCount;
	/* 0x050 */ Uint32 nOBJOverflowCount;
	/* 0x054 */ Uint32 nParamOverflowCount;
	/* 0x058 */ Uint32 nParamCurrent;
	/* 0x05c */ Uint32 nOBJCurrent;
	/* 0x060 */ Uint32 nOBJLimit;
	/* 0x064 */ Uint32 nParamLimit;
	/* 0x068 */ Uint32 VertexBufferSize[8][5];
	/* 0x108 */ Uint32 MaxVertexSize[8][5];
	/* 0x1a8 */ Uint32 Reserved[16];
} NJS_SYSTEMMETRICS;

typedef struct { // 0x18
	/* 0x00 */ Bool bPreSort;
	/* 0x04 */ Sint32 nSize[5];
} NJS_PASS_INFO;

typedef struct { // 0xdc
	/* 0x00 */ void *pVertexBuffer;
	/* 0x04 */ Uint32 nVertexBufferSize;
	/* 0x08 */ Uint32 nTextureMemorySize;
	/* 0x0c */ Bool bNoWaitVsync;
	/* 0x10 */ Sint32 nNumOfMaxPass;
	/* 0x14 */ Sint32 nNumOfTextures;
	/* 0x18 */ Sint32 nNumOfSmallVQ;
	/* 0x1c */ NJS_PASS_INFO sPassInfo[8];
} NJS_VERTEXBUFFER_INFO;

typedef struct { // 0x30
	/* 0x00 */ Float xad;
	/* 0x04 */ Float yad;
	/* 0x08 */ Float cx;
	/* 0x0c */ Float cy;
	/* 0x10 */ Float ooxad;
	/* 0x14 */ Float ooyad;
	/* 0x18 */ Float dist;
	/* 0x1c */ Float ax;
	/* 0x20 */ Float ay;
	/* 0x24 */ Float aspect;
	/* 0x28 */ Float w;
	/* 0x2c */ Float h;
} NJS_SCREEN;

typedef struct { // 0x28
	/* 0x00 */ Float f_clip;
	/* 0x04 */ Float n_clip;
	/* 0x08 */ Float x1;
	/* 0x0c */ Float x0;
	/* 0x10 */ Float y1;
	/* 0x14 */ Float y0;
	/* 0x18 */ NJS_POINT2 d[2];
} NJS_CLIP;

enum {
	IP00 = 0,
	IP01 = 1,
	IP02 = 2,
	IP10 = 3,
	IP11 = 4,
	IP12 = 5,
	IP20 = 6,
	IP21 = 7,
	IP22 = 8,
	IP30 = 9,
	IP31 = 10,
	IP32 = 11
};

typedef struct { // 0xc
	/* 0x0 */ int keys;
	/* 0x4 */ int *iparam;
	/* 0x8 */ float *fparam;
} NJS_SPLINE;

typedef struct { // 0x18
	/* 0x00 */ Sint32 *vlist;
	/* 0x04 */ Sint16 *plist;
	/* 0x08 */ NJS_POINT3 center;
	/* 0x14 */ Float r;
} NJS_CNK_MODEL;

struct cnkobj { // 0x38
	/* 0x00 */ Uint32 evalflags;
	/* 0x04 */ NJS_CNK_MODEL *model;
	/* 0x08 */ Float pos[3];
	/* 0x14 */ Angle ang[3];
	/* 0x20 */ Float scl[3];
	/* 0x2c */ cnkobj *child;
	/* 0x30 */ cnkobj *sibling;
	/* 0x34 */ Float re_quat;
};

typedef cnkobj NJS_CNK_OBJECT;

typedef struct { // 0x40
	/* 0x00 */ Float dmy[16];
} NJS_VERTEX_BUF;

typedef enum {
	NJD_CNK_INTENSITY_MODE_DIR = 0,
	NJD_CNK_INTENSITY_MODE_POINT = 1,
	NJD_CNK_INTENSITY_MODE_DIR_POINT = 2
} NJD_CNK_INTENSITY_MODE;

typedef enum {
	NJD_CNK_INTENSITY_LIGHT_0 = 0,
	NJD_CNK_INTENSITY_LIGHT_1 = 1,
	NJD_CNK_INTENSITY_LIGHT_2 = 2,
	NJD_CNK_INTENSITY_LIGHT_3 = 3,
	NJD_CNK_INTENSITY_LIGHT_4 = 4,
	NJD_CNK_INTENSITY_LIGHT_5 = 5,
	NJD_CNK_INTENSITY_LIGHT_6 = 6,
	NJD_CNK_INTENSITY_LIGHT_7 = 7
} NJD_CNK_INTENSITY_LIGHT;

typedef enum {
	NJD_CNK_INTENSITY_EXP_16 = 0,
	NJD_CNK_INTENSITY_EXP_32 = 1
} NJD_CNK_INTENSITY_EXP;

typedef struct { // 0x20
	/* 0x00 */ Float fZ;
	/* 0x04 */ Float fX;
	/* 0x08 */ Float fY;
	/* 0x0c */ Float fW;
	/* 0x10 */ Float fDiff;
	/* 0x14 */ Float fSpec;
	/* 0x18 */ Float fNx;
	/* 0x1c */ Float fNy;
} NJS_CNK_INTENSITY_BUF;

typedef struct { // 0x20
	/* 0x00 */ NJD_CNK_INTENSITY_MODE eMode;
	/* 0x04 */ Float fX0;
	/* 0x08 */ Float fY0;
	/* 0x0c */ Float fZ0;
	/* 0x10 */ Float fX1;
	/* 0x14 */ Float fY1;
	/* 0x18 */ Float fZ1;
	/* 0x1c */ Uint32 pad[1];
} NJS_CNK_INTENSITY_W0;

typedef struct { // 0x20
	/* 0x00 */ Float fX;
	/* 0x04 */ Float fY;
	/* 0x08 */ Float fZ;
	/* 0x0c */ Float fFar;
	/* 0x10 */ Float fNear;
	/* 0x14 */ Float fDiff;
	/* 0x18 */ Float fSpec;
	/* 0x1c */ Uint32 pad[1];
} NJS_CNK_INTENSITY_W1;

typedef struct { // 0x240
	/* 0x000 */ Uint32 nFlags;
	/* 0x004 */ Float fDiffR;
	/* 0x008 */ Float fDiffG;
	/* 0x00c */ Float fDiffB;
	/* 0x010 */ Float fOffsDiff;
	/* 0x014 */ Float fOffsSpec;
	/* 0x018 */ Uint32 nTSP;
	/* 0x01c */ Uint32 nTCW;
	/* 0x020 */ Float fConstDiff;
	/* 0x024 */ Float fConstSpec;
	/* 0x028 */ Float fEnvRatioU;
	/* 0x02c */ Float fEnvRatioV;
	/* 0x030 */ Float fSpecR;
	/* 0x034 */ Float fSpecG;
	/* 0x038 */ Float fSpecB;
	/* 0x03c */ Uint32 pad[1];
	/* 0x040 */ NJS_CNK_INTENSITY_W1 sW1[8];
	/* 0x140 */ NJS_CNK_INTENSITY_W0 sW0[8];
} NJS_CNK_INTENSITY_WORK;

typedef struct { // 0x10
	/* 0x0 */ Float x;
	/* 0x4 */ Float y;
	/* 0x8 */ Float ooz;
	/* 0xc */ Float inten;
} NJS_CNK_EASY_BUF;

typedef struct { // 0x20
	/* 0x00 */ Float z;
	/* 0x04 */ Float x;
	/* 0x08 */ Float y;
	/* 0x0c */ Float ooz;
	/* 0x10 */ Float inten;
	/* 0x14 */ Float spec;
	/* 0x18 */ Float nx;
	/* 0x1c */ Float ny;
} NJS_CNK_SIMPLE_BUF;

typedef struct { // 0x20
	/* 0x00 */ Float z;
	/* 0x04 */ Float x;
	/* 0x08 */ Float y;
	/* 0x0c */ Float ooz;
	/* 0x10 */ Float a;
	/* 0x14 */ Float r;
	/* 0x18 */ Float g;
	/* 0x1c */ Float b;
} NJS_CNK_EASYMULTI_BUF;

typedef struct { // 0x40
	/* 0x00 */ Float z;
	/* 0x04 */ Float sx;
	/* 0x08 */ Float sy;
	/* 0x0c */ Float ooz;
	/* 0x10 */ Float a;
	/* 0x14 */ Float r;
	/* 0x18 */ Float g;
	/* 0x1c */ Float b;
	/* 0x20 */ Float x;
	/* 0x24 */ Float y;
	/* 0x28 */ Float nx;
	/* 0x2c */ Float ny;
	/* 0x30 */ Float nz;
	/* 0x34 */ Float sr;
	/* 0x38 */ Float sg;
	/* 0x3c */ Float sb;
} NJS_CNK_SIMPLEMULTI_BUF;

typedef struct { // 0x10
	/* 0x0 */ Float x;
	/* 0x4 */ Float y;
	/* 0x8 */ Float ooz;
	/* 0xc */ Float z;
} NJS_CNK_MOD_BUF;

typedef struct { // 0x20
	/* 0x00 */ Sint32 inten;
	/* 0x04 */ Float sx;
	/* 0x08 */ Float sy;
	/* 0x0c */ Float ooz;
	/* 0x10 */ Float shade;
	/* 0x14 */ Float x;
	/* 0x18 */ Float y;
	/* 0x1c */ Float z;
} NJS_CNK_TOON_BUF;

typedef struct { // 0x10
	/* 0x0 */ Float sx;
	/* 0x4 */ Float sy;
	/* 0x8 */ Float ooz;
	/* 0xc */ Float z;
} NJS_CNK_TOON_EDGE_BUF;

typedef enum {
	NJ_WIRE_SIMPLE = 0,
	NJ_WIRE_REAL = 1
} NJWIRETYPE;

typedef struct { // 0x20
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Float r;
	/* 0x10 */ void *next;
	/* 0x14 */ Uint32 nOP;
	/* 0x18 */ Uint32 nTR;
	/* 0x1c */ Uint32 mode;
} NJS_DIRECT_HEAD;

typedef struct { // 0x20
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Float inten;
	/* 0x10 */ Float ambient;
	/* 0x14 */ Float r;
	/* 0x18 */ Float g;
	/* 0x1c */ Float b;
} NJS_DIRECT_COMPILE_LIGHT;

typedef Float *NJS_MATRIX_PTR;

enum {
	M00 = 0,
	M01 = 1,
	M02 = 2,
	M03 = 3,
	M10 = 4,
	M11 = 5,
	M12 = 6,
	M13 = 7,
	M20 = 8,
	M21 = 9,
	M22 = 10,
	M23 = 11,
	M30 = 12,
	M31 = 13,
	M32 = 14,
	M33 = 15
};

typedef struct { // 0x20
	/* 0x00 */ Float px;
	/* 0x04 */ Float py;
	/* 0x08 */ Float pz;
	/* 0x0c */ Float vx;
	/* 0x10 */ Float vy;
	/* 0x14 */ Float vz;
	/* 0x18 */ Sangle roll;
	/* 0x1a */ Sangle ang;
	/* 0x1c */ Uint32 type;
} NJS_CAMERA;

typedef struct { // 0xc4
	/* 0x00 */ Float ratten;
	/* 0x04 */ Float ipd;
	/* 0x08 */ Float nrr;
	/* 0x0c */ Float frr;
	/* 0x10 */ Float cosi;
	/* 0x14 */ Float cose;
	/* 0x18 */ Float idev;
	/* 0x1c */ Float odev;
	/* 0x20 */ Float rate;
	/* 0x24 */ Float intns;
	/* 0x28 */ Int exp;
	/* 0x2c */ Int reserve;
	/* 0x30 */ NJS_POINT3 lpnt;
	/* 0x3c */ NJS_VECTOR lvctr;
	/* 0x48 */ NJS_VECTOR lmvctr;
	/* 0x54 */ NJS_ARGB atten;
	/* 0x64 */ NJS_ARGB amb;
	/* 0x74 */ NJS_ARGB dif;
	/* 0x84 */ NJS_ARGB spc;
	/* 0x94 */ NJS_ARGB mamb;
	/* 0xa4 */ NJS_ARGB mdif;
	/* 0xb4 */ NJS_ARGB mspc;
} NJS_LIGHT_CAL;

typedef struct *NJS_LIGHT_CAL_PTR { // 0xc4
	/* 0x00 */ Float ratten;
	/* 0x04 */ Float ipd;
	/* 0x08 */ Float nrr;
	/* 0x0c */ Float frr;
	/* 0x10 */ Float cosi;
	/* 0x14 */ Float cose;
	/* 0x18 */ Float idev;
	/* 0x1c */ Float odev;
	/* 0x20 */ Float rate;
	/* 0x24 */ Float intns;
	/* 0x28 */ Int exp;
	/* 0x2c */ Int reserve;
	/* 0x30 */ NJS_POINT3 lpnt;
	/* 0x3c */ NJS_VECTOR lvctr;
	/* 0x48 */ NJS_VECTOR lmvctr;
	/* 0x54 */ NJS_ARGB atten;
	/* 0x64 */ NJS_ARGB amb;
	/* 0x74 */ NJS_ARGB dif;
	/* 0x84 */ NJS_ARGB spc;
	/* 0x94 */ NJS_ARGB mamb;
	/* 0xa4 */ NJS_ARGB mdif;
	/* 0xb4 */ NJS_ARGB mspc;
};

typedef struct { // 0x34
	/* 0x00 */ Int lsrc;
	/* 0x04 */ Float iamb;
	/* 0x08 */ Float idif;
	/* 0x0c */ Float ispc;
	/* 0x10 */ Float nrang;
	/* 0x14 */ Float frang;
	/* 0x18 */ void *func;
	/* 0x1c */ Angle iang;
	/* 0x20 */ Angle oang;
	/* 0x24 */ NJS_ARGB argb;
} NJS_LIGHT_ATTR;

typedef struct *NJS_LIGHT_ATTR_PTR { // 0x34
	/* 0x00 */ Int lsrc;
	/* 0x04 */ Float iamb;
	/* 0x08 */ Float idif;
	/* 0x0c */ Float ispc;
	/* 0x10 */ Float nrang;
	/* 0x14 */ Float frang;
	/* 0x18 */ void *func;
	/* 0x1c */ Angle iang;
	/* 0x20 */ Angle oang;
	/* 0x24 */ NJS_ARGB argb;
};

typedef struct { // 0x160
	/* 0x000 */ NJS_MATRIX mtrx;
	/* 0x040 */ NJS_POINT3 pnt;
	/* 0x04c */ NJS_VECTOR vctr;
	/* 0x058 */ Int stat;
	/* 0x05c */ Int reserve;
	/* 0x060 */ NJS_LIGHT_CAL ltcal;
	/* 0x124 */ NJS_LIGHT_ATTR attr;
} NJS_LIGHT;

typedef struct *NJS_LIGHT_PTR { // 0x160
	/* 0x000 */ NJS_MATRIX mtrx;
	/* 0x040 */ NJS_POINT3 pnt;
	/* 0x04c */ NJS_VECTOR vctr;
	/* 0x058 */ Int stat;
	/* 0x05c */ Int reserve;
	/* 0x060 */ NJS_LIGHT_CAL ltcal;
	/* 0x124 */ NJS_LIGHT_ATTR attr;
};

typedef struct { // 0x10
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Float key[3];
} NJS_MKEY_F;

typedef struct { // 0x10
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Angle key[3];
} NJS_MKEY_A;

typedef struct { // 0x8
	/* 0x0 */ Uint16 keyframe;
	/* 0x2 */ Sangle key[3];
} NJS_MKEY_SA;

typedef struct { // 0x14
	/* 0x00 */ Uint32 keyframe;
	/* 0x04 */ Angle angle;
	/* 0x08 */ Float axe[3];
} NJS_MKEY_AX;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ void *key;
} NJS_MKEY_P;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Float key;
} NJS_MKEY_F1;

typedef struct { // 0xc
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Float key[2];
} NJS_MKEY_F2;

typedef struct { // 0x14
	/* 0x00 */ Uint32 keyframe;
	/* 0x04 */ Float nrang;
	/* 0x08 */ Float frang;
	/* 0x0c */ Angle iang;
	/* 0x10 */ Angle oang;
} NJS_MKEY_SPOT;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Uint32 key;
} NJS_MKEY_UI32;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Sint32 key;
} NJS_MKEY_SI32;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Sint32 key;
} NJS_MKEY_A1;

typedef struct { // 0x14
	/* 0x00 */ Uint32 keyframe;
	/* 0x04 */ Float key[4];
} NJS_MKEY_QUAT;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Uint32 shapeId;
} NJS_MKEY_SHAPEID;

typedef struct { // 0x4
	/* 0x0 */ Uint16 keyframe;
	/* 0x2 */ Sangle key;
} NJS_MKEY_SA1;

typedef struct { // 0x4
	/* 0x0 */ Uint16 keyframe;
	/* 0x2 */ Uint16 key;
} NJS_MKEY_UI16;

typedef struct { // 0x8
	/* 0x0 */ NJS_MKEY_SHAPEID *keys;
	/* 0x4 */ Uint16 nbKey;
	/* 0x6 */ Uint16 entryId;
} NJS_CSHAPEDATA;

typedef struct { // 0x8
	/* 0x0 */ void *p[1];
	/* 0x4 */ Uint32 nb[1];
} NJS_MDATA1;

typedef struct { // 0x10
	/* 0x0 */ void *p[2];
	/* 0x8 */ Uint32 nb[2];
} NJS_MDATA2;

typedef struct { // 0x18
	/* 0x00 */ void *p[3];
	/* 0x0c */ Uint32 nb[3];
} NJS_MDATA3;

typedef struct { // 0x20
	/* 0x00 */ void *p[4];
	/* 0x10 */ Uint32 nb[4];
} NJS_MDATA4;

typedef struct { // 0x28
	/* 0x00 */ void *p[5];
	/* 0x14 */ Uint32 nb[5];
} NJS_MDATA5;

typedef struct { // 0xc
	/* 0x0 */ void *mdata;
	/* 0x4 */ Uint32 nbFrame;
	/* 0x8 */ Uint16 type;
	/* 0xa */ Uint16 inp_fn;
} NJS_MOTION;

typedef struct { // 0x10
	/* 0x0 */ NJS_MOTION *motion[2];
	/* 0x8 */ Float frame[2];
} NJS_MOTION_LINK;

typedef struct { // 0x8
	/* 0x0 */ NJS_CNK_OBJECT *object;
	/* 0x4 */ NJS_MOTION *motion;
} NJS_ACTION;

typedef struct { // 0x8
	/* 0x0 */ NJS_CNK_OBJECT *object;
	/* 0x4 */ NJS_MOTION_LINK *motionlink;
} NJS_ACTION_LINK;

typedef struct { // 0x4
	/* 0x0 */ Sint32 *cv;
} NJS_CSHAPECV;

typedef struct { // 0x8
	/* 0x0 */ NJS_CSHAPECV *cvlist;
	/* 0x4 */ Uint16 groupId;
	/* 0x6 */ Uint16 reserved;
} NJS_CSHAPE_KEYGROUP;

typedef struct { // 0x8
	/* 0x0 */ NJS_CSHAPE_KEYGROUP *shapes;
	/* 0x4 */ Uint32 nbShape;
} NJS_CSHAPELIST;

typedef struct { // 0x8
	/* 0x0 */ NJS_LIGHT *light;
	/* 0x4 */ NJS_MOTION *motion;
} NJS_LACTION;

typedef struct { // 0x8
	/* 0x0 */ NJS_CAMERA *camera;
	/* 0x4 */ NJS_MOTION *motion;
} NJS_CACTION;

typedef struct { // 0xc
	/* 0x0 */ Float *pos;
	/* 0x4 */ Angle *ang;
	/* 0x8 */ Float *scl;
} NJS_MOTION_DATA;

typedef struct { // 0x10
	/* 0x0 */ Float *pos;
	/* 0x4 */ Float *vect;
	/* 0x8 */ Sangle *roll;
	/* 0xc */ Sangle *ang;
} NJS_CMOTION_DATA;

typedef struct { // 0xc
	/* 0x0 */ Float *pos;
	/* 0x4 */ Float *rgb;
	/* 0x8 */ Float *rang;
} NJS_LMOTION_DATA;

typedef struct { // 0xc
	/* 0x0 */ Int n;
	/* 0x4 */ NJS_LIGHT **lights;
	/* 0x8 */ NJS_MOTION **motions;
} NJS_MLIGHT_MOTION;

typedef struct { // 0x20
	/* 0x00 */ Uint32 Type;
	/* 0x04 */ Uint32 BitDepth;
	/* 0x08 */ Uint32 PixelFormat;
	/* 0x0c */ Uint32 nWidth;
	/* 0x10 */ Uint32 nHeight;
	/* 0x14 */ Uint32 TextureSize;
	/* 0x18 */ Uint32 fSurfaceFlags;
	/* 0x1c */ Uint32 *pSurface;
} NJS_TEXSURFACE;

typedef struct { // 0x28
	/* 0x00 */ Uint32 globalIndex;
	/* 0x04 */ NJS_TEXSURFACE texsurface;
	/* 0x24 */ Int count;
} NJS_TEXSYSTEM;

typedef struct { // 0x18
	/* 0x00 */ Uint32 tspparam;
	/* 0x04 */ Uint32 texparam;
	/* 0x08 */ Uint32 bank;
	/* 0x0c */ NJS_TEXSYSTEM *texsys;
	/* 0x10 */ Int count;
	/* 0x14 */ Uint32 texflag;
} NJS_TEXMANAGE;

typedef struct { // 0xc
	/* 0x0 */ void *palette;
	/* 0x4 */ Uint16 mode;
	/* 0x6 */ Sint16 bank;
	/* 0x8 */ Sint16 offset;
	/* 0xa */ Sint16 count;
} NJS_TEXPALETTE;

typedef struct { // 0x20
	/* 0x00 */ Uint32 n;
	/* 0x04 */ Uint32 globalIndex;
	/* 0x08 */ Sint32 texerr;
	/* 0x0c */ Sint32 gdstat;
	/* 0x10 */ Sint32 gderr;
	/* 0x14 */ Sint32 reserved0;
	/* 0x18 */ Sint32 reserved1;
	/* 0x1c */ Sint32 reserved2;
} NJS_TEXERRSTAT;

typedef struct { // 0x8
	/* 0x0 */ Uint32 nTextureType;
	/* 0x4 */ Uint16 nWidth;
	/* 0x6 */ Uint16 nHeight;
} NJS_PVRHEADERDATA;

typedef struct { // 0x24
	/* 0x00 */ void *texaddr;
	/* 0x04 */ NJS_TEXSURFACE texsurface;
} NJS_TEXINFO;

typedef NJS_TEXMANAGE NJS_TEXMNGDEBUG[100];
typedef NJS_TEXSYSTEM NJS_TEXSYSDEBUG[100];
typedef Uint32 NJS_SCLATTR;
typedef Float NJS_SCLMTRX[4];

typedef struct { // 0x74
	/* 0x00 */ Uint16 celps;
	/* 0x02 */ Uint16 mapw;
	/* 0x04 */ Uint16 maph;
	/* 0x06 */ Uint16 sw;
	/* 0x08 */ Uint16 sh;
	/* 0x0c */ NJS_TEXLIST *list;
	/* 0x10 */ Uint32 *map;
	/* 0x14 */ Float px;
	/* 0x18 */ Float py;
	/* 0x1c */ Float bx;
	/* 0x20 */ Float by;
	/* 0x24 */ Float pr;
	/* 0x28 */ Uint16 sflag;
	/* 0x2c */ Float sx;
	/* 0x30 */ Float sy;
	/* 0x34 */ Float spx;
	/* 0x38 */ Float spy;
	/* 0x3c */ Uint16 mflag;
	/* 0x40 */ Float cx;
	/* 0x44 */ Float cy;
	/* 0x48 */ NJS_SCLMTRX m;
	/* 0x58 */ Uint32 colmode;
	/* 0x5c */ NJS_POINT2 clip[2];
	/* 0x6c */ NJS_SCLATTR attr;
	/* 0x70 */ NJS_COLOR sclc;
} NJS_SCROLL;

enum {
	_SM00 = 0,
	_SM01 = 1,
	_SM10 = 2,
	_SM11 = 3
};

typedef struct { // 0x14
	/* 0x00 */ Sint16 sx;
	/* 0x02 */ Sint16 sy;
	/* 0x04 */ Sint16 cx;
	/* 0x06 */ Sint16 cy;
	/* 0x08 */ Sint16 u1;
	/* 0x0a */ Sint16 v1;
	/* 0x0c */ Sint16 u2;
	/* 0x0e */ Sint16 v2;
	/* 0x10 */ Sint16 texid;
	/* 0x12 */ Sint16 attr;
} NJS_TEXANIM;

typedef struct { // 0x20
	/* 0x00 */ NJS_POINT3 p;
	/* 0x0c */ Float sx;
	/* 0x10 */ Float sy;
	/* 0x14 */ Angle ang;
	/* 0x18 */ NJS_TEXLIST *tlist;
	/* 0x1c */ NJS_TEXANIM *tanim;
} NJS_SPRITE;

typedef struct { // 0x20
	/* 0x00 */ Float x1;
	/* 0x04 */ Float y1;
	/* 0x08 */ Float x2;
	/* 0x0c */ Float y2;
	/* 0x10 */ Float u1;
	/* 0x14 */ Float v1;
	/* 0x18 */ Float u2;
	/* 0x1c */ Float v2;
} NJS_QUAD_TEXTURE;

typedef struct { // 0x40
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Float vx1;
	/* 0x10 */ Float vy1;
	/* 0x14 */ Float vx2;
	/* 0x18 */ Float vy2;
	/* 0x1c */ Uint32 dmy;
	/* 0x20 */ Float u;
	/* 0x24 */ Float v;
	/* 0x28 */ Float vu1;
	/* 0x2c */ Float vv1;
	/* 0x30 */ Float vu2;
	/* 0x34 */ Float vv2;
	/* 0x38 */ Uint32 dmy2[2];
} NJS_QUAD_TEXTURE_EX;

typedef Float NJS_FOG_TABLE[128];

typedef struct { // 0x10
	/* 0x0 */ NJS_POINT3 c;
	/* 0xc */ Float r;
} NJS_SPHERE;

typedef struct { // 0x1c
	/* 0x00 */ NJS_POINT3 c1;
	/* 0x0c */ NJS_POINT3 c2;
	/* 0x18 */ Float r;
} NJS_CAPSULE;

typedef struct { // 0x60
	/* 0x00 */ NJS_POINT3 v[8];
} NJS_BOX;

typedef struct { // 0x30
	/* 0x00 */ NJS_POINT3 p;
	/* 0x0c */ NJS_VECTOR v[3];
} NJS_PARAHEXA;

typedef struct { // 0x40
	/* 0x00 */ Sint16 texId;
	/* 0x02 */ Sint16 attr;
	/* 0x04 */ Float cox;
	/* 0x08 */ Float coy;
	/* 0x0c */ Float csx;
	/* 0x10 */ Float csy;
	/* 0x14 */ Sint16 czang;
	/* 0x16 */ Sint16 cp;
	/* 0x18 */ Float cent_x;
	/* 0x1c */ Float cent_y;
	/* 0x20 */ NJS_COLOR argb[4];
	/* 0x30 */ Float u0;
	/* 0x34 */ Float v0;
	/* 0x38 */ Float u2;
	/* 0x3c */ Float v2;
} NJS_CELL;

typedef struct { // 0x40
	/* 0x00 */ NJS_CELL *cells;
	/* 0x04 */ Int nbCell;
	/* 0x08 */ NJS_POINT3 pos;
	/* 0x14 */ Angle zang;
	/* 0x18 */ Float sx;
	/* 0x1c */ Float sy;
	/* 0x20 */ NJS_ARGB diffuse;
	/* 0x30 */ NJS_ARGB specular;
} NJS_CELL_SPRITE;

typedef struct { // 0x10
	/* 0x0 */ Sint32 *cellstream;
	/* 0x4 */ Sint32 *cur_stamp_p;
	/* 0x8 */ Sint32 timeoffset;
	/* 0xc */ Sint32 timemax;
} NJS_CELL_STREAM;

typedef struct { // 0x410
	/* 0x000 */ Sint32 nbStream;
	/* 0x004 */ Sint32 streamtime;
	/* 0x008 */ NJS_CELL_SPRITE *csp;
	/* 0x00c */ Sint32 *wbuf;
	/* 0x010 */ NJS_CELL_STREAM *streamlist[256];
} NJS_CELL_STREAM_LIST;

typedef struct { // 0x74
	/* 0x00 */ Uint32 flag;
	/* 0x04 */ NJS_POINT3 cst_pos;
	/* 0x10 */ NJS_POINT3 off_pos;
	/* 0x1c */ Angle cst_zang;
	/* 0x20 */ Angle off_zang;
	/* 0x24 */ Float cst_sx;
	/* 0x28 */ Float cst_sy;
	/* 0x2c */ Float off_sx;
	/* 0x30 */ Float off_sy;
	/* 0x34 */ NJS_ARGB cst_diffuse;
	/* 0x44 */ NJS_ARGB off_diffuse;
	/* 0x54 */ NJS_ARGB cst_specular;
	/* 0x64 */ NJS_ARGB off_specular;
} NJS_CELL_SPRITE_VAL;

typedef struct { // 0xc
	/* 0x0 */ Sint32 nextptr;
	/* 0x4 */ Uint16 mode;
	/* 0x6 */ Sint16 bank;
	/* 0x8 */ Sint16 entryoffset;
	/* 0xa */ Sint16 entrycount;
} NUS_PALETTE_HEADR;

typedef struct { // 0xc
	/* 0x0 */ Sint32 chunk;
	/* 0x4 */ Sint32 nextptr;
	/* 0x8 */ Uint16 pvmstatus;
	/* 0xa */ Sint16 entrycount;
} NUS_PVM_PVMH_HEAD;

typedef struct { // 0x10
	/* 0x0 */ Sint32 chunk;
	/* 0x4 */ Sint32 nextptr;
	/* 0x8 */ NJS_PVRHEADERDATA data;
} NUS_PVR_PVRT_HEAD;

typedef struct { // 0x10
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Float key[3];
} NUS_MKEY_F;

typedef struct { // 0x10
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Angle key[3];
} NUS_MKEY_A;

typedef struct { // 0x8
	/* 0x0 */ Uint16 keyframe;
	/* 0x2 */ Sangle key[3];
} NUS_MKEY_SA;

typedef struct { // 0x14
	/* 0x00 */ Uint32 keyframe;
	/* 0x04 */ Angle angle;
	/* 0x08 */ Float axe[3];
} NUS_MKEY_AX;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ void *key;
} NUS_MKEY_P;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Float key;
} NUS_MKEY_F1;

typedef struct { // 0xc
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Float key[2];
} NUS_MKEY_F2;

typedef struct { // 0x14
	/* 0x00 */ Uint32 keyframe;
	/* 0x04 */ Float nrang;
	/* 0x08 */ Float frang;
	/* 0x0c */ Angle iang;
	/* 0x10 */ Angle oang;
} NUS_MKEY_SPOT;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Uint32 key;
} NUS_MKEY_UI32;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Sint32 key;
} NUS_MKEY_SI32;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Sint32 key;
} NUS_MKEY_A1;

typedef struct { // 0x14
	/* 0x00 */ Uint32 keyframe;
	/* 0x04 */ Float key[4];
} NUS_MKEY_QUAT;

typedef struct { // 0x8
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Uint32 shapeId;
} NUS_MKEY_SHAPEID;

typedef struct { // 0x4
	/* 0x0 */ Uint16 keyframe;
	/* 0x2 */ Sangle key;
} NUS_MKEY_SA1;

typedef struct { // 0x4
	/* 0x0 */ Uint16 keyframe;
	/* 0x2 */ Uint16 key;
} NUS_MKEY_UI16;

typedef struct { // 0x8
	/* 0x0 */ NUS_MKEY_SHAPEID *keys;
	/* 0x4 */ Uint16 nbKey;
	/* 0x6 */ Uint16 entryId;
} NUS_CSHAPEDATA;

typedef struct { // 0x8
	/* 0x0 */ void *p[1];
	/* 0x4 */ Uint32 nb[1];
} NUS_MDATA1;

typedef struct { // 0x10
	/* 0x0 */ void *p[2];
	/* 0x8 */ Uint32 nb[2];
} NUS_MDATA2;

typedef struct { // 0x18
	/* 0x00 */ void *p[3];
	/* 0x0c */ Uint32 nb[3];
} NUS_MDATA3;

typedef struct { // 0x20
	/* 0x00 */ void *p[4];
	/* 0x10 */ Uint32 nb[4];
} NUS_MDATA4;

typedef struct { // 0x28
	/* 0x00 */ void *p[5];
	/* 0x14 */ Uint32 nb[5];
} NUS_MDATA5;

typedef struct { // 0xc
	/* 0x0 */ void *mdata;
	/* 0x4 */ Uint32 nbFrame;
	/* 0x8 */ Uint16 type;
	/* 0xa */ Uint16 inp_fn;
} NUS_MOTION;

typedef struct { // 0x10
	/* 0x0 */ NUS_MOTION *motion[2];
	/* 0x8 */ Float frame[2];
} NUS_MOTION_LINK;

typedef struct { // 0x8
	/* 0x0 */ NJS_CNK_OBJECT *object;
	/* 0x4 */ NUS_MOTION *motion;
} NUS_ACTION;

typedef struct { // 0x8
	/* 0x0 */ NJS_CNK_OBJECT *object;
	/* 0x4 */ NUS_MOTION_LINK *motionlink;
} NUS_ACTION_LINK;

typedef struct { // 0x4
	/* 0x0 */ Sint32 *cv;
} NUS_CSHAPECV;

typedef struct { // 0x8
	/* 0x0 */ NUS_CSHAPECV *cvlist;
	/* 0x4 */ Uint16 groupId;
	/* 0x6 */ Uint16 reserved;
} NUS_CSHAPE_KEYGROUP;

typedef struct { // 0x8
	/* 0x0 */ NUS_CSHAPE_KEYGROUP *shapes;
	/* 0x4 */ Uint32 nbShape;
} NUS_CSHAPELIST;

typedef struct { // 0x8
	/* 0x0 */ NJS_LIGHT *light;
	/* 0x4 */ NUS_MOTION *motion;
} NUS_LACTION;

typedef struct { // 0x8
	/* 0x0 */ NJS_CAMERA *camera;
	/* 0x4 */ NUS_MOTION *motion;
} NUS_CACTION;

typedef struct { // 0xc
	/* 0x0 */ Float *pos;
	/* 0x4 */ Angle *ang;
	/* 0x8 */ Float *scl;
} NUS_MOTION_DATA;

typedef struct { // 0x10
	/* 0x0 */ Float *pos;
	/* 0x4 */ Float *vect;
	/* 0x8 */ Sangle *roll;
	/* 0xc */ Sangle *ang;
} NUS_CMOTION_DATA;

typedef struct { // 0xc
	/* 0x0 */ Float *pos;
	/* 0x4 */ Float *rgb;
	/* 0x8 */ Float *rang;
} NUS_LMOTION_DATA;

typedef struct { // 0xc
	/* 0x0 */ Int n;
	/* 0x4 */ NJS_LIGHT **lights;
	/* 0x8 */ NUS_MOTION **motions;
} NUS_MLIGHT_MOTION;

typedef struct { // 0x10
	/* 0x0 */ NJS_POINT2 *p;
	/* 0x4 */ NJS_COLOR *col;
	/* 0x8 */ NJS_COLOR *tex;
	/* 0xc */ Uint32 num;
} NJS_POINT2COL;

typedef struct { // 0x10
	/* 0x0 */ NJS_POINT3 *p;
	/* 0x4 */ NJS_COLOR *col;
	/* 0x8 */ NJS_COLOR *tex;
	/* 0xc */ Uint32 num;
} NJS_POINT3COL;

typedef struct { // 0x4
	/* 0x0 */ Sint32 dummy;
} NJS_TEXMEMLIST;

enum {
	NJD_CS_COMPILE_NB_VERTICES = 0,
	NJD_CS_COMPILE_NB_POLYGONS = 1,
	NJD_CS_COMPILE_CV_TYPE = 2,
	NJD_CS_COMPILE_PKT_QWC = 3,
	NJD_CS_COMPILE_PKT_OFS = 4,
	NJD_CS_COMPILE_NUM = 5
};

typedef struct { // 0x78
	/* 0x00 */ Uint32 type;
	/* 0x04 */ Uint32 reserved[3];
	/* 0x10 */ Uint8 is_root;
	/* 0x11 */ Uint8 area_code;
	/* 0x12 */ Uint8 connector_dir[2];
	/* 0x14 */ char product_name[32];
	/* 0x34 */ char license[64];
	/* 0x74 */ Uint16 stdby_pow;
	/* 0x76 */ Uint16 max_pow;
} PDS_PERIPHERALINFO;

typedef struct { // 0x34
	/* 0x00 */ Uint32 id;
	/* 0x04 */ Uint32 support;
	/* 0x08 */ Uint32 on;
	/* 0x0c */ Uint32 off;
	/* 0x10 */ Uint32 press;
	/* 0x14 */ Uint32 release;
	/* 0x18 */ Uint16 r;
	/* 0x1a */ Uint16 l;
	/* 0x1c */ Sint16 x1;
	/* 0x1e */ Sint16 y1;
	/* 0x20 */ Sint16 x2;
	/* 0x22 */ Sint16 y2;
	/* 0x24 */ char *name;
	/* 0x28 */ void *extend;
	/* 0x2c */ Uint32 old;
	/* 0x30 */ PDS_PERIPHERALINFO *info;
} PDS_PERIPHERAL;

typedef GDS_FS_WORK GDFS_WORK;
typedef GDS_DCF GD_DCF;
typedef GDS_FS_LIF GDFS_LIF;

struct GDS_FS_HANDLE { // 0x54
	/* 0x00 */ GDFS_WORK *wk;
	/* 0x04 */ Sint32 fid;
	/* 0x08 */ Sint32 fad;
	/* 0x0c */ Sint32 fsize;
	/* 0x10 */ Sint32 fsctsize;
	/* 0x14 */ Sint32 ofs;
	/* 0x18 */ Sint32 trnsed;
	/* 0x1c */ Sint32 rsize;
	/* 0x20 */ Sint32 trsize;
	/* 0x24 */ void (*rdendcb)(/* parameters unknown */);
	/* 0x28 */ void *rdcb_1st;
	/* 0x2c */ void (*trendcb)(/* parameters unknown */);
	/* 0x30 */ void *trcb_1st;
	/* 0x34 */ void (*errcb)(/* parameters unknown */);
	/* 0x38 */ void *errcb_1st;
	/* 0x3c */ Sint32 gdchn;
	/* 0x40 */ Sint32 gdchn_wait;
	/* 0x44 */ Sint32 ex_errcode;
	/* 0x48 */ Sint16 act;
	/* 0x4a */ Sint16 trflag;
	/* 0x4c */ Sint16 used;
	/* 0x4e */ Sint16 tmode;
	/* 0x50 */ Sint16 stat;
	/* 0x52 */ Sint16 err;
};

typedef GDS_FS_HANDLE GDFS_HANDLE;
typedef GDFS_HANDLE *GDFS;

struct GDS_FS_DIRREC_ENT { // 0x2c
	/* 0x00 */ Sint32 fad;
	/* 0x04 */ Sint32 fsize;
	/* 0x08 */ Uint8 flag;
	/* 0x09 */ Uint8 sid;
	/* 0x0a */ Sint8 fname[32];
	/* 0x2a */ Sint8 pad[2];
};

typedef GDS_FS_DIRREC_ENT GDFS_DIRREC_ENT;

struct GDS_FS_DIRREC_TBL { // 0x3c
	/* 0x00 */ Sint32 dir_num;
	/* 0x04 */ Sint32 max_ent;
	/* 0x08 */ Sint32 dir_fad;
	/* 0x0c */ Sint32 pad;
	/* 0x10 */ GDFS_DIRREC_ENT dirrec_tbl[1];
};

typedef GDS_FS_DIRREC_TBL GDFS_DIRREC_TBL;
typedef GDFS_DIRREC_TBL *GDFS_DIRREC;

struct GDS_FS_DIRINFO { // 0xc
	/* 0x0 */ Sint32 fad;
	/* 0x4 */ Sint32 fsize;
	/* 0x8 */ Uint8 flag;
	/* 0x9 */ Uint8 pad[3];
};

typedef GDS_FS_DIRINFO GDFS_DIRINFO;

struct GDS_FS_WORK { // 0x10d4
	/* 0x0000 */ Sint32 max_open;
	/* 0x0004 */ Sint32 pathtbl_fad;
	/* 0x0008 */ Sint32 pathtbl_size;
	/* 0x000c */ GD_DCF *dcf;
	/* 0x0010 */ GDFS_DIRREC curdir;
	/* 0x0014 */ GDFS syshdl;
	/* 0x0018 */ GDFS hndtbl;
	/* 0x001c */ GDFS now_work;
	/* 0x0020 */ Sint32 f_svr;
	/* 0x0024 */ void (*g_errcb)(/* parameters unknown */);
	/* 0x0028 */ void *g_errcb_1st;
	/* 0x002c */ Sint32 gdc_ver;
	/* 0x0030 */ Sint32 errstat;
	/* 0x0034 */ Sint32 istray;
	/* 0x0038 */ Sint16 f_init;
	/* 0x003a */ Sint16 daplayed;
	/* 0x003c */ GDFS_LIF *liftbl;
	/* 0x0040 */ Uint32 sctbuf[1040];
	/* 0x1080 */ GDFS_HANDLE hndlist[1];
};

typedef void (*GDFS_FUNC)(/* parameters unknown */);
typedef void (*GDFS_ERRFUNC)(/* parameters unknown */);

struct GDS_FS_DAINFO { // 0x14
	/* 0x00 */ Sint32 track;
	/* 0x04 */ Sint32 min;
	/* 0x08 */ Sint32 sec;
	/* 0x0c */ Sint32 frame;
	/* 0x10 */ Sint32 fad;
};

typedef GDS_FS_DAINFO GDFS_DAINFO;
typedef Uint16 SY_TMR_CLOCK;

struct _SYS_RTC_DATE { // 0xa
	/* 0x0 */ Uint16 year;
	/* 0x2 */ Uint8 month;
	/* 0x3 */ Uint8 day;
	/* 0x4 */ Uint8 hour;
	/* 0x5 */ Uint8 minute;
	/* 0x6 */ Uint8 second;
	/* 0x7 */ Uint8 dayofweek;
	/* 0x8 */ Uint8 ageofmoon;
};

typedef _SYS_RTC_DATE SYS_RTC_DATE;

typedef struct { // 0x10
	/* 0x0 */ Void* (*malloc)(/* parameters unknown */);
	/* 0x4 */ Void (*free)(/* parameters unknown */);
	/* 0x8 */ Void* (*calloc)(/* parameters unknown */);
	/* 0xc */ Void* (*realloc)(/* parameters unknown */);
} SYS_MALLOC_IF;

struct tag_SYS_BT_SYSTEMID { // 0x18
	/* 0x00 */ Sint32 nNo;
	/* 0x04 */ Sint32 nAll;
	/* 0x08 */ Sint8 szProduct[16];
};

typedef tag_SYS_BT_SYSTEMID SYS_BT_SYSTEMID;

struct tag_SYS_BT_FNT_INFO { // 0x2
	/* 0x0 */ Uint8 width;
	/* 0x1 */ Uint8 height;
};

typedef tag_SYS_BT_FNT_INFO SYS_BT_FNT_INFO;

typedef enum {
	SYE_BT_FNT_FONTSET_WESTERN_24 = 0,
	SYE_BT_FNT_FONTSET_JP_JIS_24 = 1,
	SYE_BT_FNT_FONTSET_JP_KANA_24 = 2,
	SYE_BT_FNT_FONTSET_JP_LVL1_24 = 3,
	SYE_BT_FNT_FONTSET_JP_LVL2_24 = 4,
	SYE_BT_FNT_FONTSET_JP_GAIJ_24 = 5,
	SYE_BT_FNT_FONTSET_VMSICON = 6,
	SYE_BT_FNT_FONTSET_END = 7,
	SYE_BT_FNT_FONTSET_JP_ASCII_12 = 8,
	SYE_BT_FNT_FONTSET_JP_ASCII_JP_12 = 9
} SYE_BT_FNT_FONTSET;

typedef struct { // 0x4
	/* 0x0 */ Uint8 lang;
	/* 0x1 */ Uint8 type;
	/* 0x2 */ Uint8 led;
	/* 0x3 */ Uint8 led_ctrl;
} PDS_KEYBOARDINFO;

typedef struct { // 0xc
	/* 0x0 */ Uint8 ctrl;
	/* 0x1 */ Uint8 led;
	/* 0x2 */ Uint8 key[6];
	/* 0x8 */ PDS_KEYBOARDINFO *info;
} PDS_KEYBOARD;

typedef struct { // 0x8
	/* 0x0 */ Uint8 unit;
	/* 0x1 */ Uint8 flag;
	/* 0x2 */ Sint8 power;
	/* 0x3 */ Uint8 freq;
	/* 0x4 */ Uint8 inc;
	/* 0x5 */ Uint8 reserved[3];
} PDS_VIBPARAM;

typedef struct { // 0x2
	/* 0x0 */ Uint8 units;
	/* 0x1 */ Uint8 se_units;
} PDS_VIBINFO;

typedef struct { // 0x8
	/* 0x0 */ Uint8 position;
	/* 0x1 */ Uint8 axis;
	/* 0x2 */ Uint8 pow_enable;
	/* 0x3 */ Uint8 cont_enable;
	/* 0x4 */ Uint8 dir_enable;
	/* 0x5 */ Uint8 wave_enable;
	/* 0x6 */ Uint8 min_freq;
	/* 0x7 */ Uint8 max_freq;
} PDS_VIBUNITINFO;

typedef Sint32 (*PD_VIBCALLBACK)(/* parameters unknown */);
typedef Sint32 (*PD_VIBENUMUNITCALLBACK)(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ Uint16 year;
	/* 0x2 */ Uint8 month;
	/* 0x3 */ Uint8 day;
	/* 0x4 */ Uint8 hour;
	/* 0x5 */ Uint8 minute;
	/* 0x6 */ Uint8 second;
	/* 0x7 */ Uint8 dayofweek;
} PDS_TIME;

typedef void (*PD_TIMERCALLBACK)(/* parameters unknown */);
typedef Uint32 SY_CACHE_FORM;

enum {
	UFD_SAVE = 0,
	UFD_LOAD = 1,
	UFD_PLAY = 2
};

enum {
	UFD_OFF = 0,
	UFD_ON = 1,
	UFD_UNK = 255
};

typedef enum {
	UFD_ERR_USERFLAG_PARITY_ERROR = 1,
	UFD_ERR_BANKNUMBER_ERROR = 2,
	UFD_ERR_PROTECT_COMMON_FLAG = 3,
	UFD_ERR_PROTECT_FLAG = 4,
	UFD_ERR_NO_INIT = 5,
	UFD_ERR_INIT_FAIL = 6,
	UFD_ERR_READ_FAIL = 7,
	UFD_ERR_WRITE_FAIL = 8,
	UFD_ERR_NOT_FOUND = 9,
	UFD_ERR_NO_PACKET_LEFT = 10,
	UFD_ERR_MEMORY_FAIL = 11,
	UFD_ERR_PERIINITFAIL = 12,
	UFD_ERR_REFRESHFAIL = 13,
	UFD_ERR_MAX = 14
} UFS_ERROR;

struct tagUFS_Packet0 { // 0x3c
	/* 0x00 */ Uint8 version;
	/* 0x01 */ Uint8 AutoSave;
	/* 0x02 */ Uint8 ProdNum[10];
	/* 0x0c */ Uint8 ProdName[48];
};

typedef tagUFS_Packet0 UFS_HistoryPacket0;

struct tag_HistoryPacket1 { // 0x3c
	/* 0x00 */ Uint8 ProdName2[44];
	/* 0x2c */ Uint32 Kind;
	/* 0x30 */ Uint32 FirstStartTime;
	/* 0x34 */ Uint16 CRC;
	/* 0x36 */ Uint8 PeriIdx[6];
};

typedef tag_HistoryPacket1 UFS_HistoryPacket1;

struct tagUFS_HistoryPacket2 { // 0x3c
	/* 0x00 */ Uint32 PrevStartTime;
	/* 0x04 */ Uint16 StartCount;
	/* 0x06 */ Uint16 PlayTime[24];
	/* 0x36 */ Uint16 LoadCount;
	/* 0x38 */ Uint32 Reserve_2;
};

typedef tagUFS_HistoryPacket2 UFS_HistoryPacket2;

struct tagUFS_HistoryPacket3 { // 0x3c
	/* 0x00 */ Uint16 SaveCount;
	/* 0x02 */ Uint8 GameEst;
	/* 0x03 */ Uint8 GameCarry;
	/* 0x04 */ Uint32 FirstNetPlay;
	/* 0x08 */ Uint32 PrevNetPlay;
	/* 0x0c */ Uint16 NetPlayCount;
	/* 0x0e */ Uint16 NetPlayTotalTime;
	/* 0x10 */ Uint8 FreeArea[32];
	/* 0x30 */ Uint8 Reserved2[10];
	/* 0x3a */ Uint16 SaveOccur;
};

typedef tagUFS_HistoryPacket3 UFS_HistoryPacket3;

struct tagUFS_PlayHistory { // 0xf0
	/* 0x00 */ UFS_HistoryPacket0 packet0;
	/* 0x3c */ UFS_HistoryPacket1 packet1;
	/* 0x78 */ UFS_HistoryPacket2 packet2;
	/* 0xb4 */ UFS_HistoryPacket3 packet3;
};

typedef tagUFS_PlayHistory UFS_PlayHistory;

struct tagUFS_AllPlayHistory { // 0xf0
	/* 0x00 */ Uint8 version;
	/* 0x01 */ Uint8 AutoSave;
	/* 0x02 */ Uint8 ProdNum[10];
	/* 0x0c */ Uint8 ProdName[48];
	/* 0x3c */ Uint8 ProdName2[44];
	/* 0x68 */ Uint32 Kind;
	/* 0x6c */ Uint32 FirstStartTime;
	/* 0x70 */ Uint16 CRC;
	/* 0x72 */ Uint8 PeriIdx[6];
	/* 0x78 */ Uint32 PrevStartTime;
	/* 0x7c */ Uint16 StartCount;
	/* 0x7e */ Uint16 PlayTime[24];
	/* 0xae */ Uint16 LoadCount;
	/* 0xb0 */ Uint32 Reserve_2;
	/* 0xb4 */ Uint16 SaveCount;
	/* 0xb6 */ Uint8 GameEst;
	/* 0xb7 */ Uint8 GameCarry;
	/* 0xb8 */ Uint32 FirstNetPlay;
	/* 0xbc */ Uint32 PrevNetPlay;
	/* 0xc0 */ Uint16 NetPlayCount;
	/* 0xc2 */ Uint16 NetPlayTotalTime;
	/* 0xc4 */ Uint8 FreeArea[32];
	/* 0xe4 */ Uint8 Reserved2[10];
	/* 0xee */ Uint16 SaveOccur;
};

typedef tagUFS_AllPlayHistory UFS_AllPlayHistory;

struct SyFbrS_INFO_tag { // 0x8
	/* 0x0 */ Void *sp;
	/* 0x4 */ Void *data;
};

typedef SyFbrS_INFO_tag SYS_FBR_INFO;
typedef SYS_FBR_INFO *SYFBR;
typedef Void (*SyFbrYfunc)(/* parameters unknown */);
typedef Uint32 SYCALLBACK;
typedef Uint32 SY_CALLBACK_EVENT;

typedef struct { // 0x18
	/* 0x00 */ Uint32 on;
	/* 0x04 */ Uint32 off;
	/* 0x08 */ Uint32 press;
	/* 0x0c */ Uint32 release;
	/* 0x10 */ Uint32 old;
	/* 0x14 */ Uint8 connect;
	/* 0x15 */ Uint8 opt;
	/* 0x16 */ Uint8 reserved[2];
} PDS_MOUSE_BUTTON;

typedef struct { // 0x12
	/* 0x00 */ Uint8 over;
	/* 0x01 */ Uint8 reserved;
	/* 0x02 */ Sint16 x;
	/* 0x04 */ Sint16 y;
	/* 0x06 */ Sint16 z;
	/* 0x08 */ Sint16 axis[5];
} PDS_MOUSE_AXIS;

typedef struct { // 0x3
	/* 0x0 */ Uint8 reserved;
	/* 0x1 */ Uint8 button;
	/* 0x2 */ Uint8 axis;
} PDS_MOUSE_INFO;

typedef struct { // 0x8
	/* 0x0 */ Bool (*func)(/* parameters unknown */);
	/* 0x4 */ void *obj;
} SYS_CBFN;

typedef struct { // 0x8
	/* 0x0 */ void (*func)(/* parameters unknown */);
	/* 0x4 */ void *obj;
} SYS_CBFN_ERR;

typedef struct { // 0x8
	/* 0x0 */ Uint8 speed;
	/* 0x1 */ Uint8 stopbit;
	/* 0x2 */ Uint8 databit;
	/* 0x3 */ Uint8 parity;
	/* 0x4 */ Uint8 flow;
	/* 0x5 */ Uint8 reserved[3];
} SYS_COM_PARAM;

typedef struct { // 0x20
	/* 0x00 */ Sint8 dummy[32];
} SYS_MALCM_ALIGN;

typedef union { // 0x20
	/* 0x00 */ struct { // 0x8
		/* 0x00 */ SYS_MALCM_HEADER *ptr;
		/* 0x04 */ Uint32 size;
	} s;
	/* 0x00 */ SYS_MALCM_ALIGN x;
} SYS_MALCM_HEADER;

struct _SYS_MALCM_IF { // 0x10
	/* 0x0 */ Void* (*malloc)(/* parameters unknown */);
	/* 0x4 */ Void (*free)(/* parameters unknown */);
	/* 0x8 */ Void* (*calloc)(/* parameters unknown */);
	/* 0xc */ Void* (*realloc)(/* parameters unknown */);
};

typedef _SYS_MALCM_IF SYS_MALCM_IF;

struct _SYS_MALCM_HEAPH { // 0x30
	/* 0x00 */ SYS_MALCM_HEADER Root;
	/* 0x20 */ SYS_MALCM_HEADER *Freep;
	/* 0x24 */ Uint32 Size;
	/* 0x28 */ char *Start;
	/* 0x2c */ _SYS_MALCM_IF *mallocIf;
};

typedef _SYS_MALCM_HEAPH SYS_MALCM_HEAPH;

enum {
	DG_LANG_JAPANESE = 0,
	DG_LANG_ENGLISH = 1,
	DG_LANG_GERMAN = 2,
	DG_LANG_FRENCH = 3,
	DG_LANG_SPANISH = 4,
	DG_LANG_ITALIAN = 5,
	DG_LANG_MAX = 6
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef void *ADXSJD;
typedef void *ADXRNA;

struct _adx_talk { // 0xa8
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 stat;
	/* 0x02 */ Sint8 pmode;
	/* 0x03 */ Sint8 maxnch;
	/* 0x04 */ ADXSJD sjd;
	/* 0x08 */ ADXSTM stm;
	/* 0x0c */ ADXRNA rna;
	/* 0x10 */ SJ sjf;
	/* 0x14 */ SJ sji;
	/* 0x18 */ SJ sjo[2];
	/* 0x20 */ Sint8 *ibuf;
	/* 0x24 */ Sint32 ibuflen;
	/* 0x28 */ Sint32 ibufxlen;
	/* 0x2c */ Sint16 *obuf;
	/* 0x30 */ Sint32 obufsize;
	/* 0x34 */ Sint32 obufdist;
	/* 0x38 */ Sint32 svrfreq;
	/* 0x3c */ Sint16 maxsct;
	/* 0x3e */ Sint16 minsct;
	/* 0x40 */ Sint16 outvol;
	/* 0x42 */ Sint16 outpan[2];
	/* 0x48 */ Sint32 maxdecsmpl;
	/* 0x4c */ Sint32 lpcnt;
	/* 0x50 */ Sint32 lp_skiplen;
	/* 0x54 */ Sint32 trp;
	/* 0x58 */ Sint32 wpos;
	/* 0x5c */ Sint32 mofst;
	/* 0x60 */ Sint16 ercode;
	/* 0x64 */ Sint32 edecpos;
	/* 0x68 */ Sint16 edeccnt;
	/* 0x6a */ Sint16 eshrtcnt;
	/* 0x6c */ Sint8 lpflg;
	/* 0x6d */ Sint8 autorcvr;
	/* 0x6e */ Sint8 fltmode;
	/* 0x6f */ Sint8 execflag;
	/* 0x70 */ Sint8 pstwait_flag;
	/* 0x71 */ Sint8 pstready_flag;
	/* 0x72 */ Sint8 pause_flag;
	/* 0x74 */ void *amp;
	/* 0x78 */ SJ ampsji[2];
	/* 0x80 */ SJ ampsjo[2];
	/* 0x88 */ Sint32 time_ofst;
	/* 0x8c */ Sint32 lesct;
	/* 0x90 */ Sint32 trpnsmpl;
	/* 0x94 */ void *lsc;
	/* 0x98 */ Sint8 lnkflg;
	/* 0x99 */ Sint8 rsv;
	/* 0x9a */ Sint16 rsv2;
	/* 0x9c */ Uint32 tvofst;
	/* 0xa0 */ Uint32 svcnt;
	/* 0xa4 */ Uint32 decofst;
};

typedef _adx_talk ADX_TALK;
typedef ADX_TALK *ADXT;

struct _adxt_idx { // 0x4
	/* 0x0 */ Uint16 nidx;
	/* 0x2 */ Uint16 top;
};

typedef _adxt_idx ADXT_IDX;

typedef struct { // 0x14
	/* 0x00 */ int prio_lock;
	/* 0x04 */ int prio_safe;
	/* 0x08 */ int prio_vsync;
	/* 0x0c */ int prio_main;
	/* 0x10 */ int prio_mwidle;
} ADXM_TPRM;

typedef struct { // 0x1c
	/* 0x00 */ int prio_lock;
	/* 0x04 */ int prio_safe;
	/* 0x08 */ int prio_usrvsync;
	/* 0x0c */ int prio_vsync;
	/* 0x10 */ int prio_main;
	/* 0x14 */ int prio_mwidle;
	/* 0x18 */ int prio_usridle;
} ADXM_TPRM_EX;

enum _mwe_ply_stat {
	MWE_PLY_STAT_STOP = 0,
	MWE_PLY_STAT_PREP = 1,
	MWE_PLY_STAT_PLAYING = 2,
	MWE_PLY_STAT_PLAYEND = 3,
	MWE_PLY_STAT_ERROR = 4
};

typedef _mwe_ply_stat MWE_PLY_STAT;

typedef struct { // 0x4
	/* 0x0 */ _mwply_if *vtbl;
} MW_PLY_OBJ;

typedef MW_PLY_OBJ *MWPLY;
typedef void (*MW_PLY_ERRFN)(/* parameters unknown */);

struct _mwply_if { // 0x44
	/* 0x00 */ void (*QueryInterface)(/* parameters unknown */);
	/* 0x04 */ void (*AddRef)(/* parameters unknown */);
	/* 0x08 */ void (*Release)(/* parameters unknown */);
	/* 0x0c */ void (*VsyncHndl)(/* parameters unknown */);
	/* 0x10 */ Bool (*ExecSvrHndl)(/* parameters unknown */);
	/* 0x14 */ void (*Destroy)(/* parameters unknown */);
	/* 0x18 */ void (*StartFname)(/* parameters unknown */);
	/* 0x1c */ void (*Stop)(/* parameters unknown */);
	/* 0x20 */ MWE_PLY_STAT (*GetStat)(/* parameters unknown */);
	/* 0x24 */ void (*GetTime)(/* parameters unknown */);
	/* 0x28 */ void (*Pause)(/* parameters unknown */);
	/* 0x2c */ void (*SetOutVol)(/* parameters unknown */);
	/* 0x30 */ Sint32 (*GetOutVol)(/* parameters unknown */);
	/* 0x34 */ void (*SetOutPan)(/* parameters unknown */);
	/* 0x38 */ Sint32 (*GetOutPan)(/* parameters unknown */);
	/* 0x3c */ void (*StartSj)(/* parameters unknown */);
	/* 0x40 */ void (*StartMem)(/* parameters unknown */);
};

typedef _mwply_if MWD_IF;

typedef enum {
	MWSFD_DEC_SVR_IDLE = 0,
	MWSFD_DEC_SVR_MAIN = 1,
	MWSFD_DEC_SVR_END = 2
} MwsfdDecSvr;

typedef enum {
	MWE_PLY_BUFFMT_MB_YCC420 = 1,
	MWE_PLY_BUFFMT_MB_ARGB8888 = 2,
	MWE_PLY_BUFFMT_PLN_YCC420 = 3,
	MWE_PLY_BUFFMT_END = 4
} MWE_PLY_BUFFMT;

typedef enum {
	MWE_PLY_PTYPE_I = 1,
	MWE_PLY_PTYPE_P = 2,
	MWE_PLY_PTYPE_B = 3,
	MWE_PLY_PTYPE_D = 4,
	MWE_PLY_PTYPE_END = 5
} MWE_PLY_PTYPE;

typedef struct { // 0x20
	/* 0x00 */ Float32 vhz;
	/* 0x04 */ Sint32 disp_cycle;
	/* 0x08 */ Sint32 disp_latency;
	/* 0x0c */ MwsfdDecSvr dec_svr;
	/* 0x10 */ Sint32 rsv[4];
} MWS_PLY_INIT_SFD;

typedef struct { // 0x20
	/* 0x00 */ Sint32 ftype;
	/* 0x04 */ Sint32 max_bps;
	/* 0x08 */ Sint32 max_width;
	/* 0x0c */ Sint32 max_height;
	/* 0x10 */ Sint32 nfrm_pool_wk;
	/* 0x14 */ Sint8 *work;
	/* 0x18 */ Sint32 wksize;
	/* 0x1c */ Sint32 compo_mode;
} MWS_PLY_CPRM_SFD;

typedef struct { // 0x30
	/* 0x00 */ Uint8 *bufadr;
	/* 0x04 */ MWE_PLY_BUFFMT buffmt;
	/* 0x08 */ Sint32 width;
	/* 0x0c */ Sint32 height;
	/* 0x10 */ Sint32 x_mb;
	/* 0x14 */ Sint32 y_mb;
	/* 0x18 */ MWE_PLY_PTYPE ptype;
	/* 0x1c */ Sint32 time;
	/* 0x20 */ Sint32 tunit;
	/* 0x24 */ Sint32 errcnt;
	/* 0x28 */ Sint32 rcvcnt;
	/* 0x2c */ Sint32 concat_cnt;
} MWS_PLY_FRM;

typedef struct { // 0x18
	/* 0x00 */ Uint8 *y_ptr;
	/* 0x04 */ Uint8 *cb_ptr;
	/* 0x08 */ Uint8 *cr_ptr;
	/* 0x0c */ Sint32 y_width;
	/* 0x10 */ Sint32 cb_width;
	/* 0x14 */ Sint32 cr_width;
} MWS_PLY_YCC_PLANE;

typedef enum {
	ROFS_STAT_IDLE = 0,
	ROFS_STAT_COMPLETE = 1,
	ROFS_STAT_TRANS = 2,
	ROFS_STAT_ERR = 3,
	ROFS_STAT_NUM = 4
} RofsStat;

typedef enum {
	ROFS_SEEK_SET = 0,
	ROFS_SEEK_CUR = 1,
	ROFS_SEEK_END = 2,
	ROFS_SEEK_NUM = 3
} RofsSeek;

typedef enum {
	ROFS_ERR_OK = 0,
	ROFS_ERR_NG = -1,
	ROFS_ERR_PRM = -100,
	ROFS_ERR_ILLHDL = -101,
	ROFS_ERR_NOHNDL = -102,
	ROFS_ERR_VOLNAME = -103,
	ROFS_ERR_REGVOLNAME = -104,
	ROFS_ERR_VOLUME = -105,
	ROFS_ERR_NOTDIR = -106,
	ROFS_ERR_NOTFOUND = -107,
	ROFS_ERR_ILLDIRBUF = -108,
	ROFS_ERR_DIROVER = -109,
	ROFS_ERR_BUSY = -200,
	ROFS_ERR_TOUT = -201,
	ROFS_ERR_PRIMITIVE = -202,
	ROFS_ERR_INIT = -203,
	ROFS_ERR_REQRD = -204,
	ROFS_ERR_SEEK = -205,
	ROFS_ERR_OPEN = -206,
	ROFS_ERR_READ = -207,
	ROFS_ERR_INTERNAL = -1000
} RofsErr;

typedef RofsStWrok RofsWork;
typedef RofsPfsIfTbl RofsPfsTbl;
typedef RfpfsDevIfTbl RofsDevTbl;
typedef RfmaiLibIfTbl RofsLif;

typedef struct { // 0x30
	/* 0x00 */ Sint32 fad;
	/* 0x04 */ Sint32 fsize;
	/* 0x08 */ Uint8 flag;
	/* 0x09 */ Uint8 sid;
	/* 0x0a */ Char8 fname[32];
	/* 0x2a */ Uint8 pad[6];
} RofsDirRecEnt;

typedef struct { // 0x48
	/* 0x00 */ Sint32 dir_num;
	/* 0x04 */ Sint32 max_ent;
	/* 0x08 */ Sint32 dir_fad;
	/* 0x0c */ Char8 volname[9];
	/* 0x15 */ Uint8 pad[3];
	/* 0x18 */ RofsDirRecEnt dirrec_tbl[1];
} RofsDirRec;

typedef RofsDirRec *RofsDirRecBuf;

typedef struct { // 0x20
	/* 0x00 */ Char8 volname[9];
	/* 0x0c */ void *img_hn;
	/* 0x10 */ Sint32 zisb;
	/* 0x14 */ Sint32 ptbl_cba;
	/* 0x18 */ Sint32 ptbl_size;
	/* 0x1c */ RofsDirRecBuf curdir;
} RofsVolume;

typedef struct { // 0x38
	/* 0x00 */ RofsWork *wk;
	/* 0x04 */ Sint32 fid;
	/* 0x08 */ Sint32 fad;
	/* 0x0c */ Sint32 ofs;
	/* 0x10 */ Sint32 fsize;
	/* 0x14 */ Sint32 fsctsize;
	/* 0x18 */ RofsVolume *vol;
	/* 0x1c */ Sint32 rsize;
	/* 0x20 */ Sint32 trns_seg;
	/* 0x24 */ Sint32 trns_ofs;
	/* 0x28 */ Sint32 trns_unit;
	/* 0x2c */ Uint8 *rdadr;
	/* 0x30 */ Sint16 used;
	/* 0x32 */ Sint16 act;
	/* 0x34 */ Sint16 stat;
	/* 0x36 */ Sint16 err;
} RofsHandle;

typedef RofsHandle *Rofs;

struct RofsStWrok { // 0x10f8
	/* 0x0000 */ Bool f_init;
	/* 0x0004 */ Sint32 max_open;
	/* 0x0008 */ Sint32 max_volume;
	/* 0x000c */ Sint32 max_dirent;
	/* 0x0010 */ Uint32 exec_server_cnt;
	/* 0x0014 */ Rofs syshdl;
	/* 0x0018 */ Rofs hndtbl;
	/* 0x001c */ RofsVolume *vollist;
	/* 0x0020 */ RofsVolume *curvol;
	/* 0x0024 */ RofsDirRecBuf dirbuf;
	/* 0x0028 */ RofsPfsTbl *pfs;
	/* 0x002c */ RofsDevTbl *dev;
	/* 0x0030 */ RofsLif *liftbl;
	/* 0x0034 */ void (*g_errcb)(/* parameters unknown */);
	/* 0x0038 */ void *g_errcb_1st;
	/* 0x003c */ Uint32 *sctbuf;
	/* 0x0040 */ Uint32 sct_load_buf[1056];
	/* 0x10c0 */ RofsHandle hndlist[1];
};

typedef struct { // 0x10
	/* 0x0 */ Sint32 max_open;
	/* 0x4 */ Sint32 max_volume;
	/* 0x8 */ Sint32 max_dirent;
	/* 0xc */ void *rofs_work;
} RofsInitPara;

typedef struct { // 0xc
	/* 0x0 */ Char8 *fname;
	/* 0x4 */ Sint32 fsize;
	/* 0x8 */ Uint8 fatr;
} RofsFileInf;

typedef struct { // 0x8
	/* 0x0 */ Char8 *volname;
	/* 0x4 */ void *fhn;
} RofsVolumeInf;

typedef void (*RofsErrFunc)(/* parameters unknown */);

// warning: multiple differing types with the same name (name not equal)
struct RofsPfsIfTbl { // 0x68
	/* 0x00 */ void (*pfs_execserver)(/* parameters unknown */);
	/* 0x04 */ void (*pfs_reserve01)(/* parameters unknown */);
	/* 0x08 */ Sint32 (*pfs_reserve02)(/* parameters unknown */);
	/* 0x0c */ Sint32 (*pfs_reserve03)(/* parameters unknown */);
	/* 0x10 */ void* (*pfs_reserve04)(/* parameters unknown */);
	/* 0x14 */ void (*pfs_reserve05)(/* parameters unknown */);
	/* 0x18 */ Sint32 (*pfs_seek)(/* parameters unknown */);
	/* 0x1c */ Sint32 (*pfs_tell)(/* parameters unknown */);
	/* 0x20 */ Sint32 (*pfs_reqrd)(/* parameters unknown */);
	/* 0x24 */ Sint32 (*pfs_reserve07)(/* parameters unknown */);
	/* 0x28 */ void (*pfs_stoptr)(/* parameters unknown */);
	/* 0x2c */ Sint32 (*pfs_getstat)(/* parameters unknown */);
	/* 0x30 */ Sint32 (*pfs_getsctlen)(/* parameters unknown */);
	/* 0x34 */ void (*pfs_reserve08)(/* parameters unknown */);
	/* 0x38 */ Sint32 (*pfs_getnumtr)(/* parameters unknown */);
	/* 0x3c */ Sint32 (*pfs_reserve09)(/* parameters unknown */);
	/* 0x40 */ Sint32 (*pfs_reserve10)(/* parameters unknown */);
	/* 0x44 */ Sint32 (*pfs_reserve11)(/* parameters unknown */);
	/* 0x48 */ Sint32 (*pfs_reserve12)(/* parameters unknown */);
	/* 0x4c */ Sint32 (*pfs_reserve13)(/* parameters unknown */);
	/* 0x50 */ Sint32 (*pfs_reserve14)(/* parameters unknown */);
	/* 0x54 */ Sint32 (*pfs_reserve15)(/* parameters unknown */);
	/* 0x58 */ Sint32 (*pfs_reserve16)(/* parameters unknown */);
	/* 0x5c */ Sint32 (*pfs_reserve17)(/* parameters unknown */);
	/* 0x60 */ Sint32 (*pfs_reserve18)(/* parameters unknown */);
	/* 0x64 */ Sint32 (*pfs_reserve19)(/* parameters unknown */);
};

typedef struct { // 0x8
	/* 0x0 */ Sint32 lsn;
	/* 0x4 */ Sint32 size;
} ADXPS2_FC_DVD;

typedef struct { // 0x8
	/* 0x0 */ Sint32 fd;
	/* 0x4 */ Sint32 size;
} ADXPS2_FC_HOST;

struct _adxps2_sprm_dvd { // 0x14
	/* 0x00 */ Sint8 *rtdir;
	/* 0x04 */ Sint32 rdmode;
	/* 0x08 */ Sint32 nrtry;
	/* 0x0c */ Sint32 speed;
	/* 0x10 */ Sint32 dtype;
};

typedef _adxps2_sprm_dvd ADXPS2_SPRM_DVD;

struct _adxps2_sprm_host { // 0x8
	/* 0x0 */ Sint8 *rtdir;
	/* 0x4 */ Sint32 rdmode;
};

typedef _adxps2_sprm_host ADXPS2_SPRM_HOST;

struct _adxps2_fcprm { // 0x10
	/* 0x0 */ Sint8 *flist;
	/* 0x4 */ Sint32 maxflen;
	/* 0x8 */ Sint8 *fcbuf;
	/* 0xc */ Sint32 fcsize;
};

typedef _adxps2_fcprm ADXPS2_FCPRM;

typedef struct { // 0x10
	/* 0x0 */ int prio_lock;
	/* 0x4 */ int prio_safe;
	/* 0x8 */ int prio_adx;
	/* 0xc */ int prio_main;
} ADXPS2_TPRM;

typedef struct { // 0x14
	/* 0x00 */ Uint32 on;
	/* 0x04 */ Uint32 press;
	/* 0x08 */ Float32 x;
	/* 0x0c */ Float32 y;
	/* 0x10 */ Uint32 last_on;
} UTPAD_PERIPHERAL;

enum DGFILE_FMODE {
	DGFILE_FMODE_CLEAR = 0,
	DGFILE_FMODE_NORFILE = 1,
	DGFILE_FMODE_AFSFILE = 2,
	DGFILE_FMODE_EOE = 3
};

enum {
	DGFILE_PRINT_LEVEL_ALL = 0,
	DGFILE_PRINT_LEVEL_1 = 1,
	DGFILE_PRINT_LEVEL_2 = 2,
	DGFILE_PRINT_LEVEL_NONE = 3,
	DGFILE_PRINT_LEVEL_EOE = 4
};

enum DGFILE_REQ_RETRY_MODE {
	DGFILE_REQ_RETRY_MODE_ETERNAL = 0,
	DGFILE_REQ_RETRY_MODE_SEVERAL = 1,
	DGFILE_REQ_RETRY_MODE_NOTHING = 2,
	DGFILE_REQ_RETRY_MODE_EOE = 3
};

enum {
	DGFILE_CACHEMODE_NOVALUE = 0,
	DGFILE_CACHEMODE_CHECKENTRY = 1,
	DGFILE_CACHEMODE_CHECKRELEASE = 2,
	DGFILE_CACHEMODE_NOUSED = 3,
	DGFILE_CACHEMODE_EOE = 4
};

typedef struct { // 0x100
	/* 0x00 */ Uint32 cmd;
	/* 0x04 */ Uint32 ptr[63];
} dgSysPcBuf;

typedef struct { // 0x14
	/* 0x00 */ Sint8 abort_flag;
	/* 0x01 */ Sint8 cable_type;
	/* 0x02 */ Sint8 language;
	/* 0x04 */ Sint32 vcnt;
	/* 0x08 */ SYCALLBACK eor_handle;
	/* 0x0c */ SYCALLBACK vblankin_handle;
	/* 0x10 */ dgSysPcBuf *pc_buf;
} dgSysVar;

typedef float dgMathVector1;
typedef Angle dgMathAngle1;
typedef NJS_POINT2 dgMathVector2;
typedef NJS_POINT3 dgMathVector3;
typedef NJS_QUATERNION dgMathQuaternion;

typedef struct { // 0x10
	/* 0x0 */ dgMathVector1 x;
	/* 0x4 */ dgMathVector1 y;
	/* 0x8 */ dgMathVector1 z;
	/* 0xc */ dgMathVector1 w;
} dgMathVector4;

typedef struct { // 0x8
	/* 0x0 */ dgMathAngle1 x;
	/* 0x4 */ dgMathAngle1 y;
} dgMathAngle2;

typedef struct { // 0xc
	/* 0x0 */ dgMathAngle1 x;
	/* 0x4 */ dgMathAngle1 y;
	/* 0x8 */ dgMathAngle1 z;
} dgMathAngle3;

typedef struct { // 0x40
	/* 0x00 */ Float m00;
	/* 0x04 */ Float m01;
	/* 0x08 */ Float m02;
	/* 0x0c */ Float m03;
	/* 0x10 */ Float m10;
	/* 0x14 */ Float m11;
	/* 0x18 */ Float m12;
	/* 0x1c */ Float m13;
	/* 0x20 */ Float m20;
	/* 0x24 */ Float m21;
	/* 0x28 */ Float m22;
	/* 0x2c */ Float m23;
	/* 0x30 */ Float m30;
	/* 0x34 */ Float m31;
	/* 0x38 */ Float m32;
	/* 0x3c */ Float m33;
} dgMathMatrix;

typedef enum {
	DG_PAD_1P = 0,
	DG_PAD_2P = 1,
	DG_PAD_PORT_MAX = 2
} dgPadPort;

typedef Uint32 dgPadDig;

typedef struct { // 0x28
	/* 0x00 */ dgPadDig now;
	/* 0x04 */ dgPadDig on;
	/* 0x08 */ dgPadDig off;
	/* 0x0c */ dgPadDig rep;
	/* 0x10 */ dgPadDig now2;
	/* 0x14 */ dgPadDig on2;
	/* 0x18 */ Uint16 r;
	/* 0x1a */ Uint16 l;
	/* 0x1c */ Sint16 x1;
	/* 0x1e */ Sint16 y1;
	/* 0x20 */ Sint16 x2;
	/* 0x22 */ Sint16 y2;
	/* 0x24 */ Bool flag;
} dgPadData;

typedef struct { // 0x18
	/* 0x00 */ Sint32 frame;
	/* 0x04 */ Sint32 remain;
	/* 0x08 */ dgPadData *top;
	/* 0x0c */ dgPadData *ptr;
	/* 0x10 */ dgPadDig mask;
	/* 0x14 */ Sint8 status;
} dgPadRec;

typedef struct { // 0xa8
	/* 0x00 */ dgPadData pad;
	/* 0x28 */ dgPadData tmp;
	/* 0x50 */ dgPadRec rec;
	/* 0x68 */ Sint8 rep_cnt[32];
	/* 0x88 */ Sint8 dbl_cnt[32];
} dgPadWork;

typedef struct { // 0x208
	/* 0x000 */ Sint8 soft_reset_enable;
	/* 0x001 */ Sint8 soft_reset_flag;
	/* 0x002 */ Sint8 port[2];
	/* 0x004 */ dgPadPort game_port;
	/* 0x008 */ Sint32 repeat_frame;
	/* 0x00c */ Sint32 double_click_frame;
	/* 0x010 */ dgPadWork work[3];
} dgPadCtrl;

typedef struct { // 0x40
	/* 0x00 */ Sint32 flag;
	/* 0x04 */ Sint32 block;
	/* 0x08 */ dgMemHeader *ptr;
	/* 0x0c */ void *talloc;
	/* 0x10 */ dgMemHeader *prev_ptr;
	/* 0x14 */ dgMemHeader *next_ptr;
	/* 0x18 */ dgMemHeader *small_ptr;
	/* 0x1c */ dgMemHeader *large_ptr;
	/* 0x20 */ Sint32 dummy[8];
} dgMemHeader;

typedef struct { // 0x40
	/* 0x00 */ Sint32 flag;
	/* 0x04 */ Sint32 block;
	/* 0x08 */ Sint32 pflag;
	/* 0x0c */ dgMemHeader *freep_top;
	/* 0x10 */ Sint32 dummy[4];
	/* 0x20 */ Sint32 dummy1[8];
} dgMemPartition;

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

typedef struct { // 0x10
	/* 0x0 */ char *caption;
	/* 0x4 */ void (*exe_func)(/* parameters unknown */);
	/* 0x8 */ void (*dsp_func)(/* parameters unknown */);
	/* 0xc */ void (*del_func)(/* parameters unknown */);
} dgTaskParam;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgTaskRoot dgTaskRoot;
// warning: multiple differing types with the same name (descriptor not equal)
typedef dgTaskHeader dgTaskHeader;

typedef struct { // 0x14
	/* 0x00 */ Sint16 tex_num;
	/* 0x04 */ ulTexName *tex_name;
	/* 0x08 */ ulTexList tex_list;
	/* 0x10 */ char *tex_filename[28];
} dgTexInfo;

typedef struct { // 0x18
	/* 0x00 */ Sint16 bias_x1;
	/* 0x02 */ Sint16 bias_y1;
	/* 0x04 */ Sint16 bias_x2;
	/* 0x06 */ Sint16 bias_y2;
	/* 0x08 */ Float u1;
	/* 0x0c */ Float v1;
	/* 0x10 */ Float u2;
	/* 0x14 */ Float v2;
} dgTexRectSprite;

typedef struct { // 0x28
	/* 0x00 */ Sint32 gix;
	/* 0x04 */ Sint16 texsize_x;
	/* 0x06 */ Sint16 texsize_y;
	/* 0x08 */ float u0;
	/* 0x0c */ float v0;
	/* 0x10 */ float u1;
	/* 0x14 */ float v1;
	/* 0x18 */ float center_u;
	/* 0x1c */ float center_v;
	/* 0x20 */ float scale_x;
	/* 0x24 */ float scale_y;
} dgTexParts;

typedef enum {
	ENDDEMO_MODE_FADE_IN = 0,
	ENDDEMO_MODE_DISP = 1,
	ENDDEMO_MODE_FADE_OUT = 2,
	ENDDEMO_MODE_END = 3
} EndDemoMode;

typedef struct { // 0x20
	/* 0x00 */ void *tex_buffer_p;
	/* 0x04 */ Uint32 serial_id;
	/* 0x08 */ Bool ready_flag;
	/* 0x0c */ dgTexInfo *info_p;
	/* 0x10 */ Sint32 frame;
	/* 0x14 */ float rate;
	/* 0x18 */ float rate_delta;
	/* 0x1c */ EndDemoMode mode;
} EndDemoTask;

typedef enum {
	GAME_DATA_SH = 0,
	GAME_DATA_CAPTION = 1,
	GAME_DATA_CAMNEO = 2,
	GAME_DATA_MLT = 3,
	GAME_DATA_EFF = 4,
	GAME_DATA_MAP = 5,
	GAME_DATA_CAPSTM_M = 6,
	GAME_DATA_CAPSTM_V = 7,
	GAME_DATA_CAPSTM_S = 8,
	GAME_DATA_MAX = 9
} GameFileType;

typedef enum {
	GAME_STAT_STOP = 0,
	GAME_STAT_LOADING = 1,
	GAME_STAT_PREP_MW = 2,
	GAME_STAT_WAIT = 3,
	GAME_STAT_WAIT_SH = 4,
	GAME_STAT_START = 5,
	GAME_STAT_PLAY = 6,
	GAME_STAT_LINK = 7,
	GAME_STAT_GAMEOVER = 8,
	GAME_STAT_CONTINUE = 9,
	GAME_STAT_RESTART = 10,
	GAME_STAT_GAMEEND = 11,
	GAME_STAT_CLEAR = 12,
	GAME_STAT_MAX = 13
} GameStatus;

typedef enum {
	GAME_LOAD_STAT_WAIT = 0,
	GAME_LOAD_STAT_READEN = 1,
	GAME_LOAD_STAT_MAX = 2
} GameLoadStatus;

typedef Sint16 GameBlockData_Sub;

typedef struct { // 0x10
	/* 0x0 */ Sint32 sub_block_num;
	/* 0x4 */ GameBlockData_Sub *sub_data;
	/* 0x8 */ void (*round_clear_callback)(/* parameters unknown */);
	/* 0xc */ Sint16 *voice_tbl;
} GameBlockData;

typedef struct { // 0x8
	/* 0x0 */ char *fname;
	/* 0x4 */ int fnum;
} GamePartitionInfo;

enum {
	DG_IND_WAIT = 0,
	DG_IND_HEART_LOSS = 1,
	DG_IND_HEART_APPEAR = 2,
	DG_IND_HEART_DISAPPEAR = 3,
	DG_IND_PLAYER_TURN = 4,
	DG_IND_ENEMY_TURN = 5,
	DG_IND_HEART_TO_RATING = 6,
	DG_IND_RATING_TO_STAR = 7,
	DG_IND_NUM_CHANGE = 8,
	DG_IND_RATING_APPEAR = 9,
	DG_IND_RATING_DISAPPEAR = 10,
	DG_IND_MAX = 11
};

enum {
	DG_IND_HEART_PINK = 0,
	DG_IND_HEART_GOLD = 1,
	DG_IND_HEART_MAX = 2
};

typedef enum {
	DG_IND_ICON_ULALA = 0,
	DG_IND_ICON_ROBO = 1,
	DG_IND_ICON_PUDDING = 2,
	DG_IND_ICON_CH5 = 3,
	DG_IND_ICON_PINE = 4,
	DG_IND_ICON_PURGE = 5,
	DG_IND_ICON_MAX = 6
} dgIndicateIconType;

typedef enum {
	DG_IND_TEX_HEARTS = 0,
	DG_IND_TEX_STARS = 1,
	DG_IND_TEX_NUM_BLUE = 2,
	DG_IND_TEX_NUM_RED = 3,
	DG_IND_TEX_ULALA = 4,
	DG_IND_TEX_ROBO = 5,
	DG_IND_TEX_PUDDING = 6,
	DG_IND_TEX_CH5 = 7,
	DG_IND_TEX_PINE = 8,
	DG_IND_TEX_PURGE = 9,
	DG_IND_TEX_MAX = 10
} dgIndicateTexType;

typedef struct { // 0x2c
	/* 0x00 */ Float heart_x;
	/* 0x04 */ Float heart_y;
	/* 0x08 */ Float heart_z;
	/* 0x0c */ Float rating_x;
	/* 0x10 */ Float rating_y;
	/* 0x14 */ Float rating_z;
	/* 0x18 */ Float num_x;
	/* 0x1c */ Float num_y;
	/* 0x20 */ Float num_z;
	/* 0x24 */ Sint32 heart_num;
	/* 0x28 */ Sint32 rate;
} dgIndicateInitParam;

typedef struct { // 0x8
	/* 0x0 */ dgIndicateIconType icon_type;
	/* 0x4 */ int rescue_num;
} AudiRateData_Sub;

typedef struct { // 0x8
	/* 0x0 */ int sub_block_num;
	/* 0x4 */ AudiRateData_Sub *sub_data;
} AudiRateData;

typedef enum {
	DG_CAPTION_TYPE_NEWS_TOP = 0,
	DG_CAPTION_TYPE_NEWS = 1,
	DG_CAPTION_TYPE_NAME = 2,
	DG_CAPTION_TYPE_CENTER = 3,
	DG_CAPTION_TYPE_MAX = 4
} dgCaptionType;

typedef enum {
	DG_CAPTION_SIDE_LEFT = 0,
	DG_CAPTION_SIDE_CENTER = 1,
	DG_CAPTION_SIDE_RIGHT = 2,
	DG_CAPTION_DISP_MAX = 3
} dgCaptionSide;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgCaptionHeader dgCaptionHeader;
// warning: multiple differing types with the same name (descriptor not equal)
typedef dgCaptionStrData dgCaptionStrData;
// warning: multiple differing types with the same name (descriptor not equal)
typedef dgCaption dgCaption;
// warning: multiple differing types with the same name (descriptor not equal)
typedef dgCaptionStreamHeader dgCaptionStreamHeader;

typedef enum {
	DG_CAPSTM_MUSIC = 0,
	DG_CAPSTM_VOICE = 1,
	DG_CAPSTM_SYS = 2,
	DG_CAPSTM_MAX = 3
} dgCaptionStreamType;

typedef enum {
	MODULE_MENU_R1 = 0,
	MODULE_MENU_R2 = 1,
	MODULE_MENU_R3 = 2,
	MODULE_MENU_R4 = 3,
	MODULE_MENU_R5 = 4,
	MODULE_MENU_R6 = 5,
	MODULE_MENU_NORMAL_ROUND_MAX1 = 6,
	MODULE_MENU_R1_2 = 6,
	MODULE_MENU_R2_2 = 7,
	MODULE_MENU_R3_2 = 8,
	MODULE_MENU_R4_2 = 9,
	MODULE_MENU_R5_2 = 10,
	MODULE_MENU_R6_2 = 11,
	MODULE_MENU_NORMAL_ROUND_MAX2 = 12,
	MODULE_MENU_R0 = 12,
	MODULE_MENU_TITLE = 13,
	MODULE_MENU_MAX = 14
} ModuleMenu;

typedef enum {
	SEQ_MES_TIMEOUT = 0,
	SEQ_MES_NEW_GAME = 1,
	SEQ_MES_CONTINUE_GAME = 2,
	SEQ_MES_RESTART_GAME = 3,
	SEQ_MES_END = 4,
	SEQ_MES_MAX = 5
} SeqMessage;

typedef enum {
	SEQ_GAME_PLAY_1P = 0,
	SEQ_GAME_PLAY_2P = 1,
	SEQ_GAME_PLAY_MAX = 2
} SeqGamePlayMode;

typedef enum {
	SEQ_GALAXY_NEW = 0,
	SEQ_GALAXY_NEW_MIRROR = 1,
	SEQ_GALAXY_OLD = 2,
	SEQ_GALAXY_MAX = 3
} SeqGalaxyType;

enum {
	BUP_WARNING_00 = 0,
	BUP_WARNING_01 = 1,
	BUP_WARNING_02 = 2,
	BUP_WARNING_03 = 3,
	BUP_WARNING_04 = 4,
	BUP_WARNING_05 = 5,
	BUP_WARNING_06 = 6,
	BUP_WARNING_07 = 7,
	BUP_WARNING_08 = 8,
	BUP_WARNING_09 = 9,
	BUP_PAUSE_CONTINUE = 10,
	BUP_PAUSE_RESTART = 11,
	BUP_PAUSE_SAVEEND = 12,
	BUP_WARNING_MAX = 13
};

typedef struct { // 0x8
	/* 0x0 */ Uint32 joints;
	/* 0x4 */ void *values;
} mtnPose;

typedef struct { // 0x10
	/* 0x0 */ Uint32 joints;
	/* 0x4 */ Uint32 frames;
	/* 0x8 */ void *values;
	/* 0xc */ Uint32 reserved0;
} mtnMotion;

typedef enum {
	MTN_SYSTEM_QUATERNION_MODE_PRIMITIVE = 0,
	MTN_SYSTEM_QUATERNION_MODE_SLERP = 1
} mtnSystemQuaternionMode;

typedef enum {
	MTN_POSE_PLAYMOTION_OVERWRITE_ZERO = 0,
	MTN_POSE_PLAYMOTION_SKIP = 1
} mtnPosePlayMotionOverwriteMode;

typedef Sint32 dgObjVlist;
typedef Sint16 dgObjPlist;
// warning: multiple differing types with the same name (descriptor not equal)
typedef dgShapePose dgShapePose;
// warning: multiple differing types with the same name (descriptor not equal)
typedef dgShapeMotion dgShapeMotion;

typedef enum {
	DG_OC_SIMPLEMULTI = 0,
	DG_OC_EASYMULTI = 1,
	DG_OC_SIMPLE = 2,
	DG_OC_EASY = 3,
	DG_OC_TOON = 4,
	DG_OC_TOONEDGE = 5,
	DG_OC_INTENSITY = 6,
	DG_OC_WIRE = 7,
	DG_OC_SHADOWTEX = 8,
	DG_OC_MODIFIER = 9,
	DG_OC_COMPILE_START = 10,
	DG_OC_SIMPLEMULTI_COMPILE = 10,
	DG_OC_EASYMULTI_COMPILE = 11,
	DG_OC_SIMPLE_COMPILE = 12,
	DG_OC_EASY_COMPILE = 13,
	DG_OC_TOON_COMPILE = 14,
	DG_OC_TOONEDGE_COMPILE = 15,
	DG_OC_INTENSITY_COMPILE = 16,
	DG_OC_WIRE_COMPILE = 17,
	DG_OC_SHADOWTEX_COMPILE = 18,
	DG_OC_MODIFIER_COMPILE = 19,
	DG_OC_DRAW_TYPE_MAX = 20
} dgOcDrawType;

typedef enum {
	DG_OC_POSE_ALL = 0,
	DG_OC_POSE_TRANS = 1,
	DG_OC_POSE_NON = 2,
	DG_OC_POSE_MAX = 3
} dgOcPoseType;

typedef struct { // 0x8
	/* 0x0 */ void (*func)(/* parameters unknown */);
	/* 0x4 */ int param0;
} dgOcCallback;

typedef struct { // 0x2c
	/* 0x00 */ Sint8 draw_type;
	/* 0x01 */ Uint8 attrib;
	/* 0x02 */ Sint16 ref_object_num;
	/* 0x04 */ Sint16 draw_object_num;
	/* 0x06 */ Sint16 mdl_no;
	/* 0x08 */ NJS_CNK_OBJECT *ref_object;
	/* 0x0c */ NJS_CNK_OBJECT *draw_object;
	/* 0x10 */ Sint32 (*draw_model_func)(/* parameters unknown */);
	/* 0x14 */ mtnPose *default_pose;
	/* 0x18 */ dgMathVector4 *translate_list;
	/* 0x1c */ dgOcCallback *callback;
	/* 0x20 */ dgShapePose *shape_pose;
	/* 0x24 */ Sint8 *skip_list;
	/* 0x28 */ float pre_clipping_radius;
} dgObjCtrl;

typedef enum {
	DG_CHAR_ULALA = 0,
	DG_CHAR_MAX = 1024,
	DG_CHAR_UNIQUE_START = 800,
	DG_CHAR_UNIQUE = -3,
	DG_CHAR_NOUSE = -2,
	DG_CHAR_ERR = -1
} dgCharNo;

typedef enum {
	DG_CHAR_TYPE_MAX = -1
} dgCharType;

enum {
	DG_CHAR_FACE_NORMAL = 0,
	DG_CHAR_FACE_WARAI = 1,
	DG_CHAR_FACE_MAX = 2
};

enum {
	DGCDB_INFO_GIDX_SW_OFF = 0,
	DGCDB_INFO_GIDX_SW_ON = 1,
	DGCDB_INFO_GIDX_SW_EOE = 2
};

typedef enum {
	DG_MODELTYPE_L = 0,
	DG_MODELTYPE_M = 1,
	DG_MODELTYPE_S = 2,
	DG_MODELTYPE_X = 3,
	DG_MODELTYPE_MAX = 4
} dgModelType;

enum {
	DGCDB_DECODE_STAT_OK = 0,
	DGCDB_DECODE_STAT_DOUBLE = 1,
	DGCDB_DECODE_STAT_NOBUFFER = 2,
	DGCDB_DECODE_STAT_CANTREALLOC = 3,
	DGCDB_DECODE_STAT_ERROR = 4,
	DGCDB_DECODE_STAT_EOE = 5
};

enum {
	DGCDB_CLIP_LEVEL_NORMAL = 0,
	DGCDB_CLIP_LEVEL_HARD = 1,
	DGCDB_CLIP_LEVEL_SOFT = 2,
	DGCDB_CLIP_LEVEL_MAX = 3
};

struct _dgCdbObjData { // 0x8
	/* 0x0 */ Uint16 char_no;
	/* 0x2 */ Uint16 pos_id;
	/* 0x4 */ _dgCdbObjData *next;
};

typedef _dgCdbObjData dgCdbObjData;
typedef _dgCdbObjData *dgCdbObjDataPtr;

struct _dgCdbFaceData { // 0x20
	/* 0x00 */ Sint16 tex_id_num;
	/* 0x02 */ Sint16 reserved;
	/* 0x04 */ Sint16 tex_ptr_num[4];
	/* 0x0c */ Sint16 *tex_id_table;
	/* 0x10 */ Sint16 **tex_ptr_table[4];
};

typedef _dgCdbFaceData dgCdbFaceData;
typedef _dgCdbFaceData *dgCdbFaceDataPtr;

struct _dgCdbClipMotion { // 0x10
	/* 0x0 */ dgShapeMotion *lip[3];
	/* 0xc */ dgShapeMotion *eye;
};

typedef _dgCdbClipMotion dgCdbClipMotion;
typedef _dgCdbClipMotion *dgCdbClipMotionPtr;

struct _dgCdbOptionData { // 0x20
	/* 0x00 */ void *motion_data;
	/* 0x04 */ dgCdbObjDataPtr top_obj_p;
	/* 0x08 */ dgCdbFaceDataPtr face_data;
	/* 0x0c */ dgCdbClipMotionPtr clipinfo;
	/* 0x10 */ Sint32 sound_id;
	/* 0x14 */ Sint32 reserve[3];
};

typedef _dgCdbOptionData dgCdbOptionData;
typedef _dgCdbOptionData *dgCdbOptionDataPtr;
typedef void (*dgCdbCallbackFunc)(/* parameters unknown */);

struct _dgCdbHeader { // 0x20
	/* 0x00 */ Uint16 char_no;
	/* 0x02 */ Uint16 draw_func;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ NJS_CNK_OBJECT *model_l;
	/* 0x0c */ NJS_CNK_OBJECT *model_m;
	/* 0x10 */ NJS_CNK_OBJECT *model_s;
	/* 0x14 */ NJS_CNK_OBJECT *model_x;
	/* 0x18 */ dgCdbOptionDataPtr option;
	/* 0x1c */ Uint8 *pvm_p;
};

typedef _dgCdbHeader dgCdbHeader;
typedef _dgCdbHeader *dgCdbHeaderPtr;

struct _dgCdbCallbackList { // 0x14
	/* 0x00 */ dgCdbCallbackFunc func;
	/* 0x04 */ void *arg1;
	/* 0x08 */ _dgCdbCallbackList *next;
	/* 0x0c */ _dgCdbCallbackList *prev;
	/* 0x10 */ Uint32 serial;
};

typedef _dgCdbCallbackList dgCdbCallbackList;
typedef _dgCdbCallbackList *dgCdbCallbackListPtr;

struct _dgCdbCompileObj { // 0x10
	/* 0x0 */ NJS_CNK_OBJECT *obj[4];
};

typedef _dgCdbCompileObj dgCdbCompileObj;
typedef _dgCdbCompileObj *dgCdbCompileObjPtr;

struct _dgCdbInfo { // 0x38
	/* 0x00 */ Uint16 stat;
	/* 0x02 */ Uint8 srctype;
	/* 0x03 */ Uint8 gidx_sw;
	/* 0x04 */ Uint32 gidx;
	/* 0x08 */ dgCharNo charno;
	/* 0x0c */ Sint32 cnt;
	/* 0x10 */ Sint32 size;
	/* 0x14 */ dgCdbHeaderPtr header;
	/* 0x18 */ dgCdbCompileObj compile_obj;
	/* 0x28 */ dgTexInfo *texinfo;
	/* 0x2c */ dgCdbCallbackListPtr callbacklist;
	/* 0x30 */ Uint32 fid;
	/* 0x34 */ void *loadadr;
};

typedef _dgCdbInfo dgCdbInfo;
typedef _dgCdbInfo *dgCdbInfoPtr;
typedef _dgCdbInfo *dgCdbHandle;

struct _dgCdbDecodeCharPara { // 0x1c
	/* 0x00 */ dgCdbHeaderPtr hed;
	/* 0x04 */ void *data;
	/* 0x08 */ Uint8 gidx_sw;
	/* 0x09 */ Uint8 srctype;
	/* 0x0c */ Uint32 gidx;
	/* 0x10 */ dgCharNo charno;
	/* 0x14 */ Sint32 size;
	/* 0x18 */ Sint32 funcmode;
};

typedef _dgCdbDecodeCharPara dgCdbDecodeCharPara;
typedef _dgCdbDecodeCharPara *dgCdbDecodeCharParaPtr;

struct _dgCdbCDRMap { // 0x14
	/* 0x00 */ Sint16 round;
	/* 0x02 */ Sint16 num;
	/* 0x04 */ Uint32 map_size;
	/* 0x08 */ Uint32 option;
	/* 0x0c */ Uint32 pvm;
	/* 0x10 */ Uint32 header[1];
};

typedef _dgCdbCDRMap dgCdbCDRMap;
typedef _dgCdbCDRMap *dgCdbCDRMapPtr;

typedef enum {
	CLIP_PAT_SLT = 0,
	CLIP_PAT_A = 1,
	CLIP_PAT_I = 2,
	CLIP_PAT_U = 3,
	CLIP_PAT_E = 4,
	CLIP_PAT_O = 5,
	CLIP_PAT_DEF = 6,
	CLIP_PAT_MAX = 7
} ClipPat;

typedef enum {
	CLIP_ENTRYTYPE_LP1 = 0,
	CLIP_ENTRYTYPE_LPR = 1,
	CLIP_ENTRYTYPE_MAX = 2
} ClipEntryType;

enum {
	CLIP_LIPMTN_NORMAL = 0,
	CLIP_LIPMTN_HARD = 1,
	CLIP_LIPMTN_SOFT = 2,
	CLIP_LIPMTN_MAX = 3
};

enum {
	CLIP_POSE_BASE = 0,
	CLIP_POSE_DRAW = 1,
	CLIP_POSE_MAX = 2
};

typedef enum {
	CLPDB_CHARSTAT_FREE = 0,
	CLPDB_CHARSTAT_LOADING = 1,
	CLPDB_CHARSTAT_PREP = 2,
	CLPDB_CHARSTAT_ACTIVE = 3,
	CLPDB_CHARSTAT_MAX = 4
} ClpDBCharStat;

typedef enum {
	CLPDB_STAT_FREE = 0,
	CLPDB_STAT_BUSY = 1,
	CLPDB_STAT_SLEEP = 2,
	CLPDB_STAT_MAX = 3
} ClpDbStat;

typedef enum {
	CLPDB_LOADSTAT_SET = 0,
	CLPDB_LOADSTAT_NOWLOADING = 1,
	CLPDB_LOADSTAT_MAX = 2
} ClpDBLoadStat;

enum {
	CLPDB_CHAR_SLT_MODE_NON = 0,
	CLPDB_CHAR_SLT_MODE_WAITING = 1,
	CLPDB_CHAR_SLT_MODE_CLOSING = 2
};

enum {
	CLPDB_HOME_CDB = 0,
	CLPDB_HOME_MEM = 1,
	CLPDB_HOME_FILE = 2
};

struct _ClipData { // 0x10
	/* 0x0 */ ClipPat pat;
	/* 0x4 */ Float start;
	/* 0x8 */ Float length;
	/* 0xc */ Float vol;
};

typedef _ClipData ClipData;
typedef _ClipData *ClipDataPtr;

struct _ClipLp1 { // 0x48
	/* 0x00 */ Sint32 datatype;
	/* 0x04 */ Sint32 datasize;
	/* 0x08 */ dgCharNo charno;
	/* 0x0c */ Uint16 pid;
	/* 0x0e */ Uint16 iid;
	/* 0x10 */ Sint32 num;
	/* 0x14 */ Uint32 flag;
	/* 0x18 */ Sint32 mtntype;
	/* 0x1c */ Float ofstime;
	/* 0x20 */ dgCharNo org_charno;
	/* 0x24 */ Uint16 org_pid;
	/* 0x26 */ Uint16 org_iid;
	/* 0x28 */ Sint32 org_num;
	/* 0x2c */ Uint32 org_flag;
	/* 0x30 */ Sint32 org_mtntype;
	/* 0x34 */ Float org_ofstime;
	/* 0x38 */ ClipData data[1];
};

typedef _ClipLp1 ClipLp1;
typedef _ClipLp1 *ClipLp1Ptr;

struct _ClpDBInfo { // 0x20
	/* 0x00 */ Sint32 num;
	/* 0x04 */ ClipLp1Ptr lp1[7];
};

typedef _ClpDBInfo ClpDBInfo;
typedef _ClpDBInfo *ClpDBInfoPtr;

struct _ClpDBRefInfo { // 0x20
	/* 0x00 */ Sint32 num;
	/* 0x04 */ dgCharNo ref[7];
};

typedef _ClpDBRefInfo ClpDBRefInfo;
typedef _ClpDBRefInfo *ClpDBRefInfoPtr;

struct _ClipLprMap { // 0x8
	/* 0x0 */ ClipLp1Ptr ptr;
	/* 0x4 */ Sint32 size;
};

typedef _ClipLprMap ClipLprMap;
typedef _ClipLprMap *ClipLprMapPtr;

struct _ClipLpr { // 0x10
	/* 0x0 */ Sint32 datatype;
	/* 0x4 */ Sint32 num;
	/* 0x8 */ ClipLprMap map[1];
};

typedef _ClipLpr ClipLpr;
typedef _ClipLpr *ClipLprPtr;

struct _ClpDBData { // 0x20
	/* 0x00 */ Uint32 serial;
	/* 0x04 */ ClpDbStat stat;
	/* 0x08 */ _ClpDBData *next;
	/* 0x0c */ _ClpDBData *prev;
	/* 0x10 */ ClipLp1Ptr lp1;
	/* 0x14 */ ClpDBLoadStat loadstat;
	/* 0x18 */ Uint32 fid;
	/* 0x1c */ Sint32 blockno;
};

typedef _ClpDBData ClpDBData;
typedef _ClpDBData *ClpDBDataPtr;

struct _ClpDBChar { // 0x58
	/* 0x00 */ dgCharNo charno;
	/* 0x04 */ dgCharNo ref_charno;
	/* 0x08 */ ClpDBCharStat stat;
	/* 0x0c */ dgShapeMotion *lip_motion[3];
	/* 0x18 */ Uint32 lip_fid[3];
	/* 0x24 */ dgShapeMotion *eye_motion;
	/* 0x28 */ Uint32 eye_fid;
	/* 0x2c */ dgShapePose *pose[2];
	/* 0x34 */ NJS_CNK_OBJECT *object;
	/* 0x38 */ void *char_task;
	/* 0x3c */ void *ply_task;
	/* 0x40 */ Float slt_timer;
	/* 0x44 */ Sint32 slt_mode;
	/* 0x48 */ Float slt_alpha;
	/* 0x4c */ Sint8 home_lip[3];
	/* 0x4f */ Sint8 home_eye;
	/* 0x50 */ Bool pause_pose;
	/* 0x54 */ Bool fake_sw;
};

typedef _ClpDBChar ClpDBChar;
typedef _ClpDBChar *ClpDBCharPtr;

enum {
	CLPPLY_BASIC_IID_U1 = 0,
	CLPPLY_BASIC_IID_R1 = 1,
	CLPPLY_BASIC_IID_L1 = 2,
	CLPPLY_BASIC_IID_D1 = 3,
	CLPPLY_BASIC_IID_A1 = 4,
	CLPPLY_BASIC_IID_B1 = 5,
	CLPPLY_BASIC_IID_U2 = 6,
	CLPPLY_BASIC_IID_R2 = 7,
	CLPPLY_BASIC_IID_L2 = 8,
	CLPPLY_BASIC_IID_D2 = 9,
	CLPPLY_BASIC_IID_A2 = 10,
	CLPPLY_BASIC_IID_B2 = 11,
	CLPPLY_BASIC_IID_RYOKAI = 12,
	CLPPLY_BASIC_IID_SONOMAMA = 13,
	CLPPLY_BASIC_IID_CH5 = 14,
	CLPPLY_BASIC_IID_LETS_SHOOT = 15,
	CLPPLY_BASIC_IID_LETS_DANCE = 16,
	CLPPLY_BASIC_IID_POO = 17
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef Sint8 dgCharLevel;

// warning: multiple differing types with the same name (descriptor not equal)
enum dgCharLevel {
	DG_CHARLEVEL_DISP = 0,
	DG_CHARLEVEL_L = 0,
	DG_CHARLEVEL_M = 1,
	DG_CHARLEVEL_S = 2,
	DG_CHARLEVEL_X = 3,
	DG_CHARLEVEL_MAX = 4
};

typedef enum {
	DG_WALK_ACC_NON = 0,
	DG_WALK_ACC_X = 1,
	DG_WALK_ACC_Y = 2,
	DG_WALK_ACC_XY = 3,
	DG_WALK_ACC_Z = 4,
	DG_WALK_ACC_XZ = 5,
	DG_WALK_ACC_YZ = 6,
	DG_WALK_ACC_XYZ = 7,
	DG_WALK_ACC_SYM = 8
} dgWalkLoopFlag;

typedef struct { // 0xc
	/* 0x0 */ dgMathVector3 acc_vec;
} dgWalkCtrl;

typedef void dgCharShadowCallbackFunc(/* parameters unknown */);

typedef struct { // 0x88
	/* 0x00 */ dgCharLevel level;
	/* 0x01 */ Sint8 trtr_flag;
	/* 0x02 */ Sint8 symm_flag;
	/* 0x03 */ Sint8 walk_flag;
	/* 0x04 */ Sint8 force_draw_type_flag;
	/* 0x05 */ Sint8 ignore_compile;
	/* 0x06 */ Sint16 ref_model_num;
	/* 0x08 */ float frame;
	/* 0x0c */ float comp_rate;
	/* 0x10 */ dgCdbHandle cdb_h;
	/* 0x14 */ dgMathMatrix *mat_p;
	/* 0x18 */ mtnPose *cur_pose_p;
	/* 0x1c */ mtnPose *complete_pose_p;
	/* 0x20 */ float inc_comp_rate;
	/* 0x24 */ float pl_diff_height;
	/* 0x28 */ float motion_diff_height;
	/* 0x2c */ float diff_rate;
	/* 0x30 */ dgMathVector3 center_pos;
	/* 0x3c */ mtnMotion *cur_mot_p;
	/* 0x40 */ void *parent_p;
	/* 0x44 */ void *man_task_p;
	/* 0x48 */ dgCharShadowCallbackFunc *shadow_func_p;
	/* 0x4c */ dgMainDisplayListPrio display_list;
	/* 0x50 */ dgObjCtrl obj_ctrl;
	/* 0x7c */ dgWalkCtrl walk_ctrl;
} dgCharCtrl;

typedef struct { // 0x4
	/* 0x0 */ Uint8 index;
	/* 0x1 */ Uint8 comp_frame;
	/* 0x2 */ Uint8 walk_type;
	/* 0x3 */ Uint8 attr;
} dgCharMotionElement;

typedef struct { // 0x400
	/* 0x000 */ Sint32 element_num;
	/* 0x004 */ dgCharMotionElement *element_p_tbl[255];
} dgCharMotionElementTbl;

typedef struct { // 0x400
	/* 0x000 */ Sint32 motion_num;
	/* 0x004 */ mtnMotion *motion_p_tbl[255];
} dgCharMotionMotTable;

typedef struct { // 0x10
	/* 0x0 */ dgCharMotionElementTbl *element_tbl_p;
	/* 0x4 */ dgCharMotionElement *group_element_p;
	/* 0x8 */ dgCharMotionMotTable *mot_tbl_p;
	/* 0xc */ void *option_p;
} dgCharMotionMtpHeader;

typedef struct { // 0x10
	/* 0x0 */ dgCharMotionElementTbl *element_tbl_p;
	/* 0x4 */ dgCharMotionElement *group_element_p;
	/* 0x8 */ dgCharMotionMotTable *mot_tbl_p;
	/* 0xc */ void *option_p;
} dgCharMotionData;

typedef struct { // 0x20
	/* 0x00 */ Sint16 max_frame;
	/* 0x02 */ Sint8 count;
	/* 0x03 */ Sint8 sle_flag;
	/* 0x04 */ mtnMotion **mot_src_pp;
	/* 0x08 */ dgCharMotionData *data_p;
	/* 0x0c */ dgCharMotionElement *cur_elem_p;
	/* 0x10 */ dgCharMotionElement *root_elem_p;
	/* 0x14 */ mtnMotion *mot_p;
	/* 0x18 */ float total_frame;
	/* 0x1c */ float frame;
} dgCharMotionCtrl;

typedef struct { // 0x20
	/* 0x00 */ Sint32 magic_number;
	/* 0x04 */ dgCharNo charno;
	/* 0x08 */ dgCharCtrl *parent_ctrl_p;
	/* 0x0c */ dgCharCtrl *char_ctrl_p;
	/* 0x10 */ dgCharObjCtrl *next_ctrl_p;
	/* 0x14 */ dgCharObjCtrl *sibling_ctrl_p;
	/* 0x18 */ dgCharMotionCtrl *mot_ctrl_p;
	/* 0x1c */ void (*draw_func_p)(/* parameters unknown */);
} dgCharObjCtrl;

typedef enum {
	DG_CHARMOTION_STATUS_START = 0,
	DG_CHARMOTION_STATUS_LOOP = 1,
	DG_CHARMOTION_STATUS_END = 2
} dgCharMotionStatusSLE;

typedef enum {
	CDB_CHAR_MAIN_START = 0,
	CDB_CHAR_ULALA = 0,
	CDB_CHAR_ULALA02 = 1,
	CDB_CHAR_ULALA03B = 2,
	CDB_CHAR_ULALA03A = 3,
	CDB_CHAR_ULALA05 = 4,
	CDB_CHAR_ULALA06 = 5,
	CDB_CHAR_ULALA06D = 6,
	CDB_CHAR_ULALA06K = 7,
	CDB_CHAR_ULALA_C_BL = 8,
	CDB_CHAR_ULALA_C_CHI = 9,
	CDB_CHAR_ULALA_C_WH = 10,
	CDB_CHAR_PUDDING_AMI = 12,
	CDB_CHAR_PINE = 14,
	CDB_CHAR_SEXY01 = 16,
	CDB_CHAR_SEXY02 = 17,
	CDB_CHAR_NEW_SHADOW = 18,
	CDB_CHAR_NEW_SHADOW_PK = 19,
	CDB_CHAR_MICAL = 22,
	CDB_CHAR_JAGUAR = 24,
	CDB_CHAR_PURGE_A = 25,
	CDB_CHAR_PEACE = 26,
	CDB_CHAR_NOIZE = 27,
	CDB_CHAR_EVILA = 28,
	CDB_CHAR_PURGE_B = 31,
	CDB_CHAR_ULALA_C_LINE = 32,
	CDB_CHAR_ULALA_C_MEI = 33,
	CDB_CHAR_ULALA_C_BK = 34,
	CDB_CHAR_ULALA_C_PK = 35,
	CDB_CHAR_ULALA_C_SUN = 36,
	CDB_CHAR_PUDDING = 37,
	CDB_CHAR_SHADOW = 38,
	CDB_CHAR_MINI_NOIZE = 39,
	CDB_CHAR_ULALA06KSP = 40,
	CDB_CHAR_SPECIAL_START = 71,
	CDB_CHAR_GFATM_GR = 71,
	CDB_CHAR_BDR_BK = 72,
	CDB_CHAR_GFATM_RE = 73,
	CDB_CHAR_BAF_BK = 74,
	CDB_CHAR_GHART_PK = 75,
	CDB_CHAR_BOLD01_BR = 76,
	CDB_CHAR_COOK_WH = 77,
	CDB_CHAR_BKOCK_LB = 78,
	CDB_CHAR_BKOCK_YE = 79,
	CDB_CHAR_WOMAN_BAR = 80,
	CDB_CHAR_BKP_BK = 81,
	CDB_CHAR_JAPANESE = 82,
	CDB_CHAR_CDBF_BRE = 83,
	CDB_CHAR_CGRIN_BL = 84,
	CDB_CHAR_CBKEY_BY = 85,
	CDB_CHAR_CGDF_GR = 86,
	CDB_CHAR_CBST4_GR = 87,
	CDB_CHAR_CGDF_PK = 88,
	CDB_CHAR_CBDF_CY = 89,
	CDB_CHAR_CGDF_YE = 90,
	CDB_CHAR_TEACH_BL = 91,
	CDB_CHAR_CBST2_BL = 92,
	CDB_CHAR_ABBI_GR_1 = 93,
	CDB_CHAR_GBI_GR = 94,
	CDB_CHAR_G5TL_RE = 99,
	CDB_CHAR_ABBI_GR_2 = 100,
	CDB_CHAR_ABBI_GR_3 = 101,
	CDB_CHAR_ABBI_GR_4 = 102,
	CDB_CHAR_ABBI_GR_5 = 103,
	CDB_CHAR_BSPRP_LE = 104,
	CDB_CHAR_BSPRP_TR = 105,
	CDB_CHAR_G5T_RE_1 = 106,
	CDB_CHAR_G5T_RE_2 = 107,
	CDB_CHAR_G5T_RE_3 = 108,
	CDB_CHAR_G5T_RE_4 = 109,
	CDB_CHAR_G5T_RE_5 = 110,
	CDB_CHAR_G5T_RE_6 = 111,
	CDB_CHAR_DOG_BR = 112,
	CDB_CHAR_DOG_BR2 = 113,
	CDB_CHAR_DOG_BR3 = 114,
	CDB_CHAR_DOG_BR4 = 115,
	CDB_CHAR_DOG_BR5 = 116,
	CDB_CHAR_GST_PU = 118,
	CDB_CHAR_GOLDM_RE = 119,
	CDB_CHAR_BRICH_GR = 120,
	CDB_CHAR_JAPANESE_2 = 121,
	CDB_CHAR_JAPANESE_3 = 122,
	CDB_CHAR_JAPANESE_4 = 123,
	CDB_CHAR_JAPANESE_5 = 124,
	CDB_CHAR_NORMAL_START = 181,
	CDB_CHAR_BOY_COUPLE = 181,
	CDB_CHAR_BDF01_CR = 182,
	CDB_CHAR_BDF02_BL = 183,
	CDB_CHAR_GIRL_COUPLE = 184,
	CDB_CHAR_WOMAN_02 = 185,
	CDB_CHAR_GTC_BL = 186,
	CDB_CHAR_WOMAN_01 = 187,
	CDB_CHAR_GDF_BK = 188,
	CDB_CHAR_GDF_WH = 189,
	CDB_CHAR_GDF_YE = 190,
	CDB_CHAR_MORO8 = 191,
	CDB_CHAR_BCH88_PK = 192,
	CDB_CHAR_BCH01_CR = 193,
	CDB_CHAR_BTVC_PK = 194,
	CDB_CHAR_BTVC_BL = 195,
	CDB_CHAR_BSP_GR = 196,
	CDB_CHAR_BCUBE_WH = 197,
	CDB_CHAR_GSY_GR = 198,
	CDB_CHAR_BC5ME_YE = 199,
	CDB_CHAR_RCH5K_BL = 200,
	CDB_CHAR_BLANK = 201,
	CDB_CHAR_BHGAY_BK = 203,
	CDB_CHAR_CGST1_RE = 204,
	CDB_CHAR_CGST3_PK = 205,
	CDB_CHAR_CBST4_GR_NORMAL = 206,
	CDB_CHAR_CGDF_CR = 207,
	CDB_CHAR_ABSK_BL = 208,
	CDB_CHAR_BCAST_SL = 209,
	CDB_CHAR_BKANF_CH5 = 210,
	CDB_CHAR_GCAST_SL = 211,
	CDB_CHAR_CBST4_YE = 212,
	CDB_CHAR_CBST4_LBL = 213,
	CDB_CHAR_ODORIDAN_START = 251,
	CDB_CHAR_KAI_WH = 251,
	CDB_CHAR_KAI_MU = 252,
	CDB_CHAR_KAI_FWH = 253,
	CDB_CHAR_KAI_BK = 254,
	CDB_CHAR_KAI_FBK = 255,
	CDB_CHAR_KAI_MATBK = 256,
	CDB_CHAR_4GOU_NEO = 257,
	CDB_CHAR_KAI_SMU = 258,
	CDB_CHAR_BOSS_START = 291,
	CDB_CHAR_R1_BOSS_A = 291,
	CDB_CHAR_R1_BOSS_B = 294,
	CDB_CHAR_R2_BOSS_VN = 297,
	CDB_CHAR_R2_BOSS_B = 298,
	CDB_CHAR_R2_BOSS_B2 = 299,
	CDB_CHAR_R4_BOSS_HEAD = 300,
	CDB_CHAR_R4_BOSS_EX = 301,
	CDB_CHAR_R4_BOSS_4GOU = 302,
	CDB_CHAR_R4_BOSS_G = 303,
	CDB_CHAR_R6_BOSS = 304,
	CDB_CHAR_R6_BOSS_G = 305,
	CDB_CHAR_MORO_START = 341,
	CDB_CHAR_ENM_REPORTER = 341,
	CDB_CHAR_ENM_CAMERAMAN = 342,
	CDB_CHAR_ENM_RE = 343,
	CDB_CHAR_ENM_GR = 344,
	CDB_CHAR_ENM_BL = 345,
	CDB_CHAR_ENM_YE = 346,
	CDB_CHAR_ENM_PK = 347,
	CDB_CHAR_ENM_PU = 348,
	CDB_CHAR_ENM_LEAD = 349,
	CDB_CHAR_ENM_BOSS = 350,
	CDB_CHAR_KOMONO_START = 371,
	CDB_CHAR_SPEAKER = 371,
	CDB_CHAR_SUITCASE_BR = 372,
	CDB_CHAR_ATTACHE_GO = 373,
	CDB_CHAR_FRYPAN_01 = 374,
	CDB_CHAR_OTAMA_01 = 375,
	CDB_CHAR_C_BOARD = 376,
	CDB_CHAR_KNIFE_R = 377,
	CDB_CHAR_KNIFE_L = 378,
	CDB_CHAR_C_BOWL = 379,
	CDB_CHAR_WHIPPER = 380,
	CDB_CHAR_SHAKER_01 = 381,
	CDB_CHAR_JUG_R = 382,
	CDB_CHAR_JUG_L = 383,
	CDB_CHAR_CAMERA_01 = 384,
	CDB_CHAR_ACCORDION_BL = 385,
	CDB_CHAR_BCH88_MIKE = 386,
	CDB_CHAR_BTVC_CAMERA = 387,
	CDB_CHAR_CDRUM = 388,
	CDB_CHAR_CSTICK_R = 389,
	CDB_CHAR_CSTICK_L = 390,
	CDB_CHAR_P_GUITAR = 391,
	CDB_CHAR_RICODER_RE = 392,
	CDB_CHAR_T_STICK = 393,
	CDB_CHAR_TEKKIN = 394,
	CDB_CHAR_U_GUITAR = 395,
	CDB_CHAR_O_GLASS = 396,
	CDB_CHAR_GBI_WING = 397,
	CDB_CHAR_BIRD_A = 398,
	CDB_CHAR_BIRD_B = 399,
	CDB_CHAR_BIRD_C = 400,
	CDB_CHAR_BIRD_D = 401,
	CDB_CHAR_BIRD_E = 402,
	CDB_CHAR_BIRD_F = 403,
	CDB_CHAR_BCH01_MIKE = 404,
	CDB_CHAR_GUITAR_01 = 405,
	CDB_CHAR_KASA = 406,
	CDB_CHAR_PINE_MIKE = 407,
	CDB_CHAR_PINE_HMIKE = 408,
	CDB_CHAR_SEXY_MEGANE = 409,
	CDB_CHAR_BONBON_BL = 410,
	CDB_CHAR_CM5_BAND = 411,
	CDB_CHAR_CM5_MIKE = 412,
	CDB_CHAR_RCH5K_HE = 413,
	CDB_CHAR_BSPRP_GUN = 414,
	CDB_CHAR_PUDDINGMIKE = 415,
	CDB_CHAR_UTAIKO = 416,
	CDB_CHAR_NTAIKO = 417,
	CDB_CHAR_PTAIKO = 418,
	CDB_CHAR_S1TAIKO = 419,
	CDB_CHAR_S2TAIKO = 420,
	CDB_CHAR_TINSTICK_L = 421,
	CDB_CHAR_TINSTICK_R = 422,
	CDB_CHAR_TAMSTICK_L = 423,
	CDB_CHAR_TAMSTICK_R = 424,
	CDB_CHAR_GST_FLAG = 425,
	CDB_CHAR_MU_TAIKO = 426,
	CDB_CHAR_MU_MIKE = 427,
	CDB_CHAR_MU_GUITAR = 428,
	CDB_CHAR_U_PIANO = 429,
	CDB_CHAR_TUE_BL = 430,
	CDB_CHAR_GHAT_BAG = 431,
	CDB_CHAR_BSPJP_VC = 432,
	CDB_CHAR_CM5_CAMERA = 433,
	CDB_CHAR_DELUXE_MIKE = 434,
	CDB_CHAR_PURGE_GOGGLE = 435,
	CDB_CHAR_PTAIKO_R5 = 436,
	CDB_CHAR_DULALA_MIKE = 437,
	CDB_CHAR_ENMBOSS_MIKE = 438,
	CDB_CHAR_OTHER_START = 451,
	CDB_CHAR_DAI_01 = 451,
	CDB_CHAR_G_DAI02 = 452,
	CDB_CHAR_S_KAO = 453,
	CDB_CHAR_R1_BOSS_MIKE = 454,
	CDB_CHAR_R1_BOSS_WARP = 455,
	CDB_CHAR_R1_BOSS_BODY = 456,
	CDB_CHAR_NEW_SHADOW_WARP = 457,
	CDB_CHAR_SHADOW_RING = 458,
	CDB_CHAR_PL_MIKE = 459,
	CDB_CHAR_PL_GUN = 460,
	CDB_CHAR_PL_GUN_L = 461,
	CDB_CHAR_PL_GUN_R = 462,
	CDB_CHAR_P_KAGE = 463,
	CDB_CHAR_M_KAGE = 464,
	CDB_CHAR_R2_BOSHANA_VN = 465,
	CDB_CHAR_R2_BOSS_HANA_VN = 466,
	CDB_CHAR_R2_MI1_VN = 467,
	CDB_CHAR_R2_TUBOMI_VN = 468,
	CDB_CHAR_R2_BOSSDEMO_VN = 469,
	CDB_CHAR_R2_BOSS_HEAD_VN = 470,
	CDB_CHAR_R2_BOSS_TENTACLE_L = 471,
	CDB_CHAR_R2_BOSS_TENTACLE_S = 472,
	CDB_CHAR_R2_BOSS_TENTACLE_X = 473,
	CDB_CHAR_R2_BOSS_TENTACLE2_L = 474,
	CDB_CHAR_R2_BOSS_TENTACLE_B = 475,
	CDB_CHAR_CUFFS = 476,
	CDB_CHAR_ASTROBEAT_JR = 477,
	CDB_CHAR_ASTROBEAT = 478,
	CDB_CHAR_TAPIMARU = 479,
	CDB_CHAR_PUDDINGBIKE = 480,
	CDB_CHAR_R3_PUGA_FIRE_VN = 481,
	CDB_CHAR_R3_PUGA_GUNL_VN = 482,
	CDB_CHAR_R3_PUGA_GUNS_VN = 483,
	CDB_CHAR_R3_PUGA_HONTAI_VN = 484,
	CDB_CHAR_R3_PUGA_SMOKE_VN = 485,
	CDB_CHAR_R3_PUGA_STAGE_VN = 486,
	CDB_CHAR_R3_PUGA_DDOOR_VN = 487,
	CDB_CHAR_R3_PUGA_UDOOR_VN = 488,
	CDB_CHAR_R3_PUGA_PTLMP_STL = 489,
	CDB_CHAR_R3_PUGA_TUTU_VN = 490,
	CDB_CHAR_R3_PUGA_AKAREN2_STL = 491,
	CDB_CHAR_R3_PUGA_AKAREN3_VN = 492,
	CDB_CHAR_R3_PUGA_REVOLVER_VN = 493,
	CDB_CHAR_R3_PUGA_GUNL_VN_L0 = 494,
	CDB_CHAR_BOMB = 495,
	CDB_CHAR_MISSILE = 496,
	CDB_CHAR_FINAL = 497,
	CDB_CHAR_MISSILE_H = 498,
	CDB_CHAR_S_MAF = 499,
	CDB_CHAR_S_TUNO = 500,
	CDB_CHAR_S_EYE = 501,
	CDB_CHAR_01_BOARD = 502,
	CDB_CHAR_88BOARD = 503,
	CDB_CHAR_SRP_PATO = 504,
	CDB_CHAR_SW_EYE = 505,
	CDB_CHAR_SW_MAF = 506,
	CDB_CHAR_SW_TUNO = 507,
	CDB_CHAR_MINI_PEACE = 508,
	CDB_CHAR_CH5_DAI = 509,
	CDB_CHAR_SHADOW_WARP = 510,
	CDB_CHAR_R6_ARMBAND = 511,
	CDB_CHAR_R6_PMARK = 512,
	CDB_CHAR_R6_GOGGLE = 513,
	CDB_CHAR_R6_LHAND = 514,
	CDB_CHAR_R6_RHAND = 515,
	CDB_CHAR_D_AB_JR = 516,
	CDB_CHAR_TUTA_U = 517,
	CDB_CHAR_TUTA_R = 518,
	CDB_CHAR_TUTA_L = 519,
	CDB_CHAR_R4_BOSS_WARP = 520,
	CDB_CHAR_R4_EX_RING = 521,
	CDB_CHAR_R52SDWP01 = 522,
	CDB_CHAR_R61UDWP01 = 523,
	CDB_CHAR_R61PHLP01 = 524,
	CDB_CHAR_R61PHRP01 = 525,
	CDB_CHAR_R61_PMKP01 = 526,
	CDB_CHAR_KAI_EYE = 527,
	CDB_CHAR_KAI_MARK = 528,
	CDB_CHAR_ASTRO_KAI = 529,
	CDB_CHAR_4GOU_DAI = 530,
	CDB_CHAR_PURGE_MANTO = 531,
	CDB_CHAR_R5_AREA2_KEYBOARD_VN = 532,
	CDB_CHAR_MJ_SHIP = 533,
	CDB_CHAR_ULALA05_SUNG = 534,
	CDB_CHAR_PU_GUN_R = 535,
	CDB_CHAR_PU_GUN_L = 536,
	CDB_CHAR_MA_GUN_R = 537,
	CDB_CHAR_MA_GUN_L = 538,
	CDB_CHAR_PA_GUN_R = 539,
	CDB_CHAR_PA_GUN_L = 540,
	CDB_CHAR_ENM_GUL_R = 541,
	CDB_CHAR_ENM_GUL_L = 542,
	CDB_CHAR_R52SDWP01_S = 543,
	CDB_CHAR_S_EYE_PK = 544,
	CDB_CHAR_S_MAF_PK = 545,
	CDB_CHAR_R2_BMARK = 546,
	CDB_CHAR_R52SDWP01_R = 547,
	CDB_CHAR_KAI_DEYE = 548,
	CDB_CHAR_CANDY = 549,
	CDB_CHAR_CHOCHIN = 550,
	CDB_CHAR_ICE = 551,
	CDB_CHAR_ROSE = 552,
	CDB_CHAR_SENSU = 553,
	CDB_CHAR_CORN = 554,
	CDB_CHAR_NEGI = 555,
	CDB_CHAR_SUNG_RED = 556,
	CDB_CHAR_SUNG_BK = 557,
	CDB_CHAR_U_OTAMA = 558,
	CDB_CHAR_U_FLYPAN = 559,
	CDB_CHAR_U_JUG = 560,
	CDB_CHAR_U_WHIPPER = 561,
	CDB_CHAR_ABJR_CANOPY = 562,
	CDB_CHAR_D_ABJR_CANOPY = 563,
	CDB_CHAR_ULALA03_MET = 564,
	CDB_CHAR_MOKOHEAD = 565,
	CDB_CHAR_MOKONECK = 566,
	CDB_CHAR_MOKOHAND_R = 567,
	CDB_CHAR_MOKOHAND_L = 568,
	CDB_CHAR_R3_PUGA_MARK_VN = 569,
	CDB_CHAR_MAX = 1024,
	CDB_CHAR_UNIQUE_START = 800,
	CDB_CHAR_UNIQUE = -3,
	CDB_CHAR_NOUSE = -2,
	CDB_CHAR_ERR = -1
} cdbCharNo;

typedef enum {
	CDB_CHAR_TYPE_DANCER = 1,
	CDB_CHAR_TYPE_FACE_CHANGE = 2,
	CDB_CHAR_TYPE_KEYMAN = 4,
	CDB_CHAR_TYPE_INSTRUMENT = 8,
	CDB_CHAR_TYPE_MAX = -1
} cdbCharType;

typedef enum {
	ENUM_PLAYER_NODE_HEAD = 0,
	ENUM_PLAYER_NODE_CHEST = 1,
	ENUM_PLAYER_NODE_RIGHT_HAND = 2,
	ENUM_PLAYER_NODE_RIGHT_ARM = 3,
	ENUM_PLAYER_NODE_LEFT_HAND = 4,
	ENUM_PLAYER_NODE_LEFT_ARM = 5,
	ENUM_PLAYER_NODE_RIGHT_REAR_FOOT = 6,
	ENUM_PLAYER_NODE_RIGHT_LEG = 7,
	ENUM_PLAYER_NODE_LEFT_REAR_FOOT = 8,
	ENUM_PLAYER_NODE_LEFT_LEG = 9,
	ENUM_PLAYER_NODE_EYE_RIGHT = 10,
	ENUM_PLAYER_NODE_EYE_LEFT = 11,
	ENUM_PLAYER_MODE_GUN_SET = 12,
	ENUM_PLAYER_MODE_GUITAR_SET = 13,
	ENUM_PLAYER_MODE_UPPERTORSO = 14,
	ENUM_PLAYER_NODE_LEFT_SHOULDER = 15,
	ENUM_PLAYER_NODE_RIGHT_SHOULDER = 16,
	ENUM_PLAYER_NODE_BOOST_LEFT = 17,
	ENUM_PLAYER_NODE_BOOST_RIGHT = 18,
	ENUM_PLAYER_NODE_END = 19
} PlayerNode;

enum {
	ENUM_PLAYER_L_L = 0,
	ENUM_PLAYER_L_PLAYER_A = 1,
	ENUM_PLAYER_L_CHN1 = 2,
	ENUM_PLAYER_L_LOWERTORSO = 3,
	ENUM_PLAYER_L_ABDOMUM = 4,
	ENUM_PLAYER_L_UPPERTORSO = 5,
	ENUM_PLAYER_L_EFF1 = 6,
	ENUM_PLAYER_L_CHN2 = 7,
	ENUM_PLAYER_L_NECK = 8,
	ENUM_PLAYER_L_HEAD = 9,
	ENUM_PLAYER_L_EFF2 = 10,
	ENUM_PLAYER_L_CHN7 = 11,
	ENUM_PLAYER_L_TUNO_L = 12,
	ENUM_PLAYER_L_EFF7 = 13,
	ENUM_PLAYER_L_CHN8 = 14,
	ENUM_PLAYER_L_TUNO_R = 15,
	ENUM_PLAYER_L_EFF8 = 16,
	ENUM_PLAYER_L_CHN9 = 17,
	ENUM_PLAYER_L_HL1 = 18,
	ENUM_PLAYER_L_HL2 = 19,
	ENUM_PLAYER_L_EFF9 = 20,
	ENUM_PLAYER_L_CHN10 = 21,
	ENUM_PLAYER_L_HR1 = 22,
	ENUM_PLAYER_L_HR2 = 23,
	ENUM_PLAYER_L_EFF10 = 24,
	ENUM_PLAYER_L_FACE_00 = 25,
	ENUM_PLAYER_L_EYEBALL_R23_2_1 = 26,
	ENUM_PLAYER_L_EYEBALL_L23_6 = 27,
	ENUM_PLAYER_L_MABU_R25_6 = 28,
	ENUM_PLAYER_L_MABU_L22_2_1 = 29,
	ENUM_PLAYER_L_CHN3 = 30,
	ENUM_PLAYER_L_LCOLLARBONE = 31,
	ENUM_PLAYER_L_LUPARM = 32,
	ENUM_PLAYER_L_LLOWARM = 33,
	ENUM_PLAYER_L_LHAND = 34,
	ENUM_PLAYER_L_LTE = 35,
	ENUM_PLAYER_L_EFF3 = 36,
	ENUM_PLAYER_L_CHN4 = 37,
	ENUM_PLAYER_L_RCOLLARBONE = 38,
	ENUM_PLAYER_L_RUPARM = 39,
	ENUM_PLAYER_L_RLOWARM = 40,
	ENUM_PLAYER_L_RHAND = 41,
	ENUM_PLAYER_L_RTE = 42,
	ENUM_PLAYER_L_EFF4 = 43,
	ENUM_PLAYER_L_BOOST_R1 = 44,
	ENUM_PLAYER_L_BOOST_L1 = 45,
	ENUM_PLAYER_L_CHN5 = 46,
	ENUM_PLAYER_L_LPELVIS = 47,
	ENUM_PLAYER_L_LTHIGH = 48,
	ENUM_PLAYER_L_LLOWLEG = 49,
	ENUM_PLAYER_L_LREARFOOT = 50,
	ENUM_PLAYER_L_LFRONTFOOT = 51,
	ENUM_PLAYER_L_EFF5 = 52,
	ENUM_PLAYER_L_GUN_L = 53,
	ENUM_PLAYER_L_CHN6 = 54,
	ENUM_PLAYER_L_RPELVIS = 55,
	ENUM_PLAYER_L_RTHIGH = 56,
	ENUM_PLAYER_L_RLOWLEG = 57,
	ENUM_PLAYER_L_RREARFOOT = 58,
	ENUM_PLAYER_L_RFRONTFOOT = 59,
	ENUM_PLAYER_L_EFF6 = 60,
	ENUM_PLAYER_L_GUN_R = 61,
	ENUM_PLAYER_L_BMERGE70 = 62,
	ENUM_PLAYER_L_END = 63
};

typedef enum {
	ENUM_PLAYER_TYPE_ERROR = -1,
	ENUM_PLAYER_TYPE_ULALA_START_1 = 0,
	ENUM_PLAYER_TYPE_ULALA = 0,
	ENUM_PLAYER_TYPE_ULALA2 = 1,
	ENUM_PLAYER_TYPE_ULALA3B = 2,
	ENUM_PLAYER_TYPE_ULALA3A = 3,
	ENUM_PLAYER_TYPE_ULALA5 = 4,
	ENUM_PLAYER_TYPE_ULALA6 = 5,
	ENUM_PLAYER_TYPE_ULALA6D = 6,
	ENUM_PLAYER_TYPE_ULALA6K = 7,
	ENUM_PLAYER_TYPE_ULALA_C_BL = 8,
	ENUM_PLAYER_TYPE_ULALA_C_CHI = 9,
	ENUM_PLAYER_TYPE_ULALA_C_WH = 10,
	ENUM_PLAYER_TYPE_ULALA_C_WIRE = 11,
	ENUM_PLAYER_TYPE_ULALA_END_1 = 11,
	ENUM_PLAYER_TYPE_PUDDING = 12,
	ENUM_PLAYER_TYPE_PINE = 13,
	ENUM_PLAYER_TYPE_GSY_GR = 14,
	ENUM_PLAYER_TYPE_MICHAEL = 15,
	ENUM_PLAYER_TYPE_JAGUAR = 16,
	ENUM_PLAYER_TYPE_PEACE = 17,
	ENUM_PLAYER_TYPE_NOISE = 18,
	ENUM_PLAYER_TYPE_EVILA = 19,
	ENUM_PLAYER_TYPE_PURGE_B = 20,
	ENUM_PLAYER_TYPE_JAPANESE = 21,
	ENUM_PLAYER_TYPE_TEACH_BL = 22,
	ENUM_PLAYER_TYPE_COCK = 23,
	ENUM_PLAYER_TYPE_CGDF_YE = 24,
	ENUM_PLAYER_TYPE_BSPRP_LE = 25,
	ENUM_PLAYER_TYPE_GOLDM_RE = 26,
	ENUM_PLAYER_TYPE_BLANK = 27,
	ENUM_PLAYER_TYPE_BHGAY_BK = 28,
	ENUM_PLAYER_TYPE_KAI_WH = 29,
	ENUM_PLAYER_TYPE_KAI_MU = 30,
	ENUM_PLAYER_TYPE_MORO = 31,
	ENUM_PLAYER_TYPE_BOSS_MORO = 32,
	ENUM_PLAYER_TYPE_88 = 33,
	ENUM_PLAYER_TYPE_PURGE_A = 34,
	ENUM_PLAYER_TYPE_ULALA_START_2 = 35,
	ENUM_PLAYER_TYPE_ULALA_C_LINE = 35,
	ENUM_PLAYER_TYPE_ULALA_C_MEI = 36,
	ENUM_PLAYER_TYPE_ULALA_C_BK = 37,
	ENUM_PLAYER_TYPE_ULALA_C_PK = 38,
	ENUM_PLAYER_TYPE_ULALA_C_SUN = 39,
	ENUM_PLAYER_TYPE_ENTRY_END = 40,
	ENUM_PLAYER_TYPE_ULALA6KSP = 40,
	ENUM_PLAYER_TYPE_ULALA_END_2 = 40,
	ENUM_PLAYER_TYPE_END = 41
} PlayerType;

typedef struct { // 0x8
	/* 0x0 */ Sint16 player_no;
	/* 0x2 */ Sint8 player_clip;
	/* 0x3 */ Sint8 set_item;
	/* 0x4 */ PlayerNode *node_tbl_p;
} PlayerSet;

typedef struct { // 0x20
	/* 0x00 */ dgMathVector3 pos;
	/* 0x0c */ dgMathAngle3 ang;
	/* 0x18 */ float next_frame;
	/* 0x1c */ Sint32 reserve;
} PlayerBasePos;

typedef void PlayerCallbackFunc(/* parameters unknown */);

typedef enum {
	PLAYER_GUN_MODE_MIC = 0,
	PLAYER_GUN_MODE_GUN = 1,
	PLAYER_GUN_MODE_GUITAR = 2,
	PLAYER_GUN_MODE_RESET = 3,
	PLAYER_GUN_MODE_OTHER_ITEM = 4,
	PLAYER_GUN_MODE_END = 5
} PlayerGunMode;

typedef enum {
	PLAYER_OBJECT_CALLBACK_SET_MOTION = 0,
	PLAYER_OBJECT_CALLBACK_SET_FRAME = 1,
	PLAYER_OBJECT_CALLBACK_GO_MOTION = 2,
	PLAYER_OBJECT_CALLBACK_GO_MOTION_SLE = 3,
	PLAYER_OBJECT_CALLBACK_GO_MOTION_NEXT = 4,
	PLAYER_OBJECT_CALLBACK_END = 5
} PlayerObjCallbackMode;

typedef void PlayerObjCallbackFunc(/* parameters unknown */);

enum PlayerIgnoreAxisBit {
	BIT_PLAYER_IGNORE_AXIS_X = 0,
	BIT_PLAYER_IGNORE_AXIS_Y = 1,
	BIT_PLAYER_IGNORE_AXIS_Z = 2,
	BIT_PLAYER_IGNORE_ULALA = 3,
	BIT_PLAYER_IGNORE_END = 4
};

typedef Sint32 PlayerIgnoreAxis;

typedef enum {
	PARTY_WIPE_SHOOT = 0,
	PARTY_WIPE_DANCE = 1,
	PARTY_WIPE_MAX = 2
} PartyWipeType;

enum PartyMemberLimit {
	PARTY_LIMIT_NORMAL = 20,
	PARTY_LIMIT_DANCEMAN = 2,
	PARTY_LIMIT_INSTRUMENT = 6,
	PARTY_LIMIY_ALL = 28
};

typedef enum {
	PARTY_FORMATION_NO_ASSIGN = -1,
	PARTY_FORMATION_NORMAL = 0,
	PARTY_FORMATION_DANCEMAN = 1,
	PARTY_FORMATION_INSTRUMENT = 2,
	PARTY_FORMATION_END = 3
} PartyFormationIndex;

typedef enum {
	PARTY_INST_NORMAL_LOOP = 0,
	PARTY_INST_NORMAL_UHYAHOO = 1,
	PARTY_INST_BAD_LOOP = 2,
	PARTY_INST_BAD_UHYAHOO = 3,
	PARTY_INST_MOTION_END = 4
} PartyInstMotionIndex;

// warning: multiple differing types with the same name (descriptor not equal)
typedef PartyControl PartyControl;

typedef struct { // 0x10
	/* 0x0 */ dgMathVector3 pos;
	/* 0xc */ dgMathAngle1 ang;
} PartyFormationPosition;

typedef struct { // 0x8
	/* 0x0 */ Sint16 end_frame;
	/* 0x2 */ Sint16 set_number;
	/* 0x4 */ PartyFormationPosition *posdata_p;
} PartyFormationMotion;

typedef struct { // 0xc
	/* 0x0 */ Sint32 mtp_iid;
	/* 0x4 */ Sint32 inst_member;
	/* 0x8 */ dgCharNo *charno_tb;
} PartyInstMotionData;

typedef PartyFormationMotion PartyFormationSet[3];
typedef void PartyMotionFunc(/* parameters unknown */);

typedef enum {
	SDE_ERR_NOTHING = 0,
	SDE_ERR_PRM_OVER_RANGE = 50331649,
	SDE_ERR_PRM_ILLEGAL_VALUE = 50331650,
	SDE_ERR_MODULE_SLOT_NO_ENOUGH = 83886081,
	SDE_ERR_MEMBLK_ALREADY_TRANSFER = 100663297,
	SDE_ERR_MEMBLK_QUEUE_NO_ENOUGH = 100663553,
	SDE_ERR_HANDLE_NO_ENOUGH = 117440769,
	SDE_ERR_HANDLE_ILLEGAL_VALUE = 117440770,
	SDE_ERR_HANDLE_NULL = 117440771,
	SDE_ERR_PTR_ILLEGAL_VALUE = 117441026,
	SDE_ERR_PTR_NULL = 117441027,
	SDE_ERR_BANK_ILLEGAL_TYPE = 150994945,
	SDE_ERR_BANK_ILLEGAL_VER = 150994946,
	SDE_ERR_BANK_NOTHING = 150994947,
	SDE_ERR_BANK_ILLEGAL_NUM = 150994948,
	SDE_ERR_BANK_ILLEGAL_SZ = 150994949,
	SDE_ERR_BANK_ILLEGAL_CHECK_SUM = 150994950,
	SDE_ERR_BANK_NO_MAPPING = 150995216,
	SDE_ERR_DATA_ILLEGAL_TYPE = 150995201,
	SDE_ERR_DATA_ILLEGAL_VER = 150995202,
	SDE_ERR_DATA_NOTHING = 150995203,
	SDE_ERR_DATA_ILLEGAL_NUM = 150995204,
	SDE_ERR_HOST_CMD_BUF_NO_ENOUGH = 167772161,
	SDE_ERR_DRV_PROBLEM = 184549377,
	SDE_ERR_DRV_ILLEGAL_VER = 184549378,
	SDE_ERR_DRV_BUSY = 184549379,
	SDE_ERR_NO_INIT = 218103809,
	SDE_ERR_ALREADY_INIT = 218103810,
	SDE_ERR_HARD_WARE = 251658241,
	SDE_ERR_MAIN_MEM_ADR_ERR = 251723777,
	SDE_ERR_SND_MEM_ADR_ERR = 251724033,
	SDE_ERR_UNKNOW_NUM = 2147483647
} SDE_ERR;

typedef enum {
	SDE_DATA_TYPE_DRV = 1448232019,
	SDE_DATA_TYPE_MLT = 1414286675,
	SDE_DATA_TYPE_MIDI_DRM_BANK = 1111772499,
	SDE_DATA_TYPE_MIDI_SEQ_BANK = 1112755539,
	SDE_DATA_TYPE_MIDI_PRG_BANK = 1112558931,
	SDE_DATA_TYPE_SHOT_BANK = 1112756051,
	SDE_DATA_TYPE_PSTM_RING_BUF = 1381191763,
	SDE_DATA_TYPE_FX_OUT_BANK = 1112491603,
	SDE_DATA_TYPE_FX_PRG_BANK = 1112557139,
	SDE_DATA_TYPE_FX_PRG_WRK = 1464878675
} SDE_DATA_TYPE;

typedef enum {
	SDE_PAN_MODE_MONO = 0,
	SDE_PAN_MODE_STEREO = 1
} SDE_PAN_MODE;

typedef enum {
	SDE_MIDI_GM_MODE_ON = 1,
	SDE_MIDI_GM_MODE_OFF = 0
} SDE_MIDI_GM_MODE;

typedef enum {
	SDE_SHOT_PLAY_TIME_RELATIVE = 0,
	SDE_SHOT_PLAY_TIME_RATIO = 1,
	SDE_SHOT_PLAY_TIME_ABSOLUTE = 2
} SDE_SHOT_PLAY_TIME;

typedef enum {
	SDE_PCM_TYPE_8BIT_LINEAR = 0,
	SDE_PCM_TYPE_16BIT_LINEAR = 1,
	SDE_PCM_TYPE_4BIT_ADPCM = 2
} SDE_PCM_TYPE;

typedef enum {
	SDE_MEMBLK_STAT_TRANSFER_REMAIN = 0,
	SDE_MEMBLK_STAT_TRANSFER_FINISHED = 1,
	SDE_MEMBLK_STAT_TRANSFER_PROGRESS = 2
} SDE_MEMBLK_STAT;

typedef enum {
	SDE_MEMBLK_TRANSFER_MODE_CPU = 0,
	SDE_MEMBLK_TRANSFER_MODE_DMA = 1
} SDE_MEMBLK_TRANSFER_MODE;

typedef enum {
	SDE_PORT_RELEASE_MODE_DISABLE = 0,
	SDE_PORT_RELEASE_MODE_ENABLE = 1
} SDE_PORT_RELEASE_MODE;

typedef enum {
	SDE_HOST_CMD_FLUSH_MODE_NORMAL = 0,
	SDE_HOST_CMD_FLUSH_MODE_FORCE = 1,
	SDE_HOST_CMD_FLUSH_MODE_FORCE_ALL = 2
} SDE_HOST_CMD_FLUSH_MODE;

typedef enum {
	SDE_MIDI_IF_MODE_DISABLE = 0,
	SDE_MIDI_IF_MODE_ENABLE = 1
} SDE_MIDI_IF_MODE;

typedef Void (*SD_ERR_CALLBACK_FUNC)(/* parameters unknown */);
typedef Void (*SD_MEMBLK_CALLBACK_FUNC)(/* parameters unknown */);

typedef struct { // 0x4
	/* 0x0 */ Uint8 m_Major;
	/* 0x1 */ Uint8 m_Minor;
	/* 0x2 */ Uint8 m_Debug;
	/* 0x3 */ Uint8 rsv;
} SDS_VER;

typedef struct { // 0x4
	/* 0x0 */ Uint8 m_Member[4];
} SDS_MIDI_MES;

typedef struct { // 0x1c
	/* 0x00 */ Sint16 rsv;
	/* 0x02 */ Sint8 m_Vol;
	/* 0x03 */ Sint8 m_Pan;
	/* 0x04 */ Sint8 m_FxInLev;
	/* 0x05 */ Sint8 m_DrctLev;
	/* 0x06 */ Sint16 m_Pitch;
	/* 0x08 */ Sint16 m_SeqSpeed;
	/* 0x0c */ Uint32 m_SeqTotalBeatTime;
	/* 0x10 */ Sint32 m_SeqCurAdr;
	/* 0x14 */ Uint32 m_Err;
	/* 0x18 */ Uint32 m_Flg;
} SDS_MIDI_STAT;

typedef struct { // 0x1c
	/* 0x00 */ Sint16 rsv;
	/* 0x02 */ Sint8 m_Vol;
	/* 0x03 */ Sint8 m_Pan;
	/* 0x04 */ Sint8 m_FxInLev;
	/* 0x05 */ Sint8 m_DrctLev;
	/* 0x06 */ Sint16 m_Pitch;
	/* 0x08 */ Sint16 rsv2;
	/* 0x0c */ Uint32 m_TotalSmpFrame;
	/* 0x10 */ Sint32 m_CurAdr;
	/* 0x14 */ Uint32 m_Err;
	/* 0x18 */ Uint32 m_Flg;
} SDS_SHOT_STAT;

typedef struct { // 0x1c
	/* 0x00 */ Sint16 rsv;
	/* 0x02 */ Sint8 m_Vol;
	/* 0x03 */ Sint8 m_Pan;
	/* 0x04 */ Sint8 m_FxInLev;
	/* 0x05 */ Sint8 m_DrctLev;
	/* 0x06 */ Sint16 m_Pitch;
	/* 0x08 */ Sint16 rsv2;
	/* 0x0c */ Uint32 m_TotalSmpFrame;
	/* 0x10 */ Sint32 m_CurAdr;
	/* 0x14 */ Uint32 m_Err;
	/* 0x18 */ Uint32 m_Flg;
} SDS_PSTM_STAT;

typedef struct { // 0x10
	/* 0x0 */ Sint16 rsv;
	/* 0x2 */ Sint8 m_LeftVol;
	/* 0x3 */ Sint8 m_RightVol;
	/* 0x4 */ Sint8 m_LeftPan;
	/* 0x5 */ Sint8 m_RightPan;
	/* 0x8 */ Uint32 m_Err;
	/* 0xc */ Uint32 m_Flg;
} SDS_GDDA_STAT;

typedef struct { // 0x40
	/* 0x00 */ Uint32 m_Member[16];
} SDS_MEMBLK;

typedef SDS_MEMBLK *SDMEMBLK;

typedef struct { // 0x4
	/* 0x0 */ Void *m_Ref;
} SDS_PORT_REF;

typedef SDS_PORT_REF *SDHANDLE;
typedef SDHANDLE SDMIDI;
typedef SDHANDLE SDSHOT;
typedef SDHANDLE SDPSTM;
typedef Sint16 dgSoundData;

typedef enum {
	DG_SOUND_PAN_STEREO = 0,
	DG_SOUND_PAN_MONO = 1,
	DG_SOUND_PAN_MAX = 2
} dgSoundPanMode;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgCamera dgCamera;

typedef enum {
	DG_CAM_MIRROR_NON = 0,
	DG_CAM_MIRROR_X = 1,
	DG_CAM_MIRROR_Y = 2,
	DG_CAM_MIRROR_Z = 3,
	DG_CAM_MIRROR_MAX = 4
} dgCameraMirrorMode;

enum {
	NWD_WC_WIN = 0,
	NWD_WC_BUTTON = 1,
	NWD_WC_SCRBAR = 2,
	NWD_WC_SCRWIN = 3,
	NWD_WC_EDITWIN = 4,
	NWD_WC_MENUWIN = 5,
	NWD_WC_CTLBOX = 6
};

enum {
	NWD_MSG_NULL = 0,
	NWD_MSG_ALL = 1,
	NWD_MSG_CLICK = 2,
	NWD_MSG_LBUTTONDOWN = 3,
	NWD_MSG_FOCUS = 4,
	NWD_MSG_CLOSE = 5
};

enum {
	NWD_DT_CHAR = 0,
	NWD_DT_SHORT = 1,
	NWD_DT_INT = 2,
	NWD_DT_LONG = 3,
	NWD_DT_FLOAT = 4,
	NWD_DT_UCHAR = 5,
	NWD_DT_USHORT = 6,
	NWD_DT_UINT = 7,
	NWD_DT_ULONG = 8
};

struct _NWS_RGBA { // 0x4
	/* 0x0 */ Uint8 r;
	/* 0x1 */ Uint8 g;
	/* 0x2 */ Uint8 b;
	/* 0x3 */ Uint8 a;
};

typedef _NWS_RGBA NWS_RGBA;

struct _NWS_RECT { // 0x10
	/* 0x0 */ Sint32 left;
	/* 0x4 */ Sint32 top;
	/* 0x8 */ Sint32 right;
	/* 0xc */ Sint32 bottom;
};

typedef _NWS_RECT NWS_RECT;

struct _NWS_RECTF { // 0x10
	/* 0x0 */ Float left;
	/* 0x4 */ Float top;
	/* 0x8 */ Float right;
	/* 0xc */ Float bottom;
};

typedef _NWS_RECTF NWS_RECTF;

struct _NWS_POINT { // 0x8
	/* 0x0 */ Sint32 x;
	/* 0x4 */ Sint32 y;
};

typedef _NWS_POINT NWS_POINT;

struct _NWS_MOUSE { // 0x28
	/* 0x00 */ NWS_POINT pt;
	/* 0x08 */ Sint32 dt;
	/* 0x0c */ Sint32 cursor;
	/* 0x10 */ NWS_POINT oldPt;
	/* 0x18 */ NWS_POINT mv;
	/* 0x20 */ NWS_POINT dragPt;
};

typedef _NWS_MOUSE NWS_MOUSE;
typedef Bool (*NWF_MSGPROC)(/* parameters unknown */);

struct _NWS_MSGHANDLE { // 0x8
	/* 0x0 */ Sint32 msg;
	/* 0x4 */ NWF_MSGPROC func;
};

typedef _NWS_MSGHANDLE NWS_MSGHANDLE;

struct _NWS_DATA { // 0x8
	/* 0x0 */ void *dt;
	/* 0x4 */ Sint32 type;
};

typedef _NWS_DATA NWS_DATA;

struct _NWS_WIN { // 0x6c
	/* 0x00 */ Sint32 style;
	/* 0x04 */ Sint32 wClass;
	/* 0x08 */ char *caption;
	/* 0x0c */ Sint32 font;
	/* 0x10 */ _NWS_WIN *parent;
	/* 0x14 */ _NWS_WIN *child;
	/* 0x18 */ _NWS_WIN *before;
	/* 0x1c */ _NWS_WIN *next;
	/* 0x20 */ Sint32 x;
	/* 0x24 */ Sint32 y;
	/* 0x28 */ Sint32 w;
	/* 0x2c */ Sint32 h;
	/* 0x30 */ NWS_RGBA col[4];
	/* 0x40 */ NWS_MSGHANDLE *msgHandle;
	/* 0x44 */ void *menuTable;
	/* 0x48 */ void *userBuf;
	/* 0x4c */ void (*clientDraw)(/* parameters unknown */);
	/* 0x50 */ void (*execFunc)(/* parameters unknown */);
	/* 0x54 */ void (*destructor)(/* parameters unknown */);
	/* 0x58 */ Sint32 param1;
	/* 0x5c */ Sint32 param2;
	/* 0x60 */ _NWS_WIN *hClose;
	/* 0x64 */ _NWS_WIN *hMaximize;
	/* 0x68 */ _NWS_WIN *hMinimize;
};

typedef _NWS_WIN NWS_WIN;
typedef NWS_WIN *NWHWND;
typedef void (*NWF_BUTTONFUNC)(/* parameters unknown */);

struct _NWS_BUTTON { // 0x78
	/* 0x00 */ NWS_WIN base;
	/* 0x6c */ NWF_BUTTONFUNC func;
	/* 0x70 */ Sint32 state;
	/* 0x74 */ Sint32 count;
};

typedef _NWS_BUTTON NWS_BUTTON;

struct _NWS_SCRBAR { // 0x88
	/* 0x00 */ NWS_WIN base;
	/* 0x6c */ Float pos;
	/* 0x70 */ Float min;
	/* 0x74 */ Float max;
	/* 0x78 */ Float lineMove;
	/* 0x7c */ Float pageMove;
	/* 0x80 */ NWS_DATA dt;
};

typedef _NWS_SCRBAR NWS_SCRBAR;

typedef struct { // 0x20
	/* 0x00 */ char *caption;
	/* 0x04 */ NWS_DATA data;
	/* 0x0c */ Float min;
	/* 0x10 */ Float max;
	/* 0x14 */ Float line;
	/* 0x18 */ Float page;
	/* 0x1c */ Float pos;
} NWS_SCROLLBARINFO;

typedef struct { // 0x14
	/* 0x00 */ Sint32 n;
	/* 0x04 */ Sint32 style;
	/* 0x08 */ Sint16 x;
	/* 0x0a */ Sint16 y;
	/* 0x0c */ Sint16 w;
	/* 0x0e */ Sint16 h;
	/* 0x10 */ NWS_SCROLLBARINFO *info;
} NWS_SCROLLBARLIST;

struct _NWS_SCRWIN { // 0x88
	/* 0x00 */ NWS_WIN base;
	/* 0x6c */ Sint32 sx;
	/* 0x70 */ Sint32 sy;
	/* 0x74 */ Sint32 flag;
	/* 0x78 */ NWS_RECT clip;
};

typedef _NWS_SCRWIN NWS_SCRWIN;

struct _NWS_EDITWIN { // 0x9c
	/* 0x00 */ NWS_SCRWIN base;
	/* 0x88 */ Sint32 maxColumn;
	/* 0x8c */ Sint32 maxLine;
	/* 0x90 */ void *textBuf;
	/* 0x94 */ Sint32 cx;
	/* 0x98 */ Sint32 cy;
};

typedef _NWS_EDITWIN NWS_EDITWIN;
typedef void (*NWF_MENUHANDLE)(/* parameters unknown */);

struct _NWS_MENUTABLE { // 0x10
	/* 0x0 */ Sint32 type;
	/* 0x4 */ char *title;
	/* 0x8 */ NWF_MENUHANDLE func;
	/* 0xc */ Sint32 param;
};

typedef _NWS_MENUTABLE NWS_MENUTABLE;

struct _NWS_MENUWIN { // 0x74
	/* 0x00 */ NWS_WIN base;
	/* 0x6c */ Sint32 check;
	/* 0x70 */ NWS_MENUTABLE *menuTable;
};

typedef _NWS_MENUWIN NWS_MENUWIN;

struct _NWS_FONT { // 0x28
	/* 0x00 */ Sint32 baseChar;
	/* 0x04 */ Sint32 w;
	/* 0x08 */ Sint32 h;
	/* 0x0c */ Sint32 u;
	/* 0x10 */ Sint32 v;
	/* 0x14 */ Sint32 gw;
	/* 0x18 */ Sint32 gh;
	/* 0x1c */ Sint32 dw;
	/* 0x20 */ NJS_TEXNAME *texname;
	/* 0x24 */ Uint32 globalIndex;
};

typedef _NWS_FONT NWS_FONT;

typedef enum {
	GWD_PRINT_SIZE_NORMAL = 0,
	GWD_PRINT_SIZE_MIDDLE = 1,
	GWD_PRINT_SIZE_SMALL = 2
} gwPrintSize;

// warning: multiple differing types with the same name (enum constant not equal)
typedef enum {
	GWD_MENU_TYPE_NORMAL = 0,
	GWD_MENU_TYPE_POPUP = 1,
	GWD_MENU_TYPE_SEPARATER = 2,
	GWD_MENU_TYPE_NULL = 3,
	GWD_MENU_TYPE_NUM = 4
} gwMenuType;

struct _gwRect { // 0x10
	/* 0x0 */ Sint32 left;
	/* 0x4 */ Sint32 top;
	/* 0x8 */ Sint32 right;
	/* 0xc */ Sint32 bottom;
};

typedef _gwRect gwRect;

struct _gwRectF { // 0x10
	/* 0x0 */ Float left;
	/* 0x4 */ Float top;
	/* 0x8 */ Float right;
	/* 0xc */ Float bottom;
};

typedef _gwRectF gwRectF;

typedef enum {
	GWD_VAR_TYPE_SINT8 = 0,
	GWD_VAR_TYPE_UINT8 = 1,
	GWD_VAR_TYPE_SINT16 = 2,
	GWD_VAR_TYPE_UINT16 = 3,
	GWD_VAR_TYPE_SINT32 = 4,
	GWD_VAR_TYPE_UINT32 = 5,
	GWD_VAR_TYPE_FLOAT = 6,
	GWD_VAR_TYPE_CHAR = 7,
	GWD_VAR_TYPE_MAX = 8
} gwVarType;

typedef struct { // 0x14
	/* 0x00 */ Float data;
	/* 0x04 */ Float min;
	/* 0x08 */ Float max;
	/* 0x0c */ Float step;
	/* 0x10 */ Float skip;
} gwVariable;

typedef struct { // 0x8
	/* 0x0 */ size_t log_size;
	/* 0x4 */ int log_line;
} gwConsoleInfo;

typedef struct { // 0x30
	/* 0x00 */ void *Work;
	/* 0x04 */ size_t WorkSize;
	/* 0x08 */ Sint32 ScreenWidth;
	/* 0x0c */ Sint32 ScreenHeight;
	/* 0x10 */ gwPrintSize FontSize;
	/* 0x14 */ int FontGI;
	/* 0x18 */ int Port;
	/* 0x1c */ Float Priority;
	/* 0x20 */ gwConsoleInfo ConsoleInfo;
	/* 0x28 */ Bool SerialInput;
	/* 0x2c */ Bool SerialOutput;
} gwInitInfo;

struct _gwWindow { // 0xa4
	/* 0x00 */ Sint32 style;
	/* 0x04 */ Sint32 wClass;
	/* 0x08 */ Sint32 ctrl_flag;
	/* 0x0c */ _gwWindow *parent;
	/* 0x10 */ _gwWindow *child;
	/* 0x14 */ _gwWindow *prev;
	/* 0x18 */ _gwWindow *next;
	/* 0x1c */ Sint32 x;
	/* 0x20 */ Sint32 y;
	/* 0x24 */ Sint32 w;
	/* 0x28 */ Sint32 h;
	/* 0x2c */ char *caption;
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
	/* 0x68 */ void *userBuf;
	/* 0x6c */ Sint32 param1;
	/* 0x70 */ Sint32 param2;
	/* 0x74 */ Sint32 param[4];
	/* 0x84 */ Float prio;
	/* 0x88 */ Uint32 text_color;
	/* 0x8c */ _gwWindow *hWndClip;
	/* 0x90 */ Sint16 mode;
	/* 0x92 */ Sint16 sizemode;
	/* 0x94 */ Sint32 org_x;
	/* 0x98 */ Sint32 org_y;
	/* 0x9c */ Sint32 org_w;
	/* 0xa0 */ Sint32 org_h;
};

typedef _gwWindow gwWindow;
typedef gwWindow *GWHWND;
typedef void (*GW_WIN_CALLBACK)(/* parameters unknown */);

typedef enum {
	GWD_BUTTONFUNC_MODE_ON = 0,
	GWD_BUTTONFUNC_MODE_UP = 1,
	GWD_BUTTONFUNC_MODE_NUM = 2
} gwButtonFuncMode;

typedef void (*GWF_BUTTONFUNC)(/* parameters unknown */);
typedef _gwMenu gwMenu;
typedef void (*GWF_MENUFUNC)(/* parameters unknown */);

struct _gwMenuData { // 0x10
	/* 0x0 */ char *title;
	/* 0x4 */ Sint16 type;
	/* 0x6 */ Sint16 flag;
	/* 0x8 */ GWF_MENUFUNC func;
	/* 0xc */ Sint32 param;
};

typedef _gwMenuData gwMenuData;

struct _gwMenu { // 0x18
	/* 0x00 */ gwMenuData data;
	/* 0x10 */ gwMenu *prev;
	/* 0x14 */ gwMenu *next;
};

// warning: multiple differing types with the same name (enum constant not equal)
typedef enum {
	GWD_SCRLBAR_TYPE_HORIZONTAL = 0,
	GWD_SCRLBAR_TYPE_VERTICAL = 1,
	GWD_SCRLBAR_TYPE_MAX = 2
} gwScrlBarType;

typedef gwVariable gwScrlBarVar;

typedef enum {
	GWD_SLIDER_TYPE_HORIZONTAL = 0,
	GWD_SLIDER_TYPE_VERTICAL = 1,
	GWD_SLIDER_TYPE_MAX = 2
} gwSliderType;

// warning: multiple differing types with the same name (descriptor not equal)
typedef void (*GWF_TEXTFIELDFUNC)(/* parameters unknown */);

typedef enum {
	GWD_TEXTFIELD_TYPE_ANY = 0,
	GWD_TEXTFIELD_TYPE_PASSWORD = 1,
	GWD_TEXTFIELD_TYPE_NUM = 2
} gwTextFieldTextType;

typedef int (*GWF_COMMANDFUNC)(/* parameters unknown */);

typedef struct { // 0xc
	/* 0x0 */ char *command;
	/* 0x4 */ char *help;
	/* 0x8 */ GWF_COMMANDFUNC func;
} gwCommandData;

typedef void (*GWF_CHOICEBOX_CALLBACK)(/* parameters unknown */);

typedef enum {
	GWD_VAREDIT_TYPE_GROUP = 0,
	GWD_VAREDIT_TYPE_FUNC = 1,
	GWD_VAREDIT_TYPE_INT = 2,
	GWD_VAREDIT_TYPE_FLOAT = 3,
	GWD_VAREDIT_TYPE_PCOL = 4,
	GWD_VAREDIT_TYPE_ANGLE = 5,
	GWD_VAREDIT_TYPE_BOOL = 6,
	GWD_VAREDIT_TYPE_BIT = 7,
	GWD_VAREDIT_TYPE_SELECT = 8,
	GWD_VAREDIT_TYPE_MAX = 9
} gwVarEditType;

typedef struct { // 0x28
	/* 0x00 */ gwVarEditType type;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ char *name;
	/* 0x0c */ char *help;
	/* 0x10 */ void *variable;
	/* 0x14 */ void *func;
	/* 0x18 */ Float first;
	/* 0x1c */ Float min;
	/* 0x20 */ Float max;
	/* 0x24 */ Float step;
} gwVarEditData;

typedef struct { // 0x28
	/* 0x00 */ gwVarEditType type;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ char *name;
	/* 0x0c */ char *help;
	/* 0x10 */ Uint32 *variable;
	/* 0x14 */ void *func;
	/* 0x18 */ Uint32 bitmask;
	/* 0x1c */ Uint32 shift_num;
	/* 0x20 */ Uint32 buf1;
	/* 0x24 */ Uint32 buf2;
} gwVarEditDataBit;

typedef struct { // 0x28
	/* 0x00 */ gwVarEditType type;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ char *name;
	/* 0x0c */ char *help;
	/* 0x10 */ void *variable;
	/* 0x14 */ void *func;
	/* 0x18 */ void *nametable;
	/* 0x1c */ Uint32 min;
	/* 0x20 */ Uint32 max;
	/* 0x24 */ Uint32 buf0;
} gwVarEditDataSelect;

typedef _gwVarEditList gwVarEditList;

struct _gwVarEditList { // 0x2c
	/* 0x00 */ gwVarEditData data;
	/* 0x28 */ gwVarEditList *next;
};

typedef _gwProfilerTag gwProfilerTag;
typedef _gwProfilerGroup gwProfilerGroup;
typedef _gwProfilerCtrl gwProfilerCtrl;

typedef enum {
	GWD_K_NOP = 0,
	GWD_K_ROE = 1,
	GWD_K_FAIL = 2,
	GWD_K_ERR = 3,
	GWD_K_A = 4,
	GWD_K_B = 5,
	GWD_K_C = 6,
	GWD_K_D = 7,
	GWD_K_E = 8,
	GWD_K_F = 9,
	GWD_K_G = 10,
	GWD_K_H = 11,
	GWD_K_I = 12,
	GWD_K_J = 13,
	GWD_K_K = 14,
	GWD_K_L = 15,
	GWD_K_M = 16,
	GWD_K_N = 17,
	GWD_K_O = 18,
	GWD_K_P = 19,
	GWD_K_Q = 20,
	GWD_K_R = 21,
	GWD_K_S = 22,
	GWD_K_T = 23,
	GWD_K_U = 24,
	GWD_K_V = 25,
	GWD_K_W = 26,
	GWD_K_X = 27,
	GWD_K_Y = 28,
	GWD_K_Z = 29,
	GWD_K_1 = 30,
	GWD_K_2 = 31,
	GWD_K_3 = 32,
	GWD_K_4 = 33,
	GWD_K_5 = 34,
	GWD_K_6 = 35,
	GWD_K_7 = 36,
	GWD_K_8 = 37,
	GWD_K_9 = 38,
	GWD_K_0 = 39,
	GWD_K_ENTER = 40,
	GWD_K_ESC = 41,
	GWD_K_BS = 42,
	GWD_K_TAB = 43,
	GWD_K_SPACE = 44,
	GWD_K_MINUS = 45,
	GWD_K_CIRCUMFLEX = 46,
	GWD_K_ATMARK = 47,
	GWD_K_BRACKET_L = 48,
	GWD_K_NUJ = 49,
	GWD_K_BRACKET_R = 50,
	GWD_K_SEMICOLON = 51,
	GWD_K_COLON = 52,
	GWD_K_HANZEN = 53,
	GWD_K_COMMA = 54,
	GWD_K_PERIOD = 55,
	GWD_K_SLASH = 56,
	GWD_K_CAPS = 57,
	GWD_K_F1 = 58,
	GWD_K_F2 = 59,
	GWD_K_F3 = 60,
	GWD_K_F4 = 61,
	GWD_K_F5 = 62,
	GWD_K_F6 = 63,
	GWD_K_F7 = 64,
	GWD_K_F8 = 65,
	GWD_K_F9 = 66,
	GWD_K_F10 = 67,
	GWD_K_F11 = 68,
	GWD_K_F12 = 69,
	GWD_K_PRINT = 70,
	GWD_K_SCROLLLOCK = 71,
	GWD_K_PAUSE = 72,
	GWD_K_INSERT = 73,
	GWD_K_HOME = 74,
	GWD_K_PAGEUP = 75,
	GWD_K_DELETE = 76,
	GWD_K_END = 77,
	GWD_K_PAGEDOWN = 78,
	GWD_K_ARROW_R = 79,
	GWD_K_ARROW_L = 80,
	GWD_K_ARROW_D = 81,
	GWD_K_ARROW_U = 82,
	GWD_K_DUMMY00 = 83,
	GWD_K_DUMMY01 = 84,
	GWD_K_DUMMY02 = 85,
	GWD_K_DUMMY03 = 86,
	GWD_K_DUMMY04 = 87,
	GWD_K_DUMMY05 = 88,
	GWD_K_DUMMY06 = 89,
	GWD_K_DUMMY07 = 90,
	GWD_K_DUMMY08 = 91,
	GWD_K_DUMMY09 = 92,
	GWD_K_DUMMY10 = 93,
	GWD_K_DUMMY11 = 94,
	GWD_K_DUMMY12 = 95,
	GWD_K_DUMMY13 = 96,
	GWD_K_DUMMY14 = 97,
	GWD_K_DUMMY15 = 98,
	GWD_K_DUMMY16 = 99,
	GWD_K_DUMMY17 = 100,
	GWD_K_S3 = 101,
	GWD_K_DUMMY18 = 102,
	GWD_K_DUMMY19 = 103,
	GWD_K_DUMMY20 = 104,
	GWD_K_DUMMY21 = 105,
	GWD_K_DUMMY22 = 106,
	GWD_K_DUMMY23 = 107,
	GWD_K_DUMMY24 = 108,
	GWD_K_DUMMY25 = 109,
	GWD_K_DUMMY26 = 110,
	GWD_K_DUMMY27 = 111,
	GWD_K_DUMMY28 = 112,
	GWD_K_DUMMY29 = 113,
	GWD_K_DUMMY30 = 114,
	GWD_K_DUMMY31 = 115,
	GWD_K_DUMMY32 = 116,
	GWD_K_DUMMY33 = 117,
	GWD_K_DUMMY34 = 118,
	GWD_K_DUMMY35 = 119,
	GWD_K_DUMMY36 = 120,
	GWD_K_DUMMY37 = 121,
	GWD_K_DUMMY38 = 122,
	GWD_K_DUMMY39 = 123,
	GWD_K_DUMMY40 = 124,
	GWD_K_DUMMY41 = 125,
	GWD_K_DUMMY42 = 126,
	GWD_K_DUMMY43 = 127,
	GWD_K_DUMMY44 = 128,
	GWD_K_DUMMY45 = 129,
	GWD_K_DUMMY46 = 130,
	GWD_K_DUMMY47 = 131,
	GWD_K_DUMMY48 = 132,
	GWD_K_DUMMY49 = 133,
	GWD_K_DUMMY50 = 134,
	GWD_K_BACKSLASH = 135,
	GWD_K_KANA = 136,
	GWD_K_YEN = 137,
	GWD_K_HENKAN = 138,
	GWD_K_MUHENKAN = 139,
	GWD_K_MAX = 140
} gwKey;

enum {
	__no_type_class = -1,
	__void_type_class = 0,
	__integer_type_class = 1,
	__char_type_class = 2,
	__enumeral_type_class = 3,
	__boolean_type_class = 4,
	__pointer_type_class = 5,
	__reference_type_class = 6,
	__offset_type_class = 7,
	__real_type_class = 8,
	__complex_type_class = 9,
	__function_type_class = 10,
	__method_type_class = 11,
	__record_type_class = 12,
	__union_type_class = 13,
	__array_type_class = 14,
	__string_type_class = 15,
	__set_type_class = 16,
	__file_type_class = 17,
	__lang_type_class = 18
};

typedef __gnuc_va_list va_list;

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
	/* 0x00 */ char *fmt;
	/* 0x04 */ void *ptr;
	/* 0x08 */ dgDebugDataType ptr_type;
	/* 0x0c */ float min_value;
	/* 0x10 */ float max_value;
	/* 0x14 */ float delta_value;
	/* 0x18 */ float page_value;
} dgDebugEditInfo;

typedef struct { // 0x2c
	/* 0x00 */ Sint16 x;
	/* 0x02 */ Sint16 y;
	/* 0x04 */ Sint16 w;
	/* 0x06 */ Sint16 h;
	/* 0x08 */ Sint16 info_num;
	/* 0x0a */ Sint16 select_line;
	/* 0x0c */ Sint16 draw_line;
	/* 0x10 */ Sint32 font_w;
	/* 0x14 */ Sint32 font_h;
	/* 0x18 */ dgDebugEditInfo *info;
	/* 0x1c */ GWHWND hWnd;
	/* 0x20 */ void *parent_task;
	/* 0x24 */ void (*client_draw)(/* parameters unknown */);
	/* 0x28 */ void (*destructor)(/* parameters unknown */);
} dgDebugWindowTask;

typedef struct { // 0x10
	/* 0x0 */ dgMathVector3 *offset_ptr;
	/* 0x4 */ Angle ang;
	/* 0x8 */ Sint8 pat_no;
	/* 0xc */ Uint32 col;
} dgEffUVParam;

typedef enum {
	DG_EFF_BIRI_TYPE_YELLOW = 0,
	DG_EFF_BIRI_TYPE_BLUE = 1,
	DG_EFF_BIRI_TYPE_BLUE_LARGE = 2,
	DG_EFF_BIRI_TYPE_PURPLE = 3,
	DG_EFF_BIRI_TYPE_MAX = 4
} dgEffBiriType;

enum {
	EFF_NPBEAM01_0_TEXNUM = 0,
	EFF_NPBEAM01_1_TEXNUM = 1,
	EFF_NPBEAM20_0_TEXNUM = 2,
	EFF_NPBEAM20_1_TEXNUM = 3,
	EFF_NPBEAM20_2_TEXNUM = 4,
	EFF_NPBEAM27_TEXNUM = 5,
	EFF_NEBEAM10_TEXNUM = 6,
	EFF_NEBEAM10_BEAM_TEXNUM = 7,
	EFF_NEBEAM10_FLARE_TEXNUM = 8,
	EFF_NEBEAM03_TEXNUM = 9,
	EFF_NEBEAM07_TEXNUM = 10,
	EFF_NEBEAM01_TEXNUM = 11,
	EFF_PHIT01_TEXNUM = 12,
	EFF_NPHIT01_FLASH_TEXNUM = 13,
	EFF_DAMAGE_HEAD_TEXNUM = 14,
	EFF_DAMAGE_BODY_TEXNUM = 15,
	EFF_DAMAGE_END_TEXNUM = 16,
	EFF_IHIT01_0_TEXNUM = 17,
	EFF_IHIT01_1_TEXNUM = 18,
	EFF_IHIT02_0_TEXNUM = 19,
	EFF_IHIT02_1_TEXNUM = 20,
	EFF_JHIT_TEXNUM = 21,
	EFF_POISON_0_TEXNUM = 22,
	EFF_POISON_1_TEXNUM = 23,
	EFF_AURA_HEAD_TEXNUM = 24,
	EFF_AURA_BODY_TEXNUM = 25,
	EFF_AURA_END_TEXNUM = 26,
	EFF_AURA2_HEAD_TEXNUM = 27,
	EFF_AURA2_BODY_TEXNUM = 28,
	EFF_AURA2_END_TEXNUM = 29,
	EFF_NEIN_THUNDER_TEXNUM = 30,
	EFF_NBLAST01_TEXNUM = 31,
	EFF_NBLAST02_TEXNUM = 32,
	EFF_NBLAST03_TEXNUM = 33,
	EFF_HENKEI_0_TEXNUM = 34,
	EFF_HENKEI_1_TEXNUM = 35,
	EFF_CH5_0_TEXNUM = 36,
	EFF_CH5_1_TEXNUM = 37,
	EFF_NEHIT01_TEXNUM = 38,
	EFF_NEHIT04_0_TEXNUM = 39,
	EFF_NEHIT04_1_TEXNUM = 40,
	EFF_YARAM03_TEXNUM = 41,
	EFF_STARS_YELLOW_TEXNUM = 42,
	EFF_FLARE01_TEXNUM = 43,
	EFF_FLARE02_TEXNUM = 44,
	EFF_NDRAGON01_TEXNUM = 45,
	EFF_NFLASH01_TEXNUM = 46,
	EFF_FLOWER0_TEXNUM = 47,
	EFF_FLOWER1_TEXNUM = 48,
	EFF_YARAHAN_TEXNUM = 49,
	EFF_YARABI_BIRI_TEXNUM = 50,
	EFF_YARABI_KASAN_TEXNUM = 51,
	EFF_YARABI_HIBANA_TEXNUM = 52,
	EFF_R21_SPARKF_TEXNUM = 53,
	EFF_NOISE1_TEXNUM = 54,
	EFF_NOISE2_TEXNUM = 55,
	EFF_NOISE3_TEXNUM = 56,
	EFF_NOISE4_TEXNUM = 57,
	EFF_FLARE_03_TEXNUM = 58,
	EFF_BLASTBIRI_TEXNUM = 59,
	EFF_DPBEAM1_TEXNUM = 60,
	EFF_DPBEAM2_TEXNUM = 61,
	EFF_DPBEAMTAIL_TEXNUM = 62,
	EFF_DPCYU_TEXNUM = 63,
	EFF_JRFIRE_HEAD_TEXNUM = 64,
	EFF_JRFIRE_O_TEXNUM = 65,
	EFF_JRFIRE_G_TEXNUM = 66,
	EFF_PUGAFIRE_TEXNUM = 67,
	EFF_STAR_BLUE_TEXNUM = 68,
	EFF_STAR_PURPLE_TEXNUM = 69,
	EFF_BIRI_PURPLE_TEXNUM = 70,
	EFF_SJIKUU_TEXNUM = 71,
	EFF_MACCYO_TEXNUM = 72,
	EFF_PURGE_TEXNUM = 73,
	EFF_STAR_YELLOW_TEXNUM = 74,
	EFF_PEACE_AURA_TEXNUM = 75,
	EFF_PEACE_STAR_TEXNUM = 76,
	EFF_TEXNUM_MAX = 77
};

enum {
	EFF_NEBEAM07_CIX = 0,
	EFF_NEBEAM10_CIX = 1,
	EFF_NEIN_CIX = 2,
	EFF_PBOOST_CIX = 3,
	EFF_SBOOST_IN_CIX = 4,
	EFF_SBOOST_OUT_CIX = 5,
	EFF_NEBOOST_IN_CIX = 6,
	EFF_NEBOOST_OUT_CIX = 7,
	EFF_JRFIRE_01_CIX = 8,
	EFF_JRFIRE_02_CIX = 9,
	EFF_PUGAFIRE_CIX = 10,
	EFF_MCFIRE_IN_CIX = 11,
	EFF_MCFIRE_OUT_CIX = 12,
	EFF_TAIKO_CIX = 13,
	EFF_CIX_MAX = 14
};

typedef enum {
	EFF_PLAY_COL_HEAD = 0,
	EFF_PLAY_COL_TORSO = 1,
	EFF_PLAY_COL_RHAND = 2,
	EFF_PLAY_COL_RELBOW = 3,
	EFF_PLAY_COL_LHAND = 4,
	EFF_PLAY_COL_LELBOW = 5,
	EFF_PLAY_COL_RKNEE = 6,
	EFF_PLAY_COL_RANKLEBONE = 7,
	EFF_PLAY_COL_LKNEE = 8,
	EFF_PLAY_COL_LANKLEBONE = 9,
	EFF_PLAY_COL_MAX = 10
} dgEffPlyColType;

typedef struct { // 0x14
	/* 0x00 */ Uint8 follow_flg;
	/* 0x04 */ Sint32 type;
	/* 0x08 */ Float frame;
	/* 0x0c */ Float scale;
	/* 0x10 */ dgMathVector3 *pos_ptr;
} dgEffSetParam;

typedef struct { // 0x10
	/* 0x0 */ Float cnt;
	/* 0x4 */ Float cnt_dif;
	/* 0x8 */ Float pre_frame;
	/* 0xc */ Float frame;
} dgEffCountData;

typedef struct { // 0x1c
	/* 0x00 */ dgMathVector3 *spos_ptr;
	/* 0x04 */ dgMathVector3 *epos_ptr;
	/* 0x08 */ NJS_VECTOR *dir_vector_ptr;
	/* 0x0c */ NJS_VECTOR *vert_vector_ptr;
	/* 0x10 */ Float width;
	/* 0x14 */ dgMathVector3 *pos_ptr;
	/* 0x18 */ Int no_calc_flg;
} LinePointParam;

typedef struct { // 0x30
	/* 0x00 */ Uint8 mode;
	/* 0x04 */ Uint32 tex_id;
	/* 0x08 */ Uint32 data_id;
	/* 0x0c */ Uint32 *texnum_tbl;
	/* 0x10 */ Uint32 *cix_tbl;
	/* 0x14 */ dgTexInfo *texinfo;
	/* 0x18 */ dgTexInfo *tmp_texinfo;
	/* 0x1c */ void *tex_ptr;
	/* 0x20 */ void *data_ptr;
	/* 0x24 */ void *tex_adr;
	/* 0x28 */ void *data_tmp_adr;
	/* 0x2c */ void *data_adr;
} EffTexTask;

typedef struct { // 0x14
	/* 0x00 */ dgMathVector3 *pos_ptr;
	/* 0x04 */ dgMathVector3 *speed_ptr;
	/* 0x08 */ Float frame;
	/* 0x0c */ Uint32 tex_no;
	/* 0x10 */ Uint32 col;
} PaperParam;

typedef enum {
	DG_EFF_BOOST_TYPE_ULALA = 0,
	DG_EFF_BOOST_TYPE_SHADOW = 1,
	DG_EFF_BOOST_TYPE_ROBO = 2,
	DG_EFF_BOOST_TYPE_OTHER_ROBO = 3,
	DG_EFF_BOOST_TYPE_MAX = 4
} dgEffBoostType;

typedef enum {
	DG_EFF_NAME_LOGO_TYPE_PUDDING = 0,
	DG_EFF_NAME_LOGO_TYPE_PINE = 1
} dgEffNameLogoType;

typedef struct { // 0x1c
	/* 0x00 */ dgEffNameLogoType type;
	/* 0x04 */ dgTexInfo *texinfo;
	/* 0x08 */ Sint16 tex_no[3];
	/* 0x0e */ Sint16 logo_x_size;
	/* 0x10 */ Sint16 logo_y_size;
	/* 0x12 */ Sint16 x_start_pos;
	/* 0x14 */ Sint16 y_start_pos;
	/* 0x16 */ Sint16 x_end_pos;
	/* 0x18 */ Sint16 y_end_pos;
} dgEffNameLogoParam;

typedef enum {
	DG_EFF_FIRE_JR = 0,
	DG_EFF_FIRE_JR_GEKI = 1,
	DG_EFF_FIRE_JR_DAMAGE = 2,
	DG_EFF_FIRE_ASTRO = 3,
	DG_EFF_FIRE_ASTRO_GEKI = 4,
	DG_EFF_FIRE_PUDDING = 5,
	DG_EFF_FIRE_PUDDING_GEKI = 6,
	DG_EFF_FIRE_PUGA = 7,
	DG_EFF_FIRE_POLICE = 8,
	DG_EFF_FIRE_OFF = 9,
	DG_EFF_FIRE_MAX = 10
} dgEffFireType;

typedef enum {
	DG_EFF_RHYTHM_R4_MICHAEL = 0,
	DG_EFF_RHYTHM_R5_MICHAEL = 1,
	DG_EFF_RHYTHM_PERGE = 2,
	DG_EFF_RHYTHM_ROBO = 3,
	DG_EFF_RHYTHM_MORO = 4,
	DG_EFF_RHYTHM_ROBO_DANCE = 5
} dgEffRhythmType;

enum DGFILECACHE_DATATYPE {
	DGFILECACHE_DATATYPE_NORMAL = 0,
	DGFILECACHE_DATATYPE_PVR = 1,
	DGFILECACHE_DATATYPE_SND = 2,
	DGFILECACHE_DATATYPE_NOVALUE = -1,
	DGFILECACHE_DATATYPE_EOE = 0
};

enum DGFILECACHE_ENTRYBUF_STAT {
	DGFILECACHE_ENTRYBUF_STAT_FREE = 21062,
	DGFILECACHE_ENTRYBUF_STAT_BUSY = 23106,
	DGFILECACHE_ENTRYBUF_STAT_EOE = 23107
};

struct _dgFilecacheEntryBuffer { // 0x20
	/* 0x00 */ Uint16 stat;
	/* 0x02 */ Uint16 flag;
	/* 0x04 */ Uint32 cnt;
	/* 0x08 */ _dgFilecacheEntryBuffer *prev;
	/* 0x0c */ _dgFilecacheEntryBuffer *next;
	/* 0x10 */ Uint32 data[4];
};

typedef _dgFilecacheEntryBuffer dgFilecacheEntryBuffer;
typedef _dgFilecacheEntryBuffer *dgFilecacheEntryBufferPtr;

struct _dgFilecacheEntryBufferInfo { // 0x34
	/* 0x00 */ Uint16 stat;
	/* 0x02 */ Uint16 max;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ Bool (*check)(/* parameters unknown */);
	/* 0x0c */ Bool (*release)(/* parameters unknown */);
	/* 0x10 */ dgFilecacheEntryBuffer master;
	/* 0x30 */ dgFilecacheEntryBufferPtr buf;
};

typedef _dgFilecacheEntryBufferInfo dgFilecacheEntryBufferInfo;
typedef _dgFilecacheEntryBufferInfo *dgFilecacheEntryBufferInfoPtr;

struct _dgFilecacheSystemInfo { // 0x690
	/* 0x000 */ void* (*malloc)(/* parameters unknown */);
	/* 0x004 */ void (*free)(/* parameters unknown */);
	/* 0x008 */ void* (*memcpy)(/* parameters unknown */);
	/* 0x00c */ void* (*memset)(/* parameters unknown */);
	/* 0x010 */ dgFilecacheEntryBufferInfo entry[32];
};

typedef _dgFilecacheSystemInfo dgFilecacheSystemInfo;
typedef _dgFilecacheSystemInfo *dgFilecacheSystemInfoPtr;

struct _dgFilecacheEntryBufferDataNormal { // 0xc
	/* 0x0 */ Uint32 fad;
	/* 0x4 */ Uint32 bsize;
	/* 0x8 */ void *dst;
};

typedef _dgFilecacheEntryBufferDataNormal dgFilecacheEntryBufferDataNormal;
typedef _dgFilecacheEntryBufferDataNormal *dgFilecacheEntryBufferDataNormalPtr;

typedef enum {
	DG_INP_MODE_NON = 0,
	DG_INP_MODE_Q = 1,
	DG_INP_MODE_A = 2,
	DG_INP_MODE_MAX = 3
} dgInputMode;

typedef enum {
	DG_INP_SE_TURN = 0,
	DG_INP_SE_Q_A = 1,
	DG_INP_SE_Q_B = 2,
	DG_INP_SE_Q_U = 3,
	DG_INP_SE_Q_R = 4,
	DG_INP_SE_Q_D = 5,
	DG_INP_SE_Q_L = 6,
	DG_INP_SE_OK = 7,
	DG_INP_SE_NG = 8,
	DG_INP_SE_QT_A = 9,
	DG_INP_SE_QT_B = 10,
	DG_INP_SE_QT_U = 11,
	DG_INP_SE_QT_R = 12,
	DG_INP_SE_QT_D = 13,
	DG_INP_SE_QT_L = 14,
	DG_INP_SE_BEAM_A = 15,
	DG_INP_SE_BEAM_B = 16,
	DG_INP_SE_A_A = 17,
	DG_INP_SE_A_B = 18,
	DG_INP_SE_A_U = 19,
	DG_INP_SE_A_R = 20,
	DG_INP_SE_A_D = 21,
	DG_INP_SE_A_L = 22,
	DG_INP_SE_BEAM_MISS = 23,
	DG_INP_SE_MISS = 24,
	DG_INP_SE_AT_A = 25,
	DG_INP_SE_AT_B = 26,
	DG_INP_SE_AT_U = 27,
	DG_INP_SE_AT_R = 28,
	DG_INP_SE_AT_D = 29,
	DG_INP_SE_AT_L = 30,
	DG_INP_SE_BEAM_COMBO_A = 31,
	DG_INP_SE_BEAM_COMBO_B = 32,
	DG_INP_SE_QC_DIRE = 33,
	DG_INP_SE_AC_DIRE = 34,
	DG_INP_SE_ACTION = 35,
	DG_INP_SE_ESCAPE = 36,
	DG_INP_SE_KR_BEAM = 37,
	DG_INP_SE_KR_BARRIER = 38,
	DG_INP_SE_MAX = 39
} dgInputSe;

typedef struct { // 0x8
	/* 0x0 */ int num;
	/* 0x4 */ dgSoundData *se_data;
} dgInputSeData;

enum {
	DG_INP_KEY_N = 0,
	DG_INP_KEY_A = 1,
	DG_INP_KEY_B = 2,
	DG_INP_KEY_U = 3,
	DG_INP_KEY_R = 4,
	DG_INP_KEY_D = 5,
	DG_INP_KEY_L = 6,
	DG_INP_KEY_MAX = 7
};

typedef Uint8 dgInputKey;

typedef enum {
	DG_INP_STAT_NOSIG = 1,
	DG_INP_STAT_WAIT = 2,
	DG_INP_STAT_NG = 4,
	DG_INP_STAT_OK = 8,
	DG_INP_STAT_SHOT_A = 16,
	DG_INP_STAT_SHOT_B = 32,
	DG_INP_STAT_SHOT_MISS = 64,
	INP_STAT_MAX = 65
} dgInputStatus;

typedef enum {
	DG_INP_QTYPE_BREAK = 0,
	DG_INP_QTYPE_DANCE = 1,
	DG_INP_QTYPE_SHOOT = 2,
	DG_INP_QTYPE_KIME = 3,
	DG_INP_QTYPE_RHYTHM = 4,
	DG_INP_QTYPE_RHYTHM_FREE = 5,
	DG_INP_QTYPE_MAX = 6
} dgInputQtype;

typedef enum {
	DG_INP_TIMING_START = 0,
	DG_INP_TIMING_OK_START = 1,
	DG_INP_TIMING_OK_END = 2,
	DG_INP_TIMING_END = 3,
	DG_INP_TIMING_MAX = 4
} dgInputTiming;

typedef struct { // 0x10
	/* 0x0 */ Sint16 qid;
	/* 0x2 */ Sint16 q_type;
	/* 0x4 */ Sint16 start_beat;
	/* 0x8 */ Sint16 *inp_ptr;
	/* 0xc */ Sint16 *enm_ptr;
} dgInputInitData;

typedef enum {
	DG_KARAOKE_TYPE_Q = 0,
	DG_KARAOKE_TYPE_A = 1,
	KARAOKE_TYPE_MAX = 2
} dgKaraokeType;

enum {
	DG_MAP_DSP_DIRECT = 0,
	DG_MAP_DSP_EASY = 1,
	DG_MAP_DSP_SIMPLE = 2,
	DG_MAP_DSP_WIRE = 3
};

typedef tagDgTexchData dgTexchData;
typedef tagDgTexchData *TDP;

enum {
	DGMOVIE_DSTTYPE_BACKGROUND = 0,
	DGMOVIE_DSTTYPE_TEXTURE = 1,
	DGMOVIE_DSTTYPE_EOE = 2
};

enum {
	DGMOVIE_FILETYPE_SFD = 1,
	DGMOVIE_FILETYPE_M1V = 1,
	DGMOVIE_FILETYPE_EOE = 2
};

enum DGMOVIE_CUE_CMD {
	DGMOVIE_CUE_CMD_NOP = 0,
	DGMOVIE_CUE_CMD_ENDLESS_LOOP = 1,
	DGMOVIE_CUE_CMD_LOOP = 2,
	DGMOVIE_CUE_CMD_EOE = 3
};

enum DGMOVIE_STAT {
	DGMOVIE_STAT_NOTCREATE = 0,
	DGMOVIE_STAT_STOP = 1,
	DGMOVIE_STAT_PREP = 2,
	DGMOVIE_STAT_WAIT = 3,
	DGMOVIE_STAT_PAUSE = 4,
	DGMOVIE_STAT_PLAY = 5,
	DGMOVIE_STAT_ERROR = 65535,
	DGMOVIE_STAT_EOE = 65536
};

enum {
	DGMOVIE_LOOP_OFF = 0,
	DGMOVIE_LOOP_ON = 1,
	DGMOVIE_LOOP_EOE = 2
};

enum {
	DGMOVIE_ENDCALLBACK_MODE_USERSTOP = 0,
	DGMOVIE_ENDCALLBACK_MODE_ENDSTOP = 1
};

enum {
	DGAUDIO_STAT_NOTCREATE = 0,
	DGAUDIO_STAT_STOP = 1,
	DGAUDIO_STAT_PREP = 2,
	DGAUDIO_STAT_WAIT = 3,
	DGAUDIO_STAT_PAUSE = 4,
	DGAUDIO_STAT_PLAY = 5,
	DGAUDIO_STAT_ERROR = 65535,
	DGAUDIO_STAT_EOE = 65536
};

enum {
	DGAUDIO_STM_MUSIC1 = 0,
	DGAUDIO_STM_MUSIC2 = 1,
	DGAUDIO_STM_VOICE1 = 2,
	DGAUDIO_STM_VOICE2 = 3,
	DGAUDIO_STM_NONE = -1,
	DGAUDIO_STM_EOE = 0
};

enum {
	DGAUDIO_CUE_CMD_NOP = 0,
	DGAUDIO_CUE_CMD_ENDLESS_LOOP = 1,
	DGAUDIO_CUE_CMD_LOOP = 2,
	DGAUDIO_CUE_CMD_EOE = 3
};

struct _dgStreamTimeSwitchCuePara { // 0x1c
	/* 0x00 */ Uint16 cueno;
	/* 0x04 */ char *fname;
	/* 0x08 */ Sint32 fmode;
	/* 0x0c */ Sint32 pid;
	/* 0x10 */ Sint32 iid;
	/* 0x14 */ Float time;
	/* 0x18 */ Sint32 stream;
};

typedef _dgStreamTimeSwitchCuePara dgStreamTimeSwitchCuePara;
typedef _dgStreamTimeSwitchCuePara *dgStreamTimeSwitchCueParaPtr;

enum {
	DGSTREAM_STAT_NOTCREATE = 0,
	DGSTREAM_STAT_STOP = 1,
	DGSTREAM_STAT_PREP = 2,
	DGSTREAM_STAT_WAIT = 3,
	DGSTREAM_STAT_PAUSE = 4,
	DGSTREAM_STAT_PLAY = 5,
	DGSTREAM_STAT_PRELOAD_RESERVED = 6,
	DGSTREAM_STAT_ERROR = 65535,
	DGSTREAM_STAT_EOE = 65536
};

enum {
	DGSTREAM_TYPE_MUSIC1 = 0,
	DGSTREAM_TYPE_MUSIC2 = 1,
	DGSTREAM_TYPE_VOICE1 = 2,
	DGSTREAM_TYPE_VOICE2 = 3,
	DGSTREAM_TYPE_MOVIE = 4,
	DGSTREAM_TYPE_MAX = 5,
	DGSTREAM_TYPE_NONE = -1,
	DGSTREAM_TYPE_EOE = 0
};

enum {
	DGSTREAM_KIND_MUSIC = 0,
	DGSTREAM_KIND_VOICE = 1,
	DGSTREAM_KIND_MOVIE = 2,
	DGSTREAM_KIND_AUDIO = 3,
	DGSTREAM_KIND_ALL = 4,
	DGSTREAM_KIND_EOE = 5
};

enum {
	DGSTREAM_TIMESWITCH_MUSIC = 0,
	DGSTREAM_TIMESWITCH_VOICE = 1,
	DGSTREAM_TIMESWITCH_MAX = 2,
	DGSTREAM_TIMESWITCH_NO_EOE = 3
};

enum {
	DGSTREAM_TIMESWITCH_STAT_FREE = 0,
	DGSTREAM_TIMESWITCH_STAT_WAITSTREAM = 1,
	DGSTREAM_TIMESWITCH_STAT_WAITSTART = 2,
	DGSTREAM_TIMESWITCH_STAT_ERROR = 65535,
	DGSTREAM_TIMESWITCH_STAT_EOE = 65536
};

enum {
	DGPRESTREAM_STAT_FREE = 0,
	DGPRESTREAM_STAT_ENTRY = 1,
	DGPRESTREAM_STAT_LOADING = 2,
	DGPRESTREAM_STAT_LOADEND = 3,
	DGPRESTREAM_STAT_LINK = 4,
	DGPRESTREAM_STAT_EOE = 5
};

enum {
	DGPRESTREAM_LOADSTAT_STOP = 0,
	DGPRESTREAM_LOADSTAT_LOADING = 1,
	DGPRESTREAM_LOADSTAT_EOE = 2
};

struct _dgPrestreamCue { // 0x50
	/* 0x00 */ Uint16 stat;
	/* 0x02 */ Uint16 fmode;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ char fname[36];
	/* 0x2c */ Sint32 pid;
	/* 0x30 */ Sint32 iid;
	/* 0x34 */ Uint32 serial;
	/* 0x38 */ Sint32 loadsize;
	/* 0x3c */ ADXF adxf;
	/* 0x40 */ void *loadadr;
	/* 0x44 */ Sint32 linkstm;
	/* 0x48 */ _dgPrestreamCue *prev;
	/* 0x4c */ _dgPrestreamCue *next;
};

typedef _dgPrestreamCue dgPrestreamCue;
typedef _dgPrestreamCue *dgPrestreamCuePtr;

struct _dgPrestreamLoadPara { // 0x1c
	/* 0x00 */ Uint16 stat;
	/* 0x04 */ Sint32 size;
	/* 0x08 */ Sint32 one;
	/* 0x0c */ Sint32 total;
	/* 0x10 */ Float start_timer;
	/* 0x14 */ Float wait_timer;
	/* 0x18 */ Sint32 adxf_stat;
};

typedef _dgPrestreamLoadPara dgPrestreamLoadPara;
typedef _dgPrestreamLoadPara *dgPrestreamLoadParaPtr;

struct _dgPrestreamSystemInfo { // 0x2b4
	/* 0x000 */ Sint32 load_stream;
	/* 0x004 */ Uint32 serial_master;
	/* 0x008 */ dgPrestreamCue cue_buf[8];
	/* 0x288 */ dgPrestreamCuePtr cue_master;
	/* 0x28c */ dgPrestreamLoadPara loadpara;
	/* 0x2a8 */ Float warningcnt;
	/* 0x2ac */ Sint32 preloadsize;
	/* 0x2b0 */ GWHWND debwin_info;
};

typedef _dgPrestreamSystemInfo dgPrestreamSystemInfo;
typedef _dgPrestreamSystemInfo *dgPrestreamSystemInfoPtr;

typedef struct { // 0x8
	/* 0x0 */ void *ptr;
	/* 0x4 */ int malloc_flag;
} dgBinRbInfo;

enum {
	enum_shev_return = 0,
	enum_shev_chkbtl = 1,
	enum_shev_chkcds = 2,
	enum_shev_chkget = 3,
	enum_shev_chkq = 4,
	enum_shev_chkstep = 5,
	enum_shev_clrgetall = 6,
	enum_shev_wait_floadend = 7,
	enum_shev_wait_ploadend = 8,
	enum_shev_wait_qend = 9,
	enum_shev_se_defall = 10,
	enum_shev_start = 11,
	enum_shev_startq = 12,
	enum_shev_chkinp = 13,
	enum_shev_clrget = 14,
	enum_shev_mtr_off = 15,
	enum_shev_mtr_on = 16,
	enum_shev_se_def = 17,
	enum_shev_premusic = 18,
	enum_shev_prevoice = 19,
	enum_shev_sound_now = 20,
	enum_shev_file_mlt = 21,
	enum_shev_file_afsm = 22,
	enum_shev_file_afsv = 23,
	enum_shev_jmp = 24,
	enum_shev_jsr = 25,
	enum_shev_se_reset = 26,
	enum_shev_se_add = 27,
	enum_shev_se_del = 28,
	enum_shev_file_osb = 29,
	enum_shev_file_msb = 30,
	enum_shev_file_mpb = 31,
	enum_shev_file_fpb = 32,
	enum_shev_prelink = 33,
	enum_shev_music = 34,
	enum_shev_sound = 35,
	enum_shev_voice = 36,
	enum_shev_ifeq = 37,
	enum_shev_ifge = 38,
	enum_shev_ifgt = 39,
	enum_shev_ifle = 40,
	enum_shev_iflt = 41,
	enum_shev_ifneq = 42,
	enum_shev_seq = 43,
	enum_shev_bratbl = 44,
	enum_shev_bsrtbl = 45,
	enum_shev_bratbl2 = 46,
	enum_shev_bsrtbl2 = 47,
	enum_shev_input = 48,
	enum_shev_input_enm = 49,
	enum_shev_midiinit = 50,
	enum_shev_waitbeat = 51,
	enum_shev_rateboss = 52,
	enum_shev_rateinit = 53,
	enum_shev_ratekime = 54,
	enum_shev_ratenorm = 55,
	enum_shev_ratesecret = 56,
	enum_shev_chkcmb = 57,
	enum_shev_chkkey = 58,
	enum_shev_soundcmb = 59,
	enum_shev_sounddir = 60,
	enum_shev_secret = 61,
	enum_shev_steplv1 = 62,
	enum_shev_steplv2 = 63,
	enum_shev_boss = 64,
	enum_shev_skip = 65,
	enum_shev_file_afsb = 66,
	enum_shev_chkshota = 67,
	enum_shev_chkshotb = 68,
	enum_shev_chkshotm = 69,
	enum_shev_afs_fpb = 70,
	enum_shev_afs_mpb = 71,
	enum_shev_afs_msb = 72,
	enum_shev_afs_osb = 73,
	enum_shev_calc_btllv = 74,
	enum_shev_walkse = 75,
	enum_shev_sounddirab = 76,
	enum_shev_file_caption = 77,
	enum_shev_caption = 78,
	enum_shev_karaoke = 79,
	enum_shev_reset_result = 80,
	enum_shev_file_sfd = 81,
	enum_shev_file_m1v = 82,
	enum_shev_max = 83
};

typedef enum {
	DG_SH_LABEL_TYPE_MOV = 0,
	DG_SH_LABEL_TYPE_BTL = 1,
	DG_SH_LABEL_TYPE_STEP = 2,
	DG_SH_LABEL_TYPE_Q = 3,
	DG_SH_LABEL_TYPE_PAT = 4,
	DG_SH_LABEL_TYPE_MAX = 5
} dgShLabelType;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgShHeader dgShHeader;

typedef enum {
	DG_SH_TOOL_TYPE_GAME = 0,
	DG_SH_TOOL_TYPE_SUPERH = 1,
	DG_SH_TOOL_TYPE_OTHER = 2,
	DG_SH_TOOL_MAX = 3
} dgShToolType;

typedef enum {
	DG_SH_CDS_LEVEL_L = 0,
	DG_SH_CDS_LEVEL_M = 1,
	DG_SH_CDS_LEVEL_S = 2,
	DG_SH_CDS_LEVEL_N = 3,
	DG_SH_CDS_LEVEL_MAX = 4
} dgShCdsLevel;

typedef enum {
	DG_SH_WALK_LEVEL_L = 0,
	DG_SH_WALK_LEVEL_M = 1,
	DG_SH_WALK_LEVEL_S = 2,
	DG_SH_WALK_LEVEL_MAX = 3
} dgShWalkLevel;

typedef enum {
	DG_SH_STAT_STOP = 0,
	DG_SH_STAT_WAIT = 1,
	DG_SH_STAT_PREP = 2,
	DG_SH_STAT_PLAY = 3,
	DG_SH_STAT_MAX = 4
} dgShStat;

typedef enum {
	DG_SH_SEQ_TYPE_MOV = 0,
	DG_SH_SEQ_TYPE_BTL = 1,
	DG_SH_SEQ_TYPE_QA = 2,
	DG_SH_SEQ_TYPE_BRK = 3,
	DG_SH_SEQ_TYPE_MAX = 4
} dgShSeqType;

typedef enum {
	DG_SH_BLOCK_MODE_NORMAL = 0,
	DG_SH_BLOCK_MODE_BOSS = 1,
	DG_SH_BLOCK_MODE_MAX = 2
} dgShBlockMode;

enum {
	DG_SOUND_EV_CMD_NOP = 0,
	DG_SOUND_EV_CMD_PLAY = 1,
	DG_SOUND_EV_CMD_STOP = 2,
	DG_SOUND_EV_CMD_PREP = 3,
	DG_SOUND_EV_CMD_PRESTREAM = 4,
	DG_SOUND_EV_CMD_STOPSTREAM_ALL = 5,
	DG_SOUND_EV_CMD_MAX = 6
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgShSpy dgShSpy;
typedef void (*dgShSpyMovCallback)(/* parameters unknown */);
typedef void (*dgShSpyBtlCallback)(/* parameters unknown */);
typedef void (*dgShSpyQaCallback)(/* parameters unknown */);
typedef void (*dgShSpyBrkCallback)(/* parameters unknown */);
typedef void (*dgShSpyDestructor)(/* parameters unknown */);
typedef Bool (*UL_VIB_SEARCH_CALLBACK)(/* parameters unknown */);

typedef enum {
	UL_VIB_TVR_DUALMODE_ALL = 0,
	UL_VIB_TVR_DUALMODE_EACH = 1
} ulVibTvrDualMode;

typedef enum {
	UL_VIB_UNIT_ID_DUALSHOCK2_0 = 0,
	UL_VIB_UNIT_ID_DUALSHOCK2_1 = 1,
	UL_VIB_UNIT_ID_USBTVR = 2,
	UL_VIB_UNIT_ID_MAX = 3
} ulVibUnitID;

typedef struct { // 0x8
	/* 0x0 */ int count;
	/* 0x4 */ int power;
} ulVibData;

typedef struct { // 0x10
	/* 0x0 */ int id;
	/* 0x4 */ int data_num;
	/* 0x8 */ ulVibData data[1];
} ulVibUnitData;

typedef struct { // 0x8
	/* 0x0 */ int num;
	/* 0x4 */ ulVibUnitData *unit[1];
} ulVibPackData;

typedef enum {
	KJ_FONT_FRAME_NOTHING = 0,
	KJ_FONT_FRAME_NORMAL = 1,
	KJ_FONT_FRAME_EXTEND = 2
} kjFontFrame;

typedef enum {
	KJ_FONT_TYPE_KANA = 0,
	KJ_FONT_TYPE_WEST = 1
} kjFontType;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x24
	/* 0x00 */ kjFontFrame zenFrame;
	/* 0x04 */ kjFontFrame hanFrame;
	/* 0x08 */ int zenExtendMergin;
	/* 0x0c */ int hanExtendMergin;
	/* 0x10 */ char *pZenFontFile;
	/* 0x14 */ char *pHanFontFile;
	/* 0x18 */ char *pWorkBuf;
	/* 0x1c */ kjFontType font_type;
	/* 0x20 */ Uint8 EORpriority;
} kjFontInitParam;

enum {
	VOICE_GAMEOVER = 0,
	VOICE_CONTINUE = 1,
	VOICE_GAMEEND = 2,
	VOICE_PERFECT = 3,
	VOICE_GOOD = 4,
	VOICE_BAD = 5,
	VOICE_MAX = 6
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x8
	/* 0x0 */ GameLoadStatus status;
	/* 0x4 */ GameLoad *next;
} GameLoad;

typedef struct { // 0x30
	/* 0x00 */ Sint8 movie_prep_flag;
	/* 0x01 */ Sint8 sub_block_no_req;
	/* 0x04 */ int frame;
	/* 0x08 */ int count;
	/* 0x0c */ Sint32 base_beat_req;
	/* 0x10 */ dgShSpy *sh_spy;
	/* 0x14 */ GameBlockData *data;
	/* 0x18 */ void *file_ptr[1];
	/* 0x1c */ Float demo_beat;
	/* 0x20 */ Uint32 game_frame;
	/* 0x24 */ Sint32 prev_measure;
	/* 0x28 */ GameLoad *load_top;
	/* 0x2c */ GameLoad *load_end;
} BlockTask;

typedef struct { // 0x4
	/* 0x0 */ int dummy;
} BlockTask2;

typedef struct { // 0x4c
	/* 0x00 */ Sint8 round_clear_flag;
	/* 0x01 */ Sint8 game_over_req;
	/* 0x02 */ Sint8 block_no;
	/* 0x03 */ Sint8 max_block_no;
	/* 0x04 */ Sint8 sub_block_no;
	/* 0x05 */ Sint8 link_wait_count;
	/* 0x06 */ Sint8 load_ir_lpr_done;
	/* 0x07 */ Sint8 first_entry_done;
	/* 0x08 */ Sint8 mode;
	/* 0x0a */ Sint16 start_pno;
	/* 0x0c */ Sint16 nb_pno;
	/* 0x10 */ PlayerType mem_player_type;
	/* 0x14 */ dgCharNo mem_mic_no;
	/* 0x18 */ GameStatus status;
	/* 0x1c */ Sint32 frame;
	/* 0x20 */ Float gameover_beat;
	/* 0x24 */ Float beat;
	/* 0x28 */ Sint32 base_beat;
	/* 0x2c */ void *sh_ptr;
	/* 0x30 */ void *sh_spy_ptr;
	/* 0x34 */ void *clp_init_ptr;
	/* 0x38 */ GWHWND hwnd;
	/* 0x3c */ void (*round_clear_callback)(/* parameters unknown */);
	/* 0x40 */ Sint16 *voice_tbl;
	/* 0x44 */ void *pause_task;
	/* 0x48 */ void *noise_task;
} GameTask;

typedef struct { // 0x1
	/* 0x0 */ Sint8 mode;
} ClpEntryTask;

typedef struct { // 0x30
	/* 0x00 */ Sint8 loading_flag;
	/* 0x01 */ Sint8 data_type;
	/* 0x04 */ GameLoad *game_load_entry_ptr;
	/* 0x08 */ char *fname[3];
	/* 0x14 */ Uint32 serial_id[3];
	/* 0x20 */ void *ptr[3];
	/* 0x2c */ void *child_task;
} LoadTask;

typedef struct { // 0xc
	/* 0x0 */ int loading_flag;
	/* 0x4 */ int start_pno;
	/* 0x8 */ int nb_pno;
} LoadPartitionTask;

typedef enum {
	MTP_SHAPE_ERROR_MTP_NO_ABS = -3,
	MTP_SHAPE_ERROR_MTP_NO_SHAPE_OPT = -2,
	MTP_SHAPE_ERROR_MTP_ILLIGAL_HANDLE = -1,
	MTP_SHAPE_ERROR_NONE = 0
} MtpShapeError;

// warning: multiple differing types with the same name (descriptor not equal)
typedef MtpHandle MtpHandle;

typedef enum {
	CDS_LIMIT_START = 8,
	CDS_LIMIT_NUMBER1 = 15,
	CDS_LIMIT_NUMBER2 = 21,
	CDS_LIMIT_MAX = 22
} CdsBreakNumber;

typedef enum {
	CDS_LEVEL_FAULT = -1,
	CDS_LEVEL_0 = 0,
	CDS_LEVEL_1 = 1,
	CDS_LEVEL_2 = 2,
	CDS_LEVEL_MAXIMUM = 3,
	CDS_LEVEL_END = 4
} CdsBreakLevel;

typedef Sint8 CdsLvlTbl;

typedef struct { // 0xc
	/* 0x0 */ Sint8 max_member;
	/* 0x1 */ Sint8 grid_x;
	/* 0x2 */ Sint8 grid_z;
	/* 0x3 */ Sint8 reserve;
	/* 0x4 */ float scale_x;
	/* 0x8 */ float scale_z;
} CdsMtpOption;

typedef struct { // 0x2
	/* 0x0 */ Sint8 index_x;
	/* 0x1 */ Sint8 index_z;
} CdsMtpGridData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef CdsGridHandle CdsGridHandle;

typedef struct { // 0x1c
	/* 0x00 */ Bool force_set;
	/* 0x04 */ Bool next_data;
	/* 0x08 */ CdsLvlTbl level_tbl[4];
	/* 0x0c */ Sint32 break_mtp_tbl[4];
} CdsBreakTableData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef GameLoad GameLoad;

typedef enum {
	CHARMAN_BATTLE_NONE = 0,
	CHARMAN_BATTLE_FINISH = 1,
	CHARMAN_BATTLE_DANCE = 2,
	CHARMAN_BATTLE_SHOOTING = 3,
	CHARMAN_BATTLE_RYTHM = 4,
	CHARMAN_BATTLE_RHYTHM = 4,
	CHARMAN_BATTLE_END = 5
} CharManBattleMode;

typedef enum {
	CHARMAN_DEFMOT_WAIT = 0,
	CHARMAN_DEFMOT_WORST = 1,
	CHARMAN_DEFMOT_ADD_MEMBER = 2,
	CHARMAN_DEFMOT_RETURN_MEMBER = 3,
	CHARMAN_DEFMOT_SUCCESS = 4,
	CHARMAN_DEFMOT_NEWCOMER = 5,
	CHARMAN_DEFMOT_END = 6
} CharManDefaultMotionIndex;

typedef enum {
	CHARMAN_UHYAHOO_ULALA = 0,
	CHARMAN_UHYAHOO_EX1 = 1,
	CHARMAN_UHYAHOO_EX2 = 2,
	CHARMAN_UHYAHOO_PEOPLE = 3,
	CHARMAN_UHYAHOO_BASIC_INDEX_END = 4,
	CHARMAN_UHYAHOO_WIN_START = 0,
	CHARMAN_UHYAHOO_ULALA_WIN = 0,
	CHARMAN_UHYAHOO_EX1_WIN = 1,
	CHARMAN_UHYAHOO_EX2_WIN = 2,
	CHARMAN_UHYAHOO_PEOPLE_WIN = 3,
	CHARMAN_UHYAHOO_WIN_END = 4,
	CHARMAN_UHYAHOO_LOSE_START = 4,
	CHARMAN_UHYAHOO_ULALA_LOSE = 4,
	CHARMAN_UHYAHOO_EX1_LOSE = 5,
	CHARMAN_UHYAHOO_EX2_LOSE = 6,
	CHARMAN_UHYAHOO_PEOPLE_LOSE = 7,
	CHARMAN_UHYAHOO_LOSE_END = 8,
	CHARMAN_UHYAHOO_END = 8
} CharManUhyahooMotionIndex;

typedef enum {
	CHARMAN_MOVE_UHYAHOO = 0,
	CHARMAN_MOVE_LOOP = 1,
	CHARMAN_MOVE_LOOP2 = 2,
	CHARMAN_MOVE_LOOPENDNOW = 3,
	CHARMAN_MOVE_LOOPEND = 4,
	CHARMAN_MOVE_STOP = 5,
	CHARMAN_MOVE_FINISH = 6,
	CHARMAN_MOVE_END = 7
} CharManMoveMode;

typedef enum {
	CHARMAN_USE_CUSTOM_LEVEL = -1,
	CHARMAN_USE_DEFAULT = 0,
	CHARMAN_DEFAULT_MOVE_LEVEL = 0,
	CHARMAN_DEFAULT_CDS_LEVEL = 1,
	CHARMAN_DEFAULT_LEVEL_END = 2
} CharManDefaultLevel;

typedef struct { // 0x8
	/* 0x0 */ Sint32 mot_iid;
	/* 0x4 */ void* (*func_p)(/* parameters unknown */);
} CharFinishData;

typedef struct { // 0xc
	/* 0x0 */ char *cdr_filename_p;
	/* 0x4 */ Sint32 default_mtn_iid;
	/* 0x8 */ void* (*round_func_p)(/* parameters unknown */);
} CharRoundData;

typedef struct { // 0x8
	/* 0x0 */ CharManBattleMode mode;
	/* 0x4 */ void *battle_data_p;
} CharManBattleData;

typedef struct { // 0x8
	/* 0x0 */ dgCharNo member_num;
	/* 0x4 */ void* (*init_func_p)(/* parameters unknown */);
} CharDebugMember;

typedef enum {
	COSROOM_INIT_MANUAL = 0,
	COSROOM_INIT_AUTO = 1,
	COSROOM_INIT_MAX = 2
} CosRoomInitMode;

typedef enum {
	COSROOM_ITEM_PL_MIKE = 0,
	COSROOM_ITEM_U_FLYPAN = 1,
	COSROOM_ITEM_ICE = 2,
	COSROOM_ITEM_U_WHIPPER = 3,
	COSROOM_ITEM_CANDY = 4,
	COSROOM_ITEM_CHOCHIN = 5,
	COSROOM_ITEM_U_OTAMA = 6,
	COSROOM_ITEM_U_JUG = 7,
	COSROOM_ITEM_SENSU = 8,
	COSROOM_ITEM_ROSE = 9,
	COSROOM_ITEM_CORN = 10,
	COSROOM_ITEM_NEGI = 11,
	COSROOM_ITEM_MAX = 12
} CosRoomItemType;

// warning: multiple differing types with the same name (descriptor not equal)
typedef CosRoom CosRoom;

typedef enum {
	LCD_SICON_LOGO = 0,
	LCD_SICON_LOAD = 1,
	LCD_SICON_SAVE = 2,
	LCD_SICON_MAX = 3
} LcdSystemIconType;

typedef enum {
	LCD_PORT1 = 0,
	LCD_PORT2 = 1,
	LCD_PORT3 = 2,
	LCD_PORT4 = 3,
	LCD_PORT_ALL = 4,
	LCD_PORT_MAX = 4
} LcdNumber;

typedef enum {
	MAKUMA_TYPE_ADV = 0,
	MAKUMA_TYPE_R1 = 1,
	MAKUMA_TYPE_R2 = 2,
	MAKUMA_TYPE_R3 = 3,
	MAKUMA_TYPE_R4 = 4,
	MAKUMA_TYPE_R5 = 5,
	MAKUMA_TYPE_R6 = 6,
	MAKUMA_TYPE_MAX = 7
} MakumaType;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x2c
	/* 0x00 */ kjFontFrame zenFrame;
	/* 0x04 */ kjFontFrame hanFrame;
	/* 0x08 */ int zenExtendMergin;
	/* 0x0c */ int hanExtendMergin;
	/* 0x10 */ char *pZenFontFile;
	/* 0x14 */ char *pHanFontFile;
	/* 0x18 */ char *pWorkBuf;
	/* 0x1c */ kjFontType font_type;
	/* 0x20 */ Uint8 EORpriority;
	/* 0x24 */ Bool useEORpriority;
	/* 0x28 */ int zen_tex_width;
} kjFontInitParam;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgFontKaraoke dgFontKaraoke;

enum {
	DGVBLANKTIMER_PAUSESTAT_OFF = 0,
	DGVBLANKTIMER_PAUSESTAT_ON = 1,
	DGVBLANKTIMER_PAUSESTAT_EOE = 2
};

enum {
	DGVBLANKTIMER_NO_GLOBAL = 0,
	DGVBLANKTIMER_NO_STREAM = 1,
	DGVBLANKTIMER_NO_PAUSE = 2,
	DGVBLANKTIMER_NO_LOCAL1 = 3,
	DGVBLANKTIMER_NO_LOCAL2 = 4,
	DGVBLANKTIMER_NO_LOCAL3 = 5,
	DGVBLANKTIMER_MAX = 6,
	DGVBLANKTIMER_EOE = 7
};

typedef struct { // 0x8
	/* 0x0 */ int num;
	/* 0x4 */ dgPadDig *com_tbl;
} SeqGalaxyData;

typedef struct { // 0x1c
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 prev_round_no;
	/* 0x02 */ Sint8 round_no;
	/* 0x03 */ Sint8 block_no;
	/* 0x04 */ Sint8 sub_block_no;
	/* 0x05 */ Sint8 play2_flag;
	/* 0x08 */ void *child;
	/* 0x0c */ void *ptr;
	/* 0x10 */ char *fname;
	/* 0x14 */ Uint32 serial_id;
	/* 0x18 */ Uint32 prev_remain_mem;
} SeqTask;

typedef struct { // 0x34
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 demo_no;
	/* 0x02 */ Sint8 game_flag;
	/* 0x04 */ SeqMessage message;
	/* 0x08 */ SeqGamePlayMode game_play_mode;
	/* 0x0c */ Uint32 serial_id;
	/* 0x10 */ Float demo_beat;
	/* 0x14 */ void *child;
	/* 0x18 */ Sint8 galaxy_flag[3];
	/* 0x1b */ Sint8 galaxy_judge_mode[3];
	/* 0x20 */ int count;
	/* 0x24 */ int load_count;
	/* 0x28 */ int game_start_flag;
	/* 0x2c */ int menu_key_count;
	/* 0x30 */ int wait_frame;
} SeqTitleLoopTask;

typedef struct { // 0x8
	/* 0x0 */ Sint8 round_no;
	/* 0x1 */ Sint8 block_no;
	/* 0x4 */ Float beat;
} SeqDemoData;

typedef struct { // 0x8
	/* 0x0 */ Bool round_connect_enable_flag;
	/* 0x4 */ Bool round_loop_enable_flag;
} SeqEditParam;

enum {
	tl_mode_logo_init = 0,
	tl_mode_logo_loop = 1,
	tl_mode_movie_init = 2,
	tl_mode_movie_loop = 3,
	tl_mode_title_init = 4,
	tl_mode_title_wait = 5,
	tl_mode_title_loop = 6,
	tl_mode_load_init = 7,
	tl_mode_load_loop = 8,
	tl_mode_makuma_init = 9,
	tl_mode_makuma_loop = 10,
	tl_mode_memcheck_init = 11,
	tl_mode_memcheck_loop = 12,
	tl_mode_game_init = 13,
	tl_mode_game_wait = 14,
	tl_mode_game_loop = 15,
	tl_mode_save_init = 16,
	tl_mode_save_loop = 17,
	tl_mode_cosroom_init = 18,
	tl_mode_cosroom_loop = 19,
	tl_mode_logo2_init = 20,
	tl_mode_logo2_loop = 21,
	tl_mode_max = 22
};

enum {
	seq_mode_kj_req = 0,
	seq_mode_kj_wait = 1,
	seq_mode_mlt_req = 2,
	seq_mode_mlt_wait = 3,
	seq_mode_nowload_req = 4,
	seq_mode_nowload_wait = 5,
	seq_mode_cdbafs_req = 6,
	seq_mode_cdbafs_wait = 7,
	seq_mode_cdbres_req = 8,
	seq_mode_cdbres_wait = 9,
	seq_mode_warn_cap_req = 10,
	seq_mode_warn_cap_wait = 11,
	seq_mode_vminit = 12,
	seq_mode_vmload_req = 13,
	seq_mode_vmload_wait = 14,
	seq_mode_start = 15,
	seq_mode_max = 16
};

enum {
	MARK_CMD_OFF = 0,
	MARK_CMD_ON = 1,
	MARK_CMD_BONUS = 2,
	MARK_CMD_TO_STAR = 3,
	MARK_CMD_Q = 4,
	MARK_CMD_A = 5,
	MARK_CMD_LOSS = 6,
	MARK_CMD_NEWRATE = 7,
	MARK_CMD_DISP_RATE = 8,
	MARK_CMD_HIDE_RATE = 9,
	MARK_CMD_MAX = 10
};

typedef struct { // 0x8
	/* 0x0 */ Sint8 req_flag;
	/* 0x1 */ Sint8 cmd;
	/* 0x4 */ Sint32 ticks;
} MarkBuf;

typedef struct { // 0x44
	/* 0x00 */ Sint8 req_no;
	/* 0x01 */ Sint8 exe_no;
	/* 0x04 */ MarkBuf buf[8];
} MarkCtrl;

typedef struct { // 0x70
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 audi_mode;
	/* 0x02 */ Sint8 mark_on;
	/* 0x03 */ Sint8 boss_as_break;
	/* 0x04 */ Sint8 mark_type;
	/* 0x05 */ Sint8 mark_num;
	/* 0x06 */ Sint16 disp_rate;
	/* 0x08 */ Sint16 mark_x;
	/* 0x0a */ Sint16 mark_y;
	/* 0x0c */ Sint16 rate_x;
	/* 0x0e */ Sint16 rate_y;
	/* 0x10 */ Sint16 str_x;
	/* 0x12 */ Sint16 str_y;
	/* 0x14 */ Sint16 icon_x;
	/* 0x16 */ Sint16 icon_y;
	/* 0x18 */ Float ooz;
	/* 0x1c */ dgShSpy *sh_spy;
	/* 0x20 */ void *indicate_task;
	/* 0x24 */ MarkCtrl mark_ctrl;
	/* 0x68 */ AudiRateData *data;
	/* 0x6c */ GWHWND hwnd;
} AudiTask;

typedef struct { // 0xc
	/* 0x0 */ AudiTask *parent;
	/* 0x4 */ Sint32 qno;
	/* 0x8 */ Sint32 end_ticks;
} ChkQTask;

typedef int _iconVu0IVECTOR[4];
typedef float _iconVu0FVECTOR[4];

typedef struct { // 0x3c4
	/* 0x000 */ unsigned char Head[4];
	/* 0x004 */ short unsigned int Reserv1;
	/* 0x006 */ short unsigned int OffsLF;
	/* 0x008 */ unsigned int Reserv2;
	/* 0x00c */ unsigned int TransRate;
	/* 0x010 */ _iconVu0IVECTOR BgColor[4];
	/* 0x050 */ _iconVu0FVECTOR LightDir[3];
	/* 0x080 */ _iconVu0FVECTOR LightColor[3];
	/* 0x0b0 */ _iconVu0FVECTOR Ambient;
	/* 0x0c0 */ unsigned char TitleName[68];
	/* 0x104 */ unsigned char FnameView[64];
	/* 0x144 */ unsigned char FnameCopy[64];
	/* 0x184 */ unsigned char FnameDel[64];
	/* 0x1c4 */ unsigned char Reserve3[512];
} sceMcIconSys;

typedef struct { // 0x40
	/* 0x00 */ struct { // 0x8
		/* 0x00 */ unsigned char Resv2;
		/* 0x01 */ unsigned char Sec;
		/* 0x02 */ unsigned char Min;
		/* 0x03 */ unsigned char Hour;
		/* 0x04 */ unsigned char Day;
		/* 0x05 */ unsigned char Month;
		/* 0x06 */ short unsigned int Year;
	} _Create;
	/* 0x08 */ struct { // 0x8
		/* 0x08 */ unsigned char Resv2;
		/* 0x09 */ unsigned char Sec;
		/* 0x0a */ unsigned char Min;
		/* 0x0b */ unsigned char Hour;
		/* 0x0c */ unsigned char Day;
		/* 0x0d */ unsigned char Month;
		/* 0x0e */ short unsigned int Year;
	} _Modify;
	/* 0x10 */ unsigned int FileSizeByte;
	/* 0x14 */ short unsigned int AttrFile;
	/* 0x16 */ short unsigned int Reserve1;
	/* 0x18 */ unsigned int Reserve2;
	/* 0x1c */ unsigned int PdaAplNo;
	/* 0x20 */ unsigned char EntryName[32];
} sceMcTblGetDir;

typedef struct { // 0x8
	/* 0x0 */ Uint16 year;
	/* 0x2 */ Uint8 month;
	/* 0x3 */ Uint8 day;
	/* 0x4 */ Uint8 hour;
	/* 0x5 */ Uint8 minute;
	/* 0x6 */ Uint8 second;
	/* 0x7 */ Uint8 dayofweek;
} BUS_TIME;

typedef struct { // 0x38
	/* 0x00 */ Uint8 volume[32];
	/* 0x20 */ Uint16 total_blocks;
	/* 0x22 */ Uint16 total_user_blocks;
	/* 0x24 */ Uint16 free_blocks;
	/* 0x26 */ Uint16 free_user_blocks;
	/* 0x28 */ Uint16 total_exe_blocks;
	/* 0x2a */ Uint16 free_exe_blocks;
	/* 0x2c */ Uint16 block_size;
	/* 0x2e */ Uint16 icon_no;
	/* 0x30 */ BUS_TIME time;
} BUS_DISKINFO;

typedef struct { // 0x14
	/* 0x00 */ Uint32 filesize;
	/* 0x04 */ Uint16 blocks;
	/* 0x06 */ Uint8 type;
	/* 0x07 */ Uint8 copyflag;
	/* 0x08 */ Uint16 headerofs;
	/* 0x0a */ BUS_TIME time;
} BUS_FILEINFO;

typedef struct { // 0x60
	/* 0x00 */ char vms_comment[18];
	/* 0x12 */ char btr_comment[34];
	/* 0x34 */ Uint8 game_name[16];
	/* 0x44 */ void *icon_palette;
	/* 0x48 */ void *icon_data;
	/* 0x4c */ Uint16 icon_num;
	/* 0x4e */ Uint16 icon_speed;
	/* 0x50 */ void *visual_data;
	/* 0x54 */ Uint16 visual_type;
	/* 0x56 */ Uint16 reserved;
	/* 0x58 */ void *save_data;
	/* 0x5c */ Uint32 save_size;
} BUS_BACKUPFILEHEADER;

typedef struct { // 0x400
	/* 0x000 */ char vms_comment[16];
	/* 0x010 */ Uint8 mono_icon[128];
	/* 0x090 */ Uint16 color_icon_palette[16];
	/* 0x0b0 */ Uint8 color_icon[512];
	/* 0x2b0 */ Uint8 reserved[332];
	/* 0x3fc */ Uint32 aligndata;
} BUS_VOLUMEICONFILE;

typedef void (*BU_INITCALLBACK)(/* parameters unknown */);
typedef Sint32 (*BU_COMPLETECALLBACK)(/* parameters unknown */);
typedef Sint32 (*BU_PROGRESSCALLBACK)(/* parameters unknown */);
typedef Sint32 (*UL_MC_COMPLETE_CALLBACK)(/* parameters unknown */);
typedef Sint32 (*UL_MC_PROGRESS_CALLBACK)(/* parameters unknown */);

typedef struct { // 0x20
	/* 0x00 */ char *dir_name;
	/* 0x04 */ void *icon_sys_buf;
	/* 0x08 */ void *icon_list_buf;
	/* 0x0c */ size_t icon_list_size;
	/* 0x10 */ void *icon_copy_buf;
	/* 0x14 */ size_t icon_copy_size;
	/* 0x18 */ void *icon_delete_buf;
	/* 0x1c */ size_t icon_delete_size;
} ulMcApplicationInfo;

typedef enum {
	DG_BUP_DRIVE_A1 = 0,
	DG_BUP_DRIVE_A2 = 1,
	DG_BUP_DRIVE_B1 = 2,
	DG_BUP_DRIVE_B2 = 3,
	DG_BUP_DRIVE_C1 = 4,
	DG_BUP_DRIVE_C2 = 5,
	DG_BUP_DRIVE_D1 = 6,
	DG_BUP_DRIVE_D2 = 7
} dgBupDrive;

typedef struct { // 0x74
	/* 0x00 */ char *fname;
	/* 0x04 */ Sint32 flag;
	/* 0x08 */ Bool debug_flag;
	/* 0x0c */ void *save_img;
	/* 0x10 */ Sint32 block_num;
	/* 0x14 */ BUS_BACKUPFILEHEADER hdr;
} dgBupHandle;

typedef struct { // 0x8
	/* 0x0 */ void *save_data;
	/* 0x4 */ Uint32 save_size;
} dgBupInitData;

typedef void dgBupReqCallback(/* parameters unknown */);

enum {
	BUP_SECRET_R11_START = 0,
	BUP_SECRET_R12_START = 6,
	BUP_SECRET_R21_START = 7,
	BUP_SECRET_R22_START = 12,
	BUP_SECRET_R23_START = 15,
	BUP_SECRET_R31_START = 17,
	BUP_SECRET_R41_START = 26,
	BUP_SECRET_R42_START = 33,
	BUP_SECRET_R43_START = 76,
	BUP_SECRET_R44_START = 76,
	BUP_SECRET_R51_START = 76,
	BUP_SECRET_R52_START = 77,
	BUP_SECRET_R61_START = 82,
	BUP_SECRET_R62_START = 84,
	BUP_SECRET_MAX = 85
};

typedef struct { // 0x8
	/* 0x0 */ int num;
	/* 0x4 */ Sint8 *start_no;
} BupSecret;

typedef struct { // 0x10
	/* 0x0 */ Sint32 id;
	/* 0x4 */ Sint8 dummy[11];
	/* 0xf */ Sint8 sound_mode;
} FlagHeader;

typedef struct { // 0x10
	/* 0x0 */ Sint8 vib_mode;
	/* 0x1 */ Sint8 kashi_mode;
	/* 0x2 */ Sint8 key[6][2];
	/* 0xe */ Sint8 voice_volume;
	/* 0xf */ Sint8 music_volume;
} FlagOption;

typedef struct { // 0x98
	/* 0x00 */ Uint32 game_play_count;
	/* 0x04 */ Uint32 round_play_count[12];
	/* 0x34 */ Uint8 voice_history[6][16];
	/* 0x94 */ Uint32 r0_play_count;
} FlagUpdateSoftReset;

typedef struct { // 0xc4
	/* 0x00 */ Uint8 catalog_entry[64];
	/* 0x40 */ Uint8 secret_input[16];
	/* 0x50 */ Uint8 costume_player_entry[8];
	/* 0x58 */ Uint8 costume_item_entry[8];
	/* 0x60 */ Uint8 text_adv[48];
	/* 0x90 */ Sint16 game_clear_num;
	/* 0x92 */ Sint16 round_clear_level;
	/* 0x94 */ Sint16 round_clear_num[12];
	/* 0xac */ Sint16 round_max_audirate[12];
} FlagOther;

typedef struct { // 0x200
	/* 0x000 */ FlagHeader header;
	/* 0x010 */ FlagOption option;
	/* 0x020 */ Sint8 dummy0[0];
	/* 0x020 */ FlagUpdateSoftReset update_softreset;
	/* 0x0b8 */ Sint8 dummy1[72];
	/* 0x100 */ FlagOther other;
	/* 0x1c4 */ Sint8 dummy2[60];
} FlagData;

typedef struct { // 0x18
	/* 0x00 */ Sint8 pull_out_flag;
	/* 0x04 */ dgBupDrive drive;
	/* 0x08 */ int no;
	/* 0x0c */ dgPadDig ok_dig;
	/* 0x10 */ dgPadDig cancel_dig;
	/* 0x14 */ Sint8 *err;
} WarnTask;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x10
	/* 0x0 */ GWHWND hwnd;
	/* 0x4 */ int catalog_no;
	/* 0x8 */ int costume_no;
	/* 0xc */ int item_no;
} BupDebugTask;

typedef struct { // 0x2
	/* 0x0 */ Sint8 dialog_flag;
	/* 0x1 */ Sint8 default_select_no;
} BupWarningData;

typedef enum {
	BUP_PROC_TYPE_NON = 0,
	BUP_PROC_TYPE_FORMAT = 1,
	BUP_PROC_TYPE_SAVE = 2,
	BUP_PROC_TYPE_LOAD = 3,
	BUP_PROC_TYPE_WARNING = 4,
	BUP_PROC_TYPE_WAITEND = 5,
	BUP_PROC_TYPE_MAX = 6
} BupProcType;

typedef enum {
	BUP_MC_ERR_NG = -1,
	BUP_MC_ERR_OK = 0,
	BUP_MC_ERR_NOFILE = 1,
	BUP_MC_ERR_OUTOFMEMORY = 2,
	BUP_MC_ERR_UNFORMAT = 3,
	BUP_MC_ERR_DISCONNECT = 4,
	BUP_MC_ERR_MAX = 5
} BupMcError;

typedef struct { // 0x2c
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 warning_no;
	/* 0x04 */ BupMcError err;
	/* 0x08 */ BupProcType child_type;
	/* 0x0c */ dgBupDrive drive;
	/* 0x10 */ Bool softreset_enable;
	/* 0x14 */ dgBupHandle *buph;
	/* 0x18 */ void *ptr;
	/* 0x1c */ Sint32 frame;
	/* 0x20 */ Sint32 warn_only;
	/* 0x24 */ BupTask *parent_task;
	/* 0x28 */ BupTask *child_task;
} BupTask;

enum {
	enum_cam_qa_exist_tame = 0,
	enum_cam_qa_exist_cut = 1,
	enum_cam_qa_exist_action = 2,
	enum_cam_qa_exist_combo = 3,
	enum_cam_qa_exist_shoot = 4,
	enum_cam_qa_beat = 5,
	enum_cam_qa_beat_only_dir = 6,
	enum_cam_qa_beat_only_ab = 7,
	enum_cam_qa_qno = 8,
	enum_cam_qa_qno_l = 9,
	enum_cam_qa_default = 10
};

enum {
	enum_cam_brk_boss_and_next = 0,
	enum_cam_brk_entry_and_next = 1,
	enum_cam_brk_cds_enemy_and_next = 2,
	enum_cam_brk_lv = 3,
	enum_cam_brk_cds_lv_m = 4,
	enum_cam_brk_lv0_cds = 5,
	enum_cam_brk_lv1_cds = 6,
	enum_cam_brk_cds = 7,
	enum_cam_brk_prevok = 8,
	enum_cam_brk_prevng = 9,
	enum_cam_brk_rescue_char = 10,
	enum_cam_brk_musicman_non = 11,
	enum_cam_brk_musicman = 12,
	enum_cam_brk_default = 13
};

enum {
	enum_cam_res_perfect = 0,
	enum_cam_res_win = 1,
	enum_cam_res_lose = 2,
	enum_cam_res_lv = 3,
	enum_cam_res_lv0_cds = 4,
	enum_cam_res_lv1_cds = 5,
	enum_cam_res_cds = 6,
	enum_cam_res_rescue_char = 7,
	enum_cam_res_mov_special = 8,
	enum_cam_res_rescue100 = 9,
	enum_cam_res_musicmanall_keyman = 10,
	enum_cam_res_default = 11
};

typedef Uint8 CamVar;
typedef Uint8 CamManageNo;
typedef Uint8 CamCond;

typedef struct { // 0x4
	/* 0x0 */ Sint16 frame;
	/* 0x2 */ CamManageNo no;
} CamChainData;

typedef struct { // 0x24
	/* 0x00 */ Sint16 as_break;
	/* 0x02 */ Sint16 nb_frame_res0;
	/* 0x04 */ Sint16 bias_res0;
	/* 0x06 */ Sint16 nb_frame_res1;
	/* 0x08 */ Sint16 bias_res1;
	/* 0x0a */ Sint16 nb_frame_res2;
	/* 0x0c */ Sint16 bias_res2;
	/* 0x0e */ Sint16 bias_walk;
	/* 0x10 */ CamCond *res0_no_ptr;
	/* 0x14 */ CamCond *res1_no_ptr;
	/* 0x18 */ CamCond *res2_no_ptr;
	/* 0x1c */ Sint32 walk_chain_num;
	/* 0x20 */ CamChainData *walk_chain_data;
} CamData_Mov;

typedef struct { // 0x8
	/* 0x0 */ CamCond *qa_data;
	/* 0x4 */ CamCond *brk_no_ptr;
} CamData_Step;

typedef struct { // 0x8
	/* 0x0 */ int step_num;
	/* 0x4 */ CamData_Step *step_data;
} CamData_Btl;

typedef struct { // 0x8
	/* 0x0 */ CamData_Mov *mov_data;
	/* 0x4 */ CamData_Btl *btl_data;
} CamData_Sub;

typedef struct { // 0xc
	/* 0x0 */ Sint32 sub_block_num;
	/* 0x4 */ CamData_Sub *sub_data;
	/* 0x8 */ CamVar **tbl;
} CamData;

typedef struct { // 0x4
	/* 0x0 */ Sint16 charno;
	/* 0x2 */ Sint16 ch;
} MusicManDataSub;

typedef struct { // 0x8
	/* 0x0 */ Sint32 num;
	/* 0x4 */ MusicManDataSub **data;
} MusicManData;

typedef struct { // 0x8
	/* 0x0 */ dgCharNo charno;
	/* 0x4 */ Sint32 number;
} PartyCollectData;

typedef struct { // 0x10
	/* 0x0 */ Sint32 flag;
	/* 0x4 */ CamVar *var_tbl;
	/* 0x8 */ Sint32 start_frame;
	/* 0xc */ Sint32 bias_frame;
} CamEntryBuf;

typedef struct { // 0x104
	/* 0x000 */ Sint8 req_no;
	/* 0x001 */ Sint8 exe_no;
	/* 0x004 */ CamEntryBuf buf[16];
} CamEntryCtrl;

typedef struct { // 0x140
	/* 0x000 */ Sint8 mov_as_break;
	/* 0x004 */ CamData *data;
	/* 0x008 */ GWHWND hwnd;
	/* 0x00c */ dgShSpy *sh_spy;
	/* 0x010 */ int force_brkno;
	/* 0x014 */ int seq_no;
	/* 0x018 */ int sub_block_no;
	/* 0x01c */ int qno;
	/* 0x020 */ int base_qno;
	/* 0x024 */ int step_no;
	/* 0x028 */ Sint32 btl_start_beat;
	/* 0x02c */ Sint32 qtype;
	/* 0x030 */ Sint32 start_frame;
	/* 0x034 */ CamData_Step *step_data;
	/* 0x038 */ Sint32 person_num;
	/* 0x03c */ CamEntryCtrl entry_ctrl;
} CamCtrlTask;

typedef enum {
	CAPTION_SIDE_LEFT = 0,
	CAPTION_SIDE_CENTER = 1,
	CAPTION_SIDE_RIGHT = 2,
	CAPTION_DISP_MAX = 3
} CaptionSide;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x98
	/* 0x00 */ Sint8 side;
	/* 0x04 */ NJS_POLYGON_VTX poly[4];
	/* 0x44 */ Float *disp_x;
	/* 0x48 */ Float disp_y;
	/* 0x4c */ Float disp_dlt_y;
	/* 0x50 */ Float poly_gapsize_x;
	/* 0x54 */ Float poly_gapsize_y;
	/* 0x58 */ Uint32 poly_color;
	/* 0x5c */ Float x;
	/* 0x60 */ Float y;
	/* 0x64 */ Float u;
	/* 0x68 */ Float v;
	/* 0x6c */ Sint32 gapsize_y;
	/* 0x70 */ char **tbl;
	/* 0x74 */ Sint32 line_num;
	/* 0x78 */ Float kj_size_x;
	/* 0x7c */ Float kj_size_y;
	/* 0x80 */ Uint32 kj_color;
	/* 0x84 */ Sint32 kj_gapsize_x;
	/* 0x88 */ Sint32 kj_framesize;
	/* 0x8c */ Sint32 kj_shadesize;
	/* 0x90 */ Sint32 kj_boldsize;
	/* 0x94 */ Float kj_ooz;
} Caption;

enum {
	CAPTION_TYPE_END = 0,
	CAPTION_TYPE_NEWS_TOP = 1,
	CAPTION_TYPE_NEWS = 2,
	CAPTION_TYPE_NAME = 3,
	CAPTION_TYPE_MAX = 4
};

typedef struct { // 0x10
	/* 0x0 */ Sint16 type;
	/* 0x2 */ Sint16 start_frame;
	/* 0x4 */ Sint16 nb_frame;
	/* 0x6 */ Sint16 line_num;
	/* 0x8 */ char **strtbl;
	/* 0xc */ Sint16 param;
} CaptionDataSub;

typedef struct { // 0xc
	/* 0x0 */ CaptionDataSub *mov_data;
	/* 0x4 */ CaptionDataSub *qa_data;
	/* 0x8 */ CaptionDataSub *brk_data;
} CaptionData;

typedef struct { // 0x8
	/* 0x0 */ Sint32 num;
	/* 0x4 */ CaptionData *data;
} CaptionBlockData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef Caption Caption;

typedef struct { // 0x1c
	/* 0x00 */ Sint32 sub_block_no;
	/* 0x04 */ dgShSpy *sh_spy;
	/* 0x08 */ Sint32 data_num;
	/* 0x0c */ CaptionData *data;
	/* 0x10 */ CaptionDataSub *mov_data;
	/* 0x14 */ CaptionDataSub *qa_data;
	/* 0x18 */ CaptionDataSub *brk_data;
} CaptionCtrlTask;

typedef struct { // 0x10
	/* 0x0 */ int mode;
	/* 0x4 */ Sint32 frame;
	/* 0x8 */ CaptionDataSub *data;
	/* 0xc */ Caption *caption;
} CaptionSubTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x80
	/* 0x00 */ Sint32 grid_x;
	/* 0x04 */ Sint32 grid_z;
	/* 0x08 */ float scale_x;
	/* 0x0c */ float scale_z;
	/* 0x10 */ Sint32 padding[4];
	/* 0x20 */ dgMathMatrix center_matrix;
	/* 0x60 */ dgMathVector3 grid_center;
	/* 0x6c */ dgMathAngle3 grid_angle;
} CdsGridHandle;

typedef struct { // 0xf0
	/* 0x00 */ CdsGridHandle *edit_grid_h;
	/* 0x10 */ CdsGridHandle grid_data;
	/* 0x90 */ dgMathVector3 line_vtx_x[2];
	/* 0xa8 */ dgMathVector3 line_vtx_z[2];
	/* 0xc0 */ dgMathVector3 trans_vec_x;
	/* 0xcc */ dgMathVector3 trans_vec_z;
	/* 0xd8 */ dgMathVector3 base_trans_vec_x;
} GridEditTask;

typedef struct { // 0x24
	/* 0x00 */ CdsGridHandle *grid_h;
	/* 0x04 */ dgShSpy *spy_h;
	/* 0x08 */ float cds_end_beat;
	/* 0x0c */ dgCharMotionData *mot_data_p;
	/* 0x10 */ CdsMtpOption *option_p;
	/* 0x14 */ MtpHandle *break_mtp_h;
	/* 0x18 */ dgCharMotionData* (*callback_func_p)(/* parameters unknown */);
	/* 0x1c */ CdsBreakTableData *break_data_p;
	/* 0x20 */ void *edit_p;
} CdsManTask;

typedef struct { // 0xc
	/* 0x0 */ CdsManTask *parent_p;
	/* 0x4 */ void (*func_p)(/* parameters unknown */);
	/* 0x8 */ float set_beat;
} TimingTask;

typedef enum {
	WALK_LEVEL_UNDEFINED = -1,
	WALK_LEVEL_START = 0,
	WALK_LEVEL_WIN_WITH_KEYMAN_AND_PERFECT = 0,
	WALK_LEVEL_WIN_WITH_KEYMAN = 1,
	WALK_LEVEL_WIN_WITHOUT_KEYMAN = 2,
	WALK_LEVEL_WIN_WORST = 3,
	WALK_LEVEL_LOSE = 4,
	WALK_LEVEL_END = 5
} WalkLevelAssign;

typedef struct { // 0xc
	/* 0x0 */ dgShSeqType change_seq;
	/* 0x4 */ PlayerBasePos *base_pos_p;
	/* 0x8 */ PartyFormationMotion *party_pos_p[3];
} CharCommonBasePositionData;

typedef struct { // 0x8
	/* 0x0 */ dgShSeqType change_seq;
	/* 0x4 */ PlayerBasePos *base_pos_p;
} CharCommonBasePositionData2;

typedef struct { // 0x8
	/* 0x0 */ dgShSeqType change_seq;
	/* 0x4 */ PartyFormationMotion *party_pos_p[3];
} CharCommonFormationData2;

typedef struct { // 0x1c
	/* 0x00 */ Sint32 uhyahoo_iid;
	/* 0x04 */ Sint32 move_iid[5];
	/* 0x18 */ Sint32 finish_iid;
} CharCommonBlockMoveSubBlock;

typedef struct { // 0x8
	/* 0x0 */ Sint32 number;
	/* 0x4 */ CharCommonBlockMoveSubBlock *move_data_p;
} CharCommonBlockMoveData;

typedef struct { // 0x8
	/* 0x0 */ Sint32 number;
	/* 0x4 */ CharManBattleData *battle_data_p;
} CharCommonBlockBattleData;

typedef enum {
	PE_CURSOR_SEQ_STEP = 0,
	PE_CURSOR_START_SEQ = 1,
	PE_CURSOR_STEP_NO = 2,
	PE_CURSOR_POS_X = 3,
	PE_CURSOR_POS_Y = 4,
	PE_CURSOR_POS_Z = 5,
	PE_CURSOR_ANG_X = 6,
	PE_CURSOR_ANG_Y = 7,
	PE_CURSOR_ANG_Z = 8,
	PE_CURSOR_CHANGE_FRAME = 9,
	PE_CURSOR_END = 10
} PosEditCursor;

typedef struct { // 0x4
	/* 0x0 */ dgCdbHandle handle;
} EditRoundTask;

typedef struct { // 0x10
	/* 0x0 */ GWHWND wnd_h;
	/* 0x4 */ Sint32 edit_seq;
	/* 0x8 */ Sint32 edit_step;
	/* 0xc */ PosEditCursor cur;
} EditTask;

typedef struct { // 0x14
	/* 0x00 */ CharCommonBasePositionData2 *edit_posdata_p;
	/* 0x04 */ Sint32 edit_data_num;
	/* 0x08 */ EditRoundTask *child_task_p;
	/* 0x0c */ Bool save_flag;
	/* 0x10 */ EditTask *edit_task_p;
} PosEditTask;

typedef struct { // 0xc
	/* 0x0 */ dgBupHandle *bup_h;
	/* 0x4 */ size_t save_size;
	/* 0x8 */ void *buf_p;
} PosEditSaveTask;

typedef enum {
	DG_EFF_AURA_SMALL = 0,
	DG_EFF_AURA_MIDDLE = 1,
	DG_EFF_AURA_SPECIAL = 2,
	DG_EFF_AURA_PEACE = 3,
	DG_EFF_AURA_DAMAGE_S = 4,
	DG_EFF_AURA_DAMAGE_M = 5,
	DG_EFF_AURA_DAMAGE_L = 6,
	DG_EFF_AURA_MAX = 7
} dgEffAuraType;

typedef enum {
	DG_EFF_SIMPLE_AURA_R4MICHAEL = 0,
	DG_EFF_SIMPLE_AURA_R5MICHAEL = 1,
	DG_EFF_SIMPLE_AURA_ROBO = 2,
	DG_EFF_SIMPLE_AURA_PEACE = 3,
	DG_EFF_SIMPLE_AURA_PURGE = 4,
	DG_EFF_SIMPLE_AURA_MAX = 5
} dgEffSimpleAuraType;

typedef struct { // 0x14
	/* 0x00 */ dgTexInfo *texinfo;
	/* 0x04 */ Sint16 tex_no;
	/* 0x08 */ Uint32 col;
	/* 0x0c */ Bool kasan_flg;
	/* 0x10 */ dgMathVector3 *pos_ptr;
} dgEffSimpleAuraParam;

typedef enum {
	DG_EFF_AFTRIMG_RARM = 0,
	DG_EFF_AFTRIMG_LARM = 1,
	DG_EFF_AFTRIMG_RLEG = 2,
	DG_EFF_AFTRIMG_LLEG = 3,
	DG_EFF_AFTRIMG_MAX = 4
} dgEffAftrimgType;

typedef struct { // 0xc
	/* 0x0 */ NJS_POINT3 *spos_ptr;
	/* 0x4 */ NJS_POINT3 *epos_ptr;
	/* 0x8 */ Float ratio;
} dgEffBeamFollowParam;

typedef struct { // 0x30
	/* 0x00 */ dgMathVector3 spos;
	/* 0x0c */ dgMathVector3 epos;
	/* 0x18 */ Float swidth;
	/* 0x1c */ Float ewidth;
	/* 0x20 */ Float sv;
	/* 0x24 */ Float ev;
	/* 0x28 */ Uint32 scol;
	/* 0x2c */ Uint32 ecol;
} dgEffBeamDrawParam;

typedef struct { // 0x34
	/* 0x00 */ Sint8 fix_flg;
	/* 0x04 */ Uint32 tex_no[2];
	/* 0x0c */ dgMathVector3 spos;
	/* 0x18 */ dgMathVector3 epos;
	/* 0x24 */ dgMathVector3 *spos_ptr;
	/* 0x28 */ dgMathVector3 *epos_ptr;
	/* 0x2c */ Float frame;
	/* 0x30 */ Float scale;
} dgEffBeamParam;

typedef struct { // 0x20
	/* 0x00 */ Sint32 type;
	/* 0x04 */ dgMathVector3 spos;
	/* 0x10 */ dgMathVector3 *spos_ptr;
	/* 0x14 */ dgMathVector3 *epos_ptr;
	/* 0x18 */ Float frame;
	/* 0x1c */ Float scale;
} dgEffBeamSetParam;

typedef enum {
	DG_EFF_REQ_ROBO_BEAM_LARGER = 0,
	DG_EFF_REQ_ROBO_BEAM_SHOOT = 1
} dgEffReqRoboBeamType;

typedef enum {
	DG_EFF_BEAM_TYPE_NORMAL = 0,
	DG_EFF_BEAM_TYPE_AVOID = 1,
	DG_EFF_BEAM_TYPE_REFLECT = 2
} dgEffRoboBeamType;

enum {
	CHARGE_SMALL = 0,
	CHARGE_LARGE = 1
};

typedef struct { // 0xc
	/* 0x0 */ Float frame;
	/* 0x4 */ Float scale;
	/* 0x8 */ dgMathVector3 *pos_ptr;
} ChargeParam;

typedef struct { // 0x10
	/* 0x0 */ dgMathVector3 *spos_ptr;
	/* 0x4 */ dgMathVector3 *epos_ptr;
	/* 0x8 */ Float swidth;
	/* 0xc */ Float ewidth;
} dgEffPosWidthParam;

enum {
	SPR_TYPE_CONSTANT = 0,
	SPR_TYPE_SMALLER = 1,
	SPR_TYPE_LARGER = 2,
	SPR_TYPE_LARGER_SMALLER = 3,
	SPR_TYPE_SMALLER_LARGER = 4
};

enum {
	SPR_ANG_CONSTANT = 0,
	SPR_ANG_RIGHT = 1,
	SPR_ANG_LEFT = 2
};

typedef struct { // 0x3c
	/* 0x00 */ Float min_scl;
	/* 0x04 */ Float max_scl;
	/* 0x08 */ Float scl;
	/* 0x0c */ Sint8 scl_type;
	/* 0x10 */ Uint32 min_col;
	/* 0x14 */ Uint32 max_col;
	/* 0x18 */ Uint32 col;
	/* 0x1c */ Sint8 col_type;
	/* 0x20 */ Angle start_ang;
	/* 0x24 */ Angle end_ang;
	/* 0x28 */ Angle ang;
	/* 0x2c */ Sint8 ang_type;
	/* 0x30 */ Float start_ratio;
	/* 0x34 */ Float end_ratio;
	/* 0x38 */ Sint32 tex_no;
} EffSprData;

typedef struct { // 0xc8
	/* 0x00 */ EffSprData data[2];
	/* 0x78 */ Float ratio;
	/* 0x7c */ Float frame;
	/* 0x80 */ Uint8 spr_num;
	/* 0x84 */ Float size;
	/* 0x88 */ Float scale;
	/* 0x8c */ dgEffCountData count_data;
	/* 0x9c */ dgMathVector3 pos;
	/* 0xa8 */ dgMathVector3 player_base_pos;
	/* 0xb4 */ dgMathVector3 offset_pos;
	/* 0xc0 */ Sint8 kasan_flg;
	/* 0xc4 */ Bool relative_flg;
} EffSprTask;

typedef struct { // 0x2c
	/* 0x00 */ Float min_scl;
	/* 0x04 */ Float max_scl;
	/* 0x08 */ Sint8 scl_type;
	/* 0x0c */ Uint32 min_col;
	/* 0x10 */ Uint32 max_col;
	/* 0x14 */ Sint8 col_type;
	/* 0x18 */ Angle start_ang;
	/* 0x1c */ Angle end_ang;
	/* 0x20 */ Sint8 ang_type;
	/* 0x24 */ Float start_ratio;
	/* 0x28 */ Float end_ratio;
} EffSprInitData;

typedef struct { // 0x24
	/* 0x00 */ Uint32 tex_no[2];
	/* 0x08 */ Float frame;
	/* 0x0c */ Uint8 spr_num;
	/* 0x10 */ Float size;
	/* 0x14 */ Float scale;
	/* 0x18 */ dgMathVector3 pos;
} EffSprParam;

enum {
	DG_EFF_DIR_UP = 0,
	DG_EFF_DIR_RIGHT = 1,
	DG_EFF_DIR_DOWN = 2,
	DG_EFF_DIR_LEFT = 3
};

typedef struct { // 0x14
	/* 0x00 */ Uint32 tex_no[2];
	/* 0x08 */ Float frame;
	/* 0x0c */ Float scale;
	/* 0x10 */ dgMathVector3 *pos_ptr;
} PoisonParam;

typedef struct { // 0xc
	/* 0x0 */ Float frame;
	/* 0x4 */ dgMathVector3 *pos_ptr;
	/* 0x8 */ Float scale;
} HoleParam;

enum {
	DG_EFF_NPHIT01 = 0,
	DG_EFF_NPHIT02 = 1,
	DG_EFF_NPHIT03 = 2,
	DG_EFF_NPDEFFENCE01 = 3,
	DG_EFF_DEFENSE_SPECIAL = 4,
	DG_EFF_NMIN_LONG = 5,
	DG_EFF_NMIN = 6,
	DG_EFF_NMESCAPE = 7,
	DG_EFF_N4OUT = 8,
	DG_EFF_N4ESCAPE = 9,
	DG_EFF_NEHIT01 = 10,
	DG_EFF_NEHIT02 = 11,
	DG_EFF_NEHIT03 = 12,
	DG_EFF_NEHIT04 = 13,
	DG_EFF_NEIN_LONG = 14,
	DG_EFF_NEIN = 15,
	DG_EFF_NEESCAPE = 16,
	DG_EFF_ANAANA = 17,
	DG_EFF_NEOUT = 18,
	DG_EFF_NEBEAM01 = 19,
	DG_EFF_NEBEAM02 = 20,
	DG_EFF_NEBEAM03 = 21,
	DG_EFF_DXPURGE_TAME_DIR = 22,
	DG_EFF_DXPURGE_TAME_AB = 23,
	DG_EFF_YARABI01 = 24,
	DG_EFF_YARABI02 = 25,
	DG_EFF_YARABI03 = 26,
	DG_EFF_YARABI04 = 27,
	DG_EFF_YARAHAN = 28,
	DG_EFF_NIHIT01 = 29,
	DG_EFF_NIHIT02 = 30,
	DG_EFF_JAGUAR_HIT = 31,
	DG_EFF_NIKURUKURU = 32,
	DG_EFF_NIIN = 33,
	DG_EFF_NIESCAPE = 34,
	DG_EFF_NIKIRAKIRA = 35,
	DG_EFF_NIGET = 36,
	DG_EFF_NIOUT = 37,
	DG_EFF_ONPU = 38,
	DG_EFF_NBLAST01 = 39,
	DG_EFF_NBLAST02 = 40,
	DG_EFF_NBLAST03 = 41,
	DG_EFF_NHENKEI = 42,
	DG_EFF_NMARK5 = 43,
	DG_EFF_NSMOKE01 = 44,
	DG_EFF_NFLASH01 = 45,
	DG_EFF_RHYTHM = 46,
	DG_EFF_SPARK = 47,
	DG_EFF_MAX = 48
};

enum {
	DG_EFF_NPBEAM01 = 0,
	DG_EFF_NPBEAM02 = 1,
	DG_EFF_NPBEAM03 = 2,
	DG_EFF_NPBEAM04 = 3,
	DG_EFF_NPBEAM05 = 4,
	DG_EFF_NPBEAM06 = 5,
	DG_EFF_NPBEAM07 = 6,
	DG_EFF_NPBEAM20 = 7,
	DG_EFF_NPBEAM21 = 8,
	DG_EFF_NPBEAM22 = 9,
	DG_EFF_NPBEAM23 = 10,
	DG_EFF_NPBEAM24 = 11,
	DG_EFF_NPBEAM25 = 12,
	DG_EFF_NPBEAM26 = 13,
	DG_EFF_NPBEAM27 = 14,
	DG_EFF_NPBEAM28 = 15,
	DG_EFF_NEBEAM10 = 16,
	DG_EFF_NEBEAM04 = 17,
	DG_EFF_NEBEAM05 = 18,
	DG_EFF_NEBEAM_COMBO = 19,
	DG_EFF_DXPURGE_BEAM_DIR = 20,
	DG_EFF_DXPURGE_BEAM_AB = 21,
	DG_EFF_DXPURGE_BEAM_DIR_AVOID = 22,
	DG_EFF_DXPURGE_BEAM_AB_AVOID = 23,
	DG_EFF_BEAM_MAX = 24
};

typedef enum {
	CHAR_EFF_NMIN_LONG = 0,
	CHAR_EFF_NMIN = 1,
	CHAR_EFF_NMESCAPE = 2,
	CHAR_EFF_NEIN_LONG = 3,
	CHAR_EFF_NEIN = 4,
	CHAR_EFF_NEESCAPE = 5,
	CHAR_EFF_NEESCAPE_R = 6,
	CHAR_EFF_NEOUT = 7,
	CHAR_EFF_NIIN = 8,
	CHAR_EFF_NIESCAPE = 9,
	CHAR_EFF_NIESCAPE_R = 10,
	CHAR_EFF_NIOUT = 11,
	CHAR_EFF_N4ESCAPE = 12,
	CHAR_EFF_N4OUT = 13,
	CHAR_EFF_END = 14
} CharEffectType;

typedef struct { // 0x10
	/* 0x0 */ Sint32 eff_assign;
	/* 0x4 */ float beat;
	/* 0x8 */ Bool use_eff_position_ptr;
	/* 0xc */ Sint16 fade_in;
	/* 0xe */ Sint16 follow;
} EffectParam;

typedef struct { // 0x14
	/* 0x00 */ void *eff_task_p;
	/* 0x04 */ dgMathVector3 *foot_position_p;
	/* 0x08 */ Bool fade_in;
	/* 0x0c */ Bool disp_flag;
	/* 0x10 */ void *parent_p;
} CharEffHandle;

typedef enum {
	DANCE_INDEX_PLAYER_WAIT1 = 0,
	DANCE_INDEX_PLAYER_WAIT2 = 1,
	DANCE_INDEX_PLAYER_LOOP_WAIT = 2,
	DANCE_INDEX_PLAYER_UP = 2,
	DANCE_INDEX_PLAYER_DOWN = 3,
	DANCE_INDEX_PLAYER_RIGHT = 4,
	DANCE_INDEX_PLAYER_LEFT = 5,
	DANCE_INDEX_PLAYER_SHOT_A = 6,
	DANCE_INDEX_PLAYER_SHOT_B = 7,
	DANCE_INDEX_PLAYER_UP_FAULT = 8,
	DANCE_INDEX_PLAYER_DOWN_FAULT = 9,
	DANCE_INDEX_PLAYER_RIGHT_FAULT = 10,
	DANCE_INDEX_PLAYER_LEFT_FAULT = 11,
	DANCE_INDEX_PLAYER_SHOT_A_FAULT = 12,
	DANCE_INDEX_PLAYER_SHOT_B_FAULT = 13,
	DANCE_INDEX_PLAYER_LOOP_SLE = 14,
	DANCE_INDEX_PLAYER_CHARGEA1 = 14,
	DANCE_INDEX_PLAYER_CHARGEA2 = 15,
	DANCE_INDEX_PLAYER_CHARGEB1 = 16,
	DANCE_INDEX_PLAYER_CHARGEB2 = 17,
	DANCE_INDEX_PLAYER_CHARGE_FAULT_A = 18,
	DANCE_INDEX_PLAYER_CHARGE_FAULT_B = 19,
	DANCE_INDEX_PLAYER_RELEASE_FAULT = 20,
	DANCE_INDEX_PLAYER_POSE = 21,
	DANCE_INDEX_PLAYER_POSE_FAULT = 22,
	DANCE_INDEX_END = 23
} DanceIndexPlayer;

typedef enum {
	DANCE_INDEX_ENEMY_WAIT = 0,
	DANCE_INDEC_ENEMY_LOOP_WAIT = 1,
	DANCE_INDEX_ENEMY_UP = 1,
	DANCE_INDEX_ENEMY_DOWN = 2,
	DANCE_INDEX_ENEMY_RIGHT = 3,
	DANCE_INDEX_ENEMY_LEFT = 4,
	DANCE_INDEX_ENEMY_SHOT_A = 5,
	DANCE_INDEX_ENEMY_SHOT_B = 6,
	DANCE_INDEX_ENEMY_LOOP_SLE = 7,
	DANCE_INDEX_ENEMY_CHARGE_A1 = 7,
	DANCE_INDEX_ENEMY_CHARGE_A2 = 8,
	DANCE_INDEX_ENEMY_CHARGE_B1 = 9,
	DANCE_INDEX_ENEMY_CHARGE_B2 = 10,
	DANCE_INDEX_ENEMY_POSE = 11,
	DANCE_INDEX_ENEMY_BREAK = 12,
	DANCE_INDEX_ENEMY_WIN = 13,
	DANCE_INDEX_ENEMY_LOSE = 14,
	DANCE_INDEX_PEOPLE_CAPTURE1 = 15,
	DANCE_INDEX_PEOPLE_CAPTURE2 = 16,
	DANCE_INDEX_PEOPLE_SUCCESS = 17,
	DANCE_INDEX_PEOPLE_FAILURE = 18,
	DANCE_INDEX_ENEMY_CDS = 19,
	DANCE_INDEX_ENEMY_END = 19
} DanceIndexEnemy;

typedef struct { // 0xc
	/* 0x0 */ Sint8 enemy_member;
	/* 0x1 */ Sint8 people_member;
	/* 0x2 */ Sint8 grid_x;
	/* 0x3 */ Sint8 grid_z;
	/* 0x4 */ float scale_x;
	/* 0x8 */ float scale_z;
} DanceMtpOption;

typedef struct { // 0x4
	/* 0x0 */ Sint16 charno;
	/* 0x2 */ Sint8 index_x;
	/* 0x3 */ Sint8 index_z;
} DanceMtpGridData;

typedef struct { // 0x18
	/* 0x00 */ Sint8 grid_x;
	/* 0x01 */ Sint8 grid_z;
	/* 0x02 */ Sint16 charno;
	/* 0x04 */ Sint16 index;
	/* 0x06 */ Sint16 seq_id;
	/* 0x08 */ void *dance_task_p;
	/* 0x0c */ CdsGridHandle *grid_h;
	/* 0x10 */ dgCharMotionData *motdata_p;
	/* 0x14 */ Sint32 question_number;
} DanceCharacterInit;

typedef void* (*DanceInitFunc)(/* parameters unknown */);

typedef struct { // 0x30
	/* 0x00 */ Sint32 player_mtp_iid;
	/* 0x04 */ Sint32 enemy_mtp_iid;
	/* 0x08 */ Sint32 demo_beat;
	/* 0x0c */ dgMathVector3 pos;
	/* 0x18 */ dgMathAngle3 ang;
	/* 0x24 */ DanceInitFunc *func_tbl_p;
	/* 0x28 */ Sint32 question_number;
	/* 0x2c */ CdsBreakTableData *break_data_p;
} DanceBattleData;

typedef struct { // 0x4
	/* 0x0 */ Sint8 edit_num[3];
	/* 0x3 */ Sint8 reserve;
} PartySaveFormation;

typedef enum {
	SHOOT_ACTION_ERROR = -2,
	SHOOT_ACTION_NONE = -1,
	SHOOT_ACTION_START = 0,
	SHOOT_ACTION_ESCAPE = 0,
	SHOOT_ACTION_REFLECT = 1,
	SHOOT_ACTION_COMBO = 2,
	SHOOT_ACTION_END = 3
} ShootActionMode;

typedef enum {
	SHOOT_INDEX_PLAYER_WAIT1 = 0,
	SHOOT_INDEX_PLAYER_SLE = 1,
	SHOOT_INDEX_PLAYER_UP = 1,
	SHOOT_INDEX_PLAYER_DOWN = 2,
	SHOOT_INDEX_PLAYER_RIGHT = 3,
	SHOOT_INDEX_PLAYER_LEFT = 4,
	SHOOT_INDEX_PLAYER_UP_FAULT = 5,
	SHOOT_INDEX_PLAYER_DOWN_FAULT = 6,
	SHOOT_INDEX_PLAYER_RIGHT_FAULT = 7,
	SHOOT_INDEX_PLAYER_LEFT_FAULT = 8,
	SHOOT_INDEX_PLAYER_LOOP = 9,
	SHOOT_INDEX_PLAYER_ESCAPE_START = 9,
	SHOOT_INDEX_PLAYER_WAIT_ESCAPE = 9,
	SHOOT_INDEX_PLAYER_FAULT_ESCAPE = 10,
	SHOOT_INDEX_PLAYER_UP_ESCAPE = 11,
	SHOOT_INDEX_PLAYER_DOWN_ESCAPE = 12,
	SHOOT_INDEX_PLAYER_RIGHT_ESCAPE = 13,
	SHOOT_INDEX_PLAYER_LEFT_ESCAPE = 14,
	SHOOT_INDEX_PLAYER_REFLECT_START = 15,
	SHOOT_INDEX_PLAYER_WAIT_REFLECT = 15,
	SHOOT_INDEX_PLAYER_FAULT_REFLECT = 16,
	SHOOT_INDEX_PLAYER_UP_REFLECT = 17,
	SHOOT_INDEX_PLAYER_DOWN_REFLECT = 18,
	SHOOT_INDEX_PLAYER_RIGHT_REFLECT = 19,
	SHOOT_INDEX_PLAYER_LEFT_REFLECT = 20,
	SHOOT_INDEX_PLAYER_COMBO_START = 21,
	SHOOT_INDEX_PLAYER_WAIT_COMBO = 21,
	SHOOT_INDEX_PLAYER_FAULT_COMBO = 22,
	SHOOT_INDEX_PLAYER_UP_COMBO = 23,
	SHOOT_INDEX_PLAYER_DOWN_COMBO = 24,
	SHOOT_INDEX_PLAYER_RIGHT_COMBO = 25,
	SHOOT_INDEX_PLAYER_LEFT_COMBO = 26,
	SHOOT_INDEX_PLAYER_SHOOT_COMBO = 27,
	SHOOT_INDEX_PLAYER_END = 28
} ShootIndexPlayer;

typedef enum {
	SHOOT_INDEX_LEADER_WAIT = 0,
	SHOOT_INDEX_LEADER_UP = 1,
	SHOOT_INDEX_LEADER_DOWN = 2,
	SHOOT_INDEX_LEADER_RIGHT = 3,
	SHOOT_INDEX_LEADER_LEFT = 4,
	SHOOT_INDEX_LEADER_SHOT_A = 5,
	SHOOT_INDEX_LEADER_SHOT_B = 6,
	SHOOT_INDEX_LEADER_HIT = 7,
	SHOOT_INDEX_LEADER_ESCAPE = 8,
	SHOOT_INDEX_LEADER_DEMO = 9,
	SHOOT_INDEX_LEADER_END = 9
} ShootIndexLeader;

typedef enum {
	SHOOT_INDEX_ENEMY_WAIT = 0,
	SHOOT_INDEX_ENEMY_APPEAR = 1,
	SHOOT_INDEX_ENEMY_UP = 2,
	SHOOT_INDEX_ENEMY_DOWN = 3,
	SHOOT_INDEX_ENEMY_RIGHT = 4,
	SHOOT_INDEX_ENEMY_LEFT = 5,
	SHOOT_INDEX_ENEMY_SHOOT_A = 6,
	SHOOT_INDEX_ENEMY_SHOOT_B = 7,
	SHOOT_INDEX_ENEMY_NO_INPUT = 8,
	SHOOT_INDEX_PEOPLE_WAIT = 9,
	SHOOT_INDEX_PEOPLE_APPEAR = 10,
	SHOOT_INDEX_PEOPLE_HELP = 11,
	SHOOT_INDEX_PEOPLE_SHOOT_A = 12,
	SHOOT_INDEX_PEOPLE_SHOOT_B = 13,
	SHOOT_INDEX_PEOPLE_NO_INPUT = 14,
	SHOOT_INDEX_END = 15
} ShootIndexEnemy;

typedef enum {
	SHOOT_TYPE_ERROR = -1,
	SHOOT_TYPE_NORMAL = 0,
	SHOOT_TYPE_ACTION = 1,
	SHOOT_TYPE_COMBO = 2,
	SHOOT_TYPE_END = 3
} ShootType;

enum {
	SHOOT_DIR_UP = 0,
	SHOOT_DIR_RIGHT = 1,
	SHOOT_DIR_DOWN = 2,
	SHOOT_DIR_LEFT = 3,
	SHOOT_DIR_END = 4
};

typedef Sint8 ShootDir;
// warning: multiple differing types with the same name (descriptor not equal)
typedef ShootCharCtrl ShootCharCtrl;
// warning: multiple differing types with the same name (descriptor not equal)
typedef ShootManTask ShootManTask;

typedef struct { // 0x18
	/* 0x00 */ Sint32 player_mtp_iid;
	/* 0x04 */ Sint32 enemy_mtp_iid;
	/* 0x08 */ Sint32 leader_mtp_iid;
	/* 0x0c */ void* (*leader_task_func_p)(/* parameters unknown */);
	/* 0x10 */ void* (*enemy_task_func_p)(/* parameters unknown */);
	/* 0x14 */ CdsBreakTableData *break_data_p;
} ShootBattleData;

enum {
	CHAR_MAN_NOT_READY = -1,
	CHAR_MAN_MTP_READEN = 0,
	CHAR_MAN_READY_LIMIT = 0,
	CHAR_MAN_READY = 1,
	CHAR_MAN_END = 2
};

typedef struct { // 0x20
	/* 0x00 */ float move_switch_beat;
	/* 0x04 */ MtpHandle *default_mtp_h;
	/* 0x08 */ MtpHandle *uhyahoo_mtp_h;
	/* 0x0c */ MtpHandle *loop_mtp_h;
	/* 0x10 */ MtpHandle *finish_mtp_h;
	/* 0x14 */ MtpHandle *battle_mtp_h;
	/* 0x18 */ dgCharMotionData *default_mot_p;
	/* 0x1c */ Sint32 dummy[1];
} CharManMtpList;

typedef struct { // 0x20
	/* 0x00 */ Sint8 next_seq_flag;
	/* 0x01 */ Sint8 next_mot_flag;
	/* 0x02 */ Sint8 combo_counter;
	/* 0x03 */ Sint8 break_level;
	/* 0x04 */ Sint8 move_mode;
	/* 0x05 */ Sint8 step_no;
	/* 0x06 */ Sint16 qno;
	/* 0x08 */ Sint16 cur_sh_id;
	/* 0x0a */ Sint16 next_sh_id;
	/* 0x0c */ Sint8 seq_type;
	/* 0x0d */ Sint8 battle_win_flag;
	/* 0x0e */ Sint8 finish_flag;
	/* 0x0f */ Sint8 started_flag;
	/* 0x10 */ dgCharMotionData *motdata_p;
	/* 0x14 */ CharRoundData *round_data_p;
	/* 0x18 */ float e_motion_beat;
	/* 0x1c */ CharManBattleData *battle_data_p;
} CharManSequence;

typedef struct { // 0x20
	/* 0x00 */ float next_start_beat;
	/* 0x04 */ float section_beat;
	/* 0x08 */ float left_beat;
	/* 0x0c */ float pre_beat;
	/* 0x10 */ float walk_total;
	/* 0x14 */ Sint32 dummy[3];
} CharManBeatParam;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x20
	/* 0x00 */ Sint8 boss_mode_flag;
	/* 0x01 */ Sint8 wire_flag;
	/* 0x02 */ Sint8 ready_flag;
	/* 0x03 */ Sint8 battle_mode;
	/* 0x04 */ void *round_mot_task_p;
	/* 0x08 */ void *edit_p;
	/* 0x0c */ CharManBeatParam *beat_p;
	/* 0x10 */ CharManSequence *seq_p;
	/* 0x14 */ CharManMtpList *mtp_list_p;
	/* 0x18 */ char *cdr_name_p;
	/* 0x1c */ GameLoad *load_h;
} CharManTask;

typedef struct { // 0x8
	/* 0x0 */ CharManTask *man_task_p;
	/* 0x4 */ MtpHandle *finish_h;
} CharManTimingTask;

enum {
	CLPCHAR_WINKTYPE_BOTH = 0,
	CLPCHAR_WINKTYPE_LEFT = 1,
	CLPCHAR_WINKTYPE_RIGHT = 2,
	CLPCHAR_WINKTYPE_MAX = 3
};

typedef enum {
	CLPCHAR_EYEMODE_NOP = 0,
	CLPCHAR_EYEMODE_CLOSE = 1,
	CLPCHAR_EYEMODE_OPEN = 2,
	CLPCHAR_EYEMODE_SLEEP_IN = 3,
	CLPCHAR_EYEMODE_SLEEP = 4,
	CLPCHAR_EYEMODE_AWAKE = 5,
	CLPCHAR_EYEMODE_WINKPLAY_ON = 6,
	CLPCHAR_EYEMODE_WINKPLAY_STAY = 7,
	CLPCHAR_EYEMODE_WINKPLAY_OFF = 8,
	CLPCHAR_EYEMODE_FORCE_CLOSE_ON = 9,
	CLPCHAR_EYEMODE_FORCE_CLOSED = 10,
	CLPCHAR_EYEMODE_FORCE_CLOSE_OFF = 11,
	CLPCHAR_EYEMODE_MAX = 12
} ClpCharEyeMode;

struct _ClpCharEye { // 0x30
	/* 0x00 */ ClpCharEyeMode mode;
	/* 0x04 */ Bool sleep_switch;
	/* 0x08 */ Bool wink_switch;
	/* 0x0c */ Float alpha;
	/* 0x10 */ Float alpha_spd;
	/* 0x14 */ Sint32 wink_cnt;
	/* 0x18 */ Float wink_time;
	/* 0x1c */ Float input_time;
	/* 0x20 */ Float input_time_limit;
	/* 0x24 */ Float wakeup_time;
	/* 0x28 */ Sint32 winktype;
	/* 0x2c */ Float wink_time_close;
};

typedef _ClpCharEye ClpCharEye;
typedef _ClpCharEye *ClpCharEyePtr;

struct _ClpCharTask { // 0x3c
	/* 0x00 */ Sint32 mode;
	/* 0x04 */ ClpDBCharPtr charptr;
	/* 0x08 */ ClpCharEye eye;
	/* 0x38 */ dgObjCtrl *free_oc;
};

typedef _ClpCharTask ClpCharTask;
typedef _ClpCharTask *ClpCharTaskPtr;

struct _ClpWinkCntTbl { // 0x8
	/* 0x0 */ Sint32 cnt;
	/* 0x4 */ Float spd;
};

typedef _ClpWinkCntTbl ClpWinkCntTbl;
typedef _ClpWinkCntTbl *ClpWinkCntTblPtr;

struct _ClpDBTask { // 0x13ac
	/* 0x0000 */ Sint32 mode;
	/* 0x0004 */ Uint32 serial_master;
	/* 0x0008 */ ClpDBDataPtr master;
	/* 0x000c */ ClpDBData heap[128];
	/* 0x100c */ ClipLprPtr lpr_load;
	/* 0x1010 */ Uint32 lpr_fid;
	/* 0x1014 */ char lpr_fname[36];
	/* 0x1038 */ dgCharNo fake_unique_charno;
	/* 0x103c */ ClpDBChar charinfo[10];
};

typedef _ClpDBTask ClpDBTask;
typedef _ClpDBTask *ClpDBTaskPtr;

enum {
	CLPDEB_WINMODE_LP1 = 0,
	CLPDEB_WINMODE_CHAR = 1,
	CLPDEB_WINMODE_PLY = 2,
	CLPDEB_WINMODE_MAX = 3
};

typedef enum {
	CLPDEB_WIN_KIND_NOR = 0,
	CLPDEB_WIN_KIND_LOG = 1,
	CLPDEB_WIN_KIND_MAX = 2
} ClpDebKind;

struct _ClpDebInfo { // 0x64
	/* 0x00 */ ClpDebKind kind;
	/* 0x04 */ GWHWND hWnd;
	/* 0x08 */ GWHWND hScrlBarV;
	/* 0x0c */ GWHWND hScrlBarH;
	/* 0x10 */ gwVariable varV;
	/* 0x24 */ gwVariable varH;
	/* 0x38 */ Sint32 x;
	/* 0x3c */ Sint32 y;
	/* 0x40 */ Sint32 disp_w;
	/* 0x44 */ Sint32 disp_h;
	/* 0x48 */ Sint32 buf_w;
	/* 0x4c */ Sint32 buf_h;
	/* 0x50 */ Sint32 write_window_y;
	/* 0x54 */ Sint32 write_y;
	/* 0x58 */ void *task;
	/* 0x5c */ void (*drawfunc)(/* parameters unknown */);
	/* 0x60 */ char *buf;
};

typedef _ClpDebInfo ClpDebInfo;
typedef _ClpDebInfo *ClpDebInfoPtr;

struct _ClpDebTask { // 0xdc
	/* 0x00 */ Sint32 mode;
	/* 0x04 */ ClpDebInfo wininfo_main;
	/* 0x68 */ ClpDebInfo wininfo_sub;
	/* 0xcc */ Sint32 wininfo_mode;
	/* 0xd0 */ Sint32 db_no;
	/* 0xd4 */ Sint32 char_no;
	/* 0xd8 */ Sint32 suby;
};

typedef _ClpDebTask ClpDebTask;
typedef _ClpDebTask *ClpDebTaskPtr;

struct _ClpManTask { // 0x10
	/* 0x0 */ Sint32 mode;
	/* 0x4 */ void *db;
	/* 0x8 */ void *stm;
	/* 0xc */ void *deb;
};

typedef _ClpManTask ClpManTask;
typedef _ClpManTask *ClpManTaskPtr;

typedef enum {
	CLPPLY_STAT_STOP = 0,
	CLPPLY_STAT_PLAY = 1,
	CLPPLY_STAT_END = 2,
	CLPPLY_STAT_MAX = 3
} ClpPlyStat;

typedef enum {
	CLPPLY_FADESTAT_NOP = 0,
	CLPPLY_FADESTAT_FADING = 1,
	CLPPLY_FADESTAT_FADE_END = 2,
	CLPPLY_FADESTAT_MAX = 3
} ClpPlyFadeStat;

struct _ClpPlyTask { // 0x3c
	/* 0x00 */ Sint32 stm;
	/* 0x04 */ ClpPlyStat stat;
	/* 0x08 */ dgCharNo charno;
	/* 0x0c */ ClipLp1Ptr lp1;
	/* 0x10 */ Sint32 nowidx;
	/* 0x14 */ Sint32 preidx;
	/* 0x18 */ Float endtime;
	/* 0x1c */ Float basetime;
	/* 0x20 */ void (*exec)(/* parameters unknown */);
	/* 0x24 */ void (*disp)(/* parameters unknown */);
	/* 0x28 */ Float alpha;
	/* 0x2c */ Float alpha_spd;
	/* 0x30 */ Float alpha_max;
	/* 0x34 */ Float frame;
	/* 0x38 */ ClpPlyFadeStat fadestat;
};

typedef _ClpPlyTask ClpPlyTask;
typedef _ClpPlyTask *ClpPlyTaskPtr;

typedef enum {
	CLPSTM_WATCHMODE_WAITPLAY = 0,
	CLPSTM_WATCHMODE_NOWPLAY = 1,
	CLPSTM_WATCHMODE_MAX = 2
} ClpStmWatchMode;

struct _ClpStmWatchInfo { // 0x54
	/* 0x00 */ Sint32 stm;
	/* 0x04 */ ClpStmWatchMode mode;
	/* 0x08 */ Sint32 pre_stat;
	/* 0x0c */ Sint32 now_stat;
	/* 0x10 */ Uint16 pid;
	/* 0x12 */ Uint16 iid;
	/* 0x14 */ ClpDBInfo clpinfo;
	/* 0x34 */ ClpDBRefInfo refinfo;
};

typedef _ClpStmWatchInfo ClpStmWatchInfo;
typedef _ClpStmWatchInfo *ClpStmWatchInfoPtr;

struct _ClpStmTask { // 0x154
	/* 0x000 */ Sint32 mode;
	/* 0x004 */ ClpStmWatchInfo watchinfo[4];
};

typedef _ClpStmTask ClpStmTask;
typedef _ClpStmTask *ClpStmTaskPtr;

typedef enum {
	COSROOM_MODE_COSTUME = 0,
	COSROOM_MODE_ITEM = 1,
	COSROOM_MODE_MAX = 2
} CosRoomCsprMode;

typedef enum {
	CSPR_CTRL_FLAG_NON = 0
} CsprCtrlFlag;

// warning: multiple differing types with the same name (descriptor not equal)
typedef CsprCtrlVector1 CsprCtrlVector1;
// warning: multiple differing types with the same name (descriptor not equal)
typedef CsprCtrlVector2 CsprCtrlVector2;

typedef struct { // 0x8
	/* 0x0 */ Float frame;
	/* 0x4 */ dgMathVector1 vec;
} CsprMoveVector1;

typedef struct { // 0xc
	/* 0x0 */ Float frame;
	/* 0x4 */ dgMathVector2 vec;
} CsprMoveVector2;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgCellsprNumber dgCellsprNumber;

typedef struct { // 0x18
	/* 0x00 */ Float csx;
	/* 0x04 */ Float csy;
	/* 0x08 */ Float u0;
	/* 0x0c */ Float v0;
	/* 0x10 */ Float u2;
	/* 0x14 */ Float v2;
} dgCellsprTexData;

typedef enum {
	COSROOM_CSPR_TYPE_PLAYER_NUM = 0,
	COSROOM_CSPR_TYPE_ITEM_NUM = 1,
	COSROOM_CSPR_TYPE_PLAYER_MAX = 2,
	COSROOM_CSPR_TYPE_ITEM_MAX = 3,
	COSROOM_CSPR_TYPE_NUM_MAX = 4,
	COSROOM_CSPR_TYPE_PLAYER_STR = 4,
	COSROOM_CSPR_TYPE_ITEM_STR = 5,
	COSROOM_CSPR_TYPE_PLAYER_TRI = 6,
	COSROOM_CSPR_TYPE_ITEM_TRI = 7,
	COSROOM_CSPR_TYPE_LEFT_START = 8,
	COSROOM_CSPR_TYPE_SELECT_AB = 8,
	COSROOM_CSPR_TYPE_SELECT_CURSOL = 9,
	COSROOM_CSPR_TYPE_MAX = 10
} CosRoomCsprType;

typedef struct { // 0x7c
	/* 0x00 */ NJS_CELL_SPRITE *cspr;
	/* 0x04 */ dgCellsprNumber *cspr_num;
	/* 0x08 */ NJS_CELL_SPRITE_VAL cval;
} CosCsprData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x588
	/* 0x000 */ Sint8 perfect_window_flag;
	/* 0x004 */ int phase;
	/* 0x008 */ CosRoomCsprMode select_mode;
	/* 0x00c */ dgMathAngle1 ang;
	/* 0x010 */ dgMathAngle1 spd_ang;
	/* 0x014 */ dgMathAngle1 ang_fast;
	/* 0x018 */ dgMathAngle1 spd_ang_fast;
	/* 0x01c */ CosRoom *parent_task;
	/* 0x020 */ NJS_CELL_SPRITE *text_cspr;
	/* 0x024 */ CosCsprData data[10];
	/* 0x4fc */ CosCsprData window;
	/* 0x578 */ Float blink_alpha;
	/* 0x57c */ Float blink_alpha_fast;
	/* 0x580 */ Float win_frame;
	/* 0x584 */ Float dlt_win_frame;
} CosRoomCspr;

enum {
	COS_CSPR_COSTUME = 0,
	COS_CSPR_COS_NUM10 = 1,
	COS_CSPR_COS_NUM1 = 2,
	COS_CSPR_COS_SLASH = 3,
	COS_CSPR_COS_MAX1 = 4,
	COS_CSPR_COS_MAX10 = 5,
	COS_CSPR_ITEM = 6,
	COS_CSPR_ITEM_NUM10 = 7,
	COS_CSPR_ITEM_NUM1 = 8,
	COS_CSPR_ITEM_SLASH = 9,
	COS_CSPR_ITEM_MAX10 = 10,
	COS_CSPR_ITEM_MAX1 = 11,
	COS_CSPR_ITEM_TRI_L = 12,
	COS_CSPR_ITEM_TRI_R = 13,
	COS_CSPR_COS_TRI_L = 14,
	COS_CSPR_COS_TRI_R = 15,
	COS_CSPR_SELECT = 16,
	COS_CSPR_A = 17,
	COS_CSPR_B = 18,
	COS_CSPR_MAX = 19
};

typedef struct { // 0x8
	/* 0x0 */ Sint32 num;
	/* 0x4 */ Sint32 *tbl;
} CellPartsDef;

// warning: multiple differing types with the same name (descriptor not equal)
typedef CosRoomCspr CosRoomCspr;

typedef enum {
	COSROOM_PHASE_LOAD = 0,
	COSROOM_PHASE_WAIT_START = 1,
	COSROOM_PHASE_IN = 2,
	COSROOM_PHASE_OUT = 3,
	COSROOM_PHASE_NEAR = 4,
	COSROOM_PHASE_FAR = 5,
	COSROOM_PHASE_EXIT = 6,
	COSROOM_PHASE_SELECT = 7,
	COSROOM_PHASE_CHARCHG = 8,
	COSROOM_PHASE_CHECK = 9,
	COSROOM_PHASE_FINISH = 10,
	COSROOM_PHASE_MAX = 11
} CosRoomPhase;

typedef enum {
	COSROOM_OBJ_TYPE_WA = 0,
	COSROOM_OBJ_TYPE_ELEV = 1,
	COSROOM_OBJ_TYPE_CYL = 2,
	COSROOM_OBJ_TYPE_MAX = 3
} CosRoomObjType;

typedef struct { // 0x3c
	/* 0x00 */ Sint8 hide_flag;
	/* 0x04 */ mtnMotion *motion;
	/* 0x08 */ mtnPose *pose;
	/* 0x0c */ dgObjCtrl oc;
	/* 0x38 */ dgOcCallback *oc_callback;
} CosRoomMapObj;

typedef struct { // 0x150
	/* 0x000 */ Sint8 obj_init_flag;
	/* 0x001 */ Sint8 cap_entry_flag;
	/* 0x004 */ void *rbp_ptr;
	/* 0x008 */ dgTexInfo *tex_info;
	/* 0x00c */ void *cap_ptr;
	/* 0x010 */ CosRoomMapObj objs[3];
	/* 0x0d0 */ dgMathMatrix elev_pos_matrix[2];
} CosRoomMapData;

typedef struct { // 0x1c
	/* 0x00 */ Sint8 read_end_flag;
	/* 0x04 */ PlayerType player_type;
	/* 0x08 */ dgCharNo char_no;
	/* 0x0c */ dgCdbHandle cdbh;
	/* 0x10 */ dgCharCtrl *char_ctrl;
	/* 0x14 */ dgCharMotionCtrl *mot_ctrl;
	/* 0x18 */ dgOcCallback *item_callback;
} CosRoomCharDataOne;

typedef struct { // 0xc
	/* 0x0 */ Sint8 read_end_flag;
	/* 0x4 */ CosRoomItemType item_type;
	/* 0x8 */ dgCdbHandle cdbh;
} CosRoomItemDataOne;

typedef struct { // 0xc
	/* 0x0 */ Sint8 read_end_flag;
	/* 0x4 */ dgCharNo char_no;
	/* 0x8 */ dgCdbHandle cdbh;
} CosRoomOtherDataOne;

typedef struct { // 0x578
	/* 0x000 */ PlayerType current_player_type;
	/* 0x004 */ PlayerType next_player_type;
	/* 0x008 */ CosRoomItemType current_item_type;
	/* 0x00c */ CosRoomItemType next_item_type;
	/* 0x010 */ CosRoomCharDataOne char_data_one[40];
	/* 0x470 */ CosRoomItemDataOne item_data_one[12];
	/* 0x500 */ CosRoomOtherDataOne other_data_one[10];
} CosRoomCharData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x730
	/* 0x000 */ Sint8 mode;
	/* 0x001 */ Sint8 exit_req;
	/* 0x002 */ Uint8 col0_r;
	/* 0x003 */ Uint8 col0_g;
	/* 0x004 */ Uint8 col0_b;
	/* 0x005 */ Uint8 col1_r;
	/* 0x006 */ Uint8 col1_g;
	/* 0x007 */ Uint8 col1_b;
	/* 0x008 */ CosRoomInitMode init_mode;
	/* 0x00c */ CosRoomPhase phase;
	/* 0x010 */ CosRoomPhase phase_req;
	/* 0x014 */ CosRoomPhase phase_next_req;
	/* 0x018 */ Sint32 loading_count;
	/* 0x020 */ CosRoomMapData map_data;
	/* 0x170 */ CosRoomCharData char_data;
	/* 0x6e8 */ Float base_dlt_frame;
	/* 0x6ec */ Float dlt_frame;
	/* 0x6f0 */ Float frame;
	/* 0x6f4 */ Float max_frame;
	/* 0x6f8 */ Float cam_base_frame;
	/* 0x6fc */ MtpHandle *mtph;
	/* 0x700 */ dgCharMotionData *mot_data;
	/* 0x704 */ dgCdbHandle manager_cdbh;
	/* 0x708 */ dgMathVector2 spos_lu;
	/* 0x710 */ dgMathVector2 spos_rd;
	/* 0x718 */ CosRoomCspr *cosroom_cspr;
	/* 0x71c */ void *mes_task;
	/* 0x720 */ void *mlt_load_task;
	/* 0x724 */ GWHWND hwnd;
	/* 0x728 */ Sint32 repeat_disable_frame;
} CosRoom;

typedef struct { // 0x28
	/* 0x00 */ Float frame;
	/* 0x04 */ dgMathVector3 curr;
	/* 0x10 */ dgMathVector3 to;
	/* 0x1c */ dgMathVector3 dlt;
} BgColTask;

typedef struct { // 0x14
	/* 0x00 */ Sint8 load_end_flag;
	/* 0x04 */ CosRoom *parent_task;
	/* 0x08 */ CosRoomMapData *data;
	/* 0x0c */ Sint32 *count;
	/* 0x10 */ void *pvm_ptr;
} MapLoadTask;

typedef struct { // 0x24
	/* 0x00 */ dgCaptionHeader *h;
	/* 0x04 */ int no;
	/* 0x08 */ int line_num;
	/* 0x0c */ dgMathVector2 spos_lu;
	/* 0x14 */ dgMathVector2 spos_rd;
	/* 0x1c */ Uint32 frame;
	/* 0x20 */ CosRoom *parent_task;
} MesTask;

typedef struct { // 0x10
	/* 0x0 */ CosRoom *parent_task;
	/* 0x4 */ CosRoomOtherDataOne *data;
	/* 0x8 */ Sint32 *count;
	/* 0xc */ Uint32 serial_id;
} OtherLoadOneTask;

typedef struct { // 0x10
	/* 0x0 */ CosRoom *parent_task;
	/* 0x4 */ CosRoomItemDataOne *data;
	/* 0x8 */ Sint32 *count;
	/* 0xc */ Uint32 serial_id;
} ItemLoadOneTask;

typedef struct { // 0xc
	/* 0x0 */ CosRoom *parent_task;
	/* 0x4 */ CosRoomCharDataOne *data;
	/* 0x8 */ Sint32 *count;
} CharLoadOneTask;

typedef struct { // 0x8
	/* 0x0 */ CosRoom *parent_task;
	/* 0x4 */ Sint32 *count;
} CharLoadOneTaskForManager;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x20
	/* 0x00 */ int mode;
	/* 0x04 */ int max_mode;
	/* 0x08 */ CsprMoveVector1 *move_data;
	/* 0x0c */ Float frame;
	/* 0x10 */ Float dlt_frame;
	/* 0x14 */ dgMathVector1 to_vec;
	/* 0x18 */ dgMathVector1 dlt_vec;
	/* 0x1c */ dgMathVector1 *ptr;
} CsprCtrlVector1;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x28
	/* 0x00 */ int mode;
	/* 0x04 */ int max_mode;
	/* 0x08 */ CsprMoveVector2 *move_data;
	/* 0x0c */ Float frame;
	/* 0x10 */ Float dlt_frame;
	/* 0x14 */ dgMathVector2 to_vec;
	/* 0x1c */ dgMathVector2 dlt_vec;
	/* 0x24 */ dgMathVector2 *ptr;
} CsprCtrlVector2;

typedef struct { // 0x2c
	/* 0x00 */ Sint8 qno;
	/* 0x01 */ Sint8 timing_num;
	/* 0x02 */ Sint8 enemy_number;
	/* 0x03 */ Sint8 death_flag;
	/* 0x04 */ Sint32 seq_id;
	/* 0x08 */ Sint32 add_beat;
	/* 0x0c */ DanceBattleData *dance_data_p;
	/* 0x10 */ MtpHandle *mtp_h;
	/* 0x14 */ MtpHandle *battle_mtp_h;
	/* 0x18 */ dgCharMotionData *enemy_mot_p;
	/* 0x1c */ float start_beat;
	/* 0x20 */ float demo_start_beat;
	/* 0x24 */ CdsGridHandle *grid_h;
	/* 0x28 */ void *edit_p;
} DanceManTask;

typedef enum {
	DANCE_ENEMY_STATUS_NORMAL = 0,
	DANCE_ENEMY_STATUS_DEMO_END = 1,
	DANCE_ENEMY_STATUS_PRE_BRAKE = 2,
	DANCE_ENEMY_STATUS_BRAKE = 3,
	DANCE_ENEMY_STATUS_TAME = 4,
	DANCE_ENEMY_STATUS_Q = 5,
	DANCE_ENEMY_STATUS_WAIT = 6,
	DANCE_ENEMY_STATUS_ESCAPE = 7,
	DANCE_ENEMY_STATUS_DIE = 8,
	DANCE_ENEMY_STATUS_END = 9
} DanceEnemyStatus;

typedef enum {
	DANCE_ENEMY_CALLBACK_SET_MOTION = 0,
	DANCE_ENEMY_CALLBACK_SET_FRAME = 1,
	DANCE_ENEMY_CALLBACK_GO_MOTION = 2,
	DANCE_ENEMY_CALLBACK_GO_MOTION_SLE = 3,
	DANCE_ENEMY_CALLBACK_GO_MOTION_NEXT = 4,
	DANCE_ENEMY_CALLBACK_END = 5
} DanceEnemyCallbackMode;

typedef void DanceEnemyCallbackFunc(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ Bool set_flag;
	/* 0x4 */ void *eff_task_p;
} EnemyEffectLostWork;

// warning: multiple differing types with the same name (descriptor not equal)
typedef EnemyBeamCtrl EnemyBeamCtrl;
// warning: multiple differing types with the same name (descriptor not equal)
typedef EnemyWarpHandle EnemyWarpHandle;
// warning: multiple differing types with the same name (descriptor not equal)
typedef EnmShadowBoostHandle EnmShadowBoostHandle;
// warning: multiple differing types with the same name (descriptor not equal)
typedef EnemyBoostHandle EnemyBoostHandle;

typedef enum {
	ENUM_KAI_WH_M_M = 0,
	ENUM_KAI_WH_M_PLAYER_A = 1,
	ENUM_KAI_WH_M_CHN1 = 2,
	ENUM_KAI_WH_M_LOWERTORSO = 3,
	ENUM_KAI_WH_M_ABDOMUM = 4,
	ENUM_KAI_WH_M_UPPERTORSO = 5,
	ENUM_KAI_WH_M_EFF1 = 6,
	ENUM_KAI_WH_M_CHN2 = 7,
	ENUM_KAI_WH_M_NECK = 8,
	ENUM_KAI_WH_M_HEAD = 9,
	ENUM_KAI_WH_M_EFF2 = 10,
	ENUM_KAI_WH_M_CHN7 = 11,
	ENUM_KAI_WH_M_TUNO_L = 12,
	ENUM_KAI_WH_M_EFF7 = 13,
	ENUM_KAI_WH_M_CHN8 = 14,
	ENUM_KAI_WH_M_TUNO_R = 15,
	ENUM_KAI_WH_M_EFF8 = 16,
	ENUM_KAI_WH_M_CHN9 = 17,
	ENUM_KAI_WH_M_HL1 = 18,
	ENUM_KAI_WH_M_HL2 = 19,
	ENUM_KAI_WH_M_EFF9 = 20,
	ENUM_KAI_WH_M_CHN10 = 21,
	ENUM_KAI_WH_M_HR1 = 22,
	ENUM_KAI_WH_M_HR2 = 23,
	ENUM_KAI_WH_M_EFF10 = 24,
	ENUM_KAI_WH_M_FACE = 25,
	ENUM_KAI_WH_M_EYEBALL_R = 26,
	ENUM_KAI_WH_M_EYEBALL_L = 27,
	ENUM_KAI_WH_M_MABU_R = 28,
	ENUM_KAI_WH_M_MABU_L = 29,
	ENUM_KAI_WH_M_CHN3 = 30,
	ENUM_KAI_WH_M_LCOLLARBONE = 31,
	ENUM_KAI_WH_M_LUPARM = 32,
	ENUM_KAI_WH_M_LLOWARM = 33,
	ENUM_KAI_WH_M_LHAND = 34,
	ENUM_KAI_WH_M_LTE = 35,
	ENUM_KAI_WH_M_EFF3 = 36,
	ENUM_KAI_WH_M_CHN4 = 37,
	ENUM_KAI_WH_M_RCOLLARBONE = 38,
	ENUM_KAI_WH_M_RUPARM = 39,
	ENUM_KAI_WH_M_RLOWARM = 40,
	ENUM_KAI_WH_M_RHAND = 41,
	ENUM_KAI_WH_M_RTE = 42,
	ENUM_KAI_WH_M_EFF4 = 43,
	ENUM_KAI_WH_M_BOOST_R = 44,
	ENUM_KAI_WH_M_BOOST_L = 45,
	ENUM_KAI_WH_M_CHN5 = 46,
	ENUM_KAI_WH_M_LPELVIS = 47,
	ENUM_KAI_WH_M_LTHIGH = 48,
	ENUM_KAI_WH_M_LLOWLEG = 49,
	ENUM_KAI_WH_M_LREARFOOT = 50,
	ENUM_KAI_WH_M_LFRONTFOOT = 51,
	ENUM_KAI_WH_M_EFF5 = 52,
	ENUM_KAI_WH_M_CHN6 = 53,
	ENUM_KAI_WH_M_RPELVIS = 54,
	ENUM_KAI_WH_M_RTHIGH = 55,
	ENUM_KAI_WH_M_RLOWLEG = 56,
	ENUM_KAI_WH_M_RREARFOOT = 57,
	ENUM_KAI_WH_M_RFRONTFOOT = 58,
	ENUM_KAI_WH_M_EFF6 = 59,
	ENUM_KAI_WH_M_MODEL = 60,
	ENUM_KAI_END = 61
} KairoboIndex;

typedef enum {
	KAIROBO_OBJ_MOUTH = 0,
	KAIROBO_OBJ_HEAD = 1,
	KAIROBO_OBJ_END = 2
} KairoboObjIndex;

typedef enum {
	KAIROBO_MOUTH_QMOTION = 0,
	KAIROBO_MOUTH_CHARGE = 1,
	KAIROBO_MOUTH_NORMAL = 2,
	KAIROBO_MOUTH_END = 3
} KairoboMouthIndex;

// warning: multiple differing types with the same name (descriptor not equal)
typedef Sint8 EnemyMotionMode;

// warning: multiple differing types with the same name (descriptor not equal)
enum EnemyMotionMode {
	ENEMY_MOTION_WAIT = 0,
	ENEMY_MOTION_NORMAL = 1,
	ENEMY_MOTION_TAME = 2,
	ENEMY_MOTION_POSE = 3,
	ENEMY_MOTION_END = 4
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x9c
	/* 0x00 */ Sint8 index;
	/* 0x01 */ Sint8 grid_x;
	/* 0x02 */ Sint8 grid_z;
	/* 0x03 */ Sint8 timing_no;
	/* 0x04 */ Sint8 timing_max;
	/* 0x05 */ Sint8 qno;
	/* 0x06 */ EnemyMotionMode mode;
	/* 0x07 */ Sint8 step_count;
	/* 0x08 */ Sint16 seq_id;
	/* 0x0a */ Sint16 dance_index;
	/* 0x0c */ float next_beat;
	/* 0x10 */ float next_limit;
	/* 0x14 */ dgMathVector3 pos;
	/* 0x20 */ dgMathAngle3 ang;
	/* 0x2c */ dgMathVector3 center_pos;
	/* 0x38 */ void *dance_man_task_p;
	/* 0x3c */ dgCharCtrl *char_ctrl_p;
	/* 0x40 */ CdsGridHandle *grid_h;
	/* 0x44 */ dgCharMotionCtrl mot_ctrl;
	/* 0x64 */ float start_beat;
	/* 0x68 */ float pose_offset_frame;
	/* 0x6c */ Sint32 tame_index;
	/* 0x70 */ DanceEnemyStatus status;
	/* 0x74 */ float sle_change_beat;
	/* 0x78 */ void (*exec_func_p)(/* parameters unknown */);
	/* 0x7c */ DanceEnemyCallbackFunc *callback_p;
	/* 0x80 */ void *callback_arg_p;
	/* 0x84 */ Sint32 motion_mask;
	/* 0x88 */ Bool masked_flag;
	/* 0x8c */ dgCharMotionData *set_motdata_p;
	/* 0x90 */ dgCharMotionData *pose_motdata_p;
	/* 0x94 */ Sint32 pose_index;
	/* 0x98 */ Bool loop_flag;
} DanceEnemyCtrl;

typedef struct { // 0xc
	/* 0x0 */ DanceEnemyCtrl *ctrl_p;
	/* 0x4 */ dgCharCtrl *char_ctrl_p;
	/* 0x8 */ dgCharObjCtrl *obj_ctrl_p;
} DanceKairoboTask;

typedef enum {
	DANCE_PEOPLE_STATUS_NORMAL = 0,
	DANCE_PEOPLE_STATUS_RESCUE = 1,
	DANCE_PEOPLE_STATUS_LOST = 2,
	DANCE_PEOPLE_STATUS_DIE = 3,
	DANCE_PEOPLE_STATUS_END = 4
} DancePeopleStatus;

typedef struct { // 0x20
	/* 0x00 */ float start_beat;
	/* 0x04 */ float height;
	/* 0x08 */ dgMathVector3 *center_pos_p;
	/* 0x0c */ dgMathVector3 *disp_pos_p;
	/* 0x10 */ dgMathVector3 foot_pos;
	/* 0x1c */ Sint32 reserve;
} PeopleEffectRescueWork;

typedef struct { // 0x8
	/* 0x0 */ Bool set_flag;
	/* 0x4 */ void *eff_task_p;
} PeopleEffectLostWork;

// warning: multiple differing types with the same name (descriptor not equal)
typedef PeopleEffectRescueHandle PeopleEffectRescueHandle;

typedef struct { // 0xb0
	/* 0x00 */ Sint8 index;
	/* 0x01 */ Sint8 grid_x;
	/* 0x02 */ Sint8 grid_z;
	/* 0x04 */ Sint16 seq_id;
	/* 0x08 */ DanceIndexEnemy dance_index;
	/* 0x0c */ dgMathVector3 pos;
	/* 0x18 */ dgMathAngle3 ang;
	/* 0x24 */ dgMathVector3 center_pos;
	/* 0x30 */ void *dance_man_task_p;
	/* 0x34 */ void *lost_eff_p;
	/* 0x38 */ dgCharCtrl *char_ctrl_p;
	/* 0x3c */ CdsGridHandle *grid_h;
	/* 0x40 */ dgCharMotionCtrl mot_ctrl;
	/* 0x60 */ float start_beat;
	/* 0x64 */ dgMathAngle1 rot_ang;
	/* 0x68 */ dgMathAngle1 rot_ang_per_frame;
	/* 0x6c */ float rot_ang_per_beat;
	/* 0x70 */ float rot_ang_delta;
	/* 0x74 */ Sint32 question_number;
	/* 0x78 */ Sint32 change_qno;
	/* 0x7c */ dgCharNo charno;
	/* 0x80 */ PeopleEffectRescueWork rescue_work;
	/* 0xa0 */ PeopleEffectLostWork lost_work;
	/* 0xa8 */ DancePeopleStatus status;
	/* 0xac */ void (*exec_func_p)(/* parameters unknown */);
} DancePeopleCtrl;

typedef struct { // 0x10
	/* 0x0 */ DancePeopleCtrl *ctrl_p;
	/* 0x4 */ dgCharCtrl *char_ctrl_p;
	/* 0x8 */ dgCharObjCtrl *obj_ctrl_p;
	/* 0xc */ void *poison_eff_ctrl_p;
} PeopleTask;

typedef enum {
	DGDRAWCALLBACK_STAT_FREE = 0,
	DGDRAWCALLBACK_STAT_BUSY = 1,
	DGDRAWCALLBACK_STAT_EOE = 2
} dgDrawCallBackStat;

typedef Bool (*dgDrawCallBackFunc)(/* parameters unknown */);

enum {
	DGDRAWCALLBACK_CALLMODE_ONCE = 0,
	DGDRAWCALLBACK_CALLMODE_RESIDENCE = 1
};

enum {
	DGAUDIO_CUE_STAT_FREE = 21062,
	DGAUDIO_CUE_STAT_BUSY = 23106,
	DGAUDIO_CUE_STAT_EOE = 23107
};

struct _dgAudioCue { // 0x50
	/* 0x00 */ Uint16 stat;
	/* 0x02 */ Uint16 flag;
	/* 0x04 */ Uint16 cmd;
	/* 0x06 */ Uint16 para;
	/* 0x08 */ Uint32 serial;
	/* 0x0c */ ADXF adxf;
	/* 0x10 */ void *preloadadr;
	/* 0x14 */ _dgAudioCue *next;
	/* 0x18 */ _dgAudioCue *prev;
	/* 0x1c */ Sint32 fmode;
	/* 0x20 */ char fname[37];
	/* 0x48 */ Sint32 pid;
	/* 0x4c */ Sint32 iid;
};

typedef _dgAudioCue dgAudioCue;
typedef _dgAudioCue *dgAudioCuePtr;

struct _dgAudioInfo { // 0xa98
	/* 0x000 */ Uint16 stat;
	/* 0x002 */ Uint16 ch;
	/* 0x004 */ Uint16 sfreq;
	/* 0x006 */ Uint16 flag;
	/* 0x008 */ dgAudioCuePtr cue_master;
	/* 0x00c */ dgAudioCue cue_buf[32];
	/* 0xa0c */ dgAudioCue cue_now;
	/* 0xa5c */ Float time;
	/* 0xa60 */ Float remain_time;
	/* 0xa64 */ Sint32 worksize;
	/* 0xa68 */ void *work;
	/* 0xa6c */ ADXT adxt;
	/* 0xa70 */ Sint32 adxt_stat;
	/* 0xa74 */ Sint32 entry_num;
	/* 0xa78 */ Bool go;
	/* 0xa7c */ Uint16 pause_time;
	/* 0xa7e */ Uint16 pause_cnt;
	/* 0xa80 */ Sint32 volume;
	/* 0xa84 */ ADXF adxf;
	/* 0xa88 */ Float link_base_time;
	/* 0xa8c */ Bool link_just;
	/* 0xa90 */ Bool link_pause;
	/* 0xa94 */ Sint32 link_cnt_pause;
};

typedef _dgAudioInfo dgAudioInfo;
typedef _dgAudioInfo *dgAudioInfoPtr;

struct _dgAudioSystemInfo { // 0x2a90
	/* 0x0000 */ void* (*malloc)(/* parameters unknown */);
	/* 0x0004 */ void (*free)(/* parameters unknown */);
	/* 0x0008 */ void (*memset)(/* parameters unknown */);
	/* 0x000c */ void (*memcpy)(/* parameters unknown */);
	/* 0x0010 */ dgAudioInfo info[4];
	/* 0x2a70 */ Float music_reload_sec;
	/* 0x2a74 */ Sint32 music_volume;
	/* 0x2a78 */ Sint32 voice_volume;
	/* 0x2a7c */ Uint32 serial_master;
	/* 0x2a80 */ Sint32 link_pause_wait;
	/* 0x2a84 */ GWHWND debwin_info_all;
	/* 0x2a88 */ Sint32 debwin_info_moreinfo_no;
	/* 0x2a8c */ GWHWND debwin_info_moreinfo;
};

typedef _dgAudioSystemInfo dgAudioSystemInfo;
typedef _dgAudioSystemInfo *dgAudioSystemInfoPtr;

typedef struct { // 0x4c
	/* 0x00 */ Uint16 ready;
	/* 0x02 */ Uint16 is_format;
	/* 0x04 */ Uint32 last_error;
	/* 0x08 */ Uint32 progress_count;
	/* 0x0c */ Uint32 progress_max;
	/* 0x10 */ Uint32 operation;
	/* 0x14 */ BUS_DISKINFO disk_info;
} BupInfo;

typedef struct { // 0x268
	/* 0x000 */ BupInfo info[8];
	/* 0x260 */ void *save_buf;
	/* 0x264 */ void (*func)(/* parameters unknown */);
} BupCtrl;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x8
	/* 0x0 */ int select_no;
	/* 0x4 */ GWHWND hwnd;
} BupDebugTask;

typedef enum {
	CAM_X = 0,
	CAM_Y = 1,
	CAM_Z = 2,
	CAM_EYE = 3,
	CAM_MAX = 4
} CamType;

typedef struct { // 0x18
	/* 0x00 */ dgMathVector3 cvec;
	/* 0x0c */ Float radius;
	/* 0x10 */ dgMathAngle2 rot;
} CamParam;

typedef struct { // 0x50
	/* 0x00 */ Sint8 lock_flag;
	/* 0x04 */ CamType select_camera_no;
	/* 0x08 */ CamParam param;
	/* 0x20 */ dgCamera *camptr[4];
	/* 0x30 */ dgMathVector3 ppos;
	/* 0x3c */ dgMathVector3 select_pos;
	/* 0x48 */ GWHWND hwnd;
	/* 0x4c */ GWHWND dummy_hwnd;
} CamDebugTask;

enum {
	CTYPE_NORMAL = 0,
	CTYPE_RIGHT = 1,
	CTYPE_TOP = 2,
	CTYPE_FRONT = 3,
	CTYPE_FAR = 4,
	CTYPE_MAX = 5
};

enum {
	CEDIT_TYPE_EYE = 0,
	CEDIT_TYPE_ANG = 1,
	CEDIT_TYPE_ROLL = 2,
	CEDIT_TYPE_INT_X = 3,
	CEDIT_TYPE_INT_Y = 4,
	CEDIT_TYPE_INT_Z = 5,
	CEDIT_TYPE_MAX = 6
};

typedef struct { // 0x38
	/* 0x00 */ dgMathVector3 ceye;
	/* 0x0c */ dgMathVector3 cint;
	/* 0x18 */ dgMathAngle1 ang;
	/* 0x1c */ dgMathVector3 cvec;
	/* 0x28 */ Float radius;
	/* 0x2c */ dgMathAngle3 rot;
} CamEditCamera;

typedef struct { // 0x38
	/* 0x00 */ dgMathVector3 pcenter;
	/* 0x0c */ dgMathVector3 pbase_pos;
	/* 0x18 */ dgMathAngle3 pbase_ang;
	/* 0x24 */ Float spline_ctrl_ratio;
	/* 0x28 */ void *vm_fname_task;
	/* 0x2c */ char *vm_fname;
	/* 0x30 */ int vm_exec_ok;
	/* 0x34 */ int save_ok;
} CamEditWork;

typedef struct { // 0x24
	/* 0x00 */ Sint32 frame;
	/* 0x04 */ dgMathVector3 ceye;
	/* 0x10 */ dgMathVector3 cint;
	/* 0x1c */ dgMathAngle1 ang;
	/* 0x20 */ dgMathAngle1 roll;
} CamEditPoint;

typedef struct { // 0x14
	/* 0x00 */ Sint32 frame;
	/* 0x04 */ Sint16 flag;
	/* 0x06 */ Sint16 nb_point;
	/* 0x08 */ CamEditPoint *point;
	/* 0x0c */ void *dummy;
	/* 0x10 */ CamEditNode *next;
} CamEditNode;

typedef struct { // 0x8
	/* 0x0 */ Sint32 nb_node;
	/* 0x4 */ CamEditNode *node;
} CamEditSeqHeader;

typedef struct { // 0x100
	/* 0x00 */ Sint32 id;
	/* 0x04 */ Uint32 filesize;
	/* 0x08 */ Sint32 nb_seq;
	/* 0x0c */ Sint32 dummy;
	/* 0x10 */ CamEditSeqHeader *seq_header[24];
	/* 0x70 */ CamEditSeqHeader *reserve[36];
} CamEditHeader;

typedef struct { // 0x10
	/* 0x0 */ CamEditHeader *header;
	/* 0x4 */ int current_seq_no;
	/* 0x8 */ int force_node_play;
	/* 0xc */ Sint32 base_frame;
} CamEditPlay;

typedef struct { // 0x2650
	/* 0x0000 */ Sint8 mode;
	/* 0x0001 */ Sint8 edit_point_mode;
	/* 0x0002 */ Sint8 round_no;
	/* 0x0003 */ Sint8 block_no;
	/* 0x0004 */ Sint8 current_seq_no;
	/* 0x0005 */ Sint8 current_node_no;
	/* 0x0006 */ Sint8 current_point_no;
	/* 0x0007 */ Sint8 load_flag;
	/* 0x0008 */ Sint8 test_play_flag;
	/* 0x000c */ Sint32 test_play_frame;
	/* 0x0010 */ void (*yn_callback)(/* parameters unknown */);
	/* 0x0014 */ CamEditSeqHeader *current_seq;
	/* 0x0018 */ CamEditNode *current_node;
	/* 0x001c */ CamEditHeader header;
	/* 0x011c */ CamEditPoint point[256];
	/* 0x251c */ Uint32 *save_img;
	/* 0x2520 */ Sint32 use_img;
	/* 0x2524 */ Sint8 ctype;
	/* 0x2525 */ Sint8 cedit_type;
	/* 0x2528 */ CamEditCamera camera[5];
	/* 0x2640 */ dgCamera *view_camera;
	/* 0x2644 */ GWHWND yn_hwnd;
	/* 0x2648 */ GWHWND hwnd;
	/* 0x264c */ dgBupHandle *buph;
} CamEditTask;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x10
	/* 0x0 */ int no;
	/* 0x4 */ CamEditTask *parent;
	/* 0x8 */ GWHWND base_hwnd;
	/* 0xc */ GWHWND text_hwnd;
} CamEditFnameTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgCamForce dgCamForce;

typedef enum {
	DG_SPL_TYPE_POINT = 0,
	DG_SPL_TYPE_LINEAR = 1,
	DG_SPL_TYPE_BSPLINE = 2,
	DG_SPL_TYPE_BSPLINE_L = 3,
	DG_SPL_TYPE_MAX = 4
} dgSplineType;

typedef enum {
	DG_SPL_DATA_V1 = 0,
	DG_SPL_DATA_V2 = 1,
	DG_SPL_DATA_V3 = 2,
	DG_SPL_DATA_A1 = 3,
	DG_SPL_DATA_A2 = 4,
	DG_SPL_DATA_A3 = 5,
	DG_SPL_DATA_MAX = 6
} dgSplineDataType;

typedef enum {
	DG_SPL_PNT_LHND = 0,
	DG_SPL_PNT_POSITION = 1,
	DG_SPL_PNT_RHND = 2,
	DG_SPL_PNT_MAX = 3
} dgSplinePntType;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgSpline dgSpline;

typedef enum {
	DG_SPLEDIT_TYPE_V3 = 0,
	DG_SPLEDIT_TYPE_A1 = 1,
	DG_SPLEDIT_TYPE = 2
} dgSplEditType;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgSplEdit dgSplEdit;
typedef void dgSplEditCallback(/* parameters unknown */);

enum {
	CE_MODE_NON = 0,
	CE_MODE_SEQ = 1,
	CE_MODE_NODE = 2,
	CE_MODE_PNT = 3,
	CE_MODE_MAX = 4
};

enum {
	CE_FTYPE_LOAD = 0,
	CE_FTYPE_LOAD_ASREAD = 1,
	CE_FTYPE_SAVE = 2,
	CE_FTYPE_MAX = 3
};

enum {
	CE_COORD_GLOBAL = 0,
	CE_COORD_PCENTER_START = 1,
	CE_COORD_PCENTER_ALWAYS = 2,
	CE_COORD_PBASE = 3,
	CE_COORD_PCENTER_IXY_ALWAYS = 4,
	CE_COORD_MAX = 5
};

enum {
	CE_BUTTON_PLAY = 0,
	CE_BUTTON_PLAY_LOOP = 1,
	CE_BUTTON_PLAY_REVERSE = 2,
	CE_BUTTON_PLAY_COMMA = 3,
	CE_BUTTON_PLAY_SET = 4,
	CE_BUTTON_PLAY_SYNC = 5,
	CE_BUTTON_PLAY_BASE = 6,
	CE_BUTTON_PLAY_CAMVAR1 = 7,
	CE_BUTTON_PLAY_CAMVAR2 = 8,
	CE_BUTTON_PLAY_CAMVAR3 = 9,
	CE_BUTTON_FILE_LOAD = 10,
	CE_BUTTON_FILE_LOAD_ASREAD = 11,
	CE_BUTTON_FILE_SAVE = 12,
	CE_BUTTON_FILE_SWITCH = 13,
	CE_BUTTON_COPY = 14,
	CE_BUTTON_PASTE = 15,
	CE_BUTTON_ADD = 16,
	CE_BUTTON_DELETE = 17,
	CE_BUTTON_INSERT = 18,
	CE_BUTTON_SELECT = 19,
	CE_BUTTON_PREV = 20,
	CE_BUTTON_NEXT = 21,
	CE_BUTTON_CAM_FRAME = 22,
	CE_BUTTON_CAM_POWER = 23,
	CE_BUTTON_CAM_CAMERA = 24,
	CE_BUTTON_CAM_INTEREST = 25,
	CE_BUTTON_CAM_ROLL = 26,
	CE_BUTTON_CAM_ANG = 27,
	CE_BUTTON_CAM_SET = 28,
	CE_BUTTON_CAM_TO_CURR_CAM = 29,
	CE_BUTTON_CAM_TO_CURR_PNT = 30,
	CE_BUTTON_CAM_REVERSE = 31,
	CE_BUTTON_CAM_PLAY_LINEAR = 32,
	CE_BUTTON_DEBUG = 33,
	CE_BUTTON_DEBUG_COL = 34,
	CE_BUTTON_EXIT = 35,
	CE_BUTTON_MAX = 36
};

enum {
	CE_SPL_EYE = 0,
	CE_SPL_INT = 1,
	CE_SPL_ROLL = 2,
	CE_SPL_ANG = 3,
	CE_SPL_TEYE = 4,
	CE_SPL_TINT = 5,
	CE_SPL_TROLL = 6,
	CE_SPL_TANG = 7,
	CE_SPL_MAX = 8
};

enum {
	CE_SPLEDIT_EYE = 0,
	CE_SPLEDIT_INT = 1,
	CE_SPLEDIT_START_A1 = 2,
	CE_SPLEDIT_ROLL = 2,
	CE_SPLEDIT_ANG = 3,
	CE_SPLEDIT_MAX = 4
};

typedef struct { // 0x10
	/* 0x0 */ void *offset;
	/* 0x4 */ Sint32 type;
	/* 0x8 */ char *name;
	/* 0xc */ GWF_BUTTONFUNC func;
} ButtonData;

typedef struct { // 0x8
	/* 0x0 */ ButtonData *button;
	/* 0x4 */ int num;
} ButtonRowData;

typedef struct { // 0x8
	/* 0x0 */ Sint32 num;
	/* 0x4 */ Sint32 data_offset;
} ceNodeHeader;

typedef struct { // 0x44
	/* 0x00 */ Sint32 nb_frame;
	/* 0x04 */ Sint8 flag[8];
	/* 0x0c */ Sint32 force_no;
	/* 0x10 */ Sint32 dummy;
	/* 0x14 */ dgSpline *spline[8];
	/* 0x34 */ void *force;
	/* 0x38 */ Sint32 reserve[3];
} ceNode;

typedef struct { // 0x10
	/* 0x0 */ Sint32 id;
	/* 0x4 */ Sint32 datasize;
	/* 0x8 */ Sint32 num;
	/* 0xc */ Sint32 data_offset;
} ceSeqHeader;

typedef struct { // 0x40194
	/* 0x00000 */ Sint8 mode;
	/* 0x00001 */ Sint8 read_only_flag;
	/* 0x00002 */ Sint8 debug_mode;
	/* 0x00003 */ Sint8 debug_color_mode;
	/* 0x00004 */ Sint8 force_edit_no;
	/* 0x00005 */ Sint8 prev_force_edit_no;
	/* 0x00008 */ dgMemPartition *memp;
	/* 0x0000c */ ceSeqHeader *ro_header;
	/* 0x00010 */ int current_seq_no;
	/* 0x00014 */ int current_node_no;
	/* 0x00018 */ int current_camvar_no;
	/* 0x0001c */ int current_seq_no_for_switch[2];
	/* 0x00024 */ int current_node_no_for_switch[2];
	/* 0x0002c */ ceNodeHeader *current_node_header;
	/* 0x00030 */ Sint32 current_node_start_frame;
	/* 0x00034 */ ceNodeHeader *node_header_for_paste;
	/* 0x00038 */ ceNode *node_for_paste;
	/* 0x0003c */ GWHWND top_hwnd;
	/* 0x00040 */ GWHWND button_hwnd[36];
	/* 0x000d0 */ Sint8 button_stat[2][36];
	/* 0x00118 */ int button_stat_switch;
	/* 0x0011c */ int button_end_y;
	/* 0x00120 */ Sint32 play_flag;
	/* 0x00124 */ Float current_frame;
	/* 0x00128 */ Sint32 play_base_frame;
	/* 0x0012c */ Sint32 play_start_frame;
	/* 0x00130 */ Sint32 play_end_frame;
	/* 0x00134 */ int play_start_node;
	/* 0x00138 */ int play_end_node;
	/* 0x0013c */ int play_comma_flag;
	/* 0x00140 */ int spl_edit_mode;
	/* 0x00144 */ dgSplEdit *spl_edit_task[4];
	/* 0x00154 */ int vm_exec_ok;
	/* 0x00158 */ void *vm_fname_task;
	/* 0x0015c */ char *vm_tmp_fname;
	/* 0x00160 */ Uint32 *save_img;
	/* 0x00164 */ dgBupHandle *buph;
	/* 0x00168 */ Sint32 load_flag;
	/* 0x0016c */ void *dialog_task;
	/* 0x00170 */ dgCdbHandle cdbh;
	/* 0x00174 */ NJS_CNK_OBJECT *object;
	/* 0x00178 */ dgCharNo player_charno;
	/* 0x0017c */ dgCharNo player_charno_req;
	/* 0x00180 */ Sint32 prev_frame_index;
	/* 0x00184 */ dgMathQuaternion pc_quat[4096];
	/* 0x10184 */ dgMathVector3 pc_pos[4096];
	/* 0x1c184 */ dgMathVector3 pc_pos_ixy[4096];
	/* 0x28184 */ dgMathVector3 pb_pos[4096];
	/* 0x34184 */ dgMathAngle3 pb_ang[4096];
	/* 0x40184 */ GWHWND slider_hwnd;
	/* 0x40188 */ GWHWND text_hwnd;
	/* 0x4018c */ GWHWND choice_hwnd;
	/* 0x40190 */ GWHWND force_hwnd;
} ceTask;

typedef struct { // 0xc
	/* 0x0 */ ceSeqHeader *work;
	/* 0x4 */ char *vm_fname;
	/* 0x8 */ char *vm_ro_fname;
} ceWork;

typedef struct { // 0x28
	/* 0x00 */ Float force[2];
	/* 0x08 */ Sint32 frame[2];
	/* 0x10 */ Sint32 freq[2];
	/* 0x18 */ Float ka_cam;
	/* 0x1c */ Float kv_cam;
	/* 0x20 */ Float ka_int;
	/* 0x24 */ Float kv_int;
} ceForce;

typedef struct { // 0x120
	/* 0x000 */ ceSeqHeader *header;
	/* 0x004 */ ceSeqHeader *header_org;
	/* 0x008 */ int current_seq_no;
	/* 0x00c */ Float base_frame;
	/* 0x010 */ int prev_seq_no;
	/* 0x014 */ int prev_node_no;
	/* 0x018 */ dgMathVector3 pb_start_pos;
	/* 0x024 */ dgMathAngle3 pb_start_ang;
	/* 0x030 */ dgMathVector3 pb_curr_pos;
	/* 0x03c */ dgMathAngle3 pb_curr_ang;
	/* 0x050 */ dgMathMatrix pc_start_mat;
	/* 0x090 */ dgMathMatrix pc_curr_mat;
	/* 0x0d0 */ dgMathMatrix pc_ixy_curr_mat;
	/* 0x110 */ dgCamForce *cam_force;
	/* 0x114 */ void (*play_end_callback_func)(/* parameters unknown */);
} dgCenBuf;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0xc
	/* 0x0 */ int no;
	/* 0x4 */ GWHWND base_hwnd;
	/* 0x8 */ GWHWND text_hwnd;
} CamEditFnameTask;

typedef struct { // 0x10
	/* 0x0 */ dgSplEdit *spl_edit_task;
	/* 0x4 */ void *ptr;
	/* 0x8 */ GWHWND base_hwnd;
	/* 0xc */ GWHWND sub_hwnd;
} CamEditDialogTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x20
	/* 0x00 */ dgMathVector3 ceye;
	/* 0x0c */ dgMathVector3 cint;
	/* 0x18 */ dgMathAngle1 roll;
	/* 0x1c */ dgMathAngle1 ang;
} dgCamera;

typedef struct { // 0x190
	/* 0x000 */ Sint8 mirror_mode;
	/* 0x001 */ Sint8 relative_mode;
	/* 0x002 */ Sint8 dummy8[14];
	/* 0x010 */ dgCamera camera;
	/* 0x030 */ dgMathMatrix cam_mat;
	/* 0x070 */ dgMathMatrix inv_mat;
	/* 0x0b0 */ dgMathMatrix inv_mat_nomirror;
	/* 0x0f0 */ dgMathMatrix relative_mat;
	/* 0x130 */ float inv_sin;
	/* 0x134 */ float cos2;
	/* 0x138 */ GWHWND hwnd;
	/* 0x13c */ float frame;
	/* 0x140 */ float prev_frame;
	/* 0x144 */ NJS_MOTION *motion;
	/* 0x148 */ NJS_MKEY_F *cpos;
	/* 0x14c */ NJS_MKEY_F *ctarget;
	/* 0x150 */ NJS_MKEY_SA1 *croll;
	/* 0x154 */ NJS_MKEY_SA1 *cangle;
	/* 0x158 */ dgMathVector1 mkeyf_blend_param;
	/* 0x15c */ dgMathAngle1 mkeysa1_blend_param;
	/* 0x160 */ Sint32 blend_disable_flag;
	/* 0x164 */ void (*user_disp_func)(/* parameters unknown */);
	/* 0x168 */ NJS_CAMERA nj_camera;
} Camera;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x88
	/* 0x00 */ Sint8 rand_index;
	/* 0x04 */ Float force[2];
	/* 0x0c */ Sint32 frame[2];
	/* 0x14 */ Sint32 freq[2];
	/* 0x1c */ Float ka_cam;
	/* 0x20 */ Float kv_cam;
	/* 0x24 */ Float ka_int;
	/* 0x28 */ Float kv_int;
	/* 0x2c */ dgMathVector3 acc_current;
	/* 0x38 */ Float frame_end_beat;
	/* 0x3c */ Float freq_end_beat;
	/* 0x40 */ dgMathVector3 acc_cam;
	/* 0x4c */ dgMathVector3 spd_cam;
	/* 0x58 */ dgMathVector3 vec_cam;
	/* 0x64 */ dgMathVector3 acc_int;
	/* 0x70 */ dgMathVector3 spd_int;
	/* 0x7c */ dgMathVector3 vec_int;
} dgCamForce;

enum {
	CP_DIALOG_MES = 0,
	CP_DIALOG_YES = 1,
	CP_DIALOG_NO = 2,
	CP_DIALOG_MAX = 3
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x98
	/* 0x00 */ Sint8 side;
	/* 0x04 */ NJS_POLYGON_VTX poly[4];
	/* 0x44 */ Float *disp_x;
	/* 0x48 */ Float disp_y;
	/* 0x4c */ Float disp_dlt_y;
	/* 0x50 */ Float poly_gapsize_x;
	/* 0x54 */ Float poly_gapsize_y;
	/* 0x58 */ Uint32 poly_color;
	/* 0x5c */ Float x;
	/* 0x60 */ Float y;
	/* 0x64 */ Float u;
	/* 0x68 */ Float v;
	/* 0x6c */ Sint32 gapsize_y;
	/* 0x70 */ char **tbl;
	/* 0x74 */ Sint32 line_num;
	/* 0x78 */ Float kj_size_x;
	/* 0x7c */ Float kj_size_y;
	/* 0x80 */ Uint32 kj_color;
	/* 0x84 */ Sint32 kj_gapsize_x;
	/* 0x88 */ Sint32 kj_framesize;
	/* 0x8c */ Sint32 kj_shadesize;
	/* 0x90 */ Sint32 kj_boldsize;
	/* 0x94 */ Float kj_ooz;
} dgCaption;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x10
	/* 0x0 */ Sint32 id;
	/* 0x4 */ Sint32 num;
	/* 0x8 */ Sint32 absolute_flag;
	/* 0xc */ Sint32 str_entry_flag;
} dgCaptionHeader;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x8
	/* 0x0 */ Sint32 line_num;
	/* 0x4 */ char **str_tbl;
} dgCaptionStrData;

typedef struct { // 0x1c
	/* 0x00 */ Sint8 mode;
	/* 0x04 */ int no;
	/* 0x08 */ dgCaptionType type;
	/* 0x0c */ Sint32 start_frame;
	/* 0x10 */ Sint32 end_frame;
	/* 0x14 */ dgCaptionStrData *data;
	/* 0x18 */ dgCaption *caption;
} dgCaptionStrTask;

typedef struct { // 0x8
	/* 0x0 */ void *ptr;
	/* 0x4 */ Uint32 serial_id;
} CaptionLoadTask;

typedef struct { // 0x28
	/* 0x00 */ Sint8 select_no;
	/* 0x01 */ Sint8 wait;
	/* 0x04 */ void *parent_task;
	/* 0x08 */ dgCaptionStrData *data[3];
	/* 0x14 */ dgCaption *caption[3];
	/* 0x20 */ void (*callback_func[2])(/* parameters unknown */);
} dgCaptionDialogTask;

typedef struct { // 0xc
	/* 0x0 */ Sint8 flag;
	/* 0x4 */ Sint32 start_frame;
	/* 0x8 */ Sint32 end_frame;
} dgCaptionStreamData;

typedef struct { // 0x8
	/* 0x0 */ Sint32 line_num;
	/* 0x4 */ Uint32 offset;
} dgCaptionStreamHeaderSub;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x20
	/* 0x00 */ Sint32 id;
	/* 0x04 */ Sint32 stm_fsize;
	/* 0x08 */ Sint32 num;
	/* 0x0c */ Sint32 reserve[5];
} dgCaptionStreamHeader;

typedef struct { // 0xc
	/* 0x0 */ void *ptr;
	/* 0x4 */ Uint32 serial_id;
	/* 0x8 */ dgCaptionStreamType type;
} CaptionLoadTask2;

typedef struct { // 0x4
	/* 0x0 */ dgCaptionStreamType type;
} dgCaptionStreamParent;

typedef struct { // 0xc
	/* 0x0 */ void *ptr;
	/* 0x4 */ Uint32 serial_id;
	/* 0x8 */ dgCaptionStreamType type;
} CaptionStreamLoadTask;

typedef struct { // 0x20
	/* 0x00 */ Sint8 mode;
	/* 0x04 */ int cap_no;
	/* 0x08 */ int stm_no;
	/* 0x0c */ dgCaptionStreamType stm_type;
	/* 0x10 */ int current_line;
	/* 0x14 */ int next_line;
	/* 0x18 */ int max_line;
	/* 0x1c */ dgCaption *caption;
} dgCapStmTask;

typedef struct { // 0x14
	/* 0x00 */ int pno;
	/* 0x04 */ int ino;
	/* 0x08 */ int done;
	/* 0x0c */ int mode;
	/* 0x10 */ int frame;
} dgCapStmPrepTask;

enum {
	DGCDB_INFO_STAT_FREE = 21062,
	DGCDB_INFO_STAT_BUSY = 23106,
	DGCDB_INFO_STAT_NOWLOAD = 17484,
	DGCDB_INFO_STAT_TRASH = 21076,
	DGCDB_INFO_STAT_EOE = 21077
};

enum {
	DGCDB_INFO_SRCTYPE_UNKNOWN = 0,
	DGCDB_INFO_SRCTYPE_CD1 = 1,
	DGCDB_INFO_SRCTYPE_CDA = 2,
	DGCDB_INFO_SRCTYPE_CDR = 3,
	DGCDB_INFO_SRCTYPE_EOE = 4
};

enum {
	DGCDB_FUNCMODE_GD = 0,
	DGCDB_FUNCMODE_PC = 1,
	DGCDB_FUNCMODE_MEM = 2
};

enum {
	DGCDB_DEBWIN_PAGE_MAIN = 0,
	DGCDB_DEBWIN_PAGE_KOMONO = 1,
	DGCDB_DEBWIN_PAGE_FACETEX = 2,
	DGCDB_DEBWIN_PAGE_TRASH = 3,
	DGCDB_DEBWIN_PAGE_MAX = 4
};

struct _dgCdbCnkHeader { // 0x8
	/* 0x0 */ char atom[4];
	/* 0x4 */ Sint32 size;
};

typedef _dgCdbCnkHeader dgCdbCnkHeader;
typedef _dgCdbCnkHeader *dgCdbCnkHeaderPtr;

struct _dgCdbCDAResource { // 0x8
	/* 0x0 */ Sint32 iid;
	/* 0x4 */ Uint32 charno;
};

typedef _dgCdbCDAResource dgCdbCDAResource;
typedef _dgCdbCDAResource *dgCdbCDAResourcePtr;

struct _dgCdbCDAResHeader { // 0x10
	/* 0x0 */ dgCdbCnkHeader cnk;
	/* 0x8 */ dgCdbCDAResource res[1];
};

typedef _dgCdbCDAResHeader dgCdbCDAResHeader;
typedef _dgCdbCDAResHeader *dgCdbCDAResHeaderPtr;

struct _dgCdbCDRInfo { // 0x10
	/* 0x0 */ dgCdbCDRMapPtr map;
	/* 0x4 */ dgTexInfo *texinfo;
	/* 0x8 */ Uint32 fid;
	/* 0xc */ void *loadadr;
};

typedef _dgCdbCDRInfo dgCdbCDRInfo;
typedef _dgCdbCDRInfo *dgCdbCDRInfoPtr;

struct _dgCdbTrashInfo { // 0xc
	/* 0x0 */ _dgCdbTrashInfo *prev;
	/* 0x4 */ _dgCdbTrashInfo *next;
	/* 0x8 */ dgCdbInfoPtr my;
};

typedef _dgCdbTrashInfo dgCdbTrashInfo;
typedef _dgCdbTrashInfo *dgCdbTrashInfoPtr;

struct _dgCdbStaticInfo { // 0x4
	/* 0x0 */ Sint32 iid;
};

typedef _dgCdbStaticInfo dgCdbStaticInfo;
typedef _dgCdbStaticInfo *dgCdbStaticInfoPtr;

struct _dgCdbSystemInfo { // 0xad60
	/* 0x0000 */ dgCdbInfo buf[256];
	/* 0x3800 */ dgCdbInfoPtr map[1024];
	/* 0x4800 */ dgCdbStaticInfo staticinfo[1024];
	/* 0x5800 */ Sint32 cda_pid;
	/* 0x5804 */ dgCdbCDAResHeaderPtr reshed;
	/* 0x5808 */ void *tmp_load;
	/* 0x580c */ Sint32 tmp_load_size;
	/* 0x5810 */ dgCdbCDRInfo cdr_info;
	/* 0x5820 */ char **name_tbl;
	/* 0x5824 */ Sint32 name_tbl_max;
	/* 0x5828 */ char **name_roman_tbl;
	/* 0x582c */ Sint32 name_roman_tbl_max;
	/* 0x5830 */ dgCdbTrashInfoPtr trash_master;
	/* 0x5834 */ dgCdbTrashInfo trash_buf[2];
	/* 0x584c */ dgCdbCallbackList callback_cda_heap[1088];
	/* 0xad4c */ Uint32 cdacallback_serial_master;
	/* 0xad50 */ GWHWND debwin_info_main;
	/* 0xad54 */ Sint32 debwin_info_charno;
	/* 0xad58 */ GWHWND debwin_info_char;
	/* 0xad5c */ Sint32 debwin_info_char_page;
};

typedef _dgCdbSystemInfo dgCdbSystemInfo;
typedef _dgCdbSystemInfo *dgCdbSystemInfoPtr;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x18
	/* 0x00 */ Sint8 min_disp;
	/* 0x04 */ NJS_CELL_SPRITE *cspr;
	/* 0x08 */ dgCellsprTexData *tex_data;
	/* 0x0c */ int start_cell;
	/* 0x10 */ int nb_cell;
	/* 0x14 */ Uint32 number;
} dgCellsprNumber;

// warning: multiple differing types with the same name (descriptor not equal)
typedef dgCharShapeCtrl dgCharShapeCtrl;

typedef struct { // 0x8
	/* 0x0 */ Sint32 shape_magic_number;
	/* 0x4 */ Sint16 shape_num;
	/* 0x6 */ Sint16 abs_flag;
} dgCharShapeOption;

typedef struct { // 0x18
	/* 0x00 */ Sint32 mat_index;
	/* 0x04 */ Bool symm;
	/* 0x08 */ float frame;
	/* 0x0c */ mtnPose *prev_pose_p;
	/* 0x10 */ mtnPose *cur_pose_p;
	/* 0x14 */ mtnMotion *cur_mot_p;
} MotionInfo;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x68
	/* 0x00 */ Sint16 mat_index;
	/* 0x02 */ Sint16 mat_index_max;
	/* 0x04 */ Sint16 mot_index;
	/* 0x06 */ Sint16 mot_index_max;
	/* 0x08 */ dgMathMatrix *mat_p;
	/* 0x0c */ MotionInfo *mot_info_p;
	/* 0x10 */ mtnPose **pose_buf_pp[2];
	/* 0x18 */ mtnPose *tmp_pose_p;
	/* 0x1c */ mtnPose **cur_pose_buf_pp;
	/* 0x20 */ Sint32 buf_flag;
	/* 0x24 */ float base_y_trans;
	/* 0x28 */ float inv_base_y_trans;
	/* 0x2c */ dgCdbHandle ref_handle;
	/* 0x30 */ Bool root_trans_flag;
	/* 0x34 */ dgObjCtrl player_obj_ctrl;
	/* 0x60 */ Sint32 man_index;
	/* 0x64 */ GWHWND wnd_h;
} CharManTask;

typedef struct { // 0x10
	/* 0x0 */ CharManTask *man_task_p;
	/* 0x4 */ NJS_CNK_OBJECT *ref_obj_p;
	/* 0x8 */ dgCharNo ref_char_no;
	/* 0xc */ void *reserve_p;
} CharManData;

typedef struct { // 0x14
	/* 0x00 */ Sint32 level_counter[4];
	/* 0x10 */ GWHWND wnd_h;
} CharManWatchTask;

typedef struct { // 0x70
	/* 0x00 */ dgMathMatrix view_matrix;
	/* 0x40 */ dgMathVector3 world_pos;
	/* 0x4c */ dgMathVector1 dummy0;
	/* 0x50 */ dgMathVector3 view_pos;
	/* 0x5c */ dgMathVector1 dummy1;
	/* 0x60 */ dgOcCallback next_callback;
} CharCallbackValue;

typedef struct { // 0x10
	/* 0x0 */ dgCharLevel char_level;
	/* 0x4 */ dgCharObjCtrl *obj_ctrl_p;
	/* 0x8 */ void (*draw_func_p)(/* parameters unknown */);
	/* 0xc */ Sint32 padding;
} ConstrainData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x1c
	/* 0x00 */ dgShapePose *pose_p;
	/* 0x04 */ dgShapeMotion **shape_pp;
	/* 0x08 */ float frame;
	/* 0x0c */ float frame_max;
	/* 0x10 */ Sint32 shape_index;
	/* 0x14 */ Sint32 shape_num;
	/* 0x18 */ dgCharShapeCtrl *next_p;
} dgCharShapeCtrl;

struct SNASM_finddata_t { // 0x118
	/* 0x000 */ long unsigned int m_ulSize;
	/* 0x008 */ long unsigned int m_ulAttributes;
	/* 0x010 */ char m_szFilename[260];
};

struct _dgDebFileKeepCwd { // 0x108
	/* 0x000 */ Uint32 stat;
	/* 0x004 */ char dir[257];
};

typedef _dgDebFileKeepCwd dgDebFileKeepCwd;
typedef _dgDebFileKeepCwd *dgDebFileKeepCwdPtr;

enum {
	DGDEBFILE_STAT_FREE = 0,
	DGDEBFILE_STAT_BUSY = 1,
	DGDEBFILE_STAT_EOE = 2
};

typedef struct { // 0x28
	/* 0x00 */ Sint8 gw_init_flag;
	/* 0x01 */ Sint8 gw_disp_flag;
	/* 0x02 */ Sint8 gw_trans_flag;
	/* 0x03 */ Sint8 alert_performance_flag;
	/* 0x04 */ Sint8 alert_performance_drop;
	/* 0x08 */ Sint32 performance_count;
	/* 0x0c */ Sint32 performance_micro;
	/* 0x10 */ Sint32 pre_performance_start;
	/* 0x14 */ Sint32 pre_performance;
	/* 0x18 */ Sint32 post_performance_start;
	/* 0x1c */ Sint32 post_performance;
	/* 0x20 */ dgMemPartition *mem_partition;
	/* 0x24 */ int who;
} DebugBuf;

typedef struct { // 0x4
	/* 0x0 */ GWHWND task_hWnd;
} DebugTask;

typedef struct { // 0x8
	/* 0x0 */ char *port_name_p;
	/* 0x4 */ Uint32 port_num;
} PortInfoData;

struct _dgDrawCallBackInfo { // 0x28
	/* 0x00 */ dgDrawCallBackStat stat;
	/* 0x04 */ _dgDrawCallBackInfo *prev;
	/* 0x08 */ _dgDrawCallBackInfo *next;
	/* 0x0c */ Uint32 serial;
	/* 0x10 */ Uint32 flag;
	/* 0x14 */ dgDrawCallBackFunc func;
	/* 0x18 */ Sint32 p1;
	/* 0x1c */ Sint32 p2;
	/* 0x20 */ Sint32 p3;
	/* 0x24 */ Sint32 p4;
};

typedef _dgDrawCallBackInfo dgDrawCallBackInfo;
typedef _dgDrawCallBackInfo *dgDrawCallBackInfoPtr;

struct _dgDrawCallBackSystemInfo { // 0x28c
	/* 0x000 */ Uint32 serial_master;
	/* 0x004 */ dgDrawCallBackInfoPtr master;
	/* 0x008 */ dgDrawCallBackInfo buf[16];
	/* 0x288 */ GWHWND debwin;
};

typedef _dgDrawCallBackSystemInfo dgDrawCallBackSystemInfo;
typedef _dgDrawCallBackSystemInfo *dgDrawCallBackSystemInfoPtr;

typedef struct { // 0x9c
	/* 0x00 */ Uint32 col;
	/* 0x04 */ dgMathVector3 *spos_ptr;
	/* 0x08 */ dgMathVector3 *epos_ptr;
	/* 0x0c */ dgMathVector3 spos[6];
	/* 0x54 */ dgMathVector3 epos[6];
} AftrimgTask;

typedef struct { // 0x2c
	/* 0x00 */ dgEffAftrimgType type;
	/* 0x04 */ dgMathVector3 spos;
	/* 0x10 */ dgMathVector3 epos;
	/* 0x1c */ dgEffCountData count_data;
} AftrimgSetTask;

typedef struct { // 0xb4
	/* 0x00 */ Bool kasan_flg;
	/* 0x04 */ Uint32 tex_no[3];
	/* 0x10 */ Float frame;
	/* 0x14 */ Float ratio;
	/* 0x18 */ Float width;
	/* 0x1c */ Float scale;
	/* 0x20 */ Sint8 pat_num;
	/* 0x21 */ Sint8 part_num;
	/* 0x24 */ Uint32 col;
	/* 0x28 */ Uint32 col2;
	/* 0x2c */ dgMathVector3 spos[5];
	/* 0x68 */ dgMathVector3 epos[5];
	/* 0xa4 */ dgEffCountData count_data;
} AuraTask;

enum {
	AURA_HEAD = 0,
	AURA_BODY = 1,
	AURA_END = 2
};

typedef struct { // 0x64
	/* 0x00 */ Sint16 loop_cnt;
	/* 0x04 */ Float ratio;
	/* 0x08 */ Sint16 tex_no;
	/* 0x0a */ Sint16 pat_no;
	/* 0x0c */ Uint32 col;
	/* 0x10 */ Bool kasan_flg;
	/* 0x14 */ dgEffSimpleAuraType type;
	/* 0x18 */ dgMathVector3 *pos_ptr[3];
	/* 0x24 */ dgMathVector3 vpos[4];
	/* 0x54 */ dgEffCountData count_data;
} SimpleAuraTask;

typedef struct { // 0x210
	/* 0x000 */ Uint16 palette[256];
	/* 0x200 */ NJS_TEXPALETTE pl;
	/* 0x20c */ Sint8 cnt;
} PaletteTask;

typedef struct { // 0x1e4
	/* 0x000 */ Sint32 cnt;
	/* 0x004 */ Uint16 palette16[15][16];
} DspBackTask;

enum {
	ROT_Z = 0,
	ROT_Y = 1
};

typedef struct { // 0xc
	/* 0x0 */ dgMathVector3 *base_pos_ptr;
	/* 0x4 */ dgMathVector3 *offset_ptr;
	/* 0x8 */ Angle ang;
} VertexSubParam;

enum {
	UV4 = 0,
	UV16 = 1
};

enum {
	QUARTER_UL = 0,
	QUARTER_UR = 1,
	QUARTER_DL = 2,
	QUARTER_DR = 3
};

typedef struct { // 0x30
	/* 0x00 */ dgMathVector3 pos[4];
} Pos4;

typedef struct { // 0x3c
	/* 0x00 */ Pos4 pos_data;
	/* 0x30 */ Float length_ratio;
	/* 0x34 */ Float unit_ratio;
	/* 0x38 */ Float offset_ratio;
} DivBeamPosParam;

typedef struct { // 0x18
	/* 0x00 */ dgMathVector3 pos[2];
} DivBeamPos;

typedef struct { // 0x60
	/* 0x00 */ NJS_TEXTURE_VTX p[4];
} DivTextureVtx;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x48
	/* 0x00 */ Uint8 ok_flg;
	/* 0x04 */ Float ratio;
	/* 0x08 */ Float scale;
	/* 0x0c */ Float frame;
	/* 0x10 */ dgMathVector3 spos;
	/* 0x1c */ dgMathVector3 epos;
	/* 0x28 */ dgMathVector3 pos;
	/* 0x34 */ dgMathVector3 *epos_ptr;
	/* 0x38 */ dgEffCountData count_data;
} HeartTask;

typedef struct { // 0x74
	/* 0x00 */ Uint8 ok_flg;
	/* 0x01 */ Uint8 heart_num;
	/* 0x04 */ Float ratio;
	/* 0x08 */ Float size;
	/* 0x0c */ Float scale;
	/* 0x10 */ Float tmp_ratio[3];
	/* 0x1c */ dgMathVector3 spos;
	/* 0x28 */ dgMathVector3 epos;
	/* 0x34 */ dgMathVector3 pos[3];
	/* 0x58 */ dgMathVector3 *epos_ptr;
	/* 0x5c */ Uint32 col;
	/* 0x60 */ Uint32 tex_no;
	/* 0x64 */ dgEffCountData count_data;
} HeartBeamTask;

typedef struct { // 0xb8
	/* 0x00 */ Sint8 state;
	/* 0x04 */ dgEffRoboBeamType type;
	/* 0x08 */ Uint8 ok_flg;
	/* 0x0c */ Float ratio;
	/* 0x10 */ Float tmp_ratio[3];
	/* 0x1c */ Float scale;
	/* 0x20 */ Float size;
	/* 0x24 */ Float frame;
	/* 0x28 */ dgMathVector3 spos;
	/* 0x34 */ dgMathVector3 epos;
	/* 0x40 */ dgMathVector3 pos[3];
	/* 0x64 */ dgMathVector3 dsp_pos[4];
	/* 0x94 */ dgMathVector3 *spos_ptr;
	/* 0x98 */ dgMathVector3 *epos_ptr;
	/* 0x9c */ Uint32 col;
	/* 0xa0 */ Uint32 tex_no[2];
	/* 0xa8 */ dgEffCountData count_data;
} AttackBeamTask;

typedef struct { // 0x38
	/* 0x00 */ dgMathVector3 spos;
	/* 0x0c */ dgMathVector3 epos;
	/* 0x18 */ Float width;
	/* 0x1c */ Float sv;
	/* 0x20 */ Float ev;
	/* 0x24 */ Float length_ratio;
	/* 0x28 */ Float offset_ratio;
	/* 0x2c */ Float unit_ratio;
	/* 0x30 */ Uint32 scol;
	/* 0x34 */ Uint32 ecol;
} LoopBeamParam;

typedef struct { // 0x10
	/* 0x0 */ dgMathVector3 *spos_ptr;
	/* 0x4 */ dgMathVector3 *epos_ptr;
	/* 0x8 */ Float scale;
	/* 0xc */ Float frame;
} HeartParam;

typedef struct { // 0x44
	/* 0x00 */ Float ratio;
	/* 0x04 */ Float frame;
	/* 0x08 */ Float scale;
	/* 0x0c */ dgMathVector3 spos;
	/* 0x18 */ dgMathVector3 epos;
	/* 0x24 */ dgMathVector3 pos;
	/* 0x30 */ Uint32 col;
	/* 0x34 */ dgEffCountData count_data;
} Heart1Task;

typedef struct { // 0x20
	/* 0x00 */ Float ratio;
	/* 0x04 */ Sint8 mode;
	/* 0x05 */ Sint8 pat_no;
	/* 0x08 */ dgMathVector3 *spos_ptr;
	/* 0x0c */ dgMathVector3 *epos_ptr;
	/* 0x10 */ dgEffCountData count_data;
} BeamData;

typedef struct { // 0x22c
	/* 0x000 */ Sint8 state;
	/* 0x004 */ dgEffRoboBeamType type;
	/* 0x008 */ Uint8 ok_flg;
	/* 0x00c */ Float ratio;
	/* 0x010 */ Float tmp_ratio[3];
	/* 0x01c */ Float scale;
	/* 0x020 */ Float size;
	/* 0x024 */ Float frame;
	/* 0x028 */ dgMathVector3 spos;
	/* 0x034 */ dgMathVector3 epos;
	/* 0x040 */ dgMathVector3 pos[11];
	/* 0x0c4 */ dgMathVector3 *spos_ptr;
	/* 0x0c8 */ dgMathVector3 *epos_ptr;
	/* 0x0cc */ Uint32 col;
	/* 0x0d0 */ Uint32 tex_no[2];
	/* 0x0d8 */ dgEffCountData count_data;
	/* 0x0e8 */ Sint8 div_num;
	/* 0x0e9 */ Sint8 loop_cnt;
	/* 0x0ea */ Sint8 head_ix;
	/* 0x0ec */ BeamData data[10];
} EnemyAttackBeamTask;

typedef struct { // 0x24
	/* 0x00 */ Float size;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float ratio;
	/* 0x0c */ Float frame;
	/* 0x10 */ dgMathVector3 *pos_ptr;
	/* 0x14 */ dgEffCountData count_data;
} ChargeTask;

typedef struct { // 0x110
	/* 0x000 */ dgEffRoboBeamType type;
	/* 0x004 */ Float size;
	/* 0x008 */ Float scale;
	/* 0x00c */ Float ratio;
	/* 0x010 */ Float frame;
	/* 0x014 */ Sint8 state;
	/* 0x015 */ Sint8 combo_num;
	/* 0x016 */ Sint8 pre_combo_num;
	/* 0x018 */ dgMathVector3 spos;
	/* 0x024 */ dgMathVector3 epos;
	/* 0x030 */ dgMathVector3 pos;
	/* 0x03c */ dgMathVector3 abs_spos;
	/* 0x048 */ dgMathVector3 abs_epos;
	/* 0x054 */ dgMathVector3 abs_pos;
	/* 0x060 */ dgMathVector3 dir_vctr;
	/* 0x06c */ dgMathVector3 *spos_ptr;
	/* 0x070 */ dgMathVector3 *epos_ptr;
	/* 0x074 */ dgMathVector3 *pos_ptr;
	/* 0x078 */ dgMathVector3 player_base_pos;
	/* 0x084 */ dgMathVector3 player_pos;
	/* 0x090 */ dgMathAngle3 player_base_ang;
	/* 0x09c */ dgMathAngle3 player_ang;
	/* 0x0b0 */ dgMathMatrix player_base_mtrx;
	/* 0x0f0 */ dgEffCountData count_data;
	/* 0x100 */ Uint32 col;
	/* 0x104 */ Sint8 relative_flg;
	/* 0x108 */ Float length_scale;
} Charge2Task;

enum {
	ROBO_BEAM_NORMAL = 0,
	ROBO_BEAM_LARGER = 1,
	ROBO_BEAM_SHOOT = 2
};

typedef struct { // 0x24
	/* 0x00 */ Sint8 pat_no;
	/* 0x02 */ Sint16 type;
	/* 0x04 */ Sint16 tex_no;
	/* 0x08 */ Float scale;
	/* 0x0c */ Float ratio;
	/* 0x10 */ dgMathVector3 *pos_ptr;
	/* 0x14 */ dgEffCountData count_data;
} BossTameTask;

typedef struct { // 0x58
	/* 0x00 */ Float frame;
	/* 0x04 */ Sint8 pat_no;
	/* 0x06 */ Sint16 type;
	/* 0x08 */ Sint16 tex_no;
	/* 0x0c */ Float scale;
	/* 0x10 */ Float ratio;
	/* 0x14 */ dgMathVector3 *epos_ptr;
	/* 0x18 */ dgMathVector3 spos;
	/* 0x24 */ dgMathVector3 pos;
	/* 0x30 */ dgMathVector3 epos;
	/* 0x3c */ dgMathVector3 diff_vctr;
	/* 0x48 */ dgEffCountData count_data;
} BossBeamTask;

typedef struct { // 0x30
	/* 0x00 */ Sint8 pat_num;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float ratio;
	/* 0x0c */ Sint16 tex_no;
	/* 0x10 */ dgMathVector3 pos;
	/* 0x1c */ dgEffCountData count_data;
	/* 0x2c */ Bool kasan_flg;
} ExplodeSubTask;

typedef struct { // 0x14
	/* 0x00 */ dgMathVector3 *pos_ptr;
	/* 0x04 */ Float frame;
	/* 0x08 */ Float scale;
	/* 0x0c */ Sint16 tex_no;
	/* 0x10 */ Bool kasan_flg;
} ExplodeParam;

typedef struct { // 0x34
	/* 0x00 */ Sint8 pat_num;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float ratio;
	/* 0x0c */ dgMathVector3 pos[2];
	/* 0x24 */ dgEffCountData count_data;
} ExplodeMTask;

typedef struct { // 0x40
	/* 0x00 */ Sint32 ring_tex_no;
	/* 0x04 */ Sint32 fire_tex_no;
	/* 0x08 */ dgMathAngle1 ring_ang[2];
	/* 0x10 */ Float ring_scale[2];
	/* 0x18 */ Sint8 pat_num[2];
	/* 0x1c */ Float scale;
	/* 0x20 */ Float ratio;
	/* 0x24 */ dgMathVector3 base_pos;
	/* 0x30 */ dgEffCountData count_data;
} ExplodeLTask;

enum {
	BIRI_S = 0,
	BIRI_M = 1,
	BIRI_L = 2
};

typedef struct { // 0x24
	/* 0x00 */ Sint8 pat_no;
	/* 0x04 */ dgMathVector3 *pos_ptr;
	/* 0x08 */ Float frame;
	/* 0x0c */ Float scale;
	/* 0x10 */ Float ratio;
	/* 0x14 */ dgEffCountData count_data;
} Spark1Task;

typedef struct { // 0x24
	/* 0x00 */ Sint8 pat_no;
	/* 0x04 */ Float frame;
	/* 0x08 */ Float scale;
	/* 0x0c */ Float ratio;
	/* 0x10 */ dgMathVector3 *pos_ptr;
	/* 0x14 */ dgEffCountData count_data;
} Biri1Task;

typedef struct { // 0x4c
	/* 0x00 */ Sint8 type;
	/* 0x04 */ Float frame;
	/* 0x08 */ Float scale;
	/* 0x0c */ Float ratio;
	/* 0x10 */ dgMathVector3 *pos_ptr[6];
	/* 0x28 */ dgMathVector3 pos[3];
} BiriTask;

enum {
	HEAD_R = 0,
	HEAD_L = 1,
	ARM_R = 2,
	ARM_L = 3,
	THIGH_R = 4,
	THIGH_L = 5
};

typedef struct { // 0x4c
	/* 0x00 */ Float ratio;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float size;
	/* 0x0c */ Uint32 tex_no;
	/* 0x10 */ Angle ang;
	/* 0x14 */ dgMathVector3 pos;
	/* 0x20 */ dgMathVector3 player_base_pos;
	/* 0x2c */ dgMathVector3 offset_pos;
	/* 0x38 */ dgEffCountData count_data;
	/* 0x48 */ Bool relative_flg;
} HitPlayerTask;

typedef struct { // 0x30
	/* 0x00 */ Sint8 flg;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float size;
	/* 0x0c */ Uint32 tex_no;
	/* 0x10 */ Angle ang;
	/* 0x14 */ dgMathVector3 pos;
	/* 0x20 */ dgEffCountData count_data;
} HitBossTask;

typedef struct { // 0x4f8
	/* 0x000 */ Bool flg;
	/* 0x004 */ Float frame;
	/* 0x008 */ Float ratio;
	/* 0x00c */ Sint8 dir;
	/* 0x010 */ dgMathVector3 base_pos;
	/* 0x01c */ dgMathVector3 pos[50];
	/* 0x274 */ dgMathVector3 speed[50];
	/* 0x4cc */ dgMathVector3 player_base_pos;
	/* 0x4d8 */ dgMathVector3 offset_pos;
	/* 0x4e4 */ dgEffCountData count_data;
	/* 0x4f4 */ Bool relative_flg;
} DefenseTask;

typedef struct { // 0x48
	/* 0x00 */ Float ratio;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float frame;
	/* 0x0c */ Sint8 type;
	/* 0x10 */ dgMathVector3 pos;
	/* 0x1c */ dgMathVector3 player_base_pos;
	/* 0x28 */ dgMathVector3 offset_pos;
	/* 0x34 */ dgEffCountData count_data;
	/* 0x44 */ Bool relative_flg;
} NehitTask;

typedef struct { // 0xc
	/* 0x0 */ dgMathVector3 *pos_ptr;
	/* 0x4 */ Float frame;
	/* 0x8 */ Float scale;
} NehitParam;

typedef struct { // 0x30
	/* 0x00 */ Float frame;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float size;
	/* 0x0c */ Float ratio;
	/* 0x10 */ dgMathAngle1 ang;
	/* 0x14 */ Float radius;
	/* 0x18 */ Sint8 pat_cnt;
	/* 0x19 */ Sint8 pat_no;
	/* 0x1c */ dgMathVector3 *pos_ptr;
	/* 0x20 */ dgEffCountData count_data;
} PoisonTask;

typedef struct { // 0x10
	/* 0x0 */ dgMathVector3 *pos_ptr;
	/* 0x4 */ Float frame;
	/* 0x8 */ Float scale;
	/* 0xc */ Bool mtrx_flg;
} NeescapeSubParam;

typedef struct { // 0x10
	/* 0x0 */ dgMathVector3 *pos_ptr;
	/* 0x4 */ Float frame;
	/* 0x8 */ Float scale;
	/* 0xc */ Sint8 type;
} NeinParam;

typedef struct { // 0x10
	/* 0x0 */ Sint8 type;
	/* 0x1 */ Sint8 state;
	/* 0x2 */ Sint8 dsp_flg;
	/* 0x3 */ Sint8 pat_num;
	/* 0x4 */ dgMathVector3 vpos;
} BiriData;

typedef struct { // 0xa0
	/* 0x00 */ Sint8 state;
	/* 0x01 */ Sint8 type;
	/* 0x02 */ Sint8 reverse_flg;
	/* 0x04 */ Float scale;
	/* 0x08 */ Sint8 ring_num;
	/* 0x0c */ Float ratio;
	/* 0x10 */ Float size;
	/* 0x14 */ Float frame;
	/* 0x18 */ Float tmp_ratio[6];
	/* 0x30 */ dgMathVector3 pos;
	/* 0x3c */ dgMathVector3 player_base_pos;
	/* 0x48 */ dgMathVector3 offset_pos;
	/* 0x54 */ BiriData data[3];
	/* 0x84 */ void *mtrx_task_ptr;
	/* 0x88 */ dgMathMatrix *mtrx_ptr;
	/* 0x8c */ dgEffCountData count_data;
	/* 0x9c */ Bool relative_flg;
} NeinTask;

enum {
	NEIN_LONG = 0,
	NEIN = 1,
	NEOUT = 2,
	NEESCAPE = 3,
	NMIN_LONG = 4,
	NMIN = 5,
	NMESCAPE = 6,
	N4OUT = 7,
	N4ESCAPE = 8,
	NIIN = 9,
	NIOUT = 10,
	NIESCAPE = 11
};

enum {
	DISAPPEAR_ALIVE = 0,
	DISAPPEAR_DEAD = 1,
	DISAPPEAR_WAIT = 2
};

typedef struct { // 0x70
	/* 0x00 */ Sint8 state;
	/* 0x01 */ Sint8 type;
	/* 0x04 */ Angle ang;
	/* 0x08 */ dgMathVector3 scale;
	/* 0x14 */ Float frame;
	/* 0x18 */ dgEffCountData count_data;
	/* 0x30 */ dgMathMatrix mtrx;
} DisappearTask;

typedef struct { // 0x30
	/* 0x00 */ Sint8 state;
	/* 0x01 */ Sint8 sub_mode;
	/* 0x04 */ Float ratio;
	/* 0x08 */ Float scale;
	/* 0x0c */ dgMathVector3 pos;
	/* 0x18 */ dgEffCountData count_data;
	/* 0x28 */ void *mtrx_task_ptr;
	/* 0x2c */ dgMathMatrix *mtrx_ptr;
} NeescapeTask;

typedef struct { // 0xb8
	/* 0x00 */ Float ratio;
	/* 0x04 */ Float scale;
	/* 0x08 */ dgMathVector3 *pos_ptr;
	/* 0x0c */ dgMathVector3 buf[4];
	/* 0x3c */ dgMathVector3 group_pos[9];
	/* 0xa8 */ dgEffCountData count_data;
} KiraTask;

typedef struct { // 0x5c
	/* 0x00 */ Sint8 dsp_flg[3];
	/* 0x04 */ Float ratio;
	/* 0x08 */ Float scale;
	/* 0x0c */ Float size;
	/* 0x10 */ Float local_ratio[3];
	/* 0x1c */ dgMathVector3 pos[3];
	/* 0x40 */ dgMathVector3 base_pos;
	/* 0x4c */ dgEffCountData count_data;
} NigetTask;

typedef struct { // 0x3c
	/* 0x00 */ Float ratio;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float frame;
	/* 0x0c */ Float local_ratio[5];
	/* 0x20 */ Sint8 dsp_flg[5];
	/* 0x28 */ dgMathVector3 *pos_ptr;
	/* 0x2c */ dgEffCountData count_data;
} HenkeiTask;

typedef struct { // 0x2c
	/* 0x00 */ Sint8 state;
	/* 0x04 */ Float ratio;
	/* 0x08 */ Float frame;
	/* 0x0c */ Float scale;
	/* 0x10 */ dgMathVector3 pos;
	/* 0x1c */ dgEffCountData count_data;
} Ch5Task;

enum {
	TEX0 = 0,
	TEX1 = 1,
	LARGER = 2
};

typedef struct { // 0x8b0
	/* 0x000 */ Angle ang[50];
	/* 0x0c8 */ Angle rot_ang[50];
	/* 0x190 */ Float speed[50];
	/* 0x258 */ dgMathVector3 pos[50];
	/* 0x4b0 */ dgMathVector3 v[50];
	/* 0x708 */ Uint32 tex_no[50];
	/* 0x7d0 */ Uint32 col[50];
	/* 0x898 */ Uint32 cnt;
	/* 0x89c */ Uint32 sub_cnt;
	/* 0x8a0 */ dgEffCountData count_data;
} PaperTask;

typedef struct { // 0x33c
	/* 0x000 */ Float length;
	/* 0x004 */ dgMathVector3 base_pos[2];
	/* 0x01c */ dgMathVector2 vpos[100];
} RainTask;

typedef struct { // 0x12e4
	/* 0x0000 */ Float ratio;
	/* 0x0004 */ dgEffCountData count_data;
	/* 0x0014 */ dgMathVector3 base_pos;
	/* 0x0020 */ dgMathVector3 pos[200];
	/* 0x0980 */ dgMathVector3 speed[200];
	/* 0x12e0 */ Sint8 flg;
} ParticleTask;

typedef struct { // 0x28
	/* 0x00 */ dgMathVector3 pos;
	/* 0x0c */ Float frame;
	/* 0x10 */ Float scale;
	/* 0x14 */ Float ratio;
	/* 0x18 */ dgEffCountData count_data;
} ShootEffTask;

typedef struct { // 0x24
	/* 0x00 */ Float ratio;
	/* 0x04 */ Float scale;
	/* 0x08 */ dgMathVector3 pos;
	/* 0x14 */ dgEffCountData count_data;
} RhythmTask;

typedef struct { // 0x1c
	/* 0x00 */ dgEffRhythmType type;
	/* 0x04 */ Float ratio;
	/* 0x08 */ dgMathVector3 *pos_ptr;
	/* 0x0c */ dgEffCountData count_data;
} MichaelRhythmTask;

typedef struct { // 0x2290
	/* 0x0000 */ Angle ang[200];
	/* 0x0320 */ Angle rot_ang[200];
	/* 0x0640 */ Float speed[200];
	/* 0x0960 */ dgMathVector3 base_pos;
	/* 0x096c */ dgMathVector3 offset;
	/* 0x0978 */ dgMathVector3 pos[200];
	/* 0x12d8 */ dgMathVector3 v[200];
	/* 0x1c38 */ Uint32 tex_no[200];
	/* 0x1f58 */ Uint32 col[200];
	/* 0x2278 */ Uint32 cnt;
	/* 0x227c */ Uint32 sub_cnt;
	/* 0x2280 */ dgEffCountData count_data;
} FlowerTask;

typedef struct { // 0x28
	/* 0x00 */ dgEffBoostType type;
	/* 0x04 */ Float frame;
	/* 0x08 */ Float scale;
	/* 0x0c */ Float ratio;
	/* 0x10 */ dgMathMatrix *mtrx_ptr[2];
	/* 0x18 */ dgEffCountData count_data;
} SboostTask;

typedef struct { // 0x14
	/* 0x00 */ Bool dsp_flg;
	/* 0x04 */ Sint16 tex_no;
	/* 0x06 */ Sint8 pat_no;
	/* 0x08 */ Float scale;
	/* 0x0c */ dgMathVector3 *pos_ptr;
	/* 0x10 */ Angle ang;
} SparkTask;

typedef struct { // 0x14
	/* 0x00 */ Bool dsp_flg;
	/* 0x04 */ Sint8 pat_no;
	/* 0x08 */ Float scale;
	/* 0x0c */ dgMathVector3 *spos_ptr;
	/* 0x10 */ dgMathVector3 *epos_ptr;
} SparkBeamTask;

typedef struct { // 0x16c
	/* 0x000 */ Uint32 col;
	/* 0x004 */ Float xoffset;
	/* 0x008 */ Float yoffset;
	/* 0x00c */ Sint16 tex_ix[88];
	/* 0x0bc */ Sint16 rot_ix[88];
} NoiseTask;

typedef struct { // 0x48
	/* 0x00 */ Float frame;
	/* 0x04 */ Float ratio;
	/* 0x08 */ Sint8 mode;
	/* 0x0c */ dgEffCountData count_data;
	/* 0x1c */ Float center_xpos;
	/* 0x20 */ Float center_ypos;
	/* 0x24 */ Float scale;
	/* 0x28 */ Angle ang;
	/* 0x2c */ dgEffNameLogoType type;
	/* 0x30 */ dgTexInfo *texinfo;
	/* 0x34 */ Sint16 tex_no[3];
	/* 0x3a */ Sint16 logo_x_size;
	/* 0x3c */ Sint16 logo_y_size;
	/* 0x3e */ Sint16 x_start_pos;
	/* 0x40 */ Sint16 y_start_pos;
	/* 0x42 */ Sint16 x_end_pos;
	/* 0x44 */ Sint16 y_end_pos;
} PuddingLogoTask;

enum {
	PUDDING_LOGO_STAR = 0,
	PUDDING_LOGO_LARGE = 1,
	PUDDING_LOGO_WAIT = 2,
	PUDDING_LOGO_MOVE = 3,
	PUDDING_LOGO_STOP = 4
};

typedef struct { // 0x40
	/* 0x00 */ Bool dsp_flg;
	/* 0x04 */ Sint8 type;
	/* 0x08 */ Float scale;
	/* 0x0c */ Float frame;
	/* 0x10 */ Float body_scale;
	/* 0x14 */ Float ratio;
	/* 0x18 */ Uint32 col;
	/* 0x1c */ Angle ang;
	/* 0x20 */ dgMathVector3 speed;
	/* 0x2c */ dgMathMatrix *mtrx_ptr;
	/* 0x30 */ dgEffCountData count_data;
} JrfireTask;

typedef struct { // 0xc0
	/* 0x00 */ Float scale;
	/* 0x04 */ Float ratio;
	/* 0x10 */ dgMathMatrix abs_mtrx;
	/* 0x50 */ dgMathMatrix rel_mtrx;
	/* 0x90 */ dgMathVector3 *speed_ptr;
	/* 0x94 */ dgMathVector3 offset;
	/* 0xa0 */ Uint32 col;
	/* 0xa4 */ dgEffCountData count_data;
} FireRingTask;

typedef struct { // 0x34
	/* 0x00 */ Float scale;
	/* 0x04 */ Float ratio;
	/* 0x08 */ dgMathVector3 abs_pos;
	/* 0x14 */ dgMathVector3 speed;
	/* 0x20 */ dgMathVector3 *base_speed_ptr;
	/* 0x24 */ dgEffCountData count_data;
} FireStarTask;

typedef struct { // 0x34
	/* 0x00 */ Float ratio;
	/* 0x04 */ dgMathVector3 pos;
	/* 0x10 */ dgMathVector3 speed;
	/* 0x1c */ dgEffCountData count_data;
	/* 0x2c */ Uint32 col;
	/* 0x30 */ Sint16 tex_no;
} Smoke1Task;

typedef struct { // 0x34
	/* 0x00 */ Float ratio;
	/* 0x04 */ Float frame;
	/* 0x08 */ dgMathMatrix *mtrx_ptr;
	/* 0x0c */ dgMathVector3 pos;
	/* 0x18 */ dgMathVector3 speed;
	/* 0x24 */ dgEffCountData count_data;
} SmokeTask;

typedef struct { // 0x38
	/* 0x00 */ dgMathMatrix *mtrx_ptr;
	/* 0x04 */ dgMathVector3 pos[2];
	/* 0x1c */ Float ratio;
	/* 0x20 */ Float scale;
	/* 0x24 */ Bool large_flg;
	/* 0x28 */ dgEffCountData count_data;
} PurgeChuTask;

typedef struct { // 0xdc
	/* 0x00 */ Float scale;
	/* 0x04 */ Float ratio;
	/* 0x08 */ dgMathMatrix *mtrx_ptr;
	/* 0x0c */ dgMathVector3 star_pos[8];
	/* 0x6c */ dgMathVector3 star_speed[8];
	/* 0xcc */ dgEffCountData count_data;
} TaikoTask;

typedef struct { // 0x24
	/* 0x00 */ Float ratio;
	/* 0x04 */ dgMathVector3 pos[1];
	/* 0x10 */ dgMathVector3 *base_pos_ptr;
	/* 0x14 */ dgEffCountData count_data;
} Star1Task;

typedef struct { // 0x4
	/* 0x0 */ dgMathVector3 *pos_ptr;
} FollowStarTask;

enum {
	DGFILE_REQ_MODE_FREE = 0,
	DGFILE_REQ_MODE_ENTRY = 1,
	DGFILE_REQ_MODE_NOWLOADING = 2,
	DGFILE_REQ_MODE_EOE = 3
};

enum {
	DGFILE_WININFO_MODE_LOADCUE = 0,
	DGFILE_WININFO_MODE_PTINFO = 1,
	DGFILE_WININFO_MODE_FCACHE = 2,
	DGFILE_WININFO_MODE_MAX = 3
};

typedef enum {
	DGFILE_DEBWIN_KIND_NOR = 0,
	DGFILE_DEBWIN_KIND_LOG = 1,
	DGFILE_DEBWIN_KIND_MAX = 2
} dgFileDebWinKind;

enum {
	DGFILE_VOLIDX_GLOBAL = 0,
	DGFILE_VOLIDX_LOCAL = 1,
	DGFILE_VOLIDX_MAX = 2
};

enum {
	DGFILE_SIMMLOAD_STAT_FREE = 0,
	DGFILE_SIMMLOAD_STAT_LOADING = 1,
	DGFILE_SIMMLOAD_STAT_BUSY = 2,
	DGFILE_SIMMLOAD_STAT_END = 3
};

struct _dgFileDebWinInfo { // 0x64
	/* 0x00 */ dgFileDebWinKind kind;
	/* 0x04 */ GWHWND hWnd;
	/* 0x08 */ GWHWND hScrlBarV;
	/* 0x0c */ GWHWND hScrlBarH;
	/* 0x10 */ gwVariable varV;
	/* 0x24 */ gwVariable varH;
	/* 0x38 */ Sint32 x;
	/* 0x3c */ Sint32 y;
	/* 0x40 */ Sint32 disp_w;
	/* 0x44 */ Sint32 disp_h;
	/* 0x48 */ Sint32 buf_w;
	/* 0x4c */ Sint32 buf_h;
	/* 0x50 */ Sint32 write_window_y;
	/* 0x54 */ Sint32 write_y;
	/* 0x58 */ void *task;
	/* 0x5c */ void (*drawfunc)(/* parameters unknown */);
	/* 0x60 */ char *buf;
};

typedef _dgFileDebWinInfo dgFileDebWinInfo;
typedef _dgFileDebWinInfo *dgFileDebWinInfoPtr;

struct _dgFileReqCue { // 0x6c
	/* 0x00 */ Uint32 id;
	/* 0x04 */ Uint32 mode;
	/* 0x08 */ Uint32 fmode;
	/* 0x0c */ Sint32 fad;
	/* 0x10 */ Sint32 size;
	/* 0x14 */ Sint32 pid;
	/* 0x18 */ Sint32 iid;
	/* 0x1c */ void *dst;
	/* 0x20 */ char fname[40];
	/* 0x48 */ void *dir;
	/* 0x4c */ void (*endfunc)(/* parameters unknown */);
	/* 0x50 */ void *usr_p;
	/* 0x54 */ Sint32 usr_d;
	/* 0x58 */ Bool cache;
	/* 0x5c */ Sint32 cachemode;
	/* 0x60 */ Bool simmload_sw;
	/* 0x64 */ _dgFileReqCue *prev;
	/* 0x68 */ _dgFileReqCue *next;
};

typedef _dgFileReqCue dgFileReqCue;
typedef _dgFileReqCue *dgFileReqCuePtr;

typedef struct { // 0x8
	/* 0x0 */ char id[4];
	/* 0x4 */ Sint32 type;
} dgFileDataTypeID;

typedef struct *dgFileDataTypeIDPtr { // 0x8
	/* 0x0 */ char id[4];
	/* 0x4 */ Sint32 type;
};

typedef struct { // 0x8
	/* 0x0 */ char ext[3];
	/* 0x4 */ Sint32 type;
} dgFileDataTypeEXT;

typedef struct *dgFileDataTypeEXTPtr { // 0x8
	/* 0x0 */ char ext[3];
	/* 0x4 */ Sint32 type;
};

struct _dgFilePtCue { // 0x10
	/* 0x0 */ Uint32 mode;
	/* 0x4 */ Sint32 pid;
	/* 0x8 */ _dgFilePtCue *next;
	/* 0xc */ _dgFilePtCue *prev;
};

typedef _dgFilePtCue dgFilePtCue;
typedef _dgFilePtCue *dgFilePtCuePtr;

typedef enum {
	DGFILE_PTINFO_STAT_FREE = 0,
	DGFILE_PTINFO_STAT_PT_LOADING = 1,
	DGFILE_PTINFO_STAT_BUSY = 2,
	DGFILE_PTINFO_STAT_MAX = 3
} dgFilePtInfoStat;

struct _dgFileSimmInfo { // 0x10c
	/* 0x000 */ Sint32 stat;
	/* 0x004 */ Uint32 id;
	/* 0x008 */ void *simmadr;
	/* 0x00c */ char fname[256];
};

typedef _dgFileSimmInfo dgFileSimmInfo;
typedef _dgFileSimmInfo *dgFileSimmInfoPtr;

struct _dgFileRofsVolInfo { // 0x20
	/* 0x00 */ void *dir;
	/* 0x04 */ Sint32 dir_size;
	/* 0x08 */ char fname[13];
	/* 0x15 */ char volname[9];
};

typedef _dgFileRofsVolInfo dgFileRofsVolInfo;
typedef _dgFileRofsVolInfo *dgFileRofsVolInfoPtr;

struct _dgFileRofsSystem { // 0xb4
	/* 0x00 */ Bool err_disp;
	/* 0x04 */ RofsInitPara init_param;
	/* 0x14 */ void *work;
	/* 0x18 */ Sint32 work_size;
	/* 0x1c */ Sint32 entry_vol_num;
	/* 0x20 */ Sint32 default_vol_no;
	/* 0x24 */ dgFileRofsVolInfo volinfo[2];
	/* 0x64 */ dgFileRofsVolInfo volinfo_50[2];
	/* 0xa4 */ char dev[16];
};

typedef _dgFileRofsSystem dgFileRofsSystem;
typedef _dgFileRofsSystem *dgFileRofsSystemPtr;

struct _dgFileFakeFadInfo { // 0x10c
	/* 0x000 */ Sint32 fad;
	/* 0x004 */ Sint32 dir_mode;
	/* 0x008 */ Sint32 size;
	/* 0x00c */ char fname[256];
};

typedef _dgFileFakeFadInfo dgFileFakeFadInfo;
typedef _dgFileFakeFadInfo *dgFileFakeFadInfoPtr;

struct _dgFilePtInfo { // 0x40
	/* 0x00 */ dgFilePtInfoStat stat;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ Sint32 num;
	/* 0x0c */ Sint32 usesize;
	/* 0x10 */ Sint32 size;
	/* 0x14 */ char fname[40];
	/* 0x3c */ Uint32 *info;
};

typedef _dgFilePtInfo dgFilePtInfo;
typedef _dgFilePtInfo *dgFilePtInfoPtr;

struct _dgFileSystemInfo { // 0x2197d4
	/* 0x000000 */ void* (*malloc)(/* parameters unknown */);
	/* 0x000004 */ void (*free)(/* parameters unknown */);
	/* 0x000008 */ Sint32 deb_print_level;
	/* 0x00000c */ Sint32 req_rd_sct;
	/* 0x000010 */ dgFileReqCue req_buf[32];
	/* 0x000d90 */ Uint32 req_serial;
	/* 0x000d94 */ dgFileReqCuePtr req_master;
	/* 0x000d98 */ ADXF req_af;
	/* 0x000d9c */ Uint32 timeout_cnt;
	/* 0x000da0 */ Uint32 req_retry_cnt;
	/* 0x000da4 */ Uint32 req_retry_max;
	/* 0x000da8 */ Uint32 req_retry_mode;
	/* 0x000dac */ dgFilePtCue pt_cue[8];
	/* 0x000e2c */ dgFilePtCuePtr pt_cue_master;
	/* 0x000e30 */ dgFilePtInfo ptinfo[8];
	/* 0x001030 */ dgFileDataTypeID typeid[32];
	/* 0x001130 */ dgFileDataTypeEXT typeext[32];
	/* 0x001230 */ dgFileSimmInfo simminfo;
	/* 0x00133c */ dgFileRofsSystem rofssys;
	/* 0x0013f0 */ Bool is_host_check;
	/* 0x0013f4 */ dgFileFakeFadInfo fake_fad_info[8192];
	/* 0x2193f4 */ Sint32 master_fake_fad;
	/* 0x2193f8 */ Sint32 fake_fad_num;
	/* 0x2193fc */ char hostroot[256];
	/* 0x2194fc */ char mirror_dir[256];
	/* 0x2195fc */ char local_dir[256];
	/* 0x2196fc */ ADXPS2_SPRM_HOST ht_sprm;
	/* 0x219704 */ int tvtype;
	/* 0x219708 */ dgFileDebWinInfo wininfo_main;
	/* 0x21976c */ dgFileDebWinInfo wininfo_log;
	/* 0x2197d0 */ Sint32 wininfo_mode;
};

typedef _dgFileSystemInfo dgFileSystemInfo;
typedef _dgFileSystemInfo *dgFileSystemInfoPtr;

typedef struct { // 0x24
	/* 0x00 */ Uint32 fmode;
	/* 0x04 */ void *dst;
	/* 0x08 */ char *fname;
	/* 0x0c */ void *dir;
	/* 0x10 */ Sint32 pid;
	/* 0x14 */ Sint32 iid;
	/* 0x18 */ dgFileReqCuePtr req;
	/* 0x1c */ Sint32 cachemode;
	/* 0x20 */ Sint32 flag;
} dgFileReqCorePara;

typedef struct *dgFileReqCoreParaPtr { // 0x24
	/* 0x00 */ Uint32 fmode;
	/* 0x04 */ void *dst;
	/* 0x08 */ char *fname;
	/* 0x0c */ void *dir;
	/* 0x10 */ Sint32 pid;
	/* 0x14 */ Sint32 iid;
	/* 0x18 */ dgFileReqCuePtr req;
	/* 0x1c */ Sint32 cachemode;
	/* 0x20 */ Sint32 flag;
};

typedef struct { // 0x20
	/* 0x00 */ Uint32 fmode;
	/* 0x04 */ void *dst;
	/* 0x08 */ char *fname;
	/* 0x0c */ void *dir;
	/* 0x10 */ Sint32 pid;
	/* 0x14 */ Sint32 iid;
	/* 0x18 */ Bool cache;
	/* 0x1c */ Bool cachehit;
} dgFileLoadCorePara;

typedef struct *dgFileLoadCoreParaPtr { // 0x20
	/* 0x00 */ Uint32 fmode;
	/* 0x04 */ void *dst;
	/* 0x08 */ char *fname;
	/* 0x0c */ void *dir;
	/* 0x10 */ Sint32 pid;
	/* 0x14 */ Sint32 iid;
	/* 0x18 */ Bool cache;
	/* 0x1c */ Bool cachehit;
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0xd8
	/* 0x00 */ char *str;
	/* 0x04 */ NJS_POLYGON_VTX all_poly[4];
	/* 0x44 */ NJS_POLYGON_VTX base_poly[4];
	/* 0x84 */ NJS_POLYGON_VTX add_poly[4];
	/* 0xc4 */ dgMathVector3 position;
	/* 0xd0 */ Float ratio;
	/* 0xd4 */ Float font_height;
} dgFontKaraoke;

typedef struct { // 0x140
	/* 0x000 */ Float oo_mass;
	/* 0x004 */ Float ka_pos;
	/* 0x008 */ Float ka_ang;
	/* 0x00c */ Float kv_pos;
	/* 0x010 */ Float kv_ang;
	/* 0x014 */ dgMathVector3 size;
	/* 0x020 */ dgMathMatrix inv_tensor_mat;
	/* 0x060 */ Float hit_power;
	/* 0x064 */ dgMathVector3 hit_pos;
	/* 0x070 */ dgMathVector3 hit_vec;
	/* 0x07c */ dgMathMatrix *object_mat_ptr;
	/* 0x080 */ dgMathVector3 force_pos;
	/* 0x08c */ dgMathVector3 acc_pos;
	/* 0x098 */ dgMathVector3 spd_pos;
	/* 0x0a4 */ dgMathVector3 pos;
	/* 0x0b0 */ dgMathVector3 torque_vec;
	/* 0x0bc */ dgMathVector3 dlt_ang_moment_vec;
	/* 0x0c8 */ dgMathVector3 ang_moment_vec;
	/* 0x0d4 */ dgMathVector3 omega_vec;
	/* 0x0e0 */ dgMathQuaternion quat;
	/* 0x0f0 */ dgMathQuaternion kv_quat;
	/* 0x100 */ dgMathMatrix mat;
} dgForce;

typedef struct { // 0x18
	/* 0x00 */ dgMathVector3 hit_pos;
	/* 0x0c */ dgMathVector3 unit_hit_vec;
} LocalForce;

enum {
	NUM_0 = 0,
	NUM_1 = 1,
	NUM_2 = 2,
	NUM_3 = 3,
	NUM_4 = 4,
	NUM_5 = 5,
	NUM_6 = 6,
	NUM_7 = 7,
	NUM_8 = 8,
	NUM_9 = 9,
	NUM_PERIOD = 10,
	NUM_PERCENT = 11,
	NUM_MAX = 12
};

enum {
	HEART_PINK = 0,
	HEART_PINK_LARGE = 1,
	HEART_GOLD = 2,
	HEART_GOLD_LARGE = 3,
	HEART_MAX = 4
};

enum {
	HEART_NON = 0,
	HEART_LOSS = 1,
	HEART_APPEAR = 2,
	HEART_DISAPPEAR = 3,
	HEART_WAIT = 4,
	HEART_PLAYER_TURN = 5,
	HEART_ENEMY_TURN = 6,
	HEART_CHANGE = 7,
	HEART_CHANGE2 = 8,
	HEART_SMALL = 9,
	STAR_CHANGE = 10,
	STAR_CHANGE2 = 11,
	HEART_STATE_MAX = 12
};

enum {
	RATING_WAIT = 0,
	RATING_NON = 1,
	RATING_APPEAR = 2,
	RATING_DISAPPEAR = 3,
	RATING_DISAPPEAR2 = 4,
	CHANGE_WAIT = 5,
	CHANGE_NON = 6,
	CHANGE_APPEAR = 7,
	CHANGE_DISAPPEAR = 8,
	CHANGE_DISAPPEAR2 = 9
};

enum {
	SUB_RATING_ROT = 0,
	SUB_RATING_ROT_WAIT = 1,
	SUB_HEART_MOVE = 2,
	SUB_NUM_APPEAR = 3,
	SUB_NUM_MOVE = 4,
	SUB_CHANGE_ROT = 5,
	SUB_WAIT = 6
};

enum {
	NUM_STATE_WAIT = 0,
	NUM_STATE_CHANGE = 1,
	NUM_STATE_CHANGE_WAIT = 2,
	NUM_STATE_APPEAR = 3,
	NUM_STATE_APPEAR_WAIT = 4,
	NUM_STATE_APPEAR2 = 5,
	NUM_STATE_APPEAR2_WAIT = 6,
	NUM_STATE_DISAPPEAR = 7,
	NUM_STATE_DISAPPEAR_WAIT = 8,
	NUM_STATE_DISAPPEAR2 = 9,
	NUM_STATE_DISAPPEAR2_WAIT = 10,
	NUM_STATE_MAX = 11
};

enum {
	FLASH_SMALL_UP = 0,
	FLASH_SMALL_DOWN = 1
};

enum {
	DG_IND_HEART_WAIT = 11,
	DG_IND_HEART_PLAYER_TURN = 12,
	DG_IND_HEART_ENEMY_TURN = 13,
	DG_IND_HEART_CHANGE = 14,
	DG_IND_STAR_CHANGE = 15,
	DG_IND_HEART_APPEAR_WAIT = 16,
	DG_IND_HEART_DISAPPEAR_WAIT = 17,
	DG_IND_HEART_PLAYER_TURN_WAIT = 18,
	DG_IND_HEART_ENEMY_TURN_WAIT = 19,
	DG_IND_HEART_CHANGE_WAIT = 20,
	DG_IND_STAR_CHANGE_WAIT = 21,
	DG_IND_HEART_MAKE_SMALL = 22,
	DG_IND_HEART_REQ_MAX = 23
};

enum {
	DG_IND_WARN_NON = 0,
	DG_IND_WARN_LOW = 1,
	DG_IND_WARN_HIGH = 2
};

enum {
	TURN_ENEMY_MOVE_INIT = 0,
	TURN_ENEMY_MOVE = 1,
	TURN_ENEMY_WAIT = 2,
	TURN_PLAYER_MOVE_INIT = 3,
	TURN_PLAYER_MOVE = 4,
	TURN_PLAYER_WAIT = 5,
	TURN_DISAPPEAR_INIT = 6,
	TURN_DISAPPEAR = 7,
	TURN_NON = 8,
	TURN_MODE_MAX = 9
};

typedef struct { // 0x24
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Float size_x;
	/* 0x10 */ Float size_y;
	/* 0x14 */ Float scale_x;
	/* 0x18 */ Float scale_y;
	/* 0x1c */ dgMathAngle1 ang;
	/* 0x20 */ Uint32 col;
} SprParam;

typedef struct { // 0x44
	/* 0x00 */ Uint8 ready_flg;
	/* 0x01 */ Uint8 state;
	/* 0x02 */ Sint8 type;
	/* 0x04 */ Float ratio;
	/* 0x08 */ Float x;
	/* 0x0c */ Float y;
	/* 0x10 */ Float z;
	/* 0x14 */ Float base_x;
	/* 0x18 */ Float base_y;
	/* 0x1c */ Float base_z;
	/* 0x20 */ Float scale;
	/* 0x24 */ Float size_x;
	/* 0x28 */ Float size_y;
	/* 0x2c */ dgMathAngle1 ang;
	/* 0x30 */ Uint32 col;
	/* 0x34 */ dgEffCountData count_data;
} Heart1Data;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x4b8
	/* 0x000 */ Uint8 type;
	/* 0x001 */ Sint8 small_exe_num;
	/* 0x002 */ Sint8 small_dsp_num;
	/* 0x003 */ Sint8 large_exe_num;
	/* 0x004 */ Sint8 large_dsp_num;
	/* 0x005 */ Sint8 all_num;
	/* 0x006 */ Uint8 state;
	/* 0x008 */ Float ratio;
	/* 0x00c */ Float x;
	/* 0x010 */ Float y;
	/* 0x014 */ Float z;
	/* 0x018 */ dgMathVector3 small_pos;
	/* 0x024 */ dgEffCountData count_data;
	/* 0x034 */ Heart1Data data[17];
} HeartTask;

typedef struct { // 0x2c
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Float ratio;
	/* 0x10 */ Float scale;
	/* 0x14 */ Float frame;
	/* 0x18 */ dgMathAngle1 ang;
	/* 0x1c */ dgEffCountData count_data;
} FlashTask;

typedef struct { // 0x10
	/* 0x0 */ Float x;
	/* 0x4 */ Float y;
	/* 0x8 */ Float z;
	/* 0xc */ Float frame;
} FlashParam;

typedef struct { // 0x10
	/* 0x0 */ Float x;
	/* 0x4 */ Float y;
	/* 0x8 */ Float z;
	/* 0xc */ Float frame;
} Flash2Param;

typedef struct { // 0x14
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Sint16 num;
	/* 0x10 */ dgMathAngle1 ang;
} NumParam;

typedef struct { // 0x20
	/* 0x00 */ Sint8 state;
	/* 0x04 */ Bool ready_flg;
	/* 0x08 */ Float ratio;
	/* 0x0c */ dgMathAngle1 ang;
	/* 0x10 */ dgEffCountData count_data;
} Num1Data;

typedef struct { // 0xd0
	/* 0x00 */ Uint8 state;
	/* 0x02 */ Sint16 rate;
	/* 0x04 */ Sint16 new_rate;
	/* 0x06 */ Sint16 dsp_rate;
	/* 0x08 */ dgEffCountData count_data;
	/* 0x18 */ Float ratio;
	/* 0x1c */ Float frame;
	/* 0x20 */ Float x;
	/* 0x24 */ Float y;
	/* 0x28 */ Float z;
	/* 0x2c */ Num1Data data[5];
	/* 0xcc */ Bool dsp_flg;
} NumTask;

typedef struct { // 0x2c
	/* 0x00 */ Uint8 state;
	/* 0x04 */ Float ratio;
	/* 0x08 */ Float x;
	/* 0x0c */ Float y;
	/* 0x10 */ Float z;
	/* 0x14 */ Uint32 col;
	/* 0x18 */ dgMathAngle1 ang;
	/* 0x1c */ dgEffCountData count_data;
} RatingTask;

typedef struct { // 0x30
	/* 0x00 */ Sint8 mode;
	/* 0x04 */ Float scale;
	/* 0x08 */ Float ratio;
	/* 0x0c */ dgMathVector3 pos;
	/* 0x18 */ dgIndicateIconType player_icon_type;
	/* 0x1c */ dgIndicateIconType enemy_icon_type;
	/* 0x20 */ dgEffCountData count_data;
} TurnTask;

typedef struct { // 0x50
	/* 0x00 */ Uint8 req_buf[5];
	/* 0x05 */ Uint8 req_num;
	/* 0x06 */ Uint8 next_state;
	/* 0x07 */ Uint8 ready_flg;
	/* 0x08 */ Uint8 state;
	/* 0x09 */ Uint8 sub_state;
	/* 0x0c */ Float ratio;
	/* 0x10 */ Float flash_x;
	/* 0x14 */ Float flash_y;
	/* 0x18 */ Float flash_z;
	/* 0x1c */ Sint16 warn_rate;
	/* 0x20 */ Bool warn_flg;
	/* 0x24 */ Sint8 warn_type;
	/* 0x28 */ Uint32 warn_col;
	/* 0x2c */ dgMathAngle1 ang;
	/* 0x30 */ dgEffCountData count_data;
	/* 0x40 */ HeartTask *heart_task_ptr;
	/* 0x44 */ NumTask *num_task_ptr;
	/* 0x48 */ RatingTask *rating_task_ptr;
	/* 0x4c */ TurnTask *turn_task_ptr;
} IndicateTask;

enum {
	FLASH_SMALL_WAIT = 0,
	FLASH_SMALL_MOVE = 1
};

enum {
	TURN_ULALA = 0,
	TURN_ROBO = 1,
	TURN_MAX = 2
};

typedef struct { // 0x14
	/* 0x00 */ dgMathVector3 *base_pos;
	/* 0x04 */ Uint32 num;
	/* 0x08 */ Bool warn_flg;
	/* 0x0c */ Uint32 col;
	/* 0x10 */ dgMathAngle1 *ang_tbl;
} DspNumParam;

enum {
	NUM_SUB_WAIT = 0,
	NUM_SUB_APPEAR = 1,
	NUM_SUB_APPEAR2 = 2,
	NUM_SUB_DISAPPEAR = 3,
	NUM_SUB_DISAPPEAR2 = 4
};

enum {
	FLASH_APPEAR = 0,
	FLASH_LARGE = 1,
	FLASH_ROT = 2,
	FLASH_DISAPPEAR = 3
};

typedef struct { // 0xc8
	/* 0x00 */ Sint8 mode;
	/* 0x04 */ Float x;
	/* 0x08 */ Float y;
	/* 0x0c */ Float z;
	/* 0x10 */ Float dsp_x;
	/* 0x14 */ Float dsp_y;
	/* 0x18 */ Float dsp_z;
	/* 0x1c */ Float ratio;
	/* 0x20 */ Float star_ratio[5];
	/* 0x34 */ Float scale;
	/* 0x38 */ Float frame;
	/* 0x3c */ Angle ang;
	/* 0x40 */ Angle star_ang[5];
	/* 0x54 */ Float star_radius[5];
	/* 0x68 */ dgMathVector3 star_pos[5];
	/* 0xa4 */ Bool reset_flg[5];
	/* 0xb8 */ dgEffCountData count_data;
} Flash2Task;

typedef struct { // 0x38
	/* 0x00 */ Sint8 state;
	/* 0x01 */ Sint8 ready_flg;
	/* 0x04 */ Float x;
	/* 0x08 */ Float y;
	/* 0x0c */ Float z;
	/* 0x10 */ dgMathVector2 start_pos;
	/* 0x18 */ dgMathVector2 end_pos;
	/* 0x20 */ Float ratio;
	/* 0x24 */ Angle ang;
	/* 0x28 */ dgEffCountData count_data;
} FlashSmallData;

typedef struct { // 0x108
	/* 0x000 */ Sint8 state;
	/* 0x004 */ Float x;
	/* 0x008 */ Float y;
	/* 0x00c */ Float z;
	/* 0x010 */ Float ratio;
	/* 0x014 */ Uint8 num;
	/* 0x018 */ FlashSmallData data[4];
	/* 0x0f8 */ dgEffCountData count_data;
} FlashSmallTask;

typedef struct { // 0x54
	/* 0x00 */ Float ratio;
	/* 0x04 */ Heart1Data *star_data_ptr;
	/* 0x08 */ dgMathVector3 pos[5];
	/* 0x44 */ dgEffCountData count_data;
} FollowTask;

typedef struct { // 0x14
	/* 0x00 */ dgInputStatus status;
	/* 0x04 */ dgInputKey key_type;
	/* 0x05 */ dgInputKey key_play;
	/* 0x06 */ Sint16 weight;
	/* 0x08 */ Sint16 char_no;
	/* 0x0c */ Sint32 ticks;
	/* 0x10 */ Sint32 just_ticks;
} inpResultDetail;

typedef struct { // 0x28c
	/* 0x000 */ Sint8 end;
	/* 0x001 */ Sint8 level;
	/* 0x002 */ Sint8 num;
	/* 0x003 */ Sint8 char_num;
	/* 0x004 */ Sint8 qtype;
	/* 0x005 */ dgInputKey key_cmd;
	/* 0x006 */ Sint16 qid;
	/* 0x008 */ Sint16 point_all;
	/* 0x00a */ Sint16 point_good;
	/* 0x00c */ inpResultDetail detail[32];
} inpResultPerOne;

typedef struct { // 0x8
	/* 0x0 */ Sint8 step_start_index;
	/* 0x1 */ Sint8 question_num;
	/* 0x2 */ Sint8 end;
	/* 0x3 */ Sint8 level;
	/* 0x4 */ Sint16 point_all;
	/* 0x6 */ Sint16 point_good;
} inpResultPerStep;

typedef struct { // 0x1ea0c
	/* 0x00000 */ Sint8 end;
	/* 0x00001 */ Sint8 level;
	/* 0x00002 */ Sint8 combo_true_num;
	/* 0x00003 */ Sint8 combo_false_num;
	/* 0x00004 */ Sint16 point_all;
	/* 0x00006 */ Sint16 point_good;
	/* 0x00008 */ Sint8 step_num;
	/* 0x0000a */ Sint16 question_num;
	/* 0x0000c */ inpResultPerStep result_step[32];
	/* 0x0010c */ inpResultPerOne result_one[128];
	/* 0x1470c */ inpResultPerOne result_secret[64];
} inpResultBuf;

typedef struct { // 0x1c
	/* 0x00 */ Sint8 input_flag;
	/* 0x01 */ Sint8 result_id;
	/* 0x02 */ dgInputKey key;
	/* 0x04 */ Sint32 just_ticks;
	/* 0x08 */ Sint32 next_ticks;
	/* 0x0c */ Sint32 ticks[4];
} inpOneTiming;

typedef struct { // 0x3a8
	/* 0x000 */ Sint8 ticks_index;
	/* 0x001 */ Sint8 q_type;
	/* 0x002 */ Sint8 num;
	/* 0x003 */ Sint8 current_timing;
	/* 0x004 */ Sint8 dire_miss_num;
	/* 0x005 */ Sint8 shot_disable;
	/* 0x006 */ Sint8 dire_combo_num;
	/* 0x008 */ Sint16 qno;
	/* 0x00c */ Sint32 hold_ticks;
	/* 0x010 */ dgPadDig hold_key;
	/* 0x014 */ Sint32 start_ticks;
	/* 0x018 */ Sint32 nb_ticks;
	/* 0x01c */ Sint32 start_beat;
	/* 0x020 */ Sint32 nb_beat;
	/* 0x024 */ inpResultPerOne *result_buf;
	/* 0x028 */ inpOneTiming timing_data[32];
} inpQuestionTask;

typedef struct { // 0x388
	/* 0x000 */ Sint8 mode;
	/* 0x001 */ Sint8 no;
	/* 0x004 */ Sint32 ticks;
	/* 0x008 */ inpOneTiming timing_data[32];
} inpSecretTask;

typedef struct { // 0xa
	/* 0x0 */ Sint16 num;
	/* 0x2 */ Sint16 se_no[4];
} inpSeCfg;

typedef struct { // 0x20
	/* 0x00 */ dgPadDig use_key;
	/* 0x04 */ dgPadDig key_no[7];
} inpKeyCfg;

typedef struct { // 0x1efd0
	/* 0x00000 */ Sint8 mode;
	/* 0x00001 */ Sint8 ignore_prevq_step_level;
	/* 0x00002 */ Sint8 vib_enable_flag;
	/* 0x00003 */ Sint8 vib_play_flag;
	/* 0x00004 */ Sint8 vib_frame;
	/* 0x00005 */ Sint8 current_life;
	/* 0x00006 */ Sint8 result_life;
	/* 0x00007 */ Sint8 qnum;
	/* 0x00008 */ Sint8 star_min;
	/* 0x00009 */ Sint8 star_max;
	/* 0x0000a */ Sint16 up_rate;
	/* 0x0000c */ Sint16 down_rate;
	/* 0x0000e */ Sint16 bonus_rate;
	/* 0x00010 */ Sint16 current_bonus_rate;
	/* 0x00012 */ Sint16 secret_up_rate;
	/* 0x00014 */ Sint16 secret_down_rate;
	/* 0x00018 */ dgInputSeData *se_ptr;
	/* 0x0001c */ inpSeCfg se_cfg[39];
	/* 0x001a2 */ Sint8 q_level_cfg[4];
	/* 0x001a6 */ Sint8 s_level_cfg[4];
	/* 0x001ac */ inpResultBuf result_buf;
	/* 0x1ebb8 */ Sint8 get_char_no[1024];
	/* 0x1efb8 */ Sint32 get_char_totalnum;
	/* 0x1efbc */ void *parent_task;
	/* 0x1efc0 */ inpQuestionTask *task;
	/* 0x1efc4 */ void (*clip_entry_func)(/* parameters unknown */);
	/* 0x1efc8 */ void (*clip_stop_func)(/* parameters unknown */);
	/* 0x1efcc */ dgCharNo clip_char_no;
} inpMainBuf;

typedef struct { // 0x1efe0
	/* 0x00000 */ inpMainBuf buf;
	/* 0x1efd0 */ Sint8 reserve[16];
} inpMainBuf_Rap;

typedef struct { // 0x54
	/* 0x00 */ Sint16 current_rate;
	/* 0x02 */ Sint16 rescue[2];
	/* 0x06 */ Sint16 secret[2];
	/* 0x0a */ Sint16 block_save_current_rate;
	/* 0x0c */ Sint16 block_save_rescue[2];
	/* 0x10 */ Sint16 block_save_secret[2];
	/* 0x14 */ inpKeyCfg key_cfg[2];
} inpMemory;

typedef struct { // 0x8
	/* 0x0 */ Sint8 *vib_play_flag_ptr;
	/* 0x4 */ int vib_frame;
} vibTask;

typedef struct { // 0x10
	/* 0x0 */ Sint8 mode;
	/* 0x4 */ Sint32 ticks[3];
} inpModeTask;

typedef struct { // 0x24
	/* 0x00 */ Sint8 mode;
	/* 0x04 */ int no;
	/* 0x08 */ dgKaraokeType type;
	/* 0x0c */ Sint32 start_frame;
	/* 0x10 */ Sint32 end_frame;
	/* 0x14 */ Float col_start_frame;
	/* 0x18 */ Float col_end_frame;
	/* 0x1c */ char *str;
	/* 0x20 */ dgFontKaraoke *karaoke;
} dgKaraokeStrTask;

typedef struct { // 0x88
	/* 0x00 */ int max_connect;
	/* 0x04 */ int now_connect;
	/* 0x08 */ u_char status[127];
} USBKBINFO_t;

typedef struct { // 0x88
	/* 0x00 */ u_int led;
	/* 0x04 */ u_int mkey;
	/* 0x08 */ int len;
	/* 0x0c */ u_short keycode[62];
} USBKBDATA_t;

typedef struct { // 0xc
	/* 0x0 */ Uint16 key;
	/* 0x2 */ Sint16 flag;
	/* 0x4 */ Sint32 count;
	/* 0x8 */ KeyBuf *next;
} KeyBuf;

typedef struct { // 0x74
	/* 0x00 */ Sint8 old_status;
	/* 0x02 */ Sint16 old_ctrl;
	/* 0x04 */ Sint16 new_ctrl;
	/* 0x08 */ Sint32 repeat_frame;
	/* 0x0c */ KeyBuf *active_ptr;
	/* 0x10 */ KeyBuf *passive_ptr;
	/* 0x14 */ KeyBuf buf[8];
} Keyboard;

typedef struct { // 0xc
	/* 0x0 */ float r;
	/* 0x4 */ float g;
	/* 0x8 */ float b;
} LightRgb;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0xc
	/* 0x0 */ NJS_MKEY_F *lpos;
	/* 0x4 */ NJS_MKEY_UI32 *lcol;
	/* 0x8 */ NJS_MKEY_F2 *lrange;
} LightBuf;

typedef struct { // 0x4c
	/* 0x00 */ Sint8 lock_flag;
	/* 0x04 */ LightRgb amb;
	/* 0x10 */ LightRgb col[2];
	/* 0x28 */ dgMathVector3 vec[2];
	/* 0x40 */ Float intensity;
	/* 0x44 */ Float ambient;
	/* 0x48 */ GWHWND hwnd;
} LightTask;

typedef int (*PNWEXEC)(/* parameters unknown */);

typedef struct { // 0x18
	/* 0x00 */ int nSize;
	/* 0x04 */ int nFlags;
	/* 0x08 */ void *pWork;
	/* 0x0c */ int nWorkSize;
	/* 0x10 */ int nPadPort;
	/* 0x14 */ int nFontSize;
} NWINFORMATION;

typedef struct { // 0x54
	/* 0x00 */ PNWEXEC pFunc;
	/* 0x04 */ char xComdName[16];
	/* 0x14 */ char xHelp[64];
} NWREGIST;

typedef struct *PNWREGIST { // 0x54
	/* 0x00 */ PNWEXEC pFunc;
	/* 0x04 */ char xComdName[16];
	/* 0x14 */ char xHelp[64];
};

typedef struct { // 0x8
	/* 0x0 */ short int TimeZone;
	/* 0x2 */ u_char Aspect;
	/* 0x3 */ u_char DateNotation;
	/* 0x4 */ u_char Language;
	/* 0x5 */ u_char Spdif;
	/* 0x6 */ u_char SummerTime;
	/* 0x7 */ u_char TimeNotation;
} sceScfT10kConfig;

enum {
	UL_IOP_MEDIA_CD = 0,
	UL_IOP_MEDIA_DVD = 1,
	UL_IOP_MEDIA_NUM = 2
};

typedef Sint32 UL_IOP_ERROR;

enum {
	UL_SND_BANK_TYPE_MIDI_SEQ = 0,
	UL_SND_BANK_TYPE_MIDI_PRG = 1,
	UL_SND_BANK_TYPE_ONE_SHOT = 2,
	UL_SND_BANK_TYPE_FX_PARAM = 3,
	UL_SND_BANK_TYPE_FX_WORK = 4,
	UL_SND_BANK_TYPE_NUM = 5
};

enum {
	UL_SND_OUTPUT_MODE_STEREO = 0,
	UL_SND_OUTPUT_MODE_MONO = 1
};

enum {
	UL_SND_MEMBLK_MODE_NO_SYNC = 0,
	UL_SND_MEMBLK_MODE_SYNC = 1
};

enum {
	UL_SND_MEMBLK_FLAG_STANDBY = 0,
	UL_SND_MEMBLK_FLAG_WAIT = 1,
	UL_SND_MEMBLK_FLAG_TRANSLATE = 2,
	UL_SND_MEMBLK_FLAG_FINISHED = 3
};

enum {
	UL_SND_IOP_HCMD_STAT_EMPTY = 0,
	UL_SND_IOP_HCMD_STAT_BUSY = 1
};

typedef Sint32 UL_SND_ERROR;

typedef struct { // 0x20
	/* 0x00 */ Uint32 main_count;
	/* 0x04 */ char mess[28];
} UL_SND_DRIVER_STATUS_ERROR;

typedef struct { // 0x10
	/* 0x0 */ Uint32 main_count;
	/* 0x4 */ Uint32 status;
	/* 0x8 */ char hcmd[8];
} UL_SND_DRIVER_STATUS_HCMD_HISTORY;

typedef struct { // 0x1a8
	/* 0x000 */ Uint32 main_count;
	/* 0x004 */ struct { // 0x8
		/* 0x004 */ size_t free_size;
		/* 0x008 */ size_t max_size;
	} iop_heap;
	/* 0x00c */ struct { // 0x64
		/* 0x00c */ Sint32 cur_buf;
		/* 0x010 */ UL_SND_DRIVER_STATUS_ERROR error[3];
	} error;
	/* 0x070 */ struct { // 0x108
		/* 0x070 */ Sint32 total;
		/* 0x074 */ Sint32 cur_buf;
		/* 0x078 */ UL_SND_DRIVER_STATUS_HCMD_HISTORY history[16];
	} hcmd;
	/* 0x178 */ struct { // 0x20
		/* 0x178 */ Sint8 midi_seq[16];
		/* 0x188 */ Sint8 one_shot[16];
	} play_flag;
	/* 0x198 */ struct { // 0x10
		/* 0x198 */ Uint32 sd_s_endx[2];
		/* 0x1a0 */ Uint32 sd_s_kon[2];
	} spu;
} UL_SND_DRIVER_STATUS;

typedef void *UL_SND_MSEQ_HANDLE;
typedef void *UL_SND_MDIR_HANDLE;
typedef void *UL_SND_OSHT_HANDLE;
typedef void *UL_SND_STRM_HANDLE;
typedef void *UL_SND_MEMBLK;

struct mallinfo { // 0x28
	/* 0x00 */ int arena;
	/* 0x04 */ int ordblks;
	/* 0x08 */ int smblks;
	/* 0x0c */ int hblks;
	/* 0x10 */ int hblkhd;
	/* 0x14 */ int usmblks;
	/* 0x18 */ int fsmblks;
	/* 0x1c */ int uordblks;
	/* 0x20 */ int fordblks;
	/* 0x24 */ int keepcost;
};

struct _dgVSyncCallbackInfo { // 0x10
	/* 0x0 */ void (*func)(/* parameters unknown */);
	/* 0x4 */ void *work;
	/* 0x8 */ Uint32 priority;
	/* 0xc */ Sint32 id;
};

typedef _dgVSyncCallbackInfo dgVSyncCallbackInfo;

enum {
	DG_UV_IX_L = 0,
	DG_UV_IX_R = 1,
	DG_UV_IX_U = 2,
	DG_UV_IX_D = 3,
	DG_UV_IX_LU = 4,
	DG_UV_IX_RU = 5,
	DG_UV_IX_LD = 6,
	DG_UV_IX_RD = 7,
	DG_UV_IX_ALL = 8,
	DG_UV_IX_L_INV = 9,
	DG_UV_IX_R_INV = 10,
	DG_UV_IX_U_INV = 11,
	DG_UV_IX_D_INV = 12,
	DG_UV_IX_LU_INV = 13,
	DG_UV_IX_RU_INV = 14,
	DG_UV_IX_LD_INV = 15,
	DG_UV_IX_RD_INV = 16,
	DG_UV_IX_ALL_INV = 17,
	DG_UV_IX_MAX = 18
};

typedef struct { // 0x4
	/* 0x0 */ Sint16 u;
	/* 0x2 */ Sint16 v;
} dgUV;

typedef struct { // 0x8
	/* 0x0 */ Float u;
	/* 0x4 */ Float v;
} dgUVFloat;

typedef struct { // 0x24
	/* 0x00 */ Sint16 *plist_ptr;
	/* 0x04 */ Sint16 *texid_ptr;
	/* 0x08 */ dgMathVector3 pos;
	/* 0x14 */ Sint32 texid;
	/* 0x18 */ Sint32 uv_num;
	/* 0x1c */ Sint8 type;
	/* 0x20 */ dgUV *uv_tbl;
} dgUVData;

typedef struct { // 0x10
	/* 0x0 */ Sint32 model_num;
	/* 0x4 */ dgUVData *data_tbl;
	/* 0x8 */ dgUV *uv_buf;
	/* 0xc */ dgUV *uv_buf_ptr;
} dgUVList;

enum {
	L_LEVEL = 0,
	X_LEVEL = 1
};

enum {
	MOTION_BEAT_TYPE_1 = 0,
	MOTION_BEAT_TYPE_2 = 1,
	MOTION_BEAT_TYPE_3 = 2,
	MOTION_BEAT_TYPE_4 = 3,
	MOTION_BEAT_TYPE_5 = 4,
	MOTION_BEAT_TYPE_6 = 5,
	MOTION_BEAT_TYPE_7 = 6,
	MOTION_BEAT_TYPE_8 = 7,
	MOTION_BEAT_TYPE_9 = 8,
	MOTION_BEAT_TYPE_10 = 9,
	MOTION_BEAT_TYPE_11 = 10,
	MOTION_BEAT_TYPE_12 = 11,
	MOTION_BEAT_TYPE_13 = 12,
	MOTION_BEAT_TYPE_14 = 13,
	MOTION_BEAT_TYPE_15 = 14,
	MOTION_BEAT_TYPE_16 = 15,
	MOTION_BEAT_TYPE_MAX = 16
};

typedef struct { // 0x8
	/* 0x0 */ Sint32 tex_no;
	/* 0x4 */ Sint32 pat_num;
} dgPatchTexData;

typedef struct { // 0x228
	/* 0x000 */ NJS_FOG_TABLE fog_table;
	/* 0x200 */ Uint32 fog_density;
	/* 0x204 */ Uint32 fog_color;
	/* 0x208 */ Bool enable_flg;
	/* 0x20c */ Float r;
	/* 0x210 */ Float g;
	/* 0x214 */ Float b;
	/* 0x218 */ Float min;
	/* 0x21c */ Float max;
	/* 0x220 */ Float near;
	/* 0x224 */ Float far;
} DgFogData;

typedef struct { // 0x10
	/* 0x0 */ Sint16 org_texid;
	/* 0x2 */ Sint8 pat_num;
	/* 0x4 */ Float cnt;
	/* 0x8 */ Float cnt_diff;
	/* 0xc */ Sint16 *texid_ptr;
} dgTexch;

struct tagDgTexchData { // 0x8
	/* 0x0 */ Sint32 texid_num;
	/* 0x4 */ dgTexch *data_ptr;
};

typedef struct { // 0x8
	/* 0x0 */ dgPatchTexData *tex_data_ptr;
	/* 0x4 */ Sint32 texnum;
} TexidInputParam;

typedef struct { // 0x10
	/* 0x0 */ dgTexchData *data;
	/* 0x4 */ Sint16 ***texid_ptr;
	/* 0x8 */ Sint16 **texid;
	/* 0xc */ Sint32 *texid_num;
} TexidOutputParam;

typedef struct { // 0x60
	/* 0x00 */ Sint32 dsp_type;
	/* 0x04 */ Sint32 dsp_flg;
	/* 0x08 */ Sint32 *obj_tbl_ptr;
	/* 0x0c */ Sint32 *mot_tbl_ptr;
	/* 0x10 */ Sint32 tex_num;
	/* 0x14 */ Sint32 dummy[3];
	/* 0x20 */ dgMathMatrix mtrx;
} dgMapData;

typedef struct { // 0x2d8
	/* 0x000 */ Sint16 map_num;
	/* 0x004 */ dgMapData *map_data;
	/* 0x008 */ Sint32 texch_tex_num;
	/* 0x00c */ dgPatchTexData *texch_tex_ptr;
	/* 0x010 */ Sint32 texch_obj_num;
	/* 0x014 */ Sint32 *texch_obj_ptr;
	/* 0x018 */ Bool viewer_flg;
	/* 0x01c */ Sint8 *flg;
	/* 0x020 */ DgFogData fog_data;
	/* 0x248 */ NJS_ARGB *argb;
	/* 0x24c */ Sint16 cnk_num;
	/* 0x250 */ float *frame;
	/* 0x254 */ float *max_frame;
	/* 0x258 */ dgTexInfo *texinfo;
	/* 0x25c */ dgObjCtrl **oc_ptr;
	/* 0x260 */ mtnPose **oc_pose_ptr;
	/* 0x264 */ dgMathMatrix **oc_mtrx_ptr;
	/* 0x268 */ dgMathMatrix **usr_mtrx_ptr;
	/* 0x26c */ dgMathMatrix **path_mtrx_ptr;
	/* 0x270 */ void **direct_ptr_tbl;
	/* 0x274 */ Sint16 *obj_cix;
	/* 0x278 */ Sint16 *mot_cix;
	/* 0x27c */ Sint8 movie_flg;
	/* 0x280 */ void *data_adr;
	/* 0x284 */ Sint8 *motion_beat_type;
	/* 0x288 */ Float motion_frame[16];
	/* 0x2c8 */ dgTexchData *texch_data;
	/* 0x2cc */ dgMainDisplayListPrio *priority_type;
	/* 0x2d0 */ Bool *draw_compile_ignore_flg;
	/* 0x2d4 */ GWHWND hWnd_fog;
} MapTask;

typedef struct { // 0x20
	/* 0x00 */ Sint32 *vlist;
	/* 0x04 */ int cnkType;
	/* 0x08 */ int data_size;
	/* 0x0c */ Sint32 *vertices;
	/* 0x10 */ Sint32 *normals;
	/* 0x14 */ Sint32 *colors;
	/* 0x18 */ int **pktNormal;
	/* 0x1c */ int **pktColor;
} NJS_CNK_VLIST_INFO;

typedef struct { // 0x10
	/* 0x0 */ Sint16 offset;
	/* 0x2 */ Sint16 keyframe;
	/* 0x4 */ Float dummy;
	/* 0x8 */ Sint32 reserve[2];
} MotionValuesHeader;

typedef struct { // 0x10
	/* 0x0 */ Sint16 current_key;
	/* 0x2 */ Sint16 next_key;
	/* 0x4 */ dgMathVector3 vec;
} MotionKeyF;

enum {
	DGMOVIE_CUE_STAT_FREE = 21062,
	DGMOVIE_CUE_STAT_BUSY = 23106,
	DGMOVIE_CUE_STAT_EOE = 23107
};

struct _dgMovieEndCallbackInfo { // 0x4
	/* 0x0 */ void (*func)(/* parameters unknown */);
};

typedef _dgMovieEndCallbackInfo dgMovieEndCallbackInfo;
typedef _dgMovieEndCallbackInfo *dgMovieEndCallbackInfoPtr;

struct _dgMovieExecCallbackInfo { // 0x14
	/* 0x00 */ void (*func)(/* parameters unknown */);
	/* 0x04 */ Sint32 p1;
	/* 0x08 */ Sint32 p2;
	/* 0x0c */ Sint32 p3;
	/* 0x10 */ Sint32 p4;
};

typedef _dgMovieExecCallbackInfo dgMovieExecCallbackInfo;
typedef _dgMovieExecCallbackInfo *dgMovieExecCallbackInfoPtr;

struct _dgMovieCue { // 0x4c
	/* 0x00 */ Uint16 stat;
	/* 0x02 */ Uint16 flag;
	/* 0x04 */ Uint16 cmd;
	/* 0x06 */ Uint16 para;
	/* 0x08 */ Uint32 serial;
	/* 0x0c */ _dgMovieCue *next;
	/* 0x10 */ _dgMovieCue *prev;
	/* 0x14 */ Sint32 fmode;
	/* 0x18 */ char fname[37];
	/* 0x40 */ Sint32 pid;
	/* 0x44 */ Sint32 iid;
	/* 0x48 */ dgMovieEndCallbackInfo endcallback;
};

typedef _dgMovieCue dgMovieCue;
typedef _dgMovieCue *dgMovieCuePtr;

struct _dgMovieInfo { // 0x57c
	/* 0x000 */ Uint16 stat;
	/* 0x002 */ Uint16 flag;
	/* 0x004 */ Uint16 dsttype;
	/* 0x006 */ Uint16 same_time_cnt;
	/* 0x008 */ dgMovieCuePtr cue_master;
	/* 0x00c */ dgMovieCue cue_buf[16];
	/* 0x4cc */ dgMovieCue cue_now;
	/* 0x518 */ MWS_PLY_CPRM_SFD cprm;
	/* 0x538 */ MWPLY ply;
	/* 0x53c */ Float time;
	/* 0x540 */ Sint32 entry_num;
	/* 0x544 */ MWE_PLY_STAT ply_stat;
	/* 0x548 */ Bool go;
	/* 0x54c */ Uint16 pause_time;
	/* 0x54e */ Uint16 pause_cnt;
	/* 0x550 */ Float prev_time;
	/* 0x554 */ Sint32 loopflag;
	/* 0x558 */ Sint32 droptex;
	/* 0x55c */ ADXF adxf;
	/* 0x560 */ SJ sj;
	/* 0x564 */ ulTexture *tex;
	/* 0x568 */ dgMovieExecCallbackInfo exec_callback;
};

typedef _dgMovieInfo dgMovieInfo;
typedef _dgMovieInfo *dgMovieInfoPtr;

struct _dgMovieSystemInfo { // 0x5bc
	/* 0x000 */ void* (*malloc)(/* parameters unknown */);
	/* 0x004 */ void (*free)(/* parameters unknown */);
	/* 0x008 */ void (*memset)(/* parameters unknown */);
	/* 0x00c */ void (*memcpy)(/* parameters unknown */);
	/* 0x010 */ MWS_PLY_INIT_SFD iprm;
	/* 0x030 */ dgMovieInfo info;
	/* 0x5ac */ Uint32 serial_master;
	/* 0x5b0 */ GWHWND debwin_info;
	/* 0x5b4 */ GWHWND debwin_cue;
	/* 0x5b8 */ Sint32 debwin_cue_no;
};

typedef _dgMovieSystemInfo dgMovieSystemInfo;
typedef _dgMovieSystemInfo *dgMovieSystemInfoPtr;

typedef enum {
	DG_PARAB_FLAG_CONSTV_X = 1,
	DG_PARAB_FLAG_CONSTV_Y = 2,
	DG_PARAB_FLAG_CONSTV_Z = 4,
	DG_PARAB_FLAG_MAX = 5
} dgParabFlag;

typedef struct { // 0x3c
	/* 0x00 */ dgMathVector3 to_pos;
	/* 0x0c */ dgMathVector3 position;
	/* 0x18 */ dgMathVector3 velocity;
	/* 0x24 */ dgMathVector3 accel;
	/* 0x30 */ Sint32 count;
	/* 0x34 */ dgParabFlag flag;
	/* 0x38 */ dgParabVectorFD *debug_ptr;
} dgParabVector;

typedef struct { // 0x44
	/* 0x00 */ dgMathVector3 *buf;
	/* 0x04 */ dgParabVector parab;
	/* 0x40 */ Sint32 const_count;
} dgParabVectorFD;

typedef struct { // 0x83
	/* 0x00 */ Sint8 size;
	/* 0x01 */ Sint8 flag;
	/* 0x02 */ char buf[129];
} PrintfBuf;

typedef struct { // 0x10
	/* 0x0 */ dgMathQuaternion *current_buf;
	/* 0x4 */ dgMathQuaternion *buf;
	/* 0x8 */ Uint32 current_num;
	/* 0xc */ Uint32 num;
} dgQuaternionStack;

typedef struct { // 0x8
	/* 0x0 */ Sint32 nb_key;
	/* 0x4 */ Sint32 *key;
} dgShapeKeyList;

typedef struct { // 0x8
	/* 0x0 */ Sint8 element;
	/* 0x1 */ Sint8 type;
	/* 0x2 */ Sint16 dummy;
	/* 0x4 */ dgObjVlist *vlist;
} dgShapeVlist;

typedef struct { // 0x8
	/* 0x0 */ Sint32 key_list_no;
	/* 0x4 */ dgShapeVlist *list;
} dgShapeData;

typedef struct { // 0x8
	/* 0x0 */ Sint32 nb_data;
	/* 0x4 */ dgShapeData *data;
} dgShapeMdlList;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x18
	/* 0x00 */ Sint32 id;
	/* 0x04 */ Sint32 frame;
	/* 0x08 */ Sint32 flag;
	/* 0x0c */ Sint16 nb_key;
	/* 0x0e */ Sint16 nb_mdl;
	/* 0x10 */ dgShapeKeyList *key_list;
	/* 0x14 */ dgShapeMdlList *mdl_list;
} dgShapeMotion;

typedef struct { // 0xc
	/* 0x0 */ Sint8 element;
	/* 0x2 */ Sint16 nb_data;
	/* 0x4 */ dgObjVlist *vlist;
	/* 0x8 */ dgObjVlist *org_vlist;
} dgShapePoseModel;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x8
	/* 0x0 */ Sint16 nb_mdl;
	/* 0x4 */ dgShapePoseModel *model;
} dgShapePose;

typedef struct { // 0x8
	/* 0x0 */ Sint8 normal_offset;
	/* 0x1 */ Sint8 d32_offset;
	/* 0x2 */ Sint8 long_size;
	/* 0x4 */ dgObjVlist *current_vlist;
} VlistCtrl;

typedef struct { // 0x8
	/* 0x0 */ int index;
	/* 0x4 */ Float alpha;
} KeyGroup;

typedef enum {
	MLT_CACHE_FLAG_CLEAN = 0,
	MLT_CACHE_FLAG_ENTRY = 1,
	MLT_CACHE_FLAG_DIRTY = 2,
	MLT_CACHE_FLAG_MAX = 3
} MltCacheFlag;

typedef struct { // 0x388
	/* 0x000 */ Sint8 drv_ready;
	/* 0x001 */ Sint8 midi_port_no;
	/* 0x002 */ Sint8 shot_port_no;
	/* 0x004 */ Uint16 midi_mute_ch;
	/* 0x008 */ Sint32 trans_div_sz;
	/* 0x00c */ SDMIDI midi[8];
	/* 0x02c */ SDS_MIDI_STAT midi_stat[8];
	/* 0x10c */ SDSHOT shot[16];
	/* 0x14c */ SDS_SHOT_STAT shot_stat[16];
	/* 0x30c */ Sint32 shot_play_adr[16];
	/* 0x34c */ dgSoundData midi_no[8];
	/* 0x35c */ dgSoundData shot_no[16];
	/* 0x37c */ Sint32 mlt_dirty;
	/* 0x380 */ char *mlt_fname;
	/* 0x384 */ GWHWND hwnd;
} SoundCtrl;

typedef struct { // 0x8
	/* 0x0 */ char *file_suffix;
	/* 0x4 */ SDE_DATA_TYPE data_type;
} BankData;

typedef struct { // 0x14
	/* 0x00 */ Sint8 cache_entry;
	/* 0x01 */ Sint8 mode;
	/* 0x04 */ SDMEMBLK mem_blk;
	/* 0x08 */ Uint32 size;
	/* 0x0c */ Uint32 start_time;
	/* 0x10 */ SDE_ERR err;
} MemTransTask;

typedef struct { // 0x20
	/* 0x00 */ Sint8 bank;
	/* 0x01 */ Sint8 mode;
	/* 0x02 */ Sint8 load_end_flag;
	/* 0x04 */ SDE_DATA_TYPE data_type;
	/* 0x08 */ void *ptr;
	/* 0x0c */ Uint32 size;
	/* 0x10 */ Uint32 serial_id;
	/* 0x14 */ void *mem_trans_task;
	/* 0x18 */ Uint32 start_time;
	/* 0x1c */ Uint32 end_time;
} LoadBankTask;

typedef struct { // 0x1c
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 load_end_flag;
	/* 0x04 */ void *ptr;
	/* 0x08 */ Uint32 size;
	/* 0x0c */ Uint32 serial_id;
	/* 0x10 */ void *mem_trans_task;
	/* 0x14 */ Uint32 start_time;
	/* 0x18 */ Uint32 end_time;
} LoadMltTask;

typedef struct { // 0x8
	/* 0x0 */ Uint32 serial_id;
	/* 0x4 */ Sint16 priority;
} sndEvPsBuf;

typedef struct { // 0xc
	/* 0x0 */ Sint8 flag;
	/* 0x1 */ Sint8 cmd;
	/* 0x2 */ dgSoundData no;
	/* 0x4 */ Sint16 extend;
	/* 0x8 */ Sint32 ticks;
} sndEvBuf;

typedef struct { // 0x62c
	/* 0x000 */ Sint16 draw_start_no;
	/* 0x002 */ Sint16 entry_no;
	/* 0x004 */ Sint16 exec_no;
	/* 0x008 */ Float bias_frame;
	/* 0x00c */ sndEvBuf buf[128];
	/* 0x60c */ sndEvPsBuf ps_buf[4];
} sndEvCtrl;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x90
	/* 0x00 */ Sint8 active_flag;
	/* 0x01 */ Sint8 disp_flag;
	/* 0x04 */ dgSplEditType type;
	/* 0x08 */ dgSpline *spl;
	/* 0x0c */ int select_key_no;
	/* 0x10 */ int select_type;
	/* 0x14 */ void *picked_ptr;
	/* 0x18 */ void *calc_work;
	/* 0x1c */ dgMathVector2 spos;
	/* 0x24 */ Sint32 frame;
	/* 0x28 */ int param;
	/* 0x2c */ void (*add_callback)(/* parameters unknown */);
	/* 0x30 */ void (*insert_callback)(/* parameters unknown */);
	/* 0x34 */ dgMemPartition *memp;
	/* 0x38 */ dgMathVector3 wpos;
	/* 0x44 */ dgMathAngle1 angle;
	/* 0x50 */ dgMathMatrix base_mat;
} dgSplEdit;

enum {
	SPL_COL_PNT_SEL = 0,
	SPL_COL_PNT_NOSEL = 1,
	SPL_COL_HND = 2,
	SPL_COL_LINE = 3,
	SPL_COL_NON_ACTIVE = 4,
	SPL_COL_MAX = 5
};

typedef Float TimeData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x10
	/* 0x0 */ Sint16 nb_point;
	/* 0x2 */ Sint8 spline_type;
	/* 0x3 */ Sint8 data_type;
	/* 0x4 */ Sint32 nb_frame;
	/* 0x8 */ Uint32 point_data_size_4;
	/* 0xc */ Uint32 time_data_size_4;
} dgSpline;

enum {
	DGSTREAM_TIMESWITCH_CMD_ACTIVE = 0,
	DGSTREAM_TIMESWITCH_CMD_SLEEP = 1,
	DGSTREAM_TIMESWITCH_CMD_EOE = 2
};

enum {
	DGSTREAM_TIMESWITCH_TIMING_EARLY = 0,
	DGSTREAM_TIMESWITCH_TIMING_JUST = 1,
	DGSTREAM_TIMESWITCH_TIMING_LATE = 2,
	DGSTREAM_TIMESWITCH_TIMING_USERTRIGGER = 3,
	DGSTREAM_TIMESWITCH_TIMING_ERROR = 4,
	DGSTREAM_TIMESWITCH_TIMING_EOE = 5
};

struct _dgStreamTimeSwitchCue { // 0x48
	/* 0x00 */ Uint16 stat;
	/* 0x02 */ Uint16 cmd;
	/* 0x04 */ _dgStreamTimeSwitchCue *prev;
	/* 0x08 */ _dgStreamTimeSwitchCue *next;
	/* 0x0c */ Uint32 serial;
	/* 0x10 */ Sint32 stream;
	/* 0x14 */ Float start;
	/* 0x18 */ Sint32 fmode;
	/* 0x1c */ char fname[36];
	/* 0x40 */ Sint32 pid;
	/* 0x44 */ Sint32 iid;
};

typedef _dgStreamTimeSwitchCue dgStreamTimeSwitchCue;
typedef _dgStreamTimeSwitchCue *dgStreamTimeSwitchCuePtr;

struct _dgStreamTimeSwitchCueInfo { // 0x244
	/* 0x000 */ dgStreamTimeSwitchCuePtr master;
	/* 0x004 */ dgStreamTimeSwitchCue buf[8];
};

typedef _dgStreamTimeSwitchCueInfo dgStreamTimeSwitchCueInfo;
typedef _dgStreamTimeSwitchCueInfo *dgStreamTimeSwitchCueInfoPtr;

struct _dgStreamInfo { // 0x40
	/* 0x00 */ Uint16 stat;
	/* 0x04 */ Bool go;
	/* 0x08 */ Bool allsync;
	/* 0x0c */ Uint16 pause_onoff;
	/* 0x10 */ Float base;
	/* 0x14 */ Uint32 (*play)(/* parameters unknown */);
	/* 0x18 */ Uint32 (*playafs)(/* parameters unknown */);
	/* 0x1c */ Uint16 (*getstat)(/* parameters unknown */);
	/* 0x20 */ void (*stop)(/* parameters unknown */);
	/* 0x24 */ void (*gogo)(/* parameters unknown */);
	/* 0x28 */ Float (*gettime)(/* parameters unknown */);
	/* 0x2c */ Uint32 (*entry)(/* parameters unknown */);
	/* 0x30 */ Uint32 (*entryafs)(/* parameters unknown */);
	/* 0x34 */ Sint32 (*pause)(/* parameters unknown */);
	/* 0x38 */ Sint32 wait_zero_time;
	/* 0x3c */ Bool wait_zero_sw;
};

typedef _dgStreamInfo dgStreamInfo;
typedef _dgStreamInfo *dgStreamInfoPtr;

typedef enum {
	DGSTREAM_DEBWIN_KIND_NOR = 0,
	DGSTREAM_DEBWIN_KIND_LOG = 1,
	DGSTREAM_DEBWIN_KIND_MAX = 2
} dgStreamDebWinKind;

struct _dgStreamDebWinInfo { // 0x60
	/* 0x00 */ dgStreamDebWinKind kind;
	/* 0x04 */ GWHWND hWnd;
	/* 0x08 */ GWHWND hScrlBarV;
	/* 0x0c */ GWHWND hScrlBarH;
	/* 0x10 */ gwVariable varV;
	/* 0x24 */ gwVariable varH;
	/* 0x38 */ Sint32 x;
	/* 0x3c */ Sint32 y;
	/* 0x40 */ Sint32 disp_w;
	/* 0x44 */ Sint32 disp_h;
	/* 0x48 */ Sint32 buf_w;
	/* 0x4c */ Sint32 buf_h;
	/* 0x50 */ Sint32 write_window_y;
	/* 0x54 */ Sint32 write_y;
	/* 0x58 */ void (*drawfunc)(/* parameters unknown */);
	/* 0x5c */ char *buf;
};

typedef _dgStreamDebWinInfo dgStreamDebWinInfo;
typedef _dgStreamDebWinInfo *dgStreamDebWinInfoPtr;

struct _dgStreamSystemInfo { // 0x6a0
	/* 0x000 */ dgStreamInfo info[5];
	/* 0x140 */ dgStreamTimeSwitchCueInfo timeswitch_info[2];
	/* 0x5c8 */ Uint32 timeswitch_serial_master;
	/* 0x5cc */ Sint32 pause_stat;
	/* 0x5d0 */ Float pause_timeout;
	/* 0x5d4 */ Sint32 pause_timeout_on_cnt;
	/* 0x5d8 */ Sint32 pause_timeout_off_cnt;
	/* 0x5dc */ GWHWND debwin_info;
	/* 0x5e0 */ dgStreamDebWinInfo wininfo_timeswitch_cue;
	/* 0x640 */ dgStreamDebWinInfo wininfo_timeswitch_log;
};

typedef _dgStreamSystemInfo dgStreamSystemInfo;
typedef _dgStreamSystemInfo *dgStreamSystemInfoPtr;

typedef struct { // 0x8
	/* 0x0 */ Sint16 *ptr;
	/* 0x4 */ char *name;
} dgShLabel;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x40
	/* 0x00 */ Sint32 id;
	/* 0x04 */ Uint32 filesize;
	/* 0x08 */ Sint16 absolute_flag;
	/* 0x0a */ Sint16 menu_num;
	/* 0x0c */ Sint16 labels_num[5];
	/* 0x16 */ Sint16 fname_num;
	/* 0x18 */ Sint16 *menu_ptr;
	/* 0x1c */ Sint16 *setting_ptr;
	/* 0x20 */ dgShLabel *labels_ptr[5];
	/* 0x34 */ char **fname_ptr;
	/* 0x38 */ Sint32 dummy[2];
} dgShHeader;

typedef struct { // 0xc
	/* 0x0 */ Sint8 flag;
	/* 0x1 */ Sint8 type;
	/* 0x2 */ Sint16 nb_beat;
	/* 0x4 */ Sint16 beat_per_meas;
	/* 0x6 */ Sint16 ticks_per_minute;
	/* 0x8 */ Sint16 start_beat;
	/* 0xa */ Sint16 param;
} shSequenceBuf;

typedef struct { // 0xc2
	/* 0x00 */ Sint8 seq_entry_no;
	/* 0x01 */ Sint8 seq_exec_no;
	/* 0x02 */ shSequenceBuf seq_buf[16];
} shSequenceCtrl;

typedef struct { // 0x15c
	/* 0x000 */ Sint8 speed;
	/* 0x001 */ Sint8 window_type;
	/* 0x002 */ Sint8 metronome_flag;
	/* 0x003 */ Sint8 tool_type;
	/* 0x004 */ Sint8 block_mode;
	/* 0x005 */ Sint8 btl_quit_enable;
	/* 0x008 */ dgShStat status;
	/* 0x00c */ dgShHeader *header;
	/* 0x010 */ void *inp_task;
	/* 0x014 */ void *ev_task;
	/* 0x018 */ void *prep_task;
	/* 0x01c */ Sint16 *ev;
	/* 0x020 */ Uint32 start_beat;
	/* 0x024 */ Uint32 nb_beat;
	/* 0x028 */ Uint32 beat_per_meas;
	/* 0x02c */ Uint32 ticks_per_minute;
	/* 0x030 */ Float beat_per_minute;
	/* 0x034 */ Float frame_per_beat;
	/* 0x038 */ Float start_sample;
	/* 0x03c */ Float start_ticks;
	/* 0x040 */ Float base_sample;
	/* 0x044 */ Float prev_sample;
	/* 0x048 */ Float current_sample;
	/* 0x04c */ Float current_ticks;
	/* 0x050 */ Float current_frame;
	/* 0x054 */ Float current_beat;
	/* 0x058 */ Float current_beat_floor;
	/* 0x05c */ Sint32 current_meas;
	/* 0x060 */ Float beat_in_meas;
	/* 0x064 */ Float beat_in_meas_top;
	/* 0x068 */ Sint32 next_entry_beat;
	/* 0x06c */ shSequenceCtrl seq_ctrl;
	/* 0x130 */ int level_q;
	/* 0x134 */ int level_step;
	/* 0x138 */ dgShCdsLevel level_cds;
	/* 0x13c */ dgShWalkLevel level_walk;
	/* 0x140 */ int last_exec_label[5];
	/* 0x154 */ GWHWND hwnd[2];
} shMainBuf;

typedef struct { // 0x160
	/* 0x000 */ shMainBuf buf;
	/* 0x15c */ Sint8 reserve[4];
} shMainBuf_Rap;

typedef struct { // 0x3c
	/* 0x00 */ Sint8 sp;
	/* 0x01 */ Sint8 debug;
	/* 0x02 */ Sint8 seq_type;
	/* 0x03 */ Sint8 q_type;
	/* 0x04 */ Sint8 label_type;
	/* 0x05 */ Sint8 seq_no;
	/* 0x06 */ Sint8 btl_flag;
	/* 0x07 */ Sint8 btl_quit_req;
	/* 0x08 */ Sint8 step_flag;
	/* 0x09 */ Sint8 btl_q_type;
	/* 0x0a */ Sint16 base_beat;
	/* 0x0c */ Sint16 qno;
	/* 0x0e */ Sint16 qid;
	/* 0x10 */ Sint16 current_label;
	/* 0x14 */ Sint32 flag;
	/* 0x18 */ void *load_task;
	/* 0x1c */ Sint16 *ev[8];
} dgShEventTask;

typedef struct { // 0x8
	/* 0x0 */ char *str;
	/* 0x4 */ Bool (*func)(/* parameters unknown */);
} dgShEventCmd;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x3c
	/* 0x00 */ Sint8 sub_sub_block_no;
	/* 0x04 */ Sint32 sub_block_no;
	/* 0x08 */ Sint32 prev_seq_type;
	/* 0x0c */ Sint32 seq_id;
	/* 0x10 */ Sint32 start_beat;
	/* 0x14 */ Sint32 nb_beat;
	/* 0x18 */ Sint32 param;
	/* 0x1c */ Sint32 brk_no;
	/* 0x20 */ void *parent_task;
	/* 0x24 */ void *user_buf;
	/* 0x28 */ dgShSpyMovCallback cb_mov;
	/* 0x2c */ dgShSpyBtlCallback cb_btl;
	/* 0x30 */ dgShSpyQaCallback cb_qa;
	/* 0x34 */ dgShSpyBrkCallback cb_brk;
	/* 0x38 */ dgShSpyDestructor destructor;
} dgShSpy;

typedef struct { // 0xc
	/* 0x0 */ Sint8 sub_block_change_flag;
	/* 0x4 */ Sint32 sub_block_no;
	/* 0x8 */ int id;
} dgShSpyTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x8
	/* 0x0 */ Sint8 pause_flag;
	/* 0x1 */ Sint8 pause_enable_flag;
	/* 0x4 */ Sint32 task_num;
} dgTaskRoot;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x40
	/* 0x00 */ Sint32 head_mark;
	/* 0x04 */ Uint32 id;
	/* 0x08 */ Uint32 status;
	/* 0x0c */ dgTaskHeader *parent;
	/* 0x10 */ dgTaskHeader *child;
	/* 0x14 */ dgTaskHeader *sibling;
	/* 0x18 */ char *caption;
	/* 0x1c */ dgMemPartition *mem_partition;
	/* 0x20 */ void (*exe_func)(/* parameters unknown */);
	/* 0x24 */ void (*dsp_func)(/* parameters unknown */);
	/* 0x28 */ void (*del_func)(/* parameters unknown */);
	/* 0x2c */ Uint32 exe_micro;
	/* 0x30 */ Uint32 dsp_micro;
	/* 0x34 */ Uint32 exe_micro_hrc;
	/* 0x38 */ Uint32 dsp_micro_hrc;
	/* 0x3c */ dgMainDisplayListPrio draw_prio;
} dgTaskHeader;

typedef struct { // 0x1c
	/* 0x00 */ Uint32 limit_micro;
	/* 0x04 */ Sint32 start_num;
	/* 0x08 */ Sint32 disp_num;
	/* 0x0c */ Sint32 hrc_lv;
	/* 0x10 */ Sint32 task_name_disp_len;
	/* 0x14 */ Sint32 current_num;
	/* 0x18 */ GWHWND hwnd;
} TaskDebug;

typedef struct { // 0x44
	/* 0x00 */ dgCamera *user_cam_p;
	/* 0x04 */ dgMathVector3 cam_pos;
	/* 0x10 */ dgMathAngle3 cam_ang;
	/* 0x1c */ dgMathAngle1 view_ang;
	/* 0x20 */ dgMathAngle3 angle;
	/* 0x2c */ float radius;
	/* 0x30 */ dgMathVector3 interest;
	/* 0x3c */ dgMathVector3 *target_p;
	/* 0x40 */ gwVarEditList *edit_list_p;
} FreeCamTask;

typedef enum {
	FREECAM_MODE_OFF = 0,
	FREECAM_MODE_ON = 1,
	FREECAM_MODE_RESET = 2,
	FREECAM_END = 3
} FreecamMode;

typedef struct { // 0x34
	/* 0x00 */ dgPadPort port;
	/* 0x04 */ FreecamMode free_cam_mode;
	/* 0x08 */ Bool free_cam_window_flag;
	/* 0x0c */ GWHWND wnd_h;
	/* 0x10 */ FreeCamTask *task_p;
	/* 0x14 */ float speed;
	/* 0x18 */ float rad_def;
	/* 0x1c */ float rad_speed;
	/* 0x20 */ float rad_min;
	/* 0x24 */ float rad_max;
	/* 0x28 */ dgMathAngle1 limit_ang;
	/* 0x2c */ Bool ang_edit_flag;
	/* 0x30 */ Sint16 control;
} FreeCamParam;

typedef struct { // 0x110
	/* 0x000 */ void (*func_p)(/* parameters unknown */);
	/* 0x004 */ char dialog_msg[256];
	/* 0x104 */ Sint16 mode;
	/* 0x108 */ GWHWND wnd_h;
	/* 0x10c */ GWHWND button_wnd_h;
} DialogTask;

enum {
	UVN = 0,
	UVH = 1
};

enum {
	SET_UV = 0,
	GET_UV = 1
};

enum {
	DGVBLANKTIMER_STAT_FREE = 21062,
	DGVBLANKTIMER_STAT_BUSY = 23106,
	DGVBLANKTIMER_STAT_EOE = 23107
};

struct _dgVblanktimerInfo { // 0x10
	/* 0x0 */ Uint16 myno;
	/* 0x2 */ Uint16 stat;
	/* 0x4 */ SYCALLBACK handle;
	/* 0x8 */ Uint32 timer;
	/* 0xc */ Uint32 velocity;
};

typedef _dgVblanktimerInfo dgVblanktimerInfo;
typedef _dgVblanktimerInfo *dgVblanktimerInfoPtr;

struct _dgVblanktimerSystemInfo { // 0x70
	/* 0x00 */ Float hz;
	/* 0x04 */ Uint16 pause_stat;
	/* 0x08 */ Sint32 system_count;
	/* 0x0c */ dgVblanktimerInfo info[6];
	/* 0x6c */ GWHWND debwin_info;
};

typedef _dgVblanktimerSystemInfo dgVblanktimerSystemInfo;
typedef _dgVblanktimerSystemInfo *dgVblanktimerSystemInfoPtr;

typedef struct { // 0x10
	/* 0x0 */ Sint8 level;
	/* 0x4 */ Sint32 ticks;
	/* 0x8 */ vibEvBuf *prev_ptr;
	/* 0xc */ vibEvBuf *next_ptr;
} vibEvBuf;

typedef struct { // 0x40c
	/* 0x000 */ vibEvBuf *start_ptr;
	/* 0x004 */ vibEvBuf *end_ptr;
	/* 0x008 */ vibEvBuf *idle_ptr;
	/* 0x00c */ vibEvBuf buf[64];
} dgVibTask;

typedef enum {
	ENUM_SHADOW_M_M = 0,
	ENUM_SHADOW_M_PLAYER_A = 1,
	ENUM_SHADOW_M_CHN1 = 2,
	ENUM_SHADOW_M_LOWERTORSO = 3,
	ENUM_SHADOW_M_ABDOMUM = 4,
	ENUM_SHADOW_M_UPPERTORSO = 5,
	ENUM_SHADOW_M_EFF1 = 6,
	ENUM_SHADOW_M_CHN2 = 7,
	ENUM_SHADOW_M_NECK = 8,
	ENUM_SHADOW_M_HEAD = 9,
	ENUM_SHADOW_M_EFF2 = 10,
	ENUM_SHADOW_M_CHN3 = 11,
	ENUM_SHADOW_M_LCOLLARBONE = 12,
	ENUM_SHADOW_M_LUPARM = 13,
	ENUM_SHADOW_M_LLOWARM = 14,
	ENUM_SHADOW_M_LHAND = 15,
	ENUM_SHADOW_M_TESA_L = 16,
	ENUM_SHADOW_M_EFF3 = 17,
	ENUM_SHADOW_M_CHN4 = 18,
	ENUM_SHADOW_M_RCOLLARBONE = 19,
	ENUM_SHADOW_M_RUPARM = 20,
	ENUM_SHADOW_M_RLOWARM = 21,
	ENUM_SHADOW_M_RHAND = 22,
	ENUM_SHADOW_M_TESA_R = 23,
	ENUM_SHADOW_M_EFF4 = 24,
	ENUM_SHADOW_M_CHN5 = 25,
	ENUM_SHADOW_M_LPELVIS = 26,
	ENUM_SHADOW_M_LTHIGH = 27,
	ENUM_SHADOW_M_LLOWLEG = 28,
	ENUM_SHADOW_M_LREARFOOT = 29,
	ENUM_SHADOW_M_LFRONTFOOT = 30,
	ENUM_SHADOW_M_EFF5 = 31,
	ENUM_SHADOW_M_CHN6 = 32,
	ENUM_SHADOW_M_RPELVIS = 33,
	ENUM_SHADOW_M_RTHIGH = 34,
	ENUM_SHADOW_M_RLOWLEG = 35,
	ENUM_SHADOW_M_RREARFOOT = 36,
	ENUM_SHADOW_M_RFRONTFOOT = 37,
	ENUM_SHADOW_M_EFF6 = 38,
	ENUM_SHADOW_M_MODEL = 39,
	ENUM_SHADOW_M_END = 40
} ShadowModelIndex;

typedef enum {
	ENUM_NEW_SHADOW_M_SHADOW_M = 0,
	ENUM_NEW_SHADOW_M_OBJ1 = 1,
	ENUM_NEW_SHADOW_M_CHN1 = 2,
	ENUM_NEW_SHADOW_M_LOWERTORSO = 3,
	ENUM_NEW_SHADOW_M_ABDOMUM = 4,
	ENUM_NEW_SHADOW_M_UPPERTORSO = 5,
	ENUM_NEW_SHADOW_M_EFF1 = 6,
	ENUM_NEW_SHADOW_M_CHN2 = 7,
	ENUM_NEW_SHADOW_M_NECK = 8,
	ENUM_NEW_SHADOW_M_HEAD = 9,
	ENUM_NEW_SHADOW_M_EFF2 = 10,
	ENUM_NEW_SHADOW_M_CHN3 = 11,
	ENUM_NEW_SHADOW_M_LCOLLARBONE = 12,
	ENUM_NEW_SHADOW_M_LUPARM = 13,
	ENUM_NEW_SHADOW_M_LLOWARM = 14,
	ENUM_NEW_SHADOW_M_LHAND = 15,
	ENUM_NEW_SHADOW_M_TESA_L = 16,
	ENUM_NEW_SHADOW_M_EFF3 = 17,
	ENUM_NEW_SHADOW_M_CHN4 = 18,
	ENUM_NEW_SHADOW_M_RCOLLARBONE = 19,
	ENUM_NEW_SHADOW_M_RUPARM = 20,
	ENUM_NEW_SHADOW_M_RLOWARM = 21,
	ENUM_NEW_SHADOW_M_RHAND = 22,
	ENUM_NEW_SHADOW_M_TESA_R = 23,
	ENUM_NEW_SHADOW_M_EFF4 = 24,
	ENUM_NEW_SHADOW_M_CHN5 = 25,
	ENUM_NEW_SHADOW_M_LPELVIS = 26,
	ENUM_NEW_SHADOW_M_LTHIGH = 27,
	ENUM_NEW_SHADOW_M_LLOWLEG = 28,
	ENUM_NEW_SHADOW_M_LREARFOOT = 29,
	ENUM_NEW_SHADOW_M_LFRONTFOOT = 30,
	ENUM_NEW_SHADOW_M_EFF5 = 31,
	ENUM_NEW_SHADOW_M_CHN6 = 32,
	ENUM_NEW_SHADOW_M_RPELVIS = 33,
	ENUM_NEW_SHADOW_M_RTHIGH = 34,
	ENUM_NEW_SHADOW_M_RLOWLEG = 35,
	ENUM_NEW_SHADOW_M_RREARFOOT = 36,
	ENUM_NEW_SHADOW_M_RFRONTFOOT = 37,
	ENUM_NEW_SHADOW_M_EFF6 = 38,
	ENUM_NEW_SHADOW_M_MODEL = 39,
	ENUM_NEW_SHADOW_END = 40
} ShadowNewModelIndex;

enum ShadowMaskMotionIndex {
	ENUM_SHADOW_MASK_MOTION_WAIT = 0,
	ENUM_SHADOW_MASK_MOTION_INPUT = 1,
	ENUM_SHADOW_MASK_MOTION_MAX = 2
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x20
	/* 0x00 */ void *parent_p;
	/* 0x04 */ void *eff_task_p;
	/* 0x08 */ float mode_change_beat;
	/* 0x0c */ dgEffSetParam eff_param;
} EnemyBeamCtrl;

typedef struct { // 0x3c
	/* 0x00 */ Sint32 qno;
	/* 0x04 */ dgMathMatrix *center_mat_p;
	/* 0x08 */ float radius;
	/* 0x0c */ float upoffset;
	/* 0x10 */ Sint32 timing_num;
	/* 0x14 */ Sint32 timing_max;
	/* 0x18 */ Sint32 count[4];
	/* 0x28 */ float start_beat;
	/* 0x2c */ float q_length;
	/* 0x30 */ float next_set_beat;
	/* 0x34 */ float tame_scale;
	/* 0x38 */ float shoot_scale;
} EneComboManTask;

typedef struct { // 0x80
	/* 0x00 */ Sint32 qno;
	/* 0x04 */ Sint32 timing_num;
	/* 0x08 */ float next_beat;
	/* 0x0c */ void *eff_task_p;
	/* 0x10 */ dgMathMatrix *center_mat_p;
	/* 0x14 */ float hit_beat;
	/* 0x18 */ float shoot_scale;
	/* 0x1c */ Sint32 padding[1];
	/* 0x20 */ dgMathMatrix mul_mat;
	/* 0x60 */ dgMathVector3 start_pos;
	/* 0x6c */ dgMathVector3 target;
} EneComboTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x60
	/* 0x00 */ dgCharCtrl *alpha_char_ctrl_p;
	/* 0x04 */ dgCharCtrl *ring_char_ctrl_p;
	/* 0x08 */ dgCharCtrl *src_char_ctrl_p;
	/* 0x0c */ float inv_mot_beat;
	/* 0x10 */ float set_beat;
	/* 0x14 */ Bool fade_in;
	/* 0x18 */ Bool warp_end_flag;
	/* 0x1c */ NJS_ARGB warp_alpha;
	/* 0x2c */ NJS_ARGB base_alpha;
	/* 0x3c */ dgCharMotionCtrl ring_mot_ctrl;
	/* 0x5c */ void *parent_p;
} EnemyWarpHandle;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x90
	/* 0x00 */ dgMathMatrix jet_world_matrix_tbl[2];
	/* 0x80 */ dgMathMatrix *jet_viewing_matrix_p_tbl[2];
	/* 0x88 */ void *jet_task_p;
	/* 0x8c */ void *parent_p;
} EnmShadowBoostHandle;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x50
	/* 0x00 */ dgMathMatrix jet_world_matrix;
	/* 0x40 */ dgMathMatrix *jet_viewing_matrix_p;
	/* 0x44 */ void *jet_task_p;
	/* 0x48 */ void *parent_p;
} EnemyBoostHandle;

enum {
	ENESET_MARK_ATTRIB_RELATIVE = 1,
	ENESET_MARK_ATTRIB_NULL_OBJ = 2,
	ENESET_MARK_ATTRIB_SET_FRAME = 4,
	ENESET_MARK_ATTRIB_PATH_SPLINE = 8,
	ENESET_MARK_ATTRIB_PATH_PLAY = 16,
	ENESET_MARK_ATTRIB_RELATIVE_MATRIX = 32,
	ENESET_MARK_ATTRIB_OVERWRITE = 64,
	ENESET_MARK_ATTRIB_MAX = 65
};

enum {
	ENESET_DIR_ID_LEFT = 0,
	ENESET_DIR_ID_UP = 1,
	ENESET_DIR_ID_RIGHT = 2,
	ENESET_DIR_ID_DOWN = 3,
	ENESET_DIR_ID_MAX = 4,
	ENESET_DIR_ID_LEADER = 4,
	ENESET_DIR_ID_NON = -1
};

enum {
	ENESET_SPL_HDL_S = 0,
	ENESET_SPL_HDL_D = 1,
	ENESET_SPL_HDL_MAX = 2
};

typedef struct { // 0x8
	/* 0x0 */ Float hdl_val[2];
} EneSetSplHdlData;

typedef struct { // 0xf0
	/* 0x00 */ Sint16 mode;
	/* 0x02 */ Sint16 prev_mode;
	/* 0x04 */ Sint16 null_obj_id;
	/* 0x06 */ Sint16 dummy;
	/* 0x08 */ Sint32 attrib;
	/* 0x0c */ Float mtn_frame;
	/* 0x10 */ dgMathVector3 spl_hdl_l;
	/* 0x1c */ dgMathVector3 pos;
	/* 0x28 */ dgMathVector3 spl_hdl_r;
	/* 0x34 */ dgMathVector3 spline_pos[3];
	/* 0x58 */ dgMathAngle3 ang;
	/* 0x64 */ dgMathAngle3 spline_ang;
	/* 0x70 */ dgMathAngle3 world_ang;
	/* 0x7c */ dgMathVector3 *src_pos;
	/* 0x80 */ dgMathAngle3 *src_ang;
	/* 0x84 */ dgMathVector3 *ref_pos;
	/* 0x88 */ dgMathAngle3 *ref_ang;
	/* 0x8c */ dgMathMatrix *ref_mat;
	/* 0x90 */ dgSpline *spl;
	/* 0x94 */ dgMathVector3 *spl_work;
	/* 0x98 */ Sint32 spl_frame;
	/* 0x9c */ Float spl_hdl_val[2];
	/* 0xb0 */ dgMathMatrix m;
} EneSetData;

enum {
	MODE_ENESET_WAIT = 0,
	MODE_ENESET_SET = 1,
	MODE_ENESET_SAVE = 2,
	MODE_ENESET_LOAD = 3,
	MODE_ENESET_SAVE_C_FILE = 4,
	MODE_ENESET_SAVE_C_FILE_LEADER = 5,
	MODE_ENESET_MAX = 6
};

enum {
	MODE_MARK_NOT_STARTED = 0,
	MODE_MARK_ATTACHED = 1,
	MODE_MARK_EDIT = 2,
	MODE_MARK_NULL_OBJ = 3,
	MODE_MARK_MAX = 4
};

typedef struct { // 0x7c
	/* 0x00 */ Sint16 data_num;
	/* 0x04 */ dgMathVector3 pos[5];
	/* 0x40 */ dgMathAngle3 ang[5];
} EneSetSaveData;

struct _EneEditorTask { // 0x33a0
	/* 0x0000 */ Sint16 set_num;
	/* 0x0002 */ Sint16 set_leader_num;
	/* 0x0004 */ Sint16 now_dir_id;
	/* 0x0006 */ Sint16 now_id;
	/* 0x0008 */ Sint8 mode;
	/* 0x000c */ int now_round_no;
	/* 0x0010 */ int now_block;
	/* 0x0014 */ int now_sub_block;
	/* 0x0018 */ dgBupHandle *bhnd;
	/* 0x001c */ Uint32 save_size;
	/* 0x0020 */ void *save_data;
	/* 0x0024 */ char fname_buf[12];
	/* 0x0030 */ GWHWND hwin;
	/* 0x0034 */ char win_buf[18][24];
	/* 0x01f0 */ EneSetData data[4][5];
	/* 0x14b0 */ EneSetData leader_data[28];
	/* 0x2ef0 */ EneSetData null_obj_data[5];
};

typedef _EneEditorTask EneEditorTask;

typedef struct { // 0x20
	/* 0x00 */ MtpHandle *mtp_h;
	/* 0x04 */ dgShapeMotion *shape_p;
	/* 0x08 */ dgCharNo charno;
	/* 0x0c */ Sint16 shape_index;
	/* 0x0e */ Sint16 mtp_iid;
	/* 0x10 */ float load_beat;
	/* 0x14 */ float set_beat;
	/* 0x18 */ float shape_frame;
	/* 0x1c */ float shape_frame_max;
} FaceTask;

enum {
	FACEPATCHG_STAT_FREE = 0,
	FACEPATCHG_STAT_BUSY = 1,
	FACEPATCHG_STAT_EOE = 2
};

enum {
	FACEPATCHG_MODE_STOP = 0,
	FACEPATCHG_MODE_PLAY = 1,
	FACEPATCHG_MODE_END = 2
};

struct _FacePatChgData { // 0x10
	/* 0x0 */ Sint32 stat;
	/* 0x4 */ dgCharNo charno;
	/* 0x8 */ dgCdbFaceDataPtr faceptr;
	/* 0xc */ Sint32 nowid;
};

typedef _FacePatChgData FacePatChgData;
typedef _FacePatChgData *FacePatChgDataPtr;

struct _FacePatChgTask { // 0x290
	/* 0x000 */ Sint32 mode;
	/* 0x004 */ Float start_beat;
	/* 0x008 */ Float beat;
	/* 0x00c */ Sint32 nowid;
	/* 0x010 */ FacePatChgData chartbl[40];
};

typedef _FacePatChgTask FacePatChgTask;
typedef _FacePatChgTask *FacePatChgTaskPtr;

typedef struct { // 0x20
	/* 0x00 */ Sint32 timing_max;
	/* 0x04 */ Sint32 timing_num;
	/* 0x08 */ Bool win_flag;
	/* 0x0c */ Bool mot_change_req;
	/* 0x10 */ Bool finish_battle_tested;
	/* 0x14 */ void *finish_mtp_h;
	/* 0x18 */ Sint32 mtp_iid;
	/* 0x1c */ Bool load_flag;
} FinishTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef DanceEnemyCtrl DanceEnemyCtrl;

typedef struct { // 0x14
	/* 0x00 */ dgMathVector3 set_pos;
	/* 0x0c */ float set_beat;
	/* 0x10 */ EnemyEffectLostWork *work_p;
} KairoboEscapeTask;

enum {
	KARAOKE_COL_Q = 0,
	KARAOKE_COL_A = 1,
	KARAOKE_COL_MAX = 2
};

typedef struct { // 0x10
	/* 0x0 */ Sint8 color_type;
	/* 0x1 */ Sint8 qno;
	/* 0x2 */ Sint8 pid;
	/* 0x4 */ Sint16 iid;
	/* 0x6 */ Sint16 start_frame;
	/* 0x8 */ Sint16 nb_frame;
	/* 0xc */ char **strtbl;
} KaraokeDataSub;

typedef struct { // 0x4
	/* 0x0 */ KaraokeDataSub *qa_data;
} KaraokeData;

typedef struct { // 0x8
	/* 0x0 */ Sint32 num;
	/* 0x4 */ KaraokeData *data;
} KaraokeBlockData;

typedef struct { // 0x14
	/* 0x00 */ int step_level;
	/* 0x04 */ dgShSpy *sh_spy;
	/* 0x08 */ Sint32 data_num;
	/* 0x0c */ KaraokeData *data;
	/* 0x10 */ KaraokeDataSub *qa_data;
} KaraokeTask;

typedef struct { // 0x14
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 face_chg_play_flag;
	/* 0x04 */ Sint32 start_frame;
	/* 0x08 */ Sint32 end_frame;
	/* 0x0c */ KaraokeDataSub *data;
	/* 0x10 */ dgFontKaraoke *karaoke;
} KaraokeSubTask;

typedef struct { // 0x3c
	/* 0x00 */ Uint8 *pic_data_p;
	/* 0x04 */ Uint8 *pic_data_port_p_tbl[4];
	/* 0x14 */ Bool refresh_tbl[5];
	/* 0x28 */ Bool allow_disp_tbl[5];
} LcdTask;

typedef struct { // 0x8
	/* 0x0 */ Sint32 type;
	/* 0x4 */ Float *data;
} LightParam;

typedef struct { // 0xc
	/* 0x0 */ Sint32 frame;
	/* 0x4 */ Sint32 flag;
	/* 0x8 */ LightParam *param;
} LightSeq;

typedef struct { // 0x10
	/* 0x0 */ Sint32 mov_num;
	/* 0x4 */ LightSeq *mov_data;
	/* 0x8 */ Sint32 btl_num;
	/* 0xc */ LightSeq *btl_data;
} LightData;

typedef struct { // 0x8
	/* 0x0 */ Sint32 sub_block_num;
	/* 0x4 */ LightData *data;
} LightDataEx;

typedef struct { // 0x20
	/* 0x00 */ Float r;
	/* 0x04 */ Float g;
	/* 0x08 */ Float b;
	/* 0x0c */ Float x;
	/* 0x10 */ Float y;
	/* 0x14 */ Float z;
	/* 0x18 */ Float ambient;
	/* 0x1c */ Float intensity;
} LightPoison;

typedef struct { // 0x8
	/* 0x0 */ Sint32 sub_block_num;
	/* 0x4 */ LightPoison **data;
} LightPoisonData;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x44
	/* 0x00 */ Float col0[3];
	/* 0x0c */ dgMathVector3 vec0;
	/* 0x18 */ Float col1[3];
	/* 0x24 */ dgMathVector3 vec1;
	/* 0x30 */ Float amb[3];
	/* 0x3c */ Float ambient;
	/* 0x40 */ Float intensity;
} LightBuf;

typedef struct { // 0xb0
	/* 0x00 */ Sint8 interp_flag;
	/* 0x02 */ Sint16 num;
	/* 0x04 */ Sint32 start_beat;
	/* 0x08 */ Sint32 start_beat_req;
	/* 0x0c */ LightBuf current;
	/* 0x50 */ LightBuf speed;
	/* 0x94 */ Float prev_frame;
	/* 0x98 */ Sint32 sub_block_no_req;
	/* 0x9c */ Sint32 max_sub_block_num;
	/* 0xa0 */ LightPoisonData *poison_data;
	/* 0xa4 */ LightData *data;
	/* 0xa8 */ LightSeq *current_data;
	/* 0xac */ dgShSpy *sh_spy;
} LightCtrlTask;

typedef struct { // 0xc
	/* 0x0 */ Sint8 mode;
	/* 0x1 */ Sint8 complete;
	/* 0x2 */ Sint8 block_no;
	/* 0x4 */ char *filename;
	/* 0x8 */ GameLoad *game_load;
} LprTask;

typedef struct { // 0x24
	/* 0x00 */ Sint16 movie_ino;
	/* 0x04 */ char *sh_fname;
	/* 0x08 */ char *cap_fname[6];
	/* 0x20 */ Sint16 audio_ino;
} MakumaFileData;

typedef struct { // 0x20
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 sh_set_flag;
	/* 0x02 */ Sint8 cap_set_flag;
	/* 0x04 */ void *prev_play_task;
	/* 0x08 */ MakumaFileData *data;
	/* 0x0c */ Sint32 *count;
	/* 0x10 */ void *sh_ptr;
	/* 0x14 */ void *cap_ptr;
	/* 0x18 */ Uint32 sh_serial_id;
	/* 0x1c */ Uint32 cap_serial_id;
} MakumaSubTask;

typedef struct { // 0x20
	/* 0x00 */ Sint8 mode;
	/* 0x04 */ MakumaType type;
	/* 0x08 */ MakumaFileData **file_tbl;
	/* 0x0c */ Sint32 count;
	/* 0x10 */ MakumaSubTask *current_play_task;
	/* 0x14 */ void *mlt_load_task;
	/* 0x18 */ void *capstm_load_task;
	/* 0x1c */ dgCaptionStreamType stm_type;
} MakumaTask;

typedef struct { // 0x74
	/* 0x00 */ Float game_beat;
	/* 0x04 */ Float game_frame;
	/* 0x08 */ int break_ready_flg;
	/* 0x0c */ int prepre_seq_id;
	/* 0x10 */ int pre_seq_id;
	/* 0x14 */ int seq_id;
	/* 0x18 */ int break_beat;
	/* 0x1c */ int prepre_start_beat;
	/* 0x20 */ int pre_start_beat;
	/* 0x24 */ int start_beat;
	/* 0x28 */ int prepre_beat_num;
	/* 0x2c */ int pre_beat_num;
	/* 0x30 */ int beat_num;
	/* 0x34 */ int prepre_seq_type;
	/* 0x38 */ int pre_seq_type;
	/* 0x3c */ int seq_type;
	/* 0x40 */ int sub_block_no;
	/* 0x44 */ int pre_btl_cnt;
	/* 0x48 */ int btl_cnt;
	/* 0x4c */ int mov_cnt;
	/* 0x50 */ int connect_mov_cnt;
	/* 0x54 */ int pre_connect_mov_cnt;
	/* 0x58 */ int q_type;
	/* 0x5c */ int qno;
	/* 0x60 */ int step_no;
	/* 0x64 */ int step_level;
	/* 0x68 */ Sint16 move_start_beat;
	/* 0x6a */ Sint16 btl_start_beat;
	/* 0x6c */ Sint16 qa_start_beat;
	/* 0x70 */ Bool edge_flg;
} MapobjGameData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x20
	/* 0x00 */ dgCharMotionData *data_p;
	/* 0x04 */ Sint32 abs_flag;
	/* 0x08 */ Sint32 delay_counter;
	/* 0x0c */ Sint32 afs_iid;
	/* 0x10 */ char *filename_p;
	/* 0x14 */ char *caption_p;
	/* 0x18 */ void (*core_func_p)(/* parameters unknown */);
	/* 0x1c */ Uint32 serial_id;
} MtpHandle;

typedef struct { // 0x2c
	/* 0x00 */ Sint8 ch;
	/* 0x01 */ Sint8 volume;
	/* 0x04 */ dgCharNo charno;
	/* 0x08 */ Float solo_start_beat;
	/* 0x0c */ Float solo_end_beat;
	/* 0x10 */ Float dist2;
	/* 0x14 */ dgMathVector2 spos;
	/* 0x1c */ dgMathVector3 vpos;
	/* 0x28 */ MusicManMidiCh *next;
} MusicManMidiCh;

typedef struct { // 0x2e0
	/* 0x000 */ Sint8 mode;
	/* 0x001 */ Sint8 link_num;
	/* 0x004 */ MusicManMidiCh *top;
	/* 0x008 */ MusicManMidiCh midi_ch[16];
	/* 0x2c8 */ Sint32 start_beat;
	/* 0x2cc */ Sint32 end_beat;
	/* 0x2d0 */ dgShSpy *sh_spy;
	/* 0x2d4 */ MusicManData *data;
	/* 0x2d8 */ MusicManDataSub *current_data_sub;
	/* 0x2dc */ GWHWND hwnd;
} MusicManTask;

typedef struct { // 0x10
	/* 0x0 */ MusicManTask *parent_task;
	/* 0x4 */ int qno;
	/* 0x8 */ int timing_num;
	/* 0xc */ int current_timing;
} MusicManSubTask;

typedef struct { // 0x1c
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ int count;
	/* 0x0c */ int tex_no;
	/* 0x10 */ Float prev_scale;
	/* 0x14 */ Float dlt_scale;
	/* 0x18 */ Float scale;
} NlTask;

typedef enum {
	NKB_CSPR_STR = 0,
	NKB_CSPR_BACK = 1,
	NKB_CSPR_MAX = 2
} NkbCsprType;

typedef struct { // 0x8
	/* 0x0 */ Sint32 *tbl;
	/* 0x4 */ int num;
} NkbCellData;

typedef struct { // 0x2c
	/* 0x00 */ Sint8 mode[2];
	/* 0x04 */ NJS_CELL_SPRITE *cspr[2];
	/* 0x0c */ dgMathVector2 size[2];
	/* 0x1c */ Float frame[2];
	/* 0x24 */ Float max_frame[2];
} NkbTask;

enum PartyAppearMode {
	PARTY_APPEAR_NONE = 0,
	PARTY_APPEAR_PREP = 1,
	PARTY_APPEAR_NORMAL = 2,
	PARTY_APPEAR_HIDE = 3,
	PARTY_APPEAR_HIDE_CAMERA = 4,
	PARTY_APPEAR_END = 5
};

enum PartyInstrumentMotionIndex {
	PARTY_INSTRUMENT_MOTION_A = 0,
	PARTY_INSTRUMENT_MOTION_B = 1,
	PARTY_INSTRUMENT_MOTION_MAX = 2
};

enum PartyMotionCopyMode {
	PARTY_MOTION_IGNORE_COPY = -1,
	PARTY_MOTION_NONE_COPY = 0,
	PARTY_MOTION_COPY = 1
};

typedef enum {
	FORCE_LOOP_MODE = 0,
	FORCE_A_MODE = 1,
	FORCE_B_MODE = 2,
	FORCE_UHYAHOO_REQ_MODE = 3,
	FORCE_UHYAHOO_MODE = 4,
	FORCE_BAD_LOOP = 5,
	FORCE_MODE_END = 6
} PartyForceMotionMode;

// warning: multiple differing types with the same name (descriptor not equal)
enum PartyExistenceStauts {
	PARTY_EXISTENCE_NOT_EXIST = 0,
	PARTY_EXISTENCE_EXIST = 1,
	PARTY_EXISTENCE_FREEZE = 2,
	PARTY_EXISTENCE_END = 3
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef Sint8 PartyExistenceStauts;

enum ForceFlagBitAssign {
	_BIT_INST_MOTION_FLAG_ = 6,
	_BIT_FORCE_MOTION_FLAG_ = 7,
	_BIT_FORCE_FLAG_MAX_ = 8
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x20
	/* 0x00 */ PartyExistenceStauts existence;
	/* 0x01 */ Sint8 disp;
	/* 0x02 */ Sint8 appear_mode;
	/* 0x03 */ Sint8 extra_uhyahoo;
	/* 0x04 */ Sint8 force_motion_flag;
	/* 0x05 */ Sint8 copy_mode;
	/* 0x06 */ Sint8 index;
	/* 0x07 */ Sint8 array_index;
	/* 0x08 */ Sint8 formation_index;
	/* 0x09 */ Sint8 add_counter;
	/* 0x0a */ Sint16 charno;
	/* 0x0c */ void *task_p;
	/* 0x10 */ PartyControl *next_p;
	/* 0x14 */ dgCharCtrl *char_ctrl_p;
	/* 0x18 */ dgCharMotionCtrl *mot_ctrl_p;
	/* 0x1c */ void* (*init_func_p)(/* parameters unknown */);
} PartyControl;

typedef struct { // 0x64
	/* 0x00 */ Sint8 motion_change_request;
	/* 0x01 */ Sint8 only_new_char_flag;
	/* 0x02 */ Sint8 player_copy;
	/* 0x03 */ Sint8 wipe_flag;
	/* 0x04 */ Sint8 member_num;
	/* 0x05 */ Sint8 disp_max;
	/* 0x06 */ Sint8 set_disp;
	/* 0x07 */ Sint8 disp_num;
	/* 0x08 */ Sint8 add_member;
	/* 0x09 */ Sint8 cur_pl_side;
	/* 0x0a */ Sint8 side_test;
	/* 0x0b */ Sint8 hide_number;
	/* 0x0c */ Sint8 copy_number;
	/* 0x0d */ Sint8 motion_index_add_flag;
	/* 0x0e */ Sint8 appear_counter;
	/* 0x0f */ Sint8 constant_sync;
	/* 0x10 */ Sint32 motion_index;
	/* 0x14 */ dgCharMotionData *mot_p;
	/* 0x18 */ PartyFormationMotion *formation_p[3];
	/* 0x1c */ Sint32 (*pos_callback_func_p)(/* parameters unknown */);
	/* 0x20 */ dgCharShadowCallbackFunc *shadow_func_p;
	/* 0x24 */ dgMathMatrix *mat_tbl_p[3];
	/* 0x30 */ PartyForceMotionMode force_mode;
	/* 0x34 */ PartyMotionFunc *motion_callback_p;
	/* 0x38 */ float player_frame;
	/* 0x3c */ dgShSeqType prev_seq;
	/* 0x40 */ Bool add_new_member;
	/* 0x44 */ Bool set_index_request;
	/* 0x48 */ Bool set_position_request;
	/* 0x4c */ Bool motion_load_flag;
	/* 0x50 */ Bool force_calc_formation;
	/* 0x54 */ Sint16 group_num[3];
	/* 0x5a */ Sint16 limit_num[3];
	/* 0x60 */ GWHWND wnd_h;
} PartyManTask;

typedef struct { // 0x28
	/* 0x00 */ PartyControl *control_p_top[3];
	/* 0x0c */ PartyControl *restoration_ctrl_p;
	/* 0x10 */ Sint32 face_type;
	/* 0x14 */ Sint16 boss_mode;
	/* 0x16 */ Sint16 rest_flag;
	/* 0x18 */ Sint32 formation_index_force;
	/* 0x1c */ PartyInstMotionData *inst_data_p;
	/* 0x20 */ MtpHandle *inst_mtp_h;
	/* 0x24 */ dgCharMotionData *inst_mot_p;
} PartyMasterTask;

typedef struct { // 0xc
	/* 0x0 */ float effect_beat;
	/* 0x4 */ Sint32 effect_type;
	/* 0x8 */ void *parent_p;
} PartyEffectTask;

typedef struct { // 0x10
	/* 0x0 */ PartyCollectData *result_p;
	/* 0x4 */ Bool add_member_flag;
	/* 0x8 */ Bool keyman_flag;
	/* 0xc */ Bool all_collect_flag;
} CollectTask;

typedef struct { // 0x30
	/* 0x00 */ PartyControl *party_ctrl_p;
	/* 0x04 */ dgCharCtrl *char_ctrl_p;
	/* 0x08 */ dgCharCtrl *obj_ctrl_p;
	/* 0x0c */ dgCharMotionCtrl mot_ctrl;
	/* 0x2c */ Bool float_flag;
} PartyTask;

typedef enum {
	PECL_NAME = 0,
	PECL_PAGE = 1,
	PECL_DISP_MODE = 2,
	PECL_MAX_MEMBER = 3,
	PECL_EDIT_INDEX = 4,
	PECL_POS_X = 5,
	PECL_POS_Y = 6,
	PECL_POS_Z = 7,
	PECL_ANG_Y = 8,
	PECL_OFFSET_X = 9,
	PECL_OFFSET_Z = 10,
	PECL_SCALE_X = 11,
	PECL_SCALE_Z = 12,
	PECL_END = 13
} PartyEditCursorLine;

typedef enum {
	PESL_SEQ_STEP = 0,
	PESL_START_SEQ = 1,
	PESL_STEP_NO = 2,
	PESL_NAME = 3,
	PESL_CHANGE_FRAME = 4,
	PESL_END = 5
} PartySequenceCursorLine;

typedef enum {
	PE_DISP_INVISIBLE = 0,
	PE_DISP_WIRE = 1,
	PE_DISP_MIX = 2,
	PE_DISP_FULL = 3,
	PE_DISP_END = 4
} PEDispMode;

typedef struct { // 0x14c
	/* 0x000 */ PartyFormationSet data;
	/* 0x018 */ GWHWND wnd_h;
	/* 0x01c */ GWHWND text_h;
	/* 0x020 */ PartyEditTask *prev_p;
	/* 0x024 */ PartyEditTask *next_p;
	/* 0x028 */ PartyEditCursorLine cur_y;
	/* 0x02c */ Sint32 edit_page;
	/* 0x030 */ Sint32 edit_member_index;
	/* 0x034 */ float scale_x;
	/* 0x038 */ float scale_z;
	/* 0x03c */ float offset_x;
	/* 0x040 */ float offset_z;
	/* 0x044 */ dgMathVector3 work_pos[20];
	/* 0x134 */ Bool set_callback;
	/* 0x138 */ char name[13];
	/* 0x148 */ Sint32 lock_count;
} PartyEditTask;

typedef struct { // 0x14
	/* 0x00 */ dgShSeqType change_seq;
	/* 0x04 */ Sint32 change_frame;
	/* 0x08 */ PartyEditTask *task_p;
	/* 0x0c */ PartyEditSequence *prev_p;
	/* 0x10 */ PartyEditSequence *next_p;
} PartyEditSequence;

typedef struct { // 0x24
	/* 0x00 */ PartyEditSequence *seq_top_p;
	/* 0x04 */ Sint32 seq_num;
	/* 0x08 */ Sint32 element_num;
	/* 0x0c */ Sint32 dummy_num;
	/* 0x10 */ GWHWND wnd_h;
	/* 0x14 */ PartyEditSequence *edit_seq_p;
	/* 0x18 */ PartySequenceCursorLine line;
	/* 0x1c */ Sint32 edit_seq_step;
	/* 0x20 */ Sint32 edit_step;
} PartyEditSeqTask;

typedef struct { // 0x28
	/* 0x00 */ PartyEditTask *edit_task_p;
	/* 0x04 */ PartyEditRoundTask *round_task_p;
	/* 0x08 */ PartyEditTask *cur_edit_task_p;
	/* 0x0c */ PartyEditTask *last_edit_task_p;
	/* 0x10 */ PEDispMode disp_mode;
	/* 0x14 */ Sint32 edit_num;
	/* 0x18 */ GWHWND man_wnd_h;
	/* 0x1c */ GWHWND text_h;
	/* 0x20 */ Sint32 temp_counter;
	/* 0x24 */ PartyEditSeqTask *seq_p;
} PartyEditManager;

typedef struct { // 0xc
	/* 0x0 */ dgCdbHandle cdb_h;
	/* 0x4 */ PartyEditManager *parent_p;
	/* 0x8 */ CharCommonFormationData2 *seq_data_p;
} PartyEditRoundTask;

typedef struct { // 0x1c
	/* 0x00 */ dgBupHandle *bup_h;
	/* 0x04 */ Sint32 save_size;
	/* 0x08 */ void *buf_p;
	/* 0x0c */ char name[13];
} PartyEditSaveTask;

typedef struct { // 0x8
	/* 0x0 */ PartyFormationMotion *form_mot_p[3];
	/* 0x4 */ PartyEditTask *edit_task_p;
} PES_TempList;

typedef Sint8 PathType;
typedef Sint16 PathIno;
typedef Sint32 PathPlayGroupNo;
typedef Sint32 PathFileGroupNo;

typedef enum {
	PATH_FLAG_REL_IGNORE_ROT = 1,
	PATH_FLAG_REL_IGNORE_TR_X = 2,
	PATH_FLAG_REL_IGNORE_TR_Y = 4,
	PATH_FLAG_REL_IGNORE_TR_Z = 8
} PathFlag;

typedef enum {
	PATH_FILE_GROUP_TYPE_MOV = 0,
	PATH_FILE_GROUP_TYPE_BTL = 1,
	PATH_FILE_GROUP_TYPE_MAX = 2
} PathFileGroupType;

typedef struct { // 0xc
	/* 0x0 */ Sint8 loop_flag;
	/* 0x4 */ PathPlayGroupNo tbl_num;
	/* 0x8 */ PathIno *ino_tbl;
} PathPlayGroup;

typedef struct { // 0x8
	/* 0x0 */ Sint32 start_beat;
	/* 0x4 */ PathPlayGroup *group;
} PathPlayList;

typedef struct { // 0xc
	/* 0x0 */ char *name;
	/* 0x4 */ Sint32 num;
	/* 0x8 */ PathPlayList **data;
} PathFileGroup;

typedef struct { // 0x8
	/* 0x0 */ Sint32 command;
	/* 0x4 */ PathFileGroup *group;
} PathSchedule;

typedef struct { // 0xc
	/* 0x0 */ Sint32 num;
	/* 0x4 */ PathSchedule **data;
	/* 0x8 */ PathType path_type_max;
} PathData;

typedef enum {
	MOTION_TYPE_MTN = 0,
	MOTION_TYPE_CAM = 1,
	MOTION_TYPE_MAX = 2
} MotionType;

typedef enum {
	CMD_START_SUBBLOCK = 0,
	CMD_START_BTLBLOCK = 1,
	CMD_MAX = 2
} PathCmd;

typedef struct { // 0x10
	/* 0x0 */ Sint8 flag;
	/* 0x4 */ PathCmd cmd;
	/* 0x8 */ Sint32 id;
	/* 0xc */ Sint32 start_beat;
} EntryBuf;

typedef struct { // 0x104
	/* 0x000 */ Sint8 req_no;
	/* 0x001 */ Sint8 exe_no;
	/* 0x004 */ EntryBuf buf[16];
} EntryCtrl;

typedef struct { // 0xc0
	/* 0x00 */ Sint8 blend_disable_flag;
	/* 0x04 */ MotionType motion_type;
	/* 0x08 */ PathIno ino;
	/* 0x0c */ Float limit_speed2;
	/* 0x10 */ mtnMotion *mtn_motion;
	/* 0x14 */ NJS_MOTION *cam_motion;
	/* 0x18 */ mtnPose *pose;
	/* 0x1c */ mtnPose *default_pose;
	/* 0x20 */ dgMathVector3 rel_speed_vec;
	/* 0x2c */ dgMathVector3 abs_speed_vec;
	/* 0x40 */ dgMathMatrix rel_mat;
	/* 0x80 */ dgMathMatrix abs_mat;
} MotionPlayData;

typedef struct { // 0x8
	/* 0x0 */ Sint8 motion_type;
	/* 0x1 */ Sint8 absolute_flag;
	/* 0x2 */ Sint8 count;
	/* 0x4 */ void *ptr;
} MotionDataBase;

typedef struct { // 0x1e0
	/* 0x000 */ Sint8 hwnd_disp_flag;
	/* 0x001 */ Sint8 pid;
	/* 0x002 */ Sint8 qa_no;
	/* 0x003 */ Sint8 step_no;
	/* 0x004 */ Sint8 loop_flag;
	/* 0x006 */ Sint16 subblock_id;
	/* 0x008 */ Sint32 subblock_start_beat;
	/* 0x00c */ PathType base_type;
	/* 0x010 */ PathFlag base_flag;
	/* 0x014 */ Sint32 motion_database_num;
	/* 0x018 */ MotionDataBase *motion_database;
	/* 0x01c */ MotionPlayData *play_motion;
	/* 0x020 */ PathPlayList *current_play_list;
	/* 0x024 */ Sint32 playlist_start_beat;
	/* 0x028 */ Sint32 start_beat;
	/* 0x02c */ PathFileGroup *btl_group_ptr;
	/* 0x030 */ EntryCtrl entry_ctrl;
	/* 0x134 */ GameLoad *game_load_entry_ptr;
	/* 0x138 */ dgShSpy *sh_spy;
	/* 0x140 */ dgMathMatrix rel2abs_mat;
	/* 0x180 */ dgMathMatrix abs2rel_mat;
	/* 0x1c0 */ PathData *data;
	/* 0x1c4 */ GWHWND hwnd;
	/* 0x1c8 */ int gw_disp_type;
	/* 0x1cc */ int gw_disp_start;
	/* 0x1d0 */ Sint32 current_mframe;
	/* 0x1d4 */ Float current_mframe_f;
} PathHnd;

typedef struct { // 0x20
	/* 0x00 */ Sint8 mode;
	/* 0x04 */ PathHnd *hnd;
	/* 0x08 */ PathPlayGroup *ptr;
	/* 0x0c */ GameLoad *game_load_entry_ptr;
	/* 0x10 */ int *success_signal;
	/* 0x14 */ int idx;
	/* 0x18 */ MotionDataBase *current_database;
	/* 0x1c */ Uint32 serial_id;
} ReadPlayGroupTask;

typedef struct { // 0x8
	/* 0x0 */ PathFileGroup *ptr;
	/* 0x4 */ int count;
} ReadFileGroupTask;

typedef struct { // 0x4
	/* 0x0 */ PathHnd* (*get_hnd_func)(/* parameters unknown */);
} PathCtrlDebugTask;

enum {
	PAUSE_CSPR_CONTINUE = 0,
	PAUSE_CSPR_RESTART = 1,
	PAUSE_CSPR_GAMEEND = 2,
	PAUSE_CSPR_PAUSE = 3,
	PAUSE_CSPR_SELECT_MAX = 4,
	PAUSE_CSPR_COMMON = 4,
	PAUSE_CSPR_OTHER = 5,
	PAUSE_CSPR_DISP_MAX = 6
};

typedef struct { // 0x118
	/* 0x000 */ Sint8 disp_disable_flag;
	/* 0x001 */ Sint8 mode;
	/* 0x002 */ Sint8 prev_pause_flag;
	/* 0x004 */ dgMathAngle1 ang;
	/* 0x008 */ dgMathAngle1 spd_ang;
	/* 0x00c */ NJS_CELL_SPRITE_VAL cval;
	/* 0x080 */ NJS_CELL_SPRITE_VAL win_cval;
	/* 0x0f4 */ dgTexInfo *tex_info;
	/* 0x0f8 */ Sint32 repeat_disable_frame;
	/* 0x0fc */ dgCaption *caption[4];
	/* 0x10c */ void *tex_ptr;
	/* 0x110 */ Uint32 serial_id;
	/* 0x114 */ void *child_task;
} PauseTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x1c
	/* 0x00 */ dgMathVector3 foot_pos;
	/* 0x0c */ dgCharCtrl *src_char_ctrl_p;
	/* 0x10 */ float diff_height;
	/* 0x14 */ void *eff_p;
	/* 0x18 */ float start_beat;
} PeopleEffectRescueHandle;

// warning: multiple differing types with the same name (descriptor not equal)
typedef TargetData TargetData;

typedef enum {
	PBCC_NONE = 0,
	PBCC_SELF_MODULE = 1,
	PBCC_ANOTHER_MODULE = 2,
	PBCC_MAX = 3
} PlayerBaseChangeCount;

typedef enum {
	PPBF_NONE = 0,
	PPBF_PUSH = 1,
	PPBF_POP = 2,
	PPBF_END = 3
} PlayerPushBaseFlag;

typedef struct { // 0x20
	/* 0x00 */ Sint16 qno;
	/* 0x02 */ Sint8 timing_num;
	/* 0x03 */ Sint8 max_timing;
	/* 0x04 */ Sint8 tame_timing;
	/* 0x05 */ Sint8 tame_count;
	/* 0x06 */ dgInputKey prev_dir_key;
	/* 0x07 */ Sint8 switch_sle_flag;
	/* 0x08 */ ShootActionMode shoot_action_mode;
	/* 0x0c */ Sint32 motion_index;
	/* 0x10 */ float start_beat;
	/* 0x14 */ float switch_sle_beat;
	/* 0x18 */ float tome_beat;
	/* 0x1c */ void *eff_p;
} PlayerQData;

typedef struct { // 0x150
	/* 0x000 */ Sint8 base_change_flag;
	/* 0x001 */ Sint8 push_base_flag;
	/* 0x002 */ Sint8 gun_mode;
	/* 0x003 */ Sint8 player_type;
	/* 0x004 */ Sint8 player_side_flag;
	/* 0x005 */ Sint8 player_disp_flag;
	/* 0x006 */ Sint8 loop_flag;
	/* 0x007 */ Sint8 masked_flag;
	/* 0x008 */ dgCharCtrl *ctrl_p;
	/* 0x00c */ PlayerObjCallbackFunc *obj_callback_p;
	/* 0x010 */ dgMathVector3 pos;
	/* 0x01c */ float move_base_beat;
	/* 0x020 */ dgMathVector3 center_pos;
	/* 0x02c */ float center_height;
	/* 0x030 */ dgMathAngle3 ang;
	/* 0x03c */ Sint32 motion_mask;
	/* 0x040 */ Sint16 motion_load_flag;
	/* 0x042 */ Sint16 interest_player_flag;
	/* 0x044 */ Bool hide_flag;
	/* 0x048 */ Bool side_hide;
	/* 0x04c */ Bool level_force;
	/* 0x050 */ dgMathVector3 *right_gun_pos_p;
	/* 0x054 */ dgMathVector3 *left_gun_pos_p;
	/* 0x058 */ PlayerNode *node_tbl_p;
	/* 0x05c */ dgCharMotionData *push_mot_data_p;
	/* 0x060 */ dgMathMatrix world_mat;
	/* 0x0a0 */ dgMathMatrix center_mat;
	/* 0x0e0 */ PlayerQData q_data;
	/* 0x100 */ dgCharMotionCtrl mot_ctrl;
	/* 0x120 */ Float *ulala_root_trans;
	/* 0x124 */ float player_frame;
	/* 0x128 */ float motion_start_beat;
	/* 0x12c */ PlayerBasePos *base_pos_data_p;
	/* 0x130 */ dgCdbHandle mic_cdb_h;
	/* 0x134 */ Bool (*pos_callback_func_p)(/* parameters unknown */);
	/* 0x138 */ Bool (*matrix_callback_func_p)(/* parameters unknown */);
	/* 0x13c */ Sint16 item_node_tbl[4];
	/* 0x144 */ Sint32 item_num;
	/* 0x148 */ GWHWND wnd_h;
} PlayerTask;

typedef struct { // 0x8
	/* 0x0 */ float set_beat;
	/* 0x4 */ void *eff_p;
} PlayerAuraTask;

typedef struct { // 0x24
	/* 0x00 */ dgMathVector3 target;
	/* 0x0c */ Sint32 qno;
	/* 0x10 */ Sint32 timing;
	/* 0x14 */ float start_beat;
	/* 0x18 */ float hit_beat;
	/* 0x1c */ Sint32 eff_type;
	/* 0x20 */ Sint32 dir;
} ComboEffTask;

typedef struct { // 0x10
	/* 0x0 */ float start_beat;
	/* 0x4 */ void *eff_task_p;
	/* 0x8 */ Sint32 eff_type;
	/* 0xc */ Bool relative;
} PlayerHitTask;

typedef struct { // 0x8
	/* 0x0 */ Sint32 beat_multi_2;
	/* 0x4 */ dgSoundData se_type;
} PlayerSeData;

typedef struct { // 0x48
	/* 0x00 */ PlayerSeData se_list[8];
	/* 0x40 */ Sint32 top_index;
	/* 0x44 */ Sint32 last_index;
} PlayerSeTask;

typedef struct { // 0x4
	/* 0x0 */ Sint32 timer;
} DebugTelopTask;

typedef struct { // 0x8
	/* 0x0 */ Sint32 req_cdb_num;
	/* 0x4 */ Sint32 loaded_cdb_num;
} PlayerModelTask;

typedef struct { // 0x10
	/* 0x0 */ Uint32 serial_id;
	/* 0x4 */ dgCdbHandle cdb_h;
	/* 0x8 */ dgCharNo charno;
	/* 0xc */ PlayerModelTask *parent_p;
} PlayerModelCdaTask;

enum MemberModelIndexNoise {
	MEMBER_ENUM_NOISE_M_M = 0,
	MEMBER_ENUM_NOISE_M_PLAYER_A = 1,
	MEMBER_ENUM_NOISE_M_CHN1 = 2,
	MEMBER_ENUM_NOISE_M_LOWERTORSO = 3,
	MEMBER_ENUM_NOISE_M_ABDOMUM = 4,
	MEMBER_ENUM_NOISE_M_UPPERTORSO = 5,
	MEMBER_ENUM_NOISE_M_EFF1 = 6,
	MEMBER_ENUM_NOISE_M_CHN2 = 7,
	MEMBER_ENUM_NOISE_M_NECK = 8,
	MEMBER_ENUM_NOISE_M_HEAD = 9,
	MEMBER_ENUM_NOISE_M_EFF2 = 10,
	MEMBER_ENUM_NOISE_M_FACE = 11,
	MEMBER_ENUM_NOISE_M_EYEBALL_R = 12,
	MEMBER_ENUM_NOISE_M_EYEBALL_L = 13,
	MEMBER_ENUM_NOISE_M_MABU_R = 14,
	MEMBER_ENUM_NOISE_M_MABU_L = 15,
	MEMBER_ENUM_NOISE_M_CHN3 = 16,
	MEMBER_ENUM_NOISE_M_LCOLLARBONE = 17,
	MEMBER_ENUM_NOISE_M_LUPARM = 18,
	MEMBER_ENUM_NOISE_M_LLOWARM = 19,
	MEMBER_ENUM_NOISE_M_LHAND = 20,
	MEMBER_ENUM_NOISE_M_TESA_L = 21,
	MEMBER_ENUM_NOISE_M_EFF3 = 22,
	MEMBER_ENUM_NOISE_M_CHN4 = 23,
	MEMBER_ENUM_NOISE_M_RCOLLARBONE = 24,
	MEMBER_ENUM_NOISE_M_RUPARM = 25,
	MEMBER_ENUM_NOISE_M_RLOWARM = 26,
	MEMBER_ENUM_NOISE_M_RHAND = 27,
	MEMBER_ENUM_NOISE_M_TESA_R = 28,
	MEMBER_ENUM_NOISE_M_EFF4 = 29,
	MEMBER_ENUM_NOISE_M_BOOST_R = 30,
	MEMBER_ENUM_NOISE_M_BOOST_L = 31,
	MEMBER_ENUM_NOISE_M_CHN5 = 32,
	MEMBER_ENUM_NOISE_M_LPELVIS = 33,
	MEMBER_ENUM_NOISE_M_LTHIGH = 34,
	MEMBER_ENUM_NOISE_M_LLOWLEG = 35,
	MEMBER_ENUM_NOISE_M_LREARFOOT = 36,
	MEMBER_ENUM_NOISE_M_LFRONTFOOT = 37,
	MEMBER_ENUM_NOISE_M_EFF5 = 38,
	MEMBER_ENUM_NOISE_M_CHN6 = 39,
	MEMBER_ENUM_NOISE_M_RPELVIS = 40,
	MEMBER_ENUM_NOISE_M_RTHIGH = 41,
	MEMBER_ENUM_NOISE_M_RLOWLEG = 42,
	MEMBER_ENUM_NOISE_M_RREARFOOT = 43,
	MEMBER_ENUM_NOISE_M_RFRONTFOOT = 44,
	MEMBER_ENUM_NOISE_M_EFF6 = 45,
	MEMBER_ENUM_NOISE_M_MODEL = 46,
	MEMBER_ENUM_NOISE_M_END = 47
};

enum MemberModelIndexTexas {
	MEMBER_ENUM_PINE_M_M = 0,
	MEMBER_ENUM_PINE_M_PLAYER_A = 1,
	MEMBER_ENUM_PINE_M_CHN1 = 2,
	MEMBER_ENUM_PINE_M_LOWERTORSO = 3,
	MEMBER_ENUM_PINE_M_ABDOMUM = 4,
	MEMBER_ENUM_PINE_M_UPPERTORSO = 5,
	MEMBER_ENUM_PINE_M_EFF1 = 6,
	MEMBER_ENUM_PINE_M_CHN2 = 7,
	MEMBER_ENUM_PINE_M_NECK = 8,
	MEMBER_ENUM_PINE_M_HEAD = 9,
	MEMBER_ENUM_PINE_M_EFF2 = 10,
	MEMBER_ENUM_PINE_M_FACE = 11,
	MEMBER_ENUM_PINE_M_EYEBALL_R = 12,
	MEMBER_ENUM_PINE_M_EYEBALL_L = 13,
	MEMBER_ENUM_PINE_M_MABU_R = 14,
	MEMBER_ENUM_PINE_M_MABU_L = 15,
	MEMBER_ENUM_PINE_M_CHN3 = 16,
	MEMBER_ENUM_PINE_M_LCOLLARBONE = 17,
	MEMBER_ENUM_PINE_M_LUPARM = 18,
	MEMBER_ENUM_PINE_M_LLOWARM = 19,
	MEMBER_ENUM_PINE_M_LHAND = 20,
	MEMBER_ENUM_PINE_M_TESA_L = 21,
	MEMBER_ENUM_PINE_M_EFF3 = 22,
	MEMBER_ENUM_PINE_M_CHN4 = 23,
	MEMBER_ENUM_PINE_M_RCOLLARBONE = 24,
	MEMBER_ENUM_PINE_M_RUPARM = 25,
	MEMBER_ENUM_PINE_M_RLOWARM = 26,
	MEMBER_ENUM_PINE_M_RHAND = 27,
	MEMBER_ENUM_PINE_M_TESA_R = 28,
	MEMBER_ENUM_PINE_M_EFF4 = 29,
	MEMBER_ENUM_PINE_M_CHN5 = 30,
	MEMBER_ENUM_PINE_M_LPELVIS = 31,
	MEMBER_ENUM_PINE_M_LTHIGH = 32,
	MEMBER_ENUM_PINE_M_LLOWLEG = 33,
	MEMBER_ENUM_PINE_M_LREARFOOT = 34,
	MEMBER_ENUM_PINE_M_LFRONTFOOT = 35,
	MEMBER_ENUM_PINE_M_EFF5 = 36,
	MEMBER_ENUM_PINE_M_CHN6 = 37,
	MEMBER_ENUM_PINE_M_RPELVIS = 38,
	MEMBER_ENUM_PINE_M_RTHIGH = 39,
	MEMBER_ENUM_PINE_M_RLOWLEG = 40,
	MEMBER_ENUM_PINE_M_RREARFOOT = 41,
	MEMBER_ENUM_PINE_M_RFRONTFOOT = 42,
	MEMBER_ENUM_PINE_M_EFF6 = 43,
	MEMBER_ENUM_PINE_M_MODEL = 44,
	MEMBER_ENUM_PINE_M_END = 45
};

enum MemberModelIndexPudding {
	MEMBER_ENUM_PUDDING_AMI_M_PUDDING_AMI_M = 0,
	MEMBER_ENUM_PUDDING_AMI_M_PLAYER_A = 1,
	MEMBER_ENUM_PUDDING_AMI_M_CHN1 = 2,
	MEMBER_ENUM_PUDDING_AMI_M_LOWERTORSO = 3,
	MEMBER_ENUM_PUDDING_AMI_M_ABDOMUM = 4,
	MEMBER_ENUM_PUDDING_AMI_M_UPPERTORSO = 5,
	MEMBER_ENUM_PUDDING_AMI_M_EFF1 = 6,
	MEMBER_ENUM_PUDDING_AMI_M_CHN2 = 7,
	MEMBER_ENUM_PUDDING_AMI_M_NECK = 8,
	MEMBER_ENUM_PUDDING_AMI_M_HEAD = 9,
	MEMBER_ENUM_PUDDING_AMI_M_EFF2 = 10,
	MEMBER_ENUM_PUDDING_AMI_M_CHN7 = 11,
	MEMBER_ENUM_PUDDING_AMI_M_TUNO_L = 12,
	MEMBER_ENUM_PUDDING_AMI_M_EFF7 = 13,
	MEMBER_ENUM_PUDDING_AMI_M_CHN8 = 14,
	MEMBER_ENUM_PUDDING_AMI_M_TUNO_R = 15,
	MEMBER_ENUM_PUDDING_AMI_M_EFF8 = 16,
	MEMBER_ENUM_PUDDING_AMI_M_CHN9 = 17,
	MEMBER_ENUM_PUDDING_AMI_M_HL1 = 18,
	MEMBER_ENUM_PUDDING_AMI_M_HL2 = 19,
	MEMBER_ENUM_PUDDING_AMI_M_EFF9 = 20,
	MEMBER_ENUM_PUDDING_AMI_M_CHN10 = 21,
	MEMBER_ENUM_PUDDING_AMI_M_HR1 = 22,
	MEMBER_ENUM_PUDDING_AMI_M_HR2 = 23,
	MEMBER_ENUM_PUDDING_AMI_M_EFF10 = 24,
	MEMBER_ENUM_PUDDING_AMI_M_FACE = 25,
	MEMBER_ENUM_PUDDING_AMI_M_EYEBALL_R = 26,
	MEMBER_ENUM_PUDDING_AMI_M_EYEBALL_L = 27,
	MEMBER_ENUM_PUDDING_AMI_M_MABU_R = 28,
	MEMBER_ENUM_PUDDING_AMI_M_MABU_L = 29,
	MEMBER_ENUM_PUDDING_AMI_M_CHN3 = 30,
	MEMBER_ENUM_PUDDING_AMI_M_LCOLLARBONE = 31,
	MEMBER_ENUM_PUDDING_AMI_M_LUPARM = 32,
	MEMBER_ENUM_PUDDING_AMI_M_LLOWARM = 33,
	MEMBER_ENUM_PUDDING_AMI_M_LHAND = 34,
	MEMBER_ENUM_PUDDING_AMI_M_LTE = 35,
	MEMBER_ENUM_PUDDING_AMI_M_EFF3 = 36,
	MEMBER_ENUM_PUDDING_AMI_M_CHN4 = 37,
	MEMBER_ENUM_PUDDING_AMI_M_RCOLLARBONE = 38,
	MEMBER_ENUM_PUDDING_AMI_M_RUPARM = 39,
	MEMBER_ENUM_PUDDING_AMI_M_RLOWARM = 40,
	MEMBER_ENUM_PUDDING_AMI_M_RHAND = 41,
	MEMBER_ENUM_PUDDING_AMI_M_RTE = 42,
	MEMBER_ENUM_PUDDING_AMI_M_EFF4 = 43,
	MEMBER_ENUM_PUDDING_AMI_M_BOOST_L = 44,
	MEMBER_ENUM_PUDDING_AMI_M_BOOST_R = 45,
	MEMBER_ENUM_PUDDING_AMI_M_CHN5 = 46,
	MEMBER_ENUM_PUDDING_AMI_M_LPELVIS = 47,
	MEMBER_ENUM_PUDDING_AMI_M_LTHIGH = 48,
	MEMBER_ENUM_PUDDING_AMI_M_LLOWLEG = 49,
	MEMBER_ENUM_PUDDING_AMI_M_LREARFOOT = 50,
	MEMBER_ENUM_PUDDING_AMI_M_LFRONTFOOT = 51,
	MEMBER_ENUM_PUDDING_AMI_M_EFF5 = 52,
	MEMBER_ENUM_PUDDING_AMI_M_GUN_L = 53,
	MEMBER_ENUM_PUDDING_AMI_M_CHN6 = 54,
	MEMBER_ENUM_PUDDING_AMI_M_RPELVIS = 55,
	MEMBER_ENUM_PUDDING_AMI_M_RTHIGH = 56,
	MEMBER_ENUM_PUDDING_AMI_M_RLOWLEG = 57,
	MEMBER_ENUM_PUDDING_AMI_M_RREARFOOT = 58,
	MEMBER_ENUM_PUDDING_AMI_M_RFRONTFOOT = 59,
	MEMBER_ENUM_PUDDING_AMI_M_EFF6 = 60,
	MEMBER_ENUM_PUDDING_AMI_M_GUN_R = 61,
	MEMBER_ENUM_PUDDING_AMI_M_MODEL = 62,
	MEMBER_ENUM_PUDDING_AMI_M_END = 63
};

enum MemberModelIndexMichael {
	MEMBER_ENUM_MICAL_M_M = 0,
	MEMBER_ENUM_MICAL_M_PLAYER_A = 1,
	MEMBER_ENUM_MICAL_M_CHN1 = 2,
	MEMBER_ENUM_MICAL_M_LOWERTORSO = 3,
	MEMBER_ENUM_MICAL_M_ABDOMUM = 4,
	MEMBER_ENUM_MICAL_M_UPPERTORSO = 5,
	MEMBER_ENUM_MICAL_M_EFF1 = 6,
	MEMBER_ENUM_MICAL_M_CHN2 = 7,
	MEMBER_ENUM_MICAL_M_NECK = 8,
	MEMBER_ENUM_MICAL_M_HEAD = 9,
	MEMBER_ENUM_MICAL_M_EFF2 = 10,
	MEMBER_ENUM_MICAL_M_FACE = 11,
	MEMBER_ENUM_MICAL_M_EYEBALL_R = 12,
	MEMBER_ENUM_MICAL_M_EYEBALL_L = 13,
	MEMBER_ENUM_MICAL_M_MABU_R = 14,
	MEMBER_ENUM_MICAL_M_MABU_L = 15,
	MEMBER_ENUM_MICAL_M_CHN3 = 16,
	MEMBER_ENUM_MICAL_M_LCOLLARBONE = 17,
	MEMBER_ENUM_MICAL_M_LUPARM = 18,
	MEMBER_ENUM_MICAL_M_LLOWARM = 19,
	MEMBER_ENUM_MICAL_M_LHAND = 20,
	MEMBER_ENUM_MICAL_M_TESA_L = 21,
	MEMBER_ENUM_MICAL_M_EFF3 = 22,
	MEMBER_ENUM_MICAL_M_CHN4 = 23,
	MEMBER_ENUM_MICAL_M_RCOLLARBONE = 24,
	MEMBER_ENUM_MICAL_M_RUPARM = 25,
	MEMBER_ENUM_MICAL_M_RLOWARM = 26,
	MEMBER_ENUM_MICAL_M_RHAND = 27,
	MEMBER_ENUM_MICAL_M_TESA_R = 28,
	MEMBER_ENUM_MICAL_M_EFF4 = 29,
	MEMBER_ENUM_MICAL_M_CHN5 = 30,
	MEMBER_ENUM_MICAL_M_LPELVIS = 31,
	MEMBER_ENUM_MICAL_M_LTHIGH = 32,
	MEMBER_ENUM_MICAL_M_LLOWLEG = 33,
	MEMBER_ENUM_MICAL_M_LREARFOOT = 34,
	MEMBER_ENUM_MICAL_M_LFRONTFOOT = 35,
	MEMBER_ENUM_MICAL_M_EFF5 = 36,
	MEMBER_ENUM_MICAL_M_CHN6 = 37,
	MEMBER_ENUM_MICAL_M_RPELVIS = 38,
	MEMBER_ENUM_MICAL_M_RTHIGH = 39,
	MEMBER_ENUM_MICAL_M_RLOWLEG = 40,
	MEMBER_ENUM_MICAL_M_RREARFOOT = 41,
	MEMBER_ENUM_MICAL_M_RFRONTFOOT = 42,
	MEMBER_ENUM_MICAL_M_EFF6 = 43,
	MEMBER_ENUM_MICAL_M_MODEL = 44,
	MEMBER_ENUM_MICAL_M_END = 45
};

enum MemberModelIndexJaguar {
	MEMBER_ENUM_JAGUAR_M_M = 0,
	MEMBER_ENUM_JAGUAR_M_PLAYER_A = 1,
	MEMBER_ENUM_JAGUAR_M_CHN1 = 2,
	MEMBER_ENUM_JAGUAR_M_LOWERTORSO = 3,
	MEMBER_ENUM_JAGUAR_M_ABDOMUM = 4,
	MEMBER_ENUM_JAGUAR_M_UPPERTORSO = 5,
	MEMBER_ENUM_JAGUAR_M_EFF1 = 6,
	MEMBER_ENUM_JAGUAR_M_CHN2 = 7,
	MEMBER_ENUM_JAGUAR_M_NECK = 8,
	MEMBER_ENUM_JAGUAR_M_HEAD = 9,
	MEMBER_ENUM_JAGUAR_M_EFF2 = 10,
	MEMBER_ENUM_JAGUAR_M_CHN7 = 11,
	MEMBER_ENUM_JAGUAR_M_TUNO_L = 12,
	MEMBER_ENUM_JAGUAR_M_EFF7 = 13,
	MEMBER_ENUM_JAGUAR_M_CHN8 = 14,
	MEMBER_ENUM_JAGUAR_M_TUNO_R = 15,
	MEMBER_ENUM_JAGUAR_M_EFF8 = 16,
	MEMBER_ENUM_JAGUAR_M_CHN9 = 17,
	MEMBER_ENUM_JAGUAR_M_HL1 = 18,
	MEMBER_ENUM_JAGUAR_M_HL2 = 19,
	MEMBER_ENUM_JAGUAR_M_EFF9 = 20,
	MEMBER_ENUM_JAGUAR_M_CHN10 = 21,
	MEMBER_ENUM_JAGUAR_M_HR1 = 22,
	MEMBER_ENUM_JAGUAR_M_HR2 = 23,
	MEMBER_ENUM_JAGUAR_M_EFF10 = 24,
	MEMBER_ENUM_JAGUAR_M_FACE_1 = 25,
	MEMBER_ENUM_JAGUAR_M_EYEBALL_R_3 = 26,
	MEMBER_ENUM_JAGUAR_M_EYEBALL_L_3 = 27,
	MEMBER_ENUM_JAGUAR_M_MABU_R = 28,
	MEMBER_ENUM_JAGUAR_M_MABU_L = 29,
	MEMBER_ENUM_JAGUAR_M_CHN3 = 30,
	MEMBER_ENUM_JAGUAR_M_LCOLLARBONE = 31,
	MEMBER_ENUM_JAGUAR_M_LUPARM = 32,
	MEMBER_ENUM_JAGUAR_M_LLOWARM = 33,
	MEMBER_ENUM_JAGUAR_M_LHAND = 34,
	MEMBER_ENUM_JAGUAR_M_TESA_L = 35,
	MEMBER_ENUM_JAGUAR_M_EFF3 = 36,
	MEMBER_ENUM_JAGUAR_M_CHN4 = 37,
	MEMBER_ENUM_JAGUAR_M_RCOLLARBONE = 38,
	MEMBER_ENUM_JAGUAR_M_RUPARM = 39,
	MEMBER_ENUM_JAGUAR_M_RLOWARM = 40,
	MEMBER_ENUM_JAGUAR_M_RHAND = 41,
	MEMBER_ENUM_JAGUAR_M_TESA_R = 42,
	MEMBER_ENUM_JAGUAR_M_EFF4 = 43,
	MEMBER_ENUM_JAGUAR_M_BOOST_L = 44,
	MEMBER_ENUM_JAGUAR_M_BOOST_R = 45,
	MEMBER_ENUM_JAGUAR_M_CHN5 = 46,
	MEMBER_ENUM_JAGUAR_M_LPELVIS = 47,
	MEMBER_ENUM_JAGUAR_M_LTHIGH = 48,
	MEMBER_ENUM_JAGUAR_M_LLOWLEG = 49,
	MEMBER_ENUM_JAGUAR_M_LREARFOOT = 50,
	MEMBER_ENUM_JAGUAR_M_LFRONTFOOT = 51,
	MEMBER_ENUM_JAGUAR_M_EFF5 = 52,
	MEMBER_ENUM_JAGUAR_M_GUN_L = 53,
	MEMBER_ENUM_JAGUAR_M_CHN6 = 54,
	MEMBER_ENUM_JAGUAR_M_RPELVIS = 55,
	MEMBER_ENUM_JAGUAR_M_RTHIGH = 56,
	MEMBER_ENUM_JAGUAR_M_RLOWLEG = 57,
	MEMBER_ENUM_JAGUAR_M_RREARFOOT = 58,
	MEMBER_ENUM_JAGUAR_M_RFRONTFOOT = 59,
	MEMBER_ENUM_JAGUAR_M_EFF6 = 60,
	MEMBER_ENUM_JAGUAR_M_GUN_R = 61,
	MEMBER_ENUM_JAGUAR_M_MODEL = 62,
	MEMBER_ENUM_JAGUAR_M_END = 63
};

enum MemberModelIndexBossMoro {
	MEMBER_ENUM_ENM_BOSS_M_ENM_BOSS_M = 0,
	MEMBER_ENUM_ENM_BOSS_M_OBJ1 = 1,
	MEMBER_ENUM_ENM_BOSS_M_CHN1 = 2,
	MEMBER_ENUM_ENM_BOSS_M_LOWERTORSO = 3,
	MEMBER_ENUM_ENM_BOSS_M_ABDOMUM = 4,
	MEMBER_ENUM_ENM_BOSS_M_UPPERTORSO = 5,
	MEMBER_ENUM_ENM_BOSS_M_EFF1 = 6,
	MEMBER_ENUM_ENM_BOSS_M_CHN2 = 7,
	MEMBER_ENUM_ENM_BOSS_M_NECK = 8,
	MEMBER_ENUM_ENM_BOSS_M_HEAD = 9,
	MEMBER_ENUM_ENM_BOSS_M_EFF2 = 10,
	MEMBER_ENUM_ENM_BOSS_M_CHN7 = 11,
	MEMBER_ENUM_ENM_BOSS_M_TUNO_L = 12,
	MEMBER_ENUM_ENM_BOSS_M_EFF7 = 13,
	MEMBER_ENUM_ENM_BOSS_M_CHN8 = 14,
	MEMBER_ENUM_ENM_BOSS_M_TUNO_R = 15,
	MEMBER_ENUM_ENM_BOSS_M_EFF8 = 16,
	MEMBER_ENUM_ENM_BOSS_M_CHN3 = 17,
	MEMBER_ENUM_ENM_BOSS_M_LCOLLARBONE = 18,
	MEMBER_ENUM_ENM_BOSS_M_LUPARM = 19,
	MEMBER_ENUM_ENM_BOSS_M_LLOWARM = 20,
	MEMBER_ENUM_ENM_BOSS_M_LHAND = 21,
	MEMBER_ENUM_ENM_BOSS_M_TESA_L = 22,
	MEMBER_ENUM_ENM_BOSS_M_EFF3 = 23,
	MEMBER_ENUM_ENM_BOSS_M_CHN4 = 24,
	MEMBER_ENUM_ENM_BOSS_M_RCOLLARBONE = 25,
	MEMBER_ENUM_ENM_BOSS_M_RUPARM = 26,
	MEMBER_ENUM_ENM_BOSS_M_RLOWARM = 27,
	MEMBER_ENUM_ENM_BOSS_M_RHAND = 28,
	MEMBER_ENUM_ENM_BOSS_M_TESA_R = 29,
	MEMBER_ENUM_ENM_BOSS_M_EFF4 = 30,
	MEMBER_ENUM_ENM_BOSS_M_CHN5 = 31,
	MEMBER_ENUM_ENM_BOSS_M_LPELVIS = 32,
	MEMBER_ENUM_ENM_BOSS_M_LTHIGH = 33,
	MEMBER_ENUM_ENM_BOSS_M_LLOWLEG = 34,
	MEMBER_ENUM_ENM_BOSS_M_LREARFOOT = 35,
	MEMBER_ENUM_ENM_BOSS_M_LFRONTFOOT = 36,
	MEMBER_ENUM_ENM_BOSS_M_EFF5 = 37,
	MEMBER_ENUM_ENM_BOSS_M_CHN6 = 38,
	MEMBER_ENUM_ENM_BOSS_M_RPELVIS = 39,
	MEMBER_ENUM_ENM_BOSS_M_RTHIGH = 40,
	MEMBER_ENUM_ENM_BOSS_M_RLOWLEG = 41,
	MEMBER_ENUM_ENM_BOSS_M_RREARFOOT = 42,
	MEMBER_ENUM_ENM_BOSS_M_RFRONTFOOT = 43,
	MEMBER_ENUM_ENM_BOSS_M_EFF6 = 44,
	MEMBER_ENUM_ENM_BOSS_M_MODEL = 45,
	MEMBER_ENUM_ENM_BOSS_M_END = 46
};

enum MemberModelIndexPeace {
	MEMBER_ENUM_PEACE_M_M = 0,
	MEMBER_ENUM_PEACE_M_PLAYER_A = 1,
	MEMBER_ENUM_PEACE_M_CHN1 = 2,
	MEMBER_ENUM_PEACE_M_LOWERTORSO = 3,
	MEMBER_ENUM_PEACE_M_ABDOMUM = 4,
	MEMBER_ENUM_PEACE_M_UPPERTORSO = 5,
	MEMBER_ENUM_PEACE_M_EFF1 = 6,
	MEMBER_ENUM_PEACE_M_CHN2 = 7,
	MEMBER_ENUM_PEACE_M_NECK = 8,
	MEMBER_ENUM_PEACE_M_HEAD = 9,
	MEMBER_ENUM_PEACE_M_EFF2 = 10,
	MEMBER_ENUM_PEACE_M_FACE = 11,
	MEMBER_ENUM_PEACE_M_EYEBALL_R = 12,
	MEMBER_ENUM_PEACE_M_EYEBALL_L = 13,
	MEMBER_ENUM_PEACE_M_MABU_R = 14,
	MEMBER_ENUM_PEACE_M_MABU_L = 15,
	MEMBER_ENUM_PEACE_M_CHN3 = 16,
	MEMBER_ENUM_PEACE_M_LCOLLARBONE = 17,
	MEMBER_ENUM_PEACE_M_LUPARM = 18,
	MEMBER_ENUM_PEACE_M_LLOWARM = 19,
	MEMBER_ENUM_PEACE_M_LHAND = 20,
	MEMBER_ENUM_PEACE_M_LTE = 21,
	MEMBER_ENUM_PEACE_M_EFF3 = 22,
	MEMBER_ENUM_PEACE_M_CHN4 = 23,
	MEMBER_ENUM_PEACE_M_RCOLLARBONE = 24,
	MEMBER_ENUM_PEACE_M_RUPARM = 25,
	MEMBER_ENUM_PEACE_M_RLOWARM = 26,
	MEMBER_ENUM_PEACE_M_RHAND = 27,
	MEMBER_ENUM_PEACE_M_RTE = 28,
	MEMBER_ENUM_PEACE_M_EFF4 = 29,
	MEMBER_ENUM_PEACE_M_CHN5 = 30,
	MEMBER_ENUM_PEACE_M_LPELVIS = 31,
	MEMBER_ENUM_PEACE_M_LTHIGH = 32,
	MEMBER_ENUM_PEACE_M_LLOWLEG = 33,
	MEMBER_ENUM_PEACE_M_LREARFOOT = 34,
	MEMBER_ENUM_PEACE_M_LFRONTFOOT = 35,
	MEMBER_ENUM_PEACE_M_EFF5 = 36,
	MEMBER_ENUM_PEACE_M_CHN6 = 37,
	MEMBER_ENUM_PEACE_M_RPELVIS = 38,
	MEMBER_ENUM_PEACE_M_RTHIGH = 39,
	MEMBER_ENUM_PEACE_M_RLOWLEG = 40,
	MEMBER_ENUM_PEACE_M_RREARFOOT = 41,
	MEMBER_ENUM_PEACE_M_RFRONTFOOT = 42,
	MEMBER_ENUM_PEACE_M_EFF6 = 43,
	MEMBER_ENUM_PEACE_M_MODEL = 44,
	MEMBER_ENUM_PEACE_M_END = 45
};

typedef enum {
	MEMBER_ENUM_P_GUITAR_M_M = 0,
	MEMBER_ENUM_P_GUITAR_M_P_GUITARMODEL = 1,
	MEMBER_ENUM_P_GUITAR_M_EFECT = 2,
	MEMBER_ENUM_P_GUITAR_M_END = 3
} PuddingGuitarNode;

typedef struct { // 0x48
	/* 0x00 */ Sint8 lock_flag;
	/* 0x04 */ Float col0[3];
	/* 0x10 */ dgMathVector3 vec0;
	/* 0x1c */ Float col1[3];
	/* 0x28 */ dgMathVector3 vec1;
	/* 0x34 */ Float amb[3];
	/* 0x40 */ Float ambient;
	/* 0x44 */ Float intensity;
} PoisonLight;

typedef void ResultCallbackFunc(/* parameters unknown */);

typedef enum {
	RESULT_TYPE_NORMAL = 0,
	RESULT_TYPE_DANCE = 1,
	RESULT_TYPE_MAX = 2
} ResultType;

enum {
	RES_N_STR_SWINGIN = 0,
	RES_N_STR_ULALA = 1,
	RES_N_STR_SHOW = 2,
	RES_N_STR_REPORT = 3,
	RES_N_WAKU0_0 = 4,
	RES_N_WAKU0_1 = 5,
	RES_N_WAKU0_2 = 6,
	RES_N_WAKU0_3 = 7,
	RES_N_WAKU0_4 = 8,
	RES_N_WAKU0_5 = 9,
	RES_N_WAKU0_6 = 10,
	RES_N_WAKU0_7 = 11,
	RES_N_WAKU0_8 = 12,
	RES_N_WAKU1_0 = 13,
	RES_N_WAKU1_1 = 14,
	RES_N_WAKU1_2 = 15,
	RES_N_WAKU1_3 = 16,
	RES_N_WAKU1_4 = 17,
	RES_N_WAKU1_5 = 18,
	RES_N_WAKU1_6 = 19,
	RES_N_WAKU1_7 = 20,
	RES_N_WAKU1_8 = 21,
	RES_N_WAKU2_0 = 22,
	RES_N_WAKU2_1 = 23,
	RES_N_WAKU2_2 = 24,
	RES_N_WAKU2_3 = 25,
	RES_N_WAKU2_4 = 26,
	RES_N_WAKU2_5 = 27,
	RES_N_WAKU2_6 = 28,
	RES_N_WAKU2_7 = 29,
	RES_N_WAKU2_8 = 30,
	RES_N_STR_RATE = 31,
	RES_N_STR_RESCUE = 32,
	RES_N_STR_SECRET0 = 33,
	RES_N_STR_SECRET1 = 34,
	RES_N_NUM_RATE1000 = 35,
	RES_N_NUM_RATE100 = 36,
	RES_N_NUM_RATE10 = 37,
	RES_N_NUM_RATE_DOT = 38,
	RES_N_NUM_RATE1 = 39,
	RES_N_NUM_RATE_PERCENT = 40,
	RES_N_NUM_RESCUE1000 = 41,
	RES_N_NUM_RESCUE100 = 42,
	RES_N_NUM_RESCUE10 = 43,
	RES_N_NUM_RESCUE_DOT = 44,
	RES_N_NUM_RESCUE1 = 45,
	RES_N_NUM_RESCUE_PERCENT = 46,
	RES_N_NUM_SECRET0_10 = 47,
	RES_N_NUM_SECRET0_1 = 48,
	RES_N_NUM_SECRET_SLASH = 49,
	RES_N_NUM_SECRET1_10 = 50,
	RES_N_NUM_SECRET1_1 = 51,
	RES_N_NUM_SECRET_KO = 52,
	RES_N_STR_COSTUME = 53,
	RES_N_MARK_CH5 = 54,
	RES_N_MAX = 55
};

enum {
	RES_D_WAKU1_0 = 0,
	RES_D_WAKU1_1 = 1,
	RES_D_WAKU1_2 = 2,
	RES_D_WAKU1_3 = 3,
	RES_D_WAKU1_4 = 4,
	RES_D_WAKU1_5 = 5,
	RES_D_WAKU1_6 = 6,
	RES_D_WAKU1_7 = 33,
	RES_D_WAKU1_8 = 34,
	RES_D_WAKU0_0 = 7,
	RES_D_WAKU0_1 = 8,
	RES_D_WAKU0_2 = 9,
	RES_D_WAKU0_3 = 10,
	RES_D_WAKU0_4 = 11,
	RES_D_WAKU0_5 = 12,
	RES_D_WAKU0_6 = 13,
	RES_D_WAKU0_7 = 14,
	RES_D_WAKU0_8 = 15,
	RES_D_STR_SHOW = 16,
	RES_D_STR_DANCING = 17,
	RES_D_STR_ULALA = 18,
	RES_D_NUM_MAXRATE_PERCENT = 19,
	RES_D_NUM_MAXRATE1 = 20,
	RES_D_NUM_MAXRATE_DOT = 36,
	RES_D_NUM_MAXRATE10 = 35,
	RES_D_NUM_MAXRATE100 = 21,
	RES_D_NUM_MAXRATE1000 = 22,
	RES_D_NUM_RATE_PERCENT = 23,
	RES_D_NUM_RATE1 = 24,
	RES_D_NUM_RATE_DOT = 25,
	RES_D_NUM_RATE10 = 26,
	RES_D_NUM_RATE100 = 27,
	RES_D_NUM_RATE1000 = 28,
	RES_D_STR_RATE = 30,
	RES_D_STR_MAXRATE = 29,
	RES_D_STR_COSTUME = 32,
	RES_D_MARK_CH5 = 31,
	RES_D_MAX = 37
};

typedef enum {
	CSPR_TYPE_TOP = 0,
	CSPR_TYPE_COSTUME = 1,
	CSPR_TYPE_CH5 = 2,
	CSPR_TYPE_WAKU0 = 3,
	CSPR_TYPE_WAKU1 = 4,
	CSPR_TYPE_WAKU2 = 5,
	CSPR_TYPE_STR_WAKU0 = 6,
	CSPR_TYPE_STR_WAKU1 = 7,
	CSPR_TYPE_STR_WAKU2 = 8,
	CSPR_TYPE_NUM0 = 9,
	CSPR_TYPE_NUM1 = 10,
	CSPR_TYPE_NUM2 = 11,
	CSPR_TYPE_NUM3 = 12,
	CSPR_TYPE_MAX = 13
} CellPartsType;

typedef struct { // 0x14
	/* 0x00 */ int cell_num;
	/* 0x04 */ Sint32 *cell_no_tbl;
	/* 0x08 */ int start_cell;
	/* 0x0c */ int nb_cell;
	/* 0x10 */ int top_zero_disp;
} CellsprData;

typedef struct { // 0xec
	/* 0x00 */ Sint8 wait_mode;
	/* 0x01 */ Sint8 mode;
	/* 0x02 */ Sint8 start_req;
	/* 0x03 */ Sint8 rate_hide_req;
	/* 0x04 */ Sint8 callback_func_done;
	/* 0x05 */ Sint8 costume_num;
	/* 0x06 */ Sint16 max_rate;
	/* 0x08 */ ResultType type;
	/* 0x0c */ Sint32 sub_block_no;
	/* 0x10 */ Sint32 start_frame;
	/* 0x14 */ Sint32 end_frame;
	/* 0x18 */ dgShSpy *sh_spy;
	/* 0x1c */ dgTexInfo *tex_info;
	/* 0x20 */ ResultCallbackFunc *callback_func;
	/* 0x24 */ NJS_CELL_SPRITE *mark_cspr[9];
	/* 0x48 */ dgCellsprNumber *num_cspr[4];
	/* 0x58 */ NJS_CELL_SPRITE_VAL blink_cval;
	/* 0xcc */ dgMathAngle1 ang;
	/* 0xd0 */ dgMathAngle1 spd_ang;
	/* 0xd4 */ GameLoad *game_load_entry_ptr;
	/* 0xd8 */ void *tex_ptr;
	/* 0xdc */ Uint32 serial_id;
	/* 0xe0 */ int select_no;
	/* 0xe4 */ int cspr_num;
	/* 0xe8 */ NJS_CELL_SPRITE **cspr;
} ResultTask;

typedef struct { // 0x24
	/* 0x00 */ Sint16 tex_id;
	/* 0x04 */ Float cox;
	/* 0x08 */ Float offset_coy;
	/* 0x0c */ Float csx;
	/* 0x10 */ Float csy;
	/* 0x14 */ Float u0;
	/* 0x18 */ Float v0;
	/* 0x1c */ Float u2;
	/* 0x20 */ Float v2;
} Ps2WakuTexData;

enum {
	SECRET_MORO_RD = 0,
	SECRET_MORO_LU = 1,
	SECRET_MORO_LD = 2,
	SECRET_MORO_RU = 3,
	SECRET_MORO_MAX = 4
};

typedef struct { // 0x8
	/* 0x0 */ Sint8 secret_no;
	/* 0x1 */ Sint8 move_type;
	/* 0x4 */ dgCharNo char_no;
} SecretDataMoro0;

typedef struct { // 0xc
	/* 0x0 */ GameLoad *game_load_entry_ptr;
	/* 0x4 */ MtpHandle *mtph;
	/* 0x8 */ dgCharMotionData *mot_data;
} SecretMoroLoadTask;

typedef struct { // 0xe0
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 edit_mode;
	/* 0x02 */ Sint8 block_no;
	/* 0x04 */ Sint32 current_frame;
	/* 0x08 */ dgMathVector3 current_spos;
	/* 0x14 */ dgMathVector2 current_sspd;
	/* 0x1c */ dgMathAngle3 current_ang;
	/* 0x28 */ dgMathAngle3 current_ang_spd;
	/* 0x34 */ dgMathAngle1 base_ang_z;
	/* 0x38 */ Sint32 frame;
	/* 0x3c */ Float vz;
	/* 0x40 */ Float base_ang_fz;
	/* 0x44 */ dgMathVector3 base_spos;
	/* 0x50 */ dgMathVector2 sspd;
	/* 0x58 */ dgMathVector2 sacc;
	/* 0x60 */ dgMathAngle3 ang_spd;
	/* 0x6c */ dgMathAngle3 ang_acc;
	/* 0x78 */ SecretDataMoro0 *data;
	/* 0x7c */ dgMathVector3 vpos;
	/* 0x90 */ dgMathMatrix mirror_matrix;
	/* 0xd0 */ dgCdbHandle cdbh;
	/* 0xd4 */ dgCharCtrl *char_ctrl;
	/* 0xd8 */ dgCharMotionCtrl *mot_ctrl;
	/* 0xdc */ GWHWND hwnd;
} SecretMoroTask;

typedef struct { // 0x1c
	/* 0x00 */ dgMathVector2 base_spos;
	/* 0x08 */ Float base_ang_fz;
	/* 0x0c */ dgMathVector2 sspd;
	/* 0x14 */ dgMathVector2 sacc;
} MoveParam;

typedef struct { // 0x4
	/* 0x0 */ Sint8 secret_no;
	/* 0x2 */ dgSoundData no;
} SecretDataSound;

typedef struct { // 0xc
	/* 0x0 */ Sint8 mode;
	/* 0x1 */ Sint8 block_no;
	/* 0x4 */ SecretDataSound *data;
	/* 0x8 */ Sint32 frame;
} SecretSoundTask;

typedef struct { // 0x14
	/* 0x00 */ Sint8 secret_no;
	/* 0x04 */ int text_no;
	/* 0x08 */ dgCaptionType type;
	/* 0x0c */ Sint32 start_frame;
	/* 0x10 */ Sint32 nb_frame;
} SecretDataText;

typedef struct { // 0x10
	/* 0x0 */ Sint8 mode;
	/* 0x1 */ Sint8 block_no;
	/* 0x4 */ SecretDataText *data;
	/* 0x8 */ Sint32 frame;
	/* 0xc */ Sint32 end_frame;
} SecretTextTask;

typedef struct { // 0x1
	/* 0x0 */ Sint8 secret_no;
} SecretDataWink;

typedef struct { // 0x14
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 block_no;
	/* 0x04 */ dgCharNo char_no;
	/* 0x08 */ SecretDataWink *data;
	/* 0x0c */ Sint32 sys_wink_disable_ticks;
	/* 0x10 */ Sint32 frame;
} SecretWinkTask;

enum {
	SHADOW_COL_BASE = 0,
	SHADOW_COL_FACE = 1,
	SHADOW_COL_MAX = 2
};

enum {
	SHADOW_OBJ_SHADOW = 0,
	SHADOW_OBJ_FACE = 1,
	SHADOW_OBJ_WARP_SHADOW = 2,
	SHADOW_OBJ_WARP_EFFECT = 3,
	SHADOW_OBJ_MAX = 4
};

enum {
	NEW_SHADOW_OBJ_SHADOW = 0,
	NEW_SHADOW_OBJ_WARP_SHADOW = 1,
	NEW_SHADOW_OBJ_WARP_EFFECT = 2,
	NEW_SHADOW_OBJ_MAX = 3
};

enum {
	SHADOW_DEMO_TYPE_APPEAR = 0,
	SHADOW_DEMO_TYPE_WIN_LOSE = 1,
	SHADOW_DEMO_TYPE_APPEAR_2 = 2,
	SHADOW_DEMO_TYPE_DISAPPEAR = 3,
	SHADOW_DEMO_TYPE_MAX = 4
};

enum {
	SHADOW_ATTRIB_NON = 0,
	SHADOW_ATTRIB_CHANGE_ARGB = 1,
	SHADOW_ATTRIB_OBJ_KILL = 2,
	SHADOW_ATTRIB_PRE_EXEC = 4,
	SHADOW_ATTRIB_WALK = 8,
	SHADOW_ATTRIB_LOSE = 16,
	SHADOW_ATTRIB_NO_DISP = 32,
	SHADOW_ATTRIB_KAGE = 64,
	SHADOW_ATTRIB_MAX = 65
};

enum {
	SHADOW_MTN_END = -3,
	SHADOW_MTN_STOP = -2,
	SHADOW_MTN_LOOP = -1,
	SHADOW_MTN_JDC = 0,
	SHADOW_MTN_VAP1 = 1,
	SHADOW_MTN_VWE02S = 2,
	SHADOW_MTN_VWE02L = 3,
	SHADOW_MTN_VWE02E = 4,
	SHADOW_MTN_VWE01L = 5,
	SHADOW_MTN_WARP1 = 6,
	SHADOW_MTN_WARP2 = 7,
	SHADOW_MTN_WARP3 = 8,
	SHADOW_MTN_WIN = 9,
	SHADOW_MTN_LOSE = 10,
	SHADOW_MTN_S_KAO1 = 11,
	SHADOW_MTN_S_KAO2 = 12,
	SHADOW_MTN_MAX = 13
};

typedef enum {
	SHADOW_MTP_ID_WARP = 0,
	SHADOW_MTP_ID_DANCE = 1,
	SHADOW_MTP_ID_SHOOT = 2,
	SHADOW_MTP_MAX = 3
} ShadowMtpId;

struct _ShadowData { // 0x28
	/* 0x00 */ Sint16 demo_type;
	/* 0x04 */ Float start_beat;
	/* 0x08 */ Float event_beat_len;
	/* 0x0c */ dgMathVector3 start_pos;
	/* 0x18 */ dgMathAngle3 start_ang;
	/* 0x24 */ dgTaskParam *task_func;
};

typedef _ShadowData ShadowData;
typedef _ShadowObjData ShadowObjData;

struct _ShadowTask { // 0x140
	/* 0x000 */ Sint16 mode;
	/* 0x002 */ Sint16 flag;
	/* 0x004 */ Sint16 *next_mtn_id;
	/* 0x008 */ Sint16 *mtn_attrib_table;
	/* 0x00c */ dgShSeqType seq_type;
	/* 0x010 */ dgInputQtype q_type;
	/* 0x014 */ int sub_block_no;
	/* 0x018 */ int q_no;
	/* 0x01c */ int seq_id;
	/* 0x020 */ int seq_next_id;
	/* 0x024 */ int now_step;
	/* 0x028 */ Float event_start_beat;
	/* 0x02c */ Float mtn_frame_speed;
	/* 0x030 */ dgMathMatrix col_matrix[2];
	/* 0x0b0 */ dgMathVector3 pos;
	/* 0x0bc */ dgMathVector3 base_pos;
	/* 0x0c8 */ dgMathAngle3 ang;
	/* 0x0d4 */ dgCdbHandle kage_chnd;
	/* 0x0d8 */ dgWalkCtrl wc;
	/* 0x0e4 */ mtnMotion *mtn_table[13];
	/* 0x118 */ dgShapeMotion **shape_table;
	/* 0x11c */ MtpHandle *mtp_hndl[3];
	/* 0x128 */ ShadowObjData *obj_data[4];
	/* 0x138 */ ShadowData *round_data;
	/* 0x13c */ ShadowData **round_data_table;
};

typedef _ShadowTask ShadowTask;

enum {
	SHADOW_MODE_INIT = 0,
	SHADOW_MODE_WAIT_LOAD = 1,
	SHADOW_MODE_START = 2,
	SHADOW_MODE_DANCE_START = 3,
	SHADOW_MODE_DANCE_BATTLE = 4,
	SHADOW_MODE_WIN_LOSE_START = 5,
	SHADOW_MODE_WIN_LOSE = 6,
	SHADOW_MODE_SHOOT_START = 7,
	SHADOW_MODE_SHOOT_END = 8,
	SHADOW_MODE_END = 9
};

enum {
	SHADOW_OBJ_MODE_START = 0,
	SHADOW_OBJ_MODE_EVENT = 1,
	SHADOW_OBJ_MODE_PRE_END = 2,
	SHADOW_OBJ_MODE_END = 3
};

enum {
	SHADOW_MAIN_FLAG_NOW_BREAK = 1
};

struct _ShadowObjData { // 0x6c
	/* 0x00 */ Sint8 id;
	/* 0x01 */ Sint8 event_id;
	/* 0x02 */ Sint16 mtn_id;
	/* 0x04 */ Sint16 data_mode;
	/* 0x06 */ Sint16 attrib;
	/* 0x08 */ Float mtn_frame;
	/* 0x0c */ Float shape_frame;
	/* 0x10 */ Float start_beat;
	/* 0x14 */ Float appear_beat;
	/* 0x18 */ Float end_beat;
	/* 0x1c */ dgMathVector3 pos;
	/* 0x28 */ dgMathAngle3 ang;
	/* 0x34 */ dgObjCtrl oc;
	/* 0x60 */ dgCdbHandle chnd;
	/* 0x64 */ mtnPose *pose_buf;
	/* 0x68 */ dgShapePose *shape_pose_buf;
};

struct _ShadowEventObjData { // 0x8
	/* 0x0 */ Sint16 attrib;
	/* 0x2 */ Sint16 mtn_id;
	/* 0x4 */ Float appear_beat;
};

typedef _ShadowEventObjData ShadowEventObjData;

struct _ShadowEventData { // 0x4
	/* 0x0 */ _ShadowEventObjData *obj_event_data;
};

typedef _ShadowEventData ShadowEventData;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x38
	/* 0x00 */ ShootBattleData *shoot_data_p;
	/* 0x04 */ Sint32 enemy_number;
	/* 0x08 */ MtpHandle *mtp_h;
	/* 0x0c */ MtpHandle *leader_mtp_h;
	/* 0x10 */ MtpHandle *battle_mtp_h;
	/* 0x14 */ int seq_id;
	/* 0x18 */ int q_seq_id;
	/* 0x1c */ int qno;
	/* 0x20 */ int qno_out;
	/* 0x24 */ float start_beat;
	/* 0x28 */ float control_beat;
	/* 0x2c */ ShootActionMode action_mode;
	/* 0x30 */ Sint32 add_member;
	/* 0x34 */ Bool death_flag;
} ShootManTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x1c
	/* 0x00 */ ShootDir dir;
	/* 0x01 */ dgInputKey shoot;
	/* 0x02 */ Sint8 dir_timing;
	/* 0x03 */ Sint8 shoot_timing;
	/* 0x04 */ Sint8 dir_index;
	/* 0x05 */ Sint8 dir_max;
	/* 0x06 */ Sint8 target_index;
	/* 0x07 */ Sint8 qno;
	/* 0x08 */ Sint16 charno;
	/* 0x0a */ Sint16 seq_id;
	/* 0x0c */ float dir_beat;
	/* 0x10 */ float shoot_beat;
	/* 0x14 */ ShootManTask *shoot_task_p;
	/* 0x18 */ dgCharMotionData *motdata_p;
} ShootCharCtrl;

typedef struct { // 0x4
	/* 0x0 */ float set_beat;
} ShootAddPartyTask;

typedef enum {
	SHOOT_LEADER_EXEC_DEMO = 0,
	SHOOT_LEADER_EXEC_QA = 1,
	SHOOT_LEADER_EXEC_WAIT_NEXT = 2,
	SHOOT_LEADER_EXEC_WAIT_NEXT_QA = 3,
	SHOOT_LEADER_EXEC_BREAK = 4,
	SHOOT_LEADER_EXEC_PRE_FINISH = 5,
	SHOOT_LEADER_EXEC_FINISH = 6,
	SHOOT_LEADER_EXEC_END = 7
} ShootLeaderMode;

enum ShootLeaderStatusBit {
	BIT_SHOOT_LEADER_STATUS_CHANGE_MOTION = 0,
	BIT_SHOOT_LEADER_STATUS_SET_BEAM = 1,
	BIT_SHOOT_LEADER_STATUS_SHOOT_BEAM = 2,
	BIT_SHOOT_LEADER_STATUS_SET_COMBO_BEAM = 3,
	BIT_SHOOT_LEADER_STATUS_SET_HITMARK_OK = 4,
	BIT_SHOOT_LEADER_STATUS_SET_HITMARK_NG = 5,
	BIT_SHOOT_LEADER_STATUS_RESULT_GOOD = 6,
	BIT_SHOOT_LEADER_STATUS_RESULT_NG = 7,
	BIT_SHOOT_LEADER_STATUS_END = 8
};

typedef Sint32 ShootLeaderStatus;

typedef struct { // 0x20
	/* 0x00 */ Sint8 mode;
	/* 0x01 */ Sint8 timing_no;
	/* 0x02 */ Sint8 timing_max;
	/* 0x03 */ Sint8 qno;
	/* 0x04 */ Sint8 attack_qno;
	/* 0x05 */ Sint8 attack_timing;
	/* 0x06 */ Sint16 seq_id;
	/* 0x08 */ Sint16 motion_index;
	/* 0x0a */ Sint16 status;
	/* 0x0c */ Sint32 hit_status;
	/* 0x10 */ float start_beat;
	/* 0x14 */ float next_beat;
	/* 0x18 */ float next_limit;
	/* 0x1c */ float set_frame;
} ShootLeaderCtrl;

typedef struct { // 0xc
	/* 0x0 */ float set_beat;
	/* 0x4 */ void *parent_p;
	/* 0x8 */ dgMathVector3 *center_p;
} TargetSetTask;

enum {
	SIMMLDCTRL_MD_INIT = 0,
	SIMMLDCTRL_MD_LOADING = 1,
	SIMMLDCTRL_MD_BUSY = 2,
	SIMMLDCTRL_MD_END = 3
};

struct _SimmLdCtrlTask { // 0x108
	/* 0x000 */ Sint32 mode;
	/* 0x004 */ void *simmload_ptr;
	/* 0x008 */ char fname[256];
};

typedef _SimmLdCtrlTask SimmLdCtrlTask;
typedef _SimmLdCtrlTask *SimmLdCtrlTaskPtr;
typedef unsigned char BYTE;
typedef int BOOL;

struct tagSIMMENTRY { // 0x18
	/* 0x00 */ BYTE seAttr;
	/* 0x01 */ char seName[13];
	/* 0x0e */ char dum[2];
	/* 0x10 */ int seOffset;
	/* 0x14 */ int seBytes;
};

typedef tagSIMMENTRY SIMMENTRY;

enum {
	ERR_NONE = 0,
	ERR_DIRECTORY_NOT_FOUND = 1,
	ERR_FILE_NOT_FOUND = 2,
	ERR_CANNOT_CHANGE_DIRECTORY = 3,
	ERR_CANNOT_OPEN_FILE = 4
};

typedef struct { // 0x10
	/* 0x0 */ char **fname_tbl;
	/* 0x4 */ GameLoad *game_load;
	/* 0x8 */ Uint32 serial_id;
	/* 0xc */ void *ptr;
} SelectTask;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x10
	/* 0x0 */ Sint32 index;
	/* 0x4 */ Sint32 shoot_dir;
	/* 0x8 */ dgMathVector3 *target_pos_p;
	/* 0xc */ void *target_task_p;
} TargetData;

typedef struct { // 0x10c
	/* 0x000 */ Sint32 qno;
	/* 0x004 */ Sint32 target_counter;
	/* 0x008 */ Sint32 target_number;
	/* 0x00c */ TargetData target_data[16];
} TargetBuffer;

typedef struct { // 0x320
	/* 0x000 */ Sint32 new_buf_index;
	/* 0x004 */ TargetBuffer buffer[2];
	/* 0x21c */ Sint32 leader_number;
	/* 0x220 */ TargetData leader_target_data[16];
} TargetTask;

typedef struct { // 0x8
	/* 0x0 */ int num;
	/* 0x4 */ NJS_CELL_SPRITE **cspr_tbl;
} TitleLogoCsprData;

typedef struct { // 0x64
	/* 0x00 */ int mode;
	/* 0x04 */ int time;
	/* 0x08 */ int logo_type;
	/* 0x0c */ float alpha;
	/* 0x10 */ float dlt_alpha;
	/* 0x14 */ dgTexInfo *tex_info;
	/* 0x18 */ NJS_POLYGON_VTX poly[4];
	/* 0x58 */ Uint32 base_color;
	/* 0x5c */ void *tex_ptr;
	/* 0x60 */ Uint32 serial_id;
} TitleLogoTask;

typedef enum {
	TVSET_MODE_SELECT = 0,
	TVSET_MODE_TEST = 1,
	TVSET_MODE_END = 2
} TvSetMode;

typedef enum {
	TVSET_CUR_50Hz = 0,
	TVSET_CUR_60Hz = 1,
	TVSET_CUR_TEST = 2,
	TVSET_CUR_NUM = 3
} TvSetCur;

struct _TvSetTask { // 0x18
	/* 0x00 */ TvSetMode mode;
	/* 0x04 */ Sint32 cnt;
	/* 0x08 */ TvSetCur cur;
	/* 0x0c */ float height;
	/* 0x10 */ dgTexInfo *info_p;
	/* 0x14 */ void *tex_buffer_p;
};

typedef _TvSetTask TvSetTask;

typedef struct { // 0x1c
	/* 0x00 */ Sint32 line_number;
	/* 0x04 */ char **str_pp_tbl[6];
} TvSetStrData;

enum TvSetTexIndex {
	TV_TEX_BG_LEFT = 0,
	TV_TEX_BG_RIGHT = 1,
	TV_TEX_TEST_LEFT = 2,
	TV_TEX_TEST_RIGHT = 3,
	TV_TEX_MAX = 4
};

typedef struct { // 0xc
	/* 0x0 */ Sint32 id;
	/* 0x4 */ Sint32 start_frame;
	/* 0x8 */ Sint32 *ptr;
} VoiceChainData;

typedef struct { // 0x10
	/* 0x0 */ Sint32 mov_num;
	/* 0x4 */ VoiceChainData *mov_data;
	/* 0x8 */ Sint32 brk_num;
	/* 0xc */ VoiceChainData *brk_data;
} VoiceData;

typedef struct { // 0x244
	/* 0x000 */ Sint8 pid;
	/* 0x001 */ Sint8 kime_flag;
	/* 0x002 */ Sint8 qno_s;
	/* 0x003 */ Sint8 qno_e;
	/* 0x004 */ Uint8 *bup_history_ptr;
	/* 0x008 */ Uint8 my_history[16];
	/* 0x018 */ Sint16 voice_buf[256];
	/* 0x218 */ Sint16 voice_history_no;
	/* 0x21c */ dgShSpy *sh_spy;
	/* 0x220 */ VoiceData *current_data;
	/* 0x224 */ VoiceData *data;
	/* 0x228 */ Sint32 block_true_qnum;
	/* 0x22c */ Sint32 block_false_qnum;
	/* 0x230 */ Sint32 btl_true_qnum;
	/* 0x234 */ Sint32 btl_false_qnum;
	/* 0x238 */ Sint32 shoot_a;
	/* 0x23c */ Sint32 shoot_b;
	/* 0x240 */ GWHWND hwnd;
} VoiceTask;

typedef struct { // 0x1c
	/* 0x00 */ dgShSpy *spy_h;
	/* 0x04 */ float test_beat;
	/* 0x08 */ Bool ready_flag;
	/* 0x0c */ Bool dummy_loop_flag;
	/* 0x10 */ WalkLevelAssign level;
	/* 0x14 */ Sint32 sub_block_no;
	/* 0x18 */ Sint32 wait_sub_block_no;
} WalkLevelTask;

typedef enum {
	GWD_WC_WINDOW = 0,
	GWD_WC_BASEWIN = 1,
	GWD_WC_BUTTON = 2,
	GWD_WC_SCRLBAR = 3,
	GWD_WC_MENUWIN = 4,
	GWD_WC_CTLBOX = 5,
	GWD_WC_SLIDER = 6,
	GWD_WC_TEXTFIELD = 7,
	GWD_WC_LABEL = 8,
	GWD_WC_CHOICEBOX = 9,
	GWD_WC_MAX = 10
} gwWindowClass;

typedef enum {
	GWD_WIN_AREA_OUTSIDE = 0,
	GWD_WIN_AREA_FRAME_T = 1,
	GWD_WIN_AREA_FRAME_LT = 2,
	GWD_WIN_AREA_FRAME_L = 3,
	GWD_WIN_AREA_FRAME_LB = 4,
	GWD_WIN_AREA_FRAME_B = 5,
	GWD_WIN_AREA_FRAME_RB = 6,
	GWD_WIN_AREA_FRAME_R = 7,
	GWD_WIN_AREA_FRAME_RT = 8,
	GWD_WIN_AREA_CLIENT = 9,
	GWD_WIN_AREA_CAPTION = 10,
	GWD_WIN_AREA_NUM = 11
} gwWinArea;

struct _gwPoint2D { // 0x8
	/* 0x0 */ Sint32 x;
	/* 0x4 */ Sint32 y;
};

typedef _gwPoint2D gwPoint2D;

struct _gwData { // 0x8
	/* 0x0 */ Sint32 type;
	/* 0x4 */ void *dt;
};

typedef _gwData gwData;

// warning: multiple differing types with the same name (enum constant not equal)
typedef enum {
	GWD_MENU_TYPE_NORMAL = 0,
	GWD_MENU_TYPE_POPUP = 1,
	GWD_MENU_TYPE_SEPARATER = 2,
	GWD_MENU_TYPE_CHECKBOX = 3,
	GWD_MENU_TYPE_NULL = 4,
	GWD_MENU_TYPE_NUM = 5
} gwMenuType;

typedef enum {
	GWD_MENU_FLAG_NONE = 0,
	GWD_MENU_FLAG_CHECK = 1,
	GWD_MENU_FLAG_RADIO = 2,
	GWD_MENU_FLAG_RADIO_S = 3,
	GWD_MENU_FLAG_NUM = 4
} gwMenuFlag;

typedef enum {
	GWD_BASEWIN_MODE_NORMAL = 0,
	GWD_BASEWIN_MODE_DRAG = 1,
	GWD_BASEWIN_MODE_MINIMUM = 2,
	GWD_BASEWIN_MODE_MAXIMUM = 3,
	GWD_BASEWIN_MODE_NUM = 4
} gwBaseWinMode;

typedef struct { // 0xdc
	/* 0x00 */ gwWindow win;
	/* 0xa4 */ Sint32 min_w;
	/* 0xa8 */ Sint32 min_h;
	/* 0xac */ Sint32 scrl_h;
	/* 0xb0 */ Sint32 scrl_v;
	/* 0xb4 */ GWHWND hClose;
	/* 0xb8 */ GWHWND hMaximize;
	/* 0xbc */ GWHWND hMinimize;
	/* 0xc0 */ GWHWND hScrlBarH;
	/* 0xc4 */ GWHWND hScrlBarV;
	/* 0xc8 */ GWHWND hCaptionBar;
	/* 0xcc */ GWHWND hMenuBar;
	/* 0xd0 */ GWHWND hToolBar;
	/* 0xd4 */ GWHWND hMenuWin;
	/* 0xd8 */ gwMenu *menulist;
} gwBaseWin;

typedef gwBaseWin gwFrame;

struct _gwMouse { // 0x88
	/* 0x00 */ gwPoint2D pt;
	/* 0x08 */ Sint32 dt;
	/* 0x0c */ Sint32 cursor;
	/* 0x10 */ gwPoint2D oldPt;
	/* 0x18 */ gwPoint2D mv;
	/* 0x20 */ gwPoint2D dragPt;
	/* 0x28 */ Sint32 wheelspd;
	/* 0x2c */ Float x;
	/* 0x30 */ Float y;
	/* 0x34 */ Float xspd;
	/* 0x38 */ Float yspd;
	/* 0x3c */ Uint32 port;
	/* 0x40 */ Uint32 enable;
	/* 0x44 */ GWHWND hWnd;
	/* 0x48 */ Float DigitalSpeed;
	/* 0x4c */ Float AnalogSpeed;
	/* 0x50 */ int mode;
	/* 0x54 */ gwWinArea area;
	/* 0x58 */ Sint32 on;
	/* 0x5c */ Sint32 press;
	/* 0x60 */ Sint32 release;
	/* 0x64 */ Sint32 repeat;
	/* 0x68 */ Sint32 repeat_timer;
	/* 0x6c */ Sint32 repeat_wait;
	/* 0x70 */ Sint32 repeat_interval;
	/* 0x74 */ Sint32 dclick;
	/* 0x78 */ Sint32 dclick_timer;
	/* 0x7c */ Sint32 dclick_wait;
	/* 0x80 */ Sint32 dclick_data;
	/* 0x84 */ int NoTouchTime;
};

typedef _gwMouse gwMouse;

struct _gwMenuWin { // 0xac
	/* 0x00 */ gwWindow base;
	/* 0xa4 */ Sint32 index;
	/* 0xa8 */ gwMenu *MenuList;
};

typedef _gwMenuWin gwMenuWin;

typedef enum {
	GWD_BTN_MODE_NORMAL = 0,
	GWD_BTN_MODE_DOWN = 1,
	GWD_BTN_MODE_GRAY = 2,
	GWD_BTN_MODE_NUM = 3
} gwButtonMode;

typedef enum {
	GWD_BUTTON_STYLE_CAPTION = 0,
	GWD_BUTTON_STYLE_ICON = 1,
	GWD_BUTTON_STYLE_MAX = 2
} gwButtonStyle;

struct _gwButton { // 0xbc
	/* 0x00 */ gwWindow base;
	/* 0xa4 */ GWF_BUTTONFUNC func;
	/* 0xa8 */ gwButtonMode mode;
	/* 0xac */ gwButtonStyle style;
	/* 0xb0 */ Sint32 icon;
	/* 0xb4 */ Float icon_scale;
	/* 0xb8 */ Bool toggle_flag;
};

typedef _gwButton gwButton;

typedef enum {
	GWD_CBT_CLOSEBOX = 0,
	GWD_CBT_MAXIMIZE = 1,
	GWD_CBT_MINIMIZE = 2,
	GWD_CBT_NUM = 3
} gwCtrlBoxType;

// warning: multiple differing types with the same name (enum constant not equal)
typedef enum {
	GWD_SCRLBAR_TYPE_HORIZONTAL = 0,
	GWD_SCRLBAR_TYPE_VERTICAL = 1,
	GWD_SCRLBAR_TYPE_HORIZONTAL_AUTO = 2,
	GWD_SCRLBAR_TYPE_VERTICAL_AUTO = 3,
	GWD_SCRLBAR_TYPE_MAX = 4
} gwScrlBarType;

struct _gwScrollBar { // 0xe4
	/* 0x00 */ gwWindow base;
	/* 0xa4 */ gwScrlBarType type;
	/* 0xa8 */ Sint32 flag;
	/* 0xac */ Sint32 visible;
	/* 0xb0 */ GWHWND hWndSlider;
	/* 0xb4 */ GWHWND hWndButton[2];
	/* 0xbc */ gwScrlBarVar vardata;
	/* 0xd0 */ Sint32 sb_x;
	/* 0xd4 */ Sint32 sb_y;
	/* 0xd8 */ Sint32 sb_w;
	/* 0xdc */ Sint32 sb_h;
	/* 0xe0 */ GW_WIN_CALLBACK callback;
};

typedef _gwScrollBar gwScrollBar;

typedef struct { // 0xc
	/* 0x0 */ Uint32 on;
	/* 0x4 */ Uint32 press;
	/* 0x8 */ Uint32 repeat;
} gwKbdCtrlData;

typedef struct { // 0x14
	/* 0x00 */ Uint32 window_colors[4];
	/* 0x10 */ Uint32 text_color;
} gwSystemParam;

struct _gwChoiceItem { // 0xc
	/* 0x0 */ char *title;
	/* 0x4 */ _gwChoiceItem *prev;
	/* 0x8 */ _gwChoiceItem *next;
};

typedef _gwChoiceItem gwChoiceItem;

typedef struct { // 0xbc
	/* 0x00 */ gwWindow base;
	/* 0xa4 */ gwChoiceItem *itemlist;
	/* 0xa8 */ Sint32 nbItems;
	/* 0xac */ Sint32 index;
	/* 0xb0 */ GWF_CHOICEBOX_CALLBACK callback;
	/* 0xb4 */ GWHWND hBtn;
	/* 0xb8 */ GWHWND hChoiceMenu;
} gwChoiceBox;

struct _gwMemBlock { // 0x20
	/* 0x00 */ Uint16 magic;
	/* 0x02 */ Uint16 use;
	/* 0x04 */ Uint32 size;
	/* 0x08 */ _gwMemBlock *prev;
	/* 0x0c */ _gwMemBlock *next;
	/* 0x10 */ char *filename;
	/* 0x14 */ Uint32 line;
	/* 0x18 */ int dummy[2];
};

typedef _gwMemBlock gwMemBlock;

typedef struct { // 0x14
	/* 0x00 */ Uint32 use_size;
	/* 0x04 */ Uint32 free_size;
	/* 0x08 */ Uint32 max_free_size;
	/* 0x0c */ Uint32 use_block;
	/* 0x10 */ Uint32 free_block;
} gwMemInfo;

typedef _gwCommandData_LIST gwCommandData_LIST;

struct _gwCommandData_LIST { // 0x10
	/* 0x0 */ gwCommandData com;
	/* 0xc */ gwCommandData_LIST *next;
};

typedef struct { // 0x8
	/* 0x0 */ GW_WIN_CALLBACK LeftBtnPressCallback;
	/* 0x4 */ GW_WIN_CALLBACK LeftBtnReleaseCallback;
} gwDeskTopWork;

typedef struct { // 0x28
	/* 0x00 */ Uint8 on_buf[6];
	/* 0x08 */ int port;
	/* 0x0c */ Uint8 on;
	/* 0x0d */ Uint8 press;
	/* 0x0e */ Uint8 repeat;
	/* 0x0f */ Uint8 ctrl_old;
	/* 0x10 */ Uint8 ctrl;
	/* 0x11 */ Uint8 ctrl_press;
	/* 0x12 */ Uint8 ctrl_release;
	/* 0x13 */ Uint8 code;
	/* 0x14 */ Sint8 rep_count;
	/* 0x18 */ int buf_index;
	/* 0x1c */ Bool b_serial_input;
	/* 0x20 */ Sint32 serial_input_code;
	/* 0x24 */ Sint32 serial_input_key;
} gwKbd;

typedef struct { // 0x88
	/* 0x00 */ char str[128];
	/* 0x80 */ int cursor;
	/* 0x84 */ int stat;
} gwInputStr;

typedef struct { // 0xc
	/* 0x0 */ Uint32 color;
	/* 0x4 */ int size;
	/* 0x8 */ char buf[1];
} ConsoleLine;

typedef struct { // 0x1e8
	/* 0x000 */ char *hist[64];
	/* 0x100 */ int idx_hist_load;
	/* 0x104 */ int idx_hist;
	/* 0x108 */ gwInputStr command;
	/* 0x190 */ int disp_h;
	/* 0x194 */ int idx_back;
	/* 0x198 */ int idx_log;
	/* 0x19c */ int idx_start;
	/* 0x1a0 */ int idx_cursor;
	/* 0x1a4 */ int log_cursor;
	/* 0x1a8 */ Bool b_disp;
	/* 0x1ac */ Bool b_backlog;
	/* 0x1b0 */ Bool b_serial;
	/* 0x1b4 */ Uint32 color;
	/* 0x1b8 */ GWHWND hWnd;
	/* 0x1bc */ GWHWND hWnd_backlog;
	/* 0x1c0 */ GWHWND hWnd_log;
	/* 0x1c4 */ GWHWND hWnd_com;
	/* 0x1c8 */ gwMenu *menu;
	/* 0x1cc */ gwPrintSize font_size;
	/* 0x1d0 */ Sint32 x;
	/* 0x1d4 */ Sint32 y;
	/* 0x1d8 */ Sint32 w;
	/* 0x1dc */ Sint32 h;
	/* 0x1e0 */ size_t log_size;
	/* 0x1e4 */ int log_line;
} ConsoleCtrl;

typedef enum {
	HEAPINFO_MODE_INFO = 0,
	HEAPINFO_MODE_LIST = 1,
	HEAPINFO_MODE_MAX = 2
} gwHeapInfoMode;

typedef struct { // 0xc
	/* 0x0 */ gwHeapInfoMode mode;
	/* 0x4 */ gwMenu *menu;
	/* 0x8 */ GWHWND hBtnMode;
} gwHeapInfoWork;

typedef struct { // 0xc
	/* 0x0 */ Uint32 attr;
	/* 0x4 */ Sint16 x;
	/* 0x6 */ Sint16 y;
	/* 0x8 */ Sint8 data[2];
} PvrtHeader;

typedef enum {
	GWD_SB_BTN_TYPE_UP = 0,
	GWD_SB_BTN_TYPE_DOWN = 1,
	GWD_SB_BTN_TYPE_LEFT = 2,
	GWD_SB_BTN_TYPE_RIGHT = 3,
	GWD_SB_BTN_TYPE_MAX = 4
} gwSbBtnType;

typedef struct { // 0xe0
	/* 0x00 */ gwWindow base;
	/* 0xa4 */ gwSliderType type;
	/* 0xa8 */ Sint32 flag;
	/* 0xac */ GWHWND hControl;
	/* 0xb0 */ gwVariable vardata;
	/* 0xc4 */ Sint32 x;
	/* 0xc8 */ Sint32 y;
	/* 0xcc */ Sint32 w;
	/* 0xd0 */ Sint32 h;
	/* 0xd4 */ Sint32 ctrl_size;
	/* 0xd8 */ GW_WIN_CALLBACK callback;
	/* 0xdc */ void *param;
} gwSlider;

typedef enum {
	GWD_DUMP_TYPE_BYTE = 0,
	GWD_DUMP_TYPE_WORD = 1,
	GWD_DUMP_TYPE_LONG = 2,
	GWD_DUMP_TYPE_FLOAT = 3,
	GWD_DUMP_TYPE_MAX = 4
} gwDumpType;

typedef enum {
	GWD_MEMBER_TYPE_SINT8 = 0,
	GWD_MEMBER_TYPE_UINT8 = 1,
	GWD_MEMBER_TYPE_SINT16 = 2,
	GWD_MEMBER_TYPE_UINT16 = 3,
	GWD_MEMBER_TYPE_SINT32 = 4,
	GWD_MEMBER_TYPE_UINT32 = 5,
	GWD_MEMBER_TYPE_FLOAT = 6,
	GWD_MEMBER_TYPE_PSINT8 = 7,
	GWD_MEMBER_TYPE_PUINT8 = 8,
	GWD_MEMBER_TYPE_PSINT16 = 9,
	GWD_MEMBER_TYPE_PUINT16 = 10,
	GWD_MEMBER_TYPE_PSINT32 = 11,
	GWD_MEMBER_TYPE_PUINT32 = 12,
	GWD_MEMBER_TYPE_PFLOAT = 13,
	GWD_MEMBER_TYPE_PVOID = 14,
	GWD_MEMBER_TYPE_PCHAR = 15,
	GWD_MEMBER_TYPE_MAX = 16
} gwMemberType;

typedef struct { // 0x30
	/* 0x00 */ Uint32 start_addr;
	/* 0x04 */ Uint32 end_addr;
	/* 0x08 */ gwDumpType type;
	/* 0x0c */ Sint32 ByteOfLine;
	/* 0x10 */ GWHWND hTextField;
	/* 0x14 */ GWHWND hBtnType[4];
	/* 0x24 */ GWHWND hBtnByte;
	/* 0x28 */ GWHWND hDumpFrame;
	/* 0x2c */ GWHWND hChoiceType;
} gwDumpWin;

// warning: multiple differing types with the same name (descriptor not equal)
typedef GW_WIN_CALLBACK GWF_TEXTFIELDFUNC;

typedef struct { // 0x144
	/* 0x000 */ gwWindow base;
	/* 0x0a4 */ Sint32 text_type;
	/* 0x0a8 */ Sint32 flag;
	/* 0x0ac */ Sint32 csr_tmr;
	/* 0x0b0 */ gwInputStr inputstr;
	/* 0x138 */ Sint32 input_stat;
	/* 0x13c */ GWF_TEXTFIELDFUNC callback;
	/* 0x140 */ Sint32 str_ofs;
} gwTextField;

typedef struct { // 0xc
	/* 0x0 */ Float value;
	/* 0x4 */ GWHWND hTextField;
	/* 0x8 */ GWHWND hSlider;
} gwEditData;

typedef struct { // 0x50
	/* 0x00 */ Sint32 type;
	/* 0x04 */ Sint32 flag;
	/* 0x08 */ void (*exit)(/* parameters unknown */);
	/* 0x0c */ gwEditData editdata[4];
	/* 0x3c */ Uint32 color;
	/* 0x40 */ GWHWND hPanel;
	/* 0x44 */ GWHWND hBtnOk;
	/* 0x48 */ GW_WIN_CALLBACK callback;
	/* 0x4c */ void (*userExit)(/* parameters unknown */);
} gwColorEditWin;

typedef enum {
	GWD_PALWIN_MODE_COLOR = 0,
	GWD_PALWIN_MODE_DUMP = 1,
	GWD_PALWIN_MODE_MAX = 2
} gwPaletteWinMode;

typedef struct { // 0x20
	/* 0x00 */ gwPaletteWinMode mode;
	/* 0x04 */ Uint16 *pal_data;
	/* 0x08 */ Uint32 pal_mode;
	/* 0x0c */ Sint32 bank;
	/* 0x10 */ Bool trans_flag;
	/* 0x14 */ GWHWND hFrame;
	/* 0x18 */ GWHWND hBtnTrans;
	/* 0x1c */ GWHWND hBtnDump;
} gwPaletteWin;

typedef struct { // 0xb0
	/* 0x00 */ Sint32 x;
	/* 0x04 */ Sint32 y;
	/* 0x08 */ Sint32 w;
	/* 0x0c */ Sint32 h;
	/* 0x10 */ GWHWND hWnd;
	/* 0x14 */ GWHWND hWnd_view;
	/* 0x18 */ GWHWND hWnd_button_backcolor;
	/* 0x1c */ GWHWND hWnd_button_idx_inc;
	/* 0x20 */ GWHWND hWnd_button_idx_dec;
	/* 0x24 */ GWHWND hWnd_button_rate_inc;
	/* 0x28 */ GWHWND hWnd_button_rate_dec;
	/* 0x2c */ GWHWND hWnd_button_clamp;
	/* 0x30 */ GWHWND hWnd_button_flip_v;
	/* 0x34 */ GWHWND hWnd_button_flip_u;
	/* 0x38 */ GWHWND hWnd_button_trans;
	/* 0x3c */ GWHWND hWnd_button_ss;
	/* 0x40 */ GWHWND hWnd_button_bi;
	/* 0x44 */ GWHWND hWnd_button_init;
	/* 0x48 */ Sint32 print_rate_x;
	/* 0x4c */ Sint32 print_rate_y;
	/* 0x50 */ Sint32 print_idx_x;
	/* 0x54 */ Sint32 print_idx_y;
	/* 0x58 */ Sint32 print_status_y;
	/* 0x5c */ Sint32 select;
	/* 0x60 */ Sint32 select_max;
	/* 0x64 */ Uint32 gindex;
	/* 0x68 */ Float nX;
	/* 0x6c */ Float nY;
	/* 0x70 */ Float nWidth;
	/* 0x74 */ Float nHeight;
	/* 0x78 */ Uint32 view_backcolor;
	/* 0x7c */ int mode_flip;
	/* 0x80 */ Bool b_clamp;
	/* 0x84 */ Bool b_flip_u;
	/* 0x88 */ Bool b_flip_v;
	/* 0x8c */ Bool b_trans;
	/* 0x90 */ Bool b_ss;
	/* 0x94 */ Bool b_bi;
	/* 0x98 */ int tex_rate_idx;
	/* 0x9c */ Float tex_rate;
	/* 0xa0 */ Float tex_x;
	/* 0xa4 */ Float tex_y;
	/* 0xa8 */ Float tex_w;
	/* 0xac */ Float tex_h;
} TexViewCtrl;

typedef enum {
	EDIT_MODE_SELECT = 0,
	EDIT_MODE_MAX = 1
} EDIT_MODE;

typedef struct { // 0xd8
	/* 0x00 */ Sint32 x;
	/* 0x04 */ Sint32 y;
	/* 0x08 */ Sint32 w;
	/* 0x0c */ Sint32 h;
	/* 0x10 */ GWHWND hWnd;
	/* 0x14 */ GWHWND hWnd_variable;
	/* 0x18 */ GWHWND hWnd_scrlbar;
	/* 0x1c */ GWHWND hWnd_button_trans;
	/* 0x20 */ GWHWND hWnd_button_dec;
	/* 0x24 */ GWHWND hWnd_button_inc;
	/* 0x28 */ GWHWND hWnd_button_parent;
	/* 0x2c */ void (*destructor)(/* parameters unknown */);
	/* 0x30 */ char group_name[128];
	/* 0xb0 */ gwVarEditList **root;
	/* 0xb4 */ gwVarEditList *list;
	/* 0xb8 */ gwVarEditList *list_select;
	/* 0xbc */ int list_num;
	/* 0xc0 */ int idx_disp;
	/* 0xc4 */ int idx_cursor;
	/* 0xc8 */ int idx_select;
	/* 0xcc */ int disp_max;
	/* 0xd0 */ EDIT_MODE edit_mode;
	/* 0xd4 */ Bool b_disp_trans;
} GWS_VAREDIT_WIN_CTRL;

typedef struct { // 0x1c
	/* 0x00 */ int port;
	/* 0x04 */ int id;
	/* 0x08 */ int status;
	/* 0x0c */ int press_flag;
	/* 0x10 */ GWHWND btn_port_select[2];
	/* 0x18 */ GWHWND btn_press_mode;
} gwuPeriInfo;

typedef enum {
	TEXVIEWER_MODE_SLEEP = 0,
	TEXVIEWER_MODE_DISP = 1,
	TEXVIEWER_MODE_MAX = 2
} TexViewerMode;

typedef struct { // 0x30
	/* 0x00 */ ulVector2 tex_pos;
	/* 0x08 */ ulTexture *textures;
	/* 0x0c */ int nbTextures;
	/* 0x10 */ int index;
	/* 0x14 */ int mode;
	/* 0x18 */ int port;
	/* 0x1c */ float scale;
	/* 0x20 */ int scale_level;
	/* 0x24 */ int filter_mode;
	/* 0x28 */ int clamp_mode;
	/* 0x2c */ int translucent;
} TexViewerTask;

// warning: multiple differing types with the same name (name not equal)
typedef struct { // 0x5f0
	/* 0x000 */ ulMatrix worldTransform;
	/* 0x040 */ ulMatrix viewTransform;
	/* 0x080 */ ulMatrix projectTransform;
	/* 0x0c0 */ ulMatrix vwTransform;
	/* 0x100 */ ulMatrix pvTransform;
	/* 0x140 */ ulMatrix pvwTransform;
	/* 0x180 */ ulMatrix dirLightRotMatrix;
	/* 0x1c0 */ ulMatrix dirLightColMatrix;
	/* 0x200 */ ulMatrix pntLightPosMatrix;
	/* 0x240 */ ulMatrix pntLightColMatrix;
	/* 0x280 */ ulMatrix textureMatrix;
	/* 0x2c0 */ ulMatrix view_clip_matrix;
	/* 0x300 */ ulMatrix local_clip_matrix;
	/* 0x340 */ ulMatrix clip_screen_matrix;
	/* 0x380 */ ulVector4 clipVtxMin;
	/* 0x390 */ ulVector4 clipVtxMax;
	/* 0x3a0 */ ulVector4 scrnVtxMin;
	/* 0x3b0 */ ulVector4 scrnVtxMax;
	/* 0x3c0 */ ulColor ambLightColor;
	/* 0x3d0 */ ulColor matDiffuse;
	/* 0x3e0 */ ulColor matAmbient;
	/* 0x3f0 */ ulColor matSpecular;
	/* 0x400 */ ulData128 primFlag;
	/* 0x410 */ ulColor nonTexColorRatio;
	/* 0x420 */ ulColor texColorRatio;
	/* 0x430 */ ulData128 nonTexGifTag;
	/* 0x440 */ ulData128 texGifTag;
	/* 0x450 */ ulData128 nonTexStripGifTag;
	/* 0x460 */ ulData128 texStripGifTag;
	/* 0x470 */ ulVector4 gsCoordScale;
	/* 0x480 */ ulVector4 gsCoordOffset;
	/* 0x490 */ ulVector4 clipCoordScale;
	/* 0x4a0 */ ulVector4 clipCoordOffset;
	/* 0x4b0 */ ulData128 primGifTag;
	/* 0x4c0 */ ulData128 vtxGifTag;
	/* 0x4d0 */ ulData128 paramRatio0;
	/* 0x4e0 */ ulData128 paramRatio1;
	/* 0x4f0 */ ulVector4 envmapScale;
	/* 0x500 */ ulVector4 envmapOffset;
	/* 0x510 */ ulVector4 shadowTexScale;
	/* 0x520 */ ulVector4 shadowTexOffset;
	/* 0x530 */ ulVector4 simpleLightVec;
	/* 0x540 */ ulVector4 simpleLightCol;
	/* 0x550 */ ulVector4 colorRatio;
	/* 0x560 */ ulVector4 fogParam;
	/* 0x570 */ ulData128 rezWireParam;
	/* 0x580 */ ulData128 rezWireColor;
	/* 0x590 */ ulMatrix to_screen_matrix;
	/* 0x5d0 */ ulVector4 scrn2dClipScale;
	/* 0x5e0 */ ulVector4 scrn2dClipOffset;
} ulGeoVuParam;

typedef enum {
	CTRL_CODE_RESULT_NOTHING = 0,
	CTRL_CODE_RESULT_OPEN = 1,
	CTRL_CODE_RESULT_CLOSE = 2
} CtrlCodeResult;

typedef enum {
	CTRL_CODE_TYPE_NOTHING = 0,
	CTRL_CODE_TYPE_COL = 1,
	CTRL_CODE_TYPE_ITALIC_RATE = 2,
	CTRL_CODE_TYPE_BOLD_SIZE = 3,
	CTRL_CODE_TYPE_FRAME_COL = 4,
	CTRL_CODE_TYPE_FRAME_SIZE = 5,
	CTRL_CODE_TYPE_SHADE_COL = 6,
	CTRL_CODE_TYPE_SHADE_SIZE = 7
} CtrlCodeType;

struct ctrl_code_stack { // 0x10
	/* 0x0 */ Bool flag;
	/* 0x4 */ CtrlCodeType type;
	/* 0x8 */ Uint32 param;
	/* 0xc */ ctrl_code_stack *pPrev;
};

typedef ctrl_code_stack CtrlCodeStack;

typedef struct { // 0x4
	/* 0x0 */ Uint16 code;
	/* 0x2 */ Uint16 use_num;
} ZenTexEntryList;

struct hash_list { // 0x8
	/* 0x0 */ Uint16 code;
	/* 0x2 */ Uint16 index;
	/* 0x4 */ hash_list *pNext;
};

typedef hash_list ZenHashList;

typedef struct { // 0x2
	/* 0x0 */ Uint8 left;
	/* 0x1 */ Uint8 width;
} ProData;

typedef enum {
	UL_MC_SEQ_NONE = 0,
	UL_MC_SEQ_LOAD_FILE = 110,
	UL_MC_SEQ_LOAD_FILE_EX = 111,
	UL_MC_SEQ_SAVE_FILE = 112,
	UL_MC_SEQ_SAVE_FILE_EX = 113,
	UL_MC_SEQ_SET_FILE_ATTR = 114,
	UL_MC_SEQ_CONNECTION_SERVER = 115,
	UL_MC_SEQ_INIT_APPLICATION = 116,
	UL_MC_SEQ_MAX = 117
} ulMcSequence;

typedef enum {
	UL_MC_CALLBACK_FLAG_DC = 0,
	UL_MC_CALLBACK_FLAG_PS2 = 1
} ulMcCallbackFlag;

typedef union { // 0x10
	/* 0x0 */ struct { // 0x10
		/* 0x0 */ Uint16 nextjoint;
		/* 0x2 */ Uint16 keynum;
		/* 0x4 */ Float keysearch;
		/* 0x8 */ Float reserved0;
		/* 0xc */ Float reserved1;
	} header;
	/* 0x0 */ struct { // 0x10
		/* 0x0 */ Uint16 framethis;
		/* 0x2 */ Uint16 framenext;
		/* 0x4 */ Float x;
		/* 0x8 */ Float y;
		/* 0xc */ Float z;
	} data_ts;
	/* 0x0 */ struct { // 0x10
		/* 0x0 */ Uint16 framethis;
		/* 0x2 */ Uint16 framenext;
		/* 0x4 */ Sint32 q01;
		/* 0x8 */ Sint32 q12;
		/* 0xc */ Sint32 q23;
	} data_q;
} mtnMotionUnit;

typedef struct { // 0xc
	/* 0x0 */ Uint32 col;
	/* 0x4 */ Float y;
	/* 0x8 */ Float x;
} CS_BUF;

typedef struct { // 0x40
	/* 0x00 */ ulVector4 vertex;
	/* 0x10 */ ulVector4 clip;
	/* 0x20 */ ulColor color;
	/* 0x30 */ ulVector4 uv;
} ulScissorVertex;

typedef struct { // 0x490
	/* 0x000 */ ulScissorVertex interp_buf[16];
	/* 0x400 */ ulScissorVertex *node_ptr_buf0[16];
	/* 0x440 */ ulScissorVertex *node_ptr_buf1[16];
	/* 0x480 */ ulScissorVertex **cur_node_ptr_buf;
	/* 0x484 */ int node_cnt;
	/* 0x488 */ int interp_cnt;
} ulScissorNodeInfo;

typedef enum {
	UL_MPRG_POLYGON2D = 0,
	UL_MPRG_TEXTURE2D = 1,
	UL_MPRG_SPRITE = 2,
	UL_MPRG_POLYGON3D = 3,
	UL_MPRG_NJ_SIMPLE2 = 4,
	UL_MPRG_NJ_SIMPLE_STRIP = 5,
	UL_MPRG_DRAW_PRIM2D = 6,
	UL_MPRG_NJ_SHADOWTEX_DRAW_NOCLIP = 7,
	UL_MPRG_NJ_SIMPLE_DB = 8,
	UL_MPRG_REZ_WIRE_MODEL = 9,
	UL_MPRG_REZ_WIRE2D = 10,
	UL_MPRG_REZ_WIRE3D = 11,
	UL_MPRG_NJ_SIMPLE_CLIP = 12,
	UL_MPRG_NJ_SIMPLE_DIRECT2 = 13,
	UL_MPRG_REZ_WIRE_MODEL_NOCLIP = 14,
	UL_MPRG_REZ_WIRE_MODEL_CLIP = 15,
	UL_MPRG_REZ_WIRE3D_CLIP = 16,
	UL_MPRG_NJ_COMPILE_DB_NOCLIP = 17,
	UL_MPRG_NUM = 18
} ulMprgIndex;

typedef void* (*_NJD_COLORMODE_)(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ Uint32 nColor;
	/* 0x4 */ _NJD_COLORMODE_ pFunc;
} NJS_COLOREX;

typedef struct { // 0xac
	/* 0x00 */ Uint32 _max_pass_;
	/* 0x04 */ Uint32 _pass_count_;
	/* 0x08 */ Sint32 *_current_vtx_;
	/* 0x0c */ Sint32 _vertex_buffer_[8][5];
} _NJS_MULTI_PASS_;

typedef struct { // 0x30
	/* 0x00 */ Uint32 _PCW;
	/* 0x04 */ Uint32 _ISP;
	/* 0x08 */ Uint32 _TSP;
	/* 0x0c */ Uint32 _TCW;
	/* 0x10 */ Uint32 _TSP2;
	/* 0x14 */ Uint32 _TCW2;
	/* 0x18 */ Uint32 _COL;
	/* 0x1c */ Uint32 _TEX;
	/* 0x20 */ Uint32 _BANK;
	/* 0x24 */ Uint32 _ISPM;
	/* 0x28 */ NJS_TEXLIST *_TEXLIST;
	/* 0x2c */ Uint32 _PAD1;
} NJS_CONTEXT;

typedef struct { // 0x10
	/* 0x0 */ Sint32 nNum;
	/* 0x4 */ void *pVertex;
	/* 0x8 */ void *pVbuf;
	/* 0xc */ void *SQ;
} NJS_CNK_INTENSITY_VERTEX;

typedef struct { // 0x24
	/* 0x00 */ Float lx;
	/* 0x04 */ Float ly;
	/* 0x08 */ Float lz;
	/* 0x0c */ Float diff;
	/* 0x10 */ Float ambi;
	/* 0x14 */ Sint32 n;
	/* 0x18 */ void *vertex;
	/* 0x1c */ void *vbuf;
	/* 0x20 */ void *sq;
} NJS_CNK_EASY_VERTEX;

typedef struct { // 0x24
	/* 0x00 */ Float lx;
	/* 0x04 */ Float ly;
	/* 0x08 */ Float lz;
	/* 0x0c */ Float diff;
	/* 0x10 */ Float ambi;
	/* 0x14 */ Sint32 n;
	/* 0x18 */ void *vertex;
	/* 0x1c */ void *vbuf;
	/* 0x20 */ void *sq;
} NJS_CNK_SIMPLE_VERTEX;

typedef Int (*NJS_CNK_VFUNC_S)(/* parameters unknown */);
typedef Float* (*NJS_CNK_PFUNC_S)(/* parameters unknown */);
typedef Float* (*NJS_CNK_TFUNC_S)(/* parameters unknown */);
typedef Float* (*NJS_CNK_PFUNC_S_D8)(/* parameters unknown */);
typedef Float* (*NJS_CNK_TFUNC_S_D8)(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ NJS_CNK_VFUNC_S vfunc;
	/* 0x4 */ Uint32 mode;
} NJS_CNK_VFUNC_TABLE_S;

typedef struct { // 0x20
	/* 0x00 */ Uint32 polymode;
	/* 0x04 */ Uint32 polyd8mode;
	/* 0x08 */ NJS_CNK_PFUNC_S polyfunc;
	/* 0x0c */ NJS_CNK_PFUNC_S_D8 polyd8func;
	/* 0x10 */ Uint32 texmode;
	/* 0x14 */ Uint32 texd8mode;
	/* 0x18 */ NJS_CNK_TFUNC_S texfunc;
	/* 0x1c */ NJS_CNK_TFUNC_S_D8 texd8func;
} NJS_CNK_TABLE_S;

typedef Float* (*NJS_CNK_PFUNC_S_2P)(/* parameters unknown */);
typedef Float* (*NJS_CNK_TFUNC_S_2P)(/* parameters unknown */);

typedef struct { // 0x28
	/* 0x00 */ Uint32 polymode;
	/* 0x04 */ Uint32 polyd8mode;
	/* 0x08 */ NJS_CNK_PFUNC_S_2P polyfunc;
	/* 0x0c */ NJS_CNK_PFUNC_S_2P polyd8func;
	/* 0x10 */ Uint32 texmode;
	/* 0x14 */ Uint32 texd8mode;
	/* 0x18 */ NJS_CNK_TFUNC_S_2P texfunc;
	/* 0x1c */ NJS_CNK_TFUNC_S_2P texd8func;
	/* 0x20 */ NJS_CNK_TFUNC_S_2P texfunc2p;
	/* 0x24 */ NJS_CNK_TFUNC_S_2P texd8func2p;
} NJS_CNK_TABLE_S_2P;

typedef struct { // 0x10
	/* 0x0 */ Sint32 n;
	/* 0x4 */ void *vertex;
	/* 0x8 */ void *vbuf;
	/* 0xc */ void *sq;
} NJS_CNK_EASYMULTI_VERTEX;

typedef struct { // 0x20
	/* 0x00 */ Sint32 n;
	/* 0x04 */ void *vertex;
	/* 0x08 */ void *vbuf;
	/* 0x0c */ void *sq;
	/* 0x10 */ Float xad;
	/* 0x14 */ Float yad;
	/* 0x18 */ Float cx;
	/* 0x1c */ Float cy;
} NJS_CNK_MOD_VERTEX;

typedef struct { // 0x24
	/* 0x00 */ Float lx;
	/* 0x04 */ Float ly;
	/* 0x08 */ Float lz;
	/* 0x0c */ Float diff;
	/* 0x10 */ Float ambi;
	/* 0x14 */ Sint32 n;
	/* 0x18 */ void *vertex;
	/* 0x1c */ void *vbuf;
	/* 0x20 */ void *sq;
} NJS_CNK_TOON_VERTEX;

typedef struct { // 0x40
	/* 0x00 */ Uint32 GP;
	/* 0x04 */ Uint32 mode;
	/* 0x08 */ Float sg;
	/* 0x0c */ Float sb;
	/* 0x10 */ Float sa;
	/* 0x14 */ Float sr;
	/* 0x18 */ Float dg;
	/* 0x1c */ Float db;
	/* 0x20 */ Float da;
	/* 0x24 */ Float dr;
	/* 0x28 */ Uint32 TSPPARAM;
	/* 0x2c */ Uint32 TEXTUREADDR;
	/* 0x30 */ Uint32 GLOBALPARAM;
	/* 0x34 */ Uint32 ISPPARAM;
	/* 0x38 */ Uint32 num;
	/* 0x3c */ Uint32 texid;
} NJS_DIRECT_GLOBAL;

typedef struct { // 0x20
	/* 0x00 */ Uint32 GP;
	/* 0x04 */ Uint32 mode;
	/* 0x08 */ Uint32 TSPPARAM;
	/* 0x0c */ Uint32 TEXTUREADDR;
	/* 0x10 */ Uint32 GLOBALPARAM;
	/* 0x14 */ Uint32 ISPPARAM;
	/* 0x18 */ Uint32 num;
	/* 0x1c */ Uint32 texid;
} NJS_DIRECT_GLOBAL_D8;

typedef struct { // 0x20
	/* 0x00 */ Float px;
	/* 0x04 */ Float py;
	/* 0x08 */ Float pz;
	/* 0x0c */ Float nz;
	/* 0x10 */ Float nx;
	/* 0x14 */ Float ny;
	/* 0x18 */ Uint32 uv;
	/* 0x1c */ Uint32 param;
} NJS_DIRECT_VERTEX;

typedef struct { // 0x20
	/* 0x00 */ Float px;
	/* 0x04 */ Float py;
	/* 0x08 */ Float pz;
	/* 0x0c */ Float one;
	/* 0x10 */ Uint32 base;
	/* 0x14 */ Uint32 off;
	/* 0x18 */ Uint32 param;
	/* 0x1c */ Uint32 uv;
} NJS_DIRECT_VERTEX_D8;

typedef struct { // 0x20
	/* 0x00 */ Float px;
	/* 0x04 */ Float py;
	/* 0x08 */ Float pz;
	/* 0x0c */ Float nx;
	/* 0x10 */ Float ny;
	/* 0x14 */ Float nz;
	/* 0x18 */ Uint32 col;
	/* 0x1c */ Uint32 dmy;
} NJS_DIRECT_BUF;

struct tag_bitmap_file_header { // 0x10
	/* 0x0 */ Uint8 bfType[2];
	/* 0x4 */ Uint32 bfSize;
	/* 0x8 */ Uint16 bfReserved1;
	/* 0xa */ Uint16 bfReserved2;
	/* 0xc */ Uint32 bfOffBits;
};

typedef tag_bitmap_file_header NJS_BITMAP_FILE_HEADER;

struct tag_bmp_info_header { // 0x28
	/* 0x00 */ Uint32 biSize;
	/* 0x04 */ Sint32 biWidth;
	/* 0x08 */ Sint32 biHeight;
	/* 0x0c */ Uint16 biPlanes;
	/* 0x0e */ Uint16 biBitCount;
	/* 0x10 */ Uint32 biCompression;
	/* 0x14 */ Uint32 biSizeImage;
	/* 0x18 */ Sint32 biXPelsPerMeter;
	/* 0x1c */ Sint32 biYPelsPerMeter;
	/* 0x20 */ Uint32 biClrUsed;
	/* 0x24 */ Uint32 biClrImportant;
};

typedef tag_bmp_info_header NJS_BITMAP_INFO_HEADER;

struct tag_bmp_palette { // 0x4
	/* 0x0 */ Uint8 b;
	/* 0x1 */ Uint8 g;
	/* 0x2 */ Uint8 r;
	/* 0x3 */ Uint8 a;
};

typedef tag_bmp_palette NJS_BITMAP_PALETTE;

struct tag_NJS_PALETTE_HEADR { // 0xc
	/* 0x0 */ Sint32 nextptr;
	/* 0x4 */ Uint16 mode;
	/* 0x6 */ Sint16 bank;
	/* 0x8 */ Sint16 entryoffset;
	/* 0xa */ Sint16 entrycount;
};

typedef tag_NJS_PALETTE_HEADR NJS_PALETTE_HEADR;
typedef void NJF_MOTION_INT_F3_FUNC(/* parameters unknown */);
typedef void NJF_MOTION_INT_A3_FUNC(/* parameters unknown */);
typedef void NJF_MOTION_INT_A1_FUNC(/* parameters unknown */);

typedef struct { // 0x40
	/* 0x00 */ void *mdata;
	/* 0x04 */ int mdata_nbkeys_ofs;
	/* 0x08 */ int mdata_size;
	/* 0x0c */ void **key;
	/* 0x10 */ Uint32 *nbkeys;
	/* 0x14 */ Float frame;
	/* 0x18 */ Uint32 nbframes;
	/* 0x1c */ Uint32 cnt;
	/* 0x20 */ Uint32 type;
	/* 0x24 */ NJF_MOTION_INT_F3_FUNC *int_f3_func_p;
	/* 0x28 */ NJF_MOTION_INT_A3_FUNC *int_a3_func_p;
	/* 0x2c */ NJF_MOTION_INT_A1_FUNC *int_a1_func_p;
	/* 0x30 */ int (*get_pos_func_p)(/* parameters unknown */);
	/* 0x34 */ int (*get_ang_func_p)(/* parameters unknown */);
	/* 0x38 */ int (*get_scl_func_p)(/* parameters unknown */);
	/* 0x3c */ int (*get_qua_func_p)(/* parameters unknown */);
} NJS_CUR_MOTION_INFO;

typedef struct { // 0x1c
	/* 0x00 */ NJS_MDATA1 *mdata;
	/* 0x04 */ Float frame;
	/* 0x08 */ Uint32 nbframes;
	/* 0x0c */ Uint32 cnt;
	/* 0x10 */ NJS_CSHAPEDATA *group;
	/* 0x14 */ Uint32 checkID;
	/* 0x18 */ Uint32 KeyGroupID;
} NJS_CUR_SHAPE_INFO;

typedef struct { // 0x10
	/* 0x0 */ Uint32 checkID;
	/* 0x4 */ Uint32 ShapeID1;
	/* 0x8 */ Uint32 ShapeID2;
	/* 0xc */ Float rate;
} NJS_SHAPE_GROUP_COEFF;

typedef struct { // 0x10
	/* 0x0 */ Float *pos_buf_ptr;
	/* 0x4 */ Float *scl_buf_ptr;
	/* 0x8 */ Angle *ang_buf_ptr;
	/* 0xc */ Sint32 (*draw_func_p)(/* parameters unknown */);
} NJS_CUR_OBJMOTION_INFO;

typedef struct { // 0x4
	/* 0x0 */ Float rate;
} NJS_CUR_MOTIONLINK_INFO;

typedef struct { // 0x20
	/* 0x00 */ Float x;
	/* 0x04 */ Float y;
	/* 0x08 */ Float z;
	/* 0x0c */ Float u;
	/* 0x10 */ Float v;
	/* 0x14 */ Uint32 bcol;
	/* 0x18 */ Uint32 ocol;
	/* 0x1c */ Uint32 pad;
} NJS_MESH_VTX;

typedef struct { // 0x40
	/* 0x00 */ ulVector4 pos;
	/* 0x10 */ ulVector4 dir;
	/* 0x20 */ ulColor color;
	/* 0x30 */ int type;
	/* 0x34 */ int flag;
	/* 0x38 */ float nrange;
	/* 0x3c */ float frange;
} njLight;

typedef struct { // 0x8
	/* 0x0 */ float scrn_ratio_w;
	/* 0x4 */ float scrn_ratio_h;
} njGlobalWork;

// warning: multiple differing types with the same name (descriptor not equal)
typedef Float NJS_MATRIX[16];

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0xc
	/* 0x0 */ Float x;
	/* 0x4 */ Float y;
	/* 0x8 */ Float z;
} NJS_POINT3;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0xc
	/* 0x0 */ Float x;
	/* 0x4 */ Float y;
	/* 0x8 */ Float z;
} NJS_VECTOR;

typedef struct { // 0x80
	/* 0x00 */ psQWData dmaTag0;
	/* 0x10 */ psQWData gifTag0;
	/* 0x20 */ psQWData bitbltbuf;
	/* 0x30 */ psQWData trxpos;
	/* 0x40 */ psQWData trxreg;
	/* 0x50 */ psQWData trxdir;
	/* 0x60 */ psQWData gifTag1;
	/* 0x70 */ psQWData dmaTag1;
} psGxTexLoadImageEnv;

typedef struct { // 0x24
	/* 0x00 */ int curHeapNo;
	/* 0x04 */ ulHeapHandle heapStack[8];
} ulHeapSysWork;

typedef struct { // 0x20
	/* 0x00 */ ulTexture *texBuf;
	/* 0x04 */ ulTexture *texBufEnd;
	/* 0x08 */ ulTexture *texCur;
	/* 0x0c */ int maxEntries;
	/* 0x10 */ int nbEntries;
	/* 0x14 */ ulTexture **vacantTexPtrBuf;
	/* 0x18 */ ulTexture **occupyTexPtrBuf;
	/* 0x1c */ ulTexture **texPtrBuf;
} ulTexSystem;

typedef struct { // 0x10
	/* 0x0 */ unsigned int data;
	/* 0x4 */ unsigned int addr;
	/* 0x8 */ unsigned int size;
	/* 0xc */ unsigned int mode;
} sceSifDmaData;

enum {
	UL_IOP_DEVICE_CDROM = 0,
	UL_IOP_DEVICE_HOST = 1,
	UL_IOP_DEVICE_HD = 2,
	UL_IOP_DEVICE_USBLAN = 3,
	UL_IOP_DEVICE_NUM = 4
};

typedef struct { // 0x89c
	/* 0x000 */ Uint32 main_count;
	/* 0x004 */ Uint8 drv_init_flag;
	/* 0x005 */ Uint8 debug_flag;
	/* 0x008 */ void (*error_user_func)(/* parameters unknown */);
	/* 0x00c */ Uint8 device;
	/* 0x010 */ struct { // 0x388
		/* 0x010 */ Uint8 init_flag;
		/* 0x014 */ Sint32 load_num;
		/* 0x018 */ char path[256];
		/* 0x118 */ struct { // 0x14
			/* 0x118 */ Sint32 flag;
			/* 0x11c */ char name[16];
		} module[32];
	} module;
	/* 0x398 */ struct { // 0x504
		/* 0x398 */ Sint8 cur_sif;
		/* 0x39c */ Uint32 *sifdma_id[64];
		/* 0x49c */ sceSifDmaData sifdma[64];
	} dma;
} ULIOP_SYS;

typedef struct { // 0x40
	/* 0x00 */ void *flag_adr;
	/* 0x04 */ void *map_adr;
	/* 0x08 */ void *hcmd_adr;
	/* 0x0c */ void *wave_adr;
	/* 0x10 */ void *drv_sts_adr;
	/* 0x14 */ Uint8 dummy1[4];
	/* 0x18 */ Uint8 dummy2[32];
	/* 0x38 */ Sint32 version;
	/* 0x3c */ Sint32 flag;
} UL_EE2IOP_DMA_TBL;

typedef struct { // 0x40
	/* 0x00 */ void *flag_adr;
	/* 0x04 */ void *map_adr;
	/* 0x08 */ void *drv_sts_adr;
	/* 0x0c */ void *print_adr;
	/* 0x10 */ Uint32 hcmd_buf_size;
	/* 0x14 */ Uint32 spu_tmp_buf_size;
	/* 0x18 */ Uint32 iop_data_buf_size;
	/* 0x1c */ Uint8 dummy1[4];
	/* 0x20 */ Uint8 dummy2[8];
	/* 0x28 */ Uint8 dummy3[16];
	/* 0x38 */ Sint32 version;
	/* 0x3c */ Sint32 flag;
} UL_IOP2EE_DMA_TBL;

typedef struct { // 0x40
	/* 0x00 */ Uint8 dummy[12];
	/* 0x0c */ Uint8 dummy2[48];
	/* 0x3c */ Sint32 flag;
} UL_MAP_FLAG;

typedef struct { // 0x40
	/* 0x00 */ Uint8 dummy[12];
	/* 0x0c */ Uint8 dummy2[48];
	/* 0x3c */ Sint32 flag;
} UL_WAVE_FLAG;

typedef struct { // 0x40
	/* 0x00 */ Sint32 exec_cmd_num;
	/* 0x04 */ Sint32 list_cmd_num;
	/* 0x08 */ Uint8 dummy[4];
	/* 0x0c */ Uint8 dummy2[48];
	/* 0x3c */ Sint32 flag;
} UL_HCMD_FLAG;

typedef struct { // 0x40
	/* 0x00 */ void *spu_adr;
	/* 0x04 */ Uint32 data_size;
	/* 0x08 */ Uint32 offset;
	/* 0x0c */ Uint32 total_size;
	/* 0x10 */ Uint8 dummy2[48];
} UL_WAVE_DMA_HEADER;

typedef struct { // 0x8
	/* 0x0 */ void *adr;
	/* 0x4 */ Uint32 size;
} UL_DATA_INFO;

typedef struct { // 0xc
	/* 0x0 */ UL_DATA_INFO iop;
	/* 0x8 */ Uint32 flag;
} UL_MAP_MSEQ_BANK;

typedef struct { // 0xc8
	/* 0x00 */ Uint32 mark;
	/* 0x04 */ Uint32 size;
	/* 0x08 */ UL_MAP_MSEQ_BANK bank[16];
} UL_MAP_MSEQ;

typedef struct { // 0x14
	/* 0x00 */ UL_DATA_INFO iop;
	/* 0x08 */ UL_DATA_INFO spu;
	/* 0x10 */ Uint32 flag;
} UL_MAP_MPRG_BANK;

typedef struct { // 0x148
	/* 0x000 */ Uint32 mark;
	/* 0x004 */ Uint32 size;
	/* 0x008 */ UL_MAP_MPRG_BANK bank[16];
} UL_MAP_MPRG;

typedef struct { // 0x14
	/* 0x00 */ UL_DATA_INFO iop;
	/* 0x08 */ UL_DATA_INFO spu;
	/* 0x10 */ Uint32 flag;
} UL_MAP_OSHT_BANK;

typedef struct { // 0x148
	/* 0x000 */ Uint32 mark;
	/* 0x004 */ Uint32 size;
	/* 0x008 */ UL_MAP_OSHT_BANK bank[16];
} UL_MAP_OSHT;

typedef struct { // 0xc
	/* 0x0 */ UL_DATA_INFO iop;
	/* 0x8 */ Uint32 flag;
} UL_MAP_FXPM_BANK;

typedef struct { // 0xc8
	/* 0x00 */ Uint32 mark;
	/* 0x04 */ Uint32 size;
	/* 0x08 */ UL_MAP_FXPM_BANK bank[16];
} UL_MAP_FXPM;

typedef struct { // 0xc
	/* 0x0 */ char core;
	/* 0x4 */ UL_DATA_INFO spu;
} UL_MAP_FXWK_BANK;

typedef struct { // 0x20
	/* 0x00 */ Uint32 mark;
	/* 0x04 */ Uint32 size;
	/* 0x08 */ UL_MAP_FXWK_BANK bank[2];
} UL_MAP_FXWK;

typedef struct { // 0x45c
	/* 0x000 */ Uint32 mark;
	/* 0x004 */ Uint32 size;
	/* 0x008 */ Uint32 mseq_offset;
	/* 0x00c */ Uint32 mprg_offset;
	/* 0x010 */ Uint32 osht_offset;
	/* 0x014 */ Uint32 fxpm_offset;
	/* 0x018 */ Uint32 fxwk_offset;
	/* 0x01c */ UL_MAP_MSEQ mseq;
	/* 0x0e4 */ UL_MAP_MPRG mprg;
	/* 0x22c */ UL_MAP_OSHT osht;
	/* 0x374 */ UL_MAP_FXPM fxpm;
	/* 0x43c */ UL_MAP_FXWK fxwk;
} UL_MAP;

typedef struct { // 0x82
	/* 0x00 */ Uint8 size;
	/* 0x01 */ Uint8 type;
	/* 0x02 */ Uint8 dummy[2];
	/* 0x04 */ Uint8 data[126];
} UL_HCMD;

typedef struct { // 0x94
	/* 0x00 */ Uint32 mark;
	/* 0x04 */ Uint32 size;
	/* 0x08 */ Uint32 num;
	/* 0x0c */ Uint32 id;
	/* 0x10 */ UL_HCMD hcmd[1];
} UL_HCMD_LIST;

typedef struct { // 0x1a8
	/* 0x000 */ UL_SND_DRIVER_STATUS pub;
} UL_LIB_DRIVER_STATUS;

typedef struct { // 0x14
	/* 0x00 */ Uint32 mark;
	/* 0x04 */ Uint32 size;
	/* 0x08 */ Uint32 frame;
	/* 0x0c */ Sint16 locate[2];
	/* 0x10 */ char string[1];
} UL_PRINT_REQ;

typedef struct { // 0x28
	/* 0x00 */ sceSifClientData client;
} UL_RPC_STS;

typedef struct { // 0x14
	/* 0x00 */ Sint8 cue;
	/* 0x01 */ Sint8 flag;
	/* 0x02 */ Sint8 mode;
	/* 0x03 */ Sint8 map;
	/* 0x04 */ Sint8 data_type;
	/* 0x05 */ Sint8 bank_type;
	/* 0x06 */ Sint8 bank_no;
	/* 0x08 */ Sint32 data_size;
	/* 0x0c */ Sint32 sif_dma_id;
	/* 0x10 */ void *data_adr;
} UL_MEMBLK;

enum {
	UL_SND_MEMBLK_QUE_FREE = -1,
	UL_SND_MEMBLK_QUE_CREATED = -2,
	UL_SND_MEMBLK_QUE_PARA_SET = -3,
	UL_SND_MEMBLK_QUE_MAP = -4,
	UL_SND_MEMBLK_QUE_END = -5,
	UL_SND_MEMBLK_QUE_EXEC = 0
};

enum {
	UL_SND_MEMBLK_MAP_PRE = 0,
	UL_SND_MEMBLK_MAP_TRANS = 1,
	UL_SND_MEMBLK_MAP_END = 2
};

enum {
	UL_SND_MEMBLK_DATA_EMPTY = 0,
	UL_SND_MEMBLK_DATA_MULTI = 1,
	UL_SND_MEMBLK_DATA_BANK = 2,
	UL_SND_MEMBLK_DATA_IOP = 3,
	UL_SND_MEMBLK_DATA_SPU = 4
};

typedef struct { // 0x18
	/* 0x00 */ Sint8 send;
	/* 0x04 */ Sint32 data_size;
	/* 0x08 */ Sint32 send_cur;
	/* 0x0c */ void *data_adr;
	/* 0x10 */ void *send_adr;
	/* 0x14 */ UL_MEMBLK *memblock;
} UL_SIF_DMA;

typedef struct { // 0x2
	/* 0x0 */ Uint8 flag;
	/* 0x1 */ Uint8 no;
} UL_MSEQ_PORT;

typedef struct { // 0x20
	/* 0x00 */ UL_MSEQ_PORT port[16];
} UL_MSEQ;

typedef struct { // 0x2
	/* 0x0 */ Uint8 flag;
	/* 0x1 */ Uint8 no;
} UL_OSHT_PORT;

typedef struct { // 0x20
	/* 0x00 */ UL_OSHT_PORT port[16];
} UL_OSHT;

typedef struct { // 0x9d0
	/* 0x000 */ Uint32 main_count;
	/* 0x004 */ Uint8 drv_init_flag;
	/* 0x005 */ Uint8 debug_flag;
	/* 0x008 */ void (*error_user_func)(/* parameters unknown */);
	/* 0x00c */ Sint8 *work_ptr;
	/* 0x010 */ Uint32 work_offset;
	/* 0x014 */ Uint32 heap_size;
	/* 0x018 */ Uint32 hcmd_buf_size;
	/* 0x01c */ Uint32 spu_tmp_buf_size;
	/* 0x020 */ Uint32 iop_data_buf_size;
	/* 0x024 */ struct { // 0x4
		/* 0x024 */ ulTask *root;
	} task;
	/* 0x028 */ UL_RPC_STS rpc;
	/* 0x050 */ UL_MSEQ mseq;
	/* 0x070 */ UL_OSHT osht;
	/* 0x090 */ UL_EE2IOP_DMA_TBL *dma_tbl;
	/* 0x094 */ void *flag_buf;
	/* 0x098 */ UL_MAP_FLAG *map_flag;
	/* 0x09c */ UL_WAVE_FLAG *wave_flag;
	/* 0x0a0 */ UL_HCMD_FLAG *hcmd_flag;
	/* 0x0a4 */ struct { // 0x904
		/* 0x0a4 */ Sint8 mode;
		/* 0x0a5 */ Sint8 memblk_cue;
		/* 0x0a6 */ Sint8 cur_iop;
		/* 0x0a7 */ Sint8 cur_spu;
		/* 0x0a8 */ Sint8 cur_sif;
		/* 0x0a9 */ Sint8 send_sif;
		/* 0x0aa */ Sint8 spu_mode;
		/* 0x0ac */ UL_MEMBLK *cur_mem_blk;
		/* 0x0b0 */ UL_MEMBLK memblk[16];
		/* 0x1f0 */ UL_SIF_DMA iop[32];
		/* 0x4f0 */ UL_SIF_DMA spu[32];
		/* 0x7f0 */ Uint32 *sif_dma_id[22];
		/* 0x848 */ sceSifDmaData sifdma[22];
	} dma;
	/* 0x9a8 */ UL_MAP *map;
	/* 0x9ac */ UL_LIB_DRIVER_STATUS *drv_sts;
	/* 0x9b0 */ struct { // 0x1c
		/* 0x9b0 */ Uint8 latency;
		/* 0x9b1 */ Uint8 cur_buf;
		/* 0x9b4 */ Uint32 size;
		/* 0x9b8 */ Uint32 num;
		/* 0x9bc */ UL_HCMD_LIST *buf[4];
	} hcmd;
	/* 0x9cc */ void *print_buf;
} ULSND_SYS;

typedef struct { // 0x8
	/* 0x0 */ int sema;
	/* 0x4 */ void *buff;
} sceCslBuffCtx;

typedef struct { // 0x8
	/* 0x0 */ int buffNum;
	/* 0x4 */ sceCslBuffCtx *buffCtx;
} sceCslBuffGrp;

typedef struct { // 0x14
	/* 0x00 */ int buffGrpNum;
	/* 0x04 */ sceCslBuffGrp *buffGrp;
	/* 0x08 */ void *conf;
	/* 0x0c */ void *callBack;
	/* 0x10 */ char **extmod;
} sceCslCtx;

typedef int (*sceSdTransIntrHandler)(/* parameters unknown */);
typedef int (*sceSdSpu2IntrHandler)(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ u_short func;
	/* 0x2 */ u_short entry;
	/* 0x4 */ u_int value;
} sceSdBatch;

typedef struct { // 0x14
	/* 0x00 */ int core;
	/* 0x04 */ int mode;
	/* 0x08 */ short int depth_L;
	/* 0x0a */ short int depth_R;
	/* 0x0c */ int delay;
	/* 0x10 */ int feedback;
} sceSdEffectAttr;

typedef struct { // 0x3
	/* 0x0 */ Sint8 mode;
	/* 0x1 */ Sint8 count;
	/* 0x2 */ Sint8 disp_frame;
} UL_SND_PRINT_TASK;

enum {
	UL_DMA_TRANS_REQ = 0,
	UL_DMA_TRANS_WAIT = 1,
	UL_MEM_TRANS_MULTI_NUM = 2
};

enum {
	MAM_TRANS_MAP_TRANS = 0,
	MAM_TRANS_MAP_WAIT = 1,
	MAM_TRANS_DATA_TRANS_REQ = 2,
	MAM_TRANS_SPU_DATA_WAIT = 3,
	MAM_TRANS_IOP_DATA_WAIT = 4,
	MAM_TRANS_DMA_END_WAIT = 5,
	MAM_TRANS_NUM = 6
};

typedef struct { // 0x88
	/* 0x00 */ int max_connect;
	/* 0x04 */ int now_connect;
	/* 0x08 */ u_char status[127];
} USBTVRINFO_t;

typedef struct { // 0x4
	/* 0x0 */ u_char act1;
	/* 0x1 */ u_char act2;
	/* 0x2 */ u_char led;
	/* 0x3 */ u_char reserved;
} USBTVRDATA_t;

typedef struct { // 0x10
	/* 0x0 */ int current;
	/* 0x4 */ int count;
	/* 0x8 */ ulVibUnitData *unit;
	/* 0xc */ ulVibTask *next;
} ulVibTask;

typedef struct { // 0x2c
	/* 0x00 */ ulPeriPort port;
	/* 0x04 */ int slot;
	/* 0x08 */ unsigned char send_buffer[6];
	/* 0x10 */ int mixing_buffer[6];
	/* 0x28 */ ulVibTask *child;
} ulVibMixingTask;

typedef struct { // 0x4
	/* 0x0 */ int max_connect;
} StUsbtvrInitArg;

typedef struct { // 0x4
	/* 0x0 */ int no;
} StUsbtvrGetLocationArg;

typedef struct { // 0x8
	/* 0x0 */ int no;
	/* 0x4 */ USBTVRDATA_t status;
} StUsbtvrSetStatusArg;

// warning: multiple differing types with the same name (name not equal)
struct RofsPfsIfTbl { // 0x68
	/* 0x00 */ void (*pfs_execserver)(/* parameters unknown */);
	/* 0x04 */ void (*pfs_reserve01)(/* parameters unknown */);
	/* 0x08 */ Sint32 (*pfs_reserve02)(/* parameters unknown */);
	/* 0x0c */ Sint32 (*pfs_reserve03)(/* parameters unknown */);
	/* 0x10 */ void* (*pfs_reserve04)(/* parameters unknown */);
	/* 0x14 */ void (*pfs_reserve05)(/* parameters unknown */);
	/* 0x18 */ Sint32 (*pfs_seek)(/* parameters unknown */);
	/* 0x1c */ Sint32 (*pfs_reserve06)(/* parameters unknown */);
	/* 0x20 */ Sint32 (*pfs_reqrd)(/* parameters unknown */);
	/* 0x24 */ Sint32 (*pfs_reserve07)(/* parameters unknown */);
	/* 0x28 */ void (*pfs_stoptr)(/* parameters unknown */);
	/* 0x2c */ Sint32 (*pfs_getstat)(/* parameters unknown */);
	/* 0x30 */ Sint32 (*pfs_getsctlen)(/* parameters unknown */);
	/* 0x34 */ void (*pfs_reserve08)(/* parameters unknown */);
	/* 0x38 */ Sint32 (*pfs_getnumtr)(/* parameters unknown */);
	/* 0x3c */ Sint32 (*pfs_reserve09)(/* parameters unknown */);
	/* 0x40 */ Sint32 (*pfs_reserve10)(/* parameters unknown */);
	/* 0x44 */ Sint32 (*pfs_reserve11)(/* parameters unknown */);
	/* 0x48 */ Sint32 (*pfs_reserve12)(/* parameters unknown */);
	/* 0x4c */ Sint32 (*pfs_reserve13)(/* parameters unknown */);
	/* 0x50 */ Sint32 (*pfs_reserve14)(/* parameters unknown */);
	/* 0x54 */ Sint32 (*pfs_reserve15)(/* parameters unknown */);
	/* 0x58 */ Sint32 (*pfs_reserve16)(/* parameters unknown */);
	/* 0x5c */ Sint32 (*pfs_reserve17)(/* parameters unknown */);
	/* 0x60 */ Sint32 (*pfs_reserve18)(/* parameters unknown */);
	/* 0x64 */ Sint32 (*pfs_reserve19)(/* parameters unknown */);
};

typedef enum {
	CVE_FS_ST_IDLE = 0,
	CVE_FS_ST_COMPLETE = 1,
	CVE_FS_ST_TRANS = 2,
	CVE_FS_ST_ERR = 3,
	CVE_FS_ST_NUM = 4
} CVE_FS_ST;

typedef enum {
	CVE_FS_OP_READ = 0,
	CVE_FS_OP_WRITE = 1,
	CVE_FS_OP_NUM = 2
} CVE_FS_OP;

typedef enum {
	CVE_FS_SK_SET = 0,
	CVE_FS_SK_CUR = 1,
	CVE_FS_SK_END = 2,
	CVE_FS_SK_NUM = 3
} CVE_FS_SK;

typedef enum {
	CVE_FS_OPTMODE_SETCURVOLUME = 1,
	CVE_FS_OPTMODE_ADDVOLUME = 2,
	CVE_FS_OPTMODE_DELVOLUME = 3,
	CVE_FS_OPTMODE_GETNUMFILES = 4,
	CVE_FS_OPTMODE_GETVOLINFO = 5,
	CVE_FS_OPTMODE_NEED_DEVNAME = 100,
	CVE_FS_OPTMODE_NUM = 101
} CVE_FS_OPTMODE;

typedef struct { // 0x30
	/* 0x00 */ Sint8 devname[9];
	/* 0x09 */ Sint8 fname[33];
	/* 0x2c */ Sint32 size;
} CVS_FS_FINFO;

typedef void (*CVF_FS_ERRFN)(/* parameters unknown */);

struct _vfs_vtbl { // 0x68
	/* 0x00 */ void (*ExecServer)(/* parameters unknown */);
	/* 0x04 */ void (*EntryErrFunc)(/* parameters unknown */);
	/* 0x08 */ Sint32 (*GetFileSize)(/* parameters unknown */);
	/* 0x0c */ Sint32 (*GetFreeSize)(/* parameters unknown */);
	/* 0x10 */ void* (*Open)(/* parameters unknown */);
	/* 0x14 */ void (*Close)(/* parameters unknown */);
	/* 0x18 */ Sint32 (*Seek)(/* parameters unknown */);
	/* 0x1c */ Sint32 (*Tell)(/* parameters unknown */);
	/* 0x20 */ Sint32 (*ReqRd)(/* parameters unknown */);
	/* 0x24 */ Sint32 (*ReqWr)(/* parameters unknown */);
	/* 0x28 */ void (*StopTr)(/* parameters unknown */);
	/* 0x2c */ CVE_FS_ST (*GetStat)(/* parameters unknown */);
	/* 0x30 */ Sint32 (*GetSctLen)(/* parameters unknown */);
	/* 0x34 */ void (*SetSctLen)(/* parameters unknown */);
	/* 0x38 */ Sint32 (*GetNumTr)(/* parameters unknown */);
	/* 0x3c */ Sint32 (*ChangeDir)(/* parameters unknown */);
	/* 0x40 */ Sint32 (*IsExistFile)(/* parameters unknown */);
	/* 0x44 */ Sint32 (*GetNumFiles)(/* parameters unknown */);
	/* 0x48 */ Sint32 (*LoadDirInfo)(/* parameters unknown */);
	/* 0x4c */ Sint32 (*GetMaxByteRate)(/* parameters unknown */);
	/* 0x50 */ Sint32 (*MakeDir)(/* parameters unknown */);
	/* 0x54 */ Sint32 (*RemoveDir)(/* parameters unknown */);
	/* 0x58 */ Sint32 (*DeleteFile)(/* parameters unknown */);
	/* 0x5c */ Sint32 (*GetFileSizeEx)(/* parameters unknown */);
	/* 0x60 */ Sint32 (*OptFn1)(/* parameters unknown */);
	/* 0x64 */ Sint32 (*OptFn2)(/* parameters unknown */);
};

typedef _vfs_vtbl CVS_FS_IF;
typedef CVS_FS_IF *CVFS_IF;
typedef CVFS_IF (*CVF_FS_VTBLFN)(/* parameters unknown */);

typedef struct { // 0x14
	/* 0x00 */ void *prm[5];
} CVS_FS_OPTPRM;

typedef struct { // 0x8
	/* 0x0 */ CVFS_IF vtbl;
	/* 0x4 */ void *obj;
} CVS_FS_OBJ;

typedef struct *CVFS { // 0x8
	/* 0x0 */ CVFS_IF vtbl;
	/* 0x4 */ void *obj;
};

typedef struct { // 0x8
	/* 0x0 */ Sint8 *volname;
	/* 0x4 */ CVFS fhn;
} CVS_FS_VOLINFO;

typedef void *__builtin_va_list;
// warning: multiple differing types with the same name (descriptor not equal)
typedef void *__gnuc_va_list;
typedef __uint32_t __ULong;

// warning: multiple differing types with the same name (type name not equal)
struct _Bigint { // 0x18
	/* 0x00 */ _Bigint *_next;
	/* 0x04 */ int _k;
	/* 0x08 */ int _maxwds;
	/* 0x0c */ int _sign;
	/* 0x10 */ int _wds;
	/* 0x14 */ __ULong _x[1];
};

// warning: multiple differing types with the same name (size not equal)
struct _reent { // 0x2f0
	/* 0x000 */ int _errno;
	/* 0x004 */ __sFILE *_stdin;
	/* 0x008 */ __sFILE *_stdout;
	/* 0x00c */ __sFILE *_stderr;
	/* 0x010 */ int _inc;
	/* 0x014 */ char _emergency[25];
	/* 0x030 */ int _current_category;
	/* 0x034 */ char *_current_locale;
	/* 0x038 */ int __sdidinit;
	/* 0x03c */ void (*__cleanup)(/* parameters unknown */);
	/* 0x040 */ _Bigint *_result;
	/* 0x044 */ int _result_k;
	/* 0x048 */ _Bigint *_p5s;
	/* 0x04c */ _Bigint **_freelist;
	/* 0x050 */ int _cvtlen;
	/* 0x054 */ char *_cvtbuf;
	/* 0x058 */ union { // 0xf0
		/* 0x058 */ struct { // 0x58
			/* 0x058 */ unsigned int _unused_rand;
			/* 0x05c */ char *_strtok_last;
			/* 0x060 */ char _asctime_buf[26];
			/* 0x07c */ tm _localtime_buf;
			/* 0x0a0 */ int _gamma_signgam;
			/* 0x0a8 */ long long unsigned int _rand_next;
		} _reent;
		/* 0x058 */ struct { // 0xf0
			/* 0x058 */ unsigned char *_nextf[30];
			/* 0x0d0 */ unsigned int _nmalloc[30];
		} _unused;
	} _new;
	/* 0x148 */ _atexit *_atexit;
	/* 0x14c */ _atexit _atexit0;
	/* 0x1d4 */ void (**_sig_func)(/* parameters unknown */);
	/* 0x1d8 */ _glue __sglue;
	/* 0x1e4 */ __sFILE __sf[3];
};

struct _adx_xpnd_param { // 0x14
	/* 0x00 */ Sint32 nch;
	/* 0x04 */ Sint8 *ibuf;
	/* 0x08 */ Sint32 nblk;
	/* 0x0c */ Sint16 *obuf_l;
	/* 0x10 */ Sint16 *obuf_r;
};

typedef _adx_xpnd_param ADXPDPRM;

struct _adx_xpdobj { // 0x34
	/* 0x00 */ Sint32 used;
	/* 0x04 */ Sint32 xno;
	/* 0x08 */ Sint32 mode;
	/* 0x0c */ Sint32 stat;
	/* 0x10 */ Sint32 ndecblk;
	/* 0x14 */ ADXPDPRM xprm;
	/* 0x28 */ Sint16 dly[2][2];
	/* 0x30 */ Sint16 k[2];
};

typedef _adx_xpdobj ADX_XPDOBJ;
typedef ADX_XPDOBJ *ADXPD;

struct _adx_dec_para { // 0x38
	/* 0x00 */ Sint8 *ibuf;
	/* 0x04 */ Sint32 niblk;
	/* 0x08 */ Sint32 nch;
	/* 0x0c */ Sint32 blksize;
	/* 0x10 */ Sint32 blknsmpl;
	/* 0x14 */ Sint8 *pcmbuf;
	/* 0x18 */ Sint32 pcmbsize;
	/* 0x1c */ Sint32 pcmbdist;
	/* 0x20 */ Sint32 wpos;
	/* 0x24 */ Sint32 nroom;
	/* 0x28 */ Sint32 lp_nsmpl;
	/* 0x2c */ Sint16 k[2];
	/* 0x30 */ Sint16 *dly;
	/* 0x34 */ Sint32 ndecsmpl;
};

typedef _adx_dec_para AdxDecPara;
typedef void *AHXSJD;

struct _adx_intbuf { // 0xb8
	/* 0x00 */ Sint16 used;
	/* 0x02 */ Sint16 hdcdflag;
	/* 0x04 */ Sint32 stat;
	/* 0x08 */ ADXPD xpd;
	/* 0x0c */ Sint8 code;
	/* 0x0d */ Sint8 bps;
	/* 0x0e */ Sint8 nch;
	/* 0x0f */ Sint8 blklen;
	/* 0x10 */ Sint32 blknsmpl;
	/* 0x14 */ Sint32 sfreq;
	/* 0x18 */ Sint32 total_nsmpl;
	/* 0x1c */ Sint16 cof;
	/* 0x1e */ Sint16 rsv1;
	/* 0x20 */ Sint32 lp_ins_nsmpl;
	/* 0x24 */ Sint16 nloop;
	/* 0x26 */ Sint16 lp_type;
	/* 0x28 */ Sint32 lp_spos;
	/* 0x2c */ Sint32 lp_sofst;
	/* 0x30 */ Sint32 lp_epos;
	/* 0x34 */ Sint32 lp_eofst;
	/* 0x38 */ Sint32 maxnch;
	/* 0x3c */ Sint16 *pcmbuf;
	/* 0x40 */ Sint32 pcmbsize;
	/* 0x44 */ Sint32 pcmbdist;
	/* 0x48 */ Sint16 k0;
	/* 0x4a */ Sint16 k1;
	/* 0x4c */ Sint16 dly[2];
	/* 0x50 */ AdxDecPara dp;
	/* 0x88 */ void* (*getwrfunc)(/* parameters unknown */);
	/* 0x8c */ void *getwrobj;
	/* 0x90 */ void (*addwrfunc)(/* parameters unknown */);
	/* 0x94 */ void *addwrobj;
	/* 0x98 */ Sint32 total_ndecsmpl;
	/* 0x9c */ Sint32 curwpos;
	/* 0xa0 */ Sint32 ndecsmpl;
	/* 0xa4 */ Sint32 ndeclen;
	/* 0xa8 */ Sint16 fmttype;
	/* 0xaa */ Sint16 cdctype;
	/* 0xac */ AHXSJD sjdh;
	/* 0xb0 */ Sint32 ahxdecsmpl;
	/* 0xb4 */ Sint32 ahxsvrfreq;
};

typedef _adx_intbuf ADX_BASIC;
typedef ADX_BASIC *ADXB;

typedef struct { // 0x9c
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 stat;
	/* 0x02 */ Sint8 maxnch;
	/* 0x03 */ Sint8 empty_end;
	/* 0x04 */ ADXB adxb;
	/* 0x08 */ SJ sji;
	/* 0x0c */ SJ sjo[2];
	/* 0x14 */ SJCK cki;
	/* 0x1c */ SJCK cko[2];
	/* 0x2c */ Sint32 total_decsmpl;
	/* 0x30 */ Sint32 total_decdtlen;
	/* 0x34 */ Sint32 decpos;
	/* 0x38 */ Sint32 maxdecsmpl;
	/* 0x3c */ Sint32 dtrpsmpl;
	/* 0x40 */ Sint32 dtrpcnt;
	/* 0x44 */ Sint32 dtrpdtlen;
	/* 0x48 */ void (*dtrpfunc)(/* parameters unknown */);
	/* 0x4c */ void *dtrpobj;
	/* 0x50 */ void (*dfltfunc)(/* parameters unknown */);
	/* 0x54 */ void *dfltobj;
	/* 0x58 */ Sint8 spsdinfo[64];
	/* 0x98 */ Sint32 hdrlen;
} ADX_SJDEC;

// warning: multiple differing types with the same name (descriptor not equal)
typedef ADX_SJDEC *ADXSJD;

typedef enum {
	ADXRNA_STAT_STOP = 0,
	ADXRNA_STAT_WAIT = 1,
	ADXRNA_STAT_EXEC = 2
} ADXRNA_STAT;

typedef void (*LSC_ERRFN)(/* parameters unknown */);
typedef void (*LSC_STATFN)(/* parameters unknown */);

struct _lsc_sinfo { // 0x40
	/* 0x00 */ Sint32 sid;
	/* 0x04 */ Sint8 fname[40];
	/* 0x2c */ void *dir;
	/* 0x30 */ Sint32 ofst;
	/* 0x34 */ Sint32 fsct;
	/* 0x38 */ Sint32 stat;
	/* 0x3c */ Sint32 rdsct;
};

typedef _lsc_sinfo LSC_SINFO;
typedef void *LSC_FP;

struct _lsc_obj { // 0x438
	/* 0x000 */ Sint8 used;
	/* 0x001 */ Sint8 stat;
	/* 0x002 */ Sint8 rdflg;
	/* 0x003 */ Sint8 lpflg;
	/* 0x004 */ Sint8 pause;
	/* 0x005 */ Sint8 rsv1;
	/* 0x006 */ Sint16 rsv2;
	/* 0x008 */ SJ sj;
	/* 0x00c */ SJCK ck;
	/* 0x014 */ Sint32 bufmin;
	/* 0x018 */ Sint32 bsize;
	/* 0x01c */ Sint32 wpos;
	/* 0x020 */ Sint32 rpos;
	/* 0x024 */ Sint32 nstm;
	/* 0x028 */ LSC_FP fp;
	/* 0x02c */ Sint32 fsct;
	/* 0x030 */ Sint32 reqsct;
	/* 0x034 */ Sint32 errcnt;
	/* 0x038 */ LSC_SINFO sinfo[16];
};

typedef _lsc_obj LSC_OBJ;
typedef LSC_OBJ *LSC;

typedef struct { // 0x8
	/* 0x0 */ Bool (*func)(/* parameters unknown */);
	/* 0x4 */ void *obj;
} SVM_CBFN;

typedef struct { // 0x8
	/* 0x0 */ void (*func)(/* parameters unknown */);
	/* 0x4 */ void *obj;
} SVM_CBFN2;

typedef struct { // 0x8
	/* 0x0 */ void (*func)(/* parameters unknown */);
	/* 0x4 */ void *obj;
} SVM_CBFN_ERR;

typedef struct { // 0x2c8
	/* 0x000 */ Sint8 used;
	/* 0x001 */ Sint8 stat;
	/* 0x002 */ Sint8 maxnch;
	/* 0x003 */ Sint8 endflag;
	/* 0x004 */ SJ sji[2];
	/* 0x00c */ SJ sjo;
	/* 0x010 */ SJCK cki[2];
	/* 0x020 */ SJCK cko;
	/* 0x028 */ Sint32 total_encsmpl;
	/* 0x02c */ Sint32 total_encdtlen;
	/* 0x030 */ Sint32 encpos;
	/* 0x034 */ Sint32 maxencsmpl;
	/* 0x038 */ Sint32 org_nsmpl;
	/* 0x03c */ Sint32 total_nsmpl;
	/* 0x040 */ Sint32 strm_nsmpl;
	/* 0x044 */ Sint32 nsmpl_blk;
	/* 0x048 */ Sint32 hdinfo_size;
	/* 0x04c */ Sint32 code;
	/* 0x050 */ Sint32 blklen;
	/* 0x054 */ Sint32 bps;
	/* 0x058 */ Sint32 nch;
	/* 0x05c */ Sint32 sfreq;
	/* 0x060 */ Sint32 encd_nsmpl;
	/* 0x064 */ Sint32 cof;
	/* 0x068 */ Sint32 ins_nsmpl;
	/* 0x06c */ Sint32 nloop;
	/* 0x070 */ Sint32 lp_spos;
	/* 0x074 */ Sint32 lp_sofst;
	/* 0x078 */ Sint32 lp_epos;
	/* 0x07c */ Sint32 lp_eofst;
	/* 0x080 */ void *pflt[2];
	/* 0x088 */ Sint16 preblk_d0[2];
	/* 0x08c */ Sint16 preblk_d1[2];
	/* 0x090 */ Sint16 osig[2][32];
	/* 0x110 */ Sint16 rsig[2][32];
	/* 0x190 */ Sint16 rsig_g[2][32];
	/* 0x210 */ Sint16 rsig_q[2][32];
	/* 0x290 */ Sint16 gain[2];
	/* 0x298 */ double dgain[2];
	/* 0x2a8 */ Sint8 sdata[2][16];
} ADX_SJENC;

typedef ADX_SJENC *ADXSJE;

struct _sceGifPackRgbaq { // 0x10
	/* 0x0 */ u_int R;
	/* 0x4 */ u_int G;
	/* 0x8 */ u_int B;
	/* 0xc */ u_int A;
};

typedef _sceGifPackRgbaq sceGifPackRgbaq;

struct _sceGifPackAd { // 0x10
	/* 0x0 */ u_long DATA;
	/* 0x8 */ u_long ADDR;
};

typedef _sceGifPackAd sceGifPackAd;

struct _sceGifPackSt { // 0x10
	/* 0x0 */ float S;
	/* 0x4 */ float T;
	/* 0x8 */ float Q;
	/* 0xc */ u_int pad96;
};

typedef _sceGifPackSt sceGifPackSt;

struct _sceGifPackUv { // 0x10
	/* 0x0 */ int U;
	/* 0x4 */ int V;
	/* 0x8 */ long int pad64;
};

typedef _sceGifPackUv sceGifPackUv;

struct _sceGifPackXyzf { // 0x10
	/* 0x0 */ int X;
	/* 0x4 */ int Y;
	/* 0x8 */ u_int Z;
	/* 0xc:0 */ u_int F : 12;
	/* 0xd:4 */ u_int pad108 : 3;
	/* 0xd:7 */ u_int ADC : 1;
	/* 0xe:0 */ u_int pad112 : 16;
};

typedef _sceGifPackXyzf sceGifPackXyzf;

struct _sceGifPackXyz { // 0x10
	/* 0x0 */ int X;
	/* 0x4 */ int Y;
	/* 0x8 */ u_int Z;
	/* 0xc:0 */ u_int pad96 : 15;
	/* 0xd:7 */ u_int ADC : 1;
	/* 0xe:0 */ u_int pad112 : 16;
};

typedef _sceGifPackXyz sceGifPackXyz;

struct _sceGifPackFog { // 0x10
	/* 0x0 */ u_int pad[3];
	/* 0xc */ u_int F;
};

typedef _sceGifPackFog sceGifPackFog;

struct _sceGifPackNop { // 0x10
	/* 0x0 */ u_long pad[2];
};

typedef _sceGifPackNop sceGifPackNop;

typedef enum {
	DTX_FNO_INIT = 0,
	DTX_FNO_FINISH = 1,
	DTX_FNO_CREATE = 2,
	DTX_FNO_DESTROY = 3
} DTX_RPCFNO;

typedef struct { // 0x40
	/* 0x00 */ Sint32 ftlen;
	/* 0x04 */ Sint32 dtlen;
	/* 0x08 */ Sint32 rsv2;
	/* 0x0c */ Sint32 rsv3;
	/* 0x10 */ Sint32 rsv4;
	/* 0x14 */ Sint32 rsv5;
	/* 0x18 */ Sint32 rsv6;
	/* 0x1c */ Sint32 rsv7;
	/* 0x20 */ Sint32 rsv8;
	/* 0x24 */ Sint32 rsv9;
	/* 0x28 */ Sint32 rsv10;
	/* 0x2c */ Sint32 rsv11;
	/* 0x30 */ Sint32 rsv12;
	/* 0x34 */ Sint32 rsv13;
	/* 0x38 */ Sint32 rsv14;
	/* 0x3c */ Sint32 ticket_no;
} DTX_FOOTER;

struct dtx_obj { // 0x44
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 wait_flag;
	/* 0x02 */ Sint8 send_flag;
	/* 0x03 */ Sint8 rsv;
	/* 0x04 */ dtx_obj *dtxsvr;
	/* 0x08 */ Sint32 ticket_no;
	/* 0x0c */ Sint8 *dt;
	/* 0x10 */ Sint32 dtlen;
	/* 0x14 */ DTX_FOOTER *ftr;
	/* 0x18 */ Sint8 *trdt;
	/* 0x1c */ Sint32 trlen;
	/* 0x20 */ void (*rcvcbf)(/* parameters unknown */);
	/* 0x24 */ void *rcvcbo;
	/* 0x28 */ void (*sndcbf)(/* parameters unknown */);
	/* 0x2c */ void *sndcbo;
	/* 0x30 */ sceSifDmaData dma;
	/* 0x40 */ Sint32 dma_id;
};

typedef dtx_obj DTX_OBJ;
typedef DTX_OBJ *DTX;

typedef enum {
	SJX_DTXFNO_CREATE = 0,
	SJX_DTXFNO_DESTROY = 1,
	SJX_DTXFNO_RESET = 2,
	SJX_DTXFNO_REINIT = 3
} SJX_DTXFNO;

typedef enum {
	SJX_CMD_PUT_CHUNK = 0
} SJX_CMDNO;

typedef struct { // 0x10
	/* 0x0 */ Sint8 no;
	/* 0x1 */ Sint8 lin;
	/* 0x2 */ Sint16 xid;
	/* 0x4 */ SJ sj;
	/* 0x8 */ SJCK ck;
} SJX_DTXCMD;

typedef struct { // 0x810
	/* 0x000 */ Sint32 ncmd;
	/* 0x004 */ Sint32 rsv;
	/* 0x008 */ Sint32 rsv2;
	/* 0x00c */ Sint32 rsv3;
	/* 0x010 */ SJX_DTXCMD cmd[128];
} SJX_DTXFMT;

struct sjx_obj { // 0x14
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 rsv;
	/* 0x02 */ Sint16 xid;
	/* 0x04 */ SJ sjsrc;
	/* 0x08 */ SJ sjdst;
	/* 0x0c */ Sint32 lin;
	/* 0x10 */ void *iopsjx;
};

typedef sjx_obj SJX_OBJ;
typedef SJX_OBJ *SJX;

typedef enum {
	DTR_DTXFNO_CREATE = 0,
	DTR_DTXFNO_DESTROY = 1
} DTR_DTXFNO;

typedef enum {
	DTR_STAT_STOP = 0,
	DTR_STAT_EXEC = 1
} DTR_STAT;

struct dtr_obj { // 0x40
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 stat;
	/* 0x02 */ Sint8 trnflg;
	/* 0x03 */ Sint8 rsv;
	/* 0x04 */ SJ sjsrc;
	/* 0x08 */ SJ sjdst;
	/* 0x0c */ SJCK cks;
	/* 0x14 */ SJCK ckd;
	/* 0x1c */ sceSifDmaData dma;
	/* 0x2c */ Sint32 dma_id;
	/* 0x30 */ Sint32 srclin;
	/* 0x34 */ Sint32 dstlin;
	/* 0x38 */ Sint32 blklen;
	/* 0x3c */ Sint32 total_tbyte;
};

typedef dtr_obj DTR_OBJ;
typedef DTR_OBJ *DTR;
typedef void *PSMSLT;
typedef void *PSMTBF;

typedef struct { // 0x44
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 stat;
	/* 0x02 */ Sint8 maxnch;
	/* 0x03 */ Sint8 nch;
	/* 0x04 */ PSMSLT slt[2];
	/* 0x0c */ SJ sji[2];
	/* 0x14 */ SJ sjtp[2];
	/* 0x1c */ Sint32 tp[2];
	/* 0x24 */ PSMTBF ptbf[2];
	/* 0x2c */ Sint8 *buf[2];
	/* 0x34 */ Sint32 sfreq;
	/* 0x38 */ Sint32 vol[2];
	/* 0x40 */ Sint32 core_no;
} PSM_OBJ;

typedef struct *PSM { // 0x44
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 stat;
	/* 0x02 */ Sint8 maxnch;
	/* 0x03 */ Sint8 nch;
	/* 0x04 */ PSMSLT slt[2];
	/* 0x0c */ SJ sji[2];
	/* 0x14 */ SJ sjtp[2];
	/* 0x1c */ Sint32 tp[2];
	/* 0x24 */ PSMTBF ptbf[2];
	/* 0x2c */ Sint8 *buf[2];
	/* 0x34 */ Sint32 sfreq;
	/* 0x38 */ Sint32 vol[2];
	/* 0x40 */ Sint32 core_no;
};

typedef enum {
	IOPRNA_STAT_STOP = 0,
	IOPRNA_STAT_WAIT = 1,
	IOPRNA_STAT_EXEC = 2
} IOPRNA_STAT;

typedef enum {
	IOPRNA_DTXFNO_CREATE = 8,
	IOPRNA_DTXFNO_DESTROY = 9,
	IOPRNA_DTXFNO_REINIT = 10
} IOPRNA_DTXFNO;

typedef enum {
	IOPRNA_CMD_START = 0,
	IOPRNA_CMD_STOP = 1,
	IOPRNA_CMD_SETPSW = 2,
	IOPRNA_CMD_SETNCH = 3,
	IOPRNA_CMD_SETSFREQ = 4,
	IOPRNA_CMD_SETVOL = 5,
	IOPRNA_CMD_SETMIX = 7
} IOPRNA_CMDNO;

struct ioprna_obj { // 0x14
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 rsv;
	/* 0x02 */ Sint16 rsv2;
	/* 0x04 */ Sint32 nch;
	/* 0x08 */ SJ sj[2];
	/* 0x10 */ PSM psm;
};

typedef ioprna_obj IOPRNA_OBJ;
typedef IOPRNA_OBJ *IOPRNA;

typedef struct { // 0x10
	/* 0x0 */ Sint16 no;
	/* 0x2 */ Sint16 rsv;
	/* 0x4 */ IOPRNA rna;
	/* 0x8 */ Sint32 arg1;
	/* 0xc */ Sint32 arg2;
} IOPRNA_DTXCMD;

typedef struct { // 0x810
	/* 0x000 */ Sint32 ncmd;
	/* 0x004 */ Sint32 rsv;
	/* 0x008 */ Sint32 rsv2;
	/* 0x00c */ Sint32 rsv3;
	/* 0x010 */ IOPRNA_DTXCMD cmd[128];
} IOPRNA_DTXFMT;

typedef enum {
	PS2RNA_STAT_STOP = 0,
	PS2RNA_STAT_WAIT = 1,
	PS2RNA_STAT_EXEC = 2
} PS2RNA_STAT;

typedef enum {
	PS2RNA_DTXFNO_CREATE = 8,
	PS2RNA_DTXFNO_DESTROY = 9,
	PS2RNA_DTXFNO_REINIT = 10
} PS2RNA_DTXFNO;

typedef struct { // 0x18
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 rsv;
	/* 0x02 */ Sint16 rsv2;
	/* 0x04 */ SJ sjiop;
	/* 0x08 */ SJ sjtmp;
	/* 0x0c */ SJX sjx;
	/* 0x10 */ SJCK ck;
} PS2PSJ_OBJ;

typedef struct *PS2PSJ { // 0x18
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 rsv;
	/* 0x02 */ Sint16 rsv2;
	/* 0x04 */ SJ sjiop;
	/* 0x08 */ SJ sjtmp;
	/* 0x0c */ SJX sjx;
	/* 0x10 */ SJCK ck;
};

struct ps2rna_obj { // 0x54
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 rsv;
	/* 0x02 */ Sint16 rsv2;
	/* 0x04 */ Sint32 maxnch;
	/* 0x08 */ PS2PSJ psj[2];
	/* 0x10 */ DTR dtr[2];
	/* 0x18 */ SJ sjo[2];
	/* 0x20 */ IOPRNA ioprna;
	/* 0x24 */ Sint8 ee_plysw;
	/* 0x25 */ Sint8 iop_plysw;
	/* 0x26 */ Sint8 ee_nch;
	/* 0x27 */ Sint8 iop_nch;
	/* 0x28 */ Sint32 ee_sfreq;
	/* 0x2c */ Sint32 iop_sfreq;
	/* 0x30 */ Sint32 ee_vol;
	/* 0x34 */ Sint32 iop_vol;
	/* 0x38 */ Sint32 ee_pan[2];
	/* 0x40 */ Sint32 iop_pan[2];
	/* 0x48 */ Sint8 trnsw;
	/* 0x49 */ Sint8 dtrstop_flg;
	/* 0x4a */ Sint16 rsv3;
	/* 0x4c */ Sint32 flsh_size;
	/* 0x50 */ Sint32 obuf_size;
};

typedef ps2rna_obj PS2RNA_OBJ;
typedef PS2RNA_OBJ *PS2RNA;
typedef IOPRNA_CMDNO PS2RNA_CMDNO;
typedef IOPRNA_DTXCMD PS2RNA_DTXCMD;
typedef IOPRNA_DTXFMT PS2RNA_DTXFMT;

typedef struct { // 0x30
	/* 0x00 */ _sj_vtbl *vtbl;
	/* 0x04 */ Sint32 used;
	/* 0x08 */ UUID *uuid;
	/* 0x0c */ Sint32 ndata;
	/* 0x10 */ Sint32 nroom;
	/* 0x14 */ Sint32 wpos;
	/* 0x18 */ Sint32 rpos;
	/* 0x1c */ Sint8 *buf;
	/* 0x20 */ Sint32 bsize;
	/* 0x24 */ Sint32 xsize;
	/* 0x28 */ void (*errfunc)(/* parameters unknown */);
	/* 0x2c */ void *errobj;
} SJRBF_OBJ;

typedef SJRBF_OBJ *SJRBF;

struct _iir_filt { // 0xc
	/* 0x0 */ Sint8 used;
	/* 0x1 */ Sint8 rsv1;
	/* 0x2 */ Sint16 rsv2;
	/* 0x4 */ Sint16 k0;
	/* 0x6 */ Sint16 k1;
	/* 0x8 */ Sint16 d0;
	/* 0xa */ Sint16 d1;
};

typedef _iir_filt IIR_FILT;
typedef IIR_FILT *IIRFLT;

struct predict_filt { // 0x90
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 rsv1;
	/* 0x02 */ Sint16 rsv2;
	/* 0x04 */ Sint16 k0;
	/* 0x06 */ Sint16 k1;
	/* 0x08 */ Sint16 d0;
	/* 0x0a */ Sint16 d1;
	/* 0x0c */ Sint16 d0_0;
	/* 0x0e */ Sint16 d1_0;
	/* 0x10 */ Sint16 d0_1;
	/* 0x12 */ Sint16 d1_1;
	/* 0x14 */ Sint32 nsmpl;
	/* 0x18 */ Sint16 rsig[32];
	/* 0x58 */ Sint8 rsig_q[32];
	/* 0x78 */ Sint32 max;
	/* 0x7c */ Sint16 gain;
	/* 0x80 */ double dgain;
	/* 0x88 */ IIRFLT iflt;
};

typedef predict_filt PRDCT_FILT;
typedef PRDCT_FILT *PRDFLT;

struct _adxstm_file { // 0x40
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 stat;
	/* 0x02 */ Sint8 rdflg;
	/* 0x03 */ Sint8 errcnt;
	/* 0x04 */ SJ sj;
	/* 0x08 */ CVFS fp;
	/* 0x0c */ Sint32 stpos;
	/* 0x10 */ Sint32 fofst;
	/* 0x14 */ Sint32 fsize;
	/* 0x18 */ Sint32 maxsize;
	/* 0x1c */ Sint32 minsize;
	/* 0x20 */ Sint32 reqsct;
	/* 0x24 */ SJCK reqck;
	/* 0x2c */ Sint32 rdsct;
	/* 0x30 */ Sint32 esct;
	/* 0x34 */ Sint32 tbyte;
	/* 0x38 */ void (*eosfunc)(/* parameters unknown */);
	/* 0x3c */ void *eosobj;
};

typedef _adxstm_file ADXSTM_FILE;
typedef ADXSTM_FILE *ADXSTMF;

typedef enum {
	SJRMT_RBF_CREATE = 32,
	SJRMT_MEM_CREATE = 33,
	SJRMT_UNI_CREATE = 34,
	SJRMT_DESTROY = 35,
	SJRMT_GET_UUID = 36,
	SJRMT_RESET = 37,
	SJRMT_GET_CHUNK = 38,
	SJRMT_UNGET_CHUNK = 39,
	SJRMT_PUT_CHUNK = 40,
	SJRMT_GET_NUM_DATA = 41,
	SJRMT_IS_GET_CHUNK = 42,
	SJRMT_INIT = 43,
	SJRMT_FINISH = 44,
	SJRMT_CMD_END = 45
} SJRMT_CMD;

typedef struct { // 0x180
	/* 0x000 */ sceSifRpcFunc func;
	/* 0x004 */ Sint32 ssize;
	/* 0x008 */ Sint32 rsize;
	/* 0x00c */ Sint8 rpc_flag;
	/* 0x00d */ Sint8 rsv1;
	/* 0x00e */ Sint16 rsv2;
	/* 0x010 */ sceSifClientData cd;
	/* 0x038 */ sceSifServeData sd;
	/* 0x07c */ Sint32 *sendbuf;
	/* 0x080 */ u_long128 svrbuf[16];
} SJRMT_STAT;

typedef struct { // 0x10
	/* 0x0 */ Sint32 val;
	/* 0x4 */ Sint32 time;
	/* 0x8 */ Sint32 tunit;
	/* 0xc */ Sint32 frmlen;
} ADXAMP_VAL;

typedef struct { // 0x30
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 stat;
	/* 0x02 */ Sint8 maxnch;
	/* 0x03 */ Sint8 rsrv;
	/* 0x04 */ SJ sji[2];
	/* 0x0c */ SJ sjo[2];
	/* 0x14 */ Sint32 total_exsmpl[2];
	/* 0x1c */ Sint32 nch;
	/* 0x20 */ Sint32 sfreq;
	/* 0x24 */ float frm_len;
	/* 0x28 */ float frm_prd;
	/* 0x2c */ Sint32 frm_no;
} ADX_AMP;

typedef ADX_AMP *ADXAMP;

typedef struct { // 0x10
	/* 0x0 */ CVFS_IF vtbl;
	/* 0x4 */ Sint8 dname[9];
} CVF_FS_TBL;

typedef int ptrdiff_t;
typedef unsigned int wint_t;
typedef short unsigned int ushort;
typedef unsigned int uint;
typedef long int daddr_t;
typedef char *caddr_t;
typedef short unsigned int ino_t;
typedef short int dev_t;
typedef long int off_t;
typedef short unsigned int uid_t;
typedef short unsigned int gid_t;
typedef int pid_t;
typedef long int key_t;
typedef long int ssize_t;
typedef unsigned int mode_t;
typedef short unsigned int nlink_t;
typedef long int fd_mask;

typedef struct { // 0x8
	/* 0x0 */ fd_mask fds_bits[1];
} _types_fd_set;

typedef struct { // 0x40
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 cache;
	/* 0x02 */ Sint8 stat;
	/* 0x03 */ Sint8 instat;
	/* 0x04 */ Sint32 fsize;
	/* 0x08 */ Sint32 fnsct;
	/* 0x0c */ Sint32 skpos;
	/* 0x10 */ Sint32 req_nsct;
	/* 0x14 */ Sint8 *buf;
	/* 0x18 */ sceCdlFILE fp;
	/* 0x3c */ sceCdRMode mode;
} DVS_CI_OBJ;

typedef DVS_CI_OBJ *DVCI;

typedef struct { // 0x8
	/* 0x0 */ Sint32 lsn;
	/* 0x4 */ Sint32 size;
} DVS_CI_FCACHE;

typedef struct { // 0x28
	/* 0x00 */ int devtype;
	/* 0x04 */ int stat;
	/* 0x08 */ u_int d_lsn;
	/* 0x0c */ u_int d_sct;
	/* 0x10 */ void *d_buf;
	/* 0x14 */ sceCdRMode d_mode;
	/* 0x18 */ int h_fd;
	/* 0x1c */ void *h_buf;
	/* 0x20 */ int h_size;
	/* 0x24 */ int err_code;
} SRD_OBJ;

typedef struct { // 0x10
	/* 0x0 */ DVS_CI_FCACHE *finf;
	/* 0x4 */ Sint32 num;
	/* 0x8 */ Sint32 num_max;
	/* 0xc */ Sint32 fname_max;
} DVCI_FLIST_TBL;

typedef struct { // 0x24
	/* 0x00 */ Sint8 used;
	/* 0x01 */ Sint8 cache;
	/* 0x02 */ Sint8 stat;
	/* 0x03 */ Sint8 instat;
	/* 0x04 */ Sint8 rsv;
	/* 0x08 */ Sint32 end_fg;
	/* 0x0c */ Sint32 fd;
	/* 0x10 */ Sint32 fsize;
	/* 0x14 */ Sint32 fnsct;
	/* 0x18 */ Sint32 skpos;
	/* 0x1c */ Sint8 *buf;
	/* 0x20 */ Sint32 req_nsct;
} HTS_CI_OBJ;

typedef HTS_CI_OBJ *HTCI;

typedef struct { // 0x8
	/* 0x0 */ Sint32 fd;
	/* 0x4 */ Sint32 size;
} HTS_CI_FCACHE;

typedef struct { // 0x10
	/* 0x0 */ HTS_CI_FCACHE *finf;
	/* 0x4 */ Sint32 num;
	/* 0x8 */ Sint32 num_max;
	/* 0xc */ Sint32 fname_max;
} HTCI_FLIST_TBL;

typedef Sint32 LSC_CRS;

typedef struct { // 0x24
	/* 0x00 */ _sj_vtbl *vtbl;
	/* 0x04 */ Sint32 used;
	/* 0x08 */ UUID *uuid;
	/* 0x0c */ Sint32 ndata;
	/* 0x10 */ Sint32 rpos;
	/* 0x14 */ Sint8 *buf;
	/* 0x18 */ Sint32 bsize;
	/* 0x1c */ void (*errfunc)(/* parameters unknown */);
	/* 0x20 */ void *errobj;
} SJMEM_OBJ;

typedef SJMEM_OBJ *SJMEM;

struct _sjck_chain { // 0x10
	/* 0x0 */ _sjck_chain *next;
	/* 0x4 */ Sint32 rsv;
	/* 0x8 */ SJCK ck;
};

typedef _sjck_chain SJCK_CHAIN;
typedef _sjck_chain *SJCKCN;

typedef struct { // 0x30
	/* 0x00 */ _sj_vtbl *vtbl;
	/* 0x04 */ Sint8 used;
	/* 0x05 */ Sint8 mode;
	/* 0x06 */ Sint16 rsv1;
	/* 0x08 */ UUID *uuid;
	/* 0x0c */ SJCK_CHAIN *ckcnwk;
	/* 0x10 */ Sint32 nckcn;
	/* 0x14 */ SJCKCN pool;
	/* 0x18 */ SJCKCN lin[4];
	/* 0x28 */ void (*errfunc)(/* parameters unknown */);
	/* 0x2c */ void *errobj;
} SJUNI_OBJ;

typedef SJUNI_OBJ *SJUNI;

struct tWAVEFORMATEX { // 0x14
	/* 0x00 */ Uint16 wFormatTag;
	/* 0x02 */ Uint16 nChannels;
	/* 0x04 */ Uint32 nSamplesPerSec;
	/* 0x08 */ Uint32 nAvgBytesPerSec;
	/* 0x0c */ Uint16 nBlockAlign;
	/* 0x0e */ Uint16 wBitsPerSample;
	/* 0x10 */ Uint16 cbSize;
};

typedef tWAVEFORMATEX WAVEFORMATEX;

enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};

enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};

enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};

enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};

enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};

enum reg_class {
	NO_REGS = 0,
	M16_NA_REGS = 1,
	M16_REGS = 2,
	T_REG = 3,
	M16_T_REGS = 4,
	GR_REGS = 5,
	FP_REGS = 6,
	HI_REG = 7,
	LO_REG = 8,
	HILO_REG = 9,
	MD_REGS = 10,
	HI_AND_GR_REGS = 11,
	LO_AND_GR_REGS = 12,
	HILO_AND_GR_REGS = 13,
	HI1_REG = 14,
	LO1_REG = 15,
	HILO1_REG = 16,
	MD1_REGS = 17,
	HI1_AND_GR_REGS = 18,
	LO1_AND_GR_REGS = 19,
	HILO1_AND_GR_REGS = 20,
	HI01_REG = 21,
	LO01_REG = 22,
	HILO01_REG = 23,
	MD01_REGS = 24,
	HI01_AND_GR_REGS = 25,
	LO01_AND_GR_REGS = 26,
	HILO01_AND_GR_REGS = 27,
	ST_REGS = 28,
	ALL_REGS = 29,
	LIM_REG_CLASSES = 30
};

struct mips_frame_info { // 0x70
	/* 0x00 */ long int total_size;
	/* 0x08 */ long int var_size;
	/* 0x10 */ long int args_size;
	/* 0x18 */ long int extra_size;
	/* 0x20 */ int gp_reg_size;
	/* 0x24 */ int fp_reg_size;
	/* 0x28 */ long int mask;
	/* 0x30 */ long int fmask;
	/* 0x38 */ long int gp_save_offset;
	/* 0x40 */ long int fp_save_offset;
	/* 0x48 */ long int gp_sp_offset;
	/* 0x50 */ long int fp_sp_offset;
	/* 0x58 */ int initialized;
	/* 0x5c */ int num_gp;
	/* 0x60 */ int num_fp;
	/* 0x68 */ long int insns_len;
};

struct mips_args { // 0x3c
	/* 0x00 */ int gp_reg_found;
	/* 0x04 */ int arg_number;
	/* 0x08 */ int arg_words;
	/* 0x0c */ int fp_arg_words;
	/* 0x10 */ int last_arg_fp;
	/* 0x14 */ int fp_code;
	/* 0x18 */ int num_adjusts;
	/* 0x1c */ rtx_def *adjust[8];
};

typedef mips_args CUMULATIVE_ARGS;

enum machine_mode {
	VOIDmode = 0,
	PQImode = 1,
	QImode = 2,
	PHImode = 3,
	HImode = 4,
	PSImode = 5,
	SImode = 6,
	PDImode = 7,
	DImode = 8,
	TImode = 9,
	OImode = 10,
	QFmode = 11,
	HFmode = 12,
	TQFmode = 13,
	SFmode = 14,
	DFmode = 15,
	XFmode = 16,
	TFmode = 17,
	QCmode = 18,
	HCmode = 19,
	SCmode = 20,
	DCmode = 21,
	XCmode = 22,
	TCmode = 23,
	CQImode = 24,
	CHImode = 25,
	CSImode = 26,
	CDImode = 27,
	CTImode = 28,
	COImode = 29,
	BLKmode = 30,
	CCmode = 31,
	MAX_MACHINE_MODE = 32
};

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MAX_MODE_CLASS = 7
};

typedef unsigned char UQItype;
typedef int SItype;
typedef unsigned int USItype;
typedef long int DItype;
typedef long unsigned int UDItype;
typedef float SFtype;
typedef double DFtype;
typedef long int word_type;

struct DIstruct { // 0x8
	/* 0x0 */ SItype low;
	/* 0x4 */ SItype high;
};

typedef union { // 0x8
	/* 0x0 */ DIstruct s;
	/* 0x0 */ DItype ll;
} DIunion;

typedef void (*func_ptr)(/* parameters unknown */);
typedef short int HItype;
typedef short unsigned int UHItype;
// warning: multiple differing types with the same name (type name not equal)
typedef UDItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef USItype halffractype;
// warning: multiple differing types with the same name (type name not equal)
typedef DFtype FLO_type;
// warning: multiple differing types with the same name (type name not equal)
typedef DItype intfrac;

typedef enum {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
} fp_class_type;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x18
	/* 0x00 */ fp_class_type class;
	/* 0x04 */ unsigned int sign;
	/* 0x08 */ int normal_exp;
	/* 0x10 */ union { // 0x8
		/* 0x10 */ fractype ll;
		/* 0x10 */ halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (size not equal)
typedef union { // 0x8
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ halffractype words[2];
	/* 0x0 */ struct { // 0x8
		/* 0x0:0 */ fractype fraction : 52;
		/* 0x6:4 */ unsigned int exp : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

// warning: multiple differing types with the same name (type name not equal)
typedef USItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef UHItype halffractype;
// warning: multiple differing types with the same name (type name not equal)
typedef SFtype FLO_type;
// warning: multiple differing types with the same name (type name not equal)
typedef SItype intfrac;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x10
	/* 0x0 */ fp_class_type class;
	/* 0x4 */ unsigned int sign;
	/* 0x8 */ int normal_exp;
	/* 0xc */ union { // 0x4
		/* 0xc */ fractype ll;
		/* 0xc */ halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (size not equal)
typedef union { // 0x4
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ fractype fraction : 23;
		/* 0x2:7 */ unsigned int exp : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

typedef union { // 0x8
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ __uint32_t lsw;
		/* 0x4 */ __uint32_t msw;
	} parts;
} ieee_double_shape_type;

typedef union { // 0x4
	/* 0x0 */ float value;
	/* 0x0 */ __uint32_t word;
} ieee_float_shape_type;

typedef long int _off_t;
typedef long int _ssize_t;

struct malloc_chunk { // 0x10
	/* 0x0 */ size_t prev_size;
	/* 0x4 */ size_t size;
	/* 0x8 */ malloc_chunk *fd;
	/* 0xc */ malloc_chunk *bk;
};

typedef malloc_chunk *mchunkptr;
typedef malloc_chunk *mbinptr;

struct __siov { // 0x8
	/* 0x0 */ void *iov_base;
	/* 0x4 */ size_t iov_len;
};

struct __suio { // 0xc
	/* 0x0 */ __siov *uio_iov;
	/* 0x4 */ int uio_iovcnt;
	/* 0x8 */ int uio_resid;
};

typedef union { // 0x10
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int fraction1;
		/* 0x4:0 */ unsigned int fraction0 : 20;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int function1;
		/* 0x4:0 */ unsigned int function0 : 19;
		/* 0x6:3 */ unsigned int quiet : 1;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ struct { // 0x10
		/* 0x0 */ long unsigned int lsw;
		/* 0x8 */ long unsigned int msw;
	} parts;
	/* 0x0 */ long int aslong[2];
} __ieee_double_shape_type;

typedef union { // 0x8
	/* 0x0 */ float value;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int fraction0 : 7;
		/* 0x0:7 */ unsigned int fraction1 : 16;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int function1 : 16;
		/* 0x2:0 */ unsigned int function0 : 6;
		/* 0x2:6 */ unsigned int quiet : 1;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ long int p1;
} __ieee_float_shape_type;

typedef int fp_rnd;
typedef int fp_except;
typedef int fp_rdi;

union double_union { // 0x8
	/* 0x0 */ double d;
	/* 0x0 */ __uint32_t i[2];
};

// warning: multiple differing types with the same name (type name not equal)
typedef unsigned int ULong;

enum {
	OCT = 0,
	DEC = 1,
	HEX = 2
};

struct lconv { // 0x30
	/* 0x00 */ char *decimal_point;
	/* 0x04 */ char *thousands_sep;
	/* 0x08 */ char *grouping;
	/* 0x0c */ char *int_curr_symbol;
	/* 0x10 */ char *currency_symbol;
	/* 0x14 */ char *mon_decimal_point;
	/* 0x18 */ char *mon_thousands_sep;
	/* 0x1c */ char *mon_grouping;
	/* 0x20 */ char *positive_sign;
	/* 0x24 */ char *negative_sign;
	/* 0x28 */ char int_frac_digits;
	/* 0x29 */ char frac_digits;
	/* 0x2a */ char p_cs_precedes;
	/* 0x2b */ char p_sep_by_space;
	/* 0x2c */ char n_cs_precedes;
	/* 0x2d */ char n_sep_by_space;
	/* 0x2e */ char p_sign_posn;
	/* 0x2f */ char n_sign_posn;
};

typedef long unsigned int sigset_t;

struct sigaction { // 0x18
	/* 0x00 */ void (*sa_handler)(/* parameters unknown */);
	/* 0x08 */ sigset_t sa_mask;
	/* 0x10 */ int sa_flags;
};

typedef int sig_atomic_t;
typedef void (*_sig_func_ptr)(/* parameters unknown */);

struct stat { // 0x68
	/* 0x00 */ dev_t st_dev;
	/* 0x02 */ ino_t st_ino;
	/* 0x04 */ mode_t st_mode;
	/* 0x08 */ nlink_t st_nlink;
	/* 0x0a */ uid_t st_uid;
	/* 0x0c */ gid_t st_gid;
	/* 0x0e */ dev_t st_rdev;
	/* 0x10 */ off_t st_size;
	/* 0x18 */ time_t st_atime;
	/* 0x20 */ long int st_spare1;
	/* 0x28 */ time_t st_mtime;
	/* 0x30 */ long int st_spare2;
	/* 0x38 */ time_t st_ctime;
	/* 0x40 */ long int st_spare3;
	/* 0x48 */ long int st_blksize;
	/* 0x50 */ long int st_blocks;
	/* 0x58 */ long int st_spare4[2];
};

struct flock { // 0x20
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
};

struct eflock { // 0x30
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
	/* 0x20 */ long int l_rpid;
	/* 0x28 */ long int l_rsys;
};

struct ADXF_ROFS_PFSIFTBL;
struct ADXF_ROFS_DEVIFTBLE;
struct ADXF_ROFS_LIBIFTBLE;
struct GDS_DCF;
struct GDS_FS_LIF;
struct RfpfsDevIfTbl;
struct RfmaiLibIfTbl;
struct _gwProfilerTag;
struct _gwProfilerGroup;
struct _gwProfilerCtrl;
struct rtx_def;
