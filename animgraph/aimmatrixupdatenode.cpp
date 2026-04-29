
//
// animgraph/aimmatrixupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <01860C58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:9
// function calls: 20
void CAimMatrixUpdateNode::CAimMatrixUpdateNode(CAnimGraphInitContext& initContext)
{
	CAnimParamHandle::CAnimParamHandle(); // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<AimMatrixOpFixedSettings_t>::CPackedHandle(); // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<AimMatrixOpInstanceSettings_t>::CPackedHandle(); // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAimMatrixInstanceData>::CPackedHandle(); // 10
	HSequence::HSequence(); // 10
	StaticPoseCacheHandle::StaticPoseCacheHandle(); // 29
	AimMatrixOpFixedSettings_t::AimMatrixOpFixedSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<AimMatrixOpFixedSettings_t>(
						CPackedHandle<AimMatrixOpFixedSettings_t>* handleOut);  // 12
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 44
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 44
	AimMatrixOpInstanceSettings_t::AimMatrixOpInstanceSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<AimMatrixOpInstanceSettings_t>(
						CPackedHandle<AimMatrixOpInstanceSettings_t>* handleOut);  // 13
	CAimMatrixInstanceData::CAimMatrixInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CAimMatrixInstanceData>(
					CPackedHandle<CAimMatrixInstanceData>* handleOut);  // 14
} /* size: 398, inline expansions: 20 (586 bytes) */

// <01860C33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:9
void CAimMatrixUpdateNode::CAimMatrixUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <01860A34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:18
// function calls: 6
void CAimMatrixUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 22
	Vector::operator=(
			const Vector& vOther);  // 22
} /* size: 159, inline expansions: 6 (87 bytes) */

// <01860614> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:27
// variables: 3
// function calls: 13
void CAimMatrixUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	CAimMatrixInstanceData* pInstData; // 29
	PoseHandle hChildPose; // 31
	{
		int i; // 44
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 29
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 32
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 34
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<AimMatrixOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<AimMatrixOpFixedSettings_t>  &);  // 39
	HSequence::operator==(
			const HSequence& other);  // 42
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<AimMatrixOpInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<AimMatrixOpInstanceSettings_t>  &);  // 39
} /* size: 228, variables: 2, inline expansions: 13 (115 bytes) */

// <018602BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:52
// variables: 2
// function calls: 11
void CAimMatrixUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 54
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
			const CAnimGraphUpdateContext& context);  // 54
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 55
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <0185F967> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixupdatenode.cpp:59
// function calls: 36
void CAimMatrixUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimUpdateNodeBase::IsReset(
		const CAnimGraphUpdateContext& context);  // 63
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
			const CAnimGraphUpdateContext& context);  // 64
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 54
	CAnimUpdateNodeBase::Reset(
		CAnimGraphUpdateContext& context,
		float flCycle);  // 68
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 70
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 72
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CAimMatrixInstanceData>(
						const CPackedHandle<CAimMatrixInstanceData>& handle);  // 76
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 79
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 80
	Vector::operator=(
			const Vector& vOther);  // 80
} /* size: 409, inline expansions: 36 (637 bytes) */

