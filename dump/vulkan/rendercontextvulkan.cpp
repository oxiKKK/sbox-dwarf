
//
// vulkan/rendercontextvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 194
//

// <0087376C> vulkan/rendercontextvulkan.cpp:56
// variables: 5
// function calls: 149
void CRenderContextVulkan::CRenderContextVulkan(VkDevice pDeviceVulkan, const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo)
{
	{
		int i; // 121
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 127
	RenderTargetDesc_t::Clear(); // 116
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 115
	RenderTargetDesc_t::RenderTargetDesc_t(); // 67
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 76
	TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 970
		DefaultSamplerStateDesc(void); // 959
		DefaultSamplerStateDesc(void); // 979
	}
	CSamplerStateDescBase::CSamplerStateDescBase(); // 975
	CSamplerStateDesc::CSamplerStateDesc(); // 31
	SamplerAttrForStorage_t::SamplerAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
	DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
	CUtlAttributeList<void::CUtlAttributeList(); // 898
	CUtlString::CUtlString(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
	CRenderAttributes::CRenderAttributes(); // 67
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 31
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 30
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 30
	VulkanFramebufferState_t::VulkanFramebufferState_t(); // 67
	RenderPassHandle_t::RenderPassHandle_t(); // 67
	CUtlMemory<DynamicVertexBufferHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<DynamicVertexBufferHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DynamicVertexBufferHandle_t__::ResetDbgInfo(); // 530
	CUtlVectorBase<DynamicVertexBufferHandle_t__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DynamicVertexBufferHandle_t__::CUtlVector(); // 67
	CUtlMemory<DynamicIndexBufferHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<DynamicIndexBufferHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<DynamicIndexBufferHandle_t__::ResetDbgInfo(); // 530
	CUtlVectorBase<DynamicIndexBufferHandle_t__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<DynamicIndexBufferHandle_t__::CUtlVector(); // 67
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 74
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CRenderPipelineStats::CRenderPipelineStats(); // 67
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 75
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 76
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 77
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 78
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 83
} /* size: 1308, inline expansions: 132 (3606 bytes) */

// <0087373B> vulkan/rendercontextvulkan.cpp:56
void CRenderContextVulkan::CRenderContextVulkan(VkDevice pDeviceVulkan, const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo)
{
} /* size: 0 */

// <00872FC2> vulkan/rendercontextvulkan.cpp:87
// function calls: 34
void CRenderContextVulkan::~CRenderContextVulkan()
{
	{
		{
		}
	}
	{
		CCommandStreamBuilder::HasStreamStarted(); // 89
		{
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 4493
		CRenderContextVulkan::DestroyDynamicMemoryPools(); // 90
		CUtlVectorBase<DynamicVertexBufferHandle_t__::Count(); // 2814
		CUtlMemory<DynamicVertexBufferHandle_t__::Base(); // 112
		CUtlVectorBase<DynamicVertexBufferHandle_t__::Base(); // 2816
		CUtlVectorBase<DynamicVertexBufferHandle_t__::RemoveAll(); // 2817
		CRenderContextVulkan::DestroyAllDynamicVertexBuffers(); // 91
		CUtlVectorBase<DynamicIndexBufferHandle_t__::Count(); // 3106
		CUtlMemory<DynamicIndexBufferHandle_t__::Base(); // 112
		CUtlVectorBase<DynamicIndexBufferHandle_t__::Base(); // 3108
		CUtlVectorBase<DynamicIndexBufferHandle_t__::RemoveAll(); // 3109
		CRenderContextVulkan::DestroyAllDynamicIndexBuffers(); // 92
		CUtlVectorBase<DynamicIndexBufferHandle_t__::RemoveAll(); // 1798
		CUtlMemory<DynamicIndexBufferHandle_t__::IsExternallyAllocated(); // 905
		CUtlMemory<DynamicIndexBufferHandle_t__::Purge(); // 903
		CUtlMemory<DynamicIndexBufferHandle_t__::Purge(); // 1799
		CUtlVectorBase<DynamicIndexBufferHandle_t__::Purge(); // 560
		ValidateAlignment<DynamicIndexBufferHandle_t__*>(void); // 508
		CUtlMemory<DynamicIndexBufferHandle_t__::Purge(); // 510
		CUtlMemory<DynamicIndexBufferHandle_t__::~CUtlMemory(); // 562
		CUtlVectorBase<DynamicIndexBufferHandle_t__::~CUtlVectorBase(); // 410
		CUtlVector<DynamicIndexBufferHandle_t__::~CUtlVector(); // 99
		CUtlVectorBase<DynamicVertexBufferHandle_t__::RemoveAll(); // 1798
		CUtlMemory<DynamicVertexBufferHandle_t__::IsExternallyAllocated(); // 905
		CUtlMemory<DynamicVertexBufferHandle_t__::Purge(); // 903
		CUtlMemory<DynamicVertexBufferHandle_t__::Purge(); // 1799
		CUtlVectorBase<DynamicVertexBufferHandle_t__::Purge(); // 560
		ValidateAlignment<DynamicVertexBufferHandle_t__*>(void); // 508
		CUtlMemory<DynamicVertexBufferHandle_t__::Purge(); // 510
		CUtlMemory<DynamicVertexBufferHandle_t__::~CUtlMemory(); // 562
		CUtlVectorBase<DynamicVertexBufferHandle_t__::~CUtlVectorBase(); // 410
		CUtlVector<DynamicVertexBufferHandle_t__::~CUtlVector(); // 99
	}
} /* size: 0 */

// <00872F5B> vulkan/rendercontextvulkan.cpp:87
void CRenderContextVulkan::~CRenderContextVulkan()
{
} /* size: 36 */

// <00872F1E> vulkan/rendercontextvulkan.cpp:87
// variables: 2
void CRenderContextVulkan::~CRenderContextVulkan()
{
	const char   __FUNCTION__; // 23129
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <00883895> vulkan/rendercontextvulkan.cpp:101
// function calls: 10
void CRenderContextVulkan::SetPerThreadData(PerThreadDataVulkan_t* pData)
{
	CInterlockedIntT<int, 4>::operator int(); // 56
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 56
	PerThreadDataVulkan_t::Release(); // 104
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 55
	PerThreadDataVulkan_t::AddRef(); // 109
	CRenderContextVulkan::SetPerThreadData(
			PerThreadDataVulkan_t* pData);  // 101
} /* size: 0, inline expansions: 10 (166 bytes) */

// <00872EF9> vulkan/rendercontextvulkan.cpp:101
void CRenderContextVulkan::SetPerThreadData(PerThreadDataVulkan_t* pData)
{
} /* size: 0 */

// <00872EB7> vulkan/rendercontextvulkan.cpp:112
void CRenderContextVulkan::IsOwnedByCurrentThread()
{
} /* size: 44 */

// <00872AAC> vulkan/rendercontextvulkan.cpp:117
// variables: 2
// function calls: 17
void CRenderContextVulkan::OnReleaseRenderContext()
{
	const char   __FUNCTION__; // 23156
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
	CCommandStreamBuilder::HasStreamStarted(); // 119
	CUtlVectorBase<DynamicVertexBufferHandle_t__::Count(); // 2814
	CUtlMemory<DynamicVertexBufferHandle_t__::Base(); // 112
	CUtlVectorBase<DynamicVertexBufferHandle_t__::Base(); // 2816
	CUtlVectorBase<DynamicVertexBufferHandle_t__::RemoveAll(); // 2817
	CRenderContextVulkan::DestroyAllDynamicVertexBuffers(); // 120
	CUtlVectorBase<DynamicIndexBufferHandle_t__::Count(); // 3106
	CUtlMemory<DynamicIndexBufferHandle_t__::Base(); // 112
	CUtlVectorBase<DynamicIndexBufferHandle_t__::Base(); // 3108
	CUtlVectorBase<DynamicIndexBufferHandle_t__::RemoveAll(); // 3109
	CRenderContextVulkan::DestroyAllDynamicIndexBuffers(); // 121
	CInterlockedIntT<int, 4>::operator int(); // 56
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 56
	PerThreadDataVulkan_t::Release(); // 104
	CRenderContextVulkan::SetPerThreadData(
			PerThreadDataVulkan_t* pData);  // 125
} /* size: 0, variables: 1, inline expansions: 17 (303 bytes) */

// <00872A2B> vulkan/rendercontextvulkan.cpp:134
void CRenderContextVulkan::SetStatesToDefault(uint32 nSetFlags, uint32 nNotSetFlags)
{
} /* size: 37 */

// <00872135> vulkan/rendercontextvulkan.cpp:154
// variables: 7
// function calls: 33
void CRenderContextVulkan::SetDefaultState()
{
	VkSampler pDefaultSamplerState; // 157
	{
		int32 nStage; // 163
	}
	{
		int32 nStage; // 171
		{
			int32 nSampler; // 173
			CPipelineVulkan::SetSeparateSampler(
						RenderShaderType_t shaderType,
						uint32 nSlot,
						VkSampler pSampler);  // 175
		}
	}
	{
		int32_t nClearCount; // 183
		Clamp<int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 183
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1260
		CPipelineVulkan::ClearUAVDescriptors(
					RenderShaderType_t shaderType,
					int32_t nClearCount);  // 184
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 185
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 186
	}
	{
		int32_t nClearCount; // 190
		Clamp<int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 190
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1260
		CPipelineVulkan::ClearUAVDescriptors(
					RenderShaderType_t shaderType,
					int32_t nClearCount);  // 191
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 192
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 193
	}
	{
		int nIndex; // 200
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 202
	}
	CVulkanObject<VkSampler_T::Get()>* this); // 157
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 198
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 206
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 206
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 213
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 25
	CRenderPipelineStats::Clear(); // 243
} /* size: 941, variables: 1, inline expansions: 13 (140 bytes) */

// <00871FDA> vulkan/rendercontextvulkan.cpp:261
// variables: 3
// function calls: 2
void CRenderContextVulkan::ResetDefaultSamplerStateIfRequired(uint32_t nDefaultSamplerId)
{
	{
		VkSampler pDefaultSamplerState; // 267
		{
			int32 nStage; // 270
			{
				int32 nSampler; // 272
				CPipelineVulkan::SetSeparateSampler(
							RenderShaderType_t shaderType,
							uint32 nSlot,
							VkSampler pSampler);  // 274
			}
		}
		CVulkanObject<VkSampler_T::Get()>* this); // 267
	}
} /* size: 129 */

// <00871F9A> vulkan/rendercontextvulkan.cpp:284
void CRenderContextVulkan::SetRenderContextFlags(uint32 nRenderContextFlags)
{
} /* size: 74 */

// <00871DDB> vulkan/rendercontextvulkan.cpp:298
// variables: 2
// function calls: 5
void CRenderContextVulkan::BeginPixEvent(Color c, const char* pEventName)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 303
		Vector4D color; // 305
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 303
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 305
	}
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 301
} /* size: 213, inline expansions: 1 (23 bytes) */

// <00881C9C> vulkan/rendercontextvulkan.cpp:311
// variable: 1
// function calls: 5
void CRenderContextVulkan::EndPixEvent()
{
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 314
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 316
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 316
	}
	CRenderContextVulkan::EndPixEvent(); // 311
} /* size: 87, inline expansions: 2 (65 bytes) */

// <00871DB3> vulkan/rendercontextvulkan.cpp:311
// variable: 1
void CRenderContextVulkan::EndPixEvent()
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 316
	}
} /* size: 0 */

// <00871D65> vulkan/rendercontextvulkan.cpp:322
void CRenderContextVulkan::PixSetMarker(Color c, const char* pMarkerName)
{
} /* size: 5 */

// <00883AA3> vulkan/rendercontextvulkan.cpp:328
void CRenderContextVulkan::MarkIssuesCommands()
{
} /* size: 25 */

// <00880BC7> vulkan/rendercontextvulkan.cpp:328
// variables: 12
// function calls: 59
void CRenderContextVulkan::MarkIssuesCommands()
{
	{
		CCommandStream* pStream; // 336
		VulkanCommandBuffer_t** ppCommandBuffer; // 338
		VkCommandBufferBeginInfo beginInfo; // 371
		VkCommandBufferInheritanceInfo commandBufferInheritanceInfo; // 376
		const char* pLabelName; // 449
		CCommandStreamBuilder::EnsureStream(); // 332
		CCommandStreamBuilder::GetCurrentStream(); // 336
		ConstructList(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 454
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Grow(
			int num);  // 193
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Init(
			int nGrowSize,
			int nInitSize);  // 161
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::CUtlFixedMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				BlockHeader_t* p,
				intp i);  // 96
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::InvalidIterator(); // 448
		ResetDbgInfo(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 455
		CUtlLinkedList(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				int growSize,
				int initSize);  // 404
		CUtlFixedLinkedList<VulkanCommandBufferAndPool_t>::CUtlFixedLinkedList(
					int growSize,
					int initSize);  // 67
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::InvalidIterator(); // 448
		CUtlLinkedList<QueryObjectInternalVulkan_t::ConstructList(); // 454
		CUtlLinkedList<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 455
		CUtlLinkedList<QueryObjectInternalVulkan_t::CUtlLinkedList(
				int growSize,
				int initSize);  // 67
		VulkanCommandBuffer_t::VulkanCommandBuffer_t(); // 340
		{
			VulkanCommandBufferType_t nCommandBufferType; // 344
			IRenderContext::IsSecondaryContext(); // 346
			{
			}
			CRenderDeviceVulkan::MemoryManager(); // 362
		}
		IRenderContext::IsSecondaryContext(); // 377
		{
			CRenderPassVulkan* pRenderPass; // 380
			RenderPassHandle_t::operator==(
					const RenderPassHandle_t& other);  // 379
			{
			}
			CRenderDeviceVulkan::RenderPassManager(); // 380
			CRenderPassVulkan::GetRenderPass(); // 381
			{
			}
			{
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 384
			CRenderPassVulkan::GetRenderPass(); // 386
			CRenderPassVulkan::GetRenderPass(); // 405
			{
				const CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& colorTargetFormats; // 412
				VkFormat nDepthStencilFormat; // 413
				uint32 nMultiSampleCount; // 416
				CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int this,
						int i);  // 52
				CRenderPassVulkan::GetColorTargetFormatsForSubPass(
								uint32 nSubPass);  // 412
				CRenderPassVulkan::GetDepthStencilFormatForSubPass(
								uint32 nSubPass);  // 413
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Count(); // 414
				CUtlMemory<VkFormat, int>::Base(); // 113
				CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Base(); // 414
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
						VkFormat nDepthStencilFormat);  // 414
				NumSamplesToRenderMultisampleType(int nMsaaValue); // 300
				NumSamplesToRenderMultisampleType(int nMsaaValue); // 417
				CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int this,
						int i);  // 54
				CRenderPassVulkan::GetMulitsampleCountForSubPass(
								uint32 nSubPass);  // 416
				CPipelineVulkan::SetMSAAState(
						uint32 nSamples,
						VkSampleMask nSampleMask);  // 418
			}
			Count(const CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int this); // 50
			CRenderPassVulkan::GetNumSubpasses(); // 408
		}
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 425
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 426
		CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 429
		CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 455
		{
			const char* pCheckPointStr; // 458
		}
		IRenderContext::IsSecondaryContext(); // 466
		{
		}
	}
} /* size: 0 */

// <00871BA5> vulkan/rendercontextvulkan.cpp:328
// variables: 17
void CRenderContextVulkan::MarkIssuesCommands()
{
	const char   __FUNCTION__; // 23048
	{
		CCommandStream* pStream; // 336
		VulkanCommandBuffer_t** ppCommandBuffer; // 338
		VkCommandBufferBeginInfo beginInfo; // 371
		VkCommandBufferInheritanceInfo commandBufferInheritanceInfo; // 376
		const char* pLabelName; // 449
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 337
		}
		{
			VulkanCommandBufferType_t nCommandBufferType; // 344
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 348
			}
		}
		{
			CRenderPassVulkan* pRenderPass; // 380
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 379
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 381
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
			}
			{
				const CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& colorTargetFormats; // 412
				VkFormat nDepthStencilFormat; // 413
				uint32 nMultiSampleCount; // 416
			}
		}
		{
			const char* pCheckPointStr; // 458
		}
	}
} /* size: 0, variables: 1 */

// <00871A4A> vulkan/rendercontextvulkan.cpp:479
// variable: 1
// function calls: 3
void CRenderContextVulkan::PrepareImage(CVulkanImage* pVulkanImage, VkImageLayout nImageState, RenderMultisampleType_t nMultiSampleType, VkImageAspectFlags nImageAspectFlags)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 481
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 481
} /* size: 139, variables: 1, inline expansions: 3 (81 bytes) */

// <0086F22B> vulkan/rendercontextvulkan.cpp:490
// variables: 28
// function calls: 167
void CRenderContextVulkan::BindRenderTargets(const RenderTargetDesc_t& renderTargetDesc)
{
	const char   __FUNCTION__; // 23021
	bool bWidthHeightSet; // 536
	int nMaxRenderTargetCount; // 537
	HRenderTexture hDepthStencil; // 627
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 492
	}
	{
		bool bColorTargetsMatch; // 505
		{
			int nTarget; // 506
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 508
		}
	}
	{
		int i; // 538
		{
			HRenderTexture hRenderTarget; // 540
			RenderColorSpace_t rtColorSpace; // 541
			CVulkanImage* pVulkanImage; // 557
			VkFormat nFormat; // 559
			const TextureSpecification_t* pTextureSpec; // 562
			RenderMultisampleType_t nMultisampleType; // 563
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 558
			}
			{
				int32 nMipLevelWidth; // 602
				int32 nMipLevelHeight; // 603
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 546
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 547
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 615
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 540
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 541
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 544
			CRenderDeviceVulkan::LazilyAllocateRenderTargets(); // 552
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 557
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
			{
				RenderTextureDimension_t nTextureDim; // 342
				bool bDimsOkay; // 343
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 483
				CTextureBase::ComputeTextureDimension(); // 342
				CTextureInfoId::GetTextureObject(); // 83
				CTextureVulkan::GetTextureResource(); // 348
			}
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 360
			CTextureInfoId::GetTextureObject(); // 83
			CTextureVulkan::GetTextureResource(); // 365
			CTextureManagerVulkan::GetTextureResource(
						HRenderTexture hTexture,
						RenderTextureDimension_t nDim,
						const char* szParamName);  // 557
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 559
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 430
			{
			}
			CTextureManagerVulkan::GetVulkanImageViewFormat(
						HRenderTexture hTexture,
						RenderColorSpace_t rtColorSpace);  // 428
			CTextureManagerVulkan::GetVulkanImageViewFormat(
						HRenderTexture hTexture,
						RenderColorSpace_t rtColorSpace);  // 559
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 562
			Max<short int>(const short int& val1,
					const short int& val2);  // 569
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 590
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 399
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 405
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 405
			CVulkanObject<VkImageView_T::Get()>* this); // 406
			CVulkanObject<VkImageView_T::Get()>* this); // 406
			CTextureManagerVulkan::GetColorTargetViewForMipLevel(
							HRenderTexture hTexture,
							RenderColorSpace_t colorSpace,
							int nMip);  // 590
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 579
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 380
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 386
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
			CTextureDesc::GetArrayCount(); // 386
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 388
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
			CTextureDesc::GetArrayCount(); // 388
			{
			}
			CVulkanObject<VkImageView_T::Get()>* this); // 389
			CVulkanObject<VkImageView_T::Get()>* this); // 389
			CVulkanObject<VkImageView_T::Get()>* this); // 393
			CVulkanObject<VkImageView_T::Get()>* this); // 393
			CTextureManagerVulkan::GetColorViewForArraySlice(
							HRenderTexture hTexture,
							RenderColorSpace_t colorSpace,
							int nSlice);  // 579
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 613
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 554
		}
	}
	{
		CVulkanImage* pVulkanImage; // 636
		const VkFormat* pFormat; // 637
		const TextureSpecification_t* pDepthTextureSpec; // 669
		RenderMultisampleType_t nMultisampleType; // 680
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
		}
		CRenderDeviceVulkan::LazilyAllocateRenderTargets(); // 631
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 636
		CInterlockedIntT<int, 4>::operator int(); // 282
		ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
		{
			RenderTextureDimension_t nTextureDim; // 342
			bool bDimsOkay; // 343
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 483
			CTextureBase::ComputeTextureDimension(); // 342
			CTextureInfoId::GetTextureObject(); // 83
			CTextureVulkan::GetTextureResource(); // 348
		}
		{
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 360
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 365
		CTextureManagerVulkan::GetTextureResource(
					HRenderTexture hTexture,
					RenderTextureDimension_t nDim,
					const char* szParamName);  // 636
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 637
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
		CTextureManagerVulkan::GetVulkanFormat(
				HRenderTexture hTexture);  // 637
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 669
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 673
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 686
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 633
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 646
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 412
		CVulkanObject<VkImageView_T::Get()>* this); // 416
		CTextureManagerVulkan::GetDepthStencilView(
					HRenderTexture hTexture);  // 646
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 655
		CTextureInfoId::GetSpec(); // 403
		CTextureBase::GetSpec(); // 655
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 655
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 657
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 442
		CTextureInfoId::GetSpec(); // 403
		CTextureBase::GetSpec(); // 446
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
		CTextureDesc::GetArrayCount(); // 446
		CTextureInfoId::GetSpec(); // 403
		CTextureBase::GetSpec(); // 448
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
		CTextureDesc::GetArrayCount(); // 448
		{
		}
		CVulkanObject<VkImageView_T::Get()>* this); // 449
		CVulkanObject<VkImageView_T::Get()>* this); // 453
		CTextureManagerVulkan::GetDepthStencilViewForArraySlice(
						HRenderTexture hTexture,
						int nSlice);  // 657
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 663
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 412
		CVulkanObject<VkImageView_T::Get()>* this); // 416
		CTextureManagerVulkan::GetDepthStencilView(
					HRenderTexture hTexture);  // 663
	}
	{
		int i; // 247
	}
	RenderTargetDesc_t::AreSrgbWriteStatesEqual(
				const RenderTargetDesc_t& other);  // 499
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 503
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 112
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 112
	RenderTargetDesc_t::operator=(
			const RenderTargetDesc_t  &);  // 528
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 233
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 233
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 234
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 234
	RenderTargetDesc_t::IsValid(); // 530
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 618
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 625
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 627
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 628
} /* size: 0, variables: 4, inline expansions: 28 (437 bytes) */

// <00883AE9> vulkan/rendercontextvulkan.cpp:693
// variable: 1
void CRenderContextVulkan::ResetLoadStoreOps()
{
	{
		int nIndex; // 695
	}
} /* size: 85 */

// <0086EDFF> vulkan/rendercontextvulkan.cpp:710
// variables: 6
// function calls: 7
void CRenderContextVulkan::UpdateImplicitRenderPass(VulkanCommandBuffer_t* pCommandBuffer, VulkanFramebufferState_t& framebufferState)
{
	const char   __FUNCTION__; // 23210
	VkRenderPass pRenderPass; // 728
	VkFramebuffer pFrameBuffer; // 732
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
	}
	CRenderDeviceVulkan::KHRDynamicRenderingEnabled(); // 721
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
			VkFormat nDepthStencilFormat);  // 751
	{
		int nIndex; // 695
	}
	CRenderContextVulkan::ResetLoadStoreOps(); // 759
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 736
} /* size: 0, variables: 3, inline expansions: 7 (340 bytes) */

// <0086EB0F> vulkan/rendercontextvulkan.cpp:769
// variables: 4
// function calls: 11
void CRenderContextVulkan::UpdateRenderTargetChangeStats()
{
	uint32 nTotalBytesPerPixel; // 772
	{
		int16 nTarget; // 773
		{
			uint32 nBytesPerPixel; // 775
		}
	}
	{
		uint32 nBytesPerPixel; // 787
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 771
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 798
} /* size: 236, variables: 1, inline expansions: 11 (105 bytes) */

// <0086EA08> vulkan/rendercontextvulkan.cpp:805
// variables: 2
// function call: 1
void CRenderContextVulkan::TransitionRenderTargetImageLayouts(VulkanCommandBuffer_t* pCommandBuffer, const VulkanFramebufferState_t& framebufferState)
{
	{
		int i; // 808
	}
	{
		VkImageLayout nDepthLayout; // 819
		CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 822
	}
} /* size: 268 */

// <00883B31> vulkan/rendercontextvulkan.cpp:835
// function calls: 4
void CRenderContextVulkan::ClampRenderArea(VkRect2D& renderArea, uint32 nWidth, uint32 nHeight)
{
	Max<int>(const int& val1,
		const int& val2);  // 838
	Max<int>(const int& val1,
		const int& val2);  // 839
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 853
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 858
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0086E9C8> vulkan/rendercontextvulkan.cpp:835
void CRenderContextVulkan::ClampRenderArea(VkRect2D& renderArea, uint32 nWidth, uint32 nHeight)
{
} /* size: 0 */

// <0086E7BF> vulkan/rendercontextvulkan.cpp:869
// variables: 2
// function calls: 5
void CRenderContextVulkan::BeginImplicitRenderPass(VulkanCommandBuffer_t* pCommandBuffer, VkFramebuffer pFramebuffer, VkRenderPass pRenderPass, const VulkanFramebufferState_t& framebufferState)
{
	uint32_t nTotalAttachments; // 871
	VkRenderPassBeginInfo renderPassBeginInfo; // 877
	Max<int>(const int& val1,
		const int& val2);  // 838
	Max<int>(const int& val1,
		const int& val2);  // 839
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 853
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 858
	CRenderContextVulkan::ClampRenderArea(
			VkRect2D& renderArea,
			uint32 nWidth,
			uint32 nHeight);  // 883
} /* size: 357, variables: 2, inline expansions: 5 (157 bytes) */

// <0086E4B5> vulkan/rendercontextvulkan.cpp:894
// variables: 4
// function calls: 9
void CRenderContextVulkan::StopCurrentRenderPass(VkCommandBuffer pCmdBuffer)
{
	const char   __FUNCTION__; // 23129
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 898
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 904
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 904
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 915
	{
		int nIndex; // 695
	}
	CRenderContextVulkan::ResetLoadStoreOps(); // 921
} /* size: 0, variables: 1, inline expansions: 9 (252 bytes) */

// <0086E0AA> vulkan/rendercontextvulkan.cpp:926
// variables: 8
// function calls: 10
void CRenderContextVulkan::UpdateDynamicRendering(VulkanCommandBuffer_t* pCommandBuffer, VulkanFramebufferState_t& framebufferState)
{
	const char   __FUNCTION__; // 23156
	VkRenderingAttachmentInfoKHR* pColorAttachments; // 942
	VkRenderingAttachmentInfoKHR depthAttachment; // 957
	VkRenderingAttachmentInfoKHR stencilAtachment; // 958
	VkRenderingInfoKHR renderingInfo; // 984
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 929
	}
	{
		int32 nTarget; // 943
	}
	CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 966
	Max<int>(const int& val1,
		const int& val2);  // 838
	Max<int>(const int& val1,
		const int& val2);  // 839
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 853
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 858
	CRenderContextVulkan::ClampRenderArea(
			VkRect2D& renderArea,
			uint32 nWidth,
			uint32 nHeight);  // 990
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
			VkFormat nDepthStencilFormat);  // 1002
} /* size: 0, variables: 5, inline expansions: 10 (423 bytes) */

// <0086E089> vulkan/rendercontextvulkan.cpp:1026
VkPrimitiveTopology RenderPrimitiveTypeToTopology(RenderPrimitiveType_t type)
{
} /* size: 0 */

// <0086A7D4> vulkan/rendercontextvulkan.cpp:1033
// variables: 50
// function calls: 195
void CRenderContextVulkan::ResolveUsingShaders(CVulkanImage* pSrcTexture, CVulkanImage* pDstTexture, const TextureSpecification_t* pSrcTextureSpec, const TextureSpecification_t* pDstTextureSpec, Rect_t* pSrcRect, int nDestX, int nDestY, HRenderTexture hDestTexture, bool bResolveDepth, RenderColorSpace_t nColorSpace, VkSurfaceTransformFlagsKHR nRotation)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 1037
	const VkFormat* pDstFormat; // 1039
	const char   __FUNCTION__; // 23075
	bool bDstIsDepth; // 1041
	bool bDstHasStencilAspect; // 1042
	bool bRotated; // 1043
	bool bSrcHasStencilAspect; // 1044
	VkImageLayout nDstLayout; // 1046
	VkSampleCountFlagBits nSampleCountFlagBits; // 1056
	VkImageView pInputResource; // 1061
	RenderShaderHandle_t hResolveVS; // 1071
	RenderInputLayout_t hResolveLayout; // 1072
	VkSampleCountFlagBits nSrcSampleCountFlagBits; // 1074
	uint32 nSrcSampleCount; // 1076
	StandardShaderId_t nResolveShader; // 1077
	RenderShaderHandle_t hResolvePS; // 1094
	VkViewport viewport; // 1120
	VkViewport origViewport; // 1127
	VkRect2D scissor; // 1128
	const bool  bExtendedDynamicState; // 1134
	bool bDiscardTarget; // 1149
	VulkanFramebufferState_t origFbState; // 1151
	VulkanFramebufferState_t fbOverrideState; // 1152
	Vector4D vTexCoordScaleOffset; // 1212
	union DescriptorBindingUnion_t& textureBinding; // 1225
	union DescriptorBindingUnion_t prevTextureAttach; // 1226
	VkDescriptorImageInfo& samplerBinding; // 1230
	VkDescriptorImageInfo prevSamplerAttach; // 1231
	Vector2D vTexCoords; // 1246
	CDynamicVertexData<ResolveVertex_t> vb; // 1285
	CDynamicIndexData<short unsigned int> ib; // 1301
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1040
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1080
	}
	{
		RsDepthStencilStateDesc_t stateDesc; // 1105
		RsDepthStencilStateHandle_t hDs; // 1111
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 251
		RsStencilStateDesc_t::RsStencilStateDesc_t(); // 433
		RsStencilStateDesc_t::RsStencilStateDesc_t(
					bool bStencilEnable,
					uint8 nStencilReadMask,
					uint8 nStencilWriteMask,
					RsStencilOp_t frontStencilFailOp,
					RsStencilOp_t frontStencilDepthFailOp,
					RsStencilOp_t frontStencilPassOp,
					RsComparison_t frontStencilFunc,
					RsStencilOp_t backStencilFailOp,
					RsStencilOp_t backStencilDepthFailOp,
					RsStencilOp_t backStencilPassOp,
					RsComparison_t backStencilFunc);  // 356
		RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(
						bool bDepthTestEnable,
						bool bDepthWriteEnable,
						RsComparison_t depthFunc,
						bool bStencilEnable,
						uint8 nStencilReadMask,
						uint8 nStencilWriteMask,
						RsStencilOp_t frontStencilFailOp,
						RsStencilOp_t frontStencilDepthFailOp,
						RsStencilOp_t frontStencilPassOp,
						RsComparison_t frontStencilFunc,
						RsStencilOp_t backStencilFailOp,
						RsStencilOp_t backStencilDepthFailOp,
						RsStencilOp_t backStencilPassOp,
						RsComparison_t backStencilFunc);  // 429
		DefaultDepthStencilStateDesc(void); // 424
		DefaultDepthStencilStateDesc(void); // 435
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 435
		RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(); // 1105
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1106
	}
	{
		VkImageView pTargetView; // 1156
		VkFormat nDstFormat; // 1157
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1156
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 370
		CVulkanObject<VkImageView_T::Get()>* this); // 375
		CVulkanObject<VkImageView_T::Get()>* this); // 375
		CTextureManagerVulkan::GetColorTargetView(
					HRenderTexture hTexture,
					RenderColorSpace_t colorSpace);  // 1156
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1165
	}
	{
		VkImageView pTargetView; // 1181
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1181
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 412
		CVulkanObject<VkImageView_T::Get()>* this); // 416
		CTextureManagerVulkan::GetDepthStencilView(
					HRenderTexture hTexture);  // 1181
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1183
	}
	{
		CSamplerStateDesc bilinearSampler; // 1234
		CVulkanSamplerObject* pVulkanSamplerObject; // 1241
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 1240
		CVulkanObject<VkSampler_T::Get()>* this); // 1242
	}
	{
		float flAngle; // 1255
		float flCosTheta; // 1268
		float flSinTheta; // 1269
		{
			int nCoord; // 1270
			{
				Vector2D vTexCoord; // 1272
				Vector2D::Vector2D(); // 1272
				Vector2D::operator=(
						const Vector2D& vOther);  // 1275
			}
		}
	}
	{
		int nCoord; // 1278
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 1037
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1039
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1039
	ComputeAASettings(RenderMultisampleType_t nType,
				VkSampleCountFlagBits* pSampleCount);  // 1057
	CPipelineVulkan::MarkPipelineDirty(); // 1193
	CPipelineVulkan::SetMSAAState(
			uint32 nSamples,
			VkSampleMask nSampleMask);  // 1058
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1064
	CRenderDeviceVulkan::GetStandardShader(
				StandardShaderId_t id);  // 1071
	ComputeAASettings(RenderMultisampleType_t nType,
				VkSampleCountFlagBits* pSampleCount);  // 1075
	CRenderDeviceVulkan::GetStandardLayout(
				StandardLayoutId_t id);  // 1072
	CRenderDeviceVulkan::GetStandardShader(
				StandardShaderId_t id);  // 1094
	ReadVolatileMemory<int>(const int* pPtr); // 22
	CRenderDeviceVulkan::AsyncCompileHelper(); // 55
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 32
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 35
	CAsyncCompileHelperVulkan::BEnabled(); // 35
	{
		const bool  bForceCreateNow; // 39
	}
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 44
	{
		int* _pCrash; // 62
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 62
	ForceLoadShader(CShaderVulkanBase* pShader); // 3325
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 1097
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 1098
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 1099
	CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 1134
	CPipelineVulkan::MarkPipelineDirty(); // 1200
	CPipelineVulkan::SetViewportState(
			uint32 nNumViewports);  // 1139
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 40
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
	VulkanFramebufferState_t::VulkanFramebufferState_t(
				const VulkanFramebufferState_t& rhs);  // 1151
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 30
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 30
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 31
	VulkanFramebufferState_t::VulkanFramebufferState_t(); // 1152
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 45
	VulkanFramebufferState_t::operator=(
			const VulkanFramebufferState_t& rhs);  // 1204
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 1212
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1252
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1252
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1252
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 1252
	CDynamicVertexData<ResolveVertex_t>::Lock(
		int nVertexCount);  // 680
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<ResolveVertex_t>::ClearVertexFields(); // 171
	Vector::Vector(); // 255
	Vector4D::Vector4D(); // 255
	ClearVertex_t::ClearVertex_t(); // 209
	Vector2D::Vector2D(); // 209
	ResolveVertex_t::ResolveVertex_t(); // 165
	CVertexDataBase<ResolveVertex_t>::CVertexDataBase(); // 673
	CDynamicVertexData<ResolveVertex_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1285
	Vector4D::operator=(
			const Vector4D& vOther);  // 1286
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1287
	Vector2D::operator=(
			const Vector2D& vOther);  // 1288
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 209
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	ResolveVertex_t::operator=(
			const ResolveVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ResolveVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ResolveVertex_t>::AdvanceVertex(); // 1289
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1290
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 209
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	ResolveVertex_t::operator=(
			const ResolveVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ResolveVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ResolveVertex_t>::AdvanceVertex(); // 1292
	Vector2D::operator=(
			const Vector2D& vOther);  // 1291
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1293
	Vector2D::operator=(
			const Vector2D& vOther);  // 1294
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 209
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	ResolveVertex_t::operator=(
			const ResolveVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ResolveVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ResolveVertex_t>::AdvanceVertex(); // 1295
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1296
	Vector2D::operator=(
			const Vector2D& vOther);  // 1297
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 209
	Vector2D::operator=(
			const Vector2D& vOther);  // 209
	ResolveVertex_t::operator=(
			const ResolveVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ResolveVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ResolveVertex_t>::AdvanceVertex(); // 1298
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 2806
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 2807
	CRenderContextVulkan::UnlockDynamicVertexBuffer(
					DynamicVertexBufferHandle_t hVertexBuffer,
					int nWrittenSizeInBytes);  // 768
	CDynamicVertexData<ResolveVertex_t>::Unlock(); // 760
	CDynamicVertexData<ResolveVertex_t>::Unlock(); // 639
	CRenderContextVulkan::BindVertexBuffer(
			int nSlot,
			DynamicVertexBufferHandle_t hVertexBuffer,
			int nOffset,
			int nStride);  // 791
	CDynamicVertexData<ResolveVertex_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<ResolveVertex_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 1299
	CDynamicIndexData<short unsigned int>::Lock(
		int nIndexCount);  // 580
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
	CDynamicIndexData<short unsigned int>::CDynamicIndexData(
				IRenderContext* pRenderContext,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 1301
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 1302
	{
	}
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 1303
	{
	}
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 1304
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1068
	CDynamicIndexData<short unsigned int>::Unlock(); // 540
	CRenderContextVulkan::BindIndexBuffer(
			DynamicIndexBufferHandle_t hIndexBuffer,
			int nOffset);  // 690
	CDynamicIndexData<short unsigned int>::Bind(
		int nOffset);  // 541
	CDynamicIndexData<short unsigned int>::UnlockAndBind(
			int nBindOffset);  // 1305
	CDynamicIndexData<short unsigned int>::Unlock(); // 607
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
	CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 1321
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 45
	VulkanFramebufferState_t::operator=(
			const VulkanFramebufferState_t& rhs);  // 1320
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 2806
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 2807
	CRenderContextVulkan::UnlockDynamicVertexBuffer(
					DynamicVertexBufferHandle_t hVertexBuffer,
					int nWrittenSizeInBytes);  // 768
	CDynamicVertexData<ResolveVertex_t>::Unlock(); // 760
	CDynamicVertexData<ResolveVertex_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<ResolveVertex_t>::~CVertexDataBase(); // 194
	CVertexDataBase<ResolveVertex_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<ResolveVertex_t>::~CDynamicVertexData(); // 1321
} /* size: 0, variables: 31, inline expansions: 151 (7236 bytes) */

// <0086952A> vulkan/rendercontextvulkan.cpp:1324
// variables: 21
// function calls: 67
void CRenderContextVulkan::ResolveDepthStencilTarget(Rect_t* pSrcRect, int nDestX, int nDestY, HRenderTexture hDestTexture)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 1331
	const TextureSpecification_t* pDstTextureSpec; // 1347
	const TextureSpecification_t* pSrcTextureSpec; // 1351
	CVulkanImage* pDstImage; // 1370
	CVulkanImage* pSrcImage; // 1371
	bool bDstIsDepthFormat; // 1373
	bool bDstHasStencil; // 1374
	const char   __FUNCTION__; // 23237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1378
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1386
	}
	{
		const VkFormat* pSrcVulkanFormat; // 1391
		bool bSrcHasStencil; // 1392
		VkImageCopy region; // 1412
		VkImageLayout nSrcLayout; // 1439
		VkImageLayout nDstLayout; // 1440
		{
			char szCheckpointBuffer; // 1441
			const char* pCheckPointStr; // 1441
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1391
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
		CTextureManagerVulkan::GetVulkanFormat(
				HRenderTexture hTexture);  // 1391
		CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 1441
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 1327
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 1331
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1338
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1338
	CRenderDeviceVulkan::LazilyAllocateRenderTargets(); // 1342
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1347
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1351
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1367
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1368
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1370
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 1370
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1371
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 1371
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1373
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1373
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1374
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1374
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1387
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1386
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1344
} /* size: 0, variables: 8, inline expansions: 51 (1286 bytes) */

// <00867FFD> vulkan/rendercontextvulkan.cpp:1450
// variables: 32
// function calls: 69
void CRenderContextVulkan::ResolveRenderTarget(int nRenderTargetIndex, Rect_t* pSrcRect, int nDestX, int nDestY, HRenderTexture hDestTexture)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 1456
	const TextureSpecification_t* pDstTextureSpec; // 1472
	const TextureSpecification_t* pSrcTextureSpec; // 1476
	const VkFormat* pSrcFormat; // 1496
	const VkFormat* pDstFormat; // 1497
	const char   __FUNCTION__; // 23075
	CVulkanImage* pDstImage; // 1501
	CVulkanImage* pSrcImage; // 1502
	bool bNotFullRect; // 1503
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1499
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1509
	}
	{
		VkImageResolve region; // 1519
		VkImageLayout nSrcLayout; // 1544
		VkImageLayout nDstLayout; // 1545
		{
			char szCheckpointBuffer; // 1546
			const char* pCheckPointStr; // 1546
		}
		Min<int>(const int& val1,
			const int& val2);  // 1532
		Min<int>(const int& val1,
			const int& val2);  // 1533
		CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 1546
	}
	{
		uint32 nSrcBytesPerTexel; // 1552
		uint32 nDstBytesPerTexel; // 1553
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1557
		}
		{
			VkImageLayout nSrcLayout; // 1567
			VkImageLayout nDstLayout; // 1568
			{
				VkImageCopy region; // 1573
				{
					char szCheckpointBuffer; // 1598
					const char* pCheckPointStr; // 1598
				}
				Min<int>(const int& val1,
					const int& val2);  // 1586
				Min<int>(const int& val1,
					const int& val2);  // 1587
				CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 1598
			}
			{
				VkImageBlit region; // 1604
				{
					char szCheckpointBuffer; // 1636
					const char* pCheckPointStr; // 1636
				}
				CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 1636
			}
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1558
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 1557
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 1453
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 1456
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1463
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1463
	CRenderDeviceVulkan::LazilyAllocateRenderTargets(); // 1467
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1472
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1476
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1492
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1493
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1496
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1496
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1497
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1497
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 1501
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1501
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1502
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 1502
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1509
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1469
} /* size: 0, variables: 9, inline expansions: 49 (1400 bytes) */

// <0086704A> vulkan/rendercontextvulkan.cpp:1650
// variables: 31
// function calls: 51
void CRenderContextVulkan::CopyTexture(HRenderTexture hSrcTexture, HRenderTexture hDestTexture, Rect_t* pSrcRect, int nDestX, int nDestY, uint nSrcMipSlice, uint nSrcArraySlice, uint nDstMipSlice, uint nDstArraySlice, CopyTextureFlags_t nFlags)
{
	CVulkanImage* pSrcImage; // 1656
	CVulkanImage* pDestImage; // 1657
	const TextureSpecification_t* pSrcTextureSpec; // 1658
	const TextureSpecification_t* pDstTextureSpec; // 1659
	const VkFormat* pSrcFormat; // 1660
	const VkFormat* pDstFormat; // 1661
	const char   __FUNCTION__; // 22859
	VulkanCommandBuffer_t* pCommandBuffer; // 1669
	VkImageLayout nSrcLayout; // 1671
	VkImageLayout nDstLayout; // 1672
	VkImageAspectFlags nSrcAspect; // 1674
	VkImageAspectFlags nDstAspect; // 1675
	int32 nSrcMipWidth; // 1693
	int32 nSrcMipHeight; // 1694
	int nSrcWidth; // 1713
	int nSrcHeight; // 1714
	int32 nStartX; // 1715
	int32 nStartY; // 1716
	int32 nDstWidth; // 1729
	int32 nDstHeight; // 1730
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1665
	}
	{
		uint m; // 1695
	}
	{
		uint32 m; // 1731
		Max<int>(const int& val1,
			const int& val2);  // 1733
		Max<int>(const int& val1,
			const int& val2);  // 1734
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1741
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1746
	}
	{
		VkImageBlit region; // 1755
	}
	{
		VkImageCopy region; // 1799
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1652
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1652
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1652
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1656
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 360
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 1656
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1657
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 1657
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1658
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1659
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1660
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1661
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1660
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1661
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 1669
} /* size: 0, variables: 20, inline expansions: 39 (1263 bytes) */

// <00865F0B> vulkan/rendercontextvulkan.cpp:1824
// variables: 38
// function calls: 53
void CRenderContextVulkan::CopyFromVolumeTexture(HRenderTexture hSrcTexture, HRenderTexture hDestTexture, Rect3D_t* pSrcRect3D, int nDestX, int nDestY, int nDestZ, uint nSrcMipSlice, uint nSrcArraySlice, uint nDstMipSlice, uint nDstArraySlice, CopyTextureFlags_t nFlags)
{
	CVulkanImage* pSrcImage; // 1832
	CVulkanImage* pDestImage; // 1833
	const TextureSpecification_t* pSrcTextureSpec; // 1834
	const TextureSpecification_t* pDstTextureSpec; // 1835
	const VkFormat* pSrcFormat; // 1836
	const VkFormat* pDstFormat; // 1837
	const char   __FUNCTION__; // 23129
	VulkanCommandBuffer_t* pCommandBuffer; // 1845
	VkImageLayout nSrcLayout; // 1847
	VkImageLayout nDstLayout; // 1848
	VkImageAspectFlags nSrcAspect; // 1850
	VkImageAspectFlags nDstAspect; // 1851
	int32 nSrcMipWidth; // 1869
	int32 nSrcMipHeight; // 1870
	int32 nSrcMipDepth; // 1871
	int nSrcWidth; // 1893
	int nSrcHeight; // 1894
	int nSrcDepth; // 1895
	int32 nStartX; // 1896
	int32 nStartY; // 1897
	int32 nStartZ; // 1898
	int32 nDstWidth; // 1913
	int32 nDstHeight; // 1914
	int32 nDstDepth; // 1915
	VkImageCopy region; // 1942
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1841
	}
	{
		uint m; // 1872
	}
	{
		uint32 m; // 1916
		Max<int>(const int& val1,
			const int& val2);  // 1918
		Max<int>(const int& val1,
			const int& val2);  // 1919
		Max<int>(const int& val1,
			const int& val2);  // 1920
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1927
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1932
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1940
	}
	{
		char szCheckpointBuffer; // 1962
		const char* pCheckPointStr; // 1962
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1828
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1828
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1828
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 360
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 1832
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1832
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1833
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 1833
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1834
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1835
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1837
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1836
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1836
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 1837
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 1845
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 1962
} /* size: 0, variables: 25, inline expansions: 40 (1140 bytes) */

// <00864876> vulkan/rendercontextvulkan.cpp:1970
// variables: 24
// function calls: 74
void CRenderContextVulkan::SubmitSecondaryDisplayList(CDisplayList* pDisplayList, bool bDontFreeAfterExecute)
{
	CCommandStream* pSecondaryStream; // 1972
	const char   __FUNCTION__; // 23264
	VulkanCommandBuffer_t* pSecondaryCommandBuffer; // 1980
	CCommandStream* pPrimaryStream; // 1983
	VulkanCommandBuffer_t* pCommandBuffer; // 1985
	CommandDispatchCommandStream_t cmd; // 2060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1982
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1984
	}
	{
		VulkanCommandBufferAndPool_t secondaryCommandBuffer; // 1993
		{
			short unsigned int nQueryIndex; // 2005
			CUtlLinkedList<QueryObjectInternalVulkan_t::Head(); // 2005
			CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<QueryObjectInternalVulkan_t::operator[](
					short unsigned int i);  // 2007
			CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
					short unsigned int i);  // 482
			CUtlLinkedList<QueryObjectInternalVulkan_t::Element(
				short unsigned int i);  // 825
			CopyConstruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory,
									QueryObjectInternalVulkan_t* const& src);  // 825
			CUtlLinkedList<QueryObjectInternalVulkan_t::InsertBefore(
					short unsigned int before,
					QueryObjectInternalVulkan_t* const& src);  // 856
			CUtlLinkedList<QueryObjectInternalVulkan_t::AddToTail(
					QueryObjectInternalVulkan_t* const& src);  // 2007
			CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<QueryObjectInternalVulkan_t::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<QueryObjectInternalVulkan_t::Next(
				short unsigned int i);  // 2005
		}
		{
			char szNewViewName; // 2019
			char szNewLayerName; // 2020
			char* szNewNames; // 2021
			char szCurViewName; // 2023
			char szCurLayerName; // 2024
			char* szCurNames; // 2025
			int nCurNumSegmentNames; // 2027
			int nNewNumSegmentNames; // 2028
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 2028
			strstr(char* __haystack,
				const char* __needle);  // 255
			V_strstr(char* s1,
				const char* search);  // 2032
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsValidIterator(
				const Iterator_t& it);  // 81
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsValidIterator(
				const Iterator_t& it);  // 82
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 85
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::GetIndex(
			const Iterator_t& it);  // 86
		{
			BlockHeader_t* pbh; // 88
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 90
		}
		{
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsIdxAfter(
				intp i,
				const Iterator_t& it);  // 591
		IsValidIndex(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
				long long int i);  // 977
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](
				intp i);  // 367
		InternalElement(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				long long int i);  // 1011
		{
		}
		LinkBefore(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				long long int before,
				long long int elem);  // 822
		CopyConstruct<VulkanCommandBufferAndPool_t>(VulkanCommandBufferAndPool_t* pMemory,
								const VulkanCommandBufferAndPool_t& src);  // 825
		InsertBefore(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				long long int before,
				const VulkanCommandBufferAndPool_t& src);  // 856
		AddToTail(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				const VulkanCommandBufferAndPool_t& src);  // 1997
		CUtlLinkedList<QueryObjectInternalVulkan_t::Count(); // 2003
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 643
		CUtlLinkedList<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 650
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::InvalidIterator(); // 648
		CUtlLinkedList<QueryObjectInternalVulkan_t::Purge(); // 2009
		CBufferString::IsEmpty(); // 2014
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 2048
		V_strcpy_safe<255>(char& pDest,
					const char* pSrc);  // 2048
		ValidateAlignment<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::~CUtlMemory(); // 462
		CUtlLinkedList<QueryObjectInternalVulkan_t::~CUtlLinkedList(); // 67
		{
			BlockHeader_t* pbh; // 338
			{
				BlockHeader_t* pFree; // 340
			}
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Purge(); // 167
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::~CUtlFixedMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 400
		CUtlFixedLinkedList<VulkanCommandBufferAndPool_t>::~CUtlFixedLinkedList(); // 67
		VulkanCommandBuffer_t::~VulkanCommandBuffer_t(); // 2054
	}
	IRenderContext::IsSecondaryContext(); // 1976
	CCommandStream::IsFromPrimaryContext(); // 1978
	CCommandStreamBuilder::GetCurrentStream(); // 1983
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandDispatchCommandStream_t, 7, false>::CommandHelper_t(); // 192
	CommandDispatchCommandStream_t::CommandDispatchCommandStream_t(); // 2060
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandDispatchCommandStream_t>(
						const CommandDispatchCommandStream_t& obj);  // 2062
} /* size: 0, variables: 6, inline expansions: 15 (572 bytes) */

// <00863855> vulkan/rendercontextvulkan.cpp:2066
// variables: 10
// function calls: 60
void CRenderContextVulkan::DetachCommandList()
{
	CCommandStream* pStream; // 2068
	bool bIsEmptyCommandStream; // 2069
	const char   __FUNCTION__; // 23021
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 2074
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2073
		}
		{
			CommandReturn_t cmd; // 2080
			CommandBase_t::CommandBase_t(
					int nOpCode,
					bool bSkipOnLostDevice,
					int nCmdSizeInBytes);  // 117
			CommandHelper_t<CommandReturn_t, 0, false>::CommandHelper_t(); // 139
			CommandReturn_t::CommandReturn_t(); // 2080
			CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
			CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
			operator new(size_t size); // 133
			Alloc(void); // 328
			AllocateChunk(void); // 690
			CCommandStreamBuilder::EnsureStream(); // 695
			{
				CommandJump_t cmd; // 705
				CommandBase_t::CommandBase_t(
						int nOpCode,
						bool bSkipOnLostDevice,
						int nCmdSizeInBytes);  // 117
				CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
				CommandJump_t::CommandJump_t(); // 705
				CCommandStreamBuilder::Store<CommandJump_t>(
							CommandJump_t obj);  // 707
			}
			CCommandStreamBuilder::GrowForCapacity(
					int nNumBytes);  // 681
			CCommandStreamBuilder::EnsureCapacity(
					int nNumBytes);  // 530
			CCommandStreamBuilder::WriteCmd<CommandReturn_t>(
							const CommandReturn_t& obj);  // 2081
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2086
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2118
		}
		IRenderContext::IsSecondaryContext(); // 2105
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 2111
		CUtlVectorBase<DynamicVertexBufferHandle_t__::Count(); // 2814
		CUtlMemory<DynamicVertexBufferHandle_t__::Base(); // 112
		CUtlVectorBase<DynamicVertexBufferHandle_t__::Base(); // 2816
		CUtlVectorBase<DynamicVertexBufferHandle_t__::RemoveAll(); // 2817
		CRenderContextVulkan::DestroyAllDynamicVertexBuffers(); // 2113
		CUtlVectorBase<DynamicIndexBufferHandle_t__::Count(); // 3106
		CUtlVectorBase<DynamicIndexBufferHandle_t__::RemoveAll(); // 3109
		CUtlMemory<DynamicIndexBufferHandle_t__::Base(); // 112
		CUtlVectorBase<DynamicIndexBufferHandle_t__::Base(); // 3108
		CRenderContextVulkan::DestroyAllDynamicIndexBuffers(); // 2114
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2130
		WordSwapC<short unsigned int>(short unsigned int w); // 268
		CBigEndianValue<short unsigned int>::operator=(
				short unsigned int val);  // 2132
		WordSwapC<short unsigned int>(short unsigned int w); // 268
		CBigEndianValue<short unsigned int>::operator=(
				short unsigned int val);  // 2133
		DWordSwapC<unsigned int>(unsigned int dw); // 272
		CBigEndianValue<unsigned int>::operator=(
				unsigned int val);  // 2134
		DWordSwapC<unsigned int>(unsigned int dw); // 272
		CBigEndianValue<unsigned int>::operator=(
				unsigned int val);  // 2135
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 23
		CRenderPipelineStats::operator=(
				const CRenderPipelineStats& rhs);  // 2136
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 671
		CBufferStringN<64>::operator=(
				const char* pSrc);  // 472
		CCommandStream::SetDebugString(
				const char* pDebugString);  // 2145
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 671
		CBufferStringN<64>::operator=(
				const char* pSrc);  // 472
		CCommandStream::SetDebugString(
				const char* pDebugString);  // 2139
		IRenderContext::IsSecondaryContext(); // 2161
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2168
	}
	CCommandStreamBuilder::HasStreamStarted(); // 2069
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 4493
	CRenderContextVulkan::DestroyDynamicMemoryPools(); // 2173
	CCommandStreamBuilder::Reset(); // 2184
} /* size: 0, variables: 3, inline expansions: 5 (80 bytes) */

// <0086381A> vulkan/rendercontextvulkan.cpp:2191
// variable: 1
bool IsFullViewport(const RenderViewport_t& viewport, HRenderTexture hTexture)
{
	const CTextureDesc* pDesc; // 2196
} /* size: 0, variables: 1 */

// <00861176> vulkan/rendercontextvulkan.cpp:2203
// variables: 20
// function calls: 129
void CRenderContextVulkan::ClearColorUsingShaders(int nTarget, const Vector4D& clearColor, int nStencilBitTest, int nStencilBitValue)
{
	void* pOldBlendState; // 2206
	uint32 oldMultisampleMask; // 2207
	RenderCullMode_t oldCullMode; // 2208
	float oldBlendFactor; // 2209
	const CShaderVulkanBase* pOldShader; // 2212
	const InputLayoutVulkan_t* pOldInputLayout; // 2213
	VulkanCommandBuffer_t* pCommandBuffer; // 2219
	RenderShaderHandle_t hClearVS; // 2221
	RenderInputLayout_t hClearLayout; // 2222
	VulkanFramebufferState_t fbOverrideState; // 2256
	CDynamicVertexData<ClearVertex_t> vb; // 2268
	CDynamicIndexData<short unsigned int> ib; // 2280
	{
		uint i; // 2214
		CPipelineVulkan::GetShader(
				RenderShaderType_t shaderType);  // 2216
	}
	{
		RsDepthStencilStateDesc_t stateDesc; // 2236
		RsDepthStencilStateHandle_t hDs; // 2244
		DepthStencilStateVulkan_t* pDepthStencilState; // 2245
		int nStencilRef; // 2246
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 251
		RsStencilStateDesc_t::RsStencilStateDesc_t(); // 433
		RsStencilStateDesc_t::RsStencilStateDesc_t(
					bool bStencilEnable,
					uint8 nStencilReadMask,
					uint8 nStencilWriteMask,
					RsStencilOp_t frontStencilFailOp,
					RsStencilOp_t frontStencilDepthFailOp,
					RsStencilOp_t frontStencilPassOp,
					RsComparison_t frontStencilFunc,
					RsStencilOp_t backStencilFailOp,
					RsStencilOp_t backStencilDepthFailOp,
					RsStencilOp_t backStencilPassOp,
					RsComparison_t backStencilFunc);  // 356
		RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(
						bool bDepthTestEnable,
						bool bDepthWriteEnable,
						RsComparison_t depthFunc,
						bool bStencilEnable,
						uint8 nStencilReadMask,
						uint8 nStencilWriteMask,
						RsStencilOp_t frontStencilFailOp,
						RsStencilOp_t frontStencilDepthFailOp,
						RsStencilOp_t frontStencilPassOp,
						RsComparison_t frontStencilFunc,
						RsStencilOp_t backStencilFailOp,
						RsStencilOp_t backStencilDepthFailOp,
						RsStencilOp_t backStencilPassOp,
						RsComparison_t backStencilFunc);  // 429
		DefaultDepthStencilStateDesc(void); // 424
		DefaultDepthStencilStateDesc(void); // 435
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 435
		RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(); // 2236
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2237
		RsStencilStateDesc_t::SetStencilEnabled(
					bool bEnable);  // 2240
	}
	{
		int i; // 2298
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2210
	CPipelineVulkan::GetBoundInputLayout(); // 2213
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 2219
	CRenderDeviceVulkan::GetStandardShader(
				StandardShaderId_t id);  // 2221
	CRenderDeviceVulkan::GetStandardLayout(
				StandardLayoutId_t id);  // 2222
	CRenderDeviceVulkan::GetStandardShader(
				StandardShaderId_t id);  // 2225
	ReadVolatileMemory<int>(const int* pPtr); // 22
	CRenderDeviceVulkan::AsyncCompileHelper(); // 55
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 32
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 35
	CAsyncCompileHelperVulkan::BEnabled(); // 35
	{
		const bool  bForceCreateNow; // 39
	}
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 44
	{
		int* _pCrash; // 62
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 62
	ForceLoadShader(CShaderVulkanBase* pShader); // 3325
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 2225
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 2226
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 2227
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 40
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 39
	VulkanFramebufferState_t::VulkanFramebufferState_t(
				const VulkanFramebufferState_t& rhs);  // 2256
	CDynamicVertexData<ClearVertex_t>::Lock(
		int nVertexCount);  // 680
	Vector::Vector(); // 255
	Vector4D::Vector4D(); // 255
	ClearVertex_t::ClearVertex_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<ClearVertex_t>::ClearVertexFields(); // 171
	CVertexDataBase<ClearVertex_t>::CVertexDataBase(); // 673
	CDynamicVertexData<ClearVertex_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 2268
	Vector4D::operator=(
			const Vector4D& vOther);  // 2269
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 2271
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2270
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2272
	{
	}
	{
	}
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 270
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 355
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 2273
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2274
	{
	}
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 270
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 355
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 2275
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2276
	{
	}
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 270
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 355
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 2277
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 2806
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 2807
	CRenderContextVulkan::UnlockDynamicVertexBuffer(
					DynamicVertexBufferHandle_t hVertexBuffer,
					int nWrittenSizeInBytes);  // 768
	CDynamicVertexData<ClearVertex_t>::Unlock(); // 760
	CDynamicVertexData<ClearVertex_t>::Unlock(); // 639
	CRenderContextVulkan::BindVertexBuffer(
			int nSlot,
			DynamicVertexBufferHandle_t hVertexBuffer,
			int nOffset,
			int nStride);  // 791
	CDynamicVertexData<ClearVertex_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<ClearVertex_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 2278
	CDynamicIndexData<short unsigned int>::Lock(
		int nIndexCount);  // 580
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
	CDynamicIndexData<short unsigned int>::CDynamicIndexData(
				IRenderContext* pRenderContext,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 2280
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 2281
	{
	}
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 2282
	{
	}
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 2283
	CDynamicIndexData<short unsigned int>::Unlock(); // 540
	CRenderContextVulkan::BindIndexBuffer(
			DynamicIndexBufferHandle_t hIndexBuffer,
			int nOffset);  // 690
	CDynamicIndexData<short unsigned int>::Bind(
		int nOffset);  // 541
	CDynamicIndexData<short unsigned int>::UnlockAndBind(
			int nBindOffset);  // 2284
	CDynamicIndexData<short unsigned int>::Unlock(); // 607
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
	CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 2306
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 418
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 419
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 420
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 421
	CRenderContextBase::SetBlendStateInternal(
				void* pBS,
				const float* pBlendFactor,
				uint32 nMultisampleMask);  // 2292
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 2806
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 2807
	CRenderContextVulkan::UnlockDynamicVertexBuffer(
					DynamicVertexBufferHandle_t hVertexBuffer,
					int nWrittenSizeInBytes);  // 768
	CDynamicVertexData<ClearVertex_t>::Unlock(); // 760
	CDynamicVertexData<ClearVertex_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<ClearVertex_t>::~CVertexDataBase(); // 194
	CVertexDataBase<ClearVertex_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<ClearVertex_t>::~CDynamicVertexData(); // 2306
} /* size: 0, variables: 12, inline expansions: 116 (6219 bytes) */

// <0085F4B6> vulkan/rendercontextvulkan.cpp:2308
// variables: 9
// function calls: 99
void CRenderContextVulkan::ClearDepthUsingShaders(int nClearFlags, float32 flDepth, uint8 nStencil)
{
	RenderShaderHandle_t hClearVS; // 2310
	RenderInputLayout_t hClearLayout; // 2311
	StandardDepthStencilStateId_t id; // 2321
	RenderViewport_t saveViewport; // 2334
	RenderViewport_t tmpViewport; // 2336
	CDynamicVertexData<ClearVertex_t> vb; // 2341
	CDynamicIndexData<short unsigned int> ib; // 2353
	CRenderDeviceVulkan::GetStandardShader(
				StandardShaderId_t id);  // 2310
	CRenderDeviceVulkan::GetStandardLayout(
				StandardLayoutId_t id);  // 2311
	CRenderDeviceVulkan::GetStandardShader(
				StandardShaderId_t id);  // 2314
	ReadVolatileMemory<int>(const int* pPtr); // 22
	CRenderDeviceVulkan::AsyncCompileHelper(); // 55
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 32
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 35
	CAsyncCompileHelperVulkan::BEnabled(); // 35
	{
		const bool  bForceCreateNow; // 39
	}
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 44
	{
		int* _pCrash; // 62
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 62
	ForceLoadShader(CShaderVulkanBase* pShader); // 3325
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 2314
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 2315
	CRenderContextVulkan::BindShader(
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 2316
	CRenderDeviceVulkan::GetStandardDepthStencilState(
					StandardDepthStencilStateId_t id);  // 2331
	CDynamicVertexData<ClearVertex_t>::Lock(
		int nVertexCount);  // 680
	Vector::Vector(); // 255
	Vector4D::Vector4D(); // 255
	ClearVertex_t::ClearVertex_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<ClearVertex_t>::ClearVertexFields(); // 171
	CVertexDataBase<ClearVertex_t>::CVertexDataBase(); // 673
	CDynamicVertexData<ClearVertex_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 2341
	RenderViewport_t::RenderViewport_t(); // 2334
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 2342
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2343
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 2344
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2345
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 2346
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2347
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 2348
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 2349
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 255
	Vector4D::operator=(
			const Vector4D& vOther);  // 255
	ClearVertex_t::operator=(
			const ClearVertex_t  &);  // 355
	{
	}
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<ClearVertex_t>::AdvanceVertex(); // 2350
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 2806
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 2807
	CRenderContextVulkan::UnlockDynamicVertexBuffer(
					DynamicVertexBufferHandle_t hVertexBuffer,
					int nWrittenSizeInBytes);  // 768
	CDynamicVertexData<ClearVertex_t>::Unlock(); // 760
	CDynamicVertexData<ClearVertex_t>::Unlock(); // 639
	CRenderContextVulkan::BindVertexBuffer(
			int nSlot,
			DynamicVertexBufferHandle_t hVertexBuffer,
			int nOffset,
			int nStride);  // 791
	CDynamicVertexData<ClearVertex_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<ClearVertex_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 2351
	CDynamicIndexData<short unsigned int>::Lock(
		int nIndexCount);  // 580
	CIndexDataBase<short unsigned int>::ClearIndexFields(); // 89
	CIndexDataBase<short unsigned int>::CIndexDataBase(); // 573
	CDynamicIndexData<short unsigned int>::CDynamicIndexData(
				IRenderContext* pRenderContext,
				int nIndexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 2353
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 2354
	{
	}
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 2355
	{
	}
	CIndexDataBase<short unsigned int>::Index2(
		uint16 nIndex1,
		uint16 nIndex2);  // 2356
	CDynamicIndexData<short unsigned int>::Unlock(); // 540
	CRenderContextVulkan::BindIndexBuffer(
			DynamicIndexBufferHandle_t hIndexBuffer,
			int nOffset);  // 690
	CDynamicIndexData<short unsigned int>::Bind(
		int nOffset);  // 541
	CDynamicIndexData<short unsigned int>::UnlockAndBind(
			int nBindOffset);  // 2357
	CDynamicIndexData<short unsigned int>::Unlock(); // 607
	{
	}
	{
	}
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 105
	CIndexDataBase<short unsigned int>::~CIndexDataBase(); // 608
	CDynamicIndexData<short unsigned int>::~CDynamicIndexData(); // 2363
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 2806
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 2807
	CRenderContextVulkan::UnlockDynamicVertexBuffer(
					DynamicVertexBufferHandle_t hVertexBuffer,
					int nWrittenSizeInBytes);  // 768
	CDynamicVertexData<ClearVertex_t>::Unlock(); // 760
	CDynamicVertexData<ClearVertex_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<ClearVertex_t>::~CVertexDataBase(); // 194
	CVertexDataBase<ClearVertex_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<ClearVertex_t>::~CDynamicVertexData(); // 2363
} /* size: 0, variables: 7, inline expansions: 99 (5618 bytes) */

// <0085D708> vulkan/rendercontextvulkan.cpp:2370
// variables: 52
// function calls: 109
void CRenderContextVulkan::ClearImpl(const RenderClearInfo_t& clearInfo)
{
	const char   __FUNCTION__; // 22805
	VulkanCommandBuffer_t* pCommandBuffer; // 2481
	uint32_t nMaxAttachmentClears; // 2484
	VkClearAttachment* pClearAttachments; // 2485
	VkClearRect* pClearRects; // 2486
	uint32_t nClearAttachmentCount; // 2487
	bool bUsedShader; // 2488
	RenderViewport_t viewport; // 2490
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2372
	}
	{
		bool bCanDoClearsWithRenderPass; // 2384
		{
			int nTestFlag; // 2388
			{
				int i; // 2389
				{
					HRenderTexture hRenderTarget; // 2394
					{
						bool bIsTextureArray2D; // 2399
						CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2196
						IsFullViewport(const RenderViewport_t& viewport,
								HRenderTexture hTexture);  // 2406
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 2399
						CTextureInfoId::GetSpec(); // 403
						CTextureBase::GetSpec(); // 2399
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 2399
						CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2406
					}
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 2395
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2394
				}
			}
		}
		{
			HRenderTexture hRenderTarget; // 2418
			{
				bool bIsTextureArray2D; // 2423
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 2423
				CTextureInfoId::GetSpec(); // 403
				CTextureBase::GetSpec(); // 2423
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 2423
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2429
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2196
				IsFullViewport(const RenderViewport_t& viewport,
						HRenderTexture hTexture);  // 2429
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2418
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 2419
		}
		{
			int nTestFlag; // 2444
			int nColorIndex; // 2445
			{
				int i; // 2447
				Min<int>(const int& val1,
					const int& val2);  // 2453
				Min<int>(const int& val1,
					const int& val2);  // 2454
				Min<int>(const int& val1,
					const int& val2);  // 2455
				Min<int>(const int& val1,
					const int& val2);  // 2456
			}
		}
		CRenderDeviceVulkan::GetDepthClearValue(); // 2464
	}
	{
		int nTestFlag; // 2493
		int nColorIndex; // 2494
		{
			int i; // 2496
			{
				HRenderTexture hRenderTarget; // 2501
				{
					bool bIsTextureArray2D; // 2509
					const Vector4D& curClearColor; // 2510
					{
						CVulkanImage* pVulkanImage; // 2513
						VkClearAttachment* pClearAttachment; // 2517
						VkClearRect* pClearRect; // 2518
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2514
						}
						{
							const TextureSpecification_t* pSpec; // 2530
							VkRect2D clearRect; // 2534
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2531
							}
							CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2530
							Max<int>(const int& val1,
								const int& val2);  // 838
							Max<int>(const int& val1,
								const int& val2);  // 839
							Min<unsigned int>(const unsigned int& val1,
										const unsigned int& val2);  // 853
							Min<unsigned int>(const unsigned int& val1,
										const unsigned int& val2);  // 858
							CRenderContextVulkan::ClampRenderArea(
									VkRect2D& renderArea,
									uint32 nWidth,
									uint32 nHeight);  // 2539
						}
						{
							const TextureSpecification_t* pSpec; // 2545
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2546
							}
						}
						CInterlockedIntT<int, 4>::operator int(); // 282
						ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
						{
							RenderTextureDimension_t nTextureDim; // 342
							bool bDimsOkay; // 343
							CTextureInfoId::GetTextureObject(); // 83
							CTextureVulkan::GetTextureResource(); // 348
						}
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
						FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
						StaticInvalidHandle(void); // 360
						{
						}
						CTextureInfoId::GetTextureObject(); // 83
						CTextureVulkan::GetTextureResource(); // 365
						CTextureManagerVulkan::GetTextureResource(
									HRenderTexture hTexture,
									RenderTextureDimension_t nDim,
									const char* szParamName);  // 2513
						CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
						CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2513
					}
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 2509
					CTextureInfoId::GetSpec(); // 403
					CTextureBase::GetSpec(); // 2509
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 2509
					Min<int>(const int& val1,
						const int& val2);  // 2510
				}
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 2502
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2501
			}
		}
	}
	{
		HRenderTexture hRenderTarget; // 2567
		{
			bool bIsTextureArray2D; // 2578
			{
				CVulkanImage* pVulkanImage; // 2582
				VkImageAspectFlags nImageAspect; // 2585
				const VkFormat* pVulkanFormat; // 2586
				VkClearAttachment* pClearAttachment; // 2594
				VkClearRect* pClearRect; // 2595
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2583
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2587
				}
				{
					const TextureSpecification_t* pSpec; // 2605
					VkRect2D clearRect; // 2609
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2606
					}
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2605
					Max<int>(const int& val1,
						const int& val2);  // 838
					Max<int>(const int& val1,
						const int& val2);  // 839
					Min<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 853
					Min<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 858
					CRenderContextVulkan::ClampRenderArea(
							VkRect2D& renderArea,
							uint32 nWidth,
							uint32 nHeight);  // 2614
				}
				{
					const TextureSpecification_t* pSpec; // 2620
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2621
					}
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2620
				}
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2582
				CInterlockedIntT<int, 4>::operator int(); // 282
				ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
				{
					RenderTextureDimension_t nTextureDim; // 342
					bool bDimsOkay; // 343
					CTextureInfoId::GetTextureObject(); // 83
					CTextureVulkan::GetTextureResource(); // 348
				}
				{
				}
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 360
				CTextureInfoId::GetTextureObject(); // 83
				CTextureVulkan::GetTextureResource(); // 365
				CTextureManagerVulkan::GetTextureResource(
							HRenderTexture hTexture,
							RenderTextureDimension_t nDim,
							const char* szParamName);  // 2582
				CInterlockedIntT<int, 4>::operator int(); // 288
				ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
				CTextureManagerVulkan::GetVulkanFormat(
						HRenderTexture hTexture);  // 2586
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2586
				CRenderDeviceVulkan::GetDepthClearValue(); // 2599
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 2578
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 2578
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 2578
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2567
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 2568
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 2375
	CRenderContextVulkan::MarkIssuesCommands(); // 2378
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 2481
	RenderViewport_t::RenderViewport_t(); // 2490
} /* size: 0, variables: 8, inline expansions: 11 (170 bytes) */

// <0085D6A1> vulkan/rendercontextvulkan.cpp:2652
void CRenderContextVulkan::Clear(const RenderClearInfo_t& clearInfo)
{
} /* size: 9 */

// <0085D4A3> vulkan/rendercontextvulkan.cpp:2657
// variables: 2
// function calls: 2
void CRenderContextVulkan::ClearSubrect(const RenderClearInfo_t& clearInfo, int nX, int nY, int nWidth, int nHeight, bool bForceSubrect)
{
	RenderViewport_t subrectViewport; // 2662
	ClearSubrectResult_t result; // 2664
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 2662
} /* size: 158, variables: 2, inline expansions: 2 (68 bytes) */

// <0085C7DC> vulkan/rendercontextvulkan.cpp:2674
// variables: 18
// function calls: 39
void CRenderContextVulkan::ClearUnorderedAccessViewUint(HRenderTexture hTexture, int nMip, const uint32* clearValues)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 2676
	CVulkanImage* pImage; // 2680
	const char   __FUNCTION__; // 23318
	const VkFormat* pVKFormat; // 2688
	const TextureSpecification_t* pSpec; // 2689
	VkImageAspectFlags nImageAspectFlags; // 2690
	RenderMultisampleType_t nMultisampleType; // 2691
	VkImageSubresourceRange range; // 2693
	bool bIsDepthFormat; // 2701
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2681
	}
	{
		VkClearDepthStencilValue clearDepthStencilValue; // 2708
		{
			char szCheckpointBuffer; // 2712
			const char* pCheckPointStr; // 2712
		}
		CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 2712
	}
	{
		VkClearColorValue clearColorValue; // 2718
		{
			char szCheckpointBuffer; // 2724
			const char* pCheckPointStr; // 2724
		}
		CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 2724
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 2676
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2680
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 2680
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 2688
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2689
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
	CTextureDesc::GetArrayCount(); // 2696
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2688
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
			CResourceName* pOutName);  // 206
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2684
	CResourceName::Get(); // 2684
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2684
} /* size: 0, variables: 9, inline expansions: 32 (1124 bytes) */

// <0085C63C> vulkan/rendercontextvulkan.cpp:2733
// variables: 4
// function calls: 3
void CRenderContextVulkan::DiscardRenderTarget(RenderClearFlags_t nDiscardBufferFlags, uint nDiscardOpFlags)
{
	const char   __FUNCTION__; // 23075
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2736
	}
	{
		int32 nTestFlag; // 2739
		{
			int32 i; // 2740
		}
	}
	operator&(RenderClearFlags_t a,
			RenderClearFlags_t b);  // 2737
	operator&(RenderClearFlags_t a,
			RenderClearFlags_t b);  // 2756
	operator&(RenderClearFlags_t a,
			RenderClearFlags_t b);  // 2768
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0085C21C> vulkan/rendercontextvulkan.cpp:2785
// variables: 4
// function calls: 14
void CRenderContextVulkan::LockDynamicVertexBuffer(const BufferDesc_t& desc, DynamicLockDesc_t* pLockDesc)
{
	DynamicVertexBufferHandle_t hVB; // 2789
	VertexBufferHandle_t hVertexBuffer; // 2793
	VulkanCommandBuffer_t* pCommandBuffer; // 2795
	CVertexBufferVulkan* pVertexBufferVulkan; // 2798
	CUtlMemory<DynamicVertexBufferHandle_t__::NumAllocated(); // 1196
	CUtlMemory<DynamicVertexBufferHandle_t__::operator[](
			int i);  // 602
	CUtlVectorBase<DynamicVertexBufferHandle_t__::Element(
		int i);  // 1201
	CopyConstruct<DynamicVertexBufferHandle_t__*>(DynamicVertexBufferHandle_t__** pMemory,
							DynamicVertexBufferHandle_t__* const& src);  // 1201
	CUtlMemory<DynamicVertexBufferHandle_t__::Base(); // 112
	CUtlVectorBase<DynamicVertexBufferHandle_t__::Base(); // 368
	CUtlVectorBase<DynamicVertexBufferHandle_t__::ResetDbgInfo(); // 824
	CUtlVectorBase<DynamicVertexBufferHandle_t__::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DynamicVertexBufferHandle_t__::AddToTail(
			DynamicVertexBufferHandle_t__* const& src);  // 2790
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 2795
	CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1271
	CRenderDeviceVulkan::GetVertexBuffer(
			VertexBufferHandle_t hVertexBuffer);  // 2798
} /* size: 292, variables: 4, inline expansions: 14 (302 bytes) */

// <0087E807> vulkan/rendercontextvulkan.cpp:2803
// function calls: 11
void CRenderContextVulkan::UnlockDynamicVertexBuffer(DynamicVertexBufferHandle_t hVertexBuffer, int nWrittenSizeInBytes)
{
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 2806
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 2807
} /* size: 48, inline expansions: 11 (111 bytes) */

// <0085C1E9> vulkan/rendercontextvulkan.cpp:2803
void CRenderContextVulkan::UnlockDynamicVertexBuffer(DynamicVertexBufferHandle_t hVertexBuffer, int nWrittenSizeInBytes)
{
} /* size: 0 */

// <00884363> vulkan/rendercontextvulkan.cpp:2812
// function calls: 4
void CRenderContextVulkan::DestroyAllDynamicVertexBuffers()
{
	CUtlVectorBase<DynamicVertexBufferHandle_t__::Count(); // 2814
	CUtlMemory<DynamicVertexBufferHandle_t__::Base(); // 112
	CUtlVectorBase<DynamicVertexBufferHandle_t__::Base(); // 2816
	CUtlVectorBase<DynamicVertexBufferHandle_t__::RemoveAll(); // 2817
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0085C1D0> vulkan/rendercontextvulkan.cpp:2812
void CRenderContextVulkan::DestroyAllDynamicVertexBuffers()
{
} /* size: 0 */

// <0085BECF> vulkan/rendercontextvulkan.cpp:2821
// variables: 2
// function calls: 11
void CRenderContextVulkan::LockVertexBuffer(VertexBufferHandle_t hVertexBuffer, int nMaxSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 2829
		CVertexBufferVulkan* pVertexBufferVulkan; // 2832
		WordSwapC<short unsigned int>(short unsigned int w); // 253
		CBigEndianValue<short unsigned int>::GetValue(); // 285
		WordSwapC<short unsigned int>(short unsigned int w); // 268
		CBigEndianValue<short unsigned int>::operator=(
				short unsigned int val);  // 285
		CBigEndianValue<short unsigned int>::operator+=(
				short unsigned int val);  // 289
		CBigEndianValue<short unsigned int>::operator++(
				int);  // 2826
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 2829
		CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
							RenderResourceHandle_t hResource,
							bool bAllowDeleted);  // 1271
		CRenderDeviceVulkan::GetVertexBuffer(
				VertexBufferHandle_t hVertexBuffer);  // 2832
	}
} /* size: 170 */

// <00881DE9> vulkan/rendercontextvulkan.cpp:2839
// variables: 2
// function calls: 11
void CRenderContextVulkan::UnlockVertexBuffer(VertexBufferHandle_t hVertexBuffer, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 2847
		CVertexBufferVulkan* pVertexBufferVulkan; // 2849
		DWordSwapC<unsigned int>(unsigned int dw); // 257
		CBigEndianValue<unsigned int>::GetValue(); // 285
		DWordSwapC<unsigned int>(unsigned int dw); // 272
		CBigEndianValue<unsigned int>::operator=(
				unsigned int val);  // 285
		CBigEndianValue<unsigned int>::operator+=(
				unsigned int val);  // 2844
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 2847
		CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
							RenderResourceHandle_t hResource,
							bool bAllowDeleted);  // 1271
		CRenderDeviceVulkan::GetVertexBuffer(
				VertexBufferHandle_t hVertexBuffer);  // 2849
	}
	CRenderContextVulkan::UnlockVertexBuffer(
				VertexBufferHandle_t hVertexBuffer,
				int nWrittenSizeInBytes,
				LockDesc_t* pDesc);  // 2839
} /* size: 128, inline expansions: 1 (99 bytes) */

// <0085BE73> vulkan/rendercontextvulkan.cpp:2839
// variables: 2
void CRenderContextVulkan::UnlockVertexBuffer(VertexBufferHandle_t hVertexBuffer, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 2847
		CVertexBufferVulkan* pVertexBufferVulkan; // 2849
	}
} /* size: 0 */

// <0085BB56> vulkan/rendercontextvulkan.cpp:2855
// variables: 2
// function calls: 11
void CRenderContextVulkan::LockVertexBufferRegion(VertexBufferHandle_t hVertexBuffer, int32 nOffset, int32 nSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 2863
		CVertexBufferVulkan* pVertexBufferVulkan; // 2866
		WordSwapC<short unsigned int>(short unsigned int w); // 253
		CBigEndianValue<short unsigned int>::GetValue(); // 285
		WordSwapC<short unsigned int>(short unsigned int w); // 268
		CBigEndianValue<short unsigned int>::operator=(
				short unsigned int val);  // 285
		CBigEndianValue<short unsigned int>::operator+=(
				short unsigned int val);  // 289
		CBigEndianValue<short unsigned int>::operator++(
				int);  // 2860
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 2863
		CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
							RenderResourceHandle_t hResource,
							bool bAllowDeleted);  // 1271
		CRenderDeviceVulkan::GetVertexBuffer(
				VertexBufferHandle_t hVertexBuffer);  // 2866
	}
} /* size: 186 */

// <008820CE> vulkan/rendercontextvulkan.cpp:2874
// variables: 2
// function calls: 11
void CRenderContextVulkan::UnlockVertexBufferRegion(VertexBufferHandle_t hVertexBuffer, int32 nOffset, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 2882
		CVertexBufferVulkan* pVertexBufferVulkan; // 2884
		DWordSwapC<unsigned int>(unsigned int dw); // 257
		CBigEndianValue<unsigned int>::GetValue(); // 285
		DWordSwapC<unsigned int>(unsigned int dw); // 272
		CBigEndianValue<unsigned int>::operator=(
				unsigned int val);  // 285
		CBigEndianValue<unsigned int>::operator+=(
				unsigned int val);  // 2879
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 2882
		CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
							RenderResourceHandle_t hResource,
							bool bAllowDeleted);  // 1271
		CRenderDeviceVulkan::GetVertexBuffer(
				VertexBufferHandle_t hVertexBuffer);  // 2884
	}
	CRenderContextVulkan::UnlockVertexBufferRegion(
				VertexBufferHandle_t hVertexBuffer,
				int32 nOffset,
				int nWrittenSizeInBytes,
				LockDesc_t* pDesc);  // 2874
} /* size: 149, inline expansions: 1 (114 bytes) */

// <0085BAED> vulkan/rendercontextvulkan.cpp:2874
// variables: 2
void CRenderContextVulkan::UnlockVertexBufferRegion(VertexBufferHandle_t hVertexBuffer, int32 nOffset, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 2882
		CVertexBufferVulkan* pVertexBufferVulkan; // 2884
	}
} /* size: 0 */

// <008827D6> vulkan/rendercontextvulkan.cpp:2889
void CRenderContextVulkan::SetVertexData(VertexBufferHandle_t hVertexBuffer, const void* pData, int nDataSize, int nDestOffset)
{
} /* size: 17 */

// <008823D9> vulkan/rendercontextvulkan.cpp:2889
// variables: 2
// function calls: 16
void CRenderContextVulkan::SetVertexData(VertexBufferHandle_t hVertexBuffer, const void* pData, int nDataSize, int nDestOffset)
{
	{
		CVertexBufferVulkan* pVertexBufferVulkan; // 2898
		VulkanCommandBuffer_t* pCommandBuffer; // 2899
		WordSwapC<short unsigned int>(short unsigned int w); // 253
		CBigEndianValue<short unsigned int>::GetValue(); // 285
		WordSwapC<short unsigned int>(short unsigned int w); // 268
		CBigEndianValue<short unsigned int>::operator=(
				short unsigned int val);  // 285
		CBigEndianValue<short unsigned int>::operator+=(
				short unsigned int val);  // 289
		CBigEndianValue<short unsigned int>::operator++(
				int);  // 2894
		CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
							RenderResourceHandle_t hResource,
							bool bAllowDeleted);  // 1271
		CRenderDeviceVulkan::GetVertexBuffer(
				VertexBufferHandle_t hVertexBuffer);  // 2898
		DWordSwapC<unsigned int>(unsigned int dw); // 257
		CBigEndianValue<unsigned int>::GetValue(); // 285
		DWordSwapC<unsigned int>(unsigned int dw); // 272
		CBigEndianValue<unsigned int>::operator=(
				unsigned int val);  // 285
		CBigEndianValue<unsigned int>::operator+=(
				unsigned int val);  // 2895
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 2899
	}
} /* size: 175 */

// <0085BA84> vulkan/rendercontextvulkan.cpp:2889
// variables: 2
void CRenderContextVulkan::SetVertexData(VertexBufferHandle_t hVertexBuffer, const void* pData, int nDataSize, int nDestOffset)
{
	{
		CVertexBufferVulkan* pVertexBufferVulkan; // 2898
		VulkanCommandBuffer_t* pCommandBuffer; // 2899
	}
} /* size: 0 */

// <0088286C> vulkan/rendercontextvulkan.cpp:2906
// variables: 2
// function calls: 17
void CRenderContextVulkan::SetIndexData(IndexBufferHandle_t hIndexBuffer, const void* pData, int nDataSize, int nDestOffset)
{
	{
		CIndexBufferVulkan* pIndexBufferVulkan; // 2915
		VulkanCommandBuffer_t* pCommandBuffer; // 2917
		WordSwapC<short unsigned int>(short unsigned int w); // 253
		CBigEndianValue<short unsigned int>::GetValue(); // 285
		WordSwapC<short unsigned int>(short unsigned int w); // 268
		CBigEndianValue<short unsigned int>::operator=(
				short unsigned int val);  // 285
		CBigEndianValue<short unsigned int>::operator+=(
				short unsigned int val);  // 289
		CBigEndianValue<short unsigned int>::operator++(
				int);  // 2911
		DWordSwapC<unsigned int>(unsigned int dw); // 257
		CBigEndianValue<unsigned int>::GetValue(); // 285
		DWordSwapC<unsigned int>(unsigned int dw); // 272
		CBigEndianValue<unsigned int>::operator=(
				unsigned int val);  // 285
		CBigEndianValue<unsigned int>::operator+=(
				unsigned int val);  // 2912
		CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1276
		CRenderDeviceVulkan::GetIndexBuffer(
				IndexBufferHandle_t hIndexBuffer);  // 2915
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 2917
	}
	CRenderContextVulkan::SetIndexData(
			IndexBufferHandle_t hIndexBuffer,
			const void* pData,
			int nDataSize,
			int nDestOffset);  // 2906
} /* size: 207, inline expansions: 1 (151 bytes) */

// <0085BA1B> vulkan/rendercontextvulkan.cpp:2906
// variables: 2
void CRenderContextVulkan::SetIndexData(IndexBufferHandle_t hIndexBuffer, const void* pData, int nDataSize, int nDestOffset)
{
	{
		CIndexBufferVulkan* pIndexBufferVulkan; // 2915
		VulkanCommandBuffer_t* pCommandBuffer; // 2917
	}
} /* size: 0 */

// <0085B88E> vulkan/rendercontextvulkan.cpp:2927
// variables: 2
// function calls: 3
void CRenderContextVulkan::FillGPUBufferFormatted(RenderBufferHandle_t hBuffer, uint32 nDataSize, const void* pInitialData)
{
	CVertexBufferVulkan* pVertexBuffer; // 2929
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 2932
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 2932
	}
} /* size: 127, variables: 1 */

// <0085B441> vulkan/rendercontextvulkan.cpp:2946
// variables: 4
// function calls: 14
void CRenderContextVulkan::LockDynamicGPUBuffer(const BufferDesc_t& desc, RenderBufferFlags_t nFlags, ImageFormat nFormat, DynamicLockDesc_t* pLockDesc)
{
	DynamicVertexBufferHandle_t hVB; // 2950
	VertexBufferHandle_t hVertexBuffer; // 2954
	VulkanCommandBuffer_t* pCommandBuffer; // 2956
	CVertexBufferVulkan* pVertexBufferVulkan; // 2959
	CUtlMemory<DynamicVertexBufferHandle_t__::NumAllocated(); // 1196
	CUtlMemory<DynamicVertexBufferHandle_t__::operator[](
			int i);  // 602
	CUtlVectorBase<DynamicVertexBufferHandle_t__::Element(
		int i);  // 1201
	CopyConstruct<DynamicVertexBufferHandle_t__*>(DynamicVertexBufferHandle_t__** pMemory,
							DynamicVertexBufferHandle_t__* const& src);  // 1201
	CUtlMemory<DynamicVertexBufferHandle_t__::Base(); // 112
	CUtlVectorBase<DynamicVertexBufferHandle_t__::Base(); // 368
	CUtlVectorBase<DynamicVertexBufferHandle_t__::ResetDbgInfo(); // 824
	CUtlVectorBase<DynamicVertexBufferHandle_t__::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<DynamicVertexBufferHandle_t__::AddToTail(
			DynamicVertexBufferHandle_t__* const& src);  // 2951
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 2956
	CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1271
	CRenderDeviceVulkan::GetVertexBuffer(
			VertexBufferHandle_t hVertexBuffer);  // 2959
} /* size: 292, variables: 4, inline expansions: 14 (310 bytes) */

// <0085B40E> vulkan/rendercontextvulkan.cpp:2965
void CRenderContextVulkan::UnlockDynamicGPUBuffer(RenderBufferHandle_t hBuffer, int nWrittenSizeInBytes)
{
} /* size: 0 */

// <0085B070> vulkan/rendercontextvulkan.cpp:2976
// variables: 4
// function calls: 10
void CRenderContextVulkan::BeginQuery(RenderQueryHandle_t hQueryObject)
{
	QueryObjectInternalVulkan_t* pQueryObjectInternal; // 2981
	RenderQueryState_t oldState; // 2999
	VulkanCommandBuffer_t* pCommandBuffer; // 3008
	VkQueryControlFlags nQueryControlFlags; // 3023
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 2999
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3008
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<QueryObjectInternalVulkan_t::Element(
		short unsigned int i);  // 825
	CopyConstruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory,
							QueryObjectInternalVulkan_t* const& src);  // 825
	CUtlLinkedList<QueryObjectInternalVulkan_t::InsertBefore(
			short unsigned int before,
			QueryObjectInternalVulkan_t* const& src);  // 856
	CUtlLinkedList<QueryObjectInternalVulkan_t::AddToTail(
			QueryObjectInternalVulkan_t* const& src);  // 3017
} /* size: 433, variables: 4, inline expansions: 10 (202 bytes) */

// <0085A905> vulkan/rendercontextvulkan.cpp:3027
// variables: 5
// function calls: 26
void CRenderContextVulkan::EndQuery(RenderQueryHandle_t hQueryObject)
{
	QueryObjectInternalVulkan_t* pQueryObjectInternal; // 3032
	RenderQueryState_t oldState; // 3044
	VulkanCommandBuffer_t* pCommandBuffer; // 3051
	CommandEndQueryVulkan_t cmd; // 3068
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 3044
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3051
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandEndQueryVulkan_t, 12, true>::CommandHelper_t(); // 110
	CommandEndQueryVulkan_t::CommandEndQueryVulkan_t(); // 3068
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandEndQueryVulkan_t>(
						const CommandEndQueryVulkan_t& obj);  // 3070
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<QueryObjectInternalVulkan_t::Element(
		short unsigned int i);  // 825
	CopyConstruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory,
							QueryObjectInternalVulkan_t* const& src);  // 825
	CUtlLinkedList<QueryObjectInternalVulkan_t::InsertBefore(
			short unsigned int before,
			QueryObjectInternalVulkan_t* const& src);  // 856
	CUtlLinkedList<QueryObjectInternalVulkan_t::AddToTail(
			QueryObjectInternalVulkan_t* const& src);  // 3059
} /* size: 594, variables: 4, inline expansions: 22 (820 bytes) */

// <0085A3FA> vulkan/rendercontextvulkan.cpp:3077
// variables: 4
// function calls: 18
void CRenderContextVulkan::LockDynamicIndexBuffer(const BufferDesc_t& desc, DynamicLockDesc_t* pLockDesc)
{
	DynamicIndexBufferHandle_t hIB; // 3081
	IndexBufferHandle_t hIndexBuffer; // 3085
	VulkanCommandBuffer_t* pCommandBuffer; // 3087
	CIndexBufferVulkan* pIndexBufferVulkan; // 3090
	CUtlMemory<DynamicIndexBufferHandle_t__::NumAllocated(); // 1196
	CUtlMemory<DynamicIndexBufferHandle_t__::Base(); // 112
	CUtlVectorBase<DynamicIndexBufferHandle_t__::Base(); // 368
	CUtlVectorBase<DynamicIndexBufferHandle_t__::ResetDbgInfo(); // 824
	CUtlMemory<DynamicIndexBufferHandle_t__::IsGrowable(); // 823
	CUtlMemory<DynamicIndexBufferHandle_t__::IsExternallyAllocated(); // 859
	CUtlMemory<DynamicIndexBufferHandle_t__::IsExternallyAllocated(); // 861
	CUtlMemory<DynamicIndexBufferHandle_t__::Grow(
		int num);  // 806
	CUtlVectorBase<DynamicIndexBufferHandle_t__::GrowMemory(
			int num);  // 1198
	CUtlMemory<DynamicIndexBufferHandle_t__::operator[](
			int i);  // 602
	CUtlVectorBase<DynamicIndexBufferHandle_t__::Element(
		int i);  // 1201
	CopyConstruct<DynamicIndexBufferHandle_t__*>(DynamicIndexBufferHandle_t__** pMemory,
							DynamicIndexBufferHandle_t__* const& src);  // 1201
	CUtlVectorBase<DynamicIndexBufferHandle_t__::AddToTail(
			DynamicIndexBufferHandle_t__* const& src);  // 3082
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3087
	CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
					RenderResourceHandle_t hResource,
					bool bAllowDeleted);  // 1276
	CRenderDeviceVulkan::GetIndexBuffer(
			IndexBufferHandle_t hIndexBuffer);  // 3090
} /* size: 487, variables: 4, inline expansions: 18 (1009 bytes) */

// <0087EA85> vulkan/rendercontextvulkan.cpp:3095
// function calls: 11
void CRenderContextVulkan::UnlockDynamicIndexBuffer(DynamicIndexBufferHandle_t hIndexBuffer, int nWrittenSizeInBytes)
{
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 3098
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 3099
} /* size: 48, inline expansions: 11 (111 bytes) */

// <0085A3C7> vulkan/rendercontextvulkan.cpp:3095
void CRenderContextVulkan::UnlockDynamicIndexBuffer(DynamicIndexBufferHandle_t hIndexBuffer, int nWrittenSizeInBytes)
{
} /* size: 0 */

// <00884470> vulkan/rendercontextvulkan.cpp:3104
// function calls: 4
void CRenderContextVulkan::DestroyAllDynamicIndexBuffers()
{
	CUtlVectorBase<DynamicIndexBufferHandle_t__::Count(); // 3106
	CUtlMemory<DynamicIndexBufferHandle_t__::Base(); // 112
	CUtlVectorBase<DynamicIndexBufferHandle_t__::Base(); // 3108
	CUtlVectorBase<DynamicIndexBufferHandle_t__::RemoveAll(); // 3109
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0085A3AE> vulkan/rendercontextvulkan.cpp:3104
void CRenderContextVulkan::DestroyAllDynamicIndexBuffers()
{
} /* size: 0 */

// <0085A0AD> vulkan/rendercontextvulkan.cpp:3114
// variables: 2
// function calls: 11
void CRenderContextVulkan::LockIndexBuffer(IndexBufferHandle_t hIndexBuffer, int nSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 3122
		CIndexBufferVulkan* pIndexBufferVulkan; // 3125
		WordSwapC<short unsigned int>(short unsigned int w); // 253
		CBigEndianValue<short unsigned int>::GetValue(); // 285
		WordSwapC<short unsigned int>(short unsigned int w); // 268
		CBigEndianValue<short unsigned int>::operator=(
				short unsigned int val);  // 285
		CBigEndianValue<short unsigned int>::operator+=(
				short unsigned int val);  // 289
		CBigEndianValue<short unsigned int>::operator++(
				int);  // 3119
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 3122
		CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1276
		CRenderDeviceVulkan::GetIndexBuffer(
				IndexBufferHandle_t hIndexBuffer);  // 3125
	}
} /* size: 170 */

// <00882CCD> vulkan/rendercontextvulkan.cpp:3133
// variables: 2
// function calls: 11
void CRenderContextVulkan::UnlockIndexBuffer(IndexBufferHandle_t hIndexBuffer, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 3141
		CIndexBufferVulkan* pIndexBufferVulkan; // 3143
		DWordSwapC<unsigned int>(unsigned int dw); // 257
		CBigEndianValue<unsigned int>::GetValue(); // 285
		DWordSwapC<unsigned int>(unsigned int dw); // 272
		CBigEndianValue<unsigned int>::operator=(
				unsigned int val);  // 285
		CBigEndianValue<unsigned int>::operator+=(
				unsigned int val);  // 3138
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 3141
		CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1276
		CRenderDeviceVulkan::GetIndexBuffer(
				IndexBufferHandle_t hIndexBuffer);  // 3143
	}
	CRenderContextVulkan::UnlockIndexBuffer(
				IndexBufferHandle_t hIndexBuffer,
				int nWrittenSizeInBytes,
				LockDesc_t* pDesc);  // 3133
} /* size: 128, inline expansions: 1 (99 bytes) */

// <0085A051> vulkan/rendercontextvulkan.cpp:3133
// variables: 2
void CRenderContextVulkan::UnlockIndexBuffer(IndexBufferHandle_t hIndexBuffer, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 3141
		CIndexBufferVulkan* pIndexBufferVulkan; // 3143
	}
} /* size: 0 */

// <00859D34> vulkan/rendercontextvulkan.cpp:3149
// variables: 2
// function calls: 11
void CRenderContextVulkan::LockIndexBufferRegion(IndexBufferHandle_t hIndexBuffer, int32 nOffset, int32 nSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 3157
		CIndexBufferVulkan* pIndexBufferVulkan; // 3160
		WordSwapC<short unsigned int>(short unsigned int w); // 253
		CBigEndianValue<short unsigned int>::GetValue(); // 285
		WordSwapC<short unsigned int>(short unsigned int w); // 268
		CBigEndianValue<short unsigned int>::operator=(
				short unsigned int val);  // 285
		CBigEndianValue<short unsigned int>::operator+=(
				short unsigned int val);  // 289
		CBigEndianValue<short unsigned int>::operator++(
				int);  // 3154
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 3157
		CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1276
		CRenderDeviceVulkan::GetIndexBuffer(
				IndexBufferHandle_t hIndexBuffer);  // 3160
	}
} /* size: 186 */

// <00882FB2> vulkan/rendercontextvulkan.cpp:3169
// variables: 2
// function calls: 11
void CRenderContextVulkan::UnlockIndexBufferRegion(IndexBufferHandle_t hIndexBuffer, int32 nOffset, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 3177
		CIndexBufferVulkan* pIndexBufferVulkan; // 3180
		DWordSwapC<unsigned int>(unsigned int dw); // 257
		CBigEndianValue<unsigned int>::GetValue(); // 285
		DWordSwapC<unsigned int>(unsigned int dw); // 272
		CBigEndianValue<unsigned int>::operator=(
				unsigned int val);  // 285
		CBigEndianValue<unsigned int>::operator+=(
				unsigned int val);  // 3174
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 3177
		CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1276
		CRenderDeviceVulkan::GetIndexBuffer(
				IndexBufferHandle_t hIndexBuffer);  // 3180
	}
	CRenderContextVulkan::UnlockIndexBufferRegion(
				IndexBufferHandle_t hIndexBuffer,
				int32 nOffset,
				int nWrittenSizeInBytes,
				LockDesc_t* pDesc);  // 3169
} /* size: 149, inline expansions: 1 (114 bytes) */

// <00859CCB> vulkan/rendercontextvulkan.cpp:3169
// variables: 2
void CRenderContextVulkan::UnlockIndexBufferRegion(IndexBufferHandle_t hIndexBuffer, int32 nOffset, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 3177
		CIndexBufferVulkan* pIndexBufferVulkan; // 3180
	}
} /* size: 0 */

// <0087DC3E> vulkan/rendercontextvulkan.cpp:3188
// variable: 1
// function calls: 6
void CRenderContextVulkan::BindIndexBuffer(IndexBufferHandle_t hIndexBuffer, int nOffset)
{
	CIndexBufferVulkan* pIndexBufferVulkan; // 3190
	CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
					RenderResourceHandle_t hResource,
					bool bAllowDeleted);  // 1276
	CRenderDeviceVulkan::GetIndexBuffer(
			IndexBufferHandle_t hIndexBuffer);  // 3190
	CIndexBufferVulkan::GetBindOffset(); // 3200
	CIndexBufferVulkan::GetIndexSize(); // 3201
	CIndexBufferVulkan::GetVkBuffer(); // 3201
	CPipelineVulkan::BindIndexBuffer(
			VkBuffer pBuffer,
			VkDeviceSize nOffset,
			VkIndexType nIndexType);  // 3201
	{
	}
} /* size: 0, variables: 1, inline expansions: 6 (120 bytes) */

// <00859C4C> vulkan/rendercontextvulkan.cpp:3188
// variables: 3
void CRenderContextVulkan::BindIndexBuffer(IndexBufferHandle_t hIndexBuffer, int nOffset)
{
	CIndexBufferVulkan* pIndexBufferVulkan; // 3190
	const char   __FUNCTION__; // 22967
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3194
	}
} /* size: 0, variables: 2 */

// <0087EFB1> vulkan/rendercontextvulkan.cpp:3209
// function calls: 7
void CRenderContextVulkan::BindIndexBuffer(DynamicIndexBufferHandle_t hIndexBuffer, int nOffset)
{
	CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
					RenderResourceHandle_t hResource,
					bool bAllowDeleted);  // 1276
	CRenderDeviceVulkan::GetIndexBuffer(
			IndexBufferHandle_t hIndexBuffer);  // 3190
	CIndexBufferVulkan::GetBindOffset(); // 3200
	CIndexBufferVulkan::GetIndexSize(); // 3201
	CIndexBufferVulkan::GetVkBuffer(); // 3201
	CPipelineVulkan::BindIndexBuffer(
			VkBuffer pBuffer,
			VkDeviceSize nOffset,
			VkIndexType nIndexType);  // 3201
	{
	}
	CRenderContextVulkan::BindIndexBuffer(
			IndexBufferHandle_t hIndexBuffer,
			int nOffset);  // 3211
} /* size: 0, inline expansions: 7 (270 bytes) */

// <00859C19> vulkan/rendercontextvulkan.cpp:3209
void CRenderContextVulkan::BindIndexBuffer(DynamicIndexBufferHandle_t hIndexBuffer, int nOffset)
{
} /* size: 0 */

// <00859AF0> vulkan/rendercontextvulkan.cpp:3214
// variable: 1
// function calls: 3
void CRenderContextVulkan::BindIndexBuffer(RenderBufferHandle_t hIndexBuffer, int nIndexSize, int nOffset)
{
	CVertexBufferVulkan* pVertexBuffer; // 3216
	CVertexBufferVulkan::GetBindOffset(); // 3221
	CVertexBufferVulkan::GetVKBuffer(); // 3222
	CPipelineVulkan::BindIndexBuffer(
			VkBuffer pBuffer,
			VkDeviceSize nOffset,
			VkIndexType nIndexType);  // 3222
} /* size: 99, variables: 1, inline expansions: 3 (62 bytes) */

// <0087E4D9> vulkan/rendercontextvulkan.cpp:3231
// variable: 1
// function calls: 11
void CRenderContextVulkan::BindVertexBuffer(int nSlot, VertexBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
	CVertexBufferVulkan* pVertexBufferVulkan; // 3233
	CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1271
	CRenderDeviceVulkan::GetVertexBuffer(
			VertexBufferHandle_t hVertexBuffer);  // 3233
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3241
	CVertexBufferVulkan::GetVKBuffer(); // 3242
	{
	}
	CPipelineVulkan::MarkPipelineDirty(); // 1181
	CPipelineVulkan::BindVertexBuffer(
			uint32 nSlot,
			VkBuffer pBuffer,
			VkDeviceSize nOffset,
			VkDeviceSize nStride);  // 3242
	CVertexBufferVulkan::GetBindOffset(); // 3242
	CVertexBufferBase::GetBufferType(); // 122
	{
	}
	CVertexBufferBase::GetVertexSize(); // 3238
	CRenderContextVulkan::BindVertexBuffer(
			int nSlot,
			VertexBufferHandle_t hVertexBuffer,
			int nOffset,
			int nStride);  // 3231
} /* size: 0, variables: 1, inline expansions: 11 (798 bytes) */

// <00859A96> vulkan/rendercontextvulkan.cpp:3231
// variable: 1
void CRenderContextVulkan::BindVertexBuffer(int nSlot, VertexBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
	CVertexBufferVulkan* pVertexBufferVulkan; // 3233
} /* size: 0, variables: 1 */

// <0087E152> vulkan/rendercontextvulkan.cpp:3262
// function calls: 12
void CRenderContextVulkan::BindVertexBuffer(int nSlot, DynamicVertexBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
	CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1271
	CRenderDeviceVulkan::GetVertexBuffer(
			VertexBufferHandle_t hVertexBuffer);  // 3233
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3241
	CVertexBufferVulkan::GetVKBuffer(); // 3242
	{
	}
	CPipelineVulkan::MarkPipelineDirty(); // 1181
	CPipelineVulkan::BindVertexBuffer(
			uint32 nSlot,
			VkBuffer pBuffer,
			VkDeviceSize nOffset,
			VkDeviceSize nStride);  // 3242
	CVertexBufferVulkan::GetBindOffset(); // 3242
	CVertexBufferBase::GetBufferType(); // 122
	{
	}
	CVertexBufferBase::GetVertexSize(); // 3238
	CRenderContextVulkan::BindVertexBuffer(
			int nSlot,
			VertexBufferHandle_t hVertexBuffer,
			int nOffset,
			int nStride);  // 3231
	CRenderContextVulkan::BindVertexBuffer(
			int nSlot,
			VertexBufferHandle_t hVertexBuffer,
			int nOffset,
			int nStride);  // 3264
} /* size: 0, inline expansions: 12 (1207 bytes) */

// <00859A49> vulkan/rendercontextvulkan.cpp:3262
void CRenderContextVulkan::BindVertexBuffer(int nSlot, DynamicVertexBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
} /* size: 0 */

// <008597B9> vulkan/rendercontextvulkan.cpp:3267
// variable: 1
// function calls: 8
void CRenderContextVulkan::BindVertexBuffer(int nSlot, RenderBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
	CVertexBufferVulkan* pVertexBufferVulkan; // 3269
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3277
	CVertexBufferVulkan::GetVKBuffer(); // 3278
	{
	}
	CPipelineVulkan::MarkPipelineDirty(); // 1181
	CPipelineVulkan::BindVertexBuffer(
			uint32 nSlot,
			VkBuffer pBuffer,
			VkDeviceSize nOffset,
			VkDeviceSize nStride);  // 3278
	CVertexBufferVulkan::GetBindOffset(); // 3278
	CVertexBufferBase::GetBufferType(); // 122
	{
	}
	CVertexBufferBase::GetVertexSize(); // 3274
} /* size: 0, variables: 1, inline expansions: 8 (369 bytes) */

// <008593E6> vulkan/rendercontextvulkan.cpp:3298
// variables: 5
// function calls: 8
void CRenderContextVulkan::BindVertexShader(RenderShaderHandle_t hVertexShader, RenderInputLayout_t hInputLayout, const CVsInputSignatureVector* pInputSignature)
{
	CInputLayoutVulkan* pInputLayoutVulkan; // 3300
	InputLayoutVulkan_t* pInputLayout; // 3301
	CVertexShaderVulkan* pShader; // 3303
	ReadVolatileMemory<int>(const int* pPtr); // 22
	CRenderDeviceVulkan::AsyncCompileHelper(); // 55
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 32
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 35
	CAsyncCompileHelperVulkan::BEnabled(); // 35
	{
		const bool  bForceCreateNow; // 39
	}
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 44
	{
		int* _pCrash; // 62
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 62
	ForceLoadShader(CShaderVulkanBase* pShader); // 3309
} /* size: 463, variables: 3, inline expansions: 8 (388 bytes) */

// <008808A5> vulkan/rendercontextvulkan.cpp:3317
// variables: 3
// function calls: 8
void CRenderContextVulkan::BindShader(RenderShaderType_t nType, RenderShaderHandle_t hShader)
{
	CShaderVulkanBase* pShader; // 3319
	ReadVolatileMemory<int>(const int* pPtr); // 22
	CRenderDeviceVulkan::AsyncCompileHelper(); // 55
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 32
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 35
	CAsyncCompileHelperVulkan::BEnabled(); // 35
	{
		const bool  bForceCreateNow; // 39
	}
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 44
	{
		int* _pCrash; // 62
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 62
	ForceLoadShader(CShaderVulkanBase* pShader); // 3325
} /* size: 443, variables: 1, inline expansions: 8 (399 bytes) */

// <008593A6> vulkan/rendercontextvulkan.cpp:3317
// variable: 1
void CRenderContextVulkan::BindShader(RenderShaderType_t nType, RenderShaderHandle_t hShader)
{
	CShaderVulkanBase* pShader; // 3319
} /* size: 0, variables: 1 */

// <00859279> vulkan/rendercontextvulkan.cpp:3332
// variables: 2
// function call: 1
int ComputePrimitiveCount(RenderPrimitiveType_t nType, int nIndexCount)
{
	const char   __FUNCTION__; // 23129
	{
		int* _pCrash; // 3359
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3359
} /* size: 258, variables: 1, inline expansions: 1 (29 bytes) */

// <00858D72> vulkan/rendercontextvulkan.cpp:3367
// variables: 7
// function calls: 16
void CRenderContextVulkan::Draw(RenderPrimitiveType_t type, int nFirstVertex, int nVertexCount)
{
	int nPrimCount; // 3374
	CCommandStream* pStream; // 3382
	const char   __FUNCTION__; // 22670
	VulkanCommandBuffer_t* pCommandBuffer; // 3384
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3383
	}
	{
		char szCheckpointBuffer; // 3386
		const char* pCheckPointStr; // 3386
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 120
	CRenderPipelineStats::UpdateInstanceHistogram(
				int nInstanceCount);  // 3372
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 142
	CRenderPipelineStats::UpdatePrimsPerDrawHistogram(
					int nPrimitiveCount);  // 3376
	CCommandStreamBuilder::GetCurrentStream(); // 3382
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3386
} /* size: 0, variables: 4, inline expansions: 16 (345 bytes) */

// <008586EB> vulkan/rendercontextvulkan.cpp:3401
// variables: 8
// function calls: 22
void CRenderContextVulkan::DrawInstanced(RenderPrimitiveType_t type, int nFirstVertex, int nVertexCountPerInstance, int nInstanceCount)
{
	int nTotalVertexCount; // 3408
	int nPrimCount; // 3410
	CCommandStream* pStream; // 3418
	const char   __FUNCTION__; // 22913
	VulkanCommandBuffer_t* pCommandBuffer; // 3420
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3419
	}
	{
		char szCheckpointBuffer; // 3422
		const char* pCheckPointStr; // 3422
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 129
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 120
	CRenderPipelineStats::UpdateInstanceHistogram(
				int nInstanceCount);  // 3407
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 142
	CRenderPipelineStats::UpdatePrimsPerDrawHistogram(
					int nPrimitiveCount);  // 3412
	CCommandStreamBuilder::GetCurrentStream(); // 3418
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3422
} /* size: 0, variables: 5, inline expansions: 22 (586 bytes) */

// <008581B3> vulkan/rendercontextvulkan.cpp:3437
// variables: 7
// function calls: 16
void CRenderContextVulkan::DrawIndexed(RenderPrimitiveType_t type, int nFirstIndex, int nIndexCount, int nMaxVertexCount, int nBaseVertex)
{
	int nPrimCount; // 3444
	CCommandStream* pStream; // 3452
	const char   __FUNCTION__; // 22859
	VulkanCommandBuffer_t* pCommandBuffer; // 3454
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3453
	}
	{
		char szCheckpointBuffer; // 3458
		const char* pCheckPointStr; // 3458
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 120
	CRenderPipelineStats::UpdateInstanceHistogram(
				int nInstanceCount);  // 3442
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 142
	CRenderPipelineStats::UpdatePrimsPerDrawHistogram(
					int nPrimitiveCount);  // 3446
	CCommandStreamBuilder::GetCurrentStream(); // 3452
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3458
} /* size: 0, variables: 4, inline expansions: 16 (339 bytes) */

// <00857AE7> vulkan/rendercontextvulkan.cpp:3474
// variables: 8
// function calls: 22
void CRenderContextVulkan::DrawIndexedInstanced(RenderPrimitiveType_t type, int nFirstIndex, int nIndexCountPerInstance, int nInstanceCount, int nMaxVertexCount, int nBaseVertex, uint nBaseInstance)
{
	int nTotalVerts; // 3481
	int nPrimCount; // 3483
	CCommandStream* pStream; // 3491
	const char   __FUNCTION__; // 23102
	VulkanCommandBuffer_t* pCommandBuffer; // 3493
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3492
	}
	{
		char szCheckpointBuffer; // 3497
		const char* pCheckPointStr; // 3497
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 129
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 120
	CRenderPipelineStats::UpdateInstanceHistogram(
				int nInstanceCount);  // 3480
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 142
	CRenderPipelineStats::UpdatePrimsPerDrawHistogram(
					int nPrimitiveCount);  // 3485
	CCommandStreamBuilder::GetCurrentStream(); // 3491
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3497
} /* size: 0, variables: 5, inline expansions: 22 (582 bytes) */

// <008573C6> vulkan/rendercontextvulkan.cpp:3510
// variables: 8
// function calls: 23
void CRenderContextVulkan::MultiDrawIndexed(RenderPrimitiveType_t type, int nDrawCount, const RenderMultiDrawIndexedInfo_t* pIndexInfo, uint32 nInstanceCount, uint32 nFirstInstance, int nMaxVertexCount)
{
	int nPrimCount; // 3517
	CCommandStream* pStream; // 3525
	const char   __FUNCTION__; // 22994
	VulkanCommandBuffer_t* pCommandBuffer; // 3527
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3526
	}
	{
		char szCheckpointBuffer; // 3529
		const char* pCheckPointStr; // 3529
	}
	{
		int32 i; // 3546
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 129
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 120
	CRenderPipelineStats::UpdateInstanceHistogram(
				int nInstanceCount);  // 3515
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 142
	CRenderPipelineStats::UpdatePrimsPerDrawHistogram(
					int nPrimitiveCount);  // 3519
	CCommandStreamBuilder::GetCurrentStream(); // 3525
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3529
	CRenderDeviceVulkan::EXTMultiDrawEnabled(); // 3532
} /* size: 0, variables: 4, inline expansions: 23 (555 bytes) */

// <00857065> vulkan/rendercontextvulkan.cpp:3554
// variables: 8
// function calls: 6
void CRenderContextVulkan::DrawInstancedIndirect(RenderPrimitiveType_t type, RenderBufferHandle_t hDrawArgBuffer, uint32 nBufferOffset)
{
	CVertexBufferVulkan* pDrawArgBuffer; // 3562
	const char   __FUNCTION__; // 23129
	CCommandStream* pStream; // 3569
	VulkanCommandBuffer_t* pCommandBuffer; // 3571
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3563
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3570
	}
	{
		char szCheckpointBuffer; // 3573
		const char* pCheckPointStr; // 3573
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3568
	CCommandStreamBuilder::GetCurrentStream(); // 3569
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3573
	CVertexBufferVulkan::GetBindOffset(); // 3574
	CVertexBufferVulkan::GetVKBuffer(); // 3574
} /* size: 0, variables: 4, inline expansions: 6 (57 bytes) */

// <00856D04> vulkan/rendercontextvulkan.cpp:3578
// variables: 8
// function calls: 6
void CRenderContextVulkan::DrawIndexedInstancedIndirect(RenderPrimitiveType_t type, RenderBufferHandle_t hDrawArgBuffer, uint32 nBufferOffset)
{
	CVertexBufferVulkan* pDrawArgBuffer; // 3586
	const char   __FUNCTION__; // 23318
	CCommandStream* pStream; // 3593
	VulkanCommandBuffer_t* pCommandBuffer; // 3595
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3587
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3594
	}
	{
		char szCheckpointBuffer; // 3597
		const char* pCheckPointStr; // 3597
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3592
	CCommandStreamBuilder::GetCurrentStream(); // 3593
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3597
	CVertexBufferVulkan::GetBindOffset(); // 3598
	CVertexBufferVulkan::GetVKBuffer(); // 3598
} /* size: 0, variables: 4, inline expansions: 6 (57 bytes) */

// <0085698C> vulkan/rendercontextvulkan.cpp:3602
// variables: 8
// function calls: 6
void CRenderContextVulkan::MultiDrawIndexedInstancedIndirect(RenderPrimitiveType_t type, uint32 nDrawCount, RenderBufferHandle_t hDrawArgBuffer, uint32 nBufferOffset)
{
	CVertexBufferVulkan* pDrawArgBuffer; // 3610
	const char   __FUNCTION__; // 23448
	CCommandStream* pStream; // 3617
	VulkanCommandBuffer_t* pCommandBuffer; // 3619
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3611
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3618
	}
	{
		char szCheckpointBuffer; // 3621
		const char* pCheckPointStr; // 3621
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3616
	CCommandStreamBuilder::GetCurrentStream(); // 3617
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3621
	CVertexBufferVulkan::GetBindOffset(); // 3622
	CVertexBufferVulkan::GetVKBuffer(); // 3622
} /* size: 0, variables: 4, inline expansions: 6 (57 bytes) */

// <00856439> vulkan/rendercontextvulkan.cpp:3627
// variables: 11
// function calls: 11
void CRenderContextVulkan::MultiDrawIndexedInstancedIndirectCount(RenderPrimitiveType_t type, RenderBufferHandle_t hDrawCountBuffer, uint32 nDrawCountBufferOffset, uint32 nMaxDrawCount, RenderBufferHandle_t hDrawArgBuffer, uint32 nDrawArgBufferOffset)
{
	CVertexBufferVulkan* pDrawArgBuffer; // 3648
	const char   __FUNCTION__; // 23563
	CVertexBufferVulkan* pCountVertexBuffer; // 3650
	CCommandStream* pStream; // 3658
	VulkanCommandBuffer_t* pCommandBuffer; // 3660
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3649
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3651
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3659
	}
	{
		char szCheckpointBuffer; // 3662
		const char* pCheckPointStr; // 3662
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3663
	}
	CRenderDeviceVulkan::KHRDrawIndirectCountEnabled(); // 3630
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3656
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3657
	CCommandStreamBuilder::GetCurrentStream(); // 3658
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3662
	CVertexBufferVulkan::GetBindOffset(); // 3666
	CVertexBufferVulkan::GetVKBuffer(); // 3664
	CVertexBufferVulkan::GetBindOffset(); // 3665
	CVertexBufferVulkan::GetVKBuffer(); // 3664
} /* size: 0, variables: 5, inline expansions: 11 (113 bytes) */

// <00855C42> vulkan/rendercontextvulkan.cpp:3672
// variables: 19
// function calls: 12
void CRenderContextVulkan::DispatchComputeShader(uint32 nThreadCountX, uint32 nThreadCountY, uint32 nThreadCountZ)
{
	const char   __FUNCTION__; // 23129
	VulkanCommandBuffer_t* pCommandBuffer; // 3685
	const CShaderVulkanBase* pShader; // 3691
	bool bBoundForUse; // 3703
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3680
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3681
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3682
	}
	{
		uint32_t nThreadGroupSizesOfBoundComputeShader; // 3720
		const CShaderVulkanBase* pComputeShader; // 3721
		{
			VkPipelineLayout pPipelineLayout; // 3710
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3711
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3712
			}
			CPipelineVulkan::GetCurrentPipelineLayout(); // 3710
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 1282
			CPipelineVulkan::ClampToCurrentPushConstantSize(
							uint32_t nPushConstantSize);  // 3715
			CPipelineVulkan::GetCurrentPushConstantsStageMask(); // 3715
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3726
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3727
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3728
		}
		{
			uint32 nThreadGroupCounts; // 3731
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3738
			}
			{
				char szCheckpointBuffer; // 3742
				const char* pCheckPointStr; // 3742
			}
			CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3742
		}
		CPipelineVulkan::GetShader(
				RenderShaderType_t shaderType);  // 3721
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3685
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 3691
	CPipelineVulkan::MarkPipelineDirty(); // 1209
	CPipelineVulkan::SetIsComputeDispatch(
				bool bIsComputeDispatch);  // 3702
} /* size: 0, variables: 4, inline expansions: 6 (126 bytes) */

// <0085568C> vulkan/rendercontextvulkan.cpp:3749
// variables: 9
// function calls: 14
void CRenderContextVulkan::DispatchComputeShaderIndirect(RenderBufferHandle_t hDispatchBuffer, uint32 nDispatchBufferOffset)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3758
	bool bBoundForUse; // 3769
	CVertexBufferVulkan* pDispatchBuffer; // 3770
	const char   __FUNCTION__; // 23345
	{
		VkPipelineLayout pPipelineLayout; // 3778
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3779
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3780
		}
		CPipelineVulkan::GetCurrentPipelineLayout(); // 3778
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 1282
		CPipelineVulkan::ClampToCurrentPushConstantSize(
						uint32_t nPushConstantSize);  // 3783
		CPipelineVulkan::GetCurrentPushConstantsStageMask(); // 3783
	}
	{
		char szCheckpointBuffer; // 3788
		const char* pCheckPointStr; // 3788
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3758
	CPipelineVulkan::MarkPipelineDirty(); // 1209
	CPipelineVulkan::SetIsComputeDispatch(
				bool bIsComputeDispatch);  // 3767
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 3771
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3788
	CVertexBufferVulkan::GetBindOffset(); // 3789
	CVertexBufferVulkan::GetVKBuffer(); // 3789
} /* size: 0, variables: 4, inline expansions: 10 (178 bytes) */

// <00855510> vulkan/rendercontextvulkan.cpp:3801
// variables: 2
// function calls: 3
void CRenderContextVulkan::BuildBLAS(RenderBLASHandle_t hBLAS, BLASTriangleData_t* pTriangleData, int nTriangleDataCount)
{
	{
		CBLASVulkan* pBLAS; // 3805
		VulkanCommandBuffer_t* pCommandBuffer; // 3807
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 3807
	}
} /* size: 113 */

// <00855382> vulkan/rendercontextvulkan.cpp:3814
// variables: 3
// function calls: 3
void CRenderContextVulkan::CompactBLAS(RenderBLASHandle_t hBloated, RenderBLASHandle_t hCompact)
{
	CBLASVulkan* pBloated; // 3819
	CBLASVulkan* pCompact; // 3820
	VulkanCommandBuffer_t* pCommandBuffer; // 3821
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3821
} /* size: 106, variables: 3, inline expansions: 3 (36 bytes) */

// <008551F1> vulkan/rendercontextvulkan.cpp:3826
// variables: 2
// function calls: 3
void CRenderContextVulkan::BuildTLAS(RenderTLASHandle_t hTLAS, TLASInstance_t* pInstances, int nInstanceCount)
{
	{
		CTLASVulkan* pTLAS; // 3830
		VulkanCommandBuffer_t* pCommandBuffer; // 3832
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 3832
	}
} /* size: 129 */

// <00883C42> vulkan/rendercontextvulkan.cpp:3839
// variable: 1
// function calls: 5
void CRenderContextVulkan::BindRayTracingPipeline(RenderRayTracePipelineHandle_t hRayTracingPipeline)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3845
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3845
	CRayTracePipelineVulkan::Pipeline(); // 3856
	CRenderContextVulkan::BindRayTracingPipeline(
				RenderRayTracePipelineHandle_t hRayTracingPipeline);  // 3839
} /* size: 241, variables: 1, inline expansions: 5 (163 bytes) */

// <008551BE> vulkan/rendercontextvulkan.cpp:3839
// variable: 1
void CRenderContextVulkan::BindRayTracingPipeline(RenderRayTracePipelineHandle_t hRayTracingPipeline)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3845
} /* size: 0, variables: 1 */

// <008832BD> vulkan/rendercontextvulkan.cpp:3863
// variables: 2
// function calls: 4
void CRenderContextVulkan::UpdateRayTraceShaderBindingTable(IRaytraceShaderBindingTable* pShaderBindingTable)
{
	CRayTraceShaderBindingTableVulkan* pSBT; // 3868
	VulkanCommandBuffer_t* pCommandBuffer; // 3871
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3871
	CRenderContextVulkan::UpdateRayTraceShaderBindingTable(
					IRaytraceShaderBindingTable* pShaderBindingTable);  // 3863
} /* size: 97, variables: 2, inline expansions: 4 (127 bytes) */

// <0085517E> vulkan/rendercontextvulkan.cpp:3863
// variables: 2
void CRenderContextVulkan::UpdateRayTraceShaderBindingTable(IRaytraceShaderBindingTable* pShaderBindingTable)
{
	CRayTraceShaderBindingTableVulkan* pSBT; // 3868
	VulkanCommandBuffer_t* pCommandBuffer; // 3871
} /* size: 0, variables: 2 */

// <00884278> vulkan/rendercontextvulkan.cpp:3876
// variable: 1
void CRenderContextVulkan::TraceRays(IRaytraceShaderBindingTable* pShaderBindingTable, uint32 nWidth, uint32 nHeight, uint32 nDepth)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3883
} /* size: 195, variables: 1 */

// <00883E13> vulkan/rendercontextvulkan.cpp:3876
// variables: 5
// function calls: 12
void CRenderContextVulkan::TraceRays(IRaytraceShaderBindingTable* pShaderBindingTable, uint32 nWidth, uint32 nHeight, uint32 nDepth)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3883
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3883
	{
		CRayTraceShaderBindingTableVulkan* pShaderBindingTableVulkan; // 3912
		{
			VkPipelineLayout pPipelineLayout; // 3897
			CRayTracePipelineVulkan::PipelineLayout(); // 3897
			{
			}
			{
				CRayTracePipelineVulkan::ShaderStageFlags(); // 3901
				_DebuggerBreakInlineExpressionWrapper(void); // 3899
			}
		}
		CRayTraceShaderBindingTableVulkan::RayTracePipeline(); // 3915
		{
		}
		CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3922
		{
			char szCheckpointBuffer; // 3922
			const char* pCheckPointStr; // 3922
		}
		CRayTraceShaderBindingTableVulkan::CallableDeviceAddressRegion(); // 3928
		CRayTraceShaderBindingTableVulkan::HitGroupsDeviceAddressRegion(); // 3927
		CRayTraceShaderBindingTableVulkan::MissDeviceAddressRegion(); // 3926
		CRayTraceShaderBindingTableVulkan::RayGenDeviceAddressRegion(); // 3925
	}
} /* size: 0, variables: 1, inline expansions: 3 (47 bytes) */

// <00855027> vulkan/rendercontextvulkan.cpp:3876
// variables: 8
void CRenderContextVulkan::TraceRays(IRaytraceShaderBindingTable* pShaderBindingTable, uint32 nWidth, uint32 nHeight, uint32 nDepth)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3883
	const char   __FUNCTION__; // 22805
	{
		CRayTraceShaderBindingTableVulkan* pShaderBindingTableVulkan; // 3912
		{
			VkPipelineLayout pPipelineLayout; // 3897
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3898
			}
			{
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3918
		}
		{
			char szCheckpointBuffer; // 3922
			const char* pCheckPointStr; // 3922
		}
	}
} /* size: 0, variables: 2 */

// <00884AA2> vulkan/rendercontextvulkan.cpp:3936
// variable: 1
void CRenderContextVulkan::TraceRaysIndirect(IRaytraceShaderBindingTable* pShaderBindingTable, RenderBufferHandle_t hDispatchBuffer, uint32 nDispatchBufferOffset)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3943
} /* size: 179, variables: 1 */

// <0088457D> vulkan/rendercontextvulkan.cpp:3936
// variables: 6
// function calls: 15
void CRenderContextVulkan::TraceRaysIndirect(IRaytraceShaderBindingTable* pShaderBindingTable, RenderBufferHandle_t hDispatchBuffer, uint32 nDispatchBufferOffset)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3943
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 3943
	{
		CRayTraceShaderBindingTableVulkan* pShaderBindingTableVulkan; // 3972
		CVertexBufferVulkan* pDispatchBuffer; // 3982
		{
			VkPipelineLayout pPipelineLayout; // 3957
			CRayTracePipelineVulkan::PipelineLayout(); // 3957
			{
			}
			{
				CRayTracePipelineVulkan::ShaderStageFlags(); // 3961
				_DebuggerBreakInlineExpressionWrapper(void); // 3959
			}
		}
		CRayTraceShaderBindingTableVulkan::RayTracePipeline(); // 3975
		{
		}
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 80
		CRenderResource::MarkUsed(
			uint nFrameNumber);  // 3983
		CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 3985
		{
			char szCheckpointBuffer; // 3985
			const char* pCheckPointStr; // 3985
		}
		CVertexBufferVulkan::GetBufferDeviceAddress(); // 3992
		CRayTraceShaderBindingTableVulkan::CallableDeviceAddressRegion(); // 3991
		CRayTraceShaderBindingTableVulkan::HitGroupsDeviceAddressRegion(); // 3990
		CRayTraceShaderBindingTableVulkan::MissDeviceAddressRegion(); // 3989
		CRayTraceShaderBindingTableVulkan::RayGenDeviceAddressRegion(); // 3988
	}
} /* size: 0, variables: 1, inline expansions: 3 (59 bytes) */

// <00854ED0> vulkan/rendercontextvulkan.cpp:3936
// variables: 9
void CRenderContextVulkan::TraceRaysIndirect(IRaytraceShaderBindingTable* pShaderBindingTable, RenderBufferHandle_t hDispatchBuffer, uint32 nDispatchBufferOffset)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 3943
	const char   __FUNCTION__; // 23021
	{
		CRayTraceShaderBindingTableVulkan* pShaderBindingTableVulkan; // 3972
		CVertexBufferVulkan* pDispatchBuffer; // 3982
		{
			VkPipelineLayout pPipelineLayout; // 3957
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3958
			}
			{
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3978
		}
		{
			char szCheckpointBuffer; // 3985
			const char* pCheckPointStr; // 3985
		}
	}
} /* size: 0, variables: 2 */

// <00854A45> vulkan/rendercontextvulkan.cpp:3996
// variables: 4
// function calls: 14
void CRenderContextVulkan::SetGPUBufferHiddenStructureCount(RenderBufferHandle_t hBuffer, uint32 counterValue)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 4004
	CVertexBufferVulkan* pBuffer; // 4006
	const char   __FUNCTION__; // 23421
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4007
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4004
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 4009
	operator&(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 196
	CVertexBufferVulkan::HasUAVHiddenCounter(); // 185
	{
	}
	CVertexBufferVulkan::GetUAVHiddenCounterBindOffset(); // 4011
	CVertexBufferVulkan::GetVKBuffer(); // 4011
	CRenderDeviceVulkan::MemoryManager(); // 4014
	operator&(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 196
	CVertexBufferVulkan::HasUAVHiddenCounter(); // 185
	{
	}
	CVertexBufferVulkan::GetUAVHiddenCounterBindOffset(); // 4016
	CVertexBufferVulkan::GetVKBuffer(); // 4014
} /* size: 0, variables: 3, inline expansions: 14 (345 bytes) */

// <008543D0> vulkan/rendercontextvulkan.cpp:4021
// variables: 7
// function calls: 20
void CRenderContextVulkan::CopyGPUBufferHiddenStructureCount(RenderBufferHandle_t hSrcBuffer, RenderBufferHandle_t hDestBuffer, uint32 nDestBufferOffset)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 4035
	CVertexBufferVulkan* pSrcBuffer; // 4037
	CVertexBufferVulkan* pDestBuffer; // 4038
	const char   __FUNCTION__; // 23448
	VkBufferCopy region; // 4050
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4039
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4040
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4035
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 4042
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 4043
	CRenderDeviceVulkan::MemoryManager(); // 4046
	operator&(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 196
	CVertexBufferVulkan::HasUAVHiddenCounter(); // 185
	{
	}
	CVertexBufferVulkan::GetUAVHiddenCounterBindOffset(); // 4048
	CVertexBufferVulkan::GetVKBuffer(); // 4046
	operator&(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 196
	CVertexBufferVulkan::HasUAVHiddenCounter(); // 185
	{
	}
	CVertexBufferVulkan::GetUAVHiddenCounterBindOffset(); // 4053
	CVertexBufferVulkan::GetBindOffset(); // 4052
	CVertexBufferVulkan::GetVKBuffer(); // 4054
	CVertexBufferVulkan::GetVKBuffer(); // 4054
	CRenderDeviceVulkan::MemoryManager(); // 4057
	CVertexBufferVulkan::GetVKBuffer(); // 4057
} /* size: 0, variables: 5, inline expansions: 20 (358 bytes) */

// <00854147> vulkan/rendercontextvulkan.cpp:4065
// variables: 4
// function calls: 8
void CRenderContextVulkan::FillGPUBuffer(RenderBufferHandle_t hBuffer, uint32 nFillValue)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 4073
	CVertexBufferVulkan* pBuffer; // 4075
	const char   __FUNCTION__; // 22913
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4076
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4073
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 4077
	CVertexBufferBase::GetBufferSizeInBytes(); // 4079
	CVertexBufferVulkan::GetBindOffset(); // 4079
	CVertexBufferVulkan::GetVKBuffer(); // 4079
} /* size: 205, variables: 3, inline expansions: 8 (133 bytes) */

// <00854027> vulkan/rendercontextvulkan.cpp:4084
// function call: 1
void CRenderContextVulkan::SetGPUBufferData(RenderBufferHandle_t hGpuBuffer, const void* pData, uint32 nDataSize, uint32 nOffset)
{
	CRenderContextVulkan::SetVertexData(
			VertexBufferHandle_t hVertexBuffer,
			const void* pData,
			int nDataSize,
			int nDestOffset);  // 4086
} /* size: 17, inline expansions: 1 (12 bytes) */

// <00853A57> vulkan/rendercontextvulkan.cpp:4092
// variables: 6
// function calls: 17
void CRenderContextVulkan::SetupHiddenUAVCounters(VulkanCommandBuffer_t* pCommandBuffer, RenderShaderType_t nShaderType)
{
	const CShaderVulkanBase* pShader; // 4094
	{
		int32 nBoundUAV; // 4100
		{
			CVertexBufferVulkan* pBuffer; // 4107
			{
				uint32 nHiddenUAVIndex; // 4113
				{
					union DescriptorBindingUnion_t& storageBufferDesctipor; // 4117
					{
						VkPipelineStageFlags nDestStageMask; // 4129
						operator&(RenderBufferFlags_t a,
								RenderBufferFlags_t b);  // 196
						CVertexBufferVulkan::HasUAVHiddenCounter(); // 185
						{
						}
						CVertexBufferVulkan::GetUAVHiddenCounterBindOffset(); // 4127
						CVertexBufferVulkan::GetVKBuffer(); // 4127
						operator&(RenderBufferFlags_t a,
								RenderBufferFlags_t b);  // 196
						CVertexBufferVulkan::HasUAVHiddenCounter(); // 185
						{
						}
						CVertexBufferVulkan::GetUAVHiddenCounterBindOffset(); // 4136
						CRenderDeviceVulkan::MemoryManager(); // 4134
						CVertexBufferVulkan::GetVKBuffer(); // 4134
					}
					CPipelineVulkan::GetUAVDescriptor(
							RenderShaderType_t shaderType,
							uint32 nSlot);  // 4117
					CVertexBufferVulkan::GetVKBuffer(); // 4118
					operator&(RenderBufferFlags_t a,
							RenderBufferFlags_t b);  // 196
					CVertexBufferVulkan::HasUAVHiddenCounter(); // 185
					{
					}
					CVertexBufferVulkan::GetUAVHiddenCounterBindOffset(); // 4119
				}
			}
			operator&(RenderBufferFlags_t a,
					RenderBufferFlags_t b);  // 196
			CVertexBufferVulkan::HasUAVHiddenCounter(); // 4110
		}
	}
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 4094
} /* size: 0, variables: 1, inline expansions: 1 (21 bytes) */

// <008534B8> vulkan/rendercontextvulkan.cpp:4146
// variables: 10
// function calls: 17
void CRenderContextVulkan::SetupForDraw(RenderPrimitiveType_t type)
{
	bool bReuseLastDescriptorSet; // 4180
	const uint32_t  nResourceChangeFlag; // 4181
	VulkanCommandBuffer_t* pCommandBuffer; // 4198
	VkPrimitiveTopology nPrimitiveTopology; // 4200
	const VkPolygonMode  polygonMode; // 4210
	bool bBoundForUse; // 4224
	const char   __FUNCTION__; // 22886
	{
		VkPipelineLayout pPipelineLayout; // 4229
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4230
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4231
		}
		CPipelineVulkan::GetCurrentPipelineLayout(); // 4229
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 1282
		CPipelineVulkan::ClampToCurrentPushConstantSize(
						uint32_t nPushConstantSize);  // 4234
		CPipelineVulkan::GetCurrentPushConstantsStageMask(); // 4234
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4198
	RenderPrimitiveTypeToTopology(RenderPrimitiveType_t type); // 4200
	CPipelineVulkan::MarkPipelineDirty(); // 736
	CPipelineVulkan::SetTopology(
			VkPrimitiveTopology topology);  // 4201
	CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 4204
	CPipelineVulkan::GetPolygonMode(); // 4210
	CRenderDeviceVulkan::EXTExtendedDynamicState3Enabled(); // 4211
	CPipelineVulkan::MarkPipelineDirty(); // 1209
	CPipelineVulkan::SetIsComputeDispatch(
				bool bIsComputeDispatch);  // 4217
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 4219
	CPipelineVulkan::GetCurrentPushConstantsStageMask(); // 4227
} /* size: 0, variables: 7, inline expansions: 13 (247 bytes) */

// <00853445> vulkan/rendercontextvulkan.cpp:4245
void CRenderContextVulkan::SetViewports(int nCount, const RenderViewport_t* pViewports)
{
} /* size: 303 */

// <0085337D> vulkan/rendercontextvulkan.cpp:4299
// variable: 1
// function calls: 2
void CRenderContextVulkan::SetScissorRects(int nCount, const Rect_t* pRects)
{
	{
		int32 nScissor; // 4304
		Max<int>(const int& val1,
			const int& val2);  // 4309
		Max<int>(const int& val1,
			const int& val2);  // 4310
	}
} /* size: 149 */

// <00852ECF> vulkan/rendercontextvulkan.cpp:4336
// variables: 4
// function calls: 14
void CRenderContextVulkan::GetSamplerState(RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
	CSamplerStateDesc samplerDesc; // 4341
	CVulkanSamplerObject* pStateObject; // 4342
	CSamplerStateDescBase::CSamplerStateDescBase(); // 927
	{
		float32 flZeros; // 936
		float32 flOnes; // 937
		CSamplerStateDescBase::SetFilterMode(
				RsFilter_t filter);  // 928
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 800
		CSamplerStateDescBase::SetMaxAnisotropy(
				uint32 nMaxAniso);  // 933
		CSamplerStateDescBase::SetTextureAddressModeU(
					RsTextureAddressMode_t addressMode);  // 929
		CSamplerStateDescBase::SetTextureAddressModeV(
					RsTextureAddressMode_t addressMode);  // 930
		CSamplerStateDescBase::SetTextureAddressModeW(
					RsTextureAddressMode_t addressMode);  // 931
		CSamplerStateDescBase::SetMipLodBias(
				float32 flBias);  // 932
		CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
						bool bAllow);  // 939
		CSamplerStateDescBase::SetComparisonFunc(
					RsComparison_t compFunc);  // 934
		CSamplerStateDescBase::SetBorderColor(
				const float32* pBorderColor);  // 938
		CSamplerStateDescBase::SetMinMaxLod(
				uint32 nMinLod,
				uint32 nMaxLod);  // 935
	}
	CSamplerStateDesc::CSamplerStateDesc(
				RsFilter_t filter,
				RsTextureAddressMode_t addressU,
				RsTextureAddressMode_t addressV,
				RsTextureAddressMode_t addressW,
				float32 flMipLodBias,
				uint32 nMaxAniso,
				RsComparison_t comparisonFunc,
				uint32 nMinLod,
				uint32 nMaxLod,
				bool bWhiteBorder,
				bool bAllowGlobalMipBiasOverride);  // 4341
	CVulkanObject<VkSampler_T::Get()>* this); // 4343
} /* size: 172, variables: 2, inline expansions: 3 (126 bytes) */

// <00884B77> vulkan/rendercontextvulkan.cpp:4347
// variable: 1
// function call: 1
void CRenderContextVulkan::GetSamplerState(const CSamplerStateDesc* pSamplerDesc)
{
	CVulkanSamplerObject* pStateObject; // 4349
	CVulkanObject<VkSampler_T::Get()>* this); // 4350
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00852E9C> vulkan/rendercontextvulkan.cpp:4347
// variable: 1
void CRenderContextVulkan::GetSamplerState(const CSamplerStateDesc* pSamplerDesc)
{
	CVulkanSamplerObject* pStateObject; // 4349
} /* size: 0, variables: 1 */

// <00852CE3> vulkan/rendercontextvulkan.cpp:4354
// variables: 4
// function calls: 2
void CRenderContextVulkan::SetSamplerStatePS(int nSamplerIndex, RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
	const char   __FUNCTION__; // 23021
	VkSampler pStateObject; // 4361
	VkDescriptorImageInfo& samplerBinding; // 4362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4359
	}
	Max<int>(const int& val1,
		const int& val2);  // 4358
	CPipelineVulkan::GetSeparateSamplerDescriptor(
					RenderShaderType_t shaderType,
					uint32 nSlot);  // 4362
} /* size: 0, variables: 3, inline expansions: 2 (11 bytes) */

// <00852B2A> vulkan/rendercontextvulkan.cpp:4371
// variables: 4
// function calls: 2
void CRenderContextVulkan::SetSamplerStateVS(int nSamplerIndex, RsFilter_t eFilterMode, RsTextureAddressMode_t eUWrapMode, RsTextureAddressMode_t eVWrapMode, RsTextureAddressMode_t eWWrapMode, RsComparison_t eTextureComparisonMode)
{
	const char   __FUNCTION__; // 23021
	VkSampler pStateObject; // 4378
	VkDescriptorImageInfo& samplerBinding; // 4379
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4376
	}
	Max<int>(const int& val1,
		const int& val2);  // 4375
	CPipelineVulkan::GetSeparateSamplerDescriptor(
					RenderShaderType_t shaderType,
					uint32 nSlot);  // 4379
} /* size: 0, variables: 3, inline expansions: 2 (11 bytes) */

// <00852910> vulkan/rendercontextvulkan.cpp:4388
// variables: 4
// function calls: 5
void CRenderContextVulkan::SetSamplerState(int32 nSamplerIndex, const CSamplerStateDesc* pSamplerDesc, RenderShaderType_t nTargetPipelineStage)
{
	const char   __FUNCTION__; // 22967
	VkSampler pStateObject; // 4393
	VkDescriptorImageInfo& samplerBinding; // 4394
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4391
	}
	Max<int>(const int& val1,
		const int& val2);  // 4390
	CVulkanObject<VkSampler_T::Get()>* this); // 4350
	CRenderContextVulkan::GetSamplerState(
			const CSamplerStateDesc* pSamplerDesc);  // 4393
	CPipelineVulkan::GetSeparateSamplerDescriptor(
					RenderShaderType_t shaderType,
					uint32 nSlot);  // 4394
	CHANGE_FLAG_SAMPLERSTATES(RenderShaderType_t nType); // 4398
} /* size: 0, variables: 3, inline expansions: 5 (46 bytes) */

// <008526EC> vulkan/rendercontextvulkan.cpp:4402
// variables: 3
// function calls: 5
void CRenderContextVulkan::SetSamplerStates(int nStartSamplerIndex, int nSamplerCount, const CSamplerStateDesc* pSamplerDescs, RenderShaderType_t nTargetPipelineStage)
{
	{
		int i; // 4407
		{
			VkSampler pStateObject; // 4409
			VkDescriptorImageInfo& samplerBinding; // 4410
			CHANGE_FLAG_SAMPLERSTATES(RenderShaderType_t nType); // 4414
			CVulkanObject<VkSampler_T::Get()>* this); // 4350
			CRenderContextVulkan::GetSamplerState(
					const CSamplerStateDesc* pSamplerDesc);  // 4409
			CPipelineVulkan::GetSeparateSamplerDescriptor(
							RenderShaderType_t shaderType,
							uint32 nSlot);  // 4410
		}
	}
	Max<int>(const int& val1,
		const int& val2);  // 4404
} /* size: 191, inline expansions: 1 (15 bytes) */

// <00852404> vulkan/rendercontextvulkan.cpp:4422
// variables: 3
// function calls: 6
void CRenderContextVulkan::AllocatePerFrameDynamicPooled(VulkanMemoryPoolType_t nMemoryPool, size_t nBytes, size_t nDataSize, const void* pData, VkDeviceMemory* ppMemoryOut, VkDeviceSize* pOffsetOut, VkBuffer* pBufferOut, void** pDestPtrOut)
{
	size_t nAlignment; // 4424
	VkDeviceSize nOffset; // 4435
	uint8_t* pDest; // 4469
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 4447
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 4473
	CRenderDeviceVulkan::MemoryManager(); // 4452
	CRenderDeviceVulkan::MemoryManager(); // 4438
} /* size: 442, variables: 3, inline expansions: 6 (68 bytes) */

// <00884C11> vulkan/rendercontextvulkan.cpp:4489
// function calls: 2
void CRenderContextVulkan::DestroyDynamicMemoryPools()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 4493
} /* size: 0, inline expansions: 2 (0 bytes) */

// <008523EB> vulkan/rendercontextvulkan.cpp:4489
void CRenderContextVulkan::DestroyDynamicMemoryPools()
{
} /* size: 0 */

// <00851B5D> vulkan/rendercontextvulkan.cpp:4499
// variables: 17
// function calls: 22
void CRenderContextVulkan::ApplyDelayedChanges()
{
	const bool  bExtendedDynamicState; // 4501
	int nChangeFlags; // 4503
	int nVKChangeFlags; // 4504
	VulkanCommandBuffer_t* pCommandBuffer; // 4508
	{
		const RasterizerStateVulkan_t* pState; // 4541
		CPipelineVulkan::MarkPipelineDirty(); // 1089
		CPipelineVulkan::SetRasterizerState(
					const RasterizerStateVulkan_t* pRasterizerState,
					uint32 nHandedness);  // 4543
		CRenderDeviceVulkan::EXTExtendedDynamicState3Enabled(); // 4552
	}
	{
		DepthStencilStateVulkan_t* pState; // 4562
		CPipelineVulkan::MarkPipelineDirty(); // 1118
		CPipelineVulkan::SetDepthStencilState(
					const DepthStencilStateVulkan_t* pDSState,
					bool bReadOnlyDepthStencil);  // 4566
	}
	{
		VkSampleCountFlagBits nSampleCountFlagBits; // 4591
		{
			BlendStateVulkan_t* pState; // 4586
			{
				int nTarget; // 1124
			}
			CPipelineVulkan::MarkPipelineDirty(); // 1143
			CPipelineVulkan::SetBlendState(
					const BlendStateVulkan_t* pBlendState);  // 4588
		}
		ComputeAASettings(RenderMultisampleType_t nType,
					VkSampleCountFlagBits* pSampleCount);  // 4592
		CPipelineVulkan::MarkPipelineDirty(); // 1193
		CPipelineVulkan::SetMSAAState(
				uint32 nSamples,
				VkSampleMask nSampleMask);  // 4593
	}
	{
		VkViewport* pViewports; // 4600
		{
			int nViewport; // 4602
		}
		CPipelineVulkan::MarkPipelineDirty(); // 1200
		CPipelineVulkan::SetViewportState(
				uint32 nNumViewports);  // 4615
	}
	{
		VkRect2D* pScissors; // 4629
		{
			int nScissor; // 4631
		}
	}
	{
		int32_t nDescriptorSetIndex; // 4674
		{
			CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 4679
			const CDescriptorSetVulkan* pDefaultStaticDescriptorSet; // 4680
			VkDescriptorSet pDefaultDescriptorSet; // 4682
			CRenderDeviceVulkan::GetDefaultDescriptorSet(); // 4679
			CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
							CRenderDeviceVulkan* pDevice,
							const RenderDescriptorSetHandle_t  hDescriptorSet);  // 4679
			CDescriptorSetVulkan::GetDescriptorSet(); // 4682
			CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 4684
		}
	}
	CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 4501
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4508
	CPipelineVulkan::UseGraphicsPipelineLibrary(); // 4662
	CRenderDeviceVulkan::GetDefaultVB(); // 4513
} /* size: 0, variables: 4, inline expansions: 6 (87 bytes) */

// <0085100D> vulkan/rendercontextvulkan.cpp:4695
// variables: 12
// function calls: 45
void CRenderContextVulkan::AddImageBarrier(VulkanCommandBuffer_t* pCommandBuffer, HRenderTexture hTexture, RenderColorSpace_t colorSpace, int nMipLevelToBind, const char* pDebugStr)
{
	bool bQueuedFallbackTextureUpdate; // 4697
	CVulkanImage* pImage; // 4704
	const char   __FUNCTION__; // 22967
	const VkFormat* pVKFormat; // 4707
	VkImageAspectFlags nImageAspectFlags; // 4708
	RenderMultisampleType_t nMultisampleType; // 4709
	VkImageLayout nImageLayout; // 4715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4705
	}
	{
		const CTextureDesc* pDesc; // 4719
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4719
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 4721
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 4733
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 4723
	}
	{
		bool bReadOnlyDepthStencilBind; // 4741
		CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int this,
				int i);  // 55
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 55
		CRenderPassVulkan::GetReadOnlyDepthStencilForSubPass(
							uint32 nSubPass);  // 4756
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 4756
		CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 4767
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4697
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 4699
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4704
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 4704
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 4707
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4712
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4717
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 484
	CTextureManagerVulkan::IsErrorTexture(
			HRenderTexture hTexture);  // 4717
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4707
	CVulkanImage::GetNumArraySlices(); // 4785
} /* size: 0, variables: 7, inline expansions: 27 (632 bytes) */

// <00850D84> vulkan/rendercontextvulkan.cpp:4791
// variable: 1
// function calls: 7
void CRenderContextVulkan::PrepareTextureForUse(HRenderTexture hTexture, RenderColorSpace_t colorSpace, int nRequiredMipSize, int nMipLevelToBind)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 4795
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4793
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4795
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4796
} /* size: 175, variables: 1, inline expansions: 7 (71 bytes) */

// <00850C52> vulkan/rendercontextvulkan.cpp:4799
// function calls: 2
void CRenderContextVulkan::BindTexture(int nTextureIndex, HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderShaderType_t nTargetStage, RenderColorSpace_t nColorSpace, int nRequiredMipSize)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4802
} /* size: 87, inline expansions: 2 (40 bytes) */

// <00850758> vulkan/rendercontextvulkan.cpp:4805
// variables: 4
// function calls: 14
void CRenderContextVulkan::BindMipLevelOfTexture(int nTextureIndex, HRenderTexture hTexture, int nMipLevelToBind, RenderTextureDimension_t nDim, RenderShaderType_t nTargetStage, RenderColorSpace_t nColorSpace, int nRequiredMipSize)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 4810
	VkImageLayout nImageLayout; // 4811
	VkImageView pImageView; // 4814
	union DescriptorBindingUnion_t& textureBinding; // 4818
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4808
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4810
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4811
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4815
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4816
	CPipelineVulkan::GetTextureDescriptor(
				RenderShaderType_t shaderType,
				uint32 nSlot);  // 4818
	Max<int>(const int& val1,
		const int& val2);  // 4822
	CHANGE_FLAG_BOUNDRESOURCES(RenderShaderType_t nType); // 4823
} /* size: 362, variables: 4, inline expansions: 14 (112 bytes) */

// <0084FF08> vulkan/rendercontextvulkan.cpp:4841
// variables: 16
// function calls: 26
void CRenderContextVulkan::BindMipLevelOfTextures(int nStartTextureIndex, int nTexCount, bind_resource_list_t* pResources, RenderShaderType_t nTargetPipelineStage)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 4843
	const char   __FUNCTION__; // 23156
	{
		int i; // 4845
		{
			CVertexBufferVulkan* pVB; // 4863
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4866
			}
			{
				union DescriptorBindingUnion_t& descriptorImageInfo; // 4876
				CPipelineVulkan::GetTextureDescriptor(
							RenderShaderType_t shaderType,
							uint32 nSlot);  // 4876
			}
			{
				union DescriptorBindingUnion_t& storageBufferDesctipor; // 4882
				CPipelineVulkan::GetTextureDescriptor(
							RenderShaderType_t shaderType,
							uint32 nSlot);  // 4882
				CVertexBufferVulkan::GetVKBuffer(); // 4883
				CVertexBufferVulkan::GetBindOffset(); // 4884
				CVertexBufferBase::GetBufferSizeInBytes(); // 4885
			}
			{
				union DescriptorBindingUnion_t& storageBufferDesctipor; // 4891
				CPipelineVulkan::GetTextureDescriptor(
							RenderShaderType_t shaderType,
							uint32 nSlot);  // 4891
			}
			CVertexBufferVulkan::IsValid(); // 4866
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 80
			CRenderResource::MarkUsed(
				uint nFrameNumber);  // 4871
			CVertexBufferVulkan::GetTexelBufferView(); // 4874
		}
		{
			const HRenderTexture  hTexture; // 4899
			const RenderTextureDimension_t  nDim; // 4900
			const RenderColorSpace_t  colorSpace; // 4901
			const int  nRequiredTextureSize; // 4902
			const int  nMipLevelToBind; // 4903
			VkImageLayout nImageLayout; // 4907
			VkImageView pImageView; // 4909
			union DescriptorBindingUnion_t& textureBinding; // 4913
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4899
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4905
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4907
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4910
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4911
			CPipelineVulkan::GetTextureDescriptor(
						RenderShaderType_t shaderType,
						uint32 nSlot);  // 4913
		}
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4843
	Max<int>(const int& val1,
		const int& val2);  // 4919
	CHANGE_FLAG_BOUNDRESOURCES(RenderShaderType_t nType); // 4920
} /* size: 0, variables: 2, inline expansions: 5 (78 bytes) */

// <0084EFAD> vulkan/rendercontextvulkan.cpp:4923
// variables: 18
// function calls: 59
void CRenderContextVulkan::BindUnordedAccessViews(int nStartUAVIndex, int nUAVCount, bind_resource_list_t* pResources, RenderShaderType_t nTargetPipelineStage)
{
	const char   __FUNCTION__; // 23156
	VulkanCommandBuffer_t* pCommandBuffer; // 4931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4927
	}
	{
		int i; // 4933
		{
			bool bQueuedFallbackTextureUpdate; // 4939
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4938
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4939
			WordSwapC<short unsigned int>(short unsigned int w); // 253
			CBigEndianValue<short unsigned int>::GetValue(); // 285
			WordSwapC<short unsigned int>(short unsigned int w); // 268
			CBigEndianValue<short unsigned int>::operator=(
					short unsigned int val);  // 285
			CBigEndianValue<short unsigned int>::operator+=(
					short unsigned int val);  // 4941
		}
	}
	{
		int i; // 4947
		{
			union DescriptorBindingUnion_t& uavDescriptor; // 4951
			CVertexBufferVulkan* pVB; // 4953
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4972
			}
			CPipelineVulkan::GetUAVDescriptor(
					RenderShaderType_t shaderType,
					uint32 nSlot);  // 4951
			CVertexBufferVulkan::GetTexelBufferView(); // 4957
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 80
			CRenderResource::MarkUsed(
				uint nFrameNumber);  // 4969
			CVertexBufferVulkan::GetVKBuffer(); // 4964
			CVertexBufferVulkan::GetBindOffset(); // 4965
			CVertexBufferBase::GetBufferSizeInBytes(); // 4966
		}
		{
			CVulkanImage* pImage; // 4979
			const VkFormat* pVKFormat; // 4982
			VkImageAspectFlags nImageAspectFlags; // 4983
			RenderMultisampleType_t nMultisampleType; // 4984
			VkImageView pImageView; // 4999
			union DescriptorBindingUnion_t& storageImageBinding; // 5016
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4980
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4979
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
			{
				RenderTextureDimension_t nTextureDim; // 342
				bool bDimsOkay; // 343
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 483
				CTextureBase::ComputeTextureDimension(); // 342
				CTextureInfoId::GetTextureObject(); // 83
				CTextureVulkan::GetTextureResource(); // 348
			}
			{
			}
			CTextureInfoId::GetTextureObject(); // 83
			CTextureVulkan::GetTextureResource(); // 365
			CTextureManagerVulkan::GetTextureResource(
						HRenderTexture hTexture,
						RenderTextureDimension_t nDim,
						const char* szParamName);  // 4979
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
			CTextureManagerVulkan::GetVulkanFormat(
					HRenderTexture hTexture);  // 4982
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4987
			CVulkanImage::GetNumArraySlices(); // 4996
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 5003
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 459
			CTextureManagerVulkan::HasCompressedBlockUAVView(
							HRenderTexture hTexture);  // 5003
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 5012
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 5013
			CPipelineVulkan::GetUAVDescriptor(
					RenderShaderType_t shaderType,
					uint32 nSlot);  // 5016
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 4982
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 5005
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 470
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 473
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 473
			CVulkanObject<VkImageView_T::Get()>* this); // 474
			CTextureManagerVulkan::GetCompressedBlockUAVView(
							HRenderTexture hTexture,
							int32 nMipLevelToBind);  // 5005
		}
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 4931
	Max<int>(const int& val1,
		const int& val2);  // 5022
} /* size: 0, variables: 2, inline expansions: 4 (84 bytes) */

// <0084EAEC> vulkan/rendercontextvulkan.cpp:5029
// variables: 14
// function calls: 9
void CRenderContextVulkan::BindDescriptorSets(int32 nDescriptorSetIndex, int32 nDescriptorSetCount, const RenderDescriptorSetHandle_t* pDescriptorSetHandles, const int32* pCBDynamicOffsetCount, const uint32 ** ppCBDynamicOffsets)
{
	const char   __FUNCTION__; // 23048
	const CDescriptorSetVulkan ** ppDescriptorSetsForLayout; // 5034
	VkDescriptorSet* pDescriptorSets; // 5035
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5032
	}
	{
		int32 nDescriptorSet; // 5036
		{
			RenderDescriptorSetHandle_t hDescriptorSet; // 5038
			{
				CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 5046
				const CDescriptorSetVulkan* pStaticDescriptorSet; // 5047
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5048
				}
				CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
								CRenderDeviceVulkan* pDevice,
								const RenderDescriptorSetHandle_t  hDescriptorSet);  // 5046
				CDescriptorSetVulkan::GetDescriptorSet(); // 5050
				CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 5051
			}
			{
				VulkanDynamicDescriptorSet_t* pDynamicDescriptorSet; // 5055
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5056
				}
			}
			Max<int>(const int& val1,
				const int& val2);  // 5062
			CRenderDeviceVulkan::GetDefaultDescriptorSet(); // 5040
		}
	}
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 5067
		uint32 nDynamicOffsetCount; // 5069
		const uint32* pDynamicOffsets; // 5070
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 5067
		CRayTracePipelineVulkan::PipelineLayout(); // 5073
	}
} /* size: 0, variables: 3 */

// <0084E6C6> vulkan/rendercontextvulkan.cpp:5093
// variables: 7
// function calls: 7
void CRenderContextVulkan::FillAndBindDynamicDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSetUsedAsLayoutTemplate, int32 nDescriptorSetIndex, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bUpdateAllDescriptors, const int32* pCBDynamicOffsetCount, const uint32 ** ppCBDynamicOffsets)
{
	const char   __FUNCTION__; // 23394
	CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 5100
	const CDescriptorSetVulkan* pDescriptorSetUsedAsTemplate; // 5101
	VkDescriptorSet pDynamicDescriptorSet; // 5115
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5096
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5097
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5102
	}
	CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
					CRenderDeviceVulkan* pDevice,
					const RenderDescriptorSetHandle_t  hDescriptorSet);  // 5100
	CDescriptorSetVulkan::GetDescriptorSetTypeMask(); // 5115
	CDescriptorSetVulkan::GetDescriptorSetLayout(); // 5115
	CDescriptorSetVulkan::GetDescriptorDescCount(); // 5127
	CDescriptorSetVulkan::GetDescriptorDesc(); // 5127
	CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 5134
	Max<int>(const int& val1,
		const int& val2);  // 5133
} /* size: 0, variables: 4, inline expansions: 7 (34 bytes) */

// <0084E354> vulkan/rendercontextvulkan.cpp:5141
// variables: 7
// function calls: 6
void CRenderContextVulkan::FillDynamicDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSetUsedAsLayoutTemplate, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bUpdateAllDescriptors)
{
	const char   __FUNCTION__; // 23210
	CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 5146
	const CDescriptorSetVulkan* pDescriptorSetUsedAsTemplate; // 5147
	VkDescriptorSet pDynamicDescriptorSet; // 5161
	RenderDescriptorSetHandle_t hDescriptorSet; // 5176
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5148
	}
	CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
					CRenderDeviceVulkan* pDevice,
					const RenderDescriptorSetHandle_t  hDescriptorSet);  // 5146
	CDescriptorSetVulkan::GetDescriptorSetTypeMask(); // 5161
	CDescriptorSetVulkan::GetDescriptorSetLayout(); // 5161
	CDescriptorSetVulkan::GetDescriptorDescCount(); // 5173
	CDescriptorSetVulkan::GetDescriptorDesc(); // 5173
	CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 5178
} /* size: 0, variables: 5, inline expansions: 6 (26 bytes) */

// <0084E1F0> vulkan/rendercontextvulkan.cpp:5180
// variables: 2
// function calls: 2
void CRenderContextVulkan::LockDynamicConstantBuffer(uint32 nSize, DynamicLockDesc_t* pLockDesc)
{
	ConstantBufferHandle_t hBuf; // 5182
	{
		ConstantBuffer_t* pBuf; // 5185
		memset(void* __dest,
			int __ch,
			size_t __len);  // 5194
		ConstantBuffer_t::GetViewAlignedSize(); // 5194
	}
} /* size: 80, variables: 1 */

// <0084E16D> vulkan/rendercontextvulkan.cpp:5199
void CRenderContextVulkan::UnlockDynamicConstantBuffer(ConstantBufferHandle_t hBuffer, uint32 nWrittenSizeInBytes)
{
} /* size: 9 */

// <0084D96B> vulkan/rendercontextvulkan.cpp:5204
// variables: 8
// function calls: 26
void CRenderContextVulkan::SetConstantBufferDataInternal(ConstantBufferHandle_t hConstantBuffer, uint32 nStartView, uint32 nNumViews, const void* const* pViewData, uint32 nViewDataSize)
{
	ConstantBuffer_t* pBuf; // 5206
	const char   __FUNCTION__; // 23345
	bool bUseCommandBufferCopy; // 5239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5210
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5215
	}
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 5250
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 5250
	}
	ConstantBuffer_t::GetNumViews(); // 5208
	ConstantBuffer_t::GetViewRequestedSize(); // 5210
	ConstantBuffer_t::GetViewRequestedSize(); // 5211
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 5211
	ConstantBuffer_t::GetViewRequestedSize(); // 5216
	ConstantBuffer_t::IsImmutable(); // 5222
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 5229
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 5230
	CConstantBufferVulkan::MarkUsed(
		uint nFrameNumber);  // 5234
	CConstantBufferVulkan::IsPerFramePooled(); // 5239
	{
		int32 nType; // 450
		{
			int32 nSlot; // 452
			ConstantBuffer_t::GetNumViews(); // 5317
			{
			}
			CRenderContextVulkan::BindConstantBufferView(
						RenderShaderType_t nType,
						ConstantBufferHandle_t hConstantBuffer,
						uint32 nView,
						int nSlot);  // 456
		}
	}
	CRenderContextBase::RebindConstantBufferIfBound(
					ConstantBufferHandle_t hConstantBuffer);  // 5246
	CConstantBufferVulkan::IsPerFrameWriteOnce(); // 5239
} /* size: 0, variables: 3, inline expansions: 21 (363 bytes) */

// <0084D8C4> vulkan/rendercontextvulkan.cpp:5259
void CRenderContextVulkan::SetConstantBufferData(ConstantBufferHandle_t hConstantBuffer, const void* pData, uint32 nDataSize)
{
} /* size: 37 */

// <0084D74D> vulkan/rendercontextvulkan.cpp:5264
// variables: 3
// function call: 1
void CRenderContextVulkan::SetConstantBufferViewsData(ConstantBufferHandle_t hConstantBuffer, uint32 nStartView, uint32 nNumViews, const void* const* pViewData, uint32 nViewDataSize)
{
	ConstantBuffer_t* pBuf; // 5266
	const char   __FUNCTION__; // 23264
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5267
	}
	ConstantBuffer_t::GetNumViews(); // 5267
} /* size: 0, variables: 2, inline expansions: 1 (3 bytes) */

// <0084D4DD> vulkan/rendercontextvulkan.cpp:5271
// variables: 3
// function calls: 6
void CRenderContextVulkan::BindConstantBufferInternal(RenderShaderType_t nType, ConstantBufferHandle_t hConstantBuffer, uint32 nView, int nSlot)
{
	ConstantBuffer_t* pBuf; // 5273
	{
		VkDescriptorBufferInfo& constantBufferDescriptor; // 5283
		VkDescriptorBufferInfo newConstantBufferDescriptor; // 5285
		Max<signed char>(const signed char& val1,
				const signed char& val2);  // 1222
		CPipelineVulkan::GetUniformBufferDescriptor(
						RenderShaderType_t shaderType,
						uint32 nSlot);  // 5283
		CConstantBufferVulkan::MarkUsed(
			uint nFrameNumber);  // 5281
		ConstantBuffer_t::GetViewAlignedSize(); // 5290
	}
	Max<int>(const int& val1,
		const int& val2);  // 442
	CRenderContextBase::SetBoundConstantBuffer(
				RenderShaderType_t nType,
				ConstantBufferHandle_t hConstantBuffer,
				uint32 nView,
				int32 nSlot);  // 5306
} /* size: 365, variables: 1, inline expansions: 2 (73 bytes) */

// <0084D439> vulkan/rendercontextvulkan.cpp:5309
void CRenderContextVulkan::BindConstantBuffer(RenderShaderType_t nType, ConstantBufferHandle_t hConstantBuffer, int nSlot)
{
} /* size: 14 */

// <00884CD6> vulkan/rendercontextvulkan.cpp:5314
// variable: 1
// function call: 1
void CRenderContextVulkan::BindConstantBufferView(RenderShaderType_t nType, ConstantBufferHandle_t hConstantBuffer, uint32 nView, int nSlot)
{
	ConstantBuffer_t* pBuf; // 5316
	ConstantBuffer_t::GetNumViews(); // 5317
	{
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0084D3A0> vulkan/rendercontextvulkan.cpp:5314
// variables: 3
void CRenderContextVulkan::BindConstantBufferView(RenderShaderType_t nType, ConstantBufferHandle_t hConstantBuffer, uint32 nView, int nSlot)
{
	ConstantBuffer_t* pBuf; // 5316
	const char   __FUNCTION__; // 23156
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5317
	}
} /* size: 0, variables: 2 */

// <0084D1F9> vulkan/rendercontextvulkan.cpp:5322
// variables: 3
// function calls: 3
void CRenderContextVulkan::PushConstants(const void* pData, uint32 nDataSize)
{
	const uint32  gpuMaxPushConstantSize; // 5330
	const char   __FUNCTION__; // 22913
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5331
	}
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 5332
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 5332
} /* size: 0, variables: 2, inline expansions: 3 (39 bytes) */

// <0084D0D6> vulkan/rendercontextvulkan.cpp:5341
// variable: 1
// function calls: 3
void CRenderContextVulkan::GetInputLayoutForVertexBuffer(VertexBufferHandle_t hBuffer)
{
	{
		CVertexBufferVulkan* pVB; // 5345
		CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
							RenderResourceHandle_t hResource,
							bool bAllowDeleted);  // 1271
		CRenderDeviceVulkan::GetVertexBuffer(
				VertexBufferHandle_t hVertexBuffer);  // 5345
		CVertexBufferBase::GetInputLayout(); // 5348
	}
} /* size: 33 */

// <0084B5A3> vulkan/rendercontextvulkan.cpp:5356
// variables: 29
// function calls: 107
void CRenderContextVulkan::QueuePresent(SwapChainHandle_t hSwapChain, int nPresentId)
{
	CSwapChainVulkan* pSwapChainVulkan; // 5358
	VulkanCommandBuffer_t* pCommandBuffer; // 5364
	CommandPresentVulkan_t cmd; // 5366
	CVulkanImage* pImageToPresent; // 5378
	CVulkanImage* pIntermediateSwapChainImage; // 5379
	CVulkanImage* pIntermediateImageResolved; // 5380
	uint32 nCurrentVulkanImageIndex; // 5381
	RenderMultisampleType_t nMultisampleType; // 5382
	int32 nSwapChainWidth; // 5385
	int32 nSwapChainHeight; // 5386
	int32 nDestinationWidth; // 5388
	int32 nDestinationHeight; // 5389
	bool bIsSwapchainMultisample; // 5390
	VkSemaphore pAcquireNextImageSemaphore; // 5393
	const char   __FUNCTION__; // 22886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5398
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5399
	}
	{
		VkImageBlit region; // 5411
	}
	{
		HRenderTexture hDestTexture; // 5440
		TextureSpecification_t spec; // 5442
		TextureSpecification_t destSpec; // 5446
		RenderTargetDesc_t rtDesc; // 5450
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5439
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 5440
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
		TextureSpecification_t::TextureSpecification_t(); // 5442
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
		TextureSpecification_t::TextureSpecification_t(); // 5446
		{
			int i; // 121
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 127
		RenderTargetDesc_t::Clear(); // 142
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 177
		RenderTargetDesc_t::Init(
			HRenderTexture hColor,
			HRenderTexture hDepth,
			RenderColorSpace_t allowSrgbWrites);  // 143
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 141
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 143
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 143
		RenderTargetDesc_t::RenderTargetDesc_t(
					HRenderTexture hColor,
					HRenderTexture hDepth,
					RenderColorSpace_t allowSrgbWrites);  // 5450
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 5450
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 344
		CSwapChainBase::GetColorTexture(); // 5450
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 5452
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
		TextureSpecification_t::~TextureSpecification_t(); // 5453
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
		TextureSpecification_t::~TextureSpecification_t(); // 5453
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5462
	}
	{
		VkImageResolve region; // 5467
	}
	{
		VkImageBlit region; // 5491
	}
	{
		VkImageResolve region; // 5521
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 5364
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 5361
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandPresentVulkan_t, 4, false>::CommandHelper_t(); // 95
	CommandPresentVulkan_t::CommandPresentVulkan_t(); // 5366
	CSwapChainBase::GetDebugName(); // 5374
	CSwapChainBase::GetOsSpecificWindowHandle(); // 5375
	CSwapChainVulkan::MultisampleType(); // 5382
	CSwapChainVulkan::GetWidth(); // 5385
	CSwapChainVulkan::GetHeight(); // 5386
	CSwapChainVulkan::IsMultisample(); // 5390
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandPresentVulkan_t>(
					const CommandPresentVulkan_t& obj);  // 5551
} /* size: 0, variables: 15, inline expansions: 22 (1106 bytes) */

// <00884F60> vulkan/rendercontextvulkan.cpp:5557
// function calls: 2
void CRenderContextVulkan::SetIsSecondaryContext(RenderContextCreationInfo_t* pOptInfo, bool bSupportByDefault)
{
	RenderPassHandle_t::operator==(
			const RenderPassHandle_t& other);  // 5565
	{
	}
	CRenderContextVulkan::SetIsSecondaryContext(
				RenderContextCreationInfo_t* pOptInfo,
				bool bSupportByDefault);  // 5557
} /* size: 0, inline expansions: 2 (26 bytes) */

// <0084B54C> vulkan/rendercontextvulkan.cpp:5557
// variables: 2
void CRenderContextVulkan::SetIsSecondaryContext(RenderContextCreationInfo_t* pOptInfo, bool bSupportByDefault)
{
	const char   __FUNCTION__; // 23129
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5565
	}
} /* size: 0, variables: 1 */

// <0084AB02> vulkan/rendercontextvulkan.cpp:5577
// variables: 4
// function calls: 38
void CRenderContextVulkan::SetTextureData(HRenderTexture hTexture, const CTextureDesc* pDataDesc, const void* pData, int nDataSize, int nSpecificMipLevelToSet, const Rect3D_t* pSubRectToUpdate, uint nTextureUpdateFlags, const DataRecycleDelegate_t* pDataRecycleDelegate)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_5584; // 5584
	const TextureSpecification_t* pTextureSpec; // 5585
	int nNumSourceSlices; // 5587
	Rect3D_t subRectToUpdate; // 5589
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 5584
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 5580
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 5581
	CTextureManagerBase::GetTextureManagerRWLock(); // 5584
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 5585
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 5587
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 5609
	CResourceName::Get(); // 5605
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 5605
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 5609
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 5614
} /* size: 708, variables: 4, inline expansions: 38 (849 bytes) */

// <00849DC3> vulkan/rendercontextvulkan.cpp:5617
// variables: 36
// function calls: 24
void CRenderContextVulkan::SetTextureDataInternal(HRenderTexture hTexture, const TextureSpecification_t* pActualSpec, const CTextureDesc* pDataSpec, const void* pData, int nDataSize, int nSpecificMipLevelToSet, int nNumSourceSlices, const Rect3D_t* pSubRectToUpdate, uint nTextureUpdateFlags, const DataRecycleDelegate_t* pDataRecycleDelegate, const char* pDebugStr)
{
	CVulkanImage* pVulkanImage; // 5629
	const char   __FUNCTION__; // 23156
	int nSrcDataWidth; // 5632
	int nSrcDataHeight; // 5633
	int nSrcDataDepth; // 5634
	int nNumMipMaps; // 5635
	uint8* pConvertedData; // 5666
	ImageFormat nActualFormat; // 5667
	const ImageFormatInfo_t& fmt; // 5669
	int nLimit; // 5671
	int nDestX; // 5672
	int nDestY; // 5673
	int nDestZ; // 5674
	int nDestSlice; // 5675
	int nArrayCount; // 5683
	uint8* pByteData; // 5692
	VkDeviceMemory pGPUMemory; // 5728
	VkBuffer pVulkanBuffer; // 5729
	VkDeviceSize nOffset; // 5730
	void* pStagingMemory; // 5731
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5630
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5646
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5655
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5690
	}
	{
		int nActualSize; // 5695
		int nWidth; // 5698
		int nHeight; // 5699
		int nDepth; // 5700
		{
			int i; // 5701
			{
				int nFakeHeight; // 5705
				int nSrcOffset; // 5707
				int nDstOffset; // 5708
				bool bSuccess; // 5709
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5711
				}
			}
			Max<int>(const int& val1,
				const int& val2);  // 5715
			Max<int>(const int& val1,
				const int& val2);  // 5716
			Max<int>(const int& val1,
				const int& val2);  // 5717
		}
	}
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<void const::IsEmpty(); // 5624
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 5629
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 5629
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
	CTextureDesc::GetArrayCount(); // 5683
	ClosurePtr<void (detail::GenericClass::::GetClosureThis()(void const*), void (*)(void const*), void (*)(void const*)>* this); // 1150
	ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(void const*), void (*)(void const*), void (*)(void const*)>* this); // 1150
	FastDelegate1<void const::operator(
			const void* p1);  // 5747
} /* size: 0, variables: 20, inline expansions: 16 (650 bytes) */

// <0084972D> vulkan/rendercontextvulkan.cpp:5752
// variables: 15
// function calls: 10
void CRenderContextVulkan::WriteDataIntoTexture(CVulkanImage* pVulkanImage, int nMipLimit, int nSpecificMipLevelToSet, int nWidth, int nHeight, int nDepth, int nSlices, int nDestX, int nDestY, int nDestZ, int nDestSlice, ImageFormat nActualFormat, VkDeviceMemory pGPUMemory, VkBuffer pVulkanBuffer, VkDeviceSize nGPUMemOffset, int nDataSize, const ImageFormatInfo_t& fmt)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 5757
	VkBufferImageCopy* pRegions; // 5761
	int nRegion; // 5762
	VkDeviceSize nOffset; // 5763
	const bool  bIsDepthFormat; // 5764
	const VkImageAspectFlags  nAspect; // 5765
	VkImageLayout nLayout; // 5825
	{
		int nMip; // 5767
		{
			int nAdjustedHeight; // 5769
			int nSrcBytes; // 5770
			{
				int nSrcBytesPerSlice; // 5775
				int nSrcBytesPerRow; // 5776
				{
					int nSlice; // 5779
					Max<int>(const int& val1,
						const int& val2);  // 5793
					Max<int>(const int& val1,
						const int& val2);  // 5794
				}
			}
			Max<int>(const int& val1,
				const int& val2);  // 5809
			Max<int>(const int& val1,
				const int& val2);  // 5810
			Max<int>(const int& val1,
				const int& val2);  // 5811
			GetMemRequired(int width,
					int height,
					int depth,
					ImageFormat imageFormat,
					bool mipmap,
					int* pAdjustedHeight);  // 5770
		}
	}
	{
		int32 i; // 5818
	}
	{
		int32 i; // 5832
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 5757
	Max<int>(const int& val1,
		const int& val2);  // 5759
} /* size: 1095, variables: 7, inline expansions: 4 (84 bytes) */

// <0084835F> vulkan/rendercontextvulkan.cpp:5849
// variables: 44
// function calls: 51
void CRenderContextVulkan::SetTextureDataFromResource(CVulkanImage* pVulkanImage, const TextureSpecification_t* pActualSpec, const TextureSpecification_t* pDataSpec, const void* pData, int nDataSize)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 5859
	int nWidth; // 5861
	int nHeight; // 5862
	int nDepth; // 5863
	int nArrayCount; // 5864
	int nMipmapCount; // 5865
	ImageFormat nSrcFormat; // 5866
	ImageFormat nDstFormat; // 5867
	bool bIsVolumeTexture; // 5868
	const char   __FUNCTION__; // 23264
	uint8* pConvertedData; // 5883
	const ImageFormatInfo_t& fmt; // 5934
	int nMinDimension; // 5935
	VkDeviceSize nTexelSize; // 5939
	VkDeviceSize nPossibleAlignmentPadding; // 5940
	VkDeviceMemory pGPUStagingMemory; // 5943
	VkBuffer pStagingBuffer; // 5944
	VkDeviceSize nDeviceMemoryOffset; // 5945
	void* pStagingMemory; // 5946
	int nRegion; // 5953
	VkBufferImageCopy* pRegions; // 5954
	VkDeviceSize nOffset; // 5956
	VkDeviceSize nDataOffset; // 5957
	VkImageLayout nLayout; // 6029
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5876
	}
	{
		int nActualSize; // 5886
		{
			const char* pFrom; // 5894
			const char* pTo; // 5895
		}
		{
			int nIterWidth; // 5904
			int nIterHeight; // 5905
			int nIterDepth; // 5906
			{
				int i; // 5907
				{
					int nSrcOffset; // 5909
					int nDstOffset; // 5910
					bool bSuccess; // 5912
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5914
					}
					Max<int>(const int& val1,
						const int& val2);  // 5918
					Max<int>(const int& val1,
						const int& val2);  // 5919
					Max<int>(const int& val1,
						const int& val2);  // 5920
				}
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5951
	}
	{
		int nMip; // 5958
		{
			int a; // 5960
			{
				int nMipDataSize; // 5962
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5972
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5973
				}
				{
					int nMipWidth; // 5994
					int nMipHeight; // 5995
					Max<int>(const int& val1,
						const int& val2);  // 5994
					Max<int>(const int& val1,
						const int& val2);  // 5995
					Max<int>(const int& val1,
						const int& val2);  // 5998
					Min<int>(const int& val1,
						const int& val2);  // 5998
					Max<int>(const int& val1,
						const int& val2);  // 5999
					Min<int>(const int& val1,
						const int& val2);  // 5999
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 5977
			}
		}
		Max<int>(const int& val1,
			const int& val2);  // 6009
		Max<int>(const int& val1,
			const int& val2);  // 6013
		Max<int>(const int& val1,
			const int& val2);  // 6010
	}
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 5855
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 5856
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 5859
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 5863
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 176
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	CTextureDesc::GetArrayCount(); // 5864
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 5868
	CTextureDesc::GetDepth(); // 5876
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 5876
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 176
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
	CTextureDesc::GetArrayCount(); // 5876
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
	CTextureDesc::GetArrayCount(); // 5876
	Max<unsigned char>(const unsigned char& val1,
				const unsigned char& val2);  // 5939
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 5955
} /* size: 0, variables: 24, inline expansions: 37 (884 bytes) */

// <008480C3> vulkan/rendercontextvulkan.cpp:6040
// variables: 5
// function calls: 3
void CRenderContextVulkan::CopyTextureData(CVulkanImage* pDestResource, CVulkanImage* pSourceResource, int nWidth, int nHeight, int nNumMipLevelsToCopy, int nStartMipLevel)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6042
	VkImageCopy* pRegions; // 6044
	VkImageLayout nSrcLayout; // 6075
	VkImageLayout nDstLayout; // 6076
	{
		int i; // 6045
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6042
} /* size: 592, variables: 4, inline expansions: 3 (67 bytes) */

// <00848078> vulkan/rendercontextvulkan.cpp:6087
void CRenderContextVulkan::CopyFallbackTextureData()
{
} /* size: 22 */

// <00847FE2> vulkan/rendercontextvulkan.cpp:6093
void CRenderContextVulkan::LockDynamicTexture(HRenderTexture hTexture, LockedDynamicTexture_t& lockedTexture)
{
} /* size: 91 */

// <00847FA1> vulkan/rendercontextvulkan.cpp:6100
void CRenderContextVulkan::UnlockDynamicTexture(HRenderTexture hTexture)
{
} /* size: 5 */

// <00847423> vulkan/rendercontextvulkan.cpp:6105
// variables: 9
// function calls: 45
void CRenderContextVulkan::ReadTexturePixels(HRenderTexture hTexture, IReadTexturePixelsCallback* pCallback, Rect_t* pSrcRect, int nSlice, int nMip, bool bDeleteCallbackWhenFinished)
{
	CommandReadTexturePixelsVulkan_t cmd; // 6107
	const TextureSpecification_t* pSpec; // 6114
	const char   __FUNCTION__; // 23021
	const VkFormat* pVulkanFormat; // 6119
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6115
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6120
	}
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandReadTexturePixelsVulkan_t, 15, true>::CommandHelper_t(); // 126
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 126
	CommandReadTexturePixelsVulkan_t::CommandReadTexturePixelsVulkan_t(); // 6107
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6114
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6117
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 6117
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 6119
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6119
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6123
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6140
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 126
	CommandReadTexturePixelsVulkan_t::operator=(
			const CommandReadTexturePixelsVulkan_t  &);  // 532
	CCommandStreamBuilder::WriteCmd<CommandReadTexturePixelsVulkan_t>(
							const CommandReadTexturePixelsVulkan_t& obj);  // 6142
	Max<int>(const int& val1,
		const int& val2);  // 6128
	Max<int>(const int& val1,
		const int& val2);  // 6129
} /* size: 0, variables: 4, inline expansions: 36 (1480 bytes) */

// <00846B49> vulkan/rendercontextvulkan.cpp:6146
// variables: 9
// function calls: 29
void CRenderContextVulkan::ReadBuffer(RenderBufferHandle_t hBuffer, IReadBufferCallback* pCallback, int32 nOffset, int32 nBytesToRead, bool bDeleteCallbackWhenFinished)
{
	CVertexBufferVulkan* pBuffer; // 6154
	const char   __FUNCTION__; // 22832
	VkDeviceMemory pStagingMemory; // 6160
	VkBuffer pStagingBuffer; // 6161
	VulkanCommandBuffer_t* pCommandBuffer; // 6162
	VkBufferCopy region; // 6182
	CommandReadBufferVulkan_t cmd; // 6197
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6157
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 6155
	CVertexBufferBase::GetBufferSizeInBytes(); // 6157
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6162
	CRenderDeviceVulkan::MemoryManager(); // 6165
	CRenderDeviceVulkan::MemoryManager(); // 6172
	CVertexBufferVulkan::GetBindOffset(); // 6178
	CVertexBufferVulkan::GetVKBuffer(); // 6172
	CVertexBufferVulkan::GetBindOffset(); // 6183
	CVertexBufferVulkan::GetVKBuffer(); // 6186
	CRenderDeviceVulkan::MemoryManager(); // 6189
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandReadBufferVulkan_t, 16, true>::CommandHelper_t(); // 143
	CommandReadBufferVulkan_t::CommandReadBufferVulkan_t(); // 6197
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandReadBufferVulkan_t>(
						const CommandReadBufferVulkan_t& obj);  // 6203
} /* size: 0, variables: 7, inline expansions: 25 (837 bytes) */

// <008462A2> vulkan/rendercontextvulkan.cpp:6208
// variables: 9
// function calls: 29
void CRenderContextVulkan::ReadBuffer(IndexBufferHandle_t hBuffer, IReadBufferCallback* pCallback, int32 nOffset, int32 nBytesToRead, bool bDeleteCallbackWhenFinished)
{
	CIndexBufferVulkan* pBuffer; // 6216
	const char   __FUNCTION__; // 22832
	VkDeviceMemory pStagingMemory; // 6222
	VkBuffer pStagingBuffer; // 6223
	VulkanCommandBuffer_t* pCommandBuffer; // 6224
	VkBufferCopy region; // 6244
	CommandReadBufferVulkan_t cmd; // 6259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6219
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 6217
	CIndexBufferBase::GetBufferSizeInBytes(); // 6219
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6224
	CRenderDeviceVulkan::MemoryManager(); // 6227
	CRenderDeviceVulkan::MemoryManager(); // 6234
	CIndexBufferVulkan::GetBindOffset(); // 6240
	CIndexBufferVulkan::GetVkBuffer(); // 6234
	CIndexBufferVulkan::GetBindOffset(); // 6245
	CIndexBufferVulkan::GetVkBuffer(); // 6248
	CRenderDeviceVulkan::MemoryManager(); // 6251
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandReadBufferVulkan_t, 16, true>::CommandHelper_t(); // 143
	CommandReadBufferVulkan_t::CommandReadBufferVulkan_t(); // 6259
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandReadBufferVulkan_t>(
						const CommandReadBufferVulkan_t& obj);  // 6265
} /* size: 0, variables: 7, inline expansions: 25 (837 bytes) */

// <00845532> vulkan/rendercontextvulkan.cpp:6270
// variables: 17
// function calls: 42
void CRenderContextVulkan::GenerateMipMaps(HRenderTexture hTexture)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6275
	const TextureSpecification_t* pTextureSpec; // 6277
	const char   __FUNCTION__; // 22967
	CVulkanImage* pVulkanImage; // 6279
	int32 nSrcWidth; // 6284
	int32 nSrcHeight; // 6285
	VkImageBlit* pRegions; // 6287
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6280
	}
	{
		int32 nMip; // 6288
		{
			int32 nDstWidth; // 6290
			int32 nDstHeight; // 6291
			VkImageLayout nSrcLayout; // 6325
			VkImageLayout nDstLayout; // 6326
			{
				int32 nArraySlice; // 6300
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
				CTextureDesc::GetArrayCount(); // 6300
			}
			Max<int>(const int& val1,
				const int& val2);  // 6290
			Max<int>(const int& val1,
				const int& val2);  // 6291
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
			CTextureDesc::GetArrayCount(); // 6294
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
			CTextureDesc::GetArrayCount(); // 6296
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
			CTextureDesc::GetArrayCount(); // 6328
		}
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 6272
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6275
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6277
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6279
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 6279
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6282
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
	CTextureDesc::GetArrayCount(); // 6287
} /* size: 0, variables: 7, inline expansions: 19 (591 bytes) */

// <008450ED> vulkan/rendercontextvulkan.cpp:6339
// variables: 2
// function calls: 16
void CRenderContextVulkan::QueueDeviceThreadCallback(IDeviceThreadCallback* pDeviceThreadCallback)
{
	CommandDeviceThreadCallback_t deviceThreadCallbackCmd; // 6341
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandDeviceThreadCallback_t, 18, true>::CommandHelper_t(); // 157
	CommandDeviceThreadCallback_t::CommandDeviceThreadCallback_t(); // 6341
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandDeviceThreadCallback_t>(
						const CommandDeviceThreadCallback_t& obj);  // 6343
} /* size: 213, variables: 1, inline expansions: 12 (579 bytes) */

// <00844BDE> vulkan/rendercontextvulkan.cpp:6349
// variable: 1
// function calls: 16
void CRenderContextVulkan::ForceFlushGPU()
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6358; // 6358
		CRenderDeviceVulkan::RenderThread(); // 6358
		CRenderThreadVulkan::GetQueueMutex(); // 6358
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6358
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 6359
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6360
	}
} /* size: 423 */

// <008446CF> vulkan/rendercontextvulkan.cpp:6375
// variables: 6
// function calls: 17
void CRenderContextVulkan::CopyBuffer(IndexBufferHandle_t hDst, IndexBufferHandle_t hSrc)
{
	const char   __FUNCTION__; // 22832
	CIndexBufferVulkan* pSrc; // 6379
	CIndexBufferVulkan* pDst; // 6380
	VulkanCommandBuffer_t* pCommandBuffer; // 6382
	VkBufferCopy region; // 6400
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6377
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6382
	CIndexBufferVulkan::EnsureAllocated(); // 93
	CIndexBufferVulkan::EnsureAllocated(); // 6384
	CRenderDeviceVulkan::MemoryManager(); // 6390
	CIndexBufferBase::GetBufferSizeInBytes(); // 6397
	CIndexBufferVulkan::GetVkBuffer(); // 6390
	CIndexBufferVulkan::GetBindOffset(); // 6401
	CIndexBufferVulkan::GetBindOffset(); // 6402
	Min<int>(const int& val1,
		const int& val2);  // 6403
	CIndexBufferBase::GetBufferSizeInBytes(); // 6403
	CIndexBufferBase::GetBufferSizeInBytes(); // 6403
	CIndexBufferVulkan::GetVkBuffer(); // 6404
	CIndexBufferVulkan::GetVkBuffer(); // 6404
	CRenderDeviceVulkan::MemoryManager(); // 6407
	CIndexBufferVulkan::GetVkBuffer(); // 6407
} /* size: 0, variables: 5, inline expansions: 17 (165 bytes) */

// <00843453> vulkan/rendercontextvulkan.cpp:6422
// variables: 18
// function calls: 72
void CRenderContextVulkan::SetSteamVrCompositorTexture(HRenderTexture hTexture, HRenderTexture hDepthTexture)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6424
	CVulkanImage* pVulkanImage; // 6426
	const VkFormat* pFormat; // 6433
	const char   __FUNCTION__; // 23291
	const TextureSpecification_t* pTextureSpec; // 6435
	CVulkanImage* pVulkanDepthImage; // 6442
	VkFormat nDepthFormat; // 6443
	const TextureSpecification_t* pDepthTextureSpec; // 6444
	CommandSetSteamVrCompositorTexture_t cmd; // 6463
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6434
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6436
	}
	{
		const VkFormat* pDepthFormat; // 6453
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6454
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
		CTextureManagerVulkan::GetVulkanFormat(
				HRenderTexture hTexture);  // 6453
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6453
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6424
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6426
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		TextureSpecification_t::ComputeTextureDimension(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 6426
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 6433
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6433
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6435
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 6446
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 6446
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6448
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6449
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		TextureSpecification_t::ComputeTextureDimension(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 6449
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6465
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandSetSteamVrCompositorTexture_t, 11, true>::CommandHelper_t(); // 217
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 217
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 217
	CommandSetSteamVrCompositorTexture_t::CommandSetSteamVrCompositorTexture_t(); // 6463
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6464
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 217
	CommandSetSteamVrCompositorTexture_t::operator=(
			const CommandSetSteamVrCompositorTexture_t  &);  // 532
	CCommandStreamBuilder::WriteCmd<CommandSetSteamVrCompositorTexture_t>(
							const CommandSetSteamVrCompositorTexture_t& obj);  // 6467
} /* size: 0, variables: 9, inline expansions: 51 (1741 bytes) */

// <00843358> vulkan/rendercontextvulkan.cpp:6475
// variable: 1
// function calls: 3
void CRenderContextVulkan::SemaphoreSignalAtEnd()
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6477
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6477
} /* size: 111, variables: 1, inline expansions: 3 (53 bytes) */

// <0088342B> vulkan/rendercontextvulkan.cpp:6491
// variable: 1
// function calls: 4
void CRenderContextVulkan::SemaphoreWaitAtBegin(RenderSemaphoreHandle_t hSemaphoreObject)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6493
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6493
	{
	}
	CRenderContextVulkan::SemaphoreWaitAtBegin(
				RenderSemaphoreHandle_t hSemaphoreObject);  // 6491
} /* size: 0, variables: 1, inline expansions: 4 (116 bytes) */

// <008432E6> vulkan/rendercontextvulkan.cpp:6491
// variables: 3
void CRenderContextVulkan::SemaphoreWaitAtBegin(RenderSemaphoreHandle_t hSemaphoreObject)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6493
	const char   __FUNCTION__; // 23102
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6495
	}
} /* size: 0, variables: 2 */

// <0084233C> vulkan/rendercontextvulkan.cpp:6509
// variables: 18
// function calls: 57
void CRenderContextVulkan::BeginRenderPass(RenderPassHandle_t hRenderPass, int32 nNumClearValues, const union RenderPassClearValue_t* pClearValues, const Rect_t& renderArea)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6517
	CRenderPassVulkan* pRenderPass; // 6518
	const char   __FUNCTION__; // 22967
	const CSwapChainVulkan* pSwapChain; // 6522
	const CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >& imageTransitions; // 6530
	VkRenderPassBeginInfo renderPassBeginInfo; // 6556
	const CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& colorTargetFormats; // 6600
	VkFormat nDepthStencilFormat; // 6601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6519
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6526
	}
	{
		int32 nAttachment; // 6531
		{
			const VulkanRenderPassImageLayout_t& initialImageTransition; // 6533
			CVulkanImage* pImage; // 6534
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6539
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6546
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6544
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
			{
				RenderTextureDimension_t nTextureDim; // 342
				bool bDimsOkay; // 343
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 483
				CTextureBase::ComputeTextureDimension(); // 342
				CTextureInfoId::GetTextureObject(); // 83
				CTextureVulkan::GetTextureResource(); // 348
			}
			{
			}
			CTextureInfoId::GetTextureObject(); // 83
			CTextureVulkan::GetTextureResource(); // 365
			CTextureManagerVulkan::GetTextureResource(
						HRenderTexture hTexture,
						RenderTextureDimension_t nDim,
						const char* szParamName);  // 6544
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6552
			CUtlMemory<VulkanRenderPassImageLayout_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::operator[](
					int i);  // 6533
		}
		CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::Count(); // 6531
	}
	RenderPassHandle_t::operator==(
			const RenderPassHandle_t& other);  // 6511
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6517
	CRenderDeviceVulkan::RenderPassManager(); // 6518
	CRenderPassVulkan::GetSwapChainHandle(); // 6523
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 6525
	CRenderPassVulkan::GetRenderPass(); // 6559
	Max<int>(const int& val1,
		const int& val2);  // 6568
	Max<int>(const int& val1,
		const int& val2);  // 6569
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 6571
	CRenderPassVulkan::GetFramebufferWidth(); // 6571
	CRenderPassVulkan::GetFramebufferWidth(); // 6572
	CRenderPassVulkan::GetFramebufferHeight(); // 6576
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 6576
	CRenderPassVulkan::GetFramebufferHeight(); // 6577
	Count(const CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int this); // 50
	CRenderPassVulkan::GetNumSubpasses(); // 6596
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int this,
			int i);  // 52
	CRenderPassVulkan::GetColorTargetFormatsForSubPass(
					uint32 nSubPass);  // 6600
	CRenderPassVulkan::GetDepthStencilFormatForSubPass(
					uint32 nSubPass);  // 6601
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Count(); // 6602
	CUtlMemory<VkFormat, int>::Base(); // 113
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Base(); // 6602
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
			VkFormat nDepthStencilFormat);  // 6602
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 6606
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 6607
} /* size: 0, variables: 8, inline expansions: 40 (608 bytes) */

// <00841DDF> vulkan/rendercontextvulkan.cpp:6612
// variables: 11
// function calls: 15
void CRenderContextVulkan::NextSubPass()
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6614
	const char   __FUNCTION__; // 22859
	CRenderPassVulkan* pRenderPass; // 6620
	const CUtlVector<VkFormat, CUtlMemory<VkFormat, int> >& colorTargetFormats; // 6627
	VkFormat nDepthStencilFormat; // 6628
	Rect_t renderArea; // 6633
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6616
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6619
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6624
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6632
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6614
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int this,
			int i);  // 52
	CRenderPassVulkan::GetColorTargetFormatsForSubPass(
					uint32 nSubPass);  // 6627
	CRenderPassVulkan::GetDepthStencilFormatForSubPass(
					uint32 nSubPass);  // 6628
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Count(); // 6629
	CUtlMemory<VkFormat, int>::Base(); // 113
	CUtlVectorBase<VkFormat, CUtlMemory<VkFormat, int> >::Base(); // 6629
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
			VkFormat nDepthStencilFormat);  // 6629
	Rect_t::Rect_t(
		int nX,
		int nY,
		int nWidth,
		int nHeight);  // 6633
} /* size: 0, variables: 6, inline expansions: 15 (447 bytes) */

// <008416ED> vulkan/rendercontextvulkan.cpp:6642
// variables: 14
// function calls: 22
void CRenderContextVulkan::EndRenderPass()
{
	const char   __FUNCTION__; // 22913
	CRenderPassVulkan* pRenderPass; // 6645
	VulkanCommandBuffer_t* pCommandBuffer; // 6647
	const CSwapChainVulkan* pSwapChain; // 6652
	const CUtlVector<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >& imageTransitions; // 6660
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6644
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6656
	}
	{
		int32 nAttachment; // 6661
		{
			const VulkanRenderPassImageLayout_t& imageTransition; // 6663
			{
				CVulkanImage* pImage; // 6669
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6672
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6679
				}
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6677
				CInterlockedIntT<int, 4>::operator int(); // 282
				ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
				{
					RenderTextureDimension_t nTextureDim; // 342
					bool bDimsOkay; // 343
					CTextureInfoId::GetDiskSpec(); // 388
					CTextureBase::GetDiskSpec(); // 483
					CTextureBase::ComputeTextureDimension(); // 342
					CTextureInfoId::GetTextureObject(); // 83
					CTextureVulkan::GetTextureResource(); // 348
				}
				{
				}
				CTextureInfoId::GetTextureObject(); // 83
				CTextureVulkan::GetTextureResource(); // 365
				CTextureManagerVulkan::GetTextureResource(
							HRenderTexture hTexture,
							RenderTextureDimension_t nDim,
							const char* szParamName);  // 6677
			}
			CUtlMemory<VulkanRenderPassImageLayout_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::operator[](
					int i);  // 6663
		}
		CUtlVectorBase<VulkanRenderPassImageLayout_t, CUtlMemory<VulkanRenderPassImageLayout_t, int> >::Count(); // 6661
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6647
	CRenderPassVulkan::GetSwapChainHandle(); // 6653
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 6655
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 6688
} /* size: 0, variables: 5, inline expansions: 7 (105 bytes) */

// <00841585> vulkan/rendercontextvulkan.cpp:6695
// variables: 3
// function calls: 3
void CRenderContextVulkan::SetViewportForSubPass(const CRenderPassVulkan* pRenderPass, uint32_t nSubPass, const Rect_t& renderArea)
{
	int32 nNumViewportsPerSubpass; // 6699
	RenderViewport_t* pViewports; // 6700
	{
		int32 nViewport; // 6701
	}
	CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CRenderPassVulkan::VulkanSubpassInfo_t, CUtlMemory<CRenderPassVulkan::VulkanSubpassInfo_t, int this,
			int i);  // 51
	CRenderPassVulkan::GetNumViewportsForSubPass(
					uint32 nSubPass);  // 6699
} /* size: 404, variables: 2, inline expansions: 3 (26 bytes) */

// <00841078> vulkan/rendercontextvulkan.cpp:6718
// variable: 1
// function calls: 23
void CRenderContextVulkan::GetBarrierHelper()
{
	_Head_base<1, std::default_delete<CBarrierHelperVulkan>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CBarrierHelperVulkan> >::_Tuple_impl(); // 303
	_Head_base<0, CBarrierHelperVulkan::_Head_base(); // 303
	_Tuple_impl<0, CBarrierHelperVulkan::_Tuple_impl(); // 966
	tuple<CBarrierHelperVulkan::tuple(); // 169
	__uniq_ptr_impl<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >::_M_ptr(); // 169
	__uniq_ptr_impl<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >::unique_ptr<>(
			pointer __p);  // 1084
	make_unique<CBarrierHelperVulkan, CRenderContextVulkan*>(void); // 6720
	unique_ptr<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >::get_deleter(); // 374
	unique_ptr<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >::release(); // 374
	default_delete<IBarrierHelper>::default_delete<CBarrierHelperVulkan>(
						const default_delete<CBarrierHelperVulkan>  &);  // 104
	_Head_base<1, std::default_delete<IBarrierHelper>, true>::_Head_base<std::default_delete<CBarrierHelperVulkan> >(
								default_delete<CBarrierHelperVulkan>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IBarrierHelper> >::_Tuple_impl<std::default_delete<CBarrierHelperVulkan> >(
								default_delete<CBarrierHelperVulkan>& __head);  // 315
	_Head_base<0, IBarrierHelper::_Head_base<IBarrierHelper*&>(
					IBarrierHelper *& __h);  // 315
	_Tuple_impl<0, IBarrierHelper::_Tuple_impl<IBarrierHelper*&, std::default_delete<CBarrierHelperVulkan> >(
											IBarrierHelper *& __head);  // 985
	tuple<IBarrierHelper::tuple<IBarrierHelper*&, std::default_delete<CBarrierHelperVulkan> >(); // 174
	__uniq_ptr_impl<IBarrierHelper, std::default_delete<IBarrierHelper> >::__uniq_ptr_impl<std::default_delete<CBarrierHelperVulkan> >(
									pointer __p,
									default_delete<CBarrierHelperVulkan>& __d);  // 234
	__uniq_ptr_data<IBarrierHelper, std::default_delete<IBarrierHelper>, true, true>::__uniq_ptr_data<std::default_delete<CBarrierHelperVulkan> >(
									pointer,
									default_delete<CBarrierHelperVulkan> &);  // 374
	unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> >::unique_ptr<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >(
											unique_ptr<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >& __u);  // 6720
	{
		CBarrierHelperVulkan *& __ptr; // 396
		__uniq_ptr_impl<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >::_M_ptr(); // 396
	}
	unique_ptr<CBarrierHelperVulkan, std::default_delete<CBarrierHelperVulkan> >::~unique_ptr(); // 6720
} /* size: 62, inline expansions: 22 (43 bytes) */

// <008407B7> vulkan/rendercontextvulkan.cpp:6724
// variables: 14
// function calls: 29
void CRenderContextVulkan::TextureBarrier(int32 nNumTextures, const HRenderTexture* pTextures, const RenderImageLayout_t* pImageLayouts, bool bForce)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6726
	const char   __FUNCTION__; // 22940
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6728
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6729
	}
	{
		int32 nTexture; // 6731
		{
			CVulkanImage* pVulkanImage; // 6744
			const TextureSpecification_t* pSpec; // 6746
			const VkFormat* pVKFormat; // 6748
			VkImageAspectFlags nImageAspectFlags; // 6749
			VkImageLayout nImageLayout; // 6751
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6745
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6747
			}
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
			{
				RenderTextureDimension_t nTextureDim; // 342
				bool bDimsOkay; // 343
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 483
				CTextureBase::ComputeTextureDimension(); // 342
				CTextureInfoId::GetTextureObject(); // 83
				CTextureVulkan::GetTextureResource(); // 348
			}
			CTextureInfoId::GetTextureObject(); // 83
			CTextureVulkan::GetTextureResource(); // 365
			{
			}
			CTextureManagerVulkan::GetTextureResource(
						HRenderTexture hTexture,
						RenderTextureDimension_t nDim,
						const char* szParamName);  // 6744
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6746
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6748
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
			CTextureManagerVulkan::GetVulkanFormat(
					HRenderTexture hTexture);  // 6748
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 6733
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 6733
			CRenderDeviceVulkan::LazilyAllocateRenderTargets(); // 6740
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6742
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6744
		}
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6726
} /* size: 0, variables: 2, inline expansions: 3 (55 bytes) */

// <0083FB30> vulkan/rendercontextvulkan.cpp:6756
// variables: 22
// function calls: 32
void CRenderContextVulkan::PerformBarriers(int32 nUAVs, const RenderUAVBarrier_t* pUAVBarriers, int32 nBuffers, const RenderBufferBarrier_t* pBufferBarriers)
{
	const char   __FUNCTION__; // 22967
	VulkanCommandBuffer_t* pCommandBuffer; // 6768
	VkImageMemoryBarrier* pImageMemoryBarriers; // 6770
	VkBufferMemoryBarrier* pBufferMemoryBarriers; // 6773
	VkPipelineStageFlags nSrcStageMask; // 6779
	VkPipelineStageFlags nDstStageMask; // 6780
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6765
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6766
	}
	{
		int32 nUAV; // 6783
		{
			CVulkanImage* pUAV; // 6785
			VkImageMemoryBarrier& imageMemoryBarrier; // 6795
			CTextureVulkan* pTexture; // 6803
			uint32_t nBaseMipLevel; // 6817
			uint32 nLevelCount; // 6818
			VkImageLayout nPreviousImageLayout; // 6846
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6787
			}
			{
				const CTextureDesc* pDesc; // 6829
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6829
			}
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 6861
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6785
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
			{
				RenderTextureDimension_t nTextureDim; // 342
				bool bDimsOkay; // 343
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 483
				CTextureBase::ComputeTextureDimension(); // 342
				CTextureInfoId::GetTextureObject(); // 83
				CTextureVulkan::GetTextureResource(); // 348
			}
			{
			}
			CTextureInfoId::GetTextureObject(); // 83
			CTextureVulkan::GetTextureResource(); // 365
			CTextureManagerVulkan::GetTextureResource(
						HRenderTexture hTexture,
						RenderTextureDimension_t nDim,
						const char* szParamName);  // 6785
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 6803
			CTextureVulkan::GetFormat(); // 6804
			CTextureVulkan::GetFormat(); // 6807
		}
	}
	{
		int32 nBuffer; // 6880
		{
			CVertexBufferVulkan* pGPUBuffer; // 6882
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6883
			}
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 80
			CRenderResource::MarkUsed(
				uint nFrameNumber);  // 6889
			CVertexBufferVulkan::GetVKBuffer(); // 6897
			CVertexBufferVulkan::GetBindOffset(); // 6898
			CVertexBufferVulkan::GetAllocatedSize(); // 6899
		}
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6768
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 6771
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 6774
} /* size: 0, variables: 6, inline expansions: 7 (156 bytes) */

// <0083FAA3> vulkan/rendercontextvulkan.cpp:6907
void CRenderContextVulkan::UAVBarrier(int32 nNumBarriers, const RenderUAVBarrier_t* pBarriers)
{
} /* size: 14 */

// <0083FA16> vulkan/rendercontextvulkan.cpp:6913
void CRenderContextVulkan::BufferBarrier(int32 nNumBuffers, const RenderBufferBarrier_t* pBufferBarriers)
{
} /* size: 18 */

// <00883587> vulkan/rendercontextvulkan.cpp:6919
// variable: 1
// function calls: 6
void CRenderContextVulkan::SetDepthBoundsTestEnabled(bool bEnabled)
{
	CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 6921
	{
	}
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 6924
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 6924
	}
	CRenderContextVulkan::SetDepthBoundsTestEnabled(
					bool bEnabled);  // 6919
	CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 6922
} /* size: 0, inline expansions: 3 (86 bytes) */

// <0083F99E> vulkan/rendercontextvulkan.cpp:6919
// variables: 3
void CRenderContextVulkan::SetDepthBoundsTestEnabled(bool bEnabled)
{
	const char   __FUNCTION__; // 23237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6921
	}
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 6924
	}
} /* size: 0, variables: 1 */

// <00883701> vulkan/rendercontextvulkan.cpp:6931
// variable: 1
// function calls: 6
void CRenderContextVulkan::SetDepthBounds(float flMinDepth, float flMaxDepth)
{
	CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 6933
	{
	}
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 6936
		CCommandStreamBuilder::GetCurrentStream(); // 475
		CRenderContextVulkan::MarkIssuesCommands(); // 474
		CRenderContextVulkan::GetVulkanCommandBuffer(); // 6936
	}
	CRenderContextVulkan::SetDepthBounds(
			float flMinDepth,
			float flMaxDepth);  // 6931
	CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 6934
} /* size: 0, inline expansions: 3 (92 bytes) */

// <0083F919> vulkan/rendercontextvulkan.cpp:6931
// variables: 3
void CRenderContextVulkan::SetDepthBounds(float flMinDepth, float flMaxDepth)
{
	const char   __FUNCTION__; // 22940
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6933
	}
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 6936
	}
} /* size: 0, variables: 1 */

// <0083F6DC> vulkan/rendercontextvulkan.cpp:6947
// variables: 2
// function calls: 5
void CRenderContextVulkan::CopyVulkanBuffer(VkBuffer pBufferSrc, VkBuffer pBufferDst, VkDeviceSize nSize, VkDeviceSize nSrcOffset, VkDeviceSize nDstOffset)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6949
	VkBufferCopy bufferCopy; // 6958
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6949
	CRenderDeviceVulkan::MemoryManager(); // 6952
	CRenderDeviceVulkan::MemoryManager(); // 6966
} /* size: 303, variables: 2, inline expansions: 5 (79 bytes) */

// <0083F33A> vulkan/rendercontextvulkan.cpp:6975
// variables: 8
// function calls: 6
void CRenderContextVulkan::CopyVulkanImage(CVulkanImage* pImageSrc, VkImage pImageDst, uint32 nWidth, uint32 nHeight, uint32 nDepth, uint32 nArrayCount, uint32 nMipCount, RenderMultisampleType_t nMultiSampleType, VkImageAspectFlags nAspectMask)
{
	VulkanCommandBuffer_t* pCommandBuffer; // 6977
	VkImageCopy* pRegions; // 6978
	VkAccessFlags nSrcAccessMask; // 7009
	VkAccessFlags nDstAccessMask; // 7010
	VkPipelineStageFlags nSrcStageMask; // 7011
	VkPipelineStageFlags nDstStageMask; // 7012
	VkImageMemoryBarrier imageMemoryBarrier; // 7019
	{
		uint32 i; // 6979
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 6999
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 7000
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 7001
	}
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::MarkIssuesCommands(); // 474
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 6977
} /* size: 848, variables: 7, inline expansions: 3 (99 bytes) */

// <0083EEC0> vulkan/rendercontextvulkan.cpp:7048
// variables: 2
// function calls: 17
void CRenderContextVulkan::UpdateSwappedImageLayout(CVulkanImage* pImage, VkImageLayout nPrevLayout, VkImageAspectFlags nAspectMask)
{
	CommandUpdateSwappedImageLayout_t cmd; // 7051
	CCommandStreamBuilder::EnsureStream(); // 7050
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandUpdateSwappedImageLayout_t, 21, true>::CommandHelper_t(); // 167
	CommandUpdateSwappedImageLayout_t::CommandUpdateSwappedImageLayout_t(); // 7051
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandUpdateSwappedImageLayout_t>(
							const CommandUpdateSwappedImageLayout_t& obj);  // 7055
} /* size: 332, variables: 1, inline expansions: 13 (807 bytes) */

