
//
// empty/rendercontextempty.h
//
//	referenced by: librendersystemempty.so
//
//	functions: 59
//	class: 1
//

// <0039924A> empty/rendercontextempty.h:25
// member functions: 286
// member variables: 4
// vtable entries: 140
// class size: 2,880
class CRenderContextEmpty : public IRenderContext {
public:
	/* class IRenderContext <ancestor>; */ /* 0 1232 */
	void CRenderContextEmpty(CRenderContextEmpty* , const CRenderContextEmpty& );
	/* empty/rendercontextempty.h:29 */
	virtual void Clear(CRenderContextEmpty* , const RenderClearInfo_t& );
	/* empty/rendercontextempty.h:30 */
	virtual void DiscardRenderTarget(CRenderContextEmpty* , RenderClearFlags_t, uint);
	/* empty/rendercontextempty.h:31 */
	virtual void SetTilingModeHint(CRenderContextEmpty* , RenderTilingModeHint_t);
	/* empty/rendercontextempty.h:32 */
	virtual ClearSubrectResult_t ClearSubrect(CRenderContextEmpty* , const RenderClearInfo_t& , int, int, int, int, bool);
	/* empty/rendercontextempty.h:33 */
	virtual void ClearUnorderedAccessViewUint(CRenderContextEmpty* , HRenderTexture, int, const uint32* );
	/* empty/rendercontextempty.cpp:425 */
	virtual void SetViewports(CRenderContextEmpty* , int, const RenderViewport_t* );
	/* empty/rendercontextempty.cpp:432 */
	virtual void GetViewport(CRenderContextEmpty* , RenderViewport_t* , int);
	/* empty/rendercontextempty.h:36 */
	virtual void SetStatesToDefault(CRenderContextEmpty* , uint32, uint32);
	/* empty/rendercontextempty.cpp:88 */
	virtual void ResolveDepthStencilTarget(CRenderContextEmpty* , Rect_t* , int, int, HRenderTexture);
	/* empty/rendercontextempty.cpp:92 */
	virtual void ResolveRenderTarget(CRenderContextEmpty* , int, Rect_t* , int, int, HRenderTexture);
	/* empty/rendercontextempty.h:39 */
	virtual void Submit(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:40 */
	virtual void SubmitSecondaryDisplayList(CRenderContextEmpty* , CDisplayList* , bool);
	/* empty/rendercontextempty.cpp:105 */
	virtual CDisplayList* DetachCommandList(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:42 */
	virtual void DependsOn(CRenderContextEmpty* , CDependencyDescriptor* );
	/* empty/rendercontextempty.h:43 */
	virtual void Satisfies(CRenderContextEmpty* , CDependencyDescriptor* );
	/* empty/rendercontextempty.cpp:117 */
	virtual void GetMaxToRender(CRenderContextEmpty* , int, int, int* , int* );
	/* empty/rendercontextempty.cpp:179 */
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(CRenderContextEmpty* , const BufferDesc_t& , DynamicLockDesc_t* );
	/* empty/rendercontextempty.cpp:186 */
	virtual void UnlockDynamicVertexBuffer(CRenderContextEmpty* , DynamicVertexBufferHandle_t, int);
	/* empty/rendercontextempty.cpp:227 */
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(CRenderContextEmpty* , const BufferDesc_t& , DynamicLockDesc_t* );
	/* empty/rendercontextempty.cpp:202 */
	virtual RenderBufferHandle_t LockDynamicGPUBuffer(CRenderContextEmpty* , const BufferDesc_t& , RenderBufferFlags_t, ImageFormat, DynamicLockDesc_t* );
	/* empty/rendercontextempty.cpp:208 */
	virtual void UnlockDynamicGPUBuffer(CRenderContextEmpty* , RenderBufferHandle_t, int);
	/* empty/rendercontextempty.cpp:235 */
	virtual void UnlockDynamicIndexBuffer(CRenderContextEmpty* , DynamicIndexBufferHandle_t, int);
	/* empty/rendercontextempty.cpp:240 */
	virtual bool LockIndexBuffer(CRenderContextEmpty* , IndexBufferHandle_t, int, LockDesc_t* );
	/* empty/rendercontextempty.cpp:253 */
	virtual void UnlockIndexBuffer(CRenderContextEmpty* , IndexBufferHandle_t, int, LockDesc_t* );
	/* empty/rendercontextempty.cpp:146 */
	virtual bool LockVertexBuffer(CRenderContextEmpty* , VertexBufferHandle_t, int, LockDesc_t* );
	/* empty/rendercontextempty.cpp:159 */
	virtual void UnlockVertexBuffer(CRenderContextEmpty* , VertexBufferHandle_t, int, LockDesc_t* );
	/* empty/rendercontextempty.cpp:191 */
	virtual bool LockVertexBufferRegion(CRenderContextEmpty* , VertexBufferHandle_t, int32, int32, LockDesc_t* );
	/* empty/rendercontextempty.cpp:197 */
	virtual void UnlockVertexBufferRegion(CRenderContextEmpty* , VertexBufferHandle_t, int32, int32, LockDesc_t* );
	/* empty/rendercontextempty.cpp:262 */
	virtual bool LockIndexBufferRegion(CRenderContextEmpty* , IndexBufferHandle_t, int32, int32, LockDesc_t* );
	/* empty/rendercontextempty.cpp:268 */
	virtual void UnlockIndexBufferRegion(CRenderContextEmpty* , IndexBufferHandle_t, int32, int32, LockDesc_t* );
	/* empty/rendercontextempty.cpp:167 */
	virtual void SetVertexData(CRenderContextEmpty* , VertexBufferHandle_t, const void* , int, int);
	/* empty/rendercontextempty.cpp:171 */
	virtual void SetIndexData(CRenderContextEmpty* , IndexBufferHandle_t, const void* , int, int);
	/* empty/rendercontextempty.cpp:275 */
	virtual bool BindIndexBuffer(CRenderContextEmpty* , IndexBufferHandle_t, int);
	/* empty/rendercontextempty.cpp:280 */
	virtual bool BindIndexBuffer(CRenderContextEmpty* , DynamicIndexBufferHandle_t, int);
	/* empty/rendercontextempty.cpp:285 */
	virtual bool BindIndexBuffer(CRenderContextEmpty* , RenderBufferHandle_t, int, int);
	/* empty/rendercontextempty.cpp:290 */
	virtual bool BindVertexBuffer(CRenderContextEmpty* , int, VertexBufferHandle_t, int, int);
	/* empty/rendercontextempty.cpp:295 */
	virtual bool BindVertexBuffer(CRenderContextEmpty* , int, DynamicVertexBufferHandle_t, int, int);
	/* empty/rendercontextempty.cpp:301 */
	virtual bool BindVertexBuffer(CRenderContextEmpty* , int, RenderBufferHandle_t, int, int);
	/* empty/rendercontextempty.cpp:306 */
	virtual void BindVertexShader(CRenderContextEmpty* , RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector* );
	/* empty/rendercontextempty.cpp:310 */
	virtual void BindShader(CRenderContextEmpty* , RenderShaderType_t, RenderShaderHandle_t);
	/* empty/rendercontextempty.cpp:445 */
	virtual void BindTexture(CRenderContextEmpty* , int, HRenderTexture, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	/* empty/rendercontextempty.cpp:450 */
	virtual void BindMipLevelOfTexture(CRenderContextEmpty* , int, HRenderTexture, int, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	/* empty/rendercontextempty.h:73 */
	virtual void PrepareTextureForUse(CRenderContextEmpty* , HRenderTexture, RenderColorSpace_t, int, int);
	/* empty/rendercontextempty.h:74 */
	virtual void SetSamplerStatePS(CRenderContextEmpty* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* empty/rendercontextempty.h:77 */
	virtual void SetSamplerStateVS(CRenderContextEmpty* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* empty/rendercontextempty.h:80 */
	virtual void SetSamplerState(CRenderContextEmpty* , int32, const CSamplerStateDesc* , RenderShaderType_t);
	/* empty/rendercontextempty.h:81 */
	virtual void BindDescriptorSets(CRenderContextEmpty* , int32, int32, const RenderDescriptorSetHandle_t* , const int32* , const uint32** );
	/* empty/rendercontextempty.h:82 */
	virtual void FillAndBindDynamicDescriptorSet(CRenderContextEmpty* , RenderDescriptorSetHandle_t, int32, int32, const RenderDescriptorBinding_t* , bool, const int32* , const uint32** );
	/* empty/rendercontextempty.h:83 */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(CRenderContextEmpty* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* , bool);
	/* empty/rendercontextempty.h:84 */
	virtual void BeginRenderPass(CRenderContextEmpty* , RenderPassHandle_t, int32, const union RenderPassClearValue_t* , const Rect_t& );
	/* empty/rendercontextempty.h:85 */
	virtual void NextSubPass(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:86 */
	virtual void EndRenderPass(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:87 */
	virtual unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:88 */
	virtual void TextureBarrier(CRenderContextEmpty* , int32, const HRenderTexture* , const RenderImageLayout_t* , bool);
	/* empty/rendercontextempty.h:89 */
	virtual void UAVBarrier(CRenderContextEmpty* , int32, const RenderUAVBarrier_t* );
	/* empty/rendercontextempty.h:90 */
	virtual void BufferBarrier(CRenderContextEmpty* , int32, const RenderBufferBarrier_t* );
	/* empty/rendercontextempty.cpp:502 */
	virtual void SetTextureData(CRenderContextEmpty* , HRenderTexture, const CTextureDesc* , const void* , int, int, const Rect3D_t* , uint, const DataRecycleDelegate_t* );
	/* empty/rendercontextempty.cpp:511 */
	virtual void LockDynamicTexture(CRenderContextEmpty* , HRenderTexture, LockedDynamicTexture_t& );
	/* empty/rendercontextempty.cpp:516 */
	virtual void UnlockDynamicTexture(CRenderContextEmpty* , HRenderTexture);
	/* empty/rendercontextempty.cpp:521 */
	virtual void ReadTexturePixels(CRenderContextEmpty* , HRenderTexture, IReadTexturePixelsCallback* , Rect_t* , int, int, bool);
	/* empty/rendercontextempty.cpp:534 */
	virtual void ReadBuffer(CRenderContextEmpty* , RenderBufferHandle_t, IReadBufferCallback* , int32, int32, bool);
	/* empty/rendercontextempty.cpp:560 */
	virtual void GenerateMipMaps(CRenderContextEmpty* , HRenderTexture);
	/* empty/rendercontextempty.cpp:318 */
	virtual void Draw(CRenderContextEmpty* , RenderPrimitiveType_t, int, int);
	/* empty/rendercontextempty.cpp:326 */
	virtual void DrawInstanced(CRenderContextEmpty* , RenderPrimitiveType_t, int, int, int);
	/* empty/rendercontextempty.cpp:335 */
	virtual void DrawIndexed(CRenderContextEmpty* , RenderPrimitiveType_t, int, int, int, int);
	/* empty/rendercontextempty.cpp:343 */
	virtual void DrawIndexedInstanced(CRenderContextEmpty* , RenderPrimitiveType_t, int, int, int, int, int, uint);
	/* empty/rendercontextempty.cpp:348 */
	virtual void DrawInstancedIndirect(CRenderContextEmpty* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:352 */
	virtual void DrawIndexedInstancedIndirect(CRenderContextEmpty* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:364 */
	virtual void MultiDrawIndexed(CRenderContextEmpty* , RenderPrimitiveType_t, int, const RenderMultiDrawIndexedInfo_t* , uint32, uint32, int);
	/* empty/rendercontextempty.cpp:356 */
	virtual void MultiDrawIndexedInstancedIndirect(CRenderContextEmpty* , RenderPrimitiveType_t, uint32, RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:360 */
	virtual void MultiDrawIndexedInstancedIndirectCount(CRenderContextEmpty* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32, uint32, RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:368 */
	virtual void DispatchComputeShader(CRenderContextEmpty* , uint32, uint32, uint32);
	/* empty/rendercontextempty.cpp:372 */
	virtual void DispatchComputeShaderIndirect(CRenderContextEmpty* , RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:376 */
	virtual void BuildBLAS(CRenderContextEmpty* , RenderBLASHandle_t, BLASTriangleData_t* , int);
	/* empty/rendercontextempty.cpp:381 */
	virtual void CompactBLAS(CRenderContextEmpty* , RenderBLASHandle_t, RenderBLASHandle_t);
	/* empty/rendercontextempty.cpp:386 */
	virtual void BuildTLAS(CRenderContextEmpty* , RenderTLASHandle_t, TLASInstance_t* , int);
	/* empty/rendercontextempty.cpp:390 */
	virtual void UpdateRayTraceShaderBindingTable(CRenderContextEmpty* , IRaytraceShaderBindingTable* );
	/* empty/rendercontextempty.cpp:394 */
	virtual void BindRayTracingPipeline(CRenderContextEmpty* , RenderRayTracePipelineHandle_t);
	/* empty/rendercontextempty.cpp:398 */
	virtual void TraceRays(CRenderContextEmpty* , IRaytraceShaderBindingTable* , uint32, uint32, uint32);
	/* empty/rendercontextempty.cpp:402 */
	virtual void TraceRaysIndirect(CRenderContextEmpty* , IRaytraceShaderBindingTable* , RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:406 */
	virtual void CopyGPUBufferHiddenStructureCount(CRenderContextEmpty* , RenderBufferHandle_t, RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:410 */
	virtual void SetGPUBufferHiddenStructureCount(CRenderContextEmpty* , RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:414 */
	virtual void FillGPUBuffer(CRenderContextEmpty* , RenderBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:418 */
	virtual void SetGPUBufferData(CRenderContextEmpty* , RenderBufferHandle_t, const void* , uint32, uint32);
	/* empty/rendercontextempty.h:120 */
	virtual void SetCullMode(CRenderContextEmpty* , RenderCullMode_t);
	/* empty/rendercontextempty.h:121 */
	virtual void FlipHandedness(CRenderContextEmpty* , bool);
	/* empty/rendercontextempty.h:122 */
	virtual void SetBlendMode(CRenderContextEmpty* , RenderBlendMode_t, const float* );
	/* empty/rendercontextempty.h:123 */
	virtual void SetZBufferMode(CRenderContextEmpty* , RenderZBufferMode_t);
	/* empty/rendercontextempty.cpp:71 */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(CRenderContextEmpty* , const RsRasterizerStateDesc_t* );
	/* empty/rendercontextempty.h:125 */
	virtual void SetRasterizerState(CRenderContextEmpty* , RsRasterizerStateHandle_t);
	/* empty/rendercontextempty.h:126 */
	virtual void SetOverrideRasterizerState(CRenderContextEmpty* , RsRasterizerStateHandle_t);
	/* empty/rendercontextempty.cpp:77 */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(CRenderContextEmpty* , const RsDepthStencilStateDesc_t* );
	/* empty/rendercontextempty.h:128 */
	virtual void SetDepthStencilState(CRenderContextEmpty* , RsDepthStencilStateHandle_t, uint32);
	/* empty/rendercontextempty.h:129 */
	virtual void SetOverrideDepthStencilState(CRenderContextEmpty* , RsDepthStencilStateHandle_t, uint32);
	/* empty/rendercontextempty.cpp:83 */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(CRenderContextEmpty* , const RsBlendStateDesc_t* );
	/* empty/rendercontextempty.h:131 */
	virtual void SetTessellationState(CRenderContextEmpty* , bool, uint32);
	/* empty/rendercontextempty.h:132 */
	virtual void SetBlendState(CRenderContextEmpty* , RsBlendStateHandle_t, const float* , uint32);
	/* empty/rendercontextempty.cpp:455 */
	virtual void SetConstantBufferData(CRenderContextEmpty* , ConstantBufferHandle_t, const void* , uint32);
	/* empty/rendercontextempty.cpp:459 */
	virtual void SetConstantBufferViewsData(CRenderContextEmpty* , ConstantBufferHandle_t, uint32, uint32, const void* const* , uint32);
	/* empty/rendercontextempty.cpp:463 */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(CRenderContextEmpty* , uint32, DynamicLockDesc_t* );
	/* empty/rendercontextempty.cpp:481 */
	virtual void UnlockDynamicConstantBuffer(CRenderContextEmpty* , ConstantBufferHandle_t, uint32);
	/* empty/rendercontextempty.cpp:485 */
	virtual void BindConstantBuffer(CRenderContextEmpty* , RenderShaderType_t, ConstantBufferHandle_t, int);
	/* empty/rendercontextempty.cpp:489 */
	virtual void BindConstantBufferView(CRenderContextEmpty* , RenderShaderType_t, ConstantBufferHandle_t, uint32, int);
	/* empty/rendercontextempty.h:139 */
	virtual void PushConstants(CRenderContextEmpty* , const void* , uint32);
	/* empty/rendercontextempty.cpp:497 */
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(CRenderContextEmpty* , VertexBufferHandle_t);
	/* empty/rendercontextempty.h:141 */
	virtual void Flush(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:142 */
	virtual void ForceFlushGPU(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:143 */
	virtual void ForceDeviceLost(CRenderContextEmpty* );
	/* empty/rendercontextempty.cpp:42 */
	virtual IRenderDevice* GetDevice(CRenderContextEmpty* );
	/* empty/rendercontextempty.cpp:66 */
	virtual void BindRenderTargets(CRenderContextEmpty* , const RenderTargetDesc_t& );
	/* empty/rendercontextempty.cpp:100 */
	virtual void CopyTexture(CRenderContextEmpty* , HRenderTexture, HRenderTexture, Rect_t* , int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* empty/rendercontextempty.h:147 */
	virtual void CopyFromVolumeTexture(CRenderContextEmpty* , HRenderTexture, HRenderTexture, Rect3D_t* , int, int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* empty/rendercontextempty.cpp:51 */
	virtual void BeginPixEvent(CRenderContextEmpty* , Color, const char* );
	/* empty/rendercontextempty.h:152 */
	virtual void BeginPixEvent(CRenderContextEmpty* , const char* );
	/* empty/rendercontextempty.cpp:55 */
	virtual void EndPixEvent(CRenderContextEmpty* );
	/* empty/rendercontextempty.cpp:59 */
	virtual void PixSetMarker(CRenderContextEmpty* , Color, const char* );
	/* empty/rendercontextempty.h:155 */
	virtual void PixSetMarker(CRenderContextEmpty* , const char* );
	/* empty/rendercontextempty.cpp:215 */
	virtual void BeginQuery(CRenderContextEmpty* , RenderQueryHandle_t);
	/* empty/rendercontextempty.cpp:219 */
	virtual void EndQuery(CRenderContextEmpty* , RenderQueryHandle_t);
	/* empty/rendercontextempty.h:206 */
	virtual CRenderAttributes& GetAttributesForModify(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:160 */
	virtual void SetDebugFlag(CRenderContextEmpty* , RenderDebugFlag_t, bool);
	/* empty/rendercontextempty.cpp:438 */
	virtual void SetScissorRects(CRenderContextEmpty* , int, const Rect_t* );
	/* empty/rendercontextempty.h:163 */
	virtual void SetDebugString(CRenderContextEmpty* , const char* , ...);
	/* empty/rendercontextempty.h:164 */
	virtual void VaSetDebugString(CRenderContextEmpty* , const char* , typedef __va_list_tag __va_list_tag* );
	/* empty/rendercontextempty.h:165 */
	virtual const char* GetDebugString(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:166 */
	virtual void CopyFallbackTextureData(CRenderContextEmpty* );
	/* empty/rendercontextempty.cpp:564 */
	virtual void QueueDeviceThreadCallback(CRenderContextEmpty* , IDeviceThreadCallback* );
	/* empty/rendercontextempty.h:170 */
	virtual void BindMipLevelOfTextures(CRenderContextEmpty* , int, int, bind_resource_list_t* , RenderShaderType_t);
	/* empty/rendercontextempty.h:171 */
	virtual void BindUnordedAccessViews(CRenderContextEmpty* , int, int, bind_resource_list_t* , RenderShaderType_t);
	/* empty/rendercontextempty.h:172 */
	virtual void MarkTexturesUsedThisFrame(CRenderContextEmpty* , int, const texture_use_info_t* );
	/* empty/rendercontextempty.h:173 */
	virtual void SetSamplerStates(CRenderContextEmpty* , int, int, const CSamplerStateDesc* , RenderShaderType_t);
	/* empty/rendercontextempty.h:175 */
	virtual void SetAlphaTestState(CRenderContextEmpty* , bool, float, RsComparison_t);
	/* empty/rendercontextempty.h:177 */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(CRenderContextEmpty* );
	/* empty/rendercontextempty.h:178 */
	virtual void SemaphoreWaitAtBegin(CRenderContextEmpty* , RenderSemaphoreHandle_t);
	/* empty/rendercontextempty.h:180 */
	virtual void SetSteamVrCompositorTexture(CRenderContextEmpty* , HRenderTexture, HRenderTexture);
	/* empty/rendercontextempty.h:182 */
	virtual void SetDepthBoundsTestEnabled(CRenderContextEmpty* , bool);
	/* empty/rendercontextempty.h:183 */
	virtual void SetDepthBounds(CRenderContextEmpty* , float, float);
	/* empty/rendercontextempty.h:185 */
	virtual bool IsOwnedByCurrentThread(const CRenderContextEmpty* );
	/* empty/rendercontextempty.cpp:27 */
	void CRenderContextEmpty(CRenderContextEmpty* );
	/* empty/rendercontextempty.cpp:34 */
	virtual void ~CRenderContextEmpty(CRenderContextEmpty* );
protected:
	CRenderAttributes m_attributes; /* 1232 1184 */
	uint8 m_nViewportCount; /* 2416 1 */
	RenderViewport_t m_pViewports[16]; /* 2420 448 */
	/* empty/rendercontextempty.h:199 */
	virtual IRenderContext* GetSubContext(CRenderContextEmpty* , const ISceneLayer* );
	/* empty/rendercontextempty.cpp:547 */
	virtual void ReadBuffer(CRenderContextEmpty* , IndexBufferHandle_t, IReadBufferCallback* , int32, int32, bool);
	void CRenderContextEmpty(class CRenderContextEmpty *, const class CRenderContextEmpty  &); /* linkage=_ZN19CRenderContextEmptyC4ERKS_ */
	virtual void Clear(class CRenderContextEmpty *, const class RenderClearInfo_t  &); /* linkage=_ZN19CRenderContextEmpty5ClearERK17RenderClearInfo_t */
	virtual void DiscardRenderTarget(class CRenderContextEmpty *, enum RenderClearFlags_t, uint); /* linkage=_ZN19CRenderContextEmpty19DiscardRenderTargetE18RenderClearFlags_tj */
	virtual void SetTilingModeHint(class CRenderContextEmpty *, enum RenderTilingModeHint_t); /* linkage=_ZN19CRenderContextEmpty17SetTilingModeHintE22RenderTilingModeHint_t */
	virtual enum ClearSubrectResult_t ClearSubrect(class CRenderContextEmpty *, const class RenderClearInfo_t  &, int, int, int, int, bool); /* linkage=_ZN19CRenderContextEmpty12ClearSubrectERK17RenderClearInfo_tiiiib */
	virtual void ClearUnorderedAccessViewUint(class CRenderContextEmpty *, HRenderTexture, int, const uint32  *); /* linkage=_ZN19CRenderContextEmpty28ClearUnorderedAccessViewUintE11CWeakHandleI31InfoForResourceTypeCTextureBaseEiPKj */
	virtual void SetViewports(class CRenderContextEmpty *, int, const class RenderViewport_t  *); /* linkage=_ZN19CRenderContextEmpty12SetViewportsEiPK16RenderViewport_t */
	virtual void GetViewport(class CRenderContextEmpty *, class RenderViewport_t *, int); /* linkage=_ZN19CRenderContextEmpty11GetViewportEP16RenderViewport_ti */
	virtual void SetStatesToDefault(class CRenderContextEmpty *, uint32, uint32); /* linkage=_ZN19CRenderContextEmpty18SetStatesToDefaultEjj */
	virtual void ResolveDepthStencilTarget(class CRenderContextEmpty *, class Rect_t *, int, int, HRenderTexture); /* linkage=_ZN19CRenderContextEmpty25ResolveDepthStencilTargetEP6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void ResolveRenderTarget(class CRenderContextEmpty *, int, class Rect_t *, int, int, HRenderTexture); /* linkage=_ZN19CRenderContextEmpty19ResolveRenderTargetEiP6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void Submit(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty6SubmitEv */
	virtual void SubmitSecondaryDisplayList(class CRenderContextEmpty *, class CDisplayList *, bool); /* linkage=_ZN19CRenderContextEmpty26SubmitSecondaryDisplayListEP12CDisplayListb */
	virtual class CDisplayList * DetachCommandList(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty17DetachCommandListEv */
	virtual void DependsOn(class CRenderContextEmpty *, class CDependencyDescriptor *); /* linkage=_ZN19CRenderContextEmpty9DependsOnEP21CDependencyDescriptor */
	virtual void Satisfies(class CRenderContextEmpty *, class CDependencyDescriptor *); /* linkage=_ZN19CRenderContextEmpty9SatisfiesEP21CDependencyDescriptor */
	virtual void GetMaxToRender(class CRenderContextEmpty *, int, int, int *, int *); /* linkage=_ZN19CRenderContextEmpty14GetMaxToRenderEiiPiS0_ */
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(class CRenderContextEmpty *, const class BufferDesc_t  &, class DynamicLockDesc_t *); /* linkage=_ZN19CRenderContextEmpty23LockDynamicVertexBufferERK12BufferDesc_tP17DynamicLockDesc_t */
	virtual void UnlockDynamicVertexBuffer(class CRenderContextEmpty *, DynamicVertexBufferHandle_t, int); /* linkage=_ZN19CRenderContextEmpty25UnlockDynamicVertexBufferEP29DynamicVertexBufferHandle_t__i */
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(class CRenderContextEmpty *, const class BufferDesc_t  &, class DynamicLockDesc_t *); /* linkage=_ZN19CRenderContextEmpty22LockDynamicIndexBufferERK12BufferDesc_tP17DynamicLockDesc_t */
	virtual RenderBufferHandle_t LockDynamicGPUBuffer(class CRenderContextEmpty *, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat, class DynamicLockDesc_t *); /* linkage=_ZN19CRenderContextEmpty20LockDynamicGPUBufferERK12BufferDesc_t19RenderBufferFlags_t11ImageFormatP17DynamicLockDesc_t */
	virtual void UnlockDynamicGPUBuffer(class CRenderContextEmpty *, RenderBufferHandle_t, int); /* linkage=_ZN19CRenderContextEmpty22UnlockDynamicGPUBufferEP22RenderBufferHandle_t__i */
	virtual void UnlockDynamicIndexBuffer(class CRenderContextEmpty *, DynamicIndexBufferHandle_t, int); /* linkage=_ZN19CRenderContextEmpty24UnlockDynamicIndexBufferEP28DynamicIndexBufferHandle_t__i */
	virtual bool LockIndexBuffer(class CRenderContextEmpty *, IndexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN19CRenderContextEmpty15LockIndexBufferEP21IndexBufferHandle_t__iP10LockDesc_t */
	virtual void UnlockIndexBuffer(class CRenderContextEmpty *, IndexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN19CRenderContextEmpty17UnlockIndexBufferEP21IndexBufferHandle_t__iP10LockDesc_t */
	virtual bool LockVertexBuffer(class CRenderContextEmpty *, VertexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN19CRenderContextEmpty16LockVertexBufferEP22VertexBufferHandle_t__iP10LockDesc_t */
	virtual void UnlockVertexBuffer(class CRenderContextEmpty *, VertexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN19CRenderContextEmpty18UnlockVertexBufferEP22VertexBufferHandle_t__iP10LockDesc_t */
	virtual bool LockVertexBufferRegion(class CRenderContextEmpty *, VertexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN19CRenderContextEmpty22LockVertexBufferRegionEP22VertexBufferHandle_t__iiP10LockDesc_t */
	virtual void UnlockVertexBufferRegion(class CRenderContextEmpty *, VertexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN19CRenderContextEmpty24UnlockVertexBufferRegionEP22VertexBufferHandle_t__iiP10LockDesc_t */
	virtual bool LockIndexBufferRegion(class CRenderContextEmpty *, IndexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN19CRenderContextEmpty21LockIndexBufferRegionEP21IndexBufferHandle_t__iiP10LockDesc_t */
	virtual void UnlockIndexBufferRegion(class CRenderContextEmpty *, IndexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN19CRenderContextEmpty23UnlockIndexBufferRegionEP21IndexBufferHandle_t__iiP10LockDesc_t */
	virtual void SetVertexData(class CRenderContextEmpty *, VertexBufferHandle_t, const void  *, int, int); /* linkage=_ZN19CRenderContextEmpty13SetVertexDataEP22VertexBufferHandle_t__PKvii */
	virtual void SetIndexData(class CRenderContextEmpty *, IndexBufferHandle_t, const void  *, int, int); /* linkage=_ZN19CRenderContextEmpty12SetIndexDataEP21IndexBufferHandle_t__PKvii */
	virtual bool BindIndexBuffer(class CRenderContextEmpty *, IndexBufferHandle_t, int); /* linkage=_ZN19CRenderContextEmpty15BindIndexBufferEP21IndexBufferHandle_t__i */
	virtual bool BindIndexBuffer(class CRenderContextEmpty *, DynamicIndexBufferHandle_t, int); /* linkage=_ZN19CRenderContextEmpty15BindIndexBufferEP28DynamicIndexBufferHandle_t__i */
	virtual bool BindIndexBuffer(class CRenderContextEmpty *, RenderBufferHandle_t, int, int); /* linkage=_ZN19CRenderContextEmpty15BindIndexBufferEP22RenderBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class CRenderContextEmpty *, int, VertexBufferHandle_t, int, int); /* linkage=_ZN19CRenderContextEmpty16BindVertexBufferEiP22VertexBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class CRenderContextEmpty *, int, DynamicVertexBufferHandle_t, int, int); /* linkage=_ZN19CRenderContextEmpty16BindVertexBufferEiP29DynamicVertexBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class CRenderContextEmpty *, int, RenderBufferHandle_t, int, int); /* linkage=_ZN19CRenderContextEmpty16BindVertexBufferEiP22RenderBufferHandle_t__ii */
	virtual void BindVertexShader(class CRenderContextEmpty *, RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector  *); /* linkage=_ZN19CRenderContextEmpty16BindVertexShaderEP22RenderShaderHandle_t__P21RenderInputLayout_t__PK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS5_iEE */
	virtual void BindShader(class CRenderContextEmpty *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN19CRenderContextEmpty10BindShaderE18RenderShaderType_tP22RenderShaderHandle_t__ */
	virtual void BindTexture(class CRenderContextEmpty *, int, HRenderTexture, enum RenderTextureDimension_t, enum RenderShaderType_t, enum RenderColorSpace_t, int); /* linkage=_ZN19CRenderContextEmpty11BindTextureEi11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderShaderType_t18RenderColorSpace_ti */
	virtual void BindMipLevelOfTexture(class CRenderContextEmpty *, int, HRenderTexture, int, enum RenderTextureDimension_t, enum RenderShaderType_t, enum RenderColorSpace_t, int); /* linkage=_ZN19CRenderContextEmpty21BindMipLevelOfTextureEi11CWeakHandleI31InfoForResourceTypeCTextureBaseEi24RenderTextureDimension_t18RenderShaderType_t18RenderColorSpace_ti */
	virtual void PrepareTextureForUse(class CRenderContextEmpty *, HRenderTexture, enum RenderColorSpace_t, int, int); /* linkage=_ZN19CRenderContextEmpty20PrepareTextureForUseE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_tii */
	virtual void SetSamplerStatePS(class CRenderContextEmpty *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN19CRenderContextEmpty17SetSamplerStatePSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerStateVS(class CRenderContextEmpty *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN19CRenderContextEmpty17SetSamplerStateVSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerState(class CRenderContextEmpty *, int32, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN19CRenderContextEmpty15SetSamplerStateEiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void BindDescriptorSets(class CRenderContextEmpty *, int32, int32, const RenderDescriptorSetHandle_t  *, const int32  *, const uint32  * *); /* linkage=_ZN19CRenderContextEmpty18BindDescriptorSetsEiiPKP29RenderDescriptorSetHandle_t__PKiPPKj */
	virtual void FillAndBindDynamicDescriptorSet(class CRenderContextEmpty *, RenderDescriptorSetHandle_t, int32, int32, const class RenderDescriptorBinding_t  *, bool, const int32  *, const uint32  * *); /* linkage=_ZN19CRenderContextEmpty31FillAndBindDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iiPK25RenderDescriptorBinding_tbPKiPPKj */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(class CRenderContextEmpty *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN19CRenderContextEmpty24FillDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_tb */
	virtual void BeginRenderPass(class CRenderContextEmpty *, class RenderPassHandle_t, int32, const union RenderPassClearValue_t  *, const class Rect_t  &); /* linkage=_ZN19CRenderContextEmpty15BeginRenderPassE18RenderPassHandle_tiPK22RenderPassClearValue_tRK6Rect_t */
	virtual void NextSubPass(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty11NextSubPassEv */
	virtual void EndRenderPass(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty13EndRenderPassEv */
	virtual class unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty16GetBarrierHelperEv */
	virtual void TextureBarrier(class CRenderContextEmpty *, int32, const HRenderTexture  *, const enum RenderImageLayout_t  *, bool); /* linkage=_ZN19CRenderContextEmpty14TextureBarrierEiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK19RenderImageLayout_tb */
	virtual void UAVBarrier(class CRenderContextEmpty *, int32, const class RenderUAVBarrier_t  *); /* linkage=_ZN19CRenderContextEmpty10UAVBarrierEiPK18RenderUAVBarrier_t */
	virtual void BufferBarrier(class CRenderContextEmpty *, int32, const class RenderBufferBarrier_t  *); /* linkage=_ZN19CRenderContextEmpty13BufferBarrierEiPK21RenderBufferBarrier_t */
	virtual void SetTextureData(class CRenderContextEmpty *, HRenderTexture, const class CTextureDesc  *, const void  *, int, int, const class Rect3D_t  *, uint, const DataRecycleDelegate_t  *); /* linkage=_ZN19CRenderContextEmpty14SetTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK12CTextureDescPKviiPK8Rect3D_tjPK12CUtlDelegateIFvS7_EE */
	virtual void LockDynamicTexture(class CRenderContextEmpty *, HRenderTexture, class LockedDynamicTexture_t &); /* linkage=_ZN19CRenderContextEmpty18LockDynamicTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseER22LockedDynamicTexture_t */
	virtual void UnlockDynamicTexture(class CRenderContextEmpty *, HRenderTexture); /* linkage=_ZN19CRenderContextEmpty20UnlockDynamicTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	/* <3a3cd1> empty/rendercontextempty.cpp:521 */
	virtual void ReadTexturePixels(class CRenderContextEmpty *, HRenderTexture, class IReadTexturePixelsCallback *, class Rect_t *, int, int, bool); /* linkage=_ZN19CRenderContextEmpty17ReadTexturePixelsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP26IReadTexturePixelsCallbackP6Rect_tiib */
	/* <3a3dff> empty/rendercontextempty.cpp:534 */
	virtual void ReadBuffer(class CRenderContextEmpty *, RenderBufferHandle_t, class IReadBufferCallback *, int32, int32, bool); /* linkage=_ZN19CRenderContextEmpty10ReadBufferEP22RenderBufferHandle_t__P19IReadBufferCallbackiib */
	virtual void GenerateMipMaps(class CRenderContextEmpty *, HRenderTexture); /* linkage=_ZN19CRenderContextEmpty15GenerateMipMapsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void Draw(class CRenderContextEmpty *, enum RenderPrimitiveType_t, int, int); /* linkage=_ZN19CRenderContextEmpty4DrawE21RenderPrimitiveType_tii */
	virtual void DrawInstanced(class CRenderContextEmpty *, enum RenderPrimitiveType_t, int, int, int); /* linkage=_ZN19CRenderContextEmpty13DrawInstancedE21RenderPrimitiveType_tiii */
	virtual void DrawIndexed(class CRenderContextEmpty *, enum RenderPrimitiveType_t, int, int, int, int); /* linkage=_ZN19CRenderContextEmpty11DrawIndexedE21RenderPrimitiveType_tiiii */
	virtual void DrawIndexedInstanced(class CRenderContextEmpty *, enum RenderPrimitiveType_t, int, int, int, int, int, uint); /* linkage=_ZN19CRenderContextEmpty20DrawIndexedInstancedE21RenderPrimitiveType_tiiiiij */
	virtual void DrawInstancedIndirect(class CRenderContextEmpty *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty21DrawInstancedIndirectE21RenderPrimitiveType_tP22RenderBufferHandle_t__j */
	virtual void DrawIndexedInstancedIndirect(class CRenderContextEmpty *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty28DrawIndexedInstancedIndirectE21RenderPrimitiveType_tP22RenderBufferHandle_t__j */
	virtual void MultiDrawIndexed(class CRenderContextEmpty *, enum RenderPrimitiveType_t, int, const class RenderMultiDrawIndexedInfo_t  *, uint32, uint32, int); /* linkage=_ZN19CRenderContextEmpty16MultiDrawIndexedE21RenderPrimitiveType_tiPK28RenderMultiDrawIndexedInfo_tjji */
	virtual void MultiDrawIndexedInstancedIndirect(class CRenderContextEmpty *, enum RenderPrimitiveType_t, uint32, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty33MultiDrawIndexedInstancedIndirectE21RenderPrimitiveType_tjP22RenderBufferHandle_t__j */
	virtual void MultiDrawIndexedInstancedIndirectCount(class CRenderContextEmpty *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32, uint32, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty38MultiDrawIndexedInstancedIndirectCountE21RenderPrimitiveType_tP22RenderBufferHandle_t__jjS2_j */
	virtual void DispatchComputeShader(class CRenderContextEmpty *, uint32, uint32, uint32); /* linkage=_ZN19CRenderContextEmpty21DispatchComputeShaderEjjj */
	virtual void DispatchComputeShaderIndirect(class CRenderContextEmpty *, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty29DispatchComputeShaderIndirectEP22RenderBufferHandle_t__j */
	virtual void BuildBLAS(class CRenderContextEmpty *, RenderBLASHandle_t, class BLASTriangleData_t *, int); /* linkage=_ZN19CRenderContextEmpty9BuildBLASEP20RenderBLASHandle_t__P18BLASTriangleData_ti */
	virtual void CompactBLAS(class CRenderContextEmpty *, RenderBLASHandle_t, RenderBLASHandle_t); /* linkage=_ZN19CRenderContextEmpty11CompactBLASEP20RenderBLASHandle_t__S1_ */
	virtual void BuildTLAS(class CRenderContextEmpty *, RenderTLASHandle_t, class TLASInstance_t *, int); /* linkage=_ZN19CRenderContextEmpty9BuildTLASEP20RenderTLASHandle_t__P14TLASInstance_ti */
	virtual void UpdateRayTraceShaderBindingTable(class CRenderContextEmpty *, class IRaytraceShaderBindingTable *); /* linkage=_ZN19CRenderContextEmpty32UpdateRayTraceShaderBindingTableEP27IRaytraceShaderBindingTable */
	virtual void BindRayTracingPipeline(class CRenderContextEmpty *, RenderRayTracePipelineHandle_t); /* linkage=_ZN19CRenderContextEmpty22BindRayTracingPipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual void TraceRays(class CRenderContextEmpty *, class IRaytraceShaderBindingTable *, uint32, uint32, uint32); /* linkage=_ZN19CRenderContextEmpty9TraceRaysEP27IRaytraceShaderBindingTablejjj */
	virtual void TraceRaysIndirect(class CRenderContextEmpty *, class IRaytraceShaderBindingTable *, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty17TraceRaysIndirectEP27IRaytraceShaderBindingTableP22RenderBufferHandle_t__j */
	virtual void CopyGPUBufferHiddenStructureCount(class CRenderContextEmpty *, RenderBufferHandle_t, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty33CopyGPUBufferHiddenStructureCountEP22RenderBufferHandle_t__S1_j */
	virtual void SetGPUBufferHiddenStructureCount(class CRenderContextEmpty *, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty32SetGPUBufferHiddenStructureCountEP22RenderBufferHandle_t__j */
	virtual void FillGPUBuffer(class CRenderContextEmpty *, RenderBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty13FillGPUBufferEP22RenderBufferHandle_t__j */
	virtual void SetGPUBufferData(class CRenderContextEmpty *, RenderBufferHandle_t, const void  *, uint32, uint32); /* linkage=_ZN19CRenderContextEmpty16SetGPUBufferDataEP22RenderBufferHandle_t__PKvjj */
	virtual void SetCullMode(class CRenderContextEmpty *, enum RenderCullMode_t); /* linkage=_ZN19CRenderContextEmpty11SetCullModeE16RenderCullMode_t */
	virtual void FlipHandedness(class CRenderContextEmpty *, bool); /* linkage=_ZN19CRenderContextEmpty14FlipHandednessEb */
	virtual void SetBlendMode(class CRenderContextEmpty *, enum RenderBlendMode_t, const float  *); /* linkage=_ZN19CRenderContextEmpty12SetBlendModeE17RenderBlendMode_tPKf */
	virtual void SetZBufferMode(class CRenderContextEmpty *, enum RenderZBufferMode_t); /* linkage=_ZN19CRenderContextEmpty14SetZBufferModeE19RenderZBufferMode_t */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(class CRenderContextEmpty *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN19CRenderContextEmpty27FindOrCreateRasterizerStateEPK23RsRasterizerStateDesc_t */
	virtual void SetRasterizerState(class CRenderContextEmpty *, RsRasterizerStateHandle_t); /* linkage=_ZN19CRenderContextEmpty18SetRasterizerStateEP27RsRasterizerStateHandle_t__ */
	virtual void SetOverrideRasterizerState(class CRenderContextEmpty *, RsRasterizerStateHandle_t); /* linkage=_ZN19CRenderContextEmpty26SetOverrideRasterizerStateEP27RsRasterizerStateHandle_t__ */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(class CRenderContextEmpty *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN19CRenderContextEmpty29FindOrCreateDepthStencilStateEPK25RsDepthStencilStateDesc_t */
	virtual void SetDepthStencilState(class CRenderContextEmpty *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty20SetDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	virtual void SetOverrideDepthStencilState(class CRenderContextEmpty *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty28SetOverrideDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(class CRenderContextEmpty *, const class RsBlendStateDesc_t  *); /* linkage=_ZN19CRenderContextEmpty22FindOrCreateBlendStateEPK18RsBlendStateDesc_t */
	virtual void SetTessellationState(class CRenderContextEmpty *, bool, uint32); /* linkage=_ZN19CRenderContextEmpty20SetTessellationStateEbj */
	virtual void SetBlendState(class CRenderContextEmpty *, RsBlendStateHandle_t, const float  *, uint32); /* linkage=_ZN19CRenderContextEmpty13SetBlendStateEP22RsBlendStateHandle_t__PKfj */
	virtual void SetConstantBufferData(class CRenderContextEmpty *, ConstantBufferHandle_t, const void  *, uint32); /* linkage=_ZN19CRenderContextEmpty21SetConstantBufferDataEP24ConstantBufferHandle_t__PKvj */
	virtual void SetConstantBufferViewsData(class CRenderContextEmpty *, ConstantBufferHandle_t, uint32, uint32, const void  * const *, uint32); /* linkage=_ZN19CRenderContextEmpty26SetConstantBufferViewsDataEP24ConstantBufferHandle_t__jjPKPKvj */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(class CRenderContextEmpty *, uint32, class DynamicLockDesc_t *); /* linkage=_ZN19CRenderContextEmpty25LockDynamicConstantBufferEjP17DynamicLockDesc_t */
	virtual void UnlockDynamicConstantBuffer(class CRenderContextEmpty *, ConstantBufferHandle_t, uint32); /* linkage=_ZN19CRenderContextEmpty27UnlockDynamicConstantBufferEP24ConstantBufferHandle_t__j */
	virtual void BindConstantBuffer(class CRenderContextEmpty *, enum RenderShaderType_t, ConstantBufferHandle_t, int); /* linkage=_ZN19CRenderContextEmpty18BindConstantBufferE18RenderShaderType_tP24ConstantBufferHandle_t__i */
	virtual void BindConstantBufferView(class CRenderContextEmpty *, enum RenderShaderType_t, ConstantBufferHandle_t, uint32, int); /* linkage=_ZN19CRenderContextEmpty22BindConstantBufferViewE18RenderShaderType_tP24ConstantBufferHandle_t__ji */
	virtual void PushConstants(class CRenderContextEmpty *, const void  *, uint32); /* linkage=_ZN19CRenderContextEmpty13PushConstantsEPKvj */
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(class CRenderContextEmpty *, VertexBufferHandle_t); /* linkage=_ZN19CRenderContextEmpty29GetInputLayoutForVertexBufferEP22VertexBufferHandle_t__ */
	virtual void Flush(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty5FlushEv */
	virtual void ForceFlushGPU(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty13ForceFlushGPUEv */
	virtual void ForceDeviceLost(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty15ForceDeviceLostEv */
	virtual class IRenderDevice * GetDevice(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty9GetDeviceEv */
	virtual void BindRenderTargets(class CRenderContextEmpty *, const class RenderTargetDesc_t  &); /* linkage=_ZN19CRenderContextEmpty17BindRenderTargetsERK18RenderTargetDesc_t */
	virtual void CopyTexture(class CRenderContextEmpty *, HRenderTexture, HRenderTexture, class Rect_t *, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN19CRenderContextEmpty11CopyTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P6Rect_tiijjjj18CopyTextureFlags_t */
	virtual void CopyFromVolumeTexture(class CRenderContextEmpty *, HRenderTexture, HRenderTexture, class Rect3D_t *, int, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN19CRenderContextEmpty21CopyFromVolumeTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P8Rect3D_tiiijjjj18CopyTextureFlags_t */
	virtual void BeginPixEvent(class CRenderContextEmpty *, class Color, const char  *); /* linkage=_ZN19CRenderContextEmpty13BeginPixEventE5ColorPKc */
	virtual void BeginPixEvent(class CRenderContextEmpty *, const char  *); /* linkage=_ZN19CRenderContextEmpty13BeginPixEventEPKc */
	virtual void EndPixEvent(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty11EndPixEventEv */
	virtual void PixSetMarker(class CRenderContextEmpty *, class Color, const char  *); /* linkage=_ZN19CRenderContextEmpty12PixSetMarkerE5ColorPKc */
	virtual void PixSetMarker(class CRenderContextEmpty *, const char  *); /* linkage=_ZN19CRenderContextEmpty12PixSetMarkerEPKc */
	virtual void BeginQuery(class CRenderContextEmpty *, RenderQueryHandle_t); /* linkage=_ZN19CRenderContextEmpty10BeginQueryEP21RenderQueryHandle_t__ */
	virtual void EndQuery(class CRenderContextEmpty *, RenderQueryHandle_t); /* linkage=_ZN19CRenderContextEmpty8EndQueryEP21RenderQueryHandle_t__ */
	virtual class CRenderAttributes & GetAttributesForModify(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty22GetAttributesForModifyEv */
	virtual void SetDebugFlag(class CRenderContextEmpty *, enum RenderDebugFlag_t, bool); /* linkage=_ZN19CRenderContextEmpty12SetDebugFlagE17RenderDebugFlag_tb */
	virtual void SetScissorRects(class CRenderContextEmpty *, int, const class Rect_t  *); /* linkage=_ZN19CRenderContextEmpty15SetScissorRectsEiPK6Rect_t */
	virtual void SetDebugString(class CRenderContextEmpty *, const char  *, ...); /* linkage=_ZN19CRenderContextEmpty14SetDebugStringEPKcz */
	virtual void VaSetDebugString(class CRenderContextEmpty *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN19CRenderContextEmpty16VaSetDebugStringEPKcP13__va_list_tag */
	virtual const char  * GetDebugString(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty14GetDebugStringEv */
	virtual void CopyFallbackTextureData(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty23CopyFallbackTextureDataEv */
	virtual void QueueDeviceThreadCallback(class CRenderContextEmpty *, class IDeviceThreadCallback *); /* linkage=_ZN19CRenderContextEmpty25QueueDeviceThreadCallbackEP21IDeviceThreadCallback */
	virtual void BindMipLevelOfTextures(class CRenderContextEmpty *, int, int, class bind_resource_list_t *, enum RenderShaderType_t); /* linkage=_ZN19CRenderContextEmpty22BindMipLevelOfTexturesEiiP20bind_resource_list_t18RenderShaderType_t */
	virtual void BindUnordedAccessViews(class CRenderContextEmpty *, int, int, class bind_resource_list_t *, enum RenderShaderType_t); /* linkage=_ZN19CRenderContextEmpty22BindUnordedAccessViewsEiiP20bind_resource_list_t18RenderShaderType_t */
	virtual void MarkTexturesUsedThisFrame(class CRenderContextEmpty *, int, const class texture_use_info_t  *); /* linkage=_ZN19CRenderContextEmpty25MarkTexturesUsedThisFrameEiPK18texture_use_info_t */
	virtual void SetSamplerStates(class CRenderContextEmpty *, int, int, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN19CRenderContextEmpty16SetSamplerStatesEiiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void SetAlphaTestState(class CRenderContextEmpty *, bool, float, enum RsComparison_t); /* linkage=_ZN19CRenderContextEmpty17SetAlphaTestStateEbf14RsComparison_t */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmpty20SemaphoreSignalAtEndEv */
	virtual void SemaphoreWaitAtBegin(class CRenderContextEmpty *, RenderSemaphoreHandle_t); /* linkage=_ZN19CRenderContextEmpty20SemaphoreWaitAtBeginEP25RenderSemaphoreHandle_t__ */
	virtual void SetSteamVrCompositorTexture(class CRenderContextEmpty *, HRenderTexture, HRenderTexture); /* linkage=_ZN19CRenderContextEmpty27SetSteamVrCompositorTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_ */
	virtual void SetDepthBoundsTestEnabled(class CRenderContextEmpty *, bool); /* linkage=_ZN19CRenderContextEmpty25SetDepthBoundsTestEnabledEb */
	virtual void SetDepthBounds(class CRenderContextEmpty *, float, float); /* linkage=_ZN19CRenderContextEmpty14SetDepthBoundsEff */
	virtual bool IsOwnedByCurrentThread(const class CRenderContextEmpty  *); /* linkage=_ZNK19CRenderContextEmpty22IsOwnedByCurrentThreadEv */
	void CRenderContextEmpty(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmptyC4Ev */
	virtual void ~CRenderContextEmpty(class CRenderContextEmpty *); /* linkage=_ZN19CRenderContextEmptyD4Ev */
	virtual class IRenderContext * GetSubContext(class CRenderContextEmpty *, const class ISceneLayer  *); /* linkage=_ZN19CRenderContextEmpty13GetSubContextEPK11ISceneLayer */
	virtual void ReadBuffer(class CRenderContextEmpty *, IndexBufferHandle_t, class IReadBufferCallback *, int32, int32, bool); /* linkage=_ZN19CRenderContextEmpty10ReadBufferEP21IndexBufferHandle_t__P19IReadBufferCallbackiib */
};

// <003A0FE6> empty/rendercontextempty.h:29
void CRenderContextEmpty::Clear(const RenderClearInfo_t& clearInfo)
{
} /* size: 5 */

// <003A0F9C> empty/rendercontextempty.h:30
void CRenderContextEmpty::DiscardRenderTarget(RenderClearFlags_t nDiscardBufferFlags, uint nDiscardOpFlags)
{
} /* size: 5 */

// <003A0F60> empty/rendercontextempty.h:31
void CRenderContextEmpty::SetTilingModeHint(RenderTilingModeHint_t eTilingMode)
{
} /* size: 5 */

// <003A0EDD> empty/rendercontextempty.h:32
void CRenderContextEmpty::ClearSubrect(const RenderClearInfo_t& clearInfo, int nX, int nY, int nWidth, int nHeight, bool bForceSubrect)
{
} /* size: 10 */

// <003A0E84> empty/rendercontextempty.h:33
void CRenderContextEmpty::ClearUnorderedAccessViewUint(HRenderTexture hTexture, int nMip, const uint32* clearValues)
{
} /* size: 5 */

// <003A0E3A> empty/rendercontextempty.h:36
void CRenderContextEmpty::SetStatesToDefault(uint32 nSetFlags, uint32 nNotSetFlags)
{
} /* size: 5 */

// <003A0E0C> empty/rendercontextempty.h:39
void CRenderContextEmpty::Submit()
{
} /* size: 5 */

// <003A0DC2> empty/rendercontextempty.h:40
void CRenderContextEmpty::SubmitSecondaryDisplayList(CDisplayList* pDisplayList, bool bDontFreeAfterExecute)
{
} /* size: 5 */

// <003A0D86> empty/rendercontextempty.h:42
void CRenderContextEmpty::DependsOn(CDependencyDescriptor* pDesc)
{
} /* size: 5 */

// <003A0D4A> empty/rendercontextempty.h:43
void CRenderContextEmpty::Satisfies(CDependencyDescriptor* pDesc)
{
} /* size: 5 */

// <003A0CE3> empty/rendercontextempty.h:73
void CRenderContextEmpty::PrepareTextureForUse(HRenderTexture hTexture, RenderColorSpace_t colorSpace, int nRequiredMipSize, int nMipLevelToBind)
{
} /* size: 5 */

// <003A0C60> empty/rendercontextempty.h:74
void CRenderContextEmpty::SetSamplerStatePS(int nSamplerIndex, RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
} /* size: 5 */

// <003A0BDD> empty/rendercontextempty.h:77
void CRenderContextEmpty::SetSamplerStateVS(int nSamplerIndex, RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
} /* size: 5 */

// <003A0B85> empty/rendercontextempty.h:80
void CRenderContextEmpty::SetSamplerState(int32 nSamplerIndex, const CSamplerStateDesc* pSamplerDesc, RenderShaderType_t nTargetPipelineStage)
{
} /* size: 5 */

// <003A0B11> empty/rendercontextempty.h:81
void CRenderContextEmpty::BindDescriptorSets(int32 nDescriptorSetIndex, int32 nDescriptorSetCount, const RenderDescriptorSetHandle_t* pDescriptorSets, const int32* pCBDynamicOffsetCount, const uint32 ** ppCBDynamicOffsets)
{
} /* size: 5 */

// <003A0A7B> empty/rendercontextempty.h:82
void CRenderContextEmpty::FillAndBindDynamicDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSetUsedAsLayoutTemplate, int32 nDescriptorSetIndex, int32 nNumDescriptors, const RenderDescriptorBinding_t* pDescriptorBindings, bool bUpdateAllDescriptors, const int32* pCBDynamicOffsetCount, const uint32 ** ppCBDynamicOffsets)
{
} /* size: 5 */

// <003A0A15> empty/rendercontextempty.h:83
void CRenderContextEmpty::FillDynamicDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSetUsedAsLayoutTemplate, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bUpdateAllDescriptors)
{
} /* size: 7 */

// <003A09AF> empty/rendercontextempty.h:84
void CRenderContextEmpty::BeginRenderPass(RenderPassHandle_t hRenderPass, int32 nNumClearValues, const union RenderPassClearValue_t* pClearValues, const Rect_t& renderArea)
{
} /* size: 5 */

// <003A0981> empty/rendercontextempty.h:85
void CRenderContextEmpty::NextSubPass()
{
} /* size: 5 */

// <003A0953> empty/rendercontextempty.h:86
void CRenderContextEmpty::EndRenderPass()
{
} /* size: 5 */

// <003A0925> empty/rendercontextempty.h:87
void CRenderContextEmpty::GetBarrierHelper()
{
} /* size: 15 */

// <003A08BF> empty/rendercontextempty.h:88
void CRenderContextEmpty::TextureBarrier(int32 nNumTextures, const HRenderTexture* pTextures, const RenderImageLayout_t* pImageLayouts, bool bForce)
{
} /* size: 5 */

// <003A0875> empty/rendercontextempty.h:89
void CRenderContextEmpty::UAVBarrier(int32 nNumUAVs, const RenderUAVBarrier_t* pBarriers)
{
} /* size: 5 */

// <003A082B> empty/rendercontextempty.h:90
void CRenderContextEmpty::BufferBarrier(int32 nNumBuffers, const RenderBufferBarrier_t* pBarriers)
{
} /* size: 5 */

// <003A07EF> empty/rendercontextempty.h:120
void CRenderContextEmpty::SetCullMode(RenderCullMode_t eCullMode)
{
} /* size: 5 */

// <003A07B3> empty/rendercontextempty.h:121
void CRenderContextEmpty::FlipHandedness(bool bFlip)
{
} /* size: 5 */

// <003A0769> empty/rendercontextempty.h:122
void CRenderContextEmpty::SetBlendMode(RenderBlendMode_t eBlendMode, const float* pBlendFactor)
{
} /* size: 5 */

// <003A072D> empty/rendercontextempty.h:123
void CRenderContextEmpty::SetZBufferMode(RenderZBufferMode_t eZBufferMode)
{
} /* size: 5 */

// <003A06F1> empty/rendercontextempty.h:125
void CRenderContextEmpty::SetRasterizerState(RsRasterizerStateHandle_t rasterizerState)
{
} /* size: 5 */

// <003A06B5> empty/rendercontextempty.h:126
void CRenderContextEmpty::SetOverrideRasterizerState(RsRasterizerStateHandle_t rasterizerState)
{
} /* size: 5 */

// <003A066B> empty/rendercontextempty.h:128
void CRenderContextEmpty::SetDepthStencilState(RsDepthStencilStateHandle_t dsState, uint32 nStencilRef)
{
} /* size: 5 */

// <003A0621> empty/rendercontextempty.h:129
void CRenderContextEmpty::SetOverrideDepthStencilState(RsDepthStencilStateHandle_t dsState, uint32 nStencilRef)
{
} /* size: 5 */

// <003A05D7> empty/rendercontextempty.h:131
void CRenderContextEmpty::SetTessellationState(bool bEnableTessellation, uint32 nInputPatchSize)
{
} /* size: 5 */

// <003A057F> empty/rendercontextempty.h:132
void CRenderContextEmpty::SetBlendState(RsBlendStateHandle_t blendState, const float* pBlendFactor, uint32 nSampleMask)
{
} /* size: 5 */

// <003A0535> empty/rendercontextempty.h:139
void CRenderContextEmpty::PushConstants(const void* pData, uint32 nDataSize)
{
} /* size: 5 */

// <003A0507> empty/rendercontextempty.h:141
void CRenderContextEmpty::Flush()
{
} /* size: 5 */

// <003A04D9> empty/rendercontextempty.h:142
void CRenderContextEmpty::ForceFlushGPU()
{
} /* size: 5 */

// <003A04AB> empty/rendercontextempty.h:143
void CRenderContextEmpty::ForceDeviceLost()
{
} /* size: 5 */

// <003A03DB> empty/rendercontextempty.h:147
void CRenderContextEmpty::CopyFromVolumeTexture(HRenderTexture hSrcTexture, HRenderTexture hDestTexture, Rect3D_t* pSrcRect3D, int nDestX, int nDestY, int nDestZ, uint nSrcMipSlice, uint nSrcArraySlice, uint nDstMipSlice, uint nDstArraySlice, CopyTextureFlags_t nFlags)
{
} /* size: 5 */

// <003A039F> empty/rendercontextempty.h:152
void CRenderContextEmpty::BeginPixEvent(const char* pEventName)
{
} /* size: 5 */

// <003A0363> empty/rendercontextempty.h:155
void CRenderContextEmpty::PixSetMarker(const char* pEventName)
{
} /* size: 5 */

// <003A0319> empty/rendercontextempty.h:160
void CRenderContextEmpty::SetDebugFlag(RenderDebugFlag_t nFlag, bool bOnOff)
{
} /* size: 5 */

// <003A02DC> empty/rendercontextempty.h:163
void CRenderContextEmpty::SetDebugString(const char* pDebugStringFmt, ...)
{
} /* size: 5 */

// <003A0292> empty/rendercontextempty.h:164
void CRenderContextEmpty::VaSetDebugString(const char* pDebugStringFmt, typedef __va_list_tag __va_list_tag* arglist)
{
} /* size: 5 */

// <003A0264> empty/rendercontextempty.h:165
void CRenderContextEmpty::GetDebugString()
{
} /* size: 12 */

// <003A0236> empty/rendercontextempty.h:166
void CRenderContextEmpty::CopyFallbackTextureData()
{
} /* size: 5 */

// <003A01D0> empty/rendercontextempty.h:170
void CRenderContextEmpty::BindMipLevelOfTextures(int nStartTextureIndex, int nTexCount, bind_resource_list_t* pTextures, RenderShaderType_t nTargetPipelineStage)
{
} /* size: 5 */

// <003A016A> empty/rendercontextempty.h:171
void CRenderContextEmpty::BindUnordedAccessViews(int nStartUAVIndex, int nUAVCount, bind_resource_list_t* pResources, RenderShaderType_t nTargetPipelineStage)
{
} /* size: 5 */

// <003A0120> empty/rendercontextempty.h:172
void CRenderContextEmpty::MarkTexturesUsedThisFrame(int nTexCount, const texture_use_info_t* pTextureUseRecords)
{
} /* size: 5 */

// <003A00BA> empty/rendercontextempty.h:173
void CRenderContextEmpty::SetSamplerStates(int nStartSamplerIndex, int nSamplerCount, const CSamplerStateDesc* pSamplerDescs, RenderShaderType_t nTargetPipelineStage)
{
} /* size: 5 */

// <003A0062> empty/rendercontextempty.h:175
void CRenderContextEmpty::SetAlphaTestState(bool bEnable, float flAlphaTestRef, RsComparison_t comparisonMode)
{
} /* size: 5 */

// <003A0034> empty/rendercontextempty.h:177
void CRenderContextEmpty::SemaphoreSignalAtEnd()
{
} /* size: 7 */

// <0039FFF8> empty/rendercontextempty.h:178
void CRenderContextEmpty::SemaphoreWaitAtBegin(RenderSemaphoreHandle_t hSemaphoreObject)
{
} /* size: 5 */

// <0039FFAC> empty/rendercontextempty.h:180
void CRenderContextEmpty::SetSteamVrCompositorTexture(HRenderTexture hTexture, HRenderTexture hDepthTexture)
{
} /* size: 5 */

// <0039FF70> empty/rendercontextempty.h:182
void CRenderContextEmpty::SetDepthBoundsTestEnabled(bool bEnabled)
{
} /* size: 5 */

// <0039FF26> empty/rendercontextempty.h:183
void CRenderContextEmpty::SetDepthBounds(float flMinDepth, float flMaxDepth)
{
} /* size: 5 */

// <0039FEF8> empty/rendercontextempty.h:185
void CRenderContextEmpty::IsOwnedByCurrentThread()
{
} /* size: 10 */

// <0039FEBC> empty/rendercontextempty.h:199
void CRenderContextEmpty::GetSubContext(const ISceneLayer* layer)
{
} /* size: 8 */

// <0039FE8E> empty/rendercontextempty.h:206
void CRenderContextEmpty::GetAttributesForModify()
{
} /* size: 12 */

