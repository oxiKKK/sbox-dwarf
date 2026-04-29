
//
// fontmanager/stubfont.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 10
//

// <005B2C65> fontmanager/stubfont.cpp:11
// function calls: 18
void CPlatformFont::CPlatformFont()
{
	CUtlString::CUtlString(); // 17
	CFontBase::CFontBase(); // 13
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
	CUtlRBTree<CPlatformFont::abc_cache_t, short unsigned int, bool (::ResetDbgInfo()(const CPlatformFont::abc_cache_t&, const CPlatf this); // 491
	CUtlRBTree<CPlatformFont::abc_cache_t, short unsigned int, bool (::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 12
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
	CUtlRBTree<CPlatformFont::kerned_abc_cache_t, short unsigned int, bool (::ResetDbgInfo()(const CPlatformFont::kerned_abc_cache_t& this); // 491
	CUtlRBTree<CPlatformFont::kerned_abc_cache_t, short unsigned int, bool (::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 13
} /* size: 159, inline expansions: 18 (173 bytes) */

// <005B2C4C> fontmanager/stubfont.cpp:11
void CPlatformFont::CPlatformFont()
{
} /* size: 0 */

// <005B27E0> fontmanager/stubfont.cpp:20
// function calls: 22
void CPlatformFont::~CPlatformFont()
{
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
	CUtlRBTree<CPlatformFont::kerned_abc_cache_t, short unsigned int, bool (::Purge()(const CPlatformFont::kerned_abc_cache_t& this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
	CUtlRBTree<CPlatformFont::kerned_abc_cache_t, short unsigned int, bool (::~CUtlRBTree()(const CPlatformFont::kerned_abc_cache_t& this); // 23
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
	CUtlRBTree<CPlatformFont::abc_cache_t, short unsigned int, bool (::Purge()(const CPlatformFont::abc_cache_t&, const CPlatf this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
	CUtlRBTree<CPlatformFont::abc_cache_t, short unsigned int, bool (::~CUtlRBTree()(const CPlatformFont::abc_cache_t&, const CPlatf this); // 23
	CUtlString::~CUtlString(); // 33
	CFontBase::~CFontBase(); // 23
} /* size: 150, inline expansions: 22 (268 bytes) */

// <005B2779> fontmanager/stubfont.cpp:20
void CPlatformFont::~CPlatformFont()
{
} /* size: 36 */

// <005B26BF> fontmanager/stubfont.cpp:25
void CPlatformFont::FindFontDataFile(const char* windowsFontName, int tall, int weight, int blur, int scanlines, int flags, CBufferString* pDataFile, CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* descs)
{
} /* size: 7 */

// <005B2600> fontmanager/stubfont.cpp:33
void CPlatformFont::Create(const char* windowsFontName, const char* fontDataFile, void* fontData, int fontDataBytes, int tall, int weight, int blur, int scanlines, int flags, CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* descs)
{
} /* size: 7 */

// <005B25C4> fontmanager/stubfont.cpp:40
void CPlatformFont::CharToGlyph(uchar32 uniChar)
{
} /* size: 0 */

// <005B2459> fontmanager/stubfont.cpp:46
// function calls: 2
void CPlatformFont::GetCharRGBA(uchar32 uniChar, int rgbaWide, int rgbaTall, unsigned char* prgba)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 51
} /* size: 49, inline expansions: 2 (55 bytes) */

// <005B23D5> fontmanager/stubfont.cpp:55
void CPlatformFont::GetKernedCharWidth(uchar32 uniChar, uchar32 chBefore, uchar32 chAfter, float& wide, float& abcA, float& abcC)
{
} /* size: 34 */

// <005B2375> fontmanager/stubfont.cpp:63
void CPlatformFont::GetCharABCWidths(uchar32 uniChar, int& a, int& b, int& c)
{
} /* size: 24 */

