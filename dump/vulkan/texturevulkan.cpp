
//
// vulkan/texturevulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 78
//

// <00C4D065> vulkan/texturevulkan.cpp:187
// function calls: 4
void CTextureVulkan::CTextureVulkan()
{
	IVmaAllocationBase::IVmaAllocationBase(); // 179
	IVmaAllocationImage::IVmaAllocationImage(); // 189
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 191
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00C4D04C> vulkan/texturevulkan.cpp:187
void CTextureVulkan::CTextureVulkan()
{
} /* size: 0 */

// <00C4C0D2> vulkan/texturevulkan.cpp:194
// variables: 8
// function calls: 44
void CTextureVulkan::ComputeImageViews(VkImageViewCreateInfo* pImageViewCreateInfo, VkImageViewCreateInfo* pImageViewCreateInfoSrgb, VkImageViewCreateInfo* pCubeAsArrayImageViewCreateInfo, VkImageViewCreateInfo* pCubeAsArrayImageViewCreateInfoSrgb, bool* pSrgbResourceViewValid, const TextureSpecification_t* pSpec, VkFormat actualFmt)
{

ComputeImageViews_Exit: // 305
	const TextureSpecification_t* pOnDiskSpec; // 209
	const char   __FUNCTION__; // 24862
	VkFormatProperties formatProperties; // 310
	VkFormat srgbFormat; // 311
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 246
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 259
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 269
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 198
	CTextureInfoId::GetDiskSpec(); // 209
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 234
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 242
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 244
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 246
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 247
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 252
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 256
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	CTextureDesc::GetArrayCount(); // 269
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	CTextureDesc::GetArrayCount(); // 273
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 176
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	CTextureDesc::GetArrayCount(); // 258
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 259
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	CTextureDesc::GetArrayCount(); // 263
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 279
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 306
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 307
	VulkanPhysicalDevice(void); // 312
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	CTextureDesc::GetArrayCount(); // 284
} /* size: 0, variables: 4, goto labels: 1, inline expansions: 44 (1817 bytes) */

// <00C4A6F1> vulkan/texturevulkan.cpp:325
// variables: 4
// function calls: 118
void CTextureVulkan::InitSwapChain(const CTextureCreationDesc* pHeader, CVulkanImage* pVulkanImage, HRenderTexture hTexture, VkFormat nOverrideSwapChainFormat)
{
	CTextureCreationDesc desc; // 327
	TextureObjectInfo_t info; // 334
	ImageFormat newFormat; // 340
	{
		TextureSpecification_t tmpSpec; // 343
		CTextureVulkan::GetFormat(); // 344
		CTextureInfoId::SetSpec(
			const TextureSpecification_t* pSpec);  // 345
		CUtlMemory<float, int>::IsExternallyAllocated(); // 905
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
		TextureSpecification_t::~TextureSpecification_t(); // 346
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 228
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 238
	Vector4D::operator=(
			const Vector4D& vOther);  // 239
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 244
	CUtlMemory<TextureCreationExtraData_t, int>::Base(); // 113
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Base(); // 244
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<TextureCreationExtraData_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::SetCount(
		int count);  // 1341
	CUtlMemory<TextureCreationExtraData_t, int>::Base(); // 112
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Base(); // 102
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
							const TextureCreationExtraData_t* pFromEnd,
							TextureCreationExtraData_t* pTo);  // 173
	UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
							const TextureCreationExtraData_t* pFromEnd,
							TextureCreationExtraData_t* pTo);  // 1344
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CopyArray(
			const TextureCreationExtraData_t* pArray,
			int size);  // 244
	CTextureCreationDesc::operator=(
			const CTextureCreationDesc& rhs);  // 229
	Vector4D::Vector4D(); // 228
	CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 228
	CTextureCreationDesc::CTextureCreationDesc(
				const CTextureCreationDesc& rhs);  // 327
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 330
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 332
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 43
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 43
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 43
	TextureSpecification_t::TextureSpecification_t(); // 236
	TextureObjectInfo_t::TextureObjectInfo_t(); // 334
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 335
	CTextureVulkan::GetFormat(); // 340
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 341
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 348
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
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 349
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 349
} /* size: 1249, variables: 3, inline expansions: 97 (4436 bytes) */

// <00C496FB> vulkan/texturevulkan.cpp:351
// variables: 3
// function calls: 72
void CTextureVulkan::InitExternal(VulkanDeviceSpecificTexture_t* pVulkanDST, HRenderTexture hTexture)
{
	CTextureCreationDesc desc; // 353
	CVulkanImage* pVulkanImage; // 365
	TextureObjectInfo_t info; // 374
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 221
	Vector4D::Vector4D(); // 221
	CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
	CTextureCreationDesc::CTextureCreationDesc(); // 353
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 360
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 363
	CVulkanImage::SetIsResident(
			bool bResident);  // 368
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 370
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 372
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 43
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 43
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 43
	TextureSpecification_t::TextureSpecification_t(); // 236
	TextureObjectInfo_t::TextureObjectInfo_t(); // 374
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 375
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
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 378
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 378
} /* size: 668, variables: 3, inline expansions: 72 (1426 bytes) */

// <00C45784> vulkan/texturevulkan.cpp:381
// variables: 40
// function calls: 220
void CTextureVulkan::CreateImageViews(CVulkanImage* pVulkanImage, VkFormat nOverrideSwapChainFormat)
{
	const TextureSpecification_t* pSpec; // 383
	VkFormat fmt; // 385
	bool bSupportsUAV; // 403
	bool bSampleable; // 414
	VkImageViewUsageCreateInfoKHR imageViewUsageCreateInfo; // 419
	const char   __FUNCTION__; // 24835
	bool bCubeViewDimension; // 592
	bool b2DArrayViewDimension; // 593
	{
		VkImageViewCreateInfo imageViewCreateInfo; // 435
		VkImageViewCreateInfo imageViewCreateInfoSrgb; // 436
		VkImageViewCreateInfo cubeAsArrayImageViewCreateInfo; // 437
		VkImageViewCreateInfo cubeAsArrayImageViewCreateInfoSrgb; // 438
		bool bResourceViewValid; // 440
		bool bSrgbResourceViewValid; // 441
		bool bCubeAsArray; // 517
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 480
		}
		{
			VkImageViewCreateInfo creationInfo; // 493
			VkImageViewCreateInfo creationInfoSrgb; // 494
			uint32 nMipLevelsSave; // 496
			{
				int i; // 500
				CUtlString::CUtlString(); // 149
				CUtlString::Get(); // 151
				CUtlString::~CUtlString(); // 153
				_DOVK(VkResult result,
					const char* pCommand);  // 507
				VulkanDevice(void); // 505
				CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
				CVulkanObject<VkImageView_T::CVulkanObject(
						VkDevice pDevice);  // 505
				VulkanDevice(void); // 506
				CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
				CVulkanObject<VkImageView_T::CVulkanObject(
						VkDevice pDevice);  // 506
				CVulkanObject<VkImageView_T::GetPtr()>* this); // 507
				VulkanDevice(void); // 507
				CVulkanObject<VkImageView_T::GetPtr()>* this); // 508
				VulkanDevice(void); // 508
				CUtlString::CUtlString(); // 149
				CUtlString::Get(); // 151
				CUtlString::~CUtlString(); // 153
				_DOVK(VkResult result,
					const char* pCommand);  // 508
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 493
		}
		{
			VkImageViewCreateInfo compressedBlockViewCreateInfo; // 563
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 576
			}
			{
				int i; // 583
				CUtlString::CUtlString(); // 149
				CUtlString::Get(); // 151
				CUtlString::~CUtlString(); // 153
				_DOVK(VkResult result,
					const char* pCommand);  // 587
				VulkanDevice(void); // 586
				CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
				CVulkanObject<VkImageView_T::CVulkanObject(
						VkDevice pDevice);  // 586
				CVulkanObject<VkImageView_T::GetPtr()>* this); // 587
				VulkanDevice(void); // 587
			}
		}
		CRenderDeviceVulkan::AllowMutableSwapchainFormat(); // 470
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 487
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 517
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 199
		CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 546
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 561
		CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 447
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
		CVulkanObject<VkImageView_T::CVulkanObject(
				VkDevice pDevice);  // 520
		VulkanDevice(void); // 520
		CVulkanObject<VkImageView_T::GetPtr()>* this); // 521
		VulkanDevice(void); // 521
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 521
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 199
		CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 554
		VulkanDevice(void); // 532
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
		CVulkanObject<VkImageView_T::CVulkanObject(
				VkDevice pDevice);  // 532
		CVulkanObject<VkImageView_T::GetPtr()>* this); // 533
		VulkanDevice(void); // 533
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 533
		VulkanDevice(void); // 537
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
		CVulkanObject<VkImageView_T::CVulkanObject(
				VkDevice pDevice);  // 537
		CVulkanObject<VkImageView_T::GetPtr()>* this); // 538
		VulkanDevice(void); // 538
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 538
		VulkanDevice(void); // 525
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
		CVulkanObject<VkImageView_T::CVulkanObject(
				VkDevice pDevice);  // 525
		CVulkanObject<VkImageView_T::GetPtr()>* this); // 526
		VulkanDevice(void); // 526
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 526
	}
	{
		VkImageViewCreateInfo dsViewCreateInfo; // 598
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 646
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 648
		}
		{
			int i; // 649
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 649
			CUtlString::Get(); // 151
			CUtlString::CUtlString(); // 149
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 654
			VulkanDevice(void); // 653
			CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
			CVulkanObject<VkImageView_T::CVulkanObject(
					VkDevice pDevice);  // 653
			CVulkanObject<VkImageView_T::GetPtr()>* this); // 654
			VulkanDevice(void); // 654
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 599
		VulkanDevice(void); // 639
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
		CVulkanObject<VkImageView_T::CVulkanObject(
				VkDevice pDevice);  // 639
		CVulkanObject<VkImageView_T::GetPtr()>* this); // 640
		VulkanDevice(void); // 640
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 640
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		CTextureDesc::GetArrayCount(); // 647
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		CTextureDesc::GetArrayCount(); // 648
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		CTextureDesc::GetArrayCount(); // 626
	}
	{
		VkImageViewCreateInfo colorTargetViewCreateInfo; // 669
		{
			int i; // 663
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 700
		}
		{
			int i; // 716
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 720
			VulkanDevice(void); // 719
			CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
			CVulkanObject<VkImageView_T::CVulkanObject(
					VkDevice pDevice);  // 719
			CVulkanObject<VkImageView_T::GetPtr()>* this); // 720
			VulkanDevice(void); // 720
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 727
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 729
		}
		{
			int i; // 731
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 731
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 736
		}
		{
			int i; // 737
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 737
			CUtlString::Get(); // 151
			CUtlString::CUtlString(); // 149
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 742
			VulkanDevice(void); // 741
			CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
			CVulkanObject<VkImageView_T::CVulkanObject(
					VkDevice pDevice);  // 741
			CVulkanObject<VkImageView_T::GetPtr()>* this); // 742
			VulkanDevice(void); // 742
		}
		{
			int i; // 751
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 755
			VulkanDevice(void); // 754
			CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
			CVulkanObject<VkImageView_T::CVulkanObject(
					VkDevice pDevice);  // 754
			CVulkanObject<VkImageView_T::GetPtr()>* this); // 755
			VulkanDevice(void); // 755
		}
		{
			int i; // 762
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 762
			VulkanDevice(void); // 766
			CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
			CVulkanObject<VkImageView_T::CVulkanObject(
					VkDevice pDevice);  // 766
			CVulkanObject<VkImageView_T::GetPtr()>* this); // 767
			VulkanDevice(void); // 767
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 767
		}
		{
			int i; // 773
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 199
			CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 776
		}
		{
			int i; // 781
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 781
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 199
			CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 784
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 670
		CRenderDeviceVulkan::AllowMutableSwapchainFormat(); // 675
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		CTextureDesc::GetArrayCount(); // 700
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		CTextureDesc::GetArrayCount(); // 704
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		CTextureDesc::GetArrayCount(); // 728
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		CTextureDesc::GetArrayCount(); // 730
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		CTextureDesc::GetArrayCount(); // 736
		CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 710
	}
	CTextureInfoId::GetSpec(); // 383
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 403
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 414
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 415
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 592
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 658
	CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 420
	CVulkanImage::GetImageUsageFlags(); // 424
	CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 404
	CRenderDeviceVulkan::ColorFormat(); // 389
} /* size: 0, variables: 8, inline expansions: 10 (111 bytes) */

