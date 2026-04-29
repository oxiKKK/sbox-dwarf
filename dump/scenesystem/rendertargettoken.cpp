
//
// scenesystem/rendertargettoken.cpp
//
//	referenced by: libengine2.so
//
//	functions: 15
//

// <02CE4F20> ../scenesystem/rendertargettoken.cpp:19
// function call: 1
void RenderTargetToken_t::RenderTargetToken_t()
{
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
} /* size: 12, inline expansions: 1 (7 bytes) */

// <02CE4F04> ../scenesystem/rendertargettoken.cpp:19
void RenderTargetToken_t::RenderTargetToken_t()
{
} /* size: 0 */

// <02CE4E60> ../scenesystem/rendertargettoken.cpp:23
// function calls: 2
void RenderTargetToken_t::RenderTargetToken_t(const RenderTargetToken_t& src)
{
	CUtlSymbolLarge::CUtlSymbolLarge(); // 23
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 25
} /* size: 18, inline expansions: 2 (13 bytes) */

// <02CE4E38> ../scenesystem/rendertargettoken.cpp:23
void RenderTargetToken_t::RenderTargetToken_t(const RenderTargetToken_t& src)
{
} /* size: 0 */

// <02CE4D2A> ../scenesystem/rendertargettoken.cpp:28
// function calls: 4
void RenderTargetToken_t::operator=(const RenderTargetToken_t& src)
{
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 43
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 43
	RenderTargetToken_t::Reset(); // 30
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 32
} /* size: 0, inline expansions: 4 (0 bytes) */

// <02CE4C99> ../scenesystem/rendertargettoken.cpp:36
// function calls: 2
void RenderTargetToken_t::~RenderTargetToken_t()
{
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 43
	RenderTargetToken_t::Reset(); // 38
} /* size: 5, inline expansions: 2 (0 bytes) */

// <02CE4C7D> ../scenesystem/rendertargettoken.cpp:36
void RenderTargetToken_t::~RenderTargetToken_t()
{
} /* size: 0 */

// <02CE5696> ../scenesystem/rendertargettoken.cpp:41
// function calls: 2
void RenderTargetToken_t::Reset()
{
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 43
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 43
} /* size: 12, inline expansions: 2 (7 bytes) */

// <02CE4C61> ../scenesystem/rendertargettoken.cpp:41
void RenderTargetToken_t::Reset()
{
} /* size: 0 */

// <02CE6AAC> ../scenesystem/rendertargettoken.cpp:46
// function calls: 45
void RenderTargetToken_t::SetValue(const char* pName, int nLen)
{
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	CUtlSymbolLarge::IsValid(); // 268
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::CAutoLockT(
			CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this); // 278
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 281
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockWrite(
			const char* pFileName,
			int nLineNumber);  // 960
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::~CAutoLockT(); // 282
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
	V_strlen(const char* str); // 68
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::AddString(
			const char* pString);  // 48
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 48
} /* size: 0, inline expansions: 45 (0 bytes) */

// <02CE4C2D> ../scenesystem/rendertargettoken.cpp:46
void RenderTargetToken_t::SetValue(const char* pName, int nLen)
{
} /* size: 0 */

// <02CE4BB1> ../scenesystem/rendertargettoken.cpp:56
void RenderTargetId_t::operator!=(const RenderTargetId_t& id)
{
} /* size: 0 */

// <02CE4AF9> ../scenesystem/rendertargettoken.cpp:61
// function calls: 2
void RenderTargetId_t::operator=(const RenderTargetId_t& id)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 69
} /* size: 38, inline expansions: 2 (60 bytes) */

// <02CE48B7> ../scenesystem/rendertargettoken.cpp:74
// variable: 1
// function calls: 7
void RenderTargetId_t::BuildNameString(CBufferString* pBuf)
{
	{
		int i; // 78
		CUtlSymbolLarge::String(); // 80
		CUtlSymbolLarge::String(); // 89
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 89
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 90
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 76
} /* size: 161, inline expansions: 3 (61 bytes) */

// <02CE4517> ../scenesystem/rendertargettoken.cpp:96
// variables: 9
// function calls: 7
int ParseRenderTargetTokens(const char* pName, int nCount, RenderTargetToken_t* pTokens)
{
	int nLen; // 98
	char* pTemp; // 99
	char* pStart; // 100
	int nCurToken; // 101
	int nCurLen; // 102
	const char   __FUNCTION__; // 17467
	{
		int i; // 103
		{
			int* _pCrash; // 110
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 110
		CUtlSymbolLarge::operator=(
				const CUtlSymbolLarge& src);  // 48
		RenderTargetToken_t::SetValue(
			const char* pName,
			int nLen);  // 112
	}
	{
		int* _pCrash; // 122
	}
	V_strlen(const char* str); // 98
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 122
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 48
	RenderTargetToken_t::SetValue(
		const char* pName,
		int nLen);  // 124
} /* size: 644, variables: 6, inline expansions: 4 (83 bytes) */

