
//
// fontmanager/fontamalgam.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 18
//

// <004B39D4> fontmanager/fontamalgam.cpp:18
// function calls: 9
void CFontAmalgam::CFontAmalgam()
{
	CUtlMemory<CFontAmalgam::SFontRange, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFontAmalgam::SFontRange, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::CUtlVector(); // 18
	CUtlMemory<CFontAmalgam::SFontRange, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CFontAmalgam::SFontRange, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::EnsureCapacity(
			int num);  // 28
} /* size: 121, inline expansions: 9 (154 bytes) */

// <004B39B8> fontmanager/fontamalgam.cpp:18
void CFontAmalgam::CFontAmalgam()
{
} /* size: 0 */

// <004B374B> fontmanager/fontamalgam.cpp:37
// variable: 1
// function calls: 12
void CFontAmalgam::~CFontAmalgam()
{
	{
		int i; // 1721
		CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 62
		SFontRange::~SFontRange(); // 1526
		Destruct<CFontAmalgam::SFontRange>(SFontRange* pMemory); // 1723
	}
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::RemoveAll(); // 1798
	CUtlMemory<CFontAmalgam::SFontRange, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFontAmalgam::SFontRange, int>::Purge(); // 903
	CUtlMemory<CFontAmalgam::SFontRange, int>::Purge(); // 1799
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Purge(); // 560
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::~CUtlVector(); // 39
} /* size: 155, inline expansions: 7 (473 bytes) */

// <004B372F> fontmanager/fontamalgam.cpp:37
void CFontAmalgam::~CFontAmalgam()
{
} /* size: 0 */

// <004B36B8> fontmanager/fontamalgam.cpp:44
void CFontAmalgam::SetProps(int tall, int weight, int blur, int scanlines, int flags)
{
} /* size: 42 */

// <004B3183> fontmanager/fontamalgam.cpp:56
// variable: 1
// function calls: 24
void CFontAmalgam::AddFont(CFontBase* pFont, const char* deferredFontName, uchar32 lowRange, uchar32 highRange)
{
	int i; // 58
	CUtlMemory<CFontAmalgam::SFontRange, int>::NumAllocated(); // 1143
	CUtlMemory<CFontAmalgam::SFontRange, int>::Base(); // 112
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Base(); // 368
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CFontAmalgam::SFontRange, int>::IsGrowable(); // 823
	CUtlMemory<CFontAmalgam::SFontRange, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CFontAmalgam::SFontRange, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CFontAmalgam::SFontRange, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 62
	SFontRange::SFontRange(); // 1479
	Construct<CFontAmalgam::SFontRange>(SFontRange* pMemory); // 1148
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::AddToTail(); // 58
	CUtlString::operator=(
			const char* src);  // 61
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 61
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 60
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 62
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 63
} /* size: 379, variables: 1, inline expansions: 24 (880 bytes) */

// <004B300E> fontmanager/fontamalgam.cpp:69
// variable: 1
// function calls: 6
void CFontAmalgam::RemoveAll()
{
	{
		int i; // 1721
		CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 62
		SFontRange::~SFontRange(); // 1526
		Destruct<CFontAmalgam::SFontRange>(SFontRange* pMemory); // 1723
	}
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::RemoveAll(); // 73
} /* size: 117, inline expansions: 1 (86 bytes) */

// <004B2C20> fontmanager/fontamalgam.cpp:79
// variables: 3
// function calls: 13
void CFontAmalgam::GetFontForChar(uchar32 uniChar, bool bForceSuccess)
{
	const char   __FUNCTION__; // 63878
	{
		int i; // 81
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
		}
		CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Count(); // 81
		CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
				int i);  // 83
		CFontAmalgam::RequireFont(
				int idx);  // 85
		CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
				int i);  // 87
		CUtlString::IsEmpty(); // 45
		CFontBase::IsValid(); // 87
		CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
				int i);  // 88
	}
	CFontAmalgam::RequireFont(
			int idx);  // 95
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 97
} /* size: 0, variables: 1, inline expansions: 3 (14 bytes) */

// <004B2AC8> fontmanager/fontamalgam.cpp:106
// function calls: 5
void CFontAmalgam::GetFirstFontHeight()
{
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Count(); // 252
	CFontAmalgam::RequireFont(
			int idx);  // 108
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 110
	CFontBase::GetHeight(); // 110
} /* size: 75, inline expansions: 5 (21 bytes) */

