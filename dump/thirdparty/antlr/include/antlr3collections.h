
//
// thirdparty/antlr/include/antlr3collections.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	structs: 13
//

// <06A5479A> ../thirdparty/antlr/include/antlr3collections.h:43
// member variables: 2
// struct size: 16
struct ANTLR3_HASH_KEY_struct {
	/* ../thirdparty/antlr/include/antlr3collections.h:48 */
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

// <0027AC2D> ../../thirdparty/antlr/include/antlr3collections.h:43
// member variables: 2
// struct size: 16
struct ANTLR3_HASH_KEY_struct {
	/* ../../thirdparty/antlr/include/antlr3collections.h:48 */
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

// <06A53344> ../thirdparty/antlr/include/antlr3collections.h:61
// member function: 1
// member variables: 4
// struct size: 40
struct ANTLR3_HASH_ENTRY_struct {
	ANTLR3_HASH_KEY keybase; /* 0 16 */
	void * data; /* 16 8 */
	void (*free)(void* ); /* 24 8* /
	ANTLR3_HASH_ENTRY_struct * nextEntry; /* 32 8 */
};

// <06A53315> ../thirdparty/antlr/include/antlr3collections.h:90
// member variable: 1
// struct size: 8
struct ANTLR3_HASH_BUCKET_struct {
	pANTLR3_HASH_ENTRY entries; /* 0 8 */
};

// <06A533A0> ../thirdparty/antlr/include/antlr3collections.h:103
// member functions: 10
// member variables: 15
// struct size: 104
struct ANTLR3_HASH_TABLE_struct {
	int allowDups; /* 0 4 */
	ANTLR3_UINT32 modulo; /* 4 4 */
	pANTLR3_HASH_BUCKET buckets; /* 8 8 */
	ANTLR3_UINT32 count; /* 16 4 */
	ANTLR3_BOOLEAN doStrdup; /* 20 4 */
	void (*free)(ANTLR3_HASH_TABLE_struct* ); /* 24 8* /
	void (*del)(ANTLR3_HASH_TABLE_struct* , void* ); /* 32 8* /
	pANTLR3_HASH_ENTRY (*remove)(ANTLR3_HASH_TABLE_struct* , void* ); /* 40 8* /
	void* (*get)(ANTLR3_HASH_TABLE_struct* , void* ); /* 48 8* /
	ANTLR3_INT32 (*put)(ANTLR3_HASH_TABLE_struct* , void* , void* , void (*)(void* )); /* 56 8* /
	void (*delI)(ANTLR3_HASH_TABLE_struct* , ANTLR3_INTKEY); /* 64 8* /
	pANTLR3_HASH_ENTRY (*removeI)(ANTLR3_HASH_TABLE_struct* , ANTLR3_INTKEY); /* 72 8* /
	void* (*getI)(ANTLR3_HASH_TABLE_struct* , ANTLR3_INTKEY); /* 80 8* /
	ANTLR3_INT32 (*putI)(ANTLR3_HASH_TABLE_struct* , ANTLR3_INTKEY, void* , void (*)(void* )); /* 88 8* /
	ANTLR3_UINT32 (*size)(ANTLR3_HASH_TABLE_struct* ); /* 96 8* /
};

// <06A534A1> ../thirdparty/antlr/include/antlr3collections.h:180
// member functions: 7
// member variables: 8
// struct size: 64
struct ANTLR3_LIST_struct {
	pANTLR3_HASH_TABLE table; /* 0 8 */
	void (*free)(ANTLR3_LIST_struct* ); /* 8 8* /
	void (*del)(ANTLR3_LIST_struct* , ANTLR3_INTKEY); /* 16 8* /
	void* (*get)(ANTLR3_LIST_struct* , ANTLR3_INTKEY); /* 24 8* /
	void* (*remove)(ANTLR3_LIST_struct* , ANTLR3_INTKEY); /* 32 8* /
	ANTLR3_INT32 (*add)(ANTLR3_LIST_struct* , void* , void (*)(void* )); /* 40 8* /
	ANTLR3_INT32 (*put)(ANTLR3_LIST_struct* , ANTLR3_INTKEY, void* , void (*)(void* )); /* 48 8* /
	ANTLR3_UINT32 (*size)(ANTLR3_LIST_struct* ); /* 56 8* /
};

// <06A53632> ../thirdparty/antlr/include/antlr3collections.h:199
// member functions: 6
// member variables: 8
// struct size: 64
struct ANTLR3_STACK_struct {
	pANTLR3_VECTOR vector; /* 0 8 */
	void * top; /* 8 8 */
	void (*free)(ANTLR3_STACK_struct* ); /* 16 8* /
	void* (*pop)(ANTLR3_STACK_struct* ); /* 24 8* /
	void* (*get)(ANTLR3_STACK_struct* , ANTLR3_INTKEY); /* 32 8* /
	ANTLR3_BOOLEAN (*push)(ANTLR3_STACK_struct* , void* , void (*)(void* )); /* 40 8* /
	ANTLR3_UINT32 (*size)(ANTLR3_STACK_struct* ); /* 48 8* /
	void* (*peek)(ANTLR3_STACK_struct* ); /* 56 8* /
};

// <06A54A06> ../thirdparty/antlr/include/antlr3collections.h:220
// member function: 1
// member variables: 2
// struct size: 16
struct ANTLR3_VECTOR_ELEMENT_struct {
	void * element; /* 0 8 */
	void (*freeptr)(void* ); /* 8 8* /
};

// <06A53539> ../thirdparty/antlr/include/antlr3collections.h:235
// member functions: 8
// member variables: 13
// struct size: 344
struct ANTLR3_VECTOR_struct {
	pANTLR3_VECTOR_ELEMENT elements; /* 0 8 */
	ANTLR3_UINT32 count; /* 8 4 */
	ANTLR3_VECTOR_ELEMENT internal[16]; /* 16 256 */
	ANTLR3_BOOLEAN factoryMade; /* 272 4 */
	ANTLR3_UINT32 elementsSize; /* 276 4 */
	void (*free)(ANTLR3_VECTOR_struct* ); /* 280 8* /
	void (*del)(ANTLR3_VECTOR_struct* , ANTLR3_UINT32); /* 288 8* /
	void* (*get)(ANTLR3_VECTOR_struct* , ANTLR3_UINT32); /* 296 8* /
	void* (*remove)(ANTLR3_VECTOR_struct* , ANTLR3_UINT32); /* 304 8* /
	void (*clear)(ANTLR3_VECTOR_struct* ); /* 312 8* /
	ANTLR3_UINT32 (*add)(ANTLR3_VECTOR_struct* , void* , void (*)(void* )); /* 320 8* /
	ANTLR3_UINT32 (*set)(ANTLR3_VECTOR_struct* , ANTLR3_UINT32, void* , void (*)(void* ), ANTLR3_BOOLEAN); /* 328 8* /
	ANTLR3_UINT32 (*size)(ANTLR3_VECTOR_struct* ); /* 336 8* /
};

// <06A54AFE> ../thirdparty/antlr/include/antlr3collections.h:319
// member function: 1
// member variables: 4
// struct size: 32
struct ANTLR3_TRIE_ENTRY_struct {
	/* ../thirdparty/antlr/include/antlr3collections.h:324 */
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

// <0027AF8F> ../../thirdparty/antlr/include/antlr3collections.h:319
// member function: 1
// member variables: 4
// struct size: 32
struct ANTLR3_TRIE_ENTRY_struct {
	/* ../../thirdparty/antlr/include/antlr3collections.h:324 */
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

// <06A54B87> ../thirdparty/antlr/include/antlr3collections.h:336
// member variables: 5
// struct size: 40
struct ANTLR3_INT_TRIE_NODE_struct {
	ANTLR3_UINT32 bitNum; /* 0 4 */
	ANTLR3_INTKEY key; /* 8 8 */
	pANTLR3_TRIE_ENTRY buckets; /* 16 8 */
	ANTLR3_INT_TRIE_NODE_struct * leftN; /* 24 8 */
	ANTLR3_INT_TRIE_NODE_struct * rightN; /* 32 8 */
};

// <06A5444B> ../thirdparty/antlr/include/antlr3collections.h:362
// member functions: 4
// member variables: 8
// struct size: 56
struct ANTLR3_INT_TRIE_struct {
	pANTLR3_INT_TRIE_NODE root; /* 0 8 */
	pANTLR3_INT_TRIE_NODE current; /* 8 8 */
	ANTLR3_UINT32 count; /* 16 4 */
	ANTLR3_BOOLEAN allowDups; /* 20 4 */
	pANTLR3_TRIE_ENTRY (*get)(ANTLR3_INT_TRIE_struct* , ANTLR3_INTKEY); /* 24 8* /
	ANTLR3_BOOLEAN (*del)(ANTLR3_INT_TRIE_struct* , ANTLR3_INTKEY); /* 32 8* /
	ANTLR3_BOOLEAN (*add)(ANTLR3_INT_TRIE_struct* , ANTLR3_INTKEY, ANTLR3_UINT32, ANTLR3_INTKEY, void* , void (*)(void* )); /* 40 8* /
	void (*free)(ANTLR3_INT_TRIE_struct* ); /* 48 8* /
};

