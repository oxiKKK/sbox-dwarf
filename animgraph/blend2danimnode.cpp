
//
// animgraph/blend2danimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 57
//

// <01090173> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12
void IBlend2DItem::GetTypeInfo()
{
} /* size: 0 */

// <01085073> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12
// function calls: 3
void* IBlend2DItem::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IBlend2DItem>::CastTo(
		IBlend2DItem* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01084EE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:12
// function calls: 3
const void* IBlend2DItem::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IBlend2DItem>::CastTo(
		const IBlend2DItem* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01084E47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:13
void IBlend2DAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <01084CB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:13
// function calls: 3
void* IBlend2DAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IBlend2DAnimNode>::CastTo(
		IBlend2DAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01084B21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:13
// function calls: 3
const void* IBlend2DAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IBlend2DAnimNode>::CastTo(
		const IBlend2DAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0109019C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:15
void CBlend2DItem::GetTypeInfo()
{
} /* size: 12 */

// <010848F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:15
// function calls: 3
void* CBlend2DItem::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CBlend2DItem>::CastTo(
		CBlend2DItem* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01084763> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:15
// function calls: 3
const void* CBlend2DItem::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CBlend2DItem>::CastTo(
		const CBlend2DItem* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01094AD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:18
void MyTypeInfo(void)
{
} /* size: 0 */

// <010901C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:18
void CBlend2DAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0108454C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:18
// function calls: 3
void* CBlend2DAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CBlend2DAnimNode>::CastTo(
		CBlend2DAnimNode* derived,
		ClassID baseTypeInfo);  // 18
} /* size: 0, inline expansions: 3 (295 bytes) */

// <010843B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:18
// function calls: 3
const void* CBlend2DAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CBlend2DAnimNode>::CastTo(
		const CBlend2DAnimNode* derived,
		ClassID baseTypeInfo);  // 18
} /* size: 0, inline expansions: 3 (295 bytes) */

// <010840B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:32
// variable: 1
// function calls: 10
void GetItemName(void* pClassInstance, CUtlString* pOutElementName)
{
	CBlend2DItem* pBlendChild; // 34
	CUtlString::Get(); // 99
	CUtlString::String(); // 35
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 35
	CUtlString::operator=(
			const char* src);  // 35
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 35
} /* size: 166, variables: 1, inline expansions: 10 (212 bytes) */

// <01083F77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:41
// variable: 1
// function calls: 2
void CBlend2DItem::GetSequenceName()
{
	const CUtlString& kDefaultName; // 43
	CUtlString::IsEmpty(); // 44
	CUtlString::CUtlString(
			const char* pString);  // 43
} /* size: 219, variables: 1, inline expansions: 2 (58 bytes) */

// <01083E36> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:55
// function calls: 4
void CBlend2DItem::SetSequenceName(const CUtlString& sequenceName)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 57
} /* size: 86, inline expansions: 4 (106 bytes) */

// <01083E1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:63
void CBlend2DItem::GetBlendValue()
{
} /* size: 0 */

// <010901EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:71
// function call: 1
void CBlend2DItem::SetBlendValue(const Vector2D& vBlendValue)
{
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
} /* size: 24, inline expansions: 1 (19 bytes) */

// <01083DF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:71
void CBlend2DItem::SetBlendValue(const Vector2D& vBlendValue)
{
} /* size: 0 */

// <0109025B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:79
// function call: 1
void CBlend2DItem::GetTagSpanCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 81
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01083DE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:79
void CBlend2DItem::GetTagSpanCount()
{
} /* size: 0 */

// <010902B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:87
// function calls: 3
void CBlend2DItem::GetTagSpan(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int i);  // 89
	CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 89
} /* size: 27, inline expansions: 3 (14 bytes) */

// <01083DBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:87
void CBlend2DItem::GetTagSpan(int index)
{
} /* size: 0 */

// <0108343C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:103
// variables: 2
// function calls: 41
void CBlend2DItem::AddTagSpan(IAnimTag* tag)
{
	CAnimTagBase* tagBase; // 105
	{
		CAnimTagSpanPtr span; // 109
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimTagSpan>(CAnimTagSpan* pObj); // 366
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator=(
				CAnimTagSpan* pObj);  // 319
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::CSmartPtr(
				CAnimTagSpan* pObj);  // 109
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::NumAllocated(); // 1196
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::Base(); // 112
		Base(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 368
		ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 824
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::IsGrowable(); // 823
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int num);  // 1198
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
		AddToTail(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				const CSmartPtr<CAnimTagSpan, CRefCountAccessor>& src);  // 110
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagSpan>(CAnimTagSpan* pObj); // 344
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::~CSmartPtr(); // 114
	}
} /* size: 445, variables: 1 */

// <01094242> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:122
// variable: 1
// function calls: 21
void CBlend2DItem::RemoveTagSpan(IAnimTagSpan* pTagSpan)
{
	{
		int i; // 126
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 126
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int i);  // 128
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 128
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagSpan>(CAnimTagSpan* pObj); // 344
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimTagSpan> >(CSmartPtr<CAnimTagSpan, CRefCountAccessor>* pMemory); // 1607
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int i);  // 1114
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
					int elem,
					int num);  // 1608
		Remove(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int elem);  // 130
	}
	CBlend2DItem::RemoveTagSpan(
			IAnimTagSpan* pTagSpan);  // 122
} /* size: 225, inline expansions: 1 (159 bytes) */

