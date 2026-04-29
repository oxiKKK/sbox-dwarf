
//
// resourcesystem/loadingresource.h
//
//	referenced by: libengine2.so
//
//	functions: 21
//	class: 1
//	structs: 2
//

// <0224CE7F> resourcesystem/loadingresource.h:28
// member function: 1
// member variables: 6
// struct size: 40
struct LoadRequest_t {
	/* resourcesystem/loadingresource.h:30 */
	void LoadRequest_t(LoadRequest_t* , CResourceManifest* , ResourceManifestLoadPriority_t, bool, ResourceHandle_t, ResourceHandle_t, const CResourceName& );
	ResourceManifestLoadPriority_t m_nPriority; /* 0 4 */
	bool m_bLoadStreamingData; /* 4 1 */
	ResourceHandle_t m_hReferringResource; /* 8 8 */
	ResourceHandle_t m_hResource; /* 16 8 */
	const class CResourceName & m_ResourceName; /* 24 8 */
	CResourceManifest * m_pManifest; /* 32 8 */
};

// <023F896D> resourcesystem/loadingresource.h:30
void LoadRequest_t::LoadRequest_t(CResourceManifest* pManifest, ResourceManifestLoadPriority_t nPriority, bool bLoadStreamingData, ResourceHandle_t hReferringResource, ResourceHandle_t hResource, const CResourceName& resourceName)
{
} /* size: 0 */

// <023F890C> resourcesystem/loadingresource.h:30
inline void LoadRequest_t::LoadRequest_t(CResourceManifest* pManifest, ResourceManifestLoadPriority_t nPriority, bool bLoadStreamingData, ResourceHandle_t hReferringResource, ResourceHandle_t hResource, const CResourceName& resourceName)
{
} /* size: 0 */

// <0236A76D> resourcesystem/loadingresource.h:44
void LoadingResourceTable_t::LoadingResourceTable_t()
{
} /* size: 0 */

// <0236A751> resourcesystem/loadingresource.h:44
inline void LoadingResourceTable_t::LoadingResourceTable_t()
{
} /* size: 0 */

// <0236A73A> resourcesystem/loadingresource.h:44
void LoadingResourceTable_t::~LoadingResourceTable_t()
{
} /* size: 0 */

// <0236A71E> resourcesystem/loadingresource.h:44
inline void LoadingResourceTable_t::~LoadingResourceTable_t()
{
} /* size: 0 */

// <02250B78> resourcesystem/loadingresource.h:44
// member variables: 2
// struct size: 5,184
struct LoadingResourceTable_t {
	CUtlHashtableFixedGrowable m_Hash __attribute__((__aligned__(8))); /* 0 3104 */
	CUtlVectorFixedGrowable<CLoadingResource*, 256> m_List __attribute__((__aligned__(8))); /* 3104 2080 */
} __attribute__((__aligned__(8)));

