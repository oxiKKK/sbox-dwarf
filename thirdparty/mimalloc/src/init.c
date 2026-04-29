
//
// thirdparty/mimalloc/src/init.c
//
//	referenced by: libtier0.so
//
//	functions: 51
//

// <002F323C> ../thirdparty/mimalloc/src/init.c:222
mi_threadid_t _mi_thread_id(void)
{
} /* size: 0 */

// <002F3204> ../thirdparty/mimalloc/src/init.c:263
void mi_theap_guarded_set_sample_rate(mi_theap_t* theap, size_t sample_rate, size_t seed)
{
} /* size: 0 */

// <002F31CD> ../thirdparty/mimalloc/src/init.c:267
void mi_theap_guarded_set_size_bound(mi_theap_t* theap, size_t min, size_t max)
{
} /* size: 0 */

// <002F31AC> ../thirdparty/mimalloc/src/init.c:270
void _mi_theap_guarded_init(mi_theap_t* theap)
{
} /* size: 0 */

// <002F31A1> ../thirdparty/mimalloc/src/init.c:283
void mi_subproc_main_init(void)
{
} /* size: 0 */

// <002F3196> ../thirdparty/mimalloc/src/init.c:299
void mi_tld_main_init(void)
{
} /* size: 0 */

// <002F3175> ../thirdparty/mimalloc/src/init.c:306
void _mi_theap_options_init(mi_theap_t* theap)
{
} /* size: 0 */

// <002F316A> ../thirdparty/mimalloc/src/init.c:313
void mi_theap_main_init(void)
{
} /* size: 0 */

// <0034D9F7> ../thirdparty/mimalloc/src/init.c:329
// function calls: 50
void mi_heap_main_init(void)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1121
	_mi_memid_create(mi_memkind_t memkind); // 316
	_mi_random_init(mi_random_ctx_t* ctx); // 320
	_mi_theap_random_next(mi_theap_t* theap); // 322
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 307
	mi_option_get(mi_option_t option); // 308
	mi_option_get(mi_option_t option); // 282
	mi_option_get_clamp(mi_option_t option,
				long int min,
				long int max);  // 309
	_mi_theap_options_init(mi_theap_t* theap); // 323
	mi_theap_main_init(void); // 334
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1121
	_mi_memid_create(mi_memkind_t memkind); // 285
	__atomic_base<long unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 369
	__atomic_base<long unsigned int>::operator=(
			__int_type __i);  // 287
	__atomic_base<long unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 369
	__atomic_base<long unsigned int>::operator=(
			__int_type __i);  // 288
	mi_stat_update_mt(mi_stat_count_t* stat,
				int64_t amount);  // 51
	__mi_stat_increase_mt(mi_stat_count_t* stat,
				size_t amount);  // 290
	__atomic_base<mi_heap_s::store(
		__pointer_type __p,
		memory_order __m);  // 578
	atomic<mi_heap_s::store(
		__pointer_type __p,
		memory_order __m);  // 1323
	atomic_store_explicit<mi_heap_s*>(atomic<mi_heap_s*>* __a,
						__atomic_val_t __i,
						memory_order __m);  // 289
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 292
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 293
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 294
	mi_subproc_main_init(void); // 335
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 301
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 302
	mi_tld_main_init(void); // 336
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 338
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 339
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 340
} /* size: 0, inline expansions: 50 (3016 bytes) */

// <002F315F> ../thirdparty/mimalloc/src/init.c:329
void mi_heap_main_init(void)
{
} /* size: 0 */

// <002F3130> ../thirdparty/mimalloc/src/init.c:350
// variables: 2
mi_tld_t* mi_tld_alloc(void)
{
	{
		mi_memid_t memid; // 359
		mi_tld_t* tld; // 360
	}
} /* size: 0 */

// <002F3006> ../thirdparty/mimalloc/src/init.c:380
// function calls: 3
void mi_tld_free(mi_tld_t* tld)
{
	mi_lock_done(mi_lock_t* lock); // 381
	__atomic_base<long unsigned int>::fetch_sub(
			__int_type __i,
			memory_order __m);  // 1516
	atomic_fetch_sub_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 383
} /* size: 106, inline expansions: 3 (35 bytes) */

// <002F2FD6> ../thirdparty/mimalloc/src/init.c:395
// variables: 2
mi_theap_t* _mi_theap_default_safe(void)
{
	mi_theap_t* theap; // 396
	const char   __func__; // 15263
} /* size: 0, variables: 2 */

