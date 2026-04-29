
//
// thirdparty/mimalloc/include/mimalloc/types.h
//
//	referenced by: libtier0.so
//
//	functions: 5
//	structs: 15
//

// <0033B411> ../thirdparty/mimalloc/include/mimalloc/types.h:266
inline bool mi_memkind_is_os(mi_memkind_t memkind)
{
} /* size: 0 */

// <0033B3F1> ../thirdparty/mimalloc/include/mimalloc/types.h:270
inline bool mi_memkind_needs_no_free(mi_memkind_t memkind)
{
} /* size: 0 */

// <002C3A13> ../thirdparty/mimalloc/include/mimalloc/types.h:275
// member variables: 2
// struct size: 16
struct mi_memid_os_info {
	void * base; /* 0 8 */
	size_t size; /* 8 8 */
};

// <002C3A4F> ../thirdparty/mimalloc/include/mimalloc/types.h:281
// member variables: 3
// struct size: 16
struct mi_memid_arena_info {
	mi_arena_t * arena; /* 0 8 */
	uint32_t slice_index; /* 8 4 */
	uint32_t slice_count; /* 12 4 */
};

// <002C3AA6> ../thirdparty/mimalloc/include/mimalloc/types.h:287
// member variables: 3
// struct size: 16
struct mi_memid_meta_info {
	void * meta_page; /* 0 8 */
	uint32_t block_index; /* 8 4 */
	uint32_t block_count; /* 12 4 */
};

// <002C3AF2> ../thirdparty/mimalloc/include/mimalloc/types.h:293
// member variables: 5
// struct size: 24
struct mi_memid_s {
	/* ../thirdparty/mimalloc/include/mimalloc/types.h:294 */
	union {
		mi_memid_os_info_t os; /* 0 16 */
		mi_memid_arena_info_t arena; /* 0 16 */
		mi_memid_meta_info_t meta; /* 0 16 */
	};
	union {
		mi_memid_os_info_t os; /* 0 16 */
		mi_memid_arena_info_t arena; /* 0 16 */
		mi_memid_meta_info_t meta; /* 0 16 */
	} mem; /* 0 16 */
	mi_memkind_t memkind; /* 16 4 */
	bool is_pinned; /* 20 1 */
	bool initially_committed; /* 21 1 */
	bool initially_zero; /* 22 1 */
};

// <0033B3D1> ../thirdparty/mimalloc/include/mimalloc/types.h:306
inline bool mi_memid_is_os(mi_memid_t memid)
{
} /* size: 0 */

// <0033B3B1> ../thirdparty/mimalloc/include/mimalloc/types.h:310
inline bool mi_memid_needs_no_free(mi_memid_t memid)
{
} /* size: 0 */

// <0033B391> ../thirdparty/mimalloc/include/mimalloc/types.h:314
inline mi_arena_t* mi_memid_arena(mi_memid_t memid)
{
} /* size: 0 */

// <002C3BB8> ../thirdparty/mimalloc/include/mimalloc/types.h:331
// member variable: 1
// struct size: 8
struct mi_block_s {
	mi_encoded_t next; /* 0 8 */
};

// <002C3C03> ../thirdparty/mimalloc/include/mimalloc/types.h:386
// member variables: 18
// struct size: 136
struct mi_page_s {
	atomic<long unsigned int> xthread_id __attribute__((__aligned__(8))); /* 0 8 */
	mi_block_t * free; /* 8 8 */
	uint16_t used; /* 16 2 */
	uint16_t capacity; /* 18 2 */
	uint16_t reserved; /* 20 2 */
	uint8_t retire_expire; /* 22 1 */
	bool free_is_zero; /* 23 1 */
	mi_block_t * local_free; /* 24 8 */
	atomic<long unsigned int> xthread_free __attribute__((__aligned__(8))); /* 32 8 */
	size_t block_size; /* 40 8 */
	uint8_t * page_start; /* 48 8 */
	uintptr_t keys[2]; /* 56 16 */
	mi_theap_t * theap; /* 72 8 */
	mi_heap_t * heap; /* 80 8 */
	mi_page_s * next; /* 88 8 */
	mi_page_s * prev; /* 96 8 */
	size_t slice_committed; /* 104 8 */
	mi_memid_t memid; /* 112 24 */
} __attribute__((__aligned__(8)));

