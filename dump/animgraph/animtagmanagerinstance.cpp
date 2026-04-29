
//
// animgraph/animtagmanagerinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//

// <01316D8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:10
// function calls: 35
void CAnimTagManagerInstance::CAnimTagManagerInstance(const CAnimTagManagerConstPtr& sourceTagList, const CAnimGraphUpdateContextBuilderPtr& pUpdateContext)
{
	IAnimTagManagerInstance::IAnimTagManagerInstance(); // 12
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 12
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::Init(); // 178
	CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::CUtlHashtable(
			int minimumSize);  // 12
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimTagManager>(const CAnimTagManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimTagManager>(const CAnimTagManager* pObj); // 370
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=(
			const CAnimTagManager* pObj);  // 406
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimTagManager, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimTagManager, CRefCountAccessor>& other);  // 11
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 370
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator=(
			CAnimGraphUpdateContextBuilder* pObj);  // 406
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>& other);  // 12
} /* size: 215, inline expansions: 35 (654 bytes) */

// <01316D5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:10
void CAnimTagManagerInstance::CAnimTagManagerInstance(const CAnimTagManagerConstPtr& sourceTagList, const CAnimGraphUpdateContextBuilderPtr& pUpdateContext)
{
} /* size: 0 */

// <01316C94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:18
// function calls: 3
void CAnimTagManagerInstance::GetTagCount()
{
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator->(); // 20
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this); // 24
	CAnimTagManager::GetTagCount(); // 20
} /* size: 34, inline expansions: 3 (17 bytes) */

// <01316B50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:24
// function calls: 5
void CAnimTagManagerInstance::GetTag(int index)
{
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator->(); // 26
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int i);  // 30
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::Get(); // 30
	CAnimTagManager::GetTag(
		int index);  // 26
} /* size: 50, inline expansions: 5 (36 bytes) */

