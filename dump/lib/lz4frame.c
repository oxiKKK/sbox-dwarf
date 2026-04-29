
//
// lib/lz4frame.c
//
//	referenced by: libengine2.so
//
//	functions: 54
//	structs: 3
//

// <057E1C43> lib/lz4frame.c:101
// variable: 1
void* LZ4F_calloc(size_t s, LZ4F_CustomMem cmem)
{
	{
		const void* p; // 112
	}
} /* size: 0 */

// <057E1C1B> lib/lz4frame.c:117
void* LZ4F_malloc(size_t s, LZ4F_CustomMem cmem)
{
} /* size: 0 */

// <057E1BF7> lib/lz4frame.c:127
void LZ4F_free(void* p, LZ4F_CustomMem cmem)
{
} /* size: 0 */

// <057E1BC1> lib/lz4frame.c:187
// variables: 2
U32 LZ4F_readLE32(const void* src)
{
	const BYTE* srcPtr; // 189
	U32 value32; // 190
} /* size: 0, variables: 2 */

// <057E1B8F> lib/lz4frame.c:197
// variable: 1
void LZ4F_writeLE32(void* dst, U32 value32)
{
	const BYTE* dstPtr; // 199
} /* size: 0, variables: 1 */

// <057E1B59> lib/lz4frame.c:206
// variables: 2
U64 LZ4F_readLE64(const void* src)
{
	const BYTE* srcPtr; // 208
	U64 value64; // 209
} /* size: 0, variables: 2 */

// <057E1B27> lib/lz4frame.c:220
// variable: 1
void LZ4F_writeLE64(void* dst, U64 value64)
{
	const BYTE* dstPtr; // 222
} /* size: 0, variables: 1 */

// <057DBBCC> lib/lz4frame.c:265
// member variables: 16
// struct size: 216
struct LZ4F_cctx_s {
	LZ4F_CustomMem cmem; /* 0 32 */
	LZ4F_preferences_t prefs; /* 32 56 */
	U32 version; /* 88 4 */
	U32 cStage; /* 92 4 */
	const LZ4F_CDict * cdict; /* 96 8 */
	size_t maxBlockSize; /* 104 8 */
	size_t maxBufferSize; /* 112 8 */
	BYTE * tmpBuff; /* 120 8 */
	BYTE * tmpIn; /* 128 8 */
	size_t tmpInSize; /* 136 8 */
	U64 totalInSize; /* 144 8 */
	XXH32_state_t xxh; /* 152 48 */
	void * lz4CtxPtr; /* 200 8 */
	U16 lz4CtxAlloc; /* 208 2 */
	U16 lz4CtxType; /* 210 2 */
	LZ4F_BlockCompressMode_e blockCompressMode; /* 212 4 */
};

// <057E1A88> lib/lz4frame.c:298
// variable: 1
const char* LZ4F_getErrorName(LZ4F_errorCode_t code)
{
	const char* codeError; // 300
} /* size: 70, variables: 1 */

// <057E1A36> lib/lz4frame.c:305
LZ4F_errorCodes LZ4F_getErrorCode(size_t functionResult)
{
} /* size: 0 */

// <057E1A15> lib/lz4frame.c:311
LZ4F_errorCode_t LZ4F_returnErrorCode(LZ4F_errorCodes code)
{
	{
	}
} /* size: 0 */

// <057E19F3> lib/lz4frame.c:329
unsigned int LZ4F_getVersion(void)
{
} /* size: 10 */

// <057E19D1> lib/lz4frame.c:331
int LZ4F_compressionLevel_max(void)
{
} /* size: 10 */

// <057E1975> lib/lz4frame.c:333
// variables: 2
size_t LZ4F_getBlockSize(LZ4F_blockSizeID_t blockSizeID)
{
	const size_t   blockSizes; // 335
	{
		const int  blockSizeIdx; // 340
	}
} /* size: 0, variables: 1 */

// <057E193B> lib/lz4frame.c:349
// variable: 1
BYTE LZ4F_headerChecksum(const void* header, size_t length)
{
	const U32  xxh; // 351
} /* size: 0, variables: 1 */

// <057E18F4> lib/lz4frame.c:359
// variables: 2
LZ4F_blockSizeID_t LZ4F_optimalBSID(const LZ4F_blockSizeID_t requestedBSID, const size_t srcSize)
{
	LZ4F_blockSizeID_t proposedBSID; // 362
	size_t maxBlockSize; // 363
} /* size: 0, variables: 2 */

