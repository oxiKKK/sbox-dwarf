
//
// thirdparty/mimalloc/src/free.c
//
//	referenced by: libtier0.so
//
//	functions: 40
//

// <0034FAFA> ../thirdparty/mimalloc/src/free.c:28
// variables: 3
// function calls: 42
void mi_free_block_local(mi_page_t* page, mi_block_t* block, bool check_full, bool track_stats, bool was_guarded)
{
	mi_rotr(size_t x,
		size_t r);  // 1032
	mi_ptr_decode(const void* null,
			const mi_encoded_t  x,
			const uintptr_t* keys);  // 1055
	mi_block_nextx(const void* null,
			const mi_block_t* block,
			const uintptr_t* keys);  // 493
	mi_is_in_heap_region(const void* p); // 670
	__atomic_base<mi_page_s::load(
		memory_order __m);  // 587
	atomic<mi_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_page_s**>(const atomic<mi_page_s**>* __a,
						memory_order __m);  // 649
	_mi_page_map_at(size_t idx); // 661
	_mi_page_map_index(const void* p,
				size_t* sub_idx);  // 660
	_mi_checked_ptr_page(const void* p); // 672
	_mi_ptr_page(const void* p); // 1026
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_start(const mi_page_t* page); // 696
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 705
	mi_page_contains_address(const mi_page_t* page,
				const void* p);  // 1027
	mi_is_in_same_page(const void* p,
				const void* q);  // 495
	mi_check_is_double_free(const mi_page_t* page,
				const mi_block_t* block);  // 32
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 518
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 526
	mi_page_decode_padding(const mi_page_t* page,
				const mi_block_t* block,
				size_t* delta,
				size_t* bsize);  // 581
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 586
	{
		uint8_t* fill; // 587
		const size_t  maxpad; // 588
		{
			size_t i; // 590
		}
	}
	mi_verify_padding(const mi_page_t* page,
				const mi_block_t* block,
				size_t* size,
				size_t* wrong);  // 605
	mi_check_padding(const mi_page_t* page,
			const mi_block_t* block);  // 33
	mi_page_block_size(const mi_page_t* page); // 36
	memset(void* __dest,
		int __ch,
		size_t __len);  // 36
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1067
	mi_block_set_nextx(const void* null,
				mi_block_t* block,
				const mi_block_t* next,
				const uintptr_t* keys);  // 1093
	mi_block_set_next(const mi_page_t* page,
				mi_block_t* block,
				const mi_block_t* next);  // 41
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 48
	mi_free_block_local(mi_page_t* page,
				mi_block_t* block,
				bool was_guarded,
				bool track_stats,
				bool check_full);  // 28
} /* size: 0, inline expansions: 42 (1545 bytes) */

// <0033A2AE> ../thirdparty/mimalloc/src/free.c:28
inline void mi_free_block_local(mi_page_t* page, mi_block_t* block, bool was_guarded, bool track_stats, bool check_full)
{
} /* size: 0 */

// <00340C7F> ../thirdparty/mimalloc/src/free.c:57
// variables: 3
void mi_free_block_mt(bool was_guarded, mi_block_t* block, mi_page_t* page)
{
	mi_thread_free_t tf_new; // 74
	mi_thread_free_t tf_old; // 75
	const bool  is_owned_now; // 82
} /* size: 35, variables: 3 */

// <0033A23F> ../thirdparty/mimalloc/src/free.c:57
// variables: 5
inline void mi_free_block_mt(mi_page_t* page, mi_block_t* block, bool was_guarded)
{
	mi_thread_free_t tf_new; // 74
	mi_thread_free_t tf_old; // 75
	const bool  is_owned_now; // 82
	const char   __func__; // 6958
	{
		size_t dbgsize; // 67
	}
} /* size: 0, variables: 4 */

// <0033A1E3> ../thirdparty/mimalloc/src/free.c:94
// variables: 4
mi_block_t* _mi_page_ptr_unalign(const mi_page_t* page, const void* p)
{
	const char   __func__; // 65207
	const size_t  diff; // 97
	const size_t  block_size; // 98
	const size_t  adjust; // 99
} /* size: 0, variables: 4 */