// <0108340A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:122
// variable: 1
void CBlend2DItem::RemoveTagSpan(IAnimTagSpan* pTagSpan)
{
	{
		int i; // 126
	}
} /* size: 0 */

// <01094AF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:139
// function calls: 3
void CBlend2DItem::GetTagSpanInternal(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
			int i);  // 141
	CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 141
} /* size: 0, inline expansions: 3 (0 bytes) */

// <010833E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:139
void CBlend2DItem::GetTagSpanInternal(int index)
{
} /* size: 0 */

// <01094BBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:147
// variable: 1
// function calls: 17
void CBlend2DItem::SetContext(const CAnimGraphContextPtr& context)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 149
	{
		int i; // 150
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 150
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int i);  // 152
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 152
	}
} /* size: 129, inline expansions: 13 (177 bytes) */

// <0108339E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:147
// variable: 1
void CBlend2DItem::SetContext(const CAnimGraphContextPtr& context)
{
	{
		int i; // 150
	}
} /* size: 0 */

// <01082F98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:163
// function calls: 19
void CBlend2DAnimNode::CBlend2DAnimNode()
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
	CAnimNodeBase::CAnimNodeBase(); // 164
	CUtlMemory<CBlend2DItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBlend2DItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::CUtlVector(); // 164
	AnimParamID::AnimParamID(); // 164
	IBlend2DAnimNode::IBlend2DAnimNode(); // 164
	ISequenceUser::ISequenceUser(); // 164
	AnimParamID::AnimParamID(); // 164
} /* size: 263, inline expansions: 19 (339 bytes) */

// <01082F7F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:163
void CBlend2DAnimNode::CBlend2DAnimNode()
{
} /* size: 0 */

// <01082F67> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:172
void CBlend2DAnimNode::GetChildCount()
{
} /* size: 0 */

// <01082F2A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:180
void CBlend2DAnimNode::GetChild(int childIndex)
{
} /* size: 7 */

// <01082EC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:188
// function call: 1
void CBlend2DAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(); // 190
} /* size: 14, inline expansions: 1 (6 bytes) */

// <01082E7D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:196
void CBlend2DAnimNode::SetChildID(int childIndex, AnimNodeID id)
{
} /* size: 5 */

// <010928E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:204
// function calls: 2
void CBlend2DAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(); // 206
	CBlend2DAnimNode::GetChildName(
			int childIndex);  // 204
} /* size: 130, inline expansions: 2 (64 bytes) */

