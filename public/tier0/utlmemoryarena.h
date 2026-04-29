
//
// public/tier0/utlmemoryarena.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 6
//	class: 1
//

// <024D4F30> ../public/tier0/utlmemoryarena.h:24
// member functions: 26
// member variables: 5
// class size: 32
class CUtlMemoryArena {
	/* ../public/tier0/utlmemoryarena.h:48 */
	struct mem_block_t {
		uint32 m_nBytesSize; /* 0 4 */
		uint32 m_bInUse; /* 4 4 */
		uint32 m_nPrevOffset; /* 8 4 */
		uint32 m_nNextOffset; /* 12 4 */
	};
	/* ../public/tier0/utlmemoryarena.h:32 */
	void CUtlMemoryArena(CUtlMemoryArena* , uint32, bool);
	/* ../public/tier0/utlmemoryarena.h:33 */
	void ~CUtlMemoryArena(CUtlMemoryArena* );
	/* ../public/tier0/utlmemoryarena.h:36 */
	byte* Alloc(CUtlMemoryArena* , uint32);
	/* ../public/tier0/utlmemoryarena.h:38 */
	uint32 Free(CUtlMemoryArena* , byte* );
	/* ../public/tier0/utlmemoryarena.h:41 */
	uint32 MaxAvailableAllocSize(CUtlMemoryArena* );
	/* ../public/tier0/utlmemoryarena.h:44 */
	void DumpBlockList(CUtlMemoryArena* , LoggingChannelID_t);
private:
	/* ../public/tier0/utlmemoryarena.h:56 */
	mem_block_t* GetBlock(CUtlMemoryArena* , uint32);
	/* ../public/tier0/utlmemoryarena.h:62 */
	uint32 BlockToOffset(CUtlMemoryArena* , mem_block_t* );
	/* ../public/tier0/utlmemoryarena.h:69 */
	byte* BlockToPointer(CUtlMemoryArena* , mem_block_t* );
	/* ../public/tier0/utlmemoryarena.h:75 */
	mem_block_t* PointerToBlock(CUtlMemoryArena* , byte* );
	/* ../public/tier0/utlmemoryarena.h:80 */
	void InitMemBlock(CUtlMemoryArena* , mem_block_t* , uint32, mem_block_t* , mem_block_t* );
	/* ../public/tier0/utlmemoryarena.h:82 */
	void RegisterAllocation(CUtlMemoryArena* );
	/* ../public/tier0/utlmemoryarena.h:83 */
	void RegisterDeallocation(CUtlMemoryArena* );
	mem_block_t * m_pBlockList; /* 0 8 */
	mem_block_t * m_pAllocStart; /* 8 8 */
	byte * m_pMemory; /* 16 8 */
	uint32 m_nAllocationSize; /* 24 4 */
	uint32 m_nAllocStatsId; /* 28 4 */
	void CUtlMemoryArena(class CUtlMemoryArena *, uint32, bool); /* linkage=_ZN15CUtlMemoryArenaC4Ejb */
	void ~CUtlMemoryArena(class CUtlMemoryArena *); /* linkage=_ZN15CUtlMemoryArenaD4Ev */
	byte * Alloc(class CUtlMemoryArena *, uint32); /* linkage=_ZN15CUtlMemoryArena5AllocEj */
	uint32 Free(class CUtlMemoryArena *, byte *); /* linkage=_ZN15CUtlMemoryArena4FreeEPh */
	uint32 MaxAvailableAllocSize(class CUtlMemoryArena *); /* linkage=_ZN15CUtlMemoryArena21MaxAvailableAllocSizeEv */
	void DumpBlockList(class CUtlMemoryArena *, LoggingChannelID_t); /* linkage=_ZN15CUtlMemoryArena13DumpBlockListEi */
	class mem_block_t * GetBlock(class CUtlMemoryArena *, uint32); /* linkage=_ZN15CUtlMemoryArena8GetBlockEj */
	uint32 BlockToOffset(class CUtlMemoryArena *, class mem_block_t *); /* linkage=_ZN15CUtlMemoryArena13BlockToOffsetEPNS_11mem_block_tE */
	byte * BlockToPointer(class CUtlMemoryArena *, class mem_block_t *); /* linkage=_ZN15CUtlMemoryArena14BlockToPointerEPNS_11mem_block_tE */
	class mem_block_t * PointerToBlock(class CUtlMemoryArena *, byte *); /* linkage=_ZN15CUtlMemoryArena14PointerToBlockEPh */
	/* <55a494> tier0/utlmemoryarena.cpp:87 */
	void InitMemBlock(class CUtlMemoryArena *, class mem_block_t *, uint32, class mem_block_t *, class mem_block_t *); /* linkage=_ZN15CUtlMemoryArena12InitMemBlockEPNS_11mem_block_tEjS1_S1_ */
	/* <55a5e3> tier0/utlmemoryarena.cpp:158 */
	void RegisterAllocation(class CUtlMemoryArena *); /* linkage=_ZN15CUtlMemoryArena18RegisterAllocationEv */
	/* <55a629> tier0/utlmemoryarena.cpp:204 */
	void RegisterDeallocation(class CUtlMemoryArena *); /* linkage=_ZN15CUtlMemoryArena20RegisterDeallocationEv */
};

// <024DA101> ../public/tier0/utlmemoryarena.h:32
void CUtlMemoryArena::CUtlMemoryArena(uint32 nSize, bool bAllowLarge)
{
} /* size: 0 */

// <024DA0E5> ../public/tier0/utlmemoryarena.h:33
void CUtlMemoryArena::~CUtlMemoryArena()
{
} /* size: 0 */

// <0055A357> ../public/tier0/utlmemoryarena.h:56
inline void CUtlMemoryArena::GetBlock(uint32 nOffset)
{
} /* size: 0 */

// <0055A326> ../public/tier0/utlmemoryarena.h:62
// variable: 1
inline void CUtlMemoryArena::BlockToOffset(mem_block_t* pBlock)
{
	uint32 nOffset; // 64
} /* size: 0, variables: 1 */

// <0055A2F5> ../public/tier0/utlmemoryarena.h:69
// variable: 1
inline void CUtlMemoryArena::BlockToPointer(mem_block_t* pBlock)
{
	byte* pMem; // 71
} /* size: 0, variables: 1 */

// <0055A2D0> ../public/tier0/utlmemoryarena.h:75
inline void CUtlMemoryArena::PointerToBlock(byte* pMem)
{
} /* size: 0 */

