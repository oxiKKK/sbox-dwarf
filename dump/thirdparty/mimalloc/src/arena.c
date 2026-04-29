
//
// thirdparty/mimalloc/src/arena.c
//
//	referenced by: libtier0.so
//
//	functions: 104
//	structs: 3
//

// <00316606> ../thirdparty/mimalloc/src/arena.c:31
mi_arena_id_t _mi_arena_id_none(void)
{
} /* size: 0 */

// <003165CD> ../thirdparty/mimalloc/src/arena.c:35
// variables: 2
mi_arena_t* _mi_arena_from_id(mi_arena_id_t id)
{
	const mi_arena_t* arena; // 36
	const char   __func__; // 8149
} /* size: 0, variables: 2 */

// <0031659F> ../thirdparty/mimalloc/src/arena.c:41
// variable: 1
mi_arena_id_t mi_arena_id_from_arena(mi_arena_t* arena)
{
	const char   __func__; // 15263
} /* size: 0, variables: 1 */

// <00316575> ../thirdparty/mimalloc/src/arena.c:47
bool mi_arena_is_suitable(mi_arena_t* arena, mi_arena_t* req_arena)
{
} /* size: 0 */

// <00316546> ../thirdparty/mimalloc/src/arena.c:55
bool _mi_arena_memid_is_suitable(mi_memid_t memid, mi_arena_t* request_arena)
{
} /* size: 0 */

// <00316523> ../thirdparty/mimalloc/src/arena.c:64
size_t mi_arenas_get_count(mi_subproc_t* subproc)
{
} /* size: 0 */

// <003164E9> ../thirdparty/mimalloc/src/arena.c:68
// variable: 1
mi_arena_t* mi_arena_from_index(mi_subproc_t* subproc, size_t idx)
{
	const char   __func__; // 5857
} /* size: 0, variables: 1 */

// <003164CB> ../thirdparty/mimalloc/src/arena.c:73
size_t mi_arena_info_slices(mi_arena_t* arena)
{
} /* size: 0 */

// <0031647E> ../thirdparty/mimalloc/src/arena.c:78
// variables: 2
bool mi_heap_has_page(mi_heap_t* heap, mi_arena_t* arena, mi_page_t* page)
{
	const char   __func__; // 6958
	mi_arena_pages_t* arena_pages; // 80
} /* size: 0, variables: 2 */

// <0031645C> ../thirdparty/mimalloc/src/arena.c:88
size_t mi_arena_min_alignment(void)
{
} /* size: 0 */

// <0031643A> ../thirdparty/mimalloc/src/arena.c:92
size_t mi_arena_min_size(void)
{
} /* size: 0 */

// <0031641C> ../thirdparty/mimalloc/src/arena.c:96
// variable: 1
size_t mi_arena_max_object_size(void)
{
	size_t max_size; // 97
} /* size: 0, variables: 1 */

// <003163CE> ../thirdparty/mimalloc/src/arena.c:110
bool mi_arena_commit(mi_arena_t* arena, void* start, size_t size, bool* is_zero, size_t already_committed)
{
} /* size: 0 */

// <003163B0> ../thirdparty/mimalloc/src/arena.c:130
size_t mi_arena_size(mi_arena_t* arena)
{
} /* size: 0 */

// <00316392> ../thirdparty/mimalloc/src/arena.c:135
uint8_t* mi_arena_start(mi_arena_t* arena)
{
} /* size: 0 */

// <00316358> ../thirdparty/mimalloc/src/arena.c:140
// variable: 1
uint8_t* mi_arena_slice_start(mi_arena_t* arena, size_t slice_index)
{
	const char   __func__; // 65207
} /* size: 0, variables: 1 */

// <00316310> ../thirdparty/mimalloc/src/arena.c:145
// variables: 2
mi_page_t* mi_arena_page_at_slice(mi_arena_t* arena, size_t slice_index)
{
	const char   __func__; // 15263
	{
		const mi_page_t* page; // 148
	}
} /* size: 0, variables: 1 */

// <003161F4> ../thirdparty/mimalloc/src/arena.c:161
// variables: 2
// function calls: 2
void* mi_arena_area(mi_arena_id_t arena_id, size_t* size)
{
	mi_arena_t* arena; // 163
	const char   __func__; // 759
	_mi_arena_from_id(mi_arena_id_t id); // 163
	mi_size_of_slices(size_t bcount); // 166
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <003161A7> ../thirdparty/mimalloc/src/arena.c:174
// variables: 2
mi_memid_t mi_memid_create_arena(mi_arena_t* arena, size_t slice_index, size_t slice_count)
{
	const char   __func__; // 15154
	mi_memid_t memid; // 179
} /* size: 0, variables: 2 */

// <0031615A> ../thirdparty/mimalloc/src/arena.c:187
// variables: 2
mi_arena_t* mi_arena_from_memid(mi_memid_t memid, size_t* slice_index, size_t* slice_count)
{
	const char   __func__; // 5857
	mi_arena_t* arena; // 189
} /* size: 0, variables: 2 */

// <0033DD92> ../thirdparty/mimalloc/src/arena.c:195
// variable: 1
// function calls: 3
size_t mi_page_full_size(mi_page_t* page)
{
	mi_memkind_is_os(mi_memkind_t memkind); // 307
	mi_memid_is_os(mi_memid_t memid); // 199
	{
		const ptrdiff_t  presize; // 201
	}
	mi_page_full_size(mi_page_t* page); // 195
} /* size: 0, inline expansions: 3 (103 bytes) */

// <00316123> ../thirdparty/mimalloc/src/arena.c:195
// variables: 2
size_t mi_page_full_size(mi_page_t* page)
{
	const char   __func__; // 8149
	{
		const ptrdiff_t  presize; // 201
	}
} /* size: 0, variables: 1 */

// <003152EB> ../thirdparty/mimalloc/src/arena.c:215
// variables: 9
// function calls: 30
void* mi_arena_try_alloc_at(mi_arena_t* arena, size_t slice_count, bool commit, size_t tseq, mi_memid_t* memid)
{
	size_t slice_index; // 218
	void* p; // 222
	size_t touched_slices; // 227
	const char   __func__; // 15154
	{
		size_t already_dirty; // 229
	}
	{
		const size_t  already_committed; // 238
		{
			bool commit_zero; // 241
			mi_size_of_slices(size_t bcount); // 242
			mi_arena_commit(mi_arena_t* arena,
					void* start,
					size_t size,
					bool* is_zero,
					size_t already_committed);  // 110
			mi_arena_commit(mi_arena_t* arena,
					void* start,
					size_t size,
					bool* is_zero,
					size_t already_committed);  // 242
			mi_size_of_slices(size_t bcount); // 242
			{
				size_t i; // 503
			}
			mi_mem_is_zero(const void* p,
					size_t size);  // 258
		}
		mi_os_page_align_area_conservative(void* addr,
							size_t size,
							size_t* newsize);  // 619
		_mi_os_reuse(void* addr,
				size_t size);  // 267
		_mi_os_has_overcommit(void); // 270
		mi_size_of_slices(size_t bcount); // 271
		mi_stat_update_mt(mi_stat_count_t* stat,
					int64_t amount);  // 51
		__mi_stat_increase_mt(mi_stat_count_t* stat,
					size_t amount);  // 271
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 275
	}
	{
		size_t already_committed_count; // 291
		mi_size_of_slices(size_t bcount); // 294
		mi_stat_update_mt(mi_stat_count_t* stat,
					int64_t amount);  // 58
		__mi_stat_decrease_mt(mi_stat_count_t* stat,
					size_t amount);  // 294
	}
	mi_bbitmap_try_find_and_clearNX(mi_bbitmap_t* bbitmap,
					size_t tseq,
					size_t n,
					size_t* pidx);  // 337
	mi_bbitmap_try_find_and_clearNC(mi_bbitmap_t* bbitmap,
					size_t tseq,
					size_t n,
					size_t* pidx);  // 338
	mi_bbitmap_try_find_and_clear(mi_bbitmap_t* bbitmap,
					size_t tseq,
					size_t* pidx);  // 333
	mi_bbitmap_try_find_and_clear8(mi_bbitmap_t* bbitmap,
					size_t tseq,
					size_t* pidx);  // 334
	mi_bbitmap_try_find_and_clearN(mi_bbitmap_t* bbitmap,
					size_t tseq,
					size_t n,
					size_t* pidx);  // 332
	mi_bbitmap_try_find_and_clearN(mi_bbitmap_t* bbitmap,
					size_t tseq,
					size_t n,
					size_t* pidx);  // 219
	mi_bitmap_is_setN(mi_bitmap_t* bitmap,
				size_t idx,
				size_t n);  // 288
	mi_size_of_slices(size_t bcount); // 142
	mi_arena_slice_start(mi_arena_t* arena,
				size_t slice_index);  // 222
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1121
	_mi_memid_create(mi_memkind_t memkind); // 179
	mi_memid_create_arena(mi_arena_t* arena,
				size_t slice_index,
				size_t slice_count);  // 223
	mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap,
				size_t idx,
				size_t n);  // 298
	mi_bitmap_is_setN(mi_bitmap_t* bitmap,
				size_t idx,
				size_t n);  // 299
	mi_bitmap_is_setN(mi_bitmap_t* bitmap,
				size_t idx,
				size_t n);  // 301
} /* size: 0, variables: 4, inline expansions: 15 (546 bytes) */

// <0031520D> ../thirdparty/mimalloc/src/arena.c:310
// variables: 11
bool mi_arena_reserve(mi_subproc_t* subproc, size_t req_size, bool allow_large, mi_arena_id_t* arena_id)
{
	const size_t  arena_count; // 312
	size_t arena_reserve; // 316
	const size_t  min_reserve; // 340
	const size_t  max_reserve; // 341
	bool arena_commit; // 353
	const bool  overcommit; // 354
	const bool  adjust; // 360
	int err; // 363
	{
		const size_t  multiplier; // 326
		size_t reserve; // 327
	}
	{
		const size_t  small_arena_reserve; // 367
	}
} /* size: 0, variables: 8 */

// <003151AA> ../thirdparty/mimalloc/src/arena.c:385
// variable: 1
inline bool mi_arena_is_suitable_ex(mi_arena_t* arena, mi_arena_t* req_arena, bool match_numa, int numa_node, bool allow_pinned)
{
	{
		const bool  numa_suitable; // 389
	}
} /* size: 0 */

// <00340D0F> ../thirdparty/mimalloc/src/arena.c:398
// variables: 5
// function calls: 2
size_t mi_arena_start_idx(size_t tseq, size_t arena_cycle, mi_heap_t* heap)
{
	const size_t  hseq; // 399
	const size_t  hcount; // 400
	size_t start; // 405
	const size_t  frac; // 407
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 400
	{
		const size_t  hspot; // 413
	}
} /* size: 0, variables: 4, inline expansions: 2 (14 bytes) */

// <00315122> ../thirdparty/mimalloc/src/arena.c:398
// variables: 6
size_t mi_arena_start_idx(mi_heap_t* heap, size_t tseq, size_t arena_cycle)
{
	const size_t  hseq; // 399
	const size_t  hcount; // 400
	size_t start; // 405
	const char   __func__; // 58417
	const size_t  frac; // 407
	{
		const size_t  hspot; // 413
	}
} /* size: 0, variables: 5 */

