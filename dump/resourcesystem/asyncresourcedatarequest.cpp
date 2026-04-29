
//
// resourcesystem/asyncresourcedatarequest.cpp
//
//	referenced by: libengine2.so
//
//	functions: 42
//

// <021674EC> resourcesystem/asyncresourcedatarequest.cpp:28
void CAsyncProcessDataThread::CAsyncProcessDataThread()
{
} /* size: 0 */

// <021674CF> resourcesystem/asyncresourcedatarequest.cpp:28
inline void CAsyncProcessDataThread::CAsyncProcessDataThread()
{
} /* size: 0 */

// <0215C6A8> resourcesystem/asyncresourcedatarequest.cpp:28
void CAsyncProcessDataThread::~CAsyncProcessDataThread()
{
} /* size: 19 */

// <0215C619> resourcesystem/asyncresourcedatarequest.cpp:28
// function call: 1
void CAsyncProcessDataThread::~CAsyncProcessDataThread()
{
	CAsyncProcessDataThread::~CAsyncProcessDataThread(); // 28
} /* size: 46, inline expansions: 1 (19 bytes) */

// <0215C5FC> resourcesystem/asyncresourcedatarequest.cpp:28
inline void CAsyncProcessDataThread::~CAsyncProcessDataThread()
{
} /* size: 0 */

// <02167503> resourcesystem/asyncresourcedatarequest.cpp:30
// variables: 3
// function calls: 26
void CAsyncProcessDataThread::Run()
{
	{
		CAsyncResourceDataRequest* pRequest; // 36
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_41; // 41
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 41
			CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 135
			CUtlVectorBase<CAsyncResourceDataRequest::IsEmpty(); // 42
			CUtlMemory<CAsyncResourceDataRequest::operator[](
					int i);  // 616
			CUtlVectorBase<CAsyncResourceDataRequest::Head(); // 47
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 54
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 54
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 54
		}
		{
			uint i; // 1518
			__atomic_base<int>::load(
				memory_order __m);  // 1500
			__atomic_base<int>::compare_exchange_weak(
						__int_type& __i1,
						__int_type __i2,
						memory_order __m1,
						memory_order __m2);  // 555
			__atomic_base<int>::compare_exchange_weak(
						__int_type& __i1,
						__int_type __i2,
						memory_order __m);  // 1503
			ThreadPause(void); // 1509
			CThreadFastSemaphore::TryWait(); // 1520
			ThreadPause(void); // 1526
			ThreadPause(void); // 1527
		}
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1530
		CThreadFastSemaphore::Wait(); // 1515
		CThreadFastSemaphore::Wait(); // 38
	}
} /* size: 459 */

// <0216736D> resourcesystem/asyncresourcedatarequest.cpp:68
// function calls: 4
void InitializeAsyncProcessThread(void)
{
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 1484
	CThreadFastSemaphore::CThreadFastSemaphore(); // 70
	CAsyncProcessDataThread::CAsyncProcessDataThread(); // 71
} /* size: 128, inline expansions: 4 (57 bytes) */

// <02166C9A> resourcesystem/asyncresourcedatarequest.cpp:75
// variables: 3
// function calls: 26
void ShutdownAsyncProcessThread(void)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_78; // 78
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 78
		CUtlMemory<CAsyncResourceDataRequest::NumAllocated(); // 782
		CUtlMemory<CAsyncResourceDataRequest::Base(); // 112
		CUtlVectorBase<CAsyncResourceDataRequest::Base(); // 368
		CUtlVectorBase<CAsyncResourceDataRequest::ResetDbgInfo(); // 824
		CUtlVectorBase<CAsyncResourceDataRequest::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CAsyncResourceDataRequest::GrowVector(
				int num);  // 1274
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1097
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1097
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1097
		CUtlVectorBase<CAsyncResourceDataRequest::ShiftElementsRight(
					int elem,
					int num);  // 1275
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1276
		Construct<CAsyncResourceDataRequest*, CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory); // 1276
		CUtlVectorBase<CAsyncResourceDataRequest::InsertBefore(
				int elem,
				CAsyncResourceDataRequest *& src);  // 1238
		CUtlVectorBase<CAsyncResourceDataRequest::AddToHead(
				CAsyncResourceDataRequest *& src);  // 79
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1488
		{
			int32 nWaiters; // 1491
			int32 nWake; // 1492
		}
		CThreadFastSemaphore::Release(
			int32 releaseCount);  // 80
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 81
	}
} /* size: 309 */

