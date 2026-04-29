
//
// animgraph/groupinputanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 26
//

// <01198119> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <01192E8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9
void CGroupInputAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0118908F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9
// function calls: 3
void* CGroupInputAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CGroupInputAnimNode>::CastTo(
		CGroupInputAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01188EFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:9
// function calls: 3
const void* CGroupInputAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CGroupInputAnimNode>::CastTo(
		const CGroupInputAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01188D19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:17
// function calls: 5
void CGroupInputAnimNode::CGroupInputAnimNode()
{
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CConnectionProxyItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CConnectionProxyItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::CUtlVector(); // 18
} /* size: 95, inline expansions: 5 (80 bytes) */

// <01188D00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:17
void CGroupInputAnimNode::CGroupInputAnimNode()
{
} /* size: 0 */

// <01188CD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:24
void CGroupInputAnimNode::GetChildCount()
{
} /* size: 7 */

// <01188C95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:30
void CGroupInputAnimNode::GetChild(int index)
{
} /* size: 7 */

// <01188C34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:36
// function call: 1
void CGroupInputAnimNode::GetChildID(int index)
{
	AnimNodeID::AnimNodeID(); // 38
} /* size: 14, inline expansions: 1 (6 bytes) */

// <01188BE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:42
void CGroupInputAnimNode::SetChildID(int index, AnimNodeID nodeID)
{
} /* size: 5 */

// <01194BDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:48
// function calls: 2
void CGroupInputAnimNode::GetChildName(int index)
{
	CUtlString::CUtlString(); // 50
	CGroupInputAnimNode::GetChildName(
			int index);  // 48
} /* size: 130, inline expansions: 2 (64 bytes) */

// <01188BAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:48
// variable: 1
void CGroupInputAnimNode::GetChildName(int index)
{
	const CUtlString  sEmptyString; // 50
} /* size: 0, variables: 1 */

// <01188B4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:55
// function call: 1
void CGroupInputAnimNode::GetParentCount()
{
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Count(); // 57
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01195C9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:61
// variable: 1
// function calls: 5
void CGroupInputAnimNode::GetParentName(int index)
{
	const CUtlString& name; // 63
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 63
	CUtlString::IsEmpty(); // 65
	CUtlString::CUtlString(
			const char* pString);  // 70
	CGroupInputAnimNode::GetParentName(
			int index);  // 61
} /* size: 166, variables: 1, inline expansions: 5 (170 bytes) */

// <01188B07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:61
// variables: 2
void CGroupInputAnimNode::GetParentName(int index)
{
	const CUtlString& name; // 63
	const CUtlString  sDefaultString; // 70
} /* size: 0, variables: 2 */

// <01188A2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:75
// function calls: 3
void CGroupInputAnimNode::GetOutputID(int index)
{
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 77
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 77
} /* size: 28, inline expansions: 3 (23 bytes) */

// <01192EB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:81
// variables: 3
// function calls: 7
void CGroupInputAnimNode::GetOutputIndex(AnimOutputID outputID)
{
	int index; // 83
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 83
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
} /* size: 64, variables: 1, inline expansions: 2 (48 bytes) */

// <01188993> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:81
// variable: 1
void CGroupInputAnimNode::GetOutputIndex(AnimOutputID outputID)
{
	int index; // 83
} /* size: 0, variables: 1 */

// <0118897B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:93
void CGroupInputAnimNode::GetOutputCount()
{
} /* size: 0 */

// <01188963> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:99
void CGroupInputAnimNode::HasOutputs()
{
} /* size: 0 */

// <01188114> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:105
// variables: 10
// function calls: 31
void CGroupInputAnimNode::GetOutputNodeID(AnimOutputID outputID)
{
	const char   __FUNCTION__; // 43254
	{
		CAnimNodeBase* pGroupNode; // 107
		{
			AnimNodeID childID; // 109
			AnimOutputID childOutputID; // 112
			{
				CAnimNodeBase* pChild; // 115
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 121
				}
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 115
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 115
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 115
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 117
			}
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
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 112
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
					AnimOutputID outputID);  // 112
			AnimOutputID::IsValid(); // 113
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 125
		}
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 107
		AnimNodeID::AnimNodeID(); // 107
	}
	AnimNodeID::AnimNodeID(); // 128
} /* size: 0, variables: 1, inline expansions: 1 (16 bytes) */

// <01186946> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:132
// variables: 15
// function calls: 103
void CGroupInputAnimNode::GetOutputNodeLocation(AnimOutputID outputID, const AnimNodePath& nodePath)
{
	AnimNodeID groupID; // 134
	AnimNodeLocation_t nodeLocation; // 136
	const char   __FUNCTION__; // 43406
	{
		CAnimNodeBase* pGroupNode; // 141
		{
			AnimNodeID childID; // 143
			AnimOutputID childOutputID; // 146
			{
				CAnimNodeBase* pChild; // 149
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 155
				}
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 149
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 149
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 149
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 151
			}
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 143
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
					AnimOutputID outputID);  // 143
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 146
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
					AnimOutputID outputID);  // 146
			AnimOutputID::IsValid(); // 147
			AnimNodeID::operator=(
					const AnimNodeID& rhs);  // 159
			CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 535
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
						AnimNodeLocation_t &);  // 161
		}
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 141
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
	CUtlMemory<AnimNodeID, int>::operator[](
			int i);  // 637
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Tail(); // 134
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<AnimNodeID, int>::Base(); // 112
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 368
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
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 137
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 134
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
	AnimNodeLocation_t::AnimNodeLocation_t(); // 136
	{
		int i; // 1696
	}
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveMultipleFromTail(
				int num);  // 138
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 139
	CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimNodeID, int>::Purge(); // 903
	CUtlMemory<AnimNodeID, int>::Purge(); // 1799
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
	ValidateAlignment<AnimNodeID>(void); // 508
	CUtlMemory<AnimNodeID, int>::Purge(); // 510
	CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
	AnimNodeLocation_t::~AnimNodeLocation_t(); // 167
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
	AnimNodeLocation_t::AnimNodeLocation_t(); // 166
} /* size: 0, variables: 3, inline expansions: 53 (1509 bytes) */

// <011868AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:170
// variables: 2
void CGroupInputAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const char   __FUNCTION__; // 43281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
} /* size: 38, variables: 1 */

// <011864E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:177
// function calls: 18
void CGroupInputAnimNode::AddProxyItem()
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
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::AddToTail(); // 179
	CUtlString::operator=(
			const char* src);  // 179
	CUtlMemory<CConnectionProxyItem, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
			int i);  // 179
} /* size: 138, inline expansions: 18 (262 bytes) */

// <01186196> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:185
// variables: 4
// function calls: 12
void CGroupInputAnimNode::OnProxyItemsChanged()
{
	{
		int i; // 187
		{
			AnimOutputID newID; // 192
			CUtlMemory<CConnectionProxyItem, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
					int i);  // 189
			AnimOutputID::IsValid(); // 189
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
																class& f);  // 198
			CUtlMemory<CConnectionProxyItem, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::operator[](
					int i);  // 200
			AnimOutputID::operator=(
					const AnimOutputID& rhs);  // 200
		}
		CUtlVectorBase<CConnectionProxyItem, CUtlMemory<CConnectionProxyItem, int> >::Count(); // 187
	}
} /* size: 200 */

// <01186139> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupinputanimnode.cpp:205
// variable: 1
void OnProxyItemsChanged(void* pThis)
{
	CGroupInputAnimNode* pThisPtr; // 207
} /* size: 17, variables: 1 */