// <00314788> ../thirdparty/mimalloc/src/arena.c:466
// variables: 17
// function calls: 26
void* mi_arenas_try_find_free(mi_heap_t* heap, size_t slice_count, size_t alignment, bool commit, bool allow_large, mi_arena_t* req_arena, size_t tseq, int numa_node, mi_memid_t* memid)
{
	const char   __func__; // 63973
	{
		const size_t  _arena_count; // 475
		const size_t  _arena_cycle; // 475
		const size_t  _start; // 475
		{
			size_t _i; // 475
			{
				mi_arena_t* arena; // 475
				{
					size_t _idx; // 475
					__atomic_base<long unsigned int>::load(
						memory_order __m);  // 1334
					atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
										memory_order __m);  // 65
					mi_arenas_get_count(mi_subproc_t* subproc); // 69
					__atomic_base<mi_arena_s::load(
						memory_order __m);  // 587
					atomic<mi_arena_s::load(
						memory_order __m);  // 1334
					atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
										memory_order __m);  // 70
					mi_arena_from_index(mi_subproc_t* subproc,
								size_t idx);  // 475
				}
				{
					void* p; // 477
				}
				mi_arena_is_suitable(mi_arena_t* arena,
							mi_arena_t* req_arena);  // 387
				{
					const bool  numa_suitable; // 389
				}
				mi_arena_is_suitable_ex(mi_arena_t* arena,
							mi_arena_t* req_arena,
							bool match_numa,
							int numa_node,
							bool allow_pinned);  // 385
				mi_arena_is_suitable_ex(mi_arena_t* arena,
							mi_arena_t* req_arena,
							bool match_numa,
							int numa_node,
							bool allow_pinned);  // 475
			}
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 65
		mi_arenas_get_count(mi_subproc_t* subproc); // 475
	}
	{
		const size_t  _arena_count; // 484
		const size_t  _arena_cycle; // 484
		const size_t  _start; // 484
		{
			size_t _i; // 484
			{
				mi_arena_t* arena; // 484
				{
					size_t _idx; // 484
					__atomic_base<long unsigned int>::load(
						memory_order __m);  // 1334
					atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
										memory_order __m);  // 65
					mi_arenas_get_count(mi_subproc_t* subproc); // 69
					__atomic_base<mi_arena_s::load(
						memory_order __m);  // 587
					atomic<mi_arena_s::load(
						memory_order __m);  // 1334
					atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
										memory_order __m);  // 70
					mi_arena_from_index(mi_subproc_t* subproc,
								size_t idx);  // 484
				}
				{
					void* p; // 486
				}
				mi_arena_is_suitable(mi_arena_t* arena,
							mi_arena_t* req_arena);  // 387
				{
					const bool  numa_suitable; // 389
				}
				mi_arena_is_suitable_ex(mi_arena_t* arena,
							mi_arena_t* req_arena,
							bool match_numa,
							int numa_node,
							bool allow_pinned);  // 385
				mi_arena_is_suitable_ex(mi_arena_t* arena,
							mi_arena_t* req_arena,
							bool match_numa,
							int numa_node,
							bool allow_pinned);  // 484
			}
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 65
		mi_arenas_get_count(mi_subproc_t* subproc); // 484
	}
} /* size: 0, variables: 1 */

// <00313407> ../thirdparty/mimalloc/src/arena.c:494
// variables: 9
// function calls: 61
void* mi_arenas_try_alloc(mi_heap_t* heap, size_t slice_count, size_t alignment, bool commit, bool allow_large, mi_arena_t* req_arena, size_t tseq, int numa_node, mi_memid_t* memid)
{
	const char   __func__; // 5857
	void* p; // 502
	const mi_subproc_t* subproc; // 521
	const size_t  arena_count; // 522
	{
		bool _mi_go; // 523
		{
			mi_arena_id_t arena_id; // 526
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 65
			mi_arenas_get_count(mi_subproc_t* subproc); // 312
			mi_option_get(mi_option_t option); // 287
			mi_mul_overflow(size_t count,
					size_t size,
					size_t* total);  // 290
			mi_option_get_size(mi_option_t option); // 316
			_mi_os_has_virtual_reserve(void); // 319
			_mi_align_up(uintptr_t sz,
					size_t alignment);  // 322
			{
				const size_t  multiplier; // 326
				size_t reserve; // 327
				mi_mul_overflow(size_t count,
						size_t size,
						size_t* total);  // 328
			}
			_mi_align_up(uintptr_t sz,
					size_t alignment);  // 334
			_mi_os_has_overcommit(void); // 354
			mi_option_get(mi_option_t option); // 355
			{
				const size_t  small_arena_reserve; // 367
				__atomic_base<long int>::fetch_add(
						__int_type __i,
						memory_order __m);  // 1502
				atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
									__atomic_diff_t __i,
									memory_order __m);  // 136
				mi_atomic_addi64_relaxed(volatile int64_t* p,
							int64_t add);  // 71
				__atomic_base<long int>::fetch_add(
						__int_type __i,
						memory_order __m);  // 1502
				atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
									__atomic_diff_t __i,
									memory_order __m);  // 136
				mi_atomic_addi64_relaxed(volatile int64_t* p,
							int64_t add);  // 72
				mi_stat_adjust_mt(mi_stat_count_t* stat,
							int64_t amount);  // 68
				mi_stat_adjust_mt(mi_stat_count_t* stat,
							int64_t amount);  // 82
				__mi_stat_adjust_increase_mt(mi_stat_count_t* stat,
								size_t amount);  // 365
				__atomic_base<long int>::fetch_add(
						__int_type __i,
						memory_order __m);  // 1502
				atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
									__atomic_diff_t __i,
									memory_order __m);  // 136
				mi_atomic_addi64_relaxed(volatile int64_t* p,
							int64_t add);  // 71
				__atomic_base<long int>::fetch_add(
						__int_type __i,
						memory_order __m);  // 1502
				atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
									__atomic_diff_t __i,
									memory_order __m);  // 136
				mi_atomic_addi64_relaxed(volatile int64_t* p,
							int64_t add);  // 72
				mi_stat_adjust_mt(mi_stat_count_t* stat,
							int64_t amount);  // 68
				mi_stat_adjust_mt(mi_stat_count_t* stat,
							int64_t amount);  // 88
				__mi_stat_adjust_decrease_mt(mi_stat_count_t* stat,
								size_t amount);  // 370
				__atomic_base<long int>::fetch_add(
						__int_type __i,
						memory_order __m);  // 1502
				atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
									__atomic_diff_t __i,
									memory_order __m);  // 136
				mi_atomic_addi64_relaxed(volatile int64_t* p,
							int64_t add);  // 71
				__atomic_base<long int>::fetch_add(
						__int_type __i,
						memory_order __m);  // 1502
				atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
									__atomic_diff_t __i,
									memory_order __m);  // 136
				mi_atomic_addi64_relaxed(volatile int64_t* p,
							int64_t add);  // 72
				mi_stat_adjust_mt(mi_stat_count_t* stat,
							int64_t amount);  // 68
				mi_stat_adjust_mt(mi_stat_count_t* stat,
							int64_t amount);  // 82
				__mi_stat_adjust_increase_mt(mi_stat_count_t* stat,
								size_t amount);  // 372
			}
			mi_option_get(mi_option_t option); // 356
			__atomic_base<long int>::fetch_add(
					__int_type __i,
					memory_order __m);  // 1502
			atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
								__atomic_diff_t __i,
								memory_order __m);  // 136
			mi_atomic_addi64_relaxed(volatile int64_t* p,
						int64_t add);  // 71
			__atomic_base<long int>::fetch_add(
					__int_type __i,
					memory_order __m);  // 1502
			atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
								__atomic_diff_t __i,
								memory_order __m);  // 136
			mi_atomic_addi64_relaxed(volatile int64_t* p,
						int64_t add);  // 72
			mi_stat_adjust_mt(mi_stat_count_t* stat,
						int64_t amount);  // 68
			mi_stat_adjust_mt(mi_stat_count_t* stat,
						int64_t amount);  // 88
			__mi_stat_adjust_decrease_mt(mi_stat_count_t* stat,
							size_t amount);  // 361
			mi_arena_reserve(mi_subproc_t* subproc,
					size_t req_size,
					bool allow_large,
					mi_arena_id_t* arena_id);  // 527
		}
		mi_lock_acquire(mi_lock_t* lock); // 523
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 65
		mi_arenas_get_count(mi_subproc_t* subproc); // 524
		mi_lock_release(mi_lock_t* lock); // 523
	}
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 518
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 65
	mi_arenas_get_count(mi_subproc_t* subproc); // 522
} /* size: 0, variables: 4, inline expansions: 6 (205 bytes) */

// <00313399> ../thirdparty/mimalloc/src/arena.c:542
void* mi_arena_os_alloc_aligned(size_t size, size_t alignment, size_t align_offset, bool commit, bool allow_large, mi_arena_id_t req_arena_id, mi_memid_t* memid)
{
} /* size: 0 */

// <00312D8C> ../thirdparty/mimalloc/src/arena.c:563
// variables: 4
// function calls: 14
void* _mi_arenas_alloc_aligned(mi_heap_t* heap, size_t size, size_t alignment, size_t align_offset, bool commit, bool allow_large, mi_arena_t* req_arena, size_t tseq, int numa_node, mi_memid_t* memid)
{
	const char   __func__; // 5824
	void* p; // 582
	{
		const size_t  slice_count; // 576
		void* p; // 577
		_mi_divide_up(uintptr_t size,
				size_t divider);  // 1106
		mi_slice_count_of_size(size_t size); // 576
	}
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 572
	mi_option_get(mi_option_t option); // 287
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 290
	mi_option_get_size(mi_option_t option); // 97
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 98
	mi_arena_max_object_size(void); // 573
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 548
	mi_arena_os_alloc_aligned(size_t size,
					size_t alignment,
					size_t align_offset,
					bool commit,
					bool allow_large,
					mi_arena_id_t req_arena_id,
					mi_memid_t* memid);  // 542
	mi_arena_os_alloc_aligned(size_t size,
					size_t alignment,
					size_t align_offset,
					bool commit,
					bool allow_large,
					mi_arena_id_t req_arena_id,
					mi_memid_t* memid);  // 582
} /* size: 0, variables: 2, inline expansions: 12 (1114 bytes) */

// <00312D0C> ../thirdparty/mimalloc/src/arena.c:586
void* _mi_arenas_alloc(mi_heap_t* heap, size_t size, bool commit, bool allow_large, mi_arena_t* req_arena, size_t tseq, int numa_node, mi_memid_t* memid)
{
} /* size: 0 */

// <00312CBA> ../thirdparty/mimalloc/src/arena.c:599
// variables: 3
bool mi_abandoned_page_unown(mi_page_t* page, mi_theap_t* current_theap)
{
	const char   __func__; // 63973
	mi_thread_free_t tf_new; // 603
	mi_thread_free_t tf_old; // 604
} /* size: 0, variables: 3 */

// <00312A91> ../thirdparty/mimalloc/src/arena.c:623
// variables: 2
// function calls: 6
bool mi_arena_try_claim_abandoned(size_t slice_index, mi_arena_t* arena, bool* keep_abandoned)
{
	const mi_page_t* page; // 625
	{
		const mi_page_t* page; // 148
	}
	mi_size_of_slices(size_t bcount); // 142
	mi_arena_slice_start(mi_arena_t* arena,
				size_t slice_index);  // 157
	mi_arena_page_at_slice(mi_arena_t* arena,
				size_t slice_index);  // 625
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 949
	mi_page_claim_ownership(mi_page_t* page); // 627
} /* size: 0, variables: 1, inline expansions: 6 (89 bytes) */

// <0033DD1D> ../thirdparty/mimalloc/src/arena.c:645
mi_arena_pages_t* mi_heap_arena_pages(mi_arena_t* arena, mi_heap_t* heap)
{
} /* size: 35 */

// <00312A59> ../thirdparty/mimalloc/src/arena.c:645
// variable: 1
mi_arena_pages_t* mi_heap_arena_pages(mi_heap_t* heap, mi_arena_t* arena)
{
	const char   __func__; // 5857
} /* size: 0, variables: 1 */

