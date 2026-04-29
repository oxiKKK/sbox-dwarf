
//
// lib/lz4hc.c
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 71
//	structs: 4
//

// <057C9248> lib/lz4hc.c:87
// member variables: 3
// struct size: 12
typedef struct {
	lz4hc_strat_e strat; /* 0 4 */
	int nbSearches; /* 4 4 */
	U32 targetLength; /* 8 4 */
} cParams_t;

// <057DAB8F> lib/lz4hc.c:108
cParams_t LZ4HC_getCLevelParams(int cLevel)
{
} /* size: 0 */

// <057DAB71> lib/lz4hc.c:122
U32 LZ4HC_hashPtr(const void* ptr)
{
} /* size: 0 */

// <057C92BF> lib/lz4hc.c:130
// member variable: 1
// struct size: 8
typedef struct {
	U64 u64; /* 0 8 */
} LZ4_unalign64;

// <057DAB53> lib/lz4hc.c:131
U64 LZ4_read64(const void* ptr)
{
} /* size: 0 */

// <057DAB37> lib/lz4hc.c:145
U32 LZ4MID_hash4(U32 v)
{
} /* size: 0 */

// <057DAB19> lib/lz4hc.c:146
U32 LZ4MID_hash4Ptr(const void* ptr)
{
} /* size: 0 */

// <057DAAFD> lib/lz4hc.c:149
U32 LZ4MID_hash7(U64 v)
{
} /* size: 0 */

// <057DAADF> lib/lz4hc.c:151
U32 LZ4MID_hash8Ptr(const void* ptr)
{
} /* size: 0 */

// <057DAAB5> lib/lz4hc.c:153
// variable: 1
U64 LZ4_readLE64(const void* memPtr)
{
	{
		const BYTE* p; // 158
	}
} /* size: 0 */

// <057DAA97> lib/lz4hc.c:168
inline unsigned int LZ4HC_NbCommonBytes32(U32 val)
{
} /* size: 0 */

// <057DAA32> lib/lz4hc.c:205
// variables: 3
inline int LZ4HC_countBack(const BYTE* ip, const BYTE* match, const BYTE* iMin, const BYTE* mMin)
{
	int back; // 208
	const int  min; // 209
	{
		const U32  v; // 215
	}
} /* size: 0, variables: 2 */

// <057DAA18> lib/lz4hc.c:236
void LZ4HC_clearTables(LZ4HC_CCtx_internal* hc4)
{
} /* size: 0 */

// <057DA8B3> lib/lz4hc.c:242
// variables: 2
// function calls: 3
void LZ4HC_init_internal(LZ4HC_CCtx_internal* hc4, const BYTE* start)
{
	const size_t  bufferSize; // 244
	size_t newStartingOffset; // 245
	memset(void* __dest,
		int __ch,
		size_t __len);  // 238
	memset(void* __dest,
		int __ch,
		size_t __len);  // 239
	LZ4HC_clearTables(LZ4HC_CCtx_internal* hc4); // 249
} /* size: 170, variables: 2, inline expansions: 3 (92 bytes) */

// <057DA7FA> lib/lz4hc.c:292
// variables: 4
inline int LZ4HC_encodeSequence(const BYTE ** _ip, BYTE** _op, const BYTE ** _anchor, int matchLength, int offset, limitedOutput_directive limit, BYTE* oend)
{
	const BYTE* token; // 305
	{
		size_t litLen; // 327
		{
		}
		{
			size_t len; // 336
		}
	}
	{
		size_t mlCode; // 356
	}
} /* size: 0, variables: 1 */

// <057C92E8> lib/lz4hc.c:383
// member variables: 3
// struct size: 12
typedef struct {
	int off; /* 0 4 */
	int len; /* 4 4 */
	int back; /* 8 4 */
} LZ4HC_match_t;

// <057DA1BC> lib/lz4hc.c:389
// variables: 14
// function calls: 21
LZ4HC_match_t LZ4HC_searchExtDict(const BYTE* ip, U32 ipIndex, const BYTE* iLowLimit, const BYTE* iHighLimit, const LZ4HC_CCtx_internal* dictCtx, U32 gDictEndIndex, int currentBestML, int nbAttempts)
{
	const size_t  lDictEndIndex; // 394
	U32 lDictMatchIndex; // 395
	U32 matchIndex; // 396
	int offset; // 397
	int sBack; // 397
	{
		const BYTE* matchPtr; // 402
		{
			int mlt; // 405
			int back; // 406
			const BYTE* vLimit; // 407
			{
				const reg_t  diff; // 688
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 692
			}
			{
				const reg_t  diff; // 696
				LZ4_read_ARCH(const void* ptr); // 696
				LZ4_read_ARCH(const void* ptr); // 696
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 698
			}
			LZ4_read16(const void* ptr); // 703
			LZ4_read16(const void* ptr); // 703
			LZ4_read32(const void* ptr); // 702
			LZ4_read32(const void* ptr); // 702
			LZ4_count(const BYTE* pIn,
					const BYTE* pMatch,
					const BYTE* pInLimit);  // 409
			{
				const U32  v; // 215
				LZ4_read32(const void* ptr); // 215
				LZ4_read32(const void* ptr); // 215
				LZ4_isLittleEndian(void); // 171
				LZ4HC_NbCommonBytes32(U32 val); // 217
			}
			LZ4HC_countBack(const BYTE* ip,
					const BYTE* match,
					const BYTE* iMin,
					const BYTE* mMin);  // 410
		}
		{
			const U32  nextOffset; // 419
		}
		LZ4_read32(const void* ptr); // 404
	}
	{
		LZ4HC_match_t md; // 424
	}
	LZ4_read32(const void* ptr); // 122
	LZ4HC_hashPtr(const void* ptr); // 395
} /* size: 817, variables: 5, inline expansions: 2 (18 bytes) */

// <057DA0F5> lib/lz4hc.c:436
LZ4HC_match_t LZ4MID_searchHCDict(const BYTE* ip, U32 ipIndex, const BYTE* iHighLimit, const LZ4HC_CCtx_internal* dictCtx, U32 gDictEndIndex)
{
} /* size: 42 */

// <057D989C> lib/lz4hc.c:446
// variables: 20
// function calls: 32
LZ4HC_match_t LZ4MID_searchExtDict(const BYTE* ip, U32 ipIndex, const BYTE* iHighLimit, const LZ4HC_CCtx_internal* dictCtx, U32 gDictEndIndex)
{
	const size_t  lDictEndIndex; // 450
	const U32* hash4Table; // 451
	const U32* hash8Table; // 452
	{
		U32 l8DictMatchIndex; // 456
		U32 m8Index; // 457
		{
			const BYTE* matchPtr; // 460
			const size_t  safeLen; // 461
			int mlt; // 462
			{
				LZ4HC_match_t md; // 464
			}
			{
				const reg_t  diff; // 688
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 692
			}
			LZ4_read16(const void* ptr); // 703
			LZ4_read16(const void* ptr); // 703
			{
				const reg_t  diff; // 696
				LZ4_read_ARCH(const void* ptr); // 696
				LZ4_read_ARCH(const void* ptr); // 696
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 698
			}
			LZ4_read32(const void* ptr); // 702
			LZ4_read32(const void* ptr); // 702
			LZ4_count(const BYTE* pIn,
					const BYTE* pMatch,
					const BYTE* pInLimit);  // 462
		}
		LZ4MID_hash7(U64 v); // 151
		LZ4_read64(const void* ptr); // 156
		LZ4_isLittleEndian(void); // 155
		LZ4_readLE64(const void* memPtr); // 151
		LZ4MID_hash8Ptr(const void* ptr); // 456
	}
	{
		U32 l4DictMatchIndex; // 475
		U32 m4Index; // 476
		{
			const BYTE* matchPtr; // 478
			const size_t  safeLen; // 479
			int mlt; // 480
			{
				LZ4HC_match_t md; // 482
			}
			{
				const reg_t  diff; // 688
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 692
			}
			{
				const reg_t  diff; // 696
				LZ4_read_ARCH(const void* ptr); // 696
				LZ4_read_ARCH(const void* ptr); // 696
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 698
			}
			LZ4_read32(const void* ptr); // 702
			LZ4_read32(const void* ptr); // 702
			LZ4_read16(const void* ptr); // 703
			LZ4_read16(const void* ptr); // 703
			LZ4_count(const BYTE* pIn,
					const BYTE* pMatch,
					const BYTE* pInLimit);  // 480
		}
		LZ4_read32(const void* ptr); // 146
		LZ4MID_hash4(U32 v); // 146
		LZ4MID_hash4Ptr(const void* ptr); // 475
	}
	{
		const LZ4HC_match_t  md; // 493
	}
} /* size: 731, variables: 3 */

// <057D9866> lib/lz4hc.c:503
inline void LZ4MID_addPosition(U32* hTable, U32 hValue, U32 index)
{
} /* size: 0 */

// <057D97E2> lib/lz4hc.c:514
// variables: 6
void LZ4MID_fillHTable(LZ4HC_CCtx_internal* cctx, const void* dict, size_t size)
{
	const U32* hash4Table; // 516
	const U32* hash8Table; // 517
	const BYTE* prefixPtr; // 518
	const U32  prefixIdx; // 519
	const U32  target; // 520
	U32 idx; // 521
} /* size: 0, variables: 6 */

// <057D97C2> lib/lz4hc.c:540
LZ4MID_searchIntoDict_f select_searchDict_function(const LZ4HC_CCtx_internal* dictCtx)
{
} /* size: 0 */

