
//
// thirdparty/antlr/antlr3commontoken.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 26
//

// <06AE5416> thirdparty/antlr/antlr3commontoken.c:73
// variable: 1
// function calls: 3
pANTLR3_COMMON_TOKEN antlr3CommonTokenNew(ANTLR3_UINT32 ttype)
{
	pANTLR3_COMMON_TOKEN token; // 75
	setCharPositionInLine(pANTLR3_COMMON_TOKEN token,
				ANTLR3_INT32 pos);  // 323
	antlr3SetTokenAPI(pANTLR3_COMMON_TOKEN token); // 292
	newToken(void); // 79
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06AE5514> thirdparty/antlr/antlr3commontoken.c:135
void setInputStream(pANTLR3_TOKEN_FACTORY factory, pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AE5292> thirdparty/antlr/antlr3commontoken.c:150
void newPool(pANTLR3_TOKEN_FACTORY factory)
{
} /* size: 0 */

// <06AE51A6> thirdparty/antlr/antlr3commontoken.c:179
// variable: 1
// function calls: 3
pANTLR3_COMMON_TOKEN newPoolToken(pANTLR3_TOKEN_FACTORY factory)
{
	pANTLR3_COMMON_TOKEN token; // 181
	setCharPositionInLine(pANTLR3_COMMON_TOKEN token,
				ANTLR3_INT32 pos);  // 323
	antlr3SetTokenAPI(pANTLR3_COMMON_TOKEN token); // 201
	newPool(pANTLR3_TOKEN_FACTORY factory); // 190
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06AE50DC> thirdparty/antlr/antlr3commontoken.c:215
// variables: 5
void factoryClose(pANTLR3_TOKEN_FACTORY factory)
{
	pANTLR3_COMMON_TOKEN pool; // 217
	ANTLR3_INT32 poolCount; // 218
	ANTLR3_UINT32 limit; // 219
	ANTLR3_UINT32 token; // 220
	pANTLR3_COMMON_TOKEN check; // 221
} /* size: 0, variables: 5 */

// <06AE50BC> thirdparty/antlr/antlr3commontoken.c:277
// variable: 1
pANTLR3_COMMON_TOKEN newToken(void)
{
	pANTLR3_COMMON_TOKEN token; // 279
} /* size: 0, variables: 1 */

// <06AE509F> thirdparty/antlr/antlr3commontoken.c:299
void antlr3SetTokenAPI(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE5016> thirdparty/antlr/antlr3commontoken.c:343
pANTLR3_STRING getText(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE5572> thirdparty/antlr/antlr3commontoken.c:406
// function call: 1
void setText8(pANTLR3_COMMON_TOKEN token, pANTLR3_UINT8 text)
{
	setText8(pANTLR3_COMMON_TOKEN token,
		pANTLR3_UINT8 text);  // 406
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06AE4FED> thirdparty/antlr/antlr3commontoken.c:406
void setText8(pANTLR3_COMMON_TOKEN token, pANTLR3_UINT8 text)
{
} /* size: 0 */

// <06AE4FAD> thirdparty/antlr/antlr3commontoken.c:442
void setText(pANTLR3_COMMON_TOKEN token, pANTLR3_STRING text)
{
} /* size: 0 */

// <06AE4F78> thirdparty/antlr/antlr3commontoken.c:455
ANTLR3_UINT32 getType(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE4F38> thirdparty/antlr/antlr3commontoken.c:460
void setType(pANTLR3_COMMON_TOKEN token, ANTLR3_UINT32 type)
{
} /* size: 0 */

// <06AE4F03> thirdparty/antlr/antlr3commontoken.c:465
ANTLR3_UINT32 getLine(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE4EC3> thirdparty/antlr/antlr3commontoken.c:470
void setLine(pANTLR3_COMMON_TOKEN token, ANTLR3_UINT32 line)
{
} /* size: 0 */

// <06AE4E8E> thirdparty/antlr/antlr3commontoken.c:475
ANTLR3_INT32 getCharPositionInLine(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE5546> thirdparty/antlr/antlr3commontoken.c:480
void setCharPositionInLine(pANTLR3_COMMON_TOKEN token, ANTLR3_INT32 pos)
{
} /* size: 0 */

// <06AE4E30> thirdparty/antlr/antlr3commontoken.c:485
ANTLR3_UINT32 getChannel(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE4DF0> thirdparty/antlr/antlr3commontoken.c:490
void setChannel(pANTLR3_COMMON_TOKEN token, ANTLR3_UINT32 channel)
{
} /* size: 0 */

// <06AE4DBB> thirdparty/antlr/antlr3commontoken.c:495
ANTLR3_MARKER getTokenIndex(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE4D7B> thirdparty/antlr/antlr3commontoken.c:500
void setTokenIndex(pANTLR3_COMMON_TOKEN token, ANTLR3_MARKER index)
{
} /* size: 0 */

// <06AE4D46> thirdparty/antlr/antlr3commontoken.c:505
ANTLR3_MARKER getStartIndex(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE4D06> thirdparty/antlr/antlr3commontoken.c:510
void setStartIndex(pANTLR3_COMMON_TOKEN token, ANTLR3_MARKER start)
{
} /* size: 0 */

// <06AE4CD1> thirdparty/antlr/antlr3commontoken.c:515
ANTLR3_MARKER getStopIndex(pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AE4C91> thirdparty/antlr/antlr3commontoken.c:520
void setStopIndex(pANTLR3_COMMON_TOKEN token, ANTLR3_MARKER stop)
{
} /* size: 0 */

// <06AE4973> thirdparty/antlr/antlr3commontoken.c:525
// variables: 2
pANTLR3_STRING toString(pANTLR3_COMMON_TOKEN token)
{
	pANTLR3_STRING text; // 527
	pANTLR3_STRING outtext; // 528
} /* size: 0, variables: 2 */

