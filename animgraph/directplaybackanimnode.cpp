
//
// animgraph/directplaybackanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <010955A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <010908FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10
void CDirectPlaybackAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0107054D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10
// function calls: 3
void* CDirectPlaybackAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CDirectPlaybackAnimNode>::CastTo(
		CDirectPlaybackAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <010703BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:10
// function calls: 3
const void* CDirectPlaybackAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CDirectPlaybackAnimNode>::CastTo(
		const CDirectPlaybackAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01070124> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:18
// function calls: 13
void CDirectPlaybackAnimNode::CDirectPlaybackAnimNode()
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
} /* size: 167, inline expansions: 13 (191 bytes) */

// <0107010B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:18
void CDirectPlaybackAnimNode::CDirectPlaybackAnimNode()
{
} /* size: 0 */

// <010700F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:25
void CDirectPlaybackAnimNode::GetChildCount()
{
} /* size: 0 */

// <010700CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:31
void CDirectPlaybackAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <010700B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:37
void CDirectPlaybackAnimNode::GetChildID(int)
{
} /* size: 0 */

// <01070089> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:43
void CDirectPlaybackAnimNode::SetChildID(int, AnimNodeID nodeID)
{
} /* size: 0 */

// <01092F95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:49
// function calls: 2
void CDirectPlaybackAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(
			const char* pString);  // 51
	CDirectPlaybackAnimNode::GetChildName(
			int);  // 49
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01070055> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:49
// variable: 1
void CDirectPlaybackAnimNode::GetChildName(int)
{
	const CUtlString  sRootChildString; // 51
} /* size: 0, variables: 1 */

// <01070031> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:56
void CDirectPlaybackAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <01070001> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:62
void CDirectPlaybackAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0106FD8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnode.cpp:68
// variables: 3
// function calls: 5
void CDirectPlaybackAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CDirectPlaybackUpdateNode> hNodeHandle; // 70
	CDirectPlaybackUpdateNode* pNode; // 72
	const CAnimUpdateNodeBase* childUpdateNode; // 74
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CDirectPlaybackUpdateNode>::CPackedHandle(); // 70
	CPackedDataT<false>::AddItem<CDirectPlaybackUpdateNode, CAnimGraphInitContext&, bool const&, bool const&, bool const&>(
														CPackedHandle<CDirectPlaybackUpdateNode>* handleOut);  // 72
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 74
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 74
} /* size: 178, variables: 3, inline expansions: 5 (66 bytes) */