// <057D9482> lib/lz4hc.c:554
// variables: 49
int LZ4MID_compress(const LZ4HC_CCtx_internal* ctx, const char* src, const char* dst, int* srcSizePtr, const int maxOutputSize, const limitedOutput_directive limit, const dictCtx_directive dict)
{

_lz4mid_dest_overflow: // 777

_lz4mid_encode_sequence: // 700

_lz4mid_last_literals: // 737
	const U32* hash4Table; // 564
	const U32* hash8Table; // 565
	const BYTE* ip; // 566
	const BYTE* anchor; // 567
	const BYTE* iend; // 568
	const BYTE* mflimit; // 569
	const BYTE* matchlimit; // 570
	const BYTE* ilimit; // 571
	BYTE* op; // 572
	BYTE* oend; // 573
	const BYTE* prefixPtr; // 575
	const U32  prefixIdx; // 576
	const U32  ilimitIdx; // 577
	const BYTE* dictStart; // 578
	const U32  dictIdx; // 579
	const U32  gDictEndIndex; // 580
	const LZ4MID_searchIntoDict_f  searchIntoDict; // 581
	unsigned int matchLength; // 582
	unsigned int matchDistance; // 583
	{
		const U32  ipIndex; // 601
		{
			const U32  h8; // 603
			const U32  pos8; // 604
			{
				const BYTE* matchPtr; // 611
			}
			{
				const BYTE* matchPtr; // 622
				const size_t  safeLen; // 623
			}
		}
		{
			const U32  h4; // 634
			const U32  pos4; // 635
			{
				const BYTE* matchPtr; // 643
				{
					const U32  h8; // 649
					const U32  pos8; // 650
					const U32  m2Distance; // 651
					{
						const BYTE* m2Ptr; // 657
						unsigned int ml2; // 658
					}
				}
			}
			{
				const BYTE* matchPtr; // 670
				const size_t  safeLen; // 671
			}
		}
		{
			LZ4HC_match_t dMatch; // 685
		}
		{
			const BYTE* saved_op; // 712
		}
		{
			U32 endMatchIdx; // 723
			U32 pos_m2; // 724
		}
	}
	{
		size_t lastRunSize; // 739
		size_t llAdd; // 740
		const size_t  totalSize; // 741
		{
			size_t accumulator; // 754
		}
	}
	{
		const size_t  ll; // 780
		const size_t  ll_addbytes; // 781
		const size_t  ll_totalCost; // 782
		const BYTE* maxLitPos; // 783
		{
			const size_t  bytesLeftForMl; // 788
			const size_t  maxMlSize; // 789
		}
	}
} /* size: 0, variables: 19, goto labels: 3 */

// <057D93F2> lib/lz4hc.c:811
// variables: 8
inline void LZ4HC_Insert(LZ4HC_CCtx_internal* hc4, const BYTE* ip)
{
	const U16* chainTable; // 813
	const U32* hashTable; // 814
	const BYTE* prefixPtr; // 815
	const U32  prefixIdx; // 816
	const U32  target; // 817
	U32 idx; // 818
	{
		const U32  h; // 823
		size_t delta; // 824
	}
} /* size: 0, variables: 6 */

// <057D93B8> lib/lz4hc.c:841
// variable: 1
U32 LZ4HC_rotatePattern(const size_t rotate, const U32 pattern)
{
	const size_t  bitsToRotate; // 843
} /* size: 0, variables: 1 */

// <057D9233> lib/lz4hc.c:851
// variables: 6
// function calls: 3
unsigned int LZ4HC_countPattern(const BYTE* ip, const BYTE* iEnd, const U32 pattern32)
{
	const BYTE* iStart; // 853
	const reg_t  pattern; // 854
	{
		const reg_t  diff; // 858
		LZ4_read_ARCH(const void* ptr); // 858
		LZ4_isLittleEndian(void); // 585
		LZ4_NbCommonBytes(reg_t val); // 860
	}
	{
		reg_t patternByte; // 865
	}
	{
		U32 bitOffset; // 870
		{
			const BYTE  byte; // 872
		}
	}
} /* size: 117, variables: 2 */

// <057D91DE> lib/lz4hc.c:884
// variables: 2
unsigned int LZ4HC_reverseCountPattern(const BYTE* ip, const BYTE* iLow, U32 pattern)
{
	const BYTE* iStart; // 886
	{
		const BYTE* bytePtr; // 892
	}
} /* size: 0, variables: 1 */

// <057D91B1> lib/lz4hc.c:905
int LZ4HC_protectDictEnd(const U32 dictLimit, const U32 matchIndex)
{
} /* size: 0 */

// <057D8DDE> lib/lz4hc.c:915
// variables: 56
inline LZ4HC_match_t LZ4HC_InsertAndGetWiderMatch(const LZ4HC_CCtx_internal* hc4, const BYTE* ip, const BYTE* iLowLimit, const BYTE* iHighLimit, int longest, const int maxNbAttempts, const int patternAnalysis, const int chainSwap, const dictCtx_directive dict, const HCfavor_e favorDecSpeed)
{
	const U16* chainTable; // 925
	const U32* hashTable; // 926
	const LZ4HC_CCtx_internal* dictCtx; // 927
	const BYTE* prefixPtr; // 928
	const U32  prefixIdx; // 929
	const U32  ipIndex; // 930
	const int  withinStartDistance; // 931
	const U32  lowestMatchIndex; // 932
	const BYTE* dictStart; // 933
	const U32  dictIdx; // 934
	const BYTE* dictEnd; // 935
	const int  lookBackLength; // 936
	int nbAttempts; // 937
	U32 matchChainPos; // 938
	const U32  pattern; // 939
	U32 matchIndex; // 940
	repeat_state_e repeat; // 941
	size_t srcPatternLength; // 942
	int offset; // 943
	int sBack; // 943
	{
		int matchLength; // 953
		{
			const BYTE* matchPtr; // 960
			{
				const int  back; // 965
			}
		}
		{
			const BYTE* matchPtr; // 976
			{
				int back; // 980
				const BYTE* vLimit; // 981
			}
		}
		{
			const int  kTrigger; // 999
			U32 distanceToNextMatch; // 1000
			const int  end; // 1001
			int step; // 1002
			int accel; // 1003
			int pos; // 1004
			{
				const U32  candidateDist; // 1006
			}
		}
		{
			const U32  distNextMatch; // 1019
			{
				const U32  matchCandidateIdx; // 1021
				{
					const int  extDict; // 1034
					const BYTE* matchPtr; // 1035
					{
						const BYTE* iLimit; // 1037
						size_t forwardPatternLength; // 1038
						{
							const U32  rotatedPattern; // 1040
						}
						{
							const BYTE* lowestMatchPtr; // 1043
							size_t backLength; // 1044
							size_t currentSegmentLength; // 1045
							{
								const U32  rotatedPattern; // 1049
							}
							{
								const U32  newMatchIndex; // 1059
							}
							{
								const U32  newMatchIndex; // 1068
								{
									const size_t  maxML; // 1075
									{
										const U32  distToNextPattern; // 1085
									}
								}
							}
						}
					}
				}
			}
		}
	}
	{
		const size_t  dictEndOffset; // 1101
		U32 dictMatchIndex; // 1102
		{
			const BYTE* matchPtr; // 1107
			{
				int mlt; // 1110
				int back; // 1111
				const BYTE* vLimit; // 1112
			}
			{
				const U32  nextOffset; // 1124
			}
		}
	}
	{
		LZ4HC_match_t md; // 1129
	}
} /* size: 0, variables: 20 */

// <057D8D7E> lib/lz4hc.c:1139
inline LZ4HC_match_t LZ4HC_InsertAndFindBestMatch(const LZ4HC_CCtx_internal* hc4, const BYTE* ip, const BYTE* iLimit, const int maxNbAttempts, const int patternAnalysis, const dictCtx_directive dict)
{
} /* size: 0 */

// <057D8B28> lib/lz4hc.c:1159
// variables: 32
inline int LZ4HC_compress_hashChain(const LZ4HC_CCtx_internal* ctx, const char* src, const char* dst, int* srcSizePtr, const int maxOutputSize, int maxNbAttempts, const limitedOutput_directive limit, const dictCtx_directive dict)
{

_Search3: // 1243

_dest_overflow: // 1385

_Search2: // 1210

_last_literals: // 1353
	const int  inputSize; // 1170
	const int  patternAnalysis; // 1171
	const BYTE* ip; // 1173
	const BYTE* anchor; // 1174
	const BYTE* iend; // 1175
	const BYTE* mflimit; // 1176
	const BYTE* matchlimit; // 1177
	BYTE* optr; // 1179
	BYTE* op; // 1180
	BYTE* oend; // 1181
	const BYTE* start0; // 1183
	const BYTE* start2; // 1184
	const BYTE* start3; // 1185
	LZ4HC_match_t m0; // 1186
	LZ4HC_match_t m1; // 1186
	LZ4HC_match_t m2; // 1186
	LZ4HC_match_t m3; // 1186
	const LZ4HC_match_t  nomatch; // 1187
	{
		int correction; // 1245
		int new_ml; // 1246
	}
	{
		int correction; // 1290
	}
	{
		int correction; // 1324
	}
	{
		size_t lastRunSize; // 1355
		size_t llAdd; // 1356
		const size_t  totalSize; // 1357
		{
			size_t accumulator; // 1370
		}
	}
	{
		const size_t  ll; // 1388
		const size_t  ll_addbytes; // 1389
		const size_t  ll_totalCost; // 1390
		const BYTE* maxLitPos; // 1391
		{
			const size_t  bytesLeftForMl; // 1396
			const size_t  maxMlSize; // 1397
		}
	}
} /* size: 0, variables: 18, goto labels: 4 */

