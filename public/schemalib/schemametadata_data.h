
//
// public/schemalib/schemametadata_data.h
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
//	function: 1
//	structs: 2
//

// <00032BAD> ../public/schemalib/schemametadata_data.h:16
// member function: 1
// member variables: 2
// struct size: 16
struct SchemaMetadataEntryData_t {
	const char * m_pName; /* 0 8 */
	void * m_pData; /* 8 8 */
	/* ../public/schemalib/schemametadata_data.h:21 */
	size_t GetDataSize(const SchemaMetadataEntryData_t* );
};

// <00025F26> ../../public/schemalib/schemametadata_data.h:16
// member function: 1
// member variables: 2
// struct size: 16
struct SchemaMetadataEntryData_t {
	const char * m_pName; /* 0 8 */
	void * m_pData; /* 8 8 */
	/* ../../public/schemalib/schemametadata_data.h:21 */
	size_t GetDataSize(const SchemaMetadataEntryData_t* );
};

// <0495D91F> ../public/schemalib/schemametadata_data.h:21
inline void SchemaMetadataEntryData_t::GetDataSize()
{
} /* size: 0 */

