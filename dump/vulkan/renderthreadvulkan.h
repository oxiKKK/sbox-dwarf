
//
// vulkan/renderthreadvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 28
//	classes: 2
//	structs: 13
//

// <00A281C1> vulkan/renderthreadvulkan.h:27
void QueryObjectInternalVulkan_t::QueryObjectInternalVulkan_t()
{
} /* size: 0 */

// <00A281A4> vulkan/renderthreadvulkan.h:27
inline void QueryObjectInternalVulkan_t::QueryObjectInternalVulkan_t()
{
} /* size: 0 */

// <006D8470> vulkan/renderthreadvulkan.h:27
// member variables: 8
// struct size: 112
struct QueryObjectInternalVulkan_t {
	/* vulkan/renderthreadvulkan.h:34 */
	union {
		uint64_t m_nQueryData; /* 0 8 */
		RenderQueryPipelineStatistics_t m_queryPipelineStatistics; /* 0 72 */
	};
	uint32 m_nQuerySlot; /* 0 4 */
	VkQueryPool m_pQueryPool; /* 8 8 */
	RenderQueryType_t m_QueryType; /* 16 4 */
	CInterlockedInt m_QueryState __attribute__((__aligned__(4))); /* 20 4 */
	union {
		uint64_t m_nQueryData; /* 24 8 */
		RenderQueryPipelineStatistics_t m_queryPipelineStatistics; /* 24 72 */
	}; /* 24 72 */
	CVulkanPooledFenceObject * m_pFence; /* 96 8 */
	bool m_bFenceRetired; /* 104 1 */
	bool m_bRequiresReset; /* 105 1 */
} __attribute__((__aligned__(8)));

// <009808EF> vulkan/renderthreadvulkan.h:27
// member function: 1
// member variables: 8
// struct size: 112
struct QueryObjectInternalVulkan_t {
	/* vulkan/renderthreadvulkan.h:34 */
	union {
		uint64_t m_nQueryData; /* 0 8 */
		RenderQueryPipelineStatistics_t m_queryPipelineStatistics; /* 0 72 */
	};
	uint32 m_nQuerySlot; /* 0 4 */
	VkQueryPool m_pQueryPool; /* 8 8 */
	RenderQueryType_t m_QueryType; /* 16 4 */
	CInterlockedInt m_QueryState __attribute__((__aligned__(4))); /* 20 4 */
	union {
		uint64_t m_nQueryData; /* 24 8 */
		RenderQueryPipelineStatistics_t m_queryPipelineStatistics; /* 24 72 */
	}; /* 24 72 */
	CVulkanPooledFenceObject * m_pFence; /* 96 8 */
	bool m_bFenceRetired; /* 104 1 */
	bool m_bRequiresReset; /* 105 1 */
	void QueryObjectInternalVulkan_t(QueryObjectInternalVulkan_t* );
} __attribute__((__aligned__(8)));

// <00B4164C> vulkan/renderthreadvulkan.h:64
// member variables: 13
// struct size: 104
struct AsyncReadbackVulkan_t {
	CommandOpCodeVulkan_t m_nReadbackOpCode; /* 0 4 */
	CVulkanPooledFenceObject * m_pFence; /* 8 8 */
	VkBuffer m_pBuffer; /* 16 8 */
	VkDeviceMemory m_pDeviceMemory; /* 24 8 */
	size_t m_nMemorySize; /* 32 8 */
	VkCommandBuffer m_pCommandBuffer; /* 40 8 */
	IRenderReadCallback * m_pCallback; /* 48 8 */
	bool m_bDeleteCallbackWhenFinished; /* 56 1 */
	size_t m_nBitsPerTexel; /* 64 8 */
	ImageFormat m_nSrcFormat; /* 72 4 */
	Rect_t m_srcRect; /* 76 16 */
	int32 m_nSrcMip; /* 92 4 */
	bool m_bReadbackIssued; /* 96 1 */
};

// <0084D0BF> vulkan/renderthreadvulkan.h:95
void CommandPresentVulkan_t::CommandPresentVulkan_t()
{
} /* size: 0 */

// <0084D0A3> vulkan/renderthreadvulkan.h:95
inline void CommandPresentVulkan_t::CommandPresentVulkan_t()
{
} /* size: 0 */

