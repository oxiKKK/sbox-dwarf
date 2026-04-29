
//
// animgraph/followattachmentanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <010955E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0109094F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10
void CFollowAttachmentAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0106EADD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10
// function calls: 3
void* CFollowAttachmentAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFollowAttachmentAnimNode>::CastTo(
		CFollowAttachmentAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0106E94A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:10
// function calls: 3
const void* CFollowAttachmentAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFollowAttachmentAnimNode>::CastTo(
		const CFollowAttachmentAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0106E658> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:19
// function calls: 15
void CFollowAttachmentAnimNode::CFollowAttachmentAnimNode()
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
	CAnimNodeBase::CAnimNodeBase(); // 20
	CUtlString::CUtlString(); // 20
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 20
	CUtlString::CUtlString(); // 20
} /* size: 168, inline expansions: 15 (199 bytes) */

// <0106E63F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:19
void CFollowAttachmentAnimNode::CFollowAttachmentAnimNode()
{
} /* size: 0 */

// <0106E627> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:26
void CFollowAttachmentAnimNode::GetChildCount()
{
} /* size: 0 */

// <0106E603> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:32
void CFollowAttachmentAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0106E5DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:38
void CFollowAttachmentAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0106E5AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:44
void CFollowAttachmentAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <010930CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:50
// function calls: 2
void CFollowAttachmentAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 52
	CFollowAttachmentAnimNode::GetChildName(
			int childIndex);  // 50
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0106E574> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:50
// variable: 1
void CFollowAttachmentAnimNode::GetChildName(int childIndex)
{
	CUtlString sChildName; // 52
} /* size: 0, variables: 1 */

// <0106E550> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:57
void CFollowAttachmentAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0106E520> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:63
void CFollowAttachmentAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0106DBCC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentanimnode.cpp:69
// variables: 8
// function calls: 32
void CFollowAttachmentAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CFollowAttachmentUpdateNode> hNodeHandle; // 71
	CFollowAttachmentUpdateNode* pNode; // 73
	const CAnimUpdateNodeBase* childUpdateNode; // 75
	FollowAttachmentSettings_t& fixedSettings; // 81
	bool bAttachmentSetup; // 92
	CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> > attachments; // 93
	{
		const CAttachment* pAttachment; // 97
		{
			int i; // 99
			CUtlVectorBase<const CAttachment::Count(); // 99
			CUtlMemory<const CAttachment::operator[](
					int i);  // 588
			CUtlVectorBase<const CAttachment::operator[](
					int i);  // 101
			CUtlMemory<const CAttachment::operator[](
					int i);  // 588
			CUtlVectorBase<const CAttachment::operator[](
					int i);  // 103
		}
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CFollowAttachmentUpdateNode>::CPackedHandle(); // 71
	CPackedDataT<false>::AddItem<CFollowAttachmentUpdateNode, CAnimGraphInitContext&>(
									CPackedHandle<CFollowAttachmentUpdateNode>* handleOut);  // 73
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 75
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 75
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 78
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FollowAttachmentSettings_t>(
						const CPackedHandle<FollowAttachmentSettings_t>& handle);  // 81
	CUtlString::Get(); // 99
	CUtlString::String(); // 84
	CUtlMemory<const CAttachment::ValidateGrowSize(); // 475
	CUtlMemory<const CAttachment::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CAttachment::ResetDbgInfo(); // 530
	CUtlVectorBase<const CAttachment::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CAttachment::CUtlVector(); // 93
	CUtlVectorBase<const CAttachment::Count(); // 95
	CUtlVectorBase<const CAttachment::RemoveAll(); // 1798
	CUtlMemory<const CAttachment::IsExternallyAllocated(); // 905
	CUtlMemory<const CAttachment::Purge(); // 903
	CUtlMemory<const CAttachment::Purge(); // 1799
	CUtlVectorBase<const CAttachment::Purge(); // 560
	ValidateAlignment<const CAttachment*>(void); // 508
	CUtlMemory<const CAttachment::Purge(); // 510
	CUtlMemory<const CAttachment::~CUtlMemory(); // 562
	CUtlVectorBase<const CAttachment::~CUtlVectorBase(); // 410
	CUtlVector<const CAttachment::~CUtlVector(); // 121
} /* size: 510, variables: 6, inline expansions: 27 (354 bytes) */

