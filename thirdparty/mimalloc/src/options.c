
//
// thirdparty/mimalloc/src/options.c
//
//	referenced by: libtier0.so
//
//	functions: 47
//

// <002EF343> ../thirdparty/mimalloc/src/options.c:20
int mi_version(void)
{
} /* size: 0 */

// <002EF325> ../thirdparty/mimalloc/src/options.c:185
bool mi_option_has_size_in_kib(mi_option_t option)
{
} /* size: 0 */

// <002EF2EE> ../thirdparty/mimalloc/src/options.c:190
// variables: 3
void _mi_options_init(void)
{
	{
		int i; // 192
		{
			mi_option_t option; // 193
			long int l; // 194
		}
	}
} /* size: 0 */

// <002EF2DF> ../thirdparty/mimalloc/src/options.c:209
void _mi_options_post_init(void)
{
} /* size: 0 */

// <002EF105> ../thirdparty/mimalloc/src/options.c:217
// variables: 7
void mi_options_print_out(mi_output_fun* out, void* arg)
{
	const int  vermajor; // 220
	const int  verminor; // 221
	const int  verpatch; // 222
	{
		int i; // 238
		{
			mi_option_t option; // 239
			long int l; // 240
			mi_option_desc_t* desc; // 241
		}
	}
} /* size: 271, variables: 3 */

// <002EF0F9> ../thirdparty/mimalloc/src/options.c:257
void mi_options_print(void)
{
} /* size: 0 */

// <002EF0BC> ../thirdparty/mimalloc/src/options.c:261
// variables: 2
long int _mi_option_get_fast(mi_option_t option)
{
	const char   __func__; // 5857
	mi_option_desc_t* desc; // 263
} /* size: 0, variables: 2 */

// <002EF083> ../thirdparty/mimalloc/src/options.c:270
// variables: 2
long int mi_option_get(mi_option_t option)
{
	const char   __func__; // 759
	mi_option_desc_t* desc; // 273
} /* size: 0, variables: 2 */

// <002EF03D> ../thirdparty/mimalloc/src/options.c:281
// variable: 1
long int mi_option_get_clamp(mi_option_t option, long int min, long int max)
{
	long int x; // 282
} /* size: 0, variables: 1 */

// <002EF004> ../thirdparty/mimalloc/src/options.c:286
// variables: 2
size_t mi_option_get_size(mi_option_t option)
{
	const long int  x; // 287
	size_t size; // 288
} /* size: 0, variables: 2 */

// <002EEE9A> ../thirdparty/mimalloc/src/options.c:297
// variables: 2
// function calls: 2
void mi_option_set(mi_option_t option, long int value)
{
	const char   __func__; // 759
	mi_option_desc_t* desc; // 300
	_mi_option_get_fast(mi_option_t option); // 308
	_mi_option_get_fast(mi_option_t option); // 305
} /* size: 0, variables: 2, inline expansions: 2 (53 bytes) */

// <002EEE57> ../thirdparty/mimalloc/src/options.c:313
// variables: 2
void mi_option_set_default(mi_option_t option, long int value)
{
	const char   __func__; // 15154
	mi_option_desc_t* desc; // 316
} /* size: 0, variables: 2 */

// <002EEE36> ../thirdparty/mimalloc/src/options.c:322
bool mi_option_is_enabled(mi_option_t option)
{
} /* size: 0 */

// <002EEE0B> ../thirdparty/mimalloc/src/options.c:326
void mi_option_set_enabled(mi_option_t option, bool enable)
{
} /* size: 0 */

// <002EED66> ../thirdparty/mimalloc/src/options.c:330
// function call: 1
void mi_option_set_enabled_default(mi_option_t option, bool enable)
{
	mi_option_set_default(mi_option_t option,
				long int value);  // 331
} /* size: 0, inline expansions: 1 (0 bytes) */

// <002EECDB> ../thirdparty/mimalloc/src/options.c:334
// function call: 1
void mi_option_enable(mi_option_t option)
{
	mi_option_set_enabled(mi_option_t option,
				bool enable);  // 335
} /* size: 0, inline expansions: 1 (0 bytes) */

