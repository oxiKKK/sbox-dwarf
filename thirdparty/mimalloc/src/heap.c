
//
// thirdparty/mimalloc/src/heap.c
//
//	referenced by: libtier0.so
//
//	functions: 19
//

// <002F50C2> ../thirdparty/mimalloc/src/heap.c:17
mi_theap_t* mi_heap_theap(mi_heap_t* heap)
{
} /* size: 0 */

// <002F505C> ../thirdparty/mimalloc/src/heap.c:21
void mi_heap_set_numa_affinity(mi_heap_t* heap, int numa_node)
{
} /* size: 0 */

// <002F5040> ../thirdparty/mimalloc/src/heap.c:26
void mi_heap_stats_merge_to_subproc(mi_heap_t* heap)
{
} /* size: 0 */

// <002F5021> ../thirdparty/mimalloc/src/heap.c:31
void mi_heap_stats_merge_to_main(mi_heap_t* heap)
{
} /* size: 0 */

// <002F4D13> ../thirdparty/mimalloc/src/heap.c:36
// variables: 4
// function calls: 4
mi_theap_t* mi_heap_init_theap(const mi_heap_t* const_heap)
{
	mi_heap_t* heap; // 38
	const char   __func__; // 58417
	mi_theap_t* theap; // 56
	{
		const mi_theap_t* theap; // 44
		__atomic_base<mi_heap_s::load(
			memory_order __m);  // 587
		atomic<mi_heap_s::load(
			memory_order __m);  // 1334
		atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
						memory_order __m);  // 571
		_mi_theap_heap(const mi_theap_t* theap); // 45
	}
} /* size: 276, variables: 3 */

// <002F4C91> ../thirdparty/mimalloc/src/heap.c:78
mi_theap_t* _mi_heap_theap_get_peek(const mi_heap_t* heap)
{
} /* size: 52 */

// <002F49A6> ../thirdparty/mimalloc/src/heap.c:88
// variable: 1
// function calls: 10
mi_theap_t* _mi_heap_theap_get_or_init(const mi_heap_t* heap)
{
	mi_theap_t* theap; // 90
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
	_mi_heap_theap_peek(const mi_heap_t* heap); // 90
} /* size: 113, variables: 1, inline expansions: 10 (109 bytes) */

// <002F441E> ../thirdparty/mimalloc/src/heap.c:100
// variables: 5
// function calls: 18
mi_heap_t* mi_heap_new_in_arena(mi_arena_id_t exclusive_arena_id)
{
	const mi_heap_t* heap_main; // 102
	const mi_heap_t* heap; // 104
	const mi_thread_local_t  theap_slot; // 108
	{
		bool _mi_go; // 127
		{
			mi_heap_t* head; // 128
		}
		mi_lock_acquire(mi_lock_t* lock); // 127
		mi_lock_release(mi_lock_t* lock); // 127
	}
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 118
	_mi_arena_from_id(mi_arena_id_t id); // 119
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 122
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 123
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 124
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 134
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 51
	__mi_stat_increase_mt(mi_stat_count_t* stat,
				size_t amount);  // 135
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <002F43E3> ../thirdparty/mimalloc/src/heap.c:139
mi_heap_t* mi_heap_new(void)
{
} /* size: 0 */

// <002F40DA> ../thirdparty/mimalloc/src/heap.c:144
// variables: 5
// function calls: 7
void mi_heap_free_theaps(mi_heap_t* heap)
{
	bool all_freed; // 149
	const char   __func__; // 5857
	{
		mi_theap_t* theap; // 152
		{
			bool _mi_go; // 153
			{
				mi_theap_t* next; // 156
			}
			mi_lock_acquire(mi_lock_t* lock); // 153
			mi_lock_release(mi_lock_t* lock); // 153
		}
		__atomic_base<long int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1502
		atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 136
		mi_atomic_addi64_relaxed(volatile int64_t* p,
					int64_t add);  // 43
		__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
						size_t amount);  // 164
		_mi_prim_thread_yield(void); // 165
	}
} /* size: 0, variables: 2 */

