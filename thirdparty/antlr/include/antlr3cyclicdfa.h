
//
// thirdparty/antlr/include/antlr3cyclicdfa.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06ABEA73> ../thirdparty/antlr/include/antlr3cyclicdfa.h:60
// member functions: 3
// member variables: 12
// struct size: 96
struct ANTLR3_CYCLIC_DFA_struct {
	const ANTLR3_INT32 decisionNumber; /* 0 4 */
	const pANTLR3_UCHAR description; /* 8 8 */
	ANTLR3_INT32 (*specialStateTransition)(void* , pANTLR3_BASE_RECOGNIZER, pANTLR3_INT_STREAM, ANTLR3_CYCLIC_DFA_struct* , ANTLR3_INT32); /* 16 8* /
	ANTLR3_INT32 (*specialTransition)(void* , pANTLR3_BASE_RECOGNIZER, pANTLR3_INT_STREAM, ANTLR3_CYCLIC_DFA_struct* , ANTLR3_INT32); /* 24 8* /
	ANTLR3_INT32 (*predict)(void* , pANTLR3_BASE_RECOGNIZER, pANTLR3_INT_STREAM, ANTLR3_CYCLIC_DFA_struct* ); /* 32 8* /
	const const ANTLR3_INT32 * eot; /* 40 8 */
	const const ANTLR3_INT32 * eof; /* 48 8 */
	const const ANTLR3_INT32 * min; /* 56 8 */
	const const ANTLR3_INT32 * max; /* 64 8 */
	const const ANTLR3_INT32 * accept; /* 72 8 */
	const const ANTLR3_INT32 * special; /* 80 8 */
	const const ANTLR3_INT32 * const * transition; /* 88 8 */
};

