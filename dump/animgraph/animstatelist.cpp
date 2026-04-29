
//
// animgraph/animstatelist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <00F72507> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatelist.cpp:8
// function calls: 7
void CAnimStateList::CAnimStateList()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 8
	CUtlVectorBase<CAnimState::ResetDbgInfo(); // 530
	CUtlMemory<CAnimState::ValidateGrowSize(); // 475
	CUtlMemory<CAnimState::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimState::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimState::CUtlVector(); // 8
} /* size: 58, inline expansions: 7 (94 bytes) */

// <00F724EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatelist.cpp:8
void CAnimStateList::CAnimStateList()
{
} /* size: 0 */

// <00F71EAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatelist.cpp:14
// variables: 2
// function calls: 28
void CAnimStateList::CAnimStateList(const CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& stateList)
{
	{
		int i; // 17
	}
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	CUtlVectorBase<CAnimState::ResetDbgInfo(); // 530
	CUtlMemory<CAnimState::ValidateGrowSize(); // 475
	CUtlMemory<CAnimState::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimState::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimState::CUtlVector(); // 14
	CUtlVectorBase<IAnimState::Count(); // 16
	CUtlMemory<CAnimState::IsExternallyAllocated(); // 888
	CUtlMemory<CAnimState::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CAnimState::ResetDbgInfo(); // 1024
	CUtlVectorBase<CAnimState::EnsureCapacity(
			int num);  // 16
	{
		int i; // 17
		CUtlVectorBase<IAnimState::Count(); // 17
		CUtlMemory<CAnimState::Base(); // 112
		CUtlVectorBase<CAnimState::Base(); // 368
		CUtlVectorBase<CAnimState::ResetDbgInfo(); // 824
		CUtlMemory<CAnimState::IsGrowable(); // 823
		CUtlMemory<CAnimState::IsExternallyAllocated(); // 859
		CUtlMemory<CAnimState::IsExternallyAllocated(); // 861
		CUtlMemory<CAnimState::Grow(
			int num);  // 806
		CUtlVectorBase<CAnimState::GrowMemory(
				int num);  // 1249
		Construct<CAnimState*, CAnimState*>(CAnimState** pMemory); // 1252
		CUtlMemory<CAnimState::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimState::Element(
			int i);  // 1252
		CUtlMemory<CAnimState::NumAllocated(); // 1247
		CUtlVectorBase<CAnimState::AddToTail(
				CAnimState *& src);  // 19
		CUtlMemory<IAnimState::operator[](
				int i);  // 595
		CUtlVectorBase<IAnimState::operator[](
				int i);  // 19
	}
} /* size: 512, inline expansions: 12 (268 bytes) */

// <00F71E7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatelist.cpp:14
// variable: 1
void CAnimStateList::CAnimStateList(const CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& stateList)
{
	{
		int i; // 17
	}
} /* size: 0 */

// <00F71E1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatelist.cpp:24
// function call: 1
void CAnimStateList::Count()
{
	CUtlVectorBase<CAnimState::Count(); // 26
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00F71CAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatelist.cpp:30
// variables: 3
// function calls: 3
void CAnimStateList::Get(int index)
{
	const char   __FUNCTION__; // 37408
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 32
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
	CUtlVectorBase<CAnimState::Count(); // 33
	CUtlMemory<CAnimState::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimState::operator[](
			int i);  // 34
} /* size: 0, variables: 1, inline expansions: 3 (6 bytes) */

// <00F71B3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatelist.cpp:38
// variables: 3
// function calls: 3
void CAnimStateList::Get(int index)
{
	const char   __FUNCTION__; // 37408
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
	CUtlVectorBase<CAnimState::Count(); // 41
	CUtlMemory<CAnimState::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimState::operator[](
			int i);  // 42
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

