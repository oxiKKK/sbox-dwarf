
//
// tier0/logging.cpp
//
//	referenced by: libtier0.so
//
//	functions: 51
//

// <0028BDBC> tier0/logging.cpp:154
void ResolveGlobalLoggingSystem(COrderedConstructor_DependencyManagement<CLoggingSystem>& owner)
{
} /* size: 0 */

// <0028BA11> tier0/logging.cpp:166
// variables: 2
// function calls: 12
void CLoggingSystem::CLoggingSystem()
{
	{
		{
		}
		{
			int i; // 193
		}
	}
	{
		Color::Color(); // 101
		LoggingChannel_t::LoggingChannel_t(); // 168
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 168
		ILoggingListener::ILoggingListener(); // 31
		CSimpleLoggingListener::CSimpleLoggingListener(
					bool bQuietPrintf,
					bool bQuietDebugger);  // 63
		CColorizedLoggingListener::CColorizedLoggingListener(
						bool bQuietPrintf,
						bool bQuietDebugger);  // 168
		ILoggingResponsePolicy::ILoggingResponsePolicy(); // 16
		CDefaultLoggingResponsePolicy::CDefaultLoggingResponsePolicy(); // 168
		BackdoorLoggingState_t::BackdoorLoggingState_t(); // 168
		{
		}
		{
			int i; // 193
		}
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1141
		COrderedConstructor_DependencyManagement<void>::Touch(); // 209
	}
} /* size: 0 */

// <0028B9AB> tier0/logging.cpp:166
// variables: 3
void CLoggingSystem::CLoggingSystem()
{
	const char   __FUNCTION__; // 63616
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		int i; // 193
	}
} /* size: 0, variables: 1 */

// <0028B97D> tier0/logging.cpp:212
void CLoggingSystem::~CLoggingSystem()
{
} /* size: 0 */

// <0028B3A3> tier0/logging.cpp:225
// variables: 9
// function calls: 11
void CLoggingSystem::RegisterLoggingChannel(const char* pChannelName, int defaultFlags, LoggingVerbosity_t defaultVerbosity, Color spewColor)
{
	const char   __FUNCTION__; // 63440
	LoggingChannelID_t nNewChannel; // 296
	{
		int i; // 233
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 260
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 264
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
		}
		Color::operator==(
				const Color& rhs);  // 268
		Color::operator==(
				const Color& rhs);  // 268
		Color::operator==(
				const Color& rhs);  // 238
		Color::SetRawColor(
				int32 Color);  // 147
		Color::operator=(
				const Color& rhs);  // 255
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 281
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 292
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 291
	{
		int i; // 841
	}
	CLoggingSystem::DispatchNotification_ChannelRegistered(
						BaseLoggingState_t* pState,
						LoggingChannelID_t channel);  // 303
	{
		int i; // 841
	}
	CLoggingSystem::DispatchNotification_ChannelRegistered(
						BaseLoggingState_t* pState,
						LoggingChannelID_t channel);  // 306
} /* size: 0, variables: 2, inline expansions: 6 (194 bytes) */

// <0028CCFC> tier0/logging.cpp:312
// variable: 1
void CLoggingSystem::FindChannel(const char* pChannelName)
{
	{
		int i; // 314
	}
} /* size: 0 */

