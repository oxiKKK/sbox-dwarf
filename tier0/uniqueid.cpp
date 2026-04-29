
//
// tier0/uniqueid.cpp
//
//	referenced by: libtier0.so
//
//	functions: 9
//

// <00504C2D> tier0/uniqueid.cpp:33
void CreateUniqueId(UniqueId_t* pDest)
{
} /* size: 9 */

// <0050492C> tier0/uniqueid.cpp:82
// variables: 2
// function calls: 9
bool UniqueIdFromString(UniqueId_t* pDest, const char* pBuf, int nMaxLen)
{
	char* pTemp; // 89
	{
		CRC32_t crc; // 117
		CRC32_Init(CRC32_t* pulCRC); // 118
		CRC32_Final(CRC32_t* pulCRC); // 120
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 121
	}
	V_strlen(const char* str); // 86
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 90
	V_isspace(int c); // 92
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 114
} /* size: 465, variables: 1, inline expansions: 5 (158 bytes) */

// <0050481E> tier0/uniqueid.cpp:131
// variables: 2
// function calls: 2
void InvalidateUniqueId(UniqueId_t* pDest)
{
	const char   __FUNCTION__; // 34715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 134
} /* size: 0, variables: 1, inline expansions: 2 (50 bytes) */

// <00504713> tier0/uniqueid.cpp:137
// variable: 1
// function calls: 2
bool IsUniqueIdValid(const UniqueId_t& id)
{
	UniqueId_t invalidId; // 139
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 140
} /* size: 78, variables: 1, inline expansions: 2 (40 bytes) */

// <00504694> tier0/uniqueid.cpp:144
// function call: 1
bool IsUniqueIdEqual(const UniqueId_t& id1, const UniqueId_t& id2)
{
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 146
} /* size: 50, inline expansions: 1 (25 bytes) */

// <00504649> tier0/uniqueid.cpp:149
void UniqueIdToString(const UniqueId_t& id, char* pBuf, int nMaxLen)
{
} /* size: 8 */

// <00504573> tier0/uniqueid.cpp:168
// function calls: 2
void CopyUniqueId(const UniqueId_t& src, UniqueId_t* pDest)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 170
} /* size: 19, inline expansions: 2 (28 bytes) */

// <0050452B> tier0/uniqueid.cpp:173
bool Serialize(CUtlBuffer& buf, const UniqueId_t& src)
{
} /* size: 7 */

// <005043A6> tier0/uniqueid.cpp:204
// variables: 2
// function calls: 2
bool Unserialize(CUtlBuffer& buf, UniqueId_t& dest)
{
	{
		int nTextLen; // 208
		char* pBuf; // 209
	}
	CUtlBuffer::IsText(); // 206
	CUtlBuffer::IsValid(); // 217
} /* size: 225, inline expansions: 2 (7 bytes) */