// <002F3780> ../thirdparty/mimalloc/src/heap.c:175
// variables: 5
// function calls: 30
void mi_heap_free(mi_heap_t* heap)
{
	const char   __func__; // 44795
	{
		bool _mi_go; // 179
		{
			size_t i; // 180
			{
				mi_arena_pages_t* arena_pages; // 181
				__atomic_base<mi_arena_pages_s::load(
					memory_order __m);  // 587
				atomic<mi_arena_pages_s::load(
					memory_order __m);  // 1334
				atomic_load_explicit<mi_arena_pages_s*>(const atomic<mi_arena_pages_s*>* __a,
									memory_order __m);  // 181
				__atomic_base<mi_arena_pages_s::store(
					__pointer_type __p,
					memory_order __m);  // 578
				atomic<mi_arena_pages_s::store(
					__pointer_type __p,
					memory_order __m);  // 1323
				atomic_store_explicit<mi_arena_pages_s*>(atomic<mi_arena_pages_s*>* __a,
									__atomic_val_t __i,
									memory_order __m);  // 183
			}
		}
		mi_lock_acquire(mi_lock_t* lock); // 179
		mi_lock_release(mi_lock_t* lock); // 179
	}
	{
		bool _mi_go; // 193
		mi_lock_acquire(mi_lock_t* lock); // 193
		mi_lock_release(mi_lock_t* lock); // 193
	}
	_mi_is_heap_main(const mi_heap_t* heap); // 176
	mi_heap_stats_merge_to_main(mi_heap_t* heap); // 31
	mi_heap_stats_merge_to_main(mi_heap_t* heap); // 190
	__atomic_base<long unsigned int>::fetch_sub(
			__int_type __i,
			memory_order __m);  // 1516
	atomic_fetch_sub_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 191
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
				size_t amount);  // 192
	_mi_thread_local_free(mi_thread_local_t key); // 199
	mi_lock_done(mi_lock_t* lock); // 200
	mi_lock_done(mi_lock_t* lock); // 201
	mi_lock_done(mi_lock_t* lock); // 202
} /* size: 0, variables: 1, inline expansions: 20 (383 bytes) */

// <002F35F6> ../thirdparty/mimalloc/src/heap.c:206
// function calls: 4
void mi_heap_delete(mi_heap_t* heap)
{
	_mi_is_heap_main(const mi_heap_t* heap); // 208
	_mi_is_heap_main(const mi_heap_t* heap); // 2389
	_mi_heap_move_pages(mi_heap_t* heap_from,
				mi_heap_t* heap_to);  // 2388
	_mi_heap_move_pages(mi_heap_t* heap_from,
				mi_heap_t* heap_to);  // 213
} /* size: 0, inline expansions: 4 (0 bytes) */

// <002F35D7> ../thirdparty/mimalloc/src/heap.c:217
void _mi_heap_force_destroy(mi_heap_t* heap)
{
} /* size: 0 */

// <002F35BB> ../thirdparty/mimalloc/src/heap.c:224
void mi_heap_destroy(mi_heap_t* heap)
{
} /* size: 0 */

// <002F3591> ../thirdparty/mimalloc/src/heap.c:233
// variable: 1
mi_heap_t* mi_heap_of(const void* p)
{
	mi_page_t* page; // 234
} /* size: 0, variables: 1 */

// <002F3573> ../thirdparty/mimalloc/src/heap.c:239
bool mi_any_heap_contains(const void* p)
{
} /* size: 0 */

// <002F3493> ../thirdparty/mimalloc/src/heap.c:243
// function calls: 2
bool mi_heap_contains(const mi_heap_t* heap, const void* p)
{
	mi_page_heap(const mi_page_t* page); // 236
	mi_heap_of(const void* p); // 245
} /* size: 0, inline expansions: 2 (0 bytes) */

// <002F3338> ../thirdparty/mimalloc/src/heap.c:249
// function calls: 6
bool mi_check_owned(const void* p)
{
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 451
	mi_heap_main(void); // 911
	mi_page_heap(const mi_page_t* page); // 236
	mi_heap_of(const void* p); // 240
	mi_any_heap_contains(const void* p); // 250
} /* size: 0, inline expansions: 6 (0 bytes) */

// <002F324F> ../thirdparty/mimalloc/src/heap.c:256
// variables: 2
// function call: 1
bool mi_unsafe_heap_page_is_under_utilized(mi_heap_t* heap, void* p, size_t perc_threshold)
{
	const mi_page_t* page; // 258
	const mi_heap_t* page_heap; // 265
	mi_page_heap(const mi_page_t* page); // 265
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

