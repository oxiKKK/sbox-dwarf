
//
// animgraph/animgraphfixeddata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 32
//

// <015C4D1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:13
// function calls: 34
void CAnimGraphFixedData::CAnimGraphFixedData()
{
	CPackedDataT<false>::CPackedDataT(
			uint32 reserveSize);  // 14
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAnimMovementUpdater>::CPackedHandle(); // 15
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 366
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator=(
			CAnimGraphFixedData* pObj);  // 319
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::CSmartPtr(
			CAnimGraphFixedData* pObj);  // 15
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 344
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::~CSmartPtr(); // 15
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAc this); // 15
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::CUtlVector(); // 15
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNodeLoca this); // 15
} /* size: 262, inline expansions: 34 (436 bytes) */

// <015C4D03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:13
void CAnimGraphFixedData::CAnimGraphFixedData()
{
} /* size: 0 */

// <015C4CEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:21
void CAnimGraphFixedData::GetData()
{
} /* size: 0 */

// <015D2A16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:33
// function call: 1
void CAnimGraphFixedData::GetNodeCount()
{
	Count(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, C this); // 35
} /* size: 8, inline expansions: 1 (0 bytes) */

// <015C4CB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:33
void CAnimGraphFixedData::GetNodeCount()
{
} /* size: 0 */

// <015C4BE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:39
// function calls: 3
void CAnimGraphFixedData::GetNode(int index)
{
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, C this,
			int i);  // 41
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::Get(); // 41
} /* size: 16, inline expansions: 3 (10 bytes) */

// <015C4ABB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:45
// function calls: 4
void CAnimGraphFixedData::GetUpdateNode(int index)
{
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::operator[](
			int i);  // 47
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateNodeBase>(
					const CPackedHandle<CAnimUpdateNodeBase>& handle);  // 47
} /* size: 0, inline expansions: 4 (0 bytes) */

// <015C4992> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:51
// function calls: 4
void CAnimGraphFixedData::GetUpdateNode(int index)
{
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::operator[](
			int i);  // 53
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimUpdateNodeBase>(
					const CPackedHandle<CAnimUpdateNodeBase>& handle);  // 53
} /* size: 75, inline expansions: 4 (35 bytes) */

// <015C4720> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:57
// variables: 5
// function calls: 7
void CAnimGraphFixedData::GetNode(const AnimNodeLocation_t& nodeLocation)
{
	AnimNodeID nodeID; // 59
	const CUpdateNodeManager* pUpdateNodeManager; // 61
	const char   __FUNCTION__; // 35193
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 62
	}
	{
		int i; // 173
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 173
		CUtlMemory<AnimNodeID, int>::operator[](
				int i);  // 595
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator[](
				int i);  // 175
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 175
	}
	CAnimGraphFixedData::GetUpdateNodeManager(
				const AnimNodePath& nodePath);  // 61
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 59
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 64
} /* size: 0, variables: 3, inline expansions: 3 (74 bytes) */

// <015C44AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:68
// variables: 5
// function calls: 7
void CAnimGraphFixedData::GetNodeIndex(const AnimNodeLocation_t& nodeLocation)
{
	AnimNodeID nodeID; // 70
	const CUpdateNodeManager* pUpdateNodeManager; // 72
	const char   __FUNCTION__; // 35328
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
	{
		int i; // 173
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 173
		CUtlMemory<AnimNodeID, int>::operator[](
				int i);  // 595
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator[](
				int i);  // 175
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 175
	}
	CAnimGraphFixedData::GetUpdateNodeManager(
				const AnimNodePath& nodePath);  // 72
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 70
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 75
} /* size: 0, variables: 3, inline expansions: 3 (74 bytes) */

// <015C4257> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:79
// variables: 4
// function calls: 6
void CAnimGraphFixedData::GetChildNodeLocation(int index, int childIndex)
{
	const char   __FUNCTION__; // 35534
	const CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& nodeLocations; // 82
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 84
	}
	IsValidIndex(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<An this,
			int i);  // 81
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<An this,
			int i);  // 82
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::IsValidIndex(
			int i);  // 84
	CUtlMemory<AnimNodeLocation_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::operator[](
			int i);  // 85
} /* size: 0, variables: 2, inline expansions: 6 (92 bytes) */

