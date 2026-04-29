
//
// resourcesystem/resourcesystem.cpp
//
//	referenced by: libengine2.so
//
//	functions: 202
//	classes: 2
//	structs: 3
//

// <0238168A> resourcesystem/resourcesystem.cpp:43
void CNullTypeManager::CNullTypeManager()
{
} /* size: 0 */

// <0238166E> resourcesystem/resourcesystem.cpp:43
inline void CNullTypeManager::CNullTypeManager()
{
} /* size: 0 */

// <02334227> resourcesystem/resourcesystem.cpp:43
// member functions: 24
// member variable: 1
// vtable entries: 8
// class size: 8
class CNullTypeManager : public IResourceTypeManager {
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void ~CNullTypeManager(CNullTypeManager* );
	void CNullTypeManager(CNullTypeManager* , CNullTypeManager& );
	void CNullTypeManager(CNullTypeManager* , const CNullTypeManager& );
	void CNullTypeManager(CNullTypeManager* );
private:
	/* resourcesystem/resourcesystem.cpp:45 */
	virtual bool Init(CNullTypeManager* , IResourceSystemUtils* );
	/* resourcesystem/resourcesystem.cpp:46 */
	virtual void Shutdown(CNullTypeManager* );
	/* resourcesystem/resourcesystem.cpp:47 */
	virtual bool NeedsFrameUpdate(const CNullTypeManager* );
	/* resourcesystem/resourcesystem.cpp:48 */
	virtual void FrameUpdate(CNullTypeManager* , int);
	/* resourcesystem/resourcesystem.cpp:49 */
	virtual void AllocateResource(CNullTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* resourcesystem/resourcesystem.cpp:50 */
	virtual void FinalizeResource(CNullTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* resourcesystem/resourcesystem.cpp:51 */
	virtual void DeallocateResource(CNullTypeManager* , void* , IResourceDeallocatorUtils* );
	/* resourcesystem/resourcesystem.cpp:52 */
	virtual bool UsesData(const CNullTypeManager* );
	void ~CNullTypeManager(class CNullTypeManager *); /* linkage=_ZN16CNullTypeManagerD4Ev */
	void CNullTypeManager(class CNullTypeManager *, class CNullTypeManager &); /* linkage=_ZN16CNullTypeManagerC4EOS_ */
	void CNullTypeManager(class CNullTypeManager *, const class CNullTypeManager  &); /* linkage=_ZN16CNullTypeManagerC4ERKS_ */
	void CNullTypeManager(class CNullTypeManager *); /* linkage=_ZN16CNullTypeManagerC4Ev */
	virtual bool Init(class CNullTypeManager *, class IResourceSystemUtils *); /* linkage=_ZN16CNullTypeManager4InitEP20IResourceSystemUtils */
	virtual void Shutdown(class CNullTypeManager *); /* linkage=_ZN16CNullTypeManager8ShutdownEv */
	virtual bool NeedsFrameUpdate(const class CNullTypeManager  *); /* linkage=_ZNK16CNullTypeManager16NeedsFrameUpdateEv */
	virtual void FrameUpdate(class CNullTypeManager *, int); /* linkage=_ZN16CNullTypeManager11FrameUpdateEi */
	virtual void AllocateResource(class CNullTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN16CNullTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void FinalizeResource(class CNullTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN16CNullTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	virtual void DeallocateResource(class CNullTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN16CNullTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual bool UsesData(const class CNullTypeManager  *); /* linkage=_ZNK16CNullTypeManager8UsesDataEv */
};

// <02381905> resourcesystem/resourcesystem.cpp:45
void CNullTypeManager::Init(IResourceSystemUtils* pUtils)
{
} /* size: 10 */

// <023818D7> resourcesystem/resourcesystem.cpp:46
void CNullTypeManager::Shutdown()
{
} /* size: 5 */

// <023818A9> resourcesystem/resourcesystem.cpp:47
void CNullTypeManager::NeedsFrameUpdate()
{
} /* size: 7 */

// <0238186C> resourcesystem/resourcesystem.cpp:48
void CNullTypeManager::FrameUpdate(int nFinishedFrameCount)
{
} /* size: 5 */

// <0238179A> resourcesystem/resourcesystem.cpp:49
// variables: 2
void CNullTypeManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 58613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 49
	}
} /* size: 27, variables: 1 */

// <0238174E> resourcesystem/resourcesystem.cpp:50
void CNullTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
} /* size: 5 */

// <02381702> resourcesystem/resourcesystem.cpp:51
void CNullTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
} /* size: 5 */

// <023816D4> resourcesystem/resourcesystem.cpp:52
void CNullTypeManager::UsesData()
{
} /* size: 10 */

// <023341CE> resourcesystem/resourcesystem.cpp:55
// member function: 1
// member variables: 2
// struct size: 16
struct NullTypeManager_t {
	/* resourcesystem/resourcesystem.cpp:57 */
	void NullTypeManager_t(NullTypeManager_t* );
	ResourceType_t m_nResourceType; /* 0 8 */
	CNullTypeManager m_NullTypeManager; /* 8 8 */
};

// <02381657> resourcesystem/resourcesystem.cpp:57
void NullTypeManager_t::NullTypeManager_t()
{
} /* size: 0 */

// <0238163E> resourcesystem/resourcesystem.cpp:57
inline void NullTypeManager_t::NullTypeManager_t()
{
} /* size: 0 */

// <02342E8E> resourcesystem/resourcesystem.cpp:69
// member functions: 5
// member variables: 5
// vtable entry: 1
// struct size: 32
class CResourceConstructor : public ITSHashConstructor<ResourceBindingBase_t> {
public:
	/* class ITSHashConstructor<ResourceBindingBase_t> <ancestor>; */ /* 0 8 */
	void ~CResourceConstructor(CResourceConstructor* );
	void CResourceConstructor(CResourceConstructor* , CResourceConstructor& );
	void CResourceConstructor(CResourceConstructor* , const CResourceConstructor& );
	/* resourcesystem/resourcesystem.cpp:72 */
	void CResourceConstructor(CResourceConstructor* , const CResourceName& , void* , ResourceTypeIndex_t, int);
	/* resourcesystem/resourcesystem.cpp:77 */
	virtual void Construct(CResourceConstructor* , ResourceData_t* );
private:
	ResourceTypeIndex_t m_nTypeIndex; /* 8 2 */
	int m_nFlags; /* 12 4 */
	void * m_pResourceData; /* 16 8 */
	const class CResourceName & m_ResourceName; /* 24 8 */
};

// <023815E0> resourcesystem/resourcesystem.cpp:72
void CResourceConstructor::CResourceConstructor(const CResourceName& resourceName, void* pResourceData, ResourceTypeIndex_t nTypeIndex, int nFlags)
{
} /* size: 0 */

// <02381597> resourcesystem/resourcesystem.cpp:72
inline void CResourceConstructor::CResourceConstructor(const CResourceName& resourceName, void* pResourceData, ResourceTypeIndex_t nTypeIndex, int nFlags)
{
} /* size: 0 */

// <0238E5EC> resourcesystem/resourcesystem.cpp:77
// variable: 1
// function calls: 9
void CResourceConstructor::Construct(ResourceData_t* pElement)
{
	BIsSafeNumericCast<short unsigned int, int>(int value); // 115
	{
	}
	AssertCast<short unsigned int, int>(int value); // 112
	AssertCast<short unsigned int, int>(int value); // 81
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 86
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
		CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData(); // 1526
		Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory); // 850
	}
	FreeResourceNameImp(bool bTrackLeaks,
				const ResourceNameHandle_t& hName);  // 873
	CResourceSystem::FreeResourceName(
			ResourceHandleWritable_t hResource);  // 91
} /* size: 0, inline expansions: 7 (0 bytes) */

// <02381572> resourcesystem/resourcesystem.cpp:77
inline void CResourceConstructor::Construct(ResourceData_t* pElement)
{
} /* size: 0 */

// <02381531> resourcesystem/resourcesystem.cpp:154
void* __CreateCResourceSystemIResourceSystem_interface(void)
{
} /* size: 12 */

