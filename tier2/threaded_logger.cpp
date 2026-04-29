
//
// tier2/threaded_logger.cpp
//
//	referenced by: libengine2.so
//
//	functions: 37
//

// <068605FC> tier2/threaded_logger.cpp:80
// function calls: 10
void CThreadedLogger::CThreadedLogger()
{
	CThreadMutex::CThreadMutex(
			const char* pName);  // 84
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	CTSListBase::CTSListBase(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CThreadedLogger::Buffer_t::End(); // 865
	CTSQueue<CThreadedLogger::Buffer_t::CTSQueue(); // 84
	CTSListBase::CTSListBase(); // 337
	CTSPool<CThreadedLogger::Buffer_t>::CTSPool(); // 84
} /* size: 271, inline expansions: 10 (268 bytes) */

// <068605E3> tier2/threaded_logger.cpp:80
void CThreadedLogger::CThreadedLogger()
{
} /* size: 0 */

// <0685FCE2> tier2/threaded_logger.cpp:88
// function calls: 30
void CThreadedLogger::~CThreadedLogger()
{
	{
		{
		}
	}
	{
		{
		}
		CThreadEvent::~CThreadEvent(); // 93
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 358
		Buffer_t::FreeDynamicText(); // 62
		Buffer_t::~Buffer_t(); // 341
		simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
		CTSPool<CThreadedLogger::Buffer_t>::Purge(); // 350
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 351
		CTSPool<CThreadedLogger::Buffer_t>::~CTSPool(); // 93
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<CThreadedLogger::Buffer_t::Purge(); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<CThreadedLogger::Buffer_t::End(); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
		CTSQueue<CThreadedLogger::Buffer_t::~CTSQueue(); // 93
		CThreadMutex::~CThreadMutex(); // 93
	}
} /* size: 0 */

// <0685FC7B> tier2/threaded_logger.cpp:88
void CThreadedLogger::~CThreadedLogger()
{
} /* size: 0 */

// <0685FC2A> tier2/threaded_logger.cpp:88
// variables: 2
void CThreadedLogger::~CThreadedLogger()
{
	const char   __FUNCTION__; // 38034
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 92
	}
} /* size: 0, variables: 1 */

// <0685FBAA> tier2/threaded_logger.cpp:95
// variable: 1
void CThreadedLogger::Printf(const char* pszFmt, ...)
{
	va_list ap; // 97
} /* size: 0, variables: 1 */

