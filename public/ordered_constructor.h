
//
// public/ordered_constructor.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 414
//	classes: 34
//	structs: 92
//

// <00003641> ../public/ordered_constructor.h:141
// member functions: 3
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
};

// <00003641> ../../public/ordered_constructor.h:141
// member functions: 3
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
};

// <0000B9AB> ../public/ordered_constructor.h:141
// member functions: 5
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<void, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<void>& );
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >& );
};

// <0009ABC0> ../public/ordered_constructor.h:141
// member functions: 4
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CCommandLine, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<CCommandLine>& );
};

// <0014CB13> ../public/ordered_constructor.h:141
// member functions: 5
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CFiberJobPool, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<CFiberJobPool>& );
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<FiberToolsOrderedConstructionGlobals_t, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>& );
};

// <0027ED9E> ../public/ordered_constructor.h:141
// member functions: 4
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CLoggingSystem, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<CLoggingSystem>& );
};

// <002C2AF1> ../public/ordered_constructor.h:141
// member functions: 4
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<void, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<void>& );
};

// <0037DF75> ../public/ordered_constructor.h:141
// member functions: 4
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CThreadKeyHolder, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<CThreadKeyHolder>& );
};

// <0039636B> ../public/ordered_constructor.h:141
// member functions: 4
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<SignalHandlerMemory_t, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>& );
};

// <00485F34> ../public/ordered_constructor.h:141
// member functions: 4
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CThreadFastMutex, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<CThreadFastMutex>& );
};

// <004C51C5> ../public/ordered_constructor.h:141
// member functions: 9
// member variables: 3
// struct size: 24
struct OrderedDependency_t {
	/* ../public/ordered_constructor.h:143 */
	void OrderedDependency_t(OrderedDependency_t* );
	/* ../public/ordered_constructor.h:148 */
	void CallReleaseFunc(OrderedDependency_t* );
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	OrderedDependency_t * m_pNext; /* 16 8 */
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<void, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<void>& );
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>& );
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CThreadLocalScope, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<CThreadLocalScope>& );
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CConstructedMainThreadID, void>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<void>& , COrderedConstructor_DependencyManagement<CConstructedMainThreadID>& );
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CThreadFastMutex, CThreadLocalScope>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<CThreadLocalScope>& , COrderedConstructor_DependencyManagement<CThreadFastMutex>& );
	/* ../public/ordered_constructor.h:1430 */
	void LinkDependency<CConstructedMainThreadID, CThreadLocalScope>(OrderedDependency_t* , COrderedConstructor_DependencyManagement<CThreadLocalScope>& , COrderedConstructor_DependencyManagement<CConstructedMainThreadID>& );
};

// <000036D8> ../public/ordered_constructor.h:161
// member variables: 2
// struct size: 16
struct OrderedConstructor_TrackingData_t {
	OrderedDependency_t * m_pDependencyLL; /* 0 8 */
	volatile uint32 m_nRefCount; /* 8 4 */
};

// <000240EB> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CAssertGlobals, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CAssertGlobals& );
};

// <0009C26E> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CCommandLine, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CCommandLine& );
};

// <0015191B> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<FiberToolsOrderedConstructionGlobals_t, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(FiberToolsOrderedConstructionGlobals_t& );
};

// <0015196B> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CFiberJobPool, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CFiberJobPool& );
};

// <00151BCE> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CFiber, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CFiber& );
};

// <00280DA8> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CLoggingSystem, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CLoggingSystem& );
};

// <003800E7> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CThreadKeyHolder, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CThreadKeyHolder& );
};

// <00380138> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CBufferStringN<200>, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CBufferStringN<200>& );
};

// <003970C4> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<SignalHandlerMemory_t, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(SignalHandlerMemory_t& );
};

// <00488978> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CThreadFastMutex, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CThreadFastMutex& );
};

// <004CA66C> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CConstructedMainThreadID, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CConstructedMainThreadID& );
};

// <004CA765> ../public/ordered_constructor.h:187
// member function: 1
// struct size: 1
class _CDefaultConstruct_Impl<CThreadLocalScope, true> {
	/* ../public/ordered_constructor.h:197 */
	enum {
		IS_DEFAULT_CONSTRUCTIBLE = 1,
	};
	/* ../public/ordered_constructor.h:190 */
	bool DefaultConstruct(CThreadLocalScope& );
};

// <004CE6A0> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CConstructedMainThreadID& constructInstance)
{
} /* size: 0 */

// <004CE53F> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CThreadFastMutex& constructInstance)
{
} /* size: 0 */

// <004CE2B5> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CThreadLocalScope& constructInstance)
{
} /* size: 0 */

// <003A03A5> ../public/ordered_constructor.h:190
inline void DefaultConstruct(SignalHandlerMemory_t& constructInstance)
{
} /* size: 0 */

// <00383CA9> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CThreadKeyHolder& constructInstance)
{
} /* size: 0 */

// <00382CC1> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CBufferStringN<200>& constructInstance)
{
} /* size: 0 */

// <00282BCE> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CLoggingSystem& constructInstance)
{
} /* size: 0 */

// <001555CD> ../public/ordered_constructor.h:190
inline void DefaultConstruct(FiberToolsOrderedConstructionGlobals_t& constructInstance)
{
} /* size: 0 */

// <00154FD8> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CFiberJobPool& constructInstance)
{
} /* size: 0 */

// <0015471A> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CFiber& constructInstance)
{
} /* size: 0 */

// <0009E3BB> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CCommandLine& constructInstance)
{
} /* size: 0 */

// <00025893> ../public/ordered_constructor.h:190
inline void DefaultConstruct(CAssertGlobals& constructInstance)
{
} /* size: 0 */

// <00003704> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<undefined_t, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class undefined_t * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(undefined_t& );
};

// <00003ABD> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<COrderedInitShutdownRefWrapper<EarlyInit_Common>, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class COrderedInitShutdownRefWrapper<EarlyInit_Common> * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(COrderedInitShutdownRefWrapper<EarlyInit_Common>& );
};

// <00003704> ../../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<undefined_t, false> {
	/* ../../public/ordered_constructor.h:274 */
	typedef class undefined_t * ReturnType_t;
	/* ../../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(undefined_t& );
};

// <00003ABD> ../../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<COrderedInitShutdownRefWrapper<EarlyInit_Common>, false> {
	/* ../../public/ordered_constructor.h:274 */
	typedef class COrderedInitShutdownRefWrapper<EarlyInit_Common> * ReturnType_t;
	/* ../../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(COrderedInitShutdownRefWrapper<EarlyInit_Common>& );
};

// <0000C8E5> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class COrderedInitShutdownRefWrapper<OrderedInit_Platform> * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(COrderedInitShutdownRefWrapper<OrderedInit_Platform>& );
};

// <00023ACC> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CAssertGlobals, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CAssertGlobals * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CAssertGlobals& );
};

// <0009BA70> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CCommandLine, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CCommandLine * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CCommandLine& );
};

// <001500A8> ../public/ordered_constructor.h:271
// member function: 1
// struct size: 1
class _CWrappedArrowOperatorHelper_Impl<FiberToolsOrderedConstructionGlobals_t, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class FiberToolsOrderedConstructionGlobals_t * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(FiberToolsOrderedConstructionGlobals_t& );
};

// <0015086F> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CFiberJobPool, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CFiberJobPool * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CFiberJobPool& );
};

// <0015119D> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CFiber, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CFiber * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CFiber& );
};

// <0028044E> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CLoggingSystem, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CLoggingSystem * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CLoggingSystem& );
};

// <0037E69A> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CBufferStringN<200>, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CBufferStringN<200> * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CBufferStringN<200>& );
};

// <0037F513> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CThreadKeyHolder, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CThreadKeyHolder * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CThreadKeyHolder& );
};

// <00396D47> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<SignalHandlerMemory_t, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class SignalHandlerMemory_t * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(SignalHandlerMemory_t& );
};

// <00487FA0> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CThreadFastMutex, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CThreadFastMutex * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CThreadFastMutex& );
};

// <004C7EAF> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CScopeCreatedOrDestroyedHandler * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CScopeCreatedOrDestroyedHandler& );
};

// <004C966A> ../public/ordered_constructor.h:271
// member function: 1
// struct size: 1
class _CWrappedArrowOperatorHelper_Impl<CConstructedMainThreadID, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CConstructedMainThreadID * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CConstructedMainThreadID& );
};

// <004C9D22> ../public/ordered_constructor.h:271
// member function: 1
// class size: 1
class _CWrappedArrowOperatorHelper_Impl<CThreadLocalScope, false> {
	/* ../public/ordered_constructor.h:274 */
	typedef class CThreadLocalScope * ReturnType_t;
	/* ../public/ordered_constructor.h:275 */
	ReturnType_t ArrowOperator(CThreadLocalScope& );
};

// <004CE7CC> ../public/ordered_constructor.h:275
inline void ArrowOperator(CConstructedMainThreadID& obj)
{
} /* size: 0 */

// <003A0482> ../public/ordered_constructor.h:275
inline void ArrowOperator(SignalHandlerMemory_t& obj)
{
} /* size: 0 */

// <00383D72> ../public/ordered_constructor.h:275
inline void ArrowOperator(CThreadKeyHolder& obj)
{
} /* size: 0 */

// <00025C5C> ../public/ordered_constructor.h:275
inline void ArrowOperator(CAssertGlobals& obj)
{
} /* size: 0 */

// <000058E1> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <000058C4> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004D26A5> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CThreadFastMutex>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004D2688> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004D2262> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004D2245> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004D1FA0> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004D1F83> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004D0C61> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CThreadLocalScope>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004D0C44> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <003A0D87> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <003A0D6A> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0038539D> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CBufferStringN<200> >::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00385380> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CBufferStringN<200> >::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0038506C> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0038504F> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <003846AB> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0038468E> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <002838AA> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CLoggingSystem>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0028388D> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CLoggingSystem>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <001587A0> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00158783> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00158376> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CFiberJobPool>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00158359> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CFiberJobPool>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0015828E> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CFiber>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00158271> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CFiber>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0009EFE3> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CCommandLine>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0009EFC6> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CCommandLine>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00026B63> ../public/ordered_constructor.h:325
void COrderedConstructor_DependencyManagement<CAssertGlobals>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00026B46> ../public/ordered_constructor.h:325
inline void COrderedConstructor_DependencyManagement<CAssertGlobals>::COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <000033D6> ../public/ordered_constructor.h:325
// member functions: 17
// member variables: 2
// struct size: 16
class COrderedConstructor_DependencyManagement<void> : public CManuallyConstructedClass<void>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<void> <ancestor>; */ /* 0 0 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<void>* OrderedPointer(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<void>* OrderedPointer(const COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:392 */
	void* operator&(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:432 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:433 */
	COrderedConstructor_DependencyManagement<void>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:440 */
	void InternalLock(COrderedConstructor_DependencyManagement<void>* , bool);
};

// <00003B07> ../public/ordered_constructor.h:325
// member functions: 19
// member variables: 2
// struct size: 24
class COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> > : public CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> > <ancestor>; */ /* 0 1 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 8 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* OrderedPointer(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* OrderedPointer(const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:392 */
	COrderedInitShutdownRefWrapper<EarlyInit_Common>* operator&(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* , bool);
	/* ../public/ordered_constructor.h:1167 */
	void InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* , COrderedConstructor_DependencyManagement<void>* & );
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
} __attribute__((__aligned__(8)));

