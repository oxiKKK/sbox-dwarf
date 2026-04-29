
//
// vanimlib/canimblendlist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <03257E08> vanimlib/canimblendlist.cpp:21
// variables: 2
void CAnimationBlendList::CAnimationBlendList(const CModel* pModel, HSequence hSequence, const float* flPoseParameterArray)
{
	{
		const ISequence* pSeqDesc; // 32
	}
	{
		const ISequence* pSeqDesc; // 32
	}
} /* size: 0 */

// <03257DBA> vanimlib/canimblendlist.cpp:21
// variable: 1
void CAnimationBlendList::CAnimationBlendList(const CModel* pModel, HSequence hSequence, const float* flPoseParameterArray)
{
	{
		const ISequence* pSeqDesc; // 32
	}
} /* size: 0 */

// <03257D35> vanimlib/canimblendlist.cpp:37
void CAnimationBlendList::CAnimationBlendList(const ISequence* pSeqDesc, const float* flPoseParameterArray)
{
} /* size: 82 */

// <03257CA6> vanimlib/canimblendlist.cpp:44
void CAnimationBlendList::flScale(int nIndex)
{
} /* size: 19 */

// <032572DC> vanimlib/canimblendlist.cpp:49
// variables: 4
// function calls: 37
void CAnimationBlendList::AddSequence(HSequence hSequence, float flWeight)
{
	const char   __FUNCTION__; // 44535
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
	{
		const ISequence* pSeq; // 54
		AnimRefVector_t animref; // 55
		CUtlMemory<int, int>::CUtlMemory(
				int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<int, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
						int* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<16, int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, int>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<int, 16, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<int, 16>::CUtlVectorFixedGrowable(
					int growSize);  // 55
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 577
		CUtlMemory<int, int>::ConvertToExternalMemory(
					int* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
					int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
					int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<16, int, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<int, 16, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<int, 16, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<int, 16>::~CUtlVectorFixedGrowable(); // 87
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::operator[](
				int i);  // 60
		IBaseSequence::NumFrames(
				const float* poseParameters);  // 65
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::operator[](
				int i);  // 69
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16, int> >::operator[](
				int i);  // 70
		CAnimDesc::NumFrames(); // 70
	}
} /* size: 0, variables: 1 */

// <03257281> vanimlib/canimblendlist.cpp:91
void CAnimationBlendList::pAnimdesc(int nIndex)
{
} /* size: 19 */

// <03257226> vanimlib/canimblendlist.cpp:96
void CAnimationBlendList::pSeqdesc(int nIndex)
{
} /* size: 0 */

