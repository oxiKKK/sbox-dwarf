
//
// ik/iksolver_dogleg3bone.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <01B3B10E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolver_dogleg3bone.cpp:78
// variables: 66
// function calls: 577
bool IKSolve_DogLeg3Bone(const CIKChainData_t* pIKChain, const IKSolverSettings_t& solverSettings, matrix3x4a_t& mJ1, matrix3x4a_t& mJ2, matrix3x4a_t& mJ3, matrix3x4a_t& mJ4, const CTransform& xWsTargetFoot, IAnimationDebugRenderer* pDebugRenderer)
{
	int nDebugStep; // 89
	matrix3x4a_t mV1; // 102
	const float  flJ3To4Length; // 170
	bool bPositiveXPointsToChild; // 173
	const Vector  vWsFallbackHinge; // 176
	const Vector  vNewJ3; // 200
	matrix3x4a_t mJ1Temp; // 204
	matrix3x4a_t mJ2Temp; // 205
	matrix3x4a_t mJ3Temp; // 206
	matrix3x4a_t mJ4Temp; // 207
	matrix3x4a_t& mJ1Solve; // 209
	matrix3x4a_t& mJ2Solve; // 210
	matrix3x4a_t& mJ3Solve; // 211
	matrix3x4a_t& mJ4Solve; // 212
	matrix3x4a_t mWsTarget; // 214
	{
		float flBoneLength; // 105
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 105
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 105
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 105
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 105
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 107
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 105
		Vector::Normalized(); // 107
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 105
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 105
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 105
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 107
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 107
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 107
		matrix3x4_t::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition);  // 107
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 107
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 107
		ConVar::GetInt(); // 109
		CUtlString::CUtlString(
				const char* pString);  // 111
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 111
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
				const Vector& rhs);  // 111
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 111
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
				const Vector& rhs);  // 111
		CUtlString::~CUtlString(); // 111
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 112
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
				const Vector& rhs);  // 112
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
				const Vector& rhs);  // 112
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 112
	}
	{
		Vector vWsPlaneNormal; // 119
		const Vector  vJ1; // 131
		const Vector  vJ2; // 132
		const Vector  vJ3; // 133
		const Vector  vJ4; // 134
		const Vector  vV1; // 135
		const Vector  vJOnPlane2; // 137
		const Vector  vJOnPlane3; // 138
		const Vector  vJOnPlane4; // 139
		const Vector  vVOnPlane1; // 140
		const Vector  vJ1ToJ4; // 144
		const Vector  vJ1ToTarget; // 145
		const Quaternion  qRotateToTarget; // 147
		bool bPositiveXPointsToChild; // 162
		Vector::Normalized(); // 122
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 122
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 122
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 122
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 122
		Vector::Normalized(); // 122
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 122
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 122
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 122
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 124
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 124
		matrix3x4a_t::RotateVector(
				const VectorAligned& v0);  // 124
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 124
		Vector::operator=(
				const Vector& vOther);  // 124
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 131
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 132
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 137
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 133
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 137
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 134
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 135
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 138
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 138
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 139
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 139
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 140
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 140
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 144
		{
			fltx4 retVal; // 1478
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1479
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1481
		}
		SetWSIMD<>(fltx4 a,
				float f);  // 71
		VectorAligned::operator fltx4(); // 71
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 145
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
				const Vector& rhs);  // 145
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 145
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 929
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 929
		Quaternion::Quaternion(); // 928
		Vector::LengthSqr(); // 930
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 932
		Vector::operator=(
				const Vector& vOther);  // 932
		DotProduct(const Vector& a,
				const Vector& b);  // 933
		BuildRotateBetweenVectorsQuaternion(const Vector& vFrom,
							const Vector& vTo);  // 147
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 145
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 149
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
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
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 149
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 151
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 149
		matrix3x4_t::SetOrigin(
				const Vector& p);  // 149
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
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
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 150
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 150
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 150
		matrix3x4_t::SetOrigin(
				const Vector& p);  // 150
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
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
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 151
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 151
		matrix3x4_t::SetOrigin(
				const Vector& p);  // 151
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 152
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
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1487
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 152
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 152
		matrix3x4_t::SetOrigin(
				const Vector& p);  // 152
		ConVar::GetInt(); // 154
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 128
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 128
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 128
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 128
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 128
		Vector::Normalized(); // 128
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 128
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 128
		Vector::operator=(
				const Vector& vOther);  // 128
		CUtlString::CUtlString(
				const char* pString);  // 156
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
				const Vector& rhs);  // 156
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 156
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
				const Vector& rhs);  // 156
		CUtlString::~CUtlString(); // 156
		CUtlString::CUtlString(
				const char* pString);  // 157
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
				const Vector& rhs);  // 157
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
				const Vector& rhs);  // 157
		CUtlString::~CUtlString(); // 157
		CUtlString::CUtlString(
				const char* pString);  // 158
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
				const Vector& rhs);  // 158
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
				const Vector& rhs);  // 158
		CUtlString::~CUtlString(); // 158
		CUtlString::CUtlString(
				const char* pString);  // 159
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
				const Vector& rhs);  // 159
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 159
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
				const Vector& rhs);  // 159
		CUtlString::~CUtlString(); // 159
	}
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 102
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 170
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 170
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 170
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 170
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 176
	Vector::Normalized(); // 176
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 176
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 176
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 176
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 176
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 176
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 176
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 181
	ConVar::GetInt(); // 185
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 181
	ConVar::GetInt(); // 189
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 200
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 200
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 200
	Vector::Normalized(); // 200
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 200
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 200
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 200
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 209
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 214
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 215
	ConVar::GetInt(); // 224
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 233
	matrix3x4_t::InitFromQuaternion(
				const Quaternion& orientation,
				const Vector& vPosition);  // 233
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 233
	ConVar::GetInt(); // 236
	ConVar::GetInt(); // 94
	CUtlString::CUtlString(
			const char* pString);  // 191
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 191
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 191
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
			const Vector& rhs);  // 191
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 191
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
			const Vector& rhs);  // 191
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 191
	CUtlString::~CUtlString(); // 191
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 192
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
			const Vector& rhs);  // 192
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 192
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
			const Vector& rhs);  // 192
	CUtlString::CUtlString(
			const char* pString);  // 193
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 193
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
			const Vector& rhs);  // 193
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
			const Vector& rhs);  // 193
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 193
	CUtlString::~CUtlString(); // 193
	CUtlString::CUtlString(
			const char* pString);  // 194
	VectorAligned::operator fltx4(); // 71
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 194
	CUtlString::~CUtlString(); // 194
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 238
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
			const Vector& rhs);  // 238
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 238
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
			const Vector& rhs);  // 238
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 239
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
			const Vector& rhs);  // 239
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 239
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
			const Vector& rhs);  // 239
	CUtlString::CUtlString(
			const char* pString);  // 240
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 240
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
			const Vector& rhs);  // 240
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 240
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
			const Vector& rhs);  // 240
	CUtlString::~CUtlString(); // 240
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 96
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
			const Vector& rhs);  // 96
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 96
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
			const Vector& rhs);  // 96
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 97
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
			const Vector& rhs);  // 97
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 97
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
			const Vector& rhs);  // 97
	CUtlString::CUtlString(
			const char* pString);  // 98
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 98
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
			const Vector& rhs);  // 98
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 98
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
			const Vector& rhs);  // 98
	CUtlString::~CUtlString(); // 98
} /* size: 8011, variables: 15, inline expansions: 187 (3368 bytes) */

