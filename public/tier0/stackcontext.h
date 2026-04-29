
//
// public/tier0/stackcontext.h
//
//	referenced by: libtier0.so
//
//	functions: 6
//	classes: 3
//	structs: 10
//

// <0001D41A> ../public/tier0/stackcontext.h:48
// member variables: 2
// struct size: 16
struct MemoryRange_t {
	void * pLow; /* 0 8 */
	void * pHigh; /* 8 8 */
} __attribute__((__packed__));

// <0001D44C> ../public/tier0/stackcontext.h:54
// struct size: 1
struct NonVolatileSIMDRegisters_t {
} __attribute__((__aligned__(1)));

// <0001D457> ../public/tier0/stackcontext.h:111
// member variable: 1
// struct size: 8
struct _SIMDRegisterAlignmentPadding_t {
	void * alignmentPadding1; /* 0 8 */
} __attribute__((__packed__));

// <0001D475> ../public/tier0/stackcontext.h:124
// member variables: 6
// struct size: 48
struct NonVolatileIntegerRegisters_t {
	IntegerRegisterValue_t m_R12; /* 0 8 */
	IntegerRegisterValue_t m_R13; /* 8 8 */
	IntegerRegisterValue_t m_R14; /* 16 8 */
	IntegerRegisterValue_t m_R15; /* 24 8 */
	IntegerRegisterValue_t m_RBX; /* 32 8 */
	IntegerRegisterValue_t m_RBP; /* 40 8 */
} __attribute__((__packed__));

// <0001D4DE> ../public/tier0/stackcontext.h:168
// member variables: 3
// struct size: 56
struct NonVolatileRegisters_t : public NonVolatileSIMDRegisters_t, public _SIMDRegisterAlignmentPadding_t, public NonVolatileIntegerRegisters_t {
public:
	/* struct NonVolatileSIMDRegisters_t <ancestor>; */ /* 0 0 */
	/* struct _SIMDRegisterAlignmentPadding_t <ancestor>; */ /* 0 8 */
	/* struct NonVolatileIntegerRegisters_t <ancestor>; */ /* 8 48 */
} __attribute__((__packed__));

// <0001D508> ../public/tier0/stackcontext.h:173
// member functions: 2
// member variables: 6
// struct size: 56
struct StackContext_StartData_t {
	IntegerRegisterValue_t m_ParentFramePointer; /* 0 8 */
	IntegerRegisterValue_t m_ReturnAddress; /* 8 8 */
	MemoryRange_t m_StackRange __attribute__((__aligned__(1))); /* 16 16 */
	StackContext_LongJumpLink_t * m_pReturnLink; /* 32 8 */
	StackContext_LongJumpLink_t * m_pExitLink; /* 40 8 */
	uintp m_nContextFlags; /* 48 8 */
	/* ../public/tier0/stackcontext.h:200 */
	void UnlinkFromLongJumpHierarchy(StackContext_StartData_t* );
	/* ../public/tier0/stackcontext.h:201 */
	void ReplaceReturnContext(StackContext_StartData_t* , JmpBuf_AlternateStack_t* );
} __attribute__((__packed__));

// <00467BA7> ../public/tier0/stackcontext.h:173
// member functions: 3
// member variables: 6
// struct size: 56
struct StackContext_StartData_t {
	/* ../public/tier0/stackcontext.h:194 */
	enum ContextFlags_t {
		THREAD_TOP = 1,
	} __attribute__((__packed__));
	IntegerRegisterValue_t m_ParentFramePointer; /* 0 8 */
	IntegerRegisterValue_t m_ReturnAddress; /* 8 8 */
	MemoryRange_t m_StackRange __attribute__((__aligned__(1))); /* 16 16 */
	StackContext_LongJumpLink_t * m_pReturnLink; /* 32 8 */
	StackContext_LongJumpLink_t * m_pExitLink; /* 40 8 */
	uintp m_nContextFlags; /* 48 8 */
	/* ../public/tier0/stackcontext.h:200 */
	void UnlinkFromLongJumpHierarchy(StackContext_StartData_t* );
	/* ../public/tier0/stackcontext.h:201 */
	void ReplaceReturnContext(StackContext_StartData_t* , JmpBuf_AlternateStack_t* );
} __attribute__((__packed__));

// <0001D5AE> ../public/tier0/stackcontext.h:205
// member function: 1
// member variables: 3
// struct size: 24
struct StackContext_LongJumpLink_t {
	StackContext_StartData_t * m_pExitContext; /* 0 8 */
	StackContext_StartData_t * m_pEnterContext; /* 8 8 */
	uintp m_nJumpFlags; /* 16 8 */
	/* ../public/tier0/stackcontext.h:215 */
	JmpBuf_AlternateStack_t* GetEnclosingJmpBuf(const StackContext_LongJumpLink_t* );
} __attribute__((__packed__));

