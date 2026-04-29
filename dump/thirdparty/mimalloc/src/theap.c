
//
// thirdparty/mimalloc/src/theap.c
//
//	referenced by: libtier0.so
//
//	functions: 26
//	structs: 2
//

// <002CFD30> ../thirdparty/mimalloc/src/theap.c:24
// variables: 8
// function calls: 6
bool mi_theap_visit_pages(mi_theap_t* theap, theap_page_visitor_fun* fn, bool include_full, void* arg1, void* arg2)
{
	size_t total; // 30
	size_t count; // 31
	const size_t  max_bin; // 34
	const char   __func__; // 65207
	{
		size_t i; // 35
		{
			mi_page_queue_t* pq; // 36
			mi_page_t* page; // 37
			{
				mi_page_t* next; // 39
				__atomic_base<long unsigned int>::load(
					memory_order __m);  // 1334
				atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
									memory_order __m);  // 816
				mi_page_xthread_id(const mi_page_t* page); // 821
				mi_page_thread_id(const mi_page_t* page); // 877
				mi_page_is_abandoned(const mi_page_t* page); // 896
				mi_page_theap(const mi_page_t* page); // 40
			}
		}
	}
} /* size: 0, variables: 4 */

// <002CFCC3> ../thirdparty/mimalloc/src/theap.c:54
// variable: 1
bool mi_theap_page_is_valid(mi_theap_t* theap, mi_page_queue_t* pq, mi_page_t* page, void* arg1, void* arg2)
{
	const char   __func__; // 15263
} /* size: 0, variables: 1 */

// <002CF98D> ../thirdparty/mimalloc/src/theap.c:91
// variables: 2
// function calls: 8
bool mi_theap_page_collect(mi_theap_t* theap, mi_page_queue_t* pq, mi_page_t* page, void* arg_collect, void* arg2)
{
	const char   __func__; // 15154
	mi_collect_t collect; // 95
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 58
	mi_theap_page_is_valid(mi_theap_t* theap,
				mi_page_queue_t* pq,
				mi_page_t* page,
				void* arg1,
				void* arg2);  // 94
	mi_page_all_free(const mi_page_t* page); // 97
} /* size: 0, variables: 2, inline expansions: 8 (201 bytes) */

// <002CF968> ../thirdparty/mimalloc/src/theap.c:111
// variable: 1
void mi_theap_merge_stats(mi_theap_t* theap)
{
	const char   __func__; // 65207
} /* size: 0, variables: 1 */

// <002CF4EB> ../thirdparty/mimalloc/src/theap.c:116
// variable: 1
// function calls: 16
void mi_theap_collect_ex(mi_theap_t* theap, mi_collect_t collect)
{
	const bool  force; // 121
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 118
	_mi_arenas_collect(bool force_purge,
				bool visit_all,
				mi_tld_t* tld);  // 135
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 112
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 113
	mi_theap_merge_stats(mi_theap_t* theap); // 138
} /* size: 0, variables: 1, inline expansions: 16 (169 bytes) */

// <002CF4CC> ../thirdparty/mimalloc/src/theap.c:141
void _mi_theap_collect_abandon(mi_theap_t* theap)
{
} /* size: 0 */

// <002CF4A4> ../thirdparty/mimalloc/src/theap.c:145
void mi_theap_collect(mi_theap_t* theap, bool force)
{
} /* size: 0 */

// <002CF40C> ../thirdparty/mimalloc/src/theap.c:149
// function calls: 2
void mi_collect(bool force)
{
	_mi_theap_default(void); // 151
	mi_theap_collect(mi_theap_t* theap,
			bool force);  // 151
} /* size: 0, inline expansions: 2 (0 bytes) */

// <002CF214> ../thirdparty/mimalloc/src/theap.c:154
// function calls: 8
void mi_heap_collect(mi_heap_t* heap, bool force)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 18
	mi_heap_theap(mi_heap_t* heap); // 156
	mi_theap_collect(mi_theap_t* theap,
			bool force);  // 156
} /* size: 0, inline expansions: 8 (0 bytes) */

// <002CED4F> ../thirdparty/mimalloc/src/theap.c:163
// variables: 2
// function calls: 20
mi_theap_t* mi_theap_get_default(void)
{
	mi_theap_t* theap; // 164
	const char   __func__; // 65207
	_mi_theap_default(void); // 164
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 165
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
	mi_thread_init(void); // 166
	_mi_theap_default(void); // 167
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 168
} /* size: 0, variables: 2, inline expansions: 20 (0 bytes) */

