
//
// thirdparty/mimalloc/src/bitmap.c
//
//	referenced by: libtier0.so
//
//	functions: 109
//	struct: 1
//

// <0030072D> ../thirdparty/mimalloc/src/bitmap.c:26
inline size_t mi_bfield_ctz(mi_bfield_t x)
{
} /* size: 0 */

// <00300711> ../thirdparty/mimalloc/src/bitmap.c:30
inline size_t mi_bfield_clz(mi_bfield_t x)
{
} /* size: 0 */

// <003006F5> ../thirdparty/mimalloc/src/bitmap.c:34
inline size_t mi_bfield_popcount(mi_bfield_t x)
{
} /* size: 0 */

// <003006D9> ../thirdparty/mimalloc/src/bitmap.c:38
inline mi_bfield_t mi_bfield_clear_least_bit(mi_bfield_t x)
{
} /* size: 0 */

// <003006B1> ../thirdparty/mimalloc/src/bitmap.c:45
inline bool mi_bfield_find_least_bit(mi_bfield_t x, size_t* idx)
{
} /* size: 0 */

// <00300689> ../thirdparty/mimalloc/src/bitmap.c:52
inline bool mi_bfield_find_highest_bit(mi_bfield_t x, size_t* idx)
{
} /* size: 0 */

// <0030064F> ../thirdparty/mimalloc/src/bitmap.c:59
// variable: 1
inline bool mi_bfield_foreach_bit(mi_bfield_t* x, size_t* idx)
{
	const bool  found; // 60
} /* size: 0, variables: 1 */

// <00300641> ../thirdparty/mimalloc/src/bitmap.c:65
inline mi_bfield_t mi_bfield_zero(void)
{
} /* size: 0 */

// <00300633> ../thirdparty/mimalloc/src/bitmap.c:69
inline mi_bfield_t mi_bfield_one(void)
{
} /* size: 0 */

// <00300625> ../thirdparty/mimalloc/src/bitmap.c:73
inline mi_bfield_t mi_bfield_all_set(void)
{
} /* size: 0 */

// <0033E4CF> ../thirdparty/mimalloc/src/bitmap.c:78
// variable: 1
mi_bfield_t mi_bfield_mask(size_t shiftl, size_t bit_count)
{
	const mi_bfield_t  mask0; // 82
} /* size: 0, variables: 1 */

// <003005E4> ../thirdparty/mimalloc/src/bitmap.c:78
// variables: 2
inline mi_bfield_t mi_bfield_mask(size_t bit_count, size_t shiftl)
{
	const char   __func__; // 59076
	const mi_bfield_t  mask0; // 82
} /* size: 0, variables: 2 */

// <00300599> ../thirdparty/mimalloc/src/bitmap.c:92
// variables: 3
inline bool mi_bfield_atomic_set(atomic<long unsigned int>* b, size_t idx)
{
	const char   __func__; // 65207
	const mi_bfield_t  mask; // 94
	const mi_bfield_t  old; // 95
} /* size: 0, variables: 3 */

// <00300542> ../thirdparty/mimalloc/src/bitmap.c:101
// variables: 3
inline bool mi_bfield_atomic_clear(atomic<long unsigned int>* b, size_t idx, bool* all_clear)
{
	const char   __func__; // 15263
	const mi_bfield_t  mask; // 103
	mi_bfield_t old; // 104
} /* size: 0, variables: 3 */

// <003004FB> ../thirdparty/mimalloc/src/bitmap.c:112
// variables: 3
inline void mi_bfield_atomic_clear_once_set(atomic<long unsigned int>* b, size_t idx)
{
	const char   __func__; // 22194
	const mi_bfield_t  mask; // 114
	mi_bfield_t old; // 115
} /* size: 0, variables: 3 */

// <0033E5D9> ../thirdparty/mimalloc/src/bitmap.c:134
// variable: 1
bool mi_bfield_atomic_set_mask(size_t* already_set, mi_bfield_t mask, atomic<long unsigned int>* b)
{
	mi_bfield_t old; // 136
} /* size: 35, variables: 1 */

// <003004B0> ../thirdparty/mimalloc/src/bitmap.c:134
// variables: 2
inline bool mi_bfield_atomic_set_mask(atomic<long unsigned int>* b, mi_bfield_t mask, size_t* already_set)
{
	const char   __func__; // 40853
	mi_bfield_t old; // 136
} /* size: 0, variables: 2 */

// <00300465> ../thirdparty/mimalloc/src/bitmap.c:144
// variables: 2
inline bool mi_bfield_atomic_clear_mask(atomic<long unsigned int>* b, mi_bfield_t mask, bool* all_clear)
{
	const char   __func__; // 5670
	mi_bfield_t old; // 146
} /* size: 0, variables: 2 */

// <00300431> ../thirdparty/mimalloc/src/bitmap.c:152
// variable: 1
inline bool mi_bfield_atomic_setX(atomic<long unsigned int>* b, size_t* already_set)
{
	const mi_bfield_t  old; // 153
} /* size: 0, variables: 1 */

// <0033E76D> ../thirdparty/mimalloc/src/bitmap.c:170
bool mi_bfield_atomic_try_clear_mask_of(bool* all_clear, mi_bfield_t expect, mi_bfield_t mask, atomic<long unsigned int>* b)
{
} /* size: 35 */

// <003003E6> ../thirdparty/mimalloc/src/bitmap.c:170
// variable: 1
inline bool mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b, mi_bfield_t mask, mi_bfield_t expect, bool* all_clear)
{
	const char   __func__; // 63427
} /* size: 0, variables: 1 */

// <0033ED76> ../thirdparty/mimalloc/src/bitmap.c:183
// variable: 1
bool mi_bfield_atomic_try_clear_mask(bool* all_clear, mi_bfield_t mask, atomic<long unsigned int>* b)
{
	const mi_bfield_t  expect; // 185
} /* size: 35, variables: 1 */

// <0030039B> ../thirdparty/mimalloc/src/bitmap.c:183
// variables: 2
inline bool mi_bfield_atomic_try_clear_mask(atomic<long unsigned int>* b, mi_bfield_t mask, bool* all_clear)
{
	const char   __func__; // 22194
	const mi_bfield_t  expect; // 185
} /* size: 0, variables: 2 */

// <00300367> ../thirdparty/mimalloc/src/bitmap.c:210
// variable: 1
inline bool mi_bfield_atomic_try_clearX(atomic<long unsigned int>* b, bool* all_clear)
{
	mi_bfield_t old; // 211
} /* size: 0, variables: 1 */

// <00300335> ../thirdparty/mimalloc/src/bitmap.c:223
// variable: 1
inline bool mi_bfield_atomic_is_set(const atomic<long unsigned int>* b, const size_t idx)
{
	const mi_bfield_t  x; // 224
} /* size: 0, variables: 1 */

// <00300303> ../thirdparty/mimalloc/src/bitmap.c:229
// variable: 1
inline bool mi_bfield_atomic_is_clear(const atomic<long unsigned int>* b, const size_t idx)
{
	const mi_bfield_t  x; // 230
} /* size: 0, variables: 1 */

// <003002CF> ../thirdparty/mimalloc/src/bitmap.c:235
inline bool mi_bfield_atomic_is_xset(mi_xset_t set, const atomic<long unsigned int>* b, const size_t idx)
{
} /* size: 0 */

// <00300292> ../thirdparty/mimalloc/src/bitmap.c:241
// variables: 2
inline bool mi_bfield_atomic_is_set_mask(const atomic<long unsigned int>* b, mi_bfield_t mask)
{
	const char   __func__; // 1309
	const mi_bfield_t  x; // 243
} /* size: 0, variables: 2 */

// <00300255> ../thirdparty/mimalloc/src/bitmap.c:248
// variables: 2
inline bool mi_bfield_atomic_is_clear_mask(const atomic<long unsigned int>* b, mi_bfield_t mask)
{
	const char   __func__; // 55026
	const mi_bfield_t  x; // 250
} /* size: 0, variables: 2 */

// <0033E6EB> ../thirdparty/mimalloc/src/bitmap.c:255
bool mi_bfield_atomic_is_xset_mask(mi_bfield_t mask, const atomic<long unsigned int>* b, mi_xset_t set)
{
} /* size: 35 */

// <00300216> ../thirdparty/mimalloc/src/bitmap.c:255
// variable: 1
inline bool mi_bfield_atomic_is_xset_mask(mi_xset_t set, const atomic<long unsigned int>* b, mi_bfield_t mask)
{
	const char   __func__; // 40702
} /* size: 0, variables: 1 */

// <003001E0> ../thirdparty/mimalloc/src/bitmap.c:262
// variable: 1
inline size_t mi_bfield_atomic_popcount_mask(atomic<long unsigned int>* b, mi_bfield_t mask)
{
	const mi_bfield_t  x; // 263
} /* size: 0, variables: 1 */

// <0033E548> ../thirdparty/mimalloc/src/bitmap.c:275
// variables: 3
bool mi_bchunk_set(size_t* already_set, size_t cidx, mi_bchunk_t* chunk)
{
	const size_t  i; // 277
	const size_t  idx; // 278
	const bool  was_clear; // 279
} /* size: 35, variables: 3 */

