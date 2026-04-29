
//
// vulkan/pipelinecachemgrvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 62
//	class: 1
//

// <0061933A> vulkan/pipelinecachemgrvulkan.cpp:34
// member functions: 70
// member variables: 21
// vtable entries: 12
// class size: 2,432
class CFossilizeStateCreator : public StateCreatorInterface {
	/* vulkan/pipelinecachemgrvulkan.cpp:41 */
	struct FossilizeDescriptorSetLayout_t {
		int32_t m_nNumLayoutBindings; /* 0 4 */
		VkDescriptorSetLayoutBinding * m_pLayoutBindings; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/pipelinecachemgrvulkan.cpp:50 */
	struct FossilizePipelineLayout_t {
		const class FossilizeDescriptorSetLayout_t * * m_ppDescriptorSetLayouts; /* 0 8 */
		PipelineLayoutCreateInfo_t m_pipelineLayoutCreateInfo; /* 8 168 */
		void ~FossilizePipelineLayout_t(FossilizePipelineLayout_t* );
		void FossilizePipelineLayout_t(FossilizePipelineLayout_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/pipelinecachemgrvulkan.cpp:60 */
	struct FossilizeRenderPass_t {
		uint32_t m_nSubPassCount; /* 0 4 */
		VulkanFramebufferState_t * m_pFrameBufferStates; /* 8 8 */
		VkRenderPass m_pExplicitRenderPass; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/pipelinecachemgrvulkan.cpp:76 */
	struct FossilizeGraphicsPipeline_t {
		PipelineCreateInfo_t m_pipelineCreateInfo; /* 0 272 */
		FossilizePipelineLayout_t * m_pPipelineLayout; /* 272 8 */
		FossilizeRenderPass_t * m_pFossilizeRenderPass; /* 280 8 */
		int32_t m_nDynamicColorAttachmentCount; /* 288 4 */
		VkFormat m_nDynamicColorAttachmentFormats[4]; /* 292 16 */
		VkFormat m_nDynamicDepthAttachmentFormat; /* 308 4 */
		VkFormat m_nDynamicStencilAttachmentFormat; /* 312 4 */
		void FossilizeGraphicsPipeline_t(FossilizeGraphicsPipeline_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/pipelinecachemgrvulkan.cpp:93 */
	struct FossilizeComputePipeline_t {
		PipelineCreateInfo_t m_pipelineCreateInfo; /* 0 272 */
		FossilizePipelineLayout_t * m_pPipelineLayout; /* 272 8 */
		void FossilizeComputePipeline_t(FossilizeComputePipeline_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/pipelinecachemgrvulkan.cpp:102 */
	struct FossilizeShaderModule_t {
		CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, short unsigned int>, short unsigned int> > m_referencedGraphicsPipelines; /* 0 40 */
		CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t*, short unsigned int>, short unsigned int> > m_referencedComputePipelines; /* 40 40 */
		CUtlHashtable<long unsigned int, const CShaderVulkanBase*, DefaultHashFunctor<long unsigned int>, DefaultEqualFunctor<long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*>, int> > m_matchingShaders; /* 80 32 */
		void ~FossilizeShaderModule_t(FossilizeShaderModule_t* );
		void FossilizeShaderModule_t(FossilizeShaderModule_t* );
	};
	/* vulkan/pipelinecachemgrvulkan.cpp:1340 */
	struct PipelineWorkItem_t {
		const Hash * pHashes; /* 0 8 */
		const enum ResourceTag * pTags; /* 8 8 */
		DatabaseInterface * pFossilizeDatabase; /* 16 8 */
		StateReplayer * pFossilizeReplayer; /* 24 8 */
		int32 nStartWorkIndex; /* 32 4 */
		int32 nCount; /* 36 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/pipelinecachemgrvulkan.cpp:1434 */
	struct RegisteredShader_t {
		/* vulkan/pipelinecachemgrvulkan.cpp:1436 */
		void RegisteredShader_t(RegisteredShader_t* );
		/* vulkan/pipelinecachemgrvulkan.cpp:1443 */
		void RegisteredShader_t(RegisteredShader_t* , Hash, RenderShaderHandle_t, const CShaderVulkanBase* );
		Hash m_nHash; /* 0 8 */
		RenderShaderHandle_t m_hShader; /* 8 8 */
		const class CShaderVulkanBase * m_pShader; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class StateCreatorInterface <ancestor>; */ /* 0 8 */
	void CFossilizeStateCreator(CFossilizeStateCreator* , const CFossilizeStateCreator& );
	/* vulkan/pipelinecachemgrvulkan.cpp:116 */
	void CFossilizeStateCreator(CFossilizeStateCreator* );
	/* vulkan/pipelinecachemgrvulkan.cpp:129 */
	virtual void ~CFossilizeStateCreator(CFossilizeStateCreator* );
	/* vulkan/pipelinecachemgrvulkan.cpp:171 */
	void Init(CFossilizeStateCreator* , CPipelineManagerVulkan* );
	/* vulkan/pipelinecachemgrvulkan.cpp:178 */
	void Shutdown(CFossilizeStateCreator* );
	/* vulkan/pipelinecachemgrvulkan.cpp:190 */
	virtual void set_application_info(CFossilizeStateCreator* , Hash, const VkApplicationInfo* , const VkPhysicalDeviceFeatures2* );
	/* vulkan/pipelinecachemgrvulkan.cpp:214 */
	virtual void set_current_application_info(CFossilizeStateCreator* , Hash);
	/* vulkan/pipelinecachemgrvulkan.cpp:223 */
	virtual void notify_application_info_link(CFossilizeStateCreator* , Hash, Hash, ResourceTag, Hash);
	/* vulkan/pipelinecachemgrvulkan.cpp:236 */
	bool IncludeObject(const CFossilizeStateCreator* , ResourceTag, Hash);
	/* vulkan/pipelinecachemgrvulkan.cpp:253 */
	bool UsingUnsupportedState(const CFossilizeStateCreator* , const VkGraphicsPipelineCreateInfo* );
	/* vulkan/pipelinecachemgrvulkan.cpp:351 */
	virtual bool enqueue_create_sampler(CFossilizeStateCreator* , Hash, const VkSamplerCreateInfo* , VkSampler* );
	/* vulkan/pipelinecachemgrvulkan.cpp:434 */
	virtual bool enqueue_create_descriptor_set_layout(CFossilizeStateCreator* , Hash, const VkDescriptorSetLayoutCreateInfo* , VkDescriptorSetLayout* );
	/* vulkan/pipelinecachemgrvulkan.cpp:470 */
	virtual bool enqueue_create_pipeline_layout(CFossilizeStateCreator* , Hash, const VkPipelineLayoutCreateInfo* , VkPipelineLayout* );
	/* vulkan/pipelinecachemgrvulkan.cpp:536 */
	virtual bool enqueue_create_shader_module(CFossilizeStateCreator* , Hash, const VkShaderModuleCreateInfo* , VkShaderModule* );
	/* vulkan/pipelinecachemgrvulkan.cpp:546 */
	virtual bool enqueue_create_render_pass(CFossilizeStateCreator* , Hash, const VkRenderPassCreateInfo* , VkRenderPass* );
	/* vulkan/pipelinecachemgrvulkan.cpp:627 */
	virtual bool enqueue_create_render_pass2(CFossilizeStateCreator* , Hash, const VkRenderPassCreateInfo2* , VkRenderPass* );
	/* vulkan/pipelinecachemgrvulkan.cpp:636 */
	virtual bool enqueue_create_compute_pipeline(CFossilizeStateCreator* , Hash, const VkComputePipelineCreateInfo* , VkPipeline* );
	/* vulkan/pipelinecachemgrvulkan.cpp:686 */
	virtual bool enqueue_create_graphics_pipeline(CFossilizeStateCreator* , Hash, const VkGraphicsPipelineCreateInfo* , VkPipeline* );
	/* vulkan/pipelinecachemgrvulkan.cpp:881 */
	virtual bool enqueue_create_raytracing_pipeline(CFossilizeStateCreator* , Hash, const VkRayTracingPipelineCreateInfoKHR* , VkPipeline* );
	/* vulkan/pipelinecachemgrvulkan.cpp:890 */
	void wait_enqueue(CFossilizeStateCreator* );
	/* vulkan/pipelinecachemgrvulkan.cpp:903 */
	FossilizeShaderModule_t* GetShaderModule(CFossilizeStateCreator* , Hash);
	/* vulkan/pipelinecachemgrvulkan.cpp:935 */
	uint32 HashDescriptorSetLayout(CFossilizeStateCreator* , const FossilizeDescriptorSetLayout_t* );
	/* vulkan/pipelinecachemgrvulkan.cpp:977 */
	void PreWarmVSPSPairs(CFossilizeStateCreator* , const FossilizeGraphicsPipeline_t* , CPipelineVulkan& , FossilizeShaderModule_t* , FossilizeShaderModule_t* , int32);
	/* vulkan/pipelinecachemgrvulkan.cpp:1026 */
	void CreateGraphicsPipeline(CFossilizeStateCreator* , const FossilizeGraphicsPipeline_t* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1110 */
	void CreateComputePipeline(CFossilizeStateCreator* , const FossilizeComputePipeline_t* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1149 */
	void RegisterShader(CFossilizeStateCreator* , const CShaderVulkanBase* , const VkShaderModuleCreateInfo& );
	/* vulkan/pipelinecachemgrvulkan.cpp:1170 */
	void ProcessShader(CFossilizeStateCreator* , Hash, const CShaderVulkanBase* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1258 */
	bool UnregisterShader(CFossilizeStateCreator* , RenderShaderHandle_t, const CShaderVulkanBase* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1277 */
	void RemoveShaderFromMatchedShaders(CFossilizeStateCreator* , const CShaderVulkanBase* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1305 */
	void SetDatabaseLoaded(CFossilizeStateCreator* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1355 */
	void ParallelProcessPipelineWorkItem(CFossilizeStateCreator* , PipelineWorkItem_t& );
	/* vulkan/pipelinecachemgrvulkan.cpp:1396 */
	typedef struct CUtlMap<long unsigned int, CSamplerStateDesc*, short unsigned int, CDefLess<long unsigned int> > SamplerMap_t;
protected:
	SamplerMap_t m_samplerMap; /* 8 40 */
	/* vulkan/pipelinecachemgrvulkan.cpp:1397 */
	typedef struct CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t*, short unsigned int, CDefLess<long unsigned int> > DescriptorSetLayoutMap_t;
	DescriptorSetLayoutMap_t m_descriptorSetLayoutMap; /* 48 40 */
	/* vulkan/pipelinecachemgrvulkan.cpp:1398 */
	typedef struct CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t*, short unsigned int, CDefLess<long unsigned int> > PipelineLayoutMap_t;
	PipelineLayoutMap_t m_pipelineLayoutMap; /* 88 40 */
	/* vulkan/pipelinecachemgrvulkan.cpp:1399 */
	typedef struct CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t*, short unsigned int, CDefLess<long unsigned int> > RenderPassMap_t;
	RenderPassMap_t m_renderPassMap; /* 128 40 */
	CThreadMutex m_referencedShaderModuleMutex; /* 168 72 */
	CThreadRWLock_FastRead m_shaderModuleRWLock __attribute__((__aligned__(8))); /* 240 408 */
	/* vulkan/pipelinecachemgrvulkan.cpp:1406 */
	typedef struct CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> > ShaderModuleMap_t;
	ShaderModuleMap_t m_shaderModuleMap; /* 648 48 */
	CThreadRWLock_FastRead m_graphicsPipelineRWLock __attribute__((__aligned__(8))); /* 696 408 */
	/* vulkan/pipelinecachemgrvulkan.cpp:1407 */
	typedef struct CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> > GraphicsPipelineMap_t;
	GraphicsPipelineMap_t m_graphicsPipelineMap; /* 1104 48 */
	CThreadRWLock_FastRead m_computePipelineRWLock __attribute__((__aligned__(8))); /* 1152 408 */
	/* vulkan/pipelinecachemgrvulkan.cpp:1408 */
	typedef struct CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> > ComputePipelineMap_t;
	ComputePipelineMap_t m_computePipelineMap; /* 1560 48 */
	/* vulkan/pipelinecachemgrvulkan.cpp:1417 */
	typedef struct CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t*, short unsigned int>, short unsigned int> >*, short unsigned int, CDefLess<const CShaderVulkanBase*> > MatchedShaderMap_t;
	MatchedShaderMap_t m_matchedShaderModulesPerShader; /* 1608 40 */
	CPipelineManagerVulkan * m_pPipelineManager; /* 1648 8 */
	Hash m_currentApplicationInfoHash; /* 1656 8 */
	unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<long unsigned int> > m_source2ApplicationInfoHashes; /* 1664 56 */
	unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<long unsigned int> > m_filteredBlobHashes[10]; /* 1720 560 */
	bool m_bFossilizeDatabaseLoaded; /* 2280 1 */
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false> m_registeredShaderQueue __attribute__((__aligned__(16))); /* 2288 64 */
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false> m_unregisteredShaderQueue __attribute__((__aligned__(16))); /* 2352 64 */
	volatile bool m_bShuttingDown; /* 2416 1 */
	void CFossilizeStateCreator(class CFossilizeStateCreator *, const class CFossilizeStateCreator  &); /* linkage=_ZN22CFossilizeStateCreatorC4ERKS_ */
	void CFossilizeStateCreator(class CFossilizeStateCreator *); /* linkage=_ZN22CFossilizeStateCreatorC4Ev */
	virtual void ~CFossilizeStateCreator(class CFossilizeStateCreator *); /* linkage=_ZN22CFossilizeStateCreatorD4Ev */
	void Init(class CFossilizeStateCreator *, class CPipelineManagerVulkan *); /* linkage=_ZN22CFossilizeStateCreator4InitEP22CPipelineManagerVulkan */
	void Shutdown(class CFossilizeStateCreator *); /* linkage=_ZN22CFossilizeStateCreator8ShutdownEv */
	virtual void set_application_info(class CFossilizeStateCreator *, Hash, const VkApplicationInfo  *, const VkPhysicalDeviceFeatures2  *); /* linkage=_ZN22CFossilizeStateCreator20set_application_infoEmPK17VkApplicationInfoPK25VkPhysicalDeviceFeatures2 */
	virtual void set_current_application_info(class CFossilizeStateCreator *, Hash); /* linkage=_ZN22CFossilizeStateCreator28set_current_application_infoEm */
	virtual void notify_application_info_link(class CFossilizeStateCreator *, Hash, Hash, enum ResourceTag, Hash); /* linkage=_ZN22CFossilizeStateCreator28notify_application_info_linkEmmN9Fossilize11ResourceTagEm */
	bool IncludeObject(const class CFossilizeStateCreator  *, enum ResourceTag, Hash); /* linkage=_ZNK22CFossilizeStateCreator13IncludeObjectEN9Fossilize11ResourceTagEm */
	bool UsingUnsupportedState(const class CFossilizeStateCreator  *, const VkGraphicsPipelineCreateInfo  *); /* linkage=_ZNK22CFossilizeStateCreator21UsingUnsupportedStateEPK28VkGraphicsPipelineCreateInfo */
	virtual bool enqueue_create_sampler(class CFossilizeStateCreator *, Hash, const VkSamplerCreateInfo  *, VkSampler *); /* linkage=_ZN22CFossilizeStateCreator22enqueue_create_samplerEmPK19VkSamplerCreateInfoPP11VkSampler_T */
	virtual bool enqueue_create_descriptor_set_layout(class CFossilizeStateCreator *, Hash, const VkDescriptorSetLayoutCreateInfo  *, VkDescriptorSetLayout *); /* linkage=_ZN22CFossilizeStateCreator36enqueue_create_descriptor_set_layoutEmPK31VkDescriptorSetLayoutCreateInfoPP23VkDescriptorSetLayout_T */
	virtual bool enqueue_create_pipeline_layout(class CFossilizeStateCreator *, Hash, const VkPipelineLayoutCreateInfo  *, VkPipelineLayout *); /* linkage=_ZN22CFossilizeStateCreator30enqueue_create_pipeline_layoutEmPK26VkPipelineLayoutCreateInfoPP18VkPipelineLayout_T */
	virtual bool enqueue_create_shader_module(class CFossilizeStateCreator *, Hash, const VkShaderModuleCreateInfo  *, VkShaderModule *); /* linkage=_ZN22CFossilizeStateCreator28enqueue_create_shader_moduleEmPK24VkShaderModuleCreateInfoPP16VkShaderModule_T */
	virtual bool enqueue_create_render_pass(class CFossilizeStateCreator *, Hash, const VkRenderPassCreateInfo  *, VkRenderPass *); /* linkage=_ZN22CFossilizeStateCreator26enqueue_create_render_passEmPK22VkRenderPassCreateInfoPP14VkRenderPass_T */
	virtual bool enqueue_create_render_pass2(class CFossilizeStateCreator *, Hash, const VkRenderPassCreateInfo2  *, VkRenderPass *); /* linkage=_ZN22CFossilizeStateCreator27enqueue_create_render_pass2EmPK23VkRenderPassCreateInfo2PP14VkRenderPass_T */
	virtual bool enqueue_create_compute_pipeline(class CFossilizeStateCreator *, Hash, const VkComputePipelineCreateInfo  *, VkPipeline *); /* linkage=_ZN22CFossilizeStateCreator31enqueue_create_compute_pipelineEmPK27VkComputePipelineCreateInfoPP12VkPipeline_T */
	virtual bool enqueue_create_graphics_pipeline(class CFossilizeStateCreator *, Hash, const VkGraphicsPipelineCreateInfo  *, VkPipeline *); /* linkage=_ZN22CFossilizeStateCreator32enqueue_create_graphics_pipelineEmPK28VkGraphicsPipelineCreateInfoPP12VkPipeline_T */
	virtual bool enqueue_create_raytracing_pipeline(class CFossilizeStateCreator *, Hash, const VkRayTracingPipelineCreateInfoKHR  *, VkPipeline *); /* linkage=_ZN22CFossilizeStateCreator34enqueue_create_raytracing_pipelineEmPK33VkRayTracingPipelineCreateInfoKHRPP12VkPipeline_T */
	void wait_enqueue(class CFossilizeStateCreator *); /* linkage=_ZN22CFossilizeStateCreator12wait_enqueueEv */
	class FossilizeShaderModule_t * GetShaderModule(class CFossilizeStateCreator *, Hash); /* linkage=_ZN22CFossilizeStateCreator15GetShaderModuleEm */
	uint32 HashDescriptorSetLayout(class CFossilizeStateCreator *, const class FossilizeDescriptorSetLayout_t  *); /* linkage=_ZN22CFossilizeStateCreator23HashDescriptorSetLayoutEPKNS_30FossilizeDescriptorSetLayout_tE */
	void PreWarmVSPSPairs(class CFossilizeStateCreator *, const class FossilizeGraphicsPipeline_t  *, class CPipelineVulkan &, class FossilizeShaderModule_t *, class FossilizeShaderModule_t *, int32); /* linkage=_ZN22CFossilizeStateCreator16PreWarmVSPSPairsEPKNS_27FossilizeGraphicsPipeline_tER15CPipelineVulkanPNS_23FossilizeShaderModule_tES6_i */
	void CreateGraphicsPipeline(class CFossilizeStateCreator *, const class FossilizeGraphicsPipeline_t  *); /* linkage=_ZN22CFossilizeStateCreator22CreateGraphicsPipelineEPKNS_27FossilizeGraphicsPipeline_tE */
	void CreateComputePipeline(class CFossilizeStateCreator *, const class FossilizeComputePipeline_t  *); /* linkage=_ZN22CFossilizeStateCreator21CreateComputePipelineEPKNS_26FossilizeComputePipeline_tE */
	void RegisterShader(class CFossilizeStateCreator *, const class CShaderVulkanBase  *, const VkShaderModuleCreateInfo  &); /* linkage=_ZN22CFossilizeStateCreator14RegisterShaderEPK17CShaderVulkanBaseRK24VkShaderModuleCreateInfo */
	void ProcessShader(class CFossilizeStateCreator *, Hash, const class CShaderVulkanBase  *); /* linkage=_ZN22CFossilizeStateCreator13ProcessShaderEmPK17CShaderVulkanBase */
	bool UnregisterShader(class CFossilizeStateCreator *, RenderShaderHandle_t, const class CShaderVulkanBase  *); /* linkage=_ZN22CFossilizeStateCreator16UnregisterShaderEP22RenderShaderHandle_t__PK17CShaderVulkanBase */
	void RemoveShaderFromMatchedShaders(class CFossilizeStateCreator *, const class CShaderVulkanBase  *); /* linkage=_ZN22CFossilizeStateCreator30RemoveShaderFromMatchedShadersEPK17CShaderVulkanBase */
	void SetDatabaseLoaded(class CFossilizeStateCreator *); /* linkage=_ZN22CFossilizeStateCreator17SetDatabaseLoadedEv */
	void ParallelProcessPipelineWorkItem(class CFossilizeStateCreator *, class PipelineWorkItem_t &); /* linkage=_ZN22CFossilizeStateCreator31ParallelProcessPipelineWorkItemERNS_18PipelineWorkItem_tE */
} __attribute__((__aligned__(16)));

// <0067C34E> vulkan/pipelinecachemgrvulkan.cpp:50
void FossilizePipelineLayout_t::FossilizePipelineLayout_t()
{
} /* size: 0 */

// <0067C332> vulkan/pipelinecachemgrvulkan.cpp:50
inline void FossilizePipelineLayout_t::FossilizePipelineLayout_t()
{
} /* size: 0 */

// <00665FC7> vulkan/pipelinecachemgrvulkan.cpp:50
void FossilizePipelineLayout_t::~FossilizePipelineLayout_t()
{
} /* size: 0 */

// <00665FAB> vulkan/pipelinecachemgrvulkan.cpp:50
inline void FossilizePipelineLayout_t::~FossilizePipelineLayout_t()
{
} /* size: 0 */

// <006781DF> vulkan/pipelinecachemgrvulkan.cpp:76
void FossilizeGraphicsPipeline_t::FossilizeGraphicsPipeline_t()
{
} /* size: 0 */

// <006781C3> vulkan/pipelinecachemgrvulkan.cpp:76
inline void FossilizeGraphicsPipeline_t::FossilizeGraphicsPipeline_t()
{
} /* size: 0 */

// <006795B2> vulkan/pipelinecachemgrvulkan.cpp:93
void FossilizeComputePipeline_t::FossilizeComputePipeline_t()
{
} /* size: 0 */

// <00679596> vulkan/pipelinecachemgrvulkan.cpp:93
inline void FossilizeComputePipeline_t::FossilizeComputePipeline_t()
{
} /* size: 0 */

// <006769EA> vulkan/pipelinecachemgrvulkan.cpp:102
void FossilizeShaderModule_t::FossilizeShaderModule_t()
{
} /* size: 0 */

// <006769CE> vulkan/pipelinecachemgrvulkan.cpp:102
inline void FossilizeShaderModule_t::FossilizeShaderModule_t()
{
} /* size: 0 */

// <006657AE> vulkan/pipelinecachemgrvulkan.cpp:102
void FossilizeShaderModule_t::~FossilizeShaderModule_t()
{
} /* size: 0 */

// <00665792> vulkan/pipelinecachemgrvulkan.cpp:102
inline void FossilizeShaderModule_t::~FossilizeShaderModule_t()
{
} /* size: 0 */

// <00682426> vulkan/pipelinecachemgrvulkan.cpp:116
void CFossilizeStateCreator::CFossilizeStateCreator()
{
} /* size: 0 */

// <0068240D> vulkan/pipelinecachemgrvulkan.cpp:116
inline void CFossilizeStateCreator::CFossilizeStateCreator()
{
} /* size: 0 */

// <0067EFA1> vulkan/pipelinecachemgrvulkan.cpp:129
// variables: 14
// function calls: 230
void CFossilizeStateCreator::~CFossilizeStateCreator()
{
	{
		short unsigned int nIndex; // 133
		{
			int32 nBinding; // 135
		}
	}
	{
		short unsigned int nIndex; // 146
	}
	{
		short unsigned int nIndex; // 154
	}
	{
		short unsigned int i; // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::FirstInorder(); // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::Element(
			short unsigned int i);  // 1314
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::Purge(); // 1316
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::PurgeAndDeleteElements(); // 348
	CUtlMap<long unsigned int, CSamplerStateDesc::PurgeAndDeleteElements(); // 131
	{
		short unsigned int nIndex; // 133
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::FirstInorder(); // 351
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::FirstInorder(); // 133
		{
			int32 nBinding; // 135
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Element(
				short unsigned int i);  // 92
			CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
					IndexType_t i);  // 135
			CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
					IndexType_t i);  // 137
			CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
					IndexType_t i);  // 139
		}
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
				IndexType_t i);  // 142
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::NextInorder(
				IndexType_t i);  // 133
		InvalidIndex(void); // 133
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Purge(); // 1316
	{
		short unsigned int i; // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::FirstInorder(); // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Element(
			short unsigned int i);  // 1314
	}
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::PurgeAndDeleteElements(); // 348
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::PurgeAndDeleteElements(); // 144
	{
		short unsigned int nIndex; // 146
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::FirstInorder(); // 351
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::FirstInorder(); // 146
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Element(
			short unsigned int i);  // 92
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
				IndexType_t i);  // 148
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::NextInorder(
				IndexType_t i);  // 146
		InvalidIndex(void); // 146
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Purge(); // 1316
	{
		short unsigned int i; // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::FirstInorder(); // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Element(
			short unsigned int i);  // 1314
		FossilizePipelineLayout_t::~FossilizePipelineLayout_t(); // 1314
	}
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::PurgeAndDeleteElements(); // 348
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::PurgeAndDeleteElements(); // 150
	CUtlMap<const CShaderVulkanBase::PurgeAndDeleteElements(); // 152
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::PurgeAndDeleteElements(); // 153
	{
		short unsigned int nIndex; // 154
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::FirstInorder(); // 351
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::FirstInorder(); // 154
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Element(
			short unsigned int i);  // 92
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				IndexType_t i);  // 156
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Element(
			short unsigned int i);  // 92
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				IndexType_t i);  // 157
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				IndexType_t i);  // 159
		VulkanDevice(void); // 159
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::NextInorder(
				IndexType_t i);  // 154
		InvalidIndex(void); // 154
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Purge(); // 1316
	{
		short unsigned int i; // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::FirstInorder(); // 1312
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Element(
			short unsigned int i);  // 1314
	}
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::PurgeAndDeleteElements(); // 348
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::PurgeAndDeleteElements(); // 162
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::PurgeAndDeleteElements(); // 163
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::PurgeAndDeleteElements(); // 164
	_M_begin(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this); // 1852
	{
		__node_ptr __tmp; // 1592
		_Hash_node<long unsigned int, false>::_M_next(); // 1593
		__new_allocator<std::__detail::_Hash_node<long unsigned int, false> >::deallocate(
				_Hash_node<long unsigned int, false>* __p,
				size_type __n);  // 215
		allocator<std::__detail::_Hash_node<long unsigned int, false> >::deallocate(
				_Hash_node<long unsigned int, false>* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1583
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_M_deallocate_node_ptr(
					__node_ptr __n);  // 1573
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_M_deallocate_node(
					__node_ptr __n);  // 1594
	}
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_M_deallocate_nodes(
				__node_ptr __n);  // 1852
	__new_allocator<std::__detail::_Hash_node_base::__new_allocator(); // 183
	allocator<std::__detail::_Hash_node_base::allocator<std::__detail::_Hash_node<long unsigned int, false> >(
									const allocator<std::__detail::_Hash_node<long unsigned int, false> >  &);  // 1618
	__new_allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_type __n);  // 215
	allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1619
	allocator<std::__detail::_Hash_node_base::~allocator(); // 1620
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_M_deallocate_buckets(
				__buckets_ptr __bkts,
				size_t __bkt_count);  // 422
	_M_deallocate_buckets(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this,
				__buckets_ptr __bkts,
				size_type __bkt_count);  // 427
	_M_deallocate_buckets(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this); // 1853
	allocator<std::__detail::_Hash_node<long unsigned int, false> >::~allocator(); // 1013
	_Hashtable_ebo_helper<std::allocator<std::__detail::_Hash_node<long unsigned int, false> >, true>::~_Hashtable_ebo_helper(); // 1472
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::~_Hashtable_alloc(); // 1854
	~_Hashtable(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this); // 107
	~unordered_set(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<lon this); // 130
	_M_begin(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this); // 1852
	{
		__node_ptr __tmp; // 1592
		_Hash_node<long unsigned int, false>::_M_next(); // 1593
		__new_allocator<std::__detail::_Hash_node<long unsigned int, false> >::deallocate(
				_Hash_node<long unsigned int, false>* __p,
				size_type __n);  // 215
		allocator<std::__detail::_Hash_node<long unsigned int, false> >::deallocate(
				_Hash_node<long unsigned int, false>* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1583
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_M_deallocate_node_ptr(
					__node_ptr __n);  // 1573
		_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_M_deallocate_node(
					__node_ptr __n);  // 1594
	}
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_M_deallocate_nodes(
				__node_ptr __n);  // 1852
	_M_uses_single_bucket(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
				__buckets_ptr __bkts);  // 419
	__new_allocator<std::__detail::_Hash_node_base::__new_allocator(); // 183
	allocator<std::__detail::_Hash_node_base::allocator<std::__detail::_Hash_node<long unsigned int, false> >(
									const allocator<std::__detail::_Hash_node<long unsigned int, false> >  &);  // 1618
	__new_allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_type __n);  // 215
	allocator<std::__detail::_Hash_node_base::deallocate(
			_Hash_node_base** __p,
			size_t __n);  // 649
	deallocate(allocator_type& __a,
			pointer __p,
			size_type __n);  // 1619
	allocator<std::__detail::_Hash_node_base::~allocator(); // 1620
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_M_deallocate_buckets(
				__buckets_ptr __bkts,
				size_t __bkt_count);  // 422
	_M_deallocate_buckets(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this,
				__buckets_ptr __bkts,
				size_type __bkt_count);  // 427
	_M_deallocate_buckets(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this); // 1853
	allocator<std::__detail::_Hash_node<long unsigned int, false> >::~allocator(); // 1013
	_Hashtable_ebo_helper<std::allocator<std::__detail::_Hash_node<long unsigned int, false> >, true>::~_Hashtable_ebo_helper(); // 1472
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::~_Hashtable_alloc(); // 1854
	~_Hashtable(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this); // 107
	~unordered_set(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<lon this); // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::~CUtlRBTree(); // 47
	CUtlMap<const CShaderVulkanBase::~CUtlMap(); // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::~CUtlRBTree(); // 47
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::~CUtlMap(); // 165
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::~CUtlRBTree(); // 47
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::~CUtlMap(); // 165
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::Node_t, unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::~CUtlRBTree(); // 47
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::~CUtlMap(); // 165
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 165
	CThreadMutex::~CThreadMutex(); // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::~CUtlRBTree(); // 47
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::~CUtlMap(); // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::~CUtlRBTree(); // 47
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::~CUtlMap(); // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t*, short unsigned int, CDefLess<long unsigned int> >::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::~CUtlRBTree(); // 47
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::~CUtlMap(); // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::Purge(); // 1287
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::Purge(); // 509
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::~CUtlRBTree(); // 47
	CUtlMap<long unsigned int, CSamplerStateDesc::~CUtlMap(); // 165
} /* size: 2235, inline expansions: 162 (4855 bytes) */

// <0067EF39> vulkan/pipelinecachemgrvulkan.cpp:129
void CFossilizeStateCreator::~CFossilizeStateCreator()
{
} /* size: 36 */

// <0067EEE0> vulkan/pipelinecachemgrvulkan.cpp:129
// variables: 4
inline void CFossilizeStateCreator::~CFossilizeStateCreator()
{
	{
		short unsigned int nIndex; // 133
		{
			int32 nBinding; // 135
		}
	}
	{
		short unsigned int nIndex; // 146
	}
	{
		short unsigned int nIndex; // 154
	}
} /* size: 0 */

// <0067EEBB> vulkan/pipelinecachemgrvulkan.cpp:171
inline void CFossilizeStateCreator::Init(CPipelineManagerVulkan* pPipelineManager)
{
} /* size: 0 */

// <0067EEA2> vulkan/pipelinecachemgrvulkan.cpp:178
inline void CFossilizeStateCreator::Shutdown()
{
} /* size: 0 */

// <0067ED0C> vulkan/pipelinecachemgrvulkan.cpp:190
// variables: 2
// function calls: 2
void CFossilizeStateCreator::set_application_info(Hash index, const VkApplicationInfo* pApplicationInfo, const VkPhysicalDeviceFeatures2* pPhysicalDeviceFeatures)
{
	{
		const char* pApplicationName; // 194
		const char* pEngineName; // 195
		insert(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this,
			const value_type& __v);  // 475
		insert(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<lon this,
			const value_type& __x);  // 206
	}
} /* size: 211 */

// <0067ECCF> vulkan/pipelinecachemgrvulkan.cpp:214
void CFossilizeStateCreator::set_current_application_info(Hash hash)
{
} /* size: 12 */

// <0067EA8B> vulkan/pipelinecachemgrvulkan.cpp:223
// function calls: 6
void CFossilizeStateCreator::notify_application_info_link(Hash linkHash, Hash appHash, ResourceTag tag, Hash hash)
{
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 226
	insert(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this,
		const value_type& __v);  // 475
	insert(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<lon this,
		const value_type& __x);  // 228
	insert(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this,
		const value_type& __v);  // 475
	insert(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<lon this,
		const value_type& __x);  // 229
} /* size: 100, inline expansions: 6 (90 bytes) */

// <0067EA5A> vulkan/pipelinecachemgrvulkan.cpp:236
inline void CFossilizeStateCreator::IncludeObject(ResourceTag tag, Hash hash)
{
} /* size: 0 */

// <0067E9EA> vulkan/pipelinecachemgrvulkan.cpp:253
// variables: 5
inline void CFossilizeStateCreator::UsingUnsupportedState(const VkGraphicsPipelineCreateInfo* pGraphicsPipelineCreateInfo)
{
	const VkPipelineDynamicStateCreateInfo* pDynamicState; // 298
	{
		const VkBaseInStructure* pBaseIn; // 276
		bool bFoundDynamicRenderingStruct; // 277
	}
	{
		uint32 nState; // 301
		{
			VkDynamicState nDynamicState; // 303
		}
	}
} /* size: 0, variables: 1 */

// <0067DBD8> vulkan/pipelinecachemgrvulkan.cpp:351
// variables: 8
// function calls: 49
void CFossilizeStateCreator::enqueue_create_sampler(Hash index, const VkSamplerCreateInfo* pSamplerCreateInfo, VkSampler* ppSamplerOut)
{
	IndexType_t nSamplerIndex; // 360
	{
		CSamplerStateDesc* pSamplerState; // 363
		RsFilter_t eFilter; // 365
		const RsTextureAddressMode_t   s_addressModeTranslate; // 378
		const RsComparison_t   s_comparisonFuncTranslate; // 387
		Vector4D borderColor; // 404
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 800
		CSamplerStateDescBase::SetMaxAnisotropy(
				uint32 nMaxAniso);  // 370
		RsEncodeBasicTextureFilter(RsFilterType_t minFilter,
						RsFilterType_t magFilter,
						RsFilterType_t mipFilter,
						bool bComparison);  // 365
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 799
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 800
		CSamplerStateDescBase::SetMaxAnisotropy(
				uint32 nMaxAniso);  // 374
		{
			short unsigned int newNode; // 1709
			{
			}
		}
		{
			short unsigned int newNode; // 1696
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::Element(
			short unsigned int i);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::LeftChild(
				short unsigned int i);  // 1667
		CDefLess<long unsigned int>::operator(
				const long unsigned int& lhs,
				const long unsigned int& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::RightChild(
				short unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					short unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<long unsigned int, CSamplerStateDesc::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 424
		CSamplerStateDescBase::SetFilterMode(
				RsFilter_t filter);  // 376
		CSamplerStateDescBase::SetTextureAddressModeU(
					RsTextureAddressMode_t addressMode);  // 399
		CSamplerStateDescBase::SetTextureAddressModeV(
					RsTextureAddressMode_t addressMode);  // 400
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 782
		CSamplerStateDescBase::SetMipLodBias(
				float32 flBias);  // 403
		CSamplerStateDescBase::SetTextureAddressModeW(
					RsTextureAddressMode_t addressMode);  // 401
		CSamplerStateDescBase::SetComparisonFunc(
					RsComparison_t compFunc);  // 402
		Vector4D::Vector4D(); // 404
		ClampAndPackFloat4ColorToUInt32(float flR,
						float flG,
						float flB,
						float flA);  // 814
		CSamplerStateDescBase::SetBorderColor(
				const float32* pBorderColor);  // 421
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 850
		CSamplerStateDescBase::SetMinLod(
				uint32 nMinLod);  // 422
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 855
		CSamplerStateDescBase::SetMaxLod(
				uint32 nMaxLod);  // 423
		Vector4D::operator=(
				const Vector4D& vOther);  // 409
		Vector4D::operator=(
				const Vector4D& vOther);  // 418
	}
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 240
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 241
	CFossilizeStateCreator::IncludeObject(
			ResourceTag tag,
			Hash hash);  // 353
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::Element(
		short unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::LeftChild(
			short unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::RightChild(
			short unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CSamplerStateDesc*, short unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CSamplerStateDesc::Find(
		const KeyType_t& key);  // 360
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::Element(
		short unsigned int i);  // 92
	CUtlMap<long unsigned int, CSamplerStateDesc::operator[](
			IndexType_t i);  // 427
} /* size: 979, variables: 1, inline expansions: 17 (407 bytes) */

// <0067D261> vulkan/pipelinecachemgrvulkan.cpp:434
// variables: 6
// function calls: 29
void CFossilizeStateCreator::enqueue_create_descriptor_set_layout(Hash index, const VkDescriptorSetLayoutCreateInfo* pDescriptorSetLayoutCreateInfo, VkDescriptorSetLayout* ppLayoutOut)
{
	IndexType_t nLayoutIndex; // 441
	{
		FossilizeDescriptorSetLayout_t* pNewDescriptorSetLayout; // 444
		{
			uint32_t nBinding; // 448
			{
				VkSampler* pNewImmutableSamplers; // 455
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 456
			}
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Element(
			short unsigned int i);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::LeftChild(
				short unsigned int i);  // 1667
		CDefLess<long unsigned int>::operator(
				const long unsigned int& lhs,
				const long unsigned int& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::RightChild(
				short unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					short unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			short unsigned int newNode; // 1709
			{
			}
		}
		{
			short unsigned int newNode; // 1696
		}
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 461
	}
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 240
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 241
	CFossilizeStateCreator::IncludeObject(
			ResourceTag tag,
			Hash hash);  // 436
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Element(
		short unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::LeftChild(
			short unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::RightChild(
			short unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t*, short unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Find(
		const KeyType_t& key);  // 441
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::Element(
		short unsigned int i);  // 92
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::operator[](
			IndexType_t i);  // 463
} /* size: 673, variables: 1, inline expansions: 17 (481 bytes) */

// <0067A5E2> vulkan/pipelinecachemgrvulkan.cpp:470
// variables: 12
// function calls: 113
void CFossilizeStateCreator::enqueue_create_pipeline_layout(Hash index, const VkPipelineLayoutCreateInfo* pLayoutCreateInfo, VkPipelineLayout* ppPipelineLayoutOut)
{
	IndexType_t nLayoutIndex; // 477
	const char   __FUNCTION__; // 32380
	{
		FossilizePipelineLayout_t* pNewPipelineLayout; // 480
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> > immutableSamplers; // 486
		{
			uint8_t nSet; // 487
			{
				const FossilizeDescriptorSetLayout_t* pDescriptorSetLayout; // 489
				{
					int32_t nBinding; // 498
					{
						PipelineLayoutImmutableSampler_t newImmutableSampler; // 503
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 502
						}
						PipelineLayoutImmutableSampler_t::PipelineLayoutImmutableSampler_t(); // 503
						CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Element(
							int i);  // 1201
						CopyConstruct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory,
												const PipelineLayoutImmutableSampler_t& src);  // 1201
						CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::AddToTail(
								const PipelineLayoutImmutableSampler_t& src);  // 508
						CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
								int i);  // 588
						operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
								int i);  // 505
						CUtlMemory<VkDescriptorSetLayoutBinding, int>::operator[](
								int i);  // 588
						CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator[](
								int i);  // 505
					}
					CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
							int i);  // 500
					CUtlMemory<VkDescriptorSetLayoutBinding, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator[](
							int i);  // 500
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 496
				CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
						int i);  // 497
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 515
		}
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 255
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 530
		CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this); // 255
		CUtlMemory<VkPushConstantRange, int>::ValidateGrowSize(); // 475
		CUtlMemory<VkPushConstantRange, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVector(); // 255
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(); // 255
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 530
		CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 255
		PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(); // 50
		FossilizePipelineLayout_t::FossilizePipelineLayout_t(); // 480
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(); // 486
		{
			short unsigned int newNode; // 1709
			{
			}
		}
		{
			short unsigned int newNode; // 1696
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Element(
			short unsigned int i);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::LeftChild(
				short unsigned int i);  // 1667
		CDefLess<long unsigned int>::operator(
				const long unsigned int& lhs,
				const long unsigned int& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::RightChild(
				short unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					short unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 526
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 903
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 1799
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Purge(); // 560
		ValidateAlignment<PipelineLayoutImmutableSampler_t>(void); // 508
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 510
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVector(); // 527
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 102
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::begin(); // 574
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding* pFrom,
								const VkDescriptorSetLayoutBinding* pFromEnd,
								VkDescriptorSetLayoutBinding* pTo);  // 173
		UtlTraitsCopyRange<PipelineLayoutImmutableSampler_t>(const PipelineLayoutImmutableSampler_t* pFrom,
									const PipelineLayoutImmutableSampler_t* pFromEnd,
									PipelineLayoutImmutableSampler_t* pTo);  // 574
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
				const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& other);  // 565
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
				const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& other);  // 452
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
				const CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& src);  // 517
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 903
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 1799
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Purge(); // 560
		ValidateAlignment<PipelineLayoutImmutableSampler_t>(void); // 508
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 510
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVector(); // 527
		CUtlMemory<VkPushConstantRange, int>::Base(); // 112
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 102
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::begin(); // 1344
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding* pFrom,
								const VkDescriptorSetLayoutBinding* pFromEnd,
								VkDescriptorSetLayoutBinding* pTo);  // 173
		UtlTraitsCopyRange<VkPushConstantRange>(const VkPushConstantRange* pFrom,
							const VkPushConstantRange* pFromEnd,
							VkPushConstantRange* pTo);  // 1344
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CopyArray(
				const VkPushConstantRange* pArray,
				int size);  // 524
	}
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 240
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 241
	CFossilizeStateCreator::IncludeObject(
			ResourceTag tag,
			Hash hash);  // 472
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Element(
		short unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::LeftChild(
			short unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::RightChild(
			short unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t*, short unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Find(
		const KeyType_t& key);  // 477
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::Element(
		short unsigned int i);  // 92
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::operator[](
			IndexType_t i);  // 529
} /* size: 1844, variables: 2, inline expansions: 17 (541 bytes) */

// <0067A584> vulkan/pipelinecachemgrvulkan.cpp:536
void CFossilizeStateCreator::enqueue_create_shader_module(Hash index, const VkShaderModuleCreateInfo* pShaderModuleCreateInfo, VkShaderModule* ppShaderModuleOut)
{
} /* size: 10 */

// <00679692> vulkan/pipelinecachemgrvulkan.cpp:546
// variables: 14
// function calls: 41
void CFossilizeStateCreator::enqueue_create_render_pass(Hash index, const VkRenderPassCreateInfo* pRenderPassCreateInfo, VkRenderPass* ppRenderPassOut)
{
	IndexType_t nRenderPassIndex; // 553
	const char   __FUNCTION__; // 32282
	{
		FossilizeRenderPass_t* pFossilizeRenderPass; // 556
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 561
		}
		{
			uint32 nSubPass; // 562
			{
				const VkSubpassDescription& subPassDesc; // 564
				VulkanFramebufferState_t* pSubpassFBState; // 565
				{
					uint32_t nColorAttachment; // 574
					{
						const VkAttachmentReference& attachmentRef; // 576
						const VkAttachmentDescription& attachmentDescription; // 582
						{
						}
						ComputeMSAATypeFromVkSampleCount(VkSampleCountFlagBits nSampleCount); // 586
					}
				}
				{
					const VkAttachmentDescription& attachmentDescription; // 591
					{
					}
					ComputeMSAATypeFromVkSampleCount(VkSampleCountFlagBits nSampleCount); // 599
				}
			}
		}
		{
			VkResult nResult; // 610
			VulkanDevice(void); // 610
			CUtlString::CUtlString(); // 171
			CUtlString::Get(); // 173
			CUtlString::~CUtlString(); // 176
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 167
			_DOVK_RESULT(VkResult result,
					const char* pCommand);  // 158
			_DOVK_RESULT(VkResult result,
					const char* pCommand);  // 610
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 30
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 30
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 31
		VulkanFramebufferState_t::VulkanFramebufferState_t(); // 558
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Element(
			short unsigned int i);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::LeftChild(
				short unsigned int i);  // 1667
		CDefLess<long unsigned int>::operator(
				const long unsigned int& lhs,
				const long unsigned int& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::RightChild(
				short unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					short unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			short unsigned int newNode; // 1696
		}
		{
			short unsigned int newNode; // 1709
			{
			}
		}
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 617
	}
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 240
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 241
	CFossilizeStateCreator::IncludeObject(
			ResourceTag tag,
			Hash hash);  // 548
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Element(
		short unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::LeftChild(
			short unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::RightChild(
			short unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t*, short unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Find(
		const KeyType_t& key);  // 553
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::Element(
		short unsigned int i);  // 92
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::operator[](
			IndexType_t i);  // 620
} /* size: 1692, variables: 2, inline expansions: 17 (528 bytes) */

// <006795C9> vulkan/pipelinecachemgrvulkan.cpp:627
// variables: 2
void CFossilizeStateCreator::enqueue_create_render_pass2(Hash index, const VkRenderPassCreateInfo2* pRenderPassCreateInfo2, VkRenderPass* ppRenderPass)
{
	const char   __FUNCTION__; // 32309
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 629
	}
} /* size: 38, variables: 1 */

// <006781F6> vulkan/pipelinecachemgrvulkan.cpp:636
// variables: 7
// function calls: 67
void CFossilizeStateCreator::enqueue_create_compute_pipeline(Hash index, const VkComputePipelineCreateInfo* pComputePipelineCreateInfo, VkPipeline* ppPipelineOut)
{
	IndexType_t nPipelineIndex; // 644
	{
		FossilizeComputePipeline_t* pNewComputePipeline; // 654
		Hash shaderModuleHash; // 664
		FossilizeShaderModule_t* pShaderModule; // 665
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_668; // 668
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 668
			CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::IsIdxValid(
					short unsigned int i);  // 588
			CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
					short unsigned int i);  // 594
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::IsValidIndex(
					short unsigned int i);  // 583
			CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::IsIdxAfter(
					short unsigned int i,
					const Iterator_t& it);  // 591
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::IsValidIndex(
					short unsigned int i);  // 977
			{
			}
			CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
					short unsigned int i);  // 367
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::InternalElement(
					short unsigned int i);  // 982
			CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
					short unsigned int i);  // 367
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::InternalElement(
					short unsigned int i);  // 1011
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::LinkBefore(
					short unsigned int before,
					short unsigned int elem);  // 822
			CopyConstruct<const CFossilizeStateCreator::FossilizeComputePipeline_t*>(const FossilizeComputePipeline_t ** pMemory,
												const FossilizeComputePipeline_t* const& src);  // 825
			CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
					short unsigned int i);  // 482
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::Element(
				short unsigned int i);  // 825
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::InsertBefore(
					short unsigned int before,
					const FossilizeComputePipeline_t* const& src);  // 856
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::AddToTail(
					const FossilizeComputePipeline_t* const& src);  // 669
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 670
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
				unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Element(
			unsigned int i);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::LeftChild(
				unsigned int i);  // 1667
		CDefLess<long unsigned int>::operator(
				const long unsigned int& lhs,
				const long unsigned int& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::RightChild(
				unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			unsigned int newNode; // 1696
		}
		{
			unsigned int newNode; // 1709
			{
			}
		}
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 674
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 655
		PipelineCreateInfo_t::PipelineCreateInfo_t(); // 93
		FossilizeComputePipeline_t::FossilizeComputePipeline_t(); // 654
	}
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 240
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 241
	CFossilizeStateCreator::IncludeObject(
			ResourceTag tag,
			Hash hash);  // 638
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 643
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
			unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Element(
		unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::LeftChild(
			unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::RightChild(
			unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Find(
		const KeyType_t& key);  // 644
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
			unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Element(
		unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::LeftChild(
			unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::RightChild(
			unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t*, unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Find(
		const KeyType_t& key);  // 650
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::Element(
		unsigned int i);  // 92
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
			IndexType_t i);  // 678
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 679
} /* size: 1182, variables: 1, inline expansions: 32 (1187 bytes) */

// <00676A5F> vulkan/pipelinecachemgrvulkan.cpp:686
// variables: 28
// function calls: 72
void CFossilizeStateCreator::enqueue_create_graphics_pipeline(Hash index, const VkGraphicsPipelineCreateInfo* pGraphicsPipelineCreateInfo, VkPipeline* ppPipelineOut)
{
	IndexType_t nPipelineIndex; // 700
	{
		FossilizeGraphicsPipeline_t* pNewGraphicsPipeline; // 710
		const VkBaseInStructure* pBaseIn; // 838
		const VkPipelineRenderingCreateInfoKHR* pPipelineRenderingCreateInfo; // 839
		{
			const VkPipelineVertexInputStateCreateInfo* pVertexInputState; // 716
			{
				uint32_t nAttrib; // 719
			}
			{
				uint32_t nBinding; // 726
			}
		}
		{
			const VkPipelineDepthStencilStateCreateInfo* pDepthStencilState; // 737
		}
		{
			const VkPipelineColorBlendStateCreateInfo* pCBState; // 755
			{
				uint32_t nTarget; // 756
			}
		}
		{
			const VkPipelineRasterizationStateCreateInfo* pRSState; // 772
		}
		{
			const VkPipelineInputAssemblyStateCreateInfo* pIAState; // 784
		}
		{
			const VkPipelineTessellationStateCreateInfo* pTessState; // 791
		}
		{
			const VkPipelineMultisampleStateCreateInfo* pMsState; // 798
		}
		{
			const VkPipelineViewportStateCreateInfo* pViewportState; // 810
		}
		{
			uint32_t nStage; // 817
			{
				const VkPipelineShaderStageCreateInfo& stageInfo; // 819
				RenderShaderType_t eShaderType; // 820
				Hash shaderModuleHash; // 824
				FossilizeShaderModule_t* pShaderModule; // 825
				{
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_828; // 828
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 943
					Lock(CThreadMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 978
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
							const CThreadMutex& lock,
							const char* pFilename,
							int nLineNumber);  // 828
					CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::IsIdxValid(
							short unsigned int i);  // 588
					CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
							short unsigned int i);  // 594
					CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::IsValidIndex(
							short unsigned int i);  // 583
					CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::IsIdxAfter(
							short unsigned int i,
							const Iterator_t& it);  // 591
					CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::IsValidIndex(
							short unsigned int i);  // 977
					{
					}
					CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
							short unsigned int i);  // 367
					CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::InternalElement(
							short unsigned int i);  // 982
					CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
							short unsigned int i);  // 367
					CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::InternalElement(
							short unsigned int i);  // 1011
					CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::LinkBefore(
							short unsigned int before,
							short unsigned int elem);  // 822
					CopyConstruct<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t*>(const FossilizeGraphicsPipeline_t ** pMemory,
															const FossilizeGraphicsPipeline_t* const& src);  // 825
					CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
							short unsigned int i);  // 482
					CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Element(
						short unsigned int i);  // 825
					CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::InsertBefore(
							short unsigned int before,
							const FossilizeGraphicsPipeline_t* const& src);  // 856
					CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::AddToTail(
							const FossilizeGraphicsPipeline_t* const& src);  // 829
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 944
					Unlock(CThreadMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 983
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 830
				}
			}
		}
		{
			uint32 nColorAttach; // 853
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 711
		PipelineCreateInfo_t::PipelineCreateInfo_t(); // 76
		FossilizeGraphicsPipeline_t::FossilizeGraphicsPipeline_t(); // 710
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
				unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Element(
			unsigned int i);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::LeftChild(
				unsigned int i);  // 1667
		CDefLess<long unsigned int>::operator(
				const long unsigned int& lhs,
				const long unsigned int& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::RightChild(
				unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			unsigned int newNode; // 1696
		}
		{
			unsigned int newNode; // 1709
			{
			}
		}
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 869
	}
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 240
	count(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, this,
		const key_type& __k);  // 764
	count(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocat this,
		const key_type& __x);  // 241
	CFossilizeStateCreator::IncludeObject(
			ResourceTag tag,
			Hash hash);  // 688
	CRenderDeviceVulkan::KHRDynamicRenderingEnabled(); // 265
	{
		const VkBaseInStructure* pBaseIn; // 276
		bool bFoundDynamicRenderingStruct; // 277
	}
	{
		uint32 nState; // 301
		{
			VkDynamicState nDynamicState; // 303
			CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 305
			CRenderDeviceVulkan::EXTExtendedDynamicState2Enabled(); // 325
			CRenderDeviceVulkan::EXTExtendedDynamicState3Enabled(); // 334
		}
	}
	CFossilizeStateCreator::UsingUnsupportedState(
				const VkGraphicsPipelineCreateInfo* pGraphicsPipelineCreateInfo);  // 694
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 699
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
			unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Element(
		unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::LeftChild(
			unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::RightChild(
			unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Find(
		const KeyType_t& key);  // 700
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
			unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Element(
		unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::LeftChild(
			unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::RightChild(
			unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t*, unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Find(
		const KeyType_t& key);  // 706
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Element(
		unsigned int i);  // 92
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
			IndexType_t i);  // 873
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 874
} /* size: 2929, variables: 1, inline expansions: 34 (1365 bytes) */

// <00676A01> vulkan/pipelinecachemgrvulkan.cpp:881
void CFossilizeStateCreator::enqueue_create_raytracing_pipeline(Hash hash, const VkRayTracingPipelineCreateInfoKHR* pRayTracingPipelineCreateInfo, VkPipeline* ppPipeline)
{
} /* size: 10 */

// <006759A3> vulkan/pipelinecachemgrvulkan.cpp:903
// variables: 5
// function calls: 60
void CFossilizeStateCreator::GetShaderModule(Hash shaderModuleHash)
{
	IndexType_t nShaderModuleIndex; // 906
	FossilizeShaderModule_t* pShaderModule; // 926
	{
		FossilizeShaderModule_t* pNewShaderModule; // 916
		CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::InvalidIterator(); // 448
		CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::ConstructList(); // 454
		CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::ResetDbgInfo(); // 455
		CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::CUtlLinkedList(
				int growSize,
				int initSize);  // 102
		CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::InvalidIterator(); // 448
		CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::ConstructList(); // 454
		CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::ResetDbgInfo(); // 455
		CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::CUtlLinkedList(
				int growSize,
				int initSize);  // 102
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::Init(); // 178
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::CUtlHashtable(
				int minimumSize);  // 102
		FossilizeShaderModule_t::FossilizeShaderModule_t(); // 916
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Purge(); // 284
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::Purge(); // 920
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
				unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Element(
			unsigned int i);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::LeftChild(
				unsigned int i);  // 1667
		CDefLess<long unsigned int>::operator(
				const long unsigned int& lhs,
				const long unsigned int& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::RightChild(
				unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			unsigned int newNode; // 1696
		}
		{
			unsigned int newNode; // 1709
			{
			}
		}
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 922
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
			unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Element(
		unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::LeftChild(
			unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::RightChild(
			unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Find(
		const KeyType_t& key);  // 906
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
			unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Element(
		unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::LeftChild(
			unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::RightChild(
			unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Find(
		const KeyType_t& key);  // 912
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Element(
		unsigned int i);  // 92
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
			IndexType_t i);  // 926
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 927
} /* size: 739, variables: 2, inline expansions: 27 (777 bytes) */

// <00684995> vulkan/pipelinecachemgrvulkan.cpp:935
// variables: 7
// function calls: 114
void FossilizeDescriptorSetLayout_t::HashDescriptorSetLayout()
{
	CUtlVectorFixedGrowable<PipelineLayoutImmutableSampler_t, 4> immutableSamplers; // 937
	PipelineLayoutCreateInfo_t pipelineLayoutHash; // 939
	CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int> >& layoutBindings; // 945
	PipelineLayoutCreateHashFunctor_t hash; // 970
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
			PipelineLayoutImmutableSampler_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<PipelineLayoutImmutableSampler_t, int>::CUtlMemoryFixedGrowable_Base(
					PipelineLayoutImmutableSampler_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, PipelineLayoutImmutableSampler_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int>  this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<PipelineLayoutImmutableSampler_t, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 937
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 255
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this); // 255
	CUtlMemory<VkPushConstantRange, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkPushConstantRange, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVector(); // 255
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(); // 255
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 255
	PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(); // 939
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 942
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int i);  // 947
	{
		int32_t nBinding; // 952
		{
			PipelineLayoutImmutableSampler_t newImmutableSampler; // 959
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
					int i);  // 957
			CUtlMemory<VkDescriptorSetLayoutBinding, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator[](
					int i);  // 957
			PipelineLayoutImmutableSampler_t::PipelineLayoutImmutableSampler_t(); // 959
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::NumAllocated(); // 1196
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int>  this,
				int i);  // 1201
			CopyConstruct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory,
									const PipelineLayoutImmutableSampler_t& src);  // 1201
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
			Base(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 368
			ResetDbgInfo(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 824
			GrowMemory(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int>  this,
					int num);  // 1198
			AddToTail(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int>  this,
					const PipelineLayoutImmutableSampler_t& src);  // 964
		}
	}
	Count(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, this); // 967
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 102
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding* pFrom,
							const VkDescriptorSetLayoutBinding* pFromEnd,
							VkDescriptorSetLayoutBinding* pTo);  // 173
	UtlTraitsCopyRange<PipelineLayoutImmutableSampler_t>(const PipelineLayoutImmutableSampler_t* pFrom,
								const PipelineLayoutImmutableSampler_t* pFromEnd,
								PipelineLayoutImmutableSampler_t* pTo);  // 1344
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CopyArray(
			const PipelineLayoutImmutableSampler_t* pArray,
			int size);  // 968
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
	Base(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 968
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 511
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 512
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 513
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 514
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 515
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 515
	{
		int16 nDescriptorSet; // 516
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 518
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this,
				int i);  // 520
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 520
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 520
		Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 521
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int,  this,
				int i);  // 523
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 523
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 525
		CUtlMemory<unsigned int, int>::Base(); // 113
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 525
		HashCombine(uint32& nSeed,
				uint32 nHash);  // 525
	}
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 113
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 536
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 536
	CUtlMemory<VkPushConstantRange, int>::Base(); // 113
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 532
	HashCombine(uint32& nSeed,
			uint32 nHash);  // 532
	PipelineLayoutCreateHashFunctor_t::operator(
			const PipelineLayoutCreateInfo_t& pipelineLayoutCreateInfo);  // 971
	RemoveAll(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 1798
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ConvertToExternalMemory(
				PipelineLayoutImmutableSampler_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<PipelineLayoutImmutableSampler_t, int>::Purge_FixedGrowable(
				PipelineLayoutImmutableSampler_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<PipelineLayoutImmutableSampler_t, int>::Purge_FixedGrowable(
				PipelineLayoutImmutableSampler_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, PipelineLayoutImmutableSampler_t, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
	Base(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 368
	ResetDbgInfo(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 1800
	Purge(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 560
	ValidateAlignment<PipelineLayoutImmutableSampler_t>(void); // 508
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 903
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 510
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<PipelineLayoutImmutableSampler_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemoryFixedGrowable<PipelineLayoutImmutableSampler_t, 4, int> this); // 478
	CUtlVectorFixedGrowable<PipelineLayoutImmutableSampler_t, 4>::~CUtlVectorFixedGrowable(); // 972
} /* size: 1617, variables: 4, inline expansions: 84 (2539 bytes) */

// <006758F1> vulkan/pipelinecachemgrvulkan.cpp:935
// variables: 6
inline void CFossilizeStateCreator::HashDescriptorSetLayout(const FossilizeDescriptorSetLayout_t* pDescriptorSetLayout)
{
	CUtlVectorFixedGrowable<PipelineLayoutImmutableSampler_t, 4> immutableSamplers; // 937
	PipelineLayoutCreateInfo_t pipelineLayoutHash; // 939
	CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int> >& layoutBindings; // 945
	PipelineLayoutCreateHashFunctor_t hash; // 970
	{
		int32_t nBinding; // 952
		{
			PipelineLayoutImmutableSampler_t newImmutableSampler; // 959
		}
	}
} /* size: 0, variables: 4 */

// <00674DC2> vulkan/pipelinecachemgrvulkan.cpp:977
// variables: 8
// function calls: 44
void CFossilizeStateCreator::PreWarmVSPSPairs(const FossilizeGraphicsPipeline_t* pGraphicsPipeline, CPipelineVulkan& newPipeline, FossilizeShaderModule_t* pVSShaderModule, FossilizeShaderModule_t* pPSShaderModule, int32 nStaticDescriptorSetCount)
{
	{
		UtlHashHandle_t hVS; // 982
		{
			UtlHashHandle_t hPS; // 989
			{
				PerThreadDataVulkan_t* pPerThread; // 998
				CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
						int i);  // 297
				CUtlHashtable<long unsigned int, const CShaderVulkanBase::operator[](
						handle_t idx);  // 991
				CPipelineVulkan::MarkPipelineDirty(); // 1293
				CPipelineVulkan::SetStaticDescriptorSetCountForPreWarm(
									uint32 nStaticDescriptorSetCount);  // 995
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 582
				CInterlockedIntT<int, 4>::operator++(
						int);  // 55
				PerThreadDataVulkan_t::AddRef(); // 999
				CInterlockedIntT<int, 4>::operator int(); // 56
				{
				}
				ThreadInterlockedDecrement(volatile int32* p); // 586
				CInterlockedIntT<int, 4>::operator--(); // 592
				CInterlockedIntT<int, 4>::operator--(
						int);  // 56
				PerThreadDataVulkan_t::Release(); // 1001
			}
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 915
				CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsValid(); // 917
			}
			CUtlHashtable<long unsigned int, const CShaderVulkanBase::NextHandle(
					handle_t start);  // 208
			CUtlHashtable<long unsigned int, const CShaderVulkanBase::FirstHandle(); // 989
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 915
				CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsValid(); // 917
			}
			CUtlHashtable<long unsigned int, const CShaderVulkanBase::NextHandle(
					handle_t start);  // 989
		}
		{
			PerThreadDataVulkan_t* pPerThread; // 1014
			CPipelineVulkan::MarkPipelineDirty(); // 1293
			CPipelineVulkan::SetStaticDescriptorSetCountForPreWarm(
								uint32 nStaticDescriptorSetCount);  // 1011
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 55
			PerThreadDataVulkan_t::AddRef(); // 1015
			CInterlockedIntT<int, 4>::operator int(); // 56
			{
			}
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 592
			CInterlockedIntT<int, 4>::operator--(
					int);  // 56
			PerThreadDataVulkan_t::Release(); // 1017
		}
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 915
			CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsValid(); // 917
		}
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::FirstHandle(); // 982
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
				int i);  // 297
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::operator[](
				handle_t idx);  // 984
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 915
			CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsValid(); // 917
		}
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::NextHandle(
				handle_t start);  // 982
	}
} /* size: 799 */

// <00674467> vulkan/pipelinecachemgrvulkan.cpp:1026
// variables: 21
// function calls: 21
void CFossilizeStateCreator::CreateGraphicsPipeline(const FossilizeGraphicsPipeline_t* pGraphicsPipeline)
{
	PipelineCreateInfo_t pipelineCreateInfo; // 1028
	const FossilizePipelineLayout_t* pFossilizePipelineLayout; // 1029
	const PipelineLayoutCreateInfo_t& pipelineLayoutCreateInfo; // 1030
	const FossilizeRenderPass_t* pFossilizeRenderPass; // 1031
	CPipelineVulkan newPipeline; // 1032
	uint32_t nStaticDescriptorSetCount; // 1035
	FossilizeShaderModule_t* pVSShaderModule; // 1059
	FossilizeShaderModule_t* pGSShaderModule; // 1060
	FossilizeShaderModule_t* pPSShaderModule; // 1061
	const char   __FUNCTION__; // 32184
	{
		uint32_t nSet; // 1037
		{
			int32 nDescriptorSetIndex; // 1039
			const FossilizeDescriptorSetLayout_t* pDescriptorSetLayout; // 1040
		}
	}
	{
		VkRenderPass pRenderPass; // 1066
		const VulkanFramebufferState_t& framebufferState; // 1067
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1065
		}
		{
			int nTarget; // 1063
		}
		CPipelineVulkan::MarkPipelineDirty(); // 1076
		memset(void* __dest,
			int __ch,
			size_t __len);  // 51
		V_memset(void* dest,
			int fill,
			int count);  // 1070
		CPipelineVulkan::SetRenderPass(
				int32_t nHighestRenderTargetBound,
				VkRenderPass pRenderPass,
				uint32 nSubPass,
				uint32 nSubPassCount,
				const VkFormat* pRenderTargetFormats,
				VkFormat nDepthStencilFormat);  // 1078
		CRenderDeviceVulkan::FramebufferManager(); // 1071
	}
	{
		UtlHashHandle_t hGS; // 1098
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 915
			CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsValid(); // 917
		}
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::FirstHandle(); // 1098
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
				int i);  // 297
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::operator[](
				handle_t idx);  // 1100
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 915
			CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsValid(); // 917
		}
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::NextHandle(
				handle_t start);  // 1098
	}
	Max<int>(const int& val1,
		const int& val2);  // 1035
	CPipelineVulkan::SetPipelineInfo(
			const PipelineCreateInfo_t& pipelineCreateInfo);  // 1056
	{
		int nTarget; // 1063
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 1070
	CPipelineVulkan::SetRenderPass(
			int32_t nHighestRenderTargetBound,
			VkRenderPass pRenderPass,
			uint32 nSubPass,
			uint32 nSubPassCount,
			const VkFormat* pRenderTargetFormats,
			VkFormat nDepthStencilFormat);  // 1085
} /* size: 1497, variables: 10, inline expansions: 5 (539 bytes) */

// <00673CAE> vulkan/pipelinecachemgrvulkan.cpp:1110
// variables: 15
// function calls: 24
void CFossilizeStateCreator::CreateComputePipeline(const FossilizeComputePipeline_t* pComputePipeline)
{
	PipelineCreateInfo_t pipelineCreateInfo; // 1112
	const FossilizePipelineLayout_t* pFossilizePipelineLayout; // 1113
	const PipelineLayoutCreateInfo_t& pipelineLayoutCreateInfo; // 1114
	CPipelineVulkan newPipeline; // 1115
	uint32_t nStaticDescriptorSetCount; // 1118
	FossilizeShaderModule_t* pPipelineShaderModule; // 1129
	const char   __FUNCTION__; // 32157
	{
		uint32_t nSet; // 1120
		{
			int32 nDescriptorSetIndex; // 1122
			const FossilizeDescriptorSetLayout_t* pDescriptorSetLayout; // 1123
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1130
	}
	{
		UtlHashHandle_t hShader; // 1133
		{
			PerThreadDataVulkan_t* pPerThread; // 1140
			CPipelineVulkan::MarkPipelineDirty(); // 1293
			CPipelineVulkan::SetStaticDescriptorSetCountForPreWarm(
								uint32 nStaticDescriptorSetCount);  // 1137
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
					int i);  // 297
			CUtlHashtable<long unsigned int, const CShaderVulkanBase::operator[](
					handle_t idx);  // 1135
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 55
			PerThreadDataVulkan_t::AddRef(); // 1141
			CInterlockedIntT<int, 4>::operator int(); // 56
			{
			}
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 592
			CInterlockedIntT<int, 4>::operator--(
					int);  // 56
			PerThreadDataVulkan_t::Release(); // 1143
		}
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 915
			CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsValid(); // 917
		}
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::FirstHandle(); // 1133
		CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 915
			CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IsValid(); // 917
		}
		CUtlHashtable<long unsigned int, const CShaderVulkanBase::NextHandle(
				handle_t start);  // 1133
	}
	Max<int>(const int& val1,
		const int& val2);  // 1118
	CPipelineVulkan::SetPipelineInfo(
			const PipelineCreateInfo_t& pipelineCreateInfo);  // 1127
} /* size: 703, variables: 7, inline expansions: 2 (69 bytes) */

// <00673C45> vulkan/pipelinecachemgrvulkan.cpp:1149
// variables: 3
inline void CFossilizeStateCreator::RegisterShader(const CShaderVulkanBase* pShader, const VkShaderModuleCreateInfo& shaderModuleCreateInfo)
{
	const char   __FUNCTION__; // 31988
	Hash nHash; // 1152
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1151
	}
} /* size: 0, variables: 2 */

// <00672266> vulkan/pipelinecachemgrvulkan.cpp:1170
// variables: 14
// function calls: 101
void CFossilizeStateCreator::ProcessShader(Hash nHash, const CShaderVulkanBase* pShader)
{
	IndexType_t nShaderIndex; // 1173
	{
		FossilizeShaderModule_t* pShaderModule; // 1176
		{
			short unsigned int nIndex; // 1181
			{
				const FossilizeGraphicsPipeline_t* pGraphicsPipeline; // 1183
				uint32_t nTotalShaders; // 1184
				uint32_t nHookedUpShaders; // 1185
				bool bHookedUpNewShader; // 1186
				{
					uint32_t nShader; // 1187
					{
						FossilizeShaderModule_t* pPipelineShaderModule; // 1189
						{
							IndexType_t nMatchedShaderIndex; // 1200
							CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
									int i);  // 720
							CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase::CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>(
															const long unsigned int& k,
															const CShaderVulkanBase* const& v);  // 1514
							Construct<CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>, long unsigned int&, const CShaderVulkanBase*&>(CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* pMemory); // 720
							CUtlHashtable<long unsigned int, const CShaderVulkanBase::DoInsert<long unsigned int>(
											long unsigned int k,
											Arg_t v,
											unsigned int h,
											bool* pDidInsert);  // 714
							CUtlHashtable<long unsigned int, const CShaderVulkanBase::DoInsert<long unsigned int>(
											long unsigned int k,
											Arg_t v,
											unsigned int h,
											bool* pDidInsert);  // 249
							CUtlHashtable<long unsigned int, const CShaderVulkanBase::Insert(
								KeyArg_t k,
								ValueArg_t v,
								bool* pDidInsert);  // 1197
							CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
									short unsigned int i);  // 545
							CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
								short unsigned int i);  // 1912
							CUtlRBTree<CUtlMap<const CShaderVulkanBase::LeftChild(
									short unsigned int i);  // 1913
							CDefLess<const CShaderVulkanBase::operator(
									const CShaderVulkanBase* const& lhs,
									const CShaderVulkanBase* const& rhs);  // 426
							CKeyLess::operator(
									const KeyType_t& left,
									const Node_t& right);  // 1912
							CUtlRBTree<CUtlMap<const CShaderVulkanBase::RightChild(
									short unsigned int i);  // 1915
							CUtlRBTree<CUtlMap<const CShaderVulkanBase::FindAltKeyType<const CShaderVulkanBase*, CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::CKeyLess>(
																const CShaderVulkanBase* const& search,
																const CKeyLess& altLess);  // 298
							CUtlRBTree<CUtlMap<const CShaderVulkanBase::FindAltKeyType<const CShaderVulkanBase*>(
												const CShaderVulkanBase* const& search);  // 243
							CUtlMap<const CShaderVulkanBase::Find(
								const KeyType_t& key);  // 1200
							Node_t::Node_t(
								const KeyType_t& k);  // 213
							CUtlMap<const CShaderVulkanBase::Insert(
								const KeyType_t& key,
								ERBTreeInsertBehavior eInsertBehavior);  // 1203
							CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::ValidateGrowSize(); // 475
							CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::CUtlMemory(
									int nGrowSize,
									int nInitAllocationCount);  // 448
							Iterator_t::Iterator_t(
									short unsigned int i);  // 86
							CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::InvalidIterator(); // 448
							CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::ConstructList(); // 454
							CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::ResetDbgInfo(); // 455
							CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::CUtlLinkedList(
									int growSize,
									int initSize);  // 1204
							CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
									short unsigned int i);  // 539
							CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
								short unsigned int i);  // 92
							CUtlMap<const CShaderVulkanBase::operator[](
									IndexType_t i);  // 1206
							CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
									short unsigned int i);  // 539
							CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
								short unsigned int i);  // 92
							CUtlMap<const CShaderVulkanBase::operator[](
									IndexType_t i);  // 1204
							CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
									short unsigned int i);  // 482
							CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::Element(
								short unsigned int i);  // 825
							CopyConstruct<CFossilizeStateCreator::FossilizeShaderModule_t*>(FossilizeShaderModule_t** pMemory,
															FossilizeShaderModule_t* const& src);  // 825
							CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::InsertBefore(
									short unsigned int before,
									FossilizeShaderModule_t* const& src);  // 856
							CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::AddToTail(
									FossilizeShaderModule_t* const& src);  // 1206
						}
						CShaderVulkanBase::GetHash(); // 1195
						Mix64HashFunctor::operator(
								uint64 s);  // 218
						CUtlHashtable<long unsigned int, const CShaderVulkanBase::Find(
							KeyArg_t k);  // 1195
						CUtlHashtable<long unsigned int, const CShaderVulkanBase::Count(); // 1211
					}
				}
				CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
						short unsigned int i);  // 494
				CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
						short unsigned int i);  // 1183
			}
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Head(); // 1181
			CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeGraphicsPipeline_t::Next(
				short unsigned int i);  // 1181
		}
		{
			short unsigned int nIndex; // 1228
			{
				const FossilizeComputePipeline_t* pComputePipeline; // 1230
				FossilizeShaderModule_t* pPipelineShaderModule; // 1231
				{
					IndexType_t nMatchedShaderIndex; // 1241
					CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
							int i);  // 720
					CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase::CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>(
													const long unsigned int& k,
													const CShaderVulkanBase* const& v);  // 1514
					Construct<CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>, long unsigned int&, const CShaderVulkanBase*&>(CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* pMemory); // 720
					CUtlHashtable<long unsigned int, const CShaderVulkanBase::DoInsert<long unsigned int>(
									long unsigned int k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 714
					CUtlHashtable<long unsigned int, const CShaderVulkanBase::DoInsert<long unsigned int>(
									long unsigned int k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 249
					CUtlHashtable<long unsigned int, const CShaderVulkanBase::Insert(
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 1238
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
							short unsigned int i);  // 545
					CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
						short unsigned int i);  // 1912
					CUtlRBTree<CUtlMap<const CShaderVulkanBase::LeftChild(
							short unsigned int i);  // 1913
					CDefLess<const CShaderVulkanBase::operator(
							const CShaderVulkanBase* const& lhs,
							const CShaderVulkanBase* const& rhs);  // 426
					CKeyLess::operator(
							const KeyType_t& left,
							const Node_t& right);  // 1912
					CUtlRBTree<CUtlMap<const CShaderVulkanBase::RightChild(
							short unsigned int i);  // 1915
					CUtlRBTree<CUtlMap<const CShaderVulkanBase::FindAltKeyType<const CShaderVulkanBase*, CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::CKeyLess>(
																const CShaderVulkanBase* const& search,
																const CKeyLess& altLess);  // 298
					CUtlRBTree<CUtlMap<const CShaderVulkanBase::FindAltKeyType<const CShaderVulkanBase*>(
										const CShaderVulkanBase* const& search);  // 243
					CUtlMap<const CShaderVulkanBase::Find(
						const KeyType_t& key);  // 1241
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
							short unsigned int i);  // 539
					CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
						short unsigned int i);  // 92
					CUtlMap<const CShaderVulkanBase::operator[](
							IndexType_t i);  // 1247
					CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
							short unsigned int i);  // 482
					CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::Element(
						short unsigned int i);  // 825
					CopyConstruct<CFossilizeStateCreator::FossilizeShaderModule_t*>(FossilizeShaderModule_t** pMemory,
													FossilizeShaderModule_t* const& src);  // 825
					CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::InsertBefore(
							short unsigned int before,
							FossilizeShaderModule_t* const& src);  // 856
					CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::AddToTail(
							FossilizeShaderModule_t* const& src);  // 1247
					Node_t::Node_t(
						const KeyType_t& k);  // 213
					CUtlMap<const CShaderVulkanBase::Insert(
						const KeyType_t& key,
						ERBTreeInsertBehavior eInsertBehavior);  // 1244
					CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::ValidateGrowSize(); // 475
					CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 448
					Iterator_t::Iterator_t(
							short unsigned int i);  // 86
					CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::InvalidIterator(); // 448
					CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::ConstructList(); // 454
					CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::ResetDbgInfo(); // 455
					CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::CUtlLinkedList(
							int growSize,
							int initSize);  // 1245
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
							short unsigned int i);  // 539
					CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
						short unsigned int i);  // 92
					CUtlMap<const CShaderVulkanBase::operator[](
							IndexType_t i);  // 1245
				}
				CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
						short unsigned int i);  // 494
				CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
						short unsigned int i);  // 1230
				CShaderVulkanBase::GetHash(); // 1236
				Mix64HashFunctor::operator(
						uint64 s);  // 218
				CUtlHashtable<long unsigned int, const CShaderVulkanBase::Find(
					KeyArg_t k);  // 1236
			}
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::Head(); // 1228
			CUtlMemory<UtlLinkedListElem_t<const CFossilizeStateCreator::FossilizeComputePipeline_t::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<const CFossilizeStateCreator::FossilizeComputePipeline_t::Next(
				short unsigned int i);  // 1228
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
				unsigned int i);  // 539
		CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Element(
			unsigned int i);  // 92
		CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
				IndexType_t i);  // 1176
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
			unsigned int i);  // 545
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Element(
		unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::LeftChild(
			unsigned int i);  // 1913
	CDefLess<long unsigned int>::operator(
			const long unsigned int& lhs,
			const long unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::RightChild(
			unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::FindAltKeyType<long unsigned int, CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t*, unsigned int, CDefLess<long unsigned int> >::CKeyLess>(
																const long unsigned int& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::FindAltKeyType<long unsigned int>(
						const long unsigned int& search);  // 243
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::Find(
		const KeyType_t& key);  // 1173
} /* size: 1609, variables: 1, inline expansions: 9 (287 bytes) */

// <0067220A> vulkan/pipelinecachemgrvulkan.cpp:1258
// variables: 2
inline void CFossilizeStateCreator::UnregisterShader(RenderShaderHandle_t hShader, const CShaderVulkanBase* pShader)
{
	const char   __FUNCTION__; // 32037
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1260
	}
} /* size: 0, variables: 1 */

// <006714E4> vulkan/pipelinecachemgrvulkan.cpp:1277
// variables: 7
// function calls: 54
void CFossilizeStateCreator::RemoveShaderFromMatchedShaders(const CShaderVulkanBase* pShader)
{
	IndexType_t nMatchedShaderIndex; // 1285
	{
		CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t*, short unsigned int>, short unsigned int> >* pMatchedShaderList; // 1288
		{
			short unsigned int nShaderIndex; // 1289
			{
				CUtlHashtable<long unsigned int, const CShaderVulkanBase*, DefaultHashFunctor<long unsigned int>, DefaultEqualFunctor<long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*>, int> >& matchingShaders; // 1291
				CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
						short unsigned int i);  // 494
				CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
						short unsigned int i);  // 1291
				{
					unsigned int chainid; // 776
					unsigned int nextIdx; // 777
					IdealIndex(uint32_if32BitStorage h,
							uint32 m);  // 776
					CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
							int i);  // 781
					CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IdealIndex(
							uint32 slotmask);  // 781
					CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
							int i);  // 789
					CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
							int i);  // 790
					CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
							int i);  // 790
					{
						int i; // 121
					}
					CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::MoveDataFrom(
							CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase*>& src);  // 790
					CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
							int i);  // 791
					CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::MarkInvalid(); // 791
				}
				CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::Count(); // 747
				CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
						int i);  // 756
				CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::MarkInvalid(); // 760
				CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::IdealIndex(
						uint32 slotmask);  // 757
				CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
						int i);  // 761
				CUtlMemory<CUtlHashtableEntry<long unsigned int, const CShaderVulkanBase::operator[](
						int i);  // 769
				CUtlHashtable<long unsigned int, const CShaderVulkanBase::DoRemove<long unsigned int>(
								long unsigned int x,
								unsigned int h);  // 267
				CUtlHashtable<long unsigned int, const CShaderVulkanBase::Remove(
					KeyArg_t k);  // 1294
				Mix64HashFunctor::operator(
						uint64 s);  // 218
				CUtlHashtable<long unsigned int, const CShaderVulkanBase::Find(
					KeyArg_t k);  // 1292
				CShaderVulkanBase::GetHash(); // 1292
			}
			CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::Head(); // 1289
			CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::Next(
				short unsigned int i);  // 1289
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
			short unsigned int i);  // 92
		CUtlMap<const CShaderVulkanBase::operator[](
				IndexType_t i);  // 1288
		ValidateAlignment<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t*, short unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<CFossilizeStateCreator::FossilizeShaderModule_t::~CUtlMemory(); // 462
		CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t::~CUtlLinkedList(); // 1297
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
		short unsigned int i);  // 1912
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::LeftChild(
			short unsigned int i);  // 1913
	CDefLess<const CShaderVulkanBase::operator(
			const CShaderVulkanBase* const& lhs,
			const CShaderVulkanBase* const& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::RightChild(
			short unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::FindAltKeyType<const CShaderVulkanBase*, CUtlMap<const CShaderVulkanBase*, CUtlLinkedList<CFossilizeStateCreator::FossilizeShaderModule_t*>*, short unsigned int, CDefLess<const CShaderVulkanBase*> >::CKeyLess>(
																const CShaderVulkanBase* const& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::FindAltKeyType<const CShaderVulkanBase*>(
						const CShaderVulkanBase* const& search);  // 243
	CUtlMap<const CShaderVulkanBase::Find(
		const KeyType_t& key);  // 1285
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::LeftChild(
			short unsigned int i);  // 1895
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::Element(
		short unsigned int i);  // 1894
	CDefLess<const CShaderVulkanBase::operator(
			const CShaderVulkanBase* const& lhs,
			const CShaderVulkanBase* const& rhs);  // 418
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1894
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::RightChild(
			short unsigned int i);  // 1897
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::Find(
		const Node_t& search);  // 1227
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::Remove(
		const Node_t& search);  // 342
	Node_t::Node_t(
		const KeyType_t& k);  // 342
	CUtlMap<const CShaderVulkanBase::Remove(
		const KeyType_t& key);  // 1299
} /* size: 959, variables: 1, inline expansions: 19 (865 bytes) */

// <006710D9> vulkan/pipelinecachemgrvulkan.cpp:1305
// variable: 1
// function calls: 13
void CFossilizeStateCreator::SetDatabaseLoaded()
{
	RegisteredShader_t shader; // 1311
	RegisteredShader_t::RegisteredShader_t(); // 1311
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::PopItem(
		RegisteredShader_t* pResult);  // 1312
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::PopItem(
		RegisteredShader_t* pResult);  // 1318
} /* size: 408, variables: 1, inline expansions: 13 (523 bytes) */

// <006709B7> vulkan/pipelinecachemgrvulkan.cpp:1355
// variables: 6
// function calls: 26
void CFossilizeStateCreator::ParallelProcessPipelineWorkItem(PipelineWorkItem_t& pipelineWorkItem)
{
	StateReplayer perThreadReplayer; // 1357
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > jsonData; // 1362
	{
		int32 nIndex; // 1365
		{
			Hash nHash; // 1372
			ResourceTag nTag; // 1373
			size_t nEntrySize; // 1376
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ShiftElementsRight(
						int elem,
						int num);  // 1446
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
						int num);  // 1071
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::EnsureCount(
					int num);  // 1383
		}
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 1362
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1393
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1393
} /* size: 700, variables: 2, inline expansions: 18 (597 bytes) */

// <006709A0> vulkan/pipelinecachemgrvulkan.cpp:1436
void RegisteredShader_t::RegisteredShader_t()
{
} /* size: 0 */

// <00670987> vulkan/pipelinecachemgrvulkan.cpp:1436
inline void RegisteredShader_t::RegisteredShader_t()
{
} /* size: 0 */

// <00670961> vulkan/pipelinecachemgrvulkan.cpp:1443
void RegisteredShader_t::RegisteredShader_t(Hash nHash, RenderShaderHandle_t hShader, const CShaderVulkanBase* pShader)
{
} /* size: 0 */

// <00670921> vulkan/pipelinecachemgrvulkan.cpp:1443
inline void RegisteredShader_t::RegisteredShader_t(Hash nHash, RenderShaderHandle_t hShader, const CShaderVulkanBase* pShader)
{
} /* size: 0 */

// <0066F106> vulkan/pipelinecachemgrvulkan.cpp:1464
// function calls: 114
void CPipelineCacheManagerVulkan::CPipelineCacheManagerVulkan()
{
	CThreadMutex::CThreadMutex(
			const char* pName);  // 1464
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CSamplerStateDesc::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<long unsigned int, CSamplerStateDesc::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<long unsigned int, CSamplerStateDesc::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 120
	StateCreatorInterface::StateCreatorInterface(); // 120
	CThreadMutex::CThreadMutex(
			const char* pName);  // 120
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeDescriptorSetLayout_t::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 120
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizePipelineLayout_t::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 120
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeRenderPass_t::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 120
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeShaderModule_t::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 120
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeGraphicsPipeline_t::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 120
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<long unsigned int, CFossilizeStateCreator::FossilizeComputePipeline_t::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 120
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CShaderVulkanBase::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<const CShaderVulkanBase::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<const CShaderVulkanBase::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 120
	_Prime_rehash_policy::_Prime_rehash_policy(
				float __z);  // 513
	_Hash_code_base(const _Hash_code_base<long unsigned int, long unsigned int, std::__detail::_Identity, std::hash<long unsigned int>, std:: this); // 1395
	_Hashtable_base(const _Hashtable_base<long unsigned int, long unsigned int, std::__detail::_Identity, std::equal_to<long unsigned int>, s this); // 513
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_Hashtable_alloc(); // 513
	_Hash_node_base::_Hash_node_base(); // 513
	_Hashtable(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this); // 145
	unordered_set(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<lon this); // 120
	_Hash_code_base(const _Hash_code_base<long unsigned int, long unsigned int, std::__detail::_Identity, std::hash<long unsigned int>, std:: this); // 1395
	_Hashtable_base(const _Hashtable_base<long unsigned int, long unsigned int, std::__detail::_Identity, std::equal_to<long unsigned int>, s this); // 513
	_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<long unsigned int, false> > >::_Hashtable_alloc(); // 513
	_Hash_node_base::_Hash_node_base(); // 513
	_Prime_rehash_policy::_Prime_rehash_policy(
				float __z);  // 513
	_Hashtable(const _Hashtable<long unsigned int, long unsigned int, std::allocator<long unsigned int>, std::__detail::_Identity, std:: this); // 145
	unordered_set(const unordered_set<long unsigned int, std::hash<long unsigned int>, std::equal_to<long unsigned int>, std::allocator<lon this); // 120
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	RegisteredShader_t::RegisteredShader_t(); // 827
	Node_t::Node_t(); // 864
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::End(); // 865
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::CTSQueue(); // 120
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	RegisteredShader_t::RegisteredShader_t(); // 827
	Node_t::Node_t(); // 864
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::End(); // 865
	CTSQueue<CFossilizeStateCreator::RegisteredShader_t, false>::CTSQueue(); // 120
	CFossilizeStateCreator::CFossilizeStateCreator(); // 1466
} /* size: 1144, inline expansions: 114 (2871 bytes) */

// <0066F0ED> vulkan/pipelinecachemgrvulkan.cpp:1464
void CPipelineCacheManagerVulkan::CPipelineCacheManagerVulkan()
{
} /* size: 0 */

// <0066EFEF> vulkan/pipelinecachemgrvulkan.cpp:1469
// function calls: 3
void CPipelineCacheManagerVulkan::~CPipelineCacheManagerVulkan()
{
	CFossilizeStateCreator::~CFossilizeStateCreator(); // 1501
	CPipelineCacheManagerVulkan::Shutdown(); // 1471
	CThreadMutex::~CThreadMutex(); // 1472
} /* size: 108, inline expansions: 3 (100 bytes) */

// <0066EEB0> vulkan/pipelinecachemgrvulkan.cpp:1469
// function calls: 4
void CPipelineCacheManagerVulkan::~CPipelineCacheManagerVulkan()
{
	CFossilizeStateCreator::~CFossilizeStateCreator(); // 1501
	CPipelineCacheManagerVulkan::Shutdown(); // 1471
	CThreadMutex::~CThreadMutex(); // 1472
	CPipelineCacheManagerVulkan::~CPipelineCacheManagerVulkan(); // 1472
} /* size: 116, inline expansions: 4 (177 bytes) */

// <0066EE97> vulkan/pipelinecachemgrvulkan.cpp:1469
void CPipelineCacheManagerVulkan::~CPipelineCacheManagerVulkan()
{
} /* size: 0 */

// <0066EC7F> vulkan/pipelinecachemgrvulkan.cpp:1478
// variable: 1
// function calls: 7
void CPipelineCacheManagerVulkan::PreShutdown()
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1481; // 1481
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1481
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1487
	}
	CFossilizeStateCreator::Shutdown(); // 1492
} /* size: 157, inline expansions: 1 (7 bytes) */

