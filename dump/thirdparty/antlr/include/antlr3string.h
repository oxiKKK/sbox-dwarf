
//
// thirdparty/antlr/include/antlr3string.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	structs: 2
//

// <06A5396E> ../thirdparty/antlr/include/antlr3string.h:51
// member functions: 20
// member variables: 26
// struct size: 192
struct ANTLR3_STRING_struct {
	pANTLR3_STRING_FACTORY factory; /* 0 8 */
	pANTLR3_UINT8 chars; /* 8 8 */
	ANTLR3_UINT32 len; /* 16 4 */
	ANTLR3_UINT32 size; /* 20 4 */
	ANTLR3_UINT32 index; /* 24 4 */
	ANTLR3_UINT8 encoding; /* 28 1 */
	pANTLR3_UINT8 (*set)(ANTLR3_STRING_struct* , const char* ); /* 32 8* /
	pANTLR3_UINT8 (*set8)(ANTLR3_STRING_struct* , const char* ); /* 40 8* /
	pANTLR3_UINT8 (*append)(ANTLR3_STRING_struct* , const char* ); /* 48 8* /
	pANTLR3_UINT8 (*append8)(ANTLR3_STRING_struct* , const char* ); /* 56 8* /
	pANTLR3_UINT8 (*insert)(ANTLR3_STRING_struct* , ANTLR3_UINT32, const char* ); /* 64 8* /
	pANTLR3_UINT8 (*insert8)(ANTLR3_STRING_struct* , ANTLR3_UINT32, const char* ); /* 72 8* /
	pANTLR3_UINT8 (*setS)(ANTLR3_STRING_struct* , ANTLR3_STRING_struct* ); /* 80 8* /
	pANTLR3_UINT8 (*appendS)(ANTLR3_STRING_struct* , ANTLR3_STRING_struct* ); /* 88 8* /
	pANTLR3_UINT8 (*insertS)(ANTLR3_STRING_struct* , ANTLR3_UINT32, ANTLR3_STRING_struct* ); /* 96 8* /
	pANTLR3_UINT8 (*inserti)(ANTLR3_STRING_struct* , ANTLR3_UINT32, ANTLR3_INT32); /* 104 8* /
	pANTLR3_UINT8 (*addc)(ANTLR3_STRING_struct* , ANTLR3_UINT32); /* 112 8* /
	pANTLR3_UINT8 (*addi)(ANTLR3_STRING_struct* , ANTLR3_INT32); /* 120 8* /
	ANTLR3_UINT32 (*compare8)(ANTLR3_STRING_struct* , const char* ); /* 128 8* /
	ANTLR3_UINT32 (*compare)(ANTLR3_STRING_struct* , const char* ); /* 136 8* /
	ANTLR3_UINT32 (*compareS)(ANTLR3_STRING_struct* , ANTLR3_STRING_struct* ); /* 144 8* /
	ANTLR3_UCHAR (*charAt)(ANTLR3_STRING_struct* , ANTLR3_UINT32); /* 152 8* /
	ANTLR3_STRING_struct* (*subString)(ANTLR3_STRING_struct* , ANTLR3_UINT32, ANTLR3_UINT32); /* 160 8* /
	ANTLR3_INT32 (*toInt32)(ANTLR3_STRING_struct* ); /* 168 8* /
	ANTLR3_STRING_struct* (*to8)(ANTLR3_STRING_struct* ); /* 176 8* /
	ANTLR3_STRING_struct* (*toUTF8)(ANTLR3_STRING_struct* ); /* 184 8* /
};

// <06A538A7> ../thirdparty/antlr/include/antlr3string.h:210
// member functions: 9
// member variables: 11
// struct size: 88
struct ANTLR3_STRING_FACTORY_struct {
	pANTLR3_VECTOR strings; /* 0 8 */
	ANTLR3_UINT32 index; /* 8 4 */
	pANTLR3_STRING (*newRaw)(ANTLR3_STRING_FACTORY_struct* ); /* 16 8* /
	pANTLR3_STRING (*newSize)(ANTLR3_STRING_FACTORY_struct* , ANTLR3_UINT32); /* 24 8* /
	pANTLR3_STRING (*newPtr)(ANTLR3_STRING_FACTORY_struct* , pANTLR3_UINT8, ANTLR3_UINT32); /* 32 8* /
	pANTLR3_STRING (*newPtr8)(ANTLR3_STRING_FACTORY_struct* , pANTLR3_UINT8, ANTLR3_UINT32); /* 40 8* /
	pANTLR3_STRING (*newStr)(ANTLR3_STRING_FACTORY_struct* , pANTLR3_UINT8); /* 48 8* /
	pANTLR3_STRING (*newStr8)(ANTLR3_STRING_FACTORY_struct* , pANTLR3_UINT8); /* 56 8* /
	void (*destroy)(ANTLR3_STRING_FACTORY_struct* , pANTLR3_STRING); /* 64 8* /
	pANTLR3_STRING (*printable)(ANTLR3_STRING_FACTORY_struct* , pANTLR3_STRING); /* 72 8* /
	void (*close)(ANTLR3_STRING_FACTORY_struct* ); /* 80 8* /
};

