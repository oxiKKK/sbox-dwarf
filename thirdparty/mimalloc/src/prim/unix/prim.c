
//
// thirdparty/mimalloc/src/prim/unix/prim.c
//
//	referenced by: libtier0.so
//
//	functions: 39
//

// <002CB71E> ../thirdparty/mimalloc/src/prim/unix/prim.c:86
inline int mi_prim_open(const char* fpath, int open_flags)
{
} /* size: 0 */

// <002CB6E9> ../thirdparty/mimalloc/src/prim/unix/prim.c:89
inline ssize_t mi_prim_read(int fd, void* buf, size_t bufsize)
{
} /* size: 0 */

// <002CB6CC> ../thirdparty/mimalloc/src/prim/unix/prim.c:92
inline int mi_prim_close(int fd)
{
} /* size: 0 */

// <002CB6A2> ../thirdparty/mimalloc/src/prim/unix/prim.c:95
inline int mi_prim_access(const char* fpath, int mode)
{
} /* size: 0 */

// <002CB65F> ../thirdparty/mimalloc/src/prim/unix/prim.c:122
// variables: 4
bool unix_detect_overcommit(void)
{
	bool os_overcommit; // 123
	int fd; // 125
	{
		char buf; // 127
		ssize_t nread; // 128
	}
} /* size: 0, variables: 2 */

// <002CB61C> ../thirdparty/mimalloc/src/prim/unix/prim.c:148
// variables: 4
bool unix_detect_thp(void)
{
	bool thp_enabled; // 149
	int fd; // 151
	{
		char buf; // 153
		ssize_t nread; // 154
	}
} /* size: 0, variables: 2 */

// <002CB5D0> ../thirdparty/mimalloc/src/prim/unix/prim.c:167
// variables: 3
void unix_detect_physical_memory(size_t page_size, size_t* physical_memory_in_kib)
{
	sysinfo info; // 186
	const int  err; // 187
	{
		size_t total; // 193
	}
} /* size: 0, variables: 2 */

// <002CB039> ../thirdparty/mimalloc/src/prim/unix/prim.c:208
// variables: 6
// function calls: 14
void _mi_prim_mem_init(mi_os_mem_config_t* config)
{
	long int psize; // 210
	mi_prim_open(const char* fpath,
			int open_flags);  // 125
	{
		char buf; // 127
		ssize_t nread; // 128
		mi_prim_read(int fd,
				void* buf,
				size_t bufsize);  // 128
		mi_prim_close(int fd); // 129
	}
	unix_detect_overcommit(void); // 217
	mi_prim_open(const char* fpath,
			int open_flags);  // 151
	{
		char buf; // 153
		ssize_t nread; // 154
		mi_prim_read(int fd,
				void* buf,
				size_t bufsize);  // 154
		mi_prim_close(int fd); // 155
	}
	unix_detect_thp(void); // 220
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 224
	memset(void* __dest,
		int __ch,
		size_t __len);  // 186
	{
		size_t total; // 193
		mi_mul_overflow(size_t count,
				size_t size,
				size_t* total);  // 194
	}
	unix_detect_physical_memory(size_t page_size,
					size_t* physical_memory_in_kib);  // 214
} /* size: 0, variables: 1, inline expansions: 9 (589 bytes) */

// <002CAFFE> ../thirdparty/mimalloc/src/prim/unix/prim.c:241
// variable: 1
int _mi_prim_free(void* addr, size_t size)
{
	bool err; // 243
} /* size: 0, variables: 1 */

// <002CAFBB> ../thirdparty/mimalloc/src/prim/unix/prim.c:252
// variable: 1
int unix_madvise(void* addr, size_t size, int advice)
{
	int res; // 258
} /* size: 0, variables: 1 */

// <002CAF5D> ../thirdparty/mimalloc/src/prim/unix/prim.c:263
// variable: 1
void* unix_mmap_prim(void* addr, size_t size, int protect_flags, int flags, int fd)
{
	void* p; // 264
} /* size: 0, variables: 1 */

// <003495BA> ../thirdparty/mimalloc/src/prim/unix/prim.c:273
// variables: 3
// function calls: 3
void* unix_mmap_prim_aligned(void* addr, size_t size, size_t try_alignment, int protect_flags, int flags, int fd)
{
	void* p; // 275
	{
		void* hint; // 300
		unix_mmap_prim(void* addr,
				size_t size,
				int protect_flags,
				int flags,
				int fd);  // 302
		_mi_is_aligned(const void* p,
				size_t alignment);  // 303
		{
			int err; // 307
		}
	}
	unix_mmap_prim(void* addr,
			size_t size,
			int protect_flags,
			int flags,
			int fd);  // 317
} /* size: 369, variables: 1, inline expansions: 1 (70 bytes) */

