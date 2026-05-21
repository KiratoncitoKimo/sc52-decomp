#ifndef NINJADEF_H
#define NINJADEF_H

#define BIT_0   (1 <<  0)
#define BIT_1   (1 <<  1)
#define BIT_2   (1 <<  2)
#define BIT_3   (1 <<  3)
#define BIT_4   (1 <<  4)
#define BIT_5   (1 <<  5)
#define BIT_6   (1 <<  6)
#define BIT_7   (1 <<  7)
#define BIT_8   (1 <<  8)
#define BIT_9   (1 <<  9)
#define BIT_10  (1 << 10)
#define BIT_11  (1 << 11)
#define BIT_12  (1 << 12)
#define BIT_13  (1 << 13)
#define BIT_14  (1 << 14)
#define BIT_15  (1 << 15)
#define BIT_16  (1 << 16)
#define BIT_17  (1 << 17)
#define BIT_18  (1 << 18)
#define BIT_19  (1 << 19)
#define BIT_20  (1 << 20)
#define BIT_21  (1 << 21)
#define BIT_22  (1 << 22)
#define BIT_23  (1 << 23)
#define BIT_24  (1 << 24)
#define BIT_25  (1 << 25)
#define BIT_26  (1 << 26)
#define BIT_27  (1 << 27)
#define BIT_28  (1 << 28)
#define BIT_29  (1 << 29)
#define BIT_30  (1 << 30)
#define BIT_31  (1 << 31)


typedef int Int;
typedef Sint32 Angle;
typedef Sint16 Sangle;
typedef Float NJS_MATRIX[16];

#define	NJD_CONTROL_3D_DISP_AXIS		         BIT_0
#define	NJD_CONTROL_3D_NO_CLIP_CHECK	         BIT_1
#define	NJD_CONTROL_3D_CONSTANT_ATTR	         BIT_2
#define	NJD_CONTROL_3D_ENABLE_ALPHA		         BIT_3
#define	NJD_CONTROL_3D_CONSTANT_MATERIAL         BIT_4
#define	NJD_CONTROL_3D_OFFSET_MATERIAL	         BIT_5
#define	NJD_CONTROL_3D_DEPTH_QUEUE		         BIT_6
#define	NJD_CONTROL_3D_VERTEX_OFFSET	         BIT_7
#define	NJD_CONTROL_3D_MODEL_CLIP		         BIT_8
#define	NJD_CONTROL_3D_CONSTANT_TEXTURE_MATERIAL BIT_9
#define	NJD_CONTROL_3D_SHADOW				     BIT_10
#define	NJD_CONTROL_3D_CNK_CONSTANT_ATTR	     BIT_11
#define	NJD_CONTROL_3D_SHADOW_OPAQUE		     BIT_12
#define	NJD_CONTROL_3D_TRANS_MODIFIER		     BIT_13
#define	NJD_CONTROL_3D_USE_PUNCHTHROUGH		     BIT_14
#define	NJD_CONTROL_3D_CNK_BLEND_MODE		     BIT_15
#define	NJD_CONTROL_3D_DISABLE_NEAR_CLIP	     BIT_16
#define	NJD_CONTROL_3D_ENV_UV_SCROLL		     BIT_17
#define	NJD_CONTROL_3D_MIRROR_MODEL			     BIT_31

#endif // NINJADEF_H