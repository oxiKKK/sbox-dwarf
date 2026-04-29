
//
// public/tier0/utlvectorultraconservative.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 76
//	classes: 15
//

// <00983BB5> ../public/tier0/utlvectorultraconservative.h:20
// member functions: 4
// class size: 1
class CUtlVectorUltraConservativeAllocator {
	/* ../public/tier0/utlvectorultraconservative.h:23 */
	void* Alloc(size_t);
	/* ../public/tier0/utlvectorultraconservative.h:28 */
	void* Realloc(void* , size_t);
	/* ../public/tier0/utlvectorultraconservative.h:33 */
	void Free(void* );
	/* ../public/tier0/utlvectorultraconservative.h:38 */
	size_t GetSize(void* );
};

// <064E0EAB> ../public/tier0/utlvectorultraconservative.h:23
inline void* Alloc(size_t nSize)
{
} /* size: 0 */

// <064E0E83> ../public/tier0/utlvectorultraconservative.h:28
inline void* Realloc(void* pMem, size_t nSize)
{
} /* size: 0 */

// <064E0E6B> ../public/tier0/utlvectorultraconservative.h:33
inline void Free(void* pMem)
{
} /* size: 0 */

// <064E0E53> ../public/tier0/utlvectorultraconservative.h:38
inline void GetSize(void* pMem)
{
} /* size: 0 */

