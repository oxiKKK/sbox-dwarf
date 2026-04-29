
//
// thirdparty/antlr/antlr3parser.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 6
//

// <06AF31C1> thirdparty/antlr/antlr3parser.c:44
// variable: 1
// function call: 1
pANTLR3_PARSER antlr3ParserNewStreamDbg(ANTLR3_UINT32 sizeHint, pANTLR3_TOKEN_STREAM tstream, pANTLR3_DEBUG_EVENT_LISTENER dbg, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
	pANTLR3_PARSER parser; // 46
	antlr3ParserNewStream(ANTLR3_UINT32 sizeHint,
				pANTLR3_TOKEN_STREAM tstream,
				pANTLR3_RECOGNIZER_SHARED_STATE state);  // 48
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AF3113> thirdparty/antlr/antlr3parser.c:61
// variable: 1
pANTLR3_PARSER antlr3ParserNew(ANTLR3_UINT32 sizeHint, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
	pANTLR3_PARSER parser; // 63
} /* size: 0, variables: 1 */

// <06AF3084> thirdparty/antlr/antlr3parser.c:122
void freeParser(pANTLR3_PARSER parser)
{
} /* size: 0 */

// <06AF3029> thirdparty/antlr/antlr3parser.c:146
void setDebugListener(pANTLR3_PARSER parser, pANTLR3_DEBUG_EVENT_LISTENER dbg)
{
} /* size: 0 */

// <06AF2FE1> thirdparty/antlr/antlr3parser.c:169
void setTokenStream(pANTLR3_PARSER parser, pANTLR3_TOKEN_STREAM tstream)
{
} /* size: 0 */

// <06AF2FAE> thirdparty/antlr/antlr3parser.c:176
pANTLR3_TOKEN_STREAM getTokenStream(pANTLR3_PARSER parser)
{
} /* size: 0 */