// <0028CD50> tier0/logging.cpp:325
// function call: 1
void CLoggingSystem::GetChannelVerbosity(LoggingChannelID_t channelID)
{
	{
	}
	CLoggingSystem::GetChannel(
			LoggingChannelID_t channelID);  // 327
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0028B328> tier0/logging.cpp:325
void CLoggingSystem::GetChannelVerbosity(LoggingChannelID_t channelID)
{
} /* size: 0 */

// <0028B14C> tier0/logging.cpp:330
// variables: 3
// function calls: 4
void CLoggingSystem::SetChannelVerbosity(LoggingChannelID_t channelID, LoggingVerbosity_t verbosity)
{
	LoggingChannel_t* pChannel; // 332
	{
	}
	CLoggingSystem::GetChannel(
			LoggingChannelID_t channelID);  // 332
	LoggingChannel_t::SetVerbosity(
			LoggingVerbosity_t verbosity);  // 336
	{
		int i; // 849
	}
	CLoggingSystem::DispatchNotification_ChannelVerbosityChanged(
							BaseLoggingState_t* pState,
							LoggingChannelID_t channel);  // 339
	{
		int i; // 849
	}
	CLoggingSystem::DispatchNotification_ChannelVerbosityChanged(
							BaseLoggingState_t* pState,
							LoggingChannelID_t channel);  // 342
} /* size: 0, variables: 1, inline expansions: 4 (247 bytes) */

// <0028AF6B> tier0/logging.cpp:347
// variables: 3
// function calls: 3
void CLoggingSystem::SetChannelVerbosityByName(const char* pName, LoggingVerbosity_t verbosity)
{
	{
		int i; // 349
		LoggingChannel_t::SetVerbosity(
				LoggingVerbosity_t verbosity);  // 353
		{
			int i; // 849
		}
		CLoggingSystem::DispatchNotification_ChannelVerbosityChanged(
								BaseLoggingState_t* pState,
								LoggingChannelID_t channel);  // 356
		{
			int i; // 849
		}
		CLoggingSystem::DispatchNotification_ChannelVerbosityChanged(
								BaseLoggingState_t* pState,
								LoggingChannelID_t channel);  // 359
	}
} /* size: 381 */

// <0028AD8F> tier0/logging.cpp:365
// variables: 3
// function calls: 4
void CLoggingSystem::SetChannelFlags(LoggingChannelID_t channelID, LoggingChannelFlags_t flags)
{
	LoggingChannel_t* pChannel; // 367
	{
	}
	CLoggingSystem::GetChannel(
			LoggingChannelID_t channelID);  // 367
	LoggingChannel_t::SetFlags(
		LoggingChannelFlags_t flags);  // 371
	{
		int i; // 857
	}
	CLoggingSystem::DispatchNotification_ChannelFlagsChanged(
						BaseLoggingState_t* pState,
						LoggingChannelID_t channel);  // 374
	{
		int i; // 857
	}
	CLoggingSystem::DispatchNotification_ChannelFlagsChanged(
						BaseLoggingState_t* pState,
						LoggingChannelID_t channel);  // 377
} /* size: 0, variables: 1, inline expansions: 4 (247 bytes) */

// <0028A8D8> tier0/logging.cpp:382
// variables: 6
// function calls: 12
void CLoggingSystem::PushLoggingState(bool bThreadLocal, bool bClearState)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_384; // 384
	int nNewState; // 386
	const char   __FUNCTION__; // 60414
	int nCurrentState; // 390
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 388
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 384
	{
		int i; // 829
	}
	CLoggingSystem::FindUnusedStateIndex(); // 386
	CLoggingSystem::CurrentStateIndex(
				bool bThreadLocal);  // 390
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 412
} /* size: 0, variables: 4, inline expansions: 12 (537 bytes) */

// <0028A505> tier0/logging.cpp:414
// variables: 4
// function calls: 11
void CLoggingSystem::PopLoggingState(bool bThreadLocal)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_416; // 416
	int nCurrentState; // 418
	const char   __FUNCTION__; // 49282
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 421
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 416
	CLoggingSystem::CurrentStateIndex(
				bool bThreadLocal);  // 418
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 434
} /* size: 0, variables: 3, inline expansions: 11 (446 bytes) */

// <0028CDD9> tier0/logging.cpp:436
void CLoggingSystem::CurrentStateIndex(bool bThreadLocal)
{
} /* size: 0 */

// <0028A125> tier0/logging.cpp:445
// variables: 4
// function calls: 10
void CLoggingSystem::RegisterLoggingListener(ILoggingListener* pListener)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_447; // 447
	LoggingState_t* pState; // 449
	const char   __FUNCTION__; // 58186
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 453
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 447
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 460
} /* size: 0, variables: 3, inline expansions: 10 (421 bytes) */

