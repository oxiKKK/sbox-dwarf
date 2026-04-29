
//
// thirdparty/antlr/include/antlr3lexer.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A53DB0> ../thirdparty/antlr/include/antlr3lexer.h:76
// member functions: 16
// member variables: 20
// struct size: 160
struct ANTLR3_LEXER_struct {
	void * super; /* 0 8 */
	void * ctx; /* 8 8 */
	pANTLR3_INPUT_STREAM input; /* 16 8 */
	pANTLR3_BASE_RECOGNIZER rec; /* 24 8 */
	void (*setCharStream)(ANTLR3_LEXER_struct* , pANTLR3_INPUT_STREAM); /* 32 8* /
	void (*pushCharStream)(ANTLR3_LEXER_struct* , pANTLR3_INPUT_STREAM); /* 40 8* /
	void (*popCharStream)(ANTLR3_LEXER_struct* ); /* 48 8* /
	void (*emitNew)(ANTLR3_LEXER_struct* , pANTLR3_COMMON_TOKEN); /* 56 8* /
	pANTLR3_COMMON_TOKEN (*emit)(ANTLR3_LEXER_struct* ); /* 64 8* /
	void (*mTokens)(void* ); /* 72 8* /
	ANTLR3_BOOLEAN (*matchs)(ANTLR3_LEXER_struct* , ANTLR3_UCHAR* ); /* 80 8* /
	ANTLR3_BOOLEAN (*matchc)(ANTLR3_LEXER_struct* , ANTLR3_UCHAR); /* 88 8* /
	ANTLR3_BOOLEAN (*matchRange)(ANTLR3_LEXER_struct* , ANTLR3_UCHAR, ANTLR3_UCHAR); /* 96 8* /
	void (*matchAny)(ANTLR3_LEXER_struct* ); /* 104 8* /
	void (*recover)(ANTLR3_LEXER_struct* ); /* 112 8* /
	ANTLR3_UINT32 (*getLine)(ANTLR3_LEXER_struct* ); /* 120 8* /
	ANTLR3_MARKER (*getCharIndex)(ANTLR3_LEXER_struct* ); /* 128 8* /
	ANTLR3_UINT32 (*getCharPositionInLine)(ANTLR3_LEXER_struct* ); /* 136 8* /
	pANTLR3_STRING (*getText)(ANTLR3_LEXER_struct* ); /* 144 8* /
	void (*free)(ANTLR3_LEXER_struct* ); /* 152 8* /
};