// <01082E42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:204
// variable: 1
void CBlend2DAnimNode::GetChildName(int childIndex)
{
	const CUtlString  sEmptyString; // 206
} /* size: 0, variables: 1 */

// <0108228D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:213
// variables: 11
// function calls: 35
void CBlend2DAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CBlend2DUpdateNode* pNode; // 217
	{
		int i; // 230
		{
			const CBlend2DItem& currentItem; // 232
			float flDuration; // 234
			HSequence sequence; // 236
			BlendItem_t& blendUpdateItem; // 247
			{
				const ISequence* pSequence; // 239
			}
			{
				int iTag; // 252
				{
					const CAnimTagSpan* pTagSpan; // 254
					TagSpan_t& tagInfo; // 256
					CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
							int i);  // 141
					CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 141
					CBlend2DItem::GetTagSpanInternal(
								int index);  // 254
					{
					}
					CRelativeOffset<TagSpan_t>::IsValid(); // 30
					CRelativeOffset<TagSpan_t>::Get(); // 90
					CRelativeArray<TagSpan_t>::operator[](
							int index);  // 256
				}
				Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 81
				CBlend2DItem::GetTagSpanCount(); // 252
			}
			CRelativeOffset<TagSpan_t>::SetOffset(
					const TagSpan_t* targetPtr);  // 20
			CRelativeOffset<TagSpan_t>::operator=(
					const TagSpan_t* targetPtr);  // 115
			{
			}
			CRelativeArray<TagSpan_t>::SetArray(
				const TagSpan_t* targetArray,
				int32 count);  // 250
			Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 81
			CBlend2DItem::GetTagSpanCount(); // 250
			{
				uint32 i; // 160
				TagSpan_t::TagSpan_t(); // 162
			}
			CPackedDataT<false>::AddArray<TagSpan_t>(
						uint32 count,
						CPackedHandle<TagSpan_t>* handleOut);  // 250
			Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 81
			CBlend2DItem::GetTagSpanCount(); // 250
			Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 81
			CBlend2DItem::GetTagSpanCount(); // 248
			CUtlString::Get(); // 99
			CUtlString::String(); // 244
			CAnimNodeBase::GetNote(); // 247
			CUtlMemory<CBlend2DItem, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::operator[](
					int i);  // 232
			CUtlString::Get(); // 99
			CUtlString::String(); // 236
		}
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Count(); // 230
	}
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Count(); // 217
	CPackedDataT<false>::AddItem<CBlend2DUpdateNode, CAnimGraphInitContext&, int, Blend2DMode>(
										CPackedHandle<CBlend2DUpdateNode>* handleOut);  // 217
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 219
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 221
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 221
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 223
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 223
} /* size: 0, variables: 1, inline expansions: 7 (179 bytes) */

// <01081A4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:270
// variables: 5
// function calls: 37
void CBlend2DAnimNode::SetContext(const CAnimGraphContextPtr& context)
{
	{
		CBlend2DItem& item; // 274
		CUtlVector<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >& __for_range; // 35224
		iterator __for_begin; // 3227
		iterator __for_end; // 3227
		CUtlMemory<CBlend2DItem, int>::Base(); // 112
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Base(); // 102
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::begin(); // 274
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Count(); // 104
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::end(); // 274
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
				CAnimGraphContext* pObj);  // 406
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 149
		{
			int i; // 150
			Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 150
			CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
					int i);  // 152
			CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 152
		}
		CBlend2DItem::SetContext(
				const CAnimGraphContextPtr& context);  // 276
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 39
	CAnimNodeBase::SetContext(
			const CAnimGraphContextPtr& context);  // 272
} /* size: 217, inline expansions: 14 (237 bytes) */