// <000033D6> ../../public/ordered_constructor.h:325
// member functions: 17
// member variables: 2
// struct size: 16
class COrderedConstructor_DependencyManagement<void> : public CManuallyConstructedClass<void>, protected OrderedConstructor_TrackingData_t {
	/* ../../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<void> <ancestor>; */ /* 0 0 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 0 16 */
	/* ../../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<void>* OrderedPointer(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<void>* OrderedPointer(const COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:392 */
	void* operator&(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../../public/ordered_constructor.h:432 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:433 */
	COrderedConstructor_DependencyManagement<void>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<void>* );
	/* ../../public/ordered_constructor.h:440 */
	void InternalLock(COrderedConstructor_DependencyManagement<void>* , bool);
};

// <00003B07> ../../public/ordered_constructor.h:325
// member functions: 19
// member variables: 2
// struct size: 24
class COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> > : public CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >, protected OrderedConstructor_TrackingData_t {
	/* ../../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> > <ancestor>; */ /* 0 1 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 8 16 */
	/* ../../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* OrderedPointer(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* OrderedPointer(const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:392 */
	COrderedInitShutdownRefWrapper<EarlyInit_Common>* operator&(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
	/* ../../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* , bool);
	/* ../../public/ordered_constructor.h:1167 */
	void InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* , COrderedConstructor_DependencyManagement<void>* & );
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >* );
} __attribute__((__aligned__(8)));

// <0000B6E3> ../public/ordered_constructor.h:325
// member functions: 17
// member variables: 2
// struct size: 16
class COrderedConstructor_DependencyManagement<void> : public CManuallyConstructedClass<void>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<void> <ancestor>; */ /* 0 0 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<void>* OrderedPointer(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<void>* OrderedPointer(const COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:392 */
	void* operator&(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:432 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:433 */
	COrderedConstructor_DependencyManagement<void>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<void>* );
	/* ../public/ordered_constructor.h:440 */
	void InternalLock(COrderedConstructor_DependencyManagement<void>* , bool);
};

// <0000C92F> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 24
class COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> > : public CManuallyConstructedClass<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<COrderedInitShutdownRefWrapper<OrderedInit_Platform> > <ancestor>; */ /* 0 1 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 8 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* OrderedPointer(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* OrderedPointer(const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:392 */
	COrderedInitShutdownRefWrapper<OrderedInit_Platform>* operator&(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* , bool);
	/* ../public/ordered_constructor.h:1167 */
	void InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* , COrderedConstructor_DependencyManagement<void>* & );
} __attribute__((__aligned__(8)));

// <00023B16> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 544
class COrderedConstructor_DependencyManagement<CAssertGlobals> : public CManuallyConstructedClass<CAssertGlobals>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CAssertGlobals> <ancestor>; */ /* 0 528 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 528 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CAssertGlobals>* OrderedPointer(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CAssertGlobals>* OrderedPointer(const COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:392 */
	CAssertGlobals* operator&(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CAssertGlobals>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CAssertGlobals>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CAssertGlobals>* );
} __attribute__((__aligned__(8)));

// <0009BABA> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 72
class COrderedConstructor_DependencyManagement<CCommandLine> : public CManuallyConstructedClass<CCommandLine>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CCommandLine> <ancestor>; */ /* 0 56 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 56 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CCommandLine>* OrderedPointer(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CCommandLine>* OrderedPointer(const COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:392 */
	CCommandLine* operator&(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CCommandLine>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CCommandLine>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CCommandLine>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CCommandLine>* );
} __attribute__((__aligned__(8)));

// <001500F2> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 360
class COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t> : public CManuallyConstructedClass<FiberToolsOrderedConstructionGlobals_t>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<FiberToolsOrderedConstructionGlobals_t> <ancestor>; */ /* 0 344 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 344 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* OrderedPointer(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* OrderedPointer(const COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:392 */
	FiberToolsOrderedConstructionGlobals_t* operator&(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>* );
} __attribute__((__aligned__(8)));

// <001508B9> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 112
class COrderedConstructor_DependencyManagement<CFiberJobPool> : public CManuallyConstructedClass<CFiberJobPool>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CFiberJobPool> <ancestor>; */ /* 0 96 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 96 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CFiberJobPool>* OrderedPointer(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CFiberJobPool>* OrderedPointer(const COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:392 */
	CFiberJobPool* operator&(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CFiberJobPool>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CFiberJobPool>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CFiberJobPool>* );
} __attribute__((__aligned__(8)));

// <001511E7> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 320
class COrderedConstructor_DependencyManagement<CFiber> : public CManuallyConstructedClass<CFiber>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CFiber> <ancestor>; */ /* 0 304 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 304 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CFiber>* OrderedPointer(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CFiber>* OrderedPointer(const COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:392 */
	CFiber* operator&(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CFiber>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CFiber>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CFiber>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CFiber>* );
} __attribute__((__aligned__(8)));

// <00280498> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 54,512
class COrderedConstructor_DependencyManagement<CLoggingSystem> : public CManuallyConstructedClass<CLoggingSystem>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CLoggingSystem> <ancestor>; */ /* 0 54496 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 54496 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CLoggingSystem>* OrderedPointer(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CLoggingSystem>* OrderedPointer(const COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:392 */
	CLoggingSystem* operator&(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CLoggingSystem>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CLoggingSystem>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CLoggingSystem>* );
} __attribute__((__aligned__(8)));

// <0037E6E4> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 224
class COrderedConstructor_DependencyManagement<CBufferStringN<200> > : public CManuallyConstructedClass<CBufferStringN<200> >, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CBufferStringN<200> > <ancestor>; */ /* 0 208 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 208 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >* OrderedPointer(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CBufferStringN<200> >* OrderedPointer(const COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:392 */
	CBufferStringN<200>* operator&(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CBufferStringN<200> >* );
} __attribute__((__aligned__(8)));

// <0037F55D> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 24
class COrderedConstructor_DependencyManagement<CThreadKeyHolder> : public CManuallyConstructedClass<CThreadKeyHolder>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CThreadKeyHolder> <ancestor>; */ /* 0 8 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 8 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>* OrderedPointer(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CThreadKeyHolder>* OrderedPointer(const COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:392 */
	CThreadKeyHolder* operator&(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CThreadKeyHolder>* );
} __attribute__((__aligned__(8)));

// <0037FBF4> ../public/ordered_constructor.h:325
// member functions: 19
// member variables: 2
// struct size: 24
class COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> > : public CManuallyConstructedClass<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<COrderedInitShutdownRefWrapper<OrderedInit_Platform> > <ancestor>; */ /* 0 1 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 8 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* OrderedPointer(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* OrderedPointer(const COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:392 */
	COrderedInitShutdownRefWrapper<OrderedInit_Platform>* operator&(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* , bool);
	/* ../public/ordered_constructor.h:1167 */
	void InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* , COrderedConstructor_DependencyManagement<void>* & );
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >* );
} __attribute__((__aligned__(8)));

// <00396D91> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 13,544
class COrderedConstructor_DependencyManagement<SignalHandlerMemory_t> : public CManuallyConstructedClass<SignalHandlerMemory_t>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<SignalHandlerMemory_t> <ancestor>; */ /* 0 13528 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 13528 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* OrderedPointer(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* OrderedPointer(const COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:392 */
	SignalHandlerMemory_t* operator&(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>* );
} __attribute__((__aligned__(8)));

// <00487FEA> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 40
class COrderedConstructor_DependencyManagement<CThreadFastMutex> : public CManuallyConstructedClass<CThreadFastMutex>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CThreadFastMutex> <ancestor>; */ /* 0 24 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 24 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CThreadFastMutex>* OrderedPointer(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CThreadFastMutex>* OrderedPointer(const COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:392 */
	CThreadFastMutex* operator&(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CThreadFastMutex>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CThreadFastMutex>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CThreadFastMutex>* );
} __attribute__((__aligned__(8)));

// <004C7EF9> ../public/ordered_constructor.h:325
// member functions: 19
// member variables: 2
// struct size: 32
class COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler> : public CManuallyConstructedClass<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CThreadLocalScope::CScopeCreatedOrDestroyedHandler> <ancestor>; */ /* 0 16 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 16 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* OrderedPointer(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* OrderedPointer(const COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:392 */
	CScopeCreatedOrDestroyedHandler* operator&(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* );
	/* ../public/ordered_constructor.h:1167 */
	void InternalConstruct<void (&)(CThreadLocalScope*, bool)>(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* , void ()(CThreadLocalScope* , bool)& );
} __attribute__((__aligned__(8)));

// <004C96B4> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 24
class COrderedConstructor_DependencyManagement<CConstructedMainThreadID> : public CManuallyConstructedClass<CConstructedMainThreadID>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CConstructedMainThreadID> <ancestor>; */ /* 0 8 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 8 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* OrderedPointer(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* OrderedPointer(const COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:392 */
	CConstructedMainThreadID* operator&(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CConstructedMainThreadID>* );
} __attribute__((__aligned__(8)));

// <004C9D6C> ../public/ordered_constructor.h:325
// member functions: 18
// member variables: 2
// struct size: 72
class COrderedConstructor_DependencyManagement<CThreadLocalScope> : public CManuallyConstructedClass<CThreadLocalScope>, protected OrderedConstructor_TrackingData_t {
	/* ../public/ordered_constructor.h:395 */
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 33554431,
		INTERNAL_IS_CONSTRUCTED = 33554432,
		INTERNAL_WRAPPER_HOLDS_REF = 67108864,
		INTERNAL_WRAPPER_CONSTRUCTED = 134217728,
		INTERNAL_WRAPPER_DESTRUCTED = 268435456,
		INTERNAL_CONSTRUCTOR_ALLOWED = 536870912,
		INTERNAL_TOUCHED = 1073741824,
		INTERNAL_LOCKED = 2147483648,
	};
	/* ../public/ordered_constructor.h:325 */
	using ::InternalDestruct;
public:
	/* class CManuallyConstructedClass<CThreadLocalScope> <ancestor>; */ /* 0 56 */
