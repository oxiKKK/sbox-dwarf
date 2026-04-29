
//
// ik/iksolve_fabrik.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//	classes: 2
//

// <01B4E661> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:31
int FlagFromBit(int nBit)
{
} /* size: 0 */

// <01B4E623> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:36
// variable: 1
void ik_debug_fabrik_iterations_common(const CCommand& args, ConVar& conVar)
{
	ConVarFlags_t nFlag; // 44
} /* size: 0, variables: 1 */

// <01B4E529> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:55
// function calls: 2
void cc_ik_debug_fabrik_forwards_iterations_toggle(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 38
	ik_debug_fabrik_iterations_common(const CCommand& args,
						ConVar& conVar);  // 57
} /* size: 44, inline expansions: 2 (37 bytes) */

// <01B4E42F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:60
// function calls: 2
void cc_ik_debug_fabrik_backwards_iterations_toggle(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 38
	ik_debug_fabrik_iterations_common(const CCommand& args,
						ConVar& conVar);  // 62
} /* size: 44, inline expansions: 2 (37 bytes) */

// <01AE8F21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:75
// variables: 10
// function calls: 67
void RealignJointRotation<CSpaceAgnosticBoneAccessor>(const CIKChainData_t* pIKChain, int nCurrentJointIndex, const Vector& vWsLookAt, const Quaternion& qWsOriginalRotation, CSpaceAgnosticBoneAccessor& boneAccessor)
{
	const CIKChainJointData_t& currentJoint; // 77
	CTransform mWsCurrentBone; // 79
	Vector vWsCurrent; // 81
	float flScale; // 82
	Quaternion qWsCurrent; // 83
	const float  flFlipX; // 85
	const Vector  vWsLookAtDirection; // 86
	const Quaternion  qOldToNewJointSpace; // 89
	const Vector  vWsUp; // 92
	CTransform xformWsCurrentBone; // 96
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 77
	CIKChainJointData_t::GetBoneIndex(); // 79
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 81
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 81
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 83
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 86
	Vector::Normalized(); // 86
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 86
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 929
	Quaternion::Quaternion(); // 928
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 929
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
						const Vector& vTo);  // 89
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
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
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
			const Vector& v);  // 92
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 96
	CIKChainJointData_t::GetBoneIndex(); // 97
} /* size: 1042, variables: 10, inline expansions: 67 (1783 bytes) */

// <01AE4CBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:75
// variables: 10
// function calls: 70
void RealignJointRotation<IK::CAnimPoseWrapper>(const CIKChainData_t* pIKChain, int nCurrentJointIndex, const Vector& vWsLookAt, const Quaternion& qWsOriginalRotation, CAnimPoseWrapper& boneAccessor)
{
	const CIKChainJointData_t& currentJoint; // 77
	CTransform mWsCurrentBone; // 79
	Vector vWsCurrent; // 81
	float flScale; // 82
	Quaternion qWsCurrent; // 83
	const float  flFlipX; // 85
	const Vector  vWsLookAtDirection; // 86
	const Quaternion  qOldToNewJointSpace; // 89
	const Vector  vWsUp; // 92
	CTransform xformWsCurrentBone; // 96
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 77
	CIKChainJointData_t::GetBoneIndex(); // 79
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 79
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 81
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 81
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 83
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 86
	Vector::Normalized(); // 86
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 86
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 929
	Quaternion::Quaternion(); // 928
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 929
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
						const Vector& vTo);  // 89
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
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
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
			const Vector& v);  // 92
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 96
	CIKChainJointData_t::GetBoneIndex(); // 97
} /* size: 1141, variables: 10, inline expansions: 70 (1870 bytes) */