// <0237F7FA> resourcesystem/resourcesystem.cpp:160
// function calls: 121
void CResourceSystem::CResourceSystem()
{
	IAppSystem::IAppSystem(); // 465
	IResourceSystem::IResourceSystem(); // 120
	CBaseAppSystem<IResourceSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<IResourceSystem, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IResourceSystem, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IResourceSystem, 0>::CTier2AppSystem(); // 163
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CResourceManifest::End(); // 865
	CTSQueue<CResourceManifest::CTSQueue(); // 163
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 163
	IResourceSystemUtils::IResourceSystemUtils(); // 163
	IResourceHandleUtils::IResourceHandleUtils(); // 163
	IResourceManifestRegistry::IResourceManifestRegistry(); // 163
	CUtlMemory<ResourceTypeRegistration_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ResourceTypeRegistration_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::CUtlVector(); // 163
	CUtlMemory<unsigned int::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int::CUtlVector(); // 163
	CUtlMemory<unsigned int::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int::CUtlVector(); // 163
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CResourceManifest::End(); // 865
	CTSQueue<CResourceManifest::CTSQueue(); // 163
	CUtlLinkedList<ExtRefList_t::ConstructList(); // 454
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::Init(
		int nGrowSize,
		int nInitSize);  // 126
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			unsigned int i);  // 59
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::InvalidIterator(); // 448
	CUtlLinkedList<ExtRefList_t::ResetDbgInfo(); // 455
	CUtlLinkedList<ExtRefList_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 436
	CUtlBlockLinkedList<ExtRefList_t::CUtlBlockLinkedList(
				int growSize,
				int initSize);  // 163
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<const ResourceBindingBase_t::End(); // 865
	CTSQueue<const ResourceBindingBase_t::CTSQueue(); // 163
	CUtlLinkedList<CResourceManifest::ResetDbgInfo(); // 455
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::InvalidIterator(); // 448
	CUtlLinkedList<CResourceManifest::ConstructList(); // 454
	CUtlLinkedList<CResourceManifest::CUtlLinkedList(
			int growSize,
			int initSize);  // 163
	{
	}
	AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t>::AlignedByteArray_t(); // 228
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::CUtlMemory(
			ForcedSynchronizationCallbackInfo_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::CUtlMemoryFixedGrowable_Base(
					ForcedSynchronizationCallbackInfo_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 530
	CUtlVectorBase(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 163
	CUtlTSHash(const CUtlTSHash<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned int> this,
			int nAllocationCount);  // 161
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 530
	CUtlMemory<HResourceManifest__::ValidateGrowSize(); // 475
	CUtlMemory<HResourceManifest__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HResourceManifest__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HResourceManifest__::CUtlVector(); // 163
	CUtlTSHash(const CUtlTSHash<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned int> this,
			int nAllocationCount);  // 162
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 163
	{
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Eq_t::Eq_t(); // 178
		Hash_t::Hash_t(); // 178
		Init(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 178
		CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				int minimumSize);  // 49
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				int growSize,
				int initCapacity);  // 49
		CThreadNullMutex::CThreadNullMutex(
				const char* pName);  // 48
		GetEqualRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 52
		Eq_t::SetSymbolTable(
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable);  // 52
		GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 53
		Hash_t::SetSymbolTable(
				CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable);  // 53
	}
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(
				int growSize,
				int initSize,
				bool caseInsensitive);  // 163
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 163
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
	CUtlStringList::CUtlStringList(); // 163
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 169
	CUtlMemory<IToolsResourceListener::ValidateGrowSize(); // 475
	CUtlMemory<IToolsResourceListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IToolsResourceListener::ResetDbgInfo(); // 530
	CUtlVectorBase<IToolsResourceListener::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IToolsResourceListener::CUtlVector(); // 163
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 647
	CInterlockedIntT<long long unsigned int, 8>::operator=(
			long long unsigned int newValue);  // 178
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 181
} /* size: 1302, inline expansions: 104 (2073 bytes) */

// <0237F7E1> resourcesystem/resourcesystem.cpp:160
void CResourceSystem::CResourceSystem()
{
} /* size: 0 */

// <0237D1BC> resourcesystem/resourcesystem.cpp:188
// variables: 8
// function calls: 174
void CResourceSystem::~CResourceSystem()
{
	CUtlVectorBase<IToolsResourceListener::RemoveAll(); // 1798
	CUtlMemory<IToolsResourceListener::IsExternallyAllocated(); // 905
	CUtlMemory<IToolsResourceListener::Purge(); // 903
	CUtlMemory<IToolsResourceListener::Purge(); // 1799
	CUtlVectorBase<IToolsResourceListener::Purge(); // 560
	ValidateAlignment<IToolsResourceListener*>(void); // 508
	CUtlMemory<IToolsResourceListener::Purge(); // 510
	CUtlMemory<IToolsResourceListener::~CUtlMemory(); // 562
	CUtlVectorBase<IToolsResourceListener::~CUtlVectorBase(); // 410
	CUtlVector<IToolsResourceListener::~CUtlVector(); // 190
	RemoveAll(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 1798
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::ConvertToExternalMemory(
				ForcedSynchronizationCallbackInfo_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::Purge_FixedGrowable(
				ForcedSynchronizationCallbackInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::Purge_FixedGrowable(
				ForcedSynchronizationCallbackInfo_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 368
	ResetDbgInfo(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 1800
	Purge(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 560
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::Purge(); // 903
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::Purge(); // 510
	ValidateAlignment<CResourceSystem::ForcedSynchronizationCallbackInfo_t>(void); // 508
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 478
	CUtlVectorFixedGrowable<CResourceSystem::ForcedSynchronizationCallbackInfo_t, 8>::~CUtlVectorFixedGrowable(); // 190
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
	CUtlStringList::~CUtlStringList(); // 190
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 190
	CThreadEvent::~CThreadEvent(); // 190
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	RemoveAll(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 668
	RemoveAll(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 352
	Purge(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 343
	~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this); // 344
	~CUtlTSHashBase(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 803
	~CUtlTSHash(const CUtlTSHash<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned int> this); // 190
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	RemoveAll(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 668
	RemoveAll(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 352
	Purge(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 343
	~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this); // 344
	~CUtlTSHashBase(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 803
	~CUtlTSHash(const CUtlTSHash<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned int> this); // 190
	CUtlVectorBase<HResourceManifest__::RemoveAll(); // 1798
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 905
	CUtlMemory<HResourceManifest__::Purge(); // 903
	CUtlMemory<HResourceManifest__::Purge(); // 1799
	CUtlVectorBase<HResourceManifest__::Purge(); // 560
	ValidateAlignment<HResourceManifest__*>(void); // 508
	CUtlMemory<HResourceManifest__::Purge(); // 510
	CUtlMemory<HResourceManifest__::~CUtlMemory(); // 562
	CUtlVectorBase<HResourceManifest__::~CUtlVectorBase(); // 410
	CUtlVector<HResourceManifest__::~CUtlVector(); // 190
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<const ResourceBindingBase_t::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<const ResourceBindingBase_t::End(); // 873
	{
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
	CTSQueue<const ResourceBindingBase_t::~CTSQueue(); // 190
	{
		int i; // 359
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::Purge(); // 354
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::Purge(); // 132
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::~CUtlBlockMemory(); // 462
	CUtlLinkedList<ExtRefList_t::~CUtlLinkedList(); // 432
	CUtlBlockLinkedList<ExtRefList_t::~CUtlBlockLinkedList(); // 190
	ValidateAlignment<UtlLinkedListElem_t<CResourceManifest*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<CResourceManifest::~CUtlMemory(); // 462
	CUtlLinkedList<CResourceManifest::~CUtlLinkedList(); // 190
	CUtlVectorBase<unsigned int::RemoveAll(); // 1798
	CUtlMemory<unsigned int::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int::Purge(); // 903
	CUtlMemory<unsigned int::Purge(); // 1799
	CUtlVectorBase<unsigned int::Purge(); // 560
	ValidateAlignment<unsigned int*>(void); // 508
	CUtlMemory<unsigned int::Purge(); // 510
	CUtlMemory<unsigned int::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int::~CUtlVector(); // 190
	CUtlVectorBase<unsigned int::RemoveAll(); // 1798
	CUtlMemory<unsigned int::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int::Purge(); // 903
	CUtlMemory<unsigned int::Purge(); // 1799
	CUtlVectorBase<unsigned int::Purge(); // 560
	ValidateAlignment<unsigned int*>(void); // 508
	CUtlMemory<unsigned int::Purge(); // 510
	CUtlMemory<unsigned int::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int::~CUtlVector(); // 190
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ResourceTypeRegistration_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceTypeRegistration_t, int>::Purge(); // 903
	CUtlMemory<ResourceTypeRegistration_t, int>::Purge(); // 1799
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Purge(); // 560
	ValidateAlignment<ResourceTypeRegistration_t>(void); // 508
	CUtlMemory<ResourceTypeRegistration_t, int>::Purge(); // 510
	CUtlMemory<ResourceTypeRegistration_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::~CUtlVector(); // 190
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IResourceSystem, 0>::~CTier2AppSystem(); // 190
} /* size: 0, inline expansions: 150 (6656 bytes) */

// <0237D10C> resourcesystem/resourcesystem.cpp:205
void CResourceSystem::GetDependencies()
{
} /* size: 12 */

// <02385550> resourcesystem/resourcesystem.cpp:210
// function call: 1
void* CResourceSystem::QueryInterface(const char* pInterfaceName)
{
	CResourceSystem::QueryInterface(
			const char* pInterfaceName);  // 210
} /* size: 127, inline expansions: 1 (40 bytes) */

// <0237D0E2> resourcesystem/resourcesystem.cpp:210
void* CResourceSystem::QueryInterface(const char* pInterfaceName)
{
} /* size: 0 */

// <0237CFC0> resourcesystem/resourcesystem.cpp:232
void MangagedResource::MangagedResource()
{
} /* size: 0 */

// <0237CFA4> resourcesystem/resourcesystem.cpp:232
inline void MangagedResource::MangagedResource()
{
} /* size: 0 */

// <0237BF2F> resourcesystem/resourcesystem.cpp:232
void MangagedResource::~MangagedResource()
{
} /* size: 0 */

// <0237BF13> resourcesystem/resourcesystem.cpp:232
inline void MangagedResource::~MangagedResource()
{
} /* size: 0 */

// <023359E4> resourcesystem/resourcesystem.cpp:232
// member functions: 2
// member variables: 2
// struct size: 40
struct MangagedResource {
	CUtlString Name; /* 0 8 */
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> > m_References; /* 8 32 */
	void ~MangagedResource(MangagedResource* );
	void MangagedResource(MangagedResource* );
};

// <0237BE83> resourcesystem/resourcesystem.cpp:241
void CManagedTypeManager::CManagedTypeManager()
{
} /* size: 0 */

// <0237BE67> resourcesystem/resourcesystem.cpp:241
inline void CManagedTypeManager::CManagedTypeManager()
{
} /* size: 0 */

// <02342AF8> resourcesystem/resourcesystem.cpp:241
// member functions: 22
// member variable: 1
// vtable entries: 8
// class size: 8
class CManagedTypeManager : public IResourceTypeManager {
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void CManagedTypeManager(CManagedTypeManager* , CManagedTypeManager& );
	void CManagedTypeManager(CManagedTypeManager* , const CManagedTypeManager& );
	void CManagedTypeManager(CManagedTypeManager* );
private:
	/* resourcesystem/resourcesystem.cpp:243 */
	virtual bool Init(CManagedTypeManager* , IResourceSystemUtils* );
	/* resourcesystem/resourcesystem.cpp:248 */
	virtual void Shutdown(CManagedTypeManager* );
	/* resourcesystem/resourcesystem.cpp:252 */
	virtual bool NeedsFrameUpdate(const CManagedTypeManager* );
	/* resourcesystem/resourcesystem.cpp:257 */
	virtual void FrameUpdate(CManagedTypeManager* , int);
	/* resourcesystem/resourcesystem.cpp:261 */
	virtual void AllocateResource(CManagedTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* resourcesystem/resourcesystem.cpp:301 */
	virtual void FinalizeResource(CManagedTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* resourcesystem/resourcesystem.cpp:306 */
	virtual void DeallocateResource(CManagedTypeManager* , void* , IResourceDeallocatorUtils* );
	/* resourcesystem/resourcesystem.cpp:323 */
	virtual bool UsesData(const CManagedTypeManager* );
	void CManagedTypeManager(class CManagedTypeManager *, class CManagedTypeManager &); /* linkage=_ZN19CManagedTypeManagerC4EOS_ */
	void CManagedTypeManager(class CManagedTypeManager *, const class CManagedTypeManager  &); /* linkage=_ZN19CManagedTypeManagerC4ERKS_ */
	void CManagedTypeManager(class CManagedTypeManager *); /* linkage=_ZN19CManagedTypeManagerC4Ev */
	virtual bool Init(class CManagedTypeManager *, class IResourceSystemUtils *); /* linkage=_ZN19CManagedTypeManager4InitEP20IResourceSystemUtils */
	virtual void Shutdown(class CManagedTypeManager *); /* linkage=_ZN19CManagedTypeManager8ShutdownEv */
	virtual bool NeedsFrameUpdate(const class CManagedTypeManager  *); /* linkage=_ZNK19CManagedTypeManager16NeedsFrameUpdateEv */
	virtual void FrameUpdate(class CManagedTypeManager *, int); /* linkage=_ZN19CManagedTypeManager11FrameUpdateEi */
	virtual void AllocateResource(class CManagedTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN19CManagedTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void FinalizeResource(class CManagedTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN19CManagedTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	/* <238c232> resourcesystem/resourcesystem.cpp:306 */
	virtual void DeallocateResource(class CManagedTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN19CManagedTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual bool UsesData(const class CManagedTypeManager  *); /* linkage=_ZNK19CManagedTypeManager8UsesDataEv */
};

// <0237D0A5> resourcesystem/resourcesystem.cpp:243
void CManagedTypeManager::Init(IResourceSystemUtils* pUtils)
{
} /* size: 10 */

// <0237D077> resourcesystem/resourcesystem.cpp:248
void CManagedTypeManager::Shutdown()
{
} /* size: 5 */

// <0237D049> resourcesystem/resourcesystem.cpp:252
void CManagedTypeManager::NeedsFrameUpdate()
{
} /* size: 7 */

// <0237D00B> resourcesystem/resourcesystem.cpp:257
void CManagedTypeManager::FrameUpdate(int nFinishedFrameCount)
{
} /* size: 5 */

// <0237BF94> resourcesystem/resourcesystem.cpp:261
// variables: 7
// function calls: 60
void CManagedTypeManager::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	MangagedResource* resource; // 263
	CResourceNameGetter getter; // 264
	const ResourceExtRefList_t* pbits; // 275
	{
		int i; // 278
		{
			CResourceName resourceName; // 280
			CPathBufferString path; // 281
			int index; // 293
			ResolveOffset(const int32* pOffset); // 160
			CResourcePointerBase::GetRawPtr(); // 712
			ResolveOffset(const int32* pOffset); // 160
			CResourcePointerBase::GetRawPtr(); // 706
			CResourceString::operator char const*(); // 280
			CResourceName::Get(); // 281
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 596
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 601
			CBufferStringN<200>::CBufferStringN(
					const char* pString,
					int nChars,
					bool bExact,
					bool bGrowable);  // 281
			CUtlMemory<CStrongHandleVoid, int>::NumAllocated(); // 1143
			CUtlMemory<CStrongHandleVoid, int>::Base(); // 112
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Base(); // 368
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CStrongHandleVoid, int>::IsGrowable(); // 823
			CUtlMemory<CStrongHandleVoid, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CStrongHandleVoid, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CStrongHandleVoid, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CStrongHandleVoid, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Element(
				int i);  // 1148
			CStrongHandle<ResourceBindingVoid_t>::CStrongHandle(); // 266
			CStrongHandleVoid::CStrongHandleVoid(); // 1479
			Construct<CStrongHandleVoid>(CStrongHandleVoid* pMemory); // 1148
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::AddToTail(); // 293
			CUtlMemory<CStrongHandleVoid, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
					int i);  // 294
			CRD_RegisterResourceDataUtils::RegisterResourceExternalReference(
								ResourceHandle_t hReferringResource,
								const CResourceName& resourceName,
								CStrongHandleVoid* pOutResult);  // 294
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 295
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 295
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<ResourceReferenceInfo_t>::GetPtr(); // 379
			CResourceArray<ResourceReferenceInfo_t>::operator[](
					int nIndex);  // 280
		}
		CResourceArrayBase::Count(); // 278
	}
	CUtlString::CUtlString(); // 232
	CUtlMemory<CStrongHandleVoid, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleVoid, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::CUtlVector(); // 232
	MangagedResource::MangagedResource(); // 263
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 264
	CResourceName::Get(); // 265
	CUtlString::operator=(
			const char* src);  // 265
	ConVar::GetInt(); // 267
	CUtlString::Get(); // 99
	CUtlString::String(); // 269
	CRD_RegisterResourceDataUtils::SetFinalResourceData(
				void* pData);  // 298
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 299
} /* size: 1059, variables: 3, inline expansions: 22 (376 bytes) */

// <0237BF46> resourcesystem/resourcesystem.cpp:301
void CManagedTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
} /* size: 5 */

// <0238C232> resourcesystem/resourcesystem.cpp:306
// variables: 2
// function calls: 22
void CManagedTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	MangagedResource* resource; // 311
	CResourceDeallocatorUtils::GetDeallocationType(); // 308
	ConVar::GetInt(); // 313
	CUtlString::Get(); // 99
	CUtlString::String(); // 315
	{
		int i; // 1721
		CUtlMemory<CStrongHandleVoid, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Element(
			int i);  // 1723
		CStrongHandle<ResourceBindingVoid_t>::~CStrongHandle(); // 262
		CStrongHandleVoid::~CStrongHandleVoid(); // 1526
		Destruct<CStrongHandleVoid>(CStrongHandleVoid* pMemory); // 1723
	}
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::RemoveAll(); // 1798
	CUtlMemory<CStrongHandleVoid, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleVoid, int>::Purge(); // 903
	CUtlMemory<CStrongHandleVoid, int>::Purge(); // 1799
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Purge(); // 560
	ValidateAlignment<CStrongHandleVoid>(void); // 508
	CUtlMemory<CStrongHandleVoid, int>::Purge(); // 510
	CUtlMemory<CStrongHandleVoid, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::~CUtlVector(); // 232
	CUtlString::~CUtlString(); // 232
	MangagedResource::~MangagedResource(); // 320
	CManagedTypeManager::DeallocateResource(
				void* pResourceData,
				IResourceDeallocatorUtils* pDealloc);  // 306
} /* size: 289, variables: 1, inline expansions: 17 (756 bytes) */

// <0237BEC8> resourcesystem/resourcesystem.cpp:306
// variable: 1
inline void CManagedTypeManager::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	MangagedResource* resource; // 311
} /* size: 0, variables: 1 */

// <0237BE9A> resourcesystem/resourcesystem.cpp:323
void CManagedTypeManager::UsesData()
{
} /* size: 10 */

// <0237B70A> resourcesystem/resourcesystem.cpp:332
// variables: 7
// function calls: 25
void CResourceSystem::Internal_InstallPlaceholderTypeManager(ResourceType_t nType)
{
	const char   __FUNCTION__; // 59172
	int nNewIndex; // 346
	ResourceTypeRegistration_t& registration; // 352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 334
	}
	{
		int i; // 336
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
		}
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 336
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 338
		CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
				short int nVal);  // 342
	}
	{
		int* _pCrash; // 349
	}
	CUtlMemory<ResourceTypeRegistration_t, int>::NumAllocated(); // 1143
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Element(
		int i);  // 1148
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(); // 198
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 198
	ResourceBindingBase_t::ResourceBindingBase_t(); // 99
	ResourceTypeRegistration_t::ResourceTypeRegistration_t(); // 1479
	Construct<ResourceTypeRegistration_t>(ResourceTypeRegistration_t* pMemory); // 1148
	CUtlMemory<ResourceTypeRegistration_t, int>::Base(); // 112
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Base(); // 368
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::AddToTail(); // 346
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 349
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 352
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 354
	IResourceTypeManager::IResourceTypeManager(); // 241
	CManagedTypeManager::CManagedTypeManager(); // 357
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 360
} /* size: 0, variables: 3, inline expansions: 21 (449 bytes) */

// <0237B2B1> resourcesystem/resourcesystem.cpp:366
// variables: 4
// function calls: 19
void CResourceSystem::InstallNullTypeManager(ResourceType_t nType, const char* pTypeName)
{
	int slot; // 368
	NullTypeManager_t& manager; // 386
	{
		int i; // 369
		{
			const NullTypeManager_t& ntm; // 371
		}
		CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::Count(); // 369
	}
	AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8>::Base(); // 268
	CUtlMemoryFixed<NullTypeManager_t, 16>::Base(); // 272
	CUtlMemoryFixed<NullTypeManager_t, 16>::operator[](
			int i);  // 588
	CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::operator[](
			int i);  // 386
	AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8>::Base(); // 268
	CUtlMemoryFixed<NullTypeManager_t, 16>::Base(); // 272
	CUtlMemoryFixed<NullTypeManager_t, 16>::operator[](
			int i);  // 602
	CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::Element(
		int i);  // 1148
	IResourceTypeManager::IResourceTypeManager(); // 43
	CNullTypeManager::CNullTypeManager(); // 57
	NullTypeManager_t::NullTypeManager_t(); // 1479
	Construct<NullTypeManager_t>(NullTypeManager_t* pMemory); // 1148
	AlignedByteArrayExplicit_t<16, NullTypeManager_t, 8>::Base(); // 268
	CUtlMemoryFixed<NullTypeManager_t, 16>::Base(); // 112
	CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::Base(); // 368
	CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::ResetDbgInfo(); // 824
	CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::AddToTail(); // 382
} /* size: 152, variables: 2, inline expansions: 18 (164 bytes) */

// <0237B11B> resourcesystem/resourcesystem.cpp:399
// variables: 2
// function calls: 4
void CResourceSystem::RemoveNullTypeManager(ResourceType_t nResourceType)
{
	{
		int i; // 401
		{
			NullTypeManager_t& ntm; // 403
			CUtlMemoryFixed<NullTypeManager_t, 16>::operator[](
					int i);  // 588
			CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::operator[](
					int i);  // 403
			CResourceSystem::RemoveResourceTypeManagerInternal(
								IResourceTypeManager* pTypeManager,
								ResourceType_t nResourceType);  // 407
		}
		CUtlVectorBase<NullTypeManager_t, CUtlMemoryFixed<NullTypeManager_t, 16> >::Count(); // 401
	}
} /* size: 89 */

// <02379B33> resourcesystem/resourcesystem.cpp:418
// variables: 20
// function calls: 69
void CResourceSystem::InstallTypeManager(ResourceType_t nType, IResourceTypeManager* pTypeManager, const char* pTypeName, const char* pErrorManifestName)
{
	const char   __FUNCTION__; // 58667
	int nNewIndexToUse; // 426
	char pResourceExt; // 471
	CResourceName errorResourceName; // 514
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	{
		int i; // 428
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 440
		}
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 428
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 430
		CResourceSystem::IsDebugModeEnabled(
					ResourceSystemDebugMode_t mode);  // 436
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 451
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 451
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 459
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 466
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 475
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 476
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 477
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 478
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 479
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 480
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 481
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 482
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
	{
		int* _pCrash; // 492
	}
	{
		HResourceManifest hErrorManifest; // 519
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 520
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 81
	ResourceTypeToExt(char* pOutChars,
				size_t nBufferSize,
				ResourceType_t nType);  // 89
	ResourceTypeToExt<9>(char& pDest,
				ResourceType_t nType);  // 472
	CUtlMemory<ResourceTypeRegistration_t, int>::NumAllocated(); // 1143
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Element(
		int i);  // 1148
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(); // 198
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 198
	ResourceBindingBase_t::ResourceBindingBase_t(); // 99
	ResourceTypeRegistration_t::ResourceTypeRegistration_t(); // 1479
	Construct<ResourceTypeRegistration_t>(ResourceTypeRegistration_t* pMemory); // 1148
	CUtlMemory<ResourceTypeRegistration_t, int>::Base(); // 112
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Base(); // 368
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::AddToTail(); // 489
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 492
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 494
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 494
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 500
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 507
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 501
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 502
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 503
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 503
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 504
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 504
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 505
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 506
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 507
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 508
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 509
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 510
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 511
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 512
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 515
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 524
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 525
} /* size: 0, variables: 4, inline expansions: 60 (726 bytes) */

// <0238DD84> resourcesystem/resourcesystem.cpp:529
// function call: 1
void CResourceSystem::RemoveResourceTypeManager(IResourceTypeManager* pTypeManager)
{
	CResourceSystem::RemoveResourceTypeManagerInternal(
						IResourceTypeManager* pTypeManager,
						ResourceType_t nResourceType);  // 531
} /* size: 17, inline expansions: 1 (12 bytes) */

// <02379B0D> resourcesystem/resourcesystem.cpp:529
void CResourceSystem::RemoveResourceTypeManager(IResourceTypeManager* pTypeManager)
{
} /* size: 0 */

// <02378F76> resourcesystem/resourcesystem.cpp:536
// variables: 9
// function calls: 45
void CResourceSystem::WarnAboutResourceTypeLeaks(ResourceIdMap_t* pResources, ResourceTypeIndex_t nManagerIndex, const char* pResourceTypeName)
{
	int nCount; // 538
	CUtlVector<long long int, CUtlMemory<long long int, int> > handles; // 539
	const char   __FUNCTION__; // 58868
	{
		int i; // 543
		{
			ResourceData_t& data; // 545
			{
				CPathBufferString resourceName; // 548
				{
					CFmtStr refCounts; // 553
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<256>::CBufferStringN(); // 29
					CFmtStrN<256>::CFmtStrN(); // 553
					CInterlockedIntT<int, 4>::GetRaw(); // 554
					GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
						UtlTSHashHandle_t hHash);  // 556
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 556
					CBufferString::WriteBuffer(); // 1390
					CBufferString::WriteBuffer(); // 803
					CBufferString::Access(); // 84
					CFmtStrN<256>::Access(); // 556
					CBufferString::~CBufferString(); // 587
					CBufferStringN<256>::~CBufferStringN(); // 41
					CFmtStrN<256>::~CFmtStrN(); // 567
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 571
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 578
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 578
				}
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 548
				CUtlSymbolLarge::String(); // 148
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 148
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CBufferString* pOutBuffer,
						bool bAppend);  // 549
				CInterlockedIntT<int, 4>::operator int(); // 551
				CInterlockedIntT<int, 4>::operator==(
						int rhs);  // 571
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 581
			}
			Element(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
				UtlTSHashHandle_t hHash);  // 545
			CUtlTypesafeInt<ResourceTypeIndex_t_id::operator==(
					const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& other);  // 546
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 538
	CUtlMemory<long long int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<long long int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<long long int, CUtlMemory<long long int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 539
	CUtlMemory<long long int, int>::Purge(); // 903
	CUtlMemory<long long int, int>::Purge(); // 1799
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 560
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long int, CUtlMemory<long long int, int> >::~CUtlVector(); // 583
} /* size: 0, variables: 3, inline expansions: 14 (322 bytes) */

// <0238DD0D> resourcesystem/resourcesystem.cpp:587
// variables: 2
void CResourceSystem::RemoveResourceTypeManagerInternal(IResourceTypeManager* pTypeManager, ResourceType_t nResourceType)
{
	ResourceTypeIndex_t nManagerIndex; // 593
	const char* pResourceTypeName; // 629
} /* size: 0, variables: 2 */

// <0238D465> resourcesystem/resourcesystem.cpp:587
// variables: 3
// function calls: 35
void CResourceSystem::RemoveResourceTypeManagerInternal(IResourceTypeManager* pTypeManager, ResourceType_t nResourceType)
{
	ResourceTypeIndex_t nManagerIndex; // 593
	const char* pResourceTypeName; // 629
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 594
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 593
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 596
	CUtlTypesafeInt<ResourceTypeIndex_t_id::operator++(); // 594
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 613
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 616
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<const ResourceBindingBase_t::Count(); // 622
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CResourceManifest::Count(); // 622
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 629
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 637
	CInterlockedIntT<int, 4>::operator int(); // 637
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 642
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 644
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
		CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData(); // 1526
		Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory); // 850
	}
	FreeResourceNameImp(bool bTrackLeaks,
				const ResourceNameHandle_t& hName);  // 873
	CResourceSystem::FreeResourceName(
			ResourceHandleWritable_t hResource);  // 644
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 645
	CResourceSystem::MN_UpdateErrorResources(
				bool bUpdateImmediately);  // 647
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 646
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 646
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 639
} /* size: 573, variables: 2, inline expansions: 33 (482 bytes) */

// <02378C97> resourcesystem/resourcesystem.cpp:654
// variables: 2
// function calls: 10
void CResourceSystem::GetTypeManager(ResourceType_t nType)
{
	const ResourceTypeRegistration_t* pReg; // 656
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
				ResourceType_t nResourceType);  // 656
} /* size: 0, variables: 1, inline expansions: 6 (314 bytes) */

// <02378930> resourcesystem/resourcesystem.cpp:663
// variable: 1
// function calls: 12
void CResourceSystem::LoadMissingResourceWhitelist()
{
	CInputTextFile f; // 665
	CBaseFile::Open(
		const char* fname,
		const char* modes);  // 367
	CInputTextFile::Open(
		const char* pFname);  // 372
	CBaseFile::CBaseFile(); // 370
	CInputTextFile::CInputTextFile(
			const char* pFname);  // 665
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 666
	CBaseFile::Close(); // 181
	CBaseFile::~CBaseFile(); // 362
	CInputTextFile::~CInputTextFile(); // 670
} /* size: 316, variables: 1, inline expansions: 12 (606 bytes) */

// <02378673> resourcesystem/resourcesystem.cpp:675
// variable: 1
// function calls: 4
void CResourceSystem::Init()
{
	InitReturnVal_t nRetVal; // 679
	CTier0AppSystem<IResourceSystem, 0>::Init(); // 71
	CTier2AppSystem<IResourceSystem, 0>::Init(); // 679
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 683
	ResourceId_t::GetRaw(); // 699
} /* size: 373, variables: 1, inline expansions: 4 (61 bytes) */

// <02377514> resourcesystem/resourcesystem.cpp:715
// variables: 9
// function calls: 74
void CResourceSystem::WarnAboutLiveResourceLeaks(ResourceIdMap_t* pResources)
{
	int c; // 718
	CUtlVector<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> > data; // 719
	{
		int i; // 723
		{
			CPathBufferString resourceName; // 727
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 729
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 727
			CUtlSymbolLarge::String(); // 148
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 148
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CBufferString* pOutBuffer,
					bool bAppend);  // 728
			CUtlMemory<ResourceBindingBase_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::operator[](
					int i);  // 729
			CInterlockedIntT<int, 4>::GetRaw(); // 729
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 733
		}
		CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::Count(); // 723
		CUtlMemory<ResourceBindingBase_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::operator[](
				int i);  // 725
		CInterlockedIntT<int, 4>::operator!=(
				int rhs);  // 725
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 718
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<ResourceBindingBase_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ResourceBindingBase_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::CUtlVector(); // 719
	CUtlMemory<ResourceBindingBase_t, int>::Base(); // 112
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::Base(); // 368
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<ResourceBindingBase_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::Element(
			int i);  // 1453
		CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(); // 198
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 198
		ResourceBindingBase_t::ResourceBindingBase_t(); // 1479
		Construct<ResourceBindingBase_t>(ResourceBindingBase_t* pMemory); // 1453
	}
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::EnsureCount(
			int num);  // 720
	CUtlMemory<ResourceBindingBase_t, int>::Base(); // 112
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::Base(); // 721
	{
		int i; // 408
		{
			const HashBucket_t& bucket; // 410
			CThreadSpinRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 411
			{
				HashFixedData_t* pElement; // 412
				CThreadSpinRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 420
			}
			CThreadSpinRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 424
		}
	}
	GetElementsData(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			int nFirstElement,
			int nCount,
			ResourceBindingBase_t* pData);  // 721
	CUtlMemory<ResourceBindingBase_t, int>::NumAllocated(); // 782
	CUtlMemory<ResourceBindingBase_t, int>::Base(); // 112
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::Base(); // 368
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<ResourceBindingBase_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::Element(
			int i);  // 1453
		CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(); // 198
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 198
		ResourceBindingBase_t::ResourceBindingBase_t(); // 1479
		Construct<ResourceBindingBase_t>(ResourceBindingBase_t* pMemory); // 1453
	}
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::SetCount(
		int count);  // 722
	CUtlMemory<ResourceBindingBase_t, int>::Purge(); // 903
	CUtlMemory<ResourceBindingBase_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceBindingBase_t, int>::Purge(); // 1799
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::Purge(); // 560
	ValidateAlignment<ResourceBindingBase_t>(void); // 508
	CUtlMemory<ResourceBindingBase_t, int>::Purge(); // 510
	CUtlMemory<ResourceBindingBase_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ResourceBindingBase_t, CUtlMemory<ResourceBindingBase_t, int> >::~CUtlVector(); // 736
} /* size: 1055, variables: 2, inline expansions: 41 (2052 bytes) */

// <02376E1C> resourcesystem/resourcesystem.cpp:742
// variables: 4
// function calls: 24
void CResourceSystem::HaltAndCleanupPendingResources()
{
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	RemoveAll(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 668
	RemoveAll(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 749
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			ThreadPause(void); // 3309
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	RemoveAll(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 668
	RemoveAll(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 752
} /* size: 474, inline expansions: 8 (646 bytes) */

// <02376973> resourcesystem/resourcesystem.cpp:758
// variables: 2
// function calls: 14
void CResourceSystem::Shutdown()
{
	{
		int i; // 769
		{
			char pTypeName; // 775
			CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
					int i);  // 778
			CResourceSystem::RemoveResourceTypeManagerInternal(
								IResourceTypeManager* pTypeManager,
								ResourceType_t nResourceType);  // 531
			CResourceSystem::RemoveResourceTypeManager(
							IResourceTypeManager* pTypeManager);  // 778
			CResourceSystem::IsDebugModeEnabled(
						ResourceSystemDebugMode_t mode);  // 773
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 81
			ResourceTypeToExt(char* pOutChars,
						size_t nBufferSize,
						ResourceType_t nType);  // 89
			ResourceTypeToExt<9>(char& pDest,
						ResourceType_t nType);  // 776
		}
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 769
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 771
	}
	CTier0AppSystem<IResourceSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<IResourceSystem, 0>::Shutdown(); // 782
} /* size: 400, inline expansions: 2 (68 bytes) */

// <0238C0A4> resourcesystem/resourcesystem.cpp:789
// function calls: 2
void CResourceSystem::MarkErrorResourcesReloaded()
{
	CResourceSystem::MN_UpdateErrorResources(
				bool bUpdateImmediately);  // 794
	CResourceSystem::MarkErrorResourcesReloaded(); // 789
} /* size: 36, inline expansions: 2 (24 bytes) */

// <0237695A> resourcesystem/resourcesystem.cpp:789
void CResourceSystem::MarkErrorResourcesReloaded()
{
} /* size: 0 */

// <023768F4> resourcesystem/resourcesystem.cpp:806
// variables: 4
ResourceNameHandle_t AllocResourceNameImp(bool bTrackLeaks, const CResourceName& resourceName)
{
	size_t nResourceFileNameBufferSize; // 814
	size_t nTotalMemSize; // 815
	void* pMem; // 822
	ResourceNameInfo_t* pNameInfo; // 823
} /* size: 0, variables: 4 */

// <023768A4> resourcesystem/resourcesystem.cpp:837
// variables: 2
void FreeResourceNameImp(bool bTrackLeaks, const ResourceNameHandle_t& hName)
{
	void* pMem; // 842
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
	}
} /* size: 0, variables: 1 */

// <023766FA> resourcesystem/resourcesystem.cpp:857
// variables: 2
// function calls: 4
void CResourceSystem::AllocResourceName(ResourceHandleWritable_t hResource, const CResourceName& resourceName)
{
	bool bTrackLeaks; // 865
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
		CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData(); // 1526
		Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory); // 850
	}
	FreeResourceNameImp(bool bTrackLeaks,
				const ResourceNameHandle_t& hName);  // 873
	CResourceSystem::FreeResourceName(
			ResourceHandleWritable_t hResource);  // 862
} /* size: 144, variables: 1, inline expansions: 2 (122 bytes) */

// <0238C80F> resourcesystem/resourcesystem.cpp:870
// variables: 2
// function calls: 3
void CResourceSystem::FreeResourceName(ResourceHandleWritable_t hResource)
{
	bool bTrackLeaks; // 872
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
		CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData(); // 1526
		Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory); // 850
	}
	FreeResourceNameImp(bool bTrackLeaks,
				const ResourceNameHandle_t& hName);  // 873
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <023766C7> resourcesystem/resourcesystem.cpp:870
// variable: 1
void CResourceSystem::FreeResourceName(ResourceHandleWritable_t hResource)
{
	bool bTrackLeaks; // 872
} /* size: 0, variables: 1 */

// <02375C21> resourcesystem/resourcesystem.cpp:878
// variables: 2
// function calls: 38
void CResourceSystem::AllocExtRefs(ResourceHandleWritable_t hResource, int nCount, ResourceHandle_t* pExtRefs)
{
	ExtRefList_t* pList; // 890
	{
		int i; // 892
		GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 503
		ResourceId_t::ResourceId_t(
				uint64 value);  // 503
		CResourceSystem::ResourceHandleToResourceId(
						ResourceHandle_t hResource);  // 489
		CResourceSystem::ResourceHandleToResourceId(
						ResourceHandle_t hResource);  // 894
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 588
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxAfter(
			unsigned int i,
			const Iterator_t& it);  // 591
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 201
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 594
	CUtlLinkedList<ExtRefList_t::IsValidIndex(
			unsigned int i);  // 977
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 367
	CUtlLinkedList<ExtRefList_t::InternalElement(
			unsigned int i);  // 982
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 367
	CUtlLinkedList<ExtRefList_t::InternalElement(
			unsigned int i);  // 1011
	{
	}
	CUtlLinkedList<ExtRefList_t::LinkBefore(
			unsigned int before,
			unsigned int elem);  // 822
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 482
	CUtlLinkedList<ExtRefList_t::Element(
		unsigned int i);  // 825
	CopyConstruct<ExtRefList_t*>(ExtRefList_t** pMemory,
					ExtRefList_t* const& src);  // 825
	CUtlLinkedList<ExtRefList_t::InsertBefore(
			unsigned int before,
			ExtRefList_t* const& src);  // 856
	CUtlLinkedList<ExtRefList_t::AddToTail(
			ExtRefList_t* const& src);  // 888
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 494
	CUtlLinkedList<ExtRefList_t::operator[](
			unsigned int i);  // 897
} /* size: 0, variables: 1, inline expansions: 34 (3435 bytes) */

// <0238A180> resourcesystem/resourcesystem.cpp:900
// function calls: 6
void CResourceSystem::GetExtRefsForResource(ResourceHandle_t hResource)
{
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 494
	CUtlLinkedList<ExtRefList_t::operator[](
			unsigned int i);  // 905
} /* size: 0, inline expansions: 6 (0 bytes) */

// <02375BFB> resourcesystem/resourcesystem.cpp:900
void CResourceSystem::GetExtRefsForResource(ResourceHandle_t hResource)
{
} /* size: 0 */

// <0237559A> resourcesystem/resourcesystem.cpp:908
// variable: 1
// function calls: 22
void CResourceSystem::FreeExtRefs(ResourceHandleWritable_t hResource)
{
	ExtRefList_t* pList; // 910
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 494
	CUtlLinkedList<ExtRefList_t::operator[](
			unsigned int i);  // 905
	CResourceSystem::GetExtRefsForResource(
				ResourceHandle_t hResource);  // 910
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 588
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxAfter(
			unsigned int i,
			const Iterator_t& it);  // 591
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 201
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 594
	CUtlLinkedList<ExtRefList_t::IsValidIndex(
			unsigned int i);  // 749
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 367
	CUtlLinkedList<ExtRefList_t::InternalElement(
			unsigned int i);  // 752
	Destruct<ExtRefList_t*>(ExtRefList_t** pMemory); // 753
	{
	}
	CUtlLinkedList<ExtRefList_t::Free(
		unsigned int elem);  // 907
	CUtlLinkedList<ExtRefList_t::Remove(
		unsigned int elem);  // 915
} /* size: 0, variables: 1, inline expansions: 22 (1654 bytes) */

// <02374A8C> resourcesystem/resourcesystem.cpp:919
// variables: 7
// function calls: 36
void CResourceSystem::BuildExtRefListForResource(ResourceHandle_t hResource, ExtRefHashTable_t* pTable)
{
	ExtRefList_t* pList; // 921
	bool bDidInsert; // 925
	{
		int i; // 926
		{
			ResourceId_t id; // 928
			ResourceHandle_t hExtRef; // 929
			HashIntConventional(const int n); // 63
			Hash(const long long unsigned int& key,
				int nBucketMask);  // 734
			{
				HashFixedData_t* pElement; // 719
				Compare(const long long unsigned int& lhs,
					const long long unsigned int& rhs);  // 721
			}
			Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
				long long unsigned int uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 736
			CThreadSpinRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 743
			{
				HashFixedData_t* pElement; // 719
				Compare(const long long unsigned int& lhs,
					const long long unsigned int& rhs);  // 721
			}
			Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
				long long unsigned int uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 744
			CThreadSpinRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 745
			Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
				long long unsigned int uiKey);  // 1347
			operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
					UtlTSHashHandle_t hHash);  // 483
			CResourceSystem::HashHandleToResourceHandle(
							UtlTSHashHandle_t hHashHandle);  // 1352
			CResourceSystem::FindResourceByIdNoFallbacks(
							ResourceId_t nResourceId);  // 929
			ResourceId_t::GetRaw(); // 142
			HashItem<long long unsigned int>(const long long unsigned int& item); // 142
			ExtRefHashFunc_t::operator(
					const ResourceId_t& s);  // 249
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::Count(); // 651
			CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::IdealIndex(
					uint32 slotmask);  // 667
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 154
			DefaultEqualFunctor<ResourceId_t>::operator(
					Arg_t a,
					Arg_t b);  // 670
			CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::DoLookup<const ResourceId_t&>(
							const ResourceId_t& x,
							unsigned int h,
							handle_t* pPreviousInChain);  // 716
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, const ResourceBindingBase_t::operator[](
					int i);  // 720
			CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t::CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>(
											const ResourceId_t& k,
											const ResourceBindingBase_t* const& v);  // 1514
			Construct<CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>, const ResourceId_t&, const ResourceBindingBase_t*&>(CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>* pMemory); // 720
			CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::DoInsert<const ResourceId_t&>(
							const ResourceId_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
			CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::DoInsert<const ResourceId_t&>(
							const ResourceId_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
			CUtlHashtable<ResourceId_t, const ResourceBindingBase_t::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 933
		}
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(
			unsigned int i);  // 191
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](
			unsigned int i);  // 494
	CUtlLinkedList<ExtRefList_t::operator[](
			unsigned int i);  // 905
	CResourceSystem::GetExtRefsForResource(
				ResourceHandle_t hResource);  // 921
} /* size: 0, variables: 2, inline expansions: 7 (487 bytes) */

// <0237484D> resourcesystem/resourcesystem.cpp:945
// variable: 1
// function calls: 6
void CResourceSystem::GetResourcesInMap(ResourceIdMap_t* pMap, int nFirst, int nCount, ResourceHandle_t* pResources, ResourceSystemGetNamedResourcesFlags_t nFlags)
{
	{
		int i; // 948
		CInterlockedIntT<int, 4>::operator int(); // 109
		ResourceRefCount(ResourceHandle_t hResource); // 952
		operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
				UtlTSHashHandle_t hHash);  // 483
		CResourceSystem::HashHandleToResourceHandle(
						UtlTSHashHandle_t hHashHandle);  // 950
		CLoadingResource::IsCurrentlyLoading(); // 1719
		CResourceSystem::IsResourceCurrentlyLoading(
						ResourceHandle_t hResource);  // 951
	}
} /* size: 172 */

// <02373A8F> resourcesystem/resourcesystem.cpp:961
// variables: 4
// function calls: 59
void CResourceSystem::GetAllResourcesByTypeInMap(ResourceIdMap_t* pMap, ResourceType_t nResourceType, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& resourceListOut, ResourceSystemGetNamedResourcesFlags_t nFlags)
{
	int nNumResources; // 963
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > resourceList; // 964
	{
		int i; // 970
		{
			ResourceType_t rType; // 972
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 972
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
					ResourceHandle_t hResource);  // 972
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 975
			CUtlMemory<const ResourceBindingBase_t::NumAllocated(); // 1196
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 602
			CUtlVectorBase<const ResourceBindingBase_t::Element(
				int i);  // 1201
			CopyConstruct<const ResourceBindingBase_t*>(const ResourceBindingBase_t ** pMemory,
									const ResourceBindingBase_t* const& src);  // 1201
			CUtlMemory<const ResourceBindingBase_t::Base(); // 112
			CUtlVectorBase<const ResourceBindingBase_t::Base(); // 368
			CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 824
			CUtlVectorBase<const ResourceBindingBase_t::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const ResourceBindingBase_t::AddToTail(
					const ResourceBindingBase_t* const& src);  // 975
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 963
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 964
	CUtlVectorBase<const ResourceBindingBase_t::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<const ResourceBindingBase_t::Base(); // 112
	CUtlVectorBase<const ResourceBindingBase_t::Base(); // 368
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 824
	CUtlVectorBase<const ResourceBindingBase_t::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const ResourceBindingBase_t::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const ResourceBindingBase_t::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const ResourceBindingBase_t::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const ResourceBindingBase_t::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<const ResourceBindingBase_t::SetCount(
		int count);  // 965
	CUtlMemory<const ResourceBindingBase_t::NumAllocated(); // 782
	CUtlMemory<const ResourceBindingBase_t::Base(); // 112
	CUtlVectorBase<const ResourceBindingBase_t::Base(); // 368
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 824
	CUtlVectorBase<const ResourceBindingBase_t::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const ResourceBindingBase_t::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const ResourceBindingBase_t::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const ResourceBindingBase_t::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const ResourceBindingBase_t::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<const ResourceBindingBase_t::SetCount(
		int count);  // 968
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 978
} /* size: 0, variables: 2, inline expansions: 38 (790 bytes) */

// <02384FD9> resourcesystem/resourcesystem.cpp:980
// function calls: 3
void CResourceSystem::GetNamedResourceCount()
{
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 982
} /* size: 11, inline expansions: 3 (18 bytes) */

// <02373A76> resourcesystem/resourcesystem.cpp:980
void CResourceSystem::GetNamedResourceCount()
{
} /* size: 0 */

// <0238BBB7> resourcesystem/resourcesystem.cpp:985
void CResourceSystem::GetNamedResources(int nFirst, int nCount, ResourceHandle_t* pResources, ResourceSystemGetNamedResourcesFlags_t nFlags)
{
} /* size: 28 */

// <02373981> resourcesystem/resourcesystem.cpp:990
void CResourceSystem::GetAllNamedResourcesByType(ResourceType_t nResourceType, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& resourceListOut, ResourceSystemGetNamedResourcesFlags_t nFlags)
{
} /* size: 28 */

// <02373801> resourcesystem/resourcesystem.cpp:995
// variable: 1
// function calls: 6
void CResourceSystem::GetAllResourceCount(ResourceSystemGetResourcesFlags_t nFlags)
{
	int nTotal; // 997
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 1000
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 1004
} /* size: 32, variables: 1, inline expansions: 6 (36 bytes) */

// <0237349E> resourcesystem/resourcesystem.cpp:1009
// variables: 5
// function calls: 9
void CResourceSystem::GetAllResources(int nFirst, int nCount, ResourceHandle_t* pResources, ResourceSystemGetResourcesFlags_t nFlags)
{
	int nTotal; // 1011
	const char   __FUNCTION__; // 58586
	{
		int nFound; // 1017
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1026
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1030
		}
		CInterlockedIntT<int, 4>::operator int(); // 68
		CUtlMemoryPoolBase::Count(); // 365
		Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 1030
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 1015
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 1036
} /* size: 0, variables: 2, inline expansions: 6 (36 bytes) */

// <0238DE31> resourcesystem/resourcesystem.cpp:1049
// function call: 1
void CResourceSystem::GetAllResourcesByType(ResourceType_t nResourceType, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& resourceListOut, ResourceSystemGetResourcesFlags_t nFlags)
{
	CResourceSystem::GetAllResourcesByType(
				ResourceType_t nResourceType,
				CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& resourceListOut,
				ResourceSystemGetResourcesFlags_t nFlags);  // 1049
} /* size: 109, inline expansions: 1 (21 bytes) */

// <0237345E> resourcesystem/resourcesystem.cpp:1049
void CResourceSystem::GetAllResourcesByType(ResourceType_t nResourceType, CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& resourceListOut, ResourceSystemGetResourcesFlags_t nFlags)
{
} /* size: 0 */

// <0238A330> resourcesystem/resourcesystem.cpp:1066
// variable: 1
// function calls: 3
void CResourceSystem::ResourceTypeToTypeIndex_DoNotCreatePlaceholder(ResourceType_t nResourceType)
{
	{
		int i; // 1068
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 1068
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 1070
	}
} /* size: 0 */

// <0237342B> resourcesystem/resourcesystem.cpp:1066
// variable: 1
void CResourceSystem::ResourceTypeToTypeIndex_DoNotCreatePlaceholder(ResourceType_t nResourceType)
{
	{
		int i; // 1068
	}
} /* size: 0 */

// <02373218> resourcesystem/resourcesystem.cpp:1077
// variables: 2
// function calls: 8
void CResourceSystem::ResourceTypeToTypeIndex_CreatePlaceholder(ResourceType_t nResourceType)
{
	ResourceTypeIndex_t nIdx; // 1079
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
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 1074
	CResourceSystem::ResourceTypeToTypeIndex_DoNotCreatePlaceholder(
							ResourceType_t nResourceType);  // 1079
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 1080
	CUtlTypesafeInt<ResourceTypeIndex_t_id::operator!=(
			const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& other);  // 1080
} /* size: 69, variables: 1, inline expansions: 4 (47 bytes) */

// <0238A40E> resourcesystem/resourcesystem.cpp:1086
// variable: 1
// function calls: 9
void CResourceSystem::GetRegistrationForType(ResourceType_t nResourceType)
{
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
} /* size: 0, inline expansions: 5 (197 bytes) */

// <023731F2> resourcesystem/resourcesystem.cpp:1086
void CResourceSystem::GetRegistrationForType(ResourceType_t nResourceType)
{
} /* size: 0 */

// <0238A64D> resourcesystem/resourcesystem.cpp:1091
// function calls: 5
void CResourceSystem::GetRegistrationForType(ResourceTypeIndex_t nTypeIndex)
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
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0237318D> resourcesystem/resourcesystem.cpp:1091
// variables: 2
void CResourceSystem::GetRegistrationForType(ResourceTypeIndex_t nTypeIndex)
{
	const char   __FUNCTION__; // 58760
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1096
	}
} /* size: 0, variables: 1 */

// <0238A7BA> resourcesystem/resourcesystem.cpp:1100
// function calls: 6
void CResourceSystem::GetRegistrationForResource(ResourceHandle_t hResource)
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
} /* size: 0, inline expansions: 6 (112 bytes) */

// <02373167> resourcesystem/resourcesystem.cpp:1100
void CResourceSystem::GetRegistrationForResource(ResourceHandle_t hResource)
{
} /* size: 0 */

// <02371EB9> resourcesystem/resourcesystem.cpp:1112
// variables: 11
// function calls: 51
void CResourceSystem::FindOrRegisterResourceByName(const CResourceName& resourceName, bool bWarnIfNotLoaded)
{
	UtlTSHashHandle_t nIndex; // 1133
	ResourceHandle_t hResource; // 1148
	ResourceType_t nActualResourceType; // 1149
	const char   __FUNCTION__; // 58922
	{
		const char* pResourceType; // 1139
		ResourceId_t::GetRaw(); // 1140
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1140
	}
	{
		const char* pResourceType; // 1153
		CBufferString existingResourceName; // 1154
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1154
		CUtlSymbolLarge::String(); // 148
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 148
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CBufferString* pOutBuffer,
				bool bAppend);  // 172
		ResourceGetName(ResourceHandle_t hResource,
				CBufferString* pOutBuffer,
				bool bAppend);  // 1155
		CBufferString::~CBufferString(); // 1159
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1156
		ResourceId_t::GetRaw(); // 1156
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1156
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 1156
	}
	{
		uint32 nFlags; // 1163
		{
			const char* pResourceType; // 1167
			CLoadingResource::IsCurrentlyLoading(); // 1719
			CResourceSystem::IsResourceCurrentlyLoading(
							ResourceHandle_t hResource);  // 1169
			ResourceId_t::GetRaw(); // 1171
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 1171
			ResourceId_t::GetRaw(); // 1175
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 1175
		}
	}
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 1121
	CUtlTypesafeInt<ResourceTypeIndex_t_id::operator==(
			const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& other);  // 1121
	ResourceId_t::GetRaw(); // 127
	Plat_IsInDebugSession(void); // 131
	DebugResourceId(ResourceId_t nId); // 123
	DebugResourceId(ResourceId_t nId); // 1131
	ResourceId_t::GetRaw(); // 1133
	HashIntConventional(const int n); // 63
	Hash(const long long unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey);  // 1133
	operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 483
	CResourceSystem::HashHandleToResourceHandle(
					UtlTSHashHandle_t hHashHandle);  // 1148
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
					ResourceHandle_t hResource);  // 3131
	CResourceSystem::ResourceHandleToResourceType(
					ResourceHandle_t hResource);  // 1149
} /* size: 0, variables: 4, inline expansions: 24 (911 bytes) */

// <02371B0D> resourcesystem/resourcesystem.cpp:1184
// variables: 4
// function calls: 6
void CResourceSystem::BlockingLoadResourceByName(const CResourceName& resourceName, const char* pDebugName)
{
	ResourceHandle_t hResource; // 1186
	const char* pResourceName; // 1195
	ResourceManifestCreationInfo_t info; // 1196
	HResourceManifest hManifest; // 1197
	CResourceSystem::GetResourceStatus(
				const CResourceName& resourceName);  // 749
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 1186
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 1372
	CResourceSystem::GetResourceStatus(
				ResourceHandle_t hResource);  // 1187
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestType_t nType,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 1196
	CResourceSystem::CreateResourceManifest(
				const ResourceManifestCreationInfo_t& info);  // 1197
} /* size: 674, variables: 4, inline expansions: 6 (259 bytes) */

// <02371303> resourcesystem/resourcesystem.cpp:1205
// variables: 10
// function calls: 25
void CResourceSystem::EnsureResourceByNameIntoJustInTimeManifest(const CResourceName& resourceName, const char* pDebugName)
{
	ResourceHandle_t resource; // 1213
	const char* pResourceName; // 1230
	ResourceManifestCreationInfo_t info; // 1231
	HResourceManifest hManifest; // 1232
	{
		HResourceManifest hManifest; // 1216
		CUtlVector<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> >& __for_range; // 43131
		iterator __for_begin; // 29787
		iterator __for_end; // 29787
		{
			CResourceManifest* pManifest; // 1218
			{
				int i; // 1220
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Count(); // 235
				CResourceManifest::GetRootResourceCount(); // 1220
				CUtlMemory<CStrongHandleVoid, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
						int i);  // 240
				CStrongHandle<ResourceBindingVoid_t>::operator ResourceHandle_t(); // 240
				CResourceManifest::GetRootResource(
						int nIndex);  // 1222
			}
		}
		CUtlMemory<HResourceManifest__::Base(); // 112
		CUtlVectorBase<HResourceManifest__::Base(); // 102
		CUtlVectorBase<HResourceManifest__::begin(); // 1216
		CUtlVectorBase<HResourceManifest__::Count(); // 104
		CUtlVectorBase<HResourceManifest__::end(); // 1216
	}
	CResourceSystem::GetResourceStatus(
				const CResourceName& resourceName);  // 1210
	CResourceSystem::GetResourceStatus(
				const CResourceName& resourceName);  // 749
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 1213
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestType_t nType,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 1231
	CResourceSystem::CreateResourceManifest(
				const ResourceManifestCreationInfo_t& info);  // 1232
	CUtlMemory<HResourceManifest__::NumAllocated(); // 1196
	CUtlMemory<HResourceManifest__::operator[](
			int i);  // 602
	CUtlVectorBase<HResourceManifest__::Element(
		int i);  // 1201
	CopyConstruct<HResourceManifest__*>(HResourceManifest__** pMemory,
						HResourceManifest__* const& src);  // 1201
	CUtlMemory<HResourceManifest__::Base(); // 112
	CUtlVectorBase<HResourceManifest__::Base(); // 368
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 824
	CUtlVectorBase<HResourceManifest__::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<HResourceManifest__::AddToTail(
			HResourceManifest__* const& src);  // 1234
} /* size: 663, variables: 4, inline expansions: 14 (407 bytes) */

// <0238E93D> resourcesystem/resourcesystem.cpp:1237
// variables: 3
// function calls: 18
void CResourceSystem::BlockingLoadResourceByNameIntoJustInTimeManifest(const CResourceName& resourceName, const char* pDebugName)
{
	const char* pResourceName; // 1242
	ResourceManifestCreationInfo_t info; // 1243
	HResourceManifest hManifest; // 1244
	CResourceSystem::GetResourceStatus(
				const CResourceName& resourceName);  // 1239
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestType_t nType,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 1243
	CResourceSystem::CreateResourceManifest(
				const ResourceManifestCreationInfo_t& info);  // 1244
	CResourceSystem::GetResourceStatus(
				const CResourceName& resourceName);  // 1245
	CResourceSystem::GetResourceStatus(
				const CResourceName& resourceName);  // 1273
	{
	}
	CResourceSystem::GetResourceStatus(
				const CResourceName& resourceName);  // 1269
	{
	}
	CUtlMemory<HResourceManifest__::NumAllocated(); // 1196
	CUtlMemory<HResourceManifest__::operator[](
			int i);  // 602
	CUtlVectorBase<HResourceManifest__::Element(
		int i);  // 1201
	CopyConstruct<HResourceManifest__*>(HResourceManifest__** pMemory,
						HResourceManifest__* const& src);  // 1201
	CUtlMemory<HResourceManifest__::Base(); // 112
	CUtlVectorBase<HResourceManifest__::Base(); // 368
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 824
	CUtlVectorBase<HResourceManifest__::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<HResourceManifest__::AddToTail(
			HResourceManifest__* const& src);  // 1259
	CResourceSystem::BlockingLoadResourceByNameIntoJustInTimeManifest(
							const CResourceName& resourceName,
							const char* pDebugName);  // 1237
	CResourceSystem::GetResourceStatus(
				const CResourceName& resourceName);  // 749
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 1240
} /* size: 1168, variables: 3, inline expansions: 18 (1360 bytes) */

// <02371268> resourcesystem/resourcesystem.cpp:1237
// variables: 6
void CResourceSystem::BlockingLoadResourceByNameIntoJustInTimeManifest(const CResourceName& resourceName, const char* pDebugName)
{
	const char* pResourceName; // 1242
	ResourceManifestCreationInfo_t info; // 1243
	HResourceManifest hManifest; // 1244
	const char   __FUNCTION__; // 59412
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1273
	}
} /* size: 0, variables: 4 */

// <023710C4> resourcesystem/resourcesystem.cpp:1280
// variables: 4
// function calls: 6
void CResourceSystem::FreeJustInTimeManifests()
{
	{
		HResourceManifest hManifest; // 1282
		CUtlVector<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> >& __for_range; // 43131
		iterator __for_begin; // 29787
		iterator __for_end; // 29787
		CUtlMemory<HResourceManifest__::Base(); // 112
		CUtlVectorBase<HResourceManifest__::Base(); // 102
		CUtlVectorBase<HResourceManifest__::begin(); // 1282
		CUtlVectorBase<HResourceManifest__::Count(); // 104
		CUtlVectorBase<HResourceManifest__::end(); // 1282
	}
	CUtlVectorBase<HResourceManifest__::RemoveAll(); // 1286
} /* size: 97, inline expansions: 1 (12 bytes) */

// <02371065> resourcesystem/resourcesystem.cpp:1289
// function call: 1
void CResourceSystem::GetJustInTimeManifestCount()
{
	CUtlVectorBase<HResourceManifest__::Count(); // 1291
} /* size: 11, inline expansions: 1 (0 bytes) */

// <02370BB6> resourcesystem/resourcesystem.cpp:1294
// variables: 6
// function calls: 20
void CResourceSystem::GetJustInTimeManifestResources(CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& resourceListOut)
{
	{
		HResourceManifest hManifest; // 1296
		CUtlVector<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> >& __for_range; // 43131
		iterator __for_begin; // 29787
		iterator __for_end; // 29787
		{
			CResourceManifest* pManifest; // 1298
			{
				int i; // 1299
				CUtlMemory<const ResourceBindingBase_t::Base(); // 112
				CUtlVectorBase<const ResourceBindingBase_t::Base(); // 368
				CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 824
				CUtlVectorBase<const ResourceBindingBase_t::GrowMemory(
						int num);  // 1249
				CUtlMemory<const ResourceBindingBase_t::operator[](
						int i);  // 602
				CUtlVectorBase<const ResourceBindingBase_t::Element(
					int i);  // 1252
				Construct<const ResourceBindingBase_t*, const ResourceBindingBase_t*>(const ResourceBindingBase_t ** pMemory); // 1252
				CUtlMemory<const ResourceBindingBase_t::NumAllocated(); // 1247
				CUtlVectorBase<const ResourceBindingBase_t::AddToTail(
						const ResourceBindingBase_t  *& src);  // 1301
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Count(); // 235
				CResourceManifest::GetRootResourceCount(); // 1299
				CUtlMemory<CStrongHandleVoid, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
						int i);  // 240
				CStrongHandle<ResourceBindingVoid_t>::operator ResourceHandle_t(); // 240
				CResourceManifest::GetRootResource(
						int nIndex);  // 1301
			}
		}
		CUtlMemory<HResourceManifest__::Base(); // 112
		CUtlVectorBase<HResourceManifest__::Base(); // 102
		CUtlVectorBase<HResourceManifest__::begin(); // 1296
		CUtlVectorBase<HResourceManifest__::Count(); // 104
		CUtlVectorBase<HResourceManifest__::end(); // 1296
	}
} /* size: 253 */

// <0236FE77> resourcesystem/resourcesystem.cpp:1309
// variables: 14
// function calls: 44
void CResourceSystem::FindResourceById(ResourceId_t nResourceId, ResourceType_t nResourceType)
{
	UtlTSHashHandle_t nIndex; // 1316
	const char   __FUNCTION__; // 58613
	ResourceHandle_t hResource; // 1327
	ResourceType_t nActualResourceType; // 1328
	{
		const char* pResourceType; // 1320
		const ResourceTypeRegistration_t* pRegistration; // 1322
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1323
		}
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
					ResourceType_t nResourceType);  // 3042
		CResourceSystem::GetResourceTypeName(
					ResourceType_t nType);  // 1320
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
					ResourceType_t nResourceType);  // 1322
	}
	{
		const char* pResourceType; // 1332
		const ResourceTypeRegistration_t* pRegistration; // 1334
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1335
		}
	}
	ResourceId_t::operator==(
			const ResourceId_t& other);  // 1311
	Plat_IsInDebugSession(void); // 131
	DebugResourceId(ResourceId_t nId); // 123
	DebugResourceId(ResourceId_t nId); // 1314
	HashIntConventional(const int n); // 63
	Hash(const long long unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey);  // 1316
	operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 483
	CResourceSystem::HashHandleToResourceHandle(
					UtlTSHashHandle_t hHashHandle);  // 1327
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
					ResourceHandle_t hResource);  // 3131
	CResourceSystem::ResourceHandleToResourceType(
					ResourceHandle_t hResource);  // 1328
} /* size: 0, variables: 4, inline expansions: 21 (898 bytes) */

