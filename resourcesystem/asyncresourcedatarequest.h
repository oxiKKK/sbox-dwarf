
//
// resourcesystem/asyncresourcedatarequest.h
//
//	referenced by: libengine2.so
//
//	functions: 12
//	classes: 2
//

// <022DEF7A> resourcesystem/asyncresourcedatarequest.h:21
void IAsyncResourceDataRequestOwner::IAsyncResourceDataRequestOwner()
{
} /* size: 0 */

// <022DEF5D> resourcesystem/asyncresourcedatarequest.h:21
inline void IAsyncResourceDataRequestOwner::IAsyncResourceDataRequestOwner()
{
} /* size: 0 */

// <0229542C> resourcesystem/asyncresourcedatarequest.h:21
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class IAsyncResourceDataRequestOwner {
	void IAsyncResourceDataRequestOwner(IAsyncResourceDataRequestOwner* , IAsyncResourceDataRequestOwner& );
	void IAsyncResourceDataRequestOwner(IAsyncResourceDataRequestOwner* , const IAsyncResourceDataRequestOwner& );
	void IAsyncResourceDataRequestOwner(IAsyncResourceDataRequestOwner* );
	void ~IAsyncResourceDataRequestOwner(IAsyncResourceDataRequestOwner* );
	int ()(void) * * _vptr.IAsyncResourceDataRequestOwner; /* 0 8 */
	/* resourcesystem/asyncresourcedatarequest.h:24 */
	virtual bool WantsAsyncProcessResourceData(const IAsyncResourceDataRequestOwner* );
	/* resourcesystem/asyncresourcedatarequest.h:27 */
	virtual void OnAsyncProcessResourceData(IAsyncResourceDataRequestOwner* , CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.h:30 */
	virtual void OnAsyncDataRequestComplete(IAsyncResourceDataRequestOwner* , CAsyncResourceDataRequest* );
	/* <2168c02> resourcesystem/asyncresourcedatarequest.h:24 */
	virtual bool WantsAsyncProcessResourceData(const class IAsyncResourceDataRequestOwner  *); /* linkage=_ZNK30IAsyncResourceDataRequestOwner29WantsAsyncProcessResourceDataEv */
	void IAsyncResourceDataRequestOwner(class IAsyncResourceDataRequestOwner *, class IAsyncResourceDataRequestOwner &); /* linkage=_ZN30IAsyncResourceDataRequestOwnerC4EOS_ */
	void IAsyncResourceDataRequestOwner(class IAsyncResourceDataRequestOwner *, const class IAsyncResourceDataRequestOwner  &); /* linkage=_ZN30IAsyncResourceDataRequestOwnerC4ERKS_ */
	void IAsyncResourceDataRequestOwner(class IAsyncResourceDataRequestOwner *); /* linkage=_ZN30IAsyncResourceDataRequestOwnerC4Ev */
	void ~IAsyncResourceDataRequestOwner(class IAsyncResourceDataRequestOwner *); /* linkage=_ZN30IAsyncResourceDataRequestOwnerD4Ev */
	virtual void OnAsyncProcessResourceData(class IAsyncResourceDataRequestOwner *, class CAsyncResourceDataRequest *); /* linkage=_ZN30IAsyncResourceDataRequestOwner26OnAsyncProcessResourceDataEP25CAsyncResourceDataRequest */
	virtual void OnAsyncDataRequestComplete(class IAsyncResourceDataRequestOwner *, class CAsyncResourceDataRequest *); /* linkage=_ZN30IAsyncResourceDataRequestOwner26OnAsyncDataRequestCompleteEP25CAsyncResourceDataRequest */
};

// <022DF28F> resourcesystem/asyncresourcedatarequest.h:24
void IAsyncResourceDataRequestOwner::WantsAsyncProcessResourceData()
{
} /* size: 7 */

// <02167C2C> resourcesystem/asyncresourcedatarequest.h:24
inline void IAsyncResourceDataRequestOwner::WantsAsyncProcessResourceData()
{
} /* size: 0 */

// <02158CDF> resourcesystem/asyncresourcedatarequest.h:35
// member functions: 45
// member variables: 18
// static member variables: 5
// vtable entries: 9
// class size: 168
class CAsyncResourceDataRequest : public IAsyncResourceDataRequest {
	/* resourcesystem/asyncresourcedatarequest.h:81 */
	struct InMemoryData_t {
		CPathBufferString m_fileName; /* 0 208 */
		void * m_pBuffer; /* 208 8 */
		bool m_bOwnsBuffer; /* 216 1 */
		size_t m_nBufferSize; /* 224 8 */
		void InMemoryData_t(InMemoryData_t* );
		void ~InMemoryData_t(InMemoryData_t* );
	};
	/* resourcesystem/asyncresourcedatarequest.cpp:28 */
	class CAsyncProcessDataThread : public CThread {
	public:
		/* class CThread <ancestor>; */ /* 0 0 */
		void CAsyncProcessDataThread(CAsyncProcessDataThread* , CAsyncProcessDataThread& );
		void CAsyncProcessDataThread(CAsyncProcessDataThread* , const CAsyncProcessDataThread& );
		void CAsyncProcessDataThread(CAsyncProcessDataThread* );
	private:
		/* resourcesystem/asyncresourcedatarequest.cpp:30 */
		virtual int Run(CAsyncProcessDataThread* );
		virtual void ~CAsyncProcessDataThread(CAsyncProcessDataThread* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IAsyncResourceDataRequest <ancestor>; */ /* 0 8 */
	void CAsyncResourceDataRequest(CAsyncResourceDataRequest* , const CAsyncResourceDataRequest& );
	/* resourcesystem/asyncresourcedatarequest.cpp:68 */
	void InitializeAsyncProcessThread(void);
	/* resourcesystem/asyncresourcedatarequest.cpp:75 */
	void ShutdownAsyncProcessThread(void);
	/* resourcesystem/asyncresourcedatarequest.cpp:292 */
	virtual AsyncRequestStatus_t GetRequestStatus(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:297 */
	virtual const char* GetFileName(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:308 */
	virtual void* GetResultBuffer(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:317 */
	virtual size_t GetResultBufferSize(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:326 */
	virtual void KeepResultBuffer(CAsyncResourceDataRequest* , IMemoryMappedFile** );
	/* resourcesystem/asyncresourcedatarequest.cpp:343 */
	virtual void AssignCallback(CAsyncResourceDataRequest* , Callback_t& );
	/* resourcesystem/asyncresourcedatarequest.cpp:349 */
	virtual void AssignAsyncCallback(CAsyncResourceDataRequest* , AsyncCallback_t& );
	/* resourcesystem/asyncresourcedatarequest.cpp:411 */
	virtual bool GetProfilingInfo(CAsyncResourceDataRequest* , uint64* , int);
	/* resourcesystem/asyncresourcedatarequest.cpp:356 */
	virtual void Cancel(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:91 */
	void CAsyncResourceDataRequest(CAsyncResourceDataRequest* , ResourceHandle_t, IAsyncResourceDataRequestOwner* , bool, ResourceManifestLoadPriority_t, bool, int64, size_t, const char* );
	/* resourcesystem/asyncresourcedatarequest.cpp:148 */
	void CAsyncResourceDataRequest(CAsyncResourceDataRequest* , ResourceHandle_t, IAsyncResourceDataRequestOwner* , void* , size_t, int64, size_t);
	/* resourcesystem/asyncresourcedatarequest.cpp:427 */
	void Submit(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:280 */
	void OnPriorityIncreased(CAsyncResourceDataRequest* , ResourceManifestLoadPriority_t);
	/* resourcesystem/asyncresourcedatarequest.cpp:264 */
	int AddRef(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:269 */
	int Release(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.h:66 */
	uint64 GetUserCallbackTimeUs(const CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.h:67 */
	uint64 GetAsyncUserCallbackTimeUs(const CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:462 */
	int ProcessCompletedRequests(int);
	/* resourcesystem/asyncresourcedatarequest.cpp:509 */
	int ProcessAsyncRequests(int);
	/* resourcesystem/asyncresourcedatarequest.cpp:564 */
	void AbortCompletedRequests(void);
	/* resourcesystem/asyncresourcedatarequest.cpp:575 */
	bool HasCompletedRequests(void);
private:
	/* resourcesystem/asyncresourcedatarequest.cpp:539 */
	void ProcessAsyncRequest(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:162 */
	void ~CAsyncResourceDataRequest(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:189 */
	void InitForFileRead(CAsyncResourceDataRequest* , ResourceHandle_t, bool, ResourceManifestLoadPriority_t, bool, const char* );
	/* resourcesystem/asyncresourcedatarequest.cpp:219 */
	void InitForInMemoryBuffer(CAsyncResourceDataRequest* , ResourceHandle_t, void* , size_t);
	/* resourcesystem/asyncresourcedatarequest.cpp:626 */
	void ServiceCallback(CAsyncResourceDataRequest* );
	/* resourcesystem/asyncresourcedatarequest.cpp:586 */
	void IO_HandleAsyncResourceDataRequest(CAsyncResourceDataRequest* , IAsyncReadRequest2* , AsyncRequestStatus_t);
	/* resourcesystem/asyncresourcedatarequest.h:94 */
	bool IsForInMemoryData(const CAsyncResourceDataRequest* );
	bool m_bWantsAsyncProcessData; /* 8 1 */
	bool m_bCanceled; /* 9 1 */
	bool m_bServicedCallback; /* 10 1 */
	bool m_bReceivedIoCallback; /* 11 1 */
	AsyncRequestStatus_t m_requestStatus; /* 12 4 */
	ResourceHandle_t m_hResource; /* 16 8 */
	Callback_t m_pUserCallback; /* 24 32 */
	AsyncCallback_t m_pAsyncUserCallback; /* 56 32 */
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > m_pAsyncCallbackResult; /* 88 8 */
	CCycleCount m_nUserCallbackTime; /* 96 8 */
	CCycleCount m_nAsyncUserCallbackTime; /* 104 8 */
	shared_ptr<IAsyncReadRequest2> m_pFileRequest; /* 112 16 */
	InMemoryData_t * m_pInMemoryData; /* 128 8 */
	IAsyncResourceDataRequestOwner * m_pOwner; /* 136 8 */
	int64 m_nFileOffset; /* 144 8 */
	size_t m_nLoadSizeBytes; /* 152 8 */
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 160 4 */
	static class CUtlVector<CAsyncResourceDataRequest*, CUtlMemory<CAsyncResourceDataRequest*, int> > sm_finishedRequests; /* 0 0 */
	static class CUtlVector<CAsyncResourceDataRequest*, CUtlMemory<CAsyncResourceDataRequest*, int> > sm_asyncProcessRequests; /* 0 0 */
	static class CThreadMutex sm_requestLock; /* 0 0 */
	static class CThreadFastSemaphore * sm_asyncProcessSema; /* 0 0 */
	static class CAsyncProcessDataThread * sm_asyncProcessThread; /* 0 0 */
	/* <2169282> resourcesystem/asyncresourcedatarequest.cpp:269 */
	int Release(class CAsyncResourceDataRequest *); /* linkage=_ZN25CAsyncResourceDataRequest7ReleaseEv */
	void OnPriorityIncreased(class CAsyncResourceDataRequest *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN25CAsyncResourceDataRequest19OnPriorityIncreasedE30ResourceManifestLoadPriority_t */
	void Submit(class CAsyncResourceDataRequest *); /* linkage=_ZN25CAsyncResourceDataRequest6SubmitEv */
	/* <21691f5> resourcesystem/asyncresourcedatarequest.cpp:264 */
	int AddRef(class CAsyncResourceDataRequest *); /* linkage=_ZN25CAsyncResourceDataRequest6AddRefEv */
	void CAsyncResourceDataRequest(class CAsyncResourceDataRequest *, ResourceHandle_t, class IAsyncResourceDataRequestOwner *, bool, enum ResourceManifestLoadPriority_t, bool, int64, size_t, const char  *); /* linkage=_ZN25CAsyncResourceDataRequestC4EPK21ResourceBindingBase_tP30IAsyncResourceDataRequestOwnerb30ResourceManifestLoadPriority_tbxmPKc */
	uint64 GetAsyncUserCallbackTimeUs(const class CAsyncResourceDataRequest  *); /* linkage=_ZNK25CAsyncResourceDataRequest26GetAsyncUserCallbackTimeUsEv */
	uint64 GetUserCallbackTimeUs(const class CAsyncResourceDataRequest  *); /* linkage=_ZNK25CAsyncResourceDataRequest21GetUserCallbackTimeUsEv */
} __attribute__((__aligned__(8)));

// <022D8DE0> resourcesystem/asyncresourcedatarequest.h:55
void CAsyncResourceDataRequest::CAsyncResourceDataRequest(ResourceHandle_t hResource, IAsyncResourceDataRequestOwner* pOwner, bool bAllowMemoryMappedFiles, ResourceManifestLoadPriority_t nPriority, bool bAddToQueueHead, int64 nFileOffset, size_t nLoadSizeBytes, const char* pFileNameOverride)
{
} /* size: 0 */

// <022DF276> resourcesystem/asyncresourcedatarequest.h:66
inline void CAsyncResourceDataRequest::GetUserCallbackTimeUs()
{
} /* size: 0 */

// <022DF25D> resourcesystem/asyncresourcedatarequest.h:67
inline void CAsyncResourceDataRequest::GetAsyncUserCallbackTimeUs()
{
} /* size: 0 */

// <02165B78> resourcesystem/asyncresourcedatarequest.h:81
void InMemoryData_t::~InMemoryData_t()
{
} /* size: 0 */

// <02165B5B> resourcesystem/asyncresourcedatarequest.h:81
inline void InMemoryData_t::~InMemoryData_t()
{
} /* size: 0 */

// <02163B95> resourcesystem/asyncresourcedatarequest.h:81
void InMemoryData_t::InMemoryData_t()
{
} /* size: 0 */

// <02163B78> resourcesystem/asyncresourcedatarequest.h:81
inline void InMemoryData_t::InMemoryData_t()
{
} /* size: 0 */

// <02167C08> resourcesystem/asyncresourcedatarequest.h:94
inline void CAsyncResourceDataRequest::IsForInMemoryData()
{
} /* size: 0 */

