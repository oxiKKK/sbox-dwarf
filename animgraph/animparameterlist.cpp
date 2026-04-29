
//
// animgraph/animparameterlist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 25
//

// <00F8018D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:13
// function calls: 8
void CAnimParameterList::CAnimParameterList()
{
	IAnimParameterList::IAnimParameterList(); // 13
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 13
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 530
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAcce this); // 13
} /* size: 79, inline expansions: 8 (94 bytes) */

// <00F80174> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:13
void CAnimParameterList::CAnimParameterList()
{
} /* size: 0 */

// <00F990D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:19
// function call: 1
void CAnimParameterList::Count()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 21
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00F8015B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:19
void CAnimParameterList::Count()
{
} /* size: 0 */

// <00F80085> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:25
// function calls: 3
void CAnimParameterList::GetParameter(int index)
{
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int i);  // 27
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 27
} /* size: 16, inline expansions: 3 (10 bytes) */

// <00F80061> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:31
void CAnimParameterList::GetParameter(int index)
{
} /* size: 0 */

// <00F7FE35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:37
// function calls: 9
void CAnimParameterList::GetParameter(AnimParamID id)
{
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 39
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 39
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 39
} /* size: 103, inline expansions: 9 (152 bytes) */

// <00F7FE12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:43
void CAnimParameterList::GetParameter(AnimParamID id)
{
} /* size: 0 */

// <00F7FC01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:49
// function calls: 8
void CAnimParameterList::GetParameter(const CUtlString& name)
{
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 51
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 51
} /* size: 97, inline expansions: 8 (134 bytes) */

// <00F7FBDD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:55
void CAnimParameterList::GetParameter(const CUtlString& name)
{
} /* size: 0 */

// <00F7EE59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:61
// variable: 1
// function calls: 57
void CAnimParameterList::AddParameter(const char* pParamType)
{
	CAnimParameterBasePtr pParam; // 63
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CS this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimParameterBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 63
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	Find(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtl this,
		const char* pString);  // 86
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUt this); // 53
	{
	}
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this,
			int i);  // 54
	operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this,
			IndexType_t n);  // 89
	CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 89
	CTypeFactory<CAnimParameterBase>::Create(
		const char* typeName);  // 63
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 366
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
			CAnimParameterBase* pObj);  // 319
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			CAnimParameterBase* pObj);  // 63
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator!=(
			const CAnimParameterBase* pOther);  // 64
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 370
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
			CAnimParameterBase* pObj);  // 406
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory,
							const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& src);  // 1201
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& src);  // 67
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 71
} /* size: 0, variables: 1, inline expansions: 57 (1380 bytes) */

// <00F7EA29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:74
// variable: 1
// function calls: 20
void CAnimParameterList::RemoveParameter(IAnimParameter* param)
{
	{
		int i; // 76
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 76
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
				int i);  // 78
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 78
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory); // 1607
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int i);  // 1114
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
					int elem,
					int num);  // 1608
		Remove(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int elem);  // 80
	}
} /* size: 195 */

// <00F7E9AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:87
void CAnimParameterList::RenameParameter(IAnimParameter* param, const CUtlString& pNewName)
{
} /* size: 25 */

// <00F7DD53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:96
// variables: 2
// function calls: 49
void CAnimParameterList::GetParameterTypes()
{
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CS this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimParameterBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 98
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUt this); // 76
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 76
	{
	}
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUt this); // 79
	Count(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtl this); // 113
	CUtlMemory<const Reflection::CClassInfo::ValidateGrowSize(); // 475
	CUtlMemory<const Reflection::CClassInfo::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<const Reflection::CClassInfo::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const Reflection::CClassInfo::ResetDbgInfo(); // 530
	CUtlVectorBase<const Reflection::CClassInfo::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<const Reflection::CClassInfo::CUtlVector(
			int growSize,
			int initCapacity);  // 113
	{
		short unsigned int i; // 115
		Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUt this); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUt this); // 79
		Count(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtl this); // 142
		First(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtl this); // 115
		{
			const CClassInfo& typeInfo; // 117
			{
			}
			CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUt this,
					int i);  // 63
			operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtl this,
					IndexType_t n);  // 117
			CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 117
			MyTypeID(void); // 46
			CAttributeContainer::HasAttribute<Attribute::Deprecated>(); // 118
			CUtlMemory<const Reflection::CClassInfo::NumAllocated(); // 1247
			CUtlMemory<const Reflection::CClassInfo::operator[](
					int i);  // 602
			CUtlVectorBase<const Reflection::CClassInfo::Element(
				int i);  // 1252
			Construct<const Reflection::CClassInfo*, const Reflection::CClassInfo*>(const CClassInfo ** pMemory); // 1252
			CUtlMemory<const Reflection::CClassInfo::Base(); // 112
			CUtlVectorBase<const Reflection::CClassInfo::Base(); // 368
			CUtlVectorBase<const Reflection::CClassInfo::ResetDbgInfo(); // 824
			CUtlVectorBase<const Reflection::CClassInfo::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<const Reflection::CClassInfo::AddToTail(
					const CClassInfo  *& src);  // 120
		}
		Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUt this); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUt this); // 79
		Count(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtl this); // 155
		Next(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimParameterBase>::CFactoryMaker, CRefCountAccessor>, CUtl this,
			IndexType_t i);  // 115
	}
	CTypeFactory<CAnimParameterBase>::GetTypes(
		bool bIncludeDeprecatedTypes);  // 98
} /* size: 0, inline expansions: 22 (1526 bytes) */

