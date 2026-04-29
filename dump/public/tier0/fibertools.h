
//
// public/tier0/fibertools.h
//
//	referenced by: libtier0.so
//
//	functions: 42
//	classes: 15
//	struct: 1
//

// <0015F70A> ../public/tier0/fibertools.h:26
void CEventListNode::~CEventListNode()
{
} /* size: 0 */

// <0015F6EE> ../public/tier0/fibertools.h:26
inline void CEventListNode::~CEventListNode()
{
} /* size: 0 */

// <0001DE88> ../public/tier0/fibertools.h:26
// member functions: 7
// member variables: 2
// class size: 136
class CEventListNode {
	/* ../public/tier0/fibertools.h:29 */
	void CEventListNode(CEventListNode* );
	/* ../public/tier0/fibertools.h:34 */
	CEventListNode* AllocTempNode(void);
	/* ../public/tier0/fibertools.h:35 */
	void FreeTempNode(CEventListNode* );
	CEventListNode * m_pNext; /* 0 8 */
	CThreadManualEvent m_Event; /* 8 128 */
	void CEventListNode(class CEventListNode *); /* linkage=_ZN14CEventListNodeC4Ev */
	/* <16470f> tier0/fibertools.cpp:114 */
	class CEventListNode * AllocTempNode(void); /* linkage=_ZN14CEventListNode13AllocTempNodeEv */
	/* <164b34> tier0/fibertools.cpp:137 */
	void FreeTempNode(class CEventListNode *); /* linkage=_ZN14CEventListNode12FreeTempNodeEPS_ */
	void ~CEventListNode(class CEventListNode *); /* linkage=_ZN14CEventListNodeD4Ev */
};

// <0014CD33> ../public/tier0/fibertools.h:26
// member functions: 8
// member variables: 2
// class size: 136
class CEventListNode {
	/* ../public/tier0/fibertools.h:29 */
	void CEventListNode(CEventListNode* );
	/* ../public/tier0/fibertools.h:34 */
	CEventListNode* AllocTempNode(void);
	/* ../public/tier0/fibertools.h:35 */
	void FreeTempNode(CEventListNode* );
	CEventListNode * m_pNext; /* 0 8 */
	CThreadManualEvent m_Event; /* 8 128 */
	void ~CEventListNode(CEventListNode* );
	void CEventListNode(class CEventListNode *); /* linkage=_ZN14CEventListNodeC4Ev */
	/* <16470f> tier0/fibertools.cpp:114 */
	class CEventListNode * AllocTempNode(void); /* linkage=_ZN14CEventListNode13AllocTempNodeEv */
	/* <164b34> tier0/fibertools.cpp:137 */
	void FreeTempNode(class CEventListNode *); /* linkage=_ZN14CEventListNode12FreeTempNodeEPS_ */
	void ~CEventListNode(class CEventListNode *); /* linkage=_ZN14CEventListNodeD4Ev */
};

// <00163946> ../public/tier0/fibertools.h:29
void CEventListNode::CEventListNode()
{
} /* size: 0 */

// <0016392D> ../public/tier0/fibertools.h:29
inline void CEventListNode::CEventListNode()
{
} /* size: 0 */

// <0014CDD9> ../public/tier0/fibertools.h:42
// member functions: 16
// member variable: 1
// class size: 8
class CEventListStackNode {
	/* ../public/tier0/fibertools.h:45 */
	void CEventListStackNode(CEventListStackNode* );
	/* ../public/tier0/fibertools.h:51 */
	void ~CEventListStackNode(CEventListStackNode* );
	/* ../public/tier0/fibertools.h:56 */
	CEventListNode& GetRaw(CEventListStackNode* );
	/* ../public/tier0/fibertools.h:57 */
	const CEventListNode& GetRaw(const CEventListStackNode* );
	/* ../public/tier0/fibertools.h:59 */
	CEventListNode& operator CEventListNode&(CEventListStackNode* );
	/* ../public/tier0/fibertools.h:60 */
	CEventListNode* operator CEventListNode*(CEventListStackNode* );
	/* ../public/tier0/fibertools.h:61 */
	const CEventListNode& operator const CEventListNode&(const CEventListStackNode* );
	/* ../public/tier0/fibertools.h:62 */
	const CEventListNode* operator const CEventListNode*(const CEventListStackNode* );
private:
	CEventListNode * m_pTempNode; /* 0 8 */
	void CEventListStackNode(class CEventListStackNode *); /* linkage=_ZN19CEventListStackNodeC4Ev */
	void ~CEventListStackNode(class CEventListStackNode *); /* linkage=_ZN19CEventListStackNodeD4Ev */
	class CEventListNode & GetRaw(class CEventListStackNode *); /* linkage=_ZN19CEventListStackNode6GetRawEv */
	const class CEventListNode  & GetRaw(const class CEventListStackNode  *); /* linkage=_ZNK19CEventListStackNode6GetRawEv */
	class CEventListNode & operator CEventListNode&(class CEventListStackNode *); /* linkage=_ZN19CEventListStackNodecvR14CEventListNodeEv */
	class CEventListNode * operator CEventListNode*(class CEventListStackNode *); /* linkage=_ZN19CEventListStackNodecvP14CEventListNodeEv */
	const class CEventListNode  & operator const CEventListNode&(const class CEventListStackNode  *); /* linkage=_ZNK19CEventListStackNodecvRK14CEventListNodeEv */
	const class CEventListNode  * operator const CEventListNode*(const class CEventListStackNode  *); /* linkage=_ZNK19CEventListStackNodecvPK14CEventListNodeEv */
};

// <00163916> ../public/tier0/fibertools.h:45
void CEventListStackNode::CEventListStackNode()
{
} /* size: 0 */

// <001638FD> ../public/tier0/fibertools.h:45
inline void CEventListStackNode::CEventListStackNode()
{
} /* size: 0 */

// <001638E6> ../public/tier0/fibertools.h:51
void CEventListStackNode::~CEventListStackNode()
{
} /* size: 0 */

// <001638CD> ../public/tier0/fibertools.h:51
inline void CEventListStackNode::~CEventListStackNode()
{
} /* size: 0 */

// <001638B4> ../public/tier0/fibertools.h:56
inline void CEventListStackNode::GetRaw()
{
} /* size: 0 */

// <001637D8> ../public/tier0/fibertools.h:72
void CEventList::CEventList()
{
} /* size: 0 */

// <001637BC> ../public/tier0/fibertools.h:72
inline void CEventList::CEventList()
{
} /* size: 0 */

// <0001E323> ../public/tier0/fibertools.h:72
// member function: 1
// member variable: 1
// class size: 16
class CEventList : public CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> {
public:
	/* class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> <ancestor>; */ /* 0 16 */
	void CEventList(class CEventList *); /* linkage=_ZN10CEventListC4Ev */
} __attribute__((__aligned__(8)));

// <0001E33C> ../public/tier0/fibertools.h:78
// member function: 1
// member variables: 5
// struct size: 40
struct Tier0FiberLocals_t {
	/* ../public/tier0/fibertools.h:80 */
	void Tier0FiberLocals_t(Tier0FiberLocals_t* );
	CStackTop_Base * m_pStackTop; /* 0 8 */
	CCallStackMarkerBase * m_pDeferredCallStackMarkers; /* 8 8 */
	IStack_Annotation * m_pStackAnnotationTop; /* 16 8 */
	IStack_VM_Segment_Marker * m_pStackVMSegmentMarkerTop; /* 24 8 */
	CFiberThreadingRequirement * m_pFiberThreadingRequirement; /* 32 8 */
};

// <0016389D> ../public/tier0/fibertools.h:80
void Tier0FiberLocals_t::Tier0FiberLocals_t()
{
} /* size: 0 */

// <00163884> ../public/tier0/fibertools.h:80
inline void Tier0FiberLocals_t::Tier0FiberLocals_t()
{
} /* size: 0 */