// <021661C1> resourcesystem/asyncresourcedatarequest.cpp:91
// variables: 10
// function calls: 33
void CAsyncResourceDataRequest::CAsyncResourceDataRequest(ResourceHandle_t hResource, IAsyncResourceDataRequestOwner* pOwner, bool bAllowMemoryMappedFiles, ResourceManifestLoadPriority_t nPriority, bool bAddToQueueHead, int64 nFileOffset, size_t nLoadSizeBytes, const char* pFileNameOverride)
{
	{
		{
			IResourceUpdater* pResourceUpdater; // 108
			{
				CResourceName resourceName; // 111
				void* pReplacementData; // 115
				size_t nReplacementDataBufferSize; // 116
				UpdateResult_t nUpdate; // 118
				{
				}
				{
				}
				{
				}
			}
		}
	}
	{
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 99
		IAsyncResourceDataRequest::IAsyncResourceDataRequest(); // 99
		_Function_base::_Function_base(); // 371
		function<void(IAsyncResourceDataRequest::function(); // 99
		_Function_base::_Function_base(); // 371
		function(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this); // 99
		_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl(); // 303
		_Head_base<0, IAsyncProcessedDataResult::_Head_base(); // 303
		_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl(); // 966
		tuple<IAsyncProcessedDataResult::tuple(); // 167
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl(); // 232
		__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data(); // 298
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<>(); // 99
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 99
		__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1470
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr()2>* this); // 201
		shared_ptr<IAsyncReadRequest2>::shared_ptr(); // 99
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 99
		{
			IResourceUpdater* pResourceUpdater; // 108
			CResourceSystem::GetResourceUpdater(); // 108
			V_isempty(const char* pszString); // 109
			{
				CResourceName resourceName; // 111
				void* pReplacementData; // 115
				size_t nReplacementDataBufferSize; // 116
				UpdateResult_t nUpdate; // 118
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 112
				{
				}
				{
				}
				{
				}
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 138
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 138
			}
		}
	}
} /* size: 0 */

// <021660A2> resourcesystem/asyncresourcedatarequest.cpp:91
// variables: 9
void CAsyncResourceDataRequest::CAsyncResourceDataRequest(ResourceHandle_t hResource, IAsyncResourceDataRequestOwner* pOwner, bool bAllowMemoryMappedFiles, ResourceManifestLoadPriority_t nPriority, bool bAddToQueueHead, int64 nFileOffset, size_t nLoadSizeBytes, const char* pFileNameOverride)
{
	const char   __FUNCTION__; // 35577
	{
		IResourceUpdater* pResourceUpdater; // 108
		{
			CResourceName resourceName; // 111
			void* pReplacementData; // 115
			size_t nReplacementDataBufferSize; // 116
			UpdateResult_t nUpdate; // 118
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 135
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 136
			}
		}
	}
} /* size: 0, variables: 1 */

// <02165BF0> resourcesystem/asyncresourcedatarequest.cpp:148
// function calls: 21
void CAsyncResourceDataRequest::CAsyncResourceDataRequest(ResourceHandle_t hResource, IAsyncResourceDataRequestOwner* pOwner, void* pExistingFullFileBuffer, size_t nExistingFullFileBufferSize, int64 nFileOffset, size_t nLoadSizeBytes)
{
	IAsyncResourceDataRequest::IAsyncResourceDataRequest(); // 149
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 149
	_Function_base::_Function_base(); // 371
	function<void(IAsyncResourceDataRequest::function(); // 149
	_Function_base::_Function_base(); // 371
	function(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this); // 149
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl(); // 303
	_Head_base<0, IAsyncProcessedDataResult::_Head_base(); // 303
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl(); // 966
	tuple<IAsyncProcessedDataResult::tuple(); // 167
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<>(); // 149
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 149
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1470
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr()2>* this); // 201
	shared_ptr<IAsyncReadRequest2>::shared_ptr(); // 149
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 149
} /* size: 0, inline expansions: 21 (0 bytes) */

// <02165B8F> resourcesystem/asyncresourcedatarequest.cpp:148
void CAsyncResourceDataRequest::CAsyncResourceDataRequest(ResourceHandle_t hResource, IAsyncResourceDataRequestOwner* pOwner, void* pExistingFullFileBuffer, size_t nExistingFullFileBufferSize, int64 nFileOffset, size_t nLoadSizeBytes)
{
} /* size: 0 */

