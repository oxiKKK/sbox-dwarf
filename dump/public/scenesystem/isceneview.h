
//
// public/scenesystem/isceneview.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 38
//	classes: 5
//	structs: 4
//

// <00047AA8> ../public/scenesystem/isceneview.h:97
// member functions: 3
// member variables: 5
// struct size: 20
struct SceneViewRenderTargetInfo_t {
	/* ../public/scenesystem/isceneview.h:99 */
	void SceneViewRenderTargetInfo_t(SceneViewRenderTargetInfo_t* );
	/* ../public/scenesystem/isceneview.h:106 */
	void SceneViewRenderTargetInfo_t(SceneViewRenderTargetInfo_t* , int, int, ImageFormat, RenderMultisampleType_t, RuntimeTextureSpecificationFlags_t);
	/* ../public/scenesystem/isceneview.h:115 */
	void Init(SceneViewRenderTargetInfo_t* , int, int, ImageFormat, RenderMultisampleType_t, RuntimeTextureSpecificationFlags_t);
	int m_nWidth; /* 0 4 */
	int m_nHeight; /* 4 4 */
	ImageFormat m_Format; /* 8 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 12 4 */
	RuntimeTextureSpecificationFlags_t m_nTextureSpecFlags; /* 16 4 */
};

// <058D567B> ../../public/scenesystem/isceneview.h:97
// member functions: 3
// member variables: 5
// struct size: 20
struct SceneViewRenderTargetInfo_t {
	/* ../../public/scenesystem/isceneview.h:99 */
	void SceneViewRenderTargetInfo_t(SceneViewRenderTargetInfo_t* );
	/* ../../public/scenesystem/isceneview.h:106 */
	void SceneViewRenderTargetInfo_t(SceneViewRenderTargetInfo_t* , int, int, ImageFormat, RenderMultisampleType_t, RuntimeTextureSpecificationFlags_t);
	/* ../../public/scenesystem/isceneview.h:115 */
	void Init(SceneViewRenderTargetInfo_t* , int, int, ImageFormat, RenderMultisampleType_t, RuntimeTextureSpecificationFlags_t);
	int m_nWidth; /* 0 4 */
	int m_nHeight; /* 4 4 */
	ImageFormat m_Format; /* 8 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 12 4 */
	RuntimeTextureSpecificationFlags_t m_nTextureSpecFlags; /* 16 4 */
};

// <03244F52> ../public/scenesystem/isceneview.h:99
void SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t()
{
} /* size: 0 */

// <03244F39> ../public/scenesystem/isceneview.h:99
inline void SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t()
{
} /* size: 0 */

// <027D9D15> ../public/scenesystem/isceneview.h:106
void SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(int nWidth, int nHeight, ImageFormat nFormat, RenderMultisampleType_t nMultisampleType, RuntimeTextureSpecificationFlags_t nTextureSpecFlags)
{
} /* size: 0 */

// <027D9CC0> ../public/scenesystem/isceneview.h:106
inline void SceneViewRenderTargetInfo_t::SceneViewRenderTargetInfo_t(int nWidth, int nHeight, ImageFormat nFormat, RenderMultisampleType_t nMultisampleType, RuntimeTextureSpecificationFlags_t nTextureSpecFlags)
{
} /* size: 0 */

// <00047B95> ../public/scenesystem/isceneview.h:171
// member function: 1
// member variable: 1
// struct size: 4
struct TonemapState_t {
	float m_flTonemapScalar; /* 0 4 */
	/* ../public/scenesystem/isceneview.h:175 */
	void TonemapState_t(TonemapState_t* );
};

// <03244F22> ../public/scenesystem/isceneview.h:175
void TonemapState_t::TonemapState_t()
{
} /* size: 0 */

// <03244F09> ../public/scenesystem/isceneview.h:175
inline void TonemapState_t::TonemapState_t()
{
} /* size: 0 */

// <03244E45> ../public/scenesystem/isceneview.h:178
void SceneVieweSettings::~SceneVieweSettings()
{
} /* size: 0 */

// <03244E29> ../public/scenesystem/isceneview.h:178
inline void SceneVieweSettings::~SceneVieweSettings()
{
} /* size: 0 */

// <0323AD3A> ../public/scenesystem/isceneview.h:178
void SceneVieweSettings::SceneVieweSettings()
{
} /* size: 0 */

// <0323AD1E> ../public/scenesystem/isceneview.h:178
inline void SceneVieweSettings::SceneVieweSettings()
{
} /* size: 0 */

// <00047BD7> ../public/scenesystem/isceneview.h:178
// member variables: 2
// struct size: 1,200
struct SceneVieweSettings {
	SkyboxRenderSetup Skybox __attribute__((__aligned__(16))); /* 0 1184 */
	bool RenderSky; /* 1184 1 */
} __attribute__((__aligned__(16)));

// <0323ACFC> ../public/scenesystem/isceneview.h:188
void ISceneView::ISceneView()
{
} /* size: 0 */

// <0323ACE0> ../public/scenesystem/isceneview.h:188
inline void ISceneView::ISceneView()
{
} /* size: 0 */

