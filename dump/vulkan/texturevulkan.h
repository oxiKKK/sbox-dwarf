
//
// vulkan/texturevulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 40
//	classes: 5
//	struct: 1
//

// <00405C9F> vulkan/texturevulkan.h:27
// member variables: 13
// struct size: 104
struct VulkanImageViews_t {
	CVulkanImageViewObject * m_pImageView; /* 0 8 */
	CVulkanImageViewObject * m_pImageViewSrgb; /* 8 8 */
	CVulkanImageViewObject * m_pCubeAsArrayImageView; /* 16 8 */
	CVulkanImageViewObject * m_pCubeAsArrayImageViewSrgb; /* 24 8 */
	CVulkanImageViewObject * * m_ppPerMipLevelImageView; /* 32 8 */
	CVulkanImageViewObject * * m_ppPerMipLevelImageViewSrgb; /* 40 8 */
	CVulkanImageViewObject * * m_ppColorTargetView; /* 48 8 */
	CVulkanImageViewObject * * m_ppColorTargetViewSrgb; /* 56 8 */
	CVulkanImageViewObject * * m_ppPerArraySliceColorTargetView; /* 64 8 */
	CVulkanImageViewObject * * m_ppPerArraySliceColorTargetViewSrgb; /* 72 8 */
	CVulkanImageViewObject * m_pDepthStencilView; /* 80 8 */
	CVulkanImageViewObject * * m_ppPerArraySliceDepthStencilView; /* 88 8 */
	CVulkanImageViewObject * * m_ppPerMipLevelUAVCompressedBlockView; /* 96 8 */
};

// <00C243DE> vulkan/texturevulkan.h:47
// function calls: 2
void CTextureVulkan::~CTextureVulkan()
{
	IVmaAllocationBase::~IVmaAllocationBase(); // 183
	IVmaAllocationImage::~IVmaAllocationImage(); // 47
} /* size: 19, inline expansions: 2 (0 bytes) */

// <00C242EC> vulkan/texturevulkan.h:47
// function calls: 3
void CTextureVulkan::~CTextureVulkan()
{
	IVmaAllocationBase::~IVmaAllocationBase(); // 183
	IVmaAllocationImage::~IVmaAllocationImage(); // 47
	CTextureVulkan::~CTextureVulkan(); // 47
} /* size: 46, inline expansions: 3 (19 bytes) */

// <00C242CF> vulkan/texturevulkan.h:47
inline void CTextureVulkan::~CTextureVulkan()
{
} /* size: 0 */

