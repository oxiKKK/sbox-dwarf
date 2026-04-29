
//
// animgraph/lookatupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <0196EC1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:8
// function calls: 23
void CLookAtUpdateNode::CLookAtUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 9
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<LookAtOpFixedSettings_t>::CPackedHandle(); // 9
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<LookAtOpInstanceSettings_t>::CPackedHandle(); // 9
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CLookAtInstanceData>::CPackedHandle(); // 9
	CAnimParamHandle::CAnimParamHandle(); // 9
	CAnimParamHandle::CAnimParamHandle(); // 9
	CRelativeOffset<LookAtBone_t>::CRelativeOffset(); // 84
	CRelativeArray<LookAtBone_t>::CRelativeArray(); // 24
	LookAtOpFixedSettings_t::LookAtOpFixedSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<LookAtOpFixedSettings_t>(
					CPackedHandle<LookAtOpFixedSettings_t>* handleOut);  // 11
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 40
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 40
	LookAtOpInstanceSettings_t::LookAtOpInstanceSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<LookAtOpInstanceSettings_t>(
						CPackedHandle<LookAtOpInstanceSettings_t>* handleOut);  // 12
	CLookAtInstanceData::CLookAtInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CLookAtInstanceData>(
					CPackedHandle<CLookAtInstanceData>* handleOut);  // 13
} /* size: 342, inline expansions: 23 (450 bytes) */

// <0196EBFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:8
void CLookAtUpdateNode::CLookAtUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0196E9FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:17
// function calls: 6
void CLookAtUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 21
	Vector::operator=(
			const Vector& vOther);  // 21
} /* size: 159, inline expansions: 6 (87 bytes) */

// <0196E556> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:26
// variables: 3
// function calls: 15
void CLookAtUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	CLookAtInstanceData* pInstData; // 28
	PoseHandle hChildPose; // 30
	float flWeight; // 37
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 28
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 31
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 33
	CAnimParamHandle::IsValid(); // 38
	{
	}
	CAnimVariant::GetValue<float>(); // 194
	CAnimVariant::GetValue<float>(); // 40
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<LookAtOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<LookAtOpFixedSettings_t>  &);  // 44
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<LookAtOpInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<LookAtOpInstanceSettings_t>  &);  // 44
} /* size: 333, variables: 3, inline expansions: 15 (239 bytes) */

// <0196E346> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:48
// variables: 2
// function calls: 5
void CLookAtUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 54608
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 51
} /* size: 0, variables: 1, inline expansions: 5 (76 bytes) */

// <0196DD9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatupdatenode.cpp:55
// function calls: 19
void CLookAtUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 66
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 68
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CLookAtInstanceData>(
					const CPackedHandle<CLookAtInstanceData>& handle);  // 72
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 75
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<LookAtOpInstanceSettings_t>(
						const CPackedHandle<LookAtOpInstanceSettings_t>& handle);  // 76
	Vector::operator=(
			const Vector& vOther);  // 76
} /* size: 323, inline expansions: 19 (251 bytes) */

