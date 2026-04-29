
//
// include/antlr3commontoken.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06AD6FF5> include/antlr3commontoken.h:107
// member functions: 19
// member variables: 36
// struct size: 264
struct ANTLR3_COMMON_TOKEN_struct {
	/* include/antlr3commontoken.h:173 */
	union {
		pANTLR3_UCHAR chars; /* 0 8 */
		pANTLR3_STRING text; /* 0 8 */
	};
	ANTLR3_UINT32 type; /* 0 4 */
	ANTLR3_BOOLEAN factoryMade; /* 4 4 */
	pANTLR3_STRING_FACTORY strFactory; /* 8 8 */
	ANTLR3_UINT32 line; /* 16 4 */
	void * lineStart; /* 24 8 */
	ANTLR3_INT32 charPosition; /* 32 4 */
	ANTLR3_UINT32 channel; /* 36 4 */
	pANTLR3_INPUT_STREAM input; /* 40 8 */
	ANTLR3_MARKER index; /* 48 8 */
	ANTLR3_MARKER start; /* 56 8 */
	ANTLR3_MARKER stop; /* 64 8 */
	ANTLR3_UINT32 textState; /* 72 4 */
	union {
		pANTLR3_UCHAR chars; /* 80 8 */
		pANTLR3_STRING text; /* 80 8 */
	} tokText; /* 80 8 */
	ANTLR3_UINT32 user1; /* 88 4 */
	ANTLR3_UINT32 user2; /* 92 4 */
	ANTLR3_UINT32 user3; /* 96 4 */
	void * custom; /* 104 8 */
	void (*freeCustom)(void* ); /* 112 8* /
	pANTLR3_STRING (*getText)(ANTLR3_COMMON_TOKEN_struct* ); /* 120 8* /
	void (*setText)(ANTLR3_COMMON_TOKEN_struct* , pANTLR3_STRING); /* 128 8* /
	void (*setText8)(ANTLR3_COMMON_TOKEN_struct* , pANTLR3_UINT8); /* 136 8* /
	ANTLR3_UINT32 (*getType)(ANTLR3_COMMON_TOKEN_struct* ); /* 144 8* /
	void (*setType)(ANTLR3_COMMON_TOKEN_struct* , ANTLR3_UINT32); /* 152 8* /
	ANTLR3_UINT32 (*getLine)(ANTLR3_COMMON_TOKEN_struct* ); /* 160 8* /
	void (*setLine)(ANTLR3_COMMON_TOKEN_struct* , ANTLR3_UINT32); /* 168 8* /
	ANTLR3_INT32 (*getCharPositionInLine)(ANTLR3_COMMON_TOKEN_struct* ); /* 176 8* /
	void (*setCharPositionInLine)(ANTLR3_COMMON_TOKEN_struct* , ANTLR3_INT32); /* 184 8* /
	ANTLR3_UINT32 (*getChannel)(ANTLR3_COMMON_TOKEN_struct* ); /* 192 8* /
	void (*setChannel)(ANTLR3_COMMON_TOKEN_struct* , ANTLR3_UINT32); /* 200 8* /
	ANTLR3_MARKER (*getTokenIndex)(ANTLR3_COMMON_TOKEN_struct* ); /* 208 8* /
	void (*setTokenIndex)(ANTLR3_COMMON_TOKEN_struct* , ANTLR3_MARKER); /* 216 8* /
	ANTLR3_MARKER (*getStartIndex)(ANTLR3_COMMON_TOKEN_struct* ); /* 224 8* /
	void (*setStartIndex)(ANTLR3_COMMON_TOKEN_struct* , ANTLR3_MARKER); /* 232 8* /
	ANTLR3_MARKER (*getStopIndex)(ANTLR3_COMMON_TOKEN_struct* ); /* 240 8* /
	void (*setStopIndex)(ANTLR3_COMMON_TOKEN_struct* , ANTLR3_MARKER); /* 248 8* /
	pANTLR3_STRING (*toString)(ANTLR3_COMMON_TOKEN_struct* ); /* 256 8* /
};

