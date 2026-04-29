
//
// vulkan/pipelinecachemgrvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 2
//	class: 1
//

// <00635372> vulkan/pipelinecachemgrvulkan.h:35
// member functions: 18
// member variables: 5
// class size: 104
class CPipelineCacheManagerVulkan {
	void CPipelineCacheManagerVulkan(CPipelineCacheManagerVulkan* , const CPipelineCacheManagerVulkan& );
	int ()(void) * * _vptr.CPipelineCacheManagerVulkan; /* 0 8 */
	/* vulkan/pipelinecachemgrvulkan.cpp:1464 */
	void CPipelineCacheManagerVulkan(CPipelineCacheManagerVulkan* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1469 */
	virtual void ~CPipelineCacheManagerVulkan(CPipelineCacheManagerVulkan* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1478 */
	void PreShutdown(CPipelineCacheManagerVulkan* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1499 */
	void Shutdown(CPipelineCacheManagerVulkan* );
	/* vulkan/pipelinecachemgrvulkan.cpp:1761 */
	void LoadFromPath(CPipelineCacheManagerVulkan* , CPipelineManagerVulkan* , const CUtlString& , const CUtlStringList& , const CUtlString& , int32);
	/* vulkan/pipelinecachemgrvulkan.cpp:1846 */
	void RegisterShader(CPipelineCacheManagerVulkan* , const CShaderVulkanBase* , const VkShaderModuleCreateInfo& );
	/* vulkan/pipelinecachemgrvulkan.cpp:1860 */
	bool UnregisterShader(CPipelineCacheManagerVulkan* , RenderShaderHandle_t, const CShaderVulkanBase* );
protected:
	/* vulkan/pipelinecachemgrvulkan.cpp:1542 */
	void Thread_PrepareFossilizeDb(CPipelineCacheManagerVulkan* , DatabaseInterface* , const CBufferString& );
	CFossilizeStateCreator * m_pFossilizeStateCreator; /* 8 8 */
	volatile bool m_bShuttingDown; /* 16 1 */
	DatabaseInterface * m_pPreparingDatabase; /* 24 8 */
	CThreadMutex m_preparingDatabaseMutex; /* 32 72 */
	void CPipelineCacheManagerVulkan(class CPipelineCacheManagerVulkan *, const class CPipelineCacheManagerVulkan  &); /* linkage=_ZN27CPipelineCacheManagerVulkanC4ERKS_ */
	void CPipelineCacheManagerVulkan(class CPipelineCacheManagerVulkan *); /* linkage=_ZN27CPipelineCacheManagerVulkanC4Ev */
	virtual void ~CPipelineCacheManagerVulkan(class CPipelineCacheManagerVulkan *); /* linkage=_ZN27CPipelineCacheManagerVulkanD4Ev */
	void PreShutdown(class CPipelineCacheManagerVulkan *); /* linkage=_ZN27CPipelineCacheManagerVulkan11PreShutdownEv */
	/* <684902> vulkan/pipelinecachemgrvulkan.cpp:1499 */
	void Shutdown(class CPipelineCacheManagerVulkan *); /* linkage=_ZN27CPipelineCacheManagerVulkan8ShutdownEv */
	void LoadFromPath(class CPipelineCacheManagerVulkan *, class CPipelineManagerVulkan *, const class CUtlString  &, const class CUtlStringList  &, const class CUtlString  &, int32); /* linkage=_ZN27CPipelineCacheManagerVulkan12LoadFromPathEP22CPipelineManagerVulkanRK10CUtlStringRK14CUtlStringListS4_i */
	void RegisterShader(class CPipelineCacheManagerVulkan *, const class CShaderVulkanBase  *, const VkShaderModuleCreateInfo  &); /* linkage=_ZN27CPipelineCacheManagerVulkan14RegisterShaderEPK17CShaderVulkanBaseRK24VkShaderModuleCreateInfo */
	bool UnregisterShader(class CPipelineCacheManagerVulkan *, RenderShaderHandle_t, const class CShaderVulkanBase  *); /* linkage=_ZN27CPipelineCacheManagerVulkan16UnregisterShaderEP22RenderShaderHandle_t__PK17CShaderVulkanBase */
	void Thread_PrepareFossilizeDb(class CPipelineCacheManagerVulkan *, class DatabaseInterface *, const class CBufferString  &); /* linkage=_ZN27CPipelineCacheManagerVulkan25Thread_PrepareFossilizeDbEPN9Fossilize17DatabaseInterfaceERK13CBufferString */
};

// <009A6CF6> vulkan/pipelinecachemgrvulkan.h:39
void CPipelineCacheManagerVulkan::CPipelineCacheManagerVulkan()
{
} /* size: 0 */

// <009A69DB> vulkan/pipelinecachemgrvulkan.h:40
void CPipelineCacheManagerVulkan::~CPipelineCacheManagerVulkan()
{
} /* size: 0 */