// <0001E471> ../public/tier0/fibertools.h:121
// member functions: 80
// member variables: 17
// class size: 304
class CFiber {
	/* ../public/tier0/fibertools.h:129 */
	enum SizeBuckets_t {
		STACKSIZE_NONE = 0,
		STACKSIZE_2KB = 1,
		STACKSIZE_4KB = 2,
		STACKSIZE_8KB = 3,
		STACKSIZE_16KB = 4,
		STACKSIZE_32KB = 5,
		STACKSIZE_64KB = 6,
		STACKSIZE_128KB = 7,
	};
	/* ../public/tier0/fibertools.h:290 */
	struct _RunningInNewStack_t {
		CFiber * pThisFiber; /* 0 8 */
		void * pResumeVal; /* 8 8 */
	};
	/* ../public/tier0/fibertools.h:124 */
	void CFiber(CFiber* );
	/* ../public/tier0/fibertools.h:125 */
	void CFiber(CFiber* , void* , size_t, bool, size_t);
	/* ../public/tier0/fibertools.h:127 */
	void ~CFiber(CFiber* );
	/* ../public/tier0/fibertools.h:141 */
	CFiber* AllocPooledFiber(SizeBuckets_t, size_t);
	/* ../public/tier0/fibertools.h:142 */
	uint32 AddRef(CFiber* );
	/* ../public/tier0/fibertools.h:143 */
	uint32 Release(CFiber* );
	/* ../public/tier0/fibertools.h:154 */
	void InitStackContext(CFiber* , void* , size_t, bool, size_t);
	/* ../public/tier0/fibertools.h:157 */
	void* DetachFromStackContext(CFiber* );
	/* ../public/tier0/fibertools.h:160 */
	size_t EstimateBytesUsed(const CFiber* , size_t);
	/* ../public/tier0/fibertools.h:166 */
	void* SetFiberJob(CFiber* , void (*)(void* ), void* , size_t);
	/* ../public/tier0/fibertools.h:172 */
	void* SetFiberJob(CFiber* , void (*)(void* , void* ), void* , size_t);
	/* ../public/tier0/fibertools.h:191 */
	void* SetFiberJob(CFiber* , void (*)(void));
	/* ../public/tier0/fibertools.h:202 */
	void* GetFiberJobContext(const CFiber* );
	/* ../public/tier0/fibertools.h:204 */
	bool IsReadyToResume(CFiber* );
	/* ../public/tier0/fibertools.h:209 */
	bool ResumeJob(CFiber* , void* );
	/* ../public/tier0/fibertools.h:213 */
	void* FiberYield(CFiber* , bool (*)(void* ), void* );
	/* ../public/tier0/fibertools.h:222 */
	void* FiberYield(CFiber* );
	/* ../public/tier0/fibertools.h:224 */
	void* FiberYield(CFiber* , bool (*)(void));
	/* ../public/tier0/fibertools.h:235 */
	CFiber* GetCurrentFiber(void);
	/* ../public/tier0/fibertools.h:236 */
	CFiber* SetCurrentFiber(CFiber* );
	/* ../public/tier0/fibertools.h:238 */
	bool HasAJob(const CFiber* );
	/* ../public/tier0/fibertools.h:239 */
	bool IsYielded(const CFiber* );
	/* ../public/tier0/fibertools.h:242 */
	bool IsThreadFiber(const CFiber* );
	/* ../public/tier0/fibertools.h:243 */
	bool IsMemoryInFiberRange(const CFiber* , const void* );
	/* ../public/tier0/fibertools.h:245 */
	bool IsRunningInThreadMemory(void);
	/* ../public/tier0/fibertools.h:250 */
	intp RunInThreadMemory(intp (*)(void* ), void* );
	/* ../public/tier0/fibertools.h:273 */
	void WaitForJobCompletion(CFiber* , CEventListNode& );
	/* ../public/tier0/fibertools.h:275 */
	CFiber* GetPrevFiberInSameThread(const CFiber* );
	/* ../public/tier0/fibertools.h:276 */
	StackContext_StartData_t* GetStackContextStartData(const CFiber* );
	/* ../public/tier0/fibertools.h:278 */
	const MemoryRange_t& GetStackMemoryRange(const CFiber* );
	/* ../public/tier0/fibertools.h:280 */
	ThreadId_t GetJobOriginatingThreadId(const CFiber* );
protected:
	/* ../public/tier0/fibertools.h:283 */
	void ConstructThreadFiber(CFiber* , size_t);
	/* ../public/tier0/fibertools.h:285 */
	void SetThreadFiberMemoryRange(CFiber* , size_t);
	/* ../public/tier0/fibertools.h:287 */
	void ClearUnusedSpaceToFFEEFFEE(CFiber* , void* );
private:
	/* ../public/tier0/fibertools.h:295 */
	intp RunningInNewStack(_RunningInNewStack_t* );
	/* ../public/tier0/fibertools.h:296 */
	void* YieldJmp(CFiber* );
	/* ../public/tier0/fibertools.h:297 */
	void ReachedZeroReferences(CFiber* );
	/* ../public/tier0/fibertools.h:299 */
	void* InternalSetFiberJob(CFiber* , void (*)(void* ), void* , size_t, bool);
	volatile class CFiber * m_pNext; /* 0 8 */
	CEventListNode m_EventListNode; /* 8 136 */
protected:
	volatile class JmpBuf_AlternateStack_t * m_pJmpBuf_IN; /* 144 8 */
	volatile class JmpBuf_AlternateStack_t * m_pJmpBuf_OUT; /* 152 8 */
	StackContext_StartData_t * m_pStackContextStartData; /* 160 8 */
	volatile void ()(void *) * m_pCurrentJobFunc; /* 168 8 */
	volatile void * m_pCurrentJobContext; /* 176 8 */
	bool (*m_pResumeHint)(void* ); /* 184 8* /
	void * m_pResumeHintContext; /* 192 8 */
	CEventList m_NotifyOnComplete __attribute__((__aligned__(8))); /* 200 16 */
	MemoryRange_t m_StackMemoryRange __attribute__((__aligned__(1))); /* 216 16 */
	CInterlockedUInt m_nFlags __attribute__((__aligned__(4))); /* 232 4 */
	CInterlockedUInt m_nRefCount __attribute__((__aligned__(4))); /* 236 4 */
	CFiber * m_pPrevFiberInSameThread; /* 240 8 */
	ThreadId_t m_hJobsOriginatingThreadId; /* 248 8 */
	size_t m_nClearedMemoryInterval; /* 256 8 */
	Tier0FiberLocals_t m_Tier0FiberLocals; /* 264 40 */
	/* ../public/tier0/fibertools.h:262 */
	bool RunInThreadMemory<AssertMsg_ConditionFailed_State(CAssertionState*, LoggingChannelID_t*, AssertionType_t, AssertionFlags_t, char const*, __va_list_tag (&)[1])::<lambda()> >(class& );
	/* ../public/tier0/fibertools.h:262 */
	CAssertDisable* RunInThreadMemory<CreateAssertDisable(AssertIgnoreInfo_t*, char const*)::<lambda()> >(class& );
	void CFiber(class CFiber *); /* linkage=_ZN6CFiberC4Ev */
	void CFiber(class CFiber *, void *, size_t, bool, size_t); /* linkage=_ZN6CFiberC4EPvmbm */
	void ~CFiber(class CFiber *); /* linkage=_ZN6CFiberD4Ev */
	class CFiber * AllocPooledFiber(enum SizeBuckets_t, size_t); /* linkage=_ZN6CFiber16AllocPooledFiberENS_13SizeBuckets_tEm */
	uint32 AddRef(class CFiber *); /* linkage=_ZN6CFiber6AddRefEv */
	uint32 Release(class CFiber *); /* linkage=_ZN6CFiber7ReleaseEv */
	void InitStackContext(class CFiber *, void *, size_t, bool, size_t); /* linkage=_ZN6CFiber16InitStackContextEPvmbm */
	void * DetachFromStackContext(class CFiber *); /* linkage=_ZN6CFiber22DetachFromStackContextEv */
	size_t EstimateBytesUsed(const class CFiber  *, size_t); /* linkage=_ZNK6CFiber17EstimateBytesUsedEm */
	void * SetFiberJob(class CFiber *, void (*)(void *), void *, size_t); /* linkage=_ZN6CFiber11SetFiberJobEPFvPvES0_m */
	void * SetFiberJob(class CFiber *, void (*)(void *, void *), void *, size_t); /* linkage=_ZN6CFiber11SetFiberJobEPFvPvS0_ES0_m */
	void * SetFiberJob(class CFiber *, void (*)(void)); /* linkage=_ZN6CFiber11SetFiberJobEPFvvE */
	void * GetFiberJobContext(const class CFiber  *); /* linkage=_ZNK6CFiber18GetFiberJobContextEv */
	bool IsReadyToResume(class CFiber *); /* linkage=_ZN6CFiber15IsReadyToResumeEv */
	bool ResumeJob(class CFiber *, void *); /* linkage=_ZN6CFiber9ResumeJobEPv */
	/* <164ecc> tier0/fibertools.cpp:791 */
	void * FiberYield(class CFiber *, bool (*)(void *), void *); /* linkage=_ZN6CFiber10FiberYieldEPFbPvES0_ */
	void * FiberYield(class CFiber *); /* linkage=_ZN6CFiber10FiberYieldEv */
	void * FiberYield(class CFiber *, bool (*)(void)); /* linkage=_ZN6CFiber10FiberYieldEPFbvE */
	class CFiber * GetCurrentFiber(void); /* linkage=_ZN6CFiber15GetCurrentFiberEv */
	class CFiber * SetCurrentFiber(class CFiber *); /* linkage=_ZN6CFiber15SetCurrentFiberEPS_ */
	bool HasAJob(const class CFiber  *); /* linkage=_ZNK6CFiber7HasAJobEv */
	bool IsYielded(const class CFiber  *); /* linkage=_ZNK6CFiber9IsYieldedEv */
	bool IsThreadFiber(const class CFiber  *); /* linkage=_ZNK6CFiber13IsThreadFiberEv */
	bool IsMemoryInFiberRange(const class CFiber  *, const void  *); /* linkage=_ZNK6CFiber20IsMemoryInFiberRangeEPKv */
	bool IsRunningInThreadMemory(void); /* linkage=_ZN6CFiber23IsRunningInThreadMemoryEv */
	intp RunInThreadMemory(intp (*)(void *), void *); /* linkage=_ZN6CFiber17RunInThreadMemoryEPFxPvES0_ */
	void WaitForJobCompletion(class CFiber *, class CEventListNode &); /* linkage=_ZN6CFiber20WaitForJobCompletionER14CEventListNode */
	class CFiber * GetPrevFiberInSameThread(const class CFiber  *); /* linkage=_ZNK6CFiber24GetPrevFiberInSameThreadEv */
	class StackContext_StartData_t * GetStackContextStartData(const class CFiber  *); /* linkage=_ZNK6CFiber24GetStackContextStartDataEv */
	const class MemoryRange_t  & GetStackMemoryRange(const class CFiber  *); /* linkage=_ZNK6CFiber19GetStackMemoryRangeEv */
	ThreadId_t GetJobOriginatingThreadId(const class CFiber  *); /* linkage=_ZNK6CFiber25GetJobOriginatingThreadIdEv */
	void ConstructThreadFiber(class CFiber *, size_t); /* linkage=_ZN6CFiber20ConstructThreadFiberEm */
	void SetThreadFiberMemoryRange(class CFiber *, size_t); /* linkage=_ZN6CFiber25SetThreadFiberMemoryRangeEm */
	void ClearUnusedSpaceToFFEEFFEE(class CFiber *, void *); /* linkage=_ZN6CFiber26ClearUnusedSpaceToFFEEFFEEEPv */
	intp RunningInNewStack(class _RunningInNewStack_t *); /* linkage=_ZN6CFiber17RunningInNewStackEPNS_20_RunningInNewStack_tE */
	void * YieldJmp(class CFiber *); /* linkage=_ZN6CFiber8YieldJmpEv */
	void ReachedZeroReferences(class CFiber *); /* linkage=_ZN6CFiber21ReachedZeroReferencesEv */
	void * InternalSetFiberJob(class CFiber *, void (*)(void *), void *, size_t, bool); /* linkage=_ZN6CFiber19InternalSetFiberJobEPFvPvES0_mb */
	void * FiberYield<CThreadEvent*>(class CFiber *, bool (*)(class CThreadEvent *), class CThreadEvent *); /* linkage=_ZN6CFiber10FiberYieldIP12CThreadEventEEPvPFbT_ES4_ */
} __attribute__((__aligned__(8)));

