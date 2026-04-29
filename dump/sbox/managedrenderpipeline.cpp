
//
// sbox/managedrenderpipeline.cpp
//
//	referenced by: libengine2.so
//
//	functions: 11
//	classes: 2
//

// <01CC8B7C> sbox/managedrenderpipeline.cpp:8
// function call: 1
void CManagedRenderLayer::~CManagedRenderLayer()
{
	CUtlString::~CUtlString(); // 8
} /* size: 33, inline expansions: 1 (14 bytes) */

// <01CC8A98> sbox/managedrenderpipeline.cpp:8
// function calls: 3
void CManagedRenderLayer::~CManagedRenderLayer()
{
	CUtlString::~CUtlString(); // 8
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 8
	CManagedRenderLayer::~CManagedRenderLayer(); // 8
} /* size: 60, inline expansions: 3 (38 bytes) */

// <01CC8A7C> sbox/managedrenderpipeline.cpp:8
inline void CManagedRenderLayer::~CManagedRenderLayer()
{
} /* size: 0 */

// <01CC2643> sbox/managedrenderpipeline.cpp:8
// member functions: 10
// member variables: 3
// vtable entry: 1
// class size: 24
class CManagedRenderLayer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CManagedRenderLayer(CManagedRenderLayer* , CManagedRenderLayer& );
	void CManagedRenderLayer(CManagedRenderLayer* , const CManagedRenderLayer& );
