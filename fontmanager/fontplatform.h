
//
// fontmanager/fontplatform.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 11
//	class: 1
//	struct: 1
//

// <004ECA3A> fontmanager/fontplatform.h:33
void FindFontFuncs(void)
{
} /* size: 0 */

// <004FAC3E> fontmanager/fontplatform.h:44
void SFontDescription::SFontDescription()
{
} /* size: 0 */

// <004FAC22> fontmanager/fontplatform.h:44
inline void SFontDescription::SFontDescription()
{
} /* size: 0 */

// <004FAC0B> fontmanager/fontplatform.h:44
void SFontDescription::~SFontDescription()
{
} /* size: 0 */

// <004FABEF> fontmanager/fontplatform.h:44
inline void SFontDescription::~SFontDescription()
{
} /* size: 0 */

// <004F8FD2> fontmanager/fontplatform.h:44
inline void SFontDescription::operator=(const SFontDescription &)
{
} /* size: 0 */

// <004F6E87> fontmanager/fontplatform.h:44
void SFontDescription::SFontDescription(const SFontDescription &)
{
} /* size: 0 */

// <004F6E66> fontmanager/fontplatform.h:44
inline void SFontDescription::SFontDescription(const SFontDescription &)
{
} /* size: 0 */

// <004AE569> fontmanager/fontplatform.h:44
// member variables: 3
// struct size: 16
struct SFontDescription {
	CUtlString name; /* 0 8 */
	uchar32 nMinCodePoint; /* 8 4 */
	uchar32 nMaxCodePoint; /* 12 4 */
};

