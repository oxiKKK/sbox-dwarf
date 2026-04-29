
//
// public/scenesystem/isceneutils.h
//
//	referenced by: libengine2.so
//
//	functions: 37
//	classes: 9
//	structs: 2
//

// <03AF4D9B> ../public/scenesystem/isceneutils.h:51
void IRenderingPipeline::IRenderingPipeline()
{
} /* size: 0 */

// <03AF4D7F> ../public/scenesystem/isceneutils.h:51
inline void IRenderingPipeline::IRenderingPipeline()
{
} /* size: 0 */

// <027893E0> ../public/scenesystem/isceneutils.h:51
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class IRenderingPipeline {
	void ~IRenderingPipeline(IRenderingPipeline* );
	void IRenderingPipeline(IRenderingPipeline* , IRenderingPipeline& );
	void IRenderingPipeline(IRenderingPipeline* , const IRenderingPipeline& );
	void IRenderingPipeline(IRenderingPipeline* );
	int ()(void) * * _vptr.IRenderingPipeline; /* 0 8 */
	/* ../public/scenesystem/isceneutils.h:55 */
	virtual void AddLayersToView(IRenderingPipeline* , ISceneView* , const RenderViewport_t& , const PipelineRenderTargetInfo_t& , CRenderAttributes* );
	/* ../public/scenesystem/isceneutils.h:61 */
	virtual void GetAdjustedViewport(IRenderingPipeline* , CUtlStringToken, const RenderViewport_t& , RenderViewport_t* );
	/* ../public/scenesystem/isceneutils.h:64 */
	virtual CUtlStringToken GetId(const IRenderingPipeline* );
	/* ../public/scenesystem/isceneutils.h:65 */
	virtual const char* GetName(const IRenderingPipeline* );
	/* ../public/scenesystem/isceneutils.h:68 */
	virtual bool SupportsMSAA(const IRenderingPipeline* );
	void ~IRenderingPipeline(class IRenderingPipeline *); /* linkage=_ZN18IRenderingPipelineD4Ev */
	void IRenderingPipeline(class IRenderingPipeline *, class IRenderingPipeline &); /* linkage=_ZN18IRenderingPipelineC4EOS_ */
	void IRenderingPipeline(class IRenderingPipeline *, const class IRenderingPipeline  &); /* linkage=_ZN18IRenderingPipelineC4ERKS_ */
	void IRenderingPipeline(class IRenderingPipeline *); /* linkage=_ZN18IRenderingPipelineC4Ev */
	virtual void AddLayersToView(class IRenderingPipeline *, class ISceneView *, const class RenderViewport_t  &, const class PipelineRenderTargetInfo_t  &, class CRenderAttributes *); /* linkage=_ZN18IRenderingPipeline15AddLayersToViewEP10ISceneViewRK16RenderViewport_tRK26PipelineRenderTargetInfo_tP17CRenderAttributes */
	virtual void GetAdjustedViewport(class IRenderingPipeline *, class CUtlStringToken, const class RenderViewport_t  &, class RenderViewport_t *); /* linkage=_ZN18IRenderingPipeline19GetAdjustedViewportE15CUtlStringTokenRK16RenderViewport_tPS1_ */
	virtual class CUtlStringToken GetId(const class IRenderingPipeline  *); /* linkage=_ZNK18IRenderingPipeline5GetIdEv */
	virtual const char  * GetName(const class IRenderingPipeline  *); /* linkage=_ZNK18IRenderingPipeline7GetNameEv */
	virtual bool SupportsMSAA(const class IRenderingPipeline  *); /* linkage=_ZNK18IRenderingPipeline12SupportsMSAAEv */
};

// <03A537A0> ../public/scenesystem/isceneutils.h:73
void VertexPos2DTex2D_t::VertexPos2DTex2D_t()
{
} /* size: 0 */

// <03A53784> ../public/scenesystem/isceneutils.h:73
inline void VertexPos2DTex2D_t::VertexPos2DTex2D_t()
{
} /* size: 0 */

// <03A4D354> ../public/scenesystem/isceneutils.h:73
inline void VertexPos2DTex2D_t::operator=(const VertexPos2DTex2D_t &)
{
} /* size: 0 */

// <028A1AC3> ../public/scenesystem/isceneutils.h:73
// member functions: 2
// member variables: 2
// struct size: 16
struct VertexPos2DTex2D_t {
	Vector2D m_vecPos; /* 0 8 */
	Vector2D m_vecTexCoord; /* 8 8 */
	/* ../public/scenesystem/isceneutils.h:78 */
	RenderInputLayout_t GetLayout(void);
	void VertexPos2DTex2D_t(VertexPos2DTex2D_t* );
};

// <03A57389> ../public/scenesystem/isceneutils.h:78
inline void GetLayout(void)
{
} /* size: 0 */

// <033966BB> ../public/scenesystem/isceneutils.h:92
// member function: 1
// member variables: 2
// struct size: 24
struct QuadVertex_t {
	Vector m_vPos; /* 0 12 */
	Vector m_vEyeRay; /* 12 12 */
	/* ../public/scenesystem/isceneutils.h:97 */
	RenderInputLayout_t GetLayout(void);
};

// <03B9783B> ../public/scenesystem/isceneutils.h:185
void IModelRenderHelper::IModelRenderHelper()
{
} /* size: 0 */

// <03B9781F> ../public/scenesystem/isceneutils.h:185
inline void IModelRenderHelper::IModelRenderHelper()
{
} /* size: 0 */

