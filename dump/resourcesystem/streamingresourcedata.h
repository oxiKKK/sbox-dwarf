
//
// resourcesystem/streamingresourcedata.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <022D8249> resourcesystem/streamingresourcedata.h:20
// member functions: 26
// member variables: 6
// static member variable: 1
// vtable entries: 2
// class size: 64
class CStreamingResourceData : public IAsyncResourceDataRequestOwner {
public:
	/* class IAsyncResourceDataRequestOwner <ancestor>; */ /* 0 8 */
	void CStreamingResourceData(CStreamingResourceData* , const CStreamingResourceData& );
	/* resourcesystem/streamingresourcedata.cpp:27 */
	CStreamingResourceData* FindStreamingResourceData(ResourceHandle_t);
	/* resourcesystem/streamingresourcedata.cpp:42 */
	IAsyncResourceDataRequest* CreateAsyncResourceDataRequest(ResourceHandle_t, int64, size_t, const char* );
	/* resourcesystem/streamingresourcedata.cpp:129 */
	void IncreasePriority(CStreamingResourceData* , ResourceManifestLoadPriority_t);
	/* resourcesystem/streamingresourcedata.h:60 */
	ResourceManifestLoadPriority_t GetPriority(const CStreamingResourceData* );
	/* resourcesystem/streamingresourcedata.h:65 */
	ResourceId_t GetResourceId(const CStreamingResourceData* );
	/* resourcesystem/streamingresourcedata.h:70 */
	ResourceHandle_t GetResource(const CStreamingResourceData* );
	/* resourcesystem/streamingresourcedata.cpp:119 */
	void Cancel(CStreamingResourceData* );
	/* resourcesystem/streamingresourcedata.cpp:180 */
	virtual void OnAsyncProcessResourceData(CStreamingResourceData* , CAsyncResourceDataRequest* );
	/* resourcesystem/streamingresourcedata.cpp:185 */
	virtual void OnAsyncDataRequestComplete(CStreamingResourceData* , CAsyncResourceDataRequest* );
private:
	/* resourcesystem/streamingresourcedata.cpp:58 */
	void CStreamingResourceData(CStreamingResourceData* , ResourceHandle_t);
	/* resourcesystem/streamingresourcedata.cpp:77 */
	void ~CStreamingResourceData(CStreamingResourceData* );
	/* resourcesystem/streamingresourcedata.cpp:148 */
	IAsyncResourceDataRequest* CreateAsyncResourceDataRequestInternal(CStreamingResourceData* , int64, size_t, const char* );
	ResourceId_t m_id; /* 8 8 */
	ResourceHandleWritable_t m_hResource; /* 16 8 */
	CUtlVector<CAsyncResourceDataRequest*, CUtlMemory<CAsyncResourceDataRequest*, int> > m_externalRequests; /* 24 32 */
	ResourceManifestLoadPriority_t m_nPriority; /* 56 4 */
	bool m_bDeallocating; /* 60 1 */
	static class CUtlBlockLinkedList<CStreamingResourceData*, short unsigned int> sm_streamingResources; /* 0 0 */
	void CStreamingResourceData(class CStreamingResourceData *, const class CStreamingResourceData  &); /* linkage=_ZN22CStreamingResourceDataC4ERKS_ */
	/* <22df91d> resourcesystem/streamingresourcedata.cpp:27 */
	class CStreamingResourceData * FindStreamingResourceData(ResourceHandle_t); /* linkage=_ZN22CStreamingResourceData25FindStreamingResourceDataEPK21ResourceBindingBase_t */
	class IAsyncResourceDataRequest * CreateAsyncResourceDataRequest(ResourceHandle_t, int64, size_t, const char  *); /* linkage=_ZN22CStreamingResourceData30CreateAsyncResourceDataRequestEPK21ResourceBindingBase_txmPKc */
	/* <22dfab3> resourcesystem/streamingresourcedata.cpp:129 */
	void IncreasePriority(class CStreamingResourceData *, enum ResourceManifestLoadPriority_t); /* linkage=_ZN22CStreamingResourceData16IncreasePriorityE30ResourceManifestLoadPriority_t */
	enum ResourceManifestLoadPriority_t GetPriority(const class CStreamingResourceData  *); /* linkage=_ZNK22CStreamingResourceData11GetPriorityEv */
	class ResourceId_t GetResourceId(const class CStreamingResourceData  *); /* linkage=_ZNK22CStreamingResourceData13GetResourceIdEv */
	ResourceHandle_t GetResource(const class CStreamingResourceData  *); /* linkage=_ZNK22CStreamingResourceData11GetResourceEv */
	void Cancel(class CStreamingResourceData *); /* linkage=_ZN22CStreamingResourceData6CancelEv */
	virtual void OnAsyncProcessResourceData(class CStreamingResourceData *, class CAsyncResourceDataRequest *); /* linkage=_ZN22CStreamingResourceData26OnAsyncProcessResourceDataEP25CAsyncResourceDataRequest */
	virtual void OnAsyncDataRequestComplete(class CStreamingResourceData *, class CAsyncResourceDataRequest *); /* linkage=_ZN22CStreamingResourceData26OnAsyncDataRequestCompleteEP25CAsyncResourceDataRequest */
	void CStreamingResourceData(class CStreamingResourceData *, ResourceHandle_t); /* linkage=_ZN22CStreamingResourceDataC4EPK21ResourceBindingBase_t */
	void ~CStreamingResourceData(class CStreamingResourceData *); /* linkage=_ZN22CStreamingResourceDataD4Ev */
	class IAsyncResourceDataRequest * CreateAsyncResourceDataRequestInternal(class CStreamingResourceData *, int64, size_t, const char  *); /* linkage=_ZN22CStreamingResourceData38CreateAsyncResourceDataRequestInternalExmPKc */
};