// <057E173B> lib/lz4frame.c:379
// variables: 15
// function call: 1
size_t LZ4F_compressBound_internal(size_t srcSize, const LZ4F_preferences_t* preferencesPtr, size_t alreadyBuffered)
{
	LZ4F_preferences_t prefsNull; // 383
	{
		const LZ4F_preferences_t* prefsPtr; // 386
		const U32  flush; // 387
		const LZ4F_blockSizeID_t  blockID; // 388
		const size_t  blockSize; // 389
		const size_t  maxBuffered; // 390
		const size_t  bufferedSize; // 391
		const size_t  maxSrcSize; // 392
		const unsigned int  nbFullBlocks; // 393
		const size_t  partialBlockSize; // 394
		const size_t  lastBlockSize; // 395
		const unsigned int  nbBlocks; // 396
		const size_t  blockCRCSize; // 398
		const size_t  frameEnd; // 399
		{
			const int  blockSizeIdx; // 340
		}
		LZ4F_getBlockSize(LZ4F_blockSizeID_t blockSizeID); // 389
	}
} /* size: 200, variables: 1 */

// <057E12B7> lib/lz4frame.c:428
// variables: 9
// function calls: 4
size_t LZ4F_compressFrame_usingCDict(LZ4F_cctx* cctx, void* dstBuffer, size_t dstCapacity, const void* srcBuffer, size_t srcSize, const LZ4F_CDict* cdict, const LZ4F_preferences_t* preferencesPtr)
{
	LZ4F_preferences_t prefs; // 434
	LZ4F_compressOptions_t options; // 435
	const BYTE* dstStart; // 436
	BYTE* dstPtr; // 437
	const BYTE* dstEnd; // 438
	{
		const size_t  headerSize; // 458
	}
	{
		const size_t  cSize; // 463
	}
	{
		const size_t  tailSize; // 468
	}
	LZ4F_optimalBSID(const LZ4F_blockSizeID_t  requestedBSID,
			const size_t  srcSize);  // 448
	{
		const int  blockSizeIdx; // 340
	}
	LZ4F_getBlockSize(LZ4F_blockSizeID_t blockSizeID); // 450
	memset(void* __dest,
		int __ch,
		size_t __len);  // 453
	memset(void* __dest,
		int __ch,
		size_t __len);  // 444
} /* size: 596, variables: 5, inline expansions: 4 (168 bytes) */

// <057DBF14> lib/lz4frame.c:531
// member variables: 4
// struct size: 56
struct LZ4F_CDict_s {
	LZ4F_CustomMem cmem; /* 0 32 */
	void * dictContent; /* 32 8 */
	LZ4_stream_t * fastCtx; /* 40 8 */
	LZ4_streamHC_t * HCCtx; /* 48 8 */
};

// <057E0D18> lib/lz4frame.c:539
// variables: 2
// function calls: 5
LZ4F_CDict* LZ4F_createCDict_advanced(LZ4F_CustomMem cmem, const void* dictBuffer, size_t dictSize)
{
	const char* dictStart; // 541
	LZ4F_CDict* cdict; // 542
	LZ4F_malloc(size_t s,
			LZ4F_CustomMem cmem);  // 548
	LZ4F_malloc(size_t s,
			LZ4F_CustomMem cmem);  // 557
	LZ4F_malloc(size_t s,
			LZ4F_CustomMem cmem);  // 559
	LZ4F_malloc(size_t s,
			LZ4F_CustomMem cmem);  // 560
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 565
} /* size: 426, variables: 2, inline expansions: 5 (145 bytes) */

// <057E0CAA> lib/lz4frame.c:582
LZ4F_CDict* LZ4F_createCDict(const void* dictBuffer, size_t dictSize)
{
} /* size: 66 */

// <057E0C87> lib/lz4frame.c:588
void LZ4F_freeCDict(LZ4F_CDict* cdict)
{
} /* size: 0 */

// <057E0C4C> lib/lz4frame.c:603
// variable: 1
LZ4F_cctx* LZ4F_createCompressionContext_advanced(LZ4F_CustomMem customMem, unsigned int version)
{
	const LZ4F_cctx* cctxPtr; // 605
} /* size: 0, variables: 1 */