// <01ACEF53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:101
// member function: 1
// member variables: 7
// class size: 56
class CFabrikContext<CSpaceAgnosticBoneAccessor> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:104 */
	void CFabrikContext(CFabrikContext<CSpaceAgnosticBoneAccessor>* , const CIKChainData_t* , const IKSolverSettings_t& , const CUtlVector<float, CUtlMemory<float, int> >& , const matrix3x4a_t& , const matrix3x4a_t& , CSpaceAgnosticBoneAccessor& , IAnimationDebugRenderer* );
	const class CIKChainData_t * m_pIKChain; /* 0 8 */
	const struct IKSolverSettings_t m_Settings; /* 8 8 */
	const class CUtlVector<float, CUtlMemory<float, int> > & m_JointLengthsToParent; /* 16 8 */
	const class matrix3x4a_t & m_mWsEndEffectorTarget; /* 24 8 */
	const class matrix3x4a_t & m_mWsOrigin; /* 32 8 */
	CSpaceAgnosticBoneAccessor & m_BoneAccessor; /* 40 8 */
	IAnimationDebugRenderer * m_pDebugRenderer; /* 48 8 */
};

// <01ACF024> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:101
// member function: 1
// member variables: 7
// class size: 56
class CFabrikContext<IK::CAnimPoseWrapper> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:104 */
	void CFabrikContext(CFabrikContext<IK::CAnimPoseWrapper>* , const CIKChainData_t* , const IKSolverSettings_t& , const CUtlVector<float, CUtlMemory<float, int> >& , const matrix3x4a_t& , const matrix3x4a_t& , CAnimPoseWrapper& , IAnimationDebugRenderer* );
	const class CIKChainData_t * m_pIKChain; /* 0 8 */
	const struct IKSolverSettings_t m_Settings; /* 8 8 */
	const class CUtlVector<float, CUtlMemory<float, int> > & m_JointLengthsToParent; /* 16 8 */
	const class matrix3x4a_t & m_mWsEndEffectorTarget; /* 24 8 */
	const class matrix3x4a_t & m_mWsOrigin; /* 32 8 */
	CAnimPoseWrapper & m_BoneAccessor; /* 40 8 */
	IAnimationDebugRenderer * m_pDebugRenderer; /* 48 8 */
};

// <01AECCC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:104
void CFabrikContext<CSpaceAgnosticBoneAccessor>::CFabrikContext(const CIKChainData_t* pChain, const IKSolverSettings_t& settings, const CUtlVector<float, CUtlMemory<float, int> >& jointLengths, const matrix3x4a_t& mWsEndEffectorTarget, const matrix3x4a_t& mWsOrigin, CSpaceAgnosticBoneAccessor& boneAccessor, IAnimationDebugRenderer* pRenderer)
{
} /* size: 0 */

// <01AECC5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:104
inline void CFabrikContext<CSpaceAgnosticBoneAccessor>::CFabrikContext(const CIKChainData_t* pChain, const IKSolverSettings_t& settings, const CUtlVector<float, CUtlMemory<float, int> >& jointLengths, const matrix3x4a_t& mWsEndEffectorTarget, const matrix3x4a_t& mWsOrigin, CSpaceAgnosticBoneAccessor& boneAccessor, IAnimationDebugRenderer* pRenderer)
{
} /* size: 0 */

// <01AE8EE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:104
void CFabrikContext<IK::CAnimPoseWrapper>::CFabrikContext(const CIKChainData_t* pChain, const IKSolverSettings_t& settings, const CUtlVector<float, CUtlMemory<float, int> >& jointLengths, const matrix3x4a_t& mWsEndEffectorTarget, const matrix3x4a_t& mWsOrigin, CAnimPoseWrapper& boneAccessor, IAnimationDebugRenderer* pRenderer)
{
} /* size: 0 */

// <01AE8E7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:104
inline void CFabrikContext<IK::CAnimPoseWrapper>::CFabrikContext(const CIKChainData_t* pChain, const IKSolverSettings_t& settings, const CUtlVector<float, CUtlMemory<float, int> >& jointLengths, const matrix3x4a_t& mWsEndEffectorTarget, const matrix3x4a_t& mWsOrigin, CAnimPoseWrapper& boneAccessor, IAnimationDebugRenderer* pRenderer)
{
} /* size: 0 */

