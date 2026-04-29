
//
// thirdparty/antlr/include/antlr3recognizersharedstate.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	struct: 1
//

// <06A52B95> ../thirdparty/antlr/include/antlr3recognizersharedstate.h:57
// member variables: 27
// struct size: 184
struct ANTLR3_RECOGNIZER_SHARED_STATE_struct {
	ANTLR3_BOOLEAN error; /* 0 4 */
	pANTLR3_EXCEPTION exception; /* 8 8 */
	ANTLR3_UINT32 sizeHint; /* 16 4 */
	pANTLR3_STACK following; /* 24 8 */
	ANTLR3_BOOLEAN errorRecovery; /* 32 4 */
	ANTLR3_MARKER lastErrorIndex; /* 40 8 */
	ANTLR3_BOOLEAN failed; /* 48 4 */
	ANTLR3_UINT32 errorCount; /* 52 4 */
	ANTLR3_INT32 backtracking; /* 56 4 */
	pANTLR3_INT_TRIE ruleMemo; /* 64 8 */
	pANTLR3_UINT8 * tokenNames; /* 72 8 */
	void * userp; /* 80 8 */
	pANTLR3_COMMON_TOKEN token; /* 88 8 */
	pANTLR3_TOKEN_FACTORY tokFactory; /* 96 8 */
	pANTLR3_TOKEN_SOURCE tokSource; /* 104 8 */
	ANTLR3_UINT32 channel; /* 112 4 */
	ANTLR3_UINT32 type; /* 116 4 */
	ANTLR3_INT32 tokenStartLine; /* 120 4 */
	ANTLR3_INT32 tokenStartCharPositionInLine; /* 124 4 */
	ANTLR3_MARKER tokenStartCharIndex; /* 128 8 */
	pANTLR3_STRING text; /* 136 8 */
	ANTLR3_UINT32 user1; /* 144 4 */
	ANTLR3_UINT32 user2; /* 148 4 */
	ANTLR3_UINT32 user3; /* 152 4 */
	void * custom; /* 160 8 */
	pANTLR3_STACK streams; /* 168 8 */
	pANTLR3_VECTOR rStreams; /* 176 8 */
};

