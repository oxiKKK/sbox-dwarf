
//
// animgraph/statemachineanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 38
//

// <0128E916> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:11
void IAnimStateMachine::GetTypeInfo()
{
} /* size: 0 */

// <0128E783> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:11
// function calls: 3
void* IAnimStateMachine::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimStateMachine>::CastTo(
		IAnimStateMachine* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0128E5F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:11
// function calls: 3
const void* IAnimStateMachine::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimStateMachine>::CastTo(
		const IAnimStateMachine* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0129F261> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129BEE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13
void CStateMachineAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0128E3D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13
// function calls: 3
void* CStateMachineAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CStateMachineAnimNode>::CastTo(
		CStateMachineAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0128E244> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:13
// function calls: 3
const void* CStateMachineAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CStateMachineAnimNode>::CastTo(
		const CStateMachineAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0128DCDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:23
// function calls: 19
void CStateMachineAnimNode::CStateMachineAnimNode()
{
	IAnimStateMachine::IAnimStateMachine(); // 24
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 530
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> >::CUtlVector(); // 24
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::CSmartPtr(); // 24
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateMachineContext>(CAnimStateMachineContext* pObj); // 370
	CSmartPtr<CAnimStateMachineContext, CRefCountAccessor>::operator=(
			CAnimStateMachineContext* pObj);  // 26
} /* size: 183, inline expansions: 19 (209 bytes) */

// <0128DCC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:23
void CStateMachineAnimNode::CStateMachineAnimNode()
{
} /* size: 0 */

// <0129BF0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:30
// function call: 1
void CStateMachineAnimNode::GetChildCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this); // 32
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0128DCAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:30
void CStateMachineAnimNode::GetChildCount()
{
} /* size: 0 */

// <0128DAD0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:36
// function calls: 5
void CStateMachineAnimNode::GetChild(int childIndex)
{
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
			int i);  // 44
	CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 44
	CStateMachineAnimNode::GetChildID(
			int index);  // 38
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 38
} /* size: 154, inline expansions: 5 (34 bytes) */

// <0129C5D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:42
// function calls: 3
void CStateMachineAnimNode::GetChildID(int index)
{
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
			int i);  // 44
	CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 44
} /* size: 74, inline expansions: 3 (10 bytes) */

// <0128DAAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:42
void CStateMachineAnimNode::GetChildID(int index)
{
} /* size: 0 */

// <0128D971> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:48
// function calls: 4
void CStateMachineAnimNode::SetChildID(int index, AnimNodeID nodeID)
{
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int i);  // 50
	CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 50
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 50
} /* size: 74, inline expansions: 4 (19 bytes) */

// <0128D89E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:54
// function calls: 3
void CStateMachineAnimNode::GetChildName(int index)
{
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
			int i);  // 56
	CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 56
} /* size: 21, inline expansions: 3 (14 bytes) */

// <0128D7B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:60
// function calls: 3
void CStateMachineAnimNode::GetChildOutputID(int index)
{
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
			int i);  // 62
	CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 62
} /* size: 74, inline expansions: 3 (10 bytes) */

// <0128D5D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:66
// function calls: 6
void CStateMachineAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int i);  // 68
	CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 68
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::CNodeConnection(
			const CNodeConnection  &);  // 68
} /* size: 76, inline expansions: 6 (28 bytes) */

