
//
// tier0/utlmemory.cpp
//
//	referenced by: libtier0.so
//
//	functions: 2
//

// <00555C72> tier0/utlmemory.cpp:10
uint64 UtlMemory_CalcNewAllocationCount_Impl(uint64 nAllocationCount, uint64 nGrowSize, uint64 nNewSize, uint64 nBytesItem)
{
} /* size: 0 */

// <0055585C> tier0/utlmemory.cpp:67
// variable: 1
// function calls: 2
void* UtlMemory_AllocAligned(void* pExistingAllocation, bool bIsResizableAllocation, size_t nAllocSizeBytes, size_t nPrevAllocSizeBytes, size_t nAlign)
{
	void* pNewMemory; // 72
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 75
} /* size: 94, variables: 1, inline expansions: 2 (28 bytes) */

