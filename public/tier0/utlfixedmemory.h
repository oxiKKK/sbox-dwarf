
//
// public/tier0/utlfixedmemory.h
//
//	referenced by: libengine2.so
//				   libfilesystem_stdio.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 345
//	classes: 21
//

// <03892CB1> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>);
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>);
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>);
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>);
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>);
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>, const UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <000771FF> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <000DDB46> ../public/tier0/utlfixedmemory.h:30
// member functions: 29
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CSwapChainBase*, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CSwapChainBase*, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CSwapChainBase*, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp, BlockHeader_t* );
	struct BlockHeader_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const UtlLinkedListElem_t<CSwapChainBase*, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
};

// <000E4F0C> ../public/tier0/utlfixedmemory.h:30
// member functions: 29
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , intp, BlockHeader_t* );
	struct BlockHeader_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >* , const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
};

// <00157E36> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CSwapChainBase*, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CSwapChainBase*, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CSwapChainBase*, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase*, long long int> >* , const UtlLinkedListElem_t<CSwapChainBase*, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <00472A6C> ../public/tier0/utlfixedmemory.h:30
// member functions: 29
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp, BlockHeader_t* );
	struct BlockHeader_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
};

// <0057269F> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int> >* , const UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <0057981D> ../public/tier0/utlfixedmemory.h:30
// member functions: 29
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp, BlockHeader_t* );
	struct BlockHeader_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
};