// <00C21C4F> vulkan/texturevulkan.h:47
// member functions: 48
// member variables: 5
// vtable entries: 11
// class size: 136
class CTextureVulkan : public CTextureBase, public IVmaAllocationImage {
public:
	/* class CTextureBase <ancestor>; */ /* 0 0 */
	/* class IVmaAllocationImage <ancestor>; */ /* 16 8 */
	void CTextureVulkan(CTextureVulkan* , CTextureVulkan& );
	void CTextureVulkan(CTextureVulkan* , const CTextureVulkan& );
private:
	/* vulkan/texturevulkan.cpp:997 */
	virtual void SpinWaitForFallbackTextureHookup(CTextureVulkan* , RenderColorSpace_t);
	/* vulkan/texturevulkan.cpp:187 */
	void CTextureVulkan(CTextureVulkan* );
	/* vulkan/texturevulkan.cpp:936 */
	virtual void Shutdown(CTextureVulkan* );
	/* vulkan/texturevulkan.cpp:815 */
	virtual void AssignTextureObject(CTextureVulkan* , const TextureObjectInfo_t& , bool, uint32, CRenderContextBase* );
	/* vulkan/texturevulkan.cpp:853 */
	virtual void AssignStandin(CTextureVulkan* , CTextureBase* , TextureStandinType_t, CRenderContextBase* );
	/* vulkan/texturevulkan.cpp:912 */
	virtual void AssignFallbackTexture(CTextureVulkan* , CRenderContextBase* );
	/* vulkan/texturevulkan.cpp:985 */
	virtual void FreeGPUResources(CTextureVulkan* , CRenderContextBase* );
	/* vulkan/texturevulkan.cpp:1498 */
	virtual void AssignDebugName(CTextureVulkan* , const CResourceName& );
	/* vulkan/texturevulkan.h:63 */
	VkFormat GetFormat(const CTextureVulkan* );
	/* vulkan/texturevulkan.cpp:2290 */
	virtual bool VmaGetRelocatable(const CTextureVulkan* );
	/* vulkan/texturevulkan.cpp:2301 */
	virtual uint64_t VmaCreateNewVulkanObject(CTextureVulkan* , uint64_t* );
	/* vulkan/texturevulkan.cpp:2318 */
	virtual void VmaAssignNewObject(CTextureVulkan* , CRenderContextVulkan* , uint64_t, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
	/* vulkan/texturevulkan.cpp:2346 */
	virtual void CopyImage(CTextureVulkan* , CRenderContextVulkan* , VkImage);
	/* vulkan/texturevulkan.cpp:325 */
	void InitSwapChain(CTextureVulkan* , const CTextureCreationDesc* , CVulkanImage* , HRenderTexture, VkFormat);
	/* vulkan/texturevulkan.cpp:351 */
	void InitExternal(CTextureVulkan* , VulkanDeviceSpecificTexture_t* , HRenderTexture);
	/* vulkan/texturevulkan.h:75 */
	void AllocateVulkanTexture(CTextureVulkan* );
	/* vulkan/texturevulkan.cpp:952 */
	void ReleaseVulkanTexture(CTextureVulkan* );
	/* vulkan/texturevulkan.cpp:381 */
	void CreateImageViews(CTextureVulkan* , CVulkanImage* , VkFormat);
	/* vulkan/texturevulkan.cpp:793 */
	void SetInitialImageLayout(CTextureVulkan* , CVulkanImage* );
	/* vulkan/texturevulkan.cpp:194 */
	void ComputeImageViews(const CTextureVulkan* , VkImageViewCreateInfo* , VkImageViewCreateInfo* , VkImageViewCreateInfo* , VkImageViewCreateInfo* , bool* , const TextureSpecification_t* , VkFormat);
	/* vulkan/texturevulkan.h:83 */
	CVulkanImage* GetTextureResource(const CTextureVulkan* );
	VulkanImageViews_t m_ImageViews; /* 24 104 */
	VkFormat m_nFormat; /* 128 4 */
	VkFormat m_nLinearFormat; /* 132 4 */
	virtual void ~CTextureVulkan(CTextureVulkan* );
	class CVulkanImage * GetTextureResource(const class CTextureVulkan  *); /* linkage=_ZNK14CTextureVulkan18GetTextureResourceEv */
	VkFormat GetFormat(const class CTextureVulkan  *); /* linkage=_ZNK14CTextureVulkan9GetFormatEv */
	void CTextureVulkan(class CTextureVulkan *, class CTextureVulkan &); /* linkage=_ZN14CTextureVulkanC4EOS_ */
	void CTextureVulkan(class CTextureVulkan *, const class CTextureVulkan  &); /* linkage=_ZN14CTextureVulkanC4ERKS_ */
	virtual void SpinWaitForFallbackTextureHookup(class CTextureVulkan *, enum RenderColorSpace_t); /* linkage=_ZN14CTextureVulkan32SpinWaitForFallbackTextureHookupE18RenderColorSpace_t */
	void CTextureVulkan(class CTextureVulkan *); /* linkage=_ZN14CTextureVulkanC4Ev */
	virtual void Shutdown(class CTextureVulkan *); /* linkage=_ZN14CTextureVulkan8ShutdownEv */
	virtual void AssignTextureObject(class CTextureVulkan *, const class TextureObjectInfo_t  &, bool, uint32, class CRenderContextBase *); /* linkage=_ZN14CTextureVulkan19AssignTextureObjectERK19TextureObjectInfo_tbjP18CRenderContextBase */
	virtual void AssignStandin(class CTextureVulkan *, class CTextureBase *, enum TextureStandinType_t, class CRenderContextBase *); /* linkage=_ZN14CTextureVulkan13AssignStandinEP12CTextureBase20TextureStandinType_tP18CRenderContextBase */
	virtual void AssignFallbackTexture(class CTextureVulkan *, class CRenderContextBase *); /* linkage=_ZN14CTextureVulkan21AssignFallbackTextureEP18CRenderContextBase */
	/* <c57767> vulkan/texturevulkan.cpp:985 */
	virtual void FreeGPUResources(class CTextureVulkan *, class CRenderContextBase *); /* linkage=_ZN14CTextureVulkan16FreeGPUResourcesEP18CRenderContextBase */
	virtual void AssignDebugName(class CTextureVulkan *, const class CResourceName  &); /* linkage=_ZN14CTextureVulkan15AssignDebugNameERK13CResourceName */
	virtual bool VmaGetRelocatable(const class CTextureVulkan  *); /* linkage=_ZNK14CTextureVulkan17VmaGetRelocatableEv */
	virtual uint64_t VmaCreateNewVulkanObject(class CTextureVulkan *, uint64_t *); /* linkage=_ZN14CTextureVulkan24VmaCreateNewVulkanObjectEPm */
	virtual void VmaAssignNewObject(class CTextureVulkan *, class CRenderContextVulkan *, uint64_t, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN14CTextureVulkan18VmaAssignNewObjectEP20CRenderContextVulkanmR10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS8_iEE */
	virtual void CopyImage(class CTextureVulkan *, class CRenderContextVulkan *, VkImage); /* linkage=_ZN14CTextureVulkan9CopyImageEP20CRenderContextVulkanP9VkImage_T */
	void InitSwapChain(class CTextureVulkan *, const class CTextureCreationDesc  *, class CVulkanImage *, HRenderTexture, VkFormat); /* linkage=_ZN14CTextureVulkan13InitSwapChainEPK20CTextureCreationDescP12CVulkanImage11CWeakHandleI31InfoForResourceTypeCTextureBaseE8VkFormat */
	void InitExternal(class CTextureVulkan *, class VulkanDeviceSpecificTexture_t *, HRenderTexture); /* linkage=_ZN14CTextureVulkan12InitExternalEP29VulkanDeviceSpecificTexture_t11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void AllocateVulkanTexture(class CTextureVulkan *); /* linkage=_ZN14CTextureVulkan21AllocateVulkanTextureEv */
	void ReleaseVulkanTexture(class CTextureVulkan *); /* linkage=_ZN14CTextureVulkan20ReleaseVulkanTextureEv */
	void CreateImageViews(class CTextureVulkan *, class CVulkanImage *, VkFormat); /* linkage=_ZN14CTextureVulkan16CreateImageViewsEP12CVulkanImage8VkFormat */
	void SetInitialImageLayout(class CTextureVulkan *, class CVulkanImage *); /* linkage=_ZN14CTextureVulkan21SetInitialImageLayoutEP12CVulkanImage */
	void ComputeImageViews(const class CTextureVulkan  *, VkImageViewCreateInfo *, VkImageViewCreateInfo *, VkImageViewCreateInfo *, VkImageViewCreateInfo *, bool *, const class TextureSpecification_t  *, VkFormat); /* linkage=_ZNK14CTextureVulkan17ComputeImageViewsEP21VkImageViewCreateInfoS1_S1_S1_PbPK22TextureSpecification_t8VkFormat */
	virtual void ~CTextureVulkan(class CTextureVulkan *); /* linkage=_ZN14CTextureVulkanD4Ev */
};

// <00C5036A> vulkan/texturevulkan.h:63
inline void CTextureVulkan::GetFormat()
{
} /* size: 0 */

// <00C50351> vulkan/texturevulkan.h:83
inline void CTextureVulkan::GetTextureResource()
{
} /* size: 0 */

// <00C171C3> vulkan/texturevulkan.h:96
// member functions: 18
// member variables: 4
// vtable entries: 4
// class size: 32
class CFallbackTextureVulkan : public IVmaAllocationImage {
public:
	/* class IVmaAllocationImage <ancestor>; */ /* 0 8 */
	void CFallbackTextureVulkan(CFallbackTextureVulkan* , const CFallbackTextureVulkan& );
	/* vulkan/texturevulkan.cpp:2174 */
	void CFallbackTextureVulkan(CFallbackTextureVulkan* );
	/* vulkan/texturevulkan.cpp:2195 */
	virtual void ~CFallbackTextureVulkan(CFallbackTextureVulkan* );
	/* vulkan/texturevulkan.cpp:2281 */
	virtual bool VmaGetRelocatable(const CFallbackTextureVulkan* );
	/* vulkan/texturevulkan.h:104 */
	virtual uint64_t VmaCreateNewVulkanObject(CFallbackTextureVulkan* , uint64_t* );
	/* vulkan/texturevulkan.h:105 */
	virtual void VmaAssignNewObject(CFallbackTextureVulkan* , CRenderContextVulkan* , uint64_t, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
	/* vulkan/texturevulkan.h:106 */
	virtual void CopyImage(CFallbackTextureVulkan* , CRenderContextVulkan* , VkImage);
	CVulkanImage * m_pVulkanImage; /* 8 8 */
	CVulkanImageViewObject * m_pImageView; /* 16 8 */
	CVulkanImageViewObject * m_pImageViewSrgb; /* 24 8 */
private:
	/* vulkan/texturevulkan.cpp:2212 */
	VkImage CreateVulkanImageInternal(CFallbackTextureVulkan* );
	/* vulkan/texturevulkan.cpp:2242 */
	void CreateVulkanImageViewsInternal(CFallbackTextureVulkan* );
	/* <5a5e6f> vulkan/texturevulkan.h:106 */
	virtual void CopyImage(class CFallbackTextureVulkan *, class CRenderContextVulkan *, VkImage); /* linkage=_ZN22CFallbackTextureVulkan9CopyImageEP20CRenderContextVulkanP9VkImage_T */
	virtual void VmaAssignNewObject(class CFallbackTextureVulkan *, class CRenderContextVulkan *, uint64_t, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN22CFallbackTextureVulkan18VmaAssignNewObjectEP20CRenderContextVulkanmR10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS8_iEE */
	virtual uint64_t VmaCreateNewVulkanObject(class CFallbackTextureVulkan *, uint64_t *); /* linkage=_ZN22CFallbackTextureVulkan24VmaCreateNewVulkanObjectEPm */
	void CFallbackTextureVulkan(class CFallbackTextureVulkan *, const class CFallbackTextureVulkan  &); /* linkage=_ZN22CFallbackTextureVulkanC4ERKS_ */
	void CFallbackTextureVulkan(class CFallbackTextureVulkan *); /* linkage=_ZN22CFallbackTextureVulkanC4Ev */
	virtual void ~CFallbackTextureVulkan(class CFallbackTextureVulkan *); /* linkage=_ZN22CFallbackTextureVulkanD4Ev */
	virtual bool VmaGetRelocatable(const class CFallbackTextureVulkan  *); /* linkage=_ZNK22CFallbackTextureVulkan17VmaGetRelocatableEv */
	VkImage CreateVulkanImageInternal(class CFallbackTextureVulkan *); /* linkage=_ZN22CFallbackTextureVulkan25CreateVulkanImageInternalEv */
	void CreateVulkanImageViewsInternal(class CFallbackTextureVulkan *); /* linkage=_ZN22CFallbackTextureVulkan30CreateVulkanImageViewsInternalEv */
};

// <00C50314> vulkan/texturevulkan.h:104
void CFallbackTextureVulkan::VmaCreateNewVulkanObject(uint64_t* pOldObjectOut)
{
} /* size: 7 */

// <00C502B9> vulkan/texturevulkan.h:105
void CFallbackTextureVulkan::VmaAssignNewObject(CRenderContextVulkan* pAssignContext, uint64_t nNewObject, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
} /* size: 5 */

// <00C5026D> vulkan/texturevulkan.h:106
void CFallbackTextureVulkan::CopyImage(CRenderContextVulkan* pCopyContext, VkImage pNewImage)
{
} /* size: 5 */

// <005A4527> vulkan/texturevulkan.h:106
inline void CFallbackTextureVulkan::CopyImage(CRenderContextVulkan* pCopyContext, VkImage pNewImage)
{
} /* size: 0 */

// <00C11E87> vulkan/texturevulkan.h:121
// member functions: 112
// member variables: 14
// vtable entries: 19
// class size: 18,016
class CTextureManagerVulkan : public CTextureManagerBase {
	/* vulkan/texturevulkan.h:205 */
	struct TextureUpdate_t {
		CTextureInfoId texInfo; /* 0 4 */
		uint32 uniqueId; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTextureManagerBase <ancestor>; */ /* 0 0 */
	void CTextureManagerVulkan(CTextureManagerVulkan* , const CTextureManagerVulkan& );
	/* vulkan/texturevulkan.cpp:1044 */
	virtual bool Init(CTextureManagerVulkan* , IResourceSystemUtils* );
	/* vulkan/texturevulkan.cpp:1079 */
	virtual void Shutdown(CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1864 */
	virtual CTextureBase* NewTexture(const CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1995 */
	virtual void HookupFallbackTextureAndQueueTextureBitsCopy(CTextureManagerVulkan* , CTextureBase* , void* );
	/* vulkan/texturevulkan.cpp:2028 */
	virtual bool TextureAchievedResidency(const CTextureManagerVulkan* , const CTextureBase* , const TextureObjectInfo_t& , int32);
	/* vulkan/texturevulkan.cpp:1477 */
	virtual bool GenerateTextureObject(CTextureManagerVulkan* , TextureObjectInfo_t* , const TextureSpecification_t& , const void* , int, IMemoryMappedFile* , TextureBitsMemoryType_t);
	/* vulkan/texturevulkan.cpp:1487 */
	virtual void HookUpTextureObject(CTextureManagerVulkan* , CTextureBase* , const TextureObjectInfo_t& );
	/* vulkan/texturevulkan.cpp:1519 */
	virtual HRenderTexture FindOrCreateProceduralTexture(CTextureManagerVulkan* , const CResourceName& , bool, const CTextureCreationDesc* );
	/* vulkan/texturevulkan.cpp:1581 */
	virtual HRenderTexture FindOrCreateExternalTexture(CTextureManagerVulkan* , const char* , SharedResourceHandle_t);
	/* vulkan/texturevulkan.cpp:1607 */
	virtual bool UpdateExternalTexture(CTextureManagerVulkan* , HRenderTexture, SharedResourceHandle_t);
	/* vulkan/texturevulkan.cpp:1869 */
	virtual void DestroyTextureObject(CTextureManagerVulkan* , TextureObjectInfo_t& );
	/* vulkan/texturevulkan.cpp:2124 */
	virtual void UpdateStats(const CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1089 */
	virtual bool SupportsTextureDimension(const CTextureManagerVulkan* , RenderTextureDimension_t);
	/* vulkan/texturevulkan.cpp:1379 */
	virtual void ComputeTextureObject(CTextureManagerVulkan* , TextureObjectInfo_t* , const TextureSpecification_t* , const void* , int, bool);
	/* vulkan/texturevulkan.cpp:2090 */
	virtual void RemoveTextureFromStreamableList(CTextureManagerVulkan* , const CTextureBase* );
	/* vulkan/texturevulkan.cpp:2096 */
	virtual void GetTextureResidencyInfo(CTextureManagerVulkan* , CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >& , TextureResidencyStats_t& );
	/* vulkan/texturevulkan.cpp:2042 */
	void ReleaseFallbackTexture(CTextureManagerVulkan* , CFallbackTextureVulkan* );
	/* vulkan/texturevulkan.cpp:2047 */
	bool EnsureFallbackTextureDataResident(CTextureManagerVulkan* , HRenderTexture, RenderColorSpace_t);
	/* vulkan/texturevulkan.cpp:2084 */
	int GetFallbackTexturePoolSize(const CTextureManagerVulkan* );
	/* vulkan/texturevulkan.h:154 */
	void FreeTextureGPUResources(CTextureManagerVulkan* , int32, const HRenderTexture* );
	/* vulkan/texturevulkan.cpp:1027 */
	void CTextureManagerVulkan(CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1035 */
	virtual void ~CTextureManagerVulkan(CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1648 */
	CVulkanSamplerObject* CreateSamplerObject(CTextureManagerVulkan* , VkDevice, VkSampler);
	/* vulkan/texturevulkan.cpp:1667 */
	void DestroySamplerObject(CTextureManagerVulkan* , CVulkanSamplerObject* );
	/* vulkan/texturevulkan.h:163 */
	void MarkAllSamplersDirty(CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1684 */
	void UpdateBindlessDescriptorSets(CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1759 */
	void UpdateBindlessTextureDescriptorSet(CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1703 */
	void UpdateBindlessSamplerDescriptorSet(CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1839 */
	HRenderTexture AllocateSwapChainTexture(CTextureManagerVulkan* , HRenderTexture, const CTextureCreationDesc* , CVulkanImage* , VkFormat);
	/* vulkan/texturevulkan.cpp:1851 */
	void ClearSwapChainTexture(CTextureManagerVulkan* , HRenderTexture);
	/* vulkan/texturevulkan.h:240 */
	VkImageView GetImageView(CTextureManagerVulkan* , HRenderTexture, RenderTextureDimension_t, RenderColorSpace_t, const char* );
	/* vulkan/texturevulkan.h:284 */
	VkImageView GetImageViewForMipLevel(CTextureManagerVulkan* , HRenderTexture, RenderTextureDimension_t, RenderColorSpace_t, int, const char* );
	/* vulkan/texturevulkan.h:333 */
	CVulkanImage* GetTextureResource(CTextureManagerVulkan* , HRenderTexture, RenderTextureDimension_t, const char* );
	/* vulkan/texturevulkan.h:368 */
	VkImageView GetColorTargetView(CTextureManagerVulkan* , HRenderTexture, RenderColorSpace_t);
	/* vulkan/texturevulkan.h:378 */
	VkImageView GetColorViewForArraySlice(CTextureManagerVulkan* , HRenderTexture, RenderColorSpace_t, int);
	/* vulkan/texturevulkan.h:397 */
	VkImageView GetColorTargetViewForMipLevel(CTextureManagerVulkan* , HRenderTexture, RenderColorSpace_t, int);
	/* vulkan/texturevulkan.h:410 */
	VkImageView GetDepthStencilView(CTextureManagerVulkan* , HRenderTexture);
	/* vulkan/texturevulkan.h:440 */
	VkImageView GetDepthStencilViewForArraySlice(CTextureManagerVulkan* , HRenderTexture, int);
	/* vulkan/texturevulkan.h:457 */
	bool HasCompressedBlockUAVView(const CTextureManagerVulkan* , HRenderTexture);
	/* vulkan/texturevulkan.h:468 */
	VkImageView GetCompressedBlockUAVView(const CTextureManagerVulkan* , HRenderTexture, int32);
	/* vulkan/texturevulkan.h:419 */
	const VkFormat* GetVulkanFormat(CTextureManagerVulkan* , HRenderTexture);
	/* vulkan/texturevulkan.h:428 */
	VkFormat GetVulkanImageViewFormat(CTextureManagerVulkan* , HRenderTexture, RenderColorSpace_t);
	/* vulkan/texturevulkan.h:482 */
	bool IsErrorTexture(CTextureManagerVulkan* , HRenderTexture);
	/* vulkan/texturevulkan.cpp:1885 */
	virtual bool IsSwapChain(const CTextureManagerVulkan* , HRenderTexture);
	/* vulkan/texturevulkan.cpp:1900 */
	void AddReferenceToDescriptorSet(CTextureManagerVulkan* , HRenderTexture, CDescriptorSetVulkan* );
	/* vulkan/texturevulkan.cpp:1920 */
	void RemoveReferenceToDescriptorSet(CTextureManagerVulkan* , HRenderTexture, CDescriptorSetVulkan* );
	/* vulkan/texturevulkan.cpp:1944 */
	void RebakeDescriptorSetsReferencing(CTextureManagerVulkan* , HRenderTexture, bool);
	/* vulkan/texturevulkan.cpp:1984 */
	void RemoveAllReferencesToDescriptorSets(CTextureManagerVulkan* );
	/* vulkan/texturevulkan.cpp:1742 */
	void UpdateBindlessTextureDescriptor(CTextureManagerVulkan* , const CTextureVulkan* );
	/* vulkan/texturevulkan.cpp:1438 */
	void EnsureRenderTargetHasDeviceMemory(CTextureManagerVulkan* , HRenderTexture);
	/* vulkan/texturevulkan.cpp:1106 */
	VkImage CreateVulkanImageInternal(const CTextureManagerVulkan* , const TextureSpecification_t* , bool, TextureSpecification_t* , bool* , VkImageUsageFlags* , VkFormat* );
protected:
	/* vulkan/texturevulkan.cpp:2105 */
	virtual bool PerformTextureStreaming(CTextureManagerVulkan* , int);
	/* vulkan/texturevulkan.cpp:2133 */
	virtual size_t RemoveMipLevels(CTextureManagerVulkan* , CTextureBase* , CRenderContextBase* , int);
	/* vulkan/texturevulkan.cpp:1549 */
	ExternalTextureInfo_t* FindOrCreateExternalTextureInfo(CTextureManagerVulkan* , SharedResourceHandle_t);
	/* vulkan/texturevulkan.cpp:1429 */
	void AllocateDeviceMemory(CTextureManagerVulkan* , CVulkanImage* , VulkanMemoryPoolType_t, bool, bool);
	CThreadMutex m_staticDescriptorSetReferenceMapMutex; /* 17200 72 */
	/* vulkan/texturevulkan.h:215 */
	typedef CUtlOrderedMap DescriptorSetReferenceMap_t;
	DescriptorSetReferenceMap_t m_staticDescriptorSetReferenceMap; /* 17272 48 */
	CThreadMutex m_QueuedTextureUpdatesLock; /* 17320 72 */
	CUtlVector<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> > m_QueuedTextureUpdates; /* 17392 32 */
	uint32 m_nMaxTextureIndex; /* 17424 4 */
	CThreadMutex m_lazyRenderTargetAllocationMutex; /* 17432 72 */
	CFallbackTextureHelper<CFallbackTextureVulkan> m_FallbackTextureHelper __attribute__((__aligned__(16))); /* 17504 32 */
	CTextureStreamingHelper m_TextureStreamingHelper; /* 17536 0 */
	CThreadMutex m_SamplerLock; /* 17888 72 */
	CUtlIdGenerator m_SamplerIdGenerator; /* 17960 16 */
	CUtlVector<CVulkanSamplerObject*, CUtlMemory<CVulkanSamplerObject*, int> > m_Samplers; /* 17976 32 */
	uint m_nFirstDirtySampler; /* 18008 4 */
	bool m_bSupportsDescriptorIndexing; /* 18012 1 */
	void RemoveReferenceToDescriptorSet(class CTextureManagerVulkan *, HRenderTexture, class CDescriptorSetVulkan *); /* linkage=_ZN21CTextureManagerVulkan30RemoveReferenceToDescriptorSetE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP20CDescriptorSetVulkan */
	void AddReferenceToDescriptorSet(class CTextureManagerVulkan *, HRenderTexture, class CDescriptorSetVulkan *); /* linkage=_ZN21CTextureManagerVulkan27AddReferenceToDescriptorSetE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP20CDescriptorSetVulkan */
	bool EnsureFallbackTextureDataResident(class CTextureManagerVulkan *, HRenderTexture, enum RenderColorSpace_t); /* linkage=_ZN21CTextureManagerVulkan33EnsureFallbackTextureDataResidentE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_t */
	VkImageView GetImageViewForMipLevel(class CTextureManagerVulkan *, HRenderTexture, enum RenderTextureDimension_t, enum RenderColorSpace_t, int, const char  *); /* linkage=_ZN21CTextureManagerVulkan23GetImageViewForMipLevelE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderColorSpace_tiPKc */
	VkImageView GetImageView(class CTextureManagerVulkan *, HRenderTexture, enum RenderTextureDimension_t, enum RenderColorSpace_t, const char  *); /* linkage=_ZN21CTextureManagerVulkan12GetImageViewE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderColorSpace_tPKc */
	void EnsureRenderTargetHasDeviceMemory(class CTextureManagerVulkan *, HRenderTexture); /* linkage=_ZN21CTextureManagerVulkan33EnsureRenderTargetHasDeviceMemoryE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	bool IsErrorTexture(class CTextureManagerVulkan *, HRenderTexture); /* linkage=_ZN21CTextureManagerVulkan14IsErrorTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	VkImageView GetCompressedBlockUAVView(const class CTextureManagerVulkan  *, HRenderTexture, int32); /* linkage=_ZNK21CTextureManagerVulkan25GetCompressedBlockUAVViewE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	bool HasCompressedBlockUAVView(const class CTextureManagerVulkan  *, HRenderTexture); /* linkage=_ZNK21CTextureManagerVulkan25HasCompressedBlockUAVViewE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	VkImageView GetDepthStencilViewForArraySlice(class CTextureManagerVulkan *, HRenderTexture, int); /* linkage=_ZN21CTextureManagerVulkan32GetDepthStencilViewForArraySliceE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	VkFormat GetVulkanImageViewFormat(class CTextureManagerVulkan *, HRenderTexture, enum RenderColorSpace_t); /* linkage=_ZN21CTextureManagerVulkan24GetVulkanImageViewFormatE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_t */
	const VkFormat  * GetVulkanFormat(class CTextureManagerVulkan *, HRenderTexture); /* linkage=_ZN21CTextureManagerVulkan15GetVulkanFormatE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	VkImageView GetDepthStencilView(class CTextureManagerVulkan *, HRenderTexture); /* linkage=_ZN21CTextureManagerVulkan19GetDepthStencilViewE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	VkImageView GetColorTargetViewForMipLevel(class CTextureManagerVulkan *, HRenderTexture, enum RenderColorSpace_t, int); /* linkage=_ZN21CTextureManagerVulkan29GetColorTargetViewForMipLevelE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_ti */
	VkImageView GetColorViewForArraySlice(class CTextureManagerVulkan *, HRenderTexture, enum RenderColorSpace_t, int); /* linkage=_ZN21CTextureManagerVulkan25GetColorViewForArraySliceE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_ti */
	VkImageView GetColorTargetView(class CTextureManagerVulkan *, HRenderTexture, enum RenderColorSpace_t); /* linkage=_ZN21CTextureManagerVulkan18GetColorTargetViewE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_t */
	/* <a65d8d> vulkan/texturevulkan.h:333 */
	class CVulkanImage * GetTextureResource(class CTextureManagerVulkan *, HRenderTexture, enum RenderTextureDimension_t, const char  *); /* linkage=_ZN21CTextureManagerVulkan18GetTextureResourceE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_tPKc */
	void UpdateBindlessDescriptorSets(class CTextureManagerVulkan *); /* linkage=_ZN21CTextureManagerVulkan28UpdateBindlessDescriptorSetsEv */
	/* <c5801b> vulkan/texturevulkan.cpp:1742 */
	void UpdateBindlessTextureDescriptor(class CTextureManagerVulkan *, const class CTextureVulkan  *); /* linkage=_ZN21CTextureManagerVulkan31UpdateBindlessTextureDescriptorEPK14CTextureVulkan */
	void RebakeDescriptorSetsReferencing(class CTextureManagerVulkan *, HRenderTexture, bool); /* linkage=_ZN21CTextureManagerVulkan31RebakeDescriptorSetsReferencingE11CWeakHandleI31InfoForResourceTypeCTextureBaseEb */
	void RemoveAllReferencesToDescriptorSets(class CTextureManagerVulkan *); /* linkage=_ZN21CTextureManagerVulkan35RemoveAllReferencesToDescriptorSetsEv */
	class CVulkanSamplerObject * CreateSamplerObject(class CTextureManagerVulkan *, VkDevice, VkSampler); /* linkage=_ZN21CTextureManagerVulkan19CreateSamplerObjectEP10VkDevice_TP11VkSampler_T */
	HRenderTexture AllocateSwapChainTexture(class CTextureManagerVulkan *, HRenderTexture, const class CTextureCreationDesc  *, class CVulkanImage *, VkFormat); /* linkage=_ZN21CTextureManagerVulkan24AllocateSwapChainTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK20CTextureCreationDescP12CVulkanImage8VkFormat */
	void CTextureManagerVulkan(class CTextureManagerVulkan *); /* linkage=_ZN21CTextureManagerVulkanC4Ev */
	void MarkAllSamplersDirty(class CTextureManagerVulkan *); /* linkage=_ZN21CTextureManagerVulkan20MarkAllSamplersDirtyEv */
	void CTextureManagerVulkan(class CTextureManagerVulkan *, const class CTextureManagerVulkan  &); /* linkage=_ZN21CTextureManagerVulkanC4ERKS_ */
	/* <c59455> vulkan/texturevulkan.cpp:1044 */
	virtual bool Init(class CTextureManagerVulkan *, class IResourceSystemUtils *); /* linkage=_ZN21CTextureManagerVulkan4InitEP20IResourceSystemUtils */
	virtual void Shutdown(class CTextureManagerVulkan *); /* linkage=_ZN21CTextureManagerVulkan8ShutdownEv */
	virtual class CTextureBase * NewTexture(const class CTextureManagerVulkan  *); /* linkage=_ZNK21CTextureManagerVulkan10NewTextureEv */
	virtual void HookupFallbackTextureAndQueueTextureBitsCopy(class CTextureManagerVulkan *, class CTextureBase *, void *); /* linkage=_ZN21CTextureManagerVulkan44HookupFallbackTextureAndQueueTextureBitsCopyEP12CTextureBasePv */
	virtual bool TextureAchievedResidency(const class CTextureManagerVulkan  *, const class CTextureBase  *, const class TextureObjectInfo_t  &, int32); /* linkage=_ZNK21CTextureManagerVulkan24TextureAchievedResidencyEPK12CTextureBaseRK19TextureObjectInfo_ti */
	virtual bool GenerateTextureObject(class CTextureManagerVulkan *, class TextureObjectInfo_t *, const class TextureSpecification_t  &, const void  *, int, class IMemoryMappedFile *, enum TextureBitsMemoryType_t); /* linkage=_ZN21CTextureManagerVulkan21GenerateTextureObjectEP19TextureObjectInfo_tRK22TextureSpecification_tPKviP17IMemoryMappedFile23TextureBitsMemoryType_t */
	virtual void HookUpTextureObject(class CTextureManagerVulkan *, class CTextureBase *, const class TextureObjectInfo_t  &); /* linkage=_ZN21CTextureManagerVulkan19HookUpTextureObjectEP12CTextureBaseRK19TextureObjectInfo_t */
	virtual HRenderTexture FindOrCreateProceduralTexture(class CTextureManagerVulkan *, const class CResourceName  &, bool, const class CTextureCreationDesc  *); /* linkage=_ZN21CTextureManagerVulkan29FindOrCreateProceduralTextureERK13CResourceNamebPK20CTextureCreationDesc */
	virtual HRenderTexture FindOrCreateExternalTexture(class CTextureManagerVulkan *, const char  *, SharedResourceHandle_t); /* linkage=_ZN21CTextureManagerVulkan27FindOrCreateExternalTextureEPKcy */
	virtual bool UpdateExternalTexture(class CTextureManagerVulkan *, HRenderTexture, SharedResourceHandle_t); /* linkage=_ZN21CTextureManagerVulkan21UpdateExternalTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEy */
	virtual void DestroyTextureObject(class CTextureManagerVulkan *, class TextureObjectInfo_t &); /* linkage=_ZN21CTextureManagerVulkan20DestroyTextureObjectER19TextureObjectInfo_t */
	virtual void UpdateStats(const class CTextureManagerVulkan  *); /* linkage=_ZNK21CTextureManagerVulkan11UpdateStatsEv */
	virtual bool SupportsTextureDimension(const class CTextureManagerVulkan  *, enum RenderTextureDimension_t); /* linkage=_ZNK21CTextureManagerVulkan24SupportsTextureDimensionE24RenderTextureDimension_t */
	virtual void ComputeTextureObject(class CTextureManagerVulkan *, class TextureObjectInfo_t *, const class TextureSpecification_t  *, const void  *, int, bool); /* linkage=_ZN21CTextureManagerVulkan20ComputeTextureObjectEP19TextureObjectInfo_tPK22TextureSpecification_tPKvib */
	virtual void RemoveTextureFromStreamableList(class CTextureManagerVulkan *, const class CTextureBase  *); /* linkage=_ZN21CTextureManagerVulkan31RemoveTextureFromStreamableListEPK12CTextureBase */
	virtual void GetTextureResidencyInfo(class CTextureManagerVulkan *, class CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> > &, class TextureResidencyStats_t &); /* linkage=_ZN21CTextureManagerVulkan23GetTextureResidencyInfoER10CUtlVectorI22TextureResidencyInfo_t10CUtlMemoryIS1_iEER23TextureResidencyStats_t */
	/* <c58075> vulkan/texturevulkan.cpp:2042 */
	void ReleaseFallbackTexture(class CTextureManagerVulkan *, class CFallbackTextureVulkan *); /* linkage=_ZN21CTextureManagerVulkan22ReleaseFallbackTextureEP22CFallbackTextureVulkan */
	int GetFallbackTexturePoolSize(const class CTextureManagerVulkan  *); /* linkage=_ZNK21CTextureManagerVulkan26GetFallbackTexturePoolSizeEv */
	void FreeTextureGPUResources(class CTextureManagerVulkan *, int32, const HRenderTexture  *); /* linkage=_ZN21CTextureManagerVulkan23FreeTextureGPUResourcesEiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void ~CTextureManagerVulkan(class CTextureManagerVulkan *); /* linkage=_ZN21CTextureManagerVulkanD4Ev */
	void DestroySamplerObject(class CTextureManagerVulkan *, class CVulkanSamplerObject *); /* linkage=_ZN21CTextureManagerVulkan20DestroySamplerObjectEP20CVulkanSamplerObject */
	void UpdateBindlessTextureDescriptorSet(class CTextureManagerVulkan *); /* linkage=_ZN21CTextureManagerVulkan34UpdateBindlessTextureDescriptorSetEv */
	void UpdateBindlessSamplerDescriptorSet(class CTextureManagerVulkan *); /* linkage=_ZN21CTextureManagerVulkan34UpdateBindlessSamplerDescriptorSetEv */
	void ClearSwapChainTexture(class CTextureManagerVulkan *, HRenderTexture); /* linkage=_ZN21CTextureManagerVulkan21ClearSwapChainTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool IsSwapChain(const class CTextureManagerVulkan  *, HRenderTexture); /* linkage=_ZNK21CTextureManagerVulkan11IsSwapChainE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	VkImage CreateVulkanImageInternal(const class CTextureManagerVulkan  *, const class TextureSpecification_t  *, bool, class TextureSpecification_t *, bool *, VkImageUsageFlags *, VkFormat *); /* linkage=_ZNK21CTextureManagerVulkan25CreateVulkanImageInternalEPK22TextureSpecification_tbPS0_PbPjP8VkFormat */
	virtual bool PerformTextureStreaming(class CTextureManagerVulkan *, int); /* linkage=_ZN21CTextureManagerVulkan23PerformTextureStreamingEi */
	virtual size_t RemoveMipLevels(class CTextureManagerVulkan *, class CTextureBase *, class CRenderContextBase *, int); /* linkage=_ZN21CTextureManagerVulkan15RemoveMipLevelsEP12CTextureBaseP18CRenderContextBasei */
	/* <c579c6> vulkan/texturevulkan.cpp:1549 */
	class ExternalTextureInfo_t * FindOrCreateExternalTextureInfo(class CTextureManagerVulkan *, SharedResourceHandle_t); /* linkage=_ZN21CTextureManagerVulkan31FindOrCreateExternalTextureInfoEy */
	void AllocateDeviceMemory(class CTextureManagerVulkan *, class CVulkanImage *, enum VulkanMemoryPoolType_t, bool, bool); /* linkage=_ZN21CTextureManagerVulkan20AllocateDeviceMemoryEP12CVulkanImage22VulkanMemoryPoolType_tbb */
} __attribute__((__aligned__(16)));

// <009A6675> vulkan/texturevulkan.h:156
void CTextureManagerVulkan::CTextureManagerVulkan()
{
} /* size: 0 */

// <00A5872C> vulkan/texturevulkan.h:163
inline void CTextureManagerVulkan::MarkAllSamplersDirty()
{
} /* size: 0 */

// <00A575C8> vulkan/texturevulkan.h:240
// variables: 10
// function calls: 63
void CTextureManagerVulkan::GetImageView(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace, const char* szParamName)
{
	const char   __FUNCTION__; // 28678
	const CTextureVulkan* pTexture; // 243
	VkImageView pView; // 256
	RenderTextureDimension_t nComputedDim; // 257
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		int __executeCount; // 249
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 249
		CResourceName::Get(); // 249
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 249
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 254
	}
	{
		int __executeCount; // 265
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 265
		CResourceName::Get(); // 265
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 265
	}
	{
		int __executeCount; // 271
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 271
		CResourceName::Get(); // 271
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 271
	}
	{
		int __executeCount; // 278
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 278
		CResourceName::Get(); // 278
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 278
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 243
	CTextureInfoId::IsOutOfBounds(); // 254
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 483
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 161
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 163
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 172
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 175
	TextureSpecification_t::ComputeTextureDimension(); // 483
	CTextureBase::ComputeTextureDimension(); // 257
	CVulkanObject<VkImageView_T::Get()>* this); // 262
	CVulkanObject<VkImageView_T::Get()>* this); // 266
	CVulkanObject<VkImageView_T::Get()>* this); // 266
	CVulkanObject<VkImageView_T::Get()>* this); // 262
	CVulkanObject<VkImageView_T::Get()>* this); // 279
	CVulkanObject<VkImageView_T::Get()>* this); // 279
	CVulkanObject<VkImageView_T::Get()>* this); // 275
	CVulkanObject<VkImageView_T::Get()>* this); // 275
} /* size: 1957, variables: 4, inline expansions: 19 (284 bytes) */

// <00878E3C> vulkan/texturevulkan.h:240
// variables: 10
// function calls: 63
void CTextureManagerVulkan::GetImageView(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace, const char* szParamName)
{
	const char   __FUNCTION__; // 22886
	const CTextureVulkan* pTexture; // 243
	VkImageView pView; // 256
	RenderTextureDimension_t nComputedDim; // 257
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		int __executeCount; // 249
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 249
		CResourceName::Get(); // 249
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 249
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 254
	}
	{
		int __executeCount; // 265
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 265
		CResourceName::Get(); // 265
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 265
	}
	{
		int __executeCount; // 271
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 271
		CResourceName::Get(); // 271
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 271
	}
	{
		int __executeCount; // 278
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 278
		CResourceName::Get(); // 278
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 278
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 243
	CTextureInfoId::IsOutOfBounds(); // 254
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 483
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 161
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 163
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 172
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 175
	TextureSpecification_t::ComputeTextureDimension(); // 483
	CTextureBase::ComputeTextureDimension(); // 257
	CVulkanObject<VkImageView_T::Get()>* this); // 262
	CVulkanObject<VkImageView_T::Get()>* this); // 266
	CVulkanObject<VkImageView_T::Get()>* this); // 266
	CVulkanObject<VkImageView_T::Get()>* this); // 262
	CVulkanObject<VkImageView_T::Get()>* this); // 279
	CVulkanObject<VkImageView_T::Get()>* this); // 279
	CVulkanObject<VkImageView_T::Get()>* this); // 275
	CVulkanObject<VkImageView_T::Get()>* this); // 275
} /* size: 1957, variables: 4, inline expansions: 19 (284 bytes) */