// <00312563> ../thirdparty/mimalloc/src/arena.c:652
// variables: 3
// function calls: 13
mi_arena_t* mi_page_arena_pages(mi_page_t* page, size_t* slice_index, size_t* slice_count, mi_arena_pages_t** parena_pages)
{
	const char   __func__; // 5857
	const mi_arena_t* arena; // 655
	{
		const mi_arena_pages_t* arena_pages; // 658
		mi_page_heap(const mi_page_t* page); // 658
		__atomic_base<mi_arena_pages_s::load(
			memory_order __m);  // 587
		atomic<mi_arena_pages_s::load(
			memory_order __m);  // 1334
		atomic_load_explicit<mi_arena_pages_s*>(const atomic<mi_arena_pages_s*>* __a,
							memory_order __m);  // 649
		mi_heap_arena_pages(mi_heap_t* heap,
					mi_arena_t* arena);  // 658
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 182
		mi_bitmap_is_set(mi_bitmap_t* bitmap,
				size_t idx);  // 660
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 654
	mi_arena_from_memid(mi_memid_t memid,
				size_t* slice_index,
				size_t* slice_count);  // 187
	mi_arena_from_memid(mi_memid_t memid,
				size_t* slice_index,
				size_t* slice_count);  // 655
} /* size: 0, variables: 2, inline expansions: 6 (99 bytes) */

// <00311A79> ../thirdparty/mimalloc/src/arena.c:666
// variables: 4
// function calls: 30
mi_arena_pages_t* mi_heap_ensure_arena_pages(mi_heap_t* heap, mi_arena_t* arena)
{
	const char   __func__; // 595
	mi_arena_pages_t* arena_pages; // 670
	{
		bool _mi_go; // 672
		mi_lock_acquire(mi_lock_t* lock); // 672
		__atomic_base<mi_arena_pages_s::load(
			memory_order __m);  // 587
		atomic<mi_arena_pages_s::load(
			memory_order __m);  // 1334
		atomic_load_explicit<mi_arena_pages_s*>(const atomic<mi_arena_pages_s*>* __a,
							memory_order __m);  // 673
		mi_lock_release(mi_lock_t* lock); // 672
		__atomic_base<mi_arena_pages_s::store(
			__pointer_type __p,
			memory_order __m);  // 578
		atomic<mi_arena_pages_s::store(
			__pointer_type __p,
			memory_order __m);  // 1323
		atomic_store_explicit<mi_arena_pages_s*>(atomic<mi_arena_pages_s*>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 684
		_mi_align_up(uintptr_t sz,
				size_t alignment);  // 1020
		mi_bitmap_size(size_t bit_count,
				size_t* pchunk_count);  // 1425
		mi_arena_pages_size(size_t slice_count,
					size_t* bitmap_base);  // 1467
		_mi_theap_cached(void); // 505
		__atomic_base<mi_heap_s::load(
			memory_order __m);  // 587
		atomic<mi_heap_s::load(
			memory_order __m);  // 1334
		atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
						memory_order __m);  // 571
		_mi_theap_heap(const mi_theap_t* theap); // 509
		_mi_heap_theap(const mi_heap_t* heap); // 315
		mi_theap_malloc_zero_aligned_at(const mi_theap_t* theap,
						const size_t  size,
						const size_t  alignment,
						const size_t  offset,
						const bool  zero,
						size_t* usable);  // 247
		mi_theap_zalloc_aligned_at(mi_theap_t* theap,
						size_t size,
						size_t alignment,
						size_t offset);  // 251
		mi_theap_zalloc_aligned(mi_theap_t* theap,
					size_t size,
					size_t alignment);  // 315
		mi_heap_zalloc_aligned(mi_heap_t* heap,
					size_t size,
					size_t alignment);  // 1468
		_mi_is_aligned(const void* p,
				size_t alignment);  // 1471
		mi_arena_bitmap_init(size_t slice_count,
					uint8_t** base);  // 1472
		{
			size_t i; // 1473
			mi_arena_bitmap_init(size_t slice_count,
						uint8_t** base);  // 1474
		}
		mi_arena_pages_alloc(mi_arena_t* arena); // 682
	}
	__atomic_base<mi_arena_pages_s::load(
		memory_order __m);  // 587
	atomic<mi_arena_pages_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_arena_pages_s*>(const atomic<mi_arena_pages_s*>* __a,
						memory_order __m);  // 649
	mi_heap_arena_pages(mi_heap_t* heap,
				mi_arena_t* arena);  // 670
	_mi_is_heap_main(const mi_heap_t* heap); // 688
} /* size: 0, variables: 2, inline expansions: 5 (44 bytes) */

// <00311931> ../thirdparty/mimalloc/src/arena.c:692
// variables: 18
mi_page_t* mi_arenas_page_try_find_abandoned(mi_theap_t* theap, size_t slice_count, size_t block_size)
{
	const mi_heap_t* heap; // 694
	const size_t  tseq; // 695
	const mi_arena_t* req_arena; // 696
	const size_t  bin; // 699
	const char   __func__; // 22760
	const bool  allow_large; // 709
	const int  any_numa; // 710
	const bool  match_numa; // 711
	{
		const size_t  _arena_count; // 712
		const size_t  _arena_cycle; // 712
		const size_t  _start; // 712
		{
			size_t _i; // 712
			{
				mi_arena_t* arena; // 712
				{
					size_t _idx; // 712
				}
				{
					const mi_arena_pages_t* arena_pages; // 714
					{
						size_t slice_index; // 716
						const mi_bitmap_t* bitmap; // 717
						{
							mi_page_t* page; // 722
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 8 */

// <00311841> ../thirdparty/mimalloc/src/arena.c:746
// variables: 10
uint8_t* mi_arenas_page_alloc_fresh_area(mi_theap_t* theap, size_t slice_count, size_t block_size, size_t block_alignment, bool os_align, bool commit, mi_memid_t* memid)
{
	const bool  allow_large; // 748
	const size_t  page_alignment; // 749
	const mi_heap_t* heap; // 751
	const mi_tld_t* tld; // 752
	const mi_arena_t* req_arena; // 753
	const int  numa_node; // 754
	uint8_t* start; // 757
	const size_t  alloc_size; // 759
	const char   __func__; // 22194
	{
		const mi_arena_pages_t* arena_pages; // 766
	}
} /* size: 0, variables: 9 */

// <00311814> ../thirdparty/mimalloc/src/arena.c:796
size_t mi_page_block_start(size_t block_size, bool os_align)
{
} /* size: 0 */

// <0030F81A> ../thirdparty/mimalloc/src/arena.c:826
// variables: 16
// function calls: 96
mi_page_t* mi_arenas_page_alloc_fresh(mi_theap_t* theap, size_t slice_count, size_t block_size, size_t block_alignment, bool commit)
{
	const bool  os_align; // 828
	const size_t  alloc_size; // 829
	mi_memid_t memid; // 830
	const uint8_t* slice_start; // 831
	const size_t  page_noguard_size; // 842
	mi_page_t* page; // 846
	bool page_meta_is_separate; // 847
	size_t block_start; // 848
	const char   __func__; // 595
	size_t commit_size; // 884
	const size_t  reserved; // 914
	{
		const mi_arena_t* arena; // 852
		{
			const mi_page_t* page_meta; // 855
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
						size_t n);  // 1278
			_mi_memzero_aligned(void* dst,
						size_t n);  // 873
			_mi_is_power_of_two(uintptr_t x); // 869
		}
	}
	{
		bool is_zero; // 888
		mi_memid_arena(mi_memid_t memid); // 889
		_mi_align_up(uintptr_t sz,
				size_t alignment);  // 886
		_mi_os_commit(void* addr,
				size_t size,
				bool* is_zero);  // 118
		mi_arena_commit(mi_arena_t* arena,
				void* start,
				size_t size,
				bool* is_zero,
				size_t already_committed);  // 110
		mi_arena_commit(mi_arena_t* arena,
				void* start,
				size_t size,
				bool* is_zero,
				size_t already_committed);  // 889
	}
	mi_size_of_slices(size_t bcount); // 829
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1121
	_mi_memid_create(mi_memkind_t memkind); // 1127
	_mi_memid_none(void); // 830
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 751
	_mi_memid_create(mi_memkind_t memkind); // 1127
	_mi_memid_none(void); // 758
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 760
	mi_option_get(mi_option_t option); // 287
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 290
	mi_option_get_size(mi_option_t option); // 97
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 98
	mi_arena_max_object_size(void); // 762
	{
		const mi_arena_pages_t* arena_pages; // 766
		mi_bitmap_is_clearN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 772
		mi_bitmap_set(mi_bitmap_t* bitmap,
				size_t idx);  // 773
	}
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1106
	mi_slice_count_of_size(size_t size); // 782
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 548
	mi_arena_os_alloc_aligned(size_t size,
					size_t alignment,
					size_t align_offset,
					bool commit,
					bool allow_large,
					mi_arena_id_t req_arena_id,
					mi_memid_t* memid);  // 542
	mi_arena_os_alloc_aligned(size_t size,
					size_t alignment,
					size_t align_offset,
					bool commit,
					bool allow_large,
					mi_arena_id_t req_arena_id,
					mi_memid_t* memid);  // 783
	_mi_is_aligned(const void* p,
			size_t alignment);  // 791
	_mi_is_aligned(const void* p,
			size_t alignment);  // 792
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 548
	mi_arena_os_alloc_aligned(size_t size,
					size_t alignment,
					size_t align_offset,
					bool commit,
					bool allow_large,
					mi_arena_id_t req_arena_id,
					mi_memid_t* memid);  // 542
	mi_arena_os_alloc_aligned(size_t size,
					size_t alignment,
					size_t align_offset,
					bool commit,
					bool allow_large,
					mi_arena_id_t req_arena_id,
					mi_memid_t* memid);  // 786
	mi_arenas_page_alloc_fresh_area(mi_theap_t* theap,
					size_t slice_count,
					size_t block_size,
					size_t block_alignment,
					bool os_align,
					bool commit,
					mi_memid_t* memid);  // 831
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
				size_t n);  // 1278
	_mi_memzero_aligned(void* dst,
				size_t n);  // 895
	_mi_is_power_of_two(uintptr_t x); // 811
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 813
	mi_page_block_start(size_t block_size,
				bool os_align);  // 880
	{
		size_t i; // 503
	}
	mi_mem_is_zero(const void* p,
			size_t size);  // 907
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 484
	_mi_align_down_ptr(const void* p,
				size_t alignment);  // 726
	mi_page_meta_is_separated(const mi_page_t* page); // 925
	mi_page_slice_start(const mi_page_t* page); // 926
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 949
	mi_page_claim_ownership(mi_page_t* page); // 929
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 938
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 939
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 941
	_mi_is_aligned(const void* p,
			size_t alignment);  // 941
	mi_page_start(const mi_page_t* page); // 942
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
	_mi_ptr_page(const void* p); // 942
	mi_page_block_size(const mi_page_t* page); // 943
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 944
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 945
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
				size_t n);  // 1278
	_mi_memzero_aligned(void* dst,
				size_t n);  // 910
} /* size: 0, variables: 11, inline expansions: 82 (3893 bytes) */

// <003571FC> ../thirdparty/mimalloc/src/arena.c:951
// variables: 14
// function calls: 69
mi_page_t* mi_arenas_page_regular_alloc(mi_theap_t* theap, size_t slice_count, size_t block_size)
{
	mi_page_t* page; // 954
	const long int  commit_on_demand; // 960
	const bool  commit; // 961
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 694
	_mi_bin(size_t size); // 699
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 704
	{
		const size_t  _arena_count; // 712
		const size_t  _arena_cycle; // 712
		const size_t  _start; // 712
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 65
		mi_arenas_get_count(mi_subproc_t* subproc); // 712
		{
			size_t _i; // 712
			{
				mi_arena_t* arena; // 712
				{
					size_t _idx; // 712
					__atomic_base<long unsigned int>::load(
						memory_order __m);  // 1334
					atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
										memory_order __m);  // 65
					mi_arenas_get_count(mi_subproc_t* subproc); // 69
					__atomic_base<mi_arena_s::load(
						memory_order __m);  // 587
					atomic<mi_arena_s::load(
						memory_order __m);  // 1334
					atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
										memory_order __m);  // 70
					mi_arena_from_index(mi_subproc_t* subproc,
								size_t idx);  // 712
				}
				mi_arena_is_suitable(mi_arena_t* arena,
							mi_arena_t* req_arena);  // 387
				mi_arena_is_suitable_ex(mi_arena_t* arena,
							mi_arena_t* req_arena,
							bool match_numa,
							int numa_node,
							bool allow_pinned);  // 712
				{
					const mi_arena_pages_t* arena_pages; // 714
					__atomic_base<mi_arena_pages_s::load(
						memory_order __m);  // 587
					atomic<mi_arena_pages_s::load(
						memory_order __m);  // 1334
					atomic_load_explicit<mi_arena_pages_s*>(const atomic<mi_arena_pages_s*>* __a,
										memory_order __m);  // 649
					mi_heap_arena_pages(mi_heap_t* heap,
								mi_arena_t* arena);  // 714
					{
						size_t slice_index; // 716
						const mi_bitmap_t* bitmap; // 717
						mi_bitmap_try_find_and_claim(mi_bitmap_t* bitmap,
										size_t tseq,
										size_t* pidx,
										mi_claim_fun_t* claim,
										mi_arena_t* arena);  // 719
						{
							mi_page_t* page; // 722
							{
								const mi_page_t* page; // 148
							}
							mi_size_of_slices(size_t bcount); // 142
							mi_arena_slice_start(mi_arena_t* arena,
										size_t slice_index);  // 157
							mi_arena_page_at_slice(mi_arena_t* arena,
										size_t slice_index);  // 722
							__atomic_base<long unsigned int>::load(
								memory_order __m);  // 1334
							atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
												memory_order __m);  // 944
							mi_tf_is_owned(mi_thread_free_t tf); // 944
							mi_page_is_owned(const mi_page_t* page); // 723
							__atomic_base<long unsigned int>::load(
								memory_order __m);  // 1334
							atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
												memory_order __m);  // 816
							mi_page_xthread_id(const mi_page_t* page); // 821
							mi_page_thread_id(const mi_page_t* page); // 877
							mi_page_is_abandoned(const mi_page_t* page); // 724
							__atomic_base<mi_arena_pages_s::load(
								memory_order __m);  // 704
							__atomic_base<mi_arena_pages_s::operator std::__atomic_base<mi_arena_pages_s*>::__pointer_type(); // 441
							atomic<mi_arena_pages_s::operator std::atomic<mi_arena_pages_s*>::__pointer_type(); // 80
							mi_bitmap_is_setN(mi_bitmap_t* bitmap,
										size_t idx,
										size_t n);  // 84
							mi_heap_has_page(mi_heap_t* heap,
									mi_arena_t* arena,
									mi_page_t* page);  // 725
							__atomic_base<long unsigned int>::fetch_sub(
									__int_type __i,
									memory_order __m);  // 1516
							atomic_fetch_sub_explicit<long unsigned int>(atomic<long unsigned int>* __a,
													__atomic_diff_t __i,
													memory_order __m);  // 726
							mi_stat_update(mi_stat_count_t* stat,
									int64_t amount);  // 33
							mi_stat_update(mi_stat_count_t* stat,
									int64_t amount);  // 61
							__mi_stat_decrease(mi_stat_count_t* stat,
										size_t amount);  // 727
							__mi_stat_counter_increase(mi_stat_counter_t* stat,
											size_t amount);  // 728
							mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap,
										size_t idx,
										size_t n);  // 731
							mi_bitmap_is_setN(mi_bitmap_t* bitmap,
										size_t idx,
										size_t n);  // 732
							mi_bitmap_is_setN(mi_bitmap_t* bitmap,
										size_t idx,
										size_t n);  // 733
							mi_page_meta_is_separated(const mi_page_t* page); // 734
							mi_page_slice_start(const mi_page_t* page); // 734
							_mi_is_aligned(const void* p,
									size_t alignment);  // 734
							mi_page_start(const mi_page_t* page); // 735
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
							_mi_ptr_page(const void* p); // 735
							mi_page_block_size(const mi_page_t* page); // 736
							mi_page_is_full(const mi_page_t* page); // 737
						}
					}
				}
			}
		}
	}
	mi_arenas_page_try_find_abandoned(mi_theap_t* theap,
						size_t slice_count,
						size_t block_size);  // 954
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 960
	_mi_os_has_overcommit(void); // 962
	mi_arenas_page_regular_alloc(mi_theap_t* theap,
					size_t slice_count,
					size_t block_size);  // 951
} /* size: 0, variables: 3, inline expansions: 12 (1748 bytes) */

