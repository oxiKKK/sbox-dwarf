
//
// rendersystem/poolallocator.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 5
//	classes: 2
//

// <0007EEBD> rendersystem/poolallocator.h:14
// member functions: 18
// member variables: 3
// class size: 16
class CPoolAllocator {
	/* rendersystem/poolallocator.h:18 */
	struct Handle_t {
		uint32 m_Offset; /* 0 4 */
		uint32 m_Size; /* 4 4 */
	};
	/* rendersystem/poolallocator.h:25 */
	void CPoolAllocator(CPoolAllocator* , uint);
	/* rendersystem/poolallocator.h:26 */
	void ~CPoolAllocator(CPoolAllocator* );
	/* rendersystem/poolallocator.h:29 */
	uint PoolSize(const CPoolAllocator* );
	/* rendersystem/poolallocator.h:33 */
	uint PoolUsed(const CPoolAllocator* );
	/* rendersystem/poolallocator.h:35 */
	bool IsValidHandle(const CPoolAllocator* , Handle_t);
	/* rendersystem/poolallocator.h:39 */
	Handle_t Allocate(CPoolAllocator* , uint, uint);
	/* rendersystem/poolallocator.h:42 */
	void Free(CPoolAllocator* , Handle_t);
	/* rendersystem/poolallocator.h:47 */
	void GrowPool(CPoolAllocator* , uint);
private:
	uint m_nPoolSize; /* 0 4 */
	uint m_nPoolUsed; /* 4 4 */
	/* rendersystem/poolallocator.cpp:36 */
	struct AllocatorImpl_t {
		/* rendersystem/poolallocator.cpp:38 */
		void AllocatorImpl_t(AllocatorImpl_t* );
		/* rendersystem/poolallocator.cpp:39 */
		void ~AllocatorImpl_t(AllocatorImpl_t* );
		SizeAddressTree_t m_SizeAddressFree; /* 0 48 */
		AddressTree_t m_AddressFree; /* 48 48 */
		AddressTree_t m_AddressUsed; /* 96 48 */
	};
	const class AllocatorImpl_t * m_pImpl; /* 8 8 */
	void CPoolAllocator(class CPoolAllocator *, uint); /* linkage=_ZN14CPoolAllocatorC4Ej */
	void ~CPoolAllocator(class CPoolAllocator *); /* linkage=_ZN14CPoolAllocatorD4Ev */
	uint PoolSize(const class CPoolAllocator  *); /* linkage=_ZNK14CPoolAllocator8PoolSizeEv */
	uint PoolUsed(const class CPoolAllocator  *); /* linkage=_ZNK14CPoolAllocator8PoolUsedEv */
	bool IsValidHandle(const class CPoolAllocator  *, class Handle_t); /* linkage=_ZNK14CPoolAllocator13IsValidHandleENS_8Handle_tE */
	class Handle_t Allocate(class CPoolAllocator *, uint, uint); /* linkage=_ZN14CPoolAllocator8AllocateEjj */
	void Free(class CPoolAllocator *, class Handle_t); /* linkage=_ZN14CPoolAllocator4FreeENS_8Handle_tE */
	void GrowPool(class CPoolAllocator *, uint); /* linkage=_ZN14CPoolAllocator8GrowPoolEj */
};

// <000A4DE0> rendersystem/poolallocator.h:14
// member functions: 16
// member variables: 3
// class size: 16
class CPoolAllocator {
	/* rendersystem/poolallocator.h:18 */
	struct Handle_t {
		uint32 m_Offset; /* 0 4 */
		uint32 m_Size; /* 4 4 */
	};
	/* rendersystem/poolallocator.h:25 */
	void CPoolAllocator(CPoolAllocator* , uint);
	/* rendersystem/poolallocator.h:26 */
	void ~CPoolAllocator(CPoolAllocator* );
	/* rendersystem/poolallocator.h:29 */
	uint PoolSize(const CPoolAllocator* );
	/* rendersystem/poolallocator.h:33 */
	uint PoolUsed(const CPoolAllocator* );
	/* rendersystem/poolallocator.h:35 */
	bool IsValidHandle(const CPoolAllocator* , Handle_t);
	/* rendersystem/poolallocator.h:39 */
	Handle_t Allocate(CPoolAllocator* , uint, uint);
	/* rendersystem/poolallocator.h:42 */
	void Free(CPoolAllocator* , Handle_t);
	/* rendersystem/poolallocator.h:47 */
	void GrowPool(CPoolAllocator* , uint);
private:
	uint m_nPoolSize; /* 0 4 */
	uint m_nPoolUsed; /* 4 4 */
	struct AllocatorImpl_t {
	};
	const class AllocatorImpl_t * m_pImpl; /* 8 8 */
	void CPoolAllocator(class CPoolAllocator *, uint); /* linkage=_ZN14CPoolAllocatorC4Ej */
	void ~CPoolAllocator(class CPoolAllocator *); /* linkage=_ZN14CPoolAllocatorD4Ev */
	uint PoolSize(const class CPoolAllocator  *); /* linkage=_ZNK14CPoolAllocator8PoolSizeEv */
	uint PoolUsed(const class CPoolAllocator  *); /* linkage=_ZNK14CPoolAllocator8PoolUsedEv */
	bool IsValidHandle(const class CPoolAllocator  *, class Handle_t); /* linkage=_ZNK14CPoolAllocator13IsValidHandleENS_8Handle_tE */
	class Handle_t Allocate(class CPoolAllocator *, uint, uint); /* linkage=_ZN14CPoolAllocator8AllocateEjj */
	void Free(class CPoolAllocator *, class Handle_t); /* linkage=_ZN14CPoolAllocator4FreeENS_8Handle_tE */
	void GrowPool(class CPoolAllocator *, uint); /* linkage=_ZN14CPoolAllocator8GrowPoolEj */
};

// <0016CEED> rendersystem/poolallocator.h:25
void CPoolAllocator::CPoolAllocator(uint nPoolSize)
{
} /* size: 0 */

// <0016D40C> rendersystem/poolallocator.h:26
void CPoolAllocator::~CPoolAllocator()
{
} /* size: 0 */

// <001A898D> rendersystem/poolallocator.h:29
inline void CPoolAllocator::PoolSize()
{
} /* size: 0 */

// <001A8974> rendersystem/poolallocator.h:33
inline void CPoolAllocator::PoolUsed()
{
} /* size: 0 */

// <001A894C> rendersystem/poolallocator.h:59
inline void CPoolAllocator::IsValidHandle(Handle_t handle)
{
} /* size: 0 */