// <0014D7EF> ../public/tier0/fibertools.h:121
// member functions: 79
// member variables: 17
// class size: 304
class CFiber {
	/* ../public/tier0/fibertools.h:129 */
	enum SizeBuckets_t {
		STACKSIZE_NONE = 0,
		STACKSIZE_2KB = 1,
		STACKSIZE_4KB = 2,
		STACKSIZE_8KB = 3,
		STACKSIZE_16KB = 4,
		STACKSIZE_32KB = 5,
		STACKSIZE_64KB = 6,
		STACKSIZE_128KB = 7,
	};
	/* ../public/tier0/fibertools.h:290 */
	struct _RunningInNewStack_t {
		CFiber * pThisFiber; /* 0 8 */
		void * pResumeVal; /* 8 8 */
	};
	/* ../public/tier0/fibertools.h:320 */
	enum Flags_t {
		IS_THREAD_FIBER = 1,
		HAS_MEMORY_SENTINEL = 2,
		IS_POOLED_FIBER = 4,
		IS_USING_POOL_MEMORY = 8,
		DELETE_MEMORY_ON_ZERO_REFCOUNT = 16,
		CURRENT_JOB_HAS_BEEN_IN_JOB_POOL_BEFORE = 32,
		JOB_LOCK = 64,
		JOB_ACCEPTS_INITIAL_RESUME = 128,
		IS_STACK_USAGE_FIBER = 1073741824,
	};
	/* ../public/tier0/fibertools.h:124 */
	void CFiber(CFiber* );
	/* ../public/tier0/fibertools.h:125 */
	void CFiber(CFiber* , void* , size_t, bool, size_t);
	/* ../public/tier0/fibertools.h:127 */
	void ~CFiber(CFiber* );
	/* ../public/tier0/fibertools.h:141 */
	CFiber* AllocPooledFiber(SizeBuckets_t, size_t);
	/* ../public/tier0/fibertools.h:142 */
	uint32 AddRef(CFiber* );
	/* ../public/tier0/fibertools.h:143 */
	uint32 Release(CFiber* );
	/* ../public/tier0/fibertools.h:154 */
	void InitStackContext(CFiber* , void* , size_t, bool, size_t);
	/* ../public/tier0/fibertools.h:157 */
	void* DetachFromStackContext(CFiber* );
	/* ../public/tier0/fibertools.h:160 */
	size_t EstimateBytesUsed(const CFiber* , size_t);
	/* ../public/tier0/fibertools.h:166 */
	void* SetFiberJob(CFiber* , void (*)(void* ), void* , size_t);
	/* ../public/tier0/fibertools.h:172 */
	void* SetFiberJob(CFiber* , void (*)(void* , void* ), void* , size_t);
	/* ../public/tier0/fibertools.h:191 */
	void* SetFiberJob(CFiber* , void (*)(void));
	/* ../public/tier0/fibertools.h:202 */
	void* GetFiberJobContext(const CFiber* );
	/* ../public/tier0/fibertools.h:204 */
	bool IsReadyToResume(CFiber* );
	/* ../public/tier0/fibertools.h:209 */
	bool ResumeJob(CFiber* , void* );
	/* ../public/tier0/fibertools.h:213 */
	void* FiberYield(CFiber* , bool (*)(void* ), void* );
	/* ../public/tier0/fibertools.h:222 */
	void* FiberYield(CFiber* );
	/* ../public/tier0/fibertools.h:224 */
	void* FiberYield(CFiber* , bool (*)(void));
	/* ../public/tier0/fibertools.h:235 */
	CFiber* GetCurrentFiber(void);
	/* ../public/tier0/fibertools.h:236 */
	CFiber* SetCurrentFiber(CFiber* );
	/* ../public/tier0/fibertools.h:238 */
	bool HasAJob(const CFiber* );
	/* ../public/tier0/fibertools.h:239 */
	bool IsYielded(const CFiber* );
	/* ../public/tier0/fibertools.h:242 */
	bool IsThreadFiber(const CFiber* );
	/* ../public/tier0/fibertools.h:243 */
	bool IsMemoryInFiberRange(const CFiber* , const void* );
	/* ../public/tier0/fibertools.h:245 */
	bool IsRunningInThreadMemory(void);
	/* ../public/tier0/fibertools.h:250 */
	intp RunInThreadMemory(intp (*)(void* ), void* );
	/* ../public/tier0/fibertools.h:273 */
	void WaitForJobCompletion(CFiber* , CEventListNode& );
	/* ../public/tier0/fibertools.h:275 */
	CFiber* GetPrevFiberInSameThread(const CFiber* );
	/* ../public/tier0/fibertools.h:276 */
	StackContext_StartData_t* GetStackContextStartData(const CFiber* );
	/* ../public/tier0/fibertools.h:278 */
	const MemoryRange_t& GetStackMemoryRange(const CFiber* );
	/* ../public/tier0/fibertools.h:280 */
	ThreadId_t GetJobOriginatingThreadId(const CFiber* );
protected:
	/* ../public/tier0/fibertools.h:283 */
	void ConstructThreadFiber(CFiber* , size_t);
	/* ../public/tier0/fibertools.h:285 */
	void SetThreadFiberMemoryRange(CFiber* , size_t);
	/* ../public/tier0/fibertools.h:287 */
	void ClearUnusedSpaceToFFEEFFEE(CFiber* , void* );
private:
	/* ../public/tier0/fibertools.h:295 */
	intp RunningInNewStack(_RunningInNewStack_t* );
	/* ../public/tier0/fibertools.h:296 */
	void* YieldJmp(CFiber* );
	/* ../public/tier0/fibertools.h:297 */
	void ReachedZeroReferences(CFiber* );
	/* ../public/tier0/fibertools.h:299 */
	void* InternalSetFiberJob(CFiber* , void (*)(void* ), void* , size_t, bool);
	volatile class CFiber * m_pNext; /* 0 8 */
	CEventListNode m_EventListNode; /* 8 136 */
protected:
	volatile class JmpBuf_AlternateStack_t * m_pJmpBuf_IN; /* 144 8 */
	volatile class JmpBuf_AlternateStack_t * m_pJmpBuf_OUT; /* 152 8 */
	StackContext_StartData_t * m_pStackContextStartData; /* 160 8 */
	volatile void ()(void *) * m_pCurrentJobFunc; /* 168 8 */
	volatile void * m_pCurrentJobContext; /* 176 8 */
	bool (*m_pResumeHint)(void* ); /* 184 8* /
	void * m_pResumeHintContext; /* 192 8 */
	CEventList m_NotifyOnComplete __attribute__((__aligned__(8))); /* 200 16 */
	MemoryRange_t m_StackMemoryRange __attribute__((__aligned__(1))); /* 216 16 */
	CInterlockedUInt m_nFlags __attribute__((__aligned__(4))); /* 232 4 */
	CInterlockedUInt m_nRefCount __attribute__((__aligned__(4))); /* 236 4 */
	CFiber * m_pPrevFiberInSameThread; /* 240 8 */
	ThreadId_t m_hJobsOriginatingThreadId; /* 248 8 */
	size_t m_nClearedMemoryInterval; /* 256 8 */
	Tier0FiberLocals_t m_Tier0FiberLocals; /* 264 40 */
	/* ../public/tier0/fibertools.h:216 */
	void* FiberYield<CThreadEvent*>(CFiber* , bool (*)(CThreadEvent* ), CThreadEvent* );
	void CFiber(class CFiber *); /* linkage=_ZN6CFiberC4Ev */
	void CFiber(class CFiber *, void *, size_t, bool, size_t); /* linkage=_ZN6CFiberC4EPvmbm */
	void ~CFiber(class CFiber *); /* linkage=_ZN6CFiberD4Ev */
	class CFiber * AllocPooledFiber(enum SizeBuckets_t, size_t); /* linkage=_ZN6CFiber16AllocPooledFiberENS_13SizeBuckets_tEm */
	uint32 AddRef(class CFiber *); /* linkage=_ZN6CFiber6AddRefEv */
	uint32 Release(class CFiber *); /* linkage=_ZN6CFiber7ReleaseEv */
	void InitStackContext(class CFiber *, void *, size_t, bool, size_t); /* linkage=_ZN6CFiber16InitStackContextEPvmbm */
	void * DetachFromStackContext(class CFiber *); /* linkage=_ZN6CFiber22DetachFromStackContextEv */
	size_t EstimateBytesUsed(const class CFiber  *, size_t); /* linkage=_ZNK6CFiber17EstimateBytesUsedEm */
	void * SetFiberJob(class CFiber *, void (*)(void *), void *, size_t); /* linkage=_ZN6CFiber11SetFiberJobEPFvPvES0_m */
	void * SetFiberJob(class CFiber *, void (*)(void *, void *), void *, size_t); /* linkage=_ZN6CFiber11SetFiberJobEPFvPvS0_ES0_m */
	void * SetFiberJob(class CFiber *, void (*)(void)); /* linkage=_ZN6CFiber11SetFiberJobEPFvvE */
	void * GetFiberJobContext(const class CFiber  *); /* linkage=_ZNK6CFiber18GetFiberJobContextEv */
	bool IsReadyToResume(class CFiber *); /* linkage=_ZN6CFiber15IsReadyToResumeEv */
	bool ResumeJob(class CFiber *, void *); /* linkage=_ZN6CFiber9ResumeJobEPv */
	/* <164ecc> tier0/fibertools.cpp:791 */
	void * FiberYield(class CFiber *, bool (*)(void *), void *); /* linkage=_ZN6CFiber10FiberYieldEPFbPvES0_ */
	void * FiberYield(class CFiber *); /* linkage=_ZN6CFiber10FiberYieldEv */
	void * FiberYield(class CFiber *, bool (*)(void)); /* linkage=_ZN6CFiber10FiberYieldEPFbvE */
	class CFiber * GetCurrentFiber(void); /* linkage=_ZN6CFiber15GetCurrentFiberEv */
	class CFiber * SetCurrentFiber(class CFiber *); /* linkage=_ZN6CFiber15SetCurrentFiberEPS_ */
	bool HasAJob(const class CFiber  *); /* linkage=_ZNK6CFiber7HasAJobEv */
	bool IsYielded(const class CFiber  *); /* linkage=_ZNK6CFiber9IsYieldedEv */
	bool IsThreadFiber(const class CFiber  *); /* linkage=_ZNK6CFiber13IsThreadFiberEv */
	bool IsMemoryInFiberRange(const class CFiber  *, const void  *); /* linkage=_ZNK6CFiber20IsMemoryInFiberRangeEPKv */
	bool IsRunningInThreadMemory(void); /* linkage=_ZN6CFiber23IsRunningInThreadMemoryEv */
	intp RunInThreadMemory(intp (*)(void *), void *); /* linkage=_ZN6CFiber17RunInThreadMemoryEPFxPvES0_ */
	void WaitForJobCompletion(class CFiber *, class CEventListNode &); /* linkage=_ZN6CFiber20WaitForJobCompletionER14CEventListNode */
	class CFiber * GetPrevFiberInSameThread(const class CFiber  *); /* linkage=_ZNK6CFiber24GetPrevFiberInSameThreadEv */
	class StackContext_StartData_t * GetStackContextStartData(const class CFiber  *); /* linkage=_ZNK6CFiber24GetStackContextStartDataEv */
	const class MemoryRange_t  & GetStackMemoryRange(const class CFiber  *); /* linkage=_ZNK6CFiber19GetStackMemoryRangeEv */
	ThreadId_t GetJobOriginatingThreadId(const class CFiber  *); /* linkage=_ZNK6CFiber25GetJobOriginatingThreadIdEv */
	void ConstructThreadFiber(class CFiber *, size_t); /* linkage=_ZN6CFiber20ConstructThreadFiberEm */
	void SetThreadFiberMemoryRange(class CFiber *, size_t); /* linkage=_ZN6CFiber25SetThreadFiberMemoryRangeEm */
	void ClearUnusedSpaceToFFEEFFEE(class CFiber *, void *); /* linkage=_ZN6CFiber26ClearUnusedSpaceToFFEEFFEEEPv */
	intp RunningInNewStack(class _RunningInNewStack_t *); /* linkage=_ZN6CFiber17RunningInNewStackEPNS_20_RunningInNewStack_tE */
	void * YieldJmp(class CFiber *); /* linkage=_ZN6CFiber8YieldJmpEv */
	void ReachedZeroReferences(class CFiber *); /* linkage=_ZN6CFiber21ReachedZeroReferencesEv */
	void * InternalSetFiberJob(class CFiber *, void (*)(void *), void *, size_t, bool); /* linkage=_ZN6CFiber19InternalSetFiberJobEPFvPvES0_mb */
	void * FiberYield<CThreadEvent*>(class CFiber *, bool (*)(class CThreadEvent *), class CThreadEvent *); /* linkage=_ZN6CFiber10FiberYieldIP12CThreadEventEEPvPFbT_ES4_ */
} __attribute__((__aligned__(8)));

