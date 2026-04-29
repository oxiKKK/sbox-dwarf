
//
// mathlib/vmatrix.cpp
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
//	functions: 74
//

// <05A7D4E5> mathlib/vmatrix.cpp:26
VMatrix SetupMatrixIdentity(void)
{
} /* size: 0 */

// <05A7D2C4> mathlib/vmatrix.cpp:35
// function calls: 2
VMatrix SetupMatrixTranslation(const Vector& vTranslation)
{
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 42
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05A7D0A3> mathlib/vmatrix.cpp:45
// function calls: 2
VMatrix SetupMatrixScale(const Vector& vScale)
{
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 52
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05A7CAA0> mathlib/vmatrix.cpp:55
// variables: 5
// function calls: 23
VMatrix SetupMatrixReflection(const VPlane& thePlane)
{
	VMatrix mReflect; // 57
	VMatrix mBack; // 57
	VMatrix mForward; // 57
	Vector vOrigin; // 58
	Vector N; // 58
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 62
	Vector::operator=(
			const Vector& vOther);  // 60
	VMatrix::VMatrix(); // 57
	VMatrix::VMatrix(); // 57
	VMatrix::VMatrix(); // 57
	Vector::Vector(); // 58
	Vector::Vector(); // 58
	VMatrix::VMatrix(); // 372
	VMatrix::operator*(
			const VMatrix& vm);  // 79
	MatrixSetIdentity(VMatrix& dst); // 836
	VMatrix::Identity(); // 71
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 149
	VPlane::GetPointOnPlane(); // 69
	MatrixSetIdentity(VMatrix& dst); // 836
	VMatrix::Identity(); // 74
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 72
	VMatrix::SetTranslation(
			const Vector& vTrans);  // 72
	VMatrix::SetTranslation(
			const Vector& vTrans);  // 75
	VMatrix::VMatrix(); // 372
	VMatrix::operator*(
			const VMatrix& vm);  // 79
} /* size: 0, variables: 5, inline expansions: 23 (0 bytes) */

// <05A7C95C> mathlib/vmatrix.cpp:82
// variables: 2
// function calls: 4
VMatrix SetupMatrixProjection(const Vector& vOrigin, const VPlane& thePlane)
{
	vec_t dot; // 84
	VMatrix mRet; // 85
	VMatrix::VMatrix(); // 85
	Vector::operator[](
			int i);  // 91
	Vector::operator[](
			int i);  // 91
	Vector::operator[](
			int i);  // 91
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <05A7C61E> mathlib/vmatrix.cpp:119
// variables: 10
// function calls: 3
VMatrix SetupMatrixAxisRot(const Vector& vAxis, vec_t fDegrees)
{
	vec_t s; // 121
	vec_t c; // 121
	vec_t t; // 121
	vec_t tx; // 122
	vec_t ty; // 122
	vec_t tz; // 122
	vec_t sx; // 123
	vec_t sy; // 123
	vec_t sz; // 123
	vec_t fRadians; // 124
	SinCos(float radians,
		float* sine,
		float* cosine);  // 129
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 139
} /* size: 0, variables: 10, inline expansions: 3 (0 bytes) */

// <05A7BE0F> mathlib/vmatrix.cpp:145
// variables: 13
// function calls: 19
VMatrix SetupMatrixAxisToAxisRot(const Vector& vFromAxis, const Vector& vToAxis)
{
	const char   __FUNCTION__; // 24117
	vec_t s; // 150
	vec_t c; // 150
	vec_t t; // 150
	vec_t tx; // 151
	vec_t ty; // 151
	vec_t tz; // 151
	vec_t sx; // 152
	vec_t sy; // 152
	vec_t sz; // 152
	Vector vAxis; // 154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
	}
	Vector::LengthSqr(); // 147
	Vector::LengthSqr(); // 148
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 154
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 156
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 157
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 171
	Vector::operator*=(
			float fl);  // 162
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 32
	SetupMatrixIdentity(void); // 175
} /* size: 0, variables: 11, inline expansions: 19 (0 bytes) */

// <02C3DA85> mathlib/vmatrix.cpp:145
// variables: 13
// function calls: 19
VMatrix SetupMatrixAxisToAxisRot(const Vector& vFromAxis, const Vector& vToAxis)
{
	const char   __FUNCTION__; // 18848
	vec_t s; // 150
	vec_t c; // 150
	vec_t t; // 150
	vec_t tx; // 151
	vec_t ty; // 151
	vec_t tz; // 151
	vec_t sx; // 152
	vec_t sy; // 152
	vec_t sz; // 152
	Vector vAxis; // 154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
	}
	Vector::LengthSqr(); // 147
	Vector::LengthSqr(); // 148
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 154
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 156
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 157
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 171
	Vector::operator*=(
			float fl);  // 162
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 32
	SetupMatrixIdentity(void); // 175
} /* size: 0, variables: 11, inline expansions: 19 (0 bytes) */

// <011ED167> mathlib/vmatrix.cpp:145
// variables: 13
// function calls: 19
VMatrix SetupMatrixAxisToAxisRot(const Vector& vFromAxis, const Vector& vToAxis)
{
	const char   __FUNCTION__; // 22592
	vec_t s; // 150
	vec_t c; // 150
	vec_t t; // 150
	vec_t tx; // 151
	vec_t ty; // 151
	vec_t tz; // 151
	vec_t sx; // 152
	vec_t sy; // 152
	vec_t sz; // 152
	Vector vAxis; // 154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
	}
	Vector::LengthSqr(); // 147
	Vector::LengthSqr(); // 148
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 154
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 156
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 157
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 171
	Vector::operator*=(
			float fl);  // 162
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 32
	SetupMatrixIdentity(void); // 175
} /* size: 0, variables: 11, inline expansions: 19 (0 bytes) */

// <0071DC10> mathlib/vmatrix.cpp:145
// variables: 13
// function calls: 19
VMatrix SetupMatrixAxisToAxisRot(const Vector& vFromAxis, const Vector& vToAxis)
{
	const char   __FUNCTION__; // 48198
	vec_t s; // 150
	vec_t c; // 150
	vec_t t; // 150
	vec_t tx; // 151
	vec_t ty; // 151
	vec_t tz; // 151
	vec_t sx; // 152
	vec_t sy; // 152
	vec_t sz; // 152
	Vector vAxis; // 154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
	}
	Vector::LengthSqr(); // 147
	Vector::LengthSqr(); // 148
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 154
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 156
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 157
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 171
	Vector::operator*=(
			float fl);  // 162
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 32
	SetupMatrixIdentity(void); // 175
} /* size: 0, variables: 11, inline expansions: 19 (0 bytes) */