// <00C454B9> vulkan/texturevulkan.cpp:793
// variables: 6
// function calls: 7
void CTextureVulkan::SetInitialImageLayout(CVulkanImage* pVulkanImage)
{
	const TextureSpecification_t* pSpec; // 795
	bool bDepthStencil; // 797
	{
		CRenderContextVulkanPtr pRenderContext; // 801
		VkImageLayout nLayout; // 802
		CRenderContextVulkanPtr::operator->(); // 803
	}
	{
		CRenderContextVulkanPtr pRenderContext; // 808
		VkImageLayout nLayout; // 809
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 481
		CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 811
		CRenderContextVulkanPtr::operator->(); // 810
	}
	CTextureInfoId::GetSpec(); // 795
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 798
} /* size: 283, variables: 2, inline expansions: 2 (28 bytes) */

// <00C450F2> vulkan/texturevulkan.cpp:815
// variable: 1
// function calls: 11
void CTextureVulkan::AssignTextureObject(const TextureObjectInfo_t& textureObject, bool bImmutable, uint32 nOverrideSwapChainFormat, CRenderContextBase* pRenderContext)
{
	CVulkanImage* pVulkanImage; // 822
	CTextureInfoId::SetTextureObject(
			void* pObj);  // 819
	CTextureInfoId::SetSpec(
		const TextureSpecification_t* pSpec);  // 820
	CVulkanImage::GetIsResident(); // 823
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 833
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 834
	CTextureManagerVulkan::UpdateBindlessTextureDescriptor(
					const CTextureVulkan* pTexture);  // 838
	CRenderDeviceVulkan::MemoryManager(); // 844
} /* size: 343, variables: 1, inline expansions: 11 (266 bytes) */

// <00C44665> vulkan/texturevulkan.cpp:853
// variables: 5
// function calls: 47
void CTextureVulkan::AssignStandin(CTextureBase* pStandinTextureBase, TextureStandinType_t nType, CRenderContextBase* pRenderContext)
{
	CTextureVulkan* pStandinTexture; // 860
	CVulkanImage* pTextureResource; // 861
	const char   __FUNCTION__; // 24764
	uint8 nFlagsToSet; // 901
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 863
	}
	CTextureInfoId::GetTextureObject(); // 488
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 488
	CTextureBase::IsStandinTexture(); // 855
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 861
	CTextureInfoId::GetTextureObject(); // 864
	CTextureInfoId::SetTextureObject(
			void* pObj);  // 864
	CTextureInfoId::GetSpec(); // 865
	CTextureInfoId::SetSpec(
		const TextureSpecification_t* pSpec);  // 865
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 867
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 881
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 885
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 889
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 893
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 897
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 900
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 906
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 800
	CInterlockedPtr<void>::operator=(
			void* newValue);  // 1240
	CTextureInfoId::SetFallbackTexturePtr(
				void* pNewValue);  // 907
	CTextureManagerVulkan::UpdateBindlessTextureDescriptor(
					const CTextureVulkan* pTexture);  // 909
} /* size: 0, variables: 4, inline expansions: 47 (783 bytes) */

// <00C43FE4> vulkan/texturevulkan.cpp:912
// variables: 5
// function calls: 22
void CTextureVulkan::AssignFallbackTexture(CRenderContextBase* pRenderContext)
{
	const char   __FUNCTION__; // 24970
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 922
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 923
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 925
	}
	CTextureInfoId::GetTextureObject(); // 488
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 488
	CTextureBase::IsStandinTexture(); // 917
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1110
	CTextureInfoId::SetSpec(
		const TextureSpecification_t* pSpec);  // 1102
	CTextureInfoId::SetSpec(
		const TextureSpecification_t* pSpec);  // 927
	CTextureInfoId::SetTextureObject(
			void* pObj);  // 928
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 929
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 930
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 800
	CInterlockedPtr<void>::operator=(
			void* newValue);  // 1240
	CTextureInfoId::SetFallbackTexturePtr(
				void* pNewValue);  // 931
	CTextureManagerVulkan::UpdateBindlessTextureDescriptor(
					const CTextureVulkan* pTexture);  // 933
} /* size: 0, variables: 1, inline expansions: 22 (562 bytes) */

// <00C43D79> vulkan/texturevulkan.cpp:936
// variable: 1
// function calls: 9
void CTextureVulkan::Shutdown()
{
	HRenderTexture hTexture; // 938
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 938
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 939
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 944
	CTextureManagerVulkan::UpdateBindlessTextureDescriptor(
					const CTextureVulkan* pTexture);  // 945
} /* size: 167, variables: 1, inline expansions: 9 (103 bytes) */

// <00C43524> vulkan/texturevulkan.cpp:952
// variables: 3
// function calls: 35
void CTextureVulkan::ReleaseVulkanTexture()
{
	bool bStandinTexture; // 954
	CVulkanImage* pVulkanImage; // 961
	CFallbackTextureVulkan* pFallbackTexture; // 973
	CTextureInfoId::GetTextureObject(); // 488
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 488
	CTextureBase::IsStandinTexture(); // 954
	CTextureInfoId::GetTextureObject(); // 955
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 961
	CRenderDeviceVulkan::MemoryManager(); // 967
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 968
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 970
	CInterlockedPtr<void>::operator void*(); // 1235
	CTextureInfoId::GetFallbackTexturePtr(); // 973
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CFallbackTextureVulkan>::PutObject(
			CFallbackTextureVulkan* pInfo);  // 34
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 35
	CFallbackTextureHelper<CFallbackTextureVulkan>::ReleaseFallbackTexture(
				CFallbackTextureVulkan* pFallbackTexture);  // 2044
	CTextureManagerVulkan::ReleaseFallbackTexture(
				CFallbackTextureVulkan* pFallbackTexture);  // 976
	CTextureInfoId::SetTextureObject(
			void* pObj);  // 979
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 800
	CInterlockedPtr<void>::operator=(
			void* newValue);  // 1240
	CTextureInfoId::SetFallbackTexturePtr(
				void* pNewValue);  // 980
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1110
	CTextureInfoId::SetSpec(
		const TextureSpecification_t* pSpec);  // 1102
	CTextureInfoId::SetSpec(
		const TextureSpecification_t* pSpec);  // 981
} /* size: 592, variables: 3, inline expansions: 35 (1064 bytes) */

// <00C57767> vulkan/texturevulkan.cpp:985
// function calls: 10
void CTextureVulkan::FreeGPUResources(CRenderContextBase* pRenderContext)
{
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 987
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 990
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 990
	CTextureInfoId::SetTextureObject(
			void* pObj);  // 991
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 992
	CTextureVulkan::FreeGPUResources(
			CRenderContextBase* pRenderContext);  // 985
} /* size: 188, inline expansions: 10 (311 bytes) */

// <00C434FE> vulkan/texturevulkan.cpp:985
void CTextureVulkan::FreeGPUResources(CRenderContextBase* pRenderContext)
{
} /* size: 0 */

// <00C4327F> vulkan/texturevulkan.cpp:997
// variables: 5
// function calls: 7
void CTextureVulkan::SpinWaitForFallbackTextureHookup(RenderColorSpace_t colorSpace)
{
	volatile CVulkanImageViewObject** pView; // 1002
	const char   __FUNCTION__; // 25247
	{
		int i; // 1006
		ThreadPause(void); // 1012
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 1006
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1016
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 1003
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 1016
} /* size: 0, variables: 2, inline expansions: 4 (122 bytes) */

// <00C429AE> vulkan/texturevulkan.cpp:1027
// function calls: 29
void CTextureManagerVulkan::CTextureManagerVulkan()
{
	{
		{
		}
	}
	{
		CThreadMutex::CThreadMutex(
				const char* pName);  // 1029
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 63
		ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this); // 475
		CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this,
				int nGrowSize,
				int nInitAllocationCount);  // 484
		InvalidIndex(void); // 486
		InvalidIndex(void); // 488
		Iterator_t::Iterator_t(
				int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this); // 489
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::ResetDbgInfo(); // 491
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::CUtlRBTree(
				int growSize,
				int initSize,
				const LessFunc_t& lessfunc);  // 63
		CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::CUtlMap(
			int growSize,
			int initSize,
			LessFunc_t lessfunc);  // 1029
		CThreadMutex::CThreadMutex(
				const char* pName);  // 1029
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::CUtlVector(); // 1029
		CThreadMutex::CThreadMutex(
				const char* pName);  // 1029
		CTSListBase::CTSListBase(); // 337
		CTSPool<CFallbackTextureVulkan>::CTSPool(); // 17
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 17
		CFallbackTextureHelper<CFallbackTextureVulkan>::CFallbackTextureHelper(); // 1029
		CThreadMutex::CThreadMutex(
				const char* pName);  // 1029
		CUtlIdGenerator::CUtlIdGenerator(
				const uint  max_id);  // 1029
		{
		}
		CUtlMemory<CVulkanSamplerObject::ValidateGrowSize(); // 475
		CUtlMemory<CVulkanSamplerObject::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CVulkanSamplerObject::ResetDbgInfo(); // 530
		CUtlVectorBase<CVulkanSamplerObject::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CVulkanSamplerObject::CUtlVector(); // 1029
	}
} /* size: 0 */

