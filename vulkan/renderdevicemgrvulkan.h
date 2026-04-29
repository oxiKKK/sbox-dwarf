
//
// vulkan/renderdevicemgrvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 9
//	class: 1
//	struct: 1
//

// <0057B593> vulkan/renderdevicemgrvulkan.h:21
// member variables: 9
// struct size: 1,696
struct VulkanPhysicalDeviceInfo_t {
	VkPhysicalDevice m_PhysicalDevice; /* 0 8 */
	VkPhysicalDeviceProperties m_Properties; /* 8 824 */
	VkPhysicalDeviceMemoryProperties m_MemoryProperties; /* 832 520 */
	VkPhysicalDeviceFeatures m_Features; /* 1352 220 */
	VkPhysicalDeviceRayTracingPipelinePropertiesKHR m_RayTracingPipelineProperties; /* 1576 48 */
	VkPhysicalDeviceSubgroupProperties m_SubgroupProperties; /* 1624 32 */
	VkPhysicalDeviceSubgroupSizeControlPropertiesEXT m_SubgroupSizeControlProperties; /* 1656 32 */
	bool m_bSupportsEXTMemoryBudgetExtension; /* 1688 1 */
	bool m_bSupportsEXTSubgroupSizeControl; /* 1689 1 */
};

// <008B4194> vulkan/renderdevicemgrvulkan.h:47
// member functions: 78
// member variables: 15
// vtable entries: 19
// class size: 288
class CRenderDeviceMgrVulkan : public CRenderDeviceMgrBase {
public:
	/* class CRenderDeviceMgrBase <ancestor>; */ /* 0 0 */
	void CRenderDeviceMgrVulkan(CRenderDeviceMgrVulkan* , const CRenderDeviceMgrVulkan& );
	/* vulkan/renderdevicemgrvulkan.cpp:316 */
	void CRenderDeviceMgrVulkan(CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:333 */
	virtual void ~CRenderDeviceMgrVulkan(CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:450 */
	virtual bool Connect(CRenderDeviceMgrVulkan* , CreateInterfaceFn);
	/* vulkan/renderdevicemgrvulkan.cpp:1246 */
	virtual InitReturnVal_t Init(CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:1289 */
	virtual void Shutdown(CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:1276 */
	virtual void PreShutdown(CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:1326 */
	virtual int GetAdapterCount(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:1335 */
	virtual void GetAdapterInfo(const CRenderDeviceMgrVulkan* , int, RenderAdapterInfo_t& );
	/* vulkan/renderdevicemgrvulkan.cpp:1348 */
	virtual int FindAdapterForRawAdapterAndOutput(const CRenderDeviceMgrVulkan* , int, int);
	/* vulkan/renderdevicemgrvulkan.cpp:1359 */
	virtual int FindAdapterForDesktopRect(const CRenderDeviceMgrVulkan* , int, int, int, int);
	/* vulkan/renderdevicemgrvulkan.cpp:1396 */
	virtual int GetModeCount(const CRenderDeviceMgrVulkan* , int);
	/* vulkan/renderdevicemgrvulkan.cpp:1424 */
	virtual void GetModeInfo(const CRenderDeviceMgrVulkan* , RenderDisplayMode_t* , int, int);
	/* vulkan/renderdevicemgrvulkan.cpp:1445 */
	virtual void GetCurrentModeInfo(const CRenderDeviceMgrVulkan* , RenderDisplayMode_t* , int);
	/* vulkan/renderdevicemgrvulkan.cpp:1465 */
	virtual CreateInterfaceFn CreateDevice(CRenderDeviceMgrVulkan* , int, int, int);
	/* vulkan/renderdevicemgrvulkan.cpp:1487 */
	virtual void DestroyDevice(CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:1500 */
	virtual uint GetPlatWindowFlags(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:1597 */
	virtual void GetVideoMemoryInfo(const CRenderDeviceMgrVulkan* , int, uint64* , uint64* , uint64* );
	/* vulkan/renderdevicemgrvulkan.cpp:1509 */
	virtual uint64 GetVidMemBytes(const CRenderDeviceMgrVulkan* , int);
	/* vulkan/renderdevicemgrvulkan.cpp:1631 */
	virtual const char* GetModDefaultFileName(CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:80 */
	const VulkanPhysicalDeviceInfo_t* GetVulkanPhysicalDeviceInfo(const CRenderDeviceMgrVulkan* , int);
	/* vulkan/renderdevicemgrvulkan.h:81 */
	int32_t GetNumVulkanPhysicalDevices(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:82 */
	uint32_t GetEnabledLayerCount(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:83 */
	const char* const* GetEnabledLayerNames(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:85 */
	VkInstance GetInstance(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:87 */
	bool DebugUtilsEnabled(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:88 */
	bool KHRGetPhysicalDeviceProperties2Enabled(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:89 */
	bool KHRGetSurfaceCapabilities2Enabled(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:340 */
	void DisplayErrorAndExit(CRenderDeviceMgrVulkan* , const char* );
	/* vulkan/renderdevicemgrvulkan.cpp:354 */
	void DisplayMissingExtensionErrorAndExit(CRenderDeviceMgrVulkan* , const char* );
	/* vulkan/renderdevicemgrvulkan.cpp:369 */
	bool SupportsInstanceExtension(CRenderDeviceMgrVulkan* , const char* , uint32_t, const VkExtensionProperties* );
	/* vulkan/renderdevicemgrvulkan.cpp:1519 */
	virtual bool GetDynamicTextureMemoryBudget(const CRenderDeviceMgrVulkan* , int, uint64_t* , uint64_t* );
	/* vulkan/renderdevicemgrvulkan.h:98 */
	uint32 GetVulkanInstanceAPIVersion(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:100 */
	bool ForceEnabledDebugUtils(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.h:101 */
	bool ValidationEnabled(const CRenderDeviceMgrVulkan* );
private:
	/* vulkan/renderdevicemgrvulkan.cpp:1368 */
	virtual void GetMonitorResolution(const CRenderDeviceMgrVulkan* , int* , int* , int);
	/* vulkan/renderdevicemgrvulkan.cpp:411 */
	uint32 DetermineSupportedVulkanAPIVersion(const CRenderDeviceMgrVulkan* );
	/* vulkan/renderdevicemgrvulkan.cpp:429 */
	bool IsAboveMinimumVulkanAPIVersion(const CRenderDeviceMgrVulkan* , uint32, uint32);
	/* vulkan/renderdevicemgrvulkan.cpp:381 */
	void DisableThirdPartyOverlays(const CRenderDeviceMgrVulkan* );
	VkInstance m_InstanceVulkan; /* 184 8 */
	CUtlVector<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> > m_VulkanPhysicalDevices; /* 192 32 */
	bool m_bDebugUtilsEnabled; /* 224 1 */
	bool m_bForceEnableDebugUtils; /* 225 1 */
	bool m_bValidationEnabled; /* 226 1 */
	bool m_bKHRGetPhysicalDeviceProperties2Enabled; /* 227 1 */
	bool m_bKHRGetSurfaceCapabilities2Enabled; /* 228 1 */
	VkDebugReportCallbackEXT m_pVkDbgMsgCallbackVulkan; /* 232 8 */
	VkDebugUtilsMessengerEXT m_pDebugUtilsMessengerVulkan; /* 240 8 */
	uint32_t m_nLayerCount; /* 248 4 */
	VkLayerProperties * m_pLayerProperties; /* 256 8 */
	uint32_t m_nEnabledLayerCount; /* 264 4 */
	char * * m_ppEnabledLayerNames; /* 272 8 */
	uint32 m_nInstanceAPIVersion; /* 280 4 */
	uint32 GetVulkanInstanceAPIVersion(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan27GetVulkanInstanceAPIVersionEv */
	bool DebugUtilsEnabled(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan17DebugUtilsEnabledEv */
	VkInstance GetInstance(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan11GetInstanceEv */
	void CRenderDeviceMgrVulkan(class CRenderDeviceMgrVulkan *, const class CRenderDeviceMgrVulkan  &); /* linkage=_ZN22CRenderDeviceMgrVulkanC4ERKS_ */
	void CRenderDeviceMgrVulkan(class CRenderDeviceMgrVulkan *); /* linkage=_ZN22CRenderDeviceMgrVulkanC4Ev */
	virtual void ~CRenderDeviceMgrVulkan(class CRenderDeviceMgrVulkan *); /* linkage=_ZN22CRenderDeviceMgrVulkanD4Ev */
	virtual bool Connect(class CRenderDeviceMgrVulkan *, CreateInterfaceFn); /* linkage=_ZN22CRenderDeviceMgrVulkan7ConnectEPFPvPKcPiE */
	/* <8caef5> vulkan/renderdevicemgrvulkan.cpp:1246 */
	virtual enum InitReturnVal_t Init(class CRenderDeviceMgrVulkan *); /* linkage=_ZN22CRenderDeviceMgrVulkan4InitEv */
	virtual void Shutdown(class CRenderDeviceMgrVulkan *); /* linkage=_ZN22CRenderDeviceMgrVulkan8ShutdownEv */
	virtual void PreShutdown(class CRenderDeviceMgrVulkan *); /* linkage=_ZN22CRenderDeviceMgrVulkan11PreShutdownEv */
	virtual int GetAdapterCount(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan15GetAdapterCountEv */
	virtual void GetAdapterInfo(const class CRenderDeviceMgrVulkan  *, int, class RenderAdapterInfo_t &); /* linkage=_ZNK22CRenderDeviceMgrVulkan14GetAdapterInfoEiR19RenderAdapterInfo_t */
	virtual int FindAdapterForRawAdapterAndOutput(const class CRenderDeviceMgrVulkan  *, int, int); /* linkage=_ZNK22CRenderDeviceMgrVulkan33FindAdapterForRawAdapterAndOutputEii */
	virtual int FindAdapterForDesktopRect(const class CRenderDeviceMgrVulkan  *, int, int, int, int); /* linkage=_ZNK22CRenderDeviceMgrVulkan25FindAdapterForDesktopRectEiiii */
	virtual int GetModeCount(const class CRenderDeviceMgrVulkan  *, int); /* linkage=_ZNK22CRenderDeviceMgrVulkan12GetModeCountEi */
	virtual void GetModeInfo(const class CRenderDeviceMgrVulkan  *, class RenderDisplayMode_t *, int, int); /* linkage=_ZNK22CRenderDeviceMgrVulkan11GetModeInfoEP19RenderDisplayMode_tii */
	/* <8caa91> vulkan/renderdevicemgrvulkan.cpp:1445 */
	virtual void GetCurrentModeInfo(const class CRenderDeviceMgrVulkan  *, class RenderDisplayMode_t *, int); /* linkage=_ZNK22CRenderDeviceMgrVulkan18GetCurrentModeInfoEP19RenderDisplayMode_ti */
	virtual CreateInterfaceFn CreateDevice(class CRenderDeviceMgrVulkan *, int, int, int); /* linkage=_ZN22CRenderDeviceMgrVulkan12CreateDeviceEiii */
	/* <8caa60> vulkan/renderdevicemgrvulkan.cpp:1487 */
	virtual void DestroyDevice(class CRenderDeviceMgrVulkan *); /* linkage=_ZN22CRenderDeviceMgrVulkan13DestroyDeviceEv */
	virtual uint GetPlatWindowFlags(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan18GetPlatWindowFlagsEv */
	virtual void GetVideoMemoryInfo(const class CRenderDeviceMgrVulkan  *, int, uint64 *, uint64 *, uint64 *); /* linkage=_ZNK22CRenderDeviceMgrVulkan18GetVideoMemoryInfoEiPyS0_S0_ */
	virtual uint64 GetVidMemBytes(const class CRenderDeviceMgrVulkan  *, int); /* linkage=_ZNK22CRenderDeviceMgrVulkan14GetVidMemBytesEi */
	virtual const char  * GetModDefaultFileName(class CRenderDeviceMgrVulkan *); /* linkage=_ZN22CRenderDeviceMgrVulkan21GetModDefaultFileNameEv */
	const class VulkanPhysicalDeviceInfo_t  * GetVulkanPhysicalDeviceInfo(const class CRenderDeviceMgrVulkan  *, int); /* linkage=_ZNK22CRenderDeviceMgrVulkan27GetVulkanPhysicalDeviceInfoEi */
	int32_t GetNumVulkanPhysicalDevices(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan27GetNumVulkanPhysicalDevicesEv */
	uint32_t GetEnabledLayerCount(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan20GetEnabledLayerCountEv */
	const char  * const * GetEnabledLayerNames(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan20GetEnabledLayerNamesEv */
	bool KHRGetPhysicalDeviceProperties2Enabled(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan38KHRGetPhysicalDeviceProperties2EnabledEv */
	bool KHRGetSurfaceCapabilities2Enabled(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan33KHRGetSurfaceCapabilities2EnabledEv */
	void DisplayErrorAndExit(class CRenderDeviceMgrVulkan *, const char  *); /* linkage=_ZN22CRenderDeviceMgrVulkan19DisplayErrorAndExitEPKc */
	void DisplayMissingExtensionErrorAndExit(class CRenderDeviceMgrVulkan *, const char  *); /* linkage=_ZN22CRenderDeviceMgrVulkan35DisplayMissingExtensionErrorAndExitEPKc */
	/* <8cacfc> vulkan/renderdevicemgrvulkan.cpp:369 */
	bool SupportsInstanceExtension(class CRenderDeviceMgrVulkan *, const char  *, uint32_t, const VkExtensionProperties  *); /* linkage=_ZN22CRenderDeviceMgrVulkan25SupportsInstanceExtensionEPKcjPK21VkExtensionProperties */
	virtual bool GetDynamicTextureMemoryBudget(const class CRenderDeviceMgrVulkan  *, int, uint64_t *, uint64_t *); /* linkage=_ZNK22CRenderDeviceMgrVulkan29GetDynamicTextureMemoryBudgetEiPmS0_ */
	bool ForceEnabledDebugUtils(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan22ForceEnabledDebugUtilsEv */
	bool ValidationEnabled(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan17ValidationEnabledEv */
	virtual void GetMonitorResolution(const class CRenderDeviceMgrVulkan  *, int *, int *, int); /* linkage=_ZNK22CRenderDeviceMgrVulkan20GetMonitorResolutionEPiS0_i */
	/* <8cadef> vulkan/renderdevicemgrvulkan.cpp:411 */
	uint32 DetermineSupportedVulkanAPIVersion(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan34DetermineSupportedVulkanAPIVersionEv */
	/* <8cae77> vulkan/renderdevicemgrvulkan.cpp:429 */
	bool IsAboveMinimumVulkanAPIVersion(const class CRenderDeviceMgrVulkan  *, uint32, uint32); /* linkage=_ZNK22CRenderDeviceMgrVulkan30IsAboveMinimumVulkanAPIVersionEjj */
	/* <8cadc4> vulkan/renderdevicemgrvulkan.cpp:381 */
	void DisableThirdPartyOverlays(const class CRenderDeviceMgrVulkan  *); /* linkage=_ZNK22CRenderDeviceMgrVulkan25DisableThirdPartyOverlaysEv */
};

// <00A54D3A> vulkan/renderdevicemgrvulkan.h:80
inline void CRenderDeviceMgrVulkan::GetVulkanPhysicalDeviceInfo(int nAdapter)
{
} /* size: 0 */

// <00A54D21> vulkan/renderdevicemgrvulkan.h:82
inline void CRenderDeviceMgrVulkan::GetEnabledLayerCount()
{
} /* size: 0 */

// <00A54D08> vulkan/renderdevicemgrvulkan.h:83
inline void CRenderDeviceMgrVulkan::GetEnabledLayerNames()
{
} /* size: 0 */

// <00A54CEF> vulkan/renderdevicemgrvulkan.h:85
inline void CRenderDeviceMgrVulkan::GetInstance()
{
} /* size: 0 */

// <00D0B61F> vulkan/renderdevicemgrvulkan.h:87
inline void CRenderDeviceMgrVulkan::DebugUtilsEnabled()
{
} /* size: 0 */

// <00A54CBD> vulkan/renderdevicemgrvulkan.h:88
inline void CRenderDeviceMgrVulkan::KHRGetPhysicalDeviceProperties2Enabled()
{
} /* size: 0 */

// <005A432D> vulkan/renderdevicemgrvulkan.h:98
inline void CRenderDeviceMgrVulkan::GetVulkanInstanceAPIVersion()
{
} /* size: 0 */

// <008CA1DD> vulkan/renderdevicemgrvulkan.h:100
inline void CRenderDeviceMgrVulkan::ForceEnabledDebugUtils()
{
} /* size: 0 */

// <008CA1C4> vulkan/renderdevicemgrvulkan.h:101
inline void CRenderDeviceMgrVulkan::ValidationEnabled()
{
} /* size: 0 */