// <002CE408> ../thirdparty/mimalloc/src/theap.c:174
// variables: 5
// function calls: 26
void _mi_theap_init(mi_theap_t* theap, mi_heap_t* heap, mi_tld_t* tld)
{
	const char   __func__; // 59076
	mi_memid_t memid; // 178
	mi_theap_t* head; // 197
	{
		bool _mi_go; // 198
		mi_lock_acquire(mi_lock_t* lock); // 198
		mi_lock_release(mi_lock_t* lock); // 198
	}
	{
		bool _mi_go; // 222
		mi_lock_acquire(mi_lock_t* lock); // 222
		mi_lock_release(mi_lock_t* lock); // 222
	}
	mi_rep_movsb(void* dst,
			const void* src,
			size_t n);  // 1209
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1212
	_mi_memcpy(void* dst,
			const void* src,
			size_t n);  // 1207
	_mi_memcpy(void* dst,
			const void* src,
			size_t n);  // 1249
	_mi_memcpy_aligned(void* dst,
				const void* src,
				size_t n);  // 179
	__atomic_base<long unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 369
	__atomic_base<long unsigned int>::operator=(
			__int_type __i);  // 181
	__atomic_base<mi_heap_s::store(
		__pointer_type __p,
		memory_order __m);  // 578
	atomic<mi_heap_s::store(
		__pointer_type __p,
		memory_order __m);  // 1323
	atomic_store_explicit<mi_heap_s*>(atomic<mi_heap_s*>* __a,
						__atomic_val_t __i,
						memory_order __m);  // 183
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 307
	mi_option_get(mi_option_t option); // 308
	mi_option_get(mi_option_t option); // 282
	mi_option_get_clamp(mi_option_t option,
				long int min,
				long int max);  // 309
	_mi_theap_options_init(mi_theap_t* theap); // 185
	_mi_theap_random_next(mi_theap_t* theap); // 217
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 219
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 51
	__mi_stat_increase_mt(mi_stat_count_t* stat,
				size_t amount);  // 219
	_mi_random_init(mi_random_ctx_t* ctx); // 211
} /* size: 0, variables: 3, inline expansions: 22 (904 bytes) */

// <002CE18B> ../thirdparty/mimalloc/src/theap.c:231
// variables: 4
// function call: 1
mi_theap_t* _mi_theap_create(mi_heap_t* heap, mi_tld_t* tld)
{
	const char   __func__; // 6958
	mi_memid_t memid; // 235
	mi_theap_t* theap; // 236
	{
		const size_t  size; // 249
		_mi_arenas_alloc(mi_heap_t* heap,
				size_t size,
				bool commit,
				bool allow_large,
				mi_arena_t* req_arena,
				size_t tseq,
				int numa_node,
				mi_memid_t* memid);  // 250
	}
} /* size: 0, variables: 3 */

// <002CE166> ../thirdparty/mimalloc/src/theap.c:262
uintptr_t _mi_theap_random_next(mi_theap_t* theap)
{
} /* size: 0 */

// <002CE12A> ../thirdparty/mimalloc/src/theap.c:266
// variable: 1
void mi_theap_free_mem(mi_theap_t* theap)
{
	const char   __func__; // 8149
} /* size: 0, variables: 1 */

// <002CE109> ../thirdparty/mimalloc/src/theap.c:283
void _mi_theap_incref(mi_theap_t* theap)
{
} /* size: 0 */

// <002CE0E8> ../thirdparty/mimalloc/src/theap.c:289
void _mi_theap_decref(mi_theap_t* theap)
{
} /* size: 0 */

// <002CDCBF> ../thirdparty/mimalloc/src/theap.c:299
// variables: 4
// function calls: 8
bool _mi_theap_free(mi_theap_t* theap, bool acquire_heap_theaps_lock, bool acquire_tld_theaps_lock)
{
	const char   __func__; // 59076
	const mi_heap_t* heap; // 303
	{
		bool _mi_go; // 313
		mi_lock_acquire(mi_lock_t* lock); // 313
		mi_lock_release(mi_lock_t* lock); // 313
	}
	{
		bool _mi_go; // 321
		mi_lock_release(mi_lock_t* lock); // 321
		mi_lock_acquire(mi_lock_t* lock); // 321
	}
	__atomic_base<mi_heap_s::exchange(
		__pointer_type __p,
		memory_order __m);  // 596
	atomic<mi_heap_s::exchange(
		__pointer_type __p,
		memory_order __m);  // 1346
	atomic_exchange_explicit<mi_heap_s*>(atomic<mi_heap_s*>* __a,
						__atomic_val_t __i,
						memory_order __m);  // 303
	_mi_theap_decref(mi_theap_t* theap); // 328
} /* size: 0, variables: 2, inline expansions: 4 (59 bytes) */