// <001B65F1> ../public/tier0/fibertools.h:121
// member functions: 78
// member variables: 17
// class size: 304
class CFiber {
	/* ../public/tier0/fibertools.h:129 */
	enum SizeBuckets_t {
		STACKSIZE_NONE = 0,
		STACKSIZE_2KB = 1,
		STACKSIZE_4KB = 2,
		STACKSIZE_8KB = 3,
		STACKSIZE_16KB = 4,
		STACKSIZE_32KB = 5,
		STACKSIZE_64KB = 6,
		STACKSIZE_128KB = 7,
	};
	/* ../public/tier0/fibertools.h:290 */
	struct _RunningInNewStack_t {
		CFiber * pThisFiber; /* 0 8 */
		void * pResumeVal; /* 8 8 */
	};
	/* ../public/tier0/fibertools.h:124 */
	void CFiber(CFiber* );
	/* ../public/tier0/fibertools.h:125 */
	void CFiber(CFiber* , void* , size_t, bool, size_t);
	/* ../public/tier0/fibertools.h:127 */
	void ~CFiber(CFiber* );
	/* ../public/tier0/fibertools.h:141 */
	CFiber* AllocPooledFiber(SizeBuckets_t, size_t);
	/* ../public/tier0/fibertools.h:142 */
	uint32 AddRef(CFiber* );
	/* ../public/tier0/fibertools.h:143 */
	uint32 Release(CFiber* );
	/* ../public/tier0/fibertools.h:154 */
	void InitStackContext(CFiber* , void* , size_t, bool, size_t);
	/* ../public/tier0/fibertools.h:157 */
	void* DetachFromStackContext(CFiber* );
	/* ../public/tier0/fibertools.h:160 */
	size_t EstimateBytesUsed(const CFiber* , size_t);
	/* ../public/tier0/fibertools.h:166 */
	void* SetFiberJob(CFiber* , void (*)(void* ), void* , size_t);
	/* ../public/tier0/fibertools.h:172 */
	void* SetFiberJob(CFiber* , void (*)(void* , void* ), void* , size_t);
	/* ../public/tier0/fibertools.h:191 */
	void* SetFiberJob(CFiber* , void (*)(void));
	/* ../public/tier0/fibertools.h:202 */
	void* GetFiberJobContext(const CFiber* );
	/* ../public/tier0/fibertools.h:204 */
	bool IsReadyToResume(CFiber* );
	/* ../public/tier0/fibertools.h:209 */
	bool ResumeJob(CFiber* , void* );
	/* ../public/tier0/fibertools.h:213 */
	void* FiberYield(CFiber* , bool (*)(void* ), void* );
	/* ../public/tier0/fibertools.h:222 */
	void* FiberYield(CFiber* );
	/* ../public/tier0/fibertools.h:224 */
	void* FiberYield(CFiber* , bool (*)(void));
	/* ../public/tier0/fibertools.h:235 */
	CFiber* GetCurrentFiber(void);
	/* ../public/tier0/fibertools.h:236 */
	CFiber* SetCurrentFiber(CFiber* );
	/* ../public/tier0/fibertools.h:238 */
	bool HasAJob(const CFiber* );
	/* ../public/tier0/fibertools.h:239 */
	bool IsYielded(const CFiber* );
	/* ../public/tier0/fibertools.h:242 */
	bool IsThreadFiber(const CFiber* );
	/* ../public/tier0/fibertools.h:243 */
	bool IsMemoryInFiberRange(const CFiber* , const void* );
	/* ../public/tier0/fibertools.h:245 */
	bool IsRunningInThreadMemory(void);
	/* ../public/tier0/fibertools.h:250 */
	intp RunInThreadMemory(intp (*)(void* ), void* );
	/* ../public/tier0/fibertools.h:273 */
	void WaitForJobCompletion(CFiber* , CEventListNode& );
	/* ../public/tier0/fibertools.h:275 */
	CFiber* GetPrevFiberInSameThread(const CFiber* );
	/* ../public/tier0/fibertools.h:276 */
	StackContext_StartData_t* GetStackContextStartData(const CFiber* );
	/* ../public/tier0/fibertools.h:278 */
	const MemoryRange_t& GetStackMemoryRange(const CFiber* );
	/* ../public/tier0/fibertools.h:280 */
	ThreadId_t GetJobOriginatingThreadId(const CFiber* );
protected:
	/* ../public/tier0/fibertools.h:283 */
	void ConstructThreadFiber(CFiber* , size_t);
	/* ../public/tier0/fibertools.h:285 */
	void SetThreadFiberMemoryRange(CFiber* , size_t);
	/* ../public/tier0/fibertools.h:287 */
	void ClearUnusedSpaceToFFEEFFEE(CFiber* , void* );
private:
	/* ../public/tier0/fibertools.h:295 */
	intp RunningInNewStack(_RunningInNewStack_t* );
	/* ../public/tier0/fibertools.h:296 */
	void* YieldJmp(CFiber* );
	/* ../public/tier0/fibertools.h:297 */
	void ReachedZeroReferences(CFiber* );
	/* ../public/tier0/fibertools.h:299 */
	void* InternalSetFiberJob(CFiber* , void (*)(void* ), void* , size_t, bool);
	volatile class CFiber * m_pNext; /* 0 8 */
	CEventListNode m_EventListNode; /* 8 136 */
protected:
	volatile class JmpBuf_AlternateStack_t * m_pJmpBuf_IN; /* 144 8 */
	volatile class JmpBuf_AlternateStack_t * m_pJmpBuf_OUT; /* 152 8 */
	StackContext_StartData_t * m_pStackContextStartData; /* 160 8 */
	volatile void ()(void *) * m_pCurrentJobFunc; /* 168 8 */
	volatile void * m_pCurrentJobContext; /* 176 8 */
	bool (*m_pResumeHint)(void* ); /* 184 8* /
	void * m_pResumeHintContext; /* 192 8 */
	CEventList m_NotifyOnComplete __attribute__((__aligned__(8))); /* 200 16 */
	MemoryRange_t m_StackMemoryRange __attribute__((__aligned__(1))); /* 216 16 */
	CInterlockedUInt m_nFlags __attribute__((__aligned__(4))); /* 232 4 */
	CInterlockedUInt m_nRefCount __attribute__((__aligned__(4))); /* 236 4 */
	CFiber * m_pPrevFiberInSameThread; /* 240 8 */
	ThreadId_t m_hJobsOriginatingThreadId; /* 248 8 */
	size_t m_nClearedMemoryInterval; /* 256 8 */
	Tier0FiberLocals_t m_Tier0FiberLocals; /* 264 40 */
	void CFiber(class CFiber *); /* linkage=_ZN6CFiberC4Ev */
	void CFiber(class CFiber *, void *, size_t, bool, size_t); /* linkage=_ZN6CFiberC4EPvmbm */
	void ~CFiber(class CFiber *); /* linkage=_ZN6CFiberD4Ev */
	class CFiber * AllocPooledFiber(enum SizeBuckets_t, size_t); /* linkage=_ZN6CFiber16AllocPooledFiberENS_13SizeBuckets_tEm */
	uint32 AddRef(class CFiber *); /* linkage=_ZN6CFiber6AddRefEv */
	uint32 Release(class CFiber *); /* linkage=_ZN6CFiber7ReleaseEv */
	void InitStackContext(class CFiber *, void *, size_t, bool, size_t); /* linkage=_ZN6CFiber16InitStackContextEPvmbm */
	void * DetachFromStackContext(class CFiber *); /* linkage=_ZN6CFiber22DetachFromStackContextEv */
	size_t EstimateBytesUsed(const class CFiber  *, size_t); /* linkage=_ZNK6CFiber17EstimateBytesUsedEm */
	void * SetFiberJob(class CFiber *, void (*)(void *), void *, size_t); /* linkage=_ZN6CFiber11SetFiberJobEPFvPvES0_m */
	void * SetFiberJob(class CFiber *, void (*)(void *, void *), void *, size_t); /* linkage=_ZN6CFiber11SetFiberJobEPFvPvS0_ES0_m */
	void * SetFiberJob(class CFiber *, void (*)(void)); /* linkage=_ZN6CFiber11SetFiberJobEPFvvE */
	void * GetFiberJobContext(const class CFiber  *); /* linkage=_ZNK6CFiber18GetFiberJobContextEv */
	bool IsReadyToResume(class CFiber *); /* linkage=_ZN6CFiber15IsReadyToResumeEv */
	bool ResumeJob(class CFiber *, void *); /* linkage=_ZN6CFiber9ResumeJobEPv */
	/* <164ecc> tier0/fibertools.cpp:791 */
	void * FiberYield(class CFiber *, bool (*)(void *), void *); /* linkage=_ZN6CFiber10FiberYieldEPFbPvES0_ */
	void * FiberYield(class CFiber *); /* linkage=_ZN6CFiber10FiberYieldEv */
	void * FiberYield(class CFiber *, bool (*)(void)); /* linkage=_ZN6CFiber10FiberYieldEPFbvE */
	class CFiber * GetCurrentFiber(void); /* linkage=_ZN6CFiber15GetCurrentFiberEv */
	class CFiber * SetCurrentFiber(class CFiber *); /* linkage=_ZN6CFiber15SetCurrentFiberEPS_ */
	bool HasAJob(const class CFiber  *); /* linkage=_ZNK6CFiber7HasAJobEv */
	bool IsYielded(const class CFiber  *); /* linkage=_ZNK6CFiber9IsYieldedEv */
	bool IsThreadFiber(const class CFiber  *); /* linkage=_ZNK6CFiber13IsThreadFiberEv */
	bool IsMemoryInFiberRange(const class CFiber  *, const void  *); /* linkage=_ZNK6CFiber20IsMemoryInFiberRangeEPKv */
	bool IsRunningInThreadMemory(void); /* linkage=_ZN6CFiber23IsRunningInThreadMemoryEv */
	intp RunInThreadMemory(intp (*)(void *), void *); /* linkage=_ZN6CFiber17RunInThreadMemoryEPFxPvES0_ */
	void WaitForJobCompletion(class CFiber *, class CEventListNode &); /* linkage=_ZN6CFiber20WaitForJobCompletionER14CEventListNode */
	class CFiber * GetPrevFiberInSameThread(const class CFiber  *); /* linkage=_ZNK6CFiber24GetPrevFiberInSameThreadEv */
	class StackContext_StartData_t * GetStackContextStartData(const class CFiber  *); /* linkage=_ZNK6CFiber24GetStackContextStartDataEv */
	const class MemoryRange_t  & GetStackMemoryRange(const class CFiber  *); /* linkage=_ZNK6CFiber19GetStackMemoryRangeEv */
	ThreadId_t GetJobOriginatingThreadId(const class CFiber  *); /* linkage=_ZNK6CFiber25GetJobOriginatingThreadIdEv */
	void ConstructThreadFiber(class CFiber *, size_t); /* linkage=_ZN6CFiber20ConstructThreadFiberEm */
	void SetThreadFiberMemoryRange(class CFiber *, size_t); /* linkage=_ZN6CFiber25SetThreadFiberMemoryRangeEm */
	void ClearUnusedSpaceToFFEEFFEE(class CFiber *, void *); /* linkage=_ZN6CFiber26ClearUnusedSpaceToFFEEFFEEEPv */
	intp RunningInNewStack(class _RunningInNewStack_t *); /* linkage=_ZN6CFiber17RunningInNewStackEPNS_20_RunningInNewStack_tE */
	void * YieldJmp(class CFiber *); /* linkage=_ZN6CFiber8YieldJmpEv */
	void ReachedZeroReferences(class CFiber *); /* linkage=_ZN6CFiber21ReachedZeroReferencesEv */
	void * InternalSetFiberJob(class CFiber *, void (*)(void *), void *, size_t, bool); /* linkage=_ZN6CFiber19InternalSetFiberJobEPFvPvES0_mb */
	void * FiberYield<CThreadEvent*>(class CFiber *, bool (*)(class CThreadEvent *), class CThreadEvent *); /* linkage=_ZN6CFiber10FiberYieldIP12CThreadEventEEPvPFbT_ES4_ */
} __attribute__((__aligned__(8)));

