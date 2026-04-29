
//
// engine2/renderservice.cpp
//
//	referenced by: libengine2.so
//
//	functions: 21
//

// <0059BBD3> engine2/renderservice.cpp:35
void* __CreateCRenderServiceIEngineService_interface(void)
{
} /* size: 12 */

// <0059ACFC> engine2/renderservice.cpp:41
// variables: 3
// function calls: 64
void EventMapRegister(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, CRenderService* pClass, EventMapRegistrationType_t nType, int nPriority)
{
	const char* pszClassName; // 41
	{
		CFmtStr handlerName; // 42
		GetPrimaryBinding(void); // 50
		Schema_StaticBinding(void); // 237
		GetEventID(void); // 42
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 42
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventFrameBoundary_t&), void (*)(const EventFrameBoundary_t&), void this); // 1112
		implicit_cast<CRenderService*, CRenderService*>(CRenderService* inputVal); // 1113
		CRenderService::Convert<CRenderService, void (
																void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
		ClosurePtr<void (detail::GenericClass::::bindmemfunc<CRenderService, void (
													CRenderService* pthis,
													void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* function_to_bind);  // 1113
		FastDelegate1<const EventFrameBoundary_t&, void>::FastDelegate1<CRenderService, CRenderService>(
								CRenderService* pthis,
								void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* function_to_bind);  // 2164
		CUtlDelegate<void(const EventFrameBoundary_t&)>::CUtlDelegate<CRenderService, CRenderService>(
								CRenderService* pthis,
								void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* function_to_bind); // 2519
		UtlMakeDelegate<CRenderService, CRenderService, const EventFrameBoundary_t&, void>(CRenderService* x,
													void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* func);  // 42
		FastDelegate1<const EventFrameBoundary_t&, void>::GetAbstractDelegate(); // 595
		CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1>::RegisterEventListener(
					const CUtlDelegate<void(const EventFrameBoundary_t&)>& listener,
					int nPriority,
					const char* pszName,
					EventID_t EventID);  // 42
	}
	{
		CFmtStr handlerName; // 43
		GetPrimaryBinding(void); // 69
		Schema_StaticBinding(void); // 237
		GetEventID(void); // 43
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 43
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventClientOutput_t&), void (*)(const EventClientOutput_t&), void ( this); // 1112
		implicit_cast<CRenderService*, CRenderService*>(CRenderService* inputVal); // 1113
		CRenderService::Convert<CRenderService, void (
																void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
		ClosurePtr<void (detail::GenericClass::::bindmemfunc<CRenderService, void (
													CRenderService* pthis,
													void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* function_to_bind);  // 1113
		FastDelegate1<const EventClientOutput_t&, void>::FastDelegate1<CRenderService, CRenderService>(
								CRenderService* pthis,
								void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* function_to_bind);  // 2164
		CUtlDelegate<void(const EventClientOutput_t&)>::CUtlDelegate<CRenderService, CRenderService>(
								CRenderService* pthis,
								void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* function_to_bind); // 2519
		UtlMakeDelegate<CRenderService, CRenderService, const EventClientOutput_t&, void>(CRenderService* x,
													void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* func);  // 43
		FastDelegate1<const EventClientOutput_t&, void>::GetAbstractDelegate(); // 595
		CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1>::RegisterEventListener(
					const CUtlDelegate<void(const EventClientOutput_t&)>& listener,
					int nPriority,
					const char* pszName,
					EventID_t EventID);  // 43
	}
	GetPrimaryBinding(void); // 50
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 42
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventFrameBoundary_t&), void (*)(const EventFrameBoundary_t&), void this); // 1112
	implicit_cast<CRenderService*, CRenderService*>(CRenderService* inputVal); // 1113
	CRenderService::Convert<CRenderService, void (
															void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* function_to_bind,
															void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CRenderService, void (
												CRenderService* pthis,
												void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* function_to_bind);  // 1113
	FastDelegate1<const EventFrameBoundary_t&, void>::FastDelegate1<CRenderService, CRenderService>(
							CRenderService* pthis,
							void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* function_to_bind);  // 2164
	CUtlDelegate<void(const EventFrameBoundary_t&)>::CUtlDelegate<CRenderService, CRenderService>(
							CRenderService* pthis,
							void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* function_to_bind); // 2519
	UtlMakeDelegate<CRenderService, CRenderService, const EventFrameBoundary_t&, void>(CRenderService* x,
												void ()(CRenderService *, const EventFrameBoundary_t &) CRenderService::* func);  // 42
	FastDelegate1<const EventFrameBoundary_t&, void>::GetAbstractDelegate(); // 600
	CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1>::UnregisterEventListener(
				const CUtlDelegate<void(const EventFrameBoundary_t&)>& listener,
				EventID_t EventID);  // 42
	GetPrimaryBinding(void); // 69
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 43
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const EventClientOutput_t&), void (*)(const EventClientOutput_t&), void ( this); // 1112
	implicit_cast<CRenderService*, CRenderService*>(CRenderService* inputVal); // 1113
	CRenderService::Convert<CRenderService, void (
															void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* function_to_bind,
															void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CRenderService, void (
												CRenderService* pthis,
												void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* function_to_bind);  // 1113
	FastDelegate1<const EventClientOutput_t&, void>::FastDelegate1<CRenderService, CRenderService>(
							CRenderService* pthis,
							void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* function_to_bind);  // 2164
	CUtlDelegate<void(const EventClientOutput_t&)>::CUtlDelegate<CRenderService, CRenderService>(
							CRenderService* pthis,
							void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* function_to_bind); // 2519
	UtlMakeDelegate<CRenderService, CRenderService, const EventClientOutput_t&, void>(CRenderService* x,
												void ()(CRenderService *, const EventClientOutput_t &) CRenderService::* func);  // 43
	FastDelegate1<const EventClientOutput_t&, void>::GetAbstractDelegate(); // 600
	CEvent_Register<CEventIDManager_Default, EventClientOutput_t, void, 1>::UnregisterEventListener(
				const CUtlDelegate<void(const EventClientOutput_t&)>& listener,
				EventID_t EventID);  // 43
} /* size: 703, variables: 1, inline expansions: 26 (374 bytes) */