// <00F7DBB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:102
// variable: 1
// function calls: 5
void CAnimParameterList::GetIndexOfParameter(AnimParamID id)
{
	{
		int i; // 104
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 104
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
				int i);  // 106
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator->(); // 106
		AnimParamID::operator==(
				const AnimParamID& rhs);  // 106
	}
} /* size: 142 */

// <00F9E02F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:116
// function calls: 17
void CAnimParameterList::GetParameterInternal(int index)
{
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
			int i);  // 118
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 390
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
					CAnimParameterBase* pObj);  // 413
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
					const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr<CAnimParameterBase>(
					const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 118
} /* size: 105, inline expansions: 17 (350 bytes) */

// <00F7DB8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:116
void CAnimParameterList::GetParameterInternal(int index)
{
} /* size: 0 */

// <00F7D605> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:122
// variable: 1
// function calls: 24
void CAnimParameterList::GetParameterInternal(AnimParamID id)
{
	{
		int i; // 124
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 124
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
				int i);  // 126
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator->(); // 126
		AnimParamID::operator==(
				const AnimParamID& rhs);  // 126
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
				int i);  // 128
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 413
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 386
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 390
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
						CAnimParameterBase* pObj);  // 413
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
						const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 354
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr<CAnimParameterBase>(
						const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 128
	}
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=(
			const CAnimParameterBase* pObj);  // 319
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			const CAnimParameterBase* pObj);  // 132
} /* size: 226, inline expansions: 2 (11 bytes) */

// <00F7D2BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:136
// variable: 1
// function calls: 16
void CAnimParameterList::Clear()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 1798
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 1800
	Purge(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 138
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00F7CA54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:142
// variables: 3
// function calls: 34
void CAnimParameterList::AddParameterInternal(CAnimParameterBase* pParam)
{
	CUtlBuffer buffer; // 149
	CUtlString errors; // 152
	CAnimParameterBase* pParamCopy; // 158
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator bool(); // 144
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 144
	CUtlString::CUtlString(); // 152
	CUtlString::~CUtlString(); // 162
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 162
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 366
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
			CAnimParameterBase* pObj);  // 319
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			CAnimParameterBase* pObj);  // 159
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::NumAllocated(); // 1247
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
		int i);  // 1252
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 1514
	Construct<CSmartPtr<CAnimParameterBase>, CSmartPtr<CAnimParameterBase, CRefCountAccessor> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory); // 1252
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 824
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int num);  // 1249
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			CSmartPtr<CAnimParameterBase, CRefCountAccessor>& src);  // 159
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 159
} /* size: 433, variables: 3, inline expansions: 34 (494 bytes) */

// <00F7C973> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:165
// function calls: 3
void CAnimParameterList::GetParameterID(int nIndex)
{
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
			int i);  // 167
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator->(); // 167
} /* size: 75, inline expansions: 3 (14 bytes) */

// <00F7C8E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:171
// variables: 2
void CAnimParameterList::operator=(const CAnimParameterList& rhs)
{
	const char   __FUNCTION__; // 37570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
} /* size: 27, variables: 1 */

// <00F7C3C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:177
// variable: 1
// function calls: 22
void CAnimParameterList::FindParamByName(const CUtlString& name)
{
	{
		int i; // 179
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 179
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
				int i);  // 181
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator->(); // 181
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
				int i);  // 183
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 183
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 370
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
				CAnimParameterBase* pObj);  // 319
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
				CAnimParameterBase* pObj);  // 183
	}
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
			CAnimParameterBase* pObj);  // 319
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			CAnimParameterBase* pObj);  // 187
} /* size: 171, inline expansions: 2 (7 bytes) */

// <00F7BE63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:191
// variable: 1
// function calls: 23
void CAnimParameterList::FindParamByID(AnimParamID id)
{
	{
		int i; // 193
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 193
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
				int i);  // 195
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator->(); // 195
		AnimParamID::operator==(
				const AnimParamID& rhs);  // 195
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
				int i);  // 197
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 197
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 370
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
				CAnimParameterBase* pObj);  // 319
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
				CAnimParameterBase* pObj);  // 197
	}
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
			CAnimParameterBase* pObj);  // 319
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			CAnimParameterBase* pObj);  // 201
} /* size: 205, inline expansions: 2 (7 bytes) */

// <00F7BB96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:205
// variable: 1
// function calls: 11
void CAnimParameterList::CreateParamID()
{
	AnimParamID newID; // 207
	AnimParamID::AnimParamID(); // 207
	AnimParamID::operator=(
			uint32 id);  // 211
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 213
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator!=(
			const CAnimParameterBase* pOther);  // 213
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 213
} /* size: 156, variables: 1, inline expansions: 11 (111 bytes) */

