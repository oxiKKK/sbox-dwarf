
//
// animgraph/leanmatrixanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <011981CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <011932E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12
void CLeanMatrixAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01180396> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12
// function calls: 3
void* CLeanMatrixAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CLeanMatrixAnimNode>::CastTo(
		CLeanMatrixAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01180203> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:12
// function calls: 3
const void* CLeanMatrixAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CLeanMatrixAnimNode>::CastTo(
		const CLeanMatrixAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0117FFCC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:22
// function calls: 5
void CLeanMatrixAnimNode::CLeanMatrixAnimNode()
{
	ISequenceUser::ISequenceUser(); // 23
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 23
	CUtlString::CUtlString(); // 23
	AnimParamID::AnimParamID(); // 23
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 23
} /* size: 132, inline expansions: 5 (24 bytes) */

// <0117FFB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:22
void CLeanMatrixAnimNode::CLeanMatrixAnimNode()
{
} /* size: 0 */

// <0117FF9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:27
void CLeanMatrixAnimNode::GetChildCount()
{
} /* size: 0 */

// <0117FF77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:33
void CLeanMatrixAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0117FF53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:39
void CLeanMatrixAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0117FF31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:45
void CLeanMatrixAnimNode::SetChildID(int, AnimNodeID)
{
} /* size: 0 */

// <01194EDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:51
// function calls: 2
void CLeanMatrixAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(); // 53
	CLeanMatrixAnimNode::GetChildName(
			int);  // 51
} /* size: 130, inline expansions: 2 (64 bytes) */

// <0117FEFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:51
// variable: 1
void CLeanMatrixAnimNode::GetChildName(int)
{
	const CUtlString  sEmptyString; // 53
} /* size: 0, variables: 1 */

// <0117F9BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:58
// variables: 5
// function calls: 13
void CLeanMatrixAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	HSequence sequence; // 60
	CAnimParamHandle hParam; // 71
	CPackedHandle<CLeanMatrixUpdateNode> hNodeHandle; // 77
	CLeanMatrixUpdateNode* pNode; // 79
	{
		int i; // 92
		StaticPoseCacheHandle::operator=(
				const StaticPoseCacheHandle& rhs);  // 94
	}
	CUtlString::IsEmpty(); // 61
	CUtlString::Get(); // 99
	CUtlString::String(); // 63
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 71
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CLeanMatrixUpdateNode>::CPackedHandle(); // 77
	CPackedDataT<false>::AddItem<CLeanMatrixUpdateNode, CAnimGraphInitContext&, HSequence&>(
										CPackedHandle<CLeanMatrixUpdateNode>* handleOut);  // 79
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 81
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 83
	Vector::operator=(
			const Vector& vOther);  // 84
	Vector::operator=(
			const Vector& vOther);  // 85
	CAnimParamHandle::IsValid(); // 72
} /* size: 654, variables: 4, inline expansions: 12 (303 bytes) */

// <0117F4B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leanmatrixanimnode.cpp:103
// variables: 3
// function calls: 18
void CLeanMatrixAnimNode::GetSequencesUsed(CSequenceList& sequenceList)
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
			const CUtlString& sequenceName);  // 105
} /* size: 360, inline expansions: 3 (622 bytes) */

