
//
// include/antlr3collections.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	structs: 4
//

// <06AD8E33> include/antlr3collections.h:43
// member variables: 2
// struct size: 16
struct ANTLR3_HASH_KEY_struct {
	/* include/antlr3collections.h:48 */
	union {
		pANTLR3_UINT8 sKey; /* 0 8 */
		ANTLR3_INTKEY iKey; /* 0 8 */
	};
	ANTLR3_UINT8 type; /* 0 1 */
	union {
		pANTLR3_UINT8 sKey; /* 8 8 */
		ANTLR3_INTKEY iKey; /* 8 8 */
	} key; /* 8 8 */
};

// <06ADE027> include/antlr3collections.h:157
// member functions: 2
// member variables: 5
// struct size: 40
struct ANTLR3_HASH_ENUM_struct {
	pANTLR3_HASH_TABLE table; /* 0 8 */
	ANTLR3_UINT32 bucket; /* 8 4 */
	pANTLR3_HASH_ENTRY entry; /* 16 8 */
	int (*next)(ANTLR3_HASH_ENUM_struct* , pANTLR3_HASH_KEY* , void** ); /* 24 8* /
	void (*free)(ANTLR3_HASH_ENUM_struct* ); /* 32 8* /
};

// <06AD7601> include/antlr3collections.h:283
// member functions: 2
// member variables: 6
// struct size: 376
struct ANTLR3_VECTOR_FACTORY_struct {
	pANTLR3_VECTOR * pools; /* 0 8 */
	ANTLR3_INT32 thisPool; /* 8 4 */
	ANTLR3_UINT32 nextVector; /* 12 4 */
	ANTLR3_VECTOR unTruc; /* 16 344 */
	void (*close)(ANTLR3_VECTOR_FACTORY_struct* ); /* 360 8* /
	pANTLR3_VECTOR (*newVector)(ANTLR3_VECTOR_FACTORY_struct* ); /* 368 8* /
};

// <06AD91CD> include/antlr3collections.h:319
// member function: 1
// member variables: 4
// struct size: 32
struct ANTLR3_TRIE_ENTRY_struct {
	/* include/antlr3collections.h:324 */
	union {
		ANTLR3_INTKEY intVal; /* 0 8 */
		void * ptr; /* 0 8 */
	};
	ANTLR3_UINT32 type; /* 0 4 */
	void (*freeptr)(void* ); /* 8 8* /
	union {
		ANTLR3_INTKEY intVal; /* 16 8 */
		void * ptr; /* 16 8 */
	} data; /* 16 8 */
	ANTLR3_TRIE_ENTRY_struct * next; /* 24 8 */
};

