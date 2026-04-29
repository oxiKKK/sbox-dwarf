
//
// thirdparty/antlr/antlr3lexer.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 27
//

// <06AEF174> thirdparty/antlr/antlr3lexer.c:72
// variables: 2
pANTLR3_LEXER antlr3LexerNew(ANTLR3_UINT32 sizeHint, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
	pANTLR3_LEXER lexer; // 74
	pANTLR3_COMMON_TOKEN specialT; // 75
} /* size: 0, variables: 2 */

// <06AEF11B> thirdparty/antlr/antlr3lexer.c:166
// variable: 1
void reset(pANTLR3_BASE_RECOGNIZER rec)
{
	pANTLR3_LEXER lexer; // 168
} /* size: 0, variables: 1 */

// <06AEEFEB> thirdparty/antlr/antlr3lexer.c:205
// variables: 2
pANTLR3_COMMON_TOKEN nextTokenStr(pANTLR3_TOKEN_SOURCE toksource)
{
	pANTLR3_LEXER lexer; // 207
	{
		pANTLR3_COMMON_TOKEN teof; // 241
	}
} /* size: 0, variables: 1 */

// <06AEEF3F> thirdparty/antlr/antlr3lexer.c:310
// variables: 2
pANTLR3_COMMON_TOKEN nextToken(pANTLR3_TOKEN_SOURCE toksource)
{
	pANTLR3_COMMON_TOKEN tok; // 312
	{
		pANTLR3_LEXER lexer; // 333
	}
} /* size: 0, variables: 1 */

// <06AEF40A> thirdparty/antlr/antlr3lexer.c:382
// function calls: 2
void mTokens(pANTLR3_LEXER lexer)
{
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 386
	mTokens(pANTLR3_LEXER lexer); // 382
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06AEEE6C> thirdparty/antlr/antlr3lexer.c:382
void mTokens(pANTLR3_LEXER lexer)
{
} /* size: 0 */

// <06AEEE23> thirdparty/antlr/antlr3lexer.c:391
void reportError(pANTLR3_BASE_RECOGNIZER rec)
{
} /* size: 0 */

// <06AEE9A3> thirdparty/antlr/antlr3lexer.c:408
// variables: 4
// function calls: 11
void displayRecognitionError(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_UINT8* tokenNames)
{
	pANTLR3_LEXER lexer; // 410
	pANTLR3_EXCEPTION ex; // 411
	pANTLR3_STRING ftext; // 412
	{
		ANTLR3_INT32 width; // 436
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 448
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 450
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 463
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 444
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 454
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 455
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 467
	}
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 426
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 429
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 430
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 421
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <06AEE92E> thirdparty/antlr/antlr3lexer.c:473
void setCharStream(pANTLR3_LEXER lexer, pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AEE89E> thirdparty/antlr/antlr3lexer.c:545
void pushCharStream(pANTLR3_LEXER lexer, pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AEF31F> thirdparty/antlr/antlr3lexer.c:591
// variable: 1
// function call: 1
void popCharStream(pANTLR3_LEXER lexer)
{
	pANTLR3_INPUT_STREAM input; // 593
	popCharStream(pANTLR3_LEXER lexer); // 591
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AEE875> thirdparty/antlr/antlr3lexer.c:591
// variable: 1
void popCharStream(pANTLR3_LEXER lexer)
{
	pANTLR3_INPUT_STREAM input; // 593
} /* size: 0, variables: 1 */

// <06AEE835> thirdparty/antlr/antlr3lexer.c:617
void emitNew(pANTLR3_LEXER lexer, pANTLR3_COMMON_TOKEN token)
{
} /* size: 0 */

// <06AEE7D4> thirdparty/antlr/antlr3lexer.c:623
// variable: 1
pANTLR3_COMMON_TOKEN emit(pANTLR3_LEXER lexer)
{
	pANTLR3_COMMON_TOKEN token; // 625
} /* size: 0, variables: 1 */

// <06AEE779> thirdparty/antlr/antlr3lexer.c:669
void freeLexer(pANTLR3_LEXER lexer)
{
} /* size: 0 */

// <06AEE705> thirdparty/antlr/antlr3lexer.c:708
ANTLR3_BOOLEAN matchs(pANTLR3_LEXER lexer, ANTLR3_UCHAR* string)
{
} /* size: 0 */

// <06AEE693> thirdparty/antlr/antlr3lexer.c:751
ANTLR3_BOOLEAN matchc(pANTLR3_LEXER lexer, ANTLR3_UCHAR c)
{
} /* size: 0 */

// <06AEE5F7> thirdparty/antlr/antlr3lexer.c:791
// variable: 1
ANTLR3_BOOLEAN matchRange(pANTLR3_LEXER lexer, ANTLR3_UCHAR low, ANTLR3_UCHAR high)
{
	ANTLR3_UCHAR c; // 793
} /* size: 0, variables: 1 */

// <06AEF2F5> thirdparty/antlr/antlr3lexer.c:830
void matchAny(pANTLR3_LEXER lexer)
{
} /* size: 0 */

// <06AEE5C0> thirdparty/antlr/antlr3lexer.c:836
void recover(pANTLR3_LEXER lexer)
{
} /* size: 0 */

// <06AEE586> thirdparty/antlr/antlr3lexer.c:842
ANTLR3_UINT32 getLine(pANTLR3_LEXER lexer)
{
} /* size: 0 */

// <06AEE54C> thirdparty/antlr/antlr3lexer.c:848
ANTLR3_UINT32 getCharPositionInLine(pANTLR3_LEXER lexer)
{
} /* size: 0 */

// <06AEE512> thirdparty/antlr/antlr3lexer.c:853
ANTLR3_MARKER getCharIndex(pANTLR3_LEXER lexer)
{
} /* size: 0 */

// <06AEF397> thirdparty/antlr/antlr3lexer.c:859
// function call: 1
pANTLR3_STRING getText(pANTLR3_LEXER lexer)
{
	getText(pANTLR3_LEXER lexer); // 859
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06AEE4F2> thirdparty/antlr/antlr3lexer.c:859
pANTLR3_STRING getText(pANTLR3_LEXER lexer)
{
} /* size: 0 */

// <06AEE4AE> thirdparty/antlr/antlr3lexer.c:875
void* getCurrentInputSymbol(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_INT_STREAM istream)
{
} /* size: 0 */

// <06AEE43F> thirdparty/antlr/antlr3lexer.c:881
void* getMissingSymbol(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_INT_STREAM istream, pANTLR3_EXCEPTION e, ANTLR3_UINT32 expectedTokenType, pANTLR3_BITSET_LIST follow)
{
} /* size: 0 */

