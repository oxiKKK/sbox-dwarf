
//
// thirdparty/mimalloc/src/page.c
//
//	referenced by: libtier0.so
//
//	functions: 28
//

// <003406E5> ../thirdparty/mimalloc/src/page.c:33
mi_block_t* mi_page_block_at(size_t i, size_t block_size, void* page_start, const mi_page_t* page)
{
} /* size: 35 */

// <002E59F4> ../thirdparty/mimalloc/src/page.c:33
// variable: 1
inline mi_block_t* mi_page_block_at(const mi_page_t* page, void* page_start, size_t block_size, size_t i)
{
	const char   __func__; // 6958
} /* size: 0, variables: 1 */

// <002E5373> ../thirdparty/mimalloc/src/page.c:142
// variables: 5
// function calls: 23
void mi_page_thread_collect_to_local(mi_page_t* page, mi_block_t* head)
{
	size_t max_count; // 147
	size_t count; // 148
	mi_block_t* last; // 149
	mi_block_t* next; // 150
	const char   __func__; // 22194
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
			const mi_block_t* block);  // 151
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
				const mi_block_t* next);  // 168
} /* size: 0, variables: 5, inline expansions: 23 (1052 bytes) */

// <002E532A> ../thirdparty/mimalloc/src/page.c:178
// variables: 4
void mi_page_thread_free_collect(mi_page_t* page)
{
	mi_block_t* head; // 181
	mi_thread_free_t tfreex; // 182
	mi_thread_free_t tfree; // 183
	const char   __func__; // 5670
} /* size: 0, variables: 4 */

// <002E530C> ../thirdparty/mimalloc/src/page.c:196
bool mi_page_free_quick_collect(mi_page_t* page)
{
} /* size: 0 */

// <002E4B0A> ../thirdparty/mimalloc/src/page.c:206
// variables: 3
// function calls: 30
void _mi_page_free_collect(mi_page_t* page, bool force)
{
	const char   __func__; // 15154
	{
		mi_block_t* tail; // 222
		mi_block_t* next; // 223
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
				const mi_block_t* block);  // 224
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
					const mi_block_t* next);  // 227
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 183
	mi_tf_block(mi_thread_free_t tf); // 185
	mi_tf_create(mi_block_t* block,
			bool owned);  // 187
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 188
	mi_page_thread_free_collect(mi_page_t* page); // 210
} /* size: 0, variables: 1, inline expansions: 7 (130 bytes) */

// <002E4AC8> ../thirdparty/mimalloc/src/page.c:243
// variables: 2
void _mi_page_free_collect_partly(mi_page_t* page, mi_block_t* head)
{
	mi_block_t* next; // 245
	const char   __func__; // 1309
} /* size: 0, variables: 2 */

// <002E38B6> ../thirdparty/mimalloc/src/page.c:287
// variables: 7
// function calls: 56
void _mi_theap_page_reclaim(mi_theap_t* theap, mi_page_t* page)
{
	const char   __func__; // 15263
	mi_page_queue_t* pq; // 296
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 289
	_mi_is_aligned(const void* p,
			size_t alignment);  // 289
	mi_page_start(const mi_page_t* page); // 290
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
	_mi_ptr_page(const void* p); // 290
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 291
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 292
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 868
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 872
	mi_page_set_theap(mi_page_t* page,
				mi_theap_t* theap);  // 294
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 307
	mi_page_block_size(const mi_page_t* page); // 310
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 310
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 310
	mi_page_queue_is_full(const mi_page_queue_t* pq); // 310
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 830
	__atomic_base<long unsigned int>::fetch_and(
			__int_type __i,
			memory_order __m);  // 1530
	atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 831
	mi_page_flags_set(mi_page_t* page,
				bool set,
				mi_page_flags_t newflag);  // 840
	{
		const mi_theap_t* theap; // 843
		{
			const size_t  size; // 846
			mi_page_block_size(const mi_page_t* page); // 846
		}
	}
	mi_page_set_in_full(mi_page_t* page,
				bool in_full);  // 314
	mi_theap_contains_queue(const mi_theap_t* theap,
				const mi_page_queue_t* pq);  // 210
	_mi_wsize_from_size(size_t size); // 218
	{
		size_t bin; // 230
		const mi_page_queue_t* prev; // 231
		_mi_wsize_from_size(size_t size); // 235
	}
	{
		size_t sz; // 241
	}
	mi_theap_queue_first_update(mi_theap_t* theap,
					const mi_page_queue_t* pq);  // 330
	mi_page_queue_push_at_end(mi_theap_t* theap,
					mi_page_queue_t* queue,
					mi_page_t* page);  // 297
} /* size: 0, variables: 2, inline expansions: 54 (2313 bytes) */

