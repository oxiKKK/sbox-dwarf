
//
// vulkan/framebuffermgrvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 11
//	class: 1
//	struct: 1
//

// <004CDF1D> vulkan/framebuffermgrvulkan.h:27
// member functions: 3
// member variables: 28
// struct size: 368
struct VulkanFramebufferState_t {
	/* vulkan/framebuffermgrvulkan.h:76 */
	union {
		struct {
			uint32 m_nWidth:16; /* 0: 0 4 */
			uint32 m_nHeight:16; /* 0:16 4 */
		}; /* 0 4 */
		uint32 m_nWidthHeight; /* 0 4 */
	};
	/* vulkan/framebuffermgrvulkan.h:29 */
	void VulkanFramebufferState_t(VulkanFramebufferState_t* );
	/* vulkan/framebuffermgrvulkan.h:38 */
	void VulkanFramebufferState_t(VulkanFramebufferState_t* , const VulkanFramebufferState_t& );
	/* vulkan/framebuffermgrvulkan.h:43 */
	VulkanFramebufferState_t& operator=(VulkanFramebufferState_t* , const VulkanFramebufferState_t& );
	int16 m_nHighestRenderTargetBound; /* 0 2 */
	bool m_bReadOnlyDepthStencil; /* 2 1 */
	VkFormat m_nDepthStencilFormat; /* 4 4 */
	VkAttachmentLoadOp m_nDepthAttachmentLoadOp; /* 8 4 */
	VkAttachmentStoreOp m_nDepthAttachmentStoreOp; /* 12 4 */
	VkAttachmentLoadOp m_nStencilAttachmentLoadOp; /* 16 4 */
	VkAttachmentStoreOp m_nStencilAttachmentStoreOp; /* 20 4 */
	RenderMultisampleType_t m_nRenderTargetMultisampleType; /* 24 4 */
	union {
		struct {
			uint32 m_nWidth:16; /* 28: 0 4 */
			uint32 m_nHeight:16; /* 28:16 4 */
		}; /* 28 4 */
		uint32 m_nWidthHeight; /* 28 4 */
	}; /* 28 4 */
	VkRect2D m_RenderArea; /* 32 16 */
	VkImageView m_pBoundDepthStencil; /* 48 8 */
	VkImageView m_pBoundRenderTargets[4]; /* 56 32 */
	VkFormat m_nColorRendertargetFormat[4]; /* 88 16 */
	VkAttachmentLoadOp m_nColorAttachmentLoadOp[4]; /* 104 16 */
	VkAttachmentStoreOp m_nColorAttachmentStoreOp[4]; /* 120 16 */
	HRenderTexture m_hDepthStencil; /* 136 8 */
	HRenderTexture m_hColorRendertargetTextures[4]; /* 144 32 */
	VkClearValue m_ClearValues[5]; /* 176 80 */
	bool m_bHasIssuedClear; /* 256 1 */
	bool m_bHasIssuedDiscard; /* 257 1 */
	CVulkanImage * m_pBoundVulkanImages[4]; /* 264 32 */
	uint32 m_nMipLevelToBind[4]; /* 296 16 */
	uint32 m_nNumMipLevelsToBind[4]; /* 312 16 */
	uint32 m_nBaseArraySlice[4]; /* 328 16 */
	CVulkanImage * m_pBoundDepthVulkanImage; /* 344 8 */
	uint32 m_nDepthMipLevelToBind; /* 352 4 */
	uint32 m_nDepthNumMipLevelsToBind; /* 356 4 */
	uint32 m_nDepthBaseArraySlice; /* 360 4 */
};

// <00877193> vulkan/framebuffermgrvulkan.h:29
void VulkanFramebufferState_t::VulkanFramebufferState_t()
{
} /* size: 0 */

// <0087717A> vulkan/framebuffermgrvulkan.h:29
inline void VulkanFramebufferState_t::VulkanFramebufferState_t()
{
} /* size: 0 */

// <0087715E> vulkan/framebuffermgrvulkan.h:38
void VulkanFramebufferState_t::VulkanFramebufferState_t(const VulkanFramebufferState_t& rhs)
{
} /* size: 0 */

// <00877139> vulkan/framebuffermgrvulkan.h:38
inline void VulkanFramebufferState_t::VulkanFramebufferState_t(const VulkanFramebufferState_t& rhs)
{
} /* size: 0 */

// <00877114> vulkan/framebuffermgrvulkan.h:43
inline void VulkanFramebufferState_t::operator=(const VulkanFramebufferState_t& rhs)
{
} /* size: 0 */

