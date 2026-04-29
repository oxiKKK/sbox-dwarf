
//
// thirdparty/mimalloc/src/os.c
//
//	referenced by: libtier0.so
//
//	functions: 49
//

// <002ECDEE> ../thirdparty/mimalloc/src/os.c:35
bool _mi_os_has_overcommit(void)
{
} /* size: 0 */

// <002ECDDB> ../thirdparty/mimalloc/src/os.c:39
bool _mi_os_has_virtual_reserve(void)
{
} /* size: 0 */

// <002ECDC8> ../thirdparty/mimalloc/src/os.c:45
size_t _mi_os_page_size(void)
{
} /* size: 0 */

// <002ECDB5> ../thirdparty/mimalloc/src/os.c:50
size_t _mi_os_large_page_size(void)
{
} /* size: 0 */

// <002ECD92> ../thirdparty/mimalloc/src/os.c:55
// variable: 1
size_t _mi_os_minimal_purge_size(void)
{
	size_t minsize; // 56
} /* size: 0, variables: 1 */

// <002ECD64> ../thirdparty/mimalloc/src/os.c:68
// variables: 2
size_t _mi_os_guard_page_size(void)
{
	const size_t  gsize; // 69
	const char   __func__; // 15263
} /* size: 0, variables: 2 */

// <002ECD36> ../thirdparty/mimalloc/src/os.c:74
// variables: 2
size_t _mi_os_virtual_address_bits(void)
{
	const size_t  vbits; // 75
	const char   __func__; // 5670
} /* size: 0, variables: 2 */

// <002ECD07> ../thirdparty/mimalloc/src/os.c:80
bool _mi_os_canuse_large_page(size_t size, size_t alignment)
{
} /* size: 0 */

// <002ECC48> ../thirdparty/mimalloc/src/os.c:87
// variable: 1
// function calls: 2
size_t _mi_os_good_alloc_size(size_t size)
{
	size_t align_size; // 88
	_mi_os_page_size(void); // 89
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 95
} /* size: 0, variables: 1, inline expansions: 2 (76 bytes) */

// <002ECC39> ../thirdparty/mimalloc/src/os.c:98
void _mi_os_init(void)
{
} /* size: 0 */

// <002EC78D> ../thirdparty/mimalloc/src/os.c:126
// variables: 7
// function calls: 14
void* _mi_os_get_aligned_hint(size_t try_alignment, size_t size)
{
	atomic<long unsigned int> aligned_base; // 128
	uintptr_t hint; // 137
	const char   __func__; // 63973
	{
		uintptr_t init; // 139
		const mi_theap_t* theap; // 141
		const uintptr_t  r; // 143
		uintptr_t expected; // 146
		_mi_theap_default(void); // 141
		__atomic_base<mi_heap_s::load(
			memory_order __m);  // 587
		atomic<mi_heap_s::load(
			memory_order __m);  // 1334
		atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
						memory_order __m);  // 571
		_mi_theap_heap(const mi_theap_t* theap); // 575
		mi_theap_is_initialized(const mi_theap_t* theap); // 142
		_mi_theap_random_next(mi_theap_t* theap); // 143
		__atomic_base<long unsigned int>::compare_exchange_strong(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1380
		atomic_compare_exchange_strong_explicit<long unsigned int>(atomic<long unsigned int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 147
		__atomic_base<long unsigned int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1502
		atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_diff_t __i,
								memory_order __m);  // 148
	}
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 133
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 137
} /* size: 0, variables: 3, inline expansions: 3 (38 bytes) */

// <002EC77A> ../thirdparty/mimalloc/src/os.c:167
size_t _mi_os_secure_guard_page_size(void)
{
} /* size: 0 */

// <002EC4E5> ../thirdparty/mimalloc/src/os.c:176
// variables: 2
// function calls: 10
bool _mi_os_secure_guard_page_set_at(void* addr, mi_memid_t memid)
{
	bool ok; // 179
	{
		const mi_arena_t* arena; // 181
		_mi_os_page_size(void); // 69
		_mi_os_guard_page_size(void); // 169
		_mi_os_secure_guard_page_size(void); // 183
		mi_memid_arena(mi_memid_t memid); // 181
		_mi_os_guard_page_size(void); // 169
		_mi_os_secure_guard_page_size(void); // 186
		_mi_os_decommit(void* addr,
				size_t size);  // 186
	}
	_mi_os_page_size(void); // 69
	_mi_os_guard_page_size(void); // 169
	_mi_os_secure_guard_page_size(void); // 190
} /* size: 0, variables: 1, inline expansions: 3 (47 bytes) */

