
//
// thirdparty/mimalloc/include/mimalloc/internal.h
//
//	referenced by: libtier0.so
//
//	functions: 98
//	struct: 1
//

// <002C42B8> ../thirdparty/mimalloc/include/mimalloc/internal.h:407
// member variables: 5
// struct size: 32
struct mi_option_desc_s {
	long int value; /* 0 8 */
	mi_option_init_t init; /* 8 4 */
	mi_option_t option; /* 12 4 */
	const char * name; /* 16 8 */
	const char * legacy_name; /* 24 8 */
};

// <0033B373> ../thirdparty/mimalloc/include/mimalloc/internal.h:444
inline bool _mi_is_power_of_two(uintptr_t x)
{
} /* size: 0 */

// <0033D56E> ../thirdparty/mimalloc/include/mimalloc/internal.h:449
bool _mi_is_aligned(size_t alignment, const void* p)
{
} /* size: 0 */

// <0033B33D> ../thirdparty/mimalloc/include/mimalloc/internal.h:449
// variable: 1
inline bool _mi_is_aligned(const void* p, size_t alignment)
{
	const char   __func__; // 59076
} /* size: 0, variables: 1 */

// <0033D6D7> ../thirdparty/mimalloc/include/mimalloc/internal.h:455
// variable: 1
uintptr_t _mi_align_up(size_t alignment, uintptr_t sz)
{
	uintptr_t mask; // 457
} /* size: 35, variables: 1 */

// <0033B2F9> ../thirdparty/mimalloc/include/mimalloc/internal.h:455
// variables: 2
inline uintptr_t _mi_align_up(uintptr_t sz, size_t alignment)
{
	const char   __func__; // 44795
	uintptr_t mask; // 457
} /* size: 0, variables: 2 */

// <0033B2CE> ../thirdparty/mimalloc/include/mimalloc/internal.h:467
inline void* _mi_align_up_ptr(const void* p, size_t alignment)
{
} /* size: 0 */

// <0033D4F4> ../thirdparty/mimalloc/include/mimalloc/internal.h:471
// variable: 1
uintptr_t _mi_align_down(size_t alignment, uintptr_t sz)
{
	uintptr_t mask; // 473
} /* size: 35, variables: 1 */

// <0033B28A> ../thirdparty/mimalloc/include/mimalloc/internal.h:471
// variables: 2
inline uintptr_t _mi_align_down(uintptr_t sz, size_t alignment)
{
	const char   __func__; // 59076
	uintptr_t mask; // 473
} /* size: 0, variables: 2 */

// <0033B25F> ../thirdparty/mimalloc/include/mimalloc/internal.h:483
inline void* _mi_align_down_ptr(const void* p, size_t alignment)
{
} /* size: 0 */

// <0033B227> ../thirdparty/mimalloc/include/mimalloc/internal.h:488
// variable: 1
inline uintptr_t _mi_divide_up(uintptr_t size, size_t divider)
{
	const char   __func__; // 759
} /* size: 0, variables: 1 */

// <0033B1EE> ../thirdparty/mimalloc/include/mimalloc/internal.h:495
inline size_t _mi_clamp(size_t sz, size_t min, size_t max)
{
} /* size: 0 */

// <0033B1B6> ../thirdparty/mimalloc/include/mimalloc/internal.h:502
// variable: 1
inline bool mi_mem_is_zero(const void* p, size_t size)
{
	{
		size_t i; // 503
	}
} /* size: 0 */

// <0033D5E3> ../thirdparty/mimalloc/include/mimalloc/internal.h:511
size_t _mi_wsize_from_size(size_t size)
{
} /* size: 35 */

// <0033B18B> ../thirdparty/mimalloc/include/mimalloc/internal.h:511
// variable: 1
inline size_t _mi_wsize_from_size(size_t size)
{
	const char   __func__; // 5857
} /* size: 0, variables: 1 */

// <0033B151> ../thirdparty/mimalloc/include/mimalloc/internal.h:522
inline bool mi_mul_overflow(size_t count, size_t size, size_t* total)
{
} /* size: 0 */

