
//
// animgraph/jiggleboneanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <011981AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <011932B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8
void CJiggleBoneAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <011811D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8
// function calls: 3
void* CJiggleBoneAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CJiggleBoneAnimNode>::CastTo(
		CJiggleBoneAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01181042> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:8
// function calls: 3
const void* CJiggleBoneAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CJiggleBoneAnimNode>::CastTo(
		const CJiggleBoneAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01180FAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:19
// variable: 1
void GetItemName(void* pClassInstance, CUtlString* pOutElementName)
{
	CJiggleBoneItem* pItem; // 21
} /* size: 0, variables: 1 */

// <01180DAD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:27
// function calls: 8
void CJiggleBoneAnimNode::CJiggleBoneAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 28
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CJiggleBoneItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CJiggleBoneItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::CUtlVector(); // 28
} /* size: 103, inline expansions: 8 (96 bytes) */

// <01180D94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:27
void CJiggleBoneAnimNode::CJiggleBoneAnimNode()
{
} /* size: 0 */

// <01180D7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:32
void CJiggleBoneAnimNode::GetChildCount()
{
} /* size: 0 */

// <01180D58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:38
void CJiggleBoneAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <01180D34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:44
void CJiggleBoneAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <01180D0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:50
void CJiggleBoneAnimNode::SetChildID(int, AnimNodeID nodeID)
{
} /* size: 0 */

// <0119553F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:56
// function calls: 2
void CJiggleBoneAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(
			const char* pString);  // 58
	CJiggleBoneAnimNode::GetChildName(
			int);  // 56
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01180CD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:56
// variable: 1
void CJiggleBoneAnimNode::GetChildName(int)
{
	const CUtlString  sRootChildString; // 58
} /* size: 0, variables: 1 */

// <01180CB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:63
void CJiggleBoneAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <01180C83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:69
void CJiggleBoneAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0118064E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneanimnode.cpp:75
// variables: 7
// function calls: 19
void CJiggleBoneAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const int  nItemCount; // 77
	CJiggleBoneUpdateNode* pNode; // 83
	const CAnimUpdateNodeBase* childUpdateNode; // 85
	JiggleBoneSettingsList_t& opFixedSettings; // 91
	{
		int i; // 93
		{
			const CJiggleBoneItem& currentItem; // 95
			JiggleBoneSettings_t& settings; // 96
			CUtlMemory<CJiggleBoneItem, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::operator[](
					int i);  // 95
			{
			}
			CRelativeOffset<JiggleBoneSettings_t>::IsValid(); // 30
			CRelativeOffset<JiggleBoneSettings_t>::Get(); // 90
			CRelativeArray<JiggleBoneSettings_t>::operator[](
					int index);  // 96
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 98
			Vector::operator=(
					const Vector& vOther);  // 113
			Vector::operator=(
					const Vector& vOther);  // 114
		}
	}
	CUtlVectorBase<CJiggleBoneItem, CUtlMemory<CJiggleBoneItem, int> >::Count(); // 77
	CUtlString::Get(); // 99
	CUtlString::String(); // 80
	CPackedDataT<false>::AddItem<CJiggleBoneUpdateNode, CAnimGraphInitContext&, int const&>(
										CPackedHandle<CJiggleBoneUpdateNode>* handleOut);  // 83
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 85
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 85
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 88
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<JiggleBoneSettingsList_t>(
						const CPackedHandle<JiggleBoneSettingsList_t>& handle);  // 91
} /* size: 0, variables: 4, inline expansions: 10 (137 bytes) */