// <0033A1AF> ../thirdparty/mimalloc/src/free.c:116
inline bool mi_block_check_unguard(mi_page_t* page, mi_block_t* block, void* p)
{
} /* size: 0 */

// <0033D08D> ../thirdparty/mimalloc/src/free.c:122
mi_block_t* mi_validate_block_from_ptr(void* p, const mi_page_t* page)
{
} /* size: 35 */

// <0033A17C> ../thirdparty/mimalloc/src/free.c:122
// variable: 1
inline mi_block_t* mi_validate_block_from_ptr(const mi_page_t* page, void* p)
{
	const char   __func__; // 595
} /* size: 0, variables: 1 */

// <00339EEF> ../thirdparty/mimalloc/src/free.c:135
// variables: 3
// function calls: 6
void mi_free_generic_local(mi_page_t* page, void* p)
{
	const char   __func__; // 15154
	const mi_block_t* block; // 137
	const bool  was_guarded; // 138
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 854
	mi_page_has_interior_pointers(const mi_page_t* page); // 137
	mi_validate_block_from_ptr(const mi_page_t* page,
					void* p);  // 137
} /* size: 0, variables: 3, inline expansions: 6 (43 bytes) */

// <003395DB> ../thirdparty/mimalloc/src/free.c:143
// variables: 4
// function calls: 28
void mi_free_generic_mt(mi_page_t* page, void* p)
{
	const char   __func__; // 58417
	const mi_block_t* block; // 145
	const bool  was_guarded; // 146
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 854
	mi_page_has_interior_pointers(const mi_page_t* page); // 145
	{
		size_t dbgsize; // 67
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
				size_t n);  // 1255
		_mi_memset_aligned(void* dst,
					int val,
					size_t n);  // 69
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 75
	mi_tf_create(mi_block_t* block,
			bool owned);  // 78
	mi_tf_block(mi_thread_free_t tf); // 77
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1067
	mi_block_set_nextx(const void* null,
				mi_block_t* block,
				const mi_block_t* next,
				const uintptr_t* keys);  // 1093
	mi_block_set_next(const mi_page_t* page,
				mi_block_t* block,
				const mi_block_t* next);  // 77
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 79
	mi_tf_is_owned(mi_thread_free_t tf); // 82
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 84
	mi_free_block_mt(mi_page_t* page,
			mi_block_t* block,
			bool was_guarded);  // 147
	mi_validate_block_from_ptr(const mi_page_t* page,
					void* p);  // 145
} /* size: 0, variables: 3, inline expansions: 23 (366 bytes) */

// <0033954B> ../thirdparty/mimalloc/src/free.c:151
void _mi_free_generic(mi_page_t* page, bool is_local, void* p)
{
} /* size: 0 */

// <00339517> ../thirdparty/mimalloc/src/free.c:159
// variable: 1
inline mi_page_t* mi_validate_ptr_page(const void* p, const char* msg)
{
	mi_page_t* page; // 167
} /* size: 0, variables: 1 */

// <003394B0> ../thirdparty/mimalloc/src/free.c:179
// variables: 4
inline void mi_free_ex(void* p, size_t* usable, mi_page_t* page)
{
	const char   __func__; // 46843
	const mi_threadid_t  xtid; // 185
	{
		const mi_block_t* block; // 188
	}
	{
		const mi_block_t* block; // 198
	}
} /* size: 0, variables: 2 */

