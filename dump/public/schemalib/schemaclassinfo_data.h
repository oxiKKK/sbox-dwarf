
//
// public/schemalib/schemaclassinfo_data.h
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
//	functions: 8
//	structs: 7
//

// <00033DD5> ../public/schemalib/schemaclassinfo_data.h:25
// member function: 1
// member variables: 6
// struct size: 32
struct SchemaClassFieldData_t {
	const char * m_pName; /* 0 8 */
	CSchemaType * m_pType; /* 8 8 */
	int32 m_nSingleInheritanceOffset; /* 16 4 */
	uint16 m_nNumMetadata; /* 20 2 */
	uint16 m_nUnused; /* 22 2 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 24 8 */
	/* ../public/schemalib/schemaclassinfo_data.h:34 */
	size_t GetDataSize(const SchemaClassFieldData_t* );
};

// <00026343> ../../public/schemalib/schemaclassinfo_data.h:25
// member function: 1
// member variables: 6
// struct size: 32
struct SchemaClassFieldData_t {
	const char * m_pName; /* 0 8 */
	CSchemaType * m_pType; /* 8 8 */
	int32 m_nSingleInheritanceOffset; /* 16 4 */
	uint16 m_nNumMetadata; /* 20 2 */
	uint16 m_nUnused; /* 22 2 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 24 8 */
	/* ../../public/schemalib/schemaclassinfo_data.h:34 */
	size_t GetDataSize(const SchemaClassFieldData_t* );
};

// <00033E65> ../public/schemalib/schemaclassinfo_data.h:53
// member function: 1
// member variables: 6
// struct size: 40
struct SchemaStaticFieldData_t {
	const char * m_pName; /* 0 8 */
	CSchemaType * m_pType; /* 8 8 */
	void * m_pInstance; /* 16 8 */
	uint16 m_nNumMetadata; /* 24 2 */
	uint16 m_nUnused; /* 26 2 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 32 8 */
	/* ../public/schemalib/schemaclassinfo_data.h:62 */
	size_t GetDataSize(const SchemaStaticFieldData_t* );
};

// <000263D3> ../../public/schemalib/schemaclassinfo_data.h:53
// member function: 1
// member variables: 6
// struct size: 40
struct SchemaStaticFieldData_t {
	const char * m_pName; /* 0 8 */
	CSchemaType * m_pType; /* 8 8 */
	void * m_pInstance; /* 16 8 */
	uint16 m_nNumMetadata; /* 24 2 */
	uint16 m_nUnused; /* 26 2 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 32 8 */
	/* ../../public/schemalib/schemaclassinfo_data.h:62 */
	size_t GetDataSize(const SchemaStaticFieldData_t* );
};

// <00033EF5> ../public/schemalib/schemaclassinfo_data.h:80
// member function: 1
// member variables: 2
// struct size: 16
struct SchemaBaseClassInfoData_t {
	uint32 m_nOffset; /* 0 4 */
	const class CSchemaClassInfo * m_pClass; /* 8 8 */
	/* ../public/schemalib/schemaclassinfo_data.h:85 */
	size_t GetDataSize(const SchemaBaseClassInfoData_t* );
};

// <00026463> ../../public/schemalib/schemaclassinfo_data.h:80
// member function: 1
// member variables: 2
// struct size: 16
struct SchemaBaseClassInfoData_t {
	uint32 m_nOffset; /* 0 4 */
	const class CSchemaClassInfo * m_pClass; /* 8 8 */
	/* ../../public/schemalib/schemaclassinfo_data.h:85 */
	size_t GetDataSize(const SchemaBaseClassInfoData_t* );
};

// <049536D4> ../public/schemalib/schemaclassinfo_data.h:85
inline void SchemaBaseClassInfoData_t::GetDataSize()
{
} /* size: 0 */

// <049536A5> ../public/schemalib/schemaclassinfo_data.h:164
inline CSchemaClassInfo* SchemaGenRegisterExtra(SchemaGenClassOpsFn_t opFn, CSchemaClassInfo* pInfo)
{
} /* size: 0 */

// <0495366A> ../public/schemalib/schemaclassinfo_data.h:169
inline void* SchemaGenClassCopy(SchemaGenClassOpsFn_t opFn, void* pDst, const void* pSrc)
{
} /* size: 0 */

// <04953647> ../public/schemalib/schemaclassinfo_data.h:174
inline void* SchemaGenClassNew(SchemaGenClassOpsFn_t opFn)
{
} /* size: 0 */

// <04953618> ../public/schemalib/schemaclassinfo_data.h:179
inline void* SchemaGenClassDelete(SchemaGenClassOpsFn_t opFn, void* pMemory)
{
} /* size: 0 */

// <049535E9> ../public/schemalib/schemaclassinfo_data.h:184
inline void* SchemaGenClassConstructInPlace(SchemaGenClassOpsFn_t opFn, void* pMemory)
{
} /* size: 0 */

// <049535BA> ../public/schemalib/schemaclassinfo_data.h:189
inline void* SchemaGenClassDestructInPlace(SchemaGenClassOpsFn_t opFn, void* pMemory)
{
} /* size: 0 */

// <0495358B> ../public/schemalib/schemaclassinfo_data.h:194
inline const CSchemaClassInfo* SchemaGenClassDeduceDerivedType(SchemaGenClassOpsFn_t opFn, const void* pInstance)
{
} /* size: 0 */

// <00034026> ../public/schemalib/schemaclassinfo_data.h:223
// member variables: 21
// struct size: 112
struct SchemaClassInfoData_t {
	const class CSchemaClassInfo * m_pPrimaryBinding; /* 0 8 */
	const char * m_pName; /* 8 8 */
	const char * m_pProjectName; /* 16 8 */
	int32 m_nSizeOf; /* 24 4 */
	uint16 m_nNumFields; /* 28 2 */
	uint16 m_nNumStaticFields; /* 30 2 */
	uint16 m_nNumMetadata; /* 32 2 */
	uint8 m_nAlignOf; /* 34 1 */
	uint8 m_nNumBaseClasses; /* 35 1 */
	int16 m_nMultipleInheritanceDepth; /* 36 2 */
	int16 m_nSingleInheritanceDepth; /* 38 2 */
	SchemaClassFieldData_t * m_pFields; /* 40 8 */
	SchemaStaticFieldData_t * m_pStaticFields; /* 48 8 */
	SchemaBaseClassInfoData_t * m_pBaseClasses; /* 56 8 */
	const class datamap_t * m_pDataDesc; /* 64 8 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 72 8 */
	ISchemaSystemTypeScope * m_pOuterTypeScope; /* 80 8 */
	CSchemaType * m_pTypeOf; /* 88 8 */
	uint32 m_nClassFlags1; /* 96 4 */
	uint32 m_nClassFlags2; /* 100 4 */
	SchemaGenClassOpsFn_t m_pClassOpsFn; /* 104 8 */
};

