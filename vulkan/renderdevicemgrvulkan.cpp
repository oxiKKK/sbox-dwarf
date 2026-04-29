
//
// vulkan/renderdevicemgrvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 44
//

// <008CA08E> vulkan/renderdevicemgrvulkan.cpp:43
void* __CreateCRenderDeviceMgrVulkanIRenderDeviceMgr_interface(void)
{
} /* size: 12 */

// <008C95D7> vulkan/renderdevicemgrvulkan.cpp:49
// variables: 11
// function calls: 26
VkBool32 VKDebugUtilsCallback(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageType, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, void* pUserData)
{
	bool bValidationError; // 52
	CUtlString prefixStr; // 53
	const char   __FUNCTION__; // 19144
	LoggingSeverity_t nLogSeverity; // 135
	{
		CFmtStr errMsg; // 94
		const bool  bForcedDebugUtils; // 98
		bool bAssert; // 99
		bool bExitFailure; // 100
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 124
		}
		CUtlString::Get(); // 99
		CUtlString::String(); // 96
		CRenderDeviceMgrVulkan::ValidationEnabled(); // 98
		CRenderDeviceMgrVulkan::ForceEnabledDebugUtils(); // 98
		CRenderDeviceVulkan::IsShuttingDown(); // 122
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 127
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 108
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 104
	}
	{
		uint32_t nObject; // 139
		V_strlen(const char* str); // 141
	}
	{
		uint32_t nCmdBufLabel; // 157
	}
	CUtlString::CUtlString(); // 53
	CRenderDeviceMgrVulkan::ForceEnabledDebugUtils(); // 92
	CUtlString::Get(); // 99
	CUtlString::String(); // 130
	CUtlString::~CUtlString(); // 169
} /* size: 0, variables: 4, inline expansions: 5 (75 bytes) */

// <008C9511> vulkan/renderdevicemgrvulkan.cpp:207
// variables: 9
void EncodeVulkanDriverVersion(uint32& driverVersionLowOut, uint32& driverVersionHighOut, CUtlString* pOutDriverVersion, const VkPhysicalDeviceProperties& physDevProperties)
{
	const char   __FUNCTION__; // 19259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
	{
		uint32_t nMajor; // 215
		uint32_t nMinor; // 216
		uint32_t nSecondaryBranch; // 217
		uint32_t nTertiaryBranch; // 218
	}
	{
		uint32_t nMajor; // 228
		uint32_t nMinor; // 229
		uint32_t nPatch; // 230
	}
} /* size: 0, variables: 1 */

