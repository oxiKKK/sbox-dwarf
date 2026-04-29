
//
// thirdparty/mimalloc/src/page-queue.c
//
//	referenced by: libtier0.so
//
//	functions: 25
//

// <002E82D3> ../thirdparty/mimalloc/src/page-queue.c:40
inline bool mi_page_queue_is_huge(const mi_page_queue_t* pq)
{
} /* size: 0 */

// <002E82B6> ../thirdparty/mimalloc/src/page-queue.c:44
inline bool mi_page_queue_is_full(const mi_page_queue_t* pq)
{
} /* size: 0 */

// <002E8299> ../thirdparty/mimalloc/src/page-queue.c:48
inline bool mi_page_queue_is_special(const mi_page_queue_t* pq)
{
} /* size: 0 */

// <002E81A4> ../thirdparty/mimalloc/src/page-queue.c:64
// variables: 4
// function calls: 2
size_t mi_bin(size_t size)
{
	size_t wsize; // 65
	const char   __func__; // 43529
	{
		const size_t  b; // 88
		const size_t  bin; // 92
		mi_clz(size_t x); // 88
	}
	_mi_wsize_from_size(size_t size); // 65
} /* size: 0, variables: 2, inline expansions: 1 (26 bytes) */

// <002E8181> ../thirdparty/mimalloc/src/page-queue.c:104
size_t _mi_bin(size_t size)
{
} /* size: 0 */

// <002E8153> ../thirdparty/mimalloc/src/page-queue.c:108
// variable: 1
size_t _mi_bin_size(size_t bin)
{
	const char   __func__; // 44795
} /* size: 0, variables: 1 */

// <002E8133> ../thirdparty/mimalloc/src/page-queue.c:114
size_t mi_good_size(size_t size)
{
} /* size: 0 */

// <002E800E> ../thirdparty/mimalloc/src/page-queue.c:127
// variables: 2
bool mi_page_queue_contains(mi_page_queue_t* queue, const mi_page_t* page)
{
	const char   __func__; // 15263
	mi_page_t* list; // 129
} /* size: 0, variables: 2 */

// <002E7FE5> ../thirdparty/mimalloc/src/page-queue.c:142
bool mi_theap_contains_queue(const mi_theap_t* theap, const mi_page_queue_t* pq)
{
} /* size: 0 */

// <002E7B5E> ../thirdparty/mimalloc/src/page-queue.c:147
// variables: 4
// function calls: 12
bool _mi_page_queue_is_valid(mi_theap_t* theap, const mi_page_queue_t* pq)
{
	size_t count; // 150
	mi_page_t* prev; // 151
	const char   __func__; // 63973
	{
		mi_page_t* page; // 152
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 816
		mi_page_xthread_id(const mi_page_t* page); // 825
		mi_page_flags(const mi_page_t* page); // 836
		mi_page_is_in_full(const mi_page_t* page); // 154
		_mi_wsize_from_size(size_t size); // 155
		mi_page_is_singleton(const mi_page_t* page); // 798
		mi_memkind_is_os(mi_memkind_t memkind); // 800
		mi_page_is_huge(const mi_page_t* page); // 797
		mi_page_is_huge(const mi_page_t* page); // 157
		mi_page_block_size(const mi_page_t* page); // 161
		_mi_wsize_from_size(size_t size); // 158
	}
} /* size: 0, variables: 3 */

// <002E7B14> ../thirdparty/mimalloc/src/page-queue.c:174
// variables: 2
size_t mi_page_bin(const mi_page_t* page)
{
	const size_t  bin; // 175
	const char   __func__; // 47565
} /* size: 0, variables: 2 */

// <002E79C9> ../thirdparty/mimalloc/src/page-queue.c:181
// variables: 2
// function calls: 5
size_t _mi_page_stats_bin(const mi_page_t* page)
{
	const size_t  bin; // 182
	const char   __func__; // 58417
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 182
	mi_page_block_size(const mi_page_t* page); // 182
} /* size: 0, variables: 2, inline expansions: 5 (94 bytes) */

// <002E7479> ../thirdparty/mimalloc/src/page-queue.c:187
// variables: 3
// function calls: 22
mi_page_queue_t* mi_theap_page_queue_of(mi_theap_t* theap, const mi_page_t* page)
{
	const char   __func__; // 15263
	const size_t  bin; // 189
	mi_page_queue_t* pq; // 190
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 175
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_page_is_huge(const mi_page_t* page); // 175
	mi_page_block_size(const mi_page_t* page); // 175
	mi_page_bin(const mi_page_t* page); // 189
	mi_page_block_size(const mi_page_t* page); // 191
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 191
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 191
	mi_page_queue_is_full(const mi_page_queue_t* pq); // 191
} /* size: 0, variables: 3, inline expansions: 22 (435 bytes) */

// <002E7444> ../thirdparty/mimalloc/src/page-queue.c:197
// variables: 2
mi_page_queue_t* mi_page_queue_of(const mi_page_t* page)
{
	mi_theap_t* theap; // 198
	mi_page_queue_t* pq; // 199
} /* size: 0, variables: 2 */