// <00289D7B> tier0/logging.cpp:462
// variables: 4
// function calls: 10
void CLoggingSystem::UnregisterLoggingListener(ILoggingListener* pListener)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_464; // 464
	LoggingState_t* pState; // 466
	{
		int i; // 467
		{
			int j; // 472
		}
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 464
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 480
} /* size: 258, variables: 2, inline expansions: 10 (421 bytes) */

// <002899DD> tier0/logging.cpp:482
// variables: 4
// function calls: 10
void CLoggingSystem::RegisterBackdoorLoggingListener(ILoggingListener* pListener)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_484; // 484
	BackdoorLoggingState_t* pState; // 486
	const char   __FUNCTION__; // 56298
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 490
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 484
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 497
} /* size: 0, variables: 3, inline expansions: 10 (421 bytes) */

// <0028CE17> tier0/logging.cpp:499
// variables: 3
// function calls: 10
void CLoggingSystem::EnableBackdoorLoggingListeners(bool bEnable)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_501; // 501
	BackdoorLoggingState_t* pState; // 503
	bool bPriorState; // 504
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 501
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 508
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <0028998C> tier0/logging.cpp:499
// variables: 3
void CLoggingSystem::EnableBackdoorLoggingListeners(bool bEnable)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_501; // 501
	BackdoorLoggingState_t* pState; // 503
	bool bPriorState; // 504
} /* size: 0, variables: 3 */

// <002895C4> tier0/logging.cpp:510
// variables: 6
// function calls: 10
void CLoggingSystem::IsListenerRegistered(ILoggingListener* pListener)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_512; // 512
	const LoggingState_t* pState; // 514
	bool bFound; // 515
	{
		int i; // 516
	}
	{
		const BackdoorLoggingState_t* pBackdoorState; // 528
		{
			int i; // 529
		}
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 512
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 540
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <0028D550> tier0/logging.cpp:542
// variables: 2
// function calls: 10
void CLoggingSystem::ResetCurrentLoggingState()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_544; // 544
	LoggingState_t* pState; // 546
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 544
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 549
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <0028958D> tier0/logging.cpp:542
// variables: 2
void CLoggingSystem::ResetCurrentLoggingState()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_544; // 544
	LoggingState_t* pState; // 546
} /* size: 0, variables: 2 */

// <0028D121> tier0/logging.cpp:551
// variables: 2
// function calls: 10
void CLoggingSystem::ResetBackdoorLoggingState()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_553; // 553
	BackdoorLoggingState_t* pState; // 555
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 553
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 557
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <00289556> tier0/logging.cpp:551
// variables: 2
void CLoggingSystem::ResetBackdoorLoggingState()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_553; // 553
	BackdoorLoggingState_t* pState; // 555
} /* size: 0, variables: 2 */

// <002891FC> tier0/logging.cpp:559
// variables: 2
// function calls: 10
void CLoggingSystem::SetLoggingResponsePolicy(ILoggingResponsePolicy* pLoggingResponse)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_561; // 561
	LoggingState_t* pState; // 563
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 561
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 572
} /* size: 193, variables: 2, inline expansions: 10 (421 bytes) */