// <00C42971> vulkan/texturevulkan.cpp:1027
// variables: 2
void CTextureManagerVulkan::CTextureManagerVulkan()
{
	const char   __FUNCTION__; // 24970
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1031
	}
} /* size: 0, variables: 1 */

// <00C41B9B> vulkan/texturevulkan.cpp:1035
// function calls: 67
void CTextureManagerVulkan::~CTextureManagerVulkan()
{
	CUtlMemory<CVulkanSamplerObject::IsExternallyAllocated(); // 905
	CUtlMemory<CVulkanSamplerObject::Purge(); // 903
	CUtlMemory<CVulkanSamplerObject::Purge(); // 1799
	CUtlVectorBase<CVulkanSamplerObject::RemoveAll(); // 1798
	CUtlVectorBase<CVulkanSamplerObject::Purge(); // 560
	ValidateAlignment<CVulkanSamplerObject*>(void); // 508
	CUtlMemory<CVulkanSamplerObject::Purge(); // 510
	CUtlMemory<CVulkanSamplerObject::~CUtlMemory(); // 562
	CUtlVectorBase<CVulkanSamplerObject::~CUtlVectorBase(); // 410
	CUtlVector<CVulkanSamplerObject::~CUtlVector(); // 1038
	CUtlIdGenerator::~CUtlIdGenerator(); // 1038
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2199
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2203
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2207
	IVmaAllocationBase::~IVmaAllocationBase(); // 183
	IVmaAllocationImage::~IVmaAllocationImage(); // 2209
	CFallbackTextureVulkan::~CFallbackTextureVulkan(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<CFallbackTextureVulkan>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
	CTSPool<CFallbackTextureVulkan>::~CTSPool(); // 13
	CFallbackTextureHelper<CFallbackTextureVulkan>::~CFallbackTextureHelper(); // 1038
	CThreadMutex::~CThreadMutex(); // 1038
	CThreadMutex::~CThreadMutex(); // 1038
	CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::Purge(); // 903
	CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::Purge(); // 1799
	CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::Purge(); // 560
	ValidateAlignment<CTextureManagerVulkan::TextureUpdate_t>(void); // 508
	CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::Purge(); // 510
	CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::~CUtlVector(); // 1038
	CThreadMutex::~CThreadMutex(); // 1038
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this); // 1288
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t, int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this); // 510
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::~CUtlRBTree(); // 47
	CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::~CUtlMap(); // 1038
	CThreadMutex::~CThreadMutex(); // 1038
} /* size: 679, inline expansions: 67 (2738 bytes) */

// <00C41B34> vulkan/texturevulkan.cpp:1035
void CTextureManagerVulkan::~CTextureManagerVulkan()
{
} /* size: 36 */

// <00C59455> vulkan/texturevulkan.cpp:1044
// variables: 3
// function calls: 3
void CTextureManagerVulkan::Init(IResourceSystemUtils* pUtils)
{
	CRenderDeviceVulkan::EXTDescriptorIndexingEnabled(); // 1051
	{
		const int  nNumColorSpaces; // 1054
		const uint32  nMaxSamplers; // 1055
		RenderDescriptorDesc_t descSetLayout; // 1056
		RenderDescriptorDesc_t::RenderDescriptorDesc_t(); // 1056
	}
	CTextureManagerVulkan::Init(
		IResourceSystemUtils* pUtils);  // 1044
} /* size: 206, inline expansions: 2 (128 bytes) */

// <00C41ABA> vulkan/texturevulkan.cpp:1044
// variables: 3
void CTextureManagerVulkan::Init(IResourceSystemUtils* pUtils)
{
	{
		const int  nNumColorSpaces; // 1054
		const uint32  nMaxSamplers; // 1055
		RenderDescriptorDesc_t descSetLayout; // 1056
	}
} /* size: 0 */

// <00C4158D> vulkan/texturevulkan.cpp:1079
// function calls: 25
void CTextureManagerVulkan::Shutdown()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2199
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2203
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2207
	IVmaAllocationBase::~IVmaAllocationBase(); // 183
	IVmaAllocationImage::~IVmaAllocationImage(); // 2209
	CFallbackTextureVulkan::~CFallbackTextureVulkan(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<CFallbackTextureVulkan>::Purge(); // 23
	CFallbackTextureHelper<CFallbackTextureVulkan>::Shutdown(); // 1081
} /* size: 339, inline expansions: 25 (1412 bytes) */

// <00C4154F> vulkan/texturevulkan.cpp:1089
void CTextureManagerVulkan::SupportsTextureDimension(RenderTextureDimension_t nDim)
{
} /* size: 15 */

// <00C403AD> vulkan/texturevulkan.cpp:1106
// variables: 28
// function calls: 54
void CTextureManagerVulkan::CreateVulkanImageInternal(const TextureSpecification_t* pResourceSpec, bool bImmutable, TextureSpecification_t* pActualSpecOut, bool* pDedicatedAllocationOut, VkImageUsageFlags* pImageUsageFlagsOut, VkFormat* pFormatOut)
{
	TextureSpecification_t actualSpec; // 1108
	bool bVertexTexture; // 1110
	bool bIsRenderTarget; // 1111
	bool bIsVolumeTexture; // 1112
	bool bIsCubeTexture; // 1113
	bool bFilterableRequired; // 1114
	bool bIsSampleable; // 1115
	bool bSupportsUAV; // 1116
	bool bInputAttachment; // 1117
	const char   __FUNCTION__; // 25068
	VkFormat fmt; // 1188
	bool bIsDepthStencil; // 1195
	VkImageCreateInfo imageCreateInfo; // 1211
	VkBaseInStructure* pInputStruct; // 1294
	VkImageFormatListCreateInfoKHR imageFormatListCreateInfo; // 1296
	VkFormat imageViewFormats; // 1297
	VkImageStencilUsageCreateInfoEXT imageStencilUsageCreateInfo; // 1330
	bool bDedicatedAllocation; // 1346
	VkImage pImage; // 1358
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1139
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1142
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
	}
	{
		uint32 nClampedWidth; // 1199
		uint32 nClampedHeight; // 1200
		int nClampedNumMipLevels; // 1201
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 1202
		CTextureManagerBase::GetMaxTextureRes(); // 1204
	}
	{
		bool bIsBlockCompressedTextureWithUAV; // 1314
		CRenderDeviceVulkan::KHRImageFormatListEnabled(); // 1315
	}
	{
		uint64_t nDedicatedAllocationThresholdInBytes; // 1349
		uint64_t nMipLevel0SizeInBytes; // 1350
		ConVar::GetInt(); // 1349
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1118
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1112
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1115
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1110
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1111
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1113
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1114
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1116
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1117
	CColorFormatBase::FindNearestSupportedFormat(
					ImageFormat format,
					bool bIsVertexTexture,
					bool bIsRenderTarget,
					bool bFilterableRequired,
					int nAlternateFormatIter);  // 1137
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1212
	IsDepthFormat(ImageFormat fmt); // 1130
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 176
	{
	}
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 1219
	{
	}
	ComputeAASettings(RenderMultisampleType_t nType,
				VkSampleCountFlagBits* pSampleCount);  // 85
	ComputeAASettings(RenderMultisampleType_t nType,
				VkSampleCountFlagBits* pSampleCount);  // 1223
	CRenderDeviceVulkan::EXTSeparateStencilUsageEnabled(); // 1331
	CRenderDeviceVulkan::KHRDedicatedAllocationEnabled(); // 1347
	VulkanDevice(void); // 1359
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 1359
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 1377
	CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 1247
	CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 1262
	CRenderDeviceVulkan::ColorFormat(); // 1192
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 1133
} /* size: 0, variables: 19, inline expansions: 50 (1222 bytes) */

// <00C3FDFF> vulkan/texturevulkan.cpp:1379
// variables: 14
// function calls: 9
void CTextureManagerVulkan::ComputeTextureObject(TextureObjectInfo_t* pInfo, const TextureSpecification_t* pResourceSpec, const void* pTextureBitsData, int nTextureBitsSize, bool bImmutable)
{
	bool bIsShared; // 1382
	bool bIsRenderTarget; // 1383
	bool bDedicatedAllocation; // 1385
	VkImageUsageFlags nImageUsageFlags; // 1386
	VkFormat nFormat; // 1387
	VkImage pImage; // 1388
	const char   __FUNCTION__; // 24943
	CVulkanImage* pVulkanImage; // 1392
	VkImageLayout initialState; // 1394
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1389
	}
	{
		VulkanMemoryPoolType_t nPoolType; // 1398
		CVulkanImage::SetIsResident(
				bool bResident);  // 1400
	}
	{
		uint nContextFlags; // 1416
		CRenderContextVulkan* pRenderContext; // 1417
		VkImageLayout nLayout; // 1419
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1382
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1383
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 1395
	CRenderDeviceVulkan::LazilyAllocateRenderTargets(); // 1396
	CVulkanImage::SetImageUsageFlags(
				VkImageUsageFlags nImageUsageFlags);  // 1404
} /* size: 0, variables: 9, inline expansions: 8 (211 bytes) */

// <00C3FB46> vulkan/texturevulkan.cpp:1429
// variable: 1
// function calls: 7
void CTextureManagerVulkan::AllocateDeviceMemory(CVulkanImage* pVulkanImage, VulkanMemoryPoolType_t nPoolType, bool bDedicatedAllocation, bool bIsShared)
{
	IVmaAllocationBase* pVmaNullObject; // 1431
	CRenderDeviceVulkan::MemoryManager(); // 1432
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 1434
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 1434
} /* size: 261, variables: 1, inline expansions: 7 (196 bytes) */

