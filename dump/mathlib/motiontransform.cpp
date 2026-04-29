
//
// mathlib/motiontransform.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 33
//

// <059EEB7A> mathlib/motiontransform.cpp:13
// function calls: 2
void CMotionTransform::CMotionTransform(const Vector& vTranslation, float flRotation)
{
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 15
} /* size: 0, inline expansions: 2 (0 bytes) */

// <059EEB46> mathlib/motiontransform.cpp:13
void CMotionTransform::CMotionTransform(const Vector& vTranslation, float flRotation)
{
} /* size: 0 */

// <059EE99D> mathlib/motiontransform.cpp:22
// function calls: 4
void CMotionTransform::CMotionTransform(const Vector& vTranslation, const QAngle& vRotation)
{
	{
		{
		}
		{
		}
	}
	{
		QAngle::operator[](
				RotationAxis axis);  // 26
		CloseEnough(float a,
				float b,
				float epsilon);  // 26
		{
		}
		QAngle::operator[](
				RotationAxis axis);  // 27
		CloseEnough(float a,
				float b,
				float epsilon);  // 27
		{
		}
	}
} /* size: 0 */

// <059EE92A> mathlib/motiontransform.cpp:22
// variables: 3
void CMotionTransform::CMotionTransform(const Vector& vTranslation, const QAngle& vRotation)
{
	const char   __FUNCTION__; // 32664
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 27
	}
} /* size: 0, variables: 1 */

// <02BD5AD8> mathlib/motiontransform.cpp:22
// variables: 3
void CMotionTransform::CMotionTransform(const Vector& vTranslation, const QAngle& vRotation)
{
	const char   __FUNCTION__; // 49211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 27
	}
} /* size: 0, variables: 1 */

// <01A90FC5> mathlib/motiontransform.cpp:22
// variables: 3
void CMotionTransform::CMotionTransform(const Vector& vTranslation, const QAngle& vRotation)
{
	const char   __FUNCTION__; // 45720
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 27
	}
} /* size: 0, variables: 1 */

// <059EE781> mathlib/motiontransform.cpp:33
// function calls: 4
void CMotionTransform::CMotionTransform(const Vector& v, const RadianEuler& vRotation)
{
	{
		{
		}
		{
		}
	}
	{
		RadianEuler::operator[](
				RotationAxis axis);  // 37
		CloseEnough(float a,
				float b,
				float epsilon);  // 37
		{
		}
		RadianEuler::operator[](
				RotationAxis axis);  // 38
		CloseEnough(float a,
				float b,
				float epsilon);  // 38
		{
		}
	}
} /* size: 0 */

// <059EE6FB> mathlib/motiontransform.cpp:33
// variables: 3
void CMotionTransform::CMotionTransform(const Vector& v, const RadianEuler& vRotation)
{
	const char   __FUNCTION__; // 32664
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 37
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
	}
} /* size: 0, variables: 1 */

// <02BD58A9> mathlib/motiontransform.cpp:33
// variables: 3
void CMotionTransform::CMotionTransform(const Vector& v, const RadianEuler& vRotation)
{
	const char   __FUNCTION__; // 49211
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 37
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
	}
} /* size: 0, variables: 1 */

// <01A90D96> mathlib/motiontransform.cpp:33
// variables: 3
void CMotionTransform::CMotionTransform(const Vector& v, const RadianEuler& vRotation)
{
	const char   __FUNCTION__; // 45720
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 37
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
	}
} /* size: 0, variables: 1 */

// <059EE447> mathlib/motiontransform.cpp:44
// variable: 1
// function calls: 11
void CMotionTransform::CMotionTransform(const CTransform& xform)
{
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 45
	CRotation::CRotation(); // 45
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
			const Vector& rhs);  // 47
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 47
} /* size: 0, inline expansions: 10 (0 bytes) */

// <059EE41F> mathlib/motiontransform.cpp:44
void CMotionTransform::CMotionTransform(const CTransform& xform)
{
} /* size: 0 */

// <059EE269> mathlib/motiontransform.cpp:53
// function calls: 7
void CMotionTransform::IsValid()
{
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 55
} /* size: 51, inline expansions: 7 (35 bytes) */

// <02BD4791> mathlib/motiontransform.cpp:88
// variable: 1
// function calls: 14
void CMotionTransform::operator+(const CMotionTransform& rhs)
{
	CMotionTransform result; // 91
	Vector::Vector(); // 25
	CRotation::CRotation(); // 25
	CMotionTransform::CMotionTransform(); // 91
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 178
	{
	}
	CRotation::operator+=(
			const CRotation& rot);  // 178
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 178
	CRotation::operator+(
			const CRotation& rot);  // 93
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 93
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 94
	Vector::operator=(
			const Vector& vOther);  // 94
} /* size: 0, variables: 1, inline expansions: 14 (505 bytes) */