// <00043890> ../public/scenesystem/isceneview.h:188
// member functions: 210
// member variables: 10
// vtable entries: 81
// class size: 4,960
class ISceneView {
	/* ../public/scenesystem/isceneview.h:510 */
	struct WorldList_t {
		CSceneWorld * m_pWorld; /* 0 8 */
		const class CPVSBits * m_pVisInfo; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	int ()(void) * * _vptr.ISceneView; /* 0 8 */
	/* ../public/scenesystem/isceneview.h:191 */
	virtual const char* GetDebugName(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:193 */
	virtual ISceneLayer* AddRenderLayer(ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:194 */
	virtual ISceneLayer* AddProceduralLayer(ISceneView* , const char* , const RenderViewport_t& , IProceduralLayerRenderer* , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:195 */
	virtual ISceneLayer* AddClearLayer(ISceneView* , const char* , const RenderViewport_t& , int, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:197 */
	virtual ISceneLayer* AddManagedProceduralLayer(ISceneView* , const char* , const RenderViewport_t& , SboxProceduralLayerCallback, ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:200 */
	virtual ISceneLayer* AddLabelLayer(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:202 */
	virtual bool HasLabelLayer(ISceneView* , CUtlStringToken);
	/* ../public/scenesystem/isceneview.h:205 */
	virtual void MoveLayerToBeAfterLabel(ISceneView* , CUtlStringToken, ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:208 */
	virtual void MoveLayerToBeAfterLayer(ISceneView* , ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:216 */
	virtual void AddSemaphoreDependencyForLabelLayer(ISceneView* , CUtlStringToken, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:219 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(ISceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const RenderTargetDesc_t& , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:220 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(ISceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const SceneLayerOutputs_t& , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:221 */
	virtual ISceneLayer* AddSimpleQuadRendererLayer(ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , HMaterial, int, int, const RenderViewport_t& , const RenderViewport_t& );
	/* ../public/scenesystem/isceneview.h:224 */
	virtual ISceneLayer* AddResolveRenderTargetLayer(ISceneView* , const char* , const RenderViewport_t& , int, int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:225 */
	virtual ISceneLayer* AddResolveDepthStencilLayer(ISceneView* , const char* , const RenderViewport_t& , int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:228 */
	virtual void AddWorldToRenderList(ISceneView* , ISceneWorld* , const CPVSBits* , bool);
	/* ../public/scenesystem/isceneview.h:231 */
	virtual void SetUserDataPtr(ISceneView* , void* );
	/* ../public/scenesystem/isceneview.h:232 */
	virtual void* GetUserDataPtr(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:234 */
	const CFrustum& GetFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:235 */
	const CFrustum& GetCullFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:236 */
	const RenderViewport_t& GetMainViewport(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:237 */
	void SetFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:238 */
	void SetCullFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:239 */
	void SetMainViewport(ISceneView* , const RenderViewport_t& );
	/* ../public/scenesystem/isceneview.h:546 */
	uint32 CalculateSortKey(const ISceneView* , const Vector& , bool, float);
	/* ../public/scenesystem/isceneview.h:561 */
	uint32 CalculateSortKey(const ISceneView* , const Vector& , const Vector& , bool, float);
	/* ../public/scenesystem/isceneview.h:246 */
	uint32 CalculateSortKey(const ISceneView* , const AABB_t& , bool, float);
	/* ../public/scenesystem/isceneview.h:252 */
	virtual void SetNextPtr(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:253 */
	virtual ISceneView* GetNextPtr(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:255 */
	virtual SwapChainHandle_t GetSwapChain(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:257 */
	virtual void ~ISceneView(ISceneView* );
	/* ../public/scenesystem/isceneview.h:263 */
	virtual ISceneLayer* AddDebugInfoLayer(ISceneView* , const char* , const RenderViewport_t& , uint);
	/* ../public/scenesystem/isceneview.h:266 */
	virtual void PushNamedRenderTargetScope(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:267 */
	virtual void PopNamedRenderTargetScope(ISceneView* );
	/* ../public/scenesystem/isceneview.h:276 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , HRenderTexture, SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:283 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , SwapChainHandle_t, SwapChainBuffer_t, SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:290 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , const SceneViewRenderTargetInfo_t& , SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:297 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , const char* );
	/* ../public/scenesystem/isceneview.h:298 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:308 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t);
	/* ../public/scenesystem/isceneview.h:311 */
	virtual HSceneViewRenderTarget FindRenderTarget(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:316 */
	virtual void AddFlags(ISceneView* , SceneViewFlags_t);
	/* ../public/scenesystem/isceneview.h:319 */
	virtual void RemoveFlags(ISceneView* , SceneViewFlags_t);
	/* ../public/scenesystem/isceneview.h:322 */
	virtual const TonemapState_t& GetTonemapState(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:323 */
	virtual void SetTonemapState(ISceneView* , const TonemapState_t& );
	/* ../public/scenesystem/isceneview.h:326 */
	virtual void SetDefaultLayerObjectRequiredFlags(ISceneView* , ESceneObjectFlags);
	/* ../public/scenesystem/isceneview.h:327 */
	virtual void SetDefaultLayerObjectExcludedFlags(ISceneView* , ESceneObjectFlags);
	/* ../public/scenesystem/isceneview.h:330 */
	virtual ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:331 */
	virtual ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:334 */
	virtual ISceneLayer* GetFinalOutputLayer(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:337 */
	virtual void GetRenderTargetInfo(const ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetInfo_t* );
	/* ../public/scenesystem/isceneview.h:340 */
	virtual ISceneLayer* AddBlitTextureToTargetLayer(ISceneView* , const char* , HSceneViewRenderTarget, const RenderViewport_t& , const RenderViewport_t& , const SceneLayerOutputs_t& , BlitSetup_t* );
	/* ../public/scenesystem/isceneview.h:343 */
	virtual SceneViewFlags_t GetFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:349 */
	virtual void MarkRenderTargetRead(ISceneView* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:353 */
	virtual HRenderTexture GetRenderTargetTexture(ISceneView* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:356 */
	virtual void SetUserClipPlane(ISceneView* , int, const VPlane& );
	/* ../public/scenesystem/isceneview.h:362 */
	virtual void ComputeScreenCorners(const ISceneView* , Vector* );
	/* ../public/scenesystem/isceneview.h:364 */
	virtual void ComputeEyeRays(const ISceneView* , Vector* );
	/* ../public/scenesystem/isceneview.h:368 */
	virtual bool GetShadowsEnabled(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:369 */
	virtual void SetShadowsEnabled(ISceneView* , bool);
	/* ../public/scenesystem/isceneview.h:371 */
	virtual bool GetPostProcessEnabled(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:372 */
	virtual void SetPostProcessEnabled(ISceneView* , bool);
	/* ../public/scenesystem/isceneview.h:374 */
	virtual ISceneViewDebugOverlays* GetDebugOverlayList(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:376 */
	virtual const CRenderAttributes& GetRenderAttributes(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:377 */
	virtual CRenderAttributes& GetRenderAttributes(ISceneView* );
	/* ../public/scenesystem/isceneview.h:380 */
	virtual CViewId GetViewId(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:383 */
	virtual void ComputeRenderTargetAllocations(ISceneView* );
	/* ../public/scenesystem/isceneview.h:387 */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(ISceneView* , float);
	/* ../public/scenesystem/isceneview.h:391 */
	virtual void SetDistanceScaleForLODAndCulling(ISceneView* , float);
	/* ../public/scenesystem/isceneview.h:394 */
	virtual float GetSquaredDistanceScaleForLODAndCulling(ISceneView* );
	/* ../public/scenesystem/isceneview.h:396 */
	virtual int GetPriority(ISceneView* );
	/* ../public/scenesystem/isceneview.h:397 */
	virtual void SetPriority(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:400 */
	virtual void SetParent(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:401 */
	virtual ISceneView* GetParent(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:404 */
	virtual void CopyWorldsAndVisFrom(ISceneView* , ISceneView* , const Vector& , vis_type_t);
	/* ../public/scenesystem/isceneview.h:405 */
	virtual void CopyWorldsFrom(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:408 */
	virtual void AddDependentView(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:414 */
	virtual void AddAuxiliaryRenderCamera(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:415 */
	virtual const CFrustum* GetFirstAuxilaryRenderCamera(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:418 */
	virtual void SetOverrideLODLevel(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:419 */
	virtual int GetOverrideLODLevel(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:425 */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const ISceneView* , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:428 */
	virtual void SetIssueSortIndex(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:431 */
	virtual void RemoveCullBoxes(ISceneView* );
	/* ../public/scenesystem/isceneview.h:433 */
	virtual const CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >& GetVolumetricFogVolumes(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:436 */
	virtual void SetVolumeCuller(ISceneView* , const CVolumeCuller& );
	/* ../public/scenesystem/isceneview.h:440 */
	virtual void CaptureRenderDocForView(ISceneView* );
	/* ../public/scenesystem/isceneview.h:442 */
	void SetPreviousFrameFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:443 */
	const CFrustum& GetPreviousFrameFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:446 */
	int NumWorldsToRender(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:449 */
	ISceneWorld* GetWorldToRender(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:450 */
	const CPVSBits* GetWorldToRenderVisInfo(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:451 */
	void SetWorldToRenderVisInfo(ISceneView* , int, const CPVSBits* );
	/* ../public/scenesystem/isceneview.h:454 */
	const uint32* GetWorldToRenderVisBits(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:460 */
	bool WillRenderWorld(const ISceneView* , ISceneWorld* );
	/* ../public/scenesystem/isceneview.h:471 */
	int IndexOfWorldToRender(const ISceneView* , ISceneWorld* );
	/* ../public/scenesystem/isceneview.h:495 */
	Vector GetCameraPosition(const ISceneView* );
private:
	CFrustum m_frustum __attribute__((__aligned__(16))); /* 16 1136 */
	CFrustum m_cullFrustum __attribute__((__aligned__(16))); /* 1152 1136 */
	CFrustum m_prevFrameFrustum __attribute__((__aligned__(16))); /* 2288 1136 */
	RenderViewport_t m_mainViewport; /* 3424 28 */
protected:
	CUtlVectorFixedGrowable<ISceneView::WorldList_t, 16> m_pWorldsToRender __attribute__((__aligned__(8))); /* 3456 288 */
	int m_nOverrideRTArrayIndex[2]; /* 3744 8 */
	/* ../public/scenesystem/isceneview.h:522 */
	void SetOverrideRenderTargetArrayIndex(ISceneView* , int, int);
	/* ../public/scenesystem/isceneview.h:527 */
	int* GetOverrideRenderTargetArrayIndex(ISceneView* );
	/* ../public/scenesystem/isceneview.h:529 */
	CRenderAttributes* GetRenderAttributesPtr(ISceneView* );
	/* ../public/scenesystem/isceneview.h:534 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:535 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:537 */
	virtual void SetRenderTags(ISceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../public/scenesystem/isceneview.h:538 */
	virtual void SetExcludeTags(ISceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	int m_ViewUniqueId; /* 3752 4 */
	int m_ManagedCameraId; /* 3756 4 */
	SceneVieweSettings Settings __attribute__((__aligned__(16))); /* 3760 1200 */
	virtual const char  * GetDebugName(const class ISceneView  *); /* linkage=_ZNK10ISceneView12GetDebugNameEv */
	virtual class ISceneLayer * AddRenderLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, class ISceneLayer *); /* linkage=_ZN10ISceneView14AddRenderLayerEPKcRK16RenderViewport_tRK15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneLayer * AddProceduralLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, class IProceduralLayerRenderer *, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView18AddProceduralLayerEPKcRK16RenderViewport_tP24IProceduralLayerRendererP11ISceneLayerb */
	virtual class ISceneLayer * AddClearLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, class ISceneLayer *); /* linkage=_ZN10ISceneView13AddClearLayerEPKcRK16RenderViewport_tiP11ISceneLayer */
	virtual class ISceneLayer * AddManagedProceduralLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, SboxProceduralLayerCallback, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView25AddManagedProceduralLayerEPKcRK16RenderViewport_t12CUtlDelegateIFv20ManagedRenderSetup_tEEP11ISceneLayerb */
	virtual class ISceneLayer * AddLabelLayer(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView13AddLabelLayerEPKc */
	virtual bool HasLabelLayer(class ISceneView *, class CUtlStringToken); /* linkage=_ZN10ISceneView13HasLabelLayerE15CUtlStringToken */
	virtual void MoveLayerToBeAfterLabel(class ISceneView *, class CUtlStringToken, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView23MoveLayerToBeAfterLabelE15CUtlStringTokenP11ISceneLayerb */
	virtual void MoveLayerToBeAfterLayer(class ISceneView *, class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN10ISceneView23MoveLayerToBeAfterLayerEP11ISceneLayerS1_ */
	virtual void AddSemaphoreDependencyForLabelLayer(class ISceneView *, class CUtlStringToken, class ISceneLayer *); /* linkage=_ZN10ISceneView35AddSemaphoreDependencyForLabelLayerE15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class RenderTargetDesc_t  &, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK18RenderTargetDesc_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class SceneLayerOutputs_t  &, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK19SceneLayerOutputs_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimpleQuadRendererLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, HMaterial, int, int, const class RenderViewport_t  &, const class RenderViewport_t  &); /* linkage=_ZN10ISceneView26AddSimpleQuadRendererLayerEPKcRK16RenderViewport_tRK15CUtlStringToken11CWeakHandleI29InfoForResourceTypeIMaterial2EiiS4_S4_ */
	virtual class ISceneLayer * AddResolveRenderTargetLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10ISceneView27AddResolveRenderTargetLayerEPKcRK16RenderViewport_tiiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual class ISceneLayer * AddResolveDepthStencilLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10ISceneView27AddResolveDepthStencilLayerEPKcRK16RenderViewport_tiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual void AddWorldToRenderList(class ISceneView *, class ISceneWorld *, const class CPVSBits  *, bool); /* linkage=_ZN10ISceneView20AddWorldToRenderListEP11ISceneWorldPK8CPVSBitsb */
	virtual void SetUserDataPtr(class ISceneView *, void *); /* linkage=_ZN10ISceneView14SetUserDataPtrEPv */
	virtual void * GetUserDataPtr(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetUserDataPtrEv */
	const class CFrustum  & GetFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView10GetFrustumEv */
	const class CFrustum  & GetCullFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetCullFrustumEv */
	const class RenderViewport_t  & GetMainViewport(const class ISceneView  *); /* linkage=_ZNK10ISceneView15GetMainViewportEv */
	void SetFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView10SetFrustumERK8CFrustum */
	void SetCullFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView14SetCullFrustumERK8CFrustum */
	void SetMainViewport(class ISceneView *, const class RenderViewport_t  &); /* linkage=_ZN10ISceneView15SetMainViewportERK16RenderViewport_t */
	uint32 CalculateSortKey(const class ISceneView  *, const class Vector  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6Vectorbf */
	uint32 CalculateSortKey(const class ISceneView  *, const class Vector  &, const class Vector  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6VectorS2_bf */
	uint32 CalculateSortKey(const class ISceneView  *, const class AABB_t  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6AABB_tbf */
	virtual void SetNextPtr(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView10SetNextPtrEPS_ */
	virtual class ISceneView * GetNextPtr(const class ISceneView  *); /* linkage=_ZNK10ISceneView10GetNextPtrEv */
	virtual SwapChainHandle_t GetSwapChain(const class ISceneView  *); /* linkage=_ZNK10ISceneView12GetSwapChainEv */
	virtual void ~ISceneView(class ISceneView *); /* linkage=_ZN10ISceneViewD4Ev */
	virtual class ISceneLayer * AddDebugInfoLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, uint); /* linkage=_ZN10ISceneView17AddDebugInfoLayerEPKcRK16RenderViewport_tj */
	virtual void PushNamedRenderTargetScope(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView26PushNamedRenderTargetScopeEPKc */
	virtual void PopNamedRenderTargetScope(class ISceneView *); /* linkage=_ZN10ISceneView25PopNamedRenderTargetScopeEv */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, HRenderTexture, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseEj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, SwapChainHandle_t, enum SwapChainBuffer_t, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcP19SwapChainHandle_t__17SwapChainBuffer_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, const class SceneViewRenderTargetInfo_t  &, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcRK27SceneViewRenderTargetInfo_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, const char  *); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcS1_ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcP24HSceneViewRenderTarget__ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, class ISceneView *, HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcPS_P24HSceneViewRenderTarget__j */
	virtual HSceneViewRenderTarget FindRenderTarget(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView16FindRenderTargetEPKc */
	virtual void AddFlags(class ISceneView *, enum SceneViewFlags_t); /* linkage=_ZN10ISceneView8AddFlagsE16SceneViewFlags_t */
	virtual void RemoveFlags(class ISceneView *, enum SceneViewFlags_t); /* linkage=_ZN10ISceneView11RemoveFlagsE16SceneViewFlags_t */
	virtual const class TonemapState_t  & GetTonemapState(const class ISceneView  *); /* linkage=_ZNK10ISceneView15GetTonemapStateEv */
	virtual void SetTonemapState(class ISceneView *, const class TonemapState_t  &); /* linkage=_ZN10ISceneView15SetTonemapStateERK14TonemapState_t */
	virtual void SetDefaultLayerObjectRequiredFlags(class ISceneView *, enum ESceneObjectFlags); /* linkage=_ZN10ISceneView34SetDefaultLayerObjectRequiredFlagsE17ESceneObjectFlags */
	virtual void SetDefaultLayerObjectExcludedFlags(class ISceneView *, enum ESceneObjectFlags); /* linkage=_ZN10ISceneView34SetDefaultLayerObjectExcludedFlagsE17ESceneObjectFlags */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView34GetDefaultLayerObjectRequiredFlagsEv */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView34GetDefaultLayerObjectExcludedFlagsEv */
	virtual class ISceneLayer * GetFinalOutputLayer(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetFinalOutputLayerEv */
	virtual void GetRenderTargetInfo(const class ISceneView  *, HSceneViewRenderTarget, class SceneViewRenderTargetInfo_t *); /* linkage=_ZNK10ISceneView19GetRenderTargetInfoEP24HSceneViewRenderTarget__P27SceneViewRenderTargetInfo_t */
	virtual class ISceneLayer * AddBlitTextureToTargetLayer(class ISceneView *, const char  *, HSceneViewRenderTarget, const class RenderViewport_t  &, const class RenderViewport_t  &, const class SceneLayerOutputs_t  &, class BlitSetup_t *); /* linkage=_ZN10ISceneView27AddBlitTextureToTargetLayerEPKcP24HSceneViewRenderTarget__RK16RenderViewport_tS6_RK19SceneLayerOutputs_tP11BlitSetup_t */
	virtual enum SceneViewFlags_t GetFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView8GetFlagsEv */
	virtual void MarkRenderTargetRead(class ISceneView *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView20MarkRenderTargetReadEP24HSceneViewRenderTarget__ */
	virtual HRenderTexture GetRenderTargetTexture(class ISceneView *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView22GetRenderTargetTextureEP24HSceneViewRenderTarget__ */
	virtual void SetUserClipPlane(class ISceneView *, int, const class VPlane  &); /* linkage=_ZN10ISceneView16SetUserClipPlaneEiRK6VPlane */
	virtual void ComputeScreenCorners(const class ISceneView  *, class Vector *); /* linkage=_ZNK10ISceneView20ComputeScreenCornersEP6Vector */
	virtual void ComputeEyeRays(const class ISceneView  *, class Vector *); /* linkage=_ZNK10ISceneView14ComputeEyeRaysEP6Vector */
	virtual bool GetShadowsEnabled(const class ISceneView  *); /* linkage=_ZNK10ISceneView17GetShadowsEnabledEv */
	virtual void SetShadowsEnabled(class ISceneView *, bool); /* linkage=_ZN10ISceneView17SetShadowsEnabledEb */
	virtual bool GetPostProcessEnabled(const class ISceneView  *); /* linkage=_ZNK10ISceneView21GetPostProcessEnabledEv */
	virtual void SetPostProcessEnabled(class ISceneView *, bool); /* linkage=_ZN10ISceneView21SetPostProcessEnabledEb */
	virtual class ISceneViewDebugOverlays * GetDebugOverlayList(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetDebugOverlayListEv */
	virtual const class CRenderAttributes  & GetRenderAttributes(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetRenderAttributesEv */
	virtual class CRenderAttributes & GetRenderAttributes(class ISceneView *); /* linkage=_ZN10ISceneView19GetRenderAttributesEv */
	virtual class CViewId GetViewId(const class ISceneView  *); /* linkage=_ZNK10ISceneView9GetViewIdEv */
	virtual void ComputeRenderTargetAllocations(class ISceneView *); /* linkage=_ZN10ISceneView30ComputeRenderTargetAllocationsEv */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(class ISceneView *, float); /* linkage=_ZN10ISceneView43SetBoundingVolumeSizeCullThresholdInPercentEf */
	virtual void SetDistanceScaleForLODAndCulling(class ISceneView *, float); /* linkage=_ZN10ISceneView32SetDistanceScaleForLODAndCullingEf */
	virtual float GetSquaredDistanceScaleForLODAndCulling(class ISceneView *); /* linkage=_ZN10ISceneView39GetSquaredDistanceScaleForLODAndCullingEv */
	virtual int GetPriority(class ISceneView *); /* linkage=_ZN10ISceneView11GetPriorityEv */
	virtual void SetPriority(class ISceneView *, int); /* linkage=_ZN10ISceneView11SetPriorityEi */
	virtual void SetParent(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView9SetParentEPS_ */
	virtual class ISceneView * GetParent(const class ISceneView  *); /* linkage=_ZNK10ISceneView9GetParentEv */
	virtual void CopyWorldsAndVisFrom(class ISceneView *, class ISceneView *, const class Vector  &, enum vis_type_t); /* linkage=_ZN10ISceneView20CopyWorldsAndVisFromEPS_RK6Vector10vis_type_t */
	virtual void CopyWorldsFrom(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView14CopyWorldsFromEPS_ */
	virtual void AddDependentView(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView16AddDependentViewEPS_ */
	virtual void AddAuxiliaryRenderCamera(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView24AddAuxiliaryRenderCameraERK8CFrustum */
	virtual const class CFrustum  * GetFirstAuxilaryRenderCamera(const class ISceneView  *); /* linkage=_ZNK10ISceneView28GetFirstAuxilaryRenderCameraEv */
	virtual void SetOverrideLODLevel(class ISceneView *, int); /* linkage=_ZN10ISceneView19SetOverrideLODLevelEi */
	virtual int GetOverrideLODLevel(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetOverrideLODLevelEv */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const class ISceneView  *, class ISceneLayer *); /* linkage=_ZNK10ISceneView51CopyRenderTargetOutputsAndViewportFromPreviousLayerEP11ISceneLayer */
	virtual void SetIssueSortIndex(class ISceneView *, int); /* linkage=_ZN10ISceneView17SetIssueSortIndexEi */
	virtual void RemoveCullBoxes(class ISceneView *); /* linkage=_ZN10ISceneView15RemoveCullBoxesEv */
	virtual const class CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >  & GetVolumetricFogVolumes(const class ISceneView  *); /* linkage=_ZNK10ISceneView23GetVolumetricFogVolumesEv */
	virtual void SetVolumeCuller(class ISceneView *, const class CVolumeCuller  &); /* linkage=_ZN10ISceneView15SetVolumeCullerERK13CVolumeCuller */
	virtual void CaptureRenderDocForView(class ISceneView *); /* linkage=_ZN10ISceneView23CaptureRenderDocForViewEv */
	void SetPreviousFrameFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView23SetPreviousFrameFrustumERK8CFrustum */
	const class CFrustum  & GetPreviousFrameFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView23GetPreviousFrameFrustumEv */
	int NumWorldsToRender(const class ISceneView  *); /* linkage=_ZNK10ISceneView17NumWorldsToRenderEv */
	class ISceneWorld * GetWorldToRender(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView16GetWorldToRenderEi */
	const class CPVSBits  * GetWorldToRenderVisInfo(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView23GetWorldToRenderVisInfoEi */
	void SetWorldToRenderVisInfo(class ISceneView *, int, const class CPVSBits  *); /* linkage=_ZN10ISceneView23SetWorldToRenderVisInfoEiPK8CPVSBits */
	const uint32  * GetWorldToRenderVisBits(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView23GetWorldToRenderVisBitsEi */
	bool WillRenderWorld(const class ISceneView  *, class ISceneWorld *); /* linkage=_ZNK10ISceneView15WillRenderWorldEP11ISceneWorld */
	int IndexOfWorldToRender(const class ISceneView  *, class ISceneWorld *); /* linkage=_ZNK10ISceneView20IndexOfWorldToRenderEP11ISceneWorld */
	class Vector GetCameraPosition(const class ISceneView  *); /* linkage=_ZNK10ISceneView17GetCameraPositionEv */
	void SetOverrideRenderTargetArrayIndex(class ISceneView *, int, int); /* linkage=_ZN10ISceneView33SetOverrideRenderTargetArrayIndexEii */
	int * GetOverrideRenderTargetArrayIndex(class ISceneView *); /* linkage=_ZN10ISceneView33GetOverrideRenderTargetArrayIndexEv */
	class CRenderAttributes * GetRenderAttributesPtr(class ISceneView *); /* linkage=_ZN10ISceneView22GetRenderAttributesPtrEv */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const class ISceneView  *); /* linkage=_ZNK10ISceneView13GetRenderTagsEv */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetExcludeTagsEv */
	virtual void SetRenderTags(class ISceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10ISceneView13SetRenderTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	virtual void SetExcludeTags(class ISceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10ISceneView14SetExcludeTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	void ISceneView(class ISceneView *, const class ISceneView  &); /* linkage=_ZN10ISceneViewC4ERKS_ */
	void ISceneView(class ISceneView *); /* linkage=_ZN10ISceneViewC4Ev */
} __attribute__((__aligned__(16)));

// <02D2ACF1> ../public/scenesystem/isceneview.h:188
// member functions: 214
// member variables: 10
// vtable entries: 81
// class size: 4,960
class ISceneView {
	/* ../public/scenesystem/isceneview.h:510 */
	struct WorldList_t {
		CSceneWorld * m_pWorld; /* 0 8 */
		const class CPVSBits * m_pVisInfo; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	void ISceneView(ISceneView* , const ISceneView& );
	void ISceneView(ISceneView* );
	int ()(void) * * _vptr.ISceneView; /* 0 8 */
	/* ../public/scenesystem/isceneview.h:191 */
	virtual const char* GetDebugName(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:193 */
	virtual ISceneLayer* AddRenderLayer(ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:194 */
	virtual ISceneLayer* AddProceduralLayer(ISceneView* , const char* , const RenderViewport_t& , IProceduralLayerRenderer* , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:195 */
	virtual ISceneLayer* AddClearLayer(ISceneView* , const char* , const RenderViewport_t& , int, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:197 */
	virtual ISceneLayer* AddManagedProceduralLayer(ISceneView* , const char* , const RenderViewport_t& , SboxProceduralLayerCallback, ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:200 */
	virtual ISceneLayer* AddLabelLayer(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:202 */
	virtual bool HasLabelLayer(ISceneView* , CUtlStringToken);
	/* ../public/scenesystem/isceneview.h:205 */
	virtual void MoveLayerToBeAfterLabel(ISceneView* , CUtlStringToken, ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:208 */
	virtual void MoveLayerToBeAfterLayer(ISceneView* , ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:216 */
	virtual void AddSemaphoreDependencyForLabelLayer(ISceneView* , CUtlStringToken, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:219 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(ISceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const RenderTargetDesc_t& , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:220 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(ISceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const SceneLayerOutputs_t& , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:221 */
	virtual ISceneLayer* AddSimpleQuadRendererLayer(ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , HMaterial, int, int, const RenderViewport_t& , const RenderViewport_t& );
	/* ../public/scenesystem/isceneview.h:224 */
	virtual ISceneLayer* AddResolveRenderTargetLayer(ISceneView* , const char* , const RenderViewport_t& , int, int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:225 */
	virtual ISceneLayer* AddResolveDepthStencilLayer(ISceneView* , const char* , const RenderViewport_t& , int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:228 */
	virtual void AddWorldToRenderList(ISceneView* , ISceneWorld* , const CPVSBits* , bool);
	/* ../public/scenesystem/isceneview.h:231 */
	virtual void SetUserDataPtr(ISceneView* , void* );
	/* ../public/scenesystem/isceneview.h:232 */
	virtual void* GetUserDataPtr(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:234 */
	const CFrustum& GetFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:235 */
	const CFrustum& GetCullFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:236 */
	const RenderViewport_t& GetMainViewport(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:237 */
	void SetFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:238 */
	void SetCullFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:239 */
	void SetMainViewport(ISceneView* , const RenderViewport_t& );
	/* ../public/scenesystem/isceneview.h:546 */
	uint32 CalculateSortKey(const ISceneView* , const Vector& , bool, float);
	/* ../public/scenesystem/isceneview.h:561 */
	uint32 CalculateSortKey(const ISceneView* , const Vector& , const Vector& , bool, float);
	/* ../public/scenesystem/isceneview.h:246 */
	uint32 CalculateSortKey(const ISceneView* , const AABB_t& , bool, float);
	/* ../public/scenesystem/isceneview.h:252 */
	virtual void SetNextPtr(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:253 */
	virtual ISceneView* GetNextPtr(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:255 */
	virtual SwapChainHandle_t GetSwapChain(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:257 */
	virtual void ~ISceneView(ISceneView* );
	/* ../public/scenesystem/isceneview.h:263 */
	virtual ISceneLayer* AddDebugInfoLayer(ISceneView* , const char* , const RenderViewport_t& , uint);
	/* ../public/scenesystem/isceneview.h:266 */
	virtual void PushNamedRenderTargetScope(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:267 */
	virtual void PopNamedRenderTargetScope(ISceneView* );
	/* ../public/scenesystem/isceneview.h:276 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , HRenderTexture, SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:283 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , SwapChainHandle_t, SwapChainBuffer_t, SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:290 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , const SceneViewRenderTargetInfo_t& , SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:297 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , const char* );
	/* ../public/scenesystem/isceneview.h:298 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:308 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t);
	/* ../public/scenesystem/isceneview.h:311 */
	virtual HSceneViewRenderTarget FindRenderTarget(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:316 */
	virtual void AddFlags(ISceneView* , SceneViewFlags_t);
	/* ../public/scenesystem/isceneview.h:319 */
	virtual void RemoveFlags(ISceneView* , SceneViewFlags_t);
	/* ../public/scenesystem/isceneview.h:322 */
	virtual const TonemapState_t& GetTonemapState(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:323 */
	virtual void SetTonemapState(ISceneView* , const TonemapState_t& );
	/* ../public/scenesystem/isceneview.h:326 */
	virtual void SetDefaultLayerObjectRequiredFlags(ISceneView* , ESceneObjectFlags);
	/* ../public/scenesystem/isceneview.h:327 */
	virtual void SetDefaultLayerObjectExcludedFlags(ISceneView* , ESceneObjectFlags);
	/* ../public/scenesystem/isceneview.h:330 */
	virtual ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:331 */
	virtual ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:334 */
	virtual ISceneLayer* GetFinalOutputLayer(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:337 */
	virtual void GetRenderTargetInfo(const ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetInfo_t* );
	/* ../public/scenesystem/isceneview.h:340 */
	virtual ISceneLayer* AddBlitTextureToTargetLayer(ISceneView* , const char* , HSceneViewRenderTarget, const RenderViewport_t& , const RenderViewport_t& , const SceneLayerOutputs_t& , BlitSetup_t* );
	/* ../public/scenesystem/isceneview.h:343 */
	virtual SceneViewFlags_t GetFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:349 */
	virtual void MarkRenderTargetRead(ISceneView* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:353 */
	virtual HRenderTexture GetRenderTargetTexture(ISceneView* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:356 */
	virtual void SetUserClipPlane(ISceneView* , int, const VPlane& );
	/* ../public/scenesystem/isceneview.h:362 */
	virtual void ComputeScreenCorners(const ISceneView* , Vector* );
	/* ../public/scenesystem/isceneview.h:364 */
	virtual void ComputeEyeRays(const ISceneView* , Vector* );
	/* ../public/scenesystem/isceneview.h:368 */
	virtual bool GetShadowsEnabled(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:369 */
	virtual void SetShadowsEnabled(ISceneView* , bool);
	/* ../public/scenesystem/isceneview.h:371 */
	virtual bool GetPostProcessEnabled(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:372 */
	virtual void SetPostProcessEnabled(ISceneView* , bool);
	/* ../public/scenesystem/isceneview.h:374 */
	virtual ISceneViewDebugOverlays* GetDebugOverlayList(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:376 */
	virtual const CRenderAttributes& GetRenderAttributes(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:377 */
	virtual CRenderAttributes& GetRenderAttributes(ISceneView* );
	/* ../public/scenesystem/isceneview.h:380 */
	virtual CViewId GetViewId(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:383 */
	virtual void ComputeRenderTargetAllocations(ISceneView* );
	/* ../public/scenesystem/isceneview.h:387 */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(ISceneView* , float);
	/* ../public/scenesystem/isceneview.h:391 */
	virtual void SetDistanceScaleForLODAndCulling(ISceneView* , float);
	/* ../public/scenesystem/isceneview.h:394 */
	virtual float GetSquaredDistanceScaleForLODAndCulling(ISceneView* );
	/* ../public/scenesystem/isceneview.h:396 */
	virtual int GetPriority(ISceneView* );
	/* ../public/scenesystem/isceneview.h:397 */
	virtual void SetPriority(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:400 */
	virtual void SetParent(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:401 */
	virtual ISceneView* GetParent(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:404 */
	virtual void CopyWorldsAndVisFrom(ISceneView* , ISceneView* , const Vector& , vis_type_t);
	/* ../public/scenesystem/isceneview.h:405 */
	virtual void CopyWorldsFrom(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:408 */
	virtual void AddDependentView(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:414 */
	virtual void AddAuxiliaryRenderCamera(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:415 */
	virtual const CFrustum* GetFirstAuxilaryRenderCamera(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:418 */
	virtual void SetOverrideLODLevel(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:419 */
	virtual int GetOverrideLODLevel(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:425 */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const ISceneView* , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:428 */
	virtual void SetIssueSortIndex(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:431 */
	virtual void RemoveCullBoxes(ISceneView* );
	/* ../public/scenesystem/isceneview.h:433 */
	virtual const CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >& GetVolumetricFogVolumes(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:436 */
	virtual void SetVolumeCuller(ISceneView* , const CVolumeCuller& );
	/* ../public/scenesystem/isceneview.h:440 */
	virtual void CaptureRenderDocForView(ISceneView* );
	/* ../public/scenesystem/isceneview.h:442 */
	void SetPreviousFrameFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:443 */
	const CFrustum& GetPreviousFrameFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:446 */
	int NumWorldsToRender(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:449 */
	ISceneWorld* GetWorldToRender(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:450 */
	const CPVSBits* GetWorldToRenderVisInfo(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:451 */
	void SetWorldToRenderVisInfo(ISceneView* , int, const CPVSBits* );
	/* ../public/scenesystem/isceneview.h:454 */
	const uint32* GetWorldToRenderVisBits(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:460 */
	bool WillRenderWorld(const ISceneView* , ISceneWorld* );
	/* ../public/scenesystem/isceneview.h:471 */
	int IndexOfWorldToRender(const ISceneView* , ISceneWorld* );
	/* ../public/scenesystem/isceneview.h:495 */
	Vector GetCameraPosition(const ISceneView* );
private:
	CFrustum m_frustum __attribute__((__aligned__(16))); /* 16 1136 */
	CFrustum m_cullFrustum __attribute__((__aligned__(16))); /* 1152 1136 */
	CFrustum m_prevFrameFrustum __attribute__((__aligned__(16))); /* 2288 1136 */
	RenderViewport_t m_mainViewport; /* 3424 28 */
protected:
	CUtlVectorFixedGrowable<ISceneView::WorldList_t, 16> m_pWorldsToRender __attribute__((__aligned__(8))); /* 3456 288 */
	int m_nOverrideRTArrayIndex[2]; /* 3744 8 */
	/* ../public/scenesystem/isceneview.h:522 */
	void SetOverrideRenderTargetArrayIndex(ISceneView* , int, int);
	/* ../public/scenesystem/isceneview.h:527 */
	int* GetOverrideRenderTargetArrayIndex(ISceneView* );
	/* ../public/scenesystem/isceneview.h:529 */
	CRenderAttributes* GetRenderAttributesPtr(ISceneView* );
	/* ../public/scenesystem/isceneview.h:534 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:535 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:537 */
	virtual void SetRenderTags(ISceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../public/scenesystem/isceneview.h:538 */
	virtual void SetExcludeTags(ISceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	int m_ViewUniqueId; /* 3752 4 */
	int m_ManagedCameraId; /* 3756 4 */
	SceneVieweSettings Settings __attribute__((__aligned__(16))); /* 3760 1200 */
	/* ../public/scenesystem/isceneview.h:482 */
	void ForEachWorldToRender<CSceneSystem::FinishRenderingViews(float)::<lambda(ISceneWorld*)> >(const ISceneView* , );
	/* ../public/scenesystem/isceneview.h:482 */
	void ForEachWorldToRender<CSceneSystem::AddWorldsInViewToToListOfWorldsVisitedThisFrame(const ISceneView*)::<lambda(ISceneWorld*)> >(const ISceneView* , );
	virtual const char  * GetDebugName(const class ISceneView  *); /* linkage=_ZNK10ISceneView12GetDebugNameEv */
	virtual class ISceneLayer * AddRenderLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, class ISceneLayer *); /* linkage=_ZN10ISceneView14AddRenderLayerEPKcRK16RenderViewport_tRK15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneLayer * AddProceduralLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, class IProceduralLayerRenderer *, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView18AddProceduralLayerEPKcRK16RenderViewport_tP24IProceduralLayerRendererP11ISceneLayerb */
	virtual class ISceneLayer * AddClearLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, class ISceneLayer *); /* linkage=_ZN10ISceneView13AddClearLayerEPKcRK16RenderViewport_tiP11ISceneLayer */
	virtual class ISceneLayer * AddManagedProceduralLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, SboxProceduralLayerCallback, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView25AddManagedProceduralLayerEPKcRK16RenderViewport_t12CUtlDelegateIFv20ManagedRenderSetup_tEEP11ISceneLayerb */
	virtual class ISceneLayer * AddLabelLayer(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView13AddLabelLayerEPKc */
	virtual bool HasLabelLayer(class ISceneView *, class CUtlStringToken); /* linkage=_ZN10ISceneView13HasLabelLayerE15CUtlStringToken */
	virtual void MoveLayerToBeAfterLabel(class ISceneView *, class CUtlStringToken, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView23MoveLayerToBeAfterLabelE15CUtlStringTokenP11ISceneLayerb */
	virtual void MoveLayerToBeAfterLayer(class ISceneView *, class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN10ISceneView23MoveLayerToBeAfterLayerEP11ISceneLayerS1_ */
	virtual void AddSemaphoreDependencyForLabelLayer(class ISceneView *, class CUtlStringToken, class ISceneLayer *); /* linkage=_ZN10ISceneView35AddSemaphoreDependencyForLabelLayerE15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class RenderTargetDesc_t  &, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK18RenderTargetDesc_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class SceneLayerOutputs_t  &, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK19SceneLayerOutputs_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimpleQuadRendererLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, HMaterial, int, int, const class RenderViewport_t  &, const class RenderViewport_t  &); /* linkage=_ZN10ISceneView26AddSimpleQuadRendererLayerEPKcRK16RenderViewport_tRK15CUtlStringToken11CWeakHandleI29InfoForResourceTypeIMaterial2EiiS4_S4_ */
	virtual class ISceneLayer * AddResolveRenderTargetLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10ISceneView27AddResolveRenderTargetLayerEPKcRK16RenderViewport_tiiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual class ISceneLayer * AddResolveDepthStencilLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10ISceneView27AddResolveDepthStencilLayerEPKcRK16RenderViewport_tiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual void AddWorldToRenderList(class ISceneView *, class ISceneWorld *, const class CPVSBits  *, bool); /* linkage=_ZN10ISceneView20AddWorldToRenderListEP11ISceneWorldPK8CPVSBitsb */
	virtual void SetUserDataPtr(class ISceneView *, void *); /* linkage=_ZN10ISceneView14SetUserDataPtrEPv */
	virtual void * GetUserDataPtr(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetUserDataPtrEv */
	const class CFrustum  & GetFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView10GetFrustumEv */
	const class CFrustum  & GetCullFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetCullFrustumEv */
	const class RenderViewport_t  & GetMainViewport(const class ISceneView  *); /* linkage=_ZNK10ISceneView15GetMainViewportEv */
	void SetFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView10SetFrustumERK8CFrustum */
	void SetCullFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView14SetCullFrustumERK8CFrustum */
	void SetMainViewport(class ISceneView *, const class RenderViewport_t  &); /* linkage=_ZN10ISceneView15SetMainViewportERK16RenderViewport_t */
	uint32 CalculateSortKey(const class ISceneView  *, const class Vector  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6Vectorbf */
	uint32 CalculateSortKey(const class ISceneView  *, const class Vector  &, const class Vector  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6VectorS2_bf */
	uint32 CalculateSortKey(const class ISceneView  *, const class AABB_t  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6AABB_tbf */
	virtual void SetNextPtr(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView10SetNextPtrEPS_ */
	virtual class ISceneView * GetNextPtr(const class ISceneView  *); /* linkage=_ZNK10ISceneView10GetNextPtrEv */
	virtual SwapChainHandle_t GetSwapChain(const class ISceneView  *); /* linkage=_ZNK10ISceneView12GetSwapChainEv */
	virtual void ~ISceneView(class ISceneView *); /* linkage=_ZN10ISceneViewD4Ev */
	virtual class ISceneLayer * AddDebugInfoLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, uint); /* linkage=_ZN10ISceneView17AddDebugInfoLayerEPKcRK16RenderViewport_tj */
	virtual void PushNamedRenderTargetScope(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView26PushNamedRenderTargetScopeEPKc */
	virtual void PopNamedRenderTargetScope(class ISceneView *); /* linkage=_ZN10ISceneView25PopNamedRenderTargetScopeEv */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, HRenderTexture, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseEj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, SwapChainHandle_t, enum SwapChainBuffer_t, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcP19SwapChainHandle_t__17SwapChainBuffer_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, const class SceneViewRenderTargetInfo_t  &, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcRK27SceneViewRenderTargetInfo_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, const char  *); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcS1_ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcP24HSceneViewRenderTarget__ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, class ISceneView *, HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcPS_P24HSceneViewRenderTarget__j */
	virtual HSceneViewRenderTarget FindRenderTarget(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView16FindRenderTargetEPKc */
	virtual void AddFlags(class ISceneView *, enum SceneViewFlags_t); /* linkage=_ZN10ISceneView8AddFlagsE16SceneViewFlags_t */
	virtual void RemoveFlags(class ISceneView *, enum SceneViewFlags_t); /* linkage=_ZN10ISceneView11RemoveFlagsE16SceneViewFlags_t */
	virtual const class TonemapState_t  & GetTonemapState(const class ISceneView  *); /* linkage=_ZNK10ISceneView15GetTonemapStateEv */
	virtual void SetTonemapState(class ISceneView *, const class TonemapState_t  &); /* linkage=_ZN10ISceneView15SetTonemapStateERK14TonemapState_t */
	virtual void SetDefaultLayerObjectRequiredFlags(class ISceneView *, enum ESceneObjectFlags); /* linkage=_ZN10ISceneView34SetDefaultLayerObjectRequiredFlagsE17ESceneObjectFlags */
	virtual void SetDefaultLayerObjectExcludedFlags(class ISceneView *, enum ESceneObjectFlags); /* linkage=_ZN10ISceneView34SetDefaultLayerObjectExcludedFlagsE17ESceneObjectFlags */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView34GetDefaultLayerObjectRequiredFlagsEv */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView34GetDefaultLayerObjectExcludedFlagsEv */
	virtual class ISceneLayer * GetFinalOutputLayer(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetFinalOutputLayerEv */
	virtual void GetRenderTargetInfo(const class ISceneView  *, HSceneViewRenderTarget, class SceneViewRenderTargetInfo_t *); /* linkage=_ZNK10ISceneView19GetRenderTargetInfoEP24HSceneViewRenderTarget__P27SceneViewRenderTargetInfo_t */
	virtual class ISceneLayer * AddBlitTextureToTargetLayer(class ISceneView *, const char  *, HSceneViewRenderTarget, const class RenderViewport_t  &, const class RenderViewport_t  &, const class SceneLayerOutputs_t  &, class BlitSetup_t *); /* linkage=_ZN10ISceneView27AddBlitTextureToTargetLayerEPKcP24HSceneViewRenderTarget__RK16RenderViewport_tS6_RK19SceneLayerOutputs_tP11BlitSetup_t */
	virtual enum SceneViewFlags_t GetFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView8GetFlagsEv */
	virtual void MarkRenderTargetRead(class ISceneView *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView20MarkRenderTargetReadEP24HSceneViewRenderTarget__ */
	virtual HRenderTexture GetRenderTargetTexture(class ISceneView *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView22GetRenderTargetTextureEP24HSceneViewRenderTarget__ */
	virtual void SetUserClipPlane(class ISceneView *, int, const class VPlane  &); /* linkage=_ZN10ISceneView16SetUserClipPlaneEiRK6VPlane */
	virtual void ComputeScreenCorners(const class ISceneView  *, class Vector *); /* linkage=_ZNK10ISceneView20ComputeScreenCornersEP6Vector */
	virtual void ComputeEyeRays(const class ISceneView  *, class Vector *); /* linkage=_ZNK10ISceneView14ComputeEyeRaysEP6Vector */
	virtual bool GetShadowsEnabled(const class ISceneView  *); /* linkage=_ZNK10ISceneView17GetShadowsEnabledEv */
	virtual void SetShadowsEnabled(class ISceneView *, bool); /* linkage=_ZN10ISceneView17SetShadowsEnabledEb */
	virtual bool GetPostProcessEnabled(const class ISceneView  *); /* linkage=_ZNK10ISceneView21GetPostProcessEnabledEv */
	virtual void SetPostProcessEnabled(class ISceneView *, bool); /* linkage=_ZN10ISceneView21SetPostProcessEnabledEb */
	virtual class ISceneViewDebugOverlays * GetDebugOverlayList(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetDebugOverlayListEv */
	virtual const class CRenderAttributes  & GetRenderAttributes(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetRenderAttributesEv */
	virtual class CRenderAttributes & GetRenderAttributes(class ISceneView *); /* linkage=_ZN10ISceneView19GetRenderAttributesEv */
	virtual class CViewId GetViewId(const class ISceneView  *); /* linkage=_ZNK10ISceneView9GetViewIdEv */
	virtual void ComputeRenderTargetAllocations(class ISceneView *); /* linkage=_ZN10ISceneView30ComputeRenderTargetAllocationsEv */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(class ISceneView *, float); /* linkage=_ZN10ISceneView43SetBoundingVolumeSizeCullThresholdInPercentEf */
	virtual void SetDistanceScaleForLODAndCulling(class ISceneView *, float); /* linkage=_ZN10ISceneView32SetDistanceScaleForLODAndCullingEf */
	virtual float GetSquaredDistanceScaleForLODAndCulling(class ISceneView *); /* linkage=_ZN10ISceneView39GetSquaredDistanceScaleForLODAndCullingEv */
	virtual int GetPriority(class ISceneView *); /* linkage=_ZN10ISceneView11GetPriorityEv */
	virtual void SetPriority(class ISceneView *, int); /* linkage=_ZN10ISceneView11SetPriorityEi */
	virtual void SetParent(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView9SetParentEPS_ */
	virtual class ISceneView * GetParent(const class ISceneView  *); /* linkage=_ZNK10ISceneView9GetParentEv */
	virtual void CopyWorldsAndVisFrom(class ISceneView *, class ISceneView *, const class Vector  &, enum vis_type_t); /* linkage=_ZN10ISceneView20CopyWorldsAndVisFromEPS_RK6Vector10vis_type_t */
	virtual void CopyWorldsFrom(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView14CopyWorldsFromEPS_ */
	virtual void AddDependentView(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView16AddDependentViewEPS_ */
	virtual void AddAuxiliaryRenderCamera(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView24AddAuxiliaryRenderCameraERK8CFrustum */
	virtual const class CFrustum  * GetFirstAuxilaryRenderCamera(const class ISceneView  *); /* linkage=_ZNK10ISceneView28GetFirstAuxilaryRenderCameraEv */
	virtual void SetOverrideLODLevel(class ISceneView *, int); /* linkage=_ZN10ISceneView19SetOverrideLODLevelEi */
	virtual int GetOverrideLODLevel(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetOverrideLODLevelEv */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const class ISceneView  *, class ISceneLayer *); /* linkage=_ZNK10ISceneView51CopyRenderTargetOutputsAndViewportFromPreviousLayerEP11ISceneLayer */
	virtual void SetIssueSortIndex(class ISceneView *, int); /* linkage=_ZN10ISceneView17SetIssueSortIndexEi */
	virtual void RemoveCullBoxes(class ISceneView *); /* linkage=_ZN10ISceneView15RemoveCullBoxesEv */
	virtual const class CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >  & GetVolumetricFogVolumes(const class ISceneView  *); /* linkage=_ZNK10ISceneView23GetVolumetricFogVolumesEv */
	virtual void SetVolumeCuller(class ISceneView *, const class CVolumeCuller  &); /* linkage=_ZN10ISceneView15SetVolumeCullerERK13CVolumeCuller */
	virtual void CaptureRenderDocForView(class ISceneView *); /* linkage=_ZN10ISceneView23CaptureRenderDocForViewEv */
	void SetPreviousFrameFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView23SetPreviousFrameFrustumERK8CFrustum */
	const class CFrustum  & GetPreviousFrameFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView23GetPreviousFrameFrustumEv */
	int NumWorldsToRender(const class ISceneView  *); /* linkage=_ZNK10ISceneView17NumWorldsToRenderEv */
	class ISceneWorld * GetWorldToRender(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView16GetWorldToRenderEi */
	const class CPVSBits  * GetWorldToRenderVisInfo(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView23GetWorldToRenderVisInfoEi */
	void SetWorldToRenderVisInfo(class ISceneView *, int, const class CPVSBits  *); /* linkage=_ZN10ISceneView23SetWorldToRenderVisInfoEiPK8CPVSBits */
	const uint32  * GetWorldToRenderVisBits(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView23GetWorldToRenderVisBitsEi */
	bool WillRenderWorld(const class ISceneView  *, class ISceneWorld *); /* linkage=_ZNK10ISceneView15WillRenderWorldEP11ISceneWorld */
	int IndexOfWorldToRender(const class ISceneView  *, class ISceneWorld *); /* linkage=_ZNK10ISceneView20IndexOfWorldToRenderEP11ISceneWorld */
	class Vector GetCameraPosition(const class ISceneView  *); /* linkage=_ZNK10ISceneView17GetCameraPositionEv */
	void SetOverrideRenderTargetArrayIndex(class ISceneView *, int, int); /* linkage=_ZN10ISceneView33SetOverrideRenderTargetArrayIndexEii */
	int * GetOverrideRenderTargetArrayIndex(class ISceneView *); /* linkage=_ZN10ISceneView33GetOverrideRenderTargetArrayIndexEv */
	class CRenderAttributes * GetRenderAttributesPtr(class ISceneView *); /* linkage=_ZN10ISceneView22GetRenderAttributesPtrEv */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const class ISceneView  *); /* linkage=_ZNK10ISceneView13GetRenderTagsEv */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetExcludeTagsEv */
	virtual void SetRenderTags(class ISceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10ISceneView13SetRenderTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	virtual void SetExcludeTags(class ISceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10ISceneView14SetExcludeTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	void ISceneView(class ISceneView *, const class ISceneView  &); /* linkage=_ZN10ISceneViewC4ERKS_ */
	void ISceneView(class ISceneView *); /* linkage=_ZN10ISceneViewC4Ev */
} __attribute__((__aligned__(16)));

// <031B1BBB> ../public/scenesystem/isceneview.h:188
// member functions: 212
// member variables: 10
// vtable entries: 81
// class size: 4,960
class ISceneView {
	/* ../public/scenesystem/isceneview.h:510 */
	struct WorldList_t {
		CSceneWorld * m_pWorld; /* 0 8 */
		const class CPVSBits * m_pVisInfo; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	void ISceneView(ISceneView* , const ISceneView& );
	void ISceneView(ISceneView* );
	int ()(void) * * _vptr.ISceneView; /* 0 8 */
	/* ../public/scenesystem/isceneview.h:191 */
	virtual const char* GetDebugName(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:193 */
	virtual ISceneLayer* AddRenderLayer(ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:194 */
	virtual ISceneLayer* AddProceduralLayer(ISceneView* , const char* , const RenderViewport_t& , IProceduralLayerRenderer* , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:195 */
	virtual ISceneLayer* AddClearLayer(ISceneView* , const char* , const RenderViewport_t& , int, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:197 */
	virtual ISceneLayer* AddManagedProceduralLayer(ISceneView* , const char* , const RenderViewport_t& , SboxProceduralLayerCallback, ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:200 */
	virtual ISceneLayer* AddLabelLayer(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:202 */
	virtual bool HasLabelLayer(ISceneView* , CUtlStringToken);
	/* ../public/scenesystem/isceneview.h:205 */
	virtual void MoveLayerToBeAfterLabel(ISceneView* , CUtlStringToken, ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:208 */
	virtual void MoveLayerToBeAfterLayer(ISceneView* , ISceneLayer* , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:216 */
	virtual void AddSemaphoreDependencyForLabelLayer(ISceneView* , CUtlStringToken, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:219 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(ISceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const RenderTargetDesc_t& , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:220 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(ISceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const SceneLayerOutputs_t& , ISceneLayer* , bool);
	/* ../public/scenesystem/isceneview.h:221 */
	virtual ISceneLayer* AddSimpleQuadRendererLayer(ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , HMaterial, int, int, const RenderViewport_t& , const RenderViewport_t& );
	/* ../public/scenesystem/isceneview.h:224 */
	virtual ISceneLayer* AddResolveRenderTargetLayer(ISceneView* , const char* , const RenderViewport_t& , int, int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:225 */
	virtual ISceneLayer* AddResolveDepthStencilLayer(ISceneView* , const char* , const RenderViewport_t& , int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:228 */
	virtual void AddWorldToRenderList(ISceneView* , ISceneWorld* , const CPVSBits* , bool);
	/* ../public/scenesystem/isceneview.h:231 */
	virtual void SetUserDataPtr(ISceneView* , void* );
	/* ../public/scenesystem/isceneview.h:232 */
	virtual void* GetUserDataPtr(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:234 */
	const CFrustum& GetFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:235 */
	const CFrustum& GetCullFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:236 */
	const RenderViewport_t& GetMainViewport(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:237 */
	void SetFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:238 */
	void SetCullFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:239 */
	void SetMainViewport(ISceneView* , const RenderViewport_t& );
	/* ../public/scenesystem/isceneview.h:546 */
	uint32 CalculateSortKey(const ISceneView* , const Vector& , bool, float);
	/* ../public/scenesystem/isceneview.h:561 */
	uint32 CalculateSortKey(const ISceneView* , const Vector& , const Vector& , bool, float);
	/* ../public/scenesystem/isceneview.h:246 */
	uint32 CalculateSortKey(const ISceneView* , const AABB_t& , bool, float);
	/* ../public/scenesystem/isceneview.h:252 */
	virtual void SetNextPtr(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:253 */
	virtual ISceneView* GetNextPtr(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:255 */
	virtual SwapChainHandle_t GetSwapChain(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:257 */
	virtual void ~ISceneView(ISceneView* );
	/* ../public/scenesystem/isceneview.h:263 */
	virtual ISceneLayer* AddDebugInfoLayer(ISceneView* , const char* , const RenderViewport_t& , uint);
	/* ../public/scenesystem/isceneview.h:266 */
	virtual void PushNamedRenderTargetScope(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:267 */
	virtual void PopNamedRenderTargetScope(ISceneView* );
	/* ../public/scenesystem/isceneview.h:276 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , HRenderTexture, SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:283 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , SwapChainHandle_t, SwapChainBuffer_t, SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:290 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , const SceneViewRenderTargetInfo_t& , SceneViewRenderTargetFlags_t);
	/* ../public/scenesystem/isceneview.h:297 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , const char* );
	/* ../public/scenesystem/isceneview.h:298 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:308 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t);
	/* ../public/scenesystem/isceneview.h:311 */
	virtual HSceneViewRenderTarget FindRenderTarget(ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:316 */
	virtual void AddFlags(ISceneView* , SceneViewFlags_t);
	/* ../public/scenesystem/isceneview.h:319 */
	virtual void RemoveFlags(ISceneView* , SceneViewFlags_t);
	/* ../public/scenesystem/isceneview.h:322 */
	virtual const TonemapState_t& GetTonemapState(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:323 */
	virtual void SetTonemapState(ISceneView* , const TonemapState_t& );
	/* ../public/scenesystem/isceneview.h:326 */
	virtual void SetDefaultLayerObjectRequiredFlags(ISceneView* , ESceneObjectFlags);
	/* ../public/scenesystem/isceneview.h:327 */
	virtual void SetDefaultLayerObjectExcludedFlags(ISceneView* , ESceneObjectFlags);
	/* ../public/scenesystem/isceneview.h:330 */
	virtual ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:331 */
	virtual ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:334 */
	virtual ISceneLayer* GetFinalOutputLayer(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:337 */
	virtual void GetRenderTargetInfo(const ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetInfo_t* );
	/* ../public/scenesystem/isceneview.h:340 */
	virtual ISceneLayer* AddBlitTextureToTargetLayer(ISceneView* , const char* , HSceneViewRenderTarget, const RenderViewport_t& , const RenderViewport_t& , const SceneLayerOutputs_t& , BlitSetup_t* );
	/* ../public/scenesystem/isceneview.h:343 */
	virtual SceneViewFlags_t GetFlags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:349 */
	virtual void MarkRenderTargetRead(ISceneView* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:353 */
	virtual HRenderTexture GetRenderTargetTexture(ISceneView* , HSceneViewRenderTarget);
	/* ../public/scenesystem/isceneview.h:356 */
	virtual void SetUserClipPlane(ISceneView* , int, const VPlane& );
	/* ../public/scenesystem/isceneview.h:362 */
	virtual void ComputeScreenCorners(const ISceneView* , Vector* );
	/* ../public/scenesystem/isceneview.h:364 */
	virtual void ComputeEyeRays(const ISceneView* , Vector* );
	/* ../public/scenesystem/isceneview.h:368 */
	virtual bool GetShadowsEnabled(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:369 */
	virtual void SetShadowsEnabled(ISceneView* , bool);
	/* ../public/scenesystem/isceneview.h:371 */
	virtual bool GetPostProcessEnabled(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:372 */
	virtual void SetPostProcessEnabled(ISceneView* , bool);
	/* ../public/scenesystem/isceneview.h:374 */
	virtual ISceneViewDebugOverlays* GetDebugOverlayList(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:376 */
	virtual const CRenderAttributes& GetRenderAttributes(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:377 */
	virtual CRenderAttributes& GetRenderAttributes(ISceneView* );
	/* ../public/scenesystem/isceneview.h:380 */
	virtual CViewId GetViewId(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:383 */
	virtual void ComputeRenderTargetAllocations(ISceneView* );
	/* ../public/scenesystem/isceneview.h:387 */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(ISceneView* , float);
	/* ../public/scenesystem/isceneview.h:391 */
	virtual void SetDistanceScaleForLODAndCulling(ISceneView* , float);
	/* ../public/scenesystem/isceneview.h:394 */
	virtual float GetSquaredDistanceScaleForLODAndCulling(ISceneView* );
	/* ../public/scenesystem/isceneview.h:396 */
	virtual int GetPriority(ISceneView* );
	/* ../public/scenesystem/isceneview.h:397 */
	virtual void SetPriority(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:400 */
	virtual void SetParent(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:401 */
	virtual ISceneView* GetParent(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:404 */
	virtual void CopyWorldsAndVisFrom(ISceneView* , ISceneView* , const Vector& , vis_type_t);
	/* ../public/scenesystem/isceneview.h:405 */
	virtual void CopyWorldsFrom(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:408 */
	virtual void AddDependentView(ISceneView* , ISceneView* );
	/* ../public/scenesystem/isceneview.h:414 */
	virtual void AddAuxiliaryRenderCamera(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:415 */
	virtual const CFrustum* GetFirstAuxilaryRenderCamera(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:418 */
	virtual void SetOverrideLODLevel(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:419 */
	virtual int GetOverrideLODLevel(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:425 */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const ISceneView* , ISceneLayer* );
	/* ../public/scenesystem/isceneview.h:428 */
	virtual void SetIssueSortIndex(ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:431 */
	virtual void RemoveCullBoxes(ISceneView* );
	/* ../public/scenesystem/isceneview.h:433 */
	virtual const CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >& GetVolumetricFogVolumes(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:436 */
	virtual void SetVolumeCuller(ISceneView* , const CVolumeCuller& );
	/* ../public/scenesystem/isceneview.h:440 */
	virtual void CaptureRenderDocForView(ISceneView* );
	/* ../public/scenesystem/isceneview.h:442 */
	void SetPreviousFrameFrustum(ISceneView* , const CFrustum& );
	/* ../public/scenesystem/isceneview.h:443 */
	const CFrustum& GetPreviousFrameFrustum(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:446 */
	int NumWorldsToRender(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:449 */
	ISceneWorld* GetWorldToRender(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:450 */
	const CPVSBits* GetWorldToRenderVisInfo(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:451 */
	void SetWorldToRenderVisInfo(ISceneView* , int, const CPVSBits* );
	/* ../public/scenesystem/isceneview.h:454 */
	const uint32* GetWorldToRenderVisBits(const ISceneView* , int);
	/* ../public/scenesystem/isceneview.h:460 */
	bool WillRenderWorld(const ISceneView* , ISceneWorld* );
	/* ../public/scenesystem/isceneview.h:471 */
	int IndexOfWorldToRender(const ISceneView* , ISceneWorld* );
	/* ../public/scenesystem/isceneview.h:495 */
	Vector GetCameraPosition(const ISceneView* );
private:
	CFrustum m_frustum __attribute__((__aligned__(16))); /* 16 1136 */
	CFrustum m_cullFrustum __attribute__((__aligned__(16))); /* 1152 1136 */
	CFrustum m_prevFrameFrustum __attribute__((__aligned__(16))); /* 2288 1136 */
	RenderViewport_t m_mainViewport; /* 3424 28 */
protected:
	CUtlVectorFixedGrowable<ISceneView::WorldList_t, 16> m_pWorldsToRender __attribute__((__aligned__(8))); /* 3456 288 */
	int m_nOverrideRTArrayIndex[2]; /* 3744 8 */
	/* ../public/scenesystem/isceneview.h:522 */
	void SetOverrideRenderTargetArrayIndex(ISceneView* , int, int);
	/* ../public/scenesystem/isceneview.h:527 */
	int* GetOverrideRenderTargetArrayIndex(ISceneView* );
	/* ../public/scenesystem/isceneview.h:529 */
	CRenderAttributes* GetRenderAttributesPtr(ISceneView* );
	/* ../public/scenesystem/isceneview.h:534 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:535 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const ISceneView* );
	/* ../public/scenesystem/isceneview.h:537 */
	virtual void SetRenderTags(ISceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../public/scenesystem/isceneview.h:538 */
	virtual void SetExcludeTags(ISceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	int m_ViewUniqueId; /* 3752 4 */
	int m_ManagedCameraId; /* 3756 4 */
	SceneVieweSettings Settings __attribute__((__aligned__(16))); /* 3760 1200 */
	virtual const char  * GetDebugName(const class ISceneView  *); /* linkage=_ZNK10ISceneView12GetDebugNameEv */
	virtual class ISceneLayer * AddRenderLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, class ISceneLayer *); /* linkage=_ZN10ISceneView14AddRenderLayerEPKcRK16RenderViewport_tRK15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneLayer * AddProceduralLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, class IProceduralLayerRenderer *, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView18AddProceduralLayerEPKcRK16RenderViewport_tP24IProceduralLayerRendererP11ISceneLayerb */
	virtual class ISceneLayer * AddClearLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, class ISceneLayer *); /* linkage=_ZN10ISceneView13AddClearLayerEPKcRK16RenderViewport_tiP11ISceneLayer */
	virtual class ISceneLayer * AddManagedProceduralLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, SboxProceduralLayerCallback, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView25AddManagedProceduralLayerEPKcRK16RenderViewport_t12CUtlDelegateIFv20ManagedRenderSetup_tEEP11ISceneLayerb */
	virtual class ISceneLayer * AddLabelLayer(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView13AddLabelLayerEPKc */
	virtual bool HasLabelLayer(class ISceneView *, class CUtlStringToken); /* linkage=_ZN10ISceneView13HasLabelLayerE15CUtlStringToken */
	virtual void MoveLayerToBeAfterLabel(class ISceneView *, class CUtlStringToken, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView23MoveLayerToBeAfterLabelE15CUtlStringTokenP11ISceneLayerb */
	virtual void MoveLayerToBeAfterLayer(class ISceneView *, class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN10ISceneView23MoveLayerToBeAfterLayerEP11ISceneLayerS1_ */
	virtual void AddSemaphoreDependencyForLabelLayer(class ISceneView *, class CUtlStringToken, class ISceneLayer *); /* linkage=_ZN10ISceneView35AddSemaphoreDependencyForLabelLayerE15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class RenderTargetDesc_t  &, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK18RenderTargetDesc_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class SceneLayerOutputs_t  &, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK19SceneLayerOutputs_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimpleQuadRendererLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, HMaterial, int, int, const class RenderViewport_t  &, const class RenderViewport_t  &); /* linkage=_ZN10ISceneView26AddSimpleQuadRendererLayerEPKcRK16RenderViewport_tRK15CUtlStringToken11CWeakHandleI29InfoForResourceTypeIMaterial2EiiS4_S4_ */
	virtual class ISceneLayer * AddResolveRenderTargetLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10ISceneView27AddResolveRenderTargetLayerEPKcRK16RenderViewport_tiiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual class ISceneLayer * AddResolveDepthStencilLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10ISceneView27AddResolveDepthStencilLayerEPKcRK16RenderViewport_tiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual void AddWorldToRenderList(class ISceneView *, class ISceneWorld *, const class CPVSBits  *, bool); /* linkage=_ZN10ISceneView20AddWorldToRenderListEP11ISceneWorldPK8CPVSBitsb */
	virtual void SetUserDataPtr(class ISceneView *, void *); /* linkage=_ZN10ISceneView14SetUserDataPtrEPv */
	virtual void * GetUserDataPtr(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetUserDataPtrEv */
	const class CFrustum  & GetFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView10GetFrustumEv */
	const class CFrustum  & GetCullFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetCullFrustumEv */
	const class RenderViewport_t  & GetMainViewport(const class ISceneView  *); /* linkage=_ZNK10ISceneView15GetMainViewportEv */
	void SetFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView10SetFrustumERK8CFrustum */
	void SetCullFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView14SetCullFrustumERK8CFrustum */
	void SetMainViewport(class ISceneView *, const class RenderViewport_t  &); /* linkage=_ZN10ISceneView15SetMainViewportERK16RenderViewport_t */
	uint32 CalculateSortKey(const class ISceneView  *, const class Vector  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6Vectorbf */
	uint32 CalculateSortKey(const class ISceneView  *, const class Vector  &, const class Vector  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6VectorS2_bf */
	uint32 CalculateSortKey(const class ISceneView  *, const class AABB_t  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6AABB_tbf */
	virtual void SetNextPtr(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView10SetNextPtrEPS_ */
	virtual class ISceneView * GetNextPtr(const class ISceneView  *); /* linkage=_ZNK10ISceneView10GetNextPtrEv */
	virtual SwapChainHandle_t GetSwapChain(const class ISceneView  *); /* linkage=_ZNK10ISceneView12GetSwapChainEv */
	virtual void ~ISceneView(class ISceneView *); /* linkage=_ZN10ISceneViewD4Ev */
	virtual class ISceneLayer * AddDebugInfoLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, uint); /* linkage=_ZN10ISceneView17AddDebugInfoLayerEPKcRK16RenderViewport_tj */
	virtual void PushNamedRenderTargetScope(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView26PushNamedRenderTargetScopeEPKc */
	virtual void PopNamedRenderTargetScope(class ISceneView *); /* linkage=_ZN10ISceneView25PopNamedRenderTargetScopeEv */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, HRenderTexture, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseEj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, SwapChainHandle_t, enum SwapChainBuffer_t, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcP19SwapChainHandle_t__17SwapChainBuffer_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, const class SceneViewRenderTargetInfo_t  &, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcRK27SceneViewRenderTargetInfo_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, const char  *); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcS1_ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcP24HSceneViewRenderTarget__ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, class ISceneView *, HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcPS_P24HSceneViewRenderTarget__j */
	virtual HSceneViewRenderTarget FindRenderTarget(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView16FindRenderTargetEPKc */
	virtual void AddFlags(class ISceneView *, enum SceneViewFlags_t); /* linkage=_ZN10ISceneView8AddFlagsE16SceneViewFlags_t */
	virtual void RemoveFlags(class ISceneView *, enum SceneViewFlags_t); /* linkage=_ZN10ISceneView11RemoveFlagsE16SceneViewFlags_t */
	virtual const class TonemapState_t  & GetTonemapState(const class ISceneView  *); /* linkage=_ZNK10ISceneView15GetTonemapStateEv */
	virtual void SetTonemapState(class ISceneView *, const class TonemapState_t  &); /* linkage=_ZN10ISceneView15SetTonemapStateERK14TonemapState_t */
	virtual void SetDefaultLayerObjectRequiredFlags(class ISceneView *, enum ESceneObjectFlags); /* linkage=_ZN10ISceneView34SetDefaultLayerObjectRequiredFlagsE17ESceneObjectFlags */
	virtual void SetDefaultLayerObjectExcludedFlags(class ISceneView *, enum ESceneObjectFlags); /* linkage=_ZN10ISceneView34SetDefaultLayerObjectExcludedFlagsE17ESceneObjectFlags */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView34GetDefaultLayerObjectRequiredFlagsEv */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView34GetDefaultLayerObjectExcludedFlagsEv */
	virtual class ISceneLayer * GetFinalOutputLayer(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetFinalOutputLayerEv */
	virtual void GetRenderTargetInfo(const class ISceneView  *, HSceneViewRenderTarget, class SceneViewRenderTargetInfo_t *); /* linkage=_ZNK10ISceneView19GetRenderTargetInfoEP24HSceneViewRenderTarget__P27SceneViewRenderTargetInfo_t */
	virtual class ISceneLayer * AddBlitTextureToTargetLayer(class ISceneView *, const char  *, HSceneViewRenderTarget, const class RenderViewport_t  &, const class RenderViewport_t  &, const class SceneLayerOutputs_t  &, class BlitSetup_t *); /* linkage=_ZN10ISceneView27AddBlitTextureToTargetLayerEPKcP24HSceneViewRenderTarget__RK16RenderViewport_tS6_RK19SceneLayerOutputs_tP11BlitSetup_t */
	virtual enum SceneViewFlags_t GetFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView8GetFlagsEv */
	virtual void MarkRenderTargetRead(class ISceneView *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView20MarkRenderTargetReadEP24HSceneViewRenderTarget__ */
	virtual HRenderTexture GetRenderTargetTexture(class ISceneView *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView22GetRenderTargetTextureEP24HSceneViewRenderTarget__ */
	virtual void SetUserClipPlane(class ISceneView *, int, const class VPlane  &); /* linkage=_ZN10ISceneView16SetUserClipPlaneEiRK6VPlane */
	virtual void ComputeScreenCorners(const class ISceneView  *, class Vector *); /* linkage=_ZNK10ISceneView20ComputeScreenCornersEP6Vector */
	virtual void ComputeEyeRays(const class ISceneView  *, class Vector *); /* linkage=_ZNK10ISceneView14ComputeEyeRaysEP6Vector */
	virtual bool GetShadowsEnabled(const class ISceneView  *); /* linkage=_ZNK10ISceneView17GetShadowsEnabledEv */
	virtual void SetShadowsEnabled(class ISceneView *, bool); /* linkage=_ZN10ISceneView17SetShadowsEnabledEb */
	virtual bool GetPostProcessEnabled(const class ISceneView  *); /* linkage=_ZNK10ISceneView21GetPostProcessEnabledEv */
	virtual void SetPostProcessEnabled(class ISceneView *, bool); /* linkage=_ZN10ISceneView21SetPostProcessEnabledEb */
	virtual class ISceneViewDebugOverlays * GetDebugOverlayList(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetDebugOverlayListEv */
	virtual const class CRenderAttributes  & GetRenderAttributes(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetRenderAttributesEv */
	virtual class CRenderAttributes & GetRenderAttributes(class ISceneView *); /* linkage=_ZN10ISceneView19GetRenderAttributesEv */
	virtual class CViewId GetViewId(const class ISceneView  *); /* linkage=_ZNK10ISceneView9GetViewIdEv */
	virtual void ComputeRenderTargetAllocations(class ISceneView *); /* linkage=_ZN10ISceneView30ComputeRenderTargetAllocationsEv */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(class ISceneView *, float); /* linkage=_ZN10ISceneView43SetBoundingVolumeSizeCullThresholdInPercentEf */
	virtual void SetDistanceScaleForLODAndCulling(class ISceneView *, float); /* linkage=_ZN10ISceneView32SetDistanceScaleForLODAndCullingEf */
	virtual float GetSquaredDistanceScaleForLODAndCulling(class ISceneView *); /* linkage=_ZN10ISceneView39GetSquaredDistanceScaleForLODAndCullingEv */
	virtual int GetPriority(class ISceneView *); /* linkage=_ZN10ISceneView11GetPriorityEv */
	virtual void SetPriority(class ISceneView *, int); /* linkage=_ZN10ISceneView11SetPriorityEi */
	virtual void SetParent(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView9SetParentEPS_ */
	virtual class ISceneView * GetParent(const class ISceneView  *); /* linkage=_ZNK10ISceneView9GetParentEv */
	virtual void CopyWorldsAndVisFrom(class ISceneView *, class ISceneView *, const class Vector  &, enum vis_type_t); /* linkage=_ZN10ISceneView20CopyWorldsAndVisFromEPS_RK6Vector10vis_type_t */
	virtual void CopyWorldsFrom(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView14CopyWorldsFromEPS_ */
	virtual void AddDependentView(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView16AddDependentViewEPS_ */
	virtual void AddAuxiliaryRenderCamera(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView24AddAuxiliaryRenderCameraERK8CFrustum */
	virtual const class CFrustum  * GetFirstAuxilaryRenderCamera(const class ISceneView  *); /* linkage=_ZNK10ISceneView28GetFirstAuxilaryRenderCameraEv */
	virtual void SetOverrideLODLevel(class ISceneView *, int); /* linkage=_ZN10ISceneView19SetOverrideLODLevelEi */
	virtual int GetOverrideLODLevel(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetOverrideLODLevelEv */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const class ISceneView  *, class ISceneLayer *); /* linkage=_ZNK10ISceneView51CopyRenderTargetOutputsAndViewportFromPreviousLayerEP11ISceneLayer */
	virtual void SetIssueSortIndex(class ISceneView *, int); /* linkage=_ZN10ISceneView17SetIssueSortIndexEi */
	virtual void RemoveCullBoxes(class ISceneView *); /* linkage=_ZN10ISceneView15RemoveCullBoxesEv */
	virtual const class CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >  & GetVolumetricFogVolumes(const class ISceneView  *); /* linkage=_ZNK10ISceneView23GetVolumetricFogVolumesEv */
	virtual void SetVolumeCuller(class ISceneView *, const class CVolumeCuller  &); /* linkage=_ZN10ISceneView15SetVolumeCullerERK13CVolumeCuller */
	virtual void CaptureRenderDocForView(class ISceneView *); /* linkage=_ZN10ISceneView23CaptureRenderDocForViewEv */
	void SetPreviousFrameFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView23SetPreviousFrameFrustumERK8CFrustum */
	const class CFrustum  & GetPreviousFrameFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView23GetPreviousFrameFrustumEv */
	int NumWorldsToRender(const class ISceneView  *); /* linkage=_ZNK10ISceneView17NumWorldsToRenderEv */
	class ISceneWorld * GetWorldToRender(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView16GetWorldToRenderEi */
	const class CPVSBits  * GetWorldToRenderVisInfo(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView23GetWorldToRenderVisInfoEi */
	void SetWorldToRenderVisInfo(class ISceneView *, int, const class CPVSBits  *); /* linkage=_ZN10ISceneView23SetWorldToRenderVisInfoEiPK8CPVSBits */
	const uint32  * GetWorldToRenderVisBits(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView23GetWorldToRenderVisBitsEi */
	bool WillRenderWorld(const class ISceneView  *, class ISceneWorld *); /* linkage=_ZNK10ISceneView15WillRenderWorldEP11ISceneWorld */
	int IndexOfWorldToRender(const class ISceneView  *, class ISceneWorld *); /* linkage=_ZNK10ISceneView20IndexOfWorldToRenderEP11ISceneWorld */
	class Vector GetCameraPosition(const class ISceneView  *); /* linkage=_ZNK10ISceneView17GetCameraPositionEv */
	void SetOverrideRenderTargetArrayIndex(class ISceneView *, int, int); /* linkage=_ZN10ISceneView33SetOverrideRenderTargetArrayIndexEii */
	int * GetOverrideRenderTargetArrayIndex(class ISceneView *); /* linkage=_ZN10ISceneView33GetOverrideRenderTargetArrayIndexEv */
	class CRenderAttributes * GetRenderAttributesPtr(class ISceneView *); /* linkage=_ZN10ISceneView22GetRenderAttributesPtrEv */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const class ISceneView  *); /* linkage=_ZNK10ISceneView13GetRenderTagsEv */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetExcludeTagsEv */
	virtual void SetRenderTags(class ISceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10ISceneView13SetRenderTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	virtual void SetExcludeTags(class ISceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10ISceneView14SetExcludeTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	void ISceneView(class ISceneView *, const class ISceneView  &); /* linkage=_ZN10ISceneViewC4ERKS_ */
	void ISceneView(class ISceneView *); /* linkage=_ZN10ISceneViewC4Ev */
} __attribute__((__aligned__(16)));

// <058D57DB> ../../public/scenesystem/isceneview.h:188
// member functions: 210
// member variables: 10
// vtable entries: 81
// class size: 4,960
class ISceneView {
	/* ../../public/scenesystem/isceneview.h:510 */
	struct WorldList_t {
		CSceneWorld * m_pWorld; /* 0 8 */
		const class CPVSBits * m_pVisInfo; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	int ()(void) * * _vptr.ISceneView; /* 0 8 */
	/* ../../public/scenesystem/isceneview.h:191 */
	virtual const char* GetDebugName(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:193 */
	virtual ISceneLayer* AddRenderLayer(ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , ISceneLayer* );
	/* ../../public/scenesystem/isceneview.h:194 */
	virtual ISceneLayer* AddProceduralLayer(ISceneView* , const char* , const RenderViewport_t& , IProceduralLayerRenderer* , ISceneLayer* , bool);
	/* ../../public/scenesystem/isceneview.h:195 */
	virtual ISceneLayer* AddClearLayer(ISceneView* , const char* , const RenderViewport_t& , int, ISceneLayer* );
	/* ../../public/scenesystem/isceneview.h:197 */
	virtual ISceneLayer* AddManagedProceduralLayer(ISceneView* , const char* , const RenderViewport_t& , SboxProceduralLayerCallback, ISceneLayer* , bool);
	/* ../../public/scenesystem/isceneview.h:200 */
	virtual ISceneLayer* AddLabelLayer(ISceneView* , const char* );
	/* ../../public/scenesystem/isceneview.h:202 */
	virtual bool HasLabelLayer(ISceneView* , CUtlStringToken);
	/* ../../public/scenesystem/isceneview.h:205 */
	virtual void MoveLayerToBeAfterLabel(ISceneView* , CUtlStringToken, ISceneLayer* , bool);
	/* ../../public/scenesystem/isceneview.h:208 */
	virtual void MoveLayerToBeAfterLayer(ISceneView* , ISceneLayer* , ISceneLayer* );
	/* ../../public/scenesystem/isceneview.h:216 */
	virtual void AddSemaphoreDependencyForLabelLayer(ISceneView* , CUtlStringToken, ISceneLayer* );
	/* ../../public/scenesystem/isceneview.h:219 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(ISceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const RenderTargetDesc_t& , ISceneLayer* , bool);
	/* ../../public/scenesystem/isceneview.h:220 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(ISceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const SceneLayerOutputs_t& , ISceneLayer* , bool);
	/* ../../public/scenesystem/isceneview.h:221 */
	virtual ISceneLayer* AddSimpleQuadRendererLayer(ISceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , HMaterial, int, int, const RenderViewport_t& , const RenderViewport_t& );
	/* ../../public/scenesystem/isceneview.h:224 */
	virtual ISceneLayer* AddResolveRenderTargetLayer(ISceneView* , const char* , const RenderViewport_t& , int, int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../../public/scenesystem/isceneview.h:225 */
	virtual ISceneLayer* AddResolveDepthStencilLayer(ISceneView* , const char* , const RenderViewport_t& , int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../../public/scenesystem/isceneview.h:228 */
	virtual void AddWorldToRenderList(ISceneView* , ISceneWorld* , const CPVSBits* , bool);
	/* ../../public/scenesystem/isceneview.h:231 */
	virtual void SetUserDataPtr(ISceneView* , void* );
	/* ../../public/scenesystem/isceneview.h:232 */
	virtual void* GetUserDataPtr(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:234 */
	const CFrustum& GetFrustum(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:235 */
	const CFrustum& GetCullFrustum(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:236 */
	const RenderViewport_t& GetMainViewport(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:237 */
	void SetFrustum(ISceneView* , const CFrustum& );
	/* ../../public/scenesystem/isceneview.h:238 */
	void SetCullFrustum(ISceneView* , const CFrustum& );
	/* ../../public/scenesystem/isceneview.h:239 */
	void SetMainViewport(ISceneView* , const RenderViewport_t& );
	/* ../../public/scenesystem/isceneview.h:546 */
	uint32 CalculateSortKey(const ISceneView* , const Vector& , bool, float);
	/* ../../public/scenesystem/isceneview.h:561 */
	uint32 CalculateSortKey(const ISceneView* , const Vector& , const Vector& , bool, float);
	/* ../../public/scenesystem/isceneview.h:246 */
	uint32 CalculateSortKey(const ISceneView* , const AABB_t& , bool, float);
	/* ../../public/scenesystem/isceneview.h:252 */
	virtual void SetNextPtr(ISceneView* , ISceneView* );
	/* ../../public/scenesystem/isceneview.h:253 */
	virtual ISceneView* GetNextPtr(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:255 */
	virtual SwapChainHandle_t GetSwapChain(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:257 */
	virtual void ~ISceneView(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:263 */
	virtual ISceneLayer* AddDebugInfoLayer(ISceneView* , const char* , const RenderViewport_t& , uint);
	/* ../../public/scenesystem/isceneview.h:266 */
	virtual void PushNamedRenderTargetScope(ISceneView* , const char* );
	/* ../../public/scenesystem/isceneview.h:267 */
	virtual void PopNamedRenderTargetScope(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:276 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , HRenderTexture, SceneViewRenderTargetFlags_t);
	/* ../../public/scenesystem/isceneview.h:283 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , SwapChainHandle_t, SwapChainBuffer_t, SceneViewRenderTargetFlags_t);
	/* ../../public/scenesystem/isceneview.h:290 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , const SceneViewRenderTargetInfo_t& , SceneViewRenderTargetFlags_t);
	/* ../../public/scenesystem/isceneview.h:297 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , const char* );
	/* ../../public/scenesystem/isceneview.h:298 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , HSceneViewRenderTarget);
	/* ../../public/scenesystem/isceneview.h:308 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(ISceneView* , const char* , ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t);
	/* ../../public/scenesystem/isceneview.h:311 */
	virtual HSceneViewRenderTarget FindRenderTarget(ISceneView* , const char* );
	/* ../../public/scenesystem/isceneview.h:316 */
	virtual void AddFlags(ISceneView* , SceneViewFlags_t);
	/* ../../public/scenesystem/isceneview.h:319 */
	virtual void RemoveFlags(ISceneView* , SceneViewFlags_t);
	/* ../../public/scenesystem/isceneview.h:322 */
	virtual const TonemapState_t& GetTonemapState(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:323 */
	virtual void SetTonemapState(ISceneView* , const TonemapState_t& );
	/* ../../public/scenesystem/isceneview.h:326 */
	virtual void SetDefaultLayerObjectRequiredFlags(ISceneView* , ESceneObjectFlags);
	/* ../../public/scenesystem/isceneview.h:327 */
	virtual void SetDefaultLayerObjectExcludedFlags(ISceneView* , ESceneObjectFlags);
	/* ../../public/scenesystem/isceneview.h:330 */
	virtual ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:331 */
	virtual ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:334 */
	virtual ISceneLayer* GetFinalOutputLayer(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:337 */
	virtual void GetRenderTargetInfo(const ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetInfo_t* );
	/* ../../public/scenesystem/isceneview.h:340 */
	virtual ISceneLayer* AddBlitTextureToTargetLayer(ISceneView* , const char* , HSceneViewRenderTarget, const RenderViewport_t& , const RenderViewport_t& , const SceneLayerOutputs_t& , BlitSetup_t* );
	/* ../../public/scenesystem/isceneview.h:343 */
	virtual SceneViewFlags_t GetFlags(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:349 */
	virtual void MarkRenderTargetRead(ISceneView* , HSceneViewRenderTarget);
	/* ../../public/scenesystem/isceneview.h:353 */
	virtual HRenderTexture GetRenderTargetTexture(ISceneView* , HSceneViewRenderTarget);
	/* ../../public/scenesystem/isceneview.h:356 */
	virtual void SetUserClipPlane(ISceneView* , int, const VPlane& );
	/* ../../public/scenesystem/isceneview.h:362 */
	virtual void ComputeScreenCorners(const ISceneView* , Vector* );
	/* ../../public/scenesystem/isceneview.h:364 */
	virtual void ComputeEyeRays(const ISceneView* , Vector* );
	/* ../../public/scenesystem/isceneview.h:368 */
	virtual bool GetShadowsEnabled(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:369 */
	virtual void SetShadowsEnabled(ISceneView* , bool);
	/* ../../public/scenesystem/isceneview.h:371 */
	virtual bool GetPostProcessEnabled(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:372 */
	virtual void SetPostProcessEnabled(ISceneView* , bool);
	/* ../../public/scenesystem/isceneview.h:374 */
	virtual ISceneViewDebugOverlays* GetDebugOverlayList(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:376 */
	virtual const CRenderAttributes& GetRenderAttributes(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:377 */
	virtual CRenderAttributes& GetRenderAttributes(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:380 */
	virtual CViewId GetViewId(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:383 */
	virtual void ComputeRenderTargetAllocations(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:387 */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(ISceneView* , float);
	/* ../../public/scenesystem/isceneview.h:391 */
	virtual void SetDistanceScaleForLODAndCulling(ISceneView* , float);
	/* ../../public/scenesystem/isceneview.h:394 */
	virtual float GetSquaredDistanceScaleForLODAndCulling(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:396 */
	virtual int GetPriority(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:397 */
	virtual void SetPriority(ISceneView* , int);
	/* ../../public/scenesystem/isceneview.h:400 */
	virtual void SetParent(ISceneView* , ISceneView* );
	/* ../../public/scenesystem/isceneview.h:401 */
	virtual ISceneView* GetParent(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:404 */
	virtual void CopyWorldsAndVisFrom(ISceneView* , ISceneView* , const Vector& , vis_type_t);
	/* ../../public/scenesystem/isceneview.h:405 */
	virtual void CopyWorldsFrom(ISceneView* , ISceneView* );
	/* ../../public/scenesystem/isceneview.h:408 */
	virtual void AddDependentView(ISceneView* , ISceneView* );
	/* ../../public/scenesystem/isceneview.h:414 */
	virtual void AddAuxiliaryRenderCamera(ISceneView* , const CFrustum& );
	/* ../../public/scenesystem/isceneview.h:415 */
	virtual const CFrustum* GetFirstAuxilaryRenderCamera(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:418 */
	virtual void SetOverrideLODLevel(ISceneView* , int);
	/* ../../public/scenesystem/isceneview.h:419 */
	virtual int GetOverrideLODLevel(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:425 */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const ISceneView* , ISceneLayer* );
	/* ../../public/scenesystem/isceneview.h:428 */
	virtual void SetIssueSortIndex(ISceneView* , int);
	/* ../../public/scenesystem/isceneview.h:431 */
	virtual void RemoveCullBoxes(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:433 */
	virtual const CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >& GetVolumetricFogVolumes(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:436 */
	virtual void SetVolumeCuller(ISceneView* , const CVolumeCuller& );
	/* ../../public/scenesystem/isceneview.h:440 */
	virtual void CaptureRenderDocForView(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:442 */
	void SetPreviousFrameFrustum(ISceneView* , const CFrustum& );
	/* ../../public/scenesystem/isceneview.h:443 */
	const CFrustum& GetPreviousFrameFrustum(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:446 */
	int NumWorldsToRender(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:449 */
	ISceneWorld* GetWorldToRender(const ISceneView* , int);
	/* ../../public/scenesystem/isceneview.h:450 */
	const CPVSBits* GetWorldToRenderVisInfo(const ISceneView* , int);
	/* ../../public/scenesystem/isceneview.h:451 */
	void SetWorldToRenderVisInfo(ISceneView* , int, const CPVSBits* );
	/* ../../public/scenesystem/isceneview.h:454 */
	const uint32* GetWorldToRenderVisBits(const ISceneView* , int);
	/* ../../public/scenesystem/isceneview.h:460 */
	bool WillRenderWorld(const ISceneView* , ISceneWorld* );
	/* ../../public/scenesystem/isceneview.h:471 */
	int IndexOfWorldToRender(const ISceneView* , ISceneWorld* );
	/* ../../public/scenesystem/isceneview.h:495 */
	Vector GetCameraPosition(const ISceneView* );
private:
	CFrustum m_frustum __attribute__((__aligned__(16))); /* 16 1136 */
	CFrustum m_cullFrustum __attribute__((__aligned__(16))); /* 1152 1136 */
	CFrustum m_prevFrameFrustum __attribute__((__aligned__(16))); /* 2288 1136 */
	RenderViewport_t m_mainViewport; /* 3424 28 */
protected:
	CUtlVectorFixedGrowable<ISceneView::WorldList_t, 16> m_pWorldsToRender __attribute__((__aligned__(8))); /* 3456 288 */
	int m_nOverrideRTArrayIndex[2]; /* 3744 8 */
	/* ../../public/scenesystem/isceneview.h:522 */
	void SetOverrideRenderTargetArrayIndex(ISceneView* , int, int);
	/* ../../public/scenesystem/isceneview.h:527 */
	int* GetOverrideRenderTargetArrayIndex(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:529 */
	CRenderAttributes* GetRenderAttributesPtr(ISceneView* );
	/* ../../public/scenesystem/isceneview.h:534 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:535 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const ISceneView* );
	/* ../../public/scenesystem/isceneview.h:537 */
	virtual void SetRenderTags(ISceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../../public/scenesystem/isceneview.h:538 */
	virtual void SetExcludeTags(ISceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	int m_ViewUniqueId; /* 3752 4 */
	int m_ManagedCameraId; /* 3756 4 */
	SceneVieweSettings Settings __attribute__((__aligned__(16))); /* 3760 1200 */
	virtual const char  * GetDebugName(const class ISceneView  *); /* linkage=_ZNK10ISceneView12GetDebugNameEv */
	virtual class ISceneLayer * AddRenderLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, class ISceneLayer *); /* linkage=_ZN10ISceneView14AddRenderLayerEPKcRK16RenderViewport_tRK15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneLayer * AddProceduralLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, class IProceduralLayerRenderer *, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView18AddProceduralLayerEPKcRK16RenderViewport_tP24IProceduralLayerRendererP11ISceneLayerb */
	virtual class ISceneLayer * AddClearLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, class ISceneLayer *); /* linkage=_ZN10ISceneView13AddClearLayerEPKcRK16RenderViewport_tiP11ISceneLayer */
	virtual class ISceneLayer * AddManagedProceduralLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, SboxProceduralLayerCallback, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView25AddManagedProceduralLayerEPKcRK16RenderViewport_t12CUtlDelegateIFv20ManagedRenderSetup_tEEP11ISceneLayerb */
	virtual class ISceneLayer * AddLabelLayer(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView13AddLabelLayerEPKc */
	virtual bool HasLabelLayer(class ISceneView *, class CUtlStringToken); /* linkage=_ZN10ISceneView13HasLabelLayerE15CUtlStringToken */
	virtual void MoveLayerToBeAfterLabel(class ISceneView *, class CUtlStringToken, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView23MoveLayerToBeAfterLabelE15CUtlStringTokenP11ISceneLayerb */
	virtual void MoveLayerToBeAfterLayer(class ISceneView *, class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN10ISceneView23MoveLayerToBeAfterLayerEP11ISceneLayerS1_ */
	virtual void AddSemaphoreDependencyForLabelLayer(class ISceneView *, class CUtlStringToken, class ISceneLayer *); /* linkage=_ZN10ISceneView35AddSemaphoreDependencyForLabelLayerE15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class RenderTargetDesc_t  &, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK18RenderTargetDesc_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class SceneLayerOutputs_t  &, class ISceneLayer *, bool); /* linkage=_ZN10ISceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK19SceneLayerOutputs_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimpleQuadRendererLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, HMaterial, int, int, const class RenderViewport_t  &, const class RenderViewport_t  &); /* linkage=_ZN10ISceneView26AddSimpleQuadRendererLayerEPKcRK16RenderViewport_tRK15CUtlStringToken11CWeakHandleI29InfoForResourceTypeIMaterial2EiiS4_S4_ */
	virtual class ISceneLayer * AddResolveRenderTargetLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10ISceneView27AddResolveRenderTargetLayerEPKcRK16RenderViewport_tiiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual class ISceneLayer * AddResolveDepthStencilLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10ISceneView27AddResolveDepthStencilLayerEPKcRK16RenderViewport_tiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual void AddWorldToRenderList(class ISceneView *, class ISceneWorld *, const class CPVSBits  *, bool); /* linkage=_ZN10ISceneView20AddWorldToRenderListEP11ISceneWorldPK8CPVSBitsb */
	virtual void SetUserDataPtr(class ISceneView *, void *); /* linkage=_ZN10ISceneView14SetUserDataPtrEPv */
	virtual void * GetUserDataPtr(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetUserDataPtrEv */
	const class CFrustum  & GetFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView10GetFrustumEv */
	const class CFrustum  & GetCullFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetCullFrustumEv */
	const class RenderViewport_t  & GetMainViewport(const class ISceneView  *); /* linkage=_ZNK10ISceneView15GetMainViewportEv */
	void SetFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView10SetFrustumERK8CFrustum */
	void SetCullFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView14SetCullFrustumERK8CFrustum */
	void SetMainViewport(class ISceneView *, const class RenderViewport_t  &); /* linkage=_ZN10ISceneView15SetMainViewportERK16RenderViewport_t */
	uint32 CalculateSortKey(const class ISceneView  *, const class Vector  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6Vectorbf */
	uint32 CalculateSortKey(const class ISceneView  *, const class Vector  &, const class Vector  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6VectorS2_bf */
	uint32 CalculateSortKey(const class ISceneView  *, const class AABB_t  &, bool, float); /* linkage=_ZNK10ISceneView16CalculateSortKeyERK6AABB_tbf */
	virtual void SetNextPtr(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView10SetNextPtrEPS_ */
	virtual class ISceneView * GetNextPtr(const class ISceneView  *); /* linkage=_ZNK10ISceneView10GetNextPtrEv */
	virtual SwapChainHandle_t GetSwapChain(const class ISceneView  *); /* linkage=_ZNK10ISceneView12GetSwapChainEv */
	virtual void ~ISceneView(class ISceneView *); /* linkage=_ZN10ISceneViewD4Ev */
	virtual class ISceneLayer * AddDebugInfoLayer(class ISceneView *, const char  *, const class RenderViewport_t  &, uint); /* linkage=_ZN10ISceneView17AddDebugInfoLayerEPKcRK16RenderViewport_tj */
	virtual void PushNamedRenderTargetScope(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView26PushNamedRenderTargetScopeEPKc */
	virtual void PopNamedRenderTargetScope(class ISceneView *); /* linkage=_ZN10ISceneView25PopNamedRenderTargetScopeEv */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, HRenderTexture, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseEj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, SwapChainHandle_t, enum SwapChainBuffer_t, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcP19SwapChainHandle_t__17SwapChainBuffer_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, const class SceneViewRenderTargetInfo_t  &, SceneViewRenderTargetFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcRK27SceneViewRenderTargetInfo_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, const char  *); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcS1_ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcP24HSceneViewRenderTarget__ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class ISceneView *, const char  *, class ISceneView *, HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t); /* linkage=_ZN10ISceneView24FindOrCreateRenderTargetEPKcPS_P24HSceneViewRenderTarget__j */
	virtual HSceneViewRenderTarget FindRenderTarget(class ISceneView *, const char  *); /* linkage=_ZN10ISceneView16FindRenderTargetEPKc */
	virtual void AddFlags(class ISceneView *, enum SceneViewFlags_t); /* linkage=_ZN10ISceneView8AddFlagsE16SceneViewFlags_t */
	virtual void RemoveFlags(class ISceneView *, enum SceneViewFlags_t); /* linkage=_ZN10ISceneView11RemoveFlagsE16SceneViewFlags_t */
	virtual const class TonemapState_t  & GetTonemapState(const class ISceneView  *); /* linkage=_ZNK10ISceneView15GetTonemapStateEv */
	virtual void SetTonemapState(class ISceneView *, const class TonemapState_t  &); /* linkage=_ZN10ISceneView15SetTonemapStateERK14TonemapState_t */
	virtual void SetDefaultLayerObjectRequiredFlags(class ISceneView *, enum ESceneObjectFlags); /* linkage=_ZN10ISceneView34SetDefaultLayerObjectRequiredFlagsE17ESceneObjectFlags */
	virtual void SetDefaultLayerObjectExcludedFlags(class ISceneView *, enum ESceneObjectFlags); /* linkage=_ZN10ISceneView34SetDefaultLayerObjectExcludedFlagsE17ESceneObjectFlags */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView34GetDefaultLayerObjectRequiredFlagsEv */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView34GetDefaultLayerObjectExcludedFlagsEv */
	virtual class ISceneLayer * GetFinalOutputLayer(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetFinalOutputLayerEv */
	virtual void GetRenderTargetInfo(const class ISceneView  *, HSceneViewRenderTarget, class SceneViewRenderTargetInfo_t *); /* linkage=_ZNK10ISceneView19GetRenderTargetInfoEP24HSceneViewRenderTarget__P27SceneViewRenderTargetInfo_t */
	virtual class ISceneLayer * AddBlitTextureToTargetLayer(class ISceneView *, const char  *, HSceneViewRenderTarget, const class RenderViewport_t  &, const class RenderViewport_t  &, const class SceneLayerOutputs_t  &, class BlitSetup_t *); /* linkage=_ZN10ISceneView27AddBlitTextureToTargetLayerEPKcP24HSceneViewRenderTarget__RK16RenderViewport_tS6_RK19SceneLayerOutputs_tP11BlitSetup_t */
	virtual enum SceneViewFlags_t GetFlags(const class ISceneView  *); /* linkage=_ZNK10ISceneView8GetFlagsEv */
	virtual void MarkRenderTargetRead(class ISceneView *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView20MarkRenderTargetReadEP24HSceneViewRenderTarget__ */
	virtual HRenderTexture GetRenderTargetTexture(class ISceneView *, HSceneViewRenderTarget); /* linkage=_ZN10ISceneView22GetRenderTargetTextureEP24HSceneViewRenderTarget__ */
	virtual void SetUserClipPlane(class ISceneView *, int, const class VPlane  &); /* linkage=_ZN10ISceneView16SetUserClipPlaneEiRK6VPlane */
	virtual void ComputeScreenCorners(const class ISceneView  *, class Vector *); /* linkage=_ZNK10ISceneView20ComputeScreenCornersEP6Vector */
	virtual void ComputeEyeRays(const class ISceneView  *, class Vector *); /* linkage=_ZNK10ISceneView14ComputeEyeRaysEP6Vector */
	virtual bool GetShadowsEnabled(const class ISceneView  *); /* linkage=_ZNK10ISceneView17GetShadowsEnabledEv */
	virtual void SetShadowsEnabled(class ISceneView *, bool); /* linkage=_ZN10ISceneView17SetShadowsEnabledEb */
	virtual bool GetPostProcessEnabled(const class ISceneView  *); /* linkage=_ZNK10ISceneView21GetPostProcessEnabledEv */
	virtual void SetPostProcessEnabled(class ISceneView *, bool); /* linkage=_ZN10ISceneView21SetPostProcessEnabledEb */
	virtual class ISceneViewDebugOverlays * GetDebugOverlayList(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetDebugOverlayListEv */
	virtual const class CRenderAttributes  & GetRenderAttributes(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetRenderAttributesEv */
	virtual class CRenderAttributes & GetRenderAttributes(class ISceneView *); /* linkage=_ZN10ISceneView19GetRenderAttributesEv */
	virtual class CViewId GetViewId(const class ISceneView  *); /* linkage=_ZNK10ISceneView9GetViewIdEv */
	virtual void ComputeRenderTargetAllocations(class ISceneView *); /* linkage=_ZN10ISceneView30ComputeRenderTargetAllocationsEv */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(class ISceneView *, float); /* linkage=_ZN10ISceneView43SetBoundingVolumeSizeCullThresholdInPercentEf */
	virtual void SetDistanceScaleForLODAndCulling(class ISceneView *, float); /* linkage=_ZN10ISceneView32SetDistanceScaleForLODAndCullingEf */
	virtual float GetSquaredDistanceScaleForLODAndCulling(class ISceneView *); /* linkage=_ZN10ISceneView39GetSquaredDistanceScaleForLODAndCullingEv */
	virtual int GetPriority(class ISceneView *); /* linkage=_ZN10ISceneView11GetPriorityEv */
	virtual void SetPriority(class ISceneView *, int); /* linkage=_ZN10ISceneView11SetPriorityEi */
	virtual void SetParent(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView9SetParentEPS_ */
	virtual class ISceneView * GetParent(const class ISceneView  *); /* linkage=_ZNK10ISceneView9GetParentEv */
	virtual void CopyWorldsAndVisFrom(class ISceneView *, class ISceneView *, const class Vector  &, enum vis_type_t); /* linkage=_ZN10ISceneView20CopyWorldsAndVisFromEPS_RK6Vector10vis_type_t */
	virtual void CopyWorldsFrom(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView14CopyWorldsFromEPS_ */
	virtual void AddDependentView(class ISceneView *, class ISceneView *); /* linkage=_ZN10ISceneView16AddDependentViewEPS_ */
	virtual void AddAuxiliaryRenderCamera(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView24AddAuxiliaryRenderCameraERK8CFrustum */
	virtual const class CFrustum  * GetFirstAuxilaryRenderCamera(const class ISceneView  *); /* linkage=_ZNK10ISceneView28GetFirstAuxilaryRenderCameraEv */
	virtual void SetOverrideLODLevel(class ISceneView *, int); /* linkage=_ZN10ISceneView19SetOverrideLODLevelEi */
	virtual int GetOverrideLODLevel(const class ISceneView  *); /* linkage=_ZNK10ISceneView19GetOverrideLODLevelEv */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const class ISceneView  *, class ISceneLayer *); /* linkage=_ZNK10ISceneView51CopyRenderTargetOutputsAndViewportFromPreviousLayerEP11ISceneLayer */
	virtual void SetIssueSortIndex(class ISceneView *, int); /* linkage=_ZN10ISceneView17SetIssueSortIndexEi */
	virtual void RemoveCullBoxes(class ISceneView *); /* linkage=_ZN10ISceneView15RemoveCullBoxesEv */
	virtual const class CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >  & GetVolumetricFogVolumes(const class ISceneView  *); /* linkage=_ZNK10ISceneView23GetVolumetricFogVolumesEv */
	virtual void SetVolumeCuller(class ISceneView *, const class CVolumeCuller  &); /* linkage=_ZN10ISceneView15SetVolumeCullerERK13CVolumeCuller */
	virtual void CaptureRenderDocForView(class ISceneView *); /* linkage=_ZN10ISceneView23CaptureRenderDocForViewEv */
	void SetPreviousFrameFrustum(class ISceneView *, const class CFrustum  &); /* linkage=_ZN10ISceneView23SetPreviousFrameFrustumERK8CFrustum */
	const class CFrustum  & GetPreviousFrameFrustum(const class ISceneView  *); /* linkage=_ZNK10ISceneView23GetPreviousFrameFrustumEv */
	int NumWorldsToRender(const class ISceneView  *); /* linkage=_ZNK10ISceneView17NumWorldsToRenderEv */
	class ISceneWorld * GetWorldToRender(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView16GetWorldToRenderEi */
	const class CPVSBits  * GetWorldToRenderVisInfo(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView23GetWorldToRenderVisInfoEi */
	void SetWorldToRenderVisInfo(class ISceneView *, int, const class CPVSBits  *); /* linkage=_ZN10ISceneView23SetWorldToRenderVisInfoEiPK8CPVSBits */
	const uint32  * GetWorldToRenderVisBits(const class ISceneView  *, int); /* linkage=_ZNK10ISceneView23GetWorldToRenderVisBitsEi */
	bool WillRenderWorld(const class ISceneView  *, class ISceneWorld *); /* linkage=_ZNK10ISceneView15WillRenderWorldEP11ISceneWorld */
	int IndexOfWorldToRender(const class ISceneView  *, class ISceneWorld *); /* linkage=_ZNK10ISceneView20IndexOfWorldToRenderEP11ISceneWorld */
	class Vector GetCameraPosition(const class ISceneView  *); /* linkage=_ZNK10ISceneView17GetCameraPositionEv */
	void SetOverrideRenderTargetArrayIndex(class ISceneView *, int, int); /* linkage=_ZN10ISceneView33SetOverrideRenderTargetArrayIndexEii */
	int * GetOverrideRenderTargetArrayIndex(class ISceneView *); /* linkage=_ZN10ISceneView33GetOverrideRenderTargetArrayIndexEv */
	class CRenderAttributes * GetRenderAttributesPtr(class ISceneView *); /* linkage=_ZN10ISceneView22GetRenderAttributesPtrEv */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const class ISceneView  *); /* linkage=_ZNK10ISceneView13GetRenderTagsEv */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const class ISceneView  *); /* linkage=_ZNK10ISceneView14GetExcludeTagsEv */
	virtual void SetRenderTags(class ISceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10ISceneView13SetRenderTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	virtual void SetExcludeTags(class ISceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10ISceneView14SetExcludeTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	void ISceneView(class ISceneView *, const class ISceneView  &); /* linkage=_ZN10ISceneViewC4ERKS_ */
	void ISceneView(class ISceneView *); /* linkage=_ZN10ISceneViewC4Ev */
} __attribute__((__aligned__(16)));

// <04025000> ../public/scenesystem/isceneview.h:234
inline void ISceneView::GetFrustum()
{
} /* size: 0 */

// <04024FE7> ../public/scenesystem/isceneview.h:235
inline void ISceneView::GetCullFrustum()
{
} /* size: 0 */

// <04024FCE> ../public/scenesystem/isceneview.h:236
inline void ISceneView::GetMainViewport()
{
} /* size: 0 */

// <02F28BC4> ../public/scenesystem/isceneview.h:237
inline void ISceneView::SetFrustum(const CFrustum& frustum)
{
} /* size: 0 */

// <02F28B9F> ../public/scenesystem/isceneview.h:239
inline void ISceneView::SetMainViewport(const RenderViewport_t& viewport)
{
} /* size: 0 */

// <03244E12> ../public/scenesystem/isceneview.h:257
void ISceneView::~ISceneView()
{
} /* size: 0 */

// <03244DE2> ../public/scenesystem/isceneview.h:257
inline void ISceneView::~ISceneView()
{
} /* size: 0 */

// <01DCE1DA> ../public/scenesystem/isceneview.h:442
inline void ISceneView::SetPreviousFrameFrustum(const CFrustum& prevFrameFrustum)
{
} /* size: 0 */

// <02F28B86> ../public/scenesystem/isceneview.h:443
inline void ISceneView::GetPreviousFrameFrustum()
{
} /* size: 0 */

// <03244DC9> ../public/scenesystem/isceneview.h:446
inline void ISceneView::NumWorldsToRender()
{
} /* size: 0 */

// <03244DA3> ../public/scenesystem/isceneview.h:449
inline void ISceneView::GetWorldToRender(int nIndex)
{
} /* size: 0 */

// <02F28B14> ../public/scenesystem/isceneview.h:454
// variable: 1
inline void ISceneView::GetWorldToRenderVisBits(int nIndex)
{
	const CPVSBits* pVisInfo; // 456
} /* size: 0, variables: 1 */

// <02C45BF4> ../public/scenesystem/isceneview.h:460
// variable: 1
inline void ISceneView::WillRenderWorld(ISceneWorld* pSceneWorld)
{
	{
		int i; // 462
	}
} /* size: 0 */

// <02C45BC1> ../public/scenesystem/isceneview.h:471
// variable: 1
inline void ISceneView::IndexOfWorldToRender(ISceneWorld* pSceneWorld)
{
	{
		int i; // 473
	}
} /* size: 0 */

// <02EA7312> ../public/scenesystem/isceneview.h:482
// variables: 4
inline void ISceneView::ForEachWorldToRender<CSceneSystem::AddWorldsInViewToToListOfWorldsVisitedThisFrame(f)
{
	const char   __FUNCTION__; // 63709
	{
		int i; // 484
		{
			ISceneWorld* pWorld; // 486
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
			}
		}
	}
} /* size: 0, variables: 1 */

// <02EA5C9B> ../public/scenesystem/isceneview.h:482
// variables: 4
inline void ISceneView::ForEachWorldToRender<CSceneSystem::FinishRenderingViews(f)
{
	const char   __FUNCTION__; // 63709
	{
		int i; // 484
		{
			ISceneWorld* pWorld; // 486
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
			}
		}
	}
} /* size: 0, variables: 1 */

// <0134941A> ../public/scenesystem/isceneview.h:495
inline void ISceneView::GetCameraPosition()
{
} /* size: 0 */

// <027D9BB6> ../public/scenesystem/isceneview.h:522
inline void ISceneView::SetOverrideRenderTargetArrayIndex(int colorIndex, int depthIndex)
{
} /* size: 0 */

// <03754E30> ../public/scenesystem/isceneview.h:527
inline void ISceneView::GetOverrideRenderTargetArrayIndex()
{
} /* size: 0 */

// <01DCE18E> ../public/scenesystem/isceneview.h:529
inline void ISceneView::GetRenderAttributesPtr()
{
} /* size: 0 */

// <01D38F79> ../public/scenesystem/isceneview.h:579
// member functions: 8
// member variable: 1
// class size: 8
class CSceneViewRenderTargetScope {
	/* ../public/scenesystem/isceneview.h:582 */
	void CSceneViewRenderTargetScope(CSceneViewRenderTargetScope* , ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:588 */
	void ~CSceneViewRenderTargetScope(CSceneViewRenderTargetScope* );
	/* ../public/scenesystem/isceneview.h:593 */
	void Init(CSceneViewRenderTargetScope* , ISceneView* , const char* );
	/* ../public/scenesystem/isceneview.h:600 */
	void Shutdown(CSceneViewRenderTargetScope* );
private:
	ISceneView * m_pView; /* 0 8 */
	void CSceneViewRenderTargetScope(class CSceneViewRenderTargetScope *, class ISceneView *, const char  *); /* linkage=_ZN27CSceneViewRenderTargetScopeC4EP10ISceneViewPKc */
	void ~CSceneViewRenderTargetScope(class CSceneViewRenderTargetScope *); /* linkage=_ZN27CSceneViewRenderTargetScopeD4Ev */
	void Init(class CSceneViewRenderTargetScope *, class ISceneView *, const char  *); /* linkage=_ZN27CSceneViewRenderTargetScope4InitEP10ISceneViewPKc */
	void Shutdown(class CSceneViewRenderTargetScope *); /* linkage=_ZN27CSceneViewRenderTargetScope8ShutdownEv */
};

// <01DCE16D> ../public/scenesystem/isceneview.h:582
void CSceneViewRenderTargetScope::CSceneViewRenderTargetScope(ISceneView* pView, const char* pScopeName)
{
} /* size: 0 */

// <01DCE13A> ../public/scenesystem/isceneview.h:582
inline void CSceneViewRenderTargetScope::CSceneViewRenderTargetScope(ISceneView* pView, const char* pScopeName)
{
} /* size: 0 */

// <01DCE123> ../public/scenesystem/isceneview.h:588
void CSceneViewRenderTargetScope::~CSceneViewRenderTargetScope()
{
} /* size: 0 */

// <01DCE10A> ../public/scenesystem/isceneview.h:588
inline void CSceneViewRenderTargetScope::~CSceneViewRenderTargetScope()
{
} /* size: 0 */

// <01DCE0D7> ../public/scenesystem/isceneview.h:593
inline void CSceneViewRenderTargetScope::Init(ISceneView* pView, const char* pScopeName)
{
} /* size: 0 */

// <01DCE0BE> ../public/scenesystem/isceneview.h:600
inline void CSceneViewRenderTargetScope::Shutdown()
{
} /* size: 0 */

