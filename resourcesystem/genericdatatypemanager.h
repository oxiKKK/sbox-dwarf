
//
// resourcesystem/genericdatatypemanager.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	class: 1
//

// <021D44C9> resourcesystem/genericdatatypemanager.h:14
// function calls: 26
void CGenericDataTypeManager::CGenericDataTypeManager()
{
	IResourceTypeManager::IResourceTypeManager(); // 78
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 78
	CKV3ResourceTypeManager<418564367478>::CKV3ResourceTypeManager(); // 14
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
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
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
				bool caseInsensitive);  // 14
	IGenericDataTypeManager::IGenericDataTypeManager(); // 14
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::Init(); // 178
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::CUtlHashtable(
			int minimumSize);  // 14
} /* size: 230, inline expansions: 9 (220 bytes) */

// <021D44AD> resourcesystem/genericdatatypemanager.h:14
inline void CGenericDataTypeManager::CGenericDataTypeManager()
{
} /* size: 0 */

// <021C9808> resourcesystem/genericdatatypemanager.h:14
// variables: 4
// function calls: 35
void CGenericDataTypeManager::~CGenericDataTypeManager()
{
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::Count(); // 897
			CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::IsValid(); // 899
			CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*> >(CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > pMemory); // 902
		}
	}
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener::~CUtlMemory(); // 188
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener::~CUtlHashtable(); // 14
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
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 14
} /* size: 334, inline expansions: 25 (873 bytes) */

// <021C97EC> resourcesystem/genericdatatypemanager.h:14
inline void CGenericDataTypeManager::~CGenericDataTypeManager()
{
} /* size: 0 */

