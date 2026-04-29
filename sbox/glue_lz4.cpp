
//
// sbox/glue_lz4.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//

// <01796FB8> sbox/glue_lz4.cpp:7
void CompressBound(int inputSize)
{
} /* size: 9 */

// <01796F1C> sbox/glue_lz4.cpp:12
void Compress(const void* src, void* dst, int srcSize, int dstCapacity)
{
} /* size: 9 */

// <01796E65> sbox/glue_lz4.cpp:17
void CompressHC(const void* src, void* dst, int srcSize, int dstCapacity, int compressionLevel)
{
} /* size: 9 */

// <01796DC9> sbox/glue_lz4.cpp:22
void Decompress(const void* src, void* dst, int compressedSize, int dstCapacity)
{
} /* size: 9 */

// <01796D72> sbox/glue_lz4.cpp:27
void CompressFrameBound(int inputSize)
{
} /* size: 20 */

// <01796C62> sbox/glue_lz4.cpp:32
// variables: 2
void CompressFrame(const void* src, void* dst, int srcSize, int dstCapacity, int compressionLevel)
{
	LZ4F_preferences_t prefs; // 34
	size_t result; // 38
} /* size: 143, variables: 2 */

// <01796B3C> sbox/glue_lz4.cpp:45
// variables: 5
void GetFrameContentSize(const void* src, int srcSize)
{
	LZ4F_dctx* dctx; // 50
	LZ4F_errorCode_t err; // 51
	LZ4F_frameInfo_t frameInfo; // 55
	size_t srcSizeForHeader; // 56
	size_t ret; // 57
} /* size: 174, variables: 5 */

// <017969BD> sbox/glue_lz4.cpp:67
// variables: 7
void DecompressFrame(const void* src, void* dst, int srcSize, int dstCapacity)
{
	LZ4F_dctx* dctx; // 69
	LZ4F_errorCode_t err; // 70
	size_t srcSizeRemaining; // 74
	size_t dstSizeRemaining; // 75
	const char* srcPtr; // 76
	char* dstPtr; // 77
	size_t ret; // 79
} /* size: 188, variables: 7 */

