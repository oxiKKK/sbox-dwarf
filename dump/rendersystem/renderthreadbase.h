
//
// rendersystem/renderthreadbase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 33
//	classes: 2
//	structs: 13
//

// <000DB29E> rendersystem/renderthreadbase.h:100
// member function: 1
// member variables: 3
// struct size: 4
struct CommandBase_t {
	/* rendersystem/renderthreadbase.h:102 */
	void CommandBase_t(CommandBase_t* , int, bool, int);
	uint16 m_nOpCode:15; /* 0: 0 2 */
	uint16 m_bSkipOnLostDevice:1; /* 0:15 2 */
	uint16 m_nCmdSizeInBytes; /* 2 2 */
};

// <00102F0E> rendersystem/renderthreadbase.h:102
void CommandBase_t::CommandBase_t(int nOpCode, bool bSkipOnLostDevice, int nCmdSizeInBytes)
{
} /* size: 0 */

// <00102ED1> rendersystem/renderthreadbase.h:102
inline void CommandBase_t::CommandBase_t(int nOpCode, bool bSkipOnLostDevice, int nCmdSizeInBytes)
{
} /* size: 0 */

// <000DB318> rendersystem/renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandPresent_t, 4, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* rendersystem/renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandPresent_t, 4, false>* );
};

// <000DB4D7> rendersystem/renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandJump_t, 1, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* rendersystem/renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandJump_t, 1, false>* );
};

// <000DB683> rendersystem/renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandFence_t, 6, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* rendersystem/renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandFence_t, 6, false>* );
};

// <000DBA33> rendersystem/renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandDynamicCBUpdate_t, 8, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* rendersystem/renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandDynamicCBUpdate_t, 8, false>* );
};

// <000DBDCF> rendersystem/renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandStartRenderDocCapture_t, 9, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* rendersystem/renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandStartRenderDocCapture_t, 9, false>* );
};

// <000DBE6C> rendersystem/renderthreadbase.h:115
// member function: 1
// member variable: 1
// struct size: 4
struct CommandHelper_t<CommandEndRenderDocCapture_t, 10, false> : public CommandBase_t {
public:
	/* struct CommandBase_t <ancestor>; */ /* 0 4 */
	/* rendersystem/renderthreadbase.h:117 */
	void CommandHelper_t(CommandHelper_t<CommandEndRenderDocCapture_t, 10, false>* );
};

// <000F9EC4> rendersystem/renderthreadbase.h:117
void CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9EAB> rendersystem/renderthreadbase.h:117
inline void CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9CC5> rendersystem/renderthreadbase.h:117
void CommandHelper_t<CommandDynamicCBUpdate_t, 8, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9CAC> rendersystem/renderthreadbase.h:117
inline void CommandHelper_t<CommandDynamicCBUpdate_t, 8, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9BDF> rendersystem/renderthreadbase.h:117
void CommandHelper_t<CommandPresent_t, 4, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9BC6> rendersystem/renderthreadbase.h:117
inline void CommandHelper_t<CommandPresent_t, 4, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9B64> rendersystem/renderthreadbase.h:117
void CommandHelper_t<CommandFence_t, 6, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9B4B> rendersystem/renderthreadbase.h:117
inline void CommandHelper_t<CommandFence_t, 6, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9A68> rendersystem/renderthreadbase.h:117
void CommandHelper_t<CommandStartRenderDocCapture_t, 9, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F9A4F> rendersystem/renderthreadbase.h:117
inline void CommandHelper_t<CommandStartRenderDocCapture_t, 9, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F99ED> rendersystem/renderthreadbase.h:117
void CommandHelper_t<CommandEndRenderDocCapture_t, 10, false>::CommandHelper_t()
{
} /* size: 0 */

// <000F99D4> rendersystem/renderthreadbase.h:117
inline void CommandHelper_t<CommandEndRenderDocCapture_t, 10, false>::CommandHelper_t()
{
} /* size: 0 */

// <000FCE3C> rendersystem/renderthreadbase.h:132
void CommandPresent_t::CommandPresent_t()
{
} /* size: 0 */

