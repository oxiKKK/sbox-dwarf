
//
// animgraph/footsteptriggeranimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//

// <01197F80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <01192C4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:8
void CFootStepTriggerAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01190260> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:8
// function calls: 3
void* CFootStepTriggerAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFootStepTriggerAnimNode>::CastTo(
		CFootStepTriggerAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <011900CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:8
// function calls: 3
const void* CFootStepTriggerAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFootStepTriggerAnimNode>::CastTo(
		const CFootStepTriggerAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01197F9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:20
// variable: 1
// function calls: 4
void GetItemName(void* pClassInstance, CUtlString* pOutElementName)
{
	CFootStepTriggerItem* pItem; // 22
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 23
} /* size: 86, variables: 1, inline expansions: 4 (107 bytes) */

// <0118FF57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:20
// variable: 1
void GetItemName(void* pClassInstance, CUtlString* pOutElementName)
{
	CFootStepTriggerItem* pItem; // 22
} /* size: 0, variables: 1 */

// <0118FC6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:29
// function calls: 8
void CFootStepTriggerAnimNode::CFootStepTriggerAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 30
	CUtlMemory<CFootStepTriggerItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFootStepTriggerItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFootStepTriggerItem, CUtlMemory<CFootStepTriggerItem, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFootStepTriggerItem, CUtlMemory<CFootStepTriggerItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CFootStepTriggerItem, CUtlMemory<CFootStepTriggerItem, int> >::CUtlVector(); // 30
} /* size: 110, inline expansions: 8 (96 bytes) */

// <0118FC55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:29
void CFootStepTriggerAnimNode::CFootStepTriggerAnimNode()
{
} /* size: 0 */

// <0118FC27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:38
void CFootStepTriggerAnimNode::GetChildCount()
{
} /* size: 10 */

// <0118FB38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:46
// function calls: 2
void CFootStepTriggerAnimNode::GetChild(int childIndex)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 48
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 48
} /* size: 78, inline expansions: 2 (9 bytes) */

// <0118FAC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:54
// function call: 1
void CFootStepTriggerAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 56
} /* size: 13, inline expansions: 1 (5 bytes) */

// <0118FA3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:62
// function call: 1
void CFootStepTriggerAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 64
} /* size: 10, inline expansions: 1 (5 bytes) */

// <011952CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:70
// function calls: 2
void CFootStepTriggerAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 72
	CFootStepTriggerAnimNode::GetChildName(
			int childIndex);  // 70
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0118FA00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:70
// variable: 1
void CFootStepTriggerAnimNode::GetChildName(int childIndex)
{
	CUtlString sChildName; // 72
} /* size: 0, variables: 1 */

// <0118F98D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:77
// function call: 1
void CFootStepTriggerAnimNode::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 79
} /* size: 13, inline expansions: 1 (5 bytes) */

// <0118F864> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:83
// function calls: 3
void CFootStepTriggerAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 85
} /* size: 16, inline expansions: 3 (22 bytes) */

// <0118EBCC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:91
// variables: 11
// function calls: 43
void CFootStepTriggerAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CFootStepTriggerUpdateNode* pNode; // 93
	const CAnimUpdateNodeBase* childUpdateNode; // 95
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > footDefinitions; // 103
	{
		int i; // 105
		{
			const CFootStepTriggerItem& srcItem; // 107
			FootStepTrigger& dstItem; // 108
			const int  nTagCount; // 112
			{
				int iTag; // 117
				CUtlMemory<AnimTagID, int>::operator[](
						int i);  // 595
				CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::operator[](
						int i);  // 119
				AnimTagID::AnimTagID(
						const AnimTagID& rhs);  // 119
				{
				}
				CRelativeOffset<int>::IsValid(); // 30
				CRelativeOffset<int>::Get(); // 90
				CRelativeArray<int>::operator[](
						int index);  // 119
			}
			{
				int iFoot; // 123
				CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Count(); // 123
				CUtlMemory<CFootDefinition, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
						int i);  // 125
			}
			CUtlMemory<CFootStepTriggerItem, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CFootStepTriggerItem, CUtlMemory<CFootStepTriggerItem, int> >::operator[](
					int i);  // 107
			{
			}
			CRelativeOffset<FootStepTrigger>::IsValid(); // 30
			CRelativeOffset<FootStepTrigger>::Get(); // 90
			CRelativeArray<FootStepTrigger>::operator[](
					int index);  // 108
			CUtlVectorBase<AnimTagID, CUtlMemory<AnimTagID, int> >::Count(); // 112
			{
				uint32 i; // 160
			}
			CPackedDataT<false>::AddArray<int>(
					uint32 count,
					CPackedHandle<int>* handleOut);  // 115
			CRelativeOffset<int>::SetOffset(
					const int* targetPtr);  // 20
			CRelativeOffset<int>::operator=(
					const int* targetPtr);  // 115
			CRelativeArray<int>::SetArray(
				const int* targetArray,
				int32 count);  // 115
		}
		CUtlVectorBase<CFootStepTriggerItem, CUtlMemory<CFootStepTriggerItem, int> >::Count(); // 105
	}
	CUtlVectorBase<CFootStepTriggerItem, CUtlMemory<CFootStepTriggerItem, int> >::Count(); // 93
	CPackedDataT<false>::AddItem<CFootStepTriggerUpdateNode, CAnimGraphInitContext&, int>(
									CPackedHandle<CFootStepTriggerUpdateNode>* handleOut);  // 93
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 95
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 95
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 98
	{
		int i; // 1721
		CUtlMemory<CFootDefinition, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 14
		CUtlString::~CUtlString(); // 14
		CUtlString::~CUtlString(); // 14
		CFootDefinition::~CFootDefinition(); // 1526
		Destruct<CFootDefinition>(CFootDefinition* pMemory); // 1723
	}
	CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::RemoveAll(); // 1798
	CUtlMemory<CFootDefinition, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFootDefinition, int>::Purge(); // 903
	CUtlMemory<CFootDefinition, int>::Purge(); // 1799
	CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Purge(); // 560
	ValidateAlignment<CFootDefinition>(void); // 508
	CUtlMemory<CFootDefinition, int>::Purge(); // 510
	CUtlMemory<CFootDefinition, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVector(); // 133
} /* size: 0, variables: 3, inline expansions: 16 (604 bytes) */