// <0027F86A> ../public/tier0/fibertools.h:121
// member functions: 79
// member variables: 17
// class size: 304
class CFiber {
	/* ../public/tier0/fibertools.h:129 */
	enum SizeBuckets_t {
		STACKSIZE_NONE = 0,
		STACKSIZE_2KB = 1,
		STACKSIZE_4KB = 2,
		STACKSIZE_8KB = 3,
		STACKSIZE_16KB = 4,
		STACKSIZE_32KB = 5,
		STACKSIZE_64KB = 6,
		STACKSIZE_128KB = 7,
	};
	/* ../public/tier0/fibertools.h:290 */
	struct _RunningInNewStack_t {
		CFiber * pThisFiber; /* 0 8 */
		void * pResumeVal; /* 8 8 */
	};
	/* ../public/tier0/fibertools.h:124 */
	void CFiber(CFiber* );
	/* ../public/tier0/fibertools.h:125 */
	void CFiber(CFiber* , void* , size_t, bool, size_t);
	/* ../public/tier0/fibertools.h:127 */
	void ~CFiber(CFiber* );
	/* ../public/tier0/fibertools.h:141 */
	CFiber* AllocPooledFiber(SizeBuckets_t, size_t);
	/* ../public/tier0/fibertools.h:142 */
	uint32 AddRef(CFiber* );
	/* ../public/tier0/fibertools.h:143 */
	uint32 Release(CFiber* );
	/* ../public/tier0/fibertools.h:154 */
	void InitStackContext(CFiber* , void* , size_t, bool, size_t);
	/* ../public/tier0/fibertools.h:157 */
	void* DetachFromStackContext(CFiber* );
	/* ../public/tier0/fibertools.h:160 */
	size_t EstimateBytesUsed(const CFiber* , size_t);
	/* ../public/tier0/fibertools.h:166 */
	void* SetFiberJob(CFiber* , void (*)(void* ), void* , size_t);
	/* ../public/tier0/fibertools.h:172 */
	void* SetFiberJob(CFiber* , void (*)(void* , void* ), void* , size_t);
	/* ../public/tier0/fibertools.h:191 */
	void* SetFiberJob(CFiber* , void (*)(void));
	/* ../public/tier0/fibertools.h:202 */
	void* GetFiberJobContext(const CFiber* );
	/* ../public/tier0/fibertools.h:204 */
	bool IsReadyToResume(CFiber* );
	/* ../public/tier0/fibertools.h:209 */
	bool ResumeJob(CFiber* , void* );
	/* ../public/tier0/fibertools.h:213 */
	void* FiberYield(CFiber* , bool (*)(void* ), void* );
	/* ../public/tier0/fibertools.h:222 */
	void* FiberYield(CFiber* );
	/* ../public/tier0/fibertools.h:224 */
	void* FiberYield(CFiber* , bool (*)(void));
	/* ../public/tier0/fibertools.h:235 */
	CFiber* GetCurrentFiber(void);
	/* ../public/tier0/fibertools.h:236 */
	CFiber* SetCurrentFiber(CFiber* );
	/* ../public/tier0/fibertools.h:238 */
	bool HasAJob(const CFiber* );
	/* ../public/tier0/fibertools.h:239 */
	bool IsYielded(const CFiber* );
	/* ../public/tier0/fibertools.h:242 */
	bool IsThreadFiber(const CFiber* );
	/* ../public/tier0/fibertools.h:243 */
	bool IsMemoryInFiberRange(const CFiber* , const void* );
	/* ../public/tier0/fibertools.h:245 */
	bool IsRunningInThreadMemory(void);
	/* ../public/tier0/fibertools.h:250 */
	intp RunInThreadMemory(intp (*)(void* ), void* );
	/* ../public/tier0/fibertools.h:273 */
	void WaitForJobCompletion(CFiber* , CEventListNode& );
	/* ../public/tier0/fibertools.h:275 */
	CFiber* GetPrevFiberInSameThread(const CFiber* );
	/* ../public/tier0/fibertools.h:276 */
	StackContext_StartData_t* GetStackContextStartData(const CFiber* );
	/* ../public/tier0/fibertools.h:278 */
	const MemoryRange_t& GetStackMemoryRange(const CFiber* );
	/* ../public/tier0/fibertools.h:280 */
	ThreadId_t GetJobOriginatingThreadId(const CFiber* );
protected:
	/* ../public/tier0/fibertools.h:283 */
	void ConstructThreadFiber(CFiber* , size_t);
	/* ../public/tier0/fibertools.h:285 */
	void SetThreadFiberMemoryRange(CFiber* , size_t);
	/* ../public/tier0/fibertools.h:287 */
	void ClearUnusedSpaceToFFEEFFEE(CFiber* , void* );
private:
	/* ../public/tier0/fibertools.h:295 */
	intp RunningInNewStack(_RunningInNewStack_t* );
	/* ../public/tier0/fibertools.h:296 */
	void* YieldJmp(CFiber* );
	/* ../public/tier0/fibertools.h:297 */
	void ReachedZeroReferences(CFiber* );
	/* ../public/tier0/fibertools.h:299 */
	void* InternalSetFiberJob(CFiber* , void (*)(void* ), void* , size_t, bool);
	volatile class CFiber * m_pNext; /* 0 8 */
	CEventListNode m_EventListNode; /* 8 136 */
protected:
	volatile class JmpBuf_AlternateStack_t * m_pJmpBuf_IN; /* 144 8 */
	volatile class JmpBuf_AlternateStack_t * m_pJmpBuf_OUT; /* 152 8 */
	StackContext_StartData_t * m_pStackContextStartData; /* 160 8 */
	volatile void ()(void *) * m_pCurrentJobFunc; /* 168 8 */
	volatile void * m_pCurrentJobContext; /* 176 8 */
	bool (*m_pResumeHint)(void* ); /* 184 8* /
	void * m_pResumeHintContext; /* 192 8 */
	CEventList m_NotifyOnComplete __attribute__((__aligned__(8))); /* 200 16 */
	MemoryRange_t m_StackMemoryRange __attribute__((__aligned__(1))); /* 216 16 */
	CInterlockedUInt m_nFlags __attribute__((__aligned__(4))); /* 232 4 */
	CInterlockedUInt m_nRefCount __attribute__((__aligned__(4))); /* 236 4 */
	CFiber * m_pPrevFiberInSameThread; /* 240 8 */
	ThreadId_t m_hJobsOriginatingThreadId; /* 248 8 */
	size_t m_nClearedMemoryInterval; /* 256 8 */
	Tier0FiberLocals_t m_Tier0FiberLocals; /* 264 40 */
	/* ../public/tier0/fibertools.h:262 */
	LoggingResponse_t RunInThreadMemory<CLoggingSystem::LogDirect(LoggingChannelID_t, LoggingSeverity_t, const LeafCodeInfo_t*, const LoggingMetaData_t*, Color, char const*, __va_list_tag (*)[1])::<lambda()> >(class& );
	void CFiber(class CFiber *); /* linkage=_ZN6CFiberC4Ev */
	void CFiber(class CFiber *, void *, size_t, bool, size_t); /* linkage=_ZN6CFiberC4EPvmbm */
	void ~CFiber(class CFiber *); /* linkage=_ZN6CFiberD4Ev */
	class CFiber * AllocPooledFiber(enum SizeBuckets_t, size_t); /* linkage=_ZN6CFiber16AllocPooledFiberENS_13SizeBuckets_tEm */
	uint32 AddRef(class CFiber *); /* linkage=_ZN6CFiber6AddRefEv */
	uint32 Release(class CFiber *); /* linkage=_ZN6CFiber7ReleaseEv */
	void InitStackContext(class CFiber *, void *, size_t, bool, size_t); /* linkage=_ZN6CFiber16InitStackContextEPvmbm */
	void * DetachFromStackContext(class CFiber *); /* linkage=_ZN6CFiber22DetachFromStackContextEv */
	size_t EstimateBytesUsed(const class CFiber  *, size_t); /* linkage=_ZNK6CFiber17EstimateBytesUsedEm */
	void * SetFiberJob(class CFiber *, void (*)(void *), void *, size_t); /* linkage=_ZN6CFiber11SetFiberJobEPFvPvES0_m */
	void * SetFiberJob(class CFiber *, void (*)(void *, void *), void *, size_t); /* linkage=_ZN6CFiber11SetFiberJobEPFvPvS0_ES0_m */
	void * SetFiberJob(class CFiber *, void (*)(void)); /* linkage=_ZN6CFiber11SetFiberJobEPFvvE */
	void * GetFiberJobContext(const class CFiber  *); /* linkage=_ZNK6CFiber18GetFiberJobContextEv */
	bool IsReadyToResume(class CFiber *); /* linkage=_ZN6CFiber15IsReadyToResumeEv */
	bool ResumeJob(class CFiber *, void *); /* linkage=_ZN6CFiber9ResumeJobEPv */
	/* <164ecc> tier0/fibertools.cpp:791 */
	void * FiberYield(class CFiber *, bool (*)(void *), void *); /* linkage=_ZN6CFiber10FiberYieldEPFbPvES0_ */
	void * FiberYield(class CFiber *); /* linkage=_ZN6CFiber10FiberYieldEv */
	void * FiberYield(class CFiber *, bool (*)(void)); /* linkage=_ZN6CFiber10FiberYieldEPFbvE */
	class CFiber * GetCurrentFiber(void); /* linkage=_ZN6CFiber15GetCurrentFiberEv */
	class CFiber * SetCurrentFiber(class CFiber *); /* linkage=_ZN6CFiber15SetCurrentFiberEPS_ */
	bool HasAJob(const class CFiber  *); /* linkage=_ZNK6CFiber7HasAJobEv */
	bool IsYielded(const class CFiber  *); /* linkage=_ZNK6CFiber9IsYieldedEv */
	bool IsThreadFiber(const class CFiber  *); /* linkage=_ZNK6CFiber13IsThreadFiberEv */
	bool IsMemoryInFiberRange(const class CFiber  *, const void  *); /* linkage=_ZNK6CFiber20IsMemoryInFiberRangeEPKv */
	bool IsRunningInThreadMemory(void); /* linkage=_ZN6CFiber23IsRunningInThreadMemoryEv */
	intp RunInThreadMemory(intp (*)(void *), void *); /* linkage=_ZN6CFiber17RunInThreadMemoryEPFxPvES0_ */
	void WaitForJobCompletion(class CFiber *, class CEventListNode &); /* linkage=_ZN6CFiber20WaitForJobCompletionER14CEventListNode */
	class CFiber * GetPrevFiberInSameThread(const class CFiber  *); /* linkage=_ZNK6CFiber24GetPrevFiberInSameThreadEv */
	class StackContext_StartData_t * GetStackContextStartData(const class CFiber  *); /* linkage=_ZNK6CFiber24GetStackContextStartDataEv */
	const class MemoryRange_t  & GetStackMemoryRange(const class CFiber  *); /* linkage=_ZNK6CFiber19GetStackMemoryRangeEv */
	ThreadId_t GetJobOriginatingThreadId(const class CFiber  *); /* linkage=_ZNK6CFiber25GetJobOriginatingThreadIdEv */
	void ConstructThreadFiber(class CFiber *, size_t); /* linkage=_ZN6CFiber20ConstructThreadFiberEm */
	void SetThreadFiberMemoryRange(class CFiber *, size_t); /* linkage=_ZN6CFiber25SetThreadFiberMemoryRangeEm */
	void ClearUnusedSpaceToFFEEFFEE(class CFiber *, void *); /* linkage=_ZN6CFiber26ClearUnusedSpaceToFFEEFFEEEPv */
	intp RunningInNewStack(class _RunningInNewStack_t *); /* linkage=_ZN6CFiber17RunningInNewStackEPNS_20_RunningInNewStack_tE */
	void * YieldJmp(class CFiber *); /* linkage=_ZN6CFiber8YieldJmpEv */
	void ReachedZeroReferences(class CFiber *); /* linkage=_ZN6CFiber21ReachedZeroReferencesEv */
	void * InternalSetFiberJob(class CFiber *, void (*)(void *), void *, size_t, bool); /* linkage=_ZN6CFiber19InternalSetFiberJobEPFvPvES0_mb */
	void * FiberYield<CThreadEvent*>(class CFiber *, bool (*)(class CThreadEvent *), class CThreadEvent *); /* linkage=_ZN6CFiber10FiberYieldIP12CThreadEventEEPvPFbT_ES4_ */
} __attribute__((__aligned__(8)));

