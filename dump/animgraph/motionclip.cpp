
//
// animgraph/motionclip.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 21
//

// <01356D66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <01356646> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9
void IMotionClip::GetTypeInfo()
{
} /* size: 0 */

// <01355C34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9
// function calls: 3
void* IMotionClip::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IMotionClip>::CastTo(
		IMotionClip* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01355AA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:9
// function calls: 3
const void* IMotionClip::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IMotionClip>::CastTo(
		const IMotionClip* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0135666F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:13
void CMotionClip::GetTypeInfo()
{
} /* size: 12 */

// <013551C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:13
// function calls: 3
void* CMotionClip::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CMotionClip>::CastTo(
		CMotionClip* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0135502D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:13
// function calls: 3
const void* CMotionClip::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CMotionClip>::CastTo(
		const CMotionClip* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01354978> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:17
// function calls: 12
void CMotionClip::CMotionClip()
{
	Object::Object(); // 14
	IAnimTagSpanContainer::IAnimTagSpanContainer(); // 14
	IMotionClip::IMotionClip(); // 17
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 17
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 530
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int> this); // 17
	CUtlString::CUtlString(); // 17
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 17
} /* size: 99, inline expansions: 12 (110 bytes) */

// <0135495F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:17
void CMotionClip::CMotionClip()
{
} /* size: 0 */

// <0135481C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:23
// variable: 1
// function calls: 2
void CMotionClip::GetSequenceName()
{
	const CUtlString& kDefaultName; // 25
	CUtlString::IsEmpty(); // 26
	CUtlString::CUtlString(
			const char* pString);  // 25
} /* size: 219, variables: 1, inline expansions: 2 (58 bytes) */

// <013546D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:35
// function calls: 4
void CMotionClip::SetSequenceName(const CUtlString& sequenceName)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 37
} /* size: 86, inline expansions: 4 (106 bytes) */

// <013546AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:41
void CMotionClip::IsLooping()
{
} /* size: 9 */

// <01356698> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:47
// function call: 1
void CMotionClip::GetTagSpanCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 49
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01354692> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:47
void CMotionClip::GetTagSpanCount()
{
} /* size: 0 */

// <013566F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:53
// function calls: 3
void CMotionClip::GetTagSpan(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int i);  // 55
	CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 55
} /* size: 27, inline expansions: 3 (14 bytes) */

// <0135466D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:53
void CMotionClip::GetTagSpan(int index)
{
} /* size: 0 */

// <01353CEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:65
// variables: 2
// function calls: 41
void CMotionClip::AddTagSpan(IAnimTag* tag)
{
	CAnimTagBase* tagBase; // 67
	{
		CAnimTagSpanPtr span; // 71
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimTagSpan>(CAnimTagSpan* pObj); // 366
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator=(
				CAnimTagSpan* pObj);  // 319
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::CSmartPtr(
				CAnimTagSpan* pObj);  // 71
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
				const CSmartPtr<CAnimTagSpan, CRefCountAccessor>& src);  // 72
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagSpan>(CAnimTagSpan* pObj); // 344
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::~CSmartPtr(); // 76
	}
} /* size: 445, variables: 1 */

// <013568DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:82
// variable: 1
// function calls: 21
void CMotionClip::RemoveTagSpan(IAnimTagSpan* pTagSpan)
{
	{
		int i; // 86
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 86
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int i);  // 88
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 88
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
			int elem);  // 90
	}
	CMotionClip::RemoveTagSpan(
			IAnimTagSpan* pTagSpan);  // 82
} /* size: 225, inline expansions: 1 (159 bytes) */

// <01353CB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:82
// variable: 1
void CMotionClip::RemoveTagSpan(IAnimTagSpan* pTagSpan)
{
	{
		int i; // 86
	}
} /* size: 0 */

// <01353BE5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:97
// function calls: 3
void CMotionClip::GetTagSpanInternal(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this,
			int i);  // 99
	CSmartPtr<CAnimTagSpan, CRefCountAccessor>::Get(); // 99
} /* size: 16, inline expansions: 3 (10 bytes) */

// <013537F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclip.cpp:103
// variable: 1
// function calls: 17
void CMotionClip::SetContext(const CAnimGraphContextPtr& context)
{
	{
		int i; // 106
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccess this); // 106
		CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
				int i);  // 108
		CSmartPtr<CAnimTagSpan, CRefCountAccessor>::operator->(); // 108
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
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 105
} /* size: 129, inline expansions: 13 (177 bytes) */

