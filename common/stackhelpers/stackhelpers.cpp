
//
// common/stackhelpers/stackhelpers.cpp
//
//	referenced by: libtier0.so
//
//	functions: 2
//

// <0040D9A6> ../common/stackhelpers/stackhelpers.cpp:55
// variables: 13
// function calls: 5
void CStackTranslationHelper::TranslatePointer(uint64 pAddress, char* pTranslationOut, int iTranslationBufferLength, TranslateStackInfo_StyleFlags_t style)
{
	char* pWrite; // 67
	int iLength; // 69
	char szModuleNameBuffer; // 71
	char szSymbolNameBuffer; // 73
	char szFileNameBuffer; // 75
	uint nLine; // 77
	uint nLineDisplacement; // 78
	uint nRetrievedData; // 80
	{
		int nBytesWritten; // 123
	}
	{
		char* pShortened; // 171
		int iSlashesAllowed; // 172
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 195
	}
	{
		int nBytesWritten; // 204
	}
	{
		int nBytesWritten; // 216
	}
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 95
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 119
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 163
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 91
} /* size: 1178, variables: 8, inline expansions: 4 (96 bytes) */

// <0040D8BD> ../common/stackhelpers/stackhelpers.cpp:231
// variables: 2
void CStackTranslationHelper::TranslatePointer(uint64 pAddress, wchar_t* pTranslationOut, int iTranslationBufferLength, TranslateStackInfo_StyleFlags_t style)
{
	const char   __FUNCTION__; // 6165
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
} /* size: 0, variables: 1 */

