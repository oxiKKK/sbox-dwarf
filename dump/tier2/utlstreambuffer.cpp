
//
// tier2/utlstreambuffer.cpp
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 34
//

// <068489B9> tier2/utlstreambuffer.cpp:28
void CUtlStreamBuffer::CUtlStreamBuffer()
{
} /* size: 0 */

// <068484D0> tier2/utlstreambuffer.cpp:37
// variables: 10
// function calls: 10
void CUtlStreamBuffer::CUtlStreamBuffer(const char* pFileName, const char* pPath, int nFlags, bool bDelayOpen, int nOpenFileFlags, int nInitialOffset)
{
	{
		{
		}
		{
			int nFileNameLen; // 52
			{
				int nPathLen; // 58
			}
		}
		{
			int nFileSize; // 87
			{
				int nBytesRemaining; // 92
				int nSizeToRead; // 93
			}
		}
	}
	{
		{
		}
		{
			int nFileNameLen; // 52
			V_strlen(const char* str); // 52
			strcpy(char* __dest,
				const char* __src);  // 124
			V_strcpy(char* dest,
				const char* src);  // 54
			{
				int nPathLen; // 58
				V_strlen(const char* str); // 58
				strcpy(char* __dest,
					const char* __src);  // 124
				V_strcpy(char* dest,
					const char* src);  // 60
			}
		}
		CUtlBuffer::IsReadOnly(); // 83
		{
			int nFileSize; // 87
			CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
			CUtlBuffer::SizeAllocated(); // 90
			{
				int nBytesRemaining; // 92
				int nSizeToRead; // 93
				CUtlBuffer::SizeAllocated(); // 93
			}
		}
	}
} /* size: 496 */

// <068483FD> tier2/utlstreambuffer.cpp:37
// variables: 7
void CUtlStreamBuffer::CUtlStreamBuffer(const char* pFileName, const char* pPath, int nFlags, bool bDelayOpen, int nOpenFileFlags, int nInitialOffset)
{
	const char   __FUNCTION__; // 49930
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
	{
		int nFileNameLen; // 52
		{
			int nPathLen; // 58
		}
	}
	{
		int nFileSize; // 87
		{
			int nBytesRemaining; // 92
			int nSizeToRead; // 93
		}
	}
} /* size: 0, variables: 1 */

// <01496FB2> tier2/utlstreambuffer.cpp:37
// variables: 7
void CUtlStreamBuffer::CUtlStreamBuffer(const char* pFileName, const char* pPath, int nFlags, bool bDelayOpen, int nOpenFileFlags, int nInitialOffset)
{
	const char   __FUNCTION__; // 38258
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
	{
		int nFileNameLen; // 52
		{
			int nPathLen; // 58
		}
	}
	{
		int nFileSize; // 87
		{
			int nBytesRemaining; // 92
			int nSizeToRead; // 93
		}
	}
} /* size: 0, variables: 1 */

// <003C8215> tier2/utlstreambuffer.cpp:37
// variables: 7
void CUtlStreamBuffer::CUtlStreamBuffer(const char* pFileName, const char* pPath, int nFlags, bool bDelayOpen, int nOpenFileFlags, int nInitialOffset)
{
	const char   __FUNCTION__; // 306
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
	{
		int nFileNameLen; // 52
		{
			int nPathLen; // 58
		}
	}
	{
		int nFileSize; // 87
		{
			int nBytesRemaining; // 92
			int nSizeToRead; // 93
		}
	}
} /* size: 0, variables: 1 */

// <008DD040> tier2/utlstreambuffer.cpp:37
// variables: 7
void CUtlStreamBuffer::CUtlStreamBuffer(const char* pFileName, const char* pPath, int nFlags, bool bDelayOpen, int nOpenFileFlags, int nInitialOffset)
{
	const char   __FUNCTION__; // 33069
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
	{
		int nFileNameLen; // 52
		{
			int nPathLen; // 58
		}
	}
	{
		int nFileSize; // 87
		{
			int nBytesRemaining; // 92
			int nSizeToRead; // 93
		}
	}
} /* size: 0, variables: 1 */