// <00340558> ../thirdparty/mimalloc/src/page-queue.c:209
// variables: 5
void mi_theap_queue_first_update(const mi_page_queue_t* pq, mi_theap_t* theap)
{
	const size_t  size; // 211
	mi_page_t* page; // 214
	const size_t  idx; // 218
	const mi_page_t**  pages_free; // 219
	size_t start; // 223
} /* size: 0, variables: 5 */

// <002E73A7> ../thirdparty/mimalloc/src/page-queue.c:209
// variables: 9
inline void mi_theap_queue_first_update(mi_theap_t* theap, const mi_page_queue_t* pq)
{
	const char   __func__; // 5670
	const size_t  size; // 211
	mi_page_t* page; // 214
	const size_t  idx; // 218
	const mi_page_t**  pages_free; // 219
	size_t start; // 223
	{
		size_t bin; // 230
		const mi_page_queue_t* prev; // 231
	}
	{
		size_t sz; // 241
	}
} /* size: 0, variables: 6 */

// <002E6AB6> ../thirdparty/mimalloc/src/page-queue.c:252
// variables: 7
// function calls: 26
void mi_page_queue_remove(mi_page_queue_t* queue, mi_page_t* page)
{
	const char   __func__; // 65207
	mi_theap_t* theap; // 259
	mi_page_block_size(const mi_page_t* page); // 256
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 256
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 256
	mi_page_queue_is_full(const mi_page_queue_t* pq); // 256
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 259
	__atomic_base<long unsigned int>::fetch_and(
			__int_type __i,
			memory_order __m);  // 1530
	atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 831
	mi_page_flags_set(mi_page_t* page,
				bool set,
				mi_page_flags_t newflag);  // 840
	{
		const mi_theap_t* theap; // 843
		{
			const size_t  size; // 846
			mi_page_block_size(const mi_page_t* page); // 846
		}
	}
	mi_page_set_in_full(mi_page_t* page,
				bool in_full);  // 273
	mi_theap_contains_queue(const mi_theap_t* theap,
				const mi_page_queue_t* pq);  // 266
	_mi_wsize_from_size(size_t size); // 218
	{
		size_t bin; // 230
		const mi_page_queue_t* prev; // 231
		_mi_wsize_from_size(size_t size); // 235
	}
	{
		size_t sz; // 241
	}
	mi_theap_queue_first_update(mi_theap_t* theap,
					const mi_page_queue_t* pq);  // 267
} /* size: 0, variables: 2, inline expansions: 24 (745 bytes) */

// <002E6126> ../thirdparty/mimalloc/src/page-queue.c:277
// variables: 6
// function calls: 28
void mi_page_queue_push(mi_theap_t* theap, mi_page_queue_t* queue, mi_page_t* page)
{
	const char   __func__; // 58417
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 278
	mi_page_block_size(const mi_page_t* page); // 283
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 283
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 825
	mi_page_flags(const mi_page_t* page); // 836
	mi_page_is_in_full(const mi_page_t* page); // 283
	mi_page_queue_is_full(const mi_page_queue_t* pq); // 283
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 830
	__atomic_base<long unsigned int>::fetch_and(
			__int_type __i,
			memory_order __m);  // 1530
	atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 831
	mi_page_flags_set(mi_page_t* page,
				bool set,
				mi_page_flags_t newflag);  // 840
	{
		const mi_theap_t* theap; // 843
		{
			const size_t  size; // 846
			mi_page_block_size(const mi_page_t* page); // 846
		}
	}
	mi_page_set_in_full(mi_page_t* page,
				bool in_full);  // 287
	mi_theap_contains_queue(const mi_theap_t* theap,
				const mi_page_queue_t* pq);  // 210
	_mi_wsize_from_size(size_t size); // 218
	{
		size_t bin; // 230
		const mi_page_queue_t* prev; // 231
		_mi_wsize_from_size(size_t size); // 235
	}
	{
		size_t sz; // 241
	}
	mi_theap_queue_first_update(mi_theap_t* theap,
					const mi_page_queue_t* pq);  // 302
} /* size: 0, variables: 1, inline expansions: 26 (1006 bytes) */

// <002E60D0> ../thirdparty/mimalloc/src/page-queue.c:306
// variable: 1
void mi_page_queue_push_at_end(mi_theap_t* theap, mi_page_queue_t* queue, mi_page_t* page)
{
	const char   __func__; // 40853
} /* size: 0, variables: 1 */

// <002E608F> ../thirdparty/mimalloc/src/page-queue.c:335
// variable: 1
void mi_page_queue_move_to_front(mi_theap_t* theap, mi_page_queue_t* queue, mi_page_t* page)
{
	const char   __func__; // 5670
} /* size: 0, variables: 1 */

