
//
// public/tier0/stringregistry.h
//
//	referenced by: libanimationsystem.so
//				   libtier0.so
//
//	functions: 2
//	class: 1
//

// <00B28F3D> ../public/tier0/stringregistry.h:18
// member functions: 24
// member variable: 1
// class size: 8
class CStringRegistry {
private:
	StringTable_t * m_pStringList; /* 0 8 */
	/* ../public/tier0/stringregistry.h:25 */
	uint16 AddString(CStringRegistry* , const char* , int, ERBTreeInsertBehavior);
	/* ../public/tier0/stringregistry.h:30 */
	int GetStringID(CStringRegistry* , const char* );
	/* ../public/tier0/stringregistry.h:33 */
	const char* GetStringText(CStringRegistry* , int);
	/* ../public/tier0/stringregistry.h:36 */
	const char* GetStringForKey(CStringRegistry* , uint16);
	/* ../public/tier0/stringregistry.h:38 */
	int GetIDForKey(CStringRegistry* , uint16);
	/* ../public/tier0/stringregistry.h:40 */
	void ClearStrings(CStringRegistry* );
	/* ../public/tier0/stringregistry.h:42 */
	int GetNumStrings(const CStringRegistry* );
	/* ../public/tier0/stringregistry.h:45 */
	uint16 First(const CStringRegistry* );
	/* ../public/tier0/stringregistry.h:46 */
	uint16 Next(const CStringRegistry* , uint16);
	/* ../public/tier0/stringregistry.h:47 */
	uint16 InvalidIndex(const CStringRegistry* );
	/* ../public/tier0/stringregistry.h:49 */
	void ~CStringRegistry(CStringRegistry* );
	/* ../public/tier0/stringregistry.h:50 */
	void CStringRegistry(CStringRegistry* );
	uint16 AddString(class CStringRegistry *, const char  *, int, enum ERBTreeInsertBehavior); /* linkage=_ZN15CStringRegistry9AddStringEPKci21ERBTreeInsertBehavior */
	int GetStringID(class CStringRegistry *, const char  *); /* linkage=_ZN15CStringRegistry11GetStringIDEPKc */
	const char  * GetStringText(class CStringRegistry *, int); /* linkage=_ZN15CStringRegistry13GetStringTextEi */
	const char  * GetStringForKey(class CStringRegistry *, uint16); /* linkage=_ZN15CStringRegistry15GetStringForKeyEt */
	int GetIDForKey(class CStringRegistry *, uint16); /* linkage=_ZN15CStringRegistry11GetIDForKeyEt */
	void ClearStrings(class CStringRegistry *); /* linkage=_ZN15CStringRegistry12ClearStringsEv */
	int GetNumStrings(const class CStringRegistry  *); /* linkage=_ZNK15CStringRegistry13GetNumStringsEv */
	uint16 First(const class CStringRegistry  *); /* linkage=_ZNK15CStringRegistry5FirstEv */
	uint16 Next(const class CStringRegistry  *, uint16); /* linkage=_ZNK15CStringRegistry4NextEt */
	uint16 InvalidIndex(const class CStringRegistry  *); /* linkage=_ZNK15CStringRegistry12InvalidIndexEv */
	void ~CStringRegistry(class CStringRegistry *); /* linkage=_ZN15CStringRegistryD4Ev */
	void CStringRegistry(class CStringRegistry *); /* linkage=_ZN15CStringRegistryC4Ev */
};

// <00C1373C> ../public/tier0/stringregistry.h:49
void CStringRegistry::~CStringRegistry()
{
} /* size: 0 */

// <00C13758> ../public/tier0/stringregistry.h:50
void CStringRegistry::CStringRegistry()
{
} /* size: 0 */

