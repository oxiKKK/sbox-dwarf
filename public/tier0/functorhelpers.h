
//
// public/tier0/functorhelpers.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 17
//	classes: 2
//

// <004692DF> ../public/tier0/functorhelpers.h:11
inline class* GetFunctorPointer<CThreadSwapTarget::OwnerThreadRun()::<lambda()> >(class& functor)
{
} /* size: 0 */

// <00468EE9> ../public/tier0/functorhelpers.h:11
inline class* GetFunctorPointer<CThreadSwapTarget::SwapContextEnd(CThreadSwapContext*)::<lambda()> >(class& functor)
{
} /* size: 0 */

// <00282D79> ../public/tier0/functorhelpers.h:11
inline class* GetFunctorPointer<CLoggingSystem::LogDirect(LoggingChannelID_t, LoggingSeverity_t, const LeafCodeInfo_t*, const LoggingMetaData_t*, Color, char const*, __va_list_tag (*)[1])::<lambda()> >(class& functor)
{
} /* size: 0 */

// <00025BCA> ../public/tier0/functorhelpers.h:11
inline class* GetFunctorPointer<CreateAssertDisable(AssertIgnoreInfo_t*, char const*)::<lambda()> >(class& functor)
{
} /* size: 0 */

// <00025AAB> ../public/tier0/functorhelpers.h:11
inline class* GetFunctorPointer<AssertMsg_ConditionFailed_State(CAssertionState*, LoggingChannelID_t*, AssertionType_t, AssertionFlags_t, char const*, __va_list_tag (&)[1])::<lambda()> >(class& functor)
{
} /* size: 0 */

// <00468F16> ../public/tier0/functorhelpers.h:41
// variables: 5
// function calls: 10
long long int FunctorToContextFunction<long long int, void*, CThreadSwapTarget::OwnerThreadRun()::<lambda()>*>(void* contextParam)
{
	{
		StackContext_StartData_t* pThisContext; // 391
		CThreadSwapContext* pSwap; // 395
		StackContext_StartData_t* pSwapContext; // 403
		{
		}
		{
			volatile CThreadSwapContext* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 414
		{
			volatile CThreadSwapContext* pNext; // 277
			CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CThreadSwapContext* pCurItem);  // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
		}
		CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::EndPeek_Pop(
				CThreadSwapContext* pPeeked);  // 260
		CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::EndPeek_Pop(
				CThreadSwapContext* pPeeked);  // 415
		CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::Pop(
			bool bWaitIfAlreadyPeeked);  // 395
		{
		}
		{
		}
	}
	operator()(const class* __closure); // 43
} /* size: 0, inline expansions: 1 (290 bytes) */

// <00468DE3> ../public/tier0/functorhelpers.h:41
// variables: 2
// function call: 1
long long int FunctorToContextFunction<long long int, void*, CThreadSwapTarget::SwapContextEnd(CThreadSwapContext*)::<lambda()>*>(void* contextParam)
{
	{
		StackContext_StartData_t* pTempContext; // 532
		StackContext_StartData_t* pSwapContext; // 533
		{
		}
	}
	operator()(const class* __closure); // 43
} /* size: 0, inline expansions: 1 (106 bytes) */

// <00282C60> ../public/tier0/functorhelpers.h:41
// function call: 1
LoggingResponse_t FunctorToContextFunction<LoggingResponse_t, void*, CLoggingSystem::LogDirect(LoggingChannelID_t, LoggingSeverity_t, const LeafCodeInfo_t*, const LoggingMetaData_t*, Color, char const*, __va_list_tag (*)[1])::<lambda()>*>(void* contextParam)
{
	operator()(const class* __closure); // 43
} /* size: 67, inline expansions: 1 (57 bytes) */

