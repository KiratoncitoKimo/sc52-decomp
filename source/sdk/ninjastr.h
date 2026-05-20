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

#endif // NINJASTR_H