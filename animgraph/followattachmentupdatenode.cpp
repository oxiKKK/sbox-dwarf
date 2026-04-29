
//
// animgraph/followattachmentupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <0182B71C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:9
// function calls: 9
void CFollowAttachmentUpdateNode::CFollowAttachmentUpdateNode(CAnimGraphInitContext& initContext)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<unsigned char>::CPackedHandle(); // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<FollowAttachmentSettings_t>::CPackedHandle(); // 10
	FollowAttachmentSettings_t::FollowAttachmentSettings_t(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<false>::AddItem<FollowAttachmentSettings_t>(
						CPackedHandle<FollowAttachmentSettings_t>* handleOut);  // 12
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<unsigned char, unsigned char const&>(
							CPackedHandle<unsigned char>* handleOut);  // 13
} /* size: 166, inline expansions: 9 (130 bytes) */

// <0182B6F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:9
void CFollowAttachmentUpdateNode::CFollowAttachmentUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0182B6D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:17
void CFollowAttachmentUpdateNode::Update(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0182B3DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:23
// variable: 1
// function calls: 10
void CFollowAttachmentUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hChildPose; // 25
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 26
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 28
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FollowAttachmentSettings_t>::CPackedHandle(
			const CPackedHandle<FollowAttachmentSettings_t>  &);  // 32
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 32
} /* size: 174, variables: 1, inline expansions: 10 (95 bytes) */

// <0182B249> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:36
// function calls: 5
void CFollowAttachmentUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 38
} /* size: 86, inline expansions: 5 (68 bytes) */