// <0016386B> ../public/tier0/fibertools.h:142
inline void CFiber::AddRef()
{
} /* size: 0 */

// <004E35C6> ../public/tier0/fibertools.h:143
// variable: 1
inline void CFiber::Release()
{
	uint32 nRetVal; // 146
} /* size: 0, variables: 1 */

// <0015894A> ../public/tier0/fibertools.h:216
inline void* CFiber::FiberYield<CThreadEvent*>(bool (*pFnResumeHint)(CThreadEvent *), CThreadEvent* pContext)
{
} /* size: 0 */

// <0016382D> ../public/tier0/fibertools.h:242
inline void CFiber::IsThreadFiber()
{
} /* size: 0 */

// <00163808> ../public/tier0/fibertools.h:243
inline void CFiber::IsMemoryInFiberRange(const void* pMem)
{
} /* size: 0 */

// <002836F8> ../public/tier0/fibertools.h:262
// variable: 1
inline void RunInThreadMemory<CLoggingSystem::LogDirect(LoggingChannelID_t, LoggingSeverity_t, const LeafCodeInfo_t*, const LoggingMetaData_t*, Color, char const*, __va_list_tag (*)[1])::<lambda()> >(class& runFunctor)
{
	Functor_Pointer_t pRunFunctor; // 269
} /* size: 0, variables: 1 */

// <0002699C> ../public/tier0/fibertools.h:262
// variable: 1
inline void RunInThreadMemory<CreateAssertDisable(AssertIgnoreInfo_t*, char const*)::<lambda()> >(class& runFunctor)
{
	Functor_Pointer_t pRunFunctor; // 269
} /* size: 0, variables: 1 */

// <00026809> ../public/tier0/fibertools.h:262
// variable: 1
inline void RunInThreadMemory<AssertMsg_ConditionFailed_State(CAssertionState*, LoggingChannelID_t*, AssertionType_t, AssertionFlags_t, char const*, __va_list_tag (&)[1])::<lambda()> >(class& runFunctor)
{
	Functor_Pointer_t pRunFunctor; // 269
} /* size: 0, variables: 1 */

// <00492AC7> ../public/tier0/fibertools.h:275
inline void CFiber::GetPrevFiberInSameThread()
{
} /* size: 0 */

// <0014DFD6> ../public/tier0/fibertools.h:356
// member functions: 4
// member variable: 1
// class size: 8
class CThreadFiber {
	/* ../public/tier0/fibertools.h:359 */
	void CThreadFiber(CThreadFiber* , size_t);
	/* ../public/tier0/fibertools.h:361 */
	void ~CThreadFiber(CThreadFiber* );
private:
	CFiber * m_pFiber; /* 0 8 */
	void CThreadFiber(class CThreadFiber *, size_t); /* linkage=_ZN12CThreadFiberC4Em */
	void ~CThreadFiber(class CThreadFiber *); /* linkage=_ZN12CThreadFiberD4Ev */
};

// <004CBB85> ../public/tier0/fibertools.h:359
void CThreadFiber::CThreadFiber(size_t nCreatedThreadSize)
{
} /* size: 0 */

// <004E35AF> ../public/tier0/fibertools.h:361
void CThreadFiber::~CThreadFiber()
{
} /* size: 0 */

// <004E3596> ../public/tier0/fibertools.h:361
inline void CThreadFiber::~CThreadFiber()
{
} /* size: 0 */

// <0001E3B8> ../public/tier0/fibertools.h:385
// member functions: 3
// member variables: 4
// class size: 32
class CFiberThreadingRequirement {
	/* ../public/tier0/fibertools.h:388 */
	void CFiberThreadingRequirement(CFiberThreadingRequirement* , FiberThreadingRequirement_t);
	/* ../public/tier0/fibertools.h:415 */
	void ~CFiberThreadingRequirement(CFiberThreadingRequirement* );
	/* ../public/tier0/fibertools.h:442 */
	void TransitionToRequirement(CFiberThreadingRequirement* , FiberThreadingRequirement_t);
	CFiber * m_pCurrentFiber; /* 0 8 */
	CFiberThreadingRequirement * m_pPrev; /* 8 8 */
	FiberThreadingRequirement_t m_nRequirement; /* 16 4 */
	ThreadId_t m_hReturnToThreadIfOutermostScope; /* 24 8 */
};

// <001DC993> ../public/tier0/fibertools.h:482
void IFiberThreadWorkerPool::IFiberThreadWorkerPool()
{
} /* size: 0 */

// <001DC976> ../public/tier0/fibertools.h:482
inline void IFiberThreadWorkerPool::IFiberThreadWorkerPool()
{
} /* size: 0 */

// <001C6859> ../public/tier0/fibertools.h:482
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IFiberThreadWorkerPool {
	void IFiberThreadWorkerPool(IFiberThreadWorkerPool* , IFiberThreadWorkerPool& );
	void IFiberThreadWorkerPool(IFiberThreadWorkerPool* , const IFiberThreadWorkerPool& );
	void IFiberThreadWorkerPool(IFiberThreadWorkerPool* );
	void ~IFiberThreadWorkerPool(IFiberThreadWorkerPool* );
	int ()(void) * * _vptr.IFiberThreadWorkerPool; /* 0 8 */
	/* ../public/tier0/fibertools.h:485 */
	virtual void FiberJobAvailable(IFiberThreadWorkerPool* );
	void IFiberThreadWorkerPool(class IFiberThreadWorkerPool *, class IFiberThreadWorkerPool &); /* linkage=_ZN22IFiberThreadWorkerPoolC4EOS_ */
	void IFiberThreadWorkerPool(class IFiberThreadWorkerPool *, const class IFiberThreadWorkerPool  &); /* linkage=_ZN22IFiberThreadWorkerPoolC4ERKS_ */
	void IFiberThreadWorkerPool(class IFiberThreadWorkerPool *); /* linkage=_ZN22IFiberThreadWorkerPoolC4Ev */
	void ~IFiberThreadWorkerPool(class IFiberThreadWorkerPool *); /* linkage=_ZN22IFiberThreadWorkerPoolD4Ev */
	virtual void FiberJobAvailable(class IFiberThreadWorkerPool *); /* linkage=_ZN22IFiberThreadWorkerPool17FiberJobAvailableEv */
};

// <00153E25> ../public/tier0/fibertools.h:489
void IFiberJobPool::IFiberJobPool()
{
} /* size: 0 */

// <00153E08> ../public/tier0/fibertools.h:489
inline void IFiberJobPool::IFiberJobPool()
{
} /* size: 0 */