protected:
	/* struct OrderedConstructor_TrackingData_t <ancestor>; */ /* 56 16 */
	/* ../public/ordered_constructor.h:1071 */
	void ~COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:1100 */
	void Release(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:1081 */
	bool PrematurelyReleaseWrapperInstanceRef(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:1139 */
	void Touch(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:329 */
	typedef BaseType BaseType;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/ordered_constructor.h:344 */
	BaseType& GetRaw(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:356 */
	const BaseType& GetRaw(const COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:370 */
	bool IsConstructed(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:375 */
	bool WrapperHasDestructed(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:381 */
	COrderedConstructor_DependencyManagement<CThreadLocalScope>* OrderedPointer(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:382 */
	const COrderedConstructor_DependencyManagement<CThreadLocalScope>* OrderedPointer(const COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:391 */
	ReturnType_t operator->(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:392 */
	CThreadLocalScope* operator&(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:1182 */
	void StaticRelease(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1193 */
	COrderedSystem_DependencyManagement* ToGenericDependencyManagement(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:1199 */
	COrderedConstructor_DependencyManagement<CThreadLocalScope>* FromGenericDependencyManagement(COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:1152 */
	void ReleaseDependencies(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
	/* ../public/ordered_constructor.h:1206 */
	void InternalLock(COrderedConstructor_DependencyManagement<CThreadLocalScope>* , bool);
	void COrderedConstructor_DependencyManagement(COrderedConstructor_DependencyManagement<CThreadLocalScope>* );
} __attribute__((__aligned__(8)));

// <004CE485> ../public/ordered_constructor.h:344
// variables: 2
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw()
{
	const char   __FUNCTION__; // 5355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 1 */

// <004CD625> ../public/ordered_constructor.h:344
// variables: 2
inline void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::GetRaw()
{
	const char   __FUNCTION__; // 5355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 1 */

// <0039FD6C> ../public/ordered_constructor.h:344
// variables: 2
inline void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::GetRaw()
{
	const char   __FUNCTION__; // 15410
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 1 */

// <0038266B> ../public/ordered_constructor.h:344
// variables: 2
inline void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::GetRaw()
{
	const char   __FUNCTION__; // 25905
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 1 */

// <00282513> ../public/ordered_constructor.h:344
// variables: 2
inline void COrderedConstructor_DependencyManagement<CLoggingSystem>::GetRaw()
{
	const char   __FUNCTION__; // 25561
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 1 */

// <00155900> ../public/ordered_constructor.h:344
// variables: 2
inline void COrderedConstructor_DependencyManagement<CFiberJobPool>::GetRaw()
{
	const char   __FUNCTION__; // 32984
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 1 */

// <00154212> ../public/ordered_constructor.h:344
// variables: 2
inline void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::GetRaw()
{
	const char   __FUNCTION__; // 32984
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 1 */

// <0009E451> ../public/ordered_constructor.h:344
// variables: 2
inline void COrderedConstructor_DependencyManagement<CCommandLine>::GetRaw()
{
	const char   __FUNCTION__; // 7268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 1 */

// <004D0BE9> ../public/ordered_constructor.h:370
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::IsConstructed()
{
} /* size: 0 */

// <00026916> ../public/ordered_constructor.h:370
inline void COrderedConstructor_DependencyManagement<void>::IsConstructed()
{
} /* size: 0 */

// <00005A57> ../public/ordered_constructor.h:381
inline void COrderedConstructor_DependencyManagement<void>::OrderedPointer()
{
} /* size: 0 */

// <00003766> ../public/ordered_constructor.h:452
// struct size: 1
struct _COrderedConstructor_TrackingDataOffsetHelper<void> {
	/* ../public/ordered_constructor.h:455 */
	enum {
		GENERIC_DEPENDENCY_OFFSET = 0,
	};
};

// <00003766> ../../public/ordered_constructor.h:452
// struct size: 1
struct _COrderedConstructor_TrackingDataOffsetHelper<void> {
	/* ../../public/ordered_constructor.h:455 */
	enum {
		GENERIC_DEPENDENCY_OFFSET = 0,
	};
};

// <00004591> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void ~COrderedConstructor_Create(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this)
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <00004574> ../public/ordered_constructor.h:470
inline void ~COrderedConstructor_Create(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this)
{
} /* size: 0 */

// <004CD1D5> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <004CD1B8> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <004CD018> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void ~COrderedConstructor_Create(const COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScop this)
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <004CCFFB> ../public/ordered_constructor.h:470
inline void ~COrderedConstructor_Create(const COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScop this)
{
} /* size: 0 */

// <004CCE5B> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <004CCE3E> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <004CCC9E> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void ~COrderedConstructor_Create(const COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_Main this)
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <004CCC81> ../public/ordered_constructor.h:470
inline void ~COrderedConstructor_Create(const COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_Main this)
{
} /* size: 0 */

// <004CCAE1> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <004CCAC4> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <0048A6AC> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <0048A68F> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <0048A4EE> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <0048A4D1> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <0039FACD> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 52, inline expansions: 4 (90 bytes) */

// <0039FAB0> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <00381C57> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 52, inline expansions: 4 (90 bytes) */

// <00381C3A> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <00381A93> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <00381A76> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <003818CF> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void ~COrderedConstructor_Create(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitSh this)
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <003818B2> ../public/ordered_constructor.h:470
inline void ~COrderedConstructor_Create(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitSh this)
{
} /* size: 0 */

// <002C6514> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <002C64F6> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <00281E06> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void ~COrderedConstructor_Create(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this)
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CLoggingSystem>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 52, inline expansions: 4 (90 bytes) */

// <00281DE9> ../public/ordered_constructor.h:470
inline void ~COrderedConstructor_Create(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this)
{
} /* size: 0 */

// <00281C41> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <00281C24> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <0015F355> ../public/ordered_constructor.h:470
void COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <0015F338> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <00153284> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 52, inline expansions: 4 (90 bytes) */

// <00153267> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <001530C0> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CFiberJobPool>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CFiberJobPool>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <001530A3> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <00152D08> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <00152CEB> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <0009D61C> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CCommandLine>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CCommandLine>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <0009D5FF> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <0009D459> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <0009D43C> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <00024F61> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CAssertGlobals>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CAssertGlobals>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 52, inline expansions: 4 (90 bytes) */

// <00024F44> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <0000D4A0> ../public/ordered_constructor.h:470
// variable: 1
// function calls: 6
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>::~COrderedConstructor_Create()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement(); // 470
} /* size: 44, inline expansions: 4 (72 bytes) */

// <0000D483> ../public/ordered_constructor.h:470
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>::~COrderedConstructor_Create()
{
} /* size: 0 */

// <00003E3F> ../public/ordered_constructor.h:470
// member functions: 10
// member variable: 1
// struct size: 24
class COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefWrapper<EarlyInit_Common>, _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common> >, false> : public COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> > {
public:
	/* class COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> > <ancestor>; */ /* 0 24 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW, bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW, bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW OrderedPointer(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo OrderedPointer(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo);
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	/* ../public/ordered_constructor.h:528 */
	COrderedInitShutdownRefWrapper<EarlyInit_Common>* operator&(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	void ~COrderedConstructor_Create(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
} __attribute__((__aligned__(8)));

// <00003E3F> ../../public/ordered_constructor.h:470
// member functions: 10
// member variable: 1
// struct size: 24
class COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefWrapper<EarlyInit_Common>, _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common> >, false> : public COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> > {
public:
	/* class COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> > <ancestor>; */ /* 0 24 */
	/* ../../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW, bool);
	/* ../../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW, bool);
	/* ../../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	/* ../../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	/* ../../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW OrderedPointer(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	/* ../../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo OrderedPointer(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo);
	/* ../../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	/* ../../public/ordered_constructor.h:528 */
	COrderedInitShutdownRefWrapper<EarlyInit_Common>* operator&(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
private:
	/* ../../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
	void ~COrderedConstructor_Create(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefW);
} __attribute__((__aligned__(8)));

// <0000BC52> ../public/ordered_constructor.h:470
// member functions: 9
// member variable: 1
// struct size: 24
class COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<OrderedInit_Platform> >, false> : public COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> > {
public:
	/* class COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> > <ancestor>; */ /* 0 24 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown, bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown, bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown);
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown);
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown OrderedPointer(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown);
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitSh OrderedPointer(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitSh);
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown);
	/* ../public/ordered_constructor.h:528 */
	COrderedInitShutdownRefWrapper<OrderedInit_Platform>* operator&(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown);
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdown);
} __attribute__((__aligned__(8)));

// <0000BDCB> ../public/ordered_constructor.h:470
// member functions: 9
// member variable: 1
// struct size: 16
class COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false> : public COrderedConstructor_DependencyManagement<void> {
public:
	/* class COrderedConstructor_DependencyManagement<void> <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* OrderedPointer(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* OrderedPointer(const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* );
	/* ../public/ordered_constructor.h:528 */
	void* operator&(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>* );
};

// <0000BF39> ../public/ordered_constructor.h:470
// member functions: 9
// member variable: 1
// struct size: 16
class COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false> : public COrderedConstructor_DependencyManagement<void> {
public:
	/* class COrderedConstructor_DependencyManagement<void> <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* OrderedPointer(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* OrderedPointer(const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* );
	/* ../public/ordered_constructor.h:528 */
	void* operator&(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>* );
};

// <0000C0A7> ../public/ordered_constructor.h:470
// member functions: 9
// member variable: 1
// struct size: 16
class COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false> : public COrderedConstructor_DependencyManagement<void> {
public:
	/* class COrderedConstructor_DependencyManagement<void> <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* OrderedPointer(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* OrderedPointer(const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* );
	/* ../public/ordered_constructor.h:528 */
	void* operator&(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>* );
};

// <0000C215> ../public/ordered_constructor.h:470
// member functions: 9
// member variable: 1
// struct size: 16
class COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false> : public COrderedConstructor_DependencyManagement<void> {
public:
	/* class COrderedConstructor_DependencyManagement<void> <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* OrderedPointer(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* OrderedPointer(const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:528 */
	void* operator&(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>* );
};

// <0000C383> ../public/ordered_constructor.h:470
// member functions: 9
// member variable: 1
// struct size: 16
class COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false> : public COrderedConstructor_DependencyManagement<void> {
public:
	/* class COrderedConstructor_DependencyManagement<void> <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* OrderedPointer(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* OrderedPointer(const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* );
	/* ../public/ordered_constructor.h:528 */
	void* operator&(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>* );
};

// <0000C4F1> ../public/ordered_constructor.h:470
// member functions: 9
// member variable: 1
// struct size: 16
class COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false> : public COrderedConstructor_DependencyManagement<void> {
public:
	/* class COrderedConstructor_DependencyManagement<void> <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* OrderedPointer(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* OrderedPointer(const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* );
	/* ../public/ordered_constructor.h:528 */
	void* operator&(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>* );
};

// <0000CCEF> ../public/ordered_constructor.h:470
// member functions: 10
// member variable: 1
// struct size: 16
class COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false> : public COrderedConstructor_DependencyManagement<void> {
public:
	/* class COrderedConstructor_DependencyManagement<void> <ancestor>; */ /* 0 16 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* OrderedPointer(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* OrderedPointer(const COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* );
	/* ../public/ordered_constructor.h:528 */
	void* operator&(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* );
	void ~COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>* );
};

// <000236E2> ../public/ordered_constructor.h:470
// member functions: 11
// member variable: 1
// struct size: 544
class COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true> : public COrderedConstructor_DependencyManagement<CAssertGlobals> {
public:
	/* class COrderedConstructor_DependencyManagement<CAssertGlobals> <ancestor>; */ /* 0 544 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* OrderedPointer(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* OrderedPointer(const COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:528 */
	CAssertGlobals* operator&(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>* );
} __attribute__((__aligned__(8)));

// <0009B67F> ../public/ordered_constructor.h:470
// member functions: 11
// member variable: 1
// struct size: 72
class COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false> : public COrderedConstructor_DependencyManagement<CCommandLine> {
public:
	/* class COrderedConstructor_DependencyManagement<CCommandLine> <ancestor>; */ /* 0 72 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* OrderedPointer(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* OrderedPointer(const COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:528 */
	CCommandLine* operator&(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>* );
} __attribute__((__aligned__(8)));

// <0014FC8A> ../public/ordered_constructor.h:470
// member functions: 12
// member variable: 1
// struct size: 360
class COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false> : public COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t> {
public:
	/* class COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t> <ancestor>; */ /* 0 360 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* OrderedPointer(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* OrderedPointer(const COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:528 */
	FiberToolsOrderedConstructionGlobals_t* operator&(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:523 */
	FiberToolsOrderedConstructionGlobals_t& operator FiberToolsOrderedConstructionGlobals_t&<FiberToolsOrderedConstructionGlobals_t>(COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>* );
} __attribute__((__aligned__(8)));

// <00150C13> ../public/ordered_constructor.h:470
// member functions: 11
// member variable: 1
// struct size: 112
class COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false> : public COrderedConstructor_DependencyManagement<CFiberJobPool> {
public:
	/* class COrderedConstructor_DependencyManagement<CFiberJobPool> <ancestor>; */ /* 0 112 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* OrderedPointer(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* OrderedPointer(const COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
	/* ../public/ordered_constructor.h:528 */
	CFiberJobPool* operator&(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>* );
} __attribute__((__aligned__(8)));

// <00150DF6> ../public/ordered_constructor.h:470
// member functions: 10
// member variable: 1
// struct size: 320
class COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false> : public COrderedConstructor_DependencyManagement<CFiber> {
public:
	/* class COrderedConstructor_DependencyManagement<CFiber> <ancestor>; */ /* 0 320 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* OrderedPointer(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* OrderedPointer(const COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:528 */
	CFiber* operator&(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* );
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>* );
} __attribute__((__aligned__(8)));

// <002807F6> ../public/ordered_constructor.h:470
// member functions: 11
// member variable: 1
// struct size: 54,512
class COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> : public COrderedConstructor_DependencyManagement<CLoggingSystem> {
public:
	/* class COrderedConstructor_DependencyManagement<CLoggingSystem> <ancestor>; */ /* 0 54512 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* OrderedPointer(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> OrderedPointer(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:528 */
	CLoggingSystem* operator&(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false>* );
} __attribute__((__aligned__(8)));

// <0037E2D7> ../public/ordered_constructor.h:470
// member functions: 10
// member variable: 1
// struct size: 224
class COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false> : public COrderedConstructor_DependencyManagement<CBufferStringN<200> > {
public:
	/* class COrderedConstructor_DependencyManagement<CBufferStringN<200> > <ancestor>; */ /* 0 224 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* OrderedPointer(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* OrderedPointer(const COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:528 */
	CBufferStringN<200>* operator&(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* );
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>* );
} __attribute__((__aligned__(8)));

// <0037F147> ../public/ordered_constructor.h:470
// member functions: 11
// member variable: 1
// struct size: 24
class COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false> : public COrderedConstructor_DependencyManagement<CThreadKeyHolder> {
public:
	/* class COrderedConstructor_DependencyManagement<CThreadKeyHolder> <ancestor>; */ /* 0 24 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* OrderedPointer(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* OrderedPointer(const COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:528 */
	CThreadKeyHolder* operator&(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>* );
} __attribute__((__aligned__(8)));

// <0039695D> ../public/ordered_constructor.h:470
// member functions: 11
// member variable: 1
// struct size: 13,544
class COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false> : public COrderedConstructor_DependencyManagement<SignalHandlerMemory_t> {
public:
	/* class COrderedConstructor_DependencyManagement<SignalHandlerMemory_t> <ancestor>; */ /* 0 13544 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* OrderedPointer(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* OrderedPointer(const COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:528 */
	SignalHandlerMemory_t* operator&(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>* );
} __attribute__((__aligned__(8)));

// <00487BD1> ../public/ordered_constructor.h:470
// member functions: 11
// member variable: 1
// struct size: 40
class COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true> : public COrderedConstructor_DependencyManagement<CThreadFastMutex> {
public:
	/* class COrderedConstructor_DependencyManagement<CThreadFastMutex> <ancestor>; */ /* 0 40 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* OrderedPointer(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* OrderedPointer(const COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:528 */
	CThreadFastMutex* operator&(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>* );
} __attribute__((__aligned__(8)));

// <004C7218> ../public/ordered_constructor.h:470
// member functions: 13
// member variable: 1
// struct size: 40
class COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false> : public COrderedConstructor_DependencyManagement<CThreadFastMutex> {
public:
	/* class COrderedConstructor_DependencyManagement<CThreadFastMutex> <ancestor>; */ /* 0 40 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* OrderedPointer(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* OrderedPointer(const COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:528 */
	CThreadFastMutex* operator&(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:523 */
	CThreadFastMutex& operator CThreadFastMutex&<CThreadFastMutex>(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:523 */
	const CThreadFastMutex& operator const CThreadFastMutex&<const CThreadFastMutex>(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>* );
} __attribute__((__aligned__(8)));

// <004C8286> ../public/ordered_constructor.h:470
// member functions: 10
// member variable: 1
// struct size: 32
class COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, ResolveOrderedConstructor_ThreadCreationEventHandler_ThreadID>, false> : public COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler> {
public:
	/* class COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler> <ancestor>; */ /* 0 32 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc, bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc, bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc);
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc);
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc OrderedPointer(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc);
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScop OrderedPointer(const COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScop);
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc);
	/* ../public/ordered_constructor.h:528 */
	CScopeCreatedOrDestroyedHandler* operator&(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc);
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc);
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CSc);
} __attribute__((__aligned__(8)));

// <004C929E> ../public/ordered_constructor.h:470
// member functions: 11
// member variable: 1
// struct size: 24
class COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false> : public COrderedConstructor_DependencyManagement<CConstructedMainThreadID> {
public:
	/* class COrderedConstructor_DependencyManagement<CConstructedMainThreadID> <ancestor>; */ /* 0 24 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* , bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* OrderedPointer(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* OrderedPointer(const COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:528 */
	CConstructedMainThreadID* operator&(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:475 */
	typedef BaseType BaseType;
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
	/* ../public/ordered_constructor.h:493 */
	BaseType& GetRaw<>(COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>* );
} __attribute__((__aligned__(8)));

// <004CA072> ../public/ordered_constructor.h:470
// member functions: 10
// member variable: 1
// struct size: 72
class COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThreadThreadLocalConstructionScope>, false> : public COrderedConstructor_DependencyManagement<CThreadLocalScope> {
public:
	/* class COrderedConstructor_DependencyManagement<CThreadLocalScope> <ancestor>; */ /* 0 72 */
	/* ../public/ordered_constructor.h:1242 */
	void COrderedConstructor_Create(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread, bool);
	/* ../public/ordered_constructor.h:1256 */
	void AddRef(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread, bool);
	/* ../public/ordered_constructor.h:1381 */
	bool AddRefIfAlreadyConstructed(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread);
	/* ../public/ordered_constructor.h:1398 */
	void ConstructIfNotConstructed(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread);
	/* ../public/ordered_constructor.h:517 */
	COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread OrderedPointer(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread);
	/* ../public/ordered_constructor.h:518 */
	const COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_Main OrderedPointer(const COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_Main);
	/* ../public/ordered_constructor.h:527 */
	ReturnType_t operator->(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread);
	/* ../public/ordered_constructor.h:528 */
	CThreadLocalScope* operator&(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread);
private:
	/* ../public/ordered_constructor.h:531 */
	void InternalGetRawAutomaticReference(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread);
	void ~COrderedConstructor_Create(COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThread);
} __attribute__((__aligned__(8)));

// <004D0BC5> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>()
{
} /* size: 0 */

// <004CE7EA> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::GetRaw<>()
{
} /* size: 0 */

// <0048BE6F> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>::GetRaw<>()
{
} /* size: 0 */

// <003A04A0> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::GetRaw<>()
{
} /* size: 0 */

// <00383D90> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::GetRaw<>()
{
} /* size: 0 */

// <00282E11> ../public/ordered_constructor.h:493
inline void GetRaw<>(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this)
{
} /* size: 0 */

// <00157F44> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>::GetRaw<>()
{
} /* size: 0 */

// <00155AC3> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::GetRaw<>()
{
} /* size: 0 */

// <0009EF60> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>::GetRaw<>()
{
} /* size: 0 */

// <00025C7A> ../public/ordered_constructor.h:493
inline void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>()
{
} /* size: 0 */

// <004D2440> ../public/ordered_constructor.h:523
inline void operator const CThreadFastMutex&<const COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::CThreadFastMutex>()
{
} /* size: 0 */

// <004CF582> ../public/ordered_constructor.h:523
inline void operator COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::CThreadFastMutex&<CThreadFastMutex>()
{
} /* size: 0 */

// <001581DD> ../public/ordered_constructor.h:523
inline void operator COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::FiberToolsOrderedConstructionGlobals_t&<FiberToolsOrderedConstructionGlobals_t>()
{
} /* size: 0 */

// <004D1F28> ../public/ordered_constructor.h:527
inline void COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::operator->()
{
} /* size: 0 */

// <003A0D0F> ../public/ordered_constructor.h:527
inline void COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::operator->()
{
} /* size: 0 */

// <00384F78> ../public/ordered_constructor.h:527
inline void COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::operator->()
{
} /* size: 0 */

// <00026ABB> ../public/ordered_constructor.h:527
inline void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->()
{
} /* size: 0 */

// <0048B4F2> ../public/ordered_constructor.h:531
// variable: 1
inline void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference()
{
	int nRefCount; // 533
} /* size: 0, variables: 1 */

// <0002FD97> ../public/ordered_constructor.h:531
// variable: 1
void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference()
{
	int nRefCount; // 533
} /* size: 42, variables: 1 */

// <000251FF> ../public/ordered_constructor.h:531
// variable: 1
inline void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference()
{
	int nRefCount; // 533
} /* size: 0, variables: 1 */

// <0001DD18> ../public/ordered_constructor.h:575
// member function: 1
// class size: 1
class COrderedResolve_NoResolve {
	/* ../public/ordered_constructor.h:578 */
	void ResolveDependencies<COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true> >(const COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>& );
};

// <004CE6D6> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false> >(const COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false> &)
{
} /* size: 0 */

// <004CE575> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false> >(const COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false> &)
{
} /* size: 0 */

// <0048B3E3> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true> >(const COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true> &)
{
} /* size: 0 */

// <003A03DB> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false> >(const COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false> &)
{
} /* size: 0 */

// <00383CDF> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false> >(const COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false> &)
{
} /* size: 0 */

// <00382CDE> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false> >(const COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false> &)
{
} /* size: 0 */

// <00155603> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false> >(const COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false> &)
{
} /* size: 0 */

// <00154750> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false> >(const COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false> &)
{
} /* size: 0 */

// <0009E3D8> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false> >(const COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false> &)
{
} /* size: 0 */

// <000258C9> ../public/ordered_constructor.h:578
inline void ResolveDependencies<COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true> >(const COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true> &)
{
} /* size: 0 */

// <0000401A> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<COrderedInitShutdownRefWrapper<EarlyInit_Common>, _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common> > {
	static const void (*ResolveDependencies)(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& ); /* 0 0* /
};

// <0000CE93> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<OrderedInit_Platform> > {
	static const void (*ResolveDependencies)(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >& ); /* 0 0* /
};

// <0000CEDD> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine> {
	static const void (*ResolveDependencies)(COrderedSystem_DependencyManagement& ); /* 0 0* /
};

// <0000CF23> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools> {
	static const void (*ResolveDependencies)(COrderedSystem_DependencyManagement& ); /* 0 0* /
};

// <0000CF4D> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools> {
	static const void (*ResolveDependencies)(COrderedSystem_DependencyManagement& ); /* 0 0* /
};

// <0000CF77> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem> {
	static const void (*ResolveDependencies)(COrderedSystem_DependencyManagement& ); /* 0 0* /
};

// <0000CFA1> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem> {
	static const void (*ResolveDependencies)(COrderedSystem_DependencyManagement& ); /* 0 0* /
};

// <0000CFCB> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools> {
	static const void (*ResolveDependencies)(COrderedSystem_DependencyManagement& ); /* 0 0* /
};

// <0000CFF5> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0> {
	static const void (*ResolveDependencies)(COrderedSystem_DependencyManagement& ); /* 0 0* /
};

// <001519BB> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc> {
	static const void (*ResolveDependencies)(COrderedConstructor_DependencyManagement<CFiberJobPool>& ); /* 0 0* /
};

// <002809DA> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// class size: 1
class CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem> {
	static const void (*ResolveDependencies)(COrderedConstructor_DependencyManagement<CLoggingSystem>& ); /* 0 0* /
};

// <004CA70E> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// struct size: 1
class CResolveOrderedFunc<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, ResolveOrderedConstructor_ThreadCreationEventHandler_ThreadID> {
	static const void (*ResolveDependencies)(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>& ); /* 0 0* /
};

// <004CA7B6> ../public/ordered_constructor.h:596
// member function: 1
// static member variable: 1
// struct size: 1
class CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThreadThreadLocalConstructionScope> {
	static const void (*ResolveDependencies)(COrderedConstructor_DependencyManagement<CThreadLocalScope>& ); /* 0 0* /
};

// <000037A2> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<COrderedInitShutdownRefWrapper<EarlyInit_Common>, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<COrderedInitShutdownRefWrapper<EarlyInit_Common>, false>* );
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefWrapper<EarlyInit_Common>, _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common> >, false> UseFunc;
};

// <000037A2> ../../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<COrderedInitShutdownRefWrapper<EarlyInit_Common>, false> {
private:
	/* ../../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<COrderedInitShutdownRefWrapper<EarlyInit_Common>, false>* );
	/* ../../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdownRefWrapper<EarlyInit_Common>, _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common> >, false> UseFunc;
};

// <0000BACB> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<void, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<void, false>* );
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false> UseFunc;
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false> UseFunc;
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false> UseFunc;
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false> UseFunc;
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false> UseFunc;
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false> UseFunc;
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false> UseFunc;
};

// <0000BBF3> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, false>* );
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<OrderedInit_Platform> >, false> UseFunc;
};

// <00023690> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CAssertGlobals, true> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CAssertGlobals, true>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true> NoResolve;
};

// <0009B62D> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CCommandLine, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CCommandLine, false>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false> NoResolve;
};

// <0014FC37> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<FiberToolsOrderedConstructionGlobals_t, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<FiberToolsOrderedConstructionGlobals_t, false>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false> NoResolve;
};

// <00150BBF> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CFiberJobPool, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CFiberJobPool, false>* );
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false> UseFunc;
};

// <002807A2> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CLoggingSystem, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CLoggingSystem, false>* );
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> UseFunc;
};

// <0037E284> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CBufferStringN<200>, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CBufferStringN<200>, false>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false> NoResolve;
};

// <0037F0F4> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CThreadKeyHolder, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CThreadKeyHolder, false>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false> NoResolve;
};

// <0039690A> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<SignalHandlerMemory_t, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<SignalHandlerMemory_t, false>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false> NoResolve;
};

// <00487B7F> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CThreadFastMutex, true> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CThreadFastMutex, true>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true> NoResolve;
};

// <004C71C5> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CThreadFastMutex, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CThreadFastMutex, false>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false> NoResolve;
};

// <004C8231> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, false>* );
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, ResolveOrderedConstructor_ThreadCreationEventHandler_ThreadID>, false> UseFunc;
};

// <004C924B> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CConstructedMainThreadID, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CConstructedMainThreadID, false>* );
	/* ../public/ordered_constructor.h:842 */
	typedef struct COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false> NoResolve;
};

// <004C9AB1> ../public/ordered_constructor.h:833
// member function: 1
// struct size: 1
class COrderedConstructor<CThreadLocalScope, false> {
private:
	/* ../public/ordered_constructor.h:877 */
	void COrderedConstructor(COrderedConstructor<CThreadLocalScope, false>* );
	/* ../public/ordered_constructor.h:848 */
	typedef struct COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_MainThreadThreadLocalConstructionScope>, false> UseFunc;
};

// <0000391C> ../public/ordered_constructor.h:929
// member functions: 4
// class size: 1
class COrderedInitShutdownRefWrapper<EarlyInit_Common> {
	/* ../public/ordered_constructor.h:932 */
	void COrderedInitShutdownRefWrapper(COrderedInitShutdownRefWrapper<EarlyInit_Common>* , COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:933 */
	void ~COrderedInitShutdownRefWrapper(COrderedInitShutdownRefWrapper<EarlyInit_Common>* );
	void COrderedInitShutdownRefWrapper(class COrderedInitShutdownRefWrapper<EarlyInit_Common> *, COrderedSystem_DependencyManagement *); /* linkage=_ZN30COrderedInitShutdownRefWrapperIXadL_Z16EarlyInit_CommonbR40COrderedConstructor_DependencyManagementIvEEEEC4EPS1_ */
	void ~COrderedInitShutdownRefWrapper(class COrderedInitShutdownRefWrapper<EarlyInit_Common> *); /* linkage=_ZN30COrderedInitShutdownRefWrapperIXadL_Z16EarlyInit_CommonbR40COrderedConstructor_DependencyManagementIvEEEED4Ev */
};

// <0000391C> ../../public/ordered_constructor.h:929
// member functions: 4
// class size: 1
class COrderedInitShutdownRefWrapper<EarlyInit_Common> {
	/* ../../public/ordered_constructor.h:932 */
	void COrderedInitShutdownRefWrapper(COrderedInitShutdownRefWrapper<EarlyInit_Common>* , COrderedSystem_DependencyManagement* );
	/* ../../public/ordered_constructor.h:933 */
	void ~COrderedInitShutdownRefWrapper(COrderedInitShutdownRefWrapper<EarlyInit_Common>* );
	void COrderedInitShutdownRefWrapper(class COrderedInitShutdownRefWrapper<EarlyInit_Common> *, COrderedSystem_DependencyManagement *); /* linkage=_ZN30COrderedInitShutdownRefWrapperIXadL_Z16EarlyInit_CommonbR40COrderedConstructor_DependencyManagementIvEEEEC4EPS1_ */
	void ~COrderedInitShutdownRefWrapper(class COrderedInitShutdownRefWrapper<EarlyInit_Common> *); /* linkage=_ZN30COrderedInitShutdownRefWrapperIXadL_Z16EarlyInit_CommonbR40COrderedConstructor_DependencyManagementIvEEEED4Ev */
};

// <0000C76B> ../public/ordered_constructor.h:929
// member functions: 4
// class size: 1
class COrderedInitShutdownRefWrapper<OrderedInit_Platform> {
	/* ../public/ordered_constructor.h:932 */
	void COrderedInitShutdownRefWrapper(COrderedInitShutdownRefWrapper<OrderedInit_Platform>* , COrderedSystem_DependencyManagement* );
	/* ../public/ordered_constructor.h:933 */
	void ~COrderedInitShutdownRefWrapper(COrderedInitShutdownRefWrapper<OrderedInit_Platform>* );
	void COrderedInitShutdownRefWrapper(class COrderedInitShutdownRefWrapper<OrderedInit_Platform> *, COrderedSystem_DependencyManagement *); /* linkage=_ZN30COrderedInitShutdownRefWrapperIXadL_Z20OrderedInit_PlatformbR40COrderedConstructor_DependencyManagementIvEEEEC4EPS1_ */
	void ~COrderedInitShutdownRefWrapper(class COrderedInitShutdownRefWrapper<OrderedInit_Platform> *); /* linkage=_ZN30COrderedInitShutdownRefWrapperIXadL_Z20OrderedInit_PlatformbR40COrderedConstructor_DependencyManagementIvEEEED4Ev */
};

// <0000478F> ../public/ordered_constructor.h:932
void COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(COrderedSystem_DependencyManagement* pOwnerAsGeneric)
{
} /* size: 0 */

// <00004769> ../public/ordered_constructor.h:932
inline void COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(COrderedSystem_DependencyManagement* pOwnerAsGeneric)
{
} /* size: 0 */

// <00381E79> ../public/ordered_constructor.h:932
void COrderedInitShutdownRefWrapper<OrderedInit_Platform>::COrderedInitShutdownRefWrapper(COrderedSystem_DependencyManagement* pOwnerAsGeneric)
{
} /* size: 0 */

// <00381E53> ../public/ordered_constructor.h:932
inline void COrderedInitShutdownRefWrapper<OrderedInit_Platform>::COrderedInitShutdownRefWrapper(COrderedSystem_DependencyManagement* pOwnerAsGeneric)
{
} /* size: 0 */

// <00004752> ../public/ordered_constructor.h:933
void COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper()
{
} /* size: 0 */

// <00004739> ../public/ordered_constructor.h:933
inline void COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper()
{
} /* size: 0 */

// <00381E3C> ../public/ordered_constructor.h:933
void COrderedInitShutdownRefWrapper<OrderedInit_Platform>::~COrderedInitShutdownRefWrapper()
{
} /* size: 0 */

// <00381E23> ../public/ordered_constructor.h:933
inline void COrderedInitShutdownRefWrapper<OrderedInit_Platform>::~COrderedInitShutdownRefWrapper()
{
} /* size: 0 */

// <0000596B> ../public/ordered_constructor.h:937
// variable: 1
inline void _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner)
{
	COrderedSystem_DependencyManagement* pAsGeneric; // 939
} /* size: 0, variables: 1 */

// <0000F782> ../public/ordered_constructor.h:937
// variable: 1
inline void _ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<OrderedInit_Platform>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >& owner)
{
	COrderedSystem_DependencyManagement* pAsGeneric; // 939
} /* size: 0, variables: 1 */

// <0001DD8D> ../public/ordered_constructor.h:980
// member functions: 7
// member variables: 2
// class size: 16
class COrderedReferenceScope {
	/* ../public/ordered_constructor.h:992 */
	void ~COrderedReferenceScope(COrderedReferenceScope* );
private:
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	/* ../public/ordered_constructor.h:984 */
	void COrderedReferenceScope<CAssertGlobals, COrderedResolve_NoResolve, true>(COrderedReferenceScope* , COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>& );
	void ~COrderedReferenceScope(class COrderedReferenceScope *); /* linkage=_ZN22COrderedReferenceScopeD4Ev */
	void COrderedReferenceScope<CAssertGlobals, COrderedResolve_NoResolve, true>(class COrderedReferenceScope *, class COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true> &); /* linkage=_ZN22COrderedReferenceScopeC4I14CAssertGlobals25COrderedResolve_NoResolveLb1EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
	void COrderedReferenceScope<CThreadKeyHolder, COrderedResolve_NoResolve, false>(class COrderedReferenceScope *, class COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false> &); /* linkage=_ZN22COrderedReferenceScopeC4I16CThreadKeyHolder25COrderedResolve_NoResolveLb0EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
	void COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, false>(class COrderedReferenceScope *, class COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false> &); /* linkage=_ZN22COrderedReferenceScopeC4I16CThreadFastMutex25COrderedResolve_NoResolveLb0EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
};

// <0037E0B5> ../public/ordered_constructor.h:980
// member functions: 7
// member variables: 2
// class size: 16
class COrderedReferenceScope {
	/* ../public/ordered_constructor.h:992 */
	void ~COrderedReferenceScope(COrderedReferenceScope* );
private:
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	/* ../public/ordered_constructor.h:984 */
	void COrderedReferenceScope<CThreadKeyHolder, COrderedResolve_NoResolve, false>(COrderedReferenceScope* , COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>& );
	void ~COrderedReferenceScope(class COrderedReferenceScope *); /* linkage=_ZN22COrderedReferenceScopeD4Ev */
	void COrderedReferenceScope<CAssertGlobals, COrderedResolve_NoResolve, true>(class COrderedReferenceScope *, class COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true> &); /* linkage=_ZN22COrderedReferenceScopeC4I14CAssertGlobals25COrderedResolve_NoResolveLb1EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
	void COrderedReferenceScope<CThreadKeyHolder, COrderedResolve_NoResolve, false>(class COrderedReferenceScope *, class COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false> &); /* linkage=_ZN22COrderedReferenceScopeC4I16CThreadKeyHolder25COrderedResolve_NoResolveLb0EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
	void COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, false>(class COrderedReferenceScope *, class COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false> &); /* linkage=_ZN22COrderedReferenceScopeC4I16CThreadFastMutex25COrderedResolve_NoResolveLb0EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
};

// <004C5456> ../public/ordered_constructor.h:980
// member functions: 7
// member variables: 2
// class size: 16
class COrderedReferenceScope {
	/* ../public/ordered_constructor.h:992 */
	void ~COrderedReferenceScope(COrderedReferenceScope* );
private:
	COrderedSystem_DependencyManagement * m_pReleaseInstance; /* 0 8 */
	void (*m_pFN_Release)(COrderedSystem_DependencyManagement* ); /* 8 8* /
	/* ../public/ordered_constructor.h:984 */
	void COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, false>(COrderedReferenceScope* , COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>& );
	void ~COrderedReferenceScope(class COrderedReferenceScope *); /* linkage=_ZN22COrderedReferenceScopeD4Ev */
	void COrderedReferenceScope<CAssertGlobals, COrderedResolve_NoResolve, true>(class COrderedReferenceScope *, class COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true> &); /* linkage=_ZN22COrderedReferenceScopeC4I14CAssertGlobals25COrderedResolve_NoResolveLb1EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
	void COrderedReferenceScope<CThreadKeyHolder, COrderedResolve_NoResolve, false>(class COrderedReferenceScope *, class COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false> &); /* linkage=_ZN22COrderedReferenceScopeC4I16CThreadKeyHolder25COrderedResolve_NoResolveLb0EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
	void COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, false>(class COrderedReferenceScope *, class COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false> &); /* linkage=_ZN22COrderedReferenceScopeC4I16CThreadFastMutex25COrderedResolve_NoResolveLb0EEER26COrderedConstructor_CreateIT_T0_XT1_EE */
};

// <004D24A8> ../public/ordered_constructor.h:984
void COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, COrderedReferenceScope::false>(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>& orderedType)
{
} /* size: 0 */

// <004D2468> ../public/ordered_constructor.h:984
inline void COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, COrderedReferenceScope::false>(COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>& orderedType)
{
} /* size: 0 */

// <00384FD7> ../public/ordered_constructor.h:984
void COrderedReferenceScope<CThreadKeyHolder, COrderedResolve_NoResolve, COrderedReferenceScope::false>(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>& orderedType)
{
} /* size: 0 */

// <00384F97> ../public/ordered_constructor.h:984
inline void COrderedReferenceScope<CThreadKeyHolder, COrderedResolve_NoResolve, COrderedReferenceScope::false>(COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>& orderedType)
{
} /* size: 0 */

// <000268E0> ../public/ordered_constructor.h:984
void COrderedReferenceScope<CAssertGlobals, COrderedResolve_NoResolve, COrderedReferenceScope::true>(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>& orderedType)
{
} /* size: 0 */

// <000268A0> ../public/ordered_constructor.h:984
inline void COrderedReferenceScope<CAssertGlobals, COrderedResolve_NoResolve, COrderedReferenceScope::true>(COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>& orderedType)
{
} /* size: 0 */

// <004E3688> ../public/ordered_constructor.h:992
void COrderedReferenceScope::~COrderedReferenceScope()
{
} /* size: 0 */

// <004E366F> ../public/ordered_constructor.h:992
inline void COrderedReferenceScope::~COrderedReferenceScope()
{
} /* size: 0 */

// <00487B29> ../public/ordered_constructor.h:1034
// member function: 1
// struct size: 1
class _CManuallyConstructedCastHelper_Base<CCaptureHelper_Linux_NoConstruct, false> {
	/* ../public/ordered_constructor.h:1037 */
	typedef struct CCaptureHelper_Linux_NoConstruct BaseType;
	/* ../public/ordered_constructor.h:1038 */
	BaseType& Resolve(CCaptureHelper_Linux_NoConstruct& );
};

// <0048B590> ../public/ordered_constructor.h:1038
inline void Resolve(CCaptureHelper_Linux_NoConstruct& inputVar)
{
} /* size: 0 */

// <0048BF7C> ../public/ordered_constructor.h:1052
inline BaseType& ResolveManuallyConstructedType<CCaptureHelper_Linux_NoConstruct>(CCaptureHelper_Linux_NoConstruct& inputVar)
{
} /* size: 0 */

// <00005732> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00005719> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CE9E3> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CThreadFastMutex>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CE9CA> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CE89F> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CE886> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CE827> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CE80E> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CE4E0> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CThreadLocalScope>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CE4C7> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CD81F> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <004CD806> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<void>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <003A04DD> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <003A04C4> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <003845ED> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CBufferStringN<200> >::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <003845D4> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CBufferStringN<200> >::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00383DFE> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00383DE5> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <003836B1> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00383698> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00282E4E> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CLoggingSystem>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00282E35> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CLoggingSystem>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00158218> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CFiber>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <001581FF> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CFiber>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <001567E1> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <001567C8> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00156257> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CFiberJobPool>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0015623E> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CFiberJobPool>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0009E4C5> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CCommandLine>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <0009E4AC> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CCommandLine>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <000266D0> ../public/ordered_constructor.h:1071
void COrderedConstructor_DependencyManagement<CAssertGlobals>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <000266B7> ../public/ordered_constructor.h:1071
inline void COrderedConstructor_DependencyManagement<CAssertGlobals>::~COrderedConstructor_DependencyManagement()
{
} /* size: 0 */

// <00004E00> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <004CD748> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <004CD6A4> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <004CD67C> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <004CD58D> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <004CD452> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<void>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <0039FDC3> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <00382D71> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CBufferStringN<200> >::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <003826DA> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <0038259D> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <0028256A> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CLoggingSystem>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <00155AE7> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CFiber>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <0015497F> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <001547E2> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CFiberJobPool>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <0009DD26> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CCommandLine>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <00025971> ../public/ordered_constructor.h:1081
// variable: 1
inline void COrderedConstructor_DependencyManagement<CAssertGlobals>::PrematurelyReleaseWrapperInstanceRef()
{
	{
		uint32 nExistingRefCount; // 1086
	}
} /* size: 0 */

// <000048A1> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 58758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <000048A1> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 46203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <000048A1> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 52281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <000048A1> ../../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 9622
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <004CFF02> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 16
void COrderedConstructor_DependencyManagement<CThreadFastMutex>::Release()
{
	const char   __FUNCTION__; // 6869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CManuallyConstructedClass<CThreadFastMutex>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 254, variables: 1, inline expansions: 13 (249 bytes) */

// <004CFA3D> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::Release()
{
	const char   __FUNCTION__; // 6869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	AlignedByteArrayExplicit_t<1, CThreadLocalScope::CScopeCreatedOrDestroyedHandler, 8>::Base(); // 48
	CManuallyConstructedClass<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 270, variables: 1, inline expansions: 14 (265 bytes) */

// <004CF5BD> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 16
void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::Release()
{
	const char   __FUNCTION__; // 6869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CManuallyConstructedClass<CConstructedMainThreadID>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 13 (217 bytes) */

// <004CDE13> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<CThreadLocalScope>::Release()
{
	const char   __FUNCTION__; // 6869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	AlignedByteArrayExplicit_t<1, CThreadLocalScope, 8>::Base(); // 48
	CManuallyConstructedClass<CThreadLocalScope>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 262, variables: 1, inline expansions: 14 (249 bytes) */

// <004CD89C> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 13
void COrderedConstructor_DependencyManagement<void>::Release()
{
	const char   __FUNCTION__; // 6869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<void>::ReleaseDependencies(); // 1122
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 10 (208 bytes) */

// <0048AF45> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 16
void COrderedConstructor_DependencyManagement<CThreadFastMutex>::Release()
{
	const char   __FUNCTION__; // 60142
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CManuallyConstructedClass<CThreadFastMutex>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 254, variables: 1, inline expansions: 13 (249 bytes) */

// <0048A8B4> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 13
void COrderedConstructor_DependencyManagement<void>::Release()
{
	const char   __FUNCTION__; // 60142
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<void>::ReleaseDependencies(); // 1122
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 10 (208 bytes) */

// <0039FE87> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 18
void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::Release()
{
	const char   __FUNCTION__; // 16916
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	SignalHandlerMapping_t::~SignalHandlerMapping_t(); // 422
	SignalHandlerMemory_t::~SignalHandlerMemory_t(); // 48
	CManuallyConstructedClass<SignalHandlerMemory_t>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 299, variables: 1, inline expansions: 15 (356 bytes) */

// <003837EA> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::Release()
{
	const char   __FUNCTION__; // 25467
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CThreadKeyHolder::~CThreadKeyHolder(); // 48
	CManuallyConstructedClass<CThreadKeyHolder>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <003827E0> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 18
void COrderedConstructor_DependencyManagement<CBufferStringN<200> >::Release()
{
	const char   __FUNCTION__; // 25467
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 48
	CManuallyConstructedClass<CBufferStringN<200> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 292, variables: 1, inline expansions: 15 (317 bytes) */

// <00382050> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::Release()
{
	const char   __FUNCTION__; // 25467
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<OrderedInit_Platform>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 254, variables: 1, inline expansions: 14 (246 bytes) */

// <002C6C38> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 13
void COrderedConstructor_DependencyManagement<void>::Release()
{
	const char   __FUNCTION__; // 44671
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<void>::ReleaseDependencies(); // 1122
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 10 (208 bytes) */

// <002826F5> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<CLoggingSystem>::Release()
{
	const char   __FUNCTION__; // 25178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CLoggingSystem::~CLoggingSystem(); // 48
	CManuallyConstructedClass<CLoggingSystem>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CLoggingSystem>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CLoggingSystem>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 276, variables: 1, inline expansions: 14 (284 bytes) */

// <00282015> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 13
void COrderedConstructor_DependencyManagement<void>::Release()
{
	const char   __FUNCTION__; // 25178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<void>::ReleaseDependencies(); // 1122
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 10 (208 bytes) */

// <001CCC0A> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 13
void COrderedConstructor_DependencyManagement<void>::Release()
{
	const char   __FUNCTION__; // 3665
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<void>::ReleaseDependencies(); // 1122
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 10 (208 bytes) */

// <001550ED> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 18
void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::Release()
{
	const char   __FUNCTION__; // 31517
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CMainThreadFiber::~CMainThreadFiber(); // 99
	FiberToolsOrderedConstructionGlobals_t::~FiberToolsOrderedConstructionGlobals_t(); // 48
	CManuallyConstructedClass<FiberToolsOrderedConstructionGlobals_t>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 292, variables: 1, inline expansions: 15 (317 bytes) */

// <00154B6D> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 16
void COrderedConstructor_DependencyManagement<CFiberJobPool>::Release()
{
	const char   __FUNCTION__; // 31517
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CFiberJobPool>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CManuallyConstructedClass<CFiberJobPool>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CFiberJobPool>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CFiberJobPool>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CFiberJobPool>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 246, variables: 1, inline expansions: 13 (233 bytes) */

// <00154269> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<CFiber>::Release()
{
	const char   __FUNCTION__; // 31517
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CFiber>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	AlignedByteArrayExplicit_t<1, CFiber, 8>::Base(); // 48
	CManuallyConstructedClass<CFiber>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CFiber>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CFiber>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CFiber>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 292, variables: 1, inline expansions: 14 (293 bytes) */

// <001538D8> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 13
void COrderedConstructor_DependencyManagement<void>::Release()
{
	const char   __FUNCTION__; // 31517
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<void>::ReleaseDependencies(); // 1122
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 10 (208 bytes) */

// <0009DEC6> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 18
void COrderedConstructor_DependencyManagement<CCommandLine>::Release()
{
	const char   __FUNCTION__; // 6766
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CCommandLine>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	AlignedByteArrayExplicit_t<1, CCommandLine, 8>::Base(); // 48
	CCommandLine::~CCommandLine(); // 48
	CManuallyConstructedClass<CCommandLine>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CCommandLine>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CCommandLine>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CCommandLine>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 343, variables: 1, inline expansions: 15 (386 bytes) */

// <0009D829> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 13
void COrderedConstructor_DependencyManagement<void>::Release()
{
	const char   __FUNCTION__; // 6766
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<void>::ReleaseDependencies(); // 1122
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 10 (208 bytes) */

// <00025225> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 22
void COrderedConstructor_DependencyManagement<CAssertGlobals>::Release()
{
	const char   __FUNCTION__; // 38658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CAssertGlobals>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	CThreadMutex::~CThreadMutex(); // 240
	CThreadEvent::~CThreadEvent(); // 240
	CThreadEvent::~CThreadEvent(); // 240
	CThreadMutex::~CThreadMutex(); // 240
	CThreadMutex::~CThreadMutex(); // 240
	CAssertGlobals::~CAssertGlobals(); // 48
	CManuallyConstructedClass<CAssertGlobals>::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<CAssertGlobals>::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CAssertGlobals>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CAssertGlobals>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 352, variables: 1, inline expansions: 19 (507 bytes) */

// <0000DDDA> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::Release()
{
	const char   __FUNCTION__; // 6990
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<OrderedInit_Platform>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 254, variables: 1, inline expansions: 14 (246 bytes) */

// <0000D909> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 13
void COrderedConstructor_DependencyManagement<void>::Release()
{
	const char   __FUNCTION__; // 6990
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<void>::ReleaseDependencies(); // 1122
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 10 (208 bytes) */

// <000048B9> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 35831
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <000048A1> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 56939
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <000048A1> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 36203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <000048A1> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 42139
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <000048A1> ../public/ordered_constructor.h:1100
// variables: 4
// function calls: 17
void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Release()
{
	const char   __FUNCTION__; // 38291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	ThreadInterlockedDecrement(volatile int32* p); // 427
	ThreadInterlockedDecrement(volatile uint32* p); // 1105
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1108
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1117
	COrderedInitShutdownRefWrapper<EarlyInit_Common>::~COrderedInitShutdownRefWrapper(); // 48
	CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalDestruct(); // 1120
	{
		OrderedDependency_t* pIter; // 1154
		OrderedDependency_t::CallReleaseFunc(); // 1156
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies(); // 1122
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 1127
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1133
} /* size: 238, variables: 1, inline expansions: 14 (217 bytes) */

// <00005869> ../public/ordered_constructor.h:1139
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::Touch()
{
} /* size: 0 */

// <00283819> ../public/ordered_constructor.h:1139
inline void COrderedConstructor_DependencyManagement<void>::Touch()
{
} /* size: 0 */

// <000047FC> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <004CE3C9> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <004CE388> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <004CE347> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <004CD4EE> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <004CD496> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<void>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <0039FCCB> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <003825FE> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <00381FE3> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CBufferStringN<200> >::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <00381F23> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <002824A6> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CLoggingSystem>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <00153E54> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <00153D68> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CFiberJobPool>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <00153768> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CFiber>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <0009DCB9> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CCommandLine>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <00025147> ../public/ordered_constructor.h:1152
// variable: 1
inline void COrderedConstructor_DependencyManagement<CAssertGlobals>::ReleaseDependencies()
{
	{
		OrderedDependency_t* pIter; // 1154
	}
} /* size: 0 */

// <00005791> ../public/ordered_constructor.h:1167
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>()
{
	{
	}
} /* size: 0 */

// <004E4842> ../public/ordered_constructor.h:1167
// function call: 1
void InternalConstruct<void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::()(CThreadLocalScope*, bool)>(<ERROR: type 0 not found>, const COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* this)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
} /* size: 16 */

// <004D22EC> ../public/ordered_constructor.h:1167
inline void InternalConstruct<void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::()(CThreadLocalScope*, bool)>(const COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* this)
{
	{
	}
} /* size: 0 */

// <00383710> ../public/ordered_constructor.h:1167
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>()
{
	{
	}
} /* size: 0 */

// <004E6550> ../public/ordered_constructor.h:1182
// function call: 1
void StaticRelease(COrderedSystem_DependencyManagement* pThis)
{
	FromGenericDependencyManagement(COrderedSystem_DependencyManagement* pFrom); // 1187
} /* size: 13, inline expansions: 1 (4 bytes) */

// <004CE999> ../public/ordered_constructor.h:1182
inline void StaticRelease(COrderedSystem_DependencyManagement* pThis)
{
} /* size: 0 */

// <004CD836> ../public/ordered_constructor.h:1182
void StaticRelease(COrderedSystem_DependencyManagement* pThis)
{
} /* size: 9 */

// <00005850> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ToGenericDependencyManagement()
{
} /* size: 0 */

// <004CE9B1> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <004CE687> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <004CDDFA> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <004CDD60> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <004CD880> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<void>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <0039FE6E> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <00383DCC> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <003837D1> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::ToGenericDependencyManagement()
{
} /* size: 0 */

// <002826DC> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CLoggingSystem>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <001550D4> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <00154B54> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CFiberJobPool>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <0009DEAD> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CCommandLine>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <00025AF1> ../public/ordered_constructor.h:1193
inline void COrderedConstructor_DependencyManagement<CAssertGlobals>::ToGenericDependencyManagement()
{
} /* size: 0 */

// <004CD730> ../public/ordered_constructor.h:1199
inline void FromGenericDependencyManagement(COrderedSystem_DependencyManagement* pFrom)
{
} /* size: 0 */

// <00004D88> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 58903
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00004D88> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 52426
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00004D88> ../../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 9767
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <004CE706> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 6991
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <004CE5A5> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 6991
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <004CE423> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 6991
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <004CE2E5> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CThreadLocalScope>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 6991
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <004CDC66> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<void>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 6991
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <0048B413> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 60265
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <0048AC7F> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<void>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 60265
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <003A040B> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 17137
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00383D0F> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CThreadKeyHolder>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 25612
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00382D0E> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CBufferStringN<200> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 25612
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00382525> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 25612
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <002C7010> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<void>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 44795
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00282BFE> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CLoggingSystem>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 25301
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <002823EB> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<void>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 25301
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <001CBA1E> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<void>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 63753
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00155633> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 31639
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00154FEF> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CFiberJobPool>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 31639
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00154780> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CFiber>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 31639
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00153CAE> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<void>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 31639
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <0009E3EF> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CCommandLine>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 6888
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <0009DBFF> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<void>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 6888
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <000258F9> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<CAssertGlobals>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 38880
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <0000E29A> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 7112
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <0000DCDF> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<void>::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 7112
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00004DA1> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 35976
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00004D88> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 57084
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00004D88> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 62076
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <00004D88> ../public/ordered_constructor.h:1206
// variables: 3
inline void COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(bool bAcquireLock)
{
	const char   __FUNCTION__; // 42284
	{
		uint32 nOldRefState; // 1211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1220
	}
} /* size: 0, variables: 1 */

// <000058A8> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00005882> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004D2504> ../public/ordered_constructor.h:1242
// function calls: 6
void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
	{
	}
	AlignedByteArrayExplicit_t<1, CThreadFastMutex, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, CThreadFastMutex>::AlignedByteArray_t(); // 31
	CManuallyConstructedClass<CThreadFastMutex>::CManuallyConstructedClass(); // 325
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::COrderedConstructor_DependencyManagement(); // 1242
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1251
} /* size: 92, inline expansions: 6 (108 bytes) */

// <004D24DE> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004D2229> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create(const COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScop this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004D2203> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create(const COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScop this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004D1F67> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004D1F41> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004D0C28> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create(const COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_Main this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004D0C02> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create(const COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_Main this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004CEA68> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <004CEA42> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0048BEB9> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0048BE93> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0048B5CE> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0048B5A8> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <003A0D4E> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <003A0D28> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00385364> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0038533E> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00385033> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0038500D> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00384672> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitSh this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0038464C> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitSh this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <002C7779> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <002C7753> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00283871> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0028384B> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this, bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00282ED3> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00282EAD> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00158767> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00158741> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0015833D> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00158317> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00158255> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0015822F> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00156989> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00156963> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0009EFAA> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0009EF84> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0009E54A> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0009E524> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00026B2A> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00026B04> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0000E93D> ../public/ordered_constructor.h:1242
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <0000E917> ../public/ordered_constructor.h:1242
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>::COrderedConstructor_Create(bool bWrapperAutomaticallyAddsReference)
{
} /* size: 0 */

// <00004E5F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 61205
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <00004E5F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 48650
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <00004E5F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 54728
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <00004E5F> ../../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 12069
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <004D1596> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 27
void COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 5355
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	InitMainThread(void); // 1790
	Plat_IsInDebugSession(void); // 1788
	_DebuggerBreakInlineExpressionWrapper(void); // 1788
	CConstructedMainThreadID::CConstructedMainThreadID(); // 1479
	Construct<CConstructedMainThreadID>(CConstructedMainThreadID* pMemory); // 192
	DefaultConstruct(CConstructedMainThreadID& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 494, variables: 2, inline expansions: 24 (606 bytes) */

// <004D0DCE> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 24
void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 5355
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 1479
	Construct<CThreadFastMutex>(CThreadFastMutex* pMemory); // 192
	DefaultConstruct(CThreadFastMutex& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 416, variables: 2, inline expansions: 21 (353 bytes) */

// <004D039B> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 26
void AddRef(const COrderedConstructor_Create<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, CResolveOrderedFunc<CThreadLocalScop this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 5355
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		Construct<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, void (&)(CThreadLocalScope*, bool)>(CScopeCreatedOrDestroyedHandler* pMemory); // 40
		CManuallyConstructedClass<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalConstruct<void ()(CThreadLocalScope*, bool)>(const CManuallyConstructedClass<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* this); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalConstruct<void ()(CThreadLocalScope*, bool)>(const COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>* this); // 334
	ResolveOrderedConstructor_ThreadCreationEventHandler_ThreadID(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 627, variables: 2, inline expansions: 19 (466 bytes) */

// <004CEDB6> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 23
void AddRef(const COrderedConstructor_Create<CThreadLocalScope, CResolveOrderedFunc<CThreadLocalScope, ResolveOrderedConstructor_Main this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 5355
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	Construct<CThreadLocalScope>(CThreadLocalScope* pMemory); // 192
	DefaultConstruct(CThreadLocalScope& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadLocalScope>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 449, variables: 2, inline expansions: 20 (332 bytes) */

// <004CEB74> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 5355
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <004CD770> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 5355
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <0048B6E6> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 24
void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, true>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 60645
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 1479
	Construct<CThreadFastMutex>(CThreadFastMutex* pMemory); // 192
	DefaultConstruct(CThreadFastMutex& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 416, variables: 2, inline expansions: 21 (353 bytes) */

// <0048ADCF> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 60645
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <003A0637> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 23
void COrderedConstructor_Create<SignalHandlerMemory_t, COrderedResolve_NoResolve, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 15410
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	Construct<SignalHandlerMemory_t>(SignalHandlerMemory_t* pMemory); // 192
	DefaultConstruct(SignalHandlerMemory_t& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 459, variables: 2, inline expansions: 20 (390 bytes) */

// <00384875> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 24
void COrderedConstructor_Create<CThreadKeyHolder, COrderedResolve_NoResolve, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 25905
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	CThreadKeyHolder::CThreadKeyHolder(); // 1479
	Construct<CThreadKeyHolder>(CThreadKeyHolder* pMemory); // 192
	DefaultConstruct(CThreadKeyHolder& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CThreadKeyHolder>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 430, variables: 2, inline expansions: 21 (400 bytes) */

// <00383ED2> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 26
void COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 25905
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1479
	Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 192
	DefaultConstruct(CBufferStringN<200>& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CBufferStringN<200> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 448, variables: 2, inline expansions: 23 (405 bytes) */

// <00382D99> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 30
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitSh this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 25905
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::ToGenericDependencyManagement(); // 939
	{
		COrderedInitShutdownRefWrapper<OrderedInit_Platform>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<OrderedInit_Platform>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<OrderedInit_Platform>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 636, variables: 2, inline expansions: 21 (529 bytes) */

// <002C788C> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 43529
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <002C6AF3> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 43529
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <00282FE5> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 24
void AddRef(const COrderedConstructor_Create<CLoggingSystem, CResolveOrderedFunc<CLoggingSystem, ResolveGlobalLoggingSystem>, false> this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 25561
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CLoggingSystem>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	ResolveGlobalLoggingSystem(COrderedConstructor_DependencyManagement<CLoggingSystem>& owner); // 1315
	Construct<CLoggingSystem>(CLoggingSystem* pMemory); // 192
	DefaultConstruct(CLoggingSystem& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CLoggingSystem>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CLoggingSystem>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 466, variables: 2, inline expansions: 21 (397 bytes) */

// <00282592> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 25561
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <001CD008> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 3872
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <00157421> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 32984
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	GetMainThreadStackSize(void); // 87
	CMainThreadFiber::CMainThreadFiber(); // 99
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 99
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::CTSFastPushQueue_Base(); // 99
	FiberToolsOrderedConstructionGlobals_t::FiberToolsOrderedConstructionGlobals_t(); // 1479
	Construct<FiberToolsOrderedConstructionGlobals_t>(FiberToolsOrderedConstructionGlobals_t* pMemory); // 192
	DefaultConstruct(FiberToolsOrderedConstructionGlobals_t& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 647, variables: 2, inline expansions: 26 (1005 bytes) */

// <00156A84> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 35
void COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 32984
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CFiberJobPool>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	s_FiberJobPool_ResolveFunc(COrderedConstructor_DependencyManagement<CFiberJobPool>& owner); // 1315
	IFiberJobPool::IFiberJobPool(); // 152
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::CTSFastPushQueue_Base(); // 152
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::CTSFastPushQueue_Base(); // 152
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::CTSFastPushQueue_Base(); // 72
	CEventList::CEventList(); // 559
	CLockList::CLockList(
			bool bStartOwned);  // 652
	CEventLock::CEventLock(
			bool bStartOwned);  // 152
	CFiberJobPool::CFiberJobPool(); // 1479
	Construct<CFiberJobPool>(CFiberJobPool* pMemory); // 192
	DefaultConstruct(CFiberJobPool& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CFiberJobPool>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CFiberJobPool>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 470, variables: 2, inline expansions: 32 (579 bytes) */

// <00155B0F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 23
void COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 32984
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CFiber>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	Construct<CFiber>(CFiber* pMemory); // 192
	DefaultConstruct(CFiber& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CFiber>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CFiber>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 459, variables: 2, inline expansions: 20 (390 bytes) */

// <00154A0A> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 32984
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <0009E662> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 27
void COrderedConstructor_Create<CCommandLine, COrderedResolve_NoResolve, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 7268
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CCommandLine>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	ICommandLine::ICommandLine(); // 193
	CManuallyConstructedClass<CCommandLine>::CastPointer(); // 202
	CCommandLine::CCommandLine(); // 193
	CCommandLine::CCommandLine(); // 1479
	Construct<CCommandLine>(CCommandLine* pMemory); // 192
	DefaultConstruct(CCommandLine& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CCommandLine>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CCommandLine>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 484, variables: 2, inline expansions: 24 (609 bytes) */

// <0009DD4E> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 7268
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <00025C9E> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 33
void COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 42251
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<CAssertGlobals>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	CThreadMutex::CThreadMutex(
			const char* pName);  // 273
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 273
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 273
	CThreadMutex::CThreadMutex(
			const char* pName);  // 273
	CThreadMutex::CThreadMutex(
			const char* pName);  // 272
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 298
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 301
	CAssertGlobals::CAssertGlobals(); // 1479
	Construct<CAssertGlobals>(CAssertGlobals* pMemory); // 192
	DefaultConstruct(CAssertGlobals& constructInstance); // 1325
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1341
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<CAssertGlobals>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<CAssertGlobals>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 817, variables: 2, inline expansions: 30 (1698 bytes) */

// <0000EE9B> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 30
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, CResolveOrderedFunc<COrderedInitSh this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 10112
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::ToGenericDependencyManagement(); // 939
	{
		COrderedInitShutdownRefWrapper<OrderedInit_Platform>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<OrderedInit_Platform>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<OrderedInit_Platform>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 636, variables: 2, inline expansions: 21 (529 bytes) */

// <0000ED33> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 10112
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <0000EBC9> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 10112
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <0000EB39> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 10112
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <0000EAA9> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 10112
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <0000EA19> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 10112
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <0000E989> ../public/ordered_constructor.h:1256
// variables: 6
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 10112
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
} /* size: 0, variables: 2 */

// <0000E400> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 16
void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>::AddRef(bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 10112
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 300, variables: 2, inline expansions: 14 (237 bytes) */

// <00004E78> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 31
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 38395
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::ToGenericDependencyManagement(); // 939
	{
		EarlyInit_Common(bool bInit,
				COrderedSystem_DependencyManagement& owner);  // 238
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 628, variables: 2, inline expansions: 21 (519 bytes) */

// <00004E5F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 59386
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <00004E5F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 64378
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <00004E5F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 24821
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <00004E5F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 38650
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <00004E5F> ../public/ordered_constructor.h:1256
// variables: 7
// function calls: 29
void AddRef(const COrderedConstructor_Create<COrderedInitShutdownRefWrapper<EarlyInit_Common>, CResolveOrderedFunc<COrderedInitShutdo this, bool bIsWrapperRef)
{
	const char   __FUNCTION__; // 44586
	uint32 nAddRefVal; // 1259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1286
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 1297
			}
		}
	}
	{
		int* _pCrash; // 1330
	}
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1272
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1310
	{
		COrderedInitShutdownRefWrapper<EarlyInit_Common>::COrderedInitShutdownRefWrapper(
						COrderedSystem_DependencyManagement* pOwnerAsGeneric);  // 1514
		Construct<COrderedInitShutdownRefWrapper<EarlyInit_Common>, COrderedConstructor_DependencyManagement<void>*&>(COrderedInitShutdownRefWrapper<EarlyInit_Common>* pMemory); // 40
		CManuallyConstructedClass<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1173
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1176
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1170
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 1167
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalConstruct<COrderedConstructor_DependencyManagement<void>*&>(); // 940
	_ORDERED_INIT_SHUTDOWN_WRAPPER_RESOLVEFUNC<EarlyInit_Common>(COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >& owner); // 1315
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1330
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<EarlyInit_Common> >::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
} /* size: 608, variables: 2, inline expansions: 20 (449 bytes) */

// <004CF5A4> ../public/ordered_constructor.h:1398
inline void COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::ConstructIfNotConstructed()
{
} /* size: 0 */

// <00385325> ../public/ordered_constructor.h:1398
inline void COrderedConstructor_Create<CBufferStringN<200>, COrderedResolve_NoResolve, false>::ConstructIfNotConstructed()
{
} /* size: 0 */

// <0000E3E7> ../public/ordered_constructor.h:1398
inline void COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInitTier0>, false>::ConstructIfNotConstructed()
{
} /* size: 0 */

// <004E3658> ../public/ordered_constructor.h:1422
void OrderedDependency_t::OrderedDependency_t()
{
} /* size: 0 */

// <004E363C> ../public/ordered_constructor.h:1422
inline void OrderedDependency_t::OrderedDependency_t()
{
} /* size: 0 */

// <004D14B9> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CConstructedMainThreadID, OrderedDependency_t::CThreadLocalScope>(COrderedConstructor_DependencyManagement<CThreadLocalScope>& dependant, COrderedConstructor_DependencyManagement<CConstructedMainThreadID>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <004D0CF1> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CThreadFastMutex, OrderedDependency_t::CThreadLocalScope>(COrderedConstructor_DependencyManagement<CThreadLocalScope>& dependant, COrderedConstructor_DependencyManagement<CThreadFastMutex>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <004CF4A9> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CConstructedMainThreadID, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<CConstructedMainThreadID>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <004CECDD> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CThreadLocalScope, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<CThreadLocalScope>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <004CEC04> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CThreadLocalScope::CScopeCreatedOrDestroyedHandler, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <004CEA8A> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<void, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<void>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <0048B5F6> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CThreadFastMutex, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<CThreadFastMutex>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <003A0547> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<SignalHandlerMemory_t, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<SignalHandlerMemory_t>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <0038479A> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CThreadKeyHolder, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<CThreadKeyHolder>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <00282EF5> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CLoggingSystem, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<CLoggingSystem>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <00157348> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<FiberToolsOrderedConstructionGlobals_t, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <001569AB> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CFiberJobPool, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<CFiberJobPool>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <0009E572> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<CCommandLine, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<CCommandLine>& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <000122A9> ../public/ordered_constructor.h:1430
// variable: 1
// function calls: 2
void LinkDependency<void, COrderedConstructor_DependencyManagement<void>& dependsOn, COrderedConstructor_DependencyManagement<void>& dependant, const OrderedDependency_t::void>()
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1447
	}
} /* size: 16, variables: 2 */

// <0000EDC3> ../public/ordered_constructor.h:1430
// variable: 1
// function call: 1
inline void LinkDependency<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, OrderedDependency_t::void>(COrderedConstructor_DependencyManagement<void>& dependant, COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >& dependsOn)
{
	COrderedSystem_DependencyManagement* pReleaseInstance; // 1435
	void ()(COrderedSystem_DependencyManagement *)* pFN_Release; // 1436
	{
	}
} /* size: 0, variables: 2 */

// <00005BD3> ../public/ordered_constructor.h:1456
inline void OrderedDependency_t::CallReleaseFunc()
{
} /* size: 0 */

