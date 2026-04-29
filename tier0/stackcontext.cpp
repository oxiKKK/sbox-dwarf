
//
// tier0/stackcontext.cpp
//
//	referenced by: libtier0.so
//
//	functions: 26
//

// <0046A9C2> tier0/stackcontext.cpp:46
// variables: 3
StackContext_StartData_t* EnsureHeadStackContextExists(void)
{
	StackContext_StartData_t* pHeadContext; // 48
	const void* pAssumedLow; // 60
	const void* pAssumedHigh; // 61
} /* size: 0, variables: 3 */

// <0046AE5C> tier0/stackcontext.cpp:73
// variable: 1
// function calls: 3
void HeadContextManager(CThreadLocalScope* pScope, bool bCreated)
{
	EnsureHeadStackContextExists(void); // 46
	EnsureHeadStackContextExists(void); // 77
	{
		StackContext_StartData_t* pHeadContext; // 81
	}
	HeadContextManager(CThreadLocalScope* pScope,
				bool bCreated);  // 73
} /* size: 263, inline expansions: 3 (248 bytes) */

// <0046A98E> tier0/stackcontext.cpp:73
// variable: 1
void HeadContextManager(CThreadLocalScope* pScope, bool bCreated)
{
	{
		StackContext_StartData_t* pHeadContext; // 81
	}
} /* size: 0 */

// <0046A7A8> tier0/stackcontext.cpp:93
// variables: 9
// function calls: 2
void StackContext_EnterContextThroughLink_CPP(StackContext_LongJumpLink_t* pLink)
{
	StackContext_StartData_t* pEnterContext; // 95
	StackContext_StartData_t* pExitContext; // 99
	bool bResumingFromSameThread; // 135
	{
		JmpBuf_AlternateStack_t* pExitBuf; // 115
		const void* pAssumedLow; // 116
		const void* pAssumedHigh; // 117
	}
	{
		StackContext_LongJumpLink_t* pIterReturns; // 136
	}
	{
		StackContext_LongJumpLink_t* pIterReturns; // 153
		{
			StackContext_LongJumpLink_t* pPrev; // 155
		}
	}
	EnsureHeadStackContextExists(void); // 46
	EnsureHeadStackContextExists(void); // 104
} /* size: 450, variables: 3, inline expansions: 2 (185 bytes) */

// <0046A749> tier0/stackcontext.cpp:246
// variables: 2
void StackContext_ReturnFromContext_CPP(StackContext_StartData_t* pExitContext)
{
	StackContext_LongJumpLink_t* pReturnLink; // 249
	StackContext_StartData_t* pEnterContext; // 253
} /* size: 53, variables: 2 */

// <00468C25> tier0/stackcontext.cpp:270
intp TestStackVolatility_ASM(JmpBuf_AlternateStack_t &, intp (*)(void *), void *, JmpBuf_AlternateStack_t &)
{
} /* size: 0 */

// <0046A442> tier0/stackcontext.cpp:271
// variables: 4
// function calls: 6
bool TestStackVolatility(intp (*pFnRun)(void *), void* pPassThroughArg, intp* pWriteRetVal)
{
	JmpBuf_AlternateStack_t* pNVR_Before; // 273
	JmpBuf_AlternateStack_t* pNVR_After; // 274
	intp nResult; // 278
	bool bRet; // 285
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 275
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 276
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 285
	_DebuggerBreakInlineExpressionWrapper(void); // 285
} /* size: 0, variables: 4, inline expansions: 6 (235 bytes) */

// <00468BD2> tier0/stackcontext.cpp:292
bool TestStackPointerAlignment_ASM(void)
{
} /* size: 0 */

// <0046A3E5> tier0/stackcontext.cpp:296
// variables: 2
void StackContext_StartData_t::UnlinkFromLongJumpHierarchy()
{
	StackContext_StartData_t* pReturnContext; // 299
	StackContext_StartData_t* pHigherContext; // 302
} /* size: 140, variables: 2 */

// <00468BB8> tier0/stackcontext.cpp:321
void StackContext_SetContextReturn_To_JmpToAlternateStack(StackContext_StartData_t *, JmpBuf_AlternateStack_t *)
{
} /* size: 0 */

// <0046A37B> tier0/stackcontext.cpp:322
void StackContext_StartData_t::ReplaceReturnContext(JmpBuf_AlternateStack_t* pReturnTo)
{
} /* size: 17 */

// <0046A2D0> tier0/stackcontext.cpp:340
// function calls: 2
void CThreadSwapTarget::CThreadSwapTarget()
{
	GetLoopbackAddress(const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNex this); // 149
	CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::CTSFastPushQueue_Base(); // 344
} /* size: 81, inline expansions: 2 (20 bytes) */

// <0046A2B3> tier0/stackcontext.cpp:340
void CThreadSwapTarget::CThreadSwapTarget()
{
} /* size: 0 */

// <0046A257> tier0/stackcontext.cpp:347
// variable: 1
void CThreadSwapTarget::ReserveOwnership()
{
	ThreadId_t currentThreadID; // 349
} /* size: 60, variables: 1 */

// <0046AD5D> tier0/stackcontext.cpp:360
// variables: 2
uint8* GetParkedSafeArea(size_t nInnerSize)
{
	const size_t  kSafeZone; // 363
	uint8* pRet; // 364
} /* size: 108, variables: 2 */

