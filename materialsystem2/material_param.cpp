
//
// materialsystem2/material_param.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 2
//

// <001D92E0> materialsystem2/material_param.cpp:6
// function calls: 45
void CMaterialParam::SetName(const char* pString)
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
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 278
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this,
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
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
	V_strlen(const char* str); // 68
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::AddString(
			const char* pString);  // 8
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 8
} /* size: 653, inline expansions: 45 (2486 bytes) */

// <001D907B> materialsystem2/material_param.cpp:11
// function calls: 6
void CMaterialParam::SetString(const char* pString)
{
	V_strlen(const char* str); // 68
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::AddString(
			const char* pString);  // 13
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 13
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 14
} /* size: 0, inline expansions: 6 (254 bytes) */