// <0238A978> resourcesystem/resourcesystem.cpp:1342
// variables: 4
// function calls: 12
void CResourceSystem::FindResourceByIdNoFallbacks(ResourceId_t nResourceId)
{
	UtlTSHashHandle_t nIndex; // 1347
	ResourceHandle_t hResource; // 1352
	ResourceId_t::operator==(
			const ResourceId_t& other);  // 1344
	HashIntConventional(const int n); // 63
	Hash(const long long unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey);  // 1347
	operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 483
	CResourceSystem::HashHandleToResourceHandle(
					UtlTSHashHandle_t hHashHandle);  // 1352
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <0236FE37> resourcesystem/resourcesystem.cpp:1342
// variables: 2
void CResourceSystem::FindResourceByIdNoFallbacks(ResourceId_t nResourceId)
{
	UtlTSHashHandle_t nIndex; // 1347
	ResourceHandle_t hResource; // 1352
} /* size: 0, variables: 2 */

// <02385400> resourcesystem/resourcesystem.cpp:1356
void CResourceSystem::GetResourceStatus(const CResourceName& resourceName)
{
} /* size: 47 */

// <02385095> resourcesystem/resourcesystem.cpp:1361
// variable: 1
// function call: 1
void CResourceSystem::GetResourceStatus(ResourceHandle_t hResource)
{
	uint16 flags; // 1371
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 1372
} /* size: 51, variables: 1, inline expansions: 1 (3 bytes) */

// <0236FDDE> resourcesystem/resourcesystem.cpp:1361
// variable: 1
void CResourceSystem::GetResourceStatus(ResourceHandle_t hResource)
{
	uint16 flags; // 1371
} /* size: 0, variables: 1 */

// <0236F89C> resourcesystem/resourcesystem.cpp:1385
// variables: 3
// function calls: 17
void CResourceSystem::GetResourceStatus(ResourceId_t nResourceId)
{
	UtlTSHashHandle_t nIndex; // 1394
	ResourceId_t::operator==(
			const ResourceId_t& other);  // 1387
	Plat_IsInDebugSession(void); // 131
	DebugResourceId(ResourceId_t nId); // 123
	DebugResourceId(ResourceId_t nId); // 1392
	HashIntConventional(const int n); // 63
	Hash(const long long unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey);  // 1394
	operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 483
	CResourceSystem::HashHandleToResourceHandle(
					UtlTSHashHandle_t hHashHandle);  // 1400
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 1372
	CResourceSystem::GetResourceStatus(
				ResourceHandle_t hResource);  // 1400
} /* size: 466, variables: 1, inline expansions: 15 (664 bytes) */

// <0236EC97> resourcesystem/resourcesystem.cpp:1403
// variables: 9
// function calls: 36
void CResourceSystem::CreateAnonymousProceduralResource(const CResourceName& resourceName, void* pResourceData)
{
	ResourceTypeIndex_t nTypeIndex; // 1405
	CResourceConstructor resConstructor; // 1406
	uint64 nFakeId; // 1410
	UtlTSHashHandle_t nIndex; // 1411
	ResourceData_t& data; // 1413
	ThreadInterlockedIncrement64(volatile int64* p); // 579
	CInterlockedIntT<long long unsigned int, 8>::operator++(); // 582
	CInterlockedIntT<long long unsigned int, 8>::operator++(
			int);  // 1410
	ITSHashConstructor<ResourceBindingBase_t>::ITSHashConstructor(); // 73
	CResourceConstructor::CResourceConstructor(
				const CResourceName& resourceName,
				void* pResourceData,
				ResourceTypeIndex_t nTypeIndex,
				int nFlags);  // 1407
	HashIntConventional(const int n); // 63
	Hash(const long long unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey);  // 507
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 514
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	Alloc(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this); // 438
	InsertUncommitted(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
				long long unsigned int uiKey,
				HashBucket_t& bucket);  // 521
	Element(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
		UtlTSHashHandle_t hHash);  // 522
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 86
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
		CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData(); // 1526
		Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory); // 850
	}
	FreeResourceNameImp(bool bTrackLeaks,
				const ResourceNameHandle_t& hName);  // 873
	CResourceSystem::FreeResourceName(
			ResourceHandleWritable_t hResource);  // 91
	CResourceConstructor::Construct(
			ResourceData_t* pElement);  // 522
	Insert(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
		long long unsigned int uiKey,
		ITSHashConstructor<ResourceBindingBase_t>* pConstructor,
		bool* pDidInsert);  // 1411
	operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
			UtlTSHashHandle_t hHash);  // 1413
} /* size: 837, variables: 5, inline expansions: 31 (2026 bytes) */

