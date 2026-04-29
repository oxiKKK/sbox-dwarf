
//
// tier0/dbg.cpp
//
//	referenced by: libtier0.so
//
//	functions: 44
//	class: 1
//	structs: 2
//

// <000F6714> tier0/dbg.cpp:60
void _Warning_AlwaysSpewCallStack_Enable(bool bEnable)
{
} /* size: 12 */

// <000F66E4> tier0/dbg.cpp:65
void _Warning_AlwaysSpewCallStack_Length(int iMaxCallStackLength)
{
} /* size: 11 */

// <000F66B4> tier0/dbg.cpp:74
void _Error_AlwaysSpewCallStack_Enable(bool bEnable)
{
} /* size: 5 */

// <000F6684> tier0/dbg.cpp:79
void _Error_AlwaysSpewCallStack_Length(int iMaxCallStackLength)
{
} /* size: 5 */

// <000F65EE> tier0/dbg.cpp:122
// variables: 2
void _AssertValidReadPtr(void* ptr, int count)
{
	const char   __FUNCTION__; // 42227
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
	}
} /* size: 0, variables: 1 */

// <000F656D> tier0/dbg.cpp:131
// variables: 2
void _AssertValidWritePtr(void* ptr, int count)
{
	const char   __FUNCTION__; // 41798
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 136
	}
} /* size: 0, variables: 1 */

// <000F64D7> tier0/dbg.cpp:140
// variables: 2
void _AssertValidReadWritePtr(void* ptr, int count)
{
	const char   __FUNCTION__; // 41948
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 145
	}
} /* size: 0, variables: 1 */

// <000F6441> tier0/dbg.cpp:149
// variables: 2
void AssertValidStringPtr(const char* ptr, int maxchar)
{
	const char   __FUNCTION__; // 41798
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 154
	}
} /* size: 0, variables: 1 */

// <000F63AB> tier0/dbg.cpp:158
// variables: 2
void AssertValidWStringPtr(const wchar_t* ptr, int maxchar)
{
	const char   __FUNCTION__; // 41648
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
} /* size: 0, variables: 1 */

// <000F622D> tier0/dbg.cpp:167
// variables: 4
void AppendCallStackToLogMessage(char* formattedMessage, int iMessageLength, int iAppendCallStackLength)
{
	{
		int iExistingMessageLength; // 172
		int iAppendedLength; // 187
		void** CallStackBuffer; // 189
		int iCount; // 190
	}
} /* size: 346 */

// <000F147A> tier0/dbg.cpp:213
CLoggingSystem* GetGlobalLoggingSystem(void)
{
} /* size: 0 */

// <000F55B6> tier0/dbg.cpp:277
// variables: 5
// function calls: 4
void SeriousWarning(LoggingChannelID_t channelID, const char* pMsgFormat, ...)
{
	{
		char formattedMessage; // 281
		va_list args; // 282
	}
	{
		CLoggingSystem* pLoggingSystem; // 289
		{
			char formattedMessage; // 289
			va_list args; // 289
			CLoggingSystem::GetChannelColor(
					LoggingChannelID_t channelID);  // 289
		}
		LoggingChannel_t::IsEnabled(
				LoggingVerbosity_t verbosity);  // 61
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingVerbosity_t verbosity);  // 60
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingSeverity_t severity);  // 289
	}
} /* size: 434 */

// <000F5356> tier0/dbg.cpp:292
// variables: 3
// function calls: 4
void Warning_SpewCallStack(int iMaxCallStackLength, const char* pMsgFormat, ...)
{
	{
		CLoggingSystem* pLoggingSystem; // 294
		{
			char formattedMessage; // 294
			va_list args; // 294
			CLoggingSystem::GetChannelColor(
					LoggingChannelID_t channelID);  // 294
		}
		LoggingChannel_t::IsEnabled(
				LoggingVerbosity_t verbosity);  // 61
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingVerbosity_t verbosity);  // 60
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingSeverity_t severity);  // 294
	}
} /* size: 0 */

