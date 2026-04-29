
//
// filesystem/asyncfilesystem2.cpp
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 104
//

// <00062917> filesystem/asyncfilesystem2.cpp:18
// function call: 1
void OnAsyncThreadCountChanged(IConVar* var, const char* pOldValue, float flOldValue)
{
	ConVar::GetInt(); // 20
} /* size: 0, inline expansions: 1 (14 bytes) */

// <000628E8> filesystem/asyncfilesystem2.cpp:28
void IIOCompletionQueue::~IIOCompletionQueue()
{
} /* size: 0 */

// <00062865> filesystem/asyncfilesystem2.cpp:28
// function call: 1
void IIOCompletionQueue::~IIOCompletionQueue()
{
	IIOCompletionQueue::~IIOCompletionQueue(); // 30
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000627BB> filesystem/asyncfilesystem2.cpp:32
// function calls: 2
void IAsyncWriteRequest2::~IAsyncWriteRequest2()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 34
} /* size: 0, inline expansions: 2 (0 bytes) */

// <000626EA> filesystem/asyncfilesystem2.cpp:32
// function calls: 3
void IAsyncWriteRequest2::~IAsyncWriteRequest2()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 34
	IAsyncWriteRequest2::~IAsyncWriteRequest2(); // 34
} /* size: 0, inline expansions: 3 (0 bytes) */

// <000626D1> filesystem/asyncfilesystem2.cpp:32
void IAsyncWriteRequest2::~IAsyncWriteRequest2()
{
} /* size: 0 */

// <00062640> filesystem/asyncfilesystem2.cpp:36
// function calls: 2
void IAsyncReadRequest2::~IAsyncReadRequest2()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 38
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0006256F> filesystem/asyncfilesystem2.cpp:36
// function calls: 3
void IAsyncReadRequest2::~IAsyncReadRequest2()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 38
	IAsyncReadRequest2::~IAsyncReadRequest2(); // 38
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00062556> filesystem/asyncfilesystem2.cpp:36
void IAsyncReadRequest2::~IAsyncReadRequest2()
{
} /* size: 0 */

// <00062463> filesystem/asyncfilesystem2.cpp:40
// function calls: 4
void IAsyncCopyRequest2::~IAsyncCopyRequest2()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 42
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 42
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00062323> filesystem/asyncfilesystem2.cpp:40
// function calls: 5
void IAsyncCopyRequest2::~IAsyncCopyRequest2()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 42
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 42
	IAsyncCopyRequest2::~IAsyncCopyRequest2(); // 42
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0006230A> filesystem/asyncfilesystem2.cpp:40
void IAsyncCopyRequest2::~IAsyncCopyRequest2()
{
} /* size: 0 */

// <0004C32F> filesystem/asyncfilesystem2.cpp:47
void CIOServiceThread::~CIOServiceThread()
{
} /* size: 19 */

// <0004C2A1> filesystem/asyncfilesystem2.cpp:47
// function call: 1
void CIOServiceThread::~CIOServiceThread()
{
	CIOServiceThread::~CIOServiceThread(); // 47
} /* size: 46, inline expansions: 1 (19 bytes) */

// <0004C285> filesystem/asyncfilesystem2.cpp:47
inline void CIOServiceThread::~CIOServiceThread()
{
} /* size: 0 */

// <000622EE> filesystem/asyncfilesystem2.cpp:50
void CIOServiceThread::CIOServiceThread(CAsyncFileSystem2* pFileSystem)
{
} /* size: 0 */

// <000622C9> filesystem/asyncfilesystem2.cpp:50
inline void CIOServiceThread::CIOServiceThread(CAsyncFileSystem2* pFileSystem)
{
} /* size: 0 */

// <00062262> filesystem/asyncfilesystem2.cpp:55
void CIOServiceThread::Run()
{
} /* size: 48 */

// <0006162D> filesystem/asyncfilesystem2.cpp:69
// function calls: 48
void CAsyncFileSystem2::CAsyncFileSystem2()
{
	IAppSystem::IAppSystem(); // 204
	IAsyncFileSystem2::IAsyncFileSystem2(); // 120
	CBaseAppSystem<IAsyncFileSystem2>::CBaseAppSystem(); // 171
	CTier0AppSystem<IAsyncFileSystem2, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IAsyncFileSystem2, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IAsyncFileSystem2, 0>::CTier2AppSystem(); // 70
	CThreadMutex::CThreadMutex(
			const char* pName);  // 70
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::ValidateGrowSize(); // 475
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::ResetDbgInfo(); // 530
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAsyncFileSystem2::CIOServiceThread::CUtlVector(); // 70
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 1484
	CThreadFastSemaphore::CThreadFastSemaphore(); // 70
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 1484
	CThreadFastSemaphore::CThreadFastSemaphore(); // 70
	CThreadMutex::CThreadMutex(
			const char* pName);  // 70
	__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::__new_allocator(); // 168
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocator(); // 550
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this); // 520
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this); // 520
	_Deque_impl_data::_Deque_impl_data(); // 550
	_Deque_impl::_Deque_impl(); // 462
	__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::__new_allocator(); // 183
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >(
								const allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >  &);  // 580
	_M_get_map_allocator(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequ this); // 599
	__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 600
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::~allocator(); // 601
	_M_allocate_map(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
			size_t __n);  // 649
	__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 586
	_M_allocate_node(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 687
	_M_create_nodes(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
			_Map_pointer __nstart,
			_Map_pointer __nfinish);  // 661
	_M_set_node(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			_Map_pointer __new_node);  // 670
	_M_set_node(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			_Map_pointer __new_node);  // 671
	_M_initialize_map(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
				size_t __num_elements);  // 463
	_Deque_base(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 858
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::deque(); // 70
} /* size: 461, inline expansions: 48 (825 bytes) */

// <00061614> filesystem/asyncfilesystem2.cpp:69
void CAsyncFileSystem2::CAsyncFileSystem2()
{
} /* size: 0 */

// <00060B8D> filesystem/asyncfilesystem2.cpp:74
// variable: 1
// function calls: 47
void CAsyncFileSystem2::~CAsyncFileSystem2()
{
	_M_get_Tp_allocator(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 1043
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1233
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::end(); // 1043
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2204
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2204
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_destroy_data(
			iterator __first,
			iterator __last,
			const allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >  &);  // 1043
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1214
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::begin(); // 1043
	{
		_Map_pointer __n; // 702
		__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::deallocate(
				weak_ptr<CAsyncFileSystem2::IRequest>* __p,
				size_type __n);  // 215
		allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::deallocate(
				weak_ptr<CAsyncFileSystem2::IRequest>* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 593
		_M_deallocate_node(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
					_Ptr __p);  // 703
	}
	_M_destroy_nodes(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
			_Map_pointer __nstart,
			_Map_pointer __nfinish);  // 625
	__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::__new_allocator(); // 183
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >(
								const allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >  &);  // 580
	_M_get_map_allocator(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequ this); // 606
	__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::deallocate(
			weak_ptr<CAsyncFileSystem2::IRequest>** __p,
			size_type __n);  // 215
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::deallocate(
			weak_ptr<CAsyncFileSystem2::IRequest>** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 607
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest>::~allocator(); // 608
	_M_deallocate_map(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
				_Map_pointer __p,
				size_t __n);  // 627
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::~allocator(); // 545
	_Deque_impl::~_Deque_impl(); // 629
	~_Deque_base(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 1043
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::~deque(); // 74
	CThreadMutex::~CThreadMutex(); // 92
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 92
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 92
	CThreadMutex::~CThreadMutex(); // 92
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::RemoveAll(); // 1798
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::IsExternallyAllocated(); // 905
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::Purge(); // 903
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::Purge(); // 1799
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Purge(); // 560
	ValidateAlignment<CAsyncFileSystem2::CIOServiceThread*>(void); // 508
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::Purge(); // 510
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::~CUtlMemory(); // 562
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::~CUtlVectorBase(); // 410
	CUtlVector<CAsyncFileSystem2::CIOServiceThread::~CUtlVector(); // 92
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IAsyncFileSystem2, 0>::~CTier2AppSystem(); // 92
} /* size: 411, inline expansions: 43 (887 bytes) */

// <00060B27> filesystem/asyncfilesystem2.cpp:74
void CAsyncFileSystem2::~CAsyncFileSystem2()
{
} /* size: 36 */

// <00060A10> filesystem/asyncfilesystem2.cpp:94
// variable: 1
// function calls: 2
void CAsyncFileSystem2::Init()
{
	InitReturnVal_t nRetVal; // 96
	CTier0AppSystem<IAsyncFileSystem2, 0>::Init(); // 71
	CTier2AppSystem<IAsyncFileSystem2, 0>::Init(); // 96
} /* size: 103, variables: 1, inline expansions: 2 (44 bytes) */

// <0006047A> filesystem/asyncfilesystem2.cpp:113
// variables: 3
// function calls: 21
void CAsyncFileSystem2::Shutdown()
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_116; // 116
		{
			int i; // 119
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1214
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::begin(); // 1935
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1233
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::end(); // 2221
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2204
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2204
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_destroy_data(
					iterator __first,
					iterator __last,
					const allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >  &);  // 2221
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2221
			{
				_Map_pointer __n; // 702
				__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::deallocate(
						weak_ptr<CAsyncFileSystem2::IRequest>* __p,
						size_type __n);  // 215
				allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::deallocate(
						weak_ptr<CAsyncFileSystem2::IRequest>* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 593
				_M_deallocate_node(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
							_Ptr __p);  // 703
			}
			_M_destroy_nodes(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
					_Map_pointer __nstart,
					_Map_pointer __nfinish);  // 2222
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_erase_at_end(
					iterator __pos);  // 1935
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::clear(); // 121
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
				int nLineNumber);  // 116
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 123
	}
} /* size: 407 */

// <000603A1> filesystem/asyncfilesystem2.cpp:131
// variable: 1
// function call: 1
void* CAsyncFileSystem2::QueryInterface(const char* pInterfaceName)
{
	{
		IAsyncFileSystem2* pInterface; // 136
	}
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 134
} /* size: 53, inline expansions: 1 (20 bytes) */

// <000660E7> filesystem/asyncfilesystem2.cpp:143
// function calls: 4
void CAsyncFileSystem2::ChangeThreadCount(int nThreadCount)
{
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Count(); // 135
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::IsEmpty(); // 151
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Count(); // 153
	CAsyncFileSystem2::ChangeThreadCount(
				int nThreadCount);  // 143
} /* size: 153, inline expansions: 4 (111 bytes) */

// <0006037C> filesystem/asyncfilesystem2.cpp:143
void CAsyncFileSystem2::ChangeThreadCount(int nThreadCount)
{
} /* size: 0 */

// <0005FD4E> filesystem/asyncfilesystem2.cpp:161
// variables: 5
// function calls: 22
void CAsyncFileSystem2::AbortAllAsyncIO()
{
	const char   __FUNCTION__; // 19768
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_166; // 166
		{
			int i; // 169
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1214
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::begin(); // 1935
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1233
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::end(); // 2221
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2204
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2204
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_destroy_data(
					iterator __first,
					iterator __last,
					const allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >  &);  // 2221
			_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
					const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2221
			{
				_Map_pointer __n; // 702
				__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::deallocate(
						weak_ptr<CAsyncFileSystem2::IRequest>* __p,
						size_type __n);  // 215
				allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::deallocate(
						weak_ptr<CAsyncFileSystem2::IRequest>* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 593
				_M_deallocate_node(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
							_Ptr __p);  // 703
			}
			_M_destroy_nodes(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
					_Map_pointer __nstart,
					_Map_pointer __nfinish);  // 2222
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_erase_at_end(
					iterator __pos);  // 1935
			deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::clear(); // 171
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
				int nLineNumber);  // 166
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 173
	}
	CAsyncFileSystem2::FinishAsyncIO(); // 176
} /* size: 0, variables: 1, inline expansions: 1 (30 bytes) */

// <00064B16> filesystem/asyncfilesystem2.cpp:179
// variable: 1
void CAsyncFileSystem2::FinishAsyncIO()
{
	size_t nRequestsInFlight; // 189
} /* size: 21, variables: 1 */

// <00064896> filesystem/asyncfilesystem2.cpp:179
// variables: 3
// function calls: 8
void CAsyncFileSystem2::FinishAsyncIO()
{
	size_t nRequestsInFlight; // 189
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_191; // 191
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 191
		{
			int i; // 192
			operator-(const _Self& __x,
					const _Self& __y);  // 1332
			size(const deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 194
		}
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 196
	}
} /* size: 249, variables: 1 */

// <0005FD0E> filesystem/asyncfilesystem2.cpp:179
// variables: 3
void CAsyncFileSystem2::FinishAsyncIO()
{
	size_t nRequestsInFlight; // 189
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_191; // 191
		{
			int i; // 192
		}
	}
} /* size: 0, variables: 1 */

// <0005FCA3> filesystem/asyncfilesystem2.cpp:205
// function call: 1
void CAsyncFileSystem2::FinishAsyncWrites()
{
	CAsyncFileSystem2::FinishAsyncIO(); // 208
} /* size: 42, inline expansions: 1 (14 bytes) */

// <0005F675> filesystem/asyncfilesystem2.cpp:211
// variables: 10
// function calls: 23
void CAsyncFileSystem2::SuspendAsyncIO()
{
	const char   __FUNCTION__; // 19741
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_217; // 217
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 217
		CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Count(); // 219
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1488
		{
			int32 nWaiters; // 1491
			int32 nWake; // 1492
		}
		CThreadFastSemaphore::Release(
			int32 releaseCount);  // 219
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 220
	}
	{
		CIOServiceThread* pThread; // 222
		CUtlVector<CAsyncFileSystem2::CIOServiceThread*, CUtlMemory<CAsyncFileSystem2::CIOServiceThread*, int> >& __for_range; // 17606
		iterator __for_begin; // 59306
		iterator __for_end; // 59306
		CUtlMemory<CAsyncFileSystem2::CIOServiceThread::Base(); // 112
		CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Base(); // 102
		CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::begin(); // 222
		CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Count(); // 104
		CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::end(); // 222
	}
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::Purge(); // 903
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::IsExternallyAllocated(); // 905
	CUtlMemory<CAsyncFileSystem2::CIOServiceThread::Purge(); // 1799
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::RemoveAll(); // 1798
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Purge(); // 1811
	{
		int i; // 1807
		CUtlMemory<CAsyncFileSystem2::CIOServiceThread::operator[](
				int i);  // 602
		CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::PurgeAndDeleteElements(); // 226
} /* size: 0, variables: 1, inline expansions: 7 (300 bytes) */

// <0005F10B> filesystem/asyncfilesystem2.cpp:229
// variables: 7
// function calls: 16
void CAsyncFileSystem2::ResumeAsyncIO()
{
	const char   __FUNCTION__; // 19714
	int ioThreadCount; // 236
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 231
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
	}
	{
		const int  nCpus; // 251
	}
	{
		int i; // 268
		{
			CIOServiceThread* pThread; // 270
			CUtlMemory<CAsyncFileSystem2::CIOServiceThread::Base(); // 112
			CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Base(); // 368
			CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::ResetDbgInfo(); // 824
			CUtlMemory<CAsyncFileSystem2::CIOServiceThread::IsGrowable(); // 823
			CUtlMemory<CAsyncFileSystem2::CIOServiceThread::IsExternallyAllocated(); // 859
			CUtlMemory<CAsyncFileSystem2::CIOServiceThread::IsExternallyAllocated(); // 861
			CUtlMemory<CAsyncFileSystem2::CIOServiceThread::Grow(
				int num);  // 806
			CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::GrowMemory(
					int num);  // 1198
			CUtlMemory<CAsyncFileSystem2::CIOServiceThread::operator[](
					int i);  // 602
			CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Element(
				int i);  // 1201
			CopyConstruct<CAsyncFileSystem2::CIOServiceThread*>(CIOServiceThread** pMemory,
										CIOServiceThread* const& src);  // 1201
			CUtlMemory<CAsyncFileSystem2::CIOServiceThread::NumAllocated(); // 1196
			CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::AddToTail(
					CIOServiceThread* const& src);  // 271
			CIOServiceThread::CIOServiceThread(
					CAsyncFileSystem2* pFileSystem);  // 270
		}
	}
	CUtlVectorBase<CAsyncFileSystem2::CIOServiceThread::Count(); // 232
	ConVar::GetInt(); // 236
} /* size: 0, variables: 2, inline expansions: 2 (11 bytes) */

// <0004BB10> filesystem/asyncfilesystem2.cpp:279
// variables: 4
// function calls: 25
void CAsyncFileSystem2::BlockUntilComplete<CAsyncFileSystem2::CReadRequestHandle>(CReadRequestHandle* pHandle)
{
	const char   __FUNCTION__; // 19849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_291; // 291
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 291
		CReadRequestHandle::IsInQueue(); // 292
		CReadRequestHandle::IsComplete(); // 292
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 298
		CReadRequestHandle::SetCompletionSemaphore(
					CThreadFastSemaphore* pSema);  // 297
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 298
	}
	CReadRequestHandle::SetPriority(
			AsyncRequestPriority_t priority);  // 301
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
	CThreadFastSemaphore::Wait(); // 306
	CReadRequestHandle::IsComplete(); // 308
	CReadRequestHandle::IsInQueue(); // 308
} /* size: 637, variables: 1, inline expansions: 6 (199 bytes) */

// <0004B476> filesystem/asyncfilesystem2.cpp:279
// variables: 4
// function calls: 23
void CAsyncFileSystem2::BlockUntilComplete<CAsyncFileSystem2::CWriteRequestHandle>(CWriteRequestHandle* pHandle)
{
	const char   __FUNCTION__; // 19849
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_291; // 291
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 291
		CWriteRequestHandle::IsComplete(); // 292
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 298
		CWriteRequestHandle::SetCompletionSemaphore(
					CThreadFastSemaphore* pSema);  // 297
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 298
	}
	CWriteRequestHandle::SetPriority(
			AsyncRequestPriority_t priority);  // 301
	CWriteRequestHandle::IsComplete(); // 308
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
	CThreadFastSemaphore::Wait(); // 306
} /* size: 556, variables: 1, inline expansions: 5 (193 bytes) */

