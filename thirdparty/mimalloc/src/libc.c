
//
// thirdparty/mimalloc/src/libc.c
//
//	referenced by: libtier0.so
//
//	functions: 21
//

// <002EFE1D> ../thirdparty/mimalloc/src/libc.c:19
char _mi_toupper(char c)
{
} /* size: 0 */

// <002EFD28> ../thirdparty/mimalloc/src/libc.c:24
// variable: 1
// function calls: 2
int _mi_strnicmp(const char* s, const char* t, size_t n)
{
	const char   __func__; // 44795
	_mi_toupper(char c); // 28
	_mi_toupper(char c); // 28
} /* size: 0, variables: 1, inline expansions: 2 (30 bytes) */

// <002EFCFD> ../thirdparty/mimalloc/src/libc.c:33
bool _mi_streq(const char* s, const char* t)
{
} /* size: 0 */

// <002EFCC6> ../thirdparty/mimalloc/src/libc.c:42
void _mi_strlcpy(char* dest, const char* src, size_t dest_size)
{
} /* size: 0 */

// <002EFC8F> ../thirdparty/mimalloc/src/libc.c:53
void _mi_strlcat(char* dest, const char* src, size_t dest_size)
{
} /* size: 0 */

// <002EFC56> ../thirdparty/mimalloc/src/libc.c:64
// variable: 1
size_t _mi_strnlen(const char* s, size_t max_len)
{
	size_t len; // 66
} /* size: 0, variables: 1 */

// <002EFC35> ../thirdparty/mimalloc/src/libc.c:71
size_t _mi_strlen(const char* s)
{
} /* size: 0 */

// <002EFA9A> ../thirdparty/mimalloc/src/libc.c:75
// variables: 4
// function calls: 5
char* _mi_strnstr(char* s, size_t max_len, const char* pat)
{
	const size_t  m; // 78
	const size_t  n; // 79
	{
		size_t start; // 80
		{
			size_t i; // 81
		}
	}
	_mi_strnlen(const char* s,
			size_t max_len);  // 64
	_mi_strnlen(const char* s,
			size_t max_len);  // 78
	_mi_strnlen(const char* s,
			size_t max_len);  // 64
	_mi_strnlen(const char* s,
			size_t max_len);  // 72
	_mi_strlen(const char* s); // 79
} /* size: 205, variables: 2, inline expansions: 5 (207 bytes) */

// <002EFA5F> ../thirdparty/mimalloc/src/libc.c:98
bool _mi_getenv(const char* name, char* result, size_t result_size)
{
} /* size: 0 */

// <002EFA18> ../thirdparty/mimalloc/src/libc.c:112
// variables: 3
bool _mi_atomic_once_enter(mi_atomic_once_t* once)
{
	const uintptr_t  once_tid; // 113
	const mi_threadid_t  current_tid; // 117
	uintptr_t expected; // 123
} /* size: 0, variables: 3 */

// <002EF9F3> ../thirdparty/mimalloc/src/libc.c:133
void _mi_atomic_once_release(mi_atomic_once_t* once)
{
} /* size: 0 */

// <002EF9B9> ../thirdparty/mimalloc/src/libc.c:154
// variable: 1
void mi_outc(char c, char** out, char* end)
{
	char* p; // 155
} /* size: 0, variables: 1 */

// <002EF97F> ../thirdparty/mimalloc/src/libc.c:161
// variable: 1
void mi_outs(const char* s, char** out, char* end)
{
	char* p; // 163
} /* size: 0, variables: 1 */

// <002EF92B> ../thirdparty/mimalloc/src/libc.c:170
// variables: 2
void mi_out_fill(char fill, size_t len, char** out, char* end)
{
	char* p; // 171
	{
		size_t i; // 172
	}
} /* size: 0, variables: 1 */

// <002EF8C5> ../thirdparty/mimalloc/src/libc.c:178
// variables: 2
void mi_out_alignright(char fill, char* start, size_t len, size_t extra, char* end)
{
	{
		size_t i; // 182
	}
	{
		size_t i; // 186
	}
} /* size: 0 */

// <002EF681> ../thirdparty/mimalloc/src/libc.c:192
// variables: 5
// function calls: 4
void mi_out_num(uintmax_t x, size_t base, char prefix, char** out, char* end)
{
	{
		char* start; // 200
		size_t len; // 209
		{
			char digit; // 202
			mi_outc(char c,
				char** out,
				char* end);  // 203
		}
		{
			size_t i; // 211
			{
				char c; // 212
			}
		}
		mi_outc(char c,
			char** out,
			char* end);  // 207
	}
	mi_outc(char c,
		char** out,
		char* end);  // 195
	mi_outc(char c,
		char** out,
		char* end);  // 196
} /* size: 260, inline expansions: 2 (34 bytes) */

// <002EF55F> ../thirdparty/mimalloc/src/libc.c:222
// variables: 17
int _mi_vsnprintf(char* buf, size_t bufsize, const char* fmt, typedef __va_list_tag __va_list_tag* args)
{
	const char* end; // 225
	const char* in; // 226
	char* out; // 227
	const char   __func__; // 759
	{
		char c; // 230
		{
			char fill; // 250
			size_t width; // 251
			char numtype; // 252
			char numplus; // 253
			bool alignright; // 254
			char* start; // 271
			const size_t  len; // 331
			{
				const char* s; // 277
			}
			{
				uintmax_t x; // 282
				{
					const void* p; // 291
				}
			}
			{
				intmax_t x; // 306
				char pre; // 312
			}
		}
	}
} /* size: 0, variables: 4 */

// <002EF436> ../thirdparty/mimalloc/src/libc.c:345
// variables: 2
// function call: 1
int _mi_snprintf(char* buf, size_t buflen, const char* fmt, ...)
{
	va_list args; // 346
	const int  written; // 348
	_mi_vsnprintf(char* buf,
			size_t bufsize,
			const char* fmt,
			typedef __va_list_tag __va_list_tag* args);  // 348
} /* size: 201, variables: 2, inline expansions: 1 (35 bytes) */

// <002EF418> ../thirdparty/mimalloc/src/libc.c:457
size_t mi_byte_sum64(uint64_t x)
{
} /* size: 0 */

// <002EF3FA> ../thirdparty/mimalloc/src/libc.c:464
size_t mi_popcount_generic64(uint64_t x)
{
} /* size: 0 */

// <002EF365> ../thirdparty/mimalloc/src/libc.c:471
// function calls: 2
size_t _mi_popcount_generic(size_t x)
{
	mi_byte_sum64(uint64_t x); // 468
	mi_popcount_generic64(uint64_t x); // 474
} /* size: 0, inline expansions: 2 (0 bytes) */