// <004B6E5A> vulkan/texturevulkan.h:240
// variables: 10
// function calls: 63
void CTextureManagerVulkan::GetImageView(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace, const char* szParamName)
{
	const char   __FUNCTION__; // 3432
	const CTextureVulkan* pTexture; // 243
	VkImageView pView; // 256
	RenderTextureDimension_t nComputedDim; // 257
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		int __executeCount; // 249
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 249
		CResourceName::Get(); // 249
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 249
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 254
	}
	{
		int __executeCount; // 265
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 265
		CResourceName::Get(); // 265
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 265
	}
	{
		int __executeCount; // 271
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 271
		CResourceName::Get(); // 271
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 271
	}
	{
		int __executeCount; // 278
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 278
		CResourceName::Get(); // 278
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 278
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 243
	CTextureInfoId::IsOutOfBounds(); // 254
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 483
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 161
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 163
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 172
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 175
	TextureSpecification_t::ComputeTextureDimension(); // 483
	CTextureBase::ComputeTextureDimension(); // 257
	CVulkanObject<VkImageView_T::Get()>* this); // 262
	CVulkanObject<VkImageView_T::Get()>* this); // 266
	CVulkanObject<VkImageView_T::Get()>* this); // 266
	CVulkanObject<VkImageView_T::Get()>* this); // 262
	CVulkanObject<VkImageView_T::Get()>* this); // 279
	CVulkanObject<VkImageView_T::Get()>* this); // 279
	CVulkanObject<VkImageView_T::Get()>* this); // 275
	CVulkanObject<VkImageView_T::Get()>* this); // 275
} /* size: 1957, variables: 4, inline expansions: 19 (284 bytes) */

