
//
// tier0/datamodelsymboltable.cpp
//
//	referenced by: libtier0.so
//
//	functions: 14
//	class: 1
//

// <000E57AE> tier0/datamodelsymboltable.cpp:15
// function calls: 18
void CDmSymbolTableLarge::~CDmSymbolTableLarge()
{
	CThreadMutex::~CThreadMutex(); // 55
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::~CUtlSymbolTableLargeBase(); // 15
} /* size: 134, inline expansions: 18 (364 bytes) */

// <000E5792> tier0/datamodelsymboltable.cpp:15
inline void CDmSymbolTableLarge::~CDmSymbolTableLarge()
{
} /* size: 0 */

// <000E2704> tier0/datamodelsymboltable.cpp:15
// member functions: 26
// member variables: 3
// vtable entries: 9
// class size: 224
class CDmSymbolTableLarge : public IGlobalSymbolMap {
public:
	/* class IGlobalSymbolMap <ancestor>; */ /* 0 8 */
	void ~CDmSymbolTableLarge(CDmSymbolTableLarge* );
	void CDmSymbolTableLarge(CDmSymbolTableLarge* , CDmSymbolTableLarge& );
	void CDmSymbolTableLarge(CDmSymbolTableLarge* , const CDmSymbolTableLarge& );
	/* tier0/datamodelsymboltable.cpp:18 */
	void CDmSymbolTableLarge(CDmSymbolTableLarge* );
	/* tier0/datamodelsymboltable.cpp:20 */
	virtual void AddUser(CDmSymbolTableLarge* );
	/* tier0/datamodelsymboltable.cpp:25 */
	virtual void ReleaseUser(CDmSymbolTableLarge* );
	/* tier0/datamodelsymboltable.cpp:34 */
	virtual UtlSymLargeId_t GetSymbol(CDmSymbolTableLarge* , const char* );
	/* tier0/datamodelsymboltable.cpp:39 */
	virtual const char* GetString(const CDmSymbolTableLarge* , UtlSymLargeId_t);
	/* tier0/datamodelsymboltable.cpp:44 */
	virtual uint GetSymbolCount(const CDmSymbolTableLarge* );
	/* tier0/datamodelsymboltable.cpp:49 */
	virtual UtlSymLargeId_t Find(const CDmSymbolTableLarge* , const char* );
	/* tier0/datamodelsymboltable.cpp:54 */
	virtual int GetElements(const CDmSymbolTableLarge* , int, int, UtlSymLargeId_t* );
	/* tier0/datamodelsymboltable.cpp:59 */
	virtual size_t GetMemoryUsage(const CDmSymbolTableLarge* );
	/* tier0/datamodelsymboltable.cpp:64 */
	virtual void Commit(CDmSymbolTableLarge* );
protected:
	CUtlSymbolTableLargeMT m_SymbolTable; /* 8 208 */
	CInterlockedInt m_nUsers __attribute__((__aligned__(4))); /* 216 4 */
	void ~CDmSymbolTableLarge(class CDmSymbolTableLarge *); /* linkage=_ZN19CDmSymbolTableLargeD4Ev */
	void CDmSymbolTableLarge(class CDmSymbolTableLarge *, class CDmSymbolTableLarge &); /* linkage=_ZN19CDmSymbolTableLargeC4EOS_ */
	void CDmSymbolTableLarge(class CDmSymbolTableLarge *, const class CDmSymbolTableLarge  &); /* linkage=_ZN19CDmSymbolTableLargeC4ERKS_ */
	void CDmSymbolTableLarge(class CDmSymbolTableLarge *); /* linkage=_ZN19CDmSymbolTableLargeC4Ev */
	virtual void AddUser(class CDmSymbolTableLarge *); /* linkage=_ZN19CDmSymbolTableLarge7AddUserEv */
	virtual void ReleaseUser(class CDmSymbolTableLarge *); /* linkage=_ZN19CDmSymbolTableLarge11ReleaseUserEv */
	virtual UtlSymLargeId_t GetSymbol(class CDmSymbolTableLarge *, const char  *); /* linkage=_ZN19CDmSymbolTableLarge9GetSymbolEPKc */
	virtual const char  * GetString(const class CDmSymbolTableLarge  *, UtlSymLargeId_t); /* linkage=_ZNK19CDmSymbolTableLarge9GetStringEx */
	virtual uint GetSymbolCount(const class CDmSymbolTableLarge  *); /* linkage=_ZNK19CDmSymbolTableLarge14GetSymbolCountEv */
	virtual UtlSymLargeId_t Find(const class CDmSymbolTableLarge  *, const char  *); /* linkage=_ZNK19CDmSymbolTableLarge4FindEPKc */
	virtual int GetElements(const class CDmSymbolTableLarge  *, int, int, UtlSymLargeId_t *); /* linkage=_ZNK19CDmSymbolTableLarge11GetElementsEiiPx */
	virtual size_t GetMemoryUsage(const class CDmSymbolTableLarge  *); /* linkage=_ZNK19CDmSymbolTableLarge14GetMemoryUsageEv */
	virtual void Commit(class CDmSymbolTableLarge *); /* linkage=_ZN19CDmSymbolTableLarge6CommitEv */
} __attribute__((__aligned__(8)));

// <000E8C1C> tier0/datamodelsymboltable.cpp:18
void CDmSymbolTableLarge::CDmSymbolTableLarge()
{
} /* size: 0 */

