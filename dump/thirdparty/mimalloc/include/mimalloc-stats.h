
//
// thirdparty/mimalloc/include/mimalloc-stats.h
//
//	referenced by: libtier0.so
//
//	structs: 3
//

// <002C32F3> ../thirdparty/mimalloc/include/mimalloc-stats.h:29
// member variables: 3
// struct size: 24
struct mi_stat_count_s {
	int64_t total; /* 0 8 */
	int64_t peak; /* 8 8 */
	int64_t current; /* 16 8 */
};

// <002C333F> ../thirdparty/mimalloc/include/mimalloc-stats.h:36
// member variable: 1
// struct size: 8
struct mi_stat_counter_s {
	int64_t total; /* 0 8 */
};

// <002C33BB> ../thirdparty/mimalloc/include/mimalloc-stats.h:100
// member variables: 43
// struct size: 4,368
struct mi_stats_s {
	size_t size; /* 0 8 */
	size_t version; /* 8 8 */
	mi_stat_count_t pages __attribute__((__aligned__(8))); /* 16 24 */
	mi_stat_count_t reserved; /* 40 24 */
	mi_stat_count_t committed; /* 64 24 */
	mi_stat_counter_t reset; /* 88 8 */
	mi_stat_counter_t purged; /* 96 8 */
	mi_stat_count_t page_committed; /* 104 24 */
	mi_stat_count_t pages_abandoned; /* 128 24 */
	mi_stat_count_t threads; /* 152 24 */
	mi_stat_count_t malloc_normal; /* 176 24 */
	mi_stat_count_t malloc_huge; /* 200 24 */
	mi_stat_count_t malloc_requested; /* 224 24 */
	mi_stat_counter_t mmap_calls; /* 248 8 */
	mi_stat_counter_t commit_calls; /* 256 8 */
	mi_stat_counter_t reset_calls; /* 264 8 */
	mi_stat_counter_t purge_calls; /* 272 8 */
	mi_stat_counter_t arena_count; /* 280 8 */
	mi_stat_counter_t malloc_normal_count; /* 288 8 */
	mi_stat_counter_t malloc_huge_count; /* 296 8 */
	mi_stat_counter_t malloc_guarded_count; /* 304 8 */
	mi_stat_counter_t arena_rollback_count; /* 312 8 */
	mi_stat_counter_t arena_purges; /* 320 8 */
	mi_stat_counter_t pages_extended; /* 328 8 */
	mi_stat_counter_t pages_retire; /* 336 8 */
	mi_stat_counter_t page_searches; /* 344 8 */
	mi_stat_counter_t page_searches_count; /* 352 8 */
	mi_stat_count_t segments; /* 360 24 */
	mi_stat_count_t segments_abandoned; /* 384 24 */
	mi_stat_count_t segments_cache; /* 408 24 */
	mi_stat_count_t _segments_reserved; /* 432 24 */
	mi_stat_count_t heaps; /* 456 24 */
	mi_stat_count_t theaps; /* 480 24 */
	mi_stat_counter_t pages_reclaim_on_alloc; /* 504 8 */
	mi_stat_counter_t pages_reclaim_on_free; /* 512 8 */
	mi_stat_counter_t pages_reabandon_full; /* 520 8 */
	mi_stat_counter_t pages_unabandon_busy_wait; /* 528 8 */
	mi_stat_counter_t heaps_delete_wait; /* 536 8 */
	mi_stat_count_t _stat_reserved[4]; /* 544 96 */
	mi_stat_counter_t _stat_counter_reserved[4]; /* 640 32 */
	mi_stat_count_t malloc_bins[74]; /* 672 1776 */
	mi_stat_count_t page_bins[74]; /* 2448 1776 */
	mi_stat_count_t chunk_bins[6]; /* 4224 144 */
} __attribute__((__aligned__(8)));