// <004CE224> vulkan/framebuffermgrvulkan.h:118
// member functions: 30
// member variables: 9
// class size: 352
class CFramebufferMgrVulkan {
	/* vulkan/framebuffermgrvulkan.h:140 */
	class CCommandMemberInitializer_OnPrintStats {
		/* vulkan/framebuffermgrvulkan.h:140 */
		void CCommandMemberInitializer_OnPrintStats(CCommandMemberInitializer_OnPrintStats* );
	private:
		CConCommandMemberAccessor<CFramebufferMgrVulkan> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnPrintStats(CCommandMemberInitializer_OnPrintStats* );
	};
	/* vulkan/framebuffermgrvulkan.h:147 */
	struct FramebufferHashFunctor_t {
		/* vulkan/framebuffermgrvulkan.h:149 */
		unsigned int operator()(const FramebufferHashFunctor_t* , const VulkanFramebufferState_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/framebuffermgrvulkan.h:155 */
	struct FramebufferEqualFunctor_t {
		/* vulkan/framebuffermgrvulkan.h:157 */
		bool operator()(const FramebufferEqualFunctor_t* , const VulkanFramebufferState_t& , const VulkanFramebufferState_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/framebuffermgrvulkan.h:163 */
	struct RenderPassHashFunctor_t {
		/* vulkan/framebuffermgrvulkan.h:165 */
		unsigned int operator()(const RenderPassHashFunctor_t* , const VulkanFramebufferState_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/framebuffermgrvulkan.h:171 */
	struct RenderPassEqualFunctor_t {
		/* vulkan/framebuffermgrvulkan.h:173 */
		bool operator()(const RenderPassEqualFunctor_t* , const VulkanFramebufferState_t& , const VulkanFramebufferState_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CFramebufferMgrVulkan(CFramebufferMgrVulkan* , const CFramebufferMgrVulkan& );
	int ()(void) * * _vptr.CFramebufferMgrVulkan; /* 0 8 */
	/* vulkan/framebuffermgrvulkan.cpp:178 */
	void CFramebufferMgrVulkan(CFramebufferMgrVulkan* );
	/* vulkan/framebuffermgrvulkan.cpp:182 */
	virtual void ~CFramebufferMgrVulkan(CFramebufferMgrVulkan* );
	/* vulkan/framebuffermgrvulkan.cpp:190 */
	bool Init(CFramebufferMgrVulkan* , VkDevice);
	/* vulkan/framebuffermgrvulkan.cpp:199 */
	void Shutdown(CFramebufferMgrVulkan* );
	/* vulkan/framebuffermgrvulkan.cpp:232 */
	VkFramebuffer GetFramebuffer(CFramebufferMgrVulkan* , VulkanFramebufferState_t& , VkRenderPass);
	/* vulkan/framebuffermgrvulkan.cpp:287 */
	VkRenderPass GetRenderPass(CFramebufferMgrVulkan* , const VulkanFramebufferState_t& );
	/* vulkan/framebuffermgrvulkan.cpp:441 */
	VkRenderPass GetRenderPassForPreWarming(CFramebufferMgrVulkan* , const VulkanFramebufferState_t& );
	/* vulkan/framebuffermgrvulkan.cpp:467 */
	void DestroyObjectsReferencing(CFramebufferMgrVulkan* , CPipelineManagerVulkan* , VkImage);
	/* vulkan/framebuffermgrvulkan.cpp:447 */
	void UpdatePendingObjects(CFramebufferMgrVulkan* );
	/* vulkan/framebuffermgrvulkan.cpp:536 */
	void AppendStatsSummaryString(CFramebufferMgrVulkan* , CBufferString* );
private:
	/* vulkan/framebuffermgrvulkan.cpp:526 */
	void OnPrintStats(CFramebufferMgrVulkan* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnPrintStats m_OnPrintStats_register; /* 8 160 */
	/* vulkan/framebuffermgrvulkan.h:178 */
	typedef struct CUtlHashtable<VulkanFramebufferState_t, VkFramebuffer_T*, CFramebufferMgrVulkan::FramebufferHashFunctor_t, CFramebufferMgrVulkan::FramebufferEqualFunctor_t, undefined_t, CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkFramebuffer_T*>, int> > FramebufferHashtable_t;
protected:
	FramebufferHashtable_t m_PendingFramebufferMap; /* 168 32 */
	FramebufferHashtable_t m_FramebufferMap; /* 200 32 */
	/* vulkan/framebuffermgrvulkan.h:184 */
	typedef struct CUtlHashtable<VulkanFramebufferState_t, VkRenderPass_T*, CFramebufferMgrVulkan::RenderPassHashFunctor_t, CFramebufferMgrVulkan::RenderPassEqualFunctor_t, undefined_t, CUtlMemory<CUtlHashtableEntry<VulkanFramebufferState_t, VkRenderPass_T*>, int> > RenderPassHashtable_t;
	RenderPassHashtable_t m_PendingRenderpassMap; /* 232 32 */
	RenderPassHashtable_t m_RenderpassMap; /* 264 32 */
	CThreadFastMutex m_FramebufferMutex; /* 296 24 */
	CThreadFastMutex m_RenderPassMutex; /* 320 24 */
	VkDevice m_pDeviceVulkan; /* 344 8 */
	/* vulkan/framebuffermgrvulkan.h:179 */
	typedef handle_t FramebufferHashHandle_t;
	/* vulkan/framebuffermgrvulkan.h:185 */
	typedef handle_t RenderPassHashHandle_t;
	void CFramebufferMgrVulkan(class CFramebufferMgrVulkan *, const class CFramebufferMgrVulkan  &); /* linkage=_ZN21CFramebufferMgrVulkanC4ERKS_ */
	void CFramebufferMgrVulkan(class CFramebufferMgrVulkan *); /* linkage=_ZN21CFramebufferMgrVulkanC4Ev */
	virtual void ~CFramebufferMgrVulkan(class CFramebufferMgrVulkan *); /* linkage=_ZN21CFramebufferMgrVulkanD4Ev */
	bool Init(class CFramebufferMgrVulkan *, VkDevice); /* linkage=_ZN21CFramebufferMgrVulkan4InitEP10VkDevice_T */
	void Shutdown(class CFramebufferMgrVulkan *); /* linkage=_ZN21CFramebufferMgrVulkan8ShutdownEv */
	VkFramebuffer GetFramebuffer(class CFramebufferMgrVulkan *, class VulkanFramebufferState_t &, VkRenderPass); /* linkage=_ZN21CFramebufferMgrVulkan14GetFramebufferER24VulkanFramebufferState_tP14VkRenderPass_T */
	/* <4de525> vulkan/framebuffermgrvulkan.cpp:287 */
	VkRenderPass GetRenderPass(class CFramebufferMgrVulkan *, const class VulkanFramebufferState_t  &); /* linkage=_ZN21CFramebufferMgrVulkan13GetRenderPassERK24VulkanFramebufferState_t */
	VkRenderPass GetRenderPassForPreWarming(class CFramebufferMgrVulkan *, const class VulkanFramebufferState_t  &); /* linkage=_ZN21CFramebufferMgrVulkan26GetRenderPassForPreWarmingERK24VulkanFramebufferState_t */
	void DestroyObjectsReferencing(class CFramebufferMgrVulkan *, class CPipelineManagerVulkan *, VkImage); /* linkage=_ZN21CFramebufferMgrVulkan25DestroyObjectsReferencingEP22CPipelineManagerVulkanP9VkImage_T */
	void UpdatePendingObjects(class CFramebufferMgrVulkan *); /* linkage=_ZN21CFramebufferMgrVulkan20UpdatePendingObjectsEv */
	void AppendStatsSummaryString(class CFramebufferMgrVulkan *, class CBufferString *); /* linkage=_ZN21CFramebufferMgrVulkan24AppendStatsSummaryStringEP13CBufferString */
	void OnPrintStats(class CFramebufferMgrVulkan *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN21CFramebufferMgrVulkan12OnPrintStatsERK15CCommandContextRK8CCommand */
};

// <009A6D4A> vulkan/framebuffermgrvulkan.h:122
void CFramebufferMgrVulkan::CFramebufferMgrVulkan()
{
} /* size: 0 */

// <009A6987> vulkan/framebuffermgrvulkan.h:123
void CFramebufferMgrVulkan::~CFramebufferMgrVulkan()
{
} /* size: 0 */

// <004DDB1C> vulkan/framebuffermgrvulkan.h:140
void CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <004DDB03> vulkan/framebuffermgrvulkan.h:140
inline void CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <004DD658> vulkan/framebuffermgrvulkan.h:140
void CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <004DD63C> vulkan/framebuffermgrvulkan.h:140
inline void CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