// <000FCE20> rendersystem/renderthreadbase.h:132
inline void CommandPresent_t::CommandPresent_t()
{
} /* size: 0 */

// <000DB372> rendersystem/renderthreadbase.h:132
// member function: 1
// member variables: 4
// struct size: 24
struct CommandPresent_t : public CommandHelper_t<CommandPresent_t, 4, false> {
public:
	/* struct CommandHelper_t<CommandPresent_t, 4, false> <ancestor>; */ /* 0 4 */
	uint32 m_nSubmittedFrameCount; /* 4 4 */
	int m_nPresentId; /* 8 4 */
	CPipelineFence * m_pPostPresentFence; /* 16 8 */
	void CommandPresent_t(CommandPresent_t* );
};

// <00102BA5> rendersystem/renderthreadbase.h:143
void CommandJump_t::CommandJump_t()
{
} /* size: 0 */

// <00102B89> rendersystem/renderthreadbase.h:143
inline void CommandJump_t::CommandJump_t()
{
} /* size: 0 */

// <000DB531> rendersystem/renderthreadbase.h:143
// member function: 1
// member variables: 2
// struct size: 16
struct CommandJump_t : public CommandHelper_t<CommandJump_t, 1, false> {
public:
	/* struct CommandHelper_t<CommandJump_t, 1, false> <ancestor>; */ /* 0 4 */
	CCommandBufferChunk * m_pChunk; /* 8 8 */
	void CommandJump_t(CommandJump_t* );
};

// <000FC993> rendersystem/renderthreadbase.h:187
void CommandFence_t::CommandFence_t()
{
} /* size: 0 */

// <000FC977> rendersystem/renderthreadbase.h:187
inline void CommandFence_t::CommandFence_t()
{
} /* size: 0 */

// <000DB6DD> rendersystem/renderthreadbase.h:187
// member function: 1
// member variables: 2
// struct size: 16
struct CommandFence_t : public CommandHelper_t<CommandFence_t, 6, false> {
public:
	/* struct CommandHelper_t<CommandFence_t, 6, false> <ancestor>; */ /* 0 4 */
	CPipelineFence * m_pFence; /* 8 8 */
	void CommandFence_t(CommandFence_t* );
};

// <000FD8FE> rendersystem/renderthreadbase.h:197
void CommandDynamicCBUpdate_t::CommandDynamicCBUpdate_t()
{
} /* size: 0 */

// <000FD8E2> rendersystem/renderthreadbase.h:197
inline void CommandDynamicCBUpdate_t::CommandDynamicCBUpdate_t()
{
} /* size: 0 */

// <000DBA8D> rendersystem/renderthreadbase.h:197
// member function: 1
// member variables: 2
// struct size: 16
struct CommandDynamicCBUpdate_t : public CommandHelper_t<CommandDynamicCBUpdate_t, 8, false> {
public:
	/* struct CommandHelper_t<CommandDynamicCBUpdate_t, 8, false> <ancestor>; */ /* 0 4 */
	ConstantBuffer_t * m_pBuffer; /* 8 8 */
	void CommandDynamicCBUpdate_t(CommandDynamicCBUpdate_t* );
};

// <000FB7DD> rendersystem/renderthreadbase.h:204
void CommandStartRenderDocCapture_t::CommandStartRenderDocCapture_t()
{
} /* size: 0 */

// <000FB7C1> rendersystem/renderthreadbase.h:204
inline void CommandStartRenderDocCapture_t::CommandStartRenderDocCapture_t()
{
} /* size: 0 */

// <000DBE29> rendersystem/renderthreadbase.h:204
// member function: 1
// member variables: 2
// struct size: 16
struct CommandStartRenderDocCapture_t : public CommandHelper_t<CommandStartRenderDocCapture_t, 9, false> {
public:
	/* struct CommandHelper_t<CommandStartRenderDocCapture_t, 9, false> <ancestor>; */ /* 0 4 */
	PlatWindow_t m_hWnd; /* 8 8 */
	void CommandStartRenderDocCapture_t(CommandStartRenderDocCapture_t* );
};