// <000F4C08> tier0/dbg.cpp:315
// variables: 3
// function calls: 4
void DevMsg(const char* pMsgFormat, ...)
{
	{
		CLoggingSystem* pLoggingSystem; // 317
		{
			char formattedMessage; // 317
			va_list args; // 317
			CLoggingSystem::GetChannelColor(
					LoggingChannelID_t channelID);  // 317
		}
		LoggingChannel_t::IsEnabled(
				LoggingVerbosity_t verbosity);  // 61
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingVerbosity_t verbosity);  // 60
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingSeverity_t severity);  // 317
	}
} /* size: 327 */

// <000F49BE> tier0/dbg.cpp:320
// variables: 3
// function calls: 4
void DevWarning(const char* pMsgFormat, ...)
{
	{
		CLoggingSystem* pLoggingSystem; // 322
		{
			char formattedMessage; // 322
			va_list args; // 322
			CLoggingSystem::GetChannelColor(
					LoggingChannelID_t channelID);  // 322
		}
		LoggingChannel_t::IsEnabled(
				LoggingVerbosity_t verbosity);  // 61
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingVerbosity_t verbosity);  // 60
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingSeverity_t severity);  // 322
	}
} /* size: 327 */

// <000F47A8> tier0/dbg.cpp:325
// variables: 3
// function calls: 3
void ConColorMsg(const Color& clr, const char* pMsgFormat, ...)
{
	{
		CLoggingSystem* pLoggingSystem; // 327
		{
			char formattedMessage; // 327
			va_list args; // 327
		}
		LoggingChannel_t::IsEnabled(
				LoggingVerbosity_t verbosity);  // 61
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingVerbosity_t verbosity);  // 60
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingSeverity_t severity);  // 327
	}
} /* size: 314 */

// <000F455E> tier0/dbg.cpp:330
// variables: 3
// function calls: 4
void ConMsg(const char* pMsgFormat, ...)
{
	{
		CLoggingSystem* pLoggingSystem; // 332
		{
			char formattedMessage; // 332
			va_list args; // 332
			CLoggingSystem::GetChannelColor(
					LoggingChannelID_t channelID);  // 332
		}
		LoggingChannel_t::IsEnabled(
				LoggingVerbosity_t verbosity);  // 61
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingVerbosity_t verbosity);  // 60
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingSeverity_t severity);  // 332
	}
} /* size: 327 */

// <000F4306> tier0/dbg.cpp:335
// variables: 3
// function calls: 4
void ConDMsg(const char* pMsgFormat, ...)
{
	{
		CLoggingSystem* pLoggingSystem; // 337
		{
			char formattedMessage; // 337
			va_list args; // 337
			CLoggingSystem::GetChannelColor(
					LoggingChannelID_t channelID);  // 337
		}
		LoggingChannel_t::IsEnabled(
				LoggingVerbosity_t verbosity);  // 61
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingVerbosity_t verbosity);  // 60
		CLoggingSystem::IsChannelEnabled(
				LoggingChannelID_t channelID,
				LoggingSeverity_t severity);  // 337
	}
} /* size: 327 */

// <000F429B> tier0/dbg.cpp:342
// function call: 1
float CrackSmokingCompiler(float a)
{
	fabs(float __x); // 344
} /* size: 12, inline expansions: 1 (7 bytes) */

// <000F3C5C> tier0/dbg.cpp:354
// variables: 12
// function calls: 12
void COM_TimestampedLog(const char* fmt, ...)
{
	float64 s_LastStamp; // 356
	bool s_bShouldLog; // 357
	bool s_bShouldLogToConsole; // 358
	bool s_bChecked; // 359
	bool s_bFirstWrite; // 360
	CPathBufferString s_LogFile; // 361
	char string; // 374
	va_list argptr; // 375
	int len; // 377
	float64 curStamp; // 389
	float64 flMsecs; // 391
	FILE* fp; // 406
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 406
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 361
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 399
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 401
} /* size: 1013, variables: 12, inline expansions: 12 (472 bytes) */

