
//
// scenesystem/scenelayer.h
//
//	referenced by: libengine2.so
//
//	functions: 22
//	classes: 5
//	struct: 1
//

// <02B5D70E> ../scenesystem/scenelayer.h:29
// member functions: 2
// member variable: 1
// class size: 32
class CStencilBitAllocator : public CUtlSlotAllocator<8> {
public:
	/* class CUtlSlotAllocator<8> <ancestor>; */ /* 0 32 */
	/* ../scenesystem/scenelayer.h:32 */
	void CStencilBitAllocator(CStencilBitAllocator* );
	void CStencilBitAllocator(class CStencilBitAllocator *); /* linkage=_ZN20CStencilBitAllocatorC4Ev */
};

// <03475DA2> ../scenesystem/scenelayer.h:32
void CStencilBitAllocator::CStencilBitAllocator()
{
} /* size: 0 */

// <03475D89> ../scenesystem/scenelayer.h:32
inline void CStencilBitAllocator::CStencilBitAllocator()
{
} /* size: 0 */

// <02B5D745> ../scenesystem/scenelayer.h:43
// member variables: 4
// struct size: 24
struct ConstantBufferDataAttributeSettingRecord_t {
	ConstantBufferDataAttributeSettingRecord_t * m_pNext; /* 0 8 */
	CUtlStringToken m_nTok; /* 8 4 */
	int m_nDataSize; /* 12 4 */
	uint8 m_nData[1]; /* 16 1 */
};

