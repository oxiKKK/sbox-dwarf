
//
// schemasystem/introspectedresourcetokv3.cpp
//
//	referenced by: libschemasystem.so
//
//	functions: 39
//	classes: 6
//	structs: 3
//

// <00154FF3> schemasystem/introspectedresourcetokv3.cpp:23
// member variables: 5
// struct size: 32
struct KV3ConvertSpecialFieldBehavior_t {
	const char * m_pStructName; /* 0 8 */
	const char * m_pFieldName; /* 8 8 */
	KV3ConvertSpecialFieldBehaviorType_t m_nBehavior; /* 16 4 */
	int m_nOuterArraySize; /* 20 4 */
	int m_nInnerArraySize; /* 24 4 */
};

// <00155244> schemasystem/introspectedresourcetokv3.cpp:163
// member functions: 2
// member variables: 5
// struct size: 24
struct SchemaFieldProperties_t {
	/* schemasystem/introspectedresourcetokv3.cpp:166 */
	const SchemaFieldProperties_t* GetFieldProperties(SchemaFieldType_t);
	SchemaFieldType_t m_nFieldType; /* 0 4 */
	uint m_nMemorySize; /* 4 4 */
	uint m_nDiskSize; /* 8 4 */
	uint m_nAlignment; /* 12 4 */
	const char * m_pTypeName; /* 16 8 */
	/* schemasystem/introspectedresourcetokv3.cpp:174 */
	void SchemaFieldProperties_t(SchemaFieldProperties_t* , SchemaFieldType_t, const char* , uint, uint, uint);
};

// <0016EAE6> schemasystem/introspectedresourcetokv3.cpp:174
void SchemaFieldProperties_t::SchemaFieldProperties_t(SchemaFieldType_t nFieldType, const char* pTypeName, uint nMemorySize, uint nDiskSize, uint nAlignment)
{
} /* size: 0 */

// <0016EA91> schemasystem/introspectedresourcetokv3.cpp:174
inline void SchemaFieldProperties_t::SchemaFieldProperties_t(SchemaFieldType_t nFieldType, const char* pTypeName, uint nMemorySize, uint nDiskSize, uint nAlignment)
{
} /* size: 0 */

// <00155301> schemasystem/introspectedresourcetokv3.cpp:187
// member functions: 2
// member variables: 5
// struct size: 24
struct SchemaIndirectionProperties_t {
	/* schemasystem/introspectedresourcetokv3.cpp:190 */
	const SchemaIndirectionProperties_t* GetIndirectionProperties(SchemaIndirectionType_t);
	SchemaIndirectionType_t m_nIndirectionType; /* 0 4 */
	uint m_nMemorySize; /* 4 4 */
	uint m_nDiskSize; /* 8 4 */
	uint m_nAlignment; /* 12 4 */
	const char * m_pIndirectionName; /* 16 8 */
	/* schemasystem/introspectedresourcetokv3.cpp:198 */
	void SchemaIndirectionProperties_t(SchemaIndirectionProperties_t* , SchemaIndirectionType_t, const char* , uint, uint, uint);
};

// <0016EA61> schemasystem/introspectedresourcetokv3.cpp:198
void SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(SchemaIndirectionType_t nIndirectionType, const char* pIndirectionName, uint nMemorySize, uint nDiskSize, uint nAlignment)
{
} /* size: 0 */

// <0016EA0C> schemasystem/introspectedresourcetokv3.cpp:198
inline void SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(SchemaIndirectionType_t nIndirectionType, const char* pIndirectionName, uint nMemorySize, uint nDiskSize, uint nAlignment)
{
} /* size: 0 */

// <001556ED> schemasystem/introspectedresourcetokv3.cpp:211
// member functions: 10
// member variables: 6
// class size: 24
class CResourceDiskStructField {
	/* schemasystem/introspectedresourcetokv3.cpp:214 */
	SchemaFieldType_t GetType(const CResourceDiskStructField* );
	/* schemasystem/introspectedresourcetokv3.cpp:215 */
	uint32 GetTypeData(const CResourceDiskStructField* );
	/* schemasystem/introspectedresourcetokv3.cpp:216 */
	SchemaIndirectionType_t ReadIndirection(const CResourceDiskStructField* , int);
	/* schemasystem/introspectedresourcetokv3.cpp:222 */
	int GetElementDiskSize(const CResourceDiskStructField* , int, const CResourceIntrospectionManifest* );
	/* schemasystem/introspectedresourcetokv3.cpp:224 */
	int16 GetDiskOffset(const CResourceDiskStructField* );
	CResourceString m_pFieldName; /* 0 4 */
	int16 m_nCount; /* 4 2 */
	int16 m_nOnDiskOffset; /* 6 2 */
	CResourceArray<unsigned char> m_Indirection; /* 8 8 */
	uint32 m_nTypeData; /* 16 4 */
	int16 m_nType; /* 20 2 */
	enum SchemaFieldType_t GetType(const class CResourceDiskStructField  *); /* linkage=_ZNK24CResourceDiskStructField7GetTypeEv */
	uint32 GetTypeData(const class CResourceDiskStructField  *); /* linkage=_ZNK24CResourceDiskStructField11GetTypeDataEv */
	enum SchemaIndirectionType_t ReadIndirection(const class CResourceDiskStructField  *, int); /* linkage=_ZNK24CResourceDiskStructField15ReadIndirectionEi */
	int GetElementDiskSize(const class CResourceDiskStructField  *, int, const class CResourceIntrospectionManifest  *); /* linkage=_ZNK24CResourceDiskStructField18GetElementDiskSizeEiPK30CResourceIntrospectionManifest */
	int16 GetDiskOffset(const class CResourceDiskStructField  *); /* linkage=_ZNK24CResourceDiskStructField13GetDiskOffsetEv */
};

// <0016E9F3> schemasystem/introspectedresourcetokv3.cpp:214
inline void CResourceDiskStructField::GetType()
{
} /* size: 0 */

// <0016E9DA> schemasystem/introspectedresourcetokv3.cpp:215
inline void CResourceDiskStructField::GetTypeData()
{
} /* size: 0 */