// <03B85A30> ../public/scenesystem/isceneutils.h:185
// member functions: 72
// member variable: 1
// vtable entries: 32
// class size: 8
class IModelRenderHelper {
	void IModelRenderHelper(IModelRenderHelper* , IModelRenderHelper& );
	void IModelRenderHelper(IModelRenderHelper* , const IModelRenderHelper& );
	void IModelRenderHelper(IModelRenderHelper* );
	void ~IModelRenderHelper(IModelRenderHelper* );
	int ()(void) * * _vptr.IModelRenderHelper; /* 0 8 */
	/* ../public/scenesystem/isceneutils.h:189 */
	virtual void Release(IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:192 */
	virtual void SetMDL(IModelRenderHelper* , HModel, ISceneWorld* , ESceneObjectFlags, ModelRenderAnimationType_t);
	/* ../public/scenesystem/isceneutils.h:193 */
	virtual HModel GetMDL(const IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:194 */
	virtual const CModel* GetModelData(const IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:196 */
	virtual bool GetAttachment(const IModelRenderHelper* , AttachmentHandle_t, matrix3x4_t& );
	/* ../public/scenesystem/isceneutils.h:197 */
	virtual void SetSkin(IModelRenderHelper* , CUtlStringToken);
	/* ../public/scenesystem/isceneutils.h:198 */
	virtual void SetSkin(IModelRenderHelper* , int);
	/* ../public/scenesystem/isceneutils.h:199 */
	virtual void SetSequence(IModelRenderHelper* , HSequence);
	/* ../public/scenesystem/isceneutils.h:200 */
	virtual HSequence GetSequence(const IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:201 */
	virtual void SetTime(IModelRenderHelper* , float);
	/* ../public/scenesystem/isceneutils.h:202 */
	virtual void SetPlaybackRate(IModelRenderHelper* , float);
	/* ../public/scenesystem/isceneutils.h:203 */
	virtual void SetMeshGroupMask(IModelRenderHelper* , MeshGroupMask_t);
	/* ../public/scenesystem/isceneutils.h:204 */
	virtual MeshGroupMask_t GetMeshGroupMask(const IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:205 */
	virtual void SetMeshGroupMaskFromBodyParts(IModelRenderHelper* , int, int);
	/* ../public/scenesystem/isceneutils.h:206 */
	virtual void SetTintRGBA_Gamma(IModelRenderHelper* , const Vector4D& );
	/* ../public/scenesystem/isceneutils.h:207 */
	virtual void SetTransform(IModelRenderHelper* , const matrix3x4_t& );
	/* ../public/scenesystem/isceneutils.h:208 */
	virtual void SetTransform(IModelRenderHelper* , const matrix3x4_t& , const matrix3x4a_t* , int);
	/* ../public/scenesystem/isceneutils.h:209 */
	virtual void SetPoseParameters(IModelRenderHelper* , const float* , int);
	/* ../public/scenesystem/isceneutils.h:210 */
	virtual void SetLOD(IModelRenderHelper* , int);
	/* ../public/scenesystem/isceneutils.h:211 */
	virtual void SetMaterialOverride(IModelRenderHelper* , HMaterial);
	/* ../public/scenesystem/isceneutils.h:212 */
	virtual void SetModelRenderAnimationType(IModelRenderHelper* , ModelRenderAnimationType_t);
	/* ../public/scenesystem/isceneutils.h:216 */
	virtual void FinalizeForRendering(IModelRenderHelper* , float);
	/* ../public/scenesystem/isceneutils.h:218 */
	virtual CSceneObject* GetSceneObject(const IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:219 */
	virtual CSceneAnimatableObject* GetSceneAnimatableObject(const IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:221 */
	virtual void AppendDrawPrimitives(IModelRenderHelper* , CMeshPrimitiveOutputBuffer& , CMeshPrimitiveOutputBuffer& , const ISceneView* , ISceneLayer* );
	/* ../public/scenesystem/isceneutils.h:224 */
	virtual void PerformAnimationDecode(IModelRenderHelper* , BoneFlags_t);
	/* ../public/scenesystem/isceneutils.h:226 */
	virtual void AddRef(IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:228 */
	virtual void ForceLoopingAnimation(IModelRenderHelper* , bool);
	/* ../public/scenesystem/isceneutils.h:230 */
	virtual void SetCycleOverride(IModelRenderHelper* , float);
	/* ../public/scenesystem/isceneutils.h:231 */
	virtual void ClearCycleOverride(IModelRenderHelper* );
	/* ../public/scenesystem/isceneutils.h:232 */
	virtual void SetRenderingEnabled(IModelRenderHelper* , bool);
	/* ../public/scenesystem/isceneutils.h:236 */
	virtual void SetPruneUnusedMeshGroups(IModelRenderHelper* , bool);
	void IModelRenderHelper(class IModelRenderHelper *, class IModelRenderHelper &); /* linkage=_ZN18IModelRenderHelperC4EOS_ */
	void IModelRenderHelper(class IModelRenderHelper *, const class IModelRenderHelper  &); /* linkage=_ZN18IModelRenderHelperC4ERKS_ */
	void IModelRenderHelper(class IModelRenderHelper *); /* linkage=_ZN18IModelRenderHelperC4Ev */
	void ~IModelRenderHelper(class IModelRenderHelper *); /* linkage=_ZN18IModelRenderHelperD4Ev */
	virtual void Release(class IModelRenderHelper *); /* linkage=_ZN18IModelRenderHelper7ReleaseEv */
	virtual void SetMDL(class IModelRenderHelper *, HModel, class ISceneWorld *, enum ESceneObjectFlags, enum ModelRenderAnimationType_t); /* linkage=_ZN18IModelRenderHelper6SetMDLE11CWeakHandleI25InfoForResourceTypeCModelEP11ISceneWorld17ESceneObjectFlags26ModelRenderAnimationType_t */
	virtual HModel GetMDL(const class IModelRenderHelper  *); /* linkage=_ZNK18IModelRenderHelper6GetMDLEv */
	virtual const class CModel  * GetModelData(const class IModelRenderHelper  *); /* linkage=_ZNK18IModelRenderHelper12GetModelDataEv */
	virtual bool GetAttachment(const class IModelRenderHelper  *, class AttachmentHandle_t, class matrix3x4_t &); /* linkage=_ZNK18IModelRenderHelper13GetAttachmentE18AttachmentHandle_tR11matrix3x4_t */
	virtual void SetSkin(class IModelRenderHelper *, class CUtlStringToken); /* linkage=_ZN18IModelRenderHelper7SetSkinE15CUtlStringToken */
	virtual void SetSkin(class IModelRenderHelper *, int); /* linkage=_ZN18IModelRenderHelper7SetSkinEi */
	virtual void SetSequence(class IModelRenderHelper *, class HSequence); /* linkage=_ZN18IModelRenderHelper11SetSequenceE9HSequence */
	virtual class HSequence GetSequence(const class IModelRenderHelper  *); /* linkage=_ZNK18IModelRenderHelper11GetSequenceEv */
	virtual void SetTime(class IModelRenderHelper *, float); /* linkage=_ZN18IModelRenderHelper7SetTimeEf */
	virtual void SetPlaybackRate(class IModelRenderHelper *, float); /* linkage=_ZN18IModelRenderHelper15SetPlaybackRateEf */
	virtual void SetMeshGroupMask(class IModelRenderHelper *, MeshGroupMask_t); /* linkage=_ZN18IModelRenderHelper16SetMeshGroupMaskEy */
	virtual MeshGroupMask_t GetMeshGroupMask(const class IModelRenderHelper  *); /* linkage=_ZNK18IModelRenderHelper16GetMeshGroupMaskEv */
	virtual void SetMeshGroupMaskFromBodyParts(class IModelRenderHelper *, int, int); /* linkage=_ZN18IModelRenderHelper29SetMeshGroupMaskFromBodyPartsEii */
	virtual void SetTintRGBA_Gamma(class IModelRenderHelper *, const class Vector4D  &); /* linkage=_ZN18IModelRenderHelper17SetTintRGBA_GammaERK8Vector4D */
	virtual void SetTransform(class IModelRenderHelper *, const class matrix3x4_t  &); /* linkage=_ZN18IModelRenderHelper12SetTransformERK11matrix3x4_t */
	virtual void SetTransform(class IModelRenderHelper *, const class matrix3x4_t  &, const class matrix3x4a_t  *, int); /* linkage=_ZN18IModelRenderHelper12SetTransformERK11matrix3x4_tPK12matrix3x4a_ti */
	virtual void SetPoseParameters(class IModelRenderHelper *, const float  *, int); /* linkage=_ZN18IModelRenderHelper17SetPoseParametersEPKfi */
	virtual void SetLOD(class IModelRenderHelper *, int); /* linkage=_ZN18IModelRenderHelper6SetLODEi */
	virtual void SetMaterialOverride(class IModelRenderHelper *, HMaterial); /* linkage=_ZN18IModelRenderHelper19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	virtual void SetModelRenderAnimationType(class IModelRenderHelper *, enum ModelRenderAnimationType_t); /* linkage=_ZN18IModelRenderHelper27SetModelRenderAnimationTypeE26ModelRenderAnimationType_t */
	virtual void FinalizeForRendering(class IModelRenderHelper *, float); /* linkage=_ZN18IModelRenderHelper20FinalizeForRenderingEf */
	virtual class CSceneObject * GetSceneObject(const class IModelRenderHelper  *); /* linkage=_ZNK18IModelRenderHelper14GetSceneObjectEv */
	virtual class CSceneAnimatableObject * GetSceneAnimatableObject(const class IModelRenderHelper  *); /* linkage=_ZNK18IModelRenderHelper24GetSceneAnimatableObjectEv */
	virtual void AppendDrawPrimitives(class IModelRenderHelper *, class CMeshPrimitiveOutputBuffer &, class CMeshPrimitiveOutputBuffer &, const class ISceneView  *, class ISceneLayer *); /* linkage=_ZN18IModelRenderHelper20AppendDrawPrimitivesER26CMeshPrimitiveOutputBufferS1_PK10ISceneViewP11ISceneLayer */
	virtual void PerformAnimationDecode(class IModelRenderHelper *, enum BoneFlags_t); /* linkage=_ZN18IModelRenderHelper22PerformAnimationDecodeEN14CModelSkeleton11BoneFlags_tE */
	virtual void AddRef(class IModelRenderHelper *); /* linkage=_ZN18IModelRenderHelper6AddRefEv */
	virtual void ForceLoopingAnimation(class IModelRenderHelper *, bool); /* linkage=_ZN18IModelRenderHelper21ForceLoopingAnimationEb */
	virtual void SetCycleOverride(class IModelRenderHelper *, float); /* linkage=_ZN18IModelRenderHelper16SetCycleOverrideEf */
	virtual void ClearCycleOverride(class IModelRenderHelper *); /* linkage=_ZN18IModelRenderHelper18ClearCycleOverrideEv */
	virtual void SetRenderingEnabled(class IModelRenderHelper *, bool); /* linkage=_ZN18IModelRenderHelper19SetRenderingEnabledEb */
	virtual void SetPruneUnusedMeshGroups(class IModelRenderHelper *, bool); /* linkage=_ZN18IModelRenderHelper24SetPruneUnusedMeshGroupsEb */
};

// <03AE86D3> ../public/scenesystem/isceneutils.h:242
void ISceneUtils::ISceneUtils()
{
} /* size: 0 */

// <03AE86B7> ../public/scenesystem/isceneutils.h:242
inline void ISceneUtils::ISceneUtils()
{
} /* size: 0 */

// <03A6ACBA> ../public/scenesystem/isceneutils.h:242
// member functions: 82
// member variable: 1
// vtable entries: 36
// class size: 8
class ISceneUtils : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~ISceneUtils(ISceneUtils* );
	void ISceneUtils(ISceneUtils* , ISceneUtils& );
	void ISceneUtils(ISceneUtils* , const ISceneUtils& );
	void ISceneUtils(ISceneUtils* );
	/* ../public/scenesystem/isceneutils.h:246 */
	virtual ISceneLayer* AddSimpleLayerToView(ISceneUtils* , ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , ESceneObjectFlags, ESceneObjectFlags, const SceneLayerOutputs_t& );
	/* ../public/scenesystem/isceneutils.h:248 */
	virtual ISceneLayer* AddTextureBarrierLayer(ISceneUtils* , ISceneView* , const char* , int, const HRenderTexture* , int, const HSceneViewRenderTarget* , const SceneLayerMSAAMode_t* , const RenderImageLayout_t* );
	/* ../public/scenesystem/isceneutils.h:252 */
	virtual ITonemapSystem* CreateTonemapSystem(ISceneUtils* );
	/* ../public/scenesystem/isceneutils.h:253 */
	virtual IVolumetricFog* CreateVolumetricFog(ISceneUtils* );
	/* ../public/scenesystem/isceneutils.h:254 */
	virtual void DestroyTonemapSystem(ISceneUtils* , ITonemapSystem* );
	/* ../public/scenesystem/isceneutils.h:255 */
	virtual void DestroyVolumetricFog(ISceneUtils* , IVolumetricFog* );
	/* ../public/scenesystem/isceneutils.h:258 */
	virtual void RegisterRenderingPipeline(ISceneUtils* , IRenderingPipeline* );
	/* ../public/scenesystem/isceneutils.h:259 */
	virtual void UnregisterRenderingPipeline(ISceneUtils* , IRenderingPipeline* );
	/* ../public/scenesystem/isceneutils.h:260 */
	virtual IRenderingPipeline* FindRenderingPipeline(ISceneUtils* , CUtlStringToken);
	/* ../public/scenesystem/isceneutils.h:264 */
	virtual IRenderingPipeline* AliasRenderingPipeline(ISceneUtils* , const char* , CUtlStringToken);
	/* ../public/scenesystem/isceneutils.h:267 */
	virtual ISceneLayer* AddTextureDebugLayer(ISceneUtils* , ISceneView* , const char* , const SceneLayerOutputs_t& , const RenderViewport_t& , HSceneViewRenderTarget, int, bool);
	/* ../public/scenesystem/isceneutils.h:270 */
	virtual ISceneLayer* AddTextureDebugLayer(ISceneUtils* , ISceneView* , const char* , const SceneLayerOutputs_t& , const RenderViewport_t& , HRenderTexture, int, bool);
	/* ../public/scenesystem/isceneutils.h:276 */
	virtual int AllocateViewProducerIndex(ISceneUtils* );
	/* ../public/scenesystem/isceneutils.h:278 */
	virtual void ComputeScreenSpaceVertices(ISceneUtils* , const RenderViewport_t& , int, int, int, int, float, float, float, float, int, int, ScreenSpaceVertex_t* );
	/* ../public/scenesystem/isceneutils.h:337 */
	void ComputeScreenSpaceVertices(ISceneUtils* , const RenderViewport_t& , const RenderViewport_t& , const RenderViewport_t& , int, int, ScreenSpaceVertex_t* );
	/* ../public/scenesystem/isceneutils.h:293 */
	virtual IProceduralLayerRenderer* CreateFullscreenQuadRenderer(ISceneUtils* , HMaterial, const VertexColor_t& );
	/* ../public/scenesystem/isceneutils.h:295 */
	virtual IProceduralLayerRenderer* CreateScalableAORenderer(ISceneUtils* , RenderMultisampleType_t, float, float, float, bool);
	/* ../public/scenesystem/isceneutils.h:299 */
	virtual IModelRenderHelper* CreateModelRenderHelper(ISceneUtils* );
	/* ../public/scenesystem/isceneutils.h:302 */
	virtual CSceneObject* RenderWireframeSphere(ISceneUtils* , ISceneWorld* , const Vector& , float, int, int, Color, bool, bool);
	/* ../public/scenesystem/isceneutils.h:303 */
	virtual CSceneObject* RenderSphere(ISceneUtils* , ISceneWorld* , const Vector& , float, int, int, Color, bool, bool, bool);
	/* ../public/scenesystem/isceneutils.h:304 */
	virtual CSceneObject* RenderSphere(ISceneUtils* , ISceneWorld* , const Vector& , float, int, int, Color, HMaterial, bool, bool);
	/* ../public/scenesystem/isceneutils.h:305 */
	virtual CSceneObject* RenderWireframeBox(ISceneUtils* , ISceneWorld* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool, bool);
	/* ../public/scenesystem/isceneutils.h:306 */
	virtual CSceneObject* RenderWireframeSweptBox(ISceneUtils* , ISceneWorld* , const Vector& , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool, bool);
	/* ../public/scenesystem/isceneutils.h:307 */
	virtual CSceneObject* RenderBox(ISceneUtils* , ISceneWorld* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, bool, bool, bool);
	/* ../public/scenesystem/isceneutils.h:308 */
	virtual CSceneObject* RenderBox(ISceneUtils* , ISceneWorld* , const Vector& , const QAngle& , const Vector& , const Vector& , Color, HMaterial, bool, bool);
	/* ../public/scenesystem/isceneutils.h:309 */
	virtual CSceneObject* RenderAxes(ISceneUtils* , ISceneWorld* , const Vector& , float, bool, bool);
	/* ../public/scenesystem/isceneutils.h:310 */
	virtual CSceneObject* RenderAxes(ISceneUtils* , ISceneWorld* , const matrix3x4_t& , float, bool, bool);
	/* ../public/scenesystem/isceneutils.h:311 */
	virtual CSceneObject* RenderLine(ISceneUtils* , ISceneWorld* , const Vector& , const Vector& , Color, bool, bool);
	/* ../public/scenesystem/isceneutils.h:312 */
	virtual CSceneObject* RenderTriangle(ISceneUtils* , ISceneWorld* , const Vector& , const Vector& , const Vector& , Color, bool, bool);
	/* ../public/scenesystem/isceneutils.h:313 */
	virtual CSceneObject* RenderTriangle(ISceneUtils* , ISceneWorld* , const Vector& , const Vector& , const Vector& , Color, HMaterial, bool);
	/* ../public/scenesystem/isceneutils.h:314 */
	virtual CSceneObject* RenderQuad(ISceneUtils* , ISceneWorld* , HMaterial, float, float, float, float, float, float, float, float, float, const Color& , bool);
	/* ../public/scenesystem/isceneutils.h:315 */
	virtual CSceneObject* DrawScreenSpaceRectangle(ISceneUtils* , ISceneWorld* , HMaterial, int, int, int, int, float, float, float, float, int, int, int, int, float, bool);
	/* ../public/scenesystem/isceneutils.h:324 */
	virtual CSceneObject* DrawNDCSpaceUntexturedPolygon(ISceneUtils* , ISceneWorld* , HMaterial, int, Vector2D* , bool);
	/* ../public/scenesystem/isceneutils.h:326 */
	virtual CSceneObject* Create6FaceSkybox(ISceneUtils* , ISceneWorld* , HMaterial* , CUtlStringToken);
	/* ../public/scenesystem/isceneutils.h:330 */
	virtual ISceneView* CreateClearRenderTargetView(ISceneUtils* , const char* , int, HRenderTexture, HRenderTexture, const Vector4D& );
	/* ../public/scenesystem/isceneutils.h:333 */
	virtual void Compute3DSkyboxFrustum(ISceneUtils* , const CFrustum& , const Vector& , const QAngle& , const Vector& , float, CFrustum* );
	/* ../public/scenesystem/isceneutils.h:334 */
	virtual bool FindClipSpaceRectForObject(ISceneUtils* , const CSceneObject* , const ISceneView* , Vector4D& );
	void ComputeScreenSpaceVertices(class ISceneUtils *, const class RenderViewport_t  &, const class RenderViewport_t  &, const class RenderViewport_t  &, int, int, ScreenSpaceVertex_t *); /* linkage=_ZN11ISceneUtils26ComputeScreenSpaceVerticesERK16RenderViewport_tS2_S2_iiP18VertexPos2DTex2D_t */
	void ~ISceneUtils(class ISceneUtils *); /* linkage=_ZN11ISceneUtilsD4Ev */
	void ISceneUtils(class ISceneUtils *, class ISceneUtils &); /* linkage=_ZN11ISceneUtilsC4EOS_ */
	void ISceneUtils(class ISceneUtils *, const class ISceneUtils  &); /* linkage=_ZN11ISceneUtilsC4ERKS_ */
	void ISceneUtils(class ISceneUtils *); /* linkage=_ZN11ISceneUtilsC4Ev */
	virtual class ISceneLayer * AddSimpleLayerToView(class ISceneUtils *, class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, enum ESceneObjectFlags, enum ESceneObjectFlags, const class SceneLayerOutputs_t  &); /* linkage=_ZN11ISceneUtils20AddSimpleLayerToViewEP10ISceneViewPKcRK16RenderViewport_tRK15CUtlStringToken17ESceneObjectFlagsSA_RK19SceneLayerOutputs_t */
	virtual class ISceneLayer * AddTextureBarrierLayer(class ISceneUtils *, class ISceneView *, const char  *, int, const HRenderTexture  *, int, const HSceneViewRenderTarget  *, const enum SceneLayerMSAAMode_t  *, const enum RenderImageLayout_t  *); /* linkage=_ZN11ISceneUtils22AddTextureBarrierLayerEP10ISceneViewPKciPK11CWeakHandleI31InfoForResourceTypeCTextureBaseEiPKP24HSceneViewRenderTarget__PK20SceneLayerMSAAMode_tPK19RenderImageLayout_t */
	virtual class ITonemapSystem * CreateTonemapSystem(class ISceneUtils *); /* linkage=_ZN11ISceneUtils19CreateTonemapSystemEv */
	virtual class IVolumetricFog * CreateVolumetricFog(class ISceneUtils *); /* linkage=_ZN11ISceneUtils19CreateVolumetricFogEv */
	virtual void DestroyTonemapSystem(class ISceneUtils *, class ITonemapSystem *); /* linkage=_ZN11ISceneUtils20DestroyTonemapSystemEP14ITonemapSystem */
	virtual void DestroyVolumetricFog(class ISceneUtils *, class IVolumetricFog *); /* linkage=_ZN11ISceneUtils20DestroyVolumetricFogEP14IVolumetricFog */
	virtual void RegisterRenderingPipeline(class ISceneUtils *, class IRenderingPipeline *); /* linkage=_ZN11ISceneUtils25RegisterRenderingPipelineEP18IRenderingPipeline */
	virtual void UnregisterRenderingPipeline(class ISceneUtils *, class IRenderingPipeline *); /* linkage=_ZN11ISceneUtils27UnregisterRenderingPipelineEP18IRenderingPipeline */
	virtual class IRenderingPipeline * FindRenderingPipeline(class ISceneUtils *, class CUtlStringToken); /* linkage=_ZN11ISceneUtils21FindRenderingPipelineE15CUtlStringToken */
	virtual class IRenderingPipeline * AliasRenderingPipeline(class ISceneUtils *, const char  *, class CUtlStringToken); /* linkage=_ZN11ISceneUtils22AliasRenderingPipelineEPKc15CUtlStringToken */
	virtual class ISceneLayer * AddTextureDebugLayer(class ISceneUtils *, class ISceneView *, const char  *, const class SceneLayerOutputs_t  &, const class RenderViewport_t  &, HSceneViewRenderTarget, int, bool); /* linkage=_ZN11ISceneUtils20AddTextureDebugLayerEP10ISceneViewPKcRK19SceneLayerOutputs_tRK16RenderViewport_tP24HSceneViewRenderTarget__ib */
	virtual class ISceneLayer * AddTextureDebugLayer(class ISceneUtils *, class ISceneView *, const char  *, const class SceneLayerOutputs_t  &, const class RenderViewport_t  &, HRenderTexture, int, bool); /* linkage=_ZN11ISceneUtils20AddTextureDebugLayerEP10ISceneViewPKcRK19SceneLayerOutputs_tRK16RenderViewport_t11CWeakHandleI31InfoForResourceTypeCTextureBaseEib */
	virtual int AllocateViewProducerIndex(class ISceneUtils *); /* linkage=_ZN11ISceneUtils25AllocateViewProducerIndexEv */
	virtual void ComputeScreenSpaceVertices(class ISceneUtils *, const class RenderViewport_t  &, int, int, int, int, float, float, float, float, int, int, ScreenSpaceVertex_t *); /* linkage=_ZN11ISceneUtils26ComputeScreenSpaceVerticesERK16RenderViewport_tiiiiffffiiP18VertexPos2DTex2D_t */
	virtual class IProceduralLayerRenderer * CreateFullscreenQuadRenderer(class ISceneUtils *, HMaterial, const class VertexColor_t  &); /* linkage=_ZN11ISceneUtils28CreateFullscreenQuadRendererE11CWeakHandleI29InfoForResourceTypeIMaterial2ERK13VertexColor_t */
	virtual class IProceduralLayerRenderer * CreateScalableAORenderer(class ISceneUtils *, enum RenderMultisampleType_t, float, float, float, bool); /* linkage=_ZN11ISceneUtils24CreateScalableAORendererE23RenderMultisampleType_tfffb */
	virtual class IModelRenderHelper * CreateModelRenderHelper(class ISceneUtils *); /* linkage=_ZN11ISceneUtils23CreateModelRenderHelperEv */
	virtual class CSceneObject * RenderWireframeSphere(class ISceneUtils *, class ISceneWorld *, const class Vector  &, float, int, int, class Color, bool, bool); /* linkage=_ZN11ISceneUtils21RenderWireframeSphereEP11ISceneWorldRK6Vectorfii5Colorbb */
	virtual class CSceneObject * RenderSphere(class ISceneUtils *, class ISceneWorld *, const class Vector  &, float, int, int, class Color, bool, bool, bool); /* linkage=_ZN11ISceneUtils12RenderSphereEP11ISceneWorldRK6Vectorfii5Colorbbb */
	virtual class CSceneObject * RenderSphere(class ISceneUtils *, class ISceneWorld *, const class Vector  &, float, int, int, class Color, HMaterial, bool, bool); /* linkage=_ZN11ISceneUtils12RenderSphereEP11ISceneWorldRK6Vectorfii5Color11CWeakHandleI29InfoForResourceTypeIMaterial2Ebb */
	virtual class CSceneObject * RenderWireframeBox(class ISceneUtils *, class ISceneWorld *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN11ISceneUtils18RenderWireframeBoxEP11ISceneWorldRK6VectorRK6QAngleS4_S4_5Colorbb */
	virtual class CSceneObject * RenderWireframeSweptBox(class ISceneUtils *, class ISceneWorld *, const class Vector  &, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN11ISceneUtils23RenderWireframeSweptBoxEP11ISceneWorldRK6VectorS4_RK6QAngleS4_S4_5Colorbb */
	virtual class CSceneObject * RenderBox(class ISceneUtils *, class ISceneWorld *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, bool, bool, bool); /* linkage=_ZN11ISceneUtils9RenderBoxEP11ISceneWorldRK6VectorRK6QAngleS4_S4_5Colorbbb */
	virtual class CSceneObject * RenderBox(class ISceneUtils *, class ISceneWorld *, const class Vector  &, const class QAngle  &, const class Vector  &, const class Vector  &, class Color, HMaterial, bool, bool); /* linkage=_ZN11ISceneUtils9RenderBoxEP11ISceneWorldRK6VectorRK6QAngleS4_S4_5Color11CWeakHandleI29InfoForResourceTypeIMaterial2Ebb */
	virtual class CSceneObject * RenderAxes(class ISceneUtils *, class ISceneWorld *, const class Vector  &, float, bool, bool); /* linkage=_ZN11ISceneUtils10RenderAxesEP11ISceneWorldRK6Vectorfbb */
	virtual class CSceneObject * RenderAxes(class ISceneUtils *, class ISceneWorld *, const class matrix3x4_t  &, float, bool, bool); /* linkage=_ZN11ISceneUtils10RenderAxesEP11ISceneWorldRK11matrix3x4_tfbb */
	virtual class CSceneObject * RenderLine(class ISceneUtils *, class ISceneWorld *, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN11ISceneUtils10RenderLineEP11ISceneWorldRK6VectorS4_5Colorbb */
	virtual class CSceneObject * RenderTriangle(class ISceneUtils *, class ISceneWorld *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, bool, bool); /* linkage=_ZN11ISceneUtils14RenderTriangleEP11ISceneWorldRK6VectorS4_S4_5Colorbb */
	virtual class CSceneObject * RenderTriangle(class ISceneUtils *, class ISceneWorld *, const class Vector  &, const class Vector  &, const class Vector  &, class Color, HMaterial, bool); /* linkage=_ZN11ISceneUtils14RenderTriangleEP11ISceneWorldRK6VectorS4_S4_5Color11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	virtual class CSceneObject * RenderQuad(class ISceneUtils *, class ISceneWorld *, HMaterial, float, float, float, float, float, float, float, float, float, const class Color  &, bool); /* linkage=_ZN11ISceneUtils10RenderQuadEP11ISceneWorld11CWeakHandleI29InfoForResourceTypeIMaterial2EfffffffffRK5Colorb */
	virtual class CSceneObject * DrawScreenSpaceRectangle(class ISceneUtils *, class ISceneWorld *, HMaterial, int, int, int, int, float, float, float, float, int, int, int, int, float, bool); /* linkage=_ZN11ISceneUtils24DrawScreenSpaceRectangleEP11ISceneWorld11CWeakHandleI29InfoForResourceTypeIMaterial2Eiiiiffffiiiifb */
	virtual class CSceneObject * DrawNDCSpaceUntexturedPolygon(class ISceneUtils *, class ISceneWorld *, HMaterial, int, class Vector2D *, bool); /* linkage=_ZN11ISceneUtils29DrawNDCSpaceUntexturedPolygonEP11ISceneWorld11CWeakHandleI29InfoForResourceTypeIMaterial2EiP8Vector2Db */
	virtual class CSceneObject * Create6FaceSkybox(class ISceneUtils *, class ISceneWorld *, HMaterial *, class CUtlStringToken); /* linkage=_ZN11ISceneUtils17Create6FaceSkyboxEP11ISceneWorldP11CWeakHandleI29InfoForResourceTypeIMaterial2E15CUtlStringToken */
	virtual class ISceneView * CreateClearRenderTargetView(class ISceneUtils *, const char  *, int, HRenderTexture, HRenderTexture, const class Vector4D  &); /* linkage=_ZN11ISceneUtils27CreateClearRenderTargetViewEPKci11CWeakHandleI31InfoForResourceTypeCTextureBaseES4_RK8Vector4D */
	virtual void Compute3DSkyboxFrustum(class ISceneUtils *, const class CFrustum  &, const class Vector  &, const class QAngle  &, const class Vector  &, float, class CFrustum *); /* linkage=_ZN11ISceneUtils22Compute3DSkyboxFrustumERK8CFrustumRK6VectorRK6QAngleS5_fPS0_ */
	virtual bool FindClipSpaceRectForObject(class ISceneUtils *, const class CSceneObject  *, const class ISceneView  *, class Vector4D &); /* linkage=_ZN11ISceneUtils26FindClipSpaceRectForObjectEPK12CSceneObjectPK10ISceneViewR8Vector4D */
};

// <03A57322> ../public/scenesystem/isceneutils.h:337
inline void ISceneUtils::ComputeScreenSpaceVertices(const RenderViewport_t& viewport, const RenderViewport_t& destViewport, const RenderViewport_t& srcViewport, int nSrcTextureWidth, int nSrcTextureHeight, ScreenSpaceVertex_t* pVertices)
{
} /* size: 0 */

// <03AF4D68> ../public/scenesystem/isceneutils.h:350
void CRenderingPipeline::CRenderingPipeline()
{
} /* size: 0 */

// <03AF4D4B> ../public/scenesystem/isceneutils.h:350
inline void CRenderingPipeline::CRenderingPipeline()
{
} /* size: 0 */

// <0278922D> ../public/scenesystem/isceneutils.h:350
// member functions: 18
// member variables: 3
// vtable entries: 4
// class size: 24
class CRenderingPipeline : public IRenderingPipeline {
public:
	/* class IRenderingPipeline <ancestor>; */ /* 0 8 */
	void ~CRenderingPipeline(CRenderingPipeline* );
	void CRenderingPipeline(CRenderingPipeline* , CRenderingPipeline& );
	void CRenderingPipeline(CRenderingPipeline* , const CRenderingPipeline& );
	void CRenderingPipeline(CRenderingPipeline* );
	/* ../public/scenesystem/isceneutils.h:353 */
	void SetName(CRenderingPipeline* , const char* );
	/* ../public/scenesystem/isceneutils.h:359 */
	virtual const char* GetName(const CRenderingPipeline* );
	/* ../public/scenesystem/isceneutils.h:360 */
	virtual CUtlStringToken GetId(const CRenderingPipeline* );
	/* ../public/scenesystem/isceneutils.h:362 */
	virtual void GetAdjustedViewport(CRenderingPipeline* , CUtlStringToken, const RenderViewport_t& , RenderViewport_t* );
	/* ../public/scenesystem/isceneutils.h:368 */
	virtual bool SupportsMSAA(const CRenderingPipeline* );
private:
	const char * m_pName; /* 8 8 */
	CUtlStringToken m_NameId; /* 16 4 */
	/* <1dd223f> ../public/scenesystem/isceneutils.h:362 */
	virtual void GetAdjustedViewport(class CRenderingPipeline *, class CUtlStringToken, const class RenderViewport_t  &, class RenderViewport_t *); /* linkage=_ZN18CRenderingPipeline19GetAdjustedViewportE15CUtlStringTokenRK16RenderViewport_tPS1_ */
	void ~CRenderingPipeline(class CRenderingPipeline *); /* linkage=_ZN18CRenderingPipelineD4Ev */
	void CRenderingPipeline(class CRenderingPipeline *, class CRenderingPipeline &); /* linkage=_ZN18CRenderingPipelineC4EOS_ */
	void CRenderingPipeline(class CRenderingPipeline *, const class CRenderingPipeline  &); /* linkage=_ZN18CRenderingPipelineC4ERKS_ */
	void CRenderingPipeline(class CRenderingPipeline *); /* linkage=_ZN18CRenderingPipelineC4Ev */
	void SetName(class CRenderingPipeline *, const char  *); /* linkage=_ZN18CRenderingPipeline7SetNameEPKc */
	/* <3af86c9> ../public/scenesystem/isceneutils.h:359 */
	virtual const char  * GetName(const class CRenderingPipeline  *); /* linkage=_ZNK18CRenderingPipeline7GetNameEv */
	/* <3af86f3> ../public/scenesystem/isceneutils.h:360 */
	virtual class CUtlStringToken GetId(const class CRenderingPipeline  *); /* linkage=_ZNK18CRenderingPipeline5GetIdEv */
	virtual bool SupportsMSAA(const class CRenderingPipeline  *); /* linkage=_ZNK18CRenderingPipeline12SupportsMSAAEv */
};

// <03AF6925> ../public/scenesystem/isceneutils.h:353
inline void CRenderingPipeline::SetName(const char* pName)
{
} /* size: 0 */

// <03AF86C9> ../public/scenesystem/isceneutils.h:359
void CRenderingPipeline::GetName()
{
} /* size: 9 */

// <03AF690C> ../public/scenesystem/isceneutils.h:359
inline void CRenderingPipeline::GetName()
{
} /* size: 0 */

// <03AF86F3> ../public/scenesystem/isceneutils.h:360
void CRenderingPipeline::GetId()
{
} /* size: 8 */

// <03AF68F3> ../public/scenesystem/isceneutils.h:360
inline void CRenderingPipeline::GetId()
{
} /* size: 0 */

// <03AF68B4> ../public/scenesystem/isceneutils.h:362
void CRenderingPipeline::GetAdjustedViewport(CUtlStringToken nViewportType, const RenderViewport_t& inViewport, RenderViewport_t* pOutAdjustedViewport)
{
} /* size: 0 */

// <01DC819D> ../public/scenesystem/isceneutils.h:362
inline void CRenderingPipeline::GetAdjustedViewport(CUtlStringToken nViewportType, const RenderViewport_t& inViewport, RenderViewport_t* pOutAdjustedViewport)
{
} /* size: 0 */

// <03AF689C> ../public/scenesystem/isceneutils.h:368
void CRenderingPipeline::SupportsMSAA()
{
} /* size: 0 */

// <027D6AD2> ../public/scenesystem/isceneutils.h:380
void IRenderingPipelineFactory::IRenderingPipelineFactory()
{
} /* size: 0 */

// <027D6AB5> ../public/scenesystem/isceneutils.h:380
inline void IRenderingPipelineFactory::IRenderingPipelineFactory()
{
} /* size: 0 */

// <02789654> ../public/scenesystem/isceneutils.h:380
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IRenderingPipelineFactory {
	void ~IRenderingPipelineFactory(IRenderingPipelineFactory* );
	void IRenderingPipelineFactory(IRenderingPipelineFactory* , IRenderingPipelineFactory& );
	void IRenderingPipelineFactory(IRenderingPipelineFactory* , const IRenderingPipelineFactory& );
	void IRenderingPipelineFactory(IRenderingPipelineFactory* );
	int ()(void) * * _vptr.IRenderingPipelineFactory; /* 0 8 */
	/* ../public/scenesystem/isceneutils.h:383 */
	virtual void Init(IRenderingPipelineFactory* );
	/* ../public/scenesystem/isceneutils.h:384 */
	virtual void Shutdown(IRenderingPipelineFactory* );
	void ~IRenderingPipelineFactory(class IRenderingPipelineFactory *); /* linkage=_ZN25IRenderingPipelineFactoryD4Ev */
	void IRenderingPipelineFactory(class IRenderingPipelineFactory *, class IRenderingPipelineFactory &); /* linkage=_ZN25IRenderingPipelineFactoryC4EOS_ */
	void IRenderingPipelineFactory(class IRenderingPipelineFactory *, const class IRenderingPipelineFactory  &); /* linkage=_ZN25IRenderingPipelineFactoryC4ERKS_ */
	void IRenderingPipelineFactory(class IRenderingPipelineFactory *); /* linkage=_ZN25IRenderingPipelineFactoryC4Ev */
	virtual void Init(class IRenderingPipelineFactory *); /* linkage=_ZN25IRenderingPipelineFactory4InitEv */
	virtual void Shutdown(class IRenderingPipelineFactory *); /* linkage=_ZN25IRenderingPipelineFactory8ShutdownEv */
};

// <02789560> ../public/scenesystem/isceneutils.h:387
// member functions: 12
// member variables: 2
// static member variable: 1
// class size: 16
class CBaseRenderingPipelineFactory : public IRenderingPipelineFactory {
public:
	/* class IRenderingPipelineFactory <ancestor>; */ /* 0 8 */
	void ~CBaseRenderingPipelineFactory(CBaseRenderingPipelineFactory* );
	void CBaseRenderingPipelineFactory(CBaseRenderingPipelineFactory* , CBaseRenderingPipelineFactory& );
	void CBaseRenderingPipelineFactory(CBaseRenderingPipelineFactory* , const CBaseRenderingPipelineFactory& );
	/* ../public/scenesystem/isceneutils.h:390 */
	void CBaseRenderingPipelineFactory(CBaseRenderingPipelineFactory* );
	/* ../public/scenesystem/isceneutils.h:396 */
	void InitAllFactories(void);
	/* ../public/scenesystem/isceneutils.h:404 */
	void ShutdownAllFactories(void);
private:
	CBaseRenderingPipelineFactory * m_pNext; /* 8 8 */
	static class CBaseRenderingPipelineFactory * sm_pFirst; /* 0 0 */
	void ~CBaseRenderingPipelineFactory(class CBaseRenderingPipelineFactory *); /* linkage=_ZN29CBaseRenderingPipelineFactoryD4Ev */
	void CBaseRenderingPipelineFactory(class CBaseRenderingPipelineFactory *, class CBaseRenderingPipelineFactory &); /* linkage=_ZN29CBaseRenderingPipelineFactoryC4EOS_ */
	void CBaseRenderingPipelineFactory(class CBaseRenderingPipelineFactory *, const class CBaseRenderingPipelineFactory  &); /* linkage=_ZN29CBaseRenderingPipelineFactoryC4ERKS_ */
	void CBaseRenderingPipelineFactory(class CBaseRenderingPipelineFactory *); /* linkage=_ZN29CBaseRenderingPipelineFactoryC4Ev */
	void InitAllFactories(void); /* linkage=_ZN29CBaseRenderingPipelineFactory16InitAllFactoriesEv */
	void ShutdownAllFactories(void); /* linkage=_ZN29CBaseRenderingPipelineFactory20ShutdownAllFactoriesEv */
};

// <02870E98> ../public/scenesystem/isceneutils.h:387
// member functions: 9
// member variables: 2
// static member variable: 1
// class size: 16
class CBaseRenderingPipelineFactory : public IRenderingPipelineFactory {
public:
	/* class IRenderingPipelineFactory <ancestor>; */ /* 0 8 */
	/* ../public/scenesystem/isceneutils.h:390 */
	void CBaseRenderingPipelineFactory(CBaseRenderingPipelineFactory* );
	/* ../public/scenesystem/isceneutils.h:396 */
	void InitAllFactories(void);
	/* ../public/scenesystem/isceneutils.h:404 */
	void ShutdownAllFactories(void);
private:
	CBaseRenderingPipelineFactory * m_pNext; /* 8 8 */
	static class CBaseRenderingPipelineFactory * sm_pFirst; /* 0 0 */
	void ~CBaseRenderingPipelineFactory(class CBaseRenderingPipelineFactory *); /* linkage=_ZN29CBaseRenderingPipelineFactoryD4Ev */
	void CBaseRenderingPipelineFactory(class CBaseRenderingPipelineFactory *, class CBaseRenderingPipelineFactory &); /* linkage=_ZN29CBaseRenderingPipelineFactoryC4EOS_ */
	void CBaseRenderingPipelineFactory(class CBaseRenderingPipelineFactory *, const class CBaseRenderingPipelineFactory  &); /* linkage=_ZN29CBaseRenderingPipelineFactoryC4ERKS_ */
	void CBaseRenderingPipelineFactory(class CBaseRenderingPipelineFactory *); /* linkage=_ZN29CBaseRenderingPipelineFactoryC4Ev */
	void InitAllFactories(void); /* linkage=_ZN29CBaseRenderingPipelineFactory16InitAllFactoriesEv */
	void ShutdownAllFactories(void); /* linkage=_ZN29CBaseRenderingPipelineFactory20ShutdownAllFactoriesEv */
};

// <027D6A9E> ../public/scenesystem/isceneutils.h:390
void CBaseRenderingPipelineFactory::CBaseRenderingPipelineFactory()
{
} /* size: 0 */

// <027D6A85> ../public/scenesystem/isceneutils.h:390
inline void CBaseRenderingPipelineFactory::CBaseRenderingPipelineFactory()
{
} /* size: 0 */

// <0287A581> ../public/scenesystem/isceneutils.h:396
// variable: 1
inline void InitAllFactories(void)
{
	{
		CBaseRenderingPipelineFactory* pFactory; // 398
	}
} /* size: 0 */

// <0287A566> ../public/scenesystem/isceneutils.h:404
// variable: 1
inline void ShutdownAllFactories(void)
{
	{
		CBaseRenderingPipelineFactory* pFactory; // 406
	}
} /* size: 0 */

// <027912D5> ../public/scenesystem/isceneutils.h:417
// function calls: 2
void CRenderingPipelineFactory<CRenderingPipelineStandard>::~CRenderingPipelineFactory()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 705
	CRenderingPipelineStandard::~CRenderingPipelineStandard(); // 417
} /* size: 35, inline expansions: 2 (25 bytes) */

// <027912B8> ../public/scenesystem/isceneutils.h:417
inline void CRenderingPipelineFactory<CRenderingPipelineStandard>::~CRenderingPipelineFactory()
{
} /* size: 0 */

// <02784D80> ../public/scenesystem/isceneutils.h:417
// member functions: 6
// member variables: 2
// vtable entries: 2
// class size: 40
class CRenderingPipelineFactory<CRenderingPipeline3DSkybox> : public CBaseRenderingPipelineFactory {
public:
	/* class CBaseRenderingPipelineFactory <ancestor>; */ /* 0 16 */
	void ~CRenderingPipelineFactory(CRenderingPipelineFactory<CRenderingPipeline3DSkybox>* );
	void CRenderingPipelineFactory(CRenderingPipelineFactory<CRenderingPipeline3DSkybox>* , CRenderingPipelineFactory<CRenderingPipeline3DSkybox>& );
	void CRenderingPipelineFactory(CRenderingPipelineFactory<CRenderingPipeline3DSkybox>* , const CRenderingPipelineFactory<CRenderingPipeline3DSkybox>& );
	/* ../public/scenesystem/isceneutils.h:420 */
	void CRenderingPipelineFactory(CRenderingPipelineFactory<CRenderingPipeline3DSkybox>* , const char* );
	/* ../public/scenesystem/isceneutils.h:425 */
	virtual void Init(CRenderingPipelineFactory<CRenderingPipeline3DSkybox>* );
	/* ../public/scenesystem/isceneutils.h:431 */
	virtual void Shutdown(CRenderingPipelineFactory<CRenderingPipeline3DSkybox>* );
private:
	CRenderingPipeline3DSkybox m_Pipeline; /* 16 24 */
};

// <0278531B> ../public/scenesystem/isceneutils.h:417
// member functions: 12
// member variables: 2
// vtable entries: 2
// class size: 80
class CRenderingPipelineFactory<CRenderingPipelineStandard> : public CBaseRenderingPipelineFactory {
public:
	/* class CBaseRenderingPipelineFactory <ancestor>; */ /* 0 16 */
	void CRenderingPipelineFactory(CRenderingPipelineFactory<CRenderingPipelineStandard>* , CRenderingPipelineFactory<CRenderingPipelineStandard>& );
	void CRenderingPipelineFactory(CRenderingPipelineFactory<CRenderingPipelineStandard>* , const CRenderingPipelineFactory<CRenderingPipelineStandard>& );
	/* ../public/scenesystem/isceneutils.h:420 */
	void CRenderingPipelineFactory(CRenderingPipelineFactory<CRenderingPipelineStandard>* , const char* );
	/* ../public/scenesystem/isceneutils.h:425 */
	virtual void Init(CRenderingPipelineFactory<CRenderingPipelineStandard>* );
	/* ../public/scenesystem/isceneutils.h:431 */
	virtual void Shutdown(CRenderingPipelineFactory<CRenderingPipelineStandard>* );
private:
	CRenderingPipelineStandard m_Pipeline; /* 16 64 */
	void ~CRenderingPipelineFactory(CRenderingPipelineFactory<CRenderingPipelineStandard>* );
	void CRenderingPipelineFactory(class CRenderingPipelineFactory<CRenderingPipelineStandard> *, class CRenderingPipelineFactory<CRenderingPipelineStandard> &); /* linkage=_ZN25CRenderingPipelineFactoryI26CRenderingPipelineStandardEC4EOS1_ */
	void CRenderingPipelineFactory(class CRenderingPipelineFactory<CRenderingPipelineStandard> *, const class CRenderingPipelineFactory<CRenderingPipelineStandard>  &); /* linkage=_ZN25CRenderingPipelineFactoryI26CRenderingPipelineStandardEC4ERKS1_ */
	void CRenderingPipelineFactory(class CRenderingPipelineFactory<CRenderingPipelineStandard> *, const char  *); /* linkage=_ZN25CRenderingPipelineFactoryI26CRenderingPipelineStandardEC4EPKc */
	virtual void Init(class CRenderingPipelineFactory<CRenderingPipelineStandard> *); /* linkage=_ZN25CRenderingPipelineFactoryI26CRenderingPipelineStandardE4InitEv */
	virtual void Shutdown(class CRenderingPipelineFactory<CRenderingPipelineStandard> *); /* linkage=_ZN25CRenderingPipelineFactoryI26CRenderingPipelineStandardE8ShutdownEv */
	void ~CRenderingPipelineFactory(class CRenderingPipelineFactory<CRenderingPipelineStandard> *); /* linkage=_ZN25CRenderingPipelineFactoryI26CRenderingPipelineStandardED4Ev */
};

// <027A1CA6> ../public/scenesystem/isceneutils.h:420
void CRenderingPipelineFactory<CRenderingPipeline3DSkybox>::CRenderingPipelineFactory(const char* pName)
{
} /* size: 0 */

// <027A1C80> ../public/scenesystem/isceneutils.h:420
inline void CRenderingPipelineFactory<CRenderingPipeline3DSkybox>::CRenderingPipelineFactory(const char* pName)
{
} /* size: 0 */

// <027A1BF2> ../public/scenesystem/isceneutils.h:420
void CRenderingPipelineFactory<CRenderingPipelineStandard>::CRenderingPipelineFactory(const char* pName)
{
} /* size: 0 */

// <027A1BCC> ../public/scenesystem/isceneutils.h:420
inline void CRenderingPipelineFactory<CRenderingPipelineStandard>::CRenderingPipelineFactory(const char* pName)
{
} /* size: 0 */

// <0279124E> ../public/scenesystem/isceneutils.h:425
void CRenderingPipelineFactory<CRenderingPipelineStandard>::Init()
{
} /* size: 55 */

// <0279118A> ../public/scenesystem/isceneutils.h:425
void CRenderingPipelineFactory<CRenderingPipeline3DSkybox>::Init()
{
} /* size: 55 */

// <027911EC> ../public/scenesystem/isceneutils.h:431
void CRenderingPipelineFactory<CRenderingPipelineStandard>::Shutdown()
{
} /* size: 55 */

// <02791100> ../public/scenesystem/isceneutils.h:431
// function call: 1
void CRenderingPipelineFactory<CRenderingPipeline3DSkybox>::Shutdown()
{
	CRenderingPipeline3DSkybox::Shutdown(); // 434
} /* size: 64, inline expansions: 1 (29 bytes) */