// <02164E3C> resourcesystem/asyncresourcedatarequest.cpp:162
// variables: 20
// function calls: 58
void CAsyncResourceDataRequest::~CAsyncResourceDataRequest()
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_184; // 184
	}
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 167
	__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::operator->()2, false, false>* this); // 169
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 170
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_184; // 184
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 184
		{
			int i; // 1531
			CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 1531
			CUtlMemory<CAsyncResourceDataRequest::operator[](
					int i);  // 609
			CUtlVectorBase<CAsyncResourceDataRequest::Element(
				int i);  // 1533
		}
		CUtlVectorBase<CAsyncResourceDataRequest::Find(
			CAsyncResourceDataRequest* const& src);  // 1629
		CUtlVectorBase<CAsyncResourceDataRequest::FindAndFastRemove(
					CAsyncResourceDataRequest* const& src);  // 185
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 186
		_DebuggerBreakInlineExpressionWrapper(void); // 185
	}
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 81
	InMemoryData_t::~InMemoryData_t(); // 179
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<IAsyncReadRequest2>::~shared_ptr(); // 187
	{
		IAsyncProcessedDataResult *& __ptr; // 396
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
		default_delete<IAsyncProcessedDataResult>::operator(
				IAsyncProcessedDataResult* __ptr);  // 398
	}
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 187
	_Function_base::~_Function_base(); // 336
	~function(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this); // 187
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncResourceDataRequest::~function(); // 187
} /* size: 0, inline expansions: 28 (1869 bytes) */

// <02164D9D> resourcesystem/asyncresourcedatarequest.cpp:162
// variable: 1
void CAsyncResourceDataRequest::~CAsyncResourceDataRequest()
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_184; // 184
	}
} /* size: 0 */

// <02163BAC> resourcesystem/asyncresourcedatarequest.cpp:189
// variables: 23
// function calls: 78
void CAsyncResourceDataRequest::InitForFileRead(ResourceHandle_t hResource, bool bAllowMemoryMappedFiles, ResourceManifestLoadPriority_t nPriority, bool bAddToQueueHead, const char* pFileNameOverride)
{
	const char   __FUNCTION__; // 35332
	CPathBufferString fileName; // 194
	 callback; // 203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 191
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 194
	V_isempty(const char* pszString); // 195
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 266
	CAsyncResourceDataRequest::AddRef(); // 202
	_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBu this); // 472
	get(const unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder this); // 465
	operator->(const unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder this); // 215
	IReadRequestBuilder::SetReadOffset(
			int64 nReadOffset);  // 215
	IReadRequestBuilder::SetReadBytes(
			size_t nReadBytes);  // 215
	IReadRequestBuilder::SetPriority(
			AsyncRequestPriority_t priority);  // 215
	swap<void (*)(const std::_Any_data&, IAsyncReadRequest2*&&, AsyncRequestStatus_t&&)>(void ()(const union _Any_data &, IAsyncReadRequest2* &, AsyncRequestStatus_t &) *& __a,
												void ()(const union _Any_data &, IAsyncReadRequest2* &, AsyncRequestStatus_t &) *& __b); // 562
	swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
											bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
	swap<std::_Any_data>(union _Any_data& __a,
				union _Any_data& __b);  // 560
	function<void(IAsyncReadRequest2::swap(
		function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 491
	_Function_base::_Function_base(); // 407
	function<void(IAsyncReadRequest2::operator bool()>* this); // 409
	function<void(IAsyncReadRequest2::function(
		function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 491
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncReadRequest2::~function()>* this); // 491
	function<void(IAsyncReadRequest2::operator=(
			function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 304
	IReadRequestBuilder::SetCallback(
			ReadCallback_t& callback);  // 215
	IReadRequestBuilder::SetAllowMemoryMap(
				bool bAllow);  // 215
	{
		_M_create<CAsyncResourceDataRequest::InitForFileRead(ResourceHandle_t, bool, ResourceManifestLoadPriority_t, bool, char const*)::<lambda(IAsyncReadRequest2*, AsyncRequestStatus_t)> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
		_M_init_functor<CAsyncResourceDataRequest::InitForFileRead(ResourceHandle_t, bool, ResourceManifestLoadPriority_t, bool, char const*)::<lambda(IAsyncReadRequest2*, AsyncRequestStatus_t)> >(union _Any_data& __functor,
																class& __f); // 451
		_M_not_empty_function<CAsyncResourceDataRequest::InitForFileRead(ResourceHandle_t, bool, ResourceManifestLoadPriority_t, bool, char const*)::<lambda(IAsyncReadRequest2*, AsyncRequestStatus_t)> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void(IAsyncReadRequest2::function<CAsyncResourceDataRequest::InitForFileRead(
																class& __f);  // 214
	IReadRequestBuilder::SetMoveToFrontOfQueue(
				bool bFrontOfQueue);  // 215
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 216
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<IAsyncReadRequest2>::~shared_ptr(); // 216
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncReadRequest2::~function()>* this); // 214
	{
		IReadRequestBuilder *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> this); // 396
		unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> >::get_deleter(); // 398
		default_delete<IAsyncFileSystem2::IReadRequestBuilder>::operator(
				IReadRequestBuilder* __ptr);  // 398
	}
	unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> >::~unique_ptr(); // 209
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 217
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 209
} /* size: 0, variables: 3, inline expansions: 55 (2856 bytes) */

// <021638A9> resourcesystem/asyncresourcedatarequest.cpp:219
// variables: 4
// function calls: 8
void CAsyncResourceDataRequest::InitForInMemoryBuffer(ResourceHandle_t hResource, void* pBuffer, size_t nSize)
{
	const char   __FUNCTION__; // 35479
	int64 nAvailableSize; // 235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 221
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 221
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 81
	InMemoryData_t::InMemoryData_t(); // 223
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 252
} /* size: 0, variables: 2, inline expansions: 8 (82 bytes) */

// <021691F5> resourcesystem/asyncresourcedatarequest.cpp:264
// function calls: 2
void CAsyncResourceDataRequest::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 266
} /* size: 21, inline expansions: 2 (32 bytes) */

// <02163890> resourcesystem/asyncresourcedatarequest.cpp:264
void CAsyncResourceDataRequest::AddRef()
{
} /* size: 0 */

// <02169282> resourcesystem/asyncresourcedatarequest.cpp:269
// variable: 1
// function calls: 4
void CAsyncResourceDataRequest::Release()
{
	int nRefCount; // 272
	CInterlockedIntT<int, 4>::operator int(); // 271
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 272
	CAsyncResourceDataRequest::Release(); // 269
} /* size: 0, variables: 1, inline expansions: 4 (70 bytes) */

// <0216382B> resourcesystem/asyncresourcedatarequest.cpp:269
// variables: 3
void CAsyncResourceDataRequest::Release()
{
	const char   __FUNCTION__; // 35141
	int nRefCount; // 272
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 271
	}
} /* size: 0, variables: 2 */

// <02163638> resourcesystem/asyncresourcedatarequest.cpp:280
// variable: 1
// function calls: 8
void CAsyncResourceDataRequest::OnPriorityIncreased(ResourceManifestLoadPriority_t nPriority)
{
	{
		AsyncRequestPriority_t newPriority; // 284
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 1370
		__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::_M_get()2, false, false>* this); // 1364
		__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::operator->()2, false, false>* this); // 285
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 1370
		__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::_M_get()2, false, false>* this); // 1364
		__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::operator->()2, false, false>* this); // 287
	}
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 282
} /* size: 89, inline expansions: 2 (0 bytes) */

