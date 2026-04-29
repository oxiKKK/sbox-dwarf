
//
// animgraph/fetchcycleposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <0177C502> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.cpp:13
// variable: 1
// function calls: 20
void MakeOpDescription(CPoseRecipe& pPoseRecipe, HSequence hSequence, float flCycle)
{
	CPackedHandle<CFetchCyclePoseOperation::OpSettings> hParam; // 15
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CFetchCyclePoseOperation::OpSettings>::CPackedHandle(); // 15
	OpSettings::OpSettings(
			HSequence hSequence,
			float flCycle);  // 140
	CPackedDataT<false>::AddItem<CFetchCyclePoseOperation::OpSettings, HSequence&, float&>(
										CPackedHandle<CFetchCyclePoseOperation::OpSettings>* handleOut);  // 17
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
	CPackedHandle<CFetchCyclePoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CFetchCyclePoseOperation, CFetchCyclePoseOperation::OpSettings>(
											const CPackedHandle<CFetchCyclePoseOperation::OpSettings>& hParam);  // 19
} /* size: 0, variables: 1, inline expansions: 20 (376 bytes) */

// <01798BC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.cpp:25
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
} /* size: 0 */

// <0177BD13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.cpp:33
// variables: 5
// function calls: 22
void FetchPose(CPoseUpdateContext& context, HSequence hSequence, float flCycle)
{
	CAnimPosePtr pPose; // 35
	{
		IBoneSetup& setup; // 42
		{
			const CAnimationResult& animResult; // 61
			{
				const CAnimContainer* pContainer; // 64
				CAnimContainer::GetMorphChannel(); // 66
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 68
				CAnimContainer::GetMorphChannel(); // 68
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 68
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 68
			}
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 62
		}
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 57
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 57
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 57
	}
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(); // 35
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 703
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 496
	CSmartPtr<CAnimPose, CRefCountAccessor>::Reset(
		ESmartPtrNoAddRef,
		CAnimPose* pObj);  // 419
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 37
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 75
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 37
} /* size: 516, variables: 1, inline expansions: 11 (462 bytes) */

