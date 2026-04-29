
//
// schemalib/schematype.cpp
//
//	referenced by: libschemasystem.so
//
//	functions: 9
//

// <0063AD4B> schemalib/schematype.cpp:14
// function calls: 3
void CSchemaType::SpewDescription(LoggingChannelID_t nChannel, const char* pPrefix)
{
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 16
	CSchemaType::SpewDescription(
			LoggingChannelID_t nChannel,
			const char* pPrefix);  // 14
} /* size: 107, inline expansions: 3 (59 bytes) */

// <0063A0E8> schemalib/schematype.cpp:14
void CSchemaType::SpewDescription(LoggingChannelID_t nChannel, const char* pPrefix)
{
} /* size: 0 */

// <0063B534> schemalib/schematype.cpp:22
// variable: 1
void CheckSizeOfAndAlignOf(int nSizeOf, int* pSizeOf, uint8 nAlignOf, uint8* pAlignOf)
{
	bool bValid; // 24
} /* size: 73, variables: 1 */

// <00639F71> schemalib/schematype.cpp:48
// variables: 2
// function calls: 3
void CSchemaType_DeclaredClass::GetSizeOfAndAlignOf(int* pSizeOf, uint8* pAlignOf)
{
	int nSizeOf; // 50
	uint8 nAlignOf; // 51
	CSchemaClassInfo::GetSizeOf(); // 54
	CheckSizeOfAndAlignOf(int nSizeOf,
				int* pSizeOf,
				uint8 nAlignOf,
				uint8* pAlignOf);  // 57
	CSchemaClassInfo::GetAlignOf(); // 55
} /* size: 129, variables: 2, inline expansions: 3 (106 bytes) */

// <00639D6A> schemalib/schematype.cpp:60
// variables: 2
// function calls: 8
void CSchemaType_DeclaredEnum::GetSizeOfAndAlignOf(int* pSizeOf, uint8* pAlignOf)
{
	int nSizeOf; // 62
	uint8 nAlignOf; // 63
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 744
	CSchemaType_DeclaredEnum::LookupEnum(); // 740
	CSchemaType_DeclaredEnum::LookupEnum(); // 709
	CSchemaType_DeclaredEnum::GetEnum(); // 64
	CSchemaEnumInfo::GetSizeOf(); // 66
	CSchemaEnumInfo::GetAlignOf(); // 67
	CheckSizeOfAndAlignOf(int nSizeOf,
				int* pSizeOf,
				uint8 nAlignOf,
				uint8* pAlignOf);  // 69
} /* size: 219, variables: 2, inline expansions: 8 (302 bytes) */

// <00639AF3> schemalib/schematype.cpp:75
// variables: 2
// function calls: 6
void CSchemaType_DeclaredClass::SetClass(ClassIntrospectionHandle_t hExpectedClass)
{
	const char   __FUNCTION__; // 11878
	{
		int* _pCrash; // 90
	}
	CSchemaClassInfo::GetName(); // 442
	SchemaGetClassName(ClassIntrospectionHandle_t pClassInfo); // 90
	CUtlString::Get(); // 90
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 90
	CUtlString::Get(); // 82
	Plat_IsInDebugSession(void); // 83
} /* size: 360, variables: 1, inline expansions: 6 (96 bytes) */

// <00639A7A> schemalib/schematype.cpp:101
void CSchemaType_DeclaredClass::SpewDescription(LoggingChannelID_t nChannel, const char* pPrefix)
{
} /* size: 13 */

// <0063AE68> schemalib/schematype.cpp:109
// variable: 1
// function call: 1
void CSchemaType_DeclaredClass::CanReinterpretAs(const CSchemaType* pOtherType)
{
	const CSchemaType_DeclaredClass* pOtherClass; // 114
	CSchemaType_DeclaredClass::CanReinterpretAs(
			const CSchemaType* pOtherType);  // 109
} /* size: 58, variables: 1, inline expansions: 1 (14 bytes) */

// <00639A49> schemalib/schematype.cpp:109
// variable: 1
void CSchemaType_DeclaredClass::CanReinterpretAs(const CSchemaType* pOtherType)
{
	const CSchemaType_DeclaredClass* pOtherClass; // 114
} /* size: 0, variables: 1 */

