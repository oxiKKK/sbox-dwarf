
//
// public/tier0/utlhashmap.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//
//	functions: 118
//	classes: 8
//	struct: 1
//

// <01AB5F99> ../public/tier0/utlhashmap.h:21
// member function: 1
// struct size: 1
struct HashMapFunctor_t<CUtlString> {
	/* ../public/tier0/utlhashmap.h:23 */
	uint32 operator()(const HashMapFunctor_t<CUtlString>* , const CUtlString& );
};

// <01BAA4DC> ../public/tier0/utlhashmap.h:23
inline void HashMapFunctor_t<CUtlString>::operator(const CUtlString& strKey)
{
} /* size: 0 */

// <0098A970> ../public/tier0/utlhashmap.h:40
// member functions: 4
// class size: 1
class CDefEquals<long long unsigned int> {
	/* ../public/tier0/utlhashmap.h:43 */
	void CDefEquals(CDefEquals<long long unsigned int>* );
	/* ../public/tier0/utlhashmap.h:44 */
	void CDefEquals(CDefEquals<long long unsigned int>* , int);
	/* ../public/tier0/utlhashmap.h:45 */
	bool operator()(const CDefEquals<long long unsigned int>* , const long long unsigned int& , const long long unsigned int& );
	/* ../public/tier0/utlhashmap.h:46 */
	bool operator!(const CDefEquals<long long unsigned int>* );
};

// <0098D11E> ../public/tier0/utlhashmap.h:40
// member functions: 8
// class size: 1
class CDefEquals<unsigned int> {
	/* ../public/tier0/utlhashmap.h:43 */
	void CDefEquals(CDefEquals<unsigned int>* );
	/* ../public/tier0/utlhashmap.h:44 */
	void CDefEquals(CDefEquals<unsigned int>* , int);
	/* ../public/tier0/utlhashmap.h:45 */
	bool operator()(const CDefEquals<unsigned int>* , const unsigned int& , const unsigned int& );
	/* ../public/tier0/utlhashmap.h:46 */
	bool operator!(const CDefEquals<unsigned int>* );
	void CDefEquals(class CDefEquals<unsigned int> *); /* linkage=_ZN10CDefEqualsIjEC4Ev */
	void CDefEquals(class CDefEquals<unsigned int> *, int); /* linkage=_ZN10CDefEqualsIjEC4Ei */
	bool operator()(const class CDefEquals<unsigned int>  *, const unsigned int  &, const unsigned int  &); /* linkage=_ZNK10CDefEqualsIjEclERKjS2_ */
	bool operator!(const class CDefEquals<unsigned int>  *); /* linkage=_ZNK10CDefEqualsIjEntEv */
};

// <00D9D39F> ../public/tier0/utlhashmap.h:43
void CDefEquals<long long unsigned int>::CDefEquals()
{
} /* size: 0 */

// <00D9D386> ../public/tier0/utlhashmap.h:43
inline void CDefEquals<long long unsigned int>::CDefEquals()
{
} /* size: 0 */

// <00D9D2EB> ../public/tier0/utlhashmap.h:43
void CDefEquals<unsigned int>::CDefEquals()
{
} /* size: 0 */

// <00D9D2D2> ../public/tier0/utlhashmap.h:43
inline void CDefEquals<unsigned int>::CDefEquals()
{
} /* size: 0 */

// <00D99CB0> ../public/tier0/utlhashmap.h:45
inline void CDefEquals<long long unsigned int>::operator(const long long unsigned int& lhs, const long long unsigned int& rhs)
{
} /* size: 0 */

// <00D9991F> ../public/tier0/utlhashmap.h:45
inline void CDefEquals<unsigned int>::operator(const unsigned int& lhs, const unsigned int& rhs)
{
} /* size: 0 */

// <01AB5FE4> ../public/tier0/utlhashmap.h:99
// member functions: 8
// class size: 1
class CDefEquals<CUtlString> {
	/* ../public/tier0/utlhashmap.h:102 */
	void CDefEquals(CDefEquals<CUtlString>* );
	/* ../public/tier0/utlhashmap.h:103 */
	void CDefEquals(CDefEquals<CUtlString>* , int);
	/* ../public/tier0/utlhashmap.h:104 */
	bool operator()(const CDefEquals<CUtlString>* , CUtlString, CUtlString);
	/* ../public/tier0/utlhashmap.h:108 */
	bool operator!(const CDefEquals<CUtlString>* );
	void CDefEquals(class CDefEquals<CUtlString> *); /* linkage=_ZN10CDefEqualsI10CUtlStringEC4Ev */
	void CDefEquals(class CDefEquals<CUtlString> *, int); /* linkage=_ZN10CDefEqualsI10CUtlStringEC4Ei */
	bool operator()(const class CDefEquals<CUtlString>  *, class CUtlString, class CUtlString); /* linkage=_ZNK10CDefEqualsI10CUtlStringEclES0_S0_ */
	bool operator!(const class CDefEquals<CUtlString>  *); /* linkage=_ZNK10CDefEqualsI10CUtlStringEntEv */
};

// <01BAA4C5> ../public/tier0/utlhashmap.h:102
void CDefEquals<CUtlString>::CDefEquals()
{
} /* size: 0 */

// <01BAA4AC> ../public/tier0/utlhashmap.h:102
inline void CDefEquals<CUtlString>::CDefEquals()
{
} /* size: 0 */

// <01BAA47B> ../public/tier0/utlhashmap.h:104
inline void CDefEquals<CUtlString>::operator(CUtlString lhs, CUtlString rhs)
{
} /* size: 0 */