// <00300176> ../thirdparty/mimalloc/src/bitmap.c:275
// variables: 4
inline bool mi_bchunk_set(mi_bchunk_t* chunk, size_t cidx, size_t* already_set)
{
	const char   __func__; // 759
	const size_t  i; // 277
	const size_t  idx; // 278
	const bool  was_clear; // 279
} /* size: 0, variables: 4 */

// <003000CD> ../thirdparty/mimalloc/src/bitmap.c:288
// variables: 8
inline bool mi_bchunk_setNX(mi_bchunk_t* chunk, size_t cidx, size_t n, size_t* already_set)
{
	const char   __func__; // 44947
	const size_t  i; // 291
	const size_t  idx; // 292
	{
		const size_t  m; // 299
		size_t already_set1; // 303
		const bool  all_set1; // 304
		size_t already_set2; // 307
		const bool  all_set2; // 308
	}
} /* size: 0, variables: 3 */

// <002FFA33> ../thirdparty/mimalloc/src/bitmap.c:316
// variables: 11
// function calls: 13
bool mi_bchunk_xsetNC(mi_xset_t set, mi_bchunk_t* chunk, size_t cidx, size_t n, size_t* palready_set, bool* pmaybe_all_clear)
{
	const char   __func__; // 6958
	bool all_transition; // 319
	bool maybe_all_clear; // 320
	size_t total_already_set; // 321
	size_t idx; // 322
	size_t field; // 323
	{
		size_t m; // 325
		const mi_bfield_t  mask; // 329
		size_t already_set; // 330
		bool all_clear; // 331
		const bool  transition; // 332
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 329
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 136
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 137
		mi_popcount(size_t x); // 35
		mi_bfield_popcount(mi_bfield_t x); // 138
		mi_bfield_atomic_set_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						size_t* already_set);  // 332
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 146
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 147
		mi_bfield_atomic_clear_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						bool* all_clear);  // 333
	}
} /* size: 0, variables: 6 */

// <00344EC6> ../thirdparty/mimalloc/src/bitmap.c:349
// variables: 5
// function calls: 31
bool mi_bchunk_setN(mi_bchunk_t* chunk, size_t cidx, size_t n, size_t* already_set)
{
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 295
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 136
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 137
	mi_popcount(size_t x); // 35
	mi_bfield_popcount(mi_bfield_t x); // 138
	mi_bfield_atomic_set_mask(atomic<long unsigned int>* b,
					mi_bfield_t mask,
					size_t* already_set);  // 295
	{
		const size_t  m; // 299
		size_t already_set1; // 303
		const bool  all_set1; // 304
		size_t already_set2; // 307
		const bool  all_set2; // 308
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 304
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 136
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 137
		mi_popcount(size_t x); // 35
		mi_bfield_popcount(mi_bfield_t x); // 138
		mi_bfield_atomic_set_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						size_t* already_set);  // 304
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 308
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 136
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 137
		mi_popcount(size_t x); // 35
		mi_bfield_popcount(mi_bfield_t x); // 138
		mi_bfield_atomic_set_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						size_t* already_set);  // 308
	}
	mi_bchunk_setNX(mi_bchunk_t* chunk,
			size_t cidx,
			size_t n,
			size_t* already_set);  // 354
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 94
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 95
	mi_bfield_atomic_set(atomic<long unsigned int>* b,
				size_t idx);  // 279
	mi_bchunk_set(mi_bchunk_t* chunk,
			size_t cidx,
			size_t* already_set);  // 351
	mi_bchunk_setN(mi_bchunk_t* chunk,
			size_t cidx,
			size_t n,
			size_t* already_set);  // 349
} /* size: 0, inline expansions: 15 (840 bytes) */

// <002FF9E3> ../thirdparty/mimalloc/src/bitmap.c:349
// variable: 1
inline bool mi_bchunk_setN(mi_bchunk_t* chunk, size_t cidx, size_t n, size_t* already_set)
{
	const char   __func__; // 59076
} /* size: 0, variables: 1 */

// <0033E65F> ../thirdparty/mimalloc/src/bitmap.c:360
// variables: 2
bool mi_bchunk_clear(bool* all_clear, size_t cidx, mi_bchunk_t* chunk)
{
	const size_t  i; // 362
	const size_t  idx; // 363
} /* size: 35, variables: 2 */

// <002FF986> ../thirdparty/mimalloc/src/bitmap.c:360
// variables: 3
inline bool mi_bchunk_clear(mi_bchunk_t* chunk, size_t cidx, bool* all_clear)
{
	const char   __func__; // 44947
	const size_t  i; // 362
	const size_t  idx; // 363
} /* size: 0, variables: 3 */

// <002FF936> ../thirdparty/mimalloc/src/bitmap.c:367
// variable: 1
inline bool mi_bchunk_clearN(mi_bchunk_t* chunk, size_t cidx, size_t n, bool* maybe_all_clear)
{
	const char   __func__; // 6958
} /* size: 0, variables: 1 */

// <002FF664> ../thirdparty/mimalloc/src/bitmap.c:378
// variables: 4
// function calls: 6
size_t mi_bchunk_popcountNC(mi_bchunk_t* chunk, size_t field_idx, size_t idx, size_t n)
{
	const char   __func__; // 65207
	size_t count; // 380
	{
		size_t m; // 382
		const size_t  mask; // 386
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 386
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 263
		mi_popcount(size_t x); // 35
		mi_bfield_popcount(mi_bfield_t x); // 264
		mi_bfield_atomic_popcount_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 387
	}
} /* size: 0, variables: 2 */

// <002FF609> ../thirdparty/mimalloc/src/bitmap.c:397
// variables: 3
inline size_t mi_bchunk_popcountN(mi_bchunk_t* chunk, size_t cidx, size_t n)
{
	const char   __func__; // 5857
	const size_t  i; // 401
	const size_t  idx; // 402
} /* size: 0, variables: 3 */

// <002FF2F6> ../thirdparty/mimalloc/src/bitmap.c:413
// variables: 3
// function calls: 5
bool mi_bchunk_is_xsetNC(mi_xset_t set, const mi_bchunk_t* chunk, size_t field_idx, size_t idx, size_t n)
{
	const char   __func__; // 5857
	{
		size_t m; // 416
		const size_t  mask; // 420
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 420
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 243
		mi_bfield_atomic_is_set_mask(const atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 257
		mi_bfield_atomic_is_xset_mask(mi_xset_t set,
						const atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 421
	}
} /* size: 0, variables: 1 */

// <002FF288> ../thirdparty/mimalloc/src/bitmap.c:433
// variables: 3
inline bool mi_bchunk_is_xsetN(mi_xset_t set, const mi_bchunk_t* chunk, size_t cidx, size_t n)
{
	const char   __func__; // 58417
	const size_t  i; // 437
	const size_t  idx; // 438
} /* size: 0, variables: 3 */

// <00343A2A> ../thirdparty/mimalloc/src/bitmap.c:448
// variables: 5
// function calls: 26
bool mi_bchunk_try_clearNX(mi_bchunk_t* chunk, size_t cidx, size_t n, bool* pmaybe_all_clear)
{
	const size_t  i; // 451
	const size_t  idx; // 452
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 455
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 185
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 178
	mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						mi_bfield_t expect,
						bool* all_clear);  // 186
	mi_bfield_atomic_try_clear_mask(atomic<long unsigned int>* b,
					mi_bfield_t mask,
					bool* all_clear);  // 455
	{
		const size_t  m; // 459
		bool field1_is_clear; // 462
		bool field2_is_clear; // 467
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 463
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 185
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 178
		mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
							mi_bfield_t mask,
							mi_bfield_t expect,
							bool* all_clear);  // 186
		mi_bfield_atomic_try_clear_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						bool* all_clear);  // 463
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 468
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 185
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 178
		mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
							mi_bfield_t mask,
							mi_bfield_t expect,
							bool* all_clear);  // 186
		mi_bfield_atomic_try_clear_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						bool* all_clear);  // 468
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 136
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 137
		mi_bfield_atomic_set_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						size_t* already_set);  // 470
	}
} /* size: 0, variables: 2, inline expansions: 7 (264 bytes) */

// <002FF13D> ../thirdparty/mimalloc/src/bitmap.c:448
// variables: 6
inline bool mi_bchunk_try_clearNX(mi_bchunk_t* chunk, size_t cidx, size_t n, bool* pmaybe_all_clear)
{
	const char   __func__; // 15154
	const size_t  i; // 451
	const size_t  idx; // 452
	{
		const size_t  m; // 459
		bool field1_is_clear; // 462
		bool field2_is_clear; // 467
	}
} /* size: 0, variables: 3 */