// <002E387A> ../thirdparty/mimalloc/src/page.c:301
// variable: 1
void _mi_page_abandon(mi_page_t* page, mi_page_queue_t* pq)
{
	{
		mi_theap_t* theap; // 308
	}
} /* size: 0 */

// <002E34A4> ../thirdparty/mimalloc/src/page.c:318
// variables: 2
// function calls: 8
mi_page_t* mi_page_fresh_alloc(mi_theap_t* theap, mi_page_queue_t* pq, size_t block_size, size_t page_alignment)
{
	const char   __func__; // 5857
	mi_page_t* page; // 324
	mi_theap_contains_queue(const mi_theap_t* theap,
				const mi_page_queue_t* pq);  // 321
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 329
	mi_page_immediate_available(const mi_page_t* page); // 331
	mi_page_is_expandable(const mi_page_t* page); // 332
} /* size: 0, variables: 2, inline expansions: 8 (80 bytes) */

// <002E3460> ../thirdparty/mimalloc/src/page.c:352
// variables: 2
mi_page_t* mi_page_fresh(mi_theap_t* theap, mi_page_queue_t* pq)
{
	const char   __func__; // 759
	mi_page_t* page; // 354
} /* size: 0, variables: 2 */

// <002E2A4B> ../thirdparty/mimalloc/src/page.c:367
// variables: 8
// function calls: 33
void _mi_page_unfull(mi_page_t* page)
{
	const char   __func__; // 44947
	mi_theap_t* theap; // 374
	mi_page_queue_t* pqfull; // 375
	mi_page_queue_t* pq; // 377
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 370
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 371
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 372
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 374
	__atomic_base<long unsigned int>::fetch_and(
			__int_type __i,
			memory_order __m);  // 1530
	atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 831
	mi_page_flags_set(mi_page_t* page,
				bool set,
				mi_page_flags_t newflag);  // 840
	{
		const mi_theap_t* theap; // 843
		{
			const size_t  size; // 846
			mi_page_block_size(const mi_page_t* page); // 846
		}
	}
	mi_page_set_in_full(mi_page_t* page,
				bool in_full);  // 376
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 830
	mi_page_flags_set(mi_page_t* page,
				bool set,
				mi_page_flags_t newflag);  // 840
	{
		const mi_theap_t* theap; // 843
		{
			const size_t  size; // 846
			mi_page_block_size(const mi_page_t* page); // 846
		}
	}
	mi_page_set_in_full(mi_page_t* page,
				bool in_full);  // 378
	mi_page_queue_enqueue_from_full(mi_page_queue_t* to,
					mi_page_queue_t* from,
					mi_page_t* page);  // 379
} /* size: 0, variables: 4, inline expansions: 31 (412 bytes) */

// <002E21BF> ../thirdparty/mimalloc/src/page.c:382
// variables: 2
// function calls: 31
void mi_page_to_full(mi_page_t* page, mi_page_queue_t* pq)
{
	const char   __func__; // 44947
	mi_theap_t* theap; // 387
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 198
	mi_page_queue_of(const mi_page_t* page); // 383
	mi_page_immediate_available(const mi_page_t* page); // 384
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 385
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 387
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 392
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 394
	mi_page_queue_enqueue_from(mi_page_queue_t* to,
					mi_page_queue_t* from,
					mi_page_t* page);  // 394
} /* size: 0, variables: 2, inline expansions: 31 (318 bytes) */

// <002E19CC> ../thirdparty/mimalloc/src/page.c:401
// variables: 2
// function calls: 25
void _mi_page_free(mi_page_t* page, mi_page_queue_t* pq)
{
	const char   __func__; // 759
	mi_theap_t* theap; // 416
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 198
	mi_page_queue_of(const mi_page_t* page); // 404
	mi_page_all_free(const mi_page_t* page); // 405
	__atomic_base<long unsigned int>::fetch_and(
			__int_type __i,
			memory_order __m);  // 1530
	atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 831
	mi_page_flags_set(mi_page_t* page,
				bool set,
				mi_page_flags_t newflag);  // 858
	mi_page_set_has_interior_pointers(mi_page_t* page,
						bool has_aligned);  // 409
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 416
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 868
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 872
	mi_page_set_theap(mi_page_t* page,
				mi_theap_t* theap);  // 417
	_mi_arenas_collect(bool force_purge,
				bool visit_all,
				mi_tld_t* tld);  // 419
} /* size: 0, variables: 2, inline expansions: 25 (323 bytes) */