// <02168C2D> resourcesystem/asyncresourcedatarequest.cpp:292
void CAsyncResourceDataRequest::GetRequestStatus()
{
} /* size: 22 */

// <02168FDE> resourcesystem/asyncresourcedatarequest.cpp:297
// function calls: 10
void CAsyncResourceDataRequest::GetFileName()
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 299
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 94
	IAsyncReadRequest2::GetFileName(); // 300
	{
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 303
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 302
	}
	CAsyncResourceDataRequest::GetFileName(); // 297
} /* size: 0, inline expansions: 6 (164 bytes) */

// <02163590> resourcesystem/asyncresourcedatarequest.cpp:297
void CAsyncResourceDataRequest::GetFileName()
{
	{
	}
} /* size: 0 */

// <02168C9B> resourcesystem/asyncresourcedatarequest.cpp:308
// function calls: 2
void* CAsyncResourceDataRequest::GetResultBuffer()
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 310
	{
	}
	CAsyncResourceDataRequest::GetResultBuffer(); // 308
} /* size: 0, inline expansions: 2 (62 bytes) */

// <0216354E> resourcesystem/asyncresourcedatarequest.cpp:308
// variables: 2
void* CAsyncResourceDataRequest::GetResultBuffer()
{
	const char   __FUNCTION__; // 35332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 313
	}
} /* size: 0, variables: 1 */

// <02168D32> resourcesystem/asyncresourcedatarequest.cpp:317
// function calls: 3
void CAsyncResourceDataRequest::GetResultBufferSize()
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 319
	{
	}
	CAsyncResourceDataRequest::GetResultBufferSize(); // 317
} /* size: 0, inline expansions: 3 (66 bytes) */