// <00C3F6C6> vulkan/texturevulkan.cpp:1438
// variables: 3
// function calls: 17
void CTextureManagerVulkan::EnsureRenderTargetHasDeviceMemory(HRenderTexture hTexture)
{
	CTextureVulkan* pTexture; // 1440
	CVulkanImage* pVulkanImage; // 1441
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1448; // 1448
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1448
		CVulkanImage::GetIsResident(); // 1451
		CRenderDeviceVulkan::MemoryManager(); // 1460
		CVulkanImage::SetIsResident(
				bool bResident);  // 1463
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1464
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1464
	}
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1440
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 1441
	CVulkanImage::GetIsResident(); // 1442
} /* size: 434, variables: 2, inline expansions: 5 (101 bytes) */

// <00C3F568> vulkan/texturevulkan.cpp:1477
// variables: 3
void CTextureManagerVulkan::GenerateTextureObject(TextureObjectInfo_t* pInfo, const TextureSpecification_t& texSpec, const void* pTextureBits, int nDataSize, IMemoryMappedFile* pMemoryMappedFile, TextureBitsMemoryType_t nMemory)
{
	const char   __FUNCTION__; // 24970
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1479
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1482
	}
} /* size: 0, variables: 1 */

// <00C3F18C> vulkan/texturevulkan.cpp:1487
// variables: 2
// function calls: 14
void CTextureManagerVulkan::HookUpTextureObject(CTextureBase* pTextureBase, const TextureObjectInfo_t& textureObject)
{
	CTextureVulkan* pTextureVulkan; // 1489
	CResourceNameGetter resourceName; // 1493
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 1493
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1493
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1496
} /* size: 297, variables: 2, inline expansions: 14 (405 bytes) */

// <00C3EFAF> vulkan/texturevulkan.cpp:1498
// variables: 2
// function calls: 7
void CTextureVulkan::AssignDebugName(const CResourceName& resourceName)
{
	CVulkanImage* pVulkanImage; // 1501
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 1505
		CResourceName::Get(); // 1509
		VulkanDevice(void); // 1510
	}
	CTextureInfoId::GetTextureObject(); // 1501
	CResourceName::Get(); // 1502
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 1502
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 1503
} /* size: 266, variables: 1, inline expansions: 5 (74 bytes) */

// <00C3ED23> vulkan/texturevulkan.cpp:1519
// variables: 4
// function calls: 7
void CTextureManagerVulkan::FindOrCreateProceduralTexture(const CResourceName& resourceName, bool bIsAnonymous, const CTextureCreationDesc* pDescriptor)
{
	HRenderTexture hTexture; // 1521
	CTextureVulkan* pTexture; // 1523
	{
		CVulkanImage* pVulkanImage; // 1526
		{
			VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 1532
			CResourceName::Get(); // 1536
			VulkanDevice(void); // 1537
		}
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 1526
		CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 1530
	}
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1523
} /* size: 281, variables: 2, inline expansions: 2 (21 bytes) */

// <00C579C6> vulkan/texturevulkan.cpp:1549
// variables: 4
// function calls: 27
void CTextureManagerVulkan::FindOrCreateExternalTextureInfo(SharedResourceHandle_t hSharedTexture)
{
	int iFind; // 1551
	VulkanDeviceSpecificTexture_t* pVulkanDSI; // 1569
	ExternalTextureInfo_t* pTextureInfo; // 1571
	{
		int i; // 208
		Count(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this); // 208
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this,
			int i);  // 210
	}
	FindByField<long long unsigned int, CTextureManagerBase::ExternalTextureInfo_t>(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this,
											long long unsigned int ExternalTextureInfo_t::* pField,
											long long unsigned int matchValue);  // 1551
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this,
			int i);  // 1566
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::NumAllocated(); // 1143
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this,
		int i);  // 1148
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 941
	ExternalTextureInfo_t::ExternalTextureInfo_t(); // 1479
	Construct<CTextureManagerBase::ExternalTextureInfo_t>(ExternalTextureInfo_t* pMemory); // 1148
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::IsGrowable(); // 823
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::Grow(
		int num);  // 806
	ResetDbgInfo(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this); // 824
	GrowMemory(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this); // 1571
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this,
			int i);  // 1571
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1574
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1574
	CTextureManagerVulkan::FindOrCreateExternalTextureInfo(
					SharedResourceHandle_t hSharedTexture);  // 1549
} /* size: 443, variables: 3, inline expansions: 24 (1414 bytes) */

// <00C3ECD6> vulkan/texturevulkan.cpp:1549
// variables: 3
void CTextureManagerVulkan::FindOrCreateExternalTextureInfo(SharedResourceHandle_t hSharedTexture)
{
	int iFind; // 1551
	VulkanDeviceSpecificTexture_t* pVulkanDSI; // 1569
	ExternalTextureInfo_t* pTextureInfo; // 1571
} /* size: 0, variables: 3 */

// <00C3E4B0> vulkan/texturevulkan.cpp:1581
// variables: 4
// function calls: 30
void CTextureManagerVulkan::FindOrCreateExternalTexture(const char* pResourceName, SharedResourceHandle_t hSharedTexture)
{
	ExternalTextureInfo_t* pTextureInfo; // 1583
	VulkanDeviceSpecificTexture_t* pVulkanDST; // 1590
	CTextureVulkan* pTextureVulkan; // 1592
	HRenderTexture hResource; // 1595
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1587
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1587
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1601
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1585
	IVmaAllocationBase::IVmaAllocationBase(); // 179
	IVmaAllocationImage::IVmaAllocationImage(); // 189
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 191
	CTextureVulkan::CTextureVulkan(); // 1592
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1593
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<2019914870>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 1596
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1595
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1597
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1599
} /* size: 460, variables: 4, inline expansions: 30 (373 bytes) */

// <00C3DA46> vulkan/texturevulkan.cpp:1607
// variables: 9
// function calls: 39
void CTextureManagerVulkan::UpdateExternalTexture(HRenderTexture hTexture, SharedResourceHandle_t hSharedTexture)
{
	int iFind; // 1609
	ExternalTextureInfo_t* pOldTextureInfo; // 1618
	ExternalTextureInfo_t* pNewTextureInfo; // 1622
	const char   __FUNCTION__; // 24970
	VulkanDeviceSpecificTexture_t* pNewVulkanDST; // 1631
	CTextureVulkan* pTextureVulkan; // 1633
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1626
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1634
	}
	{
		int i; // 208
		Count(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this); // 208
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this,
			int i);  // 210
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 210
	}
	FindByField<CWeakHandle<InfoForResourceTypeCTextureBase>, CTextureManagerBase::ExternalTextureInfo_t>(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this,
														CWeakHandle<InfoForResourceTypeCTextureBase> ExternalTextureInfo_t::* pField,
														CWeakHandle<InfoForResourceTypeCTextureBase> matchValue);  // 1609
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1609
	CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this,
			int i);  // 1618
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1626
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1626
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1628
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1628
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1629
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1633
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1638
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1640
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1612
	CResourceName::Get(); // 1612
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1612
} /* size: 0, variables: 6, inline expansions: 35 (467 bytes) */

// <00C3D0F8> vulkan/texturevulkan.cpp:1648
// variables: 5
// function calls: 34
void CTextureManagerVulkan::CreateSamplerObject(VkDevice pDevice, VkSampler pSampler)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1650; // 1650
	uint id; // 1652
	const char   __FUNCTION__; // 24916
	CVulkanSamplerObject* pSamplerObject; // 1660
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1658
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1650
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 321
	CUtlIdGenerator::DestroyRange(
			const uint  index);  // 94
	CUtlIdGenerator::CreateID(
		uint& id);  // 1653
	CUtlMemory<CVulkanSamplerObject::Base(); // 112
	CUtlVectorBase<CVulkanSamplerObject::Base(); // 368
	CUtlVectorBase<CVulkanSamplerObject::ResetDbgInfo(); // 824
	CUtlMemory<CVulkanSamplerObject::IsGrowable(); // 823
	CUtlMemory<CVulkanSamplerObject::IsExternallyAllocated(); // 859
	CUtlMemory<CVulkanSamplerObject::IsExternallyAllocated(); // 861
	CUtlMemory<CVulkanSamplerObject::Grow(
		int num);  // 806
	CUtlVectorBase<CVulkanSamplerObject::GrowMemory(
			int num);  // 1249
	CUtlMemory<CVulkanSamplerObject::operator[](
			int i);  // 602
	CUtlVectorBase<CVulkanSamplerObject::Element(
		int i);  // 1252
	Construct<CVulkanSamplerObject*, CVulkanSamplerObject*>(CVulkanSamplerObject** pMemory); // 1252
	CUtlMemory<CVulkanSamplerObject::NumAllocated(); // 1247
	CUtlVectorBase<CVulkanSamplerObject::AddToTail(
			CVulkanSamplerObject *& src);  // 1656
	CUtlVectorBase<CVulkanSamplerObject::Count(); // 1654
	CUtlMemory<CVulkanSamplerObject::operator[](
			int i);  // 588
	CUtlVectorBase<CVulkanSamplerObject::operator[](
			int i);  // 1658
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 75
	CVulkanObject<VkSampler_T::CVulkanObject(
			VkDevice pDevice,
			VkSampler_T* pObject);  // 111
	CVulkanSamplerObject::CVulkanSamplerObject(
				VkDevice pDevice,
				VkSampler pSampler,
				uint nSamplerId);  // 1660
	CUtlMemory<CVulkanSamplerObject::operator[](
			int i);  // 588
	CUtlVectorBase<CVulkanSamplerObject::operator[](
			int i);  // 1661
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1662
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1665
	_DebuggerBreakInlineExpressionWrapper(void); // 1653
} /* size: 0, variables: 4, inline expansions: 34 (1259 bytes) */

// <00C3C91A> vulkan/texturevulkan.cpp:1667
// variables: 4
// function calls: 29
void CTextureManagerVulkan::DestroySamplerObject(CVulkanSamplerObject* pSampler)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1669; // 1669
	const char   __FUNCTION__; // 24943
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1670
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1669
	CVulkanSamplerObject::Id(); // 1670
	CUtlMemory<CVulkanSamplerObject::operator[](
			int i);  // 588
	CUtlVectorBase<CVulkanSamplerObject::operator[](
			int i);  // 1670
	CVulkanSamplerObject::Id(); // 1671
	{
		const uint  i; // 150
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 314
		CUtlIdGenerator::InsertRange(
				const uint  index);  // 222
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 321
		CUtlIdGenerator::DestroyRange(
				const uint  index);  // 165
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 314
		CUtlIdGenerator::InsertRange(
				const uint  index);  // 185
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 321
		CUtlIdGenerator::DestroyRange(
				const uint  index);  // 202
	}
	CUtlIdGenerator::DestroyRangeID(
			const uint  id,
			const uint  count);  // 137
	CUtlIdGenerator::DestroyID(
			const uint  id);  // 1671
	CVulkanSamplerObject::Id(); // 1672
	CUtlMemory<CVulkanSamplerObject::operator[](
			int i);  // 588
	CUtlVectorBase<CVulkanSamplerObject::operator[](
			int i);  // 1672
	CVulkanSamplerObject::Id(); // 1673
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1673
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1674
} /* size: 0, variables: 2, inline expansions: 17 (1590 bytes) */

