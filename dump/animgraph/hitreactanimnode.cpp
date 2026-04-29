
//
// animgraph/hitreactanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <01198155> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0119323D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9
void CHitReactAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01183070> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9
// function calls: 3
void* CHitReactAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CHitReactAnimNode>::CastTo(
		CHitReactAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01182EDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:9
// function calls: 3
const void* CHitReactAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CHitReactAnimNode>::CastTo(
		const CHitReactAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01182C5B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:18
// function calls: 10
void CHitReactAnimNode::CHitReactAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 19
	AnimParamID::AnimParamID(); // 19
	AnimParamID::AnimParamID(); // 19
	AnimParamID::AnimParamID(); // 19
	AnimParamID::AnimParamID(); // 19
	AnimParamID::AnimParamID(); // 19
	CUtlString::CUtlString(); // 19
	CUtlString::CUtlString(); // 19
} /* size: 190, inline expansions: 10 (40 bytes) */

// <01182C42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:18
void CHitReactAnimNode::CHitReactAnimNode()
{
} /* size: 0 */

// <01182C2A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:23
void CHitReactAnimNode::GetChildCount()
{
} /* size: 0 */

// <01182C06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:29
void CHitReactAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <01182BE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:35
void CHitReactAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <01182BB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:41
void CHitReactAnimNode::SetChildID(int, AnimNodeID nodeID)
{
} /* size: 0 */

// <01195408> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:47
// function calls: 2
void CHitReactAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(
			const char* pString);  // 49
	CHitReactAnimNode::GetChildName(
			int);  // 47
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01182B85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:47
// variable: 1
void CHitReactAnimNode::GetChildName(int)
{
	const CUtlString  sRootChildString; // 49
} /* size: 0, variables: 1 */

// <01182B61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:54
void CHitReactAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <01182B31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:60
void CHitReactAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <011824D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactanimnode.cpp:66
// variables: 2
// function calls: 21
void CHitReactAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CHitReactUpdateNode* pNode; // 68
	HitReactFixedSettings_t* pFixedSettings; // 79
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 80
	CPackedDataT<false>::AddItem<CHitReactUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CHitReactUpdateNode>* handleOut);  // 68
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 69
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 69
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 70
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 70
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 71
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 71
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 72
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 72
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 73
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 73
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 76
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 76
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 76
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<HitReactFixedSettings_t>(
						const CPackedHandle<HitReactFixedSettings_t>& handle);  // 79
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 93
} /* size: 662, variables: 2, inline expansions: 21 (256 bytes) */