// <002CD8C0> ../thirdparty/mimalloc/src/theap.c:454
// variable: 1
// function calls: 11
void _mi_theap_delete(mi_theap_t* theap, bool acquire_tld_theaps_lock)
{
	const char   __func__; // 6958
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 457
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 459
	_mi_theap_collect_abandon(mi_theap_t* theap); // 462
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <002CD872> ../thirdparty/mimalloc/src/theap.c:537
// variables: 2
void _mi_heap_area_init(mi_heap_area_t* area, mi_page_t* page)
{
	const size_t  bsize; // 538
	const size_t  ubsize; // 539
} /* size: 0, variables: 2 */

// <002CD816> ../thirdparty/mimalloc/src/theap.c:549
// variable: 1
void mi_get_fast_divisor(size_t divisor, uint64_t* magic, size_t* shift)
{
	const char   __func__; // 5857
} /* size: 0, variables: 1 */

// <002CD7C7> ../thirdparty/mimalloc/src/theap.c:555
// variables: 2
size_t mi_fast_divide(size_t n, uint64_t magic, size_t shift)
{
	const char   __func__; // 59076
	const uint64_t  hi; // 557
} /* size: 0, variables: 2 */

// <002CC98A> ../thirdparty/mimalloc/src/theap.c:561
// variables: 26
// function calls: 32
bool _mi_theap_area_visit_blocks(const mi_heap_area_t* area, mi_page_t* page, mi_block_visit_fun* visitor, void* arg)
{
	const char   __func__; // 5670
	size_t psize; // 571
	const uint8_t* pstart; // 572
	const mi_heap_t* heap; // 573
	const size_t  bsize; // 574
	const size_t  ubsize; // 575
	uintptr_t free_map; // 596
	const uintptr_t  bmapsize; // 597
	uint64_t magic; // 607
	size_t shift; // 608
	size_t free_count; // 612
	size_t used_count; // 633
	uint8_t* block; // 635
	{
		uint8_t* block; // 586
		{
			size_t i; // 587
		}
	}
	{
		size_t shift; // 601
		uintptr_t mask; // 602
	}
	{
		mi_block_t* block; // 614
		{
			size_t offset; // 619
			size_t blockidx; // 622
			size_t bitidx; // 625
			size_t bit; // 626
			mi_fast_divide(size_t n,
					uint64_t magic,
					size_t shift);  // 622
		}
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
				const mi_block_t* block);  // 614
	}
	{
		size_t i; // 636
		{
			size_t j; // 639
		}
		{
			uintptr_t m; // 649
			{
				size_t bitidx; // 654
				mi_ctz(size_t x); // 654
			}
		}
	}
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_start(const mi_page_t* page); // 696
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 572
	mi_page_heap(const mi_page_t* page); // 573
	mi_page_block_size(const mi_page_t* page); // 574
	mi_page_usable_block_size(const mi_page_t* page); // 575
	memset(void* __dest,
		int __ch,
		size_t __len);  // 598
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 597
	mi_clz(size_t x); // 551
	mi_get_fast_divisor(size_t divisor,
				uint64_t* magic,
				size_t* shift);  // 609
} /* size: 0, variables: 13, inline expansions: 11 (345 bytes) */

// <002C4FA1> ../thirdparty/mimalloc/src/theap.c:668
// member variables: 2
// struct size: 64
struct mi_theap_area_ex_s {
	mi_heap_area_t area; /* 0 56 */
	mi_page_t * page; /* 56 8 */
};

// <002CC7C2> ../thirdparty/mimalloc/src/theap.c:675
// variables: 2
// function calls: 4
bool mi_theap_visit_areas_page(mi_theap_t* theap, mi_page_queue_t* pq, mi_page_t* page, void* vfun, void* arg)
{
	mi_theap_area_visit_fun* fun; // 678
	mi_theap_area_ex_t xarea; // 679
	mi_page_block_size(const mi_page_t* page); // 538
	mi_page_usable_block_size(const mi_page_t* page); // 539
	mi_page_start(const mi_page_t* page); // 542
	_mi_heap_area_init(mi_heap_area_t* area,
				mi_page_t* page);  // 681
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <002CC782> ../thirdparty/mimalloc/src/theap.c:686
bool mi_theap_visit_areas(const mi_theap_t* theap, mi_theap_area_visit_fun* visitor, void* arg)
{
} /* size: 0 */

// <002C5014> ../thirdparty/mimalloc/src/theap.c:692
// member variables: 3
// struct size: 24
struct mi_visit_blocks_args_s {
	bool visit_blocks; /* 0 1 */
	mi_block_visit_fun * visitor; /* 8 8 */
	void * arg; /* 16 8 */
};

// <002CC5DB> ../thirdparty/mimalloc/src/theap.c:698
// variable: 1
// function calls: 4
bool mi_theap_area_visitor(const mi_theap_t* theap, const mi_theap_area_ex_t* xarea, void* arg)
{
	mi_visit_blocks_args_t* args; // 699
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 700
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <002CC4C4> ../thirdparty/mimalloc/src/theap.c:710
// variable: 1
// function call: 1
bool mi_theap_visit_blocks(const mi_theap_t* theap, bool visit_blocks, mi_block_visit_fun* visitor, void* arg)
{
	mi_visit_blocks_args_t args; // 711
	mi_theap_visit_areas(const mi_theap_t* theap,
				mi_theap_area_visit_fun* visitor,
				void* arg);  // 712
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

