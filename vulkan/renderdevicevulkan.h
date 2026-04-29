
//
// vulkan/renderdevicevulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 116
//	classes: 6
//	structs: 2
//

// <0095106B> vulkan/renderdevicevulkan.h:78
// member functions: 4
// member variable: 1
// class size: 8
class CSamplerStateBinding {
	/* vulkan/renderdevicevulkan.h:81 */
	void CSamplerStateBinding(CSamplerStateBinding* );
	/* vulkan/renderdevicevulkan.h:82 */
	void ~CSamplerStateBinding(CSamplerStateBinding* );
	CVulkanSamplerObject * m_pSamplerStateObject; /* 0 8 */
	void CSamplerStateBinding(class CSamplerStateBinding *); /* linkage=_ZN20CSamplerStateBindingC4Ev */
	void ~CSamplerStateBinding(class CSamplerStateBinding *); /* linkage=_ZN20CSamplerStateBindingD4Ev */
};

// <00A554FA> vulkan/renderdevicevulkan.h:82
void CSamplerStateBinding::~CSamplerStateBinding()
{
} /* size: 0 */

// <00A554E1> vulkan/renderdevicevulkan.h:82
inline void CSamplerStateBinding::~CSamplerStateBinding()
{
} /* size: 0 */

// <009A1ADA> vulkan/renderdevicevulkan.h:97
// member functions: 32
// member variables: 23
// vtable entries: 2
// class size: 576
class CSwapChainVulkan : public CSwapChainBase {
public:
	/* class CSwapChainBase <ancestor>; */ /* 0 376 */
	void CSwapChainVulkan(CSwapChainVulkan* , const CSwapChainVulkan& );
	/* vulkan/renderdevicevulkan.cpp:2238 */
	void CSwapChainVulkan(CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.cpp:2260 */
	virtual void ~CSwapChainVulkan(CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.cpp:2284 */
	bool Init(CSwapChainVulkan* , PlatWindow_t, OsSpecificWindowHandle_t, const RenderDeviceInfo_t& , const char* , VkDevice, VkPhysicalDevice, VkQueue);
	/* vulkan/renderdevicevulkan.cpp:3278 */
	void Update(CSwapChainVulkan* , const RenderDeviceInfo_t& );
	/* vulkan/renderdevicevulkan.cpp:2824 */
	bool SetupViews(CSwapChainVulkan* , VkDevice, VkFormat, VkImageUsageFlags);
	/* vulkan/renderdevicevulkan.cpp:3162 */
	void CleanupViews(CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3205 */
	void CleanupVulkanSwapchain(CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3022 */
	bool SwapBuffers(CSwapChainVulkan* , VkSemaphore* );
	/* vulkan/renderdevicevulkan.h:109 */
	bool IsMultisample(const CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3338 */
	void FrameUpdate(CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.h:111 */
	virtual int GetWidth(const CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.h:112 */
	virtual int GetHeight(const CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.h:113 */
	RenderMultisampleType_t MultisampleType(const CSwapChainVulkan* );
	/* vulkan/renderdevicevulkan.h:114 */
	const RenderDeviceInfo_t& GetRenderDeviceInfoScaled(const CSwapChainVulkan* );
	CVulkanImage * * m_ppVulkanImages; /* 376 8 */
	uint32 m_nCurrentVulkanImageIndex; /* 384 4 */
	CVulkanImage * m_pCurVulkanImage; /* 392 8 */
	CVulkanImage * m_pDepthStencilImage; /* 400 8 */
	VkSurfaceKHR m_pSurfaceKHR; /* 408 8 */
	VkSwapchainKHR m_pSwapChainKHR; /* 416 8 */
	VkSwapchainKHR m_pOldSwapChainKHR; /* 424 8 */
	CVulkanImage * m_pIntermediateSwapChainImage; /* 432 8 */
	CVulkanImage * m_pIntermediateImageResolved; /* 440 8 */
	VkExtent2D m_SwapChainExtent; /* 448 8 */
	VkSurfaceTransformFlagsKHR m_nCurrentTransform; /* 456 4 */
	uint32 m_nSwapQueueImageCount; /* 460 4 */
	HRenderTextureStrong * m_phColorTextureSwapQueue; /* 464 8 */
	VkSemaphore * m_ppAcquireNextImageSemaphores; /* 472 8 */
	uint32 m_nCurrentSemaphoreIndex; /* 480 4 */
	bool m_bIsMainWindow; /* 484 1 */
private:
	/* vulkan/renderdevicevulkan.cpp:2308 */
	bool CreateSwapChain(CSwapChainVulkan* , VkDevice, VkPhysicalDevice);
	VkDevice m_pDeviceVulkan; /* 488 8 */
	VkQueue m_pQueueVulkan; /* 496 8 */
	VkPhysicalDevice m_pPhysicalDeviceVulkan; /* 504 8 */
	uint32_t m_nSwapChainMinImageCount; /* 512 4 */
	RenderDeviceInfo_t m_ModeScaled; /* 516 48 */
	xcb_connection_t * m_pXcbConnection; /* 568 8 */
	/* <a6f016> vulkan/renderdevicevulkan.cpp:3022 */
	bool SwapBuffers(class CSwapChainVulkan *, VkSemaphore *); /* linkage=_ZN16CSwapChainVulkan11SwapBuffersEPP13VkSemaphore_T */
	enum RenderMultisampleType_t MultisampleType(const class CSwapChainVulkan  *); /* linkage=_ZNK16CSwapChainVulkan15MultisampleTypeEv */
	/* <87dc13> vulkan/renderdevicevulkan.h:112 */
	virtual int GetHeight(const class CSwapChainVulkan  *); /* linkage=_ZNK16CSwapChainVulkan9GetHeightEv */
	/* <87dbe8> vulkan/renderdevicevulkan.h:111 */
	virtual int GetWidth(const class CSwapChainVulkan  *); /* linkage=_ZNK16CSwapChainVulkan8GetWidthEv */
	bool IsMultisample(const class CSwapChainVulkan  *); /* linkage=_ZNK16CSwapChainVulkan13IsMultisampleEv */
	void CSwapChainVulkan(class CSwapChainVulkan *, const class CSwapChainVulkan  &); /* linkage=_ZN16CSwapChainVulkanC4ERKS_ */
	void CSwapChainVulkan(class CSwapChainVulkan *); /* linkage=_ZN16CSwapChainVulkanC4Ev */
	virtual void ~CSwapChainVulkan(class CSwapChainVulkan *); /* linkage=_ZN16CSwapChainVulkanD4Ev */
	bool Init(class CSwapChainVulkan *, PlatWindow_t, OsSpecificWindowHandle_t, const class RenderDeviceInfo_t  &, const char  *, VkDevice, VkPhysicalDevice, VkQueue); /* linkage=_ZN16CSwapChainVulkan4InitEP14PlatWindow_t__P26OsSpecificWindowHandle_t__RK18RenderDeviceInfo_tPKcP10VkDevice_TP18VkPhysicalDevice_TP9VkQueue_T */
	void Update(class CSwapChainVulkan *, const class RenderDeviceInfo_t  &); /* linkage=_ZN16CSwapChainVulkan6UpdateERK18RenderDeviceInfo_t */
	bool SetupViews(class CSwapChainVulkan *, VkDevice, VkFormat, VkImageUsageFlags); /* linkage=_ZN16CSwapChainVulkan10SetupViewsEP10VkDevice_T8VkFormatj */
	void CleanupViews(class CSwapChainVulkan *); /* linkage=_ZN16CSwapChainVulkan12CleanupViewsEv */
	void CleanupVulkanSwapchain(class CSwapChainVulkan *); /* linkage=_ZN16CSwapChainVulkan22CleanupVulkanSwapchainEv */
	void FrameUpdate(class CSwapChainVulkan *); /* linkage=_ZN16CSwapChainVulkan11FrameUpdateEv */
	const class RenderDeviceInfo_t  & GetRenderDeviceInfoScaled(const class CSwapChainVulkan  *); /* linkage=_ZNK16CSwapChainVulkan25GetRenderDeviceInfoScaledEv */
	bool CreateSwapChain(class CSwapChainVulkan *, VkDevice, VkPhysicalDevice); /* linkage=_ZN16CSwapChainVulkan15CreateSwapChainEP10VkDevice_TP18VkPhysicalDevice_T */
} __attribute__((__aligned__(8)));

// <00876CB5> vulkan/renderdevicevulkan.h:109
inline void CSwapChainVulkan::IsMultisample()
{
} /* size: 0 */

// <00A554B2> vulkan/renderdevicevulkan.h:111
void CSwapChainVulkan::GetWidth()
{
} /* size: 11 */

// <00876C9C> vulkan/renderdevicevulkan.h:111
inline void CSwapChainVulkan::GetWidth()
{
} /* size: 0 */

// <00A55483> vulkan/renderdevicevulkan.h:112
void CSwapChainVulkan::GetHeight()
{
} /* size: 11 */

// <00876C83> vulkan/renderdevicevulkan.h:112
inline void CSwapChainVulkan::GetHeight()
{
} /* size: 0 */

// <00876C6A> vulkan/renderdevicevulkan.h:113
inline void CSwapChainVulkan::MultisampleType()
{
} /* size: 0 */

// <00A5546A> vulkan/renderdevicevulkan.h:114
inline void CSwapChainVulkan::GetRenderDeviceInfoScaled()
{
} /* size: 0 */

// <0083D9E1> vulkan/renderdevicevulkan.h:209
inline void ResolveVertex_t::operator=(const ResolveVertex_t &)
{
} /* size: 0 */

// <0083B24C> vulkan/renderdevicevulkan.h:209
void ResolveVertex_t::ResolveVertex_t()
{
} /* size: 0 */

// <0083B230> vulkan/renderdevicevulkan.h:209
inline void ResolveVertex_t::ResolveVertex_t()
{
} /* size: 0 */

// <0081AE0E> vulkan/renderdevicevulkan.h:209
// member functions: 2
// member variables: 2
// struct size: 36
struct ResolveVertex_t : public ClearVertex_t {
public:
	/* struct ClearVertex_t <ancestor>; */ /* 0 28 */
	Vector2D m_vTexCoord; /* 28 8 */
	void ResolveVertex_t(ResolveVertex_t* );
	ResolveVertex_t& operator=(ResolveVertex_t* , const ResolveVertex_t& );
};

// <00949A05> vulkan/renderdevicevulkan.h:217
// member functions: 85
// member variables: 24
// vtable entries: 2
// class size: 328
class CShaderVulkanBase {
	/* vulkan/renderdevicevulkan.h:295 */
	struct DescriptorSetBindings_t {
		/* vulkan/renderdevicevulkan.h:304 */
		struct TextureBinding_t {
			int32 m_nBindingNumber:31; /* 0: 0 4 */
			bool m_bIsInputAttachment:1; /* 3: 7 1 */
		};
		/* tag__fprintf: const_type tag not supported! */;
		CUtlVector<int, CUtlMemory<int, int> > m_samplerBindings; /* 0 32 */
		CUtlVector<int, CUtlMemory<int, int> > m_uniformBufferBindings; /* 32 32 */
		CUtlVector<int, CUtlMemory<int, int> > m_imageBindings; /* 64 32 */
		CUtlVector<int, CUtlMemory<int, int> > m_uniformTexelBufferBindings; /* 96 32 */
		CUtlVector<int, CUtlMemory<int, int> > m_storageTexelBufferBindings; /* 128 32 */
		CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> > m_storageBufferBindings; /* 160 32 */
		CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int> > m_textureBindings; /* 192 32 */
		CUtlStringToken m_descriptorSetNameHash; /* 224 4 */
		uint32 m_nTotalBindings; /* 228 4 */
		int m_bAddRefdDescriptorSet; /* 232 4 */
		RenderDescriptorSetHandle_t m_hRegisteredDescriptorSetForLayout; /* 240 8 */
		void DescriptorSetBindings_t(DescriptorSetBindings_t* , const DescriptorSetBindings_t& );
		void ~DescriptorSetBindings_t(DescriptorSetBindings_t* );
		void DescriptorSetBindings_t(DescriptorSetBindings_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CShaderVulkanBase(CShaderVulkanBase* , const CShaderVulkanBase& );
	int ()(void) * * _vptr.CShaderVulkanBase; /* 0 8 */
	/* vulkan/renderdevicevulkan.cpp:7018 */
	void CShaderVulkanBase(CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7040 */
	virtual void ~CShaderVulkanBase(CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7820 */
	void InitPipelineShader(CShaderVulkanBase* , const CVfxShaderFileVulkan* );
	/* vulkan/renderdevicevulkan.cpp:7191 */
	virtual bool Create(CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7767 */
	virtual void ComputeHash(CShaderVulkanBase* , const uint8_t* , uint32_t);
	/* vulkan/renderdevicevulkan.h:227 */
	uint64_t GetHash(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7924 */
	uint32 GetNumTotalDescriptors(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.h:229 */
	int32 GetNumDescriptorSets(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.h:230 */
	uint32 GetDescriptorSetBindingMask(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7937 */
	uint32 GetNumActiveSamplers(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.cpp:8000 */
	uint32 GetSamplerBinding(const CShaderVulkanBase* , int32, uint32);
	/* vulkan/renderdevicevulkan.cpp:7946 */
	uint32 GetNumActiveTextures(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.cpp:8007 */
	uint32 GetTextureBinding(const CShaderVulkanBase* , int32, uint32, bool* );
	/* vulkan/renderdevicevulkan.cpp:8018 */
	uint32 GetUniformBufferBinding(const CShaderVulkanBase* , int32, uint32);
	/* vulkan/renderdevicevulkan.cpp:7955 */
	uint32 GetNumActiveUniformBlocks(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.cpp:7964 */
	uint32 GetNumActiveImages(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.cpp:8025 */
	uint32 GetImageBinding(const CShaderVulkanBase* , int32, uint32);
	/* vulkan/renderdevicevulkan.cpp:7973 */
	uint32 GetNumActiveStorageBuffers(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.cpp:8032 */
	ShaderStorageBufferBinding_t GetStorageBufferBinding(const CShaderVulkanBase* , int32, uint32);
	/* vulkan/renderdevicevulkan.cpp:7982 */
	uint32 GetNumActiveUniformTexelBuffers(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.cpp:8039 */
	uint32 GetUniformTexelBufferBinding(const CShaderVulkanBase* , int32, uint32);
	/* vulkan/renderdevicevulkan.cpp:7991 */
	uint32 GetNumActiveStorageTexelBuffers(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.cpp:8046 */
	uint32 GetStorageTexelBufferBinding(const CShaderVulkanBase* , int32, uint32);
	/* vulkan/renderdevicevulkan.cpp:8053 */
	CUtlStringToken GetDescriptorSetNameHash(const CShaderVulkanBase* , int32);
	/* vulkan/renderdevicevulkan.cpp:8059 */
	bool GetAssociatedHiddenUAVCounterIndex(const CShaderVulkanBase* , uint32, uint32_t& );
	/* vulkan/renderdevicevulkan.cpp:8070 */
	void GetThreadGroupSize(const CShaderVulkanBase* , uint32_t* );
	/* vulkan/renderdevicevulkan.h:248 */
	uint16 GetPushConstantSize(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7908 */
	void SetShaderStats(CShaderVulkanBase* , uint32, const VkPipelineExecutableStatisticKHR* );
	/* vulkan/renderdevicevulkan.cpp:7662 */
	bool QueueCreateGraphicsPipelineLibrary(CShaderVulkanBase* , bool);
	/* vulkan/renderdevicevulkan.cpp:7498 */
	bool CreateGraphicsPipelineLibrary(CShaderVulkanBase* , const CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__*, 4>& );
	/* vulkan/renderdevicevulkan.h:255 */
	PipelineObjectVulkan_t* GetGraphicsPipelineLibrary(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7470 */
	bool SupportsGraphicsPipelineLibrary(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7414 */
	bool GetPipelineLibraryDependentStaticDescriptorSetLayouts(CShaderVulkanBase* , CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__*, 4>& );
	/* vulkan/renderdevicevulkan.h:258 */
	bool PendingStaticDescriptorSetRegistration(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.h:260 */
	const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& GetPipelineLibraryDynamicDescriptorSetLayout(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.cpp:7895 */
	void SetDebugName(CShaderVulkanBase* , const char* );
	/* vulkan/renderdevicevulkan.h:263 */
	const char* GetDebugName(const CShaderVulkanBase* );
	/* vulkan/renderdevicevulkan.h:265 */
	bool HasEntryPoint(CShaderVulkanBase* , CUtlStringToken);
	VkDevice m_pDeviceVulkan; /* 8 8 */
	VkShaderModule m_pShaderModule; /* 16 8 */
	VkPipelineShaderStageCreateInfo m_pipelineShaderStageCreateInfo; /* 24 48 */
	VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT m_pipelineShaderStageRequiredSubgroupSizeCreateInfo; /* 72 24 */
	VkShaderStageFlagBits m_shaderStage; /* 96 4 */
	bool m_bIsSPIRV; /* 100 1 */
	UtlHashHandle_t m_hShaderFile; /* 104 4 */
	UtlHashHandle_t m_hShaderModule; /* 108 4 */
	int m_nShaderLoadingState; /* 112 4 */
	volatile bool m_bPipelineLibraryCompileQueued; /* 116 1 */
	uint32 m_nShaderStatCount; /* 120 4 */
	VkPipelineExecutableStatisticKHR * m_pShaderStats; /* 128 8 */
	CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > m_dynamicDescriptorSetLayout; /* 136 32 */
protected:
	/* vulkan/renderdevicevulkan.cpp:7699 */
	void BuildReflectionInfo(CShaderVulkanBase* , const uint8_t* , size_t);
	/* vulkan/renderdevicevulkan.cpp:7083 */
	void BuildDescriptorSetsInfo(CShaderVulkanBase* , CVfxShaderFileVulkan* );
	PipelineObjectVulkan_t * m_pGraphicsPipelineLibrary; /* 168 8 */
	bool m_bPendingStaticDescriptorSetRegistration; /* 176 1 */
	const char * m_pDebugName; /* 184 8 */
	CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int> > m_descriptorSetBindings; /* 192 32 */
	uint32 m_nDescriptorSetBindingMask; /* 224 4 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_entryPoints; /* 232 32 */
	/* vulkan/renderdevicevulkan.h:329 */
	typedef struct CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> > HiddenUAVCounterMap_t;
	HiddenUAVCounterMap_t m_hiddenUAVCounterMap; /* 264 40 */
	uint32_t m_nThreadGroupSize[3]; /* 304 12 */
	uint16_t m_nPushConstantSize; /* 316 2 */
	uint64 m_nCachedHash; /* 320 8 */
	bool QueueCreateGraphicsPipelineLibrary(class CShaderVulkanBase *, bool); /* linkage=_ZN17CShaderVulkanBase34QueueCreateGraphicsPipelineLibraryEb */
	uint64_t GetHash(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase7GetHashEv */
	void SetShaderStats(class CShaderVulkanBase *, uint32, const VkPipelineExecutableStatisticKHR  *); /* linkage=_ZN17CShaderVulkanBase14SetShaderStatsEjPK32VkPipelineExecutableStatisticKHR */
	uint32 GetUniformBufferBinding(const class CShaderVulkanBase  *, int32, uint32); /* linkage=_ZNK17CShaderVulkanBase23GetUniformBufferBindingEij */
	/* <a69168> vulkan/renderdevicevulkan.cpp:7955 */
	uint32 GetNumActiveUniformBlocks(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase25GetNumActiveUniformBlocksEi */
	uint32 GetStorageTexelBufferBinding(const class CShaderVulkanBase  *, int32, uint32); /* linkage=_ZNK17CShaderVulkanBase28GetStorageTexelBufferBindingEij */
	/* <a69648> vulkan/renderdevicevulkan.cpp:7991 */
	uint32 GetNumActiveStorageTexelBuffers(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase31GetNumActiveStorageTexelBuffersEi */
	uint32 GetUniformTexelBufferBinding(const class CShaderVulkanBase  *, int32, uint32); /* linkage=_ZNK17CShaderVulkanBase28GetUniformTexelBufferBindingEij */
	/* <a69510> vulkan/renderdevicevulkan.cpp:7982 */
	uint32 GetNumActiveUniformTexelBuffers(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase31GetNumActiveUniformTexelBuffersEi */
	class ShaderStorageBufferBinding_t GetStorageBufferBinding(const class CShaderVulkanBase  *, int32, uint32); /* linkage=_ZNK17CShaderVulkanBase23GetStorageBufferBindingEij */
	/* <a693d8> vulkan/renderdevicevulkan.cpp:7973 */
	uint32 GetNumActiveStorageBuffers(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase26GetNumActiveStorageBuffersEi */
	uint32 GetImageBinding(const class CShaderVulkanBase  *, int32, uint32); /* linkage=_ZNK17CShaderVulkanBase15GetImageBindingEij */
	/* <a692a0> vulkan/renderdevicevulkan.cpp:7964 */
	uint32 GetNumActiveImages(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase18GetNumActiveImagesEi */
	uint32 GetTextureBinding(const class CShaderVulkanBase  *, int32, uint32, bool *); /* linkage=_ZNK17CShaderVulkanBase17GetTextureBindingEijPb */
	/* <a69030> vulkan/renderdevicevulkan.cpp:7946 */
	uint32 GetNumActiveTextures(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase20GetNumActiveTexturesEi */
	uint32 GetSamplerBinding(const class CShaderVulkanBase  *, int32, uint32); /* linkage=_ZNK17CShaderVulkanBase17GetSamplerBindingEij */
	/* <a68ef8> vulkan/renderdevicevulkan.cpp:7937 */
	uint32 GetNumActiveSamplers(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase20GetNumActiveSamplersEi */
	uint32 GetNumTotalDescriptors(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase22GetNumTotalDescriptorsEi */
	const char  * GetDebugName(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase12GetDebugNameEv */
	const class CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >  & GetPipelineLibraryDynamicDescriptorSetLayout(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase44GetPipelineLibraryDynamicDescriptorSetLayoutEv */
	class PipelineObjectVulkan_t * GetGraphicsPipelineLibrary(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase26GetGraphicsPipelineLibraryEv */
	uint16 GetPushConstantSize(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase19GetPushConstantSizeEv */
	uint32 GetDescriptorSetBindingMask(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase27GetDescriptorSetBindingMaskEv */
	int32 GetNumDescriptorSets(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase20GetNumDescriptorSetsEv */
	bool HasEntryPoint(class CShaderVulkanBase *, class CUtlStringToken); /* linkage=_ZN17CShaderVulkanBase13HasEntryPointE15CUtlStringToken */
	bool GetAssociatedHiddenUAVCounterIndex(const class CShaderVulkanBase  *, uint32, uint32_t &); /* linkage=_ZNK17CShaderVulkanBase34GetAssociatedHiddenUAVCounterIndexEjRj */
	void GetThreadGroupSize(const class CShaderVulkanBase  *, uint32_t *); /* linkage=_ZNK17CShaderVulkanBase18GetThreadGroupSizeEPj */
	/* <a68d0f> vulkan/renderdevicevulkan.cpp:7470 */
	bool SupportsGraphicsPipelineLibrary(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase31SupportsGraphicsPipelineLibraryEv */
	void CShaderVulkanBase(class CShaderVulkanBase *, const class CShaderVulkanBase  &); /* linkage=_ZN17CShaderVulkanBaseC4ERKS_ */
	void CShaderVulkanBase(class CShaderVulkanBase *); /* linkage=_ZN17CShaderVulkanBaseC4Ev */
	virtual void ~CShaderVulkanBase(class CShaderVulkanBase *); /* linkage=_ZN17CShaderVulkanBaseD4Ev */
	void InitPipelineShader(class CShaderVulkanBase *, const class CVfxShaderFileVulkan  *); /* linkage=_ZN17CShaderVulkanBase18InitPipelineShaderEPK20CVfxShaderFileVulkan */
	virtual bool Create(class CShaderVulkanBase *); /* linkage=_ZN17CShaderVulkanBase6CreateEv */
	virtual void ComputeHash(class CShaderVulkanBase *, const uint8_t  *, uint32_t); /* linkage=_ZN17CShaderVulkanBase11ComputeHashEPKhj */
	class CUtlStringToken GetDescriptorSetNameHash(const class CShaderVulkanBase  *, int32); /* linkage=_ZNK17CShaderVulkanBase24GetDescriptorSetNameHashEi */
	bool CreateGraphicsPipelineLibrary(class CShaderVulkanBase *, const class CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__*, 4>  &); /* linkage=_ZN17CShaderVulkanBase29CreateGraphicsPipelineLibraryERK23CUtlVectorFixedGrowableIP29RenderDescriptorSetHandle_t__Lm4EE */
	bool GetPipelineLibraryDependentStaticDescriptorSetLayouts(class CShaderVulkanBase *, class CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__*, 4> &); /* linkage=_ZN17CShaderVulkanBase53GetPipelineLibraryDependentStaticDescriptorSetLayoutsER23CUtlVectorFixedGrowableIP29RenderDescriptorSetHandle_t__Lm4EE */
	bool PendingStaticDescriptorSetRegistration(const class CShaderVulkanBase  *); /* linkage=_ZNK17CShaderVulkanBase38PendingStaticDescriptorSetRegistrationEv */
	/* <a68d3a> vulkan/renderdevicevulkan.cpp:7895 */
	void SetDebugName(class CShaderVulkanBase *, const char  *); /* linkage=_ZN17CShaderVulkanBase12SetDebugNameEPKc */
	void BuildReflectionInfo(class CShaderVulkanBase *, const uint8_t  *, size_t); /* linkage=_ZN17CShaderVulkanBase19BuildReflectionInfoEPKhm */
	void BuildDescriptorSetsInfo(class CShaderVulkanBase *, class CVfxShaderFileVulkan *); /* linkage=_ZN17CShaderVulkanBase23BuildDescriptorSetsInfoEP20CVfxShaderFileVulkan */
};

// <0074049A> vulkan/renderdevicevulkan.h:227
inline void CShaderVulkanBase::GetHash()
{
} /* size: 0 */

// <00740481> vulkan/renderdevicevulkan.h:229
inline void CShaderVulkanBase::GetNumDescriptorSets()
{
} /* size: 0 */

// <00740468> vulkan/renderdevicevulkan.h:230
inline void CShaderVulkanBase::GetDescriptorSetBindingMask()
{
} /* size: 0 */

// <00A55451> vulkan/renderdevicevulkan.h:248
inline void CShaderVulkanBase::GetPushConstantSize()
{
} /* size: 0 */

// <00740436> vulkan/renderdevicevulkan.h:255
inline void CShaderVulkanBase::GetGraphicsPipelineLibrary()
{
} /* size: 0 */

// <00A55438> vulkan/renderdevicevulkan.h:258
inline void CShaderVulkanBase::PendingStaticDescriptorSetRegistration()
{
} /* size: 0 */

// <0074041D> vulkan/renderdevicevulkan.h:260
inline void CShaderVulkanBase::GetPipelineLibraryDynamicDescriptorSetLayout()
{
} /* size: 0 */

// <00740404> vulkan/renderdevicevulkan.h:263
inline void CShaderVulkanBase::GetDebugName()
{
} /* size: 0 */

// <007BF403> vulkan/renderdevicevulkan.h:265
inline void CShaderVulkanBase::HasEntryPoint(CUtlStringToken entryPoint)
{
} /* size: 0 */

// <00A08393> vulkan/renderdevicevulkan.h:295
void DescriptorSetBindings_t::DescriptorSetBindings_t()
{
} /* size: 0 */

// <00A08376> vulkan/renderdevicevulkan.h:295
inline void DescriptorSetBindings_t::DescriptorSetBindings_t()
{
} /* size: 0 */

// <00A0835F> vulkan/renderdevicevulkan.h:295
void DescriptorSetBindings_t::~DescriptorSetBindings_t()
{
} /* size: 0 */

// <00A08342> vulkan/renderdevicevulkan.h:295
inline void DescriptorSetBindings_t::~DescriptorSetBindings_t()
{
} /* size: 0 */

// <009D2889> vulkan/renderdevicevulkan.h:295
void DescriptorSetBindings_t::DescriptorSetBindings_t(const DescriptorSetBindings_t &)
{
} /* size: 0 */

// <009D2867> vulkan/renderdevicevulkan.h:295
inline void DescriptorSetBindings_t::DescriptorSetBindings_t(const DescriptorSetBindings_t &)
{
} /* size: 0 */

// <0096056B> vulkan/renderdevicevulkan.h:342
// member functions: 10
// member variables: 2
// vtable entries: 2
// class size: 360
class CVertexShaderVulkan : public CShaderVulkanBase {
public:
	/* class CShaderVulkanBase <ancestor>; */ /* 0 328 */
	void CVertexShaderVulkan(CVertexShaderVulkan* , const CVertexShaderVulkan& );
	/* vulkan/renderdevicevulkan.cpp:8080 */
	void CVertexShaderVulkan(CVertexShaderVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8085 */
	virtual void ~CVertexShaderVulkan(CVertexShaderVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8094 */
	virtual bool Create(CVertexShaderVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8182 */
	virtual void ComputeHash(CVertexShaderVulkan* , const uint8_t* , uint32_t);
	CUtlVector<int, CUtlMemory<int, int> > m_vertexAttribMap; /* 328 32 */
	void CVertexShaderVulkan(class CVertexShaderVulkan *, const class CVertexShaderVulkan  &); /* linkage=_ZN19CVertexShaderVulkanC4ERKS_ */
	void CVertexShaderVulkan(class CVertexShaderVulkan *); /* linkage=_ZN19CVertexShaderVulkanC4Ev */
	virtual void ~CVertexShaderVulkan(class CVertexShaderVulkan *); /* linkage=_ZN19CVertexShaderVulkanD4Ev */
	virtual bool Create(class CVertexShaderVulkan *); /* linkage=_ZN19CVertexShaderVulkan6CreateEv */
	virtual void ComputeHash(class CVertexShaderVulkan *, const uint8_t  *, uint32_t); /* linkage=_ZN19CVertexShaderVulkan11ComputeHashEPKhj */
};

// <009578D9> vulkan/renderdevicevulkan.h:371
// member variables: 3
// struct size: 16
struct VulkanSemaphore_t {
	uint32_t m_nFrameNumber; /* 0 4 */
	bool m_bWaitedOnThisFrame; /* 4 1 */
	VkSemaphore m_pSemaphore; /* 8 8 */
};

// <009352D2> vulkan/renderdevicevulkan.h:388
// member functions: 550
// member variables: 147
// vtable entries: 123
// class size: 321,920
class CRenderDeviceVulkan : public CRenderDeviceBase, public ITextureResidencyListener, public IMobileEventListener {
	/* vulkan/renderdevicevulkan.h:617 */
	enum PerThreadShutdownPortion_t {
		PerThreadShutdownPortion_PipelineCache = 0,
		PerThreadShutdownPortion_CommandBufferPool = 1,
		PerThreadShutdownPortion_CommandPools = 2,
		PerThreadShutdownPortion_DynamicBuffers = 3,
		PerThreadShutdownPortion_DynamicDescriptorSets = 4,
		PerThreadShutdownPortion_DescriptorSetPools = 5,
		PerThreadShutdownPortion_COUNT = 6,
		PerThreadShutdownPortion_All = 7,
	};
	/* vulkan/renderdevicevulkan.h:873 */
	struct VulkanTextureReleaseResources_t {
		CVulkanImage * m_pVulkanImage; /* 0 8 */
		VulkanImageViews_t m_ImageViews; /* 8 104 */
		TextureSpecification_t m_Spec; /* 112 104 */
		void VulkanTextureReleaseResources_t(VulkanTextureReleaseResources_t* , const VulkanTextureReleaseResources_t& );
		void ~VulkanTextureReleaseResources_t(VulkanTextureReleaseResources_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderdevicevulkan.h:884 */
	struct FencedVulkanTextureRelease_t {
		uint m_nFrameNumber; /* 0 4 */
		CUtlVector<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int> > m_Pool; /* 8 32 */
		void FencedVulkanTextureRelease_t(FencedVulkanTextureRelease_t* );
		void ~FencedVulkanTextureRelease_t(FencedVulkanTextureRelease_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderdevicevulkan.h:892 */
	struct FencedVertexBufferRelease_t {
		CPipelineFence * m_pWaitingOnFence; /* 0 8 */
		PerThreadDataVulkan_t * m_pPerThread; /* 8 8 */
		CUtlVector<CVertexBufferVulkan*, CUtlMemory<CVertexBufferVulkan*, int> > m_Pool; /* 16 32 */
		void FencedVertexBufferRelease_t(FencedVertexBufferRelease_t* );
		void ~FencedVertexBufferRelease_t(FencedVertexBufferRelease_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderdevicevulkan.h:901 */
	struct FencedIndexBufferRelease_t {
		CPipelineFence * m_pWaitingOnFence; /* 0 8 */
		PerThreadDataVulkan_t * m_pPerThread; /* 8 8 */
		CUtlVector<CIndexBufferVulkan*, CUtlMemory<CIndexBufferVulkan*, int> > m_Pool; /* 16 32 */
		void FencedIndexBufferRelease_t(FencedIndexBufferRelease_t* );
		void ~FencedIndexBufferRelease_t(FencedIndexBufferRelease_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderdevicevulkan.h:915 */
	struct QueryPool_t {
		VkQueryPool m_pQueryPool; /* 0 8 */
		RenderQueryType_t m_nQueryType; /* 8 4 */
		uint32 m_nTotalSlots; /* 12 4 */
		uint32 m_nCurrentSlot; /* 16 4 */
		uint32 m_nFrameNumber; /* 20 4 */
		uint32_t * m_pRequiresResetBitSet; /* 24 8 */
		bool m_bInUse; /* 32 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CRenderDeviceBase <ancestor>; */ /* 0 0 */
	/* class ITextureResidencyListener <ancestor>; */ /* 151744 8 */
	/* class IMobileEventListener <ancestor>; */ /* 151752 24 */
	void CRenderDeviceVulkan(CRenderDeviceVulkan* , const CRenderDeviceVulkan& );
	/* vulkan/renderdevicevulkan.cpp:1705 */
	virtual RenderDeviceAPI_t GetRenderDeviceAPI(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3418 */
	virtual SwapChainHandle_t CreateSwapChain(CRenderDeviceVulkan* , PlatWindow_t, OsSpecificWindowHandle_t, const RenderDeviceInfo_t& , const char* );
	/* vulkan/renderdevicevulkan.cpp:3464 */
	virtual bool UpdateSwapChain(CRenderDeviceVulkan* , SwapChainHandle_t, const RenderDeviceInfo_t& );
	/* vulkan/renderdevicevulkan.cpp:3448 */
	virtual const RenderDeviceInfo_t& GetSwapChainInfo(const CRenderDeviceVulkan* , SwapChainHandle_t);
	/* vulkan/renderdevicevulkan.cpp:3431 */
	virtual bool CanRenderToSwapChain(const CRenderDeviceVulkan* , SwapChainHandle_t);
	/* vulkan/renderdevicevulkan.cpp:3832 */
	virtual ImageFormat GetSwapChainDepthStencilFormat(const CRenderDeviceVulkan* , SwapChainHandle_t);
	/* vulkan/renderdevicevulkan.cpp:3808 */
	virtual bool IsUsingGraphics(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3851 */
	virtual const char* GetShaderVersionString(const CRenderDeviceVulkan* , RenderShaderType_t);
	/* vulkan/renderdevicevulkan.cpp:3931 */
	virtual void BeginRendering(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3937 */
	virtual void BeginSubmittingDisplayLists(CRenderDeviceVulkan* , SwapChainHandle_t);
	/* vulkan/renderdevicevulkan.cpp:3953 */
	virtual bool Present(CRenderDeviceVulkan* , SwapChainHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4356 */
	virtual unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > CompileShader(CRenderDeviceVulkan* , const char* , uint32, const char* );
	/* vulkan/renderdevicevulkan.cpp:4662 */
	virtual VertexBufferHandle_t CreateVertexBuffer(CRenderDeviceVulkan* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t);
	/* vulkan/renderdevicevulkan.cpp:4679 */
	virtual VertexBufferHandle_t CreateVertexBuffer(CRenderDeviceVulkan* , RenderBufferType_t, const BufferDesc_t& , RenderInputLayout_t, RenderBufferFlags_t);
	/* vulkan/renderdevicevulkan.cpp:4670 */
	virtual VertexBufferHandle_t CreateVertexBuffer(CRenderDeviceVulkan* , RenderBufferType_t, const BufferDesc_t& , int, const RenderInputLayoutField_t* , RenderBufferFlags_t);
	/* vulkan/renderdevicevulkan.cpp:4689 */
	virtual void DestroyVertexBuffer(CRenderDeviceVulkan* , VertexBufferHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4876 */
	virtual IndexBufferHandle_t CreateIndexBuffer(CRenderDeviceVulkan* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t);
	/* vulkan/renderdevicevulkan.cpp:4884 */
	virtual void DestroyIndexBuffer(CRenderDeviceVulkan* , IndexBufferHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4837 */
	virtual void GetVertexBufferDesc(CRenderDeviceVulkan* , VertexBufferHandle_t, BufferDesc_t* );
	/* vulkan/renderdevicevulkan.cpp:4854 */
	virtual void GetIndexBufferDesc(CRenderDeviceVulkan* , IndexBufferHandle_t, BufferDesc_t* );
	/* vulkan/renderdevicevulkan.cpp:4871 */
	virtual void GetGPUBufferDesc(CRenderDeviceVulkan* , RenderBufferHandle_t, BufferDesc_t* );
	/* vulkan/renderdevicevulkan.cpp:4897 */
	virtual RenderBufferHandle_t CreateGPUBuffer(CRenderDeviceVulkan* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t, const void* );
	/* vulkan/renderdevicevulkan.cpp:4902 */
	virtual RenderBufferHandle_t CreateGPUBufferFormatted(CRenderDeviceVulkan* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t, ImageFormat, const void* );
	/* vulkan/renderdevicevulkan.cpp:4919 */
	virtual uint64 GetGPUBufferDeviceAddress(const CRenderDeviceVulkan* , RenderBufferHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4935 */
	virtual void DestroyGPUBuffer(CRenderDeviceVulkan* , RenderBufferHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4958 */
	virtual RenderInputLayout_t CreateInputLayout(CRenderDeviceVulkan* , const char* , int, const RenderInputLayoutField_t* );
	/* vulkan/renderdevicevulkan.cpp:4963 */
	virtual void AddInputLayoutReference(CRenderDeviceVulkan* , RenderInputLayout_t);
	/* vulkan/renderdevicevulkan.cpp:4971 */
	virtual void DestroyInputLayout(CRenderDeviceVulkan* , RenderInputLayout_t);
	/* vulkan/renderdevicevulkan.cpp:4979 */
	virtual void ConcatentateInputLayouts(CRenderDeviceVulkan* , int, RenderInputLayout_t* , int, const RenderInputLayout_t* );
	/* vulkan/renderdevicevulkan.cpp:4985 */
	virtual void GetInputLayoutFields(CRenderDeviceVulkan* , RenderInputLayout_t, const RenderInputLayoutField_t** , int& );
	/* vulkan/renderdevicevulkan.cpp:4320 */
	virtual void SetHardwareGammaRamp(CRenderDeviceVulkan* , SwapChainHandle_t, float, float, float, float, bool);
	/* vulkan/renderdevicevulkan.cpp:6405 */
	virtual RenderDescriptorSetHandle_t CreateDescriptorSet(CRenderDeviceVulkan* , int32, const RenderDescriptorDesc_t* , int32, const RenderDescriptorBinding_t* , bool);
	/* vulkan/renderdevicevulkan.cpp:6470 */
	virtual void UpdateDescriptorSet(CRenderDeviceVulkan* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* );
	/* vulkan/renderdevicevulkan.cpp:6542 */
	virtual void DestroyDescriptorSet(CRenderDeviceVulkan* , RenderDescriptorSetHandle_t);
	/* vulkan/renderdevicevulkan.cpp:8687 */
	virtual bool AddDescriptorsToGlobalPerFrameDescriptorSet(CRenderDeviceVulkan* , int32, const RenderDescriptorDesc_t* );
	/* vulkan/renderdevicevulkan.cpp:8717 */
	virtual void UpdateGlobalPerFrameDescriptorBindings(CRenderDeviceVulkan* , int32, const RenderDescriptorBinding_t* );
	/* vulkan/renderdevicevulkan.cpp:8472 */
	virtual void SetFramePacingFPS(CRenderDeviceVulkan* , double);
	/* vulkan/renderdevicevulkan.cpp:8567 */
	virtual void UnThrottlePipelineCreationForNFrames(CRenderDeviceVulkan* , uint32);
	/* vulkan/renderdevicevulkan.cpp:6758 */
	virtual void RegisterDescriptorSetLayout(CRenderDeviceVulkan* , CUtlStringToken, RenderDescriptorSetHandle_t);
	/* vulkan/renderdevicevulkan.cpp:7004 */
	virtual RenderDescriptorSetHandle_t GetRegisteredDescriptorSetLayout(const CRenderDeviceVulkan* , CUtlStringToken);
	/* vulkan/renderdevicevulkan.cpp:6811 */
	virtual RenderBLASHandle_t CreateBLAS(CRenderDeviceVulkan* , const BLASCreateDesc_t& , uint32* );
	/* vulkan/renderdevicevulkan.cpp:6842 */
	virtual bool IsCompactible(CRenderDeviceVulkan* , RenderBLASHandle_t);
	/* vulkan/renderdevicevulkan.cpp:6849 */
	virtual IsReadyToCompactResult_t IsReadyToCompact(CRenderDeviceVulkan* , RenderBLASHandle_t);
	/* vulkan/renderdevicevulkan.cpp:6865 */
	virtual RenderBLASHandle_t CreateBLASForCompact(CRenderDeviceVulkan* , RenderBLASHandle_t);
	/* vulkan/renderdevicevulkan.cpp:6891 */
	virtual void DestroyBLAS(CRenderDeviceVulkan* , RenderBLASHandle_t);
	/* vulkan/renderdevicevulkan.cpp:6906 */
	virtual RenderTLASHandle_t CreateTLAS(CRenderDeviceVulkan* , const TLASCreateDesc_t& , TLASInstance_t* , int);
	/* vulkan/renderdevicevulkan.cpp:6930 */
	virtual void DestroyTLAS(CRenderDeviceVulkan* , RenderTLASHandle_t);
	/* vulkan/renderdevicevulkan.cpp:6950 */
	virtual RenderRayTracePipelineHandle_t CreateRayTracePipeline(CRenderDeviceVulkan* , const RayTracePipelineStateCreateDesc_t& );
	/* vulkan/renderdevicevulkan.cpp:6962 */
	virtual void DestroyRayTracePipeline(CRenderDeviceVulkan* , RenderRayTracePipelineHandle_t);
	/* vulkan/renderdevicevulkan.h:447 */
	virtual bool IsCreatingRayTracePipelines(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6976 */
	virtual IRaytraceShaderBindingTable* CreateRayTraceShaderBindingTable(CRenderDeviceVulkan* , const ShaderBindingTableCreateDesc_t& );
	/* vulkan/renderdevicevulkan.cpp:6989 */
	virtual void DestroyRayTraceShaderBindingTable(CRenderDeviceVulkan* , IRaytraceShaderBindingTable* );
	/* vulkan/renderdevicevulkan.h:450 */
	virtual bool IsRayTracingSupported(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:5601 */
	virtual SamplerStateHandle_t FindOrCreateSamplerState(CRenderDeviceVulkan* , const CSamplerStateDesc& , const char* );
	/* vulkan/renderdevicevulkan.cpp:5606 */
	virtual uint GetSamplerIndex(const CRenderDeviceVulkan* , SamplerStateHandle_t);
	/* vulkan/renderdevicevulkan.cpp:5616 */
	CVulkanSamplerObject* GetSamplerObject(const CRenderDeviceVulkan* , SamplerStateHandle_t);
	/* vulkan/renderdevicevulkan.cpp:1744 */
	void OnAnisotropyChanged(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8672 */
	virtual RenderDescriptorSetHandle_t GetGlobalLateBoundBindlessDescriptorSet(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6415 */
	RenderDescriptorSetHandle_t CreateDescriptorSetVulkan(CRenderDeviceVulkan* , int32, const RenderDescriptorDesc_t* , int32, const RenderDescriptorBinding_t* , bool, CDescriptorSetVulkan** );
	/* vulkan/renderdevicevulkan.h:1186 */
	CRenderThreadVulkan* RenderThread(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1192 */
	CColorFormatVulkan* ColorFormat(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1198 */
	CMemoryManagerVulkan* MemoryManager(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1204 */
	CFramebufferMgrVulkan* FramebufferManager(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1210 */
	CRenderResourceMgr* RenderResourceMgr(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1216 */
	CRenderPassManagerVulkan* RenderPassManager(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1221 */
	CPipelineManagerVulkan* PipelineManager(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1226 */
	CShaderTableVulkan* ShaderTable(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1231 */
	CAsyncCompileHelperVulkan* AsyncCompileHelper(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3826 */
	virtual void SpewDriverInfo(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3817 */
	virtual int GetCurrentAdapter(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:5001 */
	virtual void EnableRenderContexts(CRenderDeviceVulkan* , bool);
	/* vulkan/renderdevicevulkan.cpp:5036 */
	virtual IRenderContext* VaCreateRenderContext(CRenderDeviceVulkan* , uint, RenderContextCreationInfo_t* , const char* , va_list* );
	/* vulkan/renderdevicevulkan.cpp:4167 */
	virtual void ForceDeviceLost(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3733 */
	virtual bool ReadTexturePixels(CRenderDeviceVulkan* , HRenderTexture, Rect_t* , int, int, Rect_t* , void* , ImageFormat, int);
	/* vulkan/renderdevicevulkan.cpp:5079 */
	void DiscardCommandBuffers(CRenderDeviceVulkan* , CCommandStream* );
	/* vulkan/renderdevicevulkan.cpp:5128 */
	virtual void DiscardDisplayList(CRenderDeviceVulkan* , CDisplayList* );
	/* vulkan/renderdevicevulkan.cpp:3479 */
	virtual ImageFormat GetNearestSupportedColorFormat(CRenderDeviceVulkan* , ImageFormat, bool, bool, bool);
	/* vulkan/renderdevicevulkan.cpp:3485 */
	virtual void* GetDeviceSpecificTexture(CRenderDeviceVulkan* , HRenderTexture, RenderTextureDimension_t);
	/* vulkan/renderdevicevulkan.cpp:3523 */
	virtual void* GetDeviceSpecificImageView(CRenderDeviceVulkan* , HRenderTexture, RenderTextureDimension_t, RenderColorSpace_t);
	/* vulkan/renderdevicevulkan.cpp:3530 */
	virtual void* GetDeviceSpecificBuffer(CRenderDeviceVulkan* , RenderBufferHandle_t);
	/* vulkan/renderdevicevulkan.cpp:3562 */
	virtual void* GetDeviceSpecificBuffer(CRenderDeviceVulkan* , IndexBufferHandle_t);
	/* vulkan/renderdevicevulkan.cpp:3537 */
	virtual void* GetDeviceSpecificBuffer(CRenderDeviceVulkan* , VertexBufferHandle_t);
	/* vulkan/renderdevicevulkan.cpp:3586 */
	virtual void* GetDeviceSpecificDescriptorSet(CRenderDeviceVulkan* , RenderDescriptorSetHandle_t);
	/* vulkan/renderdevicevulkan.cpp:3616 */
	virtual void* GetDeviceSpecificRayTracePipeline(CRenderDeviceVulkan* , RenderRayTracePipelineHandle_t);
	/* vulkan/renderdevicevulkan.cpp:1684 */
	virtual void OnBeginningOfClientShutdown(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6682 */
	virtual void TextureBecameFullyResident(CRenderDeviceVulkan* , HRenderTexture);
	/* vulkan/renderdevicevulkan.cpp:6694 */
	virtual void TextureBecameEvicted(CRenderDeviceVulkan* , HRenderTexture);
	/* vulkan/renderdevicevulkan.cpp:460 */
	virtual bool InitDevice(CRenderDeviceVulkan* , int, int, int);
	/* vulkan/renderdevicevulkan.cpp:1546 */
	virtual void ShutdownDevice(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1180 */
	virtual bool IsDeactivated(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3641 */
	virtual bool SupportsMSAAMode(const CRenderDeviceVulkan* , ImageFormat, bool, RenderMultisampleType_t);
	/* vulkan/renderdevicevulkan.cpp:3682 */
	virtual bool SupportsCSAAMode(const CRenderDeviceVulkan* , ImageFormat, bool, RenderMultisampleType_t, int);
	/* vulkan/renderdevicevulkan.cpp:3688 */
	virtual void PrintGPUMemoryStats(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4174 */
	virtual void PerFrameCleanup(CRenderDeviceVulkan* , SwapChainHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4273 */
	virtual void UpdateStats(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4531 */
	virtual RenderShaderHandle_t CreateVertexShader(CRenderDeviceVulkan* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* vulkan/renderdevicevulkan.cpp:4557 */
	virtual void DestroyVertexShader(CRenderDeviceVulkan* , RenderShaderHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4594 */
	virtual RenderShaderHandle_t CreateGeometryShader(CRenderDeviceVulkan* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* vulkan/renderdevicevulkan.cpp:4599 */
	virtual void DestroyGeometryShader(CRenderDeviceVulkan* , RenderShaderHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4604 */
	virtual RenderShaderHandle_t CreateComputeShader(CRenderDeviceVulkan* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* vulkan/renderdevicevulkan.cpp:4609 */
	virtual void DestroyComputeShader(CRenderDeviceVulkan* , RenderShaderHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4614 */
	virtual RenderShaderHandle_t CreatePixelShader(CRenderDeviceVulkan* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* vulkan/renderdevicevulkan.cpp:4619 */
	virtual void DestroyPixelShader(CRenderDeviceVulkan* , RenderShaderHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4624 */
	virtual RenderShaderHandle_t CreateRayTraceShader(CRenderDeviceVulkan* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* vulkan/renderdevicevulkan.cpp:4632 */
	virtual void DestroyRayTraceShader(CRenderDeviceVulkan* , RenderShaderHandle_t);
	/* vulkan/renderdevicevulkan.cpp:5730 */
	virtual void OnPresentCompleted(CRenderDeviceVulkan* , SwapChainHandle_t, int, CDeviceFence* );
	/* vulkan/renderdevicevulkan.cpp:5151 */
	virtual ConstantBufferHandle_t CreateConstantBufferInternal(CRenderDeviceVulkan* , ConstantBufferType_t, uint32, uint32, uint32, uint, const char* );
	/* vulkan/renderdevicevulkan.cpp:5171 */
	virtual void FreeConstantBuffer(CRenderDeviceVulkan* , ConstantBuffer_t* );
	/* vulkan/renderdevicevulkan.cpp:5193 */
	virtual uint32 GetRequiredViewConstantBufferAlignment(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8222 */
	virtual GraphicsAPISpecificTextureHandle_t GetGraphicsAPISpecificTextureHandle(CRenderDeviceVulkan* , HRenderTexture);
	/* vulkan/renderdevicevulkan.cpp:8574 */
	virtual void GetShaderStats(CRenderDeviceVulkan* , RenderShaderStats_t* , RenderShaderType_t, RenderShaderHandle_t);
	/* vulkan/renderdevicevulkan.cpp:8631 */
	virtual void TriggerValidationError(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8658 */
	virtual uint64 GetGPUMemoryFragmentationBytes(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4095 */
	virtual RenderQueryHandle_t CreateQueryObject(CRenderDeviceVulkan* , RenderQueryType_t);
	/* vulkan/renderdevicevulkan.cpp:4129 */
	virtual RenderQueryState_t GetQueryData(CRenderDeviceVulkan* , RenderQueryHandle_t, uint64* );
	/* vulkan/renderdevicevulkan.cpp:4113 */
	virtual void DeleteQueryObject(CRenderDeviceVulkan* , RenderQueryHandle_t);
	/* vulkan/renderdevicevulkan.cpp:5643 */
	virtual void* GetDeviceSpecificInfo(CRenderDeviceVulkan* , DeviceSpecificInfo_t);
	/* vulkan/renderdevicevulkan.cpp:8193 */
	virtual int QueryFeature(CRenderDeviceVulkan* , CUtlStringToken);
	/* vulkan/renderdevicevulkan.cpp:3963 */
	virtual bool GetPipelineFrameStats(CRenderDeviceVulkan* , CRenderPipelineFrameStats& );
	/* vulkan/renderdevicevulkan.cpp:3979 */
	virtual void ReleasePipelineFrameStats(CRenderDeviceVulkan* , CRenderPipelineFrameStats& );
	/* vulkan/renderdevicevulkan.cpp:8273 */
	virtual void AppendStatsSummaryString(CRenderDeviceVulkan* , CBufferString* );
	/* vulkan/renderdevicevulkan.cpp:8282 */
	virtual void OnRenderDeviceFlagsEnabled(CRenderDeviceVulkan* , RenderDeviceFlag_t);
	/* vulkan/renderdevicevulkan.cpp:8298 */
	virtual void OnRenderDeviceFlagsDisabled(CRenderDeviceVulkan* , RenderDeviceFlag_t);
	/* vulkan/renderdevicevulkan.cpp:8664 */
	virtual bool IsProfilerAttached(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8777 */
	virtual void DefragmentGPUMemory(CRenderDeviceVulkan* , RenderDefragFlags_t, bool);
	/* vulkan/renderdevicevulkan.cpp:2978 */
	virtual void WaitIfTooFarAheadOfGPU(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8490 */
	virtual void OnEnterHibernationState(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8506 */
	virtual void OnExitHibernationState(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8520 */
	virtual void OnLowMemoryNotification(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:120 */
	void CRenderDeviceVulkan(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:231 */
	virtual void ~CRenderDeviceVulkan(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:1539 */
	void PreShutdown(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4314 */
	void MarkResourceUsed(CRenderDeviceVulkan* , RenderResourceHandle_t);
	/* vulkan/renderdevicevulkan.h:1269 */
	CVertexBufferVulkan* GetVertexBuffer(CRenderDeviceVulkan* , VertexBufferHandle_t);
	/* vulkan/renderdevicevulkan.h:1274 */
	CIndexBufferVulkan* GetIndexBuffer(CRenderDeviceVulkan* , IndexBufferHandle_t);
	/* vulkan/renderdevicevulkan.h:1279 */
	CVertexBufferVulkan* GetVertexBuffer(CRenderDeviceVulkan* , DynamicVertexBufferHandle_t);
	/* vulkan/renderdevicevulkan.h:1284 */
	CIndexBufferVulkan* GetIndexBuffer(CRenderDeviceVulkan* , DynamicIndexBufferHandle_t);
	/* vulkan/renderdevicevulkan.h:1264 */
	CInputLayoutVulkan* GetInputLayout(const CRenderDeviceVulkan* , RenderInputLayout_t);
	/* vulkan/renderdevicevulkan.cpp:6610 */
	CDescriptorSetVulkan* LockStaticDescriptorSet(CRenderDeviceVulkan* , RenderDescriptorSetHandle_t);
	/* vulkan/renderdevicevulkan.cpp:6623 */
	void UnlockStaticDescriptorSet(CRenderDeviceVulkan* , RenderDescriptorSetHandle_t);
	/* vulkan/renderdevicevulkan.h:1249 */
	RenderShaderHandle_t GetStandardShader(CRenderDeviceVulkan* , StandardShaderId_t);
	/* vulkan/renderdevicevulkan.h:1254 */
	RenderInputLayout_t GetStandardLayout(CRenderDeviceVulkan* , StandardLayoutId_t);
	/* vulkan/renderdevicevulkan.h:1259 */
	RsDepthStencilStateHandle_t GetStandardDepthStencilState(CRenderDeviceVulkan* , StandardDepthStencilStateId_t);
	/* vulkan/renderdevicevulkan.cpp:5622 */
	CVulkanSamplerObject* CreateSamplerObject(CRenderDeviceVulkan* , const CSamplerStateDesc* , const char* );
	/* vulkan/renderdevicevulkan.cpp:5634 */
	CVulkanSamplerObject* CreateImmutableSamplerObject(CRenderDeviceVulkan* , const CSamplerStateDesc* , const char* );
	/* vulkan/renderdevicevulkan.h:594 */
	void ReleaseBufferView(CRenderDeviceVulkan* , VkBufferView);
	/* vulkan/renderdevicevulkan.cpp:5691 */
	void ReleaseTextureResourcesVulkan(CRenderDeviceVulkan* , CVulkanImage* , VulkanImageViews_t* , const TextureSpecification_t* );
	/* vulkan/renderdevicevulkan.cpp:8233 */
	void ServiceFallbackTextureQueue(CRenderDeviceVulkan* , CRenderContextVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4709 */
	DynamicVertexBufferHandle_t AcquirePooledDynamicVertexBuffer(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , const BufferDesc_t& , RenderBufferFlags_t, ImageFormat);
	/* vulkan/renderdevicevulkan.cpp:4733 */
	void ReleasePooledDynamicVertexBuffers(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , DynamicVertexBufferHandle_t* , size_t);
	/* vulkan/renderdevicevulkan.cpp:4780 */
	DynamicIndexBufferHandle_t AcquirePooledDynamicIndexBuffer(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , const BufferDesc_t& );
	/* vulkan/renderdevicevulkan.cpp:4796 */
	void ReleasePooledDynamicIndexBuffers(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , DynamicIndexBufferHandle_t* , size_t);
	/* vulkan/renderdevicevulkan.h:605 */
	bool GetInitializedTextureManager(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:606 */
	void SetInitializedTextureManager(CRenderDeviceVulkan* , bool);
	/* vulkan/renderdevicevulkan.cpp:4005 */
	bool AssignQueryObjectToPool(CRenderDeviceVulkan* , RenderQueryHandle_t);
	/* vulkan/renderdevicevulkan.cpp:2048 */
	void CreateDefaultBuffers(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:611 */
	VertexBufferHandle_t GetDefaultVB(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1237 */
	bool GetDefaultCBDescriptor(CRenderDeviceVulkan* , VkDescriptorBufferInfo* );
	/* vulkan/renderdevicevulkan.h:613 */
	RenderDescriptorSetHandle_t GetDefaultDescriptorSet(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:5778 */
	void ShutdownPerThreadDataPortion(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , PerThreadShutdownPortion_t);
	/* vulkan/renderdevicevulkan.cpp:5857 */
	void ShutdownPerThreadData(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , PerThreadShutdownPortion_t);
	/* vulkan/renderdevicevulkan.cpp:5871 */
	void ShutdownAllPerThreadData(CRenderDeviceVulkan* , PerThreadShutdownPortion_t);
	/* vulkan/renderdevicevulkan.cpp:5880 */
	void ShutdownCommandBufferPools(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:5889 */
	PerThreadDataVulkan_t* GetPerThreadData(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:5898 */
	VulkanDescriptorSetPool_t* AcquireDescriptorSetPool(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , int32);
	/* vulkan/renderdevicevulkan.cpp:5932 */
	void ReleaseDescriptorSetPool(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , VulkanDescriptorSetPool_t* );
	/* vulkan/renderdevicevulkan.cpp:5960 */
	VkDescriptorSet UpdateDescriptorSetPool(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , int32, VulkanDescriptorSetPool_t** , VkDescriptorSetLayout, uint32_t);
	/* vulkan/renderdevicevulkan.cpp:6394 */
	void UpdateStaticDescriptorPool(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6710 */
	void QueueStaticDescriptorSetDeletion(CRenderDeviceVulkan* , CDescriptorSetVulkan* );
	/* vulkan/renderdevicevulkan.h:644 */
	VulkanDescriptorSetPool_t* GetCurrentStaticDescriptorPool(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6731 */
	void QueueStaticDescriptorPoolDeletion(CRenderDeviceVulkan* , VulkanDescriptorSetPool_t* );
	/* vulkan/renderdevicevulkan.cpp:8410 */
	virtual RenderPassHandle_t CreateRenderPass(CRenderDeviceVulkan* , const CRenderPassDesc* );
	/* vulkan/renderdevicevulkan.cpp:8417 */
	virtual void DestroyRenderPass(CRenderDeviceVulkan* , RenderPassHandle_t);
	/* vulkan/renderdevicevulkan.cpp:8428 */
	virtual int GetClearFlagsSupportedInRenderPass(CRenderDeviceVulkan* , int, const RenderTargetDesc_t& , const RenderClearInfo_t& );
	/* vulkan/renderdevicevulkan.cpp:2147 */
	VkCommandBuffer CreateCmdBuffer(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , VulkanCommandBufferType_t);
	/* vulkan/renderdevicevulkan.cpp:2172 */
	void DestroyCmdBuffer(CRenderDeviceVulkan* , VkCommandBuffer* , PerThreadDataVulkan_t* , VulkanCommandBufferType_t);
	/* vulkan/renderdevicevulkan.cpp:2189 */
	void TrimCommandPool(CRenderDeviceVulkan* , PerThreadDataVulkan_t* );
	/* vulkan/renderdevicevulkan.cpp:2213 */
	void TrimAllCommandPools(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8304 */
	const VkPhysicalDeviceLimits& GetVulkanPhysicalDeviceLimits(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8310 */
	const VkPhysicalDeviceFeatures& GetVulkanPhysicalDeviceFeatures(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1289 */
	bool KHRDedicatedAllocationEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1294 */
	bool KHRBindMemory2Enabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1299 */
	bool KHRImageFormatListEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1304 */
	bool KHRMaintenance1Enabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1309 */
	bool KHRMaintenance2Enabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1314 */
	bool EXTSeparateStencilUsageEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1319 */
	bool EXTValidationCacheEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1339 */
	bool KHRSwapchainMutableFormatEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1344 */
	bool NVDeviceDiagnosticCheckpointsEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1349 */
	bool EXTMemoryBudgetEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1355 */
	bool EXTMemoryPriorityEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1361 */
	bool GOOGLEDisplayTimingEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1381 */
	bool KHRPipelineExecutablePropertiesEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1386 */
	bool KHRDynamicRenderingEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1391 */
	bool EXTGraphicsPipelineLibraryEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1396 */
	bool EXTExtendedDynamicStateEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1401 */
	bool EXTExtendedDynamicState2Enabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1406 */
	bool EXTExtendedDynamicState3Enabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1411 */
	bool EXTPipelineCreationCacheControlEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1329 */
	bool AllowMutableSwapchainFormat(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:678 */
	bool AsyncComputeEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1324 */
	bool SanitizeForMetalValidation(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1334 */
	bool SupportsReadOnlyDepthStencil(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8533 */
	bool IsHibernating(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1371 */
	bool LazilyAllocateRenderTargets(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1416 */
	bool KHRDrawIndirectCountEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1421 */
	bool EXTPageableDeviceLocalMemoryEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1426 */
	bool EXTDescriptorIndexingEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1431 */
	bool EXTSubgroupSizeControlEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1436 */
	bool KHRBufferDeviceAddressEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1441 */
	bool KHRDeferredHostOperationsEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1446 */
	bool EXTMultiDrawEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1451 */
	bool KHRShaderFloat16Int8Enabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1456 */
	bool KHRSeparateDepthStencilLayoutsEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1461 */
	bool EXTLoadStoreOpNoneEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1466 */
	bool KHRShaderClockEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1471 */
	bool EXTFullScreenExclusiveEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1476 */
	bool EXTDeviceFaultEnabled(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1366 */
	bool UseExternalSubpassDependency(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:1376 */
	CAftermathVulkan& Aftermath(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8539 */
	const char* AllocateDeviceCheckPointString(CRenderDeviceVulkan* , const char* );
	/* vulkan/renderdevicevulkan.cpp:8320 */
	RenderSemaphoreHandle_t AcquireSemaphore(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8354 */
	void ReleaseSemaphore(CRenderDeviceVulkan* , RenderSemaphoreHandle_t);
	/* vulkan/renderdevicevulkan.cpp:8370 */
	void RecycleSemaphores(CRenderDeviceVulkan* , bool);
	/* vulkan/renderdevicevulkan.cpp:8395 */
	void DestroyAllSemaphores(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6635 */
	RenderDescriptorSetHandle_t AcquireDynamicDescriptorSet(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , const CDescriptorSetVulkan* , VkDescriptorSet);
	/* vulkan/renderdevicevulkan.h:724 */
	float GetDepthClearValue(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:726 */
	const VkDebugMarkerMarkerInfoEXT DebugMarkerDefaultColor(const char* );
	/* vulkan/renderdevicevulkan.h:728 */
	int GetUnthrottledPipelineCreationFrameCount(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:729 */
	bool IsShuttingDown(const CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4577 */
	void DeleteVertexShader(CRenderDeviceVulkan* , RenderShaderHandle_t, bool);
	/* vulkan/renderdevicevulkan.cpp:4418 */
	void DeleteGenericShader(CRenderDeviceVulkan* , RenderShaderHandle_t, bool);
	/* vulkan/renderdevicevulkan.cpp:4435 */
	RenderBufferHandle_t CreateMemoryPooledGPUBuffer(CRenderDeviceVulkan* , IBufferMovedListener* , const BufferDesc_t& , VulkanMemoryPoolType_t, CRenderContextVulkan* , void* );
	/* vulkan/renderdevicevulkan.cpp:4468 */
	void ReserveAccelStructBuildScratchSize(CRenderDeviceVulkan* , int);
	/* vulkan/renderdevicevulkan.cpp:4479 */
	RenderBufferHandle_t AccelStructBuildScratchBuffer(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:739 */
	void StartBuildingRayTracePipeline(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.h:740 */
	void EndBuildingRayTracePipeline(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8764 */
	void RebakeAllStaticDescriptorSets(CRenderDeviceVulkan* );
protected:
	/* vulkan/renderdevicevulkan.cpp:5207 */
	virtual void* CreateRasterizerStateFromDesc(CRenderDeviceVulkan* , const RsRasterizerStateDesc_t* );
	/* vulkan/renderdevicevulkan.cpp:5249 */
	virtual void* CreateDepthStencilStateFromDesc(CRenderDeviceVulkan* , const RsDepthStencilStateDesc_t* );
	/* vulkan/renderdevicevulkan.cpp:5319 */
	virtual void* CreateBlendStateFromDesc(CRenderDeviceVulkan* , const RsBlendStateDesc_t* );
	/* vulkan/renderdevicevulkan.cpp:8641 */
	virtual bool GetTimestampCounterFrequencyInternal(CRenderDeviceVulkan* , double* );
private:
	/* vulkan/renderdevicevulkan.cpp:239 */
	void ConfigureDeviceSpecificSettings(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:332 */
	void InitPipelineCacheManager(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4993 */
	void CommitInputLayoutChanges(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:1713 */
	void CreateDefaultSamplerStates(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:1751 */
	void RebuildUserConfigurableSamplers(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:1918 */
	void CreateDefaultShaders(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:1970 */
	void DestroyDefaultShaders(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:1997 */
	void CreateDefaultInputLayouts(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:2003 */
	void DestroyDefaultInputLayouts(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:2015 */
	void CreateDefaultDepthStencilStates(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:2040 */
	void DestroyDefaultDepthStencilStates(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3992 */
	void DestroyQueryPools(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:2084 */
	void DestroyDefaultBuffers(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6270 */
	void DestroyAllDescriptorSetPools(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6313 */
	void DestroyAllStaticDescriptorSets(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6216 */
	void RecycleDescriptorSetPools(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4637 */
	void RecycleDynamicBufferPools(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:3877 */
	void UpdatePipelineStats(CRenderDeviceVulkan* , SwapChainHandle_t);
	/* vulkan/renderdevicevulkan.cpp:4285 */
	void PerformQueuedTextureDeletions(CRenderDeviceVulkan* , bool);
	/* vulkan/renderdevicevulkan.cpp:6327 */
	void CreateStaticDescriptorPool(CRenderDeviceVulkan* , VulkanDescriptorSetPool_t* );
	/* vulkan/renderdevicevulkan.cpp:8789 */
	bool CheckMinimumRequirements(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:4366 */
	RenderShaderHandle_t CreateGenericShader(CRenderDeviceVulkan* , VkShaderStageFlagBits, IRenderShaderByteCode* , const char* );
	/* vulkan/renderdevicevulkan.cpp:4398 */
	void DestroyGenericShader(CRenderDeviceVulkan* , RenderShaderHandle_t);
	/* vulkan/renderdevicevulkan.cpp:2106 */
	VkCommandPool GetCmdPool(CRenderDeviceVulkan* , PerThreadDataVulkan_t* , VulkanCommandBufferType_t);
	/* vulkan/renderdevicevulkan.cpp:2987 */
	void WaitIfAheadOfTheGPUByMoreThanNFrames(CRenderDeviceVulkan* , int32);
	CUtlFixedLinkedList<RasterizerStateVulkan_t> m_RasterizerStates; /* 151776 80 */
	CUtlFixedLinkedList<DepthStencilStateVulkan_t> m_DepthStencilStates; /* 151856 80 */
	CUtlFixedLinkedList<BlendStateVulkan_t> m_BlendStates; /* 151936 80 */
	CVulkanSamplerObject * m_pDefaultSamplerState; /* 152016 8 */
	uint32_t m_nDefaultSamplerId; /* 152024 4 */
	bool m_bForceSamplerRebuild; /* 152028 1 */
	RenderShaderHandle_t m_pStandardShader[8]; /* 152032 64 */
	RenderShaderType_t m_pStandardShaderType[8]; /* 152096 32 */
	RenderInputLayout_t m_pStandardLayout[2]; /* 152128 16 */
	RsDepthStencilStateHandle_t m_pStandardDepthStencilState[3]; /* 152144 24 */
	VertexBufferHandle_t m_hDefaultVertexBuffer; /* 152168 8 */
	ConstantBufferHandle_t m_hDefaultConstantBuffer; /* 152176 8 */
	RenderDescriptorSetHandle_t m_hDefaultDescriptorSet; /* 152184 8 */
	/* vulkan/renderdevicevulkan.cpp:8723 */
	void RecreateGlobalPerFrameDescriptorSet(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8744 */
	void UpdateGlobalPerFrameDescriptorSet(CRenderDeviceVulkan* );
	/* vulkan/renderdevicevulkan.cpp:8754 */
	void DestroyGlobalPerFrameDescriptorSet(CRenderDeviceVulkan* );
	CUtlVector<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> > m_globalDescriptors; /* 152192 32 */
	CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> > m_globalBindings; /* 152224 32 */
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> > m_pGlobalPerFrameDescriptorSet; /* 152256 8 */
	bool m_bGlobalDescriptorSetLayoutUpToDate; /* 152264 1 */
	bool m_bGlobalPerFrameDescriptorSetRegistered; /* 152265 1 */
	CRenderPipelineStatsVulkan * m_pPipelineStats; /* 152272 8 */
	CUtlTSHash<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc> > m_SamplerStateObjects __attribute__((__aligned__(16))); /* 152288 49232 */
	CUtlTSHash<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc> > m_ImmutableSamplerStateObjects __attribute__((__aligned__(16))); /* 201520 49232 */
	bool m_bInitializedTextureManager; /* 250752 1 */
	CTextureManagerVulkan * m_pTextureManager; /* 250760 8 */
	CRenderThreadVulkan * m_pThreadObject; /* 250768 8 */
	CColorFormatVulkan m_ColorFormat; /* 250776 0 */
	CMemoryManagerVulkan m_MemoryManager __attribute__((__aligned__(16))); /* 257840 0 */
	CPipelineManagerVulkan m_PipelineManager __attribute__((__aligned__(16))); /* 264256 0 */
	CFramebufferMgrVulkan m_FramebufferManager; /* 266992 0 */
	CRenderPassManagerVulkan m_ExplicitRenderPassManager __attribute__((__aligned__(8))); /* 267344 0 */
	CShaderTableVulkan m_ShaderTable __attribute__((__aligned__(8))); /* 267872 0 */
	CPipelineCacheManagerVulkan m_PipelineCacheManager; /* 269056 0 */
	CAftermathVulkan m_Aftermath; /* 269160 40 */
	CAsyncCompileHelperVulkan m_AsyncCompileHeper __attribute__((__aligned__(8))); /* 269200 0 */
	CUtlHashtable<CUtlString, empty_t, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int> > m_DisabledPipelineLibraryShaders; /* 269800 32 */
	CUtlFixedLinkedList<CShaderVulkanBase> m_GenericShaderDict; /* 269832 80 */
	CUtlFixedLinkedList<CVertexShaderVulkan> m_VertexShaderDict; /* 269912 80 */
	CThreadMutex m_ShaderDictMutex; /* 269992 72 */
	CInputLayoutDict<CInputLayoutVulkan> m_InputLayoutDict __attribute__((__aligned__(16))); /* 270064 49312 */
	CThreadFastMutex m_ShaderSemanticStringsMutex; /* 319376 24 */
	CStringPool m_ShaderSemanticStrings; /* 319400 64 */
	CInterlockedInt m_nContextCreationCounter __attribute__((__aligned__(4))); /* 319464 4 */
	bool m_bRenderContextsEnabled:1; /* 319468: 0 1 */
	VkDevice m_pDeviceVulkan; /* 319472 8 */
	const class VulkanPhysicalDeviceInfo_t * m_pPhysicalDeviceInfo; /* 319480 8 */
	VkPhysicalDevice m_pPhysicalDeviceVulkan; /* 319488 8 */
	VkQueue m_pUniversalQueueVulkan; /* 319496 8 */
	VkQueue m_pComputeQueueVulkan; /* 319504 8 */
	uint32_t m_nQueueFamilyIndexVulkan; /* 319512 4 */
	uint32_t m_nComputeQueueFamilyIndexVulkan; /* 319516 4 */
	CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int> >, CThreadFastMutex> m_TextureVulkanReleaseList; /* 319520 80 */
	CThreadMutex m_DynamicVBPoolReleaseListLock; /* 319600 72 */
	CUtlVector<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int> > m_DynamicVBPoolReleaseList; /* 319672 32 */
	CThreadMutex m_DynamicIBPoolReleaseListLock; /* 319704 72 */
	CUtlVector<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int> > m_DynamicIBPoolReleaseList; /* 319776 32 */
	CRenderResourceMgr m_ResourceMgr; /* 319808 64 */
	CThreadFastMutex m_DescriptorPoolMutex; /* 319872 24 */
	CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFastMutex> m_QueryPools; /* 319896 80 */
	DescriptorSetPoolList_t m_QueuedDescriptorPoolDeletions; /* 319976 80 */
	CThreadFastMutex m_QueuedDescriptorPoolDeletionsMutex; /* 320056 24 */
	uint32 m_nDescriptorSetsPerPool; /* 320080 4 */
	CInterlockedUInt m_nDynamicDescriptorTypeMask __attribute__((__aligned__(4))); /* 320084 4 */
	CThreadRWLock_FastRead m_staticDescriptorPoolRWLock __attribute__((__aligned__(8))); /* 320088 408 */
	DescriptorSetPoolList_t m_staticDescriptorPools; /* 320496 80 */
	VulkanDescriptorSetPool_t * m_pCurrentStaticDescriptorSetPool; /* 320576 8 */
	CUtlFixedLinkedList<CDescriptorSetVulkan*> m_staticDescriptorSets; /* 320584 80 */
	CUtlLinkedList<RenderDescriptorSetHandle_t__*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__*, short unsigned int>, short unsigned int> > m_staticDescriptorSetDeletionQueue; /* 320664 40 */
	CThreadRWLock_FastRead m_registeredDescriptorSetLayoutRWLock __attribute__((__aligned__(8))); /* 320704 408 */
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__*>, int> > m_registeredDescriptorSetLayouts; /* 321112 32 */
	CUtlLinkedList<CShaderVulkanBase*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase*, int>, int> > m_pipelineLibrariesWaitingForDescriptorSetLayouts; /* 321144 48 */
	CThreadFastMutex m_VulkanSemaphoreMutex; /* 321192 24 */
	/* vulkan/renderdevicevulkan.h:949 */
	typedef struct CUtlLinkedList<VulkanSemaphore_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t*, short unsigned int>, short unsigned int> > VulkanSemaphoreList_t;
	VulkanSemaphoreList_t m_AvailableVulkanSemaphores; /* 321216 40 */
	VulkanSemaphoreList_t m_CompletedVulkanSemaphores; /* 321256 40 */
	CThreadFastMutex m_BLASMutex; /* 321296 24 */
	CThreadFastMutex m_TLASMutex; /* 321320 24 */
	CThreadFastMutex m_RayTracePipelineMutex; /* 321344 24 */
	CThreadFastMutex m_ShaderBindingTablesMutex; /* 321368 24 */
	CUtlIntrusiveDList<CBaseAccelerationStructureVulkan> m_BLAS; /* 321392 8 */
	CUtlIntrusiveDList<CBaseAccelerationStructureVulkan> m_TLAS; /* 321400 8 */
	CUtlIntrusiveDList<CRayTracePipelineVulkan> m_RayTracePipelines; /* 321408 8 */
	CUtlIntrusiveDList<CRayTraceShaderBindingTableVulkan> m_ShaderBindingTables; /* 321416 8 */
	RenderBufferHandle_t m_hBuildAccelStructScratchBuffer; /* 321424 8 */
	int m_nBuildAccelStructScratchSizeMax; /* 321432 4 */
	/* vulkan/renderdevicevulkan.h:960 */
	typedef struct CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > > DeviceSpecificTextureMap_t;
	DeviceSpecificTextureMap_t m_DeviceSpecificTextureMap; /* 321440 48 */
	/* vulkan/renderdevicevulkan.h:961 */
	typedef struct CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> > DeviceSpecificBufferMap_t;
	DeviceSpecificBufferMap_t m_DeviceSpecificBufferMap; /* 321488 48 */
	/* vulkan/renderdevicevulkan.h:962 */
	typedef struct CUtlMap<RenderDescriptorSetHandle_t__*, VulkanDeviceSpecificDescriptorSet_t, unsigned int, CDefLess<RenderDescriptorSetHandle_t__*> > DeviceSpecificDescriptorSetMap_t;
	DeviceSpecificDescriptorSetMap_t m_DeviceSpecificDescriptorSetMap; /* 321536 48 */
	/* vulkan/renderdevicevulkan.h:963 */
	typedef struct CUtlMap<RenderRayTracePipelineHandle_t__*, VulkanDeviceSpecificRayTracePipeline_t, unsigned int, CDefLess<RenderRayTracePipelineHandle_t__*> > DeviceSpecificRayTracePipelineMap_t;
	DeviceSpecificRayTracePipelineMap_t m_DeviceSpecificRayTracePipelineMap; /* 321584 48 */
	CThreadMutex m_DeviceSpecificTextureMutex; /* 321632 72 */
	VkQueueFamilyProperties m_gpuQueueProperties; /* 321704 24 */
	CInterlockedInt m_nRayTracePipelinesBeingBuilt __attribute__((__aligned__(4))); /* 321728 4 */
	CUtlVector<char, CUtlMemory<char, int> > m_deviceDiagnosticStringBuffer; /* 321736 32 */
	CInterlockedUInt m_nCurrentDeviceDiagnosticStringIndex __attribute__((__aligned__(4))); /* 321768 4 */
	CThreadMutex m_deviceDiagnosticStringMutex; /* 321776 72 */
	float m_flDepthClearValue; /* 321848 4 */
	bool m_bKHRDedicatedAllocationEnabled; /* 321852 1 */
	bool m_bKHRDeviceGroupEnabled; /* 321853 1 */
	bool m_bKHRBindMemory2Enabled; /* 321854 1 */
	bool m_bKHRImageFormatListEnabled; /* 321855 1 */
	bool m_bKHRMaintenance1Enabled; /* 321856 1 */
	bool m_bKHRMaintenance2Enabled; /* 321857 1 */
	bool m_bEXTSeparateStencilUsage; /* 321858 1 */
	bool m_bKHRSwapchainMutableFormatEnabled; /* 321859 1 */
	bool m_bNVDeviceDiagnosticCheckpointsEnabled; /* 321860 1 */
	bool m_bEXTMemoryBudgetEnabled; /* 321861 1 */
	bool m_bAMDMemoryOverallocationBehaviorEnabled; /* 321862 1 */
	bool m_bKHRDrawIndirectCountEnabled; /* 321863 1 */
	bool m_bGOOGLEDisplayTimingEnabled; /* 321864 1 */
	bool m_bEXTValidationCacheEnabled; /* 321865 1 */
	bool m_bEXTMemoryPriorityEnabled; /* 321866 1 */
	bool m_bKHRPipelineExecutableProperitesEnabled; /* 321867 1 */
	bool m_bKHRDynamicRenderingEnabled; /* 321868 1 */
	bool m_bEXTGraphicsPipelineLibraryEnabled; /* 321869 1 */
	bool m_bEXTExtendedDynamicStateEnabled; /* 321870 1 */
	bool m_bEXTExtendedDynamicState2Enabled; /* 321871 1 */
	bool m_bEXTExtendedDynamicState3Enabled; /* 321872 1 */
	bool m_bEXTPipelineCreationCacheControlEnabled; /* 321873 1 */
	bool m_bKHRPipelineLibraryEnabled; /* 321874 1 */
	bool m_bEXTPageableDeviceLocalMemoryEnabled; /* 321875 1 */
	bool m_bEXTDescriptorIndexingEnabled; /* 321876 1 */
	bool m_bEXTSubgroupSizeControlEnabled; /* 321877 1 */
	bool m_bKHRBufferDeviceAddressEnabled; /* 321878 1 */
	bool m_bKHRDeferredHostOperationsEnabled; /* 321879 1 */
	bool m_bEXTMultiDraw; /* 321880 1 */
	bool m_bKHRShaderFloat16Int8Enabled; /* 321881 1 */
	bool m_bKHRSeparateDepthStencilLayoutsEnabled; /* 321882 1 */
	bool m_bEXTLoadStoreOpNoneEnabled; /* 321883 1 */
	bool m_bKHRShaderClockEnabled; /* 321884 1 */
	bool m_bEXTFullScreenExclusiveEnabled; /* 321885 1 */
	bool m_bEXTDeviceFaultEnabled; /* 321886 1 */
	bool m_bEXTPipelineRobustnessEnabled; /* 321887 1 */
	bool m_bAsyncComputeEnabled; /* 321888 1 */
	bool m_bSupportsRayTracing; /* 321889 1 */
	bool m_bSanitizeForMetalValidation; /* 321890 1 */
	bool m_bAllowMutableSwapchainFormat; /* 321891 1 */
	bool m_bSupportsReadOnlyDepthStencil; /* 321892 1 */
	bool m_bUseExternalSubpassDependency; /* 321893 1 */
	bool m_bForceIntermediateSwapchainImage; /* 321894 1 */
	CInterlockedInt m_nLiveCmdBuffers __attribute__((__aligned__(4))); /* 321896 4 */
	bool m_bShuttingDown; /* 321900 1 */
	bool m_bForceFlushingGPU; /* 321901 1 */
	volatile bool m_bHibernating; /* 321902 1 */
	bool m_bLazilyAllocateRenderTargets; /* 321903 1 */
	bool m_bTrimCommandPools; /* 321904 1 */
	bool m_bTrimAllCommandPoolsPerFrame; /* 321905 1 */
	uint32 m_nUnThrottlePipelineCreationFrameCount; /* 321908 4 */
	/* vulkan/renderdevicevulkan.h:834 */
	typedef IndexType_t VertexShaderIndex_t;
	/* vulkan/renderdevicevulkan.h:835 */
	typedef IndexType_t BaseShaderIndex_t;
	/* vulkan/renderdevicevulkan.h:937 */
	typedef IndexType_t StaticDescriptorSetIndex_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* <a69c1b> vulkan/renderdevicevulkan.cpp:4418 */
	void DeleteGenericShader(class CRenderDeviceVulkan *, RenderShaderHandle_t, bool); /* linkage=_ZN19CRenderDeviceVulkan19DeleteGenericShaderEP22RenderShaderHandle_t__b */
	/* <a6a532> vulkan/renderdevicevulkan.cpp:4577 */
	void DeleteVertexShader(class CRenderDeviceVulkan *, RenderShaderHandle_t, bool); /* linkage=_ZN19CRenderDeviceVulkan18DeleteVertexShaderEP22RenderShaderHandle_t__b */
	bool IsShuttingDown(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan14IsShuttingDownEv */
	class CMemoryManagerVulkan * MemoryManager(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan13MemoryManagerEv */
	void QueueStaticDescriptorPoolDeletion(class CRenderDeviceVulkan *, class VulkanDescriptorSetPool_t *); /* linkage=_ZN19CRenderDeviceVulkan33QueueStaticDescriptorPoolDeletionEP25VulkanDescriptorSetPool_t */
	void UpdateStaticDescriptorPool(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan26UpdateStaticDescriptorPoolEv */
	/* <a67f74> vulkan/renderdevicevulkan.cpp:5622 */
	class CVulkanSamplerObject * CreateSamplerObject(class CRenderDeviceVulkan *, const class CSamplerStateDesc  *, const char  *); /* linkage=_ZN19CRenderDeviceVulkan19CreateSamplerObjectEPK17CSamplerStateDescPKc */
	bool EXTDescriptorIndexingEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan28EXTDescriptorIndexingEnabledEv */
	bool KHRMaintenance2Enabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan22KHRMaintenance2EnabledEv */
	class VulkanDescriptorSetPool_t * GetCurrentStaticDescriptorPool(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan30GetCurrentStaticDescriptorPoolEv */
	bool EXTLoadStoreOpNoneEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan25EXTLoadStoreOpNoneEnabledEv */
	bool UseExternalSubpassDependency(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan28UseExternalSubpassDependencyEv */
	const VkPhysicalDeviceLimits  & GetVulkanPhysicalDeviceLimits(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan29GetVulkanPhysicalDeviceLimitsEv */
	bool KHRBufferDeviceAddressEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan29KHRBufferDeviceAddressEnabledEv */
	VkCommandBuffer CreateCmdBuffer(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, enum VulkanCommandBufferType_t); /* linkage=_ZN19CRenderDeviceVulkan15CreateCmdBufferEP21PerThreadDataVulkan_t25VulkanCommandBufferType_t */
	void TrimCommandPool(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *); /* linkage=_ZN19CRenderDeviceVulkan15TrimCommandPoolEP21PerThreadDataVulkan_t */
	void ShutdownCommandBufferPools(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan26ShutdownCommandBufferPoolsEv */
	void DestroyCmdBuffer(class CRenderDeviceVulkan *, VkCommandBuffer *, class PerThreadDataVulkan_t *, enum VulkanCommandBufferType_t); /* linkage=_ZN19CRenderDeviceVulkan16DestroyCmdBufferEPP17VkCommandBuffer_TP21PerThreadDataVulkan_t25VulkanCommandBufferType_t */
	void RebakeAllStaticDescriptorSets(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan29RebakeAllStaticDescriptorSetsEv */
	bool EXTPageableDeviceLocalMemoryEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan35EXTPageableDeviceLocalMemoryEnabledEv */
	bool EXTMemoryPriorityEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan24EXTMemoryPriorityEnabledEv */
	bool KHRDedicatedAllocationEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan29KHRDedicatedAllocationEnabledEv */
	/* <a68b26> vulkan/renderdevicevulkan.cpp:5889 */
	class PerThreadDataVulkan_t * GetPerThreadData(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan16GetPerThreadDataEv */
	bool EXTExtendedDynamicState3Enabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan31EXTExtendedDynamicState3EnabledEv */
	bool EXTExtendedDynamicState2Enabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan31EXTExtendedDynamicState2EnabledEv */
	bool EXTExtendedDynamicStateEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan30EXTExtendedDynamicStateEnabledEv */
	bool KHRDynamicRenderingEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan26KHRDynamicRenderingEnabledEv */
	class CAsyncCompileHelperVulkan * AsyncCompileHelper(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan18AsyncCompileHelperEv */
	class CFramebufferMgrVulkan * FramebufferManager(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan18FramebufferManagerEv */
	VkDescriptorSet UpdateDescriptorSetPool(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, int32, class VulkanDescriptorSetPool_t * *, VkDescriptorSetLayout, uint32_t); /* linkage=_ZN19CRenderDeviceVulkan23UpdateDescriptorSetPoolEP21PerThreadDataVulkan_tiPP25VulkanDescriptorSetPool_tP23VkDescriptorSetLayout_Tj */
	class CVulkanSamplerObject * CreateImmutableSamplerObject(class CRenderDeviceVulkan *, const class CSamplerStateDesc  *, const char  *); /* linkage=_ZN19CRenderDeviceVulkan28CreateImmutableSamplerObjectEPK17CSamplerStateDescPKc */
	/* <a68bcb> vulkan/renderdevicevulkan.cpp:6623 */
	void UnlockStaticDescriptorSet(class CRenderDeviceVulkan *, RenderDescriptorSetHandle_t); /* linkage=_ZN19CRenderDeviceVulkan25UnlockStaticDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	class CDescriptorSetVulkan * LockStaticDescriptorSet(class CRenderDeviceVulkan *, RenderDescriptorSetHandle_t); /* linkage=_ZN19CRenderDeviceVulkan23LockStaticDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	bool EXTPipelineCreationCacheControlEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan38EXTPipelineCreationCacheControlEnabledEv */
	bool EXTGraphicsPipelineLibraryEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan33EXTGraphicsPipelineLibraryEnabledEv */
	bool KHRPipelineExecutablePropertiesEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan38KHRPipelineExecutablePropertiesEnabledEv */
	bool GetDefaultCBDescriptor(class CRenderDeviceVulkan *, VkDescriptorBufferInfo *); /* linkage=_ZN19CRenderDeviceVulkan22GetDefaultCBDescriptorEP22VkDescriptorBufferInfo */
	int GetUnthrottledPipelineCreationFrameCount(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan40GetUnthrottledPipelineCreationFrameCountEv */
	RenderDescriptorSetHandle_t GetDefaultDescriptorSet(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan23GetDefaultDescriptorSetEv */
	RenderBufferHandle_t AccelStructBuildScratchBuffer(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan29AccelStructBuildScratchBufferEv */
	void ReserveAccelStructBuildScratchSize(class CRenderDeviceVulkan *, int); /* linkage=_ZN19CRenderDeviceVulkan34ReserveAccelStructBuildScratchSizeEi */
	RenderBufferHandle_t CreateMemoryPooledGPUBuffer(class CRenderDeviceVulkan *, class IBufferMovedListener *, const class BufferDesc_t  &, enum VulkanMemoryPoolType_t, class CRenderContextVulkan *, void *); /* linkage=_ZN19CRenderDeviceVulkan27CreateMemoryPooledGPUBufferEP20IBufferMovedListenerRK12BufferDesc_t22VulkanMemoryPoolType_tP20CRenderContextVulkanPv */
	bool KHRDeferredHostOperationsEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan32KHRDeferredHostOperationsEnabledEv */
	class CVertexBufferVulkan * GetVertexBuffer(class CRenderDeviceVulkan *, VertexBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan15GetVertexBufferEP22VertexBufferHandle_t__ */
	void EndBuildingRayTracePipeline(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan27EndBuildingRayTracePipelineEv */
	void StartBuildingRayTracePipeline(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan29StartBuildingRayTracePipelineEv */
	RenderSemaphoreHandle_t AcquireSemaphore(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan16AcquireSemaphoreEv */
	void PerformQueuedTextureDeletions(class CRenderDeviceVulkan *, bool); /* linkage=_ZN19CRenderDeviceVulkan29PerformQueuedTextureDeletionsEb */
	void ServiceFallbackTextureQueue(class CRenderDeviceVulkan *, class CRenderContextVulkan *); /* linkage=_ZN19CRenderDeviceVulkan27ServiceFallbackTextureQueueEP20CRenderContextVulkan */
	RenderDescriptorSetHandle_t AcquireDynamicDescriptorSet(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, const class CDescriptorSetVulkan  *, VkDescriptorSet); /* linkage=_ZN19CRenderDeviceVulkan27AcquireDynamicDescriptorSetEP21PerThreadDataVulkan_tPK20CDescriptorSetVulkanP17VkDescriptorSet_T */
	void ReleasePooledDynamicIndexBuffers(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, DynamicIndexBufferHandle_t *, size_t); /* linkage=_ZN19CRenderDeviceVulkan32ReleasePooledDynamicIndexBuffersEP21PerThreadDataVulkan_tPP28DynamicIndexBufferHandle_t__m */
	DynamicIndexBufferHandle_t AcquirePooledDynamicIndexBuffer(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, const class BufferDesc_t  &); /* linkage=_ZN19CRenderDeviceVulkan31AcquirePooledDynamicIndexBufferEP21PerThreadDataVulkan_tRK12BufferDesc_t */
	bool AssignQueryObjectToPool(class CRenderDeviceVulkan *, RenderQueryHandle_t); /* linkage=_ZN19CRenderDeviceVulkan23AssignQueryObjectToPoolEP21RenderQueryHandle_t__ */
	void ReleasePooledDynamicVertexBuffers(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, DynamicVertexBufferHandle_t *, size_t); /* linkage=_ZN19CRenderDeviceVulkan33ReleasePooledDynamicVertexBuffersEP21PerThreadDataVulkan_tPP29DynamicVertexBufferHandle_t__m */
	void MarkResourceUsed(class CRenderDeviceVulkan *, RenderResourceHandle_t); /* linkage=_ZN19CRenderDeviceVulkan16MarkResourceUsedEP24RenderResourceHandle_t__ */
	DynamicVertexBufferHandle_t AcquirePooledDynamicVertexBuffer(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat); /* linkage=_ZN19CRenderDeviceVulkan32AcquirePooledDynamicVertexBufferEP21PerThreadDataVulkan_tRK12BufferDesc_t19RenderBufferFlags_t11ImageFormat */
	/* <a6b82b> vulkan/renderdevicevulkan.cpp:5932 */
	void ReleaseDescriptorSetPool(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, class VulkanDescriptorSetPool_t *); /* linkage=_ZN19CRenderDeviceVulkan24ReleaseDescriptorSetPoolEP21PerThreadDataVulkan_tP25VulkanDescriptorSetPool_t */
	const char  * AllocateDeviceCheckPointString(class CRenderDeviceVulkan *, const char  *); /* linkage=_ZN19CRenderDeviceVulkan30AllocateDeviceCheckPointStringEPKc */
	class VulkanDescriptorSetPool_t * AcquireDescriptorSetPool(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, int32); /* linkage=_ZN19CRenderDeviceVulkan24AcquireDescriptorSetPoolEP21PerThreadDataVulkan_ti */
	bool EXTMultiDrawEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan19EXTMultiDrawEnabledEv */
	bool KHRDrawIndirectCountEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan27KHRDrawIndirectCountEnabledEv */
	bool LazilyAllocateRenderTargets(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan27LazilyAllocateRenderTargetsEv */
	bool NVDeviceDiagnosticCheckpointsEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan36NVDeviceDiagnosticCheckpointsEnabledEv */
	class CIndexBufferVulkan * GetIndexBuffer(class CRenderDeviceVulkan *, IndexBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan14GetIndexBufferEP21IndexBufferHandle_t__ */
	class CInputLayoutVulkan * GetInputLayout(const class CRenderDeviceVulkan  *, RenderInputLayout_t); /* linkage=_ZNK19CRenderDeviceVulkan14GetInputLayoutEP21RenderInputLayout_t__ */
	RsDepthStencilStateHandle_t GetStandardDepthStencilState(class CRenderDeviceVulkan *, enum StandardDepthStencilStateId_t); /* linkage=_ZN19CRenderDeviceVulkan28GetStandardDepthStencilStateE29StandardDepthStencilStateId_t */
	RenderInputLayout_t GetStandardLayout(class CRenderDeviceVulkan *, enum StandardLayoutId_t); /* linkage=_ZN19CRenderDeviceVulkan17GetStandardLayoutE18StandardLayoutId_t */
	RenderShaderHandle_t GetStandardShader(class CRenderDeviceVulkan *, enum StandardShaderId_t); /* linkage=_ZN19CRenderDeviceVulkan17GetStandardShaderE18StandardShaderId_t */
	class CRenderPassManagerVulkan * RenderPassManager(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan17RenderPassManagerEv */
	class CRenderThreadVulkan * RenderThread(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan12RenderThreadEv */
	float GetDepthClearValue(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan18GetDepthClearValueEv */
	VertexBufferHandle_t GetDefaultVB(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan12GetDefaultVBEv */
	void CRenderDeviceVulkan(class CRenderDeviceVulkan *, const class CRenderDeviceVulkan  &); /* linkage=_ZN19CRenderDeviceVulkanC4ERKS_ */
	/* <a5e39f> vulkan/renderdevicevulkan.cpp:1705 */
	virtual enum RenderDeviceAPI_t GetRenderDeviceAPI(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan18GetRenderDeviceAPIEv */
	virtual SwapChainHandle_t CreateSwapChain(class CRenderDeviceVulkan *, PlatWindow_t, OsSpecificWindowHandle_t, const class RenderDeviceInfo_t  &, const char  *); /* linkage=_ZN19CRenderDeviceVulkan15CreateSwapChainEP14PlatWindow_t__P26OsSpecificWindowHandle_t__RK18RenderDeviceInfo_tPKc */
	virtual bool UpdateSwapChain(class CRenderDeviceVulkan *, SwapChainHandle_t, const class RenderDeviceInfo_t  &); /* linkage=_ZN19CRenderDeviceVulkan15UpdateSwapChainEP19SwapChainHandle_t__RK18RenderDeviceInfo_t */
	/* <a63464> vulkan/renderdevicevulkan.cpp:3448 */
	virtual const class RenderDeviceInfo_t  & GetSwapChainInfo(const class CRenderDeviceVulkan  *, SwapChainHandle_t); /* linkage=_ZNK19CRenderDeviceVulkan16GetSwapChainInfoEP19SwapChainHandle_t__ */
	virtual bool CanRenderToSwapChain(const class CRenderDeviceVulkan  *, SwapChainHandle_t); /* linkage=_ZNK19CRenderDeviceVulkan20CanRenderToSwapChainEP19SwapChainHandle_t__ */
	virtual enum ImageFormat GetSwapChainDepthStencilFormat(const class CRenderDeviceVulkan  *, SwapChainHandle_t); /* linkage=_ZNK19CRenderDeviceVulkan30GetSwapChainDepthStencilFormatEP19SwapChainHandle_t__ */
	virtual bool IsUsingGraphics(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan15IsUsingGraphicsEv */
	/* <a5e9de> vulkan/renderdevicevulkan.cpp:3851 */
	virtual const char  * GetShaderVersionString(const class CRenderDeviceVulkan  *, enum RenderShaderType_t); /* linkage=_ZNK19CRenderDeviceVulkan22GetShaderVersionStringE18RenderShaderType_t */
	virtual void BeginRendering(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan14BeginRenderingEv */
	/* <a6f0b6> vulkan/renderdevicevulkan.cpp:3937 */
	virtual void BeginSubmittingDisplayLists(class CRenderDeviceVulkan *, SwapChainHandle_t); /* linkage=_ZN19CRenderDeviceVulkan27BeginSubmittingDisplayListsEP19SwapChainHandle_t__ */
	virtual bool Present(class CRenderDeviceVulkan *, SwapChainHandle_t); /* linkage=_ZN19CRenderDeviceVulkan7PresentEP19SwapChainHandle_t__ */
	/* <a71285> vulkan/renderdevicevulkan.cpp:4356 */
	virtual class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > CompileShader(class CRenderDeviceVulkan *, const char  *, uint32, const char  *); /* linkage=_ZN19CRenderDeviceVulkan13CompileShaderEPKcjS1_ */
	virtual VertexBufferHandle_t CreateVertexBuffer(class CRenderDeviceVulkan *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t); /* linkage=_ZN19CRenderDeviceVulkan18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t */
	virtual VertexBufferHandle_t CreateVertexBuffer(class CRenderDeviceVulkan *, enum RenderBufferType_t, const class BufferDesc_t  &, RenderInputLayout_t, enum RenderBufferFlags_t); /* linkage=_ZN19CRenderDeviceVulkan18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_tP21RenderInputLayout_t__19RenderBufferFlags_t */
	virtual VertexBufferHandle_t CreateVertexBuffer(class CRenderDeviceVulkan *, enum RenderBufferType_t, const class BufferDesc_t  &, int, const class RenderInputLayoutField_t  *, enum RenderBufferFlags_t); /* linkage=_ZN19CRenderDeviceVulkan18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_tiPK24RenderInputLayoutField_t19RenderBufferFlags_t */
	/* <a636ba> vulkan/renderdevicevulkan.cpp:4689 */
	virtual void DestroyVertexBuffer(class CRenderDeviceVulkan *, VertexBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan19DestroyVertexBufferEP22VertexBufferHandle_t__ */
	virtual IndexBufferHandle_t CreateIndexBuffer(class CRenderDeviceVulkan *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t); /* linkage=_ZN19CRenderDeviceVulkan17CreateIndexBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t */
	/* <a63e85> vulkan/renderdevicevulkan.cpp:4884 */
	virtual void DestroyIndexBuffer(class CRenderDeviceVulkan *, IndexBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan18DestroyIndexBufferEP21IndexBufferHandle_t__ */
	/* <a5f5ef> vulkan/renderdevicevulkan.cpp:4837 */
	virtual void GetVertexBufferDesc(class CRenderDeviceVulkan *, VertexBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN19CRenderDeviceVulkan19GetVertexBufferDescEP22VertexBufferHandle_t__P12BufferDesc_t */
	/* <a5eccd> vulkan/renderdevicevulkan.cpp:4854 */
	virtual void GetIndexBufferDesc(class CRenderDeviceVulkan *, IndexBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN19CRenderDeviceVulkan18GetIndexBufferDescEP21IndexBufferHandle_t__P12BufferDesc_t */
	virtual void GetGPUBufferDesc(class CRenderDeviceVulkan *, RenderBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN19CRenderDeviceVulkan16GetGPUBufferDescEP22RenderBufferHandle_t__P12BufferDesc_t */
	virtual RenderBufferHandle_t CreateGPUBuffer(class CRenderDeviceVulkan *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t, const void  *); /* linkage=_ZN19CRenderDeviceVulkan15CreateGPUBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_tPKv */
	virtual RenderBufferHandle_t CreateGPUBufferFormatted(class CRenderDeviceVulkan *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat, const void  *); /* linkage=_ZN19CRenderDeviceVulkan24CreateGPUBufferFormattedE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t11ImageFormatPKv */
	virtual uint64 GetGPUBufferDeviceAddress(const class CRenderDeviceVulkan  *, RenderBufferHandle_t); /* linkage=_ZNK19CRenderDeviceVulkan25GetGPUBufferDeviceAddressEP22RenderBufferHandle_t__ */
	/* <a64304> vulkan/renderdevicevulkan.cpp:4935 */
	virtual void DestroyGPUBuffer(class CRenderDeviceVulkan *, RenderBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan16DestroyGPUBufferEP22RenderBufferHandle_t__ */
	/* <a6bc84> vulkan/renderdevicevulkan.cpp:4958 */
	virtual RenderInputLayout_t CreateInputLayout(class CRenderDeviceVulkan *, const char  *, int, const class RenderInputLayoutField_t  *); /* linkage=_ZN19CRenderDeviceVulkan17CreateInputLayoutEPKciPK24RenderInputLayoutField_t */
	virtual void AddInputLayoutReference(class CRenderDeviceVulkan *, RenderInputLayout_t); /* linkage=_ZN19CRenderDeviceVulkan23AddInputLayoutReferenceEP21RenderInputLayout_t__ */
	/* <a5e461> vulkan/renderdevicevulkan.cpp:4971 */
	virtual void DestroyInputLayout(class CRenderDeviceVulkan *, RenderInputLayout_t); /* linkage=_ZN19CRenderDeviceVulkan18DestroyInputLayoutEP21RenderInputLayout_t__ */
	virtual void ConcatentateInputLayouts(class CRenderDeviceVulkan *, int, RenderInputLayout_t *, int, const RenderInputLayout_t  *); /* linkage=_ZN19CRenderDeviceVulkan24ConcatentateInputLayoutsEiPP21RenderInputLayout_t__iPKS1_ */
	virtual void GetInputLayoutFields(class CRenderDeviceVulkan *, RenderInputLayout_t, const class RenderInputLayoutField_t  * *, int &); /* linkage=_ZN19CRenderDeviceVulkan20GetInputLayoutFieldsEP21RenderInputLayout_t__PPK24RenderInputLayoutField_tRi */
	/* <a5f471> vulkan/renderdevicevulkan.cpp:4320 */
	virtual void SetHardwareGammaRamp(class CRenderDeviceVulkan *, SwapChainHandle_t, float, float, float, float, bool); /* linkage=_ZN19CRenderDeviceVulkan20SetHardwareGammaRampEP19SwapChainHandle_t__ffffb */
	/* <a6bbd7> vulkan/renderdevicevulkan.cpp:6405 */
	virtual RenderDescriptorSetHandle_t CreateDescriptorSet(class CRenderDeviceVulkan *, int32, const class RenderDescriptorDesc_t  *, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN19CRenderDeviceVulkan19CreateDescriptorSetEiPK22RenderDescriptorDesc_tiPK25RenderDescriptorBinding_tb */
	virtual void UpdateDescriptorSet(class CRenderDeviceVulkan *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN19CRenderDeviceVulkan19UpdateDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_t */
	virtual void DestroyDescriptorSet(class CRenderDeviceVulkan *, RenderDescriptorSetHandle_t); /* linkage=_ZN19CRenderDeviceVulkan20DestroyDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	/* <a62dad> vulkan/renderdevicevulkan.cpp:8687 */
	virtual bool AddDescriptorsToGlobalPerFrameDescriptorSet(class CRenderDeviceVulkan *, int32, const class RenderDescriptorDesc_t  *); /* linkage=_ZN19CRenderDeviceVulkan43AddDescriptorsToGlobalPerFrameDescriptorSetEiPK22RenderDescriptorDesc_t */
	virtual void UpdateGlobalPerFrameDescriptorBindings(class CRenderDeviceVulkan *, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN19CRenderDeviceVulkan38UpdateGlobalPerFrameDescriptorBindingsEiPK25RenderDescriptorBinding_t */
	/* <a5eb7b> vulkan/renderdevicevulkan.cpp:8472 */
	virtual void SetFramePacingFPS(class CRenderDeviceVulkan *, double); /* linkage=_ZN19CRenderDeviceVulkan17SetFramePacingFPSEd */
	virtual void UnThrottlePipelineCreationForNFrames(class CRenderDeviceVulkan *, uint32); /* linkage=_ZN19CRenderDeviceVulkan36UnThrottlePipelineCreationForNFramesEj */
	virtual void RegisterDescriptorSetLayout(class CRenderDeviceVulkan *, class CUtlStringToken, RenderDescriptorSetHandle_t); /* linkage=_ZN19CRenderDeviceVulkan27RegisterDescriptorSetLayoutE15CUtlStringTokenP29RenderDescriptorSetHandle_t__ */
	virtual RenderDescriptorSetHandle_t GetRegisteredDescriptorSetLayout(const class CRenderDeviceVulkan  *, class CUtlStringToken); /* linkage=_ZNK19CRenderDeviceVulkan32GetRegisteredDescriptorSetLayoutE15CUtlStringToken */
	virtual RenderBLASHandle_t CreateBLAS(class CRenderDeviceVulkan *, const class BLASCreateDesc_t  &, uint32 *); /* linkage=_ZN19CRenderDeviceVulkan10CreateBLASERK16BLASCreateDesc_tPj */
	virtual bool IsCompactible(class CRenderDeviceVulkan *, RenderBLASHandle_t); /* linkage=_ZN19CRenderDeviceVulkan13IsCompactibleEP20RenderBLASHandle_t__ */
	/* <a5e5cf> vulkan/renderdevicevulkan.cpp:6849 */
	virtual enum IsReadyToCompactResult_t IsReadyToCompact(class CRenderDeviceVulkan *, RenderBLASHandle_t); /* linkage=_ZN19CRenderDeviceVulkan16IsReadyToCompactEP20RenderBLASHandle_t__ */
	virtual RenderBLASHandle_t CreateBLASForCompact(class CRenderDeviceVulkan *, RenderBLASHandle_t); /* linkage=_ZN19CRenderDeviceVulkan20CreateBLASForCompactEP20RenderBLASHandle_t__ */
	/* <a64acf> vulkan/renderdevicevulkan.cpp:6891 */
	virtual void DestroyBLAS(class CRenderDeviceVulkan *, RenderBLASHandle_t); /* linkage=_ZN19CRenderDeviceVulkan11DestroyBLASEP20RenderBLASHandle_t__ */
	virtual RenderTLASHandle_t CreateTLAS(class CRenderDeviceVulkan *, const class TLASCreateDesc_t  &, class TLASInstance_t *, int); /* linkage=_ZN19CRenderDeviceVulkan10CreateTLASERK16TLASCreateDesc_tP14TLASInstance_ti */
	/* <a64f65> vulkan/renderdevicevulkan.cpp:6930 */
	virtual void DestroyTLAS(class CRenderDeviceVulkan *, RenderTLASHandle_t); /* linkage=_ZN19CRenderDeviceVulkan11DestroyTLASEP20RenderTLASHandle_t__ */
	virtual RenderRayTracePipelineHandle_t CreateRayTracePipeline(class CRenderDeviceVulkan *, const class RayTracePipelineStateCreateDesc_t  &); /* linkage=_ZN19CRenderDeviceVulkan22CreateRayTracePipelineERK33RayTracePipelineStateCreateDesc_t */
	/* <a65469> vulkan/renderdevicevulkan.cpp:6962 */
	virtual void DestroyRayTracePipeline(class CRenderDeviceVulkan *, RenderRayTracePipelineHandle_t); /* linkage=_ZN19CRenderDeviceVulkan23DestroyRayTracePipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual bool IsCreatingRayTracePipelines(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan27IsCreatingRayTracePipelinesEv */
	virtual class IRaytraceShaderBindingTable * CreateRayTraceShaderBindingTable(class CRenderDeviceVulkan *, const class ShaderBindingTableCreateDesc_t  &); /* linkage=_ZN19CRenderDeviceVulkan32CreateRayTraceShaderBindingTableERK30ShaderBindingTableCreateDesc_t */
	/* <a658e8> vulkan/renderdevicevulkan.cpp:6989 */
	virtual void DestroyRayTraceShaderBindingTable(class CRenderDeviceVulkan *, class IRaytraceShaderBindingTable *); /* linkage=_ZN19CRenderDeviceVulkan33DestroyRayTraceShaderBindingTableEP27IRaytraceShaderBindingTable */
	virtual bool IsRayTracingSupported(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan21IsRayTracingSupportedEv */
	virtual SamplerStateHandle_t FindOrCreateSamplerState(class CRenderDeviceVulkan *, const class CSamplerStateDesc  &, const char  *); /* linkage=_ZN19CRenderDeviceVulkan24FindOrCreateSamplerStateERK17CSamplerStateDescPKc */
	virtual uint GetSamplerIndex(const class CRenderDeviceVulkan  *, SamplerStateHandle_t); /* linkage=_ZNK19CRenderDeviceVulkan15GetSamplerIndexEP22SamplerStateHandle_t__ */
	class CVulkanSamplerObject * GetSamplerObject(const class CRenderDeviceVulkan  *, SamplerStateHandle_t); /* linkage=_ZNK19CRenderDeviceVulkan16GetSamplerObjectEP22SamplerStateHandle_t__ */
	/* <a67e3a> vulkan/renderdevicevulkan.cpp:1744 */
	void OnAnisotropyChanged(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan19OnAnisotropyChangedEv */
	virtual RenderDescriptorSetHandle_t GetGlobalLateBoundBindlessDescriptorSet(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan39GetGlobalLateBoundBindlessDescriptorSetEv */
	RenderDescriptorSetHandle_t CreateDescriptorSetVulkan(class CRenderDeviceVulkan *, int32, const class RenderDescriptorDesc_t  *, int32, const class RenderDescriptorBinding_t  *, bool, class CDescriptorSetVulkan * *); /* linkage=_ZN19CRenderDeviceVulkan25CreateDescriptorSetVulkanEiPK22RenderDescriptorDesc_tiPK25RenderDescriptorBinding_tbPP20CDescriptorSetVulkan */
	class CColorFormatVulkan * ColorFormat(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan11ColorFormatEv */
	class CRenderResourceMgr * RenderResourceMgr(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan17RenderResourceMgrEv */
	class CPipelineManagerVulkan * PipelineManager(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan15PipelineManagerEv */
	class CShaderTableVulkan * ShaderTable(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan11ShaderTableEv */
	virtual void SpewDriverInfo(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan14SpewDriverInfoEv */
	virtual int GetCurrentAdapter(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan17GetCurrentAdapterEv */
	virtual void EnableRenderContexts(class CRenderDeviceVulkan *, bool); /* linkage=_ZN19CRenderDeviceVulkan20EnableRenderContextsEb */
	virtual class IRenderContext * VaCreateRenderContext(class CRenderDeviceVulkan *, uint, class RenderContextCreationInfo_t *, const char  *, va_list *); /* linkage=_ZN19CRenderDeviceVulkan21VaCreateRenderContextEjP27RenderContextCreationInfo_tPKcPA1_13__va_list_tag */
	virtual void ForceDeviceLost(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan15ForceDeviceLostEv */
	virtual bool ReadTexturePixels(class CRenderDeviceVulkan *, HRenderTexture, class Rect_t *, int, int, class Rect_t *, void *, enum ImageFormat, int); /* linkage=_ZN19CRenderDeviceVulkan17ReadTexturePixelsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP6Rect_tiiS4_Pv11ImageFormati */
	void DiscardCommandBuffers(class CRenderDeviceVulkan *, class CCommandStream *); /* linkage=_ZN19CRenderDeviceVulkan21DiscardCommandBuffersEP14CCommandStream */
	virtual void DiscardDisplayList(class CRenderDeviceVulkan *, class CDisplayList *); /* linkage=_ZN19CRenderDeviceVulkan18DiscardDisplayListEP12CDisplayList */
	virtual enum ImageFormat GetNearestSupportedColorFormat(class CRenderDeviceVulkan *, enum ImageFormat, bool, bool, bool); /* linkage=_ZN19CRenderDeviceVulkan30GetNearestSupportedColorFormatE11ImageFormatbbb */
	virtual void * GetDeviceSpecificTexture(class CRenderDeviceVulkan *, HRenderTexture, enum RenderTextureDimension_t); /* linkage=_ZN19CRenderDeviceVulkan24GetDeviceSpecificTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t */
	virtual void * GetDeviceSpecificImageView(class CRenderDeviceVulkan *, HRenderTexture, enum RenderTextureDimension_t, enum RenderColorSpace_t); /* linkage=_ZN19CRenderDeviceVulkan26GetDeviceSpecificImageViewE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderColorSpace_t */
	virtual void * GetDeviceSpecificBuffer(class CRenderDeviceVulkan *, RenderBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan23GetDeviceSpecificBufferEP22RenderBufferHandle_t__ */
	virtual void * GetDeviceSpecificBuffer(class CRenderDeviceVulkan *, IndexBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan23GetDeviceSpecificBufferEP21IndexBufferHandle_t__ */
	virtual void * GetDeviceSpecificBuffer(class CRenderDeviceVulkan *, VertexBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan23GetDeviceSpecificBufferEP22VertexBufferHandle_t__ */
	virtual void * GetDeviceSpecificDescriptorSet(class CRenderDeviceVulkan *, RenderDescriptorSetHandle_t); /* linkage=_ZN19CRenderDeviceVulkan30GetDeviceSpecificDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	virtual void * GetDeviceSpecificRayTracePipeline(class CRenderDeviceVulkan *, RenderRayTracePipelineHandle_t); /* linkage=_ZN19CRenderDeviceVulkan33GetDeviceSpecificRayTracePipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual void OnBeginningOfClientShutdown(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan27OnBeginningOfClientShutdownEv */
	/* <a5e4ff> vulkan/renderdevicevulkan.cpp:6682 */
	virtual void TextureBecameFullyResident(class CRenderDeviceVulkan *, HRenderTexture); /* linkage=_ZN19CRenderDeviceVulkan26TextureBecameFullyResidentE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	/* <a5fbaf> vulkan/renderdevicevulkan.cpp:6694 */
	virtual void TextureBecameEvicted(class CRenderDeviceVulkan *, HRenderTexture); /* linkage=_ZN19CRenderDeviceVulkan20TextureBecameEvictedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool InitDevice(class CRenderDeviceVulkan *, int, int, int); /* linkage=_ZN19CRenderDeviceVulkan10InitDeviceEiii */
	virtual void ShutdownDevice(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan14ShutdownDeviceEv */
	virtual bool IsDeactivated(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan13IsDeactivatedEv */
	virtual bool SupportsMSAAMode(const class CRenderDeviceVulkan  *, enum ImageFormat, bool, enum RenderMultisampleType_t); /* linkage=_ZNK19CRenderDeviceVulkan16SupportsMSAAModeE11ImageFormatb23RenderMultisampleType_t */
	virtual bool SupportsCSAAMode(const class CRenderDeviceVulkan  *, enum ImageFormat, bool, enum RenderMultisampleType_t, int); /* linkage=_ZNK19CRenderDeviceVulkan16SupportsCSAAModeE11ImageFormatb23RenderMultisampleType_ti */
	/* <a70c14> vulkan/renderdevicevulkan.cpp:3688 */
	virtual void PrintGPUMemoryStats(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan19PrintGPUMemoryStatsEv */
	virtual void PerFrameCleanup(class CRenderDeviceVulkan *, SwapChainHandle_t); /* linkage=_ZN19CRenderDeviceVulkan15PerFrameCleanupEP19SwapChainHandle_t__ */
	virtual void UpdateStats(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan11UpdateStatsEv */
	virtual RenderShaderHandle_t CreateVertexShader(class CRenderDeviceVulkan *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN19CRenderDeviceVulkan18CreateVertexShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	/* <a6acca> vulkan/renderdevicevulkan.cpp:4557 */
	virtual void DestroyVertexShader(class CRenderDeviceVulkan *, RenderShaderHandle_t); /* linkage=_ZN19CRenderDeviceVulkan19DestroyVertexShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreateGeometryShader(class CRenderDeviceVulkan *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN19CRenderDeviceVulkan20CreateGeometryShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyGeometryShader(class CRenderDeviceVulkan *, RenderShaderHandle_t); /* linkage=_ZN19CRenderDeviceVulkan21DestroyGeometryShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreateComputeShader(class CRenderDeviceVulkan *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN19CRenderDeviceVulkan19CreateComputeShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyComputeShader(class CRenderDeviceVulkan *, RenderShaderHandle_t); /* linkage=_ZN19CRenderDeviceVulkan20DestroyComputeShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreatePixelShader(class CRenderDeviceVulkan *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN19CRenderDeviceVulkan17CreatePixelShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyPixelShader(class CRenderDeviceVulkan *, RenderShaderHandle_t); /* linkage=_ZN19CRenderDeviceVulkan18DestroyPixelShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreateRayTraceShader(class CRenderDeviceVulkan *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN19CRenderDeviceVulkan20CreateRayTraceShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyRayTraceShader(class CRenderDeviceVulkan *, RenderShaderHandle_t); /* linkage=_ZN19CRenderDeviceVulkan21DestroyRayTraceShaderEP22RenderShaderHandle_t__ */
	virtual void OnPresentCompleted(class CRenderDeviceVulkan *, SwapChainHandle_t, int, class CDeviceFence *); /* linkage=_ZN19CRenderDeviceVulkan18OnPresentCompletedEP19SwapChainHandle_t__iP12CDeviceFence */
	virtual ConstantBufferHandle_t CreateConstantBufferInternal(class CRenderDeviceVulkan *, enum ConstantBufferType_t, uint32, uint32, uint32, uint, const char  *); /* linkage=_ZN19CRenderDeviceVulkan28CreateConstantBufferInternalE20ConstantBufferType_tjjjjPKc */
	virtual void FreeConstantBuffer(class CRenderDeviceVulkan *, class ConstantBuffer_t *); /* linkage=_ZN19CRenderDeviceVulkan18FreeConstantBufferEP16ConstantBuffer_t */
	/* <a5e3ca> vulkan/renderdevicevulkan.cpp:5193 */
	virtual uint32 GetRequiredViewConstantBufferAlignment(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan38GetRequiredViewConstantBufferAlignmentEv */
	virtual GraphicsAPISpecificTextureHandle_t GetGraphicsAPISpecificTextureHandle(class CRenderDeviceVulkan *, HRenderTexture); /* linkage=_ZN19CRenderDeviceVulkan35GetGraphicsAPISpecificTextureHandleE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	/* <a61500> vulkan/renderdevicevulkan.cpp:8574 */
	virtual void GetShaderStats(class CRenderDeviceVulkan *, class RenderShaderStats_t *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN19CRenderDeviceVulkan14GetShaderStatsEP19RenderShaderStats_t18RenderShaderType_tP22RenderShaderHandle_t__ */
	/* <a5ea97> vulkan/renderdevicevulkan.cpp:8631 */
	virtual void TriggerValidationError(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan22TriggerValidationErrorEv */
	virtual uint64 GetGPUMemoryFragmentationBytes(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan30GetGPUMemoryFragmentationBytesEv */
	virtual RenderQueryHandle_t CreateQueryObject(class CRenderDeviceVulkan *, enum RenderQueryType_t); /* linkage=_ZN19CRenderDeviceVulkan17CreateQueryObjectE17RenderQueryType_t */
	virtual enum RenderQueryState_t GetQueryData(class CRenderDeviceVulkan *, RenderQueryHandle_t, uint64 *); /* linkage=_ZN19CRenderDeviceVulkan12GetQueryDataEP21RenderQueryHandle_t__Py */
	/* <a66181> vulkan/renderdevicevulkan.cpp:4113 */
	virtual void DeleteQueryObject(class CRenderDeviceVulkan *, RenderQueryHandle_t); /* linkage=_ZN19CRenderDeviceVulkan17DeleteQueryObjectEP21RenderQueryHandle_t__ */
	/* <a715dd> vulkan/renderdevicevulkan.cpp:5643 */
	virtual void * GetDeviceSpecificInfo(class CRenderDeviceVulkan *, enum DeviceSpecificInfo_t); /* linkage=_ZN19CRenderDeviceVulkan21GetDeviceSpecificInfoE20DeviceSpecificInfo_t */
	virtual int QueryFeature(class CRenderDeviceVulkan *, class CUtlStringToken); /* linkage=_ZN19CRenderDeviceVulkan12QueryFeatureE15CUtlStringToken */
	virtual bool GetPipelineFrameStats(class CRenderDeviceVulkan *, class CRenderPipelineFrameStats &); /* linkage=_ZN19CRenderDeviceVulkan21GetPipelineFrameStatsER25CRenderPipelineFrameStats */
	/* <a5e723> vulkan/renderdevicevulkan.cpp:3979 */
	virtual void ReleasePipelineFrameStats(class CRenderDeviceVulkan *, class CRenderPipelineFrameStats &); /* linkage=_ZN19CRenderDeviceVulkan25ReleasePipelineFrameStatsER25CRenderPipelineFrameStats */
	virtual void AppendStatsSummaryString(class CRenderDeviceVulkan *, class CBufferString *); /* linkage=_ZN19CRenderDeviceVulkan24AppendStatsSummaryStringEP13CBufferString */
	virtual void OnRenderDeviceFlagsEnabled(class CRenderDeviceVulkan *, enum RenderDeviceFlag_t); /* linkage=_ZN19CRenderDeviceVulkan26OnRenderDeviceFlagsEnabledE18RenderDeviceFlag_t */
	virtual void OnRenderDeviceFlagsDisabled(class CRenderDeviceVulkan *, enum RenderDeviceFlag_t); /* linkage=_ZN19CRenderDeviceVulkan27OnRenderDeviceFlagsDisabledE18RenderDeviceFlag_t */
	virtual bool IsProfilerAttached(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan18IsProfilerAttachedEv */
	virtual void DefragmentGPUMemory(class CRenderDeviceVulkan *, enum RenderDefragFlags_t, bool); /* linkage=_ZN19CRenderDeviceVulkan19DefragmentGPUMemoryE19RenderDefragFlags_tb */
	virtual void WaitIfTooFarAheadOfGPU(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan22WaitIfTooFarAheadOfGPUEv */
	/* <a5e6c8> vulkan/renderdevicevulkan.cpp:8490 */
	virtual void OnEnterHibernationState(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan23OnEnterHibernationStateEv */
	/* <a5e3f5> vulkan/renderdevicevulkan.cpp:8506 */
	virtual void OnExitHibernationState(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan22OnExitHibernationStateEv */
	virtual void OnLowMemoryNotification(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan23OnLowMemoryNotificationEv */
	void CRenderDeviceVulkan(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkanC4Ev */
	virtual void ~CRenderDeviceVulkan(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkanD4Ev */
	void PreShutdown(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan11PreShutdownEv */
	class CVertexBufferVulkan * GetVertexBuffer(class CRenderDeviceVulkan *, DynamicVertexBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan15GetVertexBufferEP29DynamicVertexBufferHandle_t__ */
	class CIndexBufferVulkan * GetIndexBuffer(class CRenderDeviceVulkan *, DynamicIndexBufferHandle_t); /* linkage=_ZN19CRenderDeviceVulkan14GetIndexBufferEP28DynamicIndexBufferHandle_t__ */
	void ReleaseBufferView(class CRenderDeviceVulkan *, VkBufferView); /* linkage=_ZN19CRenderDeviceVulkan17ReleaseBufferViewEP14VkBufferView_T */
	void ReleaseTextureResourcesVulkan(class CRenderDeviceVulkan *, class CVulkanImage *, class VulkanImageViews_t *, const class TextureSpecification_t  *); /* linkage=_ZN19CRenderDeviceVulkan29ReleaseTextureResourcesVulkanEP12CVulkanImageP18VulkanImageViews_tPK22TextureSpecification_t */
	bool GetInitializedTextureManager(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan28GetInitializedTextureManagerEv */
	void SetInitializedTextureManager(class CRenderDeviceVulkan *, bool); /* linkage=_ZN19CRenderDeviceVulkan28SetInitializedTextureManagerEb */
	void CreateDefaultBuffers(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan20CreateDefaultBuffersEv */
	void ShutdownPerThreadDataPortion(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, enum PerThreadShutdownPortion_t); /* linkage=_ZN19CRenderDeviceVulkan28ShutdownPerThreadDataPortionEP21PerThreadDataVulkan_tNS_26PerThreadShutdownPortion_tE */
	/* <a69b50> vulkan/renderdevicevulkan.cpp:5857 */
	void ShutdownPerThreadData(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, enum PerThreadShutdownPortion_t); /* linkage=_ZN19CRenderDeviceVulkan21ShutdownPerThreadDataEP21PerThreadDataVulkan_tNS_26PerThreadShutdownPortion_tE */
	void ShutdownAllPerThreadData(class CRenderDeviceVulkan *, enum PerThreadShutdownPortion_t); /* linkage=_ZN19CRenderDeviceVulkan24ShutdownAllPerThreadDataENS_26PerThreadShutdownPortion_tE */
	/* <a6b981> vulkan/renderdevicevulkan.cpp:6710 */
	void QueueStaticDescriptorSetDeletion(class CRenderDeviceVulkan *, class CDescriptorSetVulkan *); /* linkage=_ZN19CRenderDeviceVulkan32QueueStaticDescriptorSetDeletionEP20CDescriptorSetVulkan */
	virtual class RenderPassHandle_t CreateRenderPass(class CRenderDeviceVulkan *, const class CRenderPassDesc  *); /* linkage=_ZN19CRenderDeviceVulkan16CreateRenderPassEPK15CRenderPassDesc */
	virtual void DestroyRenderPass(class CRenderDeviceVulkan *, class RenderPassHandle_t); /* linkage=_ZN19CRenderDeviceVulkan17DestroyRenderPassE18RenderPassHandle_t */
	virtual int GetClearFlagsSupportedInRenderPass(class CRenderDeviceVulkan *, int, const class RenderTargetDesc_t  &, const class RenderClearInfo_t  &); /* linkage=_ZN19CRenderDeviceVulkan34GetClearFlagsSupportedInRenderPassEiRK18RenderTargetDesc_tRK17RenderClearInfo_t */
	void TrimAllCommandPools(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan19TrimAllCommandPoolsEv */
	const VkPhysicalDeviceFeatures  & GetVulkanPhysicalDeviceFeatures(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan31GetVulkanPhysicalDeviceFeaturesEv */
	bool KHRBindMemory2Enabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan21KHRBindMemory2EnabledEv */
	bool KHRImageFormatListEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan25KHRImageFormatListEnabledEv */
	bool KHRMaintenance1Enabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan22KHRMaintenance1EnabledEv */
	bool EXTSeparateStencilUsageEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan30EXTSeparateStencilUsageEnabledEv */
	bool EXTValidationCacheEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan25EXTValidationCacheEnabledEv */
	bool KHRSwapchainMutableFormatEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan32KHRSwapchainMutableFormatEnabledEv */
	bool EXTMemoryBudgetEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan22EXTMemoryBudgetEnabledEv */
	bool GOOGLEDisplayTimingEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan26GOOGLEDisplayTimingEnabledEv */
	bool AllowMutableSwapchainFormat(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan27AllowMutableSwapchainFormatEv */
	bool AsyncComputeEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan19AsyncComputeEnabledEv */
	bool SanitizeForMetalValidation(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan26SanitizeForMetalValidationEv */
	bool SupportsReadOnlyDepthStencil(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan28SupportsReadOnlyDepthStencilEv */
	/* <a69780> vulkan/renderdevicevulkan.cpp:8533 */
	bool IsHibernating(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan13IsHibernatingEv */
	bool EXTSubgroupSizeControlEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan29EXTSubgroupSizeControlEnabledEv */
	bool KHRShaderFloat16Int8Enabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan27KHRShaderFloat16Int8EnabledEv */
	bool KHRSeparateDepthStencilLayoutsEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan37KHRSeparateDepthStencilLayoutsEnabledEv */
	bool KHRShaderClockEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan21KHRShaderClockEnabledEv */
	bool EXTFullScreenExclusiveEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan29EXTFullScreenExclusiveEnabledEv */
	bool EXTDeviceFaultEnabled(const class CRenderDeviceVulkan  *); /* linkage=_ZNK19CRenderDeviceVulkan21EXTDeviceFaultEnabledEv */
	class CAftermathVulkan & Aftermath(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan9AftermathEv */
	void ReleaseSemaphore(class CRenderDeviceVulkan *, RenderSemaphoreHandle_t); /* linkage=_ZN19CRenderDeviceVulkan16ReleaseSemaphoreEP25RenderSemaphoreHandle_t__ */
	void RecycleSemaphores(class CRenderDeviceVulkan *, bool); /* linkage=_ZN19CRenderDeviceVulkan17RecycleSemaphoresEb */
	void DestroyAllSemaphores(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan20DestroyAllSemaphoresEv */
	const VkDebugMarkerMarkerInfoEXT  DebugMarkerDefaultColor(const char  *); /* linkage=_ZN19CRenderDeviceVulkan23DebugMarkerDefaultColorEPKc */
	virtual void * CreateRasterizerStateFromDesc(class CRenderDeviceVulkan *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN19CRenderDeviceVulkan29CreateRasterizerStateFromDescEPK23RsRasterizerStateDesc_t */
	virtual void * CreateDepthStencilStateFromDesc(class CRenderDeviceVulkan *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN19CRenderDeviceVulkan31CreateDepthStencilStateFromDescEPK25RsDepthStencilStateDesc_t */
	virtual void * CreateBlendStateFromDesc(class CRenderDeviceVulkan *, const class RsBlendStateDesc_t  *); /* linkage=_ZN19CRenderDeviceVulkan24CreateBlendStateFromDescEPK18RsBlendStateDesc_t */
	virtual bool GetTimestampCounterFrequencyInternal(class CRenderDeviceVulkan *, double *); /* linkage=_ZN19CRenderDeviceVulkan36GetTimestampCounterFrequencyInternalEPd */
	/* <a67d0c> vulkan/renderdevicevulkan.cpp:239 */
	void ConfigureDeviceSpecificSettings(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan31ConfigureDeviceSpecificSettingsEv */
	void InitPipelineCacheManager(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan24InitPipelineCacheManagerEv */
	/* <a69b01> vulkan/renderdevicevulkan.cpp:4993 */
	void CommitInputLayoutChanges(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan24CommitInputLayoutChangesEv */
	void CreateDefaultSamplerStates(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan26CreateDefaultSamplerStatesEv */
	void RebuildUserConfigurableSamplers(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan31RebuildUserConfigurableSamplersEv */
	void CreateDefaultShaders(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan20CreateDefaultShadersEv */
	void DestroyDefaultShaders(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan21DestroyDefaultShadersEv */
	void CreateDefaultInputLayouts(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan25CreateDefaultInputLayoutsEv */
	void DestroyDefaultInputLayouts(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan26DestroyDefaultInputLayoutsEv */
	void CreateDefaultDepthStencilStates(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan31CreateDefaultDepthStencilStatesEv */
	void DestroyDefaultDepthStencilStates(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan32DestroyDefaultDepthStencilStatesEv */
	void DestroyQueryPools(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan17DestroyQueryPoolsEv */
	void DestroyDefaultBuffers(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan21DestroyDefaultBuffersEv */
	void DestroyAllDescriptorSetPools(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan28DestroyAllDescriptorSetPoolsEv */
	void DestroyAllStaticDescriptorSets(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan30DestroyAllStaticDescriptorSetsEv */
	void RecycleDescriptorSetPools(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan25RecycleDescriptorSetPoolsEv */
	void RecycleDynamicBufferPools(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan25RecycleDynamicBufferPoolsEv */
	void UpdatePipelineStats(class CRenderDeviceVulkan *, SwapChainHandle_t); /* linkage=_ZN19CRenderDeviceVulkan19UpdatePipelineStatsEP19SwapChainHandle_t__ */
	void CreateStaticDescriptorPool(class CRenderDeviceVulkan *, class VulkanDescriptorSetPool_t *); /* linkage=_ZN19CRenderDeviceVulkan26CreateStaticDescriptorPoolEP25VulkanDescriptorSetPool_t */
	bool CheckMinimumRequirements(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan24CheckMinimumRequirementsEv */
	RenderShaderHandle_t CreateGenericShader(class CRenderDeviceVulkan *, VkShaderStageFlagBits, class IRenderShaderByteCode *, const char  *); /* linkage=_ZN19CRenderDeviceVulkan19CreateGenericShaderE21VkShaderStageFlagBitsP21IRenderShaderByteCodePKc */
	/* <a6a3b3> vulkan/renderdevicevulkan.cpp:4398 */
	void DestroyGenericShader(class CRenderDeviceVulkan *, RenderShaderHandle_t); /* linkage=_ZN19CRenderDeviceVulkan20DestroyGenericShaderEP22RenderShaderHandle_t__ */
	VkCommandPool GetCmdPool(class CRenderDeviceVulkan *, class PerThreadDataVulkan_t *, enum VulkanCommandBufferType_t); /* linkage=_ZN19CRenderDeviceVulkan10GetCmdPoolEP21PerThreadDataVulkan_t25VulkanCommandBufferType_t */
	void WaitIfAheadOfTheGPUByMoreThanNFrames(class CRenderDeviceVulkan *, int32); /* linkage=_ZN19CRenderDeviceVulkan36WaitIfAheadOfTheGPUByMoreThanNFramesEi */
	/* <a697ab> vulkan/renderdevicevulkan.cpp:8723 */
	void RecreateGlobalPerFrameDescriptorSet(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan35RecreateGlobalPerFrameDescriptorSetEv */
	/* <a6985b> vulkan/renderdevicevulkan.cpp:8744 */
	void UpdateGlobalPerFrameDescriptorSet(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan33UpdateGlobalPerFrameDescriptorSetEv */
	/* <a69a0c> vulkan/renderdevicevulkan.cpp:8754 */
	void DestroyGlobalPerFrameDescriptorSet(class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderDeviceVulkan34DestroyGlobalPerFrameDescriptorSetEv */
} __attribute__((__aligned__(16)));

// <00A553D8> vulkan/renderdevicevulkan.h:447
// function call: 1
void CRenderDeviceVulkan::IsCreatingRayTracePipelines()
{
	CInterlockedIntT<int, 4>::operator int(); // 447
} /* size: 16, inline expansions: 1 (6 bytes) */

// <00A553A9> vulkan/renderdevicevulkan.h:450
void CRenderDeviceVulkan::IsRayTracingSupported()
{
} /* size: 12 */

// <00A55390> vulkan/renderdevicevulkan.h:605
inline void CRenderDeviceVulkan::GetInitializedTextureManager()
{
} /* size: 0 */

// <00A5536A> vulkan/renderdevicevulkan.h:606
inline void CRenderDeviceVulkan::SetInitializedTextureManager(bool bInitialized)
{
} /* size: 0 */

// <00876C51> vulkan/renderdevicevulkan.h:611
inline void CRenderDeviceVulkan::GetDefaultVB()
{
} /* size: 0 */

// <00876C38> vulkan/renderdevicevulkan.h:613
inline void CRenderDeviceVulkan::GetDefaultDescriptorSet()
{
} /* size: 0 */

// <004B59D0> vulkan/renderdevicevulkan.h:644
inline void CRenderDeviceVulkan::GetCurrentStaticDescriptorPool()
{
} /* size: 0 */

// <00876C1F> vulkan/renderdevicevulkan.h:724
inline void CRenderDeviceVulkan::GetDepthClearValue()
{
} /* size: 0 */

// <007403D2> vulkan/renderdevicevulkan.h:728
inline void CRenderDeviceVulkan::GetUnthrottledPipelineCreationFrameCount()
{
} /* size: 0 */

// <00A55351> vulkan/renderdevicevulkan.h:729
inline void CRenderDeviceVulkan::IsShuttingDown()
{
} /* size: 0 */

// <007BF3D1> vulkan/renderdevicevulkan.h:739
inline void CRenderDeviceVulkan::StartBuildingRayTracePipeline()
{
} /* size: 0 */

// <007BF3B8> vulkan/renderdevicevulkan.h:740
inline void CRenderDeviceVulkan::EndBuildingRayTracePipeline()
{
} /* size: 0 */

// <00A17999> vulkan/renderdevicevulkan.h:873
void VulkanTextureReleaseResources_t::~VulkanTextureReleaseResources_t()
{
} /* size: 0 */

// <00A1797C> vulkan/renderdevicevulkan.h:873
inline void VulkanTextureReleaseResources_t::~VulkanTextureReleaseResources_t()
{
} /* size: 0 */

// <009D4BB6> vulkan/renderdevicevulkan.h:873
void VulkanTextureReleaseResources_t::VulkanTextureReleaseResources_t(const VulkanTextureReleaseResources_t &)
{
} /* size: 0 */

// <009D4B94> vulkan/renderdevicevulkan.h:873
inline void VulkanTextureReleaseResources_t::VulkanTextureReleaseResources_t(const VulkanTextureReleaseResources_t &)
{
} /* size: 0 */

// <009D6918> vulkan/renderdevicevulkan.h:884
void FencedVulkanTextureRelease_t::~FencedVulkanTextureRelease_t()
{
} /* size: 0 */

// <009D68FB> vulkan/renderdevicevulkan.h:884
inline void FencedVulkanTextureRelease_t::~FencedVulkanTextureRelease_t()
{
} /* size: 0 */

// <009D4C7E> vulkan/renderdevicevulkan.h:884
void FencedVulkanTextureRelease_t::FencedVulkanTextureRelease_t()
{
} /* size: 0 */

// <009D4C61> vulkan/renderdevicevulkan.h:884
inline void FencedVulkanTextureRelease_t::FencedVulkanTextureRelease_t()
{
} /* size: 0 */

// <009D662C> vulkan/renderdevicevulkan.h:892
void FencedVertexBufferRelease_t::~FencedVertexBufferRelease_t()
{
} /* size: 0 */

// <009D660F> vulkan/renderdevicevulkan.h:892
inline void FencedVertexBufferRelease_t::~FencedVertexBufferRelease_t()
{
} /* size: 0 */

// <009D62AE> vulkan/renderdevicevulkan.h:892
void FencedVertexBufferRelease_t::FencedVertexBufferRelease_t()
{
} /* size: 0 */

// <009D6291> vulkan/renderdevicevulkan.h:892
inline void FencedVertexBufferRelease_t::FencedVertexBufferRelease_t()
{
} /* size: 0 */

// <009D6578> vulkan/renderdevicevulkan.h:901
void FencedIndexBufferRelease_t::~FencedIndexBufferRelease_t()
{
} /* size: 0 */

// <009D655B> vulkan/renderdevicevulkan.h:901
inline void FencedIndexBufferRelease_t::~FencedIndexBufferRelease_t()
{
} /* size: 0 */

// <009D6002> vulkan/renderdevicevulkan.h:901
void FencedIndexBufferRelease_t::FencedIndexBufferRelease_t()
{
} /* size: 0 */

// <009D5FE5> vulkan/renderdevicevulkan.h:901
inline void FencedIndexBufferRelease_t::FencedIndexBufferRelease_t()
{
} /* size: 0 */

// <006ED127> vulkan/renderdevicevulkan.h:1150
// member functions: 8
// member variables: 4
// class size: 32
class CAutoLockStaticDescriptorSet {
	void CAutoLockStaticDescriptorSet(CAutoLockStaticDescriptorSet* , const CAutoLockStaticDescriptorSet& );
	int ()(void) * * _vptr.CAutoLockStaticDescriptorSet; /* 0 8 */
	/* vulkan/renderdevicevulkan.h:1153 */
	void CAutoLockStaticDescriptorSet(CAutoLockStaticDescriptorSet* , CRenderDeviceVulkan* , RenderDescriptorSetHandle_t);
	/* vulkan/renderdevicevulkan.h:1160 */
	virtual void ~CAutoLockStaticDescriptorSet(CAutoLockStaticDescriptorSet* );
	/* vulkan/renderdevicevulkan.h:1165 */
	CDescriptorSetVulkan* Get(CAutoLockStaticDescriptorSet* );
private:
	CRenderDeviceVulkan * m_pDevice; /* 8 8 */
	RenderDescriptorSetHandle_t m_hDescriptorSet; /* 16 8 */
	CDescriptorSetVulkan * m_pDescriptorSet; /* 24 8 */
	void CAutoLockStaticDescriptorSet(class CAutoLockStaticDescriptorSet *, const class CAutoLockStaticDescriptorSet  &); /* linkage=_ZN28CAutoLockStaticDescriptorSetC4ERKS_ */
	void CAutoLockStaticDescriptorSet(class CAutoLockStaticDescriptorSet *, class CRenderDeviceVulkan *, RenderDescriptorSetHandle_t); /* linkage=_ZN28CAutoLockStaticDescriptorSetC4EP19CRenderDeviceVulkanP29RenderDescriptorSetHandle_t__ */
	virtual void ~CAutoLockStaticDescriptorSet(class CAutoLockStaticDescriptorSet *); /* linkage=_ZN28CAutoLockStaticDescriptorSetD4Ev */
	class CDescriptorSetVulkan * Get(class CAutoLockStaticDescriptorSet *); /* linkage=_ZN28CAutoLockStaticDescriptorSet3GetEv */
};

// <00A55330> vulkan/renderdevicevulkan.h:1153
void CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(CRenderDeviceVulkan* pDevice, const RenderDescriptorSetHandle_t hDescriptorSet)
{
} /* size: 0 */

// <00A552FD> vulkan/renderdevicevulkan.h:1153
inline void CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(CRenderDeviceVulkan* pDevice, const RenderDescriptorSetHandle_t hDescriptorSet)
{
} /* size: 0 */

// <00A551A8> vulkan/renderdevicevulkan.h:1160
// function calls: 5
void CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet()
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 6629
	CRenderDeviceVulkan::UnlockStaticDescriptorSet(
					const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6623
	CRenderDeviceVulkan::UnlockStaticDescriptorSet(
					const RenderDescriptorSetHandle_t  hDescriptorSet);  // 1162
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00A54FED> vulkan/renderdevicevulkan.h:1160
// function calls: 6
void CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet()
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 6629
	CRenderDeviceVulkan::UnlockStaticDescriptorSet(
					const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6623
	CRenderDeviceVulkan::UnlockStaticDescriptorSet(
					const RenderDescriptorSetHandle_t  hDescriptorSet);  // 1162
	CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 1163
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00A54FD4> vulkan/renderdevicevulkan.h:1160
inline void CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet()
{
} /* size: 0 */

// <00876BB4> vulkan/renderdevicevulkan.h:1160
void CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet()
{
} /* size: 0 */

// <00A54FBB> vulkan/renderdevicevulkan.h:1165
inline void CAutoLockStaticDescriptorSet::Get()
{
} /* size: 0 */

// <00A54F8C> vulkan/renderdevicevulkan.h:1180
void CRenderDeviceVulkan::IsDeactivated()
{
} /* size: 7 */

// <00B8B437> vulkan/renderdevicevulkan.h:1186
inline void CRenderDeviceVulkan::RenderThread()
{
} /* size: 0 */

// <00C4EBA2> vulkan/renderdevicevulkan.h:1192
inline void CRenderDeviceVulkan::ColorFormat()
{
} /* size: 0 */

// <00D19067> vulkan/renderdevicevulkan.h:1198
inline void CRenderDeviceVulkan::MemoryManager()
{
} /* size: 0 */

// <00C4EB6A> vulkan/renderdevicevulkan.h:1204
inline void CRenderDeviceVulkan::FramebufferManager()
{
} /* size: 0 */

// <00876B20> vulkan/renderdevicevulkan.h:1216
inline void CRenderDeviceVulkan::RenderPassManager()
{
} /* size: 0 */

// <00C4EB51> vulkan/renderdevicevulkan.h:1221
inline void CRenderDeviceVulkan::PipelineManager()
{
} /* size: 0 */

// <00A54F0F> vulkan/renderdevicevulkan.h:1226
inline void CRenderDeviceVulkan::ShaderTable()
{
} /* size: 0 */

// <00A54EF6> vulkan/renderdevicevulkan.h:1231
inline void CRenderDeviceVulkan::AsyncCompileHelper()
{
} /* size: 0 */

// <007402D0> vulkan/renderdevicevulkan.h:1237
// variable: 1
inline void CRenderDeviceVulkan::GetDefaultCBDescriptor(VkDescriptorBufferInfo* pBufferInfo)
{
	{
		ConstantBuffer_t* pBuf; // 1241
	}
} /* size: 0 */

// <00876AE2> vulkan/renderdevicevulkan.h:1249
inline void CRenderDeviceVulkan::GetStandardShader(StandardShaderId_t id)
{
} /* size: 0 */

// <00876ABD> vulkan/renderdevicevulkan.h:1254
inline void CRenderDeviceVulkan::GetStandardLayout(StandardLayoutId_t id)
{
} /* size: 0 */

// <00876A98> vulkan/renderdevicevulkan.h:1259
inline void CRenderDeviceVulkan::GetStandardDepthStencilState(StandardDepthStencilStateId_t id)
{
} /* size: 0 */

// <00876A72> vulkan/renderdevicevulkan.h:1264
inline void CRenderDeviceVulkan::GetInputLayout(RenderInputLayout_t hInputLayout)
{
} /* size: 0 */

// <00A54ED0> vulkan/renderdevicevulkan.h:1269
inline void CRenderDeviceVulkan::GetVertexBuffer(VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <00A54EAA> vulkan/renderdevicevulkan.h:1274
inline void CRenderDeviceVulkan::GetIndexBuffer(IndexBufferHandle_t hIndexBuffer)
{
} /* size: 0 */

// <00A54E84> vulkan/renderdevicevulkan.h:1279
inline void CRenderDeviceVulkan::GetVertexBuffer(DynamicVertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <00A54E5E> vulkan/renderdevicevulkan.h:1284
inline void CRenderDeviceVulkan::GetIndexBuffer(DynamicIndexBufferHandle_t hIndexBuffer)
{
} /* size: 0 */

// <00C4EB38> vulkan/renderdevicevulkan.h:1289
inline void CRenderDeviceVulkan::KHRDedicatedAllocationEnabled()
{
} /* size: 0 */

// <00C4EB1F> vulkan/renderdevicevulkan.h:1299
inline void CRenderDeviceVulkan::KHRImageFormatListEnabled()
{
} /* size: 0 */

// <00D0B643> vulkan/renderdevicevulkan.h:1309
inline void CRenderDeviceVulkan::KHRMaintenance2Enabled()
{
} /* size: 0 */

// <00C4EAED> vulkan/renderdevicevulkan.h:1314
inline void CRenderDeviceVulkan::EXTSeparateStencilUsageEnabled()
{
} /* size: 0 */

// <00BC4701> vulkan/renderdevicevulkan.h:1319
inline void CRenderDeviceVulkan::EXTValidationCacheEnabled()
{
} /* size: 0 */

// <00C4EAD4> vulkan/renderdevicevulkan.h:1329
inline void CRenderDeviceVulkan::AllowMutableSwapchainFormat()
{
} /* size: 0 */

// <00A54E2C> vulkan/renderdevicevulkan.h:1339
inline void CRenderDeviceVulkan::KHRSwapchainMutableFormatEnabled()
{
} /* size: 0 */

// <00B8B405> vulkan/renderdevicevulkan.h:1344
inline void CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled()
{
} /* size: 0 */

// <00C4EABB> vulkan/renderdevicevulkan.h:1349
inline void CRenderDeviceVulkan::EXTMemoryBudgetEnabled()
{
} /* size: 0 */

// <005A43B5> vulkan/renderdevicevulkan.h:1355
inline void CRenderDeviceVulkan::EXTMemoryPriorityEnabled()
{
} /* size: 0 */

// <00B8B3EC> vulkan/renderdevicevulkan.h:1361
inline void CRenderDeviceVulkan::GOOGLEDisplayTimingEnabled()
{
} /* size: 0 */

// <00ADC2A9> vulkan/renderdevicevulkan.h:1366
inline void CRenderDeviceVulkan::UseExternalSubpassDependency()
{
} /* size: 0 */

// <00C4EAA2> vulkan/renderdevicevulkan.h:1371
inline void CRenderDeviceVulkan::LazilyAllocateRenderTargets()
{
} /* size: 0 */

// <00BC46DD> vulkan/renderdevicevulkan.h:1376
inline void CRenderDeviceVulkan::Aftermath()
{
} /* size: 0 */

// <007402B1> vulkan/renderdevicevulkan.h:1381
inline void CRenderDeviceVulkan::KHRPipelineExecutablePropertiesEnabled()
{
} /* size: 0 */

// <008769C2> vulkan/renderdevicevulkan.h:1386
inline void CRenderDeviceVulkan::KHRDynamicRenderingEnabled()
{
} /* size: 0 */

// <00A54DFA> vulkan/renderdevicevulkan.h:1391
inline void CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled()
{
} /* size: 0 */

// <00876990> vulkan/renderdevicevulkan.h:1396
inline void CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled()
{
} /* size: 0 */

// <0074024D> vulkan/renderdevicevulkan.h:1401
inline void CRenderDeviceVulkan::EXTExtendedDynamicState2Enabled()
{
} /* size: 0 */

// <00876977> vulkan/renderdevicevulkan.h:1406
inline void CRenderDeviceVulkan::EXTExtendedDynamicState3Enabled()
{
} /* size: 0 */

// <0074021B> vulkan/renderdevicevulkan.h:1411
inline void CRenderDeviceVulkan::EXTPipelineCreationCacheControlEnabled()
{
} /* size: 0 */

// <0087695E> vulkan/renderdevicevulkan.h:1416
inline void CRenderDeviceVulkan::KHRDrawIndirectCountEnabled()
{
} /* size: 0 */

// <005A439C> vulkan/renderdevicevulkan.h:1421
inline void CRenderDeviceVulkan::EXTPageableDeviceLocalMemoryEnabled()
{
} /* size: 0 */

// <00C4EA89> vulkan/renderdevicevulkan.h:1426
inline void CRenderDeviceVulkan::EXTDescriptorIndexingEnabled()
{
} /* size: 0 */

// <00A54DC8> vulkan/renderdevicevulkan.h:1431
inline void CRenderDeviceVulkan::EXTSubgroupSizeControlEnabled()
{
} /* size: 0 */

// <00C86398> vulkan/renderdevicevulkan.h:1436
inline void CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled()
{
} /* size: 0 */

// <007BF360> vulkan/renderdevicevulkan.h:1441
inline void CRenderDeviceVulkan::KHRDeferredHostOperationsEnabled()
{
} /* size: 0 */

// <00876945> vulkan/renderdevicevulkan.h:1446
inline void CRenderDeviceVulkan::EXTMultiDrawEnabled()
{
} /* size: 0 */

// <00B8B3B4> vulkan/renderdevicevulkan.h:1476
inline void CRenderDeviceVulkan::EXTDeviceFaultEnabled()
{
} /* size: 0 */

// <0044DEE5> vulkan/renderdevicevulkan.h:1484
inline VkDevice VulkanDevice(void)
{
} /* size: 0 */

// <0051BE30> vulkan/renderdevicevulkan.h:1489
inline VmaAllocator GetVmaAllocator(void)
{
} /* size: 0 */

// <007BF341> vulkan/renderdevicevulkan.h:1494
inline const VulkanPhysicalDeviceInfo_t* VulkanPhysicalDeviceInfo(void)
{
} /* size: 0 */

// <00C4EA42> vulkan/renderdevicevulkan.h:1499
inline VkPhysicalDevice VulkanPhysicalDevice(void)
{
} /* size: 0 */

// <00A54D73> vulkan/renderdevicevulkan.h:1504
inline VkQueue VulkanQueue(void)
{
} /* size: 0 */

// <00B8B378> vulkan/renderdevicevulkan.h:1509
inline VkQueue VulkanComputeQueue(void)
{
} /* size: 0 */

// <00A54D5F> vulkan/renderdevicevulkan.h:1514
inline uint32_t VulkanQueueFamilyIndex(void)
{
} /* size: 0 */