// <0016E98C> schemasystem/introspectedresourcetokv3.cpp:216
// variables: 2
inline void CResourceDiskStructField::ReadIndirection(int nIndirection)
{
	const char   __FUNCTION__; // 27384
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 1 */

// <0016E973> schemasystem/introspectedresourcetokv3.cpp:224
inline void CResourceDiskStructField::GetDiskOffset()
{
} /* size: 0 */

// <00155C4B> schemasystem/introspectedresourcetokv3.cpp:237
// member functions: 6
// member variables: 10
// class size: 40
class CResourceDiskStruct {
	/* schemasystem/introspectedresourcetokv3.cpp:240 */
	int GetFieldCount(const CResourceDiskStruct* );
	/* schemasystem/introspectedresourcetokv3.cpp:245 */
	const CResourceDiskStructField* GetField(const CResourceDiskStruct* , int);
	/* schemasystem/introspectedresourcetokv3.cpp:250 */
	bool HasVTable(const CResourceDiskStruct* );
	uint32 m_nIntrospectionVersion; /* 0 4 */
	ResourceStructureId_t m_nId; /* 4 4 */
	CResourceString m_pName; /* 8 4 */
	uint32 m_nDiskCrc; /* 12 4 */
	int32 m_nUserVersion; /* 16 4 */
	uint16 m_nDiskSize; /* 20 2 */
	uint16 m_nAlignment; /* 22 2 */
	uint32 m_nBaseStructId; /* 24 4 */
	CResourceArray<CResourceDiskStructField> m_FieldIntrospection; /* 28 8 */
	uint8 m_nStructFlags; /* 36 1 */
	int GetFieldCount(const class CResourceDiskStruct  *); /* linkage=_ZNK19CResourceDiskStruct13GetFieldCountEv */
	const class CResourceDiskStructField  * GetField(const class CResourceDiskStruct  *, int); /* linkage=_ZNK19CResourceDiskStruct8GetFieldEi */
	bool HasVTable(const class CResourceDiskStruct  *); /* linkage=_ZNK19CResourceDiskStruct9HasVTableEv */
};

// <0016E95A> schemasystem/introspectedresourcetokv3.cpp:240
inline void CResourceDiskStruct::GetFieldCount()
{
} /* size: 0 */

// <0016E935> schemasystem/introspectedresourcetokv3.cpp:245
inline void CResourceDiskStruct::GetField(int nIndex)
{
} /* size: 0 */

// <0016E91C> schemasystem/introspectedresourcetokv3.cpp:250
inline void CResourceDiskStruct::HasVTable()
{
} /* size: 0 */

// <00155D71> schemasystem/introspectedresourcetokv3.cpp:273
// member variables: 2
// class size: 8
class CResourceDiskEnumValue {
	CResourceString m_pEnumValueName; /* 0 4 */
	int32 m_nEnumValue; /* 4 4 */
};

// <001560F2> schemasystem/introspectedresourcetokv3.cpp:283
// member functions: 4
// member variables: 6
// class size: 28
class CResourceDiskEnum {
	/* schemasystem/introspectedresourcetokv3.cpp:286 */
	int GetEnumValueCount(const CResourceDiskEnum* );
	/* schemasystem/introspectedresourcetokv3.cpp:291 */
	const char* FindEnumString(const CResourceDiskEnum* , int);
	uint32 m_nIntrospectionVersion; /* 0 4 */
	ResourceStructureId_t m_nId; /* 4 4 */
	CResourceString m_pName; /* 8 4 */
	uint32 m_nDiskCrc; /* 12 4 */
	int32 m_nUserVersion; /* 16 4 */
	CResourceArray<CResourceDiskEnumValue> m_EnumValueIntrospection; /* 20 8 */
	int GetEnumValueCount(const class CResourceDiskEnum  *); /* linkage=_ZNK17CResourceDiskEnum17GetEnumValueCountEv */
	const char  * FindEnumString(const class CResourceDiskEnum  *, int); /* linkage=_ZNK17CResourceDiskEnum14FindEnumStringEi */
};

// <00155824> schemasystem/introspectedresourcetokv3.cpp:316
// member functions: 8
// member variables: 3
// class size: 20
class CResourceIntrospectionManifest {
	/* schemasystem/introspectedresourcetokv3.cpp:319 */
	uint32 GetVersion(const CResourceIntrospectionManifest* );
	/* schemasystem/introspectedresourcetokv3.cpp:324 */
	const CResourceDiskStruct* GetStruct(const CResourceIntrospectionManifest* , int);
	/* schemasystem/introspectedresourcetokv3.cpp:329 */
	const CResourceDiskStruct* FindDiskStruct_Slow(const CResourceIntrospectionManifest* , const char* );
	/* schemasystem/introspectedresourcetokv3.cpp:334 */
	const CResourceDiskStruct* FindDiskStruct_Slow(const CResourceIntrospectionManifest* , ResourceStructureId_t);
	uint32 m_nIntrospectionVersion; /* 0 4 */
	CResourceArray<CResourceDiskStruct> m_ReferencedStructs; /* 4 8 */
	CResourceArray<CResourceDiskEnum> m_ReferencedEnums; /* 12 8 */
	uint32 GetVersion(const class CResourceIntrospectionManifest  *); /* linkage=_ZNK30CResourceIntrospectionManifest10GetVersionEv */
	const class CResourceDiskStruct  * GetStruct(const class CResourceIntrospectionManifest  *, int); /* linkage=_ZNK30CResourceIntrospectionManifest9GetStructEi */
	const class CResourceDiskStruct  * FindDiskStruct_Slow(const class CResourceIntrospectionManifest  *, const char  *); /* linkage=_ZNK30CResourceIntrospectionManifest19FindDiskStruct_SlowEPKc */
	const class CResourceDiskStruct  * FindDiskStruct_Slow(const class CResourceIntrospectionManifest  *, ResourceStructureId_t); /* linkage=_ZNK30CResourceIntrospectionManifest19FindDiskStruct_SlowEj */
};

// <0016E903> schemasystem/introspectedresourcetokv3.cpp:319
inline void CResourceIntrospectionManifest::GetVersion()
{
} /* size: 0 */

// <0016E8DD> schemasystem/introspectedresourcetokv3.cpp:324
inline void CResourceIntrospectionManifest::GetStruct(int nIndex)
{
} /* size: 0 */

// <0016D4EC> schemasystem/introspectedresourcetokv3.cpp:394
// variables: 4
// function calls: 45
void GetFieldProperties(SchemaFieldType_t nFieldType)
{
	SchemaFieldProperties_t s_pSchemaFieldTypes; // 397
	const char   __FUNCTION__; // 27460
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 459
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 460
	}
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
	SchemaFieldProperties_t::SchemaFieldProperties_t(
				SchemaFieldType_t nFieldType,
				const char* pTypeName,
				uint nMemorySize,
				uint nDiskSize,
				uint nAlignment);  // 456
} /* size: 1977, variables: 2, inline expansions: 45 (1790 bytes) */

// <0016CFEF> schemasystem/introspectedresourcetokv3.cpp:465
// variables: 4
// function calls: 9
void GetIndirectionProperties(SchemaIndirectionType_t nIndirectionType)
{
	SchemaIndirectionProperties_t s_pSchemaIndirectionTypes; // 467
	const char   __FUNCTION__; // 27602
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 484
	}
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
	SchemaIndirectionProperties_t::SchemaIndirectionProperties_t(
					SchemaIndirectionType_t nIndirectionType,
					const char* pIndirectionName,
					uint nMemorySize,
					uint nDiskSize,
					uint nAlignment);  // 480
} /* size: 444, variables: 2, inline expansions: 9 (257 bytes) */

