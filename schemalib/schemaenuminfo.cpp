
//
// schemalib/schemaenuminfo.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   libschemasystem.so
//
//	functions: 20
//

// <0495D80A> schemalib/schemaenuminfo.cpp:9
const char* SchemaFindEnumBindingBinaryName(EnumIntrospectionHandle_t pEnumInfo)
{
} /* size: 0 */

// <0495D7BA> schemalib/schemaenuminfo.cpp:24
const char* SchemaFindEnumBindingProjectName(EnumIntrospectionHandle_t pEnumInfo)
{
} /* size: 0 */

// <0495D69A> schemalib/schemaenuminfo.cpp:39
// variable: 1
// function calls: 3
void CSchemaEnumInfo::FindMemberByName(const char* pStr)
{
	{
		uint16 i; // 41
		CSchemaEnumInfo::GetEnumerator(
				int i);  // 43
		CSchemaEnumeratorInfo::GetName(); // 43
		V_strcmp(const char* s1,
			const char* s2);  // 43
	}
} /* size: 112 */

// <0495D5D4> schemalib/schemaenuminfo.cpp:53
// variable: 1
// function calls: 2
void CSchemaEnumInfo::FindMemberByValue(SchemaEnumeratorValue_t nValue)
{
	{
		uint16 i; // 55
		CSchemaEnumInfo::GetEnumerator(
				int i);  // 57
		CSchemaEnumeratorInfo::GetValue(); // 57
	}
} /* size: 70 */