// <005AC1CB> fontmanager/fontplatform.h:51
// member functions: 24
// member variables: 6
// vtable entries: 2
// class size: 152
class CPlatformFont : public CFontBase {
	/* fontmanager/fontplatform.h:82 */
	struct abc_t {
		short int b; /* 0 2 */
		char a; /* 2 1 */
		char c; /* 3 1 */
	};
	/* fontmanager/fontplatform.h:89 */
	struct abc_cache_t {
		uchar32 uniChar; /* 0 4 */
		abc_t abc; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fontplatform.h:104 */
	struct kernedSize {
		float wide; /* 0 4 */
		float abcA; /* 4 4 */
		float abcC; /* 8 4 */
	};
	/* fontmanager/fontplatform.h:111 */
	struct kerned_abc_cache_t {
		uchar32 uniChar; /* 0 4 */
		uchar32 uniCharBefore; /* 4 4 */
		uchar32 uniCharAfter; /* 8 4 */
		kernedSize abc; /* 12 12 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CFontBase <ancestor>; */ /* 0 64 */
	void CPlatformFont(CPlatformFont* , const CPlatformFont& );
	/* fontmanager/stubfont.cpp:11 */
	void CPlatformFont(CPlatformFont* );
	/* fontmanager/stubfont.cpp:20 */
	virtual void ~CPlatformFont(CPlatformFont* );
	/* fontmanager/stubfont.cpp:63 */
	virtual void GetCharABCWidths(CPlatformFont* , uchar32, int& , int& , int& );
	/* fontmanager/stubfont.cpp:55 */
	virtual void GetKernedCharWidth(CPlatformFont* , uchar32, uchar32, uchar32, float& , float& , float& );
	/* fontmanager/stubfont.cpp:25 */
	bool FindFontDataFile(CPlatformFont* , const char* , int, int, int, int, int, CBufferString* , CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* );
	/* fontmanager/stubfont.cpp:33 */
	bool Create(CPlatformFont* , const char* , const char* , void* , int, int, int, int, int, int, CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* );
	/* fontmanager/stubfont.cpp:46 */
	void GetCharRGBA(CPlatformFont* , uchar32, int, int, unsigned char* );
	/* fontmanager/stubfont.cpp:40 */
	uint16 CharToGlyph(CPlatformFont* , uchar32);
private:
	CUtlRBTree<CPlatformFont::abc_cache_t, short unsigned int, bool (*)(const CPlatformFont::abc_cache_t&, const CPlatformFont::abc_cache_t&), CUtlMemory<UtlRBTreeNode_t<CPlatformFont::abc_cache_t, short unsigned int>, short unsigned int> > m_ExtendedABCWidthsCache; /* 64 40* /
	/* fontmanager/fontplatform.h:98 */
	bool ExtendedABCWidthsCacheLessFunc(const abc_cache_t& , const abc_cache_t& );
	/* fontmanager/fontplatform.h:119 */
	bool ExtendedKernedABCWidthsCacheLessFunc(const kerned_abc_cache_t& , const kerned_abc_cache_t& );
	CUtlRBTree<CPlatformFont::kerned_abc_cache_t, short unsigned int, bool (*)(const CPlatformFont::kerned_abc_cache_t&, const CPlatformFont::kerned_abc_cache_t&), CUtlMemory<UtlRBTreeNode_t<CPlatformFont::kerned_abc_cache_t, short unsigned int>, short unsigned int> > m_ExtendedKernedABCWidthsCache; /* 104 40* /
protected:
	bool m_bIsSymbolFont; /* 144 1 */
	bool m_bIsMarlett; /* 145 1 */
	uchar32 m_nSymbolBase; /* 148 4 */
	void CPlatformFont(class CPlatformFont *, const class CPlatformFont  &); /* linkage=_ZN13CPlatformFontC4ERKS_ */
	void CPlatformFont(class CPlatformFont *); /* linkage=_ZN13CPlatformFontC4Ev */
	virtual void ~CPlatformFont(class CPlatformFont *); /* linkage=_ZN13CPlatformFontD4Ev */
	virtual void GetCharABCWidths(class CPlatformFont *, uchar32, int &, int &, int &); /* linkage=_ZN13CPlatformFont16GetCharABCWidthsEwRiS0_S0_ */
	virtual void GetKernedCharWidth(class CPlatformFont *, uchar32, uchar32, uchar32, float &, float &, float &); /* linkage=_ZN13CPlatformFont18GetKernedCharWidthEwwwRfS0_S0_ */
	bool FindFontDataFile(class CPlatformFont *, const char  *, int, int, int, int, int, class CBufferString *, class CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> > *); /* linkage=_ZN13CPlatformFont16FindFontDataFileEPKciiiiiP13CBufferStringP10CUtlVectorI16SFontDescription10CUtlMemoryIS5_iEE */
	bool Create(class CPlatformFont *, const char  *, const char  *, void *, int, int, int, int, int, int, class CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> > *); /* linkage=_ZN13CPlatformFont6CreateEPKcS1_PviiiiiiP10CUtlVectorI16SFontDescription10CUtlMemoryIS4_iEE */
	void GetCharRGBA(class CPlatformFont *, uchar32, int, int, unsigned char *); /* linkage=_ZN13CPlatformFont11GetCharRGBAEwiiPh */
	uint16 CharToGlyph(class CPlatformFont *, uchar32); /* linkage=_ZN13CPlatformFont11CharToGlyphEw */
	bool ExtendedABCWidthsCacheLessFunc(const class abc_cache_t  &, const class abc_cache_t  &); /* linkage=_ZN13CPlatformFont30ExtendedABCWidthsCacheLessFuncERKNS_11abc_cache_tES2_ */
	bool ExtendedKernedABCWidthsCacheLessFunc(const class kerned_abc_cache_t  &, const class kerned_abc_cache_t  &); /* linkage=_ZN13CPlatformFont36ExtendedKernedABCWidthsCacheLessFuncERKNS_18kerned_abc_cache_tES2_ */
};

// <004EC8D0> fontmanager/fontplatform.h:54
void CPlatformFont::CPlatformFont()
{
} /* size: 0 */

// <005B3055> fontmanager/fontplatform.h:98
void ExtendedABCWidthsCacheLessFunc(const abc_cache_t& lhs, const abc_cache_t& rhs)
{
} /* size: 12 */

// <005B301A> fontmanager/fontplatform.h:119
void ExtendedKernedABCWidthsCacheLessFunc(const kerned_abc_cache_t& lhs, const kerned_abc_cache_t& rhs)
{
} /* size: 62 */