// <002E196B> ../thirdparty/mimalloc/src/page.c:432
// variables: 5
void _mi_page_retire(mi_page_t* page)
{
	const char   __func__; // 44947
	mi_page_queue_t* pq; // 446
	const size_t  bsize; // 448
	{
		mi_theap_t* theap; // 451
		const size_t  index; // 457
	}
} /* size: 0, variables: 3 */

// <002E1863> ../thirdparty/mimalloc/src/page.c:471
// variables: 5
// function call: 1
void _mi_theap_collect_retired(mi_theap_t* theap, bool force)
{
	size_t min; // 472
	size_t max; // 473
	{
		size_t bin; // 474
		{
			mi_page_queue_t* pq; // 475
			mi_page_t* page; // 476
			mi_page_all_free(const mi_page_t* page); // 478
		}
	}
} /* size: 235, variables: 2 */

// <002E1259> ../thirdparty/mimalloc/src/page.c:532
// variables: 16
// function calls: 14
void mi_page_free_list_extend_secure(const mi_theap_t* theap, const mi_page_t* page, const size_t bsize, const size_t extend)
{
	const char   __func__; // 22194
	const void* page_area; // 539
	size_t shift; // 543
	const size_t  slice_count; // 547
	const size_t  slice_extend; // 548
	mi_block_t* blocks; // 550
	size_t counts; // 551
	const uintptr_t  r; // 560
	size_t current; // 561
	const mi_block_t* free_start; // 563
	uintptr_t rnd; // 565
	{
		size_t i; // 552
		mi_page_block_at(const mi_page_t* page,
				void* page_start,
				size_t block_size,
				size_t i);  // 553
	}
	{
		size_t i; // 566
		{
			const size_t  round; // 568
			size_t next; // 571
			const mi_block_t* block; // 578
			_mi_random_shuffle(uintptr_t x); // 569
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
						const mi_block_t* next);  // 580
		}
	}
	mi_page_block_size(const mi_page_t* page); // 538
	mi_page_start(const mi_page_t* page); // 539
	_mi_theap_random_next(mi_theap_t* theap); // 560
	_mi_random_shuffle(uintptr_t x); // 565
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
				const mi_block_t* next);  // 584
} /* size: 0, variables: 11, inline expansions: 8 (174 bytes) */

// <00340E82> ../thirdparty/mimalloc/src/page.c:588
// variables: 5
// function calls: 11
void mi_page_free_list_extend(const mi_page_t* page, const size_t bsize, const size_t extend)
{
	const void* page_area; // 596
	const mi_block_t* start; // 598
	const mi_block_t* last; // 601
	mi_block_t* block; // 602
	mi_page_block_size(const mi_page_t* page); // 595
	mi_page_start(const mi_page_t* page); // 596
	mi_page_block_at(const mi_page_t* page,
			void* page_start,
			size_t block_size,
			size_t i);  // 598
	{
		mi_block_t* next; // 604
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
					const mi_block_t* next);  // 605
	}
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
				const mi_block_t* next);  // 609
} /* size: 0, variables: 4, inline expansions: 7 (101 bytes) */

// <002E11D5> ../thirdparty/mimalloc/src/page.c:588
// variables: 6
void mi_page_free_list_extend(const mi_page_t* page, const size_t bsize, const size_t extend)
{
	const char   __func__; // 5824
	const void* page_area; // 596
	const mi_block_t* start; // 598
	const mi_block_t* last; // 601
	mi_block_t* block; // 602
	{
		mi_block_t* next; // 604
	}
} /* size: 0, variables: 5 */