// <0236DFD6> resourcesystem/resourcesystem.cpp:1417
// variables: 8
// function calls: 38
void CResourceSystem::FindOrCreateProceduralResource(const CResourceName& resourceName, void* pResourceData, ProceduralResourceType_t type)
{
	ResourceTypeIndex_t nTypeIndex; // 1428
	CResourceConstructor resConstructor; // 1432
	UtlTSHashHandle_t nIndex; // 1434
	ResourceData_t& data; // 1436
	ResourceId_t::GetRaw(); // 127
	Plat_IsInDebugSession(void); // 131
	DebugResourceId(ResourceId_t nId); // 123
	DebugResourceId(ResourceId_t nId); // 1430
	ITSHashConstructor<ResourceBindingBase_t>::ITSHashConstructor(); // 73
	CResourceConstructor::CResourceConstructor(
				const CResourceName& resourceName,
				void* pResourceData,
				ResourceTypeIndex_t nTypeIndex,
				int nFlags);  // 1433
	ResourceId_t::GetRaw(); // 1434
	HashIntConventional(const int n); // 63
	Hash(const long long unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey);  // 507
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 514
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	Alloc(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this); // 438
	InsertUncommitted(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
				long long unsigned int uiKey,
				HashBucket_t& bucket);  // 521
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 86
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
		CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData(); // 1526
		Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory); // 850
	}
	FreeResourceNameImp(bool bTrackLeaks,
				const ResourceNameHandle_t& hName);  // 873
	CResourceSystem::FreeResourceName(
			ResourceHandleWritable_t hResource);  // 91
	CResourceConstructor::Construct(
			ResourceData_t* pElement);  // 522
	Element(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
		UtlTSHashHandle_t hHash);  // 522
	Insert(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
		long long unsigned int uiKey,
		ITSHashConstructor<ResourceBindingBase_t>* pConstructor,
		bool* pDidInsert);  // 1434
	operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
			UtlTSHashHandle_t hHash);  // 1436
} /* size: 1065, variables: 4, inline expansions: 33 (2272 bytes) */

// <0236DF6B> resourcesystem/resourcesystem.cpp:1443
void CResourceSystem::CreateEmptyResource(const CResourceName& resourceName)
{
} /* size: 14 */

// <0236D00A> resourcesystem/resourcesystem.cpp:1451
// variables: 13
// function calls: 49
void CResourceSystem::CreateEmptyResourceInternal(const CResourceName& resourceName, bool bSetLoadedFlag)
{
	const ResourceTypeRegistration_t* pReg; // 1455
	const char   __FUNCTION__; // 58895
	int nResourceFlags; // 1462
	ResourceTypeIndex_t nTypeIndex; // 1468
	CResourceConstructor resConstructor; // 1469
	UtlTSHashHandle_t nIndex; // 1470
	ResourceData_t& data; // 1472
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1456
	}
	ResourceId_t::GetRaw(); // 127
	Plat_IsInDebugSession(void); // 131
	DebugResourceId(ResourceId_t nId); // 123
	DebugResourceId(ResourceId_t nId); // 1453
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
				ResourceType_t nResourceType);  // 1455
	ITSHashConstructor<ResourceBindingBase_t>::ITSHashConstructor(); // 73
	CResourceConstructor::CResourceConstructor(
				const CResourceName& resourceName,
				void* pResourceData,
				ResourceTypeIndex_t nTypeIndex,
				int nFlags);  // 1469
	ResourceId_t::GetRaw(); // 1470
	HashIntConventional(const int n); // 63
	Hash(const long long unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey);  // 507
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 514
	{
		HashFixedData_t* pElement; // 719
		Compare(const long long unsigned int& lhs,
			const long long unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		long long unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	Alloc(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this); // 438
	InsertUncommitted(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
				long long unsigned int uiKey,
				HashBucket_t& bucket);  // 521
	Element(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
		UtlTSHashHandle_t hHash);  // 522
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 86
	AssertCast<short unsigned int, int>(int value); // 81
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
		CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData(); // 1526
		Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory); // 850
	}
	FreeResourceNameImp(bool bTrackLeaks,
				const ResourceNameHandle_t& hName);  // 873
	CResourceSystem::FreeResourceName(
			ResourceHandleWritable_t hResource);  // 91
	CResourceConstructor::Construct(
			ResourceData_t* pElement);  // 522
	Insert(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
		long long unsigned int uiKey,
		ITSHashConstructor<ResourceBindingBase_t>* pConstructor,
		bool* pDidInsert);  // 1470
	operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
			UtlTSHashHandle_t hHash);  // 1472
} /* size: 0, variables: 7, inline expansions: 40 (2500 bytes) */

// <0236C245> resourcesystem/resourcesystem.cpp:1481
// variables: 5
// function calls: 53
void CResourceSystem::DeleteResource(ResourceHandle_t hResource)
{
	CPathBufferString resourceName; // 1486
	const char   __FUNCTION__; // 58559
	{
		ResourceType_t nResourceType; // 1501
		const char* pResourceType; // 1502
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
						ResourceHandle_t hResource);  // 3131
		CResourceSystem::ResourceHandleToResourceType(
						ResourceHandle_t hResource);  // 1501
		CInterlockedIntT<int, 4>::GetRaw(); // 1505
		GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 503
		ResourceId_t::ResourceId_t(
				uint64 value);  // 503
		CResourceSystem::ResourceHandleToResourceId(
						ResourceHandle_t hResource);  // 489
		CResourceSystem::ResourceHandleToResourceId(
						ResourceHandle_t hResource);  // 1505
		ResourceId_t::GetRaw(); // 1505
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1505
	}
	{
		int* _pCrash; // 1520
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1486
	GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		UtlTSHashHandle_t hHash);  // 503
	ResourceId_t::ResourceId_t(
			uint64 value);  // 503
	CResourceSystem::ResourceHandleToResourceId(
					ResourceHandle_t hResource);  // 489
	CResourceSystem::ResourceHandleToResourceId(
					ResourceHandle_t hResource);  // 1489
	Plat_IsInDebugSession(void); // 131
	DebugResourceId(ResourceId_t nId); // 123
	DebugResourceId(ResourceId_t nId); // 1489
	CInterlockedIntT<int, 4>::GetRaw(); // 1491
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1491
	GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		UtlTSHashHandle_t hHash);  // 503
	ResourceId_t::ResourceId_t(
			uint64 value);  // 503
	CResourceSystem::ResourceHandleToResourceId(
					ResourceHandle_t hResource);  // 489
	CResourceSystem::ResourceHandleToResourceId(
					ResourceHandle_t hResource);  // 1491
	ResourceId_t::GetRaw(); // 1491
	ConVar::GetInt(); // 1494
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 1499
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
					ResourceHandle_t hResource);  // 1520
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1520
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1524
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1496
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1524
} /* size: 0, variables: 2, inline expansions: 36 (733 bytes) */

// <0238ADA3> resourcesystem/resourcesystem.cpp:1526
// variables: 2
// function calls: 8
void CResourceSystem::MaybeExitBecauseOfResourceLoadFailure(const char* pFilename)
{
	{
		{
			int i; // 221
			CUtlVectorBase<char::Count(); // 221
			CUtlMemory<char::operator[](
					int i);  // 609
			CUtlVectorBase<char::Element(
				int i);  // 223
			operator()(const class* __closure,
					char* pName); // 223
		}
		CUtlVectorBase<char::FindMatching<CResourceSystem::MaybeExitBecauseOfResourceLoadFailure(
															class& f);  // 236
		CUtlVectorBase<char::HasElementMatching<CResourceSystem::MaybeExitBecauseOfResourceLoadFailure(
																class& f);  // 1532
	}
	{
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 1535
	}
	CResourceSystem::MaybeExitBecauseOfResourceLoadFailure(
						const char* pFilename);  // 1526
} /* size: 232, inline expansions: 1 (93 bytes) */

// <0236C1A2> resourcesystem/resourcesystem.cpp:1526
// variable: 1
void CResourceSystem::MaybeExitBecauseOfResourceLoadFailure(const char* pFilename)
{
	const char   __FUNCTION__; // 59145
	{
	}
} /* size: 0, variables: 1 */

// <0236AF3F> resourcesystem/resourcesystem.cpp:1545
// variables: 11
// function calls: 58
void CResourceSystem::MN_DeallocateResourceData(ResourceHandleWritable_t hResource)
{
	CStreamingResourceData* pStreamingResource; // 1549
	const char   __FUNCTION__; // 58841
	CLoadingResource* pLoadingResource; // 1556
	const ResourceTypeRegistration_t* pReg; // 1566
	CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> resourceNameAnnotation; // 1583
	CResourceDeallocatorUtils deallocUtils; // 1585
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1553
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1560
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1579
		CResourceNameGetter::CResourceNameGetter(
					ResourceNameHandle_t hResourceName);  // 1579
		CResourceName::Get(); // 1579
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 1579
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1580
		CResourceNameGetter::CResourceNameGetter(
					ResourceNameHandle_t hResourceName);  // 1580
		CResourceName::Get(); // 1580
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 1580
	}
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
				ResourceTypeIndex_t nTypeIndex);  // 1566
	CLoadingResource::IsCurrentlyLoading(); // 1719
	CResourceSystem::IsResourceCurrentlyLoading(
					ResourceHandle_t hResource);  // 1579
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 1583
	CStackAnnotationVariableHandler<const ResourceNameInfo_t::CStackAnnotationVariableHandler(
					ConstructorVarType var);  // 625
	CStackAnnotation<const ResourceNameInfo_t::CStackAnnotation(
			const char* pVarDescA,
			ConstructorVarType VarA,
			const CCallStackMarkerBase& marker);  // 1583
	CResourceSystem::ComputeDeallocationType(
				ResourceHandle_t hResource);  // 1585
	IResourceDeallocatorUtils::IResourceDeallocatorUtils(); // 20
	CResourceDeallocatorUtils::CResourceDeallocatorUtils(
					ResourceHandle_t hResource,
					bool bIsQueuedReloadDeallocate,
					ResourceDeallocationType_t nDeallocationType);  // 1585
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
							ResourceType_t nResourceType);  // 546
	CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
			short int nVal);  // 1093
	{
	}
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 1097
	CResourceSystem::GetRegistrationForType(
				ResourceTypeIndex_t nTypeIndex);  // 551
	CResourceSystem::GetErrorResourceData(
				ResourceTypeIndex_t nTypeIndex);  // 546
	CResourceSystem::GetErrorResourceData(
				ResourceType_t nType);  // 1591
	CStackAnnotation<const ResourceNameInfo_t::~CStackAnnotation(); // 1594
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 201
	CResourceNameGetter::CResourceNameGetter(
				ResourceNameHandle_t hResourceName);  // 1547
	CResourceName::Get(); // 1547
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1547
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 201
	CResourceNameGetter::CResourceNameGetter(
				ResourceNameHandle_t hResourceName);  // 1575
	CResourceName::Get(); // 1575
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1575
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 201
	CResourceNameGetter::CResourceNameGetter(
				ResourceNameHandle_t hResourceName);  // 1569
	CResourceName::Get(); // 1569
} /* size: 0, variables: 6, inline expansions: 42 (1142 bytes) */