// <002FE698> ../thirdparty/mimalloc/src/bitmap.c:491
// variables: 10
// function calls: 25
bool mi_bchunk_try_clearNC(mi_bchunk_t* chunk, size_t cidx, size_t n, bool* pmaybe_all_clear)
{

restore: // 538
	const char   __func__; // 15154
	const size_t  start_idx; // 498
	const size_t  start_field; // 499
	size_t field; // 500
	size_t m; // 501
	const mi_bfield_t  mask_start; // 505
	bool maybe_all_clear; // 506
	{
		bool field_is_clear; // 518
		__atomic_base<long unsigned int>::compare_exchange_strong(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1380
		atomic_compare_exchange_strong_explicit<long unsigned int>(atomic<long unsigned int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 212
		mi_bfield_atomic_try_clearX(atomic<long unsigned int>* b,
						bool* all_clear);  // 519
	}
	{
		const mi_bfield_t  mask_end; // 529
		bool field_is_clear; // 530
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 529
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 185
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 178
		mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
							mi_bfield_t mask,
							mi_bfield_t expect,
							bool* all_clear);  // 186
		mi_bfield_atomic_try_clear_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						bool* all_clear);  // 531
	}
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 505
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 185
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 178
	mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
						mi_bfield_t mask,
						mi_bfield_t expect,
						bool* all_clear);  // 186
	mi_bfield_atomic_try_clear_mask(atomic<long unsigned int>* b,
					mi_bfield_t mask,
					bool* all_clear);  // 507
	__atomic_base<long unsigned int>::exchange(
		__int_type __i,
		memory_order __m);  // 1346
	atomic_exchange_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 153
	mi_bfield_atomic_setX(atomic<long unsigned int>* b,
				size_t* already_set);  // 547
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 136
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 137
	mi_bfield_atomic_set_mask(atomic<long unsigned int>* b,
					mi_bfield_t mask,
					size_t* already_set);  // 544
} /* size: 0, variables: 7, goto labels: 1, inline expansions: 15 (254 bytes) */

// <002FE648> ../thirdparty/mimalloc/src/bitmap.c:554
// variable: 1
inline bool mi_bchunk_try_clearN(mi_bchunk_t* chunk, size_t cidx, size_t n, bool* maybe_all_clear)
{
	const char   __func__; // 65207
} /* size: 0, variables: 1 */

// <002FE5EB> ../thirdparty/mimalloc/src/bitmap.c:579
// variables: 3
inline bool mi_bchunk_try_find_and_clear_at(mi_bchunk_t* chunk, size_t chunk_idx, size_t* pidx)
{
	const char   __func__; // 22194
	const mi_bfield_t  b; // 583
	size_t idx; // 584
} /* size: 0, variables: 3 */

// <002FE5B1> ../thirdparty/mimalloc/src/bitmap.c:599
// variable: 1
inline bool mi_bchunk_try_find_and_clear(mi_bchunk_t* chunk, size_t* pidx)
{
	{
		int i; // 682
	}
} /* size: 0 */

// <00341350> ../thirdparty/mimalloc/src/bitmap.c:689
// variable: 1
// function calls: 12
bool mi_bchunk_try_find_and_clear_1(mi_bchunk_t* chunk, size_t n, size_t* pidx)
{
	{
		int i; // 682
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 583
		mi_ctz(size_t x); // 271
		mi_bsf(size_t x,
			size_t* idx);  // 46
		mi_bfield_find_least_bit(mi_bfield_t x,
					size_t* idx);  // 585
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 586
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 178
		mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
							mi_bfield_t mask,
							mi_bfield_t expect,
							bool* all_clear);  // 586
		mi_bchunk_try_find_and_clear_at(mi_bchunk_t* chunk,
						size_t chunk_idx,
						size_t* pidx);  // 683
	}
	mi_bchunk_try_find_and_clear(mi_bchunk_t* chunk,
					size_t* pidx);  // 691
	mi_bchunk_try_find_and_clear_1(mi_bchunk_t* chunk,
					size_t n,
					size_t* pidx);  // 689
} /* size: 0, inline expansions: 2 (113 bytes) */

// <002FE56E> ../thirdparty/mimalloc/src/bitmap.c:689
// variable: 1
inline bool mi_bchunk_try_find_and_clear_1(mi_bchunk_t* chunk, size_t n, size_t* pidx)
{
	const char   __func__; // 55026
} /* size: 0, variables: 1 */

// <002FE4EF> ../thirdparty/mimalloc/src/bitmap.c:694
// variables: 4
inline bool mi_bchunk_try_find_and_clear8_at(mi_bchunk_t* chunk, size_t chunk_idx, size_t* pidx)
{
	const mi_bfield_t  b; // 695
	const mi_bfield_t  has_set8; // 697
	size_t idx; // 701
	const char   __func__; // 9181
} /* size: 0, variables: 4 */

// <002FE1D8> ../thirdparty/mimalloc/src/bitmap.c:718
// variable: 1
// function calls: 9
bool mi_bchunk_try_find_and_clear8(mi_bchunk_t* chunk, size_t* pidx)
{
	{
		int i; // 745
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 695
		mi_ctz(size_t x); // 271
		mi_bsf(size_t x,
			size_t* idx);  // 46
		mi_bfield_find_least_bit(mi_bfield_t x,
					size_t* idx);  // 702
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 178
		mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
							mi_bfield_t mask,
							mi_bfield_t expect,
							bool* all_clear);  // 705
		mi_bchunk_try_find_and_clear8_at(mi_bchunk_t* chunk,
						size_t chunk_idx,
						size_t* pidx);  // 746
	}
} /* size: 0 */

// <0033EDFC> ../thirdparty/mimalloc/src/bitmap.c:752
// function call: 1
bool mi_bchunk_try_find_and_clear_8(mi_bchunk_t* chunk, size_t n, size_t* pidx)
{
	mi_bchunk_try_find_and_clear_8(mi_bchunk_t* chunk,
					size_t n,
					size_t* pidx);  // 752
} /* size: 0, inline expansions: 1 (31 bytes) */

// <002FE195> ../thirdparty/mimalloc/src/bitmap.c:752
// variable: 1
inline bool mi_bchunk_try_find_and_clear_8(mi_bchunk_t* chunk, size_t n, size_t* pidx)
{
	const char   __func__; // 55026
} /* size: 0, variables: 1 */

// <002FDBAB> ../thirdparty/mimalloc/src/bitmap.c:762
// variables: 10
// function calls: 17
bool mi_bchunk_try_find_and_clearNX(mi_bchunk_t* chunk, size_t n, size_t* pidx)
{
	const mi_bfield_t  mask; // 764
	const char   __func__; // 55026
	{
		int i; // 766
		{
			mi_bfield_t b0; // 767
			mi_bfield_t b; // 768
			size_t idx; // 769
			{
				const size_t  bmask; // 775
				__atomic_base<long unsigned int>::compare_exchange_weak(
							__int_type& __i1,
							__int_type __i2,
							memory_order __m1,
							memory_order __m2);  // 1362
				atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
											__atomic_val_t* __i1,
											__atomic_val_t __i2,
											memory_order __m1,
											memory_order __m2);  // 178
				mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
									mi_bfield_t mask,
									mi_bfield_t expect,
									bool* all_clear);  // 778
				__atomic_base<long unsigned int>::load(
					memory_order __m);  // 1334
				atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
									memory_order __m);  // 786
			}
			{
				const size_t  post; // 800
				{
					const size_t  pre; // 802
					{
						const size_t  cidx; // 805
					}
					__atomic_base<long unsigned int>::load(
						memory_order __m);  // 1334
					atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
										memory_order __m);  // 802
					mi_ctz(size_t x); // 27
					mi_bfield_ctz(mi_bfield_t x); // 802
				}
				mi_clz(size_t x); // 31
				mi_bfield_clz(mi_bfield_t x); // 800
			}
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 767
			mi_ctz(size_t x); // 271
			mi_bsf(size_t x,
				size_t* idx);  // 46
			mi_bfield_find_least_bit(mi_bfield_t x,
						size_t* idx);  // 772
		}
	}
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 764
} /* size: 0, variables: 2, inline expansions: 1 (35 bytes) */

// <002FD805> ../thirdparty/mimalloc/src/bitmap.c:824
// variables: 8
// function calls: 9
bool mi_bchunk_try_find_and_clearNC(mi_bchunk_t* chunk, size_t n, size_t* pidx)
{
	const char   __func__; // 55026
	const size_t  skip_count; // 829
	size_t cidx; // 830
	{
		size_t i; // 831
		{
			size_t m; // 833
			mi_bfield_t b; // 836
			size_t ones; // 837
			{
				size_t j; // 847
				__atomic_base<long unsigned int>::load(
					memory_order __m);  // 1334
				atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
									memory_order __m);  // 850
				mi_ctz(size_t x); // 27
				mi_bfield_ctz(mi_bfield_t x); // 851
			}
			mi_clz(size_t x); // 31
			mi_bfield_clz(mi_bfield_t x); // 837
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 836
			mi_bchunk_try_clearN(mi_bchunk_t* chunk,
						size_t cidx,
						size_t n,
						bool* maybe_all_clear);  // 873
		}
	}
} /* size: 0, variables: 3 */

// <002FD7B9> ../thirdparty/mimalloc/src/bitmap.c:891
// variables: 3
inline void mi_bchunk_clear_once_set(mi_bchunk_t* chunk, size_t cidx)
{
	const char   __func__; // 5824
	const size_t  i; // 893
	const size_t  idx; // 894
} /* size: 0, variables: 3 */

