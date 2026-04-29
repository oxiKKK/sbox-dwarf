
//
// animgraph/bonemaskupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <0184AF24> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:10
// function calls: 8
void CBoneMaskUpdateNode::CBoneMaskUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 10
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 10
	CBinaryUpdateNode::CBinaryUpdateNode(
				CAnimGraphInitContext& initContext);  // 11
	CAnimParamHandle::CAnimParamHandle(); // 11
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<unsigned char>::CPackedHandle(); // 11
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<unsigned char, unsigned char const&>(
							CPackedHandle<unsigned char>* handleOut);  // 13
} /* size: 132, inline expansions: 8 (95 bytes) */

// <0184AEFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:10
void CBoneMaskUpdateNode::CBoneMaskUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0184AEDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:17
void CBoneMaskUpdateNode::Update(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0184AB21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:23
// variables: 3
// function calls: 11
void CBoneMaskUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hPose1; // 25
	PoseHandle hPose2; // 26
	float flBlendValue; // 40
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 28
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 30
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 34
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 36
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 46
} /* size: 281, variables: 3, inline expansions: 11 (97 bytes) */

// <0184A7CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:50
// variables: 2
// function calls: 11
void CBoneMaskUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
	CAnimUpdateNodeBase::GetLastUpdateID(
			const CAnimGraphUpdateContext& context);  // 52
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 53
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <0184A1CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:57
// variables: 2
// function calls: 19
void CBoneMaskUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	CMotionTransform childMotion1; // 59
	CMotionTransform childMotion2; // 60
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 59
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 60
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 62
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 64
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 64
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 67
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 69
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 69
	Lerp<CMotionTransform>(float flPercent,
				const CMotionTransform& A,
				const CMotionTransform& B);  // 72
} /* size: 0, variables: 2, inline expansions: 19 (664 bytes) */

// <01849BB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:76
// variables: 2
// function calls: 19
void CBoneMaskUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	CMotionTransform childMotion1; // 78
	CMotionTransform childMotion2; // 79
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 78
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 79
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 81
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 83
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 83
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 86
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 88
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 88
	Lerp<CMotionTransform>(float flPercent,
				const CMotionTransform& A,
				const CMotionTransform& B);  // 91
} /* size: 0, variables: 2, inline expansions: 19 (680 bytes) */

// <01849511> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:95
// variables: 2
// function calls: 23
void CBoneMaskUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion childMotion1; // 97
	CRootMotion childMotion2; // 98
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
			const CRootMotion  &);  // 97
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
			const CRootMotion  &);  // 98
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 100
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 105
	Lerp<CRootMotion>(float flPercent,
				const CRootMotion& A,
				const CRootMotion& B);  // 110
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 102
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 102
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 107
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 107
} /* size: 0, variables: 2, inline expansions: 23 (1161 bytes) */

// <01847E55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:114
// variables: 6
// function calls: 87
void CBoneMaskUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	{
		CStrideStatus childFootPoseInfo; // 129
		{
			int iFoot; // 133
			{
				CFootMotionStatus& footStatus; // 135
				CFootMotionStatus& footStatus2; // 136
				Lerp<CMotionTransform>(float flPercent,
							const CMotionTransform& A,
							const CMotionTransform& B);  // 138
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 138
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 140
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 141
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 143
				Vector::operator=(
						const Vector& vOther);  // 143
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 144
				Vector::operator=(
						const Vector& vOther);  // 144
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 262
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 262
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 262
				Lerp<Vector>(float flPercent,
						const Vector& A,
						const Vector& B);  // 145
				Vector::operator=(
						const Vector& vOther);  // 145
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 147
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 148
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
						const Vector& rhs);  // 150
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
						const Vector& rhs);  // 150
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 150
				Vector::operator=(
						const Vector& vOther);  // 150
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 152
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 157
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 158
			}
		}
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 131
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 118
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 120
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 127
} /* size: 0, inline expansions: 4 (14 bytes) */

