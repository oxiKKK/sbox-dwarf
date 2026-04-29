
//
// resourcesystem/resourcesystem.h
//
//	referenced by: libengine2.so
//
//	functions: 35
//	class: 1
//	structs: 3
//

// <02345D36> resourcesystem/resourcesystem.h:50
void InstallManifestTypeManager(void)
{
} /* size: 0 */

// <02345D09> resourcesystem/resourcesystem.h:51
void RemoveManifestTypeManager(void)
{
} /* size: 0 */

// <02314408> resourcesystem/resourcesystem.h:62
// member variables: 2
// struct size: 16
struct ExtRefList_t {
	int m_nCount; /* 0 4 */
	ResourceId_t m_pIds[1]; /* 8 8 */
};

// <022C0ACF> resourcesystem/resourcesystem.h:94
inline ResourceHandleWritable_t MakeWritableHandle(ResourceHandle_t hResource)
{
} /* size: 0 */

// <02354187> resourcesystem/resourcesystem.h:99
void ResourceTypeRegistration_t::ResourceTypeRegistration_t()
{
} /* size: 0 */

// <0235416B> resourcesystem/resourcesystem.h:99
inline void ResourceTypeRegistration_t::ResourceTypeRegistration_t()
{
} /* size: 0 */

// <0224898A> resourcesystem/resourcesystem.h:99
// member variables: 20
// struct size: 152
struct ResourceTypeRegistration_t {
	ResourceType_t m_nResourceType; /* 0 8 */
	IResourceTypeManager * m_pTypeManager; /* 8 8 */
	ResourceData_t m_ErrorResource __attribute__((__aligned__(8))); /* 16 40 */
	const char * m_pResourceTypeName; /* 56 8 */
	HResourceManifest m_hErrorManifest; /* 64 8 */
	ResourceManifestPriority_t m_nTypeManifestPriority; /* 72 4 */
	int m_nLongUpdates; /* 76 4 */
	bool m_bUsesData; /* 80 1 */
	bool m_bIsPlaceholderEntry; /* 81 1 */
	bool m_bRequiresFinalizeResourceCall; /* 82 1 */
	bool m_bMemoryMappedFileDataIsAcceptable; /* 83 1 */
	uint m_nLoadedResources; /* 84 4 */
	int64 m_nAllocationUs; /* 88 8 */
	int64 m_nFinalizeUs; /* 96 8 */
	int64 m_nAsyncProcessDataUs; /* 104 8 */
	int64 m_nBytesLoaded; /* 112 8 */
	uint m_nStreamingRequests; /* 120 4 */
	int64 m_nBytesStreaming; /* 128 8 */
	int64 m_nStreamingUs; /* 136 8 */
	int64 m_nAsyncStreamingUs; /* 144 8 */
} __attribute__((__aligned__(8)));

// <0229AC91> resourcesystem/resourcesystem.h:133
void DebugResourceId(ResourceId_t)
{
} /* size: 0 */

// <02248E68> resourcesystem/resourcesystem.h:138
// member function: 1
// struct size: 1
struct ExtRefHashFunc_t {
	/* resourcesystem/resourcesystem.h:140 */
	unsigned int operator()(const ExtRefHashFunc_t* , const ResourceId_t& );
};

// <023827B2> resourcesystem/resourcesystem.h:140
inline void ExtRefHashFunc_t::operator(const ResourceId_t& s)
{
} /* size: 0 */