// <008C934D> vulkan/renderdevicemgrvulkan.cpp:242
// variables: 4
// function calls: 2
bool SupportsPhysicalDeviceExtension(VkPhysicalDevice pPhysicalDevice, const char* pDeviceExtName)
{
	uint32_t nExtensionCount; // 244
	VkResult nResult; // 245
	VkExtensionProperties* pDeviceExtProperties; // 251
	{
		uint32_t nExt; // 254
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 252
} /* size: 333, variables: 3, inline expansions: 2 (20 bytes) */

// <008C922D> vulkan/renderdevicemgrvulkan.cpp:268
// function call: 1
void* VulkanAllocCallback(void* pUserData, size_t size, size_t alignment, VkSystemAllocationScope allocationScope)
{
	Max<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 271
} /* size: 27, inline expansions: 1 (15 bytes) */

// <008C912B> vulkan/renderdevicemgrvulkan.cpp:274
// function call: 1
void* VulkanReallocCallback(void* pUserData, void* pOriginal, size_t size, size_t alignment, VkSystemAllocationScope allocationScope)
{
	Max<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 277
} /* size: 30, inline expansions: 1 (15 bytes) */

// <008C90C8> vulkan/renderdevicemgrvulkan.cpp:280
void VulkanFreeCallback(void* pUserData, void* pMem)
{
} /* size: 12 */

// <008CAA21> vulkan/renderdevicemgrvulkan.cpp:286
void VulkanInternalAllocationNotification(void* pUserData, size_t size, VkInternalAllocationType allocType, VkSystemAllocationScope allocationScope)
{
} /* size: 5 */

// <008C9041> vulkan/renderdevicemgrvulkan.cpp:292
void VulkanInternalFreeNotification(void* pUserData, size_t size, VkInternalAllocationType allocType, VkSystemAllocationScope allocationScope)
{
} /* size: 0 */

// <008C8FE1> vulkan/renderdevicemgrvulkan.cpp:301
// variable: 1
void MipgenComputeShaderChanged(IConVar* pConVar, const char* pOldString, float flOldValue)
{
	HardwareCaps_t& hardwareCaps; // 303
} /* size: 5, variables: 1 */

// <008C8E2D> vulkan/renderdevicemgrvulkan.cpp:316
// function calls: 5
void CRenderDeviceMgrVulkan::CRenderDeviceMgrVulkan()
{
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::CUtlVector(); // 327
} /* size: 183, inline expansions: 5 (77 bytes) */

// <008C8E14> vulkan/renderdevicemgrvulkan.cpp:316
void CRenderDeviceMgrVulkan::CRenderDeviceMgrVulkan()
{
} /* size: 0 */

// <008C8C86> vulkan/renderdevicemgrvulkan.cpp:333
// function calls: 7
void CRenderDeviceMgrVulkan::~CRenderDeviceMgrVulkan()
{
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::Purge(); // 903
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::~CUtlVector(); // 335
} /* size: 88, inline expansions: 7 (173 bytes) */

// <008C8C1F> vulkan/renderdevicemgrvulkan.cpp:333
void CRenderDeviceMgrVulkan::~CRenderDeviceMgrVulkan()
{
} /* size: 36 */

// <008C8B23> vulkan/renderdevicemgrvulkan.cpp:340
// variable: 1
void CRenderDeviceMgrVulkan::DisplayErrorAndExit(const char* pReason)
{
	char vulkanInitFailedText; // 343
} /* size: 146, variables: 1 */

// <008C89ED> vulkan/renderdevicemgrvulkan.cpp:354
// variable: 1
void CRenderDeviceMgrVulkan::DisplayMissingExtensionErrorAndExit(const char* pExtName)
{
	char szRequiredExtensionMissing; // 359
} /* size: 198, variables: 1 */

// <008CACFC> vulkan/renderdevicemgrvulkan.cpp:369
// variable: 1
// function call: 1
void CRenderDeviceMgrVulkan::SupportsInstanceExtension(const char* pExtName, uint32_t nExtensionCount, const VkExtensionProperties* pSupportedExtensions)
{
	{
		uint32_t nExtIndex; // 371
		V_strcmp(const char* s1,
			const char* s2);  // 373
	}
} /* size: 0 */

// <008C899E> vulkan/renderdevicemgrvulkan.cpp:369
// variable: 1
void CRenderDeviceMgrVulkan::SupportsInstanceExtension(const char* pExtName, uint32_t nExtensionCount, const VkExtensionProperties* pSupportedExtensions)
{
	{
		uint32_t nExtIndex; // 371
	}
} /* size: 0 */

// <008CADC4> vulkan/renderdevicemgrvulkan.cpp:381
void CRenderDeviceMgrVulkan::DisableThirdPartyOverlays()
{
} /* size: 0 */

// <008CADEF> vulkan/renderdevicemgrvulkan.cpp:411
// variables: 2
void CRenderDeviceMgrVulkan::DetermineSupportedVulkanAPIVersion()
{
	PFN_vkEnumerateInstanceVersion pfn_vkEnumerateInstanceVersion; // 418
	uint32_t nAPIVersion; // 419
} /* size: 0, variables: 2 */

// <008CAE77> vulkan/renderdevicemgrvulkan.cpp:429
// variables: 4
void CRenderDeviceMgrVulkan::IsAboveMinimumVulkanAPIVersion(uint32 nAPIVersion, uint32 nDesiredAPIVersion)
{
	uint32_t nAPIVersionMajor; // 431
	uint32_t nAPIVersionMinor; // 432
	uint32_t nDesiredAPIVersionMajor; // 433
	uint32_t nDesiredAPIVersionMinor; // 434
} /* size: 0, variables: 4 */

// <008C34E2> vulkan/renderdevicemgrvulkan.cpp:450
// variables: 91
// function calls: 232
void CRenderDeviceMgrVulkan::Connect(CreateInterfaceFn factory)
{
	uint32_t nSupportedAPIVersion; // 476
	VkApplicationInfo appInfo; // 486
	CUtlStringList requiredInstanceExtensions; // 494
	uint32_t nInstanceExtensionsCount; // 515
	const char* const* pInstanceExtensions; // 516
	bool bEnableValidation; // 522
	bool bMinimalValidation; // 527
	CUtlStringList optionalInstanceExtensions; // 530
	VkResult nResult; // 552
	uint32_t nExtensionCount; // 676
	int32_t nMaxInstanceExtensions; // 686
	const char ** ppEnableInstanceExtensionNames; // 687
	int32_t nEnableInstanceExtensionNamesCount; // 688
	VkExtensionProperties* extensionProperties; // 689
	const char   __FUNCTION__; // 18838
	VkInstanceCreateInfo instanceCreateInfo; // 751
	VkAllocationCallbacks allocCallbacks; // 760
	VkValidationFeaturesEXT validationFeatures; // 769
	CUtlVector<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> > validationDisableFeatures; // 770
	CUtlVector<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> > validationEnableFeatures; // 771
	VkAllocationCallbacks* pAllocCallbacks; // 828
	VkInstance pInstance; // 834
	bool bAPISupportsRaytracing; // 923
	uint32_t nDeviceCount; // 933
	VkPhysicalDeviceGroupPropertiesKHR* pPhysicalDeviceGroupProperties; // 943
	uint32_t nPhysicalDeviceGroupCount; // 944
	bool bDeviceGroupsExtensionEnabled; // 945
	VkPhysicalDevice* pPhysicalDevices; // 961
	CUtlVectorFixed<VkPhysicalDeviceType, 3> physicalDeviceTypePreference; // 971
	{
		const char* pLibraryName; // 469
	}
	{
		CUtlStringList vrInstanceExtensions; // 499
		{
			int i; // 502
			CUtlVectorBase<char::Count(); // 502
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 504
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 504
		}
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 11
		CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
		CUtlStringList::CUtlStringList(); // 499
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 18
		CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
		CUtlStringList::~CUtlStringList(); // 506
	}
	{
		uint i; // 517
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1201
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		V_strlen(const char* str); // 46
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 519
	}
	{
		uint32_t nLayerIndex; // 634
		{
			const char* pMetaValidationLayerName; // 580
			bool bFoundMetaLayer; // 586
			{
				int32 nMetaLayer; // 587
				{
					uint32_t nLayerIndex; // 589
					strstr(char* __haystack,
						const char* __needle);  // 255
					V_strstr(char* s1,
						const char* search);  // 592
				}
			}
		}
		{
			const char* pMinimalValidationLayerNames; // 610
			uint32_t nLayerIndex; // 618
			{
				int32 nLayer; // 621
				strstr(char* __haystack,
					const char* __needle);  // 255
				V_strstr(char* s1,
					const char* search);  // 623
			}
		}
		{
			uint32_t nLayerExtensionCount; // 637
			{
				VkExtensionProperties* pLayerExtensionProperties; // 659
			}
			CRenderDeviceMgrVulkan::IsAboveMinimumVulkanAPIVersion(
							uint32 nAPIVersion,
							uint32 nDesiredAPIVersion);  // 647
		}
	}
	{
		int nIndex; // 702
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 707
		}
		{
			uint32_t nExtIndex; // 371
			V_strcmp(const char* s1,
				const char* s2);  // 373
		}
		CRenderDeviceMgrVulkan::SupportsInstanceExtension(
						const char* pExtName,
						uint32_t nExtensionCount,
						const VkExtensionProperties* pSupportedExtensions);  // 704
	}
	{
		int nIndex; // 722
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 727
		}
		{
			uint32_t nExtIndex; // 371
			V_strcmp(const char* s1,
				const char* s2);  // 373
		}
		CRenderDeviceMgrVulkan::SupportsInstanceExtension(
						const char* pExtName,
						uint32_t nExtensionCount,
						const VkExtensionProperties* pSupportedExtensions);  // 724
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 738
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 750
	}
	{
		CUtlPair validationDisableCommandLineArgs; // 793
		{
			int32 nFeature; // 803
			CUtlMemory<VkValidationFeatureDisableEXT, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::Element(
				int i);  // 1201
			CopyConstruct<VkValidationFeatureDisableEXT>(VkValidationFeatureDisableEXT* pMemory,
									const VkValidationFeatureDisableEXT& src);  // 1201
			CUtlMemory<VkValidationFeatureDisableEXT, int>::Grow(
				int num);  // 806
			CUtlVectorBase<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::AddToTail(
					const VkValidationFeatureDisableEXT& src);  // 807
			string_VkValidationFeatureDisableEXT(VkValidationFeatureDisableEXT input_value); // 808
		}
		CUtlMemory<VkValidationFeatureEnableEXT, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkValidationFeatureEnableEXT, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::Element(
			int i);  // 1252
		Construct<VkValidationFeatureEnableEXT, VkValidationFeatureEnableEXT>(VkValidationFeatureEnableEXT* pMemory); // 1252
		CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::AddToTail(
				VkValidationFeatureEnableEXT& src);  // 788
		CUtlMemory<VkValidationFeatureEnableEXT, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::GrowMemory(
				int num);  // 1249
		Construct<VkValidationFeatureEnableEXT, VkValidationFeatureEnableEXT>(VkValidationFeatureEnableEXT* pMemory); // 1252
		CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::AddToTail(
				VkValidationFeatureEnableEXT& src);  // 780
		Construct<VkValidationFeatureEnableEXT, VkValidationFeatureEnableEXT>(VkValidationFeatureEnableEXT* pMemory); // 1252
		CUtlMemory<VkValidationFeatureEnableEXT, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::AddToTail(
				VkValidationFeatureEnableEXT& src);  // 781
	}
	{
		VkDebugUtilsMessengerCreateInfoEXT debugUtilsMessengerCreateInfo; // 854
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 145
		_DOVK(VkResult result,
			const char* pCommand);  // 136
		_DOVK(VkResult result,
			const char* pCommand);  // 868
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 957
	}
	{
		int32_t nPhysicalDeviceTypeIndex; // 980
		{
			VkPhysicalDeviceType nPhysicalDeviceType; // 982
			{
				uint32_t physicalDeviceIndex; // 985
				{
					VkPhysicalDeviceProperties physicalDeviceProperties; // 987
					int devIndex; // 998
					VulkanPhysicalDeviceInfo_t& vulkanPhysDevInfo; // 999
					bool bDeviceSupportsRayTracing; // 1008
					int j; // 1045
					AdapterInfo_t& info; // 1046
					CUtlString sDriverVersion; // 1054
					bool bSubGroupWaveOpsSupported; // 1130
					{
						uint32_t i; // 1069
						{
							bool bDeviceLocal; // 1071
						}
					}
					{
						uint32_t nHeapIndex; // 1082
						{
							bool bDeviceLocal; // 1085
							{
								uint32_t nMemoryTypeIndex; // 1088
								{
									bool bHostVisible; // 1092
									bool bHostCoherent; // 1093
								}
							}
						}
					}
					{
						uint64_t nHeapUsage; // 1117
						uint64_t nHeapBudget; // 1118
					}
					{
						VkPhysicalDeviceProperties2 physicalDeviceProperties2; // 1136
						VkBaseInStructure* pPhysicalDeviceProperties2; // 1139
						VkSubgroupFeatureFlags nSubgroupOperationsSM60; // 1160
						VkShaderStageFlags nSubgroupStagesSM60; // 1170
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1153
						}
					}
					CUtlString::Get(); // 1056
					CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::NumAllocated(); // 1143
					CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::Base(); // 112
					CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::Base(); // 368
					CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::ResetDbgInfo(); // 824
					CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::IsGrowable(); // 823
					CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::IsExternallyAllocated(); // 859
					CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::IsExternallyAllocated(); // 861
					CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::AddToTail(); // 998
					CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::operator[](
							int i);  // 999
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 1002
					CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::NumAllocated(); // 1143
					CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::Base(); // 112
					CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Base(); // 368
					CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::ResetDbgInfo(); // 824
					CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::IsGrowable(); // 823
					CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::IsExternallyAllocated(); // 859
					CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::IsExternallyAllocated(); // 861
					CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Element(
						int i);  // 1148
					memset(void* __dest,
						int __ch,
						size_t __len);  // 106
					AdapterInfo_t::AdapterInfo_t(); // 1479
					Construct<CRenderDeviceMgrBase::AdapterInfo_t>(AdapterInfo_t* pMemory); // 1148
					CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::AddToTail(); // 1045
					CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
							int i);  // 1046
					V_strcpy_safe<512>(char& pDest,
								const char* pSrc);  // 1047
					CUtlString::CUtlString(); // 1054
					{
						uint32_t nMajor; // 215
						uint32_t nMinor; // 216
						uint32_t nSecondaryBranch; // 217
						uint32_t nTertiaryBranch; // 218
					}
					{
						uint32_t nMajor; // 228
						uint32_t nMinor; // 229
						uint32_t nPatch; // 230
					}
					EncodeVulkanDriverVersion(uint32& driverVersionLowOut,
									uint32& driverVersionHighOut,
									CUtlString* pOutDriverVersion,
									const VkPhysicalDeviceProperties& physDevProperties);  // 1055
					V_strcpy_safe<128>(char& pDest,
								const char* pSrc);  // 1056
					CRenderDeviceMgrVulkan::IsAboveMinimumVulkanAPIVersion(
									uint32 nAPIVersion,
									uint32 nDesiredAPIVersion);  // 1132
					CRenderDeviceMgrVulkan::IsAboveMinimumVulkanAPIVersion(
									uint32 nAPIVersion,
									uint32 nDesiredAPIVersion);  // 1133
					CUtlString::~CUtlString(); // 1236
				}
			}
		}
		CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::Count(); // 980
	}
	CRenderDeviceMgrVulkan::DetermineSupportedVulkanAPIVersion(); // 476
	CRenderDeviceMgrVulkan::IsAboveMinimumVulkanAPIVersion(
					uint32 nAPIVersion,
					uint32 nDesiredAPIVersion);  // 477
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 494
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 530
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 544
	{
		uint32_t nExtIndex; // 371
		V_strcmp(const char* s1,
			const char* s2);  // 373
	}
	CRenderDeviceMgrVulkan::SupportsInstanceExtension(
					const char* pExtName,
					uint32_t nExtensionCount,
					const VkExtensionProperties* pSupportedExtensions);  // 735
	CUtlMemory<VkValidationFeatureDisableEXT, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkValidationFeatureDisableEXT, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::CUtlVector(); // 770
	CUtlMemory<VkValidationFeatureEnableEXT, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkValidationFeatureEnableEXT, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::CUtlVector(); // 771
	AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, VkPhysicalDeviceType>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<VkPhysicalDeviceType, 3>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	AlignedByteArrayExplicit_t<3, VkPhysicalDeviceType, 4>::Base(); // 268
	CUtlMemoryFixed<VkPhysicalDeviceType, 3>::Base(); // 112
	CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::Base(); // 368
	CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<VkPhysicalDeviceType, 3>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 971
	CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::AddToTail(
			VkPhysicalDeviceType& src);  // 973
	Construct<VkPhysicalDeviceType, VkPhysicalDeviceType>(VkPhysicalDeviceType* pMemory); // 1252
	CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::AddToTail(
			VkPhysicalDeviceType& src);  // 972
	Construct<VkPhysicalDeviceType, VkPhysicalDeviceType>(VkPhysicalDeviceType* pMemory); // 1252
	CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::AddToTail(
			VkPhysicalDeviceType& src);  // 977
	CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::Purge(); // 560
	ValidateAlignment<VkPhysicalDeviceType>(void); // 258
	CUtlMemoryFixed<VkPhysicalDeviceType, 3>::~CUtlMemoryFixed(); // 562
	CUtlVectorBase<VkPhysicalDeviceType, CUtlMemoryFixed<VkPhysicalDeviceType, 3> >::~CUtlVectorBase(); // 461
	CUtlVectorFixed<VkPhysicalDeviceType, 3>::~CUtlVectorFixed(); // 1240
	CUtlMemory<VkValidationFeatureEnableEXT, int>::Purge(); // 903
	CUtlMemory<VkValidationFeatureEnableEXT, int>::Purge(); // 1799
	CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::Purge(); // 560
	ValidateAlignment<VkValidationFeatureEnableEXT>(void); // 508
	CUtlMemory<VkValidationFeatureEnableEXT, int>::Purge(); // 510
	CUtlMemory<VkValidationFeatureEnableEXT, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkValidationFeatureEnableEXT, CUtlMemory<VkValidationFeatureEnableEXT, int> >::~CUtlVector(); // 1240
	CUtlMemory<VkValidationFeatureDisableEXT, int>::Purge(); // 903
	CUtlMemory<VkValidationFeatureDisableEXT, int>::Purge(); // 1799
	CUtlVectorBase<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::Purge(); // 560
	ValidateAlignment<VkValidationFeatureDisableEXT>(void); // 508
	CUtlMemory<VkValidationFeatureDisableEXT, int>::Purge(); // 510
	CUtlMemory<VkValidationFeatureDisableEXT, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkValidationFeatureDisableEXT, CUtlMemory<VkValidationFeatureDisableEXT, int> >::~CUtlVector(); // 1240
	{
		int i; // 22
	}
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 1240
	{
		int i; // 22
	}
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 1240
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 535
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 541
} /* size: 0, variables: 29, inline expansions: 109 (4131 bytes) */

