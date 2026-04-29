
//
// lib/xxhash.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	structs: 4
//

// <057DD0CF> lib/xxhash.h:169
XXH32_hash_t XXH32(const void *, size_t, unsigned int)
{
} /* size: 0 */

// <057DD19C> lib/xxhash.h:177
XXH_errorcode XXH32_reset(XXH32_state_t *, unsigned int)
{
} /* size: 0 */

// <057DD0A7> lib/xxhash.h:178
XXH_errorcode XXH32_update(XXH32_state_t *, const void *, size_t)
{
} /* size: 0 */

// <057DCF82> lib/xxhash.h:179
XXH32_hash_t XXH32_digest(const XXH32_state_t *)
{
} /* size: 0 */

// <057E3070> lib/xxhash.h:204
// member variable: 1
// struct size: 4
typedef struct {
	unsigned char digest[4]; /* 0 4 */
} XXH32_canonical_t;

// <057E3156> lib/xxhash.h:239
// member variable: 1
// struct size: 8
typedef struct {
	unsigned char digest[8]; /* 0 8 */
} XXH64_canonical_t;

// <057DC478> lib/xxhash.h:264
// member variables: 9
// struct size: 48
struct XXH32_state_s {
	uint32_t total_len_32; /* 0 4 */
	uint32_t large_len; /* 4 4 */
	uint32_t v1; /* 8 4 */
	uint32_t v2; /* 12 4 */
	uint32_t v3; /* 16 4 */
	uint32_t v4; /* 20 4 */
	uint32_t mem32[4]; /* 24 16 */
	uint32_t memsize; /* 40 4 */
	uint32_t reserved; /* 44 4 */
};

// <057E30CB> lib/xxhash.h:276
// member variables: 8
// struct size: 88
struct XXH64_state_s {
	uint64_t total_len; /* 0 8 */
	uint64_t v1; /* 8 8 */
	uint64_t v2; /* 16 8 */
	uint64_t v3; /* 24 8 */
	uint64_t v4; /* 32 8 */
	uint64_t mem64[4]; /* 40 32 */
	uint32_t memsize; /* 72 4 */
	uint32_t reserved[2]; /* 76 8 */
};

