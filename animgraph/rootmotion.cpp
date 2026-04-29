
//
// animgraph/rootmotion.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <00F9F9B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:9
void GetBaseMap(void)
{
} /* size: 0 */

// <00F682F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:9
// variables: 2
datamap_t* DataMapInit<CRootMotion>(CRootMotion *)
{
	const char* pDataMapInit_className; // 9
	typedescription_t dataDesc; // 9
} /* size: 114, variables: 2 */

// <00F6758E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:22
// variables: 23
// function calls: 53
void CalcMotionForCycle(const CTransform& localToWorld, const ISequence* pSequence, float flCycleUnclamped, float flPrevCycleUnclamped)
{
	CRootMotion motion; // 24
	Vector vVelocityMS; // 28
	Vector vVelocityMS2; // 31
	Vector::Vector(); // 25
	CRotation::CRotation(); // 25
	CMotionTransform::CMotionTransform(); // 21
	Vector::Vector(); // 21
	CRootMotion::CRootMotion(); // 24
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 25
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
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
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 430
	CTransform::RotateVector(
			const VectorAligned& v0);  // 84
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
			const Vector& rhs);  // 84
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 84
	CTransform::RotateVector(
			const Vector& v0);  // 32
	Vector::operator=(
			const Vector& vOther);  // 32
} /* size: 0, variables: 3, inline expansions: 29 (675 bytes) */

// <00F6746A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:39
// function calls: 3
void CRootMotion::CRootMotion(const CMotionTransform& delta, const Vector& vVelocityWS)
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
			const CMotionTransform  &);  // 40
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F67436> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:39
void CRootMotion::CRootMotion(const CMotionTransform& delta, const Vector& vVelocityWS)
{
} /* size: 0 */

// <00F67287> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:48
// function calls: 7
void CRootMotion::IsValid()
{
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 50
} /* size: 72, inline expansions: 7 (42 bytes) */

// <00F66BA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:81
// variable: 1
// function calls: 12
void CRootMotion::operator+(const CRootMotion& rhs)
{
	CRootMotion result; // 85
	Vector::Vector(); // 25
	CRotation::CRotation(); // 25
	CMotionTransform::CMotionTransform(); // 21
	Vector::Vector(); // 21
	CRootMotion::CRootMotion(); // 85
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 86
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 87
	Vector::operator=(
			const Vector& vOther);  // 87
} /* size: 0, variables: 1, inline expansions: 12 (262 bytes) */

// <00F6683E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:94
// variable: 1
// function calls: 12
void CRootMotion::operator-(const CRootMotion& rhs)
{
	CRootMotion result; // 97
	Vector::Vector(); // 25
	CRotation::CRotation(); // 25
	CMotionTransform::CMotionTransform(); // 21
	Vector::Vector(); // 21
	CRootMotion::CRootMotion(); // 97
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 99
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 100
	Vector::operator=(
			const Vector& vOther);  // 100
} /* size: 0, variables: 1, inline expansions: 12 (260 bytes) */

// <00F661B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:107
// variable: 1
// function calls: 24
void CRootMotion::operator*=(const CRootMotion& rhs)
{
	CRootMotion tmp; // 110
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 110
	CRotation::CRotation(); // 25
	Vector::Vector(); // 25
	CMotionTransform::CMotionTransform(); // 21
	Vector::Vector(); // 21
	CRootMotion::CRootMotion(); // 59
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 60
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 61
	CRootMotion::operator*(
			const CRootMotion& rhs);  // 111
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 111
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 112
} /* size: 0, variables: 1, inline expansions: 24 (1075 bytes) */

// <00F65FE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:117
// function calls: 5
void CRootMotion::operator*=(float flScalar)
{
	Vector::operator*=(
			float fl);  // 121
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 122
} /* size: 0, inline expansions: 5 (268 bytes) */

// <00F65E17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:127
// function calls: 5
void CRootMotion::operator+=(const CRootMotion& rhs)
{
	Vector::operator+=(
			const Vector& v);  // 131
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 132
} /* size: 0, inline expansions: 5 (284 bytes) */

// <00F65C48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:137
// function calls: 5
void CRootMotion::operator-=(const CRootMotion& rhs)
{
	Vector::operator-=(
			const Vector& v);  // 141
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 142
} /* size: 0, inline expansions: 5 (284 bytes) */

// <00F9FD21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:147
// function call: 1
void CRootMotion::Invert()
{
	Vector::operator*=(
			float fl);  // 151
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00F65C2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:147
void CRootMotion::Invert()
{
} /* size: 0 */

// <00F65A67> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:156
// variable: 1
// function calls: 6
void CRootMotion::Inverse()
{
	CRootMotion tmp; // 159
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 159
	Vector::operator*=(
			float fl);  // 151
	CRootMotion::Invert(); // 160
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