// <002EEC50> ../thirdparty/mimalloc/src/options.c:338
// function call: 1
void mi_option_disable(mi_option_t option)
{
	mi_option_set_enabled(mi_option_t option,
				bool enable);  // 339
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0033BA26> ../thirdparty/mimalloc/src/options.c:342
// function calls: 2
void mi_out_stderr(const char* msg, void* arg)
{
	_mi_prim_out_stderr(const char* msg); // 345
	mi_out_stderr(const char* msg,
			void* arg);  // 342
} /* size: 0, inline expansions: 2 (0 bytes) */

// <002EEC27> ../thirdparty/mimalloc/src/options.c:342
void mi_out_stderr(const char* msg, void* arg)
{
} /* size: 0 */

// <0033FEC6> ../thirdparty/mimalloc/src/options.c:359
// variables: 2
// function calls: 12
void mi_out_buf(const char* msg, void* arg)
{
	size_t n; // 363
	size_t start; // 366
	__atomic_base<long unsigned int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long unsigned int>(const atomic<long unsigned int>* __a,
						memory_order __m);  // 362
	_mi_strnlen(const char* s,
			size_t max_len);  // 64
	_mi_strnlen(const char* s,
			size_t max_len);  // 72
	_mi_strlen(const char* s); // 363
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 366
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
			size_t n);  // 373
	mi_out_buf(const char* msg,
			void* arg);  // 359
} /* size: 183, variables: 2, inline expansions: 12 (406 bytes) */

// <002EEBDB> ../thirdparty/mimalloc/src/options.c:359
// variables: 3
void mi_out_buf(const char* msg, void* arg)
{
	size_t n; // 363
	size_t start; // 366
	const char   __func__; // 46843
} /* size: 0, variables: 3 */

// <002EEB98> ../thirdparty/mimalloc/src/options.c:376
// variable: 1
void mi_out_buf_flush(mi_output_fun* out, bool no_more_buf, void* arg)
{
	size_t count; // 379
} /* size: 0, variables: 1 */

// <002EEA65> ../thirdparty/mimalloc/src/options.c:392
// function calls: 3
void mi_out_buf_stderr(const char* msg, void* arg)
{
	_mi_prim_out_stderr(const char* msg); // 345
	mi_out_stderr(const char* msg,
			void* arg);  // 342
	mi_out_stderr(const char* msg,
			void* arg);  // 393
} /* size: 80, inline expansions: 3 (103 bytes) */

// <002EEA38> ../thirdparty/mimalloc/src/options.c:408
// variable: 1
mi_output_fun* mi_out_get_default(void** parg)
{
	mi_output_fun* out; // 410
} /* size: 0, variables: 1 */

// <002EE82A> ../thirdparty/mimalloc/src/options.c:414
// function calls: 6
void mi_register_output(mi_output_fun* out, void* arg)
{
	__atomic_base<void::store(
		__pointer_type __p,
		memory_order __m);  // 578
	atomic<void::store(
		__pointer_type __p,
		memory_order __m);  // 1323
	atomic_store_explicit<void*>(atomic<void*>* __a,
					__atomic_val_t __i,
					memory_order __m);  // 416
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 379
	mi_out_buf_flush(mi_output_fun* out,
			bool no_more_buf,
			void* arg);  // 417
} /* size: 0, inline expansions: 6 (0 bytes) */

// <002EE810> ../thirdparty/mimalloc/src/options.c:421
// variable: 1
void mi_add_stderr_output(void)
{
	const char   __func__; // 65207
} /* size: 0, variables: 1 */

// <002EE7ED> ../thirdparty/mimalloc/src/options.c:446
bool mi_recurse_enter_prim(void)
{
} /* size: 44 */

// <002EE7CE> ../thirdparty/mimalloc/src/options.c:452
void mi_recurse_exit_prim(void)
{
} /* size: 25 */

// <002EE7BF> ../thirdparty/mimalloc/src/options.c:456
bool mi_recurse_enter(void)
{
} /* size: 0 */

// <002EE7B4> ../thirdparty/mimalloc/src/options.c:463
void mi_recurse_exit(void)
{
} /* size: 0 */

// <002EE5A3> ../thirdparty/mimalloc/src/options.c:470
// function calls: 6
void _mi_fputs(mi_output_fun* out, void* arg, const char* prefix, const char* message)
{
	mi_recurse_enter(void); // 472
	__atomic_base<void::load(
		memory_order __m);  // 587
	atomic<void::load(
		memory_order __m);  // 1334
	atomic_load_explicit<void*>(const atomic<void*>* __a,
					memory_order __m);  // 409
	mi_out_get_default(void** parg); // 473
	mi_recurse_exit(void); // 476
} /* size: 185, inline expansions: 6 (59 bytes) */

// <0033F606> ../thirdparty/mimalloc/src/options.c:486
// variable: 1
// function calls: 2
void mi_vfprintf(mi_output_fun* out, void* arg, const char* prefix, const char* fmt, typedef __va_list_tag __va_list_tag* args)
{
	char buf; // 487
	_mi_vsnprintf(char* buf,
			size_t bufsize,
			const char* fmt,
			typedef __va_list_tag __va_list_tag* args);  // 490
	mi_recurse_exit(void); // 491
} /* size: 136, variables: 1, inline expansions: 2 (36 bytes) */

