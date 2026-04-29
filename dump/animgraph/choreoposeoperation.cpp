
//
// animgraph/choreoposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <01781FFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.cpp:13
// variables: 2
// function calls: 24
void MakeOpDescription(CPoseRecipe& pPoseRecipe, const CChoreoInstanceData* pInstData, PoseHandle hChildPose)
{
	CPackedHandle<CChoreoPoseOperation::OpSettings> hParam; // 15
	CChoreoInstanceData* pPackedChoreoData; // 18
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CChoreoPoseOperation::OpSettings>::CPackedHandle(); // 15
	CPackedDataT<false>::AddItem<CChoreoInstanceData>(
					CPackedHandle<CChoreoInstanceData>* handleOut);  // 18
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 19
	CRelativeOffset<const CChoreoInstanceData>::SetOffset(
			const CChoreoInstanceData* targetPtr);  // 17
	CRelativeOffset<const CChoreoInstanceData>::CRelativeOffset(
			const CChoreoInstanceData* targetPtr);  // 22
	OpSettings::OpSettings(
			const CChoreoInstanceData* pInstData,
			PoseHandle hChildPose);  // 140
	CPackedDataT<false>::AddItem<CChoreoPoseOperation::OpSettings, CChoreoInstanceData*&, unsigned char&>(
											CPackedHandle<CChoreoPoseOperation::OpSettings>* handleOut);  // 22
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
	CPackedHandle<CChoreoPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CChoreoPoseOperation, CChoreoPoseOperation::OpSettings>(
										const CPackedHandle<CChoreoPoseOperation::OpSettings>& hParam);  // 24
} /* size: 0, variables: 2, inline expansions: 24 (427 bytes) */

// <01780B74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.cpp:30
// variables: 24
// function calls: 63
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	const CChoreoInstanceData* pInstData; // 34
	CAnimPosePtr pPose; // 36
	const int  nOverlayCount; // 38
	int orderedLayers; // 42
	int nActiveLayers; // 43
	const char   __FUNCTION__; // 44910
	{
		int i; // 45
	}
	{
		int i; // 50
		{
			const CAnimationLayer* pLayer; // 52
			int nOrder; // 58
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 62
			}
		}
	}
	{
		IBoneSetup setup; // 71
		int nAnimStateCount; // 73
		const CAnimContainer* pContainer; // 78
		CAnimationResult& animResult; // 82
		CUtlVectorFixedGrowableCompat<int, 256> boneIndices; // 87
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
		}
		{
			int i; // 88
			int nBoneCount; // 88
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 88
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
			CAnimPose::GetBoneCount(); // 88
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 90
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 91
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlMemory<int, int>::IsGrowable(); // 823
			CUtlMemory<int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 94
		}
		{
			const float* pMorphWeights; // 102
			void* pDstChannelData; // 103
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 102
			CAnimContainer::GetMorphChannel(); // 103
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 106
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 106
			CAnimContainer::GetMorphChannel(); // 107
		}
		{
			int layerIndex; // 114
			{
				const CAnimationLayer* pLayer; // 116
				CAnimationDecodeOp decodeOp; // 122
				CAnimationDecodeOp::CAnimationDecodeOp(); // 122
			}
		}
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 74
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 74
		CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 83
		CUtlMemory<int, int>::CUtlMemory(
				int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 535
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 538
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int* pMemory,
				int allocationCount,
				int initialCount,
				bool bGrowable);  // 420
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
				int* pMemory,
				int allocationCount,
				int initialCount,
				bool bGrowable);  // 495
		AlignedByteArrayExplicit_t<256, int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<256, int>::AlignedByteArray_t(); // 495
		AlignedByteArrayExplicit_t<256, int, 4>::Base(); // 497
		CUtlVectorFixedGrowableCompat<int, 256>::CUtlVectorFixedGrowableCompat(
						int growSize);  // 87
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 98
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 100
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 131
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 131
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 131
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 133
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 489
		CUtlVectorFixedGrowableCompat<int, 256>::~CUtlVectorFixedGrowableCompat(); // 140
		CAnimContainer::GetMorphChannel(); // 135
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 137
		CAnimContainer::GetMorphChannel(); // 137
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 137
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 137
	}
	CRelativeOffset<const CChoreoInstanceData>::IsValid(); // 30
	CRelativeOffset<const CChoreoInstanceData>::Get(); // 34
} /* size: 0, variables: 6, inline expansions: 2 (21 bytes) */

