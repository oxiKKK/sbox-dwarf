
//
// vulkan/renderpassvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 25
//	classes: 2
//	struct: 1
//

// <00AC3A65> vulkan/renderpassvulkan.h:18
void VulkanRenderPassImageLayout_t::VulkanRenderPassImageLayout_t()
{
} /* size: 0 */

// <00AC3A49> vulkan/renderpassvulkan.h:18
inline void VulkanRenderPassImageLayout_t::VulkanRenderPassImageLayout_t()
{
} /* size: 0 */

// <00AC381B> vulkan/renderpassvulkan.h:18
inline void VulkanRenderPassImageLayout_t::operator=(const VulkanRenderPassImageLayout_t &)
{
} /* size: 0 */

// <008111C1> vulkan/renderpassvulkan.h:18
// member variables: 9
// struct size: 40
struct VulkanRenderPassImageLayout_t {
	HRenderTexture m_hTexture; /* 0 8 */
	VkImageLayout m_nInitialLayout; /* 8 4 */
	VkImageLayout m_nFinalLayout; /* 12 4 */
	uint32 m_nMipLevel; /* 16 4 */
	uint32 m_nNumMipLevels; /* 20 4 */
	uint32 m_nBaseArraySlice; /* 24 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 28 4 */
	VkImageAspectFlags m_nImageAspectMask; /* 32 4 */
	bool m_bSwapChainColorTexture:1; /* 36: 0 1 */
};

