
//
// tier0/filterstring.cpp
//
//	referenced by: libtier0.so
//
//	functions: 2
//

// <00197E3E> tier0/filterstring.cpp:14
// variables: 12
// function calls: 89
void CFilterString::SetString(const char* pString)
{
	CSplitString splitOr; // 22
	{
		const char* pOrGroup; // 23
		CSplitString& __for_range; // 53273
		iterator __for_begin; // 38964
		iterator __for_end; // 38964
		{
			CSplitString splitSpaces; // 25
			OrGroup_t* pGroup; // 29
			{
				const char* pSpaceEntry; // 30
				CSplitString& __for_range; // 53273
				iterator __for_begin; // 38964
				iterator __for_end; // 38964
				{
					MatchString_t* pMatchString; // 32
					CUtlMemory<CFilterString::MatchString_t, int>::Base(); // 112
					CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::Base(); // 368
					CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::ResetDbgInfo(); // 824
					CUtlMemory<CFilterString::MatchString_t, int>::IsGrowable(); // 823
					CUtlMemory<CFilterString::MatchString_t, int>::IsExternallyAllocated(); // 859
					CUtlMemory<CFilterString::MatchString_t, int>::IsExternallyAllocated(); // 861
					CUtlMemory<CFilterString::MatchString_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlMemory<CFilterString::MatchString_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::Element(
						int i);  // 1148
					CUtlString::CUtlString(); // 37
					MatchString_t::MatchString_t(); // 1479
					Construct<CFilterString::MatchString_t>(MatchString_t* pMemory); // 1148
					CUtlMemory<CFilterString::MatchString_t, int>::NumAllocated(); // 1143
					CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::AddToTail(); // 1156
					CUtlMemory<CFilterString::MatchString_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::Element(
						int i);  // 1156
					CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::AddToTailGetPtr(); // 32
					CUtlString::operator=(
							const char* src);  // 41
				}
				CUtlMemory<char::Base(); // 112
				CUtlVectorBase<char::Base(); // 102
				CUtlVectorBase<char::begin(); // 30
				CUtlVectorBase<char::Count(); // 104
				CUtlVectorBase<char::end(); // 30
			}
			CUtlVectorBase<char::RemoveAll(); // 1798
			CUtlMemory<char::IsExternallyAllocated(); // 905
			CUtlMemory<char::Purge(); // 903
			CUtlMemory<char::Purge(); // 1799
			CUtlVectorBase<char::Purge(); // 560
			ValidateAlignment<char*>(void); // 508
			CUtlMemory<char::Purge(); // 510
			CUtlMemory<char::~CUtlMemory(); // 562
			CUtlVectorBase<char::~CUtlVectorBase(); // 410
			CUtlVector<char::~CUtlVector(); // 40
			CSplitString::~CSplitString(); // 43
			CUtlVectorBase<char::ResetDbgInfo(); // 530
			CUtlMemory<char::ValidateGrowSize(); // 475
			CUtlMemory<char::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<char::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<char::CUtlVector(); // 30
			CSplitString::CSplitString(
					const char* pString,
					const char* pSeparator);  // 25
			CUtlVectorBase<char::Count(); // 26
			CUtlMemory<CFilterString::OrGroup_t, int>::NumAllocated(); // 1143
			CUtlMemory<CFilterString::OrGroup_t, int>::Base(); // 112
			CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::Base(); // 368
			CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CFilterString::OrGroup_t, int>::IsGrowable(); // 823
			CUtlMemory<CFilterString::OrGroup_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CFilterString::OrGroup_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CFilterString::OrGroup_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CFilterString::OrGroup_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::Element(
				int i);  // 1148
			CUtlMemory<CFilterString::MatchString_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CFilterString::MatchString_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::CUtlVector(); // 43
			OrGroup_t::OrGroup_t(); // 1479
			Construct<CFilterString::OrGroup_t>(OrGroup_t* pMemory); // 1148
			CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::AddToTail(); // 1156
			CUtlMemory<CFilterString::OrGroup_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::Element(
				int i);  // 1156
			CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::AddToTailGetPtr(); // 29
		}
		CUtlMemory<char::Base(); // 112
		CUtlVectorBase<char::Base(); // 102
		CUtlVectorBase<char::begin(); // 23
		CUtlVectorBase<char::Count(); // 104
		CUtlVectorBase<char::end(); // 23
	}
	CUtlString::Get(); // 16
	V_strcmp(const char* s1,
		const char* s2);  // 16
	CUtlString::operator=(
			const char* src);  // 19
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 30
	CSplitString::CSplitString(
			const char* pString,
			const char* pSeparator);  // 22
	CUtlVectorBase<char::RemoveAll(); // 1798
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 40
	CSplitString::~CSplitString(); // 44
} /* size: 1216, variables: 1, inline expansions: 20 (451 bytes) */

// <0019790D> tier0/filterstring.cpp:49
// variables: 11
// function calls: 21
void CFilterString::DoesMatchString(const char* pValue, FilterStringMatchFlags_t nMatchFlags)
{
	const bool  bCaseSensative; // 51
	{
		const OrGroup_t& orGroup; // 78
		const CUtlVector<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >& __for_range; // 36517
		const_iterator __for_begin; // 33102
		const_iterator __for_end; // 33102
		{
			bool bMatchedGroup; // 80
			{
				const MatchString_t& andString; // 82
				const CUtlVector<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >& __for_range; // 30621
				const_iterator __for_begin; // 27174
				const_iterator __for_end; // 27174
				{
					bool bMatchesString; // 84
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 88
					strstr(const char* __haystack,
						const char* __needle);  // 247
					V_strstr(const char* s1,
						const char* search);  // 88
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 92
				}
				CUtlMemory<CFilterString::MatchString_t, int>::Base(); // 113
				CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::Base(); // 103
				CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::begin(); // 82
				CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::Count(); // 105
				CUtlVectorBase<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> >::end(); // 82
			}
		}
		CUtlMemory<CFilterString::OrGroup_t, int>::Base(); // 113
		CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::Base(); // 103
		CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::begin(); // 78
		CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::Count(); // 105
		CUtlVectorBase<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> >::end(); // 78
	}
	operator&(FilterStringMatchFlags_t a,
			FilterStringMatchFlags_t b);  // 51
	CUtlString::IsEmpty(); // 53
	V_isempty(const char* pszString); // 58
	operator&(FilterStringMatchFlags_t a,
			FilterStringMatchFlags_t b);  // 63
	V_strcmp(const char* s1,
		const char* s2);  // 67
} /* size: 370, variables: 1, inline expansions: 5 (41 bytes) */