// <002C3E2D> ../thirdparty/mimalloc/include/mimalloc/types.h:475
// member variables: 4
// struct size: 32
struct mi_page_queue_s {
	mi_page_t * first; /* 0 8 */
	mi_page_t * last; /* 8 8 */
	size_t count; /* 16 8 */
	size_t block_size; /* 24 8 */
};

// <002C3E99> ../thirdparty/mimalloc/include/mimalloc/types.h:483
// member variables: 4
// struct size: 136
struct mi_random_cxt_s {
	uint32_t input[16]; /* 0 64 */
	uint32_t output[16]; /* 64 64 */
	int output_available; /* 128 4 */
	bool weak; /* 132 1 */
};

// <002C3F07> ../thirdparty/mimalloc/include/mimalloc/types.h:493
// member variables: 2
// struct size: 8
struct mi_padding_s {
	uint32_t canary; /* 0 4 */
	uint32_t delta; /* 4 4 */
};

// <002C2F45> ../thirdparty/mimalloc/include/mimalloc/types.h:508
// member variables: 23
// struct size: 8,104
struct mi_theap_s {
	mi_tld_t * tld; /* 0 8 */
	atomic<mi_heap_s*> heap; /* 8 8 */
	atomic<long unsigned int> refcount __attribute__((__aligned__(8))); /* 16 8 */
	long long unsigned int heartbeat; /* 24 8 */
	uintptr_t cookie; /* 32 8 */
	mi_random_ctx_t random; /* 40 136 */
	size_t page_count; /* 176 8 */
	size_t page_retired_min; /* 184 8 */
	size_t page_retired_max; /* 192 8 */
	size_t pages_full_size; /* 200 8 */
	long int generic_count; /* 208 8 */
	long int generic_collect_count; /* 216 8 */
	mi_theap_t * tnext; /* 224 8 */
	mi_theap_t * tprev; /* 232 8 */
	mi_theap_t * hnext; /* 240 8 */
	mi_theap_t * hprev; /* 248 8 */
	long int page_full_retain; /* 256 8 */
	bool allow_page_reclaim; /* 264 1 */
	bool allow_page_abandon; /* 265 1 */
	mi_page_t * pages_free_direct[130]; /* 272 1040 */
	mi_page_queue_t pages[75]; /* 1312 2400 */
	mi_memid_t memid; /* 3712 24 */
	mi_stats_t stats __attribute__((__aligned__(8))); /* 3736 4368 */
} __attribute__((__aligned__(8)));

// <002C2D12> ../thirdparty/mimalloc/include/mimalloc/types.h:560
// member variables: 15
// struct size: 6,440
struct mi_heap_s {
	mi_subproc_t * subproc; /* 0 8 */
	size_t heap_seq; /* 8 8 */
	mi_heap_t * next; /* 16 8 */
	mi_heap_t * prev; /* 24 8 */
	mi_thread_local_t theap; /* 32 8 */
	mi_arena_t * exclusive_arena; /* 40 8 */
	int numa_node; /* 48 4 */
	mi_theap_t * theaps; /* 56 8 */
	mi_lock_t theaps_lock; /* 64 40 */
	atomic<long unsigned int> abandoned_count[75] __attribute__((__aligned__(8))); /* 104 600 */
	mi_page_t * os_abandoned_pages; /* 704 8 */
	mi_lock_t os_abandoned_pages_lock; /* 712 40 */
	atomic<mi_arena_pages_s*> arena_pages[160]; /* 752 1280 */
	mi_lock_t arena_pages_lock; /* 2032 40 */
	mi_stats_t stats __attribute__((__aligned__(8))); /* 2072 4368 */
} __attribute__((__aligned__(8)));