// <00338925> ../thirdparty/mimalloc/src/free.c:207
// variables: 4
// function calls: 35
void mi_free(void* p)
{
	const mi_page_t* page; // 208
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 163
	mi_validate_ptr_page(const void* p,
				const char* msg);  // 159
	mi_validate_ptr_page(const void* p,
				const char* msg);  // 208
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 185
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 185
	{
		const mi_block_t* block; // 188
		mi_validate_block_from_ptr(const mi_page_t* page,
						void* p);  // 188
	}
	{
		const mi_block_t* block; // 198
		mi_validate_block_from_ptr(const mi_page_t* page,
						void* p);  // 198
		{
			size_t dbgsize; // 67
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
					size_t n);  // 1255
			_mi_memset_aligned(void* dst,
						int val,
						size_t n);  // 69
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 75
		mi_tf_create(mi_block_t* block,
				bool owned);  // 78
		mi_tf_block(mi_thread_free_t tf); // 77
		mi_rotl(size_t x,
			size_t r);  // 1038
		mi_ptr_encode(const void* null,
				const void* p,
				const uintptr_t* keys);  // 1067
		mi_block_set_nextx(const void* null,
					mi_block_t* block,
					const mi_block_t* next,
					const uintptr_t* keys);  // 1093
		mi_block_set_next(const mi_page_t* page,
					mi_block_t* block,
					const mi_block_t* next);  // 77
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 79
		mi_tf_is_owned(mi_thread_free_t tf); // 82
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 816
		mi_page_xthread_id(const mi_page_t* page); // 821
		mi_page_thread_id(const mi_page_t* page); // 877
		mi_page_is_abandoned(const mi_page_t* page); // 84
		mi_free_block_mt(mi_page_t* page,
				mi_block_t* block,
				bool was_guarded);  // 199
	}
	mi_free_ex(void* p,
			size_t* usable,
			mi_page_t* page);  // 209
} /* size: 0, variables: 1, inline expansions: 11 (889 bytes) */

