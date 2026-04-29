
//
// tier0/utlsymboltable.cpp
//
//	referenced by: libtier0.so
//
//	functions: 16
//

// <005C35D3> tier0/utlsymboltable.cpp:17
// function calls: 16
void CUtlSymbolTable::CUtlSymbolTable(int growSize, int initSize, bool caseInsensitive)
{
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Eq_t::Eq_t(); // 178
	Hash_t::Hash_t(); // 178
	Init(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this,
			int minimumSize);  // 18
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 18
	Eq_t::SetSymbolTable(
			CUtlSymbolTable* pTable);  // 20
	GetEqualRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this); // 20
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this); // 21
	Hash_t::SetSymbolTable(
			CUtlSymbolTable* pTable);  // 21
} /* size: 166, inline expansions: 16 (219 bytes) */

// <005C3593> tier0/utlsymboltable.cpp:17
void CUtlSymbolTable::CUtlSymbolTable(int growSize, int initSize, bool caseInsensitive)
{
} /* size: 0 */

// <005C323A> tier0/utlsymboltable.cpp:24
// function calls: 16
void CUtlSymbolTable::~CUtlSymbolTable()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 28
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this); // 28
} /* size: 102, inline expansions: 16 (225 bytes) */

// <005C321E> tier0/utlsymboltable.cpp:24
void CUtlSymbolTable::~CUtlSymbolTable()
{
} /* size: 0 */

// <005C3164> tier0/utlsymboltable.cpp:31
// function call: 1
void CUtlSymbolTable::Find(const char* pString)
{
	V_strlen(const char* str); // 33
} /* size: 99, inline expansions: 1 (26 bytes) */

// <005C2F62> tier0/utlsymboltable.cpp:36
// variable: 1
// function calls: 5
void CUtlSymbolTable::Find(const char* pString, int nStringChars)
{
	uint nHash; // 41
	Hash_t::GetSymbolTable(); // 135
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 133
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 41
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory< this); // 41
	CUtlSymbol::CUtlSymbol(); // 39
} /* size: 161, variables: 1, inline expansions: 5 (102 bytes) */

// <005C27FD> tier0/utlsymboltable.cpp:46
// variables: 7
// function calls: 22
void CUtlSymbolTable::Find(const char* pString, int nStringChars, uint nHash)
{
	 isMatch; // 48
	UtlHashHandle_t hFind; // 63
	int nId; // 67
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		{
			const char* pStringB; // 50
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
					blockpooloffset_t nIndex);  // 188
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 188
			CUtlSymbolTable::StringFromSymbolID(
						uint nId);  // 50
			V_strncmp<int>(const char* s1,
					const char* s2,
					int count);  // 55
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 53
		}
		operator()(const class* __closure,
				const uint  nElement); // 627
	}
	FindMatch<CUtlSymbolTable::Find(char const*, int, uint) const::<lambda(uint)> >(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory< this,
											unsigned int nHashToMatch,
											const class& isMatch); // 63
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 65
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory< this,
			handle_t idx);  // 67
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 68
} /* size: 415, variables: 3, inline expansions: 9 (367 bytes) */

// <005C2721> tier0/utlsymboltable.cpp:71
// variable: 1
// function calls: 2
void CUtlSymbolTable::GetElements(int nFirstElement, int nCount, CUtlSymbol* pElements)
{
	{
		int i; // 73
		CUtlSymbol::CUtlSymbol(
				UtlSymId_t id);  // 75
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 75
	}
} /* size: 283 */

// <005C25D9> tier0/utlsymboltable.cpp:81
// variables: 3
// function calls: 5
void CUtlSymbolTable::GetMemoryUsage()
{
	size_t nHashSize; // 83
	size_t nStringSize; // 84
	size_t nSymbolSize; // 85
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::AllocSize(); // 324
	AllocSize(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory< this); // 320
	GetMemoryUsage(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory< this); // 83
	CUtlMemory<unsigned int, int>::AllocSize(); // 1867
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AllocSize(); // 85
} /* size: 51, variables: 3, inline expansions: 5 (34 bytes) */

// <005C256F> tier0/utlsymboltable.cpp:89
void CUtlSymbolTable::SetPageSize(uint nPageSize)
{
} /* size: 13 */

// <005C24B5> tier0/utlsymboltable.cpp:98
// function call: 1
void CUtlSymbolTable::AddString(const char* pString)
{
	V_strlen(const char* str); // 100
} /* size: 99, inline expansions: 1 (26 bytes) */