// <0005F077> filesystem/asyncfilesystem2.cpp:315
// function call: 1
void CAsyncFileSystem2::BlockUntilComplete(const shared_ptr<IAsyncReadRequest2>& pRequest)
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 317
} /* size: 12, inline expansions: 1 (0 bytes) */

// <0005EFE3> filesystem/asyncfilesystem2.cpp:320
// function call: 1
void CAsyncFileSystem2::BlockUntilComplete(const shared_ptr<IAsyncWriteRequest2>& pRequest)
{
	__shared_ptr<IAsyncWriteRequest2, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 322
} /* size: 12, inline expansions: 1 (0 bytes) */

// <0005DE4C> filesystem/asyncfilesystem2.cpp:325
// variables: 6
// function calls: 81
void CAsyncFileSystem2::Submit(shared_ptr<CAsyncFileSystem2::IRequest> request, AsyncRequestPriority_t priority, bool bFrontOfQueue)
{
	const char   __FUNCTION__; // 19545
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 327
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_331; // 331
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 331
		__is_single_threaded(void); // 110
		__atomic_add_single(_Atomic_word* __mem,
					int __val);  // 111
		__atomic_add(volatile _Atomic_word* __mem,
				int __val);  // 113
		__atomic_add_dispatch(_Atomic_word* __mem,
					int __val);  // 203
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1151
		__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2026
		__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__weak_ptr<CAsyncFileSystem2::IRequest>(
							const __shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>& __r); // 828
		weak_ptr<CAsyncFileSystem2::IRequest>::weak_ptr<CAsyncFileSystem2::IRequest>(
							const shared_ptr<CAsyncFileSystem2::IRequest>& __r);  // 110
		construct_at<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::shared_ptr<CAsyncFileSystem2::IRequest>&>(weak_ptr<CAsyncFileSystem2::IRequest>* __location); // 676
		construct<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::shared_ptr<CAsyncFileSystem2::IRequest>&>(allocator_type& __a,
															weak_ptr<CAsyncFileSystem2::IRequest>* __p);  // 145
		operator-(const _Self& __x,
				const _Self& __y);  // 1332
		size(const deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 531
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_reserve_map_at_front(
					size_type __nodes_to_add);  // 2289
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_reserve_map_at_front(
					size_type __nodes_to_add);  // 535
		__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 586
		_M_allocate_node(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 536
		_M_set_node(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
				_Map_pointer __new_node);  // 539
		__is_single_threaded(void); // 110
		__atomic_add_single(_Atomic_word* __mem,
					int __val);  // 111
		__atomic_add(volatile _Atomic_word* __mem,
				int __val);  // 113
		__atomic_add_dispatch(_Atomic_word* __mem,
					int __val);  // 203
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1151
		__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2026
		__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__weak_ptr<CAsyncFileSystem2::IRequest>(
							const __shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>& __r); // 828
		weak_ptr<CAsyncFileSystem2::IRequest>::weak_ptr<CAsyncFileSystem2::IRequest>(
							const shared_ptr<CAsyncFileSystem2::IRequest>& __r);  // 110
		construct_at<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::shared_ptr<CAsyncFileSystem2::IRequest>&>(weak_ptr<CAsyncFileSystem2::IRequest>* __location); // 676
		construct<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::shared_ptr<CAsyncFileSystem2::IRequest>&>(allocator_type& __a,
															weak_ptr<CAsyncFileSystem2::IRequest>* __p);  // 543
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_push_front_aux<std::shared_ptr<CAsyncFileSystem2::IRequest>&>(); // 151
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::emplace_front<std::shared_ptr<CAsyncFileSystem2::IRequest>&>(); // 335
		__is_single_threaded(void); // 110
		__atomic_add_single(_Atomic_word* __mem,
					int __val);  // 111
		__atomic_add(volatile _Atomic_word* __mem,
				int __val);  // 113
		__atomic_add_dispatch(_Atomic_word* __mem,
					int __val);  // 203
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1151
		__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2026
		__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__weak_ptr<CAsyncFileSystem2::IRequest>(
							const __shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>& __r); // 828
		weak_ptr<CAsyncFileSystem2::IRequest>::weak_ptr<CAsyncFileSystem2::IRequest>(
							const shared_ptr<CAsyncFileSystem2::IRequest>& __r);  // 110
		construct_at<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::shared_ptr<CAsyncFileSystem2::IRequest>&>(weak_ptr<CAsyncFileSystem2::IRequest>* __location); // 676
		construct<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::shared_ptr<CAsyncFileSystem2::IRequest>&>(allocator_type& __a,
															weak_ptr<CAsyncFileSystem2::IRequest>* __p);  // 170
		operator-(const _Self& __x,
				const _Self& __y);  // 1332
		size(const deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 492
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_reserve_map_at_back(
					size_type __nodes_to_add);  // 2281
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_reserve_map_at_back(
					size_type __nodes_to_add);  // 496
		__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 586
		_M_allocate_node(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 497
		__is_single_threaded(void); // 110
		__atomic_add_single(_Atomic_word* __mem,
					int __val);  // 111
		__atomic_add(volatile _Atomic_word* __mem,
				int __val);  // 113
		__atomic_add_dispatch(_Atomic_word* __mem,
					int __val);  // 203
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1151
		__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2026
		__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__weak_ptr<CAsyncFileSystem2::IRequest>(
							const __shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>& __r); // 828
		weak_ptr<CAsyncFileSystem2::IRequest>::weak_ptr<CAsyncFileSystem2::IRequest>(
							const shared_ptr<CAsyncFileSystem2::IRequest>& __r);  // 110
		construct_at<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::shared_ptr<CAsyncFileSystem2::IRequest>&>(weak_ptr<CAsyncFileSystem2::IRequest>* __location); // 676
		construct<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::shared_ptr<CAsyncFileSystem2::IRequest>&>(allocator_type& __a,
															weak_ptr<CAsyncFileSystem2::IRequest>* __p);  // 501
		_M_set_node(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
				_Map_pointer __new_node);  // 507
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_push_back_aux<std::shared_ptr<CAsyncFileSystem2::IRequest>&>(); // 176
		_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
				const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1233
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::end(); // 1538
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::back(); // 178
		deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::emplace_back<std::shared_ptr<CAsyncFileSystem2::IRequest>&>(); // 339
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 341
	}
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 343
} /* size: 0, variables: 1, inline expansions: 2 (56 bytes) */

// <0005C790> filesystem/asyncfilesystem2.cpp:346
// variables: 18
// function calls: 107
void CAsyncFileSystem2::ChangePriority(IRequest* request, AsyncRequestPriority_t oldPriority, AsyncRequestPriority_t newPriority)
{
	const char   __FUNCTION__; // 19741
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_352; // 352
	_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CAsyncFileSystem2::IRequest>*> it; // 355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 348
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 350
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
			int nLineNumber);  // 352
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::IRequest>::~shared_ptr(); // 356
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 271
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock_nothrow()2>* this); // 1256
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
			const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r,
			nothrow_t); // 1739
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1104
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1741
	__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			const __weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>& __r,
			nothrow_t); // 535
	shared_ptr<CAsyncFileSystem2::IRequest>::shared_ptr(
			const weak_ptr<CAsyncFileSystem2::IRequest>& __r,
			nothrow_t);  // 874
	weak_ptr<CAsyncFileSystem2::IRequest>::lock(); // 356
	operator()(const class* __closure,
			weak_ptr<CAsyncFileSystem2::IRequest> r); // 318
	__is_single_threaded(void); // 110
	__atomic_add_single(_Atomic_word* __mem,
				int __val);  // 111
	__atomic_add(volatile _Atomic_word* __mem,
			int __val);  // 113
	__atomic_add_dispatch(_Atomic_word* __mem,
				int __val);  // 203
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1158
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
			const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2001
	__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__weak_ptr(
			const __weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2> &); // 830
	weak_ptr<CAsyncFileSystem2::IRequest>::weak_ptr(
		const weak_ptr<CAsyncFileSystem2::IRequest>  &);  // 318
	__is_single_threaded(void); // 100
	__exchange_and_add_single(_Atomic_word* __mem,
					int __val);  // 101
	__exchange_and_add(volatile _Atomic_word* __mem,
				int __val);  // 103
	__exchange_and_add_dispatch(_Atomic_word* __mem,
					int __val);  // 211
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
	__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
	__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
	weak_ptr<CAsyncFileSystem2::IRequest>::~weak_ptr(); // 318
	_Iter_pred<CAsyncFileSystem2::ChangePriority(IRequest::operator(
																_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CA __it);  // 2095
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2095
	_M_set_node(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			_Map_pointer __new_node);  // 198
	operator++(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this); // 193
	operator++(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this); // 2096
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 2097
	__find_if<std::_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CAsyncFileSystem2::IRequest>*>, __gnu_cxx::__ops::_Iter_pred<CAsyncFileSystem2::ChangePriority(IRequest*, AsyncRequestPriority_t, AsyncRequestPriority_t)::<lambda(std::weak_ptr<CAsyncFileSystem2::IRequest>)> > >(_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CA __first,
																_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CA __last,
																_Iter_pred<CAsyncFileSystem2::ChangePriority(IRequest*, AsyncRequestPriority_t, AsyncRequestPriority_t)::<lambda(std::wea __pred); // 3922
	_Iter_pred<CAsyncFileSystem2::ChangePriority(IRequest::_Iter_pred(
			 __pred);  // 325
	__pred_iter<CAsyncFileSystem2::ChangePriority(IRequest*, AsyncRequestPriority_t, AsyncRequestPriority_t)::<lambda(std::weak_ptr<CAsyncFileSystem2::IRequest>)> >(__pred); // 3922
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 3921
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 3921
	find_if<std::_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CAsyncFileSystem2::IRequest>*>, CAsyncFileSystem2::ChangePriority(IRequest*, AsyncRequestPriority_t, AsyncRequestPriority_t)::<lambda(std::weak_ptr<CAsyncFileSystem2::IRequest>)> >(_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CA __first,
																_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CA __last,
																 __pred); // 357
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1233
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::end(); // 355
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1214
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::begin(); // 355
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1233
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::end(); // 358
	__is_single_threaded(void); // 110
	__atomic_add_single(_Atomic_word* __mem,
				int __val);  // 111
	__atomic_add(volatile _Atomic_word* __mem,
			int __val);  // 113
	__atomic_add_dispatch(_Atomic_word* __mem,
				int __val);  // 203
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1158
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
			const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2001
	__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__weak_ptr(
			const __weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2> &); // 830
	weak_ptr<CAsyncFileSystem2::IRequest>::weak_ptr(
		const weak_ptr<CAsyncFileSystem2::IRequest>  &);  // 110
	construct_at<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&>(weak_ptr<CAsyncFileSystem2::IRequest>* __location); // 676
	construct<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&>(allocator_type& __a,
														weak_ptr<CAsyncFileSystem2::IRequest>* __p);  // 170
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1233
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::end(); // 1538
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::back(); // 178
	operator-(const _Self& __x,
			const _Self& __y);  // 1332
	size(const deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 492
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_reserve_map_at_back(
				size_type __nodes_to_add);  // 2281
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_reserve_map_at_back(
				size_type __nodes_to_add);  // 496
	__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 586
	_M_allocate_node(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 497
	__is_single_threaded(void); // 110
	__atomic_add_single(_Atomic_word* __mem,
				int __val);  // 111
	__atomic_add(volatile _Atomic_word* __mem,
			int __val);  // 113
	__atomic_add_dispatch(_Atomic_word* __mem,
				int __val);  // 203
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1158
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
			const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2001
	__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__weak_ptr(
			const __weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2> &); // 830
	weak_ptr<CAsyncFileSystem2::IRequest>::weak_ptr(
		const weak_ptr<CAsyncFileSystem2::IRequest>  &);  // 110
	construct_at<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&>(weak_ptr<CAsyncFileSystem2::IRequest>* __location); // 676
	construct<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&>(allocator_type& __a,
														weak_ptr<CAsyncFileSystem2::IRequest>* __p);  // 501
	_M_set_node(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			_Map_pointer __new_node);  // 507
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_push_back_aux<std::weak_ptr<CAsyncFileSystem2::IRequest>&>(); // 176
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::emplace_back<std::weak_ptr<CAsyncFileSystem2::IRequest>&>(); // 360
	_S_buffer_size(void); // 152
	_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
			_Elt_pointer __x,
			_Map_pointer __y);  // 180
	_M_const_cast(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, const std::weak_ptr<CAsyncFileSystem2::IRequest>& this); // 1878
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::erase(
		const_iterator __position);  // 361
	_Deque_iterator<std::_Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ptr<CAsyncFileSystem2::IRequest>*> >(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, const std::weak_ptr<CAsyncFileSystem2::IRequest>&, cons this,
																const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 361
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 368
} /* size: 0, variables: 3, inline expansions: 94 (6425 bytes) */

// <0005B608> filesystem/asyncfilesystem2.cpp:370
// variables: 15
// function calls: 85
void CAsyncFileSystem2::ServiceRequests()
{
	{
		shared_ptr<CAsyncFileSystem2::IRequest> request; // 376
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_379; // 379
			bool bFoundWork; // 381
			{
				int i; // 382
				operator==(const _Self& __x,
						const _Self& __y);  // 1415
				empty(const deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this); // 384
				_Deque_iterator(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
						const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ __x);  // 1214
				deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::begin(); // 1514
				deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::front(); // 387
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 271
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock_nothrow()2>* this); // 1256
				__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
						const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r,
						nothrow_t); // 1739
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1104
				__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1741
				__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
						const __weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>& __r,
						nothrow_t); // 535
				shared_ptr<CAsyncFileSystem2::IRequest>::shared_ptr(
						const weak_ptr<CAsyncFileSystem2::IRequest>& __r,
						nothrow_t);  // 874
				weak_ptr<CAsyncFileSystem2::IRequest>::lock(); // 387
				__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
				__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
					__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
				__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
						__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
				__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
				__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
				__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::operator=(
						__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>& __r); // 439
				shared_ptr<CAsyncFileSystem2::IRequest>::operator=(
						shared_ptr<CAsyncFileSystem2::IRequest>& __r);  // 387
				__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
				__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
				shared_ptr<CAsyncFileSystem2::IRequest>::~shared_ptr(); // 387
				__is_single_threaded(void); // 100
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 211
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
				__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
				__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
				weak_ptr<CAsyncFileSystem2::IRequest>::~weak_ptr(); // 88
				destroy_at<std::weak_ptr<CAsyncFileSystem2::IRequest> >(weak_ptr<CAsyncFileSystem2::IRequest>* __location); // 698
				destroy<std::weak_ptr<CAsyncFileSystem2::IRequest> >(allocator_type& __a,
											weak_ptr<CAsyncFileSystem2::IRequest>* __p);  // 1647
				__is_single_threaded(void); // 100
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 211
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
				__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
				__weak_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
				weak_ptr<CAsyncFileSystem2::IRequest>::~weak_ptr(); // 88
				destroy_at<std::weak_ptr<CAsyncFileSystem2::IRequest> >(weak_ptr<CAsyncFileSystem2::IRequest>* __location); // 698
				destroy<std::weak_ptr<CAsyncFileSystem2::IRequest> >(allocator_type& __a,
											weak_ptr<CAsyncFileSystem2::IRequest>* __p);  // 579
				__new_allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::deallocate(
						weak_ptr<CAsyncFileSystem2::IRequest>* __p,
						size_type __n);  // 215
				allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> >::deallocate(
						weak_ptr<CAsyncFileSystem2::IRequest>* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 593
				_M_deallocate_node(const _Deque_base<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > this,
							_Ptr __p);  // 581
				_M_set_node(const _Deque_iterator<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::weak_ptr<CAsyncFileSystem2::IRequest>&, std::weak_ this,
						_Map_pointer __new_node);  // 582
				deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::_M_pop_front_aux(); // 1652
				deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > >::pop_front(); // 388
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
					int nLineNumber);  // 379
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 399
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 399
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
		CThreadFastSemaphore::Wait(); // 374
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
		}
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
		__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
		__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
		shared_ptr<CAsyncFileSystem2::IRequest>::~shared_ptr(); // 405
	}
} /* size: 968 */

// <00064134> filesystem/asyncfilesystem2.cpp:412
// variables: 2
void* CAsyncFileSystem2::AllocateBuffer(size_t nBufferSize, const char* pDebugName)
{
	const int  nAlignment; // 414
	void* pMem; // 415
} /* size: 17, variables: 2 */

// <000641A5> filesystem/asyncfilesystem2.cpp:427
void CAsyncFileSystem2::ReleaseBuffer(void* pBuffer)
{
	{
	}
} /* size: 0 */

// <0005B551> filesystem/asyncfilesystem2.cpp:427
// variables: 2
void CAsyncFileSystem2::ReleaseBuffer(void* pBuffer)
{
	const char   __FUNCTION__; // 19714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 429
	}
} /* size: 0, variables: 1 */

