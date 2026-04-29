
//
// animgraph/singleframeanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 31
//

// <011680EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:9
void ISingleFrameAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <01167F58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:9
// function calls: 3
void* ISingleFrameAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISingleFrameAnimNode>::CastTo(
		ISingleFrameAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01167DC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:9
// function calls: 3
const void* ISingleFrameAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISingleFrameAnimNode>::CastTo(
		const ISingleFrameAnimNode* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <011983D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <01193E9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:12
void CSingleFrameAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01167BAE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:12
// function calls: 3
void* CSingleFrameAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSingleFrameAnimNode>::CastTo(
		CSingleFrameAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01167A1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:12
// function calls: 3
const void* CSingleFrameAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSingleFrameAnimNode>::CastTo(
		const CSingleFrameAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01167756> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:24
// function calls: 9
void CSingleFrameAnimNode::CSingleFrameAnimNode()
{
	IAnimTagSpanContainer::IAnimTagSpanContainer(); // 10
	ISingleFrameAnimNode::ISingleFrameAnimNode(); // 25
	ISequenceUser::ISequenceUser(); // 25
	CUtlString::CUtlString(); // 25
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int> this); // 25
} /* size: 147, inline expansions: 9 (88 bytes) */

// <0116773D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:24
void CSingleFrameAnimNode::CSingleFrameAnimNode()
{
} /* size: 0 */

// <01167621> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:29
// function calls: 2
void CSingleFrameAnimNode::GetUIName()
{
	CUtlString::IsEmpty(); // 31
	CUtlString::~CUtlString(); // 33
} /* size: 150, inline expansions: 2 (32 bytes) */

// <01167609> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:41
void CSingleFrameAnimNode::GetChildCount()
{
} /* size: 0 */

// <011675E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:47
void CSingleFrameAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <011675C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:53
void CSingleFrameAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0116759F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:59
void CSingleFrameAnimNode::SetChildID(int, AnimNodeID)
{
} /* size: 0 */

// <011951CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:65
// function calls: 2
void CSingleFrameAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(); // 67
	CSingleFrameAnimNode::GetChildName(
			int);  // 65
} /* size: 130, inline expansions: 2 (64 bytes) */

// <0116756B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:65
// variable: 1
void CSingleFrameAnimNode::GetChildName(int)
{
	const CUtlString  sEmptyString; // 67
} /* size: 0, variables: 1 */

// <01166B76> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:72
// variables: 9
// function calls: 29
void CSingleFrameAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	StaticPoseCacheHandle poseHandle; // 74
	bool bHasValidSequence; // 75
	const int  tagSpanCount; // 107
	CSingleFrameUpdateNode* pNode; // 109
	{
		HSequence sequence; // 78
		{
			const ISequence* pSequence; // 81
			int nMaxFrame; // 82
			{
				float flCycle; // 87
				StaticPoseCacheHandle::operator=(
						const StaticPoseCacheHandle& rhs);  // 93
			}
		}
		CUtlString::Get(); // 99
		CUtlString::String(); // 78
	}
	{
		int i; // 111
		CRelativeOffset<TagSpan_t>::IsValid(); // 30
		CRelativeOffset<TagSpan_t>::Get(); // 90
		{
		}
		CRelativeArray<TagSpan_t>::operator[](
				int index);  // 113
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
				int i);  // 113
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 113
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
				int i);  // 114
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 114
		{
		}
		CRelativeOffset<TagSpan_t>::IsValid(); // 30
		CRelativeOffset<TagSpan_t>::Get(); // 90
		CRelativeArray<TagSpan_t>::operator[](
				int index);  // 114
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
				int i);  // 115
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 115
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
				int i);  // 115
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 115
		{
		}
		CRelativeOffset<TagSpan_t>::IsValid(); // 30
		CRelativeOffset<TagSpan_t>::Get(); // 90
		CRelativeArray<TagSpan_t>::operator[](
				int index);  // 115
	}
	CUtlString::IsEmpty(); // 76
	StaticPoseCacheHandle::StaticPoseCacheHandle(); // 74
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 107
	StaticPoseCacheHandle::StaticPoseCacheHandle(
				const StaticPoseCacheHandle& rhs);  // 140
	CPackedDataT<false>::AddItem<CSingleFrameUpdateNode, CAnimGraphInitContext&, StaticPoseCacheHandle&, int const&>(
													CPackedHandle<CSingleFrameUpdateNode>* handleOut);  // 109
} /* size: 0, variables: 4, inline expansions: 5 (92 bytes) */

