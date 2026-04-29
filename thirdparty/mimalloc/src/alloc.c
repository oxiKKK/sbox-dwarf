
//
// thirdparty/mimalloc/src/alloc.c
//
//	referenced by: libtier0.so
//
//	functions: 76
//

// <00334578> ../thirdparty/mimalloc/src/alloc.c:32
// variables: 8
inline void* mi_page_malloc_zero(mi_theap_t* theap, mi_page_t* page, size_t size, bool zero, size_t* usable)
{
	const char   __func__; // 5857
	const mi_block_t* block; // 41
	const size_t  bsize; // 63
	const mi_padding_t* padding; // 98
	ptrdiff_t delta; // 99
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
} /* size: 0, variables: 5 */

// <00333187> ../thirdparty/mimalloc/src/alloc.c:119
// variables: 3
// function calls: 71
void* _mi_page_malloc_zero(mi_theap_t* theap, mi_page_t* page, size_t size, bool zero)
{
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
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
	_mi_ptr_page(const void* p); // 45
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
			const mi_block_t* block);  // 49
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 84
	memset(void* __dest,
		int __ch,
		size_t __len);  // 84
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
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
	_mi_ptr_page(const void* p); // 51
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
				size_t n);  // 89
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 120
} /* size: 0, inline expansions: 71 (3375 bytes) */

// <00333118> ../thirdparty/mimalloc/src/alloc.c:130
// variables: 4
inline void* mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap, size_t size, bool zero, size_t* usable)
{
	const char   __func__; // 63427
	const uintptr_t  tid; // 135
	mi_page_t* page; // 148
	const void* p; // 149
} /* size: 0, variables: 4 */

// <003330B5> ../thirdparty/mimalloc/src/alloc.c:161
// variables: 2
inline void* mi_theap_malloc_generic(mi_theap_t* theap, size_t size, bool zero, size_t huge_alignment, size_t* usable)
{
	const char   __func__; // 63973
	const void* p; // 176
} /* size: 0, variables: 2 */

// <00333073> ../thirdparty/mimalloc/src/alloc.c:188
inline void* mi_theap_malloc_small_zero(mi_theap_t* theap, size_t size, bool zero, size_t* usable)
{
} /* size: 0 */

// <00331C17> ../thirdparty/mimalloc/src/alloc.c:203
// variables: 3
// function calls: 72
void* mi_theap_malloc_small(mi_theap_t* theap, size_t size)
{
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
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
	_mi_ptr_page(const void* p); // 45
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 84
	memset(void* __dest,
		int __ch,
		size_t __len);  // 84
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 197
	mi_theap_malloc_small_zero(mi_theap_t* theap,
					size_t size,
					bool zero,
					size_t* usable);  // 204
} /* size: 0, inline expansions: 72 (0 bytes) */

// <00331BAF> ../thirdparty/mimalloc/src/alloc.c:207
// function call: 1
void* mi_malloc_small(size_t size)
{
	_mi_theap_default(void); // 208
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00330649> ../thirdparty/mimalloc/src/alloc.c:211
// variables: 3
// function calls: 77
void* mi_heap_malloc_small(mi_heap_t* heap, size_t size)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 212
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
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
	_mi_ptr_page(const void* p); // 45
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 84
	memset(void* __dest,
		int __ch,
		size_t __len);  // 84
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 212
} /* size: 0, inline expansions: 77 (0 bytes) */

// <003305F0> ../thirdparty/mimalloc/src/alloc.c:216
// variable: 1
inline void* mi_theap_malloc_zero_nonnull(mi_theap_t* theap, size_t size, bool zero, size_t huge_alignment, size_t* usable)
{
	const char   __func__; // 1309
} /* size: 0, variables: 1 */

// <00330592> ../thirdparty/mimalloc/src/alloc.c:227
// variable: 1
inline void* _mi_theap_malloc_zero_ex(mi_theap_t* theap, size_t size, bool zero, size_t huge_alignment, size_t* usable)
{
	const char   __func__; // 5824
} /* size: 0, variables: 1 */

