
//
// animgraph/skeletalinputupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <01949228> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:9
// function calls: 6
void CSkeletalInputUpdateNode::CSkeletalInputUpdateNode(CAnimGraphInitContext& initContext)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<SkeletalInputOpFixedSettings_t>::CPackedHandle(); // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<unsigned char>::CPackedHandle(); // 10
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<unsigned char, unsigned char const&>(
							CPackedHandle<unsigned char>* handleOut);  // 12
} /* size: 86, inline expansions: 6 (44 bytes) */

// <01949203> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:9
void CSkeletalInputUpdateNode::CSkeletalInputUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <019491C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:15
void CSkeletalInputUpdateNode::Update(CAnimGraphUpdateContext& context)
{
} /* size: 5 */

// <01948FB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:21
// function calls: 7
void CSkeletalInputUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SkeletalInputOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<SkeletalInputOpFixedSettings_t>  &);  // 23
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 23
} /* size: 128, inline expansions: 7 (81 bytes) */

// <01948E24> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:27
// function calls: 5
void CSkeletalInputUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 29
} /* size: 86, inline expansions: 5 (68 bytes) */