// <00166E5B> schemasystem/introspectedresourcetokv3.cpp:491
// variables: 10
// function calls: 60
void CResourceToKV3::~CResourceToKV3()
{
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::Count(); // 897
			CUtlHashtableEntry<const CResourceDiskStructField::IsValid(); // 899
			CUtlHashtableEntry<const CResourceDiskStructField::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> >(CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* pMemory); // 902
		}
	}
	CUtlHashtable<const CResourceDiskStructField::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<const CResourceDiskStructField*, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::~CUtlMemory(); // 188
	CUtlHashtable<const CResourceDiskStructField::~CUtlHashtable(); // 491
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::Count(); // 897
			CUtlHashtableEntry<const CResourceDiskStructField::IsValid(); // 899
			CUtlHashtableEntry<const CResourceDiskStructField::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> >(CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* pMemory); // 902
		}
	}
	CUtlHashtable<const CResourceDiskStructField::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::~CUtlMemory(); // 188
	CUtlHashtable<const CResourceDiskStructField::~CUtlHashtable(); // 491
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::Count(); // 897
			CUtlHashtableEntry<long long unsigned int, char const::IsValid(); // 899
			CUtlHashtableEntry<long long unsigned int, char const::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<long long unsigned int, char const*> >(CUtlKeyValuePair<long long unsigned int, char const*>* pMemory); // 902
		}
	}
	CUtlHashtable<long long unsigned int, char const::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<long long unsigned int, char const*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::~CUtlMemory(); // 188
	CUtlHashtable<long long unsigned int, char const::~CUtlHashtable(); // 491
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::Count(); // 897
			CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> >(CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* pMemory); // 902
		}
	}
	CUtlHashtable<unsigned int, const CResourceDiskEnum::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::~CUtlMemory(); // 188
	CUtlHashtable<unsigned int, const CResourceDiskEnum::~CUtlHashtable(); // 491
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::Count(); // 897
			CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> >(CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* pMemory); // 902
		}
	}
	CUtlHashtable<unsigned int, const CResourceDiskStruct::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::~CUtlMemory(); // 188
	CUtlHashtable<unsigned int, const CResourceDiskStruct::~CUtlHashtable(); // 491
} /* size: 630, inline expansions: 35 (1409 bytes) */

// <00166E3D> schemasystem/introspectedresourcetokv3.cpp:491
inline void CResourceToKV3::~CResourceToKV3()
{
} /* size: 0 */

// <0015E2F6> schemasystem/introspectedresourcetokv3.cpp:491
// member functions: 28
// member variables: 9
// class size: 192
class CResourceToKV3 {
private:
	const void * m_pDataRoot; /* 0 8 */
	size_t m_nDataSize; /* 8 8 */
	const class CResourceDiskStruct * m_pTargetRootBinding; /* 16 8 */
	CUtlHashtable<unsigned int, const CResourceDiskStruct*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct*>, int> > m_ClassHash; /* 24 32 */
	CUtlHashtable<unsigned int, const CResourceDiskEnum*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum*>, int> > m_EnumHash; /* 56 32 */
	CUtlHashtable<long long unsigned int, char const*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const*>, int> > m_ExtRefIDToName; /* 88 32 */
	CUtlHashtable<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*, DefaultHashFunctor<const CResourceDiskStructField*>, DefaultEqualFunctor<const CResourceDiskStructField*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>, int> > m_SpecialFields; /* 120 32 */
	CUtlHashtable<const CResourceDiskStructField*, empty_t, DefaultHashFunctor<const CResourceDiskStructField*>, DefaultEqualFunctor<const CResourceDiskStructField*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField*, empty_t>, int> > m_DiscardFields; /* 152 32 */
	bool m_bEncounteredErrors; /* 184 1 */
	/* schemasystem/introspectedresourcetokv3.cpp:507 */
	void CResourceToKV3(CResourceToKV3* , const void* , size_t, const CResourceIntrospectionManifest* , const ResourceExtRefList_t* , const char* );
	/* schemasystem/introspectedresourcetokv3.cpp:509 */
	bool DoConvert(CResourceToKV3* , KeyValues3* );
	/* schemasystem/introspectedresourcetokv3.cpp:518 */
	const CResourceDiskStruct* LookupClassByName(CResourceToKV3* , const char* );
	/* schemasystem/introspectedresourcetokv3.cpp:519 */
	const CResourceDiskStruct* LookupClassByID(CResourceToKV3* , uint32);
	/* schemasystem/introspectedresourcetokv3.cpp:520 */
	const CResourceDiskEnum* LookupEnumByID(CResourceToKV3* , uint32);
	/* schemasystem/introspectedresourcetokv3.cpp:521 */
	const CResourceDiskStruct* DeduceDerivedTypeFromDisk(CResourceToKV3* , const CResourceDiskStruct* , const void* );
	/* schemasystem/introspectedresourcetokv3.cpp:522 */
	const char* LookupExtRef(CResourceToKV3* , ResourceId_t);
	/* schemasystem/introspectedresourcetokv3.cpp:524 */
	bool TraverseStruct(CResourceToKV3* , const CResourceDiskStruct* , const void* , KeyValues3* );
	/* schemasystem/introspectedresourcetokv3.cpp:525 */
	bool TraverseStruct_NoBaseClasses(CResourceToKV3* , const CResourceDiskStruct* , const void* , KeyValues3* );
	/* schemasystem/introspectedresourcetokv3.cpp:526 */
	bool TraverseField(CResourceToKV3* , const void* , const CResourceDiskStructField* , int, KeyValues3* );
	/* schemasystem/introspectedresourcetokv3.cpp:527 */
	bool TraverseEnum(CResourceToKV3* , const void* , const CResourceDiskEnum* , KeyValues3* );
	/* schemasystem/introspectedresourcetokv3.cpp:528 */
	bool TraverseDataField(CResourceToKV3* , const void* , const CResourceDiskStructField* , KeyValues3* );
	/* schemasystem/introspectedresourcetokv3.cpp:530 */
	int GetElementDiskSize(const CResourceToKV3* , const CResourceDiskStructField* , int);
	void ~CResourceToKV3(CResourceToKV3* );
	void CResourceToKV3(class CResourceToKV3 *, const void  *, size_t, const class CResourceIntrospectionManifest  *, const class ResourceExtRefList_t  *, const char  *); /* linkage=_ZN14CResourceToKV3C4EPKvmPK30CResourceIntrospectionManifestPK20ResourceExtRefList_tPKc */
	bool DoConvert(class CResourceToKV3 *, class KeyValues3 *); /* linkage=_ZN14CResourceToKV39DoConvertEP10KeyValues3 */
	/* <16fec7> schemasystem/introspectedresourcetokv3.cpp:658 */
	const class CResourceDiskStruct  * LookupClassByName(class CResourceToKV3 *, const char  *); /* linkage=_ZN14CResourceToKV317LookupClassByNameEPKc */
	/* <16fbc3> schemasystem/introspectedresourcetokv3.cpp:666 */
	const class CResourceDiskStruct  * LookupClassByID(class CResourceToKV3 *, uint32); /* linkage=_ZN14CResourceToKV315LookupClassByIDEj */
	const class CResourceDiskEnum  * LookupEnumByID(class CResourceToKV3 *, uint32); /* linkage=_ZN14CResourceToKV314LookupEnumByIDEj */
	/* <16fdd5> schemasystem/introspectedresourcetokv3.cpp:692 */
	const class CResourceDiskStruct  * DeduceDerivedTypeFromDisk(class CResourceToKV3 *, const class CResourceDiskStruct  *, const void  *); /* linkage=_ZN14CResourceToKV325DeduceDerivedTypeFromDiskEPK19CResourceDiskStructPKv */
	const char  * LookupExtRef(class CResourceToKV3 *, class ResourceId_t); /* linkage=_ZN14CResourceToKV312LookupExtRefE12ResourceId_t */
	bool TraverseStruct(class CResourceToKV3 *, const class CResourceDiskStruct  *, const void  *, class KeyValues3 *); /* linkage=_ZN14CResourceToKV314TraverseStructEPK19CResourceDiskStructPKvP10KeyValues3 */
	bool TraverseStruct_NoBaseClasses(class CResourceToKV3 *, const class CResourceDiskStruct  *, const void  *, class KeyValues3 *); /* linkage=_ZN14CResourceToKV328TraverseStruct_NoBaseClassesEPK19CResourceDiskStructPKvP10KeyValues3 */
	bool TraverseField(class CResourceToKV3 *, const void  *, const class CResourceDiskStructField  *, int, class KeyValues3 *); /* linkage=_ZN14CResourceToKV313TraverseFieldEPKvPK24CResourceDiskStructFieldiP10KeyValues3 */
	/* <16f75d> schemasystem/introspectedresourcetokv3.cpp:933 */
	bool TraverseEnum(class CResourceToKV3 *, const void  *, const class CResourceDiskEnum  *, class KeyValues3 *); /* linkage=_ZN14CResourceToKV312TraverseEnumEPKvPK17CResourceDiskEnumP10KeyValues3 */
	bool TraverseDataField(class CResourceToKV3 *, const void  *, const class CResourceDiskStructField  *, class KeyValues3 *); /* linkage=_ZN14CResourceToKV317TraverseDataFieldEPKvPK24CResourceDiskStructFieldP10KeyValues3 */
	/* <16f864> schemasystem/introspectedresourcetokv3.cpp:625 */
	int GetElementDiskSize(const class CResourceToKV3  *, const class CResourceDiskStructField  *, int); /* linkage=_ZNK14CResourceToKV318GetElementDiskSizeEPK24CResourceDiskStructFieldi */
	void ~CResourceToKV3(class CResourceToKV3 *); /* linkage=_ZN14CResourceToKV3D4Ev */
};

