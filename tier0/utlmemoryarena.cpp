
//
// tier0/utlmemoryarena.cpp
//
//	referenced by: libtier0.so
//
//	functions: 14
//

// <0055A040> tier0/utlmemoryarena.cpp:11
// variables: 6
// function calls: 4
void CUtlMemoryArena::CUtlMemoryArena(uint32 nSize, bool bAllowLarge)
{
	{
		{
			PlatVirtualOperation_t eVirtOp; // 14
			mem_block_t* pFreeBlock; // 30
			{
				int* _pCrash; // 18
			}
		}
	}
	{
		{
			PlatVirtualOperation_t eVirtOp; // 14
			mem_block_t* pFreeBlock; // 30
			{
				int* _pCrash; // 18
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 18
			CUtlMemoryArena::InitMemBlock(
					mem_block_t* pBlock,
					uint32 nSize,
					mem_block_t* pPrev,
					mem_block_t* pNext);  // 25
			CUtlMemoryArena::RegisterAllocation(); // 22
			CUtlMemoryArena::InitMemBlock(
					mem_block_t* pBlock,
					uint32 nSize,
					mem_block_t* pPrev,
					mem_block_t* pNext);  // 31
		}
	}
} /* size: 268 */

// <00559FC4> tier0/utlmemoryarena.cpp:11
// variables: 4
void CUtlMemoryArena::CUtlMemoryArena(uint32 nSize, bool bAllowLarge)
{
	const char   __FUNCTION__; // 57007
	{
		PlatVirtualOperation_t eVirtOp; // 14
		mem_block_t* pFreeBlock; // 30
		{
			int* _pCrash; // 18
		}
	}
} /* size: 0, variables: 1 */

// <00559F27> tier0/utlmemoryarena.cpp:35
// variable: 1
// function call: 1
void CUtlMemoryArena::~CUtlMemoryArena()
{
	{
		MemStdInfo_t* pStats; // 209
	}
	CUtlMemoryArena::RegisterDeallocation(); // 37
} /* size: 34, inline expansions: 1 (13 bytes) */

// <00559F0B> tier0/utlmemoryarena.cpp:35
void CUtlMemoryArena::~CUtlMemoryArena()
{
} /* size: 0 */

// <00559C44> tier0/utlmemoryarena.cpp:42
// variables: 4
// function calls: 8
void CUtlMemoryArena::Alloc(uint32 nSize)
{
	mem_block_t* pBlock; // 44
	{
		uint32 nRemainingBytes; // 51
		{
			byte* pMem; // 55
			mem_block_t* pNewBlock; // 56
			CUtlMemoryArena::GetBlock(
				uint32 nOffset);  // 60
			CUtlMemoryArena::BlockToOffset(
					mem_block_t* pBlock);  // 91
			CUtlMemoryArena::BlockToOffset(
					mem_block_t* pBlock);  // 92
			CUtlMemoryArena::BlockToOffset(
					mem_block_t* pBlock);  // 94
			CUtlMemoryArena::BlockToOffset(
					mem_block_t* pBlock);  // 95
			CUtlMemoryArena::InitMemBlock(
					mem_block_t* pBlock,
					uint32 nSize,
					mem_block_t* pPrev,
					mem_block_t* pNext);  // 60
		}
		CUtlMemoryArena::BlockToPointer(
				mem_block_t* pBlock);  // 67
	}
	CUtlMemoryArena::GetBlock(
		uint32 nOffset);  // 70
} /* size: 141, variables: 1, inline expansions: 1 (7 bytes) */

// <00559A0A> tier0/utlmemoryarena.cpp:75
// variables: 4
// function calls: 3
void CUtlMemoryArena::DumpBlockList(LoggingChannelID_t channelID)
{
	{
		mem_block_t* pBlock; // 78
		{
			uint32 nOffset; // 80
			uint32 nSize; // 81
			bool bInUse; // 82
			CUtlMemoryArena::BlockToOffset(
					mem_block_t* pBlock);  // 80
		}
		CUtlMemoryArena::GetBlock(
			uint32 nOffset);  // 78
		CUtlMemoryArena::GetBlock(
			uint32 nOffset);  // 78
	}
} /* size: 211 */

// <0055A494> tier0/utlmemoryarena.cpp:87
// function calls: 4
void CUtlMemoryArena::InitMemBlock(mem_block_t* pBlock, uint32 nSize, mem_block_t* pPrev, mem_block_t* pNext)
{
	CUtlMemoryArena::BlockToOffset(
			mem_block_t* pBlock);  // 91
	CUtlMemoryArena::BlockToOffset(
			mem_block_t* pBlock);  // 92
	CUtlMemoryArena::BlockToOffset(
			mem_block_t* pBlock);  // 94
	CUtlMemoryArena::BlockToOffset(
			mem_block_t* pBlock);  // 95
} /* size: 0, inline expansions: 4 (0 bytes) */

// <005599BE> tier0/utlmemoryarena.cpp:87
void CUtlMemoryArena::InitMemBlock(mem_block_t* pBlock, uint32 nSize, mem_block_t* pPrev, mem_block_t* pNext)
{
} /* size: 0 */

// <005596D6> tier0/utlmemoryarena.cpp:99
// variables: 8
// function calls: 7
void CUtlMemoryArena::Free(byte* pMem)
{
	uint32 nOffset; // 101
	const char   __FUNCTION__; // 55341
	mem_block_t* pBlock; // 108
	uint32 nFreeBlockSize; // 110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
	{
		mem_block_t* pOut; // 114
		CUtlMemoryArena::BlockToOffset(
				mem_block_t* pBlock);  // 117
		CUtlMemoryArena::GetBlock(
			uint32 nOffset);  // 117
	}
	{
		mem_block_t* pRemove; // 130
		CUtlMemoryArena::BlockToOffset(
				mem_block_t* pBlock);  // 133
		CUtlMemoryArena::GetBlock(
			uint32 nOffset);  // 133
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 140
	}
	CUtlMemoryArena::PointerToBlock(
			byte* pMem);  // 108
	CUtlMemoryArena::GetBlock(
		uint32 nOffset);  // 112
	CUtlMemoryArena::GetBlock(
		uint32 nOffset);  // 128
} /* size: 0, variables: 4, inline expansions: 3 (24 bytes) */

// <00559601> tier0/utlmemoryarena.cpp:144
// variables: 2
// function calls: 2
void CUtlMemoryArena::MaxAvailableAllocSize()
{
	uint32 nSize; // 146
	{
		mem_block_t* pBlock; // 148
		CUtlMemoryArena::GetBlock(
			uint32 nOffset);  // 148
		CUtlMemoryArena::GetBlock(
			uint32 nOffset);  // 148
	}
} /* size: 60, variables: 1 */

// <0055A5E3> tier0/utlmemoryarena.cpp:158
// variable: 1
void CUtlMemoryArena::RegisterAllocation()
{
	MemStdInfo_t* pStats; // 163
	{
	}
} /* size: 0, variables: 1 */

// <00559568> tier0/utlmemoryarena.cpp:158
// variables: 5
void CUtlMemoryArena::RegisterAllocation()
{
	const char   __FUNCTION__; // 54384
	MemStdInfo_t* pStats; // 163
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		MemStdInfo_t& info; // 167
		size_t nPayloadSize; // 168
	}
} /* size: 0, variables: 2 */

// <0055A629> tier0/utlmemoryarena.cpp:204
// variable: 1
void CUtlMemoryArena::RegisterDeallocation()
{
	{
		MemStdInfo_t* pStats; // 209
	}
} /* size: 0 */

// <00559518> tier0/utlmemoryarena.cpp:204
// variables: 3
void CUtlMemoryArena::RegisterDeallocation()
{
	{
		MemStdInfo_t* pStats; // 209
		{
			MemStdInfo_t& info; // 213
			size_t nPayloadSize; // 214
		}
	}
} /* size: 0 */

