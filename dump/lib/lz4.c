
//
// lib/lz4.c
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 89
//	structs: 3
//

// <057DAE16> lib/lz4.c:293
int LZ4_isAligned(const void* ptr, size_t alignment)
{
} /* size: 0 */

// <057DAD4C> lib/lz4.c:364
// variable: 1
unsigned int LZ4_isLittleEndian(void)
{
	const union   one; // 366
} /* size: 0, variables: 1 */

// <057A76AA> lib/lz4.c:390
// member variable: 1
// struct size: 2
typedef struct {
	U16 u16; /* 0 2 */
} LZ4_unalign16;

// <057A76D6> lib/lz4.c:391
// member variable: 1
// struct size: 4
typedef struct {
	U32 u32; /* 0 4 */
} LZ4_unalign32;

// <057A7702> lib/lz4.c:392
// member variable: 1
// struct size: 8
typedef struct {
	reg_t uArch; /* 0 8 */
} LZ4_unalignST;

// <057DAD2C> lib/lz4.c:394
U16 LZ4_read16(const void* ptr)
{
} /* size: 0 */

// <057DAD0C> lib/lz4.c:395
U32 LZ4_read32(const void* ptr)
{
} /* size: 0 */

// <057DACEC> lib/lz4.c:396
reg_t LZ4_read_ARCH(const void* ptr)
{
} /* size: 0 */

// <057DACC3> lib/lz4.c:398
void LZ4_write16(void* memPtr, U16 value)
{
} /* size: 0 */

// <057C8078> lib/lz4.c:399
void LZ4_write32(void* memPtr, U32 value)
{
} /* size: 0 */

// <057C804B> lib/lz4.c:431
// variable: 1
U16 LZ4_readLE16(const void* memPtr)
{
	{
		const BYTE* p; // 436
	}
} /* size: 0 */

// <057DAC8D> lib/lz4.c:453
// variable: 1
void LZ4_writeLE16(void* memPtr, U16 value)
{
	{
		BYTE* p; // 458
	}
} /* size: 0 */

// <057DAC36> lib/lz4.c:466
// variables: 3
inline void LZ4_wildCopy8(void* dstPtr, const void* srcPtr, void* dstEnd)
{
	BYTE* d; // 468
	const BYTE* s; // 469
	const BYTE* e; // 470
} /* size: 0, variables: 3 */

// <057C7F7B> lib/lz4.c:499
inline void LZ4_memcpy_using_offset_base(BYTE* dstPtr, const BYTE* srcPtr, BYTE* dstEnd, const size_t offset)
{
} /* size: 0 */

// <057C7F24> lib/lz4.c:525
// variables: 3
inline void LZ4_wildCopy32(void* dstPtr, const void* srcPtr, void* dstEnd)
{
	BYTE* d; // 527
	const BYTE* s; // 528
	const BYTE* e; // 529
} /* size: 0, variables: 3 */

// <057C7EC6> lib/lz4.c:538
// variable: 1
inline void LZ4_memcpy_using_offset(BYTE* dstPtr, const BYTE* srcPtr, BYTE* dstEnd, const size_t offset)
{
	BYTE v; // 540
} /* size: 0, variables: 1 */

// <057DAC16> lib/lz4.c:582
unsigned int LZ4_NbCommonBytes(reg_t val)
{
} /* size: 0 */

// <057DABAD> lib/lz4.c:683
// variables: 3
inline unsigned int LZ4_count(const BYTE* pIn, const BYTE* pMatch, const BYTE* pInLimit)
{
	const BYTE* pStart; // 685
	{
		const reg_t  diff; // 688
	}
	{
		const reg_t  diff; // 696
	}
} /* size: 0, variables: 1 */

// <057C7E1B> lib/lz4.c:752
int LZ4_versionNumber(void)
{
} /* size: 0 */

// <057C7DF9> lib/lz4.c:753
const char* LZ4_versionString(void)
{
} /* size: 0 */

// <008C3620> lib/lz4.c:754
int LZ4_compressBound(int isize)
{
} /* size: 0 */

// <057C7DC9> lib/lz4.c:755
int LZ4_sizeofState(void)
{
} /* size: 0 */

// <057C7D9C> lib/lz4.c:780
inline U32 LZ4_hash4(U32 sequence, const tableType_t tableType)
{
} /* size: 0 */

// <057C7D40> lib/lz4.c:788
// variables: 3
inline U32 LZ4_hash5(U64 sequence, const tableType_t tableType)
{
	const U32  hashLog; // 790
	{
		const U64  prime5bytes; // 792
	}
	{
		const U64  prime8bytes; // 795
	}
} /* size: 0, variables: 1 */

// <057C7D15> lib/lz4.c:800
inline U32 LZ4_hashPosition(const void* p, const tableType_t tableType)
{
} /* size: 0 */

// <057C7CAC> lib/lz4.c:811
// variables: 3
inline void LZ4_clearHash(U32 h, void* tableBase, const tableType_t tableType)
{
	{
		const BYTE ** hashTable; // 817
	}
	{
		U32* hashTable; // 818
	}
	{
		U16* hashTable; // 819
	}
} /* size: 0 */

// <057C7C3D> lib/lz4.c:823
// variables: 2
inline void LZ4_putIndexOnHash(U32 idx, U32 h, void* tableBase, const tableType_t tableType)
{
	{
		U32* hashTable; // 830
	}
	{
		U16* hashTable; // 831
	}
} /* size: 0 */

// <057C7BF1> lib/lz4.c:836
// variable: 1
inline void LZ4_putPositionOnHash(const BYTE* p, U32 h, void* tableBase, const tableType_t tableType)
{
	const BYTE **  hashTable; // 839
} /* size: 0, variables: 1 */

// <057C7BB2> lib/lz4.c:844
// variable: 1
inline void LZ4_putPosition(const BYTE* p, void* tableBase, tableType_t tableType)
{
	const U32  h; // 846
} /* size: 0, variables: 1 */

// <057C7B41> lib/lz4.c:856
// variables: 2
inline U32 LZ4_getIndexOnHash(U32 h, const void* tableBase, tableType_t tableType)
{
	{
	}
	{
		const U32* hashTable; // 860
	}
	{
		const U16* hashTable; // 865
	}
} /* size: 0 */

// <057C7AF4> lib/lz4.c:872
// variable: 1
const BYTE* LZ4_getPositionOnHash(U32 h, const void* tableBase, tableType_t tableType)
{
	{
		const BYTE* const* hashTable; // 875
	}
} /* size: 0 */

// <057C7AB1> lib/lz4.c:879
// variable: 1
inline const BYTE* LZ4_getPosition(const BYTE* p, const void* tableBase, tableType_t tableType)
{
	const U32  h; // 882
} /* size: 0, variables: 1 */

// <057C7A7B> lib/lz4.c:887
inline void LZ4_prepareTable(const LZ4_stream_t_internal* cctx, const int inputSize, const tableType_t tableType)
{
} /* size: 0 */

// <057C7705> lib/lz4.c:933
// variables: 50
inline int LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx, const char* source, const char* dest, const int inputSize, int* inputConsumed, const int maxOutputSize, const limitedOutput_directive outputDirective, const tableType_t tableType, const dict_directive dictDirective, const dictIssue_directive dictIssue, const int acceleration)
{

_next_match: // 1141

_last_literals: // 1305
	int result; // 946
	const BYTE* ip; // 947
	const U32  startIndex; // 949
	const BYTE* base; // 950
	const BYTE* lowLimit; // 951
	const LZ4_stream_t_internal* dictCtx; // 953
	const BYTE* dictionary; // 954
	const U32  dictSize; // 956
	const U32  dictDelta; // 958
	const int  maybe_extMem; // 961
	const U32  prefixIdxLimit; // 962
	const BYTE* dictEnd; // 963
	const BYTE* anchor; // 964
	const BYTE* iend; // 965
	const BYTE* mflimitPlusOne; // 966
	const BYTE* matchlimit; // 967
	const BYTE* dictBase; // 971
	BYTE* op; // 976
	const BYTE* olimit; // 977
	U32 offset; // 979
	U32 forwardH; // 980
	{
		const U32  h; // 1008
	}
	{
		const BYTE* match; // 1018
		BYTE* token; // 1019
		const BYTE* filledIp; // 1020
		{
			const BYTE* forwardIp; // 1024
			int step; // 1025
			int searchMatchNb; // 1026
			{
				const U32  h; // 1028
			}
		}
		{
			const BYTE* forwardIp; // 1045
			int step; // 1046
			int searchMatchNb; // 1047
			{
				const U32  h; // 1049
				const U32  current; // 1050
				U32 matchIndex; // 1051
			}
		}
		{
			const unsigned int  litLength; // 1115
			{
				unsigned int len; // 1127
			}
		}
		{
			unsigned int matchCode; // 1169
			{
				const BYTE* limit; // 1173
				{
					const unsigned int  more; // 1179
				}
			}
			{
				U32 newMatchCode; // 1194
				{
					const BYTE* ptr; // 1204
					{
						const U32  h; // 1207
					}
				}
			}
		}
		{
			const U32  h; // 1239
			{
				const U32  idx; // 1243
			}
		}
		{
			const U32  h; // 1258
			const U32  current; // 1259
			U32 matchIndex; // 1260
		}
	}
	{
		size_t lastRun; // 1307
		{
			size_t accumulator; // 1322
		}
	}
} /* size: 0, variables: 21, goto labels: 2 */

// <057C7663> lib/lz4.c:1347
inline int LZ4_compress_generic(const LZ4_stream_t_internal* cctx, const char* src, const char* dst, const int srcSize, int* inputConsumed, const int dstCapacity, const limitedOutput_directive outputDirective, const tableType_t tableType, const dict_directive dictDirective, const dictIssue_directive dictIssue, const int acceleration)
{
} /* size: 0 */

