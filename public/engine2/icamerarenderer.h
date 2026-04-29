
//
// public/engine2/icamerarenderer.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <01DB85DD> ../public/engine2/icamerarenderer.h:5
void ICameraRenderer::ICameraRenderer()
{
} /* size: 0 */

// <01DB85C1> ../public/engine2/icamerarenderer.h:5
inline void ICameraRenderer::ICameraRenderer()
{
} /* size: 0 */

// <01D8D29D> ../public/engine2/icamerarenderer.h:5
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class ICameraRenderer {
	void ICameraRenderer(ICameraRenderer* , ICameraRenderer& );
	void ICameraRenderer(ICameraRenderer* , const ICameraRenderer& );
	void ICameraRenderer(ICameraRenderer* );
	void ~ICameraRenderer(ICameraRenderer* );
	int ()(void) * * _vptr.ICameraRenderer; /* 0 8 */
	/* ../public/engine2/icamerarenderer.h:9 */
	virtual HRenderTexture RenderToTexture(ICameraRenderer* , bool, int, int);
	/* ../public/engine2/icamerarenderer.h:10 */
	virtual bool RenderToLayer(ICameraRenderer* , bool, int, int, IProceduralLayerRenderer* , bool);
	void ICameraRenderer(class ICameraRenderer *, class ICameraRenderer &); /* linkage=_ZN15ICameraRendererC4EOS_ */
	void ICameraRenderer(class ICameraRenderer *, const class ICameraRenderer  &); /* linkage=_ZN15ICameraRendererC4ERKS_ */
	void ICameraRenderer(class ICameraRenderer *); /* linkage=_ZN15ICameraRendererC4Ev */
	void ~ICameraRenderer(class ICameraRenderer *); /* linkage=_ZN15ICameraRendererD4Ev */
	virtual HRenderTexture RenderToTexture(class ICameraRenderer *, bool, int, int); /* linkage=_ZN15ICameraRenderer15RenderToTextureEbii */
	virtual bool RenderToLayer(class ICameraRenderer *, bool, int, int, class IProceduralLayerRenderer *, bool); /* linkage=_ZN15ICameraRenderer13RenderToLayerEbiiP24IProceduralLayerRendererb */
};