// <002EC4B6> ../thirdparty/mimalloc/src/os.c:200
bool _mi_os_secure_guard_page_set_before(void* addr, mi_memid_t memid)
{
} /* size: 0 */

// <002EC45C> ../thirdparty/mimalloc/src/os.c:205
// variable: 1
bool _mi_os_secure_guard_page_reset_at(void* addr, mi_memid_t memid)
{
	{
		const mi_arena_t* arena; // 209
	}
} /* size: 0 */

// <002EC2C2> ../thirdparty/mimalloc/src/os.c:224
// variable: 1
// function calls: 6
bool _mi_os_secure_guard_page_reset_before(void* addr, mi_memid_t memid)
{
	_mi_os_page_size(void); // 69
	_mi_os_guard_page_size(void); // 169
	_mi_os_secure_guard_page_size(void); // 225
	{
		const mi_arena_t* arena; // 209
		mi_memid_arena(mi_memid_t memid); // 209
		_mi_os_commit(void* addr,
				size_t size,
				bool* is_zero);  // 214
	}
	_mi_os_secure_guard_page_reset_at(void* addr,
						mi_memid_t memid);  // 225
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0034BB1A> ../thirdparty/mimalloc/src/os.c:235
// variable: 1
// function calls: 10
void mi_os_prim_free(void* addr, size_t size, size_t commit_size, mi_subproc_t* subproc)
{
	int err; // 238
	_mi_os_page_size(void); // 236
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 252
	_mi_prim_free(void* addr,
			size_t size);  // 238
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 58
	__mi_stat_decrease_mt(mi_stat_count_t* stat,
				size_t amount);  // 246
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 242
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 58
	__mi_stat_decrease_mt(mi_stat_count_t* stat,
				size_t amount);  // 244
	mi_os_prim_free(void* addr,
			size_t size,
			size_t commit_size,
			mi_subproc_t* subproc);  // 235
} /* size: 0, variables: 1, inline expansions: 10 (785 bytes) */

// <002EC26D> ../thirdparty/mimalloc/src/os.c:235
// variables: 2
void mi_os_prim_free(void* addr, size_t size, size_t commit_size, mi_subproc_t* subproc)
{
	const char   __func__; // 44947
	int err; // 238
} /* size: 0, variables: 2 */

// <002EBF92> ../thirdparty/mimalloc/src/os.c:249
// variables: 5
// function calls: 2
void _mi_os_free_ex(void* addr, size_t size, bool still_committed, mi_memid_t memid, mi_subproc_t* subproc)
{
	const char   __func__; // 59076
	{
		size_t csize; // 251
		size_t commit_size; // 254
		void* base; // 255
		{
			const size_t  diff; // 260
		}
		mi_os_free_huge_os_pages(void* p,
					size_t size,
					mi_subproc_t* subproc);  // 271
	}
	mi_memkind_is_os(mi_memkind_t memkind); // 250
} /* size: 0, variables: 1, inline expansions: 1 (3 bytes) */

// <002EBF59> ../thirdparty/mimalloc/src/os.c:283
void _mi_os_free(void* p, size_t size, mi_memid_t memid)
{
} /* size: 0 */

// <0034D239> ../thirdparty/mimalloc/src/os.c:294
// variables: 2
// function calls: 15
void* mi_os_prim_alloc_at(size_t size, size_t try_alignment, bool commit, bool allow_large, bool* is_large, bool* is_zero, void* hint_addr)
{
	void* p; // 302
	int err; // 303
	_mi_os_page_size(void); // 295
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 308
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 43
	__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
					size_t amount);  // 308
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 310
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 51
	__mi_stat_increase_mt(mi_stat_count_t* stat,
				size_t amount);  // 310
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 312
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 51
	__mi_stat_increase_mt(mi_stat_count_t* stat,
				size_t amount);  // 312
} /* size: 0, variables: 2, inline expansions: 15 (250 bytes) */

