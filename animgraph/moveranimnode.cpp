
//
// animgraph/moveranimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0119828C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <011936AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11
void CMoverAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01170C86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11
// function calls: 3
void* CMoverAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CMoverAnimNode>::CastTo(
		CMoverAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01170AF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:11
// function calls: 3
const void* CMoverAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CMoverAnimNode>::CastTo(
		const CMoverAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01170975> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:20
// function calls: 4
void CMoverAnimNode::CMoverAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 21
	AnimParamID::AnimParamID(); // 21
} /* size: 98, inline expansions: 4 (16 bytes) */

// <0117095C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:20
void CMoverAnimNode::CMoverAnimNode()
{
} /* size: 0 */

// <01170944> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:27
void CMoverAnimNode::GetChildCount()
{
} /* size: 0 */

// <01170920> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:33
void CMoverAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <011708FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:39
void CMoverAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <011708CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:45
void CMoverAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <011957AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:51
// function calls: 2
void CMoverAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 53
	CMoverAnimNode::GetChildName(
			int childIndex);  // 51
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01170891> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:51
// variable: 1
void CMoverAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 53
} /* size: 0, variables: 1 */

// <0117086D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:59
void CMoverAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0117083D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:65
void CMoverAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <011704B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/moveranimnode.cpp:71
// variables: 3
// function calls: 10
void CMoverAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CMoverUpdateNode> hNodeHandle; // 73
	CMoverUpdateNode* pNode; // 75
	const CAnimUpdateNodeBase* childUpdateNode; // 77
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CMoverUpdateNode>::CPackedHandle(); // 73
	CPackedDataT<false>::AddItem<CMoverUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CMoverUpdateNode>* handleOut);  // 75
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 77
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 77
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 80
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 83
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 85
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 85
} /* size: 332, variables: 3, inline expansions: 10 (152 bytes) */