// <01B38DEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolver_dogleg3bone.cpp:261
// variables: 21
// function calls: 137
void IKSolve_DogLeg3Bone(const CIKChainData_t* pIKChain, const IKSolverSettings_t& solverSettings, const CTransform& xWsTargetFoot, IPoseAccessor* pPoseAccessor, IAnimationDebugRenderer* pDebugRenderer)
{
	const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& jointVector; // 263
	const CIKChainJointData_t& j1Description; // 270
	const CIKChainJointData_t& j2Description; // 271
	const CIKChainJointData_t& j3Description; // 272
	const CIKChainJointData_t& j4Description; // 273
	matrix3x4a_t mJ1; // 275
	matrix3x4a_t mJ2; // 276
	matrix3x4a_t mJ3; // 277
	matrix3x4a_t mJ4; // 278
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 265
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 270
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 275
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 271
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 272
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 273
	CIKChainJointData_t::GetBoneIndex(); // 275
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 275
	CIKChainJointData_t::GetBoneIndex(); // 276
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 276
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 276
	CIKChainJointData_t::GetBoneIndex(); // 277
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 277
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 277
	CIKChainJointData_t::GetBoneIndex(); // 278
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 278
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 278
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
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
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 282
	CIKChainJointData_t::GetBoneIndex(); // 282
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
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
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 283
	CIKChainJointData_t::GetBoneIndex(); // 283
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
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
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 284
	CIKChainJointData_t::GetBoneIndex(); // 284
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
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
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 285
	CIKChainJointData_t::GetBoneIndex(); // 285
} /* size: 2448, variables: 9, inline expansions: 133 (5315 bytes) */

