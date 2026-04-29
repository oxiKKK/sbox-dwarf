
//
// animgraph/turnhelperanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0129F497> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129C487> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10
void CTurnHelperAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0127C08B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10
// function calls: 3
void* CTurnHelperAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CTurnHelperAnimNode>::CastTo(
		CTurnHelperAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0127BEF7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:10
// function calls: 3
const void* CTurnHelperAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CTurnHelperAnimNode>::CastTo(
		const CTurnHelperAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0127BD95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:19
// function calls: 4
void CTurnHelperAnimNode::CTurnHelperAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 20
	AnimParamID::AnimParamID(); // 20
} /* size: 102, inline expansions: 4 (24 bytes) */

// <0127BD7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:19
void CTurnHelperAnimNode::CTurnHelperAnimNode()
{
} /* size: 0 */

// <0127BD64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:26
void CTurnHelperAnimNode::GetChildCount()
{
} /* size: 0 */

// <0127BD40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:32
void CTurnHelperAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0127BD1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:38
void CTurnHelperAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0127BCEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:44
void CTurnHelperAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <0129CB65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:50
// function calls: 2
void CTurnHelperAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 52
	CTurnHelperAnimNode::GetChildName(
			int childIndex);  // 50
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0127BCB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:50
// variable: 1
void CTurnHelperAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 52
} /* size: 0, variables: 1 */

// <0127BC8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:58
void CTurnHelperAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0127BC5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:64
void CTurnHelperAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0127B90D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperanimnode.cpp:70
// variables: 3
// function calls: 9
void CTurnHelperAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CTurnHelperUpdateNode> hNodeHandle; // 72
	CTurnHelperUpdateNode* pNode; // 74
	const CAnimUpdateNodeBase* childUpdateNode; // 76
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CTurnHelperUpdateNode>::CPackedHandle(); // 72
	CPackedDataT<false>::AddItem<CTurnHelperUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CTurnHelperUpdateNode>* handleOut);  // 74
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 76
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 76
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 79
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 83
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 83
} /* size: 270, variables: 3, inline expansions: 9 (84 bytes) */