// <00684902> vulkan/pipelinecachemgrvulkan.cpp:1499
// function call: 1
void CPipelineCacheManagerVulkan::Shutdown()
{
	CFossilizeStateCreator::~CFossilizeStateCreator(); // 1501
} /* size: 104, inline expansions: 1 (23 bytes) */

// <0066EC66> vulkan/pipelinecachemgrvulkan.cpp:1499
void CPipelineCacheManagerVulkan::Shutdown()
{
} /* size: 0 */

// <0066E598> vulkan/pipelinecachemgrvulkan.cpp:1508
// variables: 2
// function calls: 21
void FossilizeLogCallback(LogLevel nLogLevel, const char* pMessage, void* pUserData)
{
	CUtlString fossilizeStr; // 1512
	const char   __FUNCTION__; // 32130
	CUtlString::CUtlString(
			const char* pString);  // 1512
	CUtlString::ReplaceFastCaseless(
				const char* pchFrom,
				const char* pchTo);  // 1513
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1513
	CUtlString::~CUtlString(); // 1513
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 1515
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 1517
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1517
	CUtlString::~CUtlString(); // 1517
	CUtlString::~CUtlString(); // 1536
	CUtlString::Get(); // 1526
	CUtlString::Get(); // 1529
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1533
	CUtlString::Get(); // 1533
} /* size: 667, variables: 2, inline expansions: 21 (460 bytes) */

