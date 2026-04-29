
//
// thirdparty/antlr/antlr3tokenstream.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 45
//

// <06AF8EC3> thirdparty/antlr/antlr3tokenstream.c:92
// variable: 1
pANTLR3_TOKEN_STREAM antlr3TokenStreamNew(void)
{
	pANTLR3_TOKEN_STREAM stream; // 94
} /* size: 0, variables: 1 */

// <06AF8E78> thirdparty/antlr/antlr3tokenstream.c:114
void antlr3TokenStreamFree(pANTLR3_TOKEN_STREAM stream)
{
} /* size: 0 */

// <06AF8E2C> thirdparty/antlr/antlr3tokenstream.c:120
void antlr3CTSFree(pANTLR3_COMMON_TOKEN_STREAM stream)
{
} /* size: 0 */

// <06AF8D4E> thirdparty/antlr/antlr3tokenstream.c:159
// variable: 1
// function call: 1
pANTLR3_COMMON_TOKEN_STREAM antlr3CommonTokenDebugStreamSourceNew(ANTLR3_UINT32 hint, pANTLR3_TOKEN_SOURCE source, pANTLR3_DEBUG_EVENT_LISTENER debugger)
{
	pANTLR3_COMMON_TOKEN_STREAM stream; // 161
	antlr3CommonTokenStreamSourceNew(ANTLR3_UINT32 hint,
					pANTLR3_TOKEN_SOURCE source);  // 165
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AF8C49> thirdparty/antlr/antlr3tokenstream.c:207
// variable: 1
// function call: 1
pANTLR3_COMMON_TOKEN_STREAM antlr3CommonTokenStreamNew(ANTLR3_UINT32 hint)
{
	pANTLR3_COMMON_TOKEN_STREAM stream; // 209
	antlr3TokenStreamNew(void); // 222
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AF8C04> thirdparty/antlr/antlr3tokenstream.c:280
void setDebugListener(pANTLR3_TOKEN_STREAM ts, pANTLR3_DEBUG_EVENT_LISTENER debugger)
{
} /* size: 0 */

// <06AF8A10> thirdparty/antlr/antlr3tokenstream.c:304
// variables: 5
// function calls: 3
pANTLR3_COMMON_TOKEN tokLT(pANTLR3_TOKEN_STREAM ts, ANTLR3_INT32 k)
{
	ANTLR3_INT32 i; // 306
	ANTLR3_INT32 n; // 307
	pANTLR3_COMMON_TOKEN_STREAM cts; // 308
	{
		pANTLR3_COMMON_TOKEN teof; // 328
	}
	{
		pANTLR3_COMMON_TOKEN teof; // 348
	}
	skipOffTokenChannelsReverse(pANTLR3_COMMON_TOKEN_STREAM tokenStream,
					ANTLR3_INT32 x);  // 433
	LB(pANTLR3_COMMON_TOKEN_STREAM cts,
		ANTLR3_INT32 k);  // 314
	skipOffTokenChannels(pANTLR3_COMMON_TOKEN_STREAM tokenStream,
				ANTLR3_INT32 i);  // 343
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <06AF8962> thirdparty/antlr/antlr3tokenstream.c:367
// variables: 3
void consumeInitialHiddenTokens(pANTLR3_INT_STREAM is)
{
	ANTLR3_MARKER first; // 369
	ANTLR3_INT32 i; // 370
	pANTLR3_TOKEN_STREAM ts; // 371
} /* size: 0, variables: 3 */

// <06AF88C8> thirdparty/antlr/antlr3tokenstream.c:388
pANTLR3_COMMON_TOKEN dbgTokLT(pANTLR3_TOKEN_STREAM ts, ANTLR3_INT32 k)
{
} /* size: 0 */

// <06AF8888> thirdparty/antlr/antlr3tokenstream.c:405
// variables: 2
pANTLR3_COMMON_TOKEN LB(pANTLR3_COMMON_TOKEN_STREAM cts, ANTLR3_INT32 k)
{
	ANTLR3_INT32 i; // 407
	ANTLR3_INT32 n; // 408
} /* size: 0, variables: 2 */

// <06AF8814> thirdparty/antlr/antlr3tokenstream.c:448
// variable: 1
pANTLR3_COMMON_TOKEN get(pANTLR3_TOKEN_STREAM ts, ANTLR3_UINT32 i)
{
	pANTLR3_COMMON_TOKEN_STREAM cts; // 450
} /* size: 0, variables: 1 */

// <06AF87E0> thirdparty/antlr/antlr3tokenstream.c:458
pANTLR3_TOKEN_SOURCE getTokenSource(pANTLR3_TOKEN_STREAM ts)
{
} /* size: 0 */

// <06AF87A1> thirdparty/antlr/antlr3tokenstream.c:464
void setTokenSource(pANTLR3_TOKEN_STREAM ts, pANTLR3_TOKEN_SOURCE tokenSource)
{
} /* size: 0 */

// <06AF8729> thirdparty/antlr/antlr3tokenstream.c:471
// variable: 1
pANTLR3_STRING toString(pANTLR3_TOKEN_STREAM ts)
{
	pANTLR3_COMMON_TOKEN_STREAM cts; // 473
} /* size: 0, variables: 1 */

// <06AF8604> thirdparty/antlr/antlr3tokenstream.c:486
// variables: 5
pANTLR3_STRING toStringSS(pANTLR3_TOKEN_STREAM ts, ANTLR3_UINT32 start, ANTLR3_UINT32 stop)
{
	pANTLR3_STRING string; // 488
	pANTLR3_TOKEN_SOURCE tsource; // 489
	pANTLR3_COMMON_TOKEN tok; // 490
	ANTLR3_UINT32 i; // 491
	pANTLR3_COMMON_TOKEN_STREAM cts; // 492
} /* size: 0, variables: 5 */

// <06AF8564> thirdparty/antlr/antlr3tokenstream.c:531
pANTLR3_STRING toStringTT(pANTLR3_TOKEN_STREAM ts, pANTLR3_COMMON_TOKEN start, pANTLR3_COMMON_TOKEN stop)
{
} /* size: 0 */

// <06AF84B9> thirdparty/antlr/antlr3tokenstream.c:551
// variables: 2
// function call: 1
void consume(pANTLR3_INT_STREAM is)
{
	pANTLR3_COMMON_TOKEN_STREAM cts; // 553
	pANTLR3_TOKEN_STREAM ts; // 554
	skipOffTokenChannels(pANTLR3_COMMON_TOKEN_STREAM tokenStream,
				ANTLR3_INT32 i);  // 562
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06AF8372> thirdparty/antlr/antlr3tokenstream.c:571
// variables: 5
void dbgConsume(pANTLR3_INT_STREAM is)
{
	pANTLR3_TOKEN_STREAM ts; // 573
	ANTLR3_MARKER a; // 574
	ANTLR3_MARKER b; // 575
	pANTLR3_COMMON_TOKEN t; // 576
	{
		ANTLR3_MARKER i; // 600
	}
} /* size: 0, variables: 4 */

// <06AF829B> thirdparty/antlr/antlr3tokenstream.c:617
void setTokenTypeChannel(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_UINT32 ttype, ANTLR3_UINT32 channel)
{
} /* size: 0 */

// <06AF81D9> thirdparty/antlr/antlr3tokenstream.c:631
void discardTokenType(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_INT32 ttype)
{
} /* size: 0 */

// <06AF8199> thirdparty/antlr/antlr3tokenstream.c:645
void discardOffChannel(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_BOOLEAN discard)
{
} /* size: 0 */

// <06AF8148> thirdparty/antlr/antlr3tokenstream.c:651
pANTLR3_VECTOR getTokens(pANTLR3_COMMON_TOKEN_STREAM tokenStream)
{
} /* size: 0 */

// <06AF80BE> thirdparty/antlr/antlr3tokenstream.c:662
pANTLR3_LIST getTokenRange(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_UINT32 start, ANTLR3_UINT32 stop)
{
} /* size: 0 */

// <06AF7F4E> thirdparty/antlr/antlr3tokenstream.c:671
// variables: 4
pANTLR3_LIST getTokensSet(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_UINT32 start, ANTLR3_UINT32 stop, pANTLR3_BITSET types)
{
	pANTLR3_LIST filteredList; // 673
	ANTLR3_UINT32 i; // 674
	ANTLR3_UINT32 n; // 675
	pANTLR3_COMMON_TOKEN tok; // 676
} /* size: 0, variables: 4 */

// <06AF7E62> thirdparty/antlr/antlr3tokenstream.c:721
// variables: 2
pANTLR3_LIST getTokensList(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_UINT32 start, ANTLR3_UINT32 stop, pANTLR3_LIST list)
{
	pANTLR3_BITSET bitSet; // 723
	pANTLR3_LIST newlist; // 724
} /* size: 0, variables: 2 */

// <06AF7D66> thirdparty/antlr/antlr3tokenstream.c:737
// variables: 2
pANTLR3_LIST getTokensType(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_UINT32 start, ANTLR3_UINT32 stop, ANTLR3_UINT32 type)
{
	pANTLR3_BITSET bitSet; // 739
	pANTLR3_LIST newlist; // 740
} /* size: 0, variables: 2 */

// <06AF8EE6> thirdparty/antlr/antlr3tokenstream.c:751
// variables: 2
ANTLR3_UINT32 _LA(pANTLR3_INT_STREAM is, ANTLR3_INT32 i)
{
	pANTLR3_TOKEN_STREAM ts; // 753
	pANTLR3_COMMON_TOKEN tok; // 754
} /* size: 0, variables: 2 */

// <06AF7C21> thirdparty/antlr/antlr3tokenstream.c:773
// variable: 1
// function call: 1
ANTLR3_UINT32 dbgLA(pANTLR3_INT_STREAM is, ANTLR3_INT32 i)
{
	pANTLR3_TOKEN_STREAM ts; // 775
	_LA(pANTLR3_INT_STREAM is,
		ANTLR3_INT32 i);  // 784
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AF7BD6> thirdparty/antlr/antlr3tokenstream.c:788
ANTLR3_MARKER mark(pANTLR3_INT_STREAM is)
{
} /* size: 0 */

// <06AF7B77> thirdparty/antlr/antlr3tokenstream.c:797
// variable: 1
ANTLR3_MARKER dbgMark(pANTLR3_INT_STREAM is)
{
	pANTLR3_TOKEN_STREAM ts; // 799
} /* size: 0, variables: 1 */

// <06AF7B38> thirdparty/antlr/antlr3tokenstream.c:810
void release(pANTLR3_INT_STREAM is, ANTLR3_MARKER mark)
{
} /* size: 0 */

// <06AF8F8F> thirdparty/antlr/antlr3tokenstream.c:816
// variables: 2
// function call: 1
ANTLR3_UINT32 size(pANTLR3_INT_STREAM is)
{
	pANTLR3_COMMON_TOKEN_STREAM cts; // 818
	pANTLR3_TOKEN_STREAM ts; // 819
	size(pANTLR3_INT_STREAM is); // 816
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06AF7B00> thirdparty/antlr/antlr3tokenstream.c:816
// variables: 2
ANTLR3_UINT32 size(pANTLR3_INT_STREAM is)
{
	pANTLR3_COMMON_TOKEN_STREAM cts; // 818
	pANTLR3_TOKEN_STREAM ts; // 819
} /* size: 0, variables: 2 */

// <06AF7AA3> thirdparty/antlr/antlr3tokenstream.c:833
// variables: 2
ANTLR3_MARKER tindex(pANTLR3_INT_STREAM is)
{
	pANTLR3_COMMON_TOKEN_STREAM cts; // 835
	pANTLR3_TOKEN_STREAM ts; // 836
} /* size: 0, variables: 2 */

// <06AF7A46> thirdparty/antlr/antlr3tokenstream.c:845
// variable: 1
void dbgRewindLast(pANTLR3_INT_STREAM is)
{
	pANTLR3_TOKEN_STREAM ts; // 847
} /* size: 0, variables: 1 */

// <06AF79FE> thirdparty/antlr/antlr3tokenstream.c:856
void rewindLast(pANTLR3_INT_STREAM is)
{
} /* size: 0 */

// <06AF7994> thirdparty/antlr/antlr3tokenstream.c:861
void rewindStream(pANTLR3_INT_STREAM is, ANTLR3_MARKER marker)
{
} /* size: 0 */

// <06AF7901> thirdparty/antlr/antlr3tokenstream.c:866
// variable: 1
void dbgRewindStream(pANTLR3_INT_STREAM is, ANTLR3_MARKER marker)
{
	pANTLR3_TOKEN_STREAM ts; // 868
} /* size: 0, variables: 1 */

// <06AF8F49> thirdparty/antlr/antlr3tokenstream.c:878
// variables: 2
void seek(pANTLR3_INT_STREAM is, ANTLR3_MARKER index)
{
	pANTLR3_COMMON_TOKEN_STREAM cts; // 880
	pANTLR3_TOKEN_STREAM ts; // 881
} /* size: 0, variables: 2 */

// <06AF7899> thirdparty/antlr/antlr3tokenstream.c:889
void dbgSeek(pANTLR3_INT_STREAM is, ANTLR3_MARKER index)
{
} /* size: 0 */

// <06AF784B> thirdparty/antlr/antlr3tokenstream.c:896
void fillBufferExt(pANTLR3_COMMON_TOKEN_STREAM tokenStream)
{
} /* size: 0 */

// <06AF76D3> thirdparty/antlr/antlr3tokenstream.c:901
// variables: 4
// function call: 1
void fillBuffer(pANTLR3_COMMON_TOKEN_STREAM tokenStream)
{
	ANTLR3_UINT32 index; // 902
	pANTLR3_COMMON_TOKEN tok; // 903
	ANTLR3_BOOLEAN discard; // 904
	void* channelI; // 905
	skipOffTokenChannels(pANTLR3_COMMON_TOKEN_STREAM tokenStream,
				ANTLR3_INT32 i);  // 975
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06AF7690> thirdparty/antlr/antlr3tokenstream.c:983
// variables: 2
ANTLR3_UINT32 skipOffTokenChannels(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_INT32 i)
{
	ANTLR3_INT32 n; // 984
	pANTLR3_COMMON_TOKEN tok; // 985
} /* size: 0, variables: 2 */

// <06AF7658> thirdparty/antlr/antlr3tokenstream.c:1006
// variable: 1
ANTLR3_UINT32 skipOffTokenChannelsReverse(pANTLR3_COMMON_TOKEN_STREAM tokenStream, ANTLR3_INT32 x)
{
	pANTLR3_COMMON_TOKEN tok; // 1008
} /* size: 0, variables: 1 */

// <06AF7624> thirdparty/antlr/antlr3tokenstream.c:1034
pANTLR3_STRING getSourceName(pANTLR3_INT_STREAM is)
{
} /* size: 0 */

