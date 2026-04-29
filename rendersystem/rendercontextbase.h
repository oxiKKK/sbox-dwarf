
//
// rendersystem/rendercontextbase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 56
//	classes: 2
//

// <00102AF9> rendersystem/rendercontextbase.h:70
inline RenderChangeFlags_t CHANGE_FLAG_SAMPLERSTATES(RenderShaderType_t nType)
{
} /* size: 0 */

// <000E1751> rendersystem/rendercontextbase.h:78
// member functions: 204
// member variables: 35
// vtable entries: 85
// class size: 5,680
class CRenderContextBase : public IRenderContext, public IStreamBuilderCallback<CCommandStream> {
	/* rendersystem/rendercontextbase.h:282 */
	struct BoundCB_t {
		ConstantBufferHandle_t m_hConstantBuffer; /* 0 8 */
		uint32 m_nView; /* 8 4 */
	};
public:
	/* class IRenderContext <ancestor>; */ /* 0 1232 */
	/* class IStreamBuilderCallback<CCommandStream> <ancestor>; */ /* 1232 8 */
	void CRenderContextBase(CRenderContextBase* , const CRenderContextBase& );
	/* rendersystem/rendercontextbase.cpp:167 */
	virtual IRenderDevice* GetDevice(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:582 */
	virtual void DependsOn(CRenderContextBase* , CDependencyDescriptor* );
	/* rendersystem/rendercontextbase.cpp:588 */
	virtual void Satisfies(CRenderContextBase* , CDependencyDescriptor* );
	/* rendersystem/rendercontextbase.cpp:241 */
	virtual void SetViewports(CRenderContextBase* , int, const RenderViewport_t* );
	/* rendersystem/rendercontextbase.cpp:248 */
	virtual void GetViewport(CRenderContextBase* , RenderViewport_t* , int);
	/* rendersystem/rendercontextbase.cpp:639 */
	virtual bool Present(CRenderContextBase* , SwapChainHandle_t, int);
	/* rendersystem/rendercontextbase.h:88 */
	virtual void ForceDeviceLost(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:299 */
	virtual void SetStatesToDefault(CRenderContextBase* , uint32, uint32);
	/* rendersystem/rendercontextbase.h:92 */
	virtual void PrepareTextureForUse(CRenderContextBase* , HRenderTexture, RenderColorSpace_t, int, int);
	/* rendersystem/rendercontextbase.cpp:409 */
	virtual void SetSamplerStatePS(CRenderContextBase* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* rendersystem/rendercontextbase.cpp:357 */
	virtual void SetSamplerStateVS(CRenderContextBase* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* rendersystem/rendercontextbase.cpp:461 */
	virtual void SetSamplerState(CRenderContextBase* , int32, const CSamplerStateDesc* , RenderShaderType_t);
	/* rendersystem/rendercontextbase.h:101 */
	virtual void BindDescriptorSets(CRenderContextBase* , int32, int32, const RenderDescriptorSetHandle_t* , const int32* , const uint32** );
	/* rendersystem/rendercontextbase.h:102 */
	virtual void FillAndBindDynamicDescriptorSet(CRenderContextBase* , RenderDescriptorSetHandle_t, int32, int32, const RenderDescriptorBinding_t* , bool, const int32* , const uint32** );
	/* rendersystem/rendercontextbase.h:103 */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(CRenderContextBase* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* , bool);
	/* rendersystem/rendercontextbase.h:105 */
	virtual void BeginRenderPass(CRenderContextBase* , RenderPassHandle_t, int32, const union RenderPassClearValue_t* , const Rect_t& );
	/* rendersystem/rendercontextbase.h:106 */
	virtual void NextSubPass(CRenderContextBase* );
	/* rendersystem/rendercontextbase.h:107 */
	virtual void EndRenderPass(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:948 */
	virtual unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(CRenderContextBase* );
	/* rendersystem/rendercontextbase.h:109 */
	virtual void TextureBarrier(CRenderContextBase* , int32, const HRenderTexture* , const RenderImageLayout_t* , bool);
	/* rendersystem/rendercontextbase.h:110 */
	virtual void UAVBarrier(CRenderContextBase* , int32, const RenderUAVBarrier_t* );
	/* rendersystem/rendercontextbase.h:111 */
	virtual void BufferBarrier(CRenderContextBase* , int32, const RenderBufferBarrier_t* );
	/* rendersystem/rendercontextbase.h:113 */
	virtual void PushConstants(CRenderContextBase* , const void* , uint32);
	/* rendersystem/rendercontextbase.cpp:598 */
	virtual void BindRenderTargets(CRenderContextBase* , const RenderTargetDesc_t& );
	/* rendersystem/rendercontextbase.cpp:783 */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(CRenderContextBase* , const RsRasterizerStateDesc_t* );
	/* rendersystem/rendercontextbase.cpp:789 */
	virtual void SetRasterizerState(CRenderContextBase* , RsRasterizerStateHandle_t);
	/* rendersystem/rendercontextbase.cpp:799 */
	virtual void SetCullMode(CRenderContextBase* , RenderCullMode_t);
	/* rendersystem/rendercontextbase.cpp:826 */
	virtual void SetOverrideRasterizerState(CRenderContextBase* , RsRasterizerStateHandle_t);
	/* rendersystem/rendercontextbase.cpp:836 */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(CRenderContextBase* , const RsDepthStencilStateDesc_t* );
	/* rendersystem/rendercontextbase.cpp:843 */
	virtual void SetDepthStencilState(CRenderContextBase* , RsDepthStencilStateHandle_t, uint32);
	/* rendersystem/rendercontextbase.cpp:852 */
	virtual void SetOverrideDepthStencilState(CRenderContextBase* , RsDepthStencilStateHandle_t, uint32);
	/* rendersystem/rendercontextbase.cpp:859 */
	virtual void SetZBufferMode(CRenderContextBase* , RenderZBufferMode_t);
	/* rendersystem/rendercontextbase.cpp:866 */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(CRenderContextBase* , const RsBlendStateDesc_t* );
	/* rendersystem/rendercontextbase.cpp:873 */
	virtual void SetBlendState(CRenderContextBase* , RsBlendStateHandle_t, const float* , uint32);
	/* rendersystem/rendercontextbase.cpp:880 */
	virtual void SetBlendMode(CRenderContextBase* , RenderBlendMode_t, const float* );
	/* rendersystem/rendercontextbase.cpp:887 */
	virtual void SetTessellationState(CRenderContextBase* , bool, uint32);
	/* rendersystem/rendercontextbase.h:129 */
	virtual void BeginPixEvent(CRenderContextBase* , Color, const char* );
	/* rendersystem/rendercontextbase.h:463 */
	virtual void BeginPixEvent(CRenderContextBase* , const char* );
	/* rendersystem/rendercontextbase.h:131 */
	virtual void EndPixEvent(CRenderContextBase* );
	/* rendersystem/rendercontextbase.h:132 */
	virtual void PixSetMarker(CRenderContextBase* , Color, const char* );
	/* rendersystem/rendercontextbase.h:470 */
	virtual void PixSetMarker(CRenderContextBase* , const char* );
	/* rendersystem/rendercontextbase.cpp:506 */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(CRenderContextBase* , uint32, DynamicLockDesc_t* );
	/* rendersystem/rendercontextbase.cpp:528 */
	virtual void UnlockDynamicConstantBuffer(CRenderContextBase* , ConstantBufferHandle_t, uint32);
	/* rendersystem/rendercontextbase.cpp:553 */
	virtual void GetMaxToRender(CRenderContextBase* , int, int, int* , int* );
	/* rendersystem/rendercontextbase.h:378 */
	virtual CRenderAttributes& GetAttributesForModify(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:604 */
	virtual void Submit(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:617 */
	virtual void SubmitSecondaryDisplayList(CRenderContextBase* , CDisplayList* , bool);
	/* rendersystem/rendercontextbase.cpp:256 */
	virtual void SetDebugFlag(CRenderContextBase* , RenderDebugFlag_t, bool);
	/* rendersystem/rendercontextbase.cpp:268 */
	virtual void SetDebugString(CRenderContextBase* , const char* , ...);
	/* rendersystem/rendercontextbase.cpp:278 */
	virtual void VaSetDebugString(CRenderContextBase* , const char* , typedef __va_list_tag __va_list_tag* );
	/* rendersystem/rendercontextbase.cpp:290 */
	virtual const char* GetDebugString(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:814 */
	virtual void FlipHandedness(CRenderContextBase* , bool);
	/* rendersystem/rendercontextbase.cpp:479 */
	virtual void SetSamplerStates(CRenderContextBase* , int, int, const CSamplerStateDesc* , RenderShaderType_t);
	/* rendersystem/rendercontextbase.h:156 */
	virtual void SetAlphaTestState(CRenderContextBase* , bool, float, RsComparison_t);
	/* rendersystem/rendercontextbase.cpp:919 */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:942 */
	virtual void SemaphoreWaitAtBegin(CRenderContextBase* , RenderSemaphoreHandle_t);
	/* rendersystem/rendercontextbase.h:162 */
	virtual void SetSteamVrCompositorTexture(CRenderContextBase* , HRenderTexture, HRenderTexture);
	/* rendersystem/rendercontextbase.h:164 */
	virtual void CopyFromVolumeTexture(CRenderContextBase* , HRenderTexture, HRenderTexture, Rect3D_t* , int, int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* rendersystem/rendercontextbase.cpp:894 */
	virtual void MarkTexturesUsedThisFrame(CRenderContextBase* , int, const texture_use_info_t* );
	/* rendersystem/rendercontextbase.h:170 */
	virtual void DiscardRenderTarget(CRenderContextBase* , RenderClearFlags_t, uint);
	/* rendersystem/rendercontextbase.h:172 */
	virtual void SetTilingModeHint(CRenderContextBase* , RenderTilingModeHint_t);
	/* rendersystem/rendercontextbase.h:174 */
	virtual void BuildBLAS(CRenderContextBase* , RenderBLASHandle_t, BLASTriangleData_t* , int);
	/* rendersystem/rendercontextbase.h:175 */
	virtual void CompactBLAS(CRenderContextBase* , RenderBLASHandle_t, RenderBLASHandle_t);
	/* rendersystem/rendercontextbase.h:176 */
	virtual void BuildTLAS(CRenderContextBase* , RenderTLASHandle_t, TLASInstance_t* , int);
	/* rendersystem/rendercontextbase.h:177 */
	virtual void UpdateRayTraceShaderBindingTable(CRenderContextBase* , IRaytraceShaderBindingTable* );
	/* rendersystem/rendercontextbase.h:178 */
	virtual void BindRayTracingPipeline(CRenderContextBase* , RenderRayTracePipelineHandle_t);
	/* rendersystem/rendercontextbase.h:179 */
	virtual void TraceRays(CRenderContextBase* , IRaytraceShaderBindingTable* , uint32, uint32, uint32);
	/* rendersystem/rendercontextbase.h:180 */
	virtual void TraceRaysIndirect(CRenderContextBase* , IRaytraceShaderBindingTable* , RenderBufferHandle_t, uint32);
	/* rendersystem/rendercontextbase.cpp:184 */
	virtual void SetIsSecondaryContext(CRenderContextBase* , RenderContextCreationInfo_t* , bool);
	/* rendersystem/rendercontextbase.h:187 */
	virtual void* GetScratchBuffer(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:904 */
	virtual void OnReleaseRenderContext(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:176 */
	virtual void OnNewStreamStarted(CRenderContextBase* , CCommandStream* );
	/* rendersystem/rendercontextbase.h:193 */
	virtual void BeginQuery(CRenderContextBase* , RenderQueryHandle_t);
	/* rendersystem/rendercontextbase.h:194 */
	virtual void EndQuery(CRenderContextBase* , RenderQueryHandle_t);
	/* rendersystem/rendercontextbase.h:197 */
	virtual void SetDepthBoundsTestEnabled(CRenderContextBase* , bool);
	/* rendersystem/rendercontextbase.h:198 */
	virtual void SetDepthBounds(CRenderContextBase* , float, float);
	/* rendersystem/rendercontextbase.h:201 */
	virtual void ForceFlushGPU(CRenderContextBase* );
	/* rendersystem/rendercontextbase.h:203 */
	virtual void CopyBuffer(CRenderContextBase* , IndexBufferHandle_t, IndexBufferHandle_t);
	/* rendersystem/rendercontextbase.cpp:112 */
	void CRenderContextBase(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:158 */
	virtual void ~CRenderContextBase(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:664 */
	virtual void QueuePresent(CRenderContextBase* , SwapChainHandle_t, int);
	/* rendersystem/rendercontextbase.cpp:194 */
	virtual void SetDefaultState(CRenderContextBase* );
	/* rendersystem/rendercontextbase.h:332 */
	CCommandStreamBuilder* GetStreamBuilder(CRenderContextBase* );
	/* rendersystem/rendercontextbase.cpp:679 */
	virtual void Flush(CRenderContextBase* );
	/* rendersystem/rendercontextbase.h:223 */
	void AssertThreadOwnershipDbg(const CRenderContextBase* );
	/* rendersystem/rendercontextbase.h:225 */
	virtual bool IsOwnedByCurrentThread(const CRenderContextBase* );
	/* rendersystem/rendercontextbase.h:227 */
	void SetContextFrameCount(CRenderContextBase* , int);
	/* rendersystem/rendercontextbase.h:228 */
	void SetContextId(CRenderContextBase* , int);
	/* rendersystem/rendercontextbase.h:229 */
	void SetReleaseTextureReadLock(CRenderContextBase* , bool);
	/* rendersystem/rendercontextbase.cpp:698 */
	int SubrectPixelDifference(int, int, int, int, int, int, int);
	/* rendersystem/rendercontextbase.cpp:739 */
	int SubrectPixelDifference(HRenderTexture, int, int, int, int, int);
	/* rendersystem/rendercontextbase.cpp:745 */
	int SubrectPixelDifference(const RenderTargetDesc_t& , int, const RenderClearInfo_t& , int, int, int, int, int);
	/* rendersystem/rendercontextbase.h:440 */
	void SetBoundConstantBuffer(CRenderContextBase* , RenderShaderType_t, ConstantBufferHandle_t, uint32, int32);
	/* rendersystem/rendercontextbase.h:448 */
	void RebindConstantBufferIfBound(CRenderContextBase* , ConstantBufferHandle_t);
	/* rendersystem/rendercontextbase.cpp:926 */
	virtual void StartRenderDocCapture(CRenderContextBase* , PlatWindow_t);
	/* rendersystem/rendercontextbase.cpp:934 */
	virtual void EndRenderDocCapture(CRenderContextBase* , PlatWindow_t);
protected:
	uint m_nChangeFlags; /* 1240 4 */
	uint m_nDebugFlags; /* 1244 4 */
	RenderCullMode_t m_eCullMode; /* 1248 4 */
	RenderBlendMode_t m_eBlendMode; /* 1252 4 */
	RenderZBufferMode_t m_eZBufferMode; /* 1256 4 */
	CCommandStreamBuilder m_StreamBuilder; /* 1264 32 */
	uint8 m_nViewportCount; /* 1296 1 */
	uint8 m_nHandedness; /* 1297 1 */
	RenderViewport_t m_pViewports[16]; /* 1300 448 */
	int32 m_nHighestResourceBound[4]; /* 1748 16 */
	int32 m_nHighestSamplerSet[4]; /* 1764 16 */
	int32 m_nHighestUAVBound[4]; /* 1780 16 */
	CSamplerStateDesc m_SamplerStates[4][32]; /* 1796 2560 */
	uint32 m_nDirtySamplerState[4]; /* 4356 16 */
	BoundCB_t m_boundConstantBuffers[4][14]; /* 4376 896 */
	int32_t m_nHighestConstantBufferIndexBound[4]; /* 5272 16 */
	void * m_pCurrRasterizerState; /* 5288 8 */
	void * m_pCurrDepthStencilState; /* 5296 8 */
	uint32 m_nCurrDepthStencilRef; /* 5304 4 */
	void * m_pCurrBlendState; /* 5312 8 */
	float m_flCurrBlendFactor[4]; /* 5320 16 */
	uint32 m_nCurrMultisampleMask; /* 5336 4 */
	bool m_bTessellationEnabled; /* 5340 1 */
	uint32 m_nInputPatchSize; /* 5344 4 */
	RsRasterizerStateHandle_t m_hOverrideRasterizerState; /* 5352 8 */
	RsDepthStencilStateHandle_t m_hOverrideDepthStencilState; /* 5360 8 */
	uint32 m_nOverrideStencilRef; /* 5368 4 */
	bool m_bLockAttributes:1; /* 5372: 0 1 */
	bool m_bReleaseTextureReadLock:1; /* 5372: 1 1 */
	int m_nContextFrame; /* 5376 4 */
	int m_nContextId; /* 5380 4 */
	char m_szDebugString[256]; /* 5384 256 */
	/* rendersystem/rendercontextbase.h:385 */
	void SetRasterizerStateInternal(CRenderContextBase* , void* );
	/* rendersystem/rendercontextbase.h:395 */
	void SetDepthStencilStateInternal(CRenderContextBase* , void* , uint32);
	/* rendersystem/rendercontextbase.h:406 */
	void SetBlendStateInternal(CRenderContextBase* , void* , const float* , uint32);
	/* rendersystem/rendercontextbase.cpp:967 */
	virtual IRenderContext* GetSubContext(CRenderContextBase* , const ISceneLayer* );
	CUtlVector<IRenderContext*, CUtlMemory<IRenderContext*, int> > m_SubContexts; /* 5640 32 */
	/* rendersystem/rendercontextbase.cpp:1016 */
	void SubmitSubContexts(CRenderContextBase* );
	void CRenderContextBase(class CRenderContextBase *, const class CRenderContextBase  &); /* linkage=_ZN18CRenderContextBaseC4ERKS_ */
	/* <1052e3> rendersystem/rendercontextbase.cpp:167 */
	virtual class IRenderDevice * GetDevice(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase9GetDeviceEv */
	virtual void DependsOn(class CRenderContextBase *, class CDependencyDescriptor *); /* linkage=_ZN18CRenderContextBase9DependsOnEP21CDependencyDescriptor */
	virtual void Satisfies(class CRenderContextBase *, class CDependencyDescriptor *); /* linkage=_ZN18CRenderContextBase9SatisfiesEP21CDependencyDescriptor */
	virtual void SetViewports(class CRenderContextBase *, int, const class RenderViewport_t  *); /* linkage=_ZN18CRenderContextBase12SetViewportsEiPK16RenderViewport_t */
	virtual void GetViewport(class CRenderContextBase *, class RenderViewport_t *, int); /* linkage=_ZN18CRenderContextBase11GetViewportEP16RenderViewport_ti */
	virtual bool Present(class CRenderContextBase *, SwapChainHandle_t, int); /* linkage=_ZN18CRenderContextBase7PresentEP19SwapChainHandle_t__i */
	virtual void ForceDeviceLost(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase15ForceDeviceLostEv */
	virtual void SetStatesToDefault(class CRenderContextBase *, uint32, uint32); /* linkage=_ZN18CRenderContextBase18SetStatesToDefaultEjj */
	virtual void PrepareTextureForUse(class CRenderContextBase *, HRenderTexture, enum RenderColorSpace_t, int, int); /* linkage=_ZN18CRenderContextBase20PrepareTextureForUseE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_tii */
	virtual void SetSamplerStatePS(class CRenderContextBase *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN18CRenderContextBase17SetSamplerStatePSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerStateVS(class CRenderContextBase *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN18CRenderContextBase17SetSamplerStateVSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerState(class CRenderContextBase *, int32, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN18CRenderContextBase15SetSamplerStateEiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void BindDescriptorSets(class CRenderContextBase *, int32, int32, const RenderDescriptorSetHandle_t  *, const int32  *, const uint32  * *); /* linkage=_ZN18CRenderContextBase18BindDescriptorSetsEiiPKP29RenderDescriptorSetHandle_t__PKiPPKj */
	virtual void FillAndBindDynamicDescriptorSet(class CRenderContextBase *, RenderDescriptorSetHandle_t, int32, int32, const class RenderDescriptorBinding_t  *, bool, const int32  *, const uint32  * *); /* linkage=_ZN18CRenderContextBase31FillAndBindDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iiPK25RenderDescriptorBinding_tbPKiPPKj */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(class CRenderContextBase *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN18CRenderContextBase24FillDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_tb */
	virtual void BeginRenderPass(class CRenderContextBase *, class RenderPassHandle_t, int32, const union RenderPassClearValue_t  *, const class Rect_t  &); /* linkage=_ZN18CRenderContextBase15BeginRenderPassE18RenderPassHandle_tiPK22RenderPassClearValue_tRK6Rect_t */
	virtual void NextSubPass(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase11NextSubPassEv */
	virtual void EndRenderPass(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase13EndRenderPassEv */
	virtual class unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase16GetBarrierHelperEv */
	virtual void TextureBarrier(class CRenderContextBase *, int32, const HRenderTexture  *, const enum RenderImageLayout_t  *, bool); /* linkage=_ZN18CRenderContextBase14TextureBarrierEiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK19RenderImageLayout_tb */
	virtual void UAVBarrier(class CRenderContextBase *, int32, const class RenderUAVBarrier_t  *); /* linkage=_ZN18CRenderContextBase10UAVBarrierEiPK18RenderUAVBarrier_t */
	virtual void BufferBarrier(class CRenderContextBase *, int32, const class RenderBufferBarrier_t  *); /* linkage=_ZN18CRenderContextBase13BufferBarrierEiPK21RenderBufferBarrier_t */
	virtual void PushConstants(class CRenderContextBase *, const void  *, uint32); /* linkage=_ZN18CRenderContextBase13PushConstantsEPKvj */
	/* <1055fe> rendersystem/rendercontextbase.cpp:598 */
	virtual void BindRenderTargets(class CRenderContextBase *, const class RenderTargetDesc_t  &); /* linkage=_ZN18CRenderContextBase17BindRenderTargetsERK18RenderTargetDesc_t */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(class CRenderContextBase *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN18CRenderContextBase27FindOrCreateRasterizerStateEPK23RsRasterizerStateDesc_t */
	/* <105365> rendersystem/rendercontextbase.cpp:789 */
	virtual void SetRasterizerState(class CRenderContextBase *, RsRasterizerStateHandle_t); /* linkage=_ZN18CRenderContextBase18SetRasterizerStateEP27RsRasterizerStateHandle_t__ */
	/* <105683> rendersystem/rendercontextbase.cpp:799 */
	virtual void SetCullMode(class CRenderContextBase *, enum RenderCullMode_t); /* linkage=_ZN18CRenderContextBase11SetCullModeE16RenderCullMode_t */
	virtual void SetOverrideRasterizerState(class CRenderContextBase *, RsRasterizerStateHandle_t); /* linkage=_ZN18CRenderContextBase26SetOverrideRasterizerStateEP27RsRasterizerStateHandle_t__ */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(class CRenderContextBase *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN18CRenderContextBase29FindOrCreateDepthStencilStateEPK25RsDepthStencilStateDesc_t */
	/* <1053e6> rendersystem/rendercontextbase.cpp:843 */
	virtual void SetDepthStencilState(class CRenderContextBase *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN18CRenderContextBase20SetDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	/* <105475> rendersystem/rendercontextbase.cpp:852 */
	virtual void SetOverrideDepthStencilState(class CRenderContextBase *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN18CRenderContextBase28SetOverrideDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	/* <1054ac> rendersystem/rendercontextbase.cpp:859 */
	virtual void SetZBufferMode(class CRenderContextBase *, enum RenderZBufferMode_t); /* linkage=_ZN18CRenderContextBase14SetZBufferModeE19RenderZBufferMode_t */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(class CRenderContextBase *, const class RsBlendStateDesc_t  *); /* linkage=_ZN18CRenderContextBase22FindOrCreateBlendStateEPK18RsBlendStateDesc_t */
	/* <107445> rendersystem/rendercontextbase.cpp:873 */
	virtual void SetBlendState(class CRenderContextBase *, RsBlendStateHandle_t, const float  *, uint32); /* linkage=_ZN18CRenderContextBase13SetBlendStateEP22RsBlendStateHandle_t__PKfj */
	/* <107686> rendersystem/rendercontextbase.cpp:880 */
	virtual void SetBlendMode(class CRenderContextBase *, enum RenderBlendMode_t, const float  *); /* linkage=_ZN18CRenderContextBase12SetBlendModeE17RenderBlendMode_tPKf */
	virtual void SetTessellationState(class CRenderContextBase *, bool, uint32); /* linkage=_ZN18CRenderContextBase20SetTessellationStateEbj */
	/* <10520e> rendersystem/rendercontextbase.h:129 */
	virtual void BeginPixEvent(class CRenderContextBase *, class Color, const char  *); /* linkage=_ZN18CRenderContextBase13BeginPixEventE5ColorPKc */
	virtual void BeginPixEvent(class CRenderContextBase *, const char  *); /* linkage=_ZN18CRenderContextBase13BeginPixEventEPKc */
	virtual void EndPixEvent(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase11EndPixEventEv */
	/* <105245> rendersystem/rendercontextbase.h:132 */
	virtual void PixSetMarker(class CRenderContextBase *, class Color, const char  *); /* linkage=_ZN18CRenderContextBase12PixSetMarkerE5ColorPKc */
	virtual void PixSetMarker(class CRenderContextBase *, const char  *); /* linkage=_ZN18CRenderContextBase12PixSetMarkerEPKc */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(class CRenderContextBase *, uint32, class DynamicLockDesc_t *); /* linkage=_ZN18CRenderContextBase25LockDynamicConstantBufferEjP17DynamicLockDesc_t */
	/* <106f38> rendersystem/rendercontextbase.cpp:528 */
	virtual void UnlockDynamicConstantBuffer(class CRenderContextBase *, ConstantBufferHandle_t, uint32); /* linkage=_ZN18CRenderContextBase27UnlockDynamicConstantBufferEP24ConstantBufferHandle_t__j */
	virtual void GetMaxToRender(class CRenderContextBase *, int, int, int *, int *); /* linkage=_ZN18CRenderContextBase14GetMaxToRenderEiiPiS0_ */
	/* <105521> rendersystem/rendercontextbase.h:378 */
	virtual class CRenderAttributes & GetAttributesForModify(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase22GetAttributesForModifyEv */
	virtual void Submit(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase6SubmitEv */
	virtual void SubmitSecondaryDisplayList(class CRenderContextBase *, class CDisplayList *, bool); /* linkage=_ZN18CRenderContextBase26SubmitSecondaryDisplayListEP12CDisplayListb */
	/* <10555c> rendersystem/rendercontextbase.cpp:256 */
	virtual void SetDebugFlag(class CRenderContextBase *, enum RenderDebugFlag_t, bool); /* linkage=_ZN18CRenderContextBase12SetDebugFlagE17RenderDebugFlag_tb */
	virtual void SetDebugString(class CRenderContextBase *, const char  *, ...); /* linkage=_ZN18CRenderContextBase14SetDebugStringEPKcz */
	/* <10576a> rendersystem/rendercontextbase.cpp:278 */
	virtual void VaSetDebugString(class CRenderContextBase *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN18CRenderContextBase16VaSetDebugStringEPKcP13__va_list_tag */
	/* <10533c> rendersystem/rendercontextbase.cpp:290 */
	virtual const char  * GetDebugString(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase14GetDebugStringEv */
	virtual void FlipHandedness(class CRenderContextBase *, bool); /* linkage=_ZN18CRenderContextBase14FlipHandednessEb */
	virtual void SetSamplerStates(class CRenderContextBase *, int, int, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN18CRenderContextBase16SetSamplerStatesEiiPK17CSamplerStateDesc18RenderShaderType_t */
	/* <10527c> rendersystem/rendercontextbase.h:156 */
	virtual void SetAlphaTestState(class CRenderContextBase *, bool, float, enum RsComparison_t); /* linkage=_ZN18CRenderContextBase17SetAlphaTestStateEbf14RsComparison_t */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase20SemaphoreSignalAtEndEv */
	virtual void SemaphoreWaitAtBegin(class CRenderContextBase *, RenderSemaphoreHandle_t); /* linkage=_ZN18CRenderContextBase20SemaphoreWaitAtBeginEP25RenderSemaphoreHandle_t__ */
	virtual void SetSteamVrCompositorTexture(class CRenderContextBase *, HRenderTexture, HRenderTexture); /* linkage=_ZN18CRenderContextBase27SetSteamVrCompositorTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_ */
	virtual void CopyFromVolumeTexture(class CRenderContextBase *, HRenderTexture, HRenderTexture, class Rect3D_t *, int, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN18CRenderContextBase21CopyFromVolumeTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P8Rect3D_tiiijjjj18CopyTextureFlags_t */
	virtual void MarkTexturesUsedThisFrame(class CRenderContextBase *, int, const class texture_use_info_t  *); /* linkage=_ZN18CRenderContextBase25MarkTexturesUsedThisFrameEiPK18texture_use_info_t */
	virtual void DiscardRenderTarget(class CRenderContextBase *, enum RenderClearFlags_t, uint); /* linkage=_ZN18CRenderContextBase19DiscardRenderTargetE18RenderClearFlags_tj */
	virtual void SetTilingModeHint(class CRenderContextBase *, enum RenderTilingModeHint_t); /* linkage=_ZN18CRenderContextBase17SetTilingModeHintE22RenderTilingModeHint_t */
	virtual void BuildBLAS(class CRenderContextBase *, RenderBLASHandle_t, class BLASTriangleData_t *, int); /* linkage=_ZN18CRenderContextBase9BuildBLASEP20RenderBLASHandle_t__P18BLASTriangleData_ti */
	virtual void CompactBLAS(class CRenderContextBase *, RenderBLASHandle_t, RenderBLASHandle_t); /* linkage=_ZN18CRenderContextBase11CompactBLASEP20RenderBLASHandle_t__S1_ */
	virtual void BuildTLAS(class CRenderContextBase *, RenderTLASHandle_t, class TLASInstance_t *, int); /* linkage=_ZN18CRenderContextBase9BuildTLASEP20RenderTLASHandle_t__P14TLASInstance_ti */
	virtual void UpdateRayTraceShaderBindingTable(class CRenderContextBase *, class IRaytraceShaderBindingTable *); /* linkage=_ZN18CRenderContextBase32UpdateRayTraceShaderBindingTableEP27IRaytraceShaderBindingTable */
	virtual void BindRayTracingPipeline(class CRenderContextBase *, RenderRayTracePipelineHandle_t); /* linkage=_ZN18CRenderContextBase22BindRayTracingPipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual void TraceRays(class CRenderContextBase *, class IRaytraceShaderBindingTable *, uint32, uint32, uint32); /* linkage=_ZN18CRenderContextBase9TraceRaysEP27IRaytraceShaderBindingTablejjj */
	virtual void TraceRaysIndirect(class CRenderContextBase *, class IRaytraceShaderBindingTable *, RenderBufferHandle_t, uint32); /* linkage=_ZN18CRenderContextBase17TraceRaysIndirectEP27IRaytraceShaderBindingTableP22RenderBufferHandle_t__j */
	virtual void SetIsSecondaryContext(class CRenderContextBase *, class RenderContextCreationInfo_t *, bool); /* linkage=_ZN18CRenderContextBase21SetIsSecondaryContextEP27RenderContextCreationInfo_tb */
	virtual void * GetScratchBuffer(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase16GetScratchBufferEv */
	/* <107b1b> rendersystem/rendercontextbase.cpp:904 */
	virtual void OnReleaseRenderContext(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase22OnReleaseRenderContextEv */
	/* <10530c> rendersystem/rendercontextbase.cpp:176 */
	virtual void OnNewStreamStarted(class CRenderContextBase *, class CCommandStream *); /* linkage=_ZN18CRenderContextBase18OnNewStreamStartedEP14CCommandStream */
	virtual void BeginQuery(class CRenderContextBase *, RenderQueryHandle_t); /* linkage=_ZN18CRenderContextBase10BeginQueryEP21RenderQueryHandle_t__ */
	virtual void EndQuery(class CRenderContextBase *, RenderQueryHandle_t); /* linkage=_ZN18CRenderContextBase8EndQueryEP21RenderQueryHandle_t__ */
	virtual void SetDepthBoundsTestEnabled(class CRenderContextBase *, bool); /* linkage=_ZN18CRenderContextBase25SetDepthBoundsTestEnabledEb */
	virtual void SetDepthBounds(class CRenderContextBase *, float, float); /* linkage=_ZN18CRenderContextBase14SetDepthBoundsEff */
	/* <1aeaef> rendersystem/rendercontextbase.h:201 */
	virtual void ForceFlushGPU(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase13ForceFlushGPUEv */
	virtual void CopyBuffer(class CRenderContextBase *, IndexBufferHandle_t, IndexBufferHandle_t); /* linkage=_ZN18CRenderContextBase10CopyBufferEP21IndexBufferHandle_t__S1_ */
	void CRenderContextBase(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBaseC4Ev */
	virtual void ~CRenderContextBase(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBaseD4Ev */
	virtual void QueuePresent(class CRenderContextBase *, SwapChainHandle_t, int); /* linkage=_ZN18CRenderContextBase12QueuePresentEP19SwapChainHandle_t__i */
	virtual void SetDefaultState(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase15SetDefaultStateEv */
	class CCommandStreamBuilder * GetStreamBuilder(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase16GetStreamBuilderEv */
	virtual void Flush(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase5FlushEv */
	void AssertThreadOwnershipDbg(const class CRenderContextBase  *); /* linkage=_ZNK18CRenderContextBase24AssertThreadOwnershipDbgEv */
	/* <1052ba> rendersystem/rendercontextbase.h:225 */
	virtual bool IsOwnedByCurrentThread(const class CRenderContextBase  *); /* linkage=_ZNK18CRenderContextBase22IsOwnedByCurrentThreadEv */
	void SetContextFrameCount(class CRenderContextBase *, int); /* linkage=_ZN18CRenderContextBase20SetContextFrameCountEi */
	void SetContextId(class CRenderContextBase *, int); /* linkage=_ZN18CRenderContextBase12SetContextIdEi */
	void SetReleaseTextureReadLock(class CRenderContextBase *, bool); /* linkage=_ZN18CRenderContextBase25SetReleaseTextureReadLockEb */
	/* <1078b3> rendersystem/rendercontextbase.cpp:698 */
	int SubrectPixelDifference(int, int, int, int, int, int, int); /* linkage=_ZN18CRenderContextBase22SubrectPixelDifferenceEiiiiiii */
	/* <107963> rendersystem/rendercontextbase.cpp:739 */
	int SubrectPixelDifference(HRenderTexture, int, int, int, int, int); /* linkage=_ZN18CRenderContextBase22SubrectPixelDifferenceE11CWeakHandleI31InfoForResourceTypeCTextureBaseEiiiii */
	int SubrectPixelDifference(const class RenderTargetDesc_t  &, int, const class RenderClearInfo_t  &, int, int, int, int, int); /* linkage=_ZN18CRenderContextBase22SubrectPixelDifferenceERK18RenderTargetDesc_tiRK17RenderClearInfo_tiiiii */
	void SetBoundConstantBuffer(class CRenderContextBase *, enum RenderShaderType_t, ConstantBufferHandle_t, uint32, int32); /* linkage=_ZN18CRenderContextBase22SetBoundConstantBufferE18RenderShaderType_tP24ConstantBufferHandle_t__ji */
	void RebindConstantBufferIfBound(class CRenderContextBase *, ConstantBufferHandle_t); /* linkage=_ZN18CRenderContextBase27RebindConstantBufferIfBoundEP24ConstantBufferHandle_t__ */
	virtual void StartRenderDocCapture(class CRenderContextBase *, PlatWindow_t); /* linkage=_ZN18CRenderContextBase21StartRenderDocCaptureEP14PlatWindow_t__ */
	virtual void EndRenderDocCapture(class CRenderContextBase *, PlatWindow_t); /* linkage=_ZN18CRenderContextBase19EndRenderDocCaptureEP14PlatWindow_t__ */
	void SetRasterizerStateInternal(class CRenderContextBase *, void *); /* linkage=_ZN18CRenderContextBase26SetRasterizerStateInternalEPv */
	void SetDepthStencilStateInternal(class CRenderContextBase *, void *, uint32); /* linkage=_ZN18CRenderContextBase28SetDepthStencilStateInternalEPvj */
	void SetBlendStateInternal(class CRenderContextBase *, void *, const float  *, uint32); /* linkage=_ZN18CRenderContextBase21SetBlendStateInternalEPvPKfj */
	/* <10abd9> rendersystem/rendercontextbase.cpp:967 */
	virtual class IRenderContext * GetSubContext(class CRenderContextBase *, const class ISceneLayer  *); /* linkage=_ZN18CRenderContextBase13GetSubContextEPK11ISceneLayer */
	void SubmitSubContexts(class CRenderContextBase *); /* linkage=_ZN18CRenderContextBase17SubmitSubContextsEv */
} __attribute__((__aligned__(16)));

// <00102ACB> rendersystem/rendercontextbase.h:88
void CRenderContextBase::ForceDeviceLost()
{
} /* size: 5 */

// <00102A64> rendersystem/rendercontextbase.h:92
void CRenderContextBase::PrepareTextureForUse(HRenderTexture hTexture, RenderColorSpace_t colorSpace, int nRequiredMipSize, int nMipLevelToBind)
{
} /* size: 5 */

// <001029F0> rendersystem/rendercontextbase.h:101
void CRenderContextBase::BindDescriptorSets(int32 nDescriptorSetIndex, int32 nDescriptorSetCount, const RenderDescriptorSetHandle_t* pDescriptorSets, const int32* pCBDynamicOffsetCount, const uint32 ** ppCBDynamicOffsets)
{
} /* size: 5 */

// <0010295A> rendersystem/rendercontextbase.h:102
void CRenderContextBase::FillAndBindDynamicDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSetUsedAsLayoutTemplate, int32 nDescriptorSetIndex, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bUpdateAllDescriptors, const int32* pCBDynamicOffsetCount, const uint32 ** ppCBDynamicOffsets)
{
} /* size: 5 */

// <001028F4> rendersystem/rendercontextbase.h:103
void CRenderContextBase::FillDynamicDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSetUsedAsLayoutTemplate, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bUpdateAllDescriptors)
{
} /* size: 7 */

// <0010288E> rendersystem/rendercontextbase.h:105
void CRenderContextBase::BeginRenderPass(RenderPassHandle_t hRenderPass, int32 nNumClearValues, const union RenderPassClearValue_t* pClearValues, const Rect_t& renderArea)
{
} /* size: 5 */

// <00102860> rendersystem/rendercontextbase.h:106
void CRenderContextBase::NextSubPass()
{
} /* size: 5 */

// <00102832> rendersystem/rendercontextbase.h:107
void CRenderContextBase::EndRenderPass()
{
} /* size: 5 */

// <001027CC> rendersystem/rendercontextbase.h:109
void CRenderContextBase::TextureBarrier(int32 nNumTextures, const HRenderTexture* pTextures, const RenderImageLayout_t* pImageLayouts, bool bForce)
{
} /* size: 5 */

// <00102782> rendersystem/rendercontextbase.h:110
void CRenderContextBase::UAVBarrier(int32 nNumUAVs, const RenderUAVBarrier_t* pBarriers)
{
} /* size: 5 */

// <00102738> rendersystem/rendercontextbase.h:111
void CRenderContextBase::BufferBarrier(int32 nNumBuffers, const RenderBufferBarrier_t* pBuffers)
{
} /* size: 5 */

// <001026EE> rendersystem/rendercontextbase.h:113
void CRenderContextBase::PushConstants(const void* pData, uint32 nDataSize)
{
} /* size: 5 */

// <0010520E> rendersystem/rendercontextbase.h:129
void CRenderContextBase::BeginPixEvent(Color c, const char* pEventName)
{
} /* size: 5 */

// <001026BF> rendersystem/rendercontextbase.h:129
inline void CRenderContextBase::BeginPixEvent(Color c, const char* pEventName)
{
} /* size: 0 */

// <00102691> rendersystem/rendercontextbase.h:131
void CRenderContextBase::EndPixEvent()
{
} /* size: 5 */

// <00105245> rendersystem/rendercontextbase.h:132
void CRenderContextBase::PixSetMarker(Color c, const char* pEventName)
{
} /* size: 5 */

// <00102662> rendersystem/rendercontextbase.h:132
inline void CRenderContextBase::PixSetMarker(Color c, const char* pEventName)
{
} /* size: 0 */

// <0010527C> rendersystem/rendercontextbase.h:156
void CRenderContextBase::SetAlphaTestState(bool bEnable, float flAlphaTestRef, RsComparison_t comparisonMode)
{
} /* size: 5 */

// <00102625> rendersystem/rendercontextbase.h:156
inline void CRenderContextBase::SetAlphaTestState(bool bEnable, float flAlphaTestRef, RsComparison_t comparisonMode)
{
} /* size: 0 */

// <001025D9> rendersystem/rendercontextbase.h:162
void CRenderContextBase::SetSteamVrCompositorTexture(HRenderTexture hTexture, HRenderTexture hDepthTexture)
{
} /* size: 5 */

// <00102509> rendersystem/rendercontextbase.h:164
void CRenderContextBase::CopyFromVolumeTexture(HRenderTexture hSrcTexture, HRenderTexture hDestTexture, Rect3D_t* pSrcRect3D, int nDestX, int nDestY, int nDestZ, uint nSrcMipSlice, uint nSrcArraySlice, uint nDstMipSlice, uint nDstArraySlice, CopyTextureFlags_t nFlags)
{
} /* size: 5 */

// <001024BF> rendersystem/rendercontextbase.h:170
void CRenderContextBase::DiscardRenderTarget(RenderClearFlags_t nDiscardBufferFlags, uint nDiscardOpFlags)
{
} /* size: 5 */

// <00102483> rendersystem/rendercontextbase.h:172
void CRenderContextBase::SetTilingModeHint(RenderTilingModeHint_t eTilingMode)
{
} /* size: 5 */

// <0010242B> rendersystem/rendercontextbase.h:174
void CRenderContextBase::BuildBLAS(RenderBLASHandle_t hBLAS, BLASTriangleData_t* pTriangleData, int nTriangleDataCount)
{
} /* size: 5 */

// <001023E1> rendersystem/rendercontextbase.h:175
void CRenderContextBase::CompactBLAS(RenderBLASHandle_t hBloated, RenderBLASHandle_t hCompact)
{
} /* size: 5 */

// <00102389> rendersystem/rendercontextbase.h:176
void CRenderContextBase::BuildTLAS(RenderTLASHandle_t hTLAS, TLASInstance_t* pInstances, int nInstanceCount)
{
} /* size: 5 */

// <0010234D> rendersystem/rendercontextbase.h:177
void CRenderContextBase::UpdateRayTraceShaderBindingTable(IRaytraceShaderBindingTable* pShaderBindingTable)
{
} /* size: 5 */

// <00102311> rendersystem/rendercontextbase.h:178
void CRenderContextBase::BindRayTracingPipeline(RenderRayTracePipelineHandle_t hRayTracingPipeline)
{
} /* size: 5 */

// <001022AB> rendersystem/rendercontextbase.h:179
void CRenderContextBase::TraceRays(IRaytraceShaderBindingTable* pShaderBindingTable, uint32 nWidth, uint32 nHeight, uint32 nDepth)
{
} /* size: 5 */

// <00102253> rendersystem/rendercontextbase.h:180
void CRenderContextBase::TraceRaysIndirect(IRaytraceShaderBindingTable* pShaderBindingTable, RenderBufferHandle_t hDispatchBuffer, uint32 nDispatchBufferOffset)
{
} /* size: 5 */

// <00102220> rendersystem/rendercontextbase.h:187
void* CRenderContextBase::GetScratchBuffer()
{
} /* size: 7 */

// <001021E4> rendersystem/rendercontextbase.h:193
void CRenderContextBase::BeginQuery(RenderQueryHandle_t hQueryObject)
{
} /* size: 5 */

// <001021A8> rendersystem/rendercontextbase.h:194
void CRenderContextBase::EndQuery(RenderQueryHandle_t hQueryObject)
{
} /* size: 5 */

// <0010216C> rendersystem/rendercontextbase.h:197
void CRenderContextBase::SetDepthBoundsTestEnabled(bool bEnabled)
{
} /* size: 5 */

// <00102122> rendersystem/rendercontextbase.h:198
void CRenderContextBase::SetDepthBounds(float flMinDepth, float flMaxDepth)
{
} /* size: 5 */

// <001AEAEF> rendersystem/rendercontextbase.h:201
void CRenderContextBase::ForceFlushGPU()
{
} /* size: 5 */

// <001A6D5A> rendersystem/rendercontextbase.h:201
inline void CRenderContextBase::ForceFlushGPU()
{
} /* size: 0 */

// <001052BA> rendersystem/rendercontextbase.h:225
void CRenderContextBase::IsOwnedByCurrentThread()
{
} /* size: 10 */

// <001020DB> rendersystem/rendercontextbase.h:225
inline void CRenderContextBase::IsOwnedByCurrentThread()
{
} /* size: 0 */

// <00399B5B> rendersystem/rendercontextbase.h:341
void CRenderContextBasePtr::~CRenderContextBasePtr()
{
} /* size: 0 */

// <00399B3D> rendersystem/rendercontextbase.h:341
inline void CRenderContextBasePtr::~CRenderContextBasePtr()
{
} /* size: 0 */

// <00163ADB> rendersystem/rendercontextbase.h:341
// member functions: 10
// member variable: 1
// class size: 16
class CRenderContextBasePtr : public CRenderContextPtr {
public:
	/* class CRenderContextPtr <ancestor>; */ /* 0 16 */
	/* rendersystem/rendercontextbase.h:346 */
	void CRenderContextBasePtr(CRenderContextBasePtr* , IRenderDevice* , const RenderTargetDesc_t& , const char* );
	/* rendersystem/rendercontextbase.h:347 */
	void CRenderContextBasePtr(CRenderContextBasePtr* , IRenderDevice* , const char* );
	/* rendersystem/rendercontextbase.h:348 */
	CRenderContextBase* operator->(const CRenderContextBasePtr* );
	/* rendersystem/rendercontextbase.h:349 */
	CRenderContextBase* operator CRenderContextBase*(const CRenderContextBasePtr* );
	void ~CRenderContextBasePtr(CRenderContextBasePtr* );
	void CRenderContextBasePtr(class CRenderContextBasePtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *); /* linkage=_ZN21CRenderContextBasePtrC4EP13IRenderDeviceRK18RenderTargetDesc_tPKc */
	void CRenderContextBasePtr(class CRenderContextBasePtr *, class IRenderDevice *, const char  *); /* linkage=_ZN21CRenderContextBasePtrC4EP13IRenderDevicePKc */
	class CRenderContextBase * operator->(const class CRenderContextBasePtr  *); /* linkage=_ZNK21CRenderContextBasePtrptEv */
	class CRenderContextBase * operator CRenderContextBase*(const class CRenderContextBasePtr  *); /* linkage=_ZNK21CRenderContextBasePtrcvP18CRenderContextBaseEv */
	void ~CRenderContextBasePtr(class CRenderContextBasePtr *); /* linkage=_ZN21CRenderContextBasePtrD4Ev */
} __attribute__((__aligned__(16)));

// <001A6D34> rendersystem/rendercontextbase.h:352
void CRenderContextBasePtr::CRenderContextBasePtr(IRenderDevice* pDevice, const RenderTargetDesc_t& rtDesc, const char* pDebugString)
{
} /* size: 0 */

// <001A6CF1> rendersystem/rendercontextbase.h:352
inline void CRenderContextBasePtr::CRenderContextBasePtr(IRenderDevice* pDevice, const RenderTargetDesc_t& rtDesc, const char* pDebugString)
{
} /* size: 0 */

// <003A39C7> rendersystem/rendercontextbase.h:356
void CRenderContextBasePtr::CRenderContextBasePtr(IRenderDevice* pDevice, const char* pDebugString)
{
} /* size: 0 */

// <003A3991> rendersystem/rendercontextbase.h:356
inline void CRenderContextBasePtr::CRenderContextBasePtr(IRenderDevice* pDevice, const char* pDebugString)
{
} /* size: 0 */

// <001A6C7E> rendersystem/rendercontextbase.h:363
inline void CRenderContextBasePtr::operator->()
{
} /* size: 0 */

// <003A3975> rendersystem/rendercontextbase.h:371
inline void operator CRenderContextBasePtr::CRenderContextBase*()
{
} /* size: 0 */

// <00105521> rendersystem/rendercontextbase.h:378
void CRenderContextBase::GetAttributesForModify()
{
	{
	}
} /* size: 66 */

// <00102070> rendersystem/rendercontextbase.h:378
// variables: 2
inline void CRenderContextBase::GetAttributesForModify()
{
	const char   __FUNCTION__; // 40560
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 380
	}
} /* size: 0, variables: 1 */

// <001007FB> rendersystem/rendercontextbase.h:378
// variables: 2
inline void CRenderContextBase::GetAttributesForModify()
{
	const char   __FUNCTION__; // 10604
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 380
	}
} /* size: 0, variables: 1 */

// <0010204A> rendersystem/rendercontextbase.h:385
inline void CRenderContextBase::SetRasterizerStateInternal(void* pRS)
{
} /* size: 0 */

// <00102017> rendersystem/rendercontextbase.h:395
inline void CRenderContextBase::SetDepthStencilStateInternal(void* pDS, uint32 nStencilRef)
{
} /* size: 0 */

// <00101FD7> rendersystem/rendercontextbase.h:406
inline void CRenderContextBase::SetBlendStateInternal(void* pBS, const float* pBlendFactor, uint32 nMultisampleMask)
{
} /* size: 0 */

// <00101E9D> rendersystem/rendercontextbase.h:463
// variable: 1
// function calls: 2
void CRenderContextBase::BeginPixEvent(const char* pEventName)
{
	Color c; // 465
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 465
} /* size: 42, variables: 1, inline expansions: 2 (0 bytes) */

// <00101D63> rendersystem/rendercontextbase.h:470
// variable: 1
// function calls: 2
void CRenderContextBase::PixSetMarker(const char* pEventName)
{
	Color c; // 472
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 472
} /* size: 42, variables: 1, inline expansions: 2 (0 bytes) */

