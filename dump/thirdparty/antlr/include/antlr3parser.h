
//
// thirdparty/antlr/include/antlr3parser.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A53F00> ../thirdparty/antlr/include/antlr3parser.h:47
// member functions: 4
// member variables: 7
// struct size: 56
struct ANTLR3_PARSER_struct {
	void * super; /* 0 8 */
	pANTLR3_BASE_RECOGNIZER rec; /* 8 8 */
	pANTLR3_TOKEN_STREAM tstream; /* 16 8 */
	void (*setDebugListener)(ANTLR3_PARSER_struct* , pANTLR3_DEBUG_EVENT_LISTENER); /* 24 8* /
	void (*setTokenStream)(ANTLR3_PARSER_struct* , pANTLR3_TOKEN_STREAM); /* 32 8* /
	pANTLR3_TOKEN_STREAM (*getTokenStream)(ANTLR3_PARSER_struct* ); /* 40 8* /
	void (*free)(ANTLR3_PARSER_struct* ); /* 48 8* /
};