// <005C136A> tier0/utlsymboltable.cpp:107
// variables: 7
// function calls: 63
void CUtlSymbolTable::AddString(const char* pString, int nStrLen)
{
	uint nHash; // 112
	CUtlSymbol id; // 113
	blockpooloffset_t nOffset; // 123
	char* pDest; // 124
	uint nNewId; // 128
	const char   __FUNCTION__; // 25380
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
	}
	Hash_t::GetSymbolTable(); // 135
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 133
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 112
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this); // 112
	CUtlSymbol::IsValid(); // 115
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 116
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 110
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
			blockpooloffset_t nIndex);  // 124
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 125
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
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 128
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 129
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	Eq_t::GetSymbolTable(); // 163
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
			blockpooloffset_t nIndex);  // 188
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 188
	CUtlSymbolTable::StringFromSymbolID(
				uint nId);  // 165
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 188
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
			blockpooloffset_t nIndex);  // 188
	CUtlSymbolTable::StringFromSymbolID(
				uint nId);  // 166
	V_strcmp(const char* s1,
		const char* s2);  // 169
	Eq_t::operator(
			const uint  a,
			const uint  b);  // 670
	DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory< this,
				unsigned int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(
			const unsigned int& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&, const empty_t&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 250
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHa this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 132
	CUtlSymbol::CUtlSymbol(
			UtlSymId_t id);  // 134
} /* size: 0, variables: 6, inline expansions: 63 (2604 bytes) */

// <005C10D1> tier0/utlsymboltable.cpp:142
// function calls: 10
void CUtlSymbolTable::String(CUtlSymbol id)
{
	CUtlSymbol::IsValid(); // 144
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 148
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
			blockpooloffset_t nIndex);  // 186
	CUtlSymbolTable::StringFromIndex(
			const blockpooloffset_t& index);  // 148
} /* size: 75, inline expansions: 10 (98 bytes) */

// <005C0F4C> tier0/utlsymboltable.cpp:156
// function calls: 6
void CUtlSymbolTable::RemoveAll()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 158
} /* size: 89, inline expansions: 6 (133 bytes) */

// <005C0A34> tier0/utlsymboltable.cpp:167
// variables: 3
// function calls: 9
void CUtlSymbolTable::SaveToBuffer(CUtlBuffer& buffer)
{
	int nCount; // 173
	{
		int i; // 174
		{
			const char* pString; // 176
			V_strlen(const char* str); // 177
			CUtlSymbol::CUtlSymbol(
					UtlSymId_t id);  // 176
		}
	}
	CUtlBuffer::PutInt(
		int i);  // 170
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 171
	CUtlBuffer::PutInt(
		int i);  // 171
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 173
	CUtlBuffer::IsValid(); // 184
} /* size: 217, variables: 1, inline expansions: 7 (42 bytes) */

// <005BFBFB> tier0/utlsymboltable.cpp:187
// variables: 11
// function calls: 48
void CUtlSymbolTable::RestoreFromBuffer(CUtlBuffer& buffer)
{
	int nSig; // 190
	int nCount; // 197
	CBufferStringN<1024> tempString; // 198
	const char   __FUNCTION__; // 18542
	{
		int i; // 199
		{
			CUtlSymbol nSym; // 202
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 203
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 202
			CUtlSymbol::operator UtlSymId_t(); // 203
		}
	}
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<int>(char* pString,
				char** ppEnd,
				int nRadix);  // 915
	CUtlBuffer::BGetTypeText<int>(
				int& value,
				int nRadix);  // 929
	CUtlBuffer::BGetType<int>(
			int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 694
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 672
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 930
	CUtlBuffer::BGetType<int>(
			int& dest);  // 1117
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 190
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<int>(char* pString,
				char** ppEnd,
				int nRadix);  // 915
	CUtlBuffer::BGetTypeText<int>(
				int& value,
				int nRadix);  // 929
	CUtlBuffer::BGetType<int>(
			int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 694
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 672
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 930
	CUtlBuffer::BGetType<int>(
			int& dest);  // 1117
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 197
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<1024>::CBufferStringN(); // 198
	CUtlBuffer::IsValid(); // 206
	CBufferString::~CBufferString(); // 587
	CBufferStringN<1024>::~CBufferStringN(); // 207
} /* size: 0, variables: 4, inline expansions: 38 (3152 bytes) */

