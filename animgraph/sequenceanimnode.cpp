
//
// animgraph/sequenceanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 33
//

// <0116C683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:13
void ISequenceAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <0116C4F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:13
// function calls: 3
void* ISequenceAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISequenceAnimNode>::CastTo(
		ISequenceAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0116C35D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:13
// function calls: 3
const void* ISequenceAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISequenceAnimNode>::CastTo(
		const ISequenceAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0116C2C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:16
void ISequenceUser::GetTypeInfo()
{
} /* size: 0 */

// <0116C131> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:16
// function calls: 3
void* ISequenceUser::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISequenceUser>::CastTo(
		ISequenceUser* derived,
		ClassID baseTypeInfo);  // 16
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0116BF9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:16
// function calls: 3
const void* ISequenceUser::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISequenceUser>::CastTo(
		const ISequenceUser* derived,
		ClassID baseTypeInfo);  // 16
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0119835E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:18
void MyTypeInfo(void)
{
} /* size: 0 */

// <01193C4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:18
void CSequenceAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0116BD87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:18
// function calls: 3
void* CSequenceAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSequenceAnimNode>::CastTo(
		CSequenceAnimNode* derived,
		ClassID baseTypeInfo);  // 18
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0116BBF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:18
// function calls: 3
const void* CSequenceAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSequenceAnimNode>::CastTo(
		const CSequenceAnimNode* derived,
		ClassID baseTypeInfo);  // 18
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0116B8EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:30
// function calls: 9
void CSequenceAnimNode::CSequenceAnimNode()
{
	IAnimTagSpanContainer::IAnimTagSpanContainer(); // 14
	ISequenceAnimNode::ISequenceAnimNode(); // 31
	ISequenceUser::ISequenceUser(); // 31
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 530
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int> this); // 31
	CUtlString::CUtlString(); // 31
} /* size: 154, inline expansions: 9 (88 bytes) */

// <0116B8D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:30
void CSequenceAnimNode::CSequenceAnimNode()
{
} /* size: 0 */

// <0116B7B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:35
// function calls: 3
void CSequenceAnimNode::GetUIName()
{
	CUtlString::IsEmpty(); // 37
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 39
} /* size: 107, inline expansions: 3 (28 bytes) */

// <0116B79B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:47
void CSequenceAnimNode::GetChildCount()
{
} /* size: 0 */

// <0116B777> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:53
void CSequenceAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0116B753> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:59
void CSequenceAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0116B731> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:65
void CSequenceAnimNode::SetChildID(int, AnimNodeID)
{
} /* size: 0 */

// <011950D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:71
// function calls: 2
void CSequenceAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(); // 73
	CSequenceAnimNode::GetChildName(
			int);  // 71
} /* size: 130, inline expansions: 2 (64 bytes) */

// <0116B6FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:71
// variable: 1
void CSequenceAnimNode::GetChildName(int)
{
	const CUtlString  sEmptyString; // 73
} /* size: 0, variables: 1 */

// <0116AC6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:78
// variables: 9
// function calls: 30
void CSequenceAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const int  tagSpanCount; // 80
	CPackedHandle<CSequenceUpdateNode> hNodeHandle; // 82
	CSequenceUpdateNode* pNode; // 84
	bool bHasValidSequence; // 95
	CSequenceInstanceData* pInstData; // 120
	{
		int i; // 88
		CRelativeOffset<TagSpan_t>::IsValid(); // 30
		CRelativeOffset<TagSpan_t>::Get(); // 90
		{
		}
		CRelativeArray<TagSpan_t>::operator[](
				int index);  // 90
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
				int i);  // 90
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 90
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
				int i);  // 91
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 91
		{
		}
		CRelativeOffset<TagSpan_t>::IsValid(); // 30
		CRelativeOffset<TagSpan_t>::Get(); // 90
		CRelativeArray<TagSpan_t>::operator[](
				int index);  // 91
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
				int i);  // 92
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 92
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
				int i);  // 92
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 92
		{
		}
		CRelativeOffset<TagSpan_t>::IsValid(); // 30
		CRelativeOffset<TagSpan_t>::Get(); // 90
		CRelativeArray<TagSpan_t>::operator[](
				int index);  // 92
	}
	{
		HSequence sequence; // 98
		{
			const ISequence* pSequence; // 101
			float flDuration; // 102
		}
		CUtlString::Get(); // 99
		CUtlString::String(); // 98
	}
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 80
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSequenceUpdateNode>::CPackedHandle(); // 82
	CPackedDataT<false>::AddItem<CSequenceUpdateNode, CAnimGraphInitContext&, int const&>(
									CPackedHandle<CSequenceUpdateNode>* handleOut);  // 84
	CUtlString::IsEmpty(); // 96
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 120
} /* size: 0, variables: 5, inline expansions: 7 (92 bytes) */

