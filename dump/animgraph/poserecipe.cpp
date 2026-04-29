
//
// animgraph/poserecipe.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//

// <0158D0CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:12
// function calls: 8
void CPoseRecipe::CPoseRecipe()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 13
	CPackedDataT<false>::CPackedDataT(
			uint32 reserveSize);  // 13
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::ValidateGrowSize(); // 475
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::CUtlVector(); // 13
} /* size: 68, inline expansions: 8 (108 bytes) */

// <0158D0B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:12
void CPoseRecipe::CPoseRecipe()
{
} /* size: 0 */

// <015D620B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:18
// function call: 1
void CPoseRecipe::GetOpCount()
{
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 20
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0158D099> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:18
void CPoseRecipe::GetOpCount()
{
} /* size: 0 */

// <0158CEAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:24
// variables: 3
// function calls: 4
void CPoseRecipe::EvaluateOp(int opIndex, CPoseUpdateContext& context)
{
	const char   __FUNCTION__; // 35274
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 27
	}
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 27
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::operator[](
			int i);  // 29
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 29
} /* size: 0, variables: 1, inline expansions: 4 (28 bytes) */

// <015D6264> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:33
// function calls: 4
void CPoseRecipe::AddReference(PoseHandle hPose)
{
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 35
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::operator[](
			int i);  // 37
	CPoseRecipe::AddReference(
			PoseHandle hPose);  // 33
} /* size: 36, inline expansions: 4 (40 bytes) */

// <0158CE86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:33
void CPoseRecipe::AddReference(PoseHandle hPose)
{
} /* size: 0 */

// <015D6386> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:42
// function calls: 3
void CPoseRecipe::GetRefCount(int opIndex)
{
	{
	}
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 45
	{
	}
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::operator[](
			int i);  // 46
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0158CDEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:42
// variables: 3
void CPoseRecipe::GetRefCount(int opIndex)
{
	const char   __FUNCTION__; // 35301
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 44
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 45
	}
} /* size: 0, variables: 1 */

// <015D6493> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:50
void CPoseRecipe::GetParameterData()
{
} /* size: 9 */

// <015D64BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:62
// function call: 1
void CPoseRecipe::Reset()
{
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::RemoveAll(); // 65
} /* size: 47, inline expansions: 1 (7 bytes) */

// <0158CDA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:62
void CPoseRecipe::Reset()
{
} /* size: 0 */

// <0158C5A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poserecipe.cpp:72
// variable: 1
// function calls: 36
void CPoseRecipe::CopyFrom(const CPoseRecipePtr& pOther)
{
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 74
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 573
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::NumAllocated(); // 782
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::IsGrowable(); // 823
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Element(
			int i);  // 1453
		PackedHandleID::PackedHandleID(); // 47
		PoseOpDesc::PoseOpDesc(); // 1479
		Construct<CPoseRecipe::PoseOpDesc>(PoseOpDesc* pMemory); // 1453
	}
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::SetCount(
		int count);  // 573
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Base(); // 112
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Base(); // 102
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::begin(); // 574
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Base(); // 113
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Base(); // 105
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 105
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::end(); // 574
	PackedHandleID::operator=(
			const PackedHandleID& rhs);  // 47
	PoseOpDesc::operator=(
			const PoseOpDesc  &);  // 209
	UtlTraitsCopyRange<CPoseRecipe::PoseOpDesc>(const PoseOpDesc* pFrom,
							const PoseOpDesc* pFromEnd,
							PoseOpDesc* pTo);  // 200
	UtlTraitsCopyRange<CPoseRecipe::PoseOpDesc>(const PoseOpDesc* pFrom,
							const PoseOpDesc* pFromEnd,
							PoseOpDesc* pTo);  // 574
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::operator=(
			const CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >& other);  // 565
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::operator=(
			const CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >& other);  // 452
	CUtlVector<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::operator=(
			const CUtlVector<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >& src);  // 74
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 75
	CPackedDataT<false>::operator=(
			const CPackedDataT<false>  &);  // 75
} /* size: 0, inline expansions: 31 (0 bytes) */

