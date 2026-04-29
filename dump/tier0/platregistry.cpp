
//
// tier0/platregistry.cpp
//
//	referenced by: libtier0.so
//
//	functions: 6
//

// <003A899D> tier0/platregistry.cpp:8
// variable: 1
bool Plat_RegistryDirectoryOpenOrCreate(const char* rootKey, PlatRegistryKey_t& hKey)
{
	bool bValid; // 10
} /* size: 17, variables: 1 */

// <003A8967> tier0/platregistry.cpp:39
void Plat_RegistryDirectoryClose(PlatRegistryKey_t& hKey)
{
} /* size: 5 */

// <003A891B> tier0/platregistry.cpp:51
void Plat_RegistryWriteInt(PlatRegistryKey_t hKey, const char* key, int nValue)
{
} /* size: 5 */

// <003A88B7> tier0/platregistry.cpp:71
// variable: 1
int Plat_RegistryReadInt(PlatRegistryKey_t hKey, const char* key, int nDefaultValue)
{
	int nReturnValue; // 73
} /* size: 7, variables: 1 */

// <003A886B> tier0/platregistry.cpp:105
void Plat_RegistryWriteString(PlatRegistryKey_t hKey, const char* key, const char* pValue)
{
} /* size: 5 */

// <003A8784> tier0/platregistry.cpp:126
// function call: 1
void Plat_RegistryReadString(PlatRegistryKey_t hKey, const char* key, char* pValue, int nValueBufferSize, const char* pDefaultValue)
{
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 156
} /* size: 17, inline expansions: 1 (8 bytes) */

