
//
// public/schemalib/schemaenuminfo_data.h
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
//	structs: 3
//

// <0003420A> ../public/schemalib/schemaenuminfo_data.h:13
// member function: 1
// member variables: 5
// struct size: 32
struct SchemaEnumeratorInfoData_t {
	const char * m_pName; /* 0 8 */
	SchemaEnumeratorValue_t m_nValue; /* 8 8 */
	uint16 m_nNumMetadata; /* 16 2 */
	uint16 m_nUnused1; /* 18 2 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 24 8 */
	/* ../public/schemalib/schemaenuminfo_data.h:26 */
	size_t GetDataSize(const SchemaEnumeratorInfoData_t* );
};

// <00026778> ../../public/schemalib/schemaenuminfo_data.h:13
// member function: 1
// member variables: 5
// struct size: 32
struct SchemaEnumeratorInfoData_t {
	const char * m_pName; /* 0 8 */
	SchemaEnumeratorValue_t m_nValue; /* 8 8 */
	uint16 m_nNumMetadata; /* 16 2 */
	uint16 m_nUnused1; /* 18 2 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 24 8 */
	/* ../../public/schemalib/schemaenuminfo_data.h:26 */
	size_t GetDataSize(const SchemaEnumeratorInfoData_t* );
};

// <000342B0> ../public/schemalib/schemaenuminfo_data.h:55
// member variables: 13
// struct size: 72
struct SchemaEnumInfoData_t {
	const class CSchemaEnumInfo * m_pPrimaryBinding; /* 0 8 */
	const char * m_pName; /* 8 8 */
	const char * m_pProjectName; /* 16 8 */
	uint8 m_nSizeOf; /* 24 1 */
	uint8 m_nAlignOf; /* 25 1 */
	uint16 m_nEnumFlags1; /* 26 2 */
	uint16 m_nNumEnumerators; /* 28 2 */
	uint16 m_nNumMetadata; /* 30 2 */
	const class SchemaEnumeratorInfoData_t * m_pEnumerators; /* 32 8 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 40 8 */
	ISchemaSystemTypeScope * m_pOuterTypeScope; /* 48 8 */
	SchemaEnumeratorValue_t m_nMinValue; /* 56 8 */
	SchemaEnumeratorValue_t m_nMaxValue; /* 64 8 */
};

