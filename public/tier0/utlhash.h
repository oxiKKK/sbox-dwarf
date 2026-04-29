
//
// public/tier0/utlhash.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 210
//	classes: 20
//

// <00FEF636> ../public/tier0/utlhash.h:37
// member functions: 52
// member variables: 5
// class size: 56
class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CWorldSceneObjectRef* const&)> {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef bool (*CompareFunc_t)(CWorldSceneObjectRef* const& , CWorldSceneObjectRef* const& );
	/* ../public/tier0/utlhash.h:42 */
	typedef unsigned int (*KeyFunc_t)(CWorldSceneObjectRef* const& );
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int );
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, CWorldSceneObjectRef* const& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, CWorldSceneObjectRef* const& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, CWorldSceneObjectRef* const& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , CWorldSceneObjectRef* const& );
	/* ../public/tier0/utlhash.h:378 */
	CWorldSceneObjectRef* & Element(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	CWorldSceneObjectRef* const& Element(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	CWorldSceneObjectRef* & operator[](CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	CWorldSceneObjectRef* const& operator[](const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int );
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , CWorldSceneObjectRef* const& , unsigned int* , int* );
	CUtlVector<CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> >, CUtlMemory<CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 8 */
	KeyFunc_t m_KeyFunc; /* 40 8 */
	bool m_bPowerOfTwo; /* 48 1 */
	unsigned int m_ModMask; /* 52 4 */
	void CUtlHash(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, int, int, int, CompareFunc_t, KeyFunc_t); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EEC4EiiiS5_S7_ */
	void ~CUtlHash(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EED4Ev */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE13InvalidHandleEv */
	bool IsValidHandle(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE13IsValidHandleEj */
	int Count(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int ); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE5CountEv */
	void Purge(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE5PurgeEv */
	UtlHashHandle_t Insert(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, class CWorldSceneObjectRef * const &); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE6InsertES3_ */
	UtlHashHandle_t Insert(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, class CWorldSceneObjectRef * const &, bool *); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE6InsertES3_Pb */
	UtlHashHandle_t AllocEntryFromKey(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, class CWorldSceneObjectRef * const &); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE17AllocEntryFromKeyES3_ */
	void Remove(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE6RemoveEj */
	void RemoveAll(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE9RemoveAllEv */
	UtlHashHandle_t Find(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , class CWorldSceneObjectRef * const &); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE4FindES3_ */
	class CWorldSceneObjectRef * & Element(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE7ElementEj */
	class CWorldSceneObjectRef * const & Element(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE7ElementEj */
	class CWorldSceneObjectRef * & operator[](class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EEixEj */
	class CWorldSceneObjectRef * const & operator[](const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EEixEj */
	UtlHashHandle_t GetFirstHandle(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int ); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE14GetFirstHandleEv */
	UtlHashHandle_t GetNextHandle(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE13GetNextHandleEj */
	void Log(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, const char  *); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE3LogEPKc */
	void Dump(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE4DumpEv */
	void Swap(class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW, class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CW); /* linkage=_ZN8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE4SwapERS8_ */
	int GetBucketIndex(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE14GetBucketIndexEj */
	int GetKeyDataIndex(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE15GetKeyDataIndexEj */
	UtlHashHandle_t BuildHandle(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , int, int); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE11BuildHandleEii */
	bool DoFind(const class CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int , class CWorldSceneObjectRef * const &, unsigned int *, int *); /* linkage=_ZNK8CUtlHashIP20CWorldSceneObjectRefPFbRKS1_S3_EPFjS3_EE6DoFindES3_PjPi */
};

// <02DB1C5A> ../public/tier0/utlhash.h:37
// member functions: 25
// member variables: 5
// class size: 40
class CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneObjectDesc*>::CHash<true> > {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CCompare<true> CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CHash<true> KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, const Entry_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, const Entry_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, const Entry_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, const Entry_t& );
	/* ../public/tier0/utlhash.h:378 */
	Entry_t& Element(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const Entry_t& Element(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	Entry_t& operator[](CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const Entry_t& operator[](const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb, CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneOb);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<IS, const Entry_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
};

// <02DBD04D> ../public/tier0/utlhash.h:37
// member functions: 27
// member variables: 5
// class size: 56
class CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), unsigned int (*)(const NameToLightCookieSequence_t&)> {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef bool (*CompareFunc_t)(const NameToLightCookieSequence_t& , const NameToLightCookieSequence_t& );
	/* ../public/tier0/utlhash.h:42 */
	typedef unsigned int (*KeyFunc_t)(const NameToLightCookieSequence_t& );
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, const NameToLightCookieSequence_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, const NameToLightCookieSequence_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, const NameToLightCookieSequence_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, const NameToLightCookieSequence_t& );
	/* ../public/tier0/utlhash.h:378 */
	NameToLightCookieSequence_t& Element(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const NameToLightCookieSequence_t& Element(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	NameToLightCookieSequence_t& operator[](CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const NameToLightCookieSequence_t& operator[](const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u, CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_t&), u);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<NameToLightCookieSequence_t, bool (*)(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_, const NameToLightCookieSequence_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, CUtlMemory<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 8 */
	KeyFunc_t m_KeyFunc; /* 40 8 */
	bool m_bPowerOfTwo; /* 48 1 */
	unsigned int m_ModMask; /* 52 4 */
};

// <02DC1DA7> ../public/tier0/utlhash.h:37
// member functions: 50
// member variables: 5
// class size: 40
class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlHashDict<unsigned char, true, true>::CHash<true> > {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CCompare<true> CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CHash<true> KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, const Entry_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, const Entry_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, const Entry_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, const Entry_t& );
	/* ../public/tier0/utlhash.h:378 */
	Entry_t& Element(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const Entry_t& Element(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	Entry_t& operator[](CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const Entry_t& operator[](const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, const Entry_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
	void CUtlHash(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, int, int, int, CompareFunc_t, KeyFunc_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEC4EiiiS4_S6_ */
	void ~CUtlHash(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEED4Ev */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13InvalidHandleEv */
	bool IsValidHandle(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13IsValidHandleEj */
	int Count(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5CountEv */
	void Purge(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5PurgeEv */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_ */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, const class Entry_t  &, bool *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_Pb */
	UtlHashHandle_t AllocEntryFromKey(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE17AllocEntryFromKeyERKS2_ */
	void Remove(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6RemoveEj */
	void RemoveAll(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE9RemoveAllEv */
	UtlHashHandle_t Find(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, const class Entry_t  &); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4FindERKS2_ */
	class Entry_t & Element(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	const class Entry_t  & Element(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	class Entry_t & operator[](class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	const class Entry_t  & operator[](const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	UtlHashHandle_t GetFirstHandle(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetFirstHandleEv */
	UtlHashHandle_t GetNextHandle(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13GetNextHandleEj */
	void Log(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, const char  *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE3LogEPKc */
	void Dump(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4DumpEv */
	void Swap(class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH, class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlH); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4SwapERS7_ */
	int GetBucketIndex(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetBucketIndexEj */
	int GetKeyDataIndex(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE15GetKeyDataIndexEj */
	UtlHashHandle_t BuildHandle(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, int, int); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE11BuildHandleEii */
	bool DoFind(const class CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>,, const class Entry_t  &, unsigned int *, int *); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIhLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6DoFindERKS2_PjPi */
};

// <0410727C> ../public/tier0/utlhash.h:37
// member functions: 25
// member variables: 5
// class size: 40
class CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs> {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CWrappedInterpolatedVarArrayBaseHashFuncs CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CWrappedInterpolatedVarArrayBaseHashFuncs KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, const CWrappedIVHashElement_t& );
	/* ../public/tier0/utlhash.h:378 */
	CWrappedIVHashElement_t& Element(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const CWrappedIVHashElement_t& Element(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	CWrappedIVHashElement_t& operator[](CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const CWrappedIVHashElement_t& operator[](const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, const CWrappedIVHashElement_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
};

// <04A6CB58> ../public/tier0/utlhash.h:37
// member functions: 75
// member variables: 5
// class size: 40
class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<short int, true, true>::CHash<true> > {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CCompare<true> CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CHash<true> KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const Entry_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const Entry_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const Entry_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, const Entry_t& );
	/* ../public/tier0/utlhash.h:378 */
	Entry_t& Element(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const Entry_t& Element(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	Entry_t& operator[](CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const Entry_t& operator[](const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, const Entry_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
	void CUtlHash(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, int, int, int, CompareFunc_t, KeyFunc_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEC4EiiiS4_S6_ */
	void ~CUtlHash(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEED4Ev */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13InvalidHandleEv */
	bool IsValidHandle(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13IsValidHandleEj */
	int Count(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5CountEv */
	void Purge(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5PurgeEv */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_ */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const class Entry_t  &, bool *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_Pb */
	UtlHashHandle_t AllocEntryFromKey(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE17AllocEntryFromKeyERKS2_ */
	void Remove(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6RemoveEj */
	void RemoveAll(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE9RemoveAllEv */
	UtlHashHandle_t Find(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, const class Entry_t  &); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4FindERKS2_ */
	class Entry_t & Element(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	const class Entry_t  & Element(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	class Entry_t & operator[](class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	const class Entry_t  & operator[](const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	UtlHashHandle_t GetFirstHandle(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetFirstHandleEv */
	UtlHashHandle_t GetNextHandle(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13GetNextHandleEj */
	void Log(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const char  *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE3LogEPKc */
	void Dump(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4DumpEv */
	void Swap(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4SwapERS7_ */
	int GetBucketIndex(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetBucketIndexEj */
	int GetKeyDataIndex(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE15GetKeyDataIndexEj */
	UtlHashHandle_t BuildHandle(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, int, int); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE11BuildHandleEii */
	bool DoFind(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, const class Entry_t  &, unsigned int *, int *); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6DoFindERKS2_PjPi */
	void CUtlHash(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, int, int, int, CompareFunc_t, KeyFunc_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEC4EiiiS4_S6_ */
	void ~CUtlHash(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEED4Ev */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13InvalidHandleEv */
	bool IsValidHandle(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13IsValidHandleEj */
	int Count(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5CountEv */
	void Purge(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5PurgeEv */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_ */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const class Entry_t  &, bool *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_Pb */
	UtlHashHandle_t AllocEntryFromKey(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE17AllocEntryFromKeyERKS2_ */
	void Remove(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6RemoveEj */
	void RemoveAll(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE9RemoveAllEv */
	UtlHashHandle_t Find(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, const class Entry_t  &); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4FindERKS2_ */
	class Entry_t & Element(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	const class Entry_t  & Element(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	class Entry_t & operator[](class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	const class Entry_t  & operator[](const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	UtlHashHandle_t GetFirstHandle(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetFirstHandleEv */
	UtlHashHandle_t GetNextHandle(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13GetNextHandleEj */
	void Log(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const char  *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE3LogEPKc */
	void Dump(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4DumpEv */
	void Swap(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4SwapERS7_ */
	int GetBucketIndex(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetBucketIndexEj */
	int GetKeyDataIndex(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE15GetKeyDataIndexEj */
	UtlHashHandle_t BuildHandle(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, int, int); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE11BuildHandleEii */
	bool DoFind(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, const class Entry_t  &, unsigned int *, int *); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6DoFindERKS2_PjPi */
};

// <04A701D1> ../public/tier0/utlhash.h:37
// member functions: 25
// member variables: 5
// class size: 40
class CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<true>, CUtlHashDict<UserDataElement_t, true, false>::CHash<true> > {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CCompare<true> CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CHash<true> KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, const Entry_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, const Entry_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, const Entry_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, const Entry_t& );
	/* ../public/tier0/utlhash.h:378 */
	Entry_t& Element(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const Entry_t& Element(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	Entry_t& operator[](CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const Entry_t& operator[](const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr, CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<tr);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp, const Entry_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
};

// <04A7383A> ../public/tier0/utlhash.h:37
// member functions: 75
// member variables: 5
// class size: 40
class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDict<short int, true, false>::CHash<true> > {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CCompare<true> CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CHash<true> KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const Entry_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const Entry_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const Entry_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, const Entry_t& );
	/* ../public/tier0/utlhash.h:378 */
	Entry_t& Element(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const Entry_t& Element(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	Entry_t& operator[](CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const Entry_t& operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, const Entry_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
	void CUtlHash(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, int, int, int, CompareFunc_t, KeyFunc_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEC4EiiiS4_S6_ */
	void ~CUtlHash(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEED4Ev */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13InvalidHandleEv */
	bool IsValidHandle(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13IsValidHandleEj */
	int Count(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5CountEv */
	void Purge(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5PurgeEv */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_ */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const class Entry_t  &, bool *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_Pb */
	UtlHashHandle_t AllocEntryFromKey(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE17AllocEntryFromKeyERKS2_ */
	void Remove(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6RemoveEj */
	void RemoveAll(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE9RemoveAllEv */
	UtlHashHandle_t Find(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, const class Entry_t  &); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4FindERKS2_ */
	class Entry_t & Element(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	const class Entry_t  & Element(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	class Entry_t & operator[](class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	const class Entry_t  & operator[](const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	UtlHashHandle_t GetFirstHandle(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetFirstHandleEv */
	UtlHashHandle_t GetNextHandle(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13GetNextHandleEj */
	void Log(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, const char  *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE3LogEPKc */
	void Dump(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4DumpEv */
	void Swap(class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<, class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4SwapERS7_ */
	int GetBucketIndex(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetBucketIndexEj */
	int GetKeyDataIndex(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE15GetKeyDataIndexEj */
	UtlHashHandle_t BuildHandle(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, int, int); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE11BuildHandleEii */
	bool DoFind(const class CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas, const class Entry_t  &, unsigned int *, int *); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb1EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6DoFindERKS2_PjPi */
	void CUtlHash(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, int, int, int, CompareFunc_t, KeyFunc_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEC4EiiiS4_S6_ */
	void ~CUtlHash(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEED4Ev */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13InvalidHandleEv */
	bool IsValidHandle(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13IsValidHandleEj */
	int Count(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5CountEv */
	void Purge(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE5PurgeEv */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_ */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const class Entry_t  &, bool *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6InsertERKS2_Pb */
	UtlHashHandle_t AllocEntryFromKey(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE17AllocEntryFromKeyERKS2_ */
	void Remove(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6RemoveEj */
	void RemoveAll(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE9RemoveAllEv */
	UtlHashHandle_t Find(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, const class Entry_t  &); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4FindERKS2_ */
	class Entry_t & Element(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	const class Entry_t  & Element(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE7ElementEj */
	class Entry_t & operator[](class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	const class Entry_t  & operator[](const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEEixEj */
	UtlHashHandle_t GetFirstHandle(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetFirstHandleEv */
	UtlHashHandle_t GetNextHandle(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE13GetNextHandleEj */
	void Log(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, const char  *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE3LogEPKc */
	void Dump(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4DumpEv */
	void Swap(class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic, class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDic); /* linkage=_ZN8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE4SwapERS7_ */
	int GetBucketIndex(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE14GetBucketIndexEj */
	int GetKeyDataIndex(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE15GetKeyDataIndexEj */
	UtlHashHandle_t BuildHandle(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, int, int); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE11BuildHandleEii */
	bool DoFind(const class CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH, const class Entry_t  &, unsigned int *, int *); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictIsLb1ELb0EE7Entry_tENS1_8CCompareILb1EEENS1_5CHashILb1EEEE6DoFindERKS2_PjPi */
};

// <04A88FDE> ../public/tier0/utlhash.h:37
// member functions: 25
// member variables: 5
// class size: 40
class CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequenceMapping::HashValueType::HashFuncs> {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct HashFuncs CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct HashFuncs KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, const HashValueType& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, const HashValueType& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, const HashValueType& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, const HashValueType& );
	/* ../public/tier0/utlhash.h:378 */
	HashValueType& Element(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const HashValueType& Element(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	HashValueType& operator[](CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const HashValueType& operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ, CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequ);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity, const HashValueType& , unsigned int* , int* );
	CUtlVector<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >, CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
};

// <04E7BCC6> ../public/tier0/utlhash.h:37
// member functions: 25
// member variables: 5
// class size: 40
class CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<false>, CUtlHashDict<const CMorphData*, false, false>::CHash<false> > {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CCompare<false> CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CHash<false> KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, const Entry_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, const Entry_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, const Entry_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, const Entry_t& );
	/* ../public/tier0/utlhash.h:378 */
	Entry_t& Element(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const Entry_t& Element(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	Entry_t& operator[](CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const Entry_t& operator[](const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<, CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCo, const Entry_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
};

// <058C78F5> ../../public/tier0/utlhash.h:37
// member functions: 25
// member variables: 5
// class size: 40
class CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs> {
	/* ../../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../../public/tier0/utlhash.h:41 */
	typedef struct CWrappedInterpolatedVarArrayBaseHashFuncs CompareFunc_t;
	/* ../../public/tier0/utlhash.h:42 */
	typedef struct CWrappedInterpolatedVarArrayBaseHashFuncs KeyFunc_t;
	/* ../../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	/* ../../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas);
	/* ../../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	/* ../../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t& );
	/* ../../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t& , bool* );
	/* ../../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t& );
	/* ../../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	/* ../../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, const CWrappedIVHashElement_t& );
	/* ../../public/tier0/utlhash.h:378 */
	CWrappedIVHashElement_t& Element(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:389 */
	const CWrappedIVHashElement_t& Element(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:401 */
	CWrappedIVHashElement_t& operator[](CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:413 */
	const CWrappedIVHashElement_t& operator[](const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas);
	/* ../../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const char* );
	/* ../../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	/* ../../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
protected:
	/* ../../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	/* ../../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, int, int);
	/* ../../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, const CWrappedIVHashElement_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
};

// <00B907AB> ../public/tier0/utlhash.h:37
// member functions: 50
// member variables: 5
// class size: 40
class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<true>, CUtlHashDict<ChannelElementMap_t, true, true>::CHash<true> > {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CCompare<true> CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CHash<true> KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<);
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo);
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<);
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, const Entry_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, const Entry_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, const Entry_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<);
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, const Entry_t& );
	/* ../public/tier0/utlhash.h:378 */
	Entry_t& Element(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const Entry_t& Element(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	Entry_t& operator[](CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const Entry_t& operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo);
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<);
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<);
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, const Entry_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
	void CUtlHash(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, int, int, int, CompareFunc_t, KeyFunc_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEEC4EiiiS5_S7_ */
	void ~CUtlHash(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEED4Ev */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE13InvalidHandleEv */
	bool IsValidHandle(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE13IsValidHandleEj */
	int Count(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE5CountEv */
	void Purge(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE5PurgeEv */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE6InsertERKS3_ */
	UtlHashHandle_t Insert(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, const class Entry_t  &, bool *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE6InsertERKS3_Pb */
	UtlHashHandle_t AllocEntryFromKey(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, const class Entry_t  &); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE17AllocEntryFromKeyERKS3_ */
	void Remove(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE6RemoveEj */
	void RemoveAll(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE9RemoveAllEv */
	UtlHashHandle_t Find(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, const class Entry_t  &); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE4FindERKS3_ */
	class Entry_t & Element(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE7ElementEj */
	const class Entry_t  & Element(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE7ElementEj */
	class Entry_t & operator[](class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, UtlHashHandle_t); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEEixEj */
	const class Entry_t  & operator[](const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEEixEj */
	UtlHashHandle_t GetFirstHandle(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE14GetFirstHandleEv */
	UtlHashHandle_t GetNextHandle(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE13GetNextHandleEj */
	void Log(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, const char  *); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE3LogEPKc */
	void Dump(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE4DumpEv */
	void Swap(class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<, class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<); /* linkage=_ZN8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE4SwapERS8_ */
	int GetBucketIndex(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE14GetBucketIndexEj */
	int GetKeyDataIndex(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, UtlHashHandle_t); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE15GetKeyDataIndexEj */
	UtlHashHandle_t BuildHandle(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, int, int); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE11BuildHandleEii */
	bool DoFind(const class CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo, const class Entry_t  &, unsigned int *, int *); /* linkage=_ZNK8CUtlHashIN12CUtlHashDictI19ChannelElementMap_tLb1ELb1EE7Entry_tENS2_8CCompareILb1EEENS2_5CHashILb1EEEE6DoFindERKS3_PjPi */
};

// <005610CC> ../public/tier0/utlhash.h:37
// member functions: 25
// member variables: 5
// class size: 40
class CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> > {
	/* ../public/tier0/utlhash.h:109 */
	void CUtlHash(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , int, int, int, CompareFunc_t, KeyFunc_t);
	/* ../public/tier0/utlhash.h:41 */
	typedef struct CCompare<true> CompareFunc_t;
	/* ../public/tier0/utlhash.h:42 */
	typedef struct CHash<true> KeyFunc_t;
	/* ../public/tier0/utlhash.h:132 */
	void ~CUtlHash(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* );
	/* ../public/tier0/utlhash.h:50 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:153 */
	bool IsValidHandle(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:174 */
	int Count(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* );
	/* ../public/tier0/utlhash.h:224 */
	void Purge(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* );
	/* ../public/tier0/utlhash.h:289 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , const Entry_t& );
	/* ../public/tier0/utlhash.h:307 */
	UtlHashHandle_t Insert(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , const Entry_t& , bool* );
	/* ../public/tier0/utlhash.h:328 */
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , const Entry_t& );
	/* ../public/tier0/utlhash.h:347 */
	void Remove(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:365 */
	void RemoveAll(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* );
	/* ../public/tier0/utlhash.h:273 */
	UtlHashHandle_t Find(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , const Entry_t& );
	/* ../public/tier0/utlhash.h:378 */
	Entry_t& Element(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:389 */
	const Entry_t& Element(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:401 */
	Entry_t& operator[](CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:413 */
	const Entry_t& operator[](const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:424 */
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* );
	/* ../public/tier0/utlhash.h:430 */
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:452 */
	void Log(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , const char* );
	/* ../public/tier0/utlhash.h:486 */
	void Dump(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* );
	/* ../public/tier0/utlhash.h:139 */
	void Swap(CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >& );
protected:
	/* ../public/tier0/utlhash.h:191 */
	int GetBucketIndex(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:200 */
	int GetKeyDataIndex(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , UtlHashHandle_t);
	/* ../public/tier0/utlhash.h:209 */
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , int, int);
	/* ../public/tier0/utlhash.h:236 */
	bool DoFind(const CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> >* , const Entry_t& , unsigned int* , int* );
	CUtlVector<CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> >, CUtlMemory<CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> >, int> > m_Buckets; /* 0 32 */
	CompareFunc_t m_CompareFunc; /* 32 0 */
	KeyFunc_t m_KeyFunc; /* 33 0 */
	bool m_bPowerOfTwo; /* 34 1 */
	unsigned int m_ModMask; /* 36 4 */
};

// <06E27C9B> ../../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <04E82531> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash<CUtlHashDict<const CMorphData::CUtlHash(int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <04D70CFE> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <02EADA68> ../public/tier0/utlhash.h:109
// variables: 3
// function calls: 32
void CUtlHash<NameToLightCookieSequence_t, bool (::CUtlHash(int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
	{
		int ndxBucket; // 116
		CUtlMemory<NameToLightCookieSequence_t, int>::SetGrowSize(
				int nSize);  // 318
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::SetGrowSize(
				int size);  // 119
		CUtlMemory<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, CUtlMemory<C this,
				int i);  // 118
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<NameToLightCookieSequence_t, int>::NumAllocated(); // 782
		CUtlMemory<NameToLightCookieSequence_t, int>::Base(); // 112
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::Base(); // 368
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<NameToLightCookieSequence_t, int>::IsGrowable(); // 823
		CUtlMemory<NameToLightCookieSequence_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<NameToLightCookieSequence_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<NameToLightCookieSequence_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<NameToLightCookieSequence_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::Element(
				int i);  // 1453
			CUtlStringToken::CUtlStringToken(); // 196
			NameToLightCookieSequence_t::NameToLightCookieSequence_t(); // 1479
			Construct<NameToLightCookieSequence_t>(NameToLightCookieSequence_t* pMemory); // 1453
		}
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >::SetCount(
			int count);  // 118
		CUtlMemory<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, CUtlMemory<C this,
				int i);  // 119
	}
	IsPowerOfTwo(int value); // 124
	CUtlMemory<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, CUtlMemory<C this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, CUtlMemory<C this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<NameToLightCookieSequence_t, CUtlMemory<NameToLightCookieSequence_t, int> >, CUtlMemory<CUtlV this); // 112
} /* size: 587, inline expansions: 6 (59 bytes) */

// <02EADA05> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash<NameToLightCookieSequence_t, bool (::CUtlHash(int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <02E9AEEA> ../public/tier0/utlhash.h:109
// variables: 2
// function calls: 27
void CUtlHash<CUtlHashDict<ISceneObjectDesc::CUtlHash(int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
	{
		int ndxBucket; // 116
		CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 118
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::SetGrowSize(
				int nSize);  // 318
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::SetGrowSize(
				int size);  // 119
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::NumAllocated(); // 782
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsGrowable(); // 823
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Grow(
			int num);  // 806
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Base(); // 112
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Base(); // 368
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::GrowVector(
				int num);  // 1445
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::SetCount(
			int count);  // 118
		CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 119
	}
	IsPowerOfTwo(int value); // 124
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<CUtlHashDict<ISceneObjectDesc::CUtlVector(); // 112
} /* size: 509, inline expansions: 6 (58 bytes) */

// <02E9AE87> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash<CUtlHashDict<ISceneObjectDesc::CUtlHash(int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <02E997B5> ../public/tier0/utlhash.h:109
// variables: 2
// function calls: 27
void CUtlHash(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
	{
		int ndxBucket; // 116
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
				int i);  // 118
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::SetGrowSize(
				int nSize);  // 318
		SetGrowSize(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
				int size);  // 119
		RemoveMultipleFromTail(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
					int num);  // 1323
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::NumAllocated(); // 782
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsGrowable(); // 823
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Grow(
			int num);  // 806
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 824
		GrowMemory(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
				int num);  // 1445
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
					int num);  // 1319
		SetCount(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
			int count);  // 118
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
				int i);  // 119
	}
	IsPowerOfTwo(int value); // 124
	ValidateGrowSize(const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this); // 475
	CUtlMemory(const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this); // 112
} /* size: 509, inline expansions: 6 (58 bytes) */

// <02E99752> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <01007AE8> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash<CWorldSceneObjectRef::CUtlHash(int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <00C5D7FD> ../public/tier0/utlhash.h:109
// variables: 2
// function calls: 23
void CUtlHash(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
	{
		int ndxBucket; // 116
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::SetGrowSize(
				int nSize);  // 318
		SetGrowSize(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
				int size);  // 119
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
				int i);  // 118
		RemoveMultipleFromTail(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
					int num);  // 1323
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::NumAllocated(); // 782
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 824
		GrowMemory(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
				int num);  // 1445
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
					int num);  // 1319
		SetCount(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
			int count);  // 118
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
				int i);  // 119
	}
	IsPowerOfTwo(int value); // 124
	ValidateGrowSize(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this); // 475
	CUtlMemory(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this); // 112
} /* size: 294, inline expansions: 6 (54 bytes) */

// <00C5D79A> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <00C5B069> ../public/tier0/utlhash.h:109
// variables: 2
// function calls: 23
void CUtlHash(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
	{
		int ndxBucket; // 116
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::SetGrowSize(
				int nSize);  // 318
		SetGrowSize(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
				int size);  // 119
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
				int i);  // 118
		RemoveMultipleFromTail(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
					int num);  // 1323
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::NumAllocated(); // 782
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 824
		GrowMemory(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
				int num);  // 1445
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
					int num);  // 1319
		SetCount(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
			int count);  // 118
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
				int i);  // 119
	}
	IsPowerOfTwo(int value); // 124
	ValidateGrowSize(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this); // 475
	CUtlMemory(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this); // 112
} /* size: 294, inline expansions: 6 (54 bytes) */

// <00C5B006> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <00C5A4DC> ../public/tier0/utlhash.h:109
// variables: 2
// function calls: 23
void CUtlHash(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
	{
		int ndxBucket; // 116
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::SetGrowSize(
				int nSize);  // 318
		SetGrowSize(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
				int size);  // 119
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
				int i);  // 118
		RemoveMultipleFromTail(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
					int num);  // 1323
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::NumAllocated(); // 782
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 824
		GrowMemory(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
				int num);  // 1445
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
					int num);  // 1319
		SetCount(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
			int count);  // 118
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
				int i);  // 119
	}
	IsPowerOfTwo(int value); // 124
	ValidateGrowSize(const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this); // 475
	CUtlMemory(const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this); // 112
} /* size: 294, inline expansions: 6 (54 bytes) */

// <00C5A479> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <00C59D70> ../public/tier0/utlhash.h:109
// variables: 2
// function calls: 23
void CUtlHash(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
	{
		int ndxBucket; // 116
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::SetGrowSize(
				int nSize);  // 318
		SetGrowSize(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
				int size);  // 119
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
				int i);  // 118
		RemoveMultipleFromTail(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
					int num);  // 1323
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::NumAllocated(); // 782
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 824
		GrowMemory(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
				int num);  // 1445
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
					int num);  // 1319
		SetCount(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this,
			int count);  // 118
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
				int i);  // 119
	}
	IsPowerOfTwo(int value); // 124
	ValidateGrowSize(const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this); // 475
	CUtlMemory(const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this); // 112
} /* size: 294, inline expansions: 6 (54 bytes) */

// <00C59D0D> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this, int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <00566335> ../public/tier0/utlhash.h:109
// variables: 2
// function calls: 23
void CUtlHash<CUtlHashDict<void::CUtlHash(int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
	{
		int ndxBucket; // 116
		CUtlMemory<CUtlHashDict<void::SetGrowSize(
				int nSize);  // 318
		CUtlVectorBase<CUtlHashDict<void::SetGrowSize(
				int size);  // 119
		CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 118
		CUtlVectorBase<CUtlHashDict<void::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CUtlHashDict<void::NumAllocated(); // 782
		CUtlMemory<CUtlHashDict<void::Base(); // 112
		CUtlVectorBase<CUtlHashDict<void::Base(); // 368
		CUtlVectorBase<CUtlHashDict<void::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlHashDict<void::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CUtlHashDict<void::GrowVector(
				int num);  // 1445
		CUtlVectorBase<CUtlHashDict<void::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CUtlHashDict<void::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CUtlHashDict<void::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CUtlHashDict<void::SetCount(
			int count);  // 118
		CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 119
	}
	IsPowerOfTwo(int value); // 124
	CUtlMemory<CUtlVector<CUtlHashDict<void::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<CUtlHashDict<void::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<CUtlHashDict<void::CUtlVector(); // 112
} /* size: 294, inline expansions: 6 (54 bytes) */

// <005662D2> ../public/tier0/utlhash.h:109
// variable: 1
void CUtlHash<CUtlHashDict<void::CUtlHash(int bucketCount, int growCount, int initCount, CompareFunc_t compareFunc, KeyFunc_t keyFunc)
{
	{
		int ndxBucket; // 116
	}
} /* size: 0 */

// <06E27C21> ../../public/tier0/utlhash.h:132
void ~CUtlHash(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas this)
{
} /* size: 0 */

// <04E824B7> ../public/tier0/utlhash.h:132
void CUtlHash<CUtlHashDict<const CMorphData::~CUtlHash()
{
} /* size: 0 */

// <04AB50F2> ../public/tier0/utlhash.h:132
void ~CUtlHash(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this)
{
} /* size: 0 */

// <02EAD9EE> ../public/tier0/utlhash.h:132
void CUtlHash<NameToLightCookieSequence_t, bool (::~CUtlHash()(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_ this)
{
} /* size: 0 */

// <02E9AE70> ../public/tier0/utlhash.h:132
void CUtlHash<CUtlHashDict<ISceneObjectDesc::~CUtlHash()
{
} /* size: 0 */

// <02E9973B> ../public/tier0/utlhash.h:132
void ~CUtlHash(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this)
{
} /* size: 0 */

// <01007A6E> ../public/tier0/utlhash.h:132
void CUtlHash<CWorldSceneObjectRef::~CUtlHash()(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int this)
{
} /* size: 0 */

// <00C5DEBF> ../public/tier0/utlhash.h:132
void ~CUtlHash(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this)
{
} /* size: 0 */

// <00C5AFEF> ../public/tier0/utlhash.h:132
void ~CUtlHash(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this)
{
} /* size: 0 */

// <00C5A462> ../public/tier0/utlhash.h:132
void ~CUtlHash(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this)
{
} /* size: 0 */

// <00C59CF6> ../public/tier0/utlhash.h:132
void ~CUtlHash(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this)
{
} /* size: 0 */

// <005662BB> ../public/tier0/utlhash.h:132
void CUtlHash<CUtlHashDict<void::~CUtlHash()
{
} /* size: 0 */

// <04E822C7> ../public/tier0/utlhash.h:153
// variables: 2
inline void CUtlHash<CUtlHashDict<const CMorphData::IsValidHandle(UtlHashHandle_t handle)
{
	int ndxBucket; // 155
	int ndxKeyData; // 156
} /* size: 0, variables: 2 */

// <04D70C1E> ../public/tier0/utlhash.h:153
// variables: 2
inline void IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, UtlHashHandle_t handle)
{
	int ndxBucket; // 155
	int ndxKeyData; // 156
} /* size: 0, variables: 2 */

// <0361D753> ../public/tier0/utlhash.h:153
// variables: 2
inline void IsValidHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, UtlHashHandle_t handle)
{
	int ndxBucket; // 155
	int ndxKeyData; // 156
} /* size: 0, variables: 2 */

// <035320CC> ../public/tier0/utlhash.h:153
// variables: 2
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::IsValidHandle(UtlHashHandle_t handle)
{
	int ndxBucket; // 155
	int ndxKeyData; // 156
} /* size: 0, variables: 2 */

// <010035DC> ../public/tier0/utlhash.h:153
// variables: 2
inline void CUtlHash<CWorldSceneObjectRef::IsValidHandle(UtlHashHandle_t handle)
{
	int ndxBucket; // 155
	int ndxKeyData; // 156
} /* size: 0, variables: 2 */

// <00C5CD72> ../public/tier0/utlhash.h:153
// variables: 2
inline void IsValidHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, UtlHashHandle_t handle)
{
	int ndxBucket; // 155
	int ndxKeyData; // 156
} /* size: 0, variables: 2 */

// <00564D4E> ../public/tier0/utlhash.h:153
// variables: 2
inline void CUtlHash<CUtlHashDict<void::IsValidHandle(UtlHashHandle_t handle)
{
	int ndxBucket; // 155
	int ndxKeyData; // 156
} /* size: 0, variables: 2 */

// <010077CC> ../public/tier0/utlhash.h:174
// variables: 3
inline void CUtlHash<CWorldSceneObjectRef::Count()(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigne this)
{
	int count; // 176
	int bucketCount; // 178
	{
		int ndxBucket; // 179
	}
} /* size: 0, variables: 2 */

// <00C5D1A1> ../public/tier0/utlhash.h:174
// variables: 3
inline void Count(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this)
{
	int count; // 176
	int bucketCount; // 178
	{
		int ndxBucket; // 179
	}
} /* size: 0, variables: 2 */

// <04E810BE> ../public/tier0/utlhash.h:191
inline void CUtlHash<CUtlHashDict<const CMorphData::GetBucketIndex(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04D6F7B1> ../public/tier0/utlhash.h:191
inline void GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AA9578> ../public/tier0/utlhash.h:191
inline void GetBucketIndex(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AA93D5> ../public/tier0/utlhash.h:191
inline void GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AA9232> ../public/tier0/utlhash.h:191
inline void GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <0361CDDB> ../public/tier0/utlhash.h:191
inline void GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <0352F019> ../public/tier0/utlhash.h:191
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::GetBucketIndex(UtlHashHandle_t handle)
{
} /* size: 0 */

// <010036D3> ../public/tier0/utlhash.h:191
inline void CUtlHash<CWorldSceneObjectRef::GetBucketIndex(UtlHashHandle_t handle)
{
} /* size: 0 */

// <00C4AF01> ../public/tier0/utlhash.h:191
inline void GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <005651A4> ../public/tier0/utlhash.h:191
inline void CUtlHash<CUtlHashDict<void::GetBucketIndex(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04E81099> ../public/tier0/utlhash.h:200
inline void CUtlHash<CUtlHashDict<const CMorphData::GetKeyDataIndex(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04D6F78C> ../public/tier0/utlhash.h:200
inline void GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AA9553> ../public/tier0/utlhash.h:200
inline void GetKeyDataIndex(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AA93B0> ../public/tier0/utlhash.h:200
inline void GetKeyDataIndex(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AA920D> ../public/tier0/utlhash.h:200
inline void GetKeyDataIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <0361CDB6> ../public/tier0/utlhash.h:200
inline void GetKeyDataIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <0352EFF4> ../public/tier0/utlhash.h:200
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::GetKeyDataIndex(UtlHashHandle_t handle)
{
} /* size: 0 */

// <010036AE> ../public/tier0/utlhash.h:200
inline void CUtlHash<CWorldSceneObjectRef::GetKeyDataIndex(UtlHashHandle_t handle)
{
} /* size: 0 */

// <00C4AEDC> ../public/tier0/utlhash.h:200
inline void GetKeyDataIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this, UtlHashHandle_t handle)
{
} /* size: 0 */

// <0056517F> ../public/tier0/utlhash.h:200
inline void CUtlHash<CUtlHashDict<void::GetKeyDataIndex(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04E81224> ../public/tier0/utlhash.h:209
// variables: 4
inline void CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 25430
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <04D6F7D6> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 53546
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <04AA959D> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 35682
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <04AA93FA> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 35682
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <04AA9257> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 35682
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <0361CC6A> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 37416
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <0352F03E> ../public/tier0/utlhash.h:209
// variables: 4
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 20407
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <02E8BD62> ../public/tier0/utlhash.h:209
// variables: 4
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 63466
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <02E20376> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 63466
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <010036F8> ../public/tier0/utlhash.h:209
// variables: 4
inline void CUtlHash<CWorldSceneObjectRef::BuildHandle(int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 21784
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <022376A8> ../public/tier0/utlhash.h:209
// variables: 4
inline void CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 38607
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <02125C5A> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 1187
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <01DEE40B> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 43205
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <01DEE268> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 43205
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <01DEE0C5> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 43205
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00C4B362> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 21952
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00C4AF26> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 21952
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00C4AC2F> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 21952
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00C49EF7> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 21952
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <005651C9> ../public/tier0/utlhash.h:209
// variables: 4
inline void CUtlHash<CUtlHashDict<void::BuildHandle(int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 37078
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00DA3E65> ../public/tier0/utlhash.h:209
// variables: 4
inline void CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 39932
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00C92417> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 2512
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00A243E0> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 17930
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00A2423D> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 17930
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <00A2409A> ../public/tier0/utlhash.h:209
// variables: 4
inline void BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, int ndxBucket, int ndxKeyData)
{
	const char   __FUNCTION__; // 17930
	UtlHashHandle_t handle; // 214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
} /* size: 0, variables: 2 */

// <06E27AF3> ../../public/tier0/utlhash.h:224
// variables: 2
inline void Purge(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <04E81354> ../public/tier0/utlhash.h:224
// variables: 2
inline void CUtlHash<CUtlHashDict<const CMorphData::Purge()
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <04AB0940> ../public/tier0/utlhash.h:224
// variables: 2
inline void Purge(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <02E99FB7> ../public/tier0/utlhash.h:224
// variables: 2
inline void CUtlHash<NameToLightCookieSequence_t, bool (::Purge()(const NameToLightCookieSequence_t&, const NameToLightCookieSequence_ this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <02E8D7BE> ../public/tier0/utlhash.h:224
// variables: 2
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::Purge()
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <02E8C623> ../public/tier0/utlhash.h:224
// variables: 2
inline void Purge(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <010043AC> ../public/tier0/utlhash.h:224
// variables: 2
inline void CUtlHash<CWorldSceneObjectRef::Purge()(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <00C4BCD4> ../public/tier0/utlhash.h:224
// variables: 2
inline void Purge(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <00C46CF8> ../public/tier0/utlhash.h:224
// variables: 2
inline void Purge(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <00C45D4D> ../public/tier0/utlhash.h:224
// variables: 2
inline void Purge(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <00C45433> ../public/tier0/utlhash.h:224
// variables: 2
inline void Purge(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this)
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <005652EF> ../public/tier0/utlhash.h:224
// variables: 2
inline void CUtlHash<CUtlHashDict<void::Purge()
{
	int bucketCount; // 226
	{
		int ndxBucket; // 227
	}
} /* size: 0, variables: 1 */

// <04E812AC> ../public/tier0/utlhash.h:236
// variables: 6
inline void CUtlHash<CUtlHashDict<const CMorphData::DoFind(const Entry_t& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, fals& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <04D6F85F> ../public/tier0/utlhash.h:236
// variables: 6
inline void DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, const HashValueType& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <04AA9626> ../public/tier0/utlhash.h:236
// variables: 6
inline void DoFind(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, const Entry_t& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <04AA9483> ../public/tier0/utlhash.h:236
// variables: 6
inline void DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, const Entry_t& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <04AA92E0> ../public/tier0/utlhash.h:236
// variables: 6
inline void DoFind(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, const Entry_t& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> >& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <0361CBE3> ../public/tier0/utlhash.h:236
// variables: 6
inline void DoFind(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, const Entry_t& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t,& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <0352F0C7> ../public/tier0/utlhash.h:236
// variables: 6
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::DoFind(const Entry_t& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> >& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <01003781> ../public/tier0/utlhash.h:236
// variables: 6
inline void CUtlHash<CWorldSceneObjectRef::DoFind(CWorldSceneObjectRef* const& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> >& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <00C4AFAE> ../public/tier0/utlhash.h:236
// variables: 6
inline void DoFind(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this, const Entry_t& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, tru& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <00565267> ../public/tier0/utlhash.h:236
// variables: 6
inline void CUtlHash<CUtlHashDict<void::DoFind(const Entry_t& src, unsigned int* pBucket, int* pIndex)
{
	unsigned int key; // 239
	unsigned int ndxBucket; // 242
	int ndxKeyData; // 253
	const CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> >& bucket; // 254
	int keyDataCount; // 255
	{
		int bucketCount; // 249
	}
} /* size: 0, variables: 5 */

// <04E8230B> ../public/tier0/utlhash.h:273
// variables: 2
inline void CUtlHash<CUtlHashDict<const CMorphData::Find(const Entry_t& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <04D70C5B> ../public/tier0/utlhash.h:273
// variables: 2
inline void Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, const HashValueType& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <04AAED69> ../public/tier0/utlhash.h:273
// variables: 2
inline void Find(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, const Entry_t& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <04AAECE2> ../public/tier0/utlhash.h:273
// variables: 2
inline void Find(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, const Entry_t& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <04AAEB83> ../public/tier0/utlhash.h:273
// variables: 2
inline void Find(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, const Entry_t& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <0361D790> ../public/tier0/utlhash.h:273
// variables: 2
inline void Find(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, const Entry_t& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <0353219D> ../public/tier0/utlhash.h:273
// variables: 2
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::Find(const Entry_t& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <0100717B> ../public/tier0/utlhash.h:273
// variables: 2
inline void CUtlHash<CWorldSceneObjectRef::Find(CWorldSceneObjectRef* const& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <00C5D378> ../public/tier0/utlhash.h:273
// variables: 2
inline void Find(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this, const Entry_t& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <005661FC> ../public/tier0/utlhash.h:273
// variables: 2
inline void CUtlHash<CUtlHashDict<void::Find(const Entry_t& src)
{
	unsigned int ndxBucket; // 275
	int ndxKeyData; // 276
} /* size: 0, variables: 2 */

// <04D70B9E> ../public/tier0/utlhash.h:289
// variables: 2
inline void Insert(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this, const HashValueType& src)
{
	unsigned int ndxBucket; // 291
	int ndxKeyData; // 292
} /* size: 0, variables: 2 */

// <010070DB> ../public/tier0/utlhash.h:289
// variables: 2
inline void CUtlHash<CWorldSceneObjectRef::Insert(CWorldSceneObjectRef* const& src)
{
	unsigned int ndxBucket; // 291
	int ndxKeyData; // 292
} /* size: 0, variables: 2 */

// <04E823F8> ../public/tier0/utlhash.h:307
// variables: 2
inline void CUtlHash<CUtlHashDict<const CMorphData::Insert(const Entry_t& src, bool* pDidInsert)
{
	unsigned int ndxBucket; // 309
	int ndxKeyData; // 310
} /* size: 0, variables: 2 */

// <0361CE00> ../public/tier0/utlhash.h:307
// variables: 2
inline void Insert(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this, const Entry_t& src, bool* pDidInsert)
{
	unsigned int ndxBucket; // 309
	int ndxKeyData; // 310
} /* size: 0, variables: 2 */

// <03532109> ../public/tier0/utlhash.h:307
// variables: 2
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::Insert(const Entry_t& src, bool* pDidInsert)
{
	unsigned int ndxBucket; // 309
	int ndxKeyData; // 310
} /* size: 0, variables: 2 */

// <00C5D706> ../public/tier0/utlhash.h:307
// variables: 2
inline void Insert(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this, const Entry_t& src, bool* pDidInsert)
{
	unsigned int ndxBucket; // 309
	int ndxKeyData; // 310
} /* size: 0, variables: 2 */

// <00C5D2E4> ../public/tier0/utlhash.h:307
// variables: 2
inline void Insert(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this, const Entry_t& src, bool* pDidInsert)
{
	unsigned int ndxBucket; // 309
	int ndxKeyData; // 310
} /* size: 0, variables: 2 */

// <00C5D0E9> ../public/tier0/utlhash.h:307
// variables: 2
inline void Insert(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this, const Entry_t& src, bool* pDidInsert)
{
	unsigned int ndxBucket; // 309
	int ndxKeyData; // 310
} /* size: 0, variables: 2 */

// <00C5C519> ../public/tier0/utlhash.h:307
// variables: 2
inline void Insert(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this, const Entry_t& src, bool* pDidInsert)
{
	unsigned int ndxBucket; // 309
	int ndxKeyData; // 310
} /* size: 0, variables: 2 */

// <00566168> ../public/tier0/utlhash.h:307
// variables: 2
inline void CUtlHash<CUtlHashDict<void::Insert(const Entry_t& src, bool* pDidInsert)
{
	unsigned int ndxBucket; // 309
	int ndxKeyData; // 310
} /* size: 0, variables: 2 */

// <0352EEB9> ../public/tier0/utlhash.h:347
// variables: 4
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::Remove(UtlHashHandle_t handle)
{
	const char   __FUNCTION__; // 20282
	int ndxBucket; // 352
	int ndxKeyData; // 353
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 3 */

// <0100703F> ../public/tier0/utlhash.h:347
// variables: 4
inline void CUtlHash<CWorldSceneObjectRef::Remove(UtlHashHandle_t handle)
{
	const char   __FUNCTION__; // 21649
	int ndxBucket; // 352
	int ndxKeyData; // 353
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 3 */

// <005650A9> ../public/tier0/utlhash.h:347
// variables: 4
inline void CUtlHash<CUtlHashDict<void::Remove(UtlHashHandle_t handle)
{
	const char   __FUNCTION__; // 36759
	int ndxBucket; // 352
	int ndxKeyData; // 353
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
} /* size: 0, variables: 3 */

// <04D70BDE> ../public/tier0/utlhash.h:378
// variables: 2
inline void Element(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this, UtlHashHandle_t handle)
{
	int ndxBucket; // 380
	int ndxKeyData; // 381
} /* size: 0, variables: 2 */

// <04E82287> ../public/tier0/utlhash.h:401
// variables: 2
inline void CUtlHash<CUtlHashDict<const CMorphData::operator[](UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <04D70AFA> ../public/tier0/utlhash.h:401
// variables: 2
inline void operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this, UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <04AAED22> ../public/tier0/utlhash.h:401
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this, UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <04AAEC9B> ../public/tier0/utlhash.h:401
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this, UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <04AAEB3C> ../public/tier0/utlhash.h:401
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this, UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <0361D85B> ../public/tier0/utlhash.h:401
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this, UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <03532156> ../public/tier0/utlhash.h:401
// variables: 2
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::operator[](UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <01007134> ../public/tier0/utlhash.h:401
// variables: 2
inline void CUtlHash<CWorldSceneObjectRef::operator[](UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <00C5D331> ../public/tier0/utlhash.h:401
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this, UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <005661B5> ../public/tier0/utlhash.h:401
// variables: 2
inline void CUtlHash<CUtlHashDict<void::operator[](UtlHashHandle_t handle)
{
	int ndxBucket; // 403
	int ndxKeyData; // 404
} /* size: 0, variables: 2 */

// <04AAEAD8> ../public/tier0/utlhash.h:413
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, UtlHashHandle_t handle)
{
	int ndxBucket; // 415
	int ndxKeyData; // 416
} /* size: 0, variables: 2 */

// <0361D81B> ../public/tier0/utlhash.h:413
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, UtlHashHandle_t handle)
{
	int ndxBucket; // 415
	int ndxKeyData; // 416
} /* size: 0, variables: 2 */

// <00C5CF93> ../public/tier0/utlhash.h:413
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, UtlHashHandle_t handle)
{
	int ndxBucket; // 415
	int ndxKeyData; // 416
} /* size: 0, variables: 2 */

// <00C5C70C> ../public/tier0/utlhash.h:413
// variables: 2
inline void operator[](const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this, UtlHashHandle_t handle)
{
	int ndxBucket; // 415
	int ndxKeyData; // 416
} /* size: 0, variables: 2 */

// <04D70B85> ../public/tier0/utlhash.h:424
inline void GetFirstHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this)
{
} /* size: 0 */

// <0361D8A2> ../public/tier0/utlhash.h:424
inline void GetFirstHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this)
{
} /* size: 0 */

// <02E98F75> ../public/tier0/utlhash.h:424
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::GetFirstHandle()
{
} /* size: 0 */

// <00C5D05E> ../public/tier0/utlhash.h:424
inline void GetFirstHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this)
{
} /* size: 0 */

// <00C46CDF> ../public/tier0/utlhash.h:424
inline void GetFirstHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this)
{
} /* size: 0 */

// <00C45D34> ../public/tier0/utlhash.h:424
inline void GetFirstHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this)
{
} /* size: 0 */

// <00563780> ../public/tier0/utlhash.h:424
inline void CUtlHash<CUtlHashDict<void::GetFirstHandle()
{
} /* size: 0 */

// <04D70B3A> ../public/tier0/utlhash.h:430
// variables: 3
inline void GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this, UtlHashHandle_t handle)
{
	int bi; // 434
	int ki; // 435
	int nBuckets; // 437
} /* size: 0, variables: 3 */

// <0361D7D0> ../public/tier0/utlhash.h:430
// variables: 3
inline void GetNextHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this, UtlHashHandle_t handle)
{
	int bi; // 434
	int ki; // 435
	int nBuckets; // 437
} /* size: 0, variables: 3 */

// <02E98F23> ../public/tier0/utlhash.h:430
// variables: 3
inline void CUtlHash<CUtlHashDict<ISceneObjectDesc::GetNextHandle(UtlHashHandle_t handle)
{
	int bi; // 434
	int ki; // 435
	int nBuckets; // 437
} /* size: 0, variables: 3 */

// <00C5D013> ../public/tier0/utlhash.h:430
// variables: 3
inline void GetNextHandle(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>: this, UtlHashHandle_t handle)
{
	int bi; // 434
	int ki; // 435
	int nBuckets; // 437
} /* size: 0, variables: 3 */

// <00C46C94> ../public/tier0/utlhash.h:430
// variables: 3
inline void GetNextHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this, UtlHashHandle_t handle)
{
	int bi; // 434
	int ki; // 435
	int nBuckets; // 437
} /* size: 0, variables: 3 */

// <00C45CE9> ../public/tier0/utlhash.h:430
// variables: 3
inline void GetNextHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this, UtlHashHandle_t handle)
{
	int bi; // 434
	int ki; // 435
	int nBuckets; // 437
} /* size: 0, variables: 3 */

// <00563735> ../public/tier0/utlhash.h:430
// variables: 3
inline void CUtlHash<CUtlHashDict<void::GetNextHandle(UtlHashHandle_t handle)
{
	int bi; // 434
	int ki; // 435
	int nBuckets; // 437
} /* size: 0, variables: 3 */

// <03890BAD> ../public/tier0/utlhash.h:520
// member function: 1
// class size: 1
class CUtlHashFastNoHash {
	/* ../public/tier0/utlhash.h:523 */
	int Hash(int, int);
};

// <0389B73F> ../public/tier0/utlhash.h:523
inline void Hash(int key, int bucketMask)
{
} /* size: 0 */

// <0389327F> ../public/tier0/utlhash.h:540
// member functions: 41
// member variables: 3
// class size: 120
class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> {
	/* ../public/tier0/utlhash.h:597 */
	struct HashFastData_t_<CViewIdInternal> {
		uintp m_uiKey; /* 0 8 */
		CViewIdInternal m_Data; /* 8 8 */
		void HashFastData_t_(HashFastData_t_<CViewIdInternal>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhash.h:614 */
	void CUtlHashFast(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* );
	/* ../public/tier0/utlhash.h:622 */
	void ~CUtlHashFast(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* );
	/* ../public/tier0/utlhash.h:630 */
	void Purge(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* );
	/* ../public/tier0/utlhash.h:552 */
	UtlHashFastHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:848 */
	bool IsValidHandle(const CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:639 */
	bool Init(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , int);
	/* ../public/tier0/utlhash.h:678 */
	UtlHashFastHandle_t Insert(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , uintp, const CViewIdInternal& );
	/* ../public/tier0/utlhash.h:692 */
	UtlHashFastHandle_t FastInsert(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , uintp, const CViewIdInternal& );
	/* ../public/tier0/utlhash.h:715 */
	void Remove(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:736 */
	void RemoveAll(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* );
	/* ../public/tier0/utlhash.h:744 */
	UtlHashFastHandle_t Find(const CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , uintp);
	/* ../public/tier0/utlhash.h:761 */
	CViewIdInternal& Element(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:769 */
	const CViewIdInternal& Element(const CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:777 */
	CViewIdInternal& operator[](CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:785 */
	const CViewIdInternal& operator[](const CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , UtlHashFastHandle_t);
	struct UtlHashFastIterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhash.h:795 */
	UtlHashFastIterator_t First(const CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* );
	/* ../public/tier0/utlhash.h:817 */
	UtlHashFastIterator_t Next(const CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , const UtlHashFastIterator_t& );
	/* ../public/tier0/utlhash.h:842 */
	bool IsValidIterator(const CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , const UtlHashFastIterator_t& );
	/* ../public/tier0/utlhash.h:590 */
	CViewIdInternal& operator[](CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , const UtlHashFastIterator_t& );
	/* ../public/tier0/utlhash.h:591 */
	const CViewIdInternal& operator[](const CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>* , const UtlHashFastIterator_t& );
	unsigned int m_uiBucketMask; /* 0 4 */
	CUtlVector<long long int, CUtlMemory<long long int, int> > m_aBuckets; /* 8 32 */
	CUtlFixedLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal> > m_aDataPool; /* 40 80 */
	/* ../public/tier0/utlhash.h:603 */
	typedef struct HashFastData_t_<CViewIdInternal> HashFastData_t;
	void CUtlHashFast(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashEC4Ev */
	void ~CUtlHashFast(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashED4Ev */
	void Purge(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE5PurgeEv */
	UtlHashFastHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE13InvalidHandleEv */
	bool IsValidHandle(const class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>  *, UtlHashFastHandle_t); /* linkage=_ZNK12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE13IsValidHandleEx */
	bool Init(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *, int); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE4InitEi */
	UtlHashFastHandle_t Insert(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *, uintp, const class CViewIdInternal  &); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE6InsertEyRKS0_ */
	UtlHashFastHandle_t FastInsert(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *, uintp, const class CViewIdInternal  &); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE10FastInsertEyRKS0_ */
	void Remove(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *, UtlHashFastHandle_t); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE6RemoveEx */
	void RemoveAll(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE9RemoveAllEv */
	UtlHashFastHandle_t Find(const class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>  *, uintp); /* linkage=_ZNK12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE4FindEy */
	class CViewIdInternal & Element(class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *, UtlHashFastHandle_t); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE7ElementEx */
	const class CViewIdInternal  & Element(const class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>  *, UtlHashFastHandle_t); /* linkage=_ZNK12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE7ElementEx */
	class CViewIdInternal & operator[](class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *, UtlHashFastHandle_t); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashEixEx */
	const class CViewIdInternal  & operator[](const class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>  *, UtlHashFastHandle_t); /* linkage=_ZNK12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashEixEx */
	class UtlHashFastIterator_t First(const class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>  *); /* linkage=_ZNK12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE5FirstEv */
	class UtlHashFastIterator_t Next(const class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>  *, const class UtlHashFastIterator_t  &); /* linkage=_ZNK12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE4NextERKNS2_21UtlHashFastIterator_tE */
	bool IsValidIterator(const class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>  *, const class UtlHashFastIterator_t  &); /* linkage=_ZNK12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashE15IsValidIteratorERKNS2_21UtlHashFastIterator_tE */
	class CViewIdInternal & operator[](class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> *, const class UtlHashFastIterator_t  &); /* linkage=_ZN12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashEixERKNS2_21UtlHashFastIterator_tE */
	const class CViewIdInternal  & operator[](const class CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>  *, const class UtlHashFastIterator_t  &); /* linkage=_ZNK12CUtlHashFastI15CViewIdInternal18CUtlHashFastNoHashEixERKNS2_21UtlHashFastIterator_tE */
};

// <03896B34> ../public/tier0/utlhash.h:597
void HashFastData_t_<CViewIdInternal>::HashFastData_t_()
{
} /* size: 0 */

// <03896B17> ../public/tier0/utlhash.h:597
inline void HashFastData_t_<CViewIdInternal>::HashFastData_t_()
{
} /* size: 0 */

// <038992CF> ../public/tier0/utlhash.h:614
void CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::CUtlHashFast()
{
} /* size: 0 */

// <03898D87> ../public/tier0/utlhash.h:622
// variables: 4
// function calls: 23
void CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::~CUtlHashFast()
{
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long int, int>::Purge(); // 903
	CUtlMemory<long long int, int>::Purge(); // 1799
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 632
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	Purge(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this); // 643
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this); // 648
	ResetDbgInfo(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this); // 650
	Purge(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this); // 633
	CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::Purge(); // 624
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	Purge(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this); // 167
	~CUtlFixedMemory(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this); // 462
	~CUtlLinkedList(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this); // 400
	CUtlFixedLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal> >::~CUtlFixedLinkedList(); // 625
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long int, int>::Purge(); // 903
	CUtlMemory<long long int, int>::Purge(); // 1799
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 560
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long int, CUtlMemory<long long int, int> >::~CUtlVector(); // 625
} /* size: 0, inline expansions: 23 (0 bytes) */

// <03898D6E> ../public/tier0/utlhash.h:622
void CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::~CUtlHashFast()
{
} /* size: 0 */

// <03898A29> ../public/tier0/utlhash.h:630
inline void CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::Purge()
{
} /* size: 0 */

// <03898D2C> ../public/tier0/utlhash.h:639
// variables: 2
void CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::Init(int nBucketCount)
{
	int nGrowSize; // 656
	{
		int iBucket; // 647
	}
} /* size: 0, variables: 1 */

// <038993AE> ../public/tier0/utlhash.h:678
// variable: 1
inline void CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::Insert(uintp uiKey, const CViewIdInternal& data)
{
	UtlHashFastHandle_t hHash; // 681
} /* size: 0, variables: 1 */

// <03898BC3> ../public/tier0/utlhash.h:692
// variables: 3
inline void CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::FastInsert(uintp uiKey, const CViewIdInternal& data)
{
	intp iHashData; // 695
	HashFastData_t* pHashData; // 696
	int iBucket; // 705
} /* size: 0, variables: 3 */

// <038993F5> ../public/tier0/utlhash.h:744
// variables: 2
inline void CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::Find(uintp uiKey)
{
	int iBucket; // 747
	{
		intp iElement; // 749
	}
} /* size: 0, variables: 1 */

// <05B89BD5> ../public/tier0/utlhash.h:855
// member function: 1
// class size: 1
class CDefaultHash32 {
	/* ../public/tier0/utlhash.h:858 */
	uint32 HashKey32(uint32);
};

// <0615B4BD> ../public/tier0/utlhash.h:858
inline void HashKey32(uint32 nKey)
{
} /* size: 0 */

// <00D549BA> ../public/tier0/utlhash.h:861
// member function: 1
// class size: 1
class CPassthroughHash32 {
	/* ../public/tier0/utlhash.h:864 */
	uint32 HashKey32(uint32);
};

// <00D64A4A> ../public/tier0/utlhash.h:873
// member functions: 20
// member variables: 4
// class size: 24
class CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32> {
	/* ../public/tier0/utlhash.h:945 */
	void CUtlScalarHash(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* );
	/* ../public/tier0/utlhash.h:953 */
	void ~CUtlScalarHash(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* );
	/* ../public/tier0/utlhash.h:885 */
	const UtlHashFastHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:958 */
	bool Init(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , int);
	/* ../public/tier0/utlhash.h:891 */
	int Count(const CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* );
	/* ../public/tier0/utlhash.h:995 */
	UtlHashFastHandle_t Insert(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , unsigned int, const CSurfacePropertiesPair& );
	/* ../public/tier0/utlhash.h:1052 */
	void FindAndRemove(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , unsigned int, const CSurfacePropertiesPair& );
	/* ../public/tier0/utlhash.h:1016 */
	void Remove(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:1067 */
	void RemoveAll(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* );
	/* ../public/tier0/utlhash.h:969 */
	void Grow(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* );
	/* ../public/tier0/utlhash.h:1078 */
	UtlHashFastHandle_t Find(const CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , unsigned int, const CSurfacePropertiesPair& );
	/* ../public/tier0/utlhash.h:1093 */
	UtlHashFastHandle_t FindByUniqueKey(const CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , unsigned int);
	/* ../public/tier0/utlhash.h:906 */
	CSurfacePropertiesPair& Element(CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:907 */
	const CSurfacePropertiesPair& Element(const CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:908 */
	CSurfacePropertiesPair& operator[](CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:909 */
	const CSurfacePropertiesPair& operator[](const CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:911 */
	unsigned int Key(const CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:913 */
	UtlHashFastHandle_t FirstInorder(const CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* );
	/* ../public/tier0/utlhash.h:917 */
	UtlHashFastHandle_t NextInorder(const CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:929 */
	const uint UnusedElementKey(void);
	unsigned int m_uiBucketMask; /* 0 4 */
	/* ../public/tier0/utlhash.h:933 */
	struct HashScalarData_t {
		unsigned int m_uiKey; /* 0 4 */
		CSurfacePropertiesPair m_Data; /* 8 8 */
	};
	HashScalarData_t * m_pData; /* 8 8 */
	int m_maxData; /* 16 4 */
	int m_dataCount; /* 20 4 */
};

// <05B9CB9C> ../public/tier0/utlhash.h:873
// member functions: 40
// member variables: 4
// class size: 24
class CUtlScalarHash<EdgeHash_t, CDefaultHash32> {
	/* ../public/tier0/utlhash.h:945 */
	void CUtlScalarHash(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:953 */
	void ~CUtlScalarHash(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:885 */
	const UtlHashFastHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:958 */
	bool Init(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , int);
	/* ../public/tier0/utlhash.h:891 */
	int Count(const CUtlScalarHash<EdgeHash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:995 */
	UtlHashFastHandle_t Insert(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , unsigned int, const EdgeHash_t& );
	/* ../public/tier0/utlhash.h:1052 */
	void FindAndRemove(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , unsigned int, const EdgeHash_t& );
	/* ../public/tier0/utlhash.h:1016 */
	void Remove(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:1067 */
	void RemoveAll(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:969 */
	void Grow(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:1078 */
	UtlHashFastHandle_t Find(const CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , unsigned int, const EdgeHash_t& );
	/* ../public/tier0/utlhash.h:1093 */
	UtlHashFastHandle_t FindByUniqueKey(const CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , unsigned int);
	/* ../public/tier0/utlhash.h:906 */
	EdgeHash_t& Element(CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:907 */
	const EdgeHash_t& Element(const CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:908 */
	EdgeHash_t& operator[](CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:909 */
	const EdgeHash_t& operator[](const CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:911 */
	unsigned int Key(const CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:913 */
	UtlHashFastHandle_t FirstInorder(const CUtlScalarHash<EdgeHash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:917 */
	UtlHashFastHandle_t NextInorder(const CUtlScalarHash<EdgeHash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:929 */
	const uint UnusedElementKey(void);
	unsigned int m_uiBucketMask; /* 0 4 */
	/* ../public/tier0/utlhash.h:933 */
	struct HashScalarData_t {
		unsigned int m_uiKey; /* 0 4 */
		EdgeHash_t m_Data; /* 4 16 */
	};
	HashScalarData_t * m_pData; /* 8 8 */
	int m_maxData; /* 16 4 */
	int m_dataCount; /* 20 4 */
	void CUtlScalarHash(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32EC4Ev */
	void ~CUtlScalarHash(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32ED4Ev */
	const UtlHashFastHandle_t  InvalidHandle(void); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E13InvalidHandleEv */
	bool Init(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *, int); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E4InitEi */
	int Count(const class CUtlScalarHash<EdgeHash_t, CDefaultHash32>  *); /* linkage=_ZNK14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E5CountEv */
	UtlHashFastHandle_t Insert(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *, unsigned int, const class EdgeHash_t  &); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E6InsertEjRKS0_ */
	void FindAndRemove(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *, unsigned int, const class EdgeHash_t  &); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E13FindAndRemoveEjRKS0_ */
	void Remove(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *, UtlHashFastHandle_t); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E6RemoveEx */
	void RemoveAll(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E9RemoveAllEv */
	void Grow(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E4GrowEv */
	UtlHashFastHandle_t Find(const class CUtlScalarHash<EdgeHash_t, CDefaultHash32>  *, unsigned int, const class EdgeHash_t  &); /* linkage=_ZNK14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E4FindEjRKS0_ */
	UtlHashFastHandle_t FindByUniqueKey(const class CUtlScalarHash<EdgeHash_t, CDefaultHash32>  *, unsigned int); /* linkage=_ZNK14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E15FindByUniqueKeyEj */
	class EdgeHash_t & Element(class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *, UtlHashFastHandle_t); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E7ElementEx */
	const class EdgeHash_t  & Element(const class CUtlScalarHash<EdgeHash_t, CDefaultHash32>  *, UtlHashFastHandle_t); /* linkage=_ZNK14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E7ElementEx */
	class EdgeHash_t & operator[](class CUtlScalarHash<EdgeHash_t, CDefaultHash32> *, UtlHashFastHandle_t); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32EixEx */
	const class EdgeHash_t  & operator[](const class CUtlScalarHash<EdgeHash_t, CDefaultHash32>  *, UtlHashFastHandle_t); /* linkage=_ZNK14CUtlScalarHashI10EdgeHash_t14CDefaultHash32EixEx */
	unsigned int Key(const class CUtlScalarHash<EdgeHash_t, CDefaultHash32>  *, UtlHashFastHandle_t); /* linkage=_ZNK14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E3KeyEx */
	UtlHashFastHandle_t FirstInorder(const class CUtlScalarHash<EdgeHash_t, CDefaultHash32>  *); /* linkage=_ZNK14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E12FirstInorderEv */
	UtlHashFastHandle_t NextInorder(const class CUtlScalarHash<EdgeHash_t, CDefaultHash32>  *, UtlHashFastHandle_t); /* linkage=_ZNK14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E11NextInorderEx */
	const uint  UnusedElementKey(void); /* linkage=_ZN14CUtlScalarHashI10EdgeHash_t14CDefaultHash32E16UnusedElementKeyEv */
};

// <06145993> ../public/tier0/utlhash.h:873
// member functions: 20
// member variables: 4
// class size: 24
class CUtlScalarHash<edge_hash_t, CDefaultHash32> {
	/* ../public/tier0/utlhash.h:945 */
	void CUtlScalarHash(CUtlScalarHash<edge_hash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:953 */
	void ~CUtlScalarHash(CUtlScalarHash<edge_hash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:885 */
	const UtlHashFastHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhash.h:958 */
	bool Init(CUtlScalarHash<edge_hash_t, CDefaultHash32>* , int);
	/* ../public/tier0/utlhash.h:891 */
	int Count(const CUtlScalarHash<edge_hash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:995 */
	UtlHashFastHandle_t Insert(CUtlScalarHash<edge_hash_t, CDefaultHash32>* , unsigned int, const edge_hash_t& );
	/* ../public/tier0/utlhash.h:1052 */
	void FindAndRemove(CUtlScalarHash<edge_hash_t, CDefaultHash32>* , unsigned int, const edge_hash_t& );
	/* ../public/tier0/utlhash.h:1016 */
	void Remove(CUtlScalarHash<edge_hash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:1067 */
	void RemoveAll(CUtlScalarHash<edge_hash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:969 */
	void Grow(CUtlScalarHash<edge_hash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:1078 */
	UtlHashFastHandle_t Find(const CUtlScalarHash<edge_hash_t, CDefaultHash32>* , unsigned int, const edge_hash_t& );
	/* ../public/tier0/utlhash.h:1093 */
	UtlHashFastHandle_t FindByUniqueKey(const CUtlScalarHash<edge_hash_t, CDefaultHash32>* , unsigned int);
	/* ../public/tier0/utlhash.h:906 */
	edge_hash_t& Element(CUtlScalarHash<edge_hash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:907 */
	const edge_hash_t& Element(const CUtlScalarHash<edge_hash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:908 */
	edge_hash_t& operator[](CUtlScalarHash<edge_hash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:909 */
	const edge_hash_t& operator[](const CUtlScalarHash<edge_hash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:911 */
	unsigned int Key(const CUtlScalarHash<edge_hash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:913 */
	UtlHashFastHandle_t FirstInorder(const CUtlScalarHash<edge_hash_t, CDefaultHash32>* );
	/* ../public/tier0/utlhash.h:917 */
	UtlHashFastHandle_t NextInorder(const CUtlScalarHash<edge_hash_t, CDefaultHash32>* , UtlHashFastHandle_t);
	/* ../public/tier0/utlhash.h:929 */
	const uint UnusedElementKey(void);
	unsigned int m_uiBucketMask; /* 0 4 */
	/* ../public/tier0/utlhash.h:933 */
	struct HashScalarData_t {
		unsigned int m_uiKey; /* 0 4 */
		edge_hash_t m_Data; /* 8 16 */
	};
	HashScalarData_t * m_pData; /* 8 8 */
	int m_maxData; /* 16 4 */
	int m_dataCount; /* 20 4 */
};

// <0614F49C> ../public/tier0/utlhash.h:885
inline void InvalidHandle(void)
{
} /* size: 0 */

// <0614F44B> ../public/tier0/utlhash.h:906
// variables: 2
inline void CUtlScalarHash<edge_hash_t, CDefaultHash32>::Element(UtlHashFastHandle_t hHash)
{
	const char   __FUNCTION__; // 52403
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 906
	}
} /* size: 0, variables: 1 */

// <05BB96D4> ../public/tier0/utlhash.h:906
// variables: 2
inline void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(UtlHashFastHandle_t hHash)
{
	const char   __FUNCTION__; // 39293
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 906
	}
} /* size: 0, variables: 1 */

// <02CFAC1C> ../public/tier0/utlhash.h:906
// variables: 2
inline void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(UtlHashFastHandle_t hHash)
{
	const char   __FUNCTION__; // 32186
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 906
	}
} /* size: 0, variables: 1 */

// <014E4854> ../public/tier0/utlhash.h:906
// variables: 2
inline void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(UtlHashFastHandle_t hHash)
{
	const char   __FUNCTION__; // 22370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 906
	}
} /* size: 0, variables: 1 */

// <00D6FB06> ../public/tier0/utlhash.h:907
// variables: 2
inline void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::Element(UtlHashFastHandle_t hHash)
{
	const char   __FUNCTION__; // 4465
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 907
	}
} /* size: 0, variables: 1 */

// <00D6F9B6> ../public/tier0/utlhash.h:913
void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::FirstInorder()
{
} /* size: 0 */

// <00D6F968> ../public/tier0/utlhash.h:917
// variables: 3
inline void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::NextInorder(UtlHashFastHandle_t nStart)
{
	int nElementCount; // 919
	uint nUnusedListElement; // 920
	{
		intp i; // 921
	}
} /* size: 0, variables: 2 */

// <0614D45B> ../public/tier0/utlhash.h:929
inline void UnusedElementKey(void)
{
} /* size: 0 */

// <0614DA56> ../public/tier0/utlhash.h:945
void CUtlScalarHash<edge_hash_t, CDefaultHash32>::CUtlScalarHash()
{
} /* size: 0 */

// <05BB98C4> ../public/tier0/utlhash.h:945
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::CUtlScalarHash()
{
} /* size: 0 */

// <00D6FCA6> ../public/tier0/utlhash.h:945
void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::CUtlScalarHash()
{
} /* size: 0 */

// <0614DA26> ../public/tier0/utlhash.h:953
void CUtlScalarHash<edge_hash_t, CDefaultHash32>::~CUtlScalarHash()
{
} /* size: 0 */

// <05BB9894> ../public/tier0/utlhash.h:953
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::~CUtlScalarHash()
{
} /* size: 0 */

// <00D6FC76> ../public/tier0/utlhash.h:953
void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::~CUtlScalarHash()
{
} /* size: 0 */

// <0614E9A4> ../public/tier0/utlhash.h:958
// variables: 3
void CUtlScalarHash<edge_hash_t, CDefaultHash32>::Init(int nBucketCount)
{
	const char   __FUNCTION__; // 52327
	int elementCount; // 962
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 960
	}
} /* size: 0, variables: 2 */

// <05BB9828> ../public/tier0/utlhash.h:958
// variables: 3
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Init(int nBucketCount)
{
	const char   __FUNCTION__; // 39217
	int elementCount; // 962
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 960
	}
} /* size: 0, variables: 2 */

// <02CFAD70> ../public/tier0/utlhash.h:958
// variables: 3
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Init(int nBucketCount)
{
	const char   __FUNCTION__; // 32110
	int elementCount; // 962
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 960
	}
} /* size: 0, variables: 2 */

// <014E49A8> ../public/tier0/utlhash.h:958
// variables: 3
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Init(int nBucketCount)
{
	const char   __FUNCTION__; // 22294
	int elementCount; // 962
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 960
	}
} /* size: 0, variables: 2 */

// <0614D337> ../public/tier0/utlhash.h:969
// variables: 5
void CUtlScalarHash<edge_hash_t, CDefaultHash32>::Grow()
{
	int oldElementCount; // 972
	HashScalarData_t* pOldData; // 973
	int elementCount; // 977
	{
		int i; // 981
	}
	{
		int i; // 985
	}
} /* size: 0, variables: 3 */

// <05BB545E> ../public/tier0/utlhash.h:969
// variables: 5
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Grow()
{
	int oldElementCount; // 972
	HashScalarData_t* pOldData; // 973
	int elementCount; // 977
	{
		int i; // 981
	}
	{
		int i; // 985
	}
} /* size: 0, variables: 3 */

// <00D6F13A> ../public/tier0/utlhash.h:969
// variables: 5
void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::Grow()
{
	int oldElementCount; // 972
	HashScalarData_t* pOldData; // 973
	int elementCount; // 977
	{
		int i; // 981
	}
	{
		int i; // 985
	}
} /* size: 0, variables: 3 */

// <0614EE00> ../public/tier0/utlhash.h:995
// variables: 6
// function calls: 3
void CUtlScalarHash<edge_hash_t, CDefaultHash32>::Insert(unsigned int uiKey, const edge_hash_t& data)
{
	const char   __FUNCTION__; // 52376
	int index; // 1003
	uint endOfList; // 1004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
	}
	HashIntConventional(const int n); // 858
	HashKey32(uint32 nKey); // 1003
	{
		int i; // 981
	}
	{
		int i; // 985
	}
	CUtlScalarHash<edge_hash_t, CDefaultHash32>::Grow(); // 999
} /* size: 449, variables: 3, inline expansions: 3 (284 bytes) */

// <05BE4A86> ../public/tier0/utlhash.h:995
// variables: 4
// function calls: 3
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Insert(unsigned int uiKey, const EdgeHash_t& data)
{
	int index; // 1003
	uint endOfList; // 1004
	{
	}
	HashIntConventional(const int n); // 858
	HashKey32(uint32 nKey); // 1003
	{
		int i; // 981
	}
	{
		int i; // 985
	}
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Grow(); // 999
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <05BB9723> ../public/tier0/utlhash.h:995
// variables: 4
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Insert(unsigned int uiKey, const EdgeHash_t& data)
{
	const char   __FUNCTION__; // 39266
	int index; // 1003
	uint endOfList; // 1004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
	}
} /* size: 0, variables: 3 */

// <00D760A7> ../public/tier0/utlhash.h:995
// variables: 4
// function call: 1
void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::Insert(unsigned int uiKey, const CSurfacePropertiesPair& data)
{
	int index; // 1003
	uint endOfList; // 1004
	{
	}
	{
		int i; // 981
	}
	{
		int i; // 985
	}
	CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::Grow(); // 999
} /* size: 0, variables: 2, inline expansions: 1 (202 bytes) */

// <00D6FA29> ../public/tier0/utlhash.h:995
// variables: 4
void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::Insert(unsigned int uiKey, const CSurfacePropertiesPair& data)
{
	const char   __FUNCTION__; // 4438
	int index; // 1003
	uint endOfList; // 1004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
	}
} /* size: 0, variables: 3 */

// <02CFAC6B> ../public/tier0/utlhash.h:995
// variables: 4
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Insert(unsigned int uiKey, const EdgeHash_t& data)
{
	const char   __FUNCTION__; // 32159
	int index; // 1003
	uint endOfList; // 1004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
	}
} /* size: 0, variables: 3 */

// <014E48A3> ../public/tier0/utlhash.h:995
// variables: 4
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Insert(unsigned int uiKey, const EdgeHash_t& data)
{
	const char   __FUNCTION__; // 22343
	int index; // 1003
	uint endOfList; // 1004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
	}
} /* size: 0, variables: 3 */

// <0614F020> ../public/tier0/utlhash.h:1016
// variables: 6
// function calls: 2
void CUtlScalarHash<edge_hash_t, CDefaultHash32>::Remove(UtlHashFastHandle_t hHash)
{
	int mid; // 1018
	int lastRemoveIndex; // 1019
	uint endOfList; // 1025
	{
		int index; // 1026
		{
			int ideal; // 1028
			int diff; // 1032
			HashIntConventional(const int n); // 858
			HashKey32(uint32 nKey); // 1028
		}
	}
} /* size: 280, variables: 3 */

// <0614CEED> ../public/tier0/utlhash.h:1067
// variables: 2
void CUtlScalarHash<edge_hash_t, CDefaultHash32>::RemoveAll()
{
	int elementCount; // 1069
	{
		int i; // 1070
	}
} /* size: 0, variables: 1 */

// <05BB54C3> ../public/tier0/utlhash.h:1067
// variables: 2
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::RemoveAll()
{
	int elementCount; // 1069
	{
		int i; // 1070
	}
} /* size: 0, variables: 1 */

// <00D6F9CE> ../public/tier0/utlhash.h:1067
// variables: 2
void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::RemoveAll()
{
	int elementCount; // 1069
	{
		int i; // 1070
	}
} /* size: 0, variables: 1 */

// <0615C069> ../public/tier0/utlhash.h:1078
// variables: 2
// function calls: 3
void edge_hash_t& dataRecord, const CUtlScalarHash<edge_hash_t, CDefaultHash32>::Find()
{
	int index; // 1082
	uint endOfList; // 1083
	HashIntConventional(const int n); // 858
	HashKey32(uint32 nKey); // 1082
	edge_hash_t::operator==(
			const edge_hash_t& src);  // 1086
} /* size: 152, variables: 2, inline expansions: 3 (164 bytes) */

// <0614F4A3> ../public/tier0/utlhash.h:1078
// variables: 2
void CUtlScalarHash<edge_hash_t, CDefaultHash32>::Find(unsigned int uiKey, const edge_hash_t& dataRecord)
{
	int index; // 1082
	uint endOfList; // 1083
} /* size: 0, variables: 2 */

// <05BE4C4B> ../public/tier0/utlhash.h:1078
// variables: 2
// function calls: 3
void EdgeHash_t& dataRecord, const CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Find()
{
	int index; // 1082
	uint endOfList; // 1083
	HashIntConventional(const int n); // 858
	HashKey32(uint32 nKey); // 1082
	EdgeHash_t::operator==(
			const EdgeHash_t& src);  // 1086
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <05BB97A0> ../public/tier0/utlhash.h:1078
// variables: 2
void CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Find(unsigned int uiKey, const EdgeHash_t& dataRecord)
{
	int index; // 1082
	uint endOfList; // 1083
} /* size: 0, variables: 2 */

// <00D6FB5C> ../public/tier0/utlhash.h:1093
// variables: 2
void CUtlScalarHash<CPhysicsSurfacePropertyManager::CSurfacePropertiesPair, CPassthroughHash32>::FindByUniqueKey(unsigned int uiKey)
{
	int index; // 1097
	uint endOfList; // 1098
} /* size: 0, variables: 2 */

