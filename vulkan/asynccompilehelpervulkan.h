
//
// vulkan/asynccompilehelpervulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 4
//	class: 1
//

// <00400B3E> vulkan/asynccompilehelpervulkan.h:20
// member functions: 24
// member variables: 8
// class size: 600
class CAsyncCompileHelperVulkan {
	/* vulkan/asynccompilehelpervulkan.h:59 */
	struct ShaderWaitEntry_t {
		CShaderVulkanBase * pShader; /* 0 8 */
		COneTimeEvent * pWaitEvent; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CAsyncCompileHelperVulkan(CAsyncCompileHelperVulkan* , const CAsyncCompileHelperVulkan& );
	int ()(void) * * _vptr.CAsyncCompileHelperVulkan; /* 0 8 */
	/* vulkan/asynccompilehelpervulkan.cpp:20 */
	void CAsyncCompileHelperVulkan(CAsyncCompileHelperVulkan* );
	/* vulkan/asynccompilehelpervulkan.cpp:27 */
	virtual void ~CAsyncCompileHelperVulkan(CAsyncCompileHelperVulkan* );
	/* vulkan/asynccompilehelpervulkan.cpp:33 */
	void Init(CAsyncCompileHelperVulkan* );
	/* vulkan/asynccompilehelpervulkan.cpp:53 */
	void Shutdown(CAsyncCompileHelperVulkan* );
	/* vulkan/asynccompilehelpervulkan.h:32 */
	bool BEnabled(const CAsyncCompileHelperVulkan* );
	/* vulkan/asynccompilehelpervulkan.cpp:73 */
	void QueueShaderCompile(CAsyncCompileHelperVulkan* , CShaderVulkanBase* );
	/* vulkan/asynccompilehelpervulkan.cpp:227 */
	void WaitForShaderCompile(CAsyncCompileHelperVulkan* , CShaderVulkanBase* );
	/* vulkan/asynccompilehelpervulkan.cpp:287 */
	void DestroyShader(CAsyncCompileHelperVulkan* , RenderShaderHandle_t, bool);
	/* vulkan/asynccompilehelpervulkan.h:40 */
	IThreadPool* GetThreadPool(const CAsyncCompileHelperVulkan* );
private:
	/* vulkan/asynccompilehelpervulkan.cpp:97 */
	void ProcessCompileShaderJob(CAsyncCompileHelperVulkan* , CShaderVulkanBase* );
	/* vulkan/asynccompilehelpervulkan.cpp:193 */
	void OnShaderCompileFinished(CAsyncCompileHelperVulkan* , CShaderVulkanBase* );
	IThreadPool * m_pShaderCompilationThreadPool; /* 8 8 */
	bool m_bEnabled; /* 16 1 */
	CInterlockedInt m_nNumOutstandingShaderCompilations __attribute__((__aligned__(4))); /* 20 4 */
	CInterlockedInt m_nTotalQueuedShaderCompiles __attribute__((__aligned__(4))); /* 24 4 */
	CThreadEvent m_asyncQueueEmptyEvent; /* 32 128 */
	CUtlVector<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int> > m_ShaderWaitList; /* 160 32 */
	CThreadRWLock_FastRead m_ShaderWaitListRWLock __attribute__((__aligned__(8))); /* 192 408 */
	void CAsyncCompileHelperVulkan(class CAsyncCompileHelperVulkan *, const class CAsyncCompileHelperVulkan  &); /* linkage=_ZN25CAsyncCompileHelperVulkanC4ERKS_ */
	void CAsyncCompileHelperVulkan(class CAsyncCompileHelperVulkan *); /* linkage=_ZN25CAsyncCompileHelperVulkanC4Ev */
	virtual void ~CAsyncCompileHelperVulkan(class CAsyncCompileHelperVulkan *); /* linkage=_ZN25CAsyncCompileHelperVulkanD4Ev */
	void Init(class CAsyncCompileHelperVulkan *); /* linkage=_ZN25CAsyncCompileHelperVulkan4InitEv */
	/* <40df83> vulkan/asynccompilehelpervulkan.cpp:53 */
	void Shutdown(class CAsyncCompileHelperVulkan *); /* linkage=_ZN25CAsyncCompileHelperVulkan8ShutdownEv */
	bool BEnabled(const class CAsyncCompileHelperVulkan  *); /* linkage=_ZNK25CAsyncCompileHelperVulkan8BEnabledEv */
	void QueueShaderCompile(class CAsyncCompileHelperVulkan *, class CShaderVulkanBase *); /* linkage=_ZN25CAsyncCompileHelperVulkan18QueueShaderCompileEP17CShaderVulkanBase */
	void WaitForShaderCompile(class CAsyncCompileHelperVulkan *, class CShaderVulkanBase *); /* linkage=_ZN25CAsyncCompileHelperVulkan20WaitForShaderCompileEP17CShaderVulkanBase */
	void DestroyShader(class CAsyncCompileHelperVulkan *, RenderShaderHandle_t, bool); /* linkage=_ZN25CAsyncCompileHelperVulkan13DestroyShaderEP22RenderShaderHandle_t__b */
	class IThreadPool * GetThreadPool(const class CAsyncCompileHelperVulkan  *); /* linkage=_ZNK25CAsyncCompileHelperVulkan13GetThreadPoolEv */
	void ProcessCompileShaderJob(class CAsyncCompileHelperVulkan *, class CShaderVulkanBase *); /* linkage=_ZN25CAsyncCompileHelperVulkan23ProcessCompileShaderJobEP17CShaderVulkanBase */
	void OnShaderCompileFinished(class CAsyncCompileHelperVulkan *, class CShaderVulkanBase *); /* linkage=_ZN25CAsyncCompileHelperVulkan23OnShaderCompileFinishedEP17CShaderVulkanBase */
} __attribute__((__aligned__(8)));

// <009A6CDA> vulkan/asynccompilehelpervulkan.h:23
void CAsyncCompileHelperVulkan::CAsyncCompileHelperVulkan()
{
} /* size: 0 */

// <009A69F7> vulkan/asynccompilehelpervulkan.h:24
void CAsyncCompileHelperVulkan::~CAsyncCompileHelperVulkan()
{
} /* size: 0 */

// <00A5573C> vulkan/asynccompilehelpervulkan.h:32
inline void CAsyncCompileHelperVulkan::BEnabled()
{
} /* size: 0 */

// <00740519> vulkan/asynccompilehelpervulkan.h:40
inline void CAsyncCompileHelperVulkan::GetThreadPool()
{
} /* size: 0 */