// <00467C66> ../public/tier0/stackcontext.h:205
// member functions: 2
// member variables: 3
// struct size: 24
struct StackContext_LongJumpLink_t {
	/* ../public/tier0/stackcontext.h:209 */
	enum JumpFlags_t {
		UNBREAKABLE = 1,
	} __attribute__((__packed__));
	StackContext_StartData_t * m_pExitContext; /* 0 8 */
	StackContext_StartData_t * m_pEnterContext; /* 8 8 */
	uintp m_nJumpFlags; /* 16 8 */
	/* ../public/tier0/stackcontext.h:215 */
	JmpBuf_AlternateStack_t* GetEnclosingJmpBuf(const StackContext_LongJumpLink_t* );
} __attribute__((__packed__));

// <0001D623> ../public/tier0/stackcontext.h:218
// member variables: 3
// struct size: 88
struct JmpBuf_AlternateStack_t {
	StackContext_LongJumpLink_t m_ExitLink __attribute__((__aligned__(1))); /* 0 24 */
	void * alignmentPadding1; /* 24 8 */
	NonVolatileRegisters_t m_Registers __attribute__((__aligned__(1))); /* 32 56 */
} __attribute__((__packed__));

// <0046A9F8> ../public/tier0/stackcontext.h:253
inline void StackContext_LongJumpLink_t::GetEnclosingJmpBuf()
{
} /* size: 0 */

// <00151EA8> ../public/tier0/stackcontext.h:266
intp RunWithAlternateStack(const MemoryRange_t &, intp (*)(void *), void *, JmpBuf_AlternateStack_t* *)
{
} /* size: 0 */

// <00151ED6> ../public/tier0/stackcontext.h:271
intp JmpToAlternateStack(JmpBuf_AlternateStack_t &, JmpBuf_AlternateStack_t* *, intp)
{
} /* size: 0 */

// <00157FDF> ../public/tier0/stackcontext.h:285
inline long long int RunWithAlternateStack<long long int, CFiber::_RunningInNewStack_t*>(const MemoryRange_t& alternateStackRange, long long int (*pFnRun)(_RunningInNewStack_t *), _RunningInNewStack_t* pPassThroughArg, JmpBuf_AlternateStack_t** ppJmpBack)
{
} /* size: 0 */

// <004694B5> ../public/tier0/stackcontext.h:301
inline intp RunWithAlternateStack<CThreadSwapTarget::OwnerThreadRun()::<lambda()> >(const MemoryRange_t& alternateStackRange, class& runFunctor, JmpBuf_AlternateStack_t** ppJmpBack)
{
} /* size: 0 */

// <004693FD> ../public/tier0/stackcontext.h:301
inline intp RunWithAlternateStack<CThreadSwapTarget::SwapContextEnd(CThreadSwapContext*)::<lambda()> >(const MemoryRange_t& alternateStackRange, class& runFunctor, JmpBuf_AlternateStack_t** ppJmpBack)
{
} /* size: 0 */