// <0030F7AE> ../thirdparty/mimalloc/src/arena.c:951
// variables: 4
mi_page_t* mi_arenas_page_regular_alloc(mi_theap_t* theap, size_t slice_count, size_t block_size)
{
	mi_page_t* page; // 954
	const long int  commit_on_demand; // 960
	const bool  commit; // 961
	const char   __func__; // 1309
} /* size: 0, variables: 4 */

// <0030F52C> ../thirdparty/mimalloc/src/arena.c:976
// variables: 5
// function calls: 6
mi_page_t* mi_arenas_page_singleton_alloc(mi_theap_t* theap, size_t block_size, size_t block_alignment)
{
	const bool  os_align; // 978
	const size_t  info_size; // 979
	const size_t  slice_count; // 983
	mi_page_t* page; // 986
	const char   __func__; // 55026
	_mi_os_page_size(void); // 69
	_mi_os_guard_page_size(void); // 169
	_mi_os_secure_guard_page_size(void); // 983
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 983
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1106
	mi_slice_count_of_size(size_t size); // 983
} /* size: 0, variables: 5, inline expansions: 6 (147 bytes) */

// <0030EF44> ../thirdparty/mimalloc/src/arena.c:999
// variables: 2
// function calls: 17
mi_page_t* _mi_arenas_page_alloc(mi_theap_t* theap, size_t block_size, size_t block_alignment)
{
	mi_page_t* page; // 1000
	const char   __func__; // 15154
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 484
	_mi_align_down_ptr(const void* p,
				size_t alignment);  // 726
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
	mi_page_start(const mi_page_t* page); // 1025
	_mi_is_aligned(const void* p,
			size_t alignment);  // 1025
	_mi_is_power_of_two(uintptr_t x); // 1002
} /* size: 0, variables: 2, inline expansions: 17 (280 bytes) */

// <0030D4F1> ../thirdparty/mimalloc/src/arena.c:1030
// variables: 13
// function calls: 78
void _mi_arenas_page_free(mi_page_t* page, mi_theap_t* current_theapx)
{
	const char   __func__; // 65207
	{
		const mi_heap_t* heap; // 1044
		mi_page_heap(const mi_page_t* page); // 1044
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
					size_t amount);  // 1045
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
					size_t amount);  // 1046
	}
	{
		size_t bin; // 1051
		size_t slice_index; // 1052
		size_t slice_count; // 1053
		mi_arena_pages_t* arena_pages; // 1054
		const mi_arena_t* arena; // 1055
		mi_page_block_size(const mi_page_t* page); // 1051
		_mi_bin(size_t size); // 1051
		mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap,
					size_t idx,
					size_t n);  // 1056
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 1057
		mi_bitmap_is_clearN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 1058
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 1059
	}
	{
		mi_arena_pages_t* arena_pages; // 1077
		size_t slice_index; // 1078
		size_t slice_count; // 1079
		const mi_arena_t* arena; // 1080
		{
			const size_t  total_slices; // 1086
			const size_t  extra; // 1093
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
						size_t amount);  // 1096
		}
		mi_bitmap_clear(mi_bitmap_t* bitmap,
				size_t idx);  // 1082
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 1100
	}
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 1031
	_mi_is_aligned(const void* p,
			size_t alignment);  // 1031
	mi_page_start(const mi_page_t* page); // 1032
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
	_mi_ptr_page(const void* p); // 1032
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 1033
	mi_page_all_free(const mi_page_t* page); // 1034
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 1035
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 1037
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 61
	__mi_stat_decrease(mi_stat_count_t* stat,
				size_t amount);  // 1040
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 61
	__mi_stat_decrease(mi_stat_count_t* stat,
				size_t amount);  // 1041
	mi_page_is_full(const mi_page_t* page); // 1050
	mi_page_slice_start(const mi_page_t* page); // 1104
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 484
	_mi_align_down_ptr(const void* p,
				size_t alignment);  // 726
	mi_page_meta_is_separated(const mi_page_t* page); // 1103
} /* size: 0, variables: 1, inline expansions: 36 (722 bytes) */

// <0030BB67> ../thirdparty/mimalloc/src/arena.c:1111
// variables: 9
// function calls: 77
void _mi_arenas_page_abandon(mi_page_t* page, mi_theap_t* current_theap)
{
	const char   __func__; // 63973
	mi_heap_t* heap; // 1121
	{
		size_t bin; // 1124
		size_t slice_index; // 1125
		size_t slice_count; // 1126
		mi_arena_pages_t* arena_pages; // 1127
		const mi_arena_t* arena; // 1128
		const bool  was_clear; // 1136
		mi_page_block_size(const mi_page_t* page); // 1124
		_mi_bin(size_t size); // 1124
		mi_page_is_singleton(const mi_page_t* page); // 1130
		mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap,
					size_t idx,
					size_t n);  // 1131
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 1132
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 1133
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 816
		mi_page_xthread_id(const mi_page_t* page); // 821
		mi_page_thread_id(const mi_page_t* page); // 877
		mi_page_is_abandoned(const mi_page_t* page); // 885
		__atomic_base<long unsigned int>::fetch_or(
			__int_type __i,
			memory_order __m);  // 1544
		atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
								__atomic_val_t __i,
								memory_order __m);  // 886
		mi_page_set_abandoned_mapped(mi_page_t* page); // 1135
		mi_bitmap_set(mi_bitmap_t* bitmap,
				size_t idx);  // 1136
		__atomic_base<long unsigned int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1502
		atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_diff_t __i,
								memory_order __m);  // 1138
		mi_stat_update(mi_stat_count_t* stat,
				int64_t amount);  // 33
		mi_stat_update(mi_stat_count_t* stat,
				int64_t amount);  // 54
		__mi_stat_increase(mi_stat_count_t* stat,
					size_t amount);  // 1139
	}
	{
		bool _mi_go; // 1146
		mi_lock_acquire(mi_lock_t* lock); // 1146
		mi_lock_release(mi_lock_t* lock); // 1146
	}
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 1112
	_mi_is_aligned(const void* p,
			size_t alignment);  // 1112
	mi_page_start(const mi_page_t* page); // 1113
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
	_mi_ptr_page(const void* p); // 1113
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 1114
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 1115
	mi_page_all_free(const mi_page_t* page); // 1116
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 1118
	mi_page_heap(const mi_page_t* page); // 1121
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 1121
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 1145
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 1154
	mi_page_is_full(const mi_page_t* page); // 1122
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 600
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 601
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 604
	mi_tf_is_owned(mi_thread_free_t tf); // 606
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 618
	mi_page_all_free(const mi_page_t* page); // 609
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 614
	mi_abandoned_page_unown(mi_page_t* page,
				mi_theap_t* current_theap);  // 1156
} /* size: 0, variables: 2, inline expansions: 55 (1142 bytes) */

// <0030AD45> ../thirdparty/mimalloc/src/arena.c:1161
// variables: 2
// function calls: 50
bool _mi_arenas_page_try_reabandon_to_mapped(mi_page_t* page)
{
	const char   __func__; // 63958
	{
		const mi_theap_t* theap; // 1175
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
		_mi_page_associated_theap_peek(mi_page_t* page); // 1175
		__mi_stat_counter_increase(mi_stat_counter_t* stat,
						size_t amount);  // 1180
		mi_stat_adjust(mi_stat_count_t* stat,
				int64_t amount);  // 75
		mi_stat_adjust(mi_stat_count_t* stat,
				int64_t amount);  // 91
		__mi_stat_adjust_decrease(mi_stat_count_t* stat,
						size_t amount);  // 1181
	}
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 1162
	_mi_is_aligned(const void* p,
			size_t alignment);  // 1162
	mi_page_start(const mi_page_t* page); // 1163
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
	_mi_ptr_page(const void* p); // 1163
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 1164
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 1165
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 881
	mi_page_is_abandoned_mapped(const mi_page_t* page); // 1166
	mi_page_is_full(const mi_page_t* page); // 1167
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 881
	mi_page_is_abandoned_mapped(const mi_page_t* page); // 1170
} /* size: 0, variables: 1, inline expansions: 32 (297 bytes) */

