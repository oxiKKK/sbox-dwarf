
//
// animgraph/followpathanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <010955FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <01090978> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9
void CFollowPathAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0106D978> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9
// function calls: 3
void* CFollowPathAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFollowPathAnimNode>::CastTo(
		CFollowPathAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0106D7E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:9
// function calls: 3
const void* CFollowPathAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFollowPathAnimNode>::CastTo(
		const CFollowPathAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0106D4FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:18
// function calls: 14
void CFollowPathAnimNode::CFollowPathAnimNode()
{
	CUtlString::CUtlString(
			const char* pString);  // 19
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 19
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 19
	Object::Object(); // 30
	IAnimNode::IAnimNode(); // 19
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 19
	AnimNodeID::AnimNodeID(); // 19
	CUtlString::CUtlString(); // 19
	CAnimNodeBase::CAnimNodeBase(); // 19
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 19
	AnimParamID::AnimParamID(); // 19
} /* size: 219, inline expansions: 14 (191 bytes) */

// <0106D4E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:18
void CFollowPathAnimNode::CFollowPathAnimNode()
{
} /* size: 0 */

// <0106D4CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:25
void CFollowPathAnimNode::GetChildCount()
{
} /* size: 0 */

// <0106D4AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:31
void CFollowPathAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0106D486> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:37
void CFollowPathAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0106D456> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:43
void CFollowPathAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <01093209> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:49
// function calls: 2
void CFollowPathAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 51
	CFollowPathAnimNode::GetChildName(
			int childIndex);  // 49
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0106D41B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:49
// variable: 1
void CFollowPathAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 51
} /* size: 0, variables: 1 */

// <0106D3F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:57
void CFollowPathAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0106D3C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:63
void CFollowPathAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0106D02B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followpathanimnode.cpp:69
// variables: 3
// function calls: 10
void CFollowPathAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CFollowPathUpdateNode> hNodeHandle; // 71
	CFollowPathUpdateNode* pNode; // 73
	const CAnimUpdateNodeBase* childUpdateNode; // 75
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CFollowPathUpdateNode>::CPackedHandle(); // 71
	CPackedDataT<false>::AddItem<CFollowPathUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CFollowPathUpdateNode>* handleOut);  // 73
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 75
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 75
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 78
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 91
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 93
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 93
} /* size: 404, variables: 3, inline expansions: 10 (164 bytes) */

