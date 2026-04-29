
//
// common/language.cpp
//
//	referenced by: liblocalize.so
//
//	functions: 8
//	struct: 1
//

// <0007C7AE> ../common/language.cpp:12
// member variables: 8
// struct size: 56
struct Language_t {
	const char * m_pchName; /* 0 8 */
	const char * m_pchShortName; /* 8 8 */
	const char * m_pchVGUILocalizationName; /* 16 8 */
	const char * m_pchSelectionLocalizationName; /* 24 8 */
	const char * m_pchICUName; /* 32 8 */
	const char * m_pchISO639_1Name; /* 40 8 */
	ELanguage m_ELanguage; /* 48 4 */
	int m_LanguageCodeID; /* 52 4 */
};

// <0007D3B0> ../common/language.cpp:84
// variables: 5
// function calls: 3
ELanguage PchLanguageICUCodeToELanguage(const char* pchICUCode, ELanguage eDefault)
{
	const char   __FUNCTION__; // 11440
	int nLen; // 92
	char rchCleanedCode; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
	{
		uint iLang; // 102
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 104
	}
	V_strlen(const char* str); // 92
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 96
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <0007D323> ../common/language.cpp:118
// variable: 1
ELanguage PchISO639_1ToELanguage(const char* pchISO639_1, ELanguage eDefault)
{
	{
		int iLang; // 124
	}
} /* size: 0 */

// <0007D0D5> ../common/language.cpp:160
// variables: 4
const char* GetLanguageICUName(ELanguage eLang)
{
	const char   __FUNCTION__; // 10480
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 162
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 165
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 169
	}
} /* size: 0, variables: 1 */

// <0007CF76> ../common/language.cpp:176
// variables: 5
const char* GetLanguageName(ELanguage eLang)
{
	const char   __FUNCTION__; // 10241
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 180
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 185
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
	}
} /* size: 0, variables: 1 */

// <0007CE17> ../common/language.cpp:197
// variables: 5
const char* GetLanguageVGUILocalization(ELanguage eLang)
{
	const char   __FUNCTION__; // 9890
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 201
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 210
	}
} /* size: 0, variables: 1 */

// <0007CCB8> ../common/language.cpp:218
// variables: 5
const char* GetLanguageSelectionLocalization(ELanguage eLang)
{
	const char   __FUNCTION__; // 9539
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 222
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 223
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 227
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 231
	}
} /* size: 0, variables: 1 */

// <0007CB59> ../common/language.cpp:239
// variables: 5
const char* GetLanguageISO639_1Name(ELanguage eLang)
{
	const char   __FUNCTION__; // 9188
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 248
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 252
	}
} /* size: 0, variables: 1 */

// <0007CA78> ../common/language.cpp:260
// variables: 3
int GetLanguageCodeID(ELanguage eLang)
{
	const char   __FUNCTION__; // 8837
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 265
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 269
	}
} /* size: 0, variables: 1 */

