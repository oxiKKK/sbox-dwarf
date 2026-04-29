
//
// sbox/engineglue.cpp
//
//	referenced by: libengine2.so
//
//	functions: 17
//

// <017197F6> sbox/engineglue.cpp:18
void SetResourceData(ResourceHandle_t handle, void* data)
{
} /* size: 0 */

// <017195A6> sbox/engineglue.cpp:38
// variables: 2
// function calls: 4
void LoadKeyValues3(const char* kv3string)
{
	CUtlString error; // 40
	KeyValues3* pKV; // 41
	CUtlString::CUtlString(); // 40
	CUtlString::~CUtlString(); // 66
	CUtlString::Get(); // 49
	CUtlString::Get(); // 61
} /* size: 300, variables: 2, inline expansions: 4 (59 bytes) */

// <01719304> sbox/engineglue.cpp:68
// variables: 2
// function calls: 6
void KeyValuesToJson(const char* keyValues)
{
	KeyValues kv; // 70
	CUtlBuffer buffer; // 73
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1551
	CUtlBuffer::Purge(); // 74
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 77
} /* size: 336, variables: 2, inline expansions: 6 (181 bytes) */

// <0171914A> sbox/engineglue.cpp:80
// variables: 2
// function calls: 3
void JsonToKeyValues3(const char* json)
{
	CUtlString error; // 82
	KeyValues3* pKV; // 83
	CUtlString::CUtlString(); // 82
	CUtlString::~CUtlString(); // 93
	CUtlString::Get(); // 88
} /* size: 206, variables: 2, inline expansions: 3 (42 bytes) */

// <01718FFC> sbox/engineglue.cpp:96
// variables: 2
// function calls: 4
void KeyValues3ToJson(KeyValues3* kv)
{
	CUtlString sError; // 98
	CUtlString sJsonMessage; // 98
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 103
	CUtlString::CUtlString(); // 98
	CUtlString::CUtlString(); // 98
} /* size: 260, variables: 2, inline expansions: 4 (78 bytes) */

// <01718E9C> sbox/engineglue.cpp:106
// function calls: 3
void GetStringToken(const char* str)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 108
} /* size: 0, inline expansions: 3 (153 bytes) */

// <01718D6A> sbox/engineglue.cpp:111
// variable: 1
// function calls: 4
void GetStringTokenValue(uint32 token)
{
	CUtlStringToken stringToken; // 113
	CUtlStringToken::CUtlStringToken(); // 114
	StringTokenFromHashCode(uint32 nHashCode); // 113
	CUtlStringToken::CanGetOriginalString(); // 114
	CUtlStringToken::MaybeGetOriginalString(); // 114
} /* size: 105, variables: 1, inline expansions: 4 (58 bytes) */

// <01718ACA> sbox/engineglue.cpp:117
// function calls: 5
void AddSearchPath(const char* path, const char* groupid, bool head)
{
	CUtlStringToken::CUtlStringToken(); // 119
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 119
} /* size: 158, inline expansions: 5 (269 bytes) */

// <0171891E> sbox/engineglue.cpp:122
// function calls: 4
void RemoveSearchPath(const char* path, const char* groupid)
{
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 124
} /* size: 136, inline expansions: 4 (224 bytes) */

// <017188ED> sbox/engineglue.cpp:127
void ApproximateProcessMemoryUsage(void)
{
} /* size: 9 */

// <017186A8> sbox/engineglue.cpp:133
// variable: 1
// function calls: 8
void ReadCompiledResourceFileJsonFromFilesystem(const char* filename)
{
	CUtlBuffer buf; // 135
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 141
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 142
} /* size: 169, variables: 1, inline expansions: 8 (115 bytes) */

// <0171844D> sbox/engineglue.cpp:144
// variables: 3
// function calls: 3
void ReadCompiledResourceFileJson(const void* data)
{
	const ResourceFileHeader_t* pHeader; // 146
	ResourceHeaderBlockInfo_t info; // 163
	CUtlString staticString; // 175
	CUtlString::Get(); // 99
	CUtlString::String(); // 179
	CUtlString::CUtlString(); // 175
} /* size: 461, variables: 3, inline expansions: 3 (53 bytes) */

// <01717EB6> sbox/engineglue.cpp:183
// variables: 6
// function calls: 20
void FindAndConvertResources(KeyValues3* kv)
{
	{
		CBufferString strValue; // 190
		{
			IAsset* asset; // 195
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 195
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 199
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 196
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 190
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 1338
		V_isempty(const char* pszString); // 1338
		CBufferString::HasExtension(); // 193
		CBufferString::~CBufferString(); // 204
	}
	{
		int i; // 208
		{
			KeyValues3* member; // 210
		}
	}
	{
		int i; // 219
		{
			KeyValues3* member; // 221
		}
		KeyValues3::GetArrayLength(); // 219
	}
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 188
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01717DAC> sbox/engineglue.cpp:240
// variables: 2
void SetEngineLoggingVerbose(bool bVerbose)
{
	{
		int i; // 242
		{
			const LoggingChannel_t* c; // 250
		}
	}
} /* size: 127 */

// <01717C15> sbox/engineglue.cpp:262
// variable: 1
// function calls: 3
void GetWebAuthTicket(void)
{
	ISteamUser* pSteamUser; // 266
	SteamUser(void); // 266
	memset(void* __dest,
		int __ch,
		size_t __len);  // 275
	V_binarytohex<int, long unsigned int>(const byte* in,
						int inputbytes,
						char* out,
						long unsigned int outsize);  // 276
} /* size: 116, variables: 1, inline expansions: 3 (61 bytes) */

// <01717B50> sbox/engineglue.cpp:281
// variable: 1
// function call: 1
void RequestWebAuthTicket(void)
{
	ISteamUser* pSteamUser; // 283
	SteamUser(void); // 283
} /* size: 106, variables: 1, inline expansions: 1 (15 bytes) */

// <01717A62> sbox/engineglue.cpp:293
// variable: 1
// function call: 1
void CancelWebAuthTicket(void)
{
	ISteamUser* pSteamUser; // 295
	SteamUser(void); // 295
} /* size: 138, variables: 1, inline expansions: 1 (15 bytes) */