// <0005B082> filesystem/asyncfilesystem2.cpp:451
// variables: 2
// function calls: 17
void CAsyncFileSystem2::NewReadRequest(const char* szFileName, const char* szPathID)
{
	const char   __FUNCTION__; // 19741
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 455
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 98
	_Function_base::_Function_base(); // 371
	function<void(IAsyncReadRequest2::function()>* this); // 256
	IReadRequestBuilder::IReadRequestBuilder(); // 99
	CReadRequestBuilder::CReadRequestBuilder(
				CAsyncFileSystem2* pFileSystem,
				const char* szFileName,
				const char* szPathID);  // 456
	_Head_base<1, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> >::_Tuple_impl(); // 303
	_Head_base<0, IAsyncFileSystem2::IReadRequestBuilder::_Head_base(); // 303
	_Tuple_impl<0, IAsyncFileSystem2::IReadRequestBuilder::_Tuple_impl(); // 966
	tuple<IAsyncFileSystem2::IReadRequestBuilder::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> this,
			pointer);  // 311
	unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> >::unique_ptr<>(
			pointer __p);  // 456
} /* size: 0, variables: 1, inline expansions: 17 (365 bytes) */

// <0005A538> filesystem/asyncfilesystem2.cpp:459
// variables: 10
// function calls: 58
void CReadRequestBuilder::Build()
{
	const char   __FUNCTION__; // 19518
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 461
	}
	{
		__allocator_type __a2; // 966
		__allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2> > > __guard; // 967
		_Sp_cp_type* __mem; // 968
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>* __pi; // 969
		allocate(const __new_allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cx this,
			size_type __n,
			const void  *);  // 203
		allocate(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lo this,
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 102
		__allocated_ptr(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<v this,
				allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_pol __a,
				pointer __ptr);  // 102
		__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2> > >(allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_pol __a); // 967
		__new_allocator(const __new_allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cx this); // 183
		allocator<void>(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lo this,
				const allocator<void>  &);  // 966
		_Construct<CAsyncFileSystem2::CReadRequestHandle, CAsyncFileSystem2::CReadRequestBuilder&>(CReadRequestHandle* __p); // 805
		construct<CAsyncFileSystem2::CReadRequestHandle, CAsyncFileSystem2::CReadRequestBuilder&>(allocator_type &,
														CReadRequestHandle* __p);  // 606
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_Sp_counted_base()2>* this); // 602
		__aligned_buffer<CAsyncFileSystem2::CReadRequestHandle>::_M_addr(); // 120
		__aligned_buffer<CAsyncFileSystem2::CReadRequestHandle>::_M_ptr(); // 652
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_ptr()2>* this); // 606
		_Sp_ebo_helper<0, std::allocator<void>, true>::_Sp_ebo_helper(
				const allocator<void>& __tp);  // 589
		_Impl::_Impl(
			allocator<void> __a);  // 602
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestBuilder&>(
										allocator<void> __a); // 969
		get(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::alloc this); // 968
		operator new(size_t,
				void* __p);  // 969
		operator=(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<v this,
				nullptr_t);  // 971
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_ptr()2>* this); // 973
		~__allocated_ptr(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<v this); // 974
		~allocator(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, (__gnu_cxx::_Lo this); // 974
	}
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CAsyncFileSystem2::CReadRequestHandle, std::allocator<void>, CAsyncFileSystem2::CReadRequestBuilder&>(
																CReadRequestHandle *& __p,
																_Sp_alloc_shared_tag<std::allocator<void> > __a); // 1719
	{
		const enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle>* __base; // 1766
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1215
		__weak_count<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 2082
		__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::use_count()2>* this); // 2114
		__is_single_threaded(void); // 110
		__atomic_add_single(_Atomic_word* __mem,
					int __val);  // 111
		__atomic_add(volatile _Atomic_word* __mem,
				int __val);  // 113
		__atomic_add_dispatch(_Atomic_word* __mem,
					int __val);  // 203
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1176
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__is_single_threaded(void); // 100
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 211
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1178
		__weak_count<(__gnu_cxx::_Lock_policy)2>::operator=(
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2117
		__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::_M_assign(
				CReadRequestHandle* __ptr,
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __refcount); // 959
		_M_weak_assign<CAsyncFileSystem2::CReadRequestHandle>(const enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle>* this,
									CReadRequestHandle* __p,
									const __shared_count<(__gnu_cxx::_Lock_policy)2>& __n);  // 1767
	}
	_M_enable_shared_from_this_with<CAsyncFileSystem2::CReadRequestHandle>(const __shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>* this,
										CReadRequestHandle* __p); // 1764
	_M_enable_shared_from_this_with<CAsyncFileSystem2::CReadRequestHandle>(const __shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>* this,
										CReadRequestHandle* __p); // 1720
	__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<void>, CAsyncFileSystem2::CReadRequestBuilder&>(
											_Sp_alloc_shared_tag<std::allocator<void> > __tag); // 463
	shared_ptr<CAsyncFileSystem2::CReadRequestHandle>::shared_ptr<std::allocator<void>, CAsyncFileSystem2::CReadRequestBuilder&>(
											_Sp_alloc_shared_tag<std::allocator<void> > __tag);  // 1008
	make_shared<CAsyncFileSystem2::CReadRequestHandle, CAsyncFileSystem2::CReadRequestBuilder&>(void); // 464
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1547
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1549
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CReadRequestHandle>(
								__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 368
	shared_ptr<IAsyncReadRequest2>::shared_ptr<CAsyncFileSystem2::CReadRequestHandle>(
								shared_ptr<CAsyncFileSystem2::CReadRequestHandle>& __r);  // 464
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::CReadRequestHandle>::~shared_ptr(); // 464
} /* size: 0, variables: 1, inline expansions: 13 (957 bytes) */

