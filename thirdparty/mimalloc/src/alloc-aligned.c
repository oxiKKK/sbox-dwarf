
//
// thirdparty/mimalloc/src/alloc-aligned.c
//
//	referenced by: libtier0.so
//
//	functions: 45
//

// <00320087> ../thirdparty/mimalloc/src/alloc-aligned.c:18
// variables: 3
bool mi_malloc_is_naturally_aligned(size_t size, size_t alignment)
{
	const char   __func__; // 55026
	const size_t  bsize; // 23
	const bool  ok; // 24
} /* size: 0, variables: 3 */

// <00320045> ../thirdparty/mimalloc/src/alloc-aligned.c:62
void* mi_theap_malloc_zero_no_guarded(mi_theap_t* theap, size_t size, bool zero, size_t* usable)
{
} /* size: 0 */

// <0031F3B4> ../thirdparty/mimalloc/src/alloc-aligned.c:68
// variables: 10
// function calls: 29
void* mi_theap_malloc_zero_aligned_at_overalloc(const mi_theap_t* theap, const size_t size, const size_t alignment, const size_t offset, const bool zero, size_t* usable)
{
	const char   __func__; // 16052
	void* p; // 73
	size_t oversize; // 74
	const uintptr_t  align_mask; // 99
	const uintptr_t  poffset; // 100
	const uintptr_t  adjust; // 101
	void* aligned_p; // 103
	mi_page_t* page; // 109
	const mi_page_t* apage; // 128
	void* unalign_p; // 129
	_mi_is_power_of_two(uintptr_t x); // 71
	mi_theap_malloc_zero_no_guarded(mi_theap_t* theap,
					size_t size,
					bool zero,
					size_t* usable);  // 94
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
	_mi_ptr_page(const void* p); // 109
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 830
	mi_page_flags_set(mi_page_t* page,
				bool set,
				mi_page_flags_t newflag);  // 858
	mi_page_set_has_interior_pointers(mi_page_t* page,
						bool has_aligned);  // 111
	mi_page_block_size(const mi_page_t* page); // 720
	mi_page_usable_block_size(const mi_page_t* page); // 123
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
	_mi_ptr_page(const void* p); // 128
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
				size_t* usable);  // 86
} /* size: 0, variables: 10, inline expansions: 29 (1230 bytes) */

// <0031F065> ../thirdparty/mimalloc/src/alloc-aligned.c:152
// variables: 3
// function calls: 4
void* mi_theap_malloc_zero_aligned_at_generic(const mi_theap_t* theap, const size_t size, const size_t alignment, const size_t offset, const bool zero, size_t* usable)
{
	const char   __func__; // 63958
	{
		void* p; // 165
		const bool  is_aligned_or_null; // 167
		mi_theap_malloc_zero_no_guarded(mi_theap_t* theap,
						size_t size,
						bool zero,
						size_t* usable);  // 165
	}
	_mi_is_power_of_two(uintptr_t x); // 154
	_mi_is_power_of_two(uintptr_t x); // 24
	mi_malloc_is_naturally_aligned(size_t size,
					size_t alignment);  // 164
} /* size: 0, variables: 1, inline expansions: 3 (169 bytes) */

// <0031EFC0> ../thirdparty/mimalloc/src/alloc-aligned.c:184
// variables: 6
inline void* mi_theap_malloc_zero_aligned_at(const mi_theap_t* theap, const size_t size, const size_t alignment, const size_t offset, const bool zero, size_t* usable)
{
	const char   __func__; // 22194
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
} /* size: 0, variables: 1 */

// <0031EF7E> ../thirdparty/mimalloc/src/alloc-aligned.c:238
void* mi_theap_malloc_aligned_at(mi_theap_t* theap, size_t size, size_t alignment, size_t offset)
{
} /* size: 0 */

// <0031EF46> ../thirdparty/mimalloc/src/alloc-aligned.c:242
void* mi_theap_malloc_aligned(mi_theap_t* theap, size_t size, size_t alignment)
{
} /* size: 0 */

// <0031EF04> ../thirdparty/mimalloc/src/alloc-aligned.c:246
void* mi_theap_zalloc_aligned_at(mi_theap_t* theap, size_t size, size_t alignment, size_t offset)
{
} /* size: 0 */

// <0031EECE> ../thirdparty/mimalloc/src/alloc-aligned.c:250
void* mi_theap_zalloc_aligned(mi_theap_t* theap, size_t size, size_t alignment)
{
} /* size: 0 */

// <0031EE74> ../thirdparty/mimalloc/src/alloc-aligned.c:254
// variable: 1
void* mi_theap_calloc_aligned_at(mi_theap_t* theap, size_t count, size_t size, size_t alignment, size_t offset)
{
	size_t total; // 255
} /* size: 0, variables: 1 */

