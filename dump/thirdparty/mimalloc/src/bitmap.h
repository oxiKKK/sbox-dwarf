
//
// thirdparty/mimalloc/src/bitmap.h
//
//	referenced by: libtier0.so
//
//	functions: 13
//	structs: 3
//

// <002C45AA> ../thirdparty/mimalloc/src/bitmap.h:85
// member variable: 1
// struct size: 64
struct mi_bchunk_s {
	atomic<long unsigned int> bfields[8] __attribute__((__aligned__(8))); /* 0 64 */
} __attribute__((__aligned__(8)));

// <002C416E> ../thirdparty/mimalloc/src/bitmap.h:109
// member variables: 4
// struct size: 4,224
struct mi_bitmap_s {
	atomic<long unsigned int> chunk_count __attribute__((__aligned__(8))); /* 0 8 */
	size_t _padding[7]; /* 8 56 */
	mi_bchunkmap_t chunkmap __attribute__((__aligned__(64))); /* 64 64 */
	mi_bchunk_t chunks[64] __attribute__((__aligned__(64))); /* 128 4096 */
} __attribute__((__aligned__(64)));

// <0031683B> ../thirdparty/mimalloc/src/bitmap.h:117
inline size_t mi_bitmap_chunk_count(const mi_bitmap_t* bitmap)
{
} /* size: 0 */

// <00316817> ../thirdparty/mimalloc/src/bitmap.h:121
inline size_t mi_bitmap_max_bits(const mi_bitmap_t* bitmap)
{
} /* size: 0 */

// <003167E3> ../thirdparty/mimalloc/src/bitmap.h:172
inline bool mi_bitmap_is_setN(mi_bitmap_t* bitmap, size_t idx, size_t n)
{
} /* size: 0 */

// <003167AF> ../thirdparty/mimalloc/src/bitmap.h:177
inline bool mi_bitmap_is_clearN(mi_bitmap_t* bitmap, size_t idx, size_t n)
{
} /* size: 0 */

// <00316785> ../thirdparty/mimalloc/src/bitmap.h:181
inline bool mi_bitmap_is_set(mi_bitmap_t* bitmap, size_t idx)
{
} /* size: 0 */

// <0031675B> ../thirdparty/mimalloc/src/bitmap.h:185
inline bool mi_bitmap_is_clear(mi_bitmap_t* bitmap, size_t idx)
{
} /* size: 0 */

// <00316732> ../thirdparty/mimalloc/src/bitmap.h:239
// variable: 1
inline mi_chunkbin_t mi_chunkbin_inc(mi_chunkbin_t bbin)
{
	const char   __func__; // 44947
} /* size: 0, variables: 1 */

// <00316714> ../thirdparty/mimalloc/src/bitmap.h:249
inline mi_chunkbin_t mi_chunkbin_of(size_t slice_count)
{
} /* size: 0 */

// <002C41D4> ../thirdparty/mimalloc/src/bitmap.h:260
// member variables: 6
// struct size: 4,544
struct mi_bbitmap_s {
	atomic<long unsigned int> chunk_count __attribute__((__aligned__(8))); /* 0 8 */
	atomic<long unsigned int> chunk_max_accessed __attribute__((__aligned__(8))); /* 8 8 */
	size_t _padding[6]; /* 16 48 */
	mi_bchunkmap_t chunkmap __attribute__((__aligned__(64))); /* 64 64 */
	mi_bchunkmap_t chunkmap_bins[5] __attribute__((__aligned__(64))); /* 128 320 */
	mi_bchunk_t chunks[64] __attribute__((__aligned__(64))); /* 448 4096 */
} __attribute__((__aligned__(64)));

// <003166F4> ../thirdparty/mimalloc/src/bitmap.h:272
inline size_t mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap)
{
} /* size: 0 */

// <003166CE> ../thirdparty/mimalloc/src/bitmap.h:276
inline size_t mi_bbitmap_max_bits(const mi_bbitmap_t* bbitmap)
{
} /* size: 0 */

// <00316696> ../thirdparty/mimalloc/src/bitmap.h:307
inline bool mi_bbitmap_is_setN(mi_bbitmap_t* bbitmap, size_t idx, size_t n)
{
} /* size: 0 */

// <0031665E> ../thirdparty/mimalloc/src/bitmap.h:312
inline bool mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap, size_t idx, size_t n)
{
} /* size: 0 */

// <00316619> ../thirdparty/mimalloc/src/bitmap.h:332
inline bool mi_bbitmap_try_find_and_clearN(mi_bbitmap_t* bbitmap, size_t tseq, size_t n, size_t* pidx)
{
} /* size: 0 */