// <005713C0> mathlib/vmatrix.cpp:145
// variables: 13
// function calls: 19
VMatrix SetupMatrixAxisToAxisRot(const Vector& vFromAxis, const Vector& vToAxis)
{
	const char   __FUNCTION__; // 44235
	vec_t s; // 150
	vec_t c; // 150
	vec_t t; // 150
	vec_t tx; // 151
	vec_t ty; // 151
	vec_t tz; // 151
	vec_t sx; // 152
	vec_t sy; // 152
	vec_t sz; // 152
	Vector vAxis; // 154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
	}
	Vector::LengthSqr(); // 147
	Vector::LengthSqr(); // 148
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 154
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 156
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 157
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 171
	Vector::operator*=(
			float fl);  // 162
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 32
	SetupMatrixIdentity(void); // 175
} /* size: 0, variables: 11, inline expansions: 19 (0 bytes) */

// <008EBEE6> mathlib/vmatrix.cpp:145
// variables: 13
// function calls: 19
VMatrix SetupMatrixAxisToAxisRot(const Vector& vFromAxis, const Vector& vToAxis)
{
	const char   __FUNCTION__; // 27505
	vec_t s; // 150
	vec_t c; // 150
	vec_t t; // 150
	vec_t tx; // 151
	vec_t ty; // 151
	vec_t tz; // 151
	vec_t sx; // 152
	vec_t sy; // 152
	vec_t sz; // 152
	Vector vAxis; // 154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
	}
	Vector::LengthSqr(); // 147
	Vector::LengthSqr(); // 148
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 154
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 156
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 157
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 171
	Vector::operator*=(
			float fl);  // 162
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 32
	SetupMatrixIdentity(void); // 175
} /* size: 0, variables: 11, inline expansions: 19 (0 bytes) */

// <00C95753> mathlib/vmatrix.cpp:145
// variables: 13
// function calls: 19
VMatrix SetupMatrixAxisToAxisRot(const Vector& vFromAxis, const Vector& vToAxis)
{
	const char   __FUNCTION__; // 40798
	vec_t s; // 150
	vec_t c; // 150
	vec_t t; // 150
	vec_t tx; // 151
	vec_t ty; // 151
	vec_t tz; // 151
	vec_t sx; // 152
	vec_t sy; // 152
	vec_t sz; // 152
	Vector vAxis; // 154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
	}
	Vector::LengthSqr(); // 147
	Vector::LengthSqr(); // 148
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 154
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 156
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 157
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 171
	Vector::operator*=(
			float fl);  // 162
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 32
	SetupMatrixIdentity(void); // 175
} /* size: 0, variables: 11, inline expansions: 19 (0 bytes) */

// <05A7BD3C> mathlib/vmatrix.cpp:179
// variable: 1
// function calls: 2
VMatrix SetupMatrixAngles(const QAngle& vAngles)
{
	VMatrix mRet; // 181
	VMatrix::VMatrix(); // 181
	MatrixFromAngles(const QAngle& vAngles,
			VMatrix& dst);  // 182
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05A7BC7F> mathlib/vmatrix.cpp:186
// variable: 1
// function call: 1
VMatrix SetupMatrixOrgAngles(const Vector& origin, const QAngle& vAngles)
{
	VMatrix mRet; // 188
	VMatrix::VMatrix(); // 188
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05A7B119> mathlib/vmatrix.cpp:237
// variables: 8
// function calls: 16
void VMatrix::operator=(const VMatrix& mOther)
{
	const fltx4  otherRow0; // 239
	const fltx4  otherRow1; // 240
	const fltx4  otherRow2; // 241
	const fltx4  otherRow3; // 242
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 239
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 240
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 241
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 242
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 244
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 245
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 246
	_mm_storeu_ps(float* __P,
			__m128 __A);  // 294
	StoreUnalignedSIMD<>(float* pSIMD,
				const fltx4& a);  // 247
} /* size: 74, variables: 4, inline expansions: 12 (97 bytes) */

// <011EC3C2> mathlib/vmatrix.cpp:272
// function call: 1
void VMatrix::operator==(const VMatrix& src)
{
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 274
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05A777A8> mathlib/vmatrix.cpp:276
// variables: 192
// function calls: 213
void VMatrix_MatrixMul(const VMatrix& lhs, const VMatrix& rhs, VMatrix& out)
{
	const fltx4  thisRow0; // 278
	const fltx4  thisRow1; // 279
	const fltx4  thisRow2; // 280
	const fltx4  thisRow3; // 281
	fltx4 otherRow0; // 283
	fltx4 otherRow1; // 284
	fltx4 otherRow2; // 285
	fltx4 otherRow3; // 286
	{
		const fltx4  dotResult0; // 291
		const fltx4  dotResult1; // 292
		const fltx4  dotResult2; // 293
		const fltx4  dotResult3; // 294
		const fltx4  xyxy; // 296
		const fltx4  zwzw; // 297
		const fltx4  xyzwSimd; // 298
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
				const fltx4& b);  // 291
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
				const fltx4& b);  // 292
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
				const fltx4& b);  // 293
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
				const fltx4& b);  // 294
		{
			fltx4 retVal; // 2811
			_mm_unpacklo_ps(__m128 __A,
					__m128 __B);  // 2812
		}
		InterleaveSIMDXY<>(const fltx4& a,
					const fltx4& b);  // 296
		{
			fltx4 retVal; // 2811
			_mm_unpacklo_ps(__m128 __A,
					__m128 __B);  // 2812
		}
		InterleaveSIMDXY<>(const fltx4& a,
					const fltx4& b);  // 297
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<68>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<68>(const fltx4& a,
				const fltx4& b);  // 298
		_mm_storeu_ps(float* __P,
				__m128 __A);  // 294
		StoreUnalignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 299
	}
	{
		const fltx4  dotResult0; // 304
		const fltx4  dotResult1; // 305
		const fltx4  dotResult2; // 306
		const fltx4  dotResult3; // 307
		const fltx4  xyxy; // 309
		const fltx4  zwzw; // 310
		const fltx4  xyzwSimd; // 311
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
				const fltx4& b);  // 305
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
				const fltx4& b);  // 304
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
				const fltx4& b);  // 306
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
				const fltx4& b);  // 307
		{
			fltx4 retVal; // 2811
			_mm_unpacklo_ps(__m128 __A,
					__m128 __B);  // 2812
		}
		InterleaveSIMDXY<>(const fltx4& a,
					const fltx4& b);  // 309
		{
			fltx4 retVal; // 2811
			_mm_unpacklo_ps(__m128 __A,
					__m128 __B);  // 2812
		}
		InterleaveSIMDXY<>(const fltx4& a,
					const fltx4& b);  // 310
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<68>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<68>(const fltx4& a,
				const fltx4& b);  // 311
		_mm_storeu_ps(float* __P,
				__m128 __A);  // 294
		StoreUnalignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 312
	}
	{
		const fltx4  dotResult0; // 317
		const fltx4  dotResult1; // 318
		const fltx4  dotResult2; // 319
		const fltx4  dotResult3; // 320
		const fltx4  xyxy; // 322
		const fltx4  zwzw; // 323
		const fltx4  xyzwSimd; // 324
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
				const fltx4& b);  // 318
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
				const fltx4& b);  // 317
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
				const fltx4& b);  // 319
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
				const fltx4& b);  // 320
		{
			fltx4 retVal; // 2811
			_mm_unpacklo_ps(__m128 __A,
					__m128 __B);  // 2812
		}
		InterleaveSIMDXY<>(const fltx4& a,
					const fltx4& b);  // 322
		{
			fltx4 retVal; // 2811
			_mm_unpacklo_ps(__m128 __A,
					__m128 __B);  // 2812
		}
		InterleaveSIMDXY<>(const fltx4& a,
					const fltx4& b);  // 323
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<68>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<68>(const fltx4& a,
				const fltx4& b);  // 324
		_mm_storeu_ps(float* __P,
				__m128 __A);  // 294
		StoreUnalignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 325
	}
	{
		const fltx4  dotResult0; // 330
		const fltx4  dotResult1; // 331
		const fltx4  dotResult2; // 332
		const fltx4  dotResult3; // 333
		const fltx4  xyxy; // 335
		const fltx4  zwzw; // 336
		const fltx4  xyzwSimd; // 337
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
				const fltx4& b);  // 331
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
				const fltx4& b);  // 330
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
				const fltx4& b);  // 333
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
				const fltx4& b);  // 332
		{
			fltx4 retVal; // 2811
			_mm_unpacklo_ps(__m128 __A,
					__m128 __B);  // 2812
		}
		InterleaveSIMDXY<>(const fltx4& a,
					const fltx4& b);  // 335
		{
			fltx4 retVal; // 2811
			_mm_unpacklo_ps(__m128 __A,
					__m128 __B);  // 2812
		}
		InterleaveSIMDXY<>(const fltx4& a,
					const fltx4& b);  // 336
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<68>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<68>(const fltx4& a,
				const fltx4& b);  // 337
		_mm_storeu_ps(float* __P,
				__m128 __A);  // 294
		StoreUnalignedSIMD<>(float* pSIMD,
					const fltx4& a);  // 338
	}
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 278
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 283
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
			fltx4& w);  // 287
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 285
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 284
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 286
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 279
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 280
	{
		fltx4 retVal; // 947
		_mm_loadu_ps(const float* __P); // 948
	}
	LoadUnalignedSIMD<>(const void* pSIMD); // 281
} /* size: 658, variables: 8, inline expansions: 9 (115 bytes) */

