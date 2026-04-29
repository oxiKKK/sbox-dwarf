
//
// animgraph/jiggleboneupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <017F2940> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:9
// function calls: 13
void CJiggleBoneUpdateNode::CJiggleBoneUpdateNode(CAnimGraphInitContext& initContext, int nBoneCount)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<JiggleNodeInstanceData_t>::CPackedHandle(); // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<JiggleBoneSettingsList_t>::CPackedHandle(); // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<JiggleBoneStatusList_t>::CPackedHandle(); // 10
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<false>::AddItem<JiggleBoneSettingsList_t, CPackedDataT<false>&, int&>(
									CPackedHandle<JiggleBoneSettingsList_t>* handleOut);  // 12
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<JiggleBoneStatusList_t, CPackedDataT<true>&, int&>(
									CPackedHandle<JiggleBoneStatusList_t>* handleOut);  // 13
	JiggleNodeInstanceData_t::JiggleNodeInstanceData_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<JiggleNodeInstanceData_t>(
						CPackedHandle<JiggleNodeInstanceData_t>* handleOut);  // 14
} /* size: 271, inline expansions: 13 (176 bytes) */

// <017F290F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:9
void CJiggleBoneUpdateNode::CJiggleBoneUpdateNode(CAnimGraphInitContext& initContext, int nBoneCount)
{
} /* size: 0 */

// <017F2594> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:18
// variable: 1
// function calls: 12
void CJiggleBoneUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hChildPose; // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 21
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 23
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<JiggleBoneSettingsList_t>::CPackedHandle(
			const CPackedHandle<JiggleBoneSettingsList_t>  &);  // 27
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<JiggleBoneStatusList_t>::CPackedHandle(
			const CPackedHandle<JiggleBoneStatusList_t>  &);  // 27
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 27
} /* size: 185, variables: 1, inline expansions: 12 (107 bytes) */

// <017F2400> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:31
// function calls: 5
void CJiggleBoneUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 33
} /* size: 87, inline expansions: 5 (68 bytes) */

// <017F1E2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneupdatenode.cpp:37
// variables: 2
// function calls: 21
void CJiggleBoneUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	JiggleNodeInstanceData_t* pInstData; // 39
	{
		JiggleBoneStatusList_t* pPoseOpInstanceData; // 51
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<JiggleBoneStatusList_t>(
							const CPackedHandle<JiggleBoneStatusList_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<JiggleBoneStatusList_t>(
							const CPackedHandle<JiggleBoneStatusList_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<JiggleBoneStatusList_t>(
							const CPackedHandle<JiggleBoneStatusList_t>& handle);  // 51
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<JiggleNodeInstanceData_t>(
						const CPackedHandle<JiggleNodeInstanceData_t>& handle);  // 39
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimUpdateNodeBase::IsReset(
		const CAnimGraphUpdateContext& context);  // 43
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
			const CAnimGraphUpdateContext& context);  // 44
} /* size: 270, variables: 1, inline expansions: 16 (326 bytes) */