// <002EBEC8> ../thirdparty/mimalloc/src/os.c:294
// variables: 3
void* mi_os_prim_alloc_at(void* hint_addr, size_t size, size_t try_alignment, bool commit, bool allow_large, bool* is_large, bool* is_zero)
{
	const char   __func__; // 5857
	void* p; // 302
	int err; // 303
} /* size: 0, variables: 3 */

// <002EBE67> ../thirdparty/mimalloc/src/os.c:323
void* mi_os_prim_alloc(size_t size, size_t try_alignment, bool commit, bool allow_large, bool* is_large, bool* is_zero)
{
} /* size: 0 */

// <002EBD91> ../thirdparty/mimalloc/src/os.c:330
// variables: 8
void* mi_os_prim_alloc_aligned(size_t size, size_t alignment, bool commit, bool allow_large, bool* is_large, bool* is_zero, void** base)
{
	const char   __func__; // 5824
	const bool  try_direct_alloc; // 341
	void* p; // 343
	{
		const size_t  over_size; // 361
		{
			void* aligned_p; // 388
			size_t pre_size; // 389
			size_t mid_size; // 390
			size_t post_size; // 391
		}
	}
} /* size: 0, variables: 3 */

// <002EBB34> ../thirdparty/mimalloc/src/os.c:410
// variables: 4
// function calls: 5
void* _mi_os_alloc(size_t size, mi_memid_t* memid)
{
	bool os_is_large; // 414
	bool os_is_zero; // 415
	void* p; // 416
	const char   __func__; // 44795
	_mi_memid_create(mi_memkind_t memkind); // 1127
	_mi_memid_none(void); // 411
	mi_os_prim_alloc(size_t size,
			size_t try_alignment,
			bool commit,
			bool allow_large,
			bool* is_large,
			bool* is_zero);  // 416
	_mi_memid_create(mi_memkind_t memkind); // 1131
	_mi_memid_create_os(void* base,
				size_t size,
				bool committed,
				bool is_zero,
				bool is_large);  // 419
} /* size: 168, variables: 4, inline expansions: 5 (25 bytes) */

// <002EB161> ../thirdparty/mimalloc/src/os.c:425
// variables: 10
// function calls: 18
void* _mi_os_alloc_aligned(size_t size, size_t alignment, bool commit, bool allow_large, mi_memid_t* memid)
{
	bool os_is_large; // 433
	bool os_is_zero; // 434
	void* os_base; // 435
	void* p; // 436
	const char   __func__; // 65207
	_mi_memid_create(mi_memkind_t memkind); // 1127
	_mi_memid_none(void); // 428
	_mi_os_page_size(void); // 431
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 431
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 338
	mi_os_prim_alloc(size_t size,
			size_t try_alignment,
			bool commit,
			bool allow_large,
			bool* is_large,
			bool* is_zero);  // 345
	{
		const size_t  over_size; // 361
		mi_os_prim_alloc(size_t size,
				size_t try_alignment,
				bool commit,
				bool allow_large,
				bool* is_large,
				bool* is_zero);  // 365
		_mi_align_up(uintptr_t sz,
				size_t alignment);  // 468
		_mi_align_up_ptr(const void* p,
				size_t alignment);  // 372
		{
			void* aligned_p; // 388
			size_t pre_size; // 389
			size_t mid_size; // 390
			size_t post_size; // 391
			mi_os_prim_alloc(size_t size,
					size_t try_alignment,
					bool commit,
					bool allow_large,
					bool* is_large,
					bool* is_zero);  // 384
			_mi_align_up(uintptr_t sz,
					size_t alignment);  // 468
			_mi_align_up_ptr(const void* p,
					size_t alignment);  // 388
			_mi_os_page_size(void); // 390
			_mi_align_up(uintptr_t sz,
					size_t alignment);  // 390
		}
		_mi_os_commit(void* addr,
				size_t size,
				bool* is_zero);  // 376
	}
	mi_os_prim_alloc_aligned(size_t size,
				size_t alignment,
				bool commit,
				bool allow_large,
				bool* is_large,
				bool* is_zero,
				void** base);  // 436
	_mi_memid_create(mi_memkind_t memkind); // 1131
	_mi_memid_create_os(void* base,
				size_t size,
				bool committed,
				bool is_zero,
				bool is_large);  // 439
} /* size: 0, variables: 5, inline expansions: 9 (1056 bytes) */