// <0059ACCE> engine2/renderservice.cpp:49
void SetInitialMultisampleType(RenderMultisampleType_t nType)
{
} /* size: 11 */

// <0059AA07> engine2/renderservice.cpp:57
// function calls: 14
void CRenderService::CRenderService()
{
	IAppSystem::IAppSystem(); // 78
	IEngineService::IEngineService(); // 23
	IRenderService::IRenderService(); // 120
	CBaseAppSystem<IRenderService>::CBaseAppSystem(); // 171
	CTier0AppSystem<IRenderService, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IRenderService, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IRenderService, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<IRenderService, 0>::CTier3AppSystem(); // 149
	CBaseEngineService<IRenderService>::CBaseEngineService(); // 57
} /* size: 0, inline expansions: 14 (0 bytes) */

// <0059A9EE> engine2/renderservice.cpp:57
void CRenderService::CRenderService()
{
} /* size: 0 */

// <0059A7F9> engine2/renderservice.cpp:61
// function calls: 10
void CRenderService::~CRenderService()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IRenderService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IRenderService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<IRenderService>::~CBaseEngineService(); // 63
} /* size: 49, inline expansions: 10 (286 bytes) */

// <0059A48E> engine2/renderservice.cpp:61
// function calls: 19
void CRenderService::~CRenderService()
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
	IEngineService::~IEngineService(); // 23
	IRenderService::~IRenderService(); // 120
	CBaseAppSystem<IRenderService>::~CBaseAppSystem(); // 171
	CTier0AppSystem<IRenderService, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<IRenderService, 0>::~CTier1AppSystem(); // 42
	CTier2AppSystem<IRenderService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IRenderService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<IRenderService>::~CBaseEngineService(); // 63
	CRenderService::~CRenderService(); // 63
} /* size: 93, inline expansions: 19 (330 bytes) */

// <0059A475> engine2/renderservice.cpp:61
void CRenderService::~CRenderService()
{
} /* size: 0 */

// <0059A3CB> engine2/renderservice.cpp:66
// function calls: 2
void CRenderService::ShouldActivate(const char* pLoopModeName)
{
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 68
} /* size: 80, inline expansions: 2 (22 bytes) */

// <005B1F54> engine2/renderservice.cpp:79
// variables: 3
// function calls: 6
void CRenderService::Init()
{
	InitReturnVal_t nRetVal; // 81
	CTier0AppSystem<IRenderService, 0>::Init(); // 71
	CTier2AppSystem<IRenderService, 0>::Init(); // 81
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 85
	{
		SwapChainHandle_t hSwapChain; // 87
		const RenderDeviceInfo_t& mode; // 88
		CRenderService::OnVideoModeChanged(
					SwapChainHandle_t hSwapChain,
					const RenderDeviceInfo_t& mode,
					RenderMultisampleType_t nMultisampleType);  // 89
	}
	CRenderService::Init(); // 79
} /* size: 180, variables: 1, inline expansions: 5 (141 bytes) */

// <0059A38C> engine2/renderservice.cpp:79
// variables: 3
void CRenderService::Init()
{
	InitReturnVal_t nRetVal; // 81
	{
		SwapChainHandle_t hSwapChain; // 87
		const RenderDeviceInfo_t& mode; // 88
	}
} /* size: 0, variables: 1 */

// <0059A2E9> engine2/renderservice.cpp:95
// function calls: 2
void CRenderService::Shutdown()
{
	CTier0AppSystem<IRenderService, 0>::Shutdown(); // 85
	CTier2AppSystem<IRenderService, 0>::Shutdown(); // 97
} /* size: 33, inline expansions: 2 (56 bytes) */

// <005B1ECD> engine2/renderservice.cpp:104
// variable: 1
void CRenderService::OnVideoModeChanged(SwapChainHandle_t hSwapChain, const RenderDeviceInfo_t& mode, RenderMultisampleType_t nMultisampleType)
{
	CUtlVector<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> > rtInfos; // 113
} /* size: 0, variables: 1 */

