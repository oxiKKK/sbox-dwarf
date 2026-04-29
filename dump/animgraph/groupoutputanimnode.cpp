
//
// animgraph/groupoutputanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 29
//

// <01198137> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <01193078> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8
void CGroupOutputAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01185F87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8
// function calls: 3
void* CGroupOutputAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CGroupOutputAnimNode>::CastTo(
		CGroupOutputAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01185DF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:8
// function calls: 3
const void* CGroupOutputAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CGroupOutputAnimNode>::CastTo(
		const CGroupOutputAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01185C46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:16
// function calls: 5
void CGroupOutputAnimNode::CGroupOutputAnimNode()
{
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CConnectionProxyItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CConnectionProxyItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::CUtlVector(); // 17
} /* size: 95, inline expansions: 5 (80 bytes) */

// <01185C2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:16
void CGroupOutputAnimNode::CGroupOutputAnimNode()
{
} /* size: 0 */

// <01185C15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:23
void CGroupOutputAnimNode::GetChildCount()
{
} /* size: 0 */

// <01185A6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:29
// function calls: 5
void CGroupOutputAnimNode::GetChild(int index)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 31
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 37
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 37
	CGroupOutputAnimNode::GetChildID(
			int index);  // 31
} /* size: 166, inline expansions: 5 (56 bytes) */

// <011930A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:35
// function calls: 3
void CGroupOutputAnimNode::GetChildID(int index)
{
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 37
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 37
} /* size: 28, inline expansions: 3 (23 bytes) */

// <01185A47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:35
void CGroupOutputAnimNode::GetChildID(int index)
{
} /* size: 0 */

// <0118595E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:41
// function calls: 3
void CGroupOutputAnimNode::SetChildID(int index, AnimNodeID nodeID)
{
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 43
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 43
} /* size: 25, inline expansions: 3 (23 bytes) */

// <0119316F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:47
// function calls: 3
void CGroupOutputAnimNode::GetChildOutputID(int index)
{
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 49
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 49
} /* size: 28, inline expansions: 3 (23 bytes) */

// <01185939> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:47
void CGroupOutputAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <011857AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:53
// function calls: 5
void CGroupOutputAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 55
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 55
} /* size: 31, inline expansions: 5 (52 bytes) */

// <01195E9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:59
// variable: 1
// function calls: 5
void CGroupOutputAnimNode::GetChildName(int index)
{
	const CUtlString& name; // 61
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 61
	CUtlString::IsEmpty(); // 63
	CUtlString::CUtlString(
			const char* pString);  // 68
	CGroupOutputAnimNode::GetChildName(
			int index);  // 59
} /* size: 166, variables: 1, inline expansions: 5 (170 bytes) */

// <01185767> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:59
// variables: 2
void CGroupOutputAnimNode::GetChildName(int index)
{
	const CUtlString& name; // 61
	const CUtlString  sDefaultString; // 68
} /* size: 0, variables: 2 */

// <0118574F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:73
void CGroupOutputAnimNode::GetParentCount()
{
} /* size: 0 */

// <01194CDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:79
// function calls: 2
void CGroupOutputAnimNode::GetParentName(int index)
{
	CUtlString::CUtlString(); // 81
	CGroupOutputAnimNode::GetParentName(
			int index);  // 79
} /* size: 130, inline expansions: 2 (64 bytes) */

// <01185714> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:79
// variable: 1
void CGroupOutputAnimNode::GetParentName(int index)
{
	const CUtlString  sEmptyString; // 81
} /* size: 0, variables: 1 */

// <011856F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:86
void CGroupOutputAnimNode::GetOutputID(int index)
{
} /* size: 0 */

// <01185657> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:92
// variable: 1
void CGroupOutputAnimNode::GetOutputIndex(AnimOutputID outputID)
{
	int index; // 94
} /* size: 0, variables: 1 */

// <01184EED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:104
// variables: 9
// function calls: 29
void CGroupOutputAnimNode::GetOutputNodeID(AnimOutputID outputID)
{
	AnimNodeID childID; // 106
	AnimOutputID childOutputID; // 109
	const char   __FUNCTION__; // 43254
	{
		CAnimNodeBase* pChild; // 112
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
		}
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 112
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 112
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 114
	}
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 106
	{
		int i; // 221
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Count(); // 221
		CUtlMemory<CConnectionProxyItem, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Element(
			int i);  // 223
		AnimOutputID::operator==(
				const AnimOutputID& rhs);  // 83
		operator()(const class* __closure,
				const CConnectionProxyItem& item); // 223
	}
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::FindMatching<CGroupInputAnimNode::GetOutputIndex(
															class& f);  // 83
	CGroupInputAnimNode::GetOutputIndex(
			AnimOutputID outputID);  // 106
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 37
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 37
	CGroupOutputAnimNode::GetChildID(
			int index);  // 106
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 109
	{
		int i; // 221
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Count(); // 221
		CUtlMemory<CConnectionProxyItem, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Element(
			int i);  // 223
		AnimOutputID::operator==(
				const AnimOutputID& rhs);  // 83
		operator()(const class* __closure,
				const CConnectionProxyItem& item); // 223
	}
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::FindMatching<CGroupInputAnimNode::GetOutputIndex(
															class& f);  // 83
	CGroupInputAnimNode::GetOutputIndex(
			AnimOutputID outputID);  // 109
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 49
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 49
	CGroupOutputAnimNode::GetChildOutputID(
			int index);  // 109
	AnimOutputID::IsValid(); // 110
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 122
} /* size: 0, variables: 3, inline expansions: 16 (506 bytes) */