// <00059E7F> filesystem/asyncfilesystem2.cpp:467
// function calls: 30
void CReadRequestHandle::CReadRequestHandle(CReadRequestBuilder& builder)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 479
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 122
	IAsyncReadRequest2::IAsyncReadRequest2(
				const char* szFileName,
				const char* szPathID);  // 479
	IRequest::IRequest(); // 479
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count()2>* this); // 1998
	__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__weak_ptr()2>* this); // 823
	weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::weak_ptr(); // 921
	enable_shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle>* this); // 479
	IReadRequestBuilder::GetReadOffset(); // 470
	IReadRequestBuilder::GetReadBytes(); // 471
	IReadRequestBuilder::GetProfilingForRequest(); // 473
	IReadRequestBuilder::GetAllowMemoryMap(); // 474
	IReadRequestBuilder::GetPreferMemoryMap(); // 475
	IReadRequestBuilder::GetTextMode(); // 476
	IReadRequestBuilder::GetMoveToFrontOfQueue(); // 477
	CReadRequestBuilder::TakeCallback(); // 472
	_Function_base::_Function_base(); // 407
	_Function_base::_M_empty(); // 576
	function<void(IAsyncReadRequest2::operator bool()>* this); // 409
	function<void(IAsyncReadRequest2::function(
		function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 472
	IReadRequestBuilder::GetPriority(); // 478
	IReadRequestBuilder::GetCompletionQueue(); // 479
	IReadRequestBuilder::GetResultBuffer(); // 481
	IReadRequestBuilder::GetResultBuffer(); // 484
	IReadRequestBuilder::GetResultBufferSize(); // 485
} /* size: 458, inline expansions: 30 (426 bytes) */

// <00059E59> filesystem/asyncfilesystem2.cpp:467
void CReadRequestHandle::CReadRequestHandle(CReadRequestBuilder& builder)
{
} /* size: 0 */

// <00059A72> filesystem/asyncfilesystem2.cpp:489
// function calls: 17
void CReadRequestHandle::~CReadRequestHandle()
{
	{
		{
		}
	}
	{
		{
			CBufferString::Get(); // 491
		}
		CReadRequestHandle::ReleaseResultBuffer(); // 493
		_Function_base::~_Function_base(); // 336
		function<void(IAsyncReadRequest2::~function()>* this); // 494
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 211
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
		__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
		__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
		weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::~weak_ptr(); // 929
		~enable_shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle>* this); // 494
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 38
		IAsyncReadRequest2::~IAsyncReadRequest2(); // 494
	}
} /* size: 0 */

// <00059A0C> filesystem/asyncfilesystem2.cpp:489
void CReadRequestHandle::~CReadRequestHandle()
{
} /* size: 36 */

// <000599CF> filesystem/asyncfilesystem2.cpp:489
// variables: 2
void CReadRequestHandle::~CReadRequestHandle()
{
	const char   __FUNCTION__; // 19876
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 491
	}
} /* size: 0, variables: 1 */

// <00066257> filesystem/asyncfilesystem2.cpp:496
void CReadRequestHandle::ReleaseResultBuffer()
{
} /* size: 0 */

// <00064485> filesystem/asyncfilesystem2.cpp:496
// function calls: 6
void CReadRequestHandle::ReleaseResultBuffer()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 509
	CAsyncFileSystem2::ReleaseBuffer(
			void* pBuffer);  // 504
} /* size: 0, inline expansions: 6 (104 bytes) */

// <000594B0> filesystem/asyncfilesystem2.cpp:517
// variables: 10
// function calls: 24
void CReadRequestHandle::Submit()
{
	const char   __FUNCTION__; // 19545
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 519
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 271
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock_nothrow()2>* this); // 1245
	__throw_bad_weak_ptr(void); // 1246
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
			const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1555
	__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CReadRequestHandle>(
								const __weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 380
	shared_ptr<CAsyncFileSystem2::CReadRequestHandle>::shared_ptr<CAsyncFileSystem2::CReadRequestHandle>(
								const weak_ptr<CAsyncFileSystem2::CReadRequestHandle>& __r);  // 934
	shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle>* this); // 529
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1547
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1549
	__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CReadRequestHandle>(
								__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 368
	shared_ptr<CAsyncFileSystem2::IRequest>::shared_ptr<CAsyncFileSystem2::CReadRequestHandle>(
								shared_ptr<CAsyncFileSystem2::CReadRequestHandle>& __r);  // 529
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::IRequest>::~shared_ptr(); // 529
} /* size: 0, variables: 1, inline expansions: 16 (903 bytes) */

// <0005947D> filesystem/asyncfilesystem2.cpp:532
void* CReadRequestHandle::GetResultBuffer()
{
} /* size: 12 */

// <0005944F> filesystem/asyncfilesystem2.cpp:537
void CReadRequestHandle::GetResultSize()
{
} /* size: 12 */

// <000593CC> filesystem/asyncfilesystem2.cpp:542
// variables: 2
void CReadRequestHandle::KeepResultBuffer(IMemoryMappedFile** pOutMemoryMap)
{
	const char   __FUNCTION__; // 19795
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 544
	}
} /* size: 0, variables: 1 */