// <021C4AA1> resourcesystem/genericdatatypemanager.h:14
// member functions: 28
// member variables: 4
// vtable entries: 8
// class size: 232
class CGenericDataTypeManager : public CKV3ResourceTypeManager<418564367478>, public IGenericDataTypeManager {
public:
	/* class CKV3ResourceTypeManager<418564367478> <ancestor>; */ /* 0 48 */
	/* class IGenericDataTypeManager <ancestor>; */ /* 48 8 */
	void CGenericDataTypeManager(CGenericDataTypeManager* , CGenericDataTypeManager& );
	void CGenericDataTypeManager(CGenericDataTypeManager* , const CGenericDataTypeManager& );
	void CGenericDataTypeManager(CGenericDataTypeManager* );
	/* resourcesystem/genericdatatypemanager.h:17 */
	virtual CGenericDataResource* Allocate(CGenericDataTypeManager* , HGenericData, ResourceId_t, const KeyValues3* , IRD_RegisterResourceDataUtils* );
	/* resourcesystem/genericdatatypemanager.h:18 */
	virtual void Deallocate(CGenericDataTypeManager* , TypedResourceHandle_t, RuntimeClass_t* );
	/* resourcesystem/genericdatatypemanager.cpp:61 */
	virtual CGenericDataResource* AllocateEx(CGenericDataTypeManager* , HGenericData, ResourceId_t, CKV3ResourceBlockHelper* , IRD_RegisterResourceDataUtils* );
	/* resourcesystem/genericdatatypemanager.cpp:114 */
	virtual void DeallocateResource(CGenericDataTypeManager* , void* , IResourceDeallocatorUtils* );
	/* resourcesystem/genericdatatypemanager.h:23 */
	virtual bool RequiresFinalizeResourceCall(const CGenericDataTypeManager* );
	/* resourcesystem/genericdatatypemanager.cpp:87 */
	virtual void FinalizeResource(CGenericDataTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* resourcesystem/genericdatatypemanager.cpp:135 */
	virtual void RegisterListener(CGenericDataTypeManager* , const CResourceName& , IGenericDataResourceListener* );
	/* resourcesystem/genericdatatypemanager.cpp:146 */
	virtual void UnregisterListener(CGenericDataTypeManager* , const CResourceName& , IGenericDataResourceListener* );
private:
	/* resourcesystem/genericdatatypemanager.cpp:35 */
	void RegisterExtRefs(CGenericDataTypeManager* , HGenericData, CGenericDataResource* , KeyValues3* , IRD_RegisterResourceDataUtils* );
	/* resourcesystem/genericdatatypemanager.h:32 */
	typedef struct CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > ListenerList_t;
	/* resourcesystem/genericdatatypemanager.cpp:158 */
	ListenerList_t* GetListenerListForId(CGenericDataTypeManager* , ResourceId_t, bool);
	CUtlSymbolTableLarge m_DataTypes; /* 56 144 */
	CUtlHashtable<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >*>, int> > m_Listeners; /* 200 32 */
	void ~CGenericDataTypeManager(CGenericDataTypeManager* );
	void CGenericDataTypeManager(class CGenericDataTypeManager *, class CGenericDataTypeManager &); /* linkage=_ZN23CGenericDataTypeManagerC4EOS_ */
	void CGenericDataTypeManager(class CGenericDataTypeManager *, const class CGenericDataTypeManager  &); /* linkage=_ZN23CGenericDataTypeManagerC4ERKS_ */
	void CGenericDataTypeManager(class CGenericDataTypeManager *); /* linkage=_ZN23CGenericDataTypeManagerC4Ev */
	virtual class CGenericDataResource * Allocate(class CGenericDataTypeManager *, HGenericData, class ResourceId_t, const class KeyValues3  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CGenericDataTypeManager8AllocateE11CWeakHandleI39InfoForResourceTypeCGenericDataResourceE12ResourceId_tPK10KeyValues3P29IRD_RegisterResourceDataUtils */
	virtual void Deallocate(class CGenericDataTypeManager *, TypedResourceHandle_t, RuntimeClass_t *); /* linkage=_ZN23CGenericDataTypeManager10DeallocateE11CWeakHandleI39InfoForResourceTypeCGenericDataResourceEP20CGenericDataResource */
	virtual class CGenericDataResource * AllocateEx(class CGenericDataTypeManager *, HGenericData, class ResourceId_t, class CKV3ResourceBlockHelper *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CGenericDataTypeManager10AllocateExE11CWeakHandleI39InfoForResourceTypeCGenericDataResourceE12ResourceId_tP23CKV3ResourceBlockHelperP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class CGenericDataTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN23CGenericDataTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual bool RequiresFinalizeResourceCall(const class CGenericDataTypeManager  *); /* linkage=_ZNK23CGenericDataTypeManager28RequiresFinalizeResourceCallEv */
	virtual void FinalizeResource(class CGenericDataTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN23CGenericDataTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	virtual void RegisterListener(class CGenericDataTypeManager *, const class CResourceName  &, class IGenericDataResourceListener *); /* linkage=_ZN23CGenericDataTypeManager16RegisterListenerERK13CResourceNameP28IGenericDataResourceListener */
	virtual void UnregisterListener(class CGenericDataTypeManager *, const class CResourceName  &, class IGenericDataResourceListener *); /* linkage=_ZN23CGenericDataTypeManager18UnregisterListenerERK13CResourceNameP28IGenericDataResourceListener */
	void RegisterExtRefs(class CGenericDataTypeManager *, HGenericData, class CGenericDataResource *, class KeyValues3 *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CGenericDataTypeManager15RegisterExtRefsE11CWeakHandleI39InfoForResourceTypeCGenericDataResourceEP20CGenericDataResourceP10KeyValues3P29IRD_RegisterResourceDataUtils */
	ListenerList_t * GetListenerListForId(class CGenericDataTypeManager *, class ResourceId_t, bool); /* linkage=_ZN23CGenericDataTypeManager20GetListenerListForIdE12ResourceId_tb */
	void ~CGenericDataTypeManager(class CGenericDataTypeManager *); /* linkage=_ZN23CGenericDataTypeManagerD4Ev */
};

// <021D4C6A> resourcesystem/genericdatatypemanager.h:17
// variables: 2
void CGenericDataTypeManager::Allocate(HGenericData hResource, ResourceId_t nId, const KeyValues3* pKV3, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 43914
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 17
	}
} /* size: 29, variables: 1 */

// <021D4BC5> resourcesystem/genericdatatypemanager.h:18
// variables: 2
void CGenericDataTypeManager::Deallocate(TypedResourceHandle_t hResource, RuntimeClass_t* pResourceData)
{
	const char   __FUNCTION__; // 43963
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 18
	}
} /* size: 27, variables: 1 */

// <02381984> resourcesystem/genericdatatypemanager.h:23
void CGenericDataTypeManager::RequiresFinalizeResourceCall()
{
} /* size: 0 */