// <01183B01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:126
// variables: 11
// function calls: 89
void CGroupOutputAnimNode::GetOutputNodeLocation(AnimOutputID outputID, const AnimNodePath& nodePath)
{
	AnimNodeID childID; // 128
	AnimOutputID childOutputID; // 136
	const char   __FUNCTION__; // 43406
	AnimNodeLocation_t nodeLocation; // 149
	{
		CAnimNodeBase* pChild; // 139
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 145
		}
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 139
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 139
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 141
	}
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 128
	{
		int i; // 221
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Count(); // 221
		CUtlMemory<CConnectionProxyItem, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Element(
			int i);  // 223
		AnimOutputID::operator==(
				const AnimOutputID& rhs);  // 83
		operator()(const class* __closure,
				const CConnectionProxyItem& item); // 223
	}
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::FindMatching<CGroupInputAnimNode::GetOutputIndex(
															class& f);  // 83
	CGroupInputAnimNode::GetOutputIndex(
			AnimOutputID outputID);  // 128
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 37
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 37
	CGroupOutputAnimNode::GetChildID(
			int index);  // 128
	AnimNodeID::IsValid(); // 130
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 136
	{
		int i; // 221
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Count(); // 221
		CUtlMemory<CConnectionProxyItem, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Element(
			int i);  // 223
		AnimOutputID::operator==(
				const AnimOutputID& rhs);  // 83
		operator()(const class* __closure,
				const CConnectionProxyItem& item); // 223
	}
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::FindMatching<CGroupInputAnimNode::GetOutputIndex(
															class& f);  // 83
	CGroupInputAnimNode::GetOutputIndex(
			AnimOutputID outputID);  // 136
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 49
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 49
	CGroupOutputAnimNode::GetChildOutputID(
			int index);  // 136
	AnimOutputID::IsValid(); // 137
	AnimNodeID::AnimNodeID(); // 20
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 20
	AnimNodeLocation_t::AnimNodeLocation_t(); // 132
	AnimNodeID::AnimNodeID(); // 20
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 20
	AnimNodeLocation_t::AnimNodeLocation_t(); // 149
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
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
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 150
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 151
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<AnimNodeID*>(AnimNodeID *& x,
					AnimNodeID *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<AnimNodeID, int>::Swap(
		CUtlMemory<AnimNodeID, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<AnimNodeID*>(AnimNodeID *& __a,
				AnimNodeID *& __b);  // 19
	V_swap<AnimNodeID*>(AnimNodeID *& x,
				AnimNodeID *& y);  // 1354
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Swap(
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& vec);  // 437
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 437
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
			CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 20
	AnimNodeLocation_t::AnimNodeLocation_t(
				AnimNodeLocation_t &);  // 153
	CUtlMemory<AnimNodeID, int>::Purge(); // 903
	CUtlMemory<AnimNodeID, int>::Purge(); // 1799
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
	ValidateAlignment<AnimNodeID>(void); // 508
	CUtlMemory<AnimNodeID, int>::Purge(); // 510
	CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
	AnimNodeLocation_t::~AnimNodeLocation_t(); // 154
} /* size: 0, variables: 4, inline expansions: 74 (2650 bytes) */

// <01183AE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:157
void CGroupOutputAnimNode::GetOutputCount()
{
} /* size: 0 */

// <01183AD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:163
void CGroupOutputAnimNode::HasOutputs()
{
} /* size: 0 */

// <01183A38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:169
// variables: 2
void CGroupOutputAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const char   __FUNCTION__; // 43281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 171
	}
} /* size: 38, variables: 1 */

// <0118366C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:176
// function calls: 18
void CGroupOutputAnimNode::AddProxyItem()
{
	CUtlMemory<CConnectionProxyItem, int>::NumAllocated(); // 1143
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 10
	AnimOutputID::AnimOutputID(); // 10
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 10
	CConnectionProxyItem::CConnectionProxyItem(); // 1479
	Construct<CConnectionProxyItem>(CConnectionProxyItem* pMemory); // 1148
	CUtlMemory<CConnectionProxyItem, int>::Base(); // 112
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Base(); // 368
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::AddToTail(); // 178
	CUtlString::operator=(
			const char* src);  // 178
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 178
} /* size: 138, inline expansions: 18 (262 bytes) */

// <01183321> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:184
// variables: 4
// function calls: 12
void CGroupOutputAnimNode::OnProxyItemsChanged()
{
	{
		int i; // 186
		{
			AnimOutputID newID; // 191
			CUtlMemory<CConnectionProxyItem, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
					int i);  // 188
			AnimOutputID::IsValid(); // 188
			{
				int i; // 221
				CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Count(); // 221
				AnimOutputID::operator==(
						const AnimOutputID& rhs);  // 198
				operator()(const class* __closure,
						const CConnectionProxyItem& item); // 223
			}
			CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::FindMatching<CGroupInputAnimNode::OnProxyItemsChanged(
															class& f);  // 236
			CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::HasElementMatching<CGroupInputAnimNode::OnProxyItemsChanged(
																class& f);  // 197
			CUtlMemory<CConnectionProxyItem, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
					int i);  // 199
			AnimOutputID::operator=(
					const AnimOutputID& rhs);  // 199
		}
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Count(); // 186
	}
} /* size: 200 */

// <011832C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupoutputanimnode.cpp:204
// variable: 1
void OnProxyItemsChanged(void* pThis)
{
	CGroupOutputAnimNode* pThisPtr; // 206
} /* size: 17, variables: 1 */