// <0033B117> ../thirdparty/mimalloc/include/mimalloc/internal.h:544
inline bool mi_count_size_overflow(size_t count, size_t size, size_t* total)
{
} /* size: 0 */

// <0033B0F7> ../thirdparty/mimalloc/include/mimalloc/internal.h:570
inline mi_heap_t* _mi_theap_heap(const mi_theap_t* theap)
{
} /* size: 0 */

// <0033B0D7> ../thirdparty/mimalloc/include/mimalloc/internal.h:574
inline bool mi_theap_is_initialized(const mi_theap_t* theap)
{
} /* size: 0 */

// <0033B092> ../thirdparty/mimalloc/include/mimalloc/internal.h:578
// variables: 2
inline mi_page_t* _mi_theap_get_free_small_page(mi_theap_t* theap, size_t size)
{
	const char   __func__; // 40702
	const size_t  idx; // 580
} /* size: 0, variables: 2 */

// <0033B05C> ../thirdparty/mimalloc/include/mimalloc/internal.h:642
// variable: 1
inline size_t _mi_page_map_index(const void* p, size_t* sub_idx)
{
	const size_t  u; // 643
} /* size: 0, variables: 1 */

// <0033B03C> ../thirdparty/mimalloc/include/mimalloc/internal.h:648
inline mi_submap_t _mi_page_map_at(size_t idx)
{
} /* size: 0 */

// <0033AFF7> ../thirdparty/mimalloc/include/mimalloc/internal.h:658
// variables: 3
inline mi_page_t* _mi_checked_ptr_page(const void* p)
{
	size_t sub_idx; // 659
	const size_t  idx; // 660
	const mi_submap_t  sub; // 661
} /* size: 0, variables: 3 */

// <00340859> ../thirdparty/mimalloc/include/mimalloc/internal.h:669
mi_page_t* _mi_ptr_page(const void* p)
{
} /* size: 35 */

// <0033AFCE> ../thirdparty/mimalloc/include/mimalloc/internal.h:669
// variable: 1
inline mi_page_t* _mi_ptr_page(const void* p)
{
	const char   __func__; // 44795
} /* size: 0, variables: 1 */

// <0033CB23> ../thirdparty/mimalloc/include/mimalloc/internal.h:680
size_t mi_page_block_size(const mi_page_t* page)
{
} /* size: 35 */

// <0033AFA3> ../thirdparty/mimalloc/include/mimalloc/internal.h:680
// variable: 1
inline size_t mi_page_block_size(const mi_page_t* page)
{
	const char   __func__; // 58417
} /* size: 0, variables: 1 */

// <0033AF83> ../thirdparty/mimalloc/include/mimalloc/internal.h:686
inline uint8_t* mi_page_start(const mi_page_t* page)
{
} /* size: 0 */

// <0033AF63> ../thirdparty/mimalloc/include/mimalloc/internal.h:690
inline size_t mi_page_size(const mi_page_t* page)
{
} /* size: 0 */

// <0033AF36> ../thirdparty/mimalloc/include/mimalloc/internal.h:694
inline uint8_t* mi_page_area(const mi_page_t* page, size_t* size)
{
} /* size: 0 */

// <0033AF27> ../thirdparty/mimalloc/include/mimalloc/internal.h:699
inline size_t mi_page_info_size(void)
{
} /* size: 0 */

// <0033AEE2> ../thirdparty/mimalloc/include/mimalloc/internal.h:703
// variables: 2
inline bool mi_page_contains_address(const mi_page_t* page, const void* p)
{
	size_t psize; // 704
	uint8_t* start; // 705
} /* size: 0, variables: 2 */

// <0033AEC2> ../thirdparty/mimalloc/include/mimalloc/internal.h:713
inline bool mi_page_is_singleton(const mi_page_t* page)
{
} /* size: 0 */

// <0033AEA2> ../thirdparty/mimalloc/include/mimalloc/internal.h:719
inline size_t mi_page_usable_block_size(const mi_page_t* page)
{
} /* size: 0 */