// <0032EDD6> ../thirdparty/mimalloc/src/alloc.c:243
// variables: 3
// function calls: 84
void* _mi_theap_malloc_zero(mi_theap_t* theap, size_t size, bool zero, size_t* usable)
{
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
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
	_mi_ptr_page(const void* p); // 45
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 46
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 84
	memset(void* __dest,
		int __ch,
		size_t __len);  // 84
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
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
				size_t n);  // 89
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 236
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 174
	mi_theap_malloc_generic(mi_theap_t* theap,
				size_t size,
				bool zero,
				size_t huge_alignment,
				size_t* usable);  // 239
	_mi_theap_malloc_zero_ex(mi_theap_t* theap,
				size_t size,
				bool zero,
				size_t huge_alignment,
				size_t* usable);  // 244
} /* size: 0, inline expansions: 84 (7619 bytes) */

// <0032EDAA> ../thirdparty/mimalloc/src/alloc.c:250
inline void* mi_theap_malloc(mi_theap_t* theap, size_t size)
{
} /* size: 0 */

// <0032ED8A> ../thirdparty/mimalloc/src/alloc.c:254
void* mi_malloc(size_t size)
{
} /* size: 0 */

// <0032D631> ../thirdparty/mimalloc/src/alloc.c:258
// variables: 3
// function calls: 82
void* mi_heap_malloc(mi_heap_t* heap, size_t size)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 259
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
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
	_mi_ptr_page(const void* p); // 45
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 84
	memset(void* __dest,
		int __ch,
		size_t __len);  // 84
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 220
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 174
	mi_theap_malloc_generic(mi_theap_t* theap,
				size_t size,
				bool zero,
				size_t huge_alignment,
				size_t* usable);  // 223
	mi_theap_malloc_zero_nonnull(mi_theap_t* theap,
					size_t size,
					bool zero,
					size_t huge_alignment,
					size_t* usable);  // 259
} /* size: 0, inline expansions: 82 (0 bytes) */

// <0032C0E0> ../thirdparty/mimalloc/src/alloc.c:264
// variables: 3
// function calls: 74
void* mi_zalloc_small(size_t size)
{
	_mi_theap_default(void); // 265
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
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
	_mi_ptr_page(const void* p); // 45
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
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
				size_t n);  // 89
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 197
	mi_theap_malloc_small_zero(mi_theap_t* theap,
					size_t size,
					bool zero,
					size_t* usable);  // 265
} /* size: 0, inline expansions: 74 (0 bytes) */

// <0032AA6A> ../thirdparty/mimalloc/src/alloc.c:272
// variables: 3
// function calls: 78
void* mi_heap_zalloc_small(mi_heap_t* heap, size_t size)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 273
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
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
	_mi_ptr_page(const void* p); // 45
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
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
				size_t n);  // 89
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 273
} /* size: 0, inline expansions: 78 (0 bytes) */

// <0032AA3C> ../thirdparty/mimalloc/src/alloc.c:277
inline void* mi_theap_zalloc(mi_theap_t* theap, size_t size)
{
} /* size: 0 */

// <0032AA1B> ../thirdparty/mimalloc/src/alloc.c:281
void* mi_zalloc(size_t size)
{
} /* size: 0 */

// <003291B4> ../thirdparty/mimalloc/src/alloc.c:285
// variables: 3
// function calls: 83
void* mi_heap_zalloc(mi_heap_t* heap, size_t size)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 286
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
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
	_mi_ptr_page(const void* p); // 45
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
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
				size_t n);  // 89
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 220
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 174
	mi_theap_malloc_generic(mi_theap_t* theap,
				size_t size,
				bool zero,
				size_t huge_alignment,
				size_t* usable);  // 223
	mi_theap_malloc_zero_nonnull(mi_theap_t* theap,
					size_t size,
					bool zero,
					size_t huge_alignment,
					size_t* usable);  // 286
} /* size: 0, inline expansions: 83 (0 bytes) */