// <00BF49F8> tier2/utlstreambuffer.cpp:37
// variables: 7
void CUtlStreamBuffer::CUtlStreamBuffer(const char* pFileName, const char* pPath, int nFlags, bool bDelayOpen, int nOpenFileFlags, int nInitialOffset)
{
	const char   __FUNCTION__; // 12522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
	{
		int nFileNameLen; // 52
		{
			int nPathLen; // 58
		}
	}
	{
		int nFileSize; // 87
		{
			int nBytesRemaining; // 92
			int nSizeToRead; // 93
		}
	}
} /* size: 0, variables: 1 */

// <068481D9> tier2/utlstreambuffer.cpp:106
// variables: 5
// function calls: 4
void CUtlStreamBuffer::Close()
{
	const char   __FUNCTION__; // 49683
	{
		int nBytesToWrite; // 111
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
		}
		{
			int nBytesWritten; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
			}
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 126
		}
		CUtlBuffer::TellPut(); // 111
	}
	CUtlBuffer::IsReadOnly(); // 108
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01496D8E> tier2/utlstreambuffer.cpp:106
// variables: 5
// function calls: 4
void CUtlStreamBuffer::Close()
{
	const char   __FUNCTION__; // 38011
	{
		int nBytesToWrite; // 111
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
		}
		{
			int nBytesWritten; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
			}
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 126
		}
		CUtlBuffer::TellPut(); // 111
	}
	CUtlBuffer::IsReadOnly(); // 108
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <003C7FF1> tier2/utlstreambuffer.cpp:106
// variables: 5
// function calls: 4
void CUtlStreamBuffer::Close()
{
	const char   __FUNCTION__; // 59
	{
		int nBytesToWrite; // 111
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
		}
		{
			int nBytesWritten; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
			}
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 126
		}
		CUtlBuffer::TellPut(); // 111
	}
	CUtlBuffer::IsReadOnly(); // 108
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <008DCE1C> tier2/utlstreambuffer.cpp:106
// variables: 5
// function calls: 4
void CUtlStreamBuffer::Close()
{
	const char   __FUNCTION__; // 32822
	{
		int nBytesToWrite; // 111
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
		}
		{
			int nBytesWritten; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
			}
			CUtlMemory<unsigned char, int>::Base(); // 1484
			CUtlBuffer::Base(); // 126
		}
		CUtlBuffer::TellPut(); // 111
	}
	CUtlBuffer::IsReadOnly(); // 108
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06848098> tier2/utlstreambuffer.cpp:158
// function calls: 6
void CUtlStreamBuffer::~CUtlStreamBuffer()
{
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 161
} /* size: 54, inline expansions: 6 (79 bytes) */

// <0684807C> tier2/utlstreambuffer.cpp:158
void CUtlStreamBuffer::~CUtlStreamBuffer()
{
} /* size: 0 */

