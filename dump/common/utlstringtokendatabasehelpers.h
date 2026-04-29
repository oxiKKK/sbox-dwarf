
//
// common/utlstringtokendatabasehelpers.h
//
//	referenced by: libtier0.so
//
//	functions: 6
//	class: 1
//

// <005A7ADB> ../common/utlstringtokendatabasehelpers.h:17
inline uint32 StringTokenDataBaseFormatToHash(uint8* pData)
{
} /* size: 0 */

// <0059DD4F> ../common/utlstringtokendatabasehelpers.h:29
// member functions: 4
// member variable: 1
// class size: 6
class CUtlStringTokenHash_DatabaseFormat {
	/* ../common/utlstringtokendatabasehelpers.h:43 */
	void CUtlStringTokenHash_DatabaseFormat(CUtlStringTokenHash_DatabaseFormat* , uint32);
	/* ../common/utlstringtokendatabasehelpers.h:60 */
	int Compare(CUtlStringTokenHash_DatabaseFormat* , const uint8* );
private:
	uint8 m_nDatabaseFormat[6]; /* 0 6 */
	void CUtlStringTokenHash_DatabaseFormat(class CUtlStringTokenHash_DatabaseFormat *, uint32); /* linkage=_ZN34CUtlStringTokenHash_DatabaseFormatC4Ej */
	int Compare(class CUtlStringTokenHash_DatabaseFormat *, const uint8  *); /* linkage=_ZN34CUtlStringTokenHash_DatabaseFormat7CompareEPKh */
};

// <005A79F2> ../common/utlstringtokendatabasehelpers.h:43
// function calls: 2
void CUtlStringTokenHash_DatabaseFormat::CUtlStringTokenHash_DatabaseFormat(uint32 nHash)
{
	{
		{
		}
	}
	{
		StringTokenDataBaseFormatToHash(uint8* pData); // 53
	}
	{
	}
	CUtlStringTokenHash_DatabaseFormat::CUtlStringTokenHash_DatabaseFormat(
						uint32 nHash);  // 43
} /* size: 418, inline expansions: 1 (17 bytes) */

// <005A79A4> ../common/utlstringtokendatabasehelpers.h:43
// variables: 2
inline void CUtlStringTokenHash_DatabaseFormat::CUtlStringTokenHash_DatabaseFormat(uint32 nHash)
{
	const char   __FUNCTION__; // 52648
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
} /* size: 0, variables: 1 */

// <005A7972> ../common/utlstringtokendatabasehelpers.h:60
// variable: 1
inline void CUtlStringTokenHash_DatabaseFormat::Compare(const uint8* pCompare)
{
	{
		int i; // 62
	}
} /* size: 0 */

// <005A794F> ../common/utlstringtokendatabasehelpers.h:84
inline int StringTokenDataBaseFormatExpectedNewlines(const uint8* pData)
{
} /* size: 0 */

// <005A78BB> ../common/utlstringtokendatabasehelpers.h:90
// variables: 5
inline bool GetStringFromDatabase(const uint8* pData, const uint8* pReadStop, char* pResultBuffer, size_t nResultMaxSize)
{
	const char   __FUNCTION__; // 52352
	int nExpectedNewlines; // 94
	bool bRetVal; // 95
	char* pWriteStop; // 97
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 92
	}
} /* size: 0, variables: 4 */