// <0031EE2D> ../thirdparty/mimalloc/src/alloc-aligned.c:260
void* mi_theap_calloc_aligned(mi_theap_t* theap, size_t count, size_t size, size_t alignment)
{
} /* size: 0 */

// <0031E9F9> ../thirdparty/mimalloc/src/alloc-aligned.c:269
// variables: 10
// function calls: 7
void* mi_malloc_aligned_at(size_t size, size_t alignment, size_t offset)
{
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t offset);  // 270
	_mi_theap_default(void); // 270
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0031E9CB> ../thirdparty/mimalloc/src/alloc-aligned.c:273
void* mi_malloc_aligned(size_t size, size_t alignment)
{
} /* size: 0 */

// <0031E588> ../thirdparty/mimalloc/src/alloc-aligned.c:277
// variables: 10
// function calls: 8
void* mi_umalloc_aligned(size_t size, size_t alignment, size_t* block_size)
{
	_mi_is_power_of_two(uintptr_t x); // 187
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
				mi_page_block_size(const mi_page_t* page); // 720
				mi_page_usable_block_size(const mi_page_t* page); // 218
			}
		}
	}
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
					size_t* usable);  // 278
	_mi_theap_default(void); // 278
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0031E154> ../thirdparty/mimalloc/src/alloc-aligned.c:281
// variables: 10
// function calls: 7
void* mi_zalloc_aligned_at(size_t size, size_t alignment, size_t offset)
{
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t* usable);  // 247
	mi_theap_zalloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 282
	_mi_theap_default(void); // 282
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0031DD13> ../thirdparty/mimalloc/src/alloc-aligned.c:285
// variables: 10
// function calls: 8
void* mi_zalloc_aligned(size_t size, size_t alignment)
{
	_mi_theap_default(void); // 286
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t* usable);  // 247
	mi_theap_zalloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 251
	mi_theap_zalloc_aligned(mi_theap_t* theap,
				size_t size,
				size_t alignment);  // 286
} /* size: 0, inline expansions: 6 (0 bytes) */

// <0031D8D0> ../thirdparty/mimalloc/src/alloc-aligned.c:289
// variables: 10
// function calls: 8
void* mi_uzalloc_aligned(size_t size, size_t alignment, size_t* block_size)
{
	_mi_is_power_of_two(uintptr_t x); // 187
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
				mi_page_block_size(const mi_page_t* page); // 720
				mi_page_usable_block_size(const mi_page_t* page); // 218
			}
		}
	}
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
					size_t* usable);  // 290
	_mi_theap_default(void); // 290
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0031D331> ../thirdparty/mimalloc/src/alloc-aligned.c:293
// variables: 10
// function calls: 11
void* mi_calloc_aligned_at(size_t count, size_t size, size_t alignment, size_t offset)
{
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 256
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t* usable);  // 247
	mi_theap_zalloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 257
	mi_theap_calloc_aligned_at(mi_theap_t* theap,
					size_t count,
					size_t size,
					size_t alignment,
					size_t offset);  // 294
	_mi_theap_default(void); // 294
} /* size: 0, inline expansions: 9 (0 bytes) */

// <0031CD6F> ../thirdparty/mimalloc/src/alloc-aligned.c:297
// variables: 10
// function calls: 12
void* mi_calloc_aligned(size_t count, size_t size, size_t alignment)
{
	_mi_theap_default(void); // 298
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 256
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t* usable);  // 247
	mi_theap_zalloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 257
	mi_theap_calloc_aligned_at(mi_theap_t* theap,
					size_t count,
					size_t size,
					size_t alignment,
					size_t offset);  // 261
	mi_theap_calloc_aligned(mi_theap_t* theap,
				size_t count,
				size_t size,
				size_t alignment);  // 298
} /* size: 0, inline expansions: 10 (0 bytes) */

// <0031C7D1> ../thirdparty/mimalloc/src/alloc-aligned.c:302
// variables: 10
// function calls: 12
void* mi_heap_malloc_aligned_at(mi_heap_t* heap, size_t size, size_t alignment, size_t offset)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 303
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t offset);  // 303
} /* size: 0, inline expansions: 10 (0 bytes) */

// <0031C218> ../thirdparty/mimalloc/src/alloc-aligned.c:306
// variables: 10
// function calls: 13
void* mi_heap_malloc_aligned(mi_heap_t* heap, size_t size, size_t alignment)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 307
	_mi_is_power_of_two(uintptr_t x); // 187
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
				size_t alignment);  // 307
} /* size: 0, inline expansions: 11 (0 bytes) */

