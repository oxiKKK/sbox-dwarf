
//
// public/materialsystem2/ifontmanager.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 8
//	class: 1
//	structs: 3
//

// <004D70A2> ../public/materialsystem2/ifontmanager.h:17
// member variables: 2
// struct size: 8
struct FontRange_t {
	int _min; /* 0 4 */
	int _max; /* 4 4 */
};

// <004F7469> ../public/materialsystem2/ifontmanager.h:23
void FontAlias_t::FontAlias_t()
{
} /* size: 0 */

// <004F744D> ../public/materialsystem2/ifontmanager.h:23
inline void FontAlias_t::FontAlias_t()
{
} /* size: 0 */

// <004D70CE> ../public/materialsystem2/ifontmanager.h:23
// member function: 1
// member variables: 8
// struct size: 32
struct FontAlias_t {
	CUtlSymbolLarge m_FontName; /* 0 8 */
	CUtlSymbolLarge m_TrueFontName; /* 8 8 */
	FontRange_t m_FontRange; /* 16 8 */
	FontHandle_t m_Font:15; /* 24: 0 4 */
	uint32 m_bProportional:1; /* 24:15 4 */
	uint32 m_bGetFontUsed:1; /* 24:16 4 */
	uint32 m_bLoadFontUsed:1; /* 24:17 4 */
	uint32 m_bUnused:14; /* 24:18 4 */
	void FontAlias_t(FontAlias_t* );
};

// <005073D9> ../public/materialsystem2/ifontmanager.h:37
void FontAliasList_t::FontAliasList_t()
{
} /* size: 0 */

// <005073BD> ../public/materialsystem2/ifontmanager.h:37
inline void FontAliasList_t::FontAliasList_t()
{
} /* size: 0 */

// <005065EC> ../public/materialsystem2/ifontmanager.h:37
void FontAliasList_t::~FontAliasList_t()
{
} /* size: 0 */

// <005065D0> ../public/materialsystem2/ifontmanager.h:37
inline void FontAliasList_t::~FontAliasList_t()
{
} /* size: 0 */

// <004D88AD> ../public/materialsystem2/ifontmanager.h:37
// member functions: 2
// member variables: 3
// struct size: 48
struct FontAliasList_t {
	CUtlString m_pTag; /* 0 8 */
	CUtlStringToken m_nTagToken; /* 8 4 */
	CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> > m_FontAliases; /* 16 32 */
	void ~FontAliasList_t(FontAliasList_t* );
	void FontAliasList_t(FontAliasList_t* );
};

// <004F9FD2> ../public/materialsystem2/ifontmanager.h:44
void IFontManager::IFontManager()
{
} /* size: 0 */

// <004F9FB6> ../public/materialsystem2/ifontmanager.h:44
inline void IFontManager::IFontManager()
{
} /* size: 0 */