// <0028836B> tier0/logging.cpp:595
// variables: 18
// function calls: 32
void CLoggingSystem::LogDirect(LoggingChannelID_t channelID, LoggingSeverity_t severity, const LeafCodeInfo_t* pLeafCodeInfo, const LoggingMetaData_t* pMetaData, Color color, const char* pMessage, va_list* pArgsIfMessageIsFmtString)
{
	const char   __FUNCTION__; // 53293
	LoggingContext_t context; // 625
	LoggingResponse_t response; // 652
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 597
	}
	{
		RunInThreadMemory<CLoggingSystem::LogDirect(LoggingChannelID_t, LoggingSeverity_t, const LeafCodeInfo_t*, const LoggingMetaData_t*, Color, char const*, __va_list_tag (*)[1])::<lambda()> >(class& runFunctor); // 602
	}
	{
		char* pFormattedMessage; // 607
		{
			int l; // 614
			V_strlen(const char* str); // 614
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_664; // 664
		LoggingState_t* pState; // 666
		BackdoorLoggingState_t* pBackdoorState; // 677
		{
			int i; // 668
		}
		{
			int i; // 680
		}
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 664
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 686
	}
	{
		bool bBreak; // 715
		{
			const char* pFile; // 721
			int nLine; // 722
			char* pszExpressionBuffer; // 723
			const char* pExpression; // 724
			{
				int* _pCrash; // 741
			}
		}
		{
			int* _pCrash; // 761
		}
		Plat_IsInDebugSession(void); // 743
	}
	Color::Color(); // 193
	LoggingContext_t::LoggingContext_t(); // 625
	Color::operator==(
			const Color& rhs);  // 631
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 631
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 637
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 637
	Plat_IsInDebugSession(void); // 707
	Plat_IsInDebugSession(void); // 701
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 639
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 639
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 638
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 638
} /* size: 0, variables: 3, inline expansions: 19 (74 bytes) */

// <00288302> tier0/logging.cpp:773
// variables: 2
void CLoggingSystem::GetChannel(LoggingChannelID_t channelID)
{
	const char   __FUNCTION__; // 28244
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 775
	}
} /* size: 0, variables: 1 */

// <0028D471> tier0/logging.cpp:779
void CLoggingSystem::GetChannel(LoggingChannelID_t channelID)
{
	{
	}
} /* size: 0 */

// <00288299> tier0/logging.cpp:779
// variables: 2
void CLoggingSystem::GetChannel(LoggingChannelID_t channelID)
{
	const char   __FUNCTION__; // 28244
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 781
	}
} /* size: 0, variables: 1 */

// <0028D4AD> tier0/logging.cpp:785
// variable: 1
// function call: 1
void CLoggingSystem::GetCurrentState()
{
	int nState; // 788
	{
	}
	{
	}
	CLoggingSystem::GetCurrentState(); // 785
} /* size: 0, variables: 1, inline expansions: 1 (74 bytes) */

// <00288213> tier0/logging.cpp:785
// variables: 4
void CLoggingSystem::GetCurrentState()
{
	int nState; // 788
	const char   __FUNCTION__; // 49282
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 791
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 796
	}
} /* size: 0, variables: 2 */

// <00288123> tier0/logging.cpp:801
// variables: 4
void CLoggingSystem::GetCurrentState()
{
	int nState; // 804
	const char   __FUNCTION__; // 49282
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 807
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 812
	}
} /* size: 0, variables: 2 */

// <0028D87C> tier0/logging.cpp:817
void CLoggingSystem::GetBackdoorState()
{
} /* size: 0 */

// <0028D8A5> tier0/logging.cpp:827
// variable: 1
void CLoggingSystem::FindUnusedStateIndex()
{
	{
		int i; // 829
	}
} /* size: 0 */

// <0028D8F7> tier0/logging.cpp:839
// variable: 1
void CLoggingSystem::DispatchNotification_ChannelRegistered(BaseLoggingState_t* pState, LoggingChannelID_t channel)
{
	{
		int i; // 841
	}
} /* size: 0 */

// <0028D958> tier0/logging.cpp:847
// variable: 1
void CLoggingSystem::DispatchNotification_ChannelVerbosityChanged(BaseLoggingState_t* pState, LoggingChannelID_t channel)
{
	{
		int i; // 849
	}
} /* size: 0 */

// <0028D9B9> tier0/logging.cpp:855
// variable: 1
void CLoggingSystem::DispatchNotification_ChannelFlagsChanged(BaseLoggingState_t* pState, LoggingChannelID_t channel)
{
	{
		int i; // 857
	}
} /* size: 0 */

// <00287A30> tier0/logging.cpp:868
// function calls: 15
void LoggingSystem_ResetCurrentLoggingState(void)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 870
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 544
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 549
	CLoggingSystem::ResetCurrentLoggingState(); // 870
} /* size: 0, inline expansions: 15 (849 bytes) */