// <002FD78C> ../thirdparty/mimalloc/src/bitmap.c:903
// variable: 1
inline bool mi_bchunk_all_are_clear_relaxed(mi_bchunk_t* chunk)
{
	{
		int i; // 920
	}
} /* size: 0 */

// <002FD75F> ../thirdparty/mimalloc/src/bitmap.c:928
// variable: 1
inline bool mi_bchunk_all_are_set_relaxed(mi_bchunk_t* chunk)
{
	{
		int i; // 945
	}
} /* size: 0 */

// <002FD70B> ../thirdparty/mimalloc/src/bitmap.c:953
// variables: 3
bool mi_bchunk_bsr(mi_bchunk_t* chunk, size_t* pidx)
{
	{
		size_t i; // 954
		{
			mi_bfield_t b; // 956
			size_t idx; // 957
		}
	}
} /* size: 0 */

// <002FD6B7> ../thirdparty/mimalloc/src/bitmap.c:966
// variables: 3
bool mi_bchunk_bsr_inv(mi_bchunk_t* chunk, size_t* pidx)
{
	{
		size_t i; // 967
		{
			mi_bfield_t b; // 969
			size_t idx; // 970
		}
	}
} /* size: 0 */

// <002FD670> ../thirdparty/mimalloc/src/bitmap.c:979
// variables: 3
size_t mi_bchunk_popcount(mi_bchunk_t* chunk)
{
	size_t popcount; // 980
	{
		size_t i; // 981
		{
			const mi_bfield_t  b; // 982
		}
	}
} /* size: 0, variables: 1 */

// <002FD63C> ../thirdparty/mimalloc/src/bitmap.c:993
// variable: 1
void mi_bitmap_chunkmap_set(mi_bitmap_t* bitmap, size_t chunk_idx)
{
	const char   __func__; // 15263
} /* size: 0, variables: 1 */

// <003426A0> ../thirdparty/mimalloc/src/bitmap.c:998
// variables: 2
// function calls: 18
bool mi_bitmap_chunkmap_try_clear(mi_bitmap_t* bitmap, size_t chunk_idx)
{
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 999
	{
		int i; // 920
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 921
	}
	mi_bchunk_all_are_clear_relaxed(mi_bchunk_t* chunk); // 1001
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 103
	__atomic_base<long unsigned int>::fetch_and(
			__int_type __i,
			memory_order __m);  // 1530
	atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 104
	mi_bfield_atomic_clear(atomic<long unsigned int>* b,
				size_t idx,
				bool* all_clear);  // 364
	mi_bchunk_clear(mi_bchunk_t* chunk,
			size_t cidx,
			bool* all_clear);  // 1003
	{
		int i; // 920
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 921
	}
	mi_bchunk_all_are_clear_relaxed(mi_bchunk_t* chunk); // 1006
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 95
	mi_bfield_atomic_set(atomic<long unsigned int>* b,
				size_t idx);  // 279
	mi_bchunk_set(mi_bchunk_t* chunk,
			size_t cidx,
			size_t* already_set);  // 1007
} /* size: 0, inline expansions: 14 (157 bytes) */

// <002FD604> ../thirdparty/mimalloc/src/bitmap.c:998
// variable: 1
bool mi_bitmap_chunkmap_try_clear(mi_bitmap_t* bitmap, size_t chunk_idx)
{
	const char   __func__; // 1309
} /* size: 0, variables: 1 */

// <002FD5AD> ../thirdparty/mimalloc/src/bitmap.c:1018
// variables: 3
size_t mi_bitmap_size(size_t bit_count, size_t* pchunk_count)
{
	const char   __func__; // 59076
	const size_t  chunk_count; // 1023
	const size_t  size; // 1025
} /* size: 0, variables: 3 */

// <002FD549> ../thirdparty/mimalloc/src/bitmap.c:1034
// variables: 3
size_t mi_bitmap_init(mi_bitmap_t* bitmap, size_t bit_count, bool already_zero)
{
	size_t chunk_count; // 1035
	const size_t  size; // 1036
	const char   __func__; // 59076
} /* size: 0, variables: 3 */

// <002FD1EE> ../thirdparty/mimalloc/src/bitmap.c:1047
// variables: 6
// function calls: 5
void mi_bchunks_unsafe_setN(mi_bchunk_t* chunks, mi_bchunkmap_t* cmap, size_t idx, size_t n)
{
	const char   __func__; // 15263
	size_t chunk_idx; // 1051
	const size_t  cidx; // 1052
	const size_t  ccount; // 1053
	size_t m; // 1059
	const size_t  mid_chunks; // 1066
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1053
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
			size_t n);  // 1068
} /* size: 0, variables: 6, inline expansions: 5 (80 bytes) */

// <002FD1AA> ../thirdparty/mimalloc/src/bitmap.c:1081
// variable: 1
void mi_bitmap_unsafe_setN(mi_bitmap_t* bitmap, size_t idx, size_t n)
{
	const char   __func__; // 15154
} /* size: 0, variables: 1 */

// <002FCC35> ../thirdparty/mimalloc/src/bitmap.c:1093
// variables: 8
// function calls: 13
bool mi_bitmap_setN(mi_bitmap_t* bitmap, size_t idx, size_t n, size_t* palready_set)
{
	const char   __func__; // 59076
	const size_t  maxbits; // 1095
	size_t chunk_idx; // 1103
	size_t cidx; // 1104
	bool were_allclear; // 1105
	size_t already_set; // 1106
	{
		const size_t  m; // 1108
		size_t _already_set; // 1109
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 118
		mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 994
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 94
		__atomic_base<long unsigned int>::fetch_or(
			__int_type __i,
			memory_order __m);  // 1544
		atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
								__atomic_val_t __i,
								memory_order __m);  // 95
		mi_bfield_atomic_set(atomic<long unsigned int>* b,
					size_t idx);  // 279
		mi_bchunk_set(mi_bchunk_t* chunk,
				size_t cidx,
				size_t* already_set);  // 995
		mi_bitmap_chunkmap_set(mi_bitmap_t* bitmap,
					size_t chunk_idx);  // 1112
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
	mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 1095
} /* size: 0, variables: 6, inline expansions: 4 (44 bytes) */

// <002FC73A> ../thirdparty/mimalloc/src/bitmap.c:1123
// variables: 7
// function calls: 10
bool mi_bitmap_clearN(mi_bitmap_t* bitmap, size_t idx, size_t n)
{
	const char   __func__; // 6958
	const size_t  maxbits; // 1125
	size_t chunk_idx; // 1133
	size_t cidx; // 1134
	bool were_allset; // 1135
	{
		const size_t  m; // 1137
		bool maybe_all_clear; // 1138
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 103
		__atomic_base<long unsigned int>::fetch_and(
				__int_type __i,
				memory_order __m);  // 1530
		atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
								__atomic_val_t __i,
								memory_order __m);  // 104
		mi_bfield_atomic_clear(atomic<long unsigned int>* b,
					size_t idx,
					bool* all_clear);  // 364
		mi_bchunk_clear(mi_bchunk_t* chunk,
				size_t cidx,
				bool* all_clear);  // 369
		mi_bchunk_clearN(mi_bchunk_t* chunk,
				size_t cidx,
				size_t n,
				bool* maybe_all_clear);  // 1139
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
	mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 1125
} /* size: 0, variables: 5, inline expansions: 4 (44 bytes) */