// <015C3A89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:89
// variables: 9
// function calls: 27
void CAnimGraphFixedData::GetUpdateNode(const AnimNodeLocation_t& nodeLocation, AnimOutputID outputID)
{
	AnimNodeID nodeID; // 91
	CUpdateNodeManager* pUpdateNodeManager; // 93
	const char   __FUNCTION__; // 35355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 94
	}
	{
		const CAnimNodeBase* pNode; // 98
		{
			AnimNodeLocation_t outputNodeLocation; // 100
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
			}
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 100
			AnimNodeID::operator=(
					const AnimNodeID& rhs);  // 101
			{
				int i; // 173
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 173
				CUtlMemory<AnimNodeID, int>::operator[](
						int i);  // 595
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator[](
						int i);  // 175
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 175
			}
			CAnimGraphFixedData::GetUpdateNodeManager(
						const AnimNodePath& nodePath);  // 103
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
			CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
			CUtlMemory<AnimNodeID, int>::Purge(); // 903
			CUtlMemory<AnimNodeID, int>::Purge(); // 1799
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
			ValidateAlignment<AnimNodeID>(void); // 508
			CUtlMemory<AnimNodeID, int>::Purge(); // 510
			CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
			CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
			AnimNodeLocation_t::~AnimNodeLocation_t(); // 105
		}
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 98
	}
	{
		int i; // 173
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 173
		CUtlMemory<AnimNodeID, int>::operator[](
				int i);  // 595
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator[](
				int i);  // 175
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 175
	}
	CAnimGraphFixedData::GetUpdateNodeManager(
				const AnimNodePath& nodePath);  // 93
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 91
	AnimOutputID::IsValid(); // 96
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 108
} /* size: 0, variables: 3, inline expansions: 4 (84 bytes) */

// <015C3915> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:112
// function calls: 6
void CAnimGraphFixedData::GetRootUpdateNode()
{
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::Count(); // 135
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::IsEmpty(); // 114
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::operator[](
			int i);  // 637
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::Tail(); // 116
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimUpdateNodeBase>(
					const CPackedHandle<CAnimUpdateNodeBase>& handle);  // 116
} /* size: 85, inline expansions: 6 (44 bytes) */

// <015C35B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:125
// function calls: 15
void CAnimGraphFixedData::ReserveNodes(int count)
{
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::IsGrowable(); // 881
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this); // 1024
	EnsureCapacity(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this,
			int num);  // 127
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::IsGrowable(); // 881
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::EnsureCapacity(
			int num);  // 128
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::IsGrowable(); // 881
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this); // 1024
	EnsureCapacity(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this,
			int num);  // 129
} /* size: 393, inline expansions: 15 (834 bytes) */

