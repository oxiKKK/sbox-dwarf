
//
// public/tier0/utlstablesymboltable.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 8
//	class: 1
//

// <02186163> ../public/tier0/utlstablesymboltable.h:23
// member functions: 18
// member variables: 3
// class size: 120
class CStableSymbolTable {
	/* ../public/tier0/utlstablesymboltable.h:38 */
	struct Hash_t {
		/* ../public/tier0/utlstablesymboltable.h:40 */
		uint operator()(const Hash_t* , const char* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlstablesymboltable.h:43 */
	struct Eq_t {
		/* ../public/tier0/utlstablesymboltable.h:45 */
		bool operator()(const Eq_t* , const char* , const char* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlstablesymboltable.h:26 */
	void CStableSymbolTable(CStableSymbolTable* );
	/* ../public/tier0/utlstablesymboltable.h:27 */
	void ~CStableSymbolTable(CStableSymbolTable* );
	/* ../public/tier0/utlstablesymboltable.h:28 */
	int GetId(CStableSymbolTable* , const char* , bool* );
	/* ../public/tier0/utlstablesymboltable.h:29 */
	int FindOrAddSymbol(CStableSymbolTable* , const char* , bool* );
	/* ../public/tier0/utlstablesymboltable.h:30 */
	const char* GetSymbol(const CStableSymbolTable* , int);
	/* ../public/tier0/utlstablesymboltable.h:31 */
	int Count(const CStableSymbolTable* );
	/* ../public/tier0/utlstablesymboltable.h:32 */
	void Insert(CStableSymbolTable* , int, const char* );
	/* ../public/tier0/utlstablesymboltable.h:35 */
	const char* * GetAllSymbols(const CStableSymbolTable* );
protected:
	CUtlHashtable<char const*, int, CStableSymbolTable::Hash_t, CStableSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<char const*, int>, int> > m_SymbolToId; /* 0 32 */
	CUtlVector<char const*, CUtlMemory<char const*, int> > m_IdToSymbol; /* 32 32 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 64 56 */
	void CStableSymbolTable(class CStableSymbolTable *); /* linkage=_ZN18CStableSymbolTableC4Ev */
	void ~CStableSymbolTable(class CStableSymbolTable *); /* linkage=_ZN18CStableSymbolTableD4Ev */
	int GetId(class CStableSymbolTable *, const char  *, bool *); /* linkage=_ZN18CStableSymbolTable5GetIdEPKcPb */
	int FindOrAddSymbol(class CStableSymbolTable *, const char  *, bool *); /* linkage=_ZN18CStableSymbolTable15FindOrAddSymbolEPKcPb */
	const char  * GetSymbol(const class CStableSymbolTable  *, int); /* linkage=_ZNK18CStableSymbolTable9GetSymbolEi */
	int Count(const class CStableSymbolTable  *); /* linkage=_ZNK18CStableSymbolTable5CountEv */
	void Insert(class CStableSymbolTable *, int, const char  *); /* linkage=_ZN18CStableSymbolTable6InsertEiPKc */
	const char  * * GetAllSymbols(const class CStableSymbolTable  *); /* linkage=_ZNK18CStableSymbolTable13GetAllSymbolsEv */
};

// <0266BCB0> ../public/tier0/utlstablesymboltable.h:26
void CStableSymbolTable::CStableSymbolTable()
{
} /* size: 0 */

// <0266BC97> ../public/tier0/utlstablesymboltable.h:26
inline void CStableSymbolTable::CStableSymbolTable()
{
} /* size: 0 */

// <0266BC80> ../public/tier0/utlstablesymboltable.h:27
void CStableSymbolTable::~CStableSymbolTable()
{
} /* size: 0 */

// <0266BC67> ../public/tier0/utlstablesymboltable.h:27
inline void CStableSymbolTable::~CStableSymbolTable()
{
} /* size: 0 */

// <0266BC36> ../public/tier0/utlstablesymboltable.h:29
inline void CStableSymbolTable::FindOrAddSymbol(const char* pSymbol, bool* pIsNewSymbol)
{
} /* size: 0 */

// <023F8B58> ../public/tier0/utlstablesymboltable.h:30
inline void CStableSymbolTable::GetSymbol(int id)
{
} /* size: 0 */

// <0266BC1D> ../public/tier0/utlstablesymboltable.h:31
inline void CStableSymbolTable::Count()
{
} /* size: 0 */

// <0266BC04> ../public/tier0/utlstablesymboltable.h:35
inline void CStableSymbolTable::GetAllSymbols()
{
} /* size: 0 */

