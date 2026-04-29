
//
// tier0_perproject/utlsymbol.cpp
//
//	referenced by: libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//
//	functions: 16
//	class: 1
//

// <0451EA29> tier0_perproject/utlsymbol.cpp:32
void Initialize(void)
{
} /* size: 0 */

// <0451E882> tier0_perproject/utlsymbol.cpp:32
// function calls: 3
void Initialize(void)
{
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 200
	CUtlSymbolTableMT::CUtlSymbolTableMT(
				int growSize,
				int initSize,
				bool caseInsensitive);  // 43
} /* size: 199, inline expansions: 3 (358 bytes) */

// <0451E337> tier0_perproject/utlsymbol.cpp:32
// variable: 1
void Initialize(void)
{
	bool symbolsInitialized; // 40
} /* size: 0, variables: 1 */

// <0451D335> tier0_perproject/utlsymbol.cpp:51
// member functions: 2
// class size: 1
class CCleanupUtlSymbolTable {
	/* tier0_perproject/utlsymbol.cpp:54 */
	void ~CCleanupUtlSymbolTable(CCleanupUtlSymbolTable* );
	void ~CCleanupUtlSymbolTable(class CCleanupUtlSymbolTable *); /* linkage=_ZN22CCleanupUtlSymbolTableD4Ev */
};

// <0451E163> tier0_perproject/utlsymbol.cpp:54
// function calls: 5
void CCleanupUtlSymbolTable::~CCleanupUtlSymbolTable()
{
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 193
	CUtlSymbolTableMT::~CUtlSymbolTableMT(); // 56
} /* size: 117, inline expansions: 5 (179 bytes) */

// <0451E14A> tier0_perproject/utlsymbol.cpp:54
inline void CCleanupUtlSymbolTable::~CCleanupUtlSymbolTable()
{
} /* size: 0 */

// <0451EA5B> tier0_perproject/utlsymbol.cpp:63
// function call: 1
void CurrTable(void)
{
	Initialize(void); // 65
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0451E140> tier0_perproject/utlsymbol.cpp:63
void CurrTable(void)
{
} /* size: 0 */

// <0451DFC5> tier0_perproject/utlsymbol.cpp:69
// function calls: 4
void CUtlSymbol::CUtlSymbol(const char* pStr)
{
	Initialize(void); // 65
	CurrTable(void); // 71
	CUtlSymbolTableMT::AddString(
			const char* pString);  // 71
	CUtlSymbol::operator UtlSymId_t(); // 71
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0451DF9D> tier0_perproject/utlsymbol.cpp:69
void CUtlSymbol::CUtlSymbol(const char* pStr)
{
} /* size: 0 */

// <0451DE01> tier0_perproject/utlsymbol.cpp:74
// function calls: 4
void CUtlSymbol::CUtlSymbol(const char* pStr, int nStrLen)
{
	Initialize(void); // 65
	CurrTable(void); // 76
	CUtlSymbolTableMT::AddString(
			const char* pString,
			int nStrLen);  // 76
	CUtlSymbol::operator UtlSymId_t(); // 76
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0451DDCD> tier0_perproject/utlsymbol.cpp:74
void CUtlSymbol::CUtlSymbol(const char* pStr, int nStrLen)
{
} /* size: 0 */

// <0451DA8B> tier0_perproject/utlsymbol.cpp:79
// function calls: 11
void CUtlSymbol::String()
{
	Initialize(void); // 65
	CurrTable(void); // 81
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 81
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 267
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 269
	CUtlSymbolTableMT::String(
		CUtlSymbol id);  // 81
} /* size: 0, inline expansions: 11 (0 bytes) */

// <0451DA6E> tier0_perproject/utlsymbol.cpp:84
void DisableStaticSymbolTable(void)
{
} /* size: 0 */

// <0451D95E> tier0_perproject/utlsymbol.cpp:89
// function calls: 3
void SetStaticSymbolTablePageSize(uint nSize)
{
	Initialize(void); // 65
	CurrTable(void); // 91
	CUtlSymbolTableMT::SetPageSize(
			uint nPageSize);  // 91
} /* size: 119, inline expansions: 3 (105 bytes) */

// <0451D821> tier0_perproject/utlsymbol.cpp:94
// function calls: 3
void Find(const char* pStr)
{
	Initialize(void); // 65
	CurrTable(void); // 96
	CUtlSymbolTableMT::Find(
		const char* pString);  // 96
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0071BEFC> tier0_perproject/utlsymbol.cpp:99
// function call: 1
void CUtlSymbol::operator==(const char* pStr)
{
	V_strcmp(const char* s1,
		const char* s2);  // 103
} /* size: 0, inline expansions: 1 (0 bytes) */