// <0014E063> ../public/tier0/fibertools.h:489
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class IFiberJobPool {
	void ~IFiberJobPool(IFiberJobPool* );
	void IFiberJobPool(IFiberJobPool* , IFiberJobPool& );
	void IFiberJobPool(IFiberJobPool* , const IFiberJobPool& );
	void IFiberJobPool(IFiberJobPool* );
	int ()(void) * * _vptr.IFiberJobPool; /* 0 8 */
	/* ../public/tier0/fibertools.h:493 */
	virtual void AddFiberToJobPool(IFiberJobPool* , CFiber* , bool);
	/* ../public/tier0/fibertools.h:497 */
	virtual CFiber* GetWaitingFiberJob(IFiberJobPool* , bool* );
	/* ../public/tier0/fibertools.h:500 */
	virtual bool RemoveFiberJob(IFiberJobPool* , volatile CFiber* );
	/* ../public/tier0/fibertools.h:503 */
	virtual void RegisterWorkerThreadPool(IFiberJobPool* , IFiberThreadWorkerPool* );
	/* ../public/tier0/fibertools.h:505 */
	virtual void UnregisterWorkerThreadPool(IFiberJobPool* , IFiberThreadWorkerPool* );
	void ~IFiberJobPool(class IFiberJobPool *); /* linkage=_ZN13IFiberJobPoolD4Ev */
	void IFiberJobPool(class IFiberJobPool *, class IFiberJobPool &); /* linkage=_ZN13IFiberJobPoolC4EOS_ */
	void IFiberJobPool(class IFiberJobPool *, const class IFiberJobPool  &); /* linkage=_ZN13IFiberJobPoolC4ERKS_ */
	void IFiberJobPool(class IFiberJobPool *); /* linkage=_ZN13IFiberJobPoolC4Ev */
	virtual void AddFiberToJobPool(class IFiberJobPool *, class CFiber *, bool); /* linkage=_ZN13IFiberJobPool17AddFiberToJobPoolEP6CFiberb */
	virtual class CFiber * GetWaitingFiberJob(class IFiberJobPool *, bool *); /* linkage=_ZN13IFiberJobPool18GetWaitingFiberJobEPb */
	virtual bool RemoveFiberJob(class IFiberJobPool *, volatile class CFiber  *); /* linkage=_ZN13IFiberJobPool14RemoveFiberJobEPV6CFiber */
	virtual void RegisterWorkerThreadPool(class IFiberJobPool *, class IFiberThreadWorkerPool *); /* linkage=_ZN13IFiberJobPool24RegisterWorkerThreadPoolEP22IFiberThreadWorkerPool */
	virtual void UnregisterWorkerThreadPool(class IFiberJobPool *, class IFiberThreadWorkerPool *); /* linkage=_ZN13IFiberJobPool26UnregisterWorkerThreadPoolEP22IFiberThreadWorkerPool */
};

// <0014E200> ../public/tier0/fibertools.h:545
// member functions: 17
// member variable: 1
// class size: 16
class CEventLock {
	/* ../public/tier0/fibertools.h:548 */
	class CLockList : public CEventList {
		/* ../public/tier0/fibertools.h:554 */
		enum {
			EVENTLOCK_EMPTY_BUT_OWNED = 2,
		};
	public:
		/* class CEventList <ancestor>; */ /* 0 16 */
		/* ../public/tier0/fibertools.h:558 */
		void CLockList(CLockList* , bool);
		/* ../public/tier0/fibertools.h:568 */
		bool InternalPush(CLockList* , CEventListNode& );
		/* ../public/tier0/fibertools.h:599 */
		CEventListNode* InternalPop(CLockList* );
		/* ../public/tier0/fibertools.h:643 */
		bool TryLock(CLockList* );
	} __attribute__((__aligned__(4)));
private:
	CLockList m_LockList __attribute__((__aligned__(4))); /* 0 16 */
	/* ../public/tier0/fibertools.h:652 */
	void CEventLock(CEventLock* , bool);
	/* ../public/tier0/fibertools.h:655 */
	bool TryLock(CEventLock* );
	/* ../public/tier0/fibertools.h:673 */
	void Lock(CEventLock* , CEventListNode& );
	/* ../public/tier0/fibertools.h:676 */
	void Lock(CEventLock* );
	/* ../public/tier0/fibertools.h:678 */
	void Unlock(CEventLock* );
	/* ../public/tier0/fibertools.h:661 */
	void LockF<CEventLock::Lock(CEventListNode&)::<lambda(CThreadEvent&)> >(CEventLock* , CEventListNode& , class& );
	void CEventLock(class CEventLock *, bool); /* linkage=_ZN10CEventLockC4Eb */
	bool TryLock(class CEventLock *); /* linkage=_ZN10CEventLock7TryLockEv */
	void Lock(class CEventLock *, class CEventListNode &); /* linkage=_ZN10CEventLock4LockER14CEventListNode */
	void Lock(class CEventLock *); /* linkage=_ZN10CEventLock4LockEv */
	void Unlock(class CEventLock *); /* linkage=_ZN10CEventLock6UnlockEv */
	void LockF<CEventLock::Lock(CEventListNode&)::<lambda(CThreadEvent&)> >(class CEventLock *, class CEventListNode &, class  &); /* linkage=_ZN10CEventLock5LockFIZNS_4LockER14CEventListNodeEUlR12CThreadEventE_EEvS2_OT_ */
} __attribute__((__aligned__(8)));

// <00163795> ../public/tier0/fibertools.h:558
void CLockList::CLockList(bool bStartOwned)
{
} /* size: 0 */

// <0016376F> ../public/tier0/fibertools.h:558
inline void CLockList::CLockList(bool bStartOwned)
{
} /* size: 0 */

// <0016372F> ../public/tier0/fibertools.h:568
// variables: 2
inline void CLockList::InternalPush(CEventListNode& pushNode)
{
	volatile CEventListNode* pPrev; // 581
	volatile CEventListNode* pOldPrevNext; // 582
} /* size: 0, variables: 2 */

// <001636FA> ../public/tier0/fibertools.h:599
// variables: 2
inline void CLockList::InternalPop()
{
	volatile CEventListNode* pPop; // 606
	{
		CEventListNode* pNext; // 629
	}
} /* size: 0, variables: 1 */

// <001636DE> ../public/tier0/fibertools.h:652
void CEventLock::CEventLock(bool bStartOwned)
{
} /* size: 0 */

// <001636B8> ../public/tier0/fibertools.h:652
inline void CEventLock::CEventLock(bool bStartOwned)
{
} /* size: 0 */

// <001588F9> ../public/tier0/fibertools.h:661
inline void CEventLock::LockF<CEventLock::Lock(CEventListNode& waitEventNode, class& waitFunctor)
{
} /* size: 0 */

// <00163692> ../public/tier0/fibertools.h:678
// variable: 1
inline void CEventLock::Unlock()
{
	CEventListNode* pSignal; // 680
} /* size: 0, variables: 1 */

// <0014E3C7> ../public/tier0/fibertools.h:793
// member functions: 54
// member variables: 7
// class size: 56
class CEventRWLock {
	/* ../public/tier0/fibertools.h:841 */
	enum InterlockBits_t {
		READ_LOCK_MASK = 65535,
		WRITE_LOCK_INCREMENT = 65536,
		WRITE_LOCK_MASK = 2147418112,
		READ_LOCK_ACCOUNTING_BIT = 2147483648,
	};
	/* ../public/tier0/fibertools.h:862 */
	enum SecondaryFlags_t {
		SF_READ_LOCKS_ACTIVE_WHILE_HOLDING_WRITE_LOCK = 1,
		SF_READ_LOCK_ACCOUNTING_NOTIFY_WRITER_WHEN_OFF = 2,
	};
	/* ../public/tier0/fibertools.h:796 */
	void CEventRWLock(CEventRWLock* );
	/* ../public/tier0/fibertools.h:798 */
	bool TryLockForRead(CEventRWLock* );
	/* ../public/tier0/fibertools.h:799 */
	void LockForRead(CEventRWLock* , CEventListNode& );
	/* ../public/tier0/fibertools.h:800 */
	void LockForRead(CEventRWLock* );
	/* ../public/tier0/fibertools.h:801 */
	void UnlockRead(CEventRWLock* , const char* , int);
	/* ../public/tier0/fibertools.h:803 */
	bool TryLockForWrite(CEventRWLock* , CEventListNode& );
	/* ../public/tier0/fibertools.h:804 */
	bool TryLockForWrite(CEventRWLock* , const char* , int);
	/* ../public/tier0/fibertools.h:805 */
	void LockForWrite(CEventRWLock* , CEventListNode& );
	/* ../public/tier0/fibertools.h:806 */
	void LockForWrite(CEventRWLock* , const char* , int);
	/* ../public/tier0/fibertools.h:807 */
	void UnlockWrite(CEventRWLock* , const char* , int);
	/* ../public/tier0/fibertools.h:812 */
	void DuplicateReadLock(CEventRWLock* );
	/* ../public/tier0/fibertools.h:815 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CEventRWLock* , CEventListNode& );
	/* ../public/tier0/fibertools.h:816 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CEventRWLock* );
	/* ../public/tier0/fibertools.h:817 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CEventRWLock* , CEventListNode& );
	/* ../public/tier0/fibertools.h:818 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CEventRWLock* );
	/* ../public/tier0/fibertools.h:822 */
	const CEventListNode* GetWriteLockEvent(const CEventRWLock* );
	/* ../public/tier0/fibertools.h:823 */
	int GetDepth(const CEventRWLock* );
	/* ../public/tier0/fibertools.h:825 */
	bool DoesCurrentFiberHaveWriteLock(const CEventRWLock* );
	/* ../public/tier0/fibertools.h:827 */
	bool OwnedByCurrentFiber(const CEventRWLock* );
	/* ../public/tier0/fibertools.h:828 */
	bool AssertOwnedByCurrentFiber(const CEventRWLock* );
	/* ../public/tier0/fibertools.h:831 */
	bool TryLock(CEventRWLock* , const char* , int);
	/* ../public/tier0/fibertools.h:831 */
	void Lock(CEventRWLock* , const char* , int);
	/* ../public/tier0/fibertools.h:831 */
	void Unlock(CEventRWLock* , const char* , int);
protected:
	/* ../public/tier0/fibertools.h:834 */
	void HandleFirstWriteLockTransition(CEventRWLock* , CEventListNode& );
	/* ../public/tier0/fibertools.h:835 */
	void WaitForReadLockTransition(CEventRWLock* , CEventListNode& , uint32);
	CInterlockedUInt m_Interlock __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedInt m_ReadlockAccounting __attribute__((__aligned__(4))); /* 4 4 */
	CEventLock m_WriteLockQueue __attribute__((__aligned__(4))); /* 8 16 */
	CEventList m_WaitingReadLocks __attribute__((__aligned__(4))); /* 24 16 */
	volatile class CEventListNode * m_pWritingEvent; /* 40 8 */
	uint32 m_nWritingThreadLockCount; /* 48 4 */
	CInterlockedUInt m_nSecondaryFlags __attribute__((__aligned__(4))); /* 52 4 */
private:
	/* ../public/tier0/fibertools.h:870 */
	void CEventRWLock(CEventRWLock* , const CEventRWLock& );
	/* ../public/tier0/fibertools.h:871 */
	CEventRWLock& operator=(CEventRWLock* , const CEventRWLock& );
	void CEventRWLock(class CEventRWLock *); /* linkage=_ZN12CEventRWLockC4Ev */
	bool TryLockForRead(class CEventRWLock *); /* linkage=_ZN12CEventRWLock14TryLockForReadEv */
	void LockForRead(class CEventRWLock *, class CEventListNode &); /* linkage=_ZN12CEventRWLock11LockForReadER14CEventListNode */
	void LockForRead(class CEventRWLock *); /* linkage=_ZN12CEventRWLock11LockForReadEv */
	void UnlockRead(class CEventRWLock *, const char  *, int); /* linkage=_ZN12CEventRWLock10UnlockReadEPKci */
	bool TryLockForWrite(class CEventRWLock *, class CEventListNode &); /* linkage=_ZN12CEventRWLock15TryLockForWriteER14CEventListNode */
	bool TryLockForWrite(class CEventRWLock *, const char  *, int); /* linkage=_ZN12CEventRWLock15TryLockForWriteEPKci */
	void LockForWrite(class CEventRWLock *, class CEventListNode &); /* linkage=_ZN12CEventRWLock12LockForWriteER14CEventListNode */
	void LockForWrite(class CEventRWLock *, const char  *, int); /* linkage=_ZN12CEventRWLock12LockForWriteEPKci */
	void UnlockWrite(class CEventRWLock *, const char  *, int); /* linkage=_ZN12CEventRWLock11UnlockWriteEPKci */
	void DuplicateReadLock(class CEventRWLock *); /* linkage=_ZN12CEventRWLock17DuplicateReadLockEv */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CEventRWLock *, class CEventListNode &); /* linkage=_ZN12CEventRWLock23UnlockRead_LockForWriteER14CEventListNode */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CEventRWLock *); /* linkage=_ZN12CEventRWLock23UnlockRead_LockForWriteEv */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CEventRWLock *, class CEventListNode &); /* linkage=_ZN12CEventRWLock23UnlockWrite_LockForReadER14CEventListNode */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CEventRWLock *); /* linkage=_ZN12CEventRWLock23UnlockWrite_LockForReadEv */
	const class CEventListNode  * GetWriteLockEvent(const class CEventRWLock  *); /* linkage=_ZNK12CEventRWLock17GetWriteLockEventEv */
	int GetDepth(const class CEventRWLock  *); /* linkage=_ZNK12CEventRWLock8GetDepthEv */
	bool DoesCurrentFiberHaveWriteLock(const class CEventRWLock  *); /* linkage=_ZNK12CEventRWLock29DoesCurrentFiberHaveWriteLockEv */
	bool OwnedByCurrentFiber(const class CEventRWLock  *); /* linkage=_ZNK12CEventRWLock19OwnedByCurrentFiberEv */
	bool AssertOwnedByCurrentFiber(const class CEventRWLock  *); /* linkage=_ZNK12CEventRWLock25AssertOwnedByCurrentFiberEv */
	bool TryLock(class CEventRWLock *, const char  *, int); /* linkage=_ZN12CEventRWLock7TryLockEPKci */
	void Lock(class CEventRWLock *, const char  *, int); /* linkage=_ZN12CEventRWLock4LockEPKci */
	void Unlock(class CEventRWLock *, const char  *, int); /* linkage=_ZN12CEventRWLock6UnlockEPKci */
	void HandleFirstWriteLockTransition(class CEventRWLock *, class CEventListNode &); /* linkage=_ZN12CEventRWLock30HandleFirstWriteLockTransitionER14CEventListNode */
	/* <16545a> tier0/fibertools.cpp:1241 */
	void WaitForReadLockTransition(class CEventRWLock *, class CEventListNode &, uint32); /* linkage=_ZN12CEventRWLock25WaitForReadLockTransitionER14CEventListNodej */
	void CEventRWLock(class CEventRWLock *, const class CEventRWLock  &); /* linkage=_ZN12CEventRWLockC4ERKS_ */
	class CEventRWLock & operator=(class CEventRWLock *, const class CEventRWLock  &); /* linkage=_ZN12CEventRWLockaSERKS_ */
} __attribute__((__aligned__(8)));