// <002E0CB8> ../thirdparty/mimalloc/src/page.c:629
// variables: 7
// function calls: 16
bool mi_page_extend_free(mi_theap_t* theap, mi_page_t* page)
{
	size_t page_size; // 638
	const size_t  bsize; // 646
	size_t extend; // 647
	const char   __func__; // 5857
	size_t max_extend; // 650
	{
		const size_t  needed_size; // 665
		const size_t  needed_commit; // 666
		_mi_align_down(uintptr_t sz,
				size_t alignment);  // 484
		_mi_align_down_ptr(const void* p,
					size_t alignment);  // 726
		mi_page_meta_is_separated(const mi_page_t* page); // 734
		mi_page_slice_start(const mi_page_t* page); // 746
		mi_page_slice_offset_of(const mi_page_t* page,
					size_t offset_relative_to_page_start);  // 666
		_mi_align_up(uintptr_t sz,
				size_t alignment);  // 666
		_mi_os_page_size(void); // 668
		_mi_os_commit(void* addr,
				size_t size,
				bool* is_zero);  // 669
	}
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 640
	__mi_stat_counter_increase(mi_stat_counter_t* stat,
					size_t amount);  // 642
	mi_page_block_size(const mi_page_t* page); // 646
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 686
} /* size: 0, variables: 5, inline expansions: 8 (255 bytes) */

// <002DFED8> ../thirdparty/mimalloc/src/page.c:693
// variables: 3
// function calls: 37
bool _mi_page_init(mi_theap_t* theap, mi_page_t* page)
{
	const char   __func__; // 759
	size_t page_size; // 699
	uint8_t* page_start; // 700
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 696
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 868
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 872
	mi_page_set_theap(mi_page_t* page,
				mi_theap_t* theap);  // 697
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 700
	_mi_theap_random_next(mi_theap_t* theap); // 705
	_mi_theap_random_next(mi_theap_t* theap); // 706
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 716
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 720
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<long unsigned int>::operator std::__atomic_base<long unsigned int>::__int_type(); // 721
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 854
	mi_page_has_interior_pointers(const mi_page_t* page); // 725
	mi_page_immediate_available(const mi_page_t* page); // 734
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 696
} /* size: 0, variables: 3, inline expansions: 37 (333 bytes) */

// <002DF2D9> ../thirdparty/mimalloc/src/page.c:744
// variables: 8
// function calls: 30
mi_page_t* mi_page_queue_find_free_ex(mi_theap_t* theap, mi_page_queue_t* pq, bool first_try)
{
	size_t count; // 747
	long int candidate_limit; // 748
	long int page_full_retain; // 749
	mi_page_t* page_candidate; // 750
	mi_page_t* page; // 751
	const char   __func__; // 595
	{
		mi_page_t* next; // 755
		bool immediate_available; // 762
		mi_page_all_free(const mi_page_t* page); // 785
		mi_page_is_mostly_used(const mi_page_t* page); // 790
		mi_page_immediate_available(const mi_page_t* page); // 762
		_mi_option_get_fast(mi_option_t option); // 783
		mi_page_immediate_available(const mi_page_t* page); // 766
		mi_page_is_expandable(const mi_page_t* page); // 771
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 816
		mi_page_xthread_id(const mi_page_t* page); // 825
		mi_page_flags(const mi_page_t* page); // 836
		mi_page_is_in_full(const mi_page_t* page); // 774
		mi_page_immediate_available(const mi_page_t* page); // 774
	}
	__mi_stat_counter_increase(mi_stat_counter_t* stat,
					size_t amount);  // 816
	__mi_stat_counter_increase(mi_stat_counter_t* stat,
					size_t amount);  // 817
	mi_page_immediate_available(const mi_page_t* page); // 824
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 336
	mi_page_queue_move_to_front(mi_theap_t* theap,
					mi_page_queue_t* queue,
					mi_page_t* page);  // 846
	mi_page_immediate_available(const mi_page_t* page); // 850
	mi_theap_contains_queue(const mi_theap_t* theap,
				const mi_page_queue_t* pq);  // 353
	mi_page_block_size(const mi_page_t* page); // 356
	mi_page_fresh(mi_theap_t* theap,
			mi_page_queue_t* pq);  // 835
	mi_page_immediate_available(const mi_page_t* page); // 836
	mi_page_is_expandable(const mi_page_t* page); // 825
	mi_page_immediate_available(const mi_page_t* page); // 830
	mi_page_immediate_available(const mi_page_t* page); // 840
} /* size: 0, variables: 6, inline expansions: 18 (734 bytes) */

// <002DF295> ../thirdparty/mimalloc/src/page.c:859
// variables: 2
mi_page_t* mi_find_free_page(mi_theap_t* theap, mi_page_queue_t* pq)
{
	const char   __func__; // 8149
	mi_page_t* page; // 864
} /* size: 0, variables: 2 */

