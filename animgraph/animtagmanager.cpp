
//
// animgraph/animtagmanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 20
//

// <0131AF0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:10
// function calls: 8
void CAnimTagManager::CAnimTagManager()
{
	IAnimTagManager::IAnimTagManager(); // 10
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 10
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 530
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int> this); // 10
} /* size: 79, inline expansions: 8 (94 bytes) */

// <0131AEF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:10
void CAnimTagManager::CAnimTagManager()
{
} /* size: 0 */

// <0131ABE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:16
// function calls: 10
void CAnimTagManager::GetTagTypes()
{
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSma this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSma this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSmartPt this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTable> this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimTagBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 18
} /* size: 254, inline expansions: 10 (604 bytes) */

// <0131ED84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:22
// function call: 1
void CAnimTagManager::GetTagCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this); // 24
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0131ABC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:22
void CAnimTagManager::GetTagCount()
{
} /* size: 0 */

// <0131EDDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:28
// function calls: 3
void CAnimTagManager::GetTag(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int i);  // 30
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::Get(); // 30
} /* size: 16, inline expansions: 3 (10 bytes) */

// <0131ABA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:28
void CAnimTagManager::GetTag(int index)
{
} /* size: 0 */

// <0131F527> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:40
// function calls: 9
void CAnimTagManager::GetTag(AnimTagID tagID)
{
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 42
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::Get(); // 42
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 42
} /* size: 103, inline expansions: 9 (152 bytes) */

// <0131AB59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:40
void CAnimTagManager::GetTag(AnimTagID tagID)
{
} /* size: 0 */

// <0131AB11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:52
void CAnimTagManager::GetTagBase(AnimTagID tagID)
{
} /* size: 0 */

// <01319D3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:64
// variable: 1
// function calls: 58
void CAnimTagManager::AddTag(const char* tagTypeName)
{
	CAnimTagBasePtr newTag; // 66
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSma this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSma this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSmartPt this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTable> this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimTagBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 66
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	Find(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this,
		const char* pString);  // 86
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this); // 53
	{
	}
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSma this,
			int i);  // 54
	operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTable> this,
			IndexType_t n);  // 89
	CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 89
	CTypeFactory<CAnimTagBase>::Create(
		const char* typeName);  // 66
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagBase>(CAnimTagBase* pObj); // 366
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			CAnimTagBase* pObj);  // 319
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
			CAnimTagBase* pObj);  // 66
	AnimTagID::operator=(
			const AnimTagID& rhs);  // 42
	CAnimTagBase::SetID(
		AnimTagID id);  // 70
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagBase>(CAnimTagBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 370
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			CAnimTagBase* pObj);  // 406
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory,
						const CSmartPtr<CAnimTagBase, CRefCountAccessor>& src);  // 1201
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& src);  // 72
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 78
} /* size: 0, variables: 1, inline expansions: 58 (1383 bytes) */

// <01319847> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:81
// variables: 2
// function calls: 22
void CAnimTagManager::RemoveTag(IAnimTag* tag)
{
	CAnimTagBase* tagBase; // 83
	MyTypeID(void); // 170
	reflection_cast<CAnimTagBase, IAnimTag*>(IAnimTag* obj); // 83
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagBase>(CAnimTagBase* pObj); // 366
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			CAnimTagBase* pObj);  // 319
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
			CAnimTagBase* pObj);  // 86
	{
		int i; // 1531
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this); // 1531
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this,
			int i);  // 1533
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator==<CAnimTagBase>(
					const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 1533
	}
	Find(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this,
		const CSmartPtr<CAnimTagBase, CRefCountAccessor>& src);  // 1617
	FindAndRemove(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& src);  // 86
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 86
} /* size: 273, variables: 1, inline expansions: 18 (517 bytes) */

// <01318F04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:91
// variables: 3
// function calls: 38
void CAnimTagManager::AddTagInternal(CAnimTagBase* pTag)
{
	CUtlBuffer buffer; // 98
	CUtlString errors; // 101
	CAnimTagBase* pTagCopy; // 107
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 36
	CAnimTagBase::GetID(); // 93
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 42
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::Get(); // 42
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 42
	CAnimTagManager::GetTag(
		AnimTagID tagID);  // 93
	CUtlString::CUtlString(); // 101
	CUtlString::~CUtlString(); // 111
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 111
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagBase>(CAnimTagBase* pObj); // 366
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			CAnimTagBase* pObj);  // 319
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
			CAnimTagBase* pObj);  // 108
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::NumAllocated(); // 1247
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
		int i);  // 1252
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
			CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 1514
	Construct<CSmartPtr<CAnimTagBase>, CSmartPtr<CAnimTagBase, CRefCountAccessor> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory); // 1252
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int num);  // 1249
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			CSmartPtr<CAnimTagBase, CRefCountAccessor>& src);  // 108
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 108
} /* size: 497, variables: 3, inline expansions: 38 (618 bytes) */

