
//
// tier0/tier0_stdlib.cpp
//
//	referenced by: libtier0.so
//
//	functions: 88
//	struct: 1
//

// <005D8A5E> tier0/tier0_stdlib.cpp:94
int V_tier0_memcmp(const void* buf1, const void* buf2, size_t count)
{
} /* size: 9 */

// <005D898F> tier0/tier0_stdlib.cpp:99
// function call: 1
void* V_tier0_memcpy(void* dest, const void* src, size_t count)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 101
} /* size: 9, inline expansions: 1 (5 bytes) */

// <005D88C0> tier0/tier0_stdlib.cpp:104
// function call: 1
void* V_tier0_memmove(void* dest, const void* src, size_t count)
{
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 106
} /* size: 9, inline expansions: 1 (5 bytes) */

// <005D87F3> tier0/tier0_stdlib.cpp:109
// function call: 1
void* V_tier0_memset(void* dest, int c, size_t count)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 111
} /* size: 9, inline expansions: 1 (5 bytes) */

// <005D856F> tier0/tier0_stdlib.cpp:115
// variables: 6
// function calls: 3
void V_CopyMemory3D(void* pDest, const void* pSrc, int nNumCols, int nNumRows, int nNumSlices, int nSrcBytesPerRow, int nSrcBytesPerSlice, int nDestBytesPerRow, int nDestBytesPerSlice)
{
	{
		uint8* pDestAdr; // 122
		const uint8* pSrcAdr; // 123
		{
			int n2DSize; // 127
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 137
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 130
		}
		{
			int nRowCtr; // 148
			const uint8* pSrcRow; // 149
			uint8* pDestRow; // 150
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 153
		}
	}
} /* size: 316 */

// <005D84D5> tier0/tier0_stdlib.cpp:180
FILE* V_Get_stdin(void)
{
} /* size: 15 */

// <005D84B4> tier0/tier0_stdlib.cpp:185
FILE* V_Get_stdout(void)
{
} /* size: 15 */

// <005D8446> tier0/tier0_stdlib.cpp:195
void V_clearerr(FILE* _File)
{
} /* size: 9 */

// <005D83A6> tier0/tier0_stdlib.cpp:205
int V_feof(FILE* _File)
{
} /* size: 9 */

// <005D8356> tier0/tier0_stdlib.cpp:210
int V_ferror(FILE* _File)
{
} /* size: 9 */

// <005D82B6> tier0/tier0_stdlib.cpp:220
int V_fgetc(FILE* stream)
{
} /* size: 9 */

// <005D81E3> tier0/tier0_stdlib.cpp:225
// function call: 1
char* V_fgets(char* str, int n, FILE* stream)
{
	fgets(char* __s,
		int __n,
		FILE* __stream);  // 227
} /* size: 9, inline expansions: 1 (5 bytes) */

// <005D8193> tier0/tier0_stdlib.cpp:230
int V_fileno(FILE* _File)
{
} /* size: 9 */

// <005D8167> tier0/tier0_stdlib.cpp:235
FILE* V_fopen(const char* filename, const char* mode)
{
} /* size: 0 */

// <005D80D1> tier0/tier0_stdlib.cpp:251
FILE* V_fdopen(int nFileDescriptor, const char* mode)
{
} /* size: 9 */

// <005D7F7E> tier0/tier0_stdlib.cpp:266
int V_fputc(int c, FILE* stream)
{
} /* size: 9 */

// <005D7F10> tier0/tier0_stdlib.cpp:271
int V_fputs(const char* str, FILE* stream)
{
} /* size: 9 */

// <005D7CE6> tier0/tier0_stdlib.cpp:286
// variables: 2
int V_fscanf(FILE* _File, const char* _Format, ...)
{
	va_list l; // 288
	int len; // 291
} /* size: 179, variables: 2 */

// <005D7BD2> tier0/tier0_stdlib.cpp:301
int V_fseeki64(FILE* _File, int64 _Offset, int _Origin)
{
} /* size: 9 */

// <005D7B2E> tier0/tier0_stdlib.cpp:317
int64 V_ftelli64(FILE* _File)
{
} /* size: 9 */

// <005D7994> tier0/tier0_stdlib.cpp:338
int V_setvbuf(FILE* stream, char* buffer, int mode, size_t size)
{
} /* size: 9 */

// <005D78BB> tier0/tier0_stdlib.cpp:343
// function call: 1
int V_vfprintf(FILE* stream, const char* format, typedef __va_list_tag __va_list_tag* argptr)
{
	vfprintf(FILE* __stream,
		const char* __fmt,
		typedef __va_list_tag __va_list_tag* __ap);  // 345
} /* size: 20, inline expansions: 1 (16 bytes) */

