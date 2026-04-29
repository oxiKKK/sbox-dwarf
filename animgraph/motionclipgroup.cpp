
//
// animgraph/motionclipgroup.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 23
//

// <01356D84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <013536E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10
void IMotionClipGroup::GetTypeInfo()
{
} /* size: 0 */

// <01353556> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10
// function calls: 3
void* IMotionClipGroup::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IMotionClipGroup>::CastTo(
		IMotionClipGroup* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <013533C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:10
// function calls: 3
const void* IMotionClipGroup::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IMotionClipGroup>::CastTo(
		const IMotionClipGroup* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <013567AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:13
void CMotionClipGroup::GetTypeInfo()
{
} /* size: 12 */

// <01352E97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:13
// function calls: 3
void* CMotionClipGroup::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CMotionClipGroup>::CastTo(
		CMotionClipGroup* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01352D03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:13
// function calls: 3
const void* CMotionClipGroup::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CMotionClipGroup>::CastTo(
		const CMotionClipGroup* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01352683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:17
// function calls: 12
void CMotionClipGroup::CMotionClipGroup()
{
	Object::Object(); // 17
	IMotionClipGroup::IMotionClipGroup(); // 17
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 17
	CUtlString::CUtlString(
			const char* pString);  // 17
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int> > this); // 17
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 17
	AnimTagID::AnimTagID(); // 17
} /* size: 119, inline expansions: 12 (104 bytes) */

// <0135266A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:17
void CMotionClipGroup::CMotionClipGroup()
{
} /* size: 0 */

// <0135263C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:23
void CMotionClipGroup::GetName()
{
} /* size: 9 */

// <013524F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:29
// function calls: 4
void CMotionClipGroup::SetName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 31
} /* size: 86, inline expansions: 4 (106 bytes) */

// <01352439> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:35
// function calls: 2
void CMotionClipGroup::GetTag()
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator!=(
			const CAnimGraphContext* pOther);  // 37
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 39
} /* size: 91, inline expansions: 2 (23 bytes) */

// <01352420> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:48
void CMotionClipGroup::GetTag()
{
} /* size: 0 */

// <013523C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:61
// function call: 1
void CMotionClipGroup::GetClipCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor this); // 63
} /* size: 8, inline expansions: 1 (0 bytes) */

// <013567D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:67
// function calls: 3
void CMotionClipGroup::GetClip(int index)
{
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			int i);  // 69
	CSmartPtr<CMotionClip, CRefCountAccessor>::Get(); // 69
} /* size: 16, inline expansions: 3 (10 bytes) */

// <0135239D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:67
void CMotionClipGroup::GetClip(int index)
{
} /* size: 0 */

// <01351A74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:79
// variable: 1
// function calls: 41
void CMotionClipGroup::AddClip()
{
	int index; // 81
	Object::Object(); // 14
	IAnimTagSpanContainer::IAnimTagSpanContainer(); // 14
	IMotionClip::IMotionClip(); // 17
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 17
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagSpan, CRefCountAccessor>, int> this); // 17
	CUtlString::CUtlString(); // 17
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 17
	CMotionClip::CMotionClip(); // 81
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMotionClip>(CMotionClip* pObj); // 366
	CSmartPtr<CMotionClip, CRefCountAccessor>::operator=(
			CMotionClip* pObj);  // 319
	CSmartPtr<CMotionClip, CRefCountAccessor>::CSmartPtr(
			CMotionClip* pObj);  // 81
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::NumAllocated(); // 1247
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 824
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::IsGrowable(); // 823
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			int num);  // 1249
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
		int i);  // 1252
	CSmartPtr<CMotionClip, CRefCountAccessor>::CSmartPtr(
			CSmartPtr<CMotionClip, CRefCountAccessor>& other);  // 1514
	Construct<CSmartPtr<CMotionClip>, CSmartPtr<CMotionClip, CRefCountAccessor> >(CSmartPtr<CMotionClip, CRefCountAccessor>* pMemory); // 1252
	AddToTail(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			CSmartPtr<CMotionClip, CRefCountAccessor>& src);  // 81
	CSmartPtr<CMotionClip, CRefCountAccessor>::~CSmartPtr(); // 81
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			int i);  // 82
	CSmartPtr<CMotionClip, CRefCountAccessor>::operator->(); // 82
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			int i);  // 83
	CSmartPtr<CMotionClip, CRefCountAccessor>::Get(); // 83
} /* size: 443, variables: 1, inline expansions: 41 (1027 bytes) */

