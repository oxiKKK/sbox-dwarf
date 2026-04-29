
//
// engine2/camerarenderer.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//	struct: 1
//

// <01DB6A1B> engine2/camerarenderer.h:15
void CViewSetup::~CViewSetup()
{
} /* size: 0 */

// <01DB69FF> engine2/camerarenderer.h:15
inline void CViewSetup::~CViewSetup()
{
} /* size: 0 */

// <01D4F1A3> engine2/camerarenderer.h:15
// member function: 1
// member variables: 20
// struct size: 1,264
struct CViewSetup {
	CFrustum m_calculatedFrustum __attribute__((__aligned__(16))); /* 0 1136 */
	int x; /* 1136 4 */
	int y; /* 1140 4 */
	int width; /* 1144 4 */
	int height; /* 1148 4 */
	bool m_bOrtho; /* 1152 1 */
	float m_OrthoLeft; /* 1156 4 */
	float m_OrthoTop; /* 1160 4 */
	float m_OrthoRight; /* 1164 4 */
	float m_OrthoBottom; /* 1168 4 */
	float fov; /* 1172 4 */
	Vector origin; /* 1176 12 */
	QAngle angles; /* 1188 12 */
	float zNear; /* 1200 4 */
	float zFar; /* 1204 4 */
	Vector originBeforeVr; /* 1208 12 */
	QAngle anglesBeforeVr; /* 1220 12 */
	float m_flAspectRatio; /* 1232 4 */
	int m_nOverrideLODLevel; /* 1236 4 */
	Vector4D m_ClipSpaceBounds; /* 1240 16 */
	void ~CViewSetup(CViewSetup* );
} __attribute__((__aligned__(16)));