// <0128BFEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:72
// variables: 24
// function calls: 71
void CStateMachineAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const int  stateCount; // 74
	int totalTransitions; // 77
	CPackedHandle<CStateMachineUpdateNode> hNodeHandle; // 83
	CStateMachineUpdateNode* pUpdateNode; // 85
	const int  kMaxStateCount; // 93
	int transitionListIndex; // 94
	const char   __FUNCTION__; // 9976
	int startStateCount; // 131
	{
		int stateIndex; // 78
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
				int i);  // 80
		CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 80
	}
	{
		int stateIndex; // 95
		{
			CAnimStatePtr currentState; // 98
			int transitionCount; // 103
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
			}
			{
				int transitionIndex; // 104
				{
					CAnimStateTransition* currentTransition; // 106
					const IAnimState* pTargetState; // 112
					AnimStateID targetStateID; // 113
					int targetStateIndex; // 115
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
					}
					CRelativeOffset<CTransitionUpdateData>::IsValid(); // 30
					CRelativeOffset<CTransitionUpdateData>::Get(); // 90
					{
					}
					CRelativeArray<CTransitionUpdateData>::operator[](
							int index);  // 109
					AnimStateID::AnimStateID(
							const AnimStateID& rhs);  // 115
					{
						int i; // 386
						Count(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this); // 386
						CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
								int i);  // 388
						CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 388
						AnimStateID::operator==(
								const AnimStateID& rhs);  // 388
					}
					CStateMachineAnimNode::GetIndexOfState(
							AnimStateID id);  // 115
					{
					}
					CRelativeOffset<CTransitionUpdateData>::IsValid(); // 30
					CRelativeOffset<CTransitionUpdateData>::Get(); // 90
					CRelativeArray<CTransitionUpdateData>::operator[](
							int index);  // 119
					{
					}
					CRelativeOffset<CTransitionUpdateData>::IsValid(); // 30
					CRelativeOffset<CTransitionUpdateData>::Get(); // 90
					CRelativeArray<CTransitionUpdateData>::operator[](
							int index);  // 120
					{
					}
					CRelativeOffset<CStateUpdateData>::IsValid(); // 30
					CRelativeOffset<CStateUpdateData>::Get(); // 90
					CRelativeArray<CStateUpdateData>::operator[](
							int index);  // 123
					{
					}
					CRelativeOffset<int>::IsValid(); // 30
					CRelativeOffset<int>::Get(); // 90
					CRelativeArray<int>::operator[](
							int index);  // 123
				}
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 30
			CRelativeOffset<CStateUpdateData>::Get(); // 90
			{
			}
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 101
			CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
					int i);  // 98
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimState>(CAnimState* pObj); // 366
			CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
					CAnimState* pObj);  // 406
			CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 328
			CSmartPtr<CAnimState, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 98
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimState>(CAnimState* pObj); // 344
			CSmartPtr<CAnimState, CRefCountAccessor>::~CSmartPtr(); // 127
		}
	}
	{
		int stateIndex; // 133
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
				int i);  // 189
		CSmartPtr<CAnimState, CRefCountAccessor>::Get(); // 189
		CStateMachineAnimNode::GetState(
			int index);  // 135
	}
	{
		CRelativeArray<float>& weights; // 163
		{
			int32 i; // 164
			CRelativeArray<float>::Count(); // 164
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 172
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 168
		}
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 159
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 160
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 161
		{
		}
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 161
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 163
	}
	Count(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this); // 32
	CStateMachineAnimNode::GetChildCount(); // 74
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CStateMachineUpdateNode>::CPackedHandle(); // 83
	CPackedDataT<false>::AddItem<CStateMachineUpdateNode, CAnimGraphInitContext&, int const&, int&>(
											CPackedHandle<CStateMachineUpdateNode>* handleOut);  // 85
} /* size: 0, variables: 8, inline expansions: 5 (90 bytes) */

// <0128BFD4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:181
void CStateMachineAnimNode::GetStateCount()
{
} /* size: 0 */

// <0129BF65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:187
// function calls: 3
void CStateMachineAnimNode::GetState(int index)
{
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int i);  // 189
	CSmartPtr<CAnimState, CRefCountAccessor>::Get(); // 189
} /* size: 16, inline expansions: 3 (10 bytes) */

// <0128BFAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:187
void CStateMachineAnimNode::GetState(int index)
{
} /* size: 0 */

// <0128B713> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:199
// variable: 1
// function calls: 37
void CStateMachineAnimNode::AddState()
{
	CAnimStatePtr newState; // 201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimState>(CAnimState* pObj); // 366
	CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
			CAnimState* pObj);  // 319
	CSmartPtr<CAnimState, CRefCountAccessor>::CSmartPtr(
			CAnimState* pObj);  // 201
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimState>(CAnimState* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimState>(CAnimState* pObj); // 370
	CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
			CAnimState* pObj);  // 406
	CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimState, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimState> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory,
						const CSmartPtr<CAnimState, CRefCountAccessor>& src);  // 1201
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			const CSmartPtr<CAnimState, CRefCountAccessor>& src);  // 204
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimState>(CAnimState* pObj); // 344
	CSmartPtr<CAnimState, CRefCountAccessor>::~CSmartPtr(); // 207
} /* size: 280, variables: 1, inline expansions: 37 (592 bytes) */