// <008CAEF5> vulkan/renderdevicemgrvulkan.cpp:1246
// variables: 2
// function call: 1
void CRenderDeviceMgrVulkan::Init()
{
	InitReturnVal_t retVal; // 1248
	IRenderDeviceSetup* pDeviceSetup; // 1252
	CRenderDeviceMgrVulkan::Init(); // 1246
} /* size: 121, variables: 2, inline expansions: 1 (78 bytes) */

// <008C34AF> vulkan/renderdevicemgrvulkan.cpp:1246
// variables: 2
void CRenderDeviceMgrVulkan::Init()
{
	InitReturnVal_t retVal; // 1248
	IRenderDeviceSetup* pDeviceSetup; // 1252
} /* size: 0, variables: 2 */

// <008C346C> vulkan/renderdevicemgrvulkan.cpp:1276
void CRenderDeviceMgrVulkan::PreShutdown()
{
} /* size: 33 */

// <008C330E> vulkan/renderdevicemgrvulkan.cpp:1289
// variables: 3
// function call: 1
void CRenderDeviceMgrVulkan::Shutdown()
{
	const char   __FUNCTION__; // 18865
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1301
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1308
	}
	CRenderDeviceMgrVulkan::DestroyDevice(); // 1293
} /* size: 0, variables: 1, inline expansions: 1 (38 bytes) */

