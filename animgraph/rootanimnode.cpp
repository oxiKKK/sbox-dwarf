
//
// animgraph/rootanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//

// <011982C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <01193701> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10
void CRootAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0116F964> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10
// function calls: 3
void* CRootAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CRootAnimNode>::CastTo(
		CRootAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0116F7D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:10
// function calls: 3
const void* CRootAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CRootAnimNode>::CastTo(
		const CRootAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0116F6A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:17
// function calls: 3
void CRootAnimNode::CRootAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 18
} /* size: 71, inline expansions: 3 (16 bytes) */

// <0116F68A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:17
void CRootAnimNode::CRootAnimNode()
{
} /* size: 0 */

// <0116F672> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:24
void CRootAnimNode::IsRootNode()
{
} /* size: 0 */

// <0116F65A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:30
void CRootAnimNode::GetChildCount()
{
} /* size: 0 */

// <0116F636> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:36
void CRootAnimNode::GetChild(int index)
{
} /* size: 0 */

// <0116F619> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:42
void CRootAnimNode::GetChildID(int)
{
} /* size: 0 */

// <0116F5F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:48
void CRootAnimNode::SetChildID(int, AnimNodeID nodeID)
{
} /* size: 0 */

// <0116F5CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:54
void CRootAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0116F59C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:60
void CRootAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <01195A27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:66
// function calls: 2
void CRootAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(
			const char* pString);  // 68
	CRootAnimNode::GetChildName(
			int);  // 66
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0116F568> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:66
// variable: 1
void CRootAnimNode::GetChildName(int)
{
	const CUtlString  sRootChildString; // 68
} /* size: 0, variables: 1 */

// <0116F550> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:73
void CRootAnimNode::GetParentCount()
{
} /* size: 0 */

// <0116F302> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootanimnode.cpp:79
// variables: 3
// function calls: 5
void CRootAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CRootUpdateNode> hNodeHandle; // 81
	CRootUpdateNode* pNode; // 83
	const CAnimUpdateNodeBase* childUpdateNode; // 85
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CRootUpdateNode>::CPackedHandle(); // 81
	CPackedDataT<false>::AddItem<CRootUpdateNode, CAnimGraphInitContext&>(
							CPackedHandle<CRootUpdateNode>* handleOut);  // 83
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 85
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 85
} /* size: 158, variables: 3, inline expansions: 5 (46 bytes) */

