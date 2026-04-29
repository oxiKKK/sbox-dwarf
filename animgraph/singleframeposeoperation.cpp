
//
// animgraph/singleframeposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <0173FF13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.cpp:11
// variable: 1
// function calls: 22
void MakeOpDescription(CPoseRecipe& pPoseRecipe, StaticPoseCacheHandle handle)
{
	CPackedHandle<CSingleFramePoseOperation::OpSettings> hParam; // 13
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSingleFramePoseOperation::OpSettings>::CPackedHandle(); // 13
	StaticPoseCacheHandle::StaticPoseCacheHandle(
				const StaticPoseCacheHandle& rhs);  // 140
	StaticPoseCacheHandle::StaticPoseCacheHandle(
				const StaticPoseCacheHandle& rhs);  // 16
	OpSettings::OpSettings(
			StaticPoseCacheHandle handle);  // 140
	CPackedDataT<false>::AddItem<CSingleFramePoseOperation::OpSettings, StaticPoseCacheHandle&>(
										CPackedHandle<CSingleFramePoseOperation::OpSettings>* handleOut);  // 14
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::NumAllocated(); // 1196
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Element(
		int i);  // 1201
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 47
	PoseOpDesc::PoseOpDesc(
			const PoseOpDesc  &);  // 1520
	CopyConstruct<CPoseRecipe::PoseOpDesc>(PoseOpDesc* pMemory,
						const PoseOpDesc& src);  // 1201
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Base(); // 112
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Base(); // 368
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::AddToTail(
			const PoseOpDesc& src);  // 89
	PackedHandleID::PackedHandleID(); // 47
	PoseOpDesc::PoseOpDesc(); // 85
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 27
	CPackedHandle<CSingleFramePoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CSingleFramePoseOperation, CSingleFramePoseOperation::OpSettings>(
											const CPackedHandle<CSingleFramePoseOperation::OpSettings>& hParam);  // 16
} /* size: 0, variables: 1, inline expansions: 22 (364 bytes) */

// <0173F903> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.cpp:21
// variables: 2
// function calls: 25
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	CAnimPosePtr pPose; // 23
	{
		const CCachedPose& cachedPose; // 28
		StaticPoseCacheHandle::StaticPoseCacheHandle(
					const StaticPoseCacheHandle& rhs);  // 28
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 30
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CTransform, short int>, CTransform, short int>::Count(); // 35
		CCachedPose::GetTransformCount(); // 30
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 30
		CUtlLeanVectorBase<CTransform, short int>::Base(); // 37
		CCachedPose::GetTransforms(); // 30
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 32
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 33
		CUtlMemory<float, int>::Base(); // 113
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 41
		CCachedPose::GetMorphWeights(); // 33
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 33
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 33
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 37
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 37
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CTransform, short int>, CTransform, short int>::Count(); // 35
		CCachedPose::GetTransformCount(); // 37
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 39
	}
	StaticPoseCacheHandle::IsValid(); // 25
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 44
} /* size: 298, variables: 1, inline expansions: 2 (4 bytes) */