// <002C3899> ../thirdparty/mimalloc/include/mimalloc/types.h:593
// member variables: 16
// struct size: 5,840
struct mi_subproc_s {
	size_t subproc_seq; /* 0 8 */
	mi_subproc_t * next; /* 8 8 */
	mi_subproc_t * prev; /* 16 8 */
	atomic<long unsigned int> arena_count __attribute__((__aligned__(8))); /* 24 8 */
	atomic<mi_arena_s*> arenas[160]; /* 32 1280 */
	mi_lock_t arena_reserve_lock; /* 1312 40 */
	atomic<long int> purge_expire __attribute__((__aligned__(8))); /* 1352 8 */
	atomic<mi_heap_s*> heap_main; /* 1360 8 */
	mi_heap_t * heaps; /* 1368 8 */
	mi_lock_t heaps_lock; /* 1376 40 */
	atomic<long unsigned int> thread_count __attribute__((__aligned__(8))); /* 1416 8 */
	atomic<long unsigned int> thread_total_count __attribute__((__aligned__(8))); /* 1424 8 */
	atomic<long unsigned int> heap_count __attribute__((__aligned__(8))); /* 1432 8 */
	atomic<long unsigned int> heap_total_count __attribute__((__aligned__(8))); /* 1440 8 */
	mi_memid_t memid; /* 1448 24 */
	mi_stats_t stats __attribute__((__aligned__(8))); /* 1472 4368 */
} __attribute__((__aligned__(8)));

// <002C3D8E> ../thirdparty/mimalloc/include/mimalloc/types.h:628
// member variables: 9
// struct size: 112
struct mi_tld_s {
	mi_threadid_t thread_id; /* 0 8 */
	size_t thread_seq; /* 8 8 */
	int numa_node; /* 16 4 */
	mi_subproc_t * subproc; /* 24 8 */
	mi_theap_t * theaps; /* 32 8 */
	mi_lock_t theaps_lock; /* 40 40 */
	bool recurse; /* 80 1 */
	bool is_in_threadpool; /* 81 1 */
	mi_memid_t memid; /* 88 24 */
};

// <002C3FEE> ../thirdparty/mimalloc/include/mimalloc/types.h:660
// member variables: 2
// struct size: 608
struct mi_arena_pages_s {
	mi_bitmap_t * pages; /* 0 8 */
	mi_bitmap_t * pages_abandoned[75]; /* 8 600 */
};

// <002C3752> ../thirdparty/mimalloc/include/mimalloc/types.h:668
// member variables: 18
// struct size: 752
struct mi_arena_s {
	mi_memid_t memid; /* 0 24 */
	mi_subproc_t * subproc; /* 24 8 */
	size_t arena_idx; /* 32 8 */
	size_t slice_count; /* 40 8 */
	size_t info_slices; /* 48 8 */
	int numa_node; /* 56 4 */
	bool is_exclusive; /* 60 1 */
	atomic<long int> purge_expire __attribute__((__aligned__(8))); /* 64 8 */
	mi_commit_fun_t * commit_fun; /* 72 8 */
	void * commit_fun_arg; /* 80 8 */
	size_t total_size; /* 88 8 */
	mi_arena_t * parent; /* 96 8 */
	mi_bbitmap_t * slices_free; /* 104 8 */
	mi_bitmap_t * slices_committed; /* 112 8 */
	mi_bitmap_t * slices_dirty; /* 120 8 */
	mi_bitmap_t * slices_purge; /* 128 8 */
	mi_page_t * pages_meta; /* 136 8 */
	mi_arena_pages_t pages_main; /* 144 608 */
} __attribute__((__aligned__(8)));

