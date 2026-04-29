
//
// public/sbox/imanagedrenderpipeline.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	classes: 2
//	struct: 1
//

// <01200903> ../public/sbox/imanagedrenderpipeline.h:27
// member function: 1
// member variables: 6
// struct size: 40
struct ManagedRenderSetup_t {
	/* ../public/sbox/imanagedrenderpipeline.h:29 */
	void ManagedRenderSetup_t(ManagedRenderSetup_t* , IRenderContext* , ISceneView* , ISceneLayer* , ImageFormat, RenderMultisampleType_t, SceneSystemPerFrameStats_t* );
	IRenderContext * renderContext; /* 0 8 */
	ISceneView * sceneView; /* 8 8 */
	ISceneLayer * sceneLayer; /* 16 8 */
	ImageFormat colorImageFormat; /* 24 4 */
	RenderMultisampleType_t msaaLevel; /* 28 4 */
	SceneSystemPerFrameStats_t * stats; /* 32 8 */
};

// <0330314C> ../public/sbox/imanagedrenderpipeline.h:29
void ManagedRenderSetup_t::ManagedRenderSetup_t(IRenderContext* renderContext, ISceneView* sceneView, ISceneLayer* sceneLayer, ImageFormat colorFormat, RenderMultisampleType_t msaaLevel, SceneSystemPerFrameStats_t* stats)
{
} /* size: 0 */

// <033030EB> ../public/sbox/imanagedrenderpipeline.h:29
inline void ManagedRenderSetup_t::ManagedRenderSetup_t(IRenderContext* renderContext, ISceneView* sceneView, ISceneLayer* sceneLayer, ImageFormat colorFormat, RenderMultisampleType_t msaaLevel, SceneSystemPerFrameStats_t* stats)
{
} /* size: 0 */

// <01CBBFA3> ../public/sbox/imanagedrenderpipeline.h:55
// member functions: 5
// member variable: 1
// vtable entry: 1
// class size: 8
class IManagedRenderPipeline {
	void ~IManagedRenderPipeline(IManagedRenderPipeline* );
	void IManagedRenderPipeline(IManagedRenderPipeline* , IManagedRenderPipeline& );
	void IManagedRenderPipeline(IManagedRenderPipeline* , const IManagedRenderPipeline& );
	void IManagedRenderPipeline(IManagedRenderPipeline* );
	int ()(void) * * _vptr.IManagedRenderPipeline; /* 0 8 */
	/* ../public/sbox/imanagedrenderpipeline.h:59 */
	virtual void OnHook(IManagedRenderPipeline* , const char* , ManagedRenderHookStage, ISceneView* , RenderViewport_t, HSceneViewRenderTarget, HSceneViewRenderTarget, bool);
};

// <01CBC097> ../public/sbox/imanagedrenderpipeline.h:75
// member functions: 4
// member variable: 1
// class size: 1
class CMainThreadRenderScopeGuard {
	/* ../public/sbox/imanagedrenderpipeline.h:78 */
	void CMainThreadRenderScopeGuard(CMainThreadRenderScopeGuard* );
	/* ../public/sbox/imanagedrenderpipeline.h:79 */
	void ~CMainThreadRenderScopeGuard(CMainThreadRenderScopeGuard* );
private:
	bool previousScope; /* 0 1 */
	void CMainThreadRenderScopeGuard(class CMainThreadRenderScopeGuard *); /* linkage=_ZN27CMainThreadRenderScopeGuardC4Ev */
	void ~CMainThreadRenderScopeGuard(class CMainThreadRenderScopeGuard *); /* linkage=_ZN27CMainThreadRenderScopeGuardD4Ev */
};

