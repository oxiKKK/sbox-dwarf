
//
// thirdparty/antlr/include/antlr3basetree.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A53F89> ../thirdparty/antlr/include/antlr3basetree.h:51
// member functions: 27
// member variables: 32
// struct size: 256
struct ANTLR3_BASE_TREE_struct {
	void * super; /* 0 8 */
	void * u; /* 8 8 */
	pANTLR3_VECTOR children; /* 16 8 */
	ANTLR3_MARKER savedIndex; /* 24 8 */
	pANTLR3_STRING_FACTORY strFactory; /* 32 8 */
	pANTLR3_COMMON_TOKEN (*getToken)(ANTLR3_BASE_TREE_struct* ); /* 40 8* /
	void (*addChild)(ANTLR3_BASE_TREE_struct* , void* ); /* 48 8* /
	void (*addChildren)(ANTLR3_BASE_TREE_struct* , pANTLR3_LIST); /* 56 8* /
	void (*createChildrenList)(ANTLR3_BASE_TREE_struct* ); /* 64 8* /
	void* (*deleteChild)(ANTLR3_BASE_TREE_struct* , ANTLR3_UINT32); /* 72 8* /
	void (*replaceChildren)(ANTLR3_BASE_TREE_struct* , ANTLR3_INT32, ANTLR3_INT32, ANTLR3_BASE_TREE_struct* ); /* 80 8* /
	void* (*dupNode)(ANTLR3_BASE_TREE_struct* ); /* 88 8* /
	void* (*dupTree)(ANTLR3_BASE_TREE_struct* ); /* 96 8* /
	ANTLR3_UINT32 (*getCharPositionInLine)(ANTLR3_BASE_TREE_struct* ); /* 104 8* /
	void* (*getChild)(ANTLR3_BASE_TREE_struct* , ANTLR3_UINT32); /* 112 8* /
	void (*setChildIndex)(ANTLR3_BASE_TREE_struct* , ANTLR3_INT32); /* 120 8* /
	ANTLR3_INT32 (*getChildIndex)(ANTLR3_BASE_TREE_struct* ); /* 128 8* /
	ANTLR3_UINT32 (*getChildCount)(ANTLR3_BASE_TREE_struct* ); /* 136 8* /
	ANTLR3_BASE_TREE_struct* (*getParent)(ANTLR3_BASE_TREE_struct* ); /* 144 8* /
	void (*setParent)(ANTLR3_BASE_TREE_struct* , ANTLR3_BASE_TREE_struct* ); /* 152 8* /
	ANTLR3_UINT32 (*getType)(ANTLR3_BASE_TREE_struct* ); /* 160 8* /
	void* (*getFirstChildWithType)(ANTLR3_BASE_TREE_struct* , ANTLR3_UINT32); /* 168 8* /
	ANTLR3_UINT32 (*getLine)(ANTLR3_BASE_TREE_struct* ); /* 176 8* /
	pANTLR3_STRING (*getText)(ANTLR3_BASE_TREE_struct* ); /* 184 8* /
	ANTLR3_BOOLEAN (*isNilNode)(ANTLR3_BASE_TREE_struct* ); /* 192 8* /
	void (*setChild)(ANTLR3_BASE_TREE_struct* , ANTLR3_UINT32, void* ); /* 200 8* /
	pANTLR3_STRING (*toStringTree)(ANTLR3_BASE_TREE_struct* ); /* 208 8* /
	pANTLR3_STRING (*toString)(ANTLR3_BASE_TREE_struct* ); /* 216 8* /
	void (*freshenPACIndexesAll)(ANTLR3_BASE_TREE_struct* ); /* 224 8* /
	void (*freshenPACIndexes)(ANTLR3_BASE_TREE_struct* , ANTLR3_UINT32); /* 232 8* /
	void (*reuse)(ANTLR3_BASE_TREE_struct* ); /* 240 8* /
	void (*free)(ANTLR3_BASE_TREE_struct* ); /* 248 8* /
};