// <0032916C> ../thirdparty/mimalloc/src/alloc.c:289
// variable: 1
inline void* mi_theap_calloc(mi_theap_t* theap, size_t count, size_t size)
{
	size_t total; // 290
} /* size: 0, variables: 1 */

// <0032913E> ../thirdparty/mimalloc/src/alloc.c:295
void* mi_calloc(size_t count, size_t size)
{
} /* size: 0 */

// <00328FB1> ../thirdparty/mimalloc/src/alloc.c:299
// variable: 1
// function calls: 3
void* mi_heap_calloc(mi_heap_t* heap, size_t count, size_t size)
{
	size_t total; // 300
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 301
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00327BBD> ../thirdparty/mimalloc/src/alloc.c:306
// variables: 3
// function calls: 75
void* mi_umalloc_small(size_t size, size_t* usable)
{
	_mi_theap_default(void); // 307
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
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
	_mi_ptr_page(const void* p); // 45
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 46
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 84
	memset(void* __dest,
		int __ch,
		size_t __len);  // 84
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 197
	mi_theap_malloc_small_zero(mi_theap_t* theap,
					size_t size,
					bool zero,
					size_t* usable);  // 307
} /* size: 0, inline expansions: 75 (0 bytes) */

// <00326608> ../thirdparty/mimalloc/src/alloc.c:310
// variables: 3
// function calls: 78
void* mi_theap_umalloc(mi_theap_t* theap, size_t size, size_t* usable)
{
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
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
	_mi_ptr_page(const void* p); // 45
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 46
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 84
	memset(void* __dest,
		int __ch,
		size_t __len);  // 84
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 236
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 174
	mi_theap_malloc_generic(mi_theap_t* theap,
				size_t size,
				bool zero,
				size_t huge_alignment,
				size_t* usable);  // 239
	_mi_theap_malloc_zero_ex(mi_theap_t* theap,
				size_t size,
				bool zero,
				size_t huge_alignment,
				size_t* usable);  // 311
} /* size: 0, inline expansions: 78 (7415 bytes) */

// <00326582> ../thirdparty/mimalloc/src/alloc.c:314
// function call: 1
void* mi_umalloc(size_t size, size_t* usable)
{
	_mi_theap_default(void); // 315
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00324EBE> ../thirdparty/mimalloc/src/alloc.c:318
// variables: 3
// function calls: 80
void* mi_uzalloc(size_t size, size_t* usable)
{
	_mi_theap_default(void); // 319
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 135
	_mi_wsize_from_size(size_t size); // 580
	_mi_theap_get_free_small_page(mi_theap_t* theap,
					size_t size);  // 148
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
	_mi_ptr_page(const void* p); // 45
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 46
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
			const mi_block_t* block);  // 49
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 63
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 33
	mi_stat_update(mi_stat_count_t* stat,
			int64_t amount);  // 54
	__mi_stat_increase(mi_stat_count_t* stat,
				size_t amount);  // 68
	mi_rotl(size_t x,
		size_t r);  // 1038
	mi_ptr_encode(const void* null,
			const void* p,
			const uintptr_t* keys);  // 1042
	mi_ptr_encode_canary(const void* null,
				const void* p,
				const uintptr_t* keys);  // 104
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 107
	{
		uint8_t* fill; // 108
		const size_t  maxpad; // 109
		{
			size_t i; // 110
		}
	}
	mi_page_meta_is_separated(const mi_page_t* page); // 734
	mi_page_slice_start(const mi_page_t* page); // 36
	_mi_is_aligned(const void* p,
			size_t alignment);  // 36
	mi_page_start(const mi_page_t* page); // 37
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
	_mi_ptr_page(const void* p); // 37
	_mi_is_aligned(const void* p,
			size_t alignment);  // 52
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
				size_t n);  // 89
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
	_mi_ptr_page(const void* p); // 51
	mi_page_malloc_zero(mi_theap_t* theap,
				mi_page_t* page,
				size_t size,
				bool zero,
				size_t* usable);  // 149
	mi_theap_malloc_small_zero_nonnull(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 236
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 174
	mi_theap_malloc_generic(mi_theap_t* theap,
				size_t size,
				bool zero,
				size_t huge_alignment,
				size_t* usable);  // 239
	_mi_theap_malloc_zero_ex(mi_theap_t* theap,
				size_t size,
				bool zero,
				size_t huge_alignment,
				size_t* usable);  // 319
} /* size: 0, inline expansions: 80 (0 bytes) */

// <00324D39> ../thirdparty/mimalloc/src/alloc.c:322
// variable: 1
// function calls: 3
void* mi_ucalloc(size_t count, size_t size, size_t* usable)
{
	size_t total; // 323
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 324
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00324CF2> ../thirdparty/mimalloc/src/alloc.c:329
// variable: 1
void* mi_theap_mallocn(mi_theap_t* theap, size_t count, size_t size)
{
	size_t total; // 330
} /* size: 0, variables: 1 */

// <00324AE5> ../thirdparty/mimalloc/src/alloc.c:335
// function calls: 6
void* mi_mallocn(size_t count, size_t size)
{
	_mi_theap_default(void); // 336
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 331
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 332
	mi_theap_mallocn(mi_theap_t* theap,
			size_t count,
			size_t size);  // 336
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00324958> ../thirdparty/mimalloc/src/alloc.c:339
// variable: 1
// function calls: 3
void* mi_heap_mallocn(mi_heap_t* heap, size_t count, size_t size)
{
	size_t total; // 340
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 341
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0032492C> ../thirdparty/mimalloc/src/alloc.c:347
void* mi_expand(void* p, size_t newsize)
{
} /* size: 0 */

// <00323C31> ../thirdparty/mimalloc/src/alloc.c:361
// variables: 7
// function calls: 44
void* _mi_theap_realloc_zero(mi_theap_t* theap, void* p, size_t newsize, bool zero, size_t* usable_pre, size_t* usable_post)
{
	const mi_page_t* page; // 365
	size_t size; // 366
	const char   __func__; // 15263
	void* newp; // 387
	{
		const size_t  start; // 391
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
				size_t n);  // 392
	}
	{
		const size_t  copysize; // 398
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
				size_t n);  // 400
	}
	mi_validate_ptr_page(const void* p,
				const char* msg);  // 159
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 163
	mi_validate_ptr_page(const void* p,
				const char* msg);  // 373
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
			const mi_page_t* page);  // 374
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 375
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 451
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 439
	mi_heap_main_init(void); // 444
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 445
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 446
	_mi_subproc_heap_main(mi_subproc_t* subproc); // 451
	mi_heap_main(void); // 911
	mi_page_heap(const mi_page_t* page); // 377
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 377
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 384
} /* size: 0, variables: 4, inline expansions: 34 (1106 bytes) */

// <00323BF8> ../thirdparty/mimalloc/src/alloc.c:407
void* mi_theap_realloc(mi_theap_t* theap, void* p, size_t newsize)
{
} /* size: 0 */

// <00323BA6> ../thirdparty/mimalloc/src/alloc.c:411
// variable: 1
void* mi_theap_reallocn(mi_theap_t* theap, void* p, size_t count, size_t size)
{
	size_t total; // 412
} /* size: 0, variables: 1 */

// <00323B61> ../thirdparty/mimalloc/src/alloc.c:419
// variable: 1
void* mi_theap_reallocf(mi_theap_t* theap, void* p, size_t newsize)
{
	void* newp; // 420
} /* size: 0, variables: 1 */

// <00323B29> ../thirdparty/mimalloc/src/alloc.c:425
void* mi_theap_rezalloc(mi_theap_t* theap, void* p, size_t newsize)
{
} /* size: 0 */

// <00323AD7> ../thirdparty/mimalloc/src/alloc.c:429
// variable: 1
void* mi_theap_recalloc(mi_theap_t* theap, void* p, size_t count, size_t size)
{
	size_t total; // 430
} /* size: 0, variables: 1 */

// <00323AAB> ../thirdparty/mimalloc/src/alloc.c:436
void* mi_realloc(void* p, size_t newsize)
{
} /* size: 0 */

// <0032386D> ../thirdparty/mimalloc/src/alloc.c:440
// function calls: 6
void* mi_reallocn(void* p, size_t count, size_t size)
{
	_mi_theap_default(void); // 441
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 413
	mi_theap_realloc(mi_theap_t* theap,
			void* p,
			size_t newsize);  // 414
	mi_theap_reallocn(mi_theap_t* theap,
				void* p,
				size_t count,
				size_t size);  // 441
} /* size: 0, inline expansions: 6 (0 bytes) */

// <003237AC> ../thirdparty/mimalloc/src/alloc.c:444
// function call: 1
void* mi_urealloc(void* p, size_t newsize, size_t* usable_pre, size_t* usable_post)
{
	_mi_theap_default(void); // 445
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00323679> ../thirdparty/mimalloc/src/alloc.c:449
// function calls: 3
void* mi_reallocf(void* p, size_t newsize)
{
	_mi_theap_default(void); // 450
	mi_theap_realloc(mi_theap_t* theap,
			void* p,
			size_t newsize);  // 420
	mi_theap_reallocf(mi_theap_t* theap,
				void* p,
				size_t newsize);  // 450
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0032364D> ../thirdparty/mimalloc/src/alloc.c:453
void* mi_rezalloc(void* p, size_t newsize)
{
} /* size: 0 */

// <0032340F> ../thirdparty/mimalloc/src/alloc.c:457
// function calls: 6
void* mi_recalloc(void* p, size_t count, size_t size)
{
	_mi_theap_default(void); // 458
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 431
	mi_theap_rezalloc(mi_theap_t* theap,
				void* p,
				size_t newsize);  // 432
	mi_theap_recalloc(mi_theap_t* theap,
				void* p,
				size_t count,
				size_t size);  // 458
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00323203> ../thirdparty/mimalloc/src/alloc.c:462
// function calls: 7
void* mi_heap_realloc(mi_heap_t* heap, void* p, size_t newsize)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 463
	mi_theap_realloc(mi_theap_t* theap,
			void* p,
			size_t newsize);  // 463
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00322E85> ../thirdparty/mimalloc/src/alloc.c:466
// function calls: 11
void* mi_heap_reallocn(mi_heap_t* heap, void* p, size_t count, size_t size)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 467
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 413
	mi_theap_realloc(mi_theap_t* theap,
			void* p,
			size_t newsize);  // 414
	mi_theap_reallocn(mi_theap_t* theap,
				void* p,
				size_t count,
				size_t size);  // 467
} /* size: 0, inline expansions: 11 (0 bytes) */

// <00322C04> ../thirdparty/mimalloc/src/alloc.c:471
// function calls: 8
void* mi_heap_reallocf(mi_heap_t* heap, void* p, size_t newsize)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 472
	mi_theap_realloc(mi_theap_t* theap,
			void* p,
			size_t newsize);  // 420
	mi_theap_reallocf(mi_theap_t* theap,
				void* p,
				size_t newsize);  // 472
} /* size: 0, inline expansions: 8 (0 bytes) */

// <003229F8> ../thirdparty/mimalloc/src/alloc.c:475
// function calls: 7
void* mi_heap_rezalloc(mi_heap_t* heap, void* p, size_t newsize)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 476
	mi_theap_rezalloc(mi_theap_t* theap,
				void* p,
				size_t newsize);  // 476
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0032267A> ../thirdparty/mimalloc/src/alloc.c:479
// function calls: 11
void* mi_heap_recalloc(mi_heap_t* heap, void* p, size_t count, size_t size)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 480
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 431
	mi_theap_rezalloc(mi_theap_t* theap,
				void* p,
				size_t newsize);  // 432
	mi_theap_recalloc(mi_theap_t* theap,
				void* p,
				size_t count,
				size_t size);  // 480
} /* size: 0, inline expansions: 11 (0 bytes) */

// <003223F6> ../thirdparty/mimalloc/src/alloc.c:490
// variables: 2
// function calls: 8
char* mi_theap_strdup(mi_theap_t* theap, const char* s)
{
	size_t len; // 492
	char* t; // 494
	_mi_strnlen(const char* s,
			size_t max_len);  // 64
	_mi_strnlen(const char* s,
			size_t max_len);  // 72
	_mi_strlen(const char* s); // 492
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 494
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
			size_t n);  // 496
} /* size: 243, variables: 2, inline expansions: 8 (331 bytes) */

