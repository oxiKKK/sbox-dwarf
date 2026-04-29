
//
// animgraph/bonemaskanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 20
//

// <0109546E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <01090538> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11
void CBoneMaskAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0107956A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11
// function calls: 3
void* CBoneMaskAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CBoneMaskAnimNode>::CastTo(
		CBoneMaskAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <010793D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:11
// function calls: 3
const void* CBoneMaskAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CBoneMaskAnimNode>::CastTo(
		const CBoneMaskAnimNode* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01079041> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:20
// function calls: 18
void CBoneMaskAnimNode::CBoneMaskAnimNode()
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
	CUtlString::CUtlString(); // 19
	AnimNodeID::AnimNodeID(); // 19
	CAnimNodeBase::CAnimNodeBase(); // 21
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 21
	CUtlString::CUtlString(); // 21
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 21
	AnimParamID::AnimParamID(); // 21
} /* size: 207, inline expansions: 18 (191 bytes) */

// <01079028> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:20
void CBoneMaskAnimNode::CBoneMaskAnimNode()
{
} /* size: 0 */

// <01079010> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:27
void CBoneMaskAnimNode::GetChildCount()
{
} /* size: 0 */

// <01078EE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:33
// function calls: 3
void CBoneMaskAnimNode::GetChild(int childIndex)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 35
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 41
	CBoneMaskAnimNode::GetChildID(
			int childIndex);  // 35
} /* size: 149, inline expansions: 3 (49 bytes) */

// <01090561> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:39
// function call: 1
void CBoneMaskAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 41
} /* size: 28, inline expansions: 1 (4 bytes) */

// <01078EC4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:39
void CBoneMaskAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <01078E05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:45
// function calls: 2
void CBoneMaskAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 49
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 53
} /* size: 20, inline expansions: 2 (11 bytes) */

// <01078BF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:58
// variables: 2
// function calls: 2
void CBoneMaskAnimNode::GetChildName(int childIndex)
{
	CUtlString kName1; // 60
	CUtlString kName2; // 61
	CUtlString::CUtlString(
			const char* pString);  // 60
	CUtlString::CUtlString(
			const char* pString);  // 61
} /* size: 253, variables: 2, inline expansions: 2 (60 bytes) */

// <01078B6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:67
// function call: 1
void CBoneMaskAnimNode::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 69
} /* size: 28, inline expansions: 1 (4 bytes) */

// <01093655> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:73
// function calls: 7
void CBoneMaskAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 77
	CBoneMaskAnimNode::SetInputConnection(
				int index,
				CNodeConnection connection);  // 73
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 81
} /* size: 34, inline expansions: 7 (56 bytes) */

// <01078B3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:73
void CBoneMaskAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <01078557> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:86
// variables: 2
// function calls: 18
void CBoneMaskAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CBoneMaskUpdateNode> hNodeHandle; // 88
	CBoneMaskUpdateNode* pNode; // 90
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CBoneMaskUpdateNode>::CPackedHandle(); // 88
	CPackedDataT<false>::AddItem<CBoneMaskUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CBoneMaskUpdateNode>* handleOut);  // 90
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 91
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 101
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 101
	AnimNodeID::IsValid(); // 113
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 115
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 115
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 115
	AnimNodeID::IsValid(); // 122
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 124
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 124
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 124
	CAnimParamHandle::IsValid(); // 108
} /* size: 590, variables: 2, inline expansions: 18 (230 bytes) */

// <01078540> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:136
void RefreshUICallback(void* pThis)
{
} /* size: 0 */

// <010784FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:142
// variable: 1
void BlendSourceFilter(void* pThis)
{
	CBoneMaskAnimNode* pThisPtr; // 144
} /* size: 17, variables: 1 */

// <010784BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:149
// variable: 1
void BlendParamFilter(void* pThis)
{
	CBoneMaskAnimNode* pThisPtr; // 151
} /* size: 27, variables: 1 */

// <0107847A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskanimnode.cpp:164
// variable: 1
void TimingBlendParamFilter(void* pThis)
{
	CBoneMaskAnimNode* pThisPtr; // 166
} /* size: 16, variables: 1 */