// <0129F6AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:210
// variable: 1
// function calls: 4
void CStateMachineAnimNode::RemoveState(IAnimState* state)
{
	{
		int i; // 212
		Count(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this); // 212
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
				int i);  // 214
		CSmartPtr<CAnimState, CRefCountAccessor>::Get(); // 214
	}
} /* size: 65 */

// <0128B6C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:210
// variable: 1
void CStateMachineAnimNode::RemoveState(IAnimState* state)
{
	{
		int i; // 212
	}
} /* size: 0 */

// <0128B287> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:223
// variables: 2
// function calls: 15
void CStateMachineAnimNode::CopyStatesToBuffer(const CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& statesToCopy, CUtlBuffer& bufferOut)
{
	CAnimStateList stateList; // 225
	CUtlString errors; // 230
	CUtlString::CUtlString(); // 230
	CUtlString::~CUtlString(); // 232
	CUtlVectorBase<CAnimState::RemoveAll(); // 1798
	CUtlMemory<CAnimState::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimState::Purge(); // 903
	CUtlMemory<CAnimState::Purge(); // 1799
	CUtlVectorBase<CAnimState::Purge(); // 560
	ValidateAlignment<CAnimState*>(void); // 508
	CUtlMemory<CAnimState::Purge(); // 510
	CUtlMemory<CAnimState::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimState::~CUtlVectorBase(); // 410
	CUtlVector<CAnimState::~CUtlVector(); // 10
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 10
	CAnimStateList::~CAnimStateList(); // 232
} /* size: 194, variables: 2, inline expansions: 15 (203 bytes) */

