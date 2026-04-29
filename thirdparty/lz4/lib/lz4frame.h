
//
// ./thirdparty/lz4/lib/lz4frame.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	structs: 3
//

// <017963EE> ./../thirdparty/lz4/lib/lz4frame.h:106
unsigned int LZ4F_isError(LZ4F_errorCode_t)
{
} /* size: 0 */

// <01795B28> ./../thirdparty/lz4/lib/lz4frame.h:176
// member variables: 7
// struct size: 32
typedef struct {
	LZ4F_blockSizeID_t blockSizeID; /* 0 4 */
	LZ4F_blockMode_t blockMode; /* 4 4 */
	LZ4F_contentChecksum_t contentChecksumFlag; /* 8 4 */
	LZ4F_frameType_t frameType; /* 12 4 */
	long long unsigned int contentSize; /* 16 8 */
	unsigned int dictID; /* 24 4 */
	LZ4F_blockChecksum_t blockChecksumFlag; /* 28 4 */
} LZ4F_frameInfo_t;

// <01795BAB> ./../thirdparty/lz4/lib/lz4frame.h:193
// member variables: 5
// struct size: 56
typedef struct {
	LZ4F_frameInfo_t frameInfo; /* 0 32 */
	int compressionLevel; /* 32 4 */
	unsigned int autoFlush; /* 36 4 */
	unsigned int favorDecSpeed; /* 40 4 */
	unsigned int reserved[3]; /* 44 12 */
} LZ4F_preferences_t;

// <01796406> ./../thirdparty/lz4/lib/lz4frame.h:225
size_t LZ4F_compressFrame(void *, size_t, const void *, size_t, const LZ4F_preferences_t *)
{
} /* size: 0 */

// <01796438> ./../thirdparty/lz4/lib/lz4frame.h:235
size_t LZ4F_compressFrameBound(size_t, const LZ4F_preferences_t *)
{
} /* size: 0 */

// <01795C3E> ./../thirdparty/lz4/lib/lz4frame.h:375
// member variables: 4
// struct size: 16
typedef struct {
	unsigned int stableDst; /* 0 4 */
	unsigned int skipChecksums; /* 4 4 */
	unsigned int reserved1; /* 8 4 */
	unsigned int reserved0; /* 12 4 */
} LZ4F_decompressOptions_t;

// <017963CA> ./../thirdparty/lz4/lib/lz4frame.h:398
LZ4F_errorCode_t LZ4F_createDecompressionContext(LZ4F_dctx* *, unsigned int)
{
} /* size: 0 */

// <01796383> ./../thirdparty/lz4/lib/lz4frame.h:399
LZ4F_errorCode_t LZ4F_freeDecompressionContext(LZ4F_dctx *)
{
} /* size: 0 */

// <0179639C> ./../thirdparty/lz4/lib/lz4frame.h:465
size_t LZ4F_getFrameInfo(LZ4F_dctx *, LZ4F_frameInfo_t *, const void *, size_t *)
{
} /* size: 0 */

// <01796345> ./../thirdparty/lz4/lib/lz4frame.h:517
size_t LZ4F_decompress(LZ4F_dctx *, void *, size_t *, const void *, size_t *, const LZ4F_decompressOptions_t *)
{
} /* size: 0 */

