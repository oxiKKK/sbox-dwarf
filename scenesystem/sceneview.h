
//
// scenesystem/sceneview.h
//
//	referenced by: libengine2.so
//
//	functions: 38
//	class: 1
//

// <0320329C> ../scenesystem/sceneview.h:54
// member functions: 218
// member variables: 47
// static member variable: 1
// vtable entries: 81
// class size: 22,560
class CSceneView : public ISceneView {
public:
	/* class ISceneView <ancestor>; */ /* 0 4960 */
	void CSceneView(CSceneView* , const CSceneView& );
	/* ../scenesystem/sceneview.cpp:785 */
	virtual ISceneLayer* AddRenderLayer(CSceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , ISceneLayer* );
	/* ../scenesystem/sceneview.cpp:792 */
	virtual ISceneLayer* AddProceduralLayer(CSceneView* , const char* , const RenderViewport_t& , IProceduralLayerRenderer* , ISceneLayer* , bool);
	/* ../scenesystem/sceneview.cpp:800 */
	virtual ISceneLayer* AddClearLayer(CSceneView* , const char* , const RenderViewport_t& , int, ISceneLayer* );
	/* ../scenesystem/sceneview.cpp:839 */
	virtual ISceneLayer* AddManagedProceduralLayer(CSceneView* , const char* , const RenderViewport_t& , SboxProceduralLayerCallback, ISceneLayer* , bool);
	/* ../scenesystem/sceneview.cpp:1147 */
	virtual ISceneLayer* AddResolveRenderTargetLayer(CSceneView* , const char* , const RenderViewport_t& , int, int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../scenesystem/sceneview.cpp:1185 */
	virtual ISceneLayer* AddResolveDepthStencilLayer(CSceneView* , const char* , const RenderViewport_t& , int, int, HSceneViewRenderTarget, ISceneLayer* );
	/* ../scenesystem/sceneview.cpp:1018 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(CSceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const RenderTargetDesc_t& , ISceneLayer* , bool);
	/* ../scenesystem/sceneview.cpp:1029 */
	virtual ISceneLayer* AddSimplePostProcessingLayer(CSceneView* , const char* , const RenderViewport_t& , const IMaterial2* , const SceneLayerOutputs_t& , ISceneLayer* , bool);
	/* ../scenesystem/sceneview.cpp:1041 */
	virtual ISceneLayer* AddSimpleQuadRendererLayer(CSceneView* , const char* , const RenderViewport_t& , const CUtlStringToken& , HMaterial, int, int, const RenderViewport_t& , const RenderViewport_t& );
	/* ../scenesystem/sceneview.h:77 */
	virtual ISceneLayer* AddDebugInfoLayer(CSceneView* , const char* , const RenderViewport_t& , uint);
	/* ../scenesystem/sceneview.cpp:401 */
	virtual ISceneLayer* AddLabelLayer(CSceneView* , const char* );
	/* ../scenesystem/sceneview.cpp:414 */
	virtual bool HasLabelLayer(CSceneView* , CUtlStringToken);
	/* ../scenesystem/sceneview.cpp:420 */
	virtual void MoveLayerToBeAfterLabel(CSceneView* , CUtlStringToken, ISceneLayer* , bool);
	/* ../scenesystem/sceneview.cpp:441 */
	virtual void MoveLayerToBeAfterLayer(CSceneView* , ISceneLayer* , ISceneLayer* );
	/* ../scenesystem/sceneview.cpp:174 */
	virtual void AddWorldToRenderList(CSceneView* , ISceneWorld* , const CPVSBits* , bool);
	/* ../scenesystem/sceneview.cpp:202 */
	virtual void SetUserDataPtr(CSceneView* , void* );
	/* ../scenesystem/sceneview.cpp:207 */
	virtual void* GetUserDataPtr(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:212 */
	virtual void SetNextPtr(CSceneView* , ISceneView* );
	/* ../scenesystem/sceneview.cpp:217 */
	virtual ISceneView* GetNextPtr(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:222 */
	virtual void PushNamedRenderTargetScope(CSceneView* , const char* );
	/* ../scenesystem/sceneview.cpp:227 */
	virtual void PopNamedRenderTargetScope(CSceneView* );
	/* ../scenesystem/sceneview.cpp:232 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(CSceneView* , const char* , HRenderTexture, SceneViewRenderTargetFlags_t);
	/* ../scenesystem/sceneview.cpp:237 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(CSceneView* , const char* , SwapChainHandle_t, SwapChainBuffer_t, SceneViewRenderTargetFlags_t);
	/* ../scenesystem/sceneview.cpp:242 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(CSceneView* , const char* , const SceneViewRenderTargetInfo_t& , SceneViewRenderTargetFlags_t);
	/* ../scenesystem/sceneview.cpp:247 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(CSceneView* , const char* , const char* );
	/* ../scenesystem/sceneview.cpp:256 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(CSceneView* , const char* , HSceneViewRenderTarget);
	/* ../scenesystem/sceneview.cpp:265 */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(CSceneView* , const char* , ISceneView* , HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t);
	/* ../scenesystem/sceneview.cpp:317 */
	virtual HSceneViewRenderTarget FindRenderTarget(CSceneView* , const char* );
	/* ../scenesystem/sceneview.cpp:274 */
	virtual void MarkRenderTargetRead(CSceneView* , HSceneViewRenderTarget);
	/* ../scenesystem/sceneview.cpp:322 */
	virtual void GetRenderTargetInfo(const CSceneView* , HSceneViewRenderTarget, SceneViewRenderTargetInfo_t* );
	/* ../scenesystem/sceneview.cpp:332 */
	virtual SwapChainHandle_t GetSwapChain(const CSceneView* );
	/* ../scenesystem/sceneview.h:351 */
	virtual void AddFlags(CSceneView* , SceneViewFlags_t);
	/* ../scenesystem/sceneview.h:356 */
	virtual void RemoveFlags(CSceneView* , SceneViewFlags_t);
	/* ../scenesystem/sceneview.h:367 */
	virtual SceneViewFlags_t GetFlags(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1054 */
	virtual const TonemapState_t& GetTonemapState(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1059 */
	virtual void SetTonemapState(CSceneView* , const TonemapState_t& );
	/* ../scenesystem/sceneview.cpp:1064 */
	virtual void SetDefaultLayerObjectRequiredFlags(CSceneView* , ESceneObjectFlags);
	/* ../scenesystem/sceneview.cpp:1069 */
	virtual void SetDefaultLayerObjectExcludedFlags(CSceneView* , ESceneObjectFlags);
	/* ../scenesystem/sceneview.cpp:1074 */
	virtual ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1079 */
	virtual ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1233 */
	virtual ISceneLayer* AddBlitTextureToTargetLayer(CSceneView* , const char* , HSceneViewRenderTarget, const RenderViewport_t& , const RenderViewport_t& , const SceneLayerOutputs_t& , BlitSetup_t* );
	/* ../scenesystem/sceneview.cpp:283 */
	virtual HRenderTexture GetRenderTargetTexture(CSceneView* , HSceneViewRenderTarget);
	/* ../scenesystem/sceneview.cpp:165 */
	virtual void SetUserClipPlane(CSceneView* , int, const VPlane& );
	/* ../scenesystem/sceneview.cpp:291 */
	virtual void ComputeScreenCorners(const CSceneView* , Vector* );
	/* ../scenesystem/sceneview.cpp:303 */
	virtual void ComputeEyeRays(const CSceneView* , Vector* );
	/* ../scenesystem/sceneview.cpp:1222 */
	virtual bool GetShadowsEnabled(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1227 */
	virtual void SetShadowsEnabled(CSceneView* , bool);
	/* ../scenesystem/sceneview.h:119 */
	virtual bool GetPostProcessEnabled(const CSceneView* );
	/* ../scenesystem/sceneview.h:120 */
	virtual void SetPostProcessEnabled(CSceneView* , bool);
	/* ../scenesystem/sceneview.cpp:1298 */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(CSceneView* , float);
	/* ../scenesystem/sceneview.cpp:95 */
	virtual ISceneViewDebugOverlays* GetDebugOverlayList(const CSceneView* );
	/* ../scenesystem/sceneview.h:316 */
	virtual const CRenderAttributes& GetRenderAttributes(const CSceneView* );
	/* ../scenesystem/sceneview.h:321 */
	virtual CRenderAttributes& GetRenderAttributes(CSceneView* );
	/* ../scenesystem/sceneview.cpp:106 */
	virtual void SetDistanceScaleForLODAndCulling(CSceneView* , float);
	/* ../scenesystem/sceneview.cpp:111 */
	virtual float GetSquaredDistanceScaleForLODAndCulling(CSceneView* );
	/* ../scenesystem/sceneview.h:311 */
	bool HasDebugOverlayList(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:160 */
	virtual CViewId GetViewId(const CSceneView* );
	/* ../scenesystem/sceneview.h:133 */
	virtual void SetParent(CSceneView* , ISceneView* );
	/* ../scenesystem/sceneview.h:134 */
	virtual ISceneView* GetParent(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:131 */
	virtual void CopyWorldsAndVisFrom(CSceneView* , ISceneView* , const Vector& , vis_type_t);
	/* ../scenesystem/sceneview.cpp:150 */
	virtual void CopyWorldsFrom(CSceneView* , ISceneView* );
	/* ../scenesystem/sceneview.h:362 */
	virtual void AddDependentView(CSceneView* , ISceneView* );
	/* ../scenesystem/sceneview.h:406 */
	virtual void SetOverrideLODLevel(CSceneView* , int);
	/* ../scenesystem/sceneview.h:411 */
	virtual int GetOverrideLODLevel(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:759 */
	virtual void SetIssueSortIndex(CSceneView* , int);
	/* ../scenesystem/sceneview.cpp:770 */
	virtual void AddSemaphoreDependencyForLabelLayer(CSceneView* , CUtlStringToken, ISceneLayer* );
	/* ../scenesystem/sceneview.cpp:847 */
	virtual void CaptureRenderDocForView(CSceneView* );
	/* ../scenesystem/sceneview.cpp:28 */
	void CSceneView(CSceneView* );
	/* ../scenesystem/sceneview.cpp:69 */
	virtual void ~CSceneView(CSceneView* );
	/* ../scenesystem/sceneview.h:336 */
	CLightBinner2* GetLightBinner2(const CSceneView* );
	/* ../scenesystem/sceneview.h:341 */
	CLightBinnerStandard* GetLightBinnerStandard(const CSceneView* );
	/* ../scenesystem/sceneview.h:346 */
	void SetLightBinner(CSceneView* , CLightBinnerStandard* );
	/* ../scenesystem/sceneview.h:156 */
	virtual const char* GetDebugName(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:327 */
	virtual void ComputeRenderTargetAllocations(CSceneView* );
	/* ../scenesystem/sceneview.cpp:1217 */
	virtual ISceneLayer* GetFinalOutputLayer(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1274 */
	void SetViewIdInternal(CSceneView* , CViewIdInternal);
	/* ../scenesystem/sceneview.cpp:1279 */
	CViewIdInternal GetViewIdInternal(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1284 */
	void SetViewIdInternal(CSceneView* , const ISceneView* , int);
	/* ../scenesystem/sceneview.h:167 */
	bool HasBeenSubmitted(const CSceneView* );
	/* ../scenesystem/sceneview.h:168 */
	void MarkSubmitted(CSceneView* );
	/* ../scenesystem/sceneview.h:326 */
	int GetViewIndex(const CSceneView* );
	/* ../scenesystem/sceneview.h:331 */
	int GetViewPriority(const CSceneView* );
	/* ../scenesystem/sceneview.h:172 */
	virtual int GetPriority(CSceneView* );
	/* ../scenesystem/sceneview.h:173 */
	virtual void SetPriority(CSceneView* , int);
	/* ../scenesystem/sceneview.h:372 */
	void QueueViewToBeginAfterMe(CSceneView* , ISceneView* );
	/* ../scenesystem/sceneview.h:178 */
	virtual void AddAuxiliaryRenderCamera(CSceneView* , const CFrustum& );
	/* ../scenesystem/sceneview.cpp:116 */
	virtual const CFrustum* GetFirstAuxilaryRenderCamera(const CSceneView* );
	/* ../scenesystem/sceneview.h:378 */
	void AtFinish(CSceneView* );
	/* ../scenesystem/sceneview.cpp:459 */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const CSceneView* , ISceneLayer* );
	/* ../scenesystem/sceneview.cpp:764 */
	int GetIssueSortIndex(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1303 */
	void GetCullBoxListForView(const CSceneView* , CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >* , CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >* );
	/* ../scenesystem/sceneview.cpp:1326 */
	virtual void RemoveCullBoxes(CSceneView* );
	/* ../scenesystem/sceneview.cpp:1338 */
	virtual void SetVolumeCuller(CSceneView* , const CVolumeCuller& );
	/* ../scenesystem/sceneview.cpp:1343 */
	virtual const CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >& GetVolumetricFogVolumes(const CSceneView* );
	/* ../scenesystem/sceneview.h:197 */
	SceneViewTimestampQuery_t* GetLightBinnerTimestampBeginQuery(const CSceneView* );
	/* ../scenesystem/sceneview.h:198 */
	SceneViewTimestampQuery_t* GetLightBinnerTimestampEndQuery(const CSceneView* );
	CVolumeCuller m_volumeCuller __attribute__((__aligned__(16))); /* 4960 304 */
	VPlane m_userClipPlanes[1]; /* 5264 16 */
	SwapChainHandle_t m_hSwapChain; /* 5280 8 */
	CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short unsigned int>, int> > m_layerList; /* 5288 40 */
	CUtlVector<CFrustum, CUtlMemory<CFrustum, int> > m_auxiliaryCameras; /* 5328 32 */
	CInterlockedInt m_nNumPendingDrawPartitionsInFlight __attribute__((__aligned__(4))); /* 5360 4 */
	/* ../scenesystem/sceneview.cpp:373 */
	CSceneLayer* AddLayer(CSceneView* , const char* , const RenderViewport_t& , ELayerType, ISceneLayer* );
	/* ../scenesystem/sceneview.cpp:1122 */
	CSceneLayer* ComputePreviousLayer(CSceneView* , CSceneLayer* );
	/* ../scenesystem/sceneview.cpp:337 */
	CSceneLayer* CreateLayer(CSceneView* , const char* , const RenderViewport_t& , ELayerType);
	/* ../scenesystem/sceneview.h:222 */
	bool HasRenderPasses(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:565 */
	void CreateRenderPasses(CSceneView* );
	/* ../scenesystem/sceneview.h:227 */
	void SetNoRenderPasses(CSceneView* );
	CThreadFastMutex m_queuedViewMutex; /* 5368 24 */
	CUtlVectorFixedGrowable<ISceneView*, 8> m_queuedBeginViews __attribute__((__aligned__(8))); /* 5392 96 */
	CInterlockedInt m_nOutstandingPartitionJobs __attribute__((__aligned__(4))); /* 5488 4 */
	SceneSystemPerFrameStats_t m_perFrameStats[8] __attribute__((__aligned__(8))); /* 5496 1664 */
	CDisplayList * m_pLightBinnerSetupDisplayList; /* 7160 8 */
	CDisplayList * m_pPerLayerViewConstantsDisplayList; /* 7168 8 */
	ConstantBufferHandle_t m_hAllPerLayerViewConstants; /* 7176 8 */
	/* ../scenesystem/sceneview.h:244 */
	void* operator new(size_t);
	/* ../scenesystem/sceneview.h:248 */
	void operator delete(void* );
private:
	static CUtlMemoryPoolMT s_ViewPool; /* 0 0 */
	int m_nIndex; /* 7184 4 */
	int m_nPriority; /* 7188 4 */
	float m_flDistanceScaleForLODAndCullingSquared; /* 7192 4 */
	CUtlVectorFixedGrowable<ISceneView*, 16> m_pDependentViews __attribute__((__aligned__(8))); /* 7200 160 */
	CSceneView * m_pNext; /* 7360 8 */
	CSceneViewDebugOverlays * m_pDebugRenderLists; /* 7368 8 */
	void * m_pUserData; /* 7376 8 */
	char m_szDebugName[64]; /* 7384 64 */
	CLightBinnerStandard * m_pLightBinner; /* 7448 8 */
	SceneViewFlags_t m_nFlags; /* 7456 4 */
	TonemapState_t m_tonemapState; /* 7460 4 */
	ESceneObjectFlags m_nDefaultLayerObjectRequiredFlags; /* 7464 8 */
	ESceneObjectFlags m_nDefaultLayerObjectExcludedFlags; /* 7472 8 */
	CScratchRenderTargetSystem m_ScratchRenderTargetSystem __attribute__((__aligned__(8))); /* 7480 5400 */
	CViewIdInternal m_viewId; /* 12880 8 */
	CRenderAttributes m_Attrs; /* 12896 1184 */
	CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> > m_CullingBoxes; /* 14080 32 */
	CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> > m_VolumetricFogVolumes; /* 14112 32 */
	CUtlVectorFixedGrowable<CPVSBits, 16> m_pvs __attribute__((__aligned__(8))); /* 14144 8288 */
	bool m_bAddedToOpimizerList; /* 22432 1 */
	float m_flSizeCullThreshold; /* 22436 4 */
	int m_nOverrideLODLevel; /* 22440 4 */
	bool m_bShadowsEnabled; /* 22444 1 */
	bool m_bPostProcessEnabled; /* 22445 1 */
	bool m_bHasBeenSubmitted; /* 22446 1 */
	bool m_bHasRenderPasses; /* 22447 1 */
	bool m_bCaptureWithRenderDoc; /* 22448 1 */
	CSceneView * m_pParentView; /* 22456 8 */
	int m_nIssueSortIndex; /* 22464 4 */
	SceneViewTimestampQuery_t * m_pLightBinnerTimestampBeginQuery; /* 22472 8 */
	SceneViewTimestampQuery_t * m_pLightBinnerTimestampEndQuery; /* 22480 8 */
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_renderTags; /* 22488 32 */
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_excludeTags; /* 22520 32 */
	/* ../scenesystem/sceneview.cpp:1348 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1363 */
	virtual const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const CSceneView* );
	/* ../scenesystem/sceneview.cpp:1378 */
	virtual void SetRenderTags(CSceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* ../scenesystem/sceneview.cpp:1390 */
	virtual void SetExcludeTags(CSceneView* , const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined);
	/* <2f2fee6> ../scenesystem/sceneview.h:367 */
	virtual enum SceneViewFlags_t GetFlags(const class CSceneView  *); /* linkage=_ZNK10CSceneView8GetFlagsEv */
	void SetLightBinner(class CSceneView *, class CLightBinnerStandard *); /* linkage=_ZN10CSceneView14SetLightBinnerEP20CLightBinnerStandard */
	class CLightBinnerStandard * GetLightBinnerStandard(const class CSceneView  *); /* linkage=_ZNK10CSceneView22GetLightBinnerStandardEv */
	/* <4028427> ../scenesystem/sceneview.h:316 */
	virtual const class CRenderAttributes  & GetRenderAttributes(const class CSceneView  *); /* linkage=_ZNK10CSceneView19GetRenderAttributesEv */
	int GetIssueSortIndex(const class CSceneView  *); /* linkage=_ZNK10CSceneView17GetIssueSortIndexEv */
	void CreateRenderPasses(class CSceneView *); /* linkage=_ZN10CSceneView18CreateRenderPassesEv */
	void GetCullBoxListForView(const class CSceneView  *, class CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> > *, class CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> > *); /* linkage=_ZNK10CSceneView21GetCullBoxListForViewEP10CUtlVectorI23SceneObjectCullingBox_t10CUtlMemoryIS1_iEES5_ */
	void SetViewIdInternal(class CSceneView *, const class ISceneView  *, int); /* linkage=_ZN10CSceneView17SetViewIdInternalEPK10ISceneViewi */
	void SetViewIdInternal(class CSceneView *, class CViewIdInternal); /* linkage=_ZN10CSceneView17SetViewIdInternalE15CViewIdInternal */
	void CSceneView(class CSceneView *); /* linkage=_ZN10CSceneViewC4Ev */
	/* <4028451> ../scenesystem/sceneview.h:411 */
	virtual int GetOverrideLODLevel(const class CSceneView  *); /* linkage=_ZNK10CSceneView19GetOverrideLODLevelEv */
	void AtFinish(class CSceneView *); /* linkage=_ZN10CSceneView8AtFinishEv */
	/* <2f41185> ../scenesystem/sceneview.h:362 */
	virtual void AddDependentView(class CSceneView *, class ISceneView *); /* linkage=_ZN10CSceneView16AddDependentViewEP10ISceneView */
	/* <3183243> ../scenesystem/sceneview.h:351 */
	virtual void AddFlags(class CSceneView *, enum SceneViewFlags_t); /* linkage=_ZN10CSceneView8AddFlagsE16SceneViewFlags_t */
	class CLightBinner2 * GetLightBinner2(const class CSceneView  *); /* linkage=_ZNK10CSceneView15GetLightBinner2Ev */
	int GetViewPriority(const class CSceneView  *); /* linkage=_ZNK10CSceneView15GetViewPriorityEv */
	int GetViewIndex(const class CSceneView  *); /* linkage=_ZNK10CSceneView12GetViewIndexEv */
	/* <2f2fe8b> ../scenesystem/sceneview.h:321 */
	virtual class CRenderAttributes & GetRenderAttributes(class CSceneView *); /* linkage=_ZN10CSceneView19GetRenderAttributesEv */
	bool HasDebugOverlayList(const class CSceneView  *); /* linkage=_ZNK10CSceneView19HasDebugOverlayListEv */
	void * operator new(size_t); /* linkage=_ZN10CSceneViewnwEm */
	void SetNoRenderPasses(class CSceneView *); /* linkage=_ZN10CSceneView17SetNoRenderPassesEv */
	bool HasRenderPasses(const class CSceneView  *); /* linkage=_ZNK10CSceneView15HasRenderPassesEv */
	void MarkSubmitted(class CSceneView *); /* linkage=_ZN10CSceneView13MarkSubmittedEv */
	bool HasBeenSubmitted(const class CSceneView  *); /* linkage=_ZNK10CSceneView16HasBeenSubmittedEv */
	/* <39faab5> ../scenesystem/utils/../sceneview.h:156 */
	virtual const char  * GetDebugName(const class CSceneView  *); /* linkage=_ZNK10CSceneView12GetDebugNameEv */
	virtual class ISceneLayer * AddDebugInfoLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, uint); /* linkage=_ZN10CSceneView17AddDebugInfoLayerEPKcRK16RenderViewport_tj */
	void CSceneView(class CSceneView *, const class CSceneView  &); /* linkage=_ZN10CSceneViewC4ERKS_ */
	virtual class ISceneLayer * AddRenderLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, class ISceneLayer *); /* linkage=_ZN10CSceneView14AddRenderLayerEPKcRK16RenderViewport_tRK15CUtlStringTokenP11ISceneLayer */
	/* <32480fa> ../scenesystem/sceneview.cpp:792 */
	virtual class ISceneLayer * AddProceduralLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, class IProceduralLayerRenderer *, class ISceneLayer *, bool); /* linkage=_ZN10CSceneView18AddProceduralLayerEPKcRK16RenderViewport_tP24IProceduralLayerRendererP11ISceneLayerb */
	virtual class ISceneLayer * AddClearLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, int, class ISceneLayer *); /* linkage=_ZN10CSceneView13AddClearLayerEPKcRK16RenderViewport_tiP11ISceneLayer */
	virtual class ISceneLayer * AddManagedProceduralLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, SboxProceduralLayerCallback, class ISceneLayer *, bool); /* linkage=_ZN10CSceneView25AddManagedProceduralLayerEPKcRK16RenderViewport_t12CUtlDelegateIFv20ManagedRenderSetup_tEEP11ISceneLayerb */
	virtual class ISceneLayer * AddResolveRenderTargetLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, int, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10CSceneView27AddResolveRenderTargetLayerEPKcRK16RenderViewport_tiiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual class ISceneLayer * AddResolveDepthStencilLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, int, int, HSceneViewRenderTarget, class ISceneLayer *); /* linkage=_ZN10CSceneView27AddResolveDepthStencilLayerEPKcRK16RenderViewport_tiiP24HSceneViewRenderTarget__P11ISceneLayer */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class RenderTargetDesc_t  &, class ISceneLayer *, bool); /* linkage=_ZN10CSceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK18RenderTargetDesc_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimplePostProcessingLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, const class IMaterial2  *, const class SceneLayerOutputs_t  &, class ISceneLayer *, bool); /* linkage=_ZN10CSceneView28AddSimplePostProcessingLayerEPKcRK16RenderViewport_tPK10IMaterial2RK19SceneLayerOutputs_tP11ISceneLayerb */
	virtual class ISceneLayer * AddSimpleQuadRendererLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, const class CUtlStringToken  &, HMaterial, int, int, const class RenderViewport_t  &, const class RenderViewport_t  &); /* linkage=_ZN10CSceneView26AddSimpleQuadRendererLayerEPKcRK16RenderViewport_tRK15CUtlStringToken11CWeakHandleI29InfoForResourceTypeIMaterial2EiiS4_S4_ */
	virtual class ISceneLayer * AddLabelLayer(class CSceneView *, const char  *); /* linkage=_ZN10CSceneView13AddLabelLayerEPKc */
	virtual bool HasLabelLayer(class CSceneView *, class CUtlStringToken); /* linkage=_ZN10CSceneView13HasLabelLayerE15CUtlStringToken */
	virtual void MoveLayerToBeAfterLabel(class CSceneView *, class CUtlStringToken, class ISceneLayer *, bool); /* linkage=_ZN10CSceneView23MoveLayerToBeAfterLabelE15CUtlStringTokenP11ISceneLayerb */
	virtual void MoveLayerToBeAfterLayer(class CSceneView *, class ISceneLayer *, class ISceneLayer *); /* linkage=_ZN10CSceneView23MoveLayerToBeAfterLayerEP11ISceneLayerS1_ */
	virtual void AddWorldToRenderList(class CSceneView *, class ISceneWorld *, const class CPVSBits  *, bool); /* linkage=_ZN10CSceneView20AddWorldToRenderListEP11ISceneWorldPK8CPVSBitsb */
	virtual void SetUserDataPtr(class CSceneView *, void *); /* linkage=_ZN10CSceneView14SetUserDataPtrEPv */
	virtual void * GetUserDataPtr(const class CSceneView  *); /* linkage=_ZNK10CSceneView14GetUserDataPtrEv */
	virtual void SetNextPtr(class CSceneView *, class ISceneView *); /* linkage=_ZN10CSceneView10SetNextPtrEP10ISceneView */
	virtual class ISceneView * GetNextPtr(const class CSceneView  *); /* linkage=_ZNK10CSceneView10GetNextPtrEv */
	virtual void PushNamedRenderTargetScope(class CSceneView *, const char  *); /* linkage=_ZN10CSceneView26PushNamedRenderTargetScopeEPKc */
	virtual void PopNamedRenderTargetScope(class CSceneView *); /* linkage=_ZN10CSceneView25PopNamedRenderTargetScopeEv */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class CSceneView *, const char  *, HRenderTexture, SceneViewRenderTargetFlags_t); /* linkage=_ZN10CSceneView24FindOrCreateRenderTargetEPKc11CWeakHandleI31InfoForResourceTypeCTextureBaseEj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class CSceneView *, const char  *, SwapChainHandle_t, enum SwapChainBuffer_t, SceneViewRenderTargetFlags_t); /* linkage=_ZN10CSceneView24FindOrCreateRenderTargetEPKcP19SwapChainHandle_t__17SwapChainBuffer_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class CSceneView *, const char  *, const class SceneViewRenderTargetInfo_t  &, SceneViewRenderTargetFlags_t); /* linkage=_ZN10CSceneView24FindOrCreateRenderTargetEPKcRK27SceneViewRenderTargetInfo_tj */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class CSceneView *, const char  *, const char  *); /* linkage=_ZN10CSceneView24FindOrCreateRenderTargetEPKcS1_ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class CSceneView *, const char  *, HSceneViewRenderTarget); /* linkage=_ZN10CSceneView24FindOrCreateRenderTargetEPKcP24HSceneViewRenderTarget__ */
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(class CSceneView *, const char  *, class ISceneView *, HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t); /* linkage=_ZN10CSceneView24FindOrCreateRenderTargetEPKcP10ISceneViewP24HSceneViewRenderTarget__j */
	virtual HSceneViewRenderTarget FindRenderTarget(class CSceneView *, const char  *); /* linkage=_ZN10CSceneView16FindRenderTargetEPKc */
	virtual void MarkRenderTargetRead(class CSceneView *, HSceneViewRenderTarget); /* linkage=_ZN10CSceneView20MarkRenderTargetReadEP24HSceneViewRenderTarget__ */
	virtual void GetRenderTargetInfo(const class CSceneView  *, HSceneViewRenderTarget, class SceneViewRenderTargetInfo_t *); /* linkage=_ZNK10CSceneView19GetRenderTargetInfoEP24HSceneViewRenderTarget__P27SceneViewRenderTargetInfo_t */
	/* <3246e4b> ../scenesystem/sceneview.cpp:332 */
	virtual SwapChainHandle_t GetSwapChain(const class CSceneView  *); /* linkage=_ZNK10CSceneView12GetSwapChainEv */
	virtual void RemoveFlags(class CSceneView *, enum SceneViewFlags_t); /* linkage=_ZN10CSceneView11RemoveFlagsE16SceneViewFlags_t */
	virtual const class TonemapState_t  & GetTonemapState(const class CSceneView  *); /* linkage=_ZNK10CSceneView15GetTonemapStateEv */
	virtual void SetTonemapState(class CSceneView *, const class TonemapState_t  &); /* linkage=_ZN10CSceneView15SetTonemapStateERK14TonemapState_t */
	virtual void SetDefaultLayerObjectRequiredFlags(class CSceneView *, enum ESceneObjectFlags); /* linkage=_ZN10CSceneView34SetDefaultLayerObjectRequiredFlagsE17ESceneObjectFlags */
	virtual void SetDefaultLayerObjectExcludedFlags(class CSceneView *, enum ESceneObjectFlags); /* linkage=_ZN10CSceneView34SetDefaultLayerObjectExcludedFlagsE17ESceneObjectFlags */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectRequiredFlags(const class CSceneView  *); /* linkage=_ZNK10CSceneView34GetDefaultLayerObjectRequiredFlagsEv */
	virtual enum ESceneObjectFlags GetDefaultLayerObjectExcludedFlags(const class CSceneView  *); /* linkage=_ZNK10CSceneView34GetDefaultLayerObjectExcludedFlagsEv */
	virtual class ISceneLayer * AddBlitTextureToTargetLayer(class CSceneView *, const char  *, HSceneViewRenderTarget, const class RenderViewport_t  &, const class RenderViewport_t  &, const class SceneLayerOutputs_t  &, class BlitSetup_t *); /* linkage=_ZN10CSceneView27AddBlitTextureToTargetLayerEPKcP24HSceneViewRenderTarget__RK16RenderViewport_tS6_RK19SceneLayerOutputs_tP11BlitSetup_t */
	virtual HRenderTexture GetRenderTargetTexture(class CSceneView *, HSceneViewRenderTarget); /* linkage=_ZN10CSceneView22GetRenderTargetTextureEP24HSceneViewRenderTarget__ */
	/* <3246ef1> ../scenesystem/sceneview.cpp:165 */
	virtual void SetUserClipPlane(class CSceneView *, int, const class VPlane  &); /* linkage=_ZN10CSceneView16SetUserClipPlaneEiRK6VPlane */
	virtual void ComputeScreenCorners(const class CSceneView  *, class Vector *); /* linkage=_ZNK10CSceneView20ComputeScreenCornersEP6Vector */
	virtual void ComputeEyeRays(const class CSceneView  *, class Vector *); /* linkage=_ZNK10CSceneView14ComputeEyeRaysEP6Vector */
	virtual bool GetShadowsEnabled(const class CSceneView  *); /* linkage=_ZNK10CSceneView17GetShadowsEnabledEv */
	virtual void SetShadowsEnabled(class CSceneView *, bool); /* linkage=_ZN10CSceneView17SetShadowsEnabledEb */
	virtual bool GetPostProcessEnabled(const class CSceneView  *); /* linkage=_ZNK10CSceneView21GetPostProcessEnabledEv */
	virtual void SetPostProcessEnabled(class CSceneView *, bool); /* linkage=_ZN10CSceneView21SetPostProcessEnabledEb */
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(class CSceneView *, float); /* linkage=_ZN10CSceneView43SetBoundingVolumeSizeCullThresholdInPercentEf */
	virtual class ISceneViewDebugOverlays * GetDebugOverlayList(const class CSceneView  *); /* linkage=_ZNK10CSceneView19GetDebugOverlayListEv */
	virtual void SetDistanceScaleForLODAndCulling(class CSceneView *, float); /* linkage=_ZN10CSceneView32SetDistanceScaleForLODAndCullingEf */
	virtual float GetSquaredDistanceScaleForLODAndCulling(class CSceneView *); /* linkage=_ZN10CSceneView39GetSquaredDistanceScaleForLODAndCullingEv */
	virtual class CViewId GetViewId(const class CSceneView  *); /* linkage=_ZNK10CSceneView9GetViewIdEv */
	virtual void SetParent(class CSceneView *, class ISceneView *); /* linkage=_ZN10CSceneView9SetParentEP10ISceneView */
	/* <40283fd> ../scenesystem/sceneview.h:134 */
	virtual class ISceneView * GetParent(const class CSceneView  *); /* linkage=_ZNK10CSceneView9GetParentEv */
	virtual void CopyWorldsAndVisFrom(class CSceneView *, class ISceneView *, const class Vector  &, enum vis_type_t); /* linkage=_ZN10CSceneView20CopyWorldsAndVisFromEP10ISceneViewRK6Vector10vis_type_t */
	virtual void CopyWorldsFrom(class CSceneView *, class ISceneView *); /* linkage=_ZN10CSceneView14CopyWorldsFromEP10ISceneView */
	virtual void SetOverrideLODLevel(class CSceneView *, int); /* linkage=_ZN10CSceneView19SetOverrideLODLevelEi */
	virtual void SetIssueSortIndex(class CSceneView *, int); /* linkage=_ZN10CSceneView17SetIssueSortIndexEi */
	virtual void AddSemaphoreDependencyForLabelLayer(class CSceneView *, class CUtlStringToken, class ISceneLayer *); /* linkage=_ZN10CSceneView35AddSemaphoreDependencyForLabelLayerE15CUtlStringTokenP11ISceneLayer */
	virtual void CaptureRenderDocForView(class CSceneView *); /* linkage=_ZN10CSceneView23CaptureRenderDocForViewEv */
	virtual void ~CSceneView(class CSceneView *); /* linkage=_ZN10CSceneViewD4Ev */
	virtual void ComputeRenderTargetAllocations(class CSceneView *); /* linkage=_ZN10CSceneView30ComputeRenderTargetAllocationsEv */
	virtual class ISceneLayer * GetFinalOutputLayer(const class CSceneView  *); /* linkage=_ZNK10CSceneView19GetFinalOutputLayerEv */
	/* <32478b4> ../scenesystem/sceneview.cpp:1279 */
	class CViewIdInternal GetViewIdInternal(const class CSceneView  *); /* linkage=_ZNK10CSceneView17GetViewIdInternalEv */
	/* <3755ea9> ../scenesystem/sceneview.h:172 */
	virtual int GetPriority(class CSceneView *); /* linkage=_ZN10CSceneView11GetPriorityEv */
	virtual void SetPriority(class CSceneView *, int); /* linkage=_ZN10CSceneView11SetPriorityEi */
	void QueueViewToBeginAfterMe(class CSceneView *, class ISceneView *); /* linkage=_ZN10CSceneView23QueueViewToBeginAfterMeEP10ISceneView */
	virtual void AddAuxiliaryRenderCamera(class CSceneView *, const class CFrustum  &); /* linkage=_ZN10CSceneView24AddAuxiliaryRenderCameraERK8CFrustum */
	virtual const class CFrustum  * GetFirstAuxilaryRenderCamera(const class CSceneView  *); /* linkage=_ZNK10CSceneView28GetFirstAuxilaryRenderCameraEv */
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(const class CSceneView  *, class ISceneLayer *); /* linkage=_ZNK10CSceneView51CopyRenderTargetOutputsAndViewportFromPreviousLayerEP11ISceneLayer */
	virtual void RemoveCullBoxes(class CSceneView *); /* linkage=_ZN10CSceneView15RemoveCullBoxesEv */
	virtual void SetVolumeCuller(class CSceneView *, const class CVolumeCuller  &); /* linkage=_ZN10CSceneView15SetVolumeCullerERK13CVolumeCuller */
	virtual const class CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >  & GetVolumetricFogVolumes(const class CSceneView  *); /* linkage=_ZNK10CSceneView23GetVolumetricFogVolumesEv */
	class SceneViewTimestampQuery_t * GetLightBinnerTimestampBeginQuery(const class CSceneView  *); /* linkage=_ZNK10CSceneView33GetLightBinnerTimestampBeginQueryEv */
	class SceneViewTimestampQuery_t * GetLightBinnerTimestampEndQuery(const class CSceneView  *); /* linkage=_ZNK10CSceneView31GetLightBinnerTimestampEndQueryEv */
	/* <3247e91> ../scenesystem/sceneview.cpp:373 */
	class CSceneLayer * AddLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, enum ELayerType, class ISceneLayer *); /* linkage=_ZN10CSceneView8AddLayerEPKcRK16RenderViewport_t10ELayerTypeP11ISceneLayer */
	class CSceneLayer * ComputePreviousLayer(class CSceneView *, class CSceneLayer *); /* linkage=_ZN10CSceneView20ComputePreviousLayerEP11CSceneLayer */
	class CSceneLayer * CreateLayer(class CSceneView *, const char  *, const class RenderViewport_t  &, enum ELayerType); /* linkage=_ZN10CSceneView11CreateLayerEPKcRK16RenderViewport_t10ELayerType */
	void operator delete(void *); /* linkage=_ZN10CSceneViewdlEPv */
	/* <3247691> ../scenesystem/sceneview.cpp:1348 */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetRenderTags(const class CSceneView  *); /* linkage=_ZNK10CSceneView13GetRenderTagsEv */
	/* <324746e> ../scenesystem/sceneview.cpp:1363 */
	virtual const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined GetExcludeTags(const class CSceneView  *); /* linkage=_ZNK10CSceneView14GetExcludeTagsEv */
	virtual void SetRenderTags(class CSceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10CSceneView13SetRenderTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
	virtual void SetExcludeTags(class CSceneView *, const class CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined); /* linkage=_ZN10CSceneView14SetExcludeTagsEPK13CUtlHashtableIj7empty_t18DefaultHashFunctorIjE19DefaultEqualFunctorIjE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIjS1_EiEE */
} __attribute__((__aligned__(16)));

// <0323B6F1> ../scenesystem/sceneview.h:119
void CSceneView::GetPostProcessEnabled()
{
} /* size: 12 */

// <0323B6B6> ../scenesystem/sceneview.h:120
void CSceneView::SetPostProcessEnabled(bool b)
{
} /* size: 12 */

// <0323B679> ../scenesystem/sceneview.h:133
void CSceneView::SetParent(ISceneView* pParent)
{
} /* size: 12 */

// <040283FD> ../scenesystem/sceneview.h:134
void CSceneView::GetParent()
{
} /* size: 12 */

// <04017D57> ../scenesystem/sceneview.h:134
inline void CSceneView::GetParent()
{
} /* size: 0 */

// <02E0ED30> ../scenesystem/sceneview.h:151
void CSceneView::CSceneView()
{
} /* size: 0 */

// <039FAAB5> ../scenesystem/utils/../sceneview.h:156
void CSceneView::GetDebugName()
{
} /* size: 12 */

// <039F0295> ../scenesystem/utils/../sceneview.h:156
inline void CSceneView::GetDebugName()
{
} /* size: 0 */

// <02F1A879> ../scenesystem/sceneview.h:167
inline void CSceneView::HasBeenSubmitted()
{
} /* size: 0 */

// <02F1A860> ../scenesystem/sceneview.h:168
inline void CSceneView::MarkSubmitted()
{
} /* size: 0 */

// <03755EA9> ../scenesystem/sceneview.h:172
void CSceneView::GetPriority()
{
} /* size: 11 */

// <0374EFCF> ../scenesystem/sceneview.h:172
inline void CSceneView::GetPriority()
{
} /* size: 0 */

// <0323B5B2> ../scenesystem/sceneview.h:173
void CSceneView::SetPriority(int nPriority)
{
} /* size: 11 */

// <0323B281> ../scenesystem/sceneview.h:178
// function calls: 13
void CSceneView::AddAuxiliaryRenderCamera(const CFrustum& frustum)
{
	CUtlMemory<CFrustum, int>::NumAllocated(); // 1196
	CUtlMemory<CFrustum, int>::Base(); // 112
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::Base(); // 368
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CFrustum, int>::IsGrowable(); // 823
	CUtlMemory<CFrustum, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CFrustum, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CFrustum, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::GrowMemory(
			int num);  // 1198
	CopyConstruct<CFrustum>(CFrustum* pMemory,
				const CFrustum& src);  // 1201
	CUtlMemory<CFrustum, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<CFrustum, CUtlMemory<CFrustum, int> >::AddToTail(
			const CFrustum& src);  // 178
} /* size: 382, inline expansions: 13 (1056 bytes) */

// <038825E4> ../scenesystem/sceneview.h:197
inline void CSceneView::GetLightBinnerTimestampBeginQuery()
{
} /* size: 0 */

// <038825CB> ../scenesystem/sceneview.h:198
inline void CSceneView::GetLightBinnerTimestampEndQuery()
{
} /* size: 0 */

// <02F1A847> ../scenesystem/sceneview.h:222
inline void CSceneView::HasRenderPasses()
{
} /* size: 0 */

// <02F1A82E> ../scenesystem/sceneview.h:227
inline void CSceneView::SetNoRenderPasses()
{
} /* size: 0 */

// <02F1A7F9> ../scenesystem/sceneview.h:311
inline void CSceneView::HasDebugOverlayList()
{
} /* size: 0 */

// <04028427> ../scenesystem/sceneview.h:316
void CSceneView::GetRenderAttributes()
{
} /* size: 12 */

// <04017D3E> ../scenesystem/sceneview.h:316
inline void CSceneView::GetRenderAttributes()
{
} /* size: 0 */

// <0374EFB6> ../scenesystem/sceneview.h:326
inline void CSceneView::GetViewIndex()
{
} /* size: 0 */

// <02F1A795> ../scenesystem/sceneview.h:331
inline void CSceneView::GetViewPriority()
{
} /* size: 0 */

// <04017D25> ../scenesystem/sceneview.h:336
inline void CSceneView::GetLightBinner2()
{
} /* size: 0 */

// <040B22B0> ../scenesystem/sceneview.h:341
inline void CSceneView::GetLightBinnerStandard()
{
} /* size: 0 */

// <02C3FBCC> ../scenesystem/sceneview.h:346
inline void CSceneView::SetLightBinner(CLightBinnerStandard* pBinner)
{
} /* size: 0 */

// <0323B1D1> ../scenesystem/sceneview.h:351
void CSceneView::AddFlags(SceneViewFlags_t nFlags)
{
} /* size: 11 */

// <03174D1C> ../scenesystem/sceneview.h:351
inline void CSceneView::AddFlags(SceneViewFlags_t nFlags)
{
} /* size: 0 */

// <0323B18E> ../scenesystem/sceneview.h:356
void CSceneView::RemoveFlags(SceneViewFlags_t nFlags)
{
} /* size: 13 */

// <0323AE80> ../scenesystem/sceneview.h:362
// function calls: 13
void CSceneView::AddDependentView(ISceneView* pView)
{
	CUtlMemory<ISceneView::NumAllocated(); // 1196
	CUtlMemory<ISceneView::Base(); // 112
	CUtlVectorBase<ISceneView::Base(); // 368
	CUtlVectorBase<ISceneView::ResetDbgInfo(); // 824
	CUtlMemory<ISceneView::IsGrowable(); // 823
	CUtlMemory<ISceneView::IsExternallyAllocated(); // 859
	CUtlMemory<ISceneView::IsExternallyAllocated(); // 861
	CUtlMemory<ISceneView::Grow(
		int num);  // 806
	CUtlVectorBase<ISceneView::GrowMemory(
			int num);  // 1198
	CUtlMemory<ISceneView::operator[](
			int i);  // 602
	CUtlVectorBase<ISceneView::Element(
		int i);  // 1201
	CopyConstruct<ISceneView*>(ISceneView** pMemory,
					ISceneView* const& src);  // 1201
	CUtlVectorBase<ISceneView::AddToTail(
			ISceneView* const& src);  // 364
} /* size: 0, inline expansions: 13 (0 bytes) */

// <02F41185> ../scenesystem/sceneview.h:362
// function calls: 9
void CSceneView::AddDependentView(ISceneView* pView)
{
	CUtlMemory<ISceneView::NumAllocated(); // 1196
	CUtlMemory<ISceneView::operator[](
			int i);  // 602
	CUtlVectorBase<ISceneView::Element(
		int i);  // 1201
	CopyConstruct<ISceneView*>(ISceneView** pMemory,
					ISceneView* const& src);  // 1201
	CUtlMemory<ISceneView::Base(); // 112
	CUtlVectorBase<ISceneView::Base(); // 368
	CUtlVectorBase<ISceneView::ResetDbgInfo(); // 824
	CUtlVectorBase<ISceneView::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<ISceneView::AddToTail(
			ISceneView* const& src);  // 364
} /* size: 131, inline expansions: 9 (216 bytes) */

// <02F1A717> ../scenesystem/sceneview.h:362
inline void CSceneView::AddDependentView(ISceneView* pView)
{
} /* size: 0 */

// <0323AE52> ../scenesystem/sceneview.h:367
void CSceneView::GetFlags()
{
} /* size: 11 */

// <02F1A6FE> ../scenesystem/sceneview.h:367
inline void CSceneView::GetFlags()
{
} /* size: 0 */

// <02F1A69C> ../scenesystem/sceneview.h:378
// variables: 6
inline void CSceneView::AtFinish()
{
	Scope s; // 380
	{
		int v; // 386
	}
	{
		CSceneLayer* pLayer; // 397
		CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short unsigned int>, int> >& __for_range; // 46800
		iterator __for_begin; // 65515
		iterator __for_end; // 65515
	}
} /* size: 0, variables: 1 */

// <0323AE15> ../scenesystem/sceneview.h:406
void CSceneView::SetOverrideLODLevel(int nLODLevel)
{
} /* size: 11 */

// <04028451> ../scenesystem/sceneview.h:411
void CSceneView::GetOverrideLODLevel()
{
} /* size: 11 */

// <04017D0C> ../scenesystem/sceneview.h:411
inline void CSceneView::GetOverrideLODLevel()
{
} /* size: 0 */