// <00877A6C> vulkan/texturevulkan.h:284
// variables: 10
// function calls: 73
void CTextureManagerVulkan::GetImageViewForMipLevel(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace, int nMip, const char* szParamName)
{
	const char   __FUNCTION__; // 23183
	const CTextureVulkan* pTexture; // 287
	VkImageView pView; // 300
	RenderTextureDimension_t nComputedDim; // 301
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 286
	}
	{
		int __executeCount; // 293
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 293
		CResourceName::Get(); // 293
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 293
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 298
	}
	{
		CUtlString textureName; // 305
		{
			int __executeCount; // 311
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
										const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 311
			CResourceName::Get(); // 311
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 311
		}
		CUtlString::CUtlString(
				const char* pString);  // 305
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 306
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 306
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 308
		CResourceName::Get(); // 308
		CUtlString::operator=(
				const char* src);  // 308
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 308
		CVulkanObject<VkImageView_T::Get()>* this); // 312
		CUtlString::~CUtlString(); // 313
		CVulkanObject<VkImageView_T::Get()>* this); // 312
	}
	{
		int __executeCount; // 327
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 327
		CResourceName::Get(); // 327
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 327
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 287
	CTextureInfoId::IsOutOfBounds(); // 298
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 483
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 161
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 163
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 172
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 175
	TextureSpecification_t::ComputeTextureDimension(); // 483
	CTextureBase::ComputeTextureDimension(); // 301
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 315
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 315
	CVulkanObject<VkImageView_T::Get()>* this); // 323
	CVulkanObject<VkImageView_T::Get()>* this); // 328
	CVulkanObject<VkImageView_T::Get()>* this); // 328
	CVulkanObject<VkImageView_T::Get()>* this); // 319
	CVulkanObject<VkImageView_T::Get()>* this); // 323
	CVulkanObject<VkImageView_T::Get()>* this); // 319
} /* size: 1856, variables: 4, inline expansions: 20 (401 bytes) */