// <00C3C873> vulkan/texturevulkan.cpp:1676
// function calls: 2
void CVulkanSamplerObject::~CVulkanSamplerObject()
{
	CVulkanObject<VkSampler_T::DestroyObject()>* this); // 76
	CVulkanObject<VkSampler_T::~CVulkanObject()>* this); // 1682
} /* size: 102, inline expansions: 2 (80 bytes) */

// <00C3C718> vulkan/texturevulkan.cpp:1676
// function calls: 5
void CVulkanSamplerObject::~CVulkanSamplerObject()
{
	CVulkanObject<VkSampler_T::DestroyObject()>* this); // 76
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 76
	CVulkanObject<VkSampler_T::~CVulkanObject()>* this); // 1682
	CVulkanSamplerObject::~CVulkanSamplerObject(); // 1682
} /* size: 98, inline expansions: 5 (122 bytes) */

// <00C3C6FF> vulkan/texturevulkan.cpp:1676
void CVulkanSamplerObject::~CVulkanSamplerObject()
{
} /* size: 0 */

// <00C3C3F6> vulkan/texturevulkan.cpp:1684
// variable: 1
// function calls: 9
void CTextureManagerVulkan::UpdateBindlessDescriptorSets()
{
	{
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1696; // 1696
		CTextureManagerBase::GetTextureManagerRWLock(); // 1696
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 959
		Lock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
				const CThreadRWLock_FastRead& lock,
				const char* pFilename,
				int nLineNumber);  // 1696
		Unlock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1700
	}
} /* size: 286 */

// <00C3B4E6> vulkan/texturevulkan.cpp:1703
// variables: 9
// function calls: 65
void CTextureManagerVulkan::UpdateBindlessSamplerDescriptorSet()
{
	const uint32  nMaxSamplers; // 1705
	RenderDescriptorDesc_t descSetLayout; // 1707
	CUtlVectorFixedGrowable<RenderDescriptorBinding_t, 8> descSetBindings; // 1717
	const char   __FUNCTION__; // 25296
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1720; // 1720
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1721
		}
		{
			uint i; // 1723
			uint nCount; // 1723
			{
				CVulkanSamplerObject* pSampler; // 1725
				CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::Base(); // 368
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<RenderDescriptorBinding_t, int>::NumAllocated(); // 1143
				CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::Element(
					int i);  // 1148
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 756
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 844
				DescriptorBindParams_t(const union DescriptorBindParams_t* this); // 759
				RenderDescriptorBinding_t::RenderDescriptorBinding_t(); // 1479
				Construct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory); // 1148
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::AddToTail(); // 1156
				CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::Element(
					int i);  // 1156
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::AddToTailGetPtr(); // 1733
				{
				}
				RenderDescriptorBinding_t::InitSampler(
						const RenderDescriptorDesc_t& rdd,
						CVulkanSamplerObject* pSamplerObject,
						uint32 nArrayIndex);  // 1733
				CUtlMemory<CVulkanSamplerObject::operator[](
						int i);  // 588
				CUtlVectorBase<CVulkanSamplerObject::operator[](
						int i);  // 1725
			}
			CUtlVectorBase<CVulkanSamplerObject::Count(); // 1723
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1720
		CUtlVectorBase<CVulkanSamplerObject::Count(); // 1721
		CUtlVectorBase<CVulkanSamplerObject::Count(); // 1736
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1737
	}
	CUtlMemory<RenderDescriptorBinding_t, int>::CUtlMemory(
			RenderDescriptorBinding_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<RenderDescriptorBinding_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<RenderDescriptorBinding_t, int>::CUtlMemoryFixedGrowable_Base(
					RenderDescriptorBinding_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, RenderDescriptorBinding_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<RenderDescriptorBinding_t, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 1717
	RenderDescriptorDesc_t::RenderDescriptorDesc_t(); // 1707
	CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::Base(); // 1739
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::Count(); // 1739
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::RemoveAll(); // 1798
	CUtlMemory<RenderDescriptorBinding_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RenderDescriptorBinding_t, int>::ConvertToExternalMemory(
				RenderDescriptorBinding_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RenderDescriptorBinding_t, int>::Purge_FixedGrowable(
				RenderDescriptorBinding_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RenderDescriptorBinding_t, int>::Purge_FixedGrowable(
				RenderDescriptorBinding_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, RenderDescriptorBinding_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::Base(); // 368
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::Purge(); // 560
	ValidateAlignment<RenderDescriptorBinding_t>(void); // 508
	CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 903
	CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 510
	CUtlMemory<RenderDescriptorBinding_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RenderDescriptorBinding_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemoryFixedGrowable<RenderDescriptorBinding_t, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<RenderDescriptorBinding_t, 8>::~CUtlVectorFixedGrowable(); // 1740
} /* size: 0, variables: 4, inline expansions: 33 (731 bytes) */

// <00C5801B> vulkan/texturevulkan.cpp:1742
void CTextureManagerVulkan::UpdateBindlessTextureDescriptor(const CTextureVulkan* pTexture)
{
} /* size: 25 */

// <00C52B9E> vulkan/texturevulkan.cpp:1742
// variable: 1
// function calls: 21
void CTextureManagerVulkan::UpdateBindlessTextureDescriptor(const CTextureVulkan* pTexture)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1749; // 1749
		{
		}
		CTextureInfoId::GetLegacyTexture(); // 1747
		{
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1749
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::NumAllocated(); // 1247
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::Base(); // 112
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::Base(); // 368
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::IsGrowable(); // 823
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::GrowMemory(
				int num);  // 1249
		Construct<CTextureManagerVulkan::TextureUpdate_t, CTextureManagerVulkan::TextureUpdate_t>(TextureUpdate_t* pMemory); // 1252
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::Element(
			int i);  // 1252
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::AddToTail(
				TextureUpdate_t& src);  // 1750
		CTextureBase::UniqueIndex(); // 1750
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1751
	}
} /* size: 0 */

// <00C3B46F> vulkan/texturevulkan.cpp:1742
// variables: 4
void CTextureManagerVulkan::UpdateBindlessTextureDescriptor(const CTextureVulkan* pTexture)
{
	const char   __FUNCTION__; // 25220
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1749; // 1749
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1746
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1747
		}
	}
} /* size: 0, variables: 1 */

// <00C3A046> vulkan/texturevulkan.cpp:1759
// variables: 16
// function calls: 83
void CTextureManagerVulkan::UpdateBindlessTextureDescriptorSet()
{
	const uint  nNumColorSpaces; // 1761
	RenderDescriptorDesc_t descSetLayout; // 1762
	CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> > descSetBindings; // 1772
	const char   __FUNCTION__; // 25296
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1775; // 1775
		uint32 nPrevTexData; // 1783
		{
			int i; // 1784
			{
				const TextureUpdate_t& update; // 1787
				const CTextureInfoId& texId; // 1788
				const CTextureBase* pTexture; // 1796
				const uint32  nIndex; // 1797
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1810
				}
				{
					int nColorSpace; // 1816
					CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Element(
						int i);  // 1148
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
								ResourceHandle_t hUntypedResource);  // 227
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 756
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 844
					DescriptorBindParams_t(const union DescriptorBindParams_t* this); // 759
					RenderDescriptorBinding_t::RenderDescriptorBinding_t(); // 1479
					Construct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory); // 1148
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddToTail(); // 1156
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddToTailGetPtr(); // 1818
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
					CTextureBase::ComputeTextureDimension(); // 1821
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
					CTextureInfoId::GetResourceHandle(); // 478
					CTextureBase::GetTextureHandle(); // 1820
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 767
					RenderDescriptorBinding_t::InitTexture(
							const RenderDescriptorDesc_t& rdd,
							HRenderTexture hTex,
							RenderTextureDimension_t texDim,
							int nMipLevel,
							RenderColorSpace_t colorSpace,
							uint32 nArrayIndex);  // 1818
				}
				Max<unsigned int>(const unsigned int& val1,
							const unsigned int& val2);  // 1827
				CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::operator[](
						int i);  // 1787
				CTextureInfoId::GetLegacyTexture(); // 1796
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
				CTextureInfoId::GetResourceHandle(); // 1802
				CInterlockedIntT<int, 4>::GetRaw(); // 383
				CWeakHandle<InfoForResourceTypeCTextureBase>::GetRefCount(); // 1802
				CTextureBase::UniqueIndex(); // 1810
				CTextureManagerBase::GetErrorTexture(
						RenderTextureDimension_t nDim);  // 1805
			}
			Count(const CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int this); // 1784
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1775
		CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int>::Base(); // 112
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::Base(); // 104
		Count(const CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int this); // 104
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::end(); // 1778
		{
			pair<CTextureManagerVulkan::TextureUpdate_t*, long int> __p; // 208
			{
				TextureUpdate_t* __tmp; // 152
				__get_temporary_buffer<CTextureManagerVulkan::TextureUpdate_t>(ptrdiff_t __len); // 152
				pair<CTextureManagerVulkan::TextureUpdate_t::pair<CTextureManagerVulkan::TextureUpdate_t*&, long int&>(
												TextureUpdate_t *& __x,
												long int& __y);  // 153
			}
			get_temporary_buffer<CTextureManagerVulkan::TextureUpdate_t>(ptrdiff_t __len); // 209
		}
		_Impl::_Impl(
			ptrdiff_t __original_len);  // 324
		_Temporary_buffer<CTextureManagerVulkan::TextureUpdate_t::end(); // 326
		_Temporary_buffer<CTextureManagerVulkan::TextureUpdate_t::begin(); // 326
		__uninitialized_construct_buf<CTextureManagerVulkan::TextureUpdate_t, CTextureManagerVulkan::TextureUpdate_t*>(TextureUpdate_t* __first,
																TextureUpdate_t* __last,
																TextureUpdate_t* __seed);  // 326
		_Temporary_buffer<CTextureManagerVulkan::TextureUpdate_t::_Temporary_buffer(
					TextureUpdate_t* __seed,
					size_type __original_len);  // 5025
		_Destroy<CTextureManagerVulkan::TextureUpdate_t*>(TextureUpdate_t* __first,
									TextureUpdate_t* __last);  // 250
		__return_temporary_buffer<CTextureManagerVulkan::TextureUpdate_t>(TextureUpdate_t* __p,
											size_t __len);  // 216
		_Impl::~_Impl(); // 250
		_Temporary_buffer<CTextureManagerVulkan::TextureUpdate_t::~_Temporary_buffer(); // 5039
		__stable_sort<CTextureManagerVulkan::TextureUpdate_t*, __gnu_cxx::__ops::_Iter_comp_iter<CTextureManagerVulkan::UpdateBindlessTextureDescriptorSet()::<lambda(const CTextureManagerVulkan::TextureUpdate_t&, const CTextureManagerVulkan::TextureUpdate_t&)> > >(TextureUpdate_t* __first,
																TextureUpdate_t* __last,
																_Iter_comp_iter<CTextureManagerVulkan::UpdateBindlessTextureDescriptorSet()::<lambda(const CTextureManagerVulkan::Texture __comp); // 5108
		stable_sort<CTextureManagerVulkan::TextureUpdate_t*, CTextureManagerVulkan::UpdateBindlessTextureDescriptorSet()::<lambda(const CTextureManagerVulkan::TextureUpdate_t&, const CTextureManagerVulkan::TextureUpdate_t&)> >(TextureUpdate_t* __first,
																TextureUpdate_t* __last,
																 __comp); // 1778
		Count(const CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int this); // 1782
		CUtlMemory<RenderDescriptorBinding_t, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::EnsureCapacity(
				int num);  // 1782
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1831
		CUtlVectorBase<CTextureManagerVulkan::TextureUpdate_t, CUtlMemory<CTextureManagerVulkan::TextureUpdate_t, int> >::RemoveAll(); // 1830
	}
	RenderDescriptorDesc_t::RenderDescriptorDesc_t(); // 1762
	CUtlMemory<RenderDescriptorBinding_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RenderDescriptorBinding_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVector(); // 1772
	CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 903
	CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 1799
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Purge(); // 560
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVector(); // 1834
} /* size: 0, variables: 4, inline expansions: 11 (400 bytes) */

