
//
// thirdparty/antlr/include/antlr3exception.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A531A9> ../thirdparty/antlr/include/antlr3exception.h:103
// member functions: 3
// member variables: 22
// struct size: 160
struct ANTLR3_EXCEPTION_struct {
	ANTLR3_UINT32 type; /* 0 4 */
	void * name; /* 8 8 */
	void * message; /* 16 8 */
	pANTLR3_STRING streamName; /* 24 8 */
	ANTLR3_BOOLEAN freeMessage; /* 32 4 */
	ANTLR3_MARKER index; /* 40 8 */
	void * token; /* 48 8 */
	ANTLR3_UINT32 expecting; /* 56 4 */
	pANTLR3_BITSET_LIST expectingSet; /* 64 8 */
	void * node; /* 72 8 */
	ANTLR3_UCHAR c; /* 80 4 */
	ANTLR3_UINT32 line; /* 84 4 */
	ANTLR3_INT32 charPositionInLine; /* 88 4 */
	ANTLR3_UINT32 decisionNum; /* 92 4 */
	ANTLR3_UINT32 state; /* 96 4 */
	void * ruleName; /* 104 8 */
	ANTLR3_EXCEPTION_struct * nextException; /* 112 8 */
	pANTLR3_INT_STREAM input; /* 120 8 */
	void * custom; /* 128 8 */
	void (*freeCustom)(void* ); /* 136 8* /
	void (*print)(ANTLR3_EXCEPTION_struct* ); /* 144 8* /
	void (*freeEx)(ANTLR3_EXCEPTION_struct* ); /* 152 8* /
};