// <002EE534> ../thirdparty/mimalloc/src/options.c:486
// variable: 1
void mi_vfprintf(mi_output_fun* out, void* arg, const char* prefix, const char* fmt, typedef __va_list_tag __va_list_tag* args)
{
	char buf; // 487
} /* size: 0, variables: 1 */

// <002EE3E4> ../thirdparty/mimalloc/src/options.c:495
// variable: 1
// function calls: 2
void _mi_fprintf(mi_output_fun* out, void* arg, const char* fmt, ...)
{
	va_list args; // 496
	mi_recurse_enter(void); // 489
	mi_vfprintf(mi_output_fun* out,
			void* arg,
			const char* prefix,
			const char* fmt,
			typedef __va_list_tag __va_list_tag* args);  // 498
} /* size: 234, variables: 1, inline expansions: 2 (96 bytes) */

// <003418ED> ../thirdparty/mimalloc/src/options.c:502
// variable: 1
// function calls: 10
void mi_vfprintf_thread(const char* prefix, const char* fmt, typedef __va_list_tag __va_list_tag* args, void* arg, mi_output_fun* out)
{
	_mi_strnlen(const char* s,
			size_t max_len);  // 64
	_mi_strnlen(const char* s,
			size_t max_len);  // 503
	mi_recurse_enter(void); // 489
	mi_vfprintf(mi_output_fun* out,
			void* arg,
			const char* prefix,
			const char* fmt,
			typedef __va_list_tag __va_list_tag* args);  // 509
	__mi_prim_thread_id(void); // 275
	_mi_prim_thread_id(void); // 223
	_mi_thread_id(void); // 696
	_mi_is_main_thread(void); // 503
	{
		char tprefix; // 504
		mi_recurse_enter(void); // 489
		mi_vfprintf(mi_output_fun* out,
				void* arg,
				const char* prefix,
				const char* fmt,
				typedef __va_list_tag __va_list_tag* args);  // 506
	}
} /* size: 0, inline expansions: 8 (347 bytes) */

// <002EE385> ../thirdparty/mimalloc/src/options.c:502
// variable: 1
void mi_vfprintf_thread(mi_output_fun* out, void* arg, const char* prefix, const char* fmt, typedef __va_list_tag __va_list_tag* args)
{
	{
		char tprefix; // 504
	}
} /* size: 0 */

