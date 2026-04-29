
//
// animgraph/cyclecontrolanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <01095569> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <010908AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12
void CCycleControlAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01071E95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12
// function calls: 3
void* CCycleControlAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CCycleControlAnimNode>::CastTo(
		CCycleControlAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01071D02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:12
// function calls: 3
const void* CCycleControlAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CCycleControlAnimNode>::CastTo(
		const CCycleControlAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01071A38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:23
// function calls: 14
void CCycleControlAnimNode::CCycleControlAnimNode()
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
	CAnimNodeBase::CAnimNodeBase(); // 24
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 24
	AnimParamID::AnimParamID(); // 24
} /* size: 158, inline expansions: 14 (199 bytes) */

// <01071A1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:23
void CCycleControlAnimNode::CCycleControlAnimNode()
{
} /* size: 0 */

// <01071A07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:30
void CCycleControlAnimNode::GetChildCount()
{
} /* size: 0 */

// <01071941> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:36
// function calls: 2
void CCycleControlAnimNode::GetChild(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 38
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 38
} /* size: 69, inline expansions: 2 (23 bytes) */

// <0107191D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:42
void CCycleControlAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <010718ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:48
void CCycleControlAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <010718B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:54
void CCycleControlAnimNode::GetChildName(int childIndex)
{
} /* size: 12 */

// <0107188C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:60
void CCycleControlAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0107185C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:66
void CCycleControlAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <010714AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolanimnode.cpp:72
// variables: 3
// function calls: 10
void CCycleControlAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CCycleControlUpdateNode> hNodeHandle; // 74
	CCycleControlUpdateNode* pNode; // 76
	const CAnimUpdateNodeBase* childUpdateNode; // 78
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CCycleControlUpdateNode>::CPackedHandle(); // 74
	CPackedDataT<false>::AddItem<CCycleControlUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CCycleControlUpdateNode>* handleOut);  // 76
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 78
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 78
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 81
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 85
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 85
	CAnimParamHandle::IsValid(); // 87
} /* size: 268, variables: 3, inline expansions: 10 (106 bytes) */

