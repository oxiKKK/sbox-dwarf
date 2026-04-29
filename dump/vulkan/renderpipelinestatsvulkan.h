
//
// vulkan/renderpipelinestatsvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 15
//	classes: 2
//

// <00820A62> vulkan/renderpipelinestatsvulkan.h:23
// member functions: 57
// member variables: 16
// class size: 656
class CRenderPipelineStatsVulkan {
	/* vulkan/renderpipelinestatsvulkan.h:60 */
	struct SampleQueries_t {
		VulkanQuery_t * m_pStartTimestampQuery; /* 0 8 */
		VulkanQuery_t * m_pEndTimestampQuery; /* 8 8 */
		VulkanQuery_t * m_pPipelineStatsQuery; /* 16 8 */
		uint32_t m_nSubmitIndex; /* 24 4 */
	};
	/* vulkan/renderpipelinestatsvulkan.h:82 */
	class CVulkanQueryPool<CThreadMutex> {
		/* vulkan/renderpipelinestatsvulkan.h:85 */
		void ~CVulkanQueryPool(CVulkanQueryPool<CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:87 */
		bool Init(CVulkanQueryPool<CThreadMutex>* , VkDevice, VkQueryType, uint);
		/* vulkan/renderpipelinestatsvulkan.h:88 */
		void Deinit(CVulkanQueryPool<CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:90 */
		VulkanQuery_t* Alloc(CVulkanQueryPool<CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:91 */
		void Release(CVulkanQueryPool<CThreadMutex>* , VulkanQuery_t* );
	private:
		VkDevice m_pDeviceVulkan; /* 0 8 */
		VkQueryType m_nType; /* 8 4 */
		CUtlLinkedList<VulkanQueryPool_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t*, short unsigned int>, short unsigned int> > m_VulkanQueryPools; /* 16 40 */
		/* vulkan/renderpipelinestatsvulkan.h:101 */
		typedef struct CUtlVector<VulkanQuery_t*, CUtlMemory<VulkanQuery_t*, int> > VulkanQueryVector_t;
		VulkanQueryVector_t m_Pool; /* 56 32 */
		CThreadMutex m_Mutex; /* 88 72 */
	};
	/* vulkan/renderpipelinestatsvulkan.h:112 */
	struct OutstandingFrame_t {
		uint m_nPresentCount; /* 0 4 */
		uintp m_nSwapChainID; /* 8 8 */
		char m_szSwapChainName[64]; /* 16 64 */
		double m_flOneOverCounterFreq; /* 80 8 */
		SampleQueryVector_t * m_pQueries; /* 88 8 */
		RenderPipelineSampleVector_t * m_pSamples; /* 96 8 */
		uint m_nUniqueBoundVBCount; /* 104 4 */
		uint m_nBoundVBMemory; /* 108 4 */
		uint m_nUniqueBoundIBCount; /* 112 4 */
		uint m_nBoundIBMemory; /* 116 4 */
		uint m_nUniqueBoundCBCount; /* 120 4 */
		uint m_nBoundCBMemory; /* 124 4 */
		uint m_nUniqueBoundTextureCount; /* 128 4 */
		uint m_nBoundTextureMemory; /* 132 4 */
		uint m_nFallbackTexturePoolSize; /* 136 4 */
		uint m_nBoundTextureSizeHistogram[16]; /* 140 64 */
		bool m_bCompleted; /* 204 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderpipelinestatsvulkan.h:110 */
	typedef struct CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> > SampleQueryVector_t;
	/* vulkan/renderpipelinestatsvulkan.h:143 */
	class CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex> {
		/* vulkan/renderpipelinestatsvulkan.h:146 */
		void ~CVectorPool(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:147 */
		void Clear(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:148 */
		CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* Alloc(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:149 */
		void Release(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* , CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* );
	private:
		CThreadMutex m_Mutex; /* 0 72 */
		CUtlVector<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >*, CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >*, int> > m_Pool; /* 72 32 */
	};
	/* vulkan/renderpipelinestatsvulkan.h:143 */
	class CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >, 32, CThreadNullMutex> {
		/* vulkan/renderpipelinestatsvulkan.h:146 */
		void ~CVectorPool(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_);
		/* vulkan/renderpipelinestatsvulkan.h:147 */
		void Clear(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_);
		/* vulkan/renderpipelinestatsvulkan.h:148 */
		CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* Alloc(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_);
		/* vulkan/renderpipelinestatsvulkan.h:149 */
		void Release(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_, CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* );
	private:
		CThreadNullMutex m_Mutex; /* 0 0 */
		CUtlVector<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >*, CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >*, int> > m_Pool; /* 8 32 */
	};
	/* vulkan/renderpipelinestatsvulkan.h:26 */
	void CRenderPipelineStatsVulkan(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:27 */
	void ~CRenderPipelineStatsVulkan(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:29 */
	bool Init(CRenderPipelineStatsVulkan* , VkDevice, const VkPhysicalDeviceLimits& , const VkPhysicalDeviceFeatures& );
	/* vulkan/renderpipelinestatsvulkan.h:30 */
	void Deinit(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:32 */
	bool IsInitialized(const CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:34 */
	void BeginCommandListCreation(CRenderPipelineStatsVulkan* , VulkanCommandBuffer_t* , RenderPipelineStatsCommandListQueries_t& );
	/* vulkan/renderpipelinestatsvulkan.h:35 */
	void CancelCommandListCreation(CRenderPipelineStatsVulkan* , RenderPipelineStatsCommandListQueries_t& );
	/* vulkan/renderpipelinestatsvulkan.h:36 */
	void EndCommandListCreation(CRenderPipelineStatsVulkan* , VulkanCommandBuffer_t* , RenderPipelineStatsCommandListQueries_t& );
	/* vulkan/renderpipelinestatsvulkan.h:38 */
	void BeginCommandListSubmission(CRenderPipelineStatsVulkan* , const CRenderPipelineStats* , const CUtlVector<BoundResourceRecord_t, CUtlMemory<BoundResourceRecord_t, int> >* , const char* , const RenderPipelineStatsCommandListQueries_t& , VulkanQuery_t* , uint32_t);
	/* vulkan/renderpipelinestatsvulkan.h:40 */
	bool EndCommandListSubmission(CRenderPipelineStatsVulkan* , VkCommandBuffer, uint32_t);
	/* vulkan/renderpipelinestatsvulkan.h:42 */
	void SubmissionThreadIsWaitingForWork(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:44 */
	void BeginPresent(CRenderPipelineStatsVulkan* , uintp, const char* );
	/* vulkan/renderpipelinestatsvulkan.h:45 */
	void EndPresent(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:49 */
	bool GetFrameStats(CRenderPipelineStatsVulkan* , CRenderPipelineFrameStats& );
	/* vulkan/renderpipelinestatsvulkan.h:51 */
	void ReleaseFrameStats(CRenderPipelineStatsVulkan* , CRenderPipelineFrameStats& );
	/* vulkan/renderpipelinestatsvulkan.h:53 */
	VkQueryPipelineStatisticFlags GetActiveVulkanPipelineStats(const CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:56 */
	int SplitSampleName(const char* , char** , int, int);
private:
	/* vulkan/renderpipelinestatsvulkan.h:68 */
	void BeginFrame(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:69 */
	void ServiceOutstandingQueries(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:70 */
	void ReleaseOutstandingFrame(CRenderPipelineStatsVulkan* , uint);
	/* vulkan/renderpipelinestatsvulkan.h:71 */
	void CopyQueryResultsToBuffer(CRenderPipelineStatsVulkan* , VkCommandBuffer, SampleQueries_t* , uint32_t);
	/* vulkan/renderpipelinestatsvulkan.h:72 */
	void GetQueryResult(CRenderPipelineStatsVulkan* , VulkanQuery_t* , VkDeviceSize, void* , uint32_t);
	VkDevice m_pDeviceVulkan; /* 0 8 */
	CVulkanQueryPool<CThreadMutex> m_TimestampQueryPool; /* 8 160 */
	CVulkanQueryPool<CThreadMutex> m_PipelineStatsQueryPool; /* 168 160 */
	CUtlVector<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int> > m_OutstandingFrames; /* 328 32 */
	int32_t m_nFirstOutstandingSampleIndex; /* 360 4 */
	uint32_t m_nPresentCounter; /* 364 4 */
	CThreadMutex m_CompletedFramesMutex; /* 368 72 */
	CUtlVector<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> > m_CompletedFrames; /* 440 32 */
	CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex> m_RenderPipelineSampleVectorPool; /* 472 104 */
	CCycleCount m_CycleCount; /* 576 8 */
	CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >, 32, CThreadNullMutex> m_SampleQueryVectorPool; /* 584 40 */
	uint64 m_nDriverCounterFreq; /* 624 8 */
	uint64 m_nCounterFreq; /* 632 8 */
	double m_flOneOverCounterFreq; /* 640 8 */
	bool m_bSubmittedSinceLastFlush; /* 648 1 */
	bool m_bSupportsPipelineStatistics; /* 649 1 */
	void CRenderPipelineStatsVulkan(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkanC4Ev */
	void ~CRenderPipelineStatsVulkan(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkanD4Ev */
	bool Init(class CRenderPipelineStatsVulkan *, VkDevice, const VkPhysicalDeviceLimits  &, const VkPhysicalDeviceFeatures  &); /* linkage=_ZN26CRenderPipelineStatsVulkan4InitEP10VkDevice_TRK22VkPhysicalDeviceLimitsRK24VkPhysicalDeviceFeatures */
	/* <b17bc9> vulkan/renderpipelinestatsvulkan.cpp:306 */
	void Deinit(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan6DeinitEv */
	bool IsInitialized(const class CRenderPipelineStatsVulkan  *); /* linkage=_ZNK26CRenderPipelineStatsVulkan13IsInitializedEv */
	void BeginCommandListCreation(class CRenderPipelineStatsVulkan *, class VulkanCommandBuffer_t *, class RenderPipelineStatsCommandListQueries_t &); /* linkage=_ZN26CRenderPipelineStatsVulkan24BeginCommandListCreationEP21VulkanCommandBuffer_tR39RenderPipelineStatsCommandListQueries_t */
	void CancelCommandListCreation(class CRenderPipelineStatsVulkan *, class RenderPipelineStatsCommandListQueries_t &); /* linkage=_ZN26CRenderPipelineStatsVulkan25CancelCommandListCreationER39RenderPipelineStatsCommandListQueries_t */
	void EndCommandListCreation(class CRenderPipelineStatsVulkan *, class VulkanCommandBuffer_t *, class RenderPipelineStatsCommandListQueries_t &); /* linkage=_ZN26CRenderPipelineStatsVulkan22EndCommandListCreationEP21VulkanCommandBuffer_tR39RenderPipelineStatsCommandListQueries_t */
	void BeginCommandListSubmission(class CRenderPipelineStatsVulkan *, const class CRenderPipelineStats  *, const class CUtlVector<BoundResourceRecord_t, CUtlMemory<BoundResourceRecord_t, int> >  *, const char  *, const class RenderPipelineStatsCommandListQueries_t  &, class VulkanQuery_t *, uint32_t); /* linkage=_ZN26CRenderPipelineStatsVulkan26BeginCommandListSubmissionEPK20CRenderPipelineStatsPK10CUtlVectorI21BoundResourceRecord_t10CUtlMemoryIS4_iEEPKcRK39RenderPipelineStatsCommandListQueries_tP13VulkanQuery_tj */
	bool EndCommandListSubmission(class CRenderPipelineStatsVulkan *, VkCommandBuffer, uint32_t); /* linkage=_ZN26CRenderPipelineStatsVulkan24EndCommandListSubmissionEP17VkCommandBuffer_Tj */
	void SubmissionThreadIsWaitingForWork(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan32SubmissionThreadIsWaitingForWorkEv */
	void BeginPresent(class CRenderPipelineStatsVulkan *, uintp, const char  *); /* linkage=_ZN26CRenderPipelineStatsVulkan12BeginPresentEyPKc */
	void EndPresent(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan10EndPresentEv */
	bool GetFrameStats(class CRenderPipelineStatsVulkan *, class CRenderPipelineFrameStats &); /* linkage=_ZN26CRenderPipelineStatsVulkan13GetFrameStatsER25CRenderPipelineFrameStats */
	void ReleaseFrameStats(class CRenderPipelineStatsVulkan *, class CRenderPipelineFrameStats &); /* linkage=_ZN26CRenderPipelineStatsVulkan17ReleaseFrameStatsER25CRenderPipelineFrameStats */
	VkQueryPipelineStatisticFlags GetActiveVulkanPipelineStats(const class CRenderPipelineStatsVulkan  *); /* linkage=_ZNK26CRenderPipelineStatsVulkan28GetActiveVulkanPipelineStatsEv */
	int SplitSampleName(const char  *, char * *, int, int); /* linkage=_ZN26CRenderPipelineStatsVulkan15SplitSampleNameEPKcPPcii */
	void BeginFrame(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan10BeginFrameEv */
	void ServiceOutstandingQueries(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan25ServiceOutstandingQueriesEv */
	void ReleaseOutstandingFrame(class CRenderPipelineStatsVulkan *, uint); /* linkage=_ZN26CRenderPipelineStatsVulkan23ReleaseOutstandingFrameEj */
	void CopyQueryResultsToBuffer(class CRenderPipelineStatsVulkan *, VkCommandBuffer, class SampleQueries_t *, uint32_t); /* linkage=_ZN26CRenderPipelineStatsVulkan24CopyQueryResultsToBufferEP17VkCommandBuffer_TPNS_15SampleQueries_tEj */
	void GetQueryResult(class CRenderPipelineStatsVulkan *, class VulkanQuery_t *, VkDeviceSize, void *, uint32_t); /* linkage=_ZN26CRenderPipelineStatsVulkan14GetQueryResultEP13VulkanQuery_tmPvj */
};

// <00AF2763> vulkan/renderpipelinestatsvulkan.h:23
// member functions: 60
// member variables: 16
// class size: 656
class CRenderPipelineStatsVulkan {
	/* vulkan/renderpipelinestatsvulkan.h:60 */
	struct SampleQueries_t {
		VulkanQuery_t * m_pStartTimestampQuery; /* 0 8 */
		VulkanQuery_t * m_pEndTimestampQuery; /* 8 8 */
		VulkanQuery_t * m_pPipelineStatsQuery; /* 16 8 */
		uint32_t m_nSubmitIndex; /* 24 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderpipelinestatsvulkan.h:82 */
	class CVulkanQueryPool<CThreadMutex> {
		/* vulkan/renderpipelinestatsvulkan.h:85 */
		void ~CVulkanQueryPool(CVulkanQueryPool<CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:87 */
		bool Init(CVulkanQueryPool<CThreadMutex>* , VkDevice, VkQueryType, uint);
		/* vulkan/renderpipelinestatsvulkan.h:88 */
		void Deinit(CVulkanQueryPool<CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:90 */
		VulkanQuery_t* Alloc(CVulkanQueryPool<CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:91 */
		void Release(CVulkanQueryPool<CThreadMutex>* , VulkanQuery_t* );
	private:
		VkDevice m_pDeviceVulkan; /* 0 8 */
		VkQueryType m_nType; /* 8 4 */
		CUtlLinkedList<VulkanQueryPool_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t*, short unsigned int>, short unsigned int> > m_VulkanQueryPools; /* 16 40 */
		/* vulkan/renderpipelinestatsvulkan.h:101 */
		typedef struct CUtlVector<VulkanQuery_t*, CUtlMemory<VulkanQuery_t*, int> > VulkanQueryVector_t;
		VulkanQueryVector_t m_Pool; /* 56 32 */
		CThreadMutex m_Mutex; /* 88 72 */
		void CVulkanQueryPool(CVulkanQueryPool<CThreadMutex>* );
	};
	/* vulkan/renderpipelinestatsvulkan.h:112 */
	struct OutstandingFrame_t {
		uint m_nPresentCount; /* 0 4 */
		uintp m_nSwapChainID; /* 8 8 */
		char m_szSwapChainName[64]; /* 16 64 */
		double m_flOneOverCounterFreq; /* 80 8 */
		SampleQueryVector_t * m_pQueries; /* 88 8 */
		RenderPipelineSampleVector_t * m_pSamples; /* 96 8 */
		uint m_nUniqueBoundVBCount; /* 104 4 */
		uint m_nBoundVBMemory; /* 108 4 */
		uint m_nUniqueBoundIBCount; /* 112 4 */
		uint m_nBoundIBMemory; /* 116 4 */
		uint m_nUniqueBoundCBCount; /* 120 4 */
		uint m_nBoundCBMemory; /* 124 4 */
		uint m_nUniqueBoundTextureCount; /* 128 4 */
		uint m_nBoundTextureMemory; /* 132 4 */
		uint m_nFallbackTexturePoolSize; /* 136 4 */
		uint m_nBoundTextureSizeHistogram[16]; /* 140 64 */
		bool m_bCompleted; /* 204 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/renderpipelinestatsvulkan.h:110 */
	typedef struct CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> > SampleQueryVector_t;
	/* vulkan/renderpipelinestatsvulkan.h:143 */
	class CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex> {
		/* vulkan/renderpipelinestatsvulkan.h:146 */
		void ~CVectorPool(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:147 */
		void Clear(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:148 */
		CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* Alloc(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* );
		/* vulkan/renderpipelinestatsvulkan.h:149 */
		void Release(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* , CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* );
	private:
		CThreadMutex m_Mutex; /* 0 72 */
		CUtlVector<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >*, CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >*, int> > m_Pool; /* 72 32 */
		void CVectorPool(CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>* );
	};
	/* vulkan/renderpipelinestatsvulkan.h:143 */
	class CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >, 32, CThreadNullMutex> {
		/* vulkan/renderpipelinestatsvulkan.h:146 */
		void ~CVectorPool(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_);
		/* vulkan/renderpipelinestatsvulkan.h:147 */
		void Clear(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_);
		/* vulkan/renderpipelinestatsvulkan.h:148 */
		CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* Alloc(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_);
		/* vulkan/renderpipelinestatsvulkan.h:149 */
		void Release(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_, CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* );
	private:
		CThreadNullMutex m_Mutex; /* 0 0 */
		CUtlVector<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >*, CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >*, int> > m_Pool; /* 8 32 */
		void CVectorPool(CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_);
	};
	/* vulkan/renderpipelinestatsvulkan.h:26 */
	void CRenderPipelineStatsVulkan(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:27 */
	void ~CRenderPipelineStatsVulkan(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:29 */
	bool Init(CRenderPipelineStatsVulkan* , VkDevice, const VkPhysicalDeviceLimits& , const VkPhysicalDeviceFeatures& );
	/* vulkan/renderpipelinestatsvulkan.h:30 */
	void Deinit(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:32 */
	bool IsInitialized(const CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:34 */
	void BeginCommandListCreation(CRenderPipelineStatsVulkan* , VulkanCommandBuffer_t* , RenderPipelineStatsCommandListQueries_t& );
	/* vulkan/renderpipelinestatsvulkan.h:35 */
	void CancelCommandListCreation(CRenderPipelineStatsVulkan* , RenderPipelineStatsCommandListQueries_t& );
	/* vulkan/renderpipelinestatsvulkan.h:36 */
	void EndCommandListCreation(CRenderPipelineStatsVulkan* , VulkanCommandBuffer_t* , RenderPipelineStatsCommandListQueries_t& );
	/* vulkan/renderpipelinestatsvulkan.h:38 */
	void BeginCommandListSubmission(CRenderPipelineStatsVulkan* , const CRenderPipelineStats* , const CUtlVector<BoundResourceRecord_t, CUtlMemory<BoundResourceRecord_t, int> >* , const char* , const RenderPipelineStatsCommandListQueries_t& , VulkanQuery_t* , uint32_t);
	/* vulkan/renderpipelinestatsvulkan.h:40 */
	bool EndCommandListSubmission(CRenderPipelineStatsVulkan* , VkCommandBuffer, uint32_t);
	/* vulkan/renderpipelinestatsvulkan.h:42 */
	void SubmissionThreadIsWaitingForWork(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:44 */
	void BeginPresent(CRenderPipelineStatsVulkan* , uintp, const char* );
	/* vulkan/renderpipelinestatsvulkan.h:45 */
	void EndPresent(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:49 */
	bool GetFrameStats(CRenderPipelineStatsVulkan* , CRenderPipelineFrameStats& );
	/* vulkan/renderpipelinestatsvulkan.h:51 */
	void ReleaseFrameStats(CRenderPipelineStatsVulkan* , CRenderPipelineFrameStats& );
	/* vulkan/renderpipelinestatsvulkan.h:53 */
	VkQueryPipelineStatisticFlags GetActiveVulkanPipelineStats(const CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:56 */
	int SplitSampleName(const char* , char** , int, int);
private:
	/* vulkan/renderpipelinestatsvulkan.h:68 */
	void BeginFrame(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:69 */
	void ServiceOutstandingQueries(CRenderPipelineStatsVulkan* );
	/* vulkan/renderpipelinestatsvulkan.h:70 */
	void ReleaseOutstandingFrame(CRenderPipelineStatsVulkan* , uint);
	/* vulkan/renderpipelinestatsvulkan.h:71 */
	void CopyQueryResultsToBuffer(CRenderPipelineStatsVulkan* , VkCommandBuffer, SampleQueries_t* , uint32_t);
	/* vulkan/renderpipelinestatsvulkan.h:72 */
	void GetQueryResult(CRenderPipelineStatsVulkan* , VulkanQuery_t* , VkDeviceSize, void* , uint32_t);
	VkDevice m_pDeviceVulkan; /* 0 8 */
	CVulkanQueryPool<CThreadMutex> m_TimestampQueryPool; /* 8 160 */
	CVulkanQueryPool<CThreadMutex> m_PipelineStatsQueryPool; /* 168 160 */
	CUtlVector<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int> > m_OutstandingFrames; /* 328 32 */
	int32_t m_nFirstOutstandingSampleIndex; /* 360 4 */
	uint32_t m_nPresentCounter; /* 364 4 */
	CThreadMutex m_CompletedFramesMutex; /* 368 72 */
	CUtlVector<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> > m_CompletedFrames; /* 440 32 */
	CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex> m_RenderPipelineSampleVectorPool; /* 472 104 */
	CCycleCount m_CycleCount; /* 576 8 */
	CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >, 32, CThreadNullMutex> m_SampleQueryVectorPool; /* 584 40 */
	uint64 m_nDriverCounterFreq; /* 624 8 */
	uint64 m_nCounterFreq; /* 632 8 */
	double m_flOneOverCounterFreq; /* 640 8 */
	bool m_bSubmittedSinceLastFlush; /* 648 1 */
	bool m_bSupportsPipelineStatistics; /* 649 1 */
	void CRenderPipelineStatsVulkan(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkanC4Ev */
	void ~CRenderPipelineStatsVulkan(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkanD4Ev */
	bool Init(class CRenderPipelineStatsVulkan *, VkDevice, const VkPhysicalDeviceLimits  &, const VkPhysicalDeviceFeatures  &); /* linkage=_ZN26CRenderPipelineStatsVulkan4InitEP10VkDevice_TRK22VkPhysicalDeviceLimitsRK24VkPhysicalDeviceFeatures */
	/* <b17bc9> vulkan/renderpipelinestatsvulkan.cpp:306 */
	void Deinit(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan6DeinitEv */
	bool IsInitialized(const class CRenderPipelineStatsVulkan  *); /* linkage=_ZNK26CRenderPipelineStatsVulkan13IsInitializedEv */
	void BeginCommandListCreation(class CRenderPipelineStatsVulkan *, class VulkanCommandBuffer_t *, class RenderPipelineStatsCommandListQueries_t &); /* linkage=_ZN26CRenderPipelineStatsVulkan24BeginCommandListCreationEP21VulkanCommandBuffer_tR39RenderPipelineStatsCommandListQueries_t */
	void CancelCommandListCreation(class CRenderPipelineStatsVulkan *, class RenderPipelineStatsCommandListQueries_t &); /* linkage=_ZN26CRenderPipelineStatsVulkan25CancelCommandListCreationER39RenderPipelineStatsCommandListQueries_t */
	void EndCommandListCreation(class CRenderPipelineStatsVulkan *, class VulkanCommandBuffer_t *, class RenderPipelineStatsCommandListQueries_t &); /* linkage=_ZN26CRenderPipelineStatsVulkan22EndCommandListCreationEP21VulkanCommandBuffer_tR39RenderPipelineStatsCommandListQueries_t */
	void BeginCommandListSubmission(class CRenderPipelineStatsVulkan *, const class CRenderPipelineStats  *, const class CUtlVector<BoundResourceRecord_t, CUtlMemory<BoundResourceRecord_t, int> >  *, const char  *, const class RenderPipelineStatsCommandListQueries_t  &, class VulkanQuery_t *, uint32_t); /* linkage=_ZN26CRenderPipelineStatsVulkan26BeginCommandListSubmissionEPK20CRenderPipelineStatsPK10CUtlVectorI21BoundResourceRecord_t10CUtlMemoryIS4_iEEPKcRK39RenderPipelineStatsCommandListQueries_tP13VulkanQuery_tj */
	bool EndCommandListSubmission(class CRenderPipelineStatsVulkan *, VkCommandBuffer, uint32_t); /* linkage=_ZN26CRenderPipelineStatsVulkan24EndCommandListSubmissionEP17VkCommandBuffer_Tj */
	void SubmissionThreadIsWaitingForWork(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan32SubmissionThreadIsWaitingForWorkEv */
	void BeginPresent(class CRenderPipelineStatsVulkan *, uintp, const char  *); /* linkage=_ZN26CRenderPipelineStatsVulkan12BeginPresentEyPKc */
	void EndPresent(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan10EndPresentEv */
	bool GetFrameStats(class CRenderPipelineStatsVulkan *, class CRenderPipelineFrameStats &); /* linkage=_ZN26CRenderPipelineStatsVulkan13GetFrameStatsER25CRenderPipelineFrameStats */
	void ReleaseFrameStats(class CRenderPipelineStatsVulkan *, class CRenderPipelineFrameStats &); /* linkage=_ZN26CRenderPipelineStatsVulkan17ReleaseFrameStatsER25CRenderPipelineFrameStats */
	VkQueryPipelineStatisticFlags GetActiveVulkanPipelineStats(const class CRenderPipelineStatsVulkan  *); /* linkage=_ZNK26CRenderPipelineStatsVulkan28GetActiveVulkanPipelineStatsEv */
	int SplitSampleName(const char  *, char * *, int, int); /* linkage=_ZN26CRenderPipelineStatsVulkan15SplitSampleNameEPKcPPcii */
	void BeginFrame(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan10BeginFrameEv */
	void ServiceOutstandingQueries(class CRenderPipelineStatsVulkan *); /* linkage=_ZN26CRenderPipelineStatsVulkan25ServiceOutstandingQueriesEv */
	void ReleaseOutstandingFrame(class CRenderPipelineStatsVulkan *, uint); /* linkage=_ZN26CRenderPipelineStatsVulkan23ReleaseOutstandingFrameEj */
	void CopyQueryResultsToBuffer(class CRenderPipelineStatsVulkan *, VkCommandBuffer, class SampleQueries_t *, uint32_t); /* linkage=_ZN26CRenderPipelineStatsVulkan24CopyQueryResultsToBufferEP17VkCommandBuffer_TPNS_15SampleQueries_tEj */
	void GetQueryResult(class CRenderPipelineStatsVulkan *, class VulkanQuery_t *, VkDeviceSize, void *, uint32_t); /* linkage=_ZN26CRenderPipelineStatsVulkan14GetQueryResultEP13VulkanQuery_tmPvj */
};

// <009A6185> vulkan/renderpipelinestatsvulkan.h:26
void CRenderPipelineStatsVulkan::CRenderPipelineStatsVulkan()
{
} /* size: 0 */

// <009A656F> vulkan/renderpipelinestatsvulkan.h:27
void CRenderPipelineStatsVulkan::~CRenderPipelineStatsVulkan()
{
} /* size: 0 */

// <00B1653F> vulkan/renderpipelinestatsvulkan.h:32
inline void CRenderPipelineStatsVulkan::IsInitialized()
{
} /* size: 0 */

// <00B164C2> vulkan/renderpipelinestatsvulkan.h:82
void CVulkanQueryPool<CThreadMutex>::CVulkanQueryPool()
{
} /* size: 0 */

// <00B164A5> vulkan/renderpipelinestatsvulkan.h:82
inline void CVulkanQueryPool<CThreadMutex>::CVulkanQueryPool()
{
} /* size: 0 */

// <00B0BDE5> vulkan/renderpipelinestatsvulkan.h:85
void CVulkanQueryPool<CThreadMutex>::~CVulkanQueryPool()
{
} /* size: 0 */

// <00B0BDCC> vulkan/renderpipelinestatsvulkan.h:85
inline void CVulkanQueryPool<CThreadMutex>::~CVulkanQueryPool()
{
} /* size: 0 */

// <00B163F2> vulkan/renderpipelinestatsvulkan.h:143
void CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::CVectorPool()
{
} /* size: 0 */

// <00B163D5> vulkan/renderpipelinestatsvulkan.h:143
inline void CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::CVectorPool()
{
} /* size: 0 */

// <00B1638A> vulkan/renderpipelinestatsvulkan.h:143
void CVectorPool(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this)
{
} /* size: 0 */

// <00B1636D> vulkan/renderpipelinestatsvulkan.h:143
inline void CVectorPool(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this)
{
} /* size: 0 */

// <00B0BC95> vulkan/renderpipelinestatsvulkan.h:146
void CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::~CVectorPool()
{
} /* size: 0 */

// <00B0BC7C> vulkan/renderpipelinestatsvulkan.h:146
inline void CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::~CVectorPool()
{
} /* size: 0 */

// <00B0BC05> vulkan/renderpipelinestatsvulkan.h:146
void ~CVectorPool(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this)
{
} /* size: 0 */

// <00B0BBEC> vulkan/renderpipelinestatsvulkan.h:146
inline void ~CVectorPool(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this)
{
} /* size: 0 */