// <00C399A1> vulkan/texturevulkan.cpp:1839
// variable: 1
// function calls: 24
void CTextureManagerVulkan::AllocateSwapChainTexture(HRenderTexture hTexture, const CTextureCreationDesc* pHeader, CVulkanImage* pVulkanImage, VkFormat nOverrideSwapChainFormat)
{
	CTextureVulkan* pTextureVulkan; // 1841
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1841
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1847
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1848
	IVmaAllocationBase::IVmaAllocationBase(); // 179
	IVmaAllocationImage::IVmaAllocationImage(); // 189
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 191
	CTextureVulkan::CTextureVulkan(); // 1844
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<2019914870>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 1845
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1845
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1845
} /* size: 376, variables: 1, inline expansions: 24 (253 bytes) */

// <00C398E1> vulkan/texturevulkan.cpp:1851
// variable: 1
// function calls: 2
void CTextureManagerVulkan::ClearSwapChainTexture(HRenderTexture hTexture)
{
	CTextureVulkan* pTextureVulkan; // 1853
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1853
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00C39777> vulkan/texturevulkan.cpp:1864
// function calls: 5
void CTextureManagerVulkan::NewTexture()
{
	IVmaAllocationBase::IVmaAllocationBase(); // 179
	IVmaAllocationImage::IVmaAllocationImage(); // 189
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 191
	CTextureVulkan::CTextureVulkan(); // 1866
} /* size: 86, inline expansions: 5 (79 bytes) */

// <00C3967F> vulkan/texturevulkan.cpp:1869
// variables: 2
// function call: 1
void CTextureManagerVulkan::DestroyTextureObject(TextureObjectInfo_t& info)
{
	CVulkanImage* pResource; // 1871
	{
		VulkanImageViews_t imageViews; // 1874
		CRenderDeviceVulkan::MemoryManager(); // 1878
	}
} /* size: 152, variables: 1 */

// <00C394AA> vulkan/texturevulkan.cpp:1885
// variable: 1
// function calls: 7
void CTextureManagerVulkan::IsSwapChain(HRenderTexture hTexture)
{
	const CTextureVulkan* pTexture; // 1889
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			ResourceHandle_t hResource);  // 1887
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1889
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1890
} /* size: 83, variables: 1, inline expansions: 7 (120 bytes) */

// <00C38858> vulkan/texturevulkan.cpp:1900
// variables: 7
// function calls: 44
void CTextureManagerVulkan::AddReferenceToDescriptorSet(HRenderTexture hTexture, CDescriptorSetVulkan* pDescriptorSet)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1902; // 1902
	IndexType_t nIndex; // 1904
	CUtlHashtable<CDescriptorSetVulkan*, empty_t, DefaultHashFunctor<CDescriptorSetVulkan*>, DefaultEqualFunctor<CDescriptorSetVulkan*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t>, int> >* pDescriptorSetReferenceMap; // 1909
	const char   __FUNCTION__; // 25117
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1910
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1902
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
			int i);  // 545
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Element(
		int i);  // 1912
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::LeftChild(
			int i);  // 1913
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 49
	CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> >::operator(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& lhs,
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::RightChild(
			int i);  // 1915
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FindAltKeyType<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::CKeyLess>(
																const CWeakHandle<InfoForResourceTypeCTextureBase>& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FindAltKeyType<CWeakHandle<InfoForResourceTypeCTextureBase> >(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& search);  // 243
	CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Find(
		const KeyType_t& key);  // 1904
	CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<CDescriptorSetVulkan::Init(); // 178
	CUtlHashtable<CDescriptorSetVulkan::CUtlHashtable(
			int minimumSize);  // 1907
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::LeftChild(
			int i);  // 1667
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this,
			int i);  // 539
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Element(
		int i);  // 1665
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 49
	CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> >::operator(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& lhs,
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 418
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::RightChild(
			int i);  // 1677
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		int newNode; // 1696
	}
	{
		int newNode; // 1709
		{
		}
	}
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 1907
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this,
			int i);  // 539
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Element(
		int i);  // 92
	CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::operator[](
			IndexType_t i);  // 1909
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 240
	CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
			int i);  // 706
	CUtlKeyValuePair<CDescriptorSetVulkan::CUtlKeyValuePair<CDescriptorSetVulkan*>(
						CDescriptorSetVulkan* const& k);  // 1514
	Construct<CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>, CDescriptorSetVulkan*&>(CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>* pMemory); // 706
	CUtlHashtable<CDescriptorSetVulkan::DoInsert<CDescriptorSetVulkan*>(
					CDescriptorSetVulkan* k,
					unsigned int h,
					bool* pDidInsert);  // 695
	CUtlHashtable<CDescriptorSetVulkan::DoInsert<CDescriptorSetVulkan*>(
					CDescriptorSetVulkan* k,
					unsigned int h,
					bool* pDidInsert);  // 240
	CUtlHashtable<CDescriptorSetVulkan::Insert(
		KeyArg_t k);  // 1913
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1914
} /* size: 0, variables: 4, inline expansions: 44 (1719 bytes) */

