
//
// thirdparty/mimalloc/src/arena-meta.c
//
//	referenced by: libtier0.so
//
//	functions: 7
//	struct: 1
//

// <002C4836> ../thirdparty/mimalloc/src/arena-meta.c:38
// member variables: 3
// struct size: 4,608
struct mi_meta_page_s {
	atomic<mi_meta_page_s*> next; /* 0 8 */
	mi_memid_t memid; /* 8 24 */
	mi_bbitmap_t blocks_free __attribute__((__aligned__(64))); /* 64 4544 */
} __attribute__((__aligned__(64)));

// <00302135> ../thirdparty/mimalloc/src/arena-meta.c:48
// variable: 1
mi_meta_page_t* mi_meta_page_of_ptr(void* p, size_t* block_idx)
{
	mi_meta_page_t* mpage; // 49
} /* size: 0, variables: 1 */

// <00302117> ../thirdparty/mimalloc/src/arena-meta.c:57
mi_meta_page_t* mi_meta_page_next(mi_meta_page_t* mpage)
{
} /* size: 0 */

// <00301E8F> ../thirdparty/mimalloc/src/arena-meta.c:61
// variables: 2
// function calls: 7
void* mi_meta_block_start(mi_meta_page_t* mpage, size_t block_idx)
{
	const char   __func__; // 5857
	void* p; // 64
	_mi_os_page_size(void); // 69
	_mi_os_guard_page_size(void); // 169
	_mi_os_secure_guard_page_size(void); // 62
	_mi_is_aligned(const void* p,
			size_t alignment);  // 62
	_mi_align_down(uintptr_t sz,
			size_t alignment);  // 484
	_mi_align_down_ptr(const void* p,
				size_t alignment);  // 49
	mi_meta_page_of_ptr(void* p,
				size_t* block_idx);  // 65
} /* size: 0, variables: 2, inline expansions: 7 (78 bytes) */

// <00301E1E> ../thirdparty/mimalloc/src/arena-meta.c:70
// variables: 8
mi_meta_page_t* mi_meta_page_zalloc(void)
{
	mi_memid_t memid; // 73
	uint8_t* base; // 74
	const char   __func__; // 5857
	mi_meta_page_t* mpage; // 90
	const size_t  mpage_size; // 93
	const size_t  info_blocks; // 94
	const size_t  guard_blocks; // 95
	mi_meta_page_t* old; // 101
} /* size: 0, variables: 8 */

