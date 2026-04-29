
//
// tier0/generichash.cpp
//
//	referenced by: libtier0.so
//
//	functions: 3
//

// <001A0008> tier0/generichash.cpp:21
// variable: 1
unsigned int HashString(const char* pszKey)
{
	const char* pszEnd; // 23
} /* size: 52, variables: 1 */

// <0019FFBA> tier0/generichash.cpp:36
// variable: 1
unsigned int HashStringConventional(const char* pszKey)
{
	unsigned int hash; // 38
} /* size: 57, variables: 1 */

// <0019FC05> tier0/generichash.cpp:122
// variables: 9
uint64 MurmurHash64(const void* key, int len, uint32 seed)
{
	const uint32  m; // 127
	const int  r; // 128
	uint32 h1; // 132
	uint32 h2; // 133
	const uint32* data; // 137
	uint64 h; // 173
	{
		uint32 k1; // 140
		uint32 k2; // 145
	}
	{
		uint32 k1; // 153
	}
} /* size: 311, variables: 6 */

