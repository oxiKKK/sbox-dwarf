
//
// thirdparty/mimalloc/src/threadlocal.c
//
//	referenced by: libtier0.so
//
//	functions: 15
//	structs: 2
//

// <002C5061> ../thirdparty/mimalloc/src/threadlocal.c:23
// member variables: 2
// struct size: 16
struct mi_tls_slot_s {
	size_t version; /* 0 8 */
	void * value; /* 8 8 */
};

// <002C5099> ../thirdparty/mimalloc/src/threadlocal.c:28
// member variables: 2
// struct size: 24
struct mi_thread_locals_s {
	size_t count; /* 0 8 */
	mi_tls_slot_t slots[1]; /* 8 16 */
};

// <002CC4A6> ../thirdparty/mimalloc/src/threadlocal.c:48
size_t mi_key_index(size_t key)
{
} /* size: 0 */

// <002CC488> ../thirdparty/mimalloc/src/threadlocal.c:52
size_t mi_key_version(size_t key)
{
} /* size: 0 */

// <002CC432> ../thirdparty/mimalloc/src/threadlocal.c:56
// variables: 2
mi_thread_local_t mi_key_create(size_t index, size_t version)
{
	const char   __func__; // 759
	const mi_thread_local_t  key; // 59
} /* size: 0, variables: 2 */

// <002CC3E4> ../thirdparty/mimalloc/src/threadlocal.c:66
// variables: 4
mi_thread_locals_t* mi_thread_locals_expand(size_t least_idx)
{
	mi_thread_locals_t* tls_old; // 67
	const size_t  count_old; // 68
	size_t count; // 69
	mi_thread_locals_t* tls; // 86
} /* size: 0, variables: 4 */

// <002CC1BC> ../thirdparty/mimalloc/src/threadlocal.c:93
// variables: 3
// function calls: 6
bool mi_thread_local_set_expand(mi_thread_local_t key, void* val)
{
	const size_t  idx; // 95
	mi_thread_locals_t* tls; // 96
	const char   __func__; // 595
	mi_key_index(size_t key); // 95
	_mi_theap_default(void); // 454
	mi_theap_rezalloc(mi_theap_t* theap,
				void* p,
				size_t newsize);  // 454
	mi_rezalloc(void* p,
			size_t newsize);  // 86
	mi_thread_locals_expand(size_t least_idx); // 96
	mi_key_version(size_t key); // 101
} /* size: 0, variables: 3, inline expansions: 6 (277 bytes) */

// <002CC048> ../thirdparty/mimalloc/src/threadlocal.c:107
// variables: 3
// function calls: 2
bool _mi_thread_local_set(mi_thread_local_t key, void* val)
{
	mi_thread_locals_t* tls; // 108
	const char   __func__; // 65207
	const size_t  idx; // 111
	mi_key_index(size_t key); // 111
	mi_key_version(size_t key); // 114
} /* size: 0, variables: 3, inline expansions: 2 (11 bytes) */

// <002CBFE2> ../thirdparty/mimalloc/src/threadlocal.c:123
// variables: 3
void* _mi_thread_local_get(mi_thread_local_t key)
{
	const mi_thread_locals_t* tls; // 124
	const char   __func__; // 65207
	const size_t  idx; // 127
} /* size: 0, variables: 3 */

// <002CBFC3> ../thirdparty/mimalloc/src/threadlocal.c:136
// variable: 1
void _mi_thread_locals_thread_done(void)
{
	const mi_thread_locals_t* tls; // 137
} /* size: 0, variables: 1 */

// <002CBFB4> ../thirdparty/mimalloc/src/threadlocal.c:153
void _mi_thread_locals_init(void)
{
} /* size: 0 */

// <002CBF78> ../thirdparty/mimalloc/src/threadlocal.c:157
// variables: 2
void _mi_thread_locals_done(void)
{
	{
		bool _mi_go; // 158
		{
			const mi_bitmap_t* slots; // 159
		}
	}
} /* size: 0 */

// <002CBF25> ../thirdparty/mimalloc/src/threadlocal.c:166
bool mi_thread_local_claim_fun(size_t _slice_index, mi_arena_t* _arena, bool* keep_set)
{
} /* size: 0 */

// <002CBD40> ../thirdparty/mimalloc/src/threadlocal.c:174
// variable: 1
// function calls: 2
mi_thread_local_t mi_thread_local_claim(void)
{
	size_t idx; // 175
	mi_bitmap_try_find_and_claim(mi_bitmap_t* bitmap,
					size_t tseq,
					size_t* pidx,
					mi_claim_fun_t* claim,
					mi_arena_t* arena);  // 176
	mi_key_create(size_t index,
			size_t version);  // 179
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <002CBCFE> ../thirdparty/mimalloc/src/threadlocal.c:186
// variables: 4
bool mi_thread_local_create_expand(void)
{
	mi_bitmap_t* slots; // 187
	const size_t  oldcount; // 189
	const size_t  newcount; // 190
	const size_t  newsize; // 192
} /* size: 0, variables: 4 */

// <002CB78F> ../thirdparty/mimalloc/src/threadlocal.c:203
// variables: 2
// function calls: 17
mi_thread_local_t _mi_thread_local_create(void)
{
	mi_thread_local_t key; // 204
	{
		bool _mi_go; // 205
		mi_lock_acquire(mi_lock_t* lock); // 205
		mi_lock_release(mi_lock_t* lock); // 205
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 118
		mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
		mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 189
		_mi_theap_default(void); // 396
		mi_theap_realloc_zero_aligned(mi_theap_t* theap,
						void* p,
						size_t newsize,
						size_t alignment,
						bool zero);  // 367
		mi_theap_realloc_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment);  // 396
		mi_realloc_aligned(void* p,
					size_t newsize,
					size_t alignment);  // 193
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 118
		mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
		mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 1083
		mi_bitmap_unsafe_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 1081
		mi_bitmap_unsafe_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 196
		mi_thread_local_create_expand(void); // 208
	}
} /* size: 0, variables: 1 */

// <002CB748> ../thirdparty/mimalloc/src/threadlocal.c:217
// variables: 3
void _mi_thread_local_free(mi_thread_local_t key)
{
	const size_t  idx; // 219
	{
		bool _mi_go; // 220
		{
			const mi_bitmap_t* slots; // 221
		}
	}
} /* size: 0, variables: 1 */

