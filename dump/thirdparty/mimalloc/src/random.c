
//
// thirdparty/mimalloc/src/random.c
//
//	referenced by: libtier0.so
//
//	functions: 14
//

// <002DB2AE> ../thirdparty/mimalloc/src/random.c:35
inline void qround(uint32_t* x, size_t a, size_t b, size_t c, size_t d)
{
} /* size: 0 */

// <002DA747> ../thirdparty/mimalloc/src/random.c:42
// variables: 4
// function calls: 40
void chacha_block(mi_random_ctx_t* ctx)
{
	uint32_t x; // 45
	{
		size_t i; // 46
	}
	{
		size_t i; // 49
		mi_rotl32(uint32_t x,
				uint32_t r);  // 36
		mi_rotl32(uint32_t x,
				uint32_t r);  // 37
		mi_rotl32(uint32_t x,
				uint32_t r);  // 38
		mi_rotl32(uint32_t x,
				uint32_t r);  // 39
		qround(uint32_t* x,
			size_t a,
			size_t b,
			size_t c,
			size_t d);  // 50
		mi_rotl32(uint32_t x,
				uint32_t r);  // 36
		mi_rotl32(uint32_t x,
				uint32_t r);  // 37
		mi_rotl32(uint32_t x,
				uint32_t r);  // 38
		mi_rotl32(uint32_t x,
				uint32_t r);  // 39
		qround(uint32_t* x,
			size_t a,
			size_t b,
			size_t c,
			size_t d);  // 51
		mi_rotl32(uint32_t x,
				uint32_t r);  // 36
		mi_rotl32(uint32_t x,
				uint32_t r);  // 37
		mi_rotl32(uint32_t x,
				uint32_t r);  // 38
		mi_rotl32(uint32_t x,
				uint32_t r);  // 39
		qround(uint32_t* x,
			size_t a,
			size_t b,
			size_t c,
			size_t d);  // 52
		mi_rotl32(uint32_t x,
				uint32_t r);  // 36
		mi_rotl32(uint32_t x,
				uint32_t r);  // 37
		mi_rotl32(uint32_t x,
				uint32_t r);  // 38
		mi_rotl32(uint32_t x,
				uint32_t r);  // 39
		qround(uint32_t* x,
			size_t a,
			size_t b,
			size_t c,
			size_t d);  // 53
		mi_rotl32(uint32_t x,
				uint32_t r);  // 36
		mi_rotl32(uint32_t x,
				uint32_t r);  // 37
		mi_rotl32(uint32_t x,
				uint32_t r);  // 38
		mi_rotl32(uint32_t x,
				uint32_t r);  // 39
		qround(uint32_t* x,
			size_t a,
			size_t b,
			size_t c,
			size_t d);  // 54
		mi_rotl32(uint32_t x,
				uint32_t r);  // 36
		mi_rotl32(uint32_t x,
				uint32_t r);  // 37
		mi_rotl32(uint32_t x,
				uint32_t r);  // 38
		mi_rotl32(uint32_t x,
				uint32_t r);  // 39
		qround(uint32_t* x,
			size_t a,
			size_t b,
			size_t c,
			size_t d);  // 55
		mi_rotl32(uint32_t x,
				uint32_t r);  // 36
		mi_rotl32(uint32_t x,
				uint32_t r);  // 37
		mi_rotl32(uint32_t x,
				uint32_t r);  // 38
		mi_rotl32(uint32_t x,
				uint32_t r);  // 39
		qround(uint32_t* x,
			size_t a,
			size_t b,
			size_t c,
			size_t d);  // 56
		mi_rotl32(uint32_t x,
				uint32_t r);  // 36
		mi_rotl32(uint32_t x,
				uint32_t r);  // 37
		mi_rotl32(uint32_t x,
				uint32_t r);  // 38
		mi_rotl32(uint32_t x,
				uint32_t r);  // 39
		qround(uint32_t* x,
			size_t a,
			size_t b,
			size_t c,
			size_t d);  // 57
	}
	{
		size_t i; // 61
	}
} /* size: 788, variables: 1 */