// <000FB381> rendersystem/renderthreadbase.h:209
void CommandEndRenderDocCapture_t::CommandEndRenderDocCapture_t()
{
} /* size: 0 */

// <000FB365> rendersystem/renderthreadbase.h:209
inline void CommandEndRenderDocCapture_t::CommandEndRenderDocCapture_t()
{
} /* size: 0 */

// <000DBEC6> rendersystem/renderthreadbase.h:209
// member function: 1
// member variables: 2
// struct size: 16
struct CommandEndRenderDocCapture_t : public CommandHelper_t<CommandEndRenderDocCapture_t, 10, false> {
public:
	/* struct CommandHelper_t<CommandEndRenderDocCapture_t, 10, false> <ancestor>; */ /* 0 4 */
	PlatWindow_t m_hWnd; /* 8 8 */
	void CommandEndRenderDocCapture_t(CommandEndRenderDocCapture_t* );
};

// <0022C1F1> rendersystem/renderthreadbase.h:240
// member functions: 18
// member variables: 4
// vtable entries: 2
// class size: 32
class CFrameSyncBase {
	void CFrameSyncBase(CFrameSyncBase* , CFrameSyncBase& );
	void CFrameSyncBase(CFrameSyncBase* , const CFrameSyncBase& );
	int ()(void) * * _vptr.CFrameSyncBase; /* 0 8 */
	/* rendersystem/renderthreadbase.cpp:115 */
	void CFrameSyncBase(CFrameSyncBase* );
	/* rendersystem/renderthreadbase.cpp:126 */
	void Init(CFrameSyncBase* , CRenderDeviceBase* );
	/* rendersystem/renderthreadbase.cpp:136 */
	void Shutdown(CFrameSyncBase* , CRenderThreadBase* );
	/* rendersystem/renderthreadbase.cpp:170 */
	void ForceHardwareSync(CFrameSyncBase* , CRenderThreadBase* );
	/* rendersystem/renderthreadbase.cpp:153 */
	void UpdateFrameSyncQuery(CFrameSyncBase* , CRenderThreadBase* , int, bool, float);
	/* rendersystem/renderthreadbase.h:250 */
	virtual void IssueQuery(CFrameSyncBase* , CRenderThreadBase* , RenderQueryHandle_t);
	/* rendersystem/renderthreadbase.h:251 */
	virtual void BlockForQuery(CFrameSyncBase* , CRenderThreadBase* , RenderQueryHandle_t, float);
private:
	RenderQueryHandle_t m_hFrameSyncQueryObject[2]; /* 8 16 */
	int m_nCurrentSyncQuery; /* 24 4 */
	bool m_bQueryIssued[2]; /* 28 2 */
	void CFrameSyncBase(class CFrameSyncBase *, class CFrameSyncBase &); /* linkage=_ZN14CFrameSyncBaseC4EOS_ */
	void CFrameSyncBase(class CFrameSyncBase *, const class CFrameSyncBase  &); /* linkage=_ZN14CFrameSyncBaseC4ERKS_ */
	void CFrameSyncBase(class CFrameSyncBase *); /* linkage=_ZN14CFrameSyncBaseC4Ev */
	void Init(class CFrameSyncBase *, class CRenderDeviceBase *); /* linkage=_ZN14CFrameSyncBase4InitEP17CRenderDeviceBase */
	void Shutdown(class CFrameSyncBase *, class CRenderThreadBase *); /* linkage=_ZN14CFrameSyncBase8ShutdownEP17CRenderThreadBase */
	void ForceHardwareSync(class CFrameSyncBase *, class CRenderThreadBase *); /* linkage=_ZN14CFrameSyncBase17ForceHardwareSyncEP17CRenderThreadBase */
	void UpdateFrameSyncQuery(class CFrameSyncBase *, class CRenderThreadBase *, int, bool, float); /* linkage=_ZN14CFrameSyncBase20UpdateFrameSyncQueryEP17CRenderThreadBaseibf */
	virtual void IssueQuery(class CFrameSyncBase *, class CRenderThreadBase *, RenderQueryHandle_t); /* linkage=_ZN14CFrameSyncBase10IssueQueryEP17CRenderThreadBaseP21RenderQueryHandle_t__ */
	virtual void BlockForQuery(class CFrameSyncBase *, class CRenderThreadBase *, RenderQueryHandle_t, float); /* linkage=_ZN14CFrameSyncBase13BlockForQueryEP17CRenderThreadBaseP21RenderQueryHandle_t__f */
};