// <0082040C> vulkan/renderthreadvulkan.h:95
// member function: 1
// member variables: 12
// struct size: 88
struct CommandPresentVulkan_t : public CommandHelper_t<CommandPresentVulkan_t, 4, false> {
public:
	/* struct CommandHelper_t<CommandPresentVulkan_t, 4, false> <ancestor>; */ /* 0 4 */
	uint32 m_nSubmittedFrameCount; /* 4 4 */
	int m_nPresentId; /* 8 4 */
	SwapChainHandle_t m_hSwapChain; /* 16 8 */
	VkSwapchainKHR m_pSwapChainKHR; /* 24 8 */
	uint32 m_nSwapChainImageIndex; /* 32 4 */
	CPipelineFence * m_pPostPresentFence; /* 40 8 */
	const char * m_pSwapChainName; /* 48 8 */
	bool m_bWaitForVSync; /* 56 1 */
	OsSpecificWindowHandle_t m_hWnd; /* 64 8 */
	VkSemaphore m_pAcquireNextImageSemaphore; /* 72 8 */
	bool m_bHaveValidSwapChainForPresent; /* 80 1 */
	void CommandPresentVulkan_t(CommandPresentVulkan_t* );
};

// <0085B059> vulkan/renderthreadvulkan.h:110
void CommandEndQueryVulkan_t::CommandEndQueryVulkan_t()
{
} /* size: 0 */

// <0085B03D> vulkan/renderthreadvulkan.h:110
inline void CommandEndQueryVulkan_t::CommandEndQueryVulkan_t()
{
} /* size: 0 */

// <00820541> vulkan/renderthreadvulkan.h:110
// member function: 1
// member variables: 2
// struct size: 16
struct CommandEndQueryVulkan_t : public CommandHelper_t<CommandEndQueryVulkan_t, 12, true> {
public:
	/* struct CommandHelper_t<CommandEndQueryVulkan_t, 12, true> <ancestor>; */ /* 0 4 */
	QueryObjectInternalVulkan_t * m_pQueryObjectInternal; /* 8 8 */
	void CommandEndQueryVulkan_t(CommandEndQueryVulkan_t* );
};

// <00B41994> vulkan/renderthreadvulkan.h:115
// member variables: 3
// struct size: 24
struct CommandBlockForQueryVulkan_t : public CommandHelper_t<CommandBlockForQueryVulkan_t, 14, true> {
public:
	/* struct CommandHelper_t<CommandBlockForQueryVulkan_t, 14, true> <ancestor>; */ /* 0 4 */
	QueryObjectInternalVulkan_t * m_pQueryObjectVulkan; /* 8 8 */
	float m_flTimeout; /* 16 4 */
};

// <00A28018> vulkan/renderthreadvulkan.h:121
void CommandDestroyQueryVulkan_t::CommandDestroyQueryVulkan_t()
{
} /* size: 0 */

// <00A27FFB> vulkan/renderthreadvulkan.h:121
inline void CommandDestroyQueryVulkan_t::CommandDestroyQueryVulkan_t()
{
} /* size: 0 */

// <00980BA3> vulkan/renderthreadvulkan.h:121
// member function: 1
// member variables: 2
// struct size: 16
struct CommandDestroyQueryVulkan_t : public CommandHelper_t<CommandDestroyQueryVulkan_t, 13, true> {
public:
	/* struct CommandHelper_t<CommandDestroyQueryVulkan_t, 13, true> <ancestor>; */ /* 0 4 */
	QueryObjectInternalVulkan_t * m_pQueryObjectVulkan; /* 8 8 */
	void CommandDestroyQueryVulkan_t(CommandDestroyQueryVulkan_t* );
};

// <00A2C3DD> vulkan/renderthreadvulkan.h:126
void CommandReadTexturePixelsVulkan_t::CommandReadTexturePixelsVulkan_t()
{
} /* size: 0 */

// <00A2C3C0> vulkan/renderthreadvulkan.h:126
inline void CommandReadTexturePixelsVulkan_t::CommandReadTexturePixelsVulkan_t()
{
} /* size: 0 */

// <009E5EB7> vulkan/renderthreadvulkan.h:126
inline void CommandReadTexturePixelsVulkan_t::operator=(const CommandReadTexturePixelsVulkan_t &)
{
} /* size: 0 */

