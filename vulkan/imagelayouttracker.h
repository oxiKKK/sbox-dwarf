
//
// vulkan/imagelayouttracker.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 8
//	class: 1
//

// <00504B05> vulkan/imagelayouttracker.h:33
inline PackedVulkanImageLayout PackVulkanImageLayout(VkImageLayout vkLayout)
{
} /* size: 0 */

// <00504AE2> vulkan/imagelayouttracker.h:54
inline VkImageLayout UnpackVulkanImageLayout(PackedVulkanImageLayout packedLayout)
{
} /* size: 0 */

// <004F46D0> vulkan/imagelayouttracker.h:76
// member functions: 27
// member variables: 2
// class size: 40
class CImageLayoutTracker {
	/* vulkan/imagelayouttracker.h:103 */
	struct ImageTransition_t {
		CVulkanImage * m_pVulkanImage; /* 0 8 */
		uint8 m_nMultisampleTypeU8; /* 8 1 */
		uint8 m_nImageAspectFlags; /* 9 1 */
		bool m_bIsWholeResourceTransition; /* 10 1 */
		bool m_bForceBarrier; /* 11 1 */
		uint8 m_extraData[20]; /* 12 20 */
		/* vulkan/imagelayouttracker.h:127 */
		bool IsImageStateDataExternal(const ImageTransition_t* , int);
		/* vulkan/imagelayouttracker.h:131 */
		void* & GetExternalExtraDataPtr(ImageTransition_t* );
		/* vulkan/imagelayouttracker.h:139 */
		PackedVulkanImageLayout* GetSubResourceImageStates(ImageTransition_t* , int);
		/* vulkan/imagelayouttracker.h:144 */
		PackedVulkanImageLayout* GetFinalSubResourceImageStates(ImageTransition_t* , int);
		/* vulkan/imagelayouttracker.h:149 */
		RenderMultisampleType_t GetMultisampleType(const ImageTransition_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CImageLayoutTracker(CImageLayoutTracker* , const CImageLayoutTracker& );
	int ()(void) * * _vptr.CImageLayoutTracker; /* 0 8 */
	/* vulkan/imagelayouttracker.cpp:18 */
	void CImageLayoutTracker(CImageLayoutTracker* );
	/* vulkan/imagelayouttracker.cpp:25 */
	virtual void ~CImageLayoutTracker(CImageLayoutTracker* );
	/* vulkan/imagelayouttracker.cpp:42 */
	void AddImageTransition(CImageLayoutTracker* , CRenderContextVulkan* , VkCommandBuffer, CVulkanImage* , uint32, uint32, uint32, uint32, VkImageLayout, RenderMultisampleType_t, VkImageAspectFlags, bool);
	/* vulkan/imagelayouttracker.cpp:294 */
	void MergeImageTransitions(CImageLayoutTracker* , CImageLayoutTracker& );
	/* vulkan/imagelayouttracker.cpp:228 */
	VkImageLayout GetKnownImageLayout(CImageLayoutTracker* , CVulkanImage* , uint32, uint32);
	/* vulkan/imagelayouttracker.cpp:251 */
	void UpdateImageTransitionFinalLayout(CImageLayoutTracker* , CVulkanImage* , uint32, uint32, uint32, uint32, VkImageLayout, RenderMultisampleType_t);
	/* vulkan/imagelayouttracker.cpp:600 */
	bool BuildStateTransitions(CImageLayoutTracker* , VkCommandBuffer, VulkanCommandBufferType_t);
	/* vulkan/imagelayouttracker.cpp:693 */
	void ClearStateTransitions(CImageLayoutTracker* );
	/* vulkan/imagelayouttracker.cpp:337 */
	void ComputeImageMemoryBarrierMasks(VulkanCommandBufferType_t, VkImageLayout, VkImageLayout, VkPipelineStageFlags* , VkPipelineStageFlags* , VkAccessFlags* , VkAccessFlags* );
	/* vulkan/imagelayouttracker.h:155 */
	typedef struct CUtlHashtable<CVulkanImage*, CImageLayoutTracker::ImageTransition_t, DefaultHashFunctor<CVulkanImage*>, DefaultEqualFunctor<CVulkanImage*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>, int> > ImageTransitionHashtable_t;
private:
	ImageTransitionHashtable_t m_imageTransitionHashtable; /* 8 32 */
	/* vulkan/imagelayouttracker.cpp:561 */
	void ExecuteImageTransition(CImageLayoutTracker* , CRenderContextVulkan* , VkCommandBuffer, VulkanCommandBufferType_t, CVulkanImage* , uint32, uint32, uint32, uint32, VkImageLayout, VkImageLayout, RenderMultisampleType_t, VkImageAspectFlags);
	/* vulkan/imagelayouttracker.h:157 */
	typedef handle_t ImageTransitionHandle_t;
	void CImageLayoutTracker(class CImageLayoutTracker *, const class CImageLayoutTracker  &); /* linkage=_ZN19CImageLayoutTrackerC4ERKS_ */
	void CImageLayoutTracker(class CImageLayoutTracker *); /* linkage=_ZN19CImageLayoutTrackerC4Ev */
	virtual void ~CImageLayoutTracker(class CImageLayoutTracker *); /* linkage=_ZN19CImageLayoutTrackerD4Ev */
	void AddImageTransition(class CImageLayoutTracker *, class CRenderContextVulkan *, VkCommandBuffer, class CVulkanImage *, uint32, uint32, uint32, uint32, VkImageLayout, enum RenderMultisampleType_t, VkImageAspectFlags, bool); /* linkage=_ZN19CImageLayoutTracker18AddImageTransitionEP20CRenderContextVulkanP17VkCommandBuffer_TP12CVulkanImagejjjj13VkImageLayout23RenderMultisampleType_tjb */
	void MergeImageTransitions(class CImageLayoutTracker *, class CImageLayoutTracker &); /* linkage=_ZN19CImageLayoutTracker21MergeImageTransitionsERS_ */
	VkImageLayout GetKnownImageLayout(class CImageLayoutTracker *, class CVulkanImage *, uint32, uint32); /* linkage=_ZN19CImageLayoutTracker19GetKnownImageLayoutEP12CVulkanImagejj */
	void UpdateImageTransitionFinalLayout(class CImageLayoutTracker *, class CVulkanImage *, uint32, uint32, uint32, uint32, VkImageLayout, enum RenderMultisampleType_t); /* linkage=_ZN19CImageLayoutTracker32UpdateImageTransitionFinalLayoutEP12CVulkanImagejjjj13VkImageLayout23RenderMultisampleType_t */
	bool BuildStateTransitions(class CImageLayoutTracker *, VkCommandBuffer, enum VulkanCommandBufferType_t); /* linkage=_ZN19CImageLayoutTracker21BuildStateTransitionsEP17VkCommandBuffer_T25VulkanCommandBufferType_t */
	void ClearStateTransitions(class CImageLayoutTracker *); /* linkage=_ZN19CImageLayoutTracker21ClearStateTransitionsEv */
	void ComputeImageMemoryBarrierMasks(enum VulkanCommandBufferType_t, VkImageLayout, VkImageLayout, VkPipelineStageFlags *, VkPipelineStageFlags *, VkAccessFlags *, VkAccessFlags *); /* linkage=_ZN19CImageLayoutTracker30ComputeImageMemoryBarrierMasksE25VulkanCommandBufferType_t13VkImageLayoutS1_PjS2_S2_S2_ */
	void ExecuteImageTransition(class CImageLayoutTracker *, class CRenderContextVulkan *, VkCommandBuffer, enum VulkanCommandBufferType_t, class CVulkanImage *, uint32, uint32, uint32, uint32, VkImageLayout, VkImageLayout, enum RenderMultisampleType_t, VkImageAspectFlags); /* linkage=_ZN19CImageLayoutTracker22ExecuteImageTransitionEP20CRenderContextVulkanP17VkCommandBuffer_T25VulkanCommandBufferType_tP12CVulkanImagejjjj13VkImageLayoutS7_23RenderMultisampleType_tj */
};

// <00B64010> vulkan/imagelayouttracker.h:79
void CImageLayoutTracker::CImageLayoutTracker()
{
} /* size: 0 */

// <00B63E7B> vulkan/imagelayouttracker.h:80
void CImageLayoutTracker::~CImageLayoutTracker()
{
} /* size: 0 */

// <00504ABD> vulkan/imagelayouttracker.h:127
inline void ImageTransition_t::IsImageStateDataExternal(int nStates)
{
} /* size: 0 */

// <00504A9F> vulkan/imagelayouttracker.h:131
inline void *& ImageTransition_t::GetExternalExtraDataPtr()
{
} /* size: 0 */

// <00504A7A> vulkan/imagelayouttracker.h:139
inline void ImageTransition_t::GetSubResourceImageStates(int nStates)
{
} /* size: 0 */

// <00504A55> vulkan/imagelayouttracker.h:144
inline void ImageTransition_t::GetFinalSubResourceImageStates(int nStates)
{
} /* size: 0 */

