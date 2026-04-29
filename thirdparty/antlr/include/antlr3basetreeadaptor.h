
//
// thirdparty/antlr/include/antlr3basetreeadaptor.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A54199> ../thirdparty/antlr/include/antlr3basetreeadaptor.h:48
// member functions: 38
// member variables: 42
// struct size: 336
struct ANTLR3_BASE_TREE_ADAPTOR_struct {
	void * super; /* 0 8 */
	pANTLR3_STRING_FACTORY strFactory; /* 8 8 */
	pANTLR3_TOKEN_FACTORY tokenFactory; /* 16 8 */
	pANTLR3_DEBUG_EVENT_LISTENER debugger; /* 24 8 */
	void* (*nilNode)(ANTLR3_BASE_TREE_ADAPTOR_struct* ); /* 32 8* /
	void* (*dupTree)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 40 8* /
	void* (*dupTreeTT)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , void* ); /* 48 8* /
	void (*addChild)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , void* ); /* 56 8* /
	void (*addChildToken)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , pANTLR3_COMMON_TOKEN); /* 64 8* /
	void (*setParent)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , void* ); /* 72 8* /
	void* (*errorNode)(ANTLR3_BASE_TREE_ADAPTOR_struct* , pANTLR3_TOKEN_STREAM, pANTLR3_COMMON_TOKEN, pANTLR3_COMMON_TOKEN, pANTLR3_EXCEPTION); /* 80 8* /
	ANTLR3_BOOLEAN (*isNilNode)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 88 8* /
	void* (*becomeRoot)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , void* ); /* 96 8* /
	void* (*rulePostProcessing)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 104 8* /
	void* (*becomeRootToken)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , void* ); /* 112 8* /
	void* (*create)(ANTLR3_BASE_TREE_ADAPTOR_struct* , pANTLR3_COMMON_TOKEN); /* 120 8* /
	void* (*createTypeToken)(ANTLR3_BASE_TREE_ADAPTOR_struct* , ANTLR3_UINT32, pANTLR3_COMMON_TOKEN); /* 128 8* /
	void* (*createTypeTokenText)(ANTLR3_BASE_TREE_ADAPTOR_struct* , ANTLR3_UINT32, pANTLR3_COMMON_TOKEN, pANTLR3_UINT8); /* 136 8* /
	void* (*createTypeText)(ANTLR3_BASE_TREE_ADAPTOR_struct* , ANTLR3_UINT32, pANTLR3_UINT8); /* 144 8* /
	void* (*dupNode)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 152 8* /
	ANTLR3_UINT32 (*getType)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 160 8* /
	void (*setType)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , ANTLR3_UINT32); /* 168 8* /
	pANTLR3_STRING (*getText)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 176 8* /
	void (*setText)(ANTLR3_BASE_TREE_ADAPTOR_struct* , pANTLR3_STRING); /* 184 8* /
	void (*setText8)(ANTLR3_BASE_TREE_ADAPTOR_struct* , pANTLR3_UINT8); /* 192 8* /
	void* (*getChild)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , ANTLR3_UINT32); /* 200 8* /
	void (*setChild)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , ANTLR3_UINT32, void* ); /* 208 8* /
	void (*deleteChild)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , ANTLR3_UINT32); /* 216 8* /
	void (*setChildIndex)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , ANTLR3_UINT32); /* 224 8* /
	ANTLR3_INT32 (*getChildIndex)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 232 8* /
	ANTLR3_UINT32 (*getChildCount)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 240 8* /
	ANTLR3_UINT32 (*getUniqueID)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 248 8* /
	pANTLR3_COMMON_TOKEN (*createToken)(ANTLR3_BASE_TREE_ADAPTOR_struct* , ANTLR3_UINT32, pANTLR3_UINT8); /* 256 8* /
	pANTLR3_COMMON_TOKEN (*createTokenFromToken)(ANTLR3_BASE_TREE_ADAPTOR_struct* , pANTLR3_COMMON_TOKEN); /* 264 8* /
	pANTLR3_COMMON_TOKEN (*getToken)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 272 8* /
	void (*setTokenBoundaries)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , pANTLR3_COMMON_TOKEN, pANTLR3_COMMON_TOKEN); /* 280 8* /
	ANTLR3_MARKER (*getTokenStartIndex)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 288 8* /
	ANTLR3_MARKER (*getTokenStopIndex)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 296 8* /
	void (*setDebugEventListener)(ANTLR3_BASE_TREE_ADAPTOR_struct* , pANTLR3_DEBUG_EVENT_LISTENER); /* 304 8* /
	pANTLR3_STRING (*makeDot)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* ); /* 312 8* /
	void (*replaceChildren)(ANTLR3_BASE_TREE_ADAPTOR_struct* , void* , ANTLR3_INT32, ANTLR3_INT32, void* ); /* 320 8* /
	void (*free)(ANTLR3_BASE_TREE_ADAPTOR_struct* ); /* 328 8* /
};