// <0031BC7A> ../thirdparty/mimalloc/src/alloc-aligned.c:310
// variables: 10
// function calls: 12
void* mi_heap_zalloc_aligned_at(mi_heap_t* heap, size_t size, size_t alignment, size_t offset)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 311
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t* usable);  // 247
	mi_theap_zalloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 311
} /* size: 0, inline expansions: 10 (0 bytes) */

// <0031BC3F> ../thirdparty/mimalloc/src/alloc-aligned.c:314
void* mi_heap_zalloc_aligned(mi_heap_t* heap, size_t size, size_t alignment)
{
} /* size: 0 */

// <0031B549> ../thirdparty/mimalloc/src/alloc-aligned.c:318
// variables: 10
// function calls: 16
void* mi_heap_calloc_aligned_at(mi_heap_t* heap, size_t count, size_t size, size_t alignment, size_t offset)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 319
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 256
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t* usable);  // 247
	mi_theap_zalloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 257
	mi_theap_calloc_aligned_at(mi_theap_t* theap,
					size_t count,
					size_t size,
					size_t alignment,
					size_t offset);  // 319
} /* size: 0, inline expansions: 14 (0 bytes) */

// <0031AE19> ../thirdparty/mimalloc/src/alloc-aligned.c:322
// variables: 10
// function calls: 17
void* mi_heap_calloc_aligned(mi_heap_t* heap, size_t count, size_t size, size_t alignment)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 323
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 256
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t* usable);  // 247
	mi_theap_zalloc_aligned_at(mi_theap_t* theap,
					size_t size,
					size_t alignment,
					size_t offset);  // 257
	mi_theap_calloc_aligned_at(mi_theap_t* theap,
					size_t count,
					size_t size,
					size_t alignment,
					size_t offset);  // 261
	mi_theap_calloc_aligned(mi_theap_t* theap,
				size_t count,
				size_t size,
				size_t alignment);  // 323
} /* size: 0, inline expansions: 15 (0 bytes) */

// <0031A3EF> ../thirdparty/mimalloc/src/alloc-aligned.c:331
// variables: 19
// function calls: 20
void* mi_theap_realloc_zero_aligned_at(mi_theap_t* theap, void* p, size_t newsize, size_t alignment, size_t offset, bool zero)
{
	const char   __func__; // 9181
	size_t size; // 335
	{
		void* newp; // 342
		{
			size_t start; // 346
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
					size_t n);  // 347
		}
		_mi_is_power_of_two(uintptr_t x); // 187
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
		mi_theap_malloc_zero_aligned_at(const mi_theap_t* theap,
						const size_t  size,
						const size_t  alignment,
						const size_t  offset,
						const bool  zero,
						size_t* usable);  // 239
		mi_theap_malloc_aligned_at(mi_theap_t* theap,
						size_t size,
						size_t alignment,
						size_t offset);  // 342
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
					size_t n);  // 349
	}
	_mi_is_power_of_two(uintptr_t x); // 187
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
					size_t* usable);  // 334
} /* size: 0, variables: 2, inline expansions: 3 (327 bytes) */

// <0031A392> ../thirdparty/mimalloc/src/alloc-aligned.c:356
// variable: 1
void* mi_theap_realloc_zero_aligned(mi_theap_t* theap, void* p, size_t newsize, size_t alignment, bool zero)
{
	const char   __func__; // 40702
} /* size: 0, variables: 1 */

// <0031A340> ../thirdparty/mimalloc/src/alloc-aligned.c:362
void* mi_theap_realloc_aligned_at(mi_theap_t* theap, void* p, size_t newsize, size_t alignment, size_t offset)
{
} /* size: 0 */

// <0031A2FB> ../thirdparty/mimalloc/src/alloc-aligned.c:366
void* mi_theap_realloc_aligned(mi_theap_t* theap, void* p, size_t newsize, size_t alignment)
{
} /* size: 0 */

// <0031A2A9> ../thirdparty/mimalloc/src/alloc-aligned.c:370
void* mi_theap_rezalloc_aligned_at(mi_theap_t* theap, void* p, size_t newsize, size_t alignment, size_t offset)
{
} /* size: 0 */

// <0031A264> ../thirdparty/mimalloc/src/alloc-aligned.c:374
void* mi_theap_rezalloc_aligned(mi_theap_t* theap, void* p, size_t newsize, size_t alignment)
{
} /* size: 0 */

// <0031A1F8> ../thirdparty/mimalloc/src/alloc-aligned.c:378
// variable: 1
void* mi_theap_recalloc_aligned_at(mi_theap_t* theap, void* p, size_t newcount, size_t size, size_t alignment, size_t offset)
{
	size_t total; // 379
} /* size: 0, variables: 1 */