// <00287610> tier0/logging.cpp:873
// function calls: 15
void LoggingSystem_ResetBackdoorLoggingState(void)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 875
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 553
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 557
	CLoggingSystem::ResetBackdoorLoggingState(); // 875
} /* size: 0, inline expansions: 15 (827 bytes) */

// <002874DD> tier0/logging.cpp:878
// function calls: 4
void LoggingSystem_RegisterLoggingListener(ILoggingListener* pListener)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 880
} /* size: 0, inline expansions: 4 (208 bytes) */

// <002873AA> tier0/logging.cpp:883
// function calls: 4
void LoggingSystem_RegisterBackdoorLoggingListener(ILoggingListener* pListener)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 885
} /* size: 0, inline expansions: 4 (208 bytes) */

// <00286F7B> tier0/logging.cpp:888
// function calls: 15
bool LoggingSystem_EnableBackdoorLoggingListeners(bool bEnable)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 890
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 501
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 508
	CLoggingSystem::EnableBackdoorLoggingListeners(
					bool bEnable);  // 890
} /* size: 0, inline expansions: 15 (834 bytes) */

// <00286E48> tier0/logging.cpp:893
// function calls: 4
void LoggingSystem_UnregisterLoggingListener(ILoggingListener* pListener)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 895
} /* size: 0, inline expansions: 4 (208 bytes) */

// <00286D15> tier0/logging.cpp:898
// function calls: 4
void LoggingSystem_SetLoggingResponsePolicy(ILoggingResponsePolicy* pResponsePolicy)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 900
} /* size: 0, inline expansions: 4 (208 bytes) */

// <00286BEF> tier0/logging.cpp:903
// function calls: 4
void LoggingSystem_PushLoggingState(bool bThreadLocal, bool bClearState)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 905
} /* size: 0, inline expansions: 4 (264 bytes) */

// <00286AC0> tier0/logging.cpp:908
// function calls: 4
void LoggingSystem_PopLoggingState(bool bThreadLocal)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 910
} /* size: 0, inline expansions: 4 (204 bytes) */

// <00286994> tier0/logging.cpp:913
// function calls: 5
int LoggingSystem_CurrentStateIndex(bool bThreadLocal)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 915
	CLoggingSystem::CurrentStateIndex(
				bool bThreadLocal);  // 915
} /* size: 0, inline expansions: 5 (268 bytes) */

// <00286845> tier0/logging.cpp:918
// variable: 1
// function calls: 5
LoggingChannelID_t LoggingSystem_FindChannel(const char* pChannelName)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 920
	{
		int i; // 314
	}
	CLoggingSystem::FindChannel(
			const char* pChannelName);  // 920
} /* size: 0, inline expansions: 5 (293 bytes) */

// <00285E2B> tier0/logging.cpp:955
// function calls: 6
LoggingVerbosity_t LoggingSystem_GetChannelVerbosity(LoggingChannelID_t channelID)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 957
	{
	}
	CLoggingSystem::GetChannel(
			LoggingChannelID_t channelID);  // 327
	CLoggingSystem::GetChannelVerbosity(
				LoggingChannelID_t channelID);  // 957
} /* size: 0, inline expansions: 6 (366 bytes) */

// <00285B8C> tier0/logging.cpp:965
// function calls: 4
void LoggingSystem_SetChannelVerbosityByName(const char* pName, LoggingVerbosity_t verbosity)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 967
} /* size: 0, inline expansions: 4 (236 bytes) */

// <002859FF> tier0/logging.cpp:970
// function calls: 6
int32 LoggingSystem_GetChannelColor(LoggingChannelID_t channelID)
{
	{
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw(); // 501
	GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 528
	operator&(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this); // 163
	GetGlobalLoggingSystem(void); // 972
	{
	}
	CLoggingSystem::GetChannel(
			LoggingChannelID_t channelID);  // 80
	CLoggingSystem::GetChannelColor(
			LoggingChannelID_t channelID);  // 972
} /* size: 0, inline expansions: 6 (377 bytes) */