// <0236AECB> resourcesystem/resourcesystem.cpp:1599
// variable: 1
void CResourceSystem::IsManifestLoaded(HResourceManifest hManifest)
{
	CResourceManifest* pManifest; // 1601
} /* size: 30, variables: 1 */

// <02385112> resourcesystem/resourcesystem.cpp:1613
void CResourceSystem::ResourceReferenceLeakTracking_AddRef(ResourceHandle_t hResource, ResourceLeakTrackingGroup_t trackingGroup, uintp nOptionalRefPairingUniqueID)
{
} /* size: 19 */

// <02385189> resourcesystem/resourcesystem.cpp:1621
void CResourceSystem::ResourceReferenceLeakTracking_Release(ResourceHandle_t hResource, ResourceLeakTrackingGroup_t trackingGroup, uintp nOptionalRefPairingUniqueID)
{
} /* size: 20 */

// <02385200> resourcesystem/resourcesystem.cpp:1629
void CResourceSystem::ResourceReferenceLeakTracking_ReportReferences(ResourceHandle_t hResource)
{
} /* size: 20 */

// <0236AA60> resourcesystem/resourcesystem.cpp:1638
// variables: 4
// function calls: 12
void CResourceSystem::MarkLoadingWorkPending(ResourceHandle_t hResource, bool bHasWork)
{
	ResourceId_t nResourceId; // 1640
	const char   __FUNCTION__; // 58760
	CLoadingResource* pLoadingResource; // 1655
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1652
	}
	GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
		UtlTSHashHandle_t hHash);  // 503
	ResourceId_t::ResourceId_t(
			uint64 value);  // 503
	CResourceSystem::ResourceHandleToResourceId(
					ResourceHandle_t hResource);  // 489
	CResourceSystem::ResourceHandleToResourceId(
					ResourceHandle_t hResource);  // 1640
	Plat_IsInDebugSession(void); // 131
	DebugResourceId(ResourceId_t nId); // 123
	DebugResourceId(ResourceId_t nId); // 1641
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 1645
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 1649
	CInterlockedIntT<int, 4>::operator int(); // 1652
} /* size: 0, variables: 3, inline expansions: 12 (182 bytes) */

// <0236A94B> resourcesystem/resourcesystem.cpp:1671
// variables: 3
void CResourceSystem::CreateAsyncResourceDataRequest(ResourceHandle_t hResource, int64 nFileOffset, size_t nLoadSizeBytes, const char* pFileNameOverride)
{
	const char   __FUNCTION__; // 58971
	IAsyncResourceDataRequest* pResourceDataRequest; // 1675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1673
	}
} /* size: 0, variables: 2 */

// <0238546A> resourcesystem/resourcesystem.cpp:1680
// variable: 1
void CResourceSystem::SubmitAsyncResourceDataRequest(IAsyncResourceDataRequest* pRequestInterface)
{
	CAsyncResourceDataRequest* pRequest; // 1682
} /* size: 12, variables: 1 */

// <0238B052> resourcesystem/resourcesystem.cpp:1687
// variables: 2
// function calls: 8
void CResourceSystem::GetActiveManifestState(bool* pOutHasImmediateWork, bool* pOutHasIOPending)
{
	CUtlLinkedList<CResourceManifest::Count(); // 1691
	{
		short unsigned int i; // 1694
		CUtlLinkedList<CResourceManifest::Head(); // 1694
		{
			CResourceManifest* pManifest; // 1696
			CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
					short unsigned int i);  // 500
			CUtlLinkedList<CResourceManifest::operator[](
					short unsigned int i);  // 1696
		}
		CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
				short unsigned int i);  // 368
		CUtlLinkedList<CResourceManifest::InternalElement(
				short unsigned int i);  // 550
		CUtlLinkedList<CResourceManifest::Next(
			short unsigned int i);  // 1694
	}
	CResourceSystem::GetActiveManifestState(
				bool* pOutHasImmediateWork,
				bool* pOutHasIOPending);  // 1687
} /* size: 145, inline expansions: 2 (88 bytes) */

// <0236A8C9> resourcesystem/resourcesystem.cpp:1687
// variables: 2
void CResourceSystem::GetActiveManifestState(bool* pOutHasImmediateWork, bool* pOutHasIOPending)
{
	{
		short unsigned int i; // 1694
		{
			CResourceManifest* pManifest; // 1696
		}
	}
} /* size: 0 */

// <0238B287> resourcesystem/resourcesystem.cpp:1713
// variable: 1
// function call: 1
void CResourceSystem::IsResourceCurrentlyLoading(ResourceHandle_t hResource)
{
	CLoadingResource* pLoadingResource; // 1715
	CLoadingResource::IsCurrentlyLoading(); // 1719
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0236A896> resourcesystem/resourcesystem.cpp:1713
// variable: 1
void CResourceSystem::IsResourceCurrentlyLoading(ResourceHandle_t hResource)
{
	CLoadingResource* pLoadingResource; // 1715
} /* size: 0, variables: 1 */

// <0236A7E9> resourcesystem/resourcesystem.cpp:1725
// function calls: 2
bool FinalizeLessFunc(CLoadingResource* left, CLoadingResource* right)
{
	CLoadingResource::GetExtRefDepth(); // 1727
	CLoadingResource::GetExtRefDepth(); // 1727
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0238B310> resourcesystem/resourcesystem.cpp:1730
// variables: 5
// function calls: 2
void CResourceSystem::FinalizeOrAdvanceLoadingManifests(int nCount, CResourceManifest** ppManifests)
{
	CUtlVector<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t, CUtlMemory<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t, int> > queuedReloadDeallocates; // 1741
	int nPrevResourceCount; // 1743
	LoadingResourceTable_t finalizingResources; // 1744
	int nFinalizeCount; // 1782
	CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> > statusChanges; // 1786
	CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >* pStatusChanges; // 1787
	CResourceSystem::IsDebugModeEnabled(
				ResourceSystemDebugMode_t mode);  // 1732
} /* size: 0, variables: 6, inline expansions: 1 (0 bytes) */

// <02387CD8> resourcesystem/resourcesystem.cpp:1730
// variables: 31
// function calls: 150
void CResourceSystem::FinalizeOrAdvanceLoadingManifests(int nCount, CResourceManifest** ppManifests)
{
	CUtlVector<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t, CUtlMemory<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t, int> > queuedReloadDeallocates; // 1741
	int nPrevResourceCount; // 1743
	LoadingResourceTable_t finalizingResources; // 1744
	int nFinalizeCount; // 1782
	CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> > statusChanges; // 1786
	CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >* pStatusChanges; // 1787
	{
		int i; // 882
		CUtlHashtableEntry<CLoadingResource::MarkInvalid(); // 884
		CUtlMemory<CUtlHashtableEntry<CLoadingResource::Count(); // 882
		CUtlMemory<CUtlHashtableEntry<CLoadingResource::operator[](
				int i);  // 884
	}
	CUtlHashtable<CLoadingResource::Init(); // 178
	AlignedByteArrayExplicit_t<256, CUtlHashtableEntry<CLoadingResource::Base(); // 231
	CUtlMemoryFixedGrowable<CUtlHashtableEntry<CLoadingResource::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 178
	CUtlHashtable<CLoadingResource::CUtlHashtable(
			int minimumSize);  // 44
	CUtlMemory<CLoadingResource::CUtlMemory(
			CLoadingResource** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CLoadingResource::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CLoadingResource::CUtlMemoryFixedGrowable_Base(
					CLoadingResource** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<256, CLoadingResource::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<256, CLoadingResource::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<256, CLoadingResource::Base(); // 231
	CUtlMemoryFixedGrowable<CLoadingResource::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CLoadingResource::ResetDbgInfo(); // 530
	CUtlVectorBase<CLoadingResource::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CLoadingResource::CUtlVectorFixedGrowable(
				int growSize);  // 44
	LoadingResourceTable_t::LoadingResourceTable_t(); // 1744
	{
		int m; // 1745
		{
			CResourceManifest* pManifest; // 1747
			int nLoadingCount; // 1752
			{
				int i; // 1753
				{
					CLoadingResource* pLoadingResource; // 1755
					int nNewResourceCount; // 1762
					CUtlVectorBase<CLoadingResource::Count(); // 1762
					{
						int j; // 1764
						{
							CLoadingResource* pFinalizingResource; // 1766
							CUtlMemory<CLoadingResource::operator[](
									int i);  // 588
							CUtlVectorBase<CLoadingResource::operator[](
									int i);  // 1766
							CLoadingResource::GetOldAllocationToDelete(); // 1767
							{
								QueuedReloadDeallocate_t dealloc; // 1769
								CLoadingResource::GetResource(); // 1770
								CUtlMemory<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::operator[](
										int i);  // 602
								CUtlVectorBase<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::Element(
									int i);  // 1201
								CopyConstruct<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t>(QueuedReloadDeallocate_t* pMemory,
																const QueuedReloadDeallocate_t& src); // 1201
								CUtlMemory<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::Grow(
									int num);  // 806
								CUtlVectorBase<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::AddToTail(
										const QueuedReloadDeallocate_t& src);  // 1773
								CLoadingResource::GetOldAllocationType(); // 1772
							}
						}
					}
				}
			}
		}
	}
	CUtlVectorBase<CLoadingResource::Count(); // 1782
	CUtlMemory<CLoadingResource::Base(); // 112
	CUtlVectorBase<CLoadingResource::Base(); // 1783
	_Iter_comp_iter<bool (::_Iter_comp_iter(
			bool (*__comp)(CLoadingResource *, CLoadingResource *));  // 412
	{
		_ValueType __value; // 355
		_Iter_comp_iter<bool (::operator(
									CLoadingResource** __it1,
									CLoadingResource** __it2);  // 232
		_Iter_comp_val<bool (::_Iter_comp_val(
				_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)>& __comp);  // 246
		_Iter_comp_val<bool (::operator(
									CLoadingResource** __it,
									CLoadingResource *& __val);  // 140
		__push_heap<CLoadingResource**, long int, CLoadingResource*, __gnu_cxx::__ops::_Iter_comp_val<bool (*)(CLoadingResource*, CLoadingResource*)> >(CLoadingResource** __first,
																long int __holeIndex,
																long int __topIndex,
																CLoadingResource* __value,
																_Iter_comp_val<bool (*)(CLoadingResource*, CLoadingResource*)>& __comp); // 247
		__adjust_heap<CLoadingResource**, long int, CLoadingResource*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)> >(CLoadingResource** __first,
																long int __holeIndex,
																long int __len,
																CLoadingResource* __value,
																_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)> __comp); // 356
	}
	__make_heap<CLoadingResource**, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)> >(CLoadingResource** __first,
																CLoadingResource** __last,
																_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)>& __comp); // 413
	make_heap<CLoadingResource**, bool (*)(CLoadingResource*, CLoadingResource*)>(CLoadingResource** __first,
											CLoadingResource** __last,
											bool (*__comp)(CLoadingResource *, CLoadingResource *)); // 1783
	CUtlMemory<CLoadingResource::Base(); // 112
	CUtlVectorBase<CLoadingResource::Base(); // 1784
	_Iter_comp_iter<bool (::_Iter_comp_iter(
			bool (*__comp)(CLoadingResource *, CLoadingResource *));  // 479
	_Iter_comp_iter<bool (::operator(
								CLoadingResource** __it1,
								CLoadingResource** __it2);  // 232
	_Iter_comp_val<bool (::_Iter_comp_val(
			_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)>& __comp);  // 246
	_Iter_comp_val<bool (::operator(
								CLoadingResource** __it,
								CLoadingResource *& __val);  // 140
	__push_heap<CLoadingResource**, long int, CLoadingResource*, __gnu_cxx::__ops::_Iter_comp_val<bool (*)(CLoadingResource*, CLoadingResource*)> >(CLoadingResource** __first,
																long int __holeIndex,
																long int __topIndex,
																CLoadingResource* __value,
																_Iter_comp_val<bool (*)(CLoadingResource*, CLoadingResource*)>& __comp); // 247
	__adjust_heap<CLoadingResource**, long int, CLoadingResource*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)> >(CLoadingResource** __first,
																long int __holeIndex,
																long int __len,
																CLoadingResource* __value,
																_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)> __comp); // 264
	__pop_heap<CLoadingResource**, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)> >(CLoadingResource** __first,
																CLoadingResource** __last,
																CLoadingResource** __result,
																_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)>& __comp); // 425
	__sort_heap<CLoadingResource**, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)> >(CLoadingResource** __first,
																CLoadingResource** __last,
																_Iter_comp_iter<bool (*)(CLoadingResource*, CLoadingResource*)>& __comp); // 480
	sort_heap<CLoadingResource**, bool (*)(CLoadingResource*, CLoadingResource*)>(CLoadingResource** __first,
											CLoadingResource** __last,
											bool (*__comp)(CLoadingResource *, CLoadingResource *)); // 1784
	CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<ResourceStatusChange_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ResourceStatusChange_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::CUtlVector(); // 1786
	{
		int i; // 1794
		CUtlMemory<CLoadingResource::operator[](
				int i);  // 588
		CUtlVectorBase<CLoadingResource::operator[](
				int i);  // 1796
	}
	{
		IToolsResourceListener* pListener; // 1801
		CUtlVector<IToolsResourceListener*, CUtlMemory<IToolsResourceListener*, int> >& __for_range; // 15987
		iterator __for_begin; // 15998
		iterator __for_end; // 16009
		CUtlMemory<IToolsResourceListener::Base(); // 112
		CUtlVectorBase<IToolsResourceListener::Base(); // 102
		CUtlVectorBase<IToolsResourceListener::begin(); // 1801
		CUtlVectorBase<IToolsResourceListener::Count(); // 104
		CUtlVectorBase<IToolsResourceListener::end(); // 1801
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::Count(); // 1803
		CUtlMemory<ResourceStatusChange_t, int>::Base(); // 112
		CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::Base(); // 1803
	}
	{
		int m; // 1808
		{
			CResourceManifest* pManifest; // 1810
		}
	}
	{
		int iQueuedDealloc; // 1823
		{
			const QueuedReloadDeallocate_t& queuedDealloc; // 1825
			ResourceHandle_t hResource; // 1826
			const ResourceTypeRegistration_t* pReg; // 1828
			CResourceDeallocatorUtils deallocUtils; // 1835
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
						ResourceTypeIndex_t nTypeIndex);  // 1828
			IResourceDeallocatorUtils::IResourceDeallocatorUtils(); // 20
			CResourceDeallocatorUtils::CResourceDeallocatorUtils(
							ResourceHandle_t hResource,
							bool bIsQueuedReloadDeallocate,
							ResourceDeallocationType_t nDeallocationType);  // 1835
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 1831
			CResourceName::Get(); // 1831
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 1831
		}
	}
	CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ResourceStatusChange_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceStatusChange_t, int>::Purge(); // 903
	CUtlMemory<ResourceStatusChange_t, int>::Purge(); // 1799
	CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::Purge(); // 560
	ValidateAlignment<ResourceStatusChange_t>(void); // 508
	CUtlMemory<ResourceStatusChange_t, int>::Purge(); // 510
	CUtlMemory<ResourceStatusChange_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::~CUtlVector(); // 1841
	CUtlVectorBase<CLoadingResource::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<256, CLoadingResource::Base(); // 237
	CUtlMemory<CLoadingResource::IsExternallyAllocated(); // 577
	CUtlMemory<CLoadingResource::ConvertToExternalMemory(
				CLoadingResource** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CLoadingResource::Purge_FixedGrowable(
				CLoadingResource** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CLoadingResource::Purge_FixedGrowable(
				CLoadingResource** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CLoadingResource::Purge(
		int numElements);  // 1799
	CUtlMemory<CLoadingResource::Base(); // 112
	CUtlVectorBase<CLoadingResource::Base(); // 368
	CUtlVectorBase<CLoadingResource::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLoadingResource::Purge(); // 560
	ValidateAlignment<CLoadingResource*>(void); // 508
	CUtlMemory<CLoadingResource::Purge(); // 903
	CUtlMemory<CLoadingResource::Purge(); // 510
	CUtlMemory<CLoadingResource::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CLoadingResource::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CLoadingResource::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CLoadingResource::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CLoadingResource::~CUtlVectorFixedGrowable(); // 44
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CLoadingResource::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<CLoadingResource::Count(); // 897
			CUtlHashtableEntry<CLoadingResource::IsValid(); // 899
			CUtlHashtableEntry<CLoadingResource::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CLoadingResource*, empty_t> >(CUtlKeyValuePair<CLoadingResource*, empty_t>* pMemory); // 902
		}
	}
	CUtlHashtable<CLoadingResource::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<CLoadingResource*, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CLoadingResource::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CLoadingResource::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CLoadingResource::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CLoadingResource::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CUtlHashtableEntry<CLoadingResource::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CUtlHashtableEntry<CLoadingResource::~CUtlMemoryFixedGrowable(); // 188
	CUtlHashtable<CLoadingResource::~CUtlHashtable(); // 44
	LoadingResourceTable_t::~LoadingResourceTable_t(); // 1841
	CUtlMemory<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::Purge()::QueuedReloadDeallocate_t, this); // 903
	CUtlMemory<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::Purge()::QueuedReloadDeallocate_t, this); // 1799
	CUtlVectorBase<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::Purge()::QueuedReloadDeallocate this); // 560
	CUtlVectorBase<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::~CUtlVectorBase()::QueuedReloadDeallocate this); // 410
	CUtlVector<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::~CUtlVector()::QueuedReloadDeallocate_t, this); // 1841
	CUtlMemory<ResourceStatusChange_t, int>::IsGrowable(); // 881
	CUtlMemory<ResourceStatusChange_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<ResourceStatusChange_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >::EnsureCapacity(
			int num);  // 1791
	CUtlMemory<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest::CUtlVector()::QueuedReloadDeallocate_t, this); // 1741
} /* size: 0, variables: 6, inline expansions: 89 (5244 bytes) */

// <0236A4F4> resourcesystem/resourcesystem.cpp:1730
// variables: 26
// function call: 1
void CResourceSystem::FinalizeOrAdvanceLoadingManifests(int nCount, CResourceManifest** ppManifests)
{
	CUtlVector<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t, CUtlMemory<CResourceSystem::FinalizeOrAdvanceLoadingManifests(int, CResourceManifest**)::QueuedReloadDeallocate_t, int> > queuedReloadDeallocates; // 1741
	int nPrevResourceCount; // 1743
	LoadingResourceTable_t finalizingResources; // 1744
	int nFinalizeCount; // 1782
	CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> > statusChanges; // 1786
	CUtlVector<ResourceStatusChange_t, CUtlMemory<ResourceStatusChange_t, int> >* pStatusChanges; // 1787
	{
		int m; // 1745
		{
			CResourceManifest* pManifest; // 1747
			int nLoadingCount; // 1752
			{
				int i; // 1753
				{
					CLoadingResource* pLoadingResource; // 1755
					int nNewResourceCount; // 1762
					{
						int j; // 1764
						{
							CLoadingResource* pFinalizingResource; // 1766
							{
								QueuedReloadDeallocate_t dealloc; // 1769
							}
						}
					}
				}
			}
		}
	}
	{
		int i; // 1794
	}
	{
		IToolsResourceListener* pListener; // 1801
		CUtlVector<IToolsResourceListener*, CUtlMemory<IToolsResourceListener*, int> >& __for_range; // 52375
		iterator __for_begin; // 51186
		iterator __for_end; // 51186
	}
	{
		int m; // 1808
		{
			CResourceManifest* pManifest; // 1810
		}
	}
	{
		int iQueuedDealloc; // 1823
		{
			const QueuedReloadDeallocate_t& queuedDealloc; // 1825
			ResourceHandle_t hResource; // 1826
			const ResourceTypeRegistration_t* pReg; // 1828
			CResourceDeallocatorUtils deallocUtils; // 1835
		}
	}
} /* size: 0, variables: 6 */

// <0236A292> resourcesystem/resourcesystem.cpp:1847
// variables: 2
// function calls: 6
void CResourceSystem::GetManifestToStartLoading(CResourceManifest** ppOutPendingManifest)
{
	bool bTryAnotherManifest; // 1853
	{
		CResourceManifest* pManifest; // 1863
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<CResourceManifest::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<CResourceManifest::PopItem(
			CResourceManifest** pResult);  // 1860
	}
} /* size: 277, variables: 1 */