// <004B2970> fontmanager/fontamalgam.cpp:118
// function calls: 5
void CFontAmalgam::GetFirstFontMaxWidth()
{
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Count(); // 252
	CFontAmalgam::RequireFont(
			int idx);  // 120
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 122
	CFontBase::GetMaxCharWidth(); // 122
} /* size: 75, inline expansions: 5 (21 bytes) */

// <004B27D6> fontmanager/fontamalgam.cpp:130
// function calls: 7
void CFontAmalgam::GetFontName(int i)
{
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Count(); // 252
	CFontAmalgam::RequireFont(
			int idx);  // 132
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 134
	CUtlString::Get(); // 99
	CUtlString::String(); // 42
	CFontBase::GetName(); // 134
} /* size: 104, inline expansions: 7 (82 bytes) */

// <004B2682> fontmanager/fontamalgam.cpp:143
// function calls: 5
void CFontAmalgam::GetFlags(int i)
{
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Count(); // 252
	CFontAmalgam::RequireFont(
			int idx);  // 145
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 147
	CFontBase::GetFlags(); // 147
} /* size: 75, inline expansions: 5 (23 bytes) */

// <004B2622> fontmanager/fontamalgam.cpp:156
// function call: 1
void CFontAmalgam::GetCount()
{
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Count(); // 158
} /* size: 8, inline expansions: 1 (0 bytes) */

// <004B24CA> fontmanager/fontamalgam.cpp:165
// function calls: 5
void CFontAmalgam::GetUnderlined()
{
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Count(); // 252
	CFontAmalgam::RequireFont(
			int idx);  // 167
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 169
	CFontBase::GetUnderlined(); // 169
} /* size: 75, inline expansions: 5 (22 bytes) */

// <004B1F83> fontmanager/fontamalgam.cpp:182
// variables: 8
// function calls: 18
void CFontAmalgam::GetFontSpans(const uchar32* text, int textChars, CFontBase** firstFont, CUtlVector<SFontSpan, CUtlMemory<SFontSpan, int> >* spans, bool bForceSuccess)
{
	int nfonts; // 189
	int start; // 190
	CFontBase* curFont; // 191
	{
		int i; // 199
		{
			CFontBase* charFont; // 201
			bool split; // 202
			{
				SFontSpan span; // 223
				CUtlMemory<SFontSpan, int>::NumAllocated(); // 1196
				CUtlMemory<SFontSpan, int>::operator[](
						int i);  // 602
				CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::Element(
					int i);  // 1201
				CopyConstruct<SFontSpan>(SFontSpan* pMemory,
							const SFontSpan& src);  // 1201
				CUtlMemory<SFontSpan, int>::Base(); // 112
				CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::Base(); // 368
				CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::AddToTail(
						const SFontSpan& src);  // 229
			}
		}
	}
	{
		SFontSpan span; // 238
		CUtlMemory<SFontSpan, int>::NumAllocated(); // 1196
		CUtlMemory<SFontSpan, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::Element(
			int i);  // 1201
		CopyConstruct<SFontSpan>(SFontSpan* pMemory,
					const SFontSpan& src);  // 1201
		CUtlMemory<SFontSpan, int>::Base(); // 112
		CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::Base(); // 368
		CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<SFontSpan, CUtlMemory<SFontSpan, int> >::AddToTail(
				const SFontSpan& src);  // 244
	}
} /* size: 0, variables: 3 */

// <004B41FE> fontmanager/fontamalgam.cpp:250
// function call: 1
void CFontAmalgam::RequireFont(int idx)
{
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::Count(); // 252
} /* size: 0, inline expansions: 1 (0 bytes) */

// <004B3F92> fontmanager/fontamalgam.cpp:250
// function calls: 10
void CFontAmalgam::RequireFont(int idx)
{
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 256
	CUtlString::IsEmpty(); // 260
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 265
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 268
	CUtlString::Clear(); // 268
	CUtlMemory<CFontAmalgam::SFontRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> >::operator[](
			int i);  // 270
} /* size: 159, inline expansions: 10 (63 bytes) */

// <004B1F5B> fontmanager/fontamalgam.cpp:250
void CFontAmalgam::RequireFont(int idx)
{
} /* size: 0 */

