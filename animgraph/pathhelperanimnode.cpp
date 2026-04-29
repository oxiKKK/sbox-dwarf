
//
// animgraph/pathhelperanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <011982AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <011936D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10
void CPathHelperAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01170265> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10
// function calls: 3
void* CPathHelperAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CPathHelperAnimNode>::CastTo(
		CPathHelperAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <011700D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:10
// function calls: 3
const void* CPathHelperAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CPathHelperAnimNode>::CastTo(
		const CPathHelperAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0116FFA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:19
// function calls: 3
void CPathHelperAnimNode::CPathHelperAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 20
} /* size: 82, inline expansions: 3 (16 bytes) */

// <0116FF8B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:19
void CPathHelperAnimNode::CPathHelperAnimNode()
{
} /* size: 0 */

// <0116FF73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:26
void CPathHelperAnimNode::GetChildCount()
{
} /* size: 0 */

// <0116FF4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:32
void CPathHelperAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0116FF2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:38
void CPathHelperAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0116FEFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:44
void CPathHelperAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <011958EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:50
// function calls: 2
void CPathHelperAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 52
	CPathHelperAnimNode::GetChildName(
			int childIndex);  // 50
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0116FEC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:50
// variable: 1
void CPathHelperAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 52
} /* size: 0, variables: 1 */

// <0116FE9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:58
void CPathHelperAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0116FE6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:64
void CPathHelperAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0116FBB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperanimnode.cpp:70
// variables: 3
// function calls: 7
void CPathHelperAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CPathHelperUpdateNode> hNodeHandle; // 72
	CPathHelperUpdateNode* pNode; // 74
	const CAnimUpdateNodeBase* childUpdateNode; // 78
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CPathHelperUpdateNode>::CPackedHandle(); // 72
	CPackedDataT<false>::AddItem<CPathHelperUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CPathHelperUpdateNode>* handleOut);  // 74
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 78
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 78
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 81
} /* size: 180, variables: 3, inline expansions: 7 (66 bytes) */