// <000F09B4> tier0/dbg.cpp:422
// member functions: 18
// member variables: 5
// static member variables: 2
// class size: 40
class CTimestampedEventLog {
	/* tier0/dbg.cpp:429 */
	struct BufferedEvent_t {
		uint64 m_nTimestamp; /* 0 8 */
		TimestampedEventPart_t m_nPart; /* 8 4 */
		TimestampedEvent_t m_nEvent; /* 12 4 */
		int64 m_nID; /* 16 8 */
		char m_Str[256]; /* 24 256 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const int MAX_MESSAGE = 256; /* 0 0 */
	static const int MAX_BUFFERED_EVENTS = 1024; /* 0 0 */
	/* tier0/dbg.cpp:439 */
	CTimestampedEventLog& Get(void);
	/* tier0/dbg.cpp:446 */
	void CTimestampedEventLog(CTimestampedEventLog* );
	/* tier0/dbg.cpp:452 */
	void ~CTimestampedEventLog(CTimestampedEventLog* );
	/* tier0/dbg.cpp:459 */
	BufferedEvent_t* AllocateEvent(CTimestampedEventLog* );
	/* tier0/dbg.cpp:479 */
	bool IsLogging(CTimestampedEventLog* );
	/* tier0/dbg.cpp:485 */
	TimestampedEventListener_t GetListener(CTimestampedEventLog* );
	/* tier0/dbg.cpp:491 */
	uint64 SetListener(CTimestampedEventLog* , TimestampedEventListener_t);
	/* tier0/dbg.cpp:503 */
	void FlushBuffer(CTimestampedEventLog* );
	/* tier0/dbg.cpp:524 */
	int64 AllocateID(CTimestampedEventLog* );
private:
	bool m_bIsLogging; /* 0 1 */
	TimestampedEventListener_t m_pListener; /* 8 8 */
	BufferedEvent_t * m_pBufferedEvents; /* 16 8 */
	int m_nNumBufferedEvents; /* 24 4 */
	int64 m_nNextID; /* 32 8 */
	class CTimestampedEventLog & Get(void); /* linkage=_ZN20CTimestampedEventLog3GetEv */
	void CTimestampedEventLog(class CTimestampedEventLog *); /* linkage=_ZN20CTimestampedEventLogC4Ev */
	void ~CTimestampedEventLog(class CTimestampedEventLog *); /* linkage=_ZN20CTimestampedEventLogD4Ev */
	class BufferedEvent_t * AllocateEvent(class CTimestampedEventLog *); /* linkage=_ZN20CTimestampedEventLog13AllocateEventEv */
	bool IsLogging(class CTimestampedEventLog *); /* linkage=_ZN20CTimestampedEventLog9IsLoggingEv */
	TimestampedEventListener_t GetListener(class CTimestampedEventLog *); /* linkage=_ZN20CTimestampedEventLog11GetListenerEv */
	uint64 SetListener(class CTimestampedEventLog *, TimestampedEventListener_t); /* linkage=_ZN20CTimestampedEventLog11SetListenerEPFvy18TimestampedEvent_tx22TimestampedEventPart_tPKcE */
	void FlushBuffer(class CTimestampedEventLog *); /* linkage=_ZN20CTimestampedEventLog11FlushBufferEv */
	int64 AllocateID(class CTimestampedEventLog *); /* linkage=_ZN20CTimestampedEventLog10AllocateIDEv */
};

// <000F3C34> tier0/dbg.cpp:439
// variable: 1
inline void Get(void)
{
	CTimestampedEventLog s_Log; // 441
} /* size: 0, variables: 1 */

// <000F3C1D> tier0/dbg.cpp:446
void CTimestampedEventLog::CTimestampedEventLog()
{
} /* size: 0 */

// <000F3C04> tier0/dbg.cpp:446
inline void CTimestampedEventLog::CTimestampedEventLog()
{
} /* size: 0 */

// <000F3BC1> tier0/dbg.cpp:452
void CTimestampedEventLog::~CTimestampedEventLog()
{
} /* size: 25 */

// <000F3BA8> tier0/dbg.cpp:452
inline void CTimestampedEventLog::~CTimestampedEventLog()
{
} /* size: 0 */

// <000F6DC5> tier0/dbg.cpp:459
// variables: 2
// function call: 1
void CTimestampedEventLog::AllocateEvent()
{
	BufferedEvent_t* pResult; // 466
	{
		int* _pCrash; // 471
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 471
} /* size: 120, variables: 1, inline expansions: 1 (29 bytes) */

// <000F3B53> tier0/dbg.cpp:459
// variables: 3
inline void CTimestampedEventLog::AllocateEvent()
{
	BufferedEvent_t* pResult; // 466
	const char   __FUNCTION__; // 31255
	{
		int* _pCrash; // 471
	}
} /* size: 0, variables: 2 */

// <000F3B3A> tier0/dbg.cpp:479
inline void CTimestampedEventLog::IsLogging()
{
} /* size: 0 */

// <000F3B21> tier0/dbg.cpp:485
inline void CTimestampedEventLog::GetListener()
{
} /* size: 0 */

// <000F3AE1> tier0/dbg.cpp:491
// variables: 2
inline void CTimestampedEventLog::SetListener(TimestampedEventListener_t pListener)
{
	const char   __FUNCTION__; // 31050
	{
		int* _pCrash; // 495
	}
} /* size: 0, variables: 1 */

// <000F3A70> tier0/dbg.cpp:503
// variables: 4
inline void CTimestampedEventLog::FlushBuffer()
{
	const char   __FUNCTION__; // 31050
	{
		int* _pCrash; // 507
	}
	{
		int iEvent; // 513
		{
			const BufferedEvent_t& event; // 515
		}
	}
} /* size: 0, variables: 1 */

// <000F3A57> tier0/dbg.cpp:524
inline void CTimestampedEventLog::AllocateID()
{
} /* size: 0 */

// <000F3483> tier0/dbg.cpp:539
// variables: 5
// function calls: 17
int64 TimestampedEvent(TimestampedEvent_t nEvent, int64 nID, TimestampedEventPart_t nPart)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_541; // 541
	CTimestampedEventLog& log; // 543
	uint64 nTimestamp; // 552
	TimestampedEventListener_t pSendToListener; // 554
	{
		BufferedEvent_t* pEvent; // 562
		CTimestampedEventLog::AllocateEvent(); // 562
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
			int nLineNumber);  // 541
	CTimestampedEventLog::CTimestampedEventLog(); // 441
	Get(void); // 439
	Get(void); // 543
	CTimestampedEventLog::IsLogging(); // 544
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 571
	CTimestampedEventLog::GetListener(); // 554
	CTimestampedEventLog::AllocateID(); // 549
} /* size: 576, variables: 4, inline expansions: 16 (908 bytes) */

// <000F33BA> tier0/dbg.cpp:573
// variables: 2
int64 TimestampedEventMsg(TimestampedEvent_t nEvent, int64 nID, TimestampedEventPart_t nPart, const char* fmt, ...)
{
	va_list args; // 575
	int64 nResult; // 577
} /* size: 165, variables: 2 */

// <000F2D2B> tier0/dbg.cpp:582
// variables: 8
// function calls: 17
int64 TimestampedEventMsgV(TimestampedEvent_t nEvent, int64 nID, TimestampedEventPart_t nPart, const char* pFormat, typedef __va_list_tag __va_list_tag* marker)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_584; // 584
	CTimestampedEventLog& log; // 586
	uint64 nTimestamp; // 595
	TimestampedEventListener_t pSendToListener; // 597
	char pLocalStringBuffer; // 599
	char* pTargetBuffer; // 600
	int len; // 613
	{
		BufferedEvent_t* pEvent; // 604
		CTimestampedEventLog::AllocateEvent(); // 604
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
			int nLineNumber);  // 584
	CTimestampedEventLog::CTimestampedEventLog(); // 441
	Get(void); // 439
	Get(void); // 586
	CTimestampedEventLog::IsLogging(); // 587
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 622
	CTimestampedEventLog::GetListener(); // 597
	CTimestampedEventLog::AllocateID(); // 592
} /* size: 755, variables: 7, inline expansions: 16 (908 bytes) */

// <000F26C2> tier0/dbg.cpp:624
// variables: 6
// function calls: 19
void TimestampedEvent_RegisterListenerAndFlushBuffer(TimestampedEventListener_t pListener)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_626; // 626
	CTimestampedEventLog& log; // 628
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
			int nLineNumber);  // 626
	CTimestampedEventLog::CTimestampedEventLog(); // 441
	Get(void); // 439
	Get(void); // 628
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 495
	{
		int* _pCrash; // 495
	}
	CTimestampedEventLog::SetListener(
			TimestampedEventListener_t pListener);  // 491
	CTimestampedEventLog::SetListener(
			TimestampedEventListener_t pListener);  // 629
	{
		int iEvent; // 513
		{
			const BufferedEvent_t& event; // 515
		}
	}
	{
		int* _pCrash; // 507
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 507
	CTimestampedEventLog::FlushBuffer(); // 503
	CTimestampedEventLog::FlushBuffer(); // 630
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 631
} /* size: 728, variables: 2, inline expansions: 19 (1450 bytes) */

// <000F6D92> tier0/dbg.cpp:868
void* IAssertionFailureListener_Tier0Manipulator::AssertionFailure(AssertionFailureInfo_t* pInfo)
{
} /* size: 0 */

// <000F2697> tier0/dbg.cpp:868
inline void* IAssertionFailureListener_Tier0Manipulator::AssertionFailure(AssertionFailureInfo_t* pInfo)
{
} /* size: 0 */

// <000F267E> tier0/dbg.cpp:874
inline void IAssertionFailureListener_Tier0Manipulator::GetRegisteredVar()
{
} /* size: 0 */

// <000F2665> tier0/dbg.cpp:875
inline void IAssertionFailureListener_Tier0Manipulator::GetNextVar()
{
} /* size: 0 */

// <000F0E8A> tier0/dbg.cpp:879
// member variables: 2
// struct size: 16
struct AssertionFailureListenerCallbackList_t {
	IAssertionFailureListener * pListener; /* 0 8 */
	void * pContext; /* 8 8 */
};

// <000F0EB9> tier0/dbg.cpp:885
// member variables: 10
// struct size: 64
struct AssertionFailureListenerMiniDumpContext_t {
	const char * pchFile; /* 0 8 */
	int nLine; /* 8 4 */
	const char * pchFunction; /* 16 8 */
	const char * pchExpression; /* 24 8 */
	int nInstanceReportCount; /* 32 4 */
	AssertionType_t nType; /* 36 4 */
	bool bFatal; /* 40 1 */
	bool bIgnored; /* 41 1 */
	int nCallbackCount; /* 44 4 */
	AssertionFailureListenerCallbackList_t pCallbackList[1]; /* 48 16 */
};

// <000F2082> tier0/dbg.cpp:901
// variables: 11
// function calls: 10
AssertionFailureListenerMiniDumpContext_t* ReportAssertionFailureToListeners(AssertionFailureInfo_t* pInfo)
{
	int nIsFirstReport; // 903
	int nListenerResults; // 904
	AssertionFailureListenerCallbackList_t* pListenerResults; // 907
	{
		IAssertionFailureListener* pIter; // 909
		{
			void* pResult; // 935
			IAssertionFailureListener::OnlyMonitorsEachAssertionOnce(); // 911
		}
	}
	{
		size_t nMessageLength; // 948
		size_t nBaseMessageLength; // 949
		uint8* pMemory; // 950
		AssertionFailureListenerMiniDumpContext_t* pStruct; // 951
		uint8* pBuffer; // 961
		char* pScan; // 968
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 962
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 964
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 966
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 906
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 944
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <000F2001> tier0/dbg.cpp:994
// variable: 1
void FreeAssertionFailureMiniDumpContext(AssertionFailureListenerMiniDumpContext_t* pContext)
{
	{
		uint8* pMemory; // 998
	}
} /* size: 0 */

// <000F1B62> tier0/dbg.cpp:1003
// variables: 4
// function calls: 9
void RegisterAssertionFailureListener(IAssertionFailureListener* pListener)
{
	IAssertionFailureListener* pIter; // 1007
	const char   __FUNCTION__; // 24176
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1013
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1021
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1005
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1014
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1023
} /* size: 0, variables: 2, inline expansions: 9 (1018 bytes) */

// <000F1A0C> tier0/dbg.cpp:1049
// variables: 4
// function call: 1
void UnregisterAssertionFailureListener(IAssertionFailureListener* pListener)
{
	IAssertionFailureListener* pIter; // 1060
	IAssertionFailureListener** pWrite; // 1061
	const char   __FUNCTION__; // 22993
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1079
	}
	IAssertionFailureListener_Tier0Manipulator::GetNextVar(); // 1075
} /* size: 0, variables: 3, inline expansions: 1 (4 bytes) */