// <008C32AE> vulkan/renderdevicemgrvulkan.cpp:1326
// function call: 1
void CRenderDeviceMgrVulkan::GetAdapterCount()
{
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Count(); // 1328
} /* size: 8, inline expansions: 1 (0 bytes) */

// <008C3100> vulkan/renderdevicemgrvulkan.cpp:1335
// variables: 3
// function calls: 4
void CRenderDeviceMgrVulkan::GetAdapterInfo(int nAdapter, RenderAdapterInfo_t& info)
{
	const char   __FUNCTION__; // 19002
	const HardwareCaps_t& caps; // 1338
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1337
	}
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Count(); // 1337
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
			int i);  // 1338
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1339
} /* size: 0, variables: 2, inline expansions: 4 (41 bytes) */

// <008C307C> vulkan/renderdevicemgrvulkan.cpp:1348
void CRenderDeviceMgrVulkan::FindAdapterForRawAdapterAndOutput(int nRawAdapter, int nRawOutput)
{
} /* size: 13 */

// <008C2FC0> vulkan/renderdevicemgrvulkan.cpp:1359
void CRenderDeviceMgrVulkan::FindAdapterForDesktopRect(int nX, int nY, int nWidth, int nHeight)
{
} /* size: 13 */

// <008C2F29> vulkan/renderdevicemgrvulkan.cpp:1368
void CRenderDeviceMgrVulkan::GetMonitorResolution(int* pWidth, int* pHeight, int nAdapter)
{
} /* size: 11 */

