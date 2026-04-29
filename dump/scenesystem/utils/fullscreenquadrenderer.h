
//
// scenesystem/utils/fullscreenquadrenderer.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <03C8751B> ../scenesystem/utils/fullscreenquadrenderer.h:22
// function call: 1
void CFullscreenQuadRenderer::~CFullscreenQuadRenderer()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 22
} /* size: 24, inline expansions: 1 (5 bytes) */

// <03C87432> ../scenesystem/utils/fullscreenquadrenderer.h:22
// function calls: 3
void CFullscreenQuadRenderer::~CFullscreenQuadRenderer()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 22
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 22
	CFullscreenQuadRenderer::~CFullscreenQuadRenderer(); // 22
} /* size: 54, inline expansions: 3 (25 bytes) */

// <03C87416> ../scenesystem/utils/fullscreenquadrenderer.h:22
inline void CFullscreenQuadRenderer::~CFullscreenQuadRenderer()
{
} /* size: 0 */

// <03C86194> ../scenesystem/utils/fullscreenquadrenderer.h:22
// member functions: 14
// member variables: 3
// vtable entry: 1
// class size: 24
class CFullscreenQuadRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CFullscreenQuadRenderer(CFullscreenQuadRenderer* , CFullscreenQuadRenderer& );
	void CFullscreenQuadRenderer(CFullscreenQuadRenderer* , const CFullscreenQuadRenderer& );
	/* ../scenesystem/utils/fullscreenquadrenderer.cpp:46 */
	virtual void Render(CFullscreenQuadRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	/* ../scenesystem/utils/fullscreenquadrenderer.cpp:38 */
	void CFullscreenQuadRenderer(CFullscreenQuadRenderer* , HMaterial, const VertexColor_t& );
private:
	/* ../scenesystem/utils/fullscreenquadrenderer.h:31 */
	void CreateSimpleBuffers(CFullscreenQuadRenderer* , IRenderContext* );
	/* ../scenesystem/utils/fullscreenquadrenderer.h:32 */
	void DestroyBuffers(CFullscreenQuadRenderer* , IRenderContext* );
	HMaterialStrong m_hMaterial; /* 8 8 */
	VertexColor_t m_ModulationColor; /* 16 4 */
	virtual void ~CFullscreenQuadRenderer(CFullscreenQuadRenderer* );
	void CFullscreenQuadRenderer(class CFullscreenQuadRenderer *, class CFullscreenQuadRenderer &); /* linkage=_ZN23CFullscreenQuadRendererC4EOS_ */
	void CFullscreenQuadRenderer(class CFullscreenQuadRenderer *, const class CFullscreenQuadRenderer  &); /* linkage=_ZN23CFullscreenQuadRendererC4ERKS_ */
	virtual void Render(class CFullscreenQuadRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN23CFullscreenQuadRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	void CFullscreenQuadRenderer(class CFullscreenQuadRenderer *, HMaterial, const class VertexColor_t  &); /* linkage=_ZN23CFullscreenQuadRendererC4E11CWeakHandleI29InfoForResourceTypeIMaterial2ERK13VertexColor_t */
	void CreateSimpleBuffers(class CFullscreenQuadRenderer *, class IRenderContext *); /* linkage=_ZN23CFullscreenQuadRenderer19CreateSimpleBuffersEP14IRenderContext */
	void DestroyBuffers(class CFullscreenQuadRenderer *, class IRenderContext *); /* linkage=_ZN23CFullscreenQuadRenderer14DestroyBuffersEP14IRenderContext */
	virtual void ~CFullscreenQuadRenderer(class CFullscreenQuadRenderer *); /* linkage=_ZN23CFullscreenQuadRendererD4Ev */
};

// <03AE0404> ../scenesystem/utils/fullscreenquadrenderer.h:28
void CFullscreenQuadRenderer::CFullscreenQuadRenderer(HMaterial hMaterial, const VertexColor_t& modulationColor)
{
} /* size: 0 */

