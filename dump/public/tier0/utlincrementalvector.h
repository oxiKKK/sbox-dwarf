
//
// public/tier0/utlincrementalvector.h
//
//	referenced by: libengine2.so
//
//	functions: 10
//	class: 1
//

// <00B2F371> ../public/tier0/utlincrementalvector.h:23
void CUtlIncrementalVector(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this)
{
} /* size: 0 */

// <00B2F355> ../public/tier0/utlincrementalvector.h:23
inline void CUtlIncrementalVector(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this)
{
} /* size: 0 */

// <00B2F33E> ../public/tier0/utlincrementalvector.h:23
void ~CUtlIncrementalVector(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this)
{
} /* size: 0 */

// <00B2F322> ../public/tier0/utlincrementalvector.h:23
inline void ~CUtlIncrementalVector(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this)
{
} /* size: 0 */

// <00ABCE68> ../public/tier0/utlincrementalvector.h:23
// member functions: 62
// member variable: 1
// class size: 32
class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int> > {
	/* ../public/tier0/utlincrementalvector.h:26 */
	CPhysAggregateInstance** Base(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	/* ../public/tier0/utlincrementalvector.h:27 */
	CPhysAggregateInstance* const* Base(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns);
	/* ../public/tier0/utlincrementalvector.h:29 */
	typedef class CPhysAggregateInstance * * iterator;
	/* ../public/tier0/utlincrementalvector.h:32 */
	iterator begin(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	/* ../public/tier0/utlincrementalvector.h:30 */
	typedef class CPhysAggregateInstance * const * const_iterator;
	/* ../public/tier0/utlincrementalvector.h:33 */
	const_iterator begin(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns);
	/* ../public/tier0/utlincrementalvector.h:34 */
	iterator end(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	/* ../public/tier0/utlincrementalvector.h:35 */
	const_iterator end(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns);
	/* ../public/tier0/utlincrementalvector.h:37 */
	void SetCount(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int);
	/* ../public/tier0/utlincrementalvector.h:53 */
	int Count(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns);
	/* ../public/tier0/utlincrementalvector.h:58 */
	CPhysAggregateInstance* operator[](CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int);
	/* ../public/tier0/utlincrementalvector.h:64 */
	const CPhysAggregateInstance* operator[](const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns, int);
	/* ../public/tier0/utlincrementalvector.h:70 */
	CPhysAggregateInstance* AddToTail(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, CPhysAggregateInstance* );
	/* ../public/tier0/utlincrementalvector.h:79 */
	void MoveToHead(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, CPhysAggregateInstance* );
	/* ../public/tier0/utlincrementalvector.h:91 */
	void SwapItems(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int, int);
	/* ../public/tier0/utlincrementalvector.h:104 */
	void InsertNewMultipleBefore(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int, int);
	/* ../public/tier0/utlincrementalvector.h:122 */
	void RemoveAndDeleteMultiple(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int, int);
	/* ../public/tier0/utlincrementalvector.h:140 */
	void RemoveAndDelete(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int);
	/* ../public/tier0/utlincrementalvector.h:154 */
	void FastRemove(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int);
	/* ../public/tier0/utlincrementalvector.h:165 */
	CPhysAggregateInstance* FindAndFastRemove(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, CPhysAggregateInstance* );
	/* ../public/tier0/utlincrementalvector.h:173 */
	int Find(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns, const CPhysAggregateInstance* );
	/* ../public/tier0/utlincrementalvector.h:178 */
	bool Has(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns, const CPhysAggregateInstance* );
	/* ../public/tier0/utlincrementalvector.h:184 */
	void FastRemoveAndDelete(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, CPhysAggregateInstance* );
	/* ../public/tier0/utlincrementalvector.h:191 */
	void PurgeAndDeleteElements(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	/* ../public/tier0/utlincrementalvector.h:197 */
	void Validate(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	/* ../public/tier0/utlincrementalvector.h:207 */
	void Purge(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	/* ../public/tier0/utlincrementalvector.h:212 */
	bool IsEmpty(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns);
	/* ../public/tier0/utlincrementalvector.h:217 */
	CPhysAggregateInstance* Tail(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	/* ../public/tier0/utlincrementalvector.h:222 */
	void EnsureCapacity(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int);
	/* ../public/tier0/utlincrementalvector.h:227 */
	void Sort(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int (*)(const ElemType_t* , const ElemType_t* ));
	/* ../public/tier0/utlincrementalvector.h:28 */
	typedef class CPhysAggregateInstance * ElemType_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlincrementalvector.h:235 */
	void Swap(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
protected:
	CUtlVector<CPhysAggregateInstance*, CUtlMemory<CPhysAggregateInstance*, int> > m_data; /* 0 32 */
	void ~CUtlIncrementalVector(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	void CUtlIncrementalVector(CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*);
	class CPhysAggregateInstance * * Base(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE4BaseEv */
	class CPhysAggregateInstance * const * Base(const class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns); /* linkage=_ZNK21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE4BaseEv */
	iterator begin(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE5beginEv */
	const_iterator begin(const class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns); /* linkage=_ZNK21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE5beginEv */
	iterator end(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE3endEv */
	const_iterator end(const class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns); /* linkage=_ZNK21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE3endEv */
	void SetCount(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE8SetCountEi */
	int Count(const class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns); /* linkage=_ZNK21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE5CountEv */
	class CPhysAggregateInstance * operator[](class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEEixEi */
	const class CPhysAggregateInstance  * operator[](const class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns, int); /* linkage=_ZNK21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEEixEi */
	class CPhysAggregateInstance * AddToTail(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, class CPhysAggregateInstance *); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE9AddToTailES3_ */
	void MoveToHead(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, class CPhysAggregateInstance *); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE10MoveToHeadES3_ */
	void SwapItems(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int, int); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE9SwapItemsEii */
	void InsertNewMultipleBefore(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int, int); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE23InsertNewMultipleBeforeEii */
	void RemoveAndDeleteMultiple(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int, int); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE23RemoveAndDeleteMultipleEii */
	void RemoveAndDelete(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE15RemoveAndDeleteEi */
	void FastRemove(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE10FastRemoveEi */
	class CPhysAggregateInstance * FindAndFastRemove(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, class CPhysAggregateInstance *); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE17FindAndFastRemoveES3_ */
	int Find(const class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns, const class CPhysAggregateInstance  *); /* linkage=_ZNK21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE4FindEPKS0_ */
	bool Has(const class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns, const class CPhysAggregateInstance  *); /* linkage=_ZNK21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE3HasEPKS0_ */
	void FastRemoveAndDelete(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, class CPhysAggregateInstance *); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE19FastRemoveAndDeleteES3_ */
	void PurgeAndDeleteElements(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE22PurgeAndDeleteElementsEv */
	void Validate(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE8ValidateEv */
	void Purge(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE5PurgeEv */
	bool IsEmpty(const class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns); /* linkage=_ZNK21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE7IsEmptyEv */
	class CPhysAggregateInstance * Tail(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE4TailEv */
	void EnsureCapacity(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE14EnsureCapacityEi */
	void Sort(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, int (*)(const ElemType_t  *, const ElemType_t  *)); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE4SortEPFiPKS3_S7_E */
	void Swap(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*, class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEE4SwapERS5_ */
	void ~CUtlIncrementalVector(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEED4Ev */
	void CUtlIncrementalVector(class CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateInstance*); /* linkage=_ZN21CUtlIncrementalVectorI22CPhysAggregateInstanceNS0_15CWorldIndexPredE10CUtlMemoryIPS0_iEEC4Ev */
};

// <00B15205> ../public/tier0/utlincrementalvector.h:53
inline void Count(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggreg this)
{
} /* size: 0 */

// <00B1539E> ../public/tier0/utlincrementalvector.h:58
inline void operator[](const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this, int i)
{
} /* size: 0 */

// <00B1537B> ../public/tier0/utlincrementalvector.h:70
inline void AddToTail(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this, CPhysAggregateInstance* p)
{
} /* size: 0 */

// <00B1298D> ../public/tier0/utlincrementalvector.h:154
// variable: 1
inline void FastRemove(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this, int elem)
{
	CPhysAggregateInstance* pLast; // 158
} /* size: 0, variables: 1 */

// <00B1534C> ../public/tier0/utlincrementalvector.h:165
// variable: 1
inline void FindAndFastRemove(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this, CPhysAggregateInstance* p)
{
	int nIndex; // 167
} /* size: 0, variables: 1 */

// <00B12A0A> ../public/tier0/utlincrementalvector.h:197
inline void Validate(const CUtlIncrementalVector<CPhysAggregateInstance, CPhysAggregateInstance::CWorldIndexPred, CUtlMemory<CPhysAggregateIns this)
{
} /* size: 0 */

