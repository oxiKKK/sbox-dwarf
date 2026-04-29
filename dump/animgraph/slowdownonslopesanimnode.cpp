
//
// animgraph/slowdownonslopesanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0129F165> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129BD08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11
void CSlowDownOnSlopesAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01294FA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11
// function calls: 3
void* CSlowDownOnSlopesAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSlowDownOnSlopesAnimNode>::CastTo(
		CSlowDownOnSlopesAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01294E15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:11
// function calls: 3
const void* CSlowDownOnSlopesAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSlowDownOnSlopesAnimNode>::CastTo(
		const CSlowDownOnSlopesAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01294CB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:20
// function calls: 3
void CSlowDownOnSlopesAnimNode::CSlowDownOnSlopesAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 21
} /* size: 78, inline expansions: 3 (16 bytes) */

// <01294C9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:20
void CSlowDownOnSlopesAnimNode::CSlowDownOnSlopesAnimNode()
{
} /* size: 0 */

// <01294C6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:27
void CSlowDownOnSlopesAnimNode::GetChildCount()
{
} /* size: 10 */

// <01294B7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:33
// function calls: 2
void CSlowDownOnSlopesAnimNode::GetChild(int childIndex)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 35
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 35
} /* size: 78, inline expansions: 2 (9 bytes) */

// <01294B0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:39
// function call: 1
void CSlowDownOnSlopesAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 41
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01294A81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:45
// function call: 1
void CSlowDownOnSlopesAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 47
} /* size: 10, inline expansions: 1 (5 bytes) */

// <0129C7AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:51
// function calls: 2
void CSlowDownOnSlopesAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 53
	CSlowDownOnSlopesAnimNode::GetChildName(
			int childIndex);  // 51
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01294A45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:51
// variable: 1
void CSlowDownOnSlopesAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 53
} /* size: 0, variables: 1 */

// <012949D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:59
// function call: 1
void CSlowDownOnSlopesAnimNode::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 61
} /* size: 13, inline expansions: 1 (5 bytes) */

// <012948A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:65
// function calls: 3
void CSlowDownOnSlopesAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 67
} /* size: 16, inline expansions: 3 (22 bytes) */

// <012945F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesanimnode.cpp:71
// variables: 3
// function calls: 7
void CSlowDownOnSlopesAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CSlowDownOnSlopesUpdateNode> hNodeHandle; // 73
	CSlowDownOnSlopesUpdateNode* pNode; // 75
	const CAnimUpdateNodeBase* pChildUpdateNode; // 77
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSlowDownOnSlopesUpdateNode>::CPackedHandle(); // 73
	CPackedDataT<false>::AddItem<CSlowDownOnSlopesUpdateNode, CAnimGraphInitContext&>(
									CPackedHandle<CSlowDownOnSlopesUpdateNode>* handleOut);  // 75
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 77
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 77
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 80
} /* size: 173, variables: 3, inline expansions: 7 (72 bytes) */