// <008205E0> vulkan/renderthreadvulkan.h:126
// member functions: 2
// member variables: 14
// struct size: 112
struct CommandReadTexturePixelsVulkan_t : public CommandHelper_t<CommandReadTexturePixelsVulkan_t, 15, true> {
public:
	/* struct CommandHelper_t<CommandReadTexturePixelsVulkan_t, 15, true> <ancestor>; */ /* 0 4 */
	CVulkanImage * m_pVulkanImage; /* 8 8 */
	Rect_t m_SrcRect; /* 16 16 */
	Rect_t m_DestRect; /* 32 16 */
	int32 m_nSrcSlice; /* 48 4 */
	int32 m_nSrcMip; /* 52 4 */
	ImageFormat m_DestFormat; /* 56 4 */
	ImageFormat m_SrcFormat; /* 60 4 */
	HRenderTexture m_hSrcTexture; /* 64 8 */
	VkFormat m_SrcFormatVulkan; /* 72 4 */
	void * m_pDestBuffer; /* 80 8 */
	int m_nDestStride; /* 88 4 */
	IReadTexturePixelsCallback * m_pCallback; /* 96 8 */
	bool m_bDeleteCallbackWhenFinished; /* 104 1 */
	CommandReadTexturePixelsVulkan_t& operator=(CommandReadTexturePixelsVulkan_t* , const CommandReadTexturePixelsVulkan_t& );
	void CommandReadTexturePixelsVulkan_t(CommandReadTexturePixelsVulkan_t* );
};

// <0084740C> vulkan/renderthreadvulkan.h:143
void CommandReadBufferVulkan_t::CommandReadBufferVulkan_t()
{
} /* size: 0 */

// <008473F0> vulkan/renderthreadvulkan.h:143
inline void CommandReadBufferVulkan_t::CommandReadBufferVulkan_t()
{
} /* size: 0 */

// <008207DC> vulkan/renderthreadvulkan.h:143
// member function: 1
// member variables: 6
// struct size: 48
struct CommandReadBufferVulkan_t : public CommandHelper_t<CommandReadBufferVulkan_t, 16, true> {
public:
	/* struct CommandHelper_t<CommandReadBufferVulkan_t, 16, true> <ancestor>; */ /* 0 4 */
	VkDeviceMemory m_pReadbackMemory; /* 8 8 */
	VkBuffer m_pReadbackBuffer; /* 16 8 */
	int32 m_nSizeInBytes; /* 24 4 */
	IReadBufferCallback * m_pCallback; /* 32 8 */
	bool m_bDeleteCallbackWhenFinished; /* 40 1 */
	void CommandReadBufferVulkan_t(CommandReadBufferVulkan_t* );
};

// <00A363F3> vulkan/renderthreadvulkan.h:152
void CommandSetSwapChainSemaphore_t::CommandSetSwapChainSemaphore_t()
{
} /* size: 0 */

// <00A363D6> vulkan/renderthreadvulkan.h:152
inline void CommandSetSwapChainSemaphore_t::CommandSetSwapChainSemaphore_t()
{
} /* size: 0 */

// <00980EAF> vulkan/renderthreadvulkan.h:152
// member function: 1
// member variables: 2
// struct size: 16
struct CommandSetSwapChainSemaphore_t : public CommandHelper_t<CommandSetSwapChainSemaphore_t, 19, true> {
public:
	/* struct CommandHelper_t<CommandSetSwapChainSemaphore_t, 19, true> <ancestor>; */ /* 0 4 */
	VkSemaphore m_pSwapChainSemaphore; /* 8 8 */
	void CommandSetSwapChainSemaphore_t(CommandSetSwapChainSemaphore_t* );
};

// <0084551B> vulkan/renderthreadvulkan.h:157
void CommandDeviceThreadCallback_t::CommandDeviceThreadCallback_t()
{
} /* size: 0 */

// <008454FF> vulkan/renderthreadvulkan.h:157
inline void CommandDeviceThreadCallback_t::CommandDeviceThreadCallback_t()
{
} /* size: 0 */

// <00820928> vulkan/renderthreadvulkan.h:157
// member function: 1
// member variables: 2
// struct size: 16
struct CommandDeviceThreadCallback_t : public CommandHelper_t<CommandDeviceThreadCallback_t, 18, true> {
public:
	/* struct CommandHelper_t<CommandDeviceThreadCallback_t, 18, true> <ancestor>; */ /* 0 4 */
	IDeviceThreadCallback * m_pDeviceThreadCallback; /* 8 8 */
	void CommandDeviceThreadCallback_t(CommandDeviceThreadCallback_t* );
};