// <0109036F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:283
// function call: 1
void CBlend2DAnimNode::GetItemCount()
{
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Count(); // 285
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01081A31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:283
void CBlend2DAnimNode::GetItemCount()
{
} /* size: 0 */

// <010903C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:291
// function calls: 2
void CBlend2DAnimNode::GetItem(int index)
{
	CUtlMemory<CBlend2DItem, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::operator[](
			int i);  // 293
} /* size: 20, inline expansions: 2 (30 bytes) */

// <01081A0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:291
void CBlend2DAnimNode::GetItem(int index)
{
} /* size: 0 */

// <010810F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:307
// variable: 1
// function calls: 45
void CBlend2DAnimNode::AddItem()
{
	int index; // 309
	CUtlMemory<CBlend2DItem, int>::NumAllocated(); // 1143
	CUtlMemory<CBlend2DItem, int>::Base(); // 112
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Base(); // 368
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CBlend2DItem, int>::IsGrowable(); // 823
	CUtlMemory<CBlend2DItem, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CBlend2DItem, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CBlend2DItem, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CBlend2DItem, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Element(
		int i);  // 1148
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 27
	Object::Object(); // 14
	IAnimTagSpanContainer::IAnimTagSpanContainer(); // 14
	IBlend2DItem::IBlend2DItem(); // 27
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int> this); // 27
	CUtlString::CUtlString(); // 27
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 27
	CBlend2DItem::CBlend2DItem(); // 1479
	Construct<CBlend2DItem>(CBlend2DItem* pMemory); // 1148
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::AddToTail(); // 309
	CUtlMemory<CBlend2DItem, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::operator[](
			int i);  // 310
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 27
	CAnimNodeBase::GetContext(); // 310
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 310
	CUtlMemory<CBlend2DItem, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::operator[](
			int i);  // 311
} /* size: 539, variables: 1, inline expansions: 45 (1439 bytes) */

// <01095859> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:317
void CBlend2DAnimNode::RemoveItem(int index)
{
} /* size: 13 */

// <010958B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:325
// variable: 1
// function calls: 4
void CBlend2DAnimNode::RemoveItem(IBlend2DItem* pItem)
{
	{
		int i; // 329
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Count(); // 329
		CUtlMemory<CBlend2DItem, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::operator[](
				int i);  // 331
	}
	CBlend2DAnimNode::RemoveItem(
			IBlend2DItem* pItem);  // 325
} /* size: 65, inline expansions: 1 (52 bytes) */

// <01081097> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:325
// variable: 1
void CBlend2DAnimNode::RemoveItem(IBlend2DItem* pItem)
{
	{
		int i; // 329
	}
} /* size: 0 */

// <0108082E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:343
// variables: 9
// function calls: 30
void CBlend2DAnimNode::GetBlendSpaceExtents(HModel hModel)
{
	float flMaxRunSpeed; // 345
	Range_t vHorizontalRange; // 352
	Range_t vVerticalRange; // 353
	Vector vMins; // 364
	Vector vMaxs; // 365
	{
		const CMovementSettings  moveSettings; // 348
		{
			int i; // 1721
			CUtlMemory<CMoveSpeed, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 19
			CMoveSpeed::~CMoveSpeed(); // 1526
			Destruct<CMoveSpeed>(CMoveSpeed* pMemory); // 1723
		}
		CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::RemoveAll(); // 1798
		CUtlMemory<CMoveSpeed, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CMoveSpeed, int>::Purge(); // 903
		CUtlMemory<CMoveSpeed, int>::Purge(); // 1799
		CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Purge(); // 560
		ValidateAlignment<CMoveSpeed>(void); // 508
		CUtlMemory<CMoveSpeed, int>::Purge(); // 510
		CUtlMemory<CMoveSpeed, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::~CUtlVector(); // 43
		CUtlString::~CUtlString(); // 43
		CMovementSettings::~CMovementSettings(); // 350
	}
	{
		int i; // 356
		{
			Vector2D vBlendValue; // 358
			CAnimNodeBase::GetNote(); // 358
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 358
			CUtlMemory<CBlend2DItem, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::operator[](
					int i);  // 358
		}
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Count(); // 356
	}
	CWeakHandle<InfoForResourceTypeCModel>::HasData(); // 346
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 364
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 365
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 367
} /* size: 481, variables: 5, inline expansions: 8 (78 bytes) */

