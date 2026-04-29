
//
// sbox/media/videosystem.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//

// <01FE7111> sbox/media/videosystem.cpp:7
void* __CreateCVideoSystemIVideoSystem_interface(void)
{
} /* size: 12 */

// <01FE6DDC> sbox/media/videosystem.cpp:9
// function calls: 12
void CVideoSystem::CVideoSystem()
{
	IAppSystem::IAppSystem(); // 85
	IVideoSystem::IVideoSystem(); // 120
	CBaseAppSystem<IVideoSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<IVideoSystem, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IVideoSystem, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IVideoSystem, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<IVideoSystem, 0>::CTier3AppSystem(); // 9
} /* size: 0, inline expansions: 12 (0 bytes) */

// <01FE6DC3> sbox/media/videosystem.cpp:9
void CVideoSystem::CVideoSystem()
{
} /* size: 0 */

// <01FE6C07> sbox/media/videosystem.cpp:13
// function calls: 9
void CVideoSystem::~CVideoSystem()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IVideoSystem, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IVideoSystem, 0>::~CTier3AppSystem(); // 15
} /* size: 49, inline expansions: 9 (242 bytes) */

// <01FE6BEE> sbox/media/videosystem.cpp:13
void CVideoSystem::~CVideoSystem()
{
} /* size: 0 */

// <01FE73BE> sbox/media/videosystem.cpp:17
// variable: 1
// function calls: 5
void CVideoSystem::Init()
{
	InitReturnVal_t nRetVal; // 19
	CTier0AppSystem<IVideoSystem, 0>::Init(); // 71
	CTier2AppSystem<IVideoSystem, 0>::Init(); // 19
	CTier0AppSystem<IVideoSystem, 0>::Init(); // 71
	CTier2AppSystem<IVideoSystem, 0>::Init(); // 19
	CVideoSystem::Init(); // 17
} /* size: 46, variables: 1, inline expansions: 5 (53 bytes) */

// <01FE6BC9> sbox/media/videosystem.cpp:17
// variable: 1
void CVideoSystem::Init()
{
	InitReturnVal_t nRetVal; // 19
} /* size: 0, variables: 1 */

// <01FE6B29> sbox/media/videosystem.cpp:26
// function calls: 2
void CVideoSystem::Shutdown()
{
	CTier0AppSystem<IVideoSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<IVideoSystem, 0>::Shutdown(); // 28
} /* size: 33, inline expansions: 2 (56 bytes) */

