
//
// animgraph/addanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//

// <010946C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <0108FFFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11
void CAddAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0108D2D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11
// function calls: 3
void* CAddAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAddAnimNode>::CastTo(
		CAddAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0108D144> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:11
// function calls: 3
const void* CAddAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAddAnimNode>::CastTo(
		const CAddAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0108CC71> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:21
// function calls: 16
void CAddAnimNode::CAddAnimNode()
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
	CAnimNodeBase::CAnimNodeBase(); // 22
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 22
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 22
} /* size: 182, inline expansions: 16 (191 bytes) */

// <0108CC58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:21
void CAddAnimNode::CAddAnimNode()
{
} /* size: 0 */

// <0108CC2A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:28
void CAddAnimNode::GetChildCount()
{
} /* size: 10 */

// <0108CB03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:34
// function calls: 3
void CAddAnimNode::GetChild(int childIndex)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 36
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 42
	CAddAnimNode::GetChildID(
			int childIndex);  // 36
} /* size: 149, inline expansions: 3 (49 bytes) */

// <01090025> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:40
// function call: 1
void CAddAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 42
} /* size: 28, inline expansions: 1 (4 bytes) */

// <0108CADE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:40
void CAddAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0108CA1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:46
// function calls: 2
void CAddAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 50
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 54
} /* size: 20, inline expansions: 2 (11 bytes) */

// <0108C80A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:59
// variables: 2
// function calls: 2
void CAddAnimNode::GetChildName(int childIndex)
{
	CUtlString kBaseName; // 61
	CUtlString kAddName; // 62
	CUtlString::CUtlString(
			const char* pString);  // 61
	CUtlString::CUtlString(
			const char* pString);  // 62
} /* size: 253, variables: 2, inline expansions: 2 (60 bytes) */

// <0108C785> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:68
// function call: 1
void CAddAnimNode::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 70
} /* size: 28, inline expansions: 1 (4 bytes) */

// <0109347D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:74
// function calls: 7
void CAddAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 78
	CAddAnimNode::SetInputConnection(
				int index,
				CNodeConnection connection);  // 74
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 82
} /* size: 34, inline expansions: 7 (56 bytes) */

// <0108C72D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:74
void CAddAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0108C2DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:87
// variables: 2
// function calls: 13
void CAddAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CAddUpdateNode> hNodeHandle; // 89
	CAddUpdateNode* pNode; // 91
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAddUpdateNode>::CPackedHandle(); // 89
	CPackedDataT<false>::AddItem<CAddUpdateNode, CAnimGraphInitContext&>(
							CPackedHandle<CAddUpdateNode>* handleOut);  // 91
	AnimNodeID::IsValid(); // 100
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 102
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 102
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 102
	AnimNodeID::IsValid(); // 109
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 111
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 111
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 111
} /* size: 369, variables: 2, inline expansions: 13 (165 bytes) */

// <010946E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:122
void RefreshUICallback(void* pThis)
{
} /* size: 10 */

// <0108C285> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addanimnode.cpp:128
// variable: 1
void TimingBlendParamFilter(void* pThis)
{
	CAddAnimNode* pThisPtr; // 130
} /* size: 16, variables: 1 */