// <0016CFBC> schemasystem/introspectedresourcetokv3.cpp:509
// variable: 1
inline void CResourceToKV3::DoConvert(KeyValues3* pTargetKV3)
{
	const CResourceDiskStruct* pBinding; // 511
} /* size: 0, variables: 1 */

// <0016B299> schemasystem/introspectedresourcetokv3.cpp:536
// variables: 32
// function calls: 112
void CResourceToKV3::CResourceToKV3(const void* pDataRoot, size_t nDataSize, const CResourceIntrospectionManifest* pManifest, const ResourceExtRefList_t* pExtList, const char* pRootStructName)
{
	{
		int i; // 548
		{
			uint64 nResourceId; // 550
			const char* pResourceName; // 551
		}
	}
	{
		int i; // 562
		{
			const CResourceDiskStruct& diskStruct; // 564
		}
	}
	{
		int i; // 568
		{
			const CResourceDiskEnum& diskEnum; // 570
		}
	}
	{
		const KV3ConvertSpecialFieldBehavior_t& specialFieldBehavior; // 577
		KV3ConvertSpecialFieldBehavior_t& __for_range; // 16906
		KV3ConvertSpecialFieldBehavior_t* __for_begin; // 16916
		KV3ConvertSpecialFieldBehavior_t* __for_end; // 16926
		{
			const char* pStructName; // 579
			const char* pFieldName; // 580
			const CResourceDiskStruct* pStruct; // 582
			const CResourceDiskStructField* pField; // 586
			{
				int iStructField; // 587
			}
			{
			}
		}
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<unsigned int, const CResourceDiskStruct::Init(); // 178
	CUtlHashtable<unsigned int, const CResourceDiskStruct::CUtlHashtable(
			int minimumSize);  // 536
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<unsigned int, const CResourceDiskEnum::Init(); // 178
	CUtlHashtable<unsigned int, const CResourceDiskEnum::CUtlHashtable(
			int minimumSize);  // 536
	CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<long long unsigned int, char const::Init(); // 178
	CUtlHashtable<long long unsigned int, char const::CUtlHashtable(
			int minimumSize);  // 536
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const CResourceDiskStructField::Init(); // 178
	CUtlHashtable<const CResourceDiskStructField::CUtlHashtable(
			int minimumSize);  // 536
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const CResourceDiskStructField::Init(); // 178
	CUtlHashtable<const CResourceDiskStructField::CUtlHashtable(
			int minimumSize);  // 536
	CResourceArrayBase::Count(); // 546
	CUtlHashtable<long long unsigned int, char const::Reserve(
		int expected);  // 287
	CUtlHashtable<long long unsigned int, char const::Reserve(
		int expected);  // 546
	{
		int i; // 548
		CResourceArrayBase::Count(); // 548
		{
			uint64 nResourceId; // 550
			const char* pResourceName; // 551
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<ResourceReferenceInfo_t>::GetPtr(); // 379
			CResourceArray<ResourceReferenceInfo_t>::operator[](
					int nIndex);  // 550
			ResolveOffset(const int32* pOffset); // 160
			CResourcePointerBase::GetRawPtr(); // 688
			ResolveOffset(const int32* pOffset); // 160
			CResourcePointerBase::GetRawPtr(); // 682
			CResourceString::GetPtr(); // 551
			Mix64HashFunctor::operator(
					uint64 s);  // 249
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::operator[](
					int i);  // 720
			CUtlKeyValuePair<long long unsigned int, char const::CUtlKeyValuePair<long long unsigned int, char const*>(
										const long long unsigned int& k,
										const char* const& v);  // 1514
			Construct<CUtlKeyValuePair<long long unsigned int, char const*>, long long unsigned int&, char const*&>(CUtlKeyValuePair<long long unsigned int, char const*>* pMemory); // 720
			CUtlHashtable<long long unsigned int, char const::DoInsert<long long unsigned int>(
							long long unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
			CUtlHashtable<long long unsigned int, char const::DoInsert<long long unsigned int>(
							long long unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
			CUtlHashtable<long long unsigned int, char const::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 552
			CResourceArray<ResourceReferenceInfo_t>::operator[](
					int nIndex);  // 551
		}
	}
	CResourceArrayBase::Count(); // 559
	CUtlHashtable<unsigned int, const CResourceDiskStruct::Reserve(
		int expected);  // 287
	CUtlHashtable<unsigned int, const CResourceDiskStruct::Reserve(
		int expected);  // 559
	CResourceArrayBase::Count(); // 560
	CUtlHashtable<unsigned int, const CResourceDiskEnum::Reserve(
		int expected);  // 287
	CUtlHashtable<unsigned int, const CResourceDiskEnum::Reserve(
		int expected);  // 560
	{
		int i; // 562
		CResourceArrayBase::Count(); // 562
		{
			const CResourceDiskStruct& diskStruct; // 564
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<CResourceDiskStruct>::GetPtr(); // 379
			CResourceArray<CResourceDiskStruct>::operator[](
					int nIndex);  // 564
			CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, const CResourceDiskStruct::CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(
											const unsigned int& k,
											const CResourceDiskStruct* const& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>, unsigned int&, const CResourceDiskStruct*&>(CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* pMemory); // 720
			CUtlHashtable<unsigned int, const CResourceDiskStruct::DoInsert<unsigned int>(
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			CUtlHashtable<unsigned int, const CResourceDiskStruct::DoInsert<unsigned int>(
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Mix32HashFunctor::operator(
					uint32 n);  // 249
			CUtlHashtable<unsigned int, const CResourceDiskStruct::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 565
		}
	}
	{
		int i; // 568
		CResourceArrayBase::Count(); // 568
		{
			const CResourceDiskEnum& diskEnum; // 570
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<CResourceDiskEnum>::GetPtr(); // 379
			CResourceArray<CResourceDiskEnum>::operator[](
					int nIndex);  // 570
			CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, const CResourceDiskEnum::CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(
										const unsigned int& k,
										const CResourceDiskEnum* const& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>, unsigned int&, const CResourceDiskEnum*&>(CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* pMemory); // 720
			CUtlHashtable<unsigned int, const CResourceDiskEnum::DoInsert<unsigned int>(
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			CUtlHashtable<unsigned int, const CResourceDiskEnum::DoInsert<unsigned int>(
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Mix32HashFunctor::operator(
					uint32 n);  // 249
			CUtlHashtable<unsigned int, const CResourceDiskEnum::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 571
		}
	}
	{
		const KV3ConvertSpecialFieldBehavior_t& specialFieldBehavior; // 577
		KV3ConvertSpecialFieldBehavior_t& __for_range; // 16906
		KV3ConvertSpecialFieldBehavior_t* __for_begin; // 16916
		KV3ConvertSpecialFieldBehavior_t* __for_end; // 16926
		{
			const char* pStructName; // 579
			const char* pFieldName; // 580
			const CResourceDiskStruct* pStruct; // 582
			const CResourceDiskStructField* pField; // 586
			{
				int iStructField; // 587
				ResolveOffset(const int32* pOffset); // 160
				CResourcePointerBase::GetRawPtr(); // 706
				ResolveOffset(const int32* pOffset); // 160
				CResourcePointerBase::GetRawPtr(); // 712
				CResourceString::operator char const*(); // 590
				CResourceArrayBase::Count(); // 242
				CResourceDiskStruct::GetFieldCount(); // 587
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 416
				CResourceArray<CResourceDiskStructField>::GetPtr(); // 379
				CResourceArray<CResourceDiskStructField>::operator[](
						int nIndex);  // 247
				CResourceDiskStruct::GetField(
					int nIndex);  // 589
				V_strcmp(const char* s1,
					const char* s2);  // 590
			}
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			CUtlHashtable<unsigned int, const CResourceDiskStruct::Find(
				KeyArg_t k);  // 668
			CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::operator[](
					int i);  // 297
			CUtlHashtable<unsigned int, const CResourceDiskStruct::operator[](
					handle_t idx);  // 673
			CResourceToKV3::LookupClassByID(
					uint32 nStructId);  // 660
			CResourceToKV3::LookupClassByName(
						const char* pClass);  // 582
			{
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 240
				CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::operator[](
						int i);  // 706
				CUtlKeyValuePair<const CResourceDiskStructField::CUtlKeyValuePair<const CResourceDiskStructField*>(
											const CResourceDiskStructField* const& k);  // 1514
				Construct<CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>, const CResourceDiskStructField*&>(CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* pMemory); // 706
				CUtlHashtable<const CResourceDiskStructField::DoInsert<const CResourceDiskStructField*>(
										const CResourceDiskStructField* k,
										unsigned int h,
										bool* pDidInsert);  // 695
				CUtlHashtable<const CResourceDiskStructField::DoInsert<const CResourceDiskStructField*>(
										const CResourceDiskStructField* k,
										unsigned int h,
										bool* pDidInsert);  // 240
				CUtlHashtable<const CResourceDiskStructField::Insert(
					KeyArg_t k);  // 601
				CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::operator[](
						int i);  // 720
				CUtlKeyValuePair<const CResourceDiskStructField::CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(
																const CResourceDiskStructField* const& k,
																const KV3ConvertSpecialFieldBehavior_t* const& v);  // 1514
				Construct<CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>, const CResourceDiskStructField*&, const KV3ConvertSpecialFieldBehavior_t*&>(CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* pMemory); // 720
				CUtlHashtable<const CResourceDiskStructField::DoInsert<const CResourceDiskStructField*>(
										const CResourceDiskStructField* k,
										Arg_t v,
										unsigned int h,
										bool* pDidInsert);  // 714
				CUtlHashtable<const CResourceDiskStructField::DoInsert<const CResourceDiskStructField*>(
										const CResourceDiskStructField* k,
										Arg_t v,
										unsigned int h,
										bool* pDidInsert);  // 249
				CUtlHashtable<const CResourceDiskStructField::Insert(
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 605
				_DebuggerBreakInlineExpressionWrapper(void); // 597
			}
		}
	}
	V_isempty(const char* pszString); // 612
	ResolveOffset(const int32* pOffset); // 304
	CResourceArrayBase::GetRawPtr(); // 416
	CResourceArray<CResourceDiskStruct>::GetPtr(); // 379
	CResourceArray<CResourceDiskStruct>::operator[](
			int nIndex);  // 326
	CResourceIntrospectionManifest::GetStruct(
			int nIndex);  // 614
	CResourceToKV3::LookupClassByName(
				const char* pClass);  // 618
} /* size: 0, inline expansions: 36 (668 bytes) */

// <0016B02D> schemasystem/introspectedresourcetokv3.cpp:536
// variables: 16
void CResourceToKV3::CResourceToKV3(const void* pDataRoot, size_t nDataSize, const CResourceIntrospectionManifest* pManifest, const ResourceExtRefList_t* pExtList, const char* pRootStructName)
{
	{
		int i; // 548
		{
			uint64 nResourceId; // 550
			const char* pResourceName; // 551
		}
	}
	{
		int i; // 562
		{
			const CResourceDiskStruct& diskStruct; // 564
		}
	}
	{
		int i; // 568
		{
			const CResourceDiskEnum& diskEnum; // 570
		}
	}
	{
		const KV3ConvertSpecialFieldBehavior_t& specialFieldBehavior; // 577
		KV3ConvertSpecialFieldBehavior_t& __for_range; // 17294
		KV3ConvertSpecialFieldBehavior_t* __for_begin; // 17300
		KV3ConvertSpecialFieldBehavior_t* __for_end; // 17300
		{
			const char* pStructName; // 579
			const char* pFieldName; // 580
			const CResourceDiskStruct* pStruct; // 582
			const CResourceDiskStructField* pField; // 586
			{
				int iStructField; // 587
			}
			{
			}
		}
	}
} /* size: 0 */

// <0016F864> schemasystem/introspectedresourcetokv3.cpp:625
// variables: 4
// function calls: 11
void CResourceToKV3::GetElementDiskSize(const CResourceDiskStructField* pFieldInfo, int nIndirection)
{
	CResourceArrayBase::Count(); // 627
	{
		SchemaIndirectionType_t fieldType; // 650
		{
		}
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 416
		CResourceArray<unsigned char>::GetPtr(); // 379
		CResourceArray<unsigned char>::operator[](
				int nIndex);  // 219
		CResourceDiskStructField::ReadIndirection(
				int nIndirection);  // 650
	}
	{
		ResourceStructureId_t nStructID; // 631
		UtlHashHandle_t hClass; // 633
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		CUtlHashtable<unsigned int, const CResourceDiskStruct::Find(
			KeyArg_t k);  // 633
		{
			const CResourceDiskStruct* pStruct; // 636
			CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::operator[](
					int i);  // 296
			CUtlHashtable<unsigned int, const CResourceDiskStruct::operator[](
					handle_t idx);  // 636
		}
		{
		}
	}
	CResourceToKV3::GetElementDiskSize(
				const CResourceDiskStructField* pFieldInfo,
				int nIndirection);  // 625
} /* size: 0, inline expansions: 2 (142 bytes) */

// <0016AF83> schemasystem/introspectedresourcetokv3.cpp:625
// variables: 6
void CResourceToKV3::GetElementDiskSize(const CResourceDiskStructField* pFieldInfo, int nIndirection)
{
	const char   __FUNCTION__; // 27460
	{
		ResourceStructureId_t nStructID; // 631
		UtlHashHandle_t hClass; // 633
		{
			const CResourceDiskStruct* pStruct; // 636
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 640
		}
	}
	{
		SchemaIndirectionType_t fieldType; // 650
	}
} /* size: 0, variables: 1 */

// <0016FEC7> schemasystem/introspectedresourcetokv3.cpp:658
// function calls: 5
void CResourceToKV3::LookupClassByName(const char* pClass)
{
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	CUtlHashtable<unsigned int, const CResourceDiskStruct::Find(
		KeyArg_t k);  // 668
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::operator[](
			int i);  // 297
	CUtlHashtable<unsigned int, const CResourceDiskStruct::operator[](
			handle_t idx);  // 673
	CResourceToKV3::LookupClassByID(
			uint32 nStructId);  // 660
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0016AF5A> schemasystem/introspectedresourcetokv3.cpp:658
void CResourceToKV3::LookupClassByName(const char* pClass)
{
} /* size: 0 */

// <0016FBC3> schemasystem/introspectedresourcetokv3.cpp:666
// variable: 1
// function calls: 4
void CResourceToKV3::LookupClassByID(uint32 nStructId)
{
	UtlHashHandle_t hClass; // 668
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	CUtlHashtable<unsigned int, const CResourceDiskStruct::Find(
		KeyArg_t k);  // 668
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::operator[](
			int i);  // 297
	CUtlHashtable<unsigned int, const CResourceDiskStruct::operator[](
			handle_t idx);  // 673
} /* size: 132, variables: 1, inline expansions: 4 (147 bytes) */

// <0016AF24> schemasystem/introspectedresourcetokv3.cpp:666
// variable: 1
void CResourceToKV3::LookupClassByID(uint32 nStructId)
{
	UtlHashHandle_t hClass; // 668
} /* size: 0, variables: 1 */

// <0016ACFB> schemasystem/introspectedresourcetokv3.cpp:679
// variable: 1
// function calls: 4
void CResourceToKV3::LookupEnumByID(uint32 nEnumId)
{
	UtlHashHandle_t hClass; // 681
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	CUtlHashtable<unsigned int, const CResourceDiskEnum::Find(
		KeyArg_t k);  // 681
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskEnum::operator[](
			int i);  // 297
	CUtlHashtable<unsigned int, const CResourceDiskEnum::operator[](
			handle_t idx);  // 686
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0016FDD5> schemasystem/introspectedresourcetokv3.cpp:692
// variable: 1
// function calls: 2
void CResourceToKV3::DeduceDerivedTypeFromDisk(const CResourceDiskStruct* pBinding, const void* pSrcData)
{
	uint32 nId; // 699
	CResourceDiskStruct::HasVTable(); // 694
	CResourceToKV3::DeduceDerivedTypeFromDisk(
					const CResourceDiskStruct* pBinding,
					const void* pSrcData);  // 692
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0016ACB8> schemasystem/introspectedresourcetokv3.cpp:692
// variable: 1
void CResourceToKV3::DeduceDerivedTypeFromDisk(const CResourceDiskStruct* pBinding, const void* pSrcData)
{
	uint32 nId; // 699
} /* size: 0, variables: 1 */

// <0016AAF2> schemasystem/introspectedresourcetokv3.cpp:707
// variable: 1
// function calls: 5
void CResourceToKV3::LookupExtRef(ResourceId_t nId)
{
	UtlHashHandle_t hResult; // 712
	ResourceId_t::operator==(
			const ResourceId_t& other);  // 709
	Mix64HashFunctor::operator(
			uint64 s);  // 218
	CUtlHashtable<long long unsigned int, char const::Find(
		KeyArg_t k);  // 712
	CUtlMemory<CUtlHashtableEntry<long long unsigned int, char const::operator[](
			int i);  // 297
	CUtlHashtable<long long unsigned int, char const::operator[](
			handle_t idx);  // 715
} /* size: 206, variables: 1, inline expansions: 5 (143 bytes) */

// <0016A56F> schemasystem/introspectedresourcetokv3.cpp:725
// variables: 9
// function calls: 15
void CResourceToKV3::TraverseStruct(const CResourceDiskStruct* pBinding, const void* pSrcData, KeyValues3* pTargetKV3)
{
	const char   __FUNCTION__; // 27357
	const CResourceDiskStruct* pInheritanceIntro; // 747
	{
		const CResourceDiskStruct* pDerivedBinding; // 732
		KeyValues3* pClassMember; // 743
		{
			_DebuggerBreakInlineExpressionWrapper(void); // 733
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 740
		}
		CResourceToKV3::DeduceDerivedTypeFromDisk(
						const CResourceDiskStruct* pBinding,
						const void* pSrcData);  // 692
		CResourceToKV3::DeduceDerivedTypeFromDisk(
						const CResourceDiskStruct* pBinding,
						const void* pSrcData);  // 732
		{
			const uint32  m; // 101
			uint32 h; // 102
			uint32 k; // 103
			const int  r; // 104
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 743
		ResolveOffset(const int32* pOffset); // 160
		CResourcePointerBase::GetRawPtr(); // 682
		CResourceString::GetPtr(); // 744
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 744
	}
	CResourceDiskStruct::HasVTable(); // 730
	CUtlMemory<CUtlHashtableEntry<unsigned int, const CResourceDiskStruct::operator[](
			int i);  // 297
	CUtlHashtable<unsigned int, const CResourceDiskStruct::operator[](
			handle_t idx);  // 673
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	CUtlHashtable<unsigned int, const CResourceDiskStruct::Find(
		KeyArg_t k);  // 668
	CResourceToKV3::LookupClassByID(
			uint32 nStructId);  // 754
} /* size: 0, variables: 2, inline expansions: 6 (267 bytes) */

// <00169E66> schemasystem/introspectedresourcetokv3.cpp:763
// variables: 5
// function calls: 24
void CResourceToKV3::TraverseStruct_NoBaseClasses(const CResourceDiskStruct* pBinding, const void* pSrcData, KeyValues3* pTargetKV3)
{
	int nFields; // 765
	{
		int i; // 767
		{
			const CResourceDiskStructField* pFieldInfo; // 769
			void* pField; // 770
			KeyValues3* pFieldValue; // 775
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 40
			FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget,
								CKV3MemberName memberNameAndHash);  // 775
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<CResourceDiskStructField>::GetPtr(); // 379
			CResourceArray<CResourceDiskStructField>::operator[](
					int nIndex);  // 247
			CResourceDiskStruct::GetField(
				int nIndex);  // 769
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const CResourceDiskStructField::Find(
				KeyArg_t k);  // 235
			CUtlHashtable<const CResourceDiskStructField::HasElement(
					KeyArg_t k);  // 772
			CResourceDiskStructField::GetDiskOffset(); // 770
			ResolveOffset(const int32* pOffset); // 160
			CResourcePointerBase::GetRawPtr(); // 706
			ResolveOffset(const int32* pOffset); // 160
			CResourcePointerBase::GetRawPtr(); // 712
			CResourceString::operator char const*(); // 775
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 151
			KV3MakeLowerHash(const char* pStr); // 23
			CKV3MemberName::CKV3MemberName(
					const char* pString);  // 775
		}
	}
	CResourceArrayBase::Count(); // 242
	CResourceDiskStruct::GetFieldCount(); // 765
} /* size: 0, variables: 1, inline expansions: 2 (32 bytes) */

// <00165A42> schemasystem/introspectedresourcetokv3.cpp:788
// variables: 4
// function calls: 8
bool Populate2DArray<short unsigned int>(const void* pField, const CResourceDiskStructField* pFieldInfo, KeyValues3* pTargetKV3, const KV3ConvertSpecialFieldBehavior_t* pBehavior, SchemaFieldType_t nExpectedType)
{
	short unsigned int* pSource; // 795
	int iValue; // 796
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 790
	}
	{
	}
	{
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 209
		KeyValues3::SetValueInt(
				int value);  // 804
		operator()(const class* __closure,
				int element,
				KeyValues3* pInnerArrayElement); // 136
		KeyValues3::IterateArrayElements<Populate2DArray<short unsigned int>(
																class& callback);  // 802
	}
	operator()(const class* __closure,
			int element,
			KeyValues3* pOuterArrayElement); // 136
	KeyValues3::IterateArrayElements<Populate2DArray<short unsigned int>(
																class& callback);  // 799
} /* size: 349, variables: 2, inline expansions: 2 (349 bytes) */

// <00165442> schemasystem/introspectedresourcetokv3.cpp:788
// variables: 4
// function calls: 8
bool Populate2DArray<unsigned int>(const void* pField, const CResourceDiskStructField* pFieldInfo, KeyValues3* pTargetKV3, const KV3ConvertSpecialFieldBehavior_t* pBehavior, SchemaFieldType_t nExpectedType)
{
	unsigned int* pSource; // 795
	int iValue; // 796
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 790
	}
	{
	}
	{
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 209
		KeyValues3::SetValueInt(
				int value);  // 804
		operator()(const class* __closure,
				int element,
				KeyValues3* pInnerArrayElement); // 136
		KeyValues3::IterateArrayElements<Populate2DArray<unsigned int>(
																class& callback);  // 802
	}
	operator()(const class* __closure,
			int element,
			KeyValues3* pOuterArrayElement); // 136
	KeyValues3::IterateArrayElements<Populate2DArray<unsigned int>(
																class& callback);  // 799
} /* size: 347, variables: 2, inline expansions: 2 (345 bytes) */

// <00168F12> schemasystem/introspectedresourcetokv3.cpp:817
// variables: 23
// function calls: 44
void CResourceToKV3::TraverseField(const void* pField, const CResourceDiskStructField* pFieldInfo, int nIndirection, KeyValues3* pOriginalTargetKV3)
{
	int nElementSize; // 819
	int nInlineCount; // 820
	bool bInlineArray; // 821
	{
		const KV3ConvertSpecialFieldBehavior_t* pBehavior; // 828
		Mix32HashFunctor::operator(
				uint32 n);  // 139
		PointerHashFunctor::operator(
				const void* s);  // 218
		CUtlHashtable<const CResourceDiskStructField::Find(
			KeyArg_t k);  // 302
		CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::operator[](
				int i);  // 294
		CUtlKeyValuePair<const CResourceDiskStructField::GetValue(); // 294
		CUtlHashtable<const CResourceDiskStructField::Element(
			handle_t idx);  // 302
		CUtlHashtable<const CResourceDiskStructField::Get(
			KeyArg_t k,
			const Element_t& defaultValue);  // 828
	}
	{
		int i; // 847
		{
			KeyValues3* pInlineTargetKV3; // 849
			void* pFieldInstance; // 850
		}
	}
	{
		SchemaIndirectionType_t nIndirectionType; // 859
		{
			int i; // 861
			{
				KeyValues3* pInlineTargetKV3; // 863
				void* pFieldInstance; // 865
				{
					void* pPointedTo; // 870
					ResolveOffset(const int32* pOffset); // 165
					CResourcePointerBase::GetRawPtr(); // 870
				}
				{
					int nStride; // 879
					CResourceArrayBase* pArr; // 880
					uint32 nArrayCount; // 881
					{
						byte* pArrayBase; // 885
						bool bConvertToBinaryBlob; // 887
						{
							const KV3ConvertSpecialFieldBehavior_t* pBehavior; // 892
							Mix32HashFunctor::operator(
									uint32 n);  // 139
							PointerHashFunctor::operator(
									const void* s);  // 218
							CUtlHashtable<const CResourceDiskStructField::Find(
								KeyArg_t k);  // 302
							CUtlMemory<CUtlHashtableEntry<const CResourceDiskStructField::operator[](
									int i);  // 294
							CUtlKeyValuePair<const CResourceDiskStructField::GetValue(); // 294
							CUtlHashtable<const CResourceDiskStructField::Element(
								handle_t idx);  // 302
							CUtlHashtable<const CResourceDiskStructField::Get(
								KeyArg_t k,
								const Element_t& defaultValue);  // 892
						}
						{
							const byte* pArrayElementData; // 905
							{
								KeyValues3* pElement; // 906
								CKV3ArrayIteratorView<false>& __for_range; // 12129
								iterator __for_begin; // 47551
								iterator __for_end; // 47551
								{
									KeyValues3::Internal_Type(); // 90
									KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
									KeyValues3::GetType(); // 74
									KeyValues3::GetType(); // 74
								}
								{
								}
								CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
											KV3Pointer_t pKV3);  // 67
								CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
											KV3Pointer_t pKV3);  // 921
								KeyValues3::IterateArray(); // 906
								iterator::iterator(
									const KV3Pointer_t* pArrayElements,
									int nStartingIndex,
									int nArrayElementCount);  // 396
								CKV3ArrayIteratorView<false>::begin(); // 906
								iterator::iterator(
									const KV3Pointer_t* pArrayElements,
									int nStartingIndex,
									int nArrayElementCount);  // 401
								CKV3ArrayIteratorView<false>::end(); // 906
								iterator::operator!=(
										const iterator& rhs);  // 906
								{
								}
								iterator::operator*(); // 906
							}
						}
						ResolveOffset(const int32* pOffset); // 310
						CResourceArrayBase::GetRawPtr(); // 885
						AimAtExternalBinaryBlob(KeyValues3* pTarget,
									byte* pData,
									int nSize);  // 898
					}
					CResourceArrayBase::Count(); // 881
				}
				ResolveOffset(const int32* pOffset); // 160
				CResourcePointerBase::GetRawPtr(); // 682
				ResolveOffset(const int32* pOffset); // 160
				CResourcePointerBase::GetRawPtr(); // 688
				CResourceString::GetPtr(); // 920
			}
		}
		{
		}
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 416
		CResourceArray<unsigned char>::GetPtr(); // 379
		CResourceArray<unsigned char>::operator[](
				int nIndex);  // 219
		CResourceDiskStructField::ReadIndirection(
				int nIndirection);  // 859
	}
	CResourceArrayBase::Count(); // 845
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <0016F75D> schemasystem/introspectedresourcetokv3.cpp:933
// function calls: 3
void CResourceToKV3::TraverseEnum(const void* pField, const CResourceDiskEnum* pEnumIntro, KeyValues3* pTargetKV3)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 937
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00168EB2> schemasystem/introspectedresourcetokv3.cpp:933
// variables: 2
void CResourceToKV3::TraverseEnum(const void* pField, const CResourceDiskEnum* pEnumIntro, KeyValues3* pTargetKV3)
{
	{
		uint32 nValue; // 942
		const char* pStr; // 943
	}
} /* size: 0 */

// <00167BE3> schemasystem/introspectedresourcetokv3.cpp:959
// variables: 11
// function calls: 71
void CResourceToKV3::TraverseDataField(const void* pFieldInstance, const CResourceDiskStructField* pFieldInfo, KeyValues3* pTargetKV3)
{
	SchemaFieldType_t nFieldType; // 966
	uint32 nFieldData; // 967
	const char   __FUNCTION__; // 27433
	{
		const CResourceDiskStruct* pStructInfo; // 973
	}
	{
		const CResourceDiskEnum* pEnumIntro; // 983
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 209
		KeyValues3::SetValueInt(
				int value);  // 937
		CResourceToKV3::TraverseEnum(
				const void* pField,
				const CResourceDiskEnum* pEnumIntro,
				KeyValues3* pTargetKV3);  // 985
	}
	{
		const char* pStr; // 996
		ResolveOffset(const int32* pOffset); // 165
		CResourcePointerBase::GetRawPtr(); // 694
		ResolveOffset(const int32* pOffset); // 165
		CResourcePointerBase::GetRawPtr(); // 700
		CResourceString::GetPtr(); // 996
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 997
	}
	{
		const ResourceId_t* pRef; // 1009
		const char* pExtRef; // 1010
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 1015
	}
	{
		const char* pStr; // 1021
		ResolveOffset(const int32* pOffset); // 165
		CResourcePointerBase::GetRawPtr(); // 694
		ResolveOffset(const int32* pOffset); // 165
		CResourcePointerBase::GetRawPtr(); // 700
		CResourceString::GetPtr(); // 1021
		AimAtExternalString(KeyValues3* pTarget,
					const char* pString);  // 1022
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1080
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1102
	}
	CResourceDiskStructField::GetType(); // 966
	CResourceDiskStructField::GetTypeData(); // 967
	KeyValues3::SetValueVector4D(
			const Vector4D& value);  // 1071
	KeyValues3::SetValueMatrix(
			const matrix3x4_t& value);  // 1093
	KeyValues3::SetValueVector(
			const Vector& value);  // 1068
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 1044
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 1041
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 1038
	KeyValues3::SetValueVector2D(
			const Vector2D& value);  // 1065
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 1062
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 1089
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 1056
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 233
	KeyValues3::SetValueInt64(
			int64 value);  // 1053
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 1050
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 1047
	KeyValues3::SetValueCTransform(
				const CTransform& value);  // 1096
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 1059
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 1035
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 1032
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 227
	KeyValues3::SetValueUint64(
			uint64 value);  // 1029
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 1026
	ResolveOffset(const int32* pOffset); // 160
	CResourcePointerBase::GetRawPtr(); // 682
	ResolveOffset(const int32* pOffset); // 160
	CResourcePointerBase::GetRawPtr(); // 688
	CResourceString::GetPtr(); // 1001
} /* size: 0, variables: 3, inline expansions: 54 (2060 bytes) */

// <0016670B> schemasystem/introspectedresourcetokv3.cpp:1113
// variables: 4
// function calls: 16
void CSchemaSystem::ConvertOldIntrospectedResourceDataToKV3(const void* pData, size_t nDataSize, const ResourceFileHeader_t* pHeader, CKeyValues3Context* pOutContext, const char* pOverrideRootStruct)
{
	const CResourceIntrospectionManifest* pManifest; // 1123
	const ResourceExtRefList_t* pExtList; // 1124
	const char* pRootStruct; // 1137
	CResourceToKV3 convert; // 1154
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1117
	}
	Resource_GetBlock<CResourceIntrospectionManifest>(const ResourceFileHeader_t* pHeader); // 1123
	Resource_GetBlock<ResourceExtRefList_t>(const ResourceFileHeader_t* pHeader); // 1124
	CResourceIntrospectionManifest::GetVersion(); // 1131
	V_isempty(const char* pszString); // 1138
	CResourceToKV3::DoConvert(
			KeyValues3* pTargetKV3);  // 1155
	ResolveOffset(const int32* pOffset); // 304
	CResourceArrayBase::GetRawPtr(); // 416
	CResourceArray<CResourceDiskStruct>::GetPtr(); // 379
	CResourceArray<CResourceDiskStruct>::operator[](
			int nIndex);  // 1141
	ResolveOffset(const int32* pOffset); // 160
	CResourcePointerBase::GetRawPtr(); // 682
	ResolveOffset(const int32* pOffset); // 160
	CResourcePointerBase::GetRawPtr(); // 688
	CResourceString::GetPtr(); // 1141
	V_isempty(const char* pszString); // 1148
} /* size: 0, variables: 4, inline expansions: 15 (234 bytes) */

