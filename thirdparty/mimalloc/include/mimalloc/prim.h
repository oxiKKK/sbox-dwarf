
//
// thirdparty/mimalloc/include/mimalloc/prim.h
//
//	referenced by: libtier0.so
//
//	functions: 11
//	structs: 2
//

// <002C43FF> ../thirdparty/mimalloc/include/mimalloc/prim.h:24
// member variables: 9
// struct size: 48
struct mi_os_mem_config_s {
	size_t page_size; /* 0 8 */
	size_t large_page_size; /* 8 8 */
	size_t alloc_granularity; /* 16 8 */
	size_t physical_memory_in_kib; /* 24 8 */
	size_t virtual_address_bits; /* 32 8 */
	bool has_overcommit; /* 40 1 */
	bool has_partial_free; /* 41 1 */
	bool has_virtual_reserve; /* 42 1 */
	bool has_transparent_huge_pages; /* 43 1 */
};

// <002C44A0> ../thirdparty/mimalloc/include/mimalloc/prim.h:91
// member variables: 8
// struct size: 64
struct mi_process_info_s {
	mi_msecs_t elapsed; /* 0 8 */
	mi_msecs_t utime; /* 8 8 */
	mi_msecs_t stime; /* 16 8 */
	size_t current_rss; /* 24 8 */
	size_t peak_rss; /* 32 8 */
	size_t current_commit; /* 40 8 */
	size_t peak_commit; /* 48 8 */
	size_t page_faults; /* 56 8 */
};

// <0033D25D> ../thirdparty/mimalloc/include/mimalloc/prim.h:274
// variable: 1
mi_threadid_t _mi_prim_thread_id(void)
{
	const mi_threadid_t  tid; // 275
} /* size: 35, variables: 1 */

// <0033A3DE> ../thirdparty/mimalloc/include/mimalloc/prim.h:274
// variables: 2
inline mi_threadid_t _mi_prim_thread_id(void)
{
	const mi_threadid_t  tid; // 275
	const char   __func__; // 58417
} /* size: 0, variables: 2 */

// <0033A3CF> ../thirdparty/mimalloc/include/mimalloc/prim.h:297
inline mi_threadid_t __mi_prim_thread_id(void)
{
} /* size: 0 */

// <0033A3C0> ../thirdparty/mimalloc/include/mimalloc/prim.h:403
inline mi_theap_t* _mi_theap_default(void)
{
} /* size: 0 */

// <0033A3B1> ../thirdparty/mimalloc/include/mimalloc/prim.h:410
inline mi_theap_t* _mi_theap_cached(void)
{
} /* size: 0 */

// <0033A3A2> ../thirdparty/mimalloc/include/mimalloc/prim.h:498
inline bool _mi_thread_is_initialized(void)
{
} /* size: 0 */

// <0033A375> ../thirdparty/mimalloc/include/mimalloc/prim.h:504
// variable: 1
inline mi_theap_t* _mi_heap_theap(const mi_heap_t* heap)
{
	mi_theap_t* theap; // 505
} /* size: 0, variables: 1 */

// <00340BA0> ../thirdparty/mimalloc/include/mimalloc/prim.h:515
// variable: 1
mi_theap_t* _mi_heap_theap_peek(const mi_heap_t* heap)
{
	mi_theap_t* theap; // 516
} /* size: 35, variables: 1 */

// <0033A33D> ../thirdparty/mimalloc/include/mimalloc/prim.h:515
// variables: 2
inline mi_theap_t* _mi_heap_theap_peek(const mi_heap_t* heap)
{
	mi_theap_t* theap; // 516
	const char   __func__; // 5857
} /* size: 0, variables: 2 */

// <00340C0D> ../thirdparty/mimalloc/include/mimalloc/prim.h:531
// variables: 2
mi_theap_t* _mi_page_associated_theap_peek(mi_page_t* page)
{
	const mi_heap_t* heap; // 532
	mi_theap_t* theap; // 533
} /* size: 35, variables: 2 */

// <0033A2F8> ../thirdparty/mimalloc/include/mimalloc/prim.h:531
// variables: 3
inline mi_theap_t* _mi_page_associated_theap_peek(mi_page_t* page)
{
	const mi_heap_t* heap; // 532
	mi_theap_t* theap; // 533
	const char   __func__; // 55026
} /* size: 0, variables: 3 */