// <01289855> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:235
// variables: 17
// function calls: 98
void CStateMachineAnimNode::PasteStatesFromBuffer(const CUtlBuffer& buffer, CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& stateListOut)
{
	CUtlString errors; // 237
	CUtlBuffer tmpBuffer; // 239
	CAnimStateListPtr stateList; // 242
	{
		int i; // 246
		{
			CAnimState* currentState; // 248
			AnimStateID newID; // 254
			AnimStateID oldID; // 255
			{
				int transitionIndex; // 262
				{
					CAnimStateTransitionPtr pTransition; // 264
					bool bFound; // 266
					AnimStateID targetStateID; // 268
					{
						int j; // 271
						{
							CAnimState* pOtherState; // 275
							AnimStateID::operator==(
									const AnimStateID& rhs);  // 276
						}
					}
					AnimStateID::IsValid(); // 269
					CSmartPtr<CAnimStateTransition, CRefCountAccessor>::Get(); // 286
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 344
					CSmartPtr<CAnimStateTransition, CRefCountAccessor>::~CSmartPtr(); // 288
					CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator->(); // 268
				}
			}
			{
				int j; // 291
				{
					CAnimState* pOtherState; // 295
					{
						int transitionIndex; // 297
						{
							CAnimStateTransitionPtr pTransition; // 299
							ThreadInterlockedDecrement(volatile int32* p); // 159
							Decrement(int* p); // 295
							CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
							CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
							CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
							Release<CAnimStateTransition>(CAnimStateTransition* pObj); // 344
							CSmartPtr<CAnimStateTransition, CRefCountAccessor>::~CSmartPtr(); // 304
							CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator->(); // 300
							AnimStateID::operator==(
									const AnimStateID& rhs);  // 300
							CSmartPtr<CAnimStateTransition, CRefCountAccessor>::operator->(); // 302
							AnimStateID::AnimStateID(
									const AnimStateID& rhs);  // 302
						}
					}
				}
			}
			AnimStateID::AnimStateID(
					const AnimStateID& rhs);  // 256
			AnimNodeID::AnimNodeID(); // 259
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimState>(CAnimState* pObj); // 366
			CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
					CAnimState* pObj);  // 319
			CSmartPtr<CAnimState, CRefCountAccessor>::CSmartPtr(
					CAnimState* pObj);  // 308
			CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::NumAllocated(); // 1247
			CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
				int i);  // 1252
			CSmartPtr<CAnimState, CRefCountAccessor>::CSmartPtr(
					CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 1514
			Construct<CSmartPtr<CAnimState>, CSmartPtr<CAnimState, CRefCountAccessor> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory); // 1252
			CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Base(); // 112
			Base(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 368
			ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 824
			GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
					int num);  // 1249
			AddToTail(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
					CSmartPtr<CAnimState, CRefCountAccessor>& src);  // 308
			CSmartPtr<CAnimState, CRefCountAccessor>::~CSmartPtr(); // 308
			CUtlMemory<IAnimState::NumAllocated(); // 1247
			CUtlMemory<IAnimState::Base(); // 112
			CUtlVectorBase<IAnimState::Base(); // 368
			CUtlVectorBase<IAnimState::ResetDbgInfo(); // 824
			CUtlMemory<IAnimState::IsGrowable(); // 823
			CUtlMemory<IAnimState::IsExternallyAllocated(); // 859
			CUtlMemory<IAnimState::IsExternallyAllocated(); // 861
			CUtlMemory<IAnimState::Grow(
				int num);  // 806
			CUtlVectorBase<IAnimState::GrowMemory(
					int num);  // 1249
			CUtlMemory<IAnimState::operator[](
					int i);  // 602
			CUtlVectorBase<IAnimState::Element(
				int i);  // 1252
			Construct<IAnimState*, IAnimState*>(IAnimState** pMemory); // 1252
			CUtlVectorBase<IAnimState::AddToTail(
					IAnimState *& src);  // 311
		}
	}
	CUtlString::CUtlString(); // 237
	CUtlBuffer::TellPut(); // 1597
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 1597
	CUtlBuffer::Clear(); // 1602
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1600
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1597
	CUtlBuffer::CopyBuffer(
			const CUtlBuffer& buffer);  // 240
	{
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 89
		CKV3TransferContextBase::GetErrorMessage(); // 1572
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 89
	CKV3TransferContextBase::GetErrorMessage(); // 1573
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 89
	CKV3TransferContextBase::GetErrorMessage(); // 1576
	LoadKV3Object<CAnimStateList>(CUtlString* pOutError,
					const KeyValues3* pKV3);  // 1624
	LoadKV3Object<CAnimStateList>(CUtlString* pOutError,
					CUtlBuffer* pSrcBuffer,
					const KV3ID_t& expectedFormat);  // 242
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimStateList>(CAnimStateList* pObj); // 366
	CSmartPtr<CAnimStateList, CRefCountAccessor>::operator=(
			CAnimStateList* pObj);  // 319
	CSmartPtr<CAnimStateList, CRefCountAccessor>::CSmartPtr(
			CAnimStateList* pObj);  // 242
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimStateList>(CAnimStateList* pObj); // 344
	CSmartPtr<CAnimStateList, CRefCountAccessor>::~CSmartPtr(); // 318
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 318
	CUtlString::~CUtlString(); // 318
} /* size: 0, variables: 3, inline expansions: 39 (1676 bytes) */

// <01289726> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:321
// variable: 1
// function calls: 2
void CStateMachineAnimNode::SaveToBuffer(CUtlBuffer& bufferOut)
{
	CUtlString errors; // 326
	CUtlString::CUtlString(); // 326
	CUtlString::~CUtlString(); // 328
} /* size: 142, variables: 1, inline expansions: 2 (24 bytes) */