// <0033AE82> ../thirdparty/mimalloc/include/mimalloc/internal.h:723
inline bool mi_page_meta_is_separated(const mi_page_t* page)
{
} /* size: 0 */

// <0033AE62> ../thirdparty/mimalloc/include/mimalloc/internal.h:733
inline uint8_t* mi_page_slice_start(const mi_page_t* page)
{
} /* size: 0 */

// <0033AE35> ../thirdparty/mimalloc/include/mimalloc/internal.h:745
inline size_t mi_page_slice_offset_of(const mi_page_t* page, size_t offset_relative_to_page_start)
{
} /* size: 0 */

// <0033AE15> ../thirdparty/mimalloc/include/mimalloc/internal.h:750
inline size_t mi_page_committed(const mi_page_t* page)
{
} /* size: 0 */

// <0033D188> ../thirdparty/mimalloc/include/mimalloc/internal.h:756
bool mi_page_all_free(const mi_page_t* page)
{
} /* size: 35 */

// <0033ADEA> ../thirdparty/mimalloc/include/mimalloc/internal.h:756
// variable: 1
inline bool mi_page_all_free(const mi_page_t* page)
{
	const char   __func__; // 6958
} /* size: 0, variables: 1 */

// <0033ADBF> ../thirdparty/mimalloc/include/mimalloc/internal.h:762
// variable: 1
inline bool mi_page_immediate_available(const mi_page_t* page)
{
	const char   __func__; // 5670
} /* size: 0, variables: 1 */

// <00340773> ../thirdparty/mimalloc/include/mimalloc/internal.h:769
bool mi_page_is_expandable(const mi_page_t* page)
{
} /* size: 35 */

// <0033AD94> ../thirdparty/mimalloc/include/mimalloc/internal.h:769
// variable: 1
inline bool mi_page_is_expandable(const mi_page_t* page)
{
	const char   __func__; // 15154
} /* size: 0, variables: 1 */

// <0033D1F0> ../thirdparty/mimalloc/include/mimalloc/internal.h:776
// variable: 1
bool mi_page_is_full(const mi_page_t* page)
{
	const bool  full; // 777
} /* size: 35, variables: 1 */

// <0033AD5C> ../thirdparty/mimalloc/include/mimalloc/internal.h:776
// variables: 2
inline bool mi_page_is_full(const mi_page_t* page)
{
	const bool  full; // 777
	const char   __func__; // 44947
} /* size: 0, variables: 2 */

// <0033AD2F> ../thirdparty/mimalloc/include/mimalloc/internal.h:783
// variable: 1
inline bool mi_page_is_mostly_used(const mi_page_t* page)
{
	uint16_t frac; // 785
} /* size: 0, variables: 1 */

// <0033AD0F> ../thirdparty/mimalloc/include/mimalloc/internal.h:797
inline bool mi_page_is_huge(const mi_page_t* page)
{
} /* size: 0 */

// <003404DE> ../thirdparty/mimalloc/include/mimalloc/internal.h:803
// variable: 1
mi_page_queue_t* mi_page_queue(size_t size, const mi_theap_t* theap)
{
	const mi_page_queue_t* pq; // 804
} /* size: 35, variables: 1 */

// <0033ACCB> ../thirdparty/mimalloc/include/mimalloc/internal.h:803
// variables: 2
inline mi_page_queue_t* mi_page_queue(const mi_theap_t* theap, size_t size)
{
	const mi_page_queue_t* pq; // 804
	const char   __func__; // 759
} /* size: 0, variables: 2 */

// <0033ACAB> ../thirdparty/mimalloc/include/mimalloc/internal.h:815
inline mi_threadid_t mi_page_xthread_id(const mi_page_t* page)
{
} /* size: 0 */

// <0033AC8B> ../thirdparty/mimalloc/include/mimalloc/internal.h:820
inline mi_threadid_t mi_page_thread_id(const mi_page_t* page)
{
} /* size: 0 */