// <02369331> resourcesystem/resourcesystem.cpp:1882
// variables: 10
// function calls: 55
void CResourceSystem::ExecuteResourceManifestRequests(bool bProcessPendingDeletes)
{
	CUtlVectorFixedGrowable<CResourceManifest*, 128> manifestsToHandle; // 1884
	LoadingResourceManifestIndex_t nNext; // 1886
	const char   __FUNCTION__; // 58998
	{
		LoadingResourceManifestIndex_t m; // 1887
		{
			CResourceManifest* pManifest; // 1892
			CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<CResourceManifest::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<CResourceManifest::Next(
				short unsigned int i);  // 1890
			CUtlMemory<CResourceManifest::NumAllocated(); // 1196
			CUtlMemory<CResourceManifest::operator[](
					int i);  // 602
			CUtlVectorBase<CResourceManifest::Element(
				int i);  // 1201
			CopyConstruct<CResourceManifest*>(CResourceManifest** pMemory,
								CResourceManifest* const& src);  // 1201
			CUtlMemory<CResourceManifest::IsGrowable(); // 823
			CUtlMemory<CResourceManifest::IsExternallyAllocated(); // 859
			CUtlMemory<CResourceManifest::IsExternallyAllocated(); // 861
			CUtlMemory<CResourceManifest::Grow(
				int num);  // 806
			CUtlVectorBase<CResourceManifest::ResetDbgInfo(); // 824
			CUtlVectorBase<CResourceManifest::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CResourceManifest::AddToTail(
					CResourceManifest* const& src);  // 1895
		}
		CUtlLinkedList<CResourceManifest::Head(); // 1887
	}
	{
		CResourceManifest* pManifest; // 1920
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1923
		}
		{
			bool bOk; // 1928
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1929
			}
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<CResourceManifest::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<CResourceManifest::PopItem(
			CResourceManifest** pResult);  // 1921
	}
	{
		CResourceManifest* pManifest; // 1937
	}
	CUtlMemory<CResourceManifest::CUtlMemory(
			CResourceManifest** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CResourceManifest::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CResourceManifest::CUtlMemoryFixedGrowable_Base(
					CResourceManifest** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, CResourceManifest::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, CResourceManifest::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, CResourceManifest::Base(); // 231
	CUtlMemoryFixedGrowable<CResourceManifest::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CResourceManifest::ResetDbgInfo(); // 530
	CUtlVectorBase<CResourceManifest::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CResourceManifest::CUtlVectorFixedGrowable(
				int growSize);  // 1884
	CUtlMemory<CResourceManifest::Base(); // 112
	CUtlVectorBase<CResourceManifest::Base(); // 1899
	CUtlVectorBase<CResourceManifest::Count(); // 1899
	CResourceSystem::IsDebugModeEnabled(
				ResourceSystemDebugMode_t mode);  // 1732
	CResourceSystem::FinalizeOrAdvanceLoadingManifests(
						int nCount,
						CResourceManifest** ppManifests);  // 1899
	CUtlVectorBase<CResourceManifest::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, CResourceManifest::Base(); // 237
	CUtlMemory<CResourceManifest::IsExternallyAllocated(); // 577
	CUtlMemory<CResourceManifest::ConvertToExternalMemory(
				CResourceManifest** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CResourceManifest::Purge_FixedGrowable(
				CResourceManifest** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CResourceManifest::Purge_FixedGrowable(
				CResourceManifest** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CResourceManifest::Purge(
		int numElements);  // 1799
	CUtlMemory<CResourceManifest::Base(); // 112
	CUtlVectorBase<CResourceManifest::Base(); // 368
	CUtlVectorBase<CResourceManifest::ResetDbgInfo(); // 1800
	CUtlVectorBase<CResourceManifest::Purge(); // 560
	ValidateAlignment<CResourceManifest*>(void); // 508
	CUtlMemory<CResourceManifest::Purge(); // 903
	CUtlMemory<CResourceManifest::Purge(); // 510
	CUtlMemory<CResourceManifest::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CResourceManifest::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CResourceManifest::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CResourceManifest::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CResourceManifest::~CUtlVectorFixedGrowable(); // 1943
} /* size: 0, variables: 3, inline expansions: 34 (938 bytes) */

// <02369047> resourcesystem/resourcesystem.cpp:1948
// variables: 4
// function calls: 10
void CResourceSystem::SetResourceTypeManifestPriority(ResourceType_t nResourceType, ResourceManifestPriority_t nTypeManifestPriority)
{
	const ResourceTypeRegistration_t* pReg; // 1950
	const char   __FUNCTION__; // 58998
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1951
	}
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
				ResourceType_t nResourceType);  // 1950
} /* size: 0, variables: 2, inline expansions: 6 (414 bytes) */

// <02369019> resourcesystem/resourcesystem.cpp:1957
void CResourceSystem::HasResourceTypeManifestPriorityBeenSet()
{
} /* size: 12 */

// <02368FDB> resourcesystem/resourcesystem.cpp:1965
void CResourceSystem::GetAsyncFileRequestPriority(ResourceManifestLoadPriority_t priority)
{
} /* size: 16 */

// <0238D34E> resourcesystem/resourcesystem.cpp:1976
// function calls: 2
void CResourceSystem::PreShutdown()
{
	CResourceSystem::ImmediatelyProcessAllAsyncRequestsOnShutdown(); // 1988
	CResourceSystem::PreShutdown(); // 1976
} /* size: 174, inline expansions: 2 (71 bytes) */

// <02368FC2> resourcesystem/resourcesystem.cpp:1976
void CResourceSystem::PreShutdown()
{
} /* size: 0 */

// <0238D2FA> resourcesystem/resourcesystem.cpp:1996
// variables: 3
void CResourceSystem::ImmediatelyProcessAllAsyncRequestsOnShutdown()
{
	CResourceManifest* pManifest; // 2002
	float64 flStartTime; // 2014
	bool bStillProcessing; // 2016
} /* size: 0, variables: 3 */

// <0238CE21> resourcesystem/resourcesystem.cpp:1996
// variables: 4
// function calls: 16
void CResourceSystem::ImmediatelyProcessAllAsyncRequestsOnShutdown()
{
	CResourceManifest* pManifest; // 2002
	float64 flStartTime; // 2014
	bool bStillProcessing; // 2016
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CResourceManifest::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CResourceManifest::PopItem(
		CResourceManifest** pResult);  // 2003
	CResourceSystem::Update_Internal_FastSpin(); // 2019
	CInterlockedIntT<int, 4>::operator int(); // 2020
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CResourceManifest::Count(); // 2021
	{
		short unsigned int i; // 2023
		CUtlLinkedList<CResourceManifest::Head(); // 2023
		CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
				short unsigned int i);  // 494
		CUtlLinkedList<CResourceManifest::operator[](
				short unsigned int i);  // 2028
		CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
				short unsigned int i);  // 368
		CUtlLinkedList<CResourceManifest::InternalElement(
				short unsigned int i);  // 550
		CUtlLinkedList<CResourceManifest::Next(
			short unsigned int i);  // 2023
	}
} /* size: 415, variables: 3, inline expansions: 10 (343 bytes) */

// <02368F75> resourcesystem/resourcesystem.cpp:1996
// variables: 4
void CResourceSystem::ImmediatelyProcessAllAsyncRequestsOnShutdown()
{
	CResourceManifest* pManifest; // 2002
	float64 flStartTime; // 2014
	bool bStillProcessing; // 2016
	{
		short unsigned int i; // 2023
	}
} /* size: 0, variables: 3 */

// <02368BDD> resourcesystem/resourcesystem.cpp:2042
// variables: 5
// function calls: 9
void CResourceSystem::LoadResourceManifestGroup(const char* pManifestGroupName, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName, ResourceManifestLoadPriority_t nPriority)
{
	const char   __FUNCTION__; // 58841
	CFmtStr manifestName; // 2045
	const char* pManifestNameWithExt; // 2046
	ResourceManifestCreationInfo_t info; // 2048
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2044
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 2046
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 2048
	CResourceSystem::CreateResourceManifest(
				const ResourceManifestCreationInfo_t& info);  // 2049
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 2050
} /* size: 0, variables: 4, inline expansions: 9 (288 bytes) */

// <02368845> resourcesystem/resourcesystem.cpp:2055
// variables: 5
// function calls: 9
void CResourceSystem::LoadResourceManifestNamed(const char* pManifestName, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName, ResourceManifestLoadPriority_t nPriority)
{
	const char   __FUNCTION__; // 58841
	CFmtStr manifestName; // 2058
	const char* pManifestNameWithExt; // 2059
	ResourceManifestCreationInfo_t info; // 2061
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2057
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 80
	CFmtStrN<256>::Get(); // 2059
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 2061
	CResourceSystem::CreateResourceManifest(
				const ResourceManifestCreationInfo_t& info);  // 2062
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 2063
} /* size: 0, variables: 4, inline expansions: 9 (288 bytes) */

// <02368466> resourcesystem/resourcesystem.cpp:2068
// variables: 2
// function calls: 7
void CResourceSystem::LoadResourceManifestFile(const char* pFileName, ResourceManifestLoadBehavior_t nLoadBehavior, const char* pDebugName, ResourceManifestLoadPriority_t nPriority)
{
	CStackAnnotation<char const*, void, void, void, void, void, void, void, void> manifestAnnotation; // 2070
	ResourceManifestCreationInfo_t info; // 2071
	CStackAnnotationVariableHandler<char::CStackAnnotationVariableHandler(
					ConstructorVarType var);  // 102
	CStackAnnotationVariableHandler<char const::CStackAnnotationVariableHandler(
					ConstructorVarType var);  // 625
	CStackAnnotation<char const::CStackAnnotation(
			const char* pVarDescA,
			ConstructorVarType VarA,
			const CCallStackMarkerBase& marker);  // 2070
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 2070
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 2071
	CResourceSystem::CreateResourceManifest(
				const ResourceManifestCreationInfo_t& info);  // 2072
	CStackAnnotation<char const::~CStackAnnotation(); // 2073
} /* size: 314, variables: 2, inline expansions: 7 (195 bytes) */

// <0238C1D4> resourcesystem/resourcesystem.cpp:2078
void CResourceSystem::CreateResourceManifest(const ResourceManifestCreationInfo_t& info)
{
} /* size: 14 */

// <0236809F> resourcesystem/resourcesystem.cpp:2086
// variables: 5
// function calls: 6
void CResourceSystem::CreateResourceManifestInternal(const ResourceManifestCreationInfo_t& info, bool bImmediatelyBeginLoading)
{
	CStackAnnotation<char const*, void, void, void, void, void, void, void, void> debugNameAnnotation; // 2088
	ResourceManifestType_t nType; // 2097
	ResourceManifestLoadPriority_t nPriority; // 2098
	bool bLoadStreamingData; // 2117
	CResourceManifest* pManifest; // 2118
	CStackAnnotationVariableHandler<char::CStackAnnotationVariableHandler(
					ConstructorVarType var);  // 102
	CStackAnnotationVariableHandler<char const::CStackAnnotationVariableHandler(
					ConstructorVarType var);  // 625
	CStackAnnotation<char const::CStackAnnotation(
			const char* pVarDescA,
			ConstructorVarType VarA,
			const CCallStackMarkerBase& marker);  // 2088
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 2088
	CResourceSystem::SetManifestCompletionCallback(
					HResourceManifest hManifest,
					ResourceManifestLoadCompletionCallback_t callback,
					void* pContext);  // 2124
	CStackAnnotation<char const::~CStackAnnotation(); // 2139
} /* size: 537, variables: 5, inline expansions: 6 (95 bytes) */

// <02367FB7> resourcesystem/resourcesystem.cpp:2144
// function call: 1
void CResourceSystem::EnqueueResourceManifest(CResourceManifest* pManifest)
{
	{
	}
	CResourceManifest::GetPriority(); // 2146
} /* size: 0, inline expansions: 1 (53 bytes) */

// <02367F79> resourcesystem/resourcesystem.cpp:2171
void CResourceSystem::NotifyResourceManifestDeleted(CResourceManifest* pManifest)
{
} /* size: 28 */

// <02367E2E> resourcesystem/resourcesystem.cpp:2184
// variables: 3
// function call: 1
void CResourceSystem::DestroyResourceManifest(HResourceManifest hManifest)
{
	CResourceManifest* pManifest; // 2187
	const char   __FUNCTION__; // 58787
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2201
	}
	CResourceSystem::ImmediatelyProcessAllAsyncRequestsOnShutdown(); // 2210
} /* size: 0, variables: 2, inline expansions: 1 (34 bytes) */

// <023854C9> resourcesystem/resourcesystem.cpp:2217
// variable: 1
void CResourceSystem::SetManifestCompletionCallback(HResourceManifest hManifest, ResourceManifestLoadCompletionCallback_t callback, void* pContext)
{
	CResourceManifest* pManifest; // 2222
} /* size: 33, variables: 1 */

// <02367D6D> resourcesystem/resourcesystem.cpp:2229
// variable: 1
void CResourceSystem::GetResourceManifestDebugName(HResourceManifest hManifest)
{
	CResourceManifest* pManifest; // 2234
} /* size: 32, variables: 1 */

// <02367CEB> resourcesystem/resourcesystem.cpp:2241
void CResourceSystem::GetResourcesNamesInManifest(HResourceManifest hManifest, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list)
{
} /* size: 17 */

// <02367323> resourcesystem/resourcesystem.cpp:2252
// variables: 6
// function calls: 40
void CResourceSystem::GetResourcesNamesInManifestInternal(const CResourceManifest* pManifest, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list)
{
	CPathBufferString buf; // 2254
	int nCount; // 2255
	const CResourceManifest* pFence; // 2266
	{
		int i; // 2256
		{
			const ResourceHandle_t& hResource; // 2258
			int index; // 2261
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 143
			CUtlSymbolLarge::String(); // 148
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 148
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CBufferString* pOutBuffer,
					bool bAppend);  // 172
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 143
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CBufferString* pOutBuffer,
					bool bAppend);  // 168
			ResourceGetName(ResourceHandle_t hResource,
					CBufferString* pOutBuffer,
					bool bAppend);  // 164
			ResourceGetName(ResourceHandle_t hResource,
					CBufferString* pOutBuffer,
					bool bAppend);  // 2259
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CUtlString, int>::IsGrowable(); // 823
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CUtlString, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1148
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 2261
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 2262
			CBufferStringN<200>::Purge(); // 2263
			CUtlMemory<CStrongHandleVoid, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
					int i);  // 240
			CStrongHandle<ResourceBindingVoid_t>::operator ResourceHandle_t(); // 240
			CResourceManifest::GetRootResource(
					int nIndex);  // 2258
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2254
	CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Count(); // 235
	CResourceManifest::GetRootResourceCount(); // 2255
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2271
} /* size: 717, variables: 3, inline expansions: 7 (74 bytes) */