// <00058CB9> filesystem/asyncfilesystem2.cpp:553
// variables: 2
// function calls: 30
void CReadRequestHandle::Cancel(bool bRunCallback)
{
	ReadCallback_t callback; // 555
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_558; // 558
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 558
		_Function_base::_M_empty(); // 576
		function<void(IAsyncReadRequest2::operator bool()>* this); // 409
		_Function_base::_Function_base(); // 407
		function<void(IAsyncReadRequest2::function(
			function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 491
		swap<std::_Any_data>(union _Any_data& __a,
					union _Any_data& __b);  // 560
		swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
												bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
		function<void(IAsyncReadRequest2::swap(
			function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 491
		_Function_base::~_Function_base(); // 336
		function<void(IAsyncReadRequest2::~function()>* this); // 491
		function<void(IAsyncReadRequest2::operator=(
				function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 568
		function<void(IAsyncReadRequest2::operator=(
				nullptr_t);  // 569
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 570
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 570
	}
	_Function_base::_Function_base(); // 371
	function<void(IAsyncReadRequest2::function()>* this); // 555
	_Function_base::_M_empty(); // 576
	function<void(IAsyncReadRequest2::operator bool()>* this); // 572
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncReadRequest2::~function()>* this); // 576
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncReadRequest2::~function()>* this); // 576
	function<void(IAsyncReadRequest2::operator(
			IAsyncReadRequest2* __args#0,
			AsyncRequestStatus_t __args#1);  // 574
} /* size: 600, variables: 1, inline expansions: 9 (136 bytes) */

// <00058C8B> filesystem/asyncfilesystem2.cpp:578
void CReadRequestHandle::WasCanceled()
{
} /* size: 12 */

// <0006402B> filesystem/asyncfilesystem2.cpp:583
void CReadRequestHandle::IsComplete()
{
} /* size: 12 */

// <00058C44> filesystem/asyncfilesystem2.cpp:588
void CReadRequestHandle::GetPriority()
{
} /* size: 11 */

// <0006629D> filesystem/asyncfilesystem2.cpp:593
void CReadRequestHandle::SetPriority(AsyncRequestPriority_t priority)
{
	{
	}
} /* size: 0 */

// <00058BDF> filesystem/asyncfilesystem2.cpp:593
// variables: 2
void CReadRequestHandle::SetPriority(AsyncRequestPriority_t priority)
{
	const char   __FUNCTION__; // 19665
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 595
	}
} /* size: 0, variables: 1 */

// <00064623> filesystem/asyncfilesystem2.cpp:612
// function calls: 6
void CReadRequestHandle::GetProfilingInfo(uint64* pOutEventTimesArrayUS, int nBufferSizeBytes)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 614
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 621
	CReadRequestHandle::GetProfilingInfo(
			uint64* pOutEventTimesArrayUS,
			int nBufferSizeBytes);  // 612
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 625
} /* size: 250, inline expansions: 6 (268 bytes) */

// <00058BA1> filesystem/asyncfilesystem2.cpp:612
// variable: 1
void CReadRequestHandle::GetProfilingInfo(uint64* pOutEventTimesArrayUS, int nBufferSizeBytes)
{
	const char   __FUNCTION__; // 19795
} /* size: 0, variables: 1 */

// <00057DDB> filesystem/asyncfilesystem2.cpp:630
// variables: 23
// function calls: 45
void CReadRequestHandle::Service()
{
	AsyncRequestStatus_t status; // 639
	const char   __FUNCTION__; // 19572
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_643; // 643
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 643
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 648
	}
	{
		const char* szReadOptions; // 652
		FileHandle_t hFile; // 659
		{
			const uint64  nOffset; // 662
			const int64  nFileSize; // 663
			size_t nBytesToRead; // 666
			bool bCanUseMMap; // 675
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 664
			}
			{
				bool bUseMmap; // 678
			}
			Min<long unsigned int>(const long unsigned int& val1,
						const long unsigned int& val2);  // 671
		}
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 654
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 94
		IAsyncReadRequest2::GetFileName(); // 659
		IAsyncReadRequest2::GetPathId(); // 659
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 94
		IAsyncReadRequest2::GetFileName(); // 656
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 715
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_719; // 719
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 719
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 271
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock_nothrow()2>* this); // 1245
		__throw_bad_weak_ptr(void); // 1246
		__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
				const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1555
		__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CReadRequestHandle>(
									const __weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 380
		shared_ptr<CAsyncFileSystem2::CReadRequestHandle>::shared_ptr<CAsyncFileSystem2::CReadRequestHandle>(
									const weak_ptr<CAsyncFileSystem2::CReadRequestHandle>& __r);  // 934
		shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle>* this); // 722
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
		}
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
		__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
		__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
		shared_ptr<CAsyncFileSystem2::CReadRequestHandle>::~shared_ptr(); // 722
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1488
		{
			int32 nWaiters; // 1491
			int32 nWake; // 1492
		}
		CThreadFastSemaphore::Release(
			int32 releaseCount);  // 727
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 729
	}
	CReadRequestHandle::ReleaseResultBuffer(); // 705
} /* size: 0, variables: 2, inline expansions: 1 (80 bytes) */

// <000579DA> filesystem/asyncfilesystem2.cpp:736
// variables: 3
// function calls: 12
void CReadRequestHandle::RunCallbackAndMarkComplete(AsyncRequestStatus_t status)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_741; // 741
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 741
	_Function_base::_M_empty(); // 576
	function<void(IAsyncReadRequest2::operator bool()>* this); // 743
	function<void(IAsyncReadRequest2::operator(
			IAsyncReadRequest2* __args#0,
			AsyncRequestStatus_t __args#1);  // 745
	function<void(IAsyncReadRequest2::operator=(
			nullptr_t);  // 746
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 755
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 757
} /* size: 319, variables: 1, inline expansions: 12 (481 bytes) */

// <00057814> filesystem/asyncfilesystem2.cpp:760
// variable: 1
// function calls: 4
void CReadRequestHandle::ServiceWithRead(FileHandle_t hFile, uint64 nOffset, size_t nBytesToRead)
{
	{
		int nBytesRead; // 776
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 769
	CAsyncFileSystem2::AllocateBuffer(
			size_t nBufferSize,
			const char* pDebugName);  // 769
} /* size: 282, inline expansions: 4 (145 bytes) */

// <000576C9> filesystem/asyncfilesystem2.cpp:794
// function calls: 4
void CReadRequestHandle::ServiceWithMMap(FileHandle_t hFile, uint64 nOffset, size_t nBytesToRead)
{
	IMemoryMappedFile::GetMappedSize(); // 799
	IMemoryMappedFile::GetMappedMemory(); // 801
	IMemoryMappedFile::GetMappedSize(); // 802
	Min<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 802
} /* size: 151, inline expansions: 4 (15 bytes) */

// <00057112> filesystem/asyncfilesystem2.cpp:819
// variables: 3
// function calls: 19
void CAsyncFileSystem2::NewWriteRequest(const char* szFileName, const char* szPathID, const void* pBuffer, size_t nWriteBytes)
{
	const char   __FUNCTION__; // 19768
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 825
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 826
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 190
	_Function_base::_Function_base(); // 371
	function<void(IAsyncWriteRequest2::function()>* this); // 328
	_Function_base::_Function_base(); // 371
	function<void(void const::function()>* this); // 328
	IWriteRequestBuilder::IWriteRequestBuilder(); // 193
	CWriteRequestBuilder::CWriteRequestBuilder(
				CAsyncFileSystem2* pFileSystem,
				const char* szFileName,
				const char* szPathID,
				const void* pBuffer,
				size_t nWriteBytes);  // 827
	_Head_base<1, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilder>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilder> >::_Tuple_impl(); // 303
	_Head_base<0, IAsyncFileSystem2::IWriteRequestBuilder::_Head_base(); // 303
	_Tuple_impl<0, IAsyncFileSystem2::IWriteRequestBuilder::_Tuple_impl(); // 966
	tuple<IAsyncFileSystem2::IWriteRequestBuilder::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilde this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilde this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilde this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilder> >  this,
			pointer __p);  // 827
} /* size: 0, variables: 1, inline expansions: 19 (394 bytes) */

// <000565C8> filesystem/asyncfilesystem2.cpp:830
// variables: 10
// function calls: 58
void CWriteRequestBuilder::Build()
{
	const char   __FUNCTION__; // 19518
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
	}
	{
		__allocator_type __a2; // 966
		__allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2> > > __guard; // 967
		_Sp_cp_type* __mem; // 968
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>* __pi; // 969
		allocate(const __new_allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_c this,
			size_type __n,
			const void  *);  // 203
		allocate(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_L this,
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 102
		__allocated_ptr(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator< this,
				allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_po __a,
				pointer __ptr);  // 102
		__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2> > >(allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_po __a); // 967
		__new_allocator(const __new_allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_c this); // 183
		allocator<void>(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_L this,
				const allocator<void>  &);  // 966
		_Construct<CAsyncFileSystem2::CWriteRequestHandle, CAsyncFileSystem2::CWriteRequestBuilder&>(CWriteRequestHandle* __p); // 805
		construct<CAsyncFileSystem2::CWriteRequestHandle, CAsyncFileSystem2::CWriteRequestBuilder&>(allocator_type &,
														CWriteRequestHandle* __p);  // 606
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_Sp_counted_base()2>* this); // 602
		__aligned_buffer<CAsyncFileSystem2::CWriteRequestHandle>::_M_addr(); // 120
		__aligned_buffer<CAsyncFileSystem2::CWriteRequestHandle>::_M_ptr(); // 652
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_ptr()2>* this); // 606
		_Sp_ebo_helper<0, std::allocator<void>, true>::_Sp_ebo_helper(
				const allocator<void>& __tp);  // 589
		_Impl::_Impl(
			allocator<void> __a);  // 602
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestBuilder&>(
											allocator<void> __a); // 969
		get(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allo this); // 968
		operator new(size_t,
				void* __p);  // 969
		operator=(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator< this,
				nullptr_t);  // 971
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_ptr()2>* this); // 973
		~__allocated_ptr(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator< this); // 974
		~allocator(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, (__gnu_cxx::_L this); // 974
	}
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CAsyncFileSystem2::CWriteRequestHandle, std::allocator<void>, CAsyncFileSystem2::CWriteRequestBuilder&>(
																CWriteRequestHandle *& __p,
																_Sp_alloc_shared_tag<std::allocator<void> > __a); // 1719
	{
		const enable_shared_from_this<CAsyncFileSystem2::CWriteRequestHandle>* __base; // 1766
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1215
		__weak_count<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 2082
		__weak_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::use_count()2>* this); // 2114
		__is_single_threaded(void); // 110
		__atomic_add_single(_Atomic_word* __mem,
					int __val);  // 111
		__atomic_add(volatile _Atomic_word* __mem,
				int __val);  // 113
		__atomic_add_dispatch(_Atomic_word* __mem,
					int __val);  // 203
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1176
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__is_single_threaded(void); // 100
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 211
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1178
		__weak_count<(__gnu_cxx::_Lock_policy)2>::operator=(
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2117
		__weak_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::_M_assign(
				CWriteRequestHandle* __ptr,
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __refcount); // 959
		_M_weak_assign<CAsyncFileSystem2::CWriteRequestHandle>(const enable_shared_from_this<CAsyncFileSystem2::CWriteRequestHandle>* this,
									CWriteRequestHandle* __p,
									const __shared_count<(__gnu_cxx::_Lock_policy)2>& __n);  // 1767
	}
	_M_enable_shared_from_this_with<CAsyncFileSystem2::CWriteRequestHandle>(const __shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>* this,
										CWriteRequestHandle* __p); // 1764
	_M_enable_shared_from_this_with<CAsyncFileSystem2::CWriteRequestHandle>(const __shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>* this,
										CWriteRequestHandle* __p); // 1720
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<void>, CAsyncFileSystem2::CWriteRequestBuilder&>(
											_Sp_alloc_shared_tag<std::allocator<void> > __tag); // 463
	shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>::shared_ptr<std::allocator<void>, CAsyncFileSystem2::CWriteRequestBuilder&>(
											_Sp_alloc_shared_tag<std::allocator<void> > __tag);  // 1008
	make_shared<CAsyncFileSystem2::CWriteRequestHandle, CAsyncFileSystem2::CWriteRequestBuilder&>(void); // 835
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1547
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1549
	__shared_ptr<IAsyncWriteRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>(
								__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 368
	shared_ptr<IAsyncWriteRequest2>::shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>(
								shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>& __r);  // 835
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>::~shared_ptr(); // 835
} /* size: 0, variables: 1, inline expansions: 13 (957 bytes) */

// <00055F5E> filesystem/asyncfilesystem2.cpp:838
// function calls: 30
void CWriteRequestHandle::CWriteRequestHandle(CWriteRequestBuilder& builder)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 848
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 162
	IAsyncWriteRequest2::IAsyncWriteRequest2(
				const char* szFileName,
				const char* szPathID);  // 848
	IRequest::IRequest(); // 848
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count()2>* this); // 1998
	__weak_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::__weak_ptr()2>* this); // 823
	weak_ptr<CAsyncFileSystem2::CWriteRequestHandle>::weak_ptr(); // 921
	enable_shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CWriteRequestHandle>* this); // 848
	IWriteRequestBuilder::GetProfilingForRequest(); // 846
	IWriteRequestBuilder::GetAppend(); // 847
	IWriteRequestBuilder::GetTextMode(); // 848
	IWriteRequestBuilder::GetPriority(); // 845
	_Function_base::_Function_base(); // 407
	_Function_base::_M_empty(); // 576
	function<void(IAsyncWriteRequest2::operator bool()>* this); // 409
	function<void(IAsyncWriteRequest2::function(
		function<void(IAsyncWriteRequest2*, AsyncRequestStatus_t)>& __x);  // 843
	CWriteRequestBuilder::TakeCallback(); // 843
	CWriteRequestBuilder::TakeFreeBufferCallback(); // 844
	_Function_base::_Function_base(); // 407
	_Function_base::_M_empty(); // 576
	function<void(void const::operator bool()>* this); // 409
	function<void(void const::function(
		function<void(void const*)>& __x);  // 844
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1470
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr()2>* this); // 201
	shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>::shared_ptr(); // 848
} /* size: 498, inline expansions: 30 (543 bytes) */