// <02B591E0> ../scenesystem/scenelayer.h:53
// member functions: 103
// member variables: 49
// vtable entries: 23
// class size: 7,904
class CSceneLayer : public ISceneLayer {
public:
	/* class ISceneLayer <ancestor>; */ /* 0 2336 */
	/* ../scenesystem/scenelayer.h:56 */
	virtual void SetAssociatedLayer(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.h:61 */
	CRenderBatchList* AddEmbeddedView(CSceneLayer* , ISceneView* );
	/* ../scenesystem/scenelayer.h:63 */
	void CopyLayerFields(CSceneLayer* , CSceneLayer* );
	/* ../scenesystem/scenelayer.h:66 */
	bool ShouldClearScreen(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:71 */
	bool SetCanBenefitFromRenderPass(CSceneLayer* , CSceneView* );
	/* ../scenesystem/scenelayer.h:72 */
	bool CanBenefitFromRenderPass(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:79 */
	virtual int GetUniqueSceneLayerIndex(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:269 */
	virtual const RenderTargetDesc_t& GetRenderTargetDesc(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:264 */
	virtual void SetRenderTargetDesc(CSceneLayer* , const RenderTargetDesc_t& );
	/* ../scenesystem/scenelayer.h:86 */
	virtual bool GetRenderTargetDescDimensions(CSceneLayer* , int* , int* );
	/* ../scenesystem/scenelayer.h:274 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(CSceneLayer* , bool);
	/* ../scenesystem/scenelayer.h:279 */
	bool IsReflectionsAndRefractionsForObjectsDisabled(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:284 */
	virtual void OverrideFrustum(CSceneLayer* , const CFrustum& );
	/* ../scenesystem/scenelayer.h:290 */
	virtual void Override2Frustums(CSceneLayer* , const CFrustum& , const CFrustum& );
	/* ../scenesystem/scenelayer.h:302 */
	virtual void SetFadeTargetLayer(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.h:307 */
	virtual ISceneLayer* GetFadeTargetLayer(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:297 */
	bool IsOverridingFrustum(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:95 */
	virtual void SetTonemapOverrideScaleValue(CSceneLayer* , float);
	/* ../scenesystem/scenelayer.h:97 */
	virtual int FindOrAllocateStencilBit(CSceneLayer* , CUtlStringToken);
	/* ../scenesystem/scenelayer.h:98 */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(CSceneLayer* , const char* , int* , int* );
	/* ../scenesystem/scenelayer.h:100 */
	virtual void SetAuxiliaryCameraMask(CSceneLayer* , uint);
	/* ../scenesystem/scenelayer.h:103 */
	virtual void SetCustomSortKeyFunction(CSceneLayer* , LayerComputeSortKeyFunc_t* );
	/* ../scenesystem/scenelayer.h:105 */
	void QueueViewToBeginAfterMe(CSceneLayer* , ISceneView* );
	/* ../scenesystem/scenelayer.h:107 */
	void DecrementOutstandingPartitions(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:108 */
	void SetOutstandingPartitions(CSceneLayer* , int);
	/* ../scenesystem/scenelayer.h:109 */
	void SetLayerPerformsFrameBufferCopy(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:110 */
	bool GetLayerPerformsFrameBufferCopy(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:111 */
	void BeginRenderingQueuedViews(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:114 */
	bool ClearRenderTargets(CSceneLayer* , IRenderContext* , CSceneView* , int);
	/* ../scenesystem/scenelayer.h:115 */
	bool BindRenderTargetsAndClear(CSceneLayer* , IRenderContext* , CSceneView* , bool, SceneSystemPerFrameStats_t& );
	/* ../scenesystem/scenelayer.h:116 */
	void BindRenderTargets(CSceneLayer* , IRenderContext* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/scenelayer.h:117 */
	void SetViewportAndScissor(CSceneLayer* , IRenderContext* , CSceneView* );
	/* ../scenesystem/scenelayer.h:118 */
	virtual void SetLayerNoCull(CSceneLayer* , bool);
	/* ../scenesystem/scenelayer.h:120 */
	bool UseSecondaryContext(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:125 */
	RenderClearInfo_t GetRenderClearInfo(const CSceneLayer* , int);
	/* ../scenesystem/scenelayer.h:132 */
	virtual void AddSemaphoreDependency(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.h:134 */
	virtual void SetCullPlane(CSceneLayer* , const VPlane& );
	/* ../scenesystem/scenelayer.h:136 */
	virtual void AddWorldFilter(CSceneLayer* , ISceneWorld* );
	/* ../scenesystem/scenelayer.h:138 */
	const VPlane& GetCullPlane(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:139 */
	bool CullAgainstPlane(const CSceneLayer* , const Vector& , const Vector& );
	/* ../scenesystem/scenelayer.h:140 */
	bool HasCullPlane(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:142 */
	void AddToRenderPassDesc(CSceneLayer* , CSceneView* , CRenderPassDesc* , int);
	/* ../scenesystem/scenelayer.h:143 */
	void UpdateRenderPassDescStoreOps(CSceneLayer* , CSceneView* , CRenderPassDesc* );
	/* ../scenesystem/scenelayer.h:145 */
	bool PassesWorldFilter(const CSceneLayer* , ISceneWorld* );
	/* ../scenesystem/scenelayer.h:147 */
	virtual void SetPerfMarker(CSceneLayer* , const char* );
	/* ../scenesystem/scenelayer.h:148 */
	virtual void ClearPerfMarker(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:150 */
	virtual void SetWireframeOverride(CSceneLayer* , bool, float);
	CSceneLayer * m_pAssociatedLayer; /* 2336 8 */
	CSceneLayer * m_pFadeTargetLayer; /* 2344 8 */
	int m_nUniqueSceneLayerIndex; /* 2352 4 */
	CUtlIntrusiveList<CSceneDrawList> m_pendingDrawList[8]; /* 2360 64 */
	CUtlIntrusiveList<CSceneDrawList> m_savedDrawListsForOptimization; /* 2424 8 */
	CThreadFastMutex m_embeddedViewMutex; /* 2432 24 */
	int m_nNumDisplayListsGenerated; /* 2456 4 */
	CUtlIntrusiveList<CDisplayList> m_debugRenderList; /* 2464 8 */
	int m_nNumDebugDisplayLists; /* 2472 4 */
	RenderTargetDesc_t m_RenderTargetDesc; /* 2480 120 */
	CSceneLayer * m_pStencilAllocationLayer; /* 2600 8 */
	CStencilBitAllocator m_stencilBitAllocator; /* 2608 32 */
	float m_flTonemapScaleOveride; /* 2640 4 */
	CUtlVectorFixed<CFrustum, 2> m_frustumOverrides __attribute__((__aligned__(16))); /* 2656 2288 */
	ConstantBufferHandle_t m_hPerLayerConstants; /* 4944 8 */
	PerViewConstantBuffer_t m_viewConstantBufferData; /* 4952 1088 */
	uint32 m_nPerLayerViewConstantsViewIndex; /* 6040 4 */
	uint m_nAuxiliaryCameraMask; /* 6044 4 */
	LayerComputeSortKeyFunc_t * m_pfnComputeSortKeys; /* 6048 8 */
	CInterlockedInt m_nFrameBufferCopiesThisFrame __attribute__((__aligned__(4))); /* 6056 4 */
	int m_nNumRenderPassClearValues; /* 6060 4 */
	union RenderPassClearValue_t m_renderPassClearValues[9]; /* 6064 144 */
	RenderContextCreationInfo_t m_contextCreationInfo; /* 6208 8 */
	uint32 m_nUniqueRenderPassId; /* 6216 4 */
	CUtlVectorFixedGrowable<CRenderBatchList*, 8> m_renderBatchLists __attribute__((__aligned__(8))); /* 6224 96 */
	CRenderAttributes m_perLayerAttributes; /* 6320 1184 */
	VPlane m_vCullPlane; /* 7504 16 */
	bool m_bHasCullPlane:1; /* 7520: 0 1 */
	bool m_bRenderedAnything:1; /* 7520: 1 1 */
	bool m_bSameRTDescAsLastLayer:1; /* 7520: 2 1 */
	bool m_bCanBenefitFromRenderPass:1; /* 7520: 3 1 */
	bool m_bHasSubPass:1; /* 7520: 4 1 */
	int m_nUnsupportedRenderPassClearFlags; /* 7524 4 */
	CUtlVectorFixedGrowable<ISceneWorld*, 2> m_worldFilter __attribute__((__aligned__(8))); /* 7528 48 */
	SceneViewTimestampQuery_t * m_pTimestampQuery; /* 7576 8 */
	/* ../scenesystem/scenelayer.h:221 */
	CUtlStringToken& GetObjectMatchID(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:226 */
	virtual void SetDynamicContantBufferAttribute(CSceneLayer* , CUtlStringToken, void* , size_t);
private:
	/* ../scenesystem/scenelayer.h:229 */
	void CSceneLayer(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:230 */
	virtual void ~CSceneLayer(CSceneLayer* );
	HRenderTextureStrong m_hColorResolveTarget[8][2]; /* 7584 128 */
	HRenderTextureStrong m_hDepthResolveTarget[2]; /* 7712 16 */
	CUtlIntrusiveListAutoPurge<ConstantBufferDataAttributeSettingRecord_t> m_dynamicConstantBufferAttributes; /* 7728 8 */
	CThreadFastMutex m_queuedViewMutex; /* 7736 24 */
	CUtlVectorFixedGrowable<ISceneView*, 4> m_queuedBeginViews __attribute__((__aligned__(8))); /* 7760 64 */
	CInterlockedInt m_nOutstandingPartitions __attribute__((__aligned__(4))); /* 7824 4 */
	CThreadFastMutex m_layerSemaphoreMutex; /* 7832 24 */
	CUtlLinkedList<ISceneLayer*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<ISceneLayer*, short unsigned int>, short unsigned int> > m_layerSemaphoreDependencies; /* 7856 40 */
	bool m_bDisableReflectionsAndRefractions:1; /* 7896: 0 1 */
	bool m_bDidClearScreen:1; /* 7896: 1 1 */
	bool m_bDisplayListsDiscarded:1; /* 7896: 2 1 */
	bool m_bHasResolveTargets:1; /* 7896: 3 1 */
	bool m_bLayerPerformsFrameBufferCopy:1; /* 7896: 4 1 */
	virtual void SetAssociatedLayer(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer18SetAssociatedLayerEP11ISceneLayer */
	class CRenderBatchList * AddEmbeddedView(class CSceneLayer *, class ISceneView *); /* linkage=_ZN11CSceneLayer15AddEmbeddedViewEP10ISceneView */
	void CopyLayerFields(class CSceneLayer *, class CSceneLayer *); /* linkage=_ZN11CSceneLayer15CopyLayerFieldsEPS_ */
	bool ShouldClearScreen(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer17ShouldClearScreenEv */
	bool SetCanBenefitFromRenderPass(class CSceneLayer *, class CSceneView *); /* linkage=_ZN11CSceneLayer27SetCanBenefitFromRenderPassEP10CSceneView */
	bool CanBenefitFromRenderPass(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer24CanBenefitFromRenderPassEv */
	virtual int GetUniqueSceneLayerIndex(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer24GetUniqueSceneLayerIndexEv */
	/* <34816e7> ../scenesystem/scenelayer.h:269 */
	virtual const class RenderTargetDesc_t  & GetRenderTargetDesc(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19GetRenderTargetDescEv */
	/* <324736b> ../scenesystem/scenelayer.h:264 */
	virtual void SetRenderTargetDesc(class CSceneLayer *, const class RenderTargetDesc_t  &); /* linkage=_ZN11CSceneLayer19SetRenderTargetDescERK18RenderTargetDesc_t */
	/* <3481770> ../scenesystem/scenelayer.cpp:480 */
	virtual bool GetRenderTargetDescDimensions(class CSceneLayer *, int *, int *); /* linkage=_ZN11CSceneLayer29GetRenderTargetDescDimensionsEPiS0_ */
	/* <2f2fe00> ../scenesystem/scenelayer.h:274 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(class CSceneLayer *, bool); /* linkage=_ZN11CSceneLayer53DisableReflectionsAndRefractionsForObjectsInThisLayerEb */
	bool IsReflectionsAndRefractionsForObjectsDisabled(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer45IsReflectionsAndRefractionsForObjectsDisabledEv */
	virtual void OverrideFrustum(class CSceneLayer *, const class CFrustum  &); /* linkage=_ZN11CSceneLayer15OverrideFrustumERK8CFrustum */
	virtual void Override2Frustums(class CSceneLayer *, const class CFrustum  &, const class CFrustum  &); /* linkage=_ZN11CSceneLayer17Override2FrustumsERK8CFrustumS2_ */
	virtual void SetFadeTargetLayer(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer18SetFadeTargetLayerEP11ISceneLayer */
	virtual class ISceneLayer * GetFadeTargetLayer(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer18GetFadeTargetLayerEv */
	bool IsOverridingFrustum(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19IsOverridingFrustumEv */
	virtual void SetTonemapOverrideScaleValue(class CSceneLayer *, float); /* linkage=_ZN11CSceneLayer28SetTonemapOverrideScaleValueEf */
	virtual int FindOrAllocateStencilBit(class CSceneLayer *, class CUtlStringToken); /* linkage=_ZN11CSceneLayer24FindOrAllocateStencilBitE15CUtlStringToken */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(class CSceneLayer *, const char  *, int *, int *); /* linkage=_ZN11CSceneLayer43ParseStringForStencilMaskAndRefValueForReadEPKcPiS2_ */
	virtual void SetAuxiliaryCameraMask(class CSceneLayer *, uint); /* linkage=_ZN11CSceneLayer22SetAuxiliaryCameraMaskEj */
	virtual void SetCustomSortKeyFunction(class CSceneLayer *, LayerComputeSortKeyFunc_t *); /* linkage=_ZN11CSceneLayer24SetCustomSortKeyFunctionEPFvP20CMeshDrawPrimitive_tiE */
	void QueueViewToBeginAfterMe(class CSceneLayer *, class ISceneView *); /* linkage=_ZN11CSceneLayer23QueueViewToBeginAfterMeEP10ISceneView */
	void DecrementOutstandingPartitions(class CSceneLayer *); /* linkage=_ZN11CSceneLayer30DecrementOutstandingPartitionsEv */
	void SetOutstandingPartitions(class CSceneLayer *, int); /* linkage=_ZN11CSceneLayer24SetOutstandingPartitionsEi */
	void SetLayerPerformsFrameBufferCopy(class CSceneLayer *); /* linkage=_ZN11CSceneLayer31SetLayerPerformsFrameBufferCopyEv */
	bool GetLayerPerformsFrameBufferCopy(class CSceneLayer *); /* linkage=_ZN11CSceneLayer31GetLayerPerformsFrameBufferCopyEv */
	/* <3482563> ../scenesystem/scenelayer.cpp:207 */
	void BeginRenderingQueuedViews(class CSceneLayer *); /* linkage=_ZN11CSceneLayer25BeginRenderingQueuedViewsEv */
	bool ClearRenderTargets(class CSceneLayer *, class IRenderContext *, class CSceneView *, int); /* linkage=_ZN11CSceneLayer18ClearRenderTargetsEP14IRenderContextP10CSceneViewi */
	bool BindRenderTargetsAndClear(class CSceneLayer *, class IRenderContext *, class CSceneView *, bool, class SceneSystemPerFrameStats_t &); /* linkage=_ZN11CSceneLayer25BindRenderTargetsAndClearEP14IRenderContextP10CSceneViewbR26SceneSystemPerFrameStats_t */
	/* <3481e09> ../scenesystem/scenelayer.cpp:353 */
	void BindRenderTargets(class CSceneLayer *, class IRenderContext *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN11CSceneLayer17BindRenderTargetsEP14IRenderContextR26SceneSystemPerFrameStats_t */
	void SetViewportAndScissor(class CSceneLayer *, class IRenderContext *, class CSceneView *); /* linkage=_ZN11CSceneLayer21SetViewportAndScissorEP14IRenderContextP10CSceneView */
	/* <34817db> ../scenesystem/scenelayer.cpp:379 */
	virtual void SetLayerNoCull(class CSceneLayer *, bool); /* linkage=_ZN11CSceneLayer14SetLayerNoCullEb */
	bool UseSecondaryContext(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19UseSecondaryContextEv */
	class RenderClearInfo_t GetRenderClearInfo(const class CSceneLayer  *, int); /* linkage=_ZNK11CSceneLayer18GetRenderClearInfoEi */
	virtual void AddSemaphoreDependency(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer22AddSemaphoreDependencyEP11ISceneLayer */
	virtual void SetCullPlane(class CSceneLayer *, const class VPlane  &); /* linkage=_ZN11CSceneLayer12SetCullPlaneERK6VPlane */
	virtual void AddWorldFilter(class CSceneLayer *, class ISceneWorld *); /* linkage=_ZN11CSceneLayer14AddWorldFilterEP11ISceneWorld */
	const class VPlane  & GetCullPlane(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer12GetCullPlaneEv */
	bool CullAgainstPlane(const class CSceneLayer  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK11CSceneLayer16CullAgainstPlaneERK6VectorS2_ */
	bool HasCullPlane(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer12HasCullPlaneEv */
	void AddToRenderPassDesc(class CSceneLayer *, class CSceneView *, class CRenderPassDesc *, int); /* linkage=_ZN11CSceneLayer19AddToRenderPassDescEP10CSceneViewP15CRenderPassDesci */
	void UpdateRenderPassDescStoreOps(class CSceneLayer *, class CSceneView *, class CRenderPassDesc *); /* linkage=_ZN11CSceneLayer28UpdateRenderPassDescStoreOpsEP10CSceneViewP15CRenderPassDesc */
	bool PassesWorldFilter(const class CSceneLayer  *, class ISceneWorld *); /* linkage=_ZNK11CSceneLayer17PassesWorldFilterEP11ISceneWorld */
	/* <34818bf> ../scenesystem/scenelayer.cpp:857 */
	virtual void SetPerfMarker(class CSceneLayer *, const char  *); /* linkage=_ZN11CSceneLayer13SetPerfMarkerEPKc */
	/* <34819b5> ../scenesystem/scenelayer.cpp:871 */
	virtual void ClearPerfMarker(class CSceneLayer *); /* linkage=_ZN11CSceneLayer15ClearPerfMarkerEv */
	virtual void SetWireframeOverride(class CSceneLayer *, bool, float); /* linkage=_ZN11CSceneLayer20SetWireframeOverrideEbf */
	class CUtlStringToken & GetObjectMatchID(class CSceneLayer *); /* linkage=_ZN11CSceneLayer16GetObjectMatchIDEv */
	virtual void SetDynamicContantBufferAttribute(class CSceneLayer *, class CUtlStringToken, void *, size_t); /* linkage=_ZN11CSceneLayer32SetDynamicContantBufferAttributeE15CUtlStringTokenPvm */
	void CSceneLayer(class CSceneLayer *); /* linkage=_ZN11CSceneLayerC4Ev */
	virtual void ~CSceneLayer(class CSceneLayer *); /* linkage=_ZN11CSceneLayerD4Ev */
	void CSceneLayer(class CSceneLayer *, const class CSceneLayer  &); /* linkage=_ZN11CSceneLayerC4ERKS_ */
} __attribute__((__aligned__(16)));

// <02DC4391> ../scenesystem/scenelayer.h:53
// member functions: 104
// member variables: 49
// vtable entries: 23
// class size: 7,904
class CSceneLayer : public ISceneLayer {
public:
	/* class ISceneLayer <ancestor>; */ /* 0 2336 */
	void CSceneLayer(CSceneLayer* , const CSceneLayer& );
	/* ../scenesystem/scenelayer.h:56 */
	virtual void SetAssociatedLayer(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.h:61 */
	CRenderBatchList* AddEmbeddedView(CSceneLayer* , ISceneView* );
	/* ../scenesystem/scenelayer.h:63 */
	void CopyLayerFields(CSceneLayer* , CSceneLayer* );
	/* ../scenesystem/scenelayer.h:66 */
	bool ShouldClearScreen(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:71 */
	bool SetCanBenefitFromRenderPass(CSceneLayer* , CSceneView* );
	/* ../scenesystem/scenelayer.h:72 */
	bool CanBenefitFromRenderPass(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:79 */
	virtual int GetUniqueSceneLayerIndex(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:269 */
	virtual const RenderTargetDesc_t& GetRenderTargetDesc(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:264 */
	virtual void SetRenderTargetDesc(CSceneLayer* , const RenderTargetDesc_t& );
	/* ../scenesystem/scenelayer.h:86 */
	virtual bool GetRenderTargetDescDimensions(CSceneLayer* , int* , int* );
	/* ../scenesystem/scenelayer.h:274 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(CSceneLayer* , bool);
	/* ../scenesystem/scenelayer.h:279 */
	bool IsReflectionsAndRefractionsForObjectsDisabled(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:284 */
	virtual void OverrideFrustum(CSceneLayer* , const CFrustum& );
	/* ../scenesystem/scenelayer.h:290 */
	virtual void Override2Frustums(CSceneLayer* , const CFrustum& , const CFrustum& );
	/* ../scenesystem/scenelayer.h:302 */
	virtual void SetFadeTargetLayer(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.h:307 */
	virtual ISceneLayer* GetFadeTargetLayer(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:297 */
	bool IsOverridingFrustum(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:95 */
	virtual void SetTonemapOverrideScaleValue(CSceneLayer* , float);
	/* ../scenesystem/scenelayer.h:97 */
	virtual int FindOrAllocateStencilBit(CSceneLayer* , CUtlStringToken);
	/* ../scenesystem/scenelayer.h:98 */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(CSceneLayer* , const char* , int* , int* );
	/* ../scenesystem/scenelayer.h:100 */
	virtual void SetAuxiliaryCameraMask(CSceneLayer* , uint);
	/* ../scenesystem/scenelayer.h:103 */
	virtual void SetCustomSortKeyFunction(CSceneLayer* , LayerComputeSortKeyFunc_t* );
	/* ../scenesystem/scenelayer.h:105 */
	void QueueViewToBeginAfterMe(CSceneLayer* , ISceneView* );
	/* ../scenesystem/scenelayer.h:107 */
	void DecrementOutstandingPartitions(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:108 */
	void SetOutstandingPartitions(CSceneLayer* , int);
	/* ../scenesystem/scenelayer.h:109 */
	void SetLayerPerformsFrameBufferCopy(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:110 */
	bool GetLayerPerformsFrameBufferCopy(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:111 */
	void BeginRenderingQueuedViews(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:114 */
	bool ClearRenderTargets(CSceneLayer* , IRenderContext* , CSceneView* , int);
	/* ../scenesystem/scenelayer.h:115 */
	bool BindRenderTargetsAndClear(CSceneLayer* , IRenderContext* , CSceneView* , bool, SceneSystemPerFrameStats_t& );
	/* ../scenesystem/scenelayer.h:116 */
	void BindRenderTargets(CSceneLayer* , IRenderContext* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/scenelayer.h:117 */
	void SetViewportAndScissor(CSceneLayer* , IRenderContext* , CSceneView* );
	/* ../scenesystem/scenelayer.h:118 */
	virtual void SetLayerNoCull(CSceneLayer* , bool);
	/* ../scenesystem/scenelayer.h:120 */
	bool UseSecondaryContext(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:125 */
	RenderClearInfo_t GetRenderClearInfo(const CSceneLayer* , int);
	/* ../scenesystem/scenelayer.h:132 */
	virtual void AddSemaphoreDependency(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.h:134 */
	virtual void SetCullPlane(CSceneLayer* , const VPlane& );
	/* ../scenesystem/scenelayer.h:136 */
	virtual void AddWorldFilter(CSceneLayer* , ISceneWorld* );
	/* ../scenesystem/scenelayer.h:138 */
	const VPlane& GetCullPlane(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:139 */
	bool CullAgainstPlane(const CSceneLayer* , const Vector& , const Vector& );
	/* ../scenesystem/scenelayer.h:140 */
	bool HasCullPlane(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:142 */
	void AddToRenderPassDesc(CSceneLayer* , CSceneView* , CRenderPassDesc* , int);
	/* ../scenesystem/scenelayer.h:143 */
	void UpdateRenderPassDescStoreOps(CSceneLayer* , CSceneView* , CRenderPassDesc* );
	/* ../scenesystem/scenelayer.h:145 */
	bool PassesWorldFilter(const CSceneLayer* , ISceneWorld* );
	/* ../scenesystem/scenelayer.h:147 */
	virtual void SetPerfMarker(CSceneLayer* , const char* );
	/* ../scenesystem/scenelayer.h:148 */
	virtual void ClearPerfMarker(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:150 */
	virtual void SetWireframeOverride(CSceneLayer* , bool, float);
	CSceneLayer * m_pAssociatedLayer; /* 2336 8 */
	CSceneLayer * m_pFadeTargetLayer; /* 2344 8 */
	int m_nUniqueSceneLayerIndex; /* 2352 4 */
	CUtlIntrusiveList<CSceneDrawList> m_pendingDrawList[8]; /* 2360 64 */
	CUtlIntrusiveList<CSceneDrawList> m_savedDrawListsForOptimization; /* 2424 8 */
	CThreadFastMutex m_embeddedViewMutex; /* 2432 24 */
	int m_nNumDisplayListsGenerated; /* 2456 4 */
	CUtlIntrusiveList<CDisplayList> m_debugRenderList; /* 2464 8 */
	int m_nNumDebugDisplayLists; /* 2472 4 */
	RenderTargetDesc_t m_RenderTargetDesc; /* 2480 120 */
	CSceneLayer * m_pStencilAllocationLayer; /* 2600 8 */
	CStencilBitAllocator m_stencilBitAllocator; /* 2608 32 */
	float m_flTonemapScaleOveride; /* 2640 4 */
	CUtlVectorFixed<CFrustum, 2> m_frustumOverrides __attribute__((__aligned__(16))); /* 2656 2288 */
	ConstantBufferHandle_t m_hPerLayerConstants; /* 4944 8 */
	PerViewConstantBuffer_t m_viewConstantBufferData; /* 4952 1088 */
	uint32 m_nPerLayerViewConstantsViewIndex; /* 6040 4 */
	uint m_nAuxiliaryCameraMask; /* 6044 4 */
	LayerComputeSortKeyFunc_t * m_pfnComputeSortKeys; /* 6048 8 */
	CInterlockedInt m_nFrameBufferCopiesThisFrame __attribute__((__aligned__(4))); /* 6056 4 */
	int m_nNumRenderPassClearValues; /* 6060 4 */
	union RenderPassClearValue_t m_renderPassClearValues[9]; /* 6064 144 */
	RenderContextCreationInfo_t m_contextCreationInfo; /* 6208 8 */
	uint32 m_nUniqueRenderPassId; /* 6216 4 */
	CUtlVectorFixedGrowable<CRenderBatchList*, 8> m_renderBatchLists __attribute__((__aligned__(8))); /* 6224 96 */
	CRenderAttributes m_perLayerAttributes; /* 6320 1184 */
	VPlane m_vCullPlane; /* 7504 16 */
	bool m_bHasCullPlane:1; /* 7520: 0 1 */
	bool m_bRenderedAnything:1; /* 7520: 1 1 */
	bool m_bSameRTDescAsLastLayer:1; /* 7520: 2 1 */
	bool m_bCanBenefitFromRenderPass:1; /* 7520: 3 1 */
	bool m_bHasSubPass:1; /* 7520: 4 1 */
	int m_nUnsupportedRenderPassClearFlags; /* 7524 4 */
	CUtlVectorFixedGrowable<ISceneWorld*, 2> m_worldFilter __attribute__((__aligned__(8))); /* 7528 48 */
	SceneViewTimestampQuery_t * m_pTimestampQuery; /* 7576 8 */
	/* ../scenesystem/scenelayer.h:221 */
	CUtlStringToken& GetObjectMatchID(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:226 */
	virtual void SetDynamicContantBufferAttribute(CSceneLayer* , CUtlStringToken, void* , size_t);
private:
	/* ../scenesystem/scenelayer.h:229 */
	void CSceneLayer(CSceneLayer* );
	/* ../scenesystem/scenelayer.h:230 */
	virtual void ~CSceneLayer(CSceneLayer* );
	HRenderTextureStrong m_hColorResolveTarget[8][2]; /* 7584 128 */
	HRenderTextureStrong m_hDepthResolveTarget[2]; /* 7712 16 */
	CUtlIntrusiveListAutoPurge<ConstantBufferDataAttributeSettingRecord_t> m_dynamicConstantBufferAttributes; /* 7728 8 */
	CThreadFastMutex m_queuedViewMutex; /* 7736 24 */
	CUtlVectorFixedGrowable<ISceneView*, 4> m_queuedBeginViews __attribute__((__aligned__(8))); /* 7760 64 */
	CInterlockedInt m_nOutstandingPartitions __attribute__((__aligned__(4))); /* 7824 4 */
	CThreadFastMutex m_layerSemaphoreMutex; /* 7832 24 */
	CUtlLinkedList<ISceneLayer*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<ISceneLayer*, short unsigned int>, short unsigned int> > m_layerSemaphoreDependencies; /* 7856 40 */
	bool m_bDisableReflectionsAndRefractions:1; /* 7896: 0 1 */
	bool m_bDidClearScreen:1; /* 7896: 1 1 */
	bool m_bDisplayListsDiscarded:1; /* 7896: 2 1 */
	bool m_bHasResolveTargets:1; /* 7896: 3 1 */
	bool m_bLayerPerformsFrameBufferCopy:1; /* 7896: 4 1 */
	virtual void SetAssociatedLayer(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer18SetAssociatedLayerEP11ISceneLayer */
	class CRenderBatchList * AddEmbeddedView(class CSceneLayer *, class ISceneView *); /* linkage=_ZN11CSceneLayer15AddEmbeddedViewEP10ISceneView */
	void CopyLayerFields(class CSceneLayer *, class CSceneLayer *); /* linkage=_ZN11CSceneLayer15CopyLayerFieldsEPS_ */
	bool ShouldClearScreen(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer17ShouldClearScreenEv */
	bool SetCanBenefitFromRenderPass(class CSceneLayer *, class CSceneView *); /* linkage=_ZN11CSceneLayer27SetCanBenefitFromRenderPassEP10CSceneView */
	bool CanBenefitFromRenderPass(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer24CanBenefitFromRenderPassEv */
	virtual int GetUniqueSceneLayerIndex(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer24GetUniqueSceneLayerIndexEv */
	/* <34816e7> ../scenesystem/scenelayer.h:269 */
	virtual const class RenderTargetDesc_t  & GetRenderTargetDesc(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19GetRenderTargetDescEv */
	/* <324736b> ../scenesystem/scenelayer.h:264 */
	virtual void SetRenderTargetDesc(class CSceneLayer *, const class RenderTargetDesc_t  &); /* linkage=_ZN11CSceneLayer19SetRenderTargetDescERK18RenderTargetDesc_t */
	/* <3481770> ../scenesystem/scenelayer.cpp:480 */
	virtual bool GetRenderTargetDescDimensions(class CSceneLayer *, int *, int *); /* linkage=_ZN11CSceneLayer29GetRenderTargetDescDimensionsEPiS0_ */
	/* <2f2fe00> ../scenesystem/scenelayer.h:274 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(class CSceneLayer *, bool); /* linkage=_ZN11CSceneLayer53DisableReflectionsAndRefractionsForObjectsInThisLayerEb */
	bool IsReflectionsAndRefractionsForObjectsDisabled(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer45IsReflectionsAndRefractionsForObjectsDisabledEv */
	virtual void OverrideFrustum(class CSceneLayer *, const class CFrustum  &); /* linkage=_ZN11CSceneLayer15OverrideFrustumERK8CFrustum */
	virtual void Override2Frustums(class CSceneLayer *, const class CFrustum  &, const class CFrustum  &); /* linkage=_ZN11CSceneLayer17Override2FrustumsERK8CFrustumS2_ */
	virtual void SetFadeTargetLayer(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer18SetFadeTargetLayerEP11ISceneLayer */
	virtual class ISceneLayer * GetFadeTargetLayer(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer18GetFadeTargetLayerEv */
	bool IsOverridingFrustum(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19IsOverridingFrustumEv */
	virtual void SetTonemapOverrideScaleValue(class CSceneLayer *, float); /* linkage=_ZN11CSceneLayer28SetTonemapOverrideScaleValueEf */
	virtual int FindOrAllocateStencilBit(class CSceneLayer *, class CUtlStringToken); /* linkage=_ZN11CSceneLayer24FindOrAllocateStencilBitE15CUtlStringToken */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(class CSceneLayer *, const char  *, int *, int *); /* linkage=_ZN11CSceneLayer43ParseStringForStencilMaskAndRefValueForReadEPKcPiS2_ */
	virtual void SetAuxiliaryCameraMask(class CSceneLayer *, uint); /* linkage=_ZN11CSceneLayer22SetAuxiliaryCameraMaskEj */
	virtual void SetCustomSortKeyFunction(class CSceneLayer *, LayerComputeSortKeyFunc_t *); /* linkage=_ZN11CSceneLayer24SetCustomSortKeyFunctionEPFvP20CMeshDrawPrimitive_tiE */
	void QueueViewToBeginAfterMe(class CSceneLayer *, class ISceneView *); /* linkage=_ZN11CSceneLayer23QueueViewToBeginAfterMeEP10ISceneView */
	void DecrementOutstandingPartitions(class CSceneLayer *); /* linkage=_ZN11CSceneLayer30DecrementOutstandingPartitionsEv */
	void SetOutstandingPartitions(class CSceneLayer *, int); /* linkage=_ZN11CSceneLayer24SetOutstandingPartitionsEi */
	void SetLayerPerformsFrameBufferCopy(class CSceneLayer *); /* linkage=_ZN11CSceneLayer31SetLayerPerformsFrameBufferCopyEv */
	bool GetLayerPerformsFrameBufferCopy(class CSceneLayer *); /* linkage=_ZN11CSceneLayer31GetLayerPerformsFrameBufferCopyEv */
	/* <3482563> ../scenesystem/scenelayer.cpp:207 */
	void BeginRenderingQueuedViews(class CSceneLayer *); /* linkage=_ZN11CSceneLayer25BeginRenderingQueuedViewsEv */
	bool ClearRenderTargets(class CSceneLayer *, class IRenderContext *, class CSceneView *, int); /* linkage=_ZN11CSceneLayer18ClearRenderTargetsEP14IRenderContextP10CSceneViewi */
	bool BindRenderTargetsAndClear(class CSceneLayer *, class IRenderContext *, class CSceneView *, bool, class SceneSystemPerFrameStats_t &); /* linkage=_ZN11CSceneLayer25BindRenderTargetsAndClearEP14IRenderContextP10CSceneViewbR26SceneSystemPerFrameStats_t */
	/* <3481e09> ../scenesystem/scenelayer.cpp:353 */
	void BindRenderTargets(class CSceneLayer *, class IRenderContext *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN11CSceneLayer17BindRenderTargetsEP14IRenderContextR26SceneSystemPerFrameStats_t */
	void SetViewportAndScissor(class CSceneLayer *, class IRenderContext *, class CSceneView *); /* linkage=_ZN11CSceneLayer21SetViewportAndScissorEP14IRenderContextP10CSceneView */
	/* <34817db> ../scenesystem/scenelayer.cpp:379 */
	virtual void SetLayerNoCull(class CSceneLayer *, bool); /* linkage=_ZN11CSceneLayer14SetLayerNoCullEb */
	bool UseSecondaryContext(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19UseSecondaryContextEv */
	class RenderClearInfo_t GetRenderClearInfo(const class CSceneLayer  *, int); /* linkage=_ZNK11CSceneLayer18GetRenderClearInfoEi */
	virtual void AddSemaphoreDependency(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer22AddSemaphoreDependencyEP11ISceneLayer */
	virtual void SetCullPlane(class CSceneLayer *, const class VPlane  &); /* linkage=_ZN11CSceneLayer12SetCullPlaneERK6VPlane */
	virtual void AddWorldFilter(class CSceneLayer *, class ISceneWorld *); /* linkage=_ZN11CSceneLayer14AddWorldFilterEP11ISceneWorld */
	const class VPlane  & GetCullPlane(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer12GetCullPlaneEv */
	bool CullAgainstPlane(const class CSceneLayer  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK11CSceneLayer16CullAgainstPlaneERK6VectorS2_ */
	bool HasCullPlane(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer12HasCullPlaneEv */
	void AddToRenderPassDesc(class CSceneLayer *, class CSceneView *, class CRenderPassDesc *, int); /* linkage=_ZN11CSceneLayer19AddToRenderPassDescEP10CSceneViewP15CRenderPassDesci */
	void UpdateRenderPassDescStoreOps(class CSceneLayer *, class CSceneView *, class CRenderPassDesc *); /* linkage=_ZN11CSceneLayer28UpdateRenderPassDescStoreOpsEP10CSceneViewP15CRenderPassDesc */
	bool PassesWorldFilter(const class CSceneLayer  *, class ISceneWorld *); /* linkage=_ZNK11CSceneLayer17PassesWorldFilterEP11ISceneWorld */
	/* <34818bf> ../scenesystem/scenelayer.cpp:857 */
	virtual void SetPerfMarker(class CSceneLayer *, const char  *); /* linkage=_ZN11CSceneLayer13SetPerfMarkerEPKc */
	/* <34819b5> ../scenesystem/scenelayer.cpp:871 */
	virtual void ClearPerfMarker(class CSceneLayer *); /* linkage=_ZN11CSceneLayer15ClearPerfMarkerEv */
	virtual void SetWireframeOverride(class CSceneLayer *, bool, float); /* linkage=_ZN11CSceneLayer20SetWireframeOverrideEbf */
	class CUtlStringToken & GetObjectMatchID(class CSceneLayer *); /* linkage=_ZN11CSceneLayer16GetObjectMatchIDEv */
	virtual void SetDynamicContantBufferAttribute(class CSceneLayer *, class CUtlStringToken, void *, size_t); /* linkage=_ZN11CSceneLayer32SetDynamicContantBufferAttributeE15CUtlStringTokenPvm */
	void CSceneLayer(class CSceneLayer *); /* linkage=_ZN11CSceneLayerC4Ev */
	virtual void ~CSceneLayer(class CSceneLayer *); /* linkage=_ZN11CSceneLayerD4Ev */
	void CSceneLayer(class CSceneLayer *, const class CSceneLayer  &); /* linkage=_ZN11CSceneLayerC4ERKS_ */
} __attribute__((__aligned__(16)));

// <0344A5BD> ../scenesystem/scenelayer.h:53
// member functions: 104
// member variables: 49
// vtable entries: 23
// class size: 7,904
class CSceneLayer : public ISceneLayer {
public:
	/* class ISceneLayer <ancestor>; */ /* 0 2336 */
	void CSceneLayer(CSceneLayer* , const CSceneLayer& );
	/* ../scenesystem/scenelayer.h:56 */
	virtual void SetAssociatedLayer(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.cpp:465 */
	CRenderBatchList* AddEmbeddedView(CSceneLayer* , ISceneView* );
	/* ../scenesystem/scenelayer.cpp:404 */
	void CopyLayerFields(CSceneLayer* , CSceneLayer* );
	/* ../scenesystem/scenelayer.h:66 */
	bool ShouldClearScreen(const CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:546 */
	bool SetCanBenefitFromRenderPass(CSceneLayer* , CSceneView* );
	/* ../scenesystem/scenelayer.h:72 */
	bool CanBenefitFromRenderPass(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:79 */
	virtual int GetUniqueSceneLayerIndex(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:269 */
	virtual const RenderTargetDesc_t& GetRenderTargetDesc(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:264 */
	virtual void SetRenderTargetDesc(CSceneLayer* , const RenderTargetDesc_t& );
	/* ../scenesystem/scenelayer.cpp:480 */
	virtual bool GetRenderTargetDescDimensions(CSceneLayer* , int* , int* );
	/* ../scenesystem/scenelayer.h:274 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(CSceneLayer* , bool);
	/* ../scenesystem/scenelayer.h:279 */
	bool IsReflectionsAndRefractionsForObjectsDisabled(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:284 */
	virtual void OverrideFrustum(CSceneLayer* , const CFrustum& );
	/* ../scenesystem/scenelayer.h:290 */
	virtual void Override2Frustums(CSceneLayer* , const CFrustum& , const CFrustum& );
	/* ../scenesystem/scenelayer.h:302 */
	virtual void SetFadeTargetLayer(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.h:307 */
	virtual ISceneLayer* GetFadeTargetLayer(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:297 */
	bool IsOverridingFrustum(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:95 */
	virtual void SetTonemapOverrideScaleValue(CSceneLayer* , float);
	/* ../scenesystem/scenelayer.cpp:72 */
	virtual int FindOrAllocateStencilBit(CSceneLayer* , CUtlStringToken);
	/* ../scenesystem/scenelayer.cpp:84 */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(CSceneLayer* , const char* , int* , int* );
	/* ../scenesystem/scenelayer.cpp:132 */
	virtual void SetAuxiliaryCameraMask(CSceneLayer* , uint);
	/* ../scenesystem/scenelayer.cpp:142 */
	virtual void SetCustomSortKeyFunction(CSceneLayer* , LayerComputeSortKeyFunc_t* );
	/* ../scenesystem/scenelayer.cpp:149 */
	void QueueViewToBeginAfterMe(CSceneLayer* , ISceneView* );
	/* ../scenesystem/scenelayer.cpp:156 */
	void DecrementOutstandingPartitions(CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:185 */
	void SetOutstandingPartitions(CSceneLayer* , int);
	/* ../scenesystem/scenelayer.cpp:194 */
	void SetLayerPerformsFrameBufferCopy(CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:201 */
	bool GetLayerPerformsFrameBufferCopy(CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:207 */
	void BeginRenderingQueuedViews(CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:220 */
	bool ClearRenderTargets(CSceneLayer* , IRenderContext* , CSceneView* , int);
	/* ../scenesystem/scenelayer.cpp:334 */
	bool BindRenderTargetsAndClear(CSceneLayer* , IRenderContext* , CSceneView* , bool, SceneSystemPerFrameStats_t& );
	/* ../scenesystem/scenelayer.cpp:353 */
	void BindRenderTargets(CSceneLayer* , IRenderContext* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/scenelayer.cpp:361 */
	void SetViewportAndScissor(CSceneLayer* , IRenderContext* , CSceneView* );
	/* ../scenesystem/scenelayer.cpp:379 */
	virtual void SetLayerNoCull(CSceneLayer* , bool);
	/* ../scenesystem/scenelayer.h:120 */
	bool UseSecondaryContext(const CSceneLayer* );
	/* ../scenesystem/scenelayer.h:125 */
	RenderClearInfo_t GetRenderClearInfo(const CSceneLayer* , int);
	/* ../scenesystem/scenelayer.cpp:505 */
	virtual void AddSemaphoreDependency(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/scenelayer.cpp:512 */
	virtual void SetCullPlane(CSceneLayer* , const VPlane& );
	/* ../scenesystem/scenelayer.cpp:519 */
	virtual void AddWorldFilter(CSceneLayer* , ISceneWorld* );
	/* ../scenesystem/scenelayer.cpp:525 */
	const VPlane& GetCullPlane(const CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:531 */
	bool CullAgainstPlane(const CSceneLayer* , const Vector& , const Vector& );
	/* ../scenesystem/scenelayer.cpp:540 */
	bool HasCullPlane(const CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:619 */
	void AddToRenderPassDesc(CSceneLayer* , CSceneView* , CRenderPassDesc* , int);
	/* ../scenesystem/scenelayer.cpp:579 */
	void UpdateRenderPassDescStoreOps(CSceneLayer* , CSceneView* , CRenderPassDesc* );
	/* ../scenesystem/scenelayer.cpp:841 */
	bool PassesWorldFilter(const CSceneLayer* , ISceneWorld* );
	/* ../scenesystem/scenelayer.cpp:857 */
	virtual void SetPerfMarker(CSceneLayer* , const char* );
	/* ../scenesystem/scenelayer.cpp:871 */
	virtual void ClearPerfMarker(CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:486 */
	virtual void SetWireframeOverride(CSceneLayer* , bool, float);
	CSceneLayer * m_pAssociatedLayer; /* 2336 8 */
	CSceneLayer * m_pFadeTargetLayer; /* 2344 8 */
	int m_nUniqueSceneLayerIndex; /* 2352 4 */
	CUtlIntrusiveList<CSceneDrawList> m_pendingDrawList[8]; /* 2360 64 */
	CUtlIntrusiveList<CSceneDrawList> m_savedDrawListsForOptimization; /* 2424 8 */
	CThreadFastMutex m_embeddedViewMutex; /* 2432 24 */
	int m_nNumDisplayListsGenerated; /* 2456 4 */
	CUtlIntrusiveList<CDisplayList> m_debugRenderList; /* 2464 8 */
	int m_nNumDebugDisplayLists; /* 2472 4 */
	RenderTargetDesc_t m_RenderTargetDesc; /* 2480 120 */
	CSceneLayer * m_pStencilAllocationLayer; /* 2600 8 */
	CStencilBitAllocator m_stencilBitAllocator; /* 2608 32 */
	float m_flTonemapScaleOveride; /* 2640 4 */
	CUtlVectorFixed<CFrustum, 2> m_frustumOverrides __attribute__((__aligned__(16))); /* 2656 2288 */
	ConstantBufferHandle_t m_hPerLayerConstants; /* 4944 8 */
	PerViewConstantBuffer_t m_viewConstantBufferData; /* 4952 1088 */
	uint32 m_nPerLayerViewConstantsViewIndex; /* 6040 4 */
	uint m_nAuxiliaryCameraMask; /* 6044 4 */
	LayerComputeSortKeyFunc_t * m_pfnComputeSortKeys; /* 6048 8 */
	CInterlockedInt m_nFrameBufferCopiesThisFrame __attribute__((__aligned__(4))); /* 6056 4 */
	int m_nNumRenderPassClearValues; /* 6060 4 */
	union RenderPassClearValue_t m_renderPassClearValues[9]; /* 6064 144 */
	RenderContextCreationInfo_t m_contextCreationInfo; /* 6208 8 */
	uint32 m_nUniqueRenderPassId; /* 6216 4 */
	CUtlVectorFixedGrowable<CRenderBatchList*, 8> m_renderBatchLists __attribute__((__aligned__(8))); /* 6224 96 */
	CRenderAttributes m_perLayerAttributes; /* 6320 1184 */
	VPlane m_vCullPlane; /* 7504 16 */
	bool m_bHasCullPlane:1; /* 7520: 0 1 */
	bool m_bRenderedAnything:1; /* 7520: 1 1 */
	bool m_bSameRTDescAsLastLayer:1; /* 7520: 2 1 */
	bool m_bCanBenefitFromRenderPass:1; /* 7520: 3 1 */
	bool m_bHasSubPass:1; /* 7520: 4 1 */
	int m_nUnsupportedRenderPassClearFlags; /* 7524 4 */
	CUtlVectorFixedGrowable<ISceneWorld*, 2> m_worldFilter __attribute__((__aligned__(8))); /* 7528 48 */
	SceneViewTimestampQuery_t * m_pTimestampQuery; /* 7576 8 */
	/* ../scenesystem/scenelayer.h:221 */
	CUtlStringToken& GetObjectMatchID(CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:62 */
	virtual void SetDynamicContantBufferAttribute(CSceneLayer* , CUtlStringToken, void* , size_t);
private:
	/* ../scenesystem/scenelayer.cpp:29 */
	void CSceneLayer(CSceneLayer* );
	/* ../scenesystem/scenelayer.cpp:49 */
	virtual void ~CSceneLayer(CSceneLayer* );
	HRenderTextureStrong m_hColorResolveTarget[8][2]; /* 7584 128 */
	HRenderTextureStrong m_hDepthResolveTarget[2]; /* 7712 16 */
	CUtlIntrusiveListAutoPurge<ConstantBufferDataAttributeSettingRecord_t> m_dynamicConstantBufferAttributes; /* 7728 8 */
	CThreadFastMutex m_queuedViewMutex; /* 7736 24 */
	CUtlVectorFixedGrowable<ISceneView*, 4> m_queuedBeginViews __attribute__((__aligned__(8))); /* 7760 64 */
	CInterlockedInt m_nOutstandingPartitions __attribute__((__aligned__(4))); /* 7824 4 */
	CThreadFastMutex m_layerSemaphoreMutex; /* 7832 24 */
	CUtlLinkedList<ISceneLayer*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<ISceneLayer*, short unsigned int>, short unsigned int> > m_layerSemaphoreDependencies; /* 7856 40 */
	bool m_bDisableReflectionsAndRefractions:1; /* 7896: 0 1 */
	bool m_bDidClearScreen:1; /* 7896: 1 1 */
	bool m_bDisplayListsDiscarded:1; /* 7896: 2 1 */
	bool m_bHasResolveTargets:1; /* 7896: 3 1 */
	bool m_bLayerPerformsFrameBufferCopy:1; /* 7896: 4 1 */
	virtual void SetAssociatedLayer(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer18SetAssociatedLayerEP11ISceneLayer */
	class CRenderBatchList * AddEmbeddedView(class CSceneLayer *, class ISceneView *); /* linkage=_ZN11CSceneLayer15AddEmbeddedViewEP10ISceneView */
	void CopyLayerFields(class CSceneLayer *, class CSceneLayer *); /* linkage=_ZN11CSceneLayer15CopyLayerFieldsEPS_ */
	bool ShouldClearScreen(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer17ShouldClearScreenEv */
	bool SetCanBenefitFromRenderPass(class CSceneLayer *, class CSceneView *); /* linkage=_ZN11CSceneLayer27SetCanBenefitFromRenderPassEP10CSceneView */
	bool CanBenefitFromRenderPass(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer24CanBenefitFromRenderPassEv */
	virtual int GetUniqueSceneLayerIndex(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer24GetUniqueSceneLayerIndexEv */
	/* <34816e7> ../scenesystem/scenelayer.h:269 */
	virtual const class RenderTargetDesc_t  & GetRenderTargetDesc(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19GetRenderTargetDescEv */
	/* <324736b> ../scenesystem/scenelayer.h:264 */
	virtual void SetRenderTargetDesc(class CSceneLayer *, const class RenderTargetDesc_t  &); /* linkage=_ZN11CSceneLayer19SetRenderTargetDescERK18RenderTargetDesc_t */
	/* <3481770> ../scenesystem/scenelayer.cpp:480 */
	virtual bool GetRenderTargetDescDimensions(class CSceneLayer *, int *, int *); /* linkage=_ZN11CSceneLayer29GetRenderTargetDescDimensionsEPiS0_ */
	/* <2f2fe00> ../scenesystem/scenelayer.h:274 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(class CSceneLayer *, bool); /* linkage=_ZN11CSceneLayer53DisableReflectionsAndRefractionsForObjectsInThisLayerEb */
	bool IsReflectionsAndRefractionsForObjectsDisabled(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer45IsReflectionsAndRefractionsForObjectsDisabledEv */
	virtual void OverrideFrustum(class CSceneLayer *, const class CFrustum  &); /* linkage=_ZN11CSceneLayer15OverrideFrustumERK8CFrustum */
	virtual void Override2Frustums(class CSceneLayer *, const class CFrustum  &, const class CFrustum  &); /* linkage=_ZN11CSceneLayer17Override2FrustumsERK8CFrustumS2_ */
	virtual void SetFadeTargetLayer(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer18SetFadeTargetLayerEP11ISceneLayer */
	virtual class ISceneLayer * GetFadeTargetLayer(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer18GetFadeTargetLayerEv */
	bool IsOverridingFrustum(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19IsOverridingFrustumEv */
	virtual void SetTonemapOverrideScaleValue(class CSceneLayer *, float); /* linkage=_ZN11CSceneLayer28SetTonemapOverrideScaleValueEf */
	virtual int FindOrAllocateStencilBit(class CSceneLayer *, class CUtlStringToken); /* linkage=_ZN11CSceneLayer24FindOrAllocateStencilBitE15CUtlStringToken */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(class CSceneLayer *, const char  *, int *, int *); /* linkage=_ZN11CSceneLayer43ParseStringForStencilMaskAndRefValueForReadEPKcPiS2_ */
	virtual void SetAuxiliaryCameraMask(class CSceneLayer *, uint); /* linkage=_ZN11CSceneLayer22SetAuxiliaryCameraMaskEj */
	virtual void SetCustomSortKeyFunction(class CSceneLayer *, LayerComputeSortKeyFunc_t *); /* linkage=_ZN11CSceneLayer24SetCustomSortKeyFunctionEPFvP20CMeshDrawPrimitive_tiE */
	void QueueViewToBeginAfterMe(class CSceneLayer *, class ISceneView *); /* linkage=_ZN11CSceneLayer23QueueViewToBeginAfterMeEP10ISceneView */
	void DecrementOutstandingPartitions(class CSceneLayer *); /* linkage=_ZN11CSceneLayer30DecrementOutstandingPartitionsEv */
	void SetOutstandingPartitions(class CSceneLayer *, int); /* linkage=_ZN11CSceneLayer24SetOutstandingPartitionsEi */
	void SetLayerPerformsFrameBufferCopy(class CSceneLayer *); /* linkage=_ZN11CSceneLayer31SetLayerPerformsFrameBufferCopyEv */
	bool GetLayerPerformsFrameBufferCopy(class CSceneLayer *); /* linkage=_ZN11CSceneLayer31GetLayerPerformsFrameBufferCopyEv */
	/* <3482563> ../scenesystem/scenelayer.cpp:207 */
	void BeginRenderingQueuedViews(class CSceneLayer *); /* linkage=_ZN11CSceneLayer25BeginRenderingQueuedViewsEv */
	bool ClearRenderTargets(class CSceneLayer *, class IRenderContext *, class CSceneView *, int); /* linkage=_ZN11CSceneLayer18ClearRenderTargetsEP14IRenderContextP10CSceneViewi */
	bool BindRenderTargetsAndClear(class CSceneLayer *, class IRenderContext *, class CSceneView *, bool, class SceneSystemPerFrameStats_t &); /* linkage=_ZN11CSceneLayer25BindRenderTargetsAndClearEP14IRenderContextP10CSceneViewbR26SceneSystemPerFrameStats_t */
	/* <3481e09> ../scenesystem/scenelayer.cpp:353 */
	void BindRenderTargets(class CSceneLayer *, class IRenderContext *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN11CSceneLayer17BindRenderTargetsEP14IRenderContextR26SceneSystemPerFrameStats_t */
	void SetViewportAndScissor(class CSceneLayer *, class IRenderContext *, class CSceneView *); /* linkage=_ZN11CSceneLayer21SetViewportAndScissorEP14IRenderContextP10CSceneView */
	/* <34817db> ../scenesystem/scenelayer.cpp:379 */
	virtual void SetLayerNoCull(class CSceneLayer *, bool); /* linkage=_ZN11CSceneLayer14SetLayerNoCullEb */
	bool UseSecondaryContext(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19UseSecondaryContextEv */
	class RenderClearInfo_t GetRenderClearInfo(const class CSceneLayer  *, int); /* linkage=_ZNK11CSceneLayer18GetRenderClearInfoEi */
	virtual void AddSemaphoreDependency(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer22AddSemaphoreDependencyEP11ISceneLayer */
	virtual void SetCullPlane(class CSceneLayer *, const class VPlane  &); /* linkage=_ZN11CSceneLayer12SetCullPlaneERK6VPlane */
	virtual void AddWorldFilter(class CSceneLayer *, class ISceneWorld *); /* linkage=_ZN11CSceneLayer14AddWorldFilterEP11ISceneWorld */
	const class VPlane  & GetCullPlane(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer12GetCullPlaneEv */
	bool CullAgainstPlane(const class CSceneLayer  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK11CSceneLayer16CullAgainstPlaneERK6VectorS2_ */
	bool HasCullPlane(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer12HasCullPlaneEv */
	void AddToRenderPassDesc(class CSceneLayer *, class CSceneView *, class CRenderPassDesc *, int); /* linkage=_ZN11CSceneLayer19AddToRenderPassDescEP10CSceneViewP15CRenderPassDesci */
	void UpdateRenderPassDescStoreOps(class CSceneLayer *, class CSceneView *, class CRenderPassDesc *); /* linkage=_ZN11CSceneLayer28UpdateRenderPassDescStoreOpsEP10CSceneViewP15CRenderPassDesc */
	bool PassesWorldFilter(const class CSceneLayer  *, class ISceneWorld *); /* linkage=_ZNK11CSceneLayer17PassesWorldFilterEP11ISceneWorld */
	/* <34818bf> ../scenesystem/scenelayer.cpp:857 */
	virtual void SetPerfMarker(class CSceneLayer *, const char  *); /* linkage=_ZN11CSceneLayer13SetPerfMarkerEPKc */
	/* <34819b5> ../scenesystem/scenelayer.cpp:871 */
	virtual void ClearPerfMarker(class CSceneLayer *); /* linkage=_ZN11CSceneLayer15ClearPerfMarkerEv */
	virtual void SetWireframeOverride(class CSceneLayer *, bool, float); /* linkage=_ZN11CSceneLayer20SetWireframeOverrideEbf */
	class CUtlStringToken & GetObjectMatchID(class CSceneLayer *); /* linkage=_ZN11CSceneLayer16GetObjectMatchIDEv */
	virtual void SetDynamicContantBufferAttribute(class CSceneLayer *, class CUtlStringToken, void *, size_t); /* linkage=_ZN11CSceneLayer32SetDynamicContantBufferAttributeE15CUtlStringTokenPvm */
	void CSceneLayer(class CSceneLayer *); /* linkage=_ZN11CSceneLayerC4Ev */
	virtual void ~CSceneLayer(class CSceneLayer *); /* linkage=_ZN11CSceneLayerD4Ev */
	void CSceneLayer(class CSceneLayer *, const class CSceneLayer  &); /* linkage=_ZN11CSceneLayerC4ERKS_ */
} __attribute__((__aligned__(16)));

// <039BFD60> ../scenesystem/utils/../scenelayer.h:53
// member functions: 103
// member variables: 49
// vtable entries: 23
// class size: 7,904
class CSceneLayer : public ISceneLayer {
public:
	/* class ISceneLayer <ancestor>; */ /* 0 2336 */
	/* ../scenesystem/utils/../scenelayer.h:56 */
	virtual void SetAssociatedLayer(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:61 */
	CRenderBatchList* AddEmbeddedView(CSceneLayer* , ISceneView* );
	/* ../scenesystem/utils/../scenelayer.h:63 */
	void CopyLayerFields(CSceneLayer* , CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:66 */
	bool ShouldClearScreen(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:71 */
	bool SetCanBenefitFromRenderPass(CSceneLayer* , CSceneView* );
	/* ../scenesystem/utils/../scenelayer.h:72 */
	bool CanBenefitFromRenderPass(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:79 */
	virtual int GetUniqueSceneLayerIndex(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:269 */
	virtual const RenderTargetDesc_t& GetRenderTargetDesc(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:264 */
	virtual void SetRenderTargetDesc(CSceneLayer* , const RenderTargetDesc_t& );
	/* ../scenesystem/utils/../scenelayer.h:86 */
	virtual bool GetRenderTargetDescDimensions(CSceneLayer* , int* , int* );
	/* ../scenesystem/utils/../scenelayer.h:274 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(CSceneLayer* , bool);
	/* ../scenesystem/utils/../scenelayer.h:279 */
	bool IsReflectionsAndRefractionsForObjectsDisabled(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:284 */
	virtual void OverrideFrustum(CSceneLayer* , const CFrustum& );
	/* ../scenesystem/utils/../scenelayer.h:290 */
	virtual void Override2Frustums(CSceneLayer* , const CFrustum& , const CFrustum& );
	/* ../scenesystem/utils/../scenelayer.h:302 */
	virtual void SetFadeTargetLayer(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:307 */
	virtual ISceneLayer* GetFadeTargetLayer(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:297 */
	bool IsOverridingFrustum(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:95 */
	virtual void SetTonemapOverrideScaleValue(CSceneLayer* , float);
	/* ../scenesystem/utils/../scenelayer.h:97 */
	virtual int FindOrAllocateStencilBit(CSceneLayer* , CUtlStringToken);
	/* ../scenesystem/utils/../scenelayer.h:98 */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(CSceneLayer* , const char* , int* , int* );
	/* ../scenesystem/utils/../scenelayer.h:100 */
	virtual void SetAuxiliaryCameraMask(CSceneLayer* , uint);
	/* ../scenesystem/utils/../scenelayer.h:103 */
	virtual void SetCustomSortKeyFunction(CSceneLayer* , LayerComputeSortKeyFunc_t* );
	/* ../scenesystem/utils/../scenelayer.h:105 */
	void QueueViewToBeginAfterMe(CSceneLayer* , ISceneView* );
	/* ../scenesystem/utils/../scenelayer.h:107 */
	void DecrementOutstandingPartitions(CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:108 */
	void SetOutstandingPartitions(CSceneLayer* , int);
	/* ../scenesystem/utils/../scenelayer.h:109 */
	void SetLayerPerformsFrameBufferCopy(CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:110 */
	bool GetLayerPerformsFrameBufferCopy(CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:111 */
	void BeginRenderingQueuedViews(CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:114 */
	bool ClearRenderTargets(CSceneLayer* , IRenderContext* , CSceneView* , int);
	/* ../scenesystem/utils/../scenelayer.h:115 */
	bool BindRenderTargetsAndClear(CSceneLayer* , IRenderContext* , CSceneView* , bool, SceneSystemPerFrameStats_t& );
	/* ../scenesystem/utils/../scenelayer.h:116 */
	void BindRenderTargets(CSceneLayer* , IRenderContext* , SceneSystemPerFrameStats_t& );
	/* ../scenesystem/utils/../scenelayer.h:117 */
	void SetViewportAndScissor(CSceneLayer* , IRenderContext* , CSceneView* );
	/* ../scenesystem/utils/../scenelayer.h:118 */
	virtual void SetLayerNoCull(CSceneLayer* , bool);
	/* ../scenesystem/utils/../scenelayer.h:120 */
	bool UseSecondaryContext(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:125 */
	RenderClearInfo_t GetRenderClearInfo(const CSceneLayer* , int);
	/* ../scenesystem/utils/../scenelayer.h:132 */
	virtual void AddSemaphoreDependency(CSceneLayer* , ISceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:134 */
	virtual void SetCullPlane(CSceneLayer* , const VPlane& );
	/* ../scenesystem/utils/../scenelayer.h:136 */
	virtual void AddWorldFilter(CSceneLayer* , ISceneWorld* );
	/* ../scenesystem/utils/../scenelayer.h:138 */
	const VPlane& GetCullPlane(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:139 */
	bool CullAgainstPlane(const CSceneLayer* , const Vector& , const Vector& );
	/* ../scenesystem/utils/../scenelayer.h:140 */
	bool HasCullPlane(const CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:142 */
	void AddToRenderPassDesc(CSceneLayer* , CSceneView* , CRenderPassDesc* , int);
	/* ../scenesystem/utils/../scenelayer.h:143 */
	void UpdateRenderPassDescStoreOps(CSceneLayer* , CSceneView* , CRenderPassDesc* );
	/* ../scenesystem/utils/../scenelayer.h:145 */
	bool PassesWorldFilter(const CSceneLayer* , ISceneWorld* );
	/* ../scenesystem/utils/../scenelayer.h:147 */
	virtual void SetPerfMarker(CSceneLayer* , const char* );
	/* ../scenesystem/utils/../scenelayer.h:148 */
	virtual void ClearPerfMarker(CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:150 */
	virtual void SetWireframeOverride(CSceneLayer* , bool, float);
	CSceneLayer * m_pAssociatedLayer; /* 2336 8 */
	CSceneLayer * m_pFadeTargetLayer; /* 2344 8 */
	int m_nUniqueSceneLayerIndex; /* 2352 4 */
	CUtlIntrusiveList<CSceneDrawList> m_pendingDrawList[8]; /* 2360 64 */
	CUtlIntrusiveList<CSceneDrawList> m_savedDrawListsForOptimization; /* 2424 8 */
	CThreadFastMutex m_embeddedViewMutex; /* 2432 24 */
	int m_nNumDisplayListsGenerated; /* 2456 4 */
	CUtlIntrusiveList<CDisplayList> m_debugRenderList; /* 2464 8 */
	int m_nNumDebugDisplayLists; /* 2472 4 */
	RenderTargetDesc_t m_RenderTargetDesc; /* 2480 120 */
	CSceneLayer * m_pStencilAllocationLayer; /* 2600 8 */
	CStencilBitAllocator m_stencilBitAllocator; /* 2608 32 */
	float m_flTonemapScaleOveride; /* 2640 4 */
	CUtlVectorFixed<CFrustum, 2> m_frustumOverrides __attribute__((__aligned__(16))); /* 2656 2288 */
	ConstantBufferHandle_t m_hPerLayerConstants; /* 4944 8 */
	PerViewConstantBuffer_t m_viewConstantBufferData; /* 4952 1088 */
	uint32 m_nPerLayerViewConstantsViewIndex; /* 6040 4 */
	uint m_nAuxiliaryCameraMask; /* 6044 4 */
	LayerComputeSortKeyFunc_t * m_pfnComputeSortKeys; /* 6048 8 */
	CInterlockedInt m_nFrameBufferCopiesThisFrame __attribute__((__aligned__(4))); /* 6056 4 */
	int m_nNumRenderPassClearValues; /* 6060 4 */
	union RenderPassClearValue_t m_renderPassClearValues[9]; /* 6064 144 */
	RenderContextCreationInfo_t m_contextCreationInfo; /* 6208 8 */
	uint32 m_nUniqueRenderPassId; /* 6216 4 */
	CUtlVectorFixedGrowable<CRenderBatchList*, 8> m_renderBatchLists __attribute__((__aligned__(8))); /* 6224 96 */
	CRenderAttributes m_perLayerAttributes; /* 6320 1184 */
	VPlane m_vCullPlane; /* 7504 16 */
	bool m_bHasCullPlane:1; /* 7520: 0 1 */
	bool m_bRenderedAnything:1; /* 7520: 1 1 */
	bool m_bSameRTDescAsLastLayer:1; /* 7520: 2 1 */
	bool m_bCanBenefitFromRenderPass:1; /* 7520: 3 1 */
	bool m_bHasSubPass:1; /* 7520: 4 1 */
	int m_nUnsupportedRenderPassClearFlags; /* 7524 4 */
	CUtlVectorFixedGrowable<ISceneWorld*, 2> m_worldFilter __attribute__((__aligned__(8))); /* 7528 48 */
	SceneViewTimestampQuery_t * m_pTimestampQuery; /* 7576 8 */
	/* ../scenesystem/utils/../scenelayer.h:221 */
	CUtlStringToken& GetObjectMatchID(CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:226 */
	virtual void SetDynamicContantBufferAttribute(CSceneLayer* , CUtlStringToken, void* , size_t);
private:
	/* ../scenesystem/utils/../scenelayer.h:229 */
	void CSceneLayer(CSceneLayer* );
	/* ../scenesystem/utils/../scenelayer.h:230 */
	virtual void ~CSceneLayer(CSceneLayer* );
	HRenderTextureStrong m_hColorResolveTarget[8][2]; /* 7584 128 */
	HRenderTextureStrong m_hDepthResolveTarget[2]; /* 7712 16 */
	CUtlIntrusiveListAutoPurge<ConstantBufferDataAttributeSettingRecord_t> m_dynamicConstantBufferAttributes; /* 7728 8 */
	CThreadFastMutex m_queuedViewMutex; /* 7736 24 */
	CUtlVectorFixedGrowable<ISceneView*, 4> m_queuedBeginViews __attribute__((__aligned__(8))); /* 7760 64 */
	CInterlockedInt m_nOutstandingPartitions __attribute__((__aligned__(4))); /* 7824 4 */
	CThreadFastMutex m_layerSemaphoreMutex; /* 7832 24 */
	CUtlLinkedList<ISceneLayer*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<ISceneLayer*, short unsigned int>, short unsigned int> > m_layerSemaphoreDependencies; /* 7856 40 */
	bool m_bDisableReflectionsAndRefractions:1; /* 7896: 0 1 */
	bool m_bDidClearScreen:1; /* 7896: 1 1 */
	bool m_bDisplayListsDiscarded:1; /* 7896: 2 1 */
	bool m_bHasResolveTargets:1; /* 7896: 3 1 */
	bool m_bLayerPerformsFrameBufferCopy:1; /* 7896: 4 1 */
	virtual void SetAssociatedLayer(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer18SetAssociatedLayerEP11ISceneLayer */
	class CRenderBatchList * AddEmbeddedView(class CSceneLayer *, class ISceneView *); /* linkage=_ZN11CSceneLayer15AddEmbeddedViewEP10ISceneView */
	void CopyLayerFields(class CSceneLayer *, class CSceneLayer *); /* linkage=_ZN11CSceneLayer15CopyLayerFieldsEPS_ */
	bool ShouldClearScreen(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer17ShouldClearScreenEv */
	bool SetCanBenefitFromRenderPass(class CSceneLayer *, class CSceneView *); /* linkage=_ZN11CSceneLayer27SetCanBenefitFromRenderPassEP10CSceneView */
	bool CanBenefitFromRenderPass(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer24CanBenefitFromRenderPassEv */
	virtual int GetUniqueSceneLayerIndex(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer24GetUniqueSceneLayerIndexEv */
	/* <34816e7> ../scenesystem/scenelayer.h:269 */
	virtual const class RenderTargetDesc_t  & GetRenderTargetDesc(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19GetRenderTargetDescEv */
	/* <324736b> ../scenesystem/scenelayer.h:264 */
	virtual void SetRenderTargetDesc(class CSceneLayer *, const class RenderTargetDesc_t  &); /* linkage=_ZN11CSceneLayer19SetRenderTargetDescERK18RenderTargetDesc_t */
	/* <3481770> ../scenesystem/scenelayer.cpp:480 */
	virtual bool GetRenderTargetDescDimensions(class CSceneLayer *, int *, int *); /* linkage=_ZN11CSceneLayer29GetRenderTargetDescDimensionsEPiS0_ */
	/* <2f2fe00> ../scenesystem/scenelayer.h:274 */
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(class CSceneLayer *, bool); /* linkage=_ZN11CSceneLayer53DisableReflectionsAndRefractionsForObjectsInThisLayerEb */
	bool IsReflectionsAndRefractionsForObjectsDisabled(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer45IsReflectionsAndRefractionsForObjectsDisabledEv */
	virtual void OverrideFrustum(class CSceneLayer *, const class CFrustum  &); /* linkage=_ZN11CSceneLayer15OverrideFrustumERK8CFrustum */
	virtual void Override2Frustums(class CSceneLayer *, const class CFrustum  &, const class CFrustum  &); /* linkage=_ZN11CSceneLayer17Override2FrustumsERK8CFrustumS2_ */
	virtual void SetFadeTargetLayer(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer18SetFadeTargetLayerEP11ISceneLayer */
	virtual class ISceneLayer * GetFadeTargetLayer(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer18GetFadeTargetLayerEv */
	bool IsOverridingFrustum(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19IsOverridingFrustumEv */
	virtual void SetTonemapOverrideScaleValue(class CSceneLayer *, float); /* linkage=_ZN11CSceneLayer28SetTonemapOverrideScaleValueEf */
	virtual int FindOrAllocateStencilBit(class CSceneLayer *, class CUtlStringToken); /* linkage=_ZN11CSceneLayer24FindOrAllocateStencilBitE15CUtlStringToken */
	virtual bool ParseStringForStencilMaskAndRefValueForRead(class CSceneLayer *, const char  *, int *, int *); /* linkage=_ZN11CSceneLayer43ParseStringForStencilMaskAndRefValueForReadEPKcPiS2_ */
	virtual void SetAuxiliaryCameraMask(class CSceneLayer *, uint); /* linkage=_ZN11CSceneLayer22SetAuxiliaryCameraMaskEj */
	virtual void SetCustomSortKeyFunction(class CSceneLayer *, LayerComputeSortKeyFunc_t *); /* linkage=_ZN11CSceneLayer24SetCustomSortKeyFunctionEPFvP20CMeshDrawPrimitive_tiE */
	void QueueViewToBeginAfterMe(class CSceneLayer *, class ISceneView *); /* linkage=_ZN11CSceneLayer23QueueViewToBeginAfterMeEP10ISceneView */
	void DecrementOutstandingPartitions(class CSceneLayer *); /* linkage=_ZN11CSceneLayer30DecrementOutstandingPartitionsEv */
	void SetOutstandingPartitions(class CSceneLayer *, int); /* linkage=_ZN11CSceneLayer24SetOutstandingPartitionsEi */
	void SetLayerPerformsFrameBufferCopy(class CSceneLayer *); /* linkage=_ZN11CSceneLayer31SetLayerPerformsFrameBufferCopyEv */
	bool GetLayerPerformsFrameBufferCopy(class CSceneLayer *); /* linkage=_ZN11CSceneLayer31GetLayerPerformsFrameBufferCopyEv */
	/* <3482563> ../scenesystem/scenelayer.cpp:207 */
	void BeginRenderingQueuedViews(class CSceneLayer *); /* linkage=_ZN11CSceneLayer25BeginRenderingQueuedViewsEv */
	bool ClearRenderTargets(class CSceneLayer *, class IRenderContext *, class CSceneView *, int); /* linkage=_ZN11CSceneLayer18ClearRenderTargetsEP14IRenderContextP10CSceneViewi */
	bool BindRenderTargetsAndClear(class CSceneLayer *, class IRenderContext *, class CSceneView *, bool, class SceneSystemPerFrameStats_t &); /* linkage=_ZN11CSceneLayer25BindRenderTargetsAndClearEP14IRenderContextP10CSceneViewbR26SceneSystemPerFrameStats_t */
	/* <3481e09> ../scenesystem/scenelayer.cpp:353 */
	void BindRenderTargets(class CSceneLayer *, class IRenderContext *, class SceneSystemPerFrameStats_t &); /* linkage=_ZN11CSceneLayer17BindRenderTargetsEP14IRenderContextR26SceneSystemPerFrameStats_t */
	void SetViewportAndScissor(class CSceneLayer *, class IRenderContext *, class CSceneView *); /* linkage=_ZN11CSceneLayer21SetViewportAndScissorEP14IRenderContextP10CSceneView */
	/* <34817db> ../scenesystem/scenelayer.cpp:379 */
	virtual void SetLayerNoCull(class CSceneLayer *, bool); /* linkage=_ZN11CSceneLayer14SetLayerNoCullEb */
	bool UseSecondaryContext(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer19UseSecondaryContextEv */
	class RenderClearInfo_t GetRenderClearInfo(const class CSceneLayer  *, int); /* linkage=_ZNK11CSceneLayer18GetRenderClearInfoEi */
	virtual void AddSemaphoreDependency(class CSceneLayer *, class ISceneLayer *); /* linkage=_ZN11CSceneLayer22AddSemaphoreDependencyEP11ISceneLayer */
	virtual void SetCullPlane(class CSceneLayer *, const class VPlane  &); /* linkage=_ZN11CSceneLayer12SetCullPlaneERK6VPlane */
	virtual void AddWorldFilter(class CSceneLayer *, class ISceneWorld *); /* linkage=_ZN11CSceneLayer14AddWorldFilterEP11ISceneWorld */
	const class VPlane  & GetCullPlane(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer12GetCullPlaneEv */
	bool CullAgainstPlane(const class CSceneLayer  *, const class Vector  &, const class Vector  &); /* linkage=_ZNK11CSceneLayer16CullAgainstPlaneERK6VectorS2_ */
	bool HasCullPlane(const class CSceneLayer  *); /* linkage=_ZNK11CSceneLayer12HasCullPlaneEv */
	void AddToRenderPassDesc(class CSceneLayer *, class CSceneView *, class CRenderPassDesc *, int); /* linkage=_ZN11CSceneLayer19AddToRenderPassDescEP10CSceneViewP15CRenderPassDesci */
	void UpdateRenderPassDescStoreOps(class CSceneLayer *, class CSceneView *, class CRenderPassDesc *); /* linkage=_ZN11CSceneLayer28UpdateRenderPassDescStoreOpsEP10CSceneViewP15CRenderPassDesc */
	bool PassesWorldFilter(const class CSceneLayer  *, class ISceneWorld *); /* linkage=_ZNK11CSceneLayer17PassesWorldFilterEP11ISceneWorld */
	/* <34818bf> ../scenesystem/scenelayer.cpp:857 */
	virtual void SetPerfMarker(class CSceneLayer *, const char  *); /* linkage=_ZN11CSceneLayer13SetPerfMarkerEPKc */
	/* <34819b5> ../scenesystem/scenelayer.cpp:871 */
	virtual void ClearPerfMarker(class CSceneLayer *); /* linkage=_ZN11CSceneLayer15ClearPerfMarkerEv */
	virtual void SetWireframeOverride(class CSceneLayer *, bool, float); /* linkage=_ZN11CSceneLayer20SetWireframeOverrideEbf */
	class CUtlStringToken & GetObjectMatchID(class CSceneLayer *); /* linkage=_ZN11CSceneLayer16GetObjectMatchIDEv */
	virtual void SetDynamicContantBufferAttribute(class CSceneLayer *, class CUtlStringToken, void *, size_t); /* linkage=_ZN11CSceneLayer32SetDynamicContantBufferAttributeE15CUtlStringTokenPvm */
	void CSceneLayer(class CSceneLayer *); /* linkage=_ZN11CSceneLayerC4Ev */
	virtual void ~CSceneLayer(class CSceneLayer *); /* linkage=_ZN11CSceneLayerD4Ev */
	void CSceneLayer(class CSceneLayer *, const class CSceneLayer  &); /* linkage=_ZN11CSceneLayerC4ERKS_ */
} __attribute__((__aligned__(16)));

// <040B28EA> ../scenesystem/scenelayer.h:56
void CSceneLayer::SetAssociatedLayer(ISceneLayer* pLayer)
{
} /* size: 12 */

// <02F1AD88> ../scenesystem/scenelayer.h:66
inline void CSceneLayer::ShouldClearScreen()
{
} /* size: 0 */

// <0323BCE9> ../scenesystem/scenelayer.h:72
inline void CSceneLayer::CanBenefitFromRenderPass()
{
} /* size: 0 */

// <040B28BC> ../scenesystem/scenelayer.h:79
void CSceneLayer::GetUniqueSceneLayerIndex()
{
} /* size: 11 */

// <040B287F> ../scenesystem/scenelayer.h:95
void CSceneLayer::SetTonemapOverrideScaleValue(float flScale)
{
} /* size: 13 */

// <0330AFFF> ../scenesystem/scenelayer.h:120
inline void CSceneLayer::UseSecondaryContext()
{
} /* size: 0 */

// <03475CBC> ../scenesystem/scenelayer.h:125
inline void CSceneLayer::GetRenderClearInfo(int nStencilBit)
{
} /* size: 0 */

// <02E0EB80> ../scenesystem/scenelayer.h:229
void CSceneLayer::CSceneLayer()
{
} /* size: 0 */

// <040ACBF4> ../scenesystem/scenelayer.h:230
void CSceneLayer::~CSceneLayer()
{
} /* size: 0 */

// <040B2773> ../scenesystem/scenelayer.h:264
// function calls: 3
void CSceneLayer::SetRenderTargetDesc(const RenderTargetDesc_t& desc)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 228
	RenderTargetDesc_t::Init(
		const RenderTargetDesc_t& desc);  // 266
} /* size: 169, inline expansions: 3 (492 bytes) */

// <0323BC58> ../scenesystem/scenelayer.h:264
inline void CSceneLayer::SetRenderTargetDesc(const RenderTargetDesc_t& desc)
{
} /* size: 0 */

// <040B2745> ../scenesystem/scenelayer.h:269
void CSceneLayer::GetRenderTargetDesc()
{
} /* size: 12 */

// <03475B94> ../scenesystem/scenelayer.h:269
inline void CSceneLayer::GetRenderTargetDesc()
{
} /* size: 0 */

// <040B2702> ../scenesystem/scenelayer.h:274
void CSceneLayer::DisableReflectionsAndRefractionsForObjectsInThisLayer(bool bOnOff)
{
} /* size: 29 */

// <02F1AC9F> ../scenesystem/scenelayer.h:274
inline void CSceneLayer::DisableReflectionsAndRefractionsForObjectsInThisLayer(bool bOnOff)
{
} /* size: 0 */

// <040B259B> ../scenesystem/scenelayer.h:284
// function calls: 4
void CSceneLayer::OverrideFrustum(const CFrustum& frustum)
{
	AlignedByteArrayExplicit_t<2, CFrustum, 16>::Base(); // 268
	CUtlMemoryFixed<CFrustum, 2>::Base(); // 272
	CUtlMemoryFixed<CFrustum, 2>::operator[](
			int i);  // 588
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::operator[](
			int i);  // 287
} /* size: 53, inline expansions: 4 (28 bytes) */

// <040B239A> ../scenesystem/scenelayer.h:290
// function calls: 6
void CSceneLayer::Override2Frustums(const CFrustum& frustum1, const CFrustum& frustum2)
{
	AlignedByteArrayExplicit_t<2, CFrustum, 16>::Base(); // 268
	CUtlMemoryFixed<CFrustum, 2>::Base(); // 272
	CUtlMemoryFixed<CFrustum, 2>::operator[](
			int i);  // 588
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::operator[](
			int i);  // 293
	CUtlMemoryFixed<CFrustum, 2>::operator[](
			int i);  // 588
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::operator[](
			int i);  // 294
} /* size: 83, inline expansions: 6 (42 bytes) */

// <02F1A916> ../scenesystem/scenelayer.h:297
inline void CSceneLayer::IsOverridingFrustum()
{
} /* size: 0 */

// <040B235D> ../scenesystem/scenelayer.h:302
void CSceneLayer::SetFadeTargetLayer(ISceneLayer* pLayer)
{
} /* size: 12 */

// <040B232F> ../scenesystem/scenelayer.h:307
void CSceneLayer::GetFadeTargetLayer()
{
} /* size: 12 */

