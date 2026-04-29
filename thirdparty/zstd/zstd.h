
//
// thirdparty/zstd/zstd.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 14
//	struct: 1
//

// <068DB4E8> ../thirdparty/zstd/zstd.h:160
size_t ZSTD_compress(void *, size_t, const void *, size_t, int)
{
} /* size: 0 */

// <068DB40A> ../thirdparty/zstd/zstd.h:173
size_t ZSTD_decompress(void *, size_t, const void *, size_t)
{
} /* size: 0 */

// <068DB3C9> ../thirdparty/zstd/zstd.h:205
long long unsigned int ZSTD_getFrameContentSize(const void *, size_t)
{
} /* size: 0 */

// <068DB514> ../thirdparty/zstd/zstd.h:250
size_t ZSTD_compressBound(size_t)
{
} /* size: 0 */

// <068DB4AF> ../thirdparty/zstd/zstd.h:281
ZSTD_CCtx* ZSTD_createCCtx(void)
{
} /* size: 0 */

// <068DB458> ../thirdparty/zstd/zstd.h:282
size_t ZSTD_freeCCtx(ZSTD_CCtx *)
{
} /* size: 0 */

// <068DB382> ../thirdparty/zstd/zstd.h:304
ZSTD_DCtx* ZSTD_createDCtx(void)
{
} /* size: 0 */

// <068DB32B> ../thirdparty/zstd/zstd.h:305
size_t ZSTD_freeDCtx(ZSTD_DCtx *)
{
} /* size: 0 */

// <068DB477> ../thirdparty/zstd/zstd.h:1012
size_t ZSTD_compress_usingCDict(ZSTD_CCtx *, void *, size_t, const void *, size_t, const ZSTD_CDict *)
{
} /* size: 0 */

// <068DB34A> ../thirdparty/zstd/zstd.h:1033
size_t ZSTD_decompress_usingDDict(ZSTD_DCtx *, void *, size_t, const void *, size_t, const ZSTD_DDict *)
{
} /* size: 0 */

// <068DB3B0> ../thirdparty/zstd/zstd.h:1059
unsigned int ZSTD_getDictID_fromDDict(const ZSTD_DDict *)
{
} /* size: 0 */

// <068DB392> ../thirdparty/zstd/zstd.h:1071
unsigned int ZSTD_getDictID_fromFrame(const void *, size_t)
{
} /* size: 0 */

// <068C9435> ../thirdparty/zstd/zstd.h:1870
// member variables: 3
// struct size: 24
typedef struct {
	ZSTD_allocFunction customAlloc; /* 0 8 */
	ZSTD_freeFunction customFree; /* 8 8 */
	void * opaque; /* 16 8 */
} ZSTD_customMem;

// <068DB4BF> ../thirdparty/zstd/zstd.h:1939
ZSTD_CDict* ZSTD_createCDict_byReference(const void *, size_t, int)
{
} /* size: 0 */

// <068DB3E6> ../thirdparty/zstd/zstd.h:2460
ZSTD_DDict* ZSTD_createDDict_byReference(const void *, size_t)
{
} /* size: 0 */