// <004BB0E6> ../public/materialsystem2/ifontmanager.h:44
// member functions: 82
// member variable: 1
// vtable entries: 32
// class size: 8
class IFontManager : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IFontManager(IFontManager* , IFontManager& );
	void IFontManager(IFontManager* , const IFontManager& );
	void IFontManager(IFontManager* );
	void ~IFontManager(IFontManager* );
	/* ../public/materialsystem2/ifontmanager.h:48 */
	virtual FontHandle_t CreateFont(IFontManager* );
	/* ../public/materialsystem2/ifontmanager.h:49 */
	virtual void ClearAllFonts(IFontManager* );
	/* ../public/materialsystem2/ifontmanager.h:51 */
	virtual void SetLanguage(IFontManager* , const char* );
	/* ../public/materialsystem2/ifontmanager.h:52 */
	virtual const char* GetLanguage(IFontManager* );
	/* ../public/materialsystem2/ifontmanager.h:54 */
	virtual bool AddCustomFontFile(IFontManager* , const char* , const char* , int, int, const char* );
	/* ../public/materialsystem2/ifontmanager.h:57 */
	virtual FontAliasList_t* FindFontAliasList(IFontManager* , CUtlStringToken);
	/* ../public/materialsystem2/ifontmanager.h:58 */
	virtual void RemoveFontAliasList(IFontManager* , const char* );
	/* ../public/materialsystem2/ifontmanager.h:59 */
	virtual const CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >& GetFontAliases(IFontManager* , const char* );
	/* ../public/materialsystem2/ifontmanager.h:60 */
	virtual FontAlias_t* CreateFontAlias(IFontManager* , const char* , const char* , bool);
	/* ../public/materialsystem2/ifontmanager.h:61 */
	virtual FontHandle_t GetFont(IFontManager* , const char* , const char* , bool);
	/* ../public/materialsystem2/ifontmanager.h:62 */
	virtual FontHandle_t LoadFont(IFontManager* , const char* , const char* , int, int, bool, int, int, int, int, int, const char* );
	/* ../public/materialsystem2/ifontmanager.h:66 */
	virtual FontHandle_t FindFont(IFontManager* , const char* , bool, const char* );
	/* ../public/materialsystem2/ifontmanager.h:69 */
	virtual FontHandle_t FindOrLoadFont(IFontManager* , const char* , const char* , int, int, bool, int, int, int, int, int, const char* );
	/* ../public/materialsystem2/ifontmanager.h:73 */
	virtual const char* GetTrueFontName(IFontManager* , const FontAlias_t& );
	/* ../public/materialsystem2/ifontmanager.h:74 */
	virtual bool GetFontRange(IFontManager* , const char* , int& , int& , const char* );
	/* ../public/materialsystem2/ifontmanager.h:75 */
	virtual void SetFontRange(IFontManager* , const char* , int, int, const char* );
	/* ../public/materialsystem2/ifontmanager.h:76 */
	virtual bool SetFontGlyphSet(IFontManager* , FontHandle_t, const char* , int, int, int, int, int, int, int);
	/* ../public/materialsystem2/ifontmanager.h:79 */
	virtual const char* GetFontName(IFontManager* , FontHandle_t);
	/* ../public/materialsystem2/ifontmanager.h:80 */
	virtual int GetFontTall(IFontManager* , FontHandle_t);
	/* ../public/materialsystem2/ifontmanager.h:81 */
	virtual int GetCharacterWidth(IFontManager* , FontHandle_t, uchar32);
	/* ../public/materialsystem2/ifontmanager.h:82 */
	virtual void GetKernedCharWidth(IFontManager* , FontHandle_t, uchar32, uchar32, uchar32, float& , float& , float& );
	/* ../public/materialsystem2/ifontmanager.h:83 */
	virtual void GetCharABCwide(IFontManager* , FontHandle_t, uchar32, int& , int& , int& );
	/* ../public/materialsystem2/ifontmanager.h:84 */
	virtual void GetTextSize(IFontManager* , FontHandle_t, const uchar32* , int& , int& );
	/* ../public/materialsystem2/ifontmanager.h:85 */
	void GetTextSize(IFontManager* , FontHandle_t, const char* , int& , int& );
	/* ../public/materialsystem2/ifontmanager.h:89 */
	void GetTextSize(IFontManager* , FontHandle_t, const uchar16* , int& , int& );
	/* ../public/materialsystem2/ifontmanager.h:93 */
	int GetTextWidth(IFontManager* , FontHandle_t, const char* );
	/* ../public/materialsystem2/ifontmanager.h:99 */
	int GetTextWidth(IFontManager* , FontHandle_t, const uchar16* );
	/* ../public/materialsystem2/ifontmanager.h:105 */
	int GetTextWidth(IFontManager* , FontHandle_t, const uchar32* );
	/* ../public/materialsystem2/ifontmanager.h:111 */
	virtual HRenderTexture GetTextureHandle(IFontManager* , int);
	/* ../public/materialsystem2/ifontmanager.h:112 */
	virtual int GetFontAscent(IFontManager* , FontHandle_t, uchar32);
	/* ../public/materialsystem2/ifontmanager.h:113 */
	virtual bool GetFontUnderlined(IFontManager* , FontHandle_t);
	/* ../public/materialsystem2/ifontmanager.h:114 */
	virtual bool IsFontAdditive(IFontManager* , FontHandle_t);
	/* ../public/materialsystem2/ifontmanager.h:117 */
	virtual void PrecacheFontCharacters(IFontManager* , FontHandle_t, const uchar32* );
	/* ../public/materialsystem2/ifontmanager.h:118 */
	virtual void ClearFontTextureCache(IFontManager* );
	/* ../public/materialsystem2/ifontmanager.h:119 */
	virtual bool GetTextureForChar(IFontManager* , FontHandle_t, FontDrawType_t, uchar32, int* , float** );
	/* ../public/materialsystem2/ifontmanager.h:120 */
	virtual void ClearTemporaryFontCache(IFontManager* );
	/* ../public/materialsystem2/ifontmanager.h:123 */
	virtual void SpewFonts(IFontManager* , const char* , float);
	void IFontManager(class IFontManager *, class IFontManager &); /* linkage=_ZN12IFontManagerC4EOS_ */
	void IFontManager(class IFontManager *, const class IFontManager  &); /* linkage=_ZN12IFontManagerC4ERKS_ */
	void IFontManager(class IFontManager *); /* linkage=_ZN12IFontManagerC4Ev */
	void ~IFontManager(class IFontManager *); /* linkage=_ZN12IFontManagerD4Ev */
	virtual FontHandle_t CreateFont(class IFontManager *); /* linkage=_ZN12IFontManager10CreateFontEv */
	virtual void ClearAllFonts(class IFontManager *); /* linkage=_ZN12IFontManager13ClearAllFontsEv */
	virtual void SetLanguage(class IFontManager *, const char  *); /* linkage=_ZN12IFontManager11SetLanguageEPKc */
	virtual const char  * GetLanguage(class IFontManager *); /* linkage=_ZN12IFontManager11GetLanguageEv */
	virtual bool AddCustomFontFile(class IFontManager *, const char  *, const char  *, int, int, const char  *); /* linkage=_ZN12IFontManager17AddCustomFontFileEPKcS1_iiS1_ */
	virtual class FontAliasList_t * FindFontAliasList(class IFontManager *, class CUtlStringToken); /* linkage=_ZN12IFontManager17FindFontAliasListE15CUtlStringToken */
	virtual void RemoveFontAliasList(class IFontManager *, const char  *); /* linkage=_ZN12IFontManager19RemoveFontAliasListEPKc */
	virtual const class CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >  & GetFontAliases(class IFontManager *, const char  *); /* linkage=_ZN12IFontManager14GetFontAliasesEPKc */
	virtual class FontAlias_t * CreateFontAlias(class IFontManager *, const char  *, const char  *, bool); /* linkage=_ZN12IFontManager15CreateFontAliasEPKcS1_b */
	virtual FontHandle_t GetFont(class IFontManager *, const char  *, const char  *, bool); /* linkage=_ZN12IFontManager7GetFontEPKcS1_b */
	virtual FontHandle_t LoadFont(class IFontManager *, const char  *, const char  *, int, int, bool, int, int, int, int, int, const char  *); /* linkage=_ZN12IFontManager8LoadFontEPKcS1_iibiiiiiS1_ */
	virtual FontHandle_t FindFont(class IFontManager *, const char  *, bool, const char  *); /* linkage=_ZN12IFontManager8FindFontEPKcbS1_ */
	virtual FontHandle_t FindOrLoadFont(class IFontManager *, const char  *, const char  *, int, int, bool, int, int, int, int, int, const char  *); /* linkage=_ZN12IFontManager14FindOrLoadFontEPKcS1_iibiiiiiS1_ */
	virtual const char  * GetTrueFontName(class IFontManager *, const class FontAlias_t  &); /* linkage=_ZN12IFontManager15GetTrueFontNameERK11FontAlias_t */
	virtual bool GetFontRange(class IFontManager *, const char  *, int &, int &, const char  *); /* linkage=_ZN12IFontManager12GetFontRangeEPKcRiS2_S1_ */
	virtual void SetFontRange(class IFontManager *, const char  *, int, int, const char  *); /* linkage=_ZN12IFontManager12SetFontRangeEPKciiS1_ */
	virtual bool SetFontGlyphSet(class IFontManager *, FontHandle_t, const char  *, int, int, int, int, int, int, int); /* linkage=_ZN12IFontManager15SetFontGlyphSetEjPKciiiiiii */
	virtual const char  * GetFontName(class IFontManager *, FontHandle_t); /* linkage=_ZN12IFontManager11GetFontNameEj */
	virtual int GetFontTall(class IFontManager *, FontHandle_t); /* linkage=_ZN12IFontManager11GetFontTallEj */
	virtual int GetCharacterWidth(class IFontManager *, FontHandle_t, uchar32); /* linkage=_ZN12IFontManager17GetCharacterWidthEjw */
	virtual void GetKernedCharWidth(class IFontManager *, FontHandle_t, uchar32, uchar32, uchar32, float &, float &, float &); /* linkage=_ZN12IFontManager18GetKernedCharWidthEjwwwRfS0_S0_ */
	virtual void GetCharABCwide(class IFontManager *, FontHandle_t, uchar32, int &, int &, int &); /* linkage=_ZN12IFontManager14GetCharABCwideEjwRiS0_S0_ */
	virtual void GetTextSize(class IFontManager *, FontHandle_t, const uchar32  *, int &, int &); /* linkage=_ZN12IFontManager11GetTextSizeEjPKwRiS2_ */
	void GetTextSize(class IFontManager *, FontHandle_t, const char  *, int &, int &); /* linkage=_ZN12IFontManager11GetTextSizeEjPKcRiS2_ */
	void GetTextSize(class IFontManager *, FontHandle_t, const uchar16  *, int &, int &); /* linkage=_ZN12IFontManager11GetTextSizeEjPKtRiS2_ */
	int GetTextWidth(class IFontManager *, FontHandle_t, const char  *); /* linkage=_ZN12IFontManager12GetTextWidthEjPKc */
	int GetTextWidth(class IFontManager *, FontHandle_t, const uchar16  *); /* linkage=_ZN12IFontManager12GetTextWidthEjPKt */
	int GetTextWidth(class IFontManager *, FontHandle_t, const uchar32  *); /* linkage=_ZN12IFontManager12GetTextWidthEjPKw */
	virtual HRenderTexture GetTextureHandle(class IFontManager *, int); /* linkage=_ZN12IFontManager16GetTextureHandleEi */
	virtual int GetFontAscent(class IFontManager *, FontHandle_t, uchar32); /* linkage=_ZN12IFontManager13GetFontAscentEjw */
	virtual bool GetFontUnderlined(class IFontManager *, FontHandle_t); /* linkage=_ZN12IFontManager17GetFontUnderlinedEj */
	virtual bool IsFontAdditive(class IFontManager *, FontHandle_t); /* linkage=_ZN12IFontManager14IsFontAdditiveEj */
	virtual void PrecacheFontCharacters(class IFontManager *, FontHandle_t, const uchar32  *); /* linkage=_ZN12IFontManager22PrecacheFontCharactersEjPKw */
	virtual void ClearFontTextureCache(class IFontManager *); /* linkage=_ZN12IFontManager21ClearFontTextureCacheEv */
	virtual bool GetTextureForChar(class IFontManager *, FontHandle_t, enum FontDrawType_t, uchar32, int *, float * *); /* linkage=_ZN12IFontManager17GetTextureForCharEj14FontDrawType_twPiPPf */
	virtual void ClearTemporaryFontCache(class IFontManager *); /* linkage=_ZN12IFontManager23ClearTemporaryFontCacheEv */
	virtual void SpewFonts(class IFontManager *, const char  *, float); /* linkage=_ZN12IFontManager9SpewFontsEPKcf */
};