// <004B5A84> vulkan/texturevulkan.h:284
// variables: 10
// function calls: 73
void CTextureManagerVulkan::GetImageViewForMipLevel(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace, int nMip, const char* szParamName)
{
	const char   __FUNCTION__; // 3474
	const CTextureVulkan* pTexture; // 287
	VkImageView pView; // 300
	RenderTextureDimension_t nComputedDim; // 301
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 286
	}
	{
		int __executeCount; // 293
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 293
		CResourceName::Get(); // 293
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 293
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 298
	}
	{
		CUtlString textureName; // 305
		{
			int __executeCount; // 311
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
										const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 311
			CResourceName::Get(); // 311
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 311
		}
		CUtlString::CUtlString(
				const char* pString);  // 305
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 306
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 306
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 308
		CResourceName::Get(); // 308
		CUtlString::operator=(
				const char* src);  // 308
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 308
		CVulkanObject<VkImageView_T::Get()>* this); // 312
		CUtlString::~CUtlString(); // 313
		CVulkanObject<VkImageView_T::Get()>* this); // 312
	}
	{
		int __executeCount; // 327
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 488
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
				CResourceName* pOutName);  // 206
		CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 327
		CResourceName::Get(); // 327
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 327
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 287
	CTextureInfoId::IsOutOfBounds(); // 298
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 483
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 161
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 163
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 172
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 175
	TextureSpecification_t::ComputeTextureDimension(); // 483
	CTextureBase::ComputeTextureDimension(); // 301
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 315
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 315
	CVulkanObject<VkImageView_T::Get()>* this); // 323
	CVulkanObject<VkImageView_T::Get()>* this); // 328
	CVulkanObject<VkImageView_T::Get()>* this); // 328
	CVulkanObject<VkImageView_T::Get()>* this); // 319
	CVulkanObject<VkImageView_T::Get()>* this); // 323
	CVulkanObject<VkImageView_T::Get()>* this); // 319
} /* size: 1856, variables: 4, inline expansions: 20 (401 bytes) */

