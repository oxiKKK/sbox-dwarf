
//
// thirdparty/antlr/include/antlr3input.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A536CA> ../thirdparty/antlr/include/antlr3input.h:53
// member functions: 13
// member variables: 29
// struct size: 208
struct ANTLR3_INPUT_STREAM_struct {
	pANTLR3_INT_STREAM istream; /* 0 8 */
	void * super; /* 8 8 */
	ANTLR3_UINT8 charByteSize; /* 16 1 */
	void * data; /* 24 8 */
	int isAllocated; /* 32 4 */
	pANTLR3_STRING_FACTORY strFactory; /* 40 8 */
	void * nextChar; /* 48 8 */
	ANTLR3_UINT32 sizeBuf; /* 56 4 */
	ANTLR3_UINT32 line; /* 60 4 */
	void * currentLine; /* 64 8 */
	ANTLR3_INT32 charPositionInLine; /* 72 4 */
	ANTLR3_UINT32 markDepth; /* 76 4 */
	pANTLR3_VECTOR markers; /* 80 8 */
	pANTLR3_STRING fileName; /* 88 8 */
	ANTLR3_UINT32 fileNo; /* 96 4 */
	ANTLR3_UCHAR newlineChar; /* 100 4 */
	void (*close)(ANTLR3_INPUT_STREAM_struct* ); /* 104 8* /
	void (*free)(ANTLR3_INPUT_STREAM_struct* ); /* 112 8* /
	void (*reset)(ANTLR3_INPUT_STREAM_struct* ); /* 120 8* /
	void (*setUcaseLA)(pANTLR3_INPUT_STREAM, ANTLR3_BOOLEAN); /* 128 8* /
	void* (*_LT)(ANTLR3_INPUT_STREAM_struct* , ANTLR3_INT32); /* 136 8* /
	ANTLR3_UINT32 (*size)(ANTLR3_INPUT_STREAM_struct* ); /* 144 8* /
	pANTLR3_STRING (*substr)(ANTLR3_INPUT_STREAM_struct* , ANTLR3_MARKER, ANTLR3_MARKER); /* 152 8* /
	ANTLR3_UINT32 (*getLine)(ANTLR3_INPUT_STREAM_struct* ); /* 160 8* /
	void* (*getLineBuf)(ANTLR3_INPUT_STREAM_struct* ); /* 168 8* /
	ANTLR3_UINT32 (*getCharPositionInLine)(ANTLR3_INPUT_STREAM_struct* ); /* 176 8* /
	void (*setLine)(ANTLR3_INPUT_STREAM_struct* , ANTLR3_UINT32); /* 184 8* /
	void (*setCharPositionInLine)(ANTLR3_INPUT_STREAM_struct* , ANTLR3_UINT32); /* 192 8* /
	void (*SetNewLineChar)(ANTLR3_INPUT_STREAM_struct* , ANTLR3_UINT32); /* 200 8* /
};