// <00983C81> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	const char* * Base(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const char* const* Base(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	const char* & operator[](CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const char* const& operator[](const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	const char* & Element(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const char* const& Element(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef const char * * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const char * const * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , const char* const& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	const char* * AddToTailGetPtr(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , const char* const& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , const char* const& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , const char* const& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:343 */
	struct Data_t {
		int m_Size; /* 0 4 */
		const char * m_Elements[]; /* 8 0 */
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <00985C2E> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	CPhysConstraintData* Base(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CPhysConstraintData* Base(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	CPhysConstraintData& operator[](CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CPhysConstraintData& operator[](const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	CPhysConstraintData& Element(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CPhysConstraintData& Element(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef class CPhysConstraintData * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CPhysConstraintData * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CPhysConstraintData& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	CPhysConstraintData* AddToTailGetPtr(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CPhysConstraintData& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CPhysConstraintData& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CPhysConstraintData& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:343 */
	struct Data_t {
		int m_Size; /* 0 4 */
		CPhysConstraintData m_Elements[]; /* 8 0 */
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <00986170> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	const VPhysXJoint_t* * Base(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const VPhysXJoint_t* const* Base(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	const VPhysXJoint_t* & operator[](CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const VPhysXJoint_t* const& operator[](const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	const VPhysXJoint_t* & Element(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const VPhysXJoint_t* const& Element(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef const class VPhysXJoint_t * * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class VPhysXJoint_t * const * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const VPhysXJoint_t* const& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	const VPhysXJoint_t* * AddToTailGetPtr(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const VPhysXJoint_t* const& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const VPhysXJoint_t* const& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const VPhysXJoint_t* const& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>& );
	struct Data_t {
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <00986683> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	RnCollisionAttr_t* Base(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const RnCollisionAttr_t* Base(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	RnCollisionAttr_t& operator[](CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const RnCollisionAttr_t& operator[](const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	RnCollisionAttr_t& Element(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const RnCollisionAttr_t& Element(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef class RnCollisionAttr_t * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class RnCollisionAttr_t * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const RnCollisionAttr_t& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	RnCollisionAttr_t* AddToTailGetPtr(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const RnCollisionAttr_t& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const RnCollisionAttr_t& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const RnCollisionAttr_t& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& );
	struct Data_t {
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <00986B8A> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	CUtlStringToken* Base(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CUtlStringToken* Base(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	CUtlStringToken& operator[](CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CUtlStringToken& operator[](const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	CUtlStringToken& Element(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CUtlStringToken& Element(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef class CUtlStringToken * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CUtlStringToken * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlStringToken& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	CUtlStringToken* AddToTailGetPtr(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlStringToken& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlStringToken& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlStringToken& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& );
	struct Data_t {
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <00987085> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	const CPhysAggregateData* * Base(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CPhysAggregateData* const* Base(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	const CPhysAggregateData* & operator[](CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CPhysAggregateData* const& operator[](const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	const CPhysAggregateData* & Element(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CPhysAggregateData* const& Element(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef const class CPhysAggregateData * * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CPhysAggregateData * const * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CPhysAggregateData* const& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	const CPhysAggregateData* * AddToTailGetPtr(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CPhysAggregateData* const& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CPhysAggregateData* const& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CPhysAggregateData* const& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>& );
	struct Data_t {
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <009875A3> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 68
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	CStrongHandleVoid* Base(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CStrongHandleVoid* Base(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	CStrongHandleVoid& operator[](CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CStrongHandleVoid& operator[](const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	CStrongHandleVoid& Element(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CStrongHandleVoid& Element(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef class CStrongHandleVoid * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CStrongHandleVoid * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CStrongHandleVoid& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	CStrongHandleVoid* AddToTailGetPtr(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CStrongHandleVoid& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CStrongHandleVoid& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CStrongHandleVoid& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:343 */
	struct Data_t {
		int m_Size; /* 0 4 */
		CStrongHandleVoid m_Elements[]; /* 8 0 */
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int, int);
	void CUtlVectorUltraConservative(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEC4Ev */
	void ~CUtlVectorUltraConservative(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorED4Ev */
	class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> & operator=(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEaSERKS2_ */
	int Count(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE5CountEv */
	bool IsEmpty(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE7IsEmptyEv */
	class CStrongHandleVoid * Base(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE4BaseEv */
	const class CStrongHandleVoid  * Base(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE4BaseEv */
	int InvalidIndex(void); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE12InvalidIndexEv */
	bool IsValidIndex(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *, int); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE12IsValidIndexEi */
	class CStrongHandleVoid & operator[](class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEixEi */
	const class CStrongHandleVoid  & operator[](const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *, int); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEixEi */
	class CStrongHandleVoid & Element(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE7ElementEi */
	const class CStrongHandleVoid  & Element(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *, int); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE7ElementEi */
	class IntegerRangeIterator_t Indices(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE7IndicesEv */
	iterator begin(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE5beginEv */
	const_iterator begin(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE5beginEv */
	iterator end(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE3endEv */
	const_iterator end(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE3endEv */
	void EnsureCapacity(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE14EnsureCapacityEi */
	void EnsureCount(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE11EnsureCountEi */
	int AddToTail(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE9AddToTailEv */
	int AddToTail(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CStrongHandleVoid  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE9AddToTailERKS0_ */
	class CStrongHandleVoid * AddToTailGetPtr(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE15AddToTailGetPtrEv */
	void RemoveAll(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE9RemoveAllEv */
	void Purge(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE22PurgeAndDeleteElementsEv */
	void PurgeAndFreeElements(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE20PurgeAndFreeElementsEv */
	void FastRemove(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE10FastRemoveEi */
	void Remove(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE6RemoveEi */
	int Find(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *, const class CStrongHandleVoid  &); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE4FindERKS0_ */
	bool FindAndRemove(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CStrongHandleVoid  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE13FindAndRemoveERKS0_ */
	bool FindAndFastRemove(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CStrongHandleVoid  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE17FindAndFastRemoveERKS0_ */
	void CUtlVectorUltraConservative(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEC4ERKS2_ */
	void ShiftElementsLeft(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE17ShiftElementsLeftEii */
};

// <00AB2DBE> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	CPhysConstraintData* Base(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CPhysConstraintData* Base(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	CPhysConstraintData& operator[](CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CPhysConstraintData& operator[](const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	CPhysConstraintData& Element(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CPhysConstraintData& Element(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef class CPhysConstraintData * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CPhysConstraintData * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CPhysConstraintData& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	CPhysConstraintData* AddToTailGetPtr(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CPhysConstraintData& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CPhysConstraintData& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CPhysConstraintData& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>& );
	struct Data_t {
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <00AB4704> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 68
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	CStrongHandleVoid* Base(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CStrongHandleVoid* Base(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	CStrongHandleVoid& operator[](CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CStrongHandleVoid& operator[](const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	CStrongHandleVoid& Element(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CStrongHandleVoid& Element(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef class CStrongHandleVoid * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CStrongHandleVoid * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CStrongHandleVoid& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	CStrongHandleVoid* AddToTailGetPtr(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CStrongHandleVoid& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CStrongHandleVoid& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CStrongHandleVoid& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>& );
	struct Data_t {
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>* , int, int);
	void CUtlVectorUltraConservative(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEC4Ev */
	void ~CUtlVectorUltraConservative(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorED4Ev */
	class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> & operator=(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEaSERKS2_ */
	int Count(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE5CountEv */
	bool IsEmpty(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE7IsEmptyEv */
	class CStrongHandleVoid * Base(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE4BaseEv */
	const class CStrongHandleVoid  * Base(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE4BaseEv */
	int InvalidIndex(void); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE12InvalidIndexEv */
	bool IsValidIndex(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *, int); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE12IsValidIndexEi */
	class CStrongHandleVoid & operator[](class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEixEi */
	const class CStrongHandleVoid  & operator[](const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *, int); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEixEi */
	class CStrongHandleVoid & Element(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE7ElementEi */
	const class CStrongHandleVoid  & Element(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *, int); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE7ElementEi */
	class IntegerRangeIterator_t Indices(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE7IndicesEv */
	iterator begin(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE5beginEv */
	const_iterator begin(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE5beginEv */
	iterator end(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE3endEv */
	const_iterator end(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE3endEv */
	void EnsureCapacity(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE14EnsureCapacityEi */
	void EnsureCount(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE11EnsureCountEi */
	int AddToTail(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE9AddToTailEv */
	int AddToTail(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CStrongHandleVoid  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE9AddToTailERKS0_ */
	class CStrongHandleVoid * AddToTailGetPtr(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE15AddToTailGetPtrEv */
	void RemoveAll(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE9RemoveAllEv */
	void Purge(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE22PurgeAndDeleteElementsEv */
	void PurgeAndFreeElements(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE20PurgeAndFreeElementsEv */
	void FastRemove(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE10FastRemoveEi */
	void Remove(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE6RemoveEi */
	int Find(const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  *, const class CStrongHandleVoid  &); /* linkage=_ZNK27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE4FindERKS0_ */
	bool FindAndRemove(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CStrongHandleVoid  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE13FindAndRemoveERKS0_ */
	bool FindAndFastRemove(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CStrongHandleVoid  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE17FindAndFastRemoveERKS0_ */
	void CUtlVectorUltraConservative(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, const class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>  &); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorEC4ERKS2_ */
	void ShiftElementsLeft(class CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator> *, int, int); /* linkage=_ZN27CUtlVectorUltraConservativeI17CStrongHandleVoid36CUtlVectorUltraConservativeAllocatorE17ShiftElementsLeftEii */
};

// <00D05BC4> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	const VPhysXJoint_t* * Base(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const VPhysXJoint_t* const* Base(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	const VPhysXJoint_t* & operator[](CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const VPhysXJoint_t* const& operator[](const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	const VPhysXJoint_t* & Element(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const VPhysXJoint_t* const& Element(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef const class VPhysXJoint_t * * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class VPhysXJoint_t * const * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const VPhysXJoint_t* const& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	const VPhysXJoint_t* * AddToTailGetPtr(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const VPhysXJoint_t* const& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const VPhysXJoint_t* const& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const VPhysXJoint_t* const& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:343 */
	struct Data_t {
		int m_Size; /* 0 4 */
		const class VPhysXJoint_t * m_Elements[]; /* 8 0 */
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <00D06105> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	RnCollisionAttr_t* Base(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const RnCollisionAttr_t* Base(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	RnCollisionAttr_t& operator[](CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const RnCollisionAttr_t& operator[](const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	RnCollisionAttr_t& Element(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const RnCollisionAttr_t& Element(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef class RnCollisionAttr_t * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class RnCollisionAttr_t * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const RnCollisionAttr_t& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	RnCollisionAttr_t* AddToTailGetPtr(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const RnCollisionAttr_t& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const RnCollisionAttr_t& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const RnCollisionAttr_t& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:343 */
	struct Data_t {
		int m_Size; /* 0 4 */
		RnCollisionAttr_t m_Elements[]; /* 4 0 */
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <00D0663A> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	CUtlStringToken* Base(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CUtlStringToken* Base(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	CUtlStringToken& operator[](CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CUtlStringToken& operator[](const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	CUtlStringToken& Element(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CUtlStringToken& Element(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef class CUtlStringToken * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CUtlStringToken * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlStringToken& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	CUtlStringToken* AddToTailGetPtr(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlStringToken& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlStringToken& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlStringToken& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:343 */
	struct Data_t {
		int m_Size; /* 0 4 */
		CUtlStringToken m_Elements[]; /* 4 0 */
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <064B5AF4> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	const CPhysAggregateData* * Base(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CPhysAggregateData* const* Base(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	const CPhysAggregateData* & operator[](CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CPhysAggregateData* const& operator[](const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	const CPhysAggregateData* & Element(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CPhysAggregateData* const& Element(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef const class CPhysAggregateData * * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CPhysAggregateData * const * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CPhysAggregateData* const& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	const CPhysAggregateData* * AddToTailGetPtr(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CPhysAggregateData* const& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CPhysAggregateData* const& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CPhysAggregateData* const& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:343 */
	struct Data_t {
		int m_Size; /* 0 4 */
		const class CPhysAggregateData * m_Elements[]; /* 8 0 */
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <064BF98D> ../public/tier0/utlvectorultraconservative.h:46
// member functions: 34
// member variables: 2
// class size: 8
class CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	/* class CUtlVectorUltraConservativeAllocator <ancestor>; */ /* 0 0 */
	/* ../public/tier0/utlvectorultraconservative.h:56 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:61 */
	void ~CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:66 */
	CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>& operator=(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:82 */
	int Count(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:92 */
	bool IsEmpty(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:97 */
	const CPhysSurfaceProperties* * Base(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:103 */
	const CPhysSurfaceProperties* const* Base(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:109 */
	int InvalidIndex(void);
	/* ../public/tier0/utlvectorultraconservative.h:114 */
	bool IsValidIndex(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:119 */
	const CPhysSurfaceProperties* & operator[](CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:125 */
	const CPhysSurfaceProperties* const& operator[](const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:131 */
	const CPhysSurfaceProperties* & Element(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:137 */
	const CPhysSurfaceProperties* const& Element(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:143 */
	IntegerRangeIterator_t Indices(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:49 */
	typedef const class CPhysSurfaceProperties * * iterator;
	/* ../public/tier0/utlvectorultraconservative.h:147 */
	iterator begin(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:50 */
	typedef const class CPhysSurfaceProperties * const * const_iterator;
	/* ../public/tier0/utlvectorultraconservative.h:148 */
	const_iterator begin(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:149 */
	iterator end(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:150 */
	const_iterator end(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:152 */
	void EnsureCapacity(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:182 */
	void EnsureCount(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:205 */
	int AddToTail(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:214 */
	int AddToTail(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , const CPhysSurfaceProperties* const& );
	/* ../public/tier0/utlvectorultraconservative.h:223 */
	const CPhysSurfaceProperties* * AddToTailGetPtr(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:228 */
	void RemoveAll(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:244 */
	void Purge(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:249 */
	void PurgeAndDeleteElements(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:261 */
	void PurgeAndFreeElements(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* );
	/* ../public/tier0/utlvectorultraconservative.h:273 */
	void FastRemove(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:293 */
	void Remove(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int);
	/* ../public/tier0/utlvectorultraconservative.h:305 */
	int Find(const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , const CPhysSurfaceProperties* const& );
	/* ../public/tier0/utlvectorultraconservative.h:316 */
	bool FindAndRemove(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , const CPhysSurfaceProperties* const& );
	/* ../public/tier0/utlvectorultraconservative.h:327 */
	bool FindAndFastRemove(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , const CPhysSurfaceProperties* const& );
private:
	/* ../public/tier0/utlvectorultraconservative.h:341 */
	void CUtlVectorUltraConservative(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , const CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>& );
	/* ../public/tier0/utlvectorultraconservative.h:343 */
	struct Data_t {
		int m_Size; /* 0 4 */
		const class CPhysSurfaceProperties * m_Elements[]; /* 8 0 */
	};
	Data_t * m_pData; /* 0 8 */
	/* ../public/tier0/utlvectorultraconservative.h:352 */
	void ShiftElementsLeft(CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>* , int, int);
};

// <064CED01> ../public/tier0/utlvectorultraconservative.h:56
void CUtlVectorUltraConservative<char const::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CECE8> ../public/tier0/utlvectorultraconservative.h:56
inline void CUtlVectorUltraConservative<char const::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CEA91> ../public/tier0/utlvectorultraconservative.h:56
void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CEA78> ../public/tier0/utlvectorultraconservative.h:56
inline void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CEA31> ../public/tier0/utlvectorultraconservative.h:56
void CUtlVectorUltraConservative<const VPhysXJoint_t::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CEA18> ../public/tier0/utlvectorultraconservative.h:56
inline void CUtlVectorUltraConservative<const VPhysXJoint_t::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE9D1> ../public/tier0/utlvectorultraconservative.h:56
void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE9B8> ../public/tier0/utlvectorultraconservative.h:56
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE971> ../public/tier0/utlvectorultraconservative.h:56
void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE958> ../public/tier0/utlvectorultraconservative.h:56
inline void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE911> ../public/tier0/utlvectorultraconservative.h:56
void CUtlVectorUltraConservative<const CPhysAggregateData::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE8F8> ../public/tier0/utlvectorultraconservative.h:56
inline void CUtlVectorUltraConservative<const CPhysAggregateData::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE8B1> ../public/tier0/utlvectorultraconservative.h:56
void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE898> ../public/tier0/utlvectorultraconservative.h:56
inline void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CECD1> ../public/tier0/utlvectorultraconservative.h:61
void CUtlVectorUltraConservative<char const::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CECB8> ../public/tier0/utlvectorultraconservative.h:61
inline void CUtlVectorUltraConservative<char const::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CEA61> ../public/tier0/utlvectorultraconservative.h:61
void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CEA48> ../public/tier0/utlvectorultraconservative.h:61
inline void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CEA01> ../public/tier0/utlvectorultraconservative.h:61
void CUtlVectorUltraConservative<const VPhysXJoint_t::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE9E8> ../public/tier0/utlvectorultraconservative.h:61
inline void CUtlVectorUltraConservative<const VPhysXJoint_t::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE9A1> ../public/tier0/utlvectorultraconservative.h:61
void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE988> ../public/tier0/utlvectorultraconservative.h:61
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE941> ../public/tier0/utlvectorultraconservative.h:61
void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE928> ../public/tier0/utlvectorultraconservative.h:61
inline void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE8E1> ../public/tier0/utlvectorultraconservative.h:61
void CUtlVectorUltraConservative<const CPhysAggregateData::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE8C8> ../public/tier0/utlvectorultraconservative.h:61
inline void CUtlVectorUltraConservative<const CPhysAggregateData::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE881> ../public/tier0/utlvectorultraconservative.h:61
void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE868> ../public/tier0/utlvectorultraconservative.h:61
inline void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::~CUtlVectorUltraConservative()
{
} /* size: 0 */

// <064CE829> ../public/tier0/utlvectorultraconservative.h:82
inline void CUtlVectorUltraConservative<const CPhysAggregateData::Count()
{
} /* size: 0 */

// <064CE7CA> ../public/tier0/utlvectorultraconservative.h:82
inline void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count()
{
} /* size: 0 */

// <064CE77E> ../public/tier0/utlvectorultraconservative.h:82
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count()
{
} /* size: 0 */

// <064CE765> ../public/tier0/utlvectorultraconservative.h:82
inline void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count()
{
} /* size: 0 */

// <064C8D36> ../public/tier0/utlvectorultraconservative.h:82
inline void CUtlVectorUltraConservative<char const::Count()
{
} /* size: 0 */

// <064C8A65> ../public/tier0/utlvectorultraconservative.h:82
inline void CUtlVectorUltraConservative<const CPhysSurfaceProperties::Count()
{
} /* size: 0 */

// <064C6750> ../public/tier0/utlvectorultraconservative.h:82
inline void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::Count()
{
} /* size: 0 */

// <01856929> ../public/tier0/utlvectorultraconservative.h:82
inline void CUtlVectorUltraConservative<const VPhysXJoint_t::Count()
{
} /* size: 0 */

// <064CE806> ../public/tier0/utlvectorultraconservative.h:119
inline void CUtlVectorUltraConservative<const CPhysAggregateData::operator[](int i)
{
} /* size: 0 */

// <064CE7E3> ../public/tier0/utlvectorultraconservative.h:119
inline void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::operator[](int i)
{
} /* size: 0 */

// <064CE315> ../public/tier0/utlvectorultraconservative.h:119
inline void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::operator[](int i)
{
} /* size: 0 */

// <064CE2CF> ../public/tier0/utlvectorultraconservative.h:119
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::operator[](int i)
{
} /* size: 0 */

// <064CCF6E> ../public/tier0/utlvectorultraconservative.h:119
inline void CUtlVectorUltraConservative<const CPhysSurfaceProperties::operator[](int i)
{
} /* size: 0 */

// <0185959A> ../public/tier0/utlvectorultraconservative.h:119
inline void CUtlVectorUltraConservative<const VPhysXJoint_t::operator[](int i)
{
} /* size: 0 */

// <009F4955> ../public/tier0/utlvectorultraconservative.h:119
inline void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::operator[](int i)
{
} /* size: 0 */

// <064CF48B> ../public/tier0/utlvectorultraconservative.h:125
inline void CUtlVectorUltraConservative<char const::operator[](int i)
{
} /* size: 0 */

// <064C8C4B> ../public/tier0/utlvectorultraconservative.h:131
inline void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Element(int i)
{
} /* size: 0 */

// <064C8BFC> ../public/tier0/utlvectorultraconservative.h:131
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Element(int i)
{
} /* size: 0 */

// <009F05E3> ../public/tier0/utlvectorultraconservative.h:131
inline void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::Element(int i)
{
} /* size: 0 */

// <064CCB64> ../public/tier0/utlvectorultraconservative.h:152
// variables: 3
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(int num)
{
	int nCurCount; // 159
	{
		size_t nNeeded; // 172
		size_t nHave; // 173
	}
} /* size: 0, variables: 1 */

// <064C8E0C> ../public/tier0/utlvectorultraconservative.h:152
// variables: 3
inline void CUtlVectorUltraConservative<const CPhysAggregateData::EnsureCapacity(int num)
{
	int nCurCount; // 159
	{
		size_t nNeeded; // 172
		size_t nHave; // 173
	}
} /* size: 0, variables: 1 */

// <064C8DC1> ../public/tier0/utlvectorultraconservative.h:152
// variables: 3
inline void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(int num)
{
	int nCurCount; // 159
	{
		size_t nNeeded; // 172
		size_t nHave; // 173
	}
} /* size: 0, variables: 1 */

// <064C8CEB> ../public/tier0/utlvectorultraconservative.h:152
// variables: 3
inline void CUtlVectorUltraConservative<char const::EnsureCapacity(int num)
{
	int nCurCount; // 159
	{
		size_t nNeeded; // 172
		size_t nHave; // 173
	}
} /* size: 0, variables: 1 */

// <064C8C6E> ../public/tier0/utlvectorultraconservative.h:152
// variables: 3
inline void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(int num)
{
	int nCurCount; // 159
	{
		size_t nNeeded; // 172
		size_t nHave; // 173
	}
} /* size: 0, variables: 1 */

// <064C8A1A> ../public/tier0/utlvectorultraconservative.h:152
// variables: 3
inline void CUtlVectorUltraConservative<const CPhysSurfaceProperties::EnsureCapacity(int num)
{
	int nCurCount; // 159
	{
		size_t nNeeded; // 172
		size_t nHave; // 173
	}
} /* size: 0, variables: 1 */

// <018568DE> ../public/tier0/utlvectorultraconservative.h:152
// variables: 3
inline void CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCapacity(int num)
{
	int nCurCount; // 159
	{
		size_t nNeeded; // 172
		size_t nHave; // 173
	}
} /* size: 0, variables: 1 */

// <009F0606> ../public/tier0/utlvectorultraconservative.h:152
// variables: 3
inline void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::EnsureCapacity(int num)
{
	int nCurCount; // 159
	{
		size_t nNeeded; // 172
		size_t nHave; // 173
	}
} /* size: 0, variables: 1 */

// <064CE797> ../public/tier0/utlvectorultraconservative.h:182
// variable: 1
inline void CUtlVectorUltraConservative<const CPhysAggregateData::EnsureCount(int num)
{
	{
		int nCurCount; // 186
	}
} /* size: 0 */

// <064CE732> ../public/tier0/utlvectorultraconservative.h:182
// variable: 1
inline void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::EnsureCount(int num)
{
	{
		int nCurCount; // 186
	}
} /* size: 0 */

// <064CE3EA> ../public/tier0/utlvectorultraconservative.h:182
// variable: 1
inline void CUtlVectorUltraConservative<char const::EnsureCount(int num)
{
	{
		int nCurCount; // 186
	}
} /* size: 0 */

// <064CE36B> ../public/tier0/utlvectorultraconservative.h:182
// variable: 1
inline void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::EnsureCount(int num)
{
	{
		int nCurCount; // 186
	}
} /* size: 0 */

// <064CE338> ../public/tier0/utlvectorultraconservative.h:182
// variable: 1
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::EnsureCount(int num)
{
	{
		int nCurCount; // 186
	}
} /* size: 0 */

// <064CCF91> ../public/tier0/utlvectorultraconservative.h:182
// variable: 1
inline void CUtlVectorUltraConservative<const CPhysSurfaceProperties::EnsureCount(int num)
{
	{
		int nCurCount; // 186
	}
} /* size: 0 */

// <018595BD> ../public/tier0/utlvectorultraconservative.h:182
// variable: 1
inline void CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCount(int num)
{
	{
		int nCurCount; // 186
	}
} /* size: 0 */

// <009F4978> ../public/tier0/utlvectorultraconservative.h:182
// variable: 1
inline void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::EnsureCount(int num)
{
	{
		int nCurCount; // 186
	}
} /* size: 0 */

// <064CBAD4> ../public/tier0/utlvectorultraconservative.h:214
// variable: 1
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::AddToTail(const RnCollisionAttr_t& src)
{
	int iNew; // 216
} /* size: 0, variables: 1 */

// <064C90B9> ../public/tier0/utlvectorultraconservative.h:228
// variable: 1
inline void CUtlVectorUltraConservative<char const::RemoveAll()
{
	{
		int i; // 232
	}
} /* size: 0 */

// <064C8F10> ../public/tier0/utlvectorultraconservative.h:228
// variable: 1
inline void CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::RemoveAll()
{
	{
		int i; // 232
	}
} /* size: 0 */

// <064C8EEB> ../public/tier0/utlvectorultraconservative.h:228
// variable: 1
inline void CUtlVectorUltraConservative<const VPhysXJoint_t::RemoveAll()
{
	{
		int i; // 232
	}
} /* size: 0 */

// <064C8EC6> ../public/tier0/utlvectorultraconservative.h:228
// variable: 1
inline void CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::RemoveAll()
{
	{
		int i; // 232
	}
} /* size: 0 */

// <064C8EA1> ../public/tier0/utlvectorultraconservative.h:228
// variable: 1
inline void CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::RemoveAll()
{
	{
		int i; // 232
	}
} /* size: 0 */

// <064C8E7C> ../public/tier0/utlvectorultraconservative.h:228
// variable: 1
inline void CUtlVectorUltraConservative<const CPhysAggregateData::RemoveAll()
{
	{
		int i; // 232
	}
} /* size: 0 */

// <064C8E57> ../public/tier0/utlvectorultraconservative.h:228
// variable: 1
inline void CUtlVectorUltraConservative<CStrongHandleVoid, CUtlVectorUltraConservativeAllocator>::RemoveAll()
{
	{
		int i; // 232
	}
} /* size: 0 */

// <064C89F5> ../public/tier0/utlvectorultraconservative.h:228
// variable: 1
inline void CUtlVectorUltraConservative<const CPhysSurfaceProperties::RemoveAll()
{
	{
		int i; // 232
	}
} /* size: 0 */