// <057E0B6A> lib/lz4frame.c:625
// function calls: 2
LZ4F_errorCode_t LZ4F_createCompressionContext(LZ4F_cctx** LZ4F_compressionContextPtr, unsigned int version)
{
	LZ4F_calloc(size_t s,
			LZ4F_CustomMem cmem);  // 606
	LZ4F_createCompressionContext_advanced(LZ4F_CustomMem customMem,
						unsigned int version);  // 631
} /* size: 115, inline expansions: 2 (61 bytes) */

// <057E0A4D> lib/lz4frame.c:636
// function calls: 3
LZ4F_errorCode_t LZ4F_freeCompressionContext(LZ4F_cctx* cctxPtr)
{
	LZ4F_free(void* p,
			LZ4F_CustomMem cmem);  // 639
	LZ4F_free(void* p,
			LZ4F_CustomMem cmem);  // 640
	LZ4F_free(void* p,
			LZ4F_CustomMem cmem);  // 641
} /* size: 183, inline expansions: 3 (101 bytes) */

// <057E2028> lib/lz4frame.c:655
// function call: 1
void LZ4F_initStream(void* ctx, const LZ4F_CDict* cdict, int level, LZ4F_blockMode_t blockMode)
{
	LZ4F_initStream(void* ctx,
			const LZ4F_CDict* cdict,
			int level,
			LZ4F_blockMode_t blockMode);  // 655
} /* size: 112, inline expansions: 1 (13 bytes) */

// <057E0A0A> lib/lz4frame.c:655
void LZ4F_initStream(void* ctx, const LZ4F_CDict* cdict, int level, LZ4F_blockMode_t blockMode)
{
} /* size: 0 */

// <057E09EA> lib/lz4frame.c:683
int ctxTypeID_to_size(int ctxTypeID)
{
} /* size: 0 */

// <057E0968> lib/lz4frame.c:694
// function call: 1
size_t LZ4F_cctx_size(const LZ4F_cctx* cctx)
{
	ctxTypeID_to_size(int ctxTypeID); // 698
} /* size: 0, inline expansions: 1 (0 bytes) */

// <057E032F> lib/lz4frame.c:704
// variables: 9
// function calls: 12
size_t LZ4F_compressBegin_internal(LZ4F_cctx* cctx, void* dstBuffer, size_t dstCapacity, const void* dictBuffer, size_t dictSize, const LZ4F_CDict* cdict, const LZ4F_preferences_t* preferencesPtr)
{
	const LZ4F_preferences_t  prefNull; // 710
	const BYTE* dstStart; // 711
	BYTE* dstPtr; // 712
	{
		const U16  ctxTypeID; // 720
		int requiredSize; // 721
		int allocatedSize; // 722
		ctxTypeID_to_size(int ctxTypeID); // 721
		ctxTypeID_to_size(int ctxTypeID); // 722
		LZ4F_free(void* p,
				LZ4F_CustomMem cmem);  // 725
		LZ4F_malloc(size_t s,
				LZ4F_CustomMem cmem);  // 733
		LZ4F_malloc(size_t s,
				LZ4F_CustomMem cmem);  // 729
	}
	{
		const size_t  requiredBuffSize; // 757
		LZ4F_free(void* p,
				LZ4F_CustomMem cmem);  // 763
		LZ4F_malloc(size_t s,
				LZ4F_CustomMem cmem);  // 764
	}
	{
		const BYTE* headerStart; // 799
		LZ4F_writeLE32(void* dst,
				U32 value32);  // 818
		LZ4F_headerChecksum(const void* header,
					size_t length);  // 822
		LZ4F_writeLE64(void* dst,
				U64 value64);  // 812
	}
	{
		const int  blockSizeIdx; // 340
	}
	LZ4F_getBlockSize(LZ4F_blockSizeID_t blockSizeID); // 755
	LZ4F_writeLE32(void* dst,
			U32 value32);  // 797
} /* size: 1348, variables: 3, inline expansions: 2 (54 bytes) */

// <057E0281> lib/lz4frame.c:830
size_t LZ4F_compressBegin(LZ4F_cctx* cctx, void* dstBuffer, size_t dstCapacity, const LZ4F_preferences_t* preferencesPtr)
{
} /* size: 28 */