// <005D2046> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >* , const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <006E02BF> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<VkSampler_T*, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<VkSampler_T*, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<VkSampler_T*, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<VkSampler_T*, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<VkSampler_T*, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<VkSampler_T*, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<VkSampler_T*, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T*, long long int> >* , const UtlLinkedListElem_t<VkSampler_T*, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <0081BB52> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >* , const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <0095818E> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >* , const UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <009590E8> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >* , const UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <0095A042> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<BlendStateVulkan_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<BlendStateVulkan_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<BlendStateVulkan_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<BlendStateVulkan_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<BlendStateVulkan_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<BlendStateVulkan_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<BlendStateVulkan_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >* , const UtlLinkedListElem_t<BlendStateVulkan_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <0095FF99> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CVertexShaderVulkan, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CVertexShaderVulkan, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CVertexShaderVulkan, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CVertexShaderVulkan, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CVertexShaderVulkan, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CVertexShaderVulkan, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CVertexShaderVulkan, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >* , const UtlLinkedListElem_t<CVertexShaderVulkan, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <00960FF5> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CShaderVulkanBase, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CShaderVulkanBase, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CShaderVulkanBase, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CShaderVulkanBase, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CShaderVulkanBase, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CShaderVulkanBase, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CShaderVulkanBase, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >* , const UtlLinkedListElem_t<CShaderVulkanBase, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <0096B413> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int> >* , const UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <000C3CD7> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >* , const UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <00124321> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >* , const UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <003D3C57> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CProcess*, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CProcess*, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CProcess*, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CProcess*, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CProcess*, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CProcess*, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CProcess*, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CProcess*, long long int> >* , const UtlLinkedListElem_t<CProcess*, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <0009FD77> ../public/tier0/utlfixedmemory.h:30
// member functions: 30
// member variables: 3
// static member variables: 2
// class size: 16
class CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> > {
	/* ../public/tier0/utlfixedmemory.h:158 */
	void CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:165 */
	void ~CUtlFixedMemory(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:187 */
	void Init(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , int, int);
	/* ../public/tier0/utlfixedmemory.h:41 */
	UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>* Base(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:42 */
	const UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>* Base(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:48 */
	class Iterator_t {
		/* ../public/tier0/utlfixedmemory.h:51 */
		void Iterator_t(Iterator_t* , BlockHeader_t* , intp);
		BlockHeader_t * m_pBlockHeader; /* 0 8 */
		intp m_nIndex; /* 8 8 */
		/* ../public/tier0/utlfixedmemory.h:55 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlfixedmemory.h:56 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlfixedmemory.h:58 */
	Iterator_t First(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:59 */
	Iterator_t Next(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:71 */
	intp GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:79 */
	bool IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , intp, const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:95 */
	bool IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , const Iterator_t& );
	/* ../public/tier0/utlfixedmemory.h:96 */
	Iterator_t InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:200 */
	UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>& operator[](CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:207 */
	const UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>& operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:214 */
	UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>& Element(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:221 */
	const UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>& Element(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , intp);
	/* ../public/tier0/utlfixedmemory.h:242 */
	bool IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , intp);
	static const intp INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:109 */
	intp InvalidIndex(void);
	/* ../public/tier0/utlfixedmemory.h:232 */
	int NumAllocated(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:113 */
	int Count(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* );
	/* ../public/tier0/utlfixedmemory.h:257 */
	void Grow(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:323 */
	void EnsureCapacity(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , int);
	/* ../public/tier0/utlfixedmemory.h:333 */
	void Purge(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* );
protected:
	/* ../public/tier0/utlfixedmemory.h:175 */
	void Swap(CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >& );
	/* ../public/tier0/utlfixedmemory.h:128 */
	bool IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , intp, BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:142 */
	struct BlockHeader_t : public BlockHeaderUnaligned_t {
	public:
		/* struct BlockHeaderUnaligned_t <ancestor>; */ /* 0 16 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	static const size_t BLOCK_ALIGN; /* 0 0 */
	/* ../public/tier0/utlfixedmemory.h:145 */
	const UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>* HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , const BlockHeader_t* );
	/* ../public/tier0/utlfixedmemory.h:146 */
	const BlockHeader_t* BlockToHeader(const CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >* , const UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>* );
	BlockHeader_t * m_pBlocks; /* 0 8 */
	int m_nAllocationCount; /* 8 4 */
	int m_nGrowSize; /* 12 4 */
	/* ../public/tier0/utlfixedmemory.h:135 */
	struct BlockHeaderUnaligned_t {
		BlockHeader_t * m_pNext; /* 0 8 */
		intp m_nBlockSize; /* 8 8 */
	};
};

// <03895EC8> ../public/tier0/utlfixedmemory.h:41
inline void Base(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this)
{
} /* size: 0 */

// <00B66A48> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Base()
{
} /* size: 0 */

// <009CB994> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Base()
{
} /* size: 0 */

// <009CB926> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Base()
{
} /* size: 0 */

// <009CB8B8> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Base()
{
} /* size: 0 */

// <009CB84A> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Base()
{
} /* size: 0 */

// <009CB7DC> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Base()
{
} /* size: 0 */

// <009C5EA4> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Base()
{
} /* size: 0 */

// <009C4D2C> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Base()
{
} /* size: 0 */

// <006FBAA4> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Base()
{
} /* size: 0 */

// <0058786E> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Base()
{
} /* size: 0 */

// <0016EF71> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Base()
{
} /* size: 0 */

// <00078719> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Base()
{
} /* size: 0 */

// <003D895D> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Base()
{
} /* size: 0 */

// <001277E3> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::Base()
{
} /* size: 0 */

// <000CA5A3> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Base()
{
} /* size: 0 */

// <000BF690> ../public/tier0/utlfixedmemory.h:41
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Base()
{
} /* size: 0 */

// <03895D2E> ../public/tier0/utlfixedmemory.h:51
void Iterator_t::Iterator_t(BlockHeader_t* p, intp i)
{
} /* size: 0 */

// <03895D01> ../public/tier0/utlfixedmemory.h:51
inline void Iterator_t::Iterator_t(BlockHeader_t* p, intp i)
{
} /* size: 0 */

// <00B6D03F> ../public/tier0/utlfixedmemory.h:55
inline void Iterator_t::operator==(const Iterator_t it)
{
} /* size: 0 */

// <03896151> ../public/tier0/utlfixedmemory.h:56
inline void Iterator_t::operator!=(const Iterator_t it)
{
} /* size: 0 */

// <03896175> ../public/tier0/utlfixedmemory.h:58
inline void First(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this)
{
} /* size: 0 */

// <00B6D026> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::First()
{
} /* size: 0 */

// <009CFDB5> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::First()
{
} /* size: 0 */

// <009CFBD5> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::First()
{
} /* size: 0 */

// <009CF9F5> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::First()
{
} /* size: 0 */

// <009CF3E4> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::First()
{
} /* size: 0 */

// <009CF204> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::First()
{
} /* size: 0 */

// <009CE474> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::First()
{
} /* size: 0 */

// <009CE294> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::First()
{
} /* size: 0 */

// <00700B1F> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::First()
{
} /* size: 0 */

// <00589AD4> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::First()
{
} /* size: 0 */

// <00173A7A> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::First()
{
} /* size: 0 */

// <00079880> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::First()
{
} /* size: 0 */

// <003D979E> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::First()
{
} /* size: 0 */

// <00127BB3> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::First()
{
} /* size: 0 */

// <000CABCC> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::First()
{
} /* size: 0 */

// <000C481C> ../public/tier0/utlfixedmemory.h:58
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::First()
{
} /* size: 0 */

// <038960F9> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void Next(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this, const Iterator_t& it)
{
	const char   __FUNCTION__; // 35897
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <00B6CFA9> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 26659
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <009CFD39> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28462
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <009CFB59> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28462
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <009CF979> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28462
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <009CF368> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28462
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <009CF188> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28462
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <009CE3F8> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28462
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <009CE218> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28462
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <009C7E50> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28462
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <008397CB> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 22670
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <00700AA2> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 56623
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <005D8729> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 23651
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <00589A57> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 35127
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <001739FD> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 2334
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <00079802> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 37195
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <003D9721> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 49111
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <00127BCC> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 47650
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <000CAB4F> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 58322
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <00171C78> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 31714
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <00079802> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 7288
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <000C479F> ../public/tier0/utlfixedmemory.h:59
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Next(const Iterator_t& it)
{
	const char   __FUNCTION__; // 26056
	BlockHeader_t* pHeader; // 65
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 61
	}
} /* size: 0, variables: 2 */

// <038960AD> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void GetIndex(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this, const Iterator_t& it)
{
	const char   __FUNCTION__; // 35939
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <00B6CF5C> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 26743
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <009CFCED> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <009CFB0D> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <009CF92D> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <009CF31C> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <009CF13C> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <009CE3AC> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <009CE1CC> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 28570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <0083977E> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 22778
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <00700A55> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 56731
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <005D86DC> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 23672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <00589A0A> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 35235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <001739B0> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 2442
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <000797B5> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 37293
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <003D96BF> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 54672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <001279E4> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 47285
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <000CAAED> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 59838
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <00171C2B> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 31817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <000797B5> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 7386
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <000C4752> ../public/tier0/utlfixedmemory.h:71
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::GetIndex(const Iterator_t& it)
{
	const char   __FUNCTION__; // 26164
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <03895DD8> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void IsIdxAfter(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this, intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 35981
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <00B66995> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 26785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <009BD6A5> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <009BD580> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <009BD45B> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <009BD115> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <009BCFF0> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <009BCBCC> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <009BCAE9> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <009B817B> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <00836914> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 22832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <006FB9F1> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 56785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <005D80FB> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 23714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <005853ED> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 35289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <0016FD2E> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 2496
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <00078667> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 37347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <003D8895> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 51075
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <00127941> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 47151
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <000CA353> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 57921
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <0016E131> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 31871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <00078667> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 7440
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <000C60C9> ../public/tier0/utlfixedmemory.h:79
// variables: 3
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsIdxAfter(intp i, const Iterator_t& it)
{
	const char   __FUNCTION__; // 26218
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	{
		BlockHeader_t* pbh; // 88
	}
} /* size: 0, variables: 1 */

// <03895E8B> ../public/tier0/utlfixedmemory.h:95
inline void IsValidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this, const Iterator_t& it)
{
} /* size: 0 */

// <00B66A24> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <009BD733> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <009BD60E> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <009BD4E9> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <009BD1A3> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <009BD07E> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <009BCC5A> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <009BCB77> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <006FBA80> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <00588163> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <0016FDBC> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <000786F5> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <003D8939> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <00127C25> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <000CA41D> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <000C1E34> ../public/tier0/utlfixedmemory.h:95
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <03896254> ../public/tier0/utlfixedmemory.h:96
inline void InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this)
{
} /* size: 0 */

// <00B6D11E> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <009D7A29> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <009D79B9> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <009D7949> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <009D78D9> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <009D7869> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <009D4A26> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <009D3C39> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::InvalidIterator()
{
} /* size: 0 */

// <00700C17> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::InvalidIterator()
{
} /* size: 0 */

// <0058AB57> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::InvalidIterator()
{
} /* size: 0 */

// <00173AB7> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::InvalidIterator()
{
} /* size: 0 */

// <00079979> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <003D9896> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::InvalidIterator()
{
} /* size: 0 */

// <00127865> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <000CB66E> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <000C4914> ../public/tier0/utlfixedmemory.h:96
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::InvalidIterator()
{
} /* size: 0 */

// <038988BC> ../public/tier0/utlfixedmemory.h:109
inline void InvalidIndex(void)
{
} /* size: 0 */

// <03895C0A> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void IsInBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this, intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>* p; // 130
	const UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <00B65095> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* p; // 130
	const UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <009B48DC> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>* p; // 130
	const UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <009B4896> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>* p; // 130
	const UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <009B4850> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<BlendStateVulkan_t, long long int>* p; // 130
	const UtlLinkedListElem_t<BlendStateVulkan_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <009B4784> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CShaderVulkanBase, long long int>* p; // 130
	const UtlLinkedListElem_t<CShaderVulkanBase, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <009B473E> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CVertexShaderVulkan, long long int>* p; // 130
	const UtlLinkedListElem_t<CVertexShaderVulkan, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <009B4654> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* p; // 130
	const UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <009B460E> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>* p; // 130
	const UtlLinkedListElem_t<CDescriptorSetVulkan*, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <006F85E9> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<VkSampler_T*, long long int>* p; // 130
	const UtlLinkedListElem_t<VkSampler_T*, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <00584B30> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>* p; // 130
	const UtlLinkedListElem_t<VulkanMemoryPool_t*, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <0016E99C> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CSwapChainBase*, long long int>* p; // 130
	const UtlLinkedListElem_t<CSwapChainBase*, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <000784BE> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* p; // 130
	const UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <003D7FC3> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CProcess*, long long int>* p; // 130
	const UtlLinkedListElem_t<CProcess*, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <00127778> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>* p; // 130
	const UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <000C9FA2> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>* p; // 130
	const UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <000C1DEE> ../public/tier0/utlfixedmemory.h:128
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsInBlock(intp i, BlockHeader_t* pBlockHeader)
{
	UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>* p; // 130
	const UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int>* p0; // 131
} /* size: 0, variables: 2 */

// <03895CDC> ../public/tier0/utlfixedmemory.h:145
inline void HeaderToBlock(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this, const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <00B669FF> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <009BD70E> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <009BD5E9> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <009BD4C4> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <009BD17E> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <009BD059> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <009BCC35> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <009BCB52> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <006FBA5B> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <00585457> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <0016FD97> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <000786D0> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <003D8914> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <001277BE> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <000CA32E> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <000BF66B> ../public/tier0/utlfixedmemory.h:145
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::HeaderToBlock(const BlockHeader_t* pHeader)
{
} /* size: 0 */

// <03896233> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this, int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00B6D0FD> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <009CFE3C> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <009CFC5C> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <009CFA7C> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <009CF46B> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <009CF28B> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <009CE4FB> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <009CE31B> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00700BF6> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00589B5B> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00171BB8> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00079958> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <003D9875> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <001267E9> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <000CA686> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <000C48F3> ../public/tier0/utlfixedmemory.h:158
void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::CUtlFixedMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <03897E4B> ../public/tier0/utlfixedmemory.h:165
void ~CUtlFixedMemory(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this)
{
} /* size: 0 */

// <00B711D4> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <009DE64F> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <009DDD8D> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <009DD4CB> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <009DC5AB> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <009DBCB1> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <009DAFF1> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <009DA72F> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::~CUtlFixedMemory()
{
} /* size: 0 */

// <00707CEE> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::~CUtlFixedMemory()
{
} /* size: 0 */

// <0058D6ED> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::~CUtlFixedMemory()
{
} /* size: 0 */

// <00174FA9> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::~CUtlFixedMemory()
{
} /* size: 0 */

// <0007A359> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <003DA4AB> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::~CUtlFixedMemory()
{
} /* size: 0 */

// <001276E7> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <000CB709> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <000C9F67> ../public/tier0/utlfixedmemory.h:165
void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::~CUtlFixedMemory()
{
} /* size: 0 */

// <0389751E> ../public/tier0/utlfixedmemory.h:187
void Init(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this, int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <00B66A61> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <009BD757> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <009BD632> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <009BD50D> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <009BD1C7> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <009BD0A2> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <009BCC7E> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <009BCB9B> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <006FBABD> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <0058547C> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <0016EF8A> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <00078732> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <003D8976> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <0012676E> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <000CB5A7> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <000BF6A9> ../public/tier0/utlfixedmemory.h:187
void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Init(int nGrowSize, int nInitSize)
{
} /* size: 0 */

// <03896A9F> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this, intp i)
{
	const char   __FUNCTION__; // 35981
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <00B6F8E3> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 26785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D76E4> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D69CF> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D6814> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D66F7> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D5BCD> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D4EE6> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D4E68> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D4DEA> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <009D4A76> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <00836886> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 22832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <00707404> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::operator[](intp i)
{
	const char   __FUNCTION__; // 56785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <005D8077> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 23714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <0058BF92> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](intp i)
{
	const char   __FUNCTION__; // 35289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <00173B2C> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 2496
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <00079A97> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 37347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <003D9B74> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::operator[](intp i)
{
	const char   __FUNCTION__; // 51075
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <00129B5B> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 47151
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <000CBD9A> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 57921
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <00171DA7> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 31871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <00079A97> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 7440
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <000C61EE> ../public/tier0/utlfixedmemory.h:200
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 26218
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
	}
} /* size: 0, variables: 1 */

// <03898856> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void operator[](const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this, intp i)
{
	const char   __FUNCTION__; // 35981
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00B6AD71> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 26785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00B67623> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 26785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00ABEDA6> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 14426
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009CB6C3> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009CB65E> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009C7F7C> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009C5F2E> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009BD663> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009BD53E> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009BD419> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009BD0D3> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <009BCFAE> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 28624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <008368D2> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 22832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <006FB9AF> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::operator[](intp i)
{
	const char   __FUNCTION__; // 56785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <005D80B9> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 23714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00589FEE> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](intp i)
{
	const char   __FUNCTION__; // 35289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00173BB8> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 2496
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <000F7571> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 40251
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00079A19> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 37347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <003D89F5> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::operator[](intp i)
{
	const char   __FUNCTION__; // 51075
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00128E6E> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 47151
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <000CBDE6> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 57921
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <003E6192> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 57666
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00171E33> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](intp i)
{
	const char   __FUNCTION__; // 31871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <00079A19> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 7440
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <000C6087> ../public/tier0/utlfixedmemory.h:207
// variables: 2
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::operator[](intp i)
{
	const char   __FUNCTION__; // 26218
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
} /* size: 0, variables: 1 */

// <03897395> ../public/tier0/utlfixedmemory.h:242
inline void IsIdxValid(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this, intp i)
{
} /* size: 0 */

// <00B67600> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <00B65FB5> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsIdxValid(intp i)
{
} /* size: 0 */

// <009CB6A0> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsIdxValid(intp i)
{
} /* size: 0 */

// <009C9ED1> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <009C8EA1> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <009C737B> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <009C6A63> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <009C614B> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <009C5F0B> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <006FF92E> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::IsIdxValid(intp i)
{
} /* size: 0 */

// <00588187> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsIdxValid(intp i)
{
} /* size: 0 */

// <00079A5B> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <003D962C> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::IsIdxValid(intp i)
{
} /* size: 0 */

// <00128E4B> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <000CBE32> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <000C6133> ../public/tier0/utlfixedmemory.h:242
inline void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::IsIdxValid(intp i)
{
} /* size: 0 */

// <0389BBF5> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void Grow(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this, int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <03895EE1> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void Grow(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this, int num)
{
	const char   __FUNCTION__; // 35897
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <00B90BB4> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00B65EA8> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 26659
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <00A6BA2F> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00A6B688> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00A6B4E3> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00A6B33B> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00A6B193> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00A6AFEE> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00A6AE49> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <009B8C66> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 28462
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <009B8AC8> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 28462
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <009B7F7E> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 28462
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <009B7DA1> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 28462
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <009B7BC4> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 28462
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <009B78FD> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 28462
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <009B76EE> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Grow(int num)
{
	const char   __FUNCTION__; // 28462
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <008366F7> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 22670
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <00752382> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <006FB8A2> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Grow(int num)
{
	const char   __FUNCTION__; // 56623
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <005D7C9D> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 23651
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <005A6A42> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00588056> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Grow(int num)
{
	const char   __FUNCTION__; // 35127
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <001B747F> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <0016EA36> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Grow(int num)
{
	const char   __FUNCTION__; // 2334
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <0007C4E6> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00078558> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 37195
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <003E317C> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <003D8046> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Grow(int num)
{
	const char   __FUNCTION__; // 49111
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <0013303C> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <00127A91> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 47650
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <000D7954> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <000CA441> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 58322
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <0016CE9B> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Grow(int num)
{
	const char   __FUNCTION__; // 31714
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <00078558> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 7288
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <00110DF5> ../public/tier0/utlfixedmemory.h:257
// variables: 5
// function call: 1
void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Grow(int num)
{
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		int n; // 278
		{
		}
		{
		}
	}
	{
		int* _pCrash; // 293
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 293
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 383, variables: 2, inline expansions: 1 (29 bytes) */

// <000BE07C> ../public/tier0/utlfixedmemory.h:257
// variables: 9
void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Grow(int num)
{
	const char   __FUNCTION__; // 26056
	int nBlockSize; // 262
	BlockHeader_t* pBlockHeader; // 290
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
	{
		int n; // 278
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 279
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 280
		}
	}
	{
		int* _pCrash; // 293
	}
	{
		BlockHeader_t* pbh; // 305
	}
} /* size: 0, variables: 3 */

// <038961B2> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void Purge(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this)
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <00B6D063> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <009D7A49> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <009D79D9> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <009D7969> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <009D78F9> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <009D7889> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <009D4A3F> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <009D3C52> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <00700B5C> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <0058AB70> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <00171B1E> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <000798BD> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <003D97DB> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<CProcess::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <00126E44> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <000CB687> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

// <000C4859> ../public/tier0/utlfixedmemory.h:333
// variables: 2
void CUtlFixedMemory<UtlLinkedListElem_t<CBaseFileSystem::FindData_t, long long int> >::Purge()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
} /* size: 0 */