// <002CAED4> ../thirdparty/mimalloc/src/prim/unix/prim.c:273
// variables: 3
void* unix_mmap_prim_aligned(void* addr, size_t size, size_t try_alignment, int protect_flags, int flags, int fd)
{
	void* p; // 275
	{
		void* hint; // 300
		{
			int err; // 307
		}
	}
} /* size: 0, variables: 1 */

// <002CAEC5> ../thirdparty/mimalloc/src/prim/unix/prim.c:323
int unix_mmap_fd(void)
{
} /* size: 0 */

// <002CA855> ../thirdparty/mimalloc/src/prim/unix/prim.c:334
// variables: 8
// function calls: 15
void* unix_mmap(void* addr, size_t size, size_t try_alignment, int protect_flags, bool large_only, bool allow_large, bool* is_large)
{
	void* p; // 341
	const int  fd; // 342
	int flags; // 343
	{
		atomic<long unsigned int> large_page_try_ok; // 352
		size_t try_ok; // 353
		{
			int lflags; // 362
			int lfd; // 363
			bool mi_huge_pages_available; // 371
			__atomic_base<long unsigned int>::store(
				__int_type __i,
				memory_order __m);  // 1323
			atomic_store_explicit<long unsigned int>(atomic<long unsigned int>* __a,
								__atomic_val_t __i,
								memory_order __m);  // 401
		}
		__atomic_base<long unsigned int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
							memory_order __m);  // 353
		__atomic_base<long unsigned int>::compare_exchange_strong(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 1380
		atomic_compare_exchange_strong_explicit<long unsigned int>(atomic<long unsigned int>* __a,
										__atomic_val_t* __i1,
										__atomic_val_t __i2,
										memory_order __m1,
										memory_order __m2);  // 359
	}
	_mi_os_has_overcommit(void); // 344
	_mi_os_canuse_large_page(size_t size,
				size_t alignment);  // 351
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 351
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 411
	_mi_os_canuse_large_page(size_t size,
				size_t alignment);  // 411
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 419
} /* size: 0, variables: 3, inline expansions: 9 (433 bytes) */

// <002CA609> ../thirdparty/mimalloc/src/prim/unix/prim.c:437
// variables: 2
// function calls: 2
int _mi_prim_alloc(void* hint_addr, size_t size, size_t try_alignment, bool commit, bool allow_large, bool* is_large, bool* is_zero, void** addr)
{
	const char   __func__; // 59076
	int protect_flags; // 446
	_mi_os_page_size(void); // 438
	_mi_is_power_of_two(uintptr_t x); // 441
} /* size: 0, variables: 2, inline expansions: 2 (4 bytes) */

// <002CA5ED> ../thirdparty/mimalloc/src/prim/unix/prim.c:456
void unix_mprotect_hint(int err)
{
} /* size: 0 */

// <002CA5A1> ../thirdparty/mimalloc/src/prim/unix/prim.c:472
// variable: 1
int _mi_prim_commit(void* start, size_t size, bool* is_zero)
{
	int err; // 479
} /* size: 0, variables: 1 */

// <002CA56F> ../thirdparty/mimalloc/src/prim/unix/prim.c:487
int _mi_prim_reuse(void* start, size_t size)
{
} /* size: 0 */

// <002CA523> ../thirdparty/mimalloc/src/prim/unix/prim.c:495
// variable: 1
int _mi_prim_decommit(void* start, size_t size, bool* needs_recommit)
{
	int err; // 496
} /* size: 0, variables: 1 */

// <002CA203> ../thirdparty/mimalloc/src/prim/unix/prim.c:521
// variables: 3
// function calls: 8
int _mi_prim_reset(void* start, size_t size)
{
	int err; // 522
	atomic<long unsigned int> advice; // 536
	int oadvice; // 537
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 537
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 252
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 538
	__atomic_base<long unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 1323
	atomic_store_explicit<long unsigned int>(atomic<long unsigned int>* __a,
						__atomic_val_t __i,
						memory_order __m);  // 541
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 252
	unix_madvise(void* addr,
			size_t size,
			int advice);  // 542
} /* size: 150, variables: 3, inline expansions: 8 (106 bytes) */

// <002CA1B7> ../thirdparty/mimalloc/src/prim/unix/prim.c:550
// variable: 1
int _mi_prim_protect(void* start, size_t size, bool protect)
{
	int err; // 551
} /* size: 0, variables: 1 */

// <002CA150> ../thirdparty/mimalloc/src/prim/unix/prim.c:570
long int mi_prim_mbind(void* start, long unsigned int len, long unsigned int mode, const long unsigned int* nmask, long unsigned int maxnode, unsigned int flags)
{
} /* size: 0 */