// <057E021B> lib/lz4frame.c:843
size_t LZ4F_compressBegin_usingDictOnce(LZ4F_cctx* cctx, void* dstBuffer, size_t dstCapacity, const void* dict, size_t dictSize, const LZ4F_preferences_t* preferencesPtr)
{
} /* size: 0 */

// <057E00D9> lib/lz4frame.c:853
// function call: 1
size_t LZ4F_compressBegin_usingDict(LZ4F_cctx* cctx, void* dstBuffer, size_t dstCapacity, const void* dict, size_t dictSize, const LZ4F_preferences_t* preferencesPtr)
{
	LZ4F_compressBegin_usingDictOnce(LZ4F_cctx* cctx,
					void* dstBuffer,
					size_t dstCapacity,
					const void* dict,
					size_t dictSize,
					const LZ4F_preferences_t* preferencesPtr);  // 861
} /* size: 24, inline expansions: 1 (14 bytes) */

// <057E0014> lib/lz4frame.c:866
size_t LZ4F_compressBegin_usingCDict(LZ4F_cctx* cctx, void* dstBuffer, size_t dstCapacity, const LZ4F_CDict* cdict, const LZ4F_preferences_t* preferencesPtr)
{
} /* size: 29 */

// <057DFF7D> lib/lz4frame.c:882
size_t LZ4F_compressBound(size_t srcSize, const LZ4F_preferences_t* preferencesPtr)
{
} /* size: 44 */

// <057DFC92> lib/lz4frame.c:898
// variables: 4
// function calls: 4
size_t LZ4F_makeBlock(void* dst, const void* src, size_t srcSize, compressFunc_t compress, void* lz4ctx, int level, const LZ4F_CDict* cdict, LZ4F_blockChecksum_t crcFlag)
{
	const BYTE* cSizePtr; // 904
	int dstCapacity; // 905
	U32 cSize; // 906
	{
		const U32  crc32; // 920
		LZ4F_writeLE32(void* dst,
				U32 value32);  // 921
	}
	LZ4F_writeLE32(void* dst,
			U32 value32);  // 917
	LZ4F_writeLE32(void* dst,
			U32 value32);  // 914
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 915
} /* size: 177, variables: 3, inline expansions: 3 (24 bytes) */

// <057DFB3E> lib/lz4frame.c:927
// variable: 1
int LZ4F_compressBlock(void* ctx, const char* src, char* dst, int srcSize, int dstCapacity, int level, const LZ4F_CDict* cdict)
{
	const int  acceleration; // 929
} /* size: 147, variables: 1 */

// <057DFA2C> lib/lz4frame.c:939
// variable: 1
int LZ4F_compressBlock_continue(void* ctx, const char* src, char* dst, int srcSize, int dstCapacity, int level, const LZ4F_CDict* cdict)
{
	const int  acceleration; // 941
} /* size: 30, variables: 1 */

// <057DF7E9> lib/lz4frame.c:947
// function calls: 2
int LZ4F_compressBlockHC(void* ctx, const char* src, char* dst, int srcSize, int dstCapacity, int level, const LZ4F_CDict* cdict)
{
	LZ4F_initStream(void* ctx,
			const LZ4F_CDict* cdict,
			int level,
			LZ4F_blockMode_t blockMode);  // 655
	LZ4F_initStream(void* ctx,
			const LZ4F_CDict* cdict,
			int level,
			LZ4F_blockMode_t blockMode);  // 949
} /* size: 225, inline expansions: 2 (135 bytes) */

// <057DF703> lib/lz4frame.c:956
int LZ4F_compressBlockHC_continue(void* ctx, const char* src, char* dst, int srcSize, int dstCapacity, int level, const LZ4F_CDict* cdict)
{
} /* size: 9 */

// <057DF673> lib/lz4frame.c:962
int LZ4F_doNotCompressBlock(void* ctx, const char* src, char* dst, int srcSize, int dstCapacity, int level, const LZ4F_CDict* cdict)
{
} /* size: 7 */

// <057DF639> lib/lz4frame.c:968
compressFunc_t LZ4F_selectCompression(LZ4F_blockMode_t blockMode, int level, LZ4F_BlockCompressMode_e compressMode)
{
} /* size: 0 */