// <00A99C55> vulkan/renderpassvulkan.h:34
// member functions: 51
// member variables: 14
// class size: 168
class CRenderPassVulkan {
	/* vulkan/renderpassvulkan.h:72 */
	struct VulkanSubpassInfo_t {
		uint32_t m_nNumViewports; /* 0 4 */
		CUtlVector<VkFormat, CUtlMemory<VkFormat, int> > m_colorFormats; /* 8 32 */
		VkFormat m_nDepthStencilFormat; /* 40 4 */
		uint32_t m_nMultisampleCount; /* 44 4 */
		HRenderTexture m_hReadOnlyDepthStencilTexture; /* 48 8 */
		void VulkanSubpassInfo_t(VulkanSubpassInfo_t* , const VulkanSubpassInfo_t& );
		void ~VulkanSubpassInfo_t(VulkanSubpassInfo_t* );
		void VulkanSubpassInfo_t(VulkanSubpassInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CRenderPassVulkan(CRenderPassVulkan* , const CRenderPassVulkan& );
	int ()(void) * * _vptr.CRenderPassVulkan; /* 0 8 */
	/* vulkan/renderpassvulkan.cpp:34 */
	void CRenderPassVulkan(CRenderPassVulkan* , VkDevice, CPipelineManagerVulkan& );
	/* vulkan/renderpassvulkan.cpp:46 */
	virtual void ~CRenderPassVulkan(CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.cpp:68 */
	bool CreateFromDesc(CRenderPassVulkan* , const CRenderPassDesc* );
	/* vulkan/renderpassvulkan.h:43 */
	VkRenderPass GetRenderPass(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.cpp:731 */
	VkFramebuffer GetFramebuffer(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.h:45 */
	uint32 GetFramebufferWidth(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.h:46 */
	uint32 GetFramebufferHeight(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.h:47 */
	SwapChainHandle_t GetSwapChainHandle(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.h:48 */
	const CUtlVector<VkFramebuffer_T*, CUtlMemory<VkFramebuffer_T*, int> >& GetSwapChainFramebuffers(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.h:49 */
	const CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >& GetImageTransitions(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.h:50 */
	int32 GetNumSubpasses(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.h:51 */
	uint32 GetNumViewportsForSubPass(const CRenderPassVulkan* , uint32);
	/* vulkan/renderpassvulkan.h:52 */
	const CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& GetColorTargetFormatsForSubPass(const CRenderPassVulkan* , uint32);
	/* vulkan/renderpassvulkan.h:53 */
	VkFormat GetDepthStencilFormatForSubPass(const CRenderPassVulkan* , uint32);
	/* vulkan/renderpassvulkan.h:54 */
	uint32 GetMulitsampleCountForSubPass(const CRenderPassVulkan* , uint32);
	/* vulkan/renderpassvulkan.h:55 */
	HRenderTexture GetReadOnlyDepthStencilForSubPass(const CRenderPassVulkan* , uint32);
	/* vulkan/renderpassvulkan.cpp:905 */
	uint32 GetMemoryBandwidth(const CRenderPassVulkan* , uint32, uint32);
	/* vulkan/renderpassvulkan.h:58 */
	void SetLastFrameUsed(CRenderPassVulkan* , uint32);
	/* vulkan/renderpassvulkan.h:59 */
	uint32 GetLastFrameUsed(const CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.cpp:462 */
	void AddRef(CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.cpp:468 */
	int32_t Release(CRenderPassVulkan* );
	/* vulkan/renderpassvulkan.h:63 */
	int32_t GetRefCount(CRenderPassVulkan* );
protected:
	/* vulkan/renderpassvulkan.cpp:486 */
	void ComputeSubpassDependencies(CRenderPassVulkan* , const CRenderPassDesc* , CUtlVector<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> >& );
private:
	VkDevice m_pDeviceVulkan; /* 8 8 */
	CPipelineManagerVulkan & m_pipelineManager; /* 16 8 */
	VkRenderPass m_pRenderPass; /* 24 8 */
	VkFramebuffer m_pFramebuffer; /* 32 8 */
	uint32 m_nFramebufferWidth; /* 40 4 */
	uint32 m_nFramebufferHeight; /* 44 4 */
	SwapChainHandle_t m_hSwapChain; /* 48 8 */
	CUtlVector<VkFramebuffer_T*, CUtlMemory<VkFramebuffer_T*, int> > m_swapChainFramebuffers; /* 56 32 */
	CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> > m_imageTransitions; /* 88 32 */
	uint32 m_nMemoryBandwidthBytesPerPixel; /* 120 4 */
	CUtlVector<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int> > m_perSubPassInfo; /* 128 32 */
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 160 4 */
	CInterlockedUInt m_nLastFrameUsed __attribute__((__aligned__(4))); /* 164 4 */
	uint32 GetMemoryBandwidth(const class CRenderPassVulkan  *, uint32, uint32); /* linkage=_ZNK17CRenderPassVulkan18GetMemoryBandwidthEjj */
	VkFramebuffer GetFramebuffer(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan14GetFramebufferEv */
	HRenderTexture GetReadOnlyDepthStencilForSubPass(const class CRenderPassVulkan  *, uint32); /* linkage=_ZNK17CRenderPassVulkan33GetReadOnlyDepthStencilForSubPassEj */
	uint32 GetMulitsampleCountForSubPass(const class CRenderPassVulkan  *, uint32); /* linkage=_ZNK17CRenderPassVulkan29GetMulitsampleCountForSubPassEj */
	VkFormat GetDepthStencilFormatForSubPass(const class CRenderPassVulkan  *, uint32); /* linkage=_ZNK17CRenderPassVulkan31GetDepthStencilFormatForSubPassEj */
	const class CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >  & GetColorTargetFormatsForSubPass(const class CRenderPassVulkan  *, uint32); /* linkage=_ZNK17CRenderPassVulkan31GetColorTargetFormatsForSubPassEj */
	uint32 GetNumViewportsForSubPass(const class CRenderPassVulkan  *, uint32); /* linkage=_ZNK17CRenderPassVulkan25GetNumViewportsForSubPassEj */
	int32 GetNumSubpasses(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan15GetNumSubpassesEv */
	const class CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >  & GetImageTransitions(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan19GetImageTransitionsEv */
	SwapChainHandle_t GetSwapChainHandle(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan18GetSwapChainHandleEv */
	uint32 GetFramebufferHeight(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan20GetFramebufferHeightEv */
	uint32 GetFramebufferWidth(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan19GetFramebufferWidthEv */
	VkRenderPass GetRenderPass(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan13GetRenderPassEv */
	void CRenderPassVulkan(class CRenderPassVulkan *, const class CRenderPassVulkan  &); /* linkage=_ZN17CRenderPassVulkanC4ERKS_ */
	void CRenderPassVulkan(class CRenderPassVulkan *, VkDevice, class CPipelineManagerVulkan &); /* linkage=_ZN17CRenderPassVulkanC4EP10VkDevice_TR22CPipelineManagerVulkan */
	virtual void ~CRenderPassVulkan(class CRenderPassVulkan *); /* linkage=_ZN17CRenderPassVulkanD4Ev */
	bool CreateFromDesc(class CRenderPassVulkan *, const class CRenderPassDesc  *); /* linkage=_ZN17CRenderPassVulkan14CreateFromDescEPK15CRenderPassDesc */
	const class CUtlVector<VkFramebuffer_T*, CUtlMemory<VkFramebuffer_T*, int> >  & GetSwapChainFramebuffers(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan24GetSwapChainFramebuffersEv */
	void SetLastFrameUsed(class CRenderPassVulkan *, uint32); /* linkage=_ZN17CRenderPassVulkan16SetLastFrameUsedEj */
	uint32 GetLastFrameUsed(const class CRenderPassVulkan  *); /* linkage=_ZNK17CRenderPassVulkan16GetLastFrameUsedEv */
	/* <add064> vulkan/renderpassvulkan.cpp:462 */
	void AddRef(class CRenderPassVulkan *); /* linkage=_ZN17CRenderPassVulkan6AddRefEv */
	/* <add12f> vulkan/renderpassvulkan.cpp:468 */
	int32_t Release(class CRenderPassVulkan *); /* linkage=_ZN17CRenderPassVulkan7ReleaseEv */
	int32_t GetRefCount(class CRenderPassVulkan *); /* linkage=_ZN17CRenderPassVulkan11GetRefCountEv */
	void ComputeSubpassDependencies(class CRenderPassVulkan *, const class CRenderPassDesc  *, class CUtlVector<VkSubpassDependency, CUtlMemory<VkSubpassDependency, int> > &); /* linkage=_ZN17CRenderPassVulkan26ComputeSubpassDependenciesEPK15CRenderPassDescR10CUtlVectorI19VkSubpassDependency10CUtlMemoryIS4_iEE */
} __attribute__((__aligned__(8)));

// <00876E83> vulkan/renderpassvulkan.h:43
inline void CRenderPassVulkan::GetRenderPass()
{
} /* size: 0 */

// <00876E6A> vulkan/renderpassvulkan.h:45
inline void CRenderPassVulkan::GetFramebufferWidth()
{
} /* size: 0 */

// <00876E51> vulkan/renderpassvulkan.h:46
inline void CRenderPassVulkan::GetFramebufferHeight()
{
} /* size: 0 */

// <00876E38> vulkan/renderpassvulkan.h:47
inline void CRenderPassVulkan::GetSwapChainHandle()
{
} /* size: 0 */

// <00876E1F> vulkan/renderpassvulkan.h:49
inline void CRenderPassVulkan::GetImageTransitions()
{
} /* size: 0 */

// <00876E06> vulkan/renderpassvulkan.h:50
inline void CRenderPassVulkan::GetNumSubpasses()
{
} /* size: 0 */

// <00876DE1> vulkan/renderpassvulkan.h:51
inline void CRenderPassVulkan::GetNumViewportsForSubPass(uint32 nSubPass)
{
} /* size: 0 */

// <00876DBC> vulkan/renderpassvulkan.h:52
inline void CRenderPassVulkan::GetColorTargetFormatsForSubPass(uint32 nSubPass)
{
} /* size: 0 */

// <00876D97> vulkan/renderpassvulkan.h:53
inline void CRenderPassVulkan::GetDepthStencilFormatForSubPass(uint32 nSubPass)
{
} /* size: 0 */

// <00876D72> vulkan/renderpassvulkan.h:54
inline void CRenderPassVulkan::GetMulitsampleCountForSubPass(uint32 nSubPass)
{
} /* size: 0 */

// <00876D4D> vulkan/renderpassvulkan.h:55
inline void CRenderPassVulkan::GetReadOnlyDepthStencilForSubPass(uint32 nSubPass)
{
} /* size: 0 */

// <00ADC555> vulkan/renderpassvulkan.h:58
inline void CRenderPassVulkan::SetLastFrameUsed(uint32 nFrameNumber)
{
} /* size: 0 */

// <00ADC53C> vulkan/renderpassvulkan.h:59
inline void CRenderPassVulkan::GetLastFrameUsed()
{
} /* size: 0 */

// <00ADC523> vulkan/renderpassvulkan.h:63
inline void CRenderPassVulkan::GetRefCount()
{
} /* size: 0 */

// <00AD5637> vulkan/renderpassvulkan.h:72
void VulkanSubpassInfo_t::VulkanSubpassInfo_t()
{
} /* size: 0 */

// <00AD561B> vulkan/renderpassvulkan.h:72
inline void VulkanSubpassInfo_t::VulkanSubpassInfo_t()
{
} /* size: 0 */

// <00AD5604> vulkan/renderpassvulkan.h:72
void VulkanSubpassInfo_t::~VulkanSubpassInfo_t()
{
} /* size: 0 */

// <00AD55E8> vulkan/renderpassvulkan.h:72
inline void VulkanSubpassInfo_t::~VulkanSubpassInfo_t()
{
} /* size: 0 */

// <00AC3D95> vulkan/renderpassvulkan.h:72
void VulkanSubpassInfo_t::VulkanSubpassInfo_t(const VulkanSubpassInfo_t &)
{
} /* size: 0 */

// <00AC3D74> vulkan/renderpassvulkan.h:72
inline void VulkanSubpassInfo_t::VulkanSubpassInfo_t(const VulkanSubpassInfo_t &)
{
} /* size: 0 */

// <00AB49C4> vulkan/renderpassvulkan.h:117
// member functions: 19
// member variables: 7
// class size: 528
class CRenderPassManagerVulkan {
	void CRenderPassManagerVulkan(CRenderPassManagerVulkan* , const CRenderPassManagerVulkan& );
	int ()(void) * * _vptr.CRenderPassManagerVulkan; /* 0 8 */
	/* vulkan/renderpassvulkan.cpp:751 */
	void CRenderPassManagerVulkan(CRenderPassManagerVulkan* );
	/* vulkan/renderpassvulkan.cpp:758 */
	virtual void ~CRenderPassManagerVulkan(CRenderPassManagerVulkan* );
	/* vulkan/renderpassvulkan.cpp:763 */
	void Init(CRenderPassManagerVulkan* , VkDevice, CPipelineManagerVulkan* );
	/* vulkan/renderpassvulkan.cpp:770 */
	void Shutdown(CRenderPassManagerVulkan* );
	/* vulkan/renderpassvulkan.cpp:866 */
	void Update(CRenderPassManagerVulkan* , uint32);
	/* vulkan/renderpassvulkan.cpp:782 */
	RenderPassHandle_t FindOrCreateFromDesc(CRenderPassManagerVulkan* , const CRenderPassDesc* );
	/* vulkan/renderpassvulkan.cpp:834 */
	CRenderPassVulkan* GetRenderPass(CRenderPassManagerVulkan* , RenderPassHandle_t);
	/* vulkan/renderpassvulkan.cpp:848 */
	void Delete(CRenderPassManagerVulkan* , RenderPassHandle_t);
private:
	CThreadRWLock_FastRead m_renderPassMutex __attribute__((__aligned__(8))); /* 8 408 */
	/* vulkan/renderpassvulkan.h:131 */
	typedef struct CUtlMap<CRenderPassDesc, CRenderPassVulkan*, short unsigned int, bool (*)(const CRenderPassDesc&, const CRenderPassDesc&)> ExplicitRenderPassMap_t;
	ExplicitRenderPassMap_t m_renderPassMap; /* 416 40 */
	CThreadFastMutex m_queuedDestroyedMutex; /* 456 24 */
	CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int> > m_queuedDestroyedRenderPasses; /* 480 32 */
	VkDevice m_pDeviceVulkan; /* 512 8 */
	CPipelineManagerVulkan * m_pPipelineManager; /* 520 8 */
	/* vulkan/renderpassvulkan.h:132 */
	typedef IndexType_t ExplicitRenderPassMapIndex_t;
	void CRenderPassManagerVulkan(class CRenderPassManagerVulkan *, const class CRenderPassManagerVulkan  &); /* linkage=_ZN24CRenderPassManagerVulkanC4ERKS_ */
	void CRenderPassManagerVulkan(class CRenderPassManagerVulkan *); /* linkage=_ZN24CRenderPassManagerVulkanC4Ev */
	virtual void ~CRenderPassManagerVulkan(class CRenderPassManagerVulkan *); /* linkage=_ZN24CRenderPassManagerVulkanD4Ev */
	void Init(class CRenderPassManagerVulkan *, VkDevice, class CPipelineManagerVulkan *); /* linkage=_ZN24CRenderPassManagerVulkan4InitEP10VkDevice_TP22CPipelineManagerVulkan */
	void Shutdown(class CRenderPassManagerVulkan *); /* linkage=_ZN24CRenderPassManagerVulkan8ShutdownEv */
	void Update(class CRenderPassManagerVulkan *, uint32); /* linkage=_ZN24CRenderPassManagerVulkan6UpdateEj */
	class RenderPassHandle_t FindOrCreateFromDesc(class CRenderPassManagerVulkan *, const class CRenderPassDesc  *); /* linkage=_ZN24CRenderPassManagerVulkan20FindOrCreateFromDescEPK15CRenderPassDesc */
	class CRenderPassVulkan * GetRenderPass(class CRenderPassManagerVulkan *, class RenderPassHandle_t); /* linkage=_ZN24CRenderPassManagerVulkan13GetRenderPassE18RenderPassHandle_t */
	void Delete(class CRenderPassManagerVulkan *, class RenderPassHandle_t); /* linkage=_ZN24CRenderPassManagerVulkan6DeleteE18RenderPassHandle_t */
} __attribute__((__aligned__(8)));

// <009A6D2E> vulkan/renderpassvulkan.h:120
void CRenderPassManagerVulkan::CRenderPassManagerVulkan()
{
} /* size: 0 */

// <009A69A3> vulkan/renderpassvulkan.h:121
void CRenderPassManagerVulkan::~CRenderPassManagerVulkan()
{
} /* size: 0 */