// <002C9F62> ../thirdparty/mimalloc/src/prim/unix/prim.c:580
// variables: 3
// function call: 1
int _mi_prim_alloc_huge_os_pages(void* hint_addr, size_t size, int numa_node, bool* is_zero, void** addr)
{
	bool is_large; // 581
	{
		long unsigned int numa_mask; // 585
		long int err; // 589
		mi_prim_mbind(void* start,
				long unsigned int len,
				long unsigned int mode,
				const long unsigned int* nmask,
				long unsigned int maxnode,
				unsigned int flags);  // 589
	}
} /* size: 242, variables: 1 */

// <002C9F23> ../thirdparty/mimalloc/src/prim/unix/prim.c:615
// variables: 3
size_t _mi_prim_numa_node(void)
{
	long unsigned int node; // 617
	long unsigned int ncpu; // 618
	long int err; // 619
} /* size: 0, variables: 3 */

// <002C9EE1> ../thirdparty/mimalloc/src/prim/unix/prim.c:627
// variables: 2
size_t _mi_prim_numa_node_count(void)
{
	char buf; // 628
	unsigned int node; // 629
} /* size: 0, variables: 2 */

// <002C9EBE> ../thirdparty/mimalloc/src/prim/unix/prim.c:693
// variable: 1
mi_msecs_t _mi_prim_clock_now(void)
{
	timespec t; // 694
} /* size: 0, variables: 1 */

// <002C9E99> ../thirdparty/mimalloc/src/prim/unix/prim.c:738
mi_msecs_t timeval_secs(const timeval* tv)
{
} /* size: 0 */

// <002C9E65> ../thirdparty/mimalloc/src/prim/unix/prim.c:742
// variable: 1
void _mi_prim_process_info(mi_process_info_t* pinfo)
{
	rusage rusage; // 744
} /* size: 0, variables: 1 */

// <002C9E44> ../thirdparty/mimalloc/src/prim/unix/prim.c:803
void _mi_prim_out_stderr(const char* msg)
{
} /* size: 0 */

// <002C9E35> ../thirdparty/mimalloc/src/prim/unix/prim.c:822
char** mi_get_environ(void)
{
} /* size: 0 */

// <002C9C26> ../thirdparty/mimalloc/src/prim/unix/prim.c:826
// variables: 4
// function calls: 6
bool _mi_prim_getenv(const char* name, char* result, size_t result_size)
{
	const size_t  len; // 828
	char** env; // 830
	{
		int i; // 833
		{
			const char* s; // 834
			_mi_strlcpy(char* dest,
					const char* src,
					size_t dest_size);  // 42
			_mi_strlcpy(char* dest,
					const char* src,
					size_t dest_size);  // 837
		}
	}
	_mi_strnlen(const char* s,
			size_t max_len);  // 64
	_mi_strnlen(const char* s,
			size_t max_len);  // 72
	_mi_strlen(const char* s); // 828
	mi_get_environ(void); // 830
} /* size: 312, variables: 2, inline expansions: 4 (187 bytes) */

// <002C98D1> ../thirdparty/mimalloc/src/prim/unix/prim.c:896
// variables: 6
// function calls: 7
bool _mi_prim_random_buf(void* buf, size_t buf_len)
{
	atomic<long unsigned int> no_getrandom; // 905
	int flags; // 913
	int fd; // 917
	size_t count; // 919
	{
		ssize_t ret; // 907
		__atomic_base<long unsigned int>::store(
			__int_type __i,
			memory_order __m);  // 1323
		atomic_store_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_val_t __i,
							memory_order __m);  // 910
	}
	{
		ssize_t ret; // 921
		mi_prim_read(int fd,
				void* buf,
				size_t bufsize);  // 921
	}
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 906
	mi_prim_open(const char* fpath,
			int open_flags);  // 917
	mi_prim_close(int fd); // 929
} /* size: 255, variables: 4, inline expansions: 4 (58 bytes) */

// <002C9883> ../thirdparty/mimalloc/src/prim/unix/prim.c:952
void mi_pthread_done(void* value)
{
} /* size: 17 */

// <002C984F> ../thirdparty/mimalloc/src/prim/unix/prim.c:958
// variable: 1
void _mi_prim_thread_init_auto_done(void)
{
	const char   __func__; // 55026
} /* size: 0, variables: 1 */

// <002C983F> ../thirdparty/mimalloc/src/prim/unix/prim.c:963
void _mi_prim_thread_done_auto_done(void)
{
} /* size: 0 */

// <002C981E> ../thirdparty/mimalloc/src/prim/unix/prim.c:969
void _mi_prim_thread_associate_default_theap(mi_theap_t* theap)
{
} /* size: 0 */

// <002C980A> ../thirdparty/mimalloc/src/prim/unix/prim.c:991
bool _mi_prim_thread_is_in_threadpool(void)
{
} /* size: 0 */

// <002C97FA> ../thirdparty/mimalloc/src/prim/unix/prim.c:995
void _mi_prim_thread_yield(void)
{
} /* size: 0 */

