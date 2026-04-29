
//
// tier0/utlstablesymboltable.cpp
//
//	referenced by: libtier0.so
//
//	functions: 4
//

// <005742C4> tier0/utlstablesymboltable.cpp:9
// variables: 6
// function calls: 28
void CStableSymbolTable::GetId(const char* pSymbol, bool* pIsNewSymbol)
{
	int nLength; // 14
	uint nHash; // 15
	UtlHashHandle_t hFind; // 16
	bool bNew; // 17
	{
		char* pCopy; // 21
		int nNewId; // 23
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
				blockpooloffset_t nIndex);  // 516
		CUtlMemoryBlockAllocator::AllocPtr(
			uint nSize);  // 21
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 22
		CUtlMemory<char const::NumAllocated(); // 1196
		CUtlMemory<char const::operator[](
				int i);  // 602
		CUtlVectorBase<char const::Element(
			int i);  // 1201
		CopyConstruct<char const*>(const char ** pMemory,
						const char* const& src);  // 1201
		CUtlMemory<char const::Base(); // 112
		CUtlVectorBase<char const::Base(); // 368
		CUtlVectorBase<char const::ResetDbgInfo(); // 824
		CUtlVectorBase<char const::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char const::AddToTail(
				const char* const& src);  // 23
		CUtlMemory<CUtlHashtableEntry<char const::operator[](
				int i);  // 720
		CUtlKeyValuePair<char const::CUtlKeyValuePair<char const*, int>(
							const char* const& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<char const*, int>, char const*&, int&>(CUtlKeyValuePair<char const*, int>* pMemory); // 720
		CUtlHashtable<char const::DoInsert<char const*>(
					const char* k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
		CUtlHashtable<char const::DoInsert<char const*>(
					const char* k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 250
		CUtlHashtable<char const::Insert(
			KeyArg_t k,
			ValueArg_t v,
			unsigned int hash,
			bool* pDidInsert);  // 24
	}
	V_strlen(const char* str); // 14
	CUtlHashtable<char const::Find(
		KeyArg_t k,
		unsigned int hash);  // 16
	CUtlMemory<CUtlHashtableEntry<char const::operator[](
			int i);  // 297
	CUtlHashtable<char const::operator[](
			handle_t idx);  // 32
} /* size: 408, variables: 4, inline expansions: 4 (96 bytes) */

// <00573A48> tier0/utlstablesymboltable.cpp:37
// variables: 2
// function calls: 31
void CStableSymbolTable::Insert(int nId, const char* pSymbol)
{
	{
		int nLength; // 43
		char* pCopy; // 44
		V_strlen(const char* str); // 43
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
				blockpooloffset_t nIndex);  // 516
		CUtlMemoryBlockAllocator::AllocPtr(
			uint nSize);  // 44
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 45
		CUtlMemory<char const::operator[](
				int i);  // 588
		CUtlVectorBase<char const::operator[](
				int i);  // 46
		Hash_t::operator(
				const char* pString);  // 249
		CUtlMemory<CUtlHashtableEntry<char const::operator[](
				int i);  // 720
		CUtlKeyValuePair<char const::CUtlKeyValuePair<char const*, int>(
							const char* const& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<char const*, int>, char const*&, int&>(CUtlKeyValuePair<char const*, int>* pMemory); // 720
		CUtlHashtable<char const::DoInsert<char const*>(
					const char* k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
		CUtlHashtable<char const::DoInsert<char const*>(
					const char* k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
		CUtlHashtable<char const::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 47
	}
	CUtlVectorBase<char const::Count(); // 39
	CUtlMemory<char const::operator[](
			int i);  // 602
	CUtlVectorBase<char const::Element(
		int i);  // 1252
	Construct<char const*, char const*>(const char ** pMemory); // 1252
	CUtlMemory<char const::NumAllocated(); // 1247
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 368
	CUtlVectorBase<char const::ResetDbgInfo(); // 824
	CUtlVectorBase<char const::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<char const::AddToTail(
			const char  *& src);  // 40
	CUtlMemory<char const::operator[](
			int i);  // 588
	CUtlVectorBase<char const::operator[](
			int i);  // 41
} /* size: 428, inline expansions: 12 (135 bytes) */

// <00574D9F> tier0/utlstablesymboltable.cpp:51
void Hash_t::operator(const char* pString)
{
} /* size: 0 */

// <00574DFC> tier0/utlstablesymboltable.cpp:56
void Eq_t::operator(const char* a, const char* b)
{
} /* size: 0 */

