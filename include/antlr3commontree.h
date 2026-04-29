
//
// include/antlr3commontree.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	structs: 2
//

// <06AD82E2> include/antlr3commontree.h:45
// member variables: 8
// struct size: 312
struct ANTLR3_COMMON_TREE_struct {
	void * super; /* 0 8 */
	ANTLR3_MARKER startIndex; /* 8 8 */
	ANTLR3_MARKER stopIndex; /* 16 8 */
	pANTLR3_COMMON_TOKEN token; /* 24 8 */
	pANTLR3_COMMON_TREE parent; /* 32 8 */
	ANTLR3_INT32 childIndex; /* 40 4 */
	pANTLR3_ARBORETUM factory; /* 48 8 */
	ANTLR3_BASE_TREE baseTree; /* 56 256 */
};

// <06AD837B> include/antlr3commontree.h:112
// member functions: 4
// member variables: 10
// struct size: 376
struct ANTLR3_ARBORETUM_struct {
	pANTLR3_COMMON_TREE * pools; /* 0 8 */
	ANTLR3_INT32 thisPool; /* 8 4 */
	ANTLR3_UINT32 nextTree; /* 12 4 */
	ANTLR3_COMMON_TREE unTruc; /* 16 312 */
	pANTLR3_VECTOR_FACTORY vFactory; /* 328 8 */
	pANTLR3_STACK nilStack; /* 336 8 */
	pANTLR3_BASE_TREE (*newTree)(ANTLR3_ARBORETUM_struct* ); /* 344 8* /
	pANTLR3_BASE_TREE (*newFromTree)(ANTLR3_ARBORETUM_struct* , pANTLR3_COMMON_TREE); /* 352 8* /
	pANTLR3_BASE_TREE (*newFromToken)(ANTLR3_ARBORETUM_struct* , pANTLR3_COMMON_TOKEN); /* 360 8* /
	void (*close)(ANTLR3_ARBORETUM_struct* ); /* 368 8* /
};

