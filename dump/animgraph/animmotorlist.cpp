
//
// animgraph/animmotorlist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//

// <0146EF50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:10
// function calls: 6
void CAnimMotorList::CAnimMotorList()
{
	IAnimMotorList::IAnimMotorList(); // 10
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, i this); // 10
} /* size: 48, inline expansions: 6 (24 bytes) */

// <0146EF37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:10
void CAnimMotorList::CAnimMotorList()
{
} /* size: 0 */

// <0146EC23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:16
// function calls: 10
void CAnimMotorList::GetMotorTypes()
{
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CS this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CS this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSmart this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTabl this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimMotorBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 18
} /* size: 254, inline expansions: 10 (604 bytes) */

// <0146EBC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:22
// function call: 1
void CAnimMotorList::GetMotorCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 24
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0146EA17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:28
// function calls: 5
void CAnimMotorList::GetMotor(int motorIndex)
{
	{
		Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 30
		CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
				int i);  // 32
		CSmartPtr<CAnimMotorBase, CRefCountAccessor>::Get(); // 32
		_DebuggerBreakInlineExpressionWrapper(void); // 30
	}
} /* size: 0 */

// <0146E869> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:41
// function calls: 5
void CAnimMotorList::GetMotor(int motorIndex)
{
	{
		Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 43
		CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this,
				int i);  // 45
		CSmartPtr<CAnimMotorBase, CRefCountAccessor>::Get(); // 45
		_DebuggerBreakInlineExpressionWrapper(void); // 43
	}
} /* size: 0 */

// <0146E667> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:54
// variable: 1
// function calls: 8
void CAnimMotorList::GetDefaultMotor()
{
	{
		int i; // 56
		Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 56
		CAnimMotorBase::IsDefault(); // 58
		CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
				int i);  // 58
		CSmartPtr<CAnimMotorBase, CRefCountAccessor>::operator->(); // 58
		CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
				int i);  // 60
		CSmartPtr<CAnimMotorBase, CRefCountAccessor>::Get(); // 60
	}
} /* size: 126 */

// <0146E641> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:68
// variable: 1
void CAnimMotorList::GetDefaultMotor()
{
	{
		int i; // 70
	}
} /* size: 0 */

// <0146E3D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:82
// variables: 2
// function calls: 6
void CAnimMotorList::SetDefaultMotor(IAnimMotor* pMotor)
{
	CAnimMotorBase* pPrevDefault; // 84
	CAnimMotorBase* pBaseDefault; // 90
	MyTypeID(void); // 170
	reflection_cast<CAnimMotorBase, IAnimMotor*>(IAnimMotor* obj); // 84
	CAnimMotorBase::SetDefault(
			bool bDefault);  // 87
	MyTypeID(void); // 170
	reflection_cast<CAnimMotorBase, IAnimMotor*>(IAnimMotor* obj); // 90
	CAnimMotorBase::SetDefault(
			bool bDefault);  // 93
} /* size: 330, variables: 2, inline expansions: 6 (425 bytes) */

// <0146DA38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:98
// variable: 1
// function calls: 40
void CAnimMotorList::AddMotor(const char* sMotorType)
{
	CAnimMotorBase* pNewMotor; // 100
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CS this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CS this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSmart this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTabl this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimMotorBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 100
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	Find(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymb this,
		const char* pString);  // 86
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlMem this); // 53
	{
	}
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CS this,
			int i);  // 54
	operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTabl this,
			IndexType_t n);  // 89
	CSmartPtr<Reflection::CTypeFactory<CAnimMotorBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 89
	CTypeFactory<CAnimMotorBase>::Create(
		const char* typeName);  // 100
	Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 135
	IsEmpty(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 103
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimMotorBase>(CAnimMotorBase* pObj); // 366
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::operator=(
			CAnimMotorBase* pObj);  // 319
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::CSmartPtr(
			CAnimMotorBase* pObj);  // 108
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::NumAllocated(); // 1247
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
		int i);  // 1252
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::CSmartPtr(
			CSmartPtr<CAnimMotorBase, CRefCountAccessor>& other);  // 1514
	Construct<CSmartPtr<CAnimMotorBase>, CSmartPtr<CAnimMotorBase, CRefCountAccessor> >(CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pMemory); // 1252
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
			int num);  // 1249
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
			CSmartPtr<CAnimMotorBase, CRefCountAccessor>& src);  // 108
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::~CSmartPtr(); // 108
	CAnimMotorBase::SetDefault(
			bool bDefault);  // 105
} /* size: 0, variables: 1, inline expansions: 40 (1097 bytes) */

// <0146D271> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:115
// variables: 2
// function calls: 38
void CAnimMotorList::RemoveMotor(IAnimMotor* pMotor)
{
	CAnimMotorBase* pBaseMotor; // 117
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimMotorBase>(CAnimMotorBase* pObj); // 366
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::operator=(
			CAnimMotorBase* pObj);  // 319
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::CSmartPtr(
			CAnimMotorBase* pObj);  // 120
	{
		int i; // 1531
		Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 1531
		CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this,
			int i);  // 1533
		CSmartPtr<CAnimMotorBase, CRefCountAccessor>::operator==<CAnimMotorBase>(
						const CSmartPtr<CAnimMotorBase, CRefCountAccessor>& other);  // 1533
	}
	Find(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this,
		const CSmartPtr<CAnimMotorBase, CRefCountAccessor>& src);  // 1617
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
		int i);  // 1607
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimMotorBase>(CAnimMotorBase* pObj); // 344
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::~CSmartPtr(); // 1526
	Destruct<CSmartPtr<CAnimMotorBase> >(CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pMemory); // 1607
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
		int i);  // 1114
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
		int elem);  // 1620
	FindAndRemove(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
			const CSmartPtr<CAnimMotorBase, CRefCountAccessor>& src);  // 120
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimMotorBase>(CAnimMotorBase* pObj); // 344
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::~CSmartPtr(); // 120
} /* size: 259, variables: 1, inline expansions: 34 (957 bytes) */

// <0146D0C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:125
// function calls: 5
void CAnimMotorList::GetMotorInternal(int motorIndex)
{
	{
		Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 127
		CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this,
				int i);  // 129
		CSmartPtr<CAnimMotorBase, CRefCountAccessor>::Get(); // 129
		_DebuggerBreakInlineExpressionWrapper(void); // 127
	}
} /* size: 0 */

// <0146CB40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorlist.cpp:138
// function calls: 26
void CAnimMotorList::operator=(const CAnimMotorList& rhs)
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 573
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 102
	begin(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 574
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::Base(); // 113
	Base(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 105
	Count(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 105
	end(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAc this); // 574
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimMotorBase>(CAnimMotorBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimMotorBase>(CAnimMotorBase* pObj); // 370
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::operator=(
			CAnimMotorBase* pObj);  // 406
	CSmartPtr<CAnimMotorBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimMotorBase, CRefCountAccessor>& other);  // 209
	UtlTraitsCopyRange<CSmartPtr<CAnimMotorBase> >(const CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pFrom,
							const CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pFromEnd,
							CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pTo);  // 200
	UtlTraitsCopyRange<CSmartPtr<CAnimMotorBase> >(const CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pFrom,
							const CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pFromEnd,
							CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pTo);  // 574
	operator=(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
			const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor other);  // 565
	operator=(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
			const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor other);  // 452
	operator=(const CUtlVector<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, i this,
			const CUtlVector<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, i src);  // 140
} /* size: 166, inline expansions: 26 (761 bytes) */