// <05A77738> mathlib/vmatrix.cpp:365
void VMatrix::MatrixMul(const VMatrix& vm, VMatrix& out)
{
} /* size: 0 */

// <05A7ED38> mathlib/vmatrix.cpp:377
void VMatrix::InverseGeneral(VMatrix& vInverse)
{
} /* size: 9 */

// <02C39103> mathlib/vmatrix.cpp:383
// variables: 16
// function calls: 2
bool MatrixInverseGeneral(const VMatrix& src, VMatrix& dst)
{
	int iRow; // 385
	int i; // 385
	int j; // 385
	int iTemp; // 385
	int iTest; // 385
	vec_t mul; // 386
	vec_t fTest; // 386
	vec_t fLargest; // 386
	vec_t mat; // 387
	int rowMap; // 388
	int iLargest; // 388
	vec_t* pOut; // 389
	vec_t* pRow; // 389
	vec_t* pScaleRow; // 389
	{
		const vec_t* pIn; // 401
		VMatrix::operator[](
				int nRow);  // 401
	}
	{
		const vec_t* pIn; // 480
	}
	FloatMakePositive(vec_t f); // 430
} /* size: 0, variables: 14, inline expansions: 1 (0 bytes) */

// <05A77445> mathlib/vmatrix.cpp:496
// variables: 2
void MatrixInverseTR(const VMatrix& src, VMatrix& dst)
{
	Vector vTrans; // 498
	Vector vNewTrans; // 498
} /* size: 0, variables: 2 */

// <05A77295> mathlib/vmatrix.cpp:516
// function calls: 6
void VMatrix::InverseTR(VMatrix& ret)
{
	Vector::Vector(); // 498
	Vector::Vector(); // 498
	Vector::Vector(); // 865
	Vector3DMultiply(const VMatrix& src1,
			const Vector& src2,
			Vector& dst);  // 507
	MatrixSetColumn(VMatrix& src,
			MatrixAxisType_t nCol,
			const Vector& column);  // 508
	MatrixInverseTR(const VMatrix& src,
			VMatrix& dst);  // 518
} /* size: 239, inline expansions: 6 (317 bytes) */

// <05A76E2B> mathlib/vmatrix.cpp:530
// variables: 2
// function calls: 16
void MatrixInverseTranspose(const matrix3x4_t& src, matrix3x4_t& dst)
{
	VMatrix tmp; // 532
	VMatrix out; // 532
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 683
	matrix3x4_t::Base(); // 683
	VMatrix::CopyFrom3x4(
			const matrix3x4_t& m3x4);  // 533
	VMatrix::VMatrix(); // 532
	VMatrix::VMatrix(); // 532
	VMatrix::InverseGeneral(
			VMatrix& vInverse);  // 523
	Swap<float>(float& a,
			float& b);  // 741
	Swap<float>(float& a,
			float& b);  // 743
	Swap<float>(float& a,
			float& b);  // 744
	MatrixTranspose(const VMatrix& src,
			VMatrix& dst);  // 524
	MatrixInverseTranspose(const VMatrix& src,
				VMatrix& dst);  // 534
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 690
	matrix3x4_t::Base(); // 690
	VMatrix::Set3x4(
		matrix3x4_t& matrix3x4);  // 535
} /* size: 0, variables: 2, inline expansions: 16 (0 bytes) */

// <05A76C94> mathlib/vmatrix.cpp:539
// variable: 1
// function calls: 6
void VMatrix::InverseTR()
{
	VMatrix ret; // 541
	VMatrix::VMatrix(); // 541
	Vector::Vector(); // 498
	Vector::Vector(); // 498
	Vector::Vector(); // 865
	Vector3DMultiply(const VMatrix& src1,
			const Vector& src2,
			Vector& dst);  // 507
	MatrixInverseTR(const VMatrix& src,
			VMatrix& dst);  // 542
} /* size: 251, variables: 1, inline expansions: 6 (335 bytes) */