// <057DF5BB> lib/lz4frame.c:981
// variable: 1
void LZ4F_localSaveDict(LZ4F_cctx_t* cctxPtr)
{
	const int  dictSize; // 983
} /* size: 71, variables: 1 */

// <057DF186> lib/lz4frame.c:1006
// variables: 10
// function calls: 4
size_t LZ4F_compressUpdateImpl(LZ4F_cctx* cctxPtr, void* dstBuffer, size_t dstCapacity, const void* srcBuffer, size_t srcSize, const LZ4F_compressOptions_t* compressOptionsPtr, LZ4F_BlockCompressMode_e blockCompression)
{
	const size_t  blockSize; // 1012
	const BYTE* srcPtr; // 1013
	const BYTE* srcEnd; // 1014
	const BYTE* dstStart; // 1015
	BYTE* dstPtr; // 1016
	LZ4F_lastBlockStatus lastBlockCompressed; // 1017
	const compressFunc_t  compress; // 1018
	size_t bytesWritten; // 1019
	{
		const size_t  sizeToCopy; // 1040
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1044
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1051
	}
	{
		const size_t  sizeToCopy; // 1109
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1110
	}
	LZ4F_selectCompression(LZ4F_blockMode_t blockMode,
				int level,
				LZ4F_BlockCompressMode_e compressMode);  // 1018
} /* size: 1054, variables: 8, inline expansions: 1 (96 bytes) */

// <057DF0A8> lib/lz4frame.c:1133
size_t LZ4F_compressUpdate(LZ4F_cctx* cctxPtr, void* dstBuffer, size_t dstCapacity, const void* srcBuffer, size_t srcSize, const LZ4F_compressOptions_t* compressOptionsPtr)
{
} /* size: 21 */

// <057DEFCA> lib/lz4frame.c:1153
size_t LZ4F_uncompressedUpdate(LZ4F_cctx* cctxPtr, void* dstBuffer, size_t dstCapacity, const void* srcBuffer, size_t srcSize, const LZ4F_compressOptions_t* compressOptionsPtr)
{
} /* size: 0 */

// <057DEEA6> lib/lz4frame.c:1173
// variables: 3
// function call: 1
size_t LZ4F_flush(LZ4F_cctx* cctxPtr, void* dstBuffer, size_t dstCapacity, const LZ4F_compressOptions_t* compressOptionsPtr)
{
	const BYTE* dstStart; // 1177
	BYTE* dstPtr; // 1178
	compressFunc_t compress; // 1179
	LZ4F_selectCompression(LZ4F_blockMode_t blockMode,
				int level,
				LZ4F_BlockCompressMode_e compressMode);  // 1189
} /* size: 316, variables: 3, inline expansions: 1 (99 bytes) */

// <057DECC8> lib/lz4frame.c:1222
// variables: 4
// function calls: 2
size_t LZ4F_compressEnd(LZ4F_cctx* cctxPtr, void* dstBuffer, size_t dstCapacity, const LZ4F_compressOptions_t* compressOptionsPtr)
{
	const BYTE* dstStart; // 1226
	BYTE* dstPtr; // 1227
	const size_t  flushSize; // 1229
	{
		const U32  xxh; // 1242
		LZ4F_writeLE32(void* dst,
				U32 value32);  // 1245
	}
	LZ4F_writeLE32(void* dst,
			U32 value32);  // 1238
} /* size: 206, variables: 3, inline expansions: 1 (6 bytes) */

// <057DBD3D> lib/lz4frame.c:1276
// member variables: 20
// struct size: 288
struct LZ4F_dctx_s {
	LZ4F_CustomMem cmem; /* 0 32 */
	LZ4F_frameInfo_t frameInfo; /* 32 32 */
	U32 version; /* 64 4 */
	dStage_t dStage; /* 68 4 */
	U64 frameRemainingSize; /* 72 8 */
	size_t maxBlockSize; /* 80 8 */
	size_t maxBufferSize; /* 88 8 */
	BYTE * tmpIn; /* 96 8 */
	size_t tmpInSize; /* 104 8 */
	size_t tmpInTarget; /* 112 8 */
	BYTE * tmpOutBuffer; /* 120 8 */
	const BYTE * dict; /* 128 8 */
	size_t dictSize; /* 136 8 */
	BYTE * tmpOut; /* 144 8 */
	size_t tmpOutSize; /* 152 8 */
	size_t tmpOutStart; /* 160 8 */
	XXH32_state_t xxh; /* 168 48 */
	XXH32_state_t blockChecksum; /* 216 48 */
	int skipChecksum; /* 264 4 */
	BYTE header[19]; /* 268 19 */
};