// <015C1DEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:133
// variables: 2
// function calls: 112
void CAnimGraphFixedData::AddUpdateNode(const CAnimNodeBaseConstPtr& pNode, CAnimUpdateNodeBase* pUpdateNode, const CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& childNodeLocations)
{
	CPackedHandle<CAnimUpdateNodeBase> hUpdateNode; // 135
	PackedHandleID::PackedHandleID(
			const uint32  id);  // 228
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 23
	CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle(
			PackedHandleID offset);  // 228
	{
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle(); // 233
	CPackedDataT<false>::CreateHandle<CAnimUpdateNodeBase>(
						CAnimUpdateNodeBase* item);  // 135
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this); // 824
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::IsGrowable(); // 823
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this,
			int num);  // 1198
	CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 370
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CAnimNodeBase* pObj);  // 406
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<const CAnimNodeBase> >(CSmartPtr<const CAnimNodeBase, CRefCountAccessor>* pMemory,
							const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& src);  // 1201
	AddToTail(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, CRefCou this,
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& src);  // 137
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::NumAllocated(); // 1196
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::Base(); // 112
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::Base(); // 368
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::IsGrowable(); // 823
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::Element(
		int i);  // 1201
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle(
			const CPackedHandle<CAnimUpdateNodeBase>  &);  // 1520
	CopyConstruct<CPackedHandle<CAnimUpdateNodeBase> >(CPackedHandle<CAnimUpdateNodeBase>* pMemory,
								const CPackedHandle<CAnimUpdateNodeBase>& src);  // 1201
	CUtlVectorBase<CPackedHandle<CAnimUpdateNodeBase>, CUtlMemory<CPackedHandle<CAnimUpdateNodeBase>, int> >::AddToTail(
			const CPackedHandle<CAnimUpdateNodeBase>& src);  // 138
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this); // 824
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::IsGrowable(); // 823
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this,
			int num);  // 1198
	CUtlMemory<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this,
		int i);  // 1201
	CUtlMemory<AnimNodeLocation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeLocation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Count(); // 573
	CUtlMemory<AnimNodeLocation_t, int>::Base(); // 112
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Base(); // 102
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::begin(); // 574
	CUtlMemory<AnimNodeLocation_t, int>::Base(); // 113
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Base(); // 105
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Count(); // 105
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::end(); // 574
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 20
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<AnimNodeID, int>::NumAllocated(); // 782
	CUtlMemory<AnimNodeID, int>::IsGrowable(); // 823
	CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 859
	CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 861
	CUtlMemory<AnimNodeID, int>::Grow(
		int num);  // 806
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<AnimNodeID, int>::operator[](
				int i);  // 602
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Element(
			int i);  // 1453
		AnimNodeID::AnimNodeID(); // 1479
		Construct<AnimNodeID>(AnimNodeID* pMemory); // 1453
	}
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::SetCount(
		int count);  // 573
	CUtlMemory<AnimNodeID, int>::Base(); // 112
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
	CUtlMemory<AnimNodeID, int>::Base(); // 113
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 209
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 200
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 574
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
	AnimNodeLocation_t::operator=(
			const AnimNodeLocation_t  &);  // 209
	UtlTraitsCopyRange<AnimNodeLocation_t>(const AnimNodeLocation_t* pFrom,
						const AnimNodeLocation_t* pFromEnd,
						AnimNodeLocation_t* pTo);  // 200
	UtlTraitsCopyRange<AnimNodeLocation_t>(const AnimNodeLocation_t* pFrom,
						const AnimNodeLocation_t* pFromEnd,
						AnimNodeLocation_t* pTo);  // 574
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::operator=(
			const CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& other);  // 565
	CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::operator=(
			const CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& other);  // 452
	CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::operator=(
			const CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& src);  // 434
	CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::CUtlVector(
			const CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& src);  // 1520
	CopyConstruct<CUtlVector<AnimNodeLocation_t> >(CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >* pMemory,
							const CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& src);  // 1201
	AddToTail(const CUtlVectorBase<CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >, CUtlMemory<CUtlVector<AnimNode this,
			const CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& src);  // 139
} /* size: 0, variables: 1, inline expansions: 108 (11165 bytes) */

// <015C1DD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:145
void CAnimGraphFixedData::GetMovementUpdater()
{
} /* size: 0 */