// <008C2EE1> vulkan/renderdevicemgrvulkan.cpp:1376
// variables: 3
SDL_DisplayID GetDisplayForIndex(int nMonitorIndex)
{
	int nMonitorCount; // 1378
	SDL_DisplayID nMonitorID; // 1379
	SDL_DisplayID* pDisplays; // 1380
} /* size: 0, variables: 3 */

// <008C2DC8> vulkan/renderdevicemgrvulkan.cpp:1396
// variables: 2
// function call: 1
void CRenderDeviceMgrVulkan::GetModeCount(int nAdapter)
{
	int nCount; // 1398
	SDL_DisplayMode** pModes; // 1399
	GetDisplayForIndex(int nMonitorIndex); // 1399
} /* size: 147, variables: 2, inline expansions: 1 (43 bytes) */

// <008C2D98> vulkan/renderdevicemgrvulkan.cpp:1410
void CopyDisplayMode(RenderDisplayMode_t* pInfo, const SDL_DisplayMode& displayMode)
{
} /* size: 0 */

// <008C2B79> vulkan/renderdevicemgrvulkan.cpp:1424
// variables: 2
// function calls: 4
void CRenderDeviceMgrVulkan::GetModeInfo(RenderDisplayMode_t* pInfo, int nAdapter, int nMode)
{
	int nCount; // 1429
	SDL_DisplayMode** pModes; // 1430
	GetDisplayForIndex(int nMonitorIndex); // 1430
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1426
	CopyDisplayMode(RenderDisplayMode_t* pInfo,
			const SDL_DisplayMode& displayMode);  // 1436
} /* size: 294, variables: 2, inline expansions: 4 (187 bytes) */