// <0033AC6B> ../thirdparty/mimalloc/include/mimalloc/internal.h:824
inline mi_page_flags_t mi_page_flags(const mi_page_t* page)
{
} /* size: 0 */

// <0033AC24> ../thirdparty/mimalloc/include/mimalloc/internal.h:828
// variable: 1
inline bool mi_page_flags_set(mi_page_t* page, bool set, mi_page_flags_t newflag)
{
	mi_page_flags_t old; // 829
} /* size: 0, variables: 1 */

// <0033AC04> ../thirdparty/mimalloc/include/mimalloc/internal.h:835
inline bool mi_page_is_in_full(const mi_page_t* page)
{
} /* size: 0 */

// <0034064D> ../thirdparty/mimalloc/include/mimalloc/internal.h:839
// variables: 3
void mi_page_set_in_full(bool in_full, mi_page_t* page)
{
	const bool  was_in_full; // 840
	{
		const mi_theap_t* theap; // 843
		{
			const size_t  size; // 846
		}
	}
} /* size: 35, variables: 1 */

// <0033ABA5> ../thirdparty/mimalloc/include/mimalloc/internal.h:839
// variables: 4
inline void mi_page_set_in_full(mi_page_t* page, bool in_full)
{
	const bool  was_in_full; // 840
	const char   __func__; // 5857
	{
		const mi_theap_t* theap; // 843
		{
			const size_t  size; // 846
		}
	}
} /* size: 0, variables: 2 */

// <0033AB85> ../thirdparty/mimalloc/include/mimalloc/internal.h:853
inline bool mi_page_has_interior_pointers(const mi_page_t* page)
{
} /* size: 0 */

// <0033AB5C> ../thirdparty/mimalloc/include/mimalloc/internal.h:857
inline void mi_page_set_has_interior_pointers(mi_page_t* page, bool has_aligned)
{
} /* size: 0 */

// <0033DECC> ../thirdparty/mimalloc/include/mimalloc/internal.h:861
// variables: 3
void mi_page_set_theap(mi_theap_t* theap, mi_page_t* page)
{
	const mi_threadid_t  tid; // 864
	mi_threadid_t xtid_old; // 868
	mi_threadid_t xtid; // 869
} /* size: 35, variables: 3 */

// <0033AB01> ../thirdparty/mimalloc/include/mimalloc/internal.h:861
// variables: 4
inline void mi_page_set_theap(mi_page_t* page, mi_theap_t* theap)
{
	const mi_threadid_t  tid; // 864
	const char   __func__; // 8149
	mi_threadid_t xtid_old; // 868
	mi_threadid_t xtid; // 869
} /* size: 0, variables: 4 */

// <0033AAE1> ../thirdparty/mimalloc/include/mimalloc/internal.h:875
inline bool mi_page_is_abandoned(const mi_page_t* page)
{
} /* size: 0 */

// <0033AAC1> ../thirdparty/mimalloc/include/mimalloc/internal.h:880
inline bool mi_page_is_abandoned_mapped(const mi_page_t* page)
{
} /* size: 0 */

// <0033AA9A> ../thirdparty/mimalloc/include/mimalloc/internal.h:884
// variable: 1
inline void mi_page_set_abandoned_mapped(mi_page_t* page)
{
	const char   __func__; // 1309
} /* size: 0, variables: 1 */

// <0033AA73> ../thirdparty/mimalloc/include/mimalloc/internal.h:889
// variable: 1
inline void mi_page_clear_abandoned_mapped(mi_page_t* page)
{
	const char   __func__; // 55026
} /* size: 0, variables: 1 */

// <003405E5> ../thirdparty/mimalloc/include/mimalloc/internal.h:895
mi_theap_t* mi_page_theap(const mi_page_t* page)
{
} /* size: 35 */

// <0033AA48> ../thirdparty/mimalloc/include/mimalloc/internal.h:895
// variable: 1
inline mi_theap_t* mi_page_theap(const mi_page_t* page)
{
	const char   __func__; // 759
} /* size: 0, variables: 1 */

