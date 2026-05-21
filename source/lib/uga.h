#ifndef UGA_H
#define UGA_H

// Matrix

typedef struct _ulMatrix _ulMatrix;

struct _ulMatrix { // 0x40
	/* 0x00 */ float m[4][4];
};

typedef _ulMatrix ulMatrix;

typedef float* ulMatrixPtr[4];

typedef struct { // 0x10
	/* 0x0 */ ulMatrix* top;
	/* 0x4 */ int maxDepth;
	/* 0x8 */ ulMatrix* current;
	/* 0xc */ int depth;
} ulMatrixStack;

void ulGxSetTransform(int type, ulMatrix* m);

// Assembly functions
void ulMatrixUnit(ulMatrix*);

#endif // UGA_H