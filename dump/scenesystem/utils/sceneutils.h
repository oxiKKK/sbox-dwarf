
//
// scenesystem/utils/sceneutils.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	class: 1
//

// <03125047> ../scenesystem/utils/sceneutils.h:33
// variables: 2
void DrawMaterialQuad<VertexUVPos_t, DrawMaterialQuad<VertexUVPos_t>(IRenderContext*, CRenderAttributes*, const IMaterial2*, const Vector&, const Vector&, const Vector&, float, float, float, float, const CUtlStringToken&, const RsStencilStateOverride_t*, int, int, int, int)::<lambda(VertexUVPos_t*, int, int)> >(IRenderContext* pContext, CRenderAttributes* pAttributes, const IMaterial2* pMaterial, f, const Vector& vecULCornerPos, const Vector& vecURCornerPos, const Vector& vecLLCornerPos, float flUMin, float flUMax, float flVMin, float flVMax, const CUtlStringToken& shaderMode, const RsStencilStateOverride_t* pOverridestate, int nRed, int nGreen, int nBlue, int nAlpha)
{
	CDynamicVertexData<VertexUVPos_t> vb; // 40
	IMaterialMode* pMode; // 65
} /* size: 0, variables: 2 */

// <031295D3> ../scenesystem/utils/sceneutils.h:84
void DrawMaterialQuad<VertexUVPos_t>(IRenderContext* pContext, CRenderAttributes* pAttributes, const IMaterial2* pMaterial, const Vector& vecULCornerPos, const Vector& vecURCornerPos, const Vector& vecLLCornerPos, float flUMin, float flUMax, float flVMin, float flVMax, const CUtlStringToken& shaderMode, const RsStencilStateOverride_t* pOverridestate, int nRed, int nGreen, int nBlue, int nAlpha)
{
} /* size: 0 */

// <03AF4AB6> ../scenesystem/utils/sceneutils.h:98
void CSceneUtils::CSceneUtils()
{
} /* size: 0 */

// <03AF4A9A> ../scenesystem/utils/sceneutils.h:98
inline void CSceneUtils::CSceneUtils()
{
} /* size: 0 */

// <03AE1953> ../scenesystem/utils/sceneutils.h:98
// variable: 1
// function calls: 13
void CSceneUtils::~CSceneUtils()
{
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::~CUtlAttributeList(); // 98
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<ISceneUtils, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<ISceneUtils, 0>::~CTier3AppSystem(); // 98
} /* size: 133, inline expansions: 13 (490 bytes) */

// <03AE1937> ../scenesystem/utils/sceneutils.h:98
inline void CSceneUtils::~CSceneUtils()
{
} /* size: 0 */

// <03AD9FE4> ../scenesystem/utils/sceneutils.h:98
// member functions: 88
// member variables: 4
// vtable entries: 39
// class size: 416
class CSceneUtils : public CTier3AppSystem<ISceneUtils, 0> {
	/* ../scenesystem/utils/sceneutils.h:165 */
	struct RenderingPipelineInfo_t {
		/* ../scenesystem/utils/sceneutils.h:167 */
		void RenderingPipelineInfo_t(RenderingPipelineInfo_t* , IRenderingPipeline* , bool);
		IRenderingPipeline * m_pPipeline; /* 0 8 */
		bool m_bIsAlias; /* 8 1 */
		/* ../scenesystem/utils/sceneutils.h:173 */
		bool operator==(RenderingPipelineInfo_t* , const RenderingPipelineInfo_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier3AppSystem<ISceneUtils, 0> <ancestor>; */ /* 0 48 */
	void CSceneUtils(CSceneUtils* , CSceneUtils& );
	void CSceneUtils(CSceneUtils* , const CSceneUtils& );
	void CSceneUtils(CSceneUtils* );
	/* ../scenesystem/utils/sceneutils.cpp:86 */
	virtual const AppSystemInfo_t* GetDependencies(CSceneUtils* );
	/* ../scenesystem/utils/sceneutils.cpp:95 */
	virtual InitReturnVal_t Init(CSceneUtils* );
	/* ../scenesystem/utils/sceneutils.cpp:109 */
	virtual void Shutdown(CSceneUtils* );
	/* ../scenesystem/utils/sceneutils.cpp:254 */
	virtual ISceneLayer* AddSimpleLayerToView(CSceneUtils* , ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , ESceneObjectFlags, ESceneObjectFlags, const SceneLayerOutputs_t& );
	/* ../scenesystem/utils/sceneutils.cpp:197 */
	virtual ITonemapSystem* CreateTonemapSystem(CSceneUtils* );
	/* ../scenesystem/utils/sceneutils.cpp:207 */
	virtual IVolumetricFog* CreateVolumetricFog(CSceneUtils* );
	/* ../scenesystem/utils/sceneutils.cpp:216 */
	virtual void DestroyTonemapSystem(CSceneUtils* , ITonemapSystem* );
	/* ../scenesystem/utils/sceneutils.cpp:222 */
	virtual void DestroyVolumetricFog(CSceneUtils* , IVolumetricFog* );
	/* ../scenesystem/utils/sceneutils.cpp:124 */
	virtual void RegisterRenderingPipeline(CSceneUtils* , IRenderingPipeline* );
	/* ../scenesystem/utils/sceneutils.cpp:170 */
	virtual void UnregisterRenderingPipeline(CSceneUtils* , IRenderingPipeline* );
	/* ../scenesystem/utils/sceneutils.cpp:191 */
	virtual IRenderingPipeline* FindRenderingPipeline(CSceneUtils* , CUtlStringToken);
	/* ../scenesystem/utils/sceneutils.cpp:139 */
	virtual IRenderingPipeline* AliasRenderingPipeline(CSceneUtils* , const char* , CUtlStringToken);
	/* ../scenesystem/utils/sceneutils.cpp:315 */
	virtual ISceneLayer* AddTextureDebugLayer(CSceneUtils* , ISceneView* , const char* , const SceneLayerOutputs_t& , const RenderViewport_t& , HSceneViewRenderTarget, int, bool);
	/* ../scenesystem/utils/sceneutils.cpp:328 */
	virtual ISceneLayer* AddTextureDebugLayer(CSceneUtils* , ISceneView* , const char* , const SceneLayerOutputs_t& , const RenderViewport_t& , HRenderTexture, int, bool);
	/* ../scenesystem/utils/sceneutils.cpp:342 */
	virtual int AllocateViewProducerIndex(CSceneUtils* );
	/* ../scenesystem/utils/sceneutils.cpp:347 */
	virtual void ComputeScreenSpaceVertices(CSceneUtils* , const RenderViewport_t& , int, int, int, int, float, float, float, float, int, int, ScreenSpaceVertex_t* );
	/* ../scenesystem/utils/sceneutils.cpp:391 */
	virtual IProceduralLayerRenderer* CreateFullscreenQuadRenderer(CSceneUtils* , HMaterial, const VertexColor_t& );
	/* ../scenesystem/utils/sceneutils.cpp:396 */
	virtual IProceduralLayerRenderer* CreateScalableAORenderer(CSceneUtils* , RenderMultisampleType_t, float, float, float, bool);
	/* ../scenesystem/utils/sceneutils.cpp:463 */
	virtual ISceneLayer* AddTextureBarrierLayer(CSceneUtils* , ISceneView* , const char* , int, const HRenderTexture* , int, const HSceneViewRenderTarget* , const SceneLayerMSAAMode_t* , const RenderImageLayout_t* );
	/* ../scenesystem/utils/sceneutils.cpp:263 */
	virtual IModelRenderHelper* CreateModelRenderHelper(CSceneUtils* );
	/* ../scenesystem/utils/sceneutils.h:134 */
	virtual CSceneObject* RenderWireframeSphere(CSceneUtils* , ISceneWorld* , const Vector& , float, int, int, Color, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:135 */
	virtual CSceneObject* RenderSphere(CSceneUtils* , ISceneWorld* , const Vector& , float, int, int, Color, bool, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:136 */
	virtual CSceneObject* RenderSphere(CSceneUtils* , ISceneWorld* , const Vector& , float, int, int, Color, HMaterial, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:137 */
	virtual CSceneObject* RenderWireframeBox(CSceneUtils* , ISceneWorld* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:138 */
	virtual CSceneObject* RenderWireframeSweptBox(CSceneUtils* , ISceneWorld* , const Vector& , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:139 */
	virtual CSceneObject* RenderBox(CSceneUtils* , ISceneWorld* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:140 */
	virtual CSceneObject* RenderBox(CSceneUtils* , ISceneWorld* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, HMaterial, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:141 */
	virtual CSceneObject* RenderAxes(CSceneUtils* , ISceneWorld* , const Vector& , float, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:142 */
	virtual CSceneObject* RenderAxes(CSceneUtils* , ISceneWorld* , const matrix3x4_t& , float, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:143 */
	virtual CSceneObject* RenderLine(CSceneUtils* , ISceneWorld* , const Vector& , const Vector& , Color, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:144 */
	virtual CSceneObject* RenderTriangle(CSceneUtils* , ISceneWorld* , const Vector& , const Vector& , const Vector& , Color, bool, bool);
	/* ../scenesystem/utils/sceneutils.h:145 */
	virtual CSceneObject* RenderTriangle(CSceneUtils* , ISceneWorld* , const Vector& , const Vector& , const Vector& , Color, HMaterial, bool);
	/* ../scenesystem/utils/sceneutils.h:146 */
	virtual CSceneObject* RenderQuad(CSceneUtils* , ISceneWorld* , HMaterial, float, float, float, float, float, float, float, float, float, const Color& , bool);
	/* ../scenesystem/utils/sceneutils.h:147 */
	virtual CSceneObject* DrawScreenSpaceRectangle(CSceneUtils* , ISceneWorld* , HMaterial, int, int, int, int, float, float, float, float, int, int, int, int, float, bool);
	/* ../scenesystem/utils/sceneutils.h:156 */
	virtual CSceneObject* DrawNDCSpaceUntexturedPolygon(CSceneUtils* , ISceneWorld* , HMaterial, int, Vector2D* , bool);
	/* ../scenesystem/utils/sceneutils.h:158 */
	virtual CSceneObject* Create6FaceSkybox(CSceneUtils* , ISceneWorld* , HMaterial* , CUtlStringToken);
	/* ../scenesystem/utils/sceneutils.cpp:227 */
	virtual ISceneView* CreateClearRenderTargetView(CSceneUtils* , const char* , int, HRenderTexture, HRenderTexture, const Vector4D& );
	/* ../scenesystem/utils/sceneutils.cpp:485 */
	virtual void Compute3DSkyboxFrustum(CSceneUtils* , const CFrustum& , const Vector& , const QAngle& , const Vector& , float, CFrustum* );
	/* ../scenesystem/utils/sceneutils.cpp:518 */
	virtual bool FindClipSpaceRectForObject(CSceneUtils* , const CSceneObject* , const ISceneView* , Vector4D& );
private:
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16> m_RenderingPipelines; /* 48 336 */
	CInterlockedInt m_nCurrentViewProducerIndex __attribute__((__aligned__(4))); /* 384 4 */
	CThreadFastMutex m_pixelVisMutex; /* 392 24 */
	void ~CSceneUtils(CSceneUtils* );
	void CSceneUtils(class CSceneUtils *, class CSceneUtils &); /* linkage=_ZN11CSceneUtilsC4EOS_ */
	void CSceneUtils(class CSceneUtils *, const class CSceneUtils  &); /* linkage=_ZN11CSceneUtilsC4ERKS_ */
	void CSceneUtils(class CSceneUtils *); /* linkage=_ZN11CSceneUtilsC4Ev */
	virtual const class AppSystemInfo_t  * GetDependencies(class CSceneUtils *); /* linkage=_ZN11CSceneUtils15GetDependenciesEv */
	virtual enum InitReturnVal_t Init(class CSceneUtils *); /* linkage=_ZN11CSceneUtils4InitEv */
	virtual void Shutdown(class CSceneUtils *); /* linkage=_ZN11CSceneUtils8ShutdownEv */
	virtual class ISceneLayer * AddSimpleLayerToView(class CSceneUtils *, class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, enum ESceneObjectFlags, enum ESceneObjectFlags, const class SceneLayerOutputs_t  &); /* linkage=_ZN11CSceneUtils20AddSimpleLayerToViewEP10ISceneViewPKcRK16RenderViewport_tRK15CUtlStringToken17ESceneObjectFlagsSA_RK19SceneLayerOutputs_t */
	/* <3af88eb> ../scenesystem/utils/sceneutils.cpp:197 */
	virtual class ITonemapSystem * CreateTonemapSystem(class CSceneUtils *); /* linkage=_ZN11CSceneUtils19CreateTonemapSystemEv */
	/* <3af885c> ../scenesystem/utils/sceneutils.cpp:207 */
	virtual class IVolumetricFog * CreateVolumetricFog(class CSceneUtils *); /* linkage=_ZN11CSceneUtils19CreateVolumetricFogEv */
	/* <3af89e8> ../scenesystem/utils/sceneutils.cpp:216 */
	virtual void DestroyTonemapSystem(class CSceneUtils *, class ITonemapSystem *); /* linkage=_ZN11CSceneUtils20DestroyTonemapSystemEP14ITonemapSystem */
	virtual void DestroyVolumetricFog(class CSceneUtils *, class IVolumetricFog *); /* linkage=_ZN11CSceneUtils20DestroyVolumetricFogEP14IVolumetricFog */
	virtual void RegisterRenderingPipeline(class CSceneUtils *, class IRenderingPipeline *); /* linkage=_ZN11CSceneUtils25RegisterRenderingPipelineEP18IRenderingPipeline */
	virtual void UnregisterRenderingPipeline(class CSceneUtils *, class IRenderingPipeline *); /* linkage=_ZN11CSceneUtils27UnregisterRenderingPipelineEP18IRenderingPipeline */
	virtual class IRenderingPipeline * FindRenderingPipeline(class CSceneUtils *, class CUtlStringToken); /* linkage=_ZN11CSceneUtils21FindRenderingPipelineE15CUtlStringToken */
	virtual class IRenderingPipeline * AliasRenderingPipeline(class CSceneUtils *, const char  *, class CUtlStringToken); /* linkage=_ZN11CSceneUtils22AliasRenderingPipelineEPKc15CUtlStringToken */
	virtual class ISceneLayer * AddTextureDebugLayer(class CSceneUtils *, class ISceneView *, const char  *, const class SceneLayerOutputs_t  &, const class RenderViewport_t  &, HSceneViewRenderTarget, int, bool); /* linkage=_ZN11CSceneUtils20AddTextureDebugLayerEP10ISceneViewPKcRK19SceneLayerOutputs_tRK16RenderViewport_tP24HSceneViewRenderTarget__ib */
	virtual class ISceneLayer * AddTextureDebugLayer(class CSceneUtils *, class ISceneView *, const char  *, const class SceneLayerOutputs_t  &, const class RenderViewport_t  &, HRenderTexture, int, bool); /* linkage=_ZN11CSceneUtils20AddTextureDebugLayerEP10ISceneViewPKcRK19SceneLayerOutputs_tRK16RenderViewport_t11CWeakHandleI31InfoForResourceTypeCTextureBaseEib */
	virtual int AllocateViewProducerIndex(class CSceneUtils *); /* linkage=_ZN11CSceneUtils25AllocateViewProducerIndexEv */
	virtual void ComputeScreenSpaceVertices(class CSceneUtils *, const class RenderViewport_t  &, int, int, int, int, float, float, float, float, int, int, ScreenSpaceVertex_t *); /* linkage=_ZN11CSceneUtils26ComputeScreenSpaceVerticesERK16RenderViewport_tiiiiffffiiP18VertexPos2DTex2D_t */
	virtual class IProceduralLayerRenderer * CreateFullscreenQuadRenderer(class CSceneUtils *, HMaterial, const class VertexColor_t  &); /* linkage=_ZN11CSceneUtils28CreateFullscreenQuadRendererE11CWeakHandleI29InfoForResourceTypeIMaterial2ERK13VertexColor_t */
	virtual class IProceduralLayerRenderer * CreateScalableAORenderer(class CSceneUtils *, enum RenderMultisampleType_t, float, float, float, bool); /* linkage=_ZN11CSceneUtils24CreateScalableAORendererE23RenderMultisampleType_tfffb */
	virtual class ISceneLayer * AddTextureBarrierLayer(class CSceneUtils *, class ISceneView *, const char  *, int, const HRenderTexture  *, int, const HSceneViewRenderTarget  *, const enum SceneLayerMSAAMode_t  *, const enum RenderImageLayout_t  *); /* linkage=_ZN11CSceneUtils22AddTextureBarrierLayerEP10ISceneViewPKciPK11CWeakHandleI31InfoForResourceTypeCTextureBaseEiPKP24HSceneViewRenderTarget__PK20SceneLayerMSAAMode_tPK19RenderImageLayout_t */
	virtual class IModelRenderHelper * CreateModelRenderHelper(class CSceneUtils *); /* linkage=_ZN11CSceneUtils23CreateModelRenderHelperEv */
	virtual class CSceneObject * RenderWireframeSphere(class CSceneUtils *, class ISceneWorld *, const class Vector  &, float, int, int, class Color, bool, bool); /* linkage=_ZN11CSceneUtils21RenderWireframeSphereEP11ISceneWorldRK6Vectorfii5Colorbb */
	virtual class CSceneObject * RenderSphere(class CSceneUtils *, class ISceneWorld *, const class Vector  &, float, int, int, class Color, bool, bool, bool); /* linkage=_ZN11CSceneUtils12RenderSphereEP11ISceneWorldRK6Vectorfii5Colorbbb */
	virtual class CSceneObject * RenderSphere(class CSceneUtils *, class ISceneWorld *, const class Vector  &, float, int, int, class Color, HMaterial, bool, bool); /* linkage=_ZN11CSceneUtils12RenderSphereEP11ISceneWorldRK6Vectorfii5Color11CWeakHandleI29InfoForResourceTypeIMaterial2Ebb */
	virtual class CSceneObject * RenderWireframeBox(class CSceneUtils *, class ISceneWorld *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN11CSceneUtils18RenderWireframeBoxEP11ISceneWorldRK6VectorRK6QAngleS4_S4_5Colorbb */
	virtual class CSceneObject * RenderWireframeSweptBox(class CSceneUtils *, class ISceneWorld *, const class Vector  &, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN11CSceneUtils23RenderWireframeSweptBoxEP11ISceneWorldRK6VectorS4_RK6QAngleS4_S4_5Colorbb */
	virtual class CSceneObject * RenderBox(class CSceneUtils *, class ISceneWorld *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool, bool, bool); /* linkage=_ZN11CSceneUtils9RenderBoxEP11ISceneWorldRK6VectorRK6QAngleS4_S4_5Colorbbb */
	virtual class CSceneObject * RenderBox(class CSceneUtils *, class ISceneWorld *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, HMaterial, bool, bool); /* linkage=_ZN11CSceneUtils9RenderBoxEP11ISceneWorldRK6VectorRK6QAngleS4_S4_5Color11CWeakHandleI29InfoForResourceTypeIMaterial2Ebb */
	virtual class CSceneObject * RenderAxes(class CSceneUtils *, class ISceneWorld *, const class Vector  &, float, bool, bool); /* linkage=_ZN11CSceneUtils10RenderAxesEP11ISceneWorldRK6Vectorfbb */
	virtual class CSceneObject * RenderAxes(class CSceneUtils *, class ISceneWorld *, const class matrix3x4_t  &, float, bool, bool); /* linkage=_ZN11CSceneUtils10RenderAxesEP11ISceneWorldRK11matrix3x4_tfbb */
	virtual class CSceneObject * RenderLine(class CSceneUtils *, class ISceneWorld *, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN11CSceneUtils10RenderLineEP11ISceneWorldRK6VectorS4_5Colorbb */
	virtual class CSceneObject * RenderTriangle(class CSceneUtils *, class ISceneWorld *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN11CSceneUtils14RenderTriangleEP11ISceneWorldRK6VectorS4_S4_5Colorbb */
	virtual class CSceneObject * RenderTriangle(class CSceneUtils *, class ISceneWorld *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, HMaterial, bool); /* linkage=_ZN11CSceneUtils14RenderTriangleEP11ISceneWorldRK6VectorS4_S4_5Color11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	virtual class CSceneObject * RenderQuad(class CSceneUtils *, class ISceneWorld *, HMaterial, float, float, float, float, float, float, float, float, float, const class Color  &, bool); /* linkage=_ZN11CSceneUtils10RenderQuadEP11ISceneWorld11CWeakHandleI29InfoForResourceTypeIMaterial2EfffffffffRK5Colorb */
	virtual class CSceneObject * DrawScreenSpaceRectangle(class CSceneUtils *, class ISceneWorld *, HMaterial, int, int, int, int, float, float, float, float, int, int, int, int, float, bool); /* linkage=_ZN11CSceneUtils24DrawScreenSpaceRectangleEP11ISceneWorld11CWeakHandleI29InfoForResourceTypeIMaterial2Eiiiiffffiiiifb */
	virtual class CSceneObject * DrawNDCSpaceUntexturedPolygon(class CSceneUtils *, class ISceneWorld *, HMaterial, int, class Vector2D *, bool); /* linkage=_ZN11CSceneUtils29DrawNDCSpaceUntexturedPolygonEP11ISceneWorld11CWeakHandleI29InfoForResourceTypeIMaterial2EiP8Vector2Db */
	virtual class CSceneObject * Create6FaceSkybox(class CSceneUtils *, class ISceneWorld *, HMaterial *, class CUtlStringToken); /* linkage=_ZN11CSceneUtils17Create6FaceSkyboxEP11ISceneWorldP11CWeakHandleI29InfoForResourceTypeIMaterial2E15CUtlStringToken */
	virtual class ISceneView * CreateClearRenderTargetView(class CSceneUtils *, const char  *, int, HRenderTexture, HRenderTexture, const class Vector4D  &); /* linkage=_ZN11CSceneUtils27CreateClearRenderTargetViewEPKci11CWeakHandleI31InfoForResourceTypeCTextureBaseES4_RK8Vector4D */
	virtual void Compute3DSkyboxFrustum(class CSceneUtils *, const class CFrustum  &, const class Vector  &, const class QAngle  &, const class Vector  &, float, class CFrustum *); /* linkage=_ZN11CSceneUtils22Compute3DSkyboxFrustumERK8CFrustumRK6VectorRK6QAngleS5_fPS0_ */
	virtual bool FindClipSpaceRectForObject(class CSceneUtils *, const class CSceneObject  *, const class ISceneView  *, class Vector4D &); /* linkage=_ZN11CSceneUtils26FindClipSpaceRectForObjectEPK12CSceneObjectPK10ISceneViewR8Vector4D */
	void ~CSceneUtils(class CSceneUtils *); /* linkage=_ZN11CSceneUtilsD4Ev */
} __attribute__((__aligned__(16)));

// <03AF4DE3> ../scenesystem/utils/sceneutils.h:167
void RenderingPipelineInfo_t::RenderingPipelineInfo_t(IRenderingPipeline* pPipeline, bool bIsAlias)
{
} /* size: 0 */

// <03AF4DB2> ../scenesystem/utils/sceneutils.h:167
inline void RenderingPipelineInfo_t::RenderingPipelineInfo_t(IRenderingPipeline* pPipeline, bool bIsAlias)
{
} /* size: 0 */

