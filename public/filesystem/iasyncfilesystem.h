
//
// public/filesystem/iasyncfilesystem.h
//
//	referenced by: libengine2.so
//				   libfilesystem_stdio.so
//
//	functions: 54
//	classes: 7
//

// <0004FDA6> ../public/filesystem/iasyncfilesystem.h:78
void IIOCompletionQueue::IIOCompletionQueue()
{
} /* size: 0 */

// <0004FD8A> ../public/filesystem/iasyncfilesystem.h:78
inline void IIOCompletionQueue::IIOCompletionQueue()
{
} /* size: 0 */

// <0003B7FA> ../public/filesystem/iasyncfilesystem.h:78
// member functions: 8
// member variable: 1
// vtable entry: 1
// class size: 8
class IIOCompletionQueue {
	void IIOCompletionQueue(IIOCompletionQueue* , const IIOCompletionQueue& );
	void IIOCompletionQueue(IIOCompletionQueue* );
	int ()(void) * * _vptr.IIOCompletionQueue; /* 0 8 */
	/* filesystem/asyncfilesystem2.cpp:28 */
	virtual void ~IIOCompletionQueue(IIOCompletionQueue* );
	/* ../public/filesystem/iasyncfilesystem.h:83 */
	virtual void ProcessResults(IIOCompletionQueue* , int);
	void IIOCompletionQueue(class IIOCompletionQueue *, const class IIOCompletionQueue  &); /* linkage=_ZN18IIOCompletionQueueC4ERKS_ */
	void IIOCompletionQueue(class IIOCompletionQueue *); /* linkage=_ZN18IIOCompletionQueueC4Ev */
	virtual void ~IIOCompletionQueue(class IIOCompletionQueue *); /* linkage=_ZN18IIOCompletionQueueD4Ev */
	virtual void ProcessResults(class IIOCompletionQueue *, int); /* linkage=_ZN18IIOCompletionQueue14ProcessResultsEi */
};