// <02163511> resourcesystem/asyncresourcedatarequest.cpp:317
// variables: 2
void CAsyncResourceDataRequest::GetResultBufferSize()
{
	const char   __FUNCTION__; // 35430
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 322
	}
} /* size: 0, variables: 1 */

// <02168DFB> resourcesystem/asyncresourcedatarequest.cpp:326
// function calls: 2
void CAsyncResourceDataRequest::KeepResultBuffer(IMemoryMappedFile** pOut_CallerOwnsMemoryMap)
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 328
	{
	}
	CAsyncResourceDataRequest::KeepResultBuffer(
			IMemoryMappedFile** pOut_CallerOwnsMemoryMap);  // 326
} /* size: 0, inline expansions: 2 (94 bytes) */

// <021634C7> resourcesystem/asyncresourcedatarequest.cpp:326
// variables: 2
void CAsyncResourceDataRequest::KeepResultBuffer(IMemoryMappedFile** pOut_CallerOwnsMemoryMap)
{
	const char   __FUNCTION__; // 35359
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 334
	}
} /* size: 0, variables: 1 */

// <0216315F> resourcesystem/asyncresourcedatarequest.cpp:343
// variables: 2
// function calls: 14
void CAsyncResourceDataRequest::AssignCallback(Callback_t& pCallback)
{
	const char   __FUNCTION__; // 35305
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 345
	}
	_Function_base::_M_empty(); // 576
	function<void(IAsyncResourceDataRequest::operator bool(); // 748
	operator==<void, IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > >(const function<void(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProc __f,
																nullptr_t);  // 345
	_Function_base::_M_empty(); // 576
	function<void(IAsyncResourceDataRequest::operator bool(); // 409
	_Function_base::_Function_base(); // 407
	function<void(IAsyncResourceDataRequest::function(
		function<void(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedD __x);  // 491
	swap<std::_Any_data>(union _Any_data& __a,
				union _Any_data& __b);  // 560
	swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
											bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
	function<void(IAsyncResourceDataRequest::swap(
		function<void(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedD __x);  // 491
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncResourceDataRequest::~function(); // 491
	function<void(IAsyncResourceDataRequest::operator=(
			function<void(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedD __x);  // 346
} /* size: 0, variables: 1, inline expansions: 13 (313 bytes) */

// <02162D75> resourcesystem/asyncresourcedatarequest.cpp:349
// variables: 2
// function calls: 17
void CAsyncResourceDataRequest::AssignAsyncCallback(AsyncCallback_t& pAsyncCallback)
{
	const char   __FUNCTION__; // 35430
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 351
	}
	_Function_base::_M_empty(); // 576
	operator bool(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncRe this); // 748
	operator==<std::unique_ptr<IAsyncProcessedDataResult>, IAsyncResourceDataRequest*>(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource __f,
												nullptr_t);  // 351
	_Function_base::_M_empty(); // 576
	operator bool(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncRe this); // 409
	_Function_base::_Function_base(); // 407
	function(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this,
		function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResourceDataRe __x);  // 491
	swap<std::_Any_data>(union _Any_data& __a,
				union _Any_data& __b);  // 560
	swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
											bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
	swap(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this,
		function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResourceDataRe __x);  // 491
	_Function_base::~_Function_base(); // 336
	~function(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this); // 491
	operator=(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this,
			function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResourceDataRe __x);  // 352
	_Function_base::_M_empty(); // 576
	operator bool(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncRe this); // 748
	operator==<std::unique_ptr<IAsyncProcessedDataResult>, IAsyncResourceDataRequest*>(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource __f,
												nullptr_t);  // 353
} /* size: 0, variables: 1, inline expansions: 16 (325 bytes) */

// <0216203D> resourcesystem/asyncresourcedatarequest.cpp:356
// variables: 19
// function calls: 51
void CAsyncResourceDataRequest::Cancel()
{
	const char   __FUNCTION__; // 35114
	bool bIoDidComplete; // 362
	bool bRemovedFromQueue; // 363
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_366; // 366
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 366
		{
			int i; // 1531
			CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 1531
			CUtlMemory<CAsyncResourceDataRequest::operator[](
					int i);  // 609
			CUtlVectorBase<CAsyncResourceDataRequest::Element(
				int i);  // 1533
		}
		CUtlVectorBase<CAsyncResourceDataRequest::Find(
			CAsyncResourceDataRequest* const& src);  // 1629
		CUtlVectorBase<CAsyncResourceDataRequest::FindAndFastRemove(
					CAsyncResourceDataRequest* const& src);  // 379
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 380
		{
			int i; // 1531
			CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 1531
			CUtlMemory<CAsyncResourceDataRequest::operator[](
					int i);  // 609
			CUtlVectorBase<CAsyncResourceDataRequest::Element(
				int i);  // 1533
		}
		CUtlVectorBase<CAsyncResourceDataRequest::Find(
			CAsyncResourceDataRequest* const& src);  // 1629
		CUtlVectorBase<CAsyncResourceDataRequest::FindAndFastRemove(
					CAsyncResourceDataRequest* const& src);  // 375
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_389; // 389
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 389
		{
			int i; // 1531
			CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 1531
			CUtlMemory<CAsyncResourceDataRequest::operator[](
					int i);  // 609
			CUtlVectorBase<CAsyncResourceDataRequest::Element(
				int i);  // 1533
		}
		CUtlVectorBase<CAsyncResourceDataRequest::Find(
			CAsyncResourceDataRequest* const& src);  // 1629
		CUtlVectorBase<CAsyncResourceDataRequest::FindAndFastRemove(
					CAsyncResourceDataRequest* const& src);  // 390
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 391
	}
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 394
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 397
} /* size: 0, variables: 3, inline expansions: 14 (954 bytes) */

// <02161EE6> resourcesystem/asyncresourcedatarequest.cpp:411
// function calls: 3
void CAsyncResourceDataRequest::GetProfilingInfo(uint64* pOutEventTimesArrayUS, int nBufferSizeBytes)
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 413
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 419
} /* size: 50, inline expansions: 3 (29 bytes) */

// <02161611> resourcesystem/asyncresourcedatarequest.cpp:427
// variables: 6
// function calls: 34
void CAsyncResourceDataRequest::Submit()
{
	const char   __FUNCTION__; // 35114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 431
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_440; // 440
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 440
		CAsyncResourceDataRequest::GetRequestStatus(); // 442
		CUtlMemory<CAsyncResourceDataRequest::NumAllocated(); // 1247
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1252
		Construct<CAsyncResourceDataRequest*, CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory); // 1252
		CUtlMemory<CAsyncResourceDataRequest::Base(); // 112
		CUtlVectorBase<CAsyncResourceDataRequest::Base(); // 368
		CUtlVectorBase<CAsyncResourceDataRequest::ResetDbgInfo(); // 824
		CUtlVectorBase<CAsyncResourceDataRequest::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CAsyncResourceDataRequest::AddToTail(
				CAsyncResourceDataRequest *& src);  // 449
		CResourceSystem::GetResourceProgresEvent(); // 450
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 452
		CUtlMemory<CAsyncResourceDataRequest::NumAllocated(); // 1247
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1252
		Construct<CAsyncResourceDataRequest*, CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory); // 1252
		CUtlMemory<CAsyncResourceDataRequest::Base(); // 112
		CUtlVectorBase<CAsyncResourceDataRequest::Base(); // 368
		CUtlVectorBase<CAsyncResourceDataRequest::ResetDbgInfo(); // 824
		CUtlVectorBase<CAsyncResourceDataRequest::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CAsyncResourceDataRequest::AddToTail(
				CAsyncResourceDataRequest *& src);  // 444
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1488
		{
			int32 nWaiters; // 1491
			int32 nWake; // 1492
		}
		CThreadFastSemaphore::Release(
			int32 releaseCount);  // 445
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 456
	}
	CAsyncResourceDataRequest::IsForInMemoryData(); // 429
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 456
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 1370
	__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::_M_get()2, false, false>* this); // 1364
	__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::operator->()2, false, false>* this); // 458
} /* size: 0, variables: 1, inline expansions: 6 (62 bytes) */