// <00340991> ../thirdparty/mimalloc/include/mimalloc/internal.h:908
// variable: 1
mi_heap_t* mi_page_heap(const mi_page_t* page)
{
	mi_heap_t* heap; // 909
} /* size: 35, variables: 1 */

// <0033AA10> ../thirdparty/mimalloc/include/mimalloc/internal.h:908
// variables: 2
inline mi_heap_t* mi_page_heap(const mi_page_t* page)
{
	mi_heap_t* heap; // 909
	const char   __func__; // 44795
} /* size: 0, variables: 2 */

// <0033A9F1> ../thirdparty/mimalloc/include/mimalloc/internal.h:921
inline mi_block_t* mi_tf_block(mi_thread_free_t tf)
{
} /* size: 0 */

// <0033A9D2> ../thirdparty/mimalloc/include/mimalloc/internal.h:924
inline bool mi_tf_is_owned(mi_thread_free_t tf)
{
} /* size: 0 */

// <0033A9A5> ../thirdparty/mimalloc/include/mimalloc/internal.h:927
inline mi_thread_free_t mi_tf_create(mi_block_t* block, bool owned)
{
} /* size: 0 */

// <0033A985> ../thirdparty/mimalloc/include/mimalloc/internal.h:932
inline mi_block_t* mi_page_thread_free(const mi_page_t* page)
{
} /* size: 0 */

// <0033A965> ../thirdparty/mimalloc/include/mimalloc/internal.h:943
inline bool mi_page_is_owned(const mi_page_t* page)
{
} /* size: 0 */

// <0033A938> ../thirdparty/mimalloc/include/mimalloc/internal.h:948
// variable: 1
inline bool mi_page_claim_ownership(mi_page_t* page)
{
	const uintptr_t  old; // 949
} /* size: 0, variables: 1 */

// <0033A90D> ../thirdparty/mimalloc/include/mimalloc/internal.h:964
inline bool mi_block_ptr_is_guarded(const mi_block_t* block, const void* p)
{
} /* size: 0 */

// <0033A8D7> ../thirdparty/mimalloc/include/mimalloc/internal.h:1025
// variable: 1
inline bool mi_is_in_same_page(const void* p, const void* q)
{
	mi_page_t* page; // 1026
} /* size: 0, variables: 1 */

// <0033A894> ../thirdparty/mimalloc/include/mimalloc/internal.h:1031
// variable: 1
inline void* mi_ptr_decode(const void* null, const mi_encoded_t x, const uintptr_t* keys)
{
	void* p; // 1032
} /* size: 0, variables: 1 */

// <0033A851> ../thirdparty/mimalloc/include/mimalloc/internal.h:1036
// variable: 1
inline mi_encoded_t mi_ptr_encode(const void* null, const void* p, const uintptr_t* keys)
{
	uintptr_t x; // 1037
} /* size: 0, variables: 1 */

// <0033A80E> ../thirdparty/mimalloc/include/mimalloc/internal.h:1041
// variable: 1
inline uint32_t mi_ptr_encode_canary(const void* null, const void* p, const uintptr_t* keys)
{
	const uint32_t  x; // 1042
} /* size: 0, variables: 1 */

// <0033A7C7> ../thirdparty/mimalloc/include/mimalloc/internal.h:1051
// variable: 1
inline mi_block_t* mi_block_nextx(const void* null, const mi_block_t* block, const uintptr_t* keys)
{
	mi_block_t* next; // 1053
} /* size: 0, variables: 1 */

// <0033A77E> ../thirdparty/mimalloc/include/mimalloc/internal.h:1064
inline void mi_block_set_nextx(const void* null, mi_block_t* block, const mi_block_t* next, const uintptr_t* keys)
{
} /* size: 0 */

// <0033A744> ../thirdparty/mimalloc/include/mimalloc/internal.h:1075
// variable: 1
inline mi_block_t* mi_block_next(const mi_page_t* page, const mi_block_t* block)
{
	mi_block_t* next; // 1077
} /* size: 0, variables: 1 */