// <00055F38> filesystem/asyncfilesystem2.cpp:838
void CWriteRequestHandle::CWriteRequestHandle(CWriteRequestBuilder& builder)
{
} /* size: 0 */

// <000557D2> filesystem/asyncfilesystem2.cpp:852
// variables: 8
// function calls: 30
void CWriteRequestHandle::~CWriteRequestHandle()
{
	{
		{
		}
	}
	{
		{
			CBufferString::Get(); // 854
		}
		_Function_base::_M_empty(); // 576
		function<void(void const::operator bool()>* this); // 856
		function<void(void const::operator(
				const void* __args#0);  // 858
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
		}
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
		__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
		__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
		shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>::~shared_ptr(); // 861
		_Function_base::~_Function_base(); // 336
		function<void(void const::~function()>* this); // 861
		_Function_base::~_Function_base(); // 336
		function<void(IAsyncWriteRequest2::~function()>* this); // 861
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 211
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
		__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
		__weak_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
		weak_ptr<CAsyncFileSystem2::CWriteRequestHandle>::~weak_ptr(); // 929
		~enable_shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CWriteRequestHandle>* this); // 861
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 34
		IAsyncWriteRequest2::~IAsyncWriteRequest2(); // 861
	}
} /* size: 0 */

// <0005576C> filesystem/asyncfilesystem2.cpp:852
void CWriteRequestHandle::~CWriteRequestHandle()
{
} /* size: 36 */

// <0005572F> filesystem/asyncfilesystem2.cpp:852
// variables: 2
void CWriteRequestHandle::~CWriteRequestHandle()
{
	const char   __FUNCTION__; // 19903
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 854
	}
} /* size: 0, variables: 1 */

// <00054D2D> filesystem/asyncfilesystem2.cpp:863
// variables: 18
// function calls: 52
void CWriteRequestHandle::Submit()
{
	const char   __FUNCTION__; // 19545
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 865
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 271
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock_nothrow()2>* this); // 1245
	__throw_bad_weak_ptr(void); // 1246
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
			const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1555
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>(
								const __weak_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 380
	shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>::shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>(
								const weak_ptr<CAsyncFileSystem2::CWriteRequestHandle>& __r);  // 934
	shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CWriteRequestHandle>* this); // 876
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	swap<CAsyncFileSystem2::CWriteRequestHandle*>(CWriteRequestHandle *& __a,
							CWriteRequestHandle *& __b);  // 1693
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>::operator=(
			shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>& __r);  // 876
	__is_single_threaded(void); // 110
	__atomic_add_single(_Atomic_word* __mem,
				int __val);  // 111
	__atomic_add(volatile _Atomic_word* __mem,
			int __val);  // 113
	__atomic_add_dispatch(_Atomic_word* __mem,
				int __val);  // 151
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_copy()2>* this); // 1076
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
			const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1535
	__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>(
								const __shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 351
	shared_ptr<CAsyncFileSystem2::IRequest>::shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>(
								const shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>& __r);  // 877
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>::~shared_ptr(); // 876
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::IRequest>::~shared_ptr(); // 877
} /* size: 0, variables: 1, inline expansions: 35 (2236 bytes) */

// <00064056> filesystem/asyncfilesystem2.cpp:880
void CWriteRequestHandle::IsComplete()
{
} /* size: 12 */

// <00054CE6> filesystem/asyncfilesystem2.cpp:885
void CWriteRequestHandle::GetStatus()
{
} /* size: 11 */

// <00054CB8> filesystem/asyncfilesystem2.cpp:890
void CWriteRequestHandle::GetPriority()
{
} /* size: 11 */

// <00066305> filesystem/asyncfilesystem2.cpp:895
void CWriteRequestHandle::SetPriority(AsyncRequestPriority_t priority)
{
} /* size: 132 */

// <00064212> filesystem/asyncfilesystem2.cpp:912
// function calls: 6
void CWriteRequestHandle::GetProfilingInfo(uint64* pOutEventTimesArrayUS, int nBufferSizeBytes)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 914
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 921
	CWriteRequestHandle::GetProfilingInfo(
			uint64* pOutEventTimesArrayUS,
			int nBufferSizeBytes);  // 912
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 925
} /* size: 250, inline expansions: 6 (268 bytes) */

// <00054C54> filesystem/asyncfilesystem2.cpp:912
// variable: 1
void CWriteRequestHandle::GetProfilingInfo(uint64* pOutEventTimesArrayUS, int nBufferSizeBytes)
{
	const char   __FUNCTION__; // 19795
} /* size: 0, variables: 1 */

