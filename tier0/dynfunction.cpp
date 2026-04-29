
//
// tier0/dynfunction.cpp
//
//	referenced by: libtier0.so
//
//	functions: 13
//	class: 1
//

// <000FFEBE> tier0/dynfunction.cpp:36
// member functions: 16
// member variable: 1
// class size: 8
class CSharedLibraryCache {
	/* tier0/dynfunction.cpp:45 */
	struct CSharedLibraryItem {
		/* tier0/dynfunction.cpp:47 */
		void CSharedLibraryItem(CSharedLibraryItem* , LibraryHandle, const char* );
		/* tier0/dynfunction.cpp:55 */
		void ~CSharedLibraryItem(CSharedLibraryItem* );
		char * m_name; /* 0 8 */
		CSharedLibraryItem * m_next; /* 8 8 */
		LibraryHandle m_handle; /* 16 8 */
	};
	/* tier0/dynfunction.cpp:39 */
	CSharedLibraryCache& GetCache(void);
	/* tier0/dynfunction.cpp:68 */
	void CSharedLibraryCache(CSharedLibraryCache* );
	/* tier0/dynfunction.cpp:69 */
	void ~CSharedLibraryCache(CSharedLibraryCache* );
	/* tier0/dynfunction.cpp:71 */
	LibraryHandle GetHandle(CSharedLibraryCache* , const char* );
	/* tier0/dynfunction.cpp:88 */
	void CloseLibrary(CSharedLibraryCache* , const char* );
	/* tier0/dynfunction.cpp:100 */
	void CloseAllLibraries(CSharedLibraryCache* );
private:
	/* tier0/dynfunction.cpp:106 */
	CSharedLibraryItem* GetCacheItem(CSharedLibraryCache* , const char* );
	CSharedLibraryItem * m_pList; /* 0 8 */
	class CSharedLibraryCache & GetCache(void); /* linkage=_ZN19CSharedLibraryCache8GetCacheEv */
	void CSharedLibraryCache(class CSharedLibraryCache *); /* linkage=_ZN19CSharedLibraryCacheC4Ev */
	void ~CSharedLibraryCache(class CSharedLibraryCache *); /* linkage=_ZN19CSharedLibraryCacheD4Ev */
	LibraryHandle GetHandle(class CSharedLibraryCache *, const char  *); /* linkage=_ZN19CSharedLibraryCache9GetHandleEPKc */
	void CloseLibrary(class CSharedLibraryCache *, const char  *); /* linkage=_ZN19CSharedLibraryCache12CloseLibraryEPKc */
	void CloseAllLibraries(class CSharedLibraryCache *); /* linkage=_ZN19CSharedLibraryCache17CloseAllLibrariesEv */
	class CSharedLibraryItem * GetCacheItem(class CSharedLibraryCache *, const char  *); /* linkage=_ZN19CSharedLibraryCache12GetCacheItemEPKc */
};

// <00100EFF> tier0/dynfunction.cpp:39
// variable: 1
inline void GetCache(void)
{
	CSharedLibraryCache Singleton; // 41
} /* size: 0, variables: 1 */

// <00100EDE> tier0/dynfunction.cpp:47
void CSharedLibraryItem::CSharedLibraryItem(LibraryHandle handle, const char* name)
{
} /* size: 0 */

// <00100EAD> tier0/dynfunction.cpp:47
inline void CSharedLibraryItem::CSharedLibraryItem(LibraryHandle handle, const char* name)
{
} /* size: 0 */

// <00100BC9> tier0/dynfunction.cpp:55
// function calls: 7
void CSharedLibraryItem::~CSharedLibraryItem()
{
	printf(const char* __fmt, ...); // 57
	printf(const char* __fmt, ...); // 57
	printf(const char* __fmt, ...); // 57
	printf(const char* __fmt, ...); // 57
	CSharedLibraryItem::~CSharedLibraryItem(); // 60
	CSharedLibraryItem::~CSharedLibraryItem(); // 60
	CSharedLibraryItem::~CSharedLibraryItem(); // 60
} /* size: 369, inline expansions: 7 (646 bytes) */

// <00100BB0> tier0/dynfunction.cpp:55
inline void CSharedLibraryItem::~CSharedLibraryItem()
{
} /* size: 0 */

// <00100B99> tier0/dynfunction.cpp:68
void CSharedLibraryCache::CSharedLibraryCache()
{
} /* size: 0 */

// <00100B80> tier0/dynfunction.cpp:68
inline void CSharedLibraryCache::CSharedLibraryCache()
{
} /* size: 0 */

// <00100821> tier0/dynfunction.cpp:69
// function calls: 9
void CSharedLibraryCache::~CSharedLibraryCache()
{
	printf(const char* __fmt, ...); // 57
	printf(const char* __fmt, ...); // 57
	printf(const char* __fmt, ...); // 57
	printf(const char* __fmt, ...); // 57
	CSharedLibraryItem::~CSharedLibraryItem(); // 60
	CSharedLibraryItem::~CSharedLibraryItem(); // 60
	CSharedLibraryItem::~CSharedLibraryItem(); // 60
	CSharedLibraryItem::~CSharedLibraryItem(); // 102
	CSharedLibraryCache::CloseAllLibraries(); // 69
} /* size: 395, inline expansions: 9 (1329 bytes) */

// <00100808> tier0/dynfunction.cpp:69
inline void CSharedLibraryCache::~CSharedLibraryCache()
{
} /* size: 0 */

// <0010073E> tier0/dynfunction.cpp:71
// variables: 2
inline void CSharedLibraryCache::GetHandle(const char* name)
{
	CSharedLibraryItem* item; // 73
	{
		LibraryHandle lib; // 76
	}
} /* size: 0, variables: 1 */

// <00100725> tier0/dynfunction.cpp:100
inline void CSharedLibraryCache::CloseAllLibraries()
{
} /* size: 0 */

// <001006E8> tier0/dynfunction.cpp:106
// variables: 2
inline void CSharedLibraryCache::GetCacheItem(const char* name)
{
	CSharedLibraryItem* prev; // 108
	CSharedLibraryItem* item; // 109
} /* size: 0, variables: 2 */

// <001002A6> tier0/dynfunction.cpp:135
// variables: 4
// function calls: 10
void* VoidFnPtrLookup_Tier0(const char* libname, const char* fn, void* fallback)
{
	LibraryHandle lib; // 137
	void* retval; // 138
	CSharedLibraryCache::CSharedLibraryCache(); // 41
	GetCache(void); // 39
	GetCache(void); // 137
	CSharedLibraryCache::GetCacheItem(
			const char* name);  // 73
	{
		LibraryHandle lib; // 76
		{
			PlatModule_t hModuleInner; // 76
		}
		operator()(const class* __closure); // 76
		printf(const char* __fmt, ...); // 77
		strcpy(char* __dest,
			const char* __src);  // 52
		CSharedLibraryItem::CSharedLibraryItem(
					LibraryHandle handle,
					const char* name);  // 81
	}
	CSharedLibraryCache::GetHandle(
			const char* name);  // 137
	printf(const char* __fmt, ...); // 142
} /* size: 471, variables: 2, inline expansions: 6 (492 bytes) */

