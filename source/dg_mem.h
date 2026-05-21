#ifndef DG_MEM_H
#define DG_MEM_H

#include "sdk/ninja.h"

typedef struct dgMemHeader    dgMemHeader;
typedef struct dgMemPartition dgMemPartition;

struct dgMemHeader 
{
	/* 0x00 */ Sint32 flag;
	/* 0x04 */ Sint32 block;
	/* 0x08 */ dgMemHeader* ptr;
	/* 0x0c */ void* talloc;
	/* 0x10 */ dgMemHeader* prev_ptr;
	/* 0x14 */ dgMemHeader* next_ptr;
	/* 0x18 */ dgMemHeader* small_ptr;
	/* 0x1c */ dgMemHeader* large_ptr;
	/* 0x20 */ Sint32 dummy[8];
};

struct dgMemPartition 
{
	/* 0x00 */ Sint32 flag;
	/* 0x04 */ Sint32 block;
	/* 0x08 */ Sint32 pflag;
	/* 0x0c */ dgMemHeader* freep_top;
	/* 0x10 */ Sint32 dummy[4];
	/* 0x20 */ Sint32 dummy1[8];
};

void dgMemInit(void* start, size_t size);
void* dgMemMalloc(size_t size);
void* dgMemCalloc(size_t n, size_t size);
void dgMemFree(void* p);
void* dgMemRealloc(void* p, size_t size);
dgMemPartition* dgMemPartitionCreate(size_t size);
void dgMemPartitionDestroy(dgMemPartition* handle);
void* dgMemPartitionMalloc(dgMemPartition* handle, size_t size);
void* dgMemPartitionCalloc(dgMemPartition* handle, size_t size);
void* dgMemPartitionRealloc(dgMemPartition* handle, void* p, size_t size);
void dgMemPartitionFree(dgMemPartition* handle, void* p);
void* dgMemCopy(void* dst, void* src, Sint32 num);
void* dgMemCopy2(void* dst, void* src, Sint32 num);
void* dgMemCopy4(void* dst, void* src, Sint32 num);
void* dgMemCopy8(void* dst, void* src, Sint32 num);
void* dgMemCopy16(void* dst, void* src, Sint32 num);
void* dgMemCopy32(void* dst, void* src, Sint32 num);
void* dgMemCopySQ(void* dst, void* src, Sint32 num);
void* dgMemSet(void* dst, Uint8 dat, Sint32 num);
void* dgMemSet2(void* dst, Uint16 dat, Sint32 num);
void* dgMemSet4(void* dst, Uint32 dat, Sint32 num);
void* dgMemSet8(void* dst, Uint32 dat, Sint32 num);
void* dgMemSet16(void* dst, Uint32 dat, Sint32 num);
void* dgMemSet32(void* dst, Uint32 dat, Sint32 num);
void* dgMemSetSQ(void* dst, Uint32 dat, Sint32 num);
void dgMemCheck(dgMemPartition* handle);
int dgMemGetDivideNum(dgMemPartition* handle);
int dgMemGetRemainAll(dgMemPartition* handle);
int dgMemGetRemainMax(dgMemPartition* handle);

#endif // DG_MEM_H