
//
// public/tier2/threaded_logger.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	classes: 3
//

// <06859AAF> ../public/tier2/threaded_logger.h:31
// member functions: 36
// member variables: 8
// vtable entries: 4
// class size: 320
class CThreadedLogger {
	/* ../public/tier2/threaded_logger.h:59 */
	struct Buffer_t {
		/* ../public/tier2/threaded_logger.h:61 */
		void Buffer_t(Buffer_t* );
		/* ../public/tier2/threaded_logger.h:62 */
		void ~Buffer_t(Buffer_t* );
		int m_cbText; /* 0 4 */
		/* ../public/tier2/threaded_logger.h:70 */
		const char* GetText(const Buffer_t* );
		char * m_pszDynamicText; /* 8 8 */
		char m_szStaticText[512]; /* 16 512 */
		/* ../public/tier2/threaded_logger.h:79 */
		void FreeDynamicText(Buffer_t* );
	private:
		/* ../public/tier2/threaded_logger.h:89 */
		void Buffer_t(Buffer_t* , const Buffer_t& );
		/* ../public/tier2/threaded_logger.h:90 */
		void operator=(Buffer_t* , const Buffer_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier2/threaded_logger.h:110 */
	enum EStatus {
		k_EStatus_Closed = 0,
		k_EStatus_Closing = 1,
		k_EStatus_Open = 2,
	};
	void CThreadedLogger(CThreadedLogger* , const CThreadedLogger& );
	int ()(void) * * _vptr.CThreadedLogger; /* 0 8 */
	/* tier2/threaded_logger.cpp:88 */
	virtual void ~CThreadedLogger(CThreadedLogger* );
	/* tier2/threaded_logger.cpp:95 */
	void Printf(CThreadedLogger* , const char* , ...);
	/* tier2/threaded_logger.cpp:163 */
	void Vprintf(CThreadedLogger* , const char* , typedef __va_list_tag __va_list_tag* );
	/* tier2/threaded_logger.cpp:103 */
	void Write(CThreadedLogger* , const void* , int);
	/* tier2/threaded_logger.cpp:240 */
	void Flush(CThreadedLogger* );
	/* tier2/threaded_logger.cpp:249 */
	void Close(CThreadedLogger* );
protected:
	/* tier2/threaded_logger.cpp:80 */
	void CThreadedLogger(CThreadedLogger* );
	/* tier2/threaded_logger.cpp:222 */
	void OpenAndStartThread(CThreadedLogger* , const char* );
	/* ../public/tier2/threaded_logger.h:96 */
	virtual void WriteIO(CThreadedLogger* , Buffer_t** , int);
	/* ../public/tier2/threaded_logger.h:101 */
	virtual void CloseIO(CThreadedLogger* );
	/* tier2/threaded_logger.cpp:271 */
	virtual void FlushIO(CThreadedLogger* );
	volatile int32 m_eStatus; /* 8 4 */
	int m_nThreadWakeIntervalMS; /* 12 4 */
	CThreadMutex m_mutex; /* 16 72 */
	CTSQueue<CThreadedLogger::Buffer_t*, false> m_queueBuffers __attribute__((__aligned__(16))); /* 96 64 */
private:
	CTSPool<CThreadedLogger::Buffer_t> m_bufferPool __attribute__((__aligned__(16))); /* 160 16 */
	thread * m_pThread; /* 176 8 */
	CThreadEvent m_event; /* 184 128 */
	/* tier2/threaded_logger.cpp:274 */
	void WriteQueuedBuffers(CThreadedLogger* );
	/* tier2/threaded_logger.cpp:272 */
	virtual void Poll(CThreadedLogger* );
	/* tier2/threaded_logger.cpp:316 */
	void ThreadProc(CThreadedLogger* );
	void CThreadedLogger(class CThreadedLogger *, const class CThreadedLogger  &); /* linkage=_ZN15CThreadedLoggerC4ERKS_ */
	virtual void ~CThreadedLogger(class CThreadedLogger *); /* linkage=_ZN15CThreadedLoggerD4Ev */
	void Printf(class CThreadedLogger *, const char  *, ...); /* linkage=_ZN15CThreadedLogger6PrintfEPKcz */
	void Vprintf(class CThreadedLogger *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN15CThreadedLogger7VprintfEPKcP13__va_list_tag */
	void Write(class CThreadedLogger *, const void  *, int); /* linkage=_ZN15CThreadedLogger5WriteEPKvi */
	void Flush(class CThreadedLogger *); /* linkage=_ZN15CThreadedLogger5FlushEv */
	/* <6861845> tier2/threaded_logger.cpp:249 */
	void Close(class CThreadedLogger *); /* linkage=_ZN15CThreadedLogger5CloseEv */
	void CThreadedLogger(class CThreadedLogger *); /* linkage=_ZN15CThreadedLoggerC4Ev */
	void OpenAndStartThread(class CThreadedLogger *, const char  *); /* linkage=_ZN15CThreadedLogger18OpenAndStartThreadEPKc */
	virtual void WriteIO(class CThreadedLogger *, class Buffer_t * *, int); /* linkage=_ZN15CThreadedLogger7WriteIOEPPNS_8Buffer_tEi */
	virtual void CloseIO(class CThreadedLogger *); /* linkage=_ZN15CThreadedLogger7CloseIOEv */
	virtual void FlushIO(class CThreadedLogger *); /* linkage=_ZN15CThreadedLogger7FlushIOEv */
	void WriteQueuedBuffers(class CThreadedLogger *); /* linkage=_ZN15CThreadedLogger18WriteQueuedBuffersEv */
	virtual void Poll(class CThreadedLogger *); /* linkage=_ZN15CThreadedLogger4PollEv */
	void ThreadProc(class CThreadedLogger *); /* linkage=_ZN15CThreadedLogger10ThreadProcEv */
} __attribute__((__aligned__(16)));

// <0686095A> ../public/tier2/threaded_logger.h:61
void Buffer_t::Buffer_t()
{
} /* size: 0 */

// <06860941> ../public/tier2/threaded_logger.h:61
inline void Buffer_t::Buffer_t()
{
} /* size: 0 */

// <0686092A> ../public/tier2/threaded_logger.h:62
void Buffer_t::~Buffer_t()
{
} /* size: 0 */

// <06860911> ../public/tier2/threaded_logger.h:62
inline void Buffer_t::~Buffer_t()
{
} /* size: 0 */

// <068608F8> ../public/tier2/threaded_logger.h:70
inline void Buffer_t::GetText()
{
} /* size: 0 */

// <068608DF> ../public/tier2/threaded_logger.h:79
inline void Buffer_t::FreeDynamicText()
{
} /* size: 0 */

// <0685A77B> ../public/tier2/threaded_logger.h:150
// member functions: 12
// member variable: 1
// vtable entries: 3
// class size: 320
class CThreadedStdoutLogger : public CThreadedLogger {
public:
	/* class CThreadedLogger <ancestor>; */ /* 0 320 */
	void CThreadedStdoutLogger(CThreadedStdoutLogger* , const CThreadedStdoutLogger& );
	/* tier2/threaded_logger.cpp:464 */
	void CThreadedStdoutLogger(CThreadedStdoutLogger* );
	/* tier2/threaded_logger.cpp:465 */
	virtual void ~CThreadedStdoutLogger(CThreadedStdoutLogger* );
protected:
	/* tier2/threaded_logger.cpp:467 */
	virtual void WriteIO(CThreadedStdoutLogger* , Buffer_t** , int);
	/* tier2/threaded_logger.cpp:474 */
	virtual void CloseIO(CThreadedStdoutLogger* );
	/* tier2/threaded_logger.cpp:473 */
	virtual void FlushIO(CThreadedStdoutLogger* );
	void CThreadedStdoutLogger(class CThreadedStdoutLogger *, const class CThreadedStdoutLogger  &); /* linkage=_ZN21CThreadedStdoutLoggerC4ERKS_ */
	void CThreadedStdoutLogger(class CThreadedStdoutLogger *); /* linkage=_ZN21CThreadedStdoutLoggerC4Ev */
	virtual void ~CThreadedStdoutLogger(class CThreadedStdoutLogger *); /* linkage=_ZN21CThreadedStdoutLoggerD4Ev */
	virtual void WriteIO(class CThreadedStdoutLogger *, class Buffer_t * *, int); /* linkage=_ZN21CThreadedStdoutLogger7WriteIOEPPN15CThreadedLogger8Buffer_tEi */
	virtual void CloseIO(class CThreadedStdoutLogger *); /* linkage=_ZN21CThreadedStdoutLogger7CloseIOEv */
	virtual void FlushIO(class CThreadedStdoutLogger *); /* linkage=_ZN21CThreadedStdoutLogger7FlushIOEv */
} __attribute__((__aligned__(16)));

// <0685A88F> ../public/tier2/threaded_logger.h:164
// member functions: 20
// member variables: 3
// vtable entries: 4
// class size: 4,416
class CThreadedFileLogger : public CThreadedLogger {
public:
	/* class CThreadedLogger <ancestor>; */ /* 0 320 */
	void CThreadedFileLogger(CThreadedFileLogger* , const CThreadedFileLogger& );
	/* tier2/threaded_logger.cpp:354 */
	void CThreadedFileLogger(CThreadedFileLogger* );
	/* tier2/threaded_logger.cpp:360 */
	void CThreadedFileLogger(CThreadedFileLogger* , const char* , bool);
	/* tier2/threaded_logger.cpp:367 */
	virtual void ~CThreadedFileLogger(CThreadedFileLogger* );
	/* tier2/threaded_logger.cpp:383 */
	bool Open(CThreadedFileLogger* , const char* , bool);
protected:
	char m_szFilename[4096]; /* 312 4096 */
	FILE * m_fp; /* 4408 8 */
	/* tier2/threaded_logger.cpp:398 */
	virtual void WriteIO(CThreadedFileLogger* , Buffer_t** , int);
	/* tier2/threaded_logger.cpp:443 */
	virtual void CloseIO(CThreadedFileLogger* );
	/* tier2/threaded_logger.cpp:452 */
	virtual void FlushIO(CThreadedFileLogger* );
	/* tier2/threaded_logger.cpp:438 */
	virtual void Poll(CThreadedFileLogger* );
	/* tier2/threaded_logger.cpp:412 */
	void CheckLogRotation(CThreadedFileLogger* );
	void CThreadedFileLogger(class CThreadedFileLogger *, const class CThreadedFileLogger  &); /* linkage=_ZN19CThreadedFileLoggerC4ERKS_ */
	void CThreadedFileLogger(class CThreadedFileLogger *); /* linkage=_ZN19CThreadedFileLoggerC4Ev */
	void CThreadedFileLogger(class CThreadedFileLogger *, const char  *, bool); /* linkage=_ZN19CThreadedFileLoggerC4EPKcb */
	virtual void ~CThreadedFileLogger(class CThreadedFileLogger *); /* linkage=_ZN19CThreadedFileLoggerD4Ev */
	bool Open(class CThreadedFileLogger *, const char  *, bool); /* linkage=_ZN19CThreadedFileLogger4OpenEPKcb */
	/* <6860fb1> tier2/threaded_logger.cpp:398 */
	virtual void WriteIO(class CThreadedFileLogger *, class Buffer_t * *, int); /* linkage=_ZN19CThreadedFileLogger7WriteIOEPPN15CThreadedLogger8Buffer_tEi */
	virtual void CloseIO(class CThreadedFileLogger *); /* linkage=_ZN19CThreadedFileLogger7CloseIOEv */
	virtual void FlushIO(class CThreadedFileLogger *); /* linkage=_ZN19CThreadedFileLogger7FlushIOEv */
	virtual void Poll(class CThreadedFileLogger *); /* linkage=_ZN19CThreadedFileLogger4PollEv */
	void CheckLogRotation(class CThreadedFileLogger *); /* linkage=_ZN19CThreadedFileLogger16CheckLogRotationEv */
} __attribute__((__aligned__(16)));

// <06831D4E> ../public/tier2/threaded_logger.h:167
void CThreadedFileLogger::CThreadedFileLogger()
{
} /* size: 0 */