// <000541D4> filesystem/asyncfilesystem2.cpp:930
// variables: 13
// function calls: 42
void CWriteRequestHandle::Service()
{
	const char* szOpenOptions; // 939
	FileHandle_t hFile; // 943
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_964; // 964
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 964
		_Function_base::_M_empty(); // 576
		function<void(IAsyncWriteRequest2::operator bool()>* this); // 967
		function<void(IAsyncWriteRequest2::operator(
				IAsyncWriteRequest2* __args#0,
				AsyncRequestStatus_t __args#1);  // 969
		function<void(IAsyncWriteRequest2::operator=(
				nullptr_t);  // 970
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1488
		{
			int32 nWaiters; // 1491
			int32 nWake; // 1492
		}
		CThreadFastSemaphore::Release(
			int32 releaseCount);  // 978
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 980
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 140
	IAsyncWriteRequest2::GetFileName(); // 943
	IAsyncWriteRequest2::GetPathId(); // 943
	_Function_base::_M_empty(); // 576
	function<void(void const::operator bool()>* this); // 982
	function<void(void const::operator(
			const void* __args#0);  // 984
	function<void(void const::operator=(
			nullptr_t);  // 985
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<CAsyncFileSystem2::CWriteRequestHandle*>(CWriteRequestHandle *& __a,
							CWriteRequestHandle *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<CAsyncFileSystem2::CWriteRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>::operator=(
			shared_ptr<CAsyncFileSystem2::CWriteRequestHandle>& __r);  // 990
} /* size: 918, variables: 2, inline expansions: 21 (1232 bytes) */

// <000539FE> filesystem/asyncfilesystem2.cpp:997
// variables: 2
// function calls: 29
void CAsyncFileSystem2::NewCopyRequest(const char* szSrcFileName, const char* szDstFileName, const char* szPathID)
{
	const char   __FUNCTION__; // 19741
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 270
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 371
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 371
	ICopyFileRequestBuilder::ICopyFileRequestBuilder(); // 272
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 271
	CCopyFileRequestBuilder::CCopyFileRequestBuilder(
				CAsyncFileSystem2* pFileSystem,
				const char* szSrcFileName,
				const char* szDstFileName,
				const char* szPathID);  // 1001
	_Head_base<1, std::default_delete<IAsyncFileSystem2::ICopyFileRequestBuilder>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IAsyncFileSystem2::ICopyFileRequestBuilder> >::_Tuple_impl(); // 303
	_Head_base<0, IAsyncFileSystem2::ICopyFileRequestBuilder::_Head_base(); // 303
	_Tuple_impl<0, IAsyncFileSystem2::ICopyFileRequestBuilder::_Tuple_impl(); // 966
	tuple<IAsyncFileSystem2::ICopyFileRequestBuilder::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::ICopyFileRequestBuilder, std::default_delete<IAsyncFileSystem2::ICopyFileRequest this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<IAsyncFileSystem2::ICopyFileRequestBuilder, std::default_delete<IAsyncFileSystem2::ICopyFileRequest this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<IAsyncFileSystem2::ICopyFileRequestBuilder, std::default_delete<IAsyncFileSystem2::ICopyFileRequest this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<IAsyncFileSystem2::ICopyFileRequestBuilder, std::default_delete<IAsyncFileSystem2::ICopyFileRequestBuild this,
			pointer __p);  // 1001
} /* size: 0, variables: 1, inline expansions: 29 (499 bytes) */

// <00052EB4> filesystem/asyncfilesystem2.cpp:1004
// variables: 10
// function calls: 58
void CCopyFileRequestBuilder::Build()
{
	const char   __FUNCTION__; // 19518
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1006
	}
	{
		__allocator_type __a2; // 966
		__allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2> > > __guard; // 967
		_Sp_cp_type* __mem; // 968
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>* __pi; // 969
		allocate(const __new_allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx:: this,
			size_type __n,
			const void  *);  // 203
		allocate(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_ this,
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 102
		__allocated_ptr(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void this,
				allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy __a,
				pointer __ptr);  // 102
		__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2> > >(allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy __a); // 967
		__new_allocator(const __new_allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx:: this); // 183
		allocator<void>(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_ this,
				const allocator<void>  &);  // 966
		_Construct<CAsyncFileSystem2::CCopyFileHandle, CAsyncFileSystem2::CCopyFileRequestBuilder&>(CCopyFileHandle* __p); // 805
		construct<CAsyncFileSystem2::CCopyFileHandle, CAsyncFileSystem2::CCopyFileRequestBuilder&>(allocator_type &,
														CCopyFileHandle* __p);  // 606
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_Sp_counted_base()2>* this); // 602
		__aligned_buffer<CAsyncFileSystem2::CCopyFileHandle>::_M_addr(); // 120
		__aligned_buffer<CAsyncFileSystem2::CCopyFileHandle>::_M_ptr(); // 652
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_ptr()2>* this); // 606
		_Sp_ebo_helper<0, std::allocator<void>, true>::_Sp_ebo_helper(
				const allocator<void>& __tp);  // 589
		_Impl::_Impl(
			allocator<void> __a);  // 602
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileRequestBuilder&>(
											allocator<void> __a); // 969
		get(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocato this); // 968
		operator new(size_t,
				void* __p);  // 969
		operator=(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void this,
				nullptr_t);  // 971
		_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_ptr()2>* this); // 973
		~__allocated_ptr(const __allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void this); // 974
		~allocator(const allocator<std::_Sp_counted_ptr_inplace<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, (__gnu_cxx::_Lock_ this); // 974
	}
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<CAsyncFileSystem2::CCopyFileHandle, std::allocator<void>, CAsyncFileSystem2::CCopyFileRequestBuilder&>(
																CCopyFileHandle *& __p,
																_Sp_alloc_shared_tag<std::allocator<void> > __a); // 1719
	{
		const enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle>* __base; // 1766
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1215
		__weak_count<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 2082
		__weak_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::use_count()2>* this); // 2114
		__is_single_threaded(void); // 110
		__atomic_add_single(_Atomic_word* __mem,
					int __val);  // 111
		__atomic_add(volatile _Atomic_word* __mem,
				int __val);  // 113
		__atomic_add_dispatch(_Atomic_word* __mem,
					int __val);  // 203
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1176
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__is_single_threaded(void); // 100
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 211
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1178
		__weak_count<(__gnu_cxx::_Lock_policy)2>::operator=(
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2117
		__weak_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::_M_assign(
				CCopyFileHandle* __ptr,
				const __shared_count<(__gnu_cxx::_Lock_policy)2>& __refcount); // 959
		_M_weak_assign<CAsyncFileSystem2::CCopyFileHandle>(const enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle>* this,
									CCopyFileHandle* __p,
									const __shared_count<(__gnu_cxx::_Lock_policy)2>& __n);  // 1767
	}
	_M_enable_shared_from_this_with<CAsyncFileSystem2::CCopyFileHandle>(const __shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>* this,
										CCopyFileHandle* __p); // 1764
	_M_enable_shared_from_this_with<CAsyncFileSystem2::CCopyFileHandle>(const __shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>* this,
										CCopyFileHandle* __p); // 1720
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<void>, CAsyncFileSystem2::CCopyFileRequestBuilder&>(
											_Sp_alloc_shared_tag<std::allocator<void> > __tag); // 463
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::shared_ptr<std::allocator<void>, CAsyncFileSystem2::CCopyFileRequestBuilder&>(
											_Sp_alloc_shared_tag<std::allocator<void> > __tag);  // 1008
	make_shared<CAsyncFileSystem2::CCopyFileHandle, CAsyncFileSystem2::CCopyFileRequestBuilder&>(void); // 1009
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1547
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1549
	__shared_ptr<IAsyncCopyRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CCopyFileHandle>(
							__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 368
	shared_ptr<IAsyncCopyRequest2>::shared_ptr<CAsyncFileSystem2::CCopyFileHandle>(
							shared_ptr<CAsyncFileSystem2::CCopyFileHandle>& __r);  // 1009
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::~shared_ptr(); // 1009
} /* size: 0, variables: 1, inline expansions: 13 (957 bytes) */

// <000521B8> filesystem/asyncfilesystem2.cpp:1012
// function calls: 56
void CCopyFileHandle::CCopyFileHandle(CCopyFileRequestBuilder& builder)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1017
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1017
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 192
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 193
	IAsyncCopyRequest2::IAsyncCopyRequest2(
				const char* szSrcFileName,
				const char* szDstFileName,
				const char* szPathID);  // 1017
	IRequest::IRequest(); // 1017
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count()2>* this); // 1998
	__weak_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::__weak_ptr()2>* this); // 823
	weak_ptr<CAsyncFileSystem2::CCopyFileHandle>::weak_ptr(); // 921
	enable_shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle>* this); // 1017
	ICopyFileRequestBuilder::GetPriority(); // 1015
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 437
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<unsigned char*>(unsigned char *& x,
						unsigned char *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<unsigned char, int>::Swap(
		CUtlMemory<unsigned char, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<unsigned char*>(unsigned char *& __a,
				unsigned char *& __b);  // 19
	V_swap<unsigned char*>(unsigned char *& x,
				unsigned char *& y);  // 1354
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Swap(
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& vec);  // 437
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 1016
	CCopyFileRequestBuilder::TakePrependData(); // 1016
	CCopyFileRequestBuilder::TakeAppendData(); // 1017
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 437
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<unsigned char*>(unsigned char *& x,
						unsigned char *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<unsigned char, int>::Swap(
		CUtlMemory<unsigned char, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<unsigned char*>(unsigned char *& __a,
				unsigned char *& __b);  // 19
	V_swap<unsigned char*>(unsigned char *& x,
				unsigned char *& y);  // 1354
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Swap(
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >& vec);  // 437
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& src);  // 1017
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1470
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr()2>* this); // 201
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::shared_ptr(); // 1017
} /* size: 0, inline expansions: 56 (2445 bytes) */

// <00052192> filesystem/asyncfilesystem2.cpp:1012
void CCopyFileHandle::CCopyFileHandle(CCopyFileRequestBuilder& builder)
{
} /* size: 0 */

// <00051858> filesystem/asyncfilesystem2.cpp:1021
// variables: 8
// function calls: 44
void CCopyFileHandle::~CCopyFileHandle()
{
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::~shared_ptr(); // 1023
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1023
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1023
	__is_single_threaded(void); // 100
	__exchange_and_add_single(_Atomic_word* __mem,
					int __val);  // 101
	__exchange_and_add(volatile _Atomic_word* __mem,
				int __val);  // 103
	__exchange_and_add_dispatch(_Atomic_word* __mem,
					int __val);  // 211
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
	__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
	__weak_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
	weak_ptr<CAsyncFileSystem2::CCopyFileHandle>::~weak_ptr(); // 929
	~enable_shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle>* this); // 1023
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 42
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 42
	IAsyncCopyRequest2::~IAsyncCopyRequest2(); // 1023
} /* size: 378, inline expansions: 40 (1471 bytes) */

// <000517F2> filesystem/asyncfilesystem2.cpp:1021
void CCopyFileHandle::~CCopyFileHandle()
{
} /* size: 36 */

// <00050D71> filesystem/asyncfilesystem2.cpp:1025
// variables: 18
// function calls: 56
void CCopyFileHandle::Submit()
{
	const char   __FUNCTION__; // 19545
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1027
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 271
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock_nothrow()2>* this); // 1245
	__throw_bad_weak_ptr(void); // 1246
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
			const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1555
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CCopyFileHandle>(
							const __weak_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 380
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::shared_ptr<CAsyncFileSystem2::CCopyFileHandle>(
							const weak_ptr<CAsyncFileSystem2::CCopyFileHandle>& __r);  // 934
	shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle>* this); // 1030
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<CAsyncFileSystem2::CCopyFileHandle*>(CCopyFileHandle *& __a,
							CCopyFileHandle *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::operator=(
			shared_ptr<CAsyncFileSystem2::CCopyFileHandle>& __r);  // 1030
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::~shared_ptr(); // 1030
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 271
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock_nothrow()2>* this); // 1245
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
			const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1555
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CCopyFileHandle>(
							const __weak_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 380
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::shared_ptr<CAsyncFileSystem2::CCopyFileHandle>(
							const weak_ptr<CAsyncFileSystem2::CCopyFileHandle>& __r);  // 934
	shared_from_this(const enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle>* this); // 1031
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1547
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1549
	__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<CAsyncFileSystem2::CCopyFileHandle>(
							__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 368
	shared_ptr<CAsyncFileSystem2::IRequest>::shared_ptr<CAsyncFileSystem2::CCopyFileHandle>(
							shared_ptr<CAsyncFileSystem2::CCopyFileHandle>& __r);  // 1031
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::IRequest, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<CAsyncFileSystem2::IRequest>::~shared_ptr(); // 1031
} /* size: 0, variables: 1, inline expansions: 37 (2047 bytes) */

// <00050D43> filesystem/asyncfilesystem2.cpp:1034
void CCopyFileHandle::IsComplete()
{
} /* size: 12 */

// <00050D15> filesystem/asyncfilesystem2.cpp:1039
void CCopyFileHandle::GetStatus()
{
} /* size: 11 */

// <000506B4> filesystem/asyncfilesystem2.cpp:1044
// variables: 8
// function calls: 30
void CCopyFileHandle::Service()
{
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	swap<CAsyncFileSystem2::CCopyFileHandle*>(CCopyFileHandle *& __a,
							CCopyFileHandle *& __b);  // 1693
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
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
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<CAsyncFileSystem2::CCopyFileHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<CAsyncFileSystem2::CCopyFileHandle>::operator=(
			shared_ptr<CAsyncFileSystem2::CCopyFileHandle>& __r);  // 1057
	CAsyncFileSystem2::GetAsyncRequestStatusString(
					AsyncRequestStatus_t theStatus);  // 1049
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 180
	IAsyncCopyRequest2::GetDstFileName(); // 1049
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 179
	IAsyncCopyRequest2::GetSrcFileName(); // 1049
} /* size: 566, inline expansions: 21 (1218 bytes) */

// <00050003> filesystem/asyncfilesystem2.cpp:1060
// variables: 7
// function calls: 26
void CCopyFileHandle::DoService()
{
	FileHandle_t hDestFile; // 1062
	const CScopeGuardLambdaImpl<CAsyncFileSystem2::CCopyFileHandle::DoService()::<lambda()> >& generated_id_1068; // 1068
	{
		FileHandle_t hSourceFile; // 1078
		const CScopeGuardLambdaImpl<CAsyncFileSystem2::CCopyFileHandle::DoService()::<lambda()> >& generated_id_1084; // 1084
		const int  BUFSIZE; // 1088
		void* buf; // 1089
		{
			int nRead; // 1093
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 179
		IAsyncCopyRequest2::GetSrcFileName(); // 1078
		IAsyncCopyRequest2::GetPathId(); // 1078
		CScopeGuardLambdaImpl<CAsyncFileSystem2::CCopyFileHandle::DoService()::<lambda()> >::CScopeGuardLambdaImpl(
					class& lambda); // 39
		MakeScopeGuardLambda<CAsyncFileSystem2::CCopyFileHandle::DoService()::<lambda()> >(class& lambda); // 1084
		operator()(const class* __closure); // 31
		CScopeGuardLambdaImpl<CAsyncFileSystem2::CCopyFileHandle::DoService()::<lambda()> >::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 1104
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 180
	IAsyncCopyRequest2::GetDstFileName(); // 1062
	IAsyncCopyRequest2::GetPathId(); // 1062
	CScopeGuardLambdaImpl<CAsyncFileSystem2::CCopyFileHandle::DoService()::<lambda()> >::CScopeGuardLambdaImpl(
				class& lambda); // 39
	MakeScopeGuardLambda<CAsyncFileSystem2::CCopyFileHandle::DoService()::<lambda()> >(class& lambda); // 1068
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1072
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1106
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1108
	operator()(const class* __closure); // 31
	CScopeGuardLambdaImpl<CAsyncFileSystem2::CCopyFileHandle::DoService()::<lambda()> >::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 1112
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1074
} /* size: 432, variables: 2, inline expansions: 15 (258 bytes) */

// <0004FDBD> filesystem/asyncfilesystem2.cpp:1118
// function calls: 9
void CAsyncFileSystem2::CreateCompletionQueue()
{
	_Head_base<1, std::default_delete<IIOCompletionQueue>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IIOCompletionQueue> >::_Tuple_impl(); // 303
	_Head_base<0, IIOCompletionQueue::_Head_base(); // 303
	_Tuple_impl<0, IIOCompletionQueue::_Tuple_impl(); // 966
	tuple<IIOCompletionQueue::tuple(); // 169
	__uniq_ptr_impl<IIOCompletionQueue, std::default_delete<IIOCompletionQueue> >::_M_ptr(); // 169
	__uniq_ptr_impl<IIOCompletionQueue, std::default_delete<IIOCompletionQueue> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<IIOCompletionQueue, std::default_delete<IIOCompletionQueue>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<IIOCompletionQueue, std::default_delete<IIOCompletionQueue> >::unique_ptr<>(
			pointer __p);  // 1121
} /* size: 46, inline expansions: 9 (9 bytes) */

// <0004F713> filesystem/asyncfilesystem2.cpp:1124
// function calls: 26
void CCompletionQueue::CCompletionQueue()
{
	IIOCompletionQueue::IIOCompletionQueue(); // 1124
	CThreadMutex::CThreadMutex(
			const char* pName);  // 1124
	__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result>::__new_allocator(); // 168
	allocator<CAsyncFileSystem2::CCompletionQueue::Result>::allocator(); // 550
	_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this); // 520
	_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this); // 520
	_Deque_impl_data::_Deque_impl_data(); // 550
	_Deque_impl::_Deque_impl(); // 462
	__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result::__new_allocator(); // 183
	allocator<CAsyncFileSystem2::CCompletionQueue::Result::allocator<CAsyncFileSystem2::CCompletionQueue::Result>(
								const allocator<CAsyncFileSystem2::CCompletionQueue::Result>  &);  // 580
	_M_get_map_allocator(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue:: this); // 599
	__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<CAsyncFileSystem2::CCompletionQueue::Result::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 600
	allocator<CAsyncFileSystem2::CCompletionQueue::Result::~allocator(); // 601
	_M_allocate_map(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
			size_t __n);  // 649
	__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<CAsyncFileSystem2::CCompletionQueue::Result>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 586
	_M_allocate_node(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 687
	_M_create_nodes(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
			_Map_pointer __nstart,
			_Map_pointer __nfinish);  // 661
	_M_set_node(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
			_Map_pointer __new_node);  // 670
	_M_set_node(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
			_Map_pointer __new_node);  // 671
	_M_initialize_map(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
				size_t __num_elements);  // 463
	_Deque_base(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 858
	deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::deque(); // 1124
} /* size: 192, inline expansions: 26 (502 bytes) */

// <0004F6FA> filesystem/asyncfilesystem2.cpp:1124
void CCompletionQueue::CCompletionQueue()
{
} /* size: 0 */

// <0004EBB6> filesystem/asyncfilesystem2.cpp:1128
// variables: 2
// function calls: 46
void CCompletionQueue::~CCompletionQueue()
{
	{
	}
	{
		operator==(const _Self& __x,
				const _Self& __y);  // 1415
		empty(const deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 1130
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 1214
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::begin(); // 1935
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 1233
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::end(); // 2221
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 2204
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 2204
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::_M_destroy_data(
				iterator __first,
				iterator __last,
				const allocator<CAsyncFileSystem2::CCompletionQueue::Result>  &);  // 2221
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 2221
		{
			_Map_pointer __n; // 702
			__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result>::deallocate(
					Result* __p,
					size_type __n);  // 215
			allocator<CAsyncFileSystem2::CCompletionQueue::Result>::deallocate(
					Result* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 593
			_M_deallocate_node(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
						_Ptr __p);  // 703
		}
		_M_destroy_nodes(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
				_Map_pointer __nstart,
				_Map_pointer __nfinish);  // 2222
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::_M_erase_at_end(
				iterator __pos);  // 1935
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::clear(); // 1135
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 2204
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 2204
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::_M_destroy_data(
				iterator __first,
				iterator __last,
				const allocator<CAsyncFileSystem2::CCompletionQueue::Result>  &);  // 1043
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 1214
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::begin(); // 1043
		_M_get_Tp_allocator(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 1043
		_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
				const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 1233
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::end(); // 1043
		{
			_Map_pointer __n; // 702
			__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result>::deallocate(
					Result* __p,
					size_type __n);  // 215
			allocator<CAsyncFileSystem2::CCompletionQueue::Result>::deallocate(
					Result* __p,
					size_t __n);  // 649
			deallocate(allocator_type& __a,
					pointer __p,
					size_type __n);  // 593
			_M_deallocate_node(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
						_Ptr __p);  // 703
		}
		_M_destroy_nodes(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
				_Map_pointer __nstart,
				_Map_pointer __nfinish);  // 625
		__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result::__new_allocator(); // 183
		allocator<CAsyncFileSystem2::CCompletionQueue::Result::allocator<CAsyncFileSystem2::CCompletionQueue::Result>(
									const allocator<CAsyncFileSystem2::CCompletionQueue::Result>  &);  // 580
		_M_get_map_allocator(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue:: this); // 606
		__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result::deallocate(
				Result** __p,
				size_type __n);  // 215
		allocator<CAsyncFileSystem2::CCompletionQueue::Result::deallocate(
				Result** __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 607
		allocator<CAsyncFileSystem2::CCompletionQueue::Result::~allocator(); // 608
		_M_deallocate_map(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
					_Map_pointer __p,
					size_t __n);  // 627
		allocator<CAsyncFileSystem2::CCompletionQueue::Result>::~allocator(); // 545
		_Deque_impl::~_Deque_impl(); // 629
		~_Deque_base(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 1043
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::~deque(); // 1136
		CThreadMutex::~CThreadMutex(); // 1136
		operator-(const _Self& __x,
				const _Self& __y);  // 1332
		size(const deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 1132
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 1132
	}
} /* size: 643 */

// <0004EB51> filesystem/asyncfilesystem2.cpp:1128
void CCompletionQueue::~CCompletionQueue()
{
} /* size: 36 */

// <0004EB2D> filesystem/asyncfilesystem2.cpp:1128
// variable: 1
void CCompletionQueue::~CCompletionQueue()
{
	const char   __FUNCTION__; // 19822
} /* size: 0, variables: 1 */

// <0004E11A> filesystem/asyncfilesystem2.cpp:1138
// variable: 1
// function calls: 50
void CCompletionQueue::AddResult(const shared_ptr<CAsyncFileSystem2::CReadRequestHandle>& request, AsyncRequestStatus_t status)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1140; // 1140
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1140
	__is_single_threaded(void); // 110
	__atomic_add_single(_Atomic_word* __mem,
				int __val);  // 111
	__atomic_add(volatile _Atomic_word* __mem,
			int __val);  // 113
	__atomic_add_dispatch(_Atomic_word* __mem,
				int __val);  // 203
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1151
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
			const __shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2026
	__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__weak_ptr<CAsyncFileSystem2::CReadRequestHandle>(
								const __shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 828
	weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::weak_ptr<CAsyncFileSystem2::CReadRequestHandle>(
							const shared_ptr<CAsyncFileSystem2::CReadRequestHandle>& __r);  // 1141
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
			__weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2030
	__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__weak_ptr(
			__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 836
	weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::weak_ptr(
		weak_ptr<CAsyncFileSystem2::CReadRequestHandle> &);  // 337
	Result::Result(
		Result &);  // 110
	construct_at<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result>(Result* __location); // 676
	construct<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result>(allocator_type& __a,
														Result* __p);  // 170
	_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
			const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 1233
	deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::end(); // 1538
	deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::back(); // 178
	operator-(const _Self& __x,
			const _Self& __y);  // 1332
	size(const deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 492
	deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::_M_reserve_map_at_back(
				size_type __nodes_to_add);  // 2281
	deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::_M_reserve_map_at_back(
				size_type __nodes_to_add);  // 496
	__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result>::allocate(
		size_type __n,
		const void  *);  // 203
	allocator<CAsyncFileSystem2::CCompletionQueue::Result>::allocate(
		size_t __n);  // 614
	allocate(allocator_type& __a,
		size_type __n);  // 586
	_M_allocate_node(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 497
	__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count(
			__weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2030
	__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__weak_ptr(
			__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 836
	weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::weak_ptr(
		weak_ptr<CAsyncFileSystem2::CReadRequestHandle> &);  // 337
	Result::Result(
		Result &);  // 110
	construct_at<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result>(Result* __location); // 676
	construct<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result>(allocator_type& __a,
														Result* __p);  // 501
	_M_set_node(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
			_Map_pointer __new_node);  // 507
	deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::_M_push_back_aux<CAsyncFileSystem2::CCompletionQueue::Result>(); // 176
	deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::emplace_back<CAsyncFileSystem2::CCompletionQueue::Result>(); // 1141
	__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
	__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
	weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::~weak_ptr(); // 337
	Result::~Result(); // 1141
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1142
} /* size: 0, variables: 1, inline expansions: 44 (1427 bytes) */

// <0004CDCC> filesystem/asyncfilesystem2.cpp:1144
// variables: 14
// function calls: 89
void CCompletionQueue::ProcessResults(int nLimit)
{
	{
		int i; // 1146
		{
			Result result; // 1148
			shared_ptr<CAsyncFileSystem2::CReadRequestHandle> pRequest; // 1162
			{
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1151; // 1151
				__is_single_threaded(void); // 110
				__atomic_add_single(_Atomic_word* __mem,
							int __val);  // 111
				__atomic_add(volatile _Atomic_word* __mem,
						int __val);  // 113
				__atomic_add_dispatch(_Atomic_word* __mem,
							int __val);  // 203
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_add_ref()2>* this); // 1188
				__weak_count<(__gnu_cxx::_Lock_policy)2>::operator=(
						const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r); // 2039
				__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::operator=(
						const __weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r); // 843
				weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::operator=(
						const weak_ptr<CAsyncFileSystem2::CReadRequestHandle>& __r);  // 337
				Result::operator=(
						const Result  &);  // 1157
				__is_single_threaded(void); // 100
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 211
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
				__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
				__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
				weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::~weak_ptr(); // 337
				Result::~Result(); // 88
				destroy_at<CAsyncFileSystem2::CCompletionQueue::Result>(Result* __location); // 698
				destroy<CAsyncFileSystem2::CCompletionQueue::Result>(allocator_type& __a,
											Result* __p);  // 1647
				__new_allocator<CAsyncFileSystem2::CCompletionQueue::Result>::deallocate(
						Result* __p,
						size_type __n);  // 215
				allocator<CAsyncFileSystem2::CCompletionQueue::Result>::deallocate(
						Result* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 593
				_M_deallocate_node(const _Deque_base<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this,
							_Ptr __p);  // 581
				_M_set_node(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
						_Map_pointer __new_node);  // 582
				__is_single_threaded(void); // 100
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 211
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
				_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
				__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
				__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
				weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::~weak_ptr(); // 337
				Result::~Result(); // 88
				destroy_at<CAsyncFileSystem2::CCompletionQueue::Result>(Result* __location); // 698
				destroy<CAsyncFileSystem2::CCompletionQueue::Result>(allocator_type& __a,
											Result* __p);  // 579
				deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::_M_pop_front_aux(); // 1652
				deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::pop_front(); // 1158
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1159
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 943
				Lock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
						const CThreadMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 1151
				operator==(const _Self& __x,
						const _Self& __y);  // 1415
				empty(const deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result this); // 1152
				_Deque_iterator(const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi this,
						const _Deque_iterator<CAsyncFileSystem2::CCompletionQueue::Result, CAsyncFileSystem2::CCompletionQueue::Result&, CAsyncFi __x);  // 1214
				deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::begin(); // 1514
				deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> >::front(); // 1157
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1159
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 271
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock_nothrow()2>* this); // 1256
			__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count(
					const __weak_count<(__gnu_cxx::_Lock_policy)2>& __r,
					nothrow_t); // 1739
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1104
			__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_get_use_count()2>* this); // 1741
			__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
					const __weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>& __r,
					nothrow_t); // 535
			shared_ptr<CAsyncFileSystem2::CReadRequestHandle>::shared_ptr(
					const weak_ptr<CAsyncFileSystem2::CReadRequestHandle>& __r,
					nothrow_t);  // 874
			weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::lock(); // 1162
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
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<CAsyncFileSystem2::CReadRequestHandle>::~shared_ptr(); // 1167
			__is_single_threaded(void); // 100
			__exchange_and_add_single(_Atomic_word* __mem,
							int __val);  // 101
			__exchange_and_add(volatile _Atomic_word* __mem,
						int __val);  // 103
			__exchange_and_add_dispatch(_Atomic_word* __mem,
							int __val);  // 211
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use()2>* this); // 171
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release()2>* this); // 1168
			__weak_count<(__gnu_cxx::_Lock_policy)2>::~__weak_count()2>* this); // 2003
			__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::~__weak_ptr()2>* this); // 810
			weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::~weak_ptr(); // 337
			Result::~Result(); // 1167
			__weak_count<(__gnu_cxx::_Lock_policy)2>::__weak_count()2>* this); // 1998
			__weak_ptr<CAsyncFileSystem2::CReadRequestHandle, (__gnu_cxx::_Lock_policy)2>::__weak_ptr()2>* this); // 823
			weak_ptr<CAsyncFileSystem2::CReadRequestHandle>::weak_ptr(); // 337
			Result::Result(); // 1148
		}
	}
} /* size: 812 */

// <00064081> filesystem/asyncfilesystem2.cpp:1170
void CAsyncFileSystem2::GetAsyncRequestStatusString(AsyncRequestStatus_t theStatus)
{
} /* size: 160 */

