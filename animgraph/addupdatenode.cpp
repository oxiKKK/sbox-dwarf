
//
// animgraph/addupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <0186305F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:9
// function calls: 7
void CAddUpdateNode::CAddUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 10
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 10
	CBinaryUpdateNode::CBinaryUpdateNode(
				CAnimGraphInitContext& initContext);  // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<unsigned char>::CPackedHandle(); // 10
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<unsigned char, unsigned char const&>(
							CPackedHandle<unsigned char>* handleOut);  // 12
} /* size: 125, inline expansions: 7 (86 bytes) */

// <0186303A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:9
void CAddUpdateNode::CAddUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <01862FFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:16
void CAddUpdateNode::Update(CAnimGraphUpdateContext& context)
{
} /* size: 5 */

// <01862C7F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:22
// variables: 2
// function calls: 11
void CAddUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hBasePose; // 24
	PoseHandle hAddPose; // 25
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 27
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 29
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 33
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 35
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 39
} /* size: 239, variables: 2, inline expansions: 11 (97 bytes) */

// <0186292A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:43
// variables: 2
// function calls: 11
void CAddUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 45
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
			const CAnimGraphUpdateContext& context);  // 45
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 46
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <01862653> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:50
// variable: 1
// function calls: 9
void CAddUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	CMotionTransform motion; // 52
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 52
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 53
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 55
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 58
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 60
} /* size: 0, variables: 1, inline expansions: 9 (176 bytes) */

// <01862363> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:67
// variable: 1
// function calls: 9
void CAddUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	CMotionTransform motion; // 69
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 69
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 70
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 72
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 75
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 77
} /* size: 0, variables: 1, inline expansions: 9 (189 bytes) */

// <01861F33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:84
// variable: 1
// function calls: 14
void CAddUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 86
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
			const CRootMotion  &);  // 86
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 88
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 93
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 90
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 90
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 95
} /* size: 0, variables: 1, inline expansions: 14 (510 bytes) */

// <01861262> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:102
// variables: 6
// function calls: 39
void CAddUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	{
		CStrideStatus childFootPoseInfo; // 117
		{
			int i; // 121
			{
				CFootMotionStatus& footStatus; // 123
				CFootMotionStatus& footStatus2; // 124
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 127
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 129
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 130
				Vector::operator+=(
						const Vector& v);  // 132
				Vector::operator+=(
						const Vector& v);  // 133
				Vector::operator+=(
						const Vector& v);  // 134
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
						const Vector& rhs);  // 139
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
						const Vector& rhs);  // 139
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 139
				Vector::operator=(
						const Vector& vOther);  // 139
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 146
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 147
			}
		}
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 119
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 106
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 108
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 115
} /* size: 0, inline expansions: 4 (14 bytes) */