// <023157E6> resourcesystem/resourcesystem.h:150
// member functions: 307
// member variables: 37
// vtable entries: 82
// class size: 99,248
class CResourceSystem : public CTier2AppSystem<IResourceSystem, 0>, public IResourceSystemUtils, public IResourceHandleUtils, public IResourceManifestRegistry {
	/* resourcesystem/resourcesystem.h:322 */
	enum ResourceBindingFlagsInternal_t {
		RESOURCE_BINDING_HAS_ATTEMPTED_DELETION = 512,
		RESOURCE_BINDING_NEEDS_FINALIZATION = 1024,
		RESOURCE_BINDING_HAS_MOUNTED_VPK = 2048,
		RESOURCE_BINDING_LAST_UNUSED_FLAG = 4096,
	};
	/* resourcesystem/resourcesystem.h:332 */
	struct ForcedSynchronizationCallbackInfo_t {
		/* resourcesystem/resourcesystem.h:334 */
		bool operator==(const ForcedSynchronizationCallbackInfo_t* , const ForcedSynchronizationCallbackInfo_t& );
		ResourceSystemForcedSynchronizationCallback_t m_pCallback; /* 0 8 */
		void * m_pContext; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier2AppSystem<IResourceSystem, 0> <ancestor>; */ /* 0 48 */
	/* class IResourceSystemUtils <ancestor>; */ /* 48 8 */
	/* class IResourceHandleUtils <ancestor>; */ /* 56 8 */
	/* class IResourceManifestRegistry <ancestor>; */ /* 64 8 */
	void CResourceSystem(CResourceSystem* , const CResourceSystem& );
	/* resourcesystem/resourcesystem.cpp:675 */
	virtual InitReturnVal_t Init(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1976 */
	virtual void PreShutdown(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:758 */
	virtual void Shutdown(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:205 */
	virtual const AppSystemInfo_t* GetDependencies(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:210 */
	virtual void* QueryInterface(CResourceSystem* , const char* );
	/* resourcesystem/resourcesystem.cpp:418 */
	virtual void InstallTypeManager(CResourceSystem* , ResourceType_t, IResourceTypeManager* , const char* , const char* );
	/* resourcesystem/resourcesystem.cpp:366 */
	virtual void InstallNullTypeManager(CResourceSystem* , ResourceType_t, const char* );
	/* resourcesystem/resourcesystem.cpp:529 */
	virtual void RemoveResourceTypeManager(CResourceSystem* , IResourceTypeManager* );
	/* resourcesystem/resourcesystem.cpp:399 */
	virtual void RemoveNullTypeManager(CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:654 */
	virtual IResourceTypeManager* GetTypeManager(CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:2068 */
	virtual HResourceManifest LoadResourceManifestFile(CResourceSystem* , const char* , ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* resourcesystem/resourcesystem.cpp:2042 */
	virtual HResourceManifest LoadResourceManifestGroup(CResourceSystem* , const char* , ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* resourcesystem/resourcesystem.cpp:2055 */
	virtual HResourceManifest LoadResourceManifestNamed(CResourceSystem* , const char* , ResourceManifestLoadBehavior_t, const char* , ResourceManifestLoadPriority_t);
	/* resourcesystem/resourcesystem.cpp:2078 */
	virtual HResourceManifest CreateResourceManifest(CResourceSystem* , const ResourceManifestCreationInfo_t& );
	/* resourcesystem/resourcesystem.cpp:2217 */
	virtual void SetManifestCompletionCallback(CResourceSystem* , HResourceManifest, ResourceManifestLoadCompletionCallback_t, void* );
	/* resourcesystem/resourcesystem.cpp:1599 */
	virtual bool IsManifestLoaded(CResourceSystem* , HResourceManifest);
	/* resourcesystem/resourcesystem.cpp:2229 */
	virtual const char* GetResourceManifestDebugName(CResourceSystem* , HResourceManifest);
	/* resourcesystem/resourcesystem.cpp:2184 */
	virtual void DestroyResourceManifest(CResourceSystem* , HResourceManifest);
	/* resourcesystem/resourcesystem.cpp:2399 */
	virtual void Update(CResourceSystem* , int, ResourceSystemUpdateMode_t);
	/* resourcesystem/resourcesystem.cpp:2407 */
	virtual void UpdateSimple(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2648 */
	virtual bool HasPendingWork(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2705 */
	virtual void RegisterFinishedFrameCounter(CResourceSystem* , uint32* );
	/* resourcesystem/resourcesystem.cpp:2714 */
	virtual void UnregisterFinishedFrameCounter(CResourceSystem* , uint32* );
	/* resourcesystem/resourcesystem.cpp:980 */
	virtual int GetNamedResourceCount(const CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:985 */
	virtual int GetNamedResources(CResourceSystem* , int, int, ResourceHandle_t* , ResourceSystemGetNamedResourcesFlags_t);
	/* resourcesystem/resourcesystem.cpp:990 */
	virtual void GetAllNamedResourcesByType(CResourceSystem* , ResourceType_t, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& , ResourceSystemGetNamedResourcesFlags_t);
	/* resourcesystem/resourcesystem.cpp:995 */
	virtual int GetAllResourceCount(const CResourceSystem* , ResourceSystemGetResourcesFlags_t);
	/* resourcesystem/resourcesystem.cpp:1009 */
	virtual int GetAllResources(CResourceSystem* , int, int, ResourceHandle_t* , ResourceSystemGetResourcesFlags_t);
	/* resourcesystem/resourcesystem.cpp:1049 */
	virtual void GetAllResourcesByType(CResourceSystem* , ResourceType_t, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& , ResourceSystemGetResourcesFlags_t);
	/* resourcesystem/resourcesystem.cpp:1112 */
	virtual ResourceHandle_t FindOrRegisterResourceByName(CResourceSystem* , const CResourceName& , bool);
	/* resourcesystem/resourcesystem.cpp:1309 */
	virtual ResourceHandle_t FindResourceById(CResourceSystem* , ResourceId_t, ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:1417 */
	virtual ResourceHandle_t FindOrCreateProceduralResource(CResourceSystem* , const CResourceName& , void* , ProceduralResourceType_t);
	/* resourcesystem/resourcesystem.h:506 */
	virtual void GetResourceName(CResourceSystem* , ResourceHandle_t, CBufferString* , bool);
	/* resourcesystem/resourcesystem.h:521 */
	virtual void GetResourceName(CResourceSystem* , ResourceHandle_t, CResourceName* );
	/* resourcesystem/resourcesystem.h:526 */
	virtual ResourceType_t GetResourceType(CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:1481 */
	virtual void DeleteResource(CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.h:538 */
	virtual ResourceHandle_t GetErrorResource(CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:3040 */
	virtual const char* GetResourceTypeName(CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:789 */
	virtual void MarkErrorResourcesReloaded(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1443 */
	virtual ResourceHandle_t CreateEmptyResource(CResourceSystem* , const CResourceName& );
	/* resourcesystem/resourcesystem.cpp:1184 */
	virtual ResourceHandle_t BlockingLoadResourceByName(CResourceSystem* , const CResourceName& , const char* );
	/* resourcesystem/resourcesystem.cpp:1237 */
	virtual ResourceHandle_t BlockingLoadResourceByNameIntoJustInTimeManifest(CResourceSystem* , const CResourceName& , const char* );
	/* resourcesystem/resourcesystem.cpp:1280 */
	virtual void FreeJustInTimeManifests(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1289 */
	virtual int GetJustInTimeManifestCount(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1294 */
	virtual void GetJustInTimeManifestResources(CResourceSystem* , CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& );
	/* resourcesystem/resourcesystem.cpp:1205 */
	virtual void EnsureResourceByNameIntoJustInTimeManifest(CResourceSystem* , const CResourceName& , const char* );
	/* resourcesystem/resourcesystem.cpp:3054 */
	virtual void InstallResourceUpdater(CResourceSystem* , IResourceUpdater* );
	/* resourcesystem/resourcesystem.cpp:3063 */
	virtual void UninstallResourceUpdater(CResourceSystem* , IResourceUpdater* );
	/* resourcesystem/resourcesystem.cpp:3093 */
	virtual void GetActualFileName(CResourceSystem* , ResourceHandle_t, CBufferString* , bool);
	/* resourcesystem/resourcesystem.cpp:1385 */
	virtual ResourceStatus_t GetResourceStatus(CResourceSystem* , ResourceId_t);
	/* resourcesystem/resourcesystem.cpp:1361 */
	virtual ResourceStatus_t GetResourceStatus(CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:1356 */
	virtual ResourceStatus_t GetResourceStatus(CResourceSystem* , const CResourceName& );
	/* resourcesystem/resourcesystem.h:217 */
	virtual ResourceType_t GetResourceHandleType(CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:3141 */
	virtual void RegisterForcedSynchronizationCallback(CResourceSystem* , ResourceSystemForcedSynchronizationCallback_t, void* );
	/* resourcesystem/resourcesystem.cpp:3151 */
	virtual void UnregisterForcedSynchronizationCallback(CResourceSystem* , ResourceSystemForcedSynchronizationCallback_t, void* );
	/* resourcesystem/resourcesystem.cpp:2241 */
	virtual void GetResourcesNamesInManifest(const CResourceSystem* , HResourceManifest, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* resourcesystem/resourcesystem.cpp:2804 */
	virtual void ForceSynchronizationAndBlockUntilManifestLoaded(CResourceSystem* , HResourceManifest);
	/* resourcesystem/resourcesystem.cpp:2772 */
	virtual void BlockingFinishAllCurrentlyLoadingManifests(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2910 */
	virtual void RegisterToolsResourceListener(CResourceSystem* , IToolsResourceListener* );
	/* resourcesystem/resourcesystem.cpp:2921 */
	virtual void UnregisterToolsResourceListener(CResourceSystem* , IToolsResourceListener* );
	/* resourcesystem/resourcesystem.cpp:2949 */
	virtual ICodeResourceManifestManager* GetCodeResourceManifestManager(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2957 */
	virtual IResourceSystemLeakTracker* GetLeakTracker(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2453 */
	virtual bool HasCompletedIORequests(CResourceSystem* );
	/* resourcesystem/resourcesystem.h:580 */
	virtual void EnableDebugMode(CResourceSystem* , ResourceSystemDebugMode_t, bool);
	/* resourcesystem/resourcesystem.cpp:1965 */
	virtual AsyncRequestPriority_t GetAsyncFileRequestPriority(const CResourceSystem* , ResourceManifestLoadPriority_t);
	/* resourcesystem/resourcesystem.h:236 */
	virtual IGenericDataTypeManager* GetGenericDataTypeManager(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:3178 */
	virtual void ReloadSymlinkedResidentResources(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2672 */
	virtual void RegisterResourceSystemUser(CResourceSystem* , uint32* );
	/* resourcesystem/resourcesystem.cpp:2681 */
	virtual void UnregisterResourceSystemUser(CResourceSystem* , uint32* );
	/* resourcesystem/resourcesystem.cpp:2689 */
	virtual void RegisterNamedManifest(CResourceSystem* , ResourceManifestDesc_t* );
	/* resourcesystem/resourcesystem.cpp:2697 */
	virtual void UnregisterNamedManifest(CResourceSystem* , ResourceManifestDesc_t* );
	/* resourcesystem/resourcesystem.cpp:1613 */
	virtual void ResourceReferenceLeakTracking_AddRef(CResourceSystem* , ResourceHandle_t, ResourceLeakTrackingGroup_t, uintp);
	/* resourcesystem/resourcesystem.cpp:1621 */
	virtual void ResourceReferenceLeakTracking_Release(CResourceSystem* , ResourceHandle_t, ResourceLeakTrackingGroup_t, uintp);
	/* resourcesystem/resourcesystem.cpp:1629 */
	virtual void ResourceReferenceLeakTracking_ReportReferences(CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:1638 */
	virtual void MarkLoadingWorkPending(CResourceSystem* , ResourceHandle_t, bool);
	/* resourcesystem/resourcesystem.cpp:1671 */
	virtual IAsyncResourceDataRequest* CreateAsyncResourceDataRequest(CResourceSystem* , ResourceHandle_t, int64, size_t, const char* );
	/* resourcesystem/resourcesystem.cpp:1680 */
	virtual void SubmitAsyncResourceDataRequest(CResourceSystem* , IAsyncResourceDataRequest* );
	/* resourcesystem/resourcesystem.h:258 */
	virtual bool IsBlockingOnManifestLoad(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1948 */
	virtual void SetResourceTypeManifestPriority(CResourceSystem* , ResourceType_t, ResourceManifestPriority_t);
	/* resourcesystem/resourcesystem.cpp:160 */
	void CResourceSystem(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:188 */
	virtual void ~CResourceSystem(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2979 */
	bool RegisterResourceExternalReference(CResourceSystem* , ResourceHandle_t, const CResourceName& , CStrongHandleVoid* );
	/* resourcesystem/resourcesystem.cpp:2086 */
	HResourceManifest CreateResourceManifestInternal(CResourceSystem* , const ResourceManifestCreationInfo_t& , bool);
	/* resourcesystem/resourcesystem.cpp:945 */
	int GetResourcesInMap(CResourceSystem* , ResourceIdMap_t* , int, int, ResourceHandle_t* , ResourceSystemGetNamedResourcesFlags_t);
	/* resourcesystem/resourcesystem.h:262 */
	typedef struct CUtlTSHash<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned int> > ResourceIdMap_t;
	/* resourcesystem/resourcesystem.cpp:961 */
	void GetAllResourcesByTypeInMap(CResourceSystem* , ResourceIdMap_t* , ResourceType_t, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& , ResourceSystemGetNamedResourcesFlags_t);
	/* resourcesystem/resourcesystem.cpp:3120 */
	ResourceNameHandleInternal_t MakeResourceNameSymbol(CResourceSystem* , const char* );
	/* resourcesystem/resourcesystem.cpp:1526 */
	void MaybeExitBecauseOfResourceLoadFailure(CResourceSystem* , const char* );
	/* resourcesystem/resourcesystem.h:555 */
	LoadingResourceManifestIndex_t AllocateLoadingManifestIndex(CResourceSystem* , CResourceManifest* );
	/* resourcesystem/resourcesystem.h:561 */
	void FreeLoadingManifestIndex(CResourceSystem* , LoadingResourceManifestIndex_t);
	/* resourcesystem/resourcesystem.h:571 */
	CResourceManifest* GetLoadingManifest(CResourceSystem* , LoadingResourceManifestIndex_t);
	/* resourcesystem/resourcesystem.h:282 */
	IResourceUpdater* GetResourceUpdater(CResourceSystem* );
	/* resourcesystem/resourcesystem.h:489 */
	virtual ResourceId_t ResourceHandleToResourceId(const CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:1100 */
	const ResourceTypeRegistration_t* GetRegistrationForResource(const CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.h:288 */
	CThreadEvent* GetResourceProgresEvent(CResourceSystem* );
	/* resourcesystem/resourcesystem.h:290 */
	int GetFrameCount(CResourceSystem* );
	/* resourcesystem/resourcesystem.h:291 */
	virtual bool IsShuttingDown(CResourceSystem* );
	/* resourcesystem/resourcesystem.h:473 */
	bool InFrameUpdate(const CResourceSystem* );
	/* resourcesystem/resourcesystem.h:293 */
	virtual bool IsInFrameUpdate(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2385 */
	void MarkResourceNeedingFinalization(CResourceSystem* , ResourceHandleWritable_t, bool);
	/* resourcesystem/resourcesystem.h:596 */
	bool DoesResourceNeedFinalization(const CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:2931 */
	void NotifyToolsResourceListenersForPreReload(CResourceSystem* , ResourceId_t, ResourceHandle_t, ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:878 */
	void AllocExtRefs(CResourceSystem* , ResourceHandleWritable_t, int, ResourceHandle_t* );
	/* resourcesystem/resourcesystem.cpp:908 */
	void FreeExtRefs(CResourceSystem* , ResourceHandleWritable_t);
	/* resourcesystem/resourcesystem.cpp:919 */
	void BuildExtRefListForResource(CResourceSystem* , ResourceHandle_t, ExtRefHashTable_t* );
	/* resourcesystem/resourcesystem.cpp:1342 */
	ResourceHandle_t FindResourceByIdNoFallbacks(CResourceSystem* , ResourceId_t);
	/* resourcesystem/resourcesystem.cpp:1957 */
	bool HasResourceTypeManifestPriorityBeenSet(const CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2898 */
	bool IsCurrentlyProcessingReloadManifest(const CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2903 */
	bool IsCurrentReloadingResource(const CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:2144 */
	void EnqueueResourceManifest(CResourceSystem* , CResourceManifest* );
	/* resourcesystem/resourcesystem.cpp:2171 */
	void NotifyResourceManifestDeleted(CResourceSystem* , CResourceManifest* );
	/* resourcesystem/resourcesystem.h:587 */
	bool IsDebugModeEnabled(const CResourceSystem* , ResourceSystemDebugMode_t);
	/* resourcesystem/resourcesystem.cpp:3286 */
	void LogAllocateTimes(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:3373 */
	void ResetAllocateTimes(CResourceSystem* );
private:
	/* resourcesystem/resourcesystem.cpp:2252 */
	void GetResourcesNamesInManifestInternal(const CResourceSystem* , const CResourceManifest* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* resourcesystem/resourcesystem.cpp:1403 */
	ResourceHandle_t CreateAnonymousProceduralResource(CResourceSystem* , const CResourceName& , void* );
	/* resourcesystem/resourcesystem.cpp:3072 */
	void GetFileName(CResourceSystem* , ResourceHandle_t, CBufferString* , bool);
	/* resourcesystem/resourcesystem.cpp:1066 */
	ResourceTypeIndex_t ResourceTypeToTypeIndex_DoNotCreatePlaceholder(const CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:1077 */
	ResourceTypeIndex_t ResourceTypeToTypeIndex_CreatePlaceholder(CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:2462 */
	void Update_Internal(CResourceSystem* , int, ResourceSystemUpdateMode_t, bool, bool);
	/* resourcesystem/resourcesystem.h:352 */
	void Update_Internal_FastSpin(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2415 */
	void FrameUpdateForTypeManager(CResourceSystem* , int, int);
	/* resourcesystem/resourcesystem.cpp:1687 */
	void GetActiveManifestState(const CResourceSystem* , bool* , bool* );
	/* resourcesystem/resourcesystem.cpp:3129 */
	ResourceType_t ResourceHandleToResourceType(const CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.h:544 */
	void* GetErrorResourceData(const CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.h:549 */
	void* GetErrorResourceData(const CResourceSystem* , ResourceTypeIndex_t);
	/* resourcesystem/resourcesystem.cpp:2966 */
	ResourceDeallocationType_t ComputeDeallocationType(const CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.h:481 */
	ResourceHandle_t HashHandleToResourceHandle(const CResourceSystem* , UtlTSHashHandle_t);
	/* resourcesystem/resourcesystem.cpp:857 */
	void AllocResourceName(CResourceSystem* , ResourceHandleWritable_t, const CResourceName& );
	/* resourcesystem/resourcesystem.cpp:870 */
	void FreeResourceName(CResourceSystem* , ResourceHandleWritable_t);
	/* resourcesystem/resourcesystem.cpp:2737 */
	void UpdateFrameCounters(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:2722 */
	uint32 ComputeFinishedFrameCount(const CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1882 */
	void ExecuteResourceManifestRequests(CResourceSystem* , bool);
	/* resourcesystem/resourcesystem.cpp:2747 */
	bool RemoveManifestFromPendingLoadQueue(CResourceSystem* , CResourceManifest* );
	/* resourcesystem/resourcesystem.cpp:2318 */
	void MN_DeleteRequestedResources(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1545 */
	void MN_DeallocateResourceData(CResourceSystem* , ResourceHandleWritable_t);
	/* resourcesystem/resourcesystem.cpp:2277 */
	bool MN_PotentiallyDeleteResource(CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:2353 */
	void MN_UpdateErrorResources(CResourceSystem* , bool);
	/* resourcesystem/resourcesystem.cpp:1451 */
	ResourceHandle_t CreateEmptyResourceInternal(CResourceSystem* , const CResourceName& , bool);
	/* resourcesystem/resourcesystem.cpp:536 */
	void WarnAboutResourceTypeLeaks(CResourceSystem* , ResourceIdMap_t* , ResourceTypeIndex_t, const char* );
	/* resourcesystem/resourcesystem.cpp:587 */
	void RemoveResourceTypeManagerInternal(CResourceSystem* , IResourceTypeManager* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:715 */
	void WarnAboutLiveResourceLeaks(CResourceSystem* , ResourceIdMap_t* );
	/* resourcesystem/resourcesystem.cpp:742 */
	void HaltAndCleanupPendingResources(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:332 */
	ResourceTypeIndex_t Internal_InstallPlaceholderTypeManager(CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:663 */
	void LoadMissingResourceWhitelist(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1996 */
	void ImmediatelyProcessAllAsyncRequestsOnShutdown(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:1847 */
	bool GetManifestToStartLoading(CResourceSystem* , CResourceManifest** );
	/* resourcesystem/resourcesystem.cpp:1730 */
	void FinalizeOrAdvanceLoadingManifests(CResourceSystem* , int, CResourceManifest** );
	/* resourcesystem/resourcesystem.cpp:1091 */
	const ResourceTypeRegistration_t* GetRegistrationForType(const CResourceSystem* , ResourceTypeIndex_t);
	/* resourcesystem/resourcesystem.cpp:1086 */
	const ResourceTypeRegistration_t* GetRegistrationForType(const CResourceSystem* , ResourceType_t);
	/* resourcesystem/resourcesystem.cpp:1713 */
	bool IsResourceCurrentlyLoading(const CResourceSystem* , ResourceHandle_t);
	/* resourcesystem/resourcesystem.cpp:3169 */
	void ForceSynchronization(CResourceSystem* );
	/* resourcesystem/resourcesystem.cpp:900 */
	ExtRefList_t* GetExtRefsForResource(CResourceSystem* , ResourceHandle_t);
	CUtlVector<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> > m_ResourceType; /* 72 32 */
	int m_nFrameCount; /* 104 4 */
	int m_nBlockingLoadCount; /* 108 4 */
	CUtlVector<unsigned int*, CUtlMemory<unsigned int*, int> > m_FrameCounters; /* 112 32 */
	CUtlVector<unsigned int*, CUtlMemory<unsigned int*, int> > m_FinishedFrameCounters; /* 144 32 */
	CInterlockedInt m_nPendingGlobalStreamingDataRequests __attribute__((__aligned__(4))); /* 176 4 */
	CTSQueue<CResourceManifest*, false> m_PendingResourceManifests __attribute__((__aligned__(16))); /* 192 64 */
	CTSQueue<CResourceManifest*, false> m_PendingResourceManifestDeletions __attribute__((__aligned__(16))); /* 256 64 */
	CResourceManifest * m_pActiveBlockingManifest; /* 320 8 */
	CUtlLinkedList<CResourceManifest*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CResourceManifest*, short unsigned int>, short unsigned int> > m_activeResourceManifests; /* 328 40 */
	CUtlBlockLinkedList<ExtRefList_t*, unsigned int> m_extRefs; /* 368 48 */
	CTSQueue<const ResourceBindingBase_t*, false> m_DeletionRequests __attribute__((__aligned__(16))); /* 416 64 */
	CUtlVector<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> > m_JustInTimeManifests; /* 480 32 */
	IResourceUpdater * m_pResourceUpdater; /* 512 8 */
	uint64 m_nLongTypeManagerUpdateRelativeTicks; /* 520 8 */
	ResourceIdMap_t m_IdMap __attribute__((__aligned__(16))); /* 528 49088 */
	ResourceIdMap_t m_AnonymousMap __attribute__((__aligned__(16))); /* 49616 49088 */
	CInterlockedUInt64 m_nNextAnonymousId __attribute__((__aligned__(8))); /* 98704 8 */
	bool m_bErrorResourcesReloaded; /* 98712 1 */
	bool m_bInFrameUpdate; /* 98713 1 */
	bool m_bDisallowNewManifestsStarting; /* 98714 1 */
	bool m_bShuttingDown; /* 98715 1 */
	bool m_bDrainingAllAsyncRequests; /* 98716 1 */
	bool m_bExitOnResourceLoadFailure; /* 98717 1 */
	bool m_bTypeManifestPriorityHasBeenSpecified; /* 98718 1 */
	bool m_bSpewBlockingLoads; /* 98719 1 */
	CThreadEvent m_ResourceProgressEvent; /* 98720 128 */
	CUtlSymbolTableLarge m_ResourceNameSymbols; /* 98848 144 */
	CThreadFastMutex m_ResourceNameSymbolMutex; /* 98992 24 */
	CUtlStringList m_whiteListedMissingResourceNames; /* 99016 32 */
	CUtlVectorFixedGrowable<CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8> m_ForcedSynchronizationCallbacks __attribute__((__aligned__(8))); /* 99048 160 */
	CUtlVector<IToolsResourceListener*, CUtlMemory<IToolsResourceListener*, int> > m_ToolsResourceListeners; /* 99208 32 */
	bool m_pDebugModeEnabled[3]; /* 99240 3 */
	class CThreadEvent * GetResourceProgresEvent(class CResourceSystem *); /* linkage=_ZN15CResourceSystem23GetResourceProgresEventEv */
	class IResourceUpdater * GetResourceUpdater(class CResourceSystem *); /* linkage=_ZN15CResourceSystem18GetResourceUpdaterEv */
	/* <22c2eea> resourcesystem/resourcesystem.h:291 */
	virtual bool IsShuttingDown(class CResourceSystem *); /* linkage=_ZN15CResourceSystem14IsShuttingDownEv */
	virtual class IGenericDataTypeManager * GetGenericDataTypeManager(class CResourceSystem *); /* linkage=_ZN15CResourceSystem25GetGenericDataTypeManagerEv */
	void AllocExtRefs(class CResourceSystem *, ResourceHandleWritable_t, int, ResourceHandle_t *); /* linkage=_ZN15CResourceSystem12AllocExtRefsEP21ResourceBindingBase_tiPPKS0_ */
	/* <238ada3> resourcesystem/resourcesystem.cpp:1526 */
	void MaybeExitBecauseOfResourceLoadFailure(class CResourceSystem *, const char  *); /* linkage=_ZN15CResourceSystem37MaybeExitBecauseOfResourceLoadFailureEPKc */
	void NotifyToolsResourceListenersForPreReload(class CResourceSystem *, class ResourceId_t, ResourceHandle_t, ResourceType_t); /* linkage=_ZN15CResourceSystem40NotifyToolsResourceListenersForPreReloadE12ResourceId_tPK21ResourceBindingBase_ty */
	bool IsCurrentlyProcessingReloadManifest(const class CResourceSystem  *); /* linkage=_ZNK15CResourceSystem35IsCurrentlyProcessingReloadManifestEv */
	/* <238a7ba> resourcesystem/resourcesystem.cpp:1100 */
	const class ResourceTypeRegistration_t  * GetRegistrationForResource(const class CResourceSystem  *, ResourceHandle_t); /* linkage=_ZNK15CResourceSystem26GetRegistrationForResourceEPK21ResourceBindingBase_t */
	void MarkResourceNeedingFinalization(class CResourceSystem *, ResourceHandleWritable_t, bool); /* linkage=_ZN15CResourceSystem31MarkResourceNeedingFinalizationEP21ResourceBindingBase_tb */
	void BuildExtRefListForResource(class CResourceSystem *, ResourceHandle_t, ExtRefHashTable_t *); /* linkage=_ZN15CResourceSystem26BuildExtRefListForResourceEPK21ResourceBindingBase_tP13CUtlHashtableI12ResourceId_tS2_16ExtRefHashFunc_t19DefaultEqualFunctorIS4_E11undefined_t10CUtlMemoryI18CUtlHashtableEntryIS4_S2_EiEE */
	bool IsCurrentReloadingResource(const class CResourceSystem  *, ResourceHandle_t); /* linkage=_ZNK15CResourceSystem26IsCurrentReloadingResourceEPK21ResourceBindingBase_t */
	bool DoesResourceNeedFinalization(const class CResourceSystem  *, ResourceHandle_t); /* linkage=_ZNK15CResourceSystem28DoesResourceNeedFinalizationEPK21ResourceBindingBase_t */
	bool IsDebugModeEnabled(const class CResourceSystem  *, enum ResourceSystemDebugMode_t); /* linkage=_ZNK15CResourceSystem18IsDebugModeEnabledE25ResourceSystemDebugMode_t */
	/* <238560d> resourcesystem/resourcesystem.h:489 */
	virtual class ResourceId_t ResourceHandleToResourceId(const class CResourceSystem  *, ResourceHandle_t); /* linkage=_ZNK15CResourceSystem26ResourceHandleToResourceIdEPK21ResourceBindingBase_t */
	bool InFrameUpdate(const class CResourceSystem  *); /* linkage=_ZNK15CResourceSystem13InFrameUpdateEv */
	void CResourceSystem(class CResourceSystem *, const class CResourceSystem  &); /* linkage=_ZN15CResourceSystemC4ERKS_ */
	virtual enum InitReturnVal_t Init(class CResourceSystem *); /* linkage=_ZN15CResourceSystem4InitEv */
	/* <238d34e> resourcesystem/resourcesystem.cpp:1976 */
	virtual void PreShutdown(class CResourceSystem *); /* linkage=_ZN15CResourceSystem11PreShutdownEv */
	virtual void Shutdown(class CResourceSystem *); /* linkage=_ZN15CResourceSystem8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CResourceSystem *); /* linkage=_ZN15CResourceSystem15GetDependenciesEv */
	/* <2385550> resourcesystem/resourcesystem.cpp:210 */
	virtual void * QueryInterface(class CResourceSystem *, const char  *); /* linkage=_ZN15CResourceSystem14QueryInterfaceEPKc */
	virtual void InstallTypeManager(class CResourceSystem *, ResourceType_t, class IResourceTypeManager *, const char  *, const char  *); /* linkage=_ZN15CResourceSystem18InstallTypeManagerEyP20IResourceTypeManagerPKcS3_ */
	virtual void InstallNullTypeManager(class CResourceSystem *, ResourceType_t, const char  *); /* linkage=_ZN15CResourceSystem22InstallNullTypeManagerEyPKc */
	/* <238dd84> resourcesystem/resourcesystem.cpp:529 */
	virtual void RemoveResourceTypeManager(class CResourceSystem *, class IResourceTypeManager *); /* linkage=_ZN15CResourceSystem25RemoveResourceTypeManagerEP20IResourceTypeManager */
	virtual void RemoveNullTypeManager(class CResourceSystem *, ResourceType_t); /* linkage=_ZN15CResourceSystem21RemoveNullTypeManagerEy */
	virtual class IResourceTypeManager * GetTypeManager(class CResourceSystem *, ResourceType_t); /* linkage=_ZN15CResourceSystem14GetTypeManagerEy */
	virtual HResourceManifest LoadResourceManifestFile(class CResourceSystem *, const char  *, enum ResourceManifestLoadBehavior_t, const char  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN15CResourceSystem24LoadResourceManifestFileEPKc30ResourceManifestLoadBehavior_tS1_30ResourceManifestLoadPriority_t */
	virtual HResourceManifest LoadResourceManifestGroup(class CResourceSystem *, const char  *, enum ResourceManifestLoadBehavior_t, const char  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN15CResourceSystem25LoadResourceManifestGroupEPKc30ResourceManifestLoadBehavior_tS1_30ResourceManifestLoadPriority_t */
	virtual HResourceManifest LoadResourceManifestNamed(class CResourceSystem *, const char  *, enum ResourceManifestLoadBehavior_t, const char  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN15CResourceSystem25LoadResourceManifestNamedEPKc30ResourceManifestLoadBehavior_tS1_30ResourceManifestLoadPriority_t */
	/* <238c1d4> resourcesystem/resourcesystem.cpp:2078 */
	virtual HResourceManifest CreateResourceManifest(class CResourceSystem *, const class ResourceManifestCreationInfo_t  &); /* linkage=_ZN15CResourceSystem22CreateResourceManifestERK30ResourceManifestCreationInfo_t */
	/* <23854c9> resourcesystem/resourcesystem.cpp:2217 */
	virtual void SetManifestCompletionCallback(class CResourceSystem *, HResourceManifest, ResourceManifestLoadCompletionCallback_t, void *); /* linkage=_ZN15CResourceSystem29SetManifestCompletionCallbackEP19HResourceManifest__PFvS1_PvES2_ */
	virtual bool IsManifestLoaded(class CResourceSystem *, HResourceManifest); /* linkage=_ZN15CResourceSystem16IsManifestLoadedEP19HResourceManifest__ */
	virtual const char  * GetResourceManifestDebugName(class CResourceSystem *, HResourceManifest); /* linkage=_ZN15CResourceSystem28GetResourceManifestDebugNameEP19HResourceManifest__ */
	virtual void DestroyResourceManifest(class CResourceSystem *, HResourceManifest); /* linkage=_ZN15CResourceSystem23DestroyResourceManifestEP19HResourceManifest__ */
	virtual void Update(class CResourceSystem *, int, enum ResourceSystemUpdateMode_t); /* linkage=_ZN15CResourceSystem6UpdateEi26ResourceSystemUpdateMode_t */
	virtual void UpdateSimple(class CResourceSystem *); /* linkage=_ZN15CResourceSystem12UpdateSimpleEv */
	virtual bool HasPendingWork(class CResourceSystem *); /* linkage=_ZN15CResourceSystem14HasPendingWorkEv */
	virtual void RegisterFinishedFrameCounter(class CResourceSystem *, uint32 *); /* linkage=_ZN15CResourceSystem28RegisterFinishedFrameCounterEPj */
	virtual void UnregisterFinishedFrameCounter(class CResourceSystem *, uint32 *); /* linkage=_ZN15CResourceSystem30UnregisterFinishedFrameCounterEPj */
	/* <2384fd9> resourcesystem/resourcesystem.cpp:980 */
	virtual int GetNamedResourceCount(const class CResourceSystem  *); /* linkage=_ZNK15CResourceSystem21GetNamedResourceCountEv */
	/* <238bbb7> resourcesystem/resourcesystem.cpp:985 */
	virtual int GetNamedResources(class CResourceSystem *, int, int, ResourceHandle_t *, ResourceSystemGetNamedResourcesFlags_t); /* linkage=_ZN15CResourceSystem17GetNamedResourcesEiiPPK21ResourceBindingBase_t33ResourceSystemGetResourcesFlags_t */
	virtual void GetAllNamedResourcesByType(class CResourceSystem *, ResourceType_t, class CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > &, ResourceSystemGetNamedResourcesFlags_t); /* linkage=_ZN15CResourceSystem26GetAllNamedResourcesByTypeEyR10CUtlVectorIPK21ResourceBindingBase_t10CUtlMemoryIS3_iEE33ResourceSystemGetResourcesFlags_t */
	virtual int GetAllResourceCount(const class CResourceSystem  *, enum ResourceSystemGetResourcesFlags_t); /* linkage=_ZNK15CResourceSystem19GetAllResourceCountE33ResourceSystemGetResourcesFlags_t */
	virtual int GetAllResources(class CResourceSystem *, int, int, ResourceHandle_t *, enum ResourceSystemGetResourcesFlags_t); /* linkage=_ZN15CResourceSystem15GetAllResourcesEiiPPK21ResourceBindingBase_t33ResourceSystemGetResourcesFlags_t */
	/* <238de31> resourcesystem/resourcesystem.cpp:1049 */
	virtual void GetAllResourcesByType(class CResourceSystem *, ResourceType_t, class CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > &, enum ResourceSystemGetResourcesFlags_t); /* linkage=_ZN15CResourceSystem21GetAllResourcesByTypeEyR10CUtlVectorIPK21ResourceBindingBase_t10CUtlMemoryIS3_iEE33ResourceSystemGetResourcesFlags_t */
	virtual ResourceHandle_t FindOrRegisterResourceByName(class CResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15CResourceSystem28FindOrRegisterResourceByNameERK13CResourceNameb */
	virtual ResourceHandle_t FindResourceById(class CResourceSystem *, class ResourceId_t, ResourceType_t); /* linkage=_ZN15CResourceSystem16FindResourceByIdE12ResourceId_ty */
	virtual ResourceHandle_t FindOrCreateProceduralResource(class CResourceSystem *, const class CResourceName  &, void *, enum ProceduralResourceType_t); /* linkage=_ZN15CResourceSystem30FindOrCreateProceduralResourceERK13CResourceNamePv24ProceduralResourceType_t */
	/* <23860fd> resourcesystem/resourcesystem.h:506 */
	virtual void GetResourceName(class CResourceSystem *, ResourceHandle_t, class CBufferString *, bool); /* linkage=_ZN15CResourceSystem15GetResourceNameEPK21ResourceBindingBase_tP13CBufferStringb */
	virtual void GetResourceName(class CResourceSystem *, ResourceHandle_t, class CResourceName *); /* linkage=_ZN15CResourceSystem15GetResourceNameEPK21ResourceBindingBase_tP13CResourceName */
	/* <2387acf> resourcesystem/resourcesystem.h:526 */
	virtual ResourceType_t GetResourceType(class CResourceSystem *, ResourceHandle_t); /* linkage=_ZN15CResourceSystem15GetResourceTypeEPK21ResourceBindingBase_t */
	virtual void DeleteResource(class CResourceSystem *, ResourceHandle_t); /* linkage=_ZN15CResourceSystem14DeleteResourceEPK21ResourceBindingBase_t */
	virtual ResourceHandle_t GetErrorResource(class CResourceSystem *, ResourceType_t); /* linkage=_ZN15CResourceSystem16GetErrorResourceEy */
	/* <2387851> resourcesystem/resourcesystem.cpp:3040 */
	virtual const char  * GetResourceTypeName(class CResourceSystem *, ResourceType_t); /* linkage=_ZN15CResourceSystem19GetResourceTypeNameEy */
	/* <238c0a4> resourcesystem/resourcesystem.cpp:789 */
	virtual void MarkErrorResourcesReloaded(class CResourceSystem *); /* linkage=_ZN15CResourceSystem26MarkErrorResourcesReloadedEv */
	virtual ResourceHandle_t CreateEmptyResource(class CResourceSystem *, const class CResourceName  &); /* linkage=_ZN15CResourceSystem19CreateEmptyResourceERK13CResourceName */
	virtual ResourceHandle_t BlockingLoadResourceByName(class CResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15CResourceSystem26BlockingLoadResourceByNameERK13CResourceNamePKc */
	/* <238e93d> resourcesystem/resourcesystem.cpp:1237 */
	virtual ResourceHandle_t BlockingLoadResourceByNameIntoJustInTimeManifest(class CResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15CResourceSystem48BlockingLoadResourceByNameIntoJustInTimeManifestERK13CResourceNamePKc */
	virtual void FreeJustInTimeManifests(class CResourceSystem *); /* linkage=_ZN15CResourceSystem23FreeJustInTimeManifestsEv */
	virtual int GetJustInTimeManifestCount(class CResourceSystem *); /* linkage=_ZN15CResourceSystem26GetJustInTimeManifestCountEv */
	virtual void GetJustInTimeManifestResources(class CResourceSystem *, class CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > &); /* linkage=_ZN15CResourceSystem30GetJustInTimeManifestResourcesER10CUtlVectorIPK21ResourceBindingBase_t10CUtlMemoryIS3_iEE */
	virtual void EnsureResourceByNameIntoJustInTimeManifest(class CResourceSystem *, const class CResourceName  &, const char  *); /* linkage=_ZN15CResourceSystem42EnsureResourceByNameIntoJustInTimeManifestERK13CResourceNamePKc */
	virtual void InstallResourceUpdater(class CResourceSystem *, class IResourceUpdater *); /* linkage=_ZN15CResourceSystem22InstallResourceUpdaterEP16IResourceUpdater */
	virtual void UninstallResourceUpdater(class CResourceSystem *, class IResourceUpdater *); /* linkage=_ZN15CResourceSystem24UninstallResourceUpdaterEP16IResourceUpdater */
	virtual void GetActualFileName(class CResourceSystem *, ResourceHandle_t, class CBufferString *, bool); /* linkage=_ZN15CResourceSystem17GetActualFileNameEPK21ResourceBindingBase_tP13CBufferStringb */
	virtual enum ResourceStatus_t GetResourceStatus(class CResourceSystem *, class ResourceId_t); /* linkage=_ZN15CResourceSystem17GetResourceStatusE12ResourceId_t */
	/* <2385095> resourcesystem/resourcesystem.cpp:1361 */
	virtual enum ResourceStatus_t GetResourceStatus(class CResourceSystem *, ResourceHandle_t); /* linkage=_ZN15CResourceSystem17GetResourceStatusEPK21ResourceBindingBase_t */
	/* <2385400> resourcesystem/resourcesystem.cpp:1356 */
	virtual enum ResourceStatus_t GetResourceStatus(class CResourceSystem *, const class CResourceName  &); /* linkage=_ZN15CResourceSystem17GetResourceStatusERK13CResourceName */
	virtual ResourceType_t GetResourceHandleType(class CResourceSystem *, ResourceHandle_t); /* linkage=_ZN15CResourceSystem21GetResourceHandleTypeEPK21ResourceBindingBase_t */
	virtual void RegisterForcedSynchronizationCallback(class CResourceSystem *, ResourceSystemForcedSynchronizationCallback_t, void *); /* linkage=_ZN15CResourceSystem37RegisterForcedSynchronizationCallbackEPFvPvES0_ */
	/* <23856f7> resourcesystem/resourcesystem.cpp:3151 */
	virtual void UnregisterForcedSynchronizationCallback(class CResourceSystem *, ResourceSystemForcedSynchronizationCallback_t, void *); /* linkage=_ZN15CResourceSystem39UnregisterForcedSynchronizationCallbackEPFvPvES0_ */
	virtual void GetResourcesNamesInManifest(const class CResourceSystem  *, HResourceManifest, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK15CResourceSystem27GetResourcesNamesInManifestEP19HResourceManifest__R10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	virtual void ForceSynchronizationAndBlockUntilManifestLoaded(class CResourceSystem *, HResourceManifest); /* linkage=_ZN15CResourceSystem47ForceSynchronizationAndBlockUntilManifestLoadedEP19HResourceManifest__ */
	virtual void BlockingFinishAllCurrentlyLoadingManifests(class CResourceSystem *); /* linkage=_ZN15CResourceSystem42BlockingFinishAllCurrentlyLoadingManifestsEv */
	virtual void RegisterToolsResourceListener(class CResourceSystem *, class IToolsResourceListener *); /* linkage=_ZN15CResourceSystem29RegisterToolsResourceListenerEP22IToolsResourceListener */
	virtual void UnregisterToolsResourceListener(class CResourceSystem *, class IToolsResourceListener *); /* linkage=_ZN15CResourceSystem31UnregisterToolsResourceListenerEP22IToolsResourceListener */
	virtual class ICodeResourceManifestManager * GetCodeResourceManifestManager(class CResourceSystem *); /* linkage=_ZN15CResourceSystem30GetCodeResourceManifestManagerEv */
	virtual class IResourceSystemLeakTracker * GetLeakTracker(class CResourceSystem *); /* linkage=_ZN15CResourceSystem14GetLeakTrackerEv */
	virtual bool HasCompletedIORequests(class CResourceSystem *); /* linkage=_ZN15CResourceSystem22HasCompletedIORequestsEv */
	virtual void EnableDebugMode(class CResourceSystem *, enum ResourceSystemDebugMode_t, bool); /* linkage=_ZN15CResourceSystem15EnableDebugModeE25ResourceSystemDebugMode_tb */
	virtual enum AsyncRequestPriority_t GetAsyncFileRequestPriority(const class CResourceSystem  *, enum ResourceManifestLoadPriority_t); /* linkage=_ZNK15CResourceSystem27GetAsyncFileRequestPriorityE30ResourceManifestLoadPriority_t */
	virtual void ReloadSymlinkedResidentResources(class CResourceSystem *); /* linkage=_ZN15CResourceSystem32ReloadSymlinkedResidentResourcesEv */
	/* <238df1f> resourcesystem/resourcesystem.cpp:2672 */
	virtual void RegisterResourceSystemUser(class CResourceSystem *, uint32 *); /* linkage=_ZN15CResourceSystem26RegisterResourceSystemUserEPj */
	/* <2385ebe> resourcesystem/resourcesystem.cpp:2681 */
	virtual void UnregisterResourceSystemUser(class CResourceSystem *, uint32 *); /* linkage=_ZN15CResourceSystem28UnregisterResourceSystemUserEPj */
	/* <238524f> resourcesystem/resourcesystem.cpp:2689 */
	virtual void RegisterNamedManifest(class CResourceSystem *, class ResourceManifestDesc_t *); /* linkage=_ZN15CResourceSystem21RegisterNamedManifestEP22ResourceManifestDesc_t */
	/* <238529e> resourcesystem/resourcesystem.cpp:2697 */
	virtual void UnregisterNamedManifest(class CResourceSystem *, class ResourceManifestDesc_t *); /* linkage=_ZN15CResourceSystem23UnregisterNamedManifestEP22ResourceManifestDesc_t */
	/* <2385112> resourcesystem/resourcesystem.cpp:1613 */
	virtual void ResourceReferenceLeakTracking_AddRef(class CResourceSystem *, ResourceHandle_t, enum ResourceLeakTrackingGroup_t, uintp); /* linkage=_ZN15CResourceSystem36ResourceReferenceLeakTracking_AddRefEPK21ResourceBindingBase_t27ResourceLeakTrackingGroup_ty */
	/* <2385189> resourcesystem/resourcesystem.cpp:1621 */
	virtual void ResourceReferenceLeakTracking_Release(class CResourceSystem *, ResourceHandle_t, enum ResourceLeakTrackingGroup_t, uintp); /* linkage=_ZN15CResourceSystem37ResourceReferenceLeakTracking_ReleaseEPK21ResourceBindingBase_t27ResourceLeakTrackingGroup_ty */
	/* <2385200> resourcesystem/resourcesystem.cpp:1629 */
	virtual void ResourceReferenceLeakTracking_ReportReferences(class CResourceSystem *, ResourceHandle_t); /* linkage=_ZN15CResourceSystem46ResourceReferenceLeakTracking_ReportReferencesEPK21ResourceBindingBase_t */
	virtual void MarkLoadingWorkPending(class CResourceSystem *, ResourceHandle_t, bool); /* linkage=_ZN15CResourceSystem22MarkLoadingWorkPendingEPK21ResourceBindingBase_tb */
	virtual class IAsyncResourceDataRequest * CreateAsyncResourceDataRequest(class CResourceSystem *, ResourceHandle_t, int64, size_t, const char  *); /* linkage=_ZN15CResourceSystem30CreateAsyncResourceDataRequestEPK21ResourceBindingBase_txmPKc */
	/* <238546a> resourcesystem/resourcesystem.cpp:1680 */
	virtual void SubmitAsyncResourceDataRequest(class CResourceSystem *, class IAsyncResourceDataRequest *); /* linkage=_ZN15CResourceSystem30SubmitAsyncResourceDataRequestEP25IAsyncResourceDataRequest */
	/* <2384faf> resourcesystem/resourcesystem.h:258 */
	virtual bool IsBlockingOnManifestLoad(class CResourceSystem *); /* linkage=_ZN15CResourceSystem24IsBlockingOnManifestLoadEv */
	virtual void SetResourceTypeManifestPriority(class CResourceSystem *, ResourceType_t, enum ResourceManifestPriority_t); /* linkage=_ZN15CResourceSystem31SetResourceTypeManifestPriorityEy26ResourceManifestPriority_t */
	void CResourceSystem(class CResourceSystem *); /* linkage=_ZN15CResourceSystemC4Ev */
	virtual void ~CResourceSystem(class CResourceSystem *); /* linkage=_ZN15CResourceSystemD4Ev */
	bool RegisterResourceExternalReference(class CResourceSystem *, ResourceHandle_t, const class CResourceName  &, class CStrongHandleVoid *); /* linkage=_ZN15CResourceSystem33RegisterResourceExternalReferenceEPK21ResourceBindingBase_tRK13CResourceNameP17CStrongHandleVoid */
	HResourceManifest CreateResourceManifestInternal(class CResourceSystem *, const class ResourceManifestCreationInfo_t  &, bool); /* linkage=_ZN15CResourceSystem30CreateResourceManifestInternalERK30ResourceManifestCreationInfo_tb */
	int GetResourcesInMap(class CResourceSystem *, ResourceIdMap_t *, int, int, ResourceHandle_t *, ResourceSystemGetNamedResourcesFlags_t); /* linkage=_ZN15CResourceSystem17GetResourcesInMapEP10CUtlTSHashI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyEEiiPPKS1_33ResourceSystemGetResourcesFlags_t */
	void GetAllResourcesByTypeInMap(class CResourceSystem *, ResourceIdMap_t *, ResourceType_t, class CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > &, ResourceSystemGetNamedResourcesFlags_t); /* linkage=_ZN15CResourceSystem26GetAllResourcesByTypeInMapEP10CUtlTSHashI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyEEyR10CUtlVectorIPKS1_10CUtlMemoryIS8_iEE33ResourceSystemGetResourcesFlags_t */
	ResourceNameHandleInternal_t MakeResourceNameSymbol(class CResourceSystem *, const char  *); /* linkage=_ZN15CResourceSystem22MakeResourceNameSymbolEPKc */
	LoadingResourceManifestIndex_t AllocateLoadingManifestIndex(class CResourceSystem *, class CResourceManifest *); /* linkage=_ZN15CResourceSystem28AllocateLoadingManifestIndexEP17CResourceManifest */
	void FreeLoadingManifestIndex(class CResourceSystem *, LoadingResourceManifestIndex_t); /* linkage=_ZN15CResourceSystem24FreeLoadingManifestIndexEt */
	class CResourceManifest * GetLoadingManifest(class CResourceSystem *, LoadingResourceManifestIndex_t); /* linkage=_ZN15CResourceSystem18GetLoadingManifestEt */
	int GetFrameCount(class CResourceSystem *); /* linkage=_ZN15CResourceSystem13GetFrameCountEv */
	virtual bool IsInFrameUpdate(class CResourceSystem *); /* linkage=_ZN15CResourceSystem15IsInFrameUpdateEv */
	void FreeExtRefs(class CResourceSystem *, ResourceHandleWritable_t); /* linkage=_ZN15CResourceSystem11FreeExtRefsEP21ResourceBindingBase_t */
	/* <238a978> resourcesystem/resourcesystem.cpp:1342 */
	ResourceHandle_t FindResourceByIdNoFallbacks(class CResourceSystem *, class ResourceId_t); /* linkage=_ZN15CResourceSystem27FindResourceByIdNoFallbacksE12ResourceId_t */
	bool HasResourceTypeManifestPriorityBeenSet(const class CResourceSystem  *); /* linkage=_ZNK15CResourceSystem38HasResourceTypeManifestPriorityBeenSetEv */
	void EnqueueResourceManifest(class CResourceSystem *, class CResourceManifest *); /* linkage=_ZN15CResourceSystem23EnqueueResourceManifestEP17CResourceManifest */
	void NotifyResourceManifestDeleted(class CResourceSystem *, class CResourceManifest *); /* linkage=_ZN15CResourceSystem29NotifyResourceManifestDeletedEP17CResourceManifest */
	void LogAllocateTimes(class CResourceSystem *); /* linkage=_ZN15CResourceSystem16LogAllocateTimesEv */
	void ResetAllocateTimes(class CResourceSystem *); /* linkage=_ZN15CResourceSystem18ResetAllocateTimesEv */
	void GetResourcesNamesInManifestInternal(const class CResourceSystem  *, const class CResourceManifest  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK15CResourceSystem35GetResourcesNamesInManifestInternalEPK17CResourceManifestR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	ResourceHandle_t CreateAnonymousProceduralResource(class CResourceSystem *, const class CResourceName  &, void *); /* linkage=_ZN15CResourceSystem33CreateAnonymousProceduralResourceERK13CResourceNamePv */
	/* <238b611> resourcesystem/resourcesystem.cpp:3072 */
	void GetFileName(class CResourceSystem *, ResourceHandle_t, class CBufferString *, bool); /* linkage=_ZN15CResourceSystem11GetFileNameEPK21ResourceBindingBase_tP13CBufferStringb */
	/* <238a330> resourcesystem/resourcesystem.cpp:1066 */
	ResourceTypeIndex_t ResourceTypeToTypeIndex_DoNotCreatePlaceholder(const class CResourceSystem  *, ResourceType_t); /* linkage=_ZNK15CResourceSystem46ResourceTypeToTypeIndex_DoNotCreatePlaceholderEy */
	ResourceTypeIndex_t ResourceTypeToTypeIndex_CreatePlaceholder(class CResourceSystem *, ResourceType_t); /* linkage=_ZN15CResourceSystem41ResourceTypeToTypeIndex_CreatePlaceholderEy */
	void Update_Internal(class CResourceSystem *, int, enum ResourceSystemUpdateMode_t, bool, bool); /* linkage=_ZN15CResourceSystem15Update_InternalEi26ResourceSystemUpdateMode_tbb */
	void Update_Internal_FastSpin(class CResourceSystem *); /* linkage=_ZN15CResourceSystem24Update_Internal_FastSpinEv */
	void FrameUpdateForTypeManager(class CResourceSystem *, int, int); /* linkage=_ZN15CResourceSystem25FrameUpdateForTypeManagerEii */
	/* <238b052> resourcesystem/resourcesystem.cpp:1687 */
	void GetActiveManifestState(const class CResourceSystem  *, bool *, bool *); /* linkage=_ZNK15CResourceSystem22GetActiveManifestStateEPbS0_ */
	/* <238b8ce> resourcesystem/resourcesystem.cpp:3129 */
	ResourceType_t ResourceHandleToResourceType(const class CResourceSystem  *, ResourceHandle_t); /* linkage=_ZNK15CResourceSystem28ResourceHandleToResourceTypeEPK21ResourceBindingBase_t */
	void * GetErrorResourceData(const class CResourceSystem  *, ResourceType_t); /* linkage=_ZNK15CResourceSystem20GetErrorResourceDataEy */
	void * GetErrorResourceData(const class CResourceSystem  *, ResourceTypeIndex_t); /* linkage=_ZNK15CResourceSystem20GetErrorResourceDataE15CUtlTypesafeIntIP22ResourceTypeIndex_t_idsE */
	enum ResourceDeallocationType_t ComputeDeallocationType(const class CResourceSystem  *, ResourceHandle_t); /* linkage=_ZNK15CResourceSystem23ComputeDeallocationTypeEPK21ResourceBindingBase_t */
	ResourceHandle_t HashHandleToResourceHandle(const class CResourceSystem  *, UtlTSHashHandle_t); /* linkage=_ZNK15CResourceSystem26HashHandleToResourceHandleEx */
	void AllocResourceName(class CResourceSystem *, ResourceHandleWritable_t, const class CResourceName  &); /* linkage=_ZN15CResourceSystem17AllocResourceNameEP21ResourceBindingBase_tRK13CResourceName */
	/* <238c80f> resourcesystem/resourcesystem.cpp:870 */
	void FreeResourceName(class CResourceSystem *, ResourceHandleWritable_t); /* linkage=_ZN15CResourceSystem16FreeResourceNameEP21ResourceBindingBase_t */
	/* <238b4d4> resourcesystem/resourcesystem.cpp:2737 */
	void UpdateFrameCounters(class CResourceSystem *); /* linkage=_ZN15CResourceSystem19UpdateFrameCountersEv */
	/* <238b3c8> resourcesystem/resourcesystem.cpp:2722 */
	uint32 ComputeFinishedFrameCount(const class CResourceSystem  *); /* linkage=_ZNK15CResourceSystem25ComputeFinishedFrameCountEv */
	void ExecuteResourceManifestRequests(class CResourceSystem *, bool); /* linkage=_ZN15CResourceSystem31ExecuteResourceManifestRequestsEb */
	bool RemoveManifestFromPendingLoadQueue(class CResourceSystem *, class CResourceManifest *); /* linkage=_ZN15CResourceSystem34RemoveManifestFromPendingLoadQueueEP17CResourceManifest */
	void MN_DeleteRequestedResources(class CResourceSystem *); /* linkage=_ZN15CResourceSystem27MN_DeleteRequestedResourcesEv */
	void MN_DeallocateResourceData(class CResourceSystem *, ResourceHandleWritable_t); /* linkage=_ZN15CResourceSystem25MN_DeallocateResourceDataEP21ResourceBindingBase_t */
	/* <238cd92> resourcesystem/resourcesystem.cpp:2277 */
	bool MN_PotentiallyDeleteResource(class CResourceSystem *, ResourceHandle_t); /* linkage=_ZN15CResourceSystem28MN_PotentiallyDeleteResourceEPK21ResourceBindingBase_t */
	/* <238c169> resourcesystem/resourcesystem.cpp:2353 */
	void MN_UpdateErrorResources(class CResourceSystem *, bool); /* linkage=_ZN15CResourceSystem23MN_UpdateErrorResourcesEb */
	ResourceHandle_t CreateEmptyResourceInternal(class CResourceSystem *, const class CResourceName  &, bool); /* linkage=_ZN15CResourceSystem27CreateEmptyResourceInternalERK13CResourceNameb */
	void WarnAboutResourceTypeLeaks(class CResourceSystem *, ResourceIdMap_t *, ResourceTypeIndex_t, const char  *); /* linkage=_ZN15CResourceSystem26WarnAboutResourceTypeLeaksEP10CUtlTSHashI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyEE15CUtlTypesafeIntIP22ResourceTypeIndex_t_idsEPKc */
	/* <238dd0d> resourcesystem/resourcesystem.cpp:587 */
	void RemoveResourceTypeManagerInternal(class CResourceSystem *, class IResourceTypeManager *, ResourceType_t); /* linkage=_ZN15CResourceSystem33RemoveResourceTypeManagerInternalEP20IResourceTypeManagery */
	void WarnAboutLiveResourceLeaks(class CResourceSystem *, ResourceIdMap_t *); /* linkage=_ZN15CResourceSystem26WarnAboutLiveResourceLeaksEP10CUtlTSHashI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyEE */
	void HaltAndCleanupPendingResources(class CResourceSystem *); /* linkage=_ZN15CResourceSystem30HaltAndCleanupPendingResourcesEv */
	ResourceTypeIndex_t Internal_InstallPlaceholderTypeManager(class CResourceSystem *, ResourceType_t); /* linkage=_ZN15CResourceSystem38Internal_InstallPlaceholderTypeManagerEy */
	void LoadMissingResourceWhitelist(class CResourceSystem *); /* linkage=_ZN15CResourceSystem28LoadMissingResourceWhitelistEv */
	/* <238d2fa> resourcesystem/resourcesystem.cpp:1996 */
	void ImmediatelyProcessAllAsyncRequestsOnShutdown(class CResourceSystem *); /* linkage=_ZN15CResourceSystem44ImmediatelyProcessAllAsyncRequestsOnShutdownEv */
	bool GetManifestToStartLoading(class CResourceSystem *, class CResourceManifest * *); /* linkage=_ZN15CResourceSystem25GetManifestToStartLoadingEPP17CResourceManifest */
	/* <238b310> resourcesystem/resourcesystem.cpp:1730 */
	void FinalizeOrAdvanceLoadingManifests(class CResourceSystem *, int, class CResourceManifest * *); /* linkage=_ZN15CResourceSystem33FinalizeOrAdvanceLoadingManifestsEiPP17CResourceManifest */
	/* <238a64d> resourcesystem/resourcesystem.cpp:1091 */
	const class ResourceTypeRegistration_t  * GetRegistrationForType(const class CResourceSystem  *, ResourceTypeIndex_t); /* linkage=_ZNK15CResourceSystem22GetRegistrationForTypeE15CUtlTypesafeIntIP22ResourceTypeIndex_t_idsE */
	/* <238a40e> resourcesystem/resourcesystem.cpp:1086 */
	const class ResourceTypeRegistration_t  * GetRegistrationForType(const class CResourceSystem  *, ResourceType_t); /* linkage=_ZNK15CResourceSystem22GetRegistrationForTypeEy */
	/* <238b287> resourcesystem/resourcesystem.cpp:1713 */
	bool IsResourceCurrentlyLoading(const class CResourceSystem  *, ResourceHandle_t); /* linkage=_ZNK15CResourceSystem26IsResourceCurrentlyLoadingEPK21ResourceBindingBase_t */
	/* <238bacb> resourcesystem/resourcesystem.cpp:3169 */
	void ForceSynchronization(class CResourceSystem *); /* linkage=_ZN15CResourceSystem20ForceSynchronizationEv */
	/* <238a180> resourcesystem/resourcesystem.cpp:900 */
	class ExtRefList_t * GetExtRefsForResource(class CResourceSystem *, ResourceHandle_t); /* linkage=_ZN15CResourceSystem21GetExtRefsForResourceEPK21ResourceBindingBase_t */
} __attribute__((__aligned__(16)));

// <0238256C> resourcesystem/resourcesystem.h:217
// function calls: 8
void CResourceSystem::GetResourceHandleType(ResourceHandle_t hResource)
{
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 1093
	CUtlTypesafeInt<ResourceTypeIndex_t_id::operator==(
			const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& other);  // 1093
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 1096
	{
	}
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 1097
	CResourceSystem::GetRegistrationForType(
				ResourceTypeIndex_t nTypeIndex);  // 1105
	CResourceSystem::GetRegistrationForResource(
					ResourceHandle_t hResource);  // 533
	CResourceSystem::GetResourceType(
			ResourceHandle_t hResource);  // 217
} /* size: 148, inline expansions: 8 (237 bytes) */

// <02384FAF> resourcesystem/resourcesystem.h:258
void CResourceSystem::IsBlockingOnManifestLoad()
{
} /* size: 16 */

// <02382553> resourcesystem/resourcesystem.h:258
inline void CResourceSystem::IsBlockingOnManifestLoad()
{
} /* size: 0 */

// <02167BEF> resourcesystem/resourcesystem.h:282
inline void CResourceSystem::GetResourceUpdater()
{
} /* size: 0 */

// <02167BD6> resourcesystem/resourcesystem.h:288
inline void CResourceSystem::GetResourceProgresEvent()
{
} /* size: 0 */

// <02382525> resourcesystem/resourcesystem.h:291
void CResourceSystem::IsShuttingDown()
{
} /* size: 12 */

// <022C0AB6> resourcesystem/resourcesystem.h:291
inline void CResourceSystem::IsShuttingDown()
{
} /* size: 0 */

// <023824C6> resourcesystem/resourcesystem.h:293
// function call: 1
void CResourceSystem::IsInFrameUpdate()
{
	CResourceSystem::InFrameUpdate(); // 293
} /* size: 12, inline expansions: 1 (0 bytes) */

// <023824A0> resourcesystem/resourcesystem.h:334
inline void ForcedSynchronizationCallbackInfo_t::operator==(const ForcedSynchronizationCallbackInfo_t& rhs)
{
} /* size: 0 */

// <02382487> resourcesystem/resourcesystem.h:352
inline void CResourceSystem::Update_Internal_FastSpin()
{
} /* size: 0 */

// <0238246E> resourcesystem/resourcesystem.h:473
inline void CResourceSystem::InFrameUpdate()
{
} /* size: 0 */

// <02382448> resourcesystem/resourcesystem.h:481
inline void CResourceSystem::HashHandleToResourceHandle(UtlTSHashHandle_t hHashHandle)
{
} /* size: 0 */

// <0238560D> resourcesystem/resourcesystem.h:489
// variable: 1
// function calls: 3
void CResourceSystem::ResourceHandleToResourceId(ResourceHandle_t hResource)
{
	UtlTSHashHandle_t nIndex; // 502
	GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		UtlTSHashHandle_t hHash);  // 503
	ResourceId_t::ResourceId_t(
			uint64 value);  // 503
	CResourceSystem::ResourceHandleToResourceId(
					ResourceHandle_t hResource);  // 489
} /* size: 29, variables: 1, inline expansions: 3 (8 bytes) */

// <02382415> resourcesystem/resourcesystem.h:489
// variable: 1
inline void CResourceSystem::ResourceHandleToResourceId(ResourceHandle_t hResource)
{
	UtlTSHashHandle_t nIndex; // 502
} /* size: 0, variables: 1 */

// <022DF865> resourcesystem/resourcesystem.h:489
// variable: 1
// function calls: 2
void CResourceSystem::ResourceHandleToResourceId(ResourceHandle_t hResource)
{
	UtlTSHashHandle_t nIndex; // 502
	GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		UtlTSHashHandle_t hHash);  // 503
	ResourceId_t::ResourceId_t(
			uint64 value);  // 503
} /* size: 29, variables: 1, inline expansions: 2 (4 bytes) */

// <023860FD> resourcesystem/resourcesystem.h:506
// function calls: 11
void CResourceSystem::GetResourceName(ResourceHandle_t hResource, CBufferString* pResourceName, bool bAppend)
{
	CUtlSymbolLarge::String(); // 148
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 148
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 143
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CBufferString* pOutBuffer,
			bool bAppend);  // 518
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 514
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 512
	CResourceSystem::GetResourceName(
			ResourceHandle_t hResource,
			CBufferString* pResourceName,
			bool bAppend);  // 506
} /* size: 180, inline expansions: 11 (324 bytes) */

// <023823D5> resourcesystem/resourcesystem.h:506
inline void CResourceSystem::GetResourceName(ResourceHandle_t hResource, CBufferString* pResourceName, bool bAppend)
{
} /* size: 0 */

// <023822D4> resourcesystem/resourcesystem.h:521
// function calls: 2
void CResourceSystem::GetResourceName(ResourceHandle_t hResource, CResourceName* pTarget)
{
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 523
} /* size: 56, inline expansions: 2 (58 bytes) */

// <02387ACF> resourcesystem/resourcesystem.h:526
// variable: 1
// function calls: 7
void CResourceSystem::GetResourceType(ResourceHandle_t hResource)
{
	const ResourceTypeRegistration_t* pRegistration; // 533
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 1093
	CUtlTypesafeInt<ResourceTypeIndex_t_id::operator==(
			const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& other);  // 1093
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 1096
	{
	}
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 1097
	CResourceSystem::GetRegistrationForType(
				ResourceTypeIndex_t nTypeIndex);  // 1105
	CResourceSystem::GetRegistrationForResource(
					ResourceHandle_t hResource);  // 533
} /* size: 116, variables: 1, inline expansions: 7 (152 bytes) */

// <023822A1> resourcesystem/resourcesystem.h:526
// variable: 1
inline void CResourceSystem::GetResourceType(ResourceHandle_t hResource)
{
	const ResourceTypeRegistration_t* pRegistration; // 533
} /* size: 0, variables: 1 */

// <02382003> resourcesystem/resourcesystem.h:538
// variables: 2
// function calls: 10
void CResourceSystem::GetErrorResource(ResourceType_t nType)
{
	const ResourceTypeRegistration_t* pRegistration; // 540
	{
		int i; // 1068
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 1068
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 1070
		CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
				short int nVal);  // 1071
	}
	CResourceSystem::ResourceTypeToTypeIndex_DoNotCreatePlaceholder(
							ResourceType_t nResourceType);  // 1088
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 1093
	{
	}
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 1097
	CResourceSystem::GetRegistrationForType(
				ResourceTypeIndex_t nTypeIndex);  // 1088
	CResourceSystem::GetRegistrationForType(
				ResourceType_t nResourceType);  // 540
} /* size: 162, variables: 1, inline expansions: 6 (278 bytes) */

// <02381FD8> resourcesystem/resourcesystem.h:544
inline void* CResourceSystem::GetErrorResourceData(ResourceType_t nType)
{
} /* size: 0 */

// <02381FA0> resourcesystem/resourcesystem.h:549
// variable: 1
inline void* CResourceSystem::GetErrorResourceData(ResourceTypeIndex_t nTypeIndex)
{
	const ResourceTypeRegistration_t* pRegistration; // 551
} /* size: 0, variables: 1 */

// <023F8C67> resourcesystem/resourcesystem.h:555
// variable: 1
inline void CResourceSystem::AllocateLoadingManifestIndex(CResourceManifest* pManifest)
{
	LoadingResourceManifestIndex_t nIndex; // 557
} /* size: 0, variables: 1 */

// <023F8C41> resourcesystem/resourcesystem.h:561
inline void CResourceSystem::FreeLoadingManifestIndex(LoadingResourceManifestIndex_t nIndex)
{
} /* size: 0 */

// <02381F52> resourcesystem/resourcesystem.h:580
void CResourceSystem::EnableDebugMode(ResourceSystemDebugMode_t mode, bool bEnable)
{
} /* size: 15 */

// <02381F2C> resourcesystem/resourcesystem.h:587
inline void CResourceSystem::IsDebugModeEnabled(ResourceSystemDebugMode_t mode)
{
} /* size: 0 */

// <022C0A1E> resourcesystem/resourcesystem.h:596
inline void CResourceSystem::DoesResourceNeedFinalization(ResourceHandle_t hResource)
{
} /* size: 0 */