// <0238CD92> resourcesystem/resourcesystem.cpp:2277
// variable: 1
// function call: 1
void CResourceSystem::MN_PotentiallyDeleteResource(ResourceHandle_t h)
{
	ResourceHandleWritable_t hResource; // 2279
	CInterlockedIntT<int, 4>::operator int(); // 2284
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0238C94C> resourcesystem/resourcesystem.cpp:2277
// variables: 5
// function calls: 14
void CResourceSystem::MN_PotentiallyDeleteResource(ResourceHandle_t h)
{
	ResourceHandleWritable_t hResource; // 2279
	{
		ResourceId_t nId; // 2290
		GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 503
		ResourceId_t::ResourceId_t(
				uint64 value);  // 503
		CResourceSystem::ResourceHandleToResourceId(
						ResourceHandle_t hResource);  // 489
		CResourceSystem::ResourceHandleToResourceId(
						ResourceHandle_t hResource);  // 2290
		Plat_IsInDebugSession(void); // 131
		DebugResourceId(ResourceId_t nId); // 123
		DebugResourceId(ResourceId_t nId); // 2291
	}
	{
		CResourceBindingReferenceTrackingData* pTrackingStruct; // 849
		CResourceBindingReferenceTrackingData::~CResourceBindingReferenceTrackingData(); // 1526
		Destruct<CResourceBindingReferenceTrackingData>(CResourceBindingReferenceTrackingData* pMemory); // 850
	}
	FreeResourceNameImp(bool bTrackLeaks,
				const ResourceNameHandle_t& hName);  // 873
	CResourceSystem::FreeResourceName(
			ResourceHandleWritable_t hResource);  // 2298
	{
		UtlTSHashHandle_t nIndex; // 2302
		GetID(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this,
			UtlTSHashHandle_t hHash);  // 183
		Remove(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
			UtlTSHashHandle_t hHash);  // 2303
	}
	{
		UtlTSHashHandle_t nIndex; // 2307
		Remove(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
			UtlTSHashHandle_t hHash);  // 2308
	}
} /* size: 329, variables: 1, inline expansions: 2 (152 bytes) */

// <023672BD> resourcesystem/resourcesystem.cpp:2277
// variables: 4
void CResourceSystem::MN_PotentiallyDeleteResource(ResourceHandle_t h)
{
	ResourceHandleWritable_t hResource; // 2279
	{
		ResourceId_t nId; // 2290
	}
	{
		UtlTSHashHandle_t nIndex; // 2302
	}
	{
		UtlTSHashHandle_t nIndex; // 2307
	}
} /* size: 0, variables: 1 */

// <023663DD> resourcesystem/resourcesystem.cpp:2318
// variables: 6
// function calls: 61
void CResourceSystem::MN_DeleteRequestedResources()
{
	{
		ResourceHandle_t h; // 2323
		CUtlVectorFixedGrowable<const ResourceBindingBase_t*, 32> list; // 2324
		int nCount; // 2340
		{
			ResourceHandleWritable_t hResource; // 2329
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 2334
			CUtlMemory<const ResourceBindingBase_t::NumAllocated(); // 1196
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 602
			CUtlVectorBase<const ResourceBindingBase_t::Element(
				int i);  // 1201
			CopyConstruct<const ResourceBindingBase_t*>(const ResourceBindingBase_t ** pMemory,
									const ResourceBindingBase_t* const& src);  // 1201
			CUtlMemory<const ResourceBindingBase_t::Base(); // 112
			CUtlVectorBase<const ResourceBindingBase_t::Base(); // 368
			CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 824
			CUtlVectorBase<const ResourceBindingBase_t::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const ResourceBindingBase_t::AddToTail(
					const ResourceBindingBase_t* const& src);  // 2335
			CInterlockedIntT<int, 4>::GetRaw(); // 2334
			CResourceName::Get(); // 2334
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 2334
		}
		{
			int i; // 2341
			{
				ResourceHandle_t hResourceToDelete; // 2343
				CUtlMemory<const ResourceBindingBase_t::operator[](
						int i);  // 588
				CUtlVectorBase<const ResourceBindingBase_t::operator[](
						int i);  // 2343
				CInterlockedIntT<int, 4>::operator int(); // 2284
				CResourceSystem::MN_PotentiallyDeleteResource(
								ResourceHandle_t h);  // 2344
			}
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<const ResourceBindingBase_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<const ResourceBindingBase_t::PopItem(
			const ResourceBindingBase_t ** pResult);  // 2327
		CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
				const ResourceBindingBase_t ** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<const ResourceBindingBase_t::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<const ResourceBindingBase_t::CUtlMemoryFixedGrowable_Base(
						const ResourceBindingBase_t ** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<32, const ResourceBindingBase_t::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t::Base(); // 231
		CUtlMemoryFixedGrowable<const ResourceBindingBase_t::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
		CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<const ResourceBindingBase_t::CUtlVectorFixedGrowable(
					int growSize);  // 2324
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 2340
		CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<32, const ResourceBindingBase_t::Base(); // 237
		CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 577
		CUtlMemory<const ResourceBindingBase_t::ConvertToExternalMemory(
					const ResourceBindingBase_t ** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<const ResourceBindingBase_t::Purge_FixedGrowable(
					const ResourceBindingBase_t ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<const ResourceBindingBase_t::Purge_FixedGrowable(
					const ResourceBindingBase_t ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<const ResourceBindingBase_t::Purge(
			int numElements);  // 1799
		CUtlMemory<const ResourceBindingBase_t::Base(); // 112
		CUtlVectorBase<const ResourceBindingBase_t::Base(); // 368
		CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 1800
		CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
		ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
		CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
		CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
		CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<const ResourceBindingBase_t::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<const ResourceBindingBase_t::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<const ResourceBindingBase_t::~CUtlVectorFixedGrowable(); // 2346
	}
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<const ResourceBindingBase_t::Count(); // 2346
} /* size: 836, inline expansions: 2 (14 bytes) */

// <0238C169> resourcesystem/resourcesystem.cpp:2353
// variables: 3
void CResourceSystem::MN_UpdateErrorResources(bool bUpdateImmediately)
{
	UtlTSHashHandle_t pHandles; // 2367
	int nTotal; // 2368
	int nCurr; // 2369
} /* size: 0, variables: 3 */

// <0238BC56> resourcesystem/resourcesystem.cpp:2353
// variables: 7
// function calls: 15
void CResourceSystem::MN_UpdateErrorResources(bool bUpdateImmediately)
{
	UtlTSHashHandle_t pHandles; // 2367
	int nTotal; // 2368
	int nCurr; // 2369
	{
		int i; // 2361
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 2361
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 2363
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 2363
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 2368
	{
		int nCount; // 2372
		{
			int i; // 2373
			{
				ResourceData_t* pResourceData; // 2375
				operator[](const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned  this,
						UtlTSHashHandle_t hHash);  // 2375
				CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(
						short int nVal);  // 1093
				CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 1096
				{
				}
				CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
						int i);  // 1097
				CResourceSystem::GetRegistrationForType(
							ResourceTypeIndex_t nTypeIndex);  // 551
				CResourceSystem::GetErrorResourceData(
							ResourceTypeIndex_t nTypeIndex);  // 2379
			}
		}
	}
} /* size: 0, variables: 3, inline expansions: 3 (21 bytes) */

// <02366342> resourcesystem/resourcesystem.cpp:2353
// variables: 7
void CResourceSystem::MN_UpdateErrorResources(bool bUpdateImmediately)
{
	UtlTSHashHandle_t pHandles; // 2367
	int nTotal; // 2368
	int nCurr; // 2369
	{
		int i; // 2361
	}
	{
		int nCount; // 2372
		{
			int i; // 2373
			{
				ResourceData_t* pResourceData; // 2375
			}
		}
	}
} /* size: 0, variables: 3 */

// <023662EF> resourcesystem/resourcesystem.cpp:2385
void CResourceSystem::MarkResourceNeedingFinalization(ResourceHandleWritable_t hResource, bool bNeedsFixup)
{
} /* size: 28 */

// <02366263> resourcesystem/resourcesystem.cpp:2399
void CResourceSystem::Update(int nMaxTimeNS, ResourceSystemUpdateMode_t nUpdateMode)
{
} /* size: 20 */

// <02366201> resourcesystem/resourcesystem.cpp:2407
void CResourceSystem::UpdateSimple()
{
} /* size: 27 */

// <02365D4C> resourcesystem/resourcesystem.cpp:2415
// variables: 3
// function calls: 17
void CResourceSystem::FrameUpdateForTypeManager(int nTypeIndex, int nFinishedFrameCount)
{
	int s_nTypeManUpdate; // 2417
	CRelativeTickTimer managerUpdateTimer; // 2425
	uint64 nUpdateLimit; // 2427
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 2418
	CRelativeTickCount::Init(); // 547
	CRelativeTickCount::CRelativeTickCount(); // 613
	CRelativeTickTimer::CRelativeTickTimer(); // 2425
	CRelativeTickCount::Sample(); // 618
	CRelativeTickTimer::Start(); // 2426
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 2430
	CRelativeTickTimer::End(); // 2433
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 2436
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 2439
	CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
			int i);  // 2443
	CRelativeTickCount::GetMillisecondsF(); // 2443
} /* size: 334, variables: 3, inline expansions: 17 (79 bytes) */

// <02365D09> resourcesystem/resourcesystem.cpp:2453
void CResourceSystem::HasCompletedIORequests()
{
} /* size: 9 */

// <0236531A> resourcesystem/resourcesystem.cpp:2462
// variables: 29
// function calls: 19
void CResourceSystem::Update_Internal(int nMaxTimeNS, ResourceSystemUpdateMode_t nUpdateMode, bool bDoFrameBoundaryWork, bool bDoPendingDeletes)
{
	const char   __FUNCTION__; // 58586
	float64 flUpdateStarted; // 2488
	float64 flLastSampledTime; // 2489
	float64 flStopUpdatingAtTime; // 2490
	int nFinishedFrameCount; // 2497
	bool bKeepUpdating; // 2498
	float64 flNextTypeManagerFrameUpdate; // 2499
	float64 flFrameLength; // 2634
	int nFrameLengthNS; // 2636
	const int  ALLOWED_SLOP_NS; // 2638
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2467
	}
	{
		int* _pCrash; // 2482
	}
	{
		int nProcessedRequests; // 2503
		float64 flTimeRemaining; // 2532
		bool bPastStopTime; // 2533
		{
			int i; // 2519
			CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 2519
		}
		{
			bool bHasImmediateWork; // 2541
			bool bHasIOPending; // 2542
			{
				int nMSToBurn; // 2558
				Max<int>(const int& val1,
					const int& val2);  // 2563
			}
			{
				Scope s; // 2585
				int nsToBurn; // 2587
				Scope::Scope(
					const char* name,
					const char* data,
					uint32 color);  // 2585
			}
			{
				Scope s; // 2594
				int nsToBurn; // 2597
				Scope::Scope(
					const char* name,
					const char* data,
					uint32 color);  // 2594
				Scope::~Scope(); // 2609
			}
		}
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 2482
	CUtlVectorBase<unsigned int::Count(); // 2725
	{
		int i; // 2726
		CUtlMemory<unsigned int::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int::operator[](
				int i);  // 2728
	}
	CResourceSystem::ComputeFinishedFrameCount(); // 2497
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	Commit(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 579
	Commit(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 2614
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	Commit(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 579
	Commit(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned this); // 2615
	CResourceSystem::MN_UpdateErrorResources(
				bool bUpdateImmediately);  // 2622
	CUtlVectorBase<unsigned int::Count(); // 2739
	{
		int i; // 2740
		CUtlMemory<unsigned int::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int::operator[](
				int i);  // 2742
	}
	CResourceSystem::UpdateFrameCounters(); // 2628
} /* size: 0, variables: 10, inline expansions: 10 (513 bytes) */

// <02365171> resourcesystem/resourcesystem.cpp:2648
// function calls: 7
void CResourceSystem::HasPendingWork()
{
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CResourceManifest::Count(); // 2650
	CUtlLinkedList<CResourceManifest::Count(); // 2656
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CResourceManifest::Count(); // 2659
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<const ResourceBindingBase_t::Count(); // 2662
} /* size: 95, inline expansions: 7 (36 bytes) */

// <0238DF1F> resourcesystem/resourcesystem.cpp:2672
// function calls: 9
void CResourceSystem::RegisterResourceSystemUser(uint32* pFrameCounter)
{
	CUtlMemory<unsigned int::NumAllocated(); // 1196
	CUtlMemory<unsigned int::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int::Element(
		int i);  // 1201
	CopyConstruct<unsigned int*>(unsigned int** pMemory,
					unsigned int* const& src);  // 1201
	CUtlMemory<unsigned int::Base(); // 112
	CUtlVectorBase<unsigned int::Base(); // 368
	CUtlVectorBase<unsigned int::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int::AddToTail(
			unsigned int* const& src);  // 2674
} /* size: 128, inline expansions: 9 (193 bytes) */

// <0236514B> resourcesystem/resourcesystem.cpp:2672
void CResourceSystem::RegisterResourceSystemUser(uint32* pFrameCounter)
{
} /* size: 0 */

// <02385EBE> resourcesystem/resourcesystem.cpp:2681
void CResourceSystem::UnregisterResourceSystemUser(uint32* pFrameCounter)
{
} /* size: 13 */

// <0238524F> resourcesystem/resourcesystem.cpp:2689
void CResourceSystem::RegisterNamedManifest(ResourceManifestDesc_t* pDesc)
{
} /* size: 20 */

// <0238529E> resourcesystem/resourcesystem.cpp:2697
void CResourceSystem::UnregisterNamedManifest(ResourceManifestDesc_t* pDesc)
{
} /* size: 20 */

// <02364EB0> resourcesystem/resourcesystem.cpp:2705
// function calls: 9
void CResourceSystem::RegisterFinishedFrameCounter(uint32* pFrameCounter)
{
	CUtlMemory<unsigned int::NumAllocated(); // 1196
	CUtlMemory<unsigned int::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int::Element(
		int i);  // 1201
	CopyConstruct<unsigned int*>(unsigned int** pMemory,
					unsigned int* const& src);  // 1201
	CUtlMemory<unsigned int::Base(); // 112
	CUtlVectorBase<unsigned int::Base(); // 368
	CUtlVectorBase<unsigned int::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int::AddToTail(
			unsigned int* const& src);  // 2707
} /* size: 126, inline expansions: 9 (201 bytes) */

// <02364E47> resourcesystem/resourcesystem.cpp:2714
void CResourceSystem::UnregisterFinishedFrameCounter(uint32* pFrameCounter)
{
} /* size: 16 */

// <0238B3C8> resourcesystem/resourcesystem.cpp:2722
// variables: 3
// function calls: 3
void CResourceSystem::ComputeFinishedFrameCount()
{
	uint32 nFinishedFrame; // 2724
	int nCount; // 2725
	CUtlVectorBase<unsigned int::Count(); // 2725
	{
		int i; // 2726
		CUtlMemory<unsigned int::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int::operator[](
				int i);  // 2728
	}
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <02364E07> resourcesystem/resourcesystem.cpp:2722
// variables: 3
void CResourceSystem::ComputeFinishedFrameCount()
{
	uint32 nFinishedFrame; // 2724
	int nCount; // 2725
	{
		int i; // 2726
	}
} /* size: 0, variables: 2 */

// <0238B4D4> resourcesystem/resourcesystem.cpp:2737
// variables: 2
// function calls: 3
void CResourceSystem::UpdateFrameCounters()
{
	int nCount; // 2739
	CUtlVectorBase<unsigned int::Count(); // 2739
	{
		int i; // 2740
		CUtlMemory<unsigned int::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int::operator[](
				int i);  // 2742
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <02364DD4> resourcesystem/resourcesystem.cpp:2737
// variables: 2
void CResourceSystem::UpdateFrameCounters()
{
	int nCount; // 2739
	{
		int i; // 2740
	}
} /* size: 0, variables: 1 */

// <02364AB6> resourcesystem/resourcesystem.cpp:2747
// variables: 7
// function calls: 8
void CResourceSystem::RemoveManifestFromPendingLoadQueue(CResourceManifest* pManifest)
{
	bool bFoundManifestToRemove; // 2751
	int nCount; // 2752
	const char   __FUNCTION__; // 59074
	{
		int i; // 2753
		{
			CResourceManifest* pTestManifest; // 2755
			bool bOk; // 2756
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2757
			}
			ThreadPause(void); // 173
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 478
			ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
								const InterlockedPointerX2SizedInt_t& value,
								const InterlockedPointerX2SizedInt_t& comperand);  // 168
			CTSListBase::Push(
				TSLNodeBase_t* pNode);  // 1080
			CTSQueue<CResourceManifest::FreeNode(
				Node_t* pNode);  // 1103
			CTSQueue<CResourceManifest::PopItem(
				CResourceManifest** pResult);  // 2756
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CResourceManifest::Count(); // 2752
} /* size: 0, variables: 3, inline expansions: 2 (44 bytes) */

// <0236464C> resourcesystem/resourcesystem.cpp:2772
// variables: 8
// function calls: 13
void CResourceSystem::BlockingFinishAllCurrentlyLoadingManifests()
{
	const char   __FUNCTION__; // 59270
	bool bHasImmediateWork; // 2783
	bool bHasIOPending; // 2784
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2779
	}
	{
		int i; // 3171
		Count(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem: this); // 3171
		{
			ForcedSynchronizationCallbackInfo_t& callback; // 3173
			CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
					int i);  // 3173
		}
	}
	CResourceSystem::ForceSynchronization(); // 2777
	CUtlLinkedList<CResourceManifest::Count(); // 1691
	{
		short unsigned int i; // 1694
		CUtlLinkedList<CResourceManifest::Head(); // 1694
		{
			CResourceManifest* pManifest; // 1696
			CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
					short unsigned int i);  // 500
			CUtlLinkedList<CResourceManifest::operator[](
					short unsigned int i);  // 1696
		}
		CUtlMemory<UtlLinkedListElem_t<CResourceManifest::operator[](
				short unsigned int i);  // 368
		CUtlLinkedList<CResourceManifest::InternalElement(
				short unsigned int i);  // 550
		CUtlLinkedList<CResourceManifest::Next(
			short unsigned int i);  // 1694
	}
	CResourceSystem::GetActiveManifestState(
				bool* pOutHasImmediateWork,
				bool* pOutHasIOPending);  // 1687
	CResourceSystem::GetActiveManifestState(
				bool* pOutHasImmediateWork,
				bool* pOutHasIOPending);  // 2795
} /* size: 0, variables: 3, inline expansions: 4 (250 bytes) */

// <02363C10> resourcesystem/resourcesystem.cpp:2804
// variables: 19
// function calls: 21
void CResourceSystem::ForceSynchronizationAndBlockUntilManifestLoaded(HResourceManifest hManifest)
{
	const char   __FUNCTION__; // 59385
	CResourceManifest* pManifest; // 2812
	bool bStartLoading; // 2817
	float64 flStartTime1; // 2827
	float64 flStartTime; // 2865
	bool bHasSpewedBlockingInfo; // 2866
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2806
	}
	{
		int* _pCrash; // 2809
	}
	{
		bool bOk; // 2820
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2821
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2822
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2843
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2846
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2880
	}
	{
		int nCount; // 2889
		ResourceHandle_t hResource; // 2890
		float64 flEndTime; // 2891
		CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::Count(); // 235
		CResourceManifest::GetRootResourceCount(); // 2889
		CUtlMemory<CStrongHandleVoid, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> >::operator[](
				int i);  // 240
		CStrongHandle<ResourceBindingVoid_t>::operator ResourceHandle_t(); // 240
		CResourceManifest::GetRootResource(
				int nIndex);  // 2890
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 2892
		CResourceName::Get(); // 2892
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 2892
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 2809
	{
	}
	CResourceManifest::GetType(); // 2834
	{
		int i; // 3171
		Count(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem: this); // 3171
		{
			ForcedSynchronizationCallbackInfo_t& callback; // 3173
			CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
					int i);  // 3173
		}
	}
	CResourceSystem::ForceSynchronization(); // 2840
} /* size: 0, variables: 6, inline expansions: 3 (150 bytes) */

// <02363B7C> resourcesystem/resourcesystem.cpp:2898
// function calls: 2
void CResourceSystem::IsCurrentlyProcessingReloadManifest()
{
	CResourceManifest::IsFinalized(); // 2900
	CResourceManifest::GetType(); // 2900
} /* size: 35, inline expansions: 2 (3 bytes) */

// <02363ABA> resourcesystem/resourcesystem.cpp:2903
// function calls: 2
void CResourceSystem::IsCurrentReloadingResource(ResourceHandle_t hResource)
{
	CResourceManifest::IsFinalized(); // 2905
	CResourceManifest::GetType(); // 2905
} /* size: 37, inline expansions: 2 (3 bytes) */

// <0236376F> resourcesystem/resourcesystem.cpp:2910
// function calls: 13
void CResourceSystem::RegisterToolsResourceListener(IToolsResourceListener* pListener)
{
	CUtlMemory<IToolsResourceListener::NumAllocated(); // 1196
	CUtlMemory<IToolsResourceListener::Base(); // 112
	CUtlVectorBase<IToolsResourceListener::Base(); // 368
	CUtlVectorBase<IToolsResourceListener::ResetDbgInfo(); // 824
	CUtlMemory<IToolsResourceListener::IsGrowable(); // 823
	CUtlMemory<IToolsResourceListener::IsExternallyAllocated(); // 859
	CUtlMemory<IToolsResourceListener::IsExternallyAllocated(); // 861
	CUtlMemory<IToolsResourceListener::Grow(
		int num);  // 806
	CUtlVectorBase<IToolsResourceListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<IToolsResourceListener::operator[](
			int i);  // 602
	CUtlVectorBase<IToolsResourceListener::Element(
		int i);  // 1201
	CopyConstruct<IToolsResourceListener*>(IToolsResourceListener** pMemory,
						IToolsResourceListener* const& src);  // 1201
	CUtlVectorBase<IToolsResourceListener::AddToTail(
			IToolsResourceListener* const& src);  // 2914
} /* size: 379, inline expansions: 13 (899 bytes) */

// <023634B5> resourcesystem/resourcesystem.cpp:2921
// variable: 1
// function calls: 13
void CResourceSystem::UnregisterToolsResourceListener(IToolsResourceListener* pListener)
{
	{
		int i; // 1531
		CUtlVectorBase<IToolsResourceListener::Count(); // 1531
		CUtlMemory<IToolsResourceListener::operator[](
				int i);  // 609
		CUtlVectorBase<IToolsResourceListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IToolsResourceListener::Find(
		IToolsResourceListener* const& src);  // 1617
	CUtlMemory<IToolsResourceListener::operator[](
			int i);  // 602
	CUtlVectorBase<IToolsResourceListener::Element(
		int i);  // 1114
	CUtlMemory<IToolsResourceListener::operator[](
			int i);  // 602
	CUtlVectorBase<IToolsResourceListener::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IToolsResourceListener::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IToolsResourceListener::Remove(
		int elem);  // 1620
	CUtlVectorBase<IToolsResourceListener::FindAndRemove(
			IToolsResourceListener* const& src);  // 2925
} /* size: 162, inline expansions: 10 (307 bytes) */

// <0236324A> resourcesystem/resourcesystem.cpp:2931
// variables: 5
// function calls: 7
void CResourceSystem::NotifyToolsResourceListenersForPreReload(ResourceId_t nId, ResourceHandle_t hResource, ResourceType_t nResourceType)
{
	ResourceStatusChange_t changeRecord; // 2934
	{
		IToolsResourceListener* pListener; // 2940
		CUtlVector<IToolsResourceListener*, CUtlMemory<IToolsResourceListener*, int> >& __for_range; // 52375
		iterator __for_begin; // 51186
		iterator __for_end; // 51186
		CUtlMemory<IToolsResourceListener::Base(); // 112
		CUtlVectorBase<IToolsResourceListener::Base(); // 102
		CUtlVectorBase<IToolsResourceListener::begin(); // 2940
		CUtlVectorBase<IToolsResourceListener::Count(); // 104
		CUtlVectorBase<IToolsResourceListener::end(); // 2940
	}
	ResourceId_t::ResourceId_t(); // 266
	ResourceStatusChange_t::ResourceStatusChange_t(); // 2934
} /* size: 137, variables: 1, inline expansions: 2 (0 bytes) */

// <0236321C> resourcesystem/resourcesystem.cpp:2949
void CResourceSystem::GetCodeResourceManifestManager()
{
} /* size: 15 */

// <023631EE> resourcesystem/resourcesystem.cpp:2957
void CResourceSystem::GetLeakTracker()
{
} /* size: 15 */

// <023624A8> resourcesystem/resourcesystem.cpp:2979
// variables: 13
// function calls: 39
void CResourceSystem::RegisterResourceExternalReference(ResourceHandle_t hReferringResource, const CResourceName& resourceName, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 59047
	CLoadingResource* pReferringResource; // 2986
	CResourceName updatedResourceName; // 2991
	ResourceHandle_t hResource; // 2999
	ResourceId_t nResourceId; // 3003
	ResourceManifestLoadPriority_t priority; // 3018
	bool loadStreamingData; // 3019
	LoadRequest_t request; // 3028
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2983
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2984
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2989
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3011
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 3011
		CResourceName::Get(); // 3011
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 3011
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 322
	CResourceName::CResourceName(
			const CResourceName& rhs);  // 2991
	CStrongHandle<ResourceBindingVoid_t>::Init(
		ResourceHandleTyped_t hResource);  // 659
	CStrongHandle<ResourceBindingVoid_t>::operator=(
			ResourceHandleTyped_t hResource);  // 275
	CStrongHandleVoid::operator=(
			ResourceHandle_t hResource);  // 2996
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 3011
	CResourceName::Get(); // 3011
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3011
	CLoadingResource::GetPriority(); // 3023
	CLoadingResource::IsLoadingStreamingData(); // 3024
	LoadRequest_t::LoadRequest_t(
			CResourceManifest* pManifest,
			ResourceManifestLoadPriority_t nPriority,
			bool bLoadStreamingData,
			ResourceHandle_t hReferringResource,
			ResourceHandle_t hResource,
			const CResourceName& resourceName);  // 3028
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CResourceSystem::ResourceReferenceLeakTracking_AddRef(
						ResourceHandle_t hResource,
						ResourceLeakTrackingGroup_t trackingGroup,
						uintp nOptionalRefPairingUniqueID);  // 566
	CStrongHandle<ResourceBindingVoid_t>::Init(
		ResourceHandleTyped_t hResource);  // 659
	CStrongHandle<ResourceBindingVoid_t>::operator=(
			ResourceHandleTyped_t hResource);  // 275
	CStrongHandleVoid::operator=(
			ResourceHandle_t hResource);  // 3032
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 3035
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 3006
} /* size: 0, variables: 8, inline expansions: 30 (884 bytes) */

// <02387851> resourcesystem/resourcesystem.cpp:3040
// variables: 2
// function calls: 10
void CResourceSystem::GetResourceTypeName(ResourceType_t nType)
{
	const ResourceTypeRegistration_t* pReg; // 3042
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
				ResourceType_t nResourceType);  // 3042
} /* size: 0, variables: 1, inline expansions: 6 (314 bytes) */

// <02362475> resourcesystem/resourcesystem.cpp:3040
// variable: 1
void CResourceSystem::GetResourceTypeName(ResourceType_t nType)
{
	const ResourceTypeRegistration_t* pReg; // 3042
} /* size: 0, variables: 1 */

// <023623E7> resourcesystem/resourcesystem.cpp:3054
// variables: 2
void CResourceSystem::InstallResourceUpdater(IResourceUpdater* pUpdater)
{
	const char   __FUNCTION__; // 58760
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3056
	}
} /* size: 0, variables: 1 */

// <02362359> resourcesystem/resourcesystem.cpp:3063
// variables: 2
void CResourceSystem::UninstallResourceUpdater(IResourceUpdater* pUpdater)
{
	const char   __FUNCTION__; // 58814
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3065
	}
} /* size: 0, variables: 1 */

// <0238B611> resourcesystem/resourcesystem.cpp:3072
// variable: 1
// function calls: 8
void CResourceSystem::GetFileName(ResourceHandle_t hResource, CBufferString* pFileName, bool bAppend)
{
	ResourceNameHandleInternal_t hResourceName; // 3086
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 3087
	CUtlSymbolLarge::CUtlSymbolLarge(
			const CUtlSymbolLarge& sym);  // 3086
	CUtlSymbolLarge::String(); // 3087
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 3076
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 3082
	CResourceSystem::GetFileName(
			ResourceHandle_t hResource,
			CBufferString* pFileName,
			bool bAppend);  // 3072
} /* size: 132, variables: 1, inline expansions: 8 (142 bytes) */

// <0236230C> resourcesystem/resourcesystem.cpp:3072
// variable: 1
void CResourceSystem::GetFileName(ResourceHandle_t hResource, CBufferString* pFileName, bool bAppend)
{
	ResourceNameHandleInternal_t hResourceName; // 3086
} /* size: 0, variables: 1 */

// <02361F3E> resourcesystem/resourcesystem.cpp:3093
// variable: 1
// function calls: 12
void CResourceSystem::GetActualFileName(ResourceHandle_t hResource, CBufferString* pFileName, bool bAppend)
{
	const ResourceTypeRegistration_t* pReg; // 3106
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
					ResourceHandle_t hResource);  // 3106
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 3114
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 3097
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 3109
} /* size: 0, variables: 1, inline expansions: 12 (341 bytes) */

// <02360067> resourcesystem/resourcesystem.cpp:3120
// variables: 2
// function calls: 123
void CResourceSystem::MakeResourceNameSymbol(const char* pName)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3122; // 3122
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
			int nLineNumber);  // 3122
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::SymbolFromID(
			uint nId);  // 312
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindInternal(
			const char* pString,
			int nStringLen);  // 267
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::CAutoLockT(
			CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 278
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	Eq_t::GetSymbolTable(); // 216
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 218
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 219
	V_strcmp(const char* s1,
		const char* s2);  // 222
	Eq_t::operator(
			const uint  a,
			const uint  b);  // 670
	DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
				unsigned int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(
			const unsigned int& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&, const empty_t&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 250
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 281
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::~CAutoLockT(); // 282
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
	V_strlen(const char* str); // 68
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddString(
			const char* pString);  // 3123
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3124
} /* size: 1504, variables: 1, inline expansions: 111 (7062 bytes) */

// <0238B8CE> resourcesystem/resourcesystem.cpp:3129
// variable: 1
// function calls: 7
void CResourceSystem::ResourceHandleToResourceType(ResourceHandle_t hResource)
{
	const ResourceTypeRegistration_t* pReg; // 3131
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
					ResourceHandle_t hResource);  // 3131
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <02360034> resourcesystem/resourcesystem.cpp:3129
// variable: 1
void CResourceSystem::ResourceHandleToResourceType(ResourceHandle_t hResource)
{
	const ResourceTypeRegistration_t* pReg; // 3131
} /* size: 0, variables: 1 */

// <0235FD4D> resourcesystem/resourcesystem.cpp:3141
// variable: 1
// function calls: 12
void CResourceSystem::RegisterForcedSynchronizationCallback(ResourceSystemForcedSynchronizationCallback_t pCallback, void* pContext)
{
	ForcedSynchronizationCallbackInfo_t& newCallback; // 3143
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::NumAllocated(); // 1143
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 368
	ResetDbgInfo(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 824
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::IsGrowable(); // 823
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this); // 3143
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
			int i);  // 3143
} /* size: 398, variables: 1, inline expansions: 12 (1081 bytes) */

// <023856F7> resourcesystem/resourcesystem.cpp:3151
// variables: 3
// function calls: 14
void CResourceSystem::UnregisterForcedSynchronizationCallback(ResourceSystemForcedSynchronizationCallback_t pCallback, void* pContext)
{
	ForcedSynchronizationCallbackInfo_t find; // 3153
	int nFoundIndex; // 3157
	{
		int i; // 1531
		Count(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem: this); // 1531
		CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem: this,
			int i);  // 1533
		ForcedSynchronizationCallbackInfo_t::operator==(
				const ForcedSynchronizationCallbackInfo_t& rhs);  // 1533
	}
	Find(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem: this,
		const ForcedSynchronizationCallbackInfo_t& src);  // 3157
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
		int i);  // 1114
	CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
		int elem);  // 3162
	{
	}
	CResourceSystem::UnregisterForcedSynchronizationCallback(
						ResourceSystemForcedSynchronizationCallback_t pCallback,
						void* pContext);  // 3151
} /* size: 0, variables: 2, inline expansions: 10 (240 bytes) */

