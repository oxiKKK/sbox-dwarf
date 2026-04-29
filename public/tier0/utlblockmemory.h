
//
// public/tier0/utlblockmemory.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 294
//	classes: 24
//

// <000AE6ED> ../public/tier0/utlblockmemory.h:31
// member functions: 34
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CacheOptimizedTriangle_t, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	CacheOptimizedTriangle_t* Base(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const CacheOptimizedTriangle_t* Base(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	CacheOptimizedTriangle_t& operator[](CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const CacheOptimizedTriangle_t& operator[](const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	CacheOptimizedTriangle_t& Element(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const CacheOptimizedTriangle_t& Element(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , CUtlBlockMemory<CacheOptimizedTriangle_t, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	CacheOptimizedTriangle_t * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <000B3897> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<Vector2D, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	Vector2D* Base(CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const Vector2D* Base(const CUtlBlockMemory<Vector2D, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<Vector2D, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	Vector2D& operator[](CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const Vector2D& operator[](const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	Vector2D& Element(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const Vector2D& Element(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<Vector2D, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<Vector2D, int>* , CUtlBlockMemory<Vector2D, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<Vector2D, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<Vector2D, int>* );
	Vector2D * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiED4Ev */
	void Init(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4InitEii */
	class Vector2D * Base(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4BaseEv */
	const class Vector2D  * Base(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE4NextERKNS1_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE8GetIndexERKNS1_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<Vector2D, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10IsIdxAfterEiRKNS1_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE15IsValidIteratorERKNS1_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE15InvalidIteratorEv */
	class Vector2D & operator[](class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiEixEi */
	const class Vector2D  & operator[](const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiEixEi */
	class Vector2D & Element(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE7ElementEi */
	const class Vector2D  & Element(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<Vector2D, int> *, class CUtlBlockMemory<Vector2D, int> &); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4SwapERS1_ */
	int NumAllocated(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE5PurgeEv */
	void Purge(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<Vector2D, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE18NumElementsInBlockEv */
};

// <0123B0D0> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CVfxStaticComboData, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	CVfxStaticComboData* Base(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const CVfxStaticComboData* Base(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CVfxStaticComboData, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	CVfxStaticComboData& operator[](CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const CVfxStaticComboData& operator[](const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	CVfxStaticComboData& Element(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const CVfxStaticComboData& Element(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	static const int INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CVfxStaticComboData, int>* , CUtlBlockMemory<CVfxStaticComboData, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CVfxStaticComboData, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	CVfxStaticComboData * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiED4Ev */
	void Init(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4InitEii */
	class CVfxStaticComboData * Base(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4BaseEv */
	const class CVfxStaticComboData  * Base(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE4NextERKNS1_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE8GetIndexERKNS1_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10IsIdxAfterEiRKNS1_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE15IsValidIteratorERKNS1_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE15InvalidIteratorEv */
	class CVfxStaticComboData & operator[](class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiEixEi */
	const class CVfxStaticComboData  & operator[](const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiEixEi */
	class CVfxStaticComboData & Element(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE7ElementEi */
	const class CVfxStaticComboData  & Element(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<CVfxStaticComboData, int> *, class CUtlBlockMemory<CVfxStaticComboData, int> &); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4SwapERS1_ */
	int NumAllocated(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE5PurgeEv */
	void Purge(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE18NumElementsInBlockEv */
};

// <0229262E> ../public/tier0/utlblockmemory.h:31
// member functions: 71
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	UtlLinkedListElem_t<CLoadingResource*, short unsigned int>* Base(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const UtlLinkedListElem_t<CLoadingResource*, short unsigned int>* Base(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:45 */
	class Iterator_t {
		/* ../public/tier0/utlblockmemory.h:48 */
		void Iterator_t(Iterator_t* , short unsigned int);
		short unsigned int index; /* 0 2 */
		/* ../public/tier0/utlblockmemory.h:51 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlblockmemory.h:52 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	short unsigned int GetIndex(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , short unsigned int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	UtlLinkedListElem_t<CLoadingResource*, short unsigned int>& operator[](CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const UtlLinkedListElem_t<CLoadingResource*, short unsigned int>& operator[](const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:205 */
	UtlLinkedListElem_t<CLoadingResource*, short unsigned int>& Element(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const UtlLinkedListElem_t<CLoadingResource*, short unsigned int>& Element(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , short unsigned int);
	static const short unsigned int INVALID_INDEX = 65535; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	short unsigned int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>* );
	UtlLinkedListElem_t<CLoadingResource*, short unsigned int> * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtED4Ev */
	void Init(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE4InitEii */
	class UtlLinkedListElem_t<CLoadingResource*, short unsigned int> * Base(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE4BaseEv */
	const class UtlLinkedListElem_t<CLoadingResource*, short unsigned int>  * Base(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE4NextERKNS4_10Iterator_tE */
	short unsigned int GetIndex(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE8GetIndexERKNS4_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, short unsigned int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE10IsIdxAfterEtRKNS4_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE15IsValidIteratorERKNS4_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE15InvalidIteratorEv */
	class UtlLinkedListElem_t<CLoadingResource*, short unsigned int> & operator[](class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, short unsigned int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtEixEt */
	const class UtlLinkedListElem_t<CLoadingResource*, short unsigned int>  & operator[](const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, short unsigned int); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtEixEt */
	class UtlLinkedListElem_t<CLoadingResource*, short unsigned int> & Element(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, short unsigned int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE7ElementEt */
	const class UtlLinkedListElem_t<CLoadingResource*, short unsigned int>  & Element(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, short unsigned int); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE7ElementEt */
	bool IsIdxValid(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, short unsigned int); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE10IsIdxValidEt */
	short unsigned int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> &); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE4SwapERS4_ */
	int NumAllocated(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE5CountEv */
	int BlockSize(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE5PurgeEv */
	void Purge(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource*, short unsigned int>, short unsigned int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19UtlLinkedListElem_tIP16CLoadingResourcetEtE18NumElementsInBlockEv */
};

// <022D7BBB> ../public/tier0/utlblockmemory.h:31
// member functions: 37
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>* Base(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>* Base(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:45 */
	class Iterator_t {
		/* ../public/tier0/utlblockmemory.h:48 */
		void Iterator_t(Iterator_t* , short unsigned int);
		short unsigned int index; /* 0 2 */
		/* ../public/tier0/utlblockmemory.h:51 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlblockmemory.h:52 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	short unsigned int GetIndex(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , short unsigned int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>& operator[](CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>& operator[](const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:205 */
	UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>& Element(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>& Element(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , short unsigned int);
	static const short unsigned int INVALID_INDEX = 65535; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	short unsigned int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>, short unsigned int>* );
	UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int> * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <0231C7B8> ../public/tier0/utlblockmemory.h:31
// member functions: 37
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	UtlLinkedListElem_t<ExtRefList_t*, unsigned int>* Base(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const UtlLinkedListElem_t<ExtRefList_t*, unsigned int>* Base(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:45 */
	class Iterator_t {
		/* ../public/tier0/utlblockmemory.h:48 */
		void Iterator_t(Iterator_t* , unsigned int);
		unsigned int index; /* 0 4 */
		/* ../public/tier0/utlblockmemory.h:51 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlblockmemory.h:52 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	unsigned int GetIndex(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , unsigned int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	UtlLinkedListElem_t<ExtRefList_t*, unsigned int>& operator[](CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , unsigned int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const UtlLinkedListElem_t<ExtRefList_t*, unsigned int>& operator[](const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , unsigned int);
	/* ../public/tier0/utlblockmemory.h:205 */
	UtlLinkedListElem_t<ExtRefList_t*, unsigned int>& Element(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , unsigned int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const UtlLinkedListElem_t<ExtRefList_t*, unsigned int>& Element(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , unsigned int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , unsigned int);
	static const unsigned int INVALID_INDEX = 4294967295; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	unsigned int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t*, unsigned int>, unsigned int>* );
	UtlLinkedListElem_t<ExtRefList_t*, unsigned int> * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <0447FB79> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<unsigned int, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<unsigned int, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<unsigned int, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	unsigned int* Base(CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const unsigned int* Base(const CUtlBlockMemory<unsigned int, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<unsigned int, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<unsigned int, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<unsigned int, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<unsigned int, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	unsigned int& operator[](CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const unsigned int& operator[](const CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	unsigned int& Element(CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const unsigned int& Element(const CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<unsigned int, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<unsigned int, int>* , CUtlBlockMemory<unsigned int, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<unsigned int, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<unsigned int, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<unsigned int, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<unsigned int, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<unsigned int, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<unsigned int, int>* );
	unsigned int * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiED4Ev */
	void Init(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiE4InitEii */
	unsigned int * Base(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiE4BaseEv */
	const unsigned int  * Base(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE4NextERKNS0_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE8GetIndexERKNS0_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<unsigned int, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE10IsIdxAfterEiRKNS0_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE15IsValidIteratorERKNS0_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE15InvalidIteratorEv */
	unsigned int & operator[](class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiEixEi */
	const unsigned int  & operator[](const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiEixEi */
	unsigned int & Element(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE7ElementEi */
	const unsigned int  & Element(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryIjiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<unsigned int, int> *, class CUtlBlockMemory<unsigned int, int> &); /* linkage=_ZN15CUtlBlockMemoryIjiE4SwapERS0_ */
	int NumAllocated(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiE5PurgeEv */
	void Purge(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<unsigned int, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE18NumElementsInBlockEv */
};

// <058AF66C> ../../public/tier0/utlblockmemory.h:31
// member functions: 34
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CacheOptimizedTriangle_t, int> {
	/* ../../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:42 */
	CacheOptimizedTriangle_t* Base(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:43 */
	const CacheOptimizedTriangle_t* Base(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:189 */
	CacheOptimizedTriangle_t& operator[](CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:197 */
	const CacheOptimizedTriangle_t& operator[](const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:205 */
	CacheOptimizedTriangle_t& Element(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:213 */
	const CacheOptimizedTriangle_t& Element(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , CUtlBlockMemory<CacheOptimizedTriangle_t, int>& );
	/* ../../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
protected:
	/* ../../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	CacheOptimizedTriangle_t * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <058B2185> ../../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<Vector2D, int> {
	/* ../../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:42 */
	Vector2D* Base(CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:43 */
	const Vector2D* Base(const CUtlBlockMemory<Vector2D, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<Vector2D, int>* , int, const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:189 */
	Vector2D& operator[](CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:197 */
	const Vector2D& operator[](const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:205 */
	Vector2D& Element(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:213 */
	const Vector2D& Element(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<Vector2D, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<Vector2D, int>* , CUtlBlockMemory<Vector2D, int>& );
	/* ../../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<Vector2D, int>* );
	/* ../../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<Vector2D, int>* );
protected:
	/* ../../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<Vector2D, int>* );
	Vector2D * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiED4Ev */
	void Init(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4InitEii */
	class Vector2D * Base(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4BaseEv */
	const class Vector2D  * Base(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE4NextERKNS1_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE8GetIndexERKNS1_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<Vector2D, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10IsIdxAfterEiRKNS1_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE15IsValidIteratorERKNS1_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE15InvalidIteratorEv */
	class Vector2D & operator[](class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiEixEi */
	const class Vector2D  & operator[](const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiEixEi */
	class Vector2D & Element(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE7ElementEi */
	const class Vector2D  & Element(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<Vector2D, int> *, class CUtlBlockMemory<Vector2D, int> &); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4SwapERS1_ */
	int NumAllocated(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE5PurgeEv */
	void Purge(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<Vector2D, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE18NumElementsInBlockEv */
};

// <05A9C526> ../public/tier0/utlblockmemory.h:31
// member functions: 34
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CPackNode, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CPackNode, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CPackNode, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	CPackNode* Base(CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const CPackNode* Base(const CUtlBlockMemory<CPackNode, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CPackNode, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CPackNode, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CPackNode, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CPackNode, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	CPackNode& operator[](CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const CPackNode& operator[](const CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	CPackNode& Element(CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const CPackNode& Element(const CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CPackNode, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CPackNode, int>* , CUtlBlockMemory<CPackNode, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CPackNode, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CPackNode, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CPackNode, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CPackNode, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CPackNode, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CPackNode, int>* );
	CPackNode * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <05B8B40F> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<float const*, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<float const*, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<float const*, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	const float* * Base(CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const float* const* Base(const CUtlBlockMemory<float const*, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<float const*, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<float const*, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<float const*, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<float const*, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	const float* & operator[](CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const float* const& operator[](const CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	const float* & Element(CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const float* const& Element(const CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<float const*, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<float const*, int>* , CUtlBlockMemory<float const*, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<float const*, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<float const*, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<float const*, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<float const*, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<float const*, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<float const*, int>* );
	const float * * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<float const*, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<float const*, int> *); /* linkage=_ZN15CUtlBlockMemoryIPKfiED4Ev */
	void Init(class CUtlBlockMemory<float const*, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiE4InitEii */
	const float  * * Base(class CUtlBlockMemory<float const*, int> *); /* linkage=_ZN15CUtlBlockMemoryIPKfiE4BaseEv */
	const float  * const * Base(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<float const*, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE4NextERKNS2_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<float const*, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE8GetIndexERKNS2_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<float const*, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE10IsIdxAfterEiRKNS2_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<float const*, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE15IsValidIteratorERKNS2_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE15InvalidIteratorEv */
	const float  * & operator[](class CUtlBlockMemory<float const*, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiEixEi */
	const float  * const & operator[](const class CUtlBlockMemory<float const*, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIPKfiEixEi */
	const float  * & Element(class CUtlBlockMemory<float const*, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiE7ElementEi */
	const float  * const & Element(const class CUtlBlockMemory<float const*, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<float const*, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryIPKfiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<float const*, int> *, class CUtlBlockMemory<float const*, int> &); /* linkage=_ZN15CUtlBlockMemoryIPKfiE4SwapERS2_ */
	int NumAllocated(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<float const*, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<float const*, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<float const*, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<float const*, int> *); /* linkage=_ZN15CUtlBlockMemoryIPKfiE5PurgeEv */
	void Purge(class CUtlBlockMemory<float const*, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<float const*, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<float const*, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<float const*, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<float const*, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIPKfiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<float const*, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIPKfiE18NumElementsInBlockEv */
};

// <063FB0C8> ../public/tier0/utlblockmemory.h:31
// member functions: 34
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CacheOptimizedTriangle_t, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	CacheOptimizedTriangle_t* Base(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const CacheOptimizedTriangle_t* Base(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	CacheOptimizedTriangle_t& operator[](CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const CacheOptimizedTriangle_t& operator[](const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	CacheOptimizedTriangle_t& Element(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const CacheOptimizedTriangle_t& Element(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	static const int INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , CUtlBlockMemory<CacheOptimizedTriangle_t, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CacheOptimizedTriangle_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CacheOptimizedTriangle_t, int>* );
	CacheOptimizedTriangle_t * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <063FDBDD> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<Vector2D, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	Vector2D* Base(CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const Vector2D* Base(const CUtlBlockMemory<Vector2D, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<Vector2D, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<Vector2D, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	Vector2D& operator[](CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const Vector2D& operator[](const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	Vector2D& Element(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const Vector2D& Element(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<Vector2D, int>* , int);
	static const int INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<Vector2D, int>* , CUtlBlockMemory<Vector2D, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<Vector2D, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<Vector2D, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<Vector2D, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<Vector2D, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<Vector2D, int>* );
	Vector2D * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiED4Ev */
	void Init(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4InitEii */
	class Vector2D * Base(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4BaseEv */
	const class Vector2D  * Base(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE4NextERKNS1_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE8GetIndexERKNS1_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<Vector2D, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10IsIdxAfterEiRKNS1_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<Vector2D, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE15IsValidIteratorERKNS1_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE15InvalidIteratorEv */
	class Vector2D & operator[](class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiEixEi */
	const class Vector2D  & operator[](const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiEixEi */
	class Vector2D & Element(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE7ElementEi */
	const class Vector2D  & Element(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<Vector2D, int> *, class CUtlBlockMemory<Vector2D, int> &); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4SwapERS1_ */
	int NumAllocated(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<Vector2D, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<Vector2D, int> *); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE5PurgeEv */
	void Purge(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<Vector2D, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<Vector2D, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<Vector2D, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI8Vector2DiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<Vector2D, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI8Vector2DiE18NumElementsInBlockEv */
};

// <068B3138> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CVfxStaticComboData, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	CVfxStaticComboData* Base(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const CVfxStaticComboData* Base(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CVfxStaticComboData, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	CVfxStaticComboData& operator[](CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const CVfxStaticComboData& operator[](const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	CVfxStaticComboData& Element(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const CVfxStaticComboData& Element(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CVfxStaticComboData, int>* , CUtlBlockMemory<CVfxStaticComboData, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CVfxStaticComboData, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	CVfxStaticComboData * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiED4Ev */
	void Init(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4InitEii */
	class CVfxStaticComboData * Base(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4BaseEv */
	const class CVfxStaticComboData  * Base(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE4NextERKNS1_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE8GetIndexERKNS1_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10IsIdxAfterEiRKNS1_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE15IsValidIteratorERKNS1_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE15InvalidIteratorEv */
	class CVfxStaticComboData & operator[](class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiEixEi */
	const class CVfxStaticComboData  & operator[](const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiEixEi */
	class CVfxStaticComboData & Element(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE7ElementEi */
	const class CVfxStaticComboData  & Element(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<CVfxStaticComboData, int> *, class CUtlBlockMemory<CVfxStaticComboData, int> &); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4SwapERS1_ */
	int NumAllocated(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE5PurgeEv */
	void Purge(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE18NumElementsInBlockEv */
};

// <0004791C> ../../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CVfxStaticComboData, int> {
	/* ../../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:42 */
	CVfxStaticComboData* Base(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:43 */
	const CVfxStaticComboData* Base(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CVfxStaticComboData, int>* , int, const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CVfxStaticComboData, int>* , const Iterator_t& );
	/* ../../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:189 */
	CVfxStaticComboData& operator[](CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:197 */
	const CVfxStaticComboData& operator[](const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:205 */
	CVfxStaticComboData& Element(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:213 */
	const CVfxStaticComboData& Element(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	static const int INVALID_INDEX; /* 0 0 */
	/* ../../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CVfxStaticComboData, int>* , CUtlBlockMemory<CVfxStaticComboData, int>& );
	/* ../../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CVfxStaticComboData, int>* );
	/* ../../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CVfxStaticComboData, int>* );
protected:
	/* ../../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CVfxStaticComboData, int>* , int, int);
	/* ../../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CVfxStaticComboData, int>* , int);
	/* ../../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CVfxStaticComboData, int>* );
	CVfxStaticComboData * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiED4Ev */
	void Init(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4InitEii */
	class CVfxStaticComboData * Base(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4BaseEv */
	const class CVfxStaticComboData  * Base(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE4NextERKNS1_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE8GetIndexERKNS1_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10IsIdxAfterEiRKNS1_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE15IsValidIteratorERKNS1_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE15InvalidIteratorEv */
	class CVfxStaticComboData & operator[](class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiEixEi */
	const class CVfxStaticComboData  & operator[](const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiEixEi */
	class CVfxStaticComboData & Element(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE7ElementEi */
	const class CVfxStaticComboData  & Element(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<CVfxStaticComboData, int> *, class CUtlBlockMemory<CVfxStaticComboData, int> &); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4SwapERS1_ */
	int NumAllocated(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<CVfxStaticComboData, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<CVfxStaticComboData, int> *); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE5PurgeEv */
	void Purge(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<CVfxStaticComboData, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<CVfxStaticComboData, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19CVfxStaticComboDataiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<CVfxStaticComboData, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19CVfxStaticComboDataiE18NumElementsInBlockEv */
};

// <004DB8B9> ../public/tier0/utlblockmemory.h:31
// member functions: 37
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>* Base(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>* Base(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:45 */
	class Iterator_t {
		/* ../public/tier0/utlblockmemory.h:48 */
		void Iterator_t(Iterator_t* , short unsigned int);
		short unsigned int index; /* 0 2 */
		/* ../public/tier0/utlblockmemory.h:51 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlblockmemory.h:52 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	short unsigned int GetIndex(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>& operator[](CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>& operator[](const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:205 */
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>& Element(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>& Element(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	static const short unsigned int INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	short unsigned int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int> * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <004DBFEC> ../public/tier0/utlblockmemory.h:31
// member functions: 34
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CFontTextureCache::Page_t, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	Page_t* Base(CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const Page_t* Base(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	Page_t& operator[](CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const Page_t& operator[](const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	Page_t& Element(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const Page_t& Element(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	static const int INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , CUtlBlockMemory<CFontTextureCache::Page_t, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	Page_t * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <005247B2> ../public/tier0/utlblockmemory.h:31
// member functions: 37
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>* Base(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>* Base(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:45 */
	class Iterator_t {
		/* ../public/tier0/utlblockmemory.h:48 */
		void Iterator_t(Iterator_t* , short unsigned int);
		short unsigned int index; /* 0 2 */
		/* ../public/tier0/utlblockmemory.h:51 */
		bool operator==(const Iterator_t* , Iterator_t);
		/* ../public/tier0/utlblockmemory.h:52 */
		bool operator!=(const Iterator_t* , Iterator_t);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	short unsigned int GetIndex(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>& operator[](CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>& operator[](const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:205 */
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>& Element(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>& Element(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , short unsigned int);
	static const short unsigned int INVALID_INDEX = 65535; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	short unsigned int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>* );
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int> * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <00524FAD> ../public/tier0/utlblockmemory.h:31
// member functions: 34
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<CFontTextureCache::Page_t, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	Page_t* Base(CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const Page_t* Base(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	Page_t& operator[](CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const Page_t& operator[](const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	Page_t& Element(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const Page_t& Element(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , CUtlBlockMemory<CFontTextureCache::Page_t, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<CFontTextureCache::Page_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<CFontTextureCache::Page_t, int>* );
	Page_t * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
};

// <00036521> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<char, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	char* Base(CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const char* Base(const CUtlBlockMemory<char, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<char, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	char& operator[](CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const char& operator[](const CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	char& Element(CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const char& Element(const CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<char, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<char, int>* , CUtlBlockMemory<char, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<char, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<char, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<char, int>* );
	char * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<char, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIciEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<char, int> *); /* linkage=_ZN15CUtlBlockMemoryIciED4Ev */
	void Init(class CUtlBlockMemory<char, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIciE4InitEii */
	char * Base(class CUtlBlockMemory<char, int> *); /* linkage=_ZN15CUtlBlockMemoryIciE4BaseEv */
	const char  * Base(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<char, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIciE4NextERKNS0_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<char, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIciE8GetIndexERKNS0_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<char, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIciE10IsIdxAfterEiRKNS0_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<char, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIciE15IsValidIteratorERKNS0_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE15InvalidIteratorEv */
	char & operator[](class CUtlBlockMemory<char, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIciEixEi */
	const char  & operator[](const class CUtlBlockMemory<char, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIciEixEi */
	char & Element(class CUtlBlockMemory<char, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIciE7ElementEi */
	const char  & Element(const class CUtlBlockMemory<char, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIciE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<char, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIciE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryIciE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<char, int> *, class CUtlBlockMemory<char, int> &); /* linkage=_ZN15CUtlBlockMemoryIciE4SwapERS0_ */
	int NumAllocated(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE5CountEv */
	int BlockSize(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<char, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIciE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<char, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIciE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<char, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIciE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<char, int> *); /* linkage=_ZN15CUtlBlockMemoryIciE5PurgeEv */
	void Purge(class CUtlBlockMemory<char, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIciE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<char, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryIciE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<char, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIciE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<char, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIciE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<char, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIciE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<char, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIciE18NumElementsInBlockEv */
};

// <00089AB1> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<unsigned char, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<unsigned char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<unsigned char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	unsigned char* Base(CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const unsigned char* Base(const CUtlBlockMemory<unsigned char, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<unsigned char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<unsigned char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<unsigned char, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<unsigned char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	unsigned char& operator[](CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const unsigned char& operator[](const CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	unsigned char& Element(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const unsigned char& Element(const CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<unsigned char, int>* , int);
	static const int INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<unsigned char, int>* , CUtlBlockMemory<unsigned char, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<unsigned char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<unsigned char, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<unsigned char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<unsigned char, int>* );
	unsigned char * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiED4Ev */
	void Init(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiE4InitEii */
	unsigned int * Base(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiE4BaseEv */
	const unsigned int  * Base(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE4NextERKNS0_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE8GetIndexERKNS0_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<unsigned int, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE10IsIdxAfterEiRKNS0_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE15IsValidIteratorERKNS0_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE15InvalidIteratorEv */
	unsigned int & operator[](class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiEixEi */
	const unsigned int  & operator[](const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiEixEi */
	unsigned int & Element(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE7ElementEi */
	const unsigned int  & Element(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryIjiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<unsigned int, int> *, class CUtlBlockMemory<unsigned int, int> &); /* linkage=_ZN15CUtlBlockMemoryIjiE4SwapERS0_ */
	int NumAllocated(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiE5PurgeEv */
	void Purge(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<unsigned int, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE18NumElementsInBlockEv */
};

// <0008C6CF> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<FileHandleTracker_t, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<FileHandleTracker_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<FileHandleTracker_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	FileHandleTracker_t* Base(CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const FileHandleTracker_t* Base(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<FileHandleTracker_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<FileHandleTracker_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<FileHandleTracker_t, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<FileHandleTracker_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	FileHandleTracker_t& operator[](CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const FileHandleTracker_t& operator[](const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	FileHandleTracker_t& Element(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const FileHandleTracker_t& Element(const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	static const int INVALID_INDEX; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<FileHandleTracker_t, int>* , CUtlBlockMemory<FileHandleTracker_t, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<FileHandleTracker_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<FileHandleTracker_t, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<FileHandleTracker_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	FileHandleTracker_t * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<FileHandleTracker_t, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiED4Ev */
	void Init(class CUtlBlockMemory<FileHandleTracker_t, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE4InitEii */
	class FileHandleTracker_t * Base(class CUtlBlockMemory<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE4BaseEv */
	const class FileHandleTracker_t  * Base(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE4NextERKNS1_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE8GetIndexERKNS1_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10IsIdxAfterEiRKNS1_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE15IsValidIteratorERKNS1_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE15InvalidIteratorEv */
	class FileHandleTracker_t & operator[](class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiEixEi */
	const class FileHandleTracker_t  & operator[](const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiEixEi */
	class FileHandleTracker_t & Element(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE7ElementEi */
	const class FileHandleTracker_t  & Element(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<FileHandleTracker_t, int> *, class CUtlBlockMemory<FileHandleTracker_t, int> &); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE4SwapERS1_ */
	int NumAllocated(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<FileHandleTracker_t, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE5PurgeEv */
	void Purge(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE18NumElementsInBlockEv */
};

// <001F683F> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<unsigned char, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<unsigned char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<unsigned char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	unsigned char* Base(CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const unsigned char* Base(const CUtlBlockMemory<unsigned char, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<unsigned char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<unsigned char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<unsigned char, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<unsigned char, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	unsigned char& operator[](CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const unsigned char& operator[](const CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	unsigned char& Element(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const unsigned char& Element(const CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<unsigned char, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<unsigned char, int>* , CUtlBlockMemory<unsigned char, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<unsigned char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<unsigned char, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<unsigned char, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<unsigned char, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<unsigned char, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<unsigned char, int>* );
	unsigned char * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiED4Ev */
	void Init(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiE4InitEii */
	unsigned int * Base(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiE4BaseEv */
	const unsigned int  * Base(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE4NextERKNS0_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE8GetIndexERKNS0_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<unsigned int, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE10IsIdxAfterEiRKNS0_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<unsigned int, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryIjiE15IsValidIteratorERKNS0_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE15InvalidIteratorEv */
	unsigned int & operator[](class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiEixEi */
	const unsigned int  & operator[](const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiEixEi */
	unsigned int & Element(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE7ElementEi */
	const unsigned int  & Element(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryIjiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<unsigned int, int> *, class CUtlBlockMemory<unsigned int, int> &); /* linkage=_ZN15CUtlBlockMemoryIjiE4SwapERS0_ */
	int NumAllocated(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<unsigned int, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryIjiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<unsigned int, int> *); /* linkage=_ZN15CUtlBlockMemoryIjiE5PurgeEv */
	void Purge(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<unsigned int, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<unsigned int, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryIjiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<unsigned int, int> *, int); /* linkage=_ZN15CUtlBlockMemoryIjiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<unsigned int, int>  *); /* linkage=_ZNK15CUtlBlockMemoryIjiE18NumElementsInBlockEv */
};

// <001F9621> ../public/tier0/utlblockmemory.h:31
// member functions: 68
// member variables: 4
// static member variable: 1
// class size: 16
class CUtlBlockMemory<FileHandleTracker_t, int> {
	/* ../public/tier0/utlblockmemory.h:123 */
	void CUtlBlockMemory(CUtlBlockMemory<FileHandleTracker_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:130 */
	void ~CUtlBlockMemory(CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:160 */
	void Init(CUtlBlockMemory<FileHandleTracker_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:42 */
	FileHandleTracker_t* Base(CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:43 */
	const FileHandleTracker_t* Base(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	class Iterator_t {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlblockmemory.h:54 */
	Iterator_t First(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:55 */
	Iterator_t Next(const CUtlBlockMemory<FileHandleTracker_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:56 */
	int GetIndex(const CUtlBlockMemory<FileHandleTracker_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:57 */
	bool IsIdxAfter(const CUtlBlockMemory<FileHandleTracker_t, int>* , int, const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:58 */
	bool IsValidIterator(const CUtlBlockMemory<FileHandleTracker_t, int>* , const Iterator_t& );
	/* ../public/tier0/utlblockmemory.h:59 */
	Iterator_t InvalidIterator(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:189 */
	FileHandleTracker_t& operator[](CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:197 */
	const FileHandleTracker_t& operator[](const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:205 */
	FileHandleTracker_t& Element(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:213 */
	const FileHandleTracker_t& Element(const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:241 */
	bool IsIdxValid(const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	static const int INVALID_INDEX = 18446744073709551615; /* 0 0 */
	/* ../public/tier0/utlblockmemory.h:72 */
	int InvalidIndex(void);
	/* ../public/tier0/utlblockmemory.h:140 */
	void Swap(CUtlBlockMemory<FileHandleTracker_t, int>* , CUtlBlockMemory<FileHandleTracker_t, int>& );
	/* ../public/tier0/utlblockmemory.h:225 */
	int NumAllocated(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:78 */
	int Count(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:79 */
	int BlockSize(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:80 */
	int BlockCount(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:231 */
	size_t AllocSize(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:247 */
	void Grow(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:309 */
	void EnsureCapacity(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:323 */
	int EnsureContiguousCapacity(CUtlBlockMemory<FileHandleTracker_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:354 */
	void Purge(CUtlBlockMemory<FileHandleTracker_t, int>* );
	/* ../public/tier0/utlblockmemory.h:372 */
	void Purge(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:103 */
	bool IsUsingGrowableMemory(const CUtlBlockMemory<FileHandleTracker_t, int>* );
protected:
	/* ../public/tier0/utlblockmemory.h:106 */
	int Index(const CUtlBlockMemory<FileHandleTracker_t, int>* , int, int);
	/* ../public/tier0/utlblockmemory.h:107 */
	int MajorIndex(const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:108 */
	int MinorIndex(const CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:259 */
	void ChangeSize(CUtlBlockMemory<FileHandleTracker_t, int>* , int);
	/* ../public/tier0/utlblockmemory.h:110 */
	int NumElementsInBlock(const CUtlBlockMemory<FileHandleTracker_t, int>* );
	FileHandleTracker_t * * m_pMemory; /* 0 8 */
	int m_nBlocks; /* 8 4 */
	uint32 m_nIndexMask:27; /* 12: 0 4 */
	uint32 m_nIndexShift:5; /* 12:27 4 */
	void CUtlBlockMemory(class CUtlBlockMemory<FileHandleTracker_t, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiEC4Eii */
	void ~CUtlBlockMemory(class CUtlBlockMemory<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiED4Ev */
	void Init(class CUtlBlockMemory<FileHandleTracker_t, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE4InitEii */
	class FileHandleTracker_t * Base(class CUtlBlockMemory<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE4BaseEv */
	const class FileHandleTracker_t  * Base(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE4BaseEv */
	class Iterator_t First(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE5FirstEv */
	class Iterator_t Next(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE4NextERKNS1_10Iterator_tE */
	int GetIndex(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE8GetIndexERKNS1_10Iterator_tE */
	bool IsIdxAfter(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10IsIdxAfterEiRKNS1_10Iterator_tE */
	bool IsValidIterator(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, const class Iterator_t  &); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE15IsValidIteratorERKNS1_10Iterator_tE */
	class Iterator_t InvalidIterator(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE15InvalidIteratorEv */
	class FileHandleTracker_t & operator[](class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiEixEi */
	const class FileHandleTracker_t  & operator[](const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiEixEi */
	class FileHandleTracker_t & Element(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE7ElementEi */
	const class FileHandleTracker_t  & Element(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE7ElementEi */
	bool IsIdxValid(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10IsIdxValidEi */
	int InvalidIndex(void); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE12InvalidIndexEv */
	void Swap(class CUtlBlockMemory<FileHandleTracker_t, int> *, class CUtlBlockMemory<FileHandleTracker_t, int> &); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE4SwapERS1_ */
	int NumAllocated(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE12NumAllocatedEv */
	int Count(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE5CountEv */
	int BlockSize(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE9BlockSizeEv */
	int BlockCount(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10BlockCountEv */
	size_t AllocSize(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE9AllocSizeEv */
	void Grow(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE4GrowEi */
	void EnsureCapacity(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE14EnsureCapacityEi */
	int EnsureContiguousCapacity(class CUtlBlockMemory<FileHandleTracker_t, int> *, int, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE24EnsureContiguousCapacityEii */
	void Purge(class CUtlBlockMemory<FileHandleTracker_t, int> *); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE5PurgeEv */
	void Purge(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE5PurgeEi */
	bool IsUsingGrowableMemory(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE21IsUsingGrowableMemoryEv */
	int Index(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE5IndexEii */
	int MajorIndex(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10MajorIndexEi */
	int MinorIndex(const class CUtlBlockMemory<FileHandleTracker_t, int>  *, int); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE10MinorIndexEi */
	void ChangeSize(class CUtlBlockMemory<FileHandleTracker_t, int> *, int); /* linkage=_ZN15CUtlBlockMemoryI19FileHandleTracker_tiE10ChangeSizeEi */
	int NumElementsInBlock(const class CUtlBlockMemory<FileHandleTracker_t, int>  *); /* linkage=_ZNK15CUtlBlockMemoryI19FileHandleTracker_tiE18NumElementsInBlockEv */
};

// <068E5CC7> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<CVfxStaticComboData, int>::Base()
{
} /* size: 0 */

// <06286854> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Base()
{
} /* size: 0 */

// <06286822> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<Vector2D, int>::Base()
{
} /* size: 0 */

// <05BAB926> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<float const::Base()
{
} /* size: 0 */

// <05A9DFAA> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<CPackNode, int>::Base()
{
} /* size: 0 */

// <0448DFBE> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<unsigned int, int>::Base()
{
} /* size: 0 */

// <0234CC4D> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::Base()
{
} /* size: 0 */

// <022D9DC0> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::Base()
{
} /* size: 0 */

// <022A0358> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::Base()
{
} /* size: 0 */

// <005322AB> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Base()
{
} /* size: 0 */

// <0052ECA5> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<CFontTextureCache::Page_t, int>::Base()
{
} /* size: 0 */

// <0020F9CA> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<unsigned char, int>::Base()
{
} /* size: 0 */

// <0020F9B1> ../public/tier0/utlblockmemory.h:42
inline void CUtlBlockMemory<FileHandleTracker_t, int>::Base()
{
} /* size: 0 */

// <0234CCF1> ../public/tier0/utlblockmemory.h:48
void Iterator_t::Iterator_t(unsigned int i)
{
} /* size: 0 */

// <0234CCCE> ../public/tier0/utlblockmemory.h:48
inline void Iterator_t::Iterator_t(unsigned int i)
{
} /* size: 0 */

// <022D9DFC> ../public/tier0/utlblockmemory.h:48
void Iterator_t::Iterator_t(short unsigned int i)
{
} /* size: 0 */

// <022D9DD9> ../public/tier0/utlblockmemory.h:48
inline void Iterator_t::Iterator_t(short unsigned int i)
{
} /* size: 0 */

// <02350C54> ../public/tier0/utlblockmemory.h:51
inline void Iterator_t::operator==(const Iterator_t it)
{
} /* size: 0 */

// <02350C17> ../public/tier0/utlblockmemory.h:52
inline void Iterator_t::operator!=(const Iterator_t it)
{
} /* size: 0 */

// <02350C3B> ../public/tier0/utlblockmemory.h:54
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::First()
{
} /* size: 0 */

// <022D9E84> ../public/tier0/utlblockmemory.h:54
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::First()
{
} /* size: 0 */

// <022A041C> ../public/tier0/utlblockmemory.h:54
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::First()
{
} /* size: 0 */

// <00534783> ../public/tier0/utlblockmemory.h:54
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::First()
{
} /* size: 0 */

// <02350BF3> ../public/tier0/utlblockmemory.h:55
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::Next(const Iterator_t& it)
{
} /* size: 0 */

// <022D9E3C> ../public/tier0/utlblockmemory.h:55
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::Next(const Iterator_t& it)
{
} /* size: 0 */

// <022A03D4> ../public/tier0/utlblockmemory.h:55
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::Next(const Iterator_t& it)
{
} /* size: 0 */

// <0053473B> ../public/tier0/utlblockmemory.h:55
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Next(const Iterator_t& it)
{
} /* size: 0 */

// <02350BCF> ../public/tier0/utlblockmemory.h:56
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::GetIndex(const Iterator_t& it)
{
} /* size: 0 */

// <022D9E18> ../public/tier0/utlblockmemory.h:56
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::GetIndex(const Iterator_t& it)
{
} /* size: 0 */

// <022A03B0> ../public/tier0/utlblockmemory.h:56
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::GetIndex(const Iterator_t& it)
{
} /* size: 0 */

// <00534717> ../public/tier0/utlblockmemory.h:56
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::GetIndex(const Iterator_t& it)
{
} /* size: 0 */

// <0234CC1F> ../public/tier0/utlblockmemory.h:57
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxAfter(unsigned int i, const Iterator_t& it)
{
} /* size: 0 */

// <022D9B9C> ../public/tier0/utlblockmemory.h:57
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxAfter(short unsigned int i, const Iterator_t& it)
{
} /* size: 0 */

// <0229ED20> ../public/tier0/utlblockmemory.h:57
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxAfter(short unsigned int i, const Iterator_t& it)
{
} /* size: 0 */

// <00533E49> ../public/tier0/utlblockmemory.h:57
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxAfter(short unsigned int i, const Iterator_t& it)
{
} /* size: 0 */

// <0234C3D0> ../public/tier0/utlblockmemory.h:58
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <022D9C44> ../public/tier0/utlblockmemory.h:58
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <0229EDC8> ../public/tier0/utlblockmemory.h:58
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <00532027> ../public/tier0/utlblockmemory.h:58
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsValidIterator(const Iterator_t& it)
{
} /* size: 0 */

// <02350D22> ../public/tier0/utlblockmemory.h:59
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::InvalidIterator()
{
} /* size: 0 */

// <022DB6E7> ../public/tier0/utlblockmemory.h:59
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::InvalidIterator()
{
} /* size: 0 */

// <022A2E43> ../public/tier0/utlblockmemory.h:59
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::InvalidIterator()
{
} /* size: 0 */

// <005347C7> ../public/tier0/utlblockmemory.h:59
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::InvalidIterator()
{
} /* size: 0 */

// <0235001A> ../public/tier0/utlblockmemory.h:72
inline void InvalidIndex(void)
{
} /* size: 0 */

// <00049FF3> ../public/tier0/utlblockmemory.h:78
inline void CUtlBlockMemory<char, int>::Count()
{
} /* size: 0 */

// <0004BE5E> ../public/tier0/utlblockmemory.h:79
inline void CUtlBlockMemory<char, int>::BlockSize()
{
} /* size: 0 */

// <0004AAEA> ../public/tier0/utlblockmemory.h:80
inline void CUtlBlockMemory<char, int>::BlockCount()
{
} /* size: 0 */

// <069E39C9> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(int i)
{
} /* size: 0 */

// <062EB0FB> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(int i)
{
} /* size: 0 */

// <062E9EBD> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<Vector2D, int>::MajorIndex(int i)
{
} /* size: 0 */

// <05A9E737> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<CPackNode, int>::MajorIndex(int i)
{
} /* size: 0 */

// <0448DE8E> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<unsigned int, int>::MajorIndex(int i)
{
} /* size: 0 */

// <0234F07B> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MajorIndex(int i)
{
} /* size: 0 */

// <022DB54E> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MajorIndex(int i)
{
} /* size: 0 */

// <022A1B91> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MajorIndex(int i)
{
} /* size: 0 */

// <00511220> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<float const::MajorIndex(int i)
{
} /* size: 0 */

// <005337F5> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(int i)
{
} /* size: 0 */

// <005335AA> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(int i)
{
} /* size: 0 */

// <0004A048> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<char, int>::MajorIndex(int i)
{
} /* size: 0 */

// <00211201> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<unsigned char, int>::MajorIndex(int i)
{
} /* size: 0 */

// <00210F5A> ../public/tier0/utlblockmemory.h:107
inline void CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(int i)
{
} /* size: 0 */

// <069E39A6> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(int i)
{
} /* size: 0 */

// <062EB0D8> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MinorIndex(int i)
{
} /* size: 0 */

// <062E9E9A> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<Vector2D, int>::MinorIndex(int i)
{
} /* size: 0 */

// <05A9E714> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<CPackNode, int>::MinorIndex(int i)
{
} /* size: 0 */

// <0448DE6B> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<unsigned int, int>::MinorIndex(int i)
{
} /* size: 0 */

// <0234F058> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::MinorIndex(int i)
{
} /* size: 0 */

// <022DB52B> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::MinorIndex(int i)
{
} /* size: 0 */

// <022A1B6E> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::MinorIndex(int i)
{
} /* size: 0 */

// <005111FD> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<float const::MinorIndex(int i)
{
} /* size: 0 */

// <005337D2> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(int i)
{
} /* size: 0 */

// <00532151> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(int i)
{
} /* size: 0 */

// <0004A025> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<char, int>::MinorIndex(int i)
{
} /* size: 0 */

// <002111DE> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<unsigned char, int>::MinorIndex(int i)
{
} /* size: 0 */

// <00210F37> ../public/tier0/utlblockmemory.h:108
inline void CUtlBlockMemory<FileHandleTracker_t, int>::MinorIndex(int i)
{
} /* size: 0 */

// <068EA7E5> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<CVfxStaticComboData, int>::NumElementsInBlock()
{
} /* size: 0 */

// <062E9F96> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::NumElementsInBlock()
{
} /* size: 0 */

// <062E9F40> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<Vector2D, int>::NumElementsInBlock()
{
} /* size: 0 */

// <05BAA5DD> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<float const::NumElementsInBlock()
{
} /* size: 0 */

// <05A9E7D3> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<CPackNode, int>::NumElementsInBlock()
{
} /* size: 0 */

// <0448DE52> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<unsigned int, int>::NumElementsInBlock()
{
} /* size: 0 */

// <0234A702> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::NumElementsInBlock()
{
} /* size: 0 */

// <022D9B03> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::NumElementsInBlock()
{
} /* size: 0 */

// <0229D23D> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::NumElementsInBlock()
{
} /* size: 0 */

// <005323A0> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<CFontTextureCache::Page_t, int>::NumElementsInBlock()
{
} /* size: 0 */

// <0052EC68> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::NumElementsInBlock()
{
} /* size: 0 */

// <0004A00C> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<char, int>::NumElementsInBlock()
{
} /* size: 0 */

// <002112E0> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<unsigned char, int>::NumElementsInBlock()
{
} /* size: 0 */

// <00210F1E> ../public/tier0/utlblockmemory.h:110
inline void CUtlBlockMemory<FileHandleTracker_t, int>::NumElementsInBlock()
{
} /* size: 0 */

// <068EAC8F> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<CVfxStaticComboData, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <06080B6C> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <060808DE> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<Vector2D, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <05BB123F> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<float const::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <05A9E6F3> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<CPackNode, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <0448FF69> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<unsigned int, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <02350D01> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <022DB60E> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <022A1C51> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00533B15> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00533A84> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<CFontTextureCache::Page_t, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <0004BF30> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<char, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00211750> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<unsigned char, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <00211590> ../public/tier0/utlblockmemory.h:123
void CUtlBlockMemory<FileHandleTracker_t, int>::CUtlBlockMemory(int nGrowSize, int nInitAllocationCount)
{
} /* size: 0 */

// <068EEE18> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<CVfxStaticComboData, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <0608AEC5> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <0608AC51> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<Vector2D, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <05BB5A87> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<float const::~CUtlBlockMemory()
{
} /* size: 0 */

// <05A9EF5C> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<CPackNode, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <044A89F9> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<unsigned int, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <0235510E> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::~CUtlBlockMemory()
{
} /* size: 0 */

// <022DB5C6> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::~CUtlBlockMemory()
{
} /* size: 0 */

// <022A1C09> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::~CUtlBlockMemory()
{
} /* size: 0 */

// <00534A06> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <00534969> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<CFontTextureCache::Page_t, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <0004BEE8> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<char, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <00217D30> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<unsigned char, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <00217BA7> ../public/tier0/utlblockmemory.h:130
void CUtlBlockMemory<FileHandleTracker_t, int>::~CUtlBlockMemory()
{
} /* size: 0 */

// <0004BDA2> ../public/tier0/utlblockmemory.h:140
// variable: 1
void CUtlBlockMemory<char, int>::Swap(CUtlBlockMemory<char, int>& mem)
{
	uint32 nTmp; // 146
} /* size: 0, variables: 1 */

// <068E5DF2> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CVfxStaticComboData, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 62373
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <0607795B> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 11751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Purge(); // 354
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::NumElementsInBlock(); // 252
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Grow(
		int num);  // 181
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <06077585> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<Vector2D, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 11751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<Vector2D, int>::Purge(); // 354
	CUtlBlockMemory<Vector2D, int>::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<Vector2D, int>::NumElementsInBlock(); // 252
	CUtlBlockMemory<Vector2D, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<Vector2D, int>::Grow(
		int num);  // 181
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05BAD874> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<float const::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 39217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<float const::Purge(); // 354
	CUtlBlockMemory<float const::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<float const::NumElementsInBlock(); // 252
	CUtlBlockMemory<float const::Grow(
		int num);  // 247
	CUtlBlockMemory<float const::Grow(
		int num);  // 181
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05A9E049> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<CPackNode, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 20515
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<CPackNode, int>::Purge(); // 354
	CUtlBlockMemory<CPackNode, int>::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<CPackNode, int>::NumElementsInBlock(); // 252
	CUtlBlockMemory<CPackNode, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<CPackNode, int>::Grow(
		int num);  // 181
} /* size: 468, variables: 1, inline expansions: 6 (259 bytes) */

// <04AA88FE> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 35503
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <04AA86F8> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<Vector2D, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 35503
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <0448E13F> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<unsigned int, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 6508
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<unsigned int, int>::Purge(); // 354
	CUtlBlockMemory<unsigned int, int>::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 252
	CUtlBlockMemory<unsigned int, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<unsigned int, int>::Grow(
		int num);  // 181
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <02E22D3D> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 63277
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <02E22B6B> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<Vector2D, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 63277
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <0234CC66> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 58294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <022D9CD8> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 48939
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <0229EE68> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 18952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <02CEEDBC> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<float const::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 32110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<float const::Purge(); // 354
	CUtlBlockMemory<float const::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<float const::NumElementsInBlock(); // 252
	CUtlBlockMemory<float const::Grow(
		int num);  // 247
	CUtlBlockMemory<float const::Grow(
		int num);  // 181
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <01DED76C> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 43026
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <01DED566> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<Vector2D, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 43026
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <01AE9851> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<unsigned int, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 46897
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<unsigned int, int>::Purge(); // 354
	CUtlBlockMemory<unsigned int, int>::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 252
	CUtlBlockMemory<unsigned int, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<unsigned int, int>::Grow(
		int num);  // 181
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <01582A74> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CVfxStaticComboData, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 42714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <0044D311> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CVfxStaticComboData, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 43220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <014D89F4> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<float const::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 22294
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<float const::Purge(); // 354
	CUtlBlockMemory<float const::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<float const::NumElementsInBlock(); // 252
	CUtlBlockMemory<float const::Grow(
		int num);  // 247
	CUtlBlockMemory<float const::Grow(
		int num);  // 181
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <00A23741> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 17751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <00A2353B> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<Vector2D, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 17751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <0096F0B4> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<unsigned int, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 39617
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<unsigned int, int>::Purge(); // 354
	CUtlBlockMemory<unsigned int, int>::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 252
	CUtlBlockMemory<unsigned int, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<unsigned int, int>::Grow(
		int num);  // 181
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <007A1723> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CVfxStaticComboData, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 21691
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <005322C4> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 16910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <00532243> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<CFontTextureCache::Page_t, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 16910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <0004A08E> ../public/tier0/utlblockmemory.h:160
// variables: 4
// function calls: 6
void CUtlBlockMemory<char, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 40546
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
	{
		int i; // 359
	}
	CUtlBlockMemory<char, int>::Purge(); // 354
	CUtlBlockMemory<char, int>::Purge(); // 162
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 169
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 252
	CUtlBlockMemory<char, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<char, int>::Grow(
		int num);  // 181
} /* size: 468, variables: 1, inline expansions: 6 (259 bytes) */

// <0020FDF2> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<unsigned char, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 25228
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <0020FD4C> ../public/tier0/utlblockmemory.h:160
// variables: 3
void CUtlBlockMemory<FileHandleTracker_t, int>::Init(int nGrowSize, int nInitSize)
{
	const char   __FUNCTION__; // 25228
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

// <069E5772> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 26560
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <068EE941> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 62530
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <06310886> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 4878
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0630FB86> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 4878
	CacheOptimizedTriangle_t* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0606F3BD> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 11898
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <05A9EFC7> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CPackNode, int>::operator[](int i)
{
	const char   __FUNCTION__; // 20536
	CPackNode* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <04AA5E3E> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 35655
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0448FA57> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<unsigned int, int>::operator[](int i)
{
	const char   __FUNCTION__; // 6592
	unsigned int* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <02E1BF5F> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 63439
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <02353748> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](unsigned int i)
{
	const char   __FUNCTION__; // 58456
	UtlLinkedListElem_t<ExtRefList_t*, unsigned int>* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <022DBE82> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](short unsigned int i)
{
	const char   __FUNCTION__; // 49002
	UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <022A3911> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](short unsigned int i)
{
	const char   __FUNCTION__; // 19104
	UtlLinkedListElem_t<CLoadingResource*, short unsigned int>* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <02F3539B> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 11544
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <02F3469B> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 11544
	CacheOptimizedTriangle_t* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <01DEACAC> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 43178
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <01AEB169> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<unsigned int, int>::operator[](int i)
{
	const char   __FUNCTION__; // 46981
	unsigned int* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <016823F4> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 6901
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0158B5C3> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 42871
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0054CC91> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 7407
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <00455E60> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 43377
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <005115CC> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<float const::operator[](int i)
{
	const char   __FUNCTION__; // 19304
	const float ** pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0171EFD3> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 1728
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0171E2D3> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 1728
	CacheOptimizedTriangle_t* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <00A20C81> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 17903
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <00400075> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 50335
	Vector2D* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <009709CC> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<unsigned int, int>::operator[](int i)
{
	const char   __FUNCTION__; // 39701
	unsigned int* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <008A10A3> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 51414
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <007AA272> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 21848
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <005345F8> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 16994
	Page_t* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <005338B5> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](short unsigned int i)
{
	const char   __FUNCTION__; // 16994
	UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0039E1D6> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 46655
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0015EC62> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 62831
	CVfxStaticComboData* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0004BE77> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<char, int>::operator[](int i)
{
	const char   __FUNCTION__; // 40698
	char* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0021772B> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<unsigned char, int>::operator[](int i)
{
	const char   __FUNCTION__; // 25390
	unsigned char* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <0021761F> ../public/tier0/utlblockmemory.h:189
// variables: 3
inline void CUtlBlockMemory<FileHandleTracker_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 25390
	FileHandleTracker_t* pBlock; // 192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
} /* size: 0, variables: 2 */

// <069E5D21> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 26560
	const CVfxStaticComboData* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <063124AC> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 4878
	const CacheOptimizedTriangle_t* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <0630F2CF> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 4878
	const Vector2D* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <05B2ABF0> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 64273
	const CacheOptimizedTriangle_t* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <0234CBD1> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::operator[](unsigned int i)
{
	const char   __FUNCTION__; // 58456
	const UtlLinkedListElem_t<ExtRefList_t*, unsigned int>* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <022D9B4E> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::operator[](short unsigned int i)
{
	const char   __FUNCTION__; // 49002
	const UtlLinkedListElem_t<CStreamingResourceData*, short unsigned int>* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <0229ECD2> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::operator[](short unsigned int i)
{
	const char   __FUNCTION__; // 19104
	const UtlLinkedListElem_t<CLoadingResource*, short unsigned int>* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <02F36FC1> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 11544
	const CacheOptimizedTriangle_t* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <02F33DE4> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 11544
	const Vector2D* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <02E0338A> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 20896
	const CacheOptimizedTriangle_t* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <016829A3> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 6901
	const CVfxStaticComboData* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <0054D240> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 7407
	const CVfxStaticComboData* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <00511550> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<float const::operator[](int i)
{
	const char   __FUNCTION__; // 19304
	const float* const* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <01720BF9> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 1728
	const CacheOptimizedTriangle_t* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <0171DA1C> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<Vector2D, int>::operator[](int i)
{
	const char   __FUNCTION__; // 1728
	const Vector2D* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <015ECFC2> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 11080
	const CacheOptimizedTriangle_t* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <0040951E> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](int i)
{
	const char   __FUNCTION__; // 50335
	const CacheOptimizedTriangle_t* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <008A1652> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<CVfxStaticComboData, int>::operator[](int i)
{
	const char   __FUNCTION__; // 51414
	const CVfxStaticComboData* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <005335CD> ../public/tier0/utlblockmemory.h:197
// variables: 3
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](short unsigned int i)
{
	const char   __FUNCTION__; // 16994
	const UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>* pBlock; // 200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 2 */

// <068EE928> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<CVfxStaticComboData, int>::NumAllocated()
{
} /* size: 0 */

// <063109FD> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::NumAllocated()
{
} /* size: 0 */

// <06310961> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<Vector2D, int>::NumAllocated()
{
} /* size: 0 */

// <05A9F094> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<CPackNode, int>::NumAllocated()
{
} /* size: 0 */

// <0448FA3E> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<unsigned int, int>::NumAllocated()
{
} /* size: 0 */

// <00510D38> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<float const::NumAllocated()
{
} /* size: 0 */

// <00533C59> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<CFontTextureCache::Page_t, int>::NumAllocated()
{
} /* size: 0 */

// <00049F5A> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<char, int>::NumAllocated()
{
} /* size: 0 */

// <002179A9> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<unsigned char, int>::NumAllocated()
{
} /* size: 0 */

// <00217606> ../public/tier0/utlblockmemory.h:225
inline void CUtlBlockMemory<FileHandleTracker_t, int>::NumAllocated()
{
} /* size: 0 */

// <069E39EC> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <062EB11E> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <062E9EE0> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<Vector2D, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <05A9E75A> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<CPackNode, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <0448DEB1> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<unsigned int, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <0234F09E> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::IsIdxValid(unsigned int i)
{
} /* size: 0 */

// <022DB571> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::IsIdxValid(short unsigned int i)
{
} /* size: 0 */

// <022A1BB4> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::IsIdxValid(short unsigned int i)
{
} /* size: 0 */

// <00511243> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<float const::IsIdxValid(int i)
{
} /* size: 0 */

// <00533E77> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(short unsigned int i)
{
} /* size: 0 */

// <00533818> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <0004A06B> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<char, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <00211224> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<unsigned char, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <00210F7D> ../public/tier0/utlblockmemory.h:241
inline void CUtlBlockMemory<FileHandleTracker_t, int>::IsIdxValid(int i)
{
} /* size: 0 */

// <068EA7A8> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<CVfxStaticComboData, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <062E9F59> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <062E9F03> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<Vector2D, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <05BAB93F> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<float const::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <05A9E796> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<CPackNode, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <0448DE15> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<unsigned int, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <0234C393> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <022D9C07> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <0229ED8B> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <00532363> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<CFontTextureCache::Page_t, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <00531FEA> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <00049FB6> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<char, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <00211312> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<unsigned char, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <00210EE1> ../public/tier0/utlblockmemory.h:247
// variables: 2
void CUtlBlockMemory<FileHandleTracker_t, int>::Grow(int num)
{
	int nBlockSize; // 252
	int nBlocks; // 253
} /* size: 0, variables: 2 */

// <068E59B5> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CVfxStaticComboData, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 62530
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CVfxStaticComboData, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <062899FB> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 4878
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <0628971E> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 4878
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<Vector2D, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <0606A4D7> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 11898
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <0606A1E1> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 11898
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<Vector2D, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <05BAA300> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<float const::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 39374
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<float const::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <05A9E2D7> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CPackNode, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 20536
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CPackNode, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <04AA51F2> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 35655
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <04AA5112> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 35655
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <0448CF90> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<unsigned int, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 6592
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <02E1882F> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 63439
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <02E18753> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 63439
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <0234A425> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 58456
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <022D9824> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 49002
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <0229CF5D> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 19104
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <02EAE510> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 11544
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <02EAE233> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 11544
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<Vector2D, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <02CEB848> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<float const::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 32267
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<float const::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <01DEA060> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 43178
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <01DE9F80> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 43178
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <01AE86A2> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<unsigned int, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 46981
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <01582637> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CVfxStaticComboData, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 42871
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CVfxStaticComboData, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <0044CED4> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CVfxStaticComboData, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 43377
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CVfxStaticComboData, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <00510A06> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<float const::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 19304
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<float const::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <01698148> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 1728
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <01697E6B> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 1728
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<Vector2D, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <014D5480> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<float const::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 22451
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<float const::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <00A20035> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 17903
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <00A1FF55> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 17903
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <003FDE58> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 50335
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <003FDD7D> ../public/tier0/utlblockmemory.h:259
// variables: 9
void CUtlBlockMemory<Vector2D, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 50335
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
} /* size: 0, variables: 3 */

// <0096DF05> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<unsigned int, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 39701
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <007A12E6> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CVfxStaticComboData, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 21848
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CVfxStaticComboData, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <0052ECDC> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<CFontTextureCache::Page_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 16994
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <0052E98B> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 16994
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <00046652> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<char, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 40698
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <0020F9E3> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<unsigned char, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 25390
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<unsigned char, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <0020F647> ../public/tier0/utlblockmemory.h:259
// variables: 9
// function calls: 2
void CUtlBlockMemory<FileHandleTracker_t, int>::ChangeSize(int nBlocks)
{
	const char   __FUNCTION__; // 25390
	int nBlocksOld; // 263
	int nBlockSize; // 292
	{
		int i; // 269
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	{
		int* _pCrash; // 288
	}
	{
		int i; // 293
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
		}
	}
	CUtlBlockMemory<FileHandleTracker_t, int>::NumElementsInBlock(); // 292
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 288
} /* size: 447, variables: 3, inline expansions: 2 (44 bytes) */

// <068EDE6B> ../public/tier0/utlblockmemory.h:309
inline void CUtlBlockMemory<CVfxStaticComboData, int>::EnsureCapacity(int num)
{
} /* size: 0 */

// <002179DB> ../public/tier0/utlblockmemory.h:309
inline void CUtlBlockMemory<unsigned char, int>::EnsureCapacity(int num)
{
} /* size: 0 */

// <0004BDD3> ../public/tier0/utlblockmemory.h:323
// variables: 4
inline void CUtlBlockMemory<char, int>::EnsureContiguousCapacity(int start, int num)
{
	const char   __FUNCTION__; // 41066
	int nStartMajor; // 335
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 333
	}
} /* size: 0, variables: 2 */

// <068EEAE7> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<CVfxStaticComboData, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <06080AFC> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<CacheOptimizedTriangle_t, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <0608086E> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<Vector2D, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <05BB11CF> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<float const::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <05A9E69C> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<CPackNode, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <04497AF7> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<unsigned int, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <02350C78> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<UtlLinkedListElem_t<ExtRefList_t::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <022DB700> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<UtlLinkedListElem_t<CStreamingResourceData::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <022A2E5C> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<UtlLinkedListElem_t<CLoadingResource::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <00533AA5> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <00533A14> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<CFontTextureCache::Page_t, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <0004BD3F> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<char, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <0021781B> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<FileHandleTracker_t, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

// <002116F9> ../public/tier0/utlblockmemory.h:354
// variable: 1
void CUtlBlockMemory<unsigned char, int>::Purge()
{
	{
		int i; // 359
	}
} /* size: 0 */