// <002DA71F> ../thirdparty/mimalloc/src/random.c:76
// variable: 1
uint32_t chacha_next32(mi_random_ctx_t* ctx)
{
	const uint32_t  x; // 81
} /* size: 0, variables: 1 */

// <002DA6ED> ../thirdparty/mimalloc/src/random.c:87
// variable: 1
inline uint32_t read32(const uint8_t* p, size_t idx32)
{
	const size_t  i; // 88
} /* size: 0, variables: 1 */

// <002DA68B> ../thirdparty/mimalloc/src/random.c:92
// variables: 3
void chacha_init(mi_random_ctx_t* ctx, const uint8_t* key, uint64_t nonce)
{
	{
		size_t i; // 98
		{
			const uint8_t* sigma; // 99
		}
	}
	{
		size_t i; // 102
	}
} /* size: 0 */

// <002DA64E> ../thirdparty/mimalloc/src/random.c:111
// variable: 1
void chacha_split(mi_random_ctx_t* ctx, uint64_t nonce, mi_random_ctx_t* ctx_new)
{
	const char   __func__; // 44795
} /* size: 0, variables: 1 */

// <002DA630> ../thirdparty/mimalloc/src/random.c:128
bool mi_random_is_initialized(mi_random_ctx_t* ctx)
{
} /* size: 0 */

// <002DA5FA> ../thirdparty/mimalloc/src/random.c:133
// variable: 1
void _mi_random_split(mi_random_ctx_t* ctx, mi_random_ctx_t* ctx_new)
{
	const char   __func__; // 6958
} /* size: 0, variables: 1 */

// <002DA5C2> ../thirdparty/mimalloc/src/random.c:139
// variables: 2
uintptr_t _mi_random_next(mi_random_ctx_t* ctx)
{
	const char   __func__; // 44947
	uintptr_t r; // 141
} /* size: 0, variables: 2 */

// <002DA4B3> ../thirdparty/mimalloc/src/random.c:160
// variables: 4
// function calls: 2
uintptr_t _mi_os_random_weak(uintptr_t extra_seed)
{
	uintptr_t x; // 161
	uintptr_t max; // 164
	const char   __func__; // 58417
	{
		uintptr_t i; // 165
		_mi_random_shuffle(uintptr_t x); // 166
	}
	_mi_prim_clock_now(void); // 162
} /* size: 241, variables: 3, inline expansions: 1 (54 bytes) */

// <002DA145> ../thirdparty/mimalloc/src/random.c:172
// variables: 6
// function calls: 9
void mi_random_init_ex(mi_random_ctx_t* ctx, bool use_weak)
{
	uint8_t key; // 173
	{
		uintptr_t x; // 180
		{
			size_t i; // 181
			_mi_random_shuffle(uintptr_t x); // 182
		}
	}
	mi_rep_stosb(void* dst,
			uint8_t val,
			size_t n);  // 1218
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1221
	_mi_memset(void* dst,
			int val,
			size_t n);  // 1216
	_mi_memset(void* dst,
			int val,
			size_t n);  // 1274
	_mi_memzero(void* dst,
			size_t n);  // 97
	{
		size_t i; // 98
		{
			const uint8_t* sigma; // 99
			read32(const uint8_t* p,
				size_t idx32);  // 100
		}
	}
	{
		size_t i; // 102
		read32(const uint8_t* p,
			size_t idx32);  // 103
	}
	chacha_init(mi_random_ctx_t* ctx,
			const uint8_t* key,
			uint64_t nonce);  // 193
} /* size: 975, variables: 1, inline expansions: 6 (852 bytes) */

// <002DA126> ../thirdparty/mimalloc/src/random.c:196
void _mi_random_init(mi_random_ctx_t* ctx)
{
} /* size: 0 */

// <002DA0D0> ../thirdparty/mimalloc/src/random.c:200
void _mi_random_init_weak(mi_random_ctx_t* ctx)
{
} /* size: 0 */

// <002DA0AB> ../thirdparty/mimalloc/src/random.c:204
void _mi_random_reinit_if_weak(mi_random_ctx_t* ctx)
{
} /* size: 0 */