// <015C1C5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:151
// function calls: 5
void CAnimGraphFixedData::SetMovementUpdater(CAnimMovementUpdater* pUpdater)
{
	{
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAnimMovementUpdater>::CPackedHandle(); // 233
	CPackedDataT<false>::CreateHandle<CAnimMovementUpdater>(
						CAnimMovementUpdater* item);  // 153
	PackedHandleID::operator=(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<CAnimMovementUpdater>::operator=(
			CPackedHandle<CAnimMovementUpdater> &);  // 153
} /* size: 0, inline expansions: 5 (78 bytes) */

// <015D2A6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:157
void CAnimGraphFixedData::GetUpdateNodeManager()
{
} /* size: 9 */

// <015D2A98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:169
// variables: 2
// function calls: 4
void CAnimGraphFixedData::GetUpdateNodeManager(const AnimNodePath& nodePath)
{
	CUpdateNodeManager* pUpdateNodeManager; // 171
	{
		int i; // 173
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 173
		CUtlMemory<AnimNodeID, int>::operator[](
				int i);  // 595
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator[](
				int i);  // 175
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 175
	}
} /* size: 116, variables: 1 */

// <015C1BD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:169
// variables: 2
void CAnimGraphFixedData::GetUpdateNodeManager(const AnimNodePath& nodePath)
{
	CUpdateNodeManager* pUpdateNodeManager; // 171
	{
		int i; // 173
	}
} /* size: 0, variables: 1 */

// <015C1B9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:182
// variables: 2
void CAnimGraphFixedData::GetUpdateNodeManager(const AnimNodePath& nodePath)
{
	CUpdateNodeManager* pUpdateNodeManager; // 184
	{
		int i; // 186
	}
} /* size: 0, variables: 1 */

// <015C14BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:195
// function calls: 32
void CUpdateNodeManager::CUpdateNodeManager(CAnimGraphFixedDataPtr pFixedData)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 196
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 370
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator=(
			CAnimGraphFixedData* pObj);  // 406
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>& other);  // 196
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Default this); // 178
	CUtlHashtable(const CUtlHashtable<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Default this,
			int minimumSize);  // 196
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<A this); // 178
	CUtlHashtable(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<A this,
			int minimumSize);  // 196
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 178
	CUtlHashtable(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
			int minimumSize);  // 196
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t, CUtlMe this); // 178
	CUtlHashtable(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t, CUtlMe this,
			int minimumSize);  // 196
} /* size: 219, inline expansions: 32 (482 bytes) */

// <015C149A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:195
void CUpdateNodeManager::CUpdateNodeManager(CAnimGraphFixedDataPtr pFixedData)
{
} /* size: 0 */

// <015C1263> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:202
// variable: 1
// function calls: 8
void CUpdateNodeManager::HasUpdateNode(AnimNodeID nodeID)
{
	UtlHashHandle_t handle; // 204
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 218
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 218
	Find(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFun this,
		KeyArg_t k);  // 204
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFun this,
			handle_t idx);  // 205
} /* size: 132, variables: 1, inline expansions: 8 (258 bytes) */

// <015C0A07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:209
// variable: 1
// function calls: 28
void CUpdateNodeManager::AddUpdateNode(const CAnimNodeBaseConstPtr& pNode, CAnimUpdateNodeBase* pUpdateNode, const CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >& childNodeLocations)
{
	AnimNodeID nodeID; // 221
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::IsValid(); // 211
	AnimNodeID::IsValid(); // 223
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 225
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, int>, int>::operator[](
			int i);  // 720
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 64
	CUtlKeyValuePair<AnimNodeID, int>::CUtlKeyValuePair<AnimNodeID, int>(
						const AnimNodeID& k,
						const int& v);  // 1514
	Construct<CUtlKeyValuePair<AnimNodeID, int>, const AnimNodeID&, int&>(CUtlKeyValuePair<AnimNodeID, int>* pMemory); // 720
	DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t, CUtlMe this,
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t, CUtlMe this,
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 249
	Insert(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t, CUtlMe this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 225
	Count(const CUtlVectorBase<CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<const CAnimNodeBase, C this); // 35
	CAnimGraphFixedData::GetNodeCount(); // 225
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 226
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 249
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, int>::operator[](
			int i);  // 720
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 64
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle(
			const CPackedHandle<CAnimUpdateNodeBase>  &);  // 64
	CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >::CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >(
										const AnimNodeID& k,
										const CPackedHandle<CAnimUpdateNodeBase>& v);  // 1514
	Construct<CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, const AnimNodeID&, const CPackedHandle<CAnimUpdateNodeBase>&>(CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* pMemory); // 720
	DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<A this,
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<A this,
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	Insert(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<A this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 226
} /* size: 464, variables: 1, inline expansions: 28 (1004 bytes) */

// <015C0766> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:231
// variable: 1
// function calls: 11
void CUpdateNodeManager::GetUpdateNode(AnimNodeID nodeID)
{
	UtlHashHandle_t handle; // 233
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 218
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 218
	Find(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFun this,
		KeyArg_t k);  // 233
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFun this,
			handle_t idx);  // 234
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 236
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateNodeBase>(
					const CPackedHandle<CAnimUpdateNodeBase>& handle);  // 236
} /* size: 191, variables: 1, inline expansions: 11 (275 bytes) */

// <015C050F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:245
// variable: 1
// function calls: 9
void CUpdateNodeManager::Next(AnimNodeID nodeID)
{
	UtlHashHandle_t handle; // 247
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 218
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 218
	Find(const CUtlHashtable<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, D this,
		KeyArg_t k);  // 247
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, D this,
			handle_t idx);  // 248
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor>::Get(); // 250
} /* size: 135, variables: 1, inline expansions: 9 (252 bytes) */