// <00309A57> ../thirdparty/mimalloc/src/arena.c:1189
// variables: 8
// function calls: 63
void _mi_arenas_page_unabandon(mi_page_t* page, mi_theap_t* current_theapx)
{
	const char   __func__; // 40853
	const mi_heap_t* heap; // 1196
	{
		size_t bin; // 1200
		size_t slice_index; // 1201
		size_t slice_count; // 1202
		mi_arena_pages_t* arena_pages; // 1203
		mi_arena_t* arena; // 1204
		mi_page_block_size(const mi_page_t* page); // 1200
		_mi_bin(size_t size); // 1200
		mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap,
					size_t idx,
					size_t n);  // 1206
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 816
		mi_page_xthread_id(const mi_page_t* page); // 821
		mi_page_thread_id(const mi_page_t* page); // 881
		mi_page_is_abandoned_mapped(const mi_page_t* page); // 890
		__atomic_base<long unsigned int>::fetch_and(
				__int_type __i,
				memory_order __m);  // 1530
		atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
								__atomic_val_t __i,
								memory_order __m);  // 891
		mi_page_clear_abandoned_mapped(mi_page_t* page); // 1211
		__atomic_base<long unsigned int>::fetch_sub(
				__int_type __i,
				memory_order __m);  // 1516
		atomic_fetch_sub_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_diff_t __i,
								memory_order __m);  // 1212
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 1207
	}
	{
		bool _mi_go; // 1218
		mi_lock_acquire(mi_lock_t* lock); // 1218
		mi_lock_release(mi_lock_t* lock); // 1218
	}
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 1190
	_mi_is_aligned(const void* p,
			size_t alignment);  // 1190
	mi_page_start(const mi_page_t* page); // 1191
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
	_mi_ptr_page(const void* p); // 1191
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 1192
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 1193
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 1194
	mi_page_heap(const mi_page_t* page); // 1196
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 881
	mi_page_is_abandoned_mapped(const mi_page_t* page); // 1197
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 1217
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 61
	__mi_stat_decrease(mi_stat_count_t* stat,
				size_t amount);  // 1228
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
				size_t amount);  // 1231
} /* size: 0, variables: 2, inline expansions: 47 (1103 bytes) */

