
//
// fontmanager/fontamalgam.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 6
//	classes: 2
//

// <004AC987> fontmanager/fontamalgam.h:18
// member functions: 30
// member variables: 6
// class size: 56
class CFontAmalgam {
	/* fontmanager/fontamalgam.h:62 */
	struct SFontRange {
		uchar32 lowRange; /* 0 4 */
		uchar32 highRange; /* 4 4 */
		CFontBase * font; /* 8 8 */
		CUtlString deferredFontName; /* 16 8 */
		void ~SFontRange(SFontRange* );
		void SFontRange(SFontRange* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fontamalgam.h:21 */
	void CFontAmalgam(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:22 */
	void ~CFontAmalgam(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:25 */
	void SetProps(CFontAmalgam* , int, int, int, int, int);
	/* fontmanager/fontamalgam.h:28 */
	void AddFont(CFontAmalgam* , CFontBase* , const char* , uchar32, uchar32);
	/* fontmanager/fontamalgam.h:31 */
	CFontBase* GetFontForChar(CFontAmalgam* , uchar32, bool);
	/* fontmanager/fontamalgam.h:34 */
	int GetFirstFontHeight(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:37 */
	int GetFirstFontMaxWidth(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:40 */
	int GetFlags(CFontAmalgam* , int);
	/* fontmanager/fontamalgam.h:43 */
	const char* GetFontName(CFontAmalgam* , int);
	/* fontmanager/fontamalgam.h:46 */
	int GetCount(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:49 */
	bool GetUnderlined(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:56 */
	int GetFontSpans(CFontAmalgam* , const uchar32* , int, CFontBase** , CUtlVector<SFontSpan, CUtlMemory<SFontSpan, int> >* , bool);
	/* fontmanager/fontamalgam.h:59 */
	void RemoveAll(CFontAmalgam* );
private:
	CUtlVector<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> > m_Fonts; /* 0 32 */
	int m_propTall; /* 32 4 */
	int m_propWeight; /* 36 4 */
	int m_propBlur; /* 40 4 */
	int m_propScanlines; /* 44 4 */
	int m_propFlags; /* 48 4 */
	/* fontmanager/fontamalgam.h:78 */
	bool RequireFont(CFontAmalgam* , int);
	void CFontAmalgam(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgamC4Ev */
	void ~CFontAmalgam(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgamD4Ev */
	void SetProps(class CFontAmalgam *, int, int, int, int, int); /* linkage=_ZN12CFontAmalgam8SetPropsEiiiii */
	void AddFont(class CFontAmalgam *, class CFontBase *, const char  *, uchar32, uchar32); /* linkage=_ZN12CFontAmalgam7AddFontEP9CFontBasePKcww */
	class CFontBase * GetFontForChar(class CFontAmalgam *, uchar32, bool); /* linkage=_ZN12CFontAmalgam14GetFontForCharEwb */
	int GetFirstFontHeight(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam18GetFirstFontHeightEv */
	int GetFirstFontMaxWidth(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam20GetFirstFontMaxWidthEv */
	int GetFlags(class CFontAmalgam *, int); /* linkage=_ZN12CFontAmalgam8GetFlagsEi */
	const char  * GetFontName(class CFontAmalgam *, int); /* linkage=_ZN12CFontAmalgam11GetFontNameEi */
	int GetCount(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam8GetCountEv */
	bool GetUnderlined(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam13GetUnderlinedEv */
	int GetFontSpans(class CFontAmalgam *, const uchar32  *, int, class CFontBase * *, class CUtlVector<SFontSpan, CUtlMemory<SFontSpan, int> > *, bool); /* linkage=_ZN12CFontAmalgam12GetFontSpansEPKwiPP9CFontBaseP10CUtlVectorI9SFontSpan10CUtlMemoryIS6_iEEb */
	void RemoveAll(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam9RemoveAllEv */
	/* <4b41fe> fontmanager/fontamalgam.cpp:250 */
	bool RequireFont(class CFontAmalgam *, int); /* linkage=_ZN12CFontAmalgam11RequireFontEi */
};

// <004D8BFF> fontmanager/fontamalgam.h:18
// member functions: 28
// member variables: 6
// class size: 56
class CFontAmalgam {
	/* fontmanager/fontamalgam.h:62 */
	struct SFontRange {
		uchar32 lowRange; /* 0 4 */
		uchar32 highRange; /* 4 4 */
		CFontBase * font; /* 8 8 */
		CUtlString deferredFontName; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fontamalgam.h:21 */
	void CFontAmalgam(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:22 */
	void ~CFontAmalgam(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:25 */
	void SetProps(CFontAmalgam* , int, int, int, int, int);
	/* fontmanager/fontamalgam.h:28 */
	void AddFont(CFontAmalgam* , CFontBase* , const char* , uchar32, uchar32);
	/* fontmanager/fontamalgam.h:31 */
	CFontBase* GetFontForChar(CFontAmalgam* , uchar32, bool);
	/* fontmanager/fontamalgam.h:34 */
	int GetFirstFontHeight(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:37 */
	int GetFirstFontMaxWidth(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:40 */
	int GetFlags(CFontAmalgam* , int);
	/* fontmanager/fontamalgam.h:43 */
	const char* GetFontName(CFontAmalgam* , int);
	/* fontmanager/fontamalgam.h:46 */
	int GetCount(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:49 */
	bool GetUnderlined(CFontAmalgam* );
	/* fontmanager/fontamalgam.h:56 */
	int GetFontSpans(CFontAmalgam* , const uchar32* , int, CFontBase** , CUtlVector<SFontSpan, CUtlMemory<SFontSpan, int> >* , bool);
	/* fontmanager/fontamalgam.h:59 */
	void RemoveAll(CFontAmalgam* );
private:
	CUtlVector<CFontAmalgam::SFontRange, CUtlMemory<CFontAmalgam::SFontRange, int> > m_Fonts; /* 0 32 */
	int m_propTall; /* 32 4 */
	int m_propWeight; /* 36 4 */
	int m_propBlur; /* 40 4 */
	int m_propScanlines; /* 44 4 */
	int m_propFlags; /* 48 4 */
	/* fontmanager/fontamalgam.h:78 */
	bool RequireFont(CFontAmalgam* , int);
	void CFontAmalgam(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgamC4Ev */
	void ~CFontAmalgam(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgamD4Ev */
	void SetProps(class CFontAmalgam *, int, int, int, int, int); /* linkage=_ZN12CFontAmalgam8SetPropsEiiiii */
	void AddFont(class CFontAmalgam *, class CFontBase *, const char  *, uchar32, uchar32); /* linkage=_ZN12CFontAmalgam7AddFontEP9CFontBasePKcww */
	class CFontBase * GetFontForChar(class CFontAmalgam *, uchar32, bool); /* linkage=_ZN12CFontAmalgam14GetFontForCharEwb */
	int GetFirstFontHeight(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam18GetFirstFontHeightEv */
	int GetFirstFontMaxWidth(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam20GetFirstFontMaxWidthEv */
	int GetFlags(class CFontAmalgam *, int); /* linkage=_ZN12CFontAmalgam8GetFlagsEi */
	const char  * GetFontName(class CFontAmalgam *, int); /* linkage=_ZN12CFontAmalgam11GetFontNameEi */
	int GetCount(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam8GetCountEv */
	bool GetUnderlined(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam13GetUnderlinedEv */
	int GetFontSpans(class CFontAmalgam *, const uchar32  *, int, class CFontBase * *, class CUtlVector<SFontSpan, CUtlMemory<SFontSpan, int> > *, bool); /* linkage=_ZN12CFontAmalgam12GetFontSpansEPKwiPP9CFontBaseP10CUtlVectorI9SFontSpan10CUtlMemoryIS6_iEEb */
	void RemoveAll(class CFontAmalgam *); /* linkage=_ZN12CFontAmalgam9RemoveAllEv */
	/* <4b41fe> fontmanager/fontamalgam.cpp:250 */
	bool RequireFont(class CFontAmalgam *, int); /* linkage=_ZN12CFontAmalgam11RequireFontEi */
};

// <004ECB09> fontmanager/fontamalgam.h:21
void CFontAmalgam::CFontAmalgam()
{
} /* size: 0 */

// <004ECA87> fontmanager/fontamalgam.h:22
void CFontAmalgam::~CFontAmalgam()
{
} /* size: 0 */

// <004B1CC1> fontmanager/fontamalgam.h:62
void SFontRange::SFontRange()
{
} /* size: 0 */

// <004B1CA5> fontmanager/fontamalgam.h:62
inline void SFontRange::SFontRange()
{
} /* size: 0 */

// <004B1C3E> fontmanager/fontamalgam.h:62
void SFontRange::~SFontRange()
{
} /* size: 0 */

// <004B1C22> fontmanager/fontamalgam.h:62
inline void SFontRange::~SFontRange()
{
} /* size: 0 */

