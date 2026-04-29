
//
// vulkan/raytracevulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 56
//

// <007BEDE7> vulkan/raytracevulkan.cpp:28
// variables: 3
inline VkDeviceAddress DeviceAddress(IndexBufferHandle_t hRenderBuffer)
{
	CIndexBufferVulkan* pBuffer; // 30
	const char   __FUNCTION__; // 40937
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 31
	}
} /* size: 0, variables: 2 */

// <007BEDB8> vulkan/raytracevulkan.cpp:36
inline uint32 AlignUp(uint32 nValue, uint32 nAlignment)
{
} /* size: 0 */

// <007AD9D1> vulkan/raytracevulkan.cpp:43
inline bool HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags, RaytraceBuildFlags_t nFlagToCheck)
{
} /* size: 0 */

// <007AD99B> vulkan/raytracevulkan.cpp:43
inline bool HasFlag<RaytraceGeometryFlags_t>(RaytraceGeometryFlags_t nFlags, RaytraceGeometryFlags_t nFlagToCheck)
{
} /* size: 0 */

// <007AD965> vulkan/raytracevulkan.cpp:43
inline bool HasFlag<RaytraceInstanceFlags_t>(RaytraceInstanceFlags_t nFlags, RaytraceInstanceFlags_t nFlagToCheck)
{
} /* size: 0 */

// <007AD92F> vulkan/raytracevulkan.cpp:43
inline bool HasFlag<RayTraceShaderBits_t>(RayTraceShaderBits_t nFlags, RayTraceShaderBits_t nFlagToCheck)
{
} /* size: 0 */

// <007BECFC> vulkan/raytracevulkan.cpp:80
// variable: 1
inline VkShaderStageFlagBits ToVk(RayTraceShaderBits_t nShaderBits)
{
	VkShaderStageFlags result; // 82
} /* size: 0, variables: 1 */

// <007BECB0> vulkan/raytracevulkan.cpp:109
// variables: 2
inline VkIndexType IndexTypeForByteCount(int32 nByteCount)
{
	const char   __FUNCTION__; // 41133
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
} /* size: 0, variables: 1 */

// <007BEC64> vulkan/raytracevulkan.cpp:122
// variables: 2
inline VkAccelerationStructureTypeKHR AccelerationStructureType(RenderResourceType_t nType)
{
	const char   __FUNCTION__; // 41236
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
	}
} /* size: 0, variables: 1 */

// <007BEA03> vulkan/raytracevulkan.cpp:135
// variables: 2
// function calls: 6
void CBaseAccelerationStructureVulkan::CBaseAccelerationStructureVulkan(VkDevice pDevice, RenderResourceType_t nType, VkBuildAccelerationStructureFlagsKHR nBuildFlags)
{
	{
		VkQueryPoolCreateInfo qpci; // 143
	}
	{
	}
	{
	}
	CRenderResource::CRenderResource(
			RenderResourceType_t nType);  // 71
	CRenderResource::CRenderResource(
			RenderResourceType_t nType);  // 138
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 31
	CDescriptorSetReferenced::CDescriptorSetReferenced(); // 138
	IBufferMovedListener::IBufferMovedListener(); // 138
	{
		VkQueryPoolCreateInfo qpci; // 143
	}
	CBaseAccelerationStructureVulkan::CBaseAccelerationStructureVulkan(
					VkDevice pDevice,
					RenderResourceType_t nType,
					VkBuildAccelerationStructureFlagsKHR nBuildFlags);  // 135
} /* size: 0, inline expansions: 6 (228 bytes) */

// <007BE9B8> vulkan/raytracevulkan.cpp:135
// variable: 1
void CBaseAccelerationStructureVulkan::CBaseAccelerationStructureVulkan(VkDevice pDevice, RenderResourceType_t nType, VkBuildAccelerationStructureFlagsKHR nBuildFlags)
{
	{
		VkQueryPoolCreateInfo qpci; // 143
	}
} /* size: 0 */

// <007BE8BF> vulkan/raytracevulkan.cpp:151
// function calls: 4
void CBaseAccelerationStructureVulkan::DeleteThis()
{
	CRenderDeviceVulkan::MemoryManager(); // 153
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 51
	CBufferMovedListenerDeferredDeletion::CBufferMovedListenerDeferredDeletion(
						IBufferMovedListener* pVmaObject);  // 153
} /* size: 78, inline expansions: 4 (34 bytes) */

// <007BE696> vulkan/raytracevulkan.cpp:157
// function calls: 8
void CBaseAccelerationStructureVulkan::~CBaseAccelerationStructureVulkan()
{
	{
		{
		}
	}
	{
		CRenderDeviceVulkan::MemoryManager(); // 161
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 75
		CVulkanObject<VkAccelerationStructureKHR_T::CVulkanObject(
				VkDevice pDevice,
				VkAccelerationStructureKHR_T* pObject);  // 161
		CBaseAccelerationStructureVulkan::Device(); // 167
		{
		}
		IBufferMovedListener::~IBufferMovedListener(); // 172
		CDescriptorSetReferenced::~CDescriptorSetReferenced(); // 172
		CRenderResource::~CRenderResource(); // 172
	}
} /* size: 0 */

// <007BE630> vulkan/raytracevulkan.cpp:157
void CBaseAccelerationStructureVulkan::~CBaseAccelerationStructureVulkan()
{
} /* size: 36 */

// <007BE5F3> vulkan/raytracevulkan.cpp:157
// variables: 2
void CBaseAccelerationStructureVulkan::~CBaseAccelerationStructureVulkan()
{
	const char   __FUNCTION__; // 41417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 171
	}
} /* size: 0, variables: 1 */

// <007BE062> vulkan/raytracevulkan.cpp:175
// variables: 8
// function calls: 14
void CBaseAccelerationStructureVulkan::Create(int nSize, int nOriginalUncompactedSizeInBytes)
{
	const char   __FUNCTION__; // 40758
	bool bIsCompacted; // 181
	BufferDesc_t desc; // 184
	VkAccelerationStructureCreateInfoKHR asci; // 195
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 178
	}
	{
		CRenderContextVulkanPtr pCtx; // 190
		CRenderContextVulkanPtr::operator CRenderContextVulkan*(); // 191
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 481
		CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 192
	}
	{
		CVertexBufferVulkan* pBuffer; // 199
		CVertexBufferBase::GetBufferSizeInBytes(); // 200
		CVertexBufferVulkan::GetVKBuffer(); // 201
		CVertexBufferVulkan::GetMemoryOffset(); // 202
	}
	CRenderResource::GetResourceType(); // 197
	{
	}
	AccelerationStructureType(RenderResourceType_t nType); // 197
	CBaseAccelerationStructureVulkan::Device(); // 204
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 204
} /* size: 0, variables: 4, inline expansions: 7 (276 bytes) */

// <007BDD38> vulkan/raytracevulkan.cpp:208
// variables: 5
// function calls: 7
void CBaseAccelerationStructureVulkan::Compact(VkCommandBuffer pCommandBuffer, CBaseAccelerationStructureVulkan* pCompacted)
{
	const char   __FUNCTION__; // 40785
	int nSize; // 213
	VkCopyAccelerationStructureInfoKHR copyInfo; // 217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 210
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 214
	}
	CBaseAccelerationStructureVulkan::BuildFlags(); // 36
	CBaseAccelerationStructureVulkan::IsCompactible(); // 210
	CBaseAccelerationStructureVulkan::BuildFlags(); // 36
	CBaseAccelerationStructureVulkan::IsCompactible(); // 211
	CBaseAccelerationStructureVulkan::AccelerationStructure(); // 218
	CBaseAccelerationStructureVulkan::AccelerationStructure(); // 219
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <007C0931> vulkan/raytracevulkan.cpp:225
// variable: 1
// function call: 1
void CBaseAccelerationStructureVulkan::GetSizeInBytes()
{
	CVertexBufferVulkan* pBuffer; // 227
	CVertexBufferBase::GetBufferSizeInBytes(); // 229
} /* size: 12, variables: 1, inline expansions: 1 (4 bytes) */

// <007BDD13> vulkan/raytracevulkan.cpp:225
// variable: 1
void CBaseAccelerationStructureVulkan::GetSizeInBytes()
{
	CVertexBufferVulkan* pBuffer; // 227
} /* size: 0, variables: 1 */

// <007BDBC6> vulkan/raytracevulkan.cpp:233
// variable: 1
// function calls: 2
void CBaseAccelerationStructureVulkan::GetCompactedSizeInBytes()
{
	{
		VkResult vkResult; // 240
		{
			_DebuggerBreakInlineExpressionWrapper(void); // 237
		}
		CBaseAccelerationStructureVulkan::Device(); // 240
	}
} /* size: 0 */

// <007C0642> vulkan/raytracevulkan.cpp:256
void CBaseAccelerationStructureVulkan::Free()
{
} /* size: 53 */

// <007BDB56> vulkan/raytracevulkan.cpp:263
// variables: 4
void CBaseAccelerationStructureVulkan::DeviceAddress()
{
	VkAccelerationStructureDeviceAddressInfoKHR asdai; // 265
	VkDeviceAddress result; // 268
	const char   __FUNCTION__; // 40937
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 270
	}
} /* size: 0, variables: 3 */

// <007BD60C> vulkan/raytracevulkan.cpp:278
// variables: 9
// function calls: 11
void CBaseAccelerationStructureVulkan::NotifyBufferMoved(CVertexBufferVulkan* pMovedBuffer, CRenderContextVulkan* pCopyContext, VkBuffer pNewBuffer)
{
	const char   __FUNCTION__; // 41040
	VkAccelerationStructureKHR pNewAcclerationStructure; // 283
	VkAccelerationStructureCreateInfoKHR asci; // 284
	VulkanCommandBuffer_t* pCommandBuffer; // 295
	VkCopyAccelerationStructureInfoKHR copyInfo; // 300
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 291
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 297
	}
	CRenderResource::GetResourceType(); // 286
	{
	}
	AccelerationStructureType(RenderResourceType_t nType); // 286
	CVertexBufferBase::GetBufferSizeInBytes(); // 288
	CVertexBufferVulkan::GetMemoryOffset(); // 291
	CBaseAccelerationStructureVulkan::Device(); // 293
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 293
	CCommandStreamBuilder::GetCurrentStream(); // 475
	CRenderContextVulkan::GetVulkanCommandBuffer(); // 295
} /* size: 539, variables: 5, inline expansions: 11 (257 bytes) */

// <007BD1AA> vulkan/raytracevulkan.cpp:314
// variables: 2
// function calls: 16
void CBaseAccelerationStructureVulkan::NotifyOldBufferDestroyed(CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
	const char   __FUNCTION__; // 41209
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 316
	}
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::NumAllocated(); // 1247
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsGrowable(); // 823
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsExternallyAllocated(); // 859
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsExternallyAllocated(); // 861
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Grow(
		int num);  // 806
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Base(); // 112
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Base(); // 368
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::GrowMemory(
			int num);  // 1249
	Construct<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CRefCounted<CRefCountServiceBase<true, CRefMT> >*>(CRefCounted<CRefCountServiceBase<true, CRefMT> >** pMemory); // 1252
	CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::operator[](
			int i);  // 602
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Element(
		int i);  // 1252
	CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddToTail(
			CRefCounted<CRefCountServiceBase<true, CRefMT> > *& src);  // 321
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 75
	CVulkanObject<VkAccelerationStructureKHR_T::CVulkanObject(
			VkDevice pDevice,
			VkAccelerationStructureKHR_T* pObject);  // 321
} /* size: 314, variables: 1, inline expansions: 16 (564 bytes) */

// <007BC243> vulkan/raytracevulkan.cpp:328
// variables: 16
// function calls: 57
void CBLASVulkan::CBLASVulkan(VkDevice pDevice, const BLASCreateDesc_t& desc)
{
	{
		CUtlVector<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> > geometries; // 345
		VkAccelerationStructureBuildGeometryInfoKHR buildInfo; // 363
		VkAccelerationStructureBuildSizesInfoKHR asbsi; // 371
		{
			int i; // 338
		}
		{
			int i; // 347
			{
				const BLASTriangleDesc_t& triangleDesc; // 349
				VkAccelerationStructureGeometryKHR& geom; // 351
				VkAccelerationStructureGeometryTrianglesDataKHR& triangles; // 356
			}
		}
	}
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 45
	HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags,
					RaytraceBuildFlags_t nFlagToCheck);  // 52
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 45
	HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags,
					RaytraceBuildFlags_t nFlagToCheck);  // 53
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 45
	HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags,
					RaytraceBuildFlags_t nFlagToCheck);  // 54
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 45
	HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags,
					RaytraceBuildFlags_t nFlagToCheck);  // 55
	ToVk(RaytraceBuildFlags_t nFlags); // 329
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 329
	{
		CUtlVector<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> > geometries; // 345
		VkAccelerationStructureBuildGeometryInfoKHR buildInfo; // 363
		VkAccelerationStructureBuildSizesInfoKHR asbsi; // 371
		CUtlString::operator=(
				const char* src);  // 332
		{
			int i; // 338
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 340
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 341
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 342
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 340
		}
		CUtlMemory<VkAccelerationStructureGeometryKHR, int>::ValidateGrowSize(); // 475
		CUtlMemory<VkAccelerationStructureGeometryKHR, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::CUtlVector(); // 345
		{
			int i; // 347
			{
				const BLASTriangleDesc_t& triangleDesc; // 349
				VkAccelerationStructureGeometryKHR& geom; // 351
				VkAccelerationStructureGeometryTrianglesDataKHR& triangles; // 356
				CUtlMemory<VkAccelerationStructureGeometryKHR, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::operator[](
						int i);  // 351
				{
				}
				IndexTypeForByteCount(int32 nByteCount); // 358
			}
		}
		CBaseAccelerationStructureVulkan::BuildFlags(); // 365
		CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::Count(); // 366
		CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::Base(); // 367
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 378
		CBaseAccelerationStructureVulkan::Device(); // 374
		CUtlMemory<VkAccelerationStructureGeometryKHR, int>::Purge(); // 903
		CUtlMemory<VkAccelerationStructureGeometryKHR, int>::Purge(); // 1799
		CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::Purge(); // 560
		ValidateAlignment<VkAccelerationStructureGeometryKHR>(void); // 508
		CUtlMemory<VkAccelerationStructureGeometryKHR, int>::Purge(); // 510
		CUtlMemory<VkAccelerationStructureGeometryKHR, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::~CUtlVector(); // 385
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 329
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 329
	CUtlString::CUtlString(); // 329
} /* size: 0, inline expansions: 25 (377 bytes) */

// <007BC19A> vulkan/raytracevulkan.cpp:328
// variables: 8
void CBLASVulkan::CBLASVulkan(VkDevice pDevice, const BLASCreateDesc_t& desc)
{
	{
		CUtlVector<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> > geometries; // 345
		VkAccelerationStructureBuildGeometryInfoKHR buildInfo; // 363
		VkAccelerationStructureBuildSizesInfoKHR asbsi; // 371
		{
			int i; // 338
		}
		{
			int i; // 347
			{
				const BLASTriangleDesc_t& triangleDesc; // 349
				VkAccelerationStructureGeometryKHR& geom; // 351
				VkAccelerationStructureGeometryTrianglesDataKHR& triangles; // 356
			}
		}
	}
} /* size: 0 */

// <007BB6C1> vulkan/raytracevulkan.cpp:388
// variables: 2
// function calls: 46
void CBLASVulkan::CBLASVulkan(VkDevice pDevice, CBLASVulkan* pBloated)
{
	{
		{
			int nCompactedSize; // 402
			{
			}
		}
	}
	{
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 31
		CDescriptorSetReferenced::CDescriptorSetReferenced(); // 138
		CRenderResource::CRenderResource(
				RenderResourceType_t nType);  // 138
		IBufferMovedListener::IBufferMovedListener(); // 138
		CBaseAccelerationStructureVulkan::CBaseAccelerationStructureVulkan(
						VkDevice pDevice,
						RenderResourceType_t nType,
						VkBuildAccelerationStructureFlagsKHR nBuildFlags);  // 392
		{
			int nCompactedSize; // 402
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 395
			CUtlString::~CUtlString(); // 395
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 398
			CUtlMemory<CUtlStringToken, int>::Base(); // 112
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 398
			CUtlMemory<CUtlStringToken, int>::Base(); // 112
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 102
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::begin(); // 1344
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 85
			V_memcpy(void* dest,
				const void* src,
				ptrdiff_t count);  // 180
			UtlTraitsCopyRange<CUtlStringToken>(const CUtlStringToken* pFrom,
								const CUtlStringToken* pFromEnd,
								CUtlStringToken* pTo);  // 173
			UtlTraitsCopyRange<CUtlStringToken>(const CUtlStringToken* pFrom,
								const CUtlStringToken* pFromEnd,
								CUtlStringToken* pTo);  // 1344
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CopyArray(
					const CUtlStringToken* pArray,
					int size);  // 398
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 399
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 399
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 400
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 400
			{
			}
			CVertexBufferBase::GetBufferSizeInBytes(); // 229
			CBaseAccelerationStructureVulkan::GetSizeInBytes(); // 405
		}
		CBaseAccelerationStructureVulkan::BuildFlags(); // 392
		CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlStringToken, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 392
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 392
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 392
		CUtlString::CUtlString(); // 392
	}
} /* size: 0 */

// <007BB65B> vulkan/raytracevulkan.cpp:388
// variables: 3
void CBLASVulkan::CBLASVulkan(VkDevice pDevice, CBLASVulkan* pBloated)
{
	const char   __FUNCTION__; // 40883
	{
		int nCompactedSize; // 402
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 403
		}
	}
} /* size: 0, variables: 1 */

// <007BB02F> vulkan/raytracevulkan.cpp:409
// function calls: 31
void CBLASVulkan::~CBLASVulkan()
{
	CUtlString::~CUtlString(); // 411
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 411
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 411
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 411
} /* size: 194, inline expansions: 31 (534 bytes) */

// <007BAFC9> vulkan/raytracevulkan.cpp:409
void CBLASVulkan::~CBLASVulkan()
{
} /* size: 36 */

// <007B94D7> vulkan/raytracevulkan.cpp:414
// variables: 18
// function calls: 93
void CBLASVulkan::Build(VkCommandBuffer pCommandBuffer, const BLASTriangleData_t* pTriangleData, int nTriangleDataCount)
{
	const char   __FUNCTION__; // 40731
	RenderBufferHandle_t hScratch; // 423
	CUtlVector<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> > geometries; // 426
	CUtlVector<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int> > buildRangeInfo; // 430
	CUtlVector<const VkAccelerationStructureBuildRangeInfoKHR*, CUtlMemory<const VkAccelerationStructureBuildRangeInfoKHR*, int> > buildRangeInfoPtrs; // 442
	VkAccelerationStructureBuildGeometryInfoKHR buildInfo; // 478
	VkMemoryBarrier barrier; // 496
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 419
		CUtlString::Get(); // 99
		CUtlString::String(); // 419
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 437
	}
	{
		int i; // 444
		{
			const BLASTriangleData_t& data; // 446
			VkAccelerationStructureGeometryKHR& geom; // 458
			VkAccelerationStructureGeometryTrianglesDataKHR& triangles; // 463
			VkAccelerationStructureBuildRangeInfoKHR& rangeInfo; // 472
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 448
			}
			{
				CVertexBufferVulkan* pVertexBuffer; // 452
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 453
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 454
				}
				CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
									RenderResourceHandle_t hResource,
									bool bAllowDeleted);  // 1271
				CRenderDeviceVulkan::GetVertexBuffer(
						VertexBufferHandle_t hVertexBuffer);  // 452
				CVertexBufferBase::GetBufferType(); // 122
				{
				}
				CVertexBufferBase::GetVertexSize(); // 453
				CVertexBufferBase::GetBufferSizeInBytes(); // 454
			}
			{
			}
			CIndexBufferVulkan::GetBufferDeviceAddress(); // 32
			DeviceAddress(IndexBufferHandle_t hRenderBuffer); // 466
			{
			}
			CVertexBufferVulkan::GetBufferDeviceAddress(); // 24
			DeviceAddress(VertexBufferHandle_t hRenderBuffer); // 470
			CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>  this,
					int i);  // 472
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 448
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 448
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 448
			CUtlMemory<VkAccelerationStructureGeometryKHR, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::operator[](
					int i);  // 458
			operator&(RaytraceGeometryFlags_t a,
					RaytraceGeometryFlags_t b);  // 45
			HasFlag<RaytraceGeometryFlags_t>(RaytraceGeometryFlags_t nFlags,
							RaytraceGeometryFlags_t nFlagToCheck);  // 63
			operator&(RaytraceGeometryFlags_t a,
					RaytraceGeometryFlags_t b);  // 45
			HasFlag<RaytraceGeometryFlags_t>(RaytraceGeometryFlags_t nFlags,
							RaytraceGeometryFlags_t nFlagToCheck);  // 64
			ToVk(RaytraceGeometryFlags_t nFlags); // 461
			{
			}
			IndexTypeForByteCount(int32 nByteCount); // 465
		}
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 419
	CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::ResetDbgInfo(); // 530
	CUtlMemory<VkAccelerationStructureGeometryKHR, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkAccelerationStructureGeometryKHR, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::CUtlVector(); // 426
	CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::ByteCount(); // 428
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 428
	CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int> >::CUtlVector(); // 430
	CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>  this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>  this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>  this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>  this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>  this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>  this,
		int count);  // 431
	ByteCount(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, this); // 432
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 432
	CBaseAccelerationStructureVulkan::BuildFlags(); // 36
	CBaseAccelerationStructureVulkan::IsCompactible(); // 437
	CUtlMemory<const VkAccelerationStructureBuildRangeInfoKHR::ValidateGrowSize(); // 475
	CUtlMemory<const VkAccelerationStructureBuildRangeInfoKHR::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::ResetDbgInfo(); // 530
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const VkAccelerationStructureBuildRangeInfoKHR::CUtlVector(); // 442
	CUtlMemory<const VkAccelerationStructureBuildRangeInfoKHR::Grow(
		int num);  // 806
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::SetCount(
		int count);  // 443
	{
	}
	CVertexBufferVulkan::GetBufferDeviceAddress(); // 16
	DeviceAddress(RenderBufferHandle_t hRenderBuffer); // 487
	CBaseAccelerationStructureVulkan::BuildFlags(); // 480
	CBaseAccelerationStructureVulkan::AccelerationStructure(); // 486
	CUtlMemory<const VkAccelerationStructureBuildRangeInfoKHR::Purge(); // 903
	CUtlMemory<const VkAccelerationStructureBuildRangeInfoKHR::Purge(); // 1799
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::Purge(); // 560
	ValidateAlignment<const VkAccelerationStructureBuildRangeInfoKHR*>(void); // 508
	CUtlMemory<const VkAccelerationStructureBuildRangeInfoKHR::Purge(); // 510
	CUtlMemory<const VkAccelerationStructureBuildRangeInfoKHR::~CUtlMemory(); // 562
	CUtlVectorBase<const VkAccelerationStructureBuildRangeInfoKHR::~CUtlVectorBase(); // 410
	CUtlVector<const VkAccelerationStructureBuildRangeInfoKHR::~CUtlVector(); // 510
	CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>::Purge(); // 903
	CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int> this); // 560
	ValidateAlignment<VkAccelerationStructureBuildRangeInfoKHR>(void); // 508
	CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>::Purge(); // 510
	CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int> this); // 410
	CUtlVector<VkAccelerationStructureBuildRangeInfoKHR, CUtlMemory<VkAccelerationStructureBuildRangeInfoKHR, int> >::~CUtlVector(); // 510
	CUtlMemory<VkAccelerationStructureGeometryKHR, int>::Purge(); // 903
	CUtlMemory<VkAccelerationStructureGeometryKHR, int>::Purge(); // 1799
	CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::Purge(); // 560
	ValidateAlignment<VkAccelerationStructureGeometryKHR>(void); // 508
	CUtlMemory<VkAccelerationStructureGeometryKHR, int>::Purge(); // 510
	CUtlMemory<VkAccelerationStructureGeometryKHR, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkAccelerationStructureGeometryKHR, CUtlMemory<VkAccelerationStructureGeometryKHR, int> >::~CUtlVector(); // 510
} /* size: 0, variables: 7, inline expansions: 66 (2180 bytes) */

// <007B8DE4> vulkan/raytracevulkan.cpp:513
// variables: 8
// function calls: 26
void CTLASVulkan::CTLASVulkan(VkDevice pDevice, const TLASCreateDesc_t& desc)
{
	{
		BufferDesc_t bufDesc; // 519
		VkAccelerationStructureGeometryKHR tlasGeo; // 529
		VkAccelerationStructureBuildGeometryInfoKHR buildInfo; // 535
		VkAccelerationStructureBuildSizesInfoKHR asbsi; // 544
	}
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 45
	HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags,
					RaytraceBuildFlags_t nFlagToCheck);  // 52
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 45
	HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags,
					RaytraceBuildFlags_t nFlagToCheck);  // 53
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 45
	HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags,
					RaytraceBuildFlags_t nFlagToCheck);  // 54
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 45
	HasFlag<RaytraceBuildFlags_t>(RaytraceBuildFlags_t nFlags,
					RaytraceBuildFlags_t nFlagToCheck);  // 55
	ToVk(RaytraceBuildFlags_t nFlags); // 516
	{
		BufferDesc_t bufDesc; // 519
		VkAccelerationStructureGeometryKHR tlasGeo; // 529
		VkAccelerationStructureBuildGeometryInfoKHR buildInfo; // 535
		VkAccelerationStructureBuildSizesInfoKHR asbsi; // 544
		CBaseAccelerationStructureVulkan::BuildFlags(); // 537
		CBaseAccelerationStructureVulkan::Device(); // 546
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 516
	CUtlMemory<RenderBLASHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<RenderBLASHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderBLASHandle_t__::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderBLASHandle_t__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderBLASHandle_t__::CUtlVector(); // 516
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 516
} /* size: 624, inline expansions: 24 (375 bytes) */

// <007B8D7B> vulkan/raytracevulkan.cpp:513
// variables: 4
void CTLASVulkan::CTLASVulkan(VkDevice pDevice, const TLASCreateDesc_t& desc)
{
	{
		BufferDesc_t bufDesc; // 519
		VkAccelerationStructureGeometryKHR tlasGeo; // 529
		VkAccelerationStructureBuildGeometryInfoKHR buildInfo; // 535
		VkAccelerationStructureBuildSizesInfoKHR asbsi; // 544
	}
} /* size: 0 */

// <007B8755> vulkan/raytracevulkan.cpp:560
// function calls: 30
void CTLASVulkan::~CTLASVulkan()
{
	{
		{
		}
	}
	{
		{
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 563
		CUtlVectorBase<RenderBLASHandle_t__::RemoveAll(); // 1798
		CUtlMemory<RenderBLASHandle_t__::IsExternallyAllocated(); // 905
		CUtlMemory<RenderBLASHandle_t__::Purge(); // 903
		CUtlMemory<RenderBLASHandle_t__::Purge(); // 1799
		CUtlVectorBase<RenderBLASHandle_t__::Purge(); // 560
		ValidateAlignment<RenderBLASHandle_t__*>(void); // 508
		CUtlMemory<RenderBLASHandle_t__::Purge(); // 510
		CUtlMemory<RenderBLASHandle_t__::~CUtlMemory(); // 562
		CUtlVectorBase<RenderBLASHandle_t__::~CUtlVectorBase(); // 410
		CUtlVector<RenderBLASHandle_t__::~CUtlVector(); // 563
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
		CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlStringToken, int>::Purge(); // 903
		CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
		ValidateAlignment<CUtlStringToken>(void); // 508
		CUtlMemory<CUtlStringToken, int>::Purge(); // 510
		CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 563
	}
} /* size: 0 */

// <007B86EF> vulkan/raytracevulkan.cpp:560
void CTLASVulkan::~CTLASVulkan()
{
} /* size: 36 */

// <007B86B2> vulkan/raytracevulkan.cpp:560
// variables: 2
void CTLASVulkan::~CTLASVulkan()
{
	const char   __FUNCTION__; // 40910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 562
	}
} /* size: 0, variables: 1 */

// <007B8657> vulkan/raytracevulkan.cpp:566
// function call: 1
void CTLASVulkan::Free()
{
	CBaseAccelerationStructureVulkan::Free(); // 568
} /* size: 87, inline expansions: 1 (32 bytes) */

// <007B6CBD> vulkan/raytracevulkan.cpp:578
// variables: 16
// function calls: 94
void CTLASVulkan::Build(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer, const TLASInstance_t* pInstances, uint32 nInstanceCount)
{
	RenderBufferHandle_t hScratch; // 584
	const char   __FUNCTION__; // 40731
	uint32 nSBTOffset; // 592
	CUtlVector<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> > instanceBuf; // 595
	VkMemoryBarrier barrier; // 638
	VkAccelerationStructureGeometryKHR tlasGeo; // 647
	VkAccelerationStructureBuildGeometryInfoKHR buildInfo; // 655
	VkAccelerationStructureBuildRangeInfoKHR buildOffsetInfo; // 665
	const VkAccelerationStructureBuildRangeInfoKHR* pBuildOffsetInfo; // 670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 587
	}
	{
		uint32 i; // 597
		{
			const TLASInstance_t& src; // 599
			VkAccelerationStructureInstanceKHR& dest; // 605
			const CBLASVulkan* pBlas; // 607
			{
				int* _pCrash; // 602
			}
			CBaseAccelerationStructureVulkan::AccelerationStructure(); // 267
			CBaseAccelerationStructureVulkan::Device(); // 269
			CBaseAccelerationStructureVulkan::DeviceAddress(); // 609
			CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
				int i);  // 1252
			Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory); // 1252
			CUtlMemory<CUtlStringToken, int>::Base(); // 112
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddToTail(
					CUtlStringToken& src);  // 622
			CUtlMemory<RenderBLASHandle_t__::NumAllocated(); // 1196
			CUtlMemory<RenderBLASHandle_t__::Base(); // 112
			CUtlVectorBase<RenderBLASHandle_t__::Base(); // 368
			CUtlVectorBase<RenderBLASHandle_t__::ResetDbgInfo(); // 824
			CUtlMemory<RenderBLASHandle_t__::IsGrowable(); // 823
			CUtlMemory<RenderBLASHandle_t__::IsExternallyAllocated(); // 859
			CUtlMemory<RenderBLASHandle_t__::IsExternallyAllocated(); // 861
			CUtlMemory<RenderBLASHandle_t__::Grow(
				int num);  // 806
			CUtlVectorBase<RenderBLASHandle_t__::GrowMemory(
					int num);  // 1198
			CUtlMemory<RenderBLASHandle_t__::operator[](
					int i);  // 602
			CUtlVectorBase<RenderBLASHandle_t__::Element(
				int i);  // 1201
			CopyConstruct<RenderBLASHandle_t__*>(RenderBLASHandle_t__** pMemory,
								RenderBLASHandle_t__* const& src);  // 1201
			CUtlVectorBase<RenderBLASHandle_t__::AddToTail(
					RenderBLASHandle_t__* const& src);  // 623
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					const unsigned int& src);  // 624
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 85
			CBLASVulkan::NumGeometries(); // 627
			CTLASVulkan::RayTypeCount(); // 627
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 602
			CUtlMemory<VkAccelerationStructureInstanceKHR, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::operator[](
					int i);  // 605
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 613
			operator&(RaytraceInstanceFlags_t a,
					RaytraceInstanceFlags_t b);  // 45
			HasFlag<RaytraceInstanceFlags_t>(RaytraceInstanceFlags_t nFlags,
							RaytraceInstanceFlags_t nFlagToCheck);  // 72
			operator&(RaytraceInstanceFlags_t a,
					RaytraceInstanceFlags_t b);  // 45
			HasFlag<RaytraceInstanceFlags_t>(RaytraceInstanceFlags_t nFlags,
							RaytraceInstanceFlags_t nFlagToCheck);  // 73
			operator&(RaytraceInstanceFlags_t a,
					RaytraceInstanceFlags_t b);  // 45
			HasFlag<RaytraceInstanceFlags_t>(RaytraceInstanceFlags_t nFlags,
							RaytraceInstanceFlags_t nFlagToCheck);  // 74
			operator&(RaytraceInstanceFlags_t a,
					RaytraceInstanceFlags_t b);  // 45
			HasFlag<RaytraceInstanceFlags_t>(RaytraceInstanceFlags_t nFlags,
							RaytraceInstanceFlags_t nFlagToCheck);  // 75
			ToVk(RaytraceInstanceFlags_t nFlags); // 618
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 622
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 588
	CUtlVectorBase<RenderBLASHandle_t__::RemoveAll(); // 589
	CUtlMemory<VkAccelerationStructureInstanceKHR, int>::Grow(
		int num);  // 806
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::SetCount(
		int count);  // 596
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 590
	CUtlMemory<VkAccelerationStructureInstanceKHR, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkAccelerationStructureInstanceKHR, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::CUtlVector(); // 595
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 631
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 632
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::ByteCount(); // 634
	{
	}
	CVertexBufferVulkan::GetBufferDeviceAddress(); // 16
	DeviceAddress(RenderBufferHandle_t hRenderBuffer); // 653
	CBaseAccelerationStructureVulkan::BuildFlags(); // 657
	{
	}
	CVertexBufferVulkan::GetBufferDeviceAddress(); // 16
	DeviceAddress(RenderBufferHandle_t hRenderBuffer); // 663
	CBaseAccelerationStructureVulkan::AccelerationStructure(); // 662
	CUtlMemory<VkAccelerationStructureInstanceKHR, int>::Purge(); // 903
	CUtlMemory<VkAccelerationStructureInstanceKHR, int>::Purge(); // 1799
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::Purge(); // 560
	ValidateAlignment<VkAccelerationStructureInstanceKHR>(void); // 508
	CUtlMemory<VkAccelerationStructureInstanceKHR, int>::Purge(); // 510
	CUtlMemory<VkAccelerationStructureInstanceKHR, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkAccelerationStructureInstanceKHR, CUtlMemory<VkAccelerationStructureInstanceKHR, int> >::~CUtlVector(); // 686
} /* size: 0, variables: 9, inline expansions: 40 (1344 bytes) */

// <007B2628> vulkan/raytracevulkan.cpp:689
// variables: 36
// function calls: 274
void CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice pDevice, const RayTracePipelineStateCreateDesc_t& desc)
{
	{
		{
			const CScopeGuardLambdaImpl<CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const RayTracePipelineStateCreateDesc_t&& generated_id_695; // 695
			CUtlVector<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> > shaderGroups;                                                                                                      // 697
			CUtlVector<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> > stages;                                                                                      // 698
			uint32 nTotalNumShaderGroups;       // 700
			bool bRayGenFound;      // 705
			VkRayTracingPipelineCreateInfoKHR rpci;                 // 851
			VkPipelineCache pPipelineCache;         // 863
			const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& rayTracingPipelineProps;                                                           // 900
			{
				int i;          // 706
				{
					const RayTraceGeneralShader_t& src;                                     // 708
					CShaderVulkanBase* pShader;                            // 710
					VkRayTracingShaderGroupCreateInfoKHR& shaderGroup;                                             // 715
					VkPipelineShaderStageCreateInfo& stage;                                  // 723
					{
					}
				}
			}
			{
			}
			{
				int i;          // 749
				{
					const RayTraceHitShaderGroup_t& src;                                      // 751
					CShaderVulkanBase* pShader;                            // 753
					CUtlStringToken closestHitEntryPoint;                                     // 755
					CUtlStringToken anyHitEntryPoint;                                 // 756
					CUtlStringToken intersectionEntryPoint;                                       // 757
					bool bClosestHit;           // 759
					bool bAnyHit;       // 760
					bool bIntersection;             // 761
					VkRayTracingShaderGroupCreateInfoKHR& shaderGroup;                                             // 766
					{
						VkPipelineShaderStageCreateInfo& stage;                                          // 779
					}
					{
						VkPipelineShaderStageCreateInfo& stage;                                          // 790
					}
					{
						VkPipelineShaderStageCreateInfo& stage;                                          // 801
					}
				}
			}
			{
				VkPipelineLayoutCreateInfo plci;                  // 815
				VkPushConstantRange pushConstantRange;                        // 819
				CUtlVector<VkDescriptorSetLayout_T*, CUtlMemory<VkDescriptorSetLayout_T*, int> > descSetLayouts;                                                                                        // 830
				{
					int i;  // 832
					{
						RenderDescriptorSetHandle_t hDescriptorSet;                                             // 834
						const VulkanDeviceSpecificDescriptorSet_t* pDescSet;                                                              // 839
					}
				}
				{
				}
			}
			{
			}
			{
				VkDeferredOperationKHR hDeferredOp;                     // 873
				VkResult nResult;   // 876
				{
				}
				{
					uint32 nMaxConcurrency;                 // 881
				}
			}
		}
	}
	{
		CRenderResource::CRenderResource(
				RenderResourceType_t nType);  // 692
		CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlStringToken, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 692
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 692
		CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlStringToken, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 692
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 692
		CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlStringToken, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 692
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 692
		{
			const CScopeGuardLambdaImpl<CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const RayTracePipelineStateCreateDesc_t&& generated_id_695; // 695
			CUtlVector<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> > shaderGroups;                                                                                                      // 697
			CUtlVector<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> > stages;                                                                                      // 698
			uint32 nTotalNumShaderGroups;       // 700
			bool bRayGenFound;      // 705
			VkRayTracingPipelineCreateInfoKHR rpci;             // 851
			VkPipelineCache pPipelineCache;         // 863
			const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& rayTracingPipelineProps;                                                           // 900
			ThreadInterlockedIncrement(volatile int32* p);  // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 739
			CRenderDeviceVulkan::StartBuildingRayTracePipeline(); // 694
			CScopeGuardLambdaImpl(const CScopeGuardLambdaImpl<CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const RayTracePipelineStateCreateD this,
						class& lambda);  // 39
			MakeScopeGuardLambda<CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const RayTracePipelineStateCreateDesc_t&)::<lambda()> >(class& lambda); // 695
			CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int>::ValidateGrowSize(); // 475
			CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::CUtlVector(); // 697
			{
				int i; // 706
				{
					const RayTraceGeneralShader_t& src; // 708
					CShaderVulkanBase* pShader; // 710
					VkRayTracingShaderGroupCreateInfoKHR& shaderGroup; // 715
					VkPipelineShaderStageCreateInfo& stage; // 723
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 712
					{
						int i; // 1531
						CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 1531
						CUtlMemory<CUtlStringToken, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
							int i);  // 1533
						CUtlStringToken::operator==(
								const CUtlStringToken& other);  // 1533
					}
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Find(
						const CUtlStringToken& src);  // 1563
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::HasElement(
							const CUtlStringToken& src);  // 265
					CShaderVulkanBase::HasEntryPoint(
							CUtlStringToken entryPoint);  // 712
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::AddToTail(); // 1156
					CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int>::operator[](
							int i);  // 602
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::Element(
						int i);  // 1156
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::AddToTailGetPtr(); // 715
					CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::AddToTail(); // 718
					CUtlMemory<VkPipelineShaderStageCreateInfo, int>::operator[](
							int i);  // 630
					CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::Tail(); // 723
					ToVk(RayTraceShaderBits_t nShaderBits); // 725
					{
					}
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 739
					CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1247
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
						int i);  // 1252
					Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory); // 1252
					CUtlMemory<CUtlStringToken, int>::Base(); // 112
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddToTail(
							CUtlStringToken& src);  // 739
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 740
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 731
					CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1247
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
						int i);  // 1252
					Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory); // 1252
					CUtlMemory<CUtlStringToken, int>::Base(); // 112
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddToTail(
							CUtlStringToken& src);  // 731
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 732
				}
			}
			CUtlMemory<VkPipelineShaderStageCreateInfo, int>::ValidateGrowSize(); // 475
			CUtlMemory<VkPipelineShaderStageCreateInfo, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::CUtlVector(); // 698
			{
			}
			{
				int i; // 749
				{
					const RayTraceHitShaderGroup_t& src; // 751
					CShaderVulkanBase* pShader; // 753
					CUtlStringToken closestHitEntryPoint; // 755
					CUtlStringToken anyHitEntryPoint; // 756
					CUtlStringToken intersectionEntryPoint; // 757
					bool bClosestHit; // 759
					bool bAnyHit; // 760
					bool bIntersection; // 761
					VkRayTracingShaderGroupCreateInfoKHR& shaderGroup; // 766
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 755
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 756
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 757
					{
						int i; // 1531
						CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 1531
						CUtlMemory<CUtlStringToken, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
							int i);  // 1533
						CUtlStringToken::operator==(
								const CUtlStringToken& other);  // 1533
					}
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Find(
						const CUtlStringToken& src);  // 1563
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::HasElement(
							const CUtlStringToken& src);  // 265
					CShaderVulkanBase::HasEntryPoint(
							CUtlStringToken entryPoint);  // 759
					{
						int i; // 1531
						CUtlStringToken::operator==(
								const CUtlStringToken& other);  // 1533
					}
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Find(
						const CUtlStringToken& src);  // 1563
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::HasElement(
							const CUtlStringToken& src);  // 265
					CShaderVulkanBase::HasEntryPoint(
							CUtlStringToken entryPoint);  // 760
					{
						int i; // 1531
						CUtlStringToken::operator==(
								const CUtlStringToken& other);  // 1533
					}
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Find(
						const CUtlStringToken& src);  // 1563
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::HasElement(
							const CUtlStringToken& src);  // 265
					CShaderVulkanBase::HasEntryPoint(
							CUtlStringToken entryPoint);  // 761
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::AddToTail(); // 1156
					CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int>::operator[](
							int i);  // 602
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::Element(
						int i);  // 1156
					CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::AddToTailGetPtr(); // 766
					{
						VkPipelineShaderStageCreateInfo& stage; // 779
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::GrowMemory(
								int num);  // 1145
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::AddToTail(); // 778
						CUtlMemory<VkPipelineShaderStageCreateInfo, int>::operator[](
								int i);  // 630
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::Tail(); // 779
					}
					{
						VkPipelineShaderStageCreateInfo& stage; // 790
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::GrowMemory(
								int num);  // 1145
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::AddToTail(); // 789
						CUtlMemory<VkPipelineShaderStageCreateInfo, int>::operator[](
								int i);  // 630
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::Tail(); // 790
					}
					{
						VkPipelineShaderStageCreateInfo& stage; // 801
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::GrowMemory(
								int num);  // 1145
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::AddToTail(); // 800
						CUtlMemory<VkPipelineShaderStageCreateInfo, int>::operator[](
								int i);  // 630
						CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::Tail(); // 801
					}
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 809
					CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1247
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
						int i);  // 1252
					Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory); // 1252
					CUtlMemory<CUtlStringToken, int>::Base(); // 112
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddToTail(
							CUtlStringToken& src);  // 809
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
							unsigned int& src);  // 810
				}
			}
			{
				VkPipelineLayoutCreateInfo plci; // 815
				VkPushConstantRange pushConstantRange; // 819
				CUtlVector<VkDescriptorSetLayout_T*, CUtlMemory<VkDescriptorSetLayout_T*, int> > descSetLayouts; // 830
				CUtlMemory<VkDescriptorSetLayout_T::ValidateGrowSize(); // 475
				CUtlMemory<VkDescriptorSetLayout_T::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<VkDescriptorSetLayout_T::ResetDbgInfo(); // 530
				CUtlVectorBase<VkDescriptorSetLayout_T::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<VkDescriptorSetLayout_T::CUtlVector(); // 830
				CUtlMemory<VkDescriptorSetLayout_T::Grow(
					int num);  // 806
				CUtlVectorBase<VkDescriptorSetLayout_T::GrowMemory(
						int num);  // 784
				CUtlVectorBase<VkDescriptorSetLayout_T::GrowVector(
						int num);  // 1445
				CUtlVectorBase<VkDescriptorSetLayout_T::InsertMultipleBefore(
							int elem,
							int num);  // 1437
				CUtlVectorBase<VkDescriptorSetLayout_T::InsertMultipleBefore(
							int elem,
							int num);  // 1294
				CUtlVectorBase<VkDescriptorSetLayout_T::AddMultipleToTail(
							int num);  // 1319
				CUtlVectorBase<VkDescriptorSetLayout_T::SetCount(
					int count);  // 831
				CUtlVectorBase<VkDescriptorSetLayout_T::Count(); // 844
				{
				}
				CUtlVectorBase<VkDescriptorSetLayout_T::Base(); // 845
				CUtlString::CUtlString(); // 149
				CUtlString::Get(); // 151
				CUtlString::~CUtlString(); // 153
				_DOVK(VkResult result,
					const char* pCommand);  // 848
				CUtlMemory<VkDescriptorSetLayout_T::Purge(); // 903
				CUtlMemory<VkDescriptorSetLayout_T::Purge(); // 1799
				CUtlVectorBase<VkDescriptorSetLayout_T::Purge(); // 560
				ValidateAlignment<VkDescriptorSetLayout_T*>(void); // 508
				CUtlMemory<VkDescriptorSetLayout_T::Purge(); // 510
				CUtlMemory<VkDescriptorSetLayout_T::~CUtlMemory(); // 562
				CUtlVectorBase<VkDescriptorSetLayout_T::~CUtlVectorBase(); // 410
				CUtlVector<VkDescriptorSetLayout_T::~CUtlVector(); // 849
				{
					int i; // 832
					{
						RenderDescriptorSetHandle_t hDescriptorSet; // 834
						const VulkanDeviceSpecificDescriptorSet_t* pDescSet; // 839
						CUtlVectorBase<VkDescriptorSetLayout_T::operator[](
								int i);  // 842
						CRenderDeviceVulkan::GetDefaultDescriptorSet(); // 836
					}
				}
			}
			{
			}
			CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::Count(); // 853
			CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::Base(); // 854
			Count(const CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> > this); // 855
			CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::Base(); // 856
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 868
			CRenderDeviceVulkan::KHRDeferredHostOperationsEnabled(); // 866
			{
				VkDeferredOperationKHR hDeferredOp; // 873
				VkResult nResult; // 876
				CUtlString::CUtlString(); // 171
				CUtlString::Get(); // 173
				CUtlString::~CUtlString(); // 176
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 167
				_DOVK_RESULT(VkResult result,
						const char* pCommand);  // 158
				_DOVK_RESULT(VkResult result,
						const char* pCommand);  // 874
				{
				}
				{
					uint32 nMaxConcurrency; // 881
					Min<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 881
					Clamp<int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 1187
					Max<int>(const int& val1,
						const int& val2);  // 1187
					Min<int>(const int& val1,
						const int& val2);  // 1190
					{
						atomic_int nIterationCounter; // 1203
						__atomic_base<int>::__atomic_base(
								__int_type __i);  // 843
						atomic<int>::atomic(
							__integral_type __i);  // 1203
						CParallelProcessLauncher::CParallelProcessLauncher(
									int nMaxThreads,
									const char* szDescription,
									IThreadPool* pThreadPool);  // 1204
						IMultipleWorkerJob::IMultipleWorkerJob(); // 627
						CParallelLambdaJob<ParallelFor<>(int, int, char const::CParallelLambdaJob(
									const class& lambda);  // 648
						IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
						CParallelLambdaJob<ParallelFor<>(int, int, char const::~CParallelLambdaJob(); // 650
						CParallelProcessLauncher::operator<< <ParallelFor<>(
																const class& lambda);  // 1204
					}
					{
						int i; // 1195
						{
							VkResult nDeferredResult; // 885
						}
						operator()(const class* __closure,
								int nUnused); // 1197
					}
					ParallelFor<>(int nStart,
							int nEnd,
							const char* pLabel,
							 f,
							int nMinimumIterationsPerJob,
							int nMaxParallelism,
							int nJobRequestSize);  // 883
					CUtlString::CUtlString(); // 149
					CUtlString::Get(); // 151
					CUtlString::~CUtlString(); // 153
					_DOVK(VkResult result,
						const char* pCommand);  // 893
				}
			}
			VulkanPhysicalDeviceInfo(void); // 900
			{
				int i; // 1554
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1554
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 602
				CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
					int i);  // 1556
			}
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue(
					const unsigned char& src);  // 905
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 912
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ByteCount(); // 911
			CRayTracePipelineVulkan::Pipeline(); // 906
			CUtlMemory<VkPipelineShaderStageCreateInfo, int>::Purge(); // 903
			CUtlMemory<VkPipelineShaderStageCreateInfo, int>::Purge(); // 1799
			CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::Purge(); // 560
			ValidateAlignment<VkPipelineShaderStageCreateInfo>(void); // 508
			CUtlMemory<VkPipelineShaderStageCreateInfo, int>::Purge(); // 510
			CUtlMemory<VkPipelineShaderStageCreateInfo, int>::~CUtlMemory(); // 562
			CUtlVectorBase<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::~CUtlVectorBase(); // 410
			CUtlVector<VkPipelineShaderStageCreateInfo, CUtlMemory<VkPipelineShaderStageCreateInfo, int> >::~CUtlVector(); // 913
			CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int>::Purge(); // 903
			CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int>::Purge(); // 1799
			CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::Purge(); // 560
			ValidateAlignment<VkRayTracingShaderGroupCreateInfoKHR>(void); // 508
			CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int>::Purge(); // 510
			CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int>::~CUtlMemory(); // 562
			CUtlVectorBase<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::~CUtlVectorBase(); // 410
			CUtlVector<VkRayTracingShaderGroupCreateInfoKHR, CUtlMemory<VkRayTracingShaderGroupCreateInfoKHR, int> >::~CUtlVector(); // 913
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 592
			CInterlockedIntT<int, 4>::operator--(
					int);  // 740
			CRenderDeviceVulkan::EndBuildingRayTracePipeline(); // 695
			operator()(const class* __closure); // 31
			~CScopeGuardLambdaImpl(const CScopeGuardLambdaImpl<CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const RayTracePipelineStateCreateD this); // 913
		}
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 692
	}
} /* size: 0 */

// <007B15A1> vulkan/raytracevulkan.cpp:916
// function calls: 67
void CRayTracePipelineVulkan::~CRayTracePipelineVulkan()
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 920
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 920
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 920
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 920
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 920
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 920
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 920
} /* size: 334, inline expansions: 67 (1156 bytes) */

// <007B153A> vulkan/raytracevulkan.cpp:916
void CRayTracePipelineVulkan::~CRayTracePipelineVulkan()
{
} /* size: 36 */

// <007B10C1> vulkan/raytracevulkan.cpp:923
// variables: 2
// function calls: 19
void CRayTraceShaderBindingTableVulkan::CRayTraceShaderBindingTableVulkan(VkDevice pDevice, const ShaderBindingTableCreateDesc_t& desc)
{
	{
		const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& rayTracingPipelineProps; // 929
	}
	CRenderResource::CRenderResource(
			RenderResourceType_t nType);  // 927
	IRaytraceShaderBindingTable::IRaytraceShaderBindingTable(); // 927
	IBufferMovedListener::IBufferMovedListener(); // 927
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 927
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 927
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 927
	{
		const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& rayTracingPipelineProps; // 929
		VulkanPhysicalDeviceInfo(void); // 930
	}
} /* size: 220, inline expansions: 18 (261 bytes) */

// <007B107F> vulkan/raytracevulkan.cpp:923
// variable: 1
void CRayTraceShaderBindingTableVulkan::CRayTraceShaderBindingTableVulkan(VkDevice pDevice, const ShaderBindingTableCreateDesc_t& desc)
{
	{
		const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& rayTracingPipelineProps; // 929
	}
} /* size: 0 */

// <007B0B1C> vulkan/raytracevulkan.cpp:937
// function calls: 27
void CRayTraceShaderBindingTableVulkan::~CRayTraceShaderBindingTableVulkan()
{
	{
		{
		}
	}
	{
		{
		}
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 940
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 940
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 940
	}
} /* size: 0 */

// <007B0AB5> vulkan/raytracevulkan.cpp:937
void CRayTraceShaderBindingTableVulkan::~CRayTraceShaderBindingTableVulkan()
{
} /* size: 36 */

// <007B0A78> vulkan/raytracevulkan.cpp:937
// variables: 2
void CRayTraceShaderBindingTableVulkan::~CRayTraceShaderBindingTableVulkan()
{
	const char   __FUNCTION__; // 41444
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 939
	}
} /* size: 0, variables: 1 */

// <007B0A42> vulkan/raytracevulkan.cpp:943
void CRayTraceShaderBindingTableVulkan::Free()
{
} /* size: 65 */

// <007B0580> vulkan/raytracevulkan.cpp:953
// variables: 6
// function calls: 19
void CRayTraceShaderBindingTableVulkan::BindRayGenShader(CUtlStringToken rayGenShader)
{
	uint32 nShaderGroupHandleSize; // 958
	const byte* pSrc; // 959
	byte* pDest; // 960
	const char   __FUNCTION__; // 41013
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 961
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 957
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 957
	CRayTracePipelineVulkan::ShaderGroupHandleSize(); // 958
	{
		int i; // 1531
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 1531
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
			int i);  // 1533
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 1533
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Find(
		const CUtlStringToken& src);  // 180
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 184
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 184
	CRayTracePipelineVulkan::RayGenBytes(
			const CUtlStringToken& tok);  // 959
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 960
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 962
} /* size: 0, variables: 4, inline expansions: 15 (214 bytes) */

// <007B0074> vulkan/raytracevulkan.cpp:966
// variables: 4
// function calls: 21
void CRayTraceShaderBindingTableVulkan::BindMissShader(CUtlStringToken missShader, uint32 nRayType)
{
	uint32 nShaderGroupHandleSize; // 970
	const byte* pSrc; // 971
	byte* pDest; // 972
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 969
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 969
	CRayTracePipelineVulkan::ShaderGroupHandleSize(); // 970
	{
		int i; // 1531
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 1531
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
			int i);  // 1533
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 1533
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Find(
		const CUtlStringToken& src);  // 190
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 194
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 194
	CRayTracePipelineVulkan::MissBytes(
			const CUtlStringToken& tok);  // 971
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 972
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 975
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 979
} /* size: 226, variables: 3, inline expansions: 17 (184 bytes) */

// <007AF552> vulkan/raytracevulkan.cpp:984
// variables: 15
// function calls: 42
void CRayTraceShaderBindingTableVulkan::BindHitGroupForInstance(RenderTLASHandle_t hTLAS, CUtlStringToken instance, uint32 nRayType, CUtlStringToken hitGroup)
{
	const CTLASVulkan* pTLAS; // 986
	const char   __FUNCTION__; // 41182
	uint32 nShaderGroupHandleSize; // 992
	const byte* pSrc; // 993
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 997
	}
	{
		int i; // 1000
		{
			uint32 nRayTypeCount; // 1006
			uint32 nInstanceOffset; // 1007
			uint32 nNumGeometries; // 1008
			{
				uint32 g; // 1009
				{
					uint32 nOffset; // 1011
					byte* pDest; // 1013
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
					}
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 79
					V_memcpy(void* dest,
						const void* src,
						uint count);  // 1016
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ByteCount(); // 1012
					CUtlMemory<unsigned char, int>::Base(); // 112
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1013
					memset(void* __dest,
						int __ch,
						size_t __len);  // 55
					V_memset(void* dest,
						int fill,
						uint count);  // 1020
				}
			}
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 120
			CTLASVulkan::InstanceName(
					int i);  // 1002
			CUtlStringToken::operator!=(
					const CUtlStringToken& other);  // 1002
			CTLASVulkan::RayTypeCount(); // 1006
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 121
			CTLASVulkan::InstanceShaderBindingTableOffset(
							int i);  // 1007
			CUtlMemory<RenderBLASHandle_t__::operator[](
					int i);  // 595
			CUtlVectorBase<RenderBLASHandle_t__::operator[](
					int i);  // 122
			CTLASVulkan::InstanceBLAS(
					int i);  // 1008
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 85
			CBLASVulkan::NumGeometries(); // 1008
		}
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 119
		CTLASVulkan::InstanceCount(); // 1000
	}
	CTLASVulkan::RayTypeCount(); // 988
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 637
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Tail(); // 117
	CTLASVulkan::MaxHitGroupRecords(); // 990
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 991
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 991
	CRayTracePipelineVulkan::ShaderGroupHandleSize(); // 992
	{
		int i; // 1531
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 1531
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
			int i);  // 1533
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 1533
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Find(
		const CUtlStringToken& src);  // 200
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 204
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 204
	CRayTracePipelineVulkan::HitGroupBytes(
			const CUtlStringToken& tok);  // 993
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 997
} /* size: 0, variables: 4, inline expansions: 16 (220 bytes) */

// <007AEA50> vulkan/raytracevulkan.cpp:1027
// variables: 14
// function calls: 43
void CRayTraceShaderBindingTableVulkan::BindHitGroupForGeometry(RenderTLASHandle_t hTLAS, CUtlStringToken instance, CUtlStringToken geometry, uint32 nRayType, CUtlStringToken hitGroup)
{
	const CTLASVulkan* pTLAS; // 1029
	const char   __FUNCTION__; // 41182
	uint32 nShaderGroupHandleSize; // 1035
	const byte* pSrc; // 1036
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1031
	}
	{
		int i; // 1038
		{
			uint32 nRayTypeCount; // 1044
			uint32 nInstanceOffset; // 1045
			const CBLASVulkan* pBlas; // 1046
			{
				int g; // 1047
				{
					uint32 nOffset; // 1052
					byte* pDest; // 1055
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1053
					}
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 79
					V_memcpy(void* dest,
						const void* src,
						uint count);  // 1056
					CUtlMemory<CUtlStringToken, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
							int i);  // 86
					CBLASVulkan::GeometryName(
							int i);  // 1049
					CUtlStringToken::operator!=(
							const CUtlStringToken& other);  // 1049
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ByteCount(); // 1053
					CUtlMemory<unsigned char, int>::Base(); // 112
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1055
				}
				CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 85
				CBLASVulkan::NumGeometries(); // 1047
			}
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 120
			CTLASVulkan::InstanceName(
					int i);  // 1040
			CUtlStringToken::operator!=(
					const CUtlStringToken& other);  // 1040
			CTLASVulkan::RayTypeCount(); // 1044
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 121
			CTLASVulkan::InstanceShaderBindingTableOffset(
							int i);  // 1045
			CUtlMemory<RenderBLASHandle_t__::operator[](
					int i);  // 595
			CUtlVectorBase<RenderBLASHandle_t__::operator[](
					int i);  // 122
			CTLASVulkan::InstanceBLAS(
					int i);  // 1046
		}
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 119
		CTLASVulkan::InstanceCount(); // 1038
	}
	CTLASVulkan::RayTypeCount(); // 1031
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 637
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Tail(); // 117
	CTLASVulkan::MaxHitGroupRecords(); // 1033
	{
		int i; // 1531
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 1531
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 609
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
			int i);  // 1533
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 1533
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Find(
		const CUtlStringToken& src);  // 200
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 204
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 204
	CRayTracePipelineVulkan::HitGroupBytes(
			const CUtlStringToken& tok);  // 1036
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 1034
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 1034
	CRayTracePipelineVulkan::ShaderGroupHandleSize(); // 1035
} /* size: 0, variables: 4, inline expansions: 15 (234 bytes) */

// <007AE09E> vulkan/raytracevulkan.cpp:1062
// variables: 16
// function calls: 33
void CRayTraceShaderBindingTableVulkan::Update(CRenderContextVulkan* pRenderContext, VulkanCommandBuffer_t* pCommandBuffer)
{
	const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& rayTracingPipelineProps; // 1064
	uint32 nShaderGroupHandleSizeAligned; // 1067
	uint32 nRayGenCount; // 1071
	uint32 nMissCount; // 1072
	uint32 nHitCount; // 1073
	uint32 nRequiredSize; // 1074
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > bytes; // 1076
	byte* pDestBytes; // 1080
	const byte* pSrcBytes; // 1082
	VkMemoryBarrier barrier; // 1144
	{
		uint32 i; // 1083
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 1085
	}
	{
		uint32 i; // 1091
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 1093
	}
	{
		uint32 i; // 1099
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 1101
	}
	{
		BufferDesc_t desc; // 1110
	}
	{
		VkMemoryBarrier barrier; // 1125
	}
	VulkanPhysicalDeviceInfo(void); // 1065
	AlignUp(uint32 nValue,
		uint32 nAlignment);  // 1067
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ByteCount(); // 1071
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ByteCount(); // 1072
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ByteCount(); // 1073
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 1076
	{
		int i; // 1554
	}
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue(
			const unsigned char& src);  // 1078
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1082
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1090
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1098
	{
	}
	CVertexBufferVulkan::GetBufferDeviceAddress(); // 16
	DeviceAddress(RenderBufferHandle_t hRenderBuffer); // 1137
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1152
} /* size: 0, variables: 10, inline expansions: 27 (472 bytes) */

// <007C0673> vulkan/raytracevulkan.cpp:1157
void CRayTraceShaderBindingTableVulkan::NotifyBufferMoved(CVertexBufferVulkan* pMovedBuffer, CRenderContextVulkan* pCopyContext, VkBuffer pNewBuffer)
{
	{
	}
} /* size: 36 */

// <007AE012> vulkan/raytracevulkan.cpp:1157
// variables: 2
void CRayTraceShaderBindingTableVulkan::NotifyBufferMoved(CVertexBufferVulkan* pMovedBuffer, CRenderContextVulkan* pCopyContext, VkBuffer pNewBuffer)
{
	const char   __FUNCTION__; // 41040
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1159
	}
} /* size: 0, variables: 1 */

// <007C06D5> vulkan/raytracevulkan.cpp:1163
void CRayTraceShaderBindingTableVulkan::NotifyOldBufferDestroyed(CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
	{
	}
} /* size: 36 */

// <007ADFA0> vulkan/raytracevulkan.cpp:1163
// variables: 2
void CRayTraceShaderBindingTableVulkan::NotifyOldBufferDestroyed(CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> > vecQueueToDeleteOut)
{
	const char   __FUNCTION__; // 41209
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1165
	}
} /* size: 0, variables: 1 */

