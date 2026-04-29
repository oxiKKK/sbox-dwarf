
//
// renderingpipelines/quad_renderer.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	class: 1
//

// <028BA957> renderingpipelines/quad_renderer.h:8
// function call: 1
void CQuadRenderer::~CQuadRenderer()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 8
} /* size: 24, inline expansions: 1 (5 bytes) */

// <028BA86D> renderingpipelines/quad_renderer.h:8
// function calls: 3
void CQuadRenderer::~CQuadRenderer()
{
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 8
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 8
	CQuadRenderer::~CQuadRenderer(); // 8
} /* size: 54, inline expansions: 3 (25 bytes) */

// <028BA850> renderingpipelines/quad_renderer.h:8
inline void CQuadRenderer::~CQuadRenderer()
{
} /* size: 0 */

// <028AD2CB> renderingpipelines/quad_renderer.h:8
// member functions: 13
// member variables: 7
// vtable entry: 1
// class size: 88
class CQuadRenderer : public IProceduralLayerRenderer {
	/* renderingpipelines/quad_renderer.h:18 */
	struct Vertex_t {
		Vector2D m_vPosition; /* 0 8 */
		Vector2D m_vTexCoord; /* 8 8 */
		Vector m_vCameraToFarPlaneDirWs; /* 16 12 */
		void Vertex_t(Vertex_t* );
		Vertex_t& operator=(Vertex_t* , const Vertex_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
private:
	CUtlStringToken m_shaderMode; /* 8 4 */
	HMaterialStrong m_hMaterial; /* 16 8 */
	RenderViewport_t m_srcViewport; /* 24 28 */
	RenderViewport_t m_destViewport; /* 52 28 */
	int m_nSrcTextureWidth; /* 80 4 */
	int m_nSrcTextureHeight; /* 84 4 */
	/* renderingpipelines/quad_renderer.h:25 */
	void CQuadRenderer(CQuadRenderer* , const CUtlStringToken& , HMaterial, const RenderViewport_t& );
	/* renderingpipelines/quad_renderer.h:35 */
	void CQuadRenderer(CQuadRenderer* , const CUtlStringToken& , HMaterial, int, int, const RenderViewport_t& , const RenderViewport_t& );
	/* renderingpipelines/quad_renderer.cpp:34 */
	virtual void Render(CQuadRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	/* renderingpipelines/quad_renderer.cpp:13 */
	RenderInputLayout_t GetQuadInputLayout(void);
	virtual void ~CQuadRenderer(CQuadRenderer* );
	virtual inline void ~CQuadRenderer(class CQuadRenderer *); /* linkage=_ZN13CQuadRendererD4Ev */
	virtual void Render(class CQuadRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN13CQuadRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	void CQuadRenderer(class CQuadRenderer *, const class CUtlStringToken  &, HMaterial, int, int, const class RenderViewport_t  &, const class RenderViewport_t  &); /* linkage=_ZN13CQuadRendererC4ERK15CUtlStringToken11CWeakHandleI29InfoForResourceTypeIMaterial2EiiRK16RenderViewport_tS8_ */
	void CQuadRenderer(class CQuadRenderer *, const class CUtlStringToken  &, HMaterial, const class RenderViewport_t  &); /* linkage=_ZN13CQuadRendererC4ERK15CUtlStringToken11CWeakHandleI29InfoForResourceTypeIMaterial2ERK16RenderViewport_t */
	RenderInputLayout_t GetQuadInputLayout(void); /* linkage=_ZN13CQuadRenderer18GetQuadInputLayoutEv */
	virtual void ~CQuadRenderer(class CQuadRenderer *); /* linkage=_ZN13CQuadRendererD4Ev */
};

// <028BB03E> renderingpipelines/quad_renderer.h:18
inline void Vertex_t::operator=(const Vertex_t &)
{
} /* size: 0 */

// <028BAB6B> renderingpipelines/quad_renderer.h:18
void Vertex_t::Vertex_t()
{
} /* size: 0 */

// <028BAB4E> renderingpipelines/quad_renderer.h:18
inline void Vertex_t::Vertex_t()
{
} /* size: 0 */

// <027C8BCB> renderingpipelines/quad_renderer.h:35
void CQuadRenderer::CQuadRenderer(const CUtlStringToken& shaderMode, HMaterial hMaterial, int nSrcWidth, int nSrcHeight, const RenderViewport_t& srcViewport, const RenderViewport_t& destViewport)
{
} /* size: 0 */

// <027C8B6A> renderingpipelines/quad_renderer.h:35
inline void CQuadRenderer::CQuadRenderer(const CUtlStringToken& shaderMode, HMaterial hMaterial, int nSrcWidth, int nSrcHeight, const RenderViewport_t& srcViewport, const RenderViewport_t& destViewport)
{
} /* size: 0 */

