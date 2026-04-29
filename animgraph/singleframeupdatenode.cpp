
//
// animgraph/singleframeupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <0194C383> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:9
// variable: 1
// function calls: 12
void CSingleFrameUpdateNode::CSingleFrameUpdateNode(CAnimGraphInitContext& initContext, StaticPoseCacheHandle hPoseCacheHandle, int tagSpanCount)
{
	CRelativeOffset<TagSpan_t>::CRelativeOffset(); // 84
	CRelativeArray<TagSpan_t>::CRelativeArray(); // 11
	StaticPoseCacheHandle::StaticPoseCacheHandle(
				const StaticPoseCacheHandle& rhs);  // 11
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<unsigned char>::CPackedHandle(); // 11
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<unsigned char, unsigned char const&>(
							CPackedHandle<unsigned char>* handleOut);  // 13
	{
		uint32 i; // 160
		TagSpan_t::TagSpan_t(); // 162
	}
	CPackedDataT<false>::AddArray<TagSpan_t>(
				uint32 count,
				CPackedHandle<TagSpan_t>* handleOut);  // 16
	{
	}
	CRelativeOffset<TagSpan_t>::SetOffset(
			const TagSpan_t* targetPtr);  // 20
	CRelativeOffset<TagSpan_t>::operator=(
			const TagSpan_t* targetPtr);  // 115
	CRelativeArray<TagSpan_t>::SetArray(
		const TagSpan_t* targetArray,
		int32 count);  // 16
} /* size: 0, inline expansions: 11 (291 bytes) */

// <0194C346> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:9
void CSingleFrameUpdateNode::CSingleFrameUpdateNode(CAnimGraphInitContext& initContext, StaticPoseCacheHandle hPoseCacheHandle, int tagSpanCount)
{
} /* size: 0 */

// <0194C2BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:20
void CSingleFrameUpdateNode::Update(CAnimGraphUpdateContext& context)
{
} /* size: 30 */

// <0194C0D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:26
// function calls: 6
void CSingleFrameUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	StaticPoseCacheHandle::StaticPoseCacheHandle(
				const StaticPoseCacheHandle& rhs);  // 28
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 28
} /* size: 128, inline expansions: 6 (75 bytes) */

// <0194BF45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:32
// function calls: 5
void CSingleFrameUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 77
	CAnimGraphInstanceData::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<unsigned char>(
					const CPackedHandle<unsigned char>& handle);  // 34
} /* size: 86, inline expansions: 5 (68 bytes) */

