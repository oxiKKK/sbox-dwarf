
//
// resourcesystem/resourcemanifest.h
//
//	referenced by: libengine2.so
//
//	functions: 28
//	classes: 6
//

// <0218A0F5> resourcesystem/resourcemanifest.h:35
// member functions: 19
// member variables: 3
// class size: 696
class CManifestResourceGatherer {
	/* resourcesystem/resourcemanifest.h:49 */
	struct ResourceFenceGroup_t {
		CUtlVectorFixedGrowable<char const*, 64> m_Resources __attribute__((__aligned__(8))); /* 0 544 */
	} __attribute__((__aligned__(8)));
	/* resourcesystem/resourcemanifest.h:38 */
	void CManifestResourceGatherer(CManifestResourceGatherer* );
	/* resourcesystem/resourcemanifest.h:39 */
	void ~CManifestResourceGatherer(CManifestResourceGatherer* );
	/* resourcesystem/resourcemanifest.h:41 */
	void AddResource(CManifestResourceGatherer* , const char* );
	/* resourcesystem/resourcemanifest.h:42 */
	void InsertFence(CManifestResourceGatherer* );
	/* resourcesystem/resourcemanifest.h:44 */
	int NumGroups(const CManifestResourceGatherer* );
	/* resourcesystem/resourcemanifest.h:45 */
	const char* * GetGroupResources(CManifestResourceGatherer* , int);
	/* resourcesystem/resourcemanifest.h:46 */
	int GetGroupResourceCount(CManifestResourceGatherer* , int);
private:
	ResourceFenceGroup_t m_FirstGroup __attribute__((__aligned__(8))); /* 0 544 */
	CUtlVector<CManifestResourceGatherer::ResourceFenceGroup_t*, CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t*, int> > m_FenceGroups; /* 544 32 */
	CStableSymbolTable m_AllResources; /* 576 120 */
	/* resourcesystem/resourcemanifest.h:58 */
	ResourceFenceGroup_t* GetGroup(CManifestResourceGatherer* , int);
	/* resourcesystem/resourcemanifest.h:59 */
	ResourceFenceGroup_t* CurrentGroup(CManifestResourceGatherer* );
	void CManifestResourceGatherer(class CManifestResourceGatherer *); /* linkage=_ZN25CManifestResourceGathererC4Ev */
	void ~CManifestResourceGatherer(class CManifestResourceGatherer *); /* linkage=_ZN25CManifestResourceGathererD4Ev */
	void AddResource(class CManifestResourceGatherer *, const char  *); /* linkage=_ZN25CManifestResourceGatherer11AddResourceEPKc */
	void InsertFence(class CManifestResourceGatherer *); /* linkage=_ZN25CManifestResourceGatherer11InsertFenceEv */
	/* <23fa7e2> resourcesystem/resourcemanifest.cpp:335 */
	int NumGroups(const class CManifestResourceGatherer  *); /* linkage=_ZNK25CManifestResourceGatherer9NumGroupsEv */
	/* <23fa83c> resourcesystem/resourcemanifest.cpp:343 */
	const char  * * GetGroupResources(class CManifestResourceGatherer *, int); /* linkage=_ZN25CManifestResourceGatherer17GetGroupResourcesEi */
	/* <23fa9bd> resourcesystem/resourcemanifest.cpp:351 */
	int GetGroupResourceCount(class CManifestResourceGatherer *, int); /* linkage=_ZN25CManifestResourceGatherer21GetGroupResourceCountEi */
	/* <23fab0e> resourcesystem/resourcemanifest.cpp:359 */
	class ResourceFenceGroup_t * GetGroup(class CManifestResourceGatherer *, int); /* linkage=_ZN25CManifestResourceGatherer8GetGroupEi */
	/* <23fabe6> resourcesystem/resourcemanifest.cpp:370 */
	class ResourceFenceGroup_t * CurrentGroup(class CManifestResourceGatherer *); /* linkage=_ZN25CManifestResourceGatherer12CurrentGroupEv */
} __attribute__((__aligned__(8)));