// <01193C76> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:127
void CSequenceAnimNode::GetSequenceName()
{
} /* size: 9 */

// <011967A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:133
// function calls: 4
void CSequenceAnimNode::SetSequenceName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 135
} /* size: 86, inline expansions: 4 (106 bytes) */

// <0116AC2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:133
void CSequenceAnimNode::SetSequenceName(const CUtlString& name)
{
} /* size: 0 */

// <01193C9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:139
void CSequenceAnimNode::IsLooping()
{
} /* size: 9 */

// <01193CC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:145
// function call: 1
void CSequenceAnimNode::GetTagSpanCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 147
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0116ABFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:145
void CSequenceAnimNode::GetTagSpanCount()
{
} /* size: 0 */

// <01193D21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:151
// function calls: 3
void CSequenceAnimNode::GetTagSpan(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int i);  // 153
	CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 153
} /* size: 27, inline expansions: 3 (14 bytes) */

// <0116ABD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:151
void CSequenceAnimNode::GetTagSpan(int index)
{
} /* size: 0 */

// <0116A1C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:163
// variables: 2
// function calls: 44
void CSequenceAnimNode::AddTagSpan(IAnimTag* tag)
{
	CAnimTagBase* tagBase; // 165
	{
		CAnimTagSpanPtr span; // 169
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimTagSpan>(CAnimTagSpan* pObj); // 366
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator=(
				CAnimTagSpan* pObj);  // 319
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::CSmartPtr(
				CAnimTagSpan* pObj);  // 169
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 169
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::NumAllocated(); // 1196
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int i);  // 1201
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimTagSpan>(CAnimTagSpan* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagSpan>(CAnimTagSpan* pObj); // 370
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator=(
				CAnimTagSpan* pObj);  // 406
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimTagSpan, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimTagSpan, CRefCountAccessor>& other);  // 1520
		CopyConstruct<CSmartPtr<CAnimTagSpan> >(CSmartPtr<CAnimTagSpan, CRefCountAccessor>* pMemory,
							const CSmartPtr<CAnimTagSpan, CRefCountAccessor>& src);  // 1201
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::Base(); // 112
		Base(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 368
		ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 824
		GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				const CSmartPtr<CAnimTagSpan, CRefCountAccessor>& src);  // 170
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagSpan>(CAnimTagSpan* pObj); // 344
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::~CSmartPtr(); // 174
	}
} /* size: 308, variables: 1 */

// <011985CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:180
// variable: 1
// function calls: 5
void CSequenceAnimNode::RemoveTagSpan(IAnimTagSpan* pTagSpan)
{
	{
		int i; // 184
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 184
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int i);  // 186
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 186
	}
	CSequenceAnimNode::RemoveTagSpan(
			IAnimTagSpan* pTagSpan);  // 180
} /* size: 137, inline expansions: 1 (95 bytes) */

// <0116A194> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:180
// variable: 1
void CSequenceAnimNode::RemoveTagSpan(IAnimTagSpan* pTagSpan)
{
	{
		int i; // 184
	}
} /* size: 0 */

// <01169C8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:195
// variables: 3
// function calls: 18
void CSequenceAnimNode::GetSequencesUsed(CSequenceList& sequenceList)
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
			const CUtlString& sequenceName);  // 197
} /* size: 360, inline expansions: 3 (622 bytes) */

// <01169980> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:201
// variable: 1
// function calls: 11
void CSequenceAnimNode::SetContext(const CAnimGraphContextPtr& context)
{
	{
		int i; // 205
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 205
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int i);  // 207
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 207
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 207
	}
} /* size: 155 */