// <0031A199> ../thirdparty/mimalloc/src/alloc-aligned.c:384
// variable: 1
void* mi_theap_recalloc_aligned(mi_theap_t* theap, void* p, size_t newcount, size_t size, size_t alignment)
{
	size_t total; // 385
} /* size: 0, variables: 1 */

// <0031A07F> ../thirdparty/mimalloc/src/alloc-aligned.c:391
// function calls: 2
void* mi_realloc_aligned_at(void* p, size_t newsize, size_t alignment, size_t offset)
{
	_mi_theap_default(void); // 392
	mi_theap_realloc_aligned_at(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					size_t offset);  // 392
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0031A046> ../thirdparty/mimalloc/src/alloc-aligned.c:395
void* mi_realloc_aligned(void* p, size_t newsize, size_t alignment)
{
} /* size: 0 */

// <00319F2C> ../thirdparty/mimalloc/src/alloc-aligned.c:399
// function calls: 2
void* mi_rezalloc_aligned_at(void* p, size_t newsize, size_t alignment, size_t offset)
{
	_mi_theap_default(void); // 400
	mi_theap_rezalloc_aligned_at(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					size_t offset);  // 400
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00319D33> ../thirdparty/mimalloc/src/alloc-aligned.c:403
// function calls: 4
void* mi_rezalloc_aligned(void* p, size_t newsize, size_t alignment)
{
	_mi_theap_default(void); // 404
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 356
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 375
	mi_theap_rezalloc_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment);  // 404
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00319CE0> ../thirdparty/mimalloc/src/alloc-aligned.c:407
void* mi_recalloc_aligned_at(void* p, size_t newcount, size_t size, size_t alignment, size_t offset)
{
} /* size: 0 */

// <00319C9A> ../thirdparty/mimalloc/src/alloc-aligned.c:411
void* mi_recalloc_aligned(void* p, size_t newcount, size_t size, size_t alignment)
{
} /* size: 0 */

// <00319A54> ../thirdparty/mimalloc/src/alloc-aligned.c:416
// function calls: 7
void* mi_heap_realloc_aligned_at(mi_heap_t* heap, void* p, size_t newsize, size_t alignment, size_t offset)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 417
	mi_theap_realloc_aligned_at(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					size_t offset);  // 417
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00319712> ../thirdparty/mimalloc/src/alloc-aligned.c:420
// function calls: 9
void* mi_heap_realloc_aligned(mi_heap_t* heap, void* p, size_t newsize, size_t alignment)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 421
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 356
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 367
	mi_theap_realloc_aligned(mi_theap_t* theap,
				void* p,
				size_t newsize,
				size_t alignment);  // 421
} /* size: 0, inline expansions: 9 (0 bytes) */

// <003194CC> ../thirdparty/mimalloc/src/alloc-aligned.c:424
// function calls: 7
void* mi_heap_rezalloc_aligned_at(mi_heap_t* heap, void* p, size_t newsize, size_t alignment, size_t offset)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 425
	mi_theap_rezalloc_aligned_at(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					size_t offset);  // 425
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0031918A> ../thirdparty/mimalloc/src/alloc-aligned.c:428
// function calls: 9
void* mi_heap_rezalloc_aligned(mi_heap_t* heap, void* p, size_t newsize, size_t alignment)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 429
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 356
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 375
	mi_theap_rezalloc_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment);  // 429
} /* size: 0, inline expansions: 9 (0 bytes) */

// <00318DAA> ../thirdparty/mimalloc/src/alloc-aligned.c:432
// function calls: 11
void* mi_heap_recalloc_aligned_at(mi_heap_t* heap, void* p, size_t newcount, size_t size, size_t alignment, size_t offset)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 433
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 380
	mi_theap_rezalloc_aligned_at(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					size_t offset);  // 381
	mi_theap_recalloc_aligned_at(mi_theap_t* theap,
					void* p,
					size_t newcount,
					size_t size,
					size_t alignment,
					size_t offset);  // 433
} /* size: 0, inline expansions: 11 (0 bytes) */

// <003188E5> ../thirdparty/mimalloc/src/alloc-aligned.c:436
// function calls: 13
void* mi_heap_recalloc_aligned(mi_heap_t* heap, void* p, size_t newcount, size_t size, size_t alignment)
{
	_mi_theap_cached(void); // 505
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 509
	_mi_heap_theap(const mi_heap_t* heap); // 437
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 386
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 356
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 375
	mi_theap_rezalloc_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment);  // 387
	mi_theap_recalloc_aligned(mi_theap_t* theap,
					void* p,
					size_t newcount,
					size_t size,
					size_t alignment);  // 437
} /* size: 0, inline expansions: 13 (0 bytes) */

