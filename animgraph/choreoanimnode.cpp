
//
// animgraph/choreoanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <010954C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <01090603> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9
void CChoreoAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01074AAD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9
// function calls: 3
void* CChoreoAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CChoreoAnimNode>::CastTo(
		CChoreoAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0107491A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:9
// function calls: 3
const void* CChoreoAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CChoreoAnimNode>::CastTo(
		const CChoreoAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01074684> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:18
// function calls: 13
void CChoreoAnimNode::CChoreoAnimNode()
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
} /* size: 154, inline expansions: 13 (191 bytes) */

// <0107466B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:18
void CChoreoAnimNode::CChoreoAnimNode()
{
} /* size: 0 */

// <01074653> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:25
void CChoreoAnimNode::GetChildCount()
{
} /* size: 0 */

// <0107452C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:31
// function calls: 3
void CChoreoAnimNode::GetChild(int childIndex)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 33
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 39
	CChoreoAnimNode::GetChildID(
			int childIndex);  // 33
} /* size: 133, inline expansions: 3 (37 bytes) */

// <0109062C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:37
// function call: 1
void CChoreoAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 39
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01074507> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:37
void CChoreoAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0107447D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:43
// function call: 1
void CChoreoAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 45
} /* size: 10, inline expansions: 1 (5 bytes) */

// <01092E58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:49
// function calls: 2
void CChoreoAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 51
	CChoreoAnimNode::GetChildName(
			int childIndex);  // 49
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01074442> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:49
// variable: 1
void CChoreoAnimNode::GetChildName(int childIndex)
{
	CUtlString kName; // 51
} /* size: 0, variables: 1 */

// <010743CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:57
// function call: 1
void CChoreoAnimNode::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 59
} /* size: 13, inline expansions: 1 (5 bytes) */

// <010742C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:63
// function calls: 3
void CChoreoAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 65
} /* size: 16, inline expansions: 3 (22 bytes) */

// <01073FFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnode.cpp:69
// variables: 2
// function calls: 8
void CChoreoAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CChoreoUpdateNode> hNodeHandle; // 71
	CChoreoUpdateNode* pNode; // 73
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CChoreoUpdateNode>::CPackedHandle(); // 71
	CPackedDataT<false>::AddItem<CChoreoUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CChoreoUpdateNode>* handleOut);  // 73
	AnimNodeID::IsValid(); // 75
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 77
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 77
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 77
} /* size: 174, variables: 2, inline expansions: 8 (100 bytes) */

