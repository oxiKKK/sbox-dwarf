
//
// animgraph/animnodelist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <00F8B3CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:8
// function calls: 7
void CAnimNodeList::CAnimNodeList()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 8
	CUtlVectorBase<CAnimNodeBase::ResetDbgInfo(); // 530
	CUtlMemory<CAnimNodeBase::ValidateGrowSize(); // 475
	CUtlMemory<CAnimNodeBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimNodeBase::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimNodeBase::CUtlVector(); // 8
} /* size: 58, inline expansions: 7 (94 bytes) */

// <00F8B3B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:8
void CAnimNodeList::CAnimNodeList()
{
} /* size: 0 */

// <00F8AD5B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:14
// variables: 2
// function calls: 28
void CAnimNodeList::CAnimNodeList(const CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >& nodeList)
{
	{
		int i; // 17
	}
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	CUtlVectorBase<CAnimNodeBase::ResetDbgInfo(); // 530
	CUtlMemory<CAnimNodeBase::ValidateGrowSize(); // 475
	CUtlMemory<CAnimNodeBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimNodeBase::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimNodeBase::CUtlVector(); // 14
	CUtlVectorBase<IAnimNode::Count(); // 16
	CUtlMemory<CAnimNodeBase::IsExternallyAllocated(); // 888
	CUtlMemory<CAnimNodeBase::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CAnimNodeBase::ResetDbgInfo(); // 1024
	CUtlVectorBase<CAnimNodeBase::EnsureCapacity(
			int num);  // 16
	{
		int i; // 17
		CUtlVectorBase<IAnimNode::Count(); // 17
		CUtlMemory<CAnimNodeBase::Base(); // 112
		CUtlVectorBase<CAnimNodeBase::Base(); // 368
		CUtlVectorBase<CAnimNodeBase::ResetDbgInfo(); // 824
		CUtlMemory<CAnimNodeBase::IsGrowable(); // 823
		CUtlMemory<CAnimNodeBase::IsExternallyAllocated(); // 859
		CUtlMemory<CAnimNodeBase::IsExternallyAllocated(); // 861
		CUtlMemory<CAnimNodeBase::Grow(
			int num);  // 806
		CUtlVectorBase<CAnimNodeBase::GrowMemory(
				int num);  // 1249
		Construct<CAnimNodeBase*, CAnimNodeBase*>(CAnimNodeBase** pMemory); // 1252
		CUtlMemory<CAnimNodeBase::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimNodeBase::Element(
			int i);  // 1252
		CUtlMemory<CAnimNodeBase::NumAllocated(); // 1247
		CUtlVectorBase<CAnimNodeBase::AddToTail(
				CAnimNodeBase *& src);  // 19
		CUtlMemory<IAnimNode::operator[](
				int i);  // 595
		CUtlVectorBase<IAnimNode::operator[](
				int i);  // 19
	}
} /* size: 478, inline expansions: 12 (255 bytes) */

// <00F8AD2A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:14
// variable: 1
void CAnimNodeList::CAnimNodeList(const CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >& nodeList)
{
	{
		int i; // 17
	}
} /* size: 0 */

// <00F9D2BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:24
// function call: 1
void CAnimNodeList::Count()
{
	CUtlVectorBase<CAnimNodeBase::Count(); // 26
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00F8AD11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:24
void CAnimNodeList::Count()
{
} /* size: 0 */

// <00F9D316> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:30
// function calls: 3
void CAnimNodeList::Get(int index)
{
	{
	}
	CUtlVectorBase<CAnimNodeBase::Count(); // 33
	{
	}
	CUtlMemory<CAnimNodeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CAnimNodeBase::operator[](
			int i);  // 34
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F8AC76> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:30
// variables: 3
void CAnimNodeList::Get(int index)
{
	const char   __FUNCTION__; // 37408
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 32
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
} /* size: 0, variables: 1 */

// <00F8AB08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:38
// variables: 3
// function calls: 3
void CAnimNodeList::Get(int index)
{
	const char   __FUNCTION__; // 37408
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
	CUtlVectorBase<CAnimNodeBase::Count(); // 41
	CUtlMemory<CAnimNodeBase::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimNodeBase::operator[](
			int i);  // 42
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

