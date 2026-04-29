
//
// public/tier0/stringpool.h
//
//	referenced by: libfilesystem_stdio.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 4
//	classes: 2
//

// <0094B82A> ../public/tier0/stringpool.h:31
// member functions: 13
// member variables: 2
// class size: 64
class CStringPool {
	/* ../public/tier0/stringpool.h:34 */
	void CStringPool(CStringPool* , StringPoolCase_t);
	/* ../public/tier0/stringpool.h:35 */
	void ~CStringPool(CStringPool* );
	/* ../public/tier0/stringpool.h:37 */
	unsigned int Count(const CStringPool* );
	/* ../public/tier0/stringpool.h:39 */
	const char* Allocate(CStringPool* , const char* );
	/* ../public/tier0/stringpool.h:40 */
	void FreeAll(CStringPool* );
	/* ../public/tier0/stringpool.h:43 */
	const char* Find(CStringPool* , const char* );
protected:
	CThreadFastMutex m_Mutex; /* 0 24 */
	/* ../public/tier0/stringpool.h:46 */
	typedef struct CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> > CStrSet;
	CStrSet m_Strings; /* 24 40 */
	void CStringPool(class CStringPool *, enum StringPoolCase_t); /* linkage=_ZN11CStringPoolC4E16StringPoolCase_t */
	void ~CStringPool(class CStringPool *); /* linkage=_ZN11CStringPoolD4Ev */
	unsigned int Count(const class CStringPool  *); /* linkage=_ZNK11CStringPool5CountEv */
	const char  * Allocate(class CStringPool *, const char  *); /* linkage=_ZN11CStringPool8AllocateEPKc */
	void FreeAll(class CStringPool *); /* linkage=_ZN11CStringPool7FreeAllEv */
	const char  * Find(class CStringPool *, const char  *); /* linkage=_ZN11CStringPool4FindEPKc */
};

// <009A6CB0> ../public/tier0/stringpool.h:34
void CStringPool::CStringPool(StringPoolCase_t caseSensitivity)
{
} /* size: 0 */

// <009A6A13> ../public/tier0/stringpool.h:35
void CStringPool::~CStringPool()
{
} /* size: 0 */

// <0049A92E> ../public/tier0/stringpool.h:60
// member functions: 28
// member variables: 5
// class size: 80
class CCountedStringPool {
	/* ../public/tier0/stringpool.h:64 */
	struct hash_item_t {
		const char * m_pString; /* 0 8 */
		short unsigned int m_nNextElement; /* 8 2 */
		unsigned char m_nReferenceCount; /* 10 1 */
		unsigned char m_pad; /* 11 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/stringpool.h:73 */
	enum {
		INVALID_ELEMENT = 0,
		MAX_REFERENCE = 255,
		HASH_TABLE_SIZE = 1024,
	};
	void CCountedStringPool(CCountedStringPool* , const CCountedStringPool& );
	int ()(void) * * _vptr.CCountedStringPool; /* 0 8 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_HashTable; /* 8 32 */
	CUtlVector<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> > m_Elements; /* 40 32 */
	short unsigned int m_FreeListStart; /* 72 2 */
	StringPoolCase_t m_caseSensitivity; /* 76 4 */
	/* tier0/stringpool.cpp:103 */
	void CCountedStringPool(CCountedStringPool* , StringPoolCase_t);
	/* tier0/stringpool.cpp:121 */
	virtual void ~CCountedStringPool(CCountedStringPool* );
	/* tier0/stringpool.cpp:126 */
	void FreeAll(CCountedStringPool* );
	/* tier0/stringpool.cpp:191 */
	const char* FindString(const CCountedStringPool* , const char* );
	/* tier0/stringpool.cpp:250 */
	const char* ReferenceString(CCountedStringPool* , const char* );
	/* tier0/stringpool.cpp:258 */
	void DereferenceString(CCountedStringPool* , const char* );
	/* tier0/stringpool.cpp:167 */
	short unsigned int FindStringHandle(const CCountedStringPool* , const char* );
	/* tier0/stringpool.cpp:200 */
	short unsigned int ReferenceStringHandle(CCountedStringPool* , const char* );
	/* tier0/stringpool.cpp:307 */
	const char* HandleToString(const CCountedStringPool* , short unsigned int);
	/* tier0/stringpool.cpp:312 */
	void SpewStrings(const CCountedStringPool* );
	/* tier0/stringpool.cpp:158 */
	unsigned int Hash(const CCountedStringPool* , const char* );
	/* tier0/stringpool.cpp:356 */
	bool SaveToBuffer(const CCountedStringPool* , CUtlBuffer& );
	/* tier0/stringpool.cpp:393 */
	bool RestoreFromBuffer(CCountedStringPool* , CUtlBuffer& );
	void CCountedStringPool(class CCountedStringPool *, const class CCountedStringPool  &); /* linkage=_ZN18CCountedStringPoolC4ERKS_ */
	void CCountedStringPool(class CCountedStringPool *, enum StringPoolCase_t); /* linkage=_ZN18CCountedStringPoolC4E16StringPoolCase_t */
	virtual void ~CCountedStringPool(class CCountedStringPool *); /* linkage=_ZN18CCountedStringPoolD4Ev */
	void FreeAll(class CCountedStringPool *); /* linkage=_ZN18CCountedStringPool7FreeAllEv */
	const char  * FindString(const class CCountedStringPool  *, const char  *); /* linkage=_ZNK18CCountedStringPool10FindStringEPKc */
	const char  * ReferenceString(class CCountedStringPool *, const char  *); /* linkage=_ZN18CCountedStringPool15ReferenceStringEPKc */
	void DereferenceString(class CCountedStringPool *, const char  *); /* linkage=_ZN18CCountedStringPool17DereferenceStringEPKc */
	short unsigned int FindStringHandle(const class CCountedStringPool  *, const char  *); /* linkage=_ZNK18CCountedStringPool16FindStringHandleEPKc */
	/* <4ab0a9> tier0/stringpool.cpp:200 */
	short unsigned int ReferenceStringHandle(class CCountedStringPool *, const char  *); /* linkage=_ZN18CCountedStringPool21ReferenceStringHandleEPKc */
	const char  * HandleToString(const class CCountedStringPool  *, short unsigned int); /* linkage=_ZNK18CCountedStringPool14HandleToStringEt */
	void SpewStrings(const class CCountedStringPool  *); /* linkage=_ZNK18CCountedStringPool11SpewStringsEv */
	/* <4aa7a4> tier0/stringpool.cpp:158 */
	unsigned int Hash(const class CCountedStringPool  *, const char  *); /* linkage=_ZNK18CCountedStringPool4HashEPKc */
	bool SaveToBuffer(const class CCountedStringPool  *, class CUtlBuffer &); /* linkage=_ZNK18CCountedStringPool12SaveToBufferER10CUtlBuffer */
	bool RestoreFromBuffer(class CCountedStringPool *, class CUtlBuffer &); /* linkage=_ZN18CCountedStringPool17RestoreFromBufferER10CUtlBuffer */
};

// <000B1406> ../public/tier0/stringpool.h:85
void CCountedStringPool::CCountedStringPool(StringPoolCase_t caseSensitivity)
{
} /* size: 0 */

// <000B1389> ../public/tier0/stringpool.h:86
void CCountedStringPool::~CCountedStringPool()
{
} /* size: 0 */