// <009882FD> ../public/tier0/utlhashmap.h:132
// member functions: 88
// member variables: 10
// class size: 96
class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long unsigned int> > {
	/* ../public/tier0/utlhashmap.h:141 */
	enum {
		IsUtlHashMap = 1,
	};
	/* ../public/tier0/utlhashmap.h:282 */
	struct HashBucket_t {
		IndexType_t m_iNode; /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:290 */
	struct Node_t {
		KeyType_t m_key; /* 0 8 */
		ElemType_t m_elem; /* 8 1 */
		int m_iNextNode; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:143 */
	void CUtlHashMap(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	/* ../public/tier0/utlhashmap.h:153 */
	void CUtlHashMap(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int);
	/* ../public/tier0/utlhashmap.h:163 */
	void ~CUtlHashMap(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	/* ../public/tier0/utlhashmap.h:168 */
	void CopyFullHashMap(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	/* ../public/tier0/utlhashmap.h:136 */
	typedef enum Rule ElemType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:178 */
	ElemType_t& Element(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t);
	/* ../public/tier0/utlhashmap.h:137 */
	typedef int IndexType_t;
	/* ../public/tier0/utlhashmap.h:179 */
	const ElemType_t& Element(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t);
	/* ../public/tier0/utlhashmap.h:180 */
	ElemType_t& operator[](CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t);
	/* ../public/tier0/utlhashmap.h:181 */
	const ElemType_t& operator[](const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t);
	/* ../public/tier0/utlhashmap.h:135 */
	typedef long long unsigned int KeyType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:182 */
	KeyType_t& Key(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t);
	/* ../public/tier0/utlhashmap.h:183 */
	const KeyType_t& Key(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t);
	/* ../public/tier0/utlhashmap.h:186 */
	IndexType_t Count(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long);
	/* ../public/tier0/utlhashmap.h:190 */
	IndexType_t FirstElement(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long);
	/* ../public/tier0/utlhashmap.h:193 */
	IndexType_t MaxElement(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long);
	/* ../public/tier0/utlhashmap.h:196 */
	bool IsValidIndex(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t);
	/* ../public/tier0/utlhashmap.h:199 */
	IndexType_t InvalidIndex(void);
	/* ../public/tier0/utlhashmap.h:202 */
	IndexType_t Insert(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:203 */
	IndexType_t Insert(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:415 */
	int InsertOrReplace(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:432 */
	int InsertOrReplace(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:449 */
	int InsertWithDupes(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:381 */
	int FindOrInsert(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:398 */
	int FindOrInsert(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:565 */
	int Find(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:220 */
	bool HasElement(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int);
	/* ../public/tier0/utlhashmap.h:224 */
	const ElemType_t& FindElement(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:677 */
	void RemoveAt(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t);
	/* ../public/tier0/utlhashmap.h:233 */
	bool Remove(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:750 */
	void RemoveAll(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	/* ../public/tier0/utlhashmap.h:775 */
	void Purge(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	/* ../public/tier0/utlhashmap.h:247 */
	void PurgeAndDeleteElements(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	/* ../public/tier0/utlhashmap.h:837 */
	void Swap(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	/* ../public/tier0/utlhashmap.h:256 */
	size_t AllocSize(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long);
private:
	/* ../public/tier0/utlhashmap.h:312 */
	int InsertUnconstructed(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t& , int* , bool);
	/* ../public/tier0/utlhashmap.h:270 */
	IndexType_t FreeNodeIDToIndex(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t);
	/* ../public/tier0/utlhashmap.h:271 */
	IndexType_t FreeNodeIndexToID(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t);
	/* ../public/tier0/utlhashmap.h:272 */
	bool IsFreeNodeID(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t);
	/* ../public/tier0/utlhashmap.h:609 */
	int FindInBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, int, const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:506 */
	int AllocNode(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	/* ../public/tier0/utlhashmap.h:528 */
	void RehashNodesInBucket(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int);
	/* ../public/tier0/utlhashmap.h:633 */
	void LinkNodeIntoBucket(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int, int);
	/* ../public/tier0/utlhashmap.h:645 */
	void UnlinkNodeFromBucket(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int, int);
	/* ../public/tier0/utlhashmap.h:716 */
	bool RemoveNodeFromBucket(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t, int);
	/* ../public/tier0/utlhashmap.h:801 */
	void IncrementalRehash(CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long );
	CUtlVector<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int> > m_vecHashBuckets; /* 0 32 */
	CBitString m_bitsMigratedBuckets; /* 32 24 */
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int> m_memNodes; /* 56 16 */
	IndexType_t m_iNodeFreeListHead; /* 72 4 */
	IndexType_t m_cElements; /* 76 4 */
	IndexType_t m_nMaxElement; /* 80 4 */
	IndexType_t m_nMinRehashedBucket; /* 84 4 */
	IndexType_t m_nMaxRehashedBucket; /* 88 4 */
	/* ../public/tier0/utlhashmap.h:138 */
	typedef struct CDefEquals<long long unsigned int> EqualityFunc_t;
	EqualityFunc_t m_EqualityFunc; /* 92 0 */
	/* ../public/tier0/utlhashmap.h:139 */
	typedef struct HashMapFunctor_t<long long unsigned int> HashFunc_t;
	HashFunc_t m_HashFunc; /* 93 0 */
	void CUtlHashMap(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEEC4Ev */
	void CUtlHashMap(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEEC4Ei */
	void ~CUtlHashMap(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEED4Ev */
	void CopyFullHashMap(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE15CopyFullHashMapERS6_ */
	ElemType_t & Element(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE7ElementEi */
	const ElemType_t  & Element(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE7ElementEi */
	ElemType_t & operator[](class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEEixEi */
	const ElemType_t  & operator[](const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEEixEi */
	KeyType_t & Key(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE3KeyEi */
	const KeyType_t  & Key(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE3KeyEi */
	IndexType_t Count(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE5CountEv */
	IndexType_t FirstElement(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE12FirstElementEv */
	IndexType_t MaxElement(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE10MaxElementEv */
	bool IsValidIndex(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE12IsValidIndexEi */
	IndexType_t InvalidIndex(void); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE12InvalidIndexEv */
	IndexType_t Insert(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE6InsertERKy */
	IndexType_t Insert(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE6InsertERKyRKS1_ */
	int InsertOrReplace(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE15InsertOrReplaceERKy */
	int InsertOrReplace(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE15InsertOrReplaceERKyRKS1_ */
	int InsertWithDupes(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE15InsertWithDupesERKyRKS1_ */
	int FindOrInsert(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE12FindOrInsertERKy */
	int FindOrInsert(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE12FindOrInsertERKyRKS1_ */
	int Find(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE4FindERKy */
	bool HasElement(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE10HasElementERKy */
	/* <da48c5> ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE14EnsureCapacityEi */
	const ElemType_t  & FindElement(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE11FindElementERKyRKS1_ */
	void RemoveAt(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE8RemoveAtEi */
	bool Remove(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE6RemoveERKy */
	void RemoveAll(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE9RemoveAllEv */
	void Purge(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE22PurgeAndDeleteElementsEv */
	void Swap(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE4SwapERS6_ */
	size_t AllocSize(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE9AllocSizeEv */
	int InsertUnconstructed(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , const KeyType_t  &, int *, bool); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE19InsertUnconstructedERKyPib */
	IndexType_t FreeNodeIDToIndex(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE17FreeNodeIDToIndexEi */
	IndexType_t FreeNodeIndexToID(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE17FreeNodeIndexToIDEi */
	bool IsFreeNodeID(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, IndexType_t); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE12IsFreeNodeIDEi */
	int FindInBucket(const class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long, int, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE12FindInBucketEiRKy */
	int AllocNode(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE9AllocNodeEv */
	void RehashNodesInBucket(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE19RehashNodesInBucketEi */
	void LinkNodeIntoBucket(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int, int); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE18LinkNodeIntoBucketEii */
	void UnlinkNodeFromBucket(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , int, int); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE20UnlinkNodeFromBucketEii */
	bool RemoveNodeFromBucket(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long , IndexType_t, int); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE20RemoveNodeFromBucketEii */
	void IncrementalRehash(class CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long long ); /* linkage=_ZN11CUtlHashMapIyN14CPhysicsFilter4RuleE10CDefEqualsIyE16HashMapFunctor_tIyEE17IncrementalRehashEv */
};

// <0098AAAB> ../public/tier0/utlhashmap.h:132
// member functions: 88
// member variables: 10
// class size: 96
class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > {
	/* ../public/tier0/utlhashmap.h:141 */
	enum {
		IsUtlHashMap = 1,
	};
	/* ../public/tier0/utlhashmap.h:282 */
	struct HashBucket_t {
		IndexType_t m_iNode; /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:290 */
	struct Node_t {
		KeyType_t m_key; /* 0 4 */
		ElemType_t m_elem; /* 4 1 */
		int m_iNextNode; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:143 */
	void CUtlHashMap(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:153 */
	void CUtlHashMap(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , int);
	/* ../public/tier0/utlhashmap.h:163 */
	void ~CUtlHashMap(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:168 */
	void CopyFullHashMap(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >& );
	/* ../public/tier0/utlhashmap.h:136 */
	typedef enum Rule ElemType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:178 */
	ElemType_t& Element(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:137 */
	typedef int IndexType_t;
	/* ../public/tier0/utlhashmap.h:179 */
	const ElemType_t& Element(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:180 */
	ElemType_t& operator[](CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:181 */
	const ElemType_t& operator[](const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:135 */
	typedef unsigned int KeyType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:182 */
	KeyType_t& Key(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:183 */
	const KeyType_t& Key(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:186 */
	IndexType_t Count(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:190 */
	IndexType_t FirstElement(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:193 */
	IndexType_t MaxElement(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:196 */
	bool IsValidIndex(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:199 */
	IndexType_t InvalidIndex(void);
	/* ../public/tier0/utlhashmap.h:202 */
	IndexType_t Insert(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:203 */
	IndexType_t Insert(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:415 */
	int InsertOrReplace(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:432 */
	int InsertOrReplace(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:449 */
	int InsertWithDupes(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:381 */
	int FindOrInsert(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:398 */
	int FindOrInsert(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:565 */
	int Find(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:220 */
	bool HasElement(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , int);
	/* ../public/tier0/utlhashmap.h:224 */
	const ElemType_t& FindElement(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:677 */
	void RemoveAt(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:233 */
	bool Remove(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:750 */
	void RemoveAll(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:775 */
	void Purge(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:247 */
	void PurgeAndDeleteElements(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:837 */
	void Swap(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >& );
	/* ../public/tier0/utlhashmap.h:256 */
	size_t AllocSize(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
private:
	/* ../public/tier0/utlhashmap.h:312 */
	int InsertUnconstructed(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , const KeyType_t& , int* , bool);
	/* ../public/tier0/utlhashmap.h:270 */
	IndexType_t FreeNodeIDToIndex(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:271 */
	IndexType_t FreeNodeIndexToID(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:272 */
	bool IsFreeNodeID(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:609 */
	int FindInBucket(const CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , int, const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:506 */
	int AllocNode(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	/* ../public/tier0/utlhashmap.h:528 */
	void RehashNodesInBucket(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , int);
	/* ../public/tier0/utlhashmap.h:633 */
	void LinkNodeIntoBucket(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , int, int);
	/* ../public/tier0/utlhashmap.h:645 */
	void UnlinkNodeFromBucket(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , int, int);
	/* ../public/tier0/utlhashmap.h:716 */
	bool RemoveNodeFromBucket(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* , IndexType_t, int);
	/* ../public/tier0/utlhashmap.h:801 */
	void IncrementalRehash(CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >* );
	CUtlVector<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int> > m_vecHashBuckets; /* 0 32 */
	CBitString m_bitsMigratedBuckets; /* 32 24 */
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int> m_memNodes; /* 56 16 */
	IndexType_t m_iNodeFreeListHead; /* 72 4 */
	IndexType_t m_cElements; /* 76 4 */
	IndexType_t m_nMaxElement; /* 80 4 */
	IndexType_t m_nMinRehashedBucket; /* 84 4 */
	IndexType_t m_nMaxRehashedBucket; /* 88 4 */
	/* ../public/tier0/utlhashmap.h:138 */
	typedef struct CDefEquals<unsigned int> EqualityFunc_t;
	EqualityFunc_t m_EqualityFunc; /* 92 0 */
	/* ../public/tier0/utlhashmap.h:139 */
	typedef struct HashMapFunctor_t<unsigned int> HashFunc_t;
	HashFunc_t m_HashFunc; /* 93 0 */
	void CUtlHashMap(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEEC4Ev */
	void CUtlHashMap(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, int); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEEC4Ei */
	void ~CUtlHashMap(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEED4Ev */
	void CopyFullHashMap(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > &); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE15CopyFullHashMapERS6_ */
	ElemType_t & Element(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, IndexType_t); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE7ElementEi */
	const ElemType_t  & Element(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE7ElementEi */
	ElemType_t & operator[](class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, IndexType_t); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEEixEi */
	const ElemType_t  & operator[](const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEEixEi */
	KeyType_t & Key(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, IndexType_t); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE3KeyEi */
	const KeyType_t  & Key(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE3KeyEi */
	IndexType_t Count(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE5CountEv */
	IndexType_t FirstElement(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE12FirstElementEv */
	IndexType_t MaxElement(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE10MaxElementEv */
	bool IsValidIndex(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE12IsValidIndexEi */
	IndexType_t InvalidIndex(void); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE12InvalidIndexEv */
	IndexType_t Insert(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE6InsertERKj */
	IndexType_t Insert(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE6InsertERKjRKS1_ */
	int InsertOrReplace(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE15InsertOrReplaceERKj */
	int InsertOrReplace(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE15InsertOrReplaceERKjRKS1_ */
	int InsertWithDupes(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE15InsertWithDupesERKjRKS1_ */
	int FindOrInsert(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE12FindOrInsertERKj */
	int FindOrInsert(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE12FindOrInsertERKjRKS1_ */
	int Find(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE4FindERKj */
	bool HasElement(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE10HasElementERKj */
	/* <da4307> ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, int); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE14EnsureCapacityEi */
	/* <da3d5b> ../public/tier0/utlhashmap.h:224 */
	const ElemType_t  & FindElement(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE11FindElementERKjRKS1_ */
	void RemoveAt(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, IndexType_t); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE8RemoveAtEi */
	bool Remove(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE6RemoveERKj */
	void RemoveAll(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE9RemoveAllEv */
	void Purge(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE22PurgeAndDeleteElementsEv */
	void Swap(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > &); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE4SwapERS6_ */
	size_t AllocSize(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE9AllocSizeEv */
	int InsertUnconstructed(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, const KeyType_t  &, int *, bool); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE19InsertUnconstructedERKjPib */
	IndexType_t FreeNodeIDToIndex(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE17FreeNodeIDToIndexEi */
	IndexType_t FreeNodeIndexToID(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE17FreeNodeIndexToIDEi */
	bool IsFreeNodeID(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE12IsFreeNodeIDEi */
	int FindInBucket(const class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >  *, int, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE12FindInBucketEiRKj */
	int AllocNode(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE9AllocNodeEv */
	void RehashNodesInBucket(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, int); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE19RehashNodesInBucketEi */
	void LinkNodeIntoBucket(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, int, int); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE18LinkNodeIntoBucketEii */
	void UnlinkNodeFromBucket(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, int, int); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE20UnlinkNodeFromBucketEii */
	bool RemoveNodeFromBucket(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *, IndexType_t, int); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE20RemoveNodeFromBucketEii */
	void IncrementalRehash(class CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> > *); /* linkage=_ZN11CUtlHashMapIjN14CPhysicsFilter4RuleE10CDefEqualsIjE16HashMapFunctor_tIjEE17IncrementalRehashEv */
};

// <01ACB1BD> ../public/tier0/utlhashmap.h:132
// member functions: 88
// member variables: 10
// class size: 96
class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > {
	/* ../public/tier0/utlhashmap.h:141 */
	enum {
		IsUtlHashMap = 1,
	};
	/* ../public/tier0/utlhashmap.h:282 */
	struct HashBucket_t {
		IndexType_t m_iNode; /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:290 */
	struct Node_t {
		KeyType_t m_key; /* 0 8 */
		ElemType_t m_elem; /* 8 4 */
		int m_iNextNode; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:143 */
	void CUtlHashMap(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:153 */
	void CUtlHashMap(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , int);
	/* ../public/tier0/utlhashmap.h:163 */
	void ~CUtlHashMap(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:168 */
	void CopyFullHashMap(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >& );
	/* ../public/tier0/utlhashmap.h:136 */
	typedef struct VertexColor_t ElemType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:178 */
	ElemType_t& Element(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:137 */
	typedef int IndexType_t;
	/* ../public/tier0/utlhashmap.h:179 */
	const ElemType_t& Element(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:180 */
	ElemType_t& operator[](CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:181 */
	const ElemType_t& operator[](const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:135 */
	typedef struct CUtlString KeyType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:182 */
	KeyType_t& Key(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:183 */
	const KeyType_t& Key(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:186 */
	IndexType_t Count(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:190 */
	IndexType_t FirstElement(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:193 */
	IndexType_t MaxElement(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:196 */
	bool IsValidIndex(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:199 */
	IndexType_t InvalidIndex(void);
	/* ../public/tier0/utlhashmap.h:202 */
	IndexType_t Insert(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:203 */
	IndexType_t Insert(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:415 */
	int InsertOrReplace(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:432 */
	int InsertOrReplace(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:449 */
	int InsertWithDupes(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:381 */
	int FindOrInsert(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:398 */
	int FindOrInsert(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:565 */
	int Find(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:220 */
	bool HasElement(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , int);
	/* ../public/tier0/utlhashmap.h:224 */
	const ElemType_t& FindElement(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:677 */
	void RemoveAt(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:233 */
	bool Remove(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:750 */
	void RemoveAll(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:775 */
	void Purge(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:247 */
	void PurgeAndDeleteElements(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:837 */
	void Swap(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >& );
	/* ../public/tier0/utlhashmap.h:256 */
	size_t AllocSize(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
private:
	/* ../public/tier0/utlhashmap.h:312 */
	int InsertUnconstructed(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , const KeyType_t& , int* , bool);
	/* ../public/tier0/utlhashmap.h:270 */
	IndexType_t FreeNodeIDToIndex(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:271 */
	IndexType_t FreeNodeIndexToID(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:272 */
	bool IsFreeNodeID(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:609 */
	int FindInBucket(const CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , int, const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:506 */
	int AllocNode(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	/* ../public/tier0/utlhashmap.h:528 */
	void RehashNodesInBucket(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , int);
	/* ../public/tier0/utlhashmap.h:633 */
	void LinkNodeIntoBucket(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , int, int);
	/* ../public/tier0/utlhashmap.h:645 */
	void UnlinkNodeFromBucket(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , int, int);
	/* ../public/tier0/utlhashmap.h:716 */
	bool RemoveNodeFromBucket(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* , IndexType_t, int);
	/* ../public/tier0/utlhashmap.h:801 */
	void IncrementalRehash(CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >* );
	CUtlVector<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucket_t, CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucket_t, int> > m_vecHashBuckets; /* 0 32 */
	CBitString m_bitsMigratedBuckets; /* 32 24 */
	CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, int> m_memNodes; /* 56 16 */
	IndexType_t m_iNodeFreeListHead; /* 72 4 */
	IndexType_t m_cElements; /* 76 4 */
	IndexType_t m_nMaxElement; /* 80 4 */
	IndexType_t m_nMinRehashedBucket; /* 84 4 */
	IndexType_t m_nMaxRehashedBucket; /* 88 4 */
	/* ../public/tier0/utlhashmap.h:138 */
	typedef struct CDefEquals<CUtlString> EqualityFunc_t;
	EqualityFunc_t m_EqualityFunc; /* 92 0 */
	/* ../public/tier0/utlhashmap.h:139 */
	typedef struct HashMapFunctor_t<CUtlString> HashFunc_t;
	HashFunc_t m_HashFunc; /* 93 0 */
	void CUtlHashMap(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EEC4Ev */
	void CUtlHashMap(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, int); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EEC4Ei */
	void ~CUtlHashMap(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EED4Ev */
	void CopyFullHashMap(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > &); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE15CopyFullHashMapERS6_ */
	ElemType_t & Element(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, IndexType_t); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE7ElementEi */
	const ElemType_t  & Element(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE7ElementEi */
	ElemType_t & operator[](class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, IndexType_t); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EEixEi */
	const ElemType_t  & operator[](const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EEixEi */
	KeyType_t & Key(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, IndexType_t); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE3KeyEi */
	const KeyType_t  & Key(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE3KeyEi */
	IndexType_t Count(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE5CountEv */
	IndexType_t FirstElement(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE12FirstElementEv */
	IndexType_t MaxElement(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE10MaxElementEv */
	bool IsValidIndex(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE12IsValidIndexEi */
	IndexType_t InvalidIndex(void); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE12InvalidIndexEv */
	IndexType_t Insert(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE6InsertERKS0_ */
	IndexType_t Insert(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE6InsertERKS0_RKS1_ */
	int InsertOrReplace(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE15InsertOrReplaceERKS0_ */
	int InsertOrReplace(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE15InsertOrReplaceERKS0_RKS1_ */
	int InsertWithDupes(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE15InsertWithDupesERKS0_RKS1_ */
	int FindOrInsert(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE12FindOrInsertERKS0_ */
	int FindOrInsert(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE12FindOrInsertERKS0_RKS1_ */
	int Find(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE4FindERKS0_ */
	bool HasElement(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE10HasElementERKS0_ */
	/* <1bb3f01> ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, int); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE14EnsureCapacityEi */
	const ElemType_t  & FindElement(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE11FindElementERKS0_RKS1_ */
	void RemoveAt(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, IndexType_t); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE8RemoveAtEi */
	bool Remove(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE6RemoveERKS0_ */
	void RemoveAll(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE9RemoveAllEv */
	void Purge(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE22PurgeAndDeleteElementsEv */
	void Swap(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > &); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE4SwapERS6_ */
	size_t AllocSize(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE9AllocSizeEv */
	int InsertUnconstructed(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, const KeyType_t  &, int *, bool); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE19InsertUnconstructedERKS0_Pib */
	IndexType_t FreeNodeIDToIndex(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE17FreeNodeIDToIndexEi */
	IndexType_t FreeNodeIndexToID(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE17FreeNodeIndexToIDEi */
	bool IsFreeNodeID(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE12IsFreeNodeIDEi */
	int FindInBucket(const class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >  *, int, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE12FindInBucketEiRKS0_ */
	int AllocNode(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE9AllocNodeEv */
	void RehashNodesInBucket(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, int); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE19RehashNodesInBucketEi */
	void LinkNodeIntoBucket(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, int, int); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE18LinkNodeIntoBucketEii */
	void UnlinkNodeFromBucket(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, int, int); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE20UnlinkNodeFromBucketEii */
	bool RemoveNodeFromBucket(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *, IndexType_t, int); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE20RemoveNodeFromBucketEii */
	void IncrementalRehash(class CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> > *); /* linkage=_ZN11CUtlHashMapI10CUtlString13VertexColor_t10CDefEqualsIS0_E16HashMapFunctor_tIS0_EE17IncrementalRehashEv */
};

// <00032755> ../public/tier0/utlhashmap.h:132
// member functions: 132
// member variables: 10
// class size: 96
class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> {
	/* ../public/tier0/utlhashmap.h:141 */
	enum {
		IsUtlHashMap = 1,
	};
	/* ../public/tier0/utlhashmap.h:282 */
	struct HashBucket_t {
		IndexType_t m_iNode; /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:290 */
	struct Node_t {
		KeyType_t m_key; /* 0 8 */
		ElemType_t m_elem; /* 8 4 */
		int m_iNextNode; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:143 */
	void CUtlHashMap(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:153 */
	void CUtlHashMap(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , int);
	/* ../public/tier0/utlhashmap.h:163 */
	void ~CUtlHashMap(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:168 */
	void CopyFullHashMap(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>& );
	/* ../public/tier0/utlhashmap.h:136 */
	typedef int ElemType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:178 */
	ElemType_t& Element(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:137 */
	typedef int IndexType_t;
	/* ../public/tier0/utlhashmap.h:179 */
	const ElemType_t& Element(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:180 */
	ElemType_t& operator[](CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:181 */
	const ElemType_t& operator[](const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:135 */
	typedef const char * KeyType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:182 */
	KeyType_t& Key(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:183 */
	const KeyType_t& Key(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:186 */
	IndexType_t Count(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:190 */
	IndexType_t FirstElement(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:193 */
	IndexType_t MaxElement(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:196 */
	bool IsValidIndex(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:199 */
	IndexType_t InvalidIndex(void);
	/* ../public/tier0/utlhashmap.h:202 */
	IndexType_t Insert(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:203 */
	IndexType_t Insert(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:415 */
	int InsertOrReplace(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:432 */
	int InsertOrReplace(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:449 */
	int InsertWithDupes(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:381 */
	int FindOrInsert(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:398 */
	int FindOrInsert(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:565 */
	int Find(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:220 */
	bool HasElement(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , int);
	/* ../public/tier0/utlhashmap.h:224 */
	const ElemType_t& FindElement(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:677 */
	void RemoveAt(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:233 */
	bool Remove(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:750 */
	void RemoveAll(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:775 */
	void Purge(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:247 */
	void PurgeAndDeleteElements(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:837 */
	void Swap(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>& );
	/* ../public/tier0/utlhashmap.h:256 */
	size_t AllocSize(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
private:
	/* ../public/tier0/utlhashmap.h:312 */
	int InsertUnconstructed(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , const KeyType_t& , int* , bool);
	/* ../public/tier0/utlhashmap.h:270 */
	IndexType_t FreeNodeIDToIndex(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:271 */
	IndexType_t FreeNodeIndexToID(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:272 */
	bool IsFreeNodeID(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:609 */
	int FindInBucket(const CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , int, const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:506 */
	int AllocNode(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:528 */
	void RehashNodesInBucket(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , int);
	/* ../public/tier0/utlhashmap.h:633 */
	void LinkNodeIntoBucket(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , int, int);
	/* ../public/tier0/utlhashmap.h:645 */
	void UnlinkNodeFromBucket(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , int, int);
	/* ../public/tier0/utlhashmap.h:716 */
	bool RemoveNodeFromBucket(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* , IndexType_t, int);
	/* ../public/tier0/utlhashmap.h:801 */
	void IncrementalRehash(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>* );
	CUtlVector<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t, CUtlMemory<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t, int> > m_vecHashBuckets; /* 0 32 */
	CBitString m_bitsMigratedBuckets; /* 32 24 */
	CUtlMemory<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::Node_t, int> m_memNodes; /* 56 16 */
	IndexType_t m_iNodeFreeListHead; /* 72 4 */
	IndexType_t m_cElements; /* 76 4 */
	IndexType_t m_nMaxElement; /* 80 4 */
	IndexType_t m_nMinRehashedBucket; /* 84 4 */
	IndexType_t m_nMaxRehashedBucket; /* 88 4 */
	/* ../public/tier0/utlhashmap.h:138 */
	typedef struct FastCaselessStringEqualFunctor EqualityFunc_t;
	EqualityFunc_t m_EqualityFunc; /* 92 0 */
	/* ../public/tier0/utlhashmap.h:139 */
	typedef struct FastCaselessStringHashFunctor HashFunc_t;
	HashFunc_t m_HashFunc; /* 93 0 */
	void CUtlHashMap(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorEC4Ev */
	void CUtlHashMap(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorEC4Ei */
	void ~CUtlHashMap(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorED4Ev */
	void CopyFullHashMap(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE15CopyFullHashMapERS4_ */
	ElemType_t & Element(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE7ElementEi */
	const ElemType_t  & Element(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE7ElementEi */
	ElemType_t & operator[](class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorEixEi */
	const ElemType_t  & operator[](const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorEixEi */
	KeyType_t & Key(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE3KeyEi */
	const KeyType_t  & Key(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE3KeyEi */
	IndexType_t Count(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE5CountEv */
	IndexType_t FirstElement(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12FirstElementEv */
	IndexType_t MaxElement(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE10MaxElementEv */
	bool IsValidIndex(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12IsValidIndexEi */
	IndexType_t InvalidIndex(void); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12InvalidIndexEv */
	IndexType_t Insert(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE6InsertERKS1_ */
	IndexType_t Insert(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE6InsertERKS1_RKi */
	int InsertOrReplace(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE15InsertOrReplaceERKS1_ */
	int InsertOrReplace(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE15InsertOrReplaceERKS1_RKi */
	int InsertWithDupes(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE15InsertWithDupesERKS1_RKi */
	int FindOrInsert(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12FindOrInsertERKS1_ */
	int FindOrInsert(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12FindOrInsertERKS1_RKi */
	int Find(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE4FindERKS1_ */
	bool HasElement(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE10HasElementERKS1_ */
	/* <782ae> ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE14EnsureCapacityEi */
	const ElemType_t  & FindElement(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE11FindElementERKS1_RKi */
	/* <7661e> ../public/tier0/utlhashmap.h:677 */
	void RemoveAt(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE8RemoveAtEi */
	bool Remove(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE6RemoveERKS1_ */
	void RemoveAll(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE9RemoveAllEv */
	void Purge(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE22PurgeAndDeleteElementsEv */
	void Swap(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE4SwapERS4_ */
	size_t AllocSize(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE9AllocSizeEv */
	int InsertUnconstructed(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, int *, bool); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE19InsertUnconstructedERKS1_Pib */
	IndexType_t FreeNodeIDToIndex(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE17FreeNodeIDToIndexEi */
	IndexType_t FreeNodeIndexToID(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE17FreeNodeIndexToIDEi */
	bool IsFreeNodeID(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12IsFreeNodeIDEi */
	int FindInBucket(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, int, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12FindInBucketEiRKS1_ */
	int AllocNode(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE9AllocNodeEv */
	void RehashNodesInBucket(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE19RehashNodesInBucketEi */
	void LinkNodeIntoBucket(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE18LinkNodeIntoBucketEii */
	void UnlinkNodeFromBucket(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE20UnlinkNodeFromBucketEii */
	bool RemoveNodeFromBucket(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE20RemoveNodeFromBucketEii */
	void IncrementalRehash(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE17IncrementalRehashEv */
	void CUtlHashMap(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorEC4Ev */
	void CUtlHashMap(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorEC4Ei */
	void ~CUtlHashMap(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorED4Ev */
	void CopyFullHashMap(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE15CopyFullHashMapERS4_ */
	ElemType_t & Element(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE7ElementEi */
	const ElemType_t  & Element(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE7ElementEi */
	ElemType_t & operator[](class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorEixEi */
	const ElemType_t  & operator[](const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorEixEi */
	KeyType_t & Key(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE3KeyEi */
	const KeyType_t  & Key(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE3KeyEi */
	IndexType_t Count(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE5CountEv */
	IndexType_t FirstElement(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12FirstElementEv */
	IndexType_t MaxElement(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE10MaxElementEv */
	bool IsValidIndex(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12IsValidIndexEi */
	IndexType_t InvalidIndex(void); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12InvalidIndexEv */
	IndexType_t Insert(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE6InsertERKS1_ */
	IndexType_t Insert(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE6InsertERKS1_RKi */
	int InsertOrReplace(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE15InsertOrReplaceERKS1_ */
	int InsertOrReplace(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE15InsertOrReplaceERKS1_RKi */
	int InsertWithDupes(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE15InsertWithDupesERKS1_RKi */
	int FindOrInsert(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12FindOrInsertERKS1_ */
	int FindOrInsert(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12FindOrInsertERKS1_RKi */
	int Find(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE4FindERKS1_ */
	bool HasElement(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE10HasElementERKS1_ */
	/* <78868> ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE14EnsureCapacityEi */
	const ElemType_t  & FindElement(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE11FindElementERKS1_RKi */
	void RemoveAt(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE8RemoveAtEi */
	bool Remove(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE6RemoveERKS1_ */
	void RemoveAll(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE9RemoveAllEv */
	void Purge(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE22PurgeAndDeleteElementsEv */
	void Swap(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE4SwapERS4_ */
	size_t AllocSize(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE9AllocSizeEv */
	int InsertUnconstructed(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, int *, bool); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE19InsertUnconstructedERKS1_Pib */
	IndexType_t FreeNodeIDToIndex(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE17FreeNodeIDToIndexEi */
	IndexType_t FreeNodeIndexToID(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE17FreeNodeIndexToIDEi */
	bool IsFreeNodeID(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12IsFreeNodeIDEi */
	int FindInBucket(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, int, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12FindInBucketEiRKS1_ */
	int AllocNode(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE9AllocNodeEv */
	void RehashNodesInBucket(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE19RehashNodesInBucketEi */
	void LinkNodeIntoBucket(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE18LinkNodeIntoBucketEii */
	void UnlinkNodeFromBucket(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE20UnlinkNodeFromBucketEii */
	bool RemoveNodeFromBucket(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE20RemoveNodeFromBucketEii */
	void IncrementalRehash(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE17IncrementalRehashEv */
};

// <00039900> ../public/tier0/utlhashmap.h:132
// member functions: 132
// member variables: 10
// class size: 96
class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> {
	/* ../public/tier0/utlhashmap.h:141 */
	enum {
		IsUtlHashMap = 1,
	};
	/* ../public/tier0/utlhashmap.h:282 */
	struct HashBucket_t {
		IndexType_t m_iNode; /* 0 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:290 */
	struct Node_t {
		KeyType_t m_key; /* 0 8 */
		ElemType_t m_elem; /* 8 4 */
		int m_iNextNode; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:143 */
	void CUtlHashMap(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:153 */
	void CUtlHashMap(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , int);
	/* ../public/tier0/utlhashmap.h:163 */
	void ~CUtlHashMap(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:168 */
	void CopyFullHashMap(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>& );
	/* ../public/tier0/utlhashmap.h:136 */
	typedef int ElemType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:178 */
	ElemType_t& Element(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:137 */
	typedef int IndexType_t;
	/* ../public/tier0/utlhashmap.h:179 */
	const ElemType_t& Element(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:180 */
	ElemType_t& operator[](CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:181 */
	const ElemType_t& operator[](const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:135 */
	typedef const char * KeyType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashmap.h:182 */
	KeyType_t& Key(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:183 */
	const KeyType_t& Key(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:186 */
	IndexType_t Count(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:190 */
	IndexType_t FirstElement(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:193 */
	IndexType_t MaxElement(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:196 */
	bool IsValidIndex(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:199 */
	IndexType_t InvalidIndex(void);
	/* ../public/tier0/utlhashmap.h:202 */
	IndexType_t Insert(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:203 */
	IndexType_t Insert(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:415 */
	int InsertOrReplace(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:432 */
	int InsertOrReplace(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:449 */
	int InsertWithDupes(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:381 */
	int FindOrInsert(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:398 */
	int FindOrInsert(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:565 */
	int Find(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:220 */
	bool HasElement(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , int);
	/* ../public/tier0/utlhashmap.h:224 */
	const ElemType_t& FindElement(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& , const ElemType_t& );
	/* ../public/tier0/utlhashmap.h:677 */
	void RemoveAt(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:233 */
	bool Remove(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:750 */
	void RemoveAll(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:775 */
	void Purge(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:247 */
	void PurgeAndDeleteElements(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:837 */
	void Swap(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>& );
	/* ../public/tier0/utlhashmap.h:256 */
	size_t AllocSize(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
private:
	/* ../public/tier0/utlhashmap.h:312 */
	int InsertUnconstructed(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , const KeyType_t& , int* , bool);
	/* ../public/tier0/utlhashmap.h:270 */
	IndexType_t FreeNodeIDToIndex(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:271 */
	IndexType_t FreeNodeIndexToID(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:272 */
	bool IsFreeNodeID(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t);
	/* ../public/tier0/utlhashmap.h:609 */
	int FindInBucket(const CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , int, const KeyType_t& );
	/* ../public/tier0/utlhashmap.h:506 */
	int AllocNode(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	/* ../public/tier0/utlhashmap.h:528 */
	void RehashNodesInBucket(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , int);
	/* ../public/tier0/utlhashmap.h:633 */
	void LinkNodeIntoBucket(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , int, int);
	/* ../public/tier0/utlhashmap.h:645 */
	void UnlinkNodeFromBucket(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , int, int);
	/* ../public/tier0/utlhashmap.h:716 */
	bool RemoveNodeFromBucket(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* , IndexType_t, int);
	/* ../public/tier0/utlhashmap.h:801 */
	void IncrementalRehash(CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>* );
	CUtlVector<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::HashBucket_t, CUtlMemory<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::HashBucket_t, int> > m_vecHashBuckets; /* 0 32 */
	CBitString m_bitsMigratedBuckets; /* 32 24 */
	CUtlMemory<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::Node_t, int> m_memNodes; /* 56 16 */
	IndexType_t m_iNodeFreeListHead; /* 72 4 */
	IndexType_t m_cElements; /* 76 4 */
	IndexType_t m_nMaxElement; /* 80 4 */
	IndexType_t m_nMinRehashedBucket; /* 84 4 */
	IndexType_t m_nMaxRehashedBucket; /* 88 4 */
	/* ../public/tier0/utlhashmap.h:138 */
	typedef struct StringEqualFunctor EqualityFunc_t;
	EqualityFunc_t m_EqualityFunc; /* 92 0 */
	/* ../public/tier0/utlhashmap.h:139 */
	typedef struct StringHashFunctor HashFunc_t;
	HashFunc_t m_HashFunc; /* 93 0 */
	void CUtlHashMap(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorEC4Ev */
	void CUtlHashMap(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorEC4Ei */
	void ~CUtlHashMap(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorED4Ev */
	void CopyFullHashMap(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE15CopyFullHashMapERS4_ */
	ElemType_t & Element(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE7ElementEi */
	const ElemType_t  & Element(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE7ElementEi */
	ElemType_t & operator[](class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorEixEi */
	const ElemType_t  & operator[](const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorEixEi */
	KeyType_t & Key(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE3KeyEi */
	const KeyType_t  & Key(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE3KeyEi */
	IndexType_t Count(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE5CountEv */
	IndexType_t FirstElement(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12FirstElementEv */
	IndexType_t MaxElement(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE10MaxElementEv */
	bool IsValidIndex(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12IsValidIndexEi */
	IndexType_t InvalidIndex(void); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12InvalidIndexEv */
	IndexType_t Insert(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE6InsertERKS1_ */
	IndexType_t Insert(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE6InsertERKS1_RKi */
	int InsertOrReplace(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE15InsertOrReplaceERKS1_ */
	int InsertOrReplace(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE15InsertOrReplaceERKS1_RKi */
	int InsertWithDupes(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE15InsertWithDupesERKS1_RKi */
	int FindOrInsert(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12FindOrInsertERKS1_ */
	int FindOrInsert(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12FindOrInsertERKS1_RKi */
	int Find(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE4FindERKS1_ */
	bool HasElement(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE10HasElementERKS1_ */
	/* <782ae> ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE14EnsureCapacityEi */
	const ElemType_t  & FindElement(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE11FindElementERKS1_RKi */
	/* <7661e> ../public/tier0/utlhashmap.h:677 */
	void RemoveAt(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE8RemoveAtEi */
	bool Remove(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE6RemoveERKS1_ */
	void RemoveAll(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE9RemoveAllEv */
	void Purge(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE22PurgeAndDeleteElementsEv */
	void Swap(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> &); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE4SwapERS4_ */
	size_t AllocSize(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE9AllocSizeEv */
	int InsertUnconstructed(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, const KeyType_t  &, int *, bool); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE19InsertUnconstructedERKS1_Pib */
	IndexType_t FreeNodeIDToIndex(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE17FreeNodeIDToIndexEi */
	IndexType_t FreeNodeIndexToID(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE17FreeNodeIndexToIDEi */
	bool IsFreeNodeID(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12IsFreeNodeIDEi */
	int FindInBucket(const class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>  *, int, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE12FindInBucketEiRKS1_ */
	int AllocNode(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE9AllocNodeEv */
	void RehashNodesInBucket(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE19RehashNodesInBucketEi */
	void LinkNodeIntoBucket(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE18LinkNodeIntoBucketEii */
	void UnlinkNodeFromBucket(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, int, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE20UnlinkNodeFromBucketEii */
	bool RemoveNodeFromBucket(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *, IndexType_t, int); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE20RemoveNodeFromBucketEii */
	void IncrementalRehash(class CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci30FastCaselessStringEqualFunctor29FastCaselessStringHashFunctorE17IncrementalRehashEv */
	void CUtlHashMap(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorEC4Ev */
	void CUtlHashMap(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorEC4Ei */
	void ~CUtlHashMap(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorED4Ev */
	void CopyFullHashMap(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE15CopyFullHashMapERS4_ */
	ElemType_t & Element(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE7ElementEi */
	const ElemType_t  & Element(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE7ElementEi */
	ElemType_t & operator[](class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorEixEi */
	const ElemType_t  & operator[](const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorEixEi */
	KeyType_t & Key(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE3KeyEi */
	const KeyType_t  & Key(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE3KeyEi */
	IndexType_t Count(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE5CountEv */
	IndexType_t FirstElement(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12FirstElementEv */
	IndexType_t MaxElement(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE10MaxElementEv */
	bool IsValidIndex(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12IsValidIndexEi */
	IndexType_t InvalidIndex(void); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12InvalidIndexEv */
	IndexType_t Insert(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE6InsertERKS1_ */
	IndexType_t Insert(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE6InsertERKS1_RKi */
	int InsertOrReplace(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE15InsertOrReplaceERKS1_ */
	int InsertOrReplace(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE15InsertOrReplaceERKS1_RKi */
	int InsertWithDupes(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE15InsertWithDupesERKS1_RKi */
	int FindOrInsert(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12FindOrInsertERKS1_ */
	int FindOrInsert(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12FindOrInsertERKS1_RKi */
	int Find(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE4FindERKS1_ */
	bool HasElement(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE10HasElementERKS1_ */
	/* <78868> ../public/tier0/utlhashmap.h:464 */
	void EnsureCapacity(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE14EnsureCapacityEi */
	const ElemType_t  & FindElement(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, const KeyType_t  &, const ElemType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE11FindElementERKS1_RKi */
	void RemoveAt(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE8RemoveAtEi */
	bool Remove(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE6RemoveERKS1_ */
	void RemoveAll(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE9RemoveAllEv */
	void Purge(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE22PurgeAndDeleteElementsEv */
	void Swap(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> &); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE4SwapERS4_ */
	size_t AllocSize(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE9AllocSizeEv */
	int InsertUnconstructed(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, const KeyType_t  &, int *, bool); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE19InsertUnconstructedERKS1_Pib */
	IndexType_t FreeNodeIDToIndex(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE17FreeNodeIDToIndexEi */
	IndexType_t FreeNodeIndexToID(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE17FreeNodeIndexToIDEi */
	bool IsFreeNodeID(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, IndexType_t); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12IsFreeNodeIDEi */
	int FindInBucket(const class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>  *, int, const KeyType_t  &); /* linkage=_ZNK11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE12FindInBucketEiRKS1_ */
	int AllocNode(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE9AllocNodeEv */
	void RehashNodesInBucket(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE19RehashNodesInBucketEi */
	void LinkNodeIntoBucket(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE18LinkNodeIntoBucketEii */
	void UnlinkNodeFromBucket(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, int, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE20UnlinkNodeFromBucketEii */
	bool RemoveNodeFromBucket(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *, IndexType_t, int); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE20RemoveNodeFromBucketEii */
	void IncrementalRehash(class CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> *); /* linkage=_ZN11CUtlHashMapIPKci18StringEqualFunctor17StringHashFunctorE17IncrementalRehashEv */
};

// <00D9D8AB> ../public/tier0/utlhashmap.h:143
void CUtlHashMap(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this)
{
} /* size: 0 */

// <00D9D892> ../public/tier0/utlhashmap.h:143
inline void CUtlHashMap(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this)
{
} /* size: 0 */

// <00D9D87B> ../public/tier0/utlhashmap.h:143
void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::CUtlHashMap()
{
} /* size: 0 */

// <00D9D862> ../public/tier0/utlhashmap.h:143
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::CUtlHashMap()
{
} /* size: 0 */

// <01BA5BFF> ../public/tier0/utlhashmap.h:143
void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::CUtlHashMap()
{
} /* size: 0 */

// <01BA5BE6> ../public/tier0/utlhashmap.h:143
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::CUtlHashMap()
{
} /* size: 0 */

// <0004B117> ../public/tier0/utlhashmap.h:143
void CUtlHashMap<char const::CUtlHashMap()
{
} /* size: 0 */

// <0004B0FE> ../public/tier0/utlhashmap.h:143
inline void CUtlHashMap<char const::CUtlHashMap()
{
} /* size: 0 */

// <0004BB17> ../public/tier0/utlhashmap.h:153
void CUtlHashMap<char const::CUtlHashMap(int cElementsExpected)
{
} /* size: 0 */

// <0004BAF2> ../public/tier0/utlhashmap.h:153
inline void CUtlHashMap<char const::CUtlHashMap(int cElementsExpected)
{
} /* size: 0 */

// <00B15B03> ../public/tier0/utlhashmap.h:163
void ~CUtlHashMap(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this)
{
} /* size: 0 */

// <00B15AEA> ../public/tier0/utlhashmap.h:163
inline void ~CUtlHashMap(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this)
{
} /* size: 0 */

// <00B15A9F> ../public/tier0/utlhashmap.h:163
void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::~CUtlHashMap()
{
} /* size: 0 */

// <00B15A86> ../public/tier0/utlhashmap.h:163
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::~CUtlHashMap()
{
} /* size: 0 */

// <01BA5BCF> ../public/tier0/utlhashmap.h:163
void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::~CUtlHashMap()
{
} /* size: 0 */

// <01BA5BB6> ../public/tier0/utlhashmap.h:163
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::~CUtlHashMap()
{
} /* size: 0 */

// <0004BADB> ../public/tier0/utlhashmap.h:163
void CUtlHashMap<char const::~CUtlHashMap()
{
} /* size: 0 */

// <0004BAC2> ../public/tier0/utlhashmap.h:163
inline void CUtlHashMap<char const::~CUtlHashMap()
{
} /* size: 0 */

// <00D9A5F7> ../public/tier0/utlhashmap.h:179
inline void Element(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this, IndexType_t i)
{
} /* size: 0 */

// <00D9A352> ../public/tier0/utlhashmap.h:179
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::Element(IndexType_t i)
{
} /* size: 0 */

// <00D9D631> ../public/tier0/utlhashmap.h:180
inline void operator[](const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this, IndexType_t i)
{
} /* size: 0 */

// <01BA5856> ../public/tier0/utlhashmap.h:180
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::operator[](IndexType_t i)
{
} /* size: 0 */

// <0004B42C> ../public/tier0/utlhashmap.h:180
inline void CUtlHashMap<char const::operator[](IndexType_t i)
{
} /* size: 0 */

// <0004B3E5> ../public/tier0/utlhashmap.h:182
inline void CUtlHashMap<char const::Key(IndexType_t i)
{
} /* size: 0 */

// <0004AB03> ../public/tier0/utlhashmap.h:186
inline void CUtlHashMap<char const::Count()
{
} /* size: 0 */

// <00D9D2B2> ../public/tier0/utlhashmap.h:190
inline void FirstElement(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this)
{
} /* size: 0 */

// <00D9A339> ../public/tier0/utlhashmap.h:190
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FirstElement()
{
} /* size: 0 */

// <01BA569C> ../public/tier0/utlhashmap.h:190
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FirstElement()
{
} /* size: 0 */

// <0004B08F> ../public/tier0/utlhashmap.h:190
inline void CUtlHashMap<char const::FirstElement()
{
} /* size: 0 */

// <00D9D299> ../public/tier0/utlhashmap.h:193
inline void MaxElement(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this)
{
} /* size: 0 */

// <00D9A320> ../public/tier0/utlhashmap.h:193
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::MaxElement()
{
} /* size: 0 */

// <01BA5683> ../public/tier0/utlhashmap.h:193
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::MaxElement()
{
} /* size: 0 */

// <0004B076> ../public/tier0/utlhashmap.h:193
inline void CUtlHashMap<char const::MaxElement()
{
} /* size: 0 */

// <00D9D276> ../public/tier0/utlhashmap.h:196
inline void IsValidIndex(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this, IndexType_t i)
{
} /* size: 0 */

// <00D9A2FD> ../public/tier0/utlhashmap.h:196
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::IsValidIndex(IndexType_t i)
{
} /* size: 0 */

// <01BA5660> ../public/tier0/utlhashmap.h:196
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::IsValidIndex(IndexType_t i)
{
} /* size: 0 */

// <0004B2DC> ../public/tier0/utlhashmap.h:196
inline void CUtlHashMap<char const::IsValidIndex(IndexType_t i)
{
} /* size: 0 */

// <00D9D654> ../public/tier0/utlhashmap.h:199
inline void InvalidIndex(void)
{
} /* size: 0 */

// <01BA5879> ../public/tier0/utlhashmap.h:203
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Insert(const KeyType_t& key, const ElemType_t& insert)
{
} /* size: 0 */

// <0004B012> ../public/tier0/utlhashmap.h:203
inline void CUtlHashMap<char const::Insert(const KeyType_t& key, const ElemType_t& insert)
{
} /* size: 0 */

// <00DA3D5B> ../public/tier0/utlhashmap.h:224
// variables: 4
// function calls: 21
void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FindElement(const KeyType_t& key, const ElemType_t& defaultValue)
{
	IndexType_t i; // 226
	HashItem<unsigned int>(const unsigned int& item); // 121
	HashMapFunctor_t<unsigned int>::operator(
			const unsigned int& key);  // 571
	Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 574
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this,
			int i);  // 611
	{
		IndexType_t iNode; // 613
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 618
		CDefEquals<unsigned int>::operator(
				const unsigned int& lhs,
				const unsigned int& rhs);  // 618
	}
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FindInBucket(
			int iBucket,
			const KeyType_t& key);  // 578
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 575
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 589
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 591
	{
		int iNode2; // 593
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this,
				int i);  // 611
		{
			IndexType_t iNode; // 613
			CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
					int i);  // 618
			CDefEquals<unsigned int>::operator(
					const unsigned int& lhs,
					const unsigned int& rhs);  // 618
		}
		CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 593
	}
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::Find(
		const KeyType_t& key);  // 226
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::Element(
		int i);  // 179
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::Element(
		IndexType_t i);  // 229
} /* size: 338, variables: 1, inline expansions: 14 (483 bytes) */

// <00D9D767> ../public/tier0/utlhashmap.h:224
// variable: 1
inline void FindElement(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this, const KeyType_t& key, const ElemType_t& defaultValue)
{
	IndexType_t i; // 226
} /* size: 0, variables: 1 */

// <00D9D560> ../public/tier0/utlhashmap.h:224
// variable: 1
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FindElement(const KeyType_t& key, const ElemType_t& defaultValue)
{
	IndexType_t i; // 226
} /* size: 0, variables: 1 */

// <0004AAD1> ../public/tier0/utlhashmap.h:256
inline void CUtlHashMap<char const::AllocSize()
{
} /* size: 0 */

// <00D998FB> ../public/tier0/utlhashmap.h:270
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FreeNodeIDToIndex(IndexType_t i)
{
} /* size: 0 */

// <00D99801> ../public/tier0/utlhashmap.h:270
inline void FreeNodeIDToIndex(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this, IndexType_t i)
{
} /* size: 0 */

// <01BA356D> ../public/tier0/utlhashmap.h:270
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FreeNodeIDToIndex(IndexType_t i)
{
} /* size: 0 */

// <000450B6> ../public/tier0/utlhashmap.h:271
inline void CUtlHashMap<char const::FreeNodeIndexToID(IndexType_t i)
{
} /* size: 0 */

// <00D9A1A4> ../public/tier0/utlhashmap.h:272
inline void IsFreeNodeID(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this, IndexType_t i)
{
} /* size: 0 */

// <00D99C68> ../public/tier0/utlhashmap.h:272
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::IsFreeNodeID(IndexType_t i)
{
} /* size: 0 */

// <01BA52FE> ../public/tier0/utlhashmap.h:272
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::IsFreeNodeID(IndexType_t i)
{
} /* size: 0 */

// <000491DF> ../public/tier0/utlhashmap.h:272
inline void CUtlHashMap<char const::IsFreeNodeID(IndexType_t i)
{
} /* size: 0 */

// <00D9BC1F> ../public/tier0/utlhashmap.h:312
// variables: 15
// function calls: 87
void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::InsertUnconstructed(const KeyType_t& key, int* piNodeExistingIfDupe, bool bAllowDupes)
{
	uint32 hash; // 324
	int cBucketsToModAgainst; // 327
	int iBucket; // 328
	int iNewNode; // 355
	{
		int iBucket2; // 342
		IndexType_t iNode; // 343
		Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 342
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 342
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this,
				int i);  // 611
		{
			IndexType_t iNode; // 613
			CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
					int i);  // 618
			CDefEquals<unsigned int>::operator(
					const unsigned int& lhs,
					const unsigned int& rhs);  // 618
		}
		CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 343
	}
	Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 315
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::Count(); // 317
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
			int i);  // 808
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 809
	Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 825
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::IncrementalRehash(); // 801
	CVariableBitStringBase::Size(); // 342
	{
	}
	CVariableBitStringBase::GetInts(); // 343
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
			int i);  // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 537
		HashItem<unsigned int>(const unsigned int& item); // 121
		HashMapFunctor_t<unsigned int>::operator(
				const unsigned int& key);  // 542
		Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 647
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int i);  // 650
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 660
		CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::UnlinkNodeFromBucket(
					int iBucket,
					int iNodeToUnlink);  // 551
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int i);  // 636
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int i);  // 637
		CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::LinkNodeIntoBucket(
					int iBucket,
					int iNewNode);  // 554
	}
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::RehashNodesInBucket(
				int iBucketSrc);  // 812
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::IncrementalRehash(); // 321
	HashItem<unsigned int>(const unsigned int& item); // 121
	HashMapFunctor_t<unsigned int>::operator(
			const unsigned int& key);  // 324
	Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 327
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 328
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 331
	CVariableBitStringBase::GetInts(); // 343
	CVariableBitStringBase::Size(); // 342
	{
	}
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
			int i);  // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 537
		HashItem<unsigned int>(const unsigned int& item); // 121
		HashMapFunctor_t<unsigned int>::operator(
				const unsigned int& key);  // 542
		Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 647
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int i);  // 650
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 660
		CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::UnlinkNodeFromBucket(
					int iBucket,
					int iNodeToUnlink);  // 551
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int i);  // 636
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int i);  // 637
		CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::LinkNodeIntoBucket(
					int iBucket,
					int iNewNode);  // 554
	}
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::RehashNodesInBucket(
				int iBucketSrc);  // 333
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 335
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FreeNodeIDToIndex(
				IndexType_t i);  // 518
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
			int i);  // 518
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::AllocNode(); // 355
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
			int i);  // 356
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 357
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
			int i);  // 357
	Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 360
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 360
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
			int i);  // 636
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
			int i);  // 636
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
			int i);  // 637
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::LinkNodeIntoBucket(
				int iBucket,
				int iNewNode);  // 364
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsGrowable(); // 823
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::Grow(
		int num);  // 318
} /* size: 1575, variables: 4, inline expansions: 48 (1916 bytes) */

// <00D9A61A> ../public/tier0/utlhashmap.h:312
// variables: 15
// function calls: 87
void InsertUnconstructed(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this, const KeyType_t& key, int* piNodeExistingIfDupe, bool bAllowDupes)
{
	uint32 hash; // 324
	int cBucketsToModAgainst; // 327
	int iBucket; // 328
	int iNewNode; // 355
	{
		int iBucket2; // 342
		IndexType_t iNode; // 343
		Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 342
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 342
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this,
				int i);  // 611
		{
			IndexType_t iNode; // 613
			CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
					int i);  // 618
			CDefEquals<long long unsigned int>::operator(
					const long long unsigned int& lhs,
					const long long unsigned int& rhs);  // 618
		}
		FindInBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this,
				int iBucket,
				const KeyType_t& key);  // 343
	}
	Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 315
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::Count(); // 317
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
			int i);  // 808
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 809
	Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 825
	IncrementalRehash(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this); // 801
	CVariableBitStringBase::Size(); // 342
	{
	}
	CVariableBitStringBase::GetInts(); // 343
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
			int i);  // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 537
		HashItem<long long unsigned int>(const long long unsigned int& item); // 121
		HashMapFunctor_t<long long unsigned int>::operator(
				const long long unsigned int& key);  // 542
		Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 647
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int i);  // 650
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 660
		UnlinkNodeFromBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this,
					int iBucket,
					int iNodeToUnlink);  // 551
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int i);  // 636
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int i);  // 637
		LinkNodeIntoBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this,
					int iBucket,
					int iNewNode);  // 554
	}
	RehashNodesInBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this,
				int iBucketSrc);  // 812
	IncrementalRehash(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this); // 321
	HashItem<long long unsigned int>(const long long unsigned int& item); // 121
	HashMapFunctor_t<long long unsigned int>::operator(
			const long long unsigned int& key);  // 324
	Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 327
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 328
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 331
	CVariableBitStringBase::GetInts(); // 343
	CVariableBitStringBase::Size(); // 342
	{
	}
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
			int i);  // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 537
		HashItem<long long unsigned int>(const long long unsigned int& item); // 121
		HashMapFunctor_t<long long unsigned int>::operator(
				const long long unsigned int& key);  // 542
		Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 647
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int i);  // 650
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 660
		UnlinkNodeFromBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this,
					int iBucket,
					int iNodeToUnlink);  // 551
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int i);  // 636
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int i);  // 637
		LinkNodeIntoBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this,
					int iBucket,
					int iNewNode);  // 554
	}
	RehashNodesInBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this,
				int iBucketSrc);  // 333
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 335
	FreeNodeIDToIndex(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this,
				IndexType_t i);  // 518
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
			int i);  // 518
	AllocNode(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this); // 355
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
			int i);  // 356
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
			int i);  // 357
	CopyConstruct<long long unsigned int>(long long unsigned int* pMemory,
						const long long unsigned int& src);  // 357
	Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 360
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 360
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
			int i);  // 636
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::operator[](
			int i);  // 636
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
			int i);  // 637
	LinkNodeIntoBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this,
				int iBucket,
				int iNewNode);  // 364
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsGrowable(); // 823
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::Grow(
		int num);  // 318
} /* size: 1585, variables: 4, inline expansions: 48 (1878 bytes) */

// <01BA39CE> ../public/tier0/utlhashmap.h:312
// variables: 15
// function calls: 104
void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::InsertUnconstructed(const KeyType_t& key, int* piNodeExistingIfDupe, bool bAllowDupes)
{
	uint32 hash; // 324
	int cBucketsToModAgainst; // 327
	int iBucket; // 328
	int iNewNode; // 355
	{
		int iBucket2; // 342
		IndexType_t iNode; // 343
		Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 342
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 342
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this,
				int i);  // 611
		{
			IndexType_t iNode; // 613
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
					int i);  // 621
			operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this,
					int i);  // 618
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 618
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 618
			CUtlString::Get(); // 99
			CUtlString::String(); // 106
			CUtlString::Get(); // 99
			CUtlString::String(); // 106
			V_strcmp(const char* s1,
				const char* s2);  // 106
			CDefEquals<CUtlString>::operator(
					CUtlString lhs,
					CUtlString rhs);  // 618
			CUtlString::~CUtlString(); // 618
			CUtlString::~CUtlString(); // 618
		}
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 343
	}
	Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 315
	Count(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this); // 317
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
			int i);  // 808
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 809
	Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 825
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::IncrementalRehash(); // 801
	CVariableBitStringBase::Size(); // 342
	{
	}
	CVariableBitStringBase::GetInts(); // 343
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
			int i);  // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 537
		CUtlString::Get(); // 99
		CUtlString::String(); // 25
		HashMapFunctor_t<CUtlString>::operator(
				const CUtlString& strKey);  // 542
		Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 647
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int i);  // 650
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 660
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::UnlinkNodeFromBucket(
					int iBucket,
					int iNodeToUnlink);  // 551
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int i);  // 636
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 636
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int i);  // 637
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::LinkNodeIntoBucket(
					int iBucket,
					int iNewNode);  // 554
	}
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::RehashNodesInBucket(
				int iBucketSrc);  // 812
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::IncrementalRehash(); // 321
	CUtlString::Get(); // 99
	CUtlString::String(); // 25
	HashMapFunctor_t<CUtlString>::operator(
			const CUtlString& strKey);  // 324
	Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 327
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 328
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 331
	CVariableBitStringBase::GetInts(); // 343
	CVariableBitStringBase::Size(); // 342
	{
	}
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
			int i);  // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 537
		CUtlString::Get(); // 99
		CUtlString::String(); // 25
		HashMapFunctor_t<CUtlString>::operator(
				const CUtlString& strKey);  // 542
		Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 647
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int i);  // 650
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 660
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::UnlinkNodeFromBucket(
					int iBucket,
					int iNodeToUnlink);  // 551
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int i);  // 636
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
				int i);  // 636
		operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int i);  // 637
		CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::LinkNodeIntoBucket(
					int iBucket,
					int iNewNode);  // 554
	}
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::RehashNodesInBucket(
				int iBucketSrc);  // 333
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 335
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FreeNodeIDToIndex(
				IndexType_t i);  // 518
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
			int i);  // 518
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::AllocNode(); // 355
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
			int i);  // 356
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
			int i);  // 357
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1520
	CopyConstruct<CUtlString>(CUtlString* pMemory,
					const CUtlString& src);  // 357
	Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 360
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 360
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
			int i);  // 636
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
			int i);  // 636
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
			int i);  // 637
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::LinkNodeIntoBucket(
				int iBucket,
				int iNewNode);  // 364
	IsGrowable(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this); // 823
	IsExternallyAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this); // 859
	IsExternallyAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this); // 861
	Grow(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
		int num);  // 318
} /* size: 1782, variables: 4, inline expansions: 51 (1995 bytes) */

// <00047CD8> ../public/tier0/utlhashmap.h:312
// variables: 18
// function calls: 83
void CUtlHashMap<char const::InsertUnconstructed(const KeyType_t& key, int* piNodeExistingIfDupe, bool bAllowDupes)
{
	uint32 hash; // 324
	int cBucketsToModAgainst; // 327
	int iBucket; // 328
	int iNewNode; // 355
	{
		int iBucket2; // 342
		IndexType_t iNode; // 343
		CUtlVectorBase<CUtlHashMap<char const::Count(); // 342
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 342
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 611
		{
			IndexType_t iNode; // 613
			CUtlMemory<CUtlHashMap<char const::operator[](
					int i);  // 618
			V_strcmp(const char* s1,
				const char* s2);  // 127
			StringEqualFunctor::operator(
					const char* a,
					const char* b);  // 618
		}
		CUtlHashMap<char const::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 343
	}
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 315
	CUtlMemory<CUtlHashMap<char const::Count(); // 317
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 808
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 809
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 825
	CUtlHashMap<char const::IncrementalRehash(); // 801
	CVariableBitStringBase::Size(); // 342
	{
	}
	CVariableBitStringBase::GetInts(); // 343
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 537
		{
			uint32 c; // 354
		}
		StringHashFunctor::operator(
				const char* s);  // 542
		CUtlVectorBase<CUtlHashMap<char const::Count(); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 650
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 660
		CUtlHashMap<char const::UnlinkNodeFromBucket(
					int iBucket,
					int iNodeToUnlink);  // 551
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 637
		CUtlHashMap<char const::LinkNodeIntoBucket(
					int iBucket,
					int iNewNode);  // 554
	}
	CUtlHashMap<char const::RehashNodesInBucket(
				int iBucketSrc);  // 812
	CUtlHashMap<char const::IncrementalRehash(); // 321
	{
		uint32 c; // 354
	}
	StringHashFunctor::operator(
			const char* s);  // 324
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 327
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 328
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 331
	CVariableBitStringBase::GetInts(); // 343
	CVariableBitStringBase::Size(); // 342
	{
	}
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 537
		{
			uint32 c; // 354
		}
		StringHashFunctor::operator(
				const char* s);  // 542
		CUtlVectorBase<CUtlHashMap<char const::Count(); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 650
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 660
		CUtlHashMap<char const::UnlinkNodeFromBucket(
					int iBucket,
					int iNodeToUnlink);  // 551
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 637
		CUtlHashMap<char const::LinkNodeIntoBucket(
					int iBucket,
					int iNewNode);  // 554
	}
	CUtlHashMap<char const::RehashNodesInBucket(
				int iBucketSrc);  // 333
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 335
	CUtlHashMap<char const::FreeNodeIDToIndex(
				IndexType_t i);  // 518
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 518
	CUtlHashMap<char const::AllocNode(); // 355
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 356
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 357
	CopyConstruct<char const*>(const char ** pMemory,
					const char* const& src);  // 357
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 360
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 360
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 636
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 636
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 637
	CUtlHashMap<char const::LinkNodeIntoBucket(
				int iBucket,
				int iNewNode);  // 364
	CUtlMemory<CUtlHashMap<char const::IsGrowable(); // 823
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashMap<char const::Grow(
		int num);  // 318
} /* size: 1822, variables: 4, inline expansions: 47 (2099 bytes) */

// <00047106> ../public/tier0/utlhashmap.h:312
// variables: 8
// function calls: 42
void CUtlHashMap<char const::InsertUnconstructed(const KeyType_t& key, int* piNodeExistingIfDupe, bool bAllowDupes)
{
	uint32 hash; // 324
	int cBucketsToModAgainst; // 327
	int iBucket; // 328
	int iNewNode; // 355
	{
		int iBucket2; // 342
		IndexType_t iNode; // 343
		CUtlVectorBase<CUtlHashMap<char const::Count(); // 342
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 342
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 611
		{
			IndexType_t iNode; // 613
			CUtlMemory<CUtlHashMap<char const::operator[](
					int i);  // 618
			FastCaselessStringEqualFunctor::operator(
					const char* a,
					const char* b);  // 618
			CUtlMemory<CUtlHashMap<char const::operator[](
					int i);  // 621
		}
		CUtlHashMap<char const::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 343
	}
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 315
	CUtlMemory<CUtlHashMap<char const::Count(); // 317
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 808
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 809
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 825
	CUtlHashMap<char const::IncrementalRehash(); // 801
	CUtlHashMap<char const::IncrementalRehash(); // 321
	{
		uint32 c; // 366
	}
	FastCaselessStringHashFunctor::operator(
			const char* s);  // 324
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 327
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 331
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 328
	CUtlHashMap<char const::FreeNodeIDToIndex(
				IndexType_t i);  // 518
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 518
	CUtlHashMap<char const::AllocNode(); // 355
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 356
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 357
	CopyConstruct<char const*>(const char ** pMemory,
					const char* const& src);  // 357
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 360
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 360
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 636
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 636
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 637
	CUtlHashMap<char const::LinkNodeIntoBucket(
				int iBucket,
				int iNewNode);  // 364
	CUtlMemory<CUtlHashMap<char const::IsGrowable(); // 823
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashMap<char const::Grow(
		int num);  // 318
} /* size: 1072, variables: 4, inline expansions: 34 (926 bytes) */

// <0004B154> ../public/tier0/utlhashmap.h:398
// variables: 2
inline void CUtlHashMap<char const::FindOrInsert(const KeyType_t& key, const ElemType_t& insert)
{
	int iNodeExisting; // 400
	int iNodeInserted; // 401
} /* size: 0, variables: 2 */

// <00D9D7EF> ../public/tier0/utlhashmap.h:432
// variables: 2
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::InsertOrReplace(const KeyType_t& key, const ElemType_t& insert)
{
	int iNodeExisting; // 434
	int iNodeInserted; // 435
} /* size: 0, variables: 2 */

// <00D9D7A2> ../public/tier0/utlhashmap.h:432
// variables: 2
inline void InsertOrReplace(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this, const KeyType_t& key, const ElemType_t& insert)
{
	int iNodeExisting; // 434
	int iNodeInserted; // 435
} /* size: 0, variables: 2 */

// <01BA54A7> ../public/tier0/utlhashmap.h:432
// variables: 2
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::InsertOrReplace(const KeyType_t& key, const ElemType_t& insert)
{
	int iNodeExisting; // 434
	int iNodeInserted; // 435
} /* size: 0, variables: 2 */

// <0004B26B> ../public/tier0/utlhashmap.h:432
// variables: 2
inline void CUtlHashMap<char const::InsertOrReplace(const KeyType_t& key, const ElemType_t& insert)
{
	int iNodeExisting; // 434
	int iNodeInserted; // 435
} /* size: 0, variables: 2 */

// <00DA48C5> ../public/tier0/utlhashmap.h:464
// variables: 3
// function calls: 23
void EnsureCapacity(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this, int amount)
{
	int cBucketsNeeded; // 471
	int grow; // 478
	int iFirst; // 479
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsGrowable(); // 881
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::Node_t, int>::EnsureCapacity(
			int num);  // 466
	Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 469
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::NumAllocated(); // 782
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this); // 824
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::IsGrowable(); // 823
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
				int num);  // 479
	CUtlMemory<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<long this,
			int i);  // 481
	memset(void* __dest,
		int __ch,
		size_t __len);  // 481
	Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 497
	Count(const CUtlVectorBase<CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMa this); // 492
	EnsureCapacity(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this,
			int amount);  // 464
} /* size: 536, variables: 3, inline expansions: 23 (1657 bytes) */

// <00DA4307> ../public/tier0/utlhashmap.h:464
// variables: 3
// function calls: 23
void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::EnsureCapacity(int amount)
{
	int cBucketsNeeded; // 471
	int grow; // 478
	int iFirst; // 479
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsGrowable(); // 881
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::Node_t, int>::EnsureCapacity(
			int num);  // 466
	Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 469
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::NumAllocated(); // 782
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int, this); // 824
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::IsGrowable(); // 823
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
				int num);  // 479
	CUtlMemory<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned int,  this,
			int i);  // 481
	memset(void* __dest,
		int __ch,
		size_t __len);  // 481
	Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 497
	Count(const CUtlVectorBase<CUtlHashMap<unsigned int, CPhysicsFilter::Rule>::HashBucket_t, CUtlMemory<CUtlHashMap<unsigned this); // 492
	CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::EnsureCapacity(
			int amount);  // 464
} /* size: 536, variables: 3, inline expansions: 23 (1654 bytes) */

// <00D9A0A9> ../public/tier0/utlhashmap.h:464
// variables: 3
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::EnsureCapacity(int amount)
{
	int cBucketsNeeded; // 471
	int grow; // 478
	int iFirst; // 479
} /* size: 0, variables: 3 */

// <00D99E87> ../public/tier0/utlhashmap.h:464
// variables: 3
inline void EnsureCapacity(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this, int amount)
{
	int cBucketsNeeded; // 471
	int grow; // 478
	int iFirst; // 479
} /* size: 0, variables: 3 */

// <01BB3F01> ../public/tier0/utlhashmap.h:464
// variables: 3
// function calls: 23
void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::EnsureCapacity(int amount)
{
	int cBucketsNeeded; // 471
	int grow; // 478
	int iFirst; // 479
	IsGrowable(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this); // 881
	IsExternallyAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Nod this); // 888
	EnsureCapacity(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Node_t, i this,
			int num);  // 466
	Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 469
	NumAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this); // 782
	Base(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this); // 112
	Base(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this); // 824
	IsGrowable(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this); // 823
	IsExternallyAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this); // 859
	IsExternallyAllocated(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Has this); // 861
	Grow(const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
				int num);  // 479
	operator[](const CUtlMemory<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashBucke this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::HashB this,
			int i);  // 481
	memset(void* __dest,
		int __ch,
		size_t __len);  // 481
	Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 497
	Count(const CUtlVectorBase<CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >: this); // 492
	CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::EnsureCapacity(
			int amount);  // 464
} /* size: 536, variables: 3, inline expansions: 23 (1657 bytes) */

// <01BA3872> ../public/tier0/utlhashmap.h:464
// variables: 3
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::EnsureCapacity(int amount)
{
	int cBucketsNeeded; // 471
	int grow; // 478
	int iFirst; // 479
} /* size: 0, variables: 3 */

// <00078868> ../public/tier0/utlhashmap.h:464
// variables: 3
// function calls: 23
void CUtlHashMap<char const::EnsureCapacity(int amount)
{
	int cBucketsNeeded; // 471
	int grow; // 478
	int iFirst; // 479
	CUtlMemory<CUtlHashMap<char const::IsGrowable(); // 881
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlHashMap<char const::EnsureCapacity(
			int num);  // 466
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 469
	CUtlMemory<CUtlHashMap<char const::NumAllocated(); // 782
	CUtlMemory<CUtlHashMap<char const::Base(); // 112
	CUtlVectorBase<CUtlHashMap<char const::Base(); // 368
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 824
	CUtlMemory<CUtlHashMap<char const::IsGrowable(); // 823
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashMap<char const::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlHashMap<char const::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CUtlHashMap<char const::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CUtlHashMap<char const::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CUtlHashMap<char const::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CUtlHashMap<char const::AddMultipleToTail(
				int num);  // 479
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 481
	memset(void* __dest,
		int __ch,
		size_t __len);  // 481
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 497
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 492
	CUtlHashMap<char const::EnsureCapacity(
			int amount);  // 464
} /* size: 536, variables: 3, inline expansions: 23 (1657 bytes) */

// <00049D25> ../public/tier0/utlhashmap.h:464
// variables: 3
inline void CUtlHashMap<char const::EnsureCapacity(int amount)
{
	int cBucketsNeeded; // 471
	int grow; // 478
	int iFirst; // 479
} /* size: 0, variables: 3 */

// <00D99F41> ../public/tier0/utlhashmap.h:506
// variable: 1
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::AllocNode()
{
	int iNewNode; // 517
} /* size: 0, variables: 1 */

// <00D99D86> ../public/tier0/utlhashmap.h:506
// variable: 1
inline void AllocNode(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this)
{
	int iNewNode; // 517
} /* size: 0, variables: 1 */

// <01BA3771> ../public/tier0/utlhashmap.h:506
// variable: 1
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::AllocNode()
{
	int iNewNode; // 517
} /* size: 0, variables: 1 */

// <00045BD7> ../public/tier0/utlhashmap.h:506
// variable: 1
inline void CUtlHashMap<char const::AllocNode()
{
	int iNewNode; // 517
} /* size: 0, variables: 1 */

// <00D99FA9> ../public/tier0/utlhashmap.h:528
// variables: 5
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::RehashNodesInBucket(int iBucketSrc)
{
	IndexType_t iNode; // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
	}
} /* size: 0, variables: 1 */

// <00D99DAC> ../public/tier0/utlhashmap.h:528
// variables: 5
inline void RehashNodesInBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this, int iBucketSrc)
{
	IndexType_t iNode; // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
	}
} /* size: 0, variables: 1 */

// <01BA3797> ../public/tier0/utlhashmap.h:528
// variables: 5
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::RehashNodesInBucket(int iBucketSrc)
{
	IndexType_t iNode; // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
	}
} /* size: 0, variables: 1 */

// <00045BFD> ../public/tier0/utlhashmap.h:528
// variables: 5
inline void CUtlHashMap<char const::RehashNodesInBucket(int iBucketSrc)
{
	IndexType_t iNode; // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
	}
} /* size: 0, variables: 1 */

// <00045456> ../public/tier0/utlhashmap.h:528
// variables: 6
// function calls: 19
void CUtlHashMap<char const::RehashNodesInBucket(int iBucketSrc)
{
	IndexType_t iNode; // 534
	{
		IndexType_t iNodeNext; // 537
		const KeyType_t& key; // 541
		uint32 hash; // 542
		int iBucketDest; // 543
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 537
		{
			uint32 c; // 366
		}
		FastCaselessStringHashFunctor::operator(
				const char* s);  // 542
		CUtlVectorBase<CUtlHashMap<char const::Count(); // 543
		ModPowerOfTwo<unsigned int, int>(unsigned int a,
						int b);  // 543
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 650
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 660
		CUtlHashMap<char const::UnlinkNodeFromBucket(
					int iBucket,
					int iNodeToUnlink);  // 551
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 636
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 637
		CUtlHashMap<char const::LinkNodeIntoBucket(
					int iBucket,
					int iNewNode);  // 554
	}
	CVariableBitStringBase::Size(); // 342
	{
	}
	CVariableBitStringBase::GetInts(); // 343
	CBitStringT<CVariableBitStringBase>::SetBit(
		int bitNum);  // 531
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 534
} /* size: 490, variables: 1, inline expansions: 5 (100 bytes) */

// <00D9D65B> ../public/tier0/utlhashmap.h:565
// variables: 6
inline void Find(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this, const KeyType_t& key)
{
	uint32 hash; // 571
	int cBucketsToModAgainst; // 574
	int iBucket; // 575
	int iNode; // 578
	IndexType_t cMinBucketsToModAgainst; // 583
	{
		int iNode2; // 593
	}
} /* size: 0, variables: 5 */

// <00D9A375> ../public/tier0/utlhashmap.h:565
// variables: 6
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::Find(const KeyType_t& key)
{
	uint32 hash; // 571
	int cBucketsToModAgainst; // 574
	int iBucket; // 575
	int iNode; // 578
	IndexType_t cMinBucketsToModAgainst; // 583
	{
		int iNode2; // 593
	}
} /* size: 0, variables: 5 */

// <01BA58AA> ../public/tier0/utlhashmap.h:565
// variables: 6
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Find(const KeyType_t& key)
{
	uint32 hash; // 571
	int cBucketsToModAgainst; // 574
	int iBucket; // 575
	int iNode; // 578
	IndexType_t cMinBucketsToModAgainst; // 583
	{
		int iNode2; // 593
	}
} /* size: 0, variables: 5 */

// <0004B2FF> ../public/tier0/utlhashmap.h:565
// variables: 6
inline void CUtlHashMap<char const::Find(const KeyType_t& key)
{
	uint32 hash; // 571
	int cBucketsToModAgainst; // 574
	int iBucket; // 575
	int iNode; // 578
	IndexType_t cMinBucketsToModAgainst; // 583
	{
		int iNode2; // 593
	}
} /* size: 0, variables: 5 */

// <00D9A4D6> ../public/tier0/utlhashmap.h:609
// variable: 1
inline void FindInBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_ this, int iBucket, const KeyType_t& key)
{
	{
		IndexType_t iNode; // 613
	}
} /* size: 0 */

// <00D99F67> ../public/tier0/utlhashmap.h:609
// variable: 1
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::FindInBucket(int iBucket, const KeyType_t& key)
{
	{
		IndexType_t iNode; // 613
	}
} /* size: 0 */

// <01BA5555> ../public/tier0/utlhashmap.h:609
// variable: 1
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::FindInBucket(int iBucket, const KeyType_t& key)
{
	{
		IndexType_t iNode; // 613
	}
} /* size: 0 */

// <00049262> ../public/tier0/utlhashmap.h:609
// variable: 1
inline void CUtlHashMap<char const::FindInBucket(int iBucket, const KeyType_t& key)
{
	{
		IndexType_t iNode; // 613
	}
} /* size: 0 */

// <00D99ED4> ../public/tier0/utlhashmap.h:633
void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::LinkNodeIntoBucket(int iBucket, int iNewNode)
{
} /* size: 0 */

// <00D99D53> ../public/tier0/utlhashmap.h:633
void LinkNodeIntoBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this, int iBucket, int iNewNode)
{
} /* size: 0 */

// <01BA3705> ../public/tier0/utlhashmap.h:633
void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::LinkNodeIntoBucket(int iBucket, int iNewNode)
{
} /* size: 0 */

// <00045B6B> ../public/tier0/utlhashmap.h:633
void CUtlHashMap<char const::LinkNodeIntoBucket(int iBucket, int iNewNode)
{
} /* size: 0 */

// <00D99974> ../public/tier0/utlhashmap.h:645
// variables: 2
void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::UnlinkNodeFromBucket(int iBucket, int iNodeToUnlink)
{
	int iNodeNext; // 647
	int iNode; // 650
} /* size: 0, variables: 2 */

// <00D99825> ../public/tier0/utlhashmap.h:645
// variables: 2
void UnlinkNodeFromBucket(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this, int iBucket, int iNodeToUnlink)
{
	int iNodeNext; // 647
	int iNode; // 650
} /* size: 0, variables: 2 */

// <01BA3591> ../public/tier0/utlhashmap.h:645
// variables: 2
void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::UnlinkNodeFromBucket(int iBucket, int iNodeToUnlink)
{
	int iNodeNext; // 647
	int iNode; // 650
} /* size: 0, variables: 2 */

// <000450DA> ../public/tier0/utlhashmap.h:645
// variables: 2
void CUtlHashMap<char const::UnlinkNodeFromBucket(int iBucket, int iNodeToUnlink)
{
	int iNodeNext; // 647
	int iNode; // 650
} /* size: 0, variables: 2 */

// <0007661E> ../public/tier0/utlhashmap.h:677
// variables: 4
// function calls: 32
void CUtlHashMap<char const::RemoveAt(IndexType_t i)
{
	uint32 hash; // 686
	int cBucketsToModAgainst; // 687
	int iBucket; // 688
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 679
	{
		uint32 c; // 366
	}
	FastCaselessStringHashFunctor::operator(
			const char* s);  // 686
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 687
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 688
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 718
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 739
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 725
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 660
	CUtlHashMap<char const::UnlinkNodeFromBucket(
				int iBucket,
				int iNodeToUnlink);  // 724
	Destruct<char const*>(const char ** pMemory); // 725
	Destruct<int>(int* pMemory); // 726
	CUtlHashMap<char const::FreeNodeIndexToID(
				IndexType_t i);  // 729
	CUtlHashMap<char const::RemoveNodeFromBucket(
				IndexType_t iBucket,
				int iNodeToRemove);  // 689
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 696
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 698
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 718
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 739
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 725
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 647
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 660
	CUtlHashMap<char const::UnlinkNodeFromBucket(
				int iBucket,
				int iNodeToUnlink);  // 724
	Destruct<char const*>(const char ** pMemory); // 725
	Destruct<int>(int* pMemory); // 726
	CUtlHashMap<char const::FreeNodeIndexToID(
				IndexType_t i);  // 729
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 734
	CUtlHashMap<char const::RemoveNodeFromBucket(
				IndexType_t iBucket,
				int iNodeToRemove);  // 700
	{
	}
	CUtlHashMap<char const::RemoveAt(
		IndexType_t i);  // 677
} /* size: 709, variables: 3, inline expansions: 32 (865 bytes) */

// <0004AE4D> ../public/tier0/utlhashmap.h:677
// variables: 5
inline void CUtlHashMap<char const::RemoveAt(IndexType_t i)
{
	const char   __FUNCTION__; // 40644
	uint32 hash; // 686
	int cBucketsToModAgainst; // 687
	int iBucket; // 688
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 681
	}
} /* size: 0, variables: 4 */

// <00046C1C> ../public/tier0/utlhashmap.h:716
// variable: 1
inline void CUtlHashMap<char const::RemoveNodeFromBucket(IndexType_t iBucket, int iNodeToRemove)
{
	IndexType_t iNode; // 718
} /* size: 0, variables: 1 */

// <0004AF87> ../public/tier0/utlhashmap.h:750
// variable: 1
inline void CUtlHashMap<char const::RemoveAll()
{
	{
		int i; // 754
	}
} /* size: 0 */

// <00D9D83C> ../public/tier0/utlhashmap.h:775
// variable: 1
inline void Purge(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this)
{
	{
		int i; // 779
	}
} /* size: 0 */

// <00D9D53A> ../public/tier0/utlhashmap.h:775
// variable: 1
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::Purge()
{
	{
		int i; // 779
	}
} /* size: 0 */

// <01BA5920> ../public/tier0/utlhashmap.h:775
// variable: 1
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::Purge()
{
	{
		int i; // 779
	}
} /* size: 0 */

// <0004B12E> ../public/tier0/utlhashmap.h:775
// variable: 1
inline void CUtlHashMap<char const::Purge()
{
	{
		int i; // 779
	}
} /* size: 0 */

// <00D9A037> ../public/tier0/utlhashmap.h:801
inline void CUtlHashMap<unsigned int, CPhysicsFilter::Rule, CDefEquals<unsigned int>, HashMapFunctor_t<unsigned int> >::IncrementalRehash()
{
} /* size: 0 */

// <00D99E15> ../public/tier0/utlhashmap.h:801
inline void IncrementalRehash(const CUtlHashMap<long long unsigned int, CPhysicsFilter::Rule, CDefEquals<long long unsigned int>, HashMapFunctor_t<long this)
{
} /* size: 0 */

// <01BA3800> ../public/tier0/utlhashmap.h:801
inline void CUtlHashMap<CUtlString, VertexColor_t, CDefEquals<CUtlString>, HashMapFunctor_t<CUtlString> >::IncrementalRehash()
{
} /* size: 0 */

// <00045C66> ../public/tier0/utlhashmap.h:801
inline void CUtlHashMap<char const::IncrementalRehash()
{
} /* size: 0 */

// <0004AFEC> ../public/tier0/utlhashmap.h:837
void CUtlHashMap<char const::Swap(CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>& that)
{
} /* size: 0 */

