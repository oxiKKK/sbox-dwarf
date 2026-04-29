
//
// mathlib/spherical.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 12
//

// <05A90EE0> mathlib/spherical.cpp:53
// variables: 7
float AssociatedLegendrePolynomial(int nL, int nM, float flX)
{
	float flPmm; // 56
	float flPmmp1; // 69
	float flPll; // 72
	{
		float flSomX2; // 59
		float flFact; // 60
		{
			int i; // 61
		}
	}
	{
		int nLL; // 73
	}
} /* size: 0, variables: 3 */

// <05A90EAB> mathlib/spherical.cpp:82
// variable: 1
float SHNormalizationFactor(int nL, int nM)
{
	double flTemp; // 84
} /* size: 0, variables: 1 */

// <05A90762> mathlib/spherical.cpp:109
// variables: 5
// function calls: 11
float SphericalHarmonic(int nL, int nM, const Vector& vecDirection)
{
	const char   __FUNCTION__; // 41864
	float flPhi; // 113
	float flTheta; // 114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 111
	SHNormalizationFactor(int nL,
				int nM);  // 93
	SHNormalizationFactor(int nL,
				int nM);  // 96
	SHNormalizationFactor(int nL,
				int nM);  // 100
	SphericalHarmonic(int nL,
				int nM,
				float flTheta,
				float flPhi,
				float flCosTheta);  // 90
	{
		int nLL; // 73
	}
	AssociatedLegendrePolynomial(int nL,
					int nM,
					float flX);  // 93
	SphericalHarmonic(int nL,
				int nM,
				float flTheta,
				float flPhi,
				float flCosTheta);  // 116
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <01CF1C63> mathlib/spherical.cpp:109
// variables: 5
// function calls: 11
float SphericalHarmonic(int nL, int nM, const Vector& vecDirection)
{
	const char   __FUNCTION__; // 40764
	float flPhi; // 113
	float flTheta; // 114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 111
	SHNormalizationFactor(int nL,
				int nM);  // 93
	SHNormalizationFactor(int nL,
				int nM);  // 96
	SHNormalizationFactor(int nL,
				int nM);  // 100
	SphericalHarmonic(int nL,
				int nM,
				float flTheta,
				float flPhi,
				float flCosTheta);  // 90
	{
		int nLL; // 73
	}
	AssociatedLegendrePolynomial(int nL,
					int nM,
					float flX);  // 93
	SphericalHarmonic(int nL,
				int nM,
				float flTheta,
				float flPhi,
				float flCosTheta);  // 116
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <01B23526> mathlib/spherical.cpp:109
// variables: 5
// function calls: 11
float SphericalHarmonic(int nL, int nM, const Vector& vecDirection)
{
	const char   __FUNCTION__; // 56753
	float flPhi; // 113
	float flTheta; // 114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 111
	SHNormalizationFactor(int nL,
				int nM);  // 93
	SHNormalizationFactor(int nL,
				int nM);  // 96
	SHNormalizationFactor(int nL,
				int nM);  // 100
	SphericalHarmonic(int nL,
				int nM,
				float flTheta,
				float flPhi,
				float flCosTheta);  // 90
	{
		int nLL; // 73
	}
	AssociatedLegendrePolynomial(int nL,
					int nM,
					float flX);  // 93
	SphericalHarmonic(int nL,
				int nM,
				float flTheta,
				float flPhi,
				float flCosTheta);  // 116
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <00A6170C> mathlib/spherical.cpp:109
// variables: 5
// function calls: 11
float SphericalHarmonic(int nL, int nM, const Vector& vecDirection)
{
	const char   __FUNCTION__; // 9490
	float flPhi; // 113
	float flTheta; // 114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 111
	SHNormalizationFactor(int nL,
				int nM);  // 93
	SHNormalizationFactor(int nL,
				int nM);  // 96
	SHNormalizationFactor(int nL,
				int nM);  // 100
	SphericalHarmonic(int nL,
				int nM,
				float flTheta,
				float flPhi,
				float flCosTheta);  // 90
	{
		int nLL; // 73
	}
	AssociatedLegendrePolynomial(int nL,
					int nM,
					float flX);  // 93
	SphericalHarmonic(int nL,
				int nM,
				float flTheta,
				float flPhi,
				float flCosTheta);  // 116
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <035348D7> mathlib/spherical.cpp:119
// variables: 2
void SphericalHarmonicL2(const Vector& vDirection, float* pOutputCoefficients)
{
	const float  c0; // 122
	const float  c1; // 123
} /* size: 0, variables: 2 */

// <03534840> mathlib/spherical.cpp:131
// variables: 5
void SphericalHarmonicL3(const Vector& vDirection, float* pOutputCoefficients)
{
	const float  c0; // 134
	const float  c1; // 135
	const float  c2; // 136
	const float  c3; // 137
	const float  c4; // 138
} /* size: 0, variables: 5 */

// <05A9061A> mathlib/spherical.cpp:153
void SHComputeMultiplyMatrix(const SphericalHarmonicFn_t<2>& f, float* result)
{
} /* size: 0 */

// <01CF19A2> mathlib/spherical.cpp:329
// variables: 4
// function calls: 3
Vector2D UniformDiskConcentric(float fU, float fV)
{
	float fTheta; // 341
	float fR; // 341
	float fSinTheta; // 367
	float fCosTheta; // 367
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 337
	SinCos(float radians,
		float* sine,
		float* cosine);  // 368
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 370
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

// <05A8FE22> mathlib/spherical.cpp:373
// variables: 6
// function calls: 29
Vector2D DiskToConcentricUV(const Vector2D& vDisk)
{
	{
		float x; // 382
		float y; // 383
		float r; // 384
		float sx; // 385
		float sy; // 386
		Vector2D uv; // 388
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 498
		Vector2DLength(const Vector2D& v); // 554
		Vector2D::Length(); // 384
		Vector2D::Vector2D(); // 388
		Vector2DMultiply(const Vector2D& a,
				vec_t b,
				Vector2D& c);  // 702
		Vector2D::Vector2D(); // 701
		Vector2D::operator*(
				float fl);  // 391
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 391
		Vector2D::operator=(
				const Vector2D& vOther);  // 391
		Vector2D::Vector2D(); // 687
		Vector2DAdd(const Vector2D& a,
				const Vector2D& b,
				Vector2D& c);  // 688
		Vector2D::operator+(
				const Vector2D& v);  // 398
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 649
		Vector2DMax(const Vector2D& a,
				const Vector2D& b);  // 400
		Vector2DMultiply(const Vector2D& a,
				vec_t b,
				Vector2D& c);  // 702
		Vector2D::Vector2D(); // 701
		Vector2D::operator*(
				float fl);  // 398
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 640
		Vector2DMin(const Vector2D& a,
				const Vector2D& b);  // 400
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 395
		Vector2D::Vector2D(); // 701
		Vector2DMultiply(const Vector2D& a,
				vec_t b,
				Vector2D& c);  // 702
		Vector2D::operator*(
				float fl);  // 395
		Vector2D::operator=(
				const Vector2D& vOther);  // 395
	}
	Vector2D::operator==(
			const Vector2D& src);  // 375
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 377
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05A8FC3C> mathlib/spherical.cpp:404
// variables: 15
// function call: 1
Vector UniformSphereConcentric(float flR1, float flR2)
{
	float u; // 406
	float v; // 407
	float sign_u; // 409
	float sign_v; // 410
	float sd; // 417
	float r; // 418
	float phi; // 419
	float r2; // 422
	float z; // 423
	float sin_theta; // 424
	float phi2; // 427
	float sp; // 428
	float sin_phi; // 431
	float cp; // 433
	float cos_phi; // 436
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 442
} /* size: 0, variables: 15, inline expansions: 1 (0 bytes) */

