
//
// animgraph/inputstreamanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//

// <01198173> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <01193266> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8
void CInputStreamAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01182282> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8
// function calls: 3
void* CInputStreamAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CInputStreamAnimNode>::CastTo(
		CInputStreamAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <011820EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:8
// function calls: 3
const void* CInputStreamAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CInputStreamAnimNode>::CastTo(
		const CInputStreamAnimNode* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01182041> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:17
void CInputStreamAnimNode::CInputStreamAnimNode()
{
} /* size: 63 */

// <01182010> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:22
void CInputStreamAnimNode::GetChildCount()
{
} /* size: 0 */

// <01181FEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:28
void CInputStreamAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <01181FC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:34
void CInputStreamAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <01181FA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:40
void CInputStreamAnimNode::SetChildID(int, AnimNodeID)
{
} /* size: 0 */

// <01194DDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:46
// function calls: 2
void CInputStreamAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(); // 48
	CInputStreamAnimNode::GetChildName(
			int);  // 46
} /* size: 130, inline expansions: 2 (64 bytes) */

// <01181F72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:46
// variable: 1
void CInputStreamAnimNode::GetChildName(int)
{
	const CUtlString  sEmptyString; // 48
} /* size: 0, variables: 1 */

// <01181E7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnode.cpp:53
// function call: 1
void CInputStreamAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedDataT<false>::AddItem<CInputStreamUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CInputStreamUpdateNode>* handleOut);  // 55
} /* size: 68, inline expansions: 1 (33 bytes) */