// <00B8B569> vulkan/texturevulkan.h:333
// variables: 6
inline void CTextureManagerVulkan::GetTextureResource(HRenderTexture hTexture, RenderTextureDimension_t nDim, const char* szParamName)
{
	const CTextureBase* pTexture; // 339
	const char   __FUNCTION__; // 26890
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
	{
		int __executeCount; // 362
	}
} /* size: 0, variables: 2 */

// <00A65D8D> vulkan/texturevulkan.h:333
// variables: 3
// function calls: 18
void CTextureManagerVulkan::GetTextureResource(HRenderTexture hTexture, RenderTextureDimension_t nDim, const char* szParamName)
{
	const CTextureBase* pTexture; // 339
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 161
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 163
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 172
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 175
		TextureSpecification_t::ComputeTextureDimension(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	{
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 360
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 360
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
} /* size: 573, variables: 1, inline expansions: 8 (97 bytes) */

// <00A57499> vulkan/texturevulkan.h:333
// variables: 6
inline void CTextureManagerVulkan::GetTextureResource(HRenderTexture hTexture, RenderTextureDimension_t nDim, const char* szParamName)
{
	const CTextureBase* pTexture; // 339
	const char   __FUNCTION__; // 28840
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
	{
		int __executeCount; // 362
	}
} /* size: 0, variables: 2 */

// <008779BD> vulkan/texturevulkan.h:333
// variables: 6
inline void CTextureManagerVulkan::GetTextureResource(HRenderTexture hTexture, RenderTextureDimension_t nDim, const char* szParamName)
{
	const CTextureBase* pTexture; // 339
	const char   __FUNCTION__; // 23048
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
	{
		int __executeCount; // 362
	}
} /* size: 0, variables: 2 */

// <0087797D> vulkan/texturevulkan.h:368
// variable: 1
inline void CTextureManagerVulkan::GetColorTargetView(HRenderTexture hTexture, RenderColorSpace_t colorSpace)
{
	CTextureVulkan* pTexture; // 370
} /* size: 0, variables: 1 */

// <00ADC453> vulkan/texturevulkan.h:378
// variables: 3
inline void CTextureManagerVulkan::GetColorViewForArraySlice(HRenderTexture hTexture, RenderColorSpace_t colorSpace, int nSlice)
{
	CTextureVulkan* pTexture; // 380
	const char   __FUNCTION__; // 14796
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 388
	}
} /* size: 0, variables: 2 */

// <00877907> vulkan/texturevulkan.h:378
// variables: 3
inline void CTextureManagerVulkan::GetColorViewForArraySlice(HRenderTexture hTexture, RenderColorSpace_t colorSpace, int nSlice)
{
	CTextureVulkan* pTexture; // 380
	const char   __FUNCTION__; // 23237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 388
	}
} /* size: 0, variables: 2 */

