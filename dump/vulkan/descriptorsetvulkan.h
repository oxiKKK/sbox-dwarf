
//
// vulkan/descriptorsetvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 25
//	classes: 3
//

// <00C86359> vulkan/descriptorsetvulkan.h:31
void CDescriptorSetReferenced::CDescriptorSetReferenced()
{
} /* size: 0 */

// <00C8633C> vulkan/descriptorsetvulkan.h:31
inline void CDescriptorSetReferenced::CDescriptorSetReferenced()
{
} /* size: 0 */

// <0044664F> vulkan/descriptorsetvulkan.h:31
// member functions: 14
// member variables: 3
// class size: 16
class CDescriptorSetReferenced {
	int ()(void) * * _vptr.CDescriptorSetReferenced; /* 0 8 */
	/* vulkan/descriptorsetvulkan.h:34 */
	virtual void ~CDescriptorSetReferenced(CDescriptorSetReferenced* );
	/* vulkan/descriptorsetvulkan.h:36 */
	void AddDescriptorSetRef(CDescriptorSetReferenced* );
	/* vulkan/descriptorsetvulkan.h:37 */
	int ReleaseDescriptorSetRef(CDescriptorSetReferenced* );
	/* vulkan/descriptorsetvulkan.h:43 */
	int GetDescriptorSetRefCount(const CDescriptorSetReferenced* );
	/* vulkan/descriptorsetvulkan.h:45 */
	void SetDeleted(CDescriptorSetReferenced* , bool);
	/* vulkan/descriptorsetvulkan.h:46 */
	bool IsDeleted(const CDescriptorSetReferenced* );
private:
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 8 4 */
	bool m_bDeleted; /* 12 1 */
	virtual void ~CDescriptorSetReferenced(class CDescriptorSetReferenced *); /* linkage=_ZN24CDescriptorSetReferencedD4Ev */
	void AddDescriptorSetRef(class CDescriptorSetReferenced *); /* linkage=_ZN24CDescriptorSetReferenced19AddDescriptorSetRefEv */
	int ReleaseDescriptorSetRef(class CDescriptorSetReferenced *); /* linkage=_ZN24CDescriptorSetReferenced23ReleaseDescriptorSetRefEv */
	int GetDescriptorSetRefCount(const class CDescriptorSetReferenced  *); /* linkage=_ZNK24CDescriptorSetReferenced24GetDescriptorSetRefCountEv */
	void SetDeleted(class CDescriptorSetReferenced *, bool); /* linkage=_ZN24CDescriptorSetReferenced10SetDeletedEb */
	bool IsDeleted(const class CDescriptorSetReferenced  *); /* linkage=_ZNK24CDescriptorSetReferenced9IsDeletedEv */
	void CDescriptorSetReferenced(class CDescriptorSetReferenced *, const class CDescriptorSetReferenced  &); /* linkage=_ZN24CDescriptorSetReferencedC4ERKS_ */
	void CDescriptorSetReferenced(class CDescriptorSetReferenced *); /* linkage=_ZN24CDescriptorSetReferencedC4Ev */
} __attribute__((__aligned__(8)));

