
//
// public/schemalib/schemametadata.h
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
//	functions: 5
//	classes: 2
//

// <00032C01> ../public/schemalib/schemametadata.h:11
// member functions: 4
// member variable: 1
// class size: 16
class CSchemaMetadataEntry : SchemaMetadataEntryData_t {
	/* struct SchemaMetadataEntryData_t <ancestor>; */ /* 0 16 */
	/* ../public/schemalib/schemametadata.h:15 */
	const char* GetName(const CSchemaMetadataEntry* );
	/* ../public/schemalib/schemametadata.h:16 */
	void* GetData(const CSchemaMetadataEntry* );
	const char  * GetName(const class CSchemaMetadataEntry  *); /* linkage=_ZNK20CSchemaMetadataEntry7GetNameEv */
	void * GetData(const class CSchemaMetadataEntry  *); /* linkage=_ZNK20CSchemaMetadataEntry7GetDataEv */
};

// <00025F7A> ../../public/schemalib/schemametadata.h:11
// member functions: 4
// member variable: 1
// class size: 16
class CSchemaMetadataEntry : SchemaMetadataEntryData_t {
	/* struct SchemaMetadataEntryData_t <ancestor>; */ /* 0 16 */
	/* ../../public/schemalib/schemametadata.h:15 */
	const char* GetName(const CSchemaMetadataEntry* );
	/* ../../public/schemalib/schemametadata.h:16 */
	void* GetData(const CSchemaMetadataEntry* );
	const char  * GetName(const class CSchemaMetadataEntry  *); /* linkage=_ZNK20CSchemaMetadataEntry7GetNameEv */
	void * GetData(const class CSchemaMetadataEntry  *); /* linkage=_ZNK20CSchemaMetadataEntry7GetDataEv */
};

// <0497332B> ../public/schemalib/schemametadata.h:15
inline void CSchemaMetadataEntry::GetName()
{
} /* size: 0 */

// <0497330E> ../public/schemalib/schemametadata.h:16
inline void* CSchemaMetadataEntry::GetData()
{
} /* size: 0 */

// <0496F73A> ../public/schemalib/schemametadata.h:31
// variables: 2
inline void CSchemaMetadataSet::GetAllPtrs<void*>(const char* pTagName, CUtlVector<void*, CUtlMemory<void*, int> >& metaValues)
{
	{
		int i; // 33
		{
			const CSchemaMetadataEntry* pEntry; // 35
		}
	}
} /* size: 0 */

// <00103B2C> ../public/schemalib/schemametadata.h:46
inline void CSchemaMetadataSet::GetEntryCount()
{
} /* size: 0 */

// <00103B04> ../public/schemalib/schemametadata.h:54
inline void CSchemaMetadataSet::GetEntryByIndex(int nIndex)
{
} /* size: 0 */