// <002EE265> ../thirdparty/mimalloc/src/options.c:513
// variable: 1
// function calls: 2
void _mi_raw_message(const char* fmt, ...)
{
	va_list args; // 514
	mi_recurse_enter(void); // 489
	mi_vfprintf(mi_output_fun* out,
			void* arg,
			const char* prefix,
			const char* fmt,
			typedef __va_list_tag __va_list_tag* args);  // 516
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <002EE1CD> ../thirdparty/mimalloc/src/options.c:520
// variable: 1
void _mi_message(const char* fmt, ...)
{
	va_list args; // 521
} /* size: 0, variables: 1 */

// <002EE093> ../thirdparty/mimalloc/src/options.c:527
// variable: 1
// function calls: 2
void _mi_trace_message(const char* fmt, ...)
{
	va_list args; // 529
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 528
} /* size: 0, variables: 1, inline expansions: 2 (116 bytes) */

// <002EDE9D> ../thirdparty/mimalloc/src/options.c:535
// variable: 1
// function calls: 5
void _mi_verbose_message(const char* fmt, ...)
{
	va_list args; // 537
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 536
	mi_recurse_enter(void); // 489
	mi_vfprintf(mi_output_fun* out,
			void* arg,
			const char* prefix,
			const char* fmt,
			typedef __va_list_tag __va_list_tag* args);  // 539
} /* size: 0, variables: 1, inline expansions: 5 (272 bytes) */

// <002EDE74> ../thirdparty/mimalloc/src/options.c:543
void mi_show_error_message(const char* fmt, typedef __va_list_tag __va_list_tag* args)
{
} /* size: 0 */

// <002EDC05> ../thirdparty/mimalloc/src/options.c:551
// variable: 1
// function calls: 7
void _mi_warning_message(const char* fmt, ...)
{
	va_list args; // 556
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 552
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 553
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 554
} /* size: 0, variables: 1, inline expansions: 7 (357 bytes) */

// <002EDB4A> ../thirdparty/mimalloc/src/options.c:564
void _mi_assert_fail(const char* assertion, const char* fname, unsigned int line, const char* func)
{
} /* size: 54 */

// <002EDB2E> ../thirdparty/mimalloc/src/options.c:577
void mi_error_default(int err)
{
} /* size: 0 */

// <002EDA03> ../thirdparty/mimalloc/src/options.c:599
// function calls: 3
void mi_register_error(mi_error_fun* fun, void* arg)
{
	__atomic_base<void::store(
		__pointer_type __p,
		memory_order __m);  // 578
	atomic<void::store(
		__pointer_type __p,
		memory_order __m);  // 1323
	atomic_store_explicit<void*>(atomic<void*>* __a,
					__atomic_val_t __i,
					memory_order __m);  // 601
} /* size: 0, inline expansions: 3 (0 bytes) */

// <002ED651> ../thirdparty/mimalloc/src/options.c:604
// variable: 1
// function calls: 12
void _mi_error_message(int err, const char* fmt, ...)
{
	va_list args; // 606
	mi_option_get(mi_option_t option); // 270
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 544
	mi_option_get(mi_option_t option); // 323
	mi_option_is_enabled(mi_option_t option); // 545
	__atomic_base<long unsigned int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long unsigned int>(atomic<long unsigned int>* __a,
							__atomic_diff_t __i,
							memory_order __m);  // 546
	mi_show_error_message(const char* fmt,
				typedef __va_list_tag __va_list_tag* args);  // 608
	__atomic_base<void::load(
		memory_order __m);  // 587
	atomic<void::load(
		memory_order __m);  // 1334
	atomic_load_explicit<void*>(const atomic<void*>* __a,
					memory_order __m);  // 612
	mi_error_default(int err); // 615
} /* size: 0, variables: 1, inline expansions: 12 (629 bytes) */

// <002ECE01> ../thirdparty/mimalloc/src/options.c:628
// variables: 10
// function calls: 32
void mi_option_init(mi_option_desc_t* desc)
{
	char s; // 630
	char buf; // 631
	bool found; // 634
	const char   __func__; // 59076
	{
		size_t len; // 645
		{
			size_t i; // 646
			_mi_toupper(char c); // 647
		}
		{
			char* end; // 659
			long int value; // 660
			{
				size_t size; // 664
				bool overflow; // 665
				mi_mul_overflow(size_t count,
						size_t size,
						size_t* total);  // 669
				mi_mul_overflow(size_t count,
						size_t size,
						size_t* total);  // 668
				mi_mul_overflow(size_t count,
						size_t size,
						size_t* total);  // 667
			}
		}
		_mi_strnlen(const char* s,
				size_t max_len);  // 64
		_mi_strnlen(const char* s,
				size_t max_len);  // 645
		_mi_streq(const char* s,
				const char* t);  // 33
		_mi_streq(const char* s,
				const char* t);  // 650
		_mi_streq(const char* s,
				const char* t);  // 33
		_mi_streq(const char* s,
				const char* t);  // 650
		_mi_streq(const char* s,
				const char* t);  // 33
		_mi_streq(const char* s,
				const char* t);  // 650
		_mi_streq(const char* s,
				const char* t);  // 33
		_mi_streq(const char* s,
				const char* t);  // 654
		_mi_streq(const char* s,
				const char* t);  // 33
		_mi_streq(const char* s,
				const char* t);  // 654
		_mi_streq(const char* s,
				const char* t);  // 33
		_mi_streq(const char* s,
				const char* t);  // 654
		_mi_streq(const char* s,
				const char* t);  // 33
		_mi_streq(const char* s,
				const char* t);  // 654
		_mi_streq(const char* s,
				const char* t);  // 33
		_mi_streq(const char* s,
				const char* t);  // 650
	}
	_mi_strlcpy(char* dest,
			const char* src,
			size_t dest_size);  // 42
	_mi_strlcpy(char* dest,
			const char* src,
			size_t dest_size);  // 632
	_mi_strlcpy(char* dest,
			const char* src,
			size_t dest_size);  // 42
	_mi_strlcpy(char* dest,
			const char* src,
			size_t dest_size);  // 61
	_mi_strlcat(char* dest,
			const char* src,
			size_t dest_size);  // 53
	_mi_strlcat(char* dest,
			const char* src,
			size_t dest_size);  // 633
	_mi_getenv(const char* name,
			char* result,
			size_t result_size);  // 634
	_mi_strlcpy(char* dest,
			const char* src,
			size_t dest_size);  // 42
	_mi_strlcpy(char* dest,
			const char* src,
			size_t dest_size);  // 636
	_mi_getenv(const char* name,
			char* result,
			size_t result_size);  // 638
} /* size: 0, variables: 4, inline expansions: 10 (770 bytes) */

