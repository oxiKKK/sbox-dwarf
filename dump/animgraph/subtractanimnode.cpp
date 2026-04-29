
//
// animgraph/subtractanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//

// <0129F479> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129C3E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11
void CSubtractAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0127D014> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11
// function calls: 3
void* CSubtractAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSubtractAnimNode>::CastTo(
		CSubtractAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0127CE80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:11
// function calls: 3
const void* CSubtractAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSubtractAnimNode>::CastTo(
		const CSubtractAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0127CCBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:20
// function calls: 6
void CSubtractAnimNode::CSubtractAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 21
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 21
} /* size: 99, inline expansions: 6 (16 bytes) */

// <0127CCA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:20
void CSubtractAnimNode::CSubtractAnimNode()
{
} /* size: 0 */

// <0127CC73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:27
void CSubtractAnimNode::GetChildCount()
{
} /* size: 10 */

// <0127CB25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:33
// function calls: 3
void CSubtractAnimNode::GetChild(int childIndex)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 35
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 41
	CSubtractAnimNode::GetChildID(
			int childIndex);  // 35
} /* size: 166, inline expansions: 3 (36 bytes) */

// <0129C40D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:39
// function call: 1
void CSubtractAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 41
} /* size: 28, inline expansions: 1 (4 bytes) */

// <0127CB00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:39
void CSubtractAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0127CA41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:45
// function calls: 2
void CSubtractAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 49
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 53
} /* size: 20, inline expansions: 2 (11 bytes) */

// <0127C828> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:58
// variables: 2
// function calls: 2
void CSubtractAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 60
	CUtlString kAddName; // 61
	CUtlString::CUtlString(
			const char* pString);  // 60
	CUtlString::CUtlString(
			const char* pString);  // 61
} /* size: 253, variables: 2, inline expansions: 2 (60 bytes) */

// <0127C7A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:67
// function call: 1
void CSubtractAnimNode::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 69
} /* size: 28, inline expansions: 1 (4 bytes) */

// <0129CDE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:73
// function calls: 7
void CSubtractAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 77
	CSubtractAnimNode::SetInputConnection(
				int index,
				CNodeConnection connection);  // 73
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 81
} /* size: 34, inline expansions: 7 (56 bytes) */

// <0127C772> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:73
void CSubtractAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0127C33B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:86
// variables: 4
// function calls: 11
void CSubtractAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CSubtractUpdateNode> hNodeHandle; // 88
	CSubtractUpdateNode* pNode; // 90
	const CAnimUpdateNodeBase* baseChildUpdateNode; // 99
	const CAnimUpdateNodeBase* subChildUpdateNode; // 109
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSubtractUpdateNode>::CPackedHandle(); // 88
	CPackedDataT<false>::AddItem<CSubtractUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CSubtractUpdateNode>* handleOut);  // 90
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 99
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 99
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 102
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 109
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 109
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 112
} /* size: 347, variables: 4, inline expansions: 11 (104 bytes) */

// <0127C324> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:124
void RefreshUICallback(void* pThis)
{
} /* size: 0 */

// <0127C2E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractanimnode.cpp:130
// variable: 1
void TimingBlendParamFilter(void* pThis)
{
	CSubtractAnimNode* pThisPtr; // 132
} /* size: 16, variables: 1 */

