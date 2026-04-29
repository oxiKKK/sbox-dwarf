
//
// tier0/concommandhash.h
//
//	referenced by: libtier0.so
//
//	functions: 13
//	class: 1
//

// <000C18D4> tier0/concommandhash.h:24
// member functions: 47
// member variables: 2
// class size: 112
class CConCommandHash {
	/* tier0/concommandhash.h:74 */
	struct CCommandHashIterator_t {
		int bucket; /* 0 4 */
		CCommandHashHandle_t handle; /* 8 8 */
		/* tier0/concommandhash.h:79 */
		void CCommandHashIterator_t(CCommandHashIterator_t* , int, const CCommandHashHandle_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/concommandhash.h:27 */
	typedef intp CCommandHashHandle_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/concommandhash.h:96 */
	enum {
		kNUM_BUCKETS = 256,
		kBUCKETMASK = 255,
	};
	/* tier0/concommandhash.h:101 */
	struct HashEntry_t {
		HashKey_t m_uiKey; /* 0 4 */
		ConCommandBase * m_Data; /* 8 8 */
		/* tier0/concommandhash.h:106 */
		void HashEntry_t(HashEntry_t* , unsigned int, ConCommandBase* );
		/* tier0/concommandhash.h:109 */
		void HashEntry_t(HashEntry_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/concommandhash.h:28 */
	typedef unsigned int HashKey_t;
	/* tier0/concommandhash.h:31 */
	void CConCommandHash(CConCommandHash* );
	/* tier0/concommandhash.h:32 */
	void ~CConCommandHash(CConCommandHash* );
	/* tier0/concommandhash.h:35 */
	void Purge(CConCommandHash* , bool);
	/* tier0/concommandhash.h:38 */
	CCommandHashHandle_t InvalidHandle(void);
	/* tier0/concommandhash.h:39 */
	bool IsValidHandle(const CConCommandHash* , CCommandHashHandle_t);
	/* tier0/concommandhash.h:42 */
	void Init(CConCommandHash* );
	/* tier0/concommandhash.h:45 */
	HashKey_t Hash(const ConCommandBase* );
	/* tier0/concommandhash.h:51 */
	CCommandHashHandle_t Insert(CConCommandHash* , ConCommandBase* );
	/* tier0/concommandhash.h:52 */
	CCommandHashHandle_t FastInsert(CConCommandHash* , ConCommandBase* );
	/* tier0/concommandhash.h:55 */
	void Remove(CConCommandHash* , CCommandHashHandle_t);
	/* tier0/concommandhash.h:56 */
	void RemoveAll(CConCommandHash* );
	/* tier0/concommandhash.h:59 */
	CCommandHashHandle_t Find(const CConCommandHash* , const char* );
	/* tier0/concommandhash.h:60 */
	CCommandHashHandle_t Find(const CConCommandHash* , const ConCommandBase* );
	/* tier0/concommandhash.h:63 */
	ConCommandBase* FindPtr(const CConCommandHash* , const char* );
	/* tier0/concommandhash.h:65 */
	ConCommandBase* & operator[](CConCommandHash* , CCommandHashHandle_t);
	/* tier0/concommandhash.h:66 */
	ConCommandBase* const& operator[](const CConCommandHash* , CCommandHashHandle_t);
	/* tier0/concommandhash.h:83 */
	CCommandHashIterator_t First(const CConCommandHash* );
	/* tier0/concommandhash.h:84 */
	CCommandHashIterator_t Next(const CConCommandHash* , const CCommandHashIterator_t& );
	/* tier0/concommandhash.h:85 */
	bool IsValidIterator(const CConCommandHash* , const CCommandHashIterator_t& );
	/* tier0/concommandhash.h:86 */
	ConCommandBase* & operator[](CConCommandHash* , const CCommandHashIterator_t& );
	/* tier0/concommandhash.h:87 */
	ConCommandBase* const& operator[](const CConCommandHash* , const CCommandHashIterator_t& );
private:
	/* tier0/concommandhash.h:92 */
	CCommandHashHandle_t Find(const CConCommandHash* , const char* , HashKey_t);
protected:
	CUtlVector<long long int, CUtlMemory<long long int, int> > m_aBuckets; /* 0 32 */
	/* tier0/concommandhash.h:112 */
	typedef struct CUtlFixedLinkedList<CConCommandHash::HashEntry_t> datapool_t;
	datapool_t m_aDataPool; /* 32 80 */
	void CConCommandHash(class CConCommandHash *); /* linkage=_ZN15CConCommandHashC4Ev */
	void ~CConCommandHash(class CConCommandHash *); /* linkage=_ZN15CConCommandHashD4Ev */
	void Purge(class CConCommandHash *, bool); /* linkage=_ZN15CConCommandHash5PurgeEb */
	CCommandHashHandle_t InvalidHandle(void); /* linkage=_ZN15CConCommandHash13InvalidHandleEv */
	bool IsValidHandle(const class CConCommandHash  *, CCommandHashHandle_t); /* linkage=_ZNK15CConCommandHash13IsValidHandleEx */
	void Init(class CConCommandHash *); /* linkage=_ZN15CConCommandHash4InitEv */
	HashKey_t Hash(const class ConCommandBase  *); /* linkage=_ZN15CConCommandHash4HashEPK14ConCommandBase */
	/* <d7af7> tier0/cvar.cpp:1028 */
	CCommandHashHandle_t Insert(class CConCommandHash *, class ConCommandBase *); /* linkage=_ZN15CConCommandHash6InsertEP14ConCommandBase */
	CCommandHashHandle_t FastInsert(class CConCommandHash *, class ConCommandBase *); /* linkage=_ZN15CConCommandHash10FastInsertEP14ConCommandBase */
	void Remove(class CConCommandHash *, CCommandHashHandle_t); /* linkage=_ZN15CConCommandHash6RemoveEx */
	void RemoveAll(class CConCommandHash *); /* linkage=_ZN15CConCommandHash9RemoveAllEv */
	CCommandHashHandle_t Find(const class CConCommandHash  *, const char  *); /* linkage=_ZNK15CConCommandHash4FindEPKc */
	CCommandHashHandle_t Find(const class CConCommandHash  *, const class ConCommandBase  *); /* linkage=_ZNK15CConCommandHash4FindEPK14ConCommandBase */
	class ConCommandBase * FindPtr(const class CConCommandHash  *, const char  *); /* linkage=_ZNK15CConCommandHash7FindPtrEPKc */
	class ConCommandBase * & operator[](class CConCommandHash *, CCommandHashHandle_t); /* linkage=_ZN15CConCommandHashixEx */
	class ConCommandBase * const & operator[](const class CConCommandHash  *, CCommandHashHandle_t); /* linkage=_ZNK15CConCommandHashixEx */
	class CCommandHashIterator_t First(const class CConCommandHash  *); /* linkage=_ZNK15CConCommandHash5FirstEv */
	class CCommandHashIterator_t Next(const class CConCommandHash  *, const class CCommandHashIterator_t  &); /* linkage=_ZNK15CConCommandHash4NextERKNS_22CCommandHashIterator_tE */
	bool IsValidIterator(const class CConCommandHash  *, const class CCommandHashIterator_t  &); /* linkage=_ZNK15CConCommandHash15IsValidIteratorERKNS_22CCommandHashIterator_tE */
	class ConCommandBase * & operator[](class CConCommandHash *, const class CCommandHashIterator_t  &); /* linkage=_ZN15CConCommandHashixERKNS_22CCommandHashIterator_tE */
	class ConCommandBase * const & operator[](const class CConCommandHash  *, const class CCommandHashIterator_t  &); /* linkage=_ZNK15CConCommandHashixERKNS_22CCommandHashIterator_tE */
	CCommandHashHandle_t Find(const class CConCommandHash  *, const char  *, HashKey_t); /* linkage=_ZNK15CConCommandHash4FindEPKcj */
};

// <000D699F> tier0/concommandhash.h:38
inline void InvalidHandle(void)
{
} /* size: 0 */

// <000D697E> tier0/concommandhash.h:79
void CCommandHashIterator_t::CCommandHashIterator_t(int _bucket, const CCommandHashHandle_t& _handle)
{
} /* size: 0 */

// <000D694D> tier0/concommandhash.h:79
inline void CCommandHashIterator_t::CCommandHashIterator_t(int _bucket, const CCommandHashHandle_t& _handle)
{
} /* size: 0 */

// <000D6928> tier0/concommandhash.h:86
inline void CConCommandHash::operator[](const CCommandHashIterator_t& iter)
{
} /* size: 0 */

// <000D6911> tier0/concommandhash.h:109
void HashEntry_t::HashEntry_t()
{
} /* size: 0 */

// <000D68F8> tier0/concommandhash.h:109
inline void HashEntry_t::HashEntry_t()
{
} /* size: 0 */

// <000D68D1> tier0/concommandhash.h:124
inline void CConCommandHash::Find(const char* name)
{
} /* size: 0 */

// <000D68AA> tier0/concommandhash.h:129
inline void CConCommandHash::operator[](CCommandHashHandle_t hHash)
{
} /* size: 0 */

// <000D6834> tier0/concommandhash.h:142
// variables: 4
inline void CConCommandHash::First()
{
	int bucketCount; // 145
	const CCommandHashHandle_t  invalidIndex; // 146
	{
		int bucket; // 147
		{
			CCommandHashHandle_t iElement; // 149
		}
	}
} /* size: 0, variables: 2 */

// <000D67CD> tier0/concommandhash.h:163
// variables: 5
inline void CConCommandHash::Next(const CCommandHashIterator_t& iter)
{
	CCommandHashHandle_t next; // 166
	const CCommandHashHandle_t  invalidIndex; // 167
	int bucketCount; // 175
	{
		int bucket; // 176
		{
			CCommandHashHandle_t bucketHandle; // 178
		}
	}
} /* size: 0, variables: 3 */

// <000D67A6> tier0/concommandhash.h:187
inline void CConCommandHash::IsValidIterator(const CCommandHashIterator_t& iter)
{
} /* size: 0 */

// <000D678C> tier0/concommandhash.h:192
inline void Hash(const ConCommandBase* cmd)
{
} /* size: 0 */

// <000D6759> tier0/concommandhash.h:197
// variable: 1
inline void CConCommandHash::FindPtr(const char* name)
{
	CCommandHashHandle_t handle; // 199
} /* size: 0, variables: 1 */

