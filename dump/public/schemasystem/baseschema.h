
//
// public/schemasystem/baseschema.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 15
//	classes: 3
//	structs: 2
//

// <00032A8E> ../public/schemasystem/baseschema.h:22
// member functions: 13
// member variables: 2
// class size: 16
class CSchemaMetadataSet {
	/* ../public/schemasystem/baseschema.h:26 */
	void CSchemaMetadataSet(CSchemaMetadataSet* , uint16, const SchemaMetadataEntryData_t* );
	/* ../public/schemasystem/baseschema.h:32 */
	bool IsPresent(const CSchemaMetadataSet* , const char* );
	/* ../public/schemasystem/baseschema.h:33 */
	void* GetPtr(const CSchemaMetadataSet* , const char* );
	/* ../public/schemasystem/baseschema.h:34 */
	int32 GetTagInstanceCount(const CSchemaMetadataSet* , const char* );
	/* ../public/schemasystem/baseschema.h:37 */
	int32 GetEntryCount(const CSchemaMetadataSet* );
	/* ../public/schemasystem/baseschema.h:38 */
	const CSchemaMetadataEntry* GetEntryByIndex(const CSchemaMetadataSet* , int);
protected:
	int32 m_nNumEntries; /* 0 4 */
	const class CSchemaMetadataEntry * m_pEntries; /* 8 8 */
	void CSchemaMetadataSet(class CSchemaMetadataSet *, uint16, const class SchemaMetadataEntryData_t  *); /* linkage=_ZN18CSchemaMetadataSetC4EtPK25SchemaMetadataEntryData_t */
	bool IsPresent(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet9IsPresentEPKc */
	void * GetPtr(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet6GetPtrEPKc */
	int32 GetTagInstanceCount(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet19GetTagInstanceCountEPKc */
	int32 GetEntryCount(const class CSchemaMetadataSet  *); /* linkage=_ZNK18CSchemaMetadataSet13GetEntryCountEv */
	const class CSchemaMetadataEntry  * GetEntryByIndex(const class CSchemaMetadataSet  *, int); /* linkage=_ZNK18CSchemaMetadataSet15GetEntryByIndexEi */
	void GetAllPtrs<void*>(const class CSchemaMetadataSet  *, const char  *, class CUtlVector<void*, CUtlMemory<void*, int> > &); /* linkage=_ZNK18CSchemaMetadataSet10GetAllPtrsIPvEEvPKcR10CUtlVectorIT_10CUtlMemoryIS5_iEE */
};

// <049678E1> ../public/schemasystem/baseschema.h:22
// member functions: 14
// member variables: 2
// class size: 16
class CSchemaMetadataSet {
	/* ../public/schemasystem/baseschema.h:26 */
	void CSchemaMetadataSet(CSchemaMetadataSet* , uint16, const SchemaMetadataEntryData_t* );
	/* ../public/schemasystem/baseschema.h:32 */
	bool IsPresent(const CSchemaMetadataSet* , const char* );
	/* ../public/schemasystem/baseschema.h:33 */
	void* GetPtr(const CSchemaMetadataSet* , const char* );
	/* ../public/schemasystem/baseschema.h:34 */
	int32 GetTagInstanceCount(const CSchemaMetadataSet* , const char* );
	/* ../public/schemasystem/baseschema.h:37 */
	int32 GetEntryCount(const CSchemaMetadataSet* );
	/* ../public/schemasystem/baseschema.h:38 */
	const CSchemaMetadataEntry* GetEntryByIndex(const CSchemaMetadataSet* , int);
protected:
	int32 m_nNumEntries; /* 0 4 */
	const class CSchemaMetadataEntry * m_pEntries; /* 8 8 */
	/* ../public/schemalib/schemametadata.h:31 */
	void GetAllPtrs<void*>(const CSchemaMetadataSet* , const char* , CUtlVector<void*, CUtlMemory<void*, int> >& );
	void CSchemaMetadataSet(class CSchemaMetadataSet *, uint16, const class SchemaMetadataEntryData_t  *); /* linkage=_ZN18CSchemaMetadataSetC4EtPK25SchemaMetadataEntryData_t */
	bool IsPresent(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet9IsPresentEPKc */
	void * GetPtr(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet6GetPtrEPKc */
	int32 GetTagInstanceCount(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet19GetTagInstanceCountEPKc */
	int32 GetEntryCount(const class CSchemaMetadataSet  *); /* linkage=_ZNK18CSchemaMetadataSet13GetEntryCountEv */
	const class CSchemaMetadataEntry  * GetEntryByIndex(const class CSchemaMetadataSet  *, int); /* linkage=_ZNK18CSchemaMetadataSet15GetEntryByIndexEi */
	void GetAllPtrs<void*>(const class CSchemaMetadataSet  *, const char  *, class CUtlVector<void*, CUtlMemory<void*, int> > &); /* linkage=_ZNK18CSchemaMetadataSet10GetAllPtrsIPvEEvPKcR10CUtlVectorIT_10CUtlMemoryIS5_iEE */
};

// <05857939> ../../public/schemasystem/baseschema.h:22
// member functions: 13
// member variables: 2
// class size: 16
class CSchemaMetadataSet {
	/* ../../public/schemasystem/baseschema.h:26 */
	void CSchemaMetadataSet(CSchemaMetadataSet* , uint16, const SchemaMetadataEntryData_t* );
	/* ../../public/schemasystem/baseschema.h:32 */
	bool IsPresent(const CSchemaMetadataSet* , const char* );
	/* ../../public/schemasystem/baseschema.h:33 */
	void* GetPtr(const CSchemaMetadataSet* , const char* );
	/* ../../public/schemasystem/baseschema.h:34 */
	int32 GetTagInstanceCount(const CSchemaMetadataSet* , const char* );
	/* ../../public/schemasystem/baseschema.h:37 */
	int32 GetEntryCount(const CSchemaMetadataSet* );
	/* ../../public/schemasystem/baseschema.h:38 */
	const CSchemaMetadataEntry* GetEntryByIndex(const CSchemaMetadataSet* , int);
protected:
	int32 m_nNumEntries; /* 0 4 */
	const class CSchemaMetadataEntry * m_pEntries; /* 8 8 */
	void CSchemaMetadataSet(class CSchemaMetadataSet *, uint16, const class SchemaMetadataEntryData_t  *); /* linkage=_ZN18CSchemaMetadataSetC4EtPK25SchemaMetadataEntryData_t */
	bool IsPresent(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet9IsPresentEPKc */
	void * GetPtr(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet6GetPtrEPKc */
	int32 GetTagInstanceCount(const class CSchemaMetadataSet  *, const char  *); /* linkage=_ZNK18CSchemaMetadataSet19GetTagInstanceCountEPKc */
	int32 GetEntryCount(const class CSchemaMetadataSet  *); /* linkage=_ZNK18CSchemaMetadataSet13GetEntryCountEv */
	const class CSchemaMetadataEntry  * GetEntryByIndex(const class CSchemaMetadataSet  *, int); /* linkage=_ZNK18CSchemaMetadataSet15GetEntryByIndexEi */
	void GetAllPtrs<void*>(const class CSchemaMetadataSet  *, const char  *, class CUtlVector<void*, CUtlMemory<void*, int> > &); /* linkage=_ZNK18CSchemaMetadataSet10GetAllPtrsIPvEEvPKcR10CUtlVectorIT_10CUtlMemoryIS5_iEE */
};

// <04973440> ../public/schemasystem/baseschema.h:26
void CSchemaMetadataSet::CSchemaMetadataSet(uint16 nNumEntries, const SchemaMetadataEntryData_t* pEntries)
{
} /* size: 0 */

// <0497340F> ../public/schemasystem/baseschema.h:26
inline void CSchemaMetadataSet::CSchemaMetadataSet(uint16 nNumEntries, const SchemaMetadataEntryData_t* pEntries)
{
} /* size: 0 */

// <00130384> ../public/schemasystem/baseschema.h:198
const char* SchemaFindClassBindingBinaryName(ClassIntrospectionHandle_t)
{
} /* size: 0 */

// <001303A0> ../public/schemasystem/baseschema.h:199
const char* SchemaFindClassBindingProjectName(ClassIntrospectionHandle_t)
{
} /* size: 0 */

// <00130318> ../public/schemasystem/baseschema.h:200
const char* SchemaFindEnumBindingBinaryName(EnumIntrospectionHandle_t)
{
} /* size: 0 */

// <00130334> ../public/schemasystem/baseschema.h:201
const char* SchemaFindEnumBindingProjectName(EnumIntrospectionHandle_t)
{
} /* size: 0 */

// <00032D0B> ../public/schemasystem/baseschema.h:231
// member functions: 5
// member variables: 5
// struct size: 40
struct SchemaBaseBindingInfo_t {
	const char * m_pName; /* 0 8 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 8 8 */
	int m_nNumMetadata; /* 16 4 */
	const class CSchemaClassInfo * m_pClass; /* 24 8 */
	const class CSchemaEnumInfo * m_pEnum; /* 32 8 */
	/* ../public/schemasystem/baseschema.h:243 */
	const char* GetBindingName(const SchemaBaseBindingInfo_t* );
	/* ../public/schemasystem/baseschema.h:247 */
	const SchemaMetadataEntryData_t* GetMetadata(const SchemaBaseBindingInfo_t* );
	/* ../public/schemasystem/baseschema.h:251 */
	int GetNumMetadata(const SchemaBaseBindingInfo_t* );
	/* ../public/schemasystem/baseschema.h:256 */
	const CSchemaClassInfo* AsClassBinding(const SchemaBaseBindingInfo_t* );
	/* ../public/schemasystem/baseschema.h:260 */
	const CSchemaEnumInfo* AsEnumBinding(const SchemaBaseBindingInfo_t* );
};

// <00026084> ../../public/schemasystem/baseschema.h:231
// member functions: 5
// member variables: 5
// struct size: 40
struct SchemaBaseBindingInfo_t {
	const char * m_pName; /* 0 8 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 8 8 */
	int m_nNumMetadata; /* 16 4 */
	const class CSchemaClassInfo * m_pClass; /* 24 8 */
	const class CSchemaEnumInfo * m_pEnum; /* 32 8 */
	/* ../../public/schemasystem/baseschema.h:243 */
	const char* GetBindingName(const SchemaBaseBindingInfo_t* );
	/* ../../public/schemasystem/baseschema.h:247 */
	const SchemaMetadataEntryData_t* GetMetadata(const SchemaBaseBindingInfo_t* );
	/* ../../public/schemasystem/baseschema.h:251 */
	int GetNumMetadata(const SchemaBaseBindingInfo_t* );
	/* ../../public/schemasystem/baseschema.h:256 */
	const CSchemaClassInfo* AsClassBinding(const SchemaBaseBindingInfo_t* );
	/* ../../public/schemasystem/baseschema.h:260 */
	const CSchemaEnumInfo* AsEnumBinding(const SchemaBaseBindingInfo_t* );
};

// <0013B499> ../public/schemasystem/baseschema.h:243
inline void SchemaBaseBindingInfo_t::GetBindingName()
{
} /* size: 0 */

// <0013B480> ../public/schemasystem/baseschema.h:256
inline void SchemaBaseBindingInfo_t::AsClassBinding()
{
} /* size: 0 */

// <0013B467> ../public/schemasystem/baseschema.h:260
inline void SchemaBaseBindingInfo_t::AsEnumBinding()
{
} /* size: 0 */

// <001287C5> ../public/schemasystem/baseschema.h:272
const CSchemaClassInfo* SchemaClassInfoPrimaryBinding(const CSchemaClassInfo *)
{
} /* size: 0 */

// <049537E4> ../public/schemasystem/baseschema.h:387
// variables: 2
inline void SchemaMetaTag_AssertValidLocationFlag(uint32 uLocationFlag, uint32 uMetaFlags, const char* szLocationName)
{
	const char   __FUNCTION__; // 53355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
} /* size: 0, variables: 1 */

// <00E87DF7> ../public/schemasystem/baseschema.h:387
// variables: 2
inline void SchemaMetaTag_AssertValidLocationFlag(uint32 uLocationFlag, uint32 uMetaFlags, const char* szLocationName)
{
	const char   __FUNCTION__; // 10940
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
} /* size: 0, variables: 1 */

// <00103CEE> ../public/schemasystem/baseschema.h:387
// variables: 2
inline void SchemaMetaTag_AssertValidLocationFlag(uint32 uLocationFlag, uint32 uMetaFlags, const char* szLocationName)
{
	const char   __FUNCTION__; // 53482
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
} /* size: 0, variables: 1 */

// <019D89B0> ../public/schemasystem/baseschema.h:387
// variables: 2
inline void SchemaMetaTag_AssertValidLocationFlag(uint32 uLocationFlag, uint32 uMetaFlags, const char* szLocationName)
{
	const char   __FUNCTION__; // 11932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
} /* size: 0, variables: 1 */

// <00929D7F> ../public/schemasystem/baseschema.h:387
// variables: 2
inline void SchemaMetaTag_AssertValidLocationFlag(uint32 uLocationFlag, uint32 uMetaFlags, const char* szLocationName)
{
	const char   __FUNCTION__; // 42982
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
} /* size: 0, variables: 1 */

