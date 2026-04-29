
//
// animgraph/animgraphcontext.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//

// <00E4750B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:12
// function calls: 2
void CAnimGraphContext::CAnimGraphContext(CAnimationGraph* pGraph, CAnimNodeManager* pNodeManager)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
} /* size: 40, inline expansions: 2 (14 bytes) */

// <00E474DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:12
void CAnimGraphContext::CAnimGraphContext(CAnimationGraph* pGraph, CAnimNodeManager* pNodeManager)
{
} /* size: 0 */

// <00E8F135> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:20
void CAnimGraphContext::GetGraph()
{
} /* size: 9 */

// <00E473BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:32
// variables: 2
// function call: 1
void CAnimGraphContext::GetNodeByID(AnimNodeID nodeID)
{
	const char   __FUNCTION__; // 10293
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 34
	}
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 36
} /* size: 0, variables: 1, inline expansions: 1 (5 bytes) */

// <00E46733> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:40
// variables: 3
// function calls: 52
void CAnimGraphContext::FillParameterChoiceProvider(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceValues, AnimParamType_t filterToType)
{
	const IAnimParameterList* paramList; // 42
	{
		int i; // 54
		{
			const IAnimParameter* param; // 56
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1148
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1148
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 68
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1148
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 63
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 63
			CUtlString::Get(); // 99
			CUtlString::String(); // 63
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 68
		}
	}
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::Get(); // 79
	CAnimationGraph::GetParameterList(); // 42
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 1479
	Construct<CUtlString>(CUtlString* pMemory); // 1148
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 46
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 46
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 1479
	Construct<CUtlString>(CUtlString* pMemory); // 1148
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 51
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 51
} /* size: 692, variables: 1, inline expansions: 26 (321 bytes) */

// <00E45860> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:75
// variables: 3
// function calls: 66
void CAnimGraphContext::FillTagChoiceProvider(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceNames, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutChoiceValues)
{
	CAnimTagManagerConstPtr pTagMgr; // 77
	{
		int i; // 82
		{
			const CAnimTagBase* pTag; // 84
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1148
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 86
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1148
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 87
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 86
			CUtlString::Get(); // 99
			CUtlString::String(); // 86
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 87
		}
	}
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagManager>(CAnimTagManager* pObj); // 386
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=<CAnimTagManager>(
					CAnimTagManager* pObj);  // 413
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=<CAnimTagManager>(
					const CSmartPtr<CAnimTagManager, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::CSmartPtr<CAnimTagManager>(
					const CSmartPtr<CAnimTagManager, CRefCountAccessor>& other);  // 77
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 1479
	Construct<CUtlString>(CUtlString* pMemory); // 1148
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 79
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 79
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 1479
	Construct<CUtlString>(CUtlString* pMemory); // 1148
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 80
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 80
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimTagManager>(const CAnimTagManager* pObj); // 344
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::~CSmartPtr(); // 89
} /* size: 0, variables: 1, inline expansions: 40 (0 bytes) */

// <00E8F15E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:92
void CAnimGraphContext::GetNodeManager()
{
} /* size: 9 */

// <00E457E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:98
// function call: 1
void CAnimGraphContext::GetTagManager()
{
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 100
} /* size: 13, inline expansions: 1 (4 bytes) */

// <00E8F187> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:104
// function call: 1
void CAnimGraphContext::GetLogManager()
{
	CSmartPtr<CAnimGraphLogManager, CRefCountAccessor>::Get(); // 106
} /* size: 13, inline expansions: 1 (4 bytes) */

// <00E457D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:104
void CAnimGraphContext::GetLogManager()
{
} /* size: 0 */

// <00E4529E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:110
// variable: 1
// function calls: 24
void CAnimGraphContext::GetParameter(AnimParamID paramID)
{
	CAnimParameterListPtr pParamList; // 112
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 406
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 112
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 115
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::Get(); // 115
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 115
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 344
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 119
} /* size: 160, variables: 1, inline expansions: 24 (331 bytes) */

// <00E45261> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:122
void CAnimGraphContext::SetGraph(CAnimationGraph* pGraph)
{
} /* size: 9 */

// <00E45224> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:128
void CAnimGraphContext::SetNodeManager(CAnimNodeManager* pNodeManager)
{
} /* size: 9 */