// <0216117D> resourcesystem/asyncresourcedatarequest.cpp:462
// variables: 6
// function calls: 12
void ProcessCompletedRequests(int nCallbackCountLimit)
{
	int nCompletedFileCallbacks; // 465
	const char   __FUNCTION__; // 35550
	{
		CAsyncResourceDataRequest* pRequest; // 469
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_474; // 474
			{
				int i; // 476
				CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 476
				CUtlMemory<CAsyncResourceDataRequest::operator[](
						int i);  // 588
				CUtlVectorBase<CAsyncResourceDataRequest::operator[](
						int i);  // 478
				CAsyncResourceDataRequest::IsForInMemoryData(); // 478
			}
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 474
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 486
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 494
		}
		CAsyncResourceDataRequest::IsForInMemoryData(); // 496
		_DebuggerBreakInlineExpressionWrapper(void); // 503
	}
} /* size: 0, variables: 2 */

// <02160D7E> resourcesystem/asyncresourcedatarequest.cpp:509
// variables: 4
// function calls: 13
void ProcessAsyncRequests(int nLimit)
{
	int nProcessed; // 511
	{
		int i; // 512
		{
			CAsyncResourceDataRequest* pRequest; // 514
			{
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_517; // 517
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 943
				Lock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
						const CThreadMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 517
				CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 135
				CUtlVectorBase<CAsyncResourceDataRequest::IsEmpty(); // 519
				CUtlMemory<CAsyncResourceDataRequest::operator[](
						int i);  // 616
				CUtlVectorBase<CAsyncResourceDataRequest::Head(); // 519
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 526
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 526
			}
		}
	}
} /* size: 259, variables: 1 */