// <002EB11A> ../thirdparty/mimalloc/src/os.c:450
// variable: 1
void* mi_os_ensure_zero(void* p, size_t size, mi_memid_t* memid)
{
	{
		bool is_zero; // 454
	}
} /* size: 0 */

// <002EADB0> ../thirdparty/mimalloc/src/os.c:468
// variables: 2
// function calls: 9
void* _mi_os_zalloc(size_t size, mi_memid_t* memid)
{
	void* p; // 469
	{
		bool is_zero; // 454
		_mi_os_commit(void* addr,
				size_t size,
				bool* is_zero);  // 455
		_mi_os_free(void* p,
				size_t size,
				mi_memid_t memid);  // 456
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
			size_t n);  // 1255
	_mi_memset_aligned(void* dst,
				int val,
				size_t n);  // 1278
	_mi_memzero_aligned(void* dst,
				size_t n);  // 463
	mi_os_ensure_zero(void* p,
				size_t size,
				mi_memid_t* memid);  // 470
} /* size: 0, variables: 1, inline expansions: 7 (429 bytes) */

// <002EA9CA> ../thirdparty/mimalloc/src/os.c:481
// variables: 5
// function calls: 7
void* _mi_os_alloc_aligned_at_offset(size_t size, size_t alignment, size_t offset, bool commit, bool allow_large, mi_memid_t* memid)
{
	const char   __func__; // 55026
	{
		const size_t  extra; // 491
		const size_t  oversize; // 492
		const void* start; // 493
		const void* p; // 496
		_mi_align_up(uintptr_t sz,
				size_t alignment);  // 491
		_mi_is_aligned(const void* p,
				size_t alignment);  // 497
		_mi_os_page_size(void); // 499
		_mi_os_decommit(void* addr,
				size_t size);  // 500
	}
	_mi_os_page_size(void); // 483
	_mi_memid_create(mi_memkind_t memkind); // 1127
	_mi_memid_none(void); // 484
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <002EA674> ../thirdparty/mimalloc/src/os.c:512
// variables: 4
// function calls: 9
void* mi_os_page_align_areax(bool conservative, void* addr, size_t size, size_t* newsize)
{
	const char   __func__; // 15263
	void* start; // 518
	void* end; // 520
	ptrdiff_t diff; // 522
	_mi_os_page_size(void); // 518
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 468
	_mi_align_up_ptr(const void* p,
			size_t alignment);  // 518
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 484
	_mi_align_down_ptr(const void* p,
				size_t alignment);  // 520
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 484
	_mi_align_down_ptr(const void* p,
				size_t alignment);  // 519
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 468
	_mi_align_up_ptr(const void* p,
			size_t alignment);  // 521
} /* size: 0, variables: 4, inline expansions: 9 (273 bytes) */

// <002EA63A> ../thirdparty/mimalloc/src/os.c:530
void* mi_os_page_align_area_conservative(void* addr, size_t size, size_t* newsize)
{
} /* size: 0 */

// <002EA208> ../thirdparty/mimalloc/src/os.c:534
// variables: 4
// function calls: 12
bool _mi_os_commit_ex(void* addr, size_t size, bool* is_zero, size_t stat_size)
{
	size_t csize; // 539
	void* start; // 540
	bool os_is_zero; // 544
	int err; // 545
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 536
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 43
	__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
					size_t amount);  // 536
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 252
	_mi_prim_commit(void* start,
			size_t size,
			bool* is_zero);  // 545
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 559
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 51
	__mi_stat_increase_mt(mi_stat_count_t* stat,
				size_t amount);  // 559
} /* size: 290, variables: 4, inline expansions: 12 (224 bytes) */

// <002EA1C9> ../thirdparty/mimalloc/src/os.c:563
bool _mi_os_commit(void* addr, size_t size, bool* is_zero)
{
} /* size: 0 */