// <01094F83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:373
// variables: 5
// function calls: 16
void CBlend2DAnimNode::GenerateBlendValues(HModel hModel)
{
	CWeakHandle<InfoForResourceTypeCModel>::HasData(); // 375
	{
		int i; // 378
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Count(); // 378
		{
			CBlend2DItem& currentItem; // 380
			HSequence sequence; // 381
			{
				const ISequence* pSequence; // 384
				Vector2D vPos; // 386
				CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 384
				CAnimNodeBase::GetNote(); // 386
				Vector2D::Vector2D(
					const Vector2D& vOther);  // 386
				AnimParamID::AnimParamID(
						const AnimParamID& rhs);  // 388
				AnimParamID::AnimParamID(
						const AnimParamID& rhs);  // 389
				Vector2D::operator=(
						const Vector2D& vOther);  // 73
				CBlend2DItem::SetBlendValue(
						const Vector2D& vBlendValue);  // 391
			}
			HSequence::operator==(
					const HSequence& other);  // 382
			CUtlString::Get(); // 99
			CUtlString::String(); // 381
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 381
			CUtlMemory<CBlend2DItem, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::operator[](
					int i);  // 380
		}
	}
	CBlend2DAnimNode::GenerateBlendValues(
				HModel hModel);  // 373
} /* size: 399, inline expansions: 2 (341 bytes) */

// <010807C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:373
// variables: 5
void CBlend2DAnimNode::GenerateBlendValues(HModel hModel)
{
	{
		int i; // 378
		{
			CBlend2DItem& currentItem; // 380
			HSequence sequence; // 381
			{
				const ISequence* pSequence; // 384
				Vector2D vPos; // 386
			}
		}
	}
} /* size: 0 */

// <0108023C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:400
// variables: 7
// function calls: 20
void CBlend2DAnimNode::GetHorizontalName()
{
	CUtlString xName; // 402
	CSchemaType_DeclaredEnum* pEnum; // 404
	const char   __FUNCTION__; // 20070
	{
		EnumIntrospectionHandle_t pEnumInfo; // 407
		const CSchemaEnumeratorInfo* pInfo; // 410
		const char* pFriendlyName; // 414
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 408
		}
		CUtlString::Get(); // 72
		CSchemaType::GetName(); // 744
		CSchemaType_DeclaredEnum::LookupEnum(); // 740
		CSchemaType_DeclaredEnum::LookupEnum(); // 709
		CSchemaType_DeclaredEnum::GetEnum(); // 407
		CUtlString::operator=(
				const char* src);  // 412
		CSchemaEnumeratorInfo::GetName(); // 412
		TagName(void); // 26
		CSchemaMetadataSet::CSchemaMetadataSet(
					uint16 nNumEntries,
					const SchemaMetadataEntryData_t* pEntries);  // 16
		CSchemaEnumeratorInfo::GetMetadata(); // 88
		SchemaMetaGetPtr2(EnumeratorIntrospectionHandle_t enumeratorInfo,
					const char* pKey);  // 26
		GetPtr(EnumeratorIntrospectionHandle_t pObj); // 26
		GetValue(EnumeratorIntrospectionHandle_t pObj,
			const char* defaultValue);  // 414
		CUtlString::operator=(
				const char* src);  // 417
	}
	CUtlString::CUtlString(
			const char* pString);  // 402
	SchemaTypeScope(void); // 23
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<AnimValueSource>(void); // 404
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredEnum>(); // 404
} /* size: 0, variables: 3, inline expansions: 6 (209 bytes) */