// <057C32F0> lib/lz4.c:1385
// variables: 127
// function calls: 214
int LZ4_compress_fast_extState(void* state, const char* source, char* dest, int inputSize, int maxOutputSize, int acceleration)
{
	const LZ4_stream_t_internal* ctx; // 1387
	{
		const tableType_t  tableType; // 1395

_next_match: // 1141

_last_literals: // 1305
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_isLittleEndian(void); // 791
					{
						const U64  prime5bytes; // 792
					}
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1396
	}
	{
		const tableType_t  tableType; // 1402

_next_match: // 1141

_last_literals: // 1305
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					{
						const U64  prime5bytes; // 792
					}
					LZ4_isLittleEndian(void); // 791
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_isLittleEndian(void); // 791
			{
				const U64  prime5bytes; // 792
			}
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1403
	}
	LZ4_stream_t_alignment(void); // 1560
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1560
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1561
	LZ4_initStream(void* buffer,
			size_t size);  // 1555
	LZ4_initStream(void* buffer,
			size_t size);  // 1387
	LZ4_compressBound(int isize); // 1391

_next_match: // 1141

_last_literals: // 1305
	{
		const BYTE* match; // 1018
		BYTE* token; // 1019
		const BYTE* filledIp; // 1020
		{
			const BYTE* forwardIp; // 1045
			int step; // 1046
			int searchMatchNb; // 1047
			{
				const U32  h; // 1049
				const U32  current; // 1050
				U32 matchIndex; // 1051
				{
					const U16* hashTable; // 865
				}
				{
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1051
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_read32(const void* ptr); // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1087
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1088
				LZ4_read32(const void* ptr); // 1099
				LZ4_read32(const void* ptr); // 1099
			}
		}
		{
			const unsigned int  litLength; // 1115
			{
				unsigned int len; // 1127
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 1135
		}
		{
			unsigned int matchCode; // 1169
			{
				const reg_t  diff; // 688
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 692
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_read_ARCH(const void* ptr); // 688
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
					const BYTE* pInLimit);  // 1185
			LZ4_write32(void* memPtr,
					U32 value);  // 1219
			LZ4_write32(void* memPtr,
					U32 value);  // 1222
		}
		{
			const U32  h; // 1239
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1239
			{
				const U32  idx; // 1243
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1244
			}
		}
		{
			const U32  h; // 1258
			const U32  current; // 1259
			U32 matchIndex; // 1260
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1258
			{
			}
			{
				const U16* hashTable; // 865
			}
			LZ4_getIndexOnHash(U32 h,
						const void* tableBase,
						tableType_t tableType);  // 1260
			{
				U16* hashTable; // 831
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1286
			LZ4_read32(const void* ptr); // 1290
			LZ4_read32(const void* ptr); // 1290
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 1165
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_read32(const void* ptr); // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1301
	}
	{
		const U32  h; // 1008
		LZ4_read32(const void* ptr); // 807
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1008
		{
			U16* hashTable; // 831
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1012
	}
	LZ4_read32(const void* ptr); // 807
	LZ4_hash4(U32 sequence,
			const tableType_t  tableType);  // 807
	LZ4_hashPosition(const void* p,
			const tableType_t  tableType);  // 1014
	{
		size_t lastRun; // 1307
		{
			size_t accumulator; // 1322
		}
	}
	LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
					const char* source,
					const char* dest,
					const int  inputSize,
					int* inputConsumed,
					const int  maxOutputSize,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1378
	LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
				const char* src,
				const char* dst,
				const int  srcSize,
				int* inputConsumed,
				const int  dstCapacity,
				const limitedOutput_directive  outputDirective,
				const tableType_t  tableType,
				const dict_directive  dictDirective,
				const dictIssue_directive  dictIssue,
				const int  acceleration);  // 1393

_next_match: // 1141

_last_literals: // 1305
	{
		size_t lastRun; // 1307
		{
			size_t accumulator; // 1322
		}
	}
	{
		const BYTE* match; // 1018
		BYTE* token; // 1019
		const BYTE* filledIp; // 1020
		{
			const BYTE* forwardIp; // 1045
			int step; // 1046
			int searchMatchNb; // 1047
			{
				const U32  h; // 1049
				const U32  current; // 1050
				U32 matchIndex; // 1051
				{
					const U16* hashTable; // 865
				}
				{
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1051
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_read32(const void* ptr); // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1087
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1088
				LZ4_read32(const void* ptr); // 1099
				LZ4_read32(const void* ptr); // 1099
			}
		}
		{
			const unsigned int  litLength; // 1115
			{
				unsigned int len; // 1127
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 1135
		}
		{
			unsigned int matchCode; // 1169
			{
				const reg_t  diff; // 688
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 692
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_read_ARCH(const void* ptr); // 688
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
					const BYTE* pInLimit);  // 1185
			LZ4_write32(void* memPtr,
					U32 value);  // 1219
			LZ4_write32(void* memPtr,
					U32 value);  // 1222
		}
		{
			const U32  h; // 1239
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1239
			{
				const U32  idx; // 1243
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1244
			}
		}
		{
			const U32  h; // 1258
			const U32  current; // 1259
			U32 matchIndex; // 1260
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1258
			{
			}
			{
				const U16* hashTable; // 865
			}
			LZ4_getIndexOnHash(U32 h,
						const void* tableBase,
						tableType_t tableType);  // 1260
			{
				U16* hashTable; // 831
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1286
			LZ4_read32(const void* ptr); // 1290
			LZ4_read32(const void* ptr); // 1290
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 1165
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_read32(const void* ptr); // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1301
	}
	{
		const U32  h; // 1008
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_read32(const void* ptr); // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1008
		{
			U16* hashTable; // 831
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1012
	}
	LZ4_read32(const void* ptr); // 807
	LZ4_hash4(U32 sequence,
			const tableType_t  tableType);  // 807
	LZ4_hashPosition(const void* p,
			const tableType_t  tableType);  // 1014
	LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
					const char* source,
					const char* dest,
					const int  inputSize,
					int* inputConsumed,
					const int  maxOutputSize,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1378
	LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
				const char* src,
				const char* dst,
				const int  srcSize,
				int* inputConsumed,
				const int  dstCapacity,
				const limitedOutput_directive  outputDirective,
				const tableType_t  tableType,
				const dict_directive  dictDirective,
				const dictIssue_directive  dictIssue,
				const int  acceleration);  // 1400
} /* size: 6728, variables: 1, goto labels: 4, inline expansions: 16 (6637 bytes) */

// <057BCE80> lib/lz4.c:1417
// variables: 185
// function calls: 315
int LZ4_compress_fast_extState_fastReset(void* state, const char* src, char* dst, int srcSize, int dstCapacity, int acceleration)
{
	const LZ4_stream_t_internal* ctx; // 1419
	{
		const tableType_t  tableType; // 1426
		memset(void* __dest,
			int __ch,
			size_t __len);  // 903
		LZ4_prepareTable(const LZ4_stream_t_internal* cctx,
				const int  inputSize,
				const tableType_t  tableType);  // 1427

_next_match: // 1141

_last_literals: // 1305
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U16* hashTable; // 865
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					LZ4_read32(const void* ptr); // 807
					LZ4_hash4(U32 sequence,
							const tableType_t  tableType);  // 807
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U16* hashTable; // 831
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				LZ4_read32(const void* ptr); // 807
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U16* hashTable; // 831
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read32(const void* ptr); // 807
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U16* hashTable; // 865
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U16* hashTable; // 831
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read32(const void* ptr); // 807
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1429

_next_match: // 1141

_last_literals: // 1305
		{
			const U32  h; // 1008
			{
				U16* hashTable; // 831
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
		}
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
						const U16* hashTable; // 865
					}
					{
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					LZ4_hash4(U32 sequence,
							const tableType_t  tableType);  // 807
					LZ4_read32(const void* ptr); // 807
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U16* hashTable; // 831
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				LZ4_read32(const void* ptr); // 807
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U16* hashTable; // 831
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read32(const void* ptr); // 807
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U16* hashTable; // 865
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_read32(const void* ptr); // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		LZ4_read32(const void* ptr); // 807
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1431
	}
	{
		const tableType_t  tableType; // 1434
		memset(void* __dest,
			int __ch,
			size_t __len);  // 903
		LZ4_prepareTable(const LZ4_stream_t_internal* cctx,
				const int  inputSize,
				const tableType_t  tableType);  // 1435

_next_match: // 1141

_last_literals: // 1305
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_isLittleEndian(void); // 791
					{
						const U64  prime5bytes; // 792
					}
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_isLittleEndian(void); // 791
			{
				const U64  prime5bytes; // 792
			}
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1436
	}
	{
		const tableType_t  tableType; // 1440

_next_match: // 1141

_last_literals: // 1305
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U16* hashTable; // 865
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					LZ4_read32(const void* ptr); // 807
					LZ4_hash4(U32 sequence,
							const tableType_t  tableType);  // 807
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U16* hashTable; // 831
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				LZ4_read32(const void* ptr); // 807
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U16* hashTable; // 831
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read32(const void* ptr); // 807
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U16* hashTable; // 865
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U16* hashTable; // 831
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read32(const void* ptr); // 807
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1443
		memset(void* __dest,
			int __ch,
			size_t __len);  // 903
		LZ4_prepareTable(const LZ4_stream_t_internal* cctx,
				const int  inputSize,
				const tableType_t  tableType);  // 1441

_next_match: // 1141

_last_literals: // 1305
		{
			const U32  h; // 1008
			{
				U16* hashTable; // 831
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
		}
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
						const U16* hashTable; // 865
					}
					{
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					LZ4_hash4(U32 sequence,
							const tableType_t  tableType);  // 807
					LZ4_read32(const void* ptr); // 807
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U16* hashTable; // 831
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				LZ4_read32(const void* ptr); // 807
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U16* hashTable; // 831
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read32(const void* ptr); // 807
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U16* hashTable; // 865
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_read32(const void* ptr); // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		LZ4_read32(const void* ptr); // 807
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1445
	}
	{
		const tableType_t  tableType; // 1448

_next_match: // 1141

_last_literals: // 1305
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					{
						const U64  prime5bytes; // 792
					}
					LZ4_isLittleEndian(void); // 791
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_isLittleEndian(void); // 791
			{
				const U64  prime5bytes; // 792
			}
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1450
		memset(void* __dest,
			int __ch,
			size_t __len);  // 903
		LZ4_prepareTable(const LZ4_stream_t_internal* cctx,
				const int  inputSize,
				const tableType_t  tableType);  // 1449
	}
	LZ4_compressBound(int isize); // 1424
} /* size: 10414, variables: 1, inline expansions: 1 (40 bytes) */

// <057BCD69> lib/lz4.c:1456
// variables: 3
int LZ4_compress_fast(const char* src, char* dest, int srcSize, int dstCapacity, int acceleration)
{
	int result; // 1458
	LZ4_stream_t ctx; // 1463
	const LZ4_stream_t* ctxPtr; // 1464
} /* size: 101, variables: 3 */

// <02AFD42E> lib/lz4.c:1475
int LZ4_compress_default(const char* src, char* dst, int srcSize, int dstCapacity)
{
} /* size: 0 */

// <057BA736> lib/lz4.c:1484
// variables: 73
// function calls: 119
int LZ4_compress_destSize_extState_internal(LZ4_stream_t* state, const char* src, char* dst, int* srcSizePtr, int targetDstSize, int acceleration)
{
	const void* s; // 1486
	{
		const tableType_t  addrMode; // 1495

_next_match: // 1141

_last_literals: // 1305
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_isLittleEndian(void); // 791
					{
						const U64  prime5bytes; // 792
					}
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
				{
					const reg_t  diff; // 688
					LZ4_isLittleEndian(void); // 585
					LZ4_NbCommonBytes(reg_t val); // 692
					LZ4_read_ARCH(const void* ptr); // 688
					LZ4_read_ARCH(const void* ptr); // 688
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
						const BYTE* pInLimit);  // 1185
				{
					U32 newMatchCode; // 1194
					{
						const BYTE* ptr; // 1204
						{
							const U32  h; // 1207
							{
								const U64  prime5bytes; // 792
							}
							LZ4_isLittleEndian(void); // 791
							LZ4_hash5(U64 sequence,
									const tableType_t  tableType);  // 802
							LZ4_read_ARCH(const void* ptr); // 802
							LZ4_hashPosition(const void* p,
									const tableType_t  tableType);  // 1207
							{
								U32* hashTable; // 818
							}
							LZ4_clearHash(U32 h,
									void* tableBase,
									const tableType_t  tableType);  // 1208
						}
					}
				}
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1165
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1496
	}
	LZ4_stream_t_alignment(void); // 1560
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1560
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1561
	LZ4_initStream(void* buffer,
			size_t size);  // 1555
	LZ4_initStream(void* buffer,
			size_t size);  // 1486
	LZ4_compressBound(int isize); // 1489

_next_match: // 1141

_last_literals: // 1305
	{
		const BYTE* match; // 1018
		BYTE* token; // 1019
		const BYTE* filledIp; // 1020
		{
			const BYTE* forwardIp; // 1045
			int step; // 1046
			int searchMatchNb; // 1047
			{
				const U32  h; // 1049
				const U32  current; // 1050
				U32 matchIndex; // 1051
				{
					const U16* hashTable; // 865
				}
				{
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1051
				LZ4_hash4(U32 sequence,
						const tableType_t  tableType);  // 807
				LZ4_read32(const void* ptr); // 807
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1087
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1088
				LZ4_read32(const void* ptr); // 1099
				LZ4_read32(const void* ptr); // 1099
			}
		}
		{
			const unsigned int  litLength; // 1115
			{
				unsigned int len; // 1127
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 1135
		}
		{
			unsigned int matchCode; // 1169
			{
				const reg_t  diff; // 688
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 692
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_read_ARCH(const void* ptr); // 688
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
					const BYTE* pInLimit);  // 1185
			{
				U32 newMatchCode; // 1194
				{
					const BYTE* ptr; // 1204
					{
						const U32  h; // 1207
						LZ4_read32(const void* ptr); // 807
						LZ4_hash4(U32 sequence,
								const tableType_t  tableType);  // 807
						LZ4_hashPosition(const void* p,
								const tableType_t  tableType);  // 1207
						{
							U16* hashTable; // 819
						}
						LZ4_clearHash(U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1208
					}
				}
			}
			LZ4_write32(void* memPtr,
					U32 value);  // 1219
			LZ4_write32(void* memPtr,
					U32 value);  // 1222
		}
		{
			const U32  h; // 1258
			const U32  current; // 1259
			U32 matchIndex; // 1260
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1258
			{
			}
			{
				const U16* hashTable; // 865
			}
			LZ4_getIndexOnHash(U32 h,
						const void* tableBase,
						tableType_t tableType);  // 1260
			{
				U16* hashTable; // 831
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1286
			LZ4_read32(const void* ptr); // 1290
			LZ4_read32(const void* ptr); // 1290
		}
		{
			const U32  h; // 1239
			LZ4_read32(const void* ptr); // 807
			LZ4_hash4(U32 sequence,
					const tableType_t  tableType);  // 807
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1239
			{
				const U32  idx; // 1243
				{
					U16* hashTable; // 831
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1244
			}
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 1165
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_read32(const void* ptr); // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1301
	}
	{
		const U32  h; // 1008
		LZ4_read32(const void* ptr); // 807
		LZ4_hash4(U32 sequence,
				const tableType_t  tableType);  // 807
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1008
		{
			U16* hashTable; // 831
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1012
	}
	LZ4_read32(const void* ptr); // 807
	LZ4_hash4(U32 sequence,
			const tableType_t  tableType);  // 807
	LZ4_hashPosition(const void* p,
			const tableType_t  tableType);  // 1014
	{
		size_t lastRun; // 1307
		{
			size_t accumulator; // 1322
		}
	}
	LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
					const char* source,
					const char* dest,
					const int  inputSize,
					int* inputConsumed,
					const int  maxOutputSize,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1378
	LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
				const char* src,
				const char* dst,
				const int  srcSize,
				int* inputConsumed,
				const int  dstCapacity,
				const limitedOutput_directive  outputDirective,
				const tableType_t  tableType,
				const dict_directive  dictDirective,
				const dictIssue_directive  dictIssue,
				const int  acceleration);  // 1493
} /* size: 0, variables: 1, goto labels: 2, inline expansions: 11 (0 bytes) */

// <057BA502> lib/lz4.c:1500
// variable: 1
// function calls: 5
int LZ4_compress_destSize_extState(void* state, const char* src, char* dst, int* srcSizePtr, int targetDstSize, int acceleration)
{
	const int  r; // 1502
	LZ4_stream_t_alignment(void); // 1560
	LZ4_isAligned(const void* ptr,
			size_t alignment);  // 1560
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1561
	LZ4_initStream(void* buffer,
			size_t size);  // 1555
	LZ4_initStream(void* buffer,
			size_t size);  // 1504
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <057BA3FC> lib/lz4.c:1509
// variables: 3
int LZ4_compress_destSize(const char* src, char* dst, int* srcSizePtr, int targetDstSize)
{
	LZ4_stream_t ctxBody; // 1515
	const LZ4_stream_t* ctx; // 1516
	int result; // 1519
} /* size: 0, variables: 3 */

// <057BA3DA> lib/lz4.c:1534
// variable: 1
LZ4_stream_t* LZ4_createStream(void)
{
	const LZ4_stream_t* lz4s; // 1536
	{
	}
} /* size: 0, variables: 1 */

// <057BA3CC> lib/lz4.c:1545
size_t LZ4_stream_t_alignment(void)
{
} /* size: 0 */

// <057BA39E> lib/lz4.c:1555
LZ4_stream_t* LZ4_initStream(void* buffer, size_t size)
{
} /* size: 0 */

// <057BA381> lib/lz4.c:1567
void LZ4_resetStream(LZ4_stream_t* LZ4_stream)
{
} /* size: 0 */

// <057BA2A9> lib/lz4.c:1573
// function calls: 2
void LZ4_resetStream_fast(LZ4_stream_t* ctx)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 903
	LZ4_prepareTable(const LZ4_stream_t_internal* cctx,
			const int  inputSize,
			const tableType_t  tableType);  // 1574
} /* size: 108, inline expansions: 2 (113 bytes) */

// <057BA288> lib/lz4.c:1578
int LZ4_freeStream(LZ4_stream_t* LZ4_stream)
{
} /* size: 0 */

// <057B9DA7> lib/lz4.c:1590
// variables: 13
// function calls: 13
int LZ4_loadDict_internal(LZ4_stream_t* LZ4_dict, const char* dictionary, int dictSize, LoadDict_mode_e _ld)
{
	const LZ4_stream_t_internal* dict; // 1594
	const tableType_t  tableType; // 1595
	const BYTE* p; // 1596
	const BYTE* dictEnd; // 1597
	U32 idx32; // 1598
	{
		const U32  h; // 1627
		{
			const U64  prime5bytes; // 792
		}
		LZ4_isLittleEndian(void); // 791
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1627
		{
			U32* hashTable; // 830
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1629
	}
	{
		const U32  h; // 1638
		const U32  limit; // 1639
		{
			const U64  prime5bytes; // 792
		}
		LZ4_isLittleEndian(void); // 791
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1638
		{
		}
		{
			const U32* hashTable; // 860
		}
		LZ4_getIndexOnHash(U32 h,
					const void* tableBase,
					tableType_t tableType);  // 1640
		{
			U32* hashTable; // 830
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1642
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1570
	LZ4_resetStream(LZ4_stream_t* LZ4_stream); // 1606
} /* size: 375, variables: 5, inline expansions: 2 (24 bytes) */

// <057B9D18> lib/lz4.c:1651
int LZ4_loadDict(LZ4_stream_t* LZ4_dict, const char* dictionary, int dictSize)
{
} /* size: 11 */

// <057B9C89> lib/lz4.c:1656
int LZ4_loadDictSlow(LZ4_stream_t* LZ4_dict, const char* dictionary, int dictSize)
{
} /* size: 14 */

// <057B9C21> lib/lz4.c:1661
// variable: 1
void LZ4_attach_dictionary(LZ4_stream_t* workingStream, const LZ4_stream_t* dictionaryStream)
{
	const LZ4_stream_t_internal* dictCtx; // 1663
} /* size: 49, variables: 1 */

// <057B9B8C> lib/lz4.c:1690
// variables: 3
void LZ4_renormDictT(LZ4_stream_t_internal* LZ4_dict, int nextSize)
{
	{
		const U32  delta; // 1695
		const BYTE* dictEnd; // 1696
		int i; // 1697
	}
} /* size: 213 */

// <057B1B66> lib/lz4.c:1710
// variables: 235
// function calls: 436
int LZ4_compress_fast_continue(LZ4_stream_t* LZ4_stream, const char* source, char* dest, int inputSize, int maxOutputSize, int acceleration)
{
	const tableType_t  tableType; // 1715
	const LZ4_stream_t_internal* streamPtr; // 1716
	const char* dictEnd; // 1717
	{
		const char* sourceEnd; // 1739
	}
	{
		int result; // 1757

_next_match: // 1141

_last_literals: // 1305
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					{
						const U64  prime5bytes; // 792
					}
					LZ4_isLittleEndian(void); // 791
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1065
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
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
						const BYTE* pInLimit);  // 1185
				{
					const BYTE* limit; // 1173
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
							const BYTE* pInLimit);  // 1176
					{
						const unsigned int  more; // 1179
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
								const BYTE* pInLimit);  // 1179
					}
				}
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1266
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1161
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		{
			const U32  h; // 1008
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1773

_next_match: // 1141

_last_literals: // 1305
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					{
						const U64  prime5bytes; // 792
					}
					LZ4_isLittleEndian(void); // 791
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
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
						const BYTE* pInLimit);  // 1185
				{
					const BYTE* limit; // 1173
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
							const BYTE* pInLimit);  // 1176
					{
						const unsigned int  more; // 1179
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
								const BYTE* pInLimit);  // 1179
					}
				}
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1161
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1777

_next_match: // 1141

_last_literals: // 1305
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					{
						const U64  prime5bytes; // 792
					}
					LZ4_isLittleEndian(void); // 791
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
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
						const BYTE* pInLimit);  // 1185
				{
					const BYTE* limit; // 1173
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
							const BYTE* pInLimit);  // 1176
					{
						const unsigned int  more; // 1179
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
								const BYTE* pInLimit);  // 1179
					}
				}
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1161
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1779

_next_match: // 1141

_last_literals: // 1305
		{
			const BYTE* match; // 1018
			BYTE* token; // 1019
			const BYTE* filledIp; // 1020
			{
				const BYTE* forwardIp; // 1045
				int step; // 1046
				int searchMatchNb; // 1047
				{
					const U32  h; // 1049
					const U32  current; // 1050
					U32 matchIndex; // 1051
					{
					}
					{
						const U32* hashTable; // 860
					}
					LZ4_getIndexOnHash(U32 h,
								const void* tableBase,
								tableType_t tableType);  // 1051
					{
						const U64  prime5bytes; // 792
					}
					LZ4_isLittleEndian(void); // 791
					LZ4_hash5(U64 sequence,
							const tableType_t  tableType);  // 802
					LZ4_read_ARCH(const void* ptr); // 802
					LZ4_hashPosition(const void* p,
							const tableType_t  tableType);  // 1087
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1088
					LZ4_read32(const void* ptr); // 1099
					LZ4_read32(const void* ptr); // 1099
				}
			}
			{
				const unsigned int  litLength; // 1115
				{
					unsigned int len; // 1127
				}
				LZ4_wildCopy8(void* dstPtr,
						const void* srcPtr,
						void* dstEnd);  // 1135
			}
			{
				unsigned int matchCode; // 1169
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
						const BYTE* pInLimit);  // 1185
				{
					const BYTE* limit; // 1173
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
							const BYTE* pInLimit);  // 1176
					{
						const unsigned int  more; // 1179
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
								const BYTE* pInLimit);  // 1179
					}
				}
				LZ4_write32(void* memPtr,
						U32 value);  // 1219
				LZ4_write32(void* memPtr,
						U32 value);  // 1222
			}
			{
				const U32  h; // 1239
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1239
				{
					const U32  idx; // 1243
					{
						U32* hashTable; // 830
					}
					LZ4_putIndexOnHash(U32 idx,
								U32 h,
								void* tableBase,
								const tableType_t  tableType);  // 1244
				}
			}
			{
				const U32  h; // 1258
				const U32  current; // 1259
				U32 matchIndex; // 1260
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1286
				LZ4_read32(const void* ptr); // 1290
				LZ4_read32(const void* ptr); // 1290
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1258
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1260
			}
			LZ4_isLittleEndian(void); // 455
			LZ4_write16(void* memPtr,
					U16 value);  // 456
			LZ4_writeLE16(void* memPtr,
					U16 value);  // 1161
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1301
		}
		{
			const U32  h; // 1008
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1008
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1012
		}
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1014
		{
			size_t lastRun; // 1307
			{
				size_t accumulator; // 1322
			}
		}
		LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
						const char* source,
						const char* dest,
						const int  inputSize,
						int* inputConsumed,
						const int  maxOutputSize,
						const limitedOutput_directive  outputDirective,
						const tableType_t  tableType,
						const dict_directive  dictDirective,
						const dictIssue_directive  dictIssue,
						const int  acceleration);  // 1378
		LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
					const char* src,
					const char* dst,
					const int  srcSize,
					int* inputConsumed,
					const int  dstCapacity,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1771
	}

_next_match: // 1141

_last_literals: // 1305
	{
		const BYTE* match; // 1018
		BYTE* token; // 1019
		const BYTE* filledIp; // 1020
		{
			const BYTE* forwardIp; // 1045
			int step; // 1046
			int searchMatchNb; // 1047
			{
				const U32  h; // 1049
				const U32  current; // 1050
				U32 matchIndex; // 1051
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1051
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1087
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1088
				LZ4_read32(const void* ptr); // 1099
				LZ4_read32(const void* ptr); // 1099
			}
		}
		{
			unsigned int matchCode; // 1169
			{
				const reg_t  diff; // 688
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 692
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_read_ARCH(const void* ptr); // 688
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
					const BYTE* pInLimit);  // 1185
			LZ4_write32(void* memPtr,
					U32 value);  // 1219
			LZ4_write32(void* memPtr,
					U32 value);  // 1222
		}
		{
			const unsigned int  litLength; // 1115
			{
				unsigned int len; // 1127
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 1135
		}
		{
			const U32  h; // 1239
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1239
			{
				const U32  idx; // 1243
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1244
			}
		}
		{
			const U32  h; // 1258
			const U32  current; // 1259
			U32 matchIndex; // 1260
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_isLittleEndian(void); // 791
			{
				const U64  prime5bytes; // 792
			}
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1258
			{
			}
			{
				const U32* hashTable; // 860
			}
			LZ4_getIndexOnHash(U32 h,
						const void* tableBase,
						tableType_t tableType);  // 1260
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1286
			LZ4_read32(const void* ptr); // 1290
			LZ4_read32(const void* ptr); // 1290
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 1165
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1301
	}
	{
		const U32  h; // 1008
		{
			const U64  prime5bytes; // 792
		}
		LZ4_isLittleEndian(void); // 791
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1008
		{
			U32* hashTable; // 830
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1012
	}
	LZ4_read_ARCH(const void* ptr); // 802
	LZ4_isLittleEndian(void); // 791
	{
		const U64  prime5bytes; // 792
	}
	LZ4_hash5(U64 sequence,
			const tableType_t  tableType);  // 802
	LZ4_hashPosition(const void* p,
			const tableType_t  tableType);  // 1014
	{
		size_t lastRun; // 1307
		{
			size_t accumulator; // 1322
		}
	}
	LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
					const char* source,
					const char* dest,
					const int  inputSize,
					int* inputConsumed,
					const int  maxOutputSize,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1378
	LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
				const char* src,
				const char* dst,
				const int  srcSize,
				int* inputConsumed,
				const int  dstCapacity,
				const limitedOutput_directive  outputDirective,
				const tableType_t  tableType,
				const dict_directive  dictDirective,
				const dictIssue_directive  dictIssue,
				const int  acceleration);  // 1751

_next_match: // 1141

_last_literals: // 1305
	{
		const BYTE* match; // 1018
		BYTE* token; // 1019
		const BYTE* filledIp; // 1020
		{
			const BYTE* forwardIp; // 1045
			int step; // 1046
			int searchMatchNb; // 1047
			{
				const U32  h; // 1049
				const U32  current; // 1050
				U32 matchIndex; // 1051
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1051
				{
					const U64  prime5bytes; // 792
				}
				LZ4_isLittleEndian(void); // 791
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1087
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1088
				LZ4_read32(const void* ptr); // 1099
				LZ4_read32(const void* ptr); // 1099
			}
		}
		{
			const unsigned int  litLength; // 1115
			{
				unsigned int len; // 1127
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 1135
		}
		{
			const U32  h; // 1239
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1239
			{
				const U32  idx; // 1243
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1244
			}
		}
		{
			unsigned int matchCode; // 1169
			{
				const reg_t  diff; // 688
				LZ4_isLittleEndian(void); // 585
				LZ4_NbCommonBytes(reg_t val); // 692
				LZ4_read_ARCH(const void* ptr); // 688
				LZ4_read_ARCH(const void* ptr); // 688
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
					const BYTE* pInLimit);  // 1185
			LZ4_write32(void* memPtr,
					U32 value);  // 1219
			LZ4_write32(void* memPtr,
					U32 value);  // 1222
		}
		{
			const U32  h; // 1258
			const U32  current; // 1259
			U32 matchIndex; // 1260
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_isLittleEndian(void); // 791
			{
				const U64  prime5bytes; // 792
			}
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1258
			{
			}
			{
				const U32* hashTable; // 860
			}
			LZ4_getIndexOnHash(U32 h,
						const void* tableBase,
						tableType_t tableType);  // 1260
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1286
			LZ4_read32(const void* ptr); // 1290
			LZ4_read32(const void* ptr); // 1290
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 1165
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1301
	}
	{
		const U32  h; // 1008
		{
			const U64  prime5bytes; // 792
		}
		LZ4_isLittleEndian(void); // 791
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1008
		{
			U32* hashTable; // 830
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1012
	}
	LZ4_read_ARCH(const void* ptr); // 802
	LZ4_isLittleEndian(void); // 791
	{
		const U64  prime5bytes; // 792
	}
	LZ4_hash5(U64 sequence,
			const tableType_t  tableType);  // 802
	LZ4_hashPosition(const void* p,
			const tableType_t  tableType);  // 1014
	{
		size_t lastRun; // 1307
		{
			size_t accumulator; // 1322
		}
	}
	LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
					const char* source,
					const char* dest,
					const int  inputSize,
					int* inputConsumed,
					const int  maxOutputSize,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1378
	LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
				const char* src,
				const char* dst,
				const int  srcSize,
				int* inputConsumed,
				const int  dstCapacity,
				const limitedOutput_directive  outputDirective,
				const tableType_t  tableType,
				const dict_directive  dictDirective,
				const dictIssue_directive  dictIssue,
				const int  acceleration);  // 1753
} /* size: 14110, variables: 3, goto labels: 4, inline expansions: 12 (6939 bytes) */

// <057AED14> lib/lz4.c:1790
// variables: 82
// function calls: 162
int LZ4_compress_forceExtDict(LZ4_stream_t* LZ4_dict, const char* source, char* dest, int srcSize)
{
	const LZ4_stream_t_internal* streamPtr; // 1792
	int result; // 1793

_next_match: // 1141

_last_literals: // 1305
	{
		const U64  prime5bytes; // 792
	}
	LZ4_isLittleEndian(void); // 791
	LZ4_hash5(U64 sequence,
			const tableType_t  tableType);  // 802
	LZ4_read_ARCH(const void* ptr); // 802
	LZ4_hashPosition(const void* p,
			const tableType_t  tableType);  // 1014
	{
		const U32  h; // 1008
		{
			const U64  prime5bytes; // 792
		}
		LZ4_isLittleEndian(void); // 791
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1008
		{
			U32* hashTable; // 830
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1012
	}
	{
		const BYTE* match; // 1018
		BYTE* token; // 1019
		const BYTE* filledIp; // 1020
		{
			const BYTE* forwardIp; // 1045
			int step; // 1046
			int searchMatchNb; // 1047
			{
				const U32  h; // 1049
				const U32  current; // 1050
				U32 matchIndex; // 1051
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1051
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1087
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1088
				LZ4_read32(const void* ptr); // 1099
				LZ4_read32(const void* ptr); // 1099
			}
		}
		{
			const unsigned int  litLength; // 1115
			{
				unsigned int len; // 1127
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 1135
		}
		{
			const U32  h; // 1239
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1239
			{
				const U32  idx; // 1243
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1244
			}
		}
		{
			unsigned int matchCode; // 1169
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
					const BYTE* pInLimit);  // 1185
			{
				const BYTE* limit; // 1173
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
						const BYTE* pInLimit);  // 1176
				{
					const unsigned int  more; // 1179
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
							const BYTE* pInLimit);  // 1179
				}
			}
			LZ4_write32(void* memPtr,
					U32 value);  // 1219
			LZ4_write32(void* memPtr,
					U32 value);  // 1222
		}
		{
			const U32  h; // 1258
			const U32  current; // 1259
			U32 matchIndex; // 1260
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1286
			LZ4_read32(const void* ptr); // 1290
			LZ4_read32(const void* ptr); // 1290
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_isLittleEndian(void); // 791
			{
				const U64  prime5bytes; // 792
			}
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1258
			{
			}
			{
				const U32* hashTable; // 860
			}
			LZ4_getIndexOnHash(U32 h,
						const void* tableBase,
						tableType_t tableType);  // 1260
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 1161
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_isLittleEndian(void); // 791
		{
			const U64  prime5bytes; // 792
		}
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1301
	}
	{
		size_t lastRun; // 1307
		{
			size_t accumulator; // 1322
		}
	}
	LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
					const char* source,
					const char* dest,
					const int  inputSize,
					int* inputConsumed,
					const int  maxOutputSize,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1378
	LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
				const char* src,
				const char* dst,
				const int  srcSize,
				int* inputConsumed,
				const int  dstCapacity,
				const limitedOutput_directive  outputDirective,
				const tableType_t  tableType,
				const dict_directive  dictDirective,
				const dictIssue_directive  dictIssue,
				const int  acceleration);  // 1800

_next_match: // 1141

_last_literals: // 1305
	{
		const U64  prime5bytes; // 792
	}
	LZ4_isLittleEndian(void); // 791
	LZ4_hash5(U64 sequence,
			const tableType_t  tableType);  // 802
	LZ4_read_ARCH(const void* ptr); // 802
	LZ4_hashPosition(const void* p,
			const tableType_t  tableType);  // 1014
	{
		const U32  h; // 1008
		{
			const U64  prime5bytes; // 792
		}
		LZ4_isLittleEndian(void); // 791
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1008
		{
			U32* hashTable; // 830
		}
		LZ4_putIndexOnHash(U32 idx,
					U32 h,
					void* tableBase,
					const tableType_t  tableType);  // 1012
	}
	{
		const BYTE* match; // 1018
		BYTE* token; // 1019
		const BYTE* filledIp; // 1020
		{
			const BYTE* forwardIp; // 1045
			int step; // 1046
			int searchMatchNb; // 1047
			{
				const U32  h; // 1049
				const U32  current; // 1050
				U32 matchIndex; // 1051
				{
				}
				{
					const U32* hashTable; // 860
				}
				LZ4_getIndexOnHash(U32 h,
							const void* tableBase,
							tableType_t tableType);  // 1051
				LZ4_read_ARCH(const void* ptr); // 802
				LZ4_isLittleEndian(void); // 791
				{
					const U64  prime5bytes; // 792
				}
				LZ4_hash5(U64 sequence,
						const tableType_t  tableType);  // 802
				LZ4_hashPosition(const void* p,
						const tableType_t  tableType);  // 1087
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1088
				LZ4_read32(const void* ptr); // 1099
				LZ4_read32(const void* ptr); // 1099
			}
		}
		{
			const unsigned int  litLength; // 1115
			{
				unsigned int len; // 1127
			}
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 1135
		}
		{
			const U32  h; // 1239
			{
				const U64  prime5bytes; // 792
			}
			LZ4_isLittleEndian(void); // 791
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1239
			{
				const U32  idx; // 1243
				{
					U32* hashTable; // 830
				}
				LZ4_putIndexOnHash(U32 idx,
							U32 h,
							void* tableBase,
							const tableType_t  tableType);  // 1244
			}
		}
		{
			unsigned int matchCode; // 1169
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
					const BYTE* pInLimit);  // 1185
			{
				const BYTE* limit; // 1173
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
						const BYTE* pInLimit);  // 1176
				{
					const unsigned int  more; // 1179
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
							const BYTE* pInLimit);  // 1179
				}
			}
			LZ4_write32(void* memPtr,
					U32 value);  // 1219
			LZ4_write32(void* memPtr,
					U32 value);  // 1222
		}
		{
			const U32  h; // 1258
			const U32  current; // 1259
			U32 matchIndex; // 1260
			{
				U32* hashTable; // 830
			}
			LZ4_putIndexOnHash(U32 idx,
						U32 h,
						void* tableBase,
						const tableType_t  tableType);  // 1286
			LZ4_read32(const void* ptr); // 1290
			LZ4_read32(const void* ptr); // 1290
			LZ4_read_ARCH(const void* ptr); // 802
			LZ4_isLittleEndian(void); // 791
			{
				const U64  prime5bytes; // 792
			}
			LZ4_hash5(U64 sequence,
					const tableType_t  tableType);  // 802
			LZ4_hashPosition(const void* p,
					const tableType_t  tableType);  // 1258
			{
			}
			{
				const U32* hashTable; // 860
			}
			LZ4_getIndexOnHash(U32 h,
						const void* tableBase,
						tableType_t tableType);  // 1260
		}
		LZ4_isLittleEndian(void); // 455
		LZ4_write16(void* memPtr,
				U16 value);  // 456
		LZ4_writeLE16(void* memPtr,
				U16 value);  // 1161
		{
			const U64  prime5bytes; // 792
		}
		LZ4_isLittleEndian(void); // 791
		LZ4_hash5(U64 sequence,
				const tableType_t  tableType);  // 802
		LZ4_read_ARCH(const void* ptr); // 802
		LZ4_hashPosition(const void* p,
				const tableType_t  tableType);  // 1301
	}
	{
		size_t lastRun; // 1307
		{
			size_t accumulator; // 1322
		}
	}
	LZ4_compress_generic_validated(const LZ4_stream_t_internal* cctx,
					const char* source,
					const char* dest,
					const int  inputSize,
					int* inputConsumed,
					const int  maxOutputSize,
					const limitedOutput_directive  outputDirective,
					const tableType_t  tableType,
					const dict_directive  dictDirective,
					const dictIssue_directive  dictIssue,
					const int  acceleration);  // 1378
	LZ4_compress_generic(const LZ4_stream_t_internal* cctx,
				const char* src,
				const char* dst,
				const int  srcSize,
				int* inputConsumed,
				const int  dstCapacity,
				const limitedOutput_directive  outputDirective,
				const tableType_t  tableType,
				const dict_directive  dictDirective,
				const dictIssue_directive  dictIssue,
				const int  acceleration);  // 1798
} /* size: 0, variables: 2, goto labels: 4, inline expansions: 12 (0 bytes) */

// <057AEC6D> lib/lz4.c:1817
// variables: 2
int LZ4_saveDict(LZ4_stream_t* LZ4_dict, char* safeBuffer, int dictSize)
{
	const LZ4_stream_t_internal* dict; // 1819
	{
		const BYTE* previousDictEnd; // 1828
	}
} /* size: 168, variables: 1 */

// <057AEC38> lib/lz4.c:1855
// variables: 2
size_t read_long_length_no_check(const BYTE ** pp)
{
	size_t b; // 1857
	size_t l; // 1857
} /* size: 0, variables: 2 */

// <057AEB20> lib/lz4.c:1873
// variables: 13
inline int LZ4_decompress_unsafe_generic(const BYTE* istart, const BYTE* ostart, int decompressedSize, size_t prefixSize, const BYTE* dictStart, const size_t dictSize)
{
	const BYTE* ip; // 1883
	BYTE* op; // 1884
	const BYTE* oend; // 1885
	const BYTE* prefixStart; // 1886
	{
		unsigned int token; // 1893
		{
			size_t ll; // 1896
		}
		{
			size_t ml; // 1914
			const size_t  offset; // 1915
			{
				const BYTE* match; // 1926
				{
					const BYTE* dictEnd; // 1937
					const BYTE* extMatch; // 1938
					const size_t  extml; // 1939
				}
				{
					size_t u; // 1955
				}
			}
		}
	}
} /* size: 0, variables: 4 */

// <057AEAC4> lib/lz4.c:1982
// variables: 2
inline Rvl_t read_variable_length(const BYTE ** ip, const BYTE* ilimit, int initial_check)
{
	Rvl_t s; // 1985
	Rvl_t length; // 1985
} /* size: 0, variables: 2 */

// <057AE84E> lib/lz4.c:2026
// variables: 29
inline int LZ4_decompress_generic(const char* src, const char* dst, int srcSize, int outputSize, earlyEnd_directive partialDecoding, dict_directive dict, const BYTE* lowPrefix, const BYTE* dictStart, const size_t dictSize)
{

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			{
			}
		}
		{
			const size_t  addl; // 2131
		}
		{
			const size_t  copySize; // 2186
			const size_t  restSize; // 2187
			{
				const BYTE* endOfMatch; // 2191
				const BYTE* copyFrom; // 2192
			}
		}
		{
			const size_t  addl; // 2268
		}
		{
		}
		{
			const size_t  addl; // 2349
		}
		{
			const size_t  copySize; // 2374
			const size_t  restSize; // 2375
			{
				const BYTE* endOfMatch; // 2379
				const BYTE* copyFrom; // 2380
			}
		}
		{
			const size_t  mlen; // 2396
			const BYTE* matchEnd; // 2397
			const BYTE* copyEnd; // 2398
		}
		{
			const BYTE* oCopyLimit; // 2425
		}
	}
} /* size: 0, goto labels: 5 */

// <057AD682> lib/lz4.c:2462
// variables: 20
// function calls: 24
int LZ4_decompress_safe_partial(const char* src, char* dst, int compressedSize, int targetOutputSize, int dstCapacity)
{

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2096
			{
			}
			LZ4_wildCopy32(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2108
		}
		{
			const size_t  addl; // 2131
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2131
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2121
		memset(void* __dest,
			int __ch,
			size_t __len);  // 546
		LZ4_write32(void* memPtr,
				U32 value);  // 503
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 518
		LZ4_memcpy_using_offset_base(BYTE* dstPtr,
						const BYTE* srcPtr,
						BYTE* dstEnd,
						const size_t  offset);  // 565
		LZ4_memcpy_using_offset(BYTE* dstPtr,
					const BYTE* srcPtr,
					BYTE* dstEnd,
					const size_t  offset);  // 2206
		LZ4_wildCopy32(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2208
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2244
		{
			const size_t  addl; // 2268
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2268
		}
		{
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2335
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2340
		{
			const size_t  addl; // 2349
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2349
		}
		{
			const size_t  mlen; // 2396
			const BYTE* matchEnd; // 2397
			const BYTE* copyEnd; // 2398
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2435
		LZ4_write32(void* memPtr,
				U32 value);  // 2410
	}
	LZ4_decompress_generic(const char* src,
				const char* dst,
				int srcSize,
				int outputSize,
				earlyEnd_directive partialDecoding,
				dict_directive dict,
				const BYTE* lowPrefix,
				const BYTE* dictStart,
				const size_t  dictSize);  // 2465
} /* size: 0, goto labels: 5, inline expansions: 1 (0 bytes) */

// <057AD3EB> lib/lz4.c:2471
// variables: 6
// function calls: 6
int LZ4_decompress_fast(const char* source, char* dest, int originalSize)
{
	{
		unsigned int token; // 1893
		{
			size_t ll; // 1896
			read_long_length_no_check(const BYTE ** pp); // 1899
		}
		{
			size_t ml; // 1914
			const size_t  offset; // 1915
			LZ4_isLittleEndian(void); // 433
			LZ4_read16(const void* ptr); // 434
			LZ4_readLE16(const void* memPtr); // 1915
			{
				const BYTE* match; // 1926
				{
					size_t u; // 1955
				}
			}
			read_long_length_no_check(const BYTE ** pp); // 1920
		}
	}
	LZ4_decompress_unsafe_generic(const BYTE* istart,
					const BYTE* ostart,
					int decompressedSize,
					size_t prefixSize,
					const BYTE* dictStart,
					const size_t  dictSize);  // 2474
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057ACB18> lib/lz4.c:2482
// variables: 18
// function calls: 25
int LZ4_decompress_safe_withPrefix64k(const char* source, char* dest, int compressedSize, int maxOutputSize)
{

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2096
			{
			}
			LZ4_wildCopy32(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2108
		}
		{
			const size_t  addl; // 2131
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2131
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2121
		memset(void* __dest,
			int __ch,
			size_t __len);  // 546
		LZ4_write32(void* memPtr,
				U32 value);  // 503
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 518
		LZ4_memcpy_using_offset_base(BYTE* dstPtr,
						const BYTE* srcPtr,
						BYTE* dstEnd,
						const size_t  offset);  // 565
		LZ4_memcpy_using_offset(BYTE* dstPtr,
					const BYTE* srcPtr,
					BYTE* dstEnd,
					const size_t  offset);  // 2206
		LZ4_wildCopy32(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2208
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2335
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2340
		{
			const size_t  addl; // 2349
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2349
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2435
		{
			const BYTE* oCopyLimit; // 2425
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2428
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2244
		{
		}
		{
			const size_t  addl; // 2268
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2268
		}
		LZ4_write32(void* memPtr,
				U32 value);  // 2410
	}
	LZ4_decompress_generic(const char* src,
				const char* dst,
				int srcSize,
				int outputSize,
				earlyEnd_directive partialDecoding,
				dict_directive dict,
				const BYTE* lowPrefix,
				const BYTE* dictStart,
				const size_t  dictSize);  // 2484
} /* size: 2110, goto labels: 5, inline expansions: 1 (2009 bytes) */

// <057ACAC4> lib/lz4.c:2490
int LZ4_decompress_safe_partial_withPrefix64k(const char* source, char* dest, int compressedSize, int targetOutputSize, int dstCapacity)
{
} /* size: 0 */

// <057AC82A> lib/lz4.c:2499
// variables: 6
// function calls: 6
int LZ4_decompress_fast_withPrefix64k(const char* source, char* dest, int originalSize)
{
	{
		unsigned int token; // 1893
		{
			size_t ll; // 1896
			read_long_length_no_check(const BYTE ** pp); // 1899
		}
		{
			size_t ml; // 1914
			const size_t  offset; // 1915
			LZ4_isLittleEndian(void); // 433
			LZ4_read16(const void* ptr); // 434
			LZ4_readLE16(const void* memPtr); // 1915
			{
				const BYTE* match; // 1926
				{
					size_t u; // 1955
				}
			}
			read_long_length_no_check(const BYTE ** pp); // 1920
		}
	}
	LZ4_decompress_unsafe_generic(const BYTE* istart,
					const BYTE* ostart,
					int decompressedSize,
					size_t prefixSize,
					const BYTE* dictStart,
					const size_t  dictSize);  // 2501
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057ABF43> lib/lz4.c:2507
// variables: 18
// function calls: 25
int LZ4_decompress_safe_withSmallPrefix(const char* source, char* dest, int compressedSize, int maxOutputSize, size_t prefixSize)
{

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2096
			{
			}
			LZ4_wildCopy32(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2108
		}
		{
			const size_t  addl; // 2131
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2131
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2121
		memset(void* __dest,
			int __ch,
			size_t __len);  // 546
		LZ4_write32(void* memPtr,
				U32 value);  // 503
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 518
		LZ4_memcpy_using_offset_base(BYTE* dstPtr,
						const BYTE* srcPtr,
						BYTE* dstEnd,
						const size_t  offset);  // 565
		LZ4_memcpy_using_offset(BYTE* dstPtr,
					const BYTE* srcPtr,
					BYTE* dstEnd,
					const size_t  offset);  // 2206
		LZ4_wildCopy32(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2208
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2244
		{
			const size_t  addl; // 2268
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2268
		}
		{
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2335
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2340
		{
			const size_t  addl; // 2349
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2349
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2435
		{
			const BYTE* oCopyLimit; // 2425
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2428
		}
		LZ4_write32(void* memPtr,
				U32 value);  // 2410
	}
	LZ4_decompress_generic(const char* src,
				const char* dst,
				int srcSize,
				int outputSize,
				earlyEnd_directive partialDecoding,
				dict_directive dict,
				const BYTE* lowPrefix,
				const BYTE* dictStart,
				const size_t  dictSize);  // 2510
} /* size: 2313, goto labels: 5, inline expansions: 1 (2220 bytes) */

// <057ABEE2> lib/lz4.c:2516
int LZ4_decompress_safe_partial_withSmallPrefix(const char* source, char* dest, int compressedSize, int targetOutputSize, int dstCapacity, size_t prefixSize)
{
} /* size: 0 */

// <057AB4C0> lib/lz4.c:2526
// variables: 26
// function calls: 25
int LZ4_decompress_safe_forceExtDict(const char* source, char* dest, int compressedSize, int maxOutputSize, const void* dictStart, size_t dictSize)
{

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2096
			{
			}
			LZ4_wildCopy32(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2108
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2121
		{
			const size_t  addl; // 2131
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2131
		}
		{
			const size_t  copySize; // 2186
			const size_t  restSize; // 2187
			{
				const BYTE* endOfMatch; // 2191
				const BYTE* copyFrom; // 2192
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 546
		LZ4_write32(void* memPtr,
				U32 value);  // 503
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 518
		LZ4_memcpy_using_offset_base(BYTE* dstPtr,
						const BYTE* srcPtr,
						BYTE* dstEnd,
						const size_t  offset);  // 565
		LZ4_memcpy_using_offset(BYTE* dstPtr,
					const BYTE* srcPtr,
					BYTE* dstEnd,
					const size_t  offset);  // 2206
		LZ4_wildCopy32(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2208
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2335
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2340
		{
			const size_t  addl; // 2349
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2349
		}
		{
			const size_t  copySize; // 2374
			const size_t  restSize; // 2375
			{
				const BYTE* endOfMatch; // 2379
				const BYTE* copyFrom; // 2380
			}
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2244
		{
			const size_t  addl; // 2268
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2268
		}
		{
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2435
		{
			const BYTE* oCopyLimit; // 2425
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2428
		}
		LZ4_write32(void* memPtr,
				U32 value);  // 2410
	}
	LZ4_decompress_generic(const char* src,
				const char* dst,
				int srcSize,
				int outputSize,
				earlyEnd_directive partialDecoding,
				dict_directive dict,
				const BYTE* lowPrefix,
				const BYTE* dictStart,
				const size_t  dictSize);  // 2531
} /* size: 2678, goto labels: 5, inline expansions: 1 (2586 bytes) */

// <057AAA67> lib/lz4.c:2537
// variables: 28
// function calls: 24
int LZ4_decompress_safe_partial_forceExtDict(const char* source, char* dest, int compressedSize, int targetOutputSize, int dstCapacity, const void* dictStart, size_t dictSize)
{

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2096
			{
			}
			LZ4_wildCopy32(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2108
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2121
		{
			const size_t  addl; // 2131
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2131
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 546
		LZ4_write32(void* memPtr,
				U32 value);  // 503
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 518
		LZ4_memcpy_using_offset_base(BYTE* dstPtr,
						const BYTE* srcPtr,
						BYTE* dstEnd,
						const size_t  offset);  // 565
		LZ4_memcpy_using_offset(BYTE* dstPtr,
					const BYTE* srcPtr,
					BYTE* dstEnd,
					const size_t  offset);  // 2206
		{
			const size_t  copySize; // 2186
			const size_t  restSize; // 2187
			{
				const BYTE* endOfMatch; // 2191
				const BYTE* copyFrom; // 2192
			}
		}
		LZ4_wildCopy32(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2208
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2335
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2340
		{
			const size_t  addl; // 2349
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2349
		}
		{
			const size_t  copySize; // 2374
			const size_t  restSize; // 2375
			{
				const BYTE* endOfMatch; // 2379
				const BYTE* copyFrom; // 2380
			}
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2244
		{
			const size_t  addl; // 2268
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2268
		}
		{
		}
		{
			const size_t  mlen; // 2396
			const BYTE* matchEnd; // 2397
			const BYTE* copyEnd; // 2398
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2435
		LZ4_write32(void* memPtr,
				U32 value);  // 2410
	}
	LZ4_decompress_generic(const char* src,
				const char* dst,
				int srcSize,
				int outputSize,
				earlyEnd_directive partialDecoding,
				dict_directive dict,
				const BYTE* lowPrefix,
				const BYTE* dictStart,
				const size_t  dictSize);  // 2542
} /* size: 0, goto labels: 5, inline expansions: 1 (0 bytes) */

// <057AA736> lib/lz4.c:2548
// variables: 9
// function calls: 6
int LZ4_decompress_fast_extDict(const char* source, char* dest, int originalSize, const void* dictStart, size_t dictSize)
{
	{
		unsigned int token; // 1893
		{
			size_t ll; // 1896
			read_long_length_no_check(const BYTE ** pp); // 1899
		}
		{
			size_t ml; // 1914
			const size_t  offset; // 1915
			LZ4_isLittleEndian(void); // 433
			LZ4_read16(const void* ptr); // 434
			LZ4_readLE16(const void* memPtr); // 1915
			{
				const BYTE* match; // 1926
				{
					const BYTE* dictEnd; // 1937
					const BYTE* extMatch; // 1938
					const size_t  extml; // 1939
				}
				{
					size_t u; // 1955
				}
			}
			read_long_length_no_check(const BYTE ** pp); // 1920
		}
	}
	LZ4_decompress_unsafe_generic(const BYTE* istart,
					const BYTE* ostart,
					int decompressedSize,
					size_t prefixSize,
					const BYTE* dictStart,
					const size_t  dictSize);  // 2551
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057AA6C8> lib/lz4.c:2561
inline int LZ4_decompress_safe_doubleDict(const char* source, char* dest, int compressedSize, int maxOutputSize, size_t prefixSize, const void* dictStart, size_t dictSize)
{
} /* size: 0 */

// <057AA676> lib/lz4.c:2572
LZ4_streamDecode_t* LZ4_createStreamDecode(void)
{
	{
	}
} /* size: 0 */

// <057AA656> lib/lz4.c:2578
int LZ4_freeStreamDecode(LZ4_streamDecode_t* LZ4_stream)
{
} /* size: 0 */

// <057AA5ED> lib/lz4.c:2592
// variable: 1
int LZ4_setStreamDecode(LZ4_streamDecode_t* LZ4_streamDecode, const char* dictionary, int dictSize)
{
	LZ4_streamDecode_t_internal* lz4sd; // 2594
} /* size: 0, variables: 1 */

// <0083BE72> lib/lz4.c:2618
int LZ4_decoderRingBufferSize(int maxBlockSize)
{
} /* size: 0 */

// <0083B384> lib/lz4.c:2634
// variables: 28
// function calls: 26
int LZ4_decompress_safe_continue(LZ4_streamDecode_t* LZ4_streamDecode, const char* source, char* dest, int compressedSize, int maxOutputSize)
{
	LZ4_streamDecode_t_internal* lz4sd; // 2636
	int result; // 2637

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2096
			{
			}
			LZ4_wildCopy32(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2108
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2121
		{
			const size_t  addl; // 2131
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2131
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 546
		LZ4_write32(void* memPtr,
				U32 value);  // 503
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 518
		LZ4_memcpy_using_offset_base(BYTE* dstPtr,
						const BYTE* srcPtr,
						BYTE* dstEnd,
						const size_t  offset);  // 565
		LZ4_memcpy_using_offset(BYTE* dstPtr,
					const BYTE* srcPtr,
					BYTE* dstEnd,
					const size_t  offset);  // 2206
		{
			const size_t  copySize; // 2186
			const size_t  restSize; // 2187
			{
				const BYTE* endOfMatch; // 2191
				const BYTE* copyFrom; // 2192
			}
		}
		LZ4_wildCopy32(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2208
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2335
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2340
		{
			const size_t  addl; // 2349
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2349
		}
		{
			const size_t  copySize; // 2374
			const size_t  restSize; // 2375
			{
				const BYTE* endOfMatch; // 2379
				const BYTE* copyFrom; // 2380
			}
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2244
		{
			const size_t  addl; // 2268
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2268
		}
		{
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2435
		{
			const BYTE* oCopyLimit; // 2425
			LZ4_wildCopy8(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2428
		}
		LZ4_write32(void* memPtr,
				U32 value);  // 2410
	}
	LZ4_decompress_generic(const char* src,
				const char* dst,
				int srcSize,
				int outputSize,
				earlyEnd_directive partialDecoding,
				dict_directive dict,
				const BYTE* lowPrefix,
				const BYTE* dictStart,
				const size_t  dictSize);  // 2564
	LZ4_decompress_safe_doubleDict(const char* source,
					char* dest,
					int compressedSize,
					int maxOutputSize,
					size_t prefixSize,
					const void* dictStart,
					size_t dictSize);  // 2654
} /* size: 0, variables: 2, goto labels: 5, inline expansions: 2 (0 bytes) */

// <057A971A> lib/lz4.c:2674
// variables: 11
// function calls: 6
int LZ4_decompress_fast_continue(LZ4_streamDecode_t* LZ4_streamDecode, const char* source, char* dest, int originalSize)
{
	const LZ4_streamDecode_t_internal* lz4sd; // 2677
	int result; // 2679
	{
		unsigned int token; // 1893
		{
			size_t ll; // 1896
			read_long_length_no_check(const BYTE ** pp); // 1899
		}
		{
			size_t ml; // 1914
			const size_t  offset; // 1915
			LZ4_isLittleEndian(void); // 433
			LZ4_read16(const void* ptr); // 434
			LZ4_readLE16(const void* memPtr); // 1915
			{
				const BYTE* match; // 1926
				{
					const BYTE* dictEnd; // 1937
					const BYTE* extMatch; // 1938
					const size_t  extml; // 1939
				}
				{
					size_t u; // 1955
				}
			}
			read_long_length_no_check(const BYTE ** pp); // 1920
		}
	}
	LZ4_decompress_unsafe_generic(const BYTE* istart,
					const BYTE* ostart,
					int decompressedSize,
					size_t prefixSize,
					const BYTE* dictStart,
					const size_t  dictSize);  // 2693
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <057A95FA> lib/lz4.c:2722
int LZ4_decompress_safe_usingDict(const char* source, char* dest, int compressedSize, int maxOutputSize, const char* dictStart, int dictSize)
{
} /* size: 64 */

// <057A836B> lib/lz4.c:2737
// variables: 40
// function calls: 50
int LZ4_decompress_safe_partial_usingDict(const char* source, char* dest, int compressedSize, int targetOutputSize, int dstCapacity, const char* dictStart, int dictSize)
{

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2096
			{
			}
			LZ4_wildCopy32(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2108
		}
		{
			const size_t  addl; // 2131
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2131
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2121
		memset(void* __dest,
			int __ch,
			size_t __len);  // 546
		LZ4_write32(void* memPtr,
				U32 value);  // 503
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 518
		LZ4_memcpy_using_offset_base(BYTE* dstPtr,
						const BYTE* srcPtr,
						BYTE* dstEnd,
						const size_t  offset);  // 565
		LZ4_memcpy_using_offset(BYTE* dstPtr,
					const BYTE* srcPtr,
					BYTE* dstEnd,
					const size_t  offset);  // 2206
		LZ4_wildCopy32(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2208
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2335
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2340
		{
			const size_t  addl; // 2349
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2349
		}
		{
			const size_t  mlen; // 2396
			const BYTE* matchEnd; // 2397
			const BYTE* copyEnd; // 2398
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2244
		{
		}
		{
			const size_t  addl; // 2268
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2268
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2435
		LZ4_write32(void* memPtr,
				U32 value);  // 2410
	}
	LZ4_decompress_generic(const char* src,
				const char* dst,
				int srcSize,
				int outputSize,
				earlyEnd_directive partialDecoding,
				dict_directive dict,
				const BYTE* lowPrefix,
				const BYTE* dictStart,
				const size_t  dictSize);  // 2493
	LZ4_decompress_safe_partial_withPrefix64k(const char* source,
							char* dest,
							int compressedSize,
							int targetOutputSize,
							int dstCapacity);  // 2743

_copy_match: // 2347

safe_match_copy: // 2357

safe_literal_copy: // 2276

_output_error: // 2445

safe_decode: // 2213
	{
		const BYTE* ip; // 2041
		const BYTE* iend; // 2042
		BYTE* op; // 2044
		const BYTE* oend; // 2045
		BYTE* cpy; // 2046
		const BYTE* dictEnd; // 2048
		const int  checkOffset; // 2050
		const BYTE* shortiend; // 2054
		const BYTE* shortoend; // 2055
		const BYTE* match; // 2057
		size_t offset; // 2058
		unsigned int token; // 2059
		size_t length; // 2060
		{
			const size_t  addl; // 2096
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2096
			{
			}
			LZ4_wildCopy32(void* dstPtr,
					const void* srcPtr,
					void* dstEnd);  // 2108
		}
		{
			const size_t  addl; // 2131
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2131
		}
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2121
		memset(void* __dest,
			int __ch,
			size_t __len);  // 546
		LZ4_write32(void* memPtr,
				U32 value);  // 503
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 518
		LZ4_memcpy_using_offset_base(BYTE* dstPtr,
						const BYTE* srcPtr,
						BYTE* dstEnd,
						const size_t  offset);  // 565
		LZ4_memcpy_using_offset(BYTE* dstPtr,
					const BYTE* srcPtr,
					BYTE* dstEnd,
					const size_t  offset);  // 2206
		LZ4_wildCopy32(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2208
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2244
		{
			const size_t  addl; // 2268
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2268
		}
		{
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2335
		LZ4_isLittleEndian(void); // 433
		LZ4_read16(const void* ptr); // 434
		LZ4_readLE16(const void* memPtr); // 2340
		{
			const size_t  addl; // 2349
			read_variable_length(const BYTE ** ip,
						const BYTE* ilimit,
						int initial_check);  // 2349
		}
		{
			const size_t  mlen; // 2396
			const BYTE* matchEnd; // 2397
			const BYTE* copyEnd; // 2398
		}
		LZ4_wildCopy8(void* dstPtr,
				const void* srcPtr,
				void* dstEnd);  // 2435
		LZ4_write32(void* memPtr,
				U32 value);  // 2410
	}
	LZ4_decompress_generic(const char* src,
				const char* dst,
				int srcSize,
				int outputSize,
				earlyEnd_directive partialDecoding,
				dict_directive dict,
				const BYTE* lowPrefix,
				const BYTE* dictStart,
				const size_t  dictSize);  // 2520
	LZ4_decompress_safe_partial_withSmallPrefix(const char* source,
							char* dest,
							int compressedSize,
							int targetOutputSize,
							int dstCapacity,
							size_t prefixSize);  // 2746
} /* size: 0, goto labels: 10, inline expansions: 4 (0 bytes) */

// <057A806F> lib/lz4.c:2752
// variables: 6
// function calls: 6
int LZ4_decompress_fast_usingDict(const char* source, char* dest, int originalSize, const char* dictStart, int dictSize)
{
	{
		unsigned int token; // 1893
		{
			size_t ll; // 1896
			read_long_length_no_check(const BYTE ** pp); // 1899
		}
		{
			size_t ml; // 1914
			const size_t  offset; // 1915
			LZ4_isLittleEndian(void); // 433
			LZ4_read16(const void* ptr); // 434
			LZ4_readLE16(const void* memPtr); // 1915
			{
				const BYTE* match; // 1926
				{
					size_t u; // 1955
				}
			}
			read_long_length_no_check(const BYTE ** pp); // 1920
		}
	}
	LZ4_decompress_unsafe_generic(const BYTE* istart,
					const BYTE* ostart,
					int decompressedSize,
					size_t prefixSize,
					const BYTE* dictStart,
					const size_t  dictSize);  // 2755
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057A8028> lib/lz4.c:2767
int LZ4_compress_limitedOutput(const char* source, char* dest, int inputSize, int maxOutputSize)
{
} /* size: 0 */

// <057A7F0C> lib/lz4.c:2771
// function calls: 2
int LZ4_compress(const char* src, char* dest, int srcSize)
{
	LZ4_compressBound(int isize); // 2773
	LZ4_compress_default(const char* src,
				char* dst,
				int srcSize,
				int dstCapacity);  // 2773
} /* size: 0, inline expansions: 2 (0 bytes) */

// <057A7E45> lib/lz4.c:2775
int LZ4_compress_limitedOutput_withState(void* state, const char* src, char* dst, int srcSize, int dstSize)
{
} /* size: 0 */

// <057A7D81> lib/lz4.c:2779
// function call: 1
int LZ4_compress_withState(void* state, const char* src, char* dst, int srcSize)
{
	LZ4_compressBound(int isize); // 2781
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057A7CBA> lib/lz4.c:2783
int LZ4_compress_limitedOutput_continue(LZ4_stream_t* LZ4_stream, const char* src, char* dst, int srcSize, int dstCapacity)
{
} /* size: 0 */

// <057A7BEB> lib/lz4.c:2787
// function call: 1
int LZ4_compress_continue(LZ4_stream_t* LZ4_stream, const char* source, char* dest, int inputSize)
{
	LZ4_compressBound(int isize); // 2789
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057A7B61> lib/lz4.c:2798
int LZ4_uncompress(const char* source, char* dest, int outputSize)
{
} /* size: 0 */

// <057A7ABB> lib/lz4.c:2802
int LZ4_uncompress_unknownOutputSize(const char* source, char* dest, int isize, int maxOutputSize)
{
} /* size: 0 */

// <057A7AAD> lib/lz4.c:2809
int LZ4_sizeofStreamState(void)
{
} /* size: 0 */

// <057A79D6> lib/lz4.c:2811
// function calls: 2
int LZ4_resetStreamState(void* state, char* inputBuffer)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1570
	LZ4_resetStream(LZ4_stream_t* LZ4_stream); // 2814
} /* size: 0, inline expansions: 2 (0 bytes) */

// <057A7956> lib/lz4.c:2819
// function call: 1
void* LZ4_create(char* inputBuffer)
{
	LZ4_createStream(void); // 2822
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057A7920> lib/lz4.c:2826
char* LZ4_slideInputBuffer(void* state)
{
} /* size: 0 */