private:
	ManagedRenderHookStage stage; /* 8 4 */
	CUtlString debugName; /* 16 8 */
	/* sbox/managedrenderpipeline.cpp:15 */
	void CManagedRenderLayer(CManagedRenderLayer* , ManagedRenderHookStage, const char* );
	/* sbox/managedrenderpipeline.cpp:21 */
	virtual void Render(CManagedRenderLayer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	virtual void ~CManagedRenderLayer(CManagedRenderLayer* );
	void CManagedRenderLayer(class CManagedRenderLayer *, class CManagedRenderLayer &); /* linkage=_ZN19CManagedRenderLayerC4EOS_ */
	void CManagedRenderLayer(class CManagedRenderLayer *, const class CManagedRenderLayer  &); /* linkage=_ZN19CManagedRenderLayerC4ERKS_ */
	void CManagedRenderLayer(class CManagedRenderLayer *, enum ManagedRenderHookStage, const char  *); /* linkage=_ZN19CManagedRenderLayerC4E22ManagedRenderHookStagePKc */
	virtual void Render(class CManagedRenderLayer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN19CManagedRenderLayer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	virtual void ~CManagedRenderLayer(class CManagedRenderLayer *); /* linkage=_ZN19CManagedRenderLayerD4Ev */
};

// <01CCDCFC> sbox/managedrenderpipeline.cpp:15
void CManagedRenderLayer::CManagedRenderLayer(ManagedRenderHookStage stage, const char* debugName)
{
} /* size: 0 */

// <01CCDCCB> sbox/managedrenderpipeline.cpp:15
inline void CManagedRenderLayer::CManagedRenderLayer(ManagedRenderHookStage stage, const char* debugName)
{
} /* size: 0 */

// <01CCD75A> sbox/managedrenderpipeline.cpp:21
// variables: 7
// function calls: 15
void CManagedRenderLayer::Render(ISceneView* pView, IRenderContext* pCtx, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pPerFrameStats)
{
	Scope s; // 23
	ImageFormat colorFormat; // 25
	RenderMultisampleType_t msaaLevel; // 26
	RenderTargetDesc_t desc; // 28
	CMainThreadRenderScopeGuard mainThreadScopeGuard; // 37
	ManagedRenderSetup_t setup; // 42
	{
		const CTextureDesc* pDesc; // 31
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 31
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 33
	}
	CUtlString::Get(); // 23
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 23
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 112
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 112
	RenderTargetDesc_t::RenderTargetDesc_t(
				const RenderTargetDesc_t  &);  // 28
	ManagedRenderSetup_t::ManagedRenderSetup_t(
				IRenderContext* renderContext,
				ISceneView* sceneView,
				ISceneLayer* sceneLayer,
				ImageFormat colorFormat,
				RenderMultisampleType_t msaaLevel,
				SceneSystemPerFrameStats_t* stats);  // 42
	CMainThreadRenderScopeGuard::~CMainThreadRenderScopeGuard(); // 73
	CMainThreadRenderScopeGuard::~CMainThreadRenderScopeGuard(); // 44
	Scope::~Scope(); // 44
} /* size: 531, variables: 6, inline expansions: 11 (421 bytes) */

// <01CC22D3> sbox/managedrenderpipeline.cpp:47
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CManagedRenderPipeline : public IManagedRenderPipeline {
public:
	/* class IManagedRenderPipeline <ancestor>; */ /* 0 8 */
	void ~CManagedRenderPipeline(CManagedRenderPipeline* );
	void CManagedRenderPipeline(CManagedRenderPipeline* , CManagedRenderPipeline& );
	void CManagedRenderPipeline(CManagedRenderPipeline* , const CManagedRenderPipeline& );
	void CManagedRenderPipeline(CManagedRenderPipeline* );
	/* sbox/managedrenderpipeline.cpp:51 */
	virtual void OnHook(CManagedRenderPipeline* , const char* , ManagedRenderHookStage, ISceneView* , RenderViewport_t, HSceneViewRenderTarget, HSceneViewRenderTarget, bool);
	void ~CManagedRenderPipeline(class CManagedRenderPipeline *); /* linkage=_ZN22CManagedRenderPipelineD4Ev */
	void CManagedRenderPipeline(class CManagedRenderPipeline *, class CManagedRenderPipeline &); /* linkage=_ZN22CManagedRenderPipelineC4EOS_ */
	void CManagedRenderPipeline(class CManagedRenderPipeline *, const class CManagedRenderPipeline  &); /* linkage=_ZN22CManagedRenderPipelineC4ERKS_ */
	void CManagedRenderPipeline(class CManagedRenderPipeline *); /* linkage=_ZN22CManagedRenderPipelineC4Ev */
	virtual void OnHook(class CManagedRenderPipeline *, const char  *, enum ManagedRenderHookStage, class ISceneView *, class RenderViewport_t, HSceneViewRenderTarget, HSceneViewRenderTarget, bool); /* linkage=_ZN22CManagedRenderPipeline6OnHookEPKc22ManagedRenderHookStageP10ISceneView16RenderViewport_tP24HSceneViewRenderTarget__S7_b */
};

// <01CCD4BA> sbox/managedrenderpipeline.cpp:51
// variable: 1
// function calls: 6
void CManagedRenderPipeline::OnHook(const char* debugName, ManagedRenderHookStage stage, ISceneView* view, RenderViewport_t viewport, HSceneViewRenderTarget colorTarget, HSceneViewRenderTarget depthTarget, bool renderOnMainThread)
{
	ISceneLayer* pLayer; // 53
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 16
	CUtlString::operator=(
			const char* src);  // 18
	CUtlString::CUtlString(); // 16
	CManagedRenderLayer::CManagedRenderLayer(
				ManagedRenderHookStage stage,
				const char* debugName);  // 53
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 54
	SceneLayerOutputs_t::Init(
		HSceneViewRenderTarget hColor0,
		HSceneViewRenderTarget hDepth,
		RenderColorSpace_t allowSrgbWrites);  // 55
} /* size: 193, variables: 1, inline expansions: 6 (88 bytes) */

// <01CCD43F> sbox/managedrenderpipeline.cpp:64
// function call: 1
void CMainThreadRenderScopeGuard::CMainThreadRenderScopeGuard()
{
	CMainThreadRenderScopeGuard::CMainThreadRenderScopeGuard(); // 64
} /* size: 85, inline expansions: 1 (53 bytes) */

// <01CCD423> sbox/managedrenderpipeline.cpp:64
void CMainThreadRenderScopeGuard::CMainThreadRenderScopeGuard()
{
} /* size: 0 */

// <01CCD3C2> sbox/managedrenderpipeline.cpp:73
// function call: 1
void CMainThreadRenderScopeGuard::~CMainThreadRenderScopeGuard()
{
	CMainThreadRenderScopeGuard::~CMainThreadRenderScopeGuard(); // 73
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01CCD3A6> sbox/managedrenderpipeline.cpp:73
void CMainThreadRenderScopeGuard::~CMainThreadRenderScopeGuard()
{
} /* size: 0 */

