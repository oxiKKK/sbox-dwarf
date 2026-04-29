
//
// include/antlr3input.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 3
//	struct: 1
//

// <06AFB4D3> include/antlr3input.h:234
// member variables: 4
// struct size: 32
struct ANTLR3_LEX_STATE_struct {
	void * nextChar; /* 0 8 */
	ANTLR3_UINT32 line; /* 8 4 */
	void * currentLine; /* 16 8 */
	ANTLR3_INT32 charPositionInLine; /* 24 4 */
};

// <06AF479E> include/antlr3input.h:262
void antlr3AsciiSetupStream(pANTLR3_INPUT_STREAM, ANTLR3_UINT32)
{
} /* size: 0 */

// <06AF4784> include/antlr3input.h:263
void antlr3UCS2SetupStream(pANTLR3_INPUT_STREAM, ANTLR3_UINT32)
{
} /* size: 0 */

// <06AFA4E8> include/antlr3input.h:264
void antlr3GenericSetupStream(pANTLR3_INPUT_STREAM, ANTLR3_UINT32)
{
} /* size: 0 */

