
//
// public/resourcefile/introspectedtokv3typemanager.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//
//	functions: 135
//	classes: 18
//

// <06711994> ../public/resourcefile/introspectedtokv3typemanager.h:24
void CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper()
{
} /* size: 0 */

// <06711978> ../public/resourcefile/introspectedtokv3typemanager.h:24
inline void CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper()
{
} /* size: 0 */

// <00970B0D> ../public/resourcefile/introspectedtokv3typemanager.h:24
// member functions: 9
// member variables: 2
// class size: 1,592
class CIntrospectedToKV3ResourceBlockHelper {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:27 */
	void CIntrospectedToKV3ResourceBlockHelper(CIntrospectedToKV3ResourceBlockHelper* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:31 */
	bool InitFromBlock(CIntrospectedToKV3ResourceBlockHelper* , ResourceHandle_t, const ResourceFileHeader_t* , const ResourceHeaderBlockInfo_t* , const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:32 */
	bool InitFromDataBlock(CIntrospectedToKV3ResourceBlockHelper* , ResourceHandle_t, const ResourceFileHeader_t* , const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:34 */
	const KeyValues3* GetKV3(CIntrospectedToKV3ResourceBlockHelper* );
private:
	ResourceHandle_t m_hParentResource; /* 0 8 */
	CKeyValues3Context m_DiskKV3Data; /* 8 1584 */
	void CIntrospectedToKV3ResourceBlockHelper(class CIntrospectedToKV3ResourceBlockHelper *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelperC4Ev */
	/* <6714b97> resourcefile/introspectedtokv3typemanager.cpp:180 */
	bool InitFromBlock(class CIntrospectedToKV3ResourceBlockHelper *, ResourceHandle_t, const class ResourceFileHeader_t  *, const class ResourceHeaderBlockInfo_t  *, const char  *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelper13InitFromBlockEPK21ResourceBindingBase_tPK20ResourceFileHeader_tPK25ResourceHeaderBlockInfo_tPKc */
	/* <6714f5b> resourcefile/introspectedtokv3typemanager.cpp:196 */
	bool InitFromDataBlock(class CIntrospectedToKV3ResourceBlockHelper *, ResourceHandle_t, const class ResourceFileHeader_t  *, const char  *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelper17InitFromDataBlockEPK21ResourceBindingBase_tPK20ResourceFileHeader_tPKc */
	const class KeyValues3  * GetKV3(class CIntrospectedToKV3ResourceBlockHelper *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelper6GetKV3Ev */
	void ~CIntrospectedToKV3ResourceBlockHelper(class CIntrospectedToKV3ResourceBlockHelper *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelperD4Ev */
};

// <0670C032> ../public/resourcefile/introspectedtokv3typemanager.h:24
// member functions: 10
// member variables: 2
// class size: 1,592
class CIntrospectedToKV3ResourceBlockHelper {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:27 */
	void CIntrospectedToKV3ResourceBlockHelper(CIntrospectedToKV3ResourceBlockHelper* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:31 */
	bool InitFromBlock(CIntrospectedToKV3ResourceBlockHelper* , ResourceHandle_t, const ResourceFileHeader_t* , const ResourceHeaderBlockInfo_t* , const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:32 */
	bool InitFromDataBlock(CIntrospectedToKV3ResourceBlockHelper* , ResourceHandle_t, const ResourceFileHeader_t* , const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:34 */
	const KeyValues3* GetKV3(CIntrospectedToKV3ResourceBlockHelper* );
private:
	ResourceHandle_t m_hParentResource; /* 0 8 */
	CKeyValues3Context m_DiskKV3Data; /* 8 1584 */
	void ~CIntrospectedToKV3ResourceBlockHelper(CIntrospectedToKV3ResourceBlockHelper* );
	void CIntrospectedToKV3ResourceBlockHelper(class CIntrospectedToKV3ResourceBlockHelper *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelperC4Ev */
	/* <6714b97> resourcefile/introspectedtokv3typemanager.cpp:180 */
	bool InitFromBlock(class CIntrospectedToKV3ResourceBlockHelper *, ResourceHandle_t, const class ResourceFileHeader_t  *, const class ResourceHeaderBlockInfo_t  *, const char  *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelper13InitFromBlockEPK21ResourceBindingBase_tPK20ResourceFileHeader_tPK25ResourceHeaderBlockInfo_tPKc */
	/* <6714f5b> resourcefile/introspectedtokv3typemanager.cpp:196 */
	bool InitFromDataBlock(class CIntrospectedToKV3ResourceBlockHelper *, ResourceHandle_t, const class ResourceFileHeader_t  *, const char  *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelper17InitFromDataBlockEPK21ResourceBindingBase_tPK20ResourceFileHeader_tPKc */
	const class KeyValues3  * GetKV3(class CIntrospectedToKV3ResourceBlockHelper *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelper6GetKV3Ev */
	void ~CIntrospectedToKV3ResourceBlockHelper(class CIntrospectedToKV3ResourceBlockHelper *); /* linkage=_ZN37CIntrospectedToKV3ResourceBlockHelperD4Ev */
};

// <06711BCC> ../public/resourcefile/introspectedtokv3typemanager.h:27
void CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper()
{
} /* size: 0 */

// <06711BB3> ../public/resourcefile/introspectedtokv3typemanager.h:27
inline void CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper()
{
} /* size: 0 */

// <06711B9A> ../public/resourcefile/introspectedtokv3typemanager.h:34
inline void CIntrospectedToKV3ResourceBlockHelper::GetKV3()
{
} /* size: 0 */

// <0670C15C> ../public/resourcefile/introspectedtokv3typemanager.h:47
// member functions: 33
// member variables: 5
// vtable entries: 11
// class size: 32
class CBaseIntrospectedToKV3TypeManager : public IResourceTypeManager {
	/* resourcefile/introspectedtokv3typemanager.cpp:57 */
	struct AsyncProcessResult : public IAsyncProcessedDataResult {
	public:
		/* class IAsyncProcessedDataResult <ancestor>; */ /* 0 8 */
		void AsyncProcessResult(AsyncProcessResult* , const AsyncProcessResult& );
		void AsyncProcessResult(AsyncProcessResult* );
		/* resourcefile/introspectedtokv3typemanager.cpp:59 */
		virtual void ~AsyncProcessResult(AsyncProcessResult* );
		CIntrospectedToKV3ResourceBlockHelper m_IntrospectedHelper; /* 8 1592 */
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > m_KV3Helper; /* 1600 8 */
		const class KeyValues3 * m_pKV3Root; /* 1608 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void CBaseIntrospectedToKV3TypeManager(CBaseIntrospectedToKV3TypeManager* , const CBaseIntrospectedToKV3TypeManager& );
	/* resourcefile/introspectedtokv3typemanager.cpp:25 */
	void CBaseIntrospectedToKV3TypeManager(CBaseIntrospectedToKV3TypeManager* , ResourceType_t);
	/* ../public/resourcefile/introspectedtokv3typemanager.h:51 */
	void ~CBaseIntrospectedToKV3TypeManager(CBaseIntrospectedToKV3TypeManager* );
	/* resourcefile/introspectedtokv3typemanager.cpp:32 */
	virtual bool Init(CBaseIntrospectedToKV3TypeManager* , IResourceSystemUtils* );
	/* resourcefile/introspectedtokv3typemanager.cpp:41 */
	virtual void Shutdown(CBaseIntrospectedToKV3TypeManager* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:57 */
	virtual bool NeedsFrameUpdate(const CBaseIntrospectedToKV3TypeManager* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:58 */
	virtual void FrameUpdate(CBaseIntrospectedToKV3TypeManager* , int);
	/* resourcefile/introspectedtokv3typemanager.cpp:166 */
	virtual void DeallocateResource(CBaseIntrospectedToKV3TypeManager* , void* , IResourceDeallocatorUtils* );
	/* resourcefile/introspectedtokv3typemanager.cpp:116 */
	virtual void AllocateResource(CBaseIntrospectedToKV3TypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:62 */
	virtual bool MemoryMappedFileDataIsAcceptable(const CBaseIntrospectedToKV3TypeManager* );
	/* resourcefile/introspectedtokv3typemanager.cpp:48 */
	virtual bool WantsAsyncProcessData(const CBaseIntrospectedToKV3TypeManager* );
	/* resourcefile/introspectedtokv3typemanager.cpp:70 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CBaseIntrospectedToKV3TypeManager* , ResourceHandle_t, const ResourceFileHeader_t* );
protected:
	/* resourcefile/introspectedtokv3typemanager.cpp:123 */
	void AllocateResourceFromAsyncResult(CBaseIntrospectedToKV3TypeManager* , ResourceHandle_t, ResourceId_t, IAsyncProcessedDataResult* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:72 */
	virtual void* AllocateAndLoad(CBaseIntrospectedToKV3TypeManager* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:73 */
	virtual void DeallocateDestroyCleanup(CBaseIntrospectedToKV3TypeManager* , void* , IResourceDeallocatorUtils* );
	const ResourceType_t m_nResourceType; /* 8 8 */
	uint16 m_nIntrospectedResourceVersion; /* 16 2 */
	uint16 m_nKV3ResourceVersion; /* 18 2 */
	IResourceSystemUtils * m_pResourceSystemUtils; /* 24 8 */
	virtual bool WantsAsyncProcessData(const class CBaseIntrospectedToKV3TypeManager  *); /* linkage=_ZNK33CBaseIntrospectedToKV3TypeManager21WantsAsyncProcessDataEv */
	/* <67146fc> resourcefile/introspectedtokv3typemanager.cpp:166 */
	virtual void DeallocateResource(class CBaseIntrospectedToKV3TypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual void AllocateResource(class CBaseIntrospectedToKV3TypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void Shutdown(class CBaseIntrospectedToKV3TypeManager *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager8ShutdownEv */
	virtual bool Init(class CBaseIntrospectedToKV3TypeManager *, class IResourceSystemUtils *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager4InitEP20IResourceSystemUtils */
	void CBaseIntrospectedToKV3TypeManager(class CBaseIntrospectedToKV3TypeManager *, ResourceType_t); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManagerC4Ey */
	void AllocateResourceFromAsyncResult(class CBaseIntrospectedToKV3TypeManager *, ResourceHandle_t, class ResourceId_t, class IAsyncProcessedDataResult *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager31AllocateResourceFromAsyncResultEPK21ResourceBindingBase_t12ResourceId_tP25IAsyncProcessedDataResultP29IRD_RegisterResourceDataUtils */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CBaseIntrospectedToKV3TypeManager *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
	virtual bool MemoryMappedFileDataIsAcceptable(const class CBaseIntrospectedToKV3TypeManager  *); /* linkage=_ZNK33CBaseIntrospectedToKV3TypeManager32MemoryMappedFileDataIsAcceptableEv */
	virtual void FrameUpdate(class CBaseIntrospectedToKV3TypeManager *, int); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager11FrameUpdateEi */
	virtual bool NeedsFrameUpdate(const class CBaseIntrospectedToKV3TypeManager  *); /* linkage=_ZNK33CBaseIntrospectedToKV3TypeManager16NeedsFrameUpdateEv */
	void ~CBaseIntrospectedToKV3TypeManager(class CBaseIntrospectedToKV3TypeManager *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManagerD4Ev */
	void CBaseIntrospectedToKV3TypeManager(class CBaseIntrospectedToKV3TypeManager *, const class CBaseIntrospectedToKV3TypeManager  &); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManagerC4ERKS_ */
	virtual void * AllocateAndLoad(class CBaseIntrospectedToKV3TypeManager *, class CKV3TransferLoadContext &, ResourceHandle_t, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager15AllocateAndLoadER23CKV3TransferLoadContextPK21ResourceBindingBase_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateDestroyCleanup(class CBaseIntrospectedToKV3TypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN33CBaseIntrospectedToKV3TypeManager24DeallocateDestroyCleanupEPvP25IResourceDeallocatorUtils */
};

// <010E8650> ../public/resourcefile/introspectedtokv3typemanager.h:50
void CBaseIntrospectedToKV3TypeManager::CBaseIntrospectedToKV3TypeManager(ResourceType_t nResourceType)
{
} /* size: 0 */

// <0110E33C> ../public/resourcefile/introspectedtokv3typemanager.h:51
void CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0110E323> ../public/resourcefile/introspectedtokv3typemanager.h:51
inline void CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <06711B6C> ../public/resourcefile/introspectedtokv3typemanager.h:57
void CBaseIntrospectedToKV3TypeManager::NeedsFrameUpdate()
{
} /* size: 7 */

// <06711B30> ../public/resourcefile/introspectedtokv3typemanager.h:58
void CBaseIntrospectedToKV3TypeManager::FrameUpdate(int nFinishedFrameCount)
{
} /* size: 5 */

// <06711B02> ../public/resourcefile/introspectedtokv3typemanager.h:62
void CBaseIntrospectedToKV3TypeManager::MemoryMappedFileDataIsAcceptable()
{
} /* size: 7 */

// <00F3D85C> ../public/resourcefile/introspectedtokv3typemanager.h:87
void CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::~CDefaultIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00F3D840> ../public/resourcefile/introspectedtokv3typemanager.h:87
inline void CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::~CDefaultIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00F18345> ../public/resourcefile/introspectedtokv3typemanager.h:87
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 32
class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> : public CBaseIntrospectedToKV3TypeManager {
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void ~CDefaultIntrospectedToKV3TypeManager(CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>* );
	void CDefaultIntrospectedToKV3TypeManager(CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>* , CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>& );
	void CDefaultIntrospectedToKV3TypeManager(CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>* , const CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>& );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:91 */
	void CDefaultIntrospectedToKV3TypeManager(CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:95 */
	virtual void* AllocateAndLoad(CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:102 */
	virtual void DeallocateDestroyCleanup(CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>* , void* , IResourceDeallocatorUtils* );
	void ~CDefaultIntrospectedToKV3TypeManager(class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> *); /* linkage=_ZN36CDefaultIntrospectedToKV3TypeManagerILy431316170614E7World_tED4Ev */
	void CDefaultIntrospectedToKV3TypeManager(class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> *, class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> &); /* linkage=_ZN36CDefaultIntrospectedToKV3TypeManagerILy431316170614E7World_tEC4EOS1_ */
	void CDefaultIntrospectedToKV3TypeManager(class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> *, const class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>  &); /* linkage=_ZN36CDefaultIntrospectedToKV3TypeManagerILy431316170614E7World_tEC4ERKS1_ */
	void CDefaultIntrospectedToKV3TypeManager(class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> *); /* linkage=_ZN36CDefaultIntrospectedToKV3TypeManagerILy431316170614E7World_tEC4Ev */
	virtual void * AllocateAndLoad(class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> *, class CKV3TransferLoadContext &, ResourceHandle_t, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN36CDefaultIntrospectedToKV3TypeManagerILy431316170614E7World_tE15AllocateAndLoadER23CKV3TransferLoadContextPK21ResourceBindingBase_tP29IRD_RegisterResourceDataUtils */
	/* <f46b4f> ../public/resourcefile/introspectedtokv3typemanager.h:102 */
	virtual void DeallocateDestroyCleanup(class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN36CDefaultIntrospectedToKV3TypeManagerILy431316170614E7World_tE24DeallocateDestroyCleanupEPvP25IResourceDeallocatorUtils */
};

// <00F2B5E8> ../public/resourcefile/introspectedtokv3typemanager.h:91
void CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::CDefaultIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00F2B5CF> ../public/resourcefile/introspectedtokv3typemanager.h:91
inline void CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::CDefaultIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00F22EAD> ../public/resourcefile/introspectedtokv3typemanager.h:95
// variable: 1
// function calls: 19
void* CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	World_t* pDataFromDisk; // 97
	CKV3TransferLoadContext::SourceObject(); // 98
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<World_t>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<World_t>(const char* pDerivedClassName); // 54
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<World_t>(
					World_t* pClassInstance,
					const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<World_t>(
					World_t *& value,
					const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<World_t>(
					World_t *& value,
					const KeyValues3* pLoadFromValue);  // 98
} /* size: 333, variables: 1, inline expansions: 19 (1072 bytes) */

// <00F46B4F> ../public/resourcefile/introspectedtokv3typemanager.h:102
// variables: 3
// function calls: 41
void CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	World_t* pData; // 104
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 51
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCTextureBase> >(CStrongHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTexture this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CStrongHandle<InfoForResourceTypeCTextureBase this); // 173
	BakedLightingInfo_t::~BakedLightingInfo_t(); // 51
	CUtlMemory<NodeData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<NodeData_t, int>::Purge(); // 903
	CUtlMemory<NodeData_t, int>::Purge(); // 1799
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::Purge(); // 560
	ValidateAlignment<NodeData_t>(void); // 508
	CUtlMemory<NodeData_t, int>::Purge(); // 510
	CUtlMemory<NodeData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<NodeData_t, CUtlMemory<NodeData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<NodeData_t, CUtlMemory<NodeData_t, int> >::~CUtlVector(); // 51
	World_t::~World_t(); // 105
	CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::DeallocateDestroyCleanup(
				void* pVoidData,
				IResourceDeallocatorUtils* pDeallocUtils);  // 102
} /* size: 297, variables: 1, inline expansions: 32 (1586 bytes) */

// <00F22E70> ../public/resourcefile/introspectedtokv3typemanager.h:102
// variable: 1
inline void CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	World_t* pData; // 104
} /* size: 0, variables: 1 */

// <010FBFD2> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <010FBFB6> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00F3D75D> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00F3D741> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00A17BD4> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00A17BB8> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00D0D711> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00D0D6F5> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00D0D64C> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00D0D630> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00D0B53B> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00D0B51F> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0043D679> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0043D65C> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00175277> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0017525B> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0034A73F> ../public/resourcefile/introspectedtokv3typemanager.h:113
void CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0034A723> ../public/resourcefile/introspectedtokv3typemanager.h:113
inline void CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::~CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <009D76B4> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 25
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> : public CBaseIntrospectedToKV3TypeManager {
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void ~CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* , CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>& );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* , const CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>& );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* , VPhysXAggregateData_t* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
	void ~CTypesafeIntrospectedToKV3TypeManager(class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> *); /* linkage=_ZN37CTypesafeIntrospectedToKV3TypeManagerILy495958126710E21VPhysXAggregateData_tED4Ev */
	void CTypesafeIntrospectedToKV3TypeManager(class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> *, class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> &); /* linkage=_ZN37CTypesafeIntrospectedToKV3TypeManagerILy495958126710E21VPhysXAggregateData_tEC4EOS1_ */
	void CTypesafeIntrospectedToKV3TypeManager(class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> *, const class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>  &); /* linkage=_ZN37CTypesafeIntrospectedToKV3TypeManagerILy495958126710E21VPhysXAggregateData_tEC4ERKS1_ */
	void CTypesafeIntrospectedToKV3TypeManager(class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> *); /* linkage=_ZN37CTypesafeIntrospectedToKV3TypeManagerILy495958126710E21VPhysXAggregateData_tEC4Ev */
	virtual RuntimeClass_t * AllocateTypesafe(class CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t> *, class VPhysXAggregateData_t *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN37CTypesafeIntrospectedToKV3TypeManagerILy495958126710E21VPhysXAggregateData_tE16AllocateTypesafeEPS0_PNS1_26IKV3ResourceAllocatorUtilsE */
};

// <00E66729> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 17
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t> : public CBaseIntrospectedToKV3TypeManager {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>* , PermEntityLumpData_t* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
};

// <010E5C77> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 20
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t> : public CBaseIntrospectedToKV3TypeManager {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* , CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>& );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* , const CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>& );
	void ~CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* , WorldNode_t* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
};

// <00C0A448> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 20
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData> : public CBaseIntrospectedToKV3TypeManager {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void ~CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* , CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>& );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* , const CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>& );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* , CSequenceGroupData* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
};

// <00C0AF38> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 20
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup> : public CBaseIntrospectedToKV3TypeManager {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void ~CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* , CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>& );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* , const CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>& );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* , CAnimationGroup* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
};

// <00C0B2EE> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 20
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData> : public CBaseIntrospectedToKV3TypeManager {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void ~CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* , CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>& );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* , const CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>& );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* , CAnimData* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
};

// <00159300> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 20
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t> : public CBaseIntrospectedToKV3TypeManager {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void ~CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* , CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>& );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* , const CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>& );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* , PermModelData_t* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
};

// <00439D7B> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 20
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData> : public CBaseIntrospectedToKV3TypeManager {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* , CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>& );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* , const CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>& );
	void ~CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* , CMorphSetData* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
};

// <003415D1> ../public/resourcefile/introspectedtokv3typemanager.h:113
// member functions: 20
// member variable: 1
// vtable entries: 5
// class size: 32
class CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t> : public CBaseIntrospectedToKV3TypeManager {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:124 */
	class IKV3ResourceAllocatorUtils {
		void ~IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* , const IKV3ResourceAllocatorUtils& );
		void IKV3ResourceAllocatorUtils(IKV3ResourceAllocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceAllocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:127 */
		virtual TypedResourceHandle_t GetResourceHandle(const IKV3ResourceAllocatorUtils* );
		/* ../public/resourcefile/introspectedtokv3typemanager.h:128 */
		virtual IRD_RegisterResourceDataUtils* GetDataUtils(const IKV3ResourceAllocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:131 */
	class IKV3ResourceDeallocatorUtils {
		void ~IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* , const IKV3ResourceDeallocatorUtils& );
		void IKV3ResourceDeallocatorUtils(IKV3ResourceDeallocatorUtils* );
		int ()(void) * * _vptr.IKV3ResourceDeallocatorUtils; /* 0 8 */
		/* ../public/resourcefile/introspectedtokv3typemanager.h:134 */
		virtual IResourceDeallocatorUtils* GetDeallocUtils(const IKV3ResourceDeallocatorUtils* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseIntrospectedToKV3TypeManager <ancestor>; */ /* 0 0 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* , CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>& );
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* , const CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>& );
	void ~CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:120 */
	void CTypesafeIntrospectedToKV3TypeManager(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:117 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcefile/introspectedtokv3typemanager.h:137 */
	virtual RuntimeClass_t* AllocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* , MaterialResourceData_t* , IKV3ResourceAllocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:138 */
	virtual void DeallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* , RuntimeClass_t* , IKV3ResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:139 */
	virtual void OnReallocateTypesafe(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* , const RuntimeClass_t* , RuntimeClass_t* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:143 */
	virtual void* AllocateAndLoad(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* , CKV3TransferLoadContext& , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:184 */
	virtual void DeallocateDestroyCleanup(CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:118 */
	typedef HandleType_t TypedResourceHandle_t;
};

// <010F890C> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <010F88F3> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00F2B5B8> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00F2B59F> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <009F5FBF> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <009F5FA6> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00C79DB2> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00C79D99> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00C79D69> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00C79D50> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00C78041> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00C78028> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0043D20E> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0043D1F5> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0016E185> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0016E16C> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <00347133> ../public/resourcefile/introspectedtokv3typemanager.h:120
void CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <0034711A> ../public/resourcefile/introspectedtokv3typemanager.h:120
inline void CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::CTypesafeIntrospectedToKV3TypeManager()
{
} /* size: 0 */

// <010ED290> ../public/resourcefile/introspectedtokv3typemanager.h:124
void IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils()
{
} /* size: 0 */

// <010ED274> ../public/resourcefile/introspectedtokv3typemanager.h:124
inline void IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils()
{
} /* size: 0 */

// <01114108> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 5 */

// <010EC5C0> ../public/resourcefile/introspectedtokv3typemanager.h:139
inline void CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <00F20C82> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <00E6C926> ../public/resourcefile/introspectedtokv3typemanager.h:139
inline void CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <00D6D6AE> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <00D274C4> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 5 */

// <00D2748C> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 5 */

// <00D27454> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 5 */

// <00C1CB50> ../public/resourcefile/introspectedtokv3typemanager.h:139
inline void CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <00C1BEED> ../public/resourcefile/introspectedtokv3typemanager.h:139
inline void CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <00C1B289> ../public/resourcefile/introspectedtokv3typemanager.h:139
inline void CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <0043E0F1> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 5 */

// <0043C2C0> ../public/resourcefile/introspectedtokv3typemanager.h:139
inline void CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <0018C82C> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 5 */

// <0015F293> ../public/resourcefile/introspectedtokv3typemanager.h:139
inline void CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <00344C7A> ../public/resourcefile/introspectedtokv3typemanager.h:139
void CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::OnReallocateTypesafe(const RuntimeClass_t* pOldData, RuntimeClass_t* pNewData)
{
} /* size: 0 */

// <010EC86D> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
// function calls: 29
void* CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	WorldNode_t* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeCWorldNode>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<WorldNode_t>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<WorldNode_t>(const char* pDerivedClassName); // 230
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<WorldNode_t>(
					WorldNode_t* pClassInstance,
					const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<WorldNode_t>(
					WorldNode_t *& value,
					const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<WorldNode_t>(
					WorldNode_t *& value,
					const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeCWorldNode>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
	CWorldNode::CWorldNode(
			WorldNode_t* pWorldNodeData);  // 866
	CWorldNodeManager::AllocateTypesafe(
			WorldNode_t* pDataFromDisk,
			IKV3ResourceAllocatorUtils* pUtils);  // 171
} /* size: 577, variables: 3, inline expansions: 28 (1199 bytes) */

// <00F20DC1> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
void* CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	PermEntityLumpData_t* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
	}
} /* size: 0, variables: 3 */

// <00E6CBA2> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 5
// function calls: 57
void* CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	PermEntityLumpData_t* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeCEntityLump>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<PermEntityLumpData_t>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<PermEntityLumpData_t>(const char* pDerivedClassName); // 60
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<PermEntityLumpData_t>(
						PermEntityLumpData_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<PermEntityLumpData_t>(
						PermEntityLumpData_t *& value,
						const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<PermEntityLumpData_t>(
						PermEntityLumpData_t *& value,
						const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
	CUtlMemory<EntityKeyValueData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 903
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 1799
	CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::Purge(); // 560
	ValidateAlignment<EntityKeyValueData_t>(void); // 508
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 510
	CUtlMemory<EntityKeyValueData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVector(); // 57
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 57
	CUtlString::~CUtlString(); // 57
	CUtlString::~CUtlString(); // 57
	CUtlString::~CUtlString(); // 57
	PermEntityLumpData_t::~PermEntityLumpData_t(); // 125
	CEntityMgr::AllocateTypesafe(
			PermEntityLumpData_t* pDataFromDisk,
			IKV3ResourceAllocatorUtils* pUtils);  // 122
	CEntityMgr::AllocateTypesafe(
			PermEntityLumpData_t* pDataFromDisk,
			IKV3ResourceAllocatorUtils* pUtils);  // 171
} /* size: 837, variables: 3, inline expansions: 51 (2349 bytes) */

// <00D6D8D6> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
// function calls: 33
void* CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	VPhysXAggregateData_t* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeCPhysAggregateData>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<VPhysXAggregateData_t>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<VPhysXAggregateData_t>(const char* pDerivedClassName); // 308
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<VPhysXAggregateData_t>(
						VPhysXAggregateData_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<VPhysXAggregateData_t>(
						VPhysXAggregateData_t *& value,
						const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<VPhysXAggregateData_t>(
						VPhysXAggregateData_t *& value,
						const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
	CPhysAggregateDataHandle::Get(); // 138
	CPhysAggregateDataHandle::operator->(); // 155
	CPhysAggregateDataHandle::Get(); // 157
	CPhysAggregateDataHandle::Clear(); // 115
	CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 158
	CPhysicsDataTypeManager::AllocateTypesafe(
			VPhysXAggregateData_t* pDiskData,
			IKV3ResourceAllocatorUtils* pUtils);  // 171
} /* size: 577, variables: 3, inline expansions: 32 (1257 bytes) */

// <009DDDA1> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
void* CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	VPhysXAggregateData_t* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
	}
} /* size: 0, variables: 3 */

// <00C1CE2B> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
// function calls: 27
void* CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	CSequenceGroupData* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeCSequenceGroupData>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<CSequenceGroupData>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<CSequenceGroupData>(const char* pDerivedClassName); // 408
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<CSequenceGroupData>(
						CSequenceGroupData* pClassInstance,
						const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<CSequenceGroupData>(
						CSequenceGroupData *& value,
						const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<CSequenceGroupData>(
						CSequenceGroupData *& value,
						const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeCSequenceGroupData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeCSequenceGroupData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
} /* size: 545, variables: 3, inline expansions: 26 (1140 bytes) */

// <00C1C1C8> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
// function calls: 27
void* CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	CAnimationGroup* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<CAnimationGroup>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<CAnimationGroup>(const char* pDerivedClassName); // 183
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<CAnimationGroup>(
						CAnimationGroup* pClassInstance,
						const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<CAnimationGroup>(
						CAnimationGroup *& value,
						const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<CAnimationGroup>(
						CAnimationGroup *& value,
						const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
} /* size: 545, variables: 3, inline expansions: 26 (1140 bytes) */

// <00C1B564> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
// function calls: 27
void* CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	CAnimData* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeCAnimData>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<CAnimData>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<CAnimData>(const char* pDerivedClassName); // 423
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<CAnimData>(
					CAnimData* pClassInstance,
					const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<CAnimData>(
					CAnimData *& value,
					const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<CAnimData>(
					CAnimData *& value,
					const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeCAnimData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeCAnimData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
} /* size: 545, variables: 3, inline expansions: 26 (1140 bytes) */

// <0043C611> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
// function calls: 27
void* CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	CMorphSetData* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeCMorphSetData>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<CMorphSetData>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<CMorphSetData>(const char* pDerivedClassName); // 168
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<CMorphSetData>(
					CMorphSetData* pClassInstance,
					const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<CMorphSetData>(
					CMorphSetData *& value,
					const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<CMorphSetData>(
					CMorphSetData *& value,
					const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeCMorphSetData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeCMorphSetData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
} /* size: 545, variables: 3, inline expansions: 26 (1140 bytes) */

// <0015F4FE> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
// function calls: 27
void* CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	PermModelData_t* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeCModel>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<PermModelData_t>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<PermModelData_t>(const char* pDerivedClassName); // 198
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<PermModelData_t>(
						PermModelData_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<PermModelData_t>(
						PermModelData_t *& value,
						const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<PermModelData_t>(
						PermModelData_t *& value,
						const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
} /* size: 569, variables: 3, inline expansions: 26 (1164 bytes) */

// <00344F4D> ../public/resourcefile/introspectedtokv3typemanager.h:143
// variables: 4
// function calls: 27
void* CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::AllocateAndLoad(CKV3TransferLoadContext& loadContext, ResourceHandle_t hResource, IRD_RegisterResourceDataUtils* pDataUtils)
{
	MaterialResourceData_t* pDataFromDisk; // 147
	CAllocatorUtils allocatorUtils; // 166
	RuntimeClass_t* pResult; // 171
	{
		const RuntimeClass_t* pOldData; // 177
		CWeakHandle<InfoForResourceTypeIMaterial2>::GetData(); // 177
	}
	CKV3TransferLoadContext::SourceObject(); // 148
	{
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 359
	SchemaTypeScope(void); // 23
	Schema_StaticClassname(void); // 194
	Get(ISchemaSystemTypeScope* pTypeScope); // 23
	SchemaTypeOf<MaterialResourceData_t>(void); // 27
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 125
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 27
	CSchemaType_DeclaredClass::GetClass(); // 40
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 173
	CSchemaClassInfo::IsAbstractBinding(); // 42
	KV3TransferSchema_AllocateClassInstance<MaterialResourceData_t>(const char* pDerivedClassName); // 81
	KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 395
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<MaterialResourceData_t>(
							MaterialResourceData_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 404
	CKV3TransferLoadContext::LoadOwningPointer<MaterialResourceData_t>(
							MaterialResourceData_t *& value,
							const KeyValues3* pLoadFromValue);  // 356
	CKV3TransferLoadContext::LoadOwningPointer<MaterialResourceData_t>(
							MaterialResourceData_t *& value,
							const KeyValues3* pLoadFromValue);  // 148
	IKV3ResourceAllocatorUtils::IKV3ResourceAllocatorUtils(); // 152
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 152
	CAllocatorUtils::CAllocatorUtils(); // 166
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 168
} /* size: 537, variables: 3, inline expansions: 26 (1164 bytes) */

// <0018C748> ../public/resourcefile/introspectedtokv3typemanager.h:158
// function calls: 2
TypedResourceHandle_t CAllocatorUtils::GetResourceHandle()
{
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 160
} /* size: 15, inline expansions: 2 (14 bytes) */

// <0034B9B4> ../public/resourcefile/introspectedtokv3typemanager.h:158
// function calls: 2
TypedResourceHandle_t CAllocatorUtils::GetResourceHandle()
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 160
} /* size: 15, inline expansions: 2 (14 bytes) */

// <0018C7D6> ../public/resourcefile/introspectedtokv3typemanager.h:162
IRD_RegisterResourceDataUtils* CAllocatorUtils::GetDataUtils()
{
} /* size: 9 */

// <010EC5F1> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 3
void CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	CWorldNode::~CWorldNode(); // 872
	CWorldNodeManager::DeallocateTypesafe(
				CWorldNode* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 870
	CWorldNodeManager::DeallocateTypesafe(
				CWorldNode* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 183, variables: 1, inline expansions: 3 (186 bytes) */

// <00F20CB2> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
void CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
} /* size: 0, variables: 1 */

// <00E6C957> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 2
void CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	CEntityMgr::DeallocateTypesafe(
				CEntityLump* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 129
	CEntityMgr::DeallocateTypesafe(
				CEntityLump* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 162, variables: 1, inline expansions: 2 (93 bytes) */

// <00D6D6DE> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 2
void CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	CResourceDeallocatorUtils::GetDeallocationType(); // 162
	CPhysicsDataTypeManager::DeallocateTypesafe(
				CPhysAggregateData* pAggData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 180, variables: 1, inline expansions: 2 (61 bytes) */

// <009DDC91> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
void CTypesafeIntrospectedToKV3TypeManager<495958126710, VPhysXAggregateData_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
} /* size: 0, variables: 1 */

// <00C1CB81> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 6
void CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 172
	CSequenceGroupTypeManagerV0::DeallocateTypesafe(
				CSequenceGroupData* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 171, variables: 1, inline expansions: 6 (183 bytes) */

// <00C1BF1E> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 6
void CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 150
	CAnimationGroupTypeManagerV0::DeallocateTypesafe(
				CAnimationGroup* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 171, variables: 1, inline expansions: 6 (183 bytes) */

// <00C1B2BA> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 6
void CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 53
	CAnimationTypeManagerV0::DeallocateTypesafe(
				CAnimData* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 171, variables: 1, inline expansions: 6 (183 bytes) */

// <0043C2F1> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 8
void CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 185
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 208
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 33
	CMorphSetManagerV0::DeallocateTypesafe(
				CMorphSetData* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 217, variables: 1, inline expansions: 8 (405 bytes) */

// <0015F2C4> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 3
void CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	CResourceDeallocatorUtils::GetDeallocationType(); // 518
	CModelTypeManager::DeallocateTypesafe(
				CModel* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 516
	CModelTypeManager::DeallocateTypesafe(
				CModel* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 164, variables: 1, inline expansions: 3 (63 bytes) */

// <00344CAA> ../public/resourcefile/introspectedtokv3typemanager.h:184
// variable: 1
// function calls: 4
void CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::DeallocateDestroyCleanup(void* pVoidData, IResourceDeallocatorUtils* pDeallocUtils)
{
	CDeallocatorUtils deallocatorUtils; // 197
	CResourceDeallocatorUtils::GetDeallocationType(); // 85
	CMaterial2::HasOutstandingIORequests(); // 93
	{
	}
	CMaterialTypeManager::DeallocateTypesafe(
				IMaterial2* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 83
	CMaterialTypeManager::DeallocateTypesafe(
				IMaterial2* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 201
} /* size: 191, variables: 1, inline expansions: 4 (130 bytes) */

// <00D7607C> ../public/resourcefile/introspectedtokv3typemanager.h:193
IResourceDeallocatorUtils* CDeallocatorUtils::GetDeallocUtils()
{
} /* size: 9 */

// <0096F764> ../public/resourcefile/introspectedtokv3typemanager.h:208
// member functions: 16
// member variables: 5
// class size: 1,624
class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:211 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:215 */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:219 */
	bool HasContext(const CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:225 */
	bool Init(CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:231 */
	bool InitContext(CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>* , ResourceHandle_t, const ResourceFileHeader_t* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:262 */
	bool PerformKV3Transfer(CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>* , ResourceHandle_t, ResourceId_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:285 */
	const VPhysXAggregateData_t* GetData(CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:291 */
	VPhysXAggregateData_t* TakeControlOfData(CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>* );
private:
	CIntrospectedToKV3ResourceBlockHelper m_IntrospectedBlockHelper; /* 0 1592 */
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > m_KV3BlockHelper; /* 1592 8 */
	const class KeyValues3 * m_pKV3Root; /* 1600 8 */
	bool m_bDidTransfer; /* 1608 1 */
	VPhysXAggregateData_t * m_pData; /* 1616 8 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI21VPhysXAggregateData_tEC4Ev */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI21VPhysXAggregateData_tED4Ev */
	bool HasContext(const class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>  *); /* linkage=_ZNK37CEmbeddedIntrospectedOrKV3BlockHelperI21VPhysXAggregateData_tE10HasContextEv */
	bool Init(class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *, const class ResourceHeaderBlockInfo_t  *, bool, const char  *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI21VPhysXAggregateData_tE4InitEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtilsPK25ResourceHeaderBlockInfo_tbPKc */
	bool InitContext(class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> *, ResourceHandle_t, const class ResourceFileHeader_t  *, const class ResourceHeaderBlockInfo_t  *, bool, const char  *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI21VPhysXAggregateData_tE11InitContextEPK21ResourceBindingBase_tPK20ResourceFileHeader_tPK25ResourceHeaderBlockInfo_tbPKc */
	bool PerformKV3Transfer(class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> *, ResourceHandle_t, class ResourceId_t, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI21VPhysXAggregateData_tE18PerformKV3TransferEPK21ResourceBindingBase_t12ResourceId_tP29IRD_RegisterResourceDataUtils */
	const class VPhysXAggregateData_t  * GetData(class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI21VPhysXAggregateData_tE7GetDataEv */
	class VPhysXAggregateData_t * TakeControlOfData(class CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI21VPhysXAggregateData_tE17TakeControlOfDataEv */
};

// <00B23187> ../public/resourcefile/introspectedtokv3typemanager.h:208
// member functions: 8
// member variables: 5
// class size: 1,624
class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup> {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:211 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:215 */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:219 */
	bool HasContext(const CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:225 */
	bool Init(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:231 */
	bool InitContext(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>* , ResourceHandle_t, const ResourceFileHeader_t* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:262 */
	bool PerformKV3Transfer(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>* , ResourceHandle_t, ResourceId_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:285 */
	const CAnimationGroup* GetData(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:291 */
	CAnimationGroup* TakeControlOfData(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>* );
private:
	CIntrospectedToKV3ResourceBlockHelper m_IntrospectedBlockHelper; /* 0 1592 */
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > m_KV3BlockHelper; /* 1592 8 */
	const class KeyValues3 * m_pKV3Root; /* 1600 8 */
	bool m_bDidTransfer; /* 1608 1 */
	CAnimationGroup * m_pData; /* 1616 8 */
};

// <00B23355> ../public/resourcefile/introspectedtokv3typemanager.h:208
// member functions: 16
// member variables: 5
// class size: 1,624
class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:211 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:215 */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:219 */
	bool HasContext(const CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:225 */
	bool Init(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:231 */
	bool InitContext(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>* , ResourceHandle_t, const ResourceFileHeader_t* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:262 */
	bool PerformKV3Transfer(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>* , ResourceHandle_t, ResourceId_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:285 */
	const CAnimData* GetData(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:291 */
	CAnimData* TakeControlOfData(CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>* );
private:
	CIntrospectedToKV3ResourceBlockHelper m_IntrospectedBlockHelper; /* 0 1592 */
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > m_KV3BlockHelper; /* 1592 8 */
	const class KeyValues3 * m_pKV3Root; /* 1600 8 */
	bool m_bDidTransfer; /* 1608 1 */
	CAnimData * m_pData; /* 1616 8 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI9CAnimDataEC4Ev */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI9CAnimDataED4Ev */
	bool HasContext(const class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>  *); /* linkage=_ZNK37CEmbeddedIntrospectedOrKV3BlockHelperI9CAnimDataE10HasContextEv */
	bool Init(class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *, const class ResourceHeaderBlockInfo_t  *, bool, const char  *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI9CAnimDataE4InitEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtilsPK25ResourceHeaderBlockInfo_tbPKc */
	bool InitContext(class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> *, ResourceHandle_t, const class ResourceFileHeader_t  *, const class ResourceHeaderBlockInfo_t  *, bool, const char  *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI9CAnimDataE11InitContextEPK21ResourceBindingBase_tPK20ResourceFileHeader_tPK25ResourceHeaderBlockInfo_tbPKc */
	bool PerformKV3Transfer(class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> *, ResourceHandle_t, class ResourceId_t, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI9CAnimDataE18PerformKV3TransferEPK21ResourceBindingBase_t12ResourceId_tP29IRD_RegisterResourceDataUtils */
	const class CAnimData  * GetData(class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI9CAnimDataE7GetDataEv */
	class CAnimData * TakeControlOfData(class CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI9CAnimDataE17TakeControlOfDataEv */
};

// <00B23523> ../public/resourcefile/introspectedtokv3typemanager.h:208
// member functions: 16
// member variables: 5
// class size: 1,624
class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:211 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:215 */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:219 */
	bool HasContext(const CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:225 */
	bool Init(CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:231 */
	bool InitContext(CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>* , ResourceHandle_t, const ResourceFileHeader_t* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:262 */
	bool PerformKV3Transfer(CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>* , ResourceHandle_t, ResourceId_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:285 */
	const CSequenceGroupData* GetData(CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:291 */
	CSequenceGroupData* TakeControlOfData(CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>* );
private:
	CIntrospectedToKV3ResourceBlockHelper m_IntrospectedBlockHelper; /* 0 1592 */
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > m_KV3BlockHelper; /* 1592 8 */
	const class KeyValues3 * m_pKV3Root; /* 1600 8 */
	bool m_bDidTransfer; /* 1608 1 */
	CSequenceGroupData * m_pData; /* 1616 8 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI18CSequenceGroupDataEC4Ev */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI18CSequenceGroupDataED4Ev */
	bool HasContext(const class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>  *); /* linkage=_ZNK37CEmbeddedIntrospectedOrKV3BlockHelperI18CSequenceGroupDataE10HasContextEv */
	bool Init(class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *, const class ResourceHeaderBlockInfo_t  *, bool, const char  *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI18CSequenceGroupDataE4InitEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtilsPK25ResourceHeaderBlockInfo_tbPKc */
	bool InitContext(class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> *, ResourceHandle_t, const class ResourceFileHeader_t  *, const class ResourceHeaderBlockInfo_t  *, bool, const char  *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI18CSequenceGroupDataE11InitContextEPK21ResourceBindingBase_tPK20ResourceFileHeader_tPK25ResourceHeaderBlockInfo_tbPKc */
	bool PerformKV3Transfer(class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> *, ResourceHandle_t, class ResourceId_t, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI18CSequenceGroupDataE18PerformKV3TransferEPK21ResourceBindingBase_t12ResourceId_tP29IRD_RegisterResourceDataUtils */
	const class CSequenceGroupData  * GetData(class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI18CSequenceGroupDataE7GetDataEv */
	class CSequenceGroupData * TakeControlOfData(class CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI18CSequenceGroupDataE17TakeControlOfDataEv */
};

// <0015201F> ../public/resourcefile/introspectedtokv3typemanager.h:208
// member functions: 16
// member variables: 5
// class size: 1,624
class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> {
	/* ../public/resourcefile/introspectedtokv3typemanager.h:211 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:215 */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:219 */
	bool HasContext(const CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:225 */
	bool Init(CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:231 */
	bool InitContext(CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* , ResourceHandle_t, const ResourceFileHeader_t* , const ResourceHeaderBlockInfo_t* , bool, const char* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:262 */
	bool PerformKV3Transfer(CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* , ResourceHandle_t, ResourceId_t, IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:285 */
	const CMorphSetData* GetData(CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* );
	/* ../public/resourcefile/introspectedtokv3typemanager.h:291 */
	CMorphSetData* TakeControlOfData(CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>* );
private:
	CIntrospectedToKV3ResourceBlockHelper m_IntrospectedBlockHelper; /* 0 1592 */
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > m_KV3BlockHelper; /* 1592 8 */
	const class KeyValues3 * m_pKV3Root; /* 1600 8 */
	bool m_bDidTransfer; /* 1608 1 */
	CMorphSetData * m_pData; /* 1616 8 */
	void CEmbeddedIntrospectedOrKV3BlockHelper(class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI13CMorphSetDataEC4Ev */
	void ~CEmbeddedIntrospectedOrKV3BlockHelper(class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI13CMorphSetDataED4Ev */
	bool HasContext(const class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>  *); /* linkage=_ZNK37CEmbeddedIntrospectedOrKV3BlockHelperI13CMorphSetDataE10HasContextEv */
	bool Init(class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *, const class ResourceHeaderBlockInfo_t  *, bool, const char  *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI13CMorphSetDataE4InitEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtilsPK25ResourceHeaderBlockInfo_tbPKc */
	bool InitContext(class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *, ResourceHandle_t, const class ResourceFileHeader_t  *, const class ResourceHeaderBlockInfo_t  *, bool, const char  *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI13CMorphSetDataE11InitContextEPK21ResourceBindingBase_tPK20ResourceFileHeader_tPK25ResourceHeaderBlockInfo_tbPKc */
	bool PerformKV3Transfer(class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *, ResourceHandle_t, class ResourceId_t, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI13CMorphSetDataE18PerformKV3TransferEPK21ResourceBindingBase_t12ResourceId_tP29IRD_RegisterResourceDataUtils */
	const class CMorphSetData  * GetData(class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI13CMorphSetDataE7GetDataEv */
	class CMorphSetData * TakeControlOfData(class CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> *); /* linkage=_ZN37CEmbeddedIntrospectedOrKV3BlockHelperI13CMorphSetDataE17TakeControlOfDataEv */
};

// <00C79CE0> ../public/resourcefile/introspectedtokv3typemanager.h:211
void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <00C79CC7> ../public/resourcefile/introspectedtokv3typemanager.h:211
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016E6D2> ../public/resourcefile/introspectedtokv3typemanager.h:211
void CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016E6B9> ../public/resourcefile/introspectedtokv3typemanager.h:211
inline void CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AD24> ../public/resourcefile/introspectedtokv3typemanager.h:211
void CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AD0B> ../public/resourcefile/introspectedtokv3typemanager.h:211
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AB9E> ../public/resourcefile/introspectedtokv3typemanager.h:211
void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AB85> ../public/resourcefile/introspectedtokv3typemanager.h:211
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AADE> ../public/resourcefile/introspectedtokv3typemanager.h:211
void CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AAC5> ../public/resourcefile/introspectedtokv3typemanager.h:211
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <00C79CB0> ../public/resourcefile/introspectedtokv3typemanager.h:215
void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <00C79C97> ../public/resourcefile/introspectedtokv3typemanager.h:215
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016E6A2> ../public/resourcefile/introspectedtokv3typemanager.h:215
void CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016E689> ../public/resourcefile/introspectedtokv3typemanager.h:215
inline void CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AB6E> ../public/resourcefile/introspectedtokv3typemanager.h:215
void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AB55> ../public/resourcefile/introspectedtokv3typemanager.h:215
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AAAE> ../public/resourcefile/introspectedtokv3typemanager.h:215
void CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016AA95> ../public/resourcefile/introspectedtokv3typemanager.h:215
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <00167747> ../public/resourcefile/introspectedtokv3typemanager.h:215
void CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <0016772E> ../public/resourcefile/introspectedtokv3typemanager.h:215
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::~CEmbeddedIntrospectedOrKV3BlockHelper()
{
} /* size: 0 */

// <00C780C1> ../public/resourcefile/introspectedtokv3typemanager.h:225
// variables: 7
// function calls: 114
void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::Init(ResourceHandle_t hParentResource, ResourceId_t nParentResourceId, const ResourceFileHeader_t* pRawDiskHeader, IRD_RegisterResourceDataUtils* pUtils, const ResourceHeaderBlockInfo_t* pBlockInfo, bool bDataIsKV3, const char* pIntrospectedRootStructName)
{
	{
	}
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(
			pointer __p);  // 31
	make_unique<CKeyValues3Context>(void); // 66
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 65
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 167
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(); // 65
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 86
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 204
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >& __u);  // 236
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::operator=(
			__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true> &);  // 408
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> > &);  // 66
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 66
	CKV3ResourceBlockHelper::CKV3ResourceBlockHelper(); // 29
	CUtlString::CUtlString(); // 28
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 30
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(
			pointer __p);  // 29
	CUtlString::Get(); // 32
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
		{
			CKeyValues3Context *& __ptr; // 396
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
			default_delete<CKeyValues3Context>::operator(
					CKeyValues3Context* __ptr);  // 86
			default_delete<CKeyValues3Context>::operator(
					CKeyValues3Context* __ptr);  // 398
		}
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
		IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
		CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
		CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
		default_delete<CKV3ResourceBlockHelper>::operator(
				CKV3ResourceBlockHelper* __ptr);  // 398
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 37
	CUtlString::~CUtlString(); // 37
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 37
	FromBlock(const ResourceHeaderBlockInfo_t* pBlockInfo,
			const KV3ID_t& expectedFormat);  // 244
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 86
		default_delete<CKeyValues3Context>::operator(
				CKeyValues3Context* __ptr);  // 398
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get_deleter(); // 398
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 20
	IAsyncProcessedDataResult::~IAsyncProcessedDataResult(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 20
	CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper(); // 92
	default_delete<CKV3ResourceBlockHelper>::operator(
			CKV3ResourceBlockHelper* __ptr);  // 204
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 236
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::operator=(
			__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 408
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator=(
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 244
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 472
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get(); // 489
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::operator bool(); // 854
	operator==<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(const unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __x,
												nullptr_t);  // 245
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 244
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 247
	{
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::InitContext(
			ResourceHandle_t hParentResource,
			const ResourceFileHeader_t* pRawDiskHeader,
			const ResourceHeaderBlockInfo_t* pBlockInfo,
			bool bDataIsKV3,
			const char* pIntrospectedRootStructName);  // 231
	CIntrospectedToKV3ResourceBlockHelper::GetKV3(); // 254
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::InitContext(
			ResourceHandle_t hParentResource,
			const ResourceFileHeader_t* pRawDiskHeader,
			const ResourceHeaderBlockInfo_t* pBlockInfo,
			bool bDataIsKV3,
			const char* pIntrospectedRootStructName);  // 227
	{
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 425
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 425
		CUtlMemory<CAnimDesc, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimDesc, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> >::CUtlVector(); // 425
		CUtlMemory<CAnimDecoder, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimDecoder, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::CUtlVector(); // 425
		CUtlMemory<CAnimFrameSegment, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimFrameSegment, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::CUtlVector(); // 425
		CAnimData::CAnimData(); // 269
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 272
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 273
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CAnimData>(
						CAnimData* pClassInstance,
						const KeyValues3* pNestedValue);  // 275
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::PerformKV3Transfer(
				ResourceHandle_t hParentResource,
				ResourceId_t nParentResourceId,
				IRD_RegisterResourceDataUtils* pUtils);  // 227
} /* size: 1332, inline expansions: 71 (3055 bytes) */

// <00C6171E> ../public/resourcefile/introspectedtokv3typemanager.h:231
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::InitContext(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pRawDiskHeader, const ResourceHeaderBlockInfo_t* pBlockInfo, bool bDataIsKV3, const char* pIntrospectedRootStructName)
{
	const char   __FUNCTION__; // 21952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 1 */

// <0016E985> ../public/resourcefile/introspectedtokv3typemanager.h:231
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::InitContext(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pRawDiskHeader, const ResourceHeaderBlockInfo_t* pBlockInfo, bool bDataIsKV3, const char* pIntrospectedRootStructName)
{
	const char   __FUNCTION__; // 13355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 1 */

// <0016E85E> ../public/resourcefile/introspectedtokv3typemanager.h:231
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::InitContext(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pRawDiskHeader, const ResourceHeaderBlockInfo_t* pBlockInfo, bool bDataIsKV3, const char* pIntrospectedRootStructName)
{
	const char   __FUNCTION__; // 13355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 1 */

// <0016E7BD> ../public/resourcefile/introspectedtokv3typemanager.h:231
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::InitContext(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pRawDiskHeader, const ResourceHeaderBlockInfo_t* pBlockInfo, bool bDataIsKV3, const char* pIntrospectedRootStructName)
{
	const char   __FUNCTION__; // 13355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 1 */

// <0016E71C> ../public/resourcefile/introspectedtokv3typemanager.h:231
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::InitContext(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pRawDiskHeader, const ResourceHeaderBlockInfo_t* pBlockInfo, bool bDataIsKV3, const char* pIntrospectedRootStructName)
{
	const char   __FUNCTION__; // 13355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 1 */

// <0016E562> ../public/resourcefile/introspectedtokv3typemanager.h:231
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::InitContext(ResourceHandle_t hParentResource, const ResourceFileHeader_t* pRawDiskHeader, const ResourceHeaderBlockInfo_t* pBlockInfo, bool bDataIsKV3, const char* pIntrospectedRootStructName)
{
	const char   __FUNCTION__; // 13355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 1 */

// <009F4895> ../public/resourcefile/introspectedtokv3typemanager.h:262
// variables: 4
inline void CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::PerformKV3Transfer(ResourceHandle_t hParentResource, ResourceId_t nParentResourceId, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 57770
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 264
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
	}
} /* size: 0, variables: 1 */

// <00C750C4> ../public/resourcefile/introspectedtokv3typemanager.h:262
// variables: 4
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::PerformKV3Transfer(ResourceHandle_t hParentResource, ResourceId_t nParentResourceId, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 22141
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 264
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
	}
} /* size: 0, variables: 1 */

// <00C7503A> ../public/resourcefile/introspectedtokv3typemanager.h:262
// variables: 4
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::PerformKV3Transfer(ResourceHandle_t hParentResource, ResourceId_t nParentResourceId, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 22141
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 264
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
	}
} /* size: 0, variables: 1 */

// <00C74119> ../public/resourcefile/introspectedtokv3typemanager.h:262
// variables: 4
// function calls: 58
void CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::PerformKV3Transfer(ResourceHandle_t hParentResource, ResourceId_t nParentResourceId, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 22141
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 264
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 410
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 410
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 410
		CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CBufferString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVector(); // 410
		CUtlMemory<CSeqS1SeqDesc, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSeqS1SeqDesc, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::CUtlVector(); // 410
		CUtlMemory<CSeqS1SeqDesc, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSeqS1SeqDesc, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::CUtlVector(); // 410
		CUtlMemory<CSeqSynthAnimDesc, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSeqSynthAnimDesc, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSeqSynthAnimDesc, CUtlMemory<CSeqSynthAnimDesc, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSeqSynthAnimDesc, CUtlMemory<CSeqSynthAnimDesc, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSeqSynthAnimDesc, CUtlMemory<CSeqSynthAnimDesc, int> >::CUtlVector(); // 410
		CUtlMemory<CSeqCmdSeqDesc, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSeqCmdSeqDesc, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >::CUtlVector(); // 410
		CUtlMemory<CSeqBoneMaskList, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSeqBoneMaskList, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >::CUtlVector(); // 410
		CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CBufferString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVector(); // 410
		CUtlMemory<CSeqPoseParamDesc, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSeqPoseParamDesc, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >::CUtlVector(); // 410
		CUtlMemory<CSeqIKLock, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSeqIKLock, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >::CUtlVector(); // 410
		CSequenceGroupData::CSequenceGroupData(); // 269
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 272
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 273
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CSequenceGroupData>(
							CSequenceGroupData* pClassInstance,
							const KeyValues3* pNestedValue);  // 275
	}
} /* size: 903, variables: 1 */

// <0016F9C2> ../public/resourcefile/introspectedtokv3typemanager.h:262
// variables: 4
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::PerformKV3Transfer(ResourceHandle_t hParentResource, ResourceId_t nParentResourceId, IRD_RegisterResourceDataUtils* pUtils)
{
	const char   __FUNCTION__; // 13524
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 264
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
	}
} /* size: 0, variables: 1 */

// <009F4844> ../public/resourcefile/introspectedtokv3typemanager.h:291
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t>::TakeControlOfData()
{
	const char   __FUNCTION__; // 57743
	VPhysXAggregateData_t* temp; // 294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
	}
} /* size: 0, variables: 2 */

// <00C78071> ../public/resourcefile/introspectedtokv3typemanager.h:291
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::TakeControlOfData()
{
	const char   __FUNCTION__; // 22114
	CAnimData* temp; // 294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
	}
} /* size: 0, variables: 2 */

// <00C740C9> ../public/resourcefile/introspectedtokv3typemanager.h:291
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::TakeControlOfData()
{
	const char   __FUNCTION__; // 22114
	CAnimationGroup* temp; // 294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
	}
} /* size: 0, variables: 2 */

// <00C74079> ../public/resourcefile/introspectedtokv3typemanager.h:291
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::TakeControlOfData()
{
	const char   __FUNCTION__; // 22114
	CSequenceGroupData* temp; // 294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
	}
} /* size: 0, variables: 2 */

// <0016F972> ../public/resourcefile/introspectedtokv3typemanager.h:291
// variables: 3
inline void CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>::TakeControlOfData()
{
	const char   __FUNCTION__; // 13497
	CMorphSetData* temp; // 294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
	}
} /* size: 0, variables: 2 */