// <01D8CC75> engine2/camerarenderer.h:62
// member functions: 46
// member variables: 39
// vtable entries: 2
// class size: 2,720
class CCameraRenderer : public ICameraRenderer {
public:
	/* class ICameraRenderer <ancestor>; */ /* 0 8 */
	void CCameraRenderer(CCameraRenderer* , const CCameraRenderer& );
	/* engine2/camerarenderer.cpp:137 */
	void CCameraRenderer(CCameraRenderer* , const char* , int);
	/* engine2/camerarenderer.cpp:143 */
	void ~CCameraRenderer(CCameraRenderer* );
	/* engine2/camerarenderer.cpp:147 */
	void ClearSceneWorlds(CCameraRenderer* );
	/* engine2/camerarenderer.cpp:153 */
	void AddSceneWorld(CCameraRenderer* , ISceneWorld* );
	/* engine2/camerarenderer.cpp:167 */
	void SetRenderAttributes(CCameraRenderer* , CRenderAttributes* );
	/* engine2/camerarenderer.cpp:683 */
	void Render(CCameraRenderer* , SwapChainHandle_t);
	/* engine2/camerarenderer.cpp:713 */
	void RenderToTexture(CCameraRenderer* , HRenderTexture, ISceneView* );
	/* engine2/camerarenderer.cpp:864 */
	void RenderToCubeTexture(CCameraRenderer* , HRenderTexture, int);
	/* engine2/camerarenderer.cpp:811 */
	void RenderToBitmap(CCameraRenderer* , void* , int, int, int);
	/* engine2/camerarenderer.cpp:897 */
	void RenderStereo(CCameraRenderer* , int, int, int, bool);
	/* engine2/camerarenderer.cpp:967 */
	void SubmitStereo(CCameraRenderer* , int, int);
	/* engine2/camerarenderer.cpp:998 */
	void BlitStereo(CCameraRenderer* , int, int);
private:
	HSceneViewRenderTarget m_StereoColor; /* 8 8 */
	HSceneViewRenderTarget m_StereoDepth; /* 16 8 */
	int ViewUniqueId; /* 24 4 */
	int CameraId; /* 28 4 */
	CUtlString CameraName; /* 32 8 */
	Vector CameraPosition; /* 40 12 */
	QAngle CameraRotation; /* 52 12 */
	float FieldOfView; /* 64 4 */
	float ZNear; /* 68 4 */
	float ZFar; /* 72 4 */
	Rect_t Rect; /* 76 16 */
	Vector4D Viewport; /* 92 16 */
	Vector4D ClipSpaceBounds; /* 108 16 */
	bool Ortho; /* 124 1 */
	float OrthoSize; /* 128 4 */
	bool NeedTonemapRenderer; /* 132 1 */
	SceneViewFlags_t SceneViewFlags; /* 136 4 */
	RenderClearFlags_t ClearFlags; /* 140 4 */
	bool IsRenderingStereo; /* 144 1 */
	Vector MiddleEyePosition; /* 148 12 */
	QAngle MiddleEyeRotation; /* 160 12 */
	float m_flTime; /* 172 4 */
	VMatrix OverrideProjection; /* 176 64 */
	bool HasOverrideProjection; /* 240 1 */
	bool EnablePostprocessing; /* 241 1 */
	bool EnableEngineOverlays; /* 242 1 */
	bool FlipX; /* 243 1 */
	bool FlipY; /* 244 1 */
	/* engine2/camerarenderer.cpp:335 */
	bool AddLayersToView(CCameraRenderer* , ISceneView* , HSceneViewRenderTarget, HSceneViewRenderTarget, const RenderViewport_t& );
	/* engine2/camerarenderer.cpp:314 */
	bool AddOverlaysToView(CCameraRenderer* , ISceneView* , HSceneViewRenderTarget, const RenderViewport_t& );
	/* engine2/camerarenderer.cpp:174 */
	ISceneView* CreateView(CCameraRenderer* , const RenderViewport_t& , SwapChainHandle_t, ISceneView* );
	ISceneWorld * m_pSceneWorld; /* 248 8 */
	CRenderAttributes m_RenderAttributes; /* 256 1184 */
	CFrustum m_Frustum __attribute__((__aligned__(16))); /* 1440 1136 */
	Vector VisCameraPosition; /* 2576 12 */
	CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> > m_ExtraWorlds; /* 2592 32 */
	bool SaveRenderTarget; /* 2624 1 */
	HSceneViewRenderTarget m_ColorRenderTarget; /* 2632 8 */
	ISceneView * m_lastView; /* 2640 8 */
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_renderTags; /* 2648 32 */
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_excludeTags; /* 2680 32 */
	/* engine2/camerarenderer.cpp:640 */
	void UpdateFrustum(CCameraRenderer* , const CViewSetup* );
	/* engine2/camerarenderer.cpp:1054 */
	virtual HRenderTexture RenderToTexture(CCameraRenderer* , bool, int, int);
	/* engine2/camerarenderer.cpp:1087 */
	virtual bool RenderToLayer(CCameraRenderer* , bool, int, int, IProceduralLayerRenderer* , bool);
	/* engine2/camerarenderer.cpp:1123 */
	void ClearRenderTags(CCameraRenderer* );
	/* engine2/camerarenderer.cpp:1128 */
	void ClearExcludeTags(CCameraRenderer* );
	/* engine2/camerarenderer.cpp:1133 */
	void AddRenderTag(CCameraRenderer* , uint);
	/* engine2/camerarenderer.cpp:1138 */
	void AddExcludeTag(CCameraRenderer* , uint);
	void CCameraRenderer(class CCameraRenderer *, const class CCameraRenderer  &); /* linkage=_ZN15CCameraRendererC4ERKS_ */
	void CCameraRenderer(class CCameraRenderer *, const char  *, int); /* linkage=_ZN15CCameraRendererC4EPKci */
	void ~CCameraRenderer(class CCameraRenderer *); /* linkage=_ZN15CCameraRendererD4Ev */
	void ClearSceneWorlds(class CCameraRenderer *); /* linkage=_ZN15CCameraRenderer16ClearSceneWorldsEv */
	void AddSceneWorld(class CCameraRenderer *, class ISceneWorld *); /* linkage=_ZN15CCameraRenderer13AddSceneWorldEP11ISceneWorld */
	void SetRenderAttributes(class CCameraRenderer *, class CRenderAttributes *); /* linkage=_ZN15CCameraRenderer19SetRenderAttributesEP17CRenderAttributes */
	void Render(class CCameraRenderer *, SwapChainHandle_t); /* linkage=_ZN15CCameraRenderer6RenderEP19SwapChainHandle_t__ */
	void RenderToTexture(class CCameraRenderer *, HRenderTexture, class ISceneView *); /* linkage=_ZN15CCameraRenderer15RenderToTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP10ISceneView */
	void RenderToCubeTexture(class CCameraRenderer *, HRenderTexture, int); /* linkage=_ZN15CCameraRenderer19RenderToCubeTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	void RenderToBitmap(class CCameraRenderer *, void *, int, int, int); /* linkage=_ZN15CCameraRenderer14RenderToBitmapEPviii */
	void RenderStereo(class CCameraRenderer *, int, int, int, bool); /* linkage=_ZN15CCameraRenderer12RenderStereoEiiib */
	void SubmitStereo(class CCameraRenderer *, int, int); /* linkage=_ZN15CCameraRenderer12SubmitStereoEii */
	void BlitStereo(class CCameraRenderer *, int, int); /* linkage=_ZN15CCameraRenderer10BlitStereoEii */
	bool AddLayersToView(class CCameraRenderer *, class ISceneView *, HSceneViewRenderTarget, HSceneViewRenderTarget, const class RenderViewport_t  &); /* linkage=_ZN15CCameraRenderer15AddLayersToViewEP10ISceneViewP24HSceneViewRenderTarget__S3_RK16RenderViewport_t */
	bool AddOverlaysToView(class CCameraRenderer *, class ISceneView *, HSceneViewRenderTarget, const class RenderViewport_t  &); /* linkage=_ZN15CCameraRenderer17AddOverlaysToViewEP10ISceneViewP24HSceneViewRenderTarget__RK16RenderViewport_t */
	class ISceneView * CreateView(class CCameraRenderer *, const class RenderViewport_t  &, SwapChainHandle_t, class ISceneView *); /* linkage=_ZN15CCameraRenderer10CreateViewERK16RenderViewport_tP19SwapChainHandle_t__P10ISceneView */
	/* <1dd3c19> engine2/camerarenderer.cpp:640 */
	void UpdateFrustum(class CCameraRenderer *, const class CViewSetup  *); /* linkage=_ZN15CCameraRenderer13UpdateFrustumEPK10CViewSetup */
	virtual HRenderTexture RenderToTexture(class CCameraRenderer *, bool, int, int); /* linkage=_ZN15CCameraRenderer15RenderToTextureEbii */
	virtual bool RenderToLayer(class CCameraRenderer *, bool, int, int, class IProceduralLayerRenderer *, bool); /* linkage=_ZN15CCameraRenderer13RenderToLayerEbiiP24IProceduralLayerRendererb */
	void ClearRenderTags(class CCameraRenderer *); /* linkage=_ZN15CCameraRenderer15ClearRenderTagsEv */
	void ClearExcludeTags(class CCameraRenderer *); /* linkage=_ZN15CCameraRenderer16ClearExcludeTagsEv */
	void AddRenderTag(class CCameraRenderer *, uint); /* linkage=_ZN15CCameraRenderer12AddRenderTagEj */
	void AddExcludeTag(class CCameraRenderer *, uint); /* linkage=_ZN15CCameraRenderer13AddExcludeTagEj */
} __attribute__((__aligned__(16)));

// <0125A6F3> engine2/camerarenderer.h:67
void CCameraRenderer::CCameraRenderer(const char* pName, int cameraId)
{
} /* size: 0 */

// <0125A72B> engine2/camerarenderer.h:68
void CCameraRenderer::~CCameraRenderer()
{
} /* size: 0 */