// <00300CF4> ../thirdparty/mimalloc/src/arena-meta.c:110
// variables: 6
// function calls: 54
void* _mi_meta_zalloc(size_t size, mi_memid_t* pmemid)
{
	const char   __func__; // 44947
	const size_t  block_count; // 115
	mi_meta_page_t* mpage0; // 117
	mi_meta_page_t* mpage; // 118
	{
		size_t block_idx; // 120
		mi_bbitmap_try_find_and_clearNX(mi_bbitmap_t* bbitmap,
						size_t tseq,
						size_t n,
						size_t* pidx);  // 337
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
						size_t* pidx);  // 121
		__atomic_base<mi_meta_page_s::load(
			memory_order __m);  // 587
		atomic<mi_meta_page_s::load(
			memory_order __m);  // 1334
		atomic_load_explicit<mi_meta_page_s*>(const atomic<mi_meta_page_s*>* __a,
							memory_order __m);  // 58
		mi_meta_page_next(mi_meta_page_t* mpage); // 127
		_mi_memid_create(mi_memkind_t memkind); // 1141
		_mi_memid_create_meta(void* mpage,
					size_t block_idx,
					size_t block_count);  // 123
	}
	{
		size_t block_idx; // 138
		mi_bbitmap_try_find_and_clear(mi_bbitmap_t* bbitmap,
						size_t tseq,
						size_t* pidx);  // 333
		mi_bbitmap_try_find_and_clearNX(mi_bbitmap_t* bbitmap,
						size_t tseq,
						size_t n,
						size_t* pidx);  // 337
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
						size_t* pidx);  // 139
		_mi_memid_create(mi_memkind_t memkind); // 1141
		_mi_memid_create_meta(void* mpage,
					size_t block_idx,
					size_t block_count);  // 141
	}
	_mi_align_up(uintptr_t sz,
			size_t alignment);  // 113
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 115
	__atomic_base<mi_meta_page_s::load(
		memory_order __m);  // 587
	atomic<mi_meta_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_meta_page_s*>(const atomic<mi_meta_page_s*>* __a,
						memory_order __m);  // 117
	__atomic_base<mi_meta_page_s::load(
		memory_order __m);  // 587
	atomic<mi_meta_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_meta_page_s*>(const atomic<mi_meta_page_s*>* __a,
						memory_order __m);  // 131
	_mi_is_aligned(const void* p,
			size_t alignment);  // 78
	_mi_os_page_size(void); // 69
	_mi_os_guard_page_size(void); // 169
	_mi_os_secure_guard_page_size(void); // 201
	_mi_os_secure_guard_page_set_before(void* addr,
						mi_memid_t memid);  // 86
	_mi_os_page_size(void); // 69
	_mi_os_guard_page_size(void); // 169
	_mi_os_secure_guard_page_size(void); // 90
	_mi_os_page_size(void); // 69
	_mi_os_guard_page_size(void); // 169
	_mi_os_secure_guard_page_size(void); // 95
	_mi_divide_up(uintptr_t size,
			size_t divider);  // 95
	__atomic_base<mi_meta_page_s::load(
		memory_order __m);  // 587
	atomic<mi_meta_page_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_meta_page_s*>(const atomic<mi_meta_page_s*>* __a,
						memory_order __m);  // 101
	__atomic_base<mi_meta_page_s::store(
		__pointer_type __p,
		memory_order __m);  // 578
	atomic<mi_meta_page_s::store(
		__pointer_type __p,
		memory_order __m);  // 1323
	atomic_store_explicit<mi_meta_page_s*>(atomic<mi_meta_page_s*>* __a,
						__atomic_val_t __i,
						memory_order __m);  // 103
	__atomic_base<mi_meta_page_s::compare_exchange_weak(
				__pointer_type& __p1,
				__pointer_type __p2,
				memory_order __m1,
				memory_order __m2);  // 606
	atomic<mi_meta_page_s::compare_exchange_weak(
				__pointer_type& __p1,
				__pointer_type __p2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<mi_meta_page_s*>(atomic<mi_meta_page_s*>* __a,
								__atomic_val_t* __i1,
								__atomic_val_t __i2,
								memory_order __m1,
								memory_order __m2);  // 104
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
				size_t n);  // 80
	mi_meta_page_zalloc(void); // 136
} /* size: 0, variables: 4, inline expansions: 36 (1096 bytes) */

// <00300788> ../thirdparty/mimalloc/src/arena-meta.c:150
// variables: 4
// function calls: 14
void _mi_meta_free(void* p, size_t size, mi_memid_t memid)
{
	const char   __func__; // 759
	{
		const size_t  block_count; // 154
		const size_t  block_idx; // 155
		mi_meta_page_t* mpage; // 156
		_mi_divide_up(uintptr_t size,
				size_t divider);  // 153
		_mi_os_page_size(void); // 69
		_mi_os_guard_page_size(void); // 169
		_mi_os_secure_guard_page_size(void); // 49
		_mi_align_down(uintptr_t sz,
				size_t alignment);  // 484
		_mi_align_down_ptr(const void* p,
					size_t alignment);  // 49
		mi_meta_page_of_ptr(void* p,
					size_t* block_idx);  // 157
		mi_bbitmap_is_clearN(mi_bbitmap_t* bbitmap,
					size_t idx,
					size_t n);  // 159
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
					size_t n);  // 161
	}
} /* size: 0, variables: 1 */

// <00300749> ../thirdparty/mimalloc/src/arena-meta.c:170
// variables: 2
bool _mi_meta_is_meta_page(void* p)
{
	mi_meta_page_t* mpage0; // 172
	mi_meta_page_t* mpage; // 173
} /* size: 0, variables: 2 */