// <01314EC6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:30
// variables: 4
// function calls: 129
void CAnimTagManagerInstance::RegisterListener(ClassID tagTypeID, IAnimTagListener* listener)
{
	{
		ClassID derivedTypeID; // 34
		{
			UtlHashHandle_t handle; // 37
			Mix32HashFunctor::operator(
					uint32 n);  // 67
			ClassIDHashFunctor::operator(
					ClassID nType);  // 218
			CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::Find(
				KeyArg_t k);  // 37
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::Count(); // 204
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::operator[](
					int i);  // 204
			CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::IsValid(); // 204
			CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::IsValidHandle(
					handle_t idx);  // 40
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::operator[](
					int i);  // 706
			CUtlMemory<IAnimTagListener::ValidateGrowSize(); // 475
			CUtlMemory<IAnimTagListener::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<IAnimTagListener::ResetDbgInfo(); // 530
			CUtlVectorBase<IAnimTagListener::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<IAnimTagListener::CUtlVector(); // 61
			CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener::CUtlKeyValuePair<Reflection::ClassID>(
								const ClassID& k);  // 1514
			Construct<CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*> >, const Reflection::ClassID&>(CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* pMemory); // 706
			CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::DoInsert<const Reflection::ClassID&>(
								const ClassID& k,
								unsigned int h,
								bool* pDidInsert);  // 695
			CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::DoInsert<const Reflection::ClassID&>(
								const ClassID& k,
								unsigned int h,
								bool* pDidInsert);  // 240
			CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::Insert(
				KeyArg_t k);  // 42
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::operator[](
					int i);  // 297
			CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::operator[](
					handle_t idx);  // 45
			CUtlMemory<IAnimTagListener::NumAllocated(); // 1196
			CUtlMemory<IAnimTagListener::Base(); // 112
			CUtlVectorBase<IAnimTagListener::Base(); // 368
			CUtlVectorBase<IAnimTagListener::ResetDbgInfo(); // 824
			CUtlMemory<IAnimTagListener::IsGrowable(); // 823
			CUtlMemory<IAnimTagListener::IsExternallyAllocated(); // 859
			CUtlMemory<IAnimTagListener::IsExternallyAllocated(); // 861
			CUtlMemory<IAnimTagListener::Grow(
				int num);  // 806
			CUtlVectorBase<IAnimTagListener::GrowMemory(
					int num);  // 1198
			CopyConstruct<IAnimTagListener*>(IAnimTagListener** pMemory,
							IAnimTagListener* const& src);  // 1201
			CUtlMemory<IAnimTagListener::operator[](
					int i);  // 602
			CUtlVectorBase<IAnimTagListener::Element(
				int i);  // 1201
			CUtlVectorBase<IAnimTagListener::AddToTail(
					IAnimTagListener* const& src);  // 45
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 366
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator=(
					CAnimTagManagerInstance* pObj);  // 319
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::CSmartPtr(
					CAnimTagManagerInstance* pObj);  // 47
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 366
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator=(
					CAnimTagManagerInstance* pObj);  // 406
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>& other);  // 328
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>& other);  // 81
			CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
			CReceipt::CReceipt(); // 52
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 370
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator=(
					CAnimTagManagerInstance* pObj);  // 406
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>& other);  // 328
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>& other);  // 52
			CUnregisterReceipt2<CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>, void (CAnimTagManagerInstance::::CUnregisterReceipt2(
						CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor> obj,
						void ()(CAnimTagManagerInstance *, ClassID, IAnimTagListener *) CAnimTagManagerInstance::* func,
						ClassID param1,
						IAnimTagListener* param2);  // 81
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CReceipt>(CReceipt* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CReceipt>(CReceipt* pObj); // 370
			CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
					CReceipt* pObj);  // 319
			CSmartPtr<CReceipt, CRefCountAccessor>::CSmartPtr(
					CReceipt* pObj);  // 81
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 344
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::~CSmartPtr(); // 81
			MakeUnregisterReceipt<CSmartPtr<CAnimTagManagerInstance>, void (CAnimTagManagerInstance::*)(Reflection::ClassID, IAnimTagListener*), Reflection::ClassID, IAnimTagListener*>(CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor> obj,
																void ()(CAnimTagManagerInstance *, ClassID, IAnimTagListener *) CAnimTagManagerInstance::* func,
																ClassID param1,
																IAnimTagListener* param2); // 47
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 344
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::~CSmartPtr(); // 47
		}
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
		Get(void); // 34
		{
			short unsigned int i; // 143
			Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this); // 76
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
			CUtlSymbolTable::GetNumStrings(); // 76
			{
			}
			Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this); // 79
			Count(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this); // 142
			First(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this); // 143
			{
			}
			CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this,
					int i);  // 63
			operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this,
					IndexType_t n);  // 145
			CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 145
			Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this); // 62
			{
			}
			CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this,
					int i);  // 63
			operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this,
					IndexType_t n);  // 147
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
			CUtlSymbolTable::GetNumStrings(); // 76
			{
			}
			Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemor this); // 79
			Count(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this); // 155
			Next(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbol this,
				IndexType_t i);  // 143
			CSmartPtr<Reflection::CTypeFactory<CAnimTagBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 147
			CClassInfo::GetID(); // 147
		}
		CTypeFactory<CAnimTagBase>::GetDerivedIDFromBase(
					ClassID baseID);  // 34
	}
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 319
	CSmartPtr<CReceipt, CRefCountAccessor>::CSmartPtr(
			CReceipt* pObj);  // 51
} /* size: 0, inline expansions: 2 (11 bytes) */

// <01314DF1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:55
// variables: 2
// function call: 1
void CAnimTagManagerInstance::IsTagActive(int tagIndex)
{
	const CAnimUpdateTagList* pTagList; // 57
	TagActionStatus status; // 59
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 57
} /* size: 53, variables: 2, inline expansions: 1 (0 bytes) */

