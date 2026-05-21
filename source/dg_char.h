#ifndef DG_CHAR_H
#define DG_CHAR_H

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

#endif // DG_CHAR_H