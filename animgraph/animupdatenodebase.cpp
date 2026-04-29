
//
// animgraph/animupdatenodebase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 20
//

// <0185F7F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:8
// function calls: 5
void CAnimUpdateNodeBase::CAnimUpdateNodeBase(CAnimGraphInitContext& initContext)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<NodeInfo_t>::CPackedHandle(); // 8
	NodeInfo_t::NodeInfo_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<NodeInfo_t>(
				CPackedHandle<NodeInfo_t>* handleOut);  // 10
} /* size: 92, inline expansions: 5 (77 bytes) */

// <0185F7CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:8
void CAnimUpdateNodeBase::CAnimUpdateNodeBase(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0185F2DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:14
// variables: 4
// function calls: 15
void CAnimUpdateNodeBase::GetRootMotion(CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	CRootMotion motion; // 20
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 17
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 25
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 78
	CAnimUpdateNodeBase::IsPostUpdatePending(
				const CAnimGraphUpdateContext& context);  // 17
	Vector::Vector(); // 25
	CRotation::CRotation(); // 25
	CMotionTransform::CMotionTransform(); // 21
	Vector::Vector(); // 21
	CRootMotion::CRootMotion(); // 20
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 24
} /* size: 0, variables: 2, inline expansions: 15 (358 bytes) */

// <0185F045> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:35
// variables: 2
// function calls: 6
void CAnimUpdateNodeBase::GetFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footMotionList)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 78
	CAnimUpdateNodeBase::IsPostUpdatePending(
				const CAnimGraphUpdateContext& context);  // 38
} /* size: 0, variables: 1, inline expansions: 6 (96 bytes) */

// <01866627> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:52
// function calls: 5
void CAnimUpdateNodeBase::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 54
} /* size: 112, inline expansions: 5 (72 bytes) */

// <0185F014> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:52
void CAnimUpdateNodeBase::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
} /* size: 0 */

// <018695BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:58
// function calls: 5
void CAnimUpdateNodeBase::IsReset(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
} /* size: 113, inline expansions: 5 (76 bytes) */

// <0185EFEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:58
void CAnimUpdateNodeBase::IsReset(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <01869751> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:64
// function calls: 5
void CAnimUpdateNodeBase::GetLastUpdateID(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
} /* size: 85, inline expansions: 5 (68 bytes) */

// <0185EFCA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:64
void CAnimUpdateNodeBase::GetLastUpdateID(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0185EE1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:70
// function calls: 5
void CAnimUpdateNodeBase::SetLastUpdateID(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 72
} /* size: 0, inline expansions: 5 (0 bytes) */

// <018698DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:76
// function calls: 5
void CAnimUpdateNodeBase::IsPostUpdatePending(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 78
} /* size: 90, inline expansions: 5 (68 bytes) */

// <0185EDF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:76
void CAnimUpdateNodeBase::IsPostUpdatePending(const CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0185EC69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:82
// function calls: 5
void CAnimUpdateNodeBase::SetPostUpdatePending(CAnimGraphUpdateContext& context, bool bPending)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 84
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0185EAD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:88
// function calls: 5
void CAnimUpdateNodeBase::IsWaning(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 90
} /* size: 92, inline expansions: 5 (68 bytes) */

// <0185E945> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:94
// function calls: 5
void CAnimUpdateNodeBase::SetWaning(CAnimGraphUpdateContext& context, bool bIsWaning)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 96
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0185E7B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:100
// function calls: 5
void CAnimUpdateNodeBase::GetNodeInfo(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 102
} /* size: 83, inline expansions: 5 (68 bytes) */

// <0185E682> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:106
// function calls: 4
void CAnimUpdateNodeBase::CalculateRootMotion(CAnimGraphUpdateContext& context)
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
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 108
} /* size: 0, inline expansions: 4 (247 bytes) */

// <01866B13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:112
// function calls: 7
void CAnimUpdateNodeBase::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footMotionList)
{
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
			const CAnimGraphUpdateContext& context);  // 115
	{
	}
	CAnimUpdateNodeBase::CalculateFootMotion(
				CAnimGraphUpdateContext& context,
				const CMotionTransform& newLocalToWorld,
				CStrideStatus& footMotionList);  // 112
} /* size: 0, inline expansions: 7 (135 bytes) */

// <0185E622> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatenodebase.cpp:112
// variables: 2
void CAnimUpdateNodeBase::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footMotionList)
{
	const char   __FUNCTION__; // 32866
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 115
	}
} /* size: 0, variables: 1 */