// <00337D31> ../thirdparty/mimalloc/src/free.c:212
// variables: 4
// function calls: 37
void mi_ufree(void* p, size_t* usable)
{
	const mi_page_t* page; // 213
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 163
	mi_validate_ptr_page(const void* p,
				const char* msg);  // 159
	mi_validate_ptr_page(const void* p,
				const char* msg);  // 213
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 183
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 185
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 185
	{
		const mi_block_t* block; // 188
		mi_validate_block_from_ptr(const mi_page_t* page,
						void* p);  // 188
	}
	{
		const mi_block_t* block; // 198
		mi_validate_block_from_ptr(const mi_page_t* page,
						void* p);  // 198
		{
			size_t dbgsize; // 67
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
					size_t n);  // 1255
			_mi_memset_aligned(void* dst,
						int val,
						size_t n);  // 69
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 75
		mi_tf_create(mi_block_t* block,
				bool owned);  // 78
		mi_tf_block(mi_thread_free_t tf); // 77
		mi_rotl(size_t x,
			size_t r);  // 1038
		mi_ptr_encode(const void* null,
				const void* p,
				const uintptr_t* keys);  // 1067
		mi_block_set_nextx(const void* null,
					mi_block_t* block,
					const mi_block_t* next,
					const uintptr_t* keys);  // 1093
		mi_block_set_next(const mi_page_t* page,
					mi_block_t* block,
					const mi_block_t* next);  // 77
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 79
		mi_tf_is_owned(mi_thread_free_t tf); // 82
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 816
		mi_page_xthread_id(const mi_page_t* page); // 821
		mi_page_thread_id(const mi_page_t* page); // 877
		mi_page_is_abandoned(const mi_page_t* page); // 84
		mi_free_block_mt(mi_page_t* page,
				mi_block_t* block,
				bool was_guarded);  // 199
	}
	mi_free_ex(void* p,
			size_t* usable,
			mi_page_t* page);  // 214
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <00337CE6> ../thirdparty/mimalloc/src/free.c:217
void mi_free_small(void* p)
{
} /* size: 0 */

// <00337CC6> ../thirdparty/mimalloc/src/free.c:257
bool mi_abandoned_page_try_free(mi_page_t* page)
{
} /* size: 0 */

// <00352D17> ../thirdparty/mimalloc/src/free.c:267
// function calls: 8
bool mi_abandoned_page_try_reabandon_to_mapped(mi_page_t* page)
{
	mi_page_is_mostly_used(const mi_page_t* page); // 271
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 881
	mi_page_is_abandoned_mapped(const mi_page_t* page); // 272
	mi_page_is_full(const mi_page_t* page); // 274
	mi_abandoned_page_try_reabandon_to_mapped(mi_page_t* page); // 267
} /* size: 0, inline expansions: 8 (139 bytes) */

// <00337C9B> ../thirdparty/mimalloc/src/free.c:267
// variable: 1
bool mi_abandoned_page_try_reabandon_to_mapped(mi_page_t* page)
{
	const char   __func__; // 16052
} /* size: 0, variables: 1 */

// <00337C4D> ../thirdparty/mimalloc/src/free.c:281
// variables: 3
void mi_abandoned_page_unown_from_free(mi_page_t* page, mi_block_t* expected_thread_free)
{
	const char   __func__; // 22760
	mi_thread_free_t tf_expect; // 286
	mi_thread_free_t tf_new; // 287
} /* size: 0, variables: 3 */

// <00337BFC> ../thirdparty/mimalloc/src/free.c:305
// variables: 2
inline bool mi_page_queue_len_is_atmost(mi_theap_t* theap, size_t block_size, long int atmost)
{
	const mi_page_queue_t* pq; // 307
	const char   __func__; // 5670
} /* size: 0, variables: 2 */

// <00336FB4> ../thirdparty/mimalloc/src/free.c:313
// variables: 3
// function calls: 46
bool mi_abandoned_page_try_reclaim(mi_page_t* page, long int reclaim_on_free)
{
	const char   __func__; // 40702
	const mi_theap_t* theap; // 332
	long int max_reclaim; // 337
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 321
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 322
	mi_page_all_free(const mi_page_t* page); // 323
	_mi_theap_default(void); // 499
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 499
	_mi_thread_is_initialized(void); // 329
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 536
	_mi_theap_cached(void); // 516
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 520
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 525
	_mi_heap_theap_peek(const mi_heap_t* heap); // 535
	_mi_page_associated_theap_peek(mi_page_t* page); // 332
	_mi_option_get_fast(mi_option_t option); // 340
	_mi_bin(size_t size); // 804
	mi_page_queue(const mi_theap_t* theap,
			size_t size);  // 307
	mi_page_queue_len_is_atmost(mi_theap_t* theap,
					size_t block_size,
					long int atmost);  // 351
	__mi_stat_counter_increase(mi_stat_counter_t* stat,
					size_t amount);  // 359
	mi_page_is_mostly_used(const mi_page_t* page); // 344
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 345
	mi_arena_is_suitable(mi_arena_t* arena,
				mi_arena_t* req_arena);  // 60
	mi_arena_is_suitable(mi_arena_t* arena,
				mi_arena_t* req_arena);  // 47
	mi_arena_is_suitable(mi_arena_t* arena,
				mi_arena_t* req_arena);  // 57
	_mi_arena_memid_is_suitable(mi_memid_t memid,
					mi_arena_t* request_arena);  // 345
	_mi_option_get_fast(mi_option_t option); // 347
} /* size: 0, variables: 3, inline expansions: 46 (978 bytes) */

// <0033646D> ../thirdparty/mimalloc/src/free.c:365
// variables: 2
// function calls: 35
void mi_free_try_collect_mt(mi_page_t* page, mi_block_t* mt_free)
{
	const char   __func__; // 15263
	const long int  reclaim_on_free; // 383
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 367
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 368
	_mi_page_free_collect_partly(mi_page_t* page,
					mi_block_t* head);  // 376
	_mi_option_get_fast(mi_option_t option); // 383
	mi_page_is_singleton(const mi_page_t* page); // 385
	mi_page_all_free(const mi_page_t* page); // 385
	mi_page_is_full(const mi_page_t* page); // 386
	mi_abandoned_page_try_free(mi_page_t* page); // 257
	mi_abandoned_page_try_free(mi_page_t* page); // 390
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 282
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 283
	mi_page_all_free(const mi_page_t* page); // 284
	mi_tf_create(mi_block_t* block,
			bool owned);  // 286
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 288
	mi_tf_is_owned(mi_thread_free_t tf); // 289
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 297
	mi_page_all_free(const mi_page_t* page); // 259
	mi_abandoned_page_try_free(mi_page_t* page); // 294
	mi_abandoned_page_unown_from_free(mi_page_t* page,
						mi_block_t* expected_thread_free);  // 397
} /* size: 0, variables: 2, inline expansions: 35 (516 bytes) */

// <00336185> ../thirdparty/mimalloc/src/free.c:406
// variables: 6
// function calls: 6
size_t mi_page_usable_aligned_size_of(const mi_page_t* page, const void* p)
{
	const mi_block_t* block; // 407
	const bool  is_guarded; // 408
	const size_t  size; // 409
	const ptrdiff_t  adjust; // 410
	const char   __func__; // 55026
	const size_t  aligned_size; // 412
	mi_page_start(const mi_page_t* page); // 97
	mi_page_block_size(const mi_page_t* page); // 98
	_mi_is_power_of_two(uintptr_t x); // 99
	_mi_page_ptr_unalign(const mi_page_t* page,
				const void* p);  // 94
	_mi_page_ptr_unalign(const mi_page_t* page,
				const void* p);  // 407
	mi_page_usable_size_of(const mi_page_t* page,
				const mi_block_t* block,
				bool is_guarded);  // 409
} /* size: 0, variables: 6, inline expansions: 6 (163 bytes) */

// <0033614B> ../thirdparty/mimalloc/src/free.c:416
// variable: 1
inline size_t _mi_usable_size(const void* p, const mi_page_t* page)
{
	{
		const mi_block_t* block; // 419
	}
} /* size: 0 */

// <00335D4E> ../thirdparty/mimalloc/src/free.c:428
// variables: 2
// function calls: 12
size_t mi_usable_size(const void* p)
{
	const mi_page_t* page; // 429
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 163
	mi_validate_ptr_page(const void* p,
				const char* msg);  // 159
	mi_validate_ptr_page(const void* p,
				const char* msg);  // 429
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 854
	mi_page_has_interior_pointers(const mi_page_t* page); // 418
	{
		const mi_block_t* block; // 419
		mi_page_usable_size_of(const mi_page_t* page,
					const mi_block_t* block,
					bool is_guarded);  // 420
	}
	_mi_usable_size(const void* p,
			const mi_page_t* page);  // 430
} /* size: 0, variables: 1, inline expansions: 11 (411 bytes) */

// <00335D00> ../thirdparty/mimalloc/src/free.c:438
// variables: 3
void mi_free_size(void* p, size_t size)
{
	const mi_page_t* page; // 441
	const size_t  available; // 442
	const char   __func__; // 44795
} /* size: 0, variables: 3 */

// <00335C38> ../thirdparty/mimalloc/src/free.c:448
// variable: 1
void mi_free_size_aligned(void* p, size_t size, size_t alignment)
{
	const char   __func__; // 65207
} /* size: 0, variables: 1 */

// <00335B8C> ../thirdparty/mimalloc/src/free.c:454
// variable: 1
void mi_free_aligned(void* p, size_t alignment)
{
	const char   __func__; // 44947
} /* size: 0, variables: 1 */

// <00335B52> ../thirdparty/mimalloc/src/free.c:468
bool mi_list_contains(const mi_page_t* page, const mi_block_t* list, const mi_block_t* elem)
{
} /* size: 0 */

// <00334BDC> ../thirdparty/mimalloc/src/free.c:476
// function calls: 65
bool mi_check_is_double_freex(const mi_page_t* page, const mi_block_t* block)
{
	mi_rotr(size_t x,
		size_t r);  // 1032
	mi_ptr_decode(const void* null,
			const mi_encoded_t  x,
			const uintptr_t* keys);  // 1055
	mi_block_nextx(const void* null,
			const mi_block_t* block,
			const uintptr_t* keys);  // 1077
	mi_is_in_heap_region(const void* p); // 670
	__atomic_base<mi_page_s::load(
		memory_order __m);  // 587
	atomic<mi_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_page_s**>(const atomic<mi_page_s**>* __a,
						memory_order __m);  // 649
	_mi_page_map_at(size_t idx); // 661
	_mi_page_map_index(const void* p,
				size_t* sub_idx);  // 660
	_mi_checked_ptr_page(const void* p); // 672
	_mi_ptr_page(const void* p); // 1026
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_start(const mi_page_t* page); // 696
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 705
	mi_page_contains_address(const mi_page_t* page,
				const void* p);  // 1027
	mi_is_in_same_page(const void* p,
				const void* q);  // 1080
	mi_page_block_size(const mi_page_t* page); // 1081
	mi_block_next(const mi_page_t* page,
			const mi_block_t* block);  // 471
	mi_list_contains(const mi_page_t* page,
			const mi_block_t* list,
			const mi_block_t* elem);  // 479
	mi_rotr(size_t x,
		size_t r);  // 1032
	mi_ptr_decode(const void* null,
			const mi_encoded_t  x,
			const uintptr_t* keys);  // 1055
	mi_block_nextx(const void* null,
			const mi_block_t* block,
			const uintptr_t* keys);  // 1077
	mi_is_in_heap_region(const void* p); // 670
	_mi_page_map_index(const void* p,
				size_t* sub_idx);  // 660
	__atomic_base<mi_page_s::load(
		memory_order __m);  // 587
	atomic<mi_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_page_s**>(const atomic<mi_page_s**>* __a,
						memory_order __m);  // 649
	_mi_page_map_at(size_t idx); // 661
	_mi_checked_ptr_page(const void* p); // 672
	_mi_ptr_page(const void* p); // 1026
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_start(const mi_page_t* page); // 696
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 705
	mi_page_contains_address(const mi_page_t* page,
				const void* p);  // 1027
	mi_is_in_same_page(const void* p,
				const void* q);  // 1080
	mi_page_block_size(const mi_page_t* page); // 1081
	mi_block_next(const mi_page_t* page,
			const mi_block_t* block);  // 471
	mi_list_contains(const mi_page_t* page,
			const mi_block_t* list,
			const mi_block_t* elem);  // 480
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 933
	mi_tf_block(mi_thread_free_t tf); // 933
	mi_page_thread_free(const mi_page_t* page); // 481
	mi_rotr(size_t x,
		size_t r);  // 1032
	mi_ptr_decode(const void* null,
			const mi_encoded_t  x,
			const uintptr_t* keys);  // 1055
	mi_block_nextx(const void* null,
			const mi_block_t* block,
			const uintptr_t* keys);  // 1077
	mi_is_in_heap_region(const void* p); // 670
	_mi_page_map_index(const void* p,
				size_t* sub_idx);  // 660
	__atomic_base<mi_page_s::load(
		memory_order __m);  // 587
	atomic<mi_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_page_s**>(const atomic<mi_page_s**>* __a,
						memory_order __m);  // 649
	_mi_page_map_at(size_t idx); // 661
	_mi_checked_ptr_page(const void* p); // 672
	_mi_ptr_page(const void* p); // 1026
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_start(const mi_page_t* page); // 696
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 705
	mi_page_contains_address(const mi_page_t* page,
				const void* p);  // 1027
	mi_is_in_same_page(const void* p,
				const void* q);  // 1080
	mi_page_block_size(const mi_page_t* page); // 1081
	mi_block_next(const mi_page_t* page,
			const mi_block_t* block);  // 471
	mi_list_contains(const mi_page_t* page,
			const mi_block_t* list,
			const mi_block_t* elem);  // 481
	mi_page_block_size(const mi_page_t* page); // 483
} /* size: 0, inline expansions: 65 (3037 bytes) */

// <00334B97> ../thirdparty/mimalloc/src/free.c:491
// variables: 2
inline bool mi_check_is_double_free(const mi_page_t* page, const mi_block_t* block)
{
	bool is_double_free; // 492
	mi_block_t* n; // 493
} /* size: 0, variables: 2 */

// <00334B12> ../thirdparty/mimalloc/src/free.c:517
// variables: 4
bool mi_page_decode_padding(const mi_page_t* page, const mi_block_t* block, size_t* delta, size_t* bsize)
{
	const mi_padding_t* padding; // 519
	uint32_t canary; // 522
	uintptr_t keys; // 523
	bool ok; // 526
} /* size: 0, variables: 4 */

// <0033D2BD> ../thirdparty/mimalloc/src/free.c:532
// variables: 3
// function calls: 6
size_t mi_page_usable_size_of(const mi_page_t* page, const mi_block_t* block, bool is_guarded)
{
	{
		size_t bsize; // 538
		size_t delta; // 539
		bool ok; // 540
		mi_page_block_size(const mi_page_t* page); // 720
		mi_page_usable_block_size(const mi_page_t* page); // 518
		mi_rotl(size_t x,
			size_t r);  // 1038
		mi_ptr_encode(const void* null,
				const void* p,
				const uintptr_t* keys);  // 1042
		mi_ptr_encode_canary(const void* null,
					const void* p,
					const uintptr_t* keys);  // 526
		mi_page_decode_padding(const mi_page_t* page,
					const mi_block_t* block,
					size_t* delta,
					size_t* bsize);  // 540
	}
} /* size: 0 */

// <00334A92> ../thirdparty/mimalloc/src/free.c:532
// variables: 5
size_t mi_page_usable_size_of(const mi_page_t* page, const mi_block_t* block, bool is_guarded)
{
	const char   __func__; // 15263
	{
		const size_t  bsize; // 534
	}
	{
		size_t bsize; // 538
		size_t delta; // 539
		bool ok; // 540
	}
} /* size: 0, variables: 1 */

// <0033476E> ../thirdparty/mimalloc/src/free.c:550
// variables: 6
// function calls: 6
void _mi_padding_shrink(const mi_page_t* page, const mi_block_t* block, const size_t min_size)
{
	size_t bsize; // 551
	size_t delta; // 552
	bool ok; // 553
	const char   __func__; // 58417
	size_t new_delta; // 558
	mi_padding_t* padding; // 560
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 518
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 526
	mi_page_decode_padding(const mi_page_t* page,
				const mi_block_t* block,
				size_t* delta,
				size_t* bsize);  // 553
} /* size: 0, variables: 6, inline expansions: 6 (154 bytes) */

// <003346CD> ../thirdparty/mimalloc/src/free.c:578
// variables: 7
bool mi_verify_padding(const mi_page_t* page, const mi_block_t* block, size_t* size, size_t* wrong)
{
	size_t bsize; // 579
	size_t delta; // 580
	bool ok; // 581
	const char   __func__; // 8149
	{
		uint8_t* fill; // 587
		const size_t  maxpad; // 588
		{
			size_t i; // 590
		}
	}
} /* size: 0, variables: 4 */

// <0033468A> ../thirdparty/mimalloc/src/free.c:602
// variables: 2
void mi_check_padding(const mi_page_t* page, const mi_block_t* block)
{
	size_t size; // 603
	size_t wrong; // 604
} /* size: 0, variables: 2 */

// <0033CB8B> ../thirdparty/mimalloc/src/free.c:621
// variables: 3
// function calls: 14
void mi_stat_free(const mi_page_t* page, const mi_block_t* block)
{
	const mi_theap_t* theap; // 623
	const size_t  bsize; // 626
	_mi_theap_default(void); // 623
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 624
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 626
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 61
	__mi_stat_decrease(mi_stat_count_t* stat,
				size_t amount);  // 632
	{
		const size_t  bpsize; // 638
		mi_stat_update(mi_stat_count_t* stat,
				int64_t amount);  // 33
		mi_stat_update(mi_stat_count_t* stat,
				int64_t amount);  // 61
		__mi_stat_decrease(mi_stat_count_t* stat,
					size_t amount);  // 639
	}
} /* size: 0, variables: 2, inline expansions: 11 (198 bytes) */

// <00334632> ../thirdparty/mimalloc/src/free.c:621
// variables: 3
void mi_stat_free(const mi_page_t* page, const mi_block_t* block)
{
	const mi_theap_t* theap; // 623
	const size_t  bsize; // 626
	{
		const size_t  bpsize; // 638
	}
} /* size: 0, variables: 2 */