// <01314CCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:65
// function calls: 3
void CAnimTagManagerInstance::ForceEndActiveTags()
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 68
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 71
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 74
} /* size: 70, inline expansions: 3 (0 bytes) */

// <013149DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:78
// function calls: 12
void CAnimTagManagerInstance::GetTag(AnimTagID tagID)
{
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator->(); // 80
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 80
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
		AnimTagID tagID);  // 80
} /* size: 0, inline expansions: 12 (0 bytes) */

// <01314550> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:84
// variables: 5
// function calls: 16
void CAnimTagManagerInstance::SendTagEvent(int tagIndex, const AnimTagStatusContext& context)
{
	const IAnimTag* pTag; // 87
	{
		ClassID tagTypeID; // 91
		UtlHashHandle_t handle; // 93
		{
			const ListenerList& tagListeners; // 97
			{
				int i; // 100
				CUtlVectorBase<IAnimTagListener::Count(); // 100
				CUtlMemory<IAnimTagListener::operator[](
						int i);  // 595
				CUtlVectorBase<IAnimTagListener::operator[](
						int i);  // 102
			}
		}
		CClassInfo::GetID(); // 91
		Mix32HashFunctor::operator(
				uint32 n);  // 67
		ClassIDHashFunctor::operator(
				ClassID nType);  // 218
		CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::Find(
			KeyArg_t k);  // 93
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::Count(); // 204
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::operator[](
				int i);  // 204
		CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::IsValid(); // 204
		CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::IsValidHandle(
				handle_t idx);  // 94
	}
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator->(); // 87
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int i);  // 30
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::Get(); // 30
	CAnimTagManager::GetTag(
		int index);  // 87
} /* size: 282, variables: 1, inline expansions: 5 (29 bytes) */

// <01314096> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:109
// variables: 3
// function calls: 21
void CAnimTagManagerInstance::UnregisterListener(ClassID tagTypeID, IAnimTagListener* listener)
{
	{
		UtlHashHandle_t handle; // 113
		Mix32HashFunctor::operator(
				uint32 n);  // 67
		ClassIDHashFunctor::operator(
				ClassID nType);  // 218
		CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::Find(
			KeyArg_t k);  // 113
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::Count(); // 204
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::operator[](
				int i);  // 204
		CUtlHashtableEntry<Reflection::ClassID, CUtlVector<IAnimTagListener::IsValid(); // 204
		CUtlHashtable<Reflection::ClassID, CUtlVector<IAnimTagListener::IsValidHandle(
				handle_t idx);  // 114
		{
			int i; // 1531
			CUtlVectorBase<IAnimTagListener::Count(); // 1531
			CUtlMemory<IAnimTagListener::operator[](
					int i);  // 609
			CUtlVectorBase<IAnimTagListener::Element(
				int i);  // 1533
		}
		CUtlVectorBase<IAnimTagListener::Find(
			IAnimTagListener* const& src);  // 1629
		CUtlMemory<IAnimTagListener::operator[](
				int i);  // 602
		CUtlVectorBase<IAnimTagListener::Element(
			int i);  // 1575
		Destruct<IAnimTagListener*>(IAnimTagListener** pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<IAnimTagListener::operator[](
					int i);  // 602
			CUtlVectorBase<IAnimTagListener::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<IAnimTagListener::FastRemove(
				int elem);  // 1632
		CUtlVectorBase<IAnimTagListener::FindAndFastRemove(
					IAnimTagListener* const& src);  // 116
	}
	ClassID::IsValid(); // 111
} /* size: 225, inline expansions: 1 (0 bytes) */

// <01313FD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:122
// variable: 1
// function call: 1
void CAnimTagManagerInstance::Save(ISave* pSave)
{
	const CAnimUpdateTagList* pTagList; // 124
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 124
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01313F14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanagerinstance.cpp:129
// variable: 1
// function call: 1
void CAnimTagManagerInstance::Restore(IRestore* pRestore)
{
	CAnimUpdateTagList* pTagList; // 131
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 131
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

