
//
// sbox/netruntime.cpp
//
//	referenced by: libengine2.so
//
//	functions: 13
//	class: 1
//

// <0158AAF7> sbox/netruntime.cpp:17
// member functions: 16
// member variable: 1
// vtable entries: 5
// class size: 48
class CNetRuntime : public CTier2AppSystem<INetRuntime, 0> {
public:
	/* class CTier2AppSystem<INetRuntime, 0> <ancestor>; */ /* 0 48 */
	void CNetRuntime(CNetRuntime* , const CNetRuntime& );
	/* sbox/netruntime.cpp:39 */
	void CNetRuntime(CNetRuntime* );
	/* sbox/netruntime.cpp:43 */
	virtual void ~CNetRuntime(CNetRuntime* );
	/* sbox/netruntime.cpp:47 */
	virtual const AppSystemInfo_t* GetDependencies(CNetRuntime* );
	/* sbox/netruntime.cpp:57 */
	virtual InitReturnVal_t Init(CNetRuntime* );
	/* sbox/netruntime.cpp:66 */
	virtual void Shutdown(CNetRuntime* );
	/* sbox/netruntime.cpp:71 */
	virtual int RegisterHandle(CNetRuntime* , uint, void* );
	/* sbox/netruntime.cpp:78 */
	virtual void FreeHandle(CNetRuntime* , int);
	void CNetRuntime(class CNetRuntime *, const class CNetRuntime  &); /* linkage=_ZN11CNetRuntimeC4ERKS_ */
	void CNetRuntime(class CNetRuntime *); /* linkage=_ZN11CNetRuntimeC4Ev */
	virtual void ~CNetRuntime(class CNetRuntime *); /* linkage=_ZN11CNetRuntimeD4Ev */
	/* <15a7f3b> sbox/netruntime.cpp:47 */
	virtual const class AppSystemInfo_t  * GetDependencies(class CNetRuntime *); /* linkage=_ZN11CNetRuntime15GetDependenciesEv */
	/* <15a7e20> sbox/netruntime.cpp:57 */
	virtual enum InitReturnVal_t Init(class CNetRuntime *); /* linkage=_ZN11CNetRuntime4InitEv */
	virtual void Shutdown(class CNetRuntime *); /* linkage=_ZN11CNetRuntime8ShutdownEv */
	virtual int RegisterHandle(class CNetRuntime *, uint, void *); /* linkage=_ZN11CNetRuntime14RegisterHandleEjPv */
	virtual void FreeHandle(class CNetRuntime *, int); /* linkage=_ZN11CNetRuntime10FreeHandleEi */
};

// <0159763C> sbox/netruntime.cpp:36
void* __CreateCNetRuntimeINetRuntime_interface(void)
{
} /* size: 12 */

// <01597386> sbox/netruntime.cpp:39
// function calls: 11
void CNetRuntime::CNetRuntime()
{
	IAppSystem::IAppSystem(); // 5
	INetRuntime::INetRuntime(); // 120
	CBaseAppSystem<INetRuntime>::CBaseAppSystem(); // 171
	CTier0AppSystem<INetRuntime, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<INetRuntime, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<INetRuntime, 0>::CTier2AppSystem(); // 39
} /* size: 0, inline expansions: 11 (0 bytes) */

// <0159736D> sbox/netruntime.cpp:39
void CNetRuntime::CNetRuntime()
{
} /* size: 0 */

// <015971D8> sbox/netruntime.cpp:43
// function calls: 8
void CNetRuntime::~CNetRuntime()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<INetRuntime, 0>::~CTier2AppSystem(); // 45
} /* size: 49, inline expansions: 8 (198 bytes) */

// <01596F6D> sbox/netruntime.cpp:43
// function calls: 12
void CNetRuntime::~CNetRuntime()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	ValidateAlignment<ResourceManifestDesc_t*>(void); // 508
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 510
	CUtlMemory<ResourceManifestDesc_t::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<INetRuntime, 0>::~CTier2AppSystem(); // 45
	CNetRuntime::~CNetRuntime(); // 45
} /* size: 93, inline expansions: 12 (242 bytes) */

// <01596F54> sbox/netruntime.cpp:43
void CNetRuntime::~CNetRuntime()
{
} /* size: 0 */

// <015A7F3B> sbox/netruntime.cpp:47
// function calls: 2
void CNetRuntime::GetDependencies()
{
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 52
	CNetRuntime::GetDependencies(); // 47
} /* size: 96, inline expansions: 2 (34 bytes) */

// <01596F14> sbox/netruntime.cpp:47
// variable: 1
void CNetRuntime::GetDependencies()
{
	AppSystemInfo_t s_pDependencies; // 49
} /* size: 0, variables: 1 */

// <015A7E20> sbox/netruntime.cpp:57
// variable: 1
// function calls: 5
void CNetRuntime::Init()
{
	InitReturnVal_t nRetVal; // 59
	CTier0AppSystem<INetRuntime, 0>::Init(); // 71
	CTier2AppSystem<INetRuntime, 0>::Init(); // 59
	CTier0AppSystem<INetRuntime, 0>::Init(); // 71
	CTier2AppSystem<INetRuntime, 0>::Init(); // 59
	CNetRuntime::Init(); // 57
} /* size: 46, variables: 1, inline expansions: 5 (53 bytes) */

// <01596EEF> sbox/netruntime.cpp:57
// variable: 1
void CNetRuntime::Init()
{
	InitReturnVal_t nRetVal; // 59
} /* size: 0, variables: 1 */

// <01596E4C> sbox/netruntime.cpp:66
// function calls: 2
void CNetRuntime::Shutdown()
{
	CTier0AppSystem<INetRuntime, 0>::Shutdown(); // 85
	CTier2AppSystem<INetRuntime, 0>::Shutdown(); // 68
} /* size: 33, inline expansions: 2 (56 bytes) */

// <01596DC4> sbox/netruntime.cpp:71
void CNetRuntime::RegisterHandle(uint t, void* ptr)
{
} /* size: 59 */

// <01596D59> sbox/netruntime.cpp:78
void CNetRuntime::FreeHandle(int t)
{
} /* size: 44 */

