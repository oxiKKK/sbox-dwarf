
//
// mathlib/cholesky.cpp
//
//	referenced by: libengine2.so
//
//	functions: 17
//

// <06F389D8> mathlib/cholesky.cpp:10
inline float ClampNeg(float a)
{
} /* size: 0 */

// <06F389B7> mathlib/cholesky.cpp:15
inline float SafeSqrt(float a)
{
} /* size: 0 */

// <06F38996> mathlib/cholesky.cpp:20
inline float SafeRecip(float a)
{
} /* size: 0 */

// <06F38CB5> mathlib/cholesky.cpp:25
void Cholesky3x3_t::IsValid()
{
} /* size: 0 */

// <06F3884A> mathlib/cholesky.cpp:32
// variable: 1
// function calls: 5
void SimdCholesky3x3_t::IsValid()
{
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 2157
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 2157
	IsAllGreaterThan<>(const fltx4& a,
				const fltx4& b);  // 34
} /* size: 0, inline expansions: 4 (0 bytes) */

// <06F387A4> mathlib/cholesky.cpp:37
// variable: 1
// function calls: 2
void SimdCholesky3x3_t::GetValidMask()
{
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 39
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06F38572> mathlib/cholesky.cpp:44
// function calls: 10
void Cholesky3x3_t::Init(float a00, float a10, float a11, float a20, float a21, float a22)
{
	SafeSqrt(float a); // 49
	SafeRecip(float a); // 49
	Sqr(float f); // 51
	SafeSqrt(float a); // 51
	SafeRecip(float a); // 51
	Sqr(float f); // 54
	Sqr(float f); // 54
	SafeSqrt(float a); // 54
	SafeRecip(float a); // 54
	Cholesky3x3_t::IsValid(); // 69
} /* size: 527, inline expansions: 10 (371 bytes) */

// <06F38535> mathlib/cholesky.cpp:72
void Cholesky3x3_t::FillLeft(matrix3x4_t& l)
{
} /* size: 0 */

// <06F384F8> mathlib/cholesky.cpp:82
void Cholesky3x3_t::FillRight(matrix3x4_t& r)
{
} /* size: 0 */

// <06F38478> mathlib/cholesky.cpp:94
// variable: 1
// function call: 1
void Cholesky3x3_t::SolveLeft(const Vector& b)
{
	Vector result; // 96
	Vector::Vector(); // 96
} /* size: 97, variables: 1, inline expansions: 1 (0 bytes) */

// <06F383F7> mathlib/cholesky.cpp:103
// variable: 1
// function call: 1
void Cholesky3x3_t::SolveRight(const Vector& b)
{
	Vector result; // 105
	Vector::Vector(); // 105
} /* size: 93, variables: 1, inline expansions: 1 (0 bytes) */

// <06F37ABA> mathlib/cholesky.cpp:115
// variables: 18
// function calls: 39
void SimdCholesky3x3_t::Init(const fltx4& a00, const fltx4& a10, const fltx4& a11, const fltx4& a20, const fltx4& a21, const fltx4& a22)
{
	{
		fltx4 retVal; // 2369
		_mm_rsqrt_ps(__m128 __A); // 2370
	}
	ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2409
	ReciprocalSqrtSIMD<>(const fltx4& a); // 117
	{
		fltx4 retVal; // 2369
		_mm_rsqrt_ps(__m128 __A); // 2370
	}
	ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2409
	ReciprocalSqrtSIMD<>(const fltx4& a); // 119
	{
		fltx4 retVal; // 2369
		_mm_rsqrt_ps(__m128 __A); // 2370
	}
	ReciprocalSqrtEstSIMD<>(const fltx4& a); // 2406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2409
	ReciprocalSqrtSIMD<>(const fltx4& a); // 122
} /* size: 0, inline expansions: 21 (0 bytes) */

// <06F38CDE> mathlib/cholesky.cpp:127
// variable: 1
// function call: 1
void SimdCholesky3x3_t::SolveLeft(const FourVectors& b)
{
	FourVectors result; // 129
	FourVectors::FourVectors(); // 129
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06F37A88> mathlib/cholesky.cpp:127
// variable: 1
void SimdCholesky3x3_t::SolveLeft(const FourVectors& b)
{
	FourVectors result; // 129
} /* size: 0, variables: 1 */

// <06F38D45> mathlib/cholesky.cpp:136
// variable: 1
// function call: 1
void SimdCholesky3x3_t::SolveRight(const FourVectors& b)
{
	FourVectors result; // 138
	FourVectors::FourVectors(); // 138
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06F37A56> mathlib/cholesky.cpp:136
// variable: 1
void SimdCholesky3x3_t::SolveRight(const FourVectors& b)
{
	FourVectors result; // 138
} /* size: 0, variables: 1 */

// <06F3795B> mathlib/cholesky.cpp:145
// function calls: 4
void SimdCholesky3x3_t::Solve(const FourVectors& rhs)
{
	FourVectors::FourVectors(); // 129
	SimdCholesky3x3_t::SolveLeft(
			const FourVectors& b);  // 150
	FourVectors::FourVectors(); // 138
	SimdCholesky3x3_t::SolveRight(
			const FourVectors& b);  // 150
} /* size: 0, inline expansions: 4 (0 bytes) */