// <05A769BC> mathlib/vmatrix.cpp:546
// variable: 1
// function calls: 18
void VMatrix::GetScale()
{
	Vector vecs; // 548
	VMatrix::GetBasisVectors(
			Vector& vForward,
			Vector& vLeft,
			Vector& vUp);  // 550
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 556
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 556
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 556
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 556
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <05A76791> mathlib/vmatrix.cpp:559
// function calls: 2
void VMatrix::Scale(const Vector& vScale)
{
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 566
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05A764A4> mathlib/vmatrix.cpp:569
// variables: 2
// function calls: 8
void VMatrix::NormalizeBasisVectors()
{
	Vector vecs; // 571
	VMatrix mRet; // 572
	VMatrix::VMatrix(); // 572
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 611
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 613
	VMatrix::GetBasisVectors(
			Vector& vForward,
			Vector& vLeft,
			Vector& vUp);  // 575
	VMatrix::SetForward(
			const Vector& vForward);  // 618
	VMatrix::SetLeft(
		const Vector& vLeft);  // 619
	VMatrix::SetUp(
		const Vector& vUp);  // 620
	VMatrix::SetBasisVectors(
			const Vector& vForward,
			const Vector& vLeft,
			const Vector& vUp);  // 581
} /* size: 0, variables: 2, inline expansions: 8 (0 bytes) */

// <05A76288> mathlib/vmatrix.cpp:590
// function calls: 2
void VMatrix::Transpose()
{
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 596
} /* size: 144, inline expansions: 2 (236 bytes) */

// <05A7606C> mathlib/vmatrix.cpp:600
// function calls: 2
void VMatrix::Transpose3x3()
{
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 488
	VMatrix::VMatrix(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 606
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05A75AFB> mathlib/vmatrix.cpp:609
// variables: 3
// function calls: 30
void VMatrix::IsRotationMatrix()
{
	Vector& v1; // 611
	Vector& v2; // 612
	Vector& v3; // 613
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 616
	FloatMakePositive(vec_t f); // 616
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 617
	FloatMakePositive(vec_t f); // 617
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 618
	FloatMakePositive(vec_t f); // 618
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 619
	FloatMakePositive(vec_t f); // 619
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 620
	FloatMakePositive(vec_t f); // 620
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 621
	FloatMakePositive(vec_t f); // 621
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <05A75484> mathlib/vmatrix.cpp:624
// variables: 3
// function calls: 21
void VMatrix::SetupMatrixOrgAngles(const Vector& origin, const QAngle& vAngles)
{
	VectorAligned vDegrees; // 629
	VectorAligned vSines; // 630
	VectorAligned vCosines; // 631
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
			VectorAligned* pCosines);  // 633
	QAngle::operator[](
			int i);  // 629
	QAngle::operator[](
			int i);  // 629
	QAngle::operator[](
			int i);  // 629
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 30
	VectorAligned::VectorAligned(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 629
	VectorAligned::VectorAligned(); // 630
	VectorAligned::VectorAligned(); // 631
} /* size: 424, variables: 3, inline expansions: 21 (136 bytes) */

// <02C370D9> mathlib/vmatrix.cpp:663
void MatrixSetIdentity(VMatrix& dst)
{
} /* size: 0 */

// <05A75435> mathlib/vmatrix.cpp:675
void MatrixFromAngles(const QAngle& vAngles, VMatrix& dst)
{
} /* size: 0 */

// <05A751FB> mathlib/vmatrix.cpp:684
// variables: 4
// function calls: 5
void MatrixToAngles(const VMatrix& src, QAngle& vAngles)
{
	float forward; // 686
	float left; // 687
	float up; // 688
	float xyDist; // 700
	RAD2DEG(float flRadians); // 706
	RAD2DEG(float flRadians); // 711
	RAD2DEG(float flRadians); // 714
	RAD2DEG(float flRadians); // 719
	RAD2DEG(float flRadians); // 724
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <02C36ADE> mathlib/vmatrix.cpp:773
// variables: 5
// function calls: 10
void MatrixMultiply(const VMatrix& src1, const VMatrix& src2, VMatrix& dst)
{
	VMatrix tmp1; // 776
	VMatrix tmp2; // 776
	float* s1; // 777
	float* s2; // 778
	VMatrix* pDst; // 792
	VMatrix::VMatrix(); // 776
	VMatrix::VMatrix(); // 776
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 764
	MatrixCopy(const VMatrix& src,
			VMatrix& dst);  // 760
	MatrixCopy(const VMatrix& src,
			VMatrix& dst);  // 782
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 764
	MatrixCopy(const VMatrix& src,
			VMatrix& dst);  // 760
	MatrixCopy(const VMatrix& src,
			VMatrix& dst);  // 786
} /* size: 0, variables: 5, inline expansions: 10 (0 bytes) */

// <05A74A4E> mathlib/vmatrix.cpp:818
// variables: 2
// function calls: 14
void Vector4DMultiply(const VMatrix& src1, const Vector4D& src2, Vector4D& dst)
{
	Vector4D tmp; // 821
	const Vector4D& v; // 822
	Vector4DCopy(const Vector4D& src,
			Vector4D& dst);  // 826
	Vector4D::Vector4D(); // 821
	Vector4D::operator[](
			int i);  // 830
	Vector4D::operator[](
			int i);  // 830
	Vector4D::operator[](
			int i);  // 830
	Vector4D::operator[](
			int i);  // 830
	Vector4D::operator[](
			int i);  // 831
	Vector4D::operator[](
			int i);  // 831
	Vector4D::operator[](
			int i);  // 831
	Vector4D::operator[](
			int i);  // 831
	Vector4D::operator[](
			int i);  // 832
	Vector4D::operator[](
			int i);  // 832
	Vector4D::operator[](
			int i);  // 832
	Vector4D::operator[](
			int i);  // 832
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <05A749B1> mathlib/vmatrix.cpp:839
// variables: 2
// function call: 1
void Vector4DMultiplyPosition(const VMatrix& src1, const Vector& src2, Vector4D& dst)
{
	Vector tmp; // 842
	const Vector& v; // 843
	Vector::Vector(); // 842
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <05A7495E> mathlib/vmatrix.cpp:862
// variables: 2
void Vector3DMultiply(const VMatrix& src1, const Vector& src2, Vector& dst)
{
	Vector tmp; // 865
	const Vector& v; // 866
} /* size: 0, variables: 2 */

// <02C364EE> mathlib/vmatrix.cpp:883
// variables: 3
// function calls: 2
void Vector3DMultiplyPositionProjective(const VMatrix& src1, const Vector& src2, Vector& dst)
{
	Vector tmp; // 886
	const Vector& v; // 887
	float w; // 893
	Vector::Vector(); // 886
	Vector::operator*=(
			float fl);  // 902
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <05A7474B> mathlib/vmatrix.cpp:910
// variables: 3
// function calls: 3
void Vector3DMultiplyProjective(const VMatrix& src1, const Vector& src2, Vector& dst)
{
	Vector tmp; // 913
	const Vector& v; // 914
	float w; // 920
	Vector::Vector(); // 913
	Vector::operator=(
			const Vector& vOther);  // 931
	Vector::operator/=(
			float fl);  // 927
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <05A7431C> mathlib/vmatrix.cpp:939
// variables: 3
// function calls: 14
void Vector4DMultiplyTranspose(const VMatrix& src1, const Vector4D& src2, Vector4D& dst)
{
	bool srcEqualsDst; // 942
	Vector4D tmp; // 944
	const Vector4D& v; // 945
	Vector4DCopy(const Vector4D& src,
			Vector4D& dst);  // 949
	Vector4D::Vector4D(); // 944
	Vector4D::operator[](
			int i);  // 953
	Vector4D::operator[](
			int i);  // 953
	Vector4D::operator[](
			int i);  // 953
	Vector4D::operator[](
			int i);  // 953
	Vector4D::operator[](
			int i);  // 954
	Vector4D::operator[](
			int i);  // 954
	Vector4D::operator[](
			int i);  // 954
	Vector4D::operator[](
			int i);  // 954
	Vector4D::operator[](
			int i);  // 955
	Vector4D::operator[](
			int i);  // 955
	Vector4D::operator[](
			int i);  // 955
	Vector4D::operator[](
			int i);  // 955
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

// <05A7426A> mathlib/vmatrix.cpp:961
// variables: 3
// function call: 1
void Vector3DMultiplyTranspose(const VMatrix& src1, const Vector& src2, Vector& dst)
{
	bool srcEqualsDst; // 964
	Vector tmp; // 966
	const Vector& v; // 967
	Vector::Vector(); // 966
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <05A74098> mathlib/vmatrix.cpp:983
// variable: 1
// function calls: 6
void MatrixTransformPlane(const VMatrix& src, const cplane_t& inPlane, cplane_t& outPlane)
{
	Vector vTrans; // 1000
	Vector::Vector(); // 1000
	Vector::Vector(); // 865
	Vector3DMultiply(const VMatrix& src1,
			const Vector& src2,
			Vector& dst);  // 1001
	DotProduct(const Vector& a,
			const Vector& b);  // 1002
	VMatrix::GetTranslation(
			Vector& vTrans);  // 1003
	DotProduct(const Vector& a,
			const Vector& b);  // 1003
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <02C358E7> mathlib/vmatrix.cpp:1025
// function calls: 4
void MatrixBuildTranslation(VMatrix& dst, const Vector& translation)
{
	MatrixSetIdentity(VMatrix& dst); // 1027
	Vector::operator[](
			int i);  // 1028
	Vector::operator[](
			int i);  // 1029
	Vector::operator[](
			int i);  // 1030
} /* size: 0, inline expansions: 4 (0 bytes) */

// <05A736D1> mathlib/vmatrix.cpp:1058
// variables: 5
// function calls: 19
void MatrixBuildRotation(VMatrix& dst, const Vector& initialDirection, const Vector& finalDirection)
{
	float angle; // 1060
	const char   __FUNCTION__; // 54349
	Vector axis; // 1063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
	{
		int idx; // 1079
		Vector::operator[](
				int i);  // 1080
		Vector::operator[](
				int i);  // 1080
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1085
		FloatMakePositive(vec_t f); // 1080
		FloatMakePositive(vec_t f); // 1080
		Vector::operator[](
				int i);  // 1082
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1082
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1087
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1086
		DotProduct(const Vector& a,
				const Vector& b);  // 1087
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1060
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 1061
	Vector::Vector(); // 1063
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1093
	MatrixSetIdentity(VMatrix& dst); // 1069
	MatrixBuildRotationAboutAxis(VMatrix& dst,
					const Vector& vAxisOfRot,
					float angleDegrees);  // 1098
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <02C35347> mathlib/vmatrix.cpp:1058
// variables: 5
// function calls: 19
void MatrixBuildRotation(VMatrix& dst, const Vector& initialDirection, const Vector& finalDirection)
{
	float angle; // 1060
	const char   __FUNCTION__; // 49080
	Vector axis; // 1063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
	{
		int idx; // 1079
		Vector::operator[](
				int i);  // 1080
		Vector::operator[](
				int i);  // 1080
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1085
		FloatMakePositive(vec_t f); // 1080
		FloatMakePositive(vec_t f); // 1080
		Vector::operator[](
				int i);  // 1082
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1082
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1087
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1086
		DotProduct(const Vector& a,
				const Vector& b);  // 1087
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1060
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 1061
	Vector::Vector(); // 1063
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1093
	MatrixSetIdentity(VMatrix& dst); // 1069
	MatrixBuildRotationAboutAxis(VMatrix& dst,
					const Vector& vAxisOfRot,
					float angleDegrees);  // 1098
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <007154D2> mathlib/vmatrix.cpp:1058
// variables: 5
// function calls: 19
void MatrixBuildRotation(VMatrix& dst, const Vector& initialDirection, const Vector& finalDirection)
{
	float angle; // 1060
	const char   __FUNCTION__; // 12894
	Vector axis; // 1063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
	{
		int idx; // 1079
		Vector::operator[](
				int i);  // 1080
		Vector::operator[](
				int i);  // 1080
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1085
		FloatMakePositive(vec_t f); // 1080
		FloatMakePositive(vec_t f); // 1080
		Vector::operator[](
				int i);  // 1082
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1082
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1087
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1086
		DotProduct(const Vector& a,
				const Vector& b);  // 1087
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1060
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 1061
	Vector::Vector(); // 1063
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1093
	MatrixSetIdentity(VMatrix& dst); // 1069
	MatrixBuildRotationAboutAxis(VMatrix& dst,
					const Vector& vAxisOfRot,
					float angleDegrees);  // 1098
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <00568C82> mathlib/vmatrix.cpp:1058
// variables: 5
// function calls: 19
void MatrixBuildRotation(VMatrix& dst, const Vector& initialDirection, const Vector& finalDirection)
{
	float angle; // 1060
	const char   __FUNCTION__; // 8931
	Vector axis; // 1063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
	{
		int idx; // 1079
		Vector::operator[](
				int i);  // 1080
		Vector::operator[](
				int i);  // 1080
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1085
		FloatMakePositive(vec_t f); // 1080
		FloatMakePositive(vec_t f); // 1080
		Vector::operator[](
				int i);  // 1082
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1082
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1087
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1086
		DotProduct(const Vector& a,
				const Vector& b);  // 1087
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1060
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 1061
	Vector::Vector(); // 1063
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1093
	MatrixSetIdentity(VMatrix& dst); // 1069
	MatrixBuildRotationAboutAxis(VMatrix& dst,
					const Vector& vAxisOfRot,
					float angleDegrees);  // 1098
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <008E37A8> mathlib/vmatrix.cpp:1058
// variables: 5
// function calls: 19
void MatrixBuildRotation(VMatrix& dst, const Vector& initialDirection, const Vector& finalDirection)
{
	float angle; // 1060
	const char   __FUNCTION__; // 57737
	Vector axis; // 1063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
	{
		int idx; // 1079
		Vector::operator[](
				int i);  // 1080
		Vector::operator[](
				int i);  // 1080
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1085
		FloatMakePositive(vec_t f); // 1080
		FloatMakePositive(vec_t f); // 1080
		Vector::operator[](
				int i);  // 1082
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1082
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1087
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1086
		DotProduct(const Vector& a,
				const Vector& b);  // 1087
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1060
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 1061
	Vector::Vector(); // 1063
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1093
	MatrixSetIdentity(VMatrix& dst); // 1069
	MatrixBuildRotationAboutAxis(VMatrix& dst,
					const Vector& vAxisOfRot,
					float angleDegrees);  // 1098
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <008964B6> mathlib/vmatrix.cpp:1058
// variables: 5
// function calls: 19
void MatrixBuildRotation(VMatrix& dst, const Vector& initialDirection, const Vector& finalDirection)
{
	float angle; // 1060
	const char   __FUNCTION__; // 29714
	Vector axis; // 1063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
	{
		int idx; // 1079
		Vector::operator[](
				int i);  // 1080
		Vector::operator[](
				int i);  // 1080
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1085
		FloatMakePositive(vec_t f); // 1080
		FloatMakePositive(vec_t f); // 1080
		Vector::operator[](
				int i);  // 1082
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1082
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1087
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1086
		DotProduct(const Vector& a,
				const Vector& b);  // 1087
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1060
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 1061
	Vector::Vector(); // 1063
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1093
	MatrixSetIdentity(VMatrix& dst); // 1069
	MatrixBuildRotationAboutAxis(VMatrix& dst,
					const Vector& vAxisOfRot,
					float angleDegrees);  // 1098
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <00C8D015> mathlib/vmatrix.cpp:1058
// variables: 5
// function calls: 19
void MatrixBuildRotation(VMatrix& dst, const Vector& initialDirection, const Vector& finalDirection)
{
	float angle; // 1060
	const char   __FUNCTION__; // 5494
	Vector axis; // 1063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
	{
		int idx; // 1079
		Vector::operator[](
				int i);  // 1080
		Vector::operator[](
				int i);  // 1080
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 1085
		FloatMakePositive(vec_t f); // 1080
		FloatMakePositive(vec_t f); // 1080
		Vector::operator[](
				int i);  // 1082
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1082
		VectorMA(const Vector& start,
			float scale,
			const Vector& direction,
			Vector& dest);  // 1087
		FloatMakePositive(vec_t f); // 1082
		Vector::operator[](
				int i);  // 1086
		DotProduct(const Vector& a,
				const Vector& b);  // 1087
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1060
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 1061
	Vector::Vector(); // 1063
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1093
	MatrixSetIdentity(VMatrix& dst); // 1069
	MatrixBuildRotationAboutAxis(VMatrix& dst,
					const Vector& vAxisOfRot,
					float angleDegrees);  // 1098
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <05A735CF> mathlib/vmatrix.cpp:1110
// variables: 3
// function call: 1
void MatrixBuildRotateZ(VMatrix& dst, float angleDegrees)
{
	float radians; // 1112
	float fSin; // 1113
	float fCos; // 1114
	SinCos(float radians,
		float* sine,
		float* cosine);  // 1116
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <05A734F0> mathlib/vmatrix.cpp:1133
// function call: 1
void MatrixBuildScale(VMatrix& dst, const Vector& scale)
{
	MatrixBuildScale(VMatrix& dst,
			float x,
			float y,
			float z);  // 1135
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05A731C1> mathlib/vmatrix.cpp:1138
// variables: 5
// function calls: 7
void MatrixBuildPerspective(VMatrix& dst, float fovX, float fovY, float zNear, float zFar)
{
	float width; // 1141
	float height; // 1142
	VMatrix negateXY; // 1152
	VMatrix addW; // 1158
	VMatrix scaleHalf; // 1165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1144
	VMatrix::VMatrix(); // 1152
	VMatrix::VMatrix(); // 1158
	MatrixSetIdentity(VMatrix& dst); // 836
	VMatrix::Identity(); // 1159
	VMatrix::VMatrix(); // 1165
} /* size: 0, variables: 5, inline expansions: 7 (0 bytes) */

// <05A730C1> mathlib/vmatrix.cpp:1172
// variables: 9
inline void CalculateAABBForNormalizedFrustum_Helper(float x, float y, float z, const VMatrix& volumeToWorld, Vector& mins, Vector& maxs)
{
	Vector volumeSpacePos; // 1174
	const char   __FUNCTION__; // 51672
	Vector worldPos; // 1184
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1177
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1180
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
	}
} /* size: 0, variables: 3 */

// <02C34D37> mathlib/vmatrix.cpp:1172
// variables: 9
inline void CalculateAABBForNormalizedFrustum_Helper(float x, float y, float z, const VMatrix& volumeToWorld, Vector& mins, Vector& maxs)
{
	Vector volumeSpacePos; // 1174
	const char   __FUNCTION__; // 46403
	Vector worldPos; // 1184
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1177
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1180
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
	}
} /* size: 0, variables: 3 */

// <00714EC2> mathlib/vmatrix.cpp:1172
// variables: 9
inline void CalculateAABBForNormalizedFrustum_Helper(float x, float y, float z, const VMatrix& volumeToWorld, Vector& mins, Vector& maxs)
{
	Vector volumeSpacePos; // 1174
	const char   __FUNCTION__; // 10217
	Vector worldPos; // 1184
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1177
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1180
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
	}
} /* size: 0, variables: 3 */

// <00568672> mathlib/vmatrix.cpp:1172
// variables: 9
inline void CalculateAABBForNormalizedFrustum_Helper(float x, float y, float z, const VMatrix& volumeToWorld, Vector& mins, Vector& maxs)
{
	Vector volumeSpacePos; // 1174
	const char   __FUNCTION__; // 6254
	Vector worldPos; // 1184
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1177
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1180
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
	}
} /* size: 0, variables: 3 */

// <008E3198> mathlib/vmatrix.cpp:1172
// variables: 9
inline void CalculateAABBForNormalizedFrustum_Helper(float x, float y, float z, const VMatrix& volumeToWorld, Vector& mins, Vector& maxs)
{
	Vector volumeSpacePos; // 1174
	const char   __FUNCTION__; // 55060
	Vector worldPos; // 1184
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1177
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1180
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
	}
} /* size: 0, variables: 3 */

// <00895EA6> mathlib/vmatrix.cpp:1172
// variables: 9
inline void CalculateAABBForNormalizedFrustum_Helper(float x, float y, float z, const VMatrix& volumeToWorld, Vector& mins, Vector& maxs)
{
	Vector volumeSpacePos; // 1174
	const char   __FUNCTION__; // 27037
	Vector worldPos; // 1184
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1177
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1180
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
	}
} /* size: 0, variables: 3 */

// <00C8CA05> mathlib/vmatrix.cpp:1172
// variables: 9
inline void CalculateAABBForNormalizedFrustum_Helper(float x, float y, float z, const VMatrix& volumeToWorld, Vector& mins, Vector& maxs)
{
	Vector volumeSpacePos; // 1174
	const char   __FUNCTION__; // 2817
	Vector worldPos; // 1184
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1177
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1179
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1180
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1182
	}
} /* size: 0, variables: 3 */

// <05A7259F> mathlib/vmatrix.cpp:1193
// function calls: 24
void CalculateAABBFromProjectionMatrixInverse(const VMatrix& volumeToWorld, Vector* pMins, Vector* pMaxs)
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1174
	Vector::Vector(); // 1184
	CalculateAABBForNormalizedFrustum_Helper(float x,
						float y,
						float z,
						const VMatrix& volumeToWorld,
						Vector& mins,
						Vector& maxs);  // 1197
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1174
	Vector::Vector(); // 1184
	CalculateAABBForNormalizedFrustum_Helper(float x,
						float y,
						float z,
						const VMatrix& volumeToWorld,
						Vector& mins,
						Vector& maxs);  // 1198
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1174
	Vector::Vector(); // 1184
	CalculateAABBForNormalizedFrustum_Helper(float x,
						float y,
						float z,
						const VMatrix& volumeToWorld,
						Vector& mins,
						Vector& maxs);  // 1199
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1174
	Vector::Vector(); // 1184
	CalculateAABBForNormalizedFrustum_Helper(float x,
						float y,
						float z,
						const VMatrix& volumeToWorld,
						Vector& mins,
						Vector& maxs);  // 1200
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1174
	Vector::Vector(); // 1184
	CalculateAABBForNormalizedFrustum_Helper(float x,
						float y,
						float z,
						const VMatrix& volumeToWorld,
						Vector& mins,
						Vector& maxs);  // 1201
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1174
	Vector::Vector(); // 1184
	CalculateAABBForNormalizedFrustum_Helper(float x,
						float y,
						float z,
						const VMatrix& volumeToWorld,
						Vector& mins,
						Vector& maxs);  // 1202
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1174
	Vector::Vector(); // 1184
	CalculateAABBForNormalizedFrustum_Helper(float x,
						float y,
						float z,
						const VMatrix& volumeToWorld,
						Vector& mins,
						Vector& maxs);  // 1203
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1174
	Vector::Vector(); // 1184
	CalculateAABBForNormalizedFrustum_Helper(float x,
						float y,
						float z,
						const VMatrix& volumeToWorld,
						Vector& mins,
						Vector& maxs);  // 1204
} /* size: 0, inline expansions: 24 (0 bytes) */

// <05A724D3> mathlib/vmatrix.cpp:1207
// variable: 1
void CalculateAABBFromProjectionMatrix(const VMatrix& worldToVolume, Vector* pMins, Vector* pMaxs)
{
	VMatrix volumeToWorld; // 1209
} /* size: 0, variables: 1 */

// <05A71E43> mathlib/vmatrix.cpp:1218
// variables: 9
// function calls: 23
void CalculateSphereFromProjectionMatrixInverse(const VMatrix& volumeToWorld, Vector* pCenter, float* pflRadius)
{
	Vector vecCenterNear; // 1225
	Vector vecCenterFar; // 1225
	Vector vecNearEdge; // 1225
	Vector vecFarEdge; // 1225
	Vector vecDelta; // 1242
	float l; // 1244
	float h1Sqr; // 1245
	float h2Sqr; // 1246
	float x; // 1247
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1226
	Vector::Vector(); // 1225
	Vector::Vector(); // 1225
	Vector::Vector(); // 1225
	Vector::Vector(); // 1225
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1227
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1228
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1229
	Vector::Vector(); // 1242
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1243
	Vector::LengthSqr(); // 198
	Vector::Vector(); // 194
	Vector::DistToSqr(
			const Vector& vOther);  // 1245
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1244
	Vector::LengthSqr(); // 198
	Vector::Vector(); // 194
	Vector::DistToSqr(
			const Vector& vOther);  // 1246
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 1248
} /* size: 0, variables: 9, inline expansions: 23 (0 bytes) */

// <05A71D77> mathlib/vmatrix.cpp:1256
// variable: 1
void CalculateSphereFromProjectionMatrix(const VMatrix& worldToVolume, Vector* pCenter, float* pflRadius)
{
	VMatrix volumeToWorld; // 1258
} /* size: 0, variables: 1 */

// <05A71CEA> mathlib/vmatrix.cpp:1264
// variables: 5
inline void FrustumPlanesFromMatrixHelper(const VMatrix& shadowToWorld, const Vector& p1, const Vector& p2, const Vector& p3, VPlane& plane)
{
	Vector world1; // 1266
	Vector world2; // 1266
	Vector world3; // 1266
	Vector v1; // 1271
	Vector v2; // 1271
} /* size: 0, variables: 5 */

// <05A70447> mathlib/vmatrix.cpp:1280
// variable: 1
// function calls: 78
void FrustumPlanesFromMatrix(const VMatrix& clipToWorld, Frustum_t& frustum)
{
	VPlane planes; // 1282
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1271
	Vector::Vector(); // 1271
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1272
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1273
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1275
	DotProduct(const Vector& a,
			const Vector& b);  // 1277
	FrustumPlanesFromMatrixHelper(const VMatrix& shadowToWorld,
					const Vector& p1,
					const Vector& p2,
					const Vector& p3,
					VPlane& plane);  // 1284
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1285
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1285
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1285
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1271
	Vector::Vector(); // 1271
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1272
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1273
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1275
	DotProduct(const Vector& a,
			const Vector& b);  // 1277
	FrustumPlanesFromMatrixHelper(const VMatrix& shadowToWorld,
					const Vector& p1,
					const Vector& p2,
					const Vector& p3,
					VPlane& plane);  // 1287
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1288
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1288
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1288
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1271
	Vector::Vector(); // 1271
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1272
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1273
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1275
	DotProduct(const Vector& a,
			const Vector& b);  // 1277
	FrustumPlanesFromMatrixHelper(const VMatrix& shadowToWorld,
					const Vector& p1,
					const Vector& p2,
					const Vector& p3,
					VPlane& plane);  // 1290
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1291
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1291
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1291
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1271
	Vector::Vector(); // 1271
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1272
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1273
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1275
	DotProduct(const Vector& a,
			const Vector& b);  // 1277
	FrustumPlanesFromMatrixHelper(const VMatrix& shadowToWorld,
					const Vector& p1,
					const Vector& p2,
					const Vector& p3,
					VPlane& plane);  // 1293
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1294
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1294
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1294
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1271
	Vector::Vector(); // 1271
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1272
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1273
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1275
	DotProduct(const Vector& a,
			const Vector& b);  // 1277
	FrustumPlanesFromMatrixHelper(const VMatrix& shadowToWorld,
					const Vector& p1,
					const Vector& p2,
					const Vector& p3,
					VPlane& plane);  // 1296
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1297
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1297
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1297
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1266
	Vector::Vector(); // 1271
	Vector::Vector(); // 1271
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1272
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1273
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1275
	DotProduct(const Vector& a,
			const Vector& b);  // 1277
	FrustumPlanesFromMatrixHelper(const VMatrix& shadowToWorld,
					const Vector& p1,
					const Vector& p2,
					const Vector& p3,
					VPlane& plane);  // 1299
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1300
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1300
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1300
} /* size: 0, variables: 1, inline expansions: 78 (0 bytes) */

// <05A702AA> mathlib/vmatrix.cpp:1305
// function call: 1
void MatrixBuildOrtho(VMatrix& dst, double left, double top, double right, double bottom, double zNear, double zFar)
{
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 1332
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05A70113> mathlib/vmatrix.cpp:1338
// function call: 1
void MatrixBuildOrthoLH(VMatrix& dst, double left, double top, double right, double bottom, double zNear, double zFar)
{
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 1341
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05A6FE51> mathlib/vmatrix.cpp:1348
// variables: 2
// function calls: 2
void MatrixBuildPerspectiveX(VMatrix& dst, double flFovX, double flAspect, double flZNear, double flZFar)
{
	float flWidth; // 1350
	float flHeight; // 1351
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 1355
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 1362
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <05A6FB0F> mathlib/vmatrix.cpp:1369
// variables: 6
// function calls: 2
void MatrixBuildPerspectiveOffCenterX(VMatrix& dst, double flFovX, double flAspect, double flZNear, double flZFar, double bottom, double top, double left, double right)
{
	float flWidth; // 1371
	float flHeight; // 1372
	float flLeft; // 1375
	float flRight; // 1376
	float flBottom; // 1377
	float flTop; // 1378
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 1383
	VMatrix::Init(
		vec_t m00,
		vec_t m01,
		vec_t m02,
		vec_t m03,
		vec_t m10,
		vec_t m11,
		vec_t m12,
		vec_t m13,
		vec_t m20,
		vec_t m21,
		vec_t m22,
		vec_t m23,
		vec_t m30,
		vec_t m31,
		vec_t m32,
		vec_t m33);  // 1390
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <02C308F0> mathlib/vmatrix.cpp:1402
// variables: 4
// function calls: 63
void ExtractClipPlanesFromNonTransposedMatrix(const VMatrix& viewProjMatrix, VPlane* pPlanesOut, bool bD3DClippingRange)
{
	Vector4D vPlane; // 1405
	float flLen2; // 1438
	{
		uint i; // 1445
		{
			float flScale; // 1450
			Vector::operator*=(
					float fl);  // 1451
		}
	}
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1405
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1405
	Vector4D::Vector4D(); // 441
	Vector4DAdd(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 442
	Vector4D::operator+(
			const Vector4D& v);  // 1405
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 1406
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1409
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1409
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 436
	Vector4D::operator-(); // 1409
	Vector4D::Vector4D(); // 441
	Vector4D::operator+(
			const Vector4D& v);  // 1409
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 1410
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1413
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1413
	Vector4D::Vector4D(); // 441
	Vector4DAdd(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 442
	Vector4D::operator+(
			const Vector4D& v);  // 1413
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 1414
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1417
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1417
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 436
	Vector4D::operator-(); // 1417
	Vector4D::Vector4D(); // 441
	Vector4D::operator+(
			const Vector4D& v);  // 1417
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 1418
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1424
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1429
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1429
	Vector4D::Vector4D(); // 441
	Vector4DAdd(const Vector4D& a,
			const Vector4D& b,
			Vector4D& c);  // 442
	Vector4D::operator+(
			const Vector4D& v);  // 1429
	Vector4D::operator=(
			const Vector4D& vOther);  // 1429
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 1432
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1435
	Vector4D::Vector4D(
		const float* pFloat);  // 892
	MatrixGetRowAsVector4D(const VMatrix& src,
				MatrixAxisType_t nRow);  // 1435
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 436
	Vector4D::operator-(); // 1435
	Vector4D::Vector4D(); // 441
	Vector4D::operator+(
			const Vector4D& v);  // 1435
	Vector::operator=(
			const Vector& vOther);  // 106
	VPlane::Init(
		const Vector& vNormal,
		vec_t dist);  // 1436
	Vector::operator=(
			const Vector& vOther);  // 124
	VPlane::operator=(
			const VPlane& thePlane);  // 1442
} /* size: 0, variables: 2, inline expansions: 62 (0 bytes) */

// <05A6E5D6> mathlib/vmatrix.cpp:1468
// variables: 6
// function calls: 22
void MatrixBuildAxisAngle(VMatrix& Matrix, const Vector& Axis, float fAngle)
{
	float fRadians; // 1470
	float fAxisXSquared; // 1471
	float fAxisYSquared; // 1472
	float fAxisZSquared; // 1473
	float fSin; // 1474
	float fCos; // 1475
	SinCos(float radians,
		float* sine,
		float* cosine);  // 1479
	Vector::operator[](
			int i);  // 1481
	Vector::operator[](
			int i);  // 1482
	Vector::operator[](
			int i);  // 1483
	Vector::operator[](
			int i);  // 1487
	Vector::operator[](
			int i);  // 1487
	Vector::operator[](
			int i);  // 1487
	Vector::operator[](
			int i);  // 1488
	Vector::operator[](
			int i);  // 1488
	Vector::operator[](
			int i);  // 1488
	Vector::operator[](
			int i);  // 1492
	Vector::operator[](
			int i);  // 1492
	Vector::operator[](
			int i);  // 1492
	Vector::operator[](
			int i);  // 1494
	Vector::operator[](
			int i);  // 1494
	Vector::operator[](
			int i);  // 1494
	Vector::operator[](
			int i);  // 1498
	Vector::operator[](
			int i);  // 1498
	Vector::operator[](
			int i);  // 1498
	Vector::operator[](
			int i);  // 1499
	Vector::operator[](
			int i);  // 1499
	Vector::operator[](
			int i);  // 1499
} /* size: 0, variables: 6, inline expansions: 22 (0 bytes) */