// <004740D9> vulkan/descriptorsetvulkan.h:31
// member functions: 16
// member variables: 3
// class size: 16
class CDescriptorSetReferenced {
	void CDescriptorSetReferenced(CDescriptorSetReferenced* , const CDescriptorSetReferenced& );
	void CDescriptorSetReferenced(CDescriptorSetReferenced* );
	int ()(void) * * _vptr.CDescriptorSetReferenced; /* 0 8 */
	/* vulkan/descriptorsetvulkan.h:34 */
	virtual void ~CDescriptorSetReferenced(CDescriptorSetReferenced* );
	/* vulkan/descriptorsetvulkan.h:36 */
	void AddDescriptorSetRef(CDescriptorSetReferenced* );
	/* vulkan/descriptorsetvulkan.h:37 */
	int ReleaseDescriptorSetRef(CDescriptorSetReferenced* );
	/* vulkan/descriptorsetvulkan.h:43 */
	int GetDescriptorSetRefCount(const CDescriptorSetReferenced* );
	/* vulkan/descriptorsetvulkan.h:45 */
	void SetDeleted(CDescriptorSetReferenced* , bool);
	/* vulkan/descriptorsetvulkan.h:46 */
	bool IsDeleted(const CDescriptorSetReferenced* );
private:
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 8 4 */
	bool m_bDeleted; /* 12 1 */
	virtual void ~CDescriptorSetReferenced(class CDescriptorSetReferenced *); /* linkage=_ZN24CDescriptorSetReferencedD4Ev */
	void AddDescriptorSetRef(class CDescriptorSetReferenced *); /* linkage=_ZN24CDescriptorSetReferenced19AddDescriptorSetRefEv */
	int ReleaseDescriptorSetRef(class CDescriptorSetReferenced *); /* linkage=_ZN24CDescriptorSetReferenced23ReleaseDescriptorSetRefEv */
	int GetDescriptorSetRefCount(const class CDescriptorSetReferenced  *); /* linkage=_ZNK24CDescriptorSetReferenced24GetDescriptorSetRefCountEv */
	void SetDeleted(class CDescriptorSetReferenced *, bool); /* linkage=_ZN24CDescriptorSetReferenced10SetDeletedEb */
	bool IsDeleted(const class CDescriptorSetReferenced  *); /* linkage=_ZNK24CDescriptorSetReferenced9IsDeletedEv */
	void CDescriptorSetReferenced(class CDescriptorSetReferenced *, const class CDescriptorSetReferenced  &); /* linkage=_ZN24CDescriptorSetReferencedC4ERKS_ */
	void CDescriptorSetReferenced(class CDescriptorSetReferenced *); /* linkage=_ZN24CDescriptorSetReferencedC4Ev */
} __attribute__((__aligned__(8)));

// <00C86450> vulkan/descriptorsetvulkan.h:34
void CDescriptorSetReferenced::~CDescriptorSetReferenced()
{
} /* size: 0 */

// <00C86420> vulkan/descriptorsetvulkan.h:34
inline void CDescriptorSetReferenced::~CDescriptorSetReferenced()
{
} /* size: 0 */

// <004B81EA> vulkan/descriptorsetvulkan.h:36
inline void CDescriptorSetReferenced::AddDescriptorSetRef()
{
} /* size: 0 */

// <004B9269> vulkan/descriptorsetvulkan.h:37
// variable: 1
void CDescriptorSetReferenced::ReleaseDescriptorSetRef()
{
	int nResult; // 39
	{
	}
} /* size: 23, variables: 1 */

// <004B819C> vulkan/descriptorsetvulkan.h:37
// variables: 3
inline void CDescriptorSetReferenced::ReleaseDescriptorSetRef()
{
	int nResult; // 39
	const char   __FUNCTION__; // 3474
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
} /* size: 0, variables: 2 */

// <0044E093> vulkan/descriptorsetvulkan.h:37
// variables: 3
inline void CDescriptorSetReferenced::ReleaseDescriptorSetRef()
{
	int nResult; // 39
	const char   __FUNCTION__; // 2082
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
} /* size: 0, variables: 2 */

// <00A594B9> vulkan/descriptorsetvulkan.h:43
inline void CDescriptorSetReferenced::GetDescriptorSetRefCount()
{
} /* size: 0 */

// <00A59494> vulkan/descriptorsetvulkan.h:45
inline void CDescriptorSetReferenced::SetDeleted(bool bDeleted)
{
} /* size: 0 */

// <004B8183> vulkan/descriptorsetvulkan.h:46
inline void CDescriptorSetReferenced::IsDeleted()
{
} /* size: 0 */

