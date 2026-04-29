
//
// tier0/checksum_sha1.cpp
//
//	referenced by: libtier0.so
//
//	functions: 6
//

// <00068330> tier0/checksum_sha1.cpp:62
void CSHA1::Reset()
{
} /* size: 35 */

// <00068203> tier0/checksum_sha1.cpp:79
// variables: 5
// function calls: 2
void CSHA1::Transform(uint32* state, const uint8* buffer)
{
	uint32 a; // 82
	uint32 b; // 82
	uint32 c; // 82
	uint32 d; // 82
	uint32 e; // 82
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 84
} /* size: 5060, variables: 5, inline expansions: 2 (138 bytes) */

// <00068046> tier0/checksum_sha1.cpp:130
// variables: 3
// function calls: 4
void CSHA1::Update(const void* pvData, uint32 len)
{
	const uint8* data; // 133
	uint32 i; // 134
	uint32 j; // 134
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 154
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 144
} /* size: 372, variables: 3, inline expansions: 4 (256 bytes) */

// <00067E78> tier0/checksum_sha1.cpp:159
// variables: 6
void CSHA1::HashFile(const char* szFileName)
{
	uint64 ulFileSize; // 161
	uint64 ulBlocks; // 162
	int nRest; // 163
	uint8 uData; // 164
	OSFILEHANDLE fIn; // 165
	bool bSucc; // 183
} /* size: 393, variables: 6 */

// <00067B9E> tier0/checksum_sha1.cpp:217
// variables: 2
// function calls: 8
void CSHA1::Final()
{
	uint32 i; // 220
	uint8 finalcount; // 221
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 241
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 244
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 242
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 243
} /* size: 324, variables: 2, inline expansions: 8 (104 bytes) */

// <00067AF8> tier0/checksum_sha1.cpp:254
// variables: 2
void CSHA1::GetHashHex(char* pDest, int nSize)
{
	{
		int i; // 262
		{
			uint8 b; // 264
		}
	}
} /* size: 120 */