// <023D417D> resourcesystem/resourcemanifest.h:35
// member functions: 21
// member variables: 3
// class size: 696
class CManifestResourceGatherer {
	/* resourcesystem/resourcemanifest.h:49 */
	struct ResourceFenceGroup_t {
		CUtlVectorFixedGrowable<char const*, 64> m_Resources __attribute__((__aligned__(8))); /* 0 544 */
		void ~ResourceFenceGroup_t(ResourceFenceGroup_t* );
		void ResourceFenceGroup_t(ResourceFenceGroup_t* );
	} __attribute__((__aligned__(8)));
	/* resourcesystem/resourcemanifest.h:38 */
	void CManifestResourceGatherer(CManifestResourceGatherer* );
	/* resourcesystem/resourcemanifest.h:39 */
	void ~CManifestResourceGatherer(CManifestResourceGatherer* );
	/* resourcesystem/resourcemanifest.h:41 */
	void AddResource(CManifestResourceGatherer* , const char* );
	/* resourcesystem/resourcemanifest.h:42 */
	void InsertFence(CManifestResourceGatherer* );
	/* resourcesystem/resourcemanifest.h:44 */
	int NumGroups(const CManifestResourceGatherer* );
	/* resourcesystem/resourcemanifest.h:45 */
	const char* * GetGroupResources(CManifestResourceGatherer* , int);
	/* resourcesystem/resourcemanifest.h:46 */
	int GetGroupResourceCount(CManifestResourceGatherer* , int);
private:
	ResourceFenceGroup_t m_FirstGroup __attribute__((__aligned__(8))); /* 0 544 */
	CUtlVector<CManifestResourceGatherer::ResourceFenceGroup_t*, CUtlMemory<CManifestResourceGatherer::ResourceFenceGroup_t*, int> > m_FenceGroups; /* 544 32 */
	CStableSymbolTable m_AllResources; /* 576 120 */
	/* resourcesystem/resourcemanifest.h:58 */
	ResourceFenceGroup_t* GetGroup(CManifestResourceGatherer* , int);
	/* resourcesystem/resourcemanifest.h:59 */
	ResourceFenceGroup_t* CurrentGroup(CManifestResourceGatherer* );
	void CManifestResourceGatherer(class CManifestResourceGatherer *); /* linkage=_ZN25CManifestResourceGathererC4Ev */
	void ~CManifestResourceGatherer(class CManifestResourceGatherer *); /* linkage=_ZN25CManifestResourceGathererD4Ev */
	void AddResource(class CManifestResourceGatherer *, const char  *); /* linkage=_ZN25CManifestResourceGatherer11AddResourceEPKc */
	void InsertFence(class CManifestResourceGatherer *); /* linkage=_ZN25CManifestResourceGatherer11InsertFenceEv */
	/* <23fa7e2> resourcesystem/resourcemanifest.cpp:335 */
	int NumGroups(const class CManifestResourceGatherer  *); /* linkage=_ZNK25CManifestResourceGatherer9NumGroupsEv */
	/* <23fa83c> resourcesystem/resourcemanifest.cpp:343 */
	const char  * * GetGroupResources(class CManifestResourceGatherer *, int); /* linkage=_ZN25CManifestResourceGatherer17GetGroupResourcesEi */
	/* <23fa9bd> resourcesystem/resourcemanifest.cpp:351 */
	int GetGroupResourceCount(class CManifestResourceGatherer *, int); /* linkage=_ZN25CManifestResourceGatherer21GetGroupResourceCountEi */
	/* <23fab0e> resourcesystem/resourcemanifest.cpp:359 */
	class ResourceFenceGroup_t * GetGroup(class CManifestResourceGatherer *, int); /* linkage=_ZN25CManifestResourceGatherer8GetGroupEi */
	/* <23fabe6> resourcesystem/resourcemanifest.cpp:370 */
	class ResourceFenceGroup_t * CurrentGroup(class CManifestResourceGatherer *); /* linkage=_ZN25CManifestResourceGatherer12CurrentGroupEv */
} __attribute__((__aligned__(8)));

// <0218C3F6> resourcesystem/resourcemanifest.h:38
void CManifestResourceGatherer::CManifestResourceGatherer()
{
} /* size: 0 */

// <0218C3DA> resourcesystem/resourcemanifest.h:39
void CManifestResourceGatherer::~CManifestResourceGatherer()
{
} /* size: 0 */

// <023F430E> resourcesystem/resourcemanifest.h:49
void ResourceFenceGroup_t::ResourceFenceGroup_t()
{
} /* size: 0 */

// <023F42F2> resourcesystem/resourcemanifest.h:49
inline void ResourceFenceGroup_t::ResourceFenceGroup_t()
{
} /* size: 0 */

// <023F42DB> resourcesystem/resourcemanifest.h:49
void ResourceFenceGroup_t::~ResourceFenceGroup_t()
{
} /* size: 0 */

// <023F42BF> resourcesystem/resourcemanifest.h:49
inline void ResourceFenceGroup_t::~ResourceFenceGroup_t()
{
} /* size: 0 */

// <023F87EC> resourcesystem/resourcemanifest.h:66
void CResourceManifestTypeManager::CResourceManifestTypeManager()
{
} /* size: 0 */

// <023F87D0> resourcesystem/resourcemanifest.h:66
inline void CResourceManifestTypeManager::CResourceManifestTypeManager()
{
} /* size: 0 */

// <023E4B62> resourcesystem/resourcemanifest.h:66
// function calls: 7
void CResourceManifestTypeManager::~CResourceManifestTypeManager()
{
	CUtlMemory<CResourceManifestFromDiskInternal::IsExternallyAllocated(); // 905
	CUtlMemory<CResourceManifestFromDiskInternal::Purge(); // 903
	CUtlMemory<CResourceManifestFromDiskInternal::Purge(); // 1799
	CUtlVectorBase<CResourceManifestFromDiskInternal::RemoveAll(); // 1798
	CUtlVectorBase<CResourceManifestFromDiskInternal::Purge(); // 560
	CUtlVectorBase<CResourceManifestFromDiskInternal::~CUtlVectorBase(); // 410
	CUtlVector<CResourceManifestFromDiskInternal::~CUtlVector(); // 66
} /* size: 49, inline expansions: 7 (154 bytes) */

