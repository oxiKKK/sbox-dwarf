
//
// vulkan/buffereddescriptorsetvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 8
//	class: 1
//

// <0044089A> vulkan/buffereddescriptorsetvulkan.h:13
// member functions: 15
// member variables: 3
// class size: 48
class CBufferedDescriptorSetVulkan {
	/* vulkan/buffereddescriptorsetvulkan.h:30 */
	struct Set {
		CDescriptorSetVulkan * pSet; /* 0 8 */
		RenderDescriptorSetHandle_t hHandle; /* 8 8 */
		CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> > bufferedBindings; /* 16 32 */
		CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> > bufferedTextures; /* 48 32 */
		/* vulkan/buffereddescriptorsetvulkan.h:36 */
		typedef struct CUtlHashtable<RenderResourceHandle_t__*, RenderDescriptorBinding_t, DefaultHashFunctor<RenderResourceHandle_t__*>, DefaultEqualFunctor<RenderResourceHandle_t__*>, undefined_t, CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__*, RenderDescriptorBinding_t>, int> > ReferencedBuffers_t;
		/* tag__fprintf: const_type tag not supported! */;
		ReferencedBuffers_t * pReferencedBuffers; /* 80 8 */
		void Set(Set* , const Set& );
		void ~Set(Set* );
		void Set(Set* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CBufferedDescriptorSetVulkan(CBufferedDescriptorSetVulkan* , const CBufferedDescriptorSetVulkan& );
	int ()(void) * * _vptr.CBufferedDescriptorSetVulkan; /* 0 8 */
	/* vulkan/buffereddescriptorsetvulkan.cpp:15 */
	void CBufferedDescriptorSetVulkan(CBufferedDescriptorSetVulkan* , int, int, const RenderDescriptorDesc_t* , int32, const RenderDescriptorBinding_t* );
	/* vulkan/buffereddescriptorsetvulkan.cpp:39 */
	virtual void ~CBufferedDescriptorSetVulkan(CBufferedDescriptorSetVulkan* );
	/* vulkan/buffereddescriptorsetvulkan.cpp:53 */
	void UpdateBindingsAndSwitch(CBufferedDescriptorSetVulkan* , int32, const RenderDescriptorBinding_t* );
	/* vulkan/buffereddescriptorsetvulkan.h:27 */
	RenderDescriptorSetHandle_t GetActiveHandle(const CBufferedDescriptorSetVulkan* );
private:
	/* vulkan/buffereddescriptorsetvulkan.cpp:161 */
	void ReleaseReferenceBuffers(CBufferedDescriptorSetVulkan* , const ReferencedBuffers_t& );
	CUtlVector<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> > m_descriptorSets; /* 8 32 */
	int m_nActiveSet; /* 40 4 */
	void CBufferedDescriptorSetVulkan(class CBufferedDescriptorSetVulkan *, const class CBufferedDescriptorSetVulkan  &); /* linkage=_ZN28CBufferedDescriptorSetVulkanC4ERKS_ */
	void CBufferedDescriptorSetVulkan(class CBufferedDescriptorSetVulkan *, int, int, const class RenderDescriptorDesc_t  *, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN28CBufferedDescriptorSetVulkanC4EiiPK22RenderDescriptorDesc_tiPK25RenderDescriptorBinding_t */
	virtual void ~CBufferedDescriptorSetVulkan(class CBufferedDescriptorSetVulkan *); /* linkage=_ZN28CBufferedDescriptorSetVulkanD4Ev */
	void UpdateBindingsAndSwitch(class CBufferedDescriptorSetVulkan *, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN28CBufferedDescriptorSetVulkan23UpdateBindingsAndSwitchEiPK25RenderDescriptorBinding_t */
	RenderDescriptorSetHandle_t GetActiveHandle(const class CBufferedDescriptorSetVulkan  *); /* linkage=_ZNK28CBufferedDescriptorSetVulkan15GetActiveHandleEv */
	void ReleaseReferenceBuffers(class CBufferedDescriptorSetVulkan *, const ReferencedBuffers_t  &); /* linkage=_ZN28CBufferedDescriptorSetVulkan23ReleaseReferenceBuffersERK13CUtlHashtableIP24RenderResourceHandle_t__25RenderDescriptorBinding_t18DefaultHashFunctorIS2_E19DefaultEqualFunctorIS2_E11undefined_t10CUtlMemoryI18CUtlHashtableEntryIS2_S3_EiEE */
};

// <009A57D9> vulkan/buffereddescriptorsetvulkan.h:16
void CBufferedDescriptorSetVulkan::CBufferedDescriptorSetVulkan(int nBufferDepth, int nNumDescriptors, const RenderDescriptorDesc_t* pDescs, int32 nNumBindings, const RenderDescriptorBinding_t* pBindings)
{
} /* size: 0 */

// <00A54629> vulkan/buffereddescriptorsetvulkan.h:27
inline void CBufferedDescriptorSetVulkan::GetActiveHandle()
{
} /* size: 0 */

// <0044DE32> vulkan/buffereddescriptorsetvulkan.h:30
void Set::Set()
{
} /* size: 0 */

// <0044DE15> vulkan/buffereddescriptorsetvulkan.h:30
inline void Set::Set()
{
} /* size: 0 */

// <0044DDFE> vulkan/buffereddescriptorsetvulkan.h:30
void Set::~Set()
{
} /* size: 0 */

// <0044DDE1> vulkan/buffereddescriptorsetvulkan.h:30
inline void Set::~Set()
{
} /* size: 0 */

// <0044952F> vulkan/buffereddescriptorsetvulkan.h:30
void Set::Set(const Set &)
{
} /* size: 0 */

// <0044950D> vulkan/buffereddescriptorsetvulkan.h:30
inline void Set::Set(const Set &)
{
} /* size: 0 */

