
//
// animgraph/aimmatrixanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <01094710> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <0109009E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:12
void CAimMatrixAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0108BF9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:12
// function calls: 3
void* CAimMatrixAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAimMatrixAnimNode>::CastTo(
		CAimMatrixAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0108BE08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:12
// function calls: 3
const void* CAimMatrixAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAimMatrixAnimNode>::CastTo(
		const CAimMatrixAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0108BA42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:21
// function calls: 18
void CAimMatrixAnimNode::CAimMatrixAnimNode()
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
	CUtlString::CUtlString(); // 22
	CUtlString::CUtlString(); // 22
	ISequenceUser::ISequenceUser(); // 22
	CUtlString::CUtlString(); // 22
	AnimParamID::AnimParamID(); // 22
} /* size: 249, inline expansions: 18 (243 bytes) */

// <0108BA29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:21
void CAimMatrixAnimNode::CAimMatrixAnimNode()
{
} /* size: 0 */

// <0108BA11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:26
void CAimMatrixAnimNode::GetChildCount()
{
} /* size: 0 */

// <0108B94B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:32
// function calls: 2
void CAimMatrixAnimNode::GetChild(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 34
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 34
} /* size: 69, inline expansions: 2 (23 bytes) */

// <0108B8D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:38
// function call: 1
void CAimMatrixAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 40
} /* size: 13, inline expansions: 1 (5 bytes) */

// <0108B855> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:44
// function call: 1
void CAimMatrixAnimNode::SetChildID(int, AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 46
} /* size: 10, inline expansions: 1 (5 bytes) */

// <01092BE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:50
// function calls: 2
void CAimMatrixAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(
			const char* pString);  // 52
	CAimMatrixAnimNode::GetChildName(
			int);  // 50
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0108B821> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:50
// variable: 1
void CAimMatrixAnimNode::GetChildName(int)
{
	const CUtlString  sRootChildString; // 52
} /* size: 0, variables: 1 */

// <0108B7AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:57
// function call: 1
void CAimMatrixAnimNode::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 59
} /* size: 13, inline expansions: 1 (5 bytes) */

// <0108B6A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:63
// function calls: 3
void CAimMatrixAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 65
} /* size: 16, inline expansions: 3 (22 bytes) */

// <0108A830> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:69
// variables: 14
// function calls: 43
void CAimMatrixAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	HSequence sequence; // 71
	CPackedHandle<CAimMatrixUpdateNode> hNodeHandle; // 82
	CAimMatrixUpdateNode* pNode; // 84
	AimMatrixOpFixedSettings_t& opFixedSettings; // 100
	int nFramesNeeded; // 109
	bool bAttachmentSetup; // 128
	CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> > attachments; // 129
	{
		const ISequence* pSequence; // 113
		const int  nFrameCount; // 114
		IBaseSequence::NumFrames(
				const float* poseParameters);  // 114
	}
	{
		const float  flFrameToCycle; // 119
		{
			int i; // 120
			{
				float flCycle; // 122
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 122
				StaticPoseCacheHandle::operator=(
						const StaticPoseCacheHandle& rhs);  // 123
			}
		}
	}
	{
		const CAttachment* pAttachment; // 133
		{
			int i; // 134
			CUtlVectorBase<const CAttachment::Count(); // 134
			CUtlMemory<const CAttachment::operator[](
					int i);  // 588
			CUtlVectorBase<const CAttachment::operator[](
					int i);  // 136
			CUtlMemory<const CAttachment::operator[](
					int i);  // 588
			CUtlVectorBase<const CAttachment::operator[](
					int i);  // 138
		}
	}
	CUtlString::IsEmpty(); // 72
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAimMatrixUpdateNode>::CPackedHandle(); // 82
	CPackedDataT<false>::AddItem<CAimMatrixUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CAimMatrixUpdateNode>* handleOut);  // 84
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 86
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 86
	AnimNodeID::IsValid(); // 91
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 93
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 93
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 93
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<AimMatrixOpFixedSettings_t>(
						const CPackedHandle<AimMatrixOpFixedSettings_t>& handle);  // 100
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 101
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 103
	IBaseSequence::NumFrames(
			const float* poseParameters);  // 111
	CUtlMemory<const CAttachment::ValidateGrowSize(); // 475
	CUtlMemory<const CAttachment::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CAttachment::ResetDbgInfo(); // 530
	CUtlVectorBase<const CAttachment::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CAttachment::CUtlVector(); // 129
	CUtlVectorBase<const CAttachment::Count(); // 131
	CUtlVectorBase<const CAttachment::RemoveAll(); // 1798
	CUtlMemory<const CAttachment::IsExternallyAllocated(); // 905
	CUtlMemory<const CAttachment::Purge(); // 903
	CUtlMemory<const CAttachment::Purge(); // 1799
	CUtlVectorBase<const CAttachment::Purge(); // 560
	ValidateAlignment<const CAttachment*>(void); // 508
	CUtlMemory<const CAttachment::Purge(); // 510
	CUtlMemory<const CAttachment::~CUtlMemory(); // 562
	CUtlVectorBase<const CAttachment::~CUtlVectorBase(); // 410
	CUtlVector<const CAttachment::~CUtlVector(); // 156
	CUtlString::Get(); // 99
	CUtlString::String(); // 74
} /* size: 1342, variables: 7, inline expansions: 35 (579 bytes) */

// <0108A328> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixanimnode.cpp:159
// variables: 3
// function calls: 18
void CAimMatrixAnimNode::GetSequencesUsed(CSequenceList& sequenceList)
{
	CUtlString::IsEmpty(); // 19
	{
		int* pValue; // 21
		{
			uint32 c; // 354
		}
		StringHashFunctor::operator(
				const char* s);  // 218
		Find(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t,  this,
			KeyArg_t k);  // 227
		CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
				int i);  // 295
		Element(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
			handle_t idx);  // 227
		FindGetPtr(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
				KeyArg_t k);  // 21
		{
			uint32 c; // 354
		}
		StringHashFunctor::operator(
				const char* s);  // 241
		CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
				int i);  // 706
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 61
		CUtlKeyValuePair<CUtlString, int>::CUtlKeyValuePair<CUtlString>(
						const CUtlString& k);  // 1514
		Construct<CUtlKeyValuePair<CUtlString, int>, const CUtlString&>(CUtlKeyValuePair<CUtlString, int>* pMemory); // 706
		DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
						const CUtlString& k,
						unsigned int h,
						bool* pDidInsert);  // 695
		DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
						const CUtlString& k,
						unsigned int h,
						bool* pDidInsert);  // 241
		CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
				int i);  // 241
		InsertGetPtr(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
				KeyArg_t k);  // 27
	}
	CSequenceList::AddSequence(
			const CUtlString& sequenceName);  // 17
	CSequenceList::AddSequence(
			const CUtlString& sequenceName);  // 161
} /* size: 360, inline expansions: 3 (622 bytes) */

