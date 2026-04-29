
//
// schemalib/schemametadata.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 3
//

// <04962CF2> schemalib/schemametadata.cpp:8
// variables: 2
// function calls: 2
void CSchemaMetadataSet::IsPresent(const char* pTagName)
{
	{
		int i; // 10
		{
			const CSchemaMetadataEntry* pEntry; // 12
			CSchemaMetadataEntry::GetName(); // 13
			V_strcmp(const char* s1,
				const char* s2);  // 13
		}
	}
} /* size: 109 */

// <04962BAE> schemalib/schemametadata.cpp:22
// variables: 2
// function calls: 3
void* CSchemaMetadataSet::GetPtr(const char* pTagName)
{
	{
		int i; // 24
		{
			const CSchemaMetadataEntry* pEntry; // 26
			CSchemaMetadataEntry::GetName(); // 27
			V_strcmp(const char* s1,
				const char* s2);  // 27
			CSchemaMetadataEntry::GetData(); // 28
		}
	}
} /* size: 0 */

// <04962A8D> schemalib/schemametadata.cpp:36
// variables: 3
// function calls: 2
void CSchemaMetadataSet::GetTagInstanceCount(const char* pTagName)
{
	int nResult; // 38
	{
		int i; // 39
		{
			const CSchemaMetadataEntry* pEntry; // 41
			CSchemaMetadataEntry::GetName(); // 42
			V_strcmp(const char* s1,
				const char* s2);  // 42
		}
	}
} /* size: 0, variables: 1 */

