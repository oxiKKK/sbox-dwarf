
//
// vulkan/shadertablevulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 7
//	class: 1
//

// <00BAC7FE> vulkan/shadertablevulkan.h:19
// member functions: 34
// member variables: 13
// class size: 1,184
class CShaderTableVulkan {
	/* vulkan/shadertablevulkan.h:48 */
	struct RefCountedShaderFile_t {
		int32 m_nRefCount; /* 0 4 */
		bool m_bIsSPIRV; /* 4 1 */
		CVfxShaderFile * m_pShaderFile; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/shadertablevulkan.h:58 */
	struct RefCountedShaderModule_t {
		int32 m_nRefCount; /* 0 4 */
		int32 m_nNumBytes; /* 4 4 */
		VkShaderModule m_pShaderModule; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/shadertablevulkan.h:76 */
	class CCommandMemberInitializer_OnPrintStats {
		/* vulkan/shadertablevulkan.h:76 */
		void CCommandMemberInitializer_OnPrintStats(CCommandMemberInitializer_OnPrintStats* );
	private:
		CConCommandMemberAccessor<CShaderTableVulkan> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnPrintStats(CCommandMemberInitializer_OnPrintStats* );
	};
	void CShaderTableVulkan(CShaderTableVulkan* , const CShaderTableVulkan& );
	int ()(void) * * _vptr.CShaderTableVulkan; /* 0 8 */
	/* vulkan/shadertablevulkan.cpp:26 */
	void CShaderTableVulkan(CShaderTableVulkan* );
	/* vulkan/shadertablevulkan.cpp:38 */
	virtual void ~CShaderTableVulkan(CShaderTableVulkan* );
	/* vulkan/shadertablevulkan.cpp:44 */
	void Shutdown(CShaderTableVulkan* );
	/* vulkan/shadertablevulkan.cpp:63 */
	UtlHashHandle_t AcquireVfxShaderFile(CShaderTableVulkan* , IRenderShaderByteCode* , bool& );
	/* vulkan/shadertablevulkan.cpp:145 */
	int32 ReleaseShaderFile(CShaderTableVulkan* , UtlHashHandle_t);
	/* vulkan/shadertablevulkan.cpp:342 */
	CVfxShaderFile* GetShaderFile(CShaderTableVulkan* , UtlHashHandle_t);
	/* vulkan/shadertablevulkan.cpp:163 */
	UtlHashHandle_t AcquireShaderModule(CShaderTableVulkan* , VkShaderModuleCreateInfo* , const char* );
	/* vulkan/shadertablevulkan.cpp:225 */
	int32 ReleaseShaderModule(CShaderTableVulkan* , UtlHashHandle_t);
	/* vulkan/shadertablevulkan.cpp:244 */
	VkShaderModule GetShaderModule(CShaderTableVulkan* , UtlHashHandle_t);
	/* vulkan/shadertablevulkan.cpp:251 */
	uint32 GetShaderModuleInstructionCount(const CShaderTableVulkan* , UtlHashHandle_t);
	/* vulkan/shadertablevulkan.h:36 */
	UtlHashHandle_t InvalidHandle(void);
	/* vulkan/shadertablevulkan.h:38 */
	VkValidationCacheEXT GetValidationCache(CShaderTableVulkan* );
	/* vulkan/shadertablevulkan.cpp:300 */
	bool FlushValidationCacheToDisk(CShaderTableVulkan* , bool);
private:
	/* vulkan/shadertablevulkan.cpp:260 */
	bool InitializeValidationCache(CShaderTableVulkan* );
	/* vulkan/shadertablevulkan.h:54 */
	typedef struct CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, short unsigned int, undefined_t> ShaderFileHashTable_t;
	ShaderFileHashTable_t m_shaderHashTable; /* 8 72 */
	CThreadRWLock_FastRead m_shaderHashTableRWLock __attribute__((__aligned__(8))); /* 80 408 */
	/* vulkan/shadertablevulkan.h:64 */
	typedef struct CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, short unsigned int, undefined_t> ShaderModuleHashTable_t;
	ShaderModuleHashTable_t m_shaderModuleHashTable; /* 488 72 */
	CThreadRWLock_FastRead m_shaderModuleHashTableRWLock __attribute__((__aligned__(8))); /* 560 408 */
	uint64 m_nTotalRequestedBytes; /* 968 8 */
	uint64 m_nTotalStoredBytes; /* 976 8 */
	uint64 m_nTotalShaderModuleRequestedBytes; /* 984 8 */
	uint64 m_nTotalShaderModuleStoredBytes; /* 992 8 */
	VkValidationCacheEXT m_pValidationCache; /* 1000 8 */
	bool m_bInitializedValidationCache; /* 1008 1 */
	size_t m_nValidationCacheSize; /* 1016 8 */
	/* vulkan/shadertablevulkan.cpp:349 */
	void OnPrintStats(CShaderTableVulkan* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnPrintStats m_OnPrintStats_register; /* 1024 160 */
	void CShaderTableVulkan(class CShaderTableVulkan *, const class CShaderTableVulkan  &); /* linkage=_ZN18CShaderTableVulkanC4ERKS_ */
	void CShaderTableVulkan(class CShaderTableVulkan *); /* linkage=_ZN18CShaderTableVulkanC4Ev */
	virtual void ~CShaderTableVulkan(class CShaderTableVulkan *); /* linkage=_ZN18CShaderTableVulkanD4Ev */
	void Shutdown(class CShaderTableVulkan *); /* linkage=_ZN18CShaderTableVulkan8ShutdownEv */
	UtlHashHandle_t AcquireVfxShaderFile(class CShaderTableVulkan *, class IRenderShaderByteCode *, bool &); /* linkage=_ZN18CShaderTableVulkan20AcquireVfxShaderFileEP21IRenderShaderByteCodeRb */
	int32 ReleaseShaderFile(class CShaderTableVulkan *, UtlHashHandle_t); /* linkage=_ZN18CShaderTableVulkan17ReleaseShaderFileEj */
	class CVfxShaderFile * GetShaderFile(class CShaderTableVulkan *, UtlHashHandle_t); /* linkage=_ZN18CShaderTableVulkan13GetShaderFileEj */
	UtlHashHandle_t AcquireShaderModule(class CShaderTableVulkan *, VkShaderModuleCreateInfo *, const char  *); /* linkage=_ZN18CShaderTableVulkan19AcquireShaderModuleEP24VkShaderModuleCreateInfoPKc */
	int32 ReleaseShaderModule(class CShaderTableVulkan *, UtlHashHandle_t); /* linkage=_ZN18CShaderTableVulkan19ReleaseShaderModuleEj */
	VkShaderModule GetShaderModule(class CShaderTableVulkan *, UtlHashHandle_t); /* linkage=_ZN18CShaderTableVulkan15GetShaderModuleEj */
	uint32 GetShaderModuleInstructionCount(const class CShaderTableVulkan  *, UtlHashHandle_t); /* linkage=_ZNK18CShaderTableVulkan31GetShaderModuleInstructionCountEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN18CShaderTableVulkan13InvalidHandleEv */
	VkValidationCacheEXT GetValidationCache(class CShaderTableVulkan *); /* linkage=_ZN18CShaderTableVulkan18GetValidationCacheEv */
	bool FlushValidationCacheToDisk(class CShaderTableVulkan *, bool); /* linkage=_ZN18CShaderTableVulkan26FlushValidationCacheToDiskEb */
	bool InitializeValidationCache(class CShaderTableVulkan *); /* linkage=_ZN18CShaderTableVulkan25InitializeValidationCacheEv */
	void OnPrintStats(class CShaderTableVulkan *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN18CShaderTableVulkan12OnPrintStatsERK15CCommandContextRK8CCommand */
} __attribute__((__aligned__(8)));

// <009A6D12> vulkan/shadertablevulkan.h:22
void CShaderTableVulkan::CShaderTableVulkan()
{
} /* size: 0 */

// <009A69BF> vulkan/shadertablevulkan.h:23
void CShaderTableVulkan::~CShaderTableVulkan()
{
} /* size: 0 */

// <00A55E0F> vulkan/shadertablevulkan.h:36
inline void InvalidHandle(void)
{
} /* size: 0 */

// <00BC4789> vulkan/shadertablevulkan.h:76
void CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <00BC4770> vulkan/shadertablevulkan.h:76
inline void CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <00BC44B4> vulkan/shadertablevulkan.h:76
void CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <00BC4497> vulkan/shadertablevulkan.h:76
inline void CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