// <005D786B> tier0/tier0_stdlib.cpp:362
int VCRT_isalpha(int c)
{
} /* size: 9 */

// <005D781B> tier0/tier0_stdlib.cpp:367
int VCRT_isalnum(int c)
{
} /* size: 9 */

// <005D77E1> tier0/tier0_stdlib.cpp:372
int VCRT_isdigit(int c)
{
} /* size: 16 */

// <005D7791> tier0/tier0_stdlib.cpp:377
int VCRT_isprint(int c)
{
} /* size: 9 */

// <005D7741> tier0/tier0_stdlib.cpp:382
int VCRT_toupper(int c)
{
} /* size: 9 */

// <005D76F1> tier0/tier0_stdlib.cpp:387
int VCRT_tolower(int c)
{
} /* size: 9 */

// <005D76C0> tier0/tier0_stdlib.cpp:392
void V_abort(void)
{
} /* size: 13 */

// <005D7343> tier0/tier0_stdlib.cpp:452
char* V_strtok(char* _String, const char* _Delimiter)
{
} /* size: 9 */

// <005D72D0> tier0/tier0_stdlib.cpp:465
int V_mkstemps(char* szTemplate, int suffixlen)
{
} /* size: 11 */

// <005D7246> tier0/tier0_stdlib.cpp:470
int V_mkostemps(char* szTemplate, int suffixlen, int flags)
{
} /* size: 9 */

// <005D4F15> tier0/tier0_stdlib.cpp:538
// member variable: 1
// struct size: 200
struct _jmp_buf_holder {
	jmp_buf buf; /* 0 200 */
};

// <005D71F4> tier0/tier0_stdlib.cpp:540
int V_setjmp(jmp_buf_holder* env)
{
} /* size: 19 */

// <005D7184> tier0/tier0_stdlib.cpp:545
void V_longjmp(jmp_buf_holder* env, int value)
{
} /* size: 13 */

// <005D70CE> tier0/tier0_stdlib.cpp:554
// variables: 2
double V_acosd(double x)
{
	const char   __FUNCTION__; // 44861
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 556
	}
} /* size: 0, variables: 1 */

// <005D7002> tier0/tier0_stdlib.cpp:560
// variables: 2
float V_acosf(float x)
{
	const char   __FUNCTION__; // 44861
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 562
	}
} /* size: 0, variables: 1 */

// <005D6FB0> tier0/tier0_stdlib.cpp:566
double V_asind(double x)
{
} /* size: 9 */

// <005D6F5E> tier0/tier0_stdlib.cpp:571
float V_asinf(float x)
{
} /* size: 9 */

// <005D6F0C> tier0/tier0_stdlib.cpp:576
double V_atand(double x)
{
} /* size: 9 */

// <005D6EBA> tier0/tier0_stdlib.cpp:581
float V_atanf(float x)
{
} /* size: 9 */

// <005D6E4C> tier0/tier0_stdlib.cpp:586
double V_atan2d(double y, double x)
{
} /* size: 9 */

// <005D6DDE> tier0/tier0_stdlib.cpp:591
float V_atan2f(float y, float x)
{
} /* size: 9 */

// <005D6D8C> tier0/tier0_stdlib.cpp:596
double V_cosd(double x)
{
} /* size: 9 */

// <005D6D52> tier0/tier0_stdlib.cpp:601
double V_tier0_ceild(double x)
{
} /* size: 86 */

// <005D6D18> tier0/tier0_stdlib.cpp:606
float V_tier0_ceilf(float x)
{
} /* size: 76 */

// <005D6CC6> tier0/tier0_stdlib.cpp:611
float V_cosf(float x)
{
} /* size: 9 */

// <005D6C74> tier0/tier0_stdlib.cpp:616
double V_coshd(double x)
{
} /* size: 9 */

// <005D6C22> tier0/tier0_stdlib.cpp:621
float V_coshf(float x)
{
} /* size: 9 */

// <005D6BD0> tier0/tier0_stdlib.cpp:626
double V_expd(double x)
{
} /* size: 9 */

// <005D6B7E> tier0/tier0_stdlib.cpp:631
float V_expf(float x)
{
} /* size: 9 */

// <005D6B2C> tier0/tier0_stdlib.cpp:636
double V_exp2d(double x)
{
} /* size: 9 */

// <005D6ADA> tier0/tier0_stdlib.cpp:641
float V_exp2f(float x)
{
} /* size: 9 */

// <005D6AA0> tier0/tier0_stdlib.cpp:646
double V_tier0_fabsd(double x)
{
} /* size: 13 */

// <005D6A66> tier0/tier0_stdlib.cpp:651
float V_tier0_fabsf(float x)
{
} /* size: 12 */

// <005D6A2C> tier0/tier0_stdlib.cpp:656
double V_tier0_floord(double x)
{
} /* size: 86 */