// <0030907C> ../thirdparty/mimalloc/src/arena.c:1242
// variables: 7
// function calls: 21
void _mi_arenas_free(void* p, size_t size, mi_memid_t memid)
{
	const char   __func__; // 44947
	{
		size_t slice_count; // 1255
		size_t slice_index; // 1256
		mi_arena_t* arena; // 1257
		bool all_inuse; // 1281
		mi_arena_from_memid(mi_memid_t memid,
					size_t* slice_index,
					size_t* slice_count);  // 1257
		mi_size_of_slices(size_t bcount); // 142
		mi_arena_slice_start(mi_arena_t* arena,
					size_t slice_index);  // 1260
		mi_arena_info_slices(mi_arena_t* arena); // 1268
		mi_arena_slice_start(mi_arena_t* arena,
					size_t slice_index);  // 1283
		mi_option_get(mi_option_t option); // 270
		mi_option_get(mi_option_t option); // 2015
		mi_option_get(mi_option_t option); // 2015
		mi_arena_purge_delay(void); // 2053
		mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap,
					size_t idx,
					size_t n);  // 2056
		{
			const mi_msecs_t  expire; // 2063
			mi_msecs_t expire0; // 2064
			_mi_prim_clock_now(void); // 523
			_mi_clock_now(void); // 2063
			__atomic_base<long int>::compare_exchange_strong(
						__int_type& __i1,
						__int_type __i2,
						memory_order __m1,
						memory_order __m2);  // 1380
			atomic_compare_exchange_strong_explicit<long int>(atomic<long int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 2065
			__atomic_base<long int>::compare_exchange_strong(
						__int_type& __i1,
						__int_type __i2,
						memory_order __m1,
						memory_order __m2);  // 1380
			atomic_compare_exchange_strong_explicit<long int>(atomic<long int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 2069
		}
		mi_arena_schedule_purge(mi_arena_t* arena,
					size_t slice_index,
					size_t slice_count);  // 1277
	}
	mi_memkind_is_os(mi_memkind_t memkind); // 1249
	mi_memkind_needs_no_free(mi_memkind_t memkind); // 311
	mi_memid_needs_no_free(mi_memid_t memid); // 1292
	_mi_os_free(void* p,
			size_t size,
			mi_memid_t memid);  // 1251
} /* size: 0, variables: 1, inline expansions: 4 (35 bytes) */

// <00309041> ../thirdparty/mimalloc/src/arena.c:1300
void _mi_arenas_collect(bool force_purge, bool visit_all, mi_tld_t* tld)
{
} /* size: 0 */

// <00309016> ../thirdparty/mimalloc/src/arena.c:1306
bool mi_arena_strictly_contains(mi_arena_t* arena, const void* p)
{
} /* size: 0 */

// <00308D38> ../thirdparty/mimalloc/src/arena.c:1313
// variables: 4
// function calls: 10
bool mi_arenas_contain_ex(const void* p, mi_arena_t* parent)
{
	mi_subproc_t* subproc; // 1314
	const size_t  max_arena; // 1315
	{
		size_t i; // 1316
		{
			mi_arena_t* arena; // 1317
			__atomic_base<mi_arena_s::load(
				memory_order __m);  // 587
			atomic<mi_arena_s::load(
				memory_order __m);  // 1334
			atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
								memory_order __m);  // 1317
			mi_size_of_slices(size_t bcount); // 1309
			mi_arena_strictly_contains(mi_arena_t* arena,
							const void* p);  // 1320
		}
	}
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 1314
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 65
	mi_arenas_get_count(mi_subproc_t* subproc); // 1315
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <00308CDE> ../thirdparty/mimalloc/src/arena.c:1330
bool _mi_arenas_contain(const void* p)
{
} /* size: 0 */

// <00308BB3> ../thirdparty/mimalloc/src/arena.c:1335
// variable: 1
// function calls: 3
bool mi_arena_contains(mi_arena_id_t arena_id, const void* p)
{
	mi_arena_t* arena; // 1336
	_mi_arena_from_id(mi_arena_id_t id); // 1336
	mi_size_of_slices(size_t bcount); // 1309
	mi_arena_strictly_contains(mi_arena_t* arena,
					const void* p);  // 1338
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00308708> ../thirdparty/mimalloc/src/arena.c:1349
// variables: 5
// function calls: 14
void mi_arenas_unsafe_destroy(mi_subproc_t* subproc)
{
	const char   __func__; // 5824
	const size_t  arena_count; // 1351
	size_t expected; // 1363
	{
		size_t i; // 1352
		{
			mi_arena_t* arena; // 1353
			__atomic_base<mi_arena_s::load(
				memory_order __m);  // 587
			atomic<mi_arena_s::load(
				memory_order __m);  // 1334
			atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
								memory_order __m);  // 1353
			__atomic_base<mi_arena_s::store(
				__pointer_type __p,
				memory_order __m);  // 578
			atomic<mi_arena_s::store(
				__pointer_type __p,
				memory_order __m);  // 1323
			atomic_store_explicit<mi_arena_s*>(atomic<mi_arena_s*>* __a,
								__atomic_val_t __i,
								memory_order __m);  // 1356
			mi_memkind_is_os(mi_memkind_t memkind); // 1357
			mi_size_of_slices(size_t bcount); // 131
			mi_arena_size(mi_arena_t* arena); // 1358
		}
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 65
	mi_arenas_get_count(mi_subproc_t* subproc); // 1351
	__atomic_base<long unsigned int>::compare_exchange_strong(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1380
	atomic_compare_exchange_strong_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 1364
} /* size: 0, variables: 3, inline expansions: 5 (53 bytes) */

// <003086E7> ../thirdparty/mimalloc/src/arena.c:1370
void _mi_arenas_unsafe_destroy_all(mi_subproc_t* subproc)
{
} /* size: 0 */

// <0030867B> ../thirdparty/mimalloc/src/arena.c:1380
// variables: 4
bool mi_arenas_add(mi_subproc_t* subproc, mi_arena_t* arena, mi_arena_id_t* arena_id)
{
	const char   __func__; // 759
	mi_arena_t* expected; // 1387
	size_t count; // 1388
	{
		size_t i; // 1389
	}
} /* size: 0, variables: 3 */

// <0030860F> ../thirdparty/mimalloc/src/arena.c:1420
// variables: 5
size_t mi_arena_pages_size(size_t slice_count, size_t* bitmap_base)
{
	const char   __func__; // 5857
	const size_t  base_size; // 1423
	const size_t  bitmaps_count; // 1424
	const size_t  bitmaps_size; // 1425
	const size_t  size; // 1426
} /* size: 0, variables: 5 */

// <0030856F> ../thirdparty/mimalloc/src/arena.c:1431
// variables: 9
size_t mi_arena_info_slices_needed(size_t slice_count, size_t* bitmap_base)
{
	const char   __func__; // 5670
	const size_t  base_size; // 1434
	const size_t  bitmaps_count; // 1435
	const size_t  bitmaps_size; // 1436
	const size_t  pages_size; // 1438
	const size_t  size; // 1442
	const size_t  os_page_size; // 1444
	const size_t  info_size; // 1445
	const size_t  info_slices; // 1446
} /* size: 0, variables: 9 */

// <00308535> ../thirdparty/mimalloc/src/arena.c:1452
// variable: 1
mi_bitmap_t* mi_arena_bitmap_init(size_t slice_count, uint8_t** base)
{
	mi_bitmap_t* bitmap; // 1453
} /* size: 0, variables: 1 */

// <003084F5> ../thirdparty/mimalloc/src/arena.c:1458
// variable: 1
mi_bbitmap_t* mi_arena_bbitmap_init(size_t slice_count, uint8_t** base)
{
	mi_bbitmap_t* bbitmap; // 1459
} /* size: 0, variables: 1 */

// <0030847C> ../thirdparty/mimalloc/src/arena.c:1464
// variables: 7
mi_arena_pages_t* mi_arena_pages_alloc(mi_arena_t* arena)
{
	const size_t  slice_count; // 1465
	size_t bitmap_base; // 1466
	const size_t  size; // 1467
	mi_arena_pages_t* arena_pages; // 1468
	uint8_t* base; // 1470
	const char   __func__; // 65207
	{
		size_t i; // 1473
	}
} /* size: 0, variables: 6 */

// <0030836F> ../thirdparty/mimalloc/src/arena.c:1479
// variables: 8
mi_arena_t* mi_arena_initialize(mi_subproc_t* subproc, void* start, size_t slice_count, mi_arena_t* parent, size_t total_size, int numa_node, bool exclusive, mi_memid_t memid, mi_commit_fun_t* commit_fun, void* commit_fun_arg, mi_arena_id_t* arena_id)
{
	const char   __func__; // 5857
	size_t bitmap_base; // 1493
	const size_t  info_slices; // 1494
	mi_arena_t* arena; // 1504
	uint8_t* base; // 1546
	{
		size_t commit_size; // 1508
		bool ok; // 1511
	}
	{
		size_t i; // 1552
	}
} /* size: 0, variables: 5 */

// <00306E31> ../thirdparty/mimalloc/src/arena.c:1576
// variables: 12
// function calls: 62
bool mi_manage_os_memory_ex2(mi_subproc_t* subproc, void* start, size_t size, int numa_node, bool exclusive, mi_memid_t memid, mi_commit_fun_t* commit_fun, void* commit_fun_arg, mi_arena_id_t* arena_id)
{
	const char   __func__; // 63973
	size_t total_slice_count; // 1598
	size_t total_size; // 1599
	mi_arena_t* parent; // 1605
	{
		const void* aligned_start; // 1586
		const size_t  diff; // 1587
	}
	{
		size_t slice_count; // 1608
		mi_arena_t* arena; // 1614
		_mi_is_aligned(const void* p,
				size_t alignment);  // 1484
		mi_size_of_slices(size_t bcount); // 1485
		_mi_os_page_size(void); // 1444
		_mi_align_up(uintptr_t sz,
				size_t alignment);  // 1020
		mi_bitmap_size(size_t bit_count,
				size_t* pchunk_count);  // 1436
		mi_bbitmap_size(size_t bit_count,
				size_t* pchunk_count);  // 1436
		_mi_align_up(uintptr_t sz,
				size_t alignment);  // 1445
		_mi_os_guard_page_size(void); // 169
		_mi_os_secure_guard_page_size(void); // 1445
		_mi_divide_up(uintptr_t size,
				size_t divider);  // 1106
		mi_slice_count_of_size(size_t size); // 1446
		mi_arena_info_slices_needed(size_t slice_count,
						size_t* bitmap_base);  // 1494
		{
			size_t commit_size; // 1508
			bool ok; // 1511
			mi_size_of_slices(size_t bcount); // 1508
			_mi_os_commit(void* addr,
					size_t size,
					bool* is_zero);  // 1516
		}
		_mi_os_secure_guard_page_set_before(void* addr,
							mi_memid_t memid);  // 1526
		_mi_os_page_size(void); // 69
		_mi_os_guard_page_size(void); // 169
		_mi_os_secure_guard_page_size(void); // 1529
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
				size_t n);  // 1529
		__atomic_base<long int>::store(
			__int_type __i,
			memory_order __m);  // 369
		__atomic_base<long int>::operator=(
				__int_type __i);  // 1539
		mi_arena_bbitmap_init(size_t slice_count,
					uint8_t** base);  // 1547
		mi_arena_bitmap_init(size_t slice_count,
					uint8_t** base);  // 1548
		mi_arena_bitmap_init(size_t slice_count,
					uint8_t** base);  // 1549
		mi_arena_bitmap_init(size_t slice_count,
					uint8_t** base);  // 1550
		mi_arena_bitmap_init(size_t slice_count,
					uint8_t** base);  // 1551
		{
			size_t i; // 1552
			mi_arena_bitmap_init(size_t slice_count,
						uint8_t** base);  // 1553
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 65
		mi_arenas_get_count(mi_subproc_t* subproc); // 1388
		{
			size_t i; // 1389
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 65
			mi_arenas_get_count(mi_subproc_t* subproc); // 69
			__atomic_base<mi_arena_s::load(
				memory_order __m);  // 587
			atomic<mi_arena_s::load(
				memory_order __m);  // 1334
			atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
								memory_order __m);  // 70
			mi_arena_from_index(mi_subproc_t* subproc,
						size_t idx);  // 1390
			__atomic_base<mi_arena_s::compare_exchange_strong(
						__pointer_type& __p1,
						__pointer_type __p2,
						memory_order __m1,
						memory_order __m2);  // 633
			atomic<mi_arena_s::compare_exchange_strong(
						__pointer_type& __p1,
						__pointer_type __p2,
						memory_order __m1,
						memory_order __m2);  // 1380
			atomic_compare_exchange_strong_explicit<mi_arena_s*>(atomic<mi_arena_s*>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 1393
			mi_arena_id_from_arena(mi_arena_t* arena); // 1395
		}
		__atomic_base<long unsigned int>::compare_exchange_strong(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1380
		atomic_compare_exchange_strong_explicit<long unsigned int>(atomic<long unsigned int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 1403
		__atomic_base<mi_arena_s::compare_exchange_strong(
					__pointer_type& __p1,
					__pointer_type __p2,
					memory_order __m1,
					memory_order __m2);  // 633
		atomic<mi_arena_s::compare_exchange_strong(
					__pointer_type& __p1,
					__pointer_type __p2,
					memory_order __m1,
					memory_order __m2);  // 1380
		atomic_compare_exchange_strong_explicit<mi_arena_s*>(atomic<mi_arena_s*>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 1406
		__atomic_base<long int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1502
		atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 136
		mi_atomic_addi64_relaxed(volatile int64_t* p,
					int64_t add);  // 43
		__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
						size_t amount);  // 1407
		mi_arena_id_from_arena(mi_arena_t* arena); // 1408
		mi_arenas_add(mi_subproc_t* subproc,
				mi_arena_t* arena,
				mi_arena_id_t* arena_id);  // 1572
		mi_size_of_slices(size_t bcount); // 1496
		mi_arena_initialize(mi_subproc_t* subproc,
					void* start,
					size_t slice_count,
					mi_arena_t* parent,
					size_t total_size,
					int numa_node,
					bool exclusive,
					mi_memid_t memid,
					mi_commit_fun_t* commit_fun,
					void* commit_fun_arg,
					mi_arena_id_t* arena_id);  // 1614
		mi_size_of_slices(size_t bcount); // 1626
	}
	_mi_is_aligned(const void* p,
			size_t alignment);  // 1580
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 1598
	mi_size_of_slices(size_t bcount); // 1599
} /* size: 0, variables: 4, inline expansions: 3 (23 bytes) */

// <00306DA8> ../thirdparty/mimalloc/src/arena.c:1646
// variable: 1
bool mi_manage_os_memory_ex(void* start, size_t size, bool is_committed, bool is_pinned, bool is_zero, int numa_node, bool exclusive, mi_arena_id_t* arena_id)
{
	mi_memid_t memid; // 1647
} /* size: 0, variables: 1 */

// <00306BAF> ../thirdparty/mimalloc/src/arena.c:1656
// variable: 1
// function calls: 4
bool mi_manage_memory(void* start, size_t size, bool is_committed, bool is_pinned, bool is_zero, int numa_node, bool exclusive, mi_commit_fun_t* commit_fun, void* commit_fun_arg, mi_arena_id_t* arena_id)
{
	mi_memid_t memid; // 1658
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1121
	_mi_memid_create(mi_memkind_t memkind); // 1658
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 1664
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0030697A> ../thirdparty/mimalloc/src/arena.c:1669
// variables: 2
// function calls: 2
int mi_reserve_os_memory_ex2(mi_subproc_t* subproc, size_t size, bool commit, bool allow_large, bool exclusive, mi_arena_id_t* arena_id)
{
	mi_memid_t memid; // 1672
	void* start; // 1673
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 1671
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1677
} /* size: 335, variables: 2, inline expansions: 2 (17 bytes) */

// <00306925> ../thirdparty/mimalloc/src/arena.c:1687
int mi_reserve_os_memory_ex(size_t size, bool commit, bool allow_large, bool exclusive, mi_arena_id_t* arena_id)
{
} /* size: 0 */

// <00306707> ../thirdparty/mimalloc/src/arena.c:1692
// function calls: 5
bool mi_manage_os_memory(void* start, size_t size, bool is_committed, bool is_large, bool is_zero, int numa_node)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1121
	_mi_memid_create(mi_memkind_t memkind); // 1647
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 1653
	mi_manage_os_memory_ex(void* start,
				size_t size,
				bool is_committed,
				bool is_pinned,
				bool is_zero,
				int numa_node,
				bool exclusive,
				mi_arena_id_t* arena_id);  // 1693
} /* size: 0, inline expansions: 5 (0 bytes) */

// <003066CC> ../thirdparty/mimalloc/src/arena.c:1697
int mi_reserve_os_memory(size_t size, bool commit, bool allow_large)
{
} /* size: 0 */

// <0030669F> ../thirdparty/mimalloc/src/arena.c:1707
// variable: 1
size_t mi_arena_used_slices(mi_arena_t* arena)
{
	size_t idx; // 1708
} /* size: 0, variables: 1 */

// <0030663C> ../thirdparty/mimalloc/src/arena.c:1717
// variables: 3
size_t mi_debug_show_bfield(mi_bfield_t field, char* buf, size_t* k)
{
	size_t bit_set_count; // 1718
	{
		int bit; // 1719
		{
			bool is_set; // 1720
		}
	}
} /* size: 0, variables: 1 */

// <00306608> ../thirdparty/mimalloc/src/arena.c:1747
void mi_debug_color(char* buf, size_t* k, mi_ansi_color_t color)
{
} /* size: 0 */

// <003065CE> ../thirdparty/mimalloc/src/arena.c:1751
// variables: 2
int mi_page_commit_usage(mi_page_t* page)
{
	const size_t  committed_size; // 1753
	const size_t  used_size; // 1754
} /* size: 0, variables: 2 */

// <003064DF> ../thirdparty/mimalloc/src/arena.c:1758
// variables: 10
size_t mi_debug_show_page_bfield(char* buf, size_t* k, mi_arena_t* arena, size_t slice_index, long int* pbit_of_page, mi_ansi_color_t* pcolor_of_page)
{
	size_t bit_set_count; // 1759
	long int bit_of_page; // 1760
	mi_ansi_color_t color; // 1761
	mi_ansi_color_t prev_color; // 1762
	const char   __func__; // 40853
	{
		int bit; // 1763
		{
			void* start; // 1765
			mi_page_t* page; // 1766
			char c; // 1767
			{
				int commit_usage; // 1776
			}
		}
	}
} /* size: 0, variables: 5 */

// <0034626C> ../thirdparty/mimalloc/src/arena.c:1808
// variables: 19
// function calls: 59
size_t mi_debug_show_chunks(const char* header2, size_t slice_count, size_t chunk_count, mi_bchunkmap_t* chunk_bins, mi_arena_t* arena, bool narrow, bool invert, mi_bchunk_t* chunks, const char* header3, const char* header1)
{
	const size_t  fields_per_line; // 1813
	const size_t  used_slice_count; // 1814
	size_t bit_count; // 1815
	size_t bit_set_count; // 1816
	long int bit_of_page; // 1817
	mi_ansi_color_t color_of_page; // 1818
	mi_arena_info_slices(mi_arena_t* arena); // 1713
	mi_arena_used_slices(mi_arena_t* arena); // 1814
	{
		size_t i; // 1819
		{
			char buf; // 1820
			size_t k; // 1828
			char chunk_kind; // 1834
			{
				size_t j; // 1849
				{
					mi_bfield_t bfield; // 1857
					size_t xcount; // 1862
					{
						int bit; // 1763
						{
							void* start; // 1765
							mi_page_t* page; // 1766
							char c; // 1767
							mi_debug_color(char* buf,
									size_t* k,
									mi_ansi_color_t color);  // 1797
							mi_arena_slice_start(mi_arena_t* arena,
										size_t slice_index);  // 1765
							_mi_align_down(uintptr_t sz,
									size_t alignment);  // 484
							_mi_align_down_ptr(const void* p,
										size_t alignment);  // 726
							mi_page_meta_is_separated(const mi_page_t* page); // 734
							mi_page_slice_start(const mi_page_t* page); // 1768
							__atomic_base<mi_meta_page_s::load(
								memory_order __m);  // 587
							atomic<mi_meta_page_s::load(
								memory_order __m);  // 1334
							atomic_load_explicit<mi_meta_page_s*>(const atomic<mi_meta_page_s*>* __a,
												memory_order __m);  // 172
							__atomic_base<mi_meta_page_s::load(
								memory_order __m);  // 587
							atomic<mi_meta_page_s::load(
								memory_order __m);  // 1334
							atomic_load_explicit<mi_meta_page_s*>(const atomic<mi_meta_page_s*>* __a,
												memory_order __m);  // 58
							mi_meta_page_next(mi_meta_page_t* mpage); // 176
							_mi_meta_is_meta_page(void* p); // 1786
							{
								int commit_usage; // 1776
								mi_page_is_singleton(const mi_page_t* page); // 1773
								mi_page_is_full(const mi_page_t* page); // 1774
								__atomic_base<long unsigned int>::load(
									memory_order __m);  // 1334
								atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
													memory_order __m);  // 816
								mi_page_xthread_id(const mi_page_t* page); // 821
								mi_page_thread_id(const mi_page_t* page); // 877
								mi_page_is_abandoned(const mi_page_t* page); // 1775
								_mi_toupper(char c); // 1775
								mi_page_block_size(const mi_page_t* page); // 691
								mi_page_size(const mi_page_t* page); // 751
								_mi_align_down(uintptr_t sz,
										size_t alignment);  // 484
								_mi_align_down_ptr(const void* p,
											size_t alignment);  // 726
								mi_page_meta_is_separated(const mi_page_t* page); // 734
								mi_page_slice_start(const mi_page_t* page); // 746
								mi_page_slice_offset_of(const mi_page_t* page,
											size_t offset_relative_to_page_start);  // 751
								mi_page_committed(const mi_page_t* page); // 1753
								mi_page_block_size(const mi_page_t* page); // 1754
								mi_page_commit_usage(mi_page_t* page); // 1776
							}
							mi_bbitmap_is_setN(mi_bbitmap_t* bbitmap,
										size_t idx,
										size_t n);  // 1789
							mi_bitmap_is_setN(mi_bitmap_t* bitmap,
										size_t idx,
										size_t n);  // 182
							mi_bitmap_is_set(mi_bitmap_t* bitmap,
									size_t idx);  // 1790
							mi_bitmap_is_setN(mi_bitmap_t* bitmap,
										size_t idx,
										size_t n);  // 182
							mi_bitmap_is_set(mi_bitmap_t* bitmap,
									size_t idx);  // 1791
						}
					}
					mi_debug_color(char* buf,
							size_t* k,
							mi_ansi_color_t color);  // 1802
					mi_debug_show_page_bfield(char* buf,
									size_t* k,
									mi_arena_t* arena,
									size_t slice_index,
									long int* pbit_of_page,
									mi_ansi_color_t* pcolor_of_page);  // 1862
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
						size_t n);  // 1869
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
						size_t n);  // 1853
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
						size_t n);  // 1854
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
					size_t n);  // 1820
			{
				const size_t  diff; // 1822
			}
		}
	}
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <0030637A> ../thirdparty/mimalloc/src/arena.c:1808
// variables: 14
size_t mi_debug_show_chunks(const char* header1, const char* header2, const char* header3, size_t slice_count, size_t chunk_count, mi_bchunk_t* chunks, mi_bchunkmap_t* chunk_bins, bool invert, mi_arena_t* arena, bool narrow)
{
	const size_t  fields_per_line; // 1813
	const size_t  used_slice_count; // 1814
	size_t bit_count; // 1815
	size_t bit_set_count; // 1816
	long int bit_of_page; // 1817
	mi_ansi_color_t color_of_page; // 1818
	{
		size_t i; // 1819
		{
			char buf; // 1820
			size_t k; // 1828
			char chunk_kind; // 1834
			{
				const size_t  diff; // 1822
			}
			{
				size_t j; // 1849
				{
					mi_bfield_t bfield; // 1857
					size_t xcount; // 1862
				}
			}
		}
	}
} /* size: 0, variables: 6 */

// <003062CD> ../thirdparty/mimalloc/src/arena.c:1885
// variables: 9
void mi_debug_show_arenas_ex(mi_heap_t* heap, bool show_pages, bool narrow)
{
	mi_subproc_t* subproc; // 1886
	size_t max_arenas; // 1887
	size_t page_total; // 1891
	const char   __func__; // 63973
	{
		size_t i; // 1892
		{
			mi_arena_t* arena; // 1893
			{
				const char* header1; // 1915
				const char* header2; // 1916
				const char* header3; // 1917
			}
		}
	}
} /* size: 0, variables: 4 */

// <00305EBD> ../thirdparty/mimalloc/src/arena.c:1929
// variables: 5
// function calls: 11
void mi_debug_show_arenas(void)
{
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 65
	mi_arenas_get_count(mi_subproc_t* subproc); // 1887
	{
		size_t i; // 1892
		{
			mi_arena_t* arena; // 1893
			mi_size_of_slices(size_t bcount); // 1898
			{
				const char* header1; // 1915
				const char* header2; // 1916
				const char* header3; // 1917
				__atomic_base<long unsigned int>::load(
					memory_order __m);  // 1334
				atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
									memory_order __m);  // 273
				mi_bbitmap_chunk_count(const mi_bbitmap_t* bbitmap); // 1918
			}
			__atomic_base<mi_arena_s::load(
				memory_order __m);  // 587
			atomic<mi_arena_s::load(
				memory_order __m);  // 1334
			atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
								memory_order __m);  // 1893
		}
	}
	mi_debug_show_arenas_ex(mi_heap_t* heap,
				bool show_pages,
				bool narrow);  // 1930
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00305E8B> ../thirdparty/mimalloc/src/arena.c:1933
void mi_arenas_print(void)
{
} /* size: 0 */

// <00305C21> ../thirdparty/mimalloc/src/arena.c:1942
// variables: 4
// function calls: 3
int mi_reserve_huge_os_pages_at_ex(size_t pages, int numa_node, size_t timeout_msecs, bool exclusive, mi_arena_id_t* arena_id)
{
	size_t hsize; // 1947
	size_t pages_reserved; // 1948
	mi_memid_t memid; // 1949
	void* p; // 1950
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 1957
	_mi_os_free(void* p,
			size_t size,
			mi_memid_t memid);  // 1958
} /* size: 443, variables: 4, inline expansions: 3 (105 bytes) */

// <00305BE6> ../thirdparty/mimalloc/src/arena.c:1964
int mi_reserve_huge_os_pages_at(size_t pages, int numa_node, size_t timeout_msecs)
{
} /* size: 0 */

// <00305A6D> ../thirdparty/mimalloc/src/arena.c:1969
// variables: 7
// function call: 1
int mi_reserve_huge_os_pages_interleave(size_t pages, size_t numa_nodes, size_t timeout_msecs)
{
	int numa_count; // 1973
	const size_t  pages_per; // 1975
	const size_t  pages_mod; // 1976
	const size_t  timeout_per; // 1977
	{
		int numa_node; // 1980
		{
			size_t node_pages; // 1981
			int err; // 1983
			mi_reserve_huge_os_pages_at(size_t pages,
							int numa_node,
							size_t timeout_msecs);  // 1983
		}
	}
} /* size: 236, variables: 4 */

// <00305999> ../thirdparty/mimalloc/src/arena.c:1996
// variable: 1
int mi_reserve_huge_os_pages(size_t pages, double max_secs, size_t* pages_reserved)
{
	int err; // 2000
} /* size: 0, variables: 1 */

// <0030598A> ../thirdparty/mimalloc/src/arena.c:2013
long int mi_arena_purge_delay(void)
{
} /* size: 0 */

// <0030568D> ../thirdparty/mimalloc/src/arena.c:2021
// variables: 6
// function calls: 5
bool mi_arena_purge(mi_arena_t* arena, size_t slice_index, size_t slice_count)
{
	const char   __func__; // 59076
	const size_t  size; // 2025
	const void* p; // 2026
	size_t already_committed; // 2028
	const bool  all_committed; // 2030
	const bool  needs_recommit; // 2031
	mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap,
				size_t idx,
				size_t n);  // 2023
	mi_size_of_slices(size_t bcount); // 2025
	mi_size_of_slices(size_t bcount); // 142
	mi_arena_slice_start(mi_arena_t* arena,
				size_t slice_index);  // 2026
	mi_size_of_slices(size_t bcount); // 2031
} /* size: 0, variables: 6, inline expansions: 5 (70 bytes) */

// <00305623> ../thirdparty/mimalloc/src/arena.c:2052
// variables: 4
void mi_arena_schedule_purge(mi_arena_t* arena, size_t slice_index, size_t slice_count)
{
	const long int  delay; // 2053
	const char   __func__; // 63973
	{
		const mi_msecs_t  expire; // 2063
		mi_msecs_t expire0; // 2064
	}
} /* size: 0, variables: 2 */

// <002C4724> ../thirdparty/mimalloc/src/arena.c:2078
// member variables: 4
// struct size: 24
struct mi_purge_visit_info_s {
	mi_msecs_t now; /* 0 8 */
	mi_msecs_t delay; /* 8 8 */
	bool all_purged; /* 16 1 */
	bool any_purged; /* 17 1 */
};

// <0034CA28> ../thirdparty/mimalloc/src/arena.c:2085
// variable: 1
// function call: 1
bool mi_arena_try_purge_range(mi_arena_t* arena, size_t slice_index, size_t slice_count)
{
	{
		bool decommitted; // 2089
		mi_bitmap_is_clearN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 2090
	}
} /* size: 0 */

// <003055CF> ../thirdparty/mimalloc/src/arena.c:2085
// variables: 2
bool mi_arena_try_purge_range(mi_arena_t* arena, size_t slice_index, size_t slice_count)
{
	const char   __func__; // 5824
	{
		bool decommitted; // 2089
	}
} /* size: 0, variables: 1 */

// <0034CB65> ../thirdparty/mimalloc/src/arena.c:2101
// variables: 3
// function calls: 3
bool mi_arena_try_purge_visitor(size_t slice_index, size_t slice_count, mi_arena_t* arena, void* arg)
{
	mi_purge_visit_info_t* vinfo; // 2102
	mi_arena_try_purge_range(mi_arena_t* arena,
				size_t slice_index,
				size_t slice_count);  // 2104
	{
		size_t i; // 2111
		{
			const bool  purged; // 2112
			mi_arena_try_purge_range(mi_arena_t* arena,
						size_t slice_index,
						size_t slice_count);  // 2112
		}
	}
	mi_arena_try_purge_visitor(size_t slice_index,
					size_t slice_count,
					mi_arena_t* arena,
					void* arg);  // 2101
} /* size: 0, variables: 1, inline expansions: 2 (173 bytes) */

// <00305559> ../thirdparty/mimalloc/src/arena.c:2101
// variables: 3
bool mi_arena_try_purge_visitor(size_t slice_index, size_t slice_count, mi_arena_t* arena, void* arg)
{
	mi_purge_visit_info_t* vinfo; // 2102
	{
		size_t i; // 2111
		{
			const bool  purged; // 2112
		}
	}
} /* size: 0, variables: 1 */

// <003054F8> ../thirdparty/mimalloc/src/arena.c:2126
// variables: 3
int mi_arena_try_purge(mi_arena_t* arena, mi_msecs_t now, bool force)
{
	mi_msecs_t expire; // 2132
	mi_purge_visit_info_t vinfo; // 2145
	const size_t  minslices; // 2148
} /* size: 0, variables: 3 */

// <00304861> ../thirdparty/mimalloc/src/arena.c:2155
// variables: 15
// function calls: 40
void mi_arenas_try_purge(bool force, bool visit_all, mi_subproc_t* subproc, size_t tseq)
{
	const long int  delay; // 2158
	const mi_msecs_t  now; // 2162
	const mi_msecs_t  arenas_expire; // 2163
	const size_t  max_arena; // 2166
	mi_atomic_guard_t purge_guard; // 2170
	uintptr_t _mi_guard_expected; // 2171
	{
		bool _mi_guard_once; // 2171
		{
			const size_t  arena_start; // 2175
			size_t max_purge_count; // 2176
			bool all_visited; // 2177
			bool any_purged; // 2178
			{
				size_t _i; // 2179
				{
					size_t i; // 2180
					mi_arena_t* arena; // 2182
					{
						const int  purged; // 2184
						__atomic_base<long int>::load(
							memory_order __m);  // 1334
						atomic_load_explicit<long int>(const atomic<long int>* __a,
										memory_order __m);  // 2132
						__atomic_base<long int>::store(
							__int_type __i,
							memory_order __m);  // 1323
						atomic_store_explicit<long int>(atomic<long int>* __a,
										__atomic_val_t __i,
										memory_order __m);  // 2139
						__atomic_base<long int>::fetch_add(
								__int_type __i,
								memory_order __m);  // 1502
						atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
											__atomic_diff_t __i,
											memory_order __m);  // 136
						mi_atomic_addi64_relaxed(volatile int64_t* p,
									int64_t add);  // 43
						__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
										size_t amount);  // 2140
						mi_option_get(mi_option_t option); // 2015
						mi_option_get(mi_option_t option); // 2015
						mi_arena_purge_delay(void); // 2145
						_mi_divide_up(uintptr_t size,
								size_t divider);  // 1106
						mi_slice_count_of_size(size_t size); // 2148
						mi_arena_try_purge(mi_arena_t* arena,
									mi_msecs_t now,
									bool force);  // 2184
					}
					__atomic_base<long unsigned int>::load(
						memory_order __m);  // 1334
					atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
										memory_order __m);  // 65
					mi_arenas_get_count(mi_subproc_t* subproc); // 69
					__atomic_base<mi_arena_s::load(
						memory_order __m);  // 587
					atomic<mi_arena_s::load(
						memory_order __m);  // 1334
					atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
										memory_order __m);  // 70
					mi_arena_from_index(mi_subproc_t* subproc,
								size_t idx);  // 2182
				}
			}
			__atomic_base<long int>::store(
				__int_type __i,
				memory_order __m);  // 1323
			atomic_store_explicit<long int>(atomic<long int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 2198
			__atomic_base<long int>::store(
				__int_type __i,
				memory_order __m);  // 1323
			atomic_store_explicit<long int>(atomic<long int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 2174
		}
		__atomic_base<long unsigned int>::compare_exchange_strong(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1380
		atomic_compare_exchange_strong_explicit<long unsigned int>(atomic<long unsigned int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 2171
		__atomic_base<long unsigned int>::store(
			__int_type __i,
			memory_order __m);  // 1323
		atomic_store_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 2171
	}
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 2015
	mi_option_get(mi_option_t option); // 2015
	mi_arena_purge_delay(void); // 2158
	_mi_prim_clock_now(void); // 523
	_mi_clock_now(void); // 2162
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 2163
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 65
	mi_arenas_get_count(mi_subproc_t* subproc); // 2166
} /* size: 0, variables: 6, inline expansions: 11 (513 bytes) */

// <002C4781> ../thirdparty/mimalloc/src/arena.c:2208
// member variables: 4
// struct size: 32
struct mi_heap_visit_info_s {
	mi_heap_t * heap; /* 0 8 */
	mi_block_visit_fun * visitor; /* 8 8 */
	void * arg; /* 16 8 */
	bool visit_blocks; /* 24 1 */
};

// <00304665> ../thirdparty/mimalloc/src/arena.c:2215
// variables: 2
// function calls: 5
bool mi_heap_visit_page(mi_page_t* page, mi_heap_visit_info_t* vinfo)
{
	mi_heap_area_t area; // 2216
	const char   __func__; // 58417
	mi_page_block_size(const mi_page_t* page); // 538
	mi_page_usable_block_size(const mi_page_t* page); // 539
	mi_page_start(const mi_page_t* page); // 542
	_mi_heap_area_init(mi_heap_area_t* area,
				mi_page_t* page);  // 2217
	mi_page_heap(const mi_page_t* page); // 2218
} /* size: 0, variables: 2, inline expansions: 5 (170 bytes) */

// <003044B3> ../thirdparty/mimalloc/src/arena.c:2230
// variables: 3
// function calls: 3
bool mi_heap_visit_page_at(size_t slice_index, size_t slice_count, mi_arena_t* arena, void* arg)
{
	mi_heap_visit_info_t* vinfo; // 2232
	mi_page_t* page; // 2233
	{
		const mi_page_t* page; // 148
	}
	mi_size_of_slices(size_t bcount); // 142
	mi_arena_slice_start(mi_arena_t* arena,
				size_t slice_index);  // 157
	mi_arena_page_at_slice(mi_arena_t* arena,
				size_t slice_index);  // 2233
} /* size: 0, variables: 2, inline expansions: 3 (55 bytes) */

// <00303DE0> ../thirdparty/mimalloc/src/arena.c:2237
// variables: 14
// function calls: 18
bool _mi_heap_visit_blocks(mi_heap_t* heap, bool abandoned_only, bool visit_blocks, mi_block_visit_fun* visitor, void* arg)
{
	const char   __func__; // 15154
	mi_heap_visit_info_t visit_info; // 2244
	bool ok; // 2245
	mi_page_t* page; // 2267
	{
		const size_t  _arena_count; // 2246
		const size_t  _arena_cycle; // 2246
		const size_t  _start; // 2246
		{
			size_t _i; // 2246
			{
				mi_arena_t* arena; // 2246
				{
					size_t _idx; // 2246
					__atomic_base<long unsigned int>::load(
						memory_order __m);  // 1334
					atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
										memory_order __m);  // 65
					mi_arenas_get_count(mi_subproc_t* subproc); // 69
					__atomic_base<mi_arena_s::load(
						memory_order __m);  // 587
					atomic<mi_arena_s::load(
						memory_order __m);  // 1334
					atomic_load_explicit<mi_arena_s*>(const atomic<mi_arena_s*>* __a,
										memory_order __m);  // 70
					mi_arena_from_index(mi_subproc_t* subproc,
								size_t idx);  // 2246
				}
				{
					mi_arena_pages_t* arena_pages; // 2247
					{
						size_t bin; // 2250
						__atomic_base<long unsigned int>::load(
							memory_order __m);  // 1334
						atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
											memory_order __m);  // 2252
					}
					__atomic_base<mi_arena_pages_s::load(
						memory_order __m);  // 587
					atomic<mi_arena_pages_s::load(
						memory_order __m);  // 1334
					atomic_load_explicit<mi_arena_pages_s*>(const atomic<mi_arena_pages_s*>* __a,
										memory_order __m);  // 649
					mi_heap_arena_pages(mi_heap_t* heap,
								mi_arena_t* arena);  // 2247
				}
			}
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 65
		mi_arenas_get_count(mi_subproc_t* subproc); // 2246
	}
	{
		bool _mi_go; // 2268
		mi_lock_acquire(mi_lock_t* lock); // 2268
		mi_lock_release(mi_lock_t* lock); // 2268
	}
	{
		mi_page_t* next; // 2272
	}
} /* size: 0, variables: 4 */