// <021601F6> resourcesystem/asyncresourcedatarequest.cpp:539
// variables: 6
// function calls: 46
void ProcessAsyncRequest(CAsyncResourceDataRequest* pRequest)
{
	const char   __FUNCTION__; // 35430
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 541
	}
	{
		CTimeAdder adder; // 549
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 63
		CFastTimer::CFastTimer(); // 132
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 335
		CFastTimer::Start(); // 135
		CTimeAdder::CTimeAdder(
				CCycleCount* pTotal);  // 549
		operator()(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncRe this,
				IAsyncResourceDataRequest* __args#0); // 551
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::release(); // 184
		default_delete<IAsyncProcessedDataResult>::operator(
				IAsyncProcessedDataResult* __ptr);  // 204
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::reset(
			pointer __p);  // 184
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::operator=(
				__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >& __u);  // 236
		__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::operator=(
				__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true> &);  // 408
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::operator=(
				unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > &);  // 551
		{
			IAsyncProcessedDataResult *& __ptr; // 396
			__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
			unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
			default_delete<IAsyncProcessedDataResult>::operator(
					IAsyncProcessedDataResult* __ptr);  // 398
		}
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 551
		operator=(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource this,
				nullptr_t);  // 552
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 344
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 345
		CFastTimer::End(); // 147
		CCycleCount::operator+=(
				const CCycleCount& other);  // 148
		CTimeAdder::End(); // 140
		CTimeAdder::~CTimeAdder(); // 553
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_557; // 557
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 557
		CUtlMemory<CAsyncResourceDataRequest::NumAllocated(); // 1196
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1201
		CopyConstruct<CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory,
								CAsyncResourceDataRequest* const& src);  // 1201
		CUtlMemory<CAsyncResourceDataRequest::Base(); // 112
		CUtlVectorBase<CAsyncResourceDataRequest::Base(); // 368
		CUtlVectorBase<CAsyncResourceDataRequest::ResetDbgInfo(); // 824
		CUtlVectorBase<CAsyncResourceDataRequest::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CAsyncResourceDataRequest::AddToTail(
				CAsyncResourceDataRequest* const& src);  // 558
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 559
	}
	_Function_base::_M_empty(); // 576
	operator bool(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncRe this); // 748
	operator==<std::unique_ptr<IAsyncProcessedDataResult>, IAsyncResourceDataRequest*>(const function<std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >(IAsyncResource __f,
												nullptr_t);  // 547
	CResourceSystem::GetResourceProgresEvent(); // 561
} /* size: 0, variables: 1, inline expansions: 4 (10 bytes) */

// <0215FEDE> resourcesystem/asyncresourcedatarequest.cpp:564
// variables: 5
// function calls: 12
void AbortCompletedRequests(void)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_566; // 566
	{
		CAsyncResourceDataRequest* pRequest; // 568
		CUtlVector<CAsyncResourceDataRequest*, CUtlMemory<CAsyncResourceDataRequest*, int> >& __for_range; // 39436
		iterator __for_begin; // 14568
		iterator __for_end; // 14568
		CUtlMemory<CAsyncResourceDataRequest::Base(); // 112
		CUtlVectorBase<CAsyncResourceDataRequest::Base(); // 102
		CUtlVectorBase<CAsyncResourceDataRequest::begin(); // 568
		CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 104
		CUtlVectorBase<CAsyncResourceDataRequest::end(); // 568
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 566
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 573
	CUtlVectorBase<CAsyncResourceDataRequest::RemoveAll(); // 572
} /* size: 237, variables: 1, inline expansions: 7 (383 bytes) */