// <001A17DD> ../public/filesystem/iasyncfilesystem.h:89
// member functions: 29
// member variables: 3
// vtable entries: 10
// class size: 224
class IAsyncReadRequest2 {
	int ()(void) * * _vptr.IAsyncReadRequest2; /* 0 8 */
	/* ../public/filesystem/iasyncfilesystem.h:92 */
	virtual void ~IAsyncReadRequest2(IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:94 */
	const char* GetFileName(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:95 */
	const char* GetPathId(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:97 */
	virtual void* GetResultBuffer(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:98 */
	virtual size_t GetResultSize(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:101 */
	virtual void KeepResultBuffer(IAsyncReadRequest2* , IMemoryMappedFile** );
	/* ../public/filesystem/iasyncfilesystem.h:105 */
	virtual void Submit(IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:107 */
	virtual bool IsComplete(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:109 */
	virtual void Cancel(IAsyncReadRequest2* , bool);
	/* ../public/filesystem/iasyncfilesystem.h:110 */
	virtual bool WasCanceled(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:112 */
	virtual AsyncRequestPriority_t GetPriority(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:113 */
	virtual bool SetPriority(IAsyncReadRequest2* , AsyncRequestPriority_t);
	/* ../public/filesystem/iasyncfilesystem.h:118 */
	virtual bool GetProfilingInfo(IAsyncReadRequest2* , uint64* , int);
protected:
	/* ../public/filesystem/iasyncfilesystem.h:121 */
	void IAsyncReadRequest2(IAsyncReadRequest2* , const char* , const char* );
	const CPathBufferString m_fileName; /* 8 208 */
	const const char * m_szPathID; /* 216 8 */
	void IAsyncReadRequest2(class IAsyncReadRequest2 *, const class IAsyncReadRequest2  &); /* linkage=_ZN18IAsyncReadRequest2C4ERKS_ */
	virtual void ~IAsyncReadRequest2(class IAsyncReadRequest2 *); /* linkage=_ZN18IAsyncReadRequest2D4Ev */
	const char  * GetFileName(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest211GetFileNameEv */
	const char  * GetPathId(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest29GetPathIdEv */
	virtual void * GetResultBuffer(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest215GetResultBufferEv */
	virtual size_t GetResultSize(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest213GetResultSizeEv */
	virtual void KeepResultBuffer(class IAsyncReadRequest2 *, class IMemoryMappedFile * *); /* linkage=_ZN18IAsyncReadRequest216KeepResultBufferEPP17IMemoryMappedFile */
	virtual void Submit(class IAsyncReadRequest2 *); /* linkage=_ZN18IAsyncReadRequest26SubmitEv */
	virtual bool IsComplete(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest210IsCompleteEv */
	virtual void Cancel(class IAsyncReadRequest2 *, bool); /* linkage=_ZN18IAsyncReadRequest26CancelEb */
	virtual bool WasCanceled(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest211WasCanceledEv */
	virtual enum AsyncRequestPriority_t GetPriority(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest211GetPriorityEv */
	virtual bool SetPriority(class IAsyncReadRequest2 *, enum AsyncRequestPriority_t); /* linkage=_ZN18IAsyncReadRequest211SetPriorityE22AsyncRequestPriority_t */
	virtual bool GetProfilingInfo(class IAsyncReadRequest2 *, uint64 *, int); /* linkage=_ZN18IAsyncReadRequest216GetProfilingInfoEPyi */
	void IAsyncReadRequest2(class IAsyncReadRequest2 *, const char  *, const char  *); /* linkage=_ZN18IAsyncReadRequest2C4EPKcS1_ */
};

// <00037638> ../public/filesystem/iasyncfilesystem.h:89
// member functions: 30
// member variables: 3
// vtable entries: 10
// class size: 224
class IAsyncReadRequest2 {
	void IAsyncReadRequest2(IAsyncReadRequest2* , const IAsyncReadRequest2& );
	int ()(void) * * _vptr.IAsyncReadRequest2; /* 0 8 */
	/* filesystem/asyncfilesystem2.cpp:36 */
	virtual void ~IAsyncReadRequest2(IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:94 */
	const char* GetFileName(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:95 */
	const char* GetPathId(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:97 */
	virtual void* GetResultBuffer(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:98 */
	virtual size_t GetResultSize(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:101 */
	virtual void KeepResultBuffer(IAsyncReadRequest2* , IMemoryMappedFile** );
	/* ../public/filesystem/iasyncfilesystem.h:105 */
	virtual void Submit(IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:107 */
	virtual bool IsComplete(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:109 */
	virtual void Cancel(IAsyncReadRequest2* , bool);
	/* ../public/filesystem/iasyncfilesystem.h:110 */
	virtual bool WasCanceled(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:112 */
	virtual AsyncRequestPriority_t GetPriority(const IAsyncReadRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:113 */
	virtual bool SetPriority(IAsyncReadRequest2* , AsyncRequestPriority_t);
	/* ../public/filesystem/iasyncfilesystem.h:118 */
	virtual bool GetProfilingInfo(IAsyncReadRequest2* , uint64* , int);
protected:
	/* ../public/filesystem/iasyncfilesystem.h:121 */
	void IAsyncReadRequest2(IAsyncReadRequest2* , const char* , const char* );
	const CPathBufferString m_fileName; /* 8 208 */
	const const char * m_szPathID; /* 216 8 */
	void IAsyncReadRequest2(class IAsyncReadRequest2 *, const class IAsyncReadRequest2  &); /* linkage=_ZN18IAsyncReadRequest2C4ERKS_ */
	virtual void ~IAsyncReadRequest2(class IAsyncReadRequest2 *); /* linkage=_ZN18IAsyncReadRequest2D4Ev */
	const char  * GetFileName(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest211GetFileNameEv */
	const char  * GetPathId(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest29GetPathIdEv */
	virtual void * GetResultBuffer(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest215GetResultBufferEv */
	virtual size_t GetResultSize(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest213GetResultSizeEv */
	virtual void KeepResultBuffer(class IAsyncReadRequest2 *, class IMemoryMappedFile * *); /* linkage=_ZN18IAsyncReadRequest216KeepResultBufferEPP17IMemoryMappedFile */
	virtual void Submit(class IAsyncReadRequest2 *); /* linkage=_ZN18IAsyncReadRequest26SubmitEv */
	virtual bool IsComplete(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest210IsCompleteEv */
	virtual void Cancel(class IAsyncReadRequest2 *, bool); /* linkage=_ZN18IAsyncReadRequest26CancelEb */
	virtual bool WasCanceled(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest211WasCanceledEv */
	virtual enum AsyncRequestPriority_t GetPriority(const class IAsyncReadRequest2  *); /* linkage=_ZNK18IAsyncReadRequest211GetPriorityEv */
	virtual bool SetPriority(class IAsyncReadRequest2 *, enum AsyncRequestPriority_t); /* linkage=_ZN18IAsyncReadRequest211SetPriorityE22AsyncRequestPriority_t */
	virtual bool GetProfilingInfo(class IAsyncReadRequest2 *, uint64 *, int); /* linkage=_ZN18IAsyncReadRequest216GetProfilingInfoEPyi */
	void IAsyncReadRequest2(class IAsyncReadRequest2 *, const char  *, const char  *); /* linkage=_ZN18IAsyncReadRequest2C4EPKcS1_ */
};

// <024E6F35> ../public/filesystem/iasyncfilesystem.h:94
inline void IAsyncReadRequest2::GetFileName()
{
} /* size: 0 */

// <00063156> ../public/filesystem/iasyncfilesystem.h:95
inline void IAsyncReadRequest2::GetPathId()
{
} /* size: 0 */

// <00063135> ../public/filesystem/iasyncfilesystem.h:121
void IAsyncReadRequest2::IAsyncReadRequest2(const char* szFileName, const char* szPathID)
{
} /* size: 0 */

// <00063104> ../public/filesystem/iasyncfilesystem.h:121
inline void IAsyncReadRequest2::IAsyncReadRequest2(const char* szFileName, const char* szPathID)
{
} /* size: 0 */

// <00426509> ../public/filesystem/iasyncfilesystem.h:135
// member functions: 21
// member variables: 3
// vtable entries: 6
// class size: 224
class IAsyncWriteRequest2 {
	int ()(void) * * _vptr.IAsyncWriteRequest2; /* 0 8 */
	/* ../public/filesystem/iasyncfilesystem.h:138 */
	virtual void ~IAsyncWriteRequest2(IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:140 */
	const char* GetFileName(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:141 */
	const char* GetPathId(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:145 */
	virtual void Submit(IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:147 */
	virtual bool IsComplete(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:150 */
	virtual AsyncRequestStatus_t GetStatus(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:152 */
	virtual AsyncRequestPriority_t GetPriority(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:153 */
	virtual bool SetPriority(IAsyncWriteRequest2* , AsyncRequestPriority_t);
	/* ../public/filesystem/iasyncfilesystem.h:158 */
	virtual bool GetProfilingInfo(IAsyncWriteRequest2* , uint64* , int);
protected:
	/* ../public/filesystem/iasyncfilesystem.h:161 */
	void IAsyncWriteRequest2(IAsyncWriteRequest2* , const char* , const char* );
	const CPathBufferString m_fileName; /* 8 208 */
	const const char * m_szPathID; /* 216 8 */
	void IAsyncWriteRequest2(class IAsyncWriteRequest2 *, const class IAsyncWriteRequest2  &); /* linkage=_ZN19IAsyncWriteRequest2C4ERKS_ */
	virtual void ~IAsyncWriteRequest2(class IAsyncWriteRequest2 *); /* linkage=_ZN19IAsyncWriteRequest2D4Ev */
	const char  * GetFileName(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest211GetFileNameEv */
	const char  * GetPathId(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest29GetPathIdEv */
	virtual void Submit(class IAsyncWriteRequest2 *); /* linkage=_ZN19IAsyncWriteRequest26SubmitEv */
	virtual bool IsComplete(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest210IsCompleteEv */
	virtual enum AsyncRequestStatus_t GetStatus(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest29GetStatusEv */
	virtual enum AsyncRequestPriority_t GetPriority(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest211GetPriorityEv */
	virtual bool SetPriority(class IAsyncWriteRequest2 *, enum AsyncRequestPriority_t); /* linkage=_ZN19IAsyncWriteRequest211SetPriorityE22AsyncRequestPriority_t */
	virtual bool GetProfilingInfo(class IAsyncWriteRequest2 *, uint64 *, int); /* linkage=_ZN19IAsyncWriteRequest216GetProfilingInfoEPyi */
	void IAsyncWriteRequest2(class IAsyncWriteRequest2 *, const char  *, const char  *); /* linkage=_ZN19IAsyncWriteRequest2C4EPKcS1_ */
};

// <0003792D> ../public/filesystem/iasyncfilesystem.h:135
// member functions: 22
// member variables: 3
// vtable entries: 6
// class size: 224
class IAsyncWriteRequest2 {
	void IAsyncWriteRequest2(IAsyncWriteRequest2* , const IAsyncWriteRequest2& );
	int ()(void) * * _vptr.IAsyncWriteRequest2; /* 0 8 */
	/* filesystem/asyncfilesystem2.cpp:32 */
	virtual void ~IAsyncWriteRequest2(IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:140 */
	const char* GetFileName(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:141 */
	const char* GetPathId(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:145 */
	virtual void Submit(IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:147 */
	virtual bool IsComplete(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:150 */
	virtual AsyncRequestStatus_t GetStatus(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:152 */
	virtual AsyncRequestPriority_t GetPriority(const IAsyncWriteRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:153 */
	virtual bool SetPriority(IAsyncWriteRequest2* , AsyncRequestPriority_t);
	/* ../public/filesystem/iasyncfilesystem.h:158 */
	virtual bool GetProfilingInfo(IAsyncWriteRequest2* , uint64* , int);
protected:
	/* ../public/filesystem/iasyncfilesystem.h:161 */
	void IAsyncWriteRequest2(IAsyncWriteRequest2* , const char* , const char* );
	const CPathBufferString m_fileName; /* 8 208 */
	const const char * m_szPathID; /* 216 8 */
	void IAsyncWriteRequest2(class IAsyncWriteRequest2 *, const class IAsyncWriteRequest2  &); /* linkage=_ZN19IAsyncWriteRequest2C4ERKS_ */
	virtual void ~IAsyncWriteRequest2(class IAsyncWriteRequest2 *); /* linkage=_ZN19IAsyncWriteRequest2D4Ev */
	const char  * GetFileName(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest211GetFileNameEv */
	const char  * GetPathId(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest29GetPathIdEv */
	virtual void Submit(class IAsyncWriteRequest2 *); /* linkage=_ZN19IAsyncWriteRequest26SubmitEv */
	virtual bool IsComplete(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest210IsCompleteEv */
	virtual enum AsyncRequestStatus_t GetStatus(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest29GetStatusEv */
	virtual enum AsyncRequestPriority_t GetPriority(const class IAsyncWriteRequest2  *); /* linkage=_ZNK19IAsyncWriteRequest211GetPriorityEv */
	virtual bool SetPriority(class IAsyncWriteRequest2 *, enum AsyncRequestPriority_t); /* linkage=_ZN19IAsyncWriteRequest211SetPriorityE22AsyncRequestPriority_t */
	virtual bool GetProfilingInfo(class IAsyncWriteRequest2 *, uint64 *, int); /* linkage=_ZN19IAsyncWriteRequest216GetProfilingInfoEPyi */
	void IAsyncWriteRequest2(class IAsyncWriteRequest2 *, const char  *, const char  *); /* linkage=_ZN19IAsyncWriteRequest2C4EPKcS1_ */
};

// <000630EB> ../public/filesystem/iasyncfilesystem.h:140
inline void IAsyncWriteRequest2::GetFileName()
{
} /* size: 0 */

// <000630D2> ../public/filesystem/iasyncfilesystem.h:141
inline void IAsyncWriteRequest2::GetPathId()
{
} /* size: 0 */

// <000630B1> ../public/filesystem/iasyncfilesystem.h:161
void IAsyncWriteRequest2::IAsyncWriteRequest2(const char* szFileName, const char* szPathID)
{
} /* size: 0 */

// <00063080> ../public/filesystem/iasyncfilesystem.h:161
inline void IAsyncWriteRequest2::IAsyncWriteRequest2(const char* szFileName, const char* szPathID)
{
} /* size: 0 */

// <0003B4C9> ../public/filesystem/iasyncfilesystem.h:174
// member functions: 18
// member variables: 4
// vtable entries: 3
// class size: 432
class IAsyncCopyRequest2 {
	void IAsyncCopyRequest2(IAsyncCopyRequest2* , const IAsyncCopyRequest2& );
	int ()(void) * * _vptr.IAsyncCopyRequest2; /* 0 8 */
	/* filesystem/asyncfilesystem2.cpp:40 */
	virtual void ~IAsyncCopyRequest2(IAsyncCopyRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:179 */
	const char* GetSrcFileName(const IAsyncCopyRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:180 */
	const char* GetDstFileName(const IAsyncCopyRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:181 */
	const char* GetPathId(const IAsyncCopyRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:183 */
	virtual void Submit(IAsyncCopyRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:185 */
	virtual bool IsComplete(const IAsyncCopyRequest2* );
	/* ../public/filesystem/iasyncfilesystem.h:188 */
	virtual AsyncRequestStatus_t GetStatus(const IAsyncCopyRequest2* );
protected:
	/* ../public/filesystem/iasyncfilesystem.h:191 */
	void IAsyncCopyRequest2(IAsyncCopyRequest2* , const char* , const char* , const char* );
	const CPathBufferString m_srcFileName; /* 8 208 */
	const CPathBufferString m_dstFileName; /* 216 208 */
	const const char * m_szPathID; /* 424 8 */
	void IAsyncCopyRequest2(class IAsyncCopyRequest2 *, const class IAsyncCopyRequest2  &); /* linkage=_ZN18IAsyncCopyRequest2C4ERKS_ */
	virtual void ~IAsyncCopyRequest2(class IAsyncCopyRequest2 *); /* linkage=_ZN18IAsyncCopyRequest2D4Ev */
	const char  * GetSrcFileName(const class IAsyncCopyRequest2  *); /* linkage=_ZNK18IAsyncCopyRequest214GetSrcFileNameEv */
	const char  * GetDstFileName(const class IAsyncCopyRequest2  *); /* linkage=_ZNK18IAsyncCopyRequest214GetDstFileNameEv */
	const char  * GetPathId(const class IAsyncCopyRequest2  *); /* linkage=_ZNK18IAsyncCopyRequest29GetPathIdEv */
	virtual void Submit(class IAsyncCopyRequest2 *); /* linkage=_ZN18IAsyncCopyRequest26SubmitEv */
	virtual bool IsComplete(const class IAsyncCopyRequest2  *); /* linkage=_ZNK18IAsyncCopyRequest210IsCompleteEv */
	virtual enum AsyncRequestStatus_t GetStatus(const class IAsyncCopyRequest2  *); /* linkage=_ZNK18IAsyncCopyRequest29GetStatusEv */
	void IAsyncCopyRequest2(class IAsyncCopyRequest2 *, const char  *, const char  *, const char  *); /* linkage=_ZN18IAsyncCopyRequest2C4EPKcS1_S1_ */
};

// <00063067> ../public/filesystem/iasyncfilesystem.h:179
inline void IAsyncCopyRequest2::GetSrcFileName()
{
} /* size: 0 */

// <0006304E> ../public/filesystem/iasyncfilesystem.h:180
inline void IAsyncCopyRequest2::GetDstFileName()
{
} /* size: 0 */

// <00063035> ../public/filesystem/iasyncfilesystem.h:181
inline void IAsyncCopyRequest2::GetPathId()
{
} /* size: 0 */

// <0006300F> ../public/filesystem/iasyncfilesystem.h:191
void IAsyncCopyRequest2::IAsyncCopyRequest2(const char* szSrcFileName, const char* szDstFileName, const char* szPathID)
{
} /* size: 0 */

// <00062FD2> ../public/filesystem/iasyncfilesystem.h:191
inline void IAsyncCopyRequest2::IAsyncCopyRequest2(const char* szSrcFileName, const char* szDstFileName, const char* szPathID)
{
} /* size: 0 */

// <0004C755> ../public/filesystem/iasyncfilesystem.h:204
void IAsyncFileSystem2::IAsyncFileSystem2()
{
} /* size: 0 */

// <0004C739> ../public/filesystem/iasyncfilesystem.h:204
inline void IAsyncFileSystem2::IAsyncFileSystem2()
{
} /* size: 0 */

// <0001D6C4> ../public/filesystem/iasyncfilesystem.h:204
// member functions: 67
// member variable: 1
// vtable entries: 14
// class size: 8
class IAsyncFileSystem2 : public IAppSystem {
	/* ../public/filesystem/iasyncfilesystem.h:256 */
	class IReadRequestBuilder {
		void IReadRequestBuilder(IReadRequestBuilder* , const IReadRequestBuilder& );
		void IReadRequestBuilder(IReadRequestBuilder* );
		int ()(void) * * _vptr.IReadRequestBuilder; /* 0 8 */
		/* ../public/filesystem/iasyncfilesystem.h:260 */
		virtual void ~IReadRequestBuilder(IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:259 */
		typedef struct IReadRequestBuilder This;
		/* ../public/filesystem/iasyncfilesystem.h:263 */
		This* SetReadBytes(IReadRequestBuilder* , size_t);
		/* ../public/filesystem/iasyncfilesystem.h:264 */
		size_t GetReadBytes(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:267 */
		This* SetReadOffset(IReadRequestBuilder* , int64);
		/* ../public/filesystem/iasyncfilesystem.h:268 */
		int64 GetReadOffset(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:272 */
		This* SetAllowMemoryMap(IReadRequestBuilder* , bool);
		/* ../public/filesystem/iasyncfilesystem.h:273 */
		bool GetAllowMemoryMap(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:277 */
		This* SetPreferMemoryMap(IReadRequestBuilder* , bool);
		/* ../public/filesystem/iasyncfilesystem.h:278 */
		bool GetPreferMemoryMap(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:281 */
		This* SetPriority(IReadRequestBuilder* , AsyncRequestPriority_t);
		/* ../public/filesystem/iasyncfilesystem.h:282 */
		AsyncRequestPriority_t GetPriority(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:285 */
		This* SetMoveToFrontOfQueue(IReadRequestBuilder* , bool);
		/* ../public/filesystem/iasyncfilesystem.h:286 */
		bool GetMoveToFrontOfQueue(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:289 */
		This* SetTextMode(IReadRequestBuilder* , bool);
		/* ../public/filesystem/iasyncfilesystem.h:290 */
		bool GetTextMode(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:292 */
		bool GetProfilingForRequest(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:295 */
		This* SetResultBuffer(IReadRequestBuilder* , void* , size_t);
		/* ../public/filesystem/iasyncfilesystem.h:296 */
		void* GetResultBuffer(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:297 */
		size_t GetResultBufferSize(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:300 */
		This* SetCompletionQueue(IReadRequestBuilder* , IIOCompletionQueue* );
		/* ../public/filesystem/iasyncfilesystem.h:301 */
		IIOCompletionQueue* GetCompletionQueue(const IReadRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:304 */
		This* SetCallback(IReadRequestBuilder* , ReadCallback_t& );
		/* ../public/filesystem/iasyncfilesystem.h:307 */
		virtual shared_ptr<IAsyncReadRequest2> Build(IReadRequestBuilder* );
	protected:
		bool m_bProfile; /* 8 1 */
		bool m_bAllowMemoryMap; /* 9 1 */
		bool m_bPreferMemoryMap; /* 10 1 */
		bool m_bTextMode; /* 11 1 */
		bool m_bFrontOfQueue; /* 12 1 */
		int64 m_nReadOffset; /* 16 8 */
		size_t m_nReadBytes; /* 24 8 */
		void * m_pResultBuffer; /* 32 8 */
		size_t m_nResultBufferSize; /* 40 8 */
		AsyncRequestPriority_t m_priority; /* 48 4 */
		IIOCompletionQueue * m_pCompletionQueue; /* 56 8 */
		ReadCallback_t m_callback; /* 64 32 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/filesystem/iasyncfilesystem.h:328 */
	class IWriteRequestBuilder {
		void IWriteRequestBuilder(IWriteRequestBuilder* , const IWriteRequestBuilder& );
		void IWriteRequestBuilder(IWriteRequestBuilder* );
		int ()(void) * * _vptr.IWriteRequestBuilder; /* 0 8 */
		/* ../public/filesystem/iasyncfilesystem.h:332 */
		virtual void ~IWriteRequestBuilder(IWriteRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:331 */
		typedef struct IWriteRequestBuilder This;
		/* ../public/filesystem/iasyncfilesystem.h:335 */
		This* SetPriority(IWriteRequestBuilder* , AsyncRequestPriority_t);
		/* ../public/filesystem/iasyncfilesystem.h:336 */
		AsyncRequestPriority_t GetPriority(const IWriteRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:339 */
		This* SetProfilingForRequest(IWriteRequestBuilder* , bool);
		/* ../public/filesystem/iasyncfilesystem.h:340 */
		bool GetProfilingForRequest(const IWriteRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:343 */
		This* SetTextMode(IWriteRequestBuilder* , bool);
		/* ../public/filesystem/iasyncfilesystem.h:344 */
		bool GetTextMode(const IWriteRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:347 */
		This* SetAppend(IWriteRequestBuilder* , bool);
		/* ../public/filesystem/iasyncfilesystem.h:348 */
		bool GetAppend(const IWriteRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:351 */
		This* SetFreeBufferCallback(IWriteRequestBuilder* , function<void(void const*)>& );
		/* ../public/filesystem/iasyncfilesystem.h:354 */
		This* SetCallback(IWriteRequestBuilder* , WriteCallback_t& );
		/* ../public/filesystem/iasyncfilesystem.h:357 */
		virtual shared_ptr<IAsyncWriteRequest2> Build(IWriteRequestBuilder* );
	protected:
		bool m_bProfile; /* 8 1 */
		bool m_bTextMode; /* 9 1 */
		bool m_bAppend; /* 10 1 */
		AsyncRequestPriority_t m_priority; /* 12 4 */
		WriteCallback_t m_callback; /* 16 32 */
		function<void(void const*)> m_freeBuffer; /* 48 32 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/filesystem/iasyncfilesystem.h:371 */
	class ICopyFileRequestBuilder {
		void ICopyFileRequestBuilder(ICopyFileRequestBuilder* , const ICopyFileRequestBuilder& );
		void ICopyFileRequestBuilder(ICopyFileRequestBuilder* );
		int ()(void) * * _vptr.ICopyFileRequestBuilder; /* 0 8 */
		/* ../public/filesystem/iasyncfilesystem.h:375 */
		virtual void ~ICopyFileRequestBuilder(ICopyFileRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:374 */
		typedef struct ICopyFileRequestBuilder This;
		/* ../public/filesystem/iasyncfilesystem.h:378 */
		This* SetPriority(ICopyFileRequestBuilder* , AsyncRequestPriority_t);
		/* ../public/filesystem/iasyncfilesystem.h:379 */
		AsyncRequestPriority_t GetPriority(const ICopyFileRequestBuilder* );
		/* ../public/filesystem/iasyncfilesystem.h:382 */
		This* SetPrependData(ICopyFileRequestBuilder* , const uint8* , int);
		/* ../public/filesystem/iasyncfilesystem.h:385 */
		This* SetAppendData(ICopyFileRequestBuilder* , const uint8* , int);
		/* ../public/filesystem/iasyncfilesystem.h:387 */
		virtual shared_ptr<IAsyncCopyRequest2> Build(ICopyFileRequestBuilder* );
		AsyncRequestPriority_t m_priority; /* 8 4 */
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_prependData; /* 16 32 */
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_appendData; /* 48 32 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/filesystem/iasyncfilesystem.h:212 */
	typedef struct function<void(IAsyncWriteRequest2*, AsyncRequestStatus_t)> WriteCallback_t;
	/* ../public/filesystem/iasyncfilesystem.h:211 */
	typedef struct function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)> ReadCallback_t;
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IAsyncFileSystem2(IAsyncFileSystem2* , IAsyncFileSystem2& );
	void IAsyncFileSystem2(IAsyncFileSystem2* , const IAsyncFileSystem2& );
	void IAsyncFileSystem2(IAsyncFileSystem2* );
	void ~IAsyncFileSystem2(IAsyncFileSystem2* );
	/* ../public/filesystem/iasyncfilesystem.h:216 */
	virtual void SuspendAsyncIO(IAsyncFileSystem2* );
	/* ../public/filesystem/iasyncfilesystem.h:219 */
	virtual void ResumeAsyncIO(IAsyncFileSystem2* );
	/* ../public/filesystem/iasyncfilesystem.h:222 */
	virtual void FinishAsyncIO(IAsyncFileSystem2* );
	/* ../public/filesystem/iasyncfilesystem.h:225 */
	virtual void FinishAsyncWrites(IAsyncFileSystem2* );
	/* ../public/filesystem/iasyncfilesystem.h:228 */
	virtual void AbortAllAsyncIO(IAsyncFileSystem2* );
	/* ../public/filesystem/iasyncfilesystem.h:231 */
	virtual void BlockUntilComplete(IAsyncFileSystem2* , const shared_ptr<IAsyncReadRequest2>& );
	/* ../public/filesystem/iasyncfilesystem.h:232 */
	virtual void BlockUntilComplete(IAsyncFileSystem2* , const shared_ptr<IAsyncWriteRequest2>& );
	/* ../public/filesystem/iasyncfilesystem.h:235 */
	virtual unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> > NewReadRequest(IAsyncFileSystem2* , const char* , const char* );
	/* ../public/filesystem/iasyncfilesystem.h:238 */
	virtual unique_ptr<IAsyncFileSystem2::IWriteRequestBuilder, std::default_delete<IAsyncFileSystem2::IWriteRequestBuilder> > NewWriteRequest(IAsyncFileSystem2* , const char* , const char* , const void* , size_t);
	/* ../public/filesystem/iasyncfilesystem.h:241 */
	virtual unique_ptr<IAsyncFileSystem2::ICopyFileRequestBuilder, std::default_delete<IAsyncFileSystem2::ICopyFileRequestBuilder> > NewCopyRequest(IAsyncFileSystem2* , const char* , const char* , const char* );
	/* ../public/filesystem/iasyncfilesystem.h:244 */
	virtual unique_ptr<IIOCompletionQueue, std::default_delete<IIOCompletionQueue> > CreateCompletionQueue(IAsyncFileSystem2* );
	/* ../public/filesystem/iasyncfilesystem.h:247 */
	virtual void* AllocateBuffer(IAsyncFileSystem2* , size_t, const char* );
	/* ../public/filesystem/iasyncfilesystem.h:250 */
	virtual void ReleaseBuffer(IAsyncFileSystem2* , void* );
	/* ../public/filesystem/iasyncfilesystem.h:252 */
	virtual const char* GetAsyncRequestStatusString(IAsyncFileSystem2* , AsyncRequestStatus_t);
};

// <00062C81> ../public/filesystem/iasyncfilesystem.h:256
void IReadRequestBuilder::IReadRequestBuilder()
{
} /* size: 0 */

// <00062C64> ../public/filesystem/iasyncfilesystem.h:256
inline void IReadRequestBuilder::IReadRequestBuilder()
{
} /* size: 0 */

// <00062F87> ../public/filesystem/iasyncfilesystem.h:260
void IReadRequestBuilder::~IReadRequestBuilder()
{
} /* size: 0 */

// <00062F57> ../public/filesystem/iasyncfilesystem.h:260
inline void IReadRequestBuilder::~IReadRequestBuilder()
{
} /* size: 0 */

// <024E6EDA> ../public/filesystem/iasyncfilesystem.h:263
inline void IReadRequestBuilder::SetReadBytes(size_t nReadBytes)
{
} /* size: 0 */

// <00062F3E> ../public/filesystem/iasyncfilesystem.h:264
inline void IReadRequestBuilder::GetReadBytes()
{
} /* size: 0 */

// <024E6EB4> ../public/filesystem/iasyncfilesystem.h:267
inline void IReadRequestBuilder::SetReadOffset(int64 nReadOffset)
{
} /* size: 0 */

// <00062F25> ../public/filesystem/iasyncfilesystem.h:268
inline void IReadRequestBuilder::GetReadOffset()
{
} /* size: 0 */

// <024E6E8E> ../public/filesystem/iasyncfilesystem.h:272
inline void IReadRequestBuilder::SetAllowMemoryMap(bool bAllow)
{
} /* size: 0 */

// <00062F0C> ../public/filesystem/iasyncfilesystem.h:273
inline void IReadRequestBuilder::GetAllowMemoryMap()
{
} /* size: 0 */

// <024E6E68> ../public/filesystem/iasyncfilesystem.h:277
inline void IReadRequestBuilder::SetPreferMemoryMap(bool bPrefer)
{
} /* size: 0 */

// <00062EF3> ../public/filesystem/iasyncfilesystem.h:278
inline void IReadRequestBuilder::GetPreferMemoryMap()
{
} /* size: 0 */

// <02167F9F> ../public/filesystem/iasyncfilesystem.h:281
inline void IReadRequestBuilder::SetPriority(AsyncRequestPriority_t priority)
{
} /* size: 0 */

// <00062EDA> ../public/filesystem/iasyncfilesystem.h:282
inline void IReadRequestBuilder::GetPriority()
{
} /* size: 0 */

// <02167F79> ../public/filesystem/iasyncfilesystem.h:285
inline void IReadRequestBuilder::SetMoveToFrontOfQueue(bool bFrontOfQueue)
{
} /* size: 0 */

// <00062EC1> ../public/filesystem/iasyncfilesystem.h:286
inline void IReadRequestBuilder::GetMoveToFrontOfQueue()
{
} /* size: 0 */

// <00062EA8> ../public/filesystem/iasyncfilesystem.h:290
inline void IReadRequestBuilder::GetTextMode()
{
} /* size: 0 */

// <00062E8F> ../public/filesystem/iasyncfilesystem.h:292
inline void IReadRequestBuilder::GetProfilingForRequest()
{
} /* size: 0 */

// <024E6E35> ../public/filesystem/iasyncfilesystem.h:295
inline void IReadRequestBuilder::SetResultBuffer(void* pBuffer, size_t nBufferSize)
{
} /* size: 0 */

// <00062E71> ../public/filesystem/iasyncfilesystem.h:296
inline void* IReadRequestBuilder::GetResultBuffer()
{
} /* size: 0 */

// <00062E58> ../public/filesystem/iasyncfilesystem.h:297
inline void IReadRequestBuilder::GetResultBufferSize()
{
} /* size: 0 */

// <00062E3F> ../public/filesystem/iasyncfilesystem.h:301
inline void IReadRequestBuilder::GetCompletionQueue()
{
} /* size: 0 */

// <024E6E0F> ../public/filesystem/iasyncfilesystem.h:304
inline void IReadRequestBuilder::SetCallback(ReadCallback_t& callback)
{
} /* size: 0 */

// <00062B93> ../public/filesystem/iasyncfilesystem.h:328
void IWriteRequestBuilder::IWriteRequestBuilder()
{
} /* size: 0 */

// <00062B76> ../public/filesystem/iasyncfilesystem.h:328
inline void IWriteRequestBuilder::IWriteRequestBuilder()
{
} /* size: 0 */

// <00062DC0> ../public/filesystem/iasyncfilesystem.h:332
void IWriteRequestBuilder::~IWriteRequestBuilder()
{
} /* size: 0 */

// <00062D90> ../public/filesystem/iasyncfilesystem.h:332
inline void IWriteRequestBuilder::~IWriteRequestBuilder()
{
} /* size: 0 */

// <00062D77> ../public/filesystem/iasyncfilesystem.h:336
inline void IWriteRequestBuilder::GetPriority()
{
} /* size: 0 */

// <00062D5E> ../public/filesystem/iasyncfilesystem.h:340
inline void IWriteRequestBuilder::GetProfilingForRequest()
{
} /* size: 0 */

// <00062D45> ../public/filesystem/iasyncfilesystem.h:344
inline void IWriteRequestBuilder::GetTextMode()
{
} /* size: 0 */

// <00062D2C> ../public/filesystem/iasyncfilesystem.h:348
inline void IWriteRequestBuilder::GetAppend()
{
} /* size: 0 */

// <004D41DF> ../public/filesystem/iasyncfilesystem.h:351
inline void IWriteRequestBuilder::SetFreeBufferCallback(function<void(void const*)>& freeFunction)
{
} /* size: 0 */

// <00062A6A> ../public/filesystem/iasyncfilesystem.h:371
void ICopyFileRequestBuilder::ICopyFileRequestBuilder()
{
} /* size: 0 */

// <00062A4D> ../public/filesystem/iasyncfilesystem.h:371
inline void ICopyFileRequestBuilder::ICopyFileRequestBuilder()
{
} /* size: 0 */

// <00062CE1> ../public/filesystem/iasyncfilesystem.h:375
void ICopyFileRequestBuilder::~ICopyFileRequestBuilder()
{
} /* size: 0 */

// <00062CB1> ../public/filesystem/iasyncfilesystem.h:375
inline void ICopyFileRequestBuilder::~ICopyFileRequestBuilder()
{
} /* size: 0 */

// <00062C98> ../public/filesystem/iasyncfilesystem.h:379
inline void ICopyFileRequestBuilder::GetPriority()
{
} /* size: 0 */

