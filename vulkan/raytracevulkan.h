
//
// vulkan/raytracevulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 32
//	classes: 5
//

// <007976A2> vulkan/raytracevulkan.h:11
// member functions: 38
// member variables: 14
// vtable entries: 4
// class size: 120
class CBaseAccelerationStructureVulkan : public CRenderResource, public CDescriptorSetReferenced, public IBufferMovedListener {
public:
	/* class CRenderResource <ancestor>; */ /* 0 16 */
	/* class CDescriptorSetReferenced <ancestor>; */ /* 16 16 */
	/* class IBufferMovedListener <ancestor>; */ /* 32 8 */
	void CBaseAccelerationStructureVulkan(CBaseAccelerationStructureVulkan* , const CBaseAccelerationStructureVulkan& );
	/* vulkan/raytracevulkan.cpp:135 */
	void CBaseAccelerationStructureVulkan(CBaseAccelerationStructureVulkan* , VkDevice, RenderResourceType_t, VkBuildAccelerationStructureFlagsKHR);
	/* vulkan/raytracevulkan.cpp:157 */
	virtual void ~CBaseAccelerationStructureVulkan(CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.cpp:151 */
	virtual void DeleteThis(CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.cpp:175 */
	void Create(CBaseAccelerationStructureVulkan* , int, int);
	/* vulkan/raytracevulkan.cpp:208 */
	void Compact(CBaseAccelerationStructureVulkan* , VkCommandBuffer, CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.cpp:225 */
	uint32 GetSizeInBytes(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.cpp:233 */
	uint32 GetCompactedSizeInBytes(CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.h:28 */
	bool IsWaitingForCompactSizeQuery(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.cpp:256 */
	virtual void Free(CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.h:32 */
	VkDevice Device(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.h:33 */
	VkAccelerationStructureKHR AccelerationStructure(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.cpp:263 */
	VkDeviceAddress DeviceAddress(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.h:35 */
	VkBuildAccelerationStructureFlagsKHR BuildFlags(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.h:36 */
	bool IsCompactible(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.h:38 */
	bool IsCompacted(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.h:39 */
	int OriginalUncompactedSizeInBytes(const CBaseAccelerationStructureVulkan* );
	/* vulkan/raytracevulkan.cpp:278 */
	virtual void NotifyBufferMoved(CBaseAccelerationStructureVulkan* , CVertexBufferVulkan* , CRenderContextVulkan* , VkBuffer);
	/* vulkan/raytracevulkan.cpp:314 */
	virtual void NotifyOldBufferDestroyed(CBaseAccelerationStructureVulkan* , CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
protected:
	int m_nOriginalUncompactedSizeInBytes; /* 40 4 */
	VkQueryPool m_pCompactSizeQueryPool; /* 48 8 */
	uint32 m_nCompactedSize; /* 56 4 */
	bool m_bCompactSizeQueryInFlight; /* 60 1 */
private:
	VkBuildAccelerationStructureFlagsKHR m_nBuildFlags; /* 64 4 */
	VkDevice m_pDevice; /* 72 8 */
	VkAccelerationStructureKHR m_pAccelerationStructure; /* 80 8 */
	VkAccelerationStructureKHR m_pNewAccelerationStructure; /* 88 8 */
	RenderBufferHandle_t m_hBuffer; /* 96 8 */
	CBaseAccelerationStructureVulkan * m_pNext; /* 104 8 */
	CBaseAccelerationStructureVulkan * m_pPrev; /* 112 8 */
	VkAccelerationStructureKHR AccelerationStructure(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan21AccelerationStructureEv */
	void CBaseAccelerationStructureVulkan(class CBaseAccelerationStructureVulkan *, const class CBaseAccelerationStructureVulkan  &); /* linkage=_ZN32CBaseAccelerationStructureVulkanC4ERKS_ */
	void CBaseAccelerationStructureVulkan(class CBaseAccelerationStructureVulkan *, VkDevice, enum RenderResourceType_t, VkBuildAccelerationStructureFlagsKHR); /* linkage=_ZN32CBaseAccelerationStructureVulkanC4EP10VkDevice_T20RenderResourceType_tj */
	virtual void ~CBaseAccelerationStructureVulkan(class CBaseAccelerationStructureVulkan *); /* linkage=_ZN32CBaseAccelerationStructureVulkanD4Ev */
	virtual void DeleteThis(class CBaseAccelerationStructureVulkan *); /* linkage=_ZN32CBaseAccelerationStructureVulkan10DeleteThisEv */
	void Create(class CBaseAccelerationStructureVulkan *, int, int); /* linkage=_ZN32CBaseAccelerationStructureVulkan6CreateEii */
	void Compact(class CBaseAccelerationStructureVulkan *, VkCommandBuffer, class CBaseAccelerationStructureVulkan *); /* linkage=_ZN32CBaseAccelerationStructureVulkan7CompactEP17VkCommandBuffer_TPS_ */
	/* <7c0931> vulkan/raytracevulkan.cpp:225 */
	uint32 GetSizeInBytes(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan14GetSizeInBytesEv */
	uint32 GetCompactedSizeInBytes(class CBaseAccelerationStructureVulkan *); /* linkage=_ZN32CBaseAccelerationStructureVulkan23GetCompactedSizeInBytesEv */
	bool IsWaitingForCompactSizeQuery(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan28IsWaitingForCompactSizeQueryEv */
	/* <7c0642> vulkan/raytracevulkan.cpp:256 */
	virtual void Free(class CBaseAccelerationStructureVulkan *); /* linkage=_ZN32CBaseAccelerationStructureVulkan4FreeEv */
	VkDevice Device(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan6DeviceEv */
	VkDeviceAddress DeviceAddress(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan13DeviceAddressEv */
	VkBuildAccelerationStructureFlagsKHR BuildFlags(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan10BuildFlagsEv */
	bool IsCompactible(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan13IsCompactibleEv */
	bool IsCompacted(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan11IsCompactedEv */
	int OriginalUncompactedSizeInBytes(const class CBaseAccelerationStructureVulkan  *); /* linkage=_ZNK32CBaseAccelerationStructureVulkan30OriginalUncompactedSizeInBytesEv */
	virtual void NotifyBufferMoved(class CBaseAccelerationStructureVulkan *, class CVertexBufferVulkan *, class CRenderContextVulkan *, VkBuffer); /* linkage=_ZN32CBaseAccelerationStructureVulkan17NotifyBufferMovedEP19CVertexBufferVulkanP20CRenderContextVulkanP10VkBuffer_T */
	virtual void NotifyOldBufferDestroyed(class CBaseAccelerationStructureVulkan *, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN32CBaseAccelerationStructureVulkan24NotifyOldBufferDestroyedER10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS6_iEE */
} __attribute__((__aligned__(8)));

// <00A592F7> vulkan/raytracevulkan.h:28
inline void CBaseAccelerationStructureVulkan::IsWaitingForCompactSizeQuery()
{
} /* size: 0 */

// <007BF768> vulkan/raytracevulkan.h:32
inline void CBaseAccelerationStructureVulkan::Device()
{
} /* size: 0 */

// <007BF74F> vulkan/raytracevulkan.h:33
inline void CBaseAccelerationStructureVulkan::AccelerationStructure()
{
} /* size: 0 */

// <00A592DE> vulkan/raytracevulkan.h:35
inline void CBaseAccelerationStructureVulkan::BuildFlags()
{
} /* size: 0 */

// <00A592C5> vulkan/raytracevulkan.h:36
inline void CBaseAccelerationStructureVulkan::IsCompactible()
{
} /* size: 0 */

// <00A592AC> vulkan/raytracevulkan.h:38
inline void CBaseAccelerationStructureVulkan::IsCompacted()
{
} /* size: 0 */

// <00A59293> vulkan/raytracevulkan.h:39
inline void CBaseAccelerationStructureVulkan::OriginalUncompactedSizeInBytes()
{
} /* size: 0 */

// <007A7137> vulkan/raytracevulkan.h:70
// member functions: 14
// member variables: 5
// class size: 224
class CBLASVulkan : public CBaseAccelerationStructureVulkan {
public:
	/* class CBaseAccelerationStructureVulkan <ancestor>; */ /* 0 120 */
	void CBLASVulkan(CBLASVulkan* , const CBLASVulkan& );
	/* vulkan/raytracevulkan.cpp:328 */
	void CBLASVulkan(CBLASVulkan* , VkDevice, const BLASCreateDesc_t& );
	/* vulkan/raytracevulkan.cpp:388 */
	void CBLASVulkan(CBLASVulkan* , VkDevice, CBLASVulkan* );
	/* vulkan/raytracevulkan.cpp:409 */
	virtual void ~CBLASVulkan(CBLASVulkan* );
	/* vulkan/raytracevulkan.cpp:414 */
	void Build(CBLASVulkan* , VkCommandBuffer, const BLASTriangleData_t* , int);
	/* vulkan/raytracevulkan.h:85 */
	int NumGeometries(const CBLASVulkan* );
	/* vulkan/raytracevulkan.h:86 */
	CUtlStringToken GeometryName(const CBLASVulkan* , int);
private:
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_GeometryNames; /* 120 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_GeometryMaxPrimitives; /* 152 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_GeometryMaxVertices; /* 184 32 */
	CUtlString m_Name; /* 216 8 */
	void CBLASVulkan(class CBLASVulkan *, const class CBLASVulkan  &); /* linkage=_ZN11CBLASVulkanC4ERKS_ */
	void CBLASVulkan(class CBLASVulkan *, VkDevice, const class BLASCreateDesc_t  &); /* linkage=_ZN11CBLASVulkanC4EP10VkDevice_TRK16BLASCreateDesc_t */
	void CBLASVulkan(class CBLASVulkan *, VkDevice, class CBLASVulkan *); /* linkage=_ZN11CBLASVulkanC4EP10VkDevice_TPS_ */
	virtual void ~CBLASVulkan(class CBLASVulkan *); /* linkage=_ZN11CBLASVulkanD4Ev */
	void Build(class CBLASVulkan *, VkCommandBuffer, const class BLASTriangleData_t  *, int); /* linkage=_ZN11CBLASVulkan5BuildEP17VkCommandBuffer_TPK18BLASTriangleData_ti */
	int NumGeometries(const class CBLASVulkan  *); /* linkage=_ZNK11CBLASVulkan13NumGeometriesEv */
	class CUtlStringToken GeometryName(const class CBLASVulkan  *, int); /* linkage=_ZNK11CBLASVulkan12GeometryNameEi */
} __attribute__((__aligned__(8)));

// <009A5CD0> vulkan/raytracevulkan.h:76
void CBLASVulkan::CBLASVulkan(VkDevice pDevice, const BLASCreateDesc_t& desc)
{
} /* size: 0 */

// <009A5C9C> vulkan/raytracevulkan.h:77
void CBLASVulkan::CBLASVulkan(VkDevice pDevice, CBLASVulkan* pBloated)
{
} /* size: 0 */

// <007BF704> vulkan/raytracevulkan.h:85
inline void CBLASVulkan::NumGeometries()
{
} /* size: 0 */

// <007BF6E1> vulkan/raytracevulkan.h:86
inline void CBLASVulkan::GeometryName(int i)
{
} /* size: 0 */

// <007A6EF0> vulkan/raytracevulkan.h:99
// member functions: 22
// member variables: 7
// vtable entry: 1
// class size: 232
class CTLASVulkan : public CBaseAccelerationStructureVulkan {
public:
	/* class CBaseAccelerationStructureVulkan <ancestor>; */ /* 0 120 */
	void CTLASVulkan(CTLASVulkan* , const CTLASVulkan& );
	/* vulkan/raytracevulkan.cpp:513 */
	void CTLASVulkan(CTLASVulkan* , VkDevice, const TLASCreateDesc_t& );
	/* vulkan/raytracevulkan.cpp:560 */
	virtual void ~CTLASVulkan(CTLASVulkan* );
	/* vulkan/raytracevulkan.cpp:566 */
	virtual void Free(CTLASVulkan* );
	/* vulkan/raytracevulkan.cpp:578 */
	void Build(CTLASVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , const TLASInstance_t* , uint32);
	/* vulkan/raytracevulkan.h:116 */
	uint32 RayTypeCount(const CTLASVulkan* );
	/* vulkan/raytracevulkan.h:117 */
	uint32 MaxHitGroupRecords(const CTLASVulkan* );
	/* vulkan/raytracevulkan.h:119 */
	int InstanceCount(const CTLASVulkan* );
	/* vulkan/raytracevulkan.h:120 */
	CUtlStringToken InstanceName(const CTLASVulkan* , int);
	/* vulkan/raytracevulkan.h:121 */
	uint32 InstanceShaderBindingTableOffset(const CTLASVulkan* , int);
	/* vulkan/raytracevulkan.h:122 */
	const CBLASVulkan* InstanceBLAS(const CTLASVulkan* , int);
private:
	uint32 m_nMaxInstanceCount; /* 120 4 */
	uint32 m_nRayTypeCount; /* 124 4 */
	RenderBufferHandle_t m_hInstanceBuffer; /* 128 8 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_InstanceNames; /* 136 32 */
	CUtlVector<RenderBLASHandle_t__*, CUtlMemory<RenderBLASHandle_t__*, int> > m_InstanceBLAS; /* 168 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_InstanceShaderBindingTableOffsets; /* 200 32 */
	void CTLASVulkan(class CTLASVulkan *, const class CTLASVulkan  &); /* linkage=_ZN11CTLASVulkanC4ERKS_ */
	void CTLASVulkan(class CTLASVulkan *, VkDevice, const class TLASCreateDesc_t  &); /* linkage=_ZN11CTLASVulkanC4EP10VkDevice_TRK16TLASCreateDesc_t */
	virtual void ~CTLASVulkan(class CTLASVulkan *); /* linkage=_ZN11CTLASVulkanD4Ev */
	virtual void Free(class CTLASVulkan *); /* linkage=_ZN11CTLASVulkan4FreeEv */
	void Build(class CTLASVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, const class TLASInstance_t  *, uint32); /* linkage=_ZN11CTLASVulkan5BuildEP20CRenderContextVulkanP21VulkanCommandBuffer_tPK14TLASInstance_tj */
	uint32 RayTypeCount(const class CTLASVulkan  *); /* linkage=_ZNK11CTLASVulkan12RayTypeCountEv */
	uint32 MaxHitGroupRecords(const class CTLASVulkan  *); /* linkage=_ZNK11CTLASVulkan18MaxHitGroupRecordsEv */
	int InstanceCount(const class CTLASVulkan  *); /* linkage=_ZNK11CTLASVulkan13InstanceCountEv */
	class CUtlStringToken InstanceName(const class CTLASVulkan  *, int); /* linkage=_ZNK11CTLASVulkan12InstanceNameEi */
	uint32 InstanceShaderBindingTableOffset(const class CTLASVulkan  *, int); /* linkage=_ZNK11CTLASVulkan32InstanceShaderBindingTableOffsetEi */
	const class CBLASVulkan  * InstanceBLAS(const class CTLASVulkan  *, int); /* linkage=_ZNK11CTLASVulkan12InstanceBLASEi */
} __attribute__((__aligned__(8)));

// <009A5C04> vulkan/raytracevulkan.h:105
void CTLASVulkan::CTLASVulkan(VkDevice pDevice, const TLASCreateDesc_t& desc)
{
} /* size: 0 */

// <007BF6C8> vulkan/raytracevulkan.h:116
inline void CTLASVulkan::RayTypeCount()
{
} /* size: 0 */

// <007BF6AF> vulkan/raytracevulkan.h:117
inline void CTLASVulkan::MaxHitGroupRecords()
{
} /* size: 0 */

// <007BF696> vulkan/raytracevulkan.h:119
inline void CTLASVulkan::InstanceCount()
{
} /* size: 0 */

// <007BF673> vulkan/raytracevulkan.h:120
inline void CTLASVulkan::InstanceName(int i)
{
} /* size: 0 */

// <007BF650> vulkan/raytracevulkan.h:121
inline void CTLASVulkan::InstanceShaderBindingTableOffset(int i)
{
} /* size: 0 */

// <007BF62D> vulkan/raytracevulkan.h:122
inline void CTLASVulkan::InstanceBLAS(int i)
{
} /* size: 0 */

// <00797A55> vulkan/raytracevulkan.h:136
// member functions: 20
// member variables: 15
// class size: 296
class CRayTracePipelineVulkan : public CRenderResource {
public:
	/* class CRenderResource <ancestor>; */ /* 0 16 */
	void CRayTracePipelineVulkan(CRayTracePipelineVulkan* , const CRayTracePipelineVulkan& );
	/* vulkan/raytracevulkan.cpp:689 */
	void CRayTracePipelineVulkan(CRayTracePipelineVulkan* , VkDevice, const RayTracePipelineStateCreateDesc_t& );
	/* vulkan/raytracevulkan.cpp:916 */
	virtual void ~CRayTracePipelineVulkan(CRayTracePipelineVulkan* );
	/* vulkan/raytracevulkan.h:146 */
	VkPipeline Pipeline(const CRayTracePipelineVulkan* );
	/* vulkan/raytracevulkan.h:147 */
	VkPipelineLayout PipelineLayout(const CRayTracePipelineVulkan* );
	/* vulkan/raytracevulkan.h:148 */
	VkShaderStageFlags ShaderStageFlags(const CRayTracePipelineVulkan* );
	/* vulkan/raytracevulkan.h:178 */
	const byte* RayGenBytes(const CRayTracePipelineVulkan* , const CUtlStringToken& );
	/* vulkan/raytracevulkan.h:188 */
	const byte* MissBytes(const CRayTracePipelineVulkan* , const CUtlStringToken& );
	/* vulkan/raytracevulkan.h:198 */
	const byte* HitGroupBytes(const CRayTracePipelineVulkan* , const CUtlStringToken& );
	/* vulkan/raytracevulkan.h:153 */
	uint32 ShaderGroupHandleSize(const CRayTracePipelineVulkan* );
private:
	VkDevice m_pDevice; /* 16 8 */
	VkPipelineLayout m_vkRayTracePipelineLayout; /* 24 8 */
	VkPipeline m_vkRayTracePipeline; /* 32 8 */
	VkShaderStageFlags m_nShaderStageFlags; /* 40 4 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_RayGenShaders; /* 48 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_RayGenIndices; /* 80 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_MissShaders; /* 112 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_MissIndices; /* 144 32 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > m_HitGroups; /* 176 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_HitGroupIndices; /* 208 32 */
	uint32 m_nShaderGroupHandleSize; /* 240 4 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_ShaderHandles; /* 248 32 */
	CRayTracePipelineVulkan * m_pNext; /* 280 8 */
	CRayTracePipelineVulkan * m_pPrev; /* 288 8 */
	void CRayTracePipelineVulkan(class CRayTracePipelineVulkan *, const class CRayTracePipelineVulkan  &); /* linkage=_ZN23CRayTracePipelineVulkanC4ERKS_ */
	void CRayTracePipelineVulkan(class CRayTracePipelineVulkan *, VkDevice, const class RayTracePipelineStateCreateDesc_t  &); /* linkage=_ZN23CRayTracePipelineVulkanC4EP10VkDevice_TRK33RayTracePipelineStateCreateDesc_t */
	virtual void ~CRayTracePipelineVulkan(class CRayTracePipelineVulkan *); /* linkage=_ZN23CRayTracePipelineVulkanD4Ev */
	VkPipeline Pipeline(const class CRayTracePipelineVulkan  *); /* linkage=_ZNK23CRayTracePipelineVulkan8PipelineEv */
	VkPipelineLayout PipelineLayout(const class CRayTracePipelineVulkan  *); /* linkage=_ZNK23CRayTracePipelineVulkan14PipelineLayoutEv */
	VkShaderStageFlags ShaderStageFlags(const class CRayTracePipelineVulkan  *); /* linkage=_ZNK23CRayTracePipelineVulkan16ShaderStageFlagsEv */
	const byte  * RayGenBytes(const class CRayTracePipelineVulkan  *, const class CUtlStringToken  &); /* linkage=_ZNK23CRayTracePipelineVulkan11RayGenBytesERK15CUtlStringToken */
	const byte  * MissBytes(const class CRayTracePipelineVulkan  *, const class CUtlStringToken  &); /* linkage=_ZNK23CRayTracePipelineVulkan9MissBytesERK15CUtlStringToken */
	const byte  * HitGroupBytes(const class CRayTracePipelineVulkan  *, const class CUtlStringToken  &); /* linkage=_ZNK23CRayTracePipelineVulkan13HitGroupBytesERK15CUtlStringToken */
	uint32 ShaderGroupHandleSize(const class CRayTracePipelineVulkan  *); /* linkage=_ZNK23CRayTracePipelineVulkan21ShaderGroupHandleSizeEv */
};

// <009A5B95> vulkan/raytracevulkan.h:143
void CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice pDevice, const RayTracePipelineStateCreateDesc_t& desc)
{
} /* size: 0 */

// <00A5927A> vulkan/raytracevulkan.h:146
inline void CRayTracePipelineVulkan::Pipeline()
{
} /* size: 0 */

// <00A59261> vulkan/raytracevulkan.h:147
inline void CRayTracePipelineVulkan::PipelineLayout()
{
} /* size: 0 */

// <00876752> vulkan/raytracevulkan.h:148
inline void CRayTracePipelineVulkan::ShaderStageFlags()
{
} /* size: 0 */

// <007BF5FB> vulkan/raytracevulkan.h:153
inline void CRayTracePipelineVulkan::ShaderGroupHandleSize()
{
} /* size: 0 */

// <007BF5CA> vulkan/raytracevulkan.h:178
// variable: 1
inline void CRayTracePipelineVulkan::RayGenBytes(const CUtlStringToken& tok)
{
	int nIdx; // 180
} /* size: 0, variables: 1 */

// <007BF599> vulkan/raytracevulkan.h:188
// variable: 1
inline void CRayTracePipelineVulkan::MissBytes(const CUtlStringToken& tok)
{
	int nIdx; // 190
} /* size: 0, variables: 1 */

// <007BF568> vulkan/raytracevulkan.h:198
// variable: 1
inline void CRayTracePipelineVulkan::HitGroupBytes(const CUtlStringToken& tok)
{
	int nIdx; // 200
} /* size: 0, variables: 1 */

// <00797CDC> vulkan/raytracevulkan.h:208
// member functions: 32
// member variables: 17
// vtable entries: 7
// class size: 280
class CRayTraceShaderBindingTableVulkan : public CRenderResource, public IRaytraceShaderBindingTable, public IBufferMovedListener {
public:
	/* class CRenderResource <ancestor>; */ /* 0 16 */
	/* class IRaytraceShaderBindingTable <ancestor>; */ /* 16 8 */
	/* class IBufferMovedListener <ancestor>; */ /* 24 8 */
	void CRayTraceShaderBindingTableVulkan(CRayTraceShaderBindingTableVulkan* , const CRayTraceShaderBindingTableVulkan& );
	/* vulkan/raytracevulkan.cpp:923 */
	void CRayTraceShaderBindingTableVulkan(CRayTraceShaderBindingTableVulkan* , VkDevice, const ShaderBindingTableCreateDesc_t& );
	/* vulkan/raytracevulkan.cpp:937 */
	virtual void ~CRayTraceShaderBindingTableVulkan(CRayTraceShaderBindingTableVulkan* );
	/* vulkan/raytracevulkan.cpp:943 */
	virtual void Free(CRayTraceShaderBindingTableVulkan* );
	/* vulkan/raytracevulkan.cpp:1062 */
	void Update(CRayTraceShaderBindingTableVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* );
	/* vulkan/raytracevulkan.cpp:953 */
	virtual void BindRayGenShader(CRayTraceShaderBindingTableVulkan* , CUtlStringToken);
	/* vulkan/raytracevulkan.cpp:966 */
	virtual void BindMissShader(CRayTraceShaderBindingTableVulkan* , CUtlStringToken, uint32);
	/* vulkan/raytracevulkan.cpp:984 */
	virtual void BindHitGroupForInstance(CRayTraceShaderBindingTableVulkan* , RenderTLASHandle_t, CUtlStringToken, uint32, CUtlStringToken);
	/* vulkan/raytracevulkan.cpp:1027 */
	virtual void BindHitGroupForGeometry(CRayTraceShaderBindingTableVulkan* , RenderTLASHandle_t, CUtlStringToken, CUtlStringToken, uint32, CUtlStringToken);
	/* vulkan/raytracevulkan.cpp:1157 */
	virtual void NotifyBufferMoved(CRayTraceShaderBindingTableVulkan* , CVertexBufferVulkan* , CRenderContextVulkan* , VkBuffer);
	/* vulkan/raytracevulkan.cpp:1163 */
	virtual void NotifyOldBufferDestroyed(CRayTraceShaderBindingTableVulkan* , CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
	/* vulkan/raytracevulkan.h:236 */
	const VkStridedDeviceAddressRegionKHR& RayGenDeviceAddressRegion(const CRayTraceShaderBindingTableVulkan* );
	/* vulkan/raytracevulkan.h:237 */
	const VkStridedDeviceAddressRegionKHR& MissDeviceAddressRegion(const CRayTraceShaderBindingTableVulkan* );
	/* vulkan/raytracevulkan.h:238 */
	const VkStridedDeviceAddressRegionKHR& HitGroupsDeviceAddressRegion(const CRayTraceShaderBindingTableVulkan* );
	/* vulkan/raytracevulkan.h:239 */
	const VkStridedDeviceAddressRegionKHR& CallableDeviceAddressRegion(const CRayTraceShaderBindingTableVulkan* );
	/* vulkan/raytracevulkan.h:241 */
	const CRayTracePipelineVulkan* RayTracePipeline(const CRayTraceShaderBindingTableVulkan* );
private:
	VkDevice m_pDevice; /* 32 8 */
	CRayTracePipelineVulkan * m_pPipeline; /* 40 8 */
	uint32 m_nShaderGroupHandleSize; /* 48 4 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_RayGen; /* 56 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_Miss; /* 88 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_HitGroups; /* 120 32 */
	RenderBufferHandle_t m_hBuffer; /* 152 8 */
	uint32 m_nBufferSize; /* 160 4 */
	VkStridedDeviceAddressRegionKHR m_RayGenRegion; /* 168 24 */
	VkStridedDeviceAddressRegionKHR m_MissRegion; /* 192 24 */
	VkStridedDeviceAddressRegionKHR m_HitGroupsRegion; /* 216 24 */
	VkStridedDeviceAddressRegionKHR m_CallableRegion; /* 240 24 */
	CRayTraceShaderBindingTableVulkan * m_pNext; /* 264 8 */
	CRayTraceShaderBindingTableVulkan * m_pPrev; /* 272 8 */
	void CRayTraceShaderBindingTableVulkan(class CRayTraceShaderBindingTableVulkan *, const class CRayTraceShaderBindingTableVulkan  &); /* linkage=_ZN33CRayTraceShaderBindingTableVulkanC4ERKS_ */
	void CRayTraceShaderBindingTableVulkan(class CRayTraceShaderBindingTableVulkan *, VkDevice, const class ShaderBindingTableCreateDesc_t  &); /* linkage=_ZN33CRayTraceShaderBindingTableVulkanC4EP10VkDevice_TRK30ShaderBindingTableCreateDesc_t */
	virtual void ~CRayTraceShaderBindingTableVulkan(class CRayTraceShaderBindingTableVulkan *); /* linkage=_ZN33CRayTraceShaderBindingTableVulkanD4Ev */
	virtual void Free(class CRayTraceShaderBindingTableVulkan *); /* linkage=_ZN33CRayTraceShaderBindingTableVulkan4FreeEv */
	void Update(class CRayTraceShaderBindingTableVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *); /* linkage=_ZN33CRayTraceShaderBindingTableVulkan6UpdateEP20CRenderContextVulkanP21VulkanCommandBuffer_t */
	virtual void BindRayGenShader(class CRayTraceShaderBindingTableVulkan *, class CUtlStringToken); /* linkage=_ZN33CRayTraceShaderBindingTableVulkan16BindRayGenShaderE15CUtlStringToken */
	virtual void BindMissShader(class CRayTraceShaderBindingTableVulkan *, class CUtlStringToken, uint32); /* linkage=_ZN33CRayTraceShaderBindingTableVulkan14BindMissShaderE15CUtlStringTokenj */
	virtual void BindHitGroupForInstance(class CRayTraceShaderBindingTableVulkan *, RenderTLASHandle_t, class CUtlStringToken, uint32, class CUtlStringToken); /* linkage=_ZN33CRayTraceShaderBindingTableVulkan23BindHitGroupForInstanceEP20RenderTLASHandle_t__15CUtlStringTokenjS2_ */
	virtual void BindHitGroupForGeometry(class CRayTraceShaderBindingTableVulkan *, RenderTLASHandle_t, class CUtlStringToken, class CUtlStringToken, uint32, class CUtlStringToken); /* linkage=_ZN33CRayTraceShaderBindingTableVulkan23BindHitGroupForGeometryEP20RenderTLASHandle_t__15CUtlStringTokenS2_jS2_ */
	/* <7c0673> vulkan/raytracevulkan.cpp:1157 */
	virtual void NotifyBufferMoved(class CRayTraceShaderBindingTableVulkan *, class CVertexBufferVulkan *, class CRenderContextVulkan *, VkBuffer); /* linkage=_ZN33CRayTraceShaderBindingTableVulkan17NotifyBufferMovedEP19CVertexBufferVulkanP20CRenderContextVulkanP10VkBuffer_T */
	/* <7c06d5> vulkan/raytracevulkan.cpp:1163 */
	virtual void NotifyOldBufferDestroyed(class CRayTraceShaderBindingTableVulkan *, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN33CRayTraceShaderBindingTableVulkan24NotifyOldBufferDestroyedER10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS6_iEE */
	const VkStridedDeviceAddressRegionKHR  & RayGenDeviceAddressRegion(const class CRayTraceShaderBindingTableVulkan  *); /* linkage=_ZNK33CRayTraceShaderBindingTableVulkan25RayGenDeviceAddressRegionEv */
	const VkStridedDeviceAddressRegionKHR  & MissDeviceAddressRegion(const class CRayTraceShaderBindingTableVulkan  *); /* linkage=_ZNK33CRayTraceShaderBindingTableVulkan23MissDeviceAddressRegionEv */
	const VkStridedDeviceAddressRegionKHR  & HitGroupsDeviceAddressRegion(const class CRayTraceShaderBindingTableVulkan  *); /* linkage=_ZNK33CRayTraceShaderBindingTableVulkan28HitGroupsDeviceAddressRegionEv */
	const VkStridedDeviceAddressRegionKHR  & CallableDeviceAddressRegion(const class CRayTraceShaderBindingTableVulkan  *); /* linkage=_ZNK33CRayTraceShaderBindingTableVulkan27CallableDeviceAddressRegionEv */
	const class CRayTracePipelineVulkan  * RayTracePipeline(const class CRayTraceShaderBindingTableVulkan  *); /* linkage=_ZNK33CRayTraceShaderBindingTableVulkan16RayTracePipelineEv */
};

// <009A5B61> vulkan/raytracevulkan.h:215
void CRayTraceShaderBindingTableVulkan::CRayTraceShaderBindingTableVulkan(VkDevice pDevice, const ShaderBindingTableCreateDesc_t& desc)
{
} /* size: 0 */

// <00876739> vulkan/raytracevulkan.h:236
inline void CRayTraceShaderBindingTableVulkan::RayGenDeviceAddressRegion()
{
} /* size: 0 */

// <00876720> vulkan/raytracevulkan.h:237
inline void CRayTraceShaderBindingTableVulkan::MissDeviceAddressRegion()
{
} /* size: 0 */

// <00876707> vulkan/raytracevulkan.h:238
inline void CRayTraceShaderBindingTableVulkan::HitGroupsDeviceAddressRegion()
{
} /* size: 0 */

// <008766EE> vulkan/raytracevulkan.h:239
inline void CRayTraceShaderBindingTableVulkan::CallableDeviceAddressRegion()
{
} /* size: 0 */

// <008766CF> vulkan/raytracevulkan.h:241
inline void CRayTraceShaderBindingTableVulkan::RayTracePipeline()
{
} /* size: 0 */