// <00A293AB> vulkan/renderthreadvulkan.h:162
void CommandBeginSubmittingViews_t::CommandBeginSubmittingViews_t()
{
} /* size: 0 */

// <00A2938E> vulkan/renderthreadvulkan.h:162
inline void CommandBeginSubmittingViews_t::CommandBeginSubmittingViews_t()
{
} /* size: 0 */

// <00980F5A> vulkan/renderthreadvulkan.h:162
// member function: 1
// member variables: 2
// struct size: 16
struct CommandBeginSubmittingViews_t : public CommandHelper_t<CommandBeginSubmittingViews_t, 20, true> {
public:
	/* struct CommandHelper_t<CommandBeginSubmittingViews_t, 20, true> <ancestor>; */ /* 0 4 */
	SwapChainHandle_t m_hSwapChain; /* 8 8 */
	void CommandBeginSubmittingViews_t(CommandBeginSubmittingViews_t* );
};

// <0083F323> vulkan/renderthreadvulkan.h:167
void CommandUpdateSwappedImageLayout_t::CommandUpdateSwappedImageLayout_t()
{
} /* size: 0 */

// <0083F307> vulkan/renderthreadvulkan.h:167
inline void CommandUpdateSwappedImageLayout_t::CommandUpdateSwappedImageLayout_t()
{
} /* size: 0 */

// <008209D3> vulkan/renderthreadvulkan.h:167
// member function: 1
// member variables: 4
// struct size: 24
struct CommandUpdateSwappedImageLayout_t : public CommandHelper_t<CommandUpdateSwappedImageLayout_t, 21, true> {
public:
	/* struct CommandHelper_t<CommandUpdateSwappedImageLayout_t, 21, true> <ancestor>; */ /* 0 4 */
	VkImageLayout m_nPreviousLayout; /* 4 4 */
	CVulkanImage * m_pImage; /* 8 8 */
	VkImageAspectFlags m_nAspectMask; /* 16 4 */
	void CommandUpdateSwappedImageLayout_t(CommandUpdateSwappedImageLayout_t* );
};

