
//
// thirdparty/antlr/include/antlr3debugeventlistener.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A544EC> ../thirdparty/antlr/include/antlr3debugeventlistener.h:63
// member functions: 34
// member variables: 41
// struct size: 320
struct ANTLR3_DEBUG_EVENT_LISTENER_struct {
	ANTLR3_UINT32 port; /* 0 4 */
	SOCKET socket; /* 4 4 */
	int PROTOCOL_VERSION; /* 8 4 */
	pANTLR3_STRING grammarFileName; /* 16 8 */
	ANTLR3_BOOLEAN initialized; /* 24 4 */
	pANTLR3_STRING tokenString; /* 32 8 */
	pANTLR3_BASE_TREE_ADAPTOR adaptor; /* 40 8 */
	ANTLR3_BOOLEAN (*handshake)(pANTLR3_DEBUG_EVENT_LISTENER); /* 48 8* /
	void (*enterRule)(pANTLR3_DEBUG_EVENT_LISTENER, const char* , const char* ); /* 56 8* /
	void (*enterAlt)(pANTLR3_DEBUG_EVENT_LISTENER, int); /* 64 8* /
	void (*exitRule)(pANTLR3_DEBUG_EVENT_LISTENER, const char* , const char* ); /* 72 8* /
	void (*enterSubRule)(pANTLR3_DEBUG_EVENT_LISTENER, int); /* 80 8* /
	void (*exitSubRule)(pANTLR3_DEBUG_EVENT_LISTENER, int); /* 88 8* /
	void (*enterDecision)(pANTLR3_DEBUG_EVENT_LISTENER, int); /* 96 8* /
	void (*exitDecision)(pANTLR3_DEBUG_EVENT_LISTENER, int); /* 104 8* /
	void (*consumeToken)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_COMMON_TOKEN); /* 112 8* /
	void (*consumeHiddenToken)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_COMMON_TOKEN); /* 120 8* /
	void (*LT)(pANTLR3_DEBUG_EVENT_LISTENER, int, pANTLR3_COMMON_TOKEN); /* 128 8* /
	void (*mark)(pANTLR3_DEBUG_EVENT_LISTENER, ANTLR3_MARKER); /* 136 8* /
	void (*rewind)(pANTLR3_DEBUG_EVENT_LISTENER, ANTLR3_MARKER); /* 144 8* /
	void (*rewindLast)(pANTLR3_DEBUG_EVENT_LISTENER); /* 152 8* /
	void (*beginBacktrack)(pANTLR3_DEBUG_EVENT_LISTENER, int); /* 160 8* /
	void (*endBacktrack)(pANTLR3_DEBUG_EVENT_LISTENER, int, ANTLR3_BOOLEAN); /* 168 8* /
	void (*location)(pANTLR3_DEBUG_EVENT_LISTENER, int, int); /* 176 8* /
	void (*recognitionException)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_EXCEPTION); /* 184 8* /
	void (*beginResync)(pANTLR3_DEBUG_EVENT_LISTENER); /* 192 8* /
	void (*endResync)(pANTLR3_DEBUG_EVENT_LISTENER); /* 200 8* /
	void (*semanticPredicate)(pANTLR3_DEBUG_EVENT_LISTENER, ANTLR3_BOOLEAN, const char* ); /* 208 8* /
	void (*commence)(pANTLR3_DEBUG_EVENT_LISTENER); /* 216 8* /
	void (*terminate)(pANTLR3_DEBUG_EVENT_LISTENER); /* 224 8* /
	void (*ack)(pANTLR3_DEBUG_EVENT_LISTENER); /* 232 8* /
	void (*consumeNode)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_BASE_TREE); /* 240 8* /
	void (*LTT)(pANTLR3_DEBUG_EVENT_LISTENER, int, pANTLR3_BASE_TREE); /* 248 8* /
	void (*nilNode)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_BASE_TREE); /* 256 8* /
	void (*errorNode)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_BASE_TREE); /* 264 8* /
	void (*createNode)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_BASE_TREE); /* 272 8* /
	void (*createNodeTok)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_BASE_TREE, pANTLR3_COMMON_TOKEN); /* 280 8* /
	void (*becomeRoot)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_BASE_TREE, pANTLR3_BASE_TREE); /* 288 8* /
	void (*addChild)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_BASE_TREE, pANTLR3_BASE_TREE); /* 296 8* /
	void (*setTokenBoundaries)(pANTLR3_DEBUG_EVENT_LISTENER, pANTLR3_BASE_TREE, ANTLR3_MARKER, ANTLR3_MARKER); /* 304 8* /
	void (*free)(pANTLR3_DEBUG_EVENT_LISTENER); /* 312 8* /
};