// <008CAA91> vulkan/renderdevicemgrvulkan.cpp:1445
// variable: 1
// function calls: 5
void CRenderDeviceMgrVulkan::GetCurrentModeInfo(RenderDisplayMode_t* pInfo, int nAdapter)
{
	const SDL_DisplayMode* pMode; // 1450
	GetDisplayForIndex(int nMonitorIndex); // 1450
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1447
	CopyDisplayMode(RenderDisplayMode_t* pInfo,
			const SDL_DisplayMode& displayMode);  // 1453
	CRenderDeviceMgrVulkan::GetCurrentModeInfo(
				RenderDisplayMode_t* pInfo,
				int nAdapter);  // 1445
} /* size: 325, variables: 1, inline expansions: 5 (248 bytes) */

// <008C2B39> vulkan/renderdevicemgrvulkan.cpp:1445
// variable: 1
void CRenderDeviceMgrVulkan::GetCurrentModeInfo(RenderDisplayMode_t* pInfo, int nAdapter)
{
	const SDL_DisplayMode* pMode; // 1450
} /* size: 0, variables: 1 */

// <008C2A51> vulkan/renderdevicemgrvulkan.cpp:1465
// function call: 1
void CRenderDeviceMgrVulkan::CreateDevice(int nAdapter, int nFlags, int nDXLevel)
{
	CRenderDeviceMgrVulkan::DestroyDevice(); // 1467
} /* size: 201, inline expansions: 1 (25 bytes) */