// <0235FCDC> resourcesystem/resourcesystem.cpp:3151
// variables: 4
void CResourceSystem::UnregisterForcedSynchronizationCallback(ResourceSystemForcedSynchronizationCallback_t pCallback, void* pContext)
{
	ForcedSynchronizationCallbackInfo_t find; // 3153
	int nFoundIndex; // 3157
	const char   __FUNCTION__; // 59199
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3158
	}
} /* size: 0, variables: 3 */

// <0238BACB> resourcesystem/resourcesystem.cpp:3169
// variables: 2
// function calls: 3
void CResourceSystem::ForceSynchronization()
{
	{
		int i; // 3171
		Count(const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem: this); // 3171
		{
			ForcedSynchronizationCallbackInfo_t& callback; // 3173
			CUtlMemory<CResourceSystem::ForcedSynchronizationCallbackInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CResourceSystem::ForcedSynchronizationCallbackInfo_t, CUtlMemoryFixedGrowable<CResourceSystem::Force this,
					int i);  // 3173
		}
	}
} /* size: 0 */

// <0235FCA7> resourcesystem/resourcesystem.cpp:3169
// variables: 2
void CResourceSystem::ForceSynchronization()
{
	{
		int i; // 3171
		{
			ForcedSynchronizationCallbackInfo_t& callback; // 3173
		}
	}
} /* size: 0 */

// <0235E2AD> resourcesystem/resourcesystem.cpp:3178
// variables: 11
// function calls: 102
void CResourceSystem::ReloadSymlinkedResidentResources()
{
	CUtlVector<char*, CUtlMemory<char*, int> > stringArray; // 3180
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* queue; // 3185
	{
		int i; // 3186
		{
			CUtlString name; // 3188
			ResourceHandle_t hResource; // 3196
			CPathBufferString resourceName; // 3201
			{
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 627
				CBufferString::Length(); // 631
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 631
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 631
				CBufferStringN<200>::CBufferStringN(
						const CBufferStringN<200>& string);  // 3211
				{
					int i; // 221
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 3212
					operator()(const class* __closure,
							char* pName); // 223
				}
				CUtlVectorBase<char::FindMatching<CResourceSystem::ReloadSymlinkedResidentResources(
															class& f);  // 236
				CUtlVectorBase<char::HasElementMatching<CResourceSystem::ReloadSymlinkedResidentResources(
																class& f);  // 3211
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 3211
				~<lambda>(const class* this); // 3211
			}
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 3188
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 3188
			CUtlString::~CUtlString(); // 3191
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 3193
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 3193
			CUtlString::~CUtlString(); // 3193
			CUtlString::Get(); // 99
			CUtlString::String(); // 3196
			CResourceSystem::GetResourceStatus(
						const CResourceName& resourceName);  // 749
			IResourceSystem::FindExistingResourceByName(
							const CResourceName& resourceName);  // 3196
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 3196
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 3201
			CUtlSymbolLarge::String(); // 148
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 148
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CBufferString* pOutBuffer,
					bool bAppend);  // 518
			CResourceSystem::GetResourceName(
					ResourceHandle_t hResource,
					CBufferString* pResourceName,
					bool bAppend);  // 3202
			CBufferString::IsEmpty(); // 3205
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3218
			CUtlString::~CUtlString(); // 3218
			Construct<char*, char*>(char** pMemory); // 1252
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1252
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<char::AddToTail(
					char *& src);  // 3217
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3218
			CUtlString::~CUtlString(); // 3218
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 3186
	}
	{
		CFastTimer reloadTimer; // 3222
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 63
		CFastTimer::CFastTimer(); // 3222
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 335
		CFastTimer::Start(); // 3223
		ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
						int nCount,
						const char ** ppResourceFiles,
						ResourceManifestType_t nType,
						ResourceManifestLoadBehavior_t nLoadBehavior,
						const char* pDebugName,
						ResourceManifestLoadPriority_t nPriority);  // 784
		CResourceSystem::CreateResourceManifest(
					const ResourceManifestCreationInfo_t& info);  // 786
		IResourceSystem::BlockingReloadResources(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName);  // 3224
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 344
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 345
		CFastTimer::End(); // 3225
		Plat_TickDiffMilliSec(uint64 nStartTicks,
					uint64 nEndTicks,
					uint64 nFreq);  // 316
		CCycleCount::GetMilliseconds64(); // 3227
	}
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 3180
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 3185
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 1821
	{
		int i; // 1817
	}
	CUtlVectorBase<char::PurgeAndFreeElements(); // 3230
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 3231
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 3232
} /* size: 2063, variables: 2, inline expansions: 25 (1530 bytes) */

// <0238E8C3> resourcesystem/resourcesystem.cpp:3236
void CRD_RegisterResourceDataUtils::RegisterResourceExternalReference(ResourceHandle_t hReferringResource, const CResourceName& resourceName, CStrongHandleVoid* pOutResult)
{
} /* size: 16 */

// <0235C87E> resourcesystem/resourcesystem.cpp:3245
// variables: 10
// function calls: 99
void resource_list(const CCommandContext& ctx, const CCommand& args)
{
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > resources; // 3247
	int nCount; // 3248
	int nReturned; // 3250
	int nFound; // 3251
	{
		int i; // 3252
		{
			ResourceHandle_t& id; // 3254
			CPathBufferString name; // 3258
			ResourceType_t resourceType; // 3264
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 3254
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 3258
			CUtlSymbolLarge::String(); // 148
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 148
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CBufferString* pOutBuffer,
					bool bAppend);  // 518
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 514
			CResourceSystem::GetResourceName(
					ResourceHandle_t hResource,
					CBufferString* pResourceName,
					bool bAppend);  // 506
			CResourceSystem::GetResourceName(
					ResourceHandle_t hResource,
					CBufferString* pResourceName,
					bool bAppend);  // 3259
			CCommand::ArgC(); // 3261
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
					ResourceHandle_t hResource);  // 3264
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
						ResourceType_t nResourceType);  // 3042
			CResourceSystem::GetResourceTypeName(
						ResourceType_t nType);  // 3266
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 3278
			CInterlockedIntT<int, 4>::GetRaw(); // 3274
			CCommand::Arg(
				int nIndex);  // 3261
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 3261
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 3277
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 3277
			CInterlockedIntT<int, 4>::GetRaw(); // 3270
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 3270
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 3270
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 3270
			LoggingMetaData_t::LoggingMetaData_t(
						uint64 TypeID,
						uint8* pData,
						size_t nDataSize,
						LoggingVerbosity_t verbosity);  // 171
			{
				int nLinkCommandLen; // 174
				V_strlen(const char* str); // 174
				DWordSwapC<unsigned int>(unsigned int dw); // 181
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 182
			}
			CLoggingMetaCommandLink::CLoggingMetaCommandLink(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity,
						CommandLinkFlags_e nFlags);  // 207
			CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
							const char* pLinkCommand,
							LoggingVerbosity_t verbosity);  // 3270
			CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
			CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 3270
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 3270
		}
	}
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 3247
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	Count(const CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long uns this); // 982
	CResourceSystem::GetNamedResourceCount(); // 3248
	CUtlVectorBase<const ResourceBindingBase_t::Count(); // 1069
	CUtlMemory<const ResourceBindingBase_t::NumAllocated(); // 782
	CUtlMemory<const ResourceBindingBase_t::Base(); // 112
	CUtlVectorBase<const ResourceBindingBase_t::Base(); // 368
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 824
	CUtlVectorBase<const ResourceBindingBase_t::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const ResourceBindingBase_t::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const ResourceBindingBase_t::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<const ResourceBindingBase_t::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const ResourceBindingBase_t::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const ResourceBindingBase_t::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<const ResourceBindingBase_t::EnsureCount(
			int num);  // 3249
	CUtlMemory<const ResourceBindingBase_t::Base(); // 112
	CUtlVectorBase<const ResourceBindingBase_t::Base(); // 3250
	CResourceSystem::GetNamedResources(
				int nFirst,
				int nCount,
				ResourceHandle_t* pResources,
				ResourceSystemGetNamedResourcesFlags_t nFlags);  // 3250
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 3281
} /* size: 0, variables: 4, inline expansions: 34 (743 bytes) */

// <0235A72C> resourcesystem/resourcesystem.cpp:3286
// variables: 49
// function calls: 124
void CResourceSystem::LogAllocateTimes()
{
	CUtlVector<const ResourceTypeRegistration_t*, CUtlMemory<const ResourceTypeRegistration_t*, int> > resources; // 3288
	{
		int i; // 3290
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 3290
		CUtlMemory<const ResourceTypeRegistration_t::operator[](
				int i);  // 602
		CUtlVectorBase<const ResourceTypeRegistration_t::Element(
			int i);  // 1252
		Construct<const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*>(const ResourceTypeRegistration_t ** pMemory); // 1252
		CUtlMemory<const ResourceTypeRegistration_t::Grow(
			int num);  // 806
		CUtlVectorBase<const ResourceTypeRegistration_t::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<const ResourceTypeRegistration_t::AddToTail(
				const ResourceTypeRegistration_t  *& src);  // 3292
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 3292
	}
	{
		int64 nTotalAllocationUs; // 3303
		int64 nTotalAsyncProcessUs; // 3304
		int64 nTotalFinalizeUs; // 3305
		int64 nTotalBytesLoaded; // 3306
		uint nTotalResources; // 3307
		{
			int i; // 3308
		}
		__countl_zero<long unsigned int>(long unsigned int __x); // 388
		__bit_width<long unsigned int>(long unsigned int __x); // 1555
		__lg<long int>(long int __n); // 1907
		{
			const ResourceTypeRegistration_t ** __i; // 1776
			{
				value_type __val; // 1781
				{
					ptrdiff_t __n; // 700
					__distance<const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
											const ResourceTypeRegistration_t ** __last,
											random_access_iterator_tag);  // 153
					distance<const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
											const ResourceTypeRegistration_t ** __last);  // 700
					__advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n,
												random_access_iterator_tag);  // 186
					__advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n,
												random_access_iterator_tag);  // 226
					advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n);  // 701
					__assign_one<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t* *& __out,
																const ResourceTypeRegistration_t* *& __in);  // 709
				}
				__copy_move_backward_a2<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 753
				__copy_move_backward_a1<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 783
				__copy_move_backward_a<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 882
				move_backward<const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
															const ResourceTypeRegistration_t ** __last,
															const ResourceTypeRegistration_t ** __result);  // 1782
			}
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 158
			_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t ** __it1,
														const ResourceTypeRegistration_t ** __it2); // 1778
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 240
			_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t  *& __val,
														const ResourceTypeRegistration_t ** __it); // 1758
			__unguarded_linear_insert<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __last,
																_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistra __comp); // 1786
		}
		__insertion_sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 1818
		{
			const ResourceTypeRegistration_t ** __i; // 1776
			{
				value_type __val; // 1781
				{
					ptrdiff_t __n; // 700
					__distance<const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
											const ResourceTypeRegistration_t ** __last,
											random_access_iterator_tag);  // 153
					distance<const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
											const ResourceTypeRegistration_t ** __last);  // 700
					__advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n,
												random_access_iterator_tag);  // 186
					__advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n,
												random_access_iterator_tag);  // 226
					advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n);  // 701
					__assign_one<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t* *& __out,
																const ResourceTypeRegistration_t* *& __in);  // 709
				}
				__copy_move_backward_a2<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 753
				__copy_move_backward_a1<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 783
				__copy_move_backward_a<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 882
				move_backward<const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
															const ResourceTypeRegistration_t ** __last,
															const ResourceTypeRegistration_t ** __result);  // 1782
			}
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 158
			_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t ** __it1,
														const ResourceTypeRegistration_t ** __it2); // 1778
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 240
			_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t  *& __val,
														const ResourceTypeRegistration_t ** __it); // 1758
			__unguarded_linear_insert<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __last,
																_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistra __comp); // 1786
		}
		__insertion_sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 1823
		{
			const ResourceTypeRegistration_t ** __i; // 1798
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 240
			_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t  *& __val,
														const ResourceTypeRegistration_t ** __it); // 1758
			__unguarded_linear_insert<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __last,
																_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistra __comp); // 1799
		}
		__unguarded_insertion_sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 1819
		__final_insertion_sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 1909
		__sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 4874
		sort<const ResourceTypeRegistration_t**, CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																 __comp); // 973
		CUtlVectorBase<const ResourceTypeRegistration_t::SortPredicate<CResourceSystem::LogAllocateTimes(
																class& predicate);  // 3299
	}
	{
		int64 nTotalStreamingUs; // 3343
		int64 nTotalAsyncStreamingUs; // 3344
		int64 nTotalBytesLoaded; // 3345
		uint nTotalStreaming; // 3346
		{
			int i; // 3347
		}
		__countl_zero<long unsigned int>(long unsigned int __x); // 388
		__bit_width<long unsigned int>(long unsigned int __x); // 1555
		__lg<long int>(long int __n); // 1907
		{
			const ResourceTypeRegistration_t ** __i; // 1776
			{
				value_type __val; // 1781
				{
					ptrdiff_t __n; // 700
					__distance<const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
											const ResourceTypeRegistration_t ** __last,
											random_access_iterator_tag);  // 153
					distance<const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
											const ResourceTypeRegistration_t ** __last);  // 700
					__advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n,
												random_access_iterator_tag);  // 186
					__advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n,
												random_access_iterator_tag);  // 226
					advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n);  // 701
					__assign_one<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t* *& __out,
																const ResourceTypeRegistration_t* *& __in);  // 709
				}
				__copy_move_backward_a2<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 753
				__copy_move_backward_a1<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 783
				__copy_move_backward_a<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 882
				move_backward<const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
															const ResourceTypeRegistration_t ** __last,
															const ResourceTypeRegistration_t ** __result);  // 1782
			}
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 158
			_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t ** __it1,
														const ResourceTypeRegistration_t ** __it2); // 1778
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 240
			_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t  *& __val,
														const ResourceTypeRegistration_t ** __it); // 1758
			__unguarded_linear_insert<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __last,
																_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistra __comp); // 1786
		}
		__insertion_sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 1818
		{
			const ResourceTypeRegistration_t ** __i; // 1776
			{
				value_type __val; // 1781
				{
					ptrdiff_t __n; // 700
					__distance<const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
											const ResourceTypeRegistration_t ** __last,
											random_access_iterator_tag);  // 153
					distance<const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
											const ResourceTypeRegistration_t ** __last);  // 700
					__advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n,
												random_access_iterator_tag);  // 186
					__advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n,
												random_access_iterator_tag);  // 226
					advance<const ResourceTypeRegistration_t**, long int>(const ResourceTypeRegistration_t* *& __i,
												long int __n);  // 701
					__assign_one<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t* *& __out,
																const ResourceTypeRegistration_t* *& __in);  // 709
				}
				__copy_move_backward_a2<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 753
				__copy_move_backward_a1<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 783
				__copy_move_backward_a<true, const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																const ResourceTypeRegistration_t ** __result);  // 882
				move_backward<const ResourceTypeRegistration_t**, const ResourceTypeRegistration_t**>(const ResourceTypeRegistration_t ** __first,
															const ResourceTypeRegistration_t ** __last,
															const ResourceTypeRegistration_t ** __result);  // 1782
			}
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 158
			_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t ** __it1,
														const ResourceTypeRegistration_t ** __it2); // 1778
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 240
			_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t  *& __val,
														const ResourceTypeRegistration_t ** __it); // 1758
			__unguarded_linear_insert<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __last,
																_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistra __comp); // 1786
		}
		__insertion_sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 1823
		{
			const ResourceTypeRegistration_t ** __i; // 1798
			operator()(const class* __closure,
					const ResourceTypeRegistration_t* a,
					const ResourceTypeRegistration_t* b); // 240
			_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t::operator(
														const ResourceTypeRegistration_t  *& __val,
														const ResourceTypeRegistration_t ** __it); // 1758
			__unguarded_linear_insert<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __last,
																_Val_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistra __comp); // 1799
		}
		__unguarded_insertion_sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 1819
		__final_insertion_sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 1909
		__sort<const ResourceTypeRegistration_t**, __gnu_cxx::__ops::_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> > >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																_Iter_comp_iter<CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistr __comp); // 4874
		sort<const ResourceTypeRegistration_t**, CResourceSystem::LogAllocateTimes()::<lambda(const ResourceTypeRegistration_t*, const ResourceTypeRegistration_t*)> >(const ResourceTypeRegistration_t ** __first,
																const ResourceTypeRegistration_t ** __last,
																 __comp); // 973
		CUtlVectorBase<const ResourceTypeRegistration_t::SortPredicate<CResourceSystem::LogAllocateTimes(
																class& predicate);  // 3339
	}
	CUtlMemory<const ResourceTypeRegistration_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceTypeRegistration_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceTypeRegistration_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceTypeRegistration_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceTypeRegistration_t::CUtlVector(); // 3288
	CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 3289
	CUtlMemory<const ResourceTypeRegistration_t::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<const ResourceTypeRegistration_t::EnsureCapacity(
			int num);  // 3289
	CUtlMemory<const ResourceTypeRegistration_t::Purge(); // 903
	CUtlMemory<const ResourceTypeRegistration_t::Purge(); // 1799
	CUtlVectorBase<const ResourceTypeRegistration_t::Purge(); // 560
	CUtlVectorBase<const ResourceTypeRegistration_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceTypeRegistration_t::~CUtlVector(); // 3371
} /* size: 2769, variables: 1, inline expansions: 13 (195 bytes) */

// <0235A393> resourcesystem/resourcesystem.cpp:3373
// variable: 1
// function calls: 15
void CResourceSystem::ResetAllocateTimes()
{
	{
		int i; // 3375
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::Count(); // 3375
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 3377
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 3378
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 3379
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 3380
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 3381
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 3382
		CUtlMemory<ResourceTypeRegistration_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceTypeRegistration_t, CUtlMemory<ResourceTypeRegistration_t, int> >::operator[](
				int i);  // 3383
	}
} /* size: 127 */

// <0235A336> resourcesystem/resourcesystem.cpp:3387
void resource_log_allocate_timing(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 16 */

// <0235A2D8> resourcesystem/resourcesystem.cpp:3392
void resource_reset_allocate_timing(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 16 */

