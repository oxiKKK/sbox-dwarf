
//
// animgraph/stopatgoalanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0129F41F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129C172> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9
void CStopAtGoalAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01286E43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9
// function calls: 3
void* CStopAtGoalAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CStopAtGoalAnimNode>::CastTo(
		CStopAtGoalAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01286CAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:9
// function calls: 3
const void* CStopAtGoalAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CStopAtGoalAnimNode>::CastTo(
		const CStopAtGoalAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01286B65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:18
// function calls: 3
void CStopAtGoalAnimNode::CStopAtGoalAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 19
} /* size: 94, inline expansions: 3 (16 bytes) */

// <01286B4C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:18
void CStopAtGoalAnimNode::CStopAtGoalAnimNode()
{
} /* size: 0 */

// <01286B34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:25
void CStopAtGoalAnimNode::GetChildCount()
{
} /* size: 0 */

// <01286B10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:31
void CStopAtGoalAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <01286AEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:37
void CStopAtGoalAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <01286ABC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:43
void CStopAtGoalAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <0129CA27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:49
// function calls: 2
void CStopAtGoalAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 51
	CStopAtGoalAnimNode::GetChildName(
			int childIndex);  // 49
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01286A80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:49
// variable: 1
void CStopAtGoalAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 51
} /* size: 0, variables: 1 */

// <01286A5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:56
void CStopAtGoalAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <01286A2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:62
void CStopAtGoalAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <01286779> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalanimnode.cpp:68
// variables: 2
// function calls: 6
void CStopAtGoalAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CStopAtGoalUpdateNode* pNode; // 70
	const CAnimUpdateNodeBase* childUpdateNode; // 77
	CPackedDataT<false>::AddItem<CStopAtGoalUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CStopAtGoalUpdateNode>* handleOut);  // 70
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 75
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 77
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 77
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 80
} /* size: 276, variables: 2, inline expansions: 6 (136 bytes) */