// <01318501> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:114
// variable: 1
// function calls: 48
void CAnimTagManager::MoveTagToIndex(int oldIndex, int newIndex)
{
	CAnimTagBasePtr pTag; // 116
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int i);  // 116
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagBase>(CAnimTagBase* pObj); // 366
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			CAnimTagBase* pObj);  // 406
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 116
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::NumAllocated(); // 782
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int num);  // 1223
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
		int i);  // 1097
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	ShiftElementsRight(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
				int elem,
				int num);  // 1224
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
		int i);  // 1225
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagBase>(CAnimTagBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 370
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			CAnimTagBase* pObj);  // 406
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory,
						const CSmartPtr<CAnimTagBase, CRefCountAccessor>& src);  // 1225
	InsertBefore(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int elem,
			const CSmartPtr<CAnimTagBase, CRefCountAccessor>& src);  // 118
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 119
} /* size: 275, variables: 1, inline expansions: 48 (905 bytes) */

// <013182BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:122
// variable: 1
// function calls: 8
void CAnimTagManager::GetIndexOfTag(AnimTagID tagID)
{
	{
		int i; // 126
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this); // 126
		AnimTagID::AnimTagID(
				const AnimTagID& rhs);  // 36
		CAnimTagBase::GetID(); // 128
		AnimTagID::operator==(
				const AnimTagID& rhs);  // 128
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this,
				int i);  // 128
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator->(); // 128
	}
	AnimTagID::IsValid(); // 124
} /* size: 176, inline expansions: 1 (0 bytes) */

// <01318114> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:139
// variables: 3
// function calls: 4
void CAnimTagManager::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 21676
	{
		int i; // 143
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 149
		}
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this); // 143
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
				int i);  // 145
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator==(
				const CAnimTagBase* pOther);  // 145
	}
} /* size: 150, variables: 1 */

// <01317F6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:156
// function calls: 6
void CAnimTagManager::GetTagID(int index, AnimTagID* pOutID)
{
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this,
			int i);  // 158
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator->(); // 158
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 36
	CAnimTagBase::GetID(); // 158
	AnimTagID::operator=(
			const AnimTagID& rhs);  // 158
} /* size: 104, inline expansions: 6 (31 bytes) */

// <01317EDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:161
// variables: 2
void CAnimTagManager::operator=(const CAnimTagManager& rhs)
{
	const char   __FUNCTION__; // 21458
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 164
	}
} /* size: 27, variables: 1 */

// <013178EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:168
// variable: 1
// function calls: 26
void CAnimTagManager::FindTag(AnimTagID tagID)
{
	{
		int i; // 172
		Count(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this); // 172
		AnimTagID::AnimTagID(
				const AnimTagID& rhs);  // 36
		CAnimTagBase::GetID(); // 174
		AnimTagID::operator==(
				const AnimTagID& rhs);  // 174
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this,
				int i);  // 174
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator->(); // 174
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this,
				int i);  // 176
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimTagBase>(CAnimTagBase* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagBase>(CAnimTagBase* pObj); // 370
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
				CAnimTagBase* pObj);  // 406
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimTagBase, CRefCountAccessor>& other);  // 176
	}
	AnimTagID::IsValid(); // 170
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
			CAnimTagBase* pObj);  // 319
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::CSmartPtr(
			CAnimTagBase* pObj);  // 181
} /* size: 282, inline expansions: 3 (11 bytes) */

// <01317622> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:185
// variable: 1
// function calls: 11
void CAnimTagManager::CreateTagID()
{
	AnimTagID newID; // 187
	AnimTagID::AnimTagID(); // 187
	AnimTagID::operator=(
			uint32 id);  // 191
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 193
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator!=(
			const CAnimTagBase* pOther);  // 193
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 193
} /* size: 156, variables: 1, inline expansions: 11 (111 bytes) */