// <0224CF75> resourcesystem/loadingresource.h:53
// member functions: 104
// member variables: 26
// static member variables: 2
// vtable entries: 3
// class size: 160
class CLoadingResource : public IAsyncResourceDataRequestOwner {
	/* resourcesystem/loadingresource.h:139 */
	enum LoadingState_t {
		LOADING_STATE_NOT_STARTED_LOAD = 0,
		LOADING_STATE_WAITING_FOR_DATA = 1,
		LOADING_STATE_WAITING_FOR_OWNER_MANIFEST = 2,
		LOADING_STATE_LOADED = 3,
	} __attribute__((__packed__));
	/* resourcesystem/loadingresource.h:147 */
	enum StreamingState_t {
		STREAMING_STATE_NOT_REQUESTED = 0,
		STREAMING_STATE_REQUESTED = 1,
		STREAMING_STATE_WAITING_FOR_STREAMING_ASYNC_REQUEST = 2,
		STREAMING_STATE_WAITING_FOR_STREAMING_DATA = 3,
		STREAMING_STATE_LOADED = 4,
	} __attribute__((__packed__));
public:
	/* class IAsyncResourceDataRequestOwner <ancestor>; */ /* 0 8 */
	void CLoadingResource(CLoadingResource* , const CLoadingResource& );
	/* resourcesystem/loadingresource.cpp:31 */
	CLoadingResource* FindLoadingResource(ResourceHandle_t);
	/* resourcesystem/loadingresource.cpp:42 */
	CLoadingResource* FindLoadingResource(ResourceHandle_t, LoadingResourceSerialNumber_t);
	/* resourcesystem/loadingresource.cpp:62 */
	void ProcessLoadRequest(const LoadRequest_t& , ResourceHandle_t);
	/* resourcesystem/loadingresource.h:282 */
	ResourceManifestLoadPriority_t GetPriority(const CLoadingResource* );
	/* resourcesystem/loadingresource.h:287 */
	bool IsLoadingStreamingData(const CLoadingResource* );
	/* resourcesystem/loadingresource.h:217 */
	bool IsCurrentlyLoading(const CLoadingResource* );
	/* resourcesystem/loadingresource.h:232 */
	bool IsExpectingStreamingDataRequest(const CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:1113 */
	void RegisterStreamingAsyncResourceDataRequest(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:1124 */
	void RegisterAllStreamingAsyncDataRequestsComplete(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:991 */
	void MarkLoadingWorkPending(CLoadingResource* , bool);
	/* resourcesystem/loadingresource.cpp:1154 */
	void FinalizeLoadRequest(CLoadingResource* , CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >* );
	/* resourcesystem/loadingresource.h:222 */
	void* GetOldAllocationToDelete(const CLoadingResource* );
	/* resourcesystem/loadingresource.h:227 */
	ResourceDeallocationType_t GetOldAllocationType(const CLoadingResource* );
	/* resourcesystem/loadingresource.h:237 */
	int GetExtRefDepth(const CLoadingResource* );
	/* resourcesystem/loadingresource.h:248 */
	void RegisterPendingStreamingDataRequest(CLoadingResource* , PendingRequestType_t);
	/* resourcesystem/loadingresource.h:265 */
	void RegisterPendingResourceFileRequest(CLoadingResource* , PendingRequestType_t);
	/* resourcesystem/loadingresource.cpp:1004 */
	bool IsReadyToFinalize(const CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:1084 */
	void AddLoadingResources(CLoadingResource* , LoadingResourceTable_t& );
	/* resourcesystem/loadingresource.h:243 */
	void RegisterAssociatedManifest(CLoadingResource* , HResourceManifest);
	/* resourcesystem/loadingresource.cpp:625 */
	void IncreasePriority(CLoadingResource* , ResourceManifestLoadPriority_t);
	/* resourcesystem/loadingresource.cpp:362 */
	void Cancel(CLoadingResource* );
	/* resourcesystem/loadingresource.h:292 */
	ResourceId_t GetResourceId(const CLoadingResource* );
	/* resourcesystem/loadingresource.h:297 */
	ResourceHandle_t GetResource(const CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:332 */
	LoadingResourceSerialNumber_t AddDependency(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:339 */
	void RemoveDependency(CLoadingResource* , LoadingResourceSerialNumber_t);
	/* resourcesystem/loadingresource.h:302 */
	LoadingResourceSerialNumber_t GetDependencySerialNumber(const CLoadingResource* );
	/* resourcesystem/loadingresource.h:307 */
	int GetDependencyCount(const CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:1040 */
	void ReportUnfinishedState(CLoadingResource* );
	/* resourcesystem/loadingresource.h:130 */
	int GetFirstOriginatingManifestIndex(CLoadingResource* );
private:
	/* resourcesystem/loadingresource.cpp:693 */
	virtual bool WantsAsyncProcessResourceData(const CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:706 */
	virtual void OnAsyncProcessResourceData(CLoadingResource* , CAsyncResourceDataRequest* );
	/* resourcesystem/loadingresource.cpp:734 */
	virtual void OnAsyncDataRequestComplete(CLoadingResource* , CAsyncResourceDataRequest* );
	/* resourcesystem/loadingresource.cpp:596 */
	bool ShouldLoadStreamingData(bool, ResourceHandle_t);
	/* resourcesystem/loadingresource.cpp:213 */
	void CLoadingResource(CLoadingResource* , ResourceHandle_t, ResourceId_t, ResourceManifestLoadPriority_t, bool, uint32);
	/* resourcesystem/loadingresource.cpp:251 */
	void ~CLoadingResource(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:456 */
	void BeginLoadingResource(CLoadingResource* , bool);
	/* resourcesystem/loadingresource.cpp:543 */
	void InitializeAsAlreadyLoaded(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:556 */
	void EnsureStreamingDataRequested(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:1135 */
	void MarkResourceNotLoadable(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:966 */
	void BeginLoadingStreamingData(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:579 */
	void HandleAdditionalLoadRequest(CLoadingResource* , ResourceManifestLoadPriority_t, bool);
	/* resourcesystem/loadingresource.cpp:685 */
	void NoteResourceDataLoaded(CLoadingResource* , CAsyncResourceDataRequest* );
	/* resourcesystem/loadingresource.cpp:754 */
	void OnResourceDataLoaded(CLoadingResource* , CAsyncResourceDataRequest* );
	/* resourcesystem/loadingresource.cpp:814 */
	bool ValidateResourceHeader(CLoadingResource* , const ResourceFileHeader_t* , uint32);
	/* resourcesystem/loadingresource.cpp:838 */
	bool RegisterResourceData(CLoadingResource* , CAsyncResourceDataRequest* );
	/* resourcesystem/loadingresource.cpp:943 */
	void OnResourceLoadFailed(CLoadingResource* );
	/* resourcesystem/loadingresource.cpp:665 */
	bool ShouldFail(const CLoadingResource* , const ResourceTypeRegistration_t* );
	/* resourcesystem/loadingresource.cpp:379 */
	void RegisterReferringResource(CLoadingResource* , CResourceManifest* , ResourceHandle_t, ResourceManifestLoadPriority_t);
	/* resourcesystem/loadingresource.cpp:428 */
	void SetExtRefDepth_R(CLoadingResource* , int);
	/* resourcesystem/loadingresource.cpp:178 */
	void EnsureExtRefStreamingData(CResourceManifest* , bool, ResourceManifestLoadPriority_t, ResourceHandle_t, ResourceHandle_t);
	ResourceId_t m_id; /* 8 8 */
	ResourceHandleWritable_t m_hResource; /* 16 8 */
	CAsyncResourceDataRequest * m_pRequest; /* 24 8 */
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > m_pAsyncProcessResult; /* 32 8 */
	ResourceManifestLoadPriority_t m_nPriority; /* 40 4 */
	CUtlHashtable<const ResourceBindingBase_t*, unsigned int, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, unsigned int>, int> > m_extrefs; /* 48 32 */
	ResourceLoadType_t m_nLoadType; /* 80 4 */
	LoadingState_t m_loadingState; /* 84 1 */
	StreamingState_t m_streamingState; /* 85 1 */
	HResourceManifest m_hAssociatedManifest; /* 88 8 */
	void * m_pOldDataToDeallocate; /* 96 8 */
	ResourceDeallocationType_t m_nOldDeallocationType; /* 104 4 */
	int m_nExtRefDepth; /* 108 4 */
	int m_nPendingResourceFileRequests; /* 112 4 */
	int m_nPendingStreamingDataRequests; /* 116 4 */
	int m_nDependencyCount; /* 120 4 */
	uint32 m_nDependencySerialNumber; /* 124 4 */
	bool m_bHasExternalWorkPending; /* 128 1 */
	bool m_bPendingData; /* 129 1 */
	bool m_bStreamingDataRequested; /* 130 1 */
	bool m_bIsComputingExtRefInfo; /* 131 1 */
	uint32 m_nFirstOriginatingManifestIndex; /* 132 4 */
	ResourceHandle_t m_hOwnerResource; /* 136 8 */
	uint64 m_asyncProcessStart; /* 144 8 */
	uint64 m_asyncProcessEnd; /* 152 8 */
	static class CUtlBlockLinkedList<CLoadingResource*, short unsigned int> sm_loadingResources; /* 0 0 */
	static LoadingResourceSerialNumber_t sm_nNextDepedencySerialNumber; /* 0 0 */
	void CLoadingResource(class CLoadingResource *, const class CLoadingResource  &); /* linkage=_ZN16CLoadingResourceC4ERKS_ */
	/* <22c51f2> resourcesystem/loadingresource.cpp:31 */
	class CLoadingResource * FindLoadingResource(ResourceHandle_t); /* linkage=_ZN16CLoadingResource19FindLoadingResourceEPK21ResourceBindingBase_t */
	/* <22c5388> resourcesystem/loadingresource.cpp:42 */
	class CLoadingResource * FindLoadingResource(ResourceHandle_t, LoadingResourceSerialNumber_t); /* linkage=_ZN16CLoadingResource19FindLoadingResourceEPK21ResourceBindingBase_tj */
	void ProcessLoadRequest(const class LoadRequest_t  &, ResourceHandle_t); /* linkage=_ZN16CLoadingResource18ProcessLoadRequestERK13LoadRequest_tPK21ResourceBindingBase_t */
	enum ResourceManifestLoadPriority_t GetPriority(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource11GetPriorityEv */
	bool IsLoadingStreamingData(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource22IsLoadingStreamingDataEv */
	bool IsCurrentlyLoading(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource18IsCurrentlyLoadingEv */
	bool IsExpectingStreamingDataRequest(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource31IsExpectingStreamingDataRequestEv */
	void RegisterStreamingAsyncResourceDataRequest(class CLoadingResource *); /* linkage=_ZN16CLoadingResource41RegisterStreamingAsyncResourceDataRequestEv */
	void RegisterAllStreamingAsyncDataRequestsComplete(class CLoadingResource *); /* linkage=_ZN16CLoadingResource45RegisterAllStreamingAsyncDataRequestsCompleteEv */
	void MarkLoadingWorkPending(class CLoadingResource *, bool); /* linkage=_ZN16CLoadingResource22MarkLoadingWorkPendingEb */
	void FinalizeLoadRequest(class CLoadingResource *, class CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> > *); /* linkage=_ZN16CLoadingResource19FinalizeLoadRequestEP10CUtlVectorI22ResourceStatusChange_t10CUtlMemoryIS1_iEE */
	void * GetOldAllocationToDelete(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource24GetOldAllocationToDeleteEv */
	enum ResourceDeallocationType_t GetOldAllocationType(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource20GetOldAllocationTypeEv */
	int GetExtRefDepth(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource14GetExtRefDepthEv */
	void RegisterPendingStreamingDataRequest(class CLoadingResource *, enum PendingRequestType_t); /* linkage=_ZN16CLoadingResource35RegisterPendingStreamingDataRequestE20PendingRequestType_t */
	void RegisterPendingResourceFileRequest(class CLoadingResource *, enum PendingRequestType_t); /* linkage=_ZN16CLoadingResource34RegisterPendingResourceFileRequestE20PendingRequestType_t */
	bool IsReadyToFinalize(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource17IsReadyToFinalizeEv */
	void AddLoadingResources(class CLoadingResource *, class LoadingResourceTable_t &); /* linkage=_ZN16CLoadingResource19AddLoadingResourcesER22LoadingResourceTable_t */
	void RegisterAssociatedManifest(class CLoadingResource *, HResourceManifest); /* linkage=_ZN16CLoadingResource26RegisterAssociatedManifestEP19HResourceManifest__ */
	void IncreasePriority(class CLoadingResource *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN16CLoadingResource16IncreasePriorityE30ResourceManifestLoadPriority_t */
	void Cancel(class CLoadingResource *); /* linkage=_ZN16CLoadingResource6CancelEv */
	class ResourceId_t GetResourceId(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource13GetResourceIdEv */
	ResourceHandle_t GetResource(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource11GetResourceEv */
	/* <22c556c> resourcesystem/loadingresource.cpp:332 */
	LoadingResourceSerialNumber_t AddDependency(class CLoadingResource *); /* linkage=_ZN16CLoadingResource13AddDependencyEv */
	/* <22c6b66> resourcesystem/loadingresource.cpp:339 */
	void RemoveDependency(class CLoadingResource *, LoadingResourceSerialNumber_t); /* linkage=_ZN16CLoadingResource16RemoveDependencyEj */
	LoadingResourceSerialNumber_t GetDependencySerialNumber(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource25GetDependencySerialNumberEv */
	int GetDependencyCount(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource18GetDependencyCountEv */
	void ReportUnfinishedState(class CLoadingResource *); /* linkage=_ZN16CLoadingResource21ReportUnfinishedStateEv */
	int GetFirstOriginatingManifestIndex(class CLoadingResource *); /* linkage=_ZN16CLoadingResource32GetFirstOriginatingManifestIndexEv */
	virtual bool WantsAsyncProcessResourceData(const class CLoadingResource  *); /* linkage=_ZNK16CLoadingResource29WantsAsyncProcessResourceDataEv */
	virtual void OnAsyncProcessResourceData(class CLoadingResource *, class CAsyncResourceDataRequest *); /* linkage=_ZN16CLoadingResource26OnAsyncProcessResourceDataEP25CAsyncResourceDataRequest */
	/* <22c5725> resourcesystem/loadingresource.cpp:734 */
	virtual void OnAsyncDataRequestComplete(class CLoadingResource *, class CAsyncResourceDataRequest *); /* linkage=_ZN16CLoadingResource26OnAsyncDataRequestCompleteEP25CAsyncResourceDataRequest */
	bool ShouldLoadStreamingData(bool, ResourceHandle_t); /* linkage=_ZN16CLoadingResource23ShouldLoadStreamingDataEbPK21ResourceBindingBase_t */
	void CLoadingResource(class CLoadingResource *, ResourceHandle_t, class ResourceId_t, enum ResourceManifestLoadPriority_t, bool, uint32); /* linkage=_ZN16CLoadingResourceC4EPK21ResourceBindingBase_t12ResourceId_t30ResourceManifestLoadPriority_tbj */
	void ~CLoadingResource(class CLoadingResource *); /* linkage=_ZN16CLoadingResourceD4Ev */
	void BeginLoadingResource(class CLoadingResource *, bool); /* linkage=_ZN16CLoadingResource20BeginLoadingResourceEb */
	void InitializeAsAlreadyLoaded(class CLoadingResource *); /* linkage=_ZN16CLoadingResource25InitializeAsAlreadyLoadedEv */
	/* <22c566d> resourcesystem/loadingresource.cpp:556 */
	void EnsureStreamingDataRequested(class CLoadingResource *); /* linkage=_ZN16CLoadingResource28EnsureStreamingDataRequestedEv */
	void MarkResourceNotLoadable(class CLoadingResource *); /* linkage=_ZN16CLoadingResource23MarkResourceNotLoadableEv */
	void BeginLoadingStreamingData(class CLoadingResource *); /* linkage=_ZN16CLoadingResource25BeginLoadingStreamingDataEv */
	void HandleAdditionalLoadRequest(class CLoadingResource *, enum ResourceManifestLoadPriority_t, bool); /* linkage=_ZN16CLoadingResource27HandleAdditionalLoadRequestE30ResourceManifestLoadPriority_tb */
	/* <22c563c> resourcesystem/loadingresource.cpp:685 */
	void NoteResourceDataLoaded(class CLoadingResource *, class CAsyncResourceDataRequest *); /* linkage=_ZN16CLoadingResource22NoteResourceDataLoadedEP25CAsyncResourceDataRequest */
	void OnResourceDataLoaded(class CLoadingResource *, class CAsyncResourceDataRequest *); /* linkage=_ZN16CLoadingResource20OnResourceDataLoadedEP25CAsyncResourceDataRequest */
	bool ValidateResourceHeader(class CLoadingResource *, const class ResourceFileHeader_t  *, uint32); /* linkage=_ZN16CLoadingResource22ValidateResourceHeaderEPK20ResourceFileHeader_tj */
	bool RegisterResourceData(class CLoadingResource *, class CAsyncResourceDataRequest *); /* linkage=_ZN16CLoadingResource20RegisterResourceDataEP25CAsyncResourceDataRequest */
	void OnResourceLoadFailed(class CLoadingResource *); /* linkage=_ZN16CLoadingResource20OnResourceLoadFailedEv */
	/* <22c5600> resourcesystem/loadingresource.cpp:665 */
	bool ShouldFail(const class CLoadingResource  *, const class ResourceTypeRegistration_t  *); /* linkage=_ZNK16CLoadingResource10ShouldFailEPK26ResourceTypeRegistration_t */
	/* <22c811a> resourcesystem/loadingresource.cpp:379 */
	void RegisterReferringResource(class CLoadingResource *, class CResourceManifest *, ResourceHandle_t, enum ResourceManifestLoadPriority_t); /* linkage=_ZN16CLoadingResource25RegisterReferringResourceEP17CResourceManifestPK21ResourceBindingBase_t30ResourceManifestLoadPriority_t */
	/* <22c55b4> resourcesystem/loadingresource.cpp:428 */
	void SetExtRefDepth_R(class CLoadingResource *, int); /* linkage=_ZN16CLoadingResource16SetExtRefDepth_REi */
	/* <22c8dcd> resourcesystem/loadingresource.cpp:178 */
	void EnsureExtRefStreamingData(class CResourceManifest *, bool, enum ResourceManifestLoadPriority_t, ResourceHandle_t, ResourceHandle_t); /* linkage=_ZN16CLoadingResource25EnsureExtRefStreamingDataEP17CResourceManifestb30ResourceManifestLoadPriority_tPK21ResourceBindingBase_tS5_ */
};

// <022C0957> resourcesystem/loadingresource.h:130
inline void CLoadingResource::GetFirstOriginatingManifestIndex()
{
} /* size: 0 */

// <02381A43> resourcesystem/loadingresource.h:217
inline void CLoadingResource::IsCurrentlyLoading()
{
} /* size: 0 */

// <02381A25> resourcesystem/loadingresource.h:222
inline void* CLoadingResource::GetOldAllocationToDelete()
{
} /* size: 0 */

// <02381A0C> resourcesystem/loadingresource.h:227
inline void CLoadingResource::GetOldAllocationType()
{
} /* size: 0 */

// <022C093E> resourcesystem/loadingresource.h:232
inline void CLoadingResource::IsExpectingStreamingDataRequest()
{
} /* size: 0 */

// <023819F3> resourcesystem/loadingresource.h:237
inline void CLoadingResource::GetExtRefDepth()
{
} /* size: 0 */

// <023F88E7> resourcesystem/loadingresource.h:243
inline void CLoadingResource::RegisterAssociatedManifest(HResourceManifest hManifest)
{
} /* size: 0 */

// <022C08B3> resourcesystem/loadingresource.h:248
// variables: 3
inline void CLoadingResource::RegisterPendingStreamingDataRequest(PendingRequestType_t requestType)
{
	const char   __FUNCTION__; // 19744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 261
	}
} /* size: 0, variables: 1 */

// <022C083F> resourcesystem/loadingresource.h:265
// variables: 3
inline void CLoadingResource::RegisterPendingResourceFileRequest(PendingRequestType_t requestType)
{
	const char   __FUNCTION__; // 19717
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 267
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
} /* size: 0, variables: 1 */

// <023F88CE> resourcesystem/loadingresource.h:282
inline void CLoadingResource::GetPriority()
{
} /* size: 0 */

// <023F88B5> resourcesystem/loadingresource.h:287
inline void CLoadingResource::IsLoadingStreamingData()
{
} /* size: 0 */

// <023F889C> resourcesystem/loadingresource.h:292
inline void CLoadingResource::GetResourceId()
{
} /* size: 0 */

// <023F8883> resourcesystem/loadingresource.h:297
inline void CLoadingResource::GetResource()
{
} /* size: 0 */

// <022C0826> resourcesystem/loadingresource.h:302
inline void CLoadingResource::GetDependencySerialNumber()
{
} /* size: 0 */

// <023F886A> resourcesystem/loadingresource.h:307
inline void CLoadingResource::GetDependencyCount()
{
} /* size: 0 */