// <0034C3FD> ../thirdparty/mimalloc/src/os.c:567
// variables: 3
// function calls: 8
bool mi_os_decommit_ex(void* addr, size_t size, bool* needs_recommit, size_t stat_size)
{
	size_t csize; // 572
	void* start; // 573
	int err; // 578
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 569
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 58
	__mi_stat_decrease_mt(mi_stat_count_t* stat,
				size_t amount);  // 569
	mi_os_page_align_area_conservative(void* addr,
						size_t size,
						size_t* newsize);  // 573
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 252
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 503
	_mi_prim_decommit(void* start,
				size_t size,
				bool* needs_recommit);  // 578
} /* size: 336, variables: 3, inline expansions: 8 (230 bytes) */

// <002EA150> ../thirdparty/mimalloc/src/os.c:567
// variables: 4
bool mi_os_decommit_ex(void* addr, size_t size, bool* needs_recommit, size_t stat_size)
{
	const char   __func__; // 8149
	size_t csize; // 572
	void* start; // 573
	int err; // 578
} /* size: 0, variables: 4 */

// <002EA111> ../thirdparty/mimalloc/src/os.c:586
// variable: 1
bool _mi_os_decommit(void* addr, size_t size)
{
	bool needs_recommit; // 587
} /* size: 0, variables: 1 */

// <002E9CDC> ../thirdparty/mimalloc/src/os.c:596
// variables: 3
// function calls: 13
bool _mi_os_reset(void* addr, size_t size)
{
	size_t csize; // 598
	void* start; // 599
	int err; // 608
	mi_os_page_align_area_conservative(void* addr,
						size_t size,
						size_t* newsize);  // 599
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 601
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 43
	__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
					size_t amount);  // 601
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 602
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 43
	__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
					size_t amount);  // 602
} /* size: 260, variables: 3, inline expansions: 13 (199 bytes) */

// <002E9C87> ../thirdparty/mimalloc/src/os.c:616
// variables: 3
void _mi_os_reuse(void* addr, size_t size)
{
	size_t csize; // 618
	const void* start; // 619
	const int  err; // 621
} /* size: 0, variables: 3 */

// <002E9716> ../thirdparty/mimalloc/src/os.c:629
// variables: 2
// function calls: 16
bool _mi_os_purge_ex(void* p, size_t size, bool allow_reset, size_t stat_size, mi_commit_fun_t* commit_fun, void* commit_fun_arg)
{
	{
		bool decommitted; // 636
	}
	{
		bool needs_recommit; // 642
	}
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 631
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 632
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 43
	__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
					size_t amount);  // 632
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 633
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 43
	__mi_stat_counter_increase_mt(mi_stat_counter_t* stat,
					size_t amount);  // 633
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 639
} /* size: 0, inline expansions: 16 (404 bytes) */

// <002E968F> ../thirdparty/mimalloc/src/os.c:656
bool _mi_os_purge(void* p, size_t size)
{
} /* size: 0 */

// <002E962E> ../thirdparty/mimalloc/src/os.c:662
// variables: 3
bool mi_os_protectx(void* addr, size_t size, bool protect)
{
	size_t csize; // 664
	void* start; // 665
	int err; // 672
} /* size: 0, variables: 3 */

// <002E9423> ../thirdparty/mimalloc/src/os.c:679
// function calls: 4
bool _mi_os_protect(void* addr, size_t size)
{
	mi_os_page_align_area_conservative(void* addr,
						size_t size,
						size_t* newsize);  // 665
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 252
	_mi_prim_protect(void* start,
			size_t size,
			bool protect);  // 672
	mi_os_protectx(void* addr,
			size_t size,
			bool protect);  // 680
} /* size: 0, inline expansions: 4 (0 bytes) */

// <002E9218> ../thirdparty/mimalloc/src/os.c:683
// function calls: 4
bool _mi_os_unprotect(void* addr, size_t size)
{
	mi_os_page_align_area_conservative(void* addr,
						size_t size,
						size_t* newsize);  // 665
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 252
	_mi_prim_protect(void* start,
			size_t size,
			bool protect);  // 672
	mi_os_protectx(void* addr,
			size_t size,
			bool protect);  // 684
} /* size: 0, inline expansions: 4 (0 bytes) */

// <002E919B> ../thirdparty/mimalloc/src/os.c:701
// variables: 6
uint8_t* mi_os_claim_huge_pages(size_t pages, size_t* total_size)
{
	const size_t  size; // 703
	uintptr_t start; // 705
	uintptr_t end; // 706
	uintptr_t huge_start; // 707
	{
		const mi_theap_t* theap; // 714
		{
			const uintptr_t  r; // 716
		}
	}
} /* size: 0, variables: 4 */