// <00C37C57> vulkan/texturevulkan.cpp:1920
// variables: 8
// function calls: 47
void CTextureManagerVulkan::RemoveReferenceToDescriptorSet(HRenderTexture hTexture, CDescriptorSetVulkan* pDescriptorSet)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1922; // 1922
	IndexType_t nIndex; // 1924
	const char   __FUNCTION__; // 25193
	{
		CUtlHashtable<CDescriptorSetVulkan*, empty_t, DefaultHashFunctor<CDescriptorSetVulkan*>, DefaultEqualFunctor<CDescriptorSetVulkan*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t>, int> >* pDescriptorSetReferenceMap; // 1928
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1929
		}
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this,
				int i);  // 539
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Element(
			int i);  // 92
		CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::operator[](
				IndexType_t i);  // 1928
		Mix32HashFunctor::operator(
				uint32 n);  // 139
		PointerHashFunctor::operator(
				const void* s);  // 267
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Count(); // 747
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
				int i);  // 756
		CUtlHashtableEntry<CDescriptorSetVulkan::IdealIndex(
				uint32 slotmask);  // 757
		CUtlHashtableEntry<CDescriptorSetVulkan::MarkInvalid(); // 760
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
				int i);  // 761
		{
			unsigned int chainid; // 776
			unsigned int nextIdx; // 777
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 776
			CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
					int i);  // 781
			CUtlHashtableEntry<CDescriptorSetVulkan::IdealIndex(
					uint32 slotmask);  // 781
			CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
					int i);  // 789
			CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
					int i);  // 790
			{
				int i; // 121
			}
			CUtlHashtableEntry<CDescriptorSetVulkan::MoveDataFrom(
					CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t>& src);  // 790
			CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
					int i);  // 790
			CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
					int i);  // 791
			CUtlHashtableEntry<CDescriptorSetVulkan::MarkInvalid(); // 791
		}
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
				int i);  // 769
		CUtlHashtable<CDescriptorSetVulkan::DoRemove<CDescriptorSetVulkan*>(
						CDescriptorSetVulkan* x,
						unsigned int h);  // 267
		CUtlHashtable<CDescriptorSetVulkan::Remove(
			KeyArg_t k);  // 1930
		CUtlHashtable<CDescriptorSetVulkan::Count(); // 215
		CUtlHashtable<CDescriptorSetVulkan::IsEmpty(); // 1933
		CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::RemoveAt(
			IndexType_t i);  // 1936
		ValidateAlignment<CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::~CUtlMemory(); // 188
		CUtlHashtable<CDescriptorSetVulkan::~CUtlHashtable(); // 1935
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1922
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
			int i);  // 545
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Element(
		int i);  // 1912
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::LeftChild(
			int i);  // 1913
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 49
	CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> >::operator(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& lhs,
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::RightChild(
			int i);  // 1915
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FindAltKeyType<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::CKeyLess>(
																const CWeakHandle<InfoForResourceTypeCTextureBase>& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FindAltKeyType<CWeakHandle<InfoForResourceTypeCTextureBase> >(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& search);  // 243
	CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Find(
		const KeyType_t& key);  // 1924
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1939
} /* size: 0, variables: 3, inline expansions: 16 (893 bytes) */

// <00C36D53> vulkan/texturevulkan.cpp:1944
// variables: 14
// function calls: 57
void CTextureManagerVulkan::RebakeDescriptorSetsReferencing(HRenderTexture hTexture, bool bDestroyingTexture)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1946; // 1946
	IndexType_t nIndex; // 1948
	CUtlHashtable<CDescriptorSetVulkan*, empty_t, DefaultHashFunctor<CDescriptorSetVulkan*>, DefaultEqualFunctor<CDescriptorSetVulkan*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t>, int> >* pDescriptorSetReferenceMap; // 1955
	const char   __FUNCTION__; // 25220
	CUtlVector<CDescriptorSetVulkan*, CUtlMemory<CDescriptorSetVulkan*, int> > vecRemoveFromDescriptorSets; // 1957
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1956
	}
	{
		UtlHashHandle_t hElem; // 1958
		{
			CDescriptorSetVulkan* pStaticDescriptorSet; // 1960
			CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::operator[](
					int i);  // 297
			CUtlHashtable<CDescriptorSetVulkan::operator[](
					handle_t idx);  // 1960
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1963
			CUtlMemory<CDescriptorSetVulkan::operator[](
					int i);  // 602
			CUtlVectorBase<CDescriptorSetVulkan::Element(
				int i);  // 1201
			CopyConstruct<CDescriptorSetVulkan*>(CDescriptorSetVulkan** pMemory,
								CDescriptorSetVulkan* const& src);  // 1201
			CUtlMemory<CDescriptorSetVulkan::Grow(
				int num);  // 806
			CUtlVectorBase<CDescriptorSetVulkan::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CDescriptorSetVulkan::AddToTail(
					CDescriptorSetVulkan* const& src);  // 1965
		}
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Count(); // 915
			CUtlHashtableEntry<CDescriptorSetVulkan::IsValid(); // 917
		}
		CUtlHashtable<CDescriptorSetVulkan::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<CDescriptorSetVulkan::FirstHandle(); // 1958
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Count(); // 915
			CUtlHashtableEntry<CDescriptorSetVulkan::IsValid(); // 917
		}
		CUtlHashtable<CDescriptorSetVulkan::NextHandle(
				handle_t start);  // 1958
	}
	{
		CDescriptorSetVulkan* pStaticDescritorSet; // 1974
		CUtlVector<CDescriptorSetVulkan*, CUtlMemory<CDescriptorSetVulkan*, int> >& __for_range; // 64236
		iterator __for_begin; // 28544
		iterator __for_end; // 28544
		CUtlVectorBase<CDescriptorSetVulkan::end(); // 1974
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1977
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1946
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
			int i);  // 545
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Element(
		int i);  // 1912
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::LeftChild(
			int i);  // 1913
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 49
	CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> >::operator(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& lhs,
			const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::RightChild(
			int i);  // 1915
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FindAltKeyType<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan*>*, int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::CKeyLess>(
																const CWeakHandle<InfoForResourceTypeCTextureBase>& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FindAltKeyType<CWeakHandle<InfoForResourceTypeCTextureBase> >(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& search);  // 243
	CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Find(
		const KeyType_t& key);  // 1948
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1979
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1979
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this,
			int i);  // 539
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Element(
		int i);  // 92
	CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::operator[](
			IndexType_t i);  // 1955
	CUtlMemory<CDescriptorSetVulkan::ValidateGrowSize(); // 475
	CUtlMemory<CDescriptorSetVulkan::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDescriptorSetVulkan::ResetDbgInfo(); // 530
	CUtlVectorBase<CDescriptorSetVulkan::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDescriptorSetVulkan::CUtlVector(); // 1957
	CUtlMemory<CDescriptorSetVulkan::Purge(); // 903
	CUtlMemory<CDescriptorSetVulkan::Purge(); // 1799
	CUtlVectorBase<CDescriptorSetVulkan::Purge(); // 560
	ValidateAlignment<CDescriptorSetVulkan*>(void); // 508
	CUtlMemory<CDescriptorSetVulkan::Purge(); // 510
	CUtlMemory<CDescriptorSetVulkan::~CUtlMemory(); // 562
	CUtlVectorBase<CDescriptorSetVulkan::~CUtlVectorBase(); // 410
	CUtlVector<CDescriptorSetVulkan::~CUtlVector(); // 1979
} /* size: 0, variables: 5, inline expansions: 35 (1021 bytes) */

// <00C36358> vulkan/texturevulkan.cpp:1984
// variables: 3
// function calls: 42
void CTextureManagerVulkan::RemoveAllReferencesToDescriptorSets()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1986; // 1986
	{
		int nIndex; // 1988
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
				int i);  // 611
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::LeftChild(
				int i);  // 1329
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FirstInorder(); // 351
		CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::FirstInorder(); // 1988
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this,
				int i);  // 539
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Element(
			int i);  // 92
		CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::operator[](
				IndexType_t i);  // 1990
		ValidateAlignment<CUtlHashtableEntry<CDescriptorSetVulkan*, empty_t> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<CDescriptorSetVulkan::~CUtlMemory(); // 188
		CUtlHashtable<CDescriptorSetVulkan::~CUtlHashtable(); // 1990
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
				int i);  // 661
		IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
				int i,
				const Iterator_t& it);  // 664
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
				int i);  // 611
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::LeftChild(
				int i);  // 667
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::IsValidIndex(
				int i);  // 659
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::IsValidIndex(
				int i);  // 1339
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::RightChild(
				int i);  // 1343
		{
			int left; // 1346
			operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
					int i);  // 611
			CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::LeftChild(
					int i);  // 1347
		}
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Parent(
			int i);  // 1352
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this,
				int i);  // 617
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::RightChild(
				int i);  // 633
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::IsRightChild(
				int i);  // 1353
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Parent(
			int i);  // 1357
		CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::NextInorder(
				int i);  // 352
		CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::NextInorder(
				IndexType_t i);  // 1988
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1986
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSet this); // 1288
	CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Purge(); // 347
	CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlHashtable<CDescriptorSetVulkan::Purge(); // 1992
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1993
} /* size: 545, variables: 1, inline expansions: 13 (562 bytes) */

// <00C35F55> vulkan/texturevulkan.cpp:1995
// variables: 5
// function calls: 16
void CTextureManagerVulkan::HookupFallbackTextureAndQueueTextureBitsCopy(CTextureBase* pTextureBase, void* pFallbackTexture)
{
	CFallbackTextureVulkan* pFallback; // 1997
	CTextureVulkan* pTextureVulkan; // 1998
	uint8* pFallbackTextureBits; // 2012
	const char   __FUNCTION__; // 25521
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2013
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 2000
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 2002
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 2004
	CTextureInfoId::SetTextureObject(
			void* pObj);  // 2005
	CTextureInfoId::GetFallbackTextureBitsPtr(); // 2013
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 2016
} /* size: 204, variables: 4, inline expansions: 16 (201 bytes) */

// <00C35EF7> vulkan/texturevulkan.cpp:2028
void CTextureManagerVulkan::TextureAchievedResidency(const CTextureBase* pTexture, const TextureObjectInfo_t& textureObject, int32 nTextureMipLevelsLoaded)
{
} /* size: 14 */

// <00C58075> vulkan/texturevulkan.cpp:2042
// function calls: 9
void CTextureManagerVulkan::ReleaseFallbackTexture(CFallbackTextureVulkan* pFallbackTexture)
{
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CFallbackTextureVulkan>::PutObject(
			CFallbackTextureVulkan* pInfo);  // 34
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 35
	CFallbackTextureHelper<CFallbackTextureVulkan>::ReleaseFallbackTexture(
				CFallbackTextureVulkan* pFallbackTexture);  // 2044
} /* size: 0, inline expansions: 9 (0 bytes) */

// <00C35ED1> vulkan/texturevulkan.cpp:2042
void CTextureManagerVulkan::ReleaseFallbackTexture(CFallbackTextureVulkan* pFallbackTexture)
{
} /* size: 0 */

// <00C34D96> vulkan/texturevulkan.cpp:2047
// variables: 6
// function calls: 74
void CTextureManagerVulkan::EnsureFallbackTextureDataResident(HRenderTexture hTexture, RenderColorSpace_t colorSpace)
{
	{
		CTextureVulkan* pTexture; // 2056
		{
			CResourceNameGetter resourceName; // 2059
			{
				const TextureSpecification_t* pSpec; // 2062
				CTextureBase* pFallbackTexture; // 2063
				const int  nFallbackTextureIdx; // 2064
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 2062
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 2065
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 161
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 163
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 172
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 175
				TextureSpecification_t::ComputeTextureDimension(); // 483
				CTextureBase::ComputeTextureDimension(); // 2067
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 478
			CTextureBase::GetTextureHandle(); // 2059
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
										const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2059
			CTextureInfoId::GetTextureObject(); // 488
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 488
			CTextureBase::IsStandinTexture(); // 2060
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 2079
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 2079
		}
		CInterlockedIntT<int, 4>::operator int(); // 282
		ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2056
	}
	CRenderDeviceVulkan::LazilyAllocateRenderTargets(); // 2050
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 2054
	{
		CFallbackTextureVulkan* pFallback; // 50
		ThreadPause(void); // 208
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		CTSListBase::Pop(); // 376
		simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
		CTSPool<CFallbackTextureVulkan>::GetObject(); // 390
		CTSPool<CFallbackTextureVulkan>::Get(); // 50
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 51
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 422
		ThreadInterlockedAssignPointerToConstIf(volatile const void** p,
							const void* value,
							const void* comparand);  // 798
		CInterlockedPtr<void>::AssignIf(
			void* conditionValue,
			void* newValue);  // 1245
		CTextureInfoId::SetFallbackTexturePtrIf(
					void* pTestValue,
					void* pNewValue);  // 52
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 371
		CTSPool<CFallbackTextureVulkan>::PutObject(
				CFallbackTextureVulkan* pInfo);  // 61
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 62
	}
	CInterlockedPtr<void>::operator void*(); // 1235
	CTextureInfoId::GetFallbackTexturePtr(); // 47
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 41
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 42
	CFallbackTextureHelper<CFallbackTextureVulkan>::EnsureFallbackTextureDataResident(
						HRenderTexture hTexture,
						RenderColorSpace_t colorSpace);  // 2081
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2081
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2052
} /* size: 1423, inline expansions: 16 (955 bytes) */

// <00C34CDF> vulkan/texturevulkan.cpp:2084
// function calls: 3
void CTextureManagerVulkan::GetFallbackTexturePoolSize()
{
	CTSListBase::Count(); // 28
	CInterlockedIntT<int, 4>::operator int(); // 28
	CFallbackTextureHelper<CFallbackTextureVulkan>::GetFallbackTexturePoolSize(); // 2086
} /* size: 20, inline expansions: 3 (28 bytes) */

// <00C34C75> vulkan/texturevulkan.cpp:2090
void CTextureManagerVulkan::RemoveTextureFromStreamableList(const CTextureBase* pTexture)
{
} /* size: 16 */

// <00C34BD0> vulkan/texturevulkan.cpp:2096
void CTextureManagerVulkan::GetTextureResidencyInfo(CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >& textures, TextureResidencyStats_t& textureResidencyStats)
{
} /* size: 41 */

// <00C34A2B> vulkan/texturevulkan.cpp:2105
// variables: 2
// function calls: 3
void CTextureManagerVulkan::PerformTextureStreaming(int nFinishedFrameCount)
{
	CToolsStallMonitorScope stall_monitor_scope_check_object; // 2107
	bool bPerformQueuedTextureInfoDeletionThisFrame; // 2117
	CToolsStallMonitorScope::CToolsStallMonitorScope(
				const char* pScopeName,
				bool bDisableDetection,
				uint32 nStallThresholdMS);  // 2107
	CRenderDeviceVulkan::EXTMemoryBudgetEnabled(); // 2112
	CToolsStallMonitorScope::~CToolsStallMonitorScope(); // 2119
} /* size: 204, variables: 2, inline expansions: 3 (51 bytes) */

// <00C349C4> vulkan/texturevulkan.cpp:2124
void CTextureManagerVulkan::UpdateStats()
{
} /* size: 38 */

// <00C33477> vulkan/texturevulkan.cpp:2133
// variables: 7
// function calls: 100
void CTextureManagerVulkan::RemoveMipLevels(CTextureBase* pTexture, CRenderContextBase* pRenderContext, int nMipLevelsToRemove)
{
	CTextureVulkan* pTex; // 2135
	const size_t  nOldSize; // 2137
	TextureSpecification_t tmpSpec; // 2147
	int nMissingMips; // 2149
	TextureObjectInfo_t texObj; // 2154
	CResourceNameGetter resourceName; // 2162
	{
		int i; // 2166
		CUtlVectorBase<ITextureResidencyListener::Count(); // 2166
		CUtlMemory<ITextureResidencyListener::operator[](
				int i);  // 588
		CUtlVectorBase<ITextureResidencyListener::operator[](
				int i);  // 2168
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 2168
	}
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 406
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 406
	CTextureBase::GetMaxLoadedMipLevels(); // 404
	CTextureBase::GetMaxLoadedMipLevels(); // 2139
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 2147
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 406
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 406
	CTextureBase::GetMaxLoadedMipLevels(); // 404
	CTextureBase::GetMaxLoadedMipLevels(); // 2149
	Max<int>(const int& val1,
		const int& val2);  // 2151
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 43
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 43
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 43
	TextureSpecification_t::TextureSpecification_t(); // 236
	TextureObjectInfo_t::TextureObjectInfo_t(); // 2154
	Max<int>(const int& val1,
		const int& val2);  // 2152
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 2158
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 2162
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2162
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2172
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
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 2172
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
	TextureSpecification_t::~TextureSpecification_t(); // 2172
} /* size: 1292, variables: 6, inline expansions: 94 (2719 bytes) */

// <00C330E3> vulkan/texturevulkan.cpp:2174
// variables: 4
// function calls: 10
void CFallbackTextureVulkan::CFallbackTextureVulkan()
{
	{
		VkImageLayout initialState; // 2182
		VulkanMemoryPoolType_t nPoolType; // 2186
	}
	IVmaAllocationBase::IVmaAllocationBase(); // 179
	IVmaAllocationImage::IVmaAllocationImage(); // 2177
	{
		VkImageLayout initialState; // 2182
		VulkanMemoryPoolType_t nPoolType; // 2186
		CVulkanImage::SetIsResident(
				bool bResident);  // 2184
		CRenderDeviceVulkan::MemoryManager(); // 2187
		CMemoryManagerVulkan::GetVmaAllocator(); // 1491
		GetVmaAllocator(void); // 2189
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 2189
	}
} /* size: 386, inline expansions: 2 (0 bytes) */

// <00C330AE> vulkan/texturevulkan.cpp:2174
// variables: 2
void CFallbackTextureVulkan::CFallbackTextureVulkan()
{
	{
		VkImageLayout initialState; // 2182
		VulkanMemoryPoolType_t nPoolType; // 2186
	}
} /* size: 0 */

// <00C32DB7> vulkan/texturevulkan.cpp:2195
// function calls: 15
void CFallbackTextureVulkan::~CFallbackTextureVulkan()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2199
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2203
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2207
} /* size: 245, inline expansions: 15 (452 bytes) */

// <00C32A15> vulkan/texturevulkan.cpp:2195
// function calls: 18
void CFallbackTextureVulkan::~CFallbackTextureVulkan()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2199
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2203
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2207
	IVmaAllocationBase::~IVmaAllocationBase(); // 183
	IVmaAllocationImage::~IVmaAllocationImage(); // 2209
	CFallbackTextureVulkan::~CFallbackTextureVulkan(); // 2209
} /* size: 238, inline expansions: 18 (603 bytes) */

// <00C329FC> vulkan/texturevulkan.cpp:2195
void CFallbackTextureVulkan::~CFallbackTextureVulkan()
{
} /* size: 0 */

// <00C3275C> vulkan/texturevulkan.cpp:2212
// variables: 2
// function calls: 7
void CFallbackTextureVulkan::CreateVulkanImageInternal()
{
	VkImageCreateInfo imageCreateInfo; // 2215
	VkImage pImage; // 2235
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2216
	VulkanDevice(void); // 2236
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2236
} /* size: 336, variables: 2, inline expansions: 7 (212 bytes) */

// <00C3221C> vulkan/texturevulkan.cpp:2242
// variable: 1
// function calls: 20
void CFallbackTextureVulkan::CreateVulkanImageViewsInternal()
{
	VkImageViewCreateInfo imageViewCreateInfo; // 2244
	VulkanDevice(void); // 2265
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
	CVulkanObject<VkImageView_T::CVulkanObject(
			VkDevice pDevice);  // 2265
	CVulkanObject<VkImageView_T::GetPtr()>* this); // 2266
	VulkanDevice(void); // 2266
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2266
	VulkanDevice(void); // 2274
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 74
	CVulkanObject<VkImageView_T::CVulkanObject(
			VkDevice pDevice);  // 2274
	CVulkanObject<VkImageView_T::GetPtr()>* this); // 2275
	VulkanDevice(void); // 2275
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2275
} /* size: 648, variables: 1, inline expansions: 20 (531 bytes) */

// <00C321EE> vulkan/texturevulkan.cpp:2281
void CFallbackTextureVulkan::VmaGetRelocatable()
{
} /* size: 7 */

// <00C31E6C> vulkan/texturevulkan.cpp:2290
// function calls: 16
void CTextureVulkan::VmaGetRelocatable()
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2295
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2295
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1265
	CTextureInfoChunkBase::IsStandinTexture(
			int nTexIdx);  // 1225
	CTextureInfoId::IsStandinTexture(); // 2295
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1270
	CTextureInfoChunkBase::IsExternalTexture(
				int nTexIdx);  // 1230
	CTextureInfoId::IsExternalTexture(); // 2295
} /* size: 138, inline expansions: 16 (235 bytes) */

// <00C31CF3> vulkan/texturevulkan.cpp:2301
// variables: 4
// function calls: 4
void CTextureVulkan::VmaCreateNewVulkanObject(uint64_t* pOldObjectOut)
{
	CVulkanImage* pOldImage; // 2303
	const char   __FUNCTION__; // 25041
	VkImage pNewImage; // 2311
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2304
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 2303
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 2311
} /* size: 0, variables: 3, inline expansions: 4 (138 bytes) */

// <00C313D8> vulkan/texturevulkan.cpp:2318
// variables: 5
// function calls: 35
void CTextureVulkan::VmaAssignNewObject(CRenderContextVulkan* pAssignContext, uint64_t nNewObject, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
	const char   __FUNCTION__; // 24889
	CVulkanImage* pVulkanImage; // 2322
	CVulkanTextureObjectToDelete* pTextureObjectToDelete; // 2325
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2320
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2321
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2320
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2320
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1265
	CTextureInfoChunkBase::IsStandinTexture(
			int nTexIdx);  // 1225
	CTextureInfoId::IsStandinTexture(); // 2321
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 2322
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 2325
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 508
	CVulkanTextureObjectToDelete::CVulkanTextureObjectToDelete(
					CVulkanImage* pVulkanImage,
					VulkanImageViews_t* pImageViews,
					const TextureSpecification_t* pSpec);  // 2325
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::NumAllocated(); // 1247
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Base(); // 112
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Base(); // 368
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::ResetDbgInfo(); // 824
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsGrowable(); // 823
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsExternallyAllocated(); // 859
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsExternallyAllocated(); // 861
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Grow(
		int num);  // 806
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::GrowMemory(
			int num);  // 1249
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::operator[](
			int i);  // 602
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Element(
		int i);  // 1252
	Construct<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CRefCounted<CRefCountServiceBase<true, CRefMT> >*>(CRefCounted<CRefCountServiceBase<true, CRefMT> >** pMemory); // 1252
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddToTail(
			CRefCounted<CRefCountServiceBase<true, CRefMT> > *& src);  // 2326
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2329
	CTextureManagerVulkan::UpdateBindlessTextureDescriptor(
					const CTextureVulkan* pTexture);  // 2335
	CTextureVulkan::GetFormat(); // 2340
} /* size: 0, variables: 3, inline expansions: 35 (1291 bytes) */

// <00C30DAF> vulkan/texturevulkan.cpp:2346
// variables: 5
// function calls: 22
void CTextureVulkan::CopyImage(CRenderContextVulkan* pCopyContext, VkImage pNewImage)
{
	const char   __FUNCTION__; // 24661
	CVulkanImage* pVulkanImage; // 2351
	const TextureSpecification_t* pSpec; // 2352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2348
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2349
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2348
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2348
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1265
	CTextureInfoChunkBase::IsStandinTexture(
			int nTexIdx);  // 1225
	CTextureInfoId::IsStandinTexture(); // 2349
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 2351
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 2352
	CTextureVulkan::GetFormat(); // 2353
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 2353
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 2353
} /* size: 0, variables: 3, inline expansions: 22 (553 bytes) */

