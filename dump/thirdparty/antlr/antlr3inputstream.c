
//
// thirdparty/antlr/antlr3inputstream.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 22
//

// <06AFC33D> thirdparty/antlr/antlr3inputstream.c:149
pANTLR3_STRING antlr3AsciiGetSourceName(pANTLR3_INT_STREAM is)
{
} /* size: 0 */

// <06AFC2E4> thirdparty/antlr/antlr3inputstream.c:159
void antlr3InputClose(pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AFC2A7> thirdparty/antlr/antlr3inputstream.c:195
void antlr3AsciiSetUcaseLA(pANTLR3_INPUT_STREAM input, ANTLR3_BOOLEAN flag)
{
} /* size: 0 */

// <06AFC4F1> thirdparty/antlr/antlr3inputstream.c:217
void antlr3InputReset(pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AFC24B> thirdparty/antlr/antlr3inputstream.c:243
// variable: 1
void antlr3AsciiConsume(pANTLR3_INT_STREAM is)
{
	pANTLR3_INPUT_STREAM input; // 245
} /* size: 0, variables: 1 */

// <06AFC1F4> thirdparty/antlr/antlr3inputstream.c:278
// variable: 1
ANTLR3_UCHAR antlr3AsciiLA(pANTLR3_INT_STREAM is, ANTLR3_INT32 la)
{
	pANTLR3_INPUT_STREAM input; // 280
} /* size: 0, variables: 1 */

// <06AFC183> thirdparty/antlr/antlr3inputstream.c:305
// variable: 1
ANTLR3_UCHAR antlr3AsciiLA_ucase(pANTLR3_INT_STREAM is, ANTLR3_INT32 la)
{
	pANTLR3_INPUT_STREAM input; // 307
} /* size: 0, variables: 1 */

// <06AFC122> thirdparty/antlr/antlr3inputstream.c:330
void* antlr3AsciiLT(pANTLR3_INPUT_STREAM input, ANTLR3_INT32 lt)
{
} /* size: 0 */

// <06AFC0D9> thirdparty/antlr/antlr3inputstream.c:344
// variable: 1
ANTLR3_MARKER antlr3AsciiIndex(pANTLR3_INT_STREAM is)
{
	pANTLR3_INPUT_STREAM input; // 346
} /* size: 0, variables: 1 */

// <06AFC0A4> thirdparty/antlr/antlr3inputstream.c:361
ANTLR3_UINT32 antlr3AsciiSize(pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AFC00F> thirdparty/antlr/antlr3inputstream.c:373
// variables: 2
ANTLR3_MARKER antlr3AsciiMark(pANTLR3_INT_STREAM is)
{
	pANTLR3_LEX_STATE state; // 375
	pANTLR3_INPUT_STREAM input; // 376
} /* size: 0, variables: 2 */

// <06AFBFC7> thirdparty/antlr/antlr3inputstream.c:426
void antlr3AsciiRewindLast(pANTLR3_INT_STREAM is)
{
} /* size: 0 */

// <06AFBEBA> thirdparty/antlr/antlr3inputstream.c:439
// variables: 2
// function call: 1
void antlr3AsciiRewind(pANTLR3_INT_STREAM is, ANTLR3_MARKER mark)
{
	pANTLR3_LEX_STATE state; // 441
	pANTLR3_INPUT_STREAM input; // 442
	antlr3AsciiSeek(pANTLR3_INT_STREAM is,
			ANTLR3_MARKER seekPoint);  // 457
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06AFBE60> thirdparty/antlr/antlr3inputstream.c:478
// variable: 1
void antlr3AsciiRelease(pANTLR3_INT_STREAM is, ANTLR3_MARKER mark)
{
	pANTLR3_INPUT_STREAM input; // 480
} /* size: 0, variables: 1 */

// <06AFC48E> thirdparty/antlr/antlr3inputstream.c:498
// variables: 2
void antlr3AsciiSeek(pANTLR3_INT_STREAM is, ANTLR3_MARKER seekPoint)
{
	ANTLR3_INT32 count; // 500
	pANTLR3_INPUT_STREAM input; // 501
} /* size: 0, variables: 2 */

// <06AFBD9A> thirdparty/antlr/antlr3inputstream.c:531
pANTLR3_STRING antlr3AsciiSubstr(pANTLR3_INPUT_STREAM input, ANTLR3_MARKER start, ANTLR3_MARKER stop)
{
} /* size: 0 */

// <06AFBD65> thirdparty/antlr/antlr3inputstream.c:542
ANTLR3_UINT32 antlr3AsciiGetLine(pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AFBD30> thirdparty/antlr/antlr3inputstream.c:554
void* antlr3AsciiGetLineBuf(pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AFBCFB> thirdparty/antlr/antlr3inputstream.c:565
ANTLR3_UINT32 antlr3AsciiGetCharPosition(pANTLR3_INPUT_STREAM input)
{
} /* size: 0 */

// <06AFBCBB> thirdparty/antlr/antlr3inputstream.c:582
void antlr3AsciiSetLine(pANTLR3_INPUT_STREAM input, ANTLR3_UINT32 line)
{
} /* size: 0 */

// <06AFBC7B> thirdparty/antlr/antlr3inputstream.c:597
void antlr3AsciiSetCharPosition(pANTLR3_INPUT_STREAM input, ANTLR3_UINT32 position)
{
} /* size: 0 */

// <06AFBC3B> thirdparty/antlr/antlr3inputstream.c:613
void antlr3AsciiSetNewLineChar(pANTLR3_INPUT_STREAM input, ANTLR3_UINT32 newlineChar)
{
} /* size: 0 */

