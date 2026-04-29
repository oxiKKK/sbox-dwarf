
//
// thirdparty/antlr/include/antlr3bitset.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	structs: 2
//

// <06A52D52> ../thirdparty/antlr/include/antlr3bitset.h:69
// member variables: 2
// struct size: 16
struct ANTLR3_BITSET_LIST_struct {
	pANTLR3_BITWORD bits; /* 0 8 */
	ANTLR3_UINT32 length; /* 8 4 */
};

// <06A52D90> ../thirdparty/antlr/include/antlr3bitset.h:87
// member functions: 13
// member variables: 14
// struct size: 120
struct ANTLR3_BITSET_struct {
	ANTLR3_BITSET_LIST blist; /* 0 16 */
	pANTLR3_BITSET (*clone)(ANTLR3_BITSET_struct* ); /* 16 8* /
	pANTLR3_BITSET (*bor)(ANTLR3_BITSET_struct* , ANTLR3_BITSET_struct* ); /* 24 8* /
	void (*borInPlace)(ANTLR3_BITSET_struct* , ANTLR3_BITSET_struct* ); /* 32 8* /
	ANTLR3_UINT32 (*size)(ANTLR3_BITSET_struct* ); /* 40 8* /
	void (*add)(ANTLR3_BITSET_struct* , ANTLR3_INT32); /* 48 8* /
	void (*grow)(ANTLR3_BITSET_struct* , ANTLR3_INT32); /* 56 8* /
	ANTLR3_BOOLEAN (*equals)(ANTLR3_BITSET_struct* , ANTLR3_BITSET_struct* ); /* 64 8* /
	ANTLR3_BOOLEAN (*isMember)(ANTLR3_BITSET_struct* , ANTLR3_UINT32); /* 72 8* /
	ANTLR3_UINT32 (*numBits)(ANTLR3_BITSET_struct* ); /* 80 8* /
	void (*remove)(ANTLR3_BITSET_struct* , ANTLR3_UINT32); /* 88 8* /
	ANTLR3_BOOLEAN (*isNilNode)(ANTLR3_BITSET_struct* ); /* 96 8* /
	pANTLR3_INT32 (*toIntList)(ANTLR3_BITSET_struct* ); /* 104 8* /
	void (*free)(ANTLR3_BITSET_struct* ); /* 112 8* /
};