// <0033A70E> ../thirdparty/mimalloc/include/mimalloc/internal.h:1091
inline void mi_block_set_next(const mi_page_t* page, mi_block_t* block, const mi_block_t* next)
{
} /* size: 0 */

// <0033A6EE> ../thirdparty/mimalloc/include/mimalloc/internal.h:1105
inline size_t mi_slice_count_of_size(size_t size)
{
} /* size: 0 */

// <0033A6CE> ../thirdparty/mimalloc/include/mimalloc/internal.h:1110
inline size_t mi_size_of_slices(size_t bcount)
{
} /* size: 0 */

// <0033A6A1> ../thirdparty/mimalloc/include/mimalloc/internal.h:1119
// variable: 1
inline mi_memid_t _mi_memid_create(mi_memkind_t memkind)
{
	mi_memid_t memid; // 1120
} /* size: 0, variables: 1 */

// <0033A692> ../thirdparty/mimalloc/include/mimalloc/internal.h:1126
inline mi_memid_t _mi_memid_none(void)
{
} /* size: 0 */

// <0033A631> ../thirdparty/mimalloc/include/mimalloc/internal.h:1130
// variable: 1
inline mi_memid_t _mi_memid_create_os(void* base, size_t size, bool committed, bool is_zero, bool is_large)
{
	mi_memid_t memid; // 1131
} /* size: 0, variables: 1 */

// <0033A5EA> ../thirdparty/mimalloc/include/mimalloc/internal.h:1140
// variable: 1
inline mi_memid_t _mi_memid_create_meta(void* mpage, size_t block_idx, size_t block_count)
{
	mi_memid_t memid; // 1141
} /* size: 0, variables: 1 */

// <0033A5CC> ../thirdparty/mimalloc/include/mimalloc/internal.h:1156
inline uintptr_t _mi_random_shuffle(uintptr_t x)
{
} /* size: 0 */

// <0033A598> ../thirdparty/mimalloc/include/mimalloc/internal.h:1191
inline void mi_rep_movsb(void* dst, const void* src, size_t n)
{
} /* size: 0 */

// <0033A564> ../thirdparty/mimalloc/include/mimalloc/internal.h:1199
inline void mi_rep_stosb(void* dst, uint8_t val, size_t n)
{
} /* size: 0 */

// <0033A530> ../thirdparty/mimalloc/include/mimalloc/internal.h:1207
inline void _mi_memcpy(void* dst, const void* src, size_t n)
{
} /* size: 0 */

// <0033A4FC> ../thirdparty/mimalloc/include/mimalloc/internal.h:1216
inline void _mi_memset(void* dst, int val, size_t n)
{
} /* size: 0 */

// <0033D64B> ../thirdparty/mimalloc/include/mimalloc/internal.h:1245
// variables: 2
void _mi_memcpy_aligned(size_t n, const void* src, void* dst)
{
	void* adst; // 1247
	const void* asrc; // 1248
} /* size: 35, variables: 2 */

// <0033A4A3> ../thirdparty/mimalloc/include/mimalloc/internal.h:1245
// variables: 3
inline void _mi_memcpy_aligned(void* dst, const void* src, size_t n)
{
	const char   __func__; // 58417
	void* adst; // 1247
	const void* asrc; // 1248
} /* size: 0, variables: 3 */

// <0033D101> ../thirdparty/mimalloc/include/mimalloc/internal.h:1252
// variable: 1
void _mi_memset_aligned(size_t n, int val, void* dst)
{
	void* adst; // 1254
} /* size: 35, variables: 1 */

// <0033A457> ../thirdparty/mimalloc/include/mimalloc/internal.h:1252
// variables: 2
inline void _mi_memset_aligned(void* dst, int val, size_t n)
{
	const char   __func__; // 58417
	void* adst; // 1254
} /* size: 0, variables: 2 */

// <0033A430> ../thirdparty/mimalloc/include/mimalloc/internal.h:1273
inline void _mi_memzero(void* dst, size_t n)
{
} /* size: 0 */

