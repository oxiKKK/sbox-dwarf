
//
// vulkan/rendercontextvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 15
//	classes: 2
//	structs: 4
//

// <0047214D> vulkan/rendercontextvulkan.h:38
// member variables: 6
// struct size: 48
struct VulkanQueryPool_t {
	VkQueryPool m_pPoolVulkan; /* 0 8 */
	VmaAllocation m_pVmaAllocation; /* 8 8 */
	VkBuffer m_pResultsBuffer; /* 16 8 */
	VkDeviceSize m_nResultsBufferSizePerSubmit; /* 24 8 */
	VkDeviceSize m_nResultsBufferSizeTotal; /* 32 8 */
	VkDeviceSize m_nQuerySizeInBytes; /* 40 8 */
};

// <004721B5> vulkan/rendercontextvulkan.h:50
// member variables: 3
// struct size: 16
struct VulkanQuery_t {
	VulkanQueryPool_t * m_pQueryPool; /* 0 8 */
	uint32_t m_nSlot; /* 8 4 */
	int32_t m_nSubmitCount; /* 12 4 */
};

// <0047135B> vulkan/rendercontextvulkan.h:57
// member variables: 3
// struct size: 24
struct VulkanCommandBufferAndPool_t {
	VkCommandBuffer m_pCmdBuffer; /* 0 8 */
	CommandBufferPool_t * m_pCmdBufferPool; /* 8 8 */
	VulkanCommandBufferType_t m_nCommandBufferType; /* 16 1 */
};

// <00B82AFE> vulkan/rendercontextvulkan.h:67
void VulkanCommandBuffer_t::VulkanCommandBuffer_t()
{
} /* size: 0 */

// <00B82AE1> vulkan/rendercontextvulkan.h:67
inline void VulkanCommandBuffer_t::VulkanCommandBuffer_t()
{
} /* size: 0 */

// <00B73A0F> vulkan/rendercontextvulkan.h:67
void VulkanCommandBuffer_t::~VulkanCommandBuffer_t()
{
} /* size: 0 */

// <00B739F2> vulkan/rendercontextvulkan.h:67
inline void VulkanCommandBuffer_t::~VulkanCommandBuffer_t()
{
} /* size: 0 */

// <00472088> vulkan/rendercontextvulkan.h:67
// member variables: 11
// struct size: 216
struct VulkanCommandBuffer_t {
	VkCommandBuffer m_pCmdBuffer; /* 0 8 */
	VulkanCommandBufferType_t m_nCommandBufferType; /* 8 1 */
	bool m_bIsIntermediateSwapchainBlt; /* 9 1 */
	CUtlFixedLinkedList<VulkanCommandBufferAndPool_t> m_additionalCmdBuffers; /* 16 80 */
	CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int>, short unsigned int> > m_queriesToReset; /* 96 40 */
	CImageLayoutTracker m_imageLayouts; /* 136 0 */
	CommandBufferPool_t * m_pCmdBufferPool; /* 176 8 */
	RenderSemaphoreHandle_t m_hSignalSemaphore; /* 184 8 */
	RenderSemaphoreHandle_t m_hWaitSemaphore; /* 192 8 */
	VulkanQuery_t * m_pPipelineStatsQuery; /* 200 8 */
	uint32_t m_nSubmitCount; /* 208 4 */
};