// <00303D31> ../thirdparty/mimalloc/src/arena.c:2280
bool mi_heap_visit_blocks(mi_heap_t* heap, bool visit_blocks, mi_block_visit_fun* visitor, void* arg)
{
} /* size: 0 */

// <00303C82> ../thirdparty/mimalloc/src/arena.c:2284
bool mi_heap_visit_abandoned_blocks(mi_heap_t* heap, bool visit_blocks, mi_block_visit_fun* visitor, void* arg)
{
} /* size: 0 */

// <002C47E4> ../thirdparty/mimalloc/src/arena.c:2289
// member variables: 3
// struct size: 24
struct mi_heap_delete_visit_info_s {
	mi_heap_t * heap_target; /* 0 8 */
	mi_theap_t * theap_target; /* 8 8 */
	mi_theap_t * theap; /* 16 8 */
};

// <0030281D> ../thirdparty/mimalloc/src/arena.c:2295
// variables: 12
// function calls: 64
bool mi_heap_delete_page(const mi_heap_t* heap, const mi_heap_area_t* area, void* block, size_t block_size, void* arg)
{
	mi_heap_delete_visit_info_t* info; // 2297
	mi_heap_t* heap_target; // 2298
	const mi_theap_t* theap; // 2299
	const mi_page_t* page; // 2300
	const char   __func__; // 5857
	{
		const size_t  sbin; // 2325
		size_t slice_index; // 2326
		size_t slice_count; // 2327
		mi_arena_pages_t* arena_pages; // 2328
		const mi_arena_t* arena; // 2329
		mi_theap_t* theap_target; // 2340
		mi_arena_pages_t* arena_pages_target; // 2343
		mi_bitmap_is_setN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 182
		mi_bitmap_is_set(mi_bitmap_t* bitmap,
				size_t idx);  // 2330
		mi_bitmap_clear(mi_bitmap_t* bitmap,
				size_t idx);  // 2331
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
					size_t amount);  // 2337
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
					size_t amount);  // 2338
		mi_bitmap_is_clearN(mi_bitmap_t* bitmap,
					size_t idx,
					size_t n);  // 186
		mi_bitmap_is_clear(mi_bitmap_t* bitmap,
					size_t idx);  // 2351
		mi_bitmap_set(mi_bitmap_t* bitmap,
				size_t idx);  // 2352
		mi_stat_update(mi_stat_count_t* stat,
				int64_t amount);  // 33
		mi_stat_update(mi_stat_count_t* stat,
				int64_t amount);  // 54
		__mi_stat_increase(mi_stat_count_t* stat,
					size_t amount);  // 2354
		mi_stat_update(mi_stat_count_t* stat,
				int64_t amount);  // 33
		mi_stat_update(mi_stat_count_t* stat,
				int64_t amount);  // 54
		__mi_stat_increase(mi_stat_count_t* stat,
					size_t amount);  // 2355
		_mi_theap_cached(void); // 505
		__atomic_base<mi_heap_s::load(
			memory_order __m);  // 587
		atomic<mi_heap_s::load(
			memory_order __m);  // 1334
		atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
						memory_order __m);  // 571
		_mi_theap_heap(const mi_theap_t* theap); // 509
		_mi_heap_theap(const mi_heap_t* heap); // 18
		mi_heap_theap(mi_heap_t* heap); // 2347
	}
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 949
	mi_page_claim_ownership(mi_page_t* page); // 2302
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 2303
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 2310
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 944
	mi_tf_is_owned(mi_thread_free_t tf); // 944
	mi_page_is_owned(const mi_page_t* page); // 2311
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
				mi_theap_t* theap);  // 2308
} /* size: 0, variables: 5, inline expansions: 23 (135 bytes) */