// <00467D70> ../public/tier0/stackcontext.h:325
// member functions: 4
// member variables: 5
// class size: 4,456
class CThreadSwapContext {
	/* ../public/tier0/stackcontext.h:328 */
	void CThreadSwapContext(CThreadSwapContext* , CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:329 */
	void ~CThreadSwapContext(CThreadSwapContext* );
private:
	CThreadSwapContext * m_pNext; /* 0 8 */
	CThreadSwapTarget * m_pTarget; /* 8 8 */
	StackContext_StartData_t * m_pParkedContext; /* 16 8 */
	CThreadManualEvent m_PreSwapParkedThreadWait; /* 24 128 */
	uint8 m_ParkedThreadMemory[4304]; /* 152 4304 */
	void CThreadSwapContext(class CThreadSwapContext *, class CThreadSwapTarget *); /* linkage=_ZN18CThreadSwapContextC4EP17CThreadSwapTarget */
	void ~CThreadSwapContext(class CThreadSwapContext *); /* linkage=_ZN18CThreadSwapContextD4Ev */
};

// <00467E38> ../public/tier0/stackcontext.h:346
// member functions: 16
// member variables: 5
// class size: 168
class CThreadSwapTarget {
	/* ../public/tier0/stackcontext.h:349 */
	void CThreadSwapTarget(CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:351 */
	bool ReserveOwnership(CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:352 */
	void OwnerThreadRun(CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:353 */
	void ReleaseOwnerThread(CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:355 */
	ThreadId_t GetOwnerThread(const CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:356 */
	bool IsCurrentThread(const CThreadSwapTarget* );
private:
	/* ../public/tier0/stackcontext.h:359 */
	void SwapContextStart(CThreadSwapTarget* , CThreadSwapContext* );
	/* ../public/tier0/stackcontext.h:360 */
	void SwapContextEnd(CThreadSwapTarget* , CThreadSwapContext* );
	CTSFastPushQueue m_Queue __attribute__((__aligned__(8))); /* 0 16 */
	CThreadSemaphore m_Semaphore; /* 16 0 */
	StackContext_LongJumpLink_t * m_pParkedTargetReturnLink; /* 144 8 */
	CThreadSwapContext * m_pActiveSwapContext; /* 152 8 */
	ThreadId_t m_hRunningThreadID; /* 160 8 */
	void CThreadSwapTarget(class CThreadSwapTarget *); /* linkage=_ZN17CThreadSwapTargetC4Ev */
	bool ReserveOwnership(class CThreadSwapTarget *); /* linkage=_ZN17CThreadSwapTarget16ReserveOwnershipEv */
	void OwnerThreadRun(class CThreadSwapTarget *); /* linkage=_ZN17CThreadSwapTarget14OwnerThreadRunEv */
	void ReleaseOwnerThread(class CThreadSwapTarget *); /* linkage=_ZN17CThreadSwapTarget18ReleaseOwnerThreadEv */
	ThreadId_t GetOwnerThread(const class CThreadSwapTarget  *); /* linkage=_ZNK17CThreadSwapTarget14GetOwnerThreadEv */
	bool IsCurrentThread(const class CThreadSwapTarget  *); /* linkage=_ZNK17CThreadSwapTarget15IsCurrentThreadEv */
	/* <46af86> tier0/stackcontext.cpp:451 */
	void SwapContextStart(class CThreadSwapTarget *, class CThreadSwapContext *); /* linkage=_ZN17CThreadSwapTarget16SwapContextStartEP18CThreadSwapContext */
	/* <46b03a> tier0/stackcontext.cpp:519 */
	void SwapContextEnd(class CThreadSwapTarget *, class CThreadSwapContext *); /* linkage=_ZN17CThreadSwapTarget14SwapContextEndEP18CThreadSwapContext */
} __attribute__((__aligned__(8)));

// <004C587E> ../public/tier0/stackcontext.h:346
// member functions: 16
// member variables: 5
// class size: 168
class CThreadSwapTarget {
	/* ../public/tier0/stackcontext.h:349 */
	void CThreadSwapTarget(CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:351 */
	bool ReserveOwnership(CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:352 */
	void OwnerThreadRun(CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:353 */
	void ReleaseOwnerThread(CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:355 */
	ThreadId_t GetOwnerThread(const CThreadSwapTarget* );
	/* ../public/tier0/stackcontext.h:356 */
	bool IsCurrentThread(const CThreadSwapTarget* );
private:
	/* ../public/tier0/stackcontext.h:359 */
	void SwapContextStart(CThreadSwapTarget* , CThreadSwapContext* );
	/* ../public/tier0/stackcontext.h:360 */
	void SwapContextEnd(CThreadSwapTarget* , CThreadSwapContext* );
	CTSFastPushQueue m_Queue __attribute__((__aligned__(8))); /* 0 16 */
	CThreadSemaphore m_Semaphore; /* 16 128 */
	StackContext_LongJumpLink_t * m_pParkedTargetReturnLink; /* 144 8 */
	CThreadSwapContext * m_pActiveSwapContext; /* 152 8 */
	ThreadId_t m_hRunningThreadID; /* 160 8 */
	void CThreadSwapTarget(class CThreadSwapTarget *); /* linkage=_ZN17CThreadSwapTargetC4Ev */
	bool ReserveOwnership(class CThreadSwapTarget *); /* linkage=_ZN17CThreadSwapTarget16ReserveOwnershipEv */
	void OwnerThreadRun(class CThreadSwapTarget *); /* linkage=_ZN17CThreadSwapTarget14OwnerThreadRunEv */
	void ReleaseOwnerThread(class CThreadSwapTarget *); /* linkage=_ZN17CThreadSwapTarget18ReleaseOwnerThreadEv */
	ThreadId_t GetOwnerThread(const class CThreadSwapTarget  *); /* linkage=_ZNK17CThreadSwapTarget14GetOwnerThreadEv */
	bool IsCurrentThread(const class CThreadSwapTarget  *); /* linkage=_ZNK17CThreadSwapTarget15IsCurrentThreadEv */
	/* <46af86> tier0/stackcontext.cpp:451 */
	void SwapContextStart(class CThreadSwapTarget *, class CThreadSwapContext *); /* linkage=_ZN17CThreadSwapTarget16SwapContextStartEP18CThreadSwapContext */
	/* <46b03a> tier0/stackcontext.cpp:519 */
	void SwapContextEnd(class CThreadSwapTarget *, class CThreadSwapContext *); /* linkage=_ZN17CThreadSwapTarget14SwapContextEndEP18CThreadSwapContext */
} __attribute__((__aligned__(8)));

