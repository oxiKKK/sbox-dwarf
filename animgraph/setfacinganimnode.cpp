
//
// animgraph/setfacinganimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <0119839A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <01193E71> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9
void CSetFacingAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01168E5B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9
// function calls: 3
void* CSetFacingAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSetFacingAnimNode>::CastTo(
		CSetFacingAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01168CC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:9
// function calls: 3
const void* CSetFacingAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSetFacingAnimNode>::CastTo(
		const CSetFacingAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01168B9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:19
// function calls: 3
void CSetFacingAnimNode::CSetFacingAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 20
} /* size: 82, inline expansions: 3 (16 bytes) */

// <01168B81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:19
void CSetFacingAnimNode::CSetFacingAnimNode()
{
} /* size: 0 */

// <011685DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:26
// variables: 5
// function calls: 21
void CSetFacingAnimNode::GetUIName()
{
	{
		CSchemaType_DeclaredEnum* pEnum; // 30
		EnumIntrospectionHandle_t pEnumInfo; // 31
		EnumeratorIntrospectionHandle_t pEnumeratorInfo; // 32
		const char* pName; // 34
		const char* pFriendlyName; // 36
		SchemaTypeScope(void); // 23
		Get(ISchemaSystemTypeScope* pTypeScope); // 23
		SchemaTypeOf<FacingMode>(void); // 30
		CSchemaType::InternalAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 125
		CSchemaType::As<CSchemaType_DeclaredEnum>(); // 30
		CUtlString::Get(); // 72
		CSchemaType::GetName(); // 744
		CSchemaType_DeclaredEnum::LookupEnum(); // 740
		CSchemaType_DeclaredEnum::LookupEnum(); // 709
		CSchemaType_DeclaredEnum::GetEnum(); // 31
		CSchemaEnumeratorInfo::GetName(); // 34
		CSchemaMetadataSet::CSchemaMetadataSet(
					uint16 nNumEntries,
					const SchemaMetadataEntryData_t* pEntries);  // 16
		CSchemaEnumeratorInfo::GetMetadata(); // 88
		SchemaMetaGetPtr2(EnumeratorIntrospectionHandle_t enumeratorInfo,
					const char* pKey);  // 26
		TagName(void); // 26
		GetPtr(EnumeratorIntrospectionHandle_t pObj); // 26
		GetValue(EnumeratorIntrospectionHandle_t pObj,
			const char* defaultValue);  // 36
		CUtlString::CUtlString(
				const char* pString);  // 42
		CUtlString::~CUtlString(); // 42
	}
	CUtlString::IsEmpty(); // 28
	operator==(const CUtlString& utlString,
			const char* pString);  // 28
} /* size: 0, inline expansions: 2 (32 bytes) */

// <011685C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:51
void CSetFacingAnimNode::GetChildCount()
{
} /* size: 0 */

// <011685A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:57
void CSetFacingAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0116857F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:63
void CSetFacingAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0116854F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:69
void CSetFacingAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <01195B5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:75
// function calls: 2
void CSetFacingAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 77
	CSetFacingAnimNode::GetChildName(
			int childIndex);  // 75
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01168514> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:75
// variable: 1
void CSetFacingAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 77
} /* size: 0, variables: 1 */

// <011684F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:83
void CSetFacingAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <011684C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:89
void CSetFacingAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <011681F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacinganimnode.cpp:95
// variables: 3
// function calls: 7
void CSetFacingAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CSetFacingUpdateNode> hNodeHandle; // 97
	CSetFacingUpdateNode* pNode; // 99
	const CAnimUpdateNodeBase* childUpdateNode; // 101
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSetFacingUpdateNode>::CPackedHandle(); // 97
	CPackedDataT<false>::AddItem<CSetFacingUpdateNode, CAnimGraphInitContext&, const FacingMode&, bool const&>(
												CPackedHandle<CSetFacingUpdateNode>* handleOut);  // 99
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 101
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 101
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 104
} /* size: 171, variables: 3, inline expansions: 7 (81 bytes) */

