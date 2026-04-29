
//
// animgraph/animnodeinstancefactory.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <00F8BF1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.cpp:29
// function calls: 382
void CAnimNodeInstanceFactory::CAnimNodeInstanceFactory()
{
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this); // 178
	CUtlHashtable(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
			int minimumSize);  // 29
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CChoreoAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CChoreoAnimNode, CChoreoAnimNodeInstance>(); // 31
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CDirectPlaybackAnimNode, CDirectPlaybackAnimNodeInstance>(); // 32
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CSequenceAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CSequenceAnimNode, CSequenceAnimNodeInstance>(); // 33
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CStateMachineAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CStateMachineAnimNode, CStateMachineAnimNodeInstance>(); // 34
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CFootLockAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CFootLockAnimNode, CFootLockAnimNodeInstance>(); // 35
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CMotionMatchingAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CMotionMatchingAnimNode, CMotionMatchingAnimNodeInstance>(); // 36
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CSolveIKChainAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CSolveIKChainAnimNode, CSolveIKChainAnimNodeInstance>(); // 37
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CInputStreamAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CInputStreamAnimNode, CInputStreamAnimNodeInstance>(); // 38
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 26
	CFactoryMaker::CFactoryMaker(); // 37
	CFactoryMakerT<CBlend2DAnimNodeInstance>::CFactoryMakerT(); // 62
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			CFactoryMaker* pObj);  // 62
	MyTypeID(void); // 63
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this,
			int i);  // 720
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 370
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			CFactoryMaker* pObj);  // 406
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >(
													const ClassID& k,
													const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> >, const Reflection::ClassID&, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&>(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	DoInsert<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
						const ClassID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 249
	Insert(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 63
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 64
	CAnimNodeInstanceFactory::RegisterType<CBlend2DAnimNode, CBlend2DAnimNodeInstance>(); // 39
} /* size: 3171, inline expansions: 382 (13433 bytes) */

// <00F8BEFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.cpp:29
void CAnimNodeInstanceFactory::CAnimNodeInstanceFactory()
{
} /* size: 0 */

// <00F8B92B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.cpp:43
// variables: 2
// function calls: 23
void CAnimNodeInstanceFactory::CreateNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ClassID nodeTypeID; // 45
	UtlHashHandle_t handle; // 48
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator->(); // 45
	CClassInfo::GetID(); // 45
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 218
	Find(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, Def this,
		KeyArg_t k);  // 48
	Count(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this); // 204
	operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this,
			int i);  // 204
	IsValid(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> this); // 204
	IsValidHandle(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, Def this,
			handle_t idx);  // 49
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator->(); // 51
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 56
} /* size: 303, variables: 2, inline expansions: 23 (438 bytes) */

// <00F8B5DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.cpp:61
// variables: 3
// function calls: 14
void CAnimNodeInstanceFactory::FindNodeTypeForInstanceType(ClassID instanceInterfaceType)
{
	{
		UtlHashHandle_t i; // 63
		Base(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this); // 914
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this); // 915
			IsValid(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> this); // 917
		}
		NextHandle(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, Def this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, Def this); // 63
		operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this,
				int i);  // 296
		operator[](const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, Def this,
				handle_t idx);  // 65
		CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::operator->(); // 65
		operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this,
				int i);  // 293
		Key(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, Def this,
			handle_t idx);  // 67
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this); // 915
			IsValid(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> this); // 917
		}
		NextHandle(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, Def this,
				handle_t start);  // 63
	}
	ClassID::ClassID(); // 71
} /* size: 229, inline expansions: 1 (0 bytes) */