// <0022BD5C> rendersystem/renderthreadbase.h:264
// member functions: 37
// member variables: 11
// vtable entries: 4
// class size: 1,104
class CRenderThreadBase {
	void CRenderThreadBase(CRenderThreadBase* , CRenderThreadBase& );
	void CRenderThreadBase(CRenderThreadBase* , const CRenderThreadBase& );
	int ()(void) * * _vptr.CRenderThreadBase; /* 0 8 */
	/* rendersystem/renderthreadbase.cpp:204 */
	void CRenderThreadBase(CRenderThreadBase* , CRenderDeviceBase* , RenderThreadMode_t);
	/* rendersystem/renderthreadbase.cpp:219 */
	void Wakeup(CRenderThreadBase* );
	/* rendersystem/renderthreadbase.cpp:229 */
	void StopThread(CRenderThreadBase* );
	/* rendersystem/renderthreadbase.cpp:246 */
	void Enqueue(CRenderThreadBase* , CCommandStream* );
	/* rendersystem/renderthreadbase.cpp:376 */
	void Run(CRenderThreadBase* );
	/* rendersystem/renderthreadbase.cpp:214 */
	RenderThreadMode_t GetThreadMode(const CRenderThreadBase* );
	/* rendersystem/renderthreadbase.cpp:263 */
	void CleanupOnPresent(CRenderThreadBase* );
	/* rendersystem/renderthreadbase.cpp:280 */
	void Dispatch(CRenderThreadBase* , CCommandStream* );
	/* rendersystem/renderthreadbase.h:325 */
	uint GetHighestFrameCompleted(const CRenderThreadBase* );
	/* rendersystem/renderthreadbase.h:330 */
	void QueueUpCommandsUntilPresent(CRenderThreadBase* , bool);
	/* rendersystem/renderthreadbase.h:285 */
	bool IsCurrentThreadTheRenderingThread(const CRenderThreadBase* );
	uint m_nHighestFrameCompleted; /* 8 4 */
	/* rendersystem/renderthreadbase.h:294 */
	virtual void WaitingForWork(CRenderThreadBase* );
	/* rendersystem/renderthreadbase.h:297 */
	virtual void OnThreadStart(CRenderThreadBase* );
	/* rendersystem/renderthreadbase.h:299 */
	virtual void OnThreadStop(CRenderThreadBase* );
protected:
	const class CRenderDeviceBase * m_pDevice; /* 16 8 */
	const enum RenderThreadMode_t m_nThreadMode; /* 24 4 */
	/* rendersystem/renderthreadbase.cpp:358 */
	virtual void SetBestAffinity(CRenderThreadBase* );
private:
	/* rendersystem/renderthreadbase.cpp:417 */
	bool SemaphoreWait(CRenderThreadBase* , int, bool);
	CTSQueue<CCommandStream*, false> m_WorkQueue __attribute__((__aligned__(16))); /* 32 64 */
	CUtlIntrusiveDListWithTailPtr<CCommandStream, CThreadNullMutex> m_PendingCommands; /* 96 24 */
	CUtlVectorFixedGrowable<CDependencyDescriptor*, 100> m_TrackedDependencyDescriptors __attribute__((__aligned__(8))); /* 120 832 */
	CThreadFastSemaphore m_ThreadSema __attribute__((__aligned__(8))); /* 952 136 */
	bool m_bThreadNeedsToExit; /* 1088 1 */
	bool m_bQueueUpCommandsUntilPresent; /* 1089 1 */
	ThreadId_t m_nRenderThreadID; /* 1096 8 */
	void CRenderThreadBase(class CRenderThreadBase *, class CRenderThreadBase &); /* linkage=_ZN17CRenderThreadBaseC4EOS_ */
	void CRenderThreadBase(class CRenderThreadBase *, const class CRenderThreadBase  &); /* linkage=_ZN17CRenderThreadBaseC4ERKS_ */
	void CRenderThreadBase(class CRenderThreadBase *, class CRenderDeviceBase *, enum RenderThreadMode_t); /* linkage=_ZN17CRenderThreadBaseC4EP17CRenderDeviceBase18RenderThreadMode_t */
	/* <23278c> rendersystem/renderthreadbase.cpp:219 */
	void Wakeup(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBase6WakeupEv */
	void StopThread(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBase10StopThreadEv */
	void Enqueue(class CRenderThreadBase *, class CCommandStream *); /* linkage=_ZN17CRenderThreadBase7EnqueueEP14CCommandStream */
	void Run(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBase3RunEv */
	/* <232763> rendersystem/renderthreadbase.cpp:214 */
	enum RenderThreadMode_t GetThreadMode(const class CRenderThreadBase  *); /* linkage=_ZNK17CRenderThreadBase13GetThreadModeEv */
	void CleanupOnPresent(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBase16CleanupOnPresentEv */
	void Dispatch(class CRenderThreadBase *, class CCommandStream *); /* linkage=_ZN17CRenderThreadBase8DispatchEP14CCommandStream */
	uint GetHighestFrameCompleted(const class CRenderThreadBase  *); /* linkage=_ZNK17CRenderThreadBase24GetHighestFrameCompletedEv */
	void QueueUpCommandsUntilPresent(class CRenderThreadBase *, bool); /* linkage=_ZN17CRenderThreadBase27QueueUpCommandsUntilPresentEb */
	bool IsCurrentThreadTheRenderingThread(const class CRenderThreadBase  *); /* linkage=_ZNK17CRenderThreadBase33IsCurrentThreadTheRenderingThreadEv */
	/* <232696> rendersystem/renderthreadbase.h:294 */
	virtual void WaitingForWork(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBase14WaitingForWorkEv */
	/* <2326bf> rendersystem/renderthreadbase.h:297 */
	virtual void OnThreadStart(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBase13OnThreadStartEv */
	/* <2326e8> rendersystem/renderthreadbase.h:299 */
	virtual void OnThreadStop(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBase12OnThreadStopEv */
	/* <23273a> rendersystem/renderthreadbase.cpp:358 */
	virtual void SetBestAffinity(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBase15SetBestAffinityEv */
	bool SemaphoreWait(class CRenderThreadBase *, int, bool); /* linkage=_ZN17CRenderThreadBase13SemaphoreWaitEib */
	void ~CRenderThreadBase(class CRenderThreadBase *); /* linkage=_ZN17CRenderThreadBaseD4Ev */
} __attribute__((__aligned__(16)));

// <00232696> rendersystem/renderthreadbase.h:294
void CRenderThreadBase::WaitingForWork()
{
} /* size: 5 */

// <00232037> rendersystem/renderthreadbase.h:294
inline void CRenderThreadBase::WaitingForWork()
{
} /* size: 0 */

// <002326BF> rendersystem/renderthreadbase.h:297
void CRenderThreadBase::OnThreadStart()
{
} /* size: 5 */

// <0023201E> rendersystem/renderthreadbase.h:297
inline void CRenderThreadBase::OnThreadStart()
{
} /* size: 0 */

// <002326E8> rendersystem/renderthreadbase.h:299
void CRenderThreadBase::OnThreadStop()
{
} /* size: 5 */

// <00232005> rendersystem/renderthreadbase.h:299
inline void CRenderThreadBase::OnThreadStop()
{
} /* size: 0 */

// <001AC056> rendersystem/renderthreadbase.h:325
inline void CRenderThreadBase::GetHighestFrameCompleted()
{
} /* size: 0 */

