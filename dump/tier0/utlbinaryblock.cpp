
//
// tier0/utlbinaryblock.cpp
//
//	referenced by: libtier0.so
//
//	functions: 6
//

// <0053B281> tier0/utlbinaryblock.cpp:14
// variables: 2
// function calls: 3
void CUtlBinaryBlock::Get(void* pValue, int nLen)
{
	const char   __FUNCTION__; // 61090
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 16
	}
	CUtlMemory<unsigned char, int>::Base(); // 24
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 24
} /* size: 0, variables: 1, inline expansions: 3 (25 bytes) */

// <0053B033> tier0/utlbinaryblock.cpp:28
// variables: 3
// function calls: 7
void CUtlBinaryBlock::SetLength(int nLength)
{
	const char   __FUNCTION__; // 60460
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 30
	}
	{
		int nOverFlow; // 35
		CUtlMemory<unsigned char, int>::IsGrowable(); // 823
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
		CUtlMemory<unsigned char, int>::Grow(
			int num);  // 36
		CUtlMemory<unsigned char, int>::NumAllocated(); // 39
	}
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 30
	CUtlMemory<unsigned char, int>::NumAllocated(); // 33
} /* size: 0, variables: 1, inline expansions: 2 (4 bytes) */

// <0053ADBD> tier0/utlbinaryblock.cpp:53
// variables: 2
// function calls: 6
void CUtlBinaryBlock::Set(const void* pValue, int nLen)
{
	const char   __FUNCTION__; // 61090
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 55
	}
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 55
	CUtlMemory<unsigned char, int>::Base(); // 66
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 69
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 99
	V_memmove(void* dest,
			const void* src,
			int count);  // 73
} /* size: 0, variables: 1, inline expansions: 6 (77 bytes) */

// <0053AC3A> tier0/utlbinaryblock.cpp:79
// variables: 2
// function calls: 4
void CUtlBinaryBlock::operator=(const CUtlBinaryBlock& src)
{
	const char   __FUNCTION__; // 60460
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	CUtlMemory<unsigned char, int>::IsReadOnly(); // 81
	CUtlBinaryBlock::Length(); // 82
	CUtlMemory<unsigned char, int>::Base(); // 102
	CUtlBinaryBlock::Get(); // 82
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0053A7C4> tier0/utlbinaryblock.cpp:87
// variables: 2
// function calls: 18
void CUtlBinaryBlock::operator=(CUtlBinaryBlock& rhs)
{
	{
		size_t rhsSize; // 99
		byte* pMemory; // 100
		CUtlMemory<unsigned char, int>::AllocSize(); // 99
		CUtlMemory<unsigned char, int>::DetachMemory(); // 668
		CUtlMemory<unsigned char, int>::Detach(); // 100
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 645
		CUtlMemory<unsigned char, int>::AssumeMemory(
				unsigned char* pMemory,
				int numElements);  // 105
	}
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 132
	CUtlBinaryBlock::IsExternalMemory(); // 89
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 632
	CUtlMemory<unsigned char, int>::SetExternalBuffer(
				const unsigned char* pMemory,
				int numElements);  // 108
	CUtlMemory<unsigned char, int>::SetExternalBuffer(
				const CUtlMemory<unsigned char, int>& buffer);  // 92
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 619
	CUtlMemory<unsigned char, int>::SetExternalBuffer(
				unsigned char* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 93
} /* size: 296, inline expansions: 11 (313 bytes) */

// <0053A627> tier0/utlbinaryblock.cpp:120
// function calls: 7
void CUtlBinaryBlock::operator==(const CUtlBinaryBlock& src)
{
	CUtlBinaryBlock::Length(); // 122
	CUtlBinaryBlock::Length(); // 122
	CUtlMemory<unsigned char, int>::Base(); // 102
	CUtlBinaryBlock::Get(); // 125
	V_memcmp(const void* m1,
		const void* m2,
		int count);  // 125
	CUtlMemory<unsigned char, int>::Base(); // 102
	CUtlBinaryBlock::Get(); // 125
} /* size: 64, inline expansions: 7 (37 bytes) */