// <0215FCCC> resourcesystem/asyncresourcedatarequest.cpp:575
// variable: 1
// function calls: 8
void HasCompletedRequests(void)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_577; // 577
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 577
	CUtlVectorBase<CAsyncResourceDataRequest::Count(); // 135
	CUtlVectorBase<CAsyncResourceDataRequest::IsEmpty(); // 578
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 579
} /* size: 118, variables: 1, inline expansions: 8 (207 bytes) */

// <0215F493> resourcesystem/asyncresourcedatarequest.cpp:586
// variables: 7
// function calls: 29
void CAsyncResourceDataRequest::IO_HandleAsyncResourceDataRequest(IAsyncReadRequest2* pRequest, AsyncRequestStatus_t status)
{
	const char   __FUNCTION__; // 35758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 588
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 589
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 590
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_594; // 594
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 594
		CUtlMemory<CAsyncResourceDataRequest::NumAllocated(); // 1247
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1252
		Construct<CAsyncResourceDataRequest*, CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory); // 1252
		CUtlMemory<CAsyncResourceDataRequest::Base(); // 112
		CUtlVectorBase<CAsyncResourceDataRequest::Base(); // 368
		CUtlVectorBase<CAsyncResourceDataRequest::ResetDbgInfo(); // 824
		CUtlVectorBase<CAsyncResourceDataRequest::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CAsyncResourceDataRequest::AddToTail(
				CAsyncResourceDataRequest *& src);  // 608
		CResourceSystem::GetResourceProgresEvent(); // 611
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 620
		CUtlMemory<CAsyncResourceDataRequest::NumAllocated(); // 1247
		CUtlMemory<CAsyncResourceDataRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncResourceDataRequest::Element(
			int i);  // 1252
		Construct<CAsyncResourceDataRequest*, CAsyncResourceDataRequest*>(CAsyncResourceDataRequest** pMemory); // 1252
		CUtlMemory<CAsyncResourceDataRequest::Base(); // 112
		CUtlVectorBase<CAsyncResourceDataRequest::Base(); // 368
		CUtlVectorBase<CAsyncResourceDataRequest::ResetDbgInfo(); // 824
		CUtlVectorBase<CAsyncResourceDataRequest::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CAsyncResourceDataRequest::AddToTail(
				CAsyncResourceDataRequest *& src);  // 603
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1488
		{
			int32 nWaiters; // 1491
			int32 nWake; // 1492
		}
		CThreadFastSemaphore::Release(
			int32 releaseCount);  // 604
	}
	CAsyncResourceDataRequest::IsForInMemoryData(); // 588
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 590
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0215E884> resourcesystem/asyncresourcedatarequest.cpp:626
// variables: 13
// function calls: 53
void CAsyncResourceDataRequest::ServiceCallback()
{
	const char   __FUNCTION__; // 35332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 628
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 629
	}
	{
		CTimeAdder adder; // 634
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 63
		CFastTimer::CFastTimer(); // 132
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 335
		CFastTimer::Start(); // 135
		CTimeAdder::CTimeAdder(
				CCycleCount* pTotal);  // 634
		function<void(IAsyncResourceDataRequest::operator(
				IAsyncResourceDataRequest* __args#0,
				unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > __args#1);  // 636
		_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl(
				_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >& __in);  // 324
		_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl(
				_Tuple_impl<0, IAsyncProcessedDataResult*, std::default_delete<IAsyncProcessedDataResult> > &);  // 996
		tuple<IAsyncProcessedDataResult::tuple(
			tuple<IAsyncProcessedDataResult*, std::default_delete<IAsyncProcessedDataResult> > &);  // 178
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 179
		__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl(
				__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >& __u);  // 235
		__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data(
				__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true> &);  // 359
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr(
				unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > &);  // 636
		{
			IAsyncProcessedDataResult *& __ptr; // 396
			__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::_M_ptr(); // 396
			unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::get_deleter(); // 398
			default_delete<IAsyncProcessedDataResult>::operator(
					IAsyncProcessedDataResult* __ptr);  // 398
		}
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::~unique_ptr(); // 636
		function<void(IAsyncResourceDataRequest::operator=(
				nullptr_t);  // 637
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 344
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 345
		CFastTimer::End(); // 147
		CCycleCount::operator+=(
				const CCycleCount& other);  // 148
		CTimeAdder::End(); // 140
		CTimeAdder::~CTimeAdder(); // 638
	}
	_Function_base::_M_empty(); // 576
	function<void(IAsyncResourceDataRequest::operator bool(); // 748
	operator==<void, IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > >(const function<void(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProc __f,
																nullptr_t);  // 632
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 643
} /* size: 0, variables: 1, inline expansions: 15 (1203 bytes) */