// <01351676> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:87
// function calls: 18
void CMotionClipGroup::RemoveClip(int index)
{
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
		int i);  // 1607
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionClip>(CMotionClip* pObj); // 344
	CSmartPtr<CMotionClip, CRefCountAccessor>::~CSmartPtr(); // 1526
	Destruct<CSmartPtr<CMotionClip> >(CSmartPtr<CMotionClip, CRefCountAccessor>* pMemory); // 1607
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
		int i);  // 1114
	CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
		int elem);  // 89
} /* size: 136, inline expansions: 18 (396 bytes) */

// <01351266> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:93
// variable: 1
// function calls: 20
void CMotionClipGroup::RemoveClip(IMotionClip* pClip)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMotionClip>(CMotionClip* pObj); // 366
	CSmartPtr<CMotionClip, CRefCountAccessor>::operator=(
			CMotionClip* pObj);  // 319
	CSmartPtr<CMotionClip, CRefCountAccessor>::CSmartPtr(
			CMotionClip* pObj);  // 95
	{
		int i; // 1531
		Count(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor this); // 1531
		CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor this,
			int i);  // 1533
		CSmartPtr<CMotionClip, CRefCountAccessor>::operator==<CMotionClip>(
					const CSmartPtr<CMotionClip, CRefCountAccessor>& other);  // 1533
	}
	Find(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor this,
		const CSmartPtr<CMotionClip, CRefCountAccessor>& src);  // 1617
	FindAndRemove(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this,
			const CSmartPtr<CMotionClip, CRefCountAccessor>& src);  // 95
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionClip>(CMotionClip* pObj); // 344
	CSmartPtr<CMotionClip, CRefCountAccessor>::~CSmartPtr(); // 95
} /* size: 122, inline expansions: 16 (276 bytes) */

// <01350AEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:99
// variables: 4
// function calls: 33
void CMotionClipGroup::SetContext(const CAnimGraphContextPtr& context)
{
	{
		CMotionClipPtr pClip; // 103
		CUtlVector<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int> >& __for_range; // 31089
		iterator __for_begin; // 627
		iterator __for_end; // 627
		CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int>::Base(); // 112
		Base(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 102
		begin(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 103
		Count(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor this); // 104
		end(const CUtlVectorBase<CSmartPtr<CMotionClip, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClip, CRefCountAccessor>, int this); // 103
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CMotionClip>(CMotionClip* pObj); // 366
		CSmartPtr<CMotionClip, CRefCountAccessor>::operator=(
				CMotionClip* pObj);  // 406
		CSmartPtr<CMotionClip, CRefCountAccessor>::operator=(
				const CSmartPtr<CMotionClip, CRefCountAccessor>& other);  // 328
		CSmartPtr<CMotionClip, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CMotionClip, CRefCountAccessor>& other);  // 103
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CMotionClip>(CMotionClip* pObj); // 344
		CSmartPtr<CMotionClip, CRefCountAccessor>::~CSmartPtr(); // 106
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
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 101
} /* size: 177, inline expansions: 13 (187 bytes) */

// <01350A8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:110
// function call: 1
void CMotionClipGroup::GetTagID()
{
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 112
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01350A13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:116
// function call: 1
void CMotionClipGroup::SetTagID(AnimTagID id)
{
	AnimTagID::operator=(
			const AnimTagID& rhs);  // 118
} /* size: 0, inline expansions: 1 (0 bytes) */

// <013509EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionclipgroup.cpp:122
void CMotionClipGroup::GetClipInternal(int index)
{
} /* size: 0 */