// <01AEB87B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:135
// variables: 16
// function calls: 94
void IKSolve_FabrikReachForwards<CSpaceAgnosticBoneAccessor>(CFabrikContext<CSpaceAgnosticBoneAccessor>& context)
{
	Vector vNextJointPosition; // 141
	CTransform xformBone; // 142
	{
		int nJointIndex; // 150
		{
			const CIKChainJointData_t* pCurrentJoint; // 152
			CTransform xformCurrentBone; // 154
			const Vector  vCurrentBoneOriginalPosition; // 156
			const Vector  vOffsetDirection; // 157
			const Vector  vNewPosition; // 159
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 152
			CIKChainJointData_t::GetBoneIndex(); // 154
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 156
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 156
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 157
			Vector::Normalized(); // 157
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 159
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
					const Vector& rhs);  // 161
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 159
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 159
			VectorAligned::operator fltx4(); // 68
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
					const fltx4& w);  // 68
			VectorAligned::operator=(
					fltx4 src);  // 68
			CTransform::SetOrigin(
					const VectorAligned& vPos);  // 161
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 163
			CIKChainJointData_t::GetBoneIndex(); // 165
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 167
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
			VectorAligned::operator Vector(); // 167
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 150
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 137
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 141
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 142
	CIKChainJointData_t::GetBoneIndex(); // 142
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
			const Vector& rhs);  // 143
	VectorAligned::operator fltx4(); // 68
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
			const fltx4& w);  // 68
	VectorAligned::operator=(
			fltx4 src);  // 68
	CTransform::SetOrigin(
			const VectorAligned& vPos);  // 143
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 145
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 145
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 147
	CIKChainJointData_t::GetBoneIndex(); // 147
} /* size: 715, variables: 2, inline expansions: 25 (300 bytes) */

// <01AE78D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:135
// variables: 16
// function calls: 100
void IKSolve_FabrikReachForwards<IK::CAnimPoseWrapper>(CFabrikContext<IK::CAnimPoseWrapper>& context)
{
	Vector vNextJointPosition; // 141
	CTransform xformBone; // 142
	{
		int nJointIndex; // 150
		{
			const CIKChainJointData_t* pCurrentJoint; // 152
			CTransform xformCurrentBone; // 154
			const Vector  vCurrentBoneOriginalPosition; // 156
			const Vector  vOffsetDirection; // 157
			const Vector  vNewPosition; // 159
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 1791
			CAnimPoseWrapper::GetWorldSpaceBone(
						int nBoneIndex);  // 154
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 156
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 156
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 157
			Vector::Normalized(); // 157
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 159
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 159
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
					const Vector& rhs);  // 161
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 159
			VectorAligned::operator fltx4(); // 68
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
					const fltx4& w);  // 68
			VectorAligned::operator=(
					fltx4 src);  // 68
			CTransform::SetOrigin(
					const VectorAligned& vPos);  // 161
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 163
			CIKChainJointData_t::GetBoneIndex(); // 165
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 167
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
			VectorAligned::operator Vector(); // 167
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 152
			CIKChainJointData_t::GetBoneIndex(); // 154
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 150
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 137
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 141
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 142
	CIKChainJointData_t::GetBoneIndex(); // 142
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 142
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
			const Vector& rhs);  // 143
	VectorAligned::operator fltx4(); // 68
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
			const fltx4& w);  // 68
	VectorAligned::operator=(
			fltx4 src);  // 68
	CTransform::SetOrigin(
			const VectorAligned& vPos);  // 143
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 145
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 145
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 147
	CIKChainJointData_t::GetBoneIndex(); // 147
} /* size: 956, variables: 2, inline expansions: 28 (413 bytes) */

// <01AE9E9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:173
// variables: 30
// function calls: 121
void IKSolve_FabrikReachBackwards<CSpaceAgnosticBoneAccessor>(CFabrikContext<CSpaceAgnosticBoneAccessor>& context)
{
	Vector vPreviousBonePosition; // 179
	CTransform xformRootBone; // 180
	{
		int nJointIndex; // 185
		{
			const CIKChainJointData_t* pCurrentJoint; // 187
			CTransform xformCurrentBone; // 190
			const Vector  vOffsetDirection; // 191
			const Vector  vNewPosition; // 192
			CIKChainJointData_t::GetBoneIndex(); // 190
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 187
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
			CTransform::GetOrigin(); // 191
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
					const VectorAligned& v);  // 191
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 192
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
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 351
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
					const fltx4& b);  // 359
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 360
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 361
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 362
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
					const fltx4& b);  // 362
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 362
			VectorAligned::NormalizedSafe(
					const VectorAligned& v);  // 351
			VectorAligned::Normalized(); // 191
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 191
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 192
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 192
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
					const fltx4& w);  // 68
			VectorAligned::operator=(
					fltx4 src);  // 68
			CTransform::SetOrigin(
					const VectorAligned& vPos);  // 193
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			CTransform::operator=(
					CTransform &);  // 195
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 198
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 198
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 185
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 175
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 179
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 180
	CIKChainJointData_t::GetBoneIndex(); // 180
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 181
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 183
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
			const Vector& rhs);  // 182
	CIKChainJointData_t::GetBoneIndex(); // 183
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
			const fltx4& w);  // 68
	VectorAligned::operator=(
			fltx4 src);  // 68
	CTransform::SetOrigin(
			const VectorAligned& vPos);  // 182
} /* size: 716, variables: 2, inline expansions: 19 (336 bytes) */