// <06847DF6> tier2/utlstreambuffer.cpp:167
// variables: 5
// function calls: 5
void CUtlStreamBuffer::Open(const char* pFileName, const char* pPath, int nFlags, int nOpenFileFlags)
{
	const char   __FUNCTION__; // 49656
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 178
	}
	{
		int64 nFileSize64; // 188
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
		}
		{
			int nSizeToRead; // 195
		}
		CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
		CUtlBuffer::SizeAllocated(); // 193
	}
	CUtlStreamBuffer::IsOpen(); // 169
	CUtlBuffer::IsReadOnly(); // 184
	CUtlMemory<unsigned char, int>::NumAllocated(); // 201
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <014969AB> tier2/utlstreambuffer.cpp:167
// variables: 5
// function calls: 5
void CUtlStreamBuffer::Open(const char* pFileName, const char* pPath, int nFlags, int nOpenFileFlags)
{
	const char   __FUNCTION__; // 37984
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 178
	}
	{
		int64 nFileSize64; // 188
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
		}
		{
			int nSizeToRead; // 195
		}
		CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
		CUtlBuffer::SizeAllocated(); // 193
	}
	CUtlStreamBuffer::IsOpen(); // 169
	CUtlBuffer::IsReadOnly(); // 184
	CUtlMemory<unsigned char, int>::NumAllocated(); // 201
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <003C7C0E> tier2/utlstreambuffer.cpp:167
// variables: 5
// function calls: 5
void CUtlStreamBuffer::Open(const char* pFileName, const char* pPath, int nFlags, int nOpenFileFlags)
{
	const char   __FUNCTION__; // 32
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 178
	}
	{
		int64 nFileSize64; // 188
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
		}
		{
			int nSizeToRead; // 195
		}
		CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
		CUtlBuffer::SizeAllocated(); // 193
	}
	CUtlStreamBuffer::IsOpen(); // 169
	CUtlBuffer::IsReadOnly(); // 184
	CUtlMemory<unsigned char, int>::NumAllocated(); // 201
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <008DCA39> tier2/utlstreambuffer.cpp:167
// variables: 5
// function calls: 5
void CUtlStreamBuffer::Open(const char* pFileName, const char* pPath, int nFlags, int nOpenFileFlags)
{
	const char   __FUNCTION__; // 32795
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 178
	}
	{
		int64 nFileSize64; // 188
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
		}
		{
			int nSizeToRead; // 195
		}
		CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
		CUtlBuffer::SizeAllocated(); // 193
	}
	CUtlStreamBuffer::IsOpen(); // 169
	CUtlBuffer::IsReadOnly(); // 184
	CUtlMemory<unsigned char, int>::NumAllocated(); // 201
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00BF43F1> tier2/utlstreambuffer.cpp:167
// variables: 5
// function calls: 5
void CUtlStreamBuffer::Open(const char* pFileName, const char* pPath, int nFlags, int nOpenFileFlags)
{
	const char   __FUNCTION__; // 12248
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 178
	}
	{
		int64 nFileSize64; // 188
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
		}
		{
			int nSizeToRead; // 195
		}
		CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
		CUtlBuffer::SizeAllocated(); // 193
	}
	CUtlStreamBuffer::IsOpen(); // 169
	CUtlBuffer::IsReadOnly(); // 184
	CUtlMemory<unsigned char, int>::NumAllocated(); // 201
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06848FC9> tier2/utlstreambuffer.cpp:217
void CUtlStreamBuffer::IsOpen()
{
} /* size: 33 */

// <06847C19> tier2/utlstreambuffer.cpp:230
// variable: 1
// function calls: 6
void CUtlStreamBuffer::GrowAllocatedSize(int nSize)
{
	int nNewSize; // 232
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 232
	CUtlMemory<unsigned char, int>::IsGrowable(); // 823
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned char, int>::Grow(
		int num);  // 239
} /* size: 218, variables: 1, inline expansions: 6 (217 bytes) */

