
//
// thirdparty/mimalloc/src/page-map.c
//
//	referenced by: libtier0.so
//
//	functions: 16
//

// <002DD851> ../thirdparty/mimalloc/src/page-map.c:12
void mi_page_map_cannot_commit(void)
{
} /* size: 0 */

// <003407DB> ../thirdparty/mimalloc/src/page-map.c:210
// variables: 2
bool mi_page_map_is_committed(size_t* pbit_idx, size_t idx)
{
	mi_bfield_t commit; // 211
	const size_t  bit_idx; // 212
} /* size: 35, variables: 2 */

// <002DD7EF> ../thirdparty/mimalloc/src/page-map.c:210
// variables: 3
inline bool mi_page_map_is_committed(size_t idx, size_t* pbit_idx)
{
	mi_bfield_t commit; // 211
	const size_t  bit_idx; // 212
	const char   __func__; // 5824
} /* size: 0, variables: 3 */

// <0034C111> ../thirdparty/mimalloc/src/page-map.c:218
// variables: 2
// function calls: 10
bool mi_page_map_ensure_committed(size_t idx, mi_submap_t* submap)
{
	size_t bit_idx; // 220
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 211
	mi_page_map_is_committed(size_t idx,
				size_t* pbit_idx);  // 221
	{
		uint8_t* start; // 222
		_mi_os_commit(void* addr,
				size_t size,
				bool* is_zero);  // 223
		__atomic_base<long unsigned int>::fetch_or(
			__int_type __i,
			memory_order __m);  // 1544
		atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
								__atomic_val_t __i,
								memory_order __m);  // 227
		mi_page_map_cannot_commit(void); // 224
	}
	__atomic_base<mi_page_s::load(
		memory_order __m);  // 587
	atomic<mi_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_page_s**>(const atomic<mi_page_s**>* __a,
						memory_order __m);  // 229
} /* size: 0, variables: 1, inline expansions: 6 (79 bytes) */

// <002DD7A0> ../thirdparty/mimalloc/src/page-map.c:218
// variables: 3
bool mi_page_map_ensure_committed(size_t idx, mi_submap_t* submap)
{
	const char   __func__; // 1309
	size_t bit_idx; // 220
	{
		uint8_t* start; // 222
	}
} /* size: 0, variables: 2 */

// <002DCC71> ../thirdparty/mimalloc/src/page-map.c:234
// variables: 9
// function calls: 34
bool _mi_page_map_init(void)
{
	size_t vbits; // 235
	const char   __func__; // 8149
	const size_t  os_page_size; // 251
	const size_t  page_map_size; // 252
	const size_t  submap_size; // 253
	const size_t  reserve_size; // 254
	const bool  commit; // 256
	const mi_page_t**  sub0; // 273
	mi_submap_t nullsub; // 283
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 282
	mi_option_get_clamp(mi_option_t option,
				long int min,
				long int max);  // 235
	_mi_os_virtual_address_bits(void); // 237
	_mi_os_page_size(void); // 251
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 252
	__atomic_base<long unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 1323
	atomic_store_explicit<long unsigned int>(atomic<long unsigned int>* __a,
						__atomic_val_t __i,
						memory_order __m);  // 270
	__atomic_base<mi_page_s::store(
		__pointer_type __p,
		memory_order __m);  // 578
	atomic<mi_page_s::store(
		__pointer_type __p,
		memory_order __m);  // 1323
	atomic_store_explicit<mi_page_s**>(atomic<mi_page_s**>* __a,
						__atomic_val_t __i,
						memory_order __m);  // 288
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	mi_lock_init(mi_lock_t* lock); // 414
	mi_lock_init(mi_lock_t* lock); // 289
	__atomic_base<mi_page_s::load(
		memory_order __m);  // 587
	atomic<mi_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_page_s**>(const atomic<mi_page_s**>* __a,
						memory_order __m);  // 649
	_mi_page_map_at(size_t idx); // 661
	_mi_checked_ptr_page(const void* p); // 672
	_mi_ptr_page(const void* p); // 291
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
				size_t n);  // 268
	_mi_os_commit(void* addr,
			size_t size,
			bool* is_zero);  // 275
	mi_page_map_cannot_commit(void); // 276
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
				size_t n);  // 281
} /* size: 0, variables: 9, inline expansions: 34 (1098 bytes) */

