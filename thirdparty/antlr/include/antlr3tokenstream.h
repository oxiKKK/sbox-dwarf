
//
// thirdparty/antlr/include/antlr3tokenstream.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	structs: 3
//

// <06A53B1C> ../thirdparty/antlr/include/antlr3tokenstream.h:57
// member function: 1
// member variables: 6
// struct size: 560
struct ANTLR3_TOKEN_SOURCE_struct {
	pANTLR3_COMMON_TOKEN (*nextToken)(ANTLR3_TOKEN_SOURCE_struct* ); /* 0 8* /
	pANTLR3_STRING_FACTORY strFactory; /* 8 8 */
	ANTLR3_COMMON_TOKEN eofToken; /* 16 264 */
	ANTLR3_COMMON_TOKEN skipToken; /* 280 264 */
	void * super; /* 544 8 */
	pANTLR3_STRING fileName; /* 552 8 */
};

// <06A53B9B> ../thirdparty/antlr/include/antlr3tokenstream.h:100
// member functions: 9
// member variables: 14
// struct size: 112
struct ANTLR3_TOKEN_STREAM_struct {
	pANTLR3_TOKEN_SOURCE tokenSource; /* 0 8 */
	void * super; /* 8 8 */
	pANTLR3_INT_STREAM istream; /* 16 8 */
	pANTLR3_DEBUG_EVENT_LISTENER debugger; /* 24 8 */
	ANTLR3_BOOLEAN initialStreamState; /* 32 4 */
	pANTLR3_COMMON_TOKEN (*_LT)(ANTLR3_TOKEN_STREAM_struct* , ANTLR3_INT32); /* 40 8* /
	pANTLR3_COMMON_TOKEN (*get)(ANTLR3_TOKEN_STREAM_struct* , ANTLR3_UINT32); /* 48 8* /
	pANTLR3_TOKEN_SOURCE (*getTokenSource)(ANTLR3_TOKEN_STREAM_struct* ); /* 56 8* /
	void (*setTokenSource)(ANTLR3_TOKEN_STREAM_struct* , pANTLR3_TOKEN_SOURCE); /* 64 8* /
	pANTLR3_STRING (*toString)(ANTLR3_TOKEN_STREAM_struct* ); /* 72 8* /
	pANTLR3_STRING (*toStringSS)(ANTLR3_TOKEN_STREAM_struct* , ANTLR3_UINT32, ANTLR3_UINT32); /* 80 8* /
	pANTLR3_STRING (*toStringTT)(ANTLR3_TOKEN_STREAM_struct* , pANTLR3_COMMON_TOKEN, pANTLR3_COMMON_TOKEN); /* 88 8* /
	void (*setDebugListener)(ANTLR3_TOKEN_STREAM_struct* , pANTLR3_DEBUG_EVENT_LISTENER); /* 96 8* /
	void (*free)(ANTLR3_TOKEN_STREAM_struct* ); /* 104 8* /
};

// <06A53C8D> ../thirdparty/antlr/include/antlr3tokenstream.h:188
// member functions: 9
// member variables: 17
// struct size: 128
struct ANTLR3_COMMON_TOKEN_STREAM_struct {
	pANTLR3_TOKEN_STREAM tstream; /* 0 8 */
	void * super; /* 8 8 */
	pANTLR3_VECTOR tokens; /* 16 8 */
	pANTLR3_LIST channelOverrides; /* 24 8 */
	pANTLR3_LIST discardSet; /* 32 8 */
	ANTLR3_UINT32 channel; /* 40 4 */
	ANTLR3_BOOLEAN discardOffChannel; /* 44 4 */
	ANTLR3_INT32 p; /* 48 4 */
	void (*setTokenTypeChannel)(ANTLR3_COMMON_TOKEN_STREAM_struct* , ANTLR3_UINT32, ANTLR3_UINT32); /* 56 8* /
	void (*discardTokenType)(ANTLR3_COMMON_TOKEN_STREAM_struct* , ANTLR3_INT32); /* 64 8* /
	void (*discardOffChannelToks)(ANTLR3_COMMON_TOKEN_STREAM_struct* , ANTLR3_BOOLEAN); /* 72 8* /
	pANTLR3_VECTOR (*getTokens)(ANTLR3_COMMON_TOKEN_STREAM_struct* ); /* 80 8* /
	pANTLR3_LIST (*getTokenRange)(ANTLR3_COMMON_TOKEN_STREAM_struct* , ANTLR3_UINT32, ANTLR3_UINT32); /* 88 8* /
	pANTLR3_LIST (*getTokensSet)(ANTLR3_COMMON_TOKEN_STREAM_struct* , ANTLR3_UINT32, ANTLR3_UINT32, pANTLR3_BITSET); /* 96 8* /
	pANTLR3_LIST (*getTokensList)(ANTLR3_COMMON_TOKEN_STREAM_struct* , ANTLR3_UINT32, ANTLR3_UINT32, pANTLR3_LIST); /* 104 8* /
	pANTLR3_LIST (*getTokensType)(ANTLR3_COMMON_TOKEN_STREAM_struct* , ANTLR3_UINT32, ANTLR3_UINT32, ANTLR3_UINT32); /* 112 8* /
	void (*free)(ANTLR3_COMMON_TOKEN_STREAM_struct* ); /* 120 8* /
};

