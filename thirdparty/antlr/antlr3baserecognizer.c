
//
// thirdparty/antlr/antlr3baserecognizer.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 36
//

// <06ADCF89> thirdparty/antlr/antlr3baserecognizer.c:84
// variable: 1
pANTLR3_BASE_RECOGNIZER antlr3BaseRecognizerNew(ANTLR3_UINT32 type, ANTLR3_UINT32 sizeHint, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
	pANTLR3_BASE_RECOGNIZER recognizer; // 86
} /* size: 0, variables: 1 */

// <06ADCF1C> thirdparty/antlr/antlr3baserecognizer.c:198
// variable: 1
void freeBR(pANTLR3_BASE_RECOGNIZER recognizer)
{
	pANTLR3_EXCEPTION thisE; // 200
} /* size: 0, variables: 1 */

// <06ADCF01> thirdparty/antlr/antlr3baserecognizer.c:254
void antlr3MTExceptionNew(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADCB68> thirdparty/antlr/antlr3baserecognizer.c:415
// variables: 4
// function call: 1
void* match(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_UINT32 ttype, pANTLR3_BITSET_LIST follow)
{
	pANTLR3_PARSER parser; // 418
	pANTLR3_TREE_PARSER tparser; // 419
	pANTLR3_INT_STREAM is; // 420
	void* matchedSymbol; // 421
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 443
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06ADCA9B> thirdparty/antlr/antlr3baserecognizer.c:489
// variables: 3
// function call: 1
void matchAny(pANTLR3_BASE_RECOGNIZER recognizer)
{
	pANTLR3_PARSER parser; // 491
	pANTLR3_TREE_PARSER tparser; // 492
	pANTLR3_INT_STREAM is; // 493
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 515
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <06ADD0C0> thirdparty/antlr/antlr3baserecognizer.c:529
// variable: 1
ANTLR3_BOOLEAN mismatchIsUnwantedToken(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_INT_STREAM is, ANTLR3_UINT32 ttype)
{
	ANTLR3_UINT32 nextt; // 531
} /* size: 0, variables: 1 */

// <06ADC89E> thirdparty/antlr/antlr3baserecognizer.c:552
// variables: 3
ANTLR3_BOOLEAN mismatchIsMissingToken(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_INT_STREAM is, pANTLR3_BITSET_LIST follow)
{
	ANTLR3_BOOLEAN retcode; // 554
	pANTLR3_BITSET followClone; // 555
	pANTLR3_BITSET viableTokensFollowingThisRule; // 556
} /* size: 0, variables: 3 */

// <06ADD1D7> thirdparty/antlr/antlr3baserecognizer.c:644
// variables: 3
// function calls: 5
void mismatch(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_UINT32 ttype, pANTLR3_BITSET_LIST follow)
{
	pANTLR3_PARSER parser; // 646
	pANTLR3_TREE_PARSER tparser; // 647
	pANTLR3_INT_STREAM is; // 648
	antlr3MTExceptionNew(pANTLR3_BASE_RECOGNIZER recognizer); // 652
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 667
	mismatchIsUnwantedToken(pANTLR3_BASE_RECOGNIZER recognizer,
				pANTLR3_INT_STREAM is,
				ANTLR3_UINT32 ttype);  // 673
	antlr3MTExceptionNew(pANTLR3_BASE_RECOGNIZER recognizer); // 703
	mismatch(pANTLR3_BASE_RECOGNIZER recognizer,
		ANTLR3_UINT32 ttype,
		pANTLR3_BITSET_LIST follow);  // 644
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <06ADC842> thirdparty/antlr/antlr3baserecognizer.c:644
// variables: 3
void mismatch(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_UINT32 ttype, pANTLR3_BITSET_LIST follow)
{
	pANTLR3_PARSER parser; // 646
	pANTLR3_TREE_PARSER tparser; // 647
	pANTLR3_INT_STREAM is; // 648
} /* size: 0, variables: 3 */

// <06ADC7F9> thirdparty/antlr/antlr3baserecognizer.c:723
void reportError(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADC79B> thirdparty/antlr/antlr3baserecognizer.c:746
void beginBacktrack(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_UINT32 level)
{
} /* size: 0 */

// <06ADC721> thirdparty/antlr/antlr3baserecognizer.c:755
void endBacktrack(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_UINT32 level, ANTLR3_BOOLEAN successful)
{
} /* size: 0 */

// <06ADC6EB> thirdparty/antlr/antlr3baserecognizer.c:763
void beginResync(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADC6B5> thirdparty/antlr/antlr3baserecognizer.c:772
void endResync(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADD129> thirdparty/antlr/antlr3baserecognizer.c:874
pANTLR3_BITSET computeErrorRecoverySet(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADC676> thirdparty/antlr/antlr3baserecognizer.c:934
pANTLR3_BITSET computeCSRuleFollow(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADC517> thirdparty/antlr/antlr3baserecognizer.c:942
// variables: 4
pANTLR3_BITSET combineFollows(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_BOOLEAN exact)
{
	pANTLR3_BITSET followSet; // 944
	pANTLR3_BITSET localFollowSet; // 945
	ANTLR3_UINT32 top; // 946
	ANTLR3_UINT32 i; // 947
} /* size: 0, variables: 4 */

// <06ADBA1A> thirdparty/antlr/antlr3baserecognizer.c:1003
// variables: 14
// function calls: 28
void displayRecognitionError(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_UINT8* tokenNames)
{
	pANTLR3_PARSER parser; // 1005
	pANTLR3_TREE_PARSER tparser; // 1006
	pANTLR3_INT_STREAM is; // 1007
	pANTLR3_STRING ttext; // 1008
	pANTLR3_STRING ftext; // 1009
	pANTLR3_EXCEPTION ex; // 1010
	pANTLR3_COMMON_TOKEN theToken; // 1011
	pANTLR3_BASE_TREE theBaseTree; // 1012
	pANTLR3_COMMON_TREE theCommonTree; // 1013
	{
		ANTLR3_UINT32 count; // 1223
		ANTLR3_UINT32 bit; // 1224
		ANTLR3_UINT32 size; // 1225
		ANTLR3_UINT32 numbits; // 1226
		pANTLR3_BITSET errBits; // 1227
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 1233
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 1260
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 1256
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 1264
		fprintf(FILE* __stream,
			const char* __fmt, ...);  // 1265
	}
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1036
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1042
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1043
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1095
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1096
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1286
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1194
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1216
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1204
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1165
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1141
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1276
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1137
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1161
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1200
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1131
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1155
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1102
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1063
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1074
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1030
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1026
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1068
} /* size: 0, variables: 9, inline expansions: 23 (0 bytes) */

// <06ADB9E5> thirdparty/antlr/antlr3baserecognizer.c:1305
ANTLR3_UINT32 getNumberOfSyntaxErrors(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADB85B> thirdparty/antlr/antlr3baserecognizer.c:1315
// variables: 4
// function call: 1
void recover(pANTLR3_BASE_RECOGNIZER recognizer)
{
	pANTLR3_BITSET followSet; // 1319
	pANTLR3_PARSER parser; // 1320
	pANTLR3_TREE_PARSER tparser; // 1321
	pANTLR3_INT_STREAM is; // 1322
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1344
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06ADB622> thirdparty/antlr/antlr3baserecognizer.c:1427
// variables: 4
// function call: 1
void* recoverFromMismatchedToken(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_UINT32 ttype, pANTLR3_BITSET_LIST follow)
{
	pANTLR3_PARSER parser; // 1429
	pANTLR3_TREE_PARSER tparser; // 1430
	pANTLR3_INT_STREAM is; // 1431
	void* matchedSymbol; // 1432
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1461
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06ADB4CD> thirdparty/antlr/antlr3baserecognizer.c:1557
// variables: 4
// function call: 1
void* recoverFromMismatchedSet(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_BITSET_LIST follow)
{
	pANTLR3_PARSER parser; // 1559
	pANTLR3_TREE_PARSER tparser; // 1560
	pANTLR3_INT_STREAM is; // 1561
	pANTLR3_COMMON_TOKEN matchedSymbol; // 1562
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1584
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06ADB2DD> thirdparty/antlr/antlr3baserecognizer.c:1621
// variables: 5
// function call: 1
ANTLR3_BOOLEAN recoverFromMismatchedElement(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_BITSET_LIST followBits)
{
	pANTLR3_BITSET viableToksFollowingRule; // 1623
	pANTLR3_BITSET follow; // 1624
	pANTLR3_PARSER parser; // 1625
	pANTLR3_TREE_PARSER tparser; // 1626
	pANTLR3_INT_STREAM is; // 1627
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1649
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <06ADB19E> thirdparty/antlr/antlr3baserecognizer.c:1718
// variables: 4
// function call: 1
void consumeUntil(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_UINT32 tokenType)
{
	ANTLR3_UINT32 ttype; // 1720
	pANTLR3_PARSER parser; // 1721
	pANTLR3_TREE_PARSER tparser; // 1722
	pANTLR3_INT_STREAM is; // 1723
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1745
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06ADB064> thirdparty/antlr/antlr3baserecognizer.c:1768
// variables: 4
// function call: 1
void consumeUntilSet(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_BITSET set)
{
	ANTLR3_UINT32 ttype; // 1770
	pANTLR3_PARSER parser; // 1771
	pANTLR3_TREE_PARSER tparser; // 1772
	pANTLR3_INT_STREAM is; // 1773
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1795
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06ADB02F> thirdparty/antlr/antlr3baserecognizer.c:1820
pANTLR3_STACK getRuleInvocationStack(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADD16B> thirdparty/antlr/antlr3baserecognizer.c:1826
pANTLR3_STACK getRuleInvocationStackNamed(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_UINT8 name)
{
} /* size: 0 */

// <06ADAFD6> thirdparty/antlr/antlr3baserecognizer.c:1834
pANTLR3_HASH_TABLE toStrings(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_HASH_TABLE tokens)
{
} /* size: 0 */

// <06ADAF8D> thirdparty/antlr/antlr3baserecognizer.c:1840
void freeIntTrie(void* trie)
{
} /* size: 0 */

// <06ADAE81> thirdparty/antlr/antlr3baserecognizer.c:1857
// variables: 3
ANTLR3_MARKER getRuleMemoization(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_INTKEY ruleIndex, ANTLR3_MARKER ruleParseStart)
{
	pANTLR3_INT_TRIE ruleList; // 1861
	ANTLR3_MARKER stopIndex; // 1862
	pANTLR3_TRIE_ENTRY entry; // 1863
} /* size: 0, variables: 3 */

// <06ADAD2A> thirdparty/antlr/antlr3baserecognizer.c:1920
// variables: 5
// function call: 1
ANTLR3_BOOLEAN alreadyParsedRule(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_MARKER ruleIndex)
{
	ANTLR3_MARKER stopIndex; // 1922
	pANTLR3_LEXER lexer; // 1923
	pANTLR3_PARSER parser; // 1924
	pANTLR3_TREE_PARSER tparser; // 1925
	pANTLR3_INT_STREAM is; // 1926
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1958
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <06ADABB8> thirdparty/antlr/antlr3baserecognizer.c:1991
// variables: 7
// function call: 1
void memoize(pANTLR3_BASE_RECOGNIZER recognizer, ANTLR3_MARKER ruleIndex, ANTLR3_MARKER ruleParseStart)
{
	pANTLR3_INT_TRIE ruleList; // 1995
	pANTLR3_TRIE_ENTRY entry; // 1996
	ANTLR3_MARKER stopIndex; // 1997
	pANTLR3_LEXER lexer; // 1998
	pANTLR3_PARSER parser; // 1999
	pANTLR3_TREE_PARSER tparser; // 2000
	pANTLR3_INT_STREAM is; // 2001
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 2031
} /* size: 0, variables: 7, inline expansions: 1 (0 bytes) */

// <06ADAA60> thirdparty/antlr/antlr3baserecognizer.c:2057
// variables: 4
// function call: 1
ANTLR3_BOOLEAN synpred(pANTLR3_BASE_RECOGNIZER recognizer, void* ctx, void (*predicate)(void *))
{
	ANTLR3_MARKER start; // 2059
	pANTLR3_PARSER parser; // 2060
	pANTLR3_TREE_PARSER tparser; // 2061
	pANTLR3_INT_STREAM is; // 2062
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 2084
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06ADA9FE> thirdparty/antlr/antlr3baserecognizer.c:2122
void reset(pANTLR3_BASE_RECOGNIZER recognizer)
{
} /* size: 0 */

// <06ADA99E> thirdparty/antlr/antlr3baserecognizer.c:2158
void* getCurrentInputSymbol(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_INT_STREAM istream)
{
} /* size: 0 */

// <06ADA761> thirdparty/antlr/antlr3baserecognizer.c:2167
// variables: 5
void* getMissingSymbol(pANTLR3_BASE_RECOGNIZER recognizer, pANTLR3_INT_STREAM istream, pANTLR3_EXCEPTION e, ANTLR3_UINT32 expectedTokenType, pANTLR3_BITSET_LIST follow)
{
	pANTLR3_TOKEN_STREAM ts; // 2170
	pANTLR3_COMMON_TOKEN_STREAM cts; // 2171
	pANTLR3_COMMON_TOKEN token; // 2172
	pANTLR3_COMMON_TOKEN current; // 2173
	pANTLR3_STRING text; // 2174
} /* size: 0, variables: 5 */