// <0495D3D3> schemalib/schemaenuminfo.cpp:67
// variables: 8
// function call: 1
void CSchemaEnumInfo::AssignValueToInstance(void* pEnumInstance, SchemaEnumeratorValue_t nValue)
{
	const char   __FUNCTION__; // 28139
	{
		int8 nVal8; // 73
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
		}
	}
	{
		int16 nVal16; // 80
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
		}
	}
	{
		int32 nVal32; // 87
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
	CSchemaEnumInfo::GetSizeOf(); // 69
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0317CAE3> schemalib/schemaenuminfo.cpp:67
// variables: 8
// function call: 1
void CSchemaEnumInfo::AssignValueToInstance(void* pEnumInstance, SchemaEnumeratorValue_t nValue)
{
	const char   __FUNCTION__; // 13296
	{
		int8 nVal8; // 73
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
		}
	}
	{
		int16 nVal16; // 80
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
		}
	}
	{
		int32 nVal32; // 87
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
	CSchemaEnumInfo::GetSizeOf(); // 69
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00657E29> schemalib/schemaenuminfo.cpp:67
// variables: 8
// function call: 1
void CSchemaEnumInfo::AssignValueToInstance(void* pEnumInstance, SchemaEnumeratorValue_t nValue)
{
	const char   __FUNCTION__; // 4390
	{
		int8 nVal8; // 73
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
		}
	}
	{
		int16 nVal16; // 80
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
		}
	}
	{
		int32 nVal32; // 87
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
	CSchemaEnumInfo::GetSizeOf(); // 69
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <019E259F> schemalib/schemaenuminfo.cpp:67
// variables: 8
// function call: 1
void CSchemaEnumInfo::AssignValueToInstance(void* pEnumInstance, SchemaEnumeratorValue_t nValue)
{
	const char   __FUNCTION__; // 52252
	{
		int8 nVal8; // 73
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
		}
	}
	{
		int16 nVal16; // 80
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
		}
	}
	{
		int32 nVal32; // 87
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
	CSchemaEnumInfo::GetSizeOf(); // 69
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0495D32B> schemalib/schemaenuminfo.cpp:108
// variable: 1
// function calls: 2
void CSchemaEnumInfo::GetStorageType()
{
	bool bUnsigned; // 110
	CSchemaEnumInfo::HasFlag1(
		SchemaEnumFlags1_t nFlag);  // 110
	CSchemaEnumInfo::GetSizeOf(); // 111
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0495DA6B> schemalib/schemaenuminfo.cpp:129
// variables: 2
// function call: 1
void SchemaEnumeratorInfoData_t::GetDataSize()
{
	size_t nSize; // 131
	{
		int i; // 83
	}
	Schema_GetArrayDataSize<SchemaMetadataEntryData_t>(const SchemaMetadataEntryData_t* pArray,
								int nNumArray);  // 132
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0495D303> schemalib/schemaenuminfo.cpp:129
// variable: 1
void SchemaEnumeratorInfoData_t::GetDataSize()
{
	size_t nSize; // 131
} /* size: 0, variables: 1 */

// <0495D181> schemalib/schemaenuminfo.cpp:139
// variables: 3
// function calls: 4
void CSchemaEnumInfo::GetDataSize()
{
	size_t nSize; // 141
	{
		int i; // 83
		Schema_GetArrayDataSize<SchemaMetadataEntryData_t>(const SchemaMetadataEntryData_t* pArray,
									int nNumArray);  // 132
		SchemaEnumeratorInfoData_t::GetDataSize(); // 85
	}
	Schema_GetArrayDataSize<SchemaEnumeratorInfoData_t>(const SchemaEnumeratorInfoData_t* pArray,
								int nNumArray);  // 142
	{
		int i; // 83
	}
	Schema_GetArrayDataSize<SchemaMetadataEntryData_t>(const SchemaMetadataEntryData_t* pArray,
								int nNumArray);  // 143
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0495D142> schemalib/schemaenuminfo.cpp:150
void CSchemaEnumInfo::GetBaseBindingInfo(SchemaBaseBindingInfo_t* pInfo)
{
} /* size: 0 */

// <0495DAF7> schemalib/schemaenuminfo.cpp:163
// function call: 1
void CSchemaEnumInfo::SetTypeScope(SchemaTypeScope_t nTypeScope, ISchemaSystemTypeScope* pOuterTypeScope)
{
	CSchemaEnumInfo::SetTypeScope(
			SchemaTypeScope_t nTypeScope,
			ISchemaSystemTypeScope* pOuterTypeScope);  // 163
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0495D10E> schemalib/schemaenuminfo.cpp:163
void CSchemaEnumInfo::SetTypeScope(SchemaTypeScope_t nTypeScope, ISchemaSystemTypeScope* pOuterTypeScope)
{
} /* size: 0 */

// <0495CEF6> schemalib/schemaenuminfo.cpp:175
// variables: 3
// function calls: 7
void CSchemaEnumInfo::CompleteInitialization()
{
	const char   __FUNCTION__; // 26917
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
	{
		uint16 i; // 190
		CSchemaEnumeratorInfo::GetValue(); // 192
		Min<long long int>(const long long int& val1,
					const long long int& val2);  // 192
		CSchemaEnumeratorInfo::GetValue(); // 193
		Max<long long int>(const long long int& val1,
					const long long int& val2);  // 193
	}
	CSchemaEnumInfo::HasFlag1(
		SchemaEnumFlags1_t nFlag);  // 177
	CSchemaEnumInfo::GetEnumerator(
			int i);  // 187
	CSchemaEnumeratorInfo::GetValue(); // 187
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0317C606> schemalib/schemaenuminfo.cpp:175
// variables: 3
// function calls: 7
void CSchemaEnumInfo::CompleteInitialization()
{
	const char   __FUNCTION__; // 12074
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
	{
		uint16 i; // 190
		CSchemaEnumeratorInfo::GetValue(); // 192
		Min<long long int>(const long long int& val1,
					const long long int& val2);  // 192
		CSchemaEnumeratorInfo::GetValue(); // 193
		Max<long long int>(const long long int& val1,
					const long long int& val2);  // 193
	}
	CSchemaEnumInfo::HasFlag1(
		SchemaEnumFlags1_t nFlag);  // 177
	CSchemaEnumInfo::GetEnumerator(
			int i);  // 187
	CSchemaEnumeratorInfo::GetValue(); // 187
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0065794C> schemalib/schemaenuminfo.cpp:175
// variables: 3
// function calls: 7
void CSchemaEnumInfo::CompleteInitialization()
{
	const char   __FUNCTION__; // 3168
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
	{
		uint16 i; // 190
		CSchemaEnumeratorInfo::GetValue(); // 192
		Min<long long int>(const long long int& val1,
					const long long int& val2);  // 192
		CSchemaEnumeratorInfo::GetValue(); // 193
		Max<long long int>(const long long int& val1,
					const long long int& val2);  // 193
	}
	CSchemaEnumInfo::HasFlag1(
		SchemaEnumFlags1_t nFlag);  // 177
	CSchemaEnumInfo::GetEnumerator(
			int i);  // 187
	CSchemaEnumeratorInfo::GetValue(); // 187
} /* size: 0, variables: 1, inline expansions: 3 (12 bytes) */

// <019E20C2> schemalib/schemaenuminfo.cpp:175
// variables: 3
// function calls: 7
void CSchemaEnumInfo::CompleteInitialization()
{
	const char   __FUNCTION__; // 51030
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
	}
	{
		uint16 i; // 190
		CSchemaEnumeratorInfo::GetValue(); // 192
		Min<long long int>(const long long int& val1,
					const long long int& val2);  // 192
		CSchemaEnumeratorInfo::GetValue(); // 193
		Max<long long int>(const long long int& val1,
					const long long int& val2);  // 193
	}
	CSchemaEnumInfo::HasFlag1(
		SchemaEnumFlags1_t nFlag);  // 177
	CSchemaEnumInfo::GetEnumerator(
			int i);  // 187
	CSchemaEnumeratorInfo::GetValue(); // 187
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0495CCB6> schemalib/schemaenuminfo.cpp:200
// variables: 3
// function calls: 5
void CSchemaEnumInfo::Register(ISchemaSystem* pSchemaSystem, const char* pBinaryName, const char* pProjectName)
{
	SchemaTypeScope_t nTypeScope; // 212
	ISchemaSystemTypeScope* pTypeScope; // 213
	CSchemaEnumInfo* pPrimaryInfo; // 216
	CSchemaEnumInfo::GetPrimaryBinding(); // 204
	CSchemaEnumInfo::HasFlag1(
		SchemaEnumFlags1_t nFlag);  // 52
	CSchemaEnumInfo::GetRegisterTypeScope(); // 212
	CSchemaEnumInfo::SetTypeScope(
			SchemaTypeScope_t nTypeScope,
			ISchemaSystemTypeScope* pOuterTypeScope);  // 163
	CSchemaEnumInfo::SetTypeScope(
			SchemaTypeScope_t nTypeScope,
			ISchemaSystemTypeScope* pOuterTypeScope);  // 214
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