// <002DC6AE> ../thirdparty/mimalloc/src/page-map.c:296
// variables: 4
// function calls: 17
void _mi_page_map_unsafe_destroy(mi_subproc_t* subproc)
{
	const char   __func__; // 5670
	{
		size_t idx; // 301
		{
			mi_submap_t sub; // 304
			{
				mi_memid_t memid; // 306
				_mi_memid_create(mi_memkind_t memkind); // 1131
				_mi_memid_create_os(void* base,
							size_t size,
							bool committed,
							bool is_zero,
							bool is_large);  // 306
				__atomic_base<mi_page_s::store(
					__pointer_type __p,
					memory_order __m);  // 578
				atomic<mi_page_s::store(
					__pointer_type __p,
					memory_order __m);  // 1323
				atomic_store_explicit<mi_page_s**>(atomic<mi_page_s**>* __a,
									__atomic_val_t __i,
									memory_order __m);  // 308
			}
			__atomic_base<mi_page_s::load(
				memory_order __m);  // 587
			atomic<mi_page_s::load(
				memory_order __m);  // 1334
			atomic_load_explicit<mi_page_s**>(const atomic<mi_page_s**>* __a,
								memory_order __m);  // 649
			_mi_page_map_at(size_t idx); // 304
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 211
		mi_page_map_is_committed(size_t idx,
					size_t* pbit_idx);  // 303
	}
	mi_lock_done(mi_lock_t* lock); // 300
	__atomic_base<long unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 1323
	atomic_store_explicit<long unsigned int>(atomic<long unsigned int>* __a,
						__atomic_val_t __i,
						memory_order __m);  // 317
	_mi_memid_create(mi_memkind_t memkind); // 1127
	_mi_memid_none(void); // 315
} /* size: 0, variables: 1, inline expansions: 5 (42 bytes) */

// <002DC614> ../thirdparty/mimalloc/src/page-map.c:321
// variables: 6
bool mi_page_map_ensure_submap_at(size_t idx, mi_submap_t* submap)
{
	const char   __func__; // 1309
	mi_submap_t sub; // 323
	{
		bool _mi_go; // 329
		{
			mi_memid_t memid; // 334
			const size_t  submap_size; // 335
			{
				mi_submap_t expect; // 341
			}
		}
	}
} /* size: 0, variables: 2 */

// <002DC154> ../thirdparty/mimalloc/src/page-map.c:357
// variables: 6
// function calls: 10
bool mi_page_map_set_range_prim(mi_page_t* page, size_t idx, size_t sub_idx, size_t slice_count)
{
	const char   __func__; // 595
	{
		mi_submap_t sub; // 360
		{
			bool _mi_go; // 329
			mi_lock_acquire(mi_lock_t* lock); // 329
			__atomic_base<mi_page_s::load(
				memory_order __m);  // 587
			atomic<mi_page_s::load(
				memory_order __m);  // 1334
			atomic_load_explicit<mi_page_s**>(const atomic<mi_page_s**>* __a,
								memory_order __m);  // 331
			{
				mi_memid_t memid; // 334
				const size_t  submap_size; // 335
				{
					mi_submap_t expect; // 341
					__atomic_base<mi_page_s::compare_exchange_strong(
								__pointer_type& __p1,
								__pointer_type __p2,
								memory_order __m1,
								memory_order __m2);  // 633
					atomic<mi_page_s::compare_exchange_strong(
								__pointer_type& __p1,
								__pointer_type __p2,
								memory_order __m1,
								memory_order __m2);  // 1380
					atomic_compare_exchange_strong_explicit<mi_page_s**>(atomic<mi_page_s**>* __a,
												__atomic_val_t* __i1,
												__atomic_val_t __i2,
												memory_order __m1,
												memory_order __m2);  // 342
					_mi_os_free(void* p,
							size_t size,
							mi_memid_t memid);  // 344
				}
			}
			mi_lock_release(mi_lock_t* lock); // 329
		}
		mi_page_map_ensure_submap_at(size_t idx,
						mi_submap_t* submap);  // 361
	}
} /* size: 543, variables: 1 */

// <002DC10D> ../thirdparty/mimalloc/src/page-map.c:377
bool mi_page_map_set_range(mi_page_t* page, size_t idx, size_t sub_idx, size_t slice_count)
{
} /* size: 0 */

// <002DC0B9> ../thirdparty/mimalloc/src/page-map.c:388
// variables: 2
size_t mi_page_map_get_idx(mi_page_t* page, size_t* sub_idx, size_t* slice_count)
{
	size_t page_size; // 389
	uint8_t* page_start; // 390
} /* size: 0, variables: 2 */

// <002DBB76> ../thirdparty/mimalloc/src/page-map.c:396
// variables: 4
// function calls: 17
bool _mi_page_map_register(mi_page_t* page)
{
	const char   __func__; // 15154
	size_t slice_count; // 404
	size_t sub_idx; // 405
	const size_t  idx; // 406
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 398
	_mi_is_aligned(const void* p,
			size_t alignment);  // 398
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_start(const mi_page_t* page); // 696
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 390
	_mi_page_map_index(const void* p,
				size_t* sub_idx);  // 393
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1106
	mi_slice_count_of_size(size_t size); // 392
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 484
	_mi_align_down_ptr(const void* p,
				size_t alignment);  // 726
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 392
	mi_page_map_get_idx(mi_page_t* page,
				size_t* sub_idx,
				size_t* slice_count);  // 406
	mi_page_map_set_range(mi_page_t* page,
				size_t idx,
				size_t sub_idx,
				size_t slice_count);  // 377
	mi_page_map_set_range(mi_page_t* page,
				size_t idx,
				size_t sub_idx,
				size_t slice_count);  // 407
} /* size: 0, variables: 4, inline expansions: 17 (400 bytes) */

// <002DB6BA> ../thirdparty/mimalloc/src/page-map.c:410
// variables: 4
// function calls: 16
void _mi_page_map_unregister(mi_page_t* page)
{
	const char   __func__; // 63973
	size_t slice_count; // 416
	size_t sub_idx; // 417
	const size_t  idx; // 418
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 413
	_mi_is_aligned(const void* p,
			size_t alignment);  // 413
	mi_page_block_size(const mi_page_t* page); // 691
	mi_page_size(const mi_page_t* page); // 695
	mi_page_start(const mi_page_t* page); // 696
	mi_page_area(const mi_page_t* page,
			size_t* size);  // 390
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 1106
	mi_slice_count_of_size(size_t size); // 392
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 484
	_mi_align_down_ptr(const void* p,
				size_t alignment);  // 726
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 392
	_mi_page_map_index(const void* p,
				size_t* sub_idx);  // 393
	mi_page_map_get_idx(mi_page_t* page,
				size_t* sub_idx,
				size_t* slice_count);  // 418
	mi_page_map_set_range(mi_page_t* page,
				size_t idx,
				size_t sub_idx,
				size_t slice_count);  // 420
} /* size: 0, variables: 4, inline expansions: 16 (330 bytes) */

// <002DB52D> ../thirdparty/mimalloc/src/page-map.c:423
// variables: 3
// function calls: 3
void _mi_page_map_unregister_range(void* start, size_t size)
{
	const size_t  slice_count; // 425
	size_t sub_idx; // 426
	const uintptr_t  idx; // 427
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 425
	_mi_page_map_index(const void* p,
				size_t* sub_idx);  // 427
	mi_page_map_set_range(mi_page_t* page,
				size_t idx,
				size_t sub_idx,
				size_t slice_count);  // 428
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <002DB313> ../thirdparty/mimalloc/src/page-map.c:432
// variables: 3
// function calls: 7
mi_page_t* _mi_safe_ptr_page(const void* p)
{
	size_t sub_idx; // 435
	const size_t  idx; // 436
	const mi_page_t**  sub; // 438
	_mi_page_map_index(const void* p,
				size_t* sub_idx);  // 436
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 211
	mi_page_map_is_committed(size_t idx,
				size_t* pbit_idx);  // 437
	__atomic_base<mi_page_s::load(
		memory_order __m);  // 704
	__atomic_base<mi_page_s::operator std::__atomic_base<mi_page_s**>::__pointer_type(); // 441
	atomic<mi_page_s::operator std::atomic<mi_page_s**>::__pointer_type(); // 438
} /* size: 0, variables: 3, inline expansions: 7 (93 bytes) */

// <002DB2F4> ../thirdparty/mimalloc/src/page-map.c:443
bool mi_is_in_heap_region(const void* p)
{
} /* size: 0 */

