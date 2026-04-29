
//
// resourcefile/resourcestream.cpp
//
//	referenced by: libengine2.so
//
//	functions: 33
//

// <066EE6D0> resourcefile/resourcestream.cpp:13
void CResourceStream::CResourceStream()
{
} /* size: 0 */

// <066EE634> resourcefile/resourcestream.cpp:23
// function call: 1
void CResourceStreamVM::CResourceStreamVM(uint nReserveSize)
{
	CResourceStream::CResourceStream(); // 23
} /* size: 80, inline expansions: 1 (12 bytes) */

// <066EE60F> resourcefile/resourcestream.cpp:23
void CResourceStreamVM::CResourceStreamVM(uint nReserveSize)
{
} /* size: 0 */

// <066EE53D> resourcefile/resourcestream.cpp:35
// variable: 1
// function calls: 2
void CResourceStreamVM::~CResourceStreamVM()
{
	{
		bool bOk; // 152
		{
		}
	}
	CResourceStreamVM::ReleaseVirtualMemory(); // 37
	CResourceStream::~CResourceStream(); // 38
} /* size: 0, inline expansions: 2 (59 bytes) */

// <066EE41D> resourcefile/resourcestream.cpp:35
// variable: 1
// function calls: 3
void CResourceStreamVM::~CResourceStreamVM()
{
	{
		bool bOk; // 152
		{
		}
	}
	CResourceStreamVM::ReleaseVirtualMemory(); // 37
	CResourceStream::~CResourceStream(); // 38
	CResourceStreamVM::~CResourceStreamVM(); // 38
} /* size: 0, inline expansions: 3 (122 bytes) */

// <066EE404> resourcefile/resourcestream.cpp:35
void CResourceStreamVM::~CResourceStreamVM()
{
} /* size: 0 */

// <066EE2D5> resourcefile/resourcestream.cpp:42
// function calls: 3
void CResourceStreamFixed::CResourceStreamFixed(void* pPreallocatedData, uint nPreallocatedDataSize)
{
	{
		{
		}
	}
	{
		CResourceStream::CResourceStream(); // 43
		memset(void* __dest,
			int __ch,
			size_t __len);  // 55
		V_memset(void* dest,
			int fill,
			uint count);  // 49
	}
} /* size: 0 */

// <066EE28B> resourcefile/resourcestream.cpp:42
// variables: 2
void CResourceStreamFixed::CResourceStreamFixed(void* pPreallocatedData, uint nPreallocatedDataSize)
{
	const char   __FUNCTION__; // 29594
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
	}
} /* size: 0, variables: 1 */

// <066EE171> resourcefile/resourcestream.cpp:52
// function calls: 3
void CResourceStreamFixed::CResourceStreamFixed(uint nPreallocatedDataSize)
{
	CResourceStream::CResourceStream(); // 53
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 58
} /* size: 0, inline expansions: 3 (0 bytes) */

// <066EE14C> resourcefile/resourcestream.cpp:52
void CResourceStreamFixed::CResourceStreamFixed(uint nPreallocatedDataSize)
{
} /* size: 0 */

// <066EE0E4> resourcefile/resourcestream.cpp:61
// function call: 1
void CResourceStreamFixed::~CResourceStreamFixed()
{
	CResourceStreamFixed::~CResourceStreamFixed(); // 61
} /* size: 0, inline expansions: 1 (0 bytes) */

// <066EDFFD> resourcefile/resourcestream.cpp:61
// function calls: 3
void CResourceStreamFixed::~CResourceStreamFixed()
{
	CResourceStream::~CResourceStream(); // 71
	CResourceStreamFixed::~CResourceStreamFixed(); // 61
	CResourceStreamFixed::~CResourceStreamFixed(); // 71
} /* size: 0, inline expansions: 3 (0 bytes) */

// <066EDFE4> resourcefile/resourcestream.cpp:61
void CResourceStreamFixed::~CResourceStreamFixed()
{
} /* size: 0 */