// <015BF8C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:259
// variable: 1
// function calls: 53
void CUpdateNodeManager::AddNext(AnimNodeID nodeID)
{
	CUpdateNodeManager* pUpdateNodeManager; // 261
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 366
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator=(
			CAnimGraphFixedData* pObj);  // 406
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>& other);  // 261
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 344
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::~CSmartPtr(); // 261
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CUpdateNodeManager>(CUpdateNodeManager* pObj); // 366
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor>::operator=(
			CUpdateNodeManager* pObj);  // 319
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor>::CSmartPtr(
			CUpdateNodeManager* pObj);  // 262
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 249
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >, int>::operator[](
			int i);  // 720
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 64
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CUpdateNodeManager>(CUpdateNodeManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CUpdateNodeManager>(CUpdateNodeManager* pObj); // 370
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor>::operator=(
			CUpdateNodeManager* pObj);  // 406
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor>::operator=(
			const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>& other);  // 328
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >::CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >(
									const AnimNodeID& k,
									const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >, const AnimNodeID&, const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Default this,
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Default this,
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 249
	Insert(const CUtlHashtable<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Default this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 262
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CUpdateNodeManager>(CUpdateNodeManager* pObj); // 344
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor>::~CSmartPtr(); // 262
} /* size: 390, variables: 1, inline expansions: 53 (1168 bytes) */

// <015BF225> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:268
// variable: 1
// function calls: 25
void CUpdateNodeManager::AddNode(const CAnimNodeBaseConstPtr& pNode)
{
	{
		AnimNodeID nodeID; // 272
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 249
		Mix32HashFunctor::operator(
				uint32 n);  // 68
		DefaultHashFunctor<AnimNodeID>::operator(
				AnimNodeID s);  // 249
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
				int i);  // 720
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 64
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 370
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
				const CAnimNodeBase* pObj);  // 406
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
				const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 328
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 64
		CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >::CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >(
										const AnimNodeID& k,
										const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& v);  // 1514
		Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >, const AnimNodeID&, const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* pMemory); // 720
		DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
						const AnimNodeID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
		DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
						const AnimNodeID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
		Insert(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 274
	}
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator bool(); // 270
} /* size: 283, inline expansions: 1 (3 bytes) */

// <015BEFC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:279
// variable: 1
// function calls: 9
void CUpdateNodeManager::GetNode(AnimNodeID nodeID)
{
	UtlHashHandle_t handle; // 281
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 218
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 218
	Find(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>,  this,
		KeyArg_t k);  // 281
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>,  this,
			handle_t idx);  // 282
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::Get(); // 284
} /* size: 135, variables: 1, inline expansions: 9 (252 bytes) */

// <015BEDBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:293
// function calls: 6
void CUpdateNodeManager::ReserveNodes(int count)
{
	Reserve(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<A this,
		int expected);  // 287
	Reserve(const CUtlHashtable<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<A this,
		int expected);  // 295
	Reserve(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
		int expected);  // 287
	Reserve(const CUtlHashtable<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
		int expected);  // 296
	Reserve(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t, CUtlMe this,
		int expected);  // 287
	Reserve(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t, CUtlMe this,
		int expected);  // 297
} /* size: 172, inline expansions: 6 (217 bytes) */

// <015BEB8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphfixeddata.cpp:301
// variable: 1
// function calls: 8
void CUpdateNodeManager::GetNodeIndex(AnimNodeID nodeID)
{
	UtlHashHandle_t handle; // 303
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 218
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 218
	Find(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t,  this,
		KeyArg_t k);  // 303
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<AnimNodeID, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<AnimNodeID, int, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t,  this,
			handle_t idx);  // 304
} /* size: 139, variables: 1, inline expansions: 8 (250 bytes) */