// <00ADC406> vulkan/texturevulkan.h:397
// variable: 1
inline void CTextureManagerVulkan::GetColorTargetViewForMipLevel(HRenderTexture hTexture, RenderColorSpace_t colorSpace, int nMip)
{
	CTextureVulkan* pTexture; // 399
} /* size: 0, variables: 1 */

// <00ADC3D3> vulkan/texturevulkan.h:410
// variable: 1
inline void CTextureManagerVulkan::GetDepthStencilView(HRenderTexture hTexture)
{
	CTextureVulkan* pTexture; // 412
} /* size: 0, variables: 1 */

// <00ADC3A0> vulkan/texturevulkan.h:419
// variable: 1
inline void CTextureManagerVulkan::GetVulkanFormat(HRenderTexture hTexture)
{
	CTextureVulkan* pTexture; // 421
} /* size: 0, variables: 1 */

// <00ADC337> vulkan/texturevulkan.h:428
// variables: 3
inline void CTextureManagerVulkan::GetVulkanImageViewFormat(HRenderTexture hTexture, RenderColorSpace_t rtColorSpace)
{
	CTextureVulkan* pTexture; // 430
	const char   __FUNCTION__; // 14769
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 433
	}
} /* size: 0, variables: 2 */

// <008777EB> vulkan/texturevulkan.h:428
// variables: 3
inline void CTextureManagerVulkan::GetVulkanImageViewFormat(HRenderTexture hTexture, RenderColorSpace_t rtColorSpace)
{
	CTextureVulkan* pTexture; // 430
	const char   __FUNCTION__; // 23210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 433
	}
} /* size: 0, variables: 2 */