// <066EEC33> resourcefile/resourcestream.cpp:73
// variable: 1
// function calls: 2
void CResourceStreamFixed::Commit(uint nNewCommit)
{
	{
		int* _pCrash; // 77
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 77
	CResourceStreamFixed::Commit(
		uint nNewCommit);  // 73
} /* size: 0, inline expansions: 2 (0 bytes) */

// <066EDFA6> resourcefile/resourcestream.cpp:73
// variables: 2
void CResourceStreamFixed::Commit(uint nNewCommit)
{
	const char   __FUNCTION__; // 28821
	{
		int* _pCrash; // 77
	}
} /* size: 0, variables: 1 */

// <066EDE8A> resourcefile/resourcestream.cpp:82
// function calls: 3
void CResourceStreamGrowable::CResourceStreamGrowable(uint nReserveDataSize)
{
	CResourceStream::CResourceStream(); // 82
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 87
} /* size: 0, inline expansions: 3 (0 bytes) */

// <066EDE65> resourcefile/resourcestream.cpp:82
void CResourceStreamGrowable::CResourceStreamGrowable(uint nReserveDataSize)
{
} /* size: 0 */

// <066EDE24> resourcefile/resourcestream.cpp:97
void CResourceStreamGrowable::~CResourceStreamGrowable()
{
} /* size: 0 */

// <066EDD6D> resourcefile/resourcestream.cpp:97
// function calls: 2
void CResourceStreamGrowable::~CResourceStreamGrowable()
{
	CResourceStream::~CResourceStream(); // 100
	CResourceStreamGrowable::~CResourceStreamGrowable(); // 100
} /* size: 0, inline expansions: 2 (0 bytes) */

// <066EE9E4> resourcefile/resourcestream.cpp:103
// variables: 2
// function calls: 5
void CResourceStreamGrowable::Commit(uint nNewCommit)
{
	{
		uint nPaddedCommit; // 107
		uint8* pNewData; // 108
		memset(void* __dest,
			int __ch,
			size_t __len);  // 55
		V_memset(void* dest,
			int fill,
			uint count);  // 109
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 110
	}
	CResourceStreamGrowable::Commit(
		uint nNewCommit);  // 103
} /* size: 0, inline expansions: 1 (0 bytes) */

// <066EDD15> resourcefile/resourcestream.cpp:103
// variables: 2
void CResourceStreamGrowable::Commit(uint nNewCommit)
{
	{
		uint nPaddedCommit; // 107
		uint8* pNewData; // 108
	}
} /* size: 0 */

// <066EDB83> resourcefile/resourcestream.cpp:120
// variables: 3
// function call: 1
void CResourceStreamVM::ReserveVirtualMemory(uint nAddressSize)
{
	const char   __FUNCTION__; // 29594
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
	}
	{
		int* _pCrash; // 134
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 134
} /* size: 0, variables: 1, inline expansions: 1 (29 bytes) */

// <066EED63> resourcefile/resourcestream.cpp:145
// variable: 1
void CResourceStreamVM::ReleaseVirtualMemory()
{
	{
		bool bOk; // 152
		{
		}
	}
} /* size: 0 */

// <066EDAF1> resourcefile/resourcestream.cpp:145
// variables: 3
void CResourceStreamVM::ReleaseVirtualMemory()
{
	const char   __FUNCTION__; // 29594
	{
		bool bOk; // 152
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 155
		}
	}
} /* size: 0, variables: 1 */

// <066ED8B4> resourcefile/resourcestream.cpp:165
// variables: 2
// function calls: 4
void CResourceStreamVM::CloneStream(CResourceStreamVM& copyFromStream)
{
	const char   __FUNCTION__; // 29448
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 182
	}
	{
	}
	CResourceStream::EnsureAvailable(
			uint nAddCapacity);  // 194
	CResourceStream::AllocateBytes(
			uint numBytes);  // 184
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 184
	memset(void* __dest,
		int __ch,
		size_t __len);  // 177
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <066EEDB4> resourcefile/resourcestream.cpp:192
// variable: 1
// function call: 1
void* CResourceStream::AllocateBytes(uint numBytes)
{
	void* pBlock; // 195
	{
	}
	CResourceStream::EnsureAvailable(
			uint nAddCapacity);  // 194
} /* size: 0, variables: 1, inline expansions: 1 (59 bytes) */

// <066ED87E> resourcefile/resourcestream.cpp:192
// variable: 1
void* CResourceStream::AllocateBytes(uint numBytes)
{
	void* pBlock; // 195
} /* size: 0, variables: 1 */

// <066ED571> resourcefile/resourcestream.cpp:201
// variables: 3
// function calls: 3
void CResourceStreamVM::Commit(uint nNewCommit)
{
	const char   __FUNCTION__; // 28821
	{
		int* _pCrash; // 214
	}
	{
		int* _pCrash; // 224
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 214
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 224
	CResourceStreamVM::RegisterAllocation(); // 228
} /* size: 473, variables: 1, inline expansions: 3 (57 bytes) */

// <066EEE74> resourcefile/resourcestream.cpp:233
// variable: 1
void CResourceStreamVM::RegisterAllocation()
{
	MemStdInfo_t* pStats; // 236
} /* size: 0, variables: 1 */

// <066ED51E> resourcefile/resourcestream.cpp:253
// variable: 1
void CResourceStreamVM::RegisterDeallocation()
{
	{
		MemStdInfo_t* pStats; // 258
	}
} /* size: 0 */

// <066ED254> resourcefile/resourcestream.cpp:273
// variables: 4
// function calls: 5
void CResourceStream::Align(uint nAlignment, int nOffset)
{
	const char   __FUNCTION__; // 27957
	{
		int* _pCrash; // 278
	}
	{
		int padSize; // 282
		{
			void* pBuffer; // 286
			{
			}
			CResourceStream::EnsureAvailable(
					uint nAddCapacity);  // 194
			CResourceStream::AllocateBytes(
					uint numBytes);  // 286
			memset(void* __dest,
				int __ch,
				size_t __len);  // 51
			V_memset(void* dest,
				int fill,
				int count);  // 287
		}
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 278
} /* size: 0, variables: 1, inline expansions: 1 (29 bytes) */

// <066ED204> resourcefile/resourcestream.cpp:294
void CResourceStream::PrintStats()
{
} /* size: 0 */

// <066ED1D5> resourcefile/resourcestream.cpp:299
void CResourceStream::ClearStats()
{
} /* size: 0 */