// <0107FCB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:427
// variables: 7
// function calls: 20
void CBlend2DAnimNode::GetVerticalName()
{
	CUtlString xName; // 429
	CSchemaType_DeclaredEnum* pEnum; // 431
	const char   __FUNCTION__; // 20016
	{
		EnumIntrospectionHandle_t pEnumInfo; // 434
		const CSchemaEnumeratorInfo* pInfo; // 437
		const char* pFriendlyName; // 441
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 435
		}
		CUtlString::Get(); // 72
		CSchemaType::GetName(); // 744
		CSchemaType_DeclaredEnum::LookupEnum(); // 740
		CSchemaType_DeclaredEnum::LookupEnum(); // 709
		CSchemaType_DeclaredEnum::GetEnum(); // 434
		CUtlString::operator=(
				const char* src);  // 439
		CSchemaEnumeratorInfo::GetName(); // 439
		TagName(void); // 26
		CSchemaMetadataSet::CSchemaMetadataSet(
					uint16 nNumEntries,
					const SchemaMetadataEntryData_t* pEntries);  // 16
		CSchemaEnumeratorInfo::GetMetadata(); // 88
		SchemaMetaGetPtr2(EnumeratorIntrospectionHandle_t enumeratorInfo,
					const char* pKey);  // 26
		GetPtr(EnumeratorIntrospectionHandle_t pObj); // 26
		GetValue(EnumeratorIntrospectionHandle_t pObj,
			const char* defaultValue);  // 441
		CUtlString::operator=(
				const char* src);  // 444
	}
	CUtlString::CUtlString(
			const char* pString);  // 429
	SchemaTypeScope(void); // 23
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<AnimValueSource>(void); // 431
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredEnum>(); // 431
} /* size: 0, variables: 3, inline expansions: 6 (209 bytes) */

// <0107F6B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:454
// variables: 7
// function calls: 23
void CBlend2DAnimNode::GetSequencesUsed(CSequenceList& sequenceList)
{
	{
		const CBlend2DItem& item; // 456
		const CUtlVector<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >& __for_range; // 6719
		const_iterator __for_begin; // 3272
		const_iterator __for_end; // 3272
		CUtlMemory<CBlend2DItem, int>::Base(); // 113
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Base(); // 103
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::begin(); // 456
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::Count(); // 105
		CUtlVectorBase<CBlend2DItem, CUtlMemory<CBlend2DItem, int> >::end(); // 456
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
				const CUtlString& sequenceName);  // 458
	}
} /* size: 424 */

// <0107F4C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:465
// variables: 3
// function calls: 4
void CBlend2DAnimNode::ValidateSettings(CAnimGraphInitContext& initContext)
{
	bool bValid; // 467
	CAnimParamHandle hParamX; // 469
	CAnimParamHandle hParamY; // 476
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 469
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 476
	CAnimParamHandle::IsValid(); // 470
	CAnimParamHandle::IsValid(); // 477
} /* size: 226, variables: 3, inline expansions: 4 (36 bytes) */

// <0107F0F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:489
// variables: 7
// function calls: 9
void CBlend2DAnimNode::GetValueForSequence(const ISequence* pSequence, AnimValueSource blendSource, AnimParamID param, float& flValueOut)
{
	bool bFound; // 491
	Vector vTranslation; // 493
	QAngle vRotation; // 494
	{
		float flDuration; // 510
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 513
	}
	{
		float flDuration; // 527
	}
	{
		float flDuration; // 543
	}
	{
		float flDuration; // 559
	}
	Vector::Vector(); // 493
	QAngle::QAngle(); // 494
	Vector::Normalized(); // 501
} /* size: 450, variables: 3, inline expansions: 3 (23 bytes) */

// <0107EEF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnode.cpp:583
// variables: 2
// function calls: 5
void CBlend2DAnimNode::GetRangeForSource(AnimValueSource src, float flMaxRunSpeed)
{
	const char   __FUNCTION__; // 20070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
	}
	Range_t::Range_t(
		float flMin,
		float flMax);  // 635
	Range_t::Range_t(
		float flMin,
		float flMax);  // 606
	Range_t::Range_t(
		float flMin,
		float flMax);  // 610
	Range_t::Range_t(
		float flMin,
		float flMax);  // 613
	Range_t::Range_t(); // 642
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