// <023E4B46> resourcesystem/resourcemanifest.h:66
inline void CResourceManifestTypeManager::~CResourceManifestTypeManager()
{
} /* size: 0 */

// <023E0631> resourcesystem/resourcemanifest.h:66
// member functions: 24
// member variables: 2
// vtable entries: 6
// class size: 40
class CResourceManifestTypeManager : public IResourceTypeManager {
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void CResourceManifestTypeManager(CResourceManifestTypeManager* , CResourceManifestTypeManager& );
	void CResourceManifestTypeManager(CResourceManifestTypeManager* , const CResourceManifestTypeManager& );
	void CResourceManifestTypeManager(CResourceManifestTypeManager* );
	/* resourcesystem/resourcemanifest.h:70 */
	virtual bool Init(CResourceManifestTypeManager* , IResourceSystemUtils* );
	/* resourcesystem/resourcemanifest.h:71 */
	virtual void Shutdown(CResourceManifestTypeManager* );
	/* resourcesystem/resourcemanifest.h:73 */
	virtual bool NeedsFrameUpdate(const CResourceManifestTypeManager* );
	/* resourcesystem/resourcemanifest.cpp:168 */
	virtual void FrameUpdate(CResourceManifestTypeManager* , int);
	/* resourcesystem/resourcemanifest.cpp:41 */
	virtual void AllocateResource(CResourceManifestTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* resourcesystem/resourcemanifest.cpp:144 */
	virtual void DeallocateResource(CResourceManifestTypeManager* , void* , IResourceDeallocatorUtils* );
	/* resourcesystem/resourcemanifest.cpp:150 */
	void AddToLoadingList(CResourceManifestTypeManager* , CResourceManifestFromDiskInternal* , ResourceHandle_t);
	/* resourcesystem/resourcemanifest.cpp:160 */
	void RemoveFromLoadingList(CResourceManifestTypeManager* , CResourceManifestFromDiskInternal* );
private:
	CUtlVector<CResourceManifestFromDiskInternal*, CUtlMemory<CResourceManifestFromDiskInternal*, int> > m_loadingList; /* 8 32 */
	void ~CResourceManifestTypeManager(CResourceManifestTypeManager* );
	void CResourceManifestTypeManager(class CResourceManifestTypeManager *, class CResourceManifestTypeManager &); /* linkage=_ZN28CResourceManifestTypeManagerC4EOS_ */
	void CResourceManifestTypeManager(class CResourceManifestTypeManager *, const class CResourceManifestTypeManager  &); /* linkage=_ZN28CResourceManifestTypeManagerC4ERKS_ */
	void CResourceManifestTypeManager(class CResourceManifestTypeManager *); /* linkage=_ZN28CResourceManifestTypeManagerC4Ev */
	virtual bool Init(class CResourceManifestTypeManager *, class IResourceSystemUtils *); /* linkage=_ZN28CResourceManifestTypeManager4InitEP20IResourceSystemUtils */
	virtual void Shutdown(class CResourceManifestTypeManager *); /* linkage=_ZN28CResourceManifestTypeManager8ShutdownEv */
	virtual bool NeedsFrameUpdate(const class CResourceManifestTypeManager  *); /* linkage=_ZNK28CResourceManifestTypeManager16NeedsFrameUpdateEv */
	virtual void FrameUpdate(class CResourceManifestTypeManager *, int); /* linkage=_ZN28CResourceManifestTypeManager11FrameUpdateEi */
	virtual void AllocateResource(class CResourceManifestTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN28CResourceManifestTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	/* <23faee0> resourcesystem/resourcemanifest.cpp:144 */
	virtual void DeallocateResource(class CResourceManifestTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN28CResourceManifestTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	void AddToLoadingList(class CResourceManifestTypeManager *, class CResourceManifestFromDiskInternal *, ResourceHandle_t); /* linkage=_ZN28CResourceManifestTypeManager16AddToLoadingListEP33CResourceManifestFromDiskInternalPK21ResourceBindingBase_t */
	void RemoveFromLoadingList(class CResourceManifestTypeManager *, class CResourceManifestFromDiskInternal *); /* linkage=_ZN28CResourceManifestTypeManager21RemoveFromLoadingListEP33CResourceManifestFromDiskInternal */
	void ~CResourceManifestTypeManager(class CResourceManifestTypeManager *); /* linkage=_ZN28CResourceManifestTypeManagerD4Ev */
};

// <023F8B1B> resourcesystem/resourcemanifest.h:70
void CResourceManifestTypeManager::Init(IResourceSystemUtils* pUtils)
{
} /* size: 10 */

// <023F8AED> resourcesystem/resourcemanifest.h:71
void CResourceManifestTypeManager::Shutdown()
{
} /* size: 5 */

// <023F8ABF> resourcesystem/resourcemanifest.h:73
void CResourceManifestTypeManager::NeedsFrameUpdate()
{
} /* size: 10 */

// <023F8689> resourcesystem/resourcemanifest.h:90
void CResourceManifestFromDiskInternal::CResourceManifestFromDiskInternal()
{
} /* size: 0 */

// <023F866D> resourcesystem/resourcemanifest.h:90
inline void CResourceManifestFromDiskInternal::CResourceManifestFromDiskInternal()
{
} /* size: 0 */

// <023D61B8> resourcesystem/resourcemanifest.h:90
// member functions: 4
// member variables: 3
// class size: 48
class CResourceManifestFromDiskInternal {
	/* resourcesystem/resourcemanifest.h:93 */
	void ~CResourceManifestFromDiskInternal(CResourceManifestFromDiskInternal* );
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> > m_Handles; /* 0 32 */
	HResourceManifest m_hAssociatedManifest; /* 32 8 */
	ResourceHandle_t m_hLoadingResource; /* 40 8 */
	void CResourceManifestFromDiskInternal(CResourceManifestFromDiskInternal* );
	void ~CResourceManifestFromDiskInternal(class CResourceManifestFromDiskInternal *); /* linkage=_ZN33CResourceManifestFromDiskInternalD4Ev */
	void CResourceManifestFromDiskInternal(class CResourceManifestFromDiskInternal *); /* linkage=_ZN33CResourceManifestFromDiskInternalC4Ev */
};

// <02249DBB> resourcesystem/resourcemanifest.h:107
// member functions: 80
// member variables: 12
// static member variables: 2
// class size: 112
class CResourceManifest {
	/* resourcesystem/resourcemanifest.h:164 */
	struct LoadingResourceReference_t {
		ResourceHandle_t m_hResource; /* 0 8 */
		LoadingResourceSerialNumber_t m_nSerialNumber; /* 8 4 */
		/* resourcesystem/resourcemanifest.h:169 */
		bool operator==(const LoadingResourceReference_t* , const LoadingResourceReference_t& );
		/* resourcesystem/resourcemanifest.h:173 */
		bool operator<(const LoadingResourceReference_t* , const LoadingResourceReference_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* resourcesystem/resourcemanifest.h:180 */
	struct LoadingInfo_t {
		ResourceManifestType_t m_nType; /* 0 4 */
		ResourceManifestLoadPriority_t m_nPriority; /* 4 4 */
		ResourceManifestLoadCompletionCallback_t m_completionCallback; /* 8 8 */
		void * m_pContext; /* 16 8 */
		uint32 m_nGetStateQueryCount; /* 24 4 */
		LoadingResourceManifestIndex_t m_nLoadingIndex; /* 28 2 */
		CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>, CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, int> > > m_vecLoadingRootResources; /* 32 48 */
		bool m_bLoadStreamingData; /* 80 1 */
	};
	/* resourcesystem/resourcemanifest.h:110 */
	void CResourceManifest(CResourceManifest* , ResourceManifestType_t, ResourceManifestLoadPriority_t, bool, const char* );
	/* resourcesystem/resourcemanifest.h:111 */
	void ~CResourceManifest(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:113 */
	void Initialize(CResourceManifest* , int, const char** );
	/* resourcesystem/resourcemanifest.h:115 */
	CResourceManifest* CreateFenceManifest(CResourceManifest* , int, const char** );
	/* resourcesystem/resourcemanifest.h:117 */
	void SetPriority(CResourceManifest* , ResourceManifestLoadPriority_t);
	/* resourcesystem/resourcemanifest.h:119 */
	ResourceManifestType_t GetType(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:120 */
	ResourceManifestLoadPriority_t GetPriority(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:121 */
	LoadingResourceManifestIndex_t GetLoadingIndex(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:122 */
	const char* GetDebugName(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:123 */
	void SetCompletionCallback(CResourceManifest* , ResourceManifestLoadCompletionCallback_t, void* );
	/* resourcesystem/resourcemanifest.h:124 */
	void InvokeCompletionCallback(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:125 */
	bool IsLoadingStreamingData(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:126 */
	bool IsLoaded(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:127 */
	void MarkLoaded(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:128 */
	void StartLoading(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:129 */
	bool HasStartedLoading(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:130 */
	void FinalizeAfterLoading(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:131 */
	bool IsFinalized(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:132 */
	bool IsMarkedForDeletion(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:133 */
	void MarkForDeletion(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:134 */
	bool IsInLoadQueue(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:135 */
	void MarkInLoadQueue(CResourceManifest* , bool);
	/* resourcesystem/resourcemanifest.h:137 */
	void IncreasePriority(CResourceManifest* , ResourceManifestLoadPriority_t);
	/* resourcesystem/resourcemanifest.h:139 */
	bool IsInInitialGroup(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:140 */
	ManifestAdvanceResult_t AdvanceToNextFenceManifest(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:142 */
	int GetRootResourceCount(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:143 */
	ResourceHandle_t GetRootResource(const CResourceManifest* , int);
	/* resourcesystem/resourcemanifest.h:144 */
	bool IsRootResource(const CResourceManifest* , ResourceHandle_t);
	/* resourcesystem/resourcemanifest.h:146 */
	uint32 GetManifestIndex(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:147 */
	ActiveManifestState_t GetState(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:149 */
	const CResourceManifest* GetNextFenceManifest(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:151 */
	void RegisterLoadingResource(CResourceManifest* , CLoadingResource* );
	/* resourcesystem/resourcemanifest.h:152 */
	int GetLoadingResourceCount(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:153 */
	CLoadingResource* GetLoadingResource(const CResourceManifest* , int);
	/* resourcesystem/resourcemanifest.h:155 */
	void ReportUnfinishedState(CResourceManifest* );
private:
	/* resourcesystem/resourcemanifest.h:158 */
	ActiveManifestState_t GetStateInternal(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:159 */
	void InitializeInternal(CResourceManifest* , int, const char** );
	/* resourcesystem/resourcemanifest.h:160 */
	void AddManifestRootEntry(CResourceManifest* , CManifestResourceGatherer* , const char* );
	/* resourcesystem/resourcemanifest.h:161 */
	void CleanupLoadingData(CResourceManifest* );
	LoadingInfo_t * m_pLoadingInfo; /* 0 8 */
	CUtlString m_debugName; /* 8 8 */
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> > m_rootResources; /* 16 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_CodeManifests; /* 48 32 */
	uint32 m_nManifestIndex; /* 80 4 */
	bool m_bLoaded; /* 84 1 */
	bool m_bMarkedForDeletion; /* 85 1 */
	bool m_bInLoadQueue; /* 86 1 */
	bool m_bAdvancedToNextFenceManifest; /* 87 1 */
	CAsyncCallStackTracker * m_pStreamTracker; /* 88 8 */
	CResourceManifest * m_pNextFenceManifest; /* 96 8 */
	int m_nFenceGroupIndex; /* 104 4 */
	static int s_nManifestCreationIndex; /* 0 0 */
	static uint32 sm_GetStateQueryCount; /* 0 0 */
	void CResourceManifest(class CResourceManifest *, enum ResourceManifestType_t, enum ResourceManifestLoadPriority_t, bool, const char  *); /* linkage=_ZN17CResourceManifestC4E22ResourceManifestType_t30ResourceManifestLoadPriority_tbPKc */
	void ~CResourceManifest(class CResourceManifest *); /* linkage=_ZN17CResourceManifestD4Ev */
	void Initialize(class CResourceManifest *, int, const char  * *); /* linkage=_ZN17CResourceManifest10InitializeEiPPKc */
	class CResourceManifest * CreateFenceManifest(class CResourceManifest *, int, const char  * *); /* linkage=_ZN17CResourceManifest19CreateFenceManifestEiPPKc */
	void SetPriority(class CResourceManifest *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN17CResourceManifest11SetPriorityE30ResourceManifestLoadPriority_t */
	enum ResourceManifestType_t GetType(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest7GetTypeEv */
	enum ResourceManifestLoadPriority_t GetPriority(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest11GetPriorityEv */
	LoadingResourceManifestIndex_t GetLoadingIndex(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest15GetLoadingIndexEv */
	/* <23facc4> resourcesystem/resourcemanifest.cpp:539 */
	const char  * GetDebugName(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest12GetDebugNameEv */
	void SetCompletionCallback(class CResourceManifest *, ResourceManifestLoadCompletionCallback_t, void *); /* linkage=_ZN17CResourceManifest21SetCompletionCallbackEPFvP19HResourceManifest__PvES2_ */
	void InvokeCompletionCallback(class CResourceManifest *); /* linkage=_ZN17CResourceManifest24InvokeCompletionCallbackEv */
	/* <23fad1e> resourcesystem/resourcemanifest.cpp:571 */
	bool IsLoadingStreamingData(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest22IsLoadingStreamingDataEv */
	bool IsLoaded(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest8IsLoadedEv */
	void MarkLoaded(class CResourceManifest *); /* linkage=_ZN17CResourceManifest10MarkLoadedEv */
	void StartLoading(class CResourceManifest *); /* linkage=_ZN17CResourceManifest12StartLoadingEv */
	/* <23fac9b> resourcesystem/resourcemanifest.cpp:521 */
	bool HasStartedLoading(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest17HasStartedLoadingEv */
	void FinalizeAfterLoading(class CResourceManifest *); /* linkage=_ZN17CResourceManifest20FinalizeAfterLoadingEv */
	bool IsFinalized(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest11IsFinalizedEv */
	bool IsMarkedForDeletion(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest19IsMarkedForDeletionEv */
	void MarkForDeletion(class CResourceManifest *); /* linkage=_ZN17CResourceManifest15MarkForDeletionEv */
	bool IsInLoadQueue(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest13IsInLoadQueueEv */
	void MarkInLoadQueue(class CResourceManifest *, bool); /* linkage=_ZN17CResourceManifest15MarkInLoadQueueEb */
	void IncreasePriority(class CResourceManifest *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN17CResourceManifest16IncreasePriorityE30ResourceManifestLoadPriority_t */
	bool IsInInitialGroup(class CResourceManifest *); /* linkage=_ZN17CResourceManifest16IsInInitialGroupEv */
	enum ManifestAdvanceResult_t AdvanceToNextFenceManifest(class CResourceManifest *); /* linkage=_ZN17CResourceManifest26AdvanceToNextFenceManifestEv */
	int GetRootResourceCount(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest20GetRootResourceCountEv */
	ResourceHandle_t GetRootResource(const class CResourceManifest  *, int); /* linkage=_ZNK17CResourceManifest15GetRootResourceEi */
	bool IsRootResource(const class CResourceManifest  *, ResourceHandle_t); /* linkage=_ZNK17CResourceManifest14IsRootResourceEPK21ResourceBindingBase_t */
	uint32 GetManifestIndex(class CResourceManifest *); /* linkage=_ZN17CResourceManifest16GetManifestIndexEv */
	/* <23fae81> resourcesystem/resourcemanifest.cpp:784 */
	enum ActiveManifestState_t GetState(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest8GetStateEv */
	const class CResourceManifest  * GetNextFenceManifest(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest20GetNextFenceManifestEv */
	void RegisterLoadingResource(class CResourceManifest *, class CLoadingResource *); /* linkage=_ZN17CResourceManifest23RegisterLoadingResourceEP16CLoadingResource */
	/* <23fad47> resourcesystem/resourcemanifest.cpp:642 */
	int GetLoadingResourceCount(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest23GetLoadingResourceCountEv */
	/* <23fada1> resourcesystem/resourcemanifest.cpp:647 */
	class CLoadingResource * GetLoadingResource(const class CResourceManifest  *, int); /* linkage=_ZNK17CResourceManifest18GetLoadingResourceEi */
	void ReportUnfinishedState(class CResourceManifest *); /* linkage=_ZN17CResourceManifest21ReportUnfinishedStateEv */
	enum ActiveManifestState_t GetStateInternal(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest16GetStateInternalEv */
	void InitializeInternal(class CResourceManifest *, int, const char  * *); /* linkage=_ZN17CResourceManifest18InitializeInternalEiPPKc */
	void AddManifestRootEntry(class CResourceManifest *, class CManifestResourceGatherer *, const char  *); /* linkage=_ZN17CResourceManifest20AddManifestRootEntryEP25CManifestResourceGathererPKc */
	void CleanupLoadingData(class CResourceManifest *); /* linkage=_ZN17CResourceManifest18CleanupLoadingDataEv */
};

// <023CDD0A> resourcesystem/resourcemanifest.h:107
// member functions: 82
// member variables: 12
// static member variables: 2
// class size: 112
class CResourceManifest {
	/* resourcesystem/resourcemanifest.h:164 */
	struct LoadingResourceReference_t {
		ResourceHandle_t m_hResource; /* 0 8 */
		LoadingResourceSerialNumber_t m_nSerialNumber; /* 8 4 */
		/* resourcesystem/resourcemanifest.h:169 */
		bool operator==(const LoadingResourceReference_t* , const LoadingResourceReference_t& );
		/* resourcesystem/resourcemanifest.h:173 */
		bool operator<(const LoadingResourceReference_t* , const LoadingResourceReference_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* resourcesystem/resourcemanifest.h:180 */
	struct LoadingInfo_t {
		ResourceManifestType_t m_nType; /* 0 4 */
		ResourceManifestLoadPriority_t m_nPriority; /* 4 4 */
		ResourceManifestLoadCompletionCallback_t m_completionCallback; /* 8 8 */
		void * m_pContext; /* 16 8 */
		uint32 m_nGetStateQueryCount; /* 24 4 */
		LoadingResourceManifestIndex_t m_nLoadingIndex; /* 28 2 */
		CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>, CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, int> > > m_vecLoadingRootResources; /* 32 48 */
		bool m_bLoadStreamingData; /* 80 1 */
		void ~LoadingInfo_t(LoadingInfo_t* );
		void LoadingInfo_t(LoadingInfo_t* );
	};
	/* resourcesystem/resourcemanifest.h:110 */
	void CResourceManifest(CResourceManifest* , ResourceManifestType_t, ResourceManifestLoadPriority_t, bool, const char* );
	/* resourcesystem/resourcemanifest.h:111 */
	void ~CResourceManifest(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:113 */
	void Initialize(CResourceManifest* , int, const char** );
	/* resourcesystem/resourcemanifest.h:115 */
	CResourceManifest* CreateFenceManifest(CResourceManifest* , int, const char** );
	/* resourcesystem/resourcemanifest.h:117 */
	void SetPriority(CResourceManifest* , ResourceManifestLoadPriority_t);
	/* resourcesystem/resourcemanifest.h:119 */
	ResourceManifestType_t GetType(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:120 */
	ResourceManifestLoadPriority_t GetPriority(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:121 */
	LoadingResourceManifestIndex_t GetLoadingIndex(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:122 */
	const char* GetDebugName(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:123 */
	void SetCompletionCallback(CResourceManifest* , ResourceManifestLoadCompletionCallback_t, void* );
	/* resourcesystem/resourcemanifest.h:124 */
	void InvokeCompletionCallback(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:125 */
	bool IsLoadingStreamingData(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:126 */
	bool IsLoaded(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:127 */
	void MarkLoaded(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:128 */
	void StartLoading(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:129 */
	bool HasStartedLoading(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:130 */
	void FinalizeAfterLoading(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:131 */
	bool IsFinalized(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:132 */
	bool IsMarkedForDeletion(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:133 */
	void MarkForDeletion(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:134 */
	bool IsInLoadQueue(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:135 */
	void MarkInLoadQueue(CResourceManifest* , bool);
	/* resourcesystem/resourcemanifest.h:137 */
	void IncreasePriority(CResourceManifest* , ResourceManifestLoadPriority_t);
	/* resourcesystem/resourcemanifest.h:139 */
	bool IsInInitialGroup(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:140 */
	ManifestAdvanceResult_t AdvanceToNextFenceManifest(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:142 */
	int GetRootResourceCount(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:143 */
	ResourceHandle_t GetRootResource(const CResourceManifest* , int);
	/* resourcesystem/resourcemanifest.h:144 */
	bool IsRootResource(const CResourceManifest* , ResourceHandle_t);
	/* resourcesystem/resourcemanifest.h:146 */
	uint32 GetManifestIndex(CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:147 */
	ActiveManifestState_t GetState(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:149 */
	const CResourceManifest* GetNextFenceManifest(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:151 */
	void RegisterLoadingResource(CResourceManifest* , CLoadingResource* );
	/* resourcesystem/resourcemanifest.h:152 */
	int GetLoadingResourceCount(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:153 */
	CLoadingResource* GetLoadingResource(const CResourceManifest* , int);
	/* resourcesystem/resourcemanifest.h:155 */
	void ReportUnfinishedState(CResourceManifest* );
private:
	/* resourcesystem/resourcemanifest.h:158 */
	ActiveManifestState_t GetStateInternal(const CResourceManifest* );
	/* resourcesystem/resourcemanifest.h:159 */
	void InitializeInternal(CResourceManifest* , int, const char** );
	/* resourcesystem/resourcemanifest.h:160 */
	void AddManifestRootEntry(CResourceManifest* , CManifestResourceGatherer* , const char* );
	/* resourcesystem/resourcemanifest.h:161 */
	void CleanupLoadingData(CResourceManifest* );
	LoadingInfo_t * m_pLoadingInfo; /* 0 8 */
	CUtlString m_debugName; /* 8 8 */
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> > m_rootResources; /* 16 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_CodeManifests; /* 48 32 */
	uint32 m_nManifestIndex; /* 80 4 */
	bool m_bLoaded; /* 84 1 */
	bool m_bMarkedForDeletion; /* 85 1 */
	bool m_bInLoadQueue; /* 86 1 */
	bool m_bAdvancedToNextFenceManifest; /* 87 1 */
	CAsyncCallStackTracker * m_pStreamTracker; /* 88 8 */
	CResourceManifest * m_pNextFenceManifest; /* 96 8 */
	int m_nFenceGroupIndex; /* 104 4 */
	static int s_nManifestCreationIndex; /* 0 0 */
	static uint32 sm_GetStateQueryCount; /* 0 0 */
	void CResourceManifest(class CResourceManifest *, enum ResourceManifestType_t, enum ResourceManifestLoadPriority_t, bool, const char  *); /* linkage=_ZN17CResourceManifestC4E22ResourceManifestType_t30ResourceManifestLoadPriority_tbPKc */
	void ~CResourceManifest(class CResourceManifest *); /* linkage=_ZN17CResourceManifestD4Ev */
	void Initialize(class CResourceManifest *, int, const char  * *); /* linkage=_ZN17CResourceManifest10InitializeEiPPKc */
	class CResourceManifest * CreateFenceManifest(class CResourceManifest *, int, const char  * *); /* linkage=_ZN17CResourceManifest19CreateFenceManifestEiPPKc */
	void SetPriority(class CResourceManifest *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN17CResourceManifest11SetPriorityE30ResourceManifestLoadPriority_t */
	enum ResourceManifestType_t GetType(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest7GetTypeEv */
	enum ResourceManifestLoadPriority_t GetPriority(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest11GetPriorityEv */
	LoadingResourceManifestIndex_t GetLoadingIndex(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest15GetLoadingIndexEv */
	/* <23facc4> resourcesystem/resourcemanifest.cpp:539 */
	const char  * GetDebugName(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest12GetDebugNameEv */
	void SetCompletionCallback(class CResourceManifest *, ResourceManifestLoadCompletionCallback_t, void *); /* linkage=_ZN17CResourceManifest21SetCompletionCallbackEPFvP19HResourceManifest__PvES2_ */
	void InvokeCompletionCallback(class CResourceManifest *); /* linkage=_ZN17CResourceManifest24InvokeCompletionCallbackEv */
	/* <23fad1e> resourcesystem/resourcemanifest.cpp:571 */
	bool IsLoadingStreamingData(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest22IsLoadingStreamingDataEv */
	bool IsLoaded(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest8IsLoadedEv */
	void MarkLoaded(class CResourceManifest *); /* linkage=_ZN17CResourceManifest10MarkLoadedEv */
	void StartLoading(class CResourceManifest *); /* linkage=_ZN17CResourceManifest12StartLoadingEv */
	/* <23fac9b> resourcesystem/resourcemanifest.cpp:521 */
	bool HasStartedLoading(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest17HasStartedLoadingEv */
	void FinalizeAfterLoading(class CResourceManifest *); /* linkage=_ZN17CResourceManifest20FinalizeAfterLoadingEv */
	bool IsFinalized(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest11IsFinalizedEv */
	bool IsMarkedForDeletion(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest19IsMarkedForDeletionEv */
	void MarkForDeletion(class CResourceManifest *); /* linkage=_ZN17CResourceManifest15MarkForDeletionEv */
	bool IsInLoadQueue(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest13IsInLoadQueueEv */
	void MarkInLoadQueue(class CResourceManifest *, bool); /* linkage=_ZN17CResourceManifest15MarkInLoadQueueEb */
	void IncreasePriority(class CResourceManifest *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN17CResourceManifest16IncreasePriorityE30ResourceManifestLoadPriority_t */
	bool IsInInitialGroup(class CResourceManifest *); /* linkage=_ZN17CResourceManifest16IsInInitialGroupEv */
	enum ManifestAdvanceResult_t AdvanceToNextFenceManifest(class CResourceManifest *); /* linkage=_ZN17CResourceManifest26AdvanceToNextFenceManifestEv */
	int GetRootResourceCount(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest20GetRootResourceCountEv */
	ResourceHandle_t GetRootResource(const class CResourceManifest  *, int); /* linkage=_ZNK17CResourceManifest15GetRootResourceEi */
	bool IsRootResource(const class CResourceManifest  *, ResourceHandle_t); /* linkage=_ZNK17CResourceManifest14IsRootResourceEPK21ResourceBindingBase_t */
	uint32 GetManifestIndex(class CResourceManifest *); /* linkage=_ZN17CResourceManifest16GetManifestIndexEv */
	/* <23fae81> resourcesystem/resourcemanifest.cpp:784 */
	enum ActiveManifestState_t GetState(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest8GetStateEv */
	const class CResourceManifest  * GetNextFenceManifest(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest20GetNextFenceManifestEv */
	void RegisterLoadingResource(class CResourceManifest *, class CLoadingResource *); /* linkage=_ZN17CResourceManifest23RegisterLoadingResourceEP16CLoadingResource */
	/* <23fad47> resourcesystem/resourcemanifest.cpp:642 */
	int GetLoadingResourceCount(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest23GetLoadingResourceCountEv */
	/* <23fada1> resourcesystem/resourcemanifest.cpp:647 */
	class CLoadingResource * GetLoadingResource(const class CResourceManifest  *, int); /* linkage=_ZNK17CResourceManifest18GetLoadingResourceEi */
	void ReportUnfinishedState(class CResourceManifest *); /* linkage=_ZN17CResourceManifest21ReportUnfinishedStateEv */
	enum ActiveManifestState_t GetStateInternal(const class CResourceManifest  *); /* linkage=_ZNK17CResourceManifest16GetStateInternalEv */
	void InitializeInternal(class CResourceManifest *, int, const char  * *); /* linkage=_ZN17CResourceManifest18InitializeInternalEiPPKc */
	void AddManifestRootEntry(class CResourceManifest *, class CManifestResourceGatherer *, const char  *); /* linkage=_ZN17CResourceManifest20AddManifestRootEntryEP25CManifestResourceGathererPKc */
	void CleanupLoadingData(class CResourceManifest *); /* linkage=_ZN17CResourceManifest18CleanupLoadingDataEv */
};

// <02345ABC> resourcesystem/resourcemanifest.h:110
void CResourceManifest::CResourceManifest(ResourceManifestType_t nType, ResourceManifestLoadPriority_t nPriority, bool bLoadStreamingData, const char* pDebugName)
{
} /* size: 0 */

// <02345B18> resourcesystem/resourcemanifest.h:111
void CResourceManifest::~CResourceManifest()
{
} /* size: 0 */

// <023F8A9A> resourcesystem/resourcemanifest.h:173
inline void LoadingResourceReference_t::operator<(const LoadingResourceReference_t& other)
{
} /* size: 0 */

// <023F57ED> resourcesystem/resourcemanifest.h:180
void LoadingInfo_t::LoadingInfo_t()
{
} /* size: 0 */

// <023F57D1> resourcesystem/resourcemanifest.h:180
inline void LoadingInfo_t::LoadingInfo_t()
{
} /* size: 0 */

// <023ECB81> resourcesystem/resourcemanifest.h:180
void LoadingInfo_t::~LoadingInfo_t()
{
} /* size: 0 */

// <023ECB65> resourcesystem/resourcemanifest.h:180
inline void LoadingInfo_t::~LoadingInfo_t()
{
} /* size: 0 */

// <023F8A55> resourcesystem/resourcemanifest.h:221
// variables: 2
inline void CResourceManifest::GetPriority()
{
	const char   __FUNCTION__; // 59063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 223
	}
} /* size: 0, variables: 1 */

// <02381CBF> resourcesystem/resourcemanifest.h:221
// variables: 2
inline void CResourceManifest::GetPriority()
{
	const char   __FUNCTION__; // 58483
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 223
	}
} /* size: 0, variables: 1 */

// <02381C7A> resourcesystem/resourcemanifest.h:227
// variables: 2
inline void CResourceManifest::GetType()
{
	const char   __FUNCTION__; // 58375
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 229
	}
} /* size: 0, variables: 1 */

// <02381C5E> resourcesystem/resourcemanifest.h:233
inline void CResourceManifest::GetRootResourceCount()
{
} /* size: 0 */

// <02381C36> resourcesystem/resourcemanifest.h:238
inline void CResourceManifest::GetRootResource(int nIndex)
{
} /* size: 0 */

// <02381C1A> resourcesystem/resourcemanifest.h:243
inline void CResourceManifest::IsFinalized()
{
} /* size: 0 */