// <005D69F2> tier0/tier0_stdlib.cpp:661
float V_tier0_floorf(float x)
{
} /* size: 76 */

// <005D6984> tier0/tier0_stdlib.cpp:666
double V_fmodd(double x, double y)
{
} /* size: 79 */

// <005D6916> tier0/tier0_stdlib.cpp:671
float V_fmodf(float x, float y)
{
} /* size: 77 */

// <005D68B8> tier0/tier0_stdlib.cpp:676
// function call: 1
int V_fpclassifyd(double x)
{
	fpclassify(double __x); // 678
} /* size: 99, inline expansions: 1 (72 bytes) */

// <005D684C> tier0/tier0_stdlib.cpp:681
double V_frexpd(double x, int* y)
{
} /* size: 9 */

// <005D67E0> tier0/tier0_stdlib.cpp:686
float V_frexpf(float x, int* y)
{
} /* size: 9 */

// <005D6782> tier0/tier0_stdlib.cpp:691
// function call: 1
int V_isfinited(double x)
{
	isfinite(double __x); // 693
} /* size: 30, inline expansions: 1 (16 bytes) */

// <005D6724> tier0/tier0_stdlib.cpp:696
// function call: 1
int V_isinfd(double x)
{
	isinf(double __x); // 698
} /* size: 26, inline expansions: 1 (8 bytes) */

// <005D66BF> tier0/tier0_stdlib.cpp:701
// function call: 1
int V_isnand(double x)
{
	isnan(double __x); // 703
} /* size: 14, inline expansions: 1 (9 bytes) */

// <005D6651> tier0/tier0_stdlib.cpp:706
double V_hypotd(double x, double y)
{
} /* size: 9 */

// <005D65E3> tier0/tier0_stdlib.cpp:711
float V_hypotf(float x, float y)
{
} /* size: 9 */

// <005D6575> tier0/tier0_stdlib.cpp:716
double V_ldexpd(double x, int exp)
{
} /* size: 9 */

// <005D6507> tier0/tier0_stdlib.cpp:721
float V_ldexpf(float x, int exp)
{
} /* size: 9 */

// <005D64B5> tier0/tier0_stdlib.cpp:726
double V_logd(double x)
{
} /* size: 9 */

// <005D6411> tier0/tier0_stdlib.cpp:736
double V_log2d(double x)
{
} /* size: 9 */

// <005D63BF> tier0/tier0_stdlib.cpp:741
float V_log2f(float x)
{
} /* size: 9 */

// <005D631C> tier0/tier0_stdlib.cpp:754
double V_log10d(double x)
{
} /* size: 9 */

// <005D62CA> tier0/tier0_stdlib.cpp:759
float V_log10f(float x)
{
} /* size: 9 */

// <005D625C> tier0/tier0_stdlib.cpp:764
double V_modfd(double x, double* iptr)
{
} /* size: 9 */

// <005D61EE> tier0/tier0_stdlib.cpp:769
float V_modff(float x, float* iptr)
{
} /* size: 9 */

// <005D6180> tier0/tier0_stdlib.cpp:774
double V_powd(double x, double y)
{
} /* size: 9 */

// <005D60C0> tier0/tier0_stdlib.cpp:784
double V_roundd(double x)
{
} /* size: 9 */

// <005D6000> tier0/tier0_stdlib.cpp:794
double V_remainderd(double n, double d)
{
} /* size: 79 */

// <005D5F92> tier0/tier0_stdlib.cpp:799
float V_remainderf(float n, float d)
{
} /* size: 77 */

// <005D5F40> tier0/tier0_stdlib.cpp:804
double V_sind(double x)
{
} /* size: 9 */

// <005D5EBA> tier0/tier0_stdlib.cpp:809
void V_sincosd(double radians, double* sine, double* cosine)
{
} /* size: 63 */

// <005D5E34> tier0/tier0_stdlib.cpp:819
void V_sincosf(float radians, float* sine, float* cosine)
{
} /* size: 63 */

// <005D5DE2> tier0/tier0_stdlib.cpp:829
float V_sinf(float x)
{
} /* size: 9 */

// <005D5D90> tier0/tier0_stdlib.cpp:834
double V_sinhd(double x)
{
} /* size: 9 */

// <005D5D3E> tier0/tier0_stdlib.cpp:839
float V_sinhf(float x)
{
} /* size: 9 */

// <005D5CF6> tier0/tier0_stdlib.cpp:844
double V_tier0_sqrtd(double x)
{
} /* size: 24 */

// <005D5CAE> tier0/tier0_stdlib.cpp:849
float V_tier0_sqrtf(float x)
{
} /* size: 23 */

// <005D5C0A> tier0/tier0_stdlib.cpp:859
float V_tanf(float x)
{
} /* size: 9 */