// <002F2A73> ../thirdparty/mimalloc/src/init.c:404
// variables: 2
// function calls: 19
mi_theap_t* _mi_theap_main_safe(void)
{
	mi_theap_t* theap; // 405
	const char   __func__; // 5857
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 460
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 460
	_mi_is_theap_main(const mi_theap_t* theap); // 415
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
	mi_thread_init(void); // 407
	_mi_theap_default(void); // 408
} /* size: 0, variables: 2, inline expansions: 19 (200 bytes) */

// <002F2A5F> ../thirdparty/mimalloc/src/init.c:420
mi_subproc_t* _mi_subproc_main(void)
{
} /* size: 0 */

// <002F2A3A> ../thirdparty/mimalloc/src/init.c:424
// variable: 1
mi_subproc_t* _mi_subproc(void)
{
	mi_theap_t* theap; // 429
} /* size: 0, variables: 1 */

// <002F29FD> ../thirdparty/mimalloc/src/init.c:438
// variables: 2
mi_heap_t* _mi_subproc_heap_main(mi_subproc_t* subproc)
{
	mi_heap_t* heap; // 439
	const char   __func__; // 15154
} /* size: 0, variables: 2 */

// <002F29ED> ../thirdparty/mimalloc/src/init.c:450
mi_heap_t* mi_heap_main(void)
{
} /* size: 0 */

// <002F29BD> ../thirdparty/mimalloc/src/init.c:454
// variable: 1
bool _mi_is_heap_main(const mi_heap_t* heap)
{
	const char   __func__; // 6958
} /* size: 0, variables: 1 */

// <002F2998> ../thirdparty/mimalloc/src/init.c:459
bool _mi_is_theap_main(const mi_theap_t* theap)
{
} /* size: 0 */

// <002F294D> ../thirdparty/mimalloc/src/init.c:467
// function call: 1
mi_subproc_id_t mi_subproc_main(void)
{
	_mi_subproc_main(void); // 468
} /* size: 0, inline expansions: 1 (0 bytes) */

// <002F293D> ../thirdparty/mimalloc/src/init.c:471
mi_subproc_id_t mi_subproc_current(void)
{
} /* size: 0 */

