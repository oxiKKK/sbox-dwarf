
//
// filesystem/asyncfilesystem2.h
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 35
//	class: 1
//

// <00037BB0> filesystem/asyncfilesystem2.h:24
// member functions: 105
// member variables: 10
// vtable entries: 17
// class size: 824
class CAsyncFileSystem2 : public CTier2AppSystem<IAsyncFileSystem2, 0> {
	/* filesystem/asyncfilesystem2.h:115 */
	class CReadRequestHandle : public IAsyncReadRequest2, public IRequest, public enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle> {
	public:
		/* class IAsyncReadRequest2 <ancestor>; */ /* 0 224 */
		/* class IRequest <ancestor>; */ /* 224 8 */
		/* class enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle> <ancestor>; */ /* 232 16 */
		void CReadRequestHandle(CReadRequestHandle* , const CReadRequestHandle& );
		/* filesystem/asyncfilesystem2.cpp:467 */
		void CReadRequestHandle(CReadRequestHandle* , CReadRequestBuilder& );
		/* filesystem/asyncfilesystem2.cpp:489 */
		virtual void ~CReadRequestHandle(CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:630 */
		virtual void Service(CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:517 */
		virtual void Submit(CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:532 */
		virtual void* GetResultBuffer(const CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:537 */
		virtual size_t GetResultSize(const CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:542 */
		virtual void KeepResultBuffer(CReadRequestHandle* , IMemoryMappedFile** );
		/* filesystem/asyncfilesystem2.cpp:553 */
		virtual void Cancel(CReadRequestHandle* , bool);
		/* filesystem/asyncfilesystem2.cpp:578 */
		virtual bool WasCanceled(const CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:583 */
		virtual bool IsComplete(const CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:612 */
		virtual bool GetProfilingInfo(CReadRequestHandle* , uint64* , int);
		/* filesystem/asyncfilesystem2.cpp:588 */
		virtual AsyncRequestPriority_t GetPriority(const CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:593 */
		virtual bool SetPriority(CReadRequestHandle* , AsyncRequestPriority_t);
		/* filesystem/asyncfilesystem2.h:137 */
		bool IsInQueue(const CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.h:138 */
		void SetCompletionSemaphore(CReadRequestHandle* , CThreadFastSemaphore* );
		/* filesystem/asyncfilesystem2.cpp:736 */
		void RunCallbackAndMarkComplete(CReadRequestHandle* , AsyncRequestStatus_t);
	private:
		/* filesystem/asyncfilesystem2.cpp:496 */
		void ReleaseResultBuffer(CReadRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:760 */
		AsyncRequestStatus_t ServiceWithRead(CReadRequestHandle* , FileHandle_t, uint64, size_t);
		/* filesystem/asyncfilesystem2.cpp:794 */
		AsyncRequestStatus_t ServiceWithMMap(CReadRequestHandle* , FileHandle_t, uint64, size_t);
		const class CAsyncFileSystem2 * m_pFileSystem; /* 248 8 */
		const int64 m_nReadOffset; /* 256 8 */
		const size_t m_nReadBytes; /* 264 8 */
		const bool m_bProfile; /* 272 1 */
		const bool m_bAllowMemoryMap; /* 273 1 */
		const bool m_bPreferMemoryMap; /* 274 1 */
		const bool m_bTextMode; /* 275 1 */
		const bool m_bFrontOfQueue; /* 276 1 */
		bool m_bSubmitted; /* 277 1 */
		bool m_bCanceled; /* 278 1 */
		bool m_bComplete; /* 279 1 */
		bool m_bInQueue; /* 280 1 */
		bool m_bOwnsResultBuffer; /* 281 1 */
		void * m_pResultBuffer; /* 288 8 */
		size_t m_nResultBufferSize; /* 296 8 */
		size_t m_nResultBytesRead; /* 304 8 */
		IMemoryMappedFile * m_pMappedFile; /* 312 8 */
		ReadCallback_t m_callback; /* 320 32 */
		AsyncRequestPriority_t m_priority; /* 352 4 */
		CThreadFastSemaphore * m_pCompletionSema; /* 360 8 */
		const class CCompletionQueue * m_pCompletionQueue; /* 368 8 */
		uint64 m_ProfileTimings[3]; /* 376 24 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/asyncfilesystem2.h:212 */
	class CWriteRequestHandle : public IAsyncWriteRequest2, public IRequest, public enable_shared_from_this<CAsyncFileSystem2::CWriteRequestHandle> {
	public:
		/* class IAsyncWriteRequest2 <ancestor>; */ /* 0 224 */
		/* class IRequest <ancestor>; */ /* 224 8 */
		/* class enable_shared_from_this<CAsyncFileSystem2::CWriteRequestHandle> <ancestor>; */ /* 232 16 */
		void CWriteRequestHandle(CWriteRequestHandle* , const CWriteRequestHandle& );
		/* filesystem/asyncfilesystem2.cpp:838 */
		void CWriteRequestHandle(CWriteRequestHandle* , CWriteRequestBuilder& );
		/* filesystem/asyncfilesystem2.cpp:852 */
		virtual void ~CWriteRequestHandle(CWriteRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:863 */
		virtual void Submit(CWriteRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:880 */
		virtual bool IsComplete(const CWriteRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:885 */
		virtual AsyncRequestStatus_t GetStatus(const CWriteRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:890 */
		virtual AsyncRequestPriority_t GetPriority(const CWriteRequestHandle* );
		/* filesystem/asyncfilesystem2.cpp:895 */
		virtual bool SetPriority(CWriteRequestHandle* , AsyncRequestPriority_t);
		/* filesystem/asyncfilesystem2.cpp:912 */
		virtual bool GetProfilingInfo(CWriteRequestHandle* , uint64* , int);
		/* filesystem/asyncfilesystem2.cpp:930 */
		virtual void Service(CWriteRequestHandle* );
		/* filesystem/asyncfilesystem2.h:230 */
		bool IsInQueue(const CWriteRequestHandle* );
		/* filesystem/asyncfilesystem2.h:231 */
		void SetCompletionSemaphore(CWriteRequestHandle* , CThreadFastSemaphore* );
	private:
		const class CAsyncFileSystem2 * m_pFileSystem; /* 248 8 */
		const void * m_pBuffer; /* 256 8 */
		const size_t m_nWriteBytes; /* 264 8 */
		const bool m_bProfile; /* 272 1 */
		const bool m_bAppend; /* 273 1 */
		const bool m_bTextMode; /* 274 1 */
		bool m_bSubmitted; /* 275 1 */
		bool m_bComplete; /* 276 1 */
		AsyncRequestStatus_t m_status; /* 280 4 */
		AsyncRequestPriority_t m_priority; /* 284 4 */
		WriteCallback_t m_callback; /* 288 32 */
		function<void(void const*)> m_freeBuffer; /* 320 32 */
		shared_ptr<CAsyncFileSystem2::CWriteRequestHandle> m_strongSelf; /* 352 16 */
		CThreadFastSemaphore * m_pCompletionSema; /* 368 8 */
		uint64 m_ProfileTimings[3]; /* 376 24 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/asyncfilesystem2.h:291 */
	class CCopyFileHandle : public IAsyncCopyRequest2, public IRequest, public enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle> {
	public:
		/* class IAsyncCopyRequest2 <ancestor>; */ /* 0 432 */
		/* class IRequest <ancestor>; */ /* 432 8 */
		/* class enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle> <ancestor>; */ /* 440 16 */
		void CCopyFileHandle(CCopyFileHandle* , const CCopyFileHandle& );
		/* filesystem/asyncfilesystem2.cpp:1012 */
		void CCopyFileHandle(CCopyFileHandle* , CCopyFileRequestBuilder& );
		/* filesystem/asyncfilesystem2.cpp:1021 */
		virtual void ~CCopyFileHandle(CCopyFileHandle* );
		/* filesystem/asyncfilesystem2.cpp:1025 */
		virtual void Submit(CCopyFileHandle* );
		/* filesystem/asyncfilesystem2.cpp:1034 */
		virtual bool IsComplete(const CCopyFileHandle* );
		/* filesystem/asyncfilesystem2.cpp:1039 */
		virtual AsyncRequestStatus_t GetStatus(const CCopyFileHandle* );
		/* filesystem/asyncfilesystem2.cpp:1044 */
		virtual void Service(CCopyFileHandle* );
	private:
		/* filesystem/asyncfilesystem2.cpp:1060 */
		AsyncRequestStatus_t DoService(CCopyFileHandle* );
		const class CAsyncFileSystem2 * m_pFileSystem; /* 456 8 */
		const enum AsyncRequestPriority_t m_priority; /* 464 4 */
		const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_prependData; /* 472 32 */
		const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_appendData; /* 504 32 */
		bool m_bSubmitted; /* 536 1 */
		bool m_bComplete; /* 537 1 */
		AsyncRequestStatus_t m_status; /* 540 4 */
		shared_ptr<CAsyncFileSystem2::CCopyFileHandle> m_strongSelf; /* 544 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/asyncfilesystem2.h:324 */
	class CCompletionQueue : public IIOCompletionQueue {
		/* filesystem/asyncfilesystem2.h:337 */
		struct Result {
			weak_ptr<CAsyncFileSystem2::CReadRequestHandle> m_pRequest; /* 0 16 */
			AsyncRequestStatus_t m_status; /* 16 4 */
			void Result(Result* , Result& );
			Result& operator=(Result* , const Result& );
			void Result(Result* );
			void ~Result(Result* );
		};
		/* tag__fprintf: const_type tag not supported! */;
	public:
		/* class IIOCompletionQueue <ancestor>; */ /* 0 8 */
		void CCompletionQueue(CCompletionQueue* , const CCompletionQueue& );
		/* filesystem/asyncfilesystem2.cpp:1124 */
		void CCompletionQueue(CCompletionQueue* );
		/* filesystem/asyncfilesystem2.cpp:1128 */
		virtual void ~CCompletionQueue(CCompletionQueue* );
		/* filesystem/asyncfilesystem2.cpp:1144 */
		virtual void ProcessResults(CCompletionQueue* , int);
		/* filesystem/asyncfilesystem2.cpp:1138 */
		void AddResult(CCompletionQueue* , const shared_ptr<CAsyncFileSystem2::CReadRequestHandle>& , AsyncRequestStatus_t);
	private:
		CThreadMutex m_lock; /* 8 72 */
		deque<CAsyncFileSystem2::CCompletionQueue::Result, std::allocator<CAsyncFileSystem2::CCompletionQueue::Result> > m_results; /* 80 80 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/asyncfilesystem2.cpp:47 */
	class CIOServiceThread : public CThread {
	public:
		/* class CThread <ancestor>; */ /* 0 0 */
		void CIOServiceThread(CIOServiceThread* , CIOServiceThread& );
		void CIOServiceThread(CIOServiceThread* , const CIOServiceThread& );
		/* filesystem/asyncfilesystem2.cpp:50 */
		void CIOServiceThread(CIOServiceThread* , CAsyncFileSystem2* );
		/* filesystem/asyncfilesystem2.cpp:55 */
		virtual int Run(CIOServiceThread* );
	private:
		const class CAsyncFileSystem2 * m_pFileSystem; /* 400 8 */
		virtual void ~CIOServiceThread(CIOServiceThread* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/asyncfilesystem2.h:75 */
	class IRequest {
		void IRequest(IRequest* , IRequest& );
		void IRequest(IRequest* , const IRequest& );
		void IRequest(IRequest* );
		void ~IRequest(IRequest* );
		int ()(void) * * _vptr.IRequest; /* 0 8 */
		/* filesystem/asyncfilesystem2.h:78 */
		virtual void Service(IRequest* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/asyncfilesystem2.h:93 */
	class CReadRequestBuilder : public IReadRequestBuilder {
	public:
		/* class IReadRequestBuilder <ancestor>; */ /* 0 96 */
		void CReadRequestBuilder(CReadRequestBuilder* , CReadRequestBuilder& );
		void CReadRequestBuilder(CReadRequestBuilder* , const CReadRequestBuilder& );
		/* filesystem/asyncfilesystem2.h:96 */
		void CReadRequestBuilder(CReadRequestBuilder* , CAsyncFileSystem2* , const char* , const char* );
		/* filesystem/asyncfilesystem2.h:103 */
		ReadCallback_t& TakeCallback(CReadRequestBuilder* );
		/* filesystem/asyncfilesystem2.cpp:459 */
		virtual shared_ptr<IAsyncReadRequest2> Build(CReadRequestBuilder* );
		const class CAsyncFileSystem2 * m_pFileSystem; /* 96 8 */
		const CPathBufferString m_fileName; /* 104 208 */
		const class CUtlSymbol m_pathID; /* 312 2 */
		bool m_bBuilt; /* 314 1 */
		virtual void ~CReadRequestBuilder(CReadRequestBuilder* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/asyncfilesystem2.h:181 */
	class CWriteRequestBuilder : public IWriteRequestBuilder {
	public:
		/* class IWriteRequestBuilder <ancestor>; */ /* 0 80 */
		void CWriteRequestBuilder(CWriteRequestBuilder* , CWriteRequestBuilder& );
		void CWriteRequestBuilder(CWriteRequestBuilder* , const CWriteRequestBuilder& );
		/* filesystem/asyncfilesystem2.h:184 */
		void CWriteRequestBuilder(CWriteRequestBuilder* , CAsyncFileSystem2* , const char* , const char* , const void* , size_t);
		/* filesystem/asyncfilesystem2.h:197 */
		WriteCallback_t& TakeCallback(CWriteRequestBuilder* );
		/* filesystem/asyncfilesystem2.h:198 */
		function<void(void const*)>& TakeFreeBufferCallback(CWriteRequestBuilder* );
		/* filesystem/asyncfilesystem2.cpp:830 */
		virtual shared_ptr<IAsyncWriteRequest2> Build(CWriteRequestBuilder* );
		const class CAsyncFileSystem2 * m_pFileSystem; /* 80 8 */
		const CPathBufferString m_fileName; /* 88 208 */
		const class CUtlSymbol m_pathID; /* 296 2 */
		const const void * m_pBuffer; /* 304 8 */
		const size_t m_nWriteBytes; /* 312 8 */
		bool m_bBuilt; /* 320 1 */
		virtual void ~CWriteRequestBuilder(CWriteRequestBuilder* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/asyncfilesystem2.h:262 */
	class CCopyFileRequestBuilder : public ICopyFileRequestBuilder {
	public:
		/* class ICopyFileRequestBuilder <ancestor>; */ /* 0 80 */
		void CCopyFileRequestBuilder(CCopyFileRequestBuilder* , CCopyFileRequestBuilder& );
		void CCopyFileRequestBuilder(CCopyFileRequestBuilder* , const CCopyFileRequestBuilder& );
		/* filesystem/asyncfilesystem2.h:265 */
		void CCopyFileRequestBuilder(CCopyFileRequestBuilder* , CAsyncFileSystem2* , const char* , const char* , const char* );
		/* filesystem/asyncfilesystem2.h:276 */
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& TakeAppendData(CCopyFileRequestBuilder* );
		/* filesystem/asyncfilesystem2.h:277 */
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& TakePrependData(CCopyFileRequestBuilder* );
		/* filesystem/asyncfilesystem2.cpp:1004 */
		virtual shared_ptr<IAsyncCopyRequest2> Build(CCopyFileRequestBuilder* );
		const class CAsyncFileSystem2 * m_pFileSystem; /* 80 8 */
		const CPathBufferString m_srcFileName; /* 88 208 */
		const CPathBufferString m_dstFileName; /* 296 208 */
		const class CUtlSymbol m_pathID; /* 504 2 */
		bool m_bBuilt; /* 506 1 */
		virtual void ~CCopyFileRequestBuilder(CCopyFileRequestBuilder* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier2AppSystem<IAsyncFileSystem2, 0> <ancestor>; */ /* 0 48 */
	void CAsyncFileSystem2(CAsyncFileSystem2* , const CAsyncFileSystem2& );
	/* filesystem/asyncfilesystem2.cpp:69 */
	void CAsyncFileSystem2(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:74 */
	virtual void ~CAsyncFileSystem2(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:211 */
	virtual void SuspendAsyncIO(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:229 */
	virtual void ResumeAsyncIO(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:179 */
	virtual void FinishAsyncIO(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:205 */
	virtual void FinishAsyncWrites(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:161 */
	virtual void AbortAllAsyncIO(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:315 */
	virtual void BlockUntilComplete(CAsyncFileSystem2* , const shared_ptr<IAsyncReadRequest2>& );
	/* filesystem/asyncfilesystem2.cpp:320 */
	virtual void BlockUntilComplete(CAsyncFileSystem2* , const shared_ptr<IAsyncWriteRequest2>& );
	/* filesystem/asyncfilesystem2.cpp:451 */
	virtual unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> > NewReadRequest(CAsyncFileSystem2* , const char* , const char* );
	/* filesystem/asyncfilesystem2.cpp:819 */
	virtual unique_ptr<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilder> > NewWriteRequest(CAsyncFileSystem2* , const char* , const char* , const void* , size_t);
	/* filesystem/asyncfilesystem2.cpp:997 */
	virtual unique_ptr<IAsyncFileSystem2::ICopyFileRequestBuilder, std::default_delete<IAsyncFileSystem2::ICopyFileRequestBuilder> > NewCopyRequest(CAsyncFileSystem2* , const char* , const char* , const char* );
	/* filesystem/asyncfilesystem2.cpp:1118 */
	virtual unique_ptr<IIOCompletionQueue, std::default_delete<IIOCompletionQueue> > CreateCompletionQueue(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:412 */
	virtual void* AllocateBuffer(CAsyncFileSystem2* , size_t, const char* );
	/* filesystem/asyncfilesystem2.cpp:427 */
	virtual void ReleaseBuffer(CAsyncFileSystem2* , void* );
	/* filesystem/asyncfilesystem2.cpp:1170 */
	virtual const char* GetAsyncRequestStatusString(CAsyncFileSystem2* , AsyncRequestStatus_t);
	/* filesystem/asyncfilesystem2.cpp:131 */
	virtual void* QueryInterface(CAsyncFileSystem2* , const char* );
	/* filesystem/asyncfilesystem2.cpp:94 */
	virtual InitReturnVal_t Init(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:113 */
	virtual void Shutdown(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:143 */
	void ChangeThreadCount(CAsyncFileSystem2* , int);
private:
	/* filesystem/asyncfilesystem2.cpp:370 */
	void ServiceRequests(CAsyncFileSystem2* );
	/* filesystem/asyncfilesystem2.cpp:325 */
	void Submit(CAsyncFileSystem2* , shared_ptr<CAsyncFileSystem2::IRequest>, AsyncRequestPriority_t, bool);
	/* filesystem/asyncfilesystem2.cpp:346 */
	bool ChangePriority(CAsyncFileSystem2* , IRequest* , AsyncRequestPriority_t, AsyncRequestPriority_t);
protected:
	CUtlVector<CAsyncFileSystem2::CIOServiceThread*, CUtlMemory<CAsyncFileSystem2::CIOServiceThread*, int> > m_threads; /* 48 32 */
	bool m_bFileSystemInitialized; /* 80 1 */
	bool m_bPreferMemoryMappedReads; /* 81 1 */
	bool m_bRunning; /* 82 1 */
	CThreadMutex m_requestStateMutex; /* 88 72 */
	CThreadFastSemaphore m_completionSema __attribute__((__aligned__(8))); /* 160 136 */
	CThreadFastSemaphore m_queueSema __attribute__((__aligned__(8))); /* 296 136 */
	CThreadMutex m_queueMutex; /* 432 72 */
	deque<std::weak_ptr<CAsyncFileSystem2::IRequest>, std::allocator<std::weak_ptr<CAsyncFileSystem2::IRequest> > > m_queues[4]; /* 504 320 */
private:
	/* filesystem/asyncfilesystem2.cpp:279 */
	void BlockUntilComplete<CAsyncFileSystem2::CWriteRequestHandle>(CAsyncFileSystem2* , CWriteRequestHandle* );
	/* filesystem/asyncfilesystem2.cpp:279 */
	void BlockUntilComplete<CAsyncFileSystem2::CReadRequestHandle>(CAsyncFileSystem2* , CReadRequestHandle* );
} __attribute__((__aligned__(8)));

// <0013EDB6> filesystem/asyncfilesystem2.h:29
void CAsyncFileSystem2::CAsyncFileSystem2()
{
} /* size: 0 */

// <0013ED9A> filesystem/asyncfilesystem2.h:30
void CAsyncFileSystem2::~CAsyncFileSystem2()
{
} /* size: 0 */

// <0005A521> filesystem/asyncfilesystem2.h:75
void IRequest::IRequest()
{
} /* size: 0 */

// <0005A505> filesystem/asyncfilesystem2.h:75
inline void IRequest::IRequest()
{
} /* size: 0 */

// <0003FB00> filesystem/asyncfilesystem2.h:93
// function calls: 5
void CReadRequestBuilder::~CReadRequestBuilder()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 93
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncReadRequest2::~function()>* this); // 260
	IReadRequestBuilder::~IReadRequestBuilder(); // 93
} /* size: 86, inline expansions: 5 (111 bytes) */

// <0003F97A> filesystem/asyncfilesystem2.h:93
// function calls: 6
void CReadRequestBuilder::~CReadRequestBuilder()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 93
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncReadRequest2::~function()>* this); // 260
	IReadRequestBuilder::~IReadRequestBuilder(); // 93
	CReadRequestBuilder::~CReadRequestBuilder(); // 93
} /* size: 87, inline expansions: 6 (146 bytes) */

// <0003F95E> filesystem/asyncfilesystem2.h:93
inline void CReadRequestBuilder::~CReadRequestBuilder()
{
} /* size: 0 */

// <00062C3E> filesystem/asyncfilesystem2.h:96
void CReadRequestBuilder::CReadRequestBuilder(CAsyncFileSystem2* pFileSystem, const char* szFileName, const char* szPathID)
{
} /* size: 0 */

// <00062C01> filesystem/asyncfilesystem2.h:96
inline void CReadRequestBuilder::CReadRequestBuilder(CAsyncFileSystem2* pFileSystem, const char* szFileName, const char* szPathID)
{
} /* size: 0 */

// <00062BE8> filesystem/asyncfilesystem2.h:103
inline void CReadRequestBuilder::TakeCallback()
{
} /* size: 0 */

// <00062BCF> filesystem/asyncfilesystem2.h:137
inline void CReadRequestHandle::IsInQueue()
{
} /* size: 0 */

// <00062BAA> filesystem/asyncfilesystem2.h:138
inline void CReadRequestHandle::SetCompletionSemaphore(CThreadFastSemaphore* pSema)
{
} /* size: 0 */

// <0003FE44> filesystem/asyncfilesystem2.h:181
// function calls: 7
void CWriteRequestBuilder::~CWriteRequestBuilder()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 181
	_Function_base::~_Function_base(); // 336
	function<void(void const::~function()>* this); // 332
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncWriteRequest2::~function()>* this); // 332
	IWriteRequestBuilder::~IWriteRequestBuilder(); // 181
} /* size: 110, inline expansions: 7 (183 bytes) */

// <0003FC3F> filesystem/asyncfilesystem2.h:181
// function calls: 8
void CWriteRequestBuilder::~CWriteRequestBuilder()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 181
	_Function_base::~_Function_base(); // 336
	function<void(void const::~function()>* this); // 332
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncWriteRequest2::~function()>* this); // 332
	IWriteRequestBuilder::~IWriteRequestBuilder(); // 181
	CWriteRequestBuilder::~CWriteRequestBuilder(); // 181
} /* size: 110, inline expansions: 8 (238 bytes) */

// <0003FC23> filesystem/asyncfilesystem2.h:181
inline void CWriteRequestBuilder::~CWriteRequestBuilder()
{
} /* size: 0 */

// <00062B46> filesystem/asyncfilesystem2.h:184
void CWriteRequestBuilder::CWriteRequestBuilder(CAsyncFileSystem2* pFileSystem, const char* szFileName, const char* szPathID, const void* pBuffer, size_t nWriteBytes)
{
} /* size: 0 */

// <00062AF1> filesystem/asyncfilesystem2.h:184
inline void CWriteRequestBuilder::CWriteRequestBuilder(CAsyncFileSystem2* pFileSystem, const char* szFileName, const char* szPathID, const void* pBuffer, size_t nWriteBytes)
{
} /* size: 0 */

// <00062AD8> filesystem/asyncfilesystem2.h:197
inline void CWriteRequestBuilder::TakeCallback()
{
} /* size: 0 */

// <00062ABF> filesystem/asyncfilesystem2.h:198
inline void CWriteRequestBuilder::TakeFreeBufferCallback()
{
} /* size: 0 */

// <00062AA6> filesystem/asyncfilesystem2.h:230
inline void CWriteRequestHandle::IsInQueue()
{
} /* size: 0 */

// <00062A81> filesystem/asyncfilesystem2.h:231
inline void CWriteRequestHandle::SetCompletionSemaphore(CThreadFastSemaphore* pSema)
{
} /* size: 0 */

// <00040518> filesystem/asyncfilesystem2.h:262
// function calls: 22
void CCopyFileRequestBuilder::~CCopyFileRequestBuilder()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 262
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 262
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 375
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 375
	ICopyFileRequestBuilder::~ICopyFileRequestBuilder(); // 262
} /* size: 134, inline expansions: 22 (381 bytes) */

// <00040005> filesystem/asyncfilesystem2.h:262
// function calls: 26
void CCopyFileRequestBuilder::~CCopyFileRequestBuilder()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 262
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 262
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 375
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 375
	ICopyFileRequestBuilder::~ICopyFileRequestBuilder(); // 262
	CCopyFileRequestBuilder::~CCopyFileRequestBuilder(); // 262
} /* size: 139, inline expansions: 26 (474 bytes) */

// <0003FFE8> filesystem/asyncfilesystem2.h:262
inline void CCopyFileRequestBuilder::~CCopyFileRequestBuilder()
{
} /* size: 0 */

// <00062A22> filesystem/asyncfilesystem2.h:265
void CCopyFileRequestBuilder::CCopyFileRequestBuilder(CAsyncFileSystem2* pFileSystem, const char* szSrcFileName, const char* szDstFileName, const char* szPathID)
{
} /* size: 0 */

// <000629D5> filesystem/asyncfilesystem2.h:265
inline void CCopyFileRequestBuilder::CCopyFileRequestBuilder(CAsyncFileSystem2* pFileSystem, const char* szSrcFileName, const char* szDstFileName, const char* szPathID)
{
} /* size: 0 */

// <000629BC> filesystem/asyncfilesystem2.h:276
inline void CCopyFileRequestBuilder::TakeAppendData()
{
} /* size: 0 */

// <000629A3> filesystem/asyncfilesystem2.h:277
inline void CCopyFileRequestBuilder::TakePrependData()
{
} /* size: 0 */

// <0004EAB2> filesystem/asyncfilesystem2.h:337
void Result::~Result()
{
} /* size: 0 */

// <0004EA95> filesystem/asyncfilesystem2.h:337
inline void Result::~Result()
{
} /* size: 0 */

// <0004E0D3> filesystem/asyncfilesystem2.h:337
void Result::Result()
{
} /* size: 0 */

// <0004E0B6> filesystem/asyncfilesystem2.h:337
inline void Result::Result()
{
} /* size: 0 */

// <0004DFE8> filesystem/asyncfilesystem2.h:337
inline void Result::operator=(const Result &)
{
} /* size: 0 */

// <00045F01> filesystem/asyncfilesystem2.h:337
void Result::Result(Result &)
{
} /* size: 0 */

// <00045EDF> filesystem/asyncfilesystem2.h:337
inline void Result::Result(Result &)
{
} /* size: 0 */