// <003223D7> ../thirdparty/mimalloc/src/alloc.c:501
char* mi_strdup(const char* s)
{
} /* size: 0 */

// <0032222F> ../thirdparty/mimalloc/src/alloc.c:505
// function calls: 6
char* mi_heap_strdup(mi_heap_t* heap, const char* s)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 506
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00321FAA> ../thirdparty/mimalloc/src/alloc.c:510
// variables: 2
// function calls: 7
char* mi_theap_strndup(mi_theap_t* theap, const char* s, size_t n)
{
	const size_t  len; // 512
	char* t; // 514
	_mi_strnlen(const char* s,
			size_t max_len);  // 64
	_mi_strnlen(const char* s,
			size_t max_len);  // 512
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 514
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
			size_t n);  // 516
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <00321F28> ../thirdparty/mimalloc/src/alloc.c:521
// function call: 1
char* mi_strndup(const char* s, size_t n)
{
	_mi_theap_default(void); // 522
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00321D6D> ../thirdparty/mimalloc/src/alloc.c:525
// function calls: 6
char* mi_heap_strndup(mi_heap_t* heap, const char* s, size_t n)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 526
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00321D1C> ../thirdparty/mimalloc/src/alloc.c:558
// variables: 4
size_t mi_path_max(void)
{
	atomic<long unsigned int> path_max; // 559
	size_t pmax; // 560
	{
		long int m; // 562
		size_t expected; // 570
	}
} /* size: 0, variables: 2 */

// <00321CA9> ../thirdparty/mimalloc/src/alloc.c:576
// variables: 4
char* mi_theap_realpath(mi_theap_t* theap, const char* fname, char* resolved_name)
{
	{
		const size_t  n; // 589
		const char* buf; // 590
		char* rname; // 595
		char* result; // 596
	}
} /* size: 0 */

// <00321C23> ../thirdparty/mimalloc/src/alloc.c:603
// function call: 1
char* mi_realpath(const char* fname, char* resolved_name)
{
	_mi_theap_default(void); // 604
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00321A64> ../thirdparty/mimalloc/src/alloc.c:607
// function calls: 6
char* mi_heap_realpath(mi_heap_t* heap, const char* fname, char* resolved_name)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 608
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00321A39> ../thirdparty/mimalloc/src/alloc.c:623
// variable: 1
bool mi_try_new_handler(bool nothrow)
{
	new_handler h; // 625
} /* size: 0, variables: 1 */

// <003554A8> ../thirdparty/mimalloc/src/alloc.c:679
// variable: 1
// function calls: 3
void* mi_theap_try_new(mi_theap_t* theap, size_t size, bool nothrow)
{
	void* p; // 680
	mi_try_new_handler(bool nothrow); // 623
	mi_try_new_handler(bool nothrow); // 681
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 682
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <003219F4> ../thirdparty/mimalloc/src/alloc.c:679
// variable: 1
void* mi_theap_try_new(mi_theap_t* theap, size_t size, bool nothrow)
{
	void* p; // 680
} /* size: 0, variables: 1 */

// <003555EA> ../thirdparty/mimalloc/src/alloc.c:687
// function call: 1
void* mi_try_new(size_t size, bool nothrow)
{
	_mi_theap_default(void); // 688
} /* size: 0, inline expansions: 1 (0 bytes) */

// <003219C7> ../thirdparty/mimalloc/src/alloc.c:687
void* mi_try_new(size_t size, bool nothrow)
{
} /* size: 0 */

// <00356364> ../thirdparty/mimalloc/src/alloc.c:691
// function calls: 6
void* mi_heap_try_new(mi_heap_t* heap, size_t size, bool nothrow)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 692
} /* size: 0, inline expansions: 6 (0 bytes) */

// <0032198D> ../thirdparty/mimalloc/src/alloc.c:691
void* mi_heap_try_new(mi_heap_t* heap, size_t size, bool nothrow)
{
} /* size: 0 */

// <00321955> ../thirdparty/mimalloc/src/alloc.c:696
// variable: 1
void* mi_theap_alloc_new(mi_theap_t* theap, size_t size)
{
	void* p; // 697
} /* size: 0, variables: 1 */

// <00321814> ../thirdparty/mimalloc/src/alloc.c:702
// function calls: 4
void* mi_new(size_t size)
{
	_mi_theap_default(void); // 703
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 697
	mi_theap_alloc_new(mi_theap_t* theap,
				size_t size);  // 696
	mi_theap_alloc_new(mi_theap_t* theap,
				size_t size);  // 703
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0032176C> ../thirdparty/mimalloc/src/alloc.c:706
// variable: 1
void* mi_heap_alloc_new(mi_heap_t* heap, size_t size)
{
	void* p; // 707
} /* size: 0, variables: 1 */

// <00321725> ../thirdparty/mimalloc/src/alloc.c:713
// variable: 1
void* mi_theap_alloc_new_n(mi_theap_t* theap, size_t count, size_t size)
{
	size_t total; // 714
} /* size: 0, variables: 1 */

// <0032140F> ../thirdparty/mimalloc/src/alloc.c:724
// function calls: 10
void* mi_new_n(size_t count, size_t size)
{
	_mi_theap_default(void); // 725
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 715
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 697
	mi_theap_alloc_new(mi_theap_t* theap,
				size_t size);  // 696
	mi_theap_alloc_new(mi_theap_t* theap,
				size_t size);  // 720
	mi_try_new_handler(bool nothrow); // 623
	mi_try_new_handler(bool nothrow); // 716
	mi_theap_alloc_new_n(mi_theap_t* theap,
				size_t count,
				size_t size);  // 725
} /* size: 0, inline expansions: 10 (0 bytes) */

// <00320F81> ../thirdparty/mimalloc/src/alloc.c:728
// function calls: 15
void* mi_heap_alloc_new_n(mi_heap_t* heap, size_t count, size_t size)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 729
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 715
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 697
	mi_theap_alloc_new(mi_theap_t* theap,
				size_t size);  // 696
	mi_theap_alloc_new(mi_theap_t* theap,
				size_t size);  // 720
	mi_try_new_handler(bool nothrow); // 623
	mi_try_new_handler(bool nothrow); // 716
	mi_theap_alloc_new_n(mi_theap_t* theap,
				size_t count,
				size_t size);  // 729
} /* size: 0, inline expansions: 15 (0 bytes) */

// <00320E86> ../thirdparty/mimalloc/src/alloc.c:733
// variable: 1
// function calls: 3
void* mi_new_nothrow(size_t size)
{
	void* p; // 734
	_mi_theap_default(void); // 255
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 255
	mi_malloc(size_t size); // 734
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00320967> ../thirdparty/mimalloc/src/alloc.c:739
// variables: 11
// function calls: 11
void* mi_new_aligned(size_t size, size_t alignment)
{
	void* p; // 740
	{
		const uintptr_t  align_mask; // 211
		const size_t  padsize; // 212
		mi_page_t* page; // 213
		_mi_wsize_from_size(size_t size); // 580
		_mi_theap_get_free_small_page(mi_theap_t* theap,
						size_t size);  // 213
		{
			const bool  is_aligned; // 215
			{
				void* p; // 219
			}
		}
	}
	_mi_is_power_of_two(uintptr_t x); // 187
	{
		const uintptr_t  align_mask; // 211
		const size_t  padsize; // 212
		mi_page_t* page; // 213
		{
			const bool  is_aligned; // 215
			{
				void* p; // 219
			}
		}
	}
	mi_theap_malloc_zero_aligned_at(const mi_theap_t* theap,
					const size_t  size,
					const size_t  alignment,
					const size_t  offset,
					const bool  zero,
					size_t* usable);  // 184
	mi_theap_malloc_zero_aligned_at(const mi_theap_t* theap,
					const size_t  size,
					const size_t  alignment,
					const size_t  offset,
					const bool  zero,
					size_t* usable);  // 239
	mi_theap_malloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 243
	mi_theap_malloc_aligned(mi_theap_t* theap,
				size_t size,
				size_t alignment);  // 274
	_mi_theap_default(void); // 274
	mi_malloc_aligned(size_t size,
				size_t alignment);  // 742
	mi_try_new_handler(bool nothrow); // 623
	mi_try_new_handler(bool nothrow); // 744
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <00320448> ../thirdparty/mimalloc/src/alloc.c:748
// variables: 11
// function calls: 11
void* mi_new_aligned_nothrow(size_t size, size_t alignment)
{
	void* p; // 749
	{
		const uintptr_t  align_mask; // 211
		const size_t  padsize; // 212
		mi_page_t* page; // 213
		_mi_wsize_from_size(size_t size); // 580
		_mi_theap_get_free_small_page(mi_theap_t* theap,
						size_t size);  // 213
		{
			const bool  is_aligned; // 215
			{
				void* p; // 219
			}
		}
	}
	_mi_is_power_of_two(uintptr_t x); // 187
	{
		const uintptr_t  align_mask; // 211
		const size_t  padsize; // 212
		mi_page_t* page; // 213
		{
			const bool  is_aligned; // 215
			{
				void* p; // 219
			}
		}
	}
	mi_theap_malloc_zero_aligned_at(const mi_theap_t* theap,
					const size_t  size,
					const size_t  alignment,
					const size_t  offset,
					const bool  zero,
					size_t* usable);  // 184
	mi_theap_malloc_zero_aligned_at(const mi_theap_t* theap,
					const size_t  size,
					const size_t  alignment,
					const size_t  offset,
					const bool  zero,
					size_t* usable);  // 239
	mi_theap_malloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 243
	mi_theap_malloc_aligned(mi_theap_t* theap,
				size_t size,
				size_t alignment);  // 274
	_mi_theap_default(void); // 274
	mi_malloc_aligned(size_t size,
				size_t alignment);  // 751
	mi_try_new_handler(bool nothrow); // 623
	mi_try_new_handler(bool nothrow); // 753
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <00320411> ../thirdparty/mimalloc/src/alloc.c:757
// variable: 1
void* mi_new_realloc(void* p, size_t newsize)
{
	void* q; // 758
} /* size: 0, variables: 1 */

// <003200D3> ../thirdparty/mimalloc/src/alloc.c:765
// variable: 1
// function calls: 10
void* mi_new_reallocn(void* p, size_t newcount, size_t size)
{
	size_t total; // 766
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 767
	_mi_theap_default(void); // 437
	mi_theap_realloc(mi_theap_t* theap,
			void* p,
			size_t newsize);  // 437
	mi_realloc(void* p,
			size_t newsize);  // 760
	mi_try_new_handler(bool nothrow); // 761
	mi_new_realloc(void* p,
			size_t newsize);  // 772
	mi_try_new_handler(bool nothrow); // 623
	mi_try_new_handler(bool nothrow); // 768
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