// <002DF169> ../thirdparty/mimalloc/src/page.c:891
// function calls: 3
void _mi_deferred_free(mi_theap_t* theap, bool force)
{
	__atomic_base<void::load(
		memory_order __m);  // 587
	atomic<void::load(
		memory_order __m);  // 1334
	atomic_load_explicit<void*>(const atomic<void*>* __a,
					memory_order __m);  // 895
} /* size: 88, inline expansions: 3 (21 bytes) */

// <002DF03F> ../thirdparty/mimalloc/src/page.c:900
// function calls: 3
void mi_register_deferred_free(mi_deferred_free_fun* fn, void* arg)
{
	__atomic_base<void::store(
		__pointer_type __p,
		memory_order __m);  // 578
	atomic<void::store(
		__pointer_type __p,
		memory_order __m);  // 1323
	atomic_store_explicit<void*>(atomic<void*>* __a,
					__atomic_val_t __i,
					memory_order __m);  // 902
} /* size: 0, inline expansions: 3 (0 bytes) */

// <002DEFD4> ../thirdparty/mimalloc/src/page.c:913
// variables: 3
mi_page_t* mi_huge_page_alloc(mi_theap_t* theap, size_t size, size_t page_alignment, mi_page_queue_t* pq)
{
	const size_t  block_size; // 914
	const char   __func__; // 58417
	mi_page_t* page; // 922
} /* size: 0, variables: 3 */

// <002DE95F> ../thirdparty/mimalloc/src/page.c:941
// variables: 3
// function calls: 18
mi_page_t* mi_find_page(mi_theap_t* theap, size_t size, size_t huge_alignment)
{
	const size_t  req_size; // 942
	mi_page_queue_t* pq; // 947
	const char   __func__; // 44795
	_mi_bin(size_t size); // 804
	mi_page_queue(const mi_theap_t* theap,
			size_t size);  // 947
	mi_page_queue_is_huge(const mi_page_queue_t* pq); // 949
	mi_page_free_quick_collect(mi_page_t* page); // 865
	_mi_theap_random_next(mi_theap_t* theap); // 867
	mi_page_immediate_available(const mi_page_t* page); // 869
	mi_find_free_page(mi_theap_t* theap,
				mi_page_queue_t* pq);  // 957
	mi_page_block_size(const mi_page_t* page); // 924
	mi_page_immediate_available(const mi_page_t* page); // 925
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 926
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 932
	__mi_stat_counter_increase(mi_stat_counter_t* stat,
					size_t amount);  // 933
	mi_huge_page_alloc(mi_theap_t* theap,
				size_t size,
				size_t page_alignment,
				mi_page_queue_t* pq);  // 950
} /* size: 0, variables: 3, inline expansions: 18 (1084 bytes) */

// <002DD85B> ../thirdparty/mimalloc/src/page.c:968
// variables: 7
// function calls: 55
void* _mi_malloc_generic(mi_theap_t* theap, size_t size, size_t zero_huge_alignment, size_t* usable)
{
	const bool  zero; // 970
	const size_t  huge_alignment; // 971
	const char   __func__; // 58417
	mi_page_t* page; // 1009
	const void* p; // 1028
	{
		const long int  generic_collect; // 1001
		mi_option_get(mi_option_t option); // 270
		mi_option_get(mi_option_t option); // 282
		mi_option_get_clamp(mi_option_t option,
					long int min,
					long int max);  // 1001
		mi_theap_collect(mi_theap_t* theap,
				bool force);  // 1004
	}
	{
		const size_t  req_size; // 1016
	}
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 978
	_mi_theap_default(void); // 499
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 499
	_mi_thread_is_initialized(void); // 706
	mi_thread_init(void); // 984
	_mi_theap_default(void); // 985
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 986
	_mi_theap_default(void); // 987
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 989
	mi_page_immediate_available(const mi_page_t* page); // 1021
	mi_page_block_size(const mi_page_t* page); // 1022
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 1023
	_mi_is_aligned(const void* p,
			size_t alignment);  // 1023
	mi_page_start(const mi_page_t* page); // 1024
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
	_mi_ptr_page(const void* p); // 1024
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 1027
	mi_page_block_size(const mi_page_t* page); // 1032
	mi_page_is_full(const mi_page_t* page); // 1032
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 198
	mi_page_queue_of(const mi_page_t* page); // 1033
	mi_theap_collect(mi_theap_t* theap,
			bool force);  // 1011
} /* size: 0, variables: 5, inline expansions: 51 (752 bytes) */

