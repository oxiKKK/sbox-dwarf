
//
// kv3lib/keyvalues3_jsonwriter.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2
//

// <056FCEAE> kv3lib/keyvalues3_jsonwriter.cpp:16
// variables: 6
// function calls: 16
bool SaveKV3AsJSON_R(const KeyValues3* pData, CUtlBuffer* pDestBuffer, CUtlString* pOutErrorMessage)
{
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 21
	{
		int nCount; // 86
		CUtlBuffer::PushTab(); // 85
		{
			int i; // 87
			{
				const KeyValues3* pMember; // 92
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 93
			}
		}
		CUtlBuffer::PopTab(); // 113
	}
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 40
	KeyValues3::GetValueAsNumeric<double>(); // 204
	KeyValues3::GetValueDouble(); // 45
	{
		int nCount; // 63
		CUtlBuffer::PushTab(); // 62
		{
			int i; // 64
			{
				const KeyValues3* pElement; // 66
			}
		}
		CUtlBuffer::PopTab(); // 78
	}
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 35
	{
	}
	{
	}
} /* size: 0, inline expansions: 9 (20 bytes) */

// <056FCAE8> kv3lib/keyvalues3_jsonwriter.cpp:16
// variables: 9
bool SaveKV3AsJSON_R(const KeyValues3* pData, CUtlString* pOutErrorMessage, CUtlBuffer* pDestBuffer)
{
	const char   __FUNCTION__; // 50689
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 55
	}
	{
		int nCount; // 63
		{
			int i; // 64
			{
				const KeyValues3* pElement; // 66
			}
		}
	}
	{
		int nCount; // 86
		{
			int i; // 87
			{
				const KeyValues3* pMember; // 92
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