// <0014E8A9> ../public/tier0/fibertools.h:879
// member functions: 46
// member variables: 2
// static member variable: 1
// class size: 72
class CEventRWLock_Debuggable<true> : CEventRWLock {
	/* ../public/tier0/fibertools.h:982 */
	struct TrackedReadLock_t {
		TrackedReadLock_t * pNext; /* 0 8 */
		CEventListNode * pNode; /* 8 8 */
		CInterlockedUInt nCopies __attribute__((__aligned__(4))); /* 16 4 */
		void TrackedReadLock_t(TrackedReadLock_t* );
	} __attribute__((__packed__));
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/fibertools.h:879 */
	using ::UnlockWrite;
	/* ../public/tier0/fibertools.h:879 */
	using ::GetWriteLockEvent;
	/* ../public/tier0/fibertools.h:879 */
	using ::GetDepth;
	/* ../public/tier0/fibertools.h:879 */
	using ::DoesCurrentFiberHaveWriteLock;
	/* ../public/tier0/fibertools.h:879 */
	using ::OwnedByCurrentFiber;
	/* ../public/tier0/fibertools.h:879 */
	using ::AssertOwnedByCurrentFiber;
	/* class CEventRWLock <ancestor>; */ /* 0 56 */
	/* ../public/tier0/fibertools.h:885 */
	bool TryLockForRead(CEventRWLock_Debuggable<true>* );
	/* ../public/tier0/fibertools.h:895 */
	void LockForRead(CEventRWLock_Debuggable<true>* );
	/* ../public/tier0/fibertools.h:903 */
	void UnlockRead(CEventRWLock_Debuggable<true>* , const char* , int);
	/* ../public/tier0/fibertools.h:909 */
	bool TryLockForWrite(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:914 */
	bool TryLockForWrite(CEventRWLock_Debuggable<true>* , const char* , int);
	/* ../public/tier0/fibertools.h:919 */
	void LockForWrite(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:925 */
	void LockForWrite(CEventRWLock_Debuggable<true>* , const char* , int);
	/* ../public/tier0/fibertools.h:932 */
	void DuplicateReadLock(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:934 */
	void DuplicateReadLock(CEventRWLock_Debuggable<true>* );
	/* ../public/tier0/fibertools.h:939 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:945 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CEventRWLock_Debuggable<true>* );
	/* ../public/tier0/fibertools.h:950 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:957 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CEventRWLock_Debuggable<true>* );
	/* ../public/tier0/fibertools.h:968 */
	void AssertHasReadLock(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:973 */
	void AssertHasReadLock(CEventRWLock_Debuggable<true>* );
	/* ../public/tier0/fibertools.h:979 */
	bool TryLock(CEventRWLock_Debuggable<true>* , const char* , int);
	/* ../public/tier0/fibertools.h:979 */
	void Lock(CEventRWLock_Debuggable<true>* , const char* , int);
	/* ../public/tier0/fibertools.h:979 */
	void Unlock(CEventRWLock_Debuggable<true>* , const char* , int);
	/* ../public/tier0/fibertools.h:988 */
	typedef CTSFastPushQueue TrackedReadLocks_t;
private:
	static TrackedReadLocks_t s_TrackingNodeMemPool; /* 0 0 */
	/* ../public/tier0/fibertools.h:991 */
	void AddTrackedReadLock(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:999 */
	void RemoveTrackedReadLock(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:1020 */
	bool DoesHaveAnyReadLocks(CEventRWLock_Debuggable<true>* , CEventListNode& );
	/* ../public/tier0/fibertools.h:1022 */
	TrackedReadLock_t* AllocOrFreeReadLockMem(CEventRWLock_Debuggable<true>* , TrackedReadLock_t* );
	TrackedReadLocks_t m_ActiveReadLocks __attribute__((__aligned__(4))); /* 56 16 */
	bool TryLockForRead(class CEventRWLock_Debuggable<true> *); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE14TryLockForReadEv */
	void LockForRead(class CEventRWLock_Debuggable<true> *); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE11LockForReadEv */
	void UnlockRead(class CEventRWLock_Debuggable<true> *, const char  *, int); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE10UnlockReadEPKci */
	bool TryLockForWrite(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE15TryLockForWriteER14CEventListNode */
	bool TryLockForWrite(class CEventRWLock_Debuggable<true> *, const char  *, int); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE15TryLockForWriteEPKci */
	void LockForWrite(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE12LockForWriteER14CEventListNode */
	void LockForWrite(class CEventRWLock_Debuggable<true> *, const char  *, int); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE12LockForWriteEPKci */
	void DuplicateReadLock(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE17DuplicateReadLockER14CEventListNode */
	void DuplicateReadLock(class CEventRWLock_Debuggable<true> *); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE17DuplicateReadLockEv */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE23UnlockRead_LockForWriteER14CEventListNode */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CEventRWLock_Debuggable<true> *); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE23UnlockRead_LockForWriteEv */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE23UnlockWrite_LockForReadER14CEventListNode */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CEventRWLock_Debuggable<true> *); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE23UnlockWrite_LockForReadEv */
	void AssertHasReadLock(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE17AssertHasReadLockER14CEventListNode */
	void AssertHasReadLock(class CEventRWLock_Debuggable<true> *); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE17AssertHasReadLockEv */
	bool TryLock(class CEventRWLock_Debuggable<true> *, const char  *, int); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE7TryLockEPKci */
	void Lock(class CEventRWLock_Debuggable<true> *, const char  *, int); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE4LockEPKci */
	void Unlock(class CEventRWLock_Debuggable<true> *, const char  *, int); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE6UnlockEPKci */
	void AddTrackedReadLock(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE18AddTrackedReadLockER14CEventListNode */
	void RemoveTrackedReadLock(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE21RemoveTrackedReadLockER14CEventListNode */
	bool DoesHaveAnyReadLocks(class CEventRWLock_Debuggable<true> *, class CEventListNode &); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE20DoesHaveAnyReadLocksER14CEventListNode */
	class TrackedReadLock_t * AllocOrFreeReadLockMem(class CEventRWLock_Debuggable<true> *, class TrackedReadLock_t *); /* linkage=_ZN23CEventRWLock_DebuggableILb1EE22AllocOrFreeReadLockMemEPNS0_17TrackedReadLock_tE */
} __attribute__((__aligned__(8)));

// <001592FB> ../public/tier0/fibertools.h:982
void TrackedReadLock_t::TrackedReadLock_t()
{
} /* size: 0 */

// <001592DE> ../public/tier0/fibertools.h:982
inline void TrackedReadLock_t::TrackedReadLock_t()
{
} /* size: 0 */

// <00163524> ../public/tier0/fibertools.h:1049
inline void CEventLock::Lock(CEventListNode& waitEventNode)
{
} /* size: 0 */

// <001634EC> ../public/tier0/fibertools.h:1085
// variables: 2
inline void CEventLock::Lock()
{
	CFiber* pCurrentFiber; // 1087
	{
		CEventListStackNode temp; // 1094
	}
} /* size: 0, variables: 1 */

// <001634B6> ../public/tier0/fibertools.h:1231
// variable: 1
inline void CEventRWLock::LockForRead(CEventListNode& waitEventNode)
{
	uint32 nInterlockVal; // 1233
} /* size: 0, variables: 1 */

