
//
// worldrenderer/entitylump.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	classes: 2
//

// <00E1067A> worldrenderer/entitylump.h:18
// member functions: 22
// member variables: 7
// class size: 112
class CEntityLump {
	/* worldrenderer/entitylump.h:21 */
	const char* GetName(const CEntityLump* );
	/* worldrenderer/entitylump.h:22 */
	const char* GetHammerUniqueId(const CEntityLump* );
	/* worldrenderer/entitylump.h:23 */
	EntityLumpFlags_t GetFlags(const CEntityLump* );
	/* worldrenderer/entitylump.h:24 */
	const char* GetManifestName(const CEntityLump* );
	/* worldrenderer/entitylump.h:25 */
	int GetNumEntities(const CEntityLump* );
	/* worldrenderer/entitylump.h:26 */
	const CEntityKeyValues* GetEntityKeyValues(const CEntityLump* , int);
	/* worldrenderer/entitylump.h:27 */
	const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >* GetEntityKeyValues(const CEntityLump* );
	/* worldrenderer/entitylump.h:28 */
	int GetNumChildLumps(const CEntityLump* );
	/* worldrenderer/entitylump.h:29 */
	HEntityLump GetChildLump(const CEntityLump* , int);
	/* worldrenderer/entitylump.h:30 */
	void CEntityLump(CEntityLump* , const PermEntityLumpData_t* );
	/* worldrenderer/entitylump.h:31 */
	void ~CEntityLump(CEntityLump* );
private:
	CUtlString m_name; /* 0 8 */
	CUtlString m_hammerUniqueId; /* 8 8 */
	EntityLumpFlags_t m_flags; /* 16 4 */
	CUtlString m_manifestName; /* 24 8 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int> > m_childLumps; /* 32 32 */
	CUtlScratchMemoryPool m_keyValueAllocator; /* 64 16 */
	CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > m_entityKeyValues; /* 80 32 */
	const char  * GetName(const class CEntityLump  *); /* linkage=_ZNK11CEntityLump7GetNameEv */
	const char  * GetHammerUniqueId(const class CEntityLump  *); /* linkage=_ZNK11CEntityLump17GetHammerUniqueIdEv */
	enum EntityLumpFlags_t GetFlags(const class CEntityLump  *); /* linkage=_ZNK11CEntityLump8GetFlagsEv */
	const char  * GetManifestName(const class CEntityLump  *); /* linkage=_ZNK11CEntityLump15GetManifestNameEv */
	int GetNumEntities(const class CEntityLump  *); /* linkage=_ZNK11CEntityLump14GetNumEntitiesEv */
	const class CEntityKeyValues  * GetEntityKeyValues(const class CEntityLump  *, int); /* linkage=_ZNK11CEntityLump18GetEntityKeyValuesEi */
	const class CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >  * GetEntityKeyValues(const class CEntityLump  *); /* linkage=_ZNK11CEntityLump18GetEntityKeyValuesEv */
	int GetNumChildLumps(const class CEntityLump  *); /* linkage=_ZNK11CEntityLump16GetNumChildLumpsEv */
	HEntityLump GetChildLump(const class CEntityLump  *, int); /* linkage=_ZNK11CEntityLump12GetChildLumpEi */
	void CEntityLump(class CEntityLump *, const class PermEntityLumpData_t  *); /* linkage=_ZN11CEntityLumpC4EPK20PermEntityLumpData_t */
	void ~CEntityLump(class CEntityLump *); /* linkage=_ZN11CEntityLumpD4Ev */
};

// <00F3D72A> worldrenderer/entitylump.h:46
void CEntityMgr::CEntityMgr()
{
} /* size: 0 */

// <00F3D70E> worldrenderer/entitylump.h:46
inline void CEntityMgr::CEntityMgr()
{
} /* size: 0 */

// <00F3D6F7> worldrenderer/entitylump.h:46
void CEntityMgr::~CEntityMgr()
{
} /* size: 0 */

// <00F3D6DB> worldrenderer/entitylump.h:46
inline void CEntityMgr::~CEntityMgr()
{
} /* size: 0 */

// <00E66615> worldrenderer/entitylump.h:46
// member functions: 12
// member variable: 1
// vtable entries: 5
// class size: 32
class CEntityMgr : public CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t> {
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t> <ancestor>; */ /* 0 32 */
	/* worldrenderer/entitylump.cpp:122 */
	virtual CEntityLump* AllocateTypesafe(CEntityMgr* , PermEntityLumpData_t* , IKV3ResourceAllocatorUtils* );
	/* worldrenderer/entitylump.cpp:129 */
	virtual void DeallocateTypesafe(CEntityMgr* , CEntityLump* , IKV3ResourceDeallocatorUtils* );
	/* worldrenderer/entitylump.cpp:156 */
	virtual void AllocateResource(CEntityMgr* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* worldrenderer/entitylump.cpp:135 */
	virtual bool WantsAsyncProcessData(const CEntityMgr* );
	/* worldrenderer/entitylump.cpp:140 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CEntityMgr* , ResourceHandle_t, const ResourceFileHeader_t* );
	/* <e7c427> worldrenderer/entitylump.cpp:122 */
	virtual class CEntityLump * AllocateTypesafe(class CEntityMgr *, class PermEntityLumpData_t *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN10CEntityMgr16AllocateTypesafeEP20PermEntityLumpData_tPN37CTypesafeIntrospectedToKV3TypeManagerILy495874631030ES0_E26IKV3ResourceAllocatorUtilsE */
	/* <e7bea5> worldrenderer/entitylump.cpp:129 */
	virtual void DeallocateTypesafe(class CEntityMgr *, class CEntityLump *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN10CEntityMgr18DeallocateTypesafeEP11CEntityLumpPN37CTypesafeIntrospectedToKV3TypeManagerILy495874631030E20PermEntityLumpData_tE28IKV3ResourceDeallocatorUtilsE */
	virtual void AllocateResource(class CEntityMgr *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN10CEntityMgr16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual bool WantsAsyncProcessData(const class CEntityMgr  *); /* linkage=_ZNK10CEntityMgr21WantsAsyncProcessDataEv */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CEntityMgr *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN10CEntityMgr16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
	void ~CEntityMgr(class CEntityMgr *); /* linkage=_ZN10CEntityMgrD4Ev */
	void CEntityMgr(class CEntityMgr *); /* linkage=_ZN10CEntityMgrC4Ev */
};