// <0684793F> tier2/utlstreambuffer.cpp:247
// variables: 5
// function calls: 8
void CUtlStreamBuffer::StreamPutOverflow(int nSize)
{
	int nBytesToWrite; // 260
	const char   __FUNCTION__; // 49957
	{
		int nBytesWritten; // 274
		{
			unsigned char ch; // 285
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 285
			CUtlBuffer::TellPut(); // 287
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 291
		}
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 274
		CUtlBuffer::TellPut(); // 292
	}
	CUtlBuffer::IsValid(); // 249
	CUtlBuffer::IsReadOnly(); // 249
	CUtlBuffer::TellPut(); // 260
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <014964F4> tier2/utlstreambuffer.cpp:247
// variables: 5
// function calls: 8
void CUtlStreamBuffer::StreamPutOverflow(int nSize)
{
	int nBytesToWrite; // 260
	const char   __FUNCTION__; // 38285
	{
		int nBytesWritten; // 274
		{
			unsigned char ch; // 285
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 285
			CUtlBuffer::TellPut(); // 287
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 291
		}
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 274
		CUtlBuffer::TellPut(); // 292
	}
	CUtlBuffer::IsValid(); // 249
	CUtlBuffer::IsReadOnly(); // 249
	CUtlBuffer::TellPut(); // 260
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <003C7757> tier2/utlstreambuffer.cpp:247
// variables: 5
// function calls: 8
void CUtlStreamBuffer::StreamPutOverflow(int nSize)
{
	int nBytesToWrite; // 260
	const char   __FUNCTION__; // 333
	{
		int nBytesWritten; // 274
		{
			unsigned char ch; // 285
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 285
			CUtlBuffer::TellPut(); // 287
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 291
		}
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 274
		CUtlBuffer::TellPut(); // 292
	}
	CUtlBuffer::IsValid(); // 249
	CUtlBuffer::IsReadOnly(); // 249
	CUtlBuffer::TellPut(); // 260
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <008DC582> tier2/utlstreambuffer.cpp:247
// variables: 5
// function calls: 8
void CUtlStreamBuffer::StreamPutOverflow(int nSize)
{
	int nBytesToWrite; // 260
	const char   __FUNCTION__; // 33096
	{
		int nBytesWritten; // 274
		{
			unsigned char ch; // 285
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 285
			CUtlBuffer::TellPut(); // 287
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 291
		}
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 274
		CUtlBuffer::TellPut(); // 292
	}
	CUtlBuffer::IsValid(); // 249
	CUtlBuffer::IsReadOnly(); // 249
	CUtlBuffer::TellPut(); // 260
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <068476B9> tier2/utlstreambuffer.cpp:309
// variables: 5
// function calls: 5
void CUtlStreamBuffer::ReadBytesFromFile(int nBytesToRead, int nReadOffset)
{
	const char   __FUNCTION__; // 49957
	char* pReadPoint; // 341
	int nBytesRead; // 342
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 316
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 323
	}
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 341
	CUtlBuffer::TellGet(); // 347
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 353
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <0149626E> tier2/utlstreambuffer.cpp:309
// variables: 5
// function calls: 5
void CUtlStreamBuffer::ReadBytesFromFile(int nBytesToRead, int nReadOffset)
{
	const char   __FUNCTION__; // 38285
	char* pReadPoint; // 341
	int nBytesRead; // 342
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 316
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 323
	}
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 341
	CUtlBuffer::TellGet(); // 347
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 353
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <003C74D1> tier2/utlstreambuffer.cpp:309
// variables: 5
// function calls: 5
void CUtlStreamBuffer::ReadBytesFromFile(int nBytesToRead, int nReadOffset)
{
	const char   __FUNCTION__; // 333
	char* pReadPoint; // 341
	int nBytesRead; // 342
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 316
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 323
	}
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 341
	CUtlBuffer::TellGet(); // 347
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 353
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <008DC2FC> tier2/utlstreambuffer.cpp:309
// variables: 5
// function calls: 5
void CUtlStreamBuffer::ReadBytesFromFile(int nBytesToRead, int nReadOffset)
{
	const char   __FUNCTION__; // 33096
	char* pReadPoint; // 341
	int nBytesRead; // 342
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 316
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 323
	}
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 341
	CUtlBuffer::TellGet(); // 347
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 353
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <06847209> tier2/utlstreambuffer.cpp:366
// variables: 6
// function calls: 17
void CUtlStreamBuffer::StreamGetOverflow(int nSize)
{
	int nUnreadBytes; // 383
	bool bHasPartialOverlap; // 384
	const char   __FUNCTION__; // 49957
	int nBytesToRead; // 416
	int nBytesRead; // 417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 399
	}
	CUtlBuffer::IsValid(); // 368
	CUtlBuffer::IsReadOnly(); // 368
	CUtlBuffer::TellGet(); // 384
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 384
	CUtlBuffer::IsText(); // 395
	CUtlBuffer::TellGet(); // 404
	CUtlBuffer::ContainsCRLF(); // 395
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 390
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 390
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 416
	CUtlBuffer::TellGet(); // 421
	CUtlBuffer::TellGet(); // 375
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 375
} /* size: 0, variables: 5, inline expansions: 17 (73 bytes) */

// <01495DBE> tier2/utlstreambuffer.cpp:366
// variables: 6
// function calls: 17
void CUtlStreamBuffer::StreamGetOverflow(int nSize)
{
	int nUnreadBytes; // 383
	bool bHasPartialOverlap; // 384
	const char   __FUNCTION__; // 38285
	int nBytesToRead; // 416
	int nBytesRead; // 417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 399
	}
	CUtlBuffer::IsValid(); // 368
	CUtlBuffer::IsReadOnly(); // 368
	CUtlBuffer::TellGet(); // 384
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 384
	CUtlBuffer::IsText(); // 395
	CUtlBuffer::TellGet(); // 404
	CUtlBuffer::ContainsCRLF(); // 395
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 390
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 390
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 416
	CUtlBuffer::TellGet(); // 421
	CUtlBuffer::TellGet(); // 375
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 375
} /* size: 0, variables: 5, inline expansions: 17 (73 bytes) */

// <003C7021> tier2/utlstreambuffer.cpp:366
// variables: 6
// function calls: 17
void CUtlStreamBuffer::StreamGetOverflow(int nSize)
{
	int nUnreadBytes; // 383
	bool bHasPartialOverlap; // 384
	const char   __FUNCTION__; // 333
	int nBytesToRead; // 416
	int nBytesRead; // 417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 399
	}
	CUtlBuffer::IsValid(); // 368
	CUtlBuffer::IsReadOnly(); // 368
	CUtlBuffer::TellGet(); // 384
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 384
	CUtlBuffer::IsText(); // 395
	CUtlBuffer::TellGet(); // 404
	CUtlBuffer::ContainsCRLF(); // 395
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 390
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 390
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 416
	CUtlBuffer::TellGet(); // 421
	CUtlBuffer::TellGet(); // 375
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 375
} /* size: 0, variables: 5, inline expansions: 17 (73 bytes) */

// <008DBE4C> tier2/utlstreambuffer.cpp:366
// variables: 6
// function calls: 17
void CUtlStreamBuffer::StreamGetOverflow(int nSize)
{
	int nUnreadBytes; // 383
	bool bHasPartialOverlap; // 384
	const char   __FUNCTION__; // 33096
	int nBytesToRead; // 416
	int nBytesRead; // 417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 399
	}
	CUtlBuffer::IsValid(); // 368
	CUtlBuffer::IsReadOnly(); // 368
	CUtlBuffer::TellGet(); // 384
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 384
	CUtlBuffer::IsText(); // 395
	CUtlBuffer::TellGet(); // 404
	CUtlBuffer::ContainsCRLF(); // 395
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 390
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 390
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 416
	CUtlBuffer::TellGet(); // 421
	CUtlBuffer::TellGet(); // 375
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 375
} /* size: 0, variables: 5, inline expansions: 17 (0 bytes) */

// <06846F12> tier2/utlstreambuffer.cpp:429
// variables: 2
// function calls: 7
void CUtlStreamBuffer::OpenFile(const char* pFileName, const char* pPath, int nOpenFileFlags)
{
	char options; // 434
	FileHandle_t fh; // 438
	CUtlBuffer::IsReadOnly(); // 435
	CUtlBuffer::IsText(); // 436
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 438
	CUtlBuffer::ContainsCRLF(); // 436
} /* size: 321, variables: 2, inline expansions: 7 (281 bytes) */

// <06846EC0> tier2/utlstreambuffer.cpp:450
void CUtlStreamBuffer::Flush()
{
} /* size: 0 */