// <00469E51> tier0/stackcontext.cpp:368
// variables: 8
// function calls: 4
void CThreadSwapTarget::OwnerThreadRun()
{
	const size_t  kParkedMemSize; // 373
	uint8* parkedThreadMemory; // 374
	MemoryRange_t parkedRange; // 377
	JmpBuf_AlternateStack_t* pJumpDummy; // 378
	const char   __FUNCTION__; // 55436
	{
		intp nResult; // 385
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 425
		}
		RunWithAlternateStack<CThreadSwapTarget::OwnerThreadRun()::<lambda()> >(const MemoryRange_t& alternateStackRange,
											class& runFunctor,
											JmpBuf_AlternateStack_t** ppJmpBack); // 385
	}
	EnsureHeadStackContextExists(void); // 46
	EnsureHeadStackContextExists(void); // 371
	_DebuggerBreakInlineExpressionWrapper(void); // 370
} /* size: 0, variables: 5, inline expansions: 3 (181 bytes) */

// <00469DF7> tier0/stackcontext.cpp:442
void CThreadSwapTarget::ReleaseOwnerThread()
{
} /* size: 59 */

// <0046AF86> tier0/stackcontext.cpp:451
// variables: 4
void CThreadSwapTarget::SwapContextStart(CThreadSwapContext* pSwap)
{
	MemoryRange_t parkedRange; // 453
	JmpBuf_AlternateStack_t* pJumpDummy; // 454
	ParkedContextVars_t* pParkedVars; // 507
	intp nResult; // 511
} /* size: 0, variables: 4 */

// <0046ACEB> tier0/stackcontext.cpp:451
// variables: 4
void CThreadSwapContext::SwapContextStart()
{
	MemoryRange_t parkedRange; // 453
	JmpBuf_AlternateStack_t* pJumpDummy; // 454
	ParkedContextVars_t* pParkedVars; // 507
	intp nResult; // 511
	{
	}
} /* size: 23, variables: 4 */

// <00469A32> tier0/stackcontext.cpp:451
// variables: 6
void CThreadSwapTarget::SwapContextStart(CThreadSwapContext* pSwap)
{
	MemoryRange_t parkedRange; // 453
	JmpBuf_AlternateStack_t* pJumpDummy; // 454
	ParkedContextVars_t* pParkedVars; // 507
	intp nResult; // 511
	const char   __FUNCTION__; // 56401
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 513
	}
} /* size: 0, variables: 5 */

// <0046B03A> tier0/stackcontext.cpp:519
// variables: 5
// function calls: 2
void CThreadSwapTarget::SwapContextEnd(CThreadSwapContext* pSwap)
{
	uint8 swapbackStack; // 521
	MemoryRange_t parkedRange; // 523
	JmpBuf_AlternateStack_t* pJumpDummy; // 524
	intp nResult; // 528
	{
	}
	RunWithAlternateStack<CThreadSwapTarget::SwapContextEnd(CThreadSwapContext*)::<lambda()> >(const MemoryRange_t& alternateStackRange,
													class& runFunctor,
													JmpBuf_AlternateStack_t** ppJmpBack); // 528
	{
	}
	CThreadSwapTarget::SwapContextEnd(
			CThreadSwapContext* pSwap);  // 519
} /* size: 0, variables: 4, inline expansions: 2 (59 bytes) */

// <0046988F> tier0/stackcontext.cpp:519
// variables: 7
void CThreadSwapTarget::SwapContextEnd(CThreadSwapContext* pSwap)
{
	uint8 swapbackStack; // 521
	MemoryRange_t parkedRange; // 523
	JmpBuf_AlternateStack_t* pJumpDummy; // 524
	const char   __FUNCTION__; // 55436
	intp nResult; // 528
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 526
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 561
	}
} /* size: 0, variables: 5 */

// <00469700> tier0/stackcontext.cpp:568
// function calls: 3
void CThreadSwapContext::CThreadSwapContext(CThreadSwapTarget* pTarget)
{
	CThreadManualEvent::CThreadManualEvent(); // 571
	CThreadSwapTarget::SwapContextStart(
			CThreadSwapContext* pSwap);  // 593
	CThreadSwapContext::CThreadSwapContext(
				CThreadSwapTarget* pTarget);  // 568
} /* size: 0, inline expansions: 3 (216 bytes) */

// <004696D6> tier0/stackcontext.cpp:568
void CThreadSwapContext::CThreadSwapContext(CThreadSwapTarget* pTarget)
{
} /* size: 0 */

// <0046957E> tier0/stackcontext.cpp:596
// function calls: 5
void CThreadSwapContext::~CThreadSwapContext()
{
	CThreadEvent::~CThreadEvent(); // 1637
	CThreadManualEvent::~CThreadManualEvent(); // 615
	CThreadEvent::~CThreadEvent(); // 1637
	CThreadManualEvent::~CThreadManualEvent(); // 615
	CThreadSwapContext::~CThreadSwapContext(); // 596
} /* size: 95, inline expansions: 5 (131 bytes) */

// <00469561> tier0/stackcontext.cpp:596
void CThreadSwapContext::~CThreadSwapContext()
{
} /* size: 0 */

