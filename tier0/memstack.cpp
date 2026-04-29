
//
// tier0/memstack.cpp
//
//	referenced by: libtier0.so
//
//	functions: 15
//

// <003655BD> tier0/memstack.cpp:28
// function calls: 2
void CMemoryStack::CMemoryStack()
{
	CUtlString::CUtlString(
			const char* pString);  // 41
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 41
} /* size: 108, inline expansions: 2 (43 bytes) */

// <003655A1> tier0/memstack.cpp:28
void CMemoryStack::CMemoryStack()
{
} /* size: 0 */

// <003654FC> tier0/memstack.cpp:47
// function call: 1
void CMemoryStack::~CMemoryStack()
{
	CUtlString::~CUtlString(); // 51
} /* size: 81, inline expansions: 1 (32 bytes) */

// <003654E0> tier0/memstack.cpp:47
void CMemoryStack::~CMemoryStack()
{
} /* size: 0 */

// <00365010> tier0/memstack.cpp:55
// variables: 9
// function calls: 7
void CMemoryStack::Init(const char* name, unsigned int maxSize, unsigned int commitIncrement, unsigned int initialCommit, unsigned int alignment)
{
	const char   __FUNCTION__; // 37711
	uint pageSize; // 73
	uint allocationGranularity; // 74
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 67
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 69
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
	CUtlString::operator=(
			const char* src);  // 62
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 68
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 82
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 84
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 88
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 103
	{
	}
	CMemoryStack::RegisterAllocation(
				uint32 nIncrement);  // 112
} /* size: 0, variables: 3, inline expansions: 7 (112 bytes) */

// <00364FA7> tier0/memstack.cpp:130
void CMemoryStack::Term()
{
} /* size: 72 */

// <00364F75> tier0/memstack.cpp:152
void CMemoryStack::GetSize()
{
} /* size: 12 */

// <00364B95> tier0/memstack.cpp:163
// variables: 7
// function calls: 6
void CMemoryStack::CommitTo(byte* pNextAlloc)
{
	unsigned char* pNewCommitLimit; // 167
	unsigned int commitIncrement; // 168
	{
		char errorCodeString; // 185
		uint nError; // 186
	}
	{
		unsigned int decommitIncrement; // 208
		{
			MemStdInfo_t* pStats; // 274
		}
		CMemoryStack::RegisterDeallocation(); // 212
		{
		}
		CMemoryStack::RegisterAllocation(
					uint32 nIncrement);  // 222
	}
	AlignValue<unsigned char*>(unsigned char* val,
					uintp alignment);  // 167
	AlignValue<unsigned char*>(unsigned char* val,
					uintp alignment);  // 203
	{
		MemStdInfo_t* pStats; // 274
	}
	CMemoryStack::RegisterDeallocation(); // 179
	{
	}
	CMemoryStack::RegisterAllocation(
				uint32 nIncrement);  // 196
} /* size: 0, variables: 2, inline expansions: 4 (95 bytes) */

// <003658CA> tier0/memstack.cpp:234
// variable: 1
void CMemoryStack::RegisterAllocation(uint32 nIncrement)
{
	MemStdInfo_t* pStats; // 238
	{
	}
} /* size: 0, variables: 1 */

// <00364AFB> tier0/memstack.cpp:234
// variables: 4
void CMemoryStack::RegisterAllocation(uint32 nIncrement)
{
	const char   __FUNCTION__; // 35332
	MemStdInfo_t* pStats; // 238
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 236
	}
	{
		size_t nSize; // 252
	}
} /* size: 0, variables: 2 */

// <0036591F> tier0/memstack.cpp:269
// variable: 1
void CMemoryStack::RegisterDeallocation()
{
	{
		MemStdInfo_t* pStats; // 274
	}
} /* size: 0 */

// <00364861> tier0/memstack.cpp:290
// variables: 6
// function calls: 4
void CMemoryStack::FreeToAllocPoint(MemoryStackMark_t mark, bool bDecommit)
{
	void* pAllocPoint; // 293
	const char   __FUNCTION__; // 35126
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 294
	}
	{
		unsigned char* pDecommitPoint; // 301
		{
			unsigned int decommitIncrement; // 310
			{
				MemStdInfo_t* pStats; // 274
			}
			CMemoryStack::RegisterDeallocation(); // 311
			{
			}
			CMemoryStack::RegisterAllocation(
						uint32 nIncrement);  // 322
		}
		AlignValue<unsigned char*>(unsigned char* val,
						uintp alignment);  // 301
	}
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 292
} /* size: 0, variables: 2, inline expansions: 1 (10 bytes) */

// <003647B5> tier0/memstack.cpp:333
// variable: 1
// function call: 1
void CMemoryStack::FreeAll(bool bDecommit)
{
	{
		MemStdInfo_t* pStats; // 274
	}
	CMemoryStack::RegisterDeallocation(); // 340
} /* size: 108, inline expansions: 1 (13 bytes) */

// <0036475D> tier0/memstack.cpp:352
void CMemoryStack::Access(void** ppRegion, unsigned int* pBytes)
{
} /* size: 23 */

// <003645D6> tier0/memstack.cpp:360
// variable: 1
// function calls: 4
void CMemoryStack::PrintContents()
{
	size_t highest; // 362
	CUtlString::Get(); // 99
	CUtlString::String(); // 374
	CMemoryStack::GetUsed(); // 376
	CMemoryStack::GetMaxSize(); // 378
} /* size: 166, variables: 1, inline expansions: 4 (43 bytes) */