// <0685F511> tier2/threaded_logger.cpp:103
// variables: 5
// function calls: 22
void CThreadedLogger::Write(const void* buf, int cbLen)
{
	const char   __FUNCTION__; // 23809
	Buffer_t* pBuffer; // 119
	const int  cbStaticBuf; // 125
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	Buffer_t::Buffer_t(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CThreadedLogger::Buffer_t>::GetObject(); // 119
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 376
	Buffer_t::Buffer_t(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CThreadedLogger::Buffer_t>::GetObject(); // 138
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 132
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 144
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 156
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CThreadedLogger::Buffer_t>::PutObject(
			Buffer_t* pInfo);  // 152
} /* size: 0, variables: 3, inline expansions: 22 (1193 bytes) */

// <0685EF4B> tier2/threaded_logger.cpp:163
// variables: 6
// function calls: 18
void CThreadedLogger::Vprintf(const char* pszFmt, typedef __va_list_tag __va_list_tag* ap)
{
	const char   __FUNCTION__; // 36136
	Buffer_t* pBuffer; // 172
	va_list vaTemp; // 176
	int n; // 178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
		int nBufferSize; // 198
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 371
		CTSPool<CThreadedLogger::Buffer_t>::PutObject(
				Buffer_t* pInfo);  // 206
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 376
	Buffer_t::Buffer_t(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CThreadedLogger::Buffer_t>::GetObject(); // 172
	V_vsprintf_safe<512>(char& pDest,
				const char* pFormat,
				typedef __va_list_tag __va_list_tag* params);  // 178
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CThreadedLogger::Buffer_t>::PutObject(
			Buffer_t* pInfo);  // 183
} /* size: 0, variables: 4, inline expansions: 13 (0 bytes) */

// <0685E55B> tier2/threaded_logger.cpp:222
// variables: 4
// function calls: 35
void CThreadedLogger::OpenAndStartThread(const char* pszThreadDebugName)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_224; // 224
	const char   __FUNCTION__; // 34658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
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
			int nLineNumber);  // 224
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<CThreadedLogger::Buffer_t::Purge(); // 228
	{
		_State::_State(); // 251
		_Head_base<1, CThreadedLogger::_Head_base<CThreadedLogger*>(
						CThreadedLogger *& __h);  // 571
		_Tuple_impl<1, CThreadedLogger::_Tuple_impl<CThreadedLogger*>(
						CThreadedLogger *& __head);  // 315
		_Head_base<0, CThreadedLogger::OpenAndStartThread(char const::_Head_base<CThreadedLogger::OpenAndStartThread(
														class& __h);  // 315
		_Tuple_impl<0, CThreadedLogger::OpenAndStartThread(char const::_Tuple_impl<CThreadedLogger::OpenAndStartThread(
																class& __head);  // 985
		tuple<CThreadedLogger::OpenAndStartThread(char const::tuple<CThreadedLogger::OpenAndStartThread()::<lambda(CThreadedLogger*)>, CThreadedLogger*>(const tuple<CThreadedLogger::OpenAndStartThread(char const*)::<lambda(CThreadedLogger*)>, CThreadedLogger*>* this); // 288
		_Invoker<std::tuple<CThreadedLogger::OpenAndStartThread(char const::_Invoker<CThreadedLogger::OpenAndStartThread()::<lambda(CThreadedLogger*)>, CThreadedLogger*>(const _Invoker<std::tuple<CThreadedLogger::OpenAndStartThread(char const*)::<lambda(CThreadedLogger*)>, CThreadedLogger*> this); // 251
		_State_impl<std::thread::_Invoker<std::tuple<CThreadedLogger::OpenAndStartThread(char const::_State_impl<CThreadedLogger::OpenAndStartThread()::<lambda(CThreadedLogger*)>, CThreadedLogger*>(const _State_impl<std::thread::_Invoker<std::tuple<CThreadedLogger::OpenAndStartThread(char const*)::<lambda(CThreadedLog this); // 175
		_Head_base<1, std::default_delete<std::thread::_State>, true>::_Head_base(); // 561
		_Tuple_impl<1, std::default_delete<std::thread::_State> >::_Tuple_impl(); // 303
		_Head_base<0, std::thread::_State::_Head_base(); // 303
		_Tuple_impl<0, std::thread::_State::_Tuple_impl(); // 966
		tuple<std::thread::_State::tuple(); // 169
		__uniq_ptr_impl<std::thread::_State, std::default_delete<std::thread::_State> >::_M_ptr(); // 169
		__uniq_ptr_impl<std::thread::_State, std::default_delete<std::thread::_State> >::__uniq_ptr_impl(
				pointer __p);  // 234
		__uniq_ptr_data<std::thread::_State, std::default_delete<std::thread::_State>, true, true>::__uniq_ptr_data(
				pointer);  // 311
		unique_ptr<std::thread::_State, std::default_delete<std::thread::_State> >::unique_ptr<>(
				pointer __p);  // 175
		{
			_State *& __ptr; // 396
			__uniq_ptr_impl<std::thread::_State, std::default_delete<std::thread::_State> >::_M_ptr(); // 396
			unique_ptr<std::thread::_State, std::default_delete<std::thread::_State> >::get_deleter(); // 398
			default_delete<std::thread::_State>::operator(
					_State* __ptr);  // 398
		}
		unique_ptr<std::thread::_State, std::default_delete<std::thread::_State> >::~unique_ptr(); // 175
	}
	id::id(); // 166
	thread::thread<CThreadedLogger::OpenAndStartThread(
														class& __f);  // 237
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 238
} /* size: 0, variables: 2, inline expansions: 14 (806 bytes) */

// <0685E2C8> tier2/threaded_logger.cpp:240
// variable: 1
// function calls: 9
void CThreadedLogger::Flush()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_242; // 242
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 242
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 247
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 247
} /* size: 158, variables: 1, inline expansions: 9 (303 bytes) */

// <06861845> tier2/threaded_logger.cpp:249
// variable: 1
// function call: 1
void CThreadedLogger::Close()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_254; // 254
	ThreadInterlockedCompareExchange(volatile int32* p,
					int32 value,
					int32 comparand);  // 252
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <068610BA> tier2/threaded_logger.cpp:249
// variable: 1
// function calls: 25
void CThreadedLogger::Close()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_254; // 254
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 254
	{
	}
	id::id(); // 208
	operator==(id __x,
			id __y);  // 208
	thread::joinable(); // 183
	__terminate(void); // 184
	thread::~thread(); // 263
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	Buffer_t::FreeDynamicText(); // 62
	Buffer_t::~Buffer_t(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<CThreadedLogger::Buffer_t>::Purge(); // 267
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<CThreadedLogger::Buffer_t::Purge(); // 268
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 269
} /* size: 0, variables: 1, inline expansions: 25 (1122 bytes) */

// <0685E280> tier2/threaded_logger.cpp:249
// variables: 3
void CThreadedLogger::Close()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_254; // 254
	const char   __FUNCTION__; // 23809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 255
	}
} /* size: 0, variables: 2 */

// <0685E251> tier2/threaded_logger.cpp:271
void CThreadedLogger::FlushIO()
{
} /* size: 5 */

// <0685E238> tier2/threaded_logger.cpp:272
void CThreadedLogger::Poll()
{
} /* size: 0 */

// <0685DE12> tier2/threaded_logger.cpp:274
// variables: 5
// function calls: 12
void CThreadedLogger::WriteQueuedBuffers()
{
	const int  k_nMaxBatchSize; // 276
	int nBuffers; // 277
	Buffer_t* pBuffers; // 278
	{
		Buffer_t* pBuf; // 282
		{
			int idx; // 298
			Buffer_t::FreeDynamicText(); // 300
			ThreadPause(void); // 173
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 478
			ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
								const InterlockedPointerX2SizedInt_t& value,
								const InterlockedPointerX2SizedInt_t& comperand);  // 168
			CTSListBase::Push(
				TSLNodeBase_t* pNode);  // 371
			CTSPool<CThreadedLogger::Buffer_t>::PutObject(
					Buffer_t* pInfo);  // 301
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<CThreadedLogger::Buffer_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<CThreadedLogger::Buffer_t::PopItem(
			Buffer_t** pResult);  // 283
	}
} /* size: 603, variables: 3 */

// <0685DCB6> tier2/threaded_logger.cpp:316
// variable: 1
// function call: 1
void CThreadedLogger::ThreadProc()
{
	sigset_t set; // 320
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 340
} /* size: 218, variables: 1, inline expansions: 1 (32 bytes) */

// <0685DC6E> tier2/threaded_logger.cpp:354
void CThreadedFileLogger::CThreadedFileLogger()
{
} /* size: 55 */

// <0685DBC7> tier2/threaded_logger.cpp:360
void CThreadedFileLogger::CThreadedFileLogger(const char* pszFilename, bool bAppend)
{
} /* size: 0 */

// <0685DAAD> tier2/threaded_logger.cpp:367
// function calls: 2
void CThreadedFileLogger::~CThreadedFileLogger()
{
	ThreadInterlockedCompareExchange(volatile int32* p,
					int32 value,
					int32 comparand);  // 252
	CThreadedLogger::Close(); // 369
} /* size: 75, inline expansions: 2 (48 bytes) */

// <0685D9A5> tier2/threaded_logger.cpp:367
// function calls: 3
void CThreadedFileLogger::~CThreadedFileLogger()
{
	ThreadInterlockedCompareExchange(volatile int32* p,
					int32 value,
					int32 comparand);  // 252
	CThreadedLogger::Close(); // 369
	CThreadedFileLogger::~CThreadedFileLogger(); // 370
} /* size: 87, inline expansions: 3 (87 bytes) */

// <0685D98C> tier2/threaded_logger.cpp:367
void CThreadedFileLogger::~CThreadedFileLogger()
{
} /* size: 0 */

// <0685D95E> tier2/threaded_logger.cpp:372
FILE* fopen_utf8(const char* pszFilename, bool bAppend)
{
} /* size: 0 */

// <0685D580> tier2/threaded_logger.cpp:383
// variable: 1
// function calls: 11
void CThreadedFileLogger::Open(const char* pszFilename, bool bAppend)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_385; // 385
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 385
	ThreadInterlockedCompareExchange(volatile int32* p,
					int32 value,
					int32 comparand);  // 252
	CThreadedLogger::Close(); // 386
	V_strlen(const char* str); // 387
	V_strcpy_safe<4096>(char& pDest,
				const char* pSrc);  // 389
	fopen_utf8(const char* pszFilename,
			bool bAppend);  // 391
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 396
} /* size: 285, variables: 1, inline expansions: 11 (352 bytes) */

// <06860FB1> tier2/threaded_logger.cpp:398
// variable: 1
// function calls: 2
void CThreadedFileLogger::WriteIO(Buffer_t** pBuffers, int nBuffers)
{
	{
		int idx; // 405
		Buffer_t::GetText(); // 407
	}
	CThreadedFileLogger::WriteIO(
		Buffer_t** pBuffers,
		int nBuffers);  // 398
} /* size: 129, inline expansions: 1 (83 bytes) */

// <0685D53D> tier2/threaded_logger.cpp:398
// variable: 1
void CThreadedFileLogger::WriteIO(Buffer_t** pBuffers, int nBuffers)
{
	{
		int idx; // 405
	}
} /* size: 0 */

// <0685D3BC> tier2/threaded_logger.cpp:412
// variables: 2
// function calls: 2
void CThreadedFileLogger::CheckLogRotation()
{
	stat s1; // 419
	stat s2; // 419
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 428
	fopen_utf8(const char* pszFilename,
			bool bAppend);  // 431
} /* size: 229, variables: 2, inline expansions: 2 (48 bytes) */

// <0685D372> tier2/threaded_logger.cpp:438
void CThreadedFileLogger::Poll()
{
} /* size: 9 */

// <0685D330> tier2/threaded_logger.cpp:443
void CThreadedFileLogger::CloseIO()
{
} /* size: 57 */

// <0685D2EE> tier2/threaded_logger.cpp:452
void CThreadedFileLogger::FlushIO()
{
} /* size: 25 */

// <0685D27E> tier2/threaded_logger.cpp:464
void CThreadedStdoutLogger::CThreadedStdoutLogger()
{
} /* size: 0 */

// <0685D17E> tier2/threaded_logger.cpp:465
// function calls: 2
void CThreadedStdoutLogger::~CThreadedStdoutLogger()
{
	ThreadInterlockedCompareExchange(volatile int32* p,
					int32 value,
					int32 comparand);  // 252
	CThreadedLogger::Close(); // 465
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0685D076> tier2/threaded_logger.cpp:465
// function calls: 3
void CThreadedStdoutLogger::~CThreadedStdoutLogger()
{
	ThreadInterlockedCompareExchange(volatile int32* p,
					int32 value,
					int32 comparand);  // 252
	CThreadedLogger::Close(); // 465
	CThreadedStdoutLogger::~CThreadedStdoutLogger(); // 465
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0685D05D> tier2/threaded_logger.cpp:465
void CThreadedStdoutLogger::~CThreadedStdoutLogger()
{
} /* size: 0 */

// <0685CF9C> tier2/threaded_logger.cpp:467
// variable: 1
// function call: 1
void CThreadedStdoutLogger::WriteIO(Buffer_t** pBuffers, int nBuffers)
{
	{
		int idx; // 469
		Buffer_t::GetText(); // 470
	}
} /* size: 0 */

// <0685CF83> tier2/threaded_logger.cpp:473
void CThreadedStdoutLogger::FlushIO()
{
} /* size: 0 */

// <0685CF41> tier2/threaded_logger.cpp:474
void CThreadedStdoutLogger::CloseIO()
{
} /* size: 0 */