// <01193EC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:122
void CSingleFrameAnimNode::GetSequenceName()
{
} /* size: 9 */

// <01166A1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:128
// function calls: 4
void CSingleFrameAnimNode::SetSequenceName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 130
} /* size: 86, inline expansions: 4 (106 bytes) */

// <01193EEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:134
// function call: 1
void CSingleFrameAnimNode::GetTagSpanCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 136
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01166A03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:134
void CSingleFrameAnimNode::GetTagSpanCount()
{
} /* size: 0 */

// <01193F45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:140
// function calls: 3
void CSingleFrameAnimNode::GetTagSpan(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int i);  // 142
	CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 142
} /* size: 27, inline expansions: 3 (14 bytes) */

// <011669DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:140
void CSingleFrameAnimNode::GetTagSpan(int index)
{
} /* size: 0 */

// <01165FCF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:152
// variables: 2
// function calls: 44
void CSingleFrameAnimNode::AddTagSpan(IAnimTag* tag)
{
	CAnimTagBase* tagBase; // 154
	{
		CAnimTagSpanPtr span; // 158
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimTagSpan>(CAnimTagSpan* pObj); // 366
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator=(
				CAnimTagSpan* pObj);  // 319
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::CSmartPtr(
				CAnimTagSpan* pObj);  // 158
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 158
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
				const CSmartPtr<CAnimTagSpan, CRefCountAccessor>& src);  // 159
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagSpan>(CAnimTagSpan* pObj); // 344
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::~CSmartPtr(); // 163
	}
} /* size: 308, variables: 1 */

// <01198728> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:169
// variable: 1
// function calls: 5
void CSingleFrameAnimNode::RemoveTagSpan(IAnimTagSpan* pTagSpan)
{
	{
		int i; // 173
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 173
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int i);  // 175
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 175
	}
	CSingleFrameAnimNode::RemoveTagSpan(
			IAnimTagSpan* pTagSpan);  // 169
} /* size: 137, inline expansions: 1 (95 bytes) */

// <01165F9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:169
// variable: 1
void CSingleFrameAnimNode::RemoveTagSpan(IAnimTagSpan* pTagSpan)
{
	{
		int i; // 173
	}
} /* size: 0 */

// <01165F85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:184
void CSingleFrameAnimNode::GetTagCount()
{
} /* size: 0 */

// <01165EA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:190
// function calls: 3
void CSingleFrameAnimNode::GetTagID(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
			int i);  // 192
	CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 192
} /* size: 74, inline expansions: 3 (10 bytes) */

// <01199303> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:196
// variables: 3
// function calls: 18
void CSingleFrameAnimNode::GetSequencesUsed(CSequenceList& sequenceList)
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
			const CUtlString& sequenceName);  // 198
} /* size: 360, inline expansions: 3 (622 bytes) */

// <01165E7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:196
void CSingleFrameAnimNode::GetSequencesUsed(CSequenceList& sequenceList)
{
} /* size: 0 */

// <01165B6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeanimnode.cpp:202
// variable: 1
// function calls: 11
void CSingleFrameAnimNode::SetContext(const CAnimGraphContextPtr& context)
{
	{
		int i; // 206
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 206
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int i);  // 208
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 208
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 208
	}
} /* size: 155 */