// <01AE5D17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:173
// variables: 30
// function calls: 127
void IKSolve_FabrikReachBackwards<IK::CAnimPoseWrapper>(CFabrikContext<IK::CAnimPoseWrapper>& context)
{
	Vector vPreviousBonePosition; // 179
	CTransform xformRootBone; // 180
	{
		int nJointIndex; // 185
		{
			const CIKChainJointData_t* pCurrentJoint; // 187
			CTransform xformCurrentBone; // 190
			const Vector  vOffsetDirection; // 191
			const Vector  vNewPosition; // 192
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 1791
			CAnimPoseWrapper::GetWorldSpaceBone(
						int nBoneIndex);  // 190
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
			CTransform::GetOrigin(); // 191
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
					const VectorAligned& v);  // 191
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 192
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 351
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
					const fltx4& b);  // 359
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 360
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 361
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 362
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
					const fltx4& b);  // 362
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 362
			VectorAligned::NormalizedSafe(
					const VectorAligned& v);  // 351
			VectorAligned::Normalized(); // 191
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 191
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 192
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 192
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
					const fltx4& w);  // 68
			VectorAligned::operator=(
					fltx4 src);  // 68
			CTransform::SetOrigin(
					const VectorAligned& vPos);  // 193
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			CTransform::operator=(
					CTransform &);  // 195
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 198
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 198
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 187
			CIKChainJointData_t::GetBoneIndex(); // 190
		}
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 185
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 175
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 179
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 180
	CIKChainJointData_t::GetBoneIndex(); // 180
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 1791
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 1791
	CAnimPoseWrapper::GetWorldSpaceBone(
				int nBoneIndex);  // 180
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 181
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
			const Vector& rhs);  // 182
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 183
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
			const fltx4& w);  // 68
	VectorAligned::operator=(
			fltx4 src);  // 68
	CTransform::SetOrigin(
			const VectorAligned& vPos);  // 182
	CIKChainJointData_t::GetBoneIndex(); // 183
} /* size: 1015, variables: 2, inline expansions: 22 (452 bytes) */

// <01B20139> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:203
// variables: 39
bool IKSolve_Fabrik<CSpaceAgnosticBoneAccessor>(int nNumIterations, const CIKChainData_t* pIKChain, const IKSolverSettings_t& solverSettings, CSpaceAgnosticBoneAccessor& boneAccessor, const CTransform& xWsTarget, IAnimationDebugRenderer* pDebugRenderer)
{
	float flTotalJointLength; // 207
	const CTransform  xformRootJoint; // 208
	const Vector  vRootJointPosition; // 209
	CUtlVector<float, CUtlMemory<float, int> > jointLengthsToParent; // 213
	int nNumJoints; // 214
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > originalRotations; // 215
	bool bCanDoOutstretchCase; // 236
	{
		Vector vLastJointPosition; // 223
		{
			int nJointIndex; // 224
			{
				const CTransform  mWsJoint; // 226
				const Vector  vCurrentJointPosition; // 228
			}
		}
	}
	{
		const CIKChainJointData_t& jointData; // 246
		const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& __for_range; // 16486
		const_iterator __for_begin; // 13076
		const_iterator __for_end; // 13076
	}
	{
		const Vector  vDirection; // 261
		float flNextDirectionOffset; // 263
		{
			int nJointIndex; // 265
			{
				const CIKChainJointData_t& jointData; // 267
				CTransform m; // 270
			}
		}
	}
	{
		const matrix3x4a_t  mWsEndEffectorTarget; // 279
		const Vector  vWsEndEffectorTarget; // 280
		const int  nAbsolutelyMaximumIterations; // 282
		const int  nMaxIterations; // 284
		const matrix3x4a_t  mRootMatrix; // 285
		CFabrikContext<CSpaceAgnosticBoneAccessor> context; // 286
		{
			int nIteration; // 288
			{
				const Vector  vWsEndEffector; // 321
				{
					bool bShouldDebugDrawForwards; // 295
				}
				{
					bool bShouldDebugDrawBackwards; // 306
				}
			}
		}
	}
	{
		int nCurrentJointIndex; // 334
		{
			int nNextJointIndex; // 336
			const CIKChainJointData_t& nextJoint; // 337
			CTransform mNextBone; // 339
		}
	}
	{
		int nIndex; // 348
		const float  flFlipX; // 350
		const CTransform& xform; // 352
		const Vector  vWsForward; // 365
		const Vector  vWsDesiredLookAt; // 367
	}
} /* size: 0, variables: 7 */