// <00494152> vulkan/descriptorsetvulkan.h:56
// member functions: 64
// member variables: 21
// class size: 192
class CDescriptorSetVulkan {
	void CDescriptorSetVulkan(CDescriptorSetVulkan* , const CDescriptorSetVulkan& );
	int ()(void) * * _vptr.CDescriptorSetVulkan; /* 0 8 */
	/* vulkan/descriptorsetvulkan.cpp:71 */
	void CDescriptorSetVulkan(CDescriptorSetVulkan* , VkDevice, CPipelineManagerVulkan& );
	/* vulkan/descriptorsetvulkan.cpp:93 */
	virtual void ~CDescriptorSetVulkan(CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:136 */
	bool Create(CDescriptorSetVulkan* , VulkanDescriptorSetPool_t* , int32, const RenderDescriptorDesc_t* , int32, const RenderDescriptorBinding_t* , bool);
	/* vulkan/descriptorsetvulkan.cpp:115 */
	void ReleaseHandles(CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:648 */
	void WriteDescriptorSetData(CDescriptorSetVulkan* , const RenderDescriptorBinding_t* , int32);
	/* vulkan/descriptorsetvulkan.cpp:698 */
	void CopyDescriptorSetData(const CDescriptorSetVulkan* , VkDescriptorSet);
	/* vulkan/descriptorsetvulkan.cpp:738 */
	bool Rebake(CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:276 */
	bool AllocateVulkanDescriptorSet(CDescriptorSetVulkan* , VulkanDescriptorSetPool_t* );
	/* vulkan/descriptorsetvulkan.cpp:834 */
	void RemoveFromTextureReferences(CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:861 */
	bool RemoveReferencesToTextureInBindings(CDescriptorSetVulkan* , HRenderTexture);
	/* vulkan/descriptorsetvulkan.cpp:893 */
	void RemoveReferencesToAllTexturesInBindings(CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:899 */
	int32 AddLayoutRef(CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:905 */
	int32 ReleaseLayoutRef(CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:911 */
	int32 LayoutRefCount(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:96 */
	void SetQueuedForDeletion(CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:634 */
	void AddRefBuffers(const RenderDescriptorBinding_t* , int32);
	/* vulkan/descriptorsetvulkan.cpp:640 */
	void ReleaseRefBuffers(const RenderDescriptorBinding_t* , int32);
	/* vulkan/descriptorsetvulkan.h:102 */
	VkDescriptorSetLayoutBinding* GetDescriptorSetLayoutBindings(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:103 */
	PipelineLayoutImmutableSampler_t* GetImmutableSamplers(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:104 */
	int32 GetNumImmutableSamplers(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:105 */
	VkDescriptorSet GetDescriptorSet(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:106 */
	VkDescriptorSetLayout GetDescriptorSetLayout(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:107 */
	const RenderDescriptorDesc_t* GetDescriptorDesc(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:108 */
	int32 GetDescriptorDescCount(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:109 */
	VulkanDescriptorSetPool_t* GetDescriptorSetPool(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:110 */
	uint32_t GetDescriptorSetTypeMask(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:111 */
	uint32_t GetHash(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.cpp:917 */
	const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& GetLayoutBindingFlags(const CDescriptorSetVulkan* );
	/* vulkan/descriptorsetvulkan.h:113 */
	bool IsFullyRewrittenEachFrame(const CDescriptorSetVulkan* );
private:
	/* vulkan/descriptorsetvulkan.cpp:99 */
	void Shutdown(CDescriptorSetVulkan* );
	VkDevice m_pDeviceVulkan; /* 8 8 */
	/* vulkan/descriptorsetvulkan.cpp:526 */
	void AddOrReleaseRefBuffersInternal(const RenderDescriptorBinding_t* , int32, bool);
	CPipelineManagerVulkan & m_pipelineManager; /* 16 8 */
	VkDescriptorSet m_pDescriptorSet; /* 24 8 */
	VkDescriptorSetLayoutBinding * m_pLayoutBindings; /* 32 8 */
	VulkanDescriptorSetPool_t * m_pDescriptorSetPool; /* 40 8 */
	int32 m_nNumDescriptors; /* 48 4 */
	RenderDescriptorDesc_t * m_pDescriptorDesc; /* 56 8 */
	RenderDescriptorBinding_t * m_pDescriptorBindings; /* 64 8 */
	int32 m_nNumDescriptorBindings; /* 72 4 */
	VkDescriptorSetLayout m_pDescriptorSetLayout; /* 80 8 */
	uint32_t m_nDescriptorTypeMask; /* 88 4 */
	int32 m_nNumImmutableSamplers; /* 92 4 */
	PipelineLayoutImmutableSampler_t * m_pImmutableSamplers; /* 96 8 */
	uint32_t m_nCachedHash; /* 104 4 */
	CInterlockedInt m_nLayoutRefCount __attribute__((__aligned__(4))); /* 108 4 */
	bool m_bQueuedForDeletion; /* 112 1 */
	VkDescriptorBindingFlags m_nDescriptorBindingFlagsAllBits; /* 116 4 */
	bool m_bFullyRewriteEachFrame; /* 120 1 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_descriptorLayoutBindingFlags; /* 128 32 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCTextureBase>, int> > m_textureStrongHandles; /* 160 32 */
	int32 GetDescriptorDescCount(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan22GetDescriptorDescCountEv */
	const class RenderDescriptorDesc_t  * GetDescriptorDesc(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan17GetDescriptorDescEv */
	VkDescriptorSet GetDescriptorSet(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan16GetDescriptorSetEv */
	void CDescriptorSetVulkan(class CDescriptorSetVulkan *, const class CDescriptorSetVulkan  &); /* linkage=_ZN20CDescriptorSetVulkanC4ERKS_ */
	void CDescriptorSetVulkan(class CDescriptorSetVulkan *, VkDevice, class CPipelineManagerVulkan &); /* linkage=_ZN20CDescriptorSetVulkanC4EP10VkDevice_TR22CPipelineManagerVulkan */
	virtual void ~CDescriptorSetVulkan(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkanD4Ev */
	bool Create(class CDescriptorSetVulkan *, class VulkanDescriptorSetPool_t *, int32, const class RenderDescriptorDesc_t  *, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN20CDescriptorSetVulkan6CreateEP25VulkanDescriptorSetPool_tiPK22RenderDescriptorDesc_tiPK25RenderDescriptorBinding_tb */
	void ReleaseHandles(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkan14ReleaseHandlesEv */
	void WriteDescriptorSetData(class CDescriptorSetVulkan *, const class RenderDescriptorBinding_t  *, int32); /* linkage=_ZN20CDescriptorSetVulkan22WriteDescriptorSetDataEPK25RenderDescriptorBinding_ti */
	void CopyDescriptorSetData(const class CDescriptorSetVulkan  *, VkDescriptorSet); /* linkage=_ZNK20CDescriptorSetVulkan21CopyDescriptorSetDataEP17VkDescriptorSet_T */
	bool Rebake(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkan6RebakeEv */
	bool AllocateVulkanDescriptorSet(class CDescriptorSetVulkan *, class VulkanDescriptorSetPool_t *); /* linkage=_ZN20CDescriptorSetVulkan27AllocateVulkanDescriptorSetEP25VulkanDescriptorSetPool_t */
	void RemoveFromTextureReferences(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkan27RemoveFromTextureReferencesEv */
	bool RemoveReferencesToTextureInBindings(class CDescriptorSetVulkan *, HRenderTexture); /* linkage=_ZN20CDescriptorSetVulkan35RemoveReferencesToTextureInBindingsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void RemoveReferencesToAllTexturesInBindings(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkan39RemoveReferencesToAllTexturesInBindingsEv */
	int32 AddLayoutRef(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkan12AddLayoutRefEv */
	int32 ReleaseLayoutRef(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkan16ReleaseLayoutRefEv */
	int32 LayoutRefCount(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan14LayoutRefCountEv */
	void SetQueuedForDeletion(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkan20SetQueuedForDeletionEv */
	/* <4b92c0> vulkan/descriptorsetvulkan.cpp:634 */
	void AddRefBuffers(const class RenderDescriptorBinding_t  *, int32); /* linkage=_ZN20CDescriptorSetVulkan13AddRefBuffersEPK25RenderDescriptorBinding_ti */
	/* <4b9320> vulkan/descriptorsetvulkan.cpp:640 */
	void ReleaseRefBuffers(const class RenderDescriptorBinding_t  *, int32); /* linkage=_ZN20CDescriptorSetVulkan17ReleaseRefBuffersEPK25RenderDescriptorBinding_ti */
	VkDescriptorSetLayoutBinding * GetDescriptorSetLayoutBindings(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan30GetDescriptorSetLayoutBindingsEv */
	class PipelineLayoutImmutableSampler_t * GetImmutableSamplers(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan20GetImmutableSamplersEv */
	int32 GetNumImmutableSamplers(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan23GetNumImmutableSamplersEv */
	VkDescriptorSetLayout GetDescriptorSetLayout(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan22GetDescriptorSetLayoutEv */
	class VulkanDescriptorSetPool_t * GetDescriptorSetPool(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan20GetDescriptorSetPoolEv */
	uint32_t GetDescriptorSetTypeMask(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan24GetDescriptorSetTypeMaskEv */
	uint32_t GetHash(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan7GetHashEv */
	const class CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >  & GetLayoutBindingFlags(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan21GetLayoutBindingFlagsEv */
	bool IsFullyRewrittenEachFrame(const class CDescriptorSetVulkan  *); /* linkage=_ZNK20CDescriptorSetVulkan25IsFullyRewrittenEachFrameEv */
	void Shutdown(class CDescriptorSetVulkan *); /* linkage=_ZN20CDescriptorSetVulkan8ShutdownEv */
	void AddOrReleaseRefBuffersInternal(const class RenderDescriptorBinding_t  *, int32, bool); /* linkage=_ZN20CDescriptorSetVulkan30AddOrReleaseRefBuffersInternalEPK25RenderDescriptorBinding_tib */
} __attribute__((__aligned__(8)));

// <009A5D44> vulkan/descriptorsetvulkan.h:59
void CDescriptorSetVulkan::CDescriptorSetVulkan(VkDevice pDevice, CPipelineManagerVulkan& pipelineManager)
{
} /* size: 0 */

// <00A5947B> vulkan/descriptorsetvulkan.h:96
inline void CDescriptorSetVulkan::SetQueuedForDeletion()
{
} /* size: 0 */

// <00A59462> vulkan/descriptorsetvulkan.h:102
inline void CDescriptorSetVulkan::GetDescriptorSetLayoutBindings()
{
} /* size: 0 */

// <00A59443> vulkan/descriptorsetvulkan.h:103
inline void CDescriptorSetVulkan::GetImmutableSamplers()
{
} /* size: 0 */

// <00A5942A> vulkan/descriptorsetvulkan.h:104
inline void CDescriptorSetVulkan::GetNumImmutableSamplers()
{
} /* size: 0 */

// <00A59411> vulkan/descriptorsetvulkan.h:105
inline void CDescriptorSetVulkan::GetDescriptorSet()
{
} /* size: 0 */

// <00A593F8> vulkan/descriptorsetvulkan.h:106
inline void CDescriptorSetVulkan::GetDescriptorSetLayout()
{
} /* size: 0 */

// <0087705A> vulkan/descriptorsetvulkan.h:107
inline void CDescriptorSetVulkan::GetDescriptorDesc()
{
} /* size: 0 */

// <00A593DF> vulkan/descriptorsetvulkan.h:108
inline void CDescriptorSetVulkan::GetDescriptorDescCount()
{
} /* size: 0 */

// <00A593C6> vulkan/descriptorsetvulkan.h:109
inline void CDescriptorSetVulkan::GetDescriptorSetPool()
{
} /* size: 0 */

// <00877028> vulkan/descriptorsetvulkan.h:110
inline void CDescriptorSetVulkan::GetDescriptorSetTypeMask()
{
} /* size: 0 */

// <0074054B> vulkan/descriptorsetvulkan.h:111
inline void CDescriptorSetVulkan::GetHash()
{
} /* size: 0 */

// <00A593AD> vulkan/descriptorsetvulkan.h:113
inline void CDescriptorSetVulkan::IsFullyRewrittenEachFrame()
{
} /* size: 0 */

// <00446791> vulkan/descriptorsetvulkan.h:149
void WriteVulkanDescriptorSetData(VkDevice, VkDescriptorSet, const RenderDescriptorDesc_t *, int32, const RenderDescriptorBinding_t *, int32)
{
} /* size: 0 */