// <00344319> ../thirdparty/mimalloc/src/page-queue.c:344
// variables: 10
// function calls: 35
void mi_page_queue_enqueue_from_ex(mi_page_queue_t* to, mi_page_queue_t* from, mi_page_t* page, bool enqueue_at_end)
{
	const size_t  bsize; // 349
	mi_theap_t* theap; // 357
	mi_page_block_size(const mi_page_t* page); // 349
	mi_page_is_singleton(const mi_page_t* page); // 798
	mi_memkind_is_os(mi_memkind_t memkind); // 800
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 351
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 357
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 816
	mi_page_xthread_id(const mi_page_t* page); // 821
	mi_page_thread_id(const mi_page_t* page); // 877
	mi_page_is_abandoned(const mi_page_t* page); // 896
	mi_page_theap(const mi_page_t* page); // 378
	mi_theap_contains_queue(const mi_theap_t* theap,
				const mi_page_queue_t* pq);  // 210
	_mi_wsize_from_size(size_t size); // 218
	{
		size_t bin; // 230
		const mi_page_queue_t* prev; // 231
		_mi_wsize_from_size(size_t size); // 235
	}
	{
		size_t sz; // 241
	}
	mi_theap_queue_first_update(mi_theap_t* theap,
					const mi_page_queue_t* pq);  // 385
	mi_page_queue_is_full(const mi_page_queue_t* pq); // 413
	__atomic_base<long unsigned int>::fetch_or(
		__int_type __i,
		memory_order __m);  // 1544
	atomic_fetch_or_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 830
	__atomic_base<long unsigned int>::fetch_and(
			__int_type __i,
			memory_order __m);  // 1530
	atomic_fetch_and_explicit<long unsigned int>(__atomic_base<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 831
	mi_page_flags_set(mi_page_t* page,
				bool set,
				mi_page_flags_t newflag);  // 840
	{
		const mi_theap_t* theap; // 843
		{
			const size_t  size; // 846
			mi_page_block_size(const mi_page_t* page); // 846
		}
	}
	mi_page_set_in_full(mi_page_t* page,
				bool in_full);  // 413
	mi_theap_contains_queue(const mi_theap_t* theap,
				const mi_page_queue_t* pq);  // 366
	_mi_wsize_from_size(size_t size); // 218
	{
		size_t bin; // 230
		const mi_page_queue_t* prev; // 231
		_mi_wsize_from_size(size_t size); // 235
	}
	{
		size_t sz; // 241
	}
	mi_theap_queue_first_update(mi_theap_t* theap,
					const mi_page_queue_t* pq);  // 367
	mi_page_is_huge(const mi_page_t* page); // 797
	mi_page_is_huge(const mi_page_t* page); // 351
} /* size: 0, variables: 2, inline expansions: 32 (1376 bytes) */

// <002E6004> ../thirdparty/mimalloc/src/page-queue.c:344
// variables: 4
void mi_page_queue_enqueue_from_ex(mi_page_queue_t* to, mi_page_queue_t* from, bool enqueue_at_end, mi_page_t* page)
{
	const char   __func__; // 40702
	const size_t  bsize; // 349
	mi_theap_t* theap; // 357
	{
		mi_page_t* next; // 392
	}
} /* size: 0, variables: 3 */

// <002E5FCF> ../thirdparty/mimalloc/src/page-queue.c:416
void mi_page_queue_enqueue_from(mi_page_queue_t* to, mi_page_queue_t* from, mi_page_t* page)
{
} /* size: 0 */

// <002E5F9A> ../thirdparty/mimalloc/src/page-queue.c:420
void mi_page_queue_enqueue_from_full(mi_page_queue_t* to, mi_page_queue_t* from, mi_page_t* page)
{
} /* size: 0 */

// <002E5A4A> ../thirdparty/mimalloc/src/page-queue.c:426
// variables: 6
// function calls: 10
size_t _mi_page_queue_append(mi_theap_t* theap, mi_page_queue_t* pq, mi_page_queue_t* append)
{
	const char   __func__; // 15154
	size_t count; // 433
	{
		mi_page_t* page; // 434
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 816
		mi_page_xthread_id(const mi_page_t* page); // 868
		__atomic_base<long unsigned int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1362
		atomic_compare_exchange_weak_explicit<long unsigned int>(atomic<long unsigned int>* __a,
									__atomic_val_t* __i1,
									__atomic_val_t __i2,
									memory_order __m1,
									memory_order __m2);  // 872
		mi_page_set_theap(mi_page_t* page,
					mi_theap_t* theap);  // 435
	}
	mi_theap_contains_queue(const mi_theap_t* theap,
				const mi_page_queue_t* pq);  // 427
	_mi_wsize_from_size(size_t size); // 218
	{
		size_t bin; // 230
		const mi_page_queue_t* prev; // 231
		_mi_wsize_from_size(size_t size); // 235
	}
	{
		size_t sz; // 241
	}
	mi_theap_queue_first_update(mi_theap_t* theap,
					const mi_page_queue_t* pq);  // 445
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