// <0066B922> vulkan/pipelinecachemgrvulkan.cpp:1542
// variables: 48
// function calls: 153
void CPipelineCacheManagerVulkan::Thread_PrepareFossilizeDb(DatabaseInterface* pFossilizeResolverPtr, const CBufferString& fossilizePathList)
{
	CCycleCount timer; // 1544
	uint64 nStartTick; // 1546
	CPlainAutoPtr<Fossilize::DatabaseInterface> pFossilizeResolver; // 1548
	const ResourceTag   initialPlaybackOrder; // 1570
	CUtlVector<long unsigned int, CUtlMemory<long unsigned int, int> > resourceHashes; // 1580
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > jsonData; // 1581
	StateReplayer fossilizeStateReplayer; // 1582
	uint64 nSerialTickTime; // 1645
	const ResourceTag   threadedPlaybackOrder; // 1648
	size_t nNumTotalWorkItems; // 1655
	const char   __FUNCTION__; // 32255
	double flTotalTime; // 1740
	double flSerialTime; // 1741
	double flParallelTime; // 1742
	uint64 nPreWarmStartTime; // 1746
	double flPreWarmTime; // 1753
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1554; // 1554
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1554
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1556
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1559; // 1559
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1559
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1563
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 1561
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1566; // 1566
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1566
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1568
	}
	{
		const ResourceTag& tag; // 1590
		const ResourceTag& __for_range; // 25455
		const ResourceTag* __for_begin; // 22576
		const ResourceTag* __for_end; // 22576
		{
			size_t nNumHashes; // 1597
			{
				size_t nHash; // 1615
				{
					const Hash& hash; // 1622
					size_t nEntrySize; // 1623
					CUtlMemory<long unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<long unsigned int, CUtlMemory<long unsigned int, int> >::operator[](
							int i);  // 1622
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ShiftElementsRight(
								int elem,
								int num);  // 1446
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
								int num);  // 1071
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::EnsureCount(
							int num);  // 1633
				}
			}
		}
	}
	{
		const ResourceTag& tag; // 1656
		const ResourceTag& __for_range; // 25467
		const ResourceTag* __for_begin; // 22576
		const ResourceTag* __for_end; // 22576
		{
			size_t nNumHashes; // 1658
		}
	}
	{
		IThreadPool* pThreadPool; // 1674
		CUtlVector<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> > resourceTags; // 1677
		int32 nNumWorkers; // 1681
		CUtlVector<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int> > pipelineWorkItems; // 1684
		int32 nNumItemsPerWorker; // 1686
		int32 nCurWorkIndex; // 1687
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1682
		}
		{
			int32 nWorker; // 1688
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1697
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1698
			}
		}
		{
			const ResourceTag& tag; // 1707
			const ResourceTag& __for_range; // 25467
			const ResourceTag* __for_begin; // 22576
			const ResourceTag* __for_end; // 22576
			{
				size_t nNumHashes; // 1709
				{
					size_t nHashIndex; // 1722
					CUtlMemory<Fossilize::ResourceTag, int>::operator[](
							int i);  // 588
					CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::operator[](
							int i);  // 1724
				}
			}
		}
		CAsyncCompileHelperVulkan::BEnabled(); // 1674
		CUtlMemory<Fossilize::ResourceTag, int>::Grow(
			int num);  // 806
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::AddMultipleToTail(
					int num);  // 1071
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::EnsureCount(
				int num);  // 1678
		CUtlMemory<Fossilize::ResourceTag, int>::ValidateGrowSize(); // 475
		CUtlMemory<Fossilize::ResourceTag, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::CUtlVector(); // 1677
		Min<int>(const int& val1,
			const int& val2);  // 1681
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this,
				int num);  // 1445
		InsertMultipleBefore(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this,
					int num);  // 1071
		EnsureCount(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this,
				int num);  // 1685
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 811
		CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::CInterlockedPtr(); // 811
		CParallelProcessor(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this,
					const char* pszDescription);  // 980
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 800
		CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::operator=(
				PipelineWorkItem_t* newValue);  // 819
		CParallelProcessorAbstract_Base::CParallelProcessorAbstract_Base(
						IThreadPool* pThreadPool);  // 564
		IMultipleWorkerJob::IMultipleWorkerJob(); // 564
		CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this,
						CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli pController,
						IThreadPool* pThreadPool);  // 825
		IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
		~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this); // 827
		Run(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this,
			PipelineWorkItem_t* pItems,
			unsigned int nItems,
			int nChunkSize,
			int nMaxParallel,
			IThreadPool* pThreadPool);  // 814
		Run(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this,
			PipelineWorkItem_t* pItems,
			unsigned int nItems,
			int nChunkSize,
			int nMaxParallel,
			IThreadPool* pThreadPool);  // 982
		Init(const CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCrea this,
			CFossilizeStateCreator* pObject,
			void ()(CFossilizeStateCreator *, PipelineWorkItem_t &) CFossilizeStateCreator::* pfnProcess,
			void ()(CFossilizeStateCreator *) CFossilizeStateCreator::* pfnBegin,
			void ()(CFossilizeStateCreator *) CFossilizeStateCreator::* pfnEnd);  // 981
		ParallelProcess<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>(const char* pszDescription,
																IThreadPool* pPool,
																PipelineWorkItem_t* pItems,
																unsigned int nItems,
																CFossilizeStateCreator* pObject,
																void ()(CFossilizeStateCreator *, PipelineWorkItem_t &) CFossilizeStateCreator::* pfnProcess,
																void ()(CFossilizeStateCreator *) CFossilizeStateCreator::* pfnBegin,
																void ()(CFossilizeStateCreator *) CFossilizeStateCreator::* pfnEnd,
																int nMaxParallel);  // 1730
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::Purge(); // 903
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this); // 560
		ValidateAlignment<CFossilizeStateCreator::PipelineWorkItem_t>(void); // 508
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::Purge(); // 510
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this); // 410
		~CUtlVector(const CUtlVector<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int> this); // 1731
		CUtlMemory<Fossilize::ResourceTag, int>::Purge(); // 903
		CUtlMemory<Fossilize::ResourceTag, int>::Purge(); // 1799
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::Purge(); // 560
		ValidateAlignment<Fossilize::ResourceTag>(void); // 508
		CUtlMemory<Fossilize::ResourceTag, int>::Purge(); // 510
		CUtlMemory<Fossilize::ResourceTag, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::~CUtlVector(); // 1731
		CAsyncCompileHelperVulkan::GetThreadPool(); // 1674
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::Purge(); // 903
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this); // 560
		ValidateAlignment<CFossilizeStateCreator::PipelineWorkItem_t>(void); // 508
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::Purge(); // 510
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this); // 410
		~CUtlVector(const CUtlVector<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int> this); // 1731
		CUtlMemory<Fossilize::ResourceTag, int>::Purge(); // 903
		CUtlMemory<Fossilize::ResourceTag, int>::Purge(); // 1799
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::Purge(); // 560
		ValidateAlignment<Fossilize::ResourceTag>(void); // 508
		CUtlMemory<Fossilize::ResourceTag, int>::Purge(); // 510
		CUtlMemory<Fossilize::ResourceTag, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Fossilize::ResourceTag, CUtlMemory<Fossilize::ResourceTag, int> >::~CUtlVector(); // 1731
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this); // 530
		CUtlVectorBase(const CUtlVectorBase<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, i this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CFossilizeStateCreator::PipelineWorkItem_t, CUtlMemory<CFossilizeStateCreator::PipelineWorkItem_t, int> this); // 1684
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 1544
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 1545
	CPlainAutoPtr<Fossilize::DatabaseInterface>::CPlainAutoPtr(
			DatabaseInterface* p);  // 1548
	CUtlMemory<long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long unsigned int, CUtlMemory<long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long unsigned int, CUtlMemory<long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long unsigned int, CUtlMemory<long unsigned int, int> >::CUtlVector(); // 1580
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 1581
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 1644
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 1739
	Plat_TickDiffMicroSecF(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 1740
	Plat_TickDiffMicroSecF(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 1741
	Plat_TickDiffMicroSecF(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 1742
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 1745
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 1751
	Plat_TickDiffMicroSecF(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 1752
	Plat_TickDiffMicroSecF(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 1753
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1756
	CUtlMemory<long unsigned int, int>::Purge(); // 903
	CUtlMemory<long unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<long unsigned int, CUtlMemory<long unsigned int, int> >::Purge(); // 560
	ValidateAlignment<long unsigned int>(void); // 508
	CUtlMemory<long unsigned int, int>::Purge(); // 510
	CUtlMemory<long unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<long unsigned int, CUtlMemory<long unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long unsigned int, CUtlMemory<long unsigned int, int> >::~CUtlVector(); // 1756
	CPlainAutoPtr<Fossilize::DatabaseInterface>::Delete(); // 103
	CPlainAutoPtr<Fossilize::DatabaseInterface>::~CPlainAutoPtr(); // 1756
} /* size: 0, variables: 16, inline expansions: 46 (1932 bytes) */

// <00640742> vulkan/pipelinecachemgrvulkan.cpp:1761
// variables: 11
// function calls: 44
void CPipelineCacheManagerVulkan::LoadFromPath(CPipelineManagerVulkan* pPipelineManager, const CUtlString& basePath, const CUtlStringList& readOnlyDatabasePaths, const CUtlString& whitelistPath, int32 nWhitelistDatabaseIndex)
{
	const char   __FUNCTION__; // 31934
	LogLevel nLogLevel; // 1767
	CBufferString finalFossilizePathList; // 1778
	DatabaseInterface* pFossilizeResolver; // 1791
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1763
	}
	{
		int32 nPath; // 1779
		CUtlVectorBase<char::Count(); // 1779
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 1781
		CUtlMemory<char::operator[](
				int i);  // 595
		CUtlVectorBase<char::operator[](
				int i);  // 1781
		CUtlVectorBase<char::Count(); // 1782
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 1784
	}
	{
		int32 nPath; // 1808
		CUtlVectorBase<char::Count(); // 1808
		CUtlMemory<char::operator[](
				int i);  // 595
		CUtlVectorBase<char::operator[](
				int i);  // 1812
	}
	{
		IThreadPool* pThreadPool; // 1830
		CAsyncCompileHelperVulkan::BEnabled(); // 1830
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 745
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 744
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 745
		CBufferString::CBufferString(
				const CBufferString& string);  // 1831
		{
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 750
			CBufferString::CBufferString(
					CBufferString& rhs);  // 1831
			<lambda>(const class* this,
				 &);  // 163
			_M_create<CPipelineCacheManagerVulkan::LoadFromPath(CPipelineManagerVulkan*, const CUtlString&, const CUtlStringList&, const CUtlString&, int32)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
			_M_init_functor<CPipelineCacheManagerVulkan::LoadFromPath(CPipelineManagerVulkan*, const CUtlString&, const CUtlStringList&, const CUtlString&, int32)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
			_M_not_empty_function<CPipelineCacheManagerVulkan::LoadFromPath(CPipelineManagerVulkan*, const CUtlString&, const CUtlStringList&, const CUtlString&, int32)::<lambda()> >(const &); // 449
		}
		_Function_base::_Function_base(); // 439
		function<void()>::function<CPipelineCacheManagerVulkan::LoadFromPath(
																class& __f); // 1831
		IThreadPool::QueueCall(
				const char* szDescription,
				function<void()>& func);  // 1831
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 1831
		CBufferString::~CBufferString(); // 1831
		~<lambda>(const class* this); // 1831
		CAsyncCompileHelperVulkan::GetThreadPool(); // 1830
	}
	CFossilizeStateCreator::Init(
		CPipelineManagerVulkan* pPipelineManager);  // 1775
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1778
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 1788
	CUtlString::Get(); // 1788
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 1792
	CUtlString::Get(); // 1792
	CUtlString::IsEmpty(); // 1796
	CUtlString::Get(); // 1798
	CUtlString::IsEmpty(); // 1802
	CBufferString::~CBufferString(); // 1841
} /* size: 0, variables: 4, inline expansions: 15 (374 bytes) */

// <0066B6EA> vulkan/pipelinecachemgrvulkan.cpp:1846
// variables: 2
// function calls: 2
void CPipelineCacheManagerVulkan::RegisterShader(const CShaderVulkanBase* pShader, const VkShaderModuleCreateInfo& shaderModuleCreateInfo)
{
	const char   __FUNCTION__; // 31988
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1848
	}
	{
	}
	RegisteredShader_t::RegisteredShader_t(
				Hash nHash,
				RenderShaderHandle_t hShader,
				const CShaderVulkanBase* pShader);  // 1162
	CFossilizeStateCreator::RegisterShader(
			const CShaderVulkanBase* pShader,
			const VkShaderModuleCreateInfo& shaderModuleCreateInfo);  // 1854
} /* size: 0, variables: 1, inline expansions: 2 (205 bytes) */

// <0066B52F> vulkan/pipelinecachemgrvulkan.cpp:1860
// function calls: 3
void CPipelineCacheManagerVulkan::UnregisterShader(RenderShaderHandle_t hShader, const CShaderVulkanBase* pShader)
{
	{
	}
	RegisteredShader_t::RegisteredShader_t(
				Hash nHash,
				RenderShaderHandle_t hShader,
				const CShaderVulkanBase* pShader);  // 1266
	CFossilizeStateCreator::UnregisterShader(
			RenderShaderHandle_t hShader,
			const CShaderVulkanBase* pShader);  // 1258
	CFossilizeStateCreator::UnregisterShader(
			RenderShaderHandle_t hShader,
			const CShaderVulkanBase* pShader);  // 1862
} /* size: 0, inline expansions: 3 (185 bytes) */