// <005AF3AC> engine2/renderservice.cpp:104
// variables: 8
// function calls: 169
void CRenderService::OnVideoModeChanged(SwapChainHandle_t hSwapChain, const RenderDeviceInfo_t& mode, RenderMultisampleType_t nMultisampleType)
{
	CUtlVector<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> > rtInfos; // 113
	CUtlMemory<SceneScratchRenderTargetInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SceneScratchRenderTargetInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::CUtlVector(); // 113
	{
		ImageFormat depthFmt; // 117
		ImageFormat fmtBackBufferRenderTarget; // 119
		ImageFormat fmtPrimaryRenderTarget; // 120
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 122
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 122
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 123
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 123
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 124
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 124
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 125
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 125
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 126
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						int nWidth,
						int nHeight,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 126
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 127
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 127
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 128
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 128
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 129
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 129
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 130
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 130
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 131
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 131
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 132
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 132
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 133
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 133
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 135
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 135
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 136
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 136
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 137
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 137
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 145
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 145
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 146
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 146
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 147
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 147
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 148
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 148
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 149
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 149
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 150
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 150
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 141
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 141
		Construct<SceneScratchRenderTargetInfo_t, SceneScratchRenderTargetInfo_t>(SceneScratchRenderTargetInfo_t* pMemory); // 1252
		CUtlMemory<SceneScratchRenderTargetInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::AddToTail(
				SceneScratchRenderTargetInfo_t& src);  // 142
		SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(
						SwapChainHandle_t hSwapChain,
						int nDivisor,
						ImageFormat fmt,
						RenderMultisampleType_t nMultisampleType,
						RuntimeTextureSpecificationFlags_t nTextureSpecFlags);  // 142
	}
	{
		const uint32  m; // 61
		uint32 h; // 62
		uint32 k; // 63
		const int  r; // 64
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 153
	CUtlMemory<SceneScratchRenderTargetInfo_t, int>::Purge(); // 903
	CUtlMemory<SceneScratchRenderTargetInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> >::~CUtlVector(); // 156
} /* size: 3200, variables: 1, inline expansions: 11 (317 bytes) */

// <0059A246> engine2/renderservice.cpp:104
// variables: 4
void CRenderService::OnVideoModeChanged(SwapChainHandle_t hSwapChain, const RenderDeviceInfo_t& mode, RenderMultisampleType_t nMultisampleType)
{
	CUtlVector<SceneScratchRenderTargetInfo_t, CUtlMemory<SceneScratchRenderTargetInfo_t, int> > rtInfos; // 113
	{
		ImageFormat depthFmt; // 117
		ImageFormat fmtBackBufferRenderTarget; // 119
		ImageFormat fmtPrimaryRenderTarget; // 120
	}
} /* size: 0, variables: 1 */

// <0059A218> engine2/renderservice.cpp:159
void CRenderService::GetMultisampleType()
{
} /* size: 8 */

// <00599DBD> engine2/renderservice.cpp:167
// variables: 13
// function calls: 8
void CRenderService::SetVideoMode(const RenderDeviceInfo_t& mode)
{
	SwapChainHandle_t hSwapChain; // 169
	RenderDeviceInfo_t actualMode; // 171
	RenderMultisampleType_t nMultisampleType; // 172
	PlatWindow_t hEngineWindow; // 175
	int nOldWidth; // 176
	int nOldHeight; // 176
	const char   __FUNCTION__; // 21488
	int nMonitor; // 200
	int nBoundsX; // 210
	int nBoundsY; // 211
	int nBoundsWidth; // 212
	int nBoundsHeight; // 213
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 182
	}
	RenderDisplayMode_t::IsValid(); // 180
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 187
	RenderDeviceInfo_t::IsExclusiveFullscreen(); // 412
	RenderDeviceInfo_t::SetCooperativeFullscreen(); // 414
	RenderDeviceInfo_t::DemoteExclusiveFullscreen(); // 189
	RenderDeviceInfo_t::DoesCoverMonitor(); // 217
	CRenderService::OnVideoModeChanged(
				SwapChainHandle_t hSwapChain,
				const RenderDeviceInfo_t& mode,
				RenderMultisampleType_t nMultisampleType);  // 237
} /* size: 0, variables: 12, inline expansions: 8 (118 bytes) */

// <00599D71> engine2/renderservice.cpp:243
void CRenderService::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <00599C60> engine2/renderservice.cpp:251
// variable: 1
// function calls: 2
void CRenderService::OnClientOutput(const EventClientOutput_t& msg)
{
	Scope s; // 253
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 253
	Scope::~Scope(); // 255
} /* size: 38, variables: 1, inline expansions: 2 (24 bytes) */

// <00599BB0> engine2/renderservice.cpp:257
// variable: 1
// function call: 1
void CRenderService::OnFrameBoundary(const EventFrameBoundary_t& msg)
{
	VideoModeChange_t* pModeChange; // 259
	VideoModeChange_t::ModeChangeComplete(); // 263
} /* size: 104, variables: 1, inline expansions: 1 (4 bytes) */

// <00599B82> engine2/renderservice.cpp:267
void CRenderService::GetManagedRenderPipeline()
{
} /* size: 15 */

