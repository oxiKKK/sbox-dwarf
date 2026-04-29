
//
// public/scenesystem/toollayers.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//

// <027D6A29> ../public/scenesystem/toollayers.h:13
// variables: 2
inline void AddOpqaueToolLayers(ISceneView* pView, const RenderViewport_t& viewport, HSceneViewRenderTarget hColorTarget, HSceneViewRenderTarget hDepthTarget)
{
	ISceneLayer* pToolsOpaqueLayer; // 15
	ISceneLayer* pToolsPreTranslucentLayer; // 19
} /* size: 0, variables: 2 */

// <027D69D9> ../public/scenesystem/toollayers.h:29
// variable: 1
inline void AddTranslucentToolLayers(ISceneView* pView, const RenderViewport_t& viewport, HSceneViewRenderTarget hColorTarget, HSceneViewRenderTarget hDepthTarget)
{
	ISceneLayer* pToolTranslucentLayer; // 31
} /* size: 0, variables: 1 */

// <01DC8299> ../public/scenesystem/toollayers.h:41
// variables: 2
inline ISceneLayer* AddDebugOverlayLayers(ISceneView* pView, const RenderViewport_t& viewport, HSceneViewRenderTarget hColor, HSceneViewRenderTarget hDepth, ISceneLayer** ppDebugObjectLayerOut)
{
	ISceneLayer* pDebugDrawLayer; // 43
	ISceneLayer* pDebugObjectLayer; // 48
} /* size: 0, variables: 2 */

