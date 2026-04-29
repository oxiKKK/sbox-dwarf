
//
// animgraph/subtractupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <0192EB19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:9
// function calls: 4
void CSubtractUpdateNode::CSubtractUpdateNode(CAnimGraphInitContext& initContext)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<unsigned char>::CPackedHandle(); // 10
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<unsigned char, unsigned char const&>(
							CPackedHandle<unsigned char>* handleOut);  // 12
} /* size: 94, inline expansions: 4 (42 bytes) */

// <0192EAF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:9
void CSubtractUpdateNode::CSubtractUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0192E776> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:16
// variables: 2
// function calls: 11
void CSubtractUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hBasePose; // 18
	PoseHandle hSubPose; // 19
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 21
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 23
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 27
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 29
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 33
} /* size: 239, variables: 2, inline expansions: 11 (97 bytes) */

// <0192E566> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:37
// variables: 2
// function calls: 5
void CSubtractUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 54608
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 39
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 40
} /* size: 0, variables: 1, inline expansions: 5 (76 bytes) */

// <0192E1D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:44
// variable: 1
// function calls: 12
void CSubtractUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	CMotionTransform motion; // 46
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 46
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 48
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 50
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 50
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 53
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 55
} /* size: 0, variables: 1, inline expansions: 12 (316 bytes) */

// <0192DE23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:62
// variable: 1
// function calls: 12
void CSubtractUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	CMotionTransform motion; // 64
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 64
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 66
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 68
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 68
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 71
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 73
} /* size: 0, variables: 1, inline expansions: 12 (329 bytes) */

// <0192DA41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:80
// variable: 1
// function calls: 14
void CSubtractUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 82
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
			const CRootMotion  &);  // 82
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 84
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 89
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 86
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 86
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 91
} /* size: 0, variables: 1, inline expansions: 14 (510 bytes) */

// <0192CD6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:98
// variables: 6
// function calls: 39
void CSubtractUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	{
		CStrideStatus childFootPoseInfo; // 113
		{
			int i; // 117
			{
				CFootMotionStatus& footStatus; // 119
				CFootMotionStatus& footStatus2; // 120
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 122
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 124
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 125
				Vector::operator-=(
						const Vector& v);  // 127
				Vector::operator-=(
						const Vector& v);  // 128
				Vector::operator-=(
						const Vector& v);  // 129
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
						const Vector& rhs);  // 134
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
						const Vector& rhs);  // 134
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 134
				Vector::operator=(
						const Vector& vOther);  // 134
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 141
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 142
			}
		}
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 115
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 102
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 104
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 111
} /* size: 0, inline expansions: 4 (14 bytes) */