// <01B1FEA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:203
// variables: 39
bool IKSolve_Fabrik<IK::CAnimPoseWrapper>(int nNumIterations, const CIKChainData_t* pIKChain, const IKSolverSettings_t& solverSettings, CAnimPoseWrapper& boneAccessor, const CTransform& xWsTarget, IAnimationDebugRenderer* pDebugRenderer)
{
	float flTotalJointLength; // 207
	const CTransform  xformRootJoint; // 208
	const Vector  vRootJointPosition; // 209
	CUtlVector<float, CUtlMemory<float, int> > jointLengthsToParent; // 213
	int nNumJoints; // 214
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > originalRotations; // 215
	bool bCanDoOutstretchCase; // 236
	{
		Vector vLastJointPosition; // 223
		{
			int nJointIndex; // 224
			{
				const CTransform  mWsJoint; // 226
				const Vector  vCurrentJointPosition; // 228
			}
		}
	}
	{
		const CIKChainJointData_t& jointData; // 246
		const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& __for_range; // 16486
		const_iterator __for_begin; // 13076
		const_iterator __for_end; // 13076
	}
	{
		const Vector  vDirection; // 261
		float flNextDirectionOffset; // 263
		{
			int nJointIndex; // 265
			{
				const CIKChainJointData_t& jointData; // 267
				CTransform m; // 270
			}
		}
	}
	{
		const matrix3x4a_t  mWsEndEffectorTarget; // 279
		const Vector  vWsEndEffectorTarget; // 280
		const int  nAbsolutelyMaximumIterations; // 282
		const int  nMaxIterations; // 284
		const matrix3x4a_t  mRootMatrix; // 285
		CFabrikContext<IK::CAnimPoseWrapper> context; // 286
		{
			int nIteration; // 288
			{
				const Vector  vWsEndEffector; // 321
				{
					bool bShouldDebugDrawForwards; // 295
				}
				{
					bool bShouldDebugDrawBackwards; // 306
				}
			}
		}
	}
	{
		int nCurrentJointIndex; // 334
		{
			int nNextJointIndex; // 336
			const CIKChainJointData_t& nextJoint; // 337
			CTransform mNextBone; // 339
		}
	}
	{
		int nIndex; // 348
		const float  flFlipX; // 350
		const CTransform& xform; // 352
		const Vector  vWsForward; // 365
		const Vector  vWsDesiredLookAt; // 367
	}
} /* size: 0, variables: 7 */

// <01B64212> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:376
void IKSolve_Fabrik(const CIKChainData_t* pIKChain, const IKSolverSettings_t& solverSettings, const CTransform& xWsTarget, CSpaceAgnosticBoneAccessor& boneAccessor, IAnimationDebugRenderer* pDebugRenderer)
{
} /* size: 0 */

// <01B6907B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolve_fabrik.cpp:381
void IKSolve_Fabrik(const CIKChainData_t* pIKChain, const IKSolverSettings_t& solverSettings, const CTransform& xWsTarget, CAnimPoseWrapper& poseWrapper, IAnimationDebugRenderer* pDebugRenderer)
{
} /* size: 0 */

