
//
// mathlib/mathlib.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 411
//	struct: 1
//

// <059D82AF> mathlib/mathlib.cpp:75
float _sqrtf(float x)
{
} /* size: 0 */

// <059D823F> mathlib/mathlib.cpp:81
// function call: 1
float _rsqrtf(float x)
{
	_sqrtf(float x); // 85
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0052C933> mathlib/mathlib.cpp:94
// variables: 5
// function calls: 33
float VectorNormalize(Vector& vec)
{
	float flLength; // 96
	{
		Vector vRescaled; // 104
		float flScaledLength; // 105
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 104
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 105
		Vector::Vector(); // 1464
		VectorDivide(const Vector& a,
				vec_t b,
				Vector& c);  // 1465
		Vector::operator/(
				float fl);  // 110
		Vector::operator=(
				const Vector& vOther);  // 110
	}
	{
		Vector vRescaled; // 122
		float flScaledLength; // 123
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 122
		VectorDivide(const Vector& a,
				vec_t b,
				Vector& c);  // 1465
		Vector::Vector(); // 1464
		Vector::operator/(
				float fl);  // 124
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 123
		Vector::operator=(
				const Vector& vOther);  // 124
	}
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 96
	Vector::operator/=(
			float fl);  // 116
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <059D79FA> mathlib/mathlib.cpp:134
// variables: 6
// function calls: 3
void _VectorNormalizeFast(Vector& vec)
{
	float radius; // 138
	const char   __FUNCTION__; // 22285
	{
		float iradius; // 147
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		Vector::LengthSqr(); // 153
	}
	{
		float iradius; // 157
		float flRadius2; // 164
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 155
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <02BBEBA8> mathlib/mathlib.cpp:134
// variables: 6
// function calls: 3
void _VectorNormalizeFast(Vector& vec)
{
	float radius; // 138
	const char   __FUNCTION__; // 38832
	{
		float iradius; // 147
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		Vector::LengthSqr(); // 153
	}
	{
		float iradius; // 157
		float flRadius2; // 164
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 155
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <011A2895> mathlib/mathlib.cpp:134
// variables: 6
// function calls: 3
void _VectorNormalizeFast(Vector& vec)
{
	float radius; // 138
	const char   __FUNCTION__; // 60507
	{
		float iradius; // 147
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		Vector::LengthSqr(); // 153
	}
	{
		float iradius; // 157
		float flRadius2; // 164
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 155
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <0052C7D7> mathlib/mathlib.cpp:134
// variables: 6
// function calls: 3
void _VectorNormalizeFast(Vector& vec)
{
	float radius; // 138
	const char   __FUNCTION__; // 40399
	{
		float iradius; // 147
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		Vector::LengthSqr(); // 153
	}
	{
		float iradius; // 157
		float flRadius2; // 164
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 155
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <008873F8> mathlib/mathlib.cpp:134
// variables: 6
// function calls: 3
void _VectorNormalizeFast(Vector& vec)
{
	float radius; // 138
	const char   __FUNCTION__; // 23920
	{
		float iradius; // 147
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		Vector::LengthSqr(); // 153
	}
	{
		float iradius; // 157
		float flRadius2; // 164
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 155
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00854322> mathlib/mathlib.cpp:134
// variables: 6
// function calls: 3
void _VectorNormalizeFast(Vector& vec)
{
	float radius; // 138
	const char   __FUNCTION__; // 37397
	{
		float iradius; // 147
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		Vector::LengthSqr(); // 153
	}
	{
		float iradius; // 157
		float flRadius2; // 164
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 155
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00C50B6A> mathlib/mathlib.cpp:134
// variables: 6
// function calls: 3
void _VectorNormalizeFast(Vector& vec)
{
	float radius; // 138
	const char   __FUNCTION__; // 36962
	{
		float iradius; // 147
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
		}
		Vector::LengthSqr(); // 153
	}
	{
		float iradius; // 157
		float flRadius2; // 164
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 155
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <059D7972> mathlib/mathlib.cpp:173
// variable: 1
// function call: 1
float _InvRSquared(const float* v)
{
	float r2; // 176
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 176
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <059D78AF> mathlib/mathlib.cpp:180
void Vector::Random(vec_t minVal, vec_t maxVal)
{
} /* size: 0 */

// <059D786A> mathlib/mathlib.cpp:194
bool VectorsEqual(const float* v1, const float* v2)
{
} /* size: 0 */

// <011A2090> mathlib/mathlib.cpp:279
// variable: 1
// function call: 1
Vector ComputeMatrixScale(const matrix3x4_t& in)
{
	Vector vScale; // 281
	Vector::Vector(); // 281
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <059D6C4A> mathlib/mathlib.cpp:290
// variables: 3
// function calls: 21
void MatrixOrthogonalize(const matrix3x4_t& in, matrix3x4_t& out)
{
	Vector x; // 292
	Vector y; // 293
	Vector z; // 296
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 292
	Vector::Normalized(); // 292
	Vector::NormalizeInPlace(); // 295
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 293
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 294
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 294
	Vector::operator-=(
			const Vector& v);  // 294
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 296
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 297
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 298
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 299
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 300
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 300
} /* size: 0, variables: 3, inline expansions: 21 (0 bytes) */

// <011A1A73> mathlib/mathlib.cpp:304
// variables: 5
Vector MatrixNormalize(const matrix3x4_t& in, matrix3x4_t& out)
{
	Vector vScale; // 306
	matrix3x4_t norm; // 308
	float flInvScaleX; // 309
	float flInvScaleY; // 310
	float flInvScaleZ; // 311
} /* size: 0, variables: 5 */

// <011A14B9> mathlib/mathlib.cpp:373
// variable: 1
// function calls: 4
void MatrixAngles(const matrix3x4_t& matrix, QAngle& angles, Vector& position, Vector& vScale)
{
	matrix3x4_t norm; // 375
	matrix3x4_t::matrix3x4_t(); // 375
	Vector::operator=(
			const Vector& vOther);  // 376
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 1254
	MatrixAngles(const matrix3x4_t& matrix,
			QAngle& angles,
			Vector& position);  // 377
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <011A1361> mathlib/mathlib.cpp:381
// variables: 2
// function calls: 3
void VectorTransform(const float* in1, const matrix3x4_t& in2, float* out)
{
	const char   __FUNCTION__; // 34181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 385
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 386
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 387
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <006D7AF3> mathlib/mathlib.cpp:381
// variables: 2
// function calls: 3
void VectorTransform(const float* in1, const matrix3x4_t& in2, float* out)
{
	const char   __FUNCTION__; // 18036
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 385
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 386
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 387
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0052B2A3> mathlib/mathlib.cpp:381
// variables: 2
// function calls: 3
void VectorTransform(const float* in1, const matrix3x4_t& in2, float* out)
{
	const char   __FUNCTION__; // 14073
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 385
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 386
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 387
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00885EC4> mathlib/mathlib.cpp:381
// variables: 2
// function calls: 3
void VectorTransform(const float* in1, const matrix3x4_t& in2, float* out)
{
	const char   __FUNCTION__; // 63130
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 385
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 386
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 387
} /* size: 0, variables: 1, inline expansions: 3 (106 bytes) */

// <00852DEE> mathlib/mathlib.cpp:381
// variables: 2
// function calls: 3
void VectorTransform(const float* in1, const matrix3x4_t& in2, float* out)
{
	const char   __FUNCTION__; // 11071
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 385
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 386
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 387
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <011A12F8> mathlib/mathlib.cpp:391
// variable: 1
void VectorITransform(const float* in1, const matrix3x4_t& in2, float* out)
{
	float in1t; // 394
} /* size: 0, variables: 1 */

// <059D5F6C> mathlib/mathlib.cpp:406
// variables: 13
// function calls: 17
VectorAligned VectorRotateSIMD(const VectorAligned in1, const matrix3x4a_t& in2)
{
	fltx4 a0_a1_a2_a3; // 408
	fltx4 b0_b1_b2_b3; // 409
	fltx4 c0_c1_c2_c3; // 410
	fltx4 a0_a1_b0_b1; // 411
	fltx4 a2_a3_b2_b3; // 412
	fltx4 a0_b0_c0_X; // 413
	fltx4 a1_b1_c1_X; // 414
	fltx4 a2_b2_c2_X; // 415
	VectorAligned::operator fltx4(); // 408
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<68>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<68>(const fltx4& a,
			const fltx4& b);  // 411
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<238>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<238>(const fltx4& a,
			const fltx4& b);  // 412
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<200>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<200>(const fltx4& a,
			const fltx4& b);  // 413
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<221>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<221>(const fltx4& a,
			const fltx4& b);  // 414
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<232>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<232>(const fltx4& a,
			const fltx4& b);  // 415
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 416
} /* size: 0, variables: 8, inline expansions: 12 (0 bytes) */

// <011A06B8> mathlib/mathlib.cpp:419
// variables: 21
// function calls: 27
VectorAligned VectorTransformSIMD(const VectorAligned in1, const matrix3x4a_t& in2)
{
	fltx4 fl4InVec; // 421
	fltx4 a0_a1_a2_a3; // 423
	fltx4 b0_b1_b2_b3; // 424
	fltx4 c0_c1_c2_c3; // 425
	fltx4 a0_a1_b0_b1; // 426
	fltx4 a2_a3_b2_b3; // 427
	fltx4 a02_a13_b02_b13; // 428
	fltx4 c0_c1_X_X; // 429
	fltx4 c2_c3_X_X; // 430
	fltx4 c02_c13_X_X; // 431
	fltx4 a02_b02_c02_X; // 432
	fltx4 a13_b13_c13_X; // 433
	VectorAligned::operator fltx4(); // 421
	{
		fltx4 zzww; // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 1415
	}
	SetWSIMD<>(const fltx4& a,
			const fltx4& w);  // 421
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<68>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<68>(const fltx4& a,
			const fltx4& b);  // 426
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<238>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<238>(const fltx4& a,
			const fltx4& b);  // 427
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<4>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<4>(const fltx4& a,
			const fltx4& b);  // 429
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<14>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<14>(const fltx4& a,
			const fltx4& b);  // 430
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<200>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<200>(const fltx4& a,
			const fltx4& b);  // 432
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<221>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<221>(const fltx4& a,
			const fltx4& b);  // 433
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 434
} /* size: 0, variables: 12, inline expansions: 15 (0 bytes) */

// <059D5310> mathlib/mathlib.cpp:437
// variables: 14
// function calls: 18
fltx4 TransformVectorByInverseSIMD(fltx4 w, const matrix3x4a_t& mx)
{
	fltx4 tm0; // 439
	fltx4 tm1; // 439
	fltx4 tm2; // 439
	fltx4 xxyy; // 440
	fltx4 vOrigin; // 441
	fltx4 t; // 441
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 439
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 439
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 439
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<255>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<255>(const fltx4& a,
			const fltx4& b);  // 440
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<248>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<248>(const fltx4& a,
			const fltx4& b);  // 441
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 443
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 443
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 443
} /* size: 0, variables: 6, inline expansions: 10 (0 bytes) */

// <0119FC43> mathlib/mathlib.cpp:471
// variable: 1
// function calls: 8
void VectorRotate(const Vector& in1, const Quaternion& in2, Vector& out)
{
	matrix3x4_t matRotate; // 473
	matrix3x4_t::matrix3x4_t(); // 473
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 474
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 453
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 454
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 455
	VectorRotate(const float* in1,
			const matrix3x4_t& in2,
			float* out);  // 1230
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 475
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <0119FBB0> mathlib/mathlib.cpp:480
// variables: 3
void VectorIRotate(const float* in1, const matrix3x4_t& in2, float* out)
{
	float out0; // 485
	float out1; // 486
	float out2; // 487
} /* size: 0, variables: 3 */

// <059D4B18> mathlib/mathlib.cpp:495
// variables: 4
// function calls: 4
QAngle TransformAnglesToLocalSpace(const QAngle& angles, const matrix3x4_t& parentMatrix)
{
	matrix3x4_t angToWorld; // 497
	matrix3x4_t worldToParent; // 497
	matrix3x4_t localMatrix; // 497
	QAngle out; // 502
	matrix3x4_t::matrix3x4_t(); // 497
	matrix3x4_t::matrix3x4_t(); // 497
	matrix3x4_t::matrix3x4_t(); // 497
	QAngle::QAngle(); // 502
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <059D497F> mathlib/mathlib.cpp:508
// variables: 3
// function calls: 3
QAngle TransformAnglesToWorldSpace(const QAngle& angles, const matrix3x4_t& parentMatrix)
{
	matrix3x4_t angToParent; // 510
	matrix3x4_t angToWorld; // 510
	QAngle out; // 513
	matrix3x4_t::matrix3x4_t(); // 510
	matrix3x4_t::matrix3x4_t(); // 510
	QAngle::QAngle(); // 513
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <059D492A> mathlib/mathlib.cpp:518
void MatrixInitializeXYZ(matrix3x4_t& mat, const Vector& vecOrigin, const Vector& vecXAxis, const Vector& vecYAxis, const Vector& vecZAxis)
{
} /* size: 0 */

// <059D48D5> mathlib/mathlib.cpp:526
void MatrixInitializeFLU(matrix3x4_t& mat, const Vector& vecOrigin, const Vector& vForward, const Vector& vLeft, const Vector& vUp)
{
} /* size: 0 */

// <0119F62D> mathlib/mathlib.cpp:534
// function calls: 4
void MatrixCopy(const matrix3x4_t& in, matrix3x4_t& out)
{
	matrix3x4_t::Base(); // 537
	matrix3x4_t::Base(); // 537
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 537
} /* size: 0, inline expansions: 4 (0 bytes) */

// <059D469E> mathlib/mathlib.cpp:543
// variables: 2
// function calls: 2
bool MatricesAreEqual(const matrix3x4_t& src1, const matrix3x4_t& src2, float flTolerance)
{
	{
		int i; // 545
		{
			int j; // 547
			matrix3x4_t::operator[](
					int i);  // 549
			matrix3x4_t::operator[](
					int i);  // 549
		}
	}
} /* size: 0 */

// <059D45AA> mathlib/mathlib.cpp:560
// variables: 2
// function calls: 2
bool RotationsAreEqual(const matrix3x4_t& src1, const matrix3x4_t& src2, float flTolerance)
{
	{
		int i; // 562
		{
			int j; // 564
			matrix3x4_t::operator[](
					int i);  // 566
			matrix3x4_t::operator[](
					int i);  // 566
		}
	}
} /* size: 0 */

// <02BBB4F5> mathlib/mathlib.cpp:575
// variable: 1
// function calls: 9
void MatrixInvertTR(const matrix3x4_t& in, matrix3x4_t& out)
{
	float tmp; // 602
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 607
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 608
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 609
	swap<float>(float& __a,
			float& __b);  // 19
	V_swap<float>(float& x,
			float& y);  // 581
	swap<float>(float& __a,
			float& __b);  // 19
	V_swap<float>(float& x,
			float& y);  // 582
	swap<float>(float& __a,
			float& __b);  // 19
	V_swap<float>(float& x,
			float& y);  // 583
} /* size: 318, variables: 1, inline expansions: 9 (220 bytes) */

// <0119F159> mathlib/mathlib.cpp:612
// variables: 2
void MatrixInvert(const matrix3x4_t& in, matrix3x4_t& out)
{
	float flScaleSqr; // 616
	float flInvScaleSqr; // 625
} /* size: 0, variables: 2 */

// <059D4298> mathlib/mathlib.cpp:631
inline float Det(const matrix3x4_t& xform)
{
} /* size: 0 */

// <059D3704> mathlib/mathlib.cpp:636
// variables: 9
// function calls: 43
bool MatrixInvertGeneral(const matrix3x4_t& in, matrix3x4_t& out)
{
	float flDet; // 638
	float flooDet; // 644
	Vector vAxisX; // 645
	Vector vAxisY; // 646
	Vector vAxisZ; // 647
	Vector vOutRowX; // 649
	Vector vOutRowY; // 650
	Vector vOutRowZ; // 651
	Vector vOrigin; // 655
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 633
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 633
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 633
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 633
	DotProduct(const Vector& a,
			const Vector& b);  // 633
	Det(const matrix3x4_t& xform); // 638
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1315
	Vector::Vector(); // 1314
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2);  // 2742
	matrix3x4_t::RotateVector(
			const Vector& v0);  // 655
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 645
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 646
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 647
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 649
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 649
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 650
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 650
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 651
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 651
	matrix3x4_t::SetRow(
		int nRow,
		const Vector& vRow);  // 652
	matrix3x4_t::SetRow(
		int nRow,
		const Vector& vRow);  // 653
	matrix3x4_t::SetRow(
		int nRow,
		const Vector& vRow);  // 654
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 655
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 655
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 656
} /* size: 602, variables: 9, inline expansions: 43 (627 bytes) */

// <0119E545> mathlib/mathlib.cpp:660
// variable: 1
int VectorCompare(const float* v1, const float* v2)
{
	int i; // 663
} /* size: 0, variables: 1 */

// <006D4BE7> mathlib/mathlib.cpp:676
// variables: 3
void CrossProduct(const float* v1, const float* v2, float* cross)
{
	const char   __FUNCTION__; // 25623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 679
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
} /* size: 0, variables: 1 */

// <00528397> mathlib/mathlib.cpp:676
// variables: 3
void CrossProduct(const float* v1, const float* v2, float* cross)
{
	const char   __FUNCTION__; // 21660
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 679
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
} /* size: 0, variables: 1 */

// <00882FB8> mathlib/mathlib.cpp:676
// variables: 3
void CrossProduct(const float* v1, const float* v2, float* cross)
{
	const char   __FUNCTION__; // 5181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 679
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
} /* size: 0, variables: 1 */

// <059D3572> mathlib/mathlib.cpp:687
void MatrixVectorsFLU(const matrix3x4_t& matrix, Vector* pForward, Vector* pLeft, Vector* pUp)
{
} /* size: 0 */

// <059D3285> mathlib/mathlib.cpp:697
// function calls: 10
void MatrixVectors(const matrix3x4_t& matrix, Vector* pForward, Vector* pRight, Vector* pUp)
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 699
	Vector::operator=(
			const Vector& vOther);  // 699
	Vector::operator*=(
			float fl);  // 702
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 700
	Vector::operator=(
			const Vector& vOther);  // 700
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 701
	Vector::operator=(
			const Vector& vOther);  // 701
} /* size: 0, inline expansions: 10 (0 bytes) */

// <02BBA3E9> mathlib/mathlib.cpp:705
// variable: 1
void VectorVectorsFLU(const Vector& vForward, Vector& vLeft, Vector& vUp)
{
	{
		Vector vFakeUp; // 721
	}
} /* size: 0 */

// <02BBA1C8> mathlib/mathlib.cpp:733
// variable: 1
// function calls: 6
void VectorVectors(const Vector& forward, Vector& right, Vector& up)
{
	Vector tmp; // 736
	Vector::Vector(); // 736
	Vector::operator[](
			int i);  // 740
	Vector::operator[](
			int i);  // 740
	Vector::operator[](
			int i);  // 746
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 753
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 755
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <059D2CC8> mathlib/mathlib.cpp:760
// function calls: 11
void BuildBasisFLU(Vector& vecDir, Vector& vecLeft, Vector& vecUp)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 764
	DotProduct(const Vector& a,
			const Vector& b);  // 765
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 771
	Vector::operator=(
			const Vector& vOther);  // 771
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 772
	Vector::operator=(
			const Vector& vOther);  // 772
	Vector::NormalizeInPlace(); // 774
	Vector::NormalizeInPlace(); // 775
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 768
} /* size: 0, inline expansions: 11 (0 bytes) */

// <02BB9DEB> mathlib/mathlib.cpp:780
// variables: 3
void MakeOrthonormalBasis(const Vector& n, Vector& b1, Vector& b2)
{
	const float  sign; // 786
	const float  a; // 787
	const float  b; // 788
} /* size: 0, variables: 3 */

// <059D28B4> mathlib/mathlib.cpp:809
// variable: 1
// function calls: 11
matrix3x4a_t VectorMatrix(const Vector& vForward)
{
	matrix3x4a_t m; // 811
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 811
	Vector::Vector(); // 801
	Vector::Vector(); // 801
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 804
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 805
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 806
	VectorMatrix(const Vector& vForward,
			matrix3x4_t& matrix);  // 812
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <02BB9716> mathlib/mathlib.cpp:819
// variables: 2
// function calls: 12
void VectorPerpendicularToVector(const Vector& in, Vector* pvecOut)
{
	float flLeft; // 822
	float flDot; // 827
	Vector::operator[](
			int i);  // 822
	Vector::operator[](
			int i);  // 823
	RemapVal(float val,
		float A,
		float B,
		float C,
		float D);  // 823
	Vector::operator[](
			int i);  // 825
	Vector::NormalizeInPlace(); // 826
	DotProduct(const Vector& a,
			const Vector& b);  // 827
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 828
	Vector::operator-=(
			const Vector& v);  // 828
	Vector::NormalizeInPlace(); // 829
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <059D2514> mathlib/mathlib.cpp:839
void ConcatRotations(const matrix3x4_t& in1, const matrix3x4_t& in2, matrix3x4_t& out)
{
} /* size: 0 */

// <0119C0D4> mathlib/mathlib.cpp:864
// variables: 58
// function calls: 78
void ConcatTransforms_Aligned(const matrix3x4a_t& m0, const matrix3x4a_t& m1, matrix3x4a_t& out)
{
	fltx4 lastMask; // 870
	fltx4 rowA0; // 871
	fltx4 rowA1; // 872
	fltx4 rowA2; // 873
	fltx4 rowB0; // 875
	fltx4 rowB1; // 876
	fltx4 rowB2; // 877
	fltx4 A0; // 881
	fltx4 A1; // 882
	fltx4 A2; // 883
	fltx4 mul00; // 884
	fltx4 mul01; // 885
	fltx4 mul02; // 886
	fltx4 out0; // 887
	fltx4 mul10; // 893
	fltx4 mul11; // 894
	fltx4 mul12; // 895
	fltx4 out1; // 896
	fltx4 mul20; // 902
	fltx4 mul21; // 903
	fltx4 mul22; // 904
	fltx4 out2; // 905
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 871
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 876
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 877
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 883
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 882
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 908
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 885
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 875
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 886
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 881
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 884
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 872
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 873
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 909
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 887
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 887
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 890
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 891
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 892
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 893
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 894
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 895
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 896
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 896
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 899
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 900
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 901
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 902
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 903
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 904
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 905
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 905
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 910
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 911
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 912
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 913
	_mm_store_ps(float* __P,
			__m128 __A);  // 273
	StoreAlignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 915
	_mm_store_ps(float* __P,
			__m128 __A);  // 273
	StoreAlignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 916
	_mm_store_ps(float* __P,
			__m128 __A);  // 273
	StoreAlignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 917
} /* size: 0, variables: 22, inline expansions: 42 (0 bytes) */

// <059CFD69> mathlib/mathlib.cpp:922
// variables: 61
// function calls: 84
void ConcatScaleTransforms_Aligned(const matrix3x4a_t& m0, const matrix3x4a_t& m1, matrix3x4a_t& out, const fltx4& vfScale)
{
	fltx4 lastMask; // 928
	fltx4 rowA0; // 929
	fltx4 rowA1; // 930
	fltx4 rowA2; // 931
	fltx4 rowB0; // 933
	fltx4 rowB1; // 934
	fltx4 rowB2; // 935
	fltx4 A0; // 939
	fltx4 A1; // 940
	fltx4 A2; // 941
	fltx4 mul00; // 942
	fltx4 mul01; // 943
	fltx4 mul02; // 944
	fltx4 out0; // 945
	fltx4 mul10; // 951
	fltx4 mul11; // 952
	fltx4 mul12; // 953
	fltx4 out1; // 954
	fltx4 mul20; // 960
	fltx4 mul21; // 961
	fltx4 mul22; // 962
	fltx4 out2; // 963
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 929
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 934
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 935
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 933
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 930
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 941
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 940
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 966
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 944
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 939
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 943
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 929
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 930
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 942
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 931
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 931
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 945
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 945
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 948
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 949
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 950
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 951
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 952
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 953
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 954
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 954
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 957
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 958
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 959
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 960
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 961
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 962
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 963
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 963
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 967
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 968
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 969
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 970
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 971
	_mm_store_ps(float* __P,
			__m128 __A);  // 273
	StoreAlignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 973
	_mm_store_ps(float* __P,
			__m128 __A);  // 273
	StoreAlignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 974
	_mm_store_ps(float* __P,
			__m128 __A);  // 273
	StoreAlignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 975
} /* size: 0, variables: 22, inline expansions: 45 (0 bytes) */

// <01199900> mathlib/mathlib.cpp:984
// variables: 58
// function calls: 78
void ConcatTransforms(const matrix3x4_t& in1, const matrix3x4_t& in2, matrix3x4_t& out)
{
	fltx4 lastMask; // 995
	fltx4 rowA0; // 996
	fltx4 rowA1; // 997
	fltx4 rowA2; // 998
	fltx4 rowB0; // 1000
	fltx4 rowB1; // 1001
	fltx4 rowB2; // 1002
	fltx4 A0; // 1006
	fltx4 A1; // 1007
	fltx4 A2; // 1008
	fltx4 mul00; // 1009
	fltx4 mul01; // 1010
	fltx4 mul02; // 1011
	fltx4 out0; // 1012
	fltx4 mul10; // 1018
	fltx4 mul11; // 1019
	fltx4 mul12; // 1020
	fltx4 out1; // 1021
	fltx4 mul20; // 1027
	fltx4 mul21; // 1028
	fltx4 mul22; // 1029
	fltx4 out2; // 1030
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 996
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1008
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1007
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 1001
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 1002
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1010
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1033
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1011
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 1000
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1006
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1009
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 997
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1034
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 998
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1012
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1012
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1015
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1016
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1017
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1018
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1019
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1020
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1021
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1021
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1024
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1025
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1026
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1027
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1028
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1029
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1030
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1030
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1035
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1036
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1037
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1038
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 1041
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 1042
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 1043
} /* size: 0, variables: 22, inline expansions: 42 (0 bytes) */

// <059CE94E> mathlib/mathlib.cpp:1048
// variables: 4
void TransformToWorldSpace(int nRootTransformCount, int nTransformCount, const int* pParentIndices, matrix3x4a_t* pTransforms)
{
	const char   __FUNCTION__; // 20149
	{
		int i; // 1057
		{
			int nParentBone; // 1059
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1060
			}
		}
	}
} /* size: 0, variables: 1 */

// <02BB5AFC> mathlib/mathlib.cpp:1048
// variables: 4
void TransformToWorldSpace(int nRootTransformCount, int nTransformCount, const int* pParentIndices, matrix3x4a_t* pTransforms)
{
	const char   __FUNCTION__; // 36696
	{
		int i; // 1057
		{
			int nParentBone; // 1059
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1060
			}
		}
	}
} /* size: 0, variables: 1 */

// <011997E9> mathlib/mathlib.cpp:1048
// variables: 4
void TransformToWorldSpace(int nRootTransformCount, int nTransformCount, const int* pParentIndices, matrix3x4a_t* pTransforms)
{
	const char   __FUNCTION__; // 58371
	{
		int i; // 1057
		{
			int nParentBone; // 1059
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1060
			}
		}
	}
} /* size: 0, variables: 1 */

// <0052372B> mathlib/mathlib.cpp:1048
// variables: 4
void TransformToWorldSpace(int nRootTransformCount, int nTransformCount, const int* pParentIndices, matrix3x4a_t* pTransforms)
{
	const char   __FUNCTION__; // 38263
	{
		int i; // 1057
		{
			int nParentBone; // 1059
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1060
			}
		}
	}
} /* size: 0, variables: 1 */

// <0084B276> mathlib/mathlib.cpp:1048
// variables: 4
void TransformToWorldSpace(int nRootTransformCount, int nTransformCount, const int* pParentIndices, matrix3x4a_t* pTransforms)
{
	const char   __FUNCTION__; // 35261
	{
		int i; // 1057
		{
			int nParentBone; // 1059
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1060
			}
		}
	}
} /* size: 0, variables: 1 */

// <00C47ABE> mathlib/mathlib.cpp:1048
// variables: 4
void TransformToWorldSpace(int nRootTransformCount, int nTransformCount, const int* pParentIndices, matrix3x4a_t* pTransforms)
{
	const char   __FUNCTION__; // 34826
	{
		int i; // 1057
		{
			int nParentBone; // 1059
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1060
			}
		}
	}
} /* size: 0, variables: 1 */

// <059CE858> mathlib/mathlib.cpp:1076
// variables: 3
// function calls: 2
void FloorDivMod(double numer, double denom, int* quotient, int* rem)
{
	int q; // 1080
	int r; // 1080
	double x; // 1081
	Floor2Int(float a); // 1097
	Floor2Int(float a); // 1106
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <059CE80B> mathlib/mathlib.cpp:1124
int GreatestCommonDivisor(int i1, int i2)
{
} /* size: 0 */

// <059CE794> mathlib/mathlib.cpp:1142
// variables: 3
bool IsDenormal(const float& val)
{
	const int  x; // 1144
	const int  abs_mantissa; // 1145
	const int  biased_exponent; // 1146
} /* size: 0, variables: 3 */

// <059CE755> mathlib/mathlib.cpp:1151
// variables: 2
byte SignbitsForPlaneNormal(const Vector& vNormal)
{
	int nBits; // 1154
	{
		int i; // 1155
	}
} /* size: 0, variables: 1 */

// <059CE5C9> mathlib/mathlib.cpp:1171
// variables: 8
// function calls: 2
int BoxOnPlaneSide(const float* emins, const float* emaxs, const cplane_t* p)
{
	float dist1; // 1174
	float dist2; // 1174
	int sides; // 1175
	uint nSignBits; // 1177
	const char   __FUNCTION__; // 56038
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1155
		Vector::operator[](
				int i);  // 1157
	}
	SignbitsForPlaneNormal(const Vector& vNormal); // 1177
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <02BB5777> mathlib/mathlib.cpp:1171
// variables: 8
// function calls: 2
int BoxOnPlaneSide(const float* emins, const float* emaxs, const cplane_t* p)
{
	float dist1; // 1174
	float dist2; // 1174
	int sides; // 1175
	uint nSignBits; // 1177
	const char   __FUNCTION__; // 7049
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1155
		Vector::operator[](
				int i);  // 1157
	}
	SignbitsForPlaneNormal(const Vector& vNormal); // 1177
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <01199464> mathlib/mathlib.cpp:1171
// variables: 8
// function calls: 2
int BoxOnPlaneSide(const float* emins, const float* emaxs, const cplane_t* p)
{
	float dist1; // 1174
	float dist2; // 1174
	int sides; // 1175
	uint nSignBits; // 1177
	const char   __FUNCTION__; // 28724
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1155
		Vector::operator[](
				int i);  // 1157
	}
	SignbitsForPlaneNormal(const Vector& vNormal); // 1177
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <006CFBF6> mathlib/mathlib.cpp:1171
// variables: 8
// function calls: 2
int BoxOnPlaneSide(const float* emins, const float* emaxs, const cplane_t* p)
{
	float dist1; // 1174
	float dist2; // 1174
	int sides; // 1175
	uint nSignBits; // 1177
	const char   __FUNCTION__; // 12579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1155
		Vector::operator[](
				int i);  // 1157
	}
	SignbitsForPlaneNormal(const Vector& vNormal); // 1177
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <005233A6> mathlib/mathlib.cpp:1171
// variables: 8
// function calls: 2
int BoxOnPlaneSide(const float* emins, const float* emaxs, const cplane_t* p)
{
	float dist1; // 1174
	float dist2; // 1174
	int sides; // 1175
	uint nSignBits; // 1177
	const char   __FUNCTION__; // 8616
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1155
		Vector::operator[](
				int i);  // 1157
	}
	SignbitsForPlaneNormal(const Vector& vNormal); // 1177
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <0087DFC7> mathlib/mathlib.cpp:1171
// variables: 8
// function calls: 2
int BoxOnPlaneSide(const float* emins, const float* emaxs, const cplane_t* p)
{
	float dist1; // 1174
	float dist2; // 1174
	int sides; // 1175
	uint nSignBits; // 1177
	const char   __FUNCTION__; // 57673
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1155
		Vector::operator[](
				int i);  // 1157
	}
	SignbitsForPlaneNormal(const Vector& vNormal); // 1177
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <0084AEF1> mathlib/mathlib.cpp:1171
// variables: 8
// function calls: 2
int BoxOnPlaneSide(const float* emins, const float* emaxs, const cplane_t* p)
{
	float dist1; // 1174
	float dist2; // 1174
	int sides; // 1175
	uint nSignBits; // 1177
	const char   __FUNCTION__; // 5614
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1155
		Vector::operator[](
				int i);  // 1157
	}
	SignbitsForPlaneNormal(const Vector& vNormal); // 1177
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <00C47739> mathlib/mathlib.cpp:1171
// variables: 8
// function calls: 2
int BoxOnPlaneSide(const float* emins, const float* emaxs, const cplane_t* p)
{
	float dist1; // 1174
	float dist2; // 1174
	int sides; // 1175
	uint nSignBits; // 1177
	const char   __FUNCTION__; // 5179
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1225
	}
	{
		int i; // 1155
		Vector::operator[](
				int i);  // 1157
	}
	SignbitsForPlaneNormal(const Vector& vNormal); // 1177
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <02BB554B> mathlib/mathlib.cpp:1234
// variables: 3
// function calls: 5
void AngleVectorsForward(const QAngle& angles, Vector* pForward)
{
	vec_t vAngles; // 1239
	vec_t vSines; // 1240
	vec_t vCosines; // 1241
	SinCos(float radians,
		float* sine,
		float* cosine);  // 532
	SinCos(float radians,
		float* sine,
		float* cosine);  // 533
	SinCos2Scaled(const vec_t* pRadians,
			float fScale,
			vec_t* pSines,
			vec_t* pCosines);  // 1246
	QAngle::operator[](
			int i);  // 1243
	QAngle::operator[](
			int i);  // 1244
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <02BB4ED7> mathlib/mathlib.cpp:1257
// variables: 3
// function calls: 21
void AngleVectorsFLU(const QAngle& angles, Vector* pForward, Vector* pLeft, Vector* pUp)
{
	VectorAligned vDegrees; // 1264
	VectorAligned vSines; // 1265
	VectorAligned vCosines; // 1266
	SinCos(float radians,
		float* sine,
		float* cosine);  // 568
	VectorAligned::operator[](
			int index);  // 568
	VectorAligned::operator[](
			int index);  // 568
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SinCos(float radians,
		float* sine,
		float* cosine);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SinCos(float radians,
		float* sine,
		float* cosine);  // 570
	SinCos3Scaled(const VectorAligned& vaRadians,
			float fScale,
			VectorAligned* pSines,
			VectorAligned* pCosines);  // 1268
	QAngle::operator[](
			int i);  // 1264
	QAngle::operator[](
			int i);  // 1264
	QAngle::operator[](
			int i);  // 1264
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 30
	VectorAligned::VectorAligned(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1264
	VectorAligned::VectorAligned(); // 1265
	VectorAligned::VectorAligned(); // 1266
} /* size: 0, variables: 3, inline expansions: 21 (0 bytes) */

// <059CD6B6> mathlib/mathlib.cpp:1295
// variables: 3
// function calls: 21
void AngleVectors(const QAngle& angles, Vector* forward, Vector* right, Vector* up)
{
	VectorAligned vDegrees; // 1302
	VectorAligned vSines; // 1303
	VectorAligned vCosines; // 1304
	SinCos(float radians,
		float* sine,
		float* cosine);  // 568
	VectorAligned::operator[](
			int index);  // 568
	VectorAligned::operator[](
			int index);  // 568
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SinCos(float radians,
		float* sine,
		float* cosine);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SinCos(float radians,
		float* sine,
		float* cosine);  // 570
	SinCos3Scaled(const VectorAligned& vaRadians,
			float fScale,
			VectorAligned* pSines,
			VectorAligned* pCosines);  // 1306
	QAngle::operator[](
			int i);  // 1302
	QAngle::operator[](
			int i);  // 1302
	QAngle::operator[](
			int i);  // 1302
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 30
	VectorAligned::VectorAligned(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1302
	VectorAligned::VectorAligned(); // 1303
	VectorAligned::VectorAligned(); // 1304
} /* size: 0, variables: 3, inline expansions: 21 (0 bytes) */

// <059CD043> mathlib/mathlib.cpp:1334
// variables: 3
// function calls: 21
void AngleVectorsTransposeFLU(const QAngle& angles, Vector* forward, Vector* left, Vector* up)
{
	VectorAligned vDegrees; // 1341
	VectorAligned vSines; // 1342
	VectorAligned vCosines; // 1343
	SinCos(float radians,
		float* sine,
		float* cosine);  // 568
	VectorAligned::operator[](
			int index);  // 568
	VectorAligned::operator[](
			int index);  // 568
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SinCos(float radians,
		float* sine,
		float* cosine);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SinCos(float radians,
		float* sine,
		float* cosine);  // 570
	SinCos3Scaled(const VectorAligned& vaRadians,
			float fScale,
			VectorAligned* pSines,
			VectorAligned* pCosines);  // 1345
	QAngle::operator[](
			int i);  // 1341
	QAngle::operator[](
			int i);  // 1341
	QAngle::operator[](
			int i);  // 1341
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 30
	VectorAligned::VectorAligned(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1341
	VectorAligned::VectorAligned(); // 1342
	VectorAligned::VectorAligned(); // 1343
} /* size: 0, variables: 3, inline expansions: 21 (0 bytes) */

// <01197784> mathlib/mathlib.cpp:1405
// variables: 3
// function calls: 17
void VectorAngles(const Vector& vForward, const Vector& vPseudoUp, QAngle& angles)
{
	Vector vLeft; // 1409
	float xyDist; // 1413
	{
		float up_z; // 1424
		RAD2DEG(float flRadians); // 1419
		Vector::operator[](
				int i);  // 1422
		RAD2DEG(float flRadians); // 1422
		Vector::operator[](
				int i);  // 1424
		Vector::operator[](
				int i);  // 1424
		RAD2DEG(float flRadians); // 1427
	}
	Vector::Vector(); // 1409
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1410
	_mm_load_ss(const float* __P); // 35
	_mm_rsqrt_ss(__m128 __A); // 35
	_mm_cvtss_f32(__m128 __A); // 35
	FastRSqrtFast(float x); // 49
	FastRSqrt(float x); // 2837
	VectorNormalizeFast(Vector& vec); // 1411
	RAD2DEG(float flRadians); // 1432
	Vector::operator[](
			int i);  // 1435
	RAD2DEG(float flRadians); // 1435
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <0119774E> mathlib/mathlib.cpp:1442
void SetIdentityMatrix(matrix3x4_t& matrix)
{
} /* size: 0 */

// <02BB39F2> mathlib/mathlib.cpp:1450
void SetScaleMatrix(float x, float y, float z, matrix3x4_t& dst)
{
} /* size: 0 */

// <059CC7D4> mathlib/mathlib.cpp:1460
// variable: 1
void ScaleMatrixColumns(const Vector& vecScale, matrix3x4_t& mat)
{
	{
		int i; // 1462
	}
} /* size: 0 */

// <02BB3319> mathlib/mathlib.cpp:1479
// variables: 6
// function calls: 21
void MatrixBuildRotationAboutAxis(const Vector& vAxisOfRot, float angleDegrees, matrix3x4_t& dst)
{
	float radians; // 1481
	float fSin; // 1482
	float fCos; // 1483
	float axisXSquared; // 1485
	float axisYSquared; // 1486
	float axisZSquared; // 1487
	Vector::operator[](
			int i);  // 1485
	Vector::operator[](
			int i);  // 1486
	Vector::operator[](
			int i);  // 1487
	Vector::operator[](
			int i);  // 1491
	Vector::operator[](
			int i);  // 1491
	Vector::operator[](
			int i);  // 1491
	Vector::operator[](
			int i);  // 1492
	Vector::operator[](
			int i);  // 1492
	Vector::operator[](
			int i);  // 1492
	Vector::operator[](
			int i);  // 1495
	Vector::operator[](
			int i);  // 1495
	Vector::operator[](
			int i);  // 1495
	Vector::operator[](
			int i);  // 1497
	Vector::operator[](
			int i);  // 1497
	Vector::operator[](
			int i);  // 1497
	Vector::operator[](
			int i);  // 1500
	Vector::operator[](
			int i);  // 1500
	Vector::operator[](
			int i);  // 1500
	Vector::operator[](
			int i);  // 1501
	Vector::operator[](
			int i);  // 1501
	Vector::operator[](
			int i);  // 1501
} /* size: 0, variables: 6, inline expansions: 21 (0 bytes) */

// <02BB3289> mathlib/mathlib.cpp:1522
void MatrixTranspose(const matrix3x4_t& src, matrix3x4_t& dst)
{
} /* size: 0 */

// <011963C1> mathlib/mathlib.cpp:1580
// variables: 3
// function calls: 21
void AngleMatrix(const QAngle& angles, matrix3x4_t& matrix)
{
	VectorAligned vDegrees; // 1587
	VectorAligned vSines; // 1588
	VectorAligned vCosines; // 1589
	SinCos(float radians,
		float* sine,
		float* cosine);  // 568
	VectorAligned::operator[](
			int index);  // 568
	VectorAligned::operator[](
			int index);  // 568
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SinCos(float radians,
		float* sine,
		float* cosine);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SinCos(float radians,
		float* sine,
		float* cosine);  // 570
	SinCos3Scaled(const VectorAligned& vaRadians,
			float fScale,
			VectorAligned* pSines,
			VectorAligned* pCosines);  // 1591
	QAngle::operator[](
			int i);  // 1587
	QAngle::operator[](
			int i);  // 1587
	QAngle::operator[](
			int i);  // 1587
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 30
	VectorAligned::VectorAligned(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1587
	VectorAligned::VectorAligned(); // 1588
	VectorAligned::VectorAligned(); // 1589
} /* size: 0, variables: 3, inline expansions: 21 (0 bytes) */

// <01195988> mathlib/mathlib.cpp:1646
// variable: 1
// function calls: 9
void AngleIMatrix(const QAngle& angles, const Vector& position, matrix3x4_t& mat)
{
	Vector vecTranslation; // 1650
	Vector::Vector(); // 1650
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 453
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 454
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 455
	VectorRotate(const float* in1,
			const matrix3x4_t& in2,
			float* out);  // 1230
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1651
	Vector::operator*=(
			float fl);  // 1652
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1653
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <02BB1C56> mathlib/mathlib.cpp:1661
void ClearBounds(Vector& mins, Vector& maxs)
{
} /* size: 0 */

// <02BB1B9E> mathlib/mathlib.cpp:1668
// variables: 2
// function call: 1
void AddPointToBounds(const Vector& v, Vector& mins, Vector& maxs)
{
	int i; // 1671
	vec_t val; // 1672
	Vector::operator[](
			int i);  // 1676
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <059CA90E> mathlib/mathlib.cpp:1684
// variable: 1
// function calls: 2
bool AreBoundsValid(const Vector& vMin, const Vector& vMax)
{
	{
		int i; // 1686
		Vector::operator[](
				int i);  // 1688
		Vector::operator[](
				int i);  // 1688
	}
} /* size: 0 */

// <059CA7DB> mathlib/mathlib.cpp:1697
// variable: 1
// function calls: 3
bool IsPointInBounds(const Vector& vPoint, const Vector& vMin, const Vector& vMax)
{
	{
		int i; // 1699
		Vector::operator[](
				int i);  // 1701
		Vector::operator[](
				int i);  // 1701
		Vector::operator[](
				int i);  // 1701
	}
} /* size: 0 */

// <011955DF> mathlib/mathlib.cpp:1711
// variable: 1
bool SolveQuadratic(float a, float b, float c, float& root1, float& root2)
{
	float tmp; // 1731
} /* size: 0, variables: 1 */

// <059CA67D> mathlib/mathlib.cpp:1746
// variable: 1
bool SolveInverseQuadratic(float x1, float y1, float x2, float y2, float x3, float y3, float& a, float& b, float& c)
{
	float det; // 1748
} /* size: 0, variables: 1 */

// <02BB15A6> mathlib/mathlib.cpp:1763
// variables: 3
// function calls: 5
bool SolveInverseQuadraticMonotonic(float x1, float y1, float x2, float y2, float x3, float y3, float& a, float& b, float& c)
{
	{
		float blend_to_linear_factor; // 1788
		{
			float tempy2; // 1790
			float derivative; // 1793
			FLerp(float f1,
				float f2,
				float i1,
				float i2,
				float x);  // 1790
		}
	}
	swap<float>(float& __a,
			float& __b);  // 19
	V_swap<float>(float& x,
			float& y);  // 1772
	swap<float>(float& __a,
			float& __b);  // 19
	V_swap<float>(float& x,
			float& y);  // 1773
} /* size: 0, inline expansions: 4 (0 bytes) */

// <059CA331> mathlib/mathlib.cpp:1815
// variable: 1
bool SolveInverseReciprocalQuadratic(float x1, float y1, float x2, float y2, float x3, float y3, float& a, float& b, float& c)
{
	float det; // 1817
} /* size: 0, variables: 1 */

// <059C9EEE> mathlib/mathlib.cpp:1848
// variable: 1
// function calls: 19
VectorAligned VectorYawRotate(const VectorAligned& vIn, float flYaw)
{
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1850
	SinCos(float radians,
		float* sine,
		float* cosine);  // 1839
	Vector::Vector(); // 1836
	DEG2RAD(float flDegrees); // 1839
	VectorYawRotate(const Vector& vIn,
			float flYaw);  // 1850
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1850
} /* size: 0, inline expansions: 18 (0 bytes) */

// <059C9E9A> mathlib/mathlib.cpp:1855
// variables: 2
float Bias(float x, float biasAmt)
{
	float lastAmt; // 1858
	float lastExponent; // 1859
} /* size: 0, variables: 2 */

// <059C9E6A> mathlib/mathlib.cpp:1868
float Gain(float x, float biasAmt)
{
} /* size: 0 */

// <059C9E47> mathlib/mathlib.cpp:1878
float SmoothCurve(float x)
{
} /* size: 0 */

// <059C9E17> mathlib/mathlib.cpp:1884
inline float MovePeak(float x, float flPeakPos)
{
} /* size: 0 */

// <059C9BBE> mathlib/mathlib.cpp:1894
// variables: 2
// function calls: 7
float SmoothCurve_Tweak(float x, float flPeakPos, float flPeakSharpness)
{
	float flMovedPeak; // 1896
	float flSharpened; // 1897
	MovePeak(float x,
		float flPeakPos);  // 1884
	MovePeak(float x,
		float flPeakPos);  // 1896
	Bias(float x,
		float biasAmt);  // 1872
	Bias(float x,
		float biasAmt);  // 1874
	Gain(float x,
		float biasAmt);  // 1868
	Gain(float x,
		float biasAmt);  // 1897
	SmoothCurve(float x); // 1898
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <059C9A4E> mathlib/mathlib.cpp:1905
// variables: 3
// function calls: 4
void QuaternionAlign(const Quaternion& p, const Quaternion& q, Quaternion& qt)
{
	int i; // 1911
	float a; // 1913
	float b; // 1914
	Quaternion::operator[](
			int i);  // 1917
	Quaternion::operator[](
			int i);  // 1917
	Quaternion::operator[](
			int i);  // 1924
	Quaternion::operator[](
			int i);  // 1931
} /* size: 180, variables: 3, inline expansions: 4 (21 bytes) */

// <059C6C4A> mathlib/mathlib.cpp:1947
// variables: 48
// function calls: 88
void QuaternionBlend(const QuaternionAligned& p, const QuaternionAligned& q, float t, QuaternionAligned& qt)
{
	QuaternionAligned::operator fltx4(); // 1949
	QuaternionAligned::operator fltx4(); // 1949
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 465
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 466
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 467
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 468
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 1797
	NegSIMD<>(const fltx4& a); // 469
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 469
	QuaternionAlignSIMD<>(const fltx4& p,
				const fltx4& q);  // 97
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 85
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 86
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 87
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 88
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2408
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
	ReciprocalSqrtSIMD<>(const fltx4& a); // 69
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 67
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 68
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 70
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 71
	QuaternionNormalizeSIMD<(ESIMDLevel)20>(const fltx4& q); // 89
	QuaternionBlendNoAlignSIMD<(ESIMDLevel)20>(const fltx4& p,
							const fltx4& q,
							float t); // 98
	QuaternionBlendSIMD<>(const fltx4& p,
				const fltx4& q,
				float t);  // 1949
	QuaternionAligned::operator=(
			fltx4 vOther);  // 1949
} /* size: 204, inline expansions: 38 (722 bytes) */

// <059C6B0C> mathlib/mathlib.cpp:1952
// variables: 3
// function calls: 2
void QuaternionBlendNoAlign(const Quaternion& p, const Quaternion& q, float t, Quaternion& qt)
{
	float sclp; // 1955
	float sclq; // 1955
	int i; // 1956
	Quaternion::operator[](
			int i);  // 1962
	Quaternion::operator[](
			int i);  // 1962
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <059C6A6E> mathlib/mathlib.cpp:1969
// variable: 1
void QuaternionIdentityBlend(const Quaternion& p, float t, Quaternion& qt)
{
	float sclp; // 1972
} /* size: 0, variables: 1 */

// <011917B1> mathlib/mathlib.cpp:2005
// variable: 1
// function call: 1
Quaternion QuaternionSlerp(const Quaternion& p, const Quaternion& q, float t)
{
	Quaternion qToReturn; // 2007
	QuaternionSlerp(const Quaternion& p,
			const Quaternion& q,
			float t,
			Quaternion& qt);  // 2009
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <059C619F> mathlib/mathlib.cpp:2015
// variables: 9
// function calls: 24
void QuaternionSlerpNoAlign(const Quaternion& p, const Quaternion& q, float t, Quaternion& qt)
{
	float omega; // 2018
	float cosom; // 2018
	float sinom; // 2018
	float sclp; // 2018
	float sclq; // 2018
	int i; // 2019
	const char   __FUNCTION__; // 13084
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2042
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2055
	}
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2044
	Quaternion::operator[](
			int i);  // 2045
	Quaternion::operator[](
			int i);  // 2046
	Quaternion::operator[](
			int i);  // 2047
	Quaternion::operator[](
			int i);  // 2051
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2055
} /* size: 0, variables: 7, inline expansions: 24 (141 bytes) */

// <0119103A> mathlib/mathlib.cpp:2015
// variables: 9
// function calls: 24
void QuaternionSlerpNoAlign(const Quaternion& p, const Quaternion& q, float t, Quaternion& qt)
{
	float omega; // 2018
	float cosom; // 2018
	float sinom; // 2018
	float sclp; // 2018
	float sclq; // 2018
	int i; // 2019
	const char   __FUNCTION__; // 51306
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2042
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2055
	}
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2044
	Quaternion::operator[](
			int i);  // 2045
	Quaternion::operator[](
			int i);  // 2046
	Quaternion::operator[](
			int i);  // 2047
	Quaternion::operator[](
			int i);  // 2051
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2055
} /* size: 0, variables: 7, inline expansions: 24 (0 bytes) */

// <0051AF7C> mathlib/mathlib.cpp:2015
// variables: 9
// function calls: 24
void QuaternionSlerpNoAlign(const Quaternion& p, const Quaternion& q, float t, Quaternion& qt)
{
	float omega; // 2018
	float cosom; // 2018
	float sinom; // 2018
	float sclp; // 2018
	float sclq; // 2018
	int i; // 2019
	const char   __FUNCTION__; // 31198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2042
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2055
	}
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2044
	Quaternion::operator[](
			int i);  // 2045
	Quaternion::operator[](
			int i);  // 2046
	Quaternion::operator[](
			int i);  // 2047
	Quaternion::operator[](
			int i);  // 2051
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2055
} /* size: 0, variables: 7, inline expansions: 24 (0 bytes) */

// <00842AC7> mathlib/mathlib.cpp:2015
// variables: 9
// function calls: 24
void QuaternionSlerpNoAlign(const Quaternion& p, const Quaternion& q, float t, Quaternion& qt)
{
	float omega; // 2018
	float cosom; // 2018
	float sinom; // 2018
	float sclp; // 2018
	float sclq; // 2018
	int i; // 2019
	const char   __FUNCTION__; // 28196
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2042
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2055
	}
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2044
	Quaternion::operator[](
			int i);  // 2045
	Quaternion::operator[](
			int i);  // 2046
	Quaternion::operator[](
			int i);  // 2047
	Quaternion::operator[](
			int i);  // 2051
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2055
} /* size: 0, variables: 7, inline expansions: 24 (0 bytes) */

// <00C3F30F> mathlib/mathlib.cpp:2015
// variables: 9
// function calls: 24
void QuaternionSlerpNoAlign(const Quaternion& p, const Quaternion& q, float t, Quaternion& qt)
{
	float omega; // 2018
	float cosom; // 2018
	float sinom; // 2018
	float sclp; // 2018
	float sclq; // 2018
	int i; // 2019
	const char   __FUNCTION__; // 27761
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2042
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2055
	}
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2023
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2038
	Quaternion::operator[](
			int i);  // 2044
	Quaternion::operator[](
			int i);  // 2045
	Quaternion::operator[](
			int i);  // 2046
	Quaternion::operator[](
			int i);  // 2047
	Quaternion::operator[](
			int i);  // 2051
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2055
} /* size: 0, variables: 7, inline expansions: 24 (0 bytes) */

// <059C5FFB> mathlib/mathlib.cpp:2062
// variables: 4
// function calls: 4
float QuaternionAngleDiff(const Quaternion& p, const Quaternion& q)
{
	Quaternion qInv; // 2070
	Quaternion diff; // 2070
	float sinang; // 2076
	float angle; // 2077
	QuaternionConjugate(const Quaternion& p,
				Quaternion& q);  // 2071
	Quaternion::Quaternion(); // 2070
	Quaternion::Quaternion(); // 2070
	RAD2DEG(float flRadians); // 2077
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <059C5FD1> mathlib/mathlib.cpp:2100
void QuaternionConjugate(const Quaternion& p, Quaternion& q)
{
} /* size: 0 */

// <01190D2F> mathlib/mathlib.cpp:2111
// variables: 4
// function calls: 2
void QuaternionInvert(const Quaternion& p, Quaternion& q)
{
	float magnitudeSqr; // 2118
	const char   __FUNCTION__; // 14708
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2119
	}
	{
		float inv; // 2122
	}
	QuaternionConjugate(const Quaternion& p,
				Quaternion& q);  // 2116
	QuaternionDotProduct(const Quaternion& p,
				const Quaternion& q);  // 2118
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <006C74C1> mathlib/mathlib.cpp:2111
// variables: 4
// function calls: 2
void QuaternionInvert(const Quaternion& p, Quaternion& q)
{
	float magnitudeSqr; // 2118
	const char   __FUNCTION__; // 64099
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2119
	}
	{
		float inv; // 2122
	}
	QuaternionConjugate(const Quaternion& p,
				Quaternion& q);  // 2116
	QuaternionDotProduct(const Quaternion& p,
				const Quaternion& q);  // 2118
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <0051AC71> mathlib/mathlib.cpp:2111
// variables: 4
// function calls: 2
void QuaternionInvert(const Quaternion& p, Quaternion& q)
{
	float magnitudeSqr; // 2118
	const char   __FUNCTION__; // 60136
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2119
	}
	{
		float inv; // 2122
	}
	QuaternionConjugate(const Quaternion& p,
				Quaternion& q);  // 2116
	QuaternionDotProduct(const Quaternion& p,
				const Quaternion& q);  // 2118
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00875892> mathlib/mathlib.cpp:2111
// variables: 4
// function calls: 2
void QuaternionInvert(const Quaternion& p, Quaternion& q)
{
	float magnitudeSqr; // 2118
	const char   __FUNCTION__; // 43657
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2119
	}
	{
		float inv; // 2122
	}
	QuaternionConjugate(const Quaternion& p,
				Quaternion& q);  // 2116
	QuaternionDotProduct(const Quaternion& p,
				const Quaternion& q);  // 2118
} /* size: 0, variables: 2, inline expansions: 2 (110 bytes) */

// <059C58E8> mathlib/mathlib.cpp:2131
// function calls: 26
void QuaternionMultiply(const Quaternion& q, const Vector& v, Vector& qResult)
{
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 2133
	Vector::operator=(
			const Vector& vOther);  // 2133
} /* size: 0, inline expansions: 26 (0 bytes) */

// <011906BB> mathlib/mathlib.cpp:2169
// variable: 1
// function call: 1
Quaternion QuaternionNormalize(const Quaternion& q)
{
	Quaternion p; // 2171
	QuaternionNormalize(Quaternion& q); // 2172
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01190352> mathlib/mathlib.cpp:2178
// variables: 5
// function calls: 11
void QuaternionScale(const Quaternion& p, float t, Quaternion& q)
{
	float r; // 2194
	float sinom; // 2198
	float sinsom; // 2201
	const char   __FUNCTION__; // 34181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2221
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 2198
	VectorScale(const float* in,
			vec_t scale,
			float* out);  // 2204
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2221
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <006C6AE4> mathlib/mathlib.cpp:2178
// variables: 5
// function calls: 11
void QuaternionScale(const Quaternion& p, float t, Quaternion& q)
{
	float r; // 2194
	float sinom; // 2198
	float sinsom; // 2201
	const char   __FUNCTION__; // 18036
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2221
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 2198
	VectorScale(const float* in,
			vec_t scale,
			float* out);  // 2204
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2221
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <0051A294> mathlib/mathlib.cpp:2178
// variables: 5
// function calls: 11
void QuaternionScale(const Quaternion& p, float t, Quaternion& q)
{
	float r; // 2194
	float sinom; // 2198
	float sinsom; // 2201
	const char   __FUNCTION__; // 14073
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2221
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 2198
	VectorScale(const float* in,
			vec_t scale,
			float* out);  // 2204
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2221
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00874EB5> mathlib/mathlib.cpp:2178
// variables: 5
// function calls: 11
void QuaternionScale(const Quaternion& p, float t, Quaternion& q)
{
	float r; // 2194
	float sinom; // 2198
	float sinsom; // 2201
	const char   __FUNCTION__; // 63130
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2221
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 2198
	VectorScale(const float* in,
			vec_t scale,
			float* out);  // 2204
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2221
} /* size: 0, variables: 4, inline expansions: 11 (144 bytes) */

// <00841DDF> mathlib/mathlib.cpp:2178
// variables: 5
// function calls: 11
void QuaternionScale(const Quaternion& p, float t, Quaternion& q)
{
	float r; // 2194
	float sinom; // 2198
	float sinsom; // 2201
	const char   __FUNCTION__; // 11071
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2221
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 2198
	VectorScale(const float* in,
			vec_t scale,
			float* out);  // 2204
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2221
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00C3E627> mathlib/mathlib.cpp:2178
// variables: 5
// function calls: 11
void QuaternionScale(const Quaternion& p, float t, Quaternion& q)
{
	float r; // 2194
	float sinom; // 2198
	float sinsom; // 2201
	const char   __FUNCTION__; // 10636
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2221
	}
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 2198
	VectorScale(const float* in,
			vec_t scale,
			float* out);  // 2204
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2112
	Quaternion::IsValid(); // 2221
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <059C5489> mathlib/mathlib.cpp:2227
float QuaternionDotProduct(const Quaternion& p, const Quaternion& q)
{
} /* size: 0 */

// <059C522E> mathlib/mathlib.cpp:2237
// function calls: 8
void QuaternionAdd(const Quaternion& p, const Quaternion& q, Quaternion& qt)
{
	Quaternion::operator[](
			int i);  // 2243
	Quaternion::operator[](
			int i);  // 2243
	Quaternion::operator[](
			int i);  // 2244
	Quaternion::operator[](
			int i);  // 2244
	Quaternion::operator[](
			int i);  // 2245
	Quaternion::operator[](
			int i);  // 2245
	Quaternion::operator[](
			int i);  // 2246
	Quaternion::operator[](
			int i);  // 2246
} /* size: 0, inline expansions: 8 (0 bytes) */

// <059C504F> mathlib/mathlib.cpp:2250
// variable: 1
// function calls: 5
void QuaternionAddAligned(const Quaternion& p, const Quaternion& q, Quaternion& qt)
{
	Quaternion q2; // 2257
	Quaternion::Quaternion(); // 2257
	Quaternion::operator[](
			int i);  // 2260
	Quaternion::operator[](
			int i);  // 2261
	Quaternion::operator[](
			int i);  // 2262
	Quaternion::operator[](
			int i);  // 2263
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <059C4FBC> mathlib/mathlib.cpp:2267
// variable: 1
// function call: 1
void QuaternionMult(const Quaternion& p, const Quaternion& q, Quaternion& qt)
{
	Quaternion r; // 2273
	Quaternion::Quaternion(); // 2273
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0118FD40> mathlib/mathlib.cpp:2284
// variables: 2
// function call: 1
void QuaternionMultAligned(const Quaternion& p, const Quaternion& q, Quaternion& qt)
{
	Quaternion q2; // 2298
	{
		Quaternion p2; // 2292
	}
	Quaternion::Quaternion(); // 2298
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <059C44BA> mathlib/mathlib.cpp:2317
// variables: 14
// function calls: 31
QuaternionAligned QuaternionExp(const QuaternionAligned& p)
{
	const float  r; // 2319
	const float  et; // 2320
	const float  s; // 2321
	QuaternionAligned fl4q; // 2322
	QuaternionAligned::operator fltx4(); // 2319
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 2319
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 2319
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 77
	QuaternionAligned::w(); // 2320
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 2319
	QuaternionAligned::operator fltx4(); // 2322
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 2322
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2322
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 2322
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 82
	QuaternionAligned::SetW(
		vec_t value);  // 2323
} /* size: 172, variables: 4, inline expansions: 20 (143 bytes) */

// <059C42DA> mathlib/mathlib.cpp:2328
// variables: 2
// function calls: 6
const Vector  QuaternionLnIm(const Quaternion& p)
{
	float r; // 2330
	float t; // 2331
	Quaternion::operator[](
			int i);  // 2330
	Quaternion::operator[](
			int i);  // 2330
	Quaternion::operator[](
			int i);  // 2332
	Quaternion::operator[](
			int i);  // 2332
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2332
	Quaternion::operator[](
			int i);  // 2331
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <059C35BF> mathlib/mathlib.cpp:2345
// variables: 22
// function calls: 43
QuaternionAligned QuaternionLn(const QuaternionAligned& p)
{
	const float  r; // 2347
	const float  t; // 2348
	const float  n; // 2349
	QuaternionAligned fl4q; // 2350
	QuaternionAligned::operator fltx4(); // 2347
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1695
	Dot3SIMD<>(const fltx4& a,
			const fltx4& b);  // 2347
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 2347
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 2347
	QuaternionAligned::operator fltx4(); // 2349
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 2349
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 2350
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 2349
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2350
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 2350
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 82
	QuaternionAligned::SetW(
		vec_t value);  // 2351
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 77
	QuaternionAligned::w(); // 2348
} /* size: 183, variables: 4, inline expansions: 23 (172 bytes) */

// <0118C4CD> mathlib/mathlib.cpp:2423
// variables: 70
// function calls: 105
QuaternionAligned QuaternionAverageExponential(int nCount, const QuaternionAligned* pQuaternions, const float* pflWeights)
{
	const char   __FUNCTION__; // 24579
	fltx4 fl4s; // 2431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2425
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2426
	}
	{
		fltx4 fl4oo; // 2435
		float flWeightSum; // 2437
		{
			int i; // 2439
		}
		{
			int i; // 2449
			{
				const QuaternionAligned  alignedQuat; // 2451
				const QuaternionAligned  qLn; // 2452
				QuaternionAligned::operator fltx4(); // 2451
				QuaternionAligned::operator fltx4(); // 2451
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2451
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2451
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				QuaternionAligned::operator fltx4(); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
			}
		}
		LoadOneSIMD<>(void); // 2435
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2446
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2446
	}
	{
		const fltx4  fl4oo; // 2458
		{
			int i; // 2460
			{
				const QuaternionAligned  alignedQuat; // 2462
				const QuaternionAligned  qLn; // 2463
				QuaternionAligned::operator fltx4(); // 2462
				QuaternionAligned::operator fltx4(); // 2462
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2462
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2462
				QuaternionAligned::operator fltx4(); // 2464
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
			}
		}
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2458
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2458
		LoadOneSIMD<>(void); // 2458
	}
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <006C2C5F> mathlib/mathlib.cpp:2423
// variables: 70
// function calls: 105
QuaternionAligned QuaternionAverageExponential(int nCount, const QuaternionAligned* pQuaternions, const float* pflWeights)
{
	const char   __FUNCTION__; // 8434
	fltx4 fl4s; // 2431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2425
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2426
	}
	{
		fltx4 fl4oo; // 2435
		float flWeightSum; // 2437
		{
			int i; // 2439
		}
		{
			int i; // 2449
			{
				const QuaternionAligned  alignedQuat; // 2451
				const QuaternionAligned  qLn; // 2452
				QuaternionAligned::operator fltx4(); // 2451
				QuaternionAligned::operator fltx4(); // 2451
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2451
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2451
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				QuaternionAligned::operator fltx4(); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
			}
		}
		LoadOneSIMD<>(void); // 2435
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2446
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2446
	}
	{
		const fltx4  fl4oo; // 2458
		{
			int i; // 2460
			{
				const QuaternionAligned  alignedQuat; // 2462
				const QuaternionAligned  qLn; // 2463
				QuaternionAligned::operator fltx4(); // 2462
				QuaternionAligned::operator fltx4(); // 2462
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2462
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2462
				QuaternionAligned::operator fltx4(); // 2464
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
			}
		}
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2458
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2458
		LoadOneSIMD<>(void); // 2458
	}
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0051640F> mathlib/mathlib.cpp:2423
// variables: 70
// function calls: 105
QuaternionAligned QuaternionAverageExponential(int nCount, const QuaternionAligned* pQuaternions, const float* pflWeights)
{
	const char   __FUNCTION__; // 4471
	fltx4 fl4s; // 2431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2425
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2426
	}
	{
		fltx4 fl4oo; // 2435
		float flWeightSum; // 2437
		{
			int i; // 2439
		}
		{
			int i; // 2449
			{
				const QuaternionAligned  alignedQuat; // 2451
				const QuaternionAligned  qLn; // 2452
				QuaternionAligned::operator fltx4(); // 2451
				QuaternionAligned::operator fltx4(); // 2451
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2451
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2451
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				QuaternionAligned::operator fltx4(); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
			}
		}
		LoadOneSIMD<>(void); // 2435
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2446
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2446
	}
	{
		const fltx4  fl4oo; // 2458
		{
			int i; // 2460
			{
				const QuaternionAligned  alignedQuat; // 2462
				const QuaternionAligned  qLn; // 2463
				QuaternionAligned::operator fltx4(); // 2462
				QuaternionAligned::operator fltx4(); // 2462
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2462
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2462
				QuaternionAligned::operator fltx4(); // 2464
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
			}
		}
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2458
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2458
		LoadOneSIMD<>(void); // 2458
	}
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <00871030> mathlib/mathlib.cpp:2423
// variables: 70
// function calls: 105
QuaternionAligned QuaternionAverageExponential(int nCount, const QuaternionAligned* pQuaternions, const float* pflWeights)
{
	const char   __FUNCTION__; // 53528
	fltx4 fl4s; // 2431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2425
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2426
	}
	{
		fltx4 fl4oo; // 2435
		float flWeightSum; // 2437
		{
			int i; // 2439
		}
		{
			int i; // 2449
			{
				const QuaternionAligned  alignedQuat; // 2451
				const QuaternionAligned  qLn; // 2452
				QuaternionAligned::operator fltx4(); // 2451
				QuaternionAligned::operator fltx4(); // 2451
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2451
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2451
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				QuaternionAligned::operator fltx4(); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
			}
		}
		LoadOneSIMD<>(void); // 2435
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2446
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2446
	}
	{
		const fltx4  fl4oo; // 2458
		{
			int i; // 2460
			{
				const QuaternionAligned  alignedQuat; // 2462
				const QuaternionAligned  qLn; // 2463
				QuaternionAligned::operator fltx4(); // 2462
				QuaternionAligned::operator fltx4(); // 2462
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2462
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2462
				QuaternionAligned::operator fltx4(); // 2464
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
			}
		}
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2458
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2458
		LoadOneSIMD<>(void); // 2458
	}
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (4 bytes) */

// <0083DF5A> mathlib/mathlib.cpp:2423
// variables: 70
// function calls: 105
QuaternionAligned QuaternionAverageExponential(int nCount, const QuaternionAligned* pQuaternions, const float* pflWeights)
{
	const char   __FUNCTION__; // 1469
	fltx4 fl4s; // 2431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2425
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2426
	}
	{
		fltx4 fl4oo; // 2435
		float flWeightSum; // 2437
		{
			int i; // 2439
		}
		{
			int i; // 2449
			{
				const QuaternionAligned  alignedQuat; // 2451
				const QuaternionAligned  qLn; // 2452
				QuaternionAligned::operator fltx4(); // 2451
				QuaternionAligned::operator fltx4(); // 2451
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2451
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2451
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				QuaternionAligned::operator fltx4(); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
			}
		}
		LoadOneSIMD<>(void); // 2435
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2446
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2446
	}
	{
		const fltx4  fl4oo; // 2458
		{
			int i; // 2460
			{
				const QuaternionAligned  alignedQuat; // 2462
				const QuaternionAligned  qLn; // 2463
				QuaternionAligned::operator fltx4(); // 2462
				QuaternionAligned::operator fltx4(); // 2462
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2462
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2462
				QuaternionAligned::operator fltx4(); // 2464
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
			}
		}
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2458
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2458
		LoadOneSIMD<>(void); // 2458
	}
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <00C3A7A2> mathlib/mathlib.cpp:2423
// variables: 70
// function calls: 105
QuaternionAligned QuaternionAverageExponential(int nCount, const QuaternionAligned* pQuaternions, const float* pflWeights)
{
	const char   __FUNCTION__; // 1034
	fltx4 fl4s; // 2431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2425
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2426
	}
	{
		fltx4 fl4oo; // 2435
		float flWeightSum; // 2437
		{
			int i; // 2439
		}
		{
			int i; // 2449
			{
				const QuaternionAligned  alignedQuat; // 2451
				const QuaternionAligned  qLn; // 2452
				QuaternionAligned::operator fltx4(); // 2451
				QuaternionAligned::operator fltx4(); // 2451
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2451
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2451
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				QuaternionAligned::operator fltx4(); // 2453
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2453
			}
		}
		LoadOneSIMD<>(void); // 2435
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2446
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2446
	}
	{
		const fltx4  fl4oo; // 2458
		{
			int i; // 2460
			{
				const QuaternionAligned  alignedQuat; // 2462
				const QuaternionAligned  qLn; // 2463
				QuaternionAligned::operator fltx4(); // 2462
				QuaternionAligned::operator fltx4(); // 2462
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 465
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 466
				{
					fltx4 fl4Product; // 1725
					fltx4 fl4YXWZ; // 1727
					fltx4 fl4UUVV; // 1729
					fltx4 fl4VVUU; // 1731
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 1725
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1728
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1730
					{
						fltx4 retVal; // 373
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 374
					}
					RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 1733
				}
				Dot4SIMD<>(const fltx4& a,
						const fltx4& b);  // 467
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 468
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 1797
				NegSIMD<>(const fltx4& a); // 469
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<>(const fltx4& a,
						const fltx4& b);  // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 469
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 2462
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 2462
				QuaternionAligned::operator fltx4(); // 2464
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 2464
			}
		}
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 2458
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 2458
		LoadOneSIMD<>(void); // 2458
	}
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 2468
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <059C1540> mathlib/mathlib.cpp:2472
// variable: 1
// function calls: 2
Quaternion OrthoNormalBasisToQuaternion(const Vector& vX, const Vector& vY, const Vector& vZ, float flTrace)
{
	Quaternion q; // 2474
	Quaternion::Quaternion(); // 2474
	QuaternionNormalize(Quaternion& q); // 2509
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <059C1125> mathlib/mathlib.cpp:2516
// variables: 8
// function calls: 13
void QuaternionLookAt(const Vector& vForward, const Vector& vReferenceUp, Quaternion& q)
{
	const Vector  vForwardNormalized; // 2518
	float flRatio; // 2519
	const Vector  vUp; // 2520
	const Vector  vRight; // 2521
	const Vector& vX; // 2523
	const Vector& vY; // 2524
	const Vector& vZ; // 2525
	float flTrace; // 2527
	Vector::Normalized(); // 2518
	DotProduct(const Vector& a,
			const Vector& b);  // 2519
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2520
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2521
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2520
	Vector::Normalized(); // 2520
	Vector::Normalized(); // 2521
} /* size: 0, variables: 8, inline expansions: 13 (0 bytes) */

// <059C0C05> mathlib/mathlib.cpp:2550
// variable: 1
Quaternion QuaternionLookAtFLU(const Vector& vForward, const Vector& vReferenceUp)
{
	Quaternion qResult; // 2552
} /* size: 0, variables: 1 */

// <059C0937> mathlib/mathlib.cpp:2584
// variables: 12
void QuaternionMatrixOrientationOnly(const Quaternion& q, matrix3x4_t& matrix)
{
	float x2; // 2590
	float y2; // 2591
	float z2; // 2592
	float xx; // 2593
	float xy; // 2594
	float xz; // 2595
	float yy; // 2596
	float yz; // 2597
	float zz; // 2598
	float wx; // 2599
	float wy; // 2600
	float wz; // 2601
} /* size: 0, variables: 12 */

// <0118B7A6> mathlib/mathlib.cpp:2617
void QuaternionMatrix(const Quaternion& q, matrix3x4_t& matrix)
{
} /* size: 0 */

// <059C0892> mathlib/mathlib.cpp:2631
// variable: 1
// function call: 1
void Quaternion::GetForward()
{
	Vector vAxisX; // 2633
	Vector::Vector(); // 2633
} /* size: 135, variables: 1, inline expansions: 1 (0 bytes) */

// <059C0818> mathlib/mathlib.cpp:2641
// variable: 1
// function call: 1
void Quaternion::GetLeft()
{
	Vector vAxisY; // 2643
	Vector::Vector(); // 2643
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <059DC4A5> mathlib/mathlib.cpp:2652
// variable: 1
// function call: 1
void Quaternion::GetUp()
{
	Vector vAxisZ; // 2654
	Vector::Vector(); // 2654
} /* size: 119, variables: 1, inline expansions: 1 (0 bytes) */

// <059C07EE> mathlib/mathlib.cpp:2652
// variable: 1
void Quaternion::GetUp()
{
	Vector vAxisZ; // 2654
} /* size: 0, variables: 1 */

// <0118AE66> mathlib/mathlib.cpp:2663
// variables: 6
// function calls: 30
const Quaternion  RotateBetween(const Vector& v1, const Vector& v2)
{
	const char   __FUNCTION__; // 13651
	Quaternion qOut; // 2668
	Vector vBisector; // 2670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2665
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2666
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2697
	}
	Vector::LengthSqr(); // 2665
	Vector::LengthSqr(); // 2666
	Quaternion::Quaternion(); // 2668
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2670
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2670
	Vector::LengthSqr(); // 2671
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 2673
	DotProduct(const Vector& a,
			const Vector& b);  // 2673
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2697
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 852
	matrix3x4_t::matrix3x4_t(); // 851
	QuaternionMatrix(const Quaternion& q); // 2697
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2697
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2697
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <006C15F8> mathlib/mathlib.cpp:2663
// variables: 6
// function calls: 30
const Quaternion  RotateBetween(const Vector& v1, const Vector& v2)
{
	const char   __FUNCTION__; // 63042
	Quaternion qOut; // 2668
	Vector vBisector; // 2670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2665
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2666
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2697
	}
	Vector::LengthSqr(); // 2665
	Vector::LengthSqr(); // 2666
	Quaternion::Quaternion(); // 2668
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2670
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2670
	Vector::LengthSqr(); // 2671
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 2673
	DotProduct(const Vector& a,
			const Vector& b);  // 2673
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2697
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 852
	matrix3x4_t::matrix3x4_t(); // 851
	QuaternionMatrix(const Quaternion& q); // 2697
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2697
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2697
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <00514DA8> mathlib/mathlib.cpp:2663
// variables: 6
// function calls: 30
const Quaternion  RotateBetween(const Vector& v1, const Vector& v2)
{
	const char   __FUNCTION__; // 59079
	Quaternion qOut; // 2668
	Vector vBisector; // 2670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2665
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2666
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2697
	}
	Vector::LengthSqr(); // 2665
	Vector::LengthSqr(); // 2666
	Quaternion::Quaternion(); // 2668
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2670
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2670
	Vector::LengthSqr(); // 2671
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 2673
	DotProduct(const Vector& a,
			const Vector& b);  // 2673
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2697
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 852
	matrix3x4_t::matrix3x4_t(); // 851
	QuaternionMatrix(const Quaternion& q); // 2697
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2697
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2697
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <0086F9C9> mathlib/mathlib.cpp:2663
// variables: 6
// function calls: 30
const Quaternion  RotateBetween(const Vector& v1, const Vector& v2)
{
	const char   __FUNCTION__; // 42600
	Quaternion qOut; // 2668
	Vector vBisector; // 2670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2665
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2666
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2697
	}
	Vector::LengthSqr(); // 2665
	Vector::LengthSqr(); // 2666
	Quaternion::Quaternion(); // 2668
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2670
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2670
	Vector::LengthSqr(); // 2671
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 2673
	DotProduct(const Vector& a,
			const Vector& b);  // 2673
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2697
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 852
	matrix3x4_t::matrix3x4_t(); // 851
	QuaternionMatrix(const Quaternion& q); // 2697
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2697
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2697
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <0083C8F3> mathlib/mathlib.cpp:2663
// variables: 6
// function calls: 30
const Quaternion  RotateBetween(const Vector& v1, const Vector& v2)
{
	const char   __FUNCTION__; // 56077
	Quaternion qOut; // 2668
	Vector vBisector; // 2670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2665
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2666
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2697
	}
	Vector::LengthSqr(); // 2665
	Vector::LengthSqr(); // 2666
	Quaternion::Quaternion(); // 2668
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2670
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2670
	Vector::LengthSqr(); // 2671
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 2673
	DotProduct(const Vector& a,
			const Vector& b);  // 2673
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2697
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 852
	matrix3x4_t::matrix3x4_t(); // 851
	QuaternionMatrix(const Quaternion& q); // 2697
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2697
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2697
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <00C3913B> mathlib/mathlib.cpp:2663
// variables: 6
// function calls: 30
const Quaternion  RotateBetween(const Vector& v1, const Vector& v2)
{
	const char   __FUNCTION__; // 55642
	Quaternion qOut; // 2668
	Vector vBisector; // 2670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2665
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2666
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2697
	}
	Vector::LengthSqr(); // 2665
	Vector::LengthSqr(); // 2666
	Quaternion::Quaternion(); // 2668
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2670
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2670
	Vector::LengthSqr(); // 2671
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 2673
	DotProduct(const Vector& a,
			const Vector& b);  // 2673
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2697
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 852
	matrix3x4_t::matrix3x4_t(); // 851
	QuaternionMatrix(const Quaternion& q); // 2697
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2697
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2697
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <059BF974> mathlib/mathlib.cpp:2703
// variables: 13
// function calls: 23
void UnitTestQuatExpLog(void)
{
	const char   __FUNCTION__; // 5650
	{
		int i; // 2705
		{
			Quaternion q; // 2707
			Vector l; // 2708
			Quaternion q2; // 2709
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2710
			}
			{
				float sinTheta2; // 2929
				float sinTheta4; // 2930
			}
			{
				float theta; // 2923
			}
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2937
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2919
			Log(const Quaternion& q); // 2708
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2899
			{
				float theta2_2; // 2904
				float theta4_24; // 2904
				float k; // 2905
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2906
			}
			{
				float k; // 2910
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2911
			}
			Exp(const Vector& v); // 2709
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2018
			operator-(const Quaternion& q1,
					const Quaternion& q2);  // 2710
			Quaternion::Length(); // 2122
			QuaternionLength(const Quaternion& q); // 2710
		}
	}
} /* size: 0, variables: 1 */

// <02BA6B22> mathlib/mathlib.cpp:2703
// variables: 13
// function calls: 23
void UnitTestQuatExpLog(void)
{
	const char   __FUNCTION__; // 22197
	{
		int i; // 2705
		{
			Quaternion q; // 2707
			Vector l; // 2708
			Quaternion q2; // 2709
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2710
			}
			{
				float sinTheta2; // 2929
				float sinTheta4; // 2930
			}
			{
				float theta; // 2923
			}
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2937
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2919
			Log(const Quaternion& q); // 2708
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2899
			{
				float theta2_2; // 2904
				float theta4_24; // 2904
				float k; // 2905
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2906
			}
			{
				float k; // 2910
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2911
			}
			Exp(const Vector& v); // 2709
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2018
			operator-(const Quaternion& q1,
					const Quaternion& q2);  // 2710
			Quaternion::Length(); // 2122
			QuaternionLength(const Quaternion& q); // 2710
		}
	}
} /* size: 0, variables: 1 */

// <0118A80F> mathlib/mathlib.cpp:2703
// variables: 13
// function calls: 23
void UnitTestQuatExpLog(void)
{
	const char   __FUNCTION__; // 43872
	{
		int i; // 2705
		{
			Quaternion q; // 2707
			Vector l; // 2708
			Quaternion q2; // 2709
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2710
			}
			{
				float sinTheta2; // 2929
				float sinTheta4; // 2930
			}
			{
				float theta; // 2923
			}
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2937
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2919
			Log(const Quaternion& q); // 2708
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2899
			{
				float theta2_2; // 2904
				float theta4_24; // 2904
				float k; // 2905
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2906
			}
			{
				float k; // 2910
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2911
			}
			Exp(const Vector& v); // 2709
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2018
			operator-(const Quaternion& q1,
					const Quaternion& q2);  // 2710
			Quaternion::Length(); // 2122
			QuaternionLength(const Quaternion& q); // 2710
		}
	}
} /* size: 0, variables: 1 */

// <006C0FA1> mathlib/mathlib.cpp:2703
// variables: 13
// function calls: 23
void UnitTestQuatExpLog(void)
{
	const char   __FUNCTION__; // 27727
	{
		int i; // 2705
		{
			Quaternion q; // 2707
			Vector l; // 2708
			Quaternion q2; // 2709
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2710
			}
			{
				float sinTheta2; // 2929
				float sinTheta4; // 2930
			}
			{
				float theta; // 2923
			}
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2937
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2919
			Log(const Quaternion& q); // 2708
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2899
			{
				float theta2_2; // 2904
				float theta4_24; // 2904
				float k; // 2905
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2906
			}
			{
				float k; // 2910
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2911
			}
			Exp(const Vector& v); // 2709
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2018
			operator-(const Quaternion& q1,
					const Quaternion& q2);  // 2710
			Quaternion::Length(); // 2122
			QuaternionLength(const Quaternion& q); // 2710
		}
	}
} /* size: 0, variables: 1 */

// <00514751> mathlib/mathlib.cpp:2703
// variables: 13
// function calls: 23
void UnitTestQuatExpLog(void)
{
	const char   __FUNCTION__; // 23764
	{
		int i; // 2705
		{
			Quaternion q; // 2707
			Vector l; // 2708
			Quaternion q2; // 2709
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2710
			}
			{
				float sinTheta2; // 2929
				float sinTheta4; // 2930
			}
			{
				float theta; // 2923
			}
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2937
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2919
			Log(const Quaternion& q); // 2708
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2899
			{
				float theta2_2; // 2904
				float theta4_24; // 2904
				float k; // 2905
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2906
			}
			{
				float k; // 2910
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2911
			}
			Exp(const Vector& v); // 2709
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2018
			operator-(const Quaternion& q1,
					const Quaternion& q2);  // 2710
			Quaternion::Length(); // 2122
			QuaternionLength(const Quaternion& q); // 2710
		}
	}
} /* size: 0, variables: 1 */

// <0086F372> mathlib/mathlib.cpp:2703
// variables: 13
// function calls: 23
void UnitTestQuatExpLog(void)
{
	const char   __FUNCTION__; // 7285
	{
		int i; // 2705
		{
			Quaternion q; // 2707
			Vector l; // 2708
			Quaternion q2; // 2709
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2710
			}
			{
				float sinTheta2; // 2929
				float sinTheta4; // 2930
			}
			{
				float theta; // 2923
			}
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2937
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2919
			Log(const Quaternion& q); // 2708
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2899
			{
				float theta2_2; // 2904
				float theta4_24; // 2904
				float k; // 2905
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2906
			}
			{
				float k; // 2910
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2911
			}
			Exp(const Vector& v); // 2709
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2018
			operator-(const Quaternion& q1,
					const Quaternion& q2);  // 2710
			Quaternion::Length(); // 2122
			QuaternionLength(const Quaternion& q); // 2710
		}
	}
} /* size: 0, variables: 1 */

// <0083C29C> mathlib/mathlib.cpp:2703
// variables: 13
// function calls: 23
void UnitTestQuatExpLog(void)
{
	const char   __FUNCTION__; // 20762
	{
		int i; // 2705
		{
			Quaternion q; // 2707
			Vector l; // 2708
			Quaternion q2; // 2709
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2710
			}
			{
				float sinTheta2; // 2929
				float sinTheta4; // 2930
			}
			{
				float theta; // 2923
			}
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2937
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2919
			Log(const Quaternion& q); // 2708
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2899
			{
				float theta2_2; // 2904
				float theta4_24; // 2904
				float k; // 2905
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2906
			}
			{
				float k; // 2910
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2911
			}
			Exp(const Vector& v); // 2709
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2018
			operator-(const Quaternion& q1,
					const Quaternion& q2);  // 2710
			Quaternion::Length(); // 2122
			QuaternionLength(const Quaternion& q); // 2710
		}
	}
} /* size: 0, variables: 1 */

// <00C38AE4> mathlib/mathlib.cpp:2703
// variables: 13
// function calls: 23
void UnitTestQuatExpLog(void)
{
	const char   __FUNCTION__; // 20327
	{
		int i; // 2705
		{
			Quaternion q; // 2707
			Vector l; // 2708
			Quaternion q2; // 2709
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2710
			}
			{
				float sinTheta2; // 2929
				float sinTheta4; // 2930
			}
			{
				float theta; // 2923
			}
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 2937
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2919
			Log(const Quaternion& q); // 2708
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2899
			{
				float theta2_2; // 2904
				float theta4_24; // 2904
				float k; // 2905
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2906
			}
			{
				float k; // 2910
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 2911
			}
			Exp(const Vector& v); // 2709
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 2018
			operator-(const Quaternion& q1,
					const Quaternion& q2);  // 2710
			Quaternion::Length(); // 2122
			QuaternionLength(const Quaternion& q); // 2710
		}
	}
} /* size: 0, variables: 1 */

// <059BF412> mathlib/mathlib.cpp:2715
// variables: 9
// function calls: 17
void UnitTestRotateBetween(void)
{
	float flMaxError; // 2718
	int nMaxError; // 2719
	const char   __FUNCTION__; // 20149
	{
		int i; // 2720
		{
			Vector u; // 2722
			Vector v; // 2722
			Quaternion q; // 2723
			float flError; // 2725
			RandomVectorOnUnitSphere(void); // 2722
			RandomVectorOnUnitSphere(void); // 2722
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrix(const Quaternion& q); // 2725
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2725
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 2725
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2725
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
	}
} /* size: 0, variables: 3 */

// <02BA65C0> mathlib/mathlib.cpp:2715
// variables: 9
// function calls: 17
void UnitTestRotateBetween(void)
{
	float flMaxError; // 2718
	int nMaxError; // 2719
	const char   __FUNCTION__; // 36696
	{
		int i; // 2720
		{
			Vector u; // 2722
			Vector v; // 2722
			Quaternion q; // 2723
			float flError; // 2725
			RandomVectorOnUnitSphere(void); // 2722
			RandomVectorOnUnitSphere(void); // 2722
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrix(const Quaternion& q); // 2725
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2725
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 2725
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2725
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
	}
} /* size: 0, variables: 3 */

// <0118A2AD> mathlib/mathlib.cpp:2715
// variables: 9
// function calls: 17
void UnitTestRotateBetween(void)
{
	float flMaxError; // 2718
	int nMaxError; // 2719
	const char   __FUNCTION__; // 58371
	{
		int i; // 2720
		{
			Vector u; // 2722
			Vector v; // 2722
			Quaternion q; // 2723
			float flError; // 2725
			RandomVectorOnUnitSphere(void); // 2722
			RandomVectorOnUnitSphere(void); // 2722
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrix(const Quaternion& q); // 2725
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2725
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 2725
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2725
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
	}
} /* size: 0, variables: 3 */

// <005141EF> mathlib/mathlib.cpp:2715
// variables: 9
// function calls: 17
void UnitTestRotateBetween(void)
{
	float flMaxError; // 2718
	int nMaxError; // 2719
	const char   __FUNCTION__; // 38263
	{
		int i; // 2720
		{
			Vector u; // 2722
			Vector v; // 2722
			Quaternion q; // 2723
			float flError; // 2725
			RandomVectorOnUnitSphere(void); // 2722
			RandomVectorOnUnitSphere(void); // 2722
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrix(const Quaternion& q); // 2725
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2725
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 2725
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2725
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
	}
} /* size: 0, variables: 3 */

// <0083BD3A> mathlib/mathlib.cpp:2715
// variables: 9
// function calls: 17
void UnitTestRotateBetween(void)
{
	float flMaxError; // 2718
	int nMaxError; // 2719
	const char   __FUNCTION__; // 35261
	{
		int i; // 2720
		{
			Vector u; // 2722
			Vector v; // 2722
			Quaternion q; // 2723
			float flError; // 2725
			RandomVectorOnUnitSphere(void); // 2722
			RandomVectorOnUnitSphere(void); // 2722
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrix(const Quaternion& q); // 2725
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2725
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 2725
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2725
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
	}
} /* size: 0, variables: 3 */

// <00C38582> mathlib/mathlib.cpp:2715
// variables: 9
// function calls: 17
void UnitTestRotateBetween(void)
{
	float flMaxError; // 2718
	int nMaxError; // 2719
	const char   __FUNCTION__; // 34826
	{
		int i; // 2720
		{
			Vector u; // 2722
			Vector v; // 2722
			Quaternion q; // 2723
			float flError; // 2725
			RandomVectorOnUnitSphere(void); // 2722
			RandomVectorOnUnitSphere(void); // 2722
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrix(const Quaternion& q); // 2725
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2725
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 2725
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 2725
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2732
	}
} /* size: 0, variables: 3 */

// <059BEEA6> mathlib/mathlib.cpp:2769
// variables: 2
// function calls: 4
float QuaternionionGetYaw(const Quaternion& q)
{
	QAngle angles; // 2772
	matrix3x4_t matrix; // 2773
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2774
	QAngle::QAngle(); // 2772
	matrix3x4_t::matrix3x4_t(); // 2773
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <059BECAA> mathlib/mathlib.cpp:2779
// variables: 2
// function calls: 4
float QuaternionionGetPitch(const Quaternion& q)
{
	QAngle angles; // 2782
	matrix3x4_t matrix; // 2783
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2784
	QAngle::QAngle(); // 2782
	matrix3x4_t::matrix3x4_t(); // 2783
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <059BEAAE> mathlib/mathlib.cpp:2789
// variables: 2
// function calls: 4
float QuaternionionGetRoll(const Quaternion& q)
{
	QAngle angles; // 2792
	matrix3x4_t matrix; // 2793
	QuaternionMatrixOrientationOnly(const Quaternion& q,
					matrix3x4_t& matrix);  // 2622
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2794
	QAngle::QAngle(); // 2792
	matrix3x4_t::matrix3x4_t(); // 2793
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <059BE0C0> mathlib/mathlib.cpp:2805
// variables: 6
// function calls: 44
void QuaternionVectorsFLU(const Quaternion& q, Vector* pForward, Vector* pLeft, Vector* pUp)
{
	matrix3x4_t matrix; // 2815
	Vector forward; // 2817
	Vector left; // 2817
	Vector up; // 2817
	const char   __FUNCTION__; // 22285
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2816
	Vector::operator=(
			const Vector& vOther);  // 2811
	Vector::Vector(); // 2654
	Quaternion::GetUp(); // 2813
	Vector::operator=(
			const Vector& vOther);  // 2812
	Vector::operator=(
			const Vector& vOther);  // 2813
	matrix3x4_t::matrix3x4_t(); // 2815
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 689
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 690
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 691
	MatrixVectorsFLU(const matrix3x4_t& matrix,
			Vector* pForward,
			Vector* pLeft,
			Vector* pUp);  // 2818
} /* size: 0, variables: 5, inline expansions: 44 (0 bytes) */

// <02BA526E> mathlib/mathlib.cpp:2805
// variables: 6
// function calls: 44
void QuaternionVectorsFLU(const Quaternion& q, Vector* pForward, Vector* pLeft, Vector* pUp)
{
	matrix3x4_t matrix; // 2815
	Vector forward; // 2817
	Vector left; // 2817
	Vector up; // 2817
	const char   __FUNCTION__; // 38832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2816
	Vector::operator=(
			const Vector& vOther);  // 2811
	Vector::Vector(); // 2654
	Quaternion::GetUp(); // 2813
	Vector::operator=(
			const Vector& vOther);  // 2812
	Vector::operator=(
			const Vector& vOther);  // 2813
	matrix3x4_t::matrix3x4_t(); // 2815
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 689
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 690
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 691
	MatrixVectorsFLU(const matrix3x4_t& matrix,
			Vector* pForward,
			Vector* pLeft,
			Vector* pUp);  // 2818
} /* size: 0, variables: 5, inline expansions: 44 (0 bytes) */

// <01188F5B> mathlib/mathlib.cpp:2805
// variables: 6
// function calls: 44
void QuaternionVectorsFLU(const Quaternion& q, Vector* pForward, Vector* pLeft, Vector* pUp)
{
	matrix3x4_t matrix; // 2815
	Vector forward; // 2817
	Vector left; // 2817
	Vector up; // 2817
	const char   __FUNCTION__; // 60507
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2816
	Vector::operator=(
			const Vector& vOther);  // 2811
	Vector::Vector(); // 2654
	Quaternion::GetUp(); // 2813
	Vector::operator=(
			const Vector& vOther);  // 2812
	Vector::operator=(
			const Vector& vOther);  // 2813
	matrix3x4_t::matrix3x4_t(); // 2815
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 689
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 690
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 691
	MatrixVectorsFLU(const matrix3x4_t& matrix,
			Vector* pForward,
			Vector* pLeft,
			Vector* pUp);  // 2818
} /* size: 0, variables: 5, inline expansions: 44 (0 bytes) */

// <00512E9D> mathlib/mathlib.cpp:2805
// variables: 6
// function calls: 44
void QuaternionVectorsFLU(const Quaternion& q, Vector* pForward, Vector* pLeft, Vector* pUp)
{
	matrix3x4_t matrix; // 2815
	Vector forward; // 2817
	Vector left; // 2817
	Vector up; // 2817
	const char   __FUNCTION__; // 40399
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2816
	Vector::operator=(
			const Vector& vOther);  // 2811
	Vector::Vector(); // 2654
	Quaternion::GetUp(); // 2813
	Vector::operator=(
			const Vector& vOther);  // 2812
	Vector::operator=(
			const Vector& vOther);  // 2813
	matrix3x4_t::matrix3x4_t(); // 2815
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 689
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 690
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 691
	MatrixVectorsFLU(const matrix3x4_t& matrix,
			Vector* pForward,
			Vector* pLeft,
			Vector* pUp);  // 2818
} /* size: 0, variables: 5, inline expansions: 44 (0 bytes) */

// <0086DABE> mathlib/mathlib.cpp:2805
// variables: 6
// function calls: 44
void QuaternionVectorsFLU(const Quaternion& q, Vector* pForward, Vector* pLeft, Vector* pUp)
{
	matrix3x4_t matrix; // 2815
	Vector forward; // 2817
	Vector left; // 2817
	Vector up; // 2817
	const char   __FUNCTION__; // 23920
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2816
	Vector::operator=(
			const Vector& vOther);  // 2811
	Vector::Vector(); // 2654
	Quaternion::GetUp(); // 2813
	Vector::operator=(
			const Vector& vOther);  // 2812
	Vector::operator=(
			const Vector& vOther);  // 2813
	matrix3x4_t::matrix3x4_t(); // 2815
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 689
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 690
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 691
	MatrixVectorsFLU(const matrix3x4_t& matrix,
			Vector* pForward,
			Vector* pLeft,
			Vector* pUp);  // 2818
} /* size: 0, variables: 5, inline expansions: 44 (0 bytes) */

// <0083A9E8> mathlib/mathlib.cpp:2805
// variables: 6
// function calls: 44
void QuaternionVectorsFLU(const Quaternion& q, Vector* pForward, Vector* pLeft, Vector* pUp)
{
	matrix3x4_t matrix; // 2815
	Vector forward; // 2817
	Vector left; // 2817
	Vector up; // 2817
	const char   __FUNCTION__; // 37397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2816
	Vector::operator=(
			const Vector& vOther);  // 2811
	Vector::Vector(); // 2654
	Quaternion::GetUp(); // 2813
	Vector::operator=(
			const Vector& vOther);  // 2812
	Vector::operator=(
			const Vector& vOther);  // 2813
	matrix3x4_t::matrix3x4_t(); // 2815
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 689
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 690
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 691
	MatrixVectorsFLU(const matrix3x4_t& matrix,
			Vector* pForward,
			Vector* pLeft,
			Vector* pUp);  // 2818
} /* size: 0, variables: 5, inline expansions: 44 (0 bytes) */

// <00C37230> mathlib/mathlib.cpp:2805
// variables: 6
// function calls: 44
void QuaternionVectorsFLU(const Quaternion& q, Vector* pForward, Vector* pLeft, Vector* pUp)
{
	matrix3x4_t matrix; // 2815
	Vector forward; // 2817
	Vector left; // 2817
	Vector up; // 2817
	const char   __FUNCTION__; // 36962
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2816
	Vector::operator=(
			const Vector& vOther);  // 2811
	Vector::Vector(); // 2654
	Quaternion::GetUp(); // 2813
	Vector::operator=(
			const Vector& vOther);  // 2812
	Vector::operator=(
			const Vector& vOther);  // 2813
	matrix3x4_t::matrix3x4_t(); // 2815
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2819
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(); // 2817
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 689
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 690
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 691
	MatrixVectorsFLU(const matrix3x4_t& matrix,
			Vector* pForward,
			Vector* pLeft,
			Vector* pUp);  // 2818
} /* size: 0, variables: 5, inline expansions: 44 (0 bytes) */

// <059BDD0A> mathlib/mathlib.cpp:2823
// variables: 3
// function calls: 15
void QuaternionVectorsForward(const Quaternion& q, Vector* pForward)
{
	matrix3x4_t matrix; // 2830
	const char   __FUNCTION__; // 21217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2832
	}
	Vector::operator=(
			const Vector& vOther);  // 2828
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2831
	matrix3x4_t::matrix3x4_t(); // 2830
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2832
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1041
	MatrixGetColumn(const matrix3x4_t& in,
			MatrixAxisType_t nColumn);  // 2832
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2832
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <02BA4EB8> mathlib/mathlib.cpp:2823
// variables: 3
// function calls: 15
void QuaternionVectorsForward(const Quaternion& q, Vector* pForward)
{
	matrix3x4_t matrix; // 2830
	const char   __FUNCTION__; // 37764
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2832
	}
	Vector::operator=(
			const Vector& vOther);  // 2828
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2831
	matrix3x4_t::matrix3x4_t(); // 2830
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2832
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1041
	MatrixGetColumn(const matrix3x4_t& in,
			MatrixAxisType_t nColumn);  // 2832
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2832
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <01188BA5> mathlib/mathlib.cpp:2823
// variables: 3
// function calls: 15
void QuaternionVectorsForward(const Quaternion& q, Vector* pForward)
{
	matrix3x4_t matrix; // 2830
	const char   __FUNCTION__; // 59439
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2832
	}
	Vector::operator=(
			const Vector& vOther);  // 2828
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2831
	matrix3x4_t::matrix3x4_t(); // 2830
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2832
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1041
	MatrixGetColumn(const matrix3x4_t& in,
			MatrixAxisType_t nColumn);  // 2832
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2832
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <006BF337> mathlib/mathlib.cpp:2823
// variables: 3
// function calls: 15
void QuaternionVectorsForward(const Quaternion& q, Vector* pForward)
{
	matrix3x4_t matrix; // 2830
	const char   __FUNCTION__; // 43294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2832
	}
	Vector::operator=(
			const Vector& vOther);  // 2828
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2831
	matrix3x4_t::matrix3x4_t(); // 2830
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2832
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1041
	MatrixGetColumn(const matrix3x4_t& in,
			MatrixAxisType_t nColumn);  // 2832
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2832
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <00512AE7> mathlib/mathlib.cpp:2823
// variables: 3
// function calls: 15
void QuaternionVectorsForward(const Quaternion& q, Vector* pForward)
{
	matrix3x4_t matrix; // 2830
	const char   __FUNCTION__; // 39331
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2832
	}
	Vector::operator=(
			const Vector& vOther);  // 2828
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2831
	matrix3x4_t::matrix3x4_t(); // 2830
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2832
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1041
	MatrixGetColumn(const matrix3x4_t& in,
			MatrixAxisType_t nColumn);  // 2832
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2832
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <0083A632> mathlib/mathlib.cpp:2823
// variables: 3
// function calls: 15
void QuaternionVectorsForward(const Quaternion& q, Vector* pForward)
{
	matrix3x4_t matrix; // 2830
	const char   __FUNCTION__; // 36329
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2832
	}
	Vector::operator=(
			const Vector& vOther);  // 2828
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2831
	matrix3x4_t::matrix3x4_t(); // 2830
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2832
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1041
	MatrixGetColumn(const matrix3x4_t& in,
			MatrixAxisType_t nColumn);  // 2832
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2832
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <00C36E7A> mathlib/mathlib.cpp:2823
// variables: 3
// function calls: 15
void QuaternionVectorsForward(const Quaternion& q, Vector* pForward)
{
	matrix3x4_t matrix; // 2830
	const char   __FUNCTION__; // 35894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2832
	}
	Vector::operator=(
			const Vector& vOther);  // 2828
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 2831
	matrix3x4_t::matrix3x4_t(); // 2830
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2832
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 1041
	MatrixGetColumn(const matrix3x4_t& in,
			MatrixAxisType_t nColumn);  // 2832
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 2832
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <059BDB6B> mathlib/mathlib.cpp:2837
// variables: 5
// function calls: 3
void UnitTestVectorFLU(void)
{
	{
		int i; // 2839
		{
			Quaternion q; // 2841
			Vector forward; // 2842
			Vector left; // 2842
			Vector up; // 2842
			Vector::Vector(); // 2842
			Vector::Vector(); // 2842
			Vector::Vector(); // 2842
		}
	}
} /* size: 0 */

// <059BDA22> mathlib/mathlib.cpp:2853
// variables: 3
// function calls: 2
void QuaternionAxisAngle(const Quaternion& q, Vector& vAxis, float& flDegrees)
{
	const float  flEpsilon; // 2855
	const char   __FUNCTION__; // 29241
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2856
	}
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2857
	RAD2DEG(float flRadians); // 2857
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <011888BD> mathlib/mathlib.cpp:2853
// variables: 3
// function calls: 2
void QuaternionAxisAngle(const Quaternion& q, Vector& vAxis, float& flDegrees)
{
	const float  flEpsilon; // 2855
	const char   __FUNCTION__; // 1927
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2856
	}
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2857
	RAD2DEG(float flRadians); // 2857
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <005127FF> mathlib/mathlib.cpp:2853
// variables: 3
// function calls: 2
void QuaternionAxisAngle(const Quaternion& q, Vector& vAxis, float& flDegrees)
{
	const float  flEpsilon; // 2855
	const char   __FUNCTION__; // 47355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2856
	}
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2857
	RAD2DEG(float flRadians); // 2857
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <0083A34A> mathlib/mathlib.cpp:2853
// variables: 3
// function calls: 2
void QuaternionAxisAngle(const Quaternion& q, Vector& vAxis, float& flDegrees)
{
	const float  flEpsilon; // 2855
	const char   __FUNCTION__; // 44353
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2856
	}
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2857
	RAD2DEG(float flRadians); // 2857
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00C36B92> mathlib/mathlib.cpp:2853
// variables: 3
// function calls: 2
void QuaternionAxisAngle(const Quaternion& q, Vector& vAxis, float& flDegrees)
{
	const float  flEpsilon; // 2855
	const char   __FUNCTION__; // 43918
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2856
	}
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2857
	RAD2DEG(float flRadians); // 2857
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <0118855E> mathlib/mathlib.cpp:2884
// variable: 1
// function calls: 10
Quaternion AxisAngleQuaternion(const Vector& vAxis, float flDegrees)
{
	Quaternion q; // 2886
	Quaternion::Quaternion(); // 2886
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1659
	VectorIsNormalized(const Vector& vecIn,
				float flTolerance);  // 2873
	{
	}
	DEG2RAD(float flDegrees); // 2876
	SinCos(float radians,
		float* sine,
		float* cosine);  // 2876
	AxisAngleQuaternion(const Vector& vAxis,
				float flDegrees,
				Quaternion& q);  // 2887
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <011878B8> mathlib/mathlib.cpp:2931
// variables: 7
// function calls: 21
void AngleQuaternion(const QAngle& angles, Quaternion& outQuat)
{
	VectorAligned vDegrees; // 2936
	VectorAligned vSines; // 2937
	VectorAligned vCosines; // 2938
	float srXcp; // 2943
	float crXsp; // 2943
	float crXcp; // 2947
	float srXsp; // 2947
	SinCos(float radians,
		float* sine,
		float* cosine);  // 568
	VectorAligned::operator[](
			int index);  // 568
	VectorAligned::operator[](
			int index);  // 568
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 569
	SinCos(float radians,
		float* sine,
		float* cosine);  // 569
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SubFloat<>(fltx4& a,
			int idx);  // 280
	VectorAligned::operator[](
			int index);  // 570
	SinCos(float radians,
		float* sine,
		float* cosine);  // 570
	SinCos3Scaled(const VectorAligned& vaRadians,
			float fScale,
			VectorAligned* pSines,
			VectorAligned* pCosines);  // 2940
	QAngle::operator[](
			int i);  // 2936
	QAngle::operator[](
			int i);  // 2936
	QAngle::operator[](
			int i);  // 2936
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 30
	VectorAligned::VectorAligned(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 2936
	VectorAligned::VectorAligned(); // 2937
	VectorAligned::VectorAligned(); // 2938
} /* size: 0, variables: 7, inline expansions: 21 (0 bytes) */

// <059BC5BB> mathlib/mathlib.cpp:2956
// variables: 7
// function calls: 11
void BasisToQuaternion(const Vector& vecForward, const Vector& vecRight, const Vector& vecUp, Quaternion& q)
{
	const char   __FUNCTION__; // 25140
	Vector vecLeft; // 2962
	matrix3x4_t mat; // 3014
	QAngle angles; // 3019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2960
	}
	Vector::LengthSqr(); // 2958
	Vector::LengthSqr(); // 2959
	Vector::LengthSqr(); // 2960
	Vector::Vector(); // 2962
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 2963
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3017
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3015
	matrix3x4_t::matrix3x4_t(); // 3014
	QAngle::QAngle(); // 3019
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <02BA3769> mathlib/mathlib.cpp:2956
// variables: 7
// function calls: 11
void BasisToQuaternion(const Vector& vecForward, const Vector& vecRight, const Vector& vecUp, Quaternion& q)
{
	const char   __FUNCTION__; // 41687
	Vector vecLeft; // 2962
	matrix3x4_t mat; // 3014
	QAngle angles; // 3019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2960
	}
	Vector::LengthSqr(); // 2958
	Vector::LengthSqr(); // 2959
	Vector::LengthSqr(); // 2960
	Vector::Vector(); // 2962
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 2963
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3017
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3015
	matrix3x4_t::matrix3x4_t(); // 3014
	QAngle::QAngle(); // 3019
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <01187456> mathlib/mathlib.cpp:2956
// variables: 7
// function calls: 11
void BasisToQuaternion(const Vector& vecForward, const Vector& vecRight, const Vector& vecUp, Quaternion& q)
{
	const char   __FUNCTION__; // 63362
	Vector vecLeft; // 2962
	matrix3x4_t mat; // 3014
	QAngle angles; // 3019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2960
	}
	Vector::LengthSqr(); // 2958
	Vector::LengthSqr(); // 2959
	Vector::LengthSqr(); // 2960
	Vector::Vector(); // 2962
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 2963
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3017
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3015
	matrix3x4_t::matrix3x4_t(); // 3014
	QAngle::QAngle(); // 3019
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <006BDBE8> mathlib/mathlib.cpp:2956
// variables: 7
// function calls: 11
void BasisToQuaternion(const Vector& vecForward, const Vector& vecRight, const Vector& vecUp, Quaternion& q)
{
	const char   __FUNCTION__; // 47217
	Vector vecLeft; // 2962
	matrix3x4_t mat; // 3014
	QAngle angles; // 3019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2960
	}
	Vector::LengthSqr(); // 2958
	Vector::LengthSqr(); // 2959
	Vector::LengthSqr(); // 2960
	Vector::Vector(); // 2962
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 2963
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3017
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3015
	matrix3x4_t::matrix3x4_t(); // 3014
	QAngle::QAngle(); // 3019
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00511398> mathlib/mathlib.cpp:2956
// variables: 7
// function calls: 11
void BasisToQuaternion(const Vector& vecForward, const Vector& vecRight, const Vector& vecUp, Quaternion& q)
{
	const char   __FUNCTION__; // 43254
	Vector vecLeft; // 2962
	matrix3x4_t mat; // 3014
	QAngle angles; // 3019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2960
	}
	Vector::LengthSqr(); // 2958
	Vector::LengthSqr(); // 2959
	Vector::LengthSqr(); // 2960
	Vector::Vector(); // 2962
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 2963
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3017
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3015
	matrix3x4_t::matrix3x4_t(); // 3014
	QAngle::QAngle(); // 3019
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <0086BFB9> mathlib/mathlib.cpp:2956
// variables: 7
// function calls: 11
void BasisToQuaternion(const Vector& vecForward, const Vector& vecRight, const Vector& vecUp, Quaternion& q)
{
	const char   __FUNCTION__; // 26775
	Vector vecLeft; // 2962
	matrix3x4_t mat; // 3014
	QAngle angles; // 3019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2960
	}
	Vector::LengthSqr(); // 2958
	Vector::LengthSqr(); // 2959
	Vector::LengthSqr(); // 2960
	Vector::Vector(); // 2962
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 2963
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3017
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3015
	matrix3x4_t::matrix3x4_t(); // 3014
	QAngle::QAngle(); // 3019
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00838EE3> mathlib/mathlib.cpp:2956
// variables: 7
// function calls: 11
void BasisToQuaternion(const Vector& vecForward, const Vector& vecRight, const Vector& vecUp, Quaternion& q)
{
	const char   __FUNCTION__; // 40252
	Vector vecLeft; // 2962
	matrix3x4_t mat; // 3014
	QAngle angles; // 3019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2960
	}
	Vector::LengthSqr(); // 2958
	Vector::LengthSqr(); // 2959
	Vector::LengthSqr(); // 2960
	Vector::Vector(); // 2962
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 2963
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3017
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3015
	matrix3x4_t::matrix3x4_t(); // 3014
	QAngle::QAngle(); // 3019
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00C3572B> mathlib/mathlib.cpp:2956
// variables: 7
// function calls: 11
void BasisToQuaternion(const Vector& vecForward, const Vector& vecRight, const Vector& vecUp, Quaternion& q)
{
	const char   __FUNCTION__; // 39817
	Vector vecLeft; // 2962
	matrix3x4_t mat; // 3014
	QAngle angles; // 3019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2958
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2959
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2960
	}
	Vector::LengthSqr(); // 2958
	Vector::LengthSqr(); // 2959
	Vector::LengthSqr(); // 2960
	Vector::Vector(); // 2962
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 2963
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3017
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 3015
	matrix3x4_t::matrix3x4_t(); // 3014
	QAngle::QAngle(); // 3019
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <059BC1EF> mathlib/mathlib.cpp:3103
// variable: 1
Quaternion BasisToQuaternionFLU(const Vector& vecForward, const Vector& vecLeft, const Vector& vecUp)
{
	Quaternion q; // 3105
} /* size: 0, variables: 1 */

// <01186FEC> mathlib/mathlib.cpp:3112
// variables: 2
void MatrixQuaternion(const matrix3x4_t& mat, Quaternion& q)
{
	float tr; // 3120
	float h; // 3120
} /* size: 0, variables: 2 */

// <059BBEF6> mathlib/mathlib.cpp:3179
// variable: 1
// function calls: 6
void MatrixQuaternionFast(const matrix3x4_t& mat, Quaternion& q)
{
	float t; // 3181
	Quaternion::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 3205
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 2028
	operator*(const Quaternion& q,
			float s);  // 3208
	Quaternion::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 3200
	Quaternion::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 3187
	Quaternion::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 3192
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <059BBACA> mathlib/mathlib.cpp:3212
// variables: 9
// function calls: 11
float MatrixQuaternionTest(uint nCount)
{
	float flMaxError; // 3214
	float flSumError; // 3214
	const char   __FUNCTION__; // 22285
	{
		uint i; // 3215
		{
			Quaternion q; // 3217
			Quaternion r; // 3217
			matrix3x4_t mat; // 3219
			float flError; // 3226
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3218
			}
			Quaternion::Quaternion(); // 3217
			matrix3x4_t::matrix3x4_t(); // 3219
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3220
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3222
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3224
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
		}
	}
} /* size: 0, variables: 3 */

// <02BA2C78> mathlib/mathlib.cpp:3212
// variables: 9
// function calls: 11
float MatrixQuaternionTest(uint nCount)
{
	float flMaxError; // 3214
	float flSumError; // 3214
	const char   __FUNCTION__; // 38832
	{
		uint i; // 3215
		{
			Quaternion q; // 3217
			Quaternion r; // 3217
			matrix3x4_t mat; // 3219
			float flError; // 3226
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3218
			}
			Quaternion::Quaternion(); // 3217
			matrix3x4_t::matrix3x4_t(); // 3219
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3220
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3222
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3224
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
		}
	}
} /* size: 0, variables: 3 */

// <01186965> mathlib/mathlib.cpp:3212
// variables: 9
// function calls: 11
float MatrixQuaternionTest(uint nCount)
{
	float flMaxError; // 3214
	float flSumError; // 3214
	const char   __FUNCTION__; // 60507
	{
		uint i; // 3215
		{
			Quaternion q; // 3217
			Quaternion r; // 3217
			matrix3x4_t mat; // 3219
			float flError; // 3226
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3218
			}
			Quaternion::Quaternion(); // 3217
			matrix3x4_t::matrix3x4_t(); // 3219
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3220
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3222
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3224
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
		}
	}
} /* size: 0, variables: 3 */

// <005108A7> mathlib/mathlib.cpp:3212
// variables: 9
// function calls: 11
float MatrixQuaternionTest(uint nCount)
{
	float flMaxError; // 3214
	float flSumError; // 3214
	const char   __FUNCTION__; // 40399
	{
		uint i; // 3215
		{
			Quaternion q; // 3217
			Quaternion r; // 3217
			matrix3x4_t mat; // 3219
			float flError; // 3226
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3218
			}
			Quaternion::Quaternion(); // 3217
			matrix3x4_t::matrix3x4_t(); // 3219
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3220
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3222
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3224
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
		}
	}
} /* size: 0, variables: 3 */

// <0086B4C8> mathlib/mathlib.cpp:3212
// variables: 9
// function calls: 11
float MatrixQuaternionTest(uint nCount)
{
	float flMaxError; // 3214
	float flSumError; // 3214
	const char   __FUNCTION__; // 23920
	{
		uint i; // 3215
		{
			Quaternion q; // 3217
			Quaternion r; // 3217
			matrix3x4_t mat; // 3219
			float flError; // 3226
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3218
			}
			Quaternion::Quaternion(); // 3217
			matrix3x4_t::matrix3x4_t(); // 3219
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3220
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3222
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3224
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
		}
	}
} /* size: 0, variables: 3 */

// <008383F2> mathlib/mathlib.cpp:3212
// variables: 9
// function calls: 11
float MatrixQuaternionTest(uint nCount)
{
	float flMaxError; // 3214
	float flSumError; // 3214
	const char   __FUNCTION__; // 37397
	{
		uint i; // 3215
		{
			Quaternion q; // 3217
			Quaternion r; // 3217
			matrix3x4_t mat; // 3219
			float flError; // 3226
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3218
			}
			Quaternion::Quaternion(); // 3217
			matrix3x4_t::matrix3x4_t(); // 3219
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3220
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3222
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3224
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
		}
	}
} /* size: 0, variables: 3 */

// <00C34C3A> mathlib/mathlib.cpp:3212
// variables: 9
// function calls: 11
float MatrixQuaternionTest(uint nCount)
{
	float flMaxError; // 3214
	float flSumError; // 3214
	const char   __FUNCTION__; // 36962
	{
		uint i; // 3215
		{
			Quaternion q; // 3217
			Quaternion r; // 3217
			matrix3x4_t mat; // 3219
			float flError; // 3226
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3218
			}
			Quaternion::Quaternion(); // 3217
			matrix3x4_t::matrix3x4_t(); // 3219
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3220
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3222
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3224
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
			Sqr(float f); // 3226
		}
	}
} /* size: 0, variables: 3 */

// <059BB69E> mathlib/mathlib.cpp:3237
// variables: 9
// function calls: 11
float MatrixQuaternionFastTest(uint nCount)
{
	float flMaxError; // 3239
	float flSumError; // 3239
	const char   __FUNCTION__; // 21217
	{
		uint i; // 3240
		{
			Quaternion q; // 3242
			Quaternion r; // 3242
			matrix3x4_t mat; // 3244
			float flError; // 3251
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3243
			}
			Quaternion::Quaternion(); // 3242
			matrix3x4_t::matrix3x4_t(); // 3244
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3245
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3247
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3249
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
		}
	}
} /* size: 0, variables: 3 */

// <02BA284C> mathlib/mathlib.cpp:3237
// variables: 9
// function calls: 11
float MatrixQuaternionFastTest(uint nCount)
{
	float flMaxError; // 3239
	float flSumError; // 3239
	const char   __FUNCTION__; // 37764
	{
		uint i; // 3240
		{
			Quaternion q; // 3242
			Quaternion r; // 3242
			matrix3x4_t mat; // 3244
			float flError; // 3251
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3243
			}
			Quaternion::Quaternion(); // 3242
			matrix3x4_t::matrix3x4_t(); // 3244
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3245
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3247
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3249
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
		}
	}
} /* size: 0, variables: 3 */

// <01186539> mathlib/mathlib.cpp:3237
// variables: 9
// function calls: 11
float MatrixQuaternionFastTest(uint nCount)
{
	float flMaxError; // 3239
	float flSumError; // 3239
	const char   __FUNCTION__; // 59439
	{
		uint i; // 3240
		{
			Quaternion q; // 3242
			Quaternion r; // 3242
			matrix3x4_t mat; // 3244
			float flError; // 3251
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3243
			}
			Quaternion::Quaternion(); // 3242
			matrix3x4_t::matrix3x4_t(); // 3244
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3245
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3247
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3249
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
		}
	}
} /* size: 0, variables: 3 */

// <006BCCCB> mathlib/mathlib.cpp:3237
// variables: 9
// function calls: 11
float MatrixQuaternionFastTest(uint nCount)
{
	float flMaxError; // 3239
	float flSumError; // 3239
	const char   __FUNCTION__; // 43294
	{
		uint i; // 3240
		{
			Quaternion q; // 3242
			Quaternion r; // 3242
			matrix3x4_t mat; // 3244
			float flError; // 3251
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3243
			}
			Quaternion::Quaternion(); // 3242
			matrix3x4_t::matrix3x4_t(); // 3244
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3245
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3247
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3249
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
		}
	}
} /* size: 0, variables: 3 */

// <0051047B> mathlib/mathlib.cpp:3237
// variables: 9
// function calls: 11
float MatrixQuaternionFastTest(uint nCount)
{
	float flMaxError; // 3239
	float flSumError; // 3239
	const char   __FUNCTION__; // 39331
	{
		uint i; // 3240
		{
			Quaternion q; // 3242
			Quaternion r; // 3242
			matrix3x4_t mat; // 3244
			float flError; // 3251
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3243
			}
			Quaternion::Quaternion(); // 3242
			matrix3x4_t::matrix3x4_t(); // 3244
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3245
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3247
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3249
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
		}
	}
} /* size: 0, variables: 3 */

// <00837FC6> mathlib/mathlib.cpp:3237
// variables: 9
// function calls: 11
float MatrixQuaternionFastTest(uint nCount)
{
	float flMaxError; // 3239
	float flSumError; // 3239
	const char   __FUNCTION__; // 36329
	{
		uint i; // 3240
		{
			Quaternion q; // 3242
			Quaternion r; // 3242
			matrix3x4_t mat; // 3244
			float flError; // 3251
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3243
			}
			Quaternion::Quaternion(); // 3242
			matrix3x4_t::matrix3x4_t(); // 3244
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3245
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3247
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3249
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
		}
	}
} /* size: 0, variables: 3 */

// <00C3480E> mathlib/mathlib.cpp:3237
// variables: 9
// function calls: 11
float MatrixQuaternionFastTest(uint nCount)
{
	float flMaxError; // 3239
	float flSumError; // 3239
	const char   __FUNCTION__; // 35894
	{
		uint i; // 3240
		{
			Quaternion q; // 3242
			Quaternion r; // 3242
			matrix3x4_t mat; // 3244
			float flError; // 3251
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3243
			}
			Quaternion::Quaternion(); // 3242
			matrix3x4_t::matrix3x4_t(); // 3244
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 3245
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3247
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3249
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
			Sqr(float f); // 3251
		}
	}
} /* size: 0, variables: 3 */

// <059BB1E1> mathlib/mathlib.cpp:3264
// variables: 9
// function calls: 14
float MatrixQuaternionTest2(uint nCount)
{
	float flMaxError; // 3266
	float flSumError; // 3266
	const char   __FUNCTION__; // 20149
	{
		uint i; // 3267
		{
			Quaternion q; // 3269
			Quaternion r; // 3269
			matrix3x4_t mat; // 3271
			float flError; // 3277
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3270
			}
			Quaternion::Quaternion(); // 3269
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			QuaternionMatrix(const Quaternion& q); // 3271
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 3272
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3273
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3275
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
		}
	}
} /* size: 0, variables: 3 */

// <02BA238F> mathlib/mathlib.cpp:3264
// variables: 9
// function calls: 14
float MatrixQuaternionTest2(uint nCount)
{
	float flMaxError; // 3266
	float flSumError; // 3266
	const char   __FUNCTION__; // 36696
	{
		uint i; // 3267
		{
			Quaternion q; // 3269
			Quaternion r; // 3269
			matrix3x4_t mat; // 3271
			float flError; // 3277
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3270
			}
			Quaternion::Quaternion(); // 3269
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			QuaternionMatrix(const Quaternion& q); // 3271
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 3272
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3273
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3275
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
		}
	}
} /* size: 0, variables: 3 */

// <0118607C> mathlib/mathlib.cpp:3264
// variables: 9
// function calls: 14
float MatrixQuaternionTest2(uint nCount)
{
	float flMaxError; // 3266
	float flSumError; // 3266
	const char   __FUNCTION__; // 58371
	{
		uint i; // 3267
		{
			Quaternion q; // 3269
			Quaternion r; // 3269
			matrix3x4_t mat; // 3271
			float flError; // 3277
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3270
			}
			Quaternion::Quaternion(); // 3269
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			QuaternionMatrix(const Quaternion& q); // 3271
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 3272
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3273
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3275
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
		}
	}
} /* size: 0, variables: 3 */

// <0050FFBE> mathlib/mathlib.cpp:3264
// variables: 9
// function calls: 14
float MatrixQuaternionTest2(uint nCount)
{
	float flMaxError; // 3266
	float flSumError; // 3266
	const char   __FUNCTION__; // 38263
	{
		uint i; // 3267
		{
			Quaternion q; // 3269
			Quaternion r; // 3269
			matrix3x4_t mat; // 3271
			float flError; // 3277
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3270
			}
			Quaternion::Quaternion(); // 3269
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			QuaternionMatrix(const Quaternion& q); // 3271
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 3272
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3273
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3275
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
		}
	}
} /* size: 0, variables: 3 */

// <00837B09> mathlib/mathlib.cpp:3264
// variables: 9
// function calls: 14
float MatrixQuaternionTest2(uint nCount)
{
	float flMaxError; // 3266
	float flSumError; // 3266
	const char   __FUNCTION__; // 35261
	{
		uint i; // 3267
		{
			Quaternion q; // 3269
			Quaternion r; // 3269
			matrix3x4_t mat; // 3271
			float flError; // 3277
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3270
			}
			Quaternion::Quaternion(); // 3269
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			QuaternionMatrix(const Quaternion& q); // 3271
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 3272
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3273
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3275
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
		}
	}
} /* size: 0, variables: 3 */

// <00C34351> mathlib/mathlib.cpp:3264
// variables: 9
// function calls: 14
float MatrixQuaternionTest2(uint nCount)
{
	float flMaxError; // 3266
	float flSumError; // 3266
	const char   __FUNCTION__; // 34826
	{
		uint i; // 3267
		{
			Quaternion q; // 3269
			Quaternion r; // 3269
			matrix3x4_t mat; // 3271
			float flError; // 3277
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3270
			}
			Quaternion::Quaternion(); // 3269
			matrix3x4_t::matrix3x4_t(); // 851
			QuaternionMatrixOrientationOnly(const Quaternion& q,
							matrix3x4_t& matrix);  // 2622
			QuaternionMatrix(const Quaternion& q,
					matrix3x4_t& matrix);  // 852
			QuaternionMatrix(const Quaternion& q); // 3271
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 3272
			QuaternionDotProduct(const Quaternion& p,
						const Quaternion& q);  // 3273
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 1828
			Quaternion::operator-(); // 3275
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
			Sqr(float f); // 3277
		}
	}
} /* size: 0, variables: 3 */

// <01185CCB> mathlib/mathlib.cpp:3294
// variables: 3
// function calls: 13
void QuaternionAngles(const Quaternion& q, RadianEuler& angles)
{
	matrix3x4_t matrix; // 3300
	const char   __FUNCTION__; // 14708
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3304
	}
	matrix3x4_t::matrix3x4_t(); // 3300
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 3301
	QAngle::QAngle(); // 1268
	RadianEuler::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2535
	RadianEuler::RadianEuler(
			const QAngle& angles);  // 1270
	MatrixAngles(const matrix3x4_t& matrix,
			RadianEuler& angles);  // 3302
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	RadianEuler::IsValid(); // 3304
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <006BC45D> mathlib/mathlib.cpp:3294
// variables: 3
// function calls: 13
void QuaternionAngles(const Quaternion& q, RadianEuler& angles)
{
	matrix3x4_t matrix; // 3300
	const char   __FUNCTION__; // 64099
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3304
	}
	matrix3x4_t::matrix3x4_t(); // 3300
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 3301
	QAngle::QAngle(); // 1268
	RadianEuler::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2535
	RadianEuler::RadianEuler(
			const QAngle& angles);  // 1270
	MatrixAngles(const matrix3x4_t& matrix,
			RadianEuler& angles);  // 3302
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	RadianEuler::IsValid(); // 3304
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <0050FC0D> mathlib/mathlib.cpp:3294
// variables: 3
// function calls: 13
void QuaternionAngles(const Quaternion& q, RadianEuler& angles)
{
	matrix3x4_t matrix; // 3300
	const char   __FUNCTION__; // 60136
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3304
	}
	matrix3x4_t::matrix3x4_t(); // 3300
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 3301
	QAngle::QAngle(); // 1268
	RadianEuler::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2535
	RadianEuler::RadianEuler(
			const QAngle& angles);  // 1270
	MatrixAngles(const matrix3x4_t& matrix,
			RadianEuler& angles);  // 3302
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	RadianEuler::IsValid(); // 3304
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <0086A82E> mathlib/mathlib.cpp:3294
// variables: 3
// function calls: 13
void QuaternionAngles(const Quaternion& q, RadianEuler& angles)
{
	matrix3x4_t matrix; // 3300
	const char   __FUNCTION__; // 43657
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3304
	}
	matrix3x4_t::matrix3x4_t(); // 3300
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 3301
	QAngle::QAngle(); // 1268
	RadianEuler::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2535
	RadianEuler::RadianEuler(
			const QAngle& angles);  // 1270
	MatrixAngles(const matrix3x4_t& matrix,
			RadianEuler& angles);  // 3302
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	RadianEuler::IsValid(); // 3304
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <00C33FA0> mathlib/mathlib.cpp:3294
// variables: 3
// function calls: 13
void QuaternionAngles(const Quaternion& q, RadianEuler& angles)
{
	matrix3x4_t matrix; // 3300
	const char   __FUNCTION__; // 56699
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3304
	}
	matrix3x4_t::matrix3x4_t(); // 3300
	QuaternionMatrix(const Quaternion& q,
			matrix3x4_t& matrix);  // 3301
	QAngle::QAngle(); // 1268
	RadianEuler::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2535
	RadianEuler::RadianEuler(
			const QAngle& angles);  // 1270
	MatrixAngles(const matrix3x4_t& matrix,
			RadianEuler& angles);  // 3302
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 2161
	RadianEuler::IsValid(); // 3304
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <059B98AE> mathlib/mathlib.cpp:3327
// variables: 39
// function calls: 75
void QuaternionSM(float s, const QuaternionAligned& p, const QuaternionAligned& q, QuaternionAligned& qt)
{
	Quaternion p1; // 3329
	QuaternionAligned q1; // 3330
	Quaternion::Quaternion(); // 3329
	QuaternionAligned::QuaternionAligned(); // 3330
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 3331
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 3332
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 465
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 466
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 467
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 468
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 1797
	NegSIMD<>(const fltx4& a); // 469
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 469
	QuaternionAlignSIMD<>(const fltx4& p,
				const fltx4& q);  // 918
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 918
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 301
	QuaternionAligned::operator*=(
			const QuaternionAligned& q);  // 302
	QuaternionAligned::operator*(
			const QuaternionAligned& q);  // 920
	QuaternionMultAligned(const QuaternionAligned& p,
				const QuaternionAligned& q,
				QuaternionAligned& qt);  // 3332
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1725
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1728
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1730
		{
			fltx4 retVal; // 373
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 374
		}
		RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 1732
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1733
	}
	Dot4SIMD<>(const fltx4& a,
			const fltx4& b);  // 392
	QuaternionAligned::operator fltx4(); // 397
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 395
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 393
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 397
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 397
	QuaternionAligned::Normalize(); // 3333
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 3335
} /* size: 0, variables: 2, inline expansions: 35 (0 bytes) */

// <059B80F2> mathlib/mathlib.cpp:3372
// variable: 1
// function calls: 5
void QuaternionAccumulate(const Quaternion& p, float s, const Quaternion& q, Quaternion& qt)
{
	Quaternion q2; // 3374
	Quaternion::Quaternion(); // 3374
	Quaternion::operator[](
			int i);  // 3377
	Quaternion::operator[](
			int i);  // 3378
	Quaternion::operator[](
			int i);  // 3379
	Quaternion::operator[](
			int i);  // 3380
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <059B7DFB> mathlib/mathlib.cpp:3391
// variable: 1
// function calls: 10
void Spline_Normalize(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, Vector& p1n, Vector& p4n)
{
	float dt; // 3399
	Vector::operator=(
			const Vector& vOther);  // 3401
	Vector::operator=(
			const Vector& vOther);  // 3402
	VectorLerp(const Vector& src1,
			const Vector& src2,
			vec_t t,
			Vector& dest);  // 1148
	Vector::Vector(); // 1147
	VectorLerp(const Vector& src1,
			const Vector& src2,
			vec_t t);  // 3414
	Vector::operator=(
			const Vector& vOther);  // 3414
	VectorLerp(const Vector& src1,
			const Vector& src2,
			vec_t t,
			Vector& dest);  // 1148
	Vector::Vector(); // 1147
	VectorLerp(const Vector& src1,
			const Vector& src2,
			vec_t t);  // 3409
	Vector::operator=(
			const Vector& vOther);  // 3409
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <059B729C> mathlib/mathlib.cpp:3421
// variables: 11
// function calls: 36
void Catmull_Rom_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3430
	float tSqrSqr; // 3431
	const char   __FUNCTION__; // 5650
	Vector a; // 3441
	Vector b; // 3441
	Vector c; // 3441
	Vector d; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3437
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3439
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3444
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3447
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3445
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3449
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3446
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3450
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3451
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3452
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3455
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3456
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3457
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3458
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3461
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3462
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3463
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3466
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3469
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3470
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3473
} /* size: 0, variables: 7, inline expansions: 36 (0 bytes) */

// <02B9E44A> mathlib/mathlib.cpp:3421
// variables: 11
// function calls: 36
void Catmull_Rom_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3430
	float tSqrSqr; // 3431
	const char   __FUNCTION__; // 22197
	Vector a; // 3441
	Vector b; // 3441
	Vector c; // 3441
	Vector d; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3437
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3439
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3444
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3447
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3445
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3449
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3446
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3450
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3451
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3452
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3455
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3456
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3457
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3458
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3461
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3462
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3463
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3466
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3469
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3470
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3473
} /* size: 0, variables: 7, inline expansions: 36 (0 bytes) */

// <01182137> mathlib/mathlib.cpp:3421
// variables: 11
// function calls: 36
void Catmull_Rom_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3430
	float tSqrSqr; // 3431
	const char   __FUNCTION__; // 43872
	Vector a; // 3441
	Vector b; // 3441
	Vector c; // 3441
	Vector d; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3437
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3439
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3444
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3447
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3445
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3449
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3446
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3450
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3451
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3452
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3455
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3456
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3457
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3458
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3461
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3462
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3463
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3466
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3469
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3470
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3473
} /* size: 0, variables: 7, inline expansions: 36 (0 bytes) */

// <006B88C9> mathlib/mathlib.cpp:3421
// variables: 11
// function calls: 36
void Catmull_Rom_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3430
	float tSqrSqr; // 3431
	const char   __FUNCTION__; // 27727
	Vector a; // 3441
	Vector b; // 3441
	Vector c; // 3441
	Vector d; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3437
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3439
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3444
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3447
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3445
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3449
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3446
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3450
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3451
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3452
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3455
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3456
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3457
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3458
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3461
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3462
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3463
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3466
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3469
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3470
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3473
} /* size: 0, variables: 7, inline expansions: 36 (0 bytes) */

// <0050C079> mathlib/mathlib.cpp:3421
// variables: 11
// function calls: 36
void Catmull_Rom_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3430
	float tSqrSqr; // 3431
	const char   __FUNCTION__; // 23764
	Vector a; // 3441
	Vector b; // 3441
	Vector c; // 3441
	Vector d; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3437
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3439
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3444
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3447
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3445
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3449
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3446
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3450
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3451
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3452
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3455
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3456
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3457
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3458
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3461
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3462
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3463
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3466
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3469
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3470
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3473
} /* size: 0, variables: 7, inline expansions: 36 (0 bytes) */

// <00866C9A> mathlib/mathlib.cpp:3421
// variables: 11
// function calls: 36
void Catmull_Rom_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3430
	float tSqrSqr; // 3431
	const char   __FUNCTION__; // 7285
	Vector a; // 3441
	Vector b; // 3441
	Vector c; // 3441
	Vector d; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3437
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3439
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3444
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3447
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3445
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3449
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3446
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3450
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3451
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3452
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3455
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3456
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3457
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3458
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3461
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3462
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3463
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3466
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3469
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3470
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3473
} /* size: 0, variables: 7, inline expansions: 36 (0 bytes) */

// <00833BC4> mathlib/mathlib.cpp:3421
// variables: 11
// function calls: 36
void Catmull_Rom_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3430
	float tSqrSqr; // 3431
	const char   __FUNCTION__; // 20762
	Vector a; // 3441
	Vector b; // 3441
	Vector c; // 3441
	Vector d; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3437
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3439
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3444
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3447
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3445
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3449
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3446
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3450
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3451
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3452
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3455
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3456
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3457
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3458
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3461
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3462
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3463
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3466
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3469
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3470
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3473
} /* size: 0, variables: 7, inline expansions: 36 (0 bytes) */

// <00C3040C> mathlib/mathlib.cpp:3421
// variables: 11
// function calls: 36
void Catmull_Rom_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3430
	float tSqrSqr; // 3431
	const char   __FUNCTION__; // 20327
	Vector a; // 3441
	Vector b; // 3441
	Vector c; // 3441
	Vector d; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3437
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3439
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3444
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	Vector::Vector(); // 3441
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3447
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3445
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3449
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3446
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3450
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3451
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3452
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3455
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3456
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3457
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3458
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3461
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3462
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3463
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3466
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3467
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3469
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3470
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3473
} /* size: 0, variables: 7, inline expansions: 36 (0 bytes) */

// <059B677A> mathlib/mathlib.cpp:3478
// variables: 12
// function calls: 35
void Catmull_Rom_Spline_Tangent(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tOne; // 3487
	float tTwo; // 3488
	float tThree; // 3489
	const char   __FUNCTION__; // 2739
	Vector a; // 3498
	Vector b; // 3498
	Vector c; // 3498
	Vector d; // 3498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3491
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3492
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3494
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3496
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3501
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3502
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3504
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3503
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3506
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3507
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3508
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3509
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3517
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3512
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3513
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3514
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3515
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3518
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3519
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3520
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3526
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3523
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3524
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3527
} /* size: 0, variables: 8, inline expansions: 35 (0 bytes) */

// <01181615> mathlib/mathlib.cpp:3478
// variables: 12
// function calls: 35
void Catmull_Rom_Spline_Tangent(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tOne; // 3487
	float tTwo; // 3488
	float tThree; // 3489
	const char   __FUNCTION__; // 40961
	Vector a; // 3498
	Vector b; // 3498
	Vector c; // 3498
	Vector d; // 3498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3491
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3492
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3494
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3496
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3501
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3502
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3504
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3503
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3506
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3507
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3508
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3509
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3517
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3512
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3513
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3514
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3515
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3518
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3519
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3520
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3526
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3523
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3524
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3527
} /* size: 0, variables: 8, inline expansions: 35 (0 bytes) */

// <006B7DA7> mathlib/mathlib.cpp:3478
// variables: 12
// function calls: 35
void Catmull_Rom_Spline_Tangent(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tOne; // 3487
	float tTwo; // 3488
	float tThree; // 3489
	const char   __FUNCTION__; // 24816
	Vector a; // 3498
	Vector b; // 3498
	Vector c; // 3498
	Vector d; // 3498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3491
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3492
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3494
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3496
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3501
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3502
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3504
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3503
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3506
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3507
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3508
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3509
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3517
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3512
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3513
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3514
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3515
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3518
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3519
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3520
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3526
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3523
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3524
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3527
} /* size: 0, variables: 8, inline expansions: 35 (0 bytes) */

// <0050B557> mathlib/mathlib.cpp:3478
// variables: 12
// function calls: 35
void Catmull_Rom_Spline_Tangent(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tOne; // 3487
	float tTwo; // 3488
	float tThree; // 3489
	const char   __FUNCTION__; // 20853
	Vector a; // 3498
	Vector b; // 3498
	Vector c; // 3498
	Vector d; // 3498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3491
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3492
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3494
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3496
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3501
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3502
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3504
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3503
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3506
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3507
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3508
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3509
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3517
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3512
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3513
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3514
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3515
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3518
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3519
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3520
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3526
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3523
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3524
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3527
} /* size: 0, variables: 8, inline expansions: 35 (0 bytes) */

// <00866178> mathlib/mathlib.cpp:3478
// variables: 12
// function calls: 35
void Catmull_Rom_Spline_Tangent(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tOne; // 3487
	float tTwo; // 3488
	float tThree; // 3489
	const char   __FUNCTION__; // 4374
	Vector a; // 3498
	Vector b; // 3498
	Vector c; // 3498
	Vector d; // 3498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3491
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3492
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3494
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3496
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3501
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3502
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3504
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3503
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3506
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3507
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3508
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3509
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3517
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3512
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3513
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3514
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3515
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3518
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3519
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3520
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3526
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3523
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3524
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3527
} /* size: 0, variables: 8, inline expansions: 35 (0 bytes) */

// <008330A2> mathlib/mathlib.cpp:3478
// variables: 12
// function calls: 35
void Catmull_Rom_Spline_Tangent(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tOne; // 3487
	float tTwo; // 3488
	float tThree; // 3489
	const char   __FUNCTION__; // 17851
	Vector a; // 3498
	Vector b; // 3498
	Vector c; // 3498
	Vector d; // 3498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3491
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3492
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3494
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3496
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3501
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3502
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3504
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3503
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3506
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3507
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3508
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3509
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3517
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3512
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3513
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3514
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3515
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3518
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3519
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3520
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3526
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3523
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3524
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3527
} /* size: 0, variables: 8, inline expansions: 35 (0 bytes) */

// <00C2F8EA> mathlib/mathlib.cpp:3478
// variables: 12
// function calls: 35
void Catmull_Rom_Spline_Tangent(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tOne; // 3487
	float tTwo; // 3488
	float tThree; // 3489
	const char   __FUNCTION__; // 17416
	Vector a; // 3498
	Vector b; // 3498
	Vector c; // 3498
	Vector d; // 3498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3491
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3492
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3494
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3496
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3501
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	Vector::Vector(); // 3498
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3502
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3504
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3503
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3506
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3507
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3508
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3509
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3517
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3512
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3513
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3514
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3515
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3518
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3519
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3520
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3526
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3523
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3524
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3527
} /* size: 0, variables: 8, inline expansions: 35 (0 bytes) */

// <059B4D73> mathlib/mathlib.cpp:3550
// function calls: 29
void Catmull_Rom_Spline_Integral(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, Vector& vOutput)
{
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 3557
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 3557
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 3557
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 3557
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 3557
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 3557
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 3557
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 3557
	Vector::operator=(
			const Vector& vOther);  // 3557
} /* size: 0, inline expansions: 29 (0 bytes) */

// <059B48F6> mathlib/mathlib.cpp:3562
// variables: 3
// function calls: 15
void Catmull_Rom_Spline_Normalize(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float dt; // 3571
	Vector p1n; // 3573
	Vector p4n; // 3573
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1306
	Vector::Vector(); // 1305
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1307
	Vector::DistTo(
		const Vector& vOther);  // 3571
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 3575
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 3574
	Vector::Vector(); // 3573
	Vector::Vector(); // 3573
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 3580
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 3581
} /* size: 0, variables: 3, inline expansions: 15 (0 bytes) */

// <059B447C> mathlib/mathlib.cpp:3587
// variables: 3
// function calls: 15
void Catmull_Rom_Spline_Integral_Normalize(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float dt; // 3596
	Vector p1n; // 3598
	Vector p4n; // 3598
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1306
	Vector::Vector(); // 1305
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1307
	Vector::DistTo(
		const Vector& vOther);  // 3596
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 3600
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 3599
	Vector::Vector(); // 3598
	Vector::Vector(); // 3598
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 3605
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 3606
} /* size: 0, variables: 3, inline expansions: 15 (0 bytes) */

// <059B42CF> mathlib/mathlib.cpp:3613
// variables: 2
// function calls: 2
void Catmull_Rom_Spline_NormalizeX(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	Vector p1n; // 3621
	Vector p4n; // 3621
	Vector::Vector(); // 3621
	Vector::Vector(); // 3621
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <059B3D2C> mathlib/mathlib.cpp:3715
// variables: 2
void Hermite_SplineBasis(float t, float* basis)
{
	float tSqr; // 3717
	float tCube; // 3718
} /* size: 0, variables: 2 */

// <059B315A> mathlib/mathlib.cpp:3756
// variables: 2
// function calls: 8
void Hermite_Spline(const Quaternion& q0, const Quaternion& q1, const Quaternion& q2, float t, Quaternion& qOutput)
{
	Quaternion q0a; // 3759
	Quaternion q1a; // 3760
	Hermite_Spline(float p1,
			float p2,
			float d1,
			float d2,
			float t);  // 3752
	Hermite_Spline(float p0,
			float p1,
			float p2,
			float t);  // 3765
	Hermite_Spline(float p1,
			float p2,
			float d1,
			float d2,
			float t);  // 3752
	Hermite_Spline(float p0,
			float p1,
			float p2,
			float t);  // 3766
	Hermite_Spline(float p1,
			float p2,
			float d1,
			float d2,
			float t);  // 3752
	Hermite_Spline(float p0,
			float p1,
			float p2,
			float t);  // 3767
	Hermite_Spline(float p1,
			float p2,
			float d1,
			float d2,
			float t);  // 3752
	Hermite_Spline(float p0,
			float p1,
			float p2,
			float t);  // 3768
} /* size: 0, variables: 2, inline expansions: 8 (0 bytes) */

// <059B2493> mathlib/mathlib.cpp:3786
// variables: 15
// function calls: 39
void Kochanek_Bartels_Spline(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float ffa; // 3799
	float ffb; // 3799
	float ffc; // 3799
	float ffd; // 3799
	float tSqr; // 3806
	float tSqrSqr; // 3807
	const char   __FUNCTION__; // 51569
	Vector a; // 3817
	Vector b; // 3817
	Vector c; // 3817
	Vector d; // 3817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3810
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3811
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3812
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3813
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3815
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3820
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3821
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3825
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3822
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3823
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3826
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3827
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3828
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3831
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3842
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3832
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3836
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3833
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3834
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3837
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3838
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3839
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3843
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3844
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3847
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3848
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3849
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3855
} /* size: 0, variables: 11, inline expansions: 39 (0 bytes) */

// <02B99641> mathlib/mathlib.cpp:3786
// variables: 15
// function calls: 39
void Kochanek_Bartels_Spline(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float ffa; // 3799
	float ffb; // 3799
	float ffc; // 3799
	float ffd; // 3799
	float tSqr; // 3806
	float tSqrSqr; // 3807
	const char   __FUNCTION__; // 2580
	Vector a; // 3817
	Vector b; // 3817
	Vector c; // 3817
	Vector d; // 3817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3810
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3811
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3812
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3813
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3815
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3820
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3821
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3825
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3822
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3823
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3826
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3827
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3828
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3831
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3842
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3832
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3836
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3833
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3834
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3837
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3838
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3839
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3843
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3844
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3847
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3848
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3849
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3855
} /* size: 0, variables: 11, inline expansions: 39 (0 bytes) */

// <0117D32E> mathlib/mathlib.cpp:3786
// variables: 15
// function calls: 39
void Kochanek_Bartels_Spline(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float ffa; // 3799
	float ffb; // 3799
	float ffc; // 3799
	float ffd; // 3799
	float tSqr; // 3806
	float tSqrSqr; // 3807
	const char   __FUNCTION__; // 24255
	Vector a; // 3817
	Vector b; // 3817
	Vector c; // 3817
	Vector d; // 3817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3810
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3811
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3812
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3813
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3815
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3820
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3821
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3825
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3822
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3823
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3826
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3827
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3828
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3831
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3842
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3832
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3836
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3833
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3834
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3837
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3838
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3839
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3843
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3844
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3847
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3848
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3849
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3855
} /* size: 0, variables: 11, inline expansions: 39 (0 bytes) */

// <006B3AC0> mathlib/mathlib.cpp:3786
// variables: 15
// function calls: 39
void Kochanek_Bartels_Spline(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float ffa; // 3799
	float ffb; // 3799
	float ffc; // 3799
	float ffd; // 3799
	float tSqr; // 3806
	float tSqrSqr; // 3807
	const char   __FUNCTION__; // 8110
	Vector a; // 3817
	Vector b; // 3817
	Vector c; // 3817
	Vector d; // 3817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3810
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3811
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3812
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3813
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3815
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3820
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3821
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3825
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3822
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3823
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3826
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3827
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3828
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3831
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3842
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3832
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3836
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3833
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3834
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3837
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3838
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3839
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3843
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3844
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3847
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3848
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3849
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3855
} /* size: 0, variables: 11, inline expansions: 39 (0 bytes) */

// <00507270> mathlib/mathlib.cpp:3786
// variables: 15
// function calls: 39
void Kochanek_Bartels_Spline(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float ffa; // 3799
	float ffb; // 3799
	float ffc; // 3799
	float ffd; // 3799
	float tSqr; // 3806
	float tSqrSqr; // 3807
	const char   __FUNCTION__; // 4147
	Vector a; // 3817
	Vector b; // 3817
	Vector c; // 3817
	Vector d; // 3817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3810
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3811
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3812
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3813
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3815
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3820
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3821
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3825
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3822
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3823
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3826
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3827
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3828
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3831
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3842
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3832
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3836
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3833
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3834
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3837
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3838
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3839
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3843
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3844
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3847
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3848
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3849
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3855
} /* size: 0, variables: 11, inline expansions: 39 (0 bytes) */

// <00861E91> mathlib/mathlib.cpp:3786
// variables: 15
// function calls: 39
void Kochanek_Bartels_Spline(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float ffa; // 3799
	float ffb; // 3799
	float ffc; // 3799
	float ffd; // 3799
	float tSqr; // 3806
	float tSqrSqr; // 3807
	const char   __FUNCTION__; // 53204
	Vector a; // 3817
	Vector b; // 3817
	Vector c; // 3817
	Vector d; // 3817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3810
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3811
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3812
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3813
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3815
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3820
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3821
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3825
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3822
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3823
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3826
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3827
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3828
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3831
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3842
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3832
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3836
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3833
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3834
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3837
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3838
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3839
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3843
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3844
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3847
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3848
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3849
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3855
} /* size: 0, variables: 11, inline expansions: 39 (0 bytes) */

// <0082EDBB> mathlib/mathlib.cpp:3786
// variables: 15
// function calls: 39
void Kochanek_Bartels_Spline(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float ffa; // 3799
	float ffb; // 3799
	float ffc; // 3799
	float ffd; // 3799
	float tSqr; // 3806
	float tSqrSqr; // 3807
	const char   __FUNCTION__; // 1145
	Vector a; // 3817
	Vector b; // 3817
	Vector c; // 3817
	Vector d; // 3817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3810
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3811
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3812
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3813
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3815
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3820
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3821
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3825
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3822
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3823
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3826
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3827
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3828
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3831
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3842
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3832
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3836
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3833
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3834
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3837
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3838
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3839
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3843
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3844
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3847
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3848
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3849
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3855
} /* size: 0, variables: 11, inline expansions: 39 (0 bytes) */

// <00C2B603> mathlib/mathlib.cpp:3786
// variables: 15
// function calls: 39
void Kochanek_Bartels_Spline(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float ffa; // 3799
	float ffb; // 3799
	float ffc; // 3799
	float ffd; // 3799
	float tSqr; // 3806
	float tSqrSqr; // 3807
	const char   __FUNCTION__; // 710
	Vector a; // 3817
	Vector b; // 3817
	Vector c; // 3817
	Vector d; // 3817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3810
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3811
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3812
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3813
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3815
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	Vector::Vector(); // 3817
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3820
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3821
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3825
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3822
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3823
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3826
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3827
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3828
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3831
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3842
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3832
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3836
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3833
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3834
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3837
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3838
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3839
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3843
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3844
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3847
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3848
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3849
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3855
} /* size: 0, variables: 11, inline expansions: 39 (0 bytes) */

// <059B228C> mathlib/mathlib.cpp:3858
// variables: 2
// function calls: 2
void Kochanek_Bartels_Spline_NormalizeX(float tension, float bias, float continuity, const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	Vector p1n; // 3869
	Vector p4n; // 3869
	Vector::Vector(); // 3869
	Vector::Vector(); // 3869
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <059B1BE0> mathlib/mathlib.cpp:3874
// variables: 11
// function calls: 18
void Cubic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3884
	float tSqrSqr; // 3885
	const char   __FUNCTION__; // 3546
	Vector a; // 3894
	Vector b; // 3894
	Vector c; // 3894
	Vector d; // 3894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3887
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3888
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3889
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3890
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3892
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3897
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3898
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3900
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3904
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3901
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3907
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3905
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3908
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3916
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <02B98D8E> mathlib/mathlib.cpp:3874
// variables: 11
// function calls: 18
void Cubic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3884
	float tSqrSqr; // 3885
	const char   __FUNCTION__; // 20093
	Vector a; // 3894
	Vector b; // 3894
	Vector c; // 3894
	Vector d; // 3894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3887
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3888
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3889
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3890
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3892
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3897
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3898
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3900
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3904
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3901
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3907
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3905
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3908
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3916
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <0117CA7B> mathlib/mathlib.cpp:3874
// variables: 11
// function calls: 18
void Cubic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3884
	float tSqrSqr; // 3885
	const char   __FUNCTION__; // 41768
	Vector a; // 3894
	Vector b; // 3894
	Vector c; // 3894
	Vector d; // 3894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3887
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3888
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3889
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3890
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3892
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3897
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3898
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3900
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3904
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3901
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3907
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3905
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3908
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3916
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <006B320D> mathlib/mathlib.cpp:3874
// variables: 11
// function calls: 18
void Cubic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3884
	float tSqrSqr; // 3885
	const char   __FUNCTION__; // 25623
	Vector a; // 3894
	Vector b; // 3894
	Vector c; // 3894
	Vector d; // 3894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3887
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3888
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3889
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3890
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3892
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3897
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3898
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3900
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3904
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3901
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3907
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3905
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3908
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3916
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <005069BD> mathlib/mathlib.cpp:3874
// variables: 11
// function calls: 18
void Cubic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3884
	float tSqrSqr; // 3885
	const char   __FUNCTION__; // 21660
	Vector a; // 3894
	Vector b; // 3894
	Vector c; // 3894
	Vector d; // 3894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3887
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3888
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3889
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3890
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3892
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3897
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3898
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3900
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3904
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3901
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3907
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3905
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3908
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3916
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <008615DE> mathlib/mathlib.cpp:3874
// variables: 11
// function calls: 18
void Cubic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3884
	float tSqrSqr; // 3885
	const char   __FUNCTION__; // 5181
	Vector a; // 3894
	Vector b; // 3894
	Vector c; // 3894
	Vector d; // 3894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3887
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3888
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3889
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3890
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3892
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3897
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3898
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3900
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3904
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3901
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3907
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3905
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3908
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3916
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <0082E508> mathlib/mathlib.cpp:3874
// variables: 11
// function calls: 18
void Cubic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3884
	float tSqrSqr; // 3885
	const char   __FUNCTION__; // 18658
	Vector a; // 3894
	Vector b; // 3894
	Vector c; // 3894
	Vector d; // 3894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3887
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3888
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3889
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3890
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3892
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3897
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3898
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3900
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3904
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3901
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3907
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3905
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3908
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3916
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <00C2AD50> mathlib/mathlib.cpp:3874
// variables: 11
// function calls: 18
void Cubic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 3884
	float tSqrSqr; // 3885
	const char   __FUNCTION__; // 18223
	Vector a; // 3894
	Vector b; // 3894
	Vector c; // 3894
	Vector d; // 3894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3887
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3888
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3889
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3890
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3892
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	Vector::Vector(); // 3894
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3897
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3898
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3900
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3904
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3901
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3907
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3905
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3908
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3916
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <059B1A68> mathlib/mathlib.cpp:3919
// variables: 2
// function calls: 2
void Cubic_Spline_NormalizeX(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	Vector p1n; // 3927
	Vector p4n; // 3927
	Vector::Vector(); // 3927
	Vector::Vector(); // 3927
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <059B0DBC> mathlib/mathlib.cpp:3932
// variables: 12
// function calls: 41
void BSpline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float oneOver6; // 3942
	float tSqr; // 3944
	float tSqrSqr; // 3945
	const char   __FUNCTION__; // 45695
	Vector a; // 3955
	Vector b; // 3955
	Vector c; // 3955
	Vector d; // 3955
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3948
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3951
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3953
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3958
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3961
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3959
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3963
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3960
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3964
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3965
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3966
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3969
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3973
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3970
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3971
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3974
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3975
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3978
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3979
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3982
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3983
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3987
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3988
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3989
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3991
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3992
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3993
} /* size: 0, variables: 8, inline expansions: 41 (0 bytes) */

// <02B97F6A> mathlib/mathlib.cpp:3932
// variables: 12
// function calls: 41
void BSpline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float oneOver6; // 3942
	float tSqr; // 3944
	float tSqrSqr; // 3945
	const char   __FUNCTION__; // 62242
	Vector a; // 3955
	Vector b; // 3955
	Vector c; // 3955
	Vector d; // 3955
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3948
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3951
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3953
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3958
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3961
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3959
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3963
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3960
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3964
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3965
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3966
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3969
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3973
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3970
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3971
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3974
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3975
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3978
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3979
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3982
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3983
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3987
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3988
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3989
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3991
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3992
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3993
} /* size: 0, variables: 8, inline expansions: 41 (0 bytes) */

// <0117BC57> mathlib/mathlib.cpp:3932
// variables: 12
// function calls: 41
void BSpline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float oneOver6; // 3942
	float tSqr; // 3944
	float tSqrSqr; // 3945
	const char   __FUNCTION__; // 18381
	Vector a; // 3955
	Vector b; // 3955
	Vector c; // 3955
	Vector d; // 3955
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3948
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3951
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3953
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3958
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3961
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3959
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3963
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3960
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3964
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3965
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3966
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3969
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3973
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3970
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3971
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3974
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3975
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3978
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3979
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3982
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3983
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3987
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3988
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3989
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3991
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3992
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3993
} /* size: 0, variables: 8, inline expansions: 41 (0 bytes) */

// <006B23E9> mathlib/mathlib.cpp:3932
// variables: 12
// function calls: 41
void BSpline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float oneOver6; // 3942
	float tSqr; // 3944
	float tSqrSqr; // 3945
	const char   __FUNCTION__; // 2236
	Vector a; // 3955
	Vector b; // 3955
	Vector c; // 3955
	Vector d; // 3955
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3948
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3951
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3953
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3958
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3961
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3959
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3963
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3960
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3964
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3965
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3966
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3969
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3973
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3970
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3971
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3974
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3975
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3978
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3979
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3982
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3983
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3987
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3988
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3989
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3991
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3992
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3993
} /* size: 0, variables: 8, inline expansions: 41 (0 bytes) */

// <00505B99> mathlib/mathlib.cpp:3932
// variables: 12
// function calls: 41
void BSpline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float oneOver6; // 3942
	float tSqr; // 3944
	float tSqrSqr; // 3945
	const char   __FUNCTION__; // 63809
	Vector a; // 3955
	Vector b; // 3955
	Vector c; // 3955
	Vector d; // 3955
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3948
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3951
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3953
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3958
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3961
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3959
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3963
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3960
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3964
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3965
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3966
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3969
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3973
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3970
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3971
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3974
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3975
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3978
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3979
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3982
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3983
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3987
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3988
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3989
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3991
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3992
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3993
} /* size: 0, variables: 8, inline expansions: 41 (0 bytes) */

// <008607BA> mathlib/mathlib.cpp:3932
// variables: 12
// function calls: 41
void BSpline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float oneOver6; // 3942
	float tSqr; // 3944
	float tSqrSqr; // 3945
	const char   __FUNCTION__; // 47330
	Vector a; // 3955
	Vector b; // 3955
	Vector c; // 3955
	Vector d; // 3955
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3948
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3951
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3953
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3958
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3961
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3959
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3963
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3960
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3964
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3965
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3966
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3969
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3973
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3970
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3971
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3974
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3975
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3978
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3979
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3982
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3983
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3987
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3988
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3989
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3991
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3992
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3993
} /* size: 0, variables: 8, inline expansions: 41 (0 bytes) */

// <00C29F2C> mathlib/mathlib.cpp:3932
// variables: 12
// function calls: 41
void BSpline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float oneOver6; // 3942
	float tSqr; // 3944
	float tSqrSqr; // 3945
	const char   __FUNCTION__; // 60372
	Vector a; // 3955
	Vector b; // 3955
	Vector c; // 3955
	Vector d; // 3955
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3948
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3949
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3951
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3953
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3958
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3961
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	Vector::Vector(); // 3955
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3959
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3963
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3960
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3964
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3965
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3966
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3969
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3973
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3970
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3971
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3974
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3975
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3978
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3979
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3982
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3983
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3987
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3988
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 3989
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3991
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3992
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 3993
} /* size: 0, variables: 8, inline expansions: 41 (0 bytes) */

// <059B0C0F> mathlib/mathlib.cpp:3996
// variables: 2
// function calls: 2
void BSpline_NormalizeX(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	Vector p1n; // 4004
	Vector p4n; // 4004
	Vector::Vector(); // 4004
	Vector::Vector(); // 4004
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <059B035B> mathlib/mathlib.cpp:4009
// variables: 10
// function calls: 26
void Parabolic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 4019
	const char   __FUNCTION__; // 42022
	Vector a; // 4029
	Vector b; // 4029
	Vector c; // 4029
	Vector d; // 4029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4023
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4024
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4025
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 4027
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4035
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4039
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4036
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4037
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4040
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4041
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4044
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4045
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4048
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4049
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4052
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4053
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4055
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4056
} /* size: 0, variables: 6, inline expansions: 26 (0 bytes) */

// <02B97509> mathlib/mathlib.cpp:4009
// variables: 10
// function calls: 26
void Parabolic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 4019
	const char   __FUNCTION__; // 58569
	Vector a; // 4029
	Vector b; // 4029
	Vector c; // 4029
	Vector d; // 4029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4023
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4024
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4025
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 4027
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4035
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4039
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4036
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4037
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4040
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4041
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4044
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4045
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4048
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4049
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4052
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4053
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4055
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4056
} /* size: 0, variables: 6, inline expansions: 26 (0 bytes) */

// <0117B1F6> mathlib/mathlib.cpp:4009
// variables: 10
// function calls: 26
void Parabolic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 4019
	const char   __FUNCTION__; // 14708
	Vector a; // 4029
	Vector b; // 4029
	Vector c; // 4029
	Vector d; // 4029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4023
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4024
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4025
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 4027
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4035
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4039
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4036
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4037
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4040
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4041
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4044
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4045
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4048
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4049
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4052
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4053
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4055
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4056
} /* size: 0, variables: 6, inline expansions: 26 (0 bytes) */

// <006B1988> mathlib/mathlib.cpp:4009
// variables: 10
// function calls: 26
void Parabolic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 4019
	const char   __FUNCTION__; // 64099
	Vector a; // 4029
	Vector b; // 4029
	Vector c; // 4029
	Vector d; // 4029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4023
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4024
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4025
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 4027
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4035
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4039
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4036
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4037
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4040
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4041
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4044
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4045
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4048
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4049
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4052
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4053
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4055
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4056
} /* size: 0, variables: 6, inline expansions: 26 (0 bytes) */

// <00505138> mathlib/mathlib.cpp:4009
// variables: 10
// function calls: 26
void Parabolic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 4019
	const char   __FUNCTION__; // 60136
	Vector a; // 4029
	Vector b; // 4029
	Vector c; // 4029
	Vector d; // 4029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4023
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4024
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4025
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 4027
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4035
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4039
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4036
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4037
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4040
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4041
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4044
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4045
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4048
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4049
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4052
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4053
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4055
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4056
} /* size: 0, variables: 6, inline expansions: 26 (0 bytes) */

// <0085FD59> mathlib/mathlib.cpp:4009
// variables: 10
// function calls: 26
void Parabolic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 4019
	const char   __FUNCTION__; // 43657
	Vector a; // 4029
	Vector b; // 4029
	Vector c; // 4029
	Vector d; // 4029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4023
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4024
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4025
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 4027
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4035
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4039
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4036
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4037
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4040
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4041
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4044
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4045
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4048
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4049
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4052
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4053
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4055
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4056
} /* size: 0, variables: 6, inline expansions: 26 (0 bytes) */

// <00C294CB> mathlib/mathlib.cpp:4009
// variables: 10
// function calls: 26
void Parabolic_Spline(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	float tSqr; // 4019
	const char   __FUNCTION__; // 56699
	Vector a; // 4029
	Vector b; // 4029
	Vector c; // 4029
	Vector d; // 4029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4023
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4024
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4025
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 4027
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4035
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	Vector::Vector(); // 4029
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4039
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4036
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4037
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4040
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4041
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4044
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4045
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4048
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4049
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4052
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 4053
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4055
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4056
} /* size: 0, variables: 6, inline expansions: 26 (0 bytes) */

// <059B01AE> mathlib/mathlib.cpp:4059
// variables: 2
// function calls: 2
void Parabolic_Spline_NormalizeX(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, float t, Vector& vOutput)
{
	Vector p1n; // 4067
	Vector p4n; // 4067
	Vector::Vector(); // 4067
	Vector::Vector(); // 4067
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <059999D6> mathlib/mathlib.cpp:4127
// variable: 1
void CriticallyDampedSpring<float>(const float& goalPosition, float& currentPosition, float& velocity, const float flTimeStep, const float flSpringStrength)
{
	float error; // 4129
} /* size: 0, variables: 1 */

// <0599996D> mathlib/mathlib.cpp:4127
// variable: 1
void CriticallyDampedSpring<Vector2D>(const Vector2D& goalPosition, Vector2D& currentPosition, Vector2D& velocity, const float flTimeStep, const float flSpringStrength)
{
	Vector2D error; // 4129
} /* size: 0, variables: 1 */

// <05999904> mathlib/mathlib.cpp:4127
// variable: 1
void CriticallyDampedSpring<Vector>(const Vector& goalPosition, Vector& currentPosition, Vector& velocity, const float flTimeStep, const float flSpringStrength)
{
	Vector error; // 4129
} /* size: 0, variables: 1 */

// <0599989B> mathlib/mathlib.cpp:4127
// variable: 1
void CriticallyDampedSpring<VectorAligned>(const VectorAligned& goalPosition, VectorAligned& currentPosition, VectorAligned& velocity, const float flTimeStep, const float flSpringStrength)
{
	VectorAligned error; // 4129
} /* size: 0, variables: 1 */

// <059AD415> mathlib/mathlib.cpp:4149
// variables: 2
// function calls: 11
void CriticallyDampedSpring(const VectorAligned& vGoalPosition, VectorAligned& vCurrentPosition, VectorAligned& vVelocity, float flTimeStep, float flSpringStrength)
{
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::operator fltx4(); // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 4129
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 4131
	VectorAligned::operator=(
			const VectorAligned& src);  // 4131
	CriticallyDampedSpring<VectorAligned>(const VectorAligned& goalPosition,
						VectorAligned& currentPosition,
						VectorAligned& velocity,
						const float  flTimeStep,
						const float  flSpringStrength);  // 4151
} /* size: 0, inline expansions: 9 (0 bytes) */

// <059AD3C2> mathlib/mathlib.cpp:4161
// variable: 1
float CubicBasis0(float t)
{
	float invT; // 4163
} /* size: 0, variables: 1 */

// <059AD36F> mathlib/mathlib.cpp:4166
// variable: 1
float CubicBasis1(float t)
{
	float invT; // 4168
} /* size: 0, variables: 1 */

// <059AD31C> mathlib/mathlib.cpp:4171
// variable: 1
float CubicBasis2(float t)
{
	float invT; // 4173
} /* size: 0, variables: 1 */

// <059AD2DE> mathlib/mathlib.cpp:4176
float CubicBasis3(float t)
{
} /* size: 0 */

// <059AD1B0> mathlib/mathlib.cpp:4185
// variables: 3
// function call: 1
float RangeCompressor(float flValue, float flMin, float flMax, float flBase)
{
	float flMid; // 4196
	float flTarget; // 4198
	{
		float t; // 4202
		Hermite_Spline(float p1,
				float p2,
				float d1,
				float d2,
				float t);  // 4207
	}
} /* size: 0, variables: 2 */

// <01177AF7> mathlib/mathlib.cpp:4233
// variables: 4
// function calls: 22
void TransformAABB(const matrix3x4_t& transform, const Vector& vecMinsIn, const Vector& vecMaxsIn, Vector& vecMinsOut, Vector& vecMaxsOut)
{
	Vector localCenter; // 4235
	Vector localExtents; // 4239
	Vector worldCenter; // 4242
	Vector worldExtents; // 4245
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 4243
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4236
	Vector::Vector(); // 4235
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4240
	Vector::operator*=(
			float fl);  // 4237
	Vector::Vector(); // 4239
	Vector::Vector(); // 4242
	Vector::Vector(); // 4245
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	DotProductAbs(const Vector& v0,
			const float* v1);  // 4246
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	DotProductAbs(const Vector& v0,
			const float* v1);  // 4247
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	DotProductAbs(const Vector& v0,
			const float* v1);  // 4248
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4250
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4251
} /* size: 0, variables: 4, inline expansions: 22 (0 bytes) */

// <059AC81D> mathlib/mathlib.cpp:4258
// variables: 4
// function calls: 16
void ITransformAABB(const matrix3x4_t& transform, const Vector& vecMinsIn, const Vector& vecMaxsIn, Vector& vecMinsOut, Vector& vecMaxsOut)
{
	Vector worldCenter; // 4260
	Vector worldExtents; // 4264
	Vector localCenter; // 4267
	Vector localExtents; // 4270
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4261
	Vector::Vector(); // 4260
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 4268
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4265
	Vector::operator*=(
			float fl);  // 4262
	Vector::Vector(); // 4264
	FloatMakePositive(vec_t f); // 4272
	Vector::Vector(); // 4267
	Vector::Vector(); // 4270
	FloatMakePositive(vec_t f); // 4271
	FloatMakePositive(vec_t f); // 4278
	FloatMakePositive(vec_t f); // 4277
	FloatMakePositive(vec_t f); // 4273
	FloatMakePositive(vec_t f); // 4279
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4281
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4282
} /* size: 0, variables: 4, inline expansions: 16 (0 bytes) */

// <059AC2D5> mathlib/mathlib.cpp:4290
// variables: 4
// function calls: 22
void RotateAABB(const matrix3x4_t& transform, const Vector& vecMinsIn, const Vector& vecMaxsIn, Vector& vecMinsOut, Vector& vecMaxsOut)
{
	Vector localCenter; // 4292
	Vector localExtents; // 4296
	Vector newCenter; // 4299
	Vector newExtents; // 4302
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4293
	Vector::Vector(); // 4292
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 4300
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4297
	Vector::operator*=(
			float fl);  // 4294
	Vector::Vector(); // 4296
	Vector::Vector(); // 4299
	Vector::Vector(); // 4302
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	DotProductAbs(const Vector& v0,
			const float* v1);  // 4303
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	DotProductAbs(const Vector& v0,
			const float* v1);  // 4305
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	FloatMakePositive(vec_t f); // 1239
	DotProductAbs(const Vector& v0,
			const float* v1);  // 4304
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4307
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4308
} /* size: 0, variables: 4, inline expansions: 22 (0 bytes) */

// <059ABE96> mathlib/mathlib.cpp:4315
// variables: 4
// function calls: 16
void IRotateAABB(const matrix3x4_t& transform, const Vector& vecMinsIn, const Vector& vecMaxsIn, Vector& vecMinsOut, Vector& vecMaxsOut)
{
	Vector oldCenter; // 4317
	Vector oldExtents; // 4321
	Vector newCenter; // 4324
	Vector newExtents; // 4327
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4318
	Vector::Vector(); // 4317
	VectorIRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 4325
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4322
	Vector::operator*=(
			float fl);  // 4319
	Vector::Vector(); // 4321
	FloatMakePositive(vec_t f); // 4329
	Vector::Vector(); // 4324
	Vector::Vector(); // 4327
	FloatMakePositive(vec_t f); // 4328
	FloatMakePositive(vec_t f); // 4335
	FloatMakePositive(vec_t f); // 4334
	FloatMakePositive(vec_t f); // 4330
	FloatMakePositive(vec_t f); // 4336
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4338
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 4339
} /* size: 0, variables: 4, inline expansions: 16 (0 bytes) */

// <02B92FC2> mathlib/mathlib.cpp:4343
// variables: 2
float CalcSqrDistanceToAABB(const Vector& mins, const Vector& maxs, const Vector& vPoint)
{
	float flDelta; // 4345
	float flDistSqr; // 4346
} /* size: 0, variables: 2 */

// <02B92F34> mathlib/mathlib.cpp:4384
// variable: 1
float CalcDistanceToAABB(const Vector& mins, const Vector& maxs, const Vector& vPoint)
{
	float flDistSqr; // 4386
} /* size: 0, variables: 1 */

// <059AB9C9> mathlib/mathlib.cpp:4393
// variables: 4
// function calls: 14
Vector ClosestPointOnSegment(const Vector& a, const Vector& b, const Vector& q)
{
	Vector ab; // 4395
	Vector aq; // 4395
	float t; // 4397
	{
		float denom; // 4406
		DotProduct(const Vector& a,
				const Vector& b);  // 4406
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 4417
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 4417
	}
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 4395
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 4395
	DotProduct(const Vector& a,
			const Vector& b);  // 4397
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <059AABC1> mathlib/mathlib.cpp:4424
// variables: 21
// function calls: 54
Vector ClosestPointOnTriangle(const Vector& a, const Vector& b, const Vector& c, const Vector& q)
{
	Vector ab; // 4427
	Vector ac; // 4428
	Vector aq; // 4429
	float d1; // 4431
	float d2; // 4432
	Vector bq; // 4439
	float d3; // 4441
	float d4; // 4442
	float vc; // 4449
	Vector cq; // 4457
	float d5; // 4459
	float d6; // 4460
	float vb; // 4468
	float va; // 4477
	float denom; // 4487
	float t1; // 4489
	float t2; // 4490
	{
		float t; // 4452
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 4453
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 4453
	}
	{
		float t; // 4471
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 4472
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 4472
	}
	{
		Vector bc; // 4480
		float t; // 4482
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 4480
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 4483
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 4483
	}
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 4427
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 4428
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 4429
	DotProduct(const Vector& a,
			const Vector& b);  // 4431
	DotProduct(const Vector& a,
			const Vector& b);  // 4432
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 4439
	DotProduct(const Vector& a,
			const Vector& b);  // 4441
	DotProduct(const Vector& a,
			const Vector& b);  // 4442
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 4457
	DotProduct(const Vector& a,
			const Vector& b);  // 4459
	DotProduct(const Vector& a,
			const Vector& b);  // 4460
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 4492
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 4492
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 4492
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 4492
} /* size: 0, variables: 17, inline expansions: 33 (0 bytes) */

// <02B91A9A> mathlib/mathlib.cpp:4497
// variables: 3
// function calls: 11
Vector ClosestPointOnSphere(const Vector& c, float r, const Vector& q)
{
	Vector cq; // 4499
	float dist; // 4501
	float s; // 4508
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 4499
	DotProduct(const Vector& a,
			const Vector& b);  // 1262
	Length(const Vector& v); // 4501
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 4509
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 4509
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <059AA5BB> mathlib/mathlib.cpp:4514
// variables: 4
// function calls: 11
Vector ClosestPointOnCapsule(const Vector& a, const Vector& b, float r, const Vector& q)
{
	Vector x; // 4516
	Vector xq; // 4518
	float dist; // 4520
	float s; // 4527
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 4518
	DotProduct(const Vector& a,
			const Vector& b);  // 1262
	Length(const Vector& v); // 4520
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 4528
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 4528
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <059AA564> mathlib/mathlib.cpp:4533
// variable: 1
float CalcClosestPointToLineT(const Vector& P, const Vector& vLineA, const Vector& vLineB, Vector& vDir)
{
	float div; // 4540
} /* size: 0, variables: 1 */

// <059AA4F9> mathlib/mathlib.cpp:4551
// variables: 2
void CalcClosestPointOnLine(const Vector& P, const Vector& vLineA, const Vector& vLineB, Vector& vClosest, float* outT)
{
	Vector vDir; // 4554
	float t; // 4555
} /* size: 0, variables: 2 */

// <059AA004> mathlib/mathlib.cpp:4561
// variable: 1
// function calls: 21
float CalcDistanceToLine(const Vector& P, const Vector& vLineA, const Vector& vLineB, float* outT)
{
	Vector vClosest; // 4564
	Vector::Vector(); // 4564
	Vector::Vector(); // 4554
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4536
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4540
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4547
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4547
	CalcClosestPointToLineT(const Vector& P,
				const Vector& vLineA,
				const Vector& vLineB,
				Vector& vDir);  // 4555
	Vector::MulAdd(
		const Vector& a,
		const Vector& b,
		float scalar);  // 4557
	CalcClosestPointOnLine(const Vector& P,
				const Vector& vLineA,
				const Vector& vLineB,
				Vector& vClosest,
				float* outT);  // 4565
	Vector::Vector(); // 1305
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1306
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1307
	Vector::DistTo(
		const Vector& vOther);  // 4566
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <059A9BF2> mathlib/mathlib.cpp:4569
// variable: 1
// function calls: 15
float CalcDistanceSqrToLine(const Vector& P, const Vector& vLineA, const Vector& vLineB, float* outT)
{
	Vector vClosest; // 4572
	Vector::Vector(); // 4572
	Vector::Vector(); // 4554
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4536
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4540
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4547
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4547
	CalcClosestPointToLineT(const Vector& P,
				const Vector& vLineA,
				const Vector& vLineB,
				Vector& vDir);  // 4555
	Vector::MulAdd(
		const Vector& a,
		const Vector& b,
		float scalar);  // 4557
	CalcClosestPointOnLine(const Vector& P,
				const Vector& vLineA,
				const Vector& vLineB,
				Vector& vClosest,
				float* outT);  // 4573
	Vector::Vector(); // 194
	Vector::LengthSqr(); // 198
	Vector::DistToSqr(
			const Vector& vOther);  // 4574
} /* size: 266, variables: 1, inline expansions: 15 (727 bytes) */

// <01174A22> mathlib/mathlib.cpp:4577
// variables: 2
void CalcClosestPointOnLineSegment(const Vector& P, const Vector& vLineA, const Vector& vLineB, Vector& vClosest, float* outT)
{
	Vector vDir; // 4579
	float t; // 4580
} /* size: 0, variables: 2 */

// <059A965F> mathlib/mathlib.cpp:4590
// variable: 1
// function calls: 22
float CalcDistanceToLineSegment(const Vector& P, const Vector& vLineA, const Vector& vLineB, float* outT)
{
	Vector vClosest; // 4593
	Vector::Vector(); // 4593
	Vector::Vector(); // 4579
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4536
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4540
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4547
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4547
	CalcClosestPointToLineT(const Vector& P,
				const Vector& vLineA,
				const Vector& vLineB,
				Vector& vDir);  // 4580
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 4581
	Vector::MulAdd(
		const Vector& a,
		const Vector& b,
		float scalar);  // 4586
	CalcClosestPointOnLineSegment(const Vector& P,
					const Vector& vLineA,
					const Vector& vLineB,
					Vector& vClosest,
					float* outT);  // 4594
	Vector::Vector(); // 1305
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1306
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1307
	Vector::DistTo(
		const Vector& vOther);  // 4595
} /* size: 0, variables: 1, inline expansions: 22 (0 bytes) */

// <059A921A> mathlib/mathlib.cpp:4598
// variable: 1
// function calls: 16
float CalcDistanceSqrToLineSegment(const Vector& P, const Vector& vLineA, const Vector& vLineB, float* outT)
{
	Vector vClosest; // 4601
	Vector::Vector(); // 4601
	Vector::Vector(); // 4579
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 4536
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4540
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4547
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 4547
	CalcClosestPointToLineT(const Vector& P,
				const Vector& vLineA,
				const Vector& vLineB,
				Vector& vDir);  // 4580
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 4581
	Vector::MulAdd(
		const Vector& a,
		const Vector& b,
		float scalar);  // 4586
	CalcClosestPointOnLineSegment(const Vector& P,
					const Vector& vLineA,
					const Vector& vLineB,
					Vector& vClosest,
					float* outT);  // 4602
	Vector::Vector(); // 194
	Vector::LengthSqr(); // 198
	Vector::DistToSqr(
			const Vector& vOther);  // 4603
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <059A91C3> mathlib/mathlib.cpp:4606
// variable: 1
float CalcClosestPointToLineT2D(const Vector2D& P, const Vector2D& vLineA, const Vector2D& vLineB, Vector2D& vDir)
{
	float div; // 4613
} /* size: 0, variables: 1 */

// <059A9158> mathlib/mathlib.cpp:4624
// variables: 2
void CalcClosestPointOnLine2D(const Vector2D& P, const Vector2D& vLineA, const Vector2D& vLineB, Vector2D& vClosest, float* outT)
{
	Vector2D vDir; // 4627
	float t; // 4628
} /* size: 0, variables: 2 */

// <059A8C1B> mathlib/mathlib.cpp:4633
// variable: 1
// function calls: 21
float CalcDistanceToLine2D(const Vector2D& P, const Vector2D& vLineA, const Vector2D& vLineB, float* outT)
{
	Vector2D vClosest; // 4636
	Vector2D::Vector2D(); // 4636
	Vector2D::Vector2D(); // 4627
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 4609
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4613
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4620
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4620
	CalcClosestPointToLineT2D(const Vector2D& P,
					const Vector2D& vLineA,
					const Vector2D& vLineB,
					Vector2D& vDir);  // 4628
	Vector2D::MulAdd(
		const Vector2D& a,
		const Vector2D& b,
		float scalar);  // 4630
	CalcClosestPointOnLine2D(const Vector2D& P,
				const Vector2D& vLineA,
				const Vector2D& vLineB,
				Vector2D& vClosest,
				float* outT);  // 4637
	Vector2D::Vector2D(); // 602
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 603
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 498
	Vector2DLength(const Vector2D& v); // 554
	Vector2D::Length(); // 604
	Vector2D::DistTo(
		const Vector2D& vOther);  // 4638
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <059A87AC> mathlib/mathlib.cpp:4641
// variable: 1
// function calls: 16
float CalcDistanceSqrToLine2D(const Vector2D& P, const Vector2D& vLineA, const Vector2D& vLineB, float* outT)
{
	Vector2D vClosest; // 4644
	Vector2D::Vector2D(); // 4644
	Vector2D::Vector2D(); // 4627
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 4609
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4613
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4620
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4620
	CalcClosestPointToLineT2D(const Vector2D& P,
					const Vector2D& vLineA,
					const Vector2D& vLineB,
					Vector2D& vDir);  // 4628
	Vector2D::MulAdd(
		const Vector2D& a,
		const Vector2D& b,
		float scalar);  // 4630
	CalcClosestPointOnLine2D(const Vector2D& P,
				const Vector2D& vLineA,
				const Vector2D& vLineB,
				Vector2D& vClosest,
				float* outT);  // 4645
	Vector2D::Vector2D(); // 609
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 610
	Vector2D::LengthSqr(); // 611
	Vector2D::DistToSqr(
			const Vector2D& vOther);  // 4646
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <059A8741> mathlib/mathlib.cpp:4649
// variables: 2
void CalcClosestPointOnLineSegment2D(const Vector2D& P, const Vector2D& vLineA, const Vector2D& vLineB, Vector2D& vClosest, float* outT)
{
	Vector2D vDir; // 4651
	float t; // 4652
} /* size: 0, variables: 2 */

// <059A81C5> mathlib/mathlib.cpp:4661
// variable: 1
// function calls: 22
float CalcDistanceToLineSegment2D(const Vector2D& P, const Vector2D& vLineA, const Vector2D& vLineB, float* outT)
{
	Vector2D vClosest; // 4664
	Vector2D::Vector2D(); // 4664
	Vector2D::Vector2D(); // 4651
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 4609
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4613
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4620
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4620
	CalcClosestPointToLineT2D(const Vector2D& P,
					const Vector2D& vLineA,
					const Vector2D& vLineB,
					Vector2D& vDir);  // 4652
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 4653
	Vector2D::MulAdd(
		const Vector2D& a,
		const Vector2D& b,
		float scalar);  // 4658
	CalcClosestPointOnLineSegment2D(const Vector2D& P,
					const Vector2D& vLineA,
					const Vector2D& vLineB,
					Vector2D& vClosest,
					float* outT);  // 4665
	Vector2D::Vector2D(); // 602
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 603
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 498
	Vector2DLength(const Vector2D& v); // 554
	Vector2D::Length(); // 604
	Vector2D::DistTo(
		const Vector2D& vOther);  // 4666
} /* size: 0, variables: 1, inline expansions: 22 (0 bytes) */

// <059A7D17> mathlib/mathlib.cpp:4669
// variable: 1
// function calls: 17
float CalcDistanceSqrToLineSegment2D(const Vector2D& P, const Vector2D& vLineA, const Vector2D& vLineB, float* outT)
{
	Vector2D vClosest; // 4672
	Vector2D::Vector2D(); // 4672
	Vector2D::Vector2D(); // 4651
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 4609
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4613
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4620
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 4620
	CalcClosestPointToLineT2D(const Vector2D& P,
					const Vector2D& vLineA,
					const Vector2D& vLineB,
					Vector2D& vDir);  // 4652
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 4653
	Vector2D::MulAdd(
		const Vector2D& a,
		const Vector2D& b,
		float scalar);  // 4658
	CalcClosestPointOnLineSegment2D(const Vector2D& P,
					const Vector2D& vLineA,
					const Vector2D& vLineB,
					Vector2D& vClosest,
					float* outT);  // 4673
	Vector2D::Vector2D(); // 609
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 610
	Vector2D::LengthSqr(); // 611
	Vector2D::DistToSqr(
			const Vector2D& vOther);  // 4674
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <02B8ECF9> mathlib/mathlib.cpp:4677
// variables: 2
// function calls: 5
float CalcDistanceToPlane(const Vector& vecPoint, const Vector& vecPlaneNormal, const Vector& vecAnyPointOnThePlane)
{
	Vector vecNormalizedN; // 4679
	Vector vecDelta; // 4680
	Vector::Normalized(); // 4679
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 4680
	DotProduct(const Vector& a,
			const Vector& b);  // 4681
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <059A799F> mathlib/mathlib.cpp:4685
// variables: 4
// function calls: 4
float CalcFarthestDistanceFromRayToPointSet(const Vector& vRayOrigin, const Vector& vRayDir, const Vector* pPoints, int nPoints)
{
	float flMaxDist; // 4687
	{
		int p; // 4688
		{
			Vector vDelta; // 4690
			float flDist; // 4691
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 4690
			DotProduct(const Vector& a,
					const Vector& b);  // 4691
		}
	}
} /* size: 0, variables: 1 */

// <059A780F> mathlib/mathlib.cpp:4697
// variable: 1
// function calls: 7
float CalcFarthestDistanceFromAABBToAABB(const Vector& vMins0, const Vector& vMaxs0, const Vector& vMins1, const Vector& vMaxs1)
{
	Vector vDist; // 4699
	Vector::Vector(); // 4699
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 4703
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <059A7612> mathlib/mathlib.cpp:4722
// variables: 10
// function calls: 3
bool CalcLineToLineIntersectionSegment(const Vector& pt1, const Vector& pt2, const Vector& pt3, const Vector& pt4, Vector* s1, Vector* s2, float* t1, float* t2)
{
	Vector p13; // 4726
	Vector p43; // 4726
	Vector p21; // 4726
	float d1343; // 4727
	float d4321; // 4727
	float d1321; // 4727
	float d4343; // 4727
	float d2121; // 4727
	float numer; // 4728
	float denom; // 4728
	Vector::Vector(); // 4726
	Vector::Vector(); // 4726
	Vector::Vector(); // 4726
} /* size: 0, variables: 10, inline expansions: 3 (0 bytes) */

// <059987CE> mathlib/mathlib.cpp:4786
// member function: 1
// struct size: 1
struct MathLib_InitGlobalConstructor {
	/* mathlib/mathlib.cpp:4788 */
	void MathLib_InitGlobalConstructor(MathLib_InitGlobalConstructor* );
};

// <059A75E2> mathlib/mathlib.cpp:4788
inline void MathLib_InitGlobalConstructor::MathLib_InitGlobalConstructor()
{
} /* size: 0 */

// <059A75C3> mathlib/mathlib.cpp:4804
void SetSIMDLEVEL(ESIMDLevel n)
{
} /* size: 0 */

// <02B8E37D> mathlib/mathlib.cpp:4809
// variables: 4
// function calls: 9
void MathLib_Init(void)
{
	const CPUInformation& pi; // 4825
	const char   __FUNCTION__; // 20093
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4829
	}
	{
		int* _pCrash; // 4830
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 4830
	SetSIMDLEVEL(ESIMDLevel n); // 4834
	SetSIMDLEVEL(ESIMDLevel n); // 4838
	SetSIMDLEVEL(ESIMDLevel n); // 4842
	SetSIMDLEVEL(ESIMDLevel n); // 4850
	SetSIMDLEVEL(ESIMDLevel n); // 4854
	SetSIMDLEVEL(ESIMDLevel n); // 4858
	SetSIMDLEVEL(ESIMDLevel n); // 4862
	SetSIMDLEVEL(ESIMDLevel n); // 4846
} /* size: 0, variables: 2, inline expansions: 9 (115 bytes) */

// <0117206A> mathlib/mathlib.cpp:4809
// variables: 4
// function calls: 9
void MathLib_Init(void)
{
	const CPUInformation& pi; // 4825
	const char   __FUNCTION__; // 41768
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4829
	}
	{
		int* _pCrash; // 4830
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 4830
	SetSIMDLEVEL(ESIMDLevel n); // 4834
	SetSIMDLEVEL(ESIMDLevel n); // 4838
	SetSIMDLEVEL(ESIMDLevel n); // 4842
	SetSIMDLEVEL(ESIMDLevel n); // 4850
	SetSIMDLEVEL(ESIMDLevel n); // 4854
	SetSIMDLEVEL(ESIMDLevel n); // 4858
	SetSIMDLEVEL(ESIMDLevel n); // 4862
	SetSIMDLEVEL(ESIMDLevel n); // 4846
} /* size: 0, variables: 2, inline expansions: 9 (115 bytes) */

// <006A87FC> mathlib/mathlib.cpp:4809
// variables: 4
// function calls: 9
void MathLib_Init(void)
{
	const CPUInformation& pi; // 4825
	const char   __FUNCTION__; // 25623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4829
	}
	{
		int* _pCrash; // 4830
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 4830
	SetSIMDLEVEL(ESIMDLevel n); // 4834
	SetSIMDLEVEL(ESIMDLevel n); // 4838
	SetSIMDLEVEL(ESIMDLevel n); // 4842
	SetSIMDLEVEL(ESIMDLevel n); // 4850
	SetSIMDLEVEL(ESIMDLevel n); // 4854
	SetSIMDLEVEL(ESIMDLevel n); // 4858
	SetSIMDLEVEL(ESIMDLevel n); // 4862
	SetSIMDLEVEL(ESIMDLevel n); // 4846
} /* size: 0, variables: 2, inline expansions: 9 (115 bytes) */

// <00856BCD> mathlib/mathlib.cpp:4809
// variables: 4
// function calls: 9
void MathLib_Init(void)
{
	const CPUInformation& pi; // 4825
	const char   __FUNCTION__; // 5181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4829
	}
	{
		int* _pCrash; // 4830
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 4830
	SetSIMDLEVEL(ESIMDLevel n); // 4834
	SetSIMDLEVEL(ESIMDLevel n); // 4838
	SetSIMDLEVEL(ESIMDLevel n); // 4842
	SetSIMDLEVEL(ESIMDLevel n); // 4850
	SetSIMDLEVEL(ESIMDLevel n); // 4854
	SetSIMDLEVEL(ESIMDLevel n); // 4858
	SetSIMDLEVEL(ESIMDLevel n); // 4862
	SetSIMDLEVEL(ESIMDLevel n); // 4846
} /* size: 0, variables: 2, inline expansions: 9 (115 bytes) */

// <00823AF7> mathlib/mathlib.cpp:4809
// variables: 4
// function calls: 9
void MathLib_Init(void)
{
	const CPUInformation& pi; // 4825
	const char   __FUNCTION__; // 18658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4829
	}
	{
		int* _pCrash; // 4830
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 4830
	SetSIMDLEVEL(ESIMDLevel n); // 4834
	SetSIMDLEVEL(ESIMDLevel n); // 4838
	SetSIMDLEVEL(ESIMDLevel n); // 4842
	SetSIMDLEVEL(ESIMDLevel n); // 4850
	SetSIMDLEVEL(ESIMDLevel n); // 4854
	SetSIMDLEVEL(ESIMDLevel n); // 4858
	SetSIMDLEVEL(ESIMDLevel n); // 4862
	SetSIMDLEVEL(ESIMDLevel n); // 4846
} /* size: 0, variables: 2, inline expansions: 9 (115 bytes) */

// <059A7108> mathlib/mathlib.cpp:4882
// variable: 1
// function calls: 2
float ApproachAngle(float target, float value, float speed)
{
	float delta; // 4887
	anglemod(float a); // 4884
	anglemod(float a); // 4885
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <059A70C9> mathlib/mathlib.cpp:4910
// variable: 1
float AngleDiff(float destAngle, float srcAngle)
{
	float delta; // 4912
} /* size: 0, variables: 1 */

// <059A705F> mathlib/mathlib.cpp:4929
// variable: 1
float AngleDistance(float next, float cur)
{
	float delta; // 4931
} /* size: 0, variables: 1 */

// <059A6FFC> mathlib/mathlib.cpp:4942
float AngleNormalize(float angle)
{
} /* size: 0 */

// <059A6F99> mathlib/mathlib.cpp:4958
float AngleNormalizePositive(float angle)
{
} /* size: 0 */

// <059A6ECB> mathlib/mathlib.cpp:4971
// function call: 1
bool AnglesAreEqual(float a, float b, float tolerance)
{
	AngleDiff(float destAngle,
			float srcAngle);  // 4973
} /* size: 0, inline expansions: 1 (0 bytes) */

// <059A6C5C> mathlib/mathlib.cpp:4976
// variables: 4
// function calls: 4
void RotationDeltaAxisAngle(const QAngle& srcAngles, const QAngle& destAngles, Vector& deltaAxis, float& deltaAngle)
{
	Quaternion srcQuat; // 4978
	Quaternion destQuat; // 4978
	Quaternion srcQuatInv; // 4978
	Quaternion out; // 4978
	Quaternion::Quaternion(); // 4978
	Quaternion::Quaternion(); // 4978
	Quaternion::Quaternion(); // 4978
	Quaternion::Quaternion(); // 4978
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <059A69A7> mathlib/mathlib.cpp:4988
// variables: 5
// function calls: 6
void RotationDelta(const QAngle& srcAngles, const QAngle& destAngles, QAngle* out)
{
	matrix3x4_t src; // 4990
	matrix3x4_t srcInv; // 4990
	matrix3x4_t dest; // 4991
	matrix3x4_t xform; // 4996
	QAngle xformAngles; // 4998
	matrix3x4_t::matrix3x4_t(); // 4990
	matrix3x4_t::matrix3x4_t(); // 4990
	matrix3x4_t::matrix3x4_t(); // 4991
	matrix3x4_t::matrix3x4_t(); // 4996
	QAngle::QAngle(); // 4998
	QAngle::operator=(
			const QAngle& vOther);  // 5002
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

// <059A679C> mathlib/mathlib.cpp:5010
// variables: 2
// function calls: 6
void ComputeTrianglePlane(const Vector& v1, const Vector& v2, const Vector& v3, Vector& normal, float& intercept)
{
	Vector e1; // 5012
	Vector e2; // 5012
	Vector::Vector(); // 5012
	Vector::Vector(); // 5012
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 5013
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 5014
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 5015
	DotProduct(const Vector& a,
			const Vector& b);  // 5017
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <059A634D> mathlib/mathlib.cpp:5028
// variables: 5
// function calls: 16
float TetrahedronVolume(const Vector& p0, const Vector& p1, const Vector& p2, const Vector& p3)
{
	Vector a; // 5030
	Vector b; // 5030
	Vector c; // 5030
	Vector cross; // 5030
	float volume; // 5031
	Vector::Vector(); // 5030
	Vector::Vector(); // 5030
	Vector::Vector(); // 5030
	Vector::Vector(); // 5030
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 5033
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 5035
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 5034
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 5036
	DotProduct(const Vector& a,
			const Vector& b);  // 5038
} /* size: 0, variables: 5, inline expansions: 16 (0 bytes) */

// <059A608F> mathlib/mathlib.cpp:5046
// variables: 3
// function calls: 11
float TriangleArea(const Vector& v0, const Vector& v1, const Vector& v2)
{
	Vector vecEdge0; // 5048
	Vector vecEdge1; // 5048
	Vector vecCross; // 5048
	Vector::Vector(); // 5048
	Vector::Vector(); // 5048
	Vector::Vector(); // 5048
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 5049
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 5050
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 5051
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 5052
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <059A5B0F> mathlib/mathlib.cpp:5062
// variables: 7
// function calls: 18
int PolyFromPlane(Vector* outVerts, const Vector& normal, float dist, float fHalfScale)
{
	int i; // 5064
	int x; // 5064
	vec_t max; // 5065
	vec_t v; // 5065
	Vector org; // 5066
	Vector vright; // 5066
	Vector vup; // 5066
	Vector::operator[](
			int i);  // 5074
	Vector::Vector(); // 5066
	Vector::Vector(); // 5066
	Vector::Vector(); // 5066
	VectorCopy(const Vector& src,
			Vector& dst);  // 5086
	DotProduct(const Vector& a,
			const Vector& b);  // 5099
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 5105
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 5100
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 5107
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 5110
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1101
	VectorScale(const Vector& vIn,
			float flScale,
			Vector& vResult);  // 5111
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 5114
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 5117
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 5115
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 5124
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <059A585E> mathlib/mathlib.cpp:5140
// variables: 10
// function calls: 6
int ClipPolyToPlane(Vector* inVerts, int vertCount, Vector* outVerts, const Vector& normal, float dist, float fOnPlaneEpsilon)
{
	vec_t* dists; // 5142
	int* sides; // 5143
	int counts; // 5144
	vec_t dot; // 5145
	int i; // 5146
	int j; // 5146
	Vector mid; // 5147
	int outCount; // 5148
	{
		Vector& p1; // 5190
		Vector& p2; // 5209
		VectorCopy(const Vector& src,
				Vector& dst);  // 5201
		Vector::operator[](
				int i);  // 5214
		VectorCopy(const Vector& src,
				Vector& dst);  // 5222
		VectorCopy(const Vector& src,
				Vector& dst);  // 5194
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 5155
	VectorCopy(const Vector& src,
			Vector& dst);  // 5182
} /* size: 0, variables: 8, inline expansions: 2 (0 bytes) */

// <059A569C> mathlib/mathlib.cpp:5230
// variables: 11
int ClipPolyToPlane_Precise(double* inVerts, int vertCount, double* outVerts, const double* normal, double dist, double fOnPlaneEpsilon)
{
	double* dists; // 5232
	int* sides; // 5233
	int counts; // 5234
	double dot; // 5235
	int i; // 5236
	int j; // 5236
	double mid; // 5238
	int outCount; // 5242
	{
		double* p1; // 5288
		int wrappedindex; // 5317
		double* p2; // 5318
	}
} /* size: 0, variables: 8 */

// <059A564E> mathlib/mathlib.cpp:5339
// variable: 1
int CeilPow2(int in)
{
	int retval; // 5341
} /* size: 0, variables: 1 */

// <059A5600> mathlib/mathlib.cpp:5349
// variable: 1
int FloorPow2(int in)
{
	int retval; // 5351
} /* size: 0, variables: 1 */

// <059A55C1> mathlib/mathlib.cpp:5364
// variable: 1
float CalcFovY(float flFovX, float flAspect)
{
	float val; // 5380
} /* size: 0, variables: 1 */

// <059A54D5> mathlib/mathlib.cpp:5385
// function calls: 2
float CalcFovX(float flFovY, float flAspect)
{
	DEG2RAD(float flDegrees); // 5387
	RAD2DEG(float flRadians); // 5387
} /* size: 0, inline expansions: 2 (0 bytes) */

// <059A3D95> mathlib/mathlib.cpp:5481
// variables: 2
// function calls: 22
void GenerateOrthoFrustumFLU(const Vector& origin, const Vector& forward, const Vector& vLeft, const Vector& up, float flLeft, float flRight, float flBottom, float flTop, float flZNear, float flZFar, VPlane* pPlanesOut)
{
	Vector vRight; // 5483
	float flIntercept; // 5486
	DotProduct(const Vector& a,
			const Vector& b);  // 5486
	Vector::operator*=(
			float fl);  // 5484
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 5488
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 5489
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 5489
	DotProduct(const Vector& a,
			const Vector& b);  // 5491
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 5493
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 5494
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 5493
	DotProduct(const Vector& a,
			const Vector& b);  // 5496
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 5498
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 5499
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 5499
} /* size: 0, variables: 2, inline expansions: 22 (0 bytes) */

// <059A3BE1> mathlib/mathlib.cpp:5505
// variables: 4
void GeneratePerspectiveFrustumFLU(const Vector& origin, const QAngle& angles, float flZNear, float flZFar, float flFovX, float flAspectRatio, Frustum_t& frustum)
{
	VPlane planes; // 5507
	Vector vecForward; // 5508
	Vector vLeft; // 5508
	Vector vecUp; // 5508
} /* size: 0, variables: 4 */

// <059A3975> mathlib/mathlib.cpp:5514
// variables: 5
// function calls: 3
void GeneratePerspectiveFrustum(const Vector& origin, const QAngle& angles, float flZNear, float flZFar, float flFovX, float flAspectRatio, Frustum_t& frustum)
{
	VPlane planes; // 5516
	Vector vecForward; // 5517
	Vector vecRight; // 5517
	Vector vecUp; // 5517
	float flFovY; // 5519
	DEG2RAD(float flDegrees); // 5380
	RAD2DEG(float flRadians); // 5381
	CalcFovY(float flFovX,
		float flAspect);  // 5519
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <059DDE8F> mathlib/mathlib.cpp:5524
// variables: 7
// function calls: 17
void fourplanes_t::ComputeSignbits()
{
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
} /* size: 0, inline expansions: 10 (0 bytes) */

// <059A3958> mathlib/mathlib.cpp:5524
void fourplanes_t::ComputeSignbits()
{
} /* size: 0 */

// <059DE2A4> mathlib/mathlib.cpp:5534
// function calls: 4
void fourplanes_t::GetPlane(int index, Vector* pNormalOut, float* pDistOut)
{
	SubFloat<>(const fltx4& a,
			int idx);  // 5536
	SubFloat<>(const fltx4& a,
			int idx);  // 5537
	SubFloat<>(const fltx4& a,
			int idx);  // 5538
	SubFloat<>(const fltx4& a,
			int idx);  // 5539
} /* size: 0, inline expansions: 4 (0 bytes) */

// <059A3914> mathlib/mathlib.cpp:5534
void fourplanes_t::GetPlane(int index, Vector* pNormalOut, float* pDistOut)
{
} /* size: 0 */

// <059DE3E6> mathlib/mathlib.cpp:5541
// variables: 7
// function calls: 22
void fourplanes_t::SetPlane(int index, const Vector& vecNormal, float planeDist)
{
	SubFloat<>(fltx4& a,
			int idx);  // 5543
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5547
	SubFloat<>(fltx4& a,
			int idx);  // 5544
	SubFloat<>(fltx4& a,
			int idx);  // 5545
	SubFloat<>(fltx4& a,
			int idx);  // 5546
} /* size: 0, inline expansions: 15 (0 bytes) */

// <059A38D0> mathlib/mathlib.cpp:5541
void fourplanes_t::SetPlane(int index, const Vector& vecNormal, float planeDist)
{
} /* size: 0 */

// <059DE943> mathlib/mathlib.cpp:5550
// variables: 19
// function calls: 27
void fourplanes_t::Set4Planes(const VPlane* pPlanes)
{
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5552
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5553
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5556
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5554
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5555
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5557
} /* size: 176, inline expansions: 16 (223 bytes) */

// <059A38A6> mathlib/mathlib.cpp:5550
void fourplanes_t::Set4Planes(const VPlane* pPlanes)
{
} /* size: 0 */

// <059DF062> mathlib/mathlib.cpp:5560
// variables: 17
// function calls: 23
void fourplanes_t::Set2Planes(const VPlane* pPlanes)
{
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5562
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5566
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5563
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5567
} /* size: 0, inline expansions: 14 (0 bytes) */

// <059A387C> mathlib/mathlib.cpp:5560
void fourplanes_t::Set2Planes(const VPlane* pPlanes)
{
} /* size: 0 */

// <059DF653> mathlib/mathlib.cpp:5570
// variables: 12
// function calls: 9
void fourplanes_t::Get4Planes(VPlane* pPlanesOut)
{
	fltx4 p0; // 5572
	fltx4 p1; // 5573
	fltx4 p2; // 5574
	fltx4 p3; // 5575
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5576
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5578
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5577
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5579
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5580
} /* size: 0, variables: 4, inline expansions: 9 (0 bytes) */

// <059A3822> mathlib/mathlib.cpp:5570
// variables: 4
void fourplanes_t::Get4Planes(VPlane* pPlanesOut)
{
	fltx4 p0; // 5572
	fltx4 p1; // 5573
	fltx4 p2; // 5574
	fltx4 p3; // 5575
} /* size: 0, variables: 4 */

// <059DF959> mathlib/mathlib.cpp:5583
// variables: 12
// function calls: 5
void fourplanes_t::Get2Planes(VPlane* pPlanesOut)
{
	fltx4 p0; // 5585
	fltx4 p1; // 5586
	fltx4 p2; // 5587
	fltx4 p3; // 5588
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5589
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5590
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5591
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <059A37C8> mathlib/mathlib.cpp:5583
// variables: 4
void fourplanes_t::Get2Planes(VPlane* pPlanesOut)
{
	fltx4 p0; // 5585
	fltx4 p1; // 5586
	fltx4 p2; // 5587
	fltx4 p3; // 5588
} /* size: 0, variables: 4 */

// <059A36FF> mathlib/mathlib.cpp:5595
// function calls: 2
void Frustum_t::Frustum_t()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 5597
} /* size: 15, inline expansions: 2 (20 bytes) */

// <059A36E2> mathlib/mathlib.cpp:5595
void Frustum_t::Frustum_t()
{
} /* size: 0 */

// <059A2BB6> mathlib/mathlib.cpp:5600
// variables: 14
// function calls: 46
void Frustum_t::SetPlane(int i, const Vector& vecNormal, float dist)
{
	SubFloat<>(fltx4& a,
			int idx);  // 5543
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5547
	SubFloat<>(fltx4& a,
			int idx);  // 5544
	SubFloat<>(fltx4& a,
			int idx);  // 5545
	SubFloat<>(fltx4& a,
			int idx);  // 5546
	fourplanes_t::SetPlane(
		int index,
		const Vector& vecNormal,
		float planeDist);  // 5604
	SubFloat<>(fltx4& a,
			int idx);  // 5543
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5547
	SubFloat<>(fltx4& a,
			int idx);  // 5544
	SubFloat<>(fltx4& a,
			int idx);  // 5545
	SubFloat<>(fltx4& a,
			int idx);  // 5546
	fourplanes_t::SetPlane(
		int index,
		const Vector& vecNormal,
		float planeDist);  // 5608
} /* size: 0, inline expansions: 32 (0 bytes) */

// <059DFB8D> mathlib/mathlib.cpp:5612
// function calls: 11
void Frustum_t::GetPlane(int i, Vector* pNormalOut, float* pDistOut)
{
	SubFloat<>(const fltx4& a,
			int idx);  // 5536
	SubFloat<>(const fltx4& a,
			int idx);  // 5537
	SubFloat<>(const fltx4& a,
			int idx);  // 5538
	SubFloat<>(const fltx4& a,
			int idx);  // 5539
	fourplanes_t::GetPlane(
		int index,
		Vector* pNormalOut,
		float* pDistOut);  // 5616
	SubFloat<>(const fltx4& a,
			int idx);  // 5536
	SubFloat<>(const fltx4& a,
			int idx);  // 5537
	SubFloat<>(const fltx4& a,
			int idx);  // 5538
	SubFloat<>(const fltx4& a,
			int idx);  // 5539
	fourplanes_t::GetPlane(
		int index,
		Vector* pNormalOut,
		float* pDistOut);  // 5620
	Frustum_t::GetPlane(
		int i,
		Vector* pNormalOut,
		float* pDistOut);  // 5612
} /* size: 125, inline expansions: 11 (222 bytes) */

// <059A2B74> mathlib/mathlib.cpp:5612
void Frustum_t::GetPlane(int i, Vector* pNormalOut, float* pDistOut)
{
} /* size: 0 */

// <059DFEC1> mathlib/mathlib.cpp:5624
// variables: 17
// function calls: 24
void Frustum_t::SetPlanes(const VPlane* pPlanes)
{
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5562
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5566
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5563
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5567
	fourplanes_t::Set2Planes(
			const VPlane* pPlanes);  // 5627
} /* size: 183, inline expansions: 15 (388 bytes) */

// <059A2B4A> mathlib/mathlib.cpp:5624
void Frustum_t::SetPlanes(const VPlane* pPlanes)
{
} /* size: 0 */

// <059E0503> mathlib/mathlib.cpp:5630
// variables: 16
// function calls: 16
void Frustum_t::GetPlanes(VPlane* pPlanesOut)
{
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5576
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5578
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5577
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5579
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5580
	fourplanes_t::Get4Planes(
			VPlane* pPlanesOut);  // 5632
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5589
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5590
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5591
	fourplanes_t::Get2Planes(
			VPlane* pPlanesOut);  // 5633
} /* size: 0, inline expansions: 16 (0 bytes) */

// <059A2B20> mathlib/mathlib.cpp:5630
void Frustum_t::GetPlanes(VPlane* pPlanesOut)
{
} /* size: 0 */

// <059A249E> mathlib/mathlib.cpp:5638
// variables: 5
// function calls: 22
void Frustum_t::Contains(const Vector& mins, const Vector& maxs)
{
	Vector vCorners; // 5641
	{
		int j; // 5654
		{
			int i; // 5656
			{
				Vector vNormal; // 5659
				float dist; // 5660
				DotProduct(const Vector& a,
						const Vector& b);  // 5662
				Vector::Vector(); // 5659
				SubFloat<>(const fltx4& a,
						int idx);  // 5536
				SubFloat<>(const fltx4& a,
						int idx);  // 5537
				SubFloat<>(const fltx4& a,
						int idx);  // 5538
				fourplanes_t::GetPlane(
					int index,
					Vector* pNormalOut,
					float* pDistOut);  // 5616
				SubFloat<>(const fltx4& a,
						int idx);  // 5536
				SubFloat<>(const fltx4& a,
						int idx);  // 5537
				SubFloat<>(const fltx4& a,
						int idx);  // 5538
				fourplanes_t::GetPlane(
					int index,
					Vector* pNormalOut,
					float* pDistOut);  // 5620
				Frustum_t::GetPlane(
					int i,
					Vector* pNormalOut,
					float* pDistOut);  // 5612
				Frustum_t::GetPlane(
					int i,
					Vector* pNormalOut,
					float* pDistOut);  // 5661
			}
		}
	}
	Vector::operator=(
			const Vector& vOther);  // 5642
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 5643
	Vector::operator=(
			const Vector& vOther);  // 5643
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 5644
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 5645
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 5647
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 5648
	Vector::operator=(
			const Vector& vOther);  // 5648
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 5649
	Vector::operator=(
			const Vector& vOther);  // 5649
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <059A22FD> mathlib/mathlib.cpp:5672
// variables: 6
void Frustum_t::Intersects(const Frustum_t& otherFrustum)
{
	Vector pPointsA; // 5674
	bool bResult; // 5675
	const char   __FUNCTION__; // 48309
	Vector pPointsB; // 5679
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5677
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5681
	}
} /* size: 0, variables: 4 */

// <02B894AB> mathlib/mathlib.cpp:5672
// variables: 6
void Frustum_t::Intersects(const Frustum_t& otherFrustum)
{
	Vector pPointsA; // 5674
	bool bResult; // 5675
	const char   __FUNCTION__; // 64856
	Vector pPointsB; // 5679
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5677
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5681
	}
} /* size: 0, variables: 4 */

// <0116D198> mathlib/mathlib.cpp:5672
// variables: 6
void Frustum_t::Intersects(const Frustum_t& otherFrustum)
{
	Vector pPointsA; // 5674
	bool bResult; // 5675
	const char   __FUNCTION__; // 20995
	Vector pPointsB; // 5679
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5677
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5681
	}
} /* size: 0, variables: 4 */

// <006A392A> mathlib/mathlib.cpp:5672
// variables: 6
void Frustum_t::Intersects(const Frustum_t& otherFrustum)
{
	Vector pPointsA; // 5674
	bool bResult; // 5675
	const char   __FUNCTION__; // 4850
	Vector pPointsB; // 5679
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5677
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5681
	}
} /* size: 0, variables: 4 */

// <004F70DA> mathlib/mathlib.cpp:5672
// variables: 6
void Frustum_t::Intersects(const Frustum_t& otherFrustum)
{
	Vector pPointsA; // 5674
	bool bResult; // 5675
	const char   __FUNCTION__; // 887
	Vector pPointsB; // 5679
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5677
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5681
	}
} /* size: 0, variables: 4 */

// <00851CFB> mathlib/mathlib.cpp:5672
// variables: 6
void Frustum_t::Intersects(const Frustum_t& otherFrustum)
{
	Vector pPointsA; // 5674
	bool bResult; // 5675
	const char   __FUNCTION__; // 49944
	Vector pPointsB; // 5679
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5677
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5681
	}
} /* size: 0, variables: 4 */

// <0081EC25> mathlib/mathlib.cpp:5672
// variables: 6
void Frustum_t::Intersects(const Frustum_t& otherFrustum)
{
	Vector pPointsA; // 5674
	bool bResult; // 5675
	const char   __FUNCTION__; // 63421
	Vector pPointsB; // 5679
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5677
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5681
	}
} /* size: 0, variables: 4 */

// <00C1B46D> mathlib/mathlib.cpp:5672
// variables: 6
void Frustum_t::Intersects(const Frustum_t& otherFrustum)
{
	Vector pPointsA; // 5674
	bool bResult; // 5675
	const char   __FUNCTION__; // 62986
	Vector pPointsB; // 5679
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5677
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5681
	}
} /* size: 0, variables: 4 */

// <059A1B88> mathlib/mathlib.cpp:5687
// variables: 26
// function calls: 20
void Frustum_t::Intersects(const Frustum_t& otherFrustum, Vector* pPointsA, Vector* pPointsB)
{
	VPlane pPlanesA; // 5689
	VPlane pPlanesB; // 5692
	{
		int p; // 5696
		{
			bool bPointsOnOutside; // 5698
			{
				int i; // 5699
				{
					float flDist; // 5701
					DotProduct(const Vector& a,
							const Vector& b);  // 1167
					Vector::Dot(
						const Vector& vOther);  // 119
					VPlane::DistTo(
						const Vector& vVec);  // 5701
				}
			}
		}
	}
	{
		int p; // 5719
		{
			bool bPointsOnOutside; // 5721
			{
				int i; // 5722
				{
					float flDist; // 5724
					DotProduct(const Vector& a,
							const Vector& b);  // 1167
					Vector::Dot(
						const Vector& vOther);  // 119
					VPlane::DistTo(
						const Vector& vVec);  // 5724
				}
			}
		}
	}
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5589
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5590
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5591
	fourplanes_t::Get2Planes(
			VPlane* pPlanesOut);  // 5633
	Frustum_t::GetPlanes(
			VPlane* pPlanesOut);  // 5690
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5589
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5590
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5591
	fourplanes_t::Get2Planes(
			VPlane* pPlanesOut);  // 5633
	Frustum_t::GetPlanes(
			VPlane* pPlanesOut);  // 5693
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <059A0E15> mathlib/mathlib.cpp:5746
// variables: 37
// function calls: 52
void Frustum_t::Intersects(const Vector& mins, const Vector& maxs)
{
	fltx4 mins4; // 5748
	fltx4 minx; // 5749
	fltx4 miny; // 5750
	fltx4 minz; // 5751
	fltx4 maxs4; // 5752
	fltx4 maxx; // 5753
	fltx4 maxy; // 5754
	fltx4 maxz; // 5755
	{
		int i; // 5759
		{
			fltx4 xTotalBack; // 5761
			fltx4 yTotalBack; // 5762
			fltx4 zTotalBack; // 5763
			fltx4 dotBack; // 5764
			fltx4 isOut; // 5766
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 5763
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 5761
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 5762
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5762
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5763
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5761
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5764
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5764
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 5766
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 1842
			IsAnyNegative<>(const fltx4& a); // 5767
		}
	}
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5748
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 5749
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 5750
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 5751
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5752
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 5753
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 5754
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 5755
} /* size: 163, variables: 8, inline expansions: 8 (52 bytes) */

// <059A01D6> mathlib/mathlib.cpp:5773
// variables: 33
// function calls: 48
void Frustum_t::Intersects(const fltx4& mins4, const fltx4& maxs4)
{
	fltx4 minx; // 5775
	fltx4 miny; // 5776
	fltx4 minz; // 5777
	fltx4 maxx; // 5778
	fltx4 maxy; // 5779
	fltx4 maxz; // 5780
	{
		int i; // 5784
		{
			fltx4 xTotalBack; // 5786
			fltx4 yTotalBack; // 5787
			fltx4 zTotalBack; // 5788
			fltx4 dotBack; // 5789
			fltx4 isOut; // 5791
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 5786
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 5787
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 5788
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5787
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5788
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5786
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5789
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5789
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 5791
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 1842
			IsAnyNegative<>(const fltx4& a); // 5792
		}
	}
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 5775
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 5778
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 5776
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 5777
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 5779
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 5780
} /* size: 0, variables: 6, inline expansions: 6 (0 bytes) */

// <0599F5EC> mathlib/mathlib.cpp:5798
// variables: 34
// function calls: 43
void Frustum_t::IntersectsCenterExtents(const Vector& center, const Vector& extents)
{
	fltx4 center4; // 5800
	fltx4 centerx; // 5801
	fltx4 centery; // 5802
	fltx4 centerz; // 5803
	fltx4 extents4; // 5804
	fltx4 extx; // 5805
	fltx4 exty; // 5806
	fltx4 extz; // 5807
	{
		int i; // 5810
		{
			fltx4 xTotalBack; // 5812
			fltx4 yTotalBack; // 5813
			fltx4 zTotalBack; // 5814
			fltx4 dotBack; // 5815
			fltx4 isOut; // 5817
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5812
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5812
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5812
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5813
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5813
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5813
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5814
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5814
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5814
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5815
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5815
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 5817
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 1842
			IsAnyNegative<>(const fltx4& a); // 5818
		}
	}
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5800
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 5801
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 5802
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 5803
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5804
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 5805
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 5806
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 5807
} /* size: 0, variables: 8, inline expansions: 8 (0 bytes) */

// <0599EB52> mathlib/mathlib.cpp:5825
// variables: 30
// function calls: 39
void Frustum_t::IntersectsCenterExtents(const fltx4& fl4Center, const fltx4& fl4Extents)
{
	fltx4 centerx; // 5827
	fltx4 centery; // 5828
	fltx4 centerz; // 5829
	fltx4 extx; // 5830
	fltx4 exty; // 5831
	fltx4 extz; // 5832
	{
		int i; // 5835
		{
			fltx4 xTotalBack; // 5837
			fltx4 yTotalBack; // 5838
			fltx4 zTotalBack; // 5839
			fltx4 dotBack; // 5840
			fltx4 isOut; // 5842
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5837
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5837
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5837
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5838
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5838
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5838
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5839
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 5839
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5839
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5840
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 5840
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 5842
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 1842
			IsAnyNegative<>(const fltx4& a); // 5843
		}
	}
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 5827
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 5828
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 5829
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 5830
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 5831
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 5832
} /* size: 0, variables: 6, inline expansions: 6 (0 bytes) */

// <059E0A8D> mathlib/mathlib.cpp:5851
// variables: 36
// function calls: 51
void Frustum_t::CreatePerspectiveFrustumFLU(const Vector& vOrigin, const Vector& vForward, const Vector& vLeft, const Vector& vUp, float flZNear, float flZFar, float flFovX, float flAspect)
{
	VPlane fplanes; // 5855
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5552
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5553
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5554
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5555
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5556
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5557
	fourplanes_t::Set4Planes(
			const VPlane* pPlanes);  // 5626
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5562
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5566
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5563
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5567
	fourplanes_t::Set2Planes(
			const VPlane* pPlanes);  // 5627
	Frustum_t::SetPlanes(
			const VPlane* pPlanes);  // 5857
} /* size: 0, variables: 1, inline expansions: 32 (0 bytes) */

// <0599EAC0> mathlib/mathlib.cpp:5851
// variable: 1
void Frustum_t::CreatePerspectiveFrustumFLU(const Vector& vOrigin, const Vector& vForward, const Vector& vLeft, const Vector& vUp, float flZNear, float flZFar, float flFovX, float flAspect)
{
	VPlane fplanes; // 5855
} /* size: 0, variables: 1 */

// <0599E87B> mathlib/mathlib.cpp:5860
// variable: 1
// function calls: 2
void Frustum_t::CreatePerspectiveFrustum(const Vector& origin, const Vector& forward, const Vector& right, const Vector& up, float flZNear, float flZFar, float flFovX, float flAspect)
{
	Vector vLeft; // 5864
	Frustum_t::CreatePerspectiveFrustumFLU(
					const Vector& vOrigin,
					const Vector& vForward,
					const Vector& vLeft,
					const Vector& vUp,
					float flZNear,
					float flZFar,
					float flFovX,
					float flAspect);  // 5866
	Vector::operator*=(
			float fl);  // 5865
} /* size: 150, variables: 1, inline expansions: 2 (75 bytes) */

// <0599E6CB> mathlib/mathlib.cpp:5870
// variables: 4
void Frustum_t::CreatePerspectiveFrustum(const Vector& origin, const QAngle& angles, float flZNear, float flZFar, float flFovX, float flAspectRatio)
{
	VPlane fplanes; // 5872
	Vector vecForward; // 5873
	Vector vecLeft; // 5873
	Vector vecUp; // 5873
} /* size: 0, variables: 4 */

// <059E18B5> mathlib/mathlib.cpp:5880
// variables: 36
// function calls: 51
void Frustum_t::CreateOrthoFrustumFLU(const Vector& origin, const Vector& forward, const Vector& vLeft, const Vector& up, float flLeft, float flRight, float flBottom, float flTop, float flZNear, float flZFar)
{
	VPlane fplanes; // 5882
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5552
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5553
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5554
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5555
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5556
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5557
	fourplanes_t::Set4Planes(
			const VPlane* pPlanes);  // 5626
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5562
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5566
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 5563
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5526
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5529
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5527
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5530
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 5528
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	fabs<>(const fltx4& x); // 5531
	fourplanes_t::ComputeSignbits(); // 5567
	fourplanes_t::Set2Planes(
			const VPlane* pPlanes);  // 5627
	Frustum_t::SetPlanes(
			const VPlane* pPlanes);  // 5884
} /* size: 0, variables: 1, inline expansions: 32 (0 bytes) */

// <0599E620> mathlib/mathlib.cpp:5880
// variable: 1
void Frustum_t::CreateOrthoFrustumFLU(const Vector& origin, const Vector& forward, const Vector& vLeft, const Vector& up, float flLeft, float flRight, float flBottom, float flTop, float flZNear, float flZFar)
{
	VPlane fplanes; // 5882
} /* size: 0, variables: 1 */

// <0599E38A> mathlib/mathlib.cpp:5887
// variable: 1
// function calls: 2
void Frustum_t::CreateOrthoFrustum(const Vector& origin, const Vector& forward, const Vector& right, const Vector& up, float flLeft, float flRight, float flBottom, float flTop, float flZNear, float flZFar)
{
	Vector vLeft; // 5889
	Vector::operator*=(
			float fl);  // 5890
	Frustum_t::CreateOrthoFrustumFLU(
				const Vector& origin,
				const Vector& forward,
				const Vector& vLeft,
				const Vector& up,
				float flLeft,
				float flRight,
				float flBottom,
				float flTop,
				float flZNear,
				float flZFar);  // 5891
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0599DF62> mathlib/mathlib.cpp:5902
// variables: 9
// function calls: 7
void Frustum_t::GetCorners(Vector* pPoints)
{
	VPlane fplanes; // 5904
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	TransposeSIMD<>(fltx4& x,
			fltx4& y,
			fltx4& z,
			fltx4& w);  // 5589
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5590
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 5591
	fourplanes_t::Get2Planes(
			VPlane* pPlanesOut);  // 5633
	Frustum_t::GetPlanes(
			VPlane* pPlanesOut);  // 5905
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <0599DC0F> mathlib/mathlib.cpp:5951
// variables: 3
// function calls: 8
void CalcTriangleTangentSpace(const Vector& p0, const Vector& p1, const Vector& p2, const Vector2D& t0, const Vector2D& t1, const Vector2D& t2, Vector& sVect, Vector& tVect)
{
	Vector edge01; // 5960
	Vector edge02; // 5961
	Vector cross; // 5963
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 5956
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 5957
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 5960
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 5961
	Vector::Vector(); // 5963
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 5964
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 5975
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 5986
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <01168A22> mathlib/mathlib.cpp:6002
// variables: 3
void RGBtoHSV(const Vector& rgb, Vector& hsv)
{
	float flMax; // 6004
	float flMin; // 6006
	{
		float32 d; // 6029
	}
} /* size: 0, variables: 2 */

// <01168731> mathlib/mathlib.cpp:6054
// variables: 6
// function calls: 7
void HSVtoRGB(const Vector& hsv, Vector& rgb)
{
	float32 hue; // 6062
	int i; // 6068
	float32 f; // 6069
	float32 p; // 6070
	float32 q; // 6071
	float32 t; // 6072
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6075
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6080
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6058
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6076
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6077
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6078
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6079
} /* size: 0, variables: 6, inline expansions: 7 (0 bytes) */

// <0599D812> mathlib/mathlib.cpp:6088
// variables: 3
void RGBtoHSL(const Vector& rgb, Vector& hsl)
{
	float flMax; // 6090
	float flMin; // 6092
	float flD; // 6094
} /* size: 0, variables: 3 */

// <02B84692> mathlib/mathlib.cpp:6148
// variables: 5
// function calls: 7
void HSLtoRGB(const Vector& hsl, Vector& rgb)
{
	float32 flHue; // 6156
	int i; // 6158
	float flChroma; // 6161
	float flX; // 6162
	float flM; // 6173
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6152
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6169
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6168
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6167
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6166
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6165
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6170
} /* size: 0, variables: 5, inline expansions: 7 (0 bytes) */

// <0599D369> mathlib/mathlib.cpp:6179
// variables: 5
// function call: 1
void GetInterpolationData(const float* pKnotPositions, const float* pKnotValues, int nNumValuesinList, int nInterpolationRange, float flPositionToInterpolateAt, bool bWrap, float* pValueA, float* pValueB, float* pInterpolationValue)
{
	int idx; // 6191
	int nKnot1; // 6197
	int nKnot2; // 6197
	float flOffsetFromStartOfGap; // 6198
	float flSizeOfGap; // 6198
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 6244
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <02B84231> mathlib/mathlib.cpp:6274
Vector RandomVectorOnUnitSphere(IUniformRandomStream* pRnd)
{
} /* size: 0 */

// <0599CC82> mathlib/mathlib.cpp:6304
// variables: 3
// function calls: 3
Vector RandomVectorInUnitSphere(IUniformRandomStream* pRnd)
{
	float w; // 6306
	float flRadius; // 6307
	Vector v; // 6308
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 6308
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <0599CA54> mathlib/mathlib.cpp:6334
// variable: 1
// function call: 1
Vector2D RandomVectorInUnitCircle(void)
{
	Vector2D vOut; // 6336
	Vector2D::Vector2D(); // 6336
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0599C57D> mathlib/mathlib.cpp:6355
// variables: 6
// function call: 1
const Quaternion  RandomQuaternion(IUniformRandomStream* pRnd)
{
	float u; // 6359
	float flSinU; // 6359
	float v; // 6360
	float flSinV; // 6360
	float w; // 6361
	float flSinW; // 6361
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 6362
} /* size: 0, variables: 6, inline expansions: 1 (0 bytes) */

// <0599C14E> mathlib/mathlib.cpp:6377
// variables: 6
// function calls: 16
void PlaneEquation(const Vector* pVerts, int nVertCount, Vector* pOutNormal, float* pOutPlaneDistance)
{
	int i; // 6379
	Vector refpt; // 6380
	const Vector* pU; // 6381
	const Vector* pV; // 6382
	float len; // 6383
	Vector vNormal; // 6384
	Vector::Vector(); // 6380
	Vector::Vector(); // 6384
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6391
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 6392
	Vector::operator+=(
			const Vector& v);  // 6400
	DotProduct(const Vector& a,
			const Vector& b);  // 6409
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 6405
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 6406
	Vector::operator=(
			const Vector& vOther);  // 6406
} /* size: 389, variables: 6, inline expansions: 16 (221 bytes) */

// <0599B34C> mathlib/mathlib.cpp:6423
// variables: 7
// function calls: 64
bool GetBarycentricCoords3D(const Vector& v0, const Vector& v1, const Vector& v2, const Vector& pt, float& c0, float& c1, float& c2)
{
	Vector vSeg0; // 6426
	Vector vSeg1; // 6426
	Vector vCross; // 6426
	float totalArea; // 6432
	float ooTotalArea; // 6433
	float subArea; // 6439
	float cTotal; // 6458
	Vector::Vector(); // 6426
	Vector::Vector(); // 6426
	Vector::Vector(); // 6426
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 6427
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 6428
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 6431
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 6432
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 6436
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 6437
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 6438
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 6439
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 6443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 6444
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 6445
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 6446
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 6450
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 6451
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 6452
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 6453
	FloatMakePositive(vec_t f); // 6459
} /* size: 0, variables: 7, inline expansions: 64 (0 bytes) */

// <0599B311> mathlib/mathlib.cpp:6480
void PointsFromBox(const Vector& mins, const Vector& maxs, Vector* points)
{
} /* size: 0 */

// <0599ADB2> mathlib/mathlib.cpp:6515
// variable: 1
// function calls: 14
void BuildTransformedBox(Vector* v2, const Vector& bbmin, const Vector& bbmax, const matrix3x4_t& m)
{
	Vector v; // 6517
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 6520
	Vector::operator[](
			int i);  // 6498
	Vector::operator[](
			int i);  // 6482
	Vector::operator[](
			int i);  // 6484
	Vector::operator[](
			int i);  // 6483
	Vector::operator[](
			int i);  // 6488
	PointsFromBox(const Vector& mins,
			const Vector& maxs,
			Vector* points);  // 6518
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 6521
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 6522
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 6523
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 6524
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 6525
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 6526
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 6527
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <02B81E5E> mathlib/mathlib.cpp:6531
// variables: 3
// function calls: 2
const matrix3x4_t  ScaleMatrix(const Vector& vScale, const matrix3x4_t& in)
{
	matrix3x4_t out; // 6533
	{
		int i; // 6534
		{
			int j; // 6535
			Vector::operator[](
					int i);  // 6536
		}
	}
	matrix3x4_t::matrix3x4_t(); // 6533
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