// <00B4C575> vulkan/renderthreadvulkan.h:179
// member functions: 78
// member variables: 42
// vtable entries: 4
// class size: 1,808
class CRenderThreadVulkan : public CRenderThreadBase {
	/* vulkan/renderthreadvulkan.h:270 */
	struct SemaphoreFenceVulkan_t {
		CVulkanPooledFenceObject * m_pFence; /* 0 8 */
		VkSemaphore m_pAcquireNextImageSemaphore; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderthreadvulkan.h:277 */
	struct PresentFenceVulkan_t {
		VkFence m_pFence; /* 0 8 */
		VkCommandBuffer m_pCommandBuffer; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderthreadvulkan.h:301 */
	enum TimestampQuerySlot_t {
		SUBMIT_BEGIN_SLOT = 0,
		WORK_FINISHED_SLOT = 1,
		PRESENT_FINISHED_SLOT = 2,
		NUM_TIMESTAMP_QUERY_SLOTS = 3,
	};
public:
	/* class CRenderThreadBase <ancestor>; */ /* 0 0 */
	void CRenderThreadVulkan(CRenderThreadVulkan* , CRenderThreadVulkan& );
	/* vulkan/renderthreadvulkan.cpp:34 */
	void CRenderThreadVulkan(CRenderThreadVulkan* , CRenderDeviceVulkan* );
	/* vulkan/renderthreadvulkan.cpp:66 */
	void ~CRenderThreadVulkan(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:651 */
	void Execute(CRenderThreadVulkan* , CCommandStream* );
	/* vulkan/renderthreadvulkan.h:192 */
	CThreadFastMutex& GetQueueMutex(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:145 */
	void DestroyOutstandingSemaphores(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.h:197 */
	void SetFramePacingFPS(CRenderThreadVulkan* , double);
	/* vulkan/renderthreadvulkan.cpp:2054 */
	void ReturnFenceToPool(CRenderThreadVulkan* , VkFence);
	/* vulkan/renderthreadvulkan.cpp:1592 */
	virtual void WaitingForWork(CRenderThreadVulkan* );
protected:
	/* vulkan/renderthreadvulkan.cpp:1625 */
	virtual void SetBestAffinity(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:1610 */
	virtual void OnThreadStart(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:1616 */
	virtual void OnThreadStop(CRenderThreadVulkan* );
private:
	/* vulkan/renderthreadvulkan.cpp:1302 */
	void PresentInternal(CRenderThreadVulkan* , const CommandPresentVulkan_t& );
	/* vulkan/renderthreadvulkan.cpp:1026 */
	void ManageQueries(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:988 */
	void QueueResetQueries(CRenderThreadVulkan* , const CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis);
	/* vulkan/renderthreadvulkan.cpp:576 */
	void OnDestroyQuery(CRenderThreadVulkan* , const CommandDestroyQueryVulkan_t& );
	/* vulkan/renderthreadvulkan.h:218 */
	void OnEndQuery(CRenderThreadVulkan* , const CommandEndQueryVulkan_t& );
	/* vulkan/renderthreadvulkan.cpp:594 */
	void OnBlockForQuery(CRenderThreadVulkan* , const CommandBlockForQueryVulkan_t& );
	/* vulkan/renderthreadvulkan.cpp:157 */
	void OnReadPixels(CRenderThreadVulkan* , const CommandReadTexturePixelsVulkan_t& );
	/* vulkan/renderthreadvulkan.cpp:469 */
	void OnReadBuffer(CRenderThreadVulkan* , const CommandReadBufferVulkan_t& );
	/* vulkan/renderthreadvulkan.h:222 */
	void OnServiceFallbackTextureQueue(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:2079 */
	void OnSetSteamVrCompositorTexture(CRenderThreadVulkan* , const CommandSetSteamVrCompositorTexture_t& );
	/* vulkan/renderthreadvulkan.cpp:625 */
	void OnBeginSubmittingViews(CRenderThreadVulkan* , const CommandBeginSubmittingViews_t& );
	/* vulkan/renderthreadvulkan.cpp:495 */
	void OnUpdateSwappedImageLayout(CRenderThreadVulkan* , const CommandUpdateSwappedImageLayout_t& );
	/* vulkan/renderthreadvulkan.cpp:1206 */
	void UpdatePipelineStatsBegin(CRenderThreadVulkan* , VkSwapchainKHR, const char* );
	/* vulkan/renderthreadvulkan.cpp:1217 */
	void UpdatePipelineStatsEnd(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:1234 */
	void FrameSync(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:1131 */
	void ProcessAsyncReadRequests(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.h:232 */
	void UpdateDynamicBuffers(CRenderThreadVulkan* , CCommandStream* );
	/* vulkan/renderthreadvulkan.cpp:1844 */
	void ExecuteQueuedCommandBuffers(CRenderThreadVulkan* , RenderSemaphoreHandle_t);
	/* vulkan/renderthreadvulkan.cpp:2100 */
	void CreateTimestampResources(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:2138 */
	void DestroyTimestampResources(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:2157 */
	void SubmitWorkFinishedTimestamp(CRenderThreadVulkan* , const CSwapChainVulkan* );
	/* vulkan/renderthreadvulkan.cpp:1647 */
	VkSemaphore GetSemaphoreAndMarkQueued(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:1682 */
	void MarkQueuedSemaphoresAsWaitedOn(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:2033 */
	VkFence GetVulkanFenceFromPool(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:1696 */
	void GPUCrash(CRenderThreadVulkan* );
	/* vulkan/renderthreadvulkan.cpp:1716 */
	void DumpDiagnosticCheckpoints(CRenderThreadVulkan* , VkQueue);
	CommandBufferPool_t * m_pCmdBufferPool; /* 1104 8 */
	CUtlVector<QueryObjectInternalVulkan_t*, CUtlMemory<QueryObjectInternalVulkan_t*, int> > m_OutstandingQueryList; /* 1112 32 */
	CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int> > m_asyncReadbackRequests; /* 1144 40 */
	VkDeviceMemory m_pSynchronousReadPixelsMemory; /* 1184 8 */
	VkBuffer m_pSynchronousReadPixelsBuffer; /* 1192 8 */
	VkDeviceSize m_nSynchronousReadPixelsSize; /* 1200 8 */
	PerThreadDataVulkan_t * m_pPerThreadData; /* 1208 8 */
	CVulkanPooledFenceObject * m_pLastFenceSubmitted; /* 1216 8 */
	CUtlLinkedList<VulkanCommandBuffer_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t*, short unsigned int>, short unsigned int> > m_QueuedVulkanCommandBuffers; /* 1224 40 */
	CUtlVector<VkCommandBuffer_T*, CUtlMemory<VkCommandBuffer_T*, int> > m_QueuedCommandBuffersFlattened; /* 1264 32 */
	CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int> > m_AcquireNextImageFencesGPU; /* 1296 40 */
	CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int> > m_FrameCompleteFencesGPU; /* 1336 40 */
	CTSQueue<VkFence_T*, false> m_vulkanFencePool __attribute__((__aligned__(16))); /* 1376 64 */
	VkSemaphore m_pAcquireNextImageSemaphore; /* 1440 8 */
	RenderSemaphoreHandle_t m_hPendingWaitSemaphore; /* 1448 8 */
	CThreadFastMutex m_QueueMutex; /* 1456 24 */
	uint32 m_nCommandBuffersPerFrame; /* 1480 4 */
	VulkanCommandBufferType_t m_nLastCommandBufferType; /* 1484 1 */
	VkQueryPool m_pTimestampQueryPool; /* 1488 8 */
	VkCommandBuffer m_pTimestampCommandBuffers[6]; /* 1496 48 */
	uint32_t m_nTimestampFrameNumber[2]; /* 1544 8 */
	bool m_bRenderingToMainWindow; /* 1552 1 */
	int32 m_nCurrentGpuTimeQuery; /* 1556 4 */
	uint32 m_nHighestTimestampFrame; /* 1560 4 */
	double m_flPostPresentLastFrame; /* 1568 8 */
	bool m_bFirstSubmitOfFrame; /* 1576 1 */
	bool m_bRenderDebugEnableGpuTimestamps; /* 1577 1 */
	int m_nNumFlushesThisFrame; /* 1580 4 */
	double m_flNextFlushTime; /* 1584 8 */
	HRenderTextureStrong m_hReadPixelsMSAAResolveTexture; /* 1592 8 */
	TextureSpecification_t m_readPixelsMSAAResolveTextureSpec; /* 1600 104 */
	CUtlVector<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > m_queuedSemaphoresThisFrame; /* 1704 32 */
	CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > m_availableSemaphores; /* 1736 24 */
	uint32_t m_nPresentIdForGoogleDisplayTiming; /* 1760 4 */
	uint64_t m_nPresentationTimeForGoogleDisplayTiming; /* 1768 8 */
	double m_flFramePacingFps; /* 1776 8 */
	/* vulkan/renderthreadvulkan.h:335 */
	bool IsRenderDocActive(CRenderThreadVulkan* );
	CUtlString m_curViewName; /* 1784 8 */
	CUtlString m_curLayerName; /* 1792 8 */
	int32 m_nCurDebugStringDepth; /* 1800 4 */
	bool m_bInRenderDoc; /* 1804 1 */
	bool m_bQueriedRenderDoc; /* 1805 1 */
	class CThreadFastMutex & GetQueueMutex(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan13GetQueueMutexEv */
	void CRenderThreadVulkan(class CRenderThreadVulkan *, class CRenderThreadVulkan &); /* linkage=_ZN19CRenderThreadVulkanC4ERS_ */
	void CRenderThreadVulkan(class CRenderThreadVulkan *, class CRenderDeviceVulkan *); /* linkage=_ZN19CRenderThreadVulkanC4EP19CRenderDeviceVulkan */
	void ~CRenderThreadVulkan(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkanD4Ev */
	void Execute(class CRenderThreadVulkan *, class CCommandStream *); /* linkage=_ZN19CRenderThreadVulkan7ExecuteEP14CCommandStream */
	/* <b8da09> vulkan/renderthreadvulkan.cpp:145 */
	void DestroyOutstandingSemaphores(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan28DestroyOutstandingSemaphoresEv */
	void SetFramePacingFPS(class CRenderThreadVulkan *, double); /* linkage=_ZN19CRenderThreadVulkan17SetFramePacingFPSEd */
	void ReturnFenceToPool(class CRenderThreadVulkan *, VkFence); /* linkage=_ZN19CRenderThreadVulkan17ReturnFenceToPoolEP9VkFence_T */
	virtual void WaitingForWork(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan14WaitingForWorkEv */
	virtual void SetBestAffinity(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan15SetBestAffinityEv */
	virtual void OnThreadStart(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan13OnThreadStartEv */
	virtual void OnThreadStop(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan12OnThreadStopEv */
	void PresentInternal(class CRenderThreadVulkan *, const class CommandPresentVulkan_t  &); /* linkage=_ZN19CRenderThreadVulkan15PresentInternalERK22CommandPresentVulkan_t */
	void ManageQueries(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan13ManageQueriesEv */
	/* <b90b33> vulkan/renderthreadvulkan.cpp:988 */
	void QueueResetQueries(class CRenderThreadVulkan *, const class CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis); /* linkage=_ZN19CRenderThreadVulkan17QueueResetQueriesERK14CUtlLinkedListIP27QueryObjectInternalVulkan_ttLb0Et10CUtlMemoryI19UtlLinkedListElem_tIS2_tEtEE */
	void OnDestroyQuery(class CRenderThreadVulkan *, const class CommandDestroyQueryVulkan_t  &); /* linkage=_ZN19CRenderThreadVulkan14OnDestroyQueryERK27CommandDestroyQueryVulkan_t */
	void OnEndQuery(class CRenderThreadVulkan *, const class CommandEndQueryVulkan_t  &); /* linkage=_ZN19CRenderThreadVulkan10OnEndQueryERK23CommandEndQueryVulkan_t */
	void OnBlockForQuery(class CRenderThreadVulkan *, const class CommandBlockForQueryVulkan_t  &); /* linkage=_ZN19CRenderThreadVulkan15OnBlockForQueryERK28CommandBlockForQueryVulkan_t */
	void OnReadPixels(class CRenderThreadVulkan *, const class CommandReadTexturePixelsVulkan_t  &); /* linkage=_ZN19CRenderThreadVulkan12OnReadPixelsERK32CommandReadTexturePixelsVulkan_t */
	void OnReadBuffer(class CRenderThreadVulkan *, const class CommandReadBufferVulkan_t  &); /* linkage=_ZN19CRenderThreadVulkan12OnReadBufferERK25CommandReadBufferVulkan_t */
	void OnServiceFallbackTextureQueue(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan29OnServiceFallbackTextureQueueEv */
	/* <b92baa> vulkan/renderthreadvulkan.cpp:2079 */
	void OnSetSteamVrCompositorTexture(class CRenderThreadVulkan *, const class CommandSetSteamVrCompositorTexture_t  &); /* linkage=_ZN19CRenderThreadVulkan29OnSetSteamVrCompositorTextureERK36CommandSetSteamVrCompositorTexture_t */
	/* <b8da60> vulkan/renderthreadvulkan.cpp:625 */
	void OnBeginSubmittingViews(class CRenderThreadVulkan *, const class CommandBeginSubmittingViews_t  &); /* linkage=_ZN19CRenderThreadVulkan22OnBeginSubmittingViewsERK29CommandBeginSubmittingViews_t */
	void OnUpdateSwappedImageLayout(class CRenderThreadVulkan *, const class CommandUpdateSwappedImageLayout_t  &); /* linkage=_ZN19CRenderThreadVulkan26OnUpdateSwappedImageLayoutERK33CommandUpdateSwappedImageLayout_t */
	/* <b8dad6> vulkan/renderthreadvulkan.cpp:1206 */
	void UpdatePipelineStatsBegin(class CRenderThreadVulkan *, VkSwapchainKHR, const char  *); /* linkage=_ZN19CRenderThreadVulkan24UpdatePipelineStatsBeginEP16VkSwapchainKHR_TPKc */
	/* <b8db3e> vulkan/renderthreadvulkan.cpp:1217 */
	void UpdatePipelineStatsEnd(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan22UpdatePipelineStatsEndEv */
	void FrameSync(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan9FrameSyncEv */
	void ProcessAsyncReadRequests(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan24ProcessAsyncReadRequestsEv */
	void UpdateDynamicBuffers(class CRenderThreadVulkan *, class CCommandStream *); /* linkage=_ZN19CRenderThreadVulkan20UpdateDynamicBuffersEP14CCommandStream */
	/* <b92b41> vulkan/renderthreadvulkan.cpp:1844 */
	void ExecuteQueuedCommandBuffers(class CRenderThreadVulkan *, RenderSemaphoreHandle_t); /* linkage=_ZN19CRenderThreadVulkan27ExecuteQueuedCommandBuffersEP25RenderSemaphoreHandle_t__ */
	/* <b8db7d> vulkan/renderthreadvulkan.cpp:2100 */
	void CreateTimestampResources(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan24CreateTimestampResourcesEv */
	void DestroyTimestampResources(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan25DestroyTimestampResourcesEv */
	void SubmitWorkFinishedTimestamp(class CRenderThreadVulkan *, const class CSwapChainVulkan  *); /* linkage=_ZN19CRenderThreadVulkan27SubmitWorkFinishedTimestampEPK16CSwapChainVulkan */
	VkSemaphore GetSemaphoreAndMarkQueued(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan25GetSemaphoreAndMarkQueuedEv */
	void MarkQueuedSemaphoresAsWaitedOn(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan30MarkQueuedSemaphoresAsWaitedOnEv */
	VkFence GetVulkanFenceFromPool(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan22GetVulkanFenceFromPoolEv */
	void GPUCrash(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan8GPUCrashEv */
	/* <b8fb13> vulkan/renderthreadvulkan.cpp:1716 */
	void DumpDiagnosticCheckpoints(class CRenderThreadVulkan *, VkQueue); /* linkage=_ZN19CRenderThreadVulkan25DumpDiagnosticCheckpointsEP9VkQueue_T */
	bool IsRenderDocActive(class CRenderThreadVulkan *); /* linkage=_ZN19CRenderThreadVulkan17IsRenderDocActiveEv */
} __attribute__((__aligned__(16)));

// <009A5F62> vulkan/renderthreadvulkan.h:185
void CRenderThreadVulkan::CRenderThreadVulkan(CRenderDeviceVulkan* pDevice)
{
} /* size: 0 */

// <009A5F0A> vulkan/renderthreadvulkan.h:186
void CRenderThreadVulkan::~CRenderThreadVulkan()
{
} /* size: 0 */

// <00B16526> vulkan/renderthreadvulkan.h:192
inline void CRenderThreadVulkan::GetQueueMutex()
{
} /* size: 0 */

// <00A54642> vulkan/renderthreadvulkan.h:197
inline void CRenderThreadVulkan::SetFramePacingFPS(double flFps)
{
} /* size: 0 */

// <00B37362> vulkan/renderthreadvulkan.h:350
// member functions: 10
// member variables: 2
// class size: 24
class CVulkanPooledFenceObject : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CVulkanPooledFenceObject(CVulkanPooledFenceObject* , const CVulkanPooledFenceObject& );
	/* vulkan/renderthreadvulkan.h:353 */
	void CVulkanPooledFenceObject(CVulkanPooledFenceObject* , VkFence);
	/* vulkan/renderthreadvulkan.cpp:2067 */
	virtual void ~CVulkanPooledFenceObject(CVulkanPooledFenceObject* );
	/* vulkan/renderthreadvulkan.h:362 */
	VkFence Get(CVulkanPooledFenceObject* );
private:
	/* vulkan/renderthreadvulkan.h:365 */
	void CVulkanPooledFenceObject(CVulkanPooledFenceObject* );
	VkFence m_pFence; /* 16 8 */
	VkFence Get(class CVulkanPooledFenceObject *); /* linkage=_ZN24CVulkanPooledFenceObject3GetEv */
	void CVulkanPooledFenceObject(class CVulkanPooledFenceObject *, const class CVulkanPooledFenceObject  &); /* linkage=_ZN24CVulkanPooledFenceObjectC4ERKS_ */
	void CVulkanPooledFenceObject(class CVulkanPooledFenceObject *, VkFence); /* linkage=_ZN24CVulkanPooledFenceObjectC4EP9VkFence_T */
	virtual void ~CVulkanPooledFenceObject(class CVulkanPooledFenceObject *); /* linkage=_ZN24CVulkanPooledFenceObjectD4Ev */
	void CVulkanPooledFenceObject(class CVulkanPooledFenceObject *); /* linkage=_ZN24CVulkanPooledFenceObjectC4Ev */
};

// <00B8B6E9> vulkan/renderthreadvulkan.h:353
void CVulkanPooledFenceObject::CVulkanPooledFenceObject(VkFence pFence)
{
} /* size: 0 */

// <00B8B6C3> vulkan/renderthreadvulkan.h:353
inline void CVulkanPooledFenceObject::CVulkanPooledFenceObject(VkFence pFence)
{
} /* size: 0 */

// <00B8B6AA> vulkan/renderthreadvulkan.h:362
inline void CVulkanPooledFenceObject::Get()
{
} /* size: 0 */

