
//
// vulkan/vulkanimage.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 7
//	class: 1
//

// <00D17B17> vulkan/vulkanimage.h:17
// member functions: 28
// member variables: 11
// class size: 64
class CVulkanImage : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CVulkanImage(CVulkanImage* , const CVulkanImage& );
	/* vulkan/vulkanimage.cpp:14 */
	void CVulkanImage(CVulkanImage* , bool);
	/* vulkan/vulkanimage.cpp:33 */
	virtual void ~CVulkanImage(CVulkanImage* );
	/* vulkan/vulkanimage.cpp:54 */
	uint32 GetSubresourceIndex(const CVulkanImage* , uint32, uint32);
	/* vulkan/vulkanimage.cpp:62 */
	void InitializeSubResourceImageState(CVulkanImage* , uint32, uint32, VkImageLayout);
	/* vulkan/vulkanimage.cpp:72 */
	void SetAllSubResouceImageStates(CVulkanImage* , VkImageLayout);
	/* vulkan/vulkanimage.cpp:82 */
	void SetSubResouceImageState(CVulkanImage* , uint32, uint32, VkImageLayout);
	/* vulkan/vulkanimage.cpp:89 */
	VkImageLayout GetSubResourceImageState(const CVulkanImage* , uint32, uint32);
	/* vulkan/vulkanimage.h:29 */
	uint32 GetNumMipLevels(const CVulkanImage* );
	/* vulkan/vulkanimage.h:30 */
	uint32 GetNumArraySlices(const CVulkanImage* );
	/* vulkan/vulkanimage.h:32 */
	bool GetIsResident(CVulkanImage* );
	/* vulkan/vulkanimage.h:33 */
	void SetIsResident(CVulkanImage* , bool);
	/* vulkan/vulkanimage.h:35 */
	void SetImageUsageFlags(CVulkanImage* , VkImageUsageFlags);
	/* vulkan/vulkanimage.h:36 */
	VkImageUsageFlags GetImageUsageFlags(const CVulkanImage* );
	VkImage m_pImage; /* 16 8 */
	VmaAllocation m_pVmaAllocation; /* 24 8 */
	bool m_bDedicatedAllocation; /* 32 1 */
	bool m_bIsShared; /* 33 1 */
private:
	bool m_bResident; /* 34 1 */
	bool m_bOwnsObject; /* 35 1 */
	VkImageLayout * m_pSubResourceImageState; /* 40 8 */
	uint32 m_nNumMipLevels; /* 48 4 */
	uint32 m_nNumArraySlices; /* 52 4 */
	VkImageUsageFlags m_nImageUsageFlags; /* 56 4 */
	void SetSubResouceImageState(class CVulkanImage *, uint32, uint32, VkImageLayout); /* linkage=_ZN12CVulkanImage23SetSubResouceImageStateEjj13VkImageLayout */
	VkImageLayout GetSubResourceImageState(const class CVulkanImage  *, uint32, uint32); /* linkage=_ZNK12CVulkanImage24GetSubResourceImageStateEjj */
	/* <d1920c> vulkan/vulkanimage.cpp:54 */
	uint32 GetSubresourceIndex(const class CVulkanImage  *, uint32, uint32); /* linkage=_ZNK12CVulkanImage19GetSubresourceIndexEjj */
	uint32 GetNumArraySlices(const class CVulkanImage  *); /* linkage=_ZNK12CVulkanImage17GetNumArraySlicesEv */
	uint32 GetNumMipLevels(const class CVulkanImage  *); /* linkage=_ZNK12CVulkanImage15GetNumMipLevelsEv */
	void InitializeSubResourceImageState(class CVulkanImage *, uint32, uint32, VkImageLayout); /* linkage=_ZN12CVulkanImage31InitializeSubResourceImageStateEjj13VkImageLayout */
	void CVulkanImage(class CVulkanImage *, bool); /* linkage=_ZN12CVulkanImageC4Eb */
	void SetIsResident(class CVulkanImage *, bool); /* linkage=_ZN12CVulkanImage13SetIsResidentEb */
	VkImageUsageFlags GetImageUsageFlags(const class CVulkanImage  *); /* linkage=_ZNK12CVulkanImage18GetImageUsageFlagsEv */
	void SetImageUsageFlags(class CVulkanImage *, VkImageUsageFlags); /* linkage=_ZN12CVulkanImage18SetImageUsageFlagsEj */
	bool GetIsResident(class CVulkanImage *); /* linkage=_ZN12CVulkanImage13GetIsResidentEv */
	void CVulkanImage(class CVulkanImage *, const class CVulkanImage  &); /* linkage=_ZN12CVulkanImageC4ERKS_ */
	virtual void ~CVulkanImage(class CVulkanImage *); /* linkage=_ZN12CVulkanImageD4Ev */
	/* <d19257> vulkan/vulkanimage.cpp:72 */
	void SetAllSubResouceImageStates(class CVulkanImage *, VkImageLayout); /* linkage=_ZN12CVulkanImage27SetAllSubResouceImageStatesE13VkImageLayout */
};

// <00C23706> vulkan/vulkanimage.h:20
void CVulkanImage::CVulkanImage(bool bOwnsObject)
{
} /* size: 0 */

// <00B8BC0F> vulkan/vulkanimage.h:29
inline void CVulkanImage::GetNumMipLevels()
{
} /* size: 0 */

// <00B8BBF6> vulkan/vulkanimage.h:30
inline void CVulkanImage::GetNumArraySlices()
{
} /* size: 0 */

// <00C4EC70> vulkan/vulkanimage.h:32
inline void CVulkanImage::GetIsResident()
{
} /* size: 0 */

// <00C4EC4B> vulkan/vulkanimage.h:33
inline void CVulkanImage::SetIsResident(bool bResident)
{
} /* size: 0 */

// <00C4EC26> vulkan/vulkanimage.h:35
inline void CVulkanImage::SetImageUsageFlags(VkImageUsageFlags nImageUsageFlags)
{
} /* size: 0 */

// <00C4EC0D> vulkan/vulkanimage.h:36
inline void CVulkanImage::GetImageUsageFlags()
{
} /* size: 0 */

