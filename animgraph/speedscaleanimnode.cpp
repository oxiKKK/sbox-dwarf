
//
// animgraph/speedscaleanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <0129F225> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129BEB7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13
void CSpeedScaleAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0128F2CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13
// function calls: 3
void* CSpeedScaleAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSpeedScaleAnimNode>::CastTo(
		CSpeedScaleAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0128F136> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:13
// function calls: 3
const void* CSpeedScaleAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSpeedScaleAnimNode>::CastTo(
		const CSpeedScaleAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0128EFE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:24
// function calls: 4
void CSpeedScaleAnimNode::CSpeedScaleAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 25
	AnimParamID::AnimParamID(); // 25
} /* size: 78, inline expansions: 4 (23 bytes) */

// <0128EFC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:24
void CSpeedScaleAnimNode::CSpeedScaleAnimNode()
{
} /* size: 0 */

// <0128EFAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:31
void CSpeedScaleAnimNode::GetChildCount()
{
} /* size: 0 */

// <0128EF8B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:37
void CSpeedScaleAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0128EF67> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:43
void CSpeedScaleAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0128EF37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:49
void CSpeedScaleAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <0128EEFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:55
void CSpeedScaleAnimNode::GetChildName(int childIndex)
{
} /* size: 12 */

// <0128EED6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:61
void CSpeedScaleAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0128EEA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:67
void CSpeedScaleAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0128EB11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleanimnode.cpp:73
// variables: 3
// function calls: 10
void CSpeedScaleAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CSpeedScaleUpdateNode> hNodeHandle; // 75
	CSpeedScaleUpdateNode* pNode; // 77
	const CAnimUpdateNodeBase* childUpdateNode; // 79
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSpeedScaleUpdateNode>::CPackedHandle(); // 75
	CPackedDataT<false>::AddItem<CSpeedScaleUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CSpeedScaleUpdateNode>* handleOut);  // 77
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 79
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 79
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 82
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 85
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 85
	CAnimParamHandle::IsValid(); // 87
} /* size: 242, variables: 3, inline expansions: 10 (103 bytes) */