// <0080C74A> vulkan/rendercontextvulkan.h:111
// member functions: 320
// member variables: 54
// vtable entries: 115
// class size: 28,432
class CRenderContextVulkan : public CRenderContextBase {
public:
	/* class CRenderContextBase <ancestor>; */ /* 0 0 */
	void CRenderContextVulkan(CRenderContextVulkan* , const CRenderContextVulkan& );
	/* vulkan/rendercontextvulkan.cpp:2370 */
	ClearSubrectResult_t ClearImpl(CRenderContextVulkan* , const RenderClearInfo_t& );
	/* vulkan/rendercontextvulkan.cpp:2652 */
	virtual void Clear(CRenderContextVulkan* , const RenderClearInfo_t& );
	/* vulkan/rendercontextvulkan.cpp:2733 */
	virtual void DiscardRenderTarget(CRenderContextVulkan* , RenderClearFlags_t, uint);
	/* vulkan/rendercontextvulkan.cpp:2657 */
	virtual ClearSubrectResult_t ClearSubrect(CRenderContextVulkan* , const RenderClearInfo_t& , int, int, int, int, bool);
	/* vulkan/rendercontextvulkan.cpp:2674 */
	virtual void ClearUnorderedAccessViewUint(CRenderContextVulkan* , HRenderTexture, int, const uint32* );
	/* vulkan/rendercontextvulkan.cpp:4245 */
	virtual void SetViewports(CRenderContextVulkan* , int, const RenderViewport_t* );
	/* vulkan/rendercontextvulkan.cpp:1324 */
	virtual void ResolveDepthStencilTarget(CRenderContextVulkan* , Rect_t* , int, int, HRenderTexture);
	/* vulkan/rendercontextvulkan.cpp:1450 */
	virtual void ResolveRenderTarget(CRenderContextVulkan* , int, Rect_t* , int, int, HRenderTexture);
	/* vulkan/rendercontextvulkan.cpp:2066 */
	virtual CDisplayList* DetachCommandList(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:1970 */
	virtual void SubmitSecondaryDisplayList(CRenderContextVulkan* , CDisplayList* , bool);
	/* vulkan/rendercontextvulkan.cpp:2785 */
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(CRenderContextVulkan* , const BufferDesc_t& , DynamicLockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:2803 */
	virtual void UnlockDynamicVertexBuffer(CRenderContextVulkan* , DynamicVertexBufferHandle_t, int);
	/* vulkan/rendercontextvulkan.cpp:3077 */
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(CRenderContextVulkan* , const BufferDesc_t& , DynamicLockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:3095 */
	virtual void UnlockDynamicIndexBuffer(CRenderContextVulkan* , DynamicIndexBufferHandle_t, int);
	/* vulkan/rendercontextvulkan.cpp:2946 */
	virtual RenderBufferHandle_t LockDynamicGPUBuffer(CRenderContextVulkan* , const BufferDesc_t& , RenderBufferFlags_t, ImageFormat, DynamicLockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:2965 */
	virtual void UnlockDynamicGPUBuffer(CRenderContextVulkan* , RenderBufferHandle_t, int);
	/* vulkan/rendercontextvulkan.cpp:3114 */
	virtual bool LockIndexBuffer(CRenderContextVulkan* , IndexBufferHandle_t, int, LockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:3133 */
	virtual void UnlockIndexBuffer(CRenderContextVulkan* , IndexBufferHandle_t, int, LockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:2821 */
	virtual bool LockVertexBuffer(CRenderContextVulkan* , VertexBufferHandle_t, int, LockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:2839 */
	virtual void UnlockVertexBuffer(CRenderContextVulkan* , VertexBufferHandle_t, int, LockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:2855 */
	virtual bool LockVertexBufferRegion(CRenderContextVulkan* , VertexBufferHandle_t, int32, int32, LockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:2874 */
	virtual void UnlockVertexBufferRegion(CRenderContextVulkan* , VertexBufferHandle_t, int32, int, LockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:3149 */
	virtual bool LockIndexBufferRegion(CRenderContextVulkan* , IndexBufferHandle_t, int32, int32, LockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:3169 */
	virtual void UnlockIndexBufferRegion(CRenderContextVulkan* , IndexBufferHandle_t, int32, int, LockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:2889 */
	virtual void SetVertexData(CRenderContextVulkan* , VertexBufferHandle_t, const void* , int, int);
	/* vulkan/rendercontextvulkan.cpp:2906 */
	virtual void SetIndexData(CRenderContextVulkan* , IndexBufferHandle_t, const void* , int, int);
	/* vulkan/rendercontextvulkan.cpp:3188 */
	virtual bool BindIndexBuffer(CRenderContextVulkan* , IndexBufferHandle_t, int);
	/* vulkan/rendercontextvulkan.cpp:3209 */
	virtual bool BindIndexBuffer(CRenderContextVulkan* , DynamicIndexBufferHandle_t, int);
	/* vulkan/rendercontextvulkan.cpp:3214 */
	virtual bool BindIndexBuffer(CRenderContextVulkan* , RenderBufferHandle_t, int, int);
	/* vulkan/rendercontextvulkan.cpp:3231 */
	virtual bool BindVertexBuffer(CRenderContextVulkan* , int, VertexBufferHandle_t, int, int);
	/* vulkan/rendercontextvulkan.cpp:3262 */
	virtual bool BindVertexBuffer(CRenderContextVulkan* , int, DynamicVertexBufferHandle_t, int, int);
	/* vulkan/rendercontextvulkan.cpp:3267 */
	virtual bool BindVertexBuffer(CRenderContextVulkan* , int, RenderBufferHandle_t, int, int);
	/* vulkan/rendercontextvulkan.cpp:3298 */
	virtual void BindVertexShader(CRenderContextVulkan* , RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector* );
	/* vulkan/rendercontextvulkan.cpp:3317 */
	virtual void BindShader(CRenderContextVulkan* , RenderShaderType_t, RenderShaderHandle_t);
	/* vulkan/rendercontextvulkan.cpp:4799 */
	virtual void BindTexture(CRenderContextVulkan* , int, HRenderTexture, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	/* vulkan/rendercontextvulkan.cpp:4805 */
	virtual void BindMipLevelOfTexture(CRenderContextVulkan* , int, HRenderTexture, int, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	/* vulkan/rendercontextvulkan.cpp:4791 */
	virtual void PrepareTextureForUse(CRenderContextVulkan* , HRenderTexture, RenderColorSpace_t, int, int);
	/* vulkan/rendercontextvulkan.cpp:4354 */
	virtual void SetSamplerStatePS(CRenderContextVulkan* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* vulkan/rendercontextvulkan.cpp:4371 */
	virtual void SetSamplerStateVS(CRenderContextVulkan* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* vulkan/rendercontextvulkan.cpp:4388 */
	virtual void SetSamplerState(CRenderContextVulkan* , int32, const CSamplerStateDesc* , RenderShaderType_t);
	/* vulkan/rendercontextvulkan.cpp:5577 */
	virtual void SetTextureData(CRenderContextVulkan* , HRenderTexture, const CTextureDesc* , const void* , int, int, const Rect3D_t* , uint, const DataRecycleDelegate_t* );
	/* vulkan/rendercontextvulkan.cpp:6093 */
	virtual void LockDynamicTexture(CRenderContextVulkan* , HRenderTexture, LockedDynamicTexture_t& );
	/* vulkan/rendercontextvulkan.cpp:6100 */
	virtual void UnlockDynamicTexture(CRenderContextVulkan* , HRenderTexture);
	/* vulkan/rendercontextvulkan.cpp:6105 */
	virtual void ReadTexturePixels(CRenderContextVulkan* , HRenderTexture, IReadTexturePixelsCallback* , Rect_t* , int, int, bool);
	/* vulkan/rendercontextvulkan.cpp:6146 */
	virtual void ReadBuffer(CRenderContextVulkan* , RenderBufferHandle_t, IReadBufferCallback* , int32, int32, bool);
	/* vulkan/rendercontextvulkan.cpp:6270 */
	virtual void GenerateMipMaps(CRenderContextVulkan* , HRenderTexture);
	/* vulkan/rendercontextvulkan.cpp:3367 */
	virtual void Draw(CRenderContextVulkan* , RenderPrimitiveType_t, int, int);
	/* vulkan/rendercontextvulkan.cpp:3401 */
	virtual void DrawInstanced(CRenderContextVulkan* , RenderPrimitiveType_t, int, int, int);
	/* vulkan/rendercontextvulkan.cpp:3437 */
	virtual void DrawIndexed(CRenderContextVulkan* , RenderPrimitiveType_t, int, int, int, int);
	/* vulkan/rendercontextvulkan.cpp:3474 */
	virtual void DrawIndexedInstanced(CRenderContextVulkan* , RenderPrimitiveType_t, int, int, int, int, int, uint);
	/* vulkan/rendercontextvulkan.cpp:3510 */
	virtual void MultiDrawIndexed(CRenderContextVulkan* , RenderPrimitiveType_t, int, const RenderMultiDrawIndexedInfo_t* , uint32, uint32, int);
	/* vulkan/rendercontextvulkan.cpp:3554 */
	virtual void DrawInstancedIndirect(CRenderContextVulkan* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:3578 */
	virtual void DrawIndexedInstancedIndirect(CRenderContextVulkan* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:3602 */
	virtual void MultiDrawIndexedInstancedIndirect(CRenderContextVulkan* , RenderPrimitiveType_t, uint32, RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:3627 */
	virtual void MultiDrawIndexedInstancedIndirectCount(CRenderContextVulkan* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32, uint32, RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:3672 */
	virtual void DispatchComputeShader(CRenderContextVulkan* , uint32, uint32, uint32);
	/* vulkan/rendercontextvulkan.cpp:3749 */
	virtual void DispatchComputeShaderIndirect(CRenderContextVulkan* , RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:3801 */
	virtual void BuildBLAS(CRenderContextVulkan* , RenderBLASHandle_t, BLASTriangleData_t* , int);
	/* vulkan/rendercontextvulkan.cpp:3814 */
	virtual void CompactBLAS(CRenderContextVulkan* , RenderBLASHandle_t, RenderBLASHandle_t);
	/* vulkan/rendercontextvulkan.cpp:3826 */
	virtual void BuildTLAS(CRenderContextVulkan* , RenderTLASHandle_t, TLASInstance_t* , int);
	/* vulkan/rendercontextvulkan.cpp:3839 */
	virtual void BindRayTracingPipeline(CRenderContextVulkan* , RenderRayTracePipelineHandle_t);
	/* vulkan/rendercontextvulkan.cpp:3863 */
	virtual void UpdateRayTraceShaderBindingTable(CRenderContextVulkan* , IRaytraceShaderBindingTable* );
	/* vulkan/rendercontextvulkan.cpp:3876 */
	virtual void TraceRays(CRenderContextVulkan* , IRaytraceShaderBindingTable* , uint32, uint32, uint32);
	/* vulkan/rendercontextvulkan.cpp:3936 */
	virtual void TraceRaysIndirect(CRenderContextVulkan* , IRaytraceShaderBindingTable* , RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:4021 */
	virtual void CopyGPUBufferHiddenStructureCount(CRenderContextVulkan* , RenderBufferHandle_t, RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:3996 */
	virtual void SetGPUBufferHiddenStructureCount(CRenderContextVulkan* , RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:4065 */
	virtual void FillGPUBuffer(CRenderContextVulkan* , RenderBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:4084 */
	virtual void SetGPUBufferData(CRenderContextVulkan* , RenderBufferHandle_t, const void* , uint32, uint32);
	/* vulkan/rendercontextvulkan.cpp:5204 */
	void SetConstantBufferDataInternal(CRenderContextVulkan* , ConstantBufferHandle_t, uint32, uint32, const void* const* , uint32);
	/* vulkan/rendercontextvulkan.cpp:5259 */
	virtual void SetConstantBufferData(CRenderContextVulkan* , ConstantBufferHandle_t, const void* , uint32);
	/* vulkan/rendercontextvulkan.cpp:5264 */
	virtual void SetConstantBufferViewsData(CRenderContextVulkan* , ConstantBufferHandle_t, uint32, uint32, const void* const* , uint32);
	/* vulkan/rendercontextvulkan.cpp:5309 */
	virtual void BindConstantBuffer(CRenderContextVulkan* , RenderShaderType_t, ConstantBufferHandle_t, int);
	/* vulkan/rendercontextvulkan.cpp:5314 */
	virtual void BindConstantBufferView(CRenderContextVulkan* , RenderShaderType_t, ConstantBufferHandle_t, uint32, int);
	/* vulkan/rendercontextvulkan.cpp:5322 */
	virtual void PushConstants(CRenderContextVulkan* , const void* , uint32);
	/* vulkan/rendercontextvulkan.cpp:5341 */
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(CRenderContextVulkan* , VertexBufferHandle_t);
	/* vulkan/rendercontextvulkan.cpp:6349 */
	virtual void ForceFlushGPU(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.h:198 */
	virtual void ForceDeviceLost(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:490 */
	virtual void BindRenderTargets(CRenderContextVulkan* , const RenderTargetDesc_t& );
	/* vulkan/rendercontextvulkan.cpp:1650 */
	virtual void CopyTexture(CRenderContextVulkan* , HRenderTexture, HRenderTexture, Rect_t* , int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* vulkan/rendercontextvulkan.cpp:1824 */
	virtual void CopyFromVolumeTexture(CRenderContextVulkan* , HRenderTexture, HRenderTexture, Rect3D_t* , int, int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* vulkan/rendercontextvulkan.cpp:298 */
	virtual void BeginPixEvent(CRenderContextVulkan* , Color, const char* );
	/* vulkan/rendercontextvulkan.cpp:311 */
	virtual void EndPixEvent(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:322 */
	virtual void PixSetMarker(CRenderContextVulkan* , Color, const char* );
	/* vulkan/rendercontextvulkan.cpp:5180 */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(CRenderContextVulkan* , uint32, DynamicLockDesc_t* );
	/* vulkan/rendercontextvulkan.cpp:5199 */
	virtual void UnlockDynamicConstantBuffer(CRenderContextVulkan* , ConstantBufferHandle_t, uint32);
	/* vulkan/rendercontextvulkan.cpp:2976 */
	virtual void BeginQuery(CRenderContextVulkan* , RenderQueryHandle_t);
	/* vulkan/rendercontextvulkan.cpp:3027 */
	virtual void EndQuery(CRenderContextVulkan* , RenderQueryHandle_t);
	/* vulkan/rendercontextvulkan.h:214 */
	virtual void SetDebugFlag(CRenderContextVulkan* , RenderDebugFlag_t, bool);
	/* vulkan/rendercontextvulkan.cpp:4299 */
	virtual void SetScissorRects(CRenderContextVulkan* , int, const Rect_t* );
	/* vulkan/rendercontextvulkan.cpp:6087 */
	virtual void CopyFallbackTextureData(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:6339 */
	virtual void QueueDeviceThreadCallback(CRenderContextVulkan* , IDeviceThreadCallback* );
	/* vulkan/rendercontextvulkan.cpp:4841 */
	virtual void BindMipLevelOfTextures(CRenderContextVulkan* , int, int, bind_resource_list_t* , RenderShaderType_t);
	/* vulkan/rendercontextvulkan.cpp:4923 */
	virtual void BindUnordedAccessViews(CRenderContextVulkan* , int, int, bind_resource_list_t* , RenderShaderType_t);
	/* vulkan/rendercontextvulkan.cpp:4402 */
	virtual void SetSamplerStates(CRenderContextVulkan* , int, int, const CSamplerStateDesc* , RenderShaderType_t);
	/* vulkan/rendercontextvulkan.cpp:5029 */
	virtual void BindDescriptorSets(CRenderContextVulkan* , int32, int32, const RenderDescriptorSetHandle_t* , const int32* , const uint32** );
	/* vulkan/rendercontextvulkan.cpp:5093 */
	virtual void FillAndBindDynamicDescriptorSet(CRenderContextVulkan* , RenderDescriptorSetHandle_t, int32, int32, const RenderDescriptorBinding_t* , bool, const int32* , const uint32** );
	/* vulkan/rendercontextvulkan.cpp:5141 */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(CRenderContextVulkan* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* , bool);
	/* vulkan/rendercontextvulkan.cpp:6509 */
	virtual void BeginRenderPass(CRenderContextVulkan* , RenderPassHandle_t, int32, const union RenderPassClearValue_t* , const Rect_t& );
	/* vulkan/rendercontextvulkan.cpp:6612 */
	virtual void NextSubPass(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:6642 */
	virtual void EndRenderPass(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:6724 */
	virtual void TextureBarrier(CRenderContextVulkan* , int32, const HRenderTexture* , const RenderImageLayout_t* , bool);
	/* vulkan/rendercontextvulkan.cpp:6907 */
	virtual void UAVBarrier(CRenderContextVulkan* , int32, const RenderUAVBarrier_t* );
	/* vulkan/rendercontextvulkan.cpp:6913 */
	virtual void BufferBarrier(CRenderContextVulkan* , int32, const RenderBufferBarrier_t* );
	/* vulkan/rendercontextvulkan.cpp:6718 */
	virtual unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:6422 */
	virtual void SetSteamVrCompositorTexture(CRenderContextVulkan* , HRenderTexture, HRenderTexture);
	/* vulkan/rendercontextvulkan.cpp:6475 */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:6491 */
	virtual void SemaphoreWaitAtBegin(CRenderContextVulkan* , RenderSemaphoreHandle_t);
	/* vulkan/rendercontextvulkan.cpp:134 */
	virtual void SetStatesToDefault(CRenderContextVulkan* , uint32, uint32);
	/* vulkan/rendercontextvulkan.cpp:6919 */
	virtual void SetDepthBoundsTestEnabled(CRenderContextVulkan* , bool);
	/* vulkan/rendercontextvulkan.cpp:6931 */
	virtual void SetDepthBounds(CRenderContextVulkan* , float, float);
	/* vulkan/rendercontextvulkan.cpp:117 */
	virtual void OnReleaseRenderContext(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:154 */
	virtual void SetDefaultState(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:5356 */
	virtual void QueuePresent(CRenderContextVulkan* , SwapChainHandle_t, int);
	/* vulkan/rendercontextvulkan.cpp:5557 */
	virtual void SetIsSecondaryContext(CRenderContextVulkan* , RenderContextCreationInfo_t* , bool);
	/* vulkan/rendercontextvulkan.cpp:6375 */
	virtual void CopyBuffer(CRenderContextVulkan* , IndexBufferHandle_t, IndexBufferHandle_t);
	/* vulkan/rendercontextvulkan.cpp:56 */
	void CRenderContextVulkan(CRenderContextVulkan* , VkDevice, const VulkanPhysicalDeviceInfo_t* );
	/* vulkan/rendercontextvulkan.cpp:87 */
	virtual void ~CRenderContextVulkan(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:101 */
	void SetPerThreadData(CRenderContextVulkan* , PerThreadDataVulkan_t* );
	/* vulkan/rendercontextvulkan.cpp:112 */
	virtual bool IsOwnedByCurrentThread(const CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:5849 */
	void SetTextureDataFromResource(CRenderContextVulkan* , CVulkanImage* , const TextureSpecification_t* , const TextureSpecification_t* , const void* , int);
	/* vulkan/rendercontextvulkan.cpp:5617 */
	void SetTextureDataInternal(CRenderContextVulkan* , HRenderTexture, const TextureSpecification_t* , const CTextureDesc* , const void* , int, int, int, const Rect3D_t* , uint, const DataRecycleDelegate_t* , const char* );
	/* vulkan/rendercontextvulkan.cpp:6040 */
	void CopyTextureData(CRenderContextVulkan* , CVulkanImage* , CVulkanImage* , int, int, int, int);
	/* vulkan/rendercontextvulkan.cpp:5752 */
	void WriteDataIntoTexture(CRenderContextVulkan* , CVulkanImage* , int, int, int, int, int, int, int, int, int, int, ImageFormat, VkDeviceMemory, VkBuffer, VkDeviceSize, int, const ImageFormatInfo_t& );
	/* vulkan/rendercontextvulkan.cpp:479 */
	void PrepareImage(CRenderContextVulkan* , CVulkanImage* , VkImageLayout, RenderMultisampleType_t, VkImageAspectFlags);
	/* vulkan/rendercontextvulkan.cpp:894 */
	void StopCurrentRenderPass(CRenderContextVulkan* , VkCommandBuffer);
	/* vulkan/rendercontextvulkan.cpp:4422 */
	bool AllocatePerFrameDynamicPooled(CRenderContextVulkan* , VulkanMemoryPoolType_t, size_t, size_t, const void* , VkDeviceMemory* , VkDeviceSize* , VkBuffer* , void** );
	/* vulkan/rendercontextvulkan.cpp:4489 */
	void DestroyDynamicMemoryPools(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:284 */
	void SetRenderContextFlags(CRenderContextVulkan* , uint32);
	/* vulkan/rendercontextvulkan.cpp:261 */
	void ResetDefaultSamplerStateIfRequired(CRenderContextVulkan* , uint32_t);
	/* vulkan/rendercontextvulkan.h:284 */
	bool IsAsyncComputeCommandBuffer(const CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:6756 */
	void PerformBarriers(CRenderContextVulkan* , int32, const RenderUAVBarrier_t* , int32, const RenderBufferBarrier_t* );
	/* vulkan/rendercontextvulkan.cpp:2927 */
	void FillGPUBufferFormatted(CRenderContextVulkan* , RenderBufferHandle_t, uint32, const void* );
	/* vulkan/rendercontextvulkan.h:472 */
	VulkanCommandBuffer_t* GetVulkanCommandBuffer(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:328 */
	void MarkIssuesCommands(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:6947 */
	void CopyVulkanBuffer(CRenderContextVulkan* , VkBuffer, VkBuffer, VkDeviceSize, VkDeviceSize, VkDeviceSize);
	/* vulkan/rendercontextvulkan.cpp:6975 */
	void CopyVulkanImage(CRenderContextVulkan* , CVulkanImage* , VkImage, uint32, uint32, uint32, uint32, uint32, RenderMultisampleType_t, VkImageAspectFlags);
	/* vulkan/rendercontextvulkan.cpp:7048 */
	void UpdateSwappedImageLayout(CRenderContextVulkan* , CVulkanImage* , VkImageLayout, VkImageAspectFlags);
protected:
	/* vulkan/rendercontextvulkan.cpp:2203 */
	void ClearColorUsingShaders(CRenderContextVulkan* , int, const Vector4D& , int, int);
	/* vulkan/rendercontextvulkan.cpp:2308 */
	void ClearDepthUsingShaders(CRenderContextVulkan* , int, float32, uint8);
	/* vulkan/rendercontextvulkan.cpp:1033 */
	void ResolveUsingShaders(CRenderContextVulkan* , CVulkanImage* , CVulkanImage* , const TextureSpecification_t* , const TextureSpecification_t* , Rect_t* , int, int, HRenderTexture, bool, RenderColorSpace_t, VkSurfaceTransformFlagsKHR);
	/* vulkan/rendercontextvulkan.cpp:4695 */
	VkImageLayout AddImageBarrier(CRenderContextVulkan* , VulkanCommandBuffer_t* , HRenderTexture, RenderColorSpace_t, int, const char* );
	/* vulkan/rendercontextvulkan.cpp:2812 */
	void DestroyAllDynamicVertexBuffers(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:3104 */
	void DestroyAllDynamicIndexBuffers(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:4499 */
	void ApplyDelayedChanges(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:4146 */
	bool SetupForDraw(CRenderContextVulkan* , RenderPrimitiveType_t);
	/* vulkan/rendercontextvulkan.cpp:5271 */
	void BindConstantBufferInternal(CRenderContextVulkan* , RenderShaderType_t, ConstantBufferHandle_t, uint32, int);
	/* vulkan/rendercontextvulkan.h:324 */
	void ResolveTargetVulkan(CRenderContextVulkan* , CVulkanImage* , CVulkanImage* , Rect_t* , int, int, HRenderTexture, bool);
	/* vulkan/rendercontextvulkan.cpp:4336 */
	VkSampler GetSamplerState(CRenderContextVulkan* , RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* vulkan/rendercontextvulkan.cpp:4347 */
	VkSampler GetSamplerState(CRenderContextVulkan* , const CSamplerStateDesc* );
	/* vulkan/rendercontextvulkan.cpp:710 */
	void UpdateImplicitRenderPass(CRenderContextVulkan* , VulkanCommandBuffer_t* , VulkanFramebufferState_t& );
	/* vulkan/rendercontextvulkan.cpp:869 */
	void BeginImplicitRenderPass(CRenderContextVulkan* , VulkanCommandBuffer_t* , VkFramebuffer, VkRenderPass, const VulkanFramebufferState_t& );
	/* vulkan/rendercontextvulkan.cpp:805 */
	void TransitionRenderTargetImageLayouts(CRenderContextVulkan* , VulkanCommandBuffer_t* , const VulkanFramebufferState_t& );
	/* vulkan/rendercontextvulkan.cpp:693 */
	void ResetLoadStoreOps(CRenderContextVulkan* );
	/* vulkan/rendercontextvulkan.cpp:926 */
	void UpdateDynamicRendering(CRenderContextVulkan* , VulkanCommandBuffer_t* , VulkanFramebufferState_t& );
	/* vulkan/rendercontextvulkan.cpp:6695 */
	void SetViewportForSubPass(CRenderContextVulkan* , const CRenderPassVulkan* , uint32_t, const Rect_t& );
	/* vulkan/rendercontextvulkan.cpp:4092 */
	void SetupHiddenUAVCounters(CRenderContextVulkan* , VulkanCommandBuffer_t* , RenderShaderType_t);
	/* vulkan/rendercontextvulkan.cpp:835 */
	void ClampRenderArea(CRenderContextVulkan* , VkRect2D& , uint32, uint32);
	bool m_bCommandsQueueToCommandBuffer; /* 5672 1 */
	RenderTargetDesc_t m_RenderTargetDesc; /* 5680 120 */
	VulkanFramebufferState_t m_FBState; /* 5800 368 */
	VkRenderPass m_pCurrentRenderPass; /* 6168 8 */
	uint32_t m_nCurrentRenderPassSubPass; /* 6176 4 */
	uint32_t m_nCurrentRenderPassSubPassCount; /* 6180 4 */
	CRenderPassVulkan * m_pCurrentExplicitRenderPass; /* 6184 8 */
	VkFramebuffer m_pCurrentFramebuffer; /* 6192 8 */
	bool m_bBeganDynamicRendering; /* 6200 1 */
	VkRect2D m_lastRenderArea; /* 6204 16 */
	VkSampler m_pLastDefaultSamplerState; /* 6224 8 */
	uint32_t m_nDefaultSamplerId; /* 6232 4 */
	RenderPassHandle_t m_hCreationRenderPass; /* 6236 4 */
	int m_nCreationSubPass; /* 6240 4 */
	uint32 m_nUAVInitialCounts[4][8]; /* 6244 128 */
	CVertexBufferVulkan * m_pBoundUAVs[4][8]; /* 6376 256 */
	uint8 * m_pPushConstantMem; /* 6632 8 */
	uint32_t m_nPushConstantUpdateSize; /* 6640 4 */
	uint32_t m_nDescriptorSetDirtyMask; /* 6644 4 */
	int32_t m_nMaxDescriptorSetBound; /* 6648 4 */
	int m_nScissorCount; /* 6652 4 */
	Rect_t m_pScissor[16]; /* 6656 256 */
	CRenderAttributes m_attributes; /* 6912 1184 */
	uint m_nVulkanChangeFlags; /* 8096 4 */
	VkDevice m_pDeviceVulkan; /* 8104 8 */
	CPipelineVulkan m_Pipeline; /* 8112 0 */
	CRayTracePipelineVulkan * m_pRayTracePipeline; /* 27816 8 */
	CUtlVector<DynamicVertexBufferHandle_t__*, CUtlMemory<DynamicVertexBufferHandle_t__*, int> > m_DynamicVBs; /* 27824 32 */
	CUtlVector<DynamicIndexBufferHandle_t__*, CUtlMemory<DynamicIndexBufferHandle_t__*, int> > m_DynamicIBs; /* 27856 32 */
	bool m_bViewportSet; /* 27888 1 */
	bool m_bScissorSet; /* 27889 1 */
	bool m_bMultiSubmit; /* 27890 1 */
	VkPrimitiveTopology m_nLastDynamicStatePrimitiveTopology; /* 27892 4 */
	VkPolygonMode m_nLastDynamicStatePolygonMode; /* 27896 4 */
	bool m_bBoundDefaultVB; /* 27900 1 */
	bool m_bRenderInSecondaryCommandBuffers; /* 27901 1 */
	bool m_bAsyncComputeCommandBuffer; /* 27902 1 */
	bool m_bExplicitRenderPasses; /* 27903 1 */
	bool m_bAcquireDescriptorPool; /* 27904 1 */
	VulkanDescriptorSetPool_t * m_pCurrentDescriptorSetPool; /* 27912 8 */
	PerThreadDataVulkan_t * m_pPerThreadData; /* 27920 8 */
	VulkanMemoryPool_t * m_pMemoryPoolPMB[9]; /* 27928 72 */
	InputLayoutVulkan_t * m_pInputLayout; /* 28000 8 */
	/* vulkan/rendercontextvulkan.cpp:769 */
	void UpdateRenderTargetChangeStats(CRenderContextVulkan* );
	CRenderPipelineStats m_Stats; /* 28008 120 */
	uint m_nTotalDraws; /* 28128 4 */
	uint m_nTotalInstances; /* 28132 4 */
	uint m_nTotalVertices; /* 28136 4 */
	uint m_nTotalPrims; /* 28140 4 */
	char m_szCombinedSecondaryNames[255]; /* 28144 255 */
	uint32 m_nSecondaryCommandBufferCount; /* 28400 4 */
	uint32 m_nRenderPassSubPassCount; /* 28404 4 */
	RenderPipelineStatsCommandListQueries_t m_CommandListQueries; /* 28408 16 */
	const class VulkanPhysicalDeviceInfo_t * m_pPhysicalDeviceInfo; /* 28424 8 */
	/* vulkan/rendercontextvulkan.cpp:6208 */
	virtual void ReadBuffer(CRenderContextVulkan* , IndexBufferHandle_t, IReadBufferCallback* , int32, int32, bool);
	bool AllocatePerFrameDynamicPooled(class CRenderContextVulkan *, enum VulkanMemoryPoolType_t, size_t, size_t, const void  *, VkDeviceMemory *, VkDeviceSize *, VkBuffer *, void * *); /* linkage=_ZN20CRenderContextVulkan29AllocatePerFrameDynamicPooledE22VulkanMemoryPoolType_tmmPKvPP16VkDeviceMemory_TPmPP10VkBuffer_TPPv */
	void StopCurrentRenderPass(class CRenderContextVulkan *, VkCommandBuffer); /* linkage=_ZN20CRenderContextVulkan21StopCurrentRenderPassEP17VkCommandBuffer_T */
	bool IsAsyncComputeCommandBuffer(const class CRenderContextVulkan  *); /* linkage=_ZNK20CRenderContextVulkan27IsAsyncComputeCommandBufferEv */
	virtual class CDisplayList * DetachCommandList(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan17DetachCommandListEv */
	void CopyVulkanBuffer(class CRenderContextVulkan *, VkBuffer, VkBuffer, VkDeviceSize, VkDeviceSize, VkDeviceSize); /* linkage=_ZN20CRenderContextVulkan16CopyVulkanBufferEP10VkBuffer_TS1_mmm */
	virtual void SetGPUBufferData(class CRenderContextVulkan *, RenderBufferHandle_t, const void  *, uint32, uint32); /* linkage=_ZN20CRenderContextVulkan16SetGPUBufferDataEP22RenderBufferHandle_t__PKvjj */
	/* <883aa3> vulkan/rendercontextvulkan.cpp:328 */
	void MarkIssuesCommands(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan18MarkIssuesCommandsEv */
	class VulkanCommandBuffer_t * GetVulkanCommandBuffer(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan22GetVulkanCommandBufferEv */
	void CRenderContextVulkan(class CRenderContextVulkan *, const class CRenderContextVulkan  &); /* linkage=_ZN20CRenderContextVulkanC4ERKS_ */
	enum ClearSubrectResult_t ClearImpl(class CRenderContextVulkan *, const class RenderClearInfo_t  &); /* linkage=_ZN20CRenderContextVulkan9ClearImplERK17RenderClearInfo_t */
	virtual void Clear(class CRenderContextVulkan *, const class RenderClearInfo_t  &); /* linkage=_ZN20CRenderContextVulkan5ClearERK17RenderClearInfo_t */
	virtual void DiscardRenderTarget(class CRenderContextVulkan *, enum RenderClearFlags_t, uint); /* linkage=_ZN20CRenderContextVulkan19DiscardRenderTargetE18RenderClearFlags_tj */
	virtual enum ClearSubrectResult_t ClearSubrect(class CRenderContextVulkan *, const class RenderClearInfo_t  &, int, int, int, int, bool); /* linkage=_ZN20CRenderContextVulkan12ClearSubrectERK17RenderClearInfo_tiiiib */
	virtual void ClearUnorderedAccessViewUint(class CRenderContextVulkan *, HRenderTexture, int, const uint32  *); /* linkage=_ZN20CRenderContextVulkan28ClearUnorderedAccessViewUintE11CWeakHandleI31InfoForResourceTypeCTextureBaseEiPKj */
	virtual void SetViewports(class CRenderContextVulkan *, int, const class RenderViewport_t  *); /* linkage=_ZN20CRenderContextVulkan12SetViewportsEiPK16RenderViewport_t */
	virtual void ResolveDepthStencilTarget(class CRenderContextVulkan *, class Rect_t *, int, int, HRenderTexture); /* linkage=_ZN20CRenderContextVulkan25ResolveDepthStencilTargetEP6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void ResolveRenderTarget(class CRenderContextVulkan *, int, class Rect_t *, int, int, HRenderTexture); /* linkage=_ZN20CRenderContextVulkan19ResolveRenderTargetEiP6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SubmitSecondaryDisplayList(class CRenderContextVulkan *, class CDisplayList *, bool); /* linkage=_ZN20CRenderContextVulkan26SubmitSecondaryDisplayListEP12CDisplayListb */
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(class CRenderContextVulkan *, const class BufferDesc_t  &, class DynamicLockDesc_t *); /* linkage=_ZN20CRenderContextVulkan23LockDynamicVertexBufferERK12BufferDesc_tP17DynamicLockDesc_t */
	/* <87e807> vulkan/rendercontextvulkan.cpp:2803 */
	virtual void UnlockDynamicVertexBuffer(class CRenderContextVulkan *, DynamicVertexBufferHandle_t, int); /* linkage=_ZN20CRenderContextVulkan25UnlockDynamicVertexBufferEP29DynamicVertexBufferHandle_t__i */
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(class CRenderContextVulkan *, const class BufferDesc_t  &, class DynamicLockDesc_t *); /* linkage=_ZN20CRenderContextVulkan22LockDynamicIndexBufferERK12BufferDesc_tP17DynamicLockDesc_t */
	/* <87ea85> vulkan/rendercontextvulkan.cpp:3095 */
	virtual void UnlockDynamicIndexBuffer(class CRenderContextVulkan *, DynamicIndexBufferHandle_t, int); /* linkage=_ZN20CRenderContextVulkan24UnlockDynamicIndexBufferEP28DynamicIndexBufferHandle_t__i */
	virtual RenderBufferHandle_t LockDynamicGPUBuffer(class CRenderContextVulkan *, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat, class DynamicLockDesc_t *); /* linkage=_ZN20CRenderContextVulkan20LockDynamicGPUBufferERK12BufferDesc_t19RenderBufferFlags_t11ImageFormatP17DynamicLockDesc_t */
	virtual void UnlockDynamicGPUBuffer(class CRenderContextVulkan *, RenderBufferHandle_t, int); /* linkage=_ZN20CRenderContextVulkan22UnlockDynamicGPUBufferEP22RenderBufferHandle_t__i */
	virtual bool LockIndexBuffer(class CRenderContextVulkan *, IndexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN20CRenderContextVulkan15LockIndexBufferEP21IndexBufferHandle_t__iP10LockDesc_t */
	/* <882ccd> vulkan/rendercontextvulkan.cpp:3133 */
	virtual void UnlockIndexBuffer(class CRenderContextVulkan *, IndexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN20CRenderContextVulkan17UnlockIndexBufferEP21IndexBufferHandle_t__iP10LockDesc_t */
	virtual bool LockVertexBuffer(class CRenderContextVulkan *, VertexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN20CRenderContextVulkan16LockVertexBufferEP22VertexBufferHandle_t__iP10LockDesc_t */
	/* <881de9> vulkan/rendercontextvulkan.cpp:2839 */
	virtual void UnlockVertexBuffer(class CRenderContextVulkan *, VertexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN20CRenderContextVulkan18UnlockVertexBufferEP22VertexBufferHandle_t__iP10LockDesc_t */
	virtual bool LockVertexBufferRegion(class CRenderContextVulkan *, VertexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN20CRenderContextVulkan22LockVertexBufferRegionEP22VertexBufferHandle_t__iiP10LockDesc_t */
	/* <8820ce> vulkan/rendercontextvulkan.cpp:2874 */
	virtual void UnlockVertexBufferRegion(class CRenderContextVulkan *, VertexBufferHandle_t, int32, int, class LockDesc_t *); /* linkage=_ZN20CRenderContextVulkan24UnlockVertexBufferRegionEP22VertexBufferHandle_t__iiP10LockDesc_t */
	virtual bool LockIndexBufferRegion(class CRenderContextVulkan *, IndexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN20CRenderContextVulkan21LockIndexBufferRegionEP21IndexBufferHandle_t__iiP10LockDesc_t */
	/* <882fb2> vulkan/rendercontextvulkan.cpp:3169 */
	virtual void UnlockIndexBufferRegion(class CRenderContextVulkan *, IndexBufferHandle_t, int32, int, class LockDesc_t *); /* linkage=_ZN20CRenderContextVulkan23UnlockIndexBufferRegionEP21IndexBufferHandle_t__iiP10LockDesc_t */
	/* <8827d6> vulkan/rendercontextvulkan.cpp:2889 */
	virtual void SetVertexData(class CRenderContextVulkan *, VertexBufferHandle_t, const void  *, int, int); /* linkage=_ZN20CRenderContextVulkan13SetVertexDataEP22VertexBufferHandle_t__PKvii */
	/* <88286c> vulkan/rendercontextvulkan.cpp:2906 */
	virtual void SetIndexData(class CRenderContextVulkan *, IndexBufferHandle_t, const void  *, int, int); /* linkage=_ZN20CRenderContextVulkan12SetIndexDataEP21IndexBufferHandle_t__PKvii */
	/* <87dc3e> vulkan/rendercontextvulkan.cpp:3188 */
	virtual bool BindIndexBuffer(class CRenderContextVulkan *, IndexBufferHandle_t, int); /* linkage=_ZN20CRenderContextVulkan15BindIndexBufferEP21IndexBufferHandle_t__i */
	/* <87efb1> vulkan/rendercontextvulkan.cpp:3209 */
	virtual bool BindIndexBuffer(class CRenderContextVulkan *, DynamicIndexBufferHandle_t, int); /* linkage=_ZN20CRenderContextVulkan15BindIndexBufferEP28DynamicIndexBufferHandle_t__i */
	virtual bool BindIndexBuffer(class CRenderContextVulkan *, RenderBufferHandle_t, int, int); /* linkage=_ZN20CRenderContextVulkan15BindIndexBufferEP22RenderBufferHandle_t__ii */
	/* <87e4d9> vulkan/rendercontextvulkan.cpp:3231 */
	virtual bool BindVertexBuffer(class CRenderContextVulkan *, int, VertexBufferHandle_t, int, int); /* linkage=_ZN20CRenderContextVulkan16BindVertexBufferEiP22VertexBufferHandle_t__ii */
	/* <87e152> vulkan/rendercontextvulkan.cpp:3262 */
	virtual bool BindVertexBuffer(class CRenderContextVulkan *, int, DynamicVertexBufferHandle_t, int, int); /* linkage=_ZN20CRenderContextVulkan16BindVertexBufferEiP29DynamicVertexBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class CRenderContextVulkan *, int, RenderBufferHandle_t, int, int); /* linkage=_ZN20CRenderContextVulkan16BindVertexBufferEiP22RenderBufferHandle_t__ii */
	virtual void BindVertexShader(class CRenderContextVulkan *, RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector  *); /* linkage=_ZN20CRenderContextVulkan16BindVertexShaderEP22RenderShaderHandle_t__P21RenderInputLayout_t__PK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS5_iEE */
	/* <8808a5> vulkan/rendercontextvulkan.cpp:3317 */
	virtual void BindShader(class CRenderContextVulkan *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN20CRenderContextVulkan10BindShaderE18RenderShaderType_tP22RenderShaderHandle_t__ */
	virtual void BindTexture(class CRenderContextVulkan *, int, HRenderTexture, enum RenderTextureDimension_t, enum RenderShaderType_t, enum RenderColorSpace_t, int); /* linkage=_ZN20CRenderContextVulkan11BindTextureEi11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderShaderType_t18RenderColorSpace_ti */
	virtual void BindMipLevelOfTexture(class CRenderContextVulkan *, int, HRenderTexture, int, enum RenderTextureDimension_t, enum RenderShaderType_t, enum RenderColorSpace_t, int); /* linkage=_ZN20CRenderContextVulkan21BindMipLevelOfTextureEi11CWeakHandleI31InfoForResourceTypeCTextureBaseEi24RenderTextureDimension_t18RenderShaderType_t18RenderColorSpace_ti */
	virtual void PrepareTextureForUse(class CRenderContextVulkan *, HRenderTexture, enum RenderColorSpace_t, int, int); /* linkage=_ZN20CRenderContextVulkan20PrepareTextureForUseE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_tii */
	virtual void SetSamplerStatePS(class CRenderContextVulkan *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN20CRenderContextVulkan17SetSamplerStatePSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerStateVS(class CRenderContextVulkan *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN20CRenderContextVulkan17SetSamplerStateVSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerState(class CRenderContextVulkan *, int32, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN20CRenderContextVulkan15SetSamplerStateEiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void SetTextureData(class CRenderContextVulkan *, HRenderTexture, const class CTextureDesc  *, const void  *, int, int, const class Rect3D_t  *, uint, const DataRecycleDelegate_t  *); /* linkage=_ZN20CRenderContextVulkan14SetTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK12CTextureDescPKviiPK8Rect3D_tjPK12CUtlDelegateIFvS7_EE */
	virtual void LockDynamicTexture(class CRenderContextVulkan *, HRenderTexture, class LockedDynamicTexture_t &); /* linkage=_ZN20CRenderContextVulkan18LockDynamicTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseER22LockedDynamicTexture_t */
	virtual void UnlockDynamicTexture(class CRenderContextVulkan *, HRenderTexture); /* linkage=_ZN20CRenderContextVulkan20UnlockDynamicTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void ReadTexturePixels(class CRenderContextVulkan *, HRenderTexture, class IReadTexturePixelsCallback *, class Rect_t *, int, int, bool); /* linkage=_ZN20CRenderContextVulkan17ReadTexturePixelsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP26IReadTexturePixelsCallbackP6Rect_tiib */
	virtual void ReadBuffer(class CRenderContextVulkan *, RenderBufferHandle_t, class IReadBufferCallback *, int32, int32, bool); /* linkage=_ZN20CRenderContextVulkan10ReadBufferEP22RenderBufferHandle_t__P19IReadBufferCallbackiib */
	virtual void GenerateMipMaps(class CRenderContextVulkan *, HRenderTexture); /* linkage=_ZN20CRenderContextVulkan15GenerateMipMapsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void Draw(class CRenderContextVulkan *, enum RenderPrimitiveType_t, int, int); /* linkage=_ZN20CRenderContextVulkan4DrawE21RenderPrimitiveType_tii */
	virtual void DrawInstanced(class CRenderContextVulkan *, enum RenderPrimitiveType_t, int, int, int); /* linkage=_ZN20CRenderContextVulkan13DrawInstancedE21RenderPrimitiveType_tiii */
	virtual void DrawIndexed(class CRenderContextVulkan *, enum RenderPrimitiveType_t, int, int, int, int); /* linkage=_ZN20CRenderContextVulkan11DrawIndexedE21RenderPrimitiveType_tiiii */
	virtual void DrawIndexedInstanced(class CRenderContextVulkan *, enum RenderPrimitiveType_t, int, int, int, int, int, uint); /* linkage=_ZN20CRenderContextVulkan20DrawIndexedInstancedE21RenderPrimitiveType_tiiiiij */
	virtual void MultiDrawIndexed(class CRenderContextVulkan *, enum RenderPrimitiveType_t, int, const class RenderMultiDrawIndexedInfo_t  *, uint32, uint32, int); /* linkage=_ZN20CRenderContextVulkan16MultiDrawIndexedE21RenderPrimitiveType_tiPK28RenderMultiDrawIndexedInfo_tjji */
	virtual void DrawInstancedIndirect(class CRenderContextVulkan *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan21DrawInstancedIndirectE21RenderPrimitiveType_tP22RenderBufferHandle_t__j */
	virtual void DrawIndexedInstancedIndirect(class CRenderContextVulkan *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan28DrawIndexedInstancedIndirectE21RenderPrimitiveType_tP22RenderBufferHandle_t__j */
	virtual void MultiDrawIndexedInstancedIndirect(class CRenderContextVulkan *, enum RenderPrimitiveType_t, uint32, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan33MultiDrawIndexedInstancedIndirectE21RenderPrimitiveType_tjP22RenderBufferHandle_t__j */
	virtual void MultiDrawIndexedInstancedIndirectCount(class CRenderContextVulkan *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32, uint32, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan38MultiDrawIndexedInstancedIndirectCountE21RenderPrimitiveType_tP22RenderBufferHandle_t__jjS2_j */
	virtual void DispatchComputeShader(class CRenderContextVulkan *, uint32, uint32, uint32); /* linkage=_ZN20CRenderContextVulkan21DispatchComputeShaderEjjj */
	virtual void DispatchComputeShaderIndirect(class CRenderContextVulkan *, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan29DispatchComputeShaderIndirectEP22RenderBufferHandle_t__j */
	virtual void BuildBLAS(class CRenderContextVulkan *, RenderBLASHandle_t, class BLASTriangleData_t *, int); /* linkage=_ZN20CRenderContextVulkan9BuildBLASEP20RenderBLASHandle_t__P18BLASTriangleData_ti */
	virtual void CompactBLAS(class CRenderContextVulkan *, RenderBLASHandle_t, RenderBLASHandle_t); /* linkage=_ZN20CRenderContextVulkan11CompactBLASEP20RenderBLASHandle_t__S1_ */
	virtual void BuildTLAS(class CRenderContextVulkan *, RenderTLASHandle_t, class TLASInstance_t *, int); /* linkage=_ZN20CRenderContextVulkan9BuildTLASEP20RenderTLASHandle_t__P14TLASInstance_ti */
	/* <883c42> vulkan/rendercontextvulkan.cpp:3839 */
	virtual void BindRayTracingPipeline(class CRenderContextVulkan *, RenderRayTracePipelineHandle_t); /* linkage=_ZN20CRenderContextVulkan22BindRayTracingPipelineEP32RenderRayTracePipelineHandle_t__ */
	/* <8832bd> vulkan/rendercontextvulkan.cpp:3863 */
	virtual void UpdateRayTraceShaderBindingTable(class CRenderContextVulkan *, class IRaytraceShaderBindingTable *); /* linkage=_ZN20CRenderContextVulkan32UpdateRayTraceShaderBindingTableEP27IRaytraceShaderBindingTable */
	/* <884278> vulkan/rendercontextvulkan.cpp:3876 */
	virtual void TraceRays(class CRenderContextVulkan *, class IRaytraceShaderBindingTable *, uint32, uint32, uint32); /* linkage=_ZN20CRenderContextVulkan9TraceRaysEP27IRaytraceShaderBindingTablejjj */
	/* <884aa2> vulkan/rendercontextvulkan.cpp:3936 */
	virtual void TraceRaysIndirect(class CRenderContextVulkan *, class IRaytraceShaderBindingTable *, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan17TraceRaysIndirectEP27IRaytraceShaderBindingTableP22RenderBufferHandle_t__j */
	virtual void CopyGPUBufferHiddenStructureCount(class CRenderContextVulkan *, RenderBufferHandle_t, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan33CopyGPUBufferHiddenStructureCountEP22RenderBufferHandle_t__S1_j */
	virtual void SetGPUBufferHiddenStructureCount(class CRenderContextVulkan *, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan32SetGPUBufferHiddenStructureCountEP22RenderBufferHandle_t__j */
	virtual void FillGPUBuffer(class CRenderContextVulkan *, RenderBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan13FillGPUBufferEP22RenderBufferHandle_t__j */
	void SetConstantBufferDataInternal(class CRenderContextVulkan *, ConstantBufferHandle_t, uint32, uint32, const void  * const *, uint32); /* linkage=_ZN20CRenderContextVulkan29SetConstantBufferDataInternalEP24ConstantBufferHandle_t__jjPKPKvj */
	virtual void SetConstantBufferData(class CRenderContextVulkan *, ConstantBufferHandle_t, const void  *, uint32); /* linkage=_ZN20CRenderContextVulkan21SetConstantBufferDataEP24ConstantBufferHandle_t__PKvj */
	virtual void SetConstantBufferViewsData(class CRenderContextVulkan *, ConstantBufferHandle_t, uint32, uint32, const void  * const *, uint32); /* linkage=_ZN20CRenderContextVulkan26SetConstantBufferViewsDataEP24ConstantBufferHandle_t__jjPKPKvj */
	virtual void BindConstantBuffer(class CRenderContextVulkan *, enum RenderShaderType_t, ConstantBufferHandle_t, int); /* linkage=_ZN20CRenderContextVulkan18BindConstantBufferE18RenderShaderType_tP24ConstantBufferHandle_t__i */
	/* <884cd6> vulkan/rendercontextvulkan.cpp:5314 */
	virtual void BindConstantBufferView(class CRenderContextVulkan *, enum RenderShaderType_t, ConstantBufferHandle_t, uint32, int); /* linkage=_ZN20CRenderContextVulkan22BindConstantBufferViewE18RenderShaderType_tP24ConstantBufferHandle_t__ji */
	virtual void PushConstants(class CRenderContextVulkan *, const void  *, uint32); /* linkage=_ZN20CRenderContextVulkan13PushConstantsEPKvj */
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(class CRenderContextVulkan *, VertexBufferHandle_t); /* linkage=_ZN20CRenderContextVulkan29GetInputLayoutForVertexBufferEP22VertexBufferHandle_t__ */
	virtual void ForceFlushGPU(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan13ForceFlushGPUEv */
	virtual void ForceDeviceLost(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan15ForceDeviceLostEv */
	virtual void BindRenderTargets(class CRenderContextVulkan *, const class RenderTargetDesc_t  &); /* linkage=_ZN20CRenderContextVulkan17BindRenderTargetsERK18RenderTargetDesc_t */
	virtual void CopyTexture(class CRenderContextVulkan *, HRenderTexture, HRenderTexture, class Rect_t *, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN20CRenderContextVulkan11CopyTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P6Rect_tiijjjj18CopyTextureFlags_t */
	virtual void CopyFromVolumeTexture(class CRenderContextVulkan *, HRenderTexture, HRenderTexture, class Rect3D_t *, int, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN20CRenderContextVulkan21CopyFromVolumeTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P8Rect3D_tiiijjjj18CopyTextureFlags_t */
	virtual void BeginPixEvent(class CRenderContextVulkan *, class Color, const char  *); /* linkage=_ZN20CRenderContextVulkan13BeginPixEventE5ColorPKc */
	/* <881c9c> vulkan/rendercontextvulkan.cpp:311 */
	virtual void EndPixEvent(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan11EndPixEventEv */
	virtual void PixSetMarker(class CRenderContextVulkan *, class Color, const char  *); /* linkage=_ZN20CRenderContextVulkan12PixSetMarkerE5ColorPKc */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(class CRenderContextVulkan *, uint32, class DynamicLockDesc_t *); /* linkage=_ZN20CRenderContextVulkan25LockDynamicConstantBufferEjP17DynamicLockDesc_t */
	virtual void UnlockDynamicConstantBuffer(class CRenderContextVulkan *, ConstantBufferHandle_t, uint32); /* linkage=_ZN20CRenderContextVulkan27UnlockDynamicConstantBufferEP24ConstantBufferHandle_t__j */
	virtual void BeginQuery(class CRenderContextVulkan *, RenderQueryHandle_t); /* linkage=_ZN20CRenderContextVulkan10BeginQueryEP21RenderQueryHandle_t__ */
	virtual void EndQuery(class CRenderContextVulkan *, RenderQueryHandle_t); /* linkage=_ZN20CRenderContextVulkan8EndQueryEP21RenderQueryHandle_t__ */
	virtual void SetDebugFlag(class CRenderContextVulkan *, enum RenderDebugFlag_t, bool); /* linkage=_ZN20CRenderContextVulkan12SetDebugFlagE17RenderDebugFlag_tb */
	virtual void SetScissorRects(class CRenderContextVulkan *, int, const class Rect_t  *); /* linkage=_ZN20CRenderContextVulkan15SetScissorRectsEiPK6Rect_t */
	virtual void CopyFallbackTextureData(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan23CopyFallbackTextureDataEv */
	virtual void QueueDeviceThreadCallback(class CRenderContextVulkan *, class IDeviceThreadCallback *); /* linkage=_ZN20CRenderContextVulkan25QueueDeviceThreadCallbackEP21IDeviceThreadCallback */
	virtual void BindMipLevelOfTextures(class CRenderContextVulkan *, int, int, class bind_resource_list_t *, enum RenderShaderType_t); /* linkage=_ZN20CRenderContextVulkan22BindMipLevelOfTexturesEiiP20bind_resource_list_t18RenderShaderType_t */
	virtual void BindUnordedAccessViews(class CRenderContextVulkan *, int, int, class bind_resource_list_t *, enum RenderShaderType_t); /* linkage=_ZN20CRenderContextVulkan22BindUnordedAccessViewsEiiP20bind_resource_list_t18RenderShaderType_t */
	virtual void SetSamplerStates(class CRenderContextVulkan *, int, int, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN20CRenderContextVulkan16SetSamplerStatesEiiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void BindDescriptorSets(class CRenderContextVulkan *, int32, int32, const RenderDescriptorSetHandle_t  *, const int32  *, const uint32  * *); /* linkage=_ZN20CRenderContextVulkan18BindDescriptorSetsEiiPKP29RenderDescriptorSetHandle_t__PKiPPKj */
	virtual void FillAndBindDynamicDescriptorSet(class CRenderContextVulkan *, RenderDescriptorSetHandle_t, int32, int32, const class RenderDescriptorBinding_t  *, bool, const int32  *, const uint32  * *); /* linkage=_ZN20CRenderContextVulkan31FillAndBindDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iiPK25RenderDescriptorBinding_tbPKiPPKj */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(class CRenderContextVulkan *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN20CRenderContextVulkan24FillDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_tb */
	virtual void BeginRenderPass(class CRenderContextVulkan *, class RenderPassHandle_t, int32, const union RenderPassClearValue_t  *, const class Rect_t  &); /* linkage=_ZN20CRenderContextVulkan15BeginRenderPassE18RenderPassHandle_tiPK22RenderPassClearValue_tRK6Rect_t */
	virtual void NextSubPass(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan11NextSubPassEv */
	virtual void EndRenderPass(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan13EndRenderPassEv */
	virtual void TextureBarrier(class CRenderContextVulkan *, int32, const HRenderTexture  *, const enum RenderImageLayout_t  *, bool); /* linkage=_ZN20CRenderContextVulkan14TextureBarrierEiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK19RenderImageLayout_tb */
	virtual void UAVBarrier(class CRenderContextVulkan *, int32, const class RenderUAVBarrier_t  *); /* linkage=_ZN20CRenderContextVulkan10UAVBarrierEiPK18RenderUAVBarrier_t */
	virtual void BufferBarrier(class CRenderContextVulkan *, int32, const class RenderBufferBarrier_t  *); /* linkage=_ZN20CRenderContextVulkan13BufferBarrierEiPK21RenderBufferBarrier_t */
	virtual class unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan16GetBarrierHelperEv */
	virtual void SetSteamVrCompositorTexture(class CRenderContextVulkan *, HRenderTexture, HRenderTexture); /* linkage=_ZN20CRenderContextVulkan27SetSteamVrCompositorTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_ */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan20SemaphoreSignalAtEndEv */
	/* <88342b> vulkan/rendercontextvulkan.cpp:6491 */
	virtual void SemaphoreWaitAtBegin(class CRenderContextVulkan *, RenderSemaphoreHandle_t); /* linkage=_ZN20CRenderContextVulkan20SemaphoreWaitAtBeginEP25RenderSemaphoreHandle_t__ */
	virtual void SetStatesToDefault(class CRenderContextVulkan *, uint32, uint32); /* linkage=_ZN20CRenderContextVulkan18SetStatesToDefaultEjj */
	/* <883587> vulkan/rendercontextvulkan.cpp:6919 */
	virtual void SetDepthBoundsTestEnabled(class CRenderContextVulkan *, bool); /* linkage=_ZN20CRenderContextVulkan25SetDepthBoundsTestEnabledEb */
	/* <883701> vulkan/rendercontextvulkan.cpp:6931 */
	virtual void SetDepthBounds(class CRenderContextVulkan *, float, float); /* linkage=_ZN20CRenderContextVulkan14SetDepthBoundsEff */
	virtual void OnReleaseRenderContext(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan22OnReleaseRenderContextEv */
	virtual void SetDefaultState(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan15SetDefaultStateEv */
	virtual void QueuePresent(class CRenderContextVulkan *, SwapChainHandle_t, int); /* linkage=_ZN20CRenderContextVulkan12QueuePresentEP19SwapChainHandle_t__i */
	/* <884f60> vulkan/rendercontextvulkan.cpp:5557 */
	virtual void SetIsSecondaryContext(class CRenderContextVulkan *, class RenderContextCreationInfo_t *, bool); /* linkage=_ZN20CRenderContextVulkan21SetIsSecondaryContextEP27RenderContextCreationInfo_tb */
	virtual void CopyBuffer(class CRenderContextVulkan *, IndexBufferHandle_t, IndexBufferHandle_t); /* linkage=_ZN20CRenderContextVulkan10CopyBufferEP21IndexBufferHandle_t__S1_ */
	void CRenderContextVulkan(class CRenderContextVulkan *, VkDevice, const class VulkanPhysicalDeviceInfo_t  *); /* linkage=_ZN20CRenderContextVulkanC4EP10VkDevice_TPK26VulkanPhysicalDeviceInfo_t */
	virtual void ~CRenderContextVulkan(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkanD4Ev */
	/* <883895> vulkan/rendercontextvulkan.cpp:101 */
	void SetPerThreadData(class CRenderContextVulkan *, class PerThreadDataVulkan_t *); /* linkage=_ZN20CRenderContextVulkan16SetPerThreadDataEP21PerThreadDataVulkan_t */
	virtual bool IsOwnedByCurrentThread(const class CRenderContextVulkan  *); /* linkage=_ZNK20CRenderContextVulkan22IsOwnedByCurrentThreadEv */
	void SetTextureDataFromResource(class CRenderContextVulkan *, class CVulkanImage *, const class TextureSpecification_t  *, const class TextureSpecification_t  *, const void  *, int); /* linkage=_ZN20CRenderContextVulkan26SetTextureDataFromResourceEP12CVulkanImagePK22TextureSpecification_tS4_PKvi */
	void SetTextureDataInternal(class CRenderContextVulkan *, HRenderTexture, const class TextureSpecification_t  *, const class CTextureDesc  *, const void  *, int, int, int, const class Rect3D_t  *, uint, const DataRecycleDelegate_t  *, const char  *); /* linkage=_ZN20CRenderContextVulkan22SetTextureDataInternalE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK22TextureSpecification_tPK12CTextureDescPKviiiPK8Rect3D_tjPK12CUtlDelegateIFvSA_EEPKc */
	void CopyTextureData(class CRenderContextVulkan *, class CVulkanImage *, class CVulkanImage *, int, int, int, int); /* linkage=_ZN20CRenderContextVulkan15CopyTextureDataEP12CVulkanImageS1_iiii */
	void WriteDataIntoTexture(class CRenderContextVulkan *, class CVulkanImage *, int, int, int, int, int, int, int, int, int, int, enum ImageFormat, VkDeviceMemory, VkBuffer, VkDeviceSize, int, const class ImageFormatInfo_t  &); /* linkage=_ZN20CRenderContextVulkan20WriteDataIntoTextureEP12CVulkanImageiiiiiiiiii11ImageFormatP16VkDeviceMemory_TP10VkBuffer_TmiRK17ImageFormatInfo_t */
	void PrepareImage(class CRenderContextVulkan *, class CVulkanImage *, VkImageLayout, enum RenderMultisampleType_t, VkImageAspectFlags); /* linkage=_ZN20CRenderContextVulkan12PrepareImageEP12CVulkanImage13VkImageLayout23RenderMultisampleType_tj */
	/* <884c11> vulkan/rendercontextvulkan.cpp:4489 */
	void DestroyDynamicMemoryPools(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan25DestroyDynamicMemoryPoolsEv */
	void SetRenderContextFlags(class CRenderContextVulkan *, uint32); /* linkage=_ZN20CRenderContextVulkan21SetRenderContextFlagsEj */
	void ResetDefaultSamplerStateIfRequired(class CRenderContextVulkan *, uint32_t); /* linkage=_ZN20CRenderContextVulkan34ResetDefaultSamplerStateIfRequiredEj */
	void PerformBarriers(class CRenderContextVulkan *, int32, const class RenderUAVBarrier_t  *, int32, const class RenderBufferBarrier_t  *); /* linkage=_ZN20CRenderContextVulkan15PerformBarriersEiPK18RenderUAVBarrier_tiPK21RenderBufferBarrier_t */
	void FillGPUBufferFormatted(class CRenderContextVulkan *, RenderBufferHandle_t, uint32, const void  *); /* linkage=_ZN20CRenderContextVulkan22FillGPUBufferFormattedEP22RenderBufferHandle_t__jPKv */
	void CopyVulkanImage(class CRenderContextVulkan *, class CVulkanImage *, VkImage, uint32, uint32, uint32, uint32, uint32, enum RenderMultisampleType_t, VkImageAspectFlags); /* linkage=_ZN20CRenderContextVulkan15CopyVulkanImageEP12CVulkanImageP9VkImage_Tjjjjj23RenderMultisampleType_tj */
	void UpdateSwappedImageLayout(class CRenderContextVulkan *, class CVulkanImage *, VkImageLayout, VkImageAspectFlags); /* linkage=_ZN20CRenderContextVulkan24UpdateSwappedImageLayoutEP12CVulkanImage13VkImageLayoutj */
	void ClearColorUsingShaders(class CRenderContextVulkan *, int, const class Vector4D  &, int, int); /* linkage=_ZN20CRenderContextVulkan22ClearColorUsingShadersEiRK8Vector4Dii */
	void ClearDepthUsingShaders(class CRenderContextVulkan *, int, float32, uint8); /* linkage=_ZN20CRenderContextVulkan22ClearDepthUsingShadersEifh */
	void ResolveUsingShaders(class CRenderContextVulkan *, class CVulkanImage *, class CVulkanImage *, const class TextureSpecification_t  *, const class TextureSpecification_t  *, class Rect_t *, int, int, HRenderTexture, bool, enum RenderColorSpace_t, VkSurfaceTransformFlagsKHR); /* linkage=_ZN20CRenderContextVulkan19ResolveUsingShadersEP12CVulkanImageS1_PK22TextureSpecification_tS4_P6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseEb18RenderColorSpace_tj */
	VkImageLayout AddImageBarrier(class CRenderContextVulkan *, class VulkanCommandBuffer_t *, HRenderTexture, enum RenderColorSpace_t, int, const char  *); /* linkage=_ZN20CRenderContextVulkan15AddImageBarrierEP21VulkanCommandBuffer_t11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_tiPKc */
	/* <884363> vulkan/rendercontextvulkan.cpp:2812 */
	void DestroyAllDynamicVertexBuffers(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan30DestroyAllDynamicVertexBuffersEv */
	/* <884470> vulkan/rendercontextvulkan.cpp:3104 */
	void DestroyAllDynamicIndexBuffers(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan29DestroyAllDynamicIndexBuffersEv */
	void ApplyDelayedChanges(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan19ApplyDelayedChangesEv */
	bool SetupForDraw(class CRenderContextVulkan *, enum RenderPrimitiveType_t); /* linkage=_ZN20CRenderContextVulkan12SetupForDrawE21RenderPrimitiveType_t */
	void BindConstantBufferInternal(class CRenderContextVulkan *, enum RenderShaderType_t, ConstantBufferHandle_t, uint32, int); /* linkage=_ZN20CRenderContextVulkan26BindConstantBufferInternalE18RenderShaderType_tP24ConstantBufferHandle_t__ji */
	void ResolveTargetVulkan(class CRenderContextVulkan *, class CVulkanImage *, class CVulkanImage *, class Rect_t *, int, int, HRenderTexture, bool); /* linkage=_ZN20CRenderContextVulkan19ResolveTargetVulkanEP12CVulkanImageS1_P6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseEb */
	VkSampler GetSamplerState(class CRenderContextVulkan *, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN20CRenderContextVulkan15GetSamplerStateE10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	/* <884b77> vulkan/rendercontextvulkan.cpp:4347 */
	VkSampler GetSamplerState(class CRenderContextVulkan *, const class CSamplerStateDesc  *); /* linkage=_ZN20CRenderContextVulkan15GetSamplerStateEPK17CSamplerStateDesc */
	void UpdateImplicitRenderPass(class CRenderContextVulkan *, class VulkanCommandBuffer_t *, class VulkanFramebufferState_t &); /* linkage=_ZN20CRenderContextVulkan24UpdateImplicitRenderPassEP21VulkanCommandBuffer_tR24VulkanFramebufferState_t */
	void BeginImplicitRenderPass(class CRenderContextVulkan *, class VulkanCommandBuffer_t *, VkFramebuffer, VkRenderPass, const class VulkanFramebufferState_t  &); /* linkage=_ZN20CRenderContextVulkan23BeginImplicitRenderPassEP21VulkanCommandBuffer_tP15VkFramebuffer_TP14VkRenderPass_TRK24VulkanFramebufferState_t */
	void TransitionRenderTargetImageLayouts(class CRenderContextVulkan *, class VulkanCommandBuffer_t *, const class VulkanFramebufferState_t  &); /* linkage=_ZN20CRenderContextVulkan34TransitionRenderTargetImageLayoutsEP21VulkanCommandBuffer_tRK24VulkanFramebufferState_t */
	/* <883ae9> vulkan/rendercontextvulkan.cpp:693 */
	void ResetLoadStoreOps(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan17ResetLoadStoreOpsEv */
	void UpdateDynamicRendering(class CRenderContextVulkan *, class VulkanCommandBuffer_t *, class VulkanFramebufferState_t &); /* linkage=_ZN20CRenderContextVulkan22UpdateDynamicRenderingEP21VulkanCommandBuffer_tR24VulkanFramebufferState_t */
	void SetViewportForSubPass(class CRenderContextVulkan *, const class CRenderPassVulkan  *, uint32_t, const class Rect_t  &); /* linkage=_ZN20CRenderContextVulkan21SetViewportForSubPassEPK17CRenderPassVulkanjRK6Rect_t */
	void SetupHiddenUAVCounters(class CRenderContextVulkan *, class VulkanCommandBuffer_t *, enum RenderShaderType_t); /* linkage=_ZN20CRenderContextVulkan22SetupHiddenUAVCountersEP21VulkanCommandBuffer_t18RenderShaderType_t */
	/* <883b31> vulkan/rendercontextvulkan.cpp:835 */
	void ClampRenderArea(class CRenderContextVulkan *, VkRect2D &, uint32, uint32); /* linkage=_ZN20CRenderContextVulkan15ClampRenderAreaER8VkRect2Djj */
	void UpdateRenderTargetChangeStats(class CRenderContextVulkan *); /* linkage=_ZN20CRenderContextVulkan29UpdateRenderTargetChangeStatsEv */
	virtual void ReadBuffer(class CRenderContextVulkan *, IndexBufferHandle_t, class IReadBufferCallback *, int32, int32, bool); /* linkage=_ZN20CRenderContextVulkan10ReadBufferEP21IndexBufferHandle_t__P19IReadBufferCallbackiib */
} __attribute__((__aligned__(16)));

// <00876915> vulkan/rendercontextvulkan.h:198
void CRenderContextVulkan::ForceDeviceLost()
{
} /* size: 5 */

// <008768C7> vulkan/rendercontextvulkan.h:214
void CRenderContextVulkan::SetDebugFlag(RenderDebugFlag_t nFlag, bool bOnOff)
{
} /* size: 5 */

// <009A5E71> vulkan/rendercontextvulkan.h:260
void CRenderContextVulkan::CRenderContextVulkan(VkDevice pDeviceVulkan, const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo)
{
} /* size: 0 */

// <005048CB> vulkan/rendercontextvulkan.h:284
inline void CRenderContextVulkan::IsAsyncComputeCommandBuffer()
{
} /* size: 0 */

// <008768AE> vulkan/rendercontextvulkan.h:472
inline void CRenderContextVulkan::GetVulkanCommandBuffer()
{
} /* size: 0 */

// <00C4576D> vulkan/rendercontextvulkan.h:481
void CRenderContextVulkanPtr::~CRenderContextVulkanPtr()
{
} /* size: 0 */

// <00C45750> vulkan/rendercontextvulkan.h:481
inline void CRenderContextVulkanPtr::~CRenderContextVulkanPtr()
{
} /* size: 0 */

// <0079A02C> vulkan/rendercontextvulkan.h:481
// member functions: 10
// member variable: 1
// class size: 16
class CRenderContextVulkanPtr : public CRenderContextPtr {
public:
	/* class CRenderContextPtr <ancestor>; */ /* 0 16 */
	/* vulkan/rendercontextvulkan.h:486 */
	void CRenderContextVulkanPtr(CRenderContextVulkanPtr* , IRenderDevice* , const char* , ...);
	/* vulkan/rendercontextvulkan.h:487 */
	CRenderContextVulkan* operator->(const CRenderContextVulkanPtr* );
	/* vulkan/rendercontextvulkan.h:488 */
	CRenderContextVulkan* operator CRenderContextVulkan*(const CRenderContextVulkanPtr* );
	/* vulkan/rendercontextvulkan.h:489 */
	CRenderContextVulkan* GetContext(const CRenderContextVulkanPtr* );
	void ~CRenderContextVulkanPtr(CRenderContextVulkanPtr* );
	void CRenderContextVulkanPtr(class CRenderContextVulkanPtr *, class IRenderDevice *, const char  *, ...); /* linkage=_ZN23CRenderContextVulkanPtrC4EP13IRenderDevicePKcz */
	class CRenderContextVulkan * operator->(const class CRenderContextVulkanPtr  *); /* linkage=_ZNK23CRenderContextVulkanPtrptEv */
	class CRenderContextVulkan * operator CRenderContextVulkan*(const class CRenderContextVulkanPtr  *); /* linkage=_ZNK23CRenderContextVulkanPtrcvP20CRenderContextVulkanEv */
	class CRenderContextVulkan * GetContext(const class CRenderContextVulkanPtr  *); /* linkage=_ZNK23CRenderContextVulkanPtr10GetContextEv */
	void ~CRenderContextVulkanPtr(class CRenderContextVulkanPtr *); /* linkage=_ZN23CRenderContextVulkanPtrD4Ev */
} __attribute__((__aligned__(16)));

// <00C4E703> vulkan/rendercontextvulkan.h:492
// variables: 5
// function calls: 11
void CRenderContextVulkanPtr::CRenderContextVulkanPtr(IRenderDevice* pDevice, const char* pDebugStringFmt, ...)
{
	{
		RenderTargetDesc_t rtDesc; // 494
		va_list args; // 497
	}
	CRenderContextPtr::CRenderContextPtr(); // 492
	{
		RenderTargetDesc_t rtDesc; // 494
		va_list args; // 497
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 115
		{
			int i; // 121
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 127
		RenderTargetDesc_t::Clear(); // 116
		RenderTargetDesc_t::RenderTargetDesc_t(); // 494
		CRenderContextPtr::InitPreallocated(
				IRenderDevice* pDevice,
				const RenderTargetDesc_t& renderTargetDesc,
				IRenderContext* pContext);  // 811
		CRenderContextPtr::Init(
			uint nRenderContextFlags,
			RenderContextCreationInfo_t* pOptInfo,
			IRenderDevice* pDevice,
			const RenderTargetDesc_t& renderTargetDesc,
			const char* pDebugStringFmt,
			va_list* pArglist);  // 499
	}
} /* size: 371, inline expansions: 1 (0 bytes) */

// <00C4E6B0> vulkan/rendercontextvulkan.h:492
// variables: 2
inline void CRenderContextVulkanPtr::CRenderContextVulkanPtr(IRenderDevice* pDevice, const char* pDebugStringFmt, ...)
{
	{
		RenderTargetDesc_t rtDesc; // 494
		va_list args; // 497
	}
} /* size: 0 */

// <00C4E694> vulkan/rendercontextvulkan.h:507
inline void CRenderContextVulkanPtr::operator->()
{
} /* size: 0 */

// <007BEF9C> vulkan/rendercontextvulkan.h:513
inline void operator CRenderContextVulkanPtr::CRenderContextVulkan*()
{
} /* size: 0 */

