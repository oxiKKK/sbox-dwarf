
//
// thirdparty/mimalloc/src/alloc-posix.c
//
//	referenced by: libtier0.so
//
//	functions: 18
//

// <003188C7> ../thirdparty/mimalloc/src/alloc-posix.c:35
size_t mi_malloc_size(const void* p)
{
} /* size: 0 */

// <003188AA> ../thirdparty/mimalloc/src/alloc-posix.c:40
size_t mi_malloc_usable_size(const void* p)
{
} /* size: 0 */

// <0031876F> ../thirdparty/mimalloc/src/alloc-posix.c:45
// function calls: 5
size_t mi_malloc_good_size(size_t size)
{
	_mi_os_page_size(void); // 119
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 119
	_mi_bin_size(size_t bin); // 116
	mi_good_size(size_t size); // 114
	mi_good_size(size_t size); // 46
} /* size: 0, inline expansions: 5 (0 bytes) */

// <003186E7> ../thirdparty/mimalloc/src/alloc-posix.c:49
// function call: 1
void mi_cfree(void* p)
{
	mi_is_in_heap_region(const void* p); // 50
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0031820E> ../thirdparty/mimalloc/src/alloc-posix.c:55
// variables: 12
// function calls: 9
int mi_posix_memalign(void** p, size_t alignment, size_t size)
{
	void* q; // 62
	const char   __func__; // 8149
	_mi_is_power_of_two(uintptr_t x); // 61
	_mi_theap_default(void); // 274
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
				size_t alignment);  // 274
	mi_malloc_aligned(size_t size,
				size_t alignment);  // 62
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <003181CD> ../thirdparty/mimalloc/src/alloc-posix.c:69
// variables: 2
void* mi_memalign(size_t alignment, size_t size)
{
	void* p; // 70
	const char   __func__; // 47565
} /* size: 0, variables: 2 */

// <00317CC5> ../thirdparty/mimalloc/src/alloc-posix.c:75
// variables: 10
// function calls: 11
void* mi_valloc(size_t size)
{
	_mi_os_page_size(void); // 76
	_mi_theap_default(void); // 274
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
				size_t alignment);  // 274
	mi_malloc_aligned(size_t size,
				size_t alignment);  // 70
	mi_memalign(size_t alignment,
			size_t size);  // 76
} /* size: 0, inline expansions: 9 (0 bytes) */

// <003177EC> ../thirdparty/mimalloc/src/alloc-posix.c:79
// variables: 12
// function calls: 10
void* mi_pvalloc(size_t size)
{
	size_t psize; // 80
	size_t asize; // 82
	_mi_os_page_size(void); // 80
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 82
	_mi_theap_default(void); // 274
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
				size_t alignment);  // 274
	mi_malloc_aligned(size_t size,
				size_t alignment);  // 83
} /* size: 0, variables: 2, inline expansions: 8 (0 bytes) */

// <003172FD> ../thirdparty/mimalloc/src/alloc-posix.c:86
// variables: 12
// function calls: 9
void* mi_aligned_alloc(size_t alignment, size_t size)
{
	void* p; // 97
	const char   __func__; // 6958
	_mi_theap_default(void); // 274
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
				size_t alignment);  // 274
	mi_malloc_aligned(size_t size,
				size_t alignment);  // 97
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <003170AC> ../thirdparty/mimalloc/src/alloc-posix.c:102
// variables: 2
// function calls: 6
void* mi_reallocarray(void* p, size_t count, size_t size)
{
	size_t total; // 103
	void* newp; // 108
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 104
	_mi_theap_default(void); // 437
	mi_theap_realloc(mi_theap_t* theap,
			void* p,
			size_t newsize);  // 437
	mi_realloc(void* p,
			size_t newsize);  // 108
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <00316D9A> ../thirdparty/mimalloc/src/alloc-posix.c:113
// variables: 4
// function calls: 6
int mi_reallocarr(void* ptrp, size_t count, size_t size)
{
	const char   __func__; // 759
	size_t total; // 119
	void** op; // 123
	{
		void* newp; // 130
		_mi_theap_default(void); // 437
		mi_theap_realloc(mi_theap_t* theap,
				void* p,
				size_t newsize);  // 437
		mi_realloc(void* p,
				size_t newsize);  // 130
	}
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 120
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <00316D31> ../thirdparty/mimalloc/src/alloc-posix.c:137
// variable: 1
void* mi__expand(void* p, size_t newsize)
{
	void* res; // 138
} /* size: 0, variables: 1 */

// <00316AB1> ../thirdparty/mimalloc/src/alloc-posix.c:143
// variables: 3
// function calls: 8
wchar_t* mi_wcsdup(const wchar_t* s)
{
	size_t wlen; // 145
	size_t size; // 147
	wchar_t* p; // 149
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 148
	_mi_theap_default(void); // 255
	mi_theap_malloc(mi_theap_t* theap,
			size_t size);  // 255
	mi_malloc(size_t size); // 149
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
			size_t n);  // 151
} /* size: 174, variables: 3, inline expansions: 8 (170 bytes) */

// <00316A88> ../thirdparty/mimalloc/src/alloc-posix.c:156
unsigned char* mi_mbsdup(const unsigned char* s)
{
} /* size: 0 */

// <0031693B> ../thirdparty/mimalloc/src/alloc-posix.c:160
// variable: 1
// function calls: 5
int mi_dupenv_s(char** buf, size_t* size, const char* name)
{
	char* p; // 163
	_mi_theap_default(void); // 502
	mi_strdup(const char* s); // 168
	_mi_strnlen(const char* s,
			size_t max_len);  // 64
	_mi_strnlen(const char* s,
			size_t max_len);  // 72
	_mi_strlen(const char* s); // 170
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <003168E7> ../thirdparty/mimalloc/src/alloc-posix.c:175
int mi_wdupenv_s(wchar_t** buf, size_t* size, const wchar_t* name)
{
} /* size: 0 */

// <0031689A> ../thirdparty/mimalloc/src/alloc-posix.c:196
void* mi_aligned_offset_recalloc(void* p, size_t newcount, size_t size, size_t alignment, size_t offset)
{
} /* size: 0 */

// <00316859> ../thirdparty/mimalloc/src/alloc-posix.c:200
void* mi_aligned_recalloc(void* p, size_t newcount, size_t size, size_t alignment)
{
} /* size: 0 */