// <057D16F1> lib/lz4hc.c:1419
// variables: 207
// function calls: 420
int LZ4HC_compress_generic_internal(const LZ4HC_CCtx_internal* ctx, const char* src, const char* dst, const int* srcSizePtr, const int dstCapacity, int cLevel, const limitedOutput_directive limit, const dictCtx_directive dict)
{
	{
		const cParams_t  cParam; // 1441
		const HCfavor_e  favor; // 1442
		int result; // 1443
		LZ4HC_getCLevelParams(int cLevel); // 1441

_lz4mid_dest_overflow: // 777

_lz4mid_encode_sequence: // 700

_lz4mid_last_literals: // 737
		{
			const U32  ipIndex; // 601
			{
				const BYTE* saved_op; // 712
				{
					size_t litLen; // 327
					{
					}
					{
						size_t len; // 336
					}
					LZ4_wildCopy8(void* dstPtr,
							const void* srcPtr,
							void* dstEnd);  // 345
				}
				LZ4_isLittleEndian(void); // 455
				LZ4_write16(void* memPtr,
						U16 value);  // 456
				LZ4_writeLE16(void* memPtr,
						U16 value);  // 352
				{
					size_t mlCode; // 356
				}
				LZ4HC_encodeSequence(const BYTE ** _ip,
							BYTE** _op,
							const BYTE ** _anchor,
							int matchLength,
							int offset,
							limitedOutput_directive limit,
							BYTE* oend);  // 714
			}
			{
				const U32  h8; // 603
				const U32  pos8; // 604
				{
					const BYTE* matchPtr; // 611
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 613
				}
				{
					const BYTE* matchPtr; // 622
					const size_t  safeLen; // 623
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 624
				}
				LZ4MID_hash7(U64 v); // 151
				LZ4_isLittleEndian(void); // 155
				LZ4_read64(const void* ptr); // 156
				LZ4_readLE64(const void* memPtr); // 151
				LZ4MID_hash8Ptr(const void* ptr); // 603
				LZ4MID_addPosition(U32* hTable,
							U32 hValue,
							U32 index);  // 607
			}
			{
				const U32  h4; // 634
				const U32  pos4; // 635
				LZ4_read32(const void* ptr); // 146
				LZ4MID_hash4(U32 v); // 146
				LZ4MID_hash4Ptr(const void* ptr); // 634
				{
					const BYTE* matchPtr; // 643
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 646
					{
						const U32  h8; // 649
						const U32  pos8; // 650
						const U32  m2Distance; // 651
						LZ4_isLittleEndian(void); // 155
						LZ4_read64(const void* ptr); // 156
						LZ4_readLE64(const void* memPtr); // 151
						LZ4MID_hash7(U64 v); // 151
						LZ4MID_hash8Ptr(const void* ptr); // 649
						{
							const BYTE* m2Ptr; // 657
							unsigned int ml2; // 658
							{
								const reg_t  diff; // 688
								LZ4_read_ARCH(const void* ptr); // 688
								LZ4_isLittleEndian(void); // 585
								LZ4_NbCommonBytes(reg_t val); // 692
							}
							{
								const reg_t  diff; // 696
								LZ4_read_ARCH(const void* ptr); // 696
								LZ4_read_ARCH(const void* ptr); // 696
								LZ4_isLittleEndian(void); // 585
								LZ4_NbCommonBytes(reg_t val); // 698
							}
							LZ4_read32(const void* ptr); // 702
							LZ4_read32(const void* ptr); // 702
							LZ4_read16(const void* ptr); // 703
							LZ4_read16(const void* ptr); // 703
							LZ4_count(const BYTE* pIn,
									const BYTE* pMatch,
									const BYTE* pInLimit);  // 658
							LZ4MID_addPosition(U32* hTable,
										U32 hValue,
										U32 index);  // 660
						}
					}
				}
				{
					const BYTE* matchPtr; // 670
					const size_t  safeLen; // 671
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 672
				}
				LZ4MID_addPosition(U32* hTable,
							U32 hValue,
							U32 index);  // 638
			}
			{
				LZ4HC_match_t dMatch; // 685
			}
			LZ4_isLittleEndian(void); // 155
			LZ4_read64(const void* ptr); // 156
			LZ4_readLE64(const void* memPtr); // 151
			LZ4MID_hash7(U64 v); // 151
			LZ4MID_hash8Ptr(const void* ptr); // 707
			LZ4MID_addPosition(U32* hTable,
						U32 hValue,
						U32 index);  // 707
			LZ4_isLittleEndian(void); // 155
			LZ4_read64(const void* ptr); // 156
			LZ4_readLE64(const void* memPtr); // 151
			LZ4MID_hash7(U64 v); // 151
			LZ4MID_hash8Ptr(const void* ptr); // 708
			LZ4MID_addPosition(U32* hTable,
						U32 hValue,
						U32 index);  // 708
			LZ4_read32(const void* ptr); // 146
			LZ4MID_hash4(U32 v); // 146
			LZ4MID_hash4Ptr(const void* ptr); // 709
			LZ4MID_addPosition(U32* hTable,
						U32 hValue,
						U32 index);  // 709
			{
				U32 endMatchIdx; // 723
				U32 pos_m2; // 724
				LZ4_isLittleEndian(void); // 155
				LZ4_read64(const void* ptr); // 156
				LZ4_readLE64(const void* memPtr); // 151
				LZ4MID_hash7(U64 v); // 151
				LZ4MID_hash8Ptr(const void* ptr); // 727
				LZ4MID_addPosition(U32* hTable,
							U32 hValue,
							U32 index);  // 727
				LZ4_isLittleEndian(void); // 155
				LZ4_read64(const void* ptr); // 156
				LZ4_readLE64(const void* memPtr); // 151
				LZ4MID_hash7(U64 v); // 151
				LZ4MID_hash8Ptr(const void* ptr); // 729
				LZ4MID_addPosition(U32* hTable,
							U32 hValue,
							U32 index);  // 729
				LZ4_isLittleEndian(void); // 155
				LZ4_read64(const void* ptr); // 156
				LZ4_readLE64(const void* memPtr); // 151
				LZ4MID_hash7(U64 v); // 151
				LZ4MID_hash8Ptr(const void* ptr); // 730
				LZ4MID_addPosition(U32* hTable,
							U32 hValue,
							U32 index);  // 730
				LZ4_read32(const void* ptr); // 146
				LZ4MID_hash4(U32 v); // 146
				LZ4MID_hash4Ptr(const void* ptr); // 731
				LZ4MID_addPosition(U32* hTable,
							U32 hValue,
							U32 index);  // 731
				LZ4_read32(const void* ptr); // 146
				LZ4MID_hash4(U32 v); // 146
				LZ4MID_hash4Ptr(const void* ptr); // 732
				LZ4MID_addPosition(U32* hTable,
							U32 hValue,
							U32 index);  // 732
			}
		}
		{
			const size_t  ll; // 780
			const size_t  ll_addbytes; // 781
			const size_t  ll_totalCost; // 782
			const BYTE* maxLitPos; // 783
			{
				const size_t  bytesLeftForMl; // 788
				const size_t  maxMlSize; // 789
				{
					size_t litLen; // 327
					{
					}
					{
						size_t len; // 336
					}
					LZ4_wildCopy8(void* dstPtr,
							const void* srcPtr,
							void* dstEnd);  // 345
				}
				LZ4_isLittleEndian(void); // 455
				LZ4_write16(void* memPtr,
						U16 value);  // 456
				LZ4_writeLE16(void* memPtr,
						U16 value);  // 352
				{
					size_t mlCode; // 356
				}
				LZ4HC_encodeSequence(const BYTE ** _ip,
							BYTE** _op,
							const BYTE ** _anchor,
							int matchLength,
							int offset,
							limitedOutput_directive limit,
							BYTE* oend);  // 794
			}
		}
		{
			size_t lastRunSize; // 739
			size_t llAdd; // 740
			const size_t  totalSize; // 741
			{
				size_t accumulator; // 754
			}
		}
		LZ4HC_getCLevelParams(int cLevel); // 543
		select_searchDict_function(const LZ4HC_CCtx_internal* dictCtx); // 581
		LZ4MID_compress(const LZ4HC_CCtx_internal* ctx,
				const char* src,
				const char* dst,
				int* srcSizePtr,
				const int  maxOutputSize,
				const limitedOutput_directive  limit,
				const dictCtx_directive  dict);  // 1446

_Search3: // 1243

_dest_overflow: // 1385

_Search2: // 1210

_last_literals: // 1353
		{
			const U32  h; // 823
			size_t delta; // 824
			LZ4_read32(const void* ptr); // 122
			LZ4HC_hashPtr(const void* ptr); // 823
		}
		LZ4HC_Insert(LZ4HC_CCtx_internal* hc4,
				const BYTE* ip);  // 947
		LZ4_read32(const void* ptr); // 939
		LZ4_read32(const void* ptr); // 122
		LZ4HC_hashPtr(const void* ptr); // 948
		{
			const size_t  dictEndOffset; // 1101
			U32 dictMatchIndex; // 1102
			{
				const BYTE* matchPtr; // 1107
				{
					int mlt; // 1110
					int back; // 1111
					const BYTE* vLimit; // 1112
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 1114
				}
				LZ4_read32(const void* ptr); // 1109
				{
					const U32  nextOffset; // 1124
				}
			}
		}
		{
			int matchLength; // 953
			{
				const BYTE* matchPtr; // 976
				{
					int back; // 980
					const BYTE* vLimit; // 981
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 983
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 985
				}
				LZ4_read32(const void* ptr); // 979
			}
			{
				const BYTE* matchPtr; // 960
				LZ4_read16(const void* ptr); // 963
				LZ4_read16(const void* ptr); // 963
				LZ4_read32(const void* ptr); // 964
				{
					const int  back; // 965
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 966
				}
			}
			{
				const U32  distNextMatch; // 1019
				{
					const U32  matchCandidateIdx; // 1021
					LZ4HC_protectDictEnd(const U32  dictLimit,
								const U32  matchIndex);  // 1033
					{
						const int  extDict; // 1034
						const BYTE* matchPtr; // 1035
						LZ4_read32(const void* ptr); // 1036
						{
							const BYTE* iLimit; // 1037
							size_t forwardPatternLength; // 1038
							{
								const BYTE* lowestMatchPtr; // 1043
								size_t backLength; // 1044
								size_t currentSegmentLength; // 1045
								LZ4_read32(const void* ptr); // 889
								{
									const BYTE* bytePtr; // 892
								}
								LZ4HC_reverseCountPattern(const BYTE* ip,
												const BYTE* iLow,
												U32 pattern);  // 1044
								{
									const U32  rotatedPattern; // 1049
									LZ4HC_rotatePattern(const size_t  rotate,
												const U32  pattern);  // 1049
									LZ4_read32(const void* ptr); // 889
									{
										const BYTE* bytePtr; // 892
									}
									LZ4HC_reverseCountPattern(const BYTE* ip,
													const BYTE* iLow,
													U32 pattern);  // 1050
								}
								{
									const U32  newMatchIndex; // 1059
									LZ4HC_protectDictEnd(const U32  dictLimit,
												const U32  matchIndex);  // 1060
								}
								{
									const U32  newMatchIndex; // 1068
									LZ4HC_protectDictEnd(const U32  dictLimit,
												const U32  matchIndex);  // 1069
									{
										const size_t  maxML; // 1075
										{
											const U32  distToNextPattern; // 1085
										}
									}
								}
							}
							{
								const U32  rotatedPattern; // 1040
								LZ4HC_rotatePattern(const size_t  rotate,
											const U32  pattern);  // 1040
							}
						}
					}
				}
			}
		}
		LZ4HC_InsertAndGetWiderMatch(const LZ4HC_CCtx_internal* hc4,
						const BYTE* ip,
						const BYTE* iLowLimit,
						const BYTE* iHighLimit,
						int longest,
						const int  maxNbAttempts,
						const int  patternAnalysis,
						const int  chainSwap,
						const dictCtx_directive  dict,
						const HCfavor_e  favorDecSpeed);  // 1149
		LZ4HC_InsertAndFindBestMatch(const LZ4HC_CCtx_internal* hc4,
						const BYTE* ip,
						const BYTE* iLimit,
						const int  maxNbAttempts,
						const int  patternAnalysis,
						const dictCtx_directive  dict);  // 1204
		{
			size_t mlCode; // 356
		}
		{
			size_t litLen; // 327
			{
			}
			{
				size_t len; // 336
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 345
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 352
		LZ4HC_encodeSequence(const BYTE ** _ip,
					BYTE** _op,
					const BYTE ** _anchor,
					int matchLength,
					int offset,
					limitedOutput_directive limit,
					BYTE* oend);  // 1338
		{
			int correction; // 1290
		}
		{
			size_t litLen; // 327
			{
			}
			{
				size_t len; // 336
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 345
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 352
		{
			size_t mlCode; // 356
		}
		LZ4HC_encodeSequence(const BYTE ** _ip,
					BYTE** _op,
					const BYTE ** _anchor,
					int matchLength,
					int offset,
					limitedOutput_directive limit,
					BYTE* oend);  // 1300
		{
			int correction; // 1245
			int new_ml; // 1246
		}
		{
			int correction; // 1324
		}
		LZ4_read32(const void* ptr); // 939
		{
			const U32  h; // 823
			size_t delta; // 824
			LZ4_read32(const void* ptr); // 122
			LZ4HC_hashPtr(const void* ptr); // 823
		}
		LZ4HC_Insert(LZ4HC_CCtx_internal* hc4,
				const BYTE* ip);  // 947
		LZ4_read32(const void* ptr); // 122
		LZ4HC_hashPtr(const void* ptr); // 948
		{
			int matchLength; // 953
			{
				const U32  distNextMatch; // 1019
				{
					const U32  matchCandidateIdx; // 1021
					LZ4HC_protectDictEnd(const U32  dictLimit,
								const U32  matchIndex);  // 1033
					{
						const int  extDict; // 1034
						const BYTE* matchPtr; // 1035
						LZ4_read32(const void* ptr); // 1036
						{
							const BYTE* iLimit; // 1037
							size_t forwardPatternLength; // 1038
							{
								const BYTE* lowestMatchPtr; // 1043
								size_t backLength; // 1044
								size_t currentSegmentLength; // 1045
								LZ4_read32(const void* ptr); // 889
								{
									const BYTE* bytePtr; // 892
								}
								LZ4HC_reverseCountPattern(const BYTE* ip,
												const BYTE* iLow,
												U32 pattern);  // 1044
								{
									const U32  rotatedPattern; // 1049
									LZ4HC_rotatePattern(const size_t  rotate,
												const U32  pattern);  // 1049
									LZ4_read32(const void* ptr); // 889
									{
										const BYTE* bytePtr; // 892
									}
									LZ4HC_reverseCountPattern(const BYTE* ip,
													const BYTE* iLow,
													U32 pattern);  // 1050
								}
								{
									const U32  newMatchIndex; // 1059
									LZ4HC_protectDictEnd(const U32  dictLimit,
												const U32  matchIndex);  // 1060
								}
								{
									const U32  newMatchIndex; // 1068
									LZ4HC_protectDictEnd(const U32  dictLimit,
												const U32  matchIndex);  // 1069
									{
										const size_t  maxML; // 1075
										{
											const U32  distToNextPattern; // 1085
										}
									}
								}
							}
							{
								const U32  rotatedPattern; // 1040
								LZ4HC_rotatePattern(const size_t  rotate,
											const U32  pattern);  // 1040
							}
						}
					}
				}
			}
			{
				const BYTE* matchPtr; // 976
				{
					int back; // 980
					const BYTE* vLimit; // 981
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 983
					{
						const U32  v; // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_isLittleEndian(void); // 171
						LZ4HC_NbCommonBytes32(U32 val); // 217
					}
					LZ4HC_countBack(const BYTE* ip,
							const BYTE* match,
							const BYTE* iMin,
							const BYTE* mMin);  // 986
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 985
				}
				LZ4_read32(const void* ptr); // 979
			}
			{
				const BYTE* matchPtr; // 960
				LZ4_read16(const void* ptr); // 963
				LZ4_read16(const void* ptr); // 963
				LZ4_read32(const void* ptr); // 964
				{
					const int  back; // 965
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 966
					{
						const U32  v; // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_isLittleEndian(void); // 171
						LZ4HC_NbCommonBytes32(U32 val); // 217
					}
					LZ4HC_countBack(const BYTE* ip,
							const BYTE* match,
							const BYTE* iMin,
							const BYTE* mMin);  // 965
				}
			}
		}
		{
			const size_t  dictEndOffset; // 1101
			U32 dictMatchIndex; // 1102
			{
				const BYTE* matchPtr; // 1107
				{
					int mlt; // 1110
					int back; // 1111
					const BYTE* vLimit; // 1112
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 1114
					{
						const U32  v; // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_isLittleEndian(void); // 171
						LZ4HC_NbCommonBytes32(U32 val); // 217
					}
					LZ4HC_countBack(const BYTE* ip,
							const BYTE* match,
							const BYTE* iMin,
							const BYTE* mMin);  // 1115
				}
				LZ4_read32(const void* ptr); // 1109
				{
					const U32  nextOffset; // 1124
				}
			}
		}
		LZ4HC_InsertAndGetWiderMatch(const LZ4HC_CCtx_internal* hc4,
						const BYTE* ip,
						const BYTE* iLowLimit,
						const BYTE* iHighLimit,
						int longest,
						const int  maxNbAttempts,
						const int  patternAnalysis,
						const int  chainSwap,
						const dictCtx_directive  dict,
						const HCfavor_e  favorDecSpeed);  // 1259
		LZ4_read32(const void* ptr); // 939
		{
			const U32  h; // 823
			size_t delta; // 824
			LZ4_read32(const void* ptr); // 122
			LZ4HC_hashPtr(const void* ptr); // 823
		}
		LZ4HC_Insert(LZ4HC_CCtx_internal* hc4,
				const BYTE* ip);  // 947
		LZ4_read32(const void* ptr); // 122
		LZ4HC_hashPtr(const void* ptr); // 948
		{
			int matchLength; // 953
			{
				const U32  distNextMatch; // 1019
				{
					const U32  matchCandidateIdx; // 1021
					LZ4HC_protectDictEnd(const U32  dictLimit,
								const U32  matchIndex);  // 1033
					{
						const int  extDict; // 1034
						const BYTE* matchPtr; // 1035
						LZ4_read32(const void* ptr); // 1036
						{
							const BYTE* iLimit; // 1037
							size_t forwardPatternLength; // 1038
							{
								const BYTE* lowestMatchPtr; // 1043
								size_t backLength; // 1044
								size_t currentSegmentLength; // 1045
								LZ4_read32(const void* ptr); // 889
								{
									const BYTE* bytePtr; // 892
								}
								LZ4HC_reverseCountPattern(const BYTE* ip,
												const BYTE* iLow,
												U32 pattern);  // 1044
								{
									const U32  rotatedPattern; // 1049
									LZ4HC_rotatePattern(const size_t  rotate,
												const U32  pattern);  // 1049
									LZ4_read32(const void* ptr); // 889
									{
										const BYTE* bytePtr; // 892
									}
									LZ4HC_reverseCountPattern(const BYTE* ip,
													const BYTE* iLow,
													U32 pattern);  // 1050
								}
								{
									const U32  newMatchIndex; // 1059
									LZ4HC_protectDictEnd(const U32  dictLimit,
												const U32  matchIndex);  // 1060
								}
								{
									const U32  newMatchIndex; // 1068
									LZ4HC_protectDictEnd(const U32  dictLimit,
												const U32  matchIndex);  // 1069
									{
										const size_t  maxML; // 1075
										{
											const U32  distToNextPattern; // 1085
										}
									}
								}
							}
							{
								const U32  rotatedPattern; // 1040
								LZ4HC_rotatePattern(const size_t  rotate,
											const U32  pattern);  // 1040
							}
						}
					}
				}
			}
			{
				const BYTE* matchPtr; // 976
				{
					int back; // 980
					const BYTE* vLimit; // 981
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 983
					{
						const U32  v; // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_isLittleEndian(void); // 171
						LZ4HC_NbCommonBytes32(U32 val); // 217
					}
					LZ4HC_countBack(const BYTE* ip,
							const BYTE* match,
							const BYTE* iMin,
							const BYTE* mMin);  // 986
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 985
				}
				LZ4_read32(const void* ptr); // 979
			}
			{
				const BYTE* matchPtr; // 960
				LZ4_read16(const void* ptr); // 963
				LZ4_read16(const void* ptr); // 963
				LZ4_read32(const void* ptr); // 964
				{
					const int  back; // 965
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 966
					{
						const U32  v; // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_isLittleEndian(void); // 171
						LZ4HC_NbCommonBytes32(U32 val); // 217
					}
					LZ4HC_countBack(const BYTE* ip,
							const BYTE* match,
							const BYTE* iMin,
							const BYTE* mMin);  // 965
				}
			}
		}
		{
			const size_t  dictEndOffset; // 1101
			U32 dictMatchIndex; // 1102
			{
				const BYTE* matchPtr; // 1107
				{
					int mlt; // 1110
					int back; // 1111
					const BYTE* vLimit; // 1112
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 1114
					{
						const U32  v; // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_read32(const void* ptr); // 215
						LZ4_isLittleEndian(void); // 171
						LZ4HC_NbCommonBytes32(U32 val); // 217
					}
					LZ4HC_countBack(const BYTE* ip,
							const BYTE* match,
							const BYTE* iMin,
							const BYTE* mMin);  // 1115
				}
				LZ4_read32(const void* ptr); // 1109
				{
					const U32  nextOffset; // 1124
				}
			}
		}
		LZ4HC_InsertAndGetWiderMatch(const LZ4HC_CCtx_internal* hc4,
						const BYTE* ip,
						const BYTE* iLowLimit,
						const BYTE* iHighLimit,
						int longest,
						const int  maxNbAttempts,
						const int  patternAnalysis,
						const int  chainSwap,
						const dictCtx_directive  dict,
						const HCfavor_e  favorDecSpeed);  // 1214
		{
			size_t litLen; // 327
			{
			}
			{
				size_t len; // 336
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 345
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 352
		{
			size_t mlCode; // 356
		}
		LZ4HC_encodeSequence(const BYTE ** _ip,
					BYTE** _op,
					const BYTE ** _anchor,
					int matchLength,
					int offset,
					limitedOutput_directive limit,
					BYTE* oend);  // 1272
		{
			size_t litLen; // 327
			{
			}
			{
				size_t len; // 336
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 345
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 352
		{
			size_t mlCode; // 356
		}
		LZ4HC_encodeSequence(const BYTE ** _ip,
					BYTE** _op,
					const BYTE ** _anchor,
					int matchLength,
					int offset,
					limitedOutput_directive limit,
					BYTE* oend);  // 1278
		{
			size_t litLen; // 327
			{
			}
			{
				size_t len; // 336
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 345
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 352
		{
			size_t mlCode; // 356
		}
		LZ4HC_encodeSequence(const BYTE ** _ip,
					BYTE** _op,
					const BYTE ** _anchor,
					int matchLength,
					int offset,
					limitedOutput_directive limit,
					BYTE* oend);  // 1224
		{
			size_t lastRunSize; // 1355
			size_t llAdd; // 1356
			const size_t  totalSize; // 1357
			{
				size_t accumulator; // 1370
			}
		}
		{
			const size_t  ll; // 1388
			const size_t  ll_addbytes; // 1389
			const size_t  ll_totalCost; // 1390
			const BYTE* maxLitPos; // 1391
			{
				const size_t  bytesLeftForMl; // 1396
				const size_t  maxMlSize; // 1397
				{
					size_t litLen; // 327
					{
						size_t len; // 336
					}
					{
					}
					LZ4_wildCopy8(void* dstPtr,
							const void* srcPtr,
							void* dstEnd);  // 345
				}
				LZ4_isLittleEndian(void); // 455
				LZ4_write16(void* memPtr,
						U16 value);  // 456
				LZ4_writeLE16(void* memPtr,
						U16 value);  // 352
				{
					size_t mlCode; // 356
				}
				LZ4HC_encodeSequence(const BYTE ** _ip,
							BYTE** _op,
							const BYTE ** _anchor,
							int matchLength,
							int offset,
							limitedOutput_directive limit,
							BYTE* oend);  // 1401
			}
		}
		LZ4HC_compress_hashChain(const LZ4HC_CCtx_internal* ctx,
					const char* src,
					const char* dst,
					int* srcSizePtr,
					const int  maxOutputSize,
					int maxNbAttempts,
					const limitedOutput_directive  limit,
					const dictCtx_directive  dict);  // 1450
	}
} /* size: 23644 */

// <057D1683> lib/lz4hc.c:1469
int LZ4HC_compress_generic_noDictCtx(const LZ4HC_CCtx_internal* ctx, const char* src, const char* dst, const int* srcSizePtr, const int dstCapacity, int cLevel, limitedOutput_directive limit)
{
} /* size: 0 */

// <057D163C> lib/lz4hc.c:1483
// variables: 2
int isStateCompatible(const LZ4HC_CCtx_internal* ctx1, const LZ4HC_CCtx_internal* ctx2)
{
	const int  isMid1; // 1485
	const int  isMid2; // 1486
} /* size: 0, variables: 2 */

// <057D15C1> lib/lz4hc.c:1491
// variable: 1
int LZ4HC_compress_generic_dictCtx(const LZ4HC_CCtx_internal* ctx, const char* src, const char* dst, const int* srcSizePtr, const int dstCapacity, int cLevel, limitedOutput_directive limit)
{
	const size_t  position; // 1501
} /* size: 0, variables: 1 */

// <057DAE7B> lib/lz4hc.c:1517
// function calls: 6
int LZ4HC_compress_generic(const LZ4HC_CCtx_internal* ctx, const char* src, const char* dst, const int* srcSizePtr, const int dstCapacity, int cLevel, limitedOutput_directive limit)
{
	LZ4HC_getCLevelParams(int cLevel); // 1485
	LZ4HC_getCLevelParams(int cLevel); // 1486
	isStateCompatible(const LZ4HC_CCtx_internal* ctx1,
				const LZ4HC_CCtx_internal* ctx2);  // 1506
	LZ4HC_compress_generic_noDictCtx(const LZ4HC_CCtx_internal* ctx,
					const char* src,
					const char* dst,
					const int* srcSizePtr,
					const int  dstCapacity,
					int cLevel,
					limitedOutput_directive limit);  // 1505
	LZ4HC_compress_generic_noDictCtx(const LZ4HC_CCtx_internal* ctx,
					const char* src,
					const char* dst,
					const int* srcSizePtr,
					const int  dstCapacity,
					int cLevel,
					limitedOutput_directive limit);  // 1510
	LZ4HC_compress_generic_dictCtx(const LZ4HC_CCtx_internal* ctx,
					const char* src,
					const char* dst,
					const int* srcSizePtr,
					const int  dstCapacity,
					int cLevel,
					limitedOutput_directive limit);  // 1530
} /* size: 392, inline expansions: 6 (585 bytes) */

// <057D1553> lib/lz4hc.c:1517
int LZ4HC_compress_generic(const LZ4HC_CCtx_internal* ctx, const char* src, const char* dst, const int* srcSizePtr, const int dstCapacity, int cLevel, limitedOutput_directive limit)
{
} /* size: 0 */

// <057D1531> lib/lz4hc.c:1535
int LZ4_sizeofStateHC(void)
{
} /* size: 10 */

// <057D1523> lib/lz4hc.c:1537
size_t LZ4_streamHC_t_alignment(void)
{
} /* size: 0 */

// <057D122E> lib/lz4hc.c:1549
// variables: 2
// function calls: 8
int LZ4_compress_HC_extStateHC_fastReset(void* state, const char* src, char* dst, int srcSize, int dstCapacity, int compressionLevel)
{
	const LZ4HC_CCtx_internal* ctx; // 1551
	LZ4_streamHC_t_alignment(void); // 1552
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1552
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1657
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1649
	LZ4_resetStreamHC_fast(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1553
} /* size: 273, variables: 1, inline expansions: 7 (239 bytes) */

// <057D11BF> lib/lz4hc.c:1561
// variable: 1
int LZ4_compress_HC_extStateHC(void* state, const char* src, char* dst, int srcSize, int dstCapacity, int compressionLevel)
{
	const LZ4_streamHC_t* ctx; // 1563
} /* size: 0, variables: 1 */

// <02B115E8> lib/lz4hc.c:1568
// variables: 3
// function calls: 6
int LZ4_compress_HC(const char* src, char* dst, int srcSize, int dstCapacity, int compressionLevel)
{
	int cSize; // 1570
	const LZ4_streamHC_t* statePtr; // 1572
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1633
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1563
	LZ4_compress_HC_extStateHC(void* state,
					const char* src,
					char* dst,
					int srcSize,
					int dstCapacity,
					int compressionLevel);  // 1579
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <057D0C3E> lib/lz4hc.c:1587
// variables: 2
// function calls: 6
int LZ4_compress_HC_destSize(void* state, const char* source, char* dest, int* sourceSizePtr, int targetDestSize, int cLevel)
{
	const LZ4_streamHC_t* ctx; // 1589
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1629
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1589
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1592
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <057D0B81> lib/lz4hc.c:1622
// variables: 2
LZ4_streamHC_t* LZ4_initStreamHC(void* buffer, size_t size)
{
	const LZ4_streamHC_t* LZ4_streamHCPtr; // 1624
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
	}
} /* size: 0, variables: 1 */

// <057D0979> lib/lz4hc.c:1638
// variable: 1
// function calls: 6
void LZ4_resetStreamHC(LZ4_streamHC_t* LZ4_streamHCPtr, int compressionLevel)
{
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1629
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1640
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1641
} /* size: 0, inline expansions: 5 (0 bytes) */

// <057D091A> lib/lz4hc.c:1660
void LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr, int compressionLevel)
{
} /* size: 0 */

// <057D08D9> lib/lz4hc.c:1668
void LZ4_favorDecompressionSpeed(LZ4_streamHC_t* LZ4_streamHCPtr, int favor)
{
} /* size: 14 */

// <057D019A> lib/lz4hc.c:1675
// variables: 6
// function calls: 27
int LZ4_loadDictHC(LZ4_streamHC_t* LZ4_streamHCPtr, const char* dictionary, int dictSize)
{
	const LZ4HC_CCtx_internal* ctxPtr; // 1678
	cParams_t cp; // 1679
	{
		const int  cLevel; // 1688
		LZ4_streamHC_t_alignment(void); // 1629
		LZ4_isAligned(const void* ptr,
				size_t alignment);  // 1629
		{
			const LZ4HC_CCtx_internal* hcstate; // 1631
			memset(void* __dest,
				int __ch,
				size_t __len);  // 1632
		}
		LZ4_initStreamHC(void* buffer,
				size_t size);  // 1622
		LZ4_initStreamHC(void* buffer,
				size_t size);  // 1689
		LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
					int compressionLevel);  // 1690
		LZ4HC_getCLevelParams(int cLevel); // 1691
	}
	LZ4MID_hash7(U64 v); // 151
	LZ4_isLittleEndian(void); // 155
	LZ4_read64(const void* ptr); // 156
	LZ4_readLE64(const void* memPtr); // 151
	LZ4MID_hash8Ptr(const void* ptr); // 529
	LZ4_read32(const void* ptr); // 146
	LZ4MID_hash4(U32 v); // 146
	LZ4MID_hash4Ptr(const void* ptr); // 528
	LZ4MID_addPosition(U32* hTable,
				U32 hValue,
				U32 index);  // 528
	LZ4MID_addPosition(U32* hTable,
				U32 hValue,
				U32 index);  // 529
	LZ4MID_hash7(U64 v); // 151
	LZ4_isLittleEndian(void); // 155
	LZ4_read64(const void* ptr); // 156
	LZ4_readLE64(const void* memPtr); // 151
	LZ4MID_hash8Ptr(const void* ptr); // 534
	LZ4MID_addPosition(U32* hTable,
				U32 hValue,
				U32 index);  // 534
	LZ4MID_fillHTable(LZ4HC_CCtx_internal* cctx,
				const void* dict,
				size_t size);  // 1696
	{
		const U32  h; // 823
		size_t delta; // 824
		LZ4_read32(const void* ptr); // 122
		LZ4HC_hashPtr(const void* ptr); // 823
	}
	LZ4HC_Insert(LZ4HC_CCtx_internal* hc4,
			const BYTE* ip);  // 1698
} /* size: 597, variables: 2, inline expansions: 18 (467 bytes) */

// <057D0153> lib/lz4hc.c:1703
void LZ4_attach_HC_dictionary(LZ4_streamHC_t* working_stream, const LZ4_streamHC_t* dictionary_stream)
{
} /* size: 12 */

// <057CFFDE> lib/lz4hc.c:1709
// variables: 2
// function calls: 4
void LZ4HC_setExternalDict(LZ4HC_CCtx_internal* ctxPtr, const BYTE* newBlock)
{
	{
		const U32  h; // 823
		size_t delta; // 824
		LZ4_read32(const void* ptr); // 122
		LZ4HC_hashPtr(const void* ptr); // 823
	}
	LZ4HC_Insert(LZ4HC_CCtx_internal* hc4,
			const BYTE* ip);  // 1714
	LZ4HC_getCLevelParams(int cLevel); // 1713
} /* size: 331, inline expansions: 2 (175 bytes) */

// <057CFE44> lib/lz4hc.c:1730
// variables: 5
int LZ4_compressHC_continue_generic(LZ4_streamHC_t* LZ4_streamHCPtr, const char* src, char* dst, int* srcSizePtr, int dstCapacity, limitedOutput_directive limit)
{
	const LZ4HC_CCtx_internal* ctxPtr; // 1735
	{
		size_t dictSize; // 1745
	}
	{
		const BYTE* sourceEnd; // 1755
		const BYTE* dictBegin; // 1756
		const BYTE* dictEnd; // 1757
	}
} /* size: 361, variables: 1 */

// <057CFD28> lib/lz4hc.c:1780
int LZ4_compress_HC_continue_destSize(LZ4_streamHC_t* LZ4_streamHCPtr, const char* src, char* dst, int* srcSizePtr, int targetDestSize)
{
} /* size: 0 */

// <057CFC5C> lib/lz4hc.c:1791
// variables: 3
int LZ4_saveDictHC(LZ4_streamHC_t* LZ4_streamHCPtr, char* safeBuffer, int dictSize)
{
	const LZ4HC_CCtx_internal* streamPtr; // 1793
	const int  prefixSize; // 1794
	{
		const U32  endIndex; // 1803
	}
} /* size: 205, variables: 2 */

// <057C93EF> lib/lz4hc.c:1819
// member variables: 4
// struct size: 16
typedef struct {
	int price; /* 0 4 */
	int off; /* 4 4 */
	int mlen; /* 8 4 */
	int litlen; /* 12 4 */
} LZ4HC_optimal_t;

// <057CFC2F> lib/lz4hc.c:1827
// variable: 1
inline int LZ4HC_literalsPrice(const int litlen)
{
	int price; // 1829
} /* size: 0, variables: 1 */

// <057CFBF5> lib/lz4hc.c:1837
// variable: 1
inline int LZ4HC_sequencePrice(int litlen, int mlen)
{
	int price; // 1839
} /* size: 0, variables: 1 */

// <057CFB6F> lib/lz4hc.c:1852
// variables: 2
inline LZ4HC_match_t LZ4HC_FindLongerMatch(const LZ4HC_CCtx_internal* ctx, const BYTE* ip, const BYTE* iHighLimit, int minLen, int nbSearches, const dictCtx_directive dict, const HCfavor_e favorDecSpeed)
{
	const LZ4HC_match_t  match0; // 1858
	LZ4HC_match_t md; // 1862
} /* size: 0, variables: 2 */

// <057CAD34> lib/lz4hc.c:1879
// variables: 207
// function calls: 248
int LZ4HC_compress_optimal(LZ4HC_CCtx_internal* ctx, const char* source, char* dst, int* srcSizePtr, int dstCapacity, const int nbSearches, size_t sufficient_len, const limitedOutput_directive limit, const int fullUpdate, const dictCtx_directive dict, const HCfavor_e favorDecSpeed)
{

_last_literals: // 2122

encode: // 2085

_dest_overflow: // 2158

_return_label: // 2181
	int retval; // 1891
	const LZ4HC_optimal_t* opt; // 1894
	const BYTE* ip; // 1899
	const BYTE* anchor; // 1900
	const BYTE* iend; // 1901
	const BYTE* mflimit; // 1902
	const BYTE* matchlimit; // 1903
	BYTE* op; // 1904
	BYTE* opSaved; // 1905
	BYTE* oend; // 1906
	int ovml; // 1907
	int ovoff; // 1908
	{
		const int  llen; // 1928
		int best_mlen; // 1929
		int best_off; // 1929
		int cur; // 1930
		int last_match_pos; // 1930
		const LZ4HC_match_t  firstMatch; // 1932
		{
			const int  firstML; // 1937
			{
				size_t litLen; // 327
				{
				}
				{
					size_t len; // 336
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 345
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 352
			{
				size_t mlCode; // 356
			}
			LZ4HC_encodeSequence(const BYTE ** _ip,
						BYTE** _op,
						const BYTE ** _anchor,
						int matchLength,
						int offset,
						limitedOutput_directive limit,
						BYTE* oend);  // 1939
		}
		{
			int rPos; // 1948
			{
				const int  cost; // 1950
				LZ4HC_literalsPrice(const int litlen); // 1950
			}
		}
		{
			const int  matchML; // 1959
			const int  offset; // 1960
			int mlen; // 1961
			{
				const int  cost; // 1964
				LZ4HC_literalsPrice(const int litlen); // 1843
				LZ4HC_sequencePrice(int litlen,
							int mlen);  // 1964
			}
		}
		{
			int addLit; // 1973
		}
		{
			const BYTE* curPtr; // 1985
			LZ4HC_match_t newMatch; // 1986
			{
				const int  baseLitlen; // 2020
				int litlen; // 2021
				{
					const int  price; // 2023
					const int  pos; // 2024
					LZ4HC_literalsPrice(const int litlen); // 2023
					LZ4HC_literalsPrice(const int litlen); // 2023
				}
			}
			{
				const int  matchML; // 2035
				int ml; // 2036
				{
					const int  pos; // 2040
					const int  offset; // 2041
					int price; // 2042
					int ll; // 2043
					LZ4HC_sequencePrice(int litlen,
								int mlen);  // 2052
					LZ4HC_literalsPrice(const int litlen); // 1843
					LZ4HC_sequencePrice(int litlen,
								int mlen);  // 2049
				}
			}
			{
				int addLit; // 2070
			}
			{
				const U32  h; // 823
				size_t delta; // 824
				LZ4_read32(const void* ptr); // 122
				LZ4HC_hashPtr(const void* ptr); // 823
			}
			LZ4HC_Insert(LZ4HC_CCtx_internal* hc4,
					const BYTE* ip);  // 947
			LZ4_read32(const void* ptr); // 939
			LZ4_read32(const void* ptr); // 122
			LZ4HC_hashPtr(const void* ptr); // 948
			{
				int matchLength; // 953
				{
					const BYTE* matchPtr; // 976
					LZ4_read32(const void* ptr); // 979
					{
						int back; // 980
						const BYTE* vLimit; // 981
						{
							const reg_t  diff; // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 692
						}
						{
							const reg_t  diff; // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 698
						}
						LZ4_read16(const void* ptr); // 703
						LZ4_read16(const void* ptr); // 703
						LZ4_read32(const void* ptr); // 702
						LZ4_read32(const void* ptr); // 702
						LZ4_count(const BYTE* pIn,
								const BYTE* pMatch,
								const BYTE* pInLimit);  // 983
						{
							const reg_t  diff; // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 692
						}
						{
							const reg_t  diff; // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 698
						}
						LZ4_read16(const void* ptr); // 703
						LZ4_read16(const void* ptr); // 703
						LZ4_read32(const void* ptr); // 702
						LZ4_read32(const void* ptr); // 702
						LZ4_count(const BYTE* pIn,
								const BYTE* pMatch,
								const BYTE* pInLimit);  // 985
					}
				}
				{
					const BYTE* matchPtr; // 960
					LZ4_read16(const void* ptr); // 963
					LZ4_read16(const void* ptr); // 963
					LZ4_read32(const void* ptr); // 964
					{
						const int  back; // 965
						{
							const reg_t  diff; // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 692
						}
						{
							const reg_t  diff; // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 698
						}
						LZ4_read32(const void* ptr); // 702
						LZ4_read32(const void* ptr); // 702
						LZ4_read16(const void* ptr); // 703
						LZ4_read16(const void* ptr); // 703
						LZ4_count(const BYTE* pIn,
								const BYTE* pMatch,
								const BYTE* pInLimit);  // 966
					}
				}
				{
					const U32  distNextMatch; // 1019
					{
						const U32  matchCandidateIdx; // 1021
						LZ4HC_protectDictEnd(const U32  dictLimit,
									const U32  matchIndex);  // 1033
						{
							const int  extDict; // 1034
							const BYTE* matchPtr; // 1035
							LZ4_read32(const void* ptr); // 1036
							{
								const BYTE* iLimit; // 1037
								size_t forwardPatternLength; // 1038
								{
									const BYTE* lowestMatchPtr; // 1043
									size_t backLength; // 1044
									size_t currentSegmentLength; // 1045
									LZ4_read32(const void* ptr); // 889
									{
										const BYTE* bytePtr; // 892
									}
									LZ4HC_reverseCountPattern(const BYTE* ip,
													const BYTE* iLow,
													U32 pattern);  // 1044
									{
										const U32  rotatedPattern; // 1049
										LZ4HC_rotatePattern(const size_t  rotate,
													const U32  pattern);  // 1049
										LZ4_read32(const void* ptr); // 889
										{
											const BYTE* bytePtr; // 892
										}
										LZ4HC_reverseCountPattern(const BYTE* ip,
														const BYTE* iLow,
														U32 pattern);  // 1050
									}
									{
										const U32  newMatchIndex; // 1059
										LZ4HC_protectDictEnd(const U32  dictLimit,
													const U32  matchIndex);  // 1060
									}
									{
										const U32  newMatchIndex; // 1068
										LZ4HC_protectDictEnd(const U32  dictLimit,
													const U32  matchIndex);  // 1069
										{
											const size_t  maxML; // 1075
											{
												const U32  distToNextPattern; // 1085
											}
										}
									}
								}
								{
									const U32  rotatedPattern; // 1040
									LZ4HC_rotatePattern(const size_t  rotate,
												const U32  pattern);  // 1040
								}
							}
						}
					}
				}
				{
					const int  kTrigger; // 999
					U32 distanceToNextMatch; // 1000
					const int  end; // 1001
					int step; // 1002
					int accel; // 1003
					int pos; // 1004
					{
						const U32  candidateDist; // 1006
					}
				}
			}
			{
				const size_t  dictEndOffset; // 1101
				U32 dictMatchIndex; // 1102
				{
					const BYTE* matchPtr; // 1107
					{
						const U32  nextOffset; // 1124
					}
					LZ4_read32(const void* ptr); // 1109
					{
						int mlt; // 1110
						int back; // 1111
						const BYTE* vLimit; // 1112
						{
							const reg_t  diff; // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 692
						}
						{
							const reg_t  diff; // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 698
						}
						LZ4_read32(const void* ptr); // 702
						LZ4_read32(const void* ptr); // 702
						LZ4_read16(const void* ptr); // 703
						LZ4_read16(const void* ptr); // 703
						LZ4_count(const BYTE* pIn,
								const BYTE* pMatch,
								const BYTE* pInLimit);  // 1114
					}
				}
			}
			LZ4HC_InsertAndGetWiderMatch(const LZ4HC_CCtx_internal* hc4,
							const BYTE* ip,
							const BYTE* iLowLimit,
							const BYTE* iHighLimit,
							int longest,
							const int  maxNbAttempts,
							const int  patternAnalysis,
							const int  chainSwap,
							const dictCtx_directive  dict,
							const HCfavor_e  favorDecSpeed);  // 1862
			LZ4HC_FindLongerMatch(const LZ4HC_CCtx_internal* ctx,
						const BYTE* ip,
						const BYTE* iHighLimit,
						int minLen,
						int nbSearches,
						const dictCtx_directive  dict,
						const HCfavor_e  favorDecSpeed);  // 2007
			{
				const U32  h; // 823
				size_t delta; // 824
				LZ4_read32(const void* ptr); // 122
				LZ4HC_hashPtr(const void* ptr); // 823
			}
			LZ4HC_Insert(LZ4HC_CCtx_internal* hc4,
					const BYTE* ip);  // 947
			LZ4_read32(const void* ptr); // 939
			LZ4_read32(const void* ptr); // 122
			LZ4HC_hashPtr(const void* ptr); // 948
			{
				const size_t  dictEndOffset; // 1101
				U32 dictMatchIndex; // 1102
				{
					const BYTE* matchPtr; // 1107
					{
						const U32  nextOffset; // 1124
					}
					LZ4_read32(const void* ptr); // 1109
					{
						int mlt; // 1110
						int back; // 1111
						const BYTE* vLimit; // 1112
						{
							const reg_t  diff; // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 692
						}
						{
							const reg_t  diff; // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 698
						}
						LZ4_read32(const void* ptr); // 702
						LZ4_read32(const void* ptr); // 702
						LZ4_read16(const void* ptr); // 703
						LZ4_read16(const void* ptr); // 703
						LZ4_count(const BYTE* pIn,
								const BYTE* pMatch,
								const BYTE* pInLimit);  // 1114
					}
				}
			}
			{
				int matchLength; // 953
				{
					const BYTE* matchPtr; // 976
					LZ4_read32(const void* ptr); // 979
					{
						int back; // 980
						const BYTE* vLimit; // 981
						{
							const reg_t  diff; // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 692
						}
						{
							const reg_t  diff; // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 698
						}
						LZ4_read16(const void* ptr); // 703
						LZ4_read16(const void* ptr); // 703
						LZ4_read32(const void* ptr); // 702
						LZ4_read32(const void* ptr); // 702
						LZ4_count(const BYTE* pIn,
								const BYTE* pMatch,
								const BYTE* pInLimit);  // 983
						{
							const reg_t  diff; // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 692
						}
						{
							const reg_t  diff; // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 698
						}
						LZ4_read16(const void* ptr); // 703
						LZ4_read16(const void* ptr); // 703
						LZ4_read32(const void* ptr); // 702
						LZ4_read32(const void* ptr); // 702
						LZ4_count(const BYTE* pIn,
								const BYTE* pMatch,
								const BYTE* pInLimit);  // 985
					}
				}
				{
					const BYTE* matchPtr; // 960
					LZ4_read16(const void* ptr); // 963
					LZ4_read16(const void* ptr); // 963
					LZ4_read32(const void* ptr); // 964
					{
						const int  back; // 965
						{
							const reg_t  diff; // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_read_ARCH(const void* ptr); // 688
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 692
						}
						{
							const reg_t  diff; // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_read_ARCH(const void* ptr); // 696
							LZ4_isLittleEndian(void); // 585
							LZ4_NbCommonBytes(reg_t val); // 698
						}
						LZ4_read32(const void* ptr); // 702
						LZ4_read32(const void* ptr); // 702
						LZ4_read16(const void* ptr); // 703
						LZ4_read16(const void* ptr); // 703
						LZ4_count(const BYTE* pIn,
								const BYTE* pMatch,
								const BYTE* pInLimit);  // 966
					}
				}
				{
					const U32  distNextMatch; // 1019
					{
						const U32  matchCandidateIdx; // 1021
						LZ4HC_protectDictEnd(const U32  dictLimit,
									const U32  matchIndex);  // 1033
						{
							const int  extDict; // 1034
							const BYTE* matchPtr; // 1035
							LZ4_read32(const void* ptr); // 1036
							{
								const BYTE* iLimit; // 1037
								size_t forwardPatternLength; // 1038
								{
									const BYTE* lowestMatchPtr; // 1043
									size_t backLength; // 1044
									size_t currentSegmentLength; // 1045
									LZ4_read32(const void* ptr); // 889
									{
										const BYTE* bytePtr; // 892
									}
									LZ4HC_reverseCountPattern(const BYTE* ip,
													const BYTE* iLow,
													U32 pattern);  // 1044
									{
										const U32  rotatedPattern; // 1049
										LZ4HC_rotatePattern(const size_t  rotate,
													const U32  pattern);  // 1049
										LZ4_read32(const void* ptr); // 889
										{
											const BYTE* bytePtr; // 892
										}
										LZ4HC_reverseCountPattern(const BYTE* ip,
														const BYTE* iLow,
														U32 pattern);  // 1050
									}
									{
										const U32  newMatchIndex; // 1059
										LZ4HC_protectDictEnd(const U32  dictLimit,
													const U32  matchIndex);  // 1060
									}
									{
										const U32  newMatchIndex; // 1068
										LZ4HC_protectDictEnd(const U32  dictLimit,
													const U32  matchIndex);  // 1069
										{
											const size_t  maxML; // 1075
											{
												const U32  distToNextPattern; // 1085
											}
										}
									}
								}
								{
									const U32  rotatedPattern; // 1040
									LZ4HC_rotatePattern(const size_t  rotate,
												const U32  pattern);  // 1040
								}
							}
						}
					}
				}
				{
					const int  kTrigger; // 999
					U32 distanceToNextMatch; // 1000
					const int  end; // 1001
					int step; // 1002
					int accel; // 1003
					int pos; // 1004
					{
						const U32  candidateDist; // 1006
					}
				}
			}
			LZ4HC_InsertAndGetWiderMatch(const LZ4HC_CCtx_internal* hc4,
							const BYTE* ip,
							const BYTE* iLowLimit,
							const BYTE* iHighLimit,
							int longest,
							const int  maxNbAttempts,
							const int  patternAnalysis,
							const int  chainSwap,
							const dictCtx_directive  dict,
							const HCfavor_e  favorDecSpeed);  // 1862
			LZ4HC_FindLongerMatch(const LZ4HC_CCtx_internal* ctx,
						const BYTE* ip,
						const BYTE* iHighLimit,
						int minLen,
						int nbSearches,
						const dictCtx_directive  dict,
						const HCfavor_e  favorDecSpeed);  // 2004
		}
		{
			int candidate_pos; // 2089
			int selected_matchLength; // 2090
			int selected_offset; // 2091
			{
				const int  next_matchLength; // 2093
				const int  next_offset; // 2094
			}
		}
		{
			int rPos; // 2106
			{
				const int  ml; // 2108
				const int  offset; // 2109
				{
					size_t mlCode; // 356
				}
				{
					size_t litLen; // 327
					{
					}
					{
						size_t len; // 336
					}
					LZ4_wildCopy8(void* dstPtr,
							const void* srcPtr,
							void* dstEnd);  // 345
				}
				LZ4_isLittleEndian(void); // 455
				LZ4_write16(void* memPtr,
						U16 value);  // 456
				LZ4_writeLE16(void* memPtr,
						U16 value);  // 352
				LZ4HC_encodeSequence(const BYTE ** _ip,
							BYTE** _op,
							const BYTE ** _anchor,
							int matchLength,
							int offset,
							limitedOutput_directive limit,
							BYTE* oend);  // 2115
			}
		}
		{
			const size_t  dictEndOffset; // 1101
			U32 dictMatchIndex; // 1102
			{
				const BYTE* matchPtr; // 1107
				{
					int mlt; // 1110
					int back; // 1111
					const BYTE* vLimit; // 1112
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 1114
				}
				LZ4_read32(const void* ptr); // 1109
				{
					const U32  nextOffset; // 1124
				}
			}
		}
		LZ4_read32(const void* ptr); // 939
		{
			const U32  h; // 823
			size_t delta; // 824
			LZ4_read32(const void* ptr); // 122
			LZ4HC_hashPtr(const void* ptr); // 823
		}
		LZ4HC_Insert(LZ4HC_CCtx_internal* hc4,
				const BYTE* ip);  // 947
		LZ4_read32(const void* ptr); // 122
		LZ4HC_hashPtr(const void* ptr); // 948
		{
			int matchLength; // 953
			{
				const BYTE* matchPtr; // 976
				{
					int back; // 980
					const BYTE* vLimit; // 981
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 983
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 985
				}
				LZ4_read32(const void* ptr); // 979
			}
			{
				const BYTE* matchPtr; // 960
				LZ4_read16(const void* ptr); // 963
				LZ4_read16(const void* ptr); // 963
				LZ4_read32(const void* ptr); // 964
				{
					const int  back; // 965
					{
						const reg_t  diff; // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_read_ARCH(const void* ptr); // 688
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 692
					}
					{
						const reg_t  diff; // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_read_ARCH(const void* ptr); // 696
						LZ4_isLittleEndian(void); // 585
						LZ4_NbCommonBytes(reg_t val); // 698
					}
					LZ4_read32(const void* ptr); // 702
					LZ4_read32(const void* ptr); // 702
					LZ4_read16(const void* ptr); // 703
					LZ4_read16(const void* ptr); // 703
					LZ4_count(const BYTE* pIn,
							const BYTE* pMatch,
							const BYTE* pInLimit);  // 966
				}
			}
			{
				const U32  distNextMatch; // 1019
				{
					const U32  matchCandidateIdx; // 1021
					LZ4HC_protectDictEnd(const U32  dictLimit,
								const U32  matchIndex);  // 1033
					{
						const int  extDict; // 1034
						const BYTE* matchPtr; // 1035
						LZ4_read32(const void* ptr); // 1036
						{
							const BYTE* iLimit; // 1037
							size_t forwardPatternLength; // 1038
							{
								const BYTE* lowestMatchPtr; // 1043
								size_t backLength; // 1044
								size_t currentSegmentLength; // 1045
								LZ4_read32(const void* ptr); // 889
								{
									const BYTE* bytePtr; // 892
								}
								LZ4HC_reverseCountPattern(const BYTE* ip,
												const BYTE* iLow,
												U32 pattern);  // 1044
								{
									const U32  rotatedPattern; // 1049
									LZ4HC_rotatePattern(const size_t  rotate,
												const U32  pattern);  // 1049
									LZ4_read32(const void* ptr); // 889
									{
										const BYTE* bytePtr; // 892
									}
									LZ4HC_reverseCountPattern(const BYTE* ip,
													const BYTE* iLow,
													U32 pattern);  // 1050
								}
								{
									const U32  newMatchIndex; // 1059
									LZ4HC_protectDictEnd(const U32  dictLimit,
												const U32  matchIndex);  // 1060
								}
								{
									const U32  newMatchIndex; // 1068
									LZ4HC_protectDictEnd(const U32  dictLimit,
												const U32  matchIndex);  // 1069
									{
										const size_t  maxML; // 1075
										{
											const U32  distToNextPattern; // 1085
										}
									}
								}
							}
							{
								const U32  rotatedPattern; // 1040
								LZ4HC_rotatePattern(const size_t  rotate,
											const U32  pattern);  // 1040
							}
						}
					}
				}
			}
			{
				const int  kTrigger; // 999
				U32 distanceToNextMatch; // 1000
				const int  end; // 1001
				int step; // 1002
				int accel; // 1003
				int pos; // 1004
				{
					const U32  candidateDist; // 1006
				}
			}
		}
		LZ4HC_InsertAndGetWiderMatch(const LZ4HC_CCtx_internal* hc4,
						const BYTE* ip,
						const BYTE* iLowLimit,
						const BYTE* iHighLimit,
						int longest,
						const int  maxNbAttempts,
						const int  patternAnalysis,
						const int  chainSwap,
						const dictCtx_directive  dict,
						const HCfavor_e  favorDecSpeed);  // 1862
		LZ4HC_FindLongerMatch(const LZ4HC_CCtx_internal* ctx,
					const BYTE* ip,
					const BYTE* iHighLimit,
					int minLen,
					int nbSearches,
					const dictCtx_directive  dict,
					const HCfavor_e  favorDecSpeed);  // 1932
	}
	{
		size_t lastRunSize; // 2124
		size_t llAdd; // 2125
		const size_t  totalSize; // 2126
		{
			size_t accumulator; // 2142
		}
	}
	{
		const size_t  ll; // 2161
		const size_t  ll_addbytes; // 2162
		const size_t  ll_totalCost; // 2163
		const BYTE* maxLitPos; // 2164
		{
			const size_t  bytesLeftForMl; // 2169
			const size_t  maxMlSize; // 2170
			{
				size_t litLen; // 327
				{
					size_t len; // 336
				}
				{
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 345
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 352
			{
				size_t mlCode; // 356
			}
			LZ4HC_encodeSequence(const BYTE ** _ip,
						BYTE** _op,
						const BYTE ** _anchor,
						int matchLength,
						int offset,
						limitedOutput_directive limit,
						BYTE* oend);  // 2176
		}
	}
} /* size: 16342, variables: 12, goto labels: 4 */

// <057CAC89> lib/lz4hc.c:2196
int LZ4_compressHC(const char* src, char* dst, int srcSize)
{
} /* size: 0 */

// <057CABDE> lib/lz4hc.c:2197
int LZ4_compressHC_limitedOutput(const char* src, char* dst, int srcSize, int maxDstSize)
{
} /* size: 0 */

// <057CAB1C> lib/lz4hc.c:2198
int LZ4_compressHC2(const char* src, char* dst, int srcSize, int cLevel)
{
} /* size: 0 */

// <057CAA5A> lib/lz4hc.c:2199
int LZ4_compressHC2_limitedOutput(const char* src, char* dst, int srcSize, int maxDstSize, int cLevel)
{
} /* size: 0 */

// <057CA77D> lib/lz4hc.c:2200
// variable: 1
// function calls: 7
int LZ4_compressHC_withStateHC(void* state, const char* src, char* dst, int srcSize)
{
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1629
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1633
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1563
	LZ4_compress_HC_extStateHC(void* state,
					const char* src,
					char* dst,
					int srcSize,
					int dstCapacity,
					int compressionLevel);  // 2200
} /* size: 0, inline expansions: 6 (0 bytes) */

// <057CA4C0> lib/lz4hc.c:2201
// variable: 1
// function calls: 7
int LZ4_compressHC_limitedOutput_withStateHC(void* state, const char* src, char* dst, int srcSize, int maxDstSize)
{
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1629
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1633
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1563
	LZ4_compress_HC_extStateHC(void* state,
					const char* src,
					char* dst,
					int srcSize,
					int dstCapacity,
					int compressionLevel);  // 2201
} /* size: 0, inline expansions: 6 (0 bytes) */

// <057CA1C4> lib/lz4hc.c:2202
// variable: 1
// function calls: 7
int LZ4_compressHC2_withStateHC(void* state, const char* src, char* dst, int srcSize, int cLevel)
{
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1629
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1633
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1563
	LZ4_compress_HC_extStateHC(void* state,
					const char* src,
					char* dst,
					int srcSize,
					int dstCapacity,
					int compressionLevel);  // 2202
} /* size: 0, inline expansions: 6 (0 bytes) */

// <057C9EE8> lib/lz4hc.c:2203
// variable: 1
// function calls: 7
int LZ4_compressHC2_limitedOutput_withStateHC(void* state, const char* src, char* dst, int srcSize, int maxDstSize, int cLevel)
{
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1629
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1633
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1563
	LZ4_compress_HC_extStateHC(void* state,
					const char* src,
					char* dst,
					int srcSize,
					int dstCapacity,
					int compressionLevel);  // 2203
} /* size: 0, inline expansions: 6 (0 bytes) */

// <057C9D7A> lib/lz4hc.c:2204
// function call: 1
int LZ4_compressHC_continue(LZ4_streamHC_t* ctx, const char* src, char* dst, int srcSize)
{
	LZ4_compress_HC_continue(LZ4_streamHC_t* LZ4_streamHCPtr,
				const char* src,
				char* dst,
				int srcSize,
				int dstCapacity);  // 2204
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057C9C13> lib/lz4hc.c:2205
// function call: 1
int LZ4_compressHC_limitedOutput_continue(LZ4_streamHC_t* ctx, const char* src, char* dst, int srcSize, int maxDstSize)
{
	LZ4_compress_HC_continue(LZ4_streamHC_t* LZ4_streamHCPtr,
				const char* src,
				char* dst,
				int srcSize,
				int dstCapacity);  // 2205
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057C9BF1> lib/lz4hc.c:2209
int LZ4_sizeofStreamStateHC(void)
{
} /* size: 0 */

// <057C99DC> lib/lz4hc.c:2213
// variables: 2
// function calls: 6
int LZ4_resetStreamStateHC(void* state, char* inputBuffer)
{
	const LZ4_streamHC_t* hc4; // 2215
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1629
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1633
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 2215
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <057C98E9> lib/lz4hc.c:2222
// variable: 1
// function calls: 2
void* LZ4_createHC(const char* inputBuffer)
{
	const LZ4_streamHC_t* hc4; // 2224
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1608
	LZ4_createStreamHC(void); // 2224
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <057C9897> lib/lz4hc.c:2230
int LZ4_freeHC(void* LZ4HC_Data)
{
} /* size: 0 */

// <057C97D1> lib/lz4hc.c:2238
int LZ4_compressHC2_continue(void* LZ4HC_Data, const char* src, char* dst, int srcSize, int cLevel)
{
} /* size: 0 */

// <057C96F4> lib/lz4hc.c:2243
int LZ4_compressHC2_limitedOutput_continue(void* LZ4HC_Data, const char* src, char* dst, int srcSize, int dstCapacity, int cLevel)
{
} /* size: 0 */

// <057C94AF> lib/lz4hc.c:2248
// variables: 3
// function calls: 7
char* LZ4_slideInputBufferHC(void* LZ4HC_Data)
{
	const LZ4HC_CCtx_internal* s; // 2250
	const BYTE* bufferStart; // 2251
	LZ4_setCompressionLevel(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 1657
	LZ4_streamHC_t_alignment(void); // 1629
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1629
	{
		const LZ4HC_CCtx_internal* hcstate; // 1631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1632
	}
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1622
	LZ4_initStreamHC(void* buffer,
			size_t size);  // 1649
	LZ4_resetStreamHC_fast(LZ4_streamHC_t* LZ4_streamHCPtr,
				int compressionLevel);  // 2252
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