// <003021B8> ../thirdparty/mimalloc/src/arena.c:2363
// variables: 7
// function calls: 18
void mi_heap_delete_pages(mi_heap_t* heap, mi_heap_t* heap_target)
{
	const mi_theap_t* theap_target; // 2364
	mi_heap_delete_visit_info_t info; // 2366
	const char   __func__; // 65207
	{
		size_t i; // 2370
		{
			const mi_arena_pages_t* arena_pages; // 2371
			__atomic_base<mi_arena_pages_s::load(
				memory_order __m);  // 587
			atomic<mi_arena_pages_s::load(
				memory_order __m);  // 1334
			atomic_load_explicit<mi_arena_pages_s*>(const atomic<mi_arena_pages_s*>* __a,
								memory_order __m);  // 2371
			__atomic_base<long unsigned int>::load(
				memory_order __m);  // 1334
			atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
								memory_order __m);  // 118
			mi_bitmap_chunk_count(const mi_bitmap_t* bitmap); // 122
			mi_bitmap_max_bits(const mi_bitmap_t* bitmap); // 1214
			mi_bitmap_is_all_clear(mi_bitmap_t* bitmap); // 2373
		}
	}
	{
		bool _mi_go; // 2377
		mi_lock_acquire(mi_lock_t* lock); // 2377
		mi_lock_release(mi_lock_t* lock); // 2377
	}
	{
		size_t i; // 2382
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 2383
	}
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 2364
} /* size: 0, variables: 3, inline expansions: 6 (80 bytes) */

// <0030218A> ../thirdparty/mimalloc/src/arena.c:2388
void _mi_heap_move_pages(mi_heap_t* heap_from, mi_heap_t* heap_to)
{
} /* size: 0 */

// <00302169> ../thirdparty/mimalloc/src/arena.c:2394
void _mi_heap_destroy_pages(mi_heap_t* heap_from)
{
} /* size: 0 */

