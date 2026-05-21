#ifndef NINJASTR_H
#define NINJASTR_H

typedef struct
{
	Float x;
	Float y;
}
  NJS_POINT2;

typedef struct
{
	Float x;
	Float y;
	Float z;
}
  NJS_POINT3,
  NJS_VECTOR;

typedef struct 
{
	float re;
	float im[3];
}
  NJS_QUATERNION;

typedef struct 
{
	Float xad, yad;
	Float cx, cy;
	Float ooxad, ooyad;
	Float dist, ax, ay;
	Float aspect, w, h;
} 
  NJS_SCREEN;

typedef struct
{
	Float f_clip, n_clip;
	Float x1, x0, y1, y0;
	NJS_POINT2 d[2];
} 
  NJS_CLIP;

typedef struct 
{   
	void* mdata;
	Uint32 nbFrame;
	Uint16 type;
	Uint16 inp_fn;
} 
  NJS_MOTION;

typedef struct
{
	Float px, py, pz;
	Float vx, vy, vz;
	Sangle roll, ang;
	Uint32 type;
} 
  NJS_CAMERA;

typedef struct { // 0x10
	/* 0x0 */ Uint32 keyframe;
	/* 0x4 */ Float key[3];
} NJS_MKEY_F;

typedef struct { // 0x4
	/* 0x0 */ Uint16 keyframe;
	/* 0x2 */ Sangle key;
} NJS_MKEY_SA1;

typedef struct { // 0x20
	/* 0x00 */ void* p[4];
	/* 0x10 */ Uint32 nb[4];
} NJS_MDATA4;

typedef struct { // 0x18
	/* 0x00 */ Float px;
	/* 0x04 */ Float py;
	/* 0x08 */ Float pz;
	/* 0x0c */ Float vx;
	/* 0x10 */ Float vy;
	/* 0x14 */ Float vz;
} NJS_PLANE;

#endif // NINJASTR_H