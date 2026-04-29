
//
// vulkan/vulkanfunctions.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 45
//	classes: 5
//

// <00834445> vulkan/vulkanfunctions.h:32
VkImageLayout RenderImageLayoutToVulkanLayout(RenderImageLayout_t)
{
} /* size: 0 */

// <00834429> vulkan/vulkanfunctions.h:37
VkPipelineStageFlags GetVulkanPipelineStageFlags(RenderBarrierPipelineStageFlags_t)
{
} /* size: 0 */

// <0083440D> vulkan/vulkanfunctions.h:42
VkAccessFlags GetVulkanAccessFlags(RenderBarrierAccessFlags_t)
{
} /* size: 0 */

// <004A4559> vulkan/vulkanfunctions.h:47
uint32 GetDescriptorTypeMask(VkDescriptorType)
{
} /* size: 0 */

// <009A664F> vulkan/vulkanfunctions.h:52
bool IsExtensionSupported(VkExtensionProperties *, uint32_t, const char *)
{
} /* size: 0 */

// <008BF8BF> vulkan/vulkanfunctions.h:57
bool IsExtensionEnabled(const char* *, uint32_t, const char *)
{
} /* size: 0 */

// <004FD179> vulkan/vulkanfunctions.h:62
void VulkanBeginDebugMarker(VkCommandBuffer, const char *, const Vector4D &)
{
} /* size: 0 */

// <004FD161> vulkan/vulkanfunctions.h:63
void VulkanEndDebugMarker(VkCommandBuffer)
{
} /* size: 0 */

// <00408353> vulkan/vulkanfunctions.h:71
// member functions: 14
// member variables: 3
// class size: 32
class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CVulkanObject(CVulkanObject<VkSampler_T*, (& vkDestroySampler)>* , const CVulkanObject<VkSampler_T*, (& vkDestroySampler)>& );
	/* vulkan/vulkanfunctions.h:74 */
	void CVulkanObject(CVulkanObject<VkSampler_T*, (& vkDestroySampler)>* , VkDevice);
	/* vulkan/vulkanfunctions.h:75 */
	void CVulkanObject(CVulkanObject<VkSampler_T*, (& vkDestroySampler)>* , VkDevice, VkSampler_T* );
	/* vulkan/vulkanfunctions.h:76 */
	virtual void ~CVulkanObject(CVulkanObject<VkSampler_T*, (& vkDestroySampler)>* );
	/* vulkan/vulkanfunctions.h:78 */
	VkSampler_T* Get(CVulkanObject<VkSampler_T*, (& vkDestroySampler)>* );
	/* vulkan/vulkanfunctions.h:79 */
	VkSampler_T** GetPtr(CVulkanObject<VkSampler_T*, (& vkDestroySampler)>* );
protected:
	/* vulkan/vulkanfunctions.h:82 */
	void DestroyObject(CVulkanObject<VkSampler_T*, (& vkDestroySampler)>* );
	VkDevice m_pDevice; /* 16 8 */
	VkSampler_T * m_pObject; /* 24 8 */
	void CVulkanObject(class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> *, const class CVulkanObject<VkSampler_T*, (& vkDestroySampler)>  &); /* linkage=_ZN13CVulkanObjectIP11VkSampler_TXadL_Z16vkDestroySamplerEEEC4ERKS2_ */
	void CVulkanObject(class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> *, VkDevice); /* linkage=_ZN13CVulkanObjectIP11VkSampler_TXadL_Z16vkDestroySamplerEEEC4EP10VkDevice_T */
	void CVulkanObject(class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> *, VkDevice, class VkSampler_T *); /* linkage=_ZN13CVulkanObjectIP11VkSampler_TXadL_Z16vkDestroySamplerEEEC4EP10VkDevice_TS1_ */
	virtual void ~CVulkanObject(class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> *); /* linkage=_ZN13CVulkanObjectIP11VkSampler_TXadL_Z16vkDestroySamplerEEED4Ev */
	class VkSampler_T * Get(class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> *); /* linkage=_ZN13CVulkanObjectIP11VkSampler_TXadL_Z16vkDestroySamplerEEE3GetEv */
	class VkSampler_T * * GetPtr(class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> *); /* linkage=_ZN13CVulkanObjectIP11VkSampler_TXadL_Z16vkDestroySamplerEEE6GetPtrEv */
	void DestroyObject(class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> *); /* linkage=_ZN13CVulkanObjectIP11VkSampler_TXadL_Z16vkDestroySamplerEEE13DestroyObjectEv */
};

// <00781183> vulkan/vulkanfunctions.h:71
// member functions: 14
// member variables: 3
// class size: 32
class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)> : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CVulkanObject(CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>* , const CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>& );
	/* vulkan/vulkanfunctions.h:74 */
	void CVulkanObject(CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>* , VkDevice);
	/* vulkan/vulkanfunctions.h:75 */
	void CVulkanObject(CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>* , VkDevice, VkAccelerationStructureKHR_T* );
	/* vulkan/vulkanfunctions.h:76 */
	virtual void ~CVulkanObject(CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>* );
	/* vulkan/vulkanfunctions.h:78 */
	VkAccelerationStructureKHR_T* Get(CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>* );
	/* vulkan/vulkanfunctions.h:79 */
	VkAccelerationStructureKHR_T** GetPtr(CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>* );
protected:
	/* vulkan/vulkanfunctions.h:82 */
	void DestroyObject(CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>* );
	VkDevice m_pDevice; /* 16 8 */
	VkAccelerationStructureKHR_T * m_pObject; /* 24 8 */
	void CVulkanObject(class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)> *, const class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)>  &); /* linkage=_ZN13CVulkanObjectIP28VkAccelerationStructureKHR_TXadL_Z33vkDestroyAccelerationStructureKHREEEC4ERKS2_ */
	void CVulkanObject(class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)> *, VkDevice); /* linkage=_ZN13CVulkanObjectIP28VkAccelerationStructureKHR_TXadL_Z33vkDestroyAccelerationStructureKHREEEC4EP10VkDevice_T */
	void CVulkanObject(class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)> *, VkDevice, class VkAccelerationStructureKHR_T *); /* linkage=_ZN13CVulkanObjectIP28VkAccelerationStructureKHR_TXadL_Z33vkDestroyAccelerationStructureKHREEEC4EP10VkDevice_TS1_ */
	virtual void ~CVulkanObject(class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)> *); /* linkage=_ZN13CVulkanObjectIP28VkAccelerationStructureKHR_TXadL_Z33vkDestroyAccelerationStructureKHREEED4Ev */
	class VkAccelerationStructureKHR_T * Get(class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)> *); /* linkage=_ZN13CVulkanObjectIP28VkAccelerationStructureKHR_TXadL_Z33vkDestroyAccelerationStructureKHREEE3GetEv */
	class VkAccelerationStructureKHR_T * * GetPtr(class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)> *); /* linkage=_ZN13CVulkanObjectIP28VkAccelerationStructureKHR_TXadL_Z33vkDestroyAccelerationStructureKHREEE6GetPtrEv */
	void DestroyObject(class CVulkanObject<VkAccelerationStructureKHR_T*, (& vkDestroyAccelerationStructureKHR)> *); /* linkage=_ZN13CVulkanObjectIP28VkAccelerationStructureKHR_TXadL_Z33vkDestroyAccelerationStructureKHREEE13DestroyObjectEv */
};

// <00C0F86C> vulkan/vulkanfunctions.h:71
// member functions: 7
// member variables: 3
// class size: 32
class CVulkanObject<VkImageView_T*, (& vkDestroyImageView)> : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CVulkanObject(CVulkanObject<VkImageView_T*, (& vkDestroyImageView)>* , const CVulkanObject<VkImageView_T*, (& vkDestroyImageView)>& );
	/* vulkan/vulkanfunctions.h:74 */
	void CVulkanObject(CVulkanObject<VkImageView_T*, (& vkDestroyImageView)>* , VkDevice);
	/* vulkan/vulkanfunctions.h:75 */
	void CVulkanObject(CVulkanObject<VkImageView_T*, (& vkDestroyImageView)>* , VkDevice, VkImageView_T* );
	/* vulkan/vulkanfunctions.h:76 */
	virtual void ~CVulkanObject(CVulkanObject<VkImageView_T*, (& vkDestroyImageView)>* );
	/* vulkan/vulkanfunctions.h:78 */
	VkImageView_T* Get(CVulkanObject<VkImageView_T*, (& vkDestroyImageView)>* );
	/* vulkan/vulkanfunctions.h:79 */
	VkImageView_T** GetPtr(CVulkanObject<VkImageView_T*, (& vkDestroyImageView)>* );
protected:
	/* vulkan/vulkanfunctions.h:82 */
	void DestroyObject(CVulkanObject<VkImageView_T*, (& vkDestroyImageView)>* );
	VkDevice m_pDevice; /* 16 8 */
	VkImageView_T * m_pObject; /* 24 8 */
};

// <00C7C212> vulkan/vulkanfunctions.h:71
// member functions: 7
// member variables: 3
// class size: 32
class CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)> : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CVulkanObject(CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)>* , const CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)>& );
	/* vulkan/vulkanfunctions.h:74 */
	void CVulkanObject(CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)>* , VkDevice);
	/* vulkan/vulkanfunctions.h:75 */
	void CVulkanObject(CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)>* , VkDevice, VkBufferView_T* );
	/* vulkan/vulkanfunctions.h:76 */
	virtual void ~CVulkanObject(CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)>* );
	/* vulkan/vulkanfunctions.h:78 */
	VkBufferView_T* Get(CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)>* );
	/* vulkan/vulkanfunctions.h:79 */
	VkBufferView_T** GetPtr(CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)>* );
protected:
	/* vulkan/vulkanfunctions.h:82 */
	void DestroyObject(CVulkanObject<VkBufferView_T*, (& vkDestroyBufferView)>* );
	VkDevice m_pDevice; /* 16 8 */
	VkBufferView_T * m_pObject; /* 24 8 */
};

// <00C303D5> vulkan/vulkanfunctions.h:74
void CVulkanObject<VkImageView_T::CVulkanObject(VkDevice pDevice)
{
} /* size: 0 */

// <00C303B0> vulkan/vulkanfunctions.h:74
inline void CVulkanObject<VkImageView_T::CVulkanObject(VkDevice pDevice)
{
} /* size: 0 */

// <00C831D1> vulkan/vulkanfunctions.h:75
void CVulkanObject<VkBufferView_T::CVulkanObject(VkDevice pDevice, VkBufferView_T* pObject)
{
} /* size: 0 */

// <00C831A0> vulkan/vulkanfunctions.h:75
inline void CVulkanObject<VkBufferView_T::CVulkanObject(VkDevice pDevice, VkBufferView_T* pObject)
{
} /* size: 0 */

// <00C30767> vulkan/vulkanfunctions.h:75
void CVulkanObject<VkSampler_T::CVulkanObject(VkDevice pDevice, VkSampler_T* pObject)
{
} /* size: 0 */

// <00C30736> vulkan/vulkanfunctions.h:75
inline void CVulkanObject<VkSampler_T::CVulkanObject(VkDevice pDevice, VkSampler_T* pObject)
{
} /* size: 0 */

// <007AD90E> vulkan/vulkanfunctions.h:75
void CVulkanObject<VkAccelerationStructureKHR_T::CVulkanObject(VkDevice pDevice, VkAccelerationStructureKHR_T* pObject)
{
} /* size: 0 */

// <007AD8DD> vulkan/vulkanfunctions.h:75
inline void CVulkanObject<VkAccelerationStructureKHR_T::CVulkanObject(VkDevice pDevice, VkAccelerationStructureKHR_T* pObject)
{
} /* size: 0 */

// <00C82EAA> vulkan/vulkanfunctions.h:76
// function call: 1
void CVulkanObject<VkBufferView_T::~CVulkanObject()>* this)
{
	CVulkanObject<VkBufferView_T::DestroyObject()>* this); // 76
} /* size: 49, inline expansions: 1 (34 bytes) */

// <00C82D9C> vulkan/vulkanfunctions.h:76
// function calls: 4
void CVulkanObject<VkBufferView_T::~CVulkanObject()>* this)
{
	CVulkanObject<VkBufferView_T::DestroyObject()>* this); // 76
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 76
	CVulkanObject<VkBufferView_T::~CVulkanObject()>* this); // 76
} /* size: 68, inline expansions: 4 (58 bytes) */

// <00C82D83> vulkan/vulkanfunctions.h:76
inline void CVulkanObject<VkBufferView_T::~CVulkanObject()>* this)
{
} /* size: 0 */

// <00C306CD> vulkan/vulkanfunctions.h:76
// function call: 1
void CVulkanObject<VkSampler_T::~CVulkanObject()>* this)
{
	CVulkanObject<VkSampler_T::DestroyObject()>* this); // 76
} /* size: 49, inline expansions: 1 (34 bytes) */

// <00C305BC> vulkan/vulkanfunctions.h:76
// function calls: 4
void CVulkanObject<VkSampler_T::~CVulkanObject()>* this)
{
	CVulkanObject<VkSampler_T::DestroyObject()>* this); // 76
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 76
	CVulkanObject<VkSampler_T::~CVulkanObject()>* this); // 76
} /* size: 68, inline expansions: 4 (58 bytes) */

// <00C305A3> vulkan/vulkanfunctions.h:76
inline void CVulkanObject<VkSampler_T::~CVulkanObject()>* this)
{
} /* size: 0 */

// <00C241C8> vulkan/vulkanfunctions.h:76
// function call: 1
void CVulkanObject<VkImageView_T::~CVulkanObject()>* this)
{
	CVulkanObject<VkImageView_T::DestroyObject()>* this); // 76
} /* size: 49, inline expansions: 1 (34 bytes) */

// <00C240B7> vulkan/vulkanfunctions.h:76
// function calls: 4
void CVulkanObject<VkImageView_T::~CVulkanObject()>* this)
{
	CVulkanObject<VkImageView_T::DestroyObject()>* this); // 76
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 76
	CVulkanObject<VkImageView_T::~CVulkanObject()>* this); // 76
} /* size: 68, inline expansions: 4 (58 bytes) */

// <00C2409E> vulkan/vulkanfunctions.h:76
inline void CVulkanObject<VkImageView_T::~CVulkanObject()>* this)
{
} /* size: 0 */

// <00B762F4> vulkan/vulkanfunctions.h:76
void CVulkanObject<VkSampler_T::~CVulkanObject()>* this)
{
} /* size: 0 */

// <007A8784> vulkan/vulkanfunctions.h:76
// function call: 1
void CVulkanObject<VkAccelerationStructureKHR_T::~CVulkanObject()>* this)
{
	CVulkanObject<VkAccelerationStructureKHR_T::DestroyObject()>* this); // 76
} /* size: 49, inline expansions: 1 (34 bytes) */

// <007A8672> vulkan/vulkanfunctions.h:76
// function calls: 4
void CVulkanObject<VkAccelerationStructureKHR_T::~CVulkanObject()>* this)
{
	CVulkanObject<VkAccelerationStructureKHR_T::DestroyObject()>* this); // 76
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 76
	CVulkanObject<VkAccelerationStructureKHR_T::~CVulkanObject()>* this); // 76
} /* size: 68, inline expansions: 4 (58 bytes) */

// <007A8659> vulkan/vulkanfunctions.h:76
inline void CVulkanObject<VkAccelerationStructureKHR_T::~CVulkanObject()>* this)
{
} /* size: 0 */

// <00AC74BA> vulkan/vulkanfunctions.h:78
inline void CVulkanObject<VkImageView_T::Get()>* this)
{
} /* size: 0 */

// <0083DCBA> vulkan/vulkanfunctions.h:78
inline void CVulkanObject<VkSampler_T::Get()>* this)
{
} /* size: 0 */

// <00C30397> vulkan/vulkanfunctions.h:79
inline void CVulkanObject<VkImageView_T::GetPtr()>* this)
{
} /* size: 0 */

// <00C82D6A> vulkan/vulkanfunctions.h:82
inline void CVulkanObject<VkBufferView_T::DestroyObject()>* this)
{
} /* size: 0 */

// <00C3058A> vulkan/vulkanfunctions.h:82
inline void CVulkanObject<VkSampler_T::DestroyObject()>* this)
{
} /* size: 0 */

// <00C24021> vulkan/vulkanfunctions.h:82
inline void CVulkanObject<VkImageView_T::DestroyObject()>* this)
{
} /* size: 0 */

// <00B762AC> vulkan/vulkanfunctions.h:82
void CVulkanObject<VkSampler_T::DestroyObject()>* this)
{
} /* size: 0 */

// <007A8640> vulkan/vulkanfunctions.h:82
inline void CVulkanObject<VkAccelerationStructureKHR_T::DestroyObject()>* this)
{
} /* size: 0 */

// <00BEF6C6> vulkan/vulkanfunctions.h:107
// member functions: 10
// member variables: 2
// class size: 40
class CVulkanSamplerObject : public CVulkanObject<VkSampler_T*, (& vkDestroySampler)> {
public:
	/* class CVulkanObject<VkSampler_T*, (& vkDestroySampler)> <ancestor>; */ /* 0 32 */
	void CVulkanSamplerObject(CVulkanSamplerObject* , const CVulkanSamplerObject& );
	/* vulkan/vulkanfunctions.h:110 */
	void CVulkanSamplerObject(CVulkanSamplerObject* , VkDevice, VkSampler, uint);
	/* vulkan/texturevulkan.cpp:1676 */
	virtual void ~CVulkanSamplerObject(CVulkanSamplerObject* );
	/* vulkan/vulkanfunctions.h:114 */
	void ReplaceSampler(CVulkanSamplerObject* , VkSampler);
	/* vulkan/vulkanfunctions.h:121 */
	uint Id(const CVulkanSamplerObject* );
private:
	const uint m_nSamplerId; /* 32 4 */
	uint Id(const class CVulkanSamplerObject  *); /* linkage=_ZNK20CVulkanSamplerObject2IdEv */
	void ReplaceSampler(class CVulkanSamplerObject *, VkSampler); /* linkage=_ZN20CVulkanSamplerObject14ReplaceSamplerEP11VkSampler_T */
	void CVulkanSamplerObject(class CVulkanSamplerObject *, const class CVulkanSamplerObject  &); /* linkage=_ZN20CVulkanSamplerObjectC4ERKS_ */
	void CVulkanSamplerObject(class CVulkanSamplerObject *, VkDevice, VkSampler, uint); /* linkage=_ZN20CVulkanSamplerObjectC4EP10VkDevice_TP11VkSampler_Tj */
	virtual void ~CVulkanSamplerObject(class CVulkanSamplerObject *); /* linkage=_ZN20CVulkanSamplerObjectD4Ev */
};

// <00C50570> vulkan/vulkanfunctions.h:110
void CVulkanSamplerObject::CVulkanSamplerObject(VkDevice pDevice, VkSampler pSampler, uint nSamplerId)
{
} /* size: 0 */

// <00C50533> vulkan/vulkanfunctions.h:110
inline void CVulkanSamplerObject::CVulkanSamplerObject(VkDevice pDevice, VkSampler pSampler, uint nSamplerId)
{
} /* size: 0 */

// <00A5A6E8> vulkan/vulkanfunctions.h:114
// variables: 2
inline void CVulkanSamplerObject::ReplaceSampler(VkSampler pNewSampler)
{
	const char   __FUNCTION__; // 28732
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
} /* size: 0, variables: 1 */

// <00C5051A> vulkan/vulkanfunctions.h:121
inline void CVulkanSamplerObject::Id()
{
} /* size: 0 */

// <00474A10> vulkan/vulkanfunctions.h:130
void VulkanResultToString(VkResult, CUtlString &)
{
} /* size: 0 */

// <00B63ECB> vulkan/vulkanfunctions.h:131
void VulkanDeviceFaultAddressTypeEXTToString(VkDeviceFaultAddressTypeEXT, CUtlString &)
{
} /* size: 0 */

// <004767A1> vulkan/vulkanfunctions.h:136
// variables: 2
inline bool _DOVK(VkResult result, const char* pCommand)
{
	const char   __FUNCTION__; // 21245
	CUtlString errorText; // 149
} /* size: 0, variables: 2 */

// <005A5146> vulkan/vulkanfunctions.h:158
// variables: 2
inline VkResult _DOVK_RESULT(VkResult result, const char* pCommand)
{
	const char   __FUNCTION__; // 35338
	CUtlString errorText; // 171
} /* size: 0, variables: 2 */