// <057DEC8D> lib/lz4frame.c:1300
// variable: 1
LZ4F_dctx* LZ4F_createDecompressionContext_advanced(LZ4F_CustomMem customMem, unsigned int version)
{
	const LZ4F_dctx* dctx; // 1302
} /* size: 0, variables: 1 */

// <057DEA3C> lib/lz4frame.c:1341
size_t LZ4F_dctx_size(const LZ4F_dctx* dctx)
{
} /* size: 0 */

// <057DEA0A> lib/lz4frame.c:1352
void LZ4F_resetDecompressionContext(LZ4F_dctx* dctx)
{
} /* size: 52 */

// <057E1CE7> lib/lz4frame.c:1371
// variables: 13
// function calls: 7
size_t LZ4F_decodeHeader(LZ4F_dctx* dctx, const void* src, size_t srcSize)
{
	unsigned int blockMode; // 1373
	unsigned int blockChecksumFlag; // 1373
	unsigned int contentSizeFlag; // 1373
	unsigned int contentChecksumFlag; // 1373
	unsigned int dictIDFlag; // 1373
	unsigned int blockSizeID; // 1373
	size_t frameHeaderSize; // 1374
	const BYTE* srcPtr; // 1375
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1380
	LZ4F_readLE32(const void* src); // 1383
	{
		const U32  FLG; // 1405
		const U32  version; // 1406
	}
	{
		const U32  BD; // 1431
	}
	{
		const BYTE  HC; // 1442
		LZ4F_headerChecksum(const void* header,
					size_t length);  // 1442
	}
	{
		const int  blockSizeIdx; // 340
	}
	LZ4F_getBlockSize(LZ4F_blockSizeID_t blockSizeID); // 1452
	LZ4F_readLE64(const void* src); // 1454
	LZ4F_readLE32(const void* src); // 1457
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1424
} /* size: 632, variables: 8, inline expansions: 6 (83 bytes) */

// <057DE928> lib/lz4frame.c:1371
// variables: 12
size_t LZ4F_decodeHeader(LZ4F_dctx* dctx, const void* src, size_t srcSize)
{
	unsigned int blockMode; // 1373
	unsigned int blockChecksumFlag; // 1373
	unsigned int contentSizeFlag; // 1373
	unsigned int contentChecksumFlag; // 1373
	unsigned int dictIDFlag; // 1373
	unsigned int blockSizeID; // 1373
	size_t frameHeaderSize; // 1374
	const BYTE* srcPtr; // 1375
	{
		const U32  FLG; // 1405
		const U32  version; // 1406
	}
	{
		const U32  BD; // 1431
	}
	{
		const BYTE  HC; // 1442
	}
} /* size: 0, variables: 8 */

// <057DE8D1> lib/lz4frame.c:1469
// variables: 3
size_t LZ4F_headerSize(const void* src, size_t srcSize)
{
	{
		const BYTE  FLG; // 1488
		const U32  contentSizeFlag; // 1489
		const U32  dictIDFlag; // 1490
	}
} /* size: 0 */

// <057DE373> lib/lz4frame.c:1556
// variables: 5
// function calls: 5
void LZ4F_updateDict(LZ4F_dctx* dctx, const BYTE* dstPtr, size_t dstSize, const BYTE* dstBufferStart, unsigned int withinTmp)
{
	{
		const size_t  preserveSize; // 1589
		size_t copySize; // 1590
		const BYTE* oldDictEnd; // 1591
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1595
	}
	{
		const size_t  preserveSize; // 1604
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1605
	}
	{
		size_t preserveSize; // 1614
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1616
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1617
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1608
} /* size: 443, inline expansions: 1 (11 bytes) */

// <057DD2BC> lib/lz4frame.c:2152
size_t LZ4F_decompress_usingDict(LZ4F_dctx* dctx, void* dstBuffer, size_t* dstSizePtr, const void* srcBuffer, size_t* srcSizePtr, const void* dict, size_t dictSize, const LZ4F_decompressOptions_t* decompressOptionsPtr)
{
} /* size: 45 */

