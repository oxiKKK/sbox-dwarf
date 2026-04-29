
//
// animgraph/blendposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <0178468F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.cpp:11
// variables: 6
// function calls: 32
void MakeOpDescription(CPoseRecipe& pPoseRecipe, const PoseHandle* pPoses, const float* weights, int numPoses)
{
	const char   __FUNCTION__; // 45138
	CPackedHandle<CBlendPoseOperation::OpSettings> hParam; // 15
	OpSettings* pParam; // 18
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 13
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CBlendPoseOperation::OpSettings>::CPackedHandle(); // 15
	CRelativeOffset<unsigned char>::CRelativeOffset(); // 84
	CRelativeArray<unsigned char>::CRelativeArray(); // 15
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 15
	OpSettings::OpSettings(); // 123
	CPackedDataT<false>::AddItem<CBlendPoseOperation::OpSettings>(
						CPackedHandle<CBlendPoseOperation::OpSettings>* handleOut);  // 18
	{
		uint32 i; // 206
	}
	CPackedDataT<false>::AddArray<unsigned char>(
				const unsigned char* pSrcArray,
				uint32 count,
				CPackedHandle<unsigned char>* handleOut);  // 20
	{
	}
	CRelativeOffset<unsigned char>::SetOffset(
			const unsigned char* targetPtr);  // 20
	CRelativeOffset<unsigned char>::operator=(
			const unsigned char* targetPtr);  // 115
	CRelativeArray<unsigned char>::SetArray(
		const unsigned char* targetArray,
		int32 count);  // 20
	{
		uint32 i; // 206
	}
	CPackedDataT<false>::AddArray<float>(
			const float* pSrcArray,
			uint32 count,
			CPackedHandle<float>* handleOut);  // 21
	{
	}
	CRelativeOffset<float>::SetOffset(
			const float* targetPtr);  // 20
	CRelativeOffset<float>::operator=(
			const float* targetPtr);  // 115
	CRelativeArray<float>::SetArray(
		const float* targetArray,
		int32 count);  // 21
	PackedHandleID::PackedHandleID(); // 47
	PoseOpDesc::PoseOpDesc(); // 85
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 27
	CPackedHandle<CBlendPoseOperation::OpSettings>::GetID(); // 87
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
	{
	}
	CPoseRecipe::AddPoseOp<CBlendPoseOperation, CBlendPoseOperation::OpSettings>(
									const CPackedHandle<CBlendPoseOperation::OpSettings>& hParam);  // 23
} /* size: 0, variables: 3, inline expansions: 32 (815 bytes) */

// <01783B25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.cpp:28
// variables: 10
// function calls: 42
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	const char   __FUNCTION__; // 44910
	const int  poseCount; // 32
	CAnimPosePtr poses; // 35
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 30
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 36
	}
	{
		int i; // 40
		{
			CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
			CEnduringClassMemoryPool<CAnimPose>::Free(
				CAnimPose* pObject);  // 699
		}
		ThreadInterlockedDecrement(volatile int32* p); // 690
		CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
		CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 703
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
		Release<CAnimPose>(CAnimPose* pObj); // 496
		CSmartPtr<CAnimPose, CRefCountAccessor>::Reset(
			ESmartPtrNoAddRef,
			CAnimPose* pObj);  // 419
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 42
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 42
		{
		}
		CRelativeOffset<unsigned char>::IsValid(); // 30
		CRelativeOffset<unsigned char>::Get(); // 90
		CRelativeArray<unsigned char>::operator[](
				int index);  // 42
	}
	CRelativeOffset<unsigned char>::IsValid(); // 101
	CRelativeArray<unsigned char>::IsValid(); // 30
	CRelativeArray<unsigned char>::Count(); // 32
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(); // 35
	{
	}
	CRelativeOffset<unsigned char>::IsValid(); // 30
	CRelativeOffset<unsigned char>::Get(); // 90
	CRelativeArray<unsigned char>::operator[](
			int index);  // 38
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
			CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 38
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 38
	CRelativeArray<unsigned char>::Count(); // 45
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 107
	CRelativeArray<float>::Get(); // 45
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	ThreadInterlockedDecrement(volatile int32* p); // 690
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 703
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 344
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 35
} /* size: 0, variables: 3, inline expansions: 27 (1016 bytes) */

// <0178328E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.cpp:50
// variables: 12
// function calls: 31
void BlendPoses(CPoseUpdateContext& context, CAnimPosePtr* poses, float* weights, int poseCount)
{
	float tmpWeights; // 52
	const char   __FUNCTION__; // 44964
	CAnimPosePtr pResultPose; // 75
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
	{
		int i; // 56
	}
	{
		int i; // 63
		{
			float scale; // 67
			{
				int j; // 68
			}
		}
	}
	{
		int i; // 78
		{
			CAnimPosePtr pSrcPose; // 80
			ThreadInterlockedIncrement(volatile int32* p); // 683
			CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
			AddRef<CAnimPose>(CAnimPose* pObj); // 366
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					CAnimPose* pObj);  // 406
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 328
			CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 80
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 88
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 88
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
			Release<CAnimPose>(CAnimPose* pObj); // 344
			CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 89
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 84
			CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 84
		}
	}
	ThreadInterlockedIncrement(volatile int32* p); // 683
	CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
	AddRef<CAnimPose>(CAnimPose* pObj); // 366
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
	Release<CAnimPose>(CAnimPose* pObj); // 370
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			CAnimPose* pObj);  // 406
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 75
} /* size: 0, variables: 3, inline expansions: 12 (731 bytes) */

