
//
// animgraph/lookatanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <011981EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <0119330A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12
void CLookAtAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0117F25E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12
// function calls: 3
void* CLookAtAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CLookAtAnimNode>::CastTo(
		CLookAtAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0117F0CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:12
// function calls: 3
const void* CLookAtAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CLookAtAnimNode>::CastTo(
		const CLookAtAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0117EEC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:21
// function calls: 7
void CLookAtAnimNode::CLookAtAnimNode()
{
	AnimParamID::AnimParamID(); // 22
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 22
	AnimParamID::AnimParamID(); // 22
	CUtlString::CUtlString(); // 22
	CUtlString::CUtlString(); // 22
} /* size: 136, inline expansions: 7 (39 bytes) */

// <0117EEAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:21
void CLookAtAnimNode::CLookAtAnimNode()
{
} /* size: 0 */

// <0117EE97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:26
void CLookAtAnimNode::GetChildCount()
{
} /* size: 0 */

// <0117EE73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:32
void CLookAtAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0117EE4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:38
void CLookAtAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0117EE26> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:44
void CLookAtAnimNode::SetChildID(int, AnimNodeID nodeID)
{
} /* size: 0 */

// <01195676> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:50
// function calls: 2
void CLookAtAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(
			const char* pString);  // 52
	CLookAtAnimNode::GetChildName(
			int);  // 50
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0117EDF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:50
// variable: 1
void CLookAtAnimNode::GetChildName(int)
{
	const CUtlString  sRootChildString; // 52
} /* size: 0, variables: 1 */

// <0117EDCE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:57
void CLookAtAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0117ED9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:63
void CLookAtAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <0117DBB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatanimnode.cpp:68
// variables: 15
// function calls: 57
void CLookAtAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CLookAtUpdateNode> hNodeHandle; // 70
	CLookAtUpdateNode* pNode; // 72
	const CAnimUpdateNodeBase* childUpdateNode; // 84
	LookAtOpFixedSettings_t& opFixedSettings; // 90
	bool bAttachmentSetup; // 100
	CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> > attachments; // 101
	bool bHasLookatChain; // 128
	CUtlVector<CLookAtChain, CUtlMemory<CLookAtChain, int> > chainList; // 129
	{
		const CAttachment* pAttachment; // 105
		{
			int i; // 106
			CUtlVectorBase<const CAttachment::Count(); // 106
			CUtlMemory<const CAttachment::operator[](
					int i);  // 588
			CUtlVectorBase<const CAttachment::operator[](
					int i);  // 108
			CUtlMemory<const CAttachment::operator[](
					int i);  // 588
			CUtlVectorBase<const CAttachment::operator[](
					int i);  // 110
		}
	}
	{
		int i; // 130
		{
			const CLookAtChain& chain; // 134
			LookAtBone_t* boneList; // 136
			{
				int j; // 138
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 140
			}
			CUtlMemory<CLookAtChain, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLookAtChain, CUtlMemory<CLookAtChain, int> >::operator[](
					int i);  // 134
			{
				uint32 i; // 160
				LookAtBone_t::LookAtBone_t(); // 162
			}
			CPackedDataT<false>::AddArray<LookAtBone_t>(
						uint32 count,
						CPackedHandle<LookAtBone_t>* handleOut);  // 136
			{
			}
			CRelativeOffset<LookAtBone_t>::SetOffset(
					const LookAtBone_t* targetPtr);  // 20
			CRelativeOffset<LookAtBone_t>::operator=(
					const LookAtBone_t* targetPtr);  // 115
			CRelativeArray<LookAtBone_t>::SetArray(
				const LookAtBone_t* targetArray,
				int32 count);  // 144
		}
		CUtlVectorBase<CLookAtChain, CUtlMemory<CLookAtChain, int> >::Count(); // 130
		CUtlMemory<CLookAtChain, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLookAtChain, CUtlMemory<CLookAtChain, int> >::operator[](
				int i);  // 132
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CLookAtUpdateNode>::CPackedHandle(); // 70
	CPackedDataT<false>::AddItem<CLookAtUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CLookAtUpdateNode>* handleOut);  // 72
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 74
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 74
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 75
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 75
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 84
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 84
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 87
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<LookAtOpFixedSettings_t>(
						const CPackedHandle<LookAtOpFixedSettings_t>& handle);  // 90
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 91
	CUtlMemory<const CAttachment::ValidateGrowSize(); // 475
	CUtlMemory<const CAttachment::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CAttachment::ResetDbgInfo(); // 530
	CUtlVectorBase<const CAttachment::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CAttachment::CUtlVector(); // 101
	CUtlVectorBase<const CAttachment::Count(); // 103
	CUtlMemory<CLookAtChain, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CLookAtChain, int>::Purge(); // 903
	CUtlMemory<CLookAtChain, int>::Purge(); // 1799
	CUtlVectorBase<CLookAtChain, CUtlMemory<CLookAtChain, int> >::Purge(); // 560
	ValidateAlignment<CLookAtChain>(void); // 508
	CUtlMemory<CLookAtChain, int>::Purge(); // 510
	CUtlMemory<CLookAtChain, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CLookAtChain, CUtlMemory<CLookAtChain, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CLookAtChain, CUtlMemory<CLookAtChain, int> >::~CUtlVector(); // 158
	CUtlVectorBase<const CAttachment::RemoveAll(); // 1798
	CUtlMemory<const CAttachment::IsExternallyAllocated(); // 905
	CUtlMemory<const CAttachment::Purge(); // 903
	CUtlMemory<const CAttachment::Purge(); // 1799
	CUtlVectorBase<const CAttachment::Purge(); // 560
	ValidateAlignment<const CAttachment*>(void); // 508
	CUtlMemory<const CAttachment::Purge(); // 510
	CUtlMemory<const CAttachment::~CUtlMemory(); // 562
	CUtlVectorBase<const CAttachment::~CUtlVectorBase(); // 410
	CUtlVector<const CAttachment::~CUtlVector(); // 158
	CAnimParamHandle::IsValid(); // 79
} /* size: 0, variables: 8, inline expansions: 40 (646 bytes) */

