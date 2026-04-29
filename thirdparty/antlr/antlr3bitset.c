
//
// thirdparty/antlr/antlr3bitset.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 24
//

// <06ADF169> thirdparty/antlr/antlr3bitset.c:63
void antlr3BitsetFree(pANTLR3_BITSET bitset)
{
} /* size: 0 */

// <06ADF016> thirdparty/antlr/antlr3bitset.c:122
void antlr3BitsetSetAPI(pANTLR3_BITSET bitset)
{
} /* size: 0 */

// <06ADEF0A> thirdparty/antlr/antlr3bitset.c:141
// variables: 2
// function call: 1
pANTLR3_BITSET antlr3BitsetCopy(pANTLR3_BITSET_LIST blist)
{
	pANTLR3_BITSET bitset; // 143
	int numElements; // 144
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 176
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06ADEE49> thirdparty/antlr/antlr3bitset.c:184
// variable: 1
// function call: 1
pANTLR3_BITSET antlr3BitsetClone(pANTLR3_BITSET inSet)
{
	pANTLR3_BITSET bitset; // 186
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 199
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06ADED43> thirdparty/antlr/antlr3bitset.c:208
// variables: 4
pANTLR3_BITSET antlr3BitsetList(pANTLR3_HASH_TABLE list)
{
	pANTLR3_BITSET bitSet; // 210
	pANTLR3_HASH_ENUM en; // 211
	pANTLR3_HASH_KEY key; // 212
	ANTLR3_UINT64 bit; // 213
} /* size: 0, variables: 4 */

// <06ADEB09> thirdparty/antlr/antlr3bitset.c:317
// variables: 2
// function calls: 5
pANTLR3_BITSET antlr3BitsetOf(ANTLR3_INT32 bit, ...)
{
	pANTLR3_BITSET bitset; // 319
	va_list ap; // 321
	wordNumber(ANTLR3_UINT32 bit); // 383
	bitMask(ANTLR3_UINT32 bitNumber); // 390
	numWordsToHold(ANTLR3_UINT32 bit); // 427
	growToInclude(pANTLR3_BITSET bitset,
			ANTLR3_INT32 bit);  // 387
	antlr3BitsetAdd(pANTLR3_BITSET bitset,
			ANTLR3_INT32 bit);  // 343
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <06ADF3E9> thirdparty/antlr/antlr3bitset.c:354
// variable: 1
// function call: 1
pANTLR3_BITSET antlr3BitsetOR(pANTLR3_BITSET bitset1, pANTLR3_BITSET bitset2)
{
	pANTLR3_BITSET bitset; // 356
	antlr3BitsetOR(pANTLR3_BITSET bitset1,
			pANTLR3_BITSET bitset2);  // 354
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06ADEACF> thirdparty/antlr/antlr3bitset.c:354
// variable: 1
pANTLR3_BITSET antlr3BitsetOR(pANTLR3_BITSET bitset1, pANTLR3_BITSET bitset2)
{
	pANTLR3_BITSET bitset; // 356
} /* size: 0, variables: 1 */

// <06ADF2B0> thirdparty/antlr/antlr3bitset.c:379
// variable: 1
// function calls: 4
void antlr3BitsetAdd(pANTLR3_BITSET bitset, ANTLR3_INT32 bit)
{
	ANTLR3_UINT32 word; // 381
	wordNumber(ANTLR3_UINT32 bit); // 383
	bitMask(ANTLR3_UINT32 bitNumber); // 390
	numWordsToHold(ANTLR3_UINT32 bit); // 427
	growToInclude(pANTLR3_BITSET bitset,
			ANTLR3_INT32 bit);  // 387
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06ADEA99> thirdparty/antlr/antlr3bitset.c:379
// variable: 1
void antlr3BitsetAdd(pANTLR3_BITSET bitset, ANTLR3_INT32 bit)
{
	ANTLR3_UINT32 word; // 381
} /* size: 0, variables: 1 */

// <06ADE9A5> thirdparty/antlr/antlr3bitset.c:395
// variable: 1
// function call: 1
void grow(pANTLR3_BITSET bitset, ANTLR3_INT32 newSize)
{
	pANTLR3_BITWORD newBits; // 397
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 408
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06ADE964> thirdparty/antlr/antlr3bitset.c:421
// variables: 2
void growToInclude(pANTLR3_BITSET bitset, ANTLR3_INT32 bit)
{
	ANTLR3_UINT32 bl; // 423
	ANTLR3_UINT32 nw; // 424
} /* size: 0, variables: 2 */

// <06ADE87B> thirdparty/antlr/antlr3bitset.c:439
// variables: 2
// function calls: 2
void antlr3BitsetORInPlace(pANTLR3_BITSET bitset, pANTLR3_BITSET bitset2)
{
	ANTLR3_UINT32 minimum; // 441
	ANTLR3_UINT32 i; // 442
	numWordsToHold(ANTLR3_UINT32 bit); // 427
	growToInclude(pANTLR3_BITSET bitset,
			ANTLR3_INT32 bit);  // 455
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <06ADE85B> thirdparty/antlr/antlr3bitset.c:476
ANTLR3_UINT64 bitMask(ANTLR3_UINT32 bitNumber)
{
} /* size: 0 */

// <06ADE7E3> thirdparty/antlr/antlr3bitset.c:482
// variables: 3
ANTLR3_UINT32 antlr3BitsetSize(pANTLR3_BITSET bitset)
{
	ANTLR3_UINT32 degree; // 484
	ANTLR3_INT32 i; // 485
	ANTLR3_INT8 bit; // 486
} /* size: 0, variables: 3 */

// <06ADF232> thirdparty/antlr/antlr3bitset.c:511
// variables: 2
// function call: 1
ANTLR3_BOOLEAN antlr3BitsetEquals(pANTLR3_BITSET bitset1, pANTLR3_BITSET bitset2)
{
	ANTLR3_INT32 minimum; // 513
	ANTLR3_INT32 i; // 514
	antlr3BitsetEquals(pANTLR3_BITSET bitset1,
				pANTLR3_BITSET bitset2);  // 511
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06ADE79E> thirdparty/antlr/antlr3bitset.c:511
// variables: 2
ANTLR3_BOOLEAN antlr3BitsetEquals(pANTLR3_BITSET bitset1, pANTLR3_BITSET bitset2)
{
	ANTLR3_INT32 minimum; // 513
	ANTLR3_INT32 i; // 514
} /* size: 0, variables: 2 */

// <06ADE6F3> thirdparty/antlr/antlr3bitset.c:570
// variable: 1
// function calls: 2
ANTLR3_BOOLEAN antlr3BitsetMember(pANTLR3_BITSET bitset, ANTLR3_UINT32 bit)
{
	ANTLR3_UINT32 wordNo; // 572
	wordNumber(ANTLR3_UINT32 bit); // 574
	bitMask(ANTLR3_UINT32 bitNumber); // 581
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06ADE640> thirdparty/antlr/antlr3bitset.c:592
// variable: 1
// function calls: 2
void antlr3BitsetRemove(pANTLR3_BITSET bitset, ANTLR3_UINT32 bit)
{
	ANTLR3_UINT32 wordNo; // 594
	wordNumber(ANTLR3_UINT32 bit); // 596
	bitMask(ANTLR3_UINT32 bitNumber); // 600
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06ADE5F8> thirdparty/antlr/antlr3bitset.c:604
// variable: 1
ANTLR3_BOOLEAN antlr3BitsetIsNil(pANTLR3_BITSET bitset)
{
	ANTLR3_INT32 i; // 606
} /* size: 0, variables: 1 */

// <06ADE5D8> thirdparty/antlr/antlr3bitset.c:620
ANTLR3_UINT32 numWordsToHold(ANTLR3_UINT32 bit)
{
} /* size: 0 */

// <06ADE5B8> thirdparty/antlr/antlr3bitset.c:626
ANTLR3_UINT32 wordNumber(ANTLR3_UINT32 bit)
{
} /* size: 0 */

// <06ADE583> thirdparty/antlr/antlr3bitset.c:632
ANTLR3_UINT32 antlr3BitsetNumBits(pANTLR3_BITSET bitset)
{
} /* size: 0 */

// <06ADE482> thirdparty/antlr/antlr3bitset.c:645
// variables: 5
pANTLR3_INT32 antlr3BitsetToIntList(pANTLR3_BITSET bitset)
{
	ANTLR3_UINT32 numInts; // 647
	ANTLR3_UINT32 numBits; // 648
	ANTLR3_UINT32 i; // 649
	ANTLR3_UINT32 index; // 650
	pANTLR3_INT32 intList; // 652
} /* size: 0, variables: 5 */