// <00ADC2C2> vulkan/texturevulkan.h:440
// variables: 3
inline void CTextureManagerVulkan::GetDepthStencilViewForArraySlice(HRenderTexture hTexture, int nSlice)
{
	CTextureVulkan* pTexture; // 442
	const char   __FUNCTION__; // 14955
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 448
	}
} /* size: 0, variables: 2 */

// <00877782> vulkan/texturevulkan.h:440
// variables: 3
inline void CTextureManagerVulkan::GetDepthStencilViewForArraySlice(HRenderTexture hTexture, int nSlice)
{
	CTextureVulkan* pTexture; // 442
	const char   __FUNCTION__; // 23421
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 448
	}
} /* size: 0, variables: 2 */

// <0087774F> vulkan/texturevulkan.h:457
// variable: 1
inline void CTextureManagerVulkan::HasCompressedBlockUAVView(HRenderTexture hTexture)
{
	CTextureVulkan* pTexture; // 459
} /* size: 0, variables: 1 */

// <0087770F> vulkan/texturevulkan.h:468
// variable: 1
inline void CTextureManagerVulkan::GetCompressedBlockUAVView(HRenderTexture hTexture, int32 nMipLevelToBind)
{
	CTextureVulkan* pTexture; // 470
} /* size: 0, variables: 1 */

// <008776C6> vulkan/texturevulkan.h:482
// variable: 1
inline void CTextureManagerVulkan::IsErrorTexture(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 484
} /* size: 0, variables: 1 */

// <004087A9> vulkan/texturevulkan.h:496
void DestroyVulkanTextureResources(CVulkanImage *, VulkanImageViews_t *, const TextureSpecification_t *)
{
} /* size: 0 */

// <00407BA1> vulkan/texturevulkan.h:502
// member functions: 7
// member variables: 4
// class size: 232
class CVulkanTextureObjectToDelete : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* vulkan/texturevulkan.h:505 */
	void CVulkanTextureObjectToDelete(CVulkanTextureObjectToDelete* , CVulkanImage* , VulkanImageViews_t* , const TextureSpecification_t* );
	/* vulkan/texturevulkan.h:511 */
	virtual void ~CVulkanTextureObjectToDelete(CVulkanTextureObjectToDelete* );
private:
	/* vulkan/texturevulkan.h:518 */
	void CVulkanTextureObjectToDelete(CVulkanTextureObjectToDelete* );
	CVulkanImage * m_pVulkanImage; /* 16 8 */
	VulkanImageViews_t m_imageViews; /* 24 104 */
	TextureSpecification_t m_textureSpec; /* 128 104 */
	void CVulkanTextureObjectToDelete(class CVulkanTextureObjectToDelete *, class CVulkanImage *, class VulkanImageViews_t *, const class TextureSpecification_t  *); /* linkage=_ZN28CVulkanTextureObjectToDeleteC4EP12CVulkanImageP18VulkanImageViews_tPK22TextureSpecification_t */
	virtual void ~CVulkanTextureObjectToDelete(class CVulkanTextureObjectToDelete *); /* linkage=_ZN28CVulkanTextureObjectToDeleteD4Ev */
	void CVulkanTextureObjectToDelete(class CVulkanTextureObjectToDelete *); /* linkage=_ZN28CVulkanTextureObjectToDeleteC4Ev */
	void CVulkanTextureObjectToDelete(class CVulkanTextureObjectToDelete *, const class CVulkanTextureObjectToDelete  &); /* linkage=_ZN28CVulkanTextureObjectToDeleteC4ERKS_ */
};

// <009A301C> vulkan/texturevulkan.h:502
// member functions: 8
// member variables: 4
// class size: 232
class CVulkanTextureObjectToDelete : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CVulkanTextureObjectToDelete(CVulkanTextureObjectToDelete* , const CVulkanTextureObjectToDelete& );
	/* vulkan/texturevulkan.h:505 */
	void CVulkanTextureObjectToDelete(CVulkanTextureObjectToDelete* , CVulkanImage* , VulkanImageViews_t* , const TextureSpecification_t* );
	/* vulkan/texturevulkan.h:511 */
	virtual void ~CVulkanTextureObjectToDelete(CVulkanTextureObjectToDelete* );
private:
	/* vulkan/texturevulkan.h:518 */
	void CVulkanTextureObjectToDelete(CVulkanTextureObjectToDelete* );
	CVulkanImage * m_pVulkanImage; /* 16 8 */
	VulkanImageViews_t m_imageViews; /* 24 104 */
	TextureSpecification_t m_textureSpec; /* 128 104 */
	void CVulkanTextureObjectToDelete(class CVulkanTextureObjectToDelete *, class CVulkanImage *, class VulkanImageViews_t *, const class TextureSpecification_t  *); /* linkage=_ZN28CVulkanTextureObjectToDeleteC4EP12CVulkanImageP18VulkanImageViews_tPK22TextureSpecification_t */
	virtual void ~CVulkanTextureObjectToDelete(class CVulkanTextureObjectToDelete *); /* linkage=_ZN28CVulkanTextureObjectToDeleteD4Ev */
	void CVulkanTextureObjectToDelete(class CVulkanTextureObjectToDelete *); /* linkage=_ZN28CVulkanTextureObjectToDeleteC4Ev */
	void CVulkanTextureObjectToDelete(class CVulkanTextureObjectToDelete *, const class CVulkanTextureObjectToDelete  &); /* linkage=_ZN28CVulkanTextureObjectToDeleteC4ERKS_ */
};

// <00C4F5ED> vulkan/texturevulkan.h:505
void CVulkanTextureObjectToDelete::CVulkanTextureObjectToDelete(CVulkanImage* pVulkanImage, VulkanImageViews_t* pImageViews, const TextureSpecification_t* pSpec)
{
} /* size: 0 */

// <00C4F5AD> vulkan/texturevulkan.h:505
inline void CVulkanTextureObjectToDelete::CVulkanTextureObjectToDelete(CVulkanImage* pVulkanImage, VulkanImageViews_t* pImageViews, const TextureSpecification_t* pSpec)
{
} /* size: 0 */

// <00C4F22F> vulkan/texturevulkan.h:511
// function calls: 18
void CVulkanTextureObjectToDelete::~CVulkanTextureObjectToDelete()
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 514
} /* size: 142, inline expansions: 18 (466 bytes) */

// <00C4ED43> vulkan/texturevulkan.h:511
// function calls: 24
void CVulkanTextureObjectToDelete::~CVulkanTextureObjectToDelete()
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 514
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 514
	CVulkanTextureObjectToDelete::~CVulkanTextureObjectToDelete(); // 514
} /* size: 142, inline expansions: 24 (532 bytes) */

// <00C4ED2A> vulkan/texturevulkan.h:511
inline void CVulkanTextureObjectToDelete::~CVulkanTextureObjectToDelete()
{
} /* size: 0 */

// <00B8B514> vulkan/texturevulkan.h:511
void CVulkanTextureObjectToDelete::~CVulkanTextureObjectToDelete()
{
} /* size: 0 */