// <000E8C03> tier0/datamodelsymboltable.cpp:18
inline void CDmSymbolTableLarge::CDmSymbolTableLarge()
{
} /* size: 0 */

// <000E8B74> tier0/datamodelsymboltable.cpp:20
// function calls: 2
void CDmSymbolTableLarge::AddUser()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 22
} /* size: 13, inline expansions: 2 (16 bytes) */

// <000E881C> tier0/datamodelsymboltable.cpp:25
// function calls: 13
void CDmSymbolTableLarge::ReleaseUser()
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 27
	CInterlockedIntT<int, 4>::operator!(); // 28
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
			int nLineNumber);  // 124
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 126
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockWrite(
			const char* pFileName,
			int nLineNumber);  // 960
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::~CAutoLockT(); // 128
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::RemoveAll(); // 30
} /* size: 165, inline expansions: 13 (512 bytes) */

// <000E6D1D> tier0/datamodelsymboltable.cpp:34
// function calls: 105
void CDmSymbolTableLarge::GetSymbol(const char* pString)
{
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable,
			const char* pString);  // 320
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::~CAutoLockT(); // 326
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolT this,
			handle_t idx);  // 324
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
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
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::SymbolFromID(
			uint nId);  // 312
	CUtlSymbolLarge::CUtlSymbolLarge(); // 311
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::FindInternal(
			const char* pString,
			int nStringLen);  // 267
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
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 278
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
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	Eq_t::GetSymbolTable(); // 216
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
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 218
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
				uint nId);  // 219
	V_strcmp(const char* s1,
		const char* s2);  // 222
	Eq_t::operator(
			const uint  a,
			const uint  b);  // 670
	DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolT this,
				unsigned int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(
			const unsigned int& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&, const empty_t&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 250
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
			const char* pString);  // 36
} /* size: 1341, inline expansions: 105 (7112 bytes) */

// <000E6CE0> tier0/datamodelsymboltable.cpp:39
void CDmSymbolTableLarge::GetString(UtlSymLargeId_t sym)
{
} /* size: 8 */

// <000E6C52> tier0/datamodelsymboltable.cpp:44
// function calls: 2
void CDmSymbolTableLarge::GetSymbolCount()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 132
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::GetNumStrings(); // 46
} /* size: 8, inline expansions: 2 (0 bytes) */

// <000E64D8> tier0/datamodelsymboltable.cpp:49
// function calls: 27
void CDmSymbolTableLarge::Find(const char* pString)
{
	V_strlen(const char* str); // 86
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable,
			const char* pString);  // 320
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::~CAutoLockT(); // 326
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolT this,
			handle_t idx);  // 324
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::SymbolFromID(
			uint nId);  // 312
	CUtlSymbolLarge::CUtlSymbolLarge(); // 311
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::FindInternal(
			const char* pString,
			int nStringLen);  // 86
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Find(
		const char* pString);  // 51
} /* size: 360, inline expansions: 27 (1648 bytes) */

// <000E5EF7> tier0/datamodelsymboltable.cpp:54
// variable: 1
// function calls: 22
void CDmSymbolTableLarge::GetElements(int nFirstIndex, int nCount, UtlSymLargeId_t* pSymbols)
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 138
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 139
	{
		int i; // 141
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
					uint nId);  // 253
		CUtlSymbolLarge::CUtlSymbolLarge(
				UtlSymLargeId_t id);  // 253
		CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::SymbolFromID(
				uint nId);  // 144
		CUtlSymbolLarge::operator=(
				const CUtlSymbolLarge& src);  // 144
	}
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::~CAutoLockT(); // 147
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::GetElements(
			int nFirstElement,
			int nCount,
			CUtlSymbolLarge* pElements);  // 56
} /* size: 343, inline expansions: 10 (818 bytes) */

// <000E5B72> tier0/datamodelsymboltable.cpp:59
// function calls: 14
void CDmSymbolTableLarge::GetMemoryUsage()
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 158
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::AllocSize(); // 324
	AllocSize(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolT this); // 320
	GetMemoryUsage(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolT this); // 159
	CUtlMemory<unsigned int, int>::AllocSize(); // 1867
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AllocSize(); // 161
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::~CAutoLockT(); // 163
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::GetMemoryUsage(); // 61
} /* size: 149, inline expansions: 14 (474 bytes) */

// <000E5B44> tier0/datamodelsymboltable.cpp:64
void CDmSymbolTableLarge::Commit()
{
} /* size: 5 */

// <000E51CC> tier0/datamodelsymboltable.cpp:74
// variable: 1
// function calls: 21
IGlobalSymbolMap* GetDmElementTypeSymbolMap(void)
{
	CDmSymbolTableLarge s_singleton; // 76
	IGlobalSymbolMap::IGlobalSymbolMap(); // 18
	{
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Eq_t::Eq_t(); // 178
		Hash_t::Hash_t(); // 178
		Init(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 178
		CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this,
				int minimumSize);  // 49
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				int growSize,
				int initCapacity);  // 49
		CThreadMutex::CThreadMutex(
				const char* pName);  // 48
		GetEqualRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 52
		Eq_t::SetSymbolTable(
				CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable);  // 52
		GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 53
		Hash_t::SetSymbolTable(
				CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable);  // 53
	}
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::CUtlSymbolTableLargeBase(
				int growSize,
				int initSize,
				bool caseInsensitive);  // 18
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 18
	CDmSymbolTableLarge::CDmSymbolTableLarge(); // 76
} /* size: 356, variables: 1, inline expansions: 4 (465 bytes) */