// <00025B0A> ../public/tier0/functorhelpers.h:41
// function call: 1
CAssertDisable* FunctorToContextFunction<CAssertDisable*, void*, CreateAssertDisable(AssertIgnoreInfo_t*, char const*)::<lambda()>*>(void* contextParam)
{
	operator()(const class* __closure); // 43
} /* size: 22, inline expansions: 1 (18 bytes) */

// <00025999> ../public/tier0/functorhelpers.h:41
// function call: 1
bool FunctorToContextFunction<bool, void*, AssertMsg_ConditionFailed_State(CAssertionState*, LoggingChannelID_t*, AssertionType_t, AssertionFlags_t, char const*, __va_list_tag (&)[1])::<lambda()>*>(void* contextParam)
{
	operator()(const class* __closure); // 43
} /* size: 48, inline expansions: 1 (44 bytes) */

// <06E61752> ../../public/tier0/functorhelpers.h:58
// member function: 1
// class size: 1
class CRunFunctorHelper {
	/* ../../public/tier0/functorhelpers.h:62 */
	void operator<< <CSDLAudioSubsystem::CSDLAudioSubsystem()::<lambda()> >(CRunFunctorHelper* , class& );
};

// <003B31C5> ../public/tier0/functorhelpers.h:58
// member functions: 6
// class size: 1
class CRunFunctorHelper {
	/* ../public/tier0/functorhelpers.h:62 */
	void operator<< <Plat_WindowToOsSpecificHandle(PlatWindow_t)::<lambda()> >(CRunFunctorHelper* , class& );
	/* ../public/tier0/functorhelpers.h:62 */
	void operator<< <Plat_SetWindowPos(PlatWindow_t, int, int)::<lambda()> >(CRunFunctorHelper* , class& );
	/* ../public/tier0/functorhelpers.h:62 */
	void operator<< <Plat_EnsureRaiseWindow(PlatWindow_t)::<lambda()> >(CRunFunctorHelper* , class& );
	/* ../public/tier0/functorhelpers.h:62 */
	void operator<< <Plat_SetWindowIcon(PlatWindow_t, char const*)::<lambda()> >(CRunFunctorHelper* , class& );
	/* ../public/tier0/functorhelpers.h:62 */
	void operator<< <Plat_SetWindowTitle(PlatWindow_t, char const*)::<lambda()> >(CRunFunctorHelper* , class& );
	/* ../public/tier0/functorhelpers.h:62 */
	void operator<< <Plat_CreateWindow(void*, char const*, int, int, int, int, int, float)::<lambda()> >(CRunFunctorHelper* , class& );
};

// <06E6A45E> ../../public/tier0/functorhelpers.h:62
inline void operator<< CRunFunctorHelper::<CSDLAudioSubsystem::CSDLAudioSubsystem(class& runFunctor)
{
} /* size: 0 */

// <003B7A95> ../public/tier0/functorhelpers.h:62
inline void operator<< CRunFunctorHelper::<Plat_CreateWindow(class& runFunctor)
{
} /* size: 0 */

// <003B7913> ../public/tier0/functorhelpers.h:62
inline void operator<< CRunFunctorHelper::<Plat_SetWindowTitle(class& runFunctor)
{
} /* size: 0 */

// <003B78D3> ../public/tier0/functorhelpers.h:62
inline void operator<< CRunFunctorHelper::<Plat_SetWindowIcon(class& runFunctor)
{
} /* size: 0 */

// <003B788D> ../public/tier0/functorhelpers.h:62
inline void operator<< CRunFunctorHelper::<Plat_EnsureRaiseWindow(class& runFunctor)
{
} /* size: 0 */

// <003B7847> ../public/tier0/functorhelpers.h:62
inline void operator<< CRunFunctorHelper::<Plat_SetWindowPos(class& runFunctor)
{
} /* size: 0 */

// <003B77BE> ../public/tier0/functorhelpers.h:62
inline void operator<< CRunFunctorHelper::<Plat_WindowToOsSpecificHandle(class& runFunctor)
{
} /* size: 0 */