// <008CAA60> vulkan/renderdevicemgrvulkan.cpp:1487
void CRenderDeviceMgrVulkan::DestroyDevice()
{
} /* size: 49 */

// <008C2A09> vulkan/renderdevicemgrvulkan.cpp:1500
void CRenderDeviceMgrVulkan::GetPlatWindowFlags()
{
} /* size: 10 */

// <008C287E> vulkan/renderdevicemgrvulkan.cpp:1509
// variables: 3
// function calls: 3
void CRenderDeviceMgrVulkan::GetVidMemBytes(int nAdapter)
{
	const char   __FUNCTION__; // 19002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1511
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1512
	}
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Count(); // 1512
	CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::operator[](
			int i);  // 1513
} /* size: 0, variables: 1, inline expansions: 3 (6 bytes) */

// <008C22B4> vulkan/renderdevicemgrvulkan.cpp:1519
// variables: 17
// function calls: 9
void CRenderDeviceMgrVulkan::GetDynamicTextureMemoryBudget(int nAdapter, uint64_t* pHeapUsageOut, uint64_t* pHeapBudgetOut)
{
	const char   __FUNCTION__; // 19352
	VkPhysicalDeviceMemoryProperties2KHR physicalDeviceMemoryProperties2KHR; // 1538
	VkPhysicalDeviceMemoryBudgetPropertiesEXT physicalDeviceMemoryBudgetEXT; // 1539
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1521
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1522
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1523
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1524
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1525
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1535
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1536
	}
	{
		uint32_t i; // 1546
		{
			bool bDeviceLocal; // 1548
		}
	}
	{
		uint32_t nHeapIndex; // 1560
		{
			bool bDeviceLocal; // 1563
			{
				uint32_t nMemoryTypeIndex; // 1566
				{
					bool bHostVisible; // 1570
					bool bHostCoherent; // 1571
				}
			}
		}
	}
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::Count(); // 1522
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::Count(); // 1523
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Count(); // 1523
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::operator[](
			int i);  // 1529
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::operator[](
			int i);  // 1543
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::operator[](
			int i);  // 1558
} /* size: 0, variables: 3, inline expansions: 9 (48 bytes) */

// <008C1F87> vulkan/renderdevicemgrvulkan.cpp:1597
// variables: 6
// function calls: 6
void CRenderDeviceMgrVulkan::GetVideoMemoryInfo(int nAdapter, uint64* pBudgetInBytesOut, uint64* pUsageInBytesOut, uint64* pRenderSystemUsageInBytesOut)
{
	const char   __FUNCTION__; // 19095
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1599
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1600
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1601
	}
	{
		uint64_t nHeapBudget; // 1610
		uint64_t nHeapUsage; // 1611
		CTextureManagerBase::GetCurrentTextureMemorySize(); // 1624
	}
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::Count(); // 1600
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::Count(); // 1601
	CUtlVectorBase<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >::Count(); // 1601
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::operator[](
			int i);  // 1603
} /* size: 0, variables: 1, inline expansions: 5 (37 bytes) */

// <008C1F3D> vulkan/renderdevicemgrvulkan.cpp:1631
void CRenderDeviceMgrVulkan::GetModDefaultFileName()
{
} /* size: 9 */