// <002E87DE> ../thirdparty/mimalloc/src/os.c:739
// variables: 15
// function calls: 27
void* _mi_os_alloc_huge_os_pages(size_t pages, int numa_node, mi_msecs_t max_msecs, size_t* pages_reserved, size_t* psize, mi_memid_t* memid)
{
	size_t size; // 743
	const uint8_t* start; // 744
	mi_msecs_t start_t; // 750
	size_t page; // 751
	bool all_zero; // 752
	const size_t  allocated; // 795
	const char   __func__; // 595
	{
		bool is_zero; // 755
		void* addr; // 756
		void* p; // 757
		int err; // 758
		{
			mi_msecs_t elapsed; // 782
			{
				mi_msecs_t estimate; // 784
			}
			_mi_prim_clock_now(void); // 523
			_mi_clock_now(void); // 535
			_mi_clock_end(mi_msecs_t start); // 782
		}
		_mi_theap_default(void); // 429
		_mi_subproc(void); // 777
		mi_stat_update_mt(mi_stat_count_t* stat,
					int64_t amount);  // 51
		__mi_stat_increase_mt(mi_stat_count_t* stat,
					size_t amount);  // 777
		_mi_theap_default(void); // 429
		_mi_subproc(void); // 778
		mi_stat_update_mt(mi_stat_count_t* stat,
					int64_t amount);  // 51
		__mi_stat_increase_mt(mi_stat_count_t* stat,
					size_t amount);  // 778
	}
	_mi_memid_create(mi_memkind_t memkind); // 1127
	_mi_memid_none(void); // 740
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 707
	{
		const mi_theap_t* theap; // 714
		_mi_theap_default(void); // 714
		__atomic_base<mi_heap_s::load(
			memory_order __m);  // 587
		atomic<mi_heap_s::load(
			memory_order __m);  // 1334
		atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
						memory_order __m);  // 571
		_mi_theap_heap(const mi_theap_t* theap); // 575
		mi_theap_is_initialized(const mi_theap_t* theap); // 715
		{
			const uintptr_t  r; // 716
			_mi_theap_random_next(mi_theap_t* theap); // 716
		}
	}
	__atomic_base<long unsigned int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 725
	mi_os_claim_huge_pages(size_t pages,
				size_t* total_size);  // 744
	_mi_memid_create(mi_memkind_t memkind); // 1131
	_mi_memid_create_os(void* base,
				size_t size,
				bool committed,
				bool is_zero,
				bool is_large);  // 801
} /* size: 0, variables: 7, inline expansions: 9 (241 bytes) */

// <002E879D> ../thirdparty/mimalloc/src/os.c:813
// variable: 1
void mi_os_free_huge_os_pages(void* p, size_t size, mi_subproc_t* subproc)
{
	uint8_t* base; // 815
} /* size: 0, variables: 1 */

// <002E847A> ../thirdparty/mimalloc/src/os.c:830
// variables: 4
// function calls: 8
int _mi_os_numa_node_count(void)
{
	size_t count; // 831
	const char   __func__; // 15263
	{
		long int ncount; // 833
		{
			const size_t  n; // 838
			mi_prim_access(const char* fpath,
					int mode);  // 633
			_mi_prim_numa_node_count(void); // 838
		}
		mi_option_get(mi_option_t option); // 270
		mi_option_get(mi_option_t option); // 833
		__atomic_base<long unsigned int>::store(
			__int_type __i,
			memory_order __m);  // 1323
		atomic_store_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 842
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 831
} /* size: 0, variables: 2, inline expansions: 2 (40 bytes) */

// <002E8442> ../thirdparty/mimalloc/src/os.c:849
// variables: 3
int mi_os_numa_node_get(void)
{
	int numa_count; // 850
	const size_t  n; // 853
	int numa_node; // 854
} /* size: 0, variables: 3 */

// <002E82F0> ../thirdparty/mimalloc/src/os.c:859
// function calls: 4
int _mi_os_numa_node(void)
{
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 860
	_mi_prim_numa_node(void); // 853
	mi_os_numa_node_get(void); // 864
} /* size: 154, inline expansions: 4 (175 bytes) */