// <002FC215> ../thirdparty/mimalloc/src/bitmap.c:1150
// variables: 6
// function calls: 15
size_t mi_bitmap_popcountN(mi_bitmap_t* bitmap, size_t idx, size_t n)
{
	const char   __func__; // 5857
	const size_t  maxbits; // 1152
	size_t chunk_idx; // 1160
	size_t cidx; // 1161
	size_t popcount; // 1162
	{
		const size_t  m; // 1164
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 404
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 263
		mi_popcount(size_t x); // 35
		mi_bfield_popcount(mi_bfield_t x); // 264
		mi_bfield_atomic_popcount_mask(atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 404
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 224
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 225
		mi_bfield_atomic_is_set(const atomic<long unsigned int>* b,
					const size_t  idx);  // 403
		mi_bchunk_popcountN(mi_bchunk_t* chunk,
					size_t cidx,
					size_t n);  // 1165
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
	mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 1152
} /* size: 0, variables: 5, inline expansions: 4 (44 bytes) */

// <002FC1E3> ../thirdparty/mimalloc/src/bitmap.c:1176
bool mi_bitmap_set(mi_bitmap_t* bitmap, size_t idx)
{
} /* size: 0 */

// <002FC1B1> ../thirdparty/mimalloc/src/bitmap.c:1180
bool mi_bitmap_clear(mi_bitmap_t* bitmap, size_t idx)
{
} /* size: 0 */

// <002FBA96> ../thirdparty/mimalloc/src/bitmap.c:1189
// variables: 6
// function calls: 21
bool mi_bitmap_is_xsetN(mi_xset_t set, mi_bitmap_t* bitmap, size_t idx, size_t n)
{
	const char   __func__; // 58417
	const size_t  maxbits; // 1191
	size_t chunk_idx; // 1199
	size_t cidx; // 1200
	bool xset; // 1201
	{
		const size_t  m; // 1203
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 440
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 243
		mi_bfield_atomic_is_set_mask(const atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 257
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 250
		mi_bfield_atomic_is_clear_mask(const atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 258
		mi_bfield_atomic_is_xset_mask(mi_xset_t set,
						const atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 440
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 225
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 224
		mi_bfield_atomic_is_set(const atomic<long unsigned int>* b,
					const size_t  idx);  // 236
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 230
		mi_bfield_atomic_is_clear(const atomic<long unsigned int>* b,
						const size_t  idx);  // 237
		mi_bfield_atomic_is_xset(mi_xset_t set,
					const atomic<long unsigned int>* b,
					const size_t  idx);  // 439
		mi_bchunk_is_xsetN(mi_xset_t set,
					const mi_bchunk_t* chunk,
					size_t cidx,
					size_t n);  // 1204
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
	mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 1191
} /* size: 0, variables: 5, inline expansions: 4 (28 bytes) */

// <002FBA71> ../thirdparty/mimalloc/src/bitmap.c:1213
bool mi_bitmap_is_all_clear(mi_bitmap_t* bitmap)
{
} /* size: 0 */

// <00342C30> ../thirdparty/mimalloc/src/bitmap.c:1275
// variables: 11
// function calls: 19
bool mi_bitmap_find(mi_bitmap_t* bitmap, size_t tseq, size_t* pidx, void* arg1, void* arg2, mi_bitmap_visit_fun_t* on_find, size_t n)
{
	const size_t  chunkmap_max; // 1277
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1277
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1277
	{
		size_t i; // 1278
		{
			const mi_bfield_t  cmap_entry; // 1280
			size_t hi; // 1281
			{
				size_t eidx; // 1283
				{
					const size_t  _startY; // 1284
					{
						const mi_bfield_t  _cycle_maskY; // 1284
						size_t _bcountY; // 1284
						mi_bfield_t _bY; // 1284
						mi_bfield_mask(size_t bit_count,
								size_t shiftl);  // 1284
						mi_popcount(size_t x); // 35
						mi_bfield_popcount(mi_bfield_t x); // 1284
						{
							const bool  _foundY; // 1284
							mi_ctz(size_t x); // 271
							mi_bsf(size_t x,
								size_t* idx);  // 46
							mi_bfield_find_least_bit(mi_bfield_t x,
										size_t* idx);  // 1284
							mi_bfield_clear_least_bit(mi_bfield_t x); // 1284
							{
								const size_t  chunk_idx; // 1287
								__atomic_base<long unsigned int>::load(
									memory_order __m);  // 1334
								atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
													memory_order __m);  // 118
								mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1288
							}
						}
					}
				}
			}
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 1280
			mi_clz(size_t x); // 283
			mi_bsr(size_t x,
				size_t* idx);  // 53
			mi_bfield_find_highest_bit(mi_bfield_t x,
							size_t* idx);  // 1282
		}
	}
} /* size: 0, variables: 1, inline expansions: 4 (17 bytes) */

// <002FB95A> ../thirdparty/mimalloc/src/bitmap.c:1275
// variables: 12
inline bool mi_bitmap_find(mi_bitmap_t* bitmap, size_t tseq, size_t n, size_t* pidx, mi_bitmap_visit_fun_t* on_find, void* arg1, void* arg2)
{
	const size_t  chunkmap_max; // 1277
	const char   __func__; // 59076
	{
		size_t i; // 1278
		{
			const mi_bfield_t  cmap_entry; // 1280
			size_t hi; // 1281
			{
				size_t eidx; // 1283
				{
					const size_t  _startY; // 1284
					{
						const mi_bfield_t  _cycle_maskY; // 1284
						size_t _bcountY; // 1284
						mi_bfield_t _bY; // 1284
						{
							const bool  _foundY; // 1284
							{
								const size_t  chunk_idx; // 1287
							}
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <002C493F> ../thirdparty/mimalloc/src/bitmap.c:1305
// member variable: 1
// struct size: 8
struct mi_claim_fun_data_s {
	mi_arena_t * arena; /* 0 8 */
};

// <002FB181> ../thirdparty/mimalloc/src/bitmap.c:1309
// variables: 8
// function calls: 20
bool mi_bitmap_try_find_and_claim_visit(mi_bitmap_t* bitmap, size_t chunk_idx, size_t n, size_t* pidx, void* arg1, void* arg2)
{
	const char   __func__; // 63427
	mi_claim_fun_t* claim_fun; // 1312
	mi_claim_fun_data_t* claim_data; // 1313
	size_t cidx; // 1314
	{
		const size_t  slice_index; // 1316
		bool keep_set; // 1318
		{
			const bool  wasclear; // 1328
			mi_bfield_mask(size_t bit_count,
					size_t shiftl);  // 94
			__atomic_base<long unsigned int>::fetch_or(
				__int_type __i,
				memory_order __m);  // 1544
			atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
									__atomic_val_t __i,
									memory_order __m);  // 95
			mi_bfield_atomic_set(atomic<long unsigned int>* b,
						size_t idx);  // 279
			mi_bchunk_set(mi_bchunk_t* chunk,
					size_t cidx,
					size_t* already_set);  // 1328
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 118
		mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
		mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 1317
	}
	{
		int i; // 682
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 583
		mi_ctz(size_t x); // 271
		mi_bsf(size_t x,
			size_t* idx);  // 46
		mi_bfield_find_least_bit(mi_bfield_t x,
					size_t* idx);  // 585
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 586
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 178
		mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
							mi_bfield_t mask,
							mi_bfield_t expect,
							bool* all_clear);  // 586
		mi_bchunk_try_find_and_clear_at(mi_bchunk_t* chunk,
						size_t chunk_idx,
						size_t* pidx);  // 683
	}
	mi_bchunk_try_find_and_clear(mi_bchunk_t* chunk,
					size_t* pidx);  // 1315
} /* size: 0, variables: 4, inline expansions: 1 (77 bytes) */

// <002FB115> ../thirdparty/mimalloc/src/bitmap.c:1343
// variable: 1
bool mi_bitmap_try_find_and_claim(mi_bitmap_t* bitmap, size_t tseq, size_t* pidx, mi_claim_fun_t* claim, mi_arena_t* arena)
{
	mi_claim_fun_data_t claim_data; // 1346
} /* size: 0, variables: 1 */

// <002FAD23> ../thirdparty/mimalloc/src/bitmap.c:1351
// variables: 9
// function calls: 13
bool mi_bitmap_bsr(mi_bitmap_t* bitmap, size_t* idx)
{
	const size_t  chunkmap_max; // 1352
	{
		size_t i; // 1353
		{
			mi_bfield_t cmap; // 1355
			size_t cmap_idx; // 1356
			{
				const size_t  chunk_idx; // 1359
				size_t cidx; // 1360
				{
					size_t i; // 954
					{
						mi_bfield_t b; // 956
						size_t idx; // 957
						__atomic_base<long unsigned int>::load(
							memory_order __m);  // 1334
						atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
											memory_order __m);  // 956
						mi_clz(size_t x); // 283
						mi_bsr(size_t x,
							size_t* idx);  // 958
					}
				}
				mi_bchunk_bsr(mi_bchunk_t* chunk,
						size_t* pidx);  // 1361
			}
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 1355
			mi_clz(size_t x); // 283
			mi_bsr(size_t x,
				size_t* idx);  // 1357
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1352
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1352
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <002FA8C9> ../thirdparty/mimalloc/src/bitmap.c:1371
// variables: 8
// function calls: 16
size_t mi_bitmap_popcount(mi_bitmap_t* bitmap)
{
	size_t popcount; // 1373
	const size_t  chunkmap_max; // 1374
	{
		size_t i; // 1375
		{
			mi_bfield_t cmap_entry; // 1376
			size_t cmap_idx; // 1377
			{
				const size_t  chunk_idx; // 1380
				{
					size_t i; // 981
					{
						const mi_bfield_t  b; // 982
						__atomic_base<long unsigned int>::load(
							memory_order __m);  // 1334
						atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
											memory_order __m);  // 982
						mi_popcount(size_t x); // 35
						mi_bfield_popcount(mi_bfield_t x); // 983
					}
				}
				mi_bchunk_popcount(mi_bchunk_t* chunk); // 1382
			}
			mi_bfield_clear_least_bit(mi_bfield_t x); // 61
			mi_ctz(size_t x); // 271
			mi_bsf(size_t x,
				size_t* idx);  // 46
			mi_bfield_find_least_bit(mi_bfield_t x,
						size_t* idx);  // 60
			mi_bfield_foreach_bit(mi_bfield_t* x,
						size_t* idx);  // 1379
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 1376
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1374
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1374
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <002FA172> ../thirdparty/mimalloc/src/bitmap.c:1391
// variables: 3
// function calls: 25
void mi_bitmap_clear_once_set(mi_bitmap_t* bitmap, size_t idx)
{
	const char   __func__; // 5824
	const size_t  chunk_idx; // 1393
	const size_t  cidx; // 1394
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
	mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 1392
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1395
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 114
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 115
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 127
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 120
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 43
	__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
					size_t amount);  // 120
	_mi_prim_thread_yield(void); // 123
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 124
	mi_bfield_atomic_clear_once_set(atomic<long unsigned int>* b,
					size_t idx);  // 895
	mi_bchunk_clear_once_set(mi_bchunk_t* chunk,
				size_t cidx);  // 1396
} /* size: 0, variables: 3, inline expansions: 25 (496 bytes) */

// <002F9BD3> ../thirdparty/mimalloc/src/bitmap.c:1402
// variables: 11
// function calls: 18
bool _mi_bitmap_forall_set(mi_bitmap_t* bitmap, mi_forall_set_fun_t* visit, mi_arena_t* arena, void* arg)
{
	const size_t  chunkmap_max; // 1404
	{
		size_t i; // 1405
		{
			mi_bfield_t cmap_entry; // 1406
			size_t cmap_idx; // 1407
			{
				const size_t  chunk_idx; // 1410
				const mi_bchunk_t* chunk; // 1412
				{
					size_t j; // 1413
					{
						const size_t  base_idx; // 1414
						mi_bfield_t b; // 1415
						size_t bidx; // 1416
						{
							const size_t  idx; // 1418
						}
						mi_bfield_clear_least_bit(mi_bfield_t x); // 61
						mi_ctz(size_t x); // 271
						mi_bsf(size_t x,
							size_t* idx);  // 46
						mi_bfield_find_least_bit(mi_bfield_t x,
									size_t* idx);  // 60
						mi_bfield_foreach_bit(mi_bfield_t* x,
									size_t* idx);  // 1417
						__atomic_base<long unsigned int>::load(
							memory_order __m);  // 1334
						atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
											memory_order __m);  // 1415
					}
				}
			}
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 1406
			mi_ctz(size_t x); // 271
			mi_bsf(size_t x,
				size_t* idx);  // 46
			mi_bfield_find_least_bit(mi_bfield_t x,
						size_t* idx);  // 60
			mi_bfield_clear_least_bit(mi_bfield_t x); // 61
			mi_bfield_foreach_bit(mi_bfield_t* x,
						size_t* idx);  // 1409
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1404
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1404
} /* size: 318, variables: 1, inline expansions: 4 (17 bytes) */

// <002F935D> ../thirdparty/mimalloc/src/bitmap.c:1431
// variables: 15
// function calls: 24
bool _mi_bitmap_forall_setc_ranges(mi_bitmap_t* bitmap, mi_forall_set_fun_t* visit, mi_arena_t* arena, void* arg)
{
	const size_t  chunkmap_max; // 1433
	const char   __func__; // 40702
	{
		size_t i; // 1434
		{
			mi_bfield_t cmap_entry; // 1435
			size_t cmap_idx; // 1436
			{
				const size_t  chunk_idx; // 1439
				const mi_bchunk_t* chunk; // 1441
				{
					size_t j; // 1442
					{
						const size_t  base_idx; // 1443
						mi_bfield_t b; // 1444
						const size_t  bpopcount; // 1446
						size_t rngcount; // 1447
						size_t bidx; // 1449
						{
							size_t rng; // 1451
							const size_t  idx; // 1455
							mi_bfield_mask(size_t bit_count,
									size_t shiftl);  // 1467
							mi_ctz(size_t x); // 1451
							__atomic_base<long unsigned int>::load(
								memory_order __m);  // 1334
							atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
												memory_order __m);  // 118
							mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1458
							__atomic_base<long unsigned int>::fetch_or(
								__int_type __i,
								memory_order __m);  // 1544
							atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
													__atomic_val_t __i,
													memory_order __m);  // 1462
						}
						mi_ctz(size_t x); // 271
						mi_bsf(size_t x,
							size_t* idx);  // 46
						mi_bfield_find_least_bit(mi_bfield_t x,
									size_t* idx);  // 1450
						mi_popcount(size_t x); // 1446
						__atomic_base<long unsigned int>::exchange(
							__int_type __i,
							memory_order __m);  // 1346
						atomic_exchange_explicit<long unsigned int>(atomic<long unsigned int>* __a,
												__atomic_val_t __i,
												memory_order __m);  // 1444
					}
				}
			}
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 1435
			mi_ctz(size_t x); // 271
			mi_bsf(size_t x,
				size_t* idx);  // 46
			mi_bfield_find_least_bit(mi_bfield_t x,
						size_t* idx);  // 60
			mi_bfield_clear_least_bit(mi_bfield_t x); // 61
			mi_bfield_foreach_bit(mi_bfield_t* x,
						size_t* idx);  // 1438
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1433
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1433
} /* size: 0, variables: 2, inline expansions: 4 (17 bytes) */

// <002F8C68> ../thirdparty/mimalloc/src/bitmap.c:1482
// variables: 15
// function calls: 18
bool _mi_bitmap_forall_setc_rangesn(mi_bitmap_t* bitmap, size_t rngslices, mi_forall_set_fun_t* visit, mi_arena_t* arena, void* arg)
{
	const size_t  chunkmap_max; // 1492
	const char   __func__; // 55026
	{
		size_t i; // 1493
		{
			mi_bfield_t cmap_entry; // 1494
			size_t cmap_idx; // 1495
			{
				const size_t  chunk_idx; // 1498
				const mi_bchunk_t* chunk; // 1500
				{
					size_t j; // 1501
					{
						const size_t  base_idx; // 1502
						mi_bfield_t b; // 1503
						mi_bfield_t skipped; // 1504
						{
							size_t shift; // 1505
							{
								const mi_bfield_t  rngmask; // 1506
								{
									const size_t  idx; // 1508
									{
										mi_bfield_t notyet_visited; // 1511
										__atomic_base<long unsigned int>::fetch_or(
											__int_type __i,
											memory_order __m);  // 1544
										atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
																__atomic_val_t __i,
																memory_order __m);  // 1517
									}
								}
								mi_bfield_mask(size_t bit_count,
										size_t shiftl);  // 1506
							}
						}
						__atomic_base<long unsigned int>::exchange(
							__int_type __i,
							memory_order __m);  // 1346
						atomic_exchange_explicit<long unsigned int>(atomic<long unsigned int>* __a,
												__atomic_val_t __i,
												memory_order __m);  // 1503
						__atomic_base<long unsigned int>::fetch_or(
							__int_type __i,
							memory_order __m);  // 1544
						atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
												__atomic_val_t __i,
												memory_order __m);  // 1528
					}
				}
			}
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 1494
			mi_ctz(size_t x); // 271
			mi_bsf(size_t x,
				size_t* idx);  // 46
			mi_bfield_find_least_bit(mi_bfield_t x,
						size_t* idx);  // 60
			mi_bfield_clear_least_bit(mi_bfield_t x); // 61
			mi_bfield_foreach_bit(mi_bfield_t* x,
						size_t* idx);  // 1497
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 118
	mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 1492
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1492
} /* size: 0, variables: 2, inline expansions: 4 (17 bytes) */

// <002F8C11> ../thirdparty/mimalloc/src/bitmap.c:1542
// variables: 3
size_t mi_bbitmap_size(size_t bit_count, size_t* pchunk_count)
{
	const char   __func__; // 44947
	const size_t  chunk_count; // 1547
	const size_t  size; // 1549
} /* size: 0, variables: 3 */

// <002F8BAD> ../thirdparty/mimalloc/src/bitmap.c:1557
// variables: 3
size_t mi_bbitmap_init(mi_bbitmap_t* bbitmap, size_t bit_count, bool already_zero)
{
	size_t chunk_count; // 1558
	const size_t  size; // 1559
	const char   __func__; // 44947
} /* size: 0, variables: 3 */

// <002F8B69> ../thirdparty/mimalloc/src/bitmap.c:1568
// variable: 1
void mi_bbitmap_unsafe_setN(mi_bbitmap_t* bbitmap, size_t idx, size_t n)
{
	const char   __func__; // 15263
} /* size: 0, variables: 1 */

// <002F8733> ../thirdparty/mimalloc/src/bitmap.c:1574
// variables: 12
// function calls: 13
bool mi_bbitmap_bsr_inv(mi_bbitmap_t* bbitmap, size_t* idx)
{
	const size_t  chunk_count; // 1575
	const size_t  chunkmap_max; // 1576
	size_t skip_at_top; // 1577
	{
		size_t i; // 1578
		{
			mi_bfield_t cmap; // 1580
			size_t cmap_idx; // 1581
			{
				const size_t  mask_top; // 1584
			}
			{
				const size_t  chunk_idx; // 1590
				size_t cidx; // 1591
				{
					size_t i; // 967
					{
						mi_bfield_t b; // 969
						size_t idx; // 970
						__atomic_base<long unsigned int>::load(
							memory_order __m);  // 1334
						atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
											memory_order __m);  // 969
						mi_clz(size_t x); // 283
						mi_bsr(size_t x,
							size_t* idx);  // 971
					}
				}
				mi_bchunk_bsr_inv(mi_bchunk_t* chunk,
							size_t* pidx);  // 1592
			}
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 1580
			mi_clz(size_t x); // 283
			mi_bsr(size_t x,
				size_t* idx);  // 1588
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 1575
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1576
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <002F7E34> ../thirdparty/mimalloc/src/bitmap.c:1607
// variables: 4
// function calls: 30
void mi_bbitmap_set_chunk_bin(mi_bbitmap_t* bbitmap, size_t chunk_idx, mi_chunkbin_t bin)
{
	const char   __func__; // 5824
	{
		mi_chunkbin_t ibin; // 1609
		{
			const bool  was_clear; // 1611
			__atomic_base<long unsigned int>::fetch_or(
				__int_type __i,
				memory_order __m);  // 1544
			atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
									__atomic_val_t __i,
									memory_order __m);  // 95
			mi_bfield_mask(size_t bit_count,
					size_t shiftl);  // 94
			mi_bfield_atomic_set(atomic<long unsigned int>* b,
						size_t idx);  // 279
			mi_bchunk_set(mi_bchunk_t* chunk,
					size_t cidx,
					size_t* already_set);  // 1611
			_mi_theap_default(void); // 429
			_mi_subproc(void); // 1612
			mi_stat_update_mt(mi_stat_count_t* stat,
						int64_t amount);  // 51
			__mi_stat_increase_mt(mi_stat_count_t* stat,
						size_t amount);  // 1612
		}
		{
			const bool  was_set; // 1615
			mi_bfield_mask(size_t bit_count,
					size_t shiftl);  // 103
			__atomic_base<long unsigned int>::fetch_and(
					__int_type __i,
					memory_order __m);  // 1530
			atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
									__atomic_val_t __i,
									memory_order __m);  // 104
			mi_bfield_atomic_clear(atomic<long unsigned int>* b,
						size_t idx,
						bool* all_clear);  // 364
			mi_bchunk_clear(mi_bchunk_t* chunk,
					size_t cidx,
					bool* all_clear);  // 1615
			_mi_theap_default(void); // 429
			_mi_subproc(void); // 1616
			__atomic_base<long int>::fetch_add(
					__int_type __i,
					memory_order __m);  // 1502
			atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
								__atomic_diff_t __i,
								memory_order __m);  // 136
			mi_atomic_addi64_relaxed(volatile int64_t* p,
						int64_t add);  // 26
			__atomic_base<long int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long int>(const atomic<long int>* __a,
							memory_order __m);  // 145
			__atomic_base<long int>::compare_exchange_weak(
						__int_type& __i1,
						__int_type __i2,
						memory_order __m1,
						memory_order __m2);  // 1362
			atomic_compare_exchange_weak_explicit<long int>(atomic<long int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 146
			mi_atomic_maxi64_relaxed(volatile int64_t* p,
						int64_t x);  // 27
			mi_stat_update_mt(mi_stat_count_t* stat,
						int64_t amount);  // 23
			mi_stat_update_mt(mi_stat_count_t* stat,
						int64_t amount);  // 58
			__mi_stat_decrease_mt(mi_stat_count_t* stat,
						size_t amount);  // 1616
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 1608
} /* size: 0, variables: 1, inline expansions: 3 (9 bytes) */

// <002F7BFC> ../thirdparty/mimalloc/src/bitmap.c:1621
// variable: 1
// function calls: 6
mi_chunkbin_t mi_bbitmap_debug_get_bin(const mi_bchunkmap_t* chunkmap_bins, size_t chunk_idx)
{
	{
		mi_chunkbin_t ibin; // 1622
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 225
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 224
		mi_bfield_atomic_is_set(const atomic<long unsigned int>* b,
					const size_t  idx);  // 236
		mi_bfield_atomic_is_xset(mi_xset_t set,
					const atomic<long unsigned int>* b,
					const size_t  idx);  // 439
		mi_bchunk_is_xsetN(mi_xset_t set,
					const mi_bchunk_t* chunk,
					size_t cidx,
					size_t n);  // 1623
	}
} /* size: 0 */

// <002F7BC6> ../thirdparty/mimalloc/src/bitmap.c:1631
// variable: 1
void mi_bbitmap_chunkmap_set_max(mi_bbitmap_t* bbitmap, size_t chunk_idx)
{
	size_t oldmax; // 1632
} /* size: 0, variables: 1 */

// <002F7B85> ../thirdparty/mimalloc/src/bitmap.c:1639
// variable: 1
void mi_bbitmap_chunkmap_set(mi_bbitmap_t* bbitmap, size_t chunk_idx, bool check_all_set)
{
	const char   __func__; // 63973
} /* size: 0, variables: 1 */

// <00341C73> ../thirdparty/mimalloc/src/bitmap.c:1651
// variables: 2
// function calls: 23
bool mi_bbitmap_chunkmap_try_clear(mi_bbitmap_t* bbitmap, size_t chunk_idx)
{
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 1652
	{
		int i; // 920
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 921
	}
	mi_bchunk_all_are_clear_relaxed(mi_bchunk_t* chunk); // 1654
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 103
	__atomic_base<long unsigned int>::fetch_and(
			__int_type __i,
			memory_order __m);  // 1530
	atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 104
	mi_bfield_atomic_clear(atomic<long unsigned int>* b,
				size_t idx,
				bool* all_clear);  // 364
	mi_bchunk_clear(mi_bchunk_t* chunk,
			size_t cidx,
			bool* all_clear);  // 1656
	{
		int i; // 920
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 921
	}
	mi_bchunk_all_are_clear_relaxed(mi_bchunk_t* chunk); // 1659
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 1632
	__atomic_base<long unsigned int>::compare_exchange_strong(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1380
	atomic_compare_exchange_strong_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 1634
	mi_bbitmap_chunkmap_set_max(mi_bbitmap_t* bbitmap,
					size_t chunk_idx);  // 1663
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 95
	mi_bfield_atomic_set(atomic<long unsigned int>* b,
				size_t idx);  // 279
	mi_bchunk_set(mi_bchunk_t* chunk,
			size_t cidx,
			size_t* already_set);  // 1660
} /* size: 0, inline expansions: 19 (194 bytes) */

// <002F7B4D> ../thirdparty/mimalloc/src/bitmap.c:1651
// variable: 1
bool mi_bbitmap_chunkmap_try_clear(mi_bbitmap_t* bbitmap, size_t chunk_idx)
{
	const char   __func__; // 40702
} /* size: 0, variables: 1 */

// <002F73E7> ../thirdparty/mimalloc/src/bitmap.c:1674
// variables: 7
// function calls: 21
bool mi_bbitmap_setN(mi_bbitmap_t* bbitmap, size_t idx, size_t n)
{
	const char   __func__; // 44947
	const size_t  maxbits; // 1676
	size_t chunk_idx; // 1684
	size_t cidx; // 1685
	bool were_allclear; // 1686
	{
		const size_t  m; // 1688
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 273
		mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 1640
		{
			int i; // 945
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 946
		}
		mi_bchunk_all_are_set_relaxed(mi_bchunk_t* chunk); // 1642
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 94
		__atomic_base<long unsigned int>::fetch_or(
			__int_type __i,
			memory_order __m);  // 1544
		atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
								__atomic_val_t __i,
								memory_order __m);  // 95
		mi_bfield_atomic_set(atomic<long unsigned int>* b,
					size_t idx);  // 279
		mi_bchunk_set(mi_bchunk_t* chunk,
				size_t cidx,
				size_t* already_set);  // 1647
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 1632
		__atomic_base<long unsigned int>::compare_exchange_strong(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1380
		atomic_compare_exchange_strong_explicit<long unsigned int>(atomic<long unsigned int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 1634
		mi_bbitmap_chunkmap_set_max(mi_bbitmap_t* bbitmap,
						size_t chunk_idx);  // 1648
		mi_bbitmap_chunkmap_set(mi_bbitmap_t* bbitmap,
					size_t chunk_idx,
					bool check_all_set);  // 1690
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 277
	mi_bbitmap_max_bits(const mi_bbitmap_t* bbitmap); // 1676
} /* size: 0, variables: 5, inline expansions: 4 (28 bytes) */

// <002F6FB0> ../thirdparty/mimalloc/src/bitmap.c:1702
// variables: 5
// function calls: 8
bool mi_bbitmap_try_clearNC(mi_bbitmap_t* bbitmap, size_t idx, size_t n)
{
	const char   __func__; // 15263
	const size_t  chunk_idx; // 1707
	const size_t  cidx; // 1708
	bool maybe_all_clear; // 1712
	const bool  cleared; // 1713
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 277
	mi_bbitmap_max_bits(const mi_bbitmap_t* bbitmap); // 1705
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 1710
	mi_bchunk_try_clearN(mi_bchunk_t* chunk,
				size_t cidx,
				size_t n,
				bool* maybe_all_clear);  // 1713
} /* size: 0, variables: 5, inline expansions: 8 (48 bytes) */

// <002F6893> ../thirdparty/mimalloc/src/bitmap.c:1724
// variables: 6
// function calls: 21
bool mi_bbitmap_is_xsetN(mi_xset_t set, mi_bbitmap_t* bbitmap, size_t idx, size_t n)
{
	const char   __func__; // 5857
	const size_t  maxbits; // 1726
	size_t chunk_idx; // 1734
	size_t cidx; // 1735
	bool xset; // 1736
	{
		const size_t  m; // 1738
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 440
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 243
		mi_bfield_atomic_is_set_mask(const atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 257
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 250
		mi_bfield_atomic_is_clear_mask(const atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 258
		mi_bfield_atomic_is_xset_mask(mi_xset_t set,
						const atomic<long unsigned int>* b,
						mi_bfield_t mask);  // 440
		mi_bfield_mask(size_t bit_count,
				size_t shiftl);  // 225
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 224
		mi_bfield_atomic_is_set(const atomic<long unsigned int>* b,
					const size_t  idx);  // 236
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 230
		mi_bfield_atomic_is_clear(const atomic<long unsigned int>* b,
						const size_t  idx);  // 237
		mi_bfield_atomic_is_xset(mi_xset_t set,
					const atomic<long unsigned int>* b,
					const size_t  idx);  // 439
		mi_bchunk_is_xsetN(mi_xset_t set,
					const mi_bchunk_t* chunk,
					size_t cidx,
					size_t n);  // 1739
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 277
	mi_bbitmap_max_bits(const mi_bbitmap_t* bbitmap); // 1726
} /* size: 0, variables: 5, inline expansions: 4 (28 bytes) */

// <002F5C2E> ../thirdparty/mimalloc/src/bitmap.c:1763
// variables: 30
// function calls: 31
bool mi_bbitmap_try_find_and_clear_generic(mi_bbitmap_t* bbitmap, size_t tseq, size_t n, size_t* pidx, mi_bchunk_try_find_and_clear_fun_t* on_find)
{
	const size_t  cmap_max_count; // 1766
	const size_t  chunk_acc; // 1767
	const size_t  cmap_acc; // 1768
	const size_t  cmap_acc_bits; // 1769
	const char   __func__; // 42738
	const mi_bfield_t  cmap_mask; // 1773
	const size_t  cmap_cycle; // 1774
	const mi_chunkbin_t  bbin; // 1775
	size_t cmap_idx; // 1777
	{
		const size_t  _startX; // 1778
		{
			const mi_bfield_t  _cycle_maskX; // 1778
			size_t _bcountX; // 1778
			mi_bfield_t _bX; // 1778
			{
				const bool  _foundX; // 1778
				{
					const mi_bfield_t  cmap_entry; // 1781
					const size_t  cmap_entry_cycle; // 1782
					mi_bfield_t cmap_bins; // 1788
					{
						mi_chunkbin_t ibin; // 1790
						{
							const mi_bfield_t  cmap_bin; // 1791
							__atomic_base<long unsigned int>::load(
								memory_order __m);  // 1334
							atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
												memory_order __m);  // 1791
						}
					}
					{
						mi_chunkbin_t ibin; // 1800
						{
							const mi_bfield_t  cmap_bin; // 1805
							size_t eidx; // 1806
							{
								const size_t  _startY; // 1807
								{
									const mi_bfield_t  _cycle_maskY; // 1807
									size_t _bcountY; // 1807
									mi_bfield_t _bY; // 1807
									{
										const bool  _foundY; // 1807
										{
											const size_t  chunk_idx; // 1813
											mi_bchunk_t* chunk; // 1814
											size_t cidx; // 1816
											__atomic_base<long unsigned int>::load(
												memory_order __m);  // 1334
											atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
																memory_order __m);  // 273
											mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 277
											mi_bbitmap_max_bits(const mi_bbitmap_t* bbitmap); // 1823
										}
										mi_ctz(size_t x); // 271
										mi_bsf(size_t x,
											size_t* idx);  // 46
										mi_bfield_find_least_bit(mi_bfield_t x,
													size_t* idx);  // 1807
										mi_bfield_clear_least_bit(mi_bfield_t x); // 1807
									}
									mi_bfield_mask(size_t bit_count,
											size_t shiftl);  // 1807
									mi_popcount(size_t x); // 35
									mi_bfield_popcount(mi_bfield_t x); // 1807
								}
							}
						}
						mi_chunkbin_inc(mi_chunkbin_t bbin); // 1802
					}
					__atomic_base<long unsigned int>::load(
						memory_order __m);  // 1334
					atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
										memory_order __m);  // 1781
				}
				mi_ctz(size_t x); // 271
				mi_bsf(size_t x,
					size_t* idx);  // 46
				mi_bfield_find_least_bit(mi_bfield_t x,
							size_t* idx);  // 1778
				mi_bfield_clear_least_bit(mi_bfield_t x); // 1778
			}
			mi_bfield_mask(size_t bit_count,
					size_t shiftl);  // 1778
			mi_popcount(size_t x); // 35
			mi_bfield_popcount(mi_bfield_t x); // 1778
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 1766
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1766
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 1767
	mi_bfield_mask(size_t bit_count,
			size_t shiftl);  // 1773
	mi_chunkbin_of(size_t slice_count); // 1775
} /* size: 0, variables: 9, inline expansions: 8 (272 bytes) */

// <002F5BEF> ../thirdparty/mimalloc/src/bitmap.c:1844
bool mi_bbitmap_try_find_and_clear(mi_bbitmap_t* bbitmap, size_t tseq, size_t* pidx)
{
} /* size: 0 */

// <002F5BB0> ../thirdparty/mimalloc/src/bitmap.c:1848
bool mi_bbitmap_try_find_and_clear8(mi_bbitmap_t* bbitmap, size_t tseq, size_t* pidx)
{
} /* size: 0 */

// <002F5B5B> ../thirdparty/mimalloc/src/bitmap.c:1856
// variable: 1
bool mi_bbitmap_try_find_and_clearNX(mi_bbitmap_t* bbitmap, size_t tseq, size_t n, size_t* pidx)
{
	const char   __func__; // 22194
} /* size: 0, variables: 1 */

// <002F5B06> ../thirdparty/mimalloc/src/bitmap.c:1861
// variable: 1
bool mi_bbitmap_try_find_and_clearNC(mi_bbitmap_t* bbitmap, size_t tseq, size_t n, size_t* pidx)
{
	const char   __func__; // 22194
} /* size: 0, variables: 1 */

// <002F5A7F> ../thirdparty/mimalloc/src/bitmap.c:1872
// variables: 5
bool mi_bchunk_try_clearN_(mi_bbitmap_t* bbitmap, size_t chunk_idx, size_t n)
{

rollback: // 1887
	const char   __func__; // 15154
	size_t m; // 1875
	size_t count; // 1876
	{
		mi_bchunk_t* chunk; // 1878
	}
	{
		mi_bchunk_t* chunk; // 1891
	}
} /* size: 0, variables: 3, goto labels: 1 */

// <002F50E2> ../thirdparty/mimalloc/src/bitmap.c:1902
// variables: 10
// function calls: 26
bool mi_bbitmap_try_find_and_clearN_(mi_bbitmap_t* bbitmap, size_t tseq, size_t n, size_t* pidx)
{
	const char   __func__; // 22194
	const size_t  chunk_max; // 1906
	const size_t  chunk_req; // 1907
	size_t chunk_idx; // 1911
	{
		size_t count; // 1914
		{
			const mi_bchunk_t* chunk; // 1917
			{
				int i; // 945
				__atomic_base<long unsigned int>::load(
					memory_order __m);  // 1334
				atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
									memory_order __m);  // 946
			}
			mi_bchunk_all_are_set_relaxed(mi_bchunk_t* chunk); // 1918
		}
		{
			size_t i; // 1932
		}

rollback: // 1887
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 273
		mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 277
		mi_bbitmap_max_bits(const mi_bbitmap_t* bbitmap); // 1873
		{
			mi_bchunk_t* chunk; // 1878
			mi_bfield_mask(size_t bit_count,
					size_t shiftl);  // 455
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 185
			__atomic_base<long unsigned int>::compare_exchange_weak(
						__int_type& __i1,
						__int_type __i2,
						memory_order __m1,
						memory_order __m2);  // 1362
			atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 178
			mi_bfield_atomic_try_clear_mask_of(atomic<long unsigned int>* b,
								mi_bfield_t mask,
								mi_bfield_t expect,
								bool* all_clear);  // 186
			mi_bfield_atomic_try_clear_mask(atomic<long unsigned int>* b,
							mi_bfield_t mask,
							bool* all_clear);  // 455
			mi_bchunk_try_clearNX(mi_bchunk_t* chunk,
						size_t cidx,
						size_t n,
						bool* pmaybe_all_clear);  // 557
			mi_bchunk_try_clearN(mi_bchunk_t* chunk,
						size_t cidx,
						size_t n,
						bool* maybe_all_clear);  // 1879
		}
		{
			mi_bchunk_t* chunk; // 1891
			mi_bchunk_setN(mi_bchunk_t* chunk,
					size_t cidx,
					size_t n,
					size_t* already_set);  // 1892
		}
		mi_bchunk_try_clearN_(mi_bbitmap_t* bbitmap,
					size_t chunk_idx,
					size_t n);  // 1930
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 273
		mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 277
		mi_bbitmap_max_bits(const mi_bbitmap_t* bbitmap); // 1935
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 273
	mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 1906
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1907
} /* size: 0, variables: 4, inline expansions: 4 (39 bytes) */