// <01288E12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:331
// variables: 5
// function calls: 32
void CStateMachineAnimNode::LoadFromBuffer(const CUtlBuffer& buffer)
{
	CUtlString errors; // 333
	CUtlBuffer tmpBuffer; // 335
	CKeyValues3Context KV3Data; // 338
	CKV3TransferLoadContext loadArchive; // 344
	CUtlString::CUtlString(); // 333
	CUtlBuffer::TellPut(); // 1597
	CUtlBuffer::Clear(); // 1602
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1600
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1597
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 1597
	CUtlBuffer::CopyBuffer(
			const CUtlBuffer& buffer);  // 336
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 353
	CUtlString::~CUtlString(); // 353
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimState>(CAnimState* pObj); // 344
		CSmartPtr<CAnimState, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimState> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 342
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<CStateMachineAnimNode>(
						CStateMachineAnimNode* pClassInstance,
						const KeyValues3* pNestedValue);  // 345
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 89
	CKV3TransferContextBase::GetErrorMessage(); // 348
} /* size: 620, variables: 4, inline expansions: 22 (753 bytes) */

// <01288BB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:356
// variable: 1
// function calls: 8
void CStateMachineAnimNode::GetState(AnimStateID id)
{
	{
		int i; // 358
		Count(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this); // 358
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
				int i);  // 360
		CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 360
		AnimStateID::operator==(
				const AnimStateID& rhs);  // 360
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
				int i);  // 362
		CSmartPtr<CAnimState, CRefCountAccessor>::Get(); // 362
	}
} /* size: 147 */

// <01288B87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:370
// variable: 1
void CStateMachineAnimNode::GetState(AnimStateID id)
{
	{
		int i; // 372
	}
} /* size: 0 */

// <0129F27F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:384
// variable: 1
// function calls: 5
void CStateMachineAnimNode::GetIndexOfState(AnimStateID id)
{
	{
		int i; // 386
		Count(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this); // 386
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
				int i);  // 388
		CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 388
		AnimStateID::operator==(
				const AnimStateID& rhs);  // 388
	}
} /* size: 0 */

// <01288B45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:384
// variable: 1
void CStateMachineAnimNode::GetIndexOfState(AnimStateID id)
{
	{
		int i; // 386
	}
} /* size: 0 */

// <012889EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:398
// variable: 1
// function calls: 4
void CStateMachineAnimNode::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	{
		int i; // 400
		Count(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this); // 400
		CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
				int i);  // 402
		CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 402
	}
} /* size: 81 */

// <0129C02D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:407
// function calls: 3
void CStateMachineAnimNode::GetStateID(int index)
{
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, this,
			int i);  // 409
	CSmartPtr<CAnimState, CRefCountAccessor>::operator->(); // 409
} /* size: 75, inline expansions: 3 (14 bytes) */

// <012889C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:407
void CStateMachineAnimNode::GetStateID(int index)
{
} /* size: 0 */

// <01288897> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:412
// variable: 1
// function calls: 3
void CStateMachineAnimNode::CreateStateID()
{
	AnimStateID newID; // 414
	AnimStateID::AnimStateID(); // 414
	AnimStateID::operator=(
			uint32 id);  // 418
	AnimStateID::AnimStateID(
			const AnimStateID& rhs);  // 420
} /* size: 153, variables: 1, inline expansions: 3 (23 bytes) */

// <01287E89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:425
// variable: 1
// function calls: 48
void CStateMachineAnimNode::MoveStateToIndex(int oldIndex, int newIndex)
{
	CAnimStatePtr state; // 427
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int i);  // 427
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimState>(CAnimState* pObj); // 366
	CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
			CAnimState* pObj);  // 406
	CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimState, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 427
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::NumAllocated(); // 782
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int> this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int num);  // 1223
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
		int i);  // 1097
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	ShiftElementsRight(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
				int elem,
				int num);  // 1224
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
		int i);  // 1225
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimState>(CAnimState* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimState>(CAnimState* pObj); // 370
	CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
			CAnimState* pObj);  // 406
	CSmartPtr<CAnimState, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimState, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimState, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimState> >(CSmartPtr<CAnimState, CRefCountAccessor>* pMemory,
						const CSmartPtr<CAnimState, CRefCountAccessor>& src);  // 1225
	InsertBefore(const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int elem,
			const CSmartPtr<CAnimState, CRefCountAccessor>& src);  // 429
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimState>(CAnimState* pObj); // 344
	CSmartPtr<CAnimState, CRefCountAccessor>::~CSmartPtr(); // 430
} /* size: 275, variables: 1, inline expansions: 48 (905 bytes) */