// <059ECDE4> mathlib/motiontransform.cpp:114
// variable: 1
// function calls: 9
void CMotionTransform::operator*=(const CMotionTransform& rhs)
{
	CMotionTransform tmp; // 117
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 117
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 118
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 119
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <059ECBAD> mathlib/motiontransform.cpp:124
// function calls: 7
void CMotionTransform::operator*=(float flScalar)
{
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 161
	{
	}
	CRotation::operator*=(
			angle_t s);  // 127
	Vector::operator*=(
			float fl);  // 128
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 129
} /* size: 0, inline expansions: 7 (0 bytes) */

// <02BD3B73> mathlib/motiontransform.cpp:134
// function calls: 5
void CMotionTransform::operator+=(const CMotionTransform& rhs)
{
	{
	}
	CRotation::operator+=(
			const CRotation& rot);  // 137
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 139
	Vector::operator+=(
			const Vector& v);  // 138
} /* size: 0, inline expansions: 5 (249 bytes) */

// <059EC7DD> mathlib/motiontransform.cpp:144
// function calls: 5
void CMotionTransform::operator-=(const CMotionTransform& rhs)
{
	{
	}
	CRotation::operator-=(
			const CRotation& rot);  // 147
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 149
	Vector::operator-=(
			const Vector& v);  // 148
} /* size: 0, inline expansions: 5 (0 bytes) */

// <059EF8FF> mathlib/motiontransform.cpp:154
// function calls: 4
void CMotionTransform::TransformVector(const Vector& v0)
{
	CRotation::operator float(); // 158
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 158
} /* size: 0, inline expansions: 4 (0 bytes) */

// <059EC7B6> mathlib/motiontransform.cpp:154
void CMotionTransform::TransformVector(const Vector& v0)
{
} /* size: 0 */

// <059EC50A> mathlib/motiontransform.cpp:163
// function calls: 9
void CMotionTransform::TransformVectorByInverse(const Vector& v0)
{
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 203
	CMotionTransform::Inverse(); // 167
	CRotation::operator float(); // 158
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 158
	CMotionTransform::TransformVector(
			const Vector& v0);  // 167
} /* size: 0, inline expansions: 9 (0 bytes) */

// <059EFA30> mathlib/motiontransform.cpp:172
// function call: 1
void CMotionTransform::RotateVector(const Vector& v0)
{
	CRotation::operator float(); // 176
} /* size: 0, inline expansions: 1 (0 bytes) */

// <059EC4E3> mathlib/motiontransform.cpp:172
void CMotionTransform::RotateVector(const Vector& v0)
{
} /* size: 0 */

// <059EC377> mathlib/motiontransform.cpp:181
// function calls: 4
void CMotionTransform::RotateVectorByInverse(const Vector& v0)
{
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 106
	CRotation::operator-(); // 185
	CRotation::operator float(); // 185
} /* size: 0, inline expansions: 4 (0 bytes) */

// <059EC22C> mathlib/motiontransform.cpp:190
// function calls: 5
void CMotionTransform::Invert()
{
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 161
	CRotation::operator*=(
			angle_t s);  // 193
	Vector::operator=(
			const Vector& vOther);  // 194
	Vector::operator*=(
			float fl);  // 195
} /* size: 0, inline expansions: 5 (0 bytes) */

// <059EFAB6> mathlib/motiontransform.cpp:200
// variable: 1
// function calls: 3
void CMotionTransform::Inverse()
{
	CMotionTransform tmp; // 203
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 203
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <059EC204> mathlib/motiontransform.cpp:200
// variable: 1
void CMotionTransform::Inverse()
{
	CMotionTransform tmp; // 203
} /* size: 0, variables: 1 */

// <059EC198> mathlib/motiontransform.cpp:210
void CMotionTransform::Align(const CMotionTransform& referenceTransform)
{
} /* size: 0 */

// <059EC017> mathlib/motiontransform.cpp:218
// function calls: 4
void CMotionTransform::Aligned(const CMotionTransform& referenceTransform)
{
	CRotation::operator float(); // 221
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 15
	CMotionTransform::CMotionTransform(
			const Vector& vTranslation,
			float flRotation);  // 221
} /* size: 0, inline expansions: 4 (0 bytes) */

// <059EBF6A> mathlib/motiontransform.cpp:226
// function calls: 2
void CMotionTransform::GetForward()
{
	CRotation::operator float(); // 176
	CMotionTransform::RotateVector(
			const Vector& v0);  // 229
} /* size: 0, inline expansions: 2 (0 bytes) */

// <059EBB9D> mathlib/motiontransform.cpp:234
// variable: 1
// function calls: 15
void CMotionTransform::ToCTransform()
{
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 237
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 237
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
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::VectorAligned(); // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 237
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 237
} /* size: 83, inline expansions: 14 (116 bytes) */

// <059EBB4E> mathlib/motiontransform.cpp:242
void CMotionTransform::ToQAngle()
{
} /* size: 0 */

// <059EBAFF> mathlib/motiontransform.cpp:250
void CMotionTransform::ToRadianEuler()
{
} /* size: 0 */