// <002F2623> ../thirdparty/mimalloc/src/init.c:475
// variables: 4
// function calls: 10
mi_subproc_id_t mi_subproc_new(void)
{
	atomic<long unsigned int> subproc_total_count; // 476
	mi_memid_t memid; // 477
	mi_subproc_t* subproc; // 478
	{
		bool _mi_go; // 484
		mi_lock_acquire(mi_lock_t* lock); // 484
		mi_lock_release(mi_lock_t* lock); // 484
	}
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 481
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 482
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 483
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <002F25FE> ../thirdparty/mimalloc/src/init.c:493
mi_subproc_t* _mi_subproc_from_id(mi_subproc_id_t subproc_id)
{
} /* size: 0 */

// <002F1E97> ../thirdparty/mimalloc/src/init.c:498
// variables: 5
// function calls: 21
void mi_subproc_unsafe_destroy(mi_subproc_t* subproc, bool acquire_subprocs_lock)
{
	const char   __func__; // 40853
	{
		bool _mi_go; // 501
		mi_lock_acquire(mi_lock_t* lock); // 501
		mi_lock_release(mi_lock_t* lock); // 501
	}
	{
		bool _mi_go; // 508
		{
			mi_heap_t* heap; // 509
			{
				mi_heap_t* next; // 511
				_mi_heap_force_destroy(mi_heap_t* heap); // 230
				_mi_is_heap_main(const mi_heap_t* heap); // 226
				mi_heap_destroy(mi_heap_t* heap); // 224
				mi_heap_destroy(mi_heap_t* heap); // 512
				__atomic_base<mi_heap_s::load(
					memory_order __m);  // 704
				__atomic_base<mi_heap_s::operator std::__atomic_base<mi_heap_s*>::__pointer_type(); // 441
				atomic<mi_heap_s::operator std::atomic<mi_heap_s*>::__pointer_type(); // 512
			}
			__atomic_base<mi_heap_s::load(
				memory_order __m);  // 704
			__atomic_base<mi_heap_s::operator std::__atomic_base<mi_heap_s*>::__pointer_type(); // 441
			atomic<mi_heap_s::operator std::atomic<mi_heap_s*>::__pointer_type(); // 515
			__atomic_base<mi_heap_s::load(
				memory_order __m);  // 704
			__atomic_base<mi_heap_s::operator std::__atomic_base<mi_heap_s*>::__pointer_type(); // 441
			atomic<mi_heap_s::operator std::atomic<mi_heap_s*>::__pointer_type(); // 516
			_mi_heap_force_destroy(mi_heap_t* heap); // 516
		}
		mi_lock_acquire(mi_lock_t* lock); // 508
		mi_lock_release(mi_lock_t* lock); // 508
	}
	_mi_arenas_unsafe_destroy_all(mi_subproc_t* subproc); // 520
	mi_lock_done(mi_lock_t* lock); // 529
	mi_lock_done(mi_lock_t* lock); // 530
} /* size: 0, variables: 1, inline expansions: 3 (60 bytes) */

// <002F1E43> ../thirdparty/mimalloc/src/init.c:540
void mi_subproc_destroy(mi_subproc_id_t subproc_id)
{
} /* size: 0 */

// <002F1E07> ../thirdparty/mimalloc/src/init.c:545
// variables: 3
void mi_subprocs_unsafe_destroy_all(void)
{
	{
		bool _mi_go; // 546
		{
			mi_subproc_t* subproc; // 547
			{
				mi_subproc_t* next; // 549
			}
		}
	}
} /* size: 0 */

// <002F1B5A> ../thirdparty/mimalloc/src/init.c:560
// variables: 3
// function calls: 7
void mi_subproc_add_current_thread(mi_subproc_id_t subproc_id)
{
	mi_subproc_t* subproc; // 561
	const mi_tld_t* tld; // 562
	const char   __func__; // 40702
	_mi_subproc_from_id(mi_subproc_id_t subproc_id); // 561
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 569
	__atomic_base<long unsigned int>::fetch_sub(
			__int_type __i,
			memory_order __m);  // 1516
	atomic_fetch_sub_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 570
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 571
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <002F1ACB> ../thirdparty/mimalloc/src/init.c:575
// variables: 4
bool mi_subproc_visit_heaps(mi_subproc_id_t subproc_id, mi_heap_visit_fun* visitor, void* arg)
{
	mi_subproc_t* subproc; // 576
	bool ok; // 578
	{
		bool _mi_go; // 579
		{
			mi_heap_t* heap; // 580
		}
	}
} /* size: 0, variables: 2 */

// <002F1A9C> ../thirdparty/mimalloc/src/init.c:593
// variables: 2
mi_theap_t* _mi_thread_init_theap_default(void)
{
	mi_theap_t* theap; // 594
	{
		mi_tld_t* tld; // 604
	}
} /* size: 0, variables: 1 */

// <002F1A0A> ../thirdparty/mimalloc/src/init.c:616
// variables: 8
void mi_thread_theaps_done(mi_tld_t* tld)
{
	const char   __func__; // 15154
	bool all_freed; // 640
	{
		bool _mi_go; // 624
		{
			mi_theap_t* theap; // 625
			{
				mi_theap_t* next; // 627
			}
		}
	}
	{
		bool _mi_go; // 643
		{
			mi_theap_t* theap; // 644
			{
				mi_theap_t* next; // 646
			}
		}
	}
} /* size: 0, variables: 2 */

// <002F19E4> ../thirdparty/mimalloc/src/init.c:686
// variable: 1
void mi_process_setup_auto_thread_done(void)
{
	bool tls_initialized; // 687
} /* size: 0, variables: 1 */

// <002F19D0> ../thirdparty/mimalloc/src/init.c:695
bool _mi_is_main_thread(void)
{
} /* size: 0 */

// <002F19C4> ../thirdparty/mimalloc/src/init.c:701
void mi_thread_init(void)
{
} /* size: 0 */

// <002F198C> ../thirdparty/mimalloc/src/init.c:715
void mi_thread_done(void)
{
} /* size: 0 */

// <002F0D48> ../thirdparty/mimalloc/src/init.c:719
// variables: 8
// function calls: 37
void _mi_thread_done(mi_theap_t* _theap_main)
{
	const char   __func__; // 44947
	const mi_tld_t* tld; // 739
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 731
	_mi_thread_locals_thread_done(void); // 736
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
				size_t amount);  // 742
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 745
	_mi_theap_default(void); // 725
	{
		bool _mi_go; // 624
		mi_lock_acquire(mi_lock_t* lock); // 624
		{
			mi_theap_t* theap; // 625
			{
				mi_theap_t* next; // 627
				_mi_theap_collect_abandon(mi_theap_t* theap); // 630
			}
		}
		mi_lock_release(mi_lock_t* lock); // 624
	}
	{
		bool _mi_go; // 643
		mi_lock_acquire(mi_lock_t* lock); // 643
		{
			mi_theap_t* theap; // 644
			{
				mi_theap_t* next; // 646
			}
		}
		mi_lock_release(mi_lock_t* lock); // 643
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
					size_t amount);  // 655
	_mi_prim_thread_yield(void); // 656
	_mi_theap_default(void); // 663
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 664
	mi_thread_theaps_done(mi_tld_t* tld); // 748
} /* size: 0, variables: 2, inline expansions: 32 (1072 bytes) */

// <002F0D21> ../thirdparty/mimalloc/src/init.c:755
mi_theap_t* _mi_theap_empty_get(void)
{
} /* size: 0 */

// <002F0D16> ../thirdparty/mimalloc/src/init.c:906
void mi_tls_slots_init(void)
{
} /* size: 0 */

// <002F0D0B> ../thirdparty/mimalloc/src/init.c:910
void mi_tls_slots_done(void)
{
} /* size: 0 */

// <002F0B7E> ../thirdparty/mimalloc/src/init.c:916
// variable: 1
// function calls: 6
void _mi_theap_cached_set(mi_theap_t* theap)
{
	mi_theap_t* prev; // 917
	_mi_theap_cached(void); // 917
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 285
	_mi_theap_incref(mi_theap_t* theap); // 283
	_mi_theap_incref(mi_theap_t* theap); // 931
	_mi_theap_decref(mi_theap_t* theap); // 932
} /* size: 114, variables: 1, inline expansions: 6 (86 bytes) */

// <002F05A5> ../thirdparty/mimalloc/src/init.c:935
// variables: 2
// function calls: 23
void _mi_theap_default_set(mi_theap_t* theap)
{
	const mi_theap_t* theap_old; // 936
	const char   __func__; // 15154
	_mi_theap_default(void); // 936
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 938
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 951
	_mi_prim_thread_associate_default_theap(mi_theap_t* theap); // 953
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 954
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 960
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 960
} /* size: 0, variables: 2, inline expansions: 23 (287 bytes) */

// <002F008A> ../thirdparty/mimalloc/src/init.c:965
// variable: 1
// function calls: 23
void mi_thread_set_in_threadpool(void)
{
	mi_theap_t* theap; // 966
	_mi_theap_default(void); // 396
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 397
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
	mi_thread_init(void); // 398
	_mi_theap_default(void); // 399
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 399
	_mi_theap_default(void); // 400
	_mi_theap_default_safe(void); // 395
	_mi_theap_default_safe(void); // 966
} /* size: 0, variables: 1, inline expansions: 23 (0 bytes) */

// <002F0063> ../thirdparty/mimalloc/src/init.c:976
bool _mi_preloading(void)
{
} /* size: 12 */

// <002F0040> ../thirdparty/mimalloc/src/init.c:981
bool mi_is_redirected(void)
{
} /* size: 0 */

// <002F0014> ../thirdparty/mimalloc/src/init.c:986
// variables: 2
void _mi_auto_process_init(void)
{
	const char   __func__; // 15154
	const char* msg; // 1003
} /* size: 0, variables: 2 */

// <002EFFA6> ../thirdparty/mimalloc/src/init.c:1021
// variables: 4
bool mi_cpuid(uint32_t* regs4, uint32_t level, uint32_t sublevel)
{
	uint32_t eax; // 1024
	uint32_t ebx; // 1024
	uint32_t ecx; // 1024
	uint32_t edx; // 1024
} /* size: 0, variables: 4 */

// <002EFF53> ../thirdparty/mimalloc/src/init.c:1045
// variables: 4
void mi_detect_cpu_features(void)
{
	bool amd; // 1049
	bool fsrm; // 1050
	bool fsrs; // 1052
	uint32_t cpu_info; // 1053
} /* size: 0, variables: 4 */

// <002EFF15> ../thirdparty/mimalloc/src/init.c:1086
// variables: 3
void mi_process_init_once(void)
{
	{
		size_t pages; // 1111
		int reserve_at; // 1112
	}
	{
		long int ksize; // 1120
	}
} /* size: 0 */

// <002EFEDE> ../thirdparty/mimalloc/src/init.c:1128
// variables: 2
void mi_process_init(void)
{
	mi_atomic_once_t _mi_once; // 1132
	{
		bool _mi_exec; // 1132
	}
} /* size: 0, variables: 1 */

// <002EFEB6> ../thirdparty/mimalloc/src/init.c:1138
// variable: 1
void mi_process_done(void)
{
	bool process_done; // 1142
} /* size: 0, variables: 1 */

// <002EFE3E> ../thirdparty/mimalloc/src/init.c:1185
// function call: 1
void _mi_auto_process_done(void)
{
	_mi_option_get_fast(mi_option_t option); // 1186
} /* size: 0, inline expansions: 1 (18 bytes) */

