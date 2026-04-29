
//
// fontmanager/fontmanager.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 13
//	class: 1
//

// <004DF425> fontmanager/fontmanager.h:28
// member functions: 107
// member variables: 11
// vtable entries: 35
// class size: 4,768
class CFontManager : public CTier2AppSystem<IFontManager, 0> {
	/* fontmanager/fontmanager.h:118 */
	struct CustomFontInfo_t {
		UtlSymId_t nameSym; /* 0 2 */
		UtlSymId_t fileSym; /* 2 2 */
		int nMinChar; /* 4 4 */
		int nMaxChar; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fontmanager.h:139 */
	class CFontAttributes {
	private:
		char m_szName[64]; /* 0 64 */
		int m_tall; /* 64 4 */
		int m_weight; /* 68 4 */
		int m_blur; /* 72 4 */
		int m_scanlines; /* 76 4 */
		int m_flags; /* 80 4 */
		bool m_haveDescs; /* 84 1 */
		/* fontmanager/fontmanager.h:149 */
		void Set(CFontAttributes* , const char* , int, int, int, int, int, bool);
		/* fontmanager/fontmanager.h:161 */
		void CFontAttributes(CFontAttributes* );
		/* fontmanager/fontmanager.h:166 */
		void CFontAttributes(CFontAttributes* , const char* , int, int, int, int, int, bool);
		/* fontmanager/fontmanager.h:171 */
		bool LessFunc(const CFontAttributes& , const CFontAttributes& );
		/* fontmanager/fontmanager.h:172 */
		bool operator<(const CFontAttributes* , const CFontAttributes& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fontmanager.h:178 */
	class CFontInfo {
		/* fontmanager/fontmanager.h:181 */
		void CFontInfo(CFontInfo* );
		/* fontmanager/fontmanager.h:185 */
		void CFontInfo(CFontInfo* , CFontBase* , CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* );
		CFontBase * m_font; /* 0 8 */
		CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> > m_descs; /* 8 32 */
		void CFontInfo(CFontInfo* , const CFontInfo& );
		void ~CFontInfo(CFontInfo* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fontmanager.h:216 */
	class CFontDataFile {
		void * m_pData; /* 0 8 */
		int m_nDataBytes; /* 8 4 */
	};
public:
	/* class CTier2AppSystem<IFontManager, 0> <ancestor>; */ /* 0 48 */
	void CFontManager(CFontManager* , const CFontManager& );
	/* fontmanager/fontmanager.cpp:208 */
	virtual InitReturnVal_t Init(CFontManager* );
	/* fontmanager/fontmanager.cpp:234 */
	virtual void Shutdown(CFontManager* );
	/* fontmanager/fontmanager.cpp:191 */
	virtual const AppSystemInfo_t* GetDependencies(CFontManager* );
	/* fontmanager/fontmanager.cpp:147 */
	void CFontManager(CFontManager* , ITextureDictionary* );
	/* fontmanager/fontmanager.cpp:176 */
	virtual void ~CFontManager(CFontManager* );
	/* fontmanager/fontmanager.cpp:730 */
	virtual FontHandle_t CreateFont(CFontManager* );
	/* fontmanager/fontmanager.cpp:370 */
	virtual void ClearAllFonts(CFontManager* );
	/* fontmanager/fontmanager.cpp:199 */
	virtual void SetLanguage(CFontManager* , const char* );
	/* fontmanager/fontmanager.cpp:246 */
	virtual const char* GetLanguage(CFontManager* );
	/* fontmanager/fontmanager.cpp:255 */
	virtual bool AddCustomFontFile(CFontManager* , const char* , const char* , int, int, const char* );
	/* fontmanager/fontmanager.cpp:453 */
	virtual FontAliasList_t* FindFontAliasList(CFontManager* , CUtlStringToken);
	/* fontmanager/fontmanager.cpp:481 */
	virtual void RemoveFontAliasList(CFontManager* , const char* );
	/* fontmanager/fontmanager.cpp:472 */
	virtual const CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >& GetFontAliases(CFontManager* , const char* );
	/* fontmanager/fontmanager.cpp:503 */
	virtual FontAlias_t* CreateFontAlias(CFontManager* , const char* , const char* , bool);
	/* fontmanager/fontmanager.cpp:514 */
	virtual FontHandle_t GetFont(CFontManager* , const char* , const char* , bool);
	/* fontmanager/fontmanager.cpp:548 */
	virtual FontHandle_t LoadFont(CFontManager* , const char* , const char* , int, int, bool, int, int, int, int, int, const char* );
	/* fontmanager/fontmanager.cpp:563 */
	virtual FontHandle_t FindFont(CFontManager* , const char* , bool, const char* );
	/* fontmanager/fontmanager.cpp:577 */
	virtual FontHandle_t FindOrLoadFont(CFontManager* , const char* , const char* , int, int, bool, int, int, int, int, int, const char* );
	/* fontmanager/fontmanager.cpp:597 */
	virtual const char* GetTrueFontName(CFontManager* , const FontAlias_t& );
	/* fontmanager/fontmanager.cpp:605 */
	virtual bool GetFontRange(CFontManager* , const char* , int& , int& , const char* );
	/* fontmanager/fontmanager.cpp:632 */
	virtual void SetFontRange(CFontManager* , const char* , int, int, const char* );
	/* fontmanager/fontmanager.cpp:744 */
	virtual bool SetFontGlyphSet(CFontManager* , FontHandle_t, const char* , int, int, int, int, int, int, int);
	/* fontmanager/fontmanager.cpp:901 */
	virtual const char* GetFontName(CFontManager* , FontHandle_t);
	/* fontmanager/fontmanager.cpp:939 */
	virtual int GetFontTall(CFontManager* , FontHandle_t);
	/* fontmanager/fontmanager.cpp:974 */
	virtual int GetCharacterWidth(CFontManager* , FontHandle_t, uchar32);
	/* fontmanager/fontmanager.cpp:1101 */
	virtual void GetKernedCharWidth(CFontManager* , FontHandle_t, uchar32, uchar32, uchar32, float& , float& , float& );
	/* fontmanager/fontmanager.cpp:920 */
	virtual void GetCharABCwide(CFontManager* , FontHandle_t, uchar32, int& , int& , int& );
	/* fontmanager/fontmanager.cpp:988 */
	virtual void GetTextSize(CFontManager* , FontHandle_t, const uchar32* , int& , int& );
	/* fontmanager/fontmanager.cpp:1171 */
	virtual HRenderTexture GetTextureHandle(CFontManager* , int);
	/* fontmanager/fontmanager.cpp:948 */
	virtual int GetFontAscent(CFontManager* , FontHandle_t, uchar32);
	/* fontmanager/fontmanager.cpp:1095 */
	virtual bool GetFontUnderlined(CFontManager* , FontHandle_t);
	/* fontmanager/fontmanager.cpp:965 */
	virtual bool IsFontAdditive(CFontManager* , FontHandle_t);
	/* fontmanager/fontmanager.cpp:1133 */
	virtual void PrecacheFontCharacters(CFontManager* , FontHandle_t, const uchar32* );
	/* fontmanager/fontmanager.cpp:1156 */
	virtual void ClearFontTextureCache(CFontManager* );
	/* fontmanager/fontmanager.cpp:1164 */
	virtual bool GetTextureForChar(CFontManager* , FontHandle_t, FontDrawType_t, uchar32, int* , float** );
	/* fontmanager/fontmanager.cpp:1087 */
	virtual void ClearTemporaryFontCache(CFontManager* );
	/* fontmanager/fontmanager.cpp:696 */
	virtual void SpewFonts(CFontManager* , const char* , float);
	/* fontmanager/fontmanager.cpp:705 */
	void SpewAllFonts(CFontManager* , float);
	/* fontmanager/fontmanager.cpp:911 */
	CFontBase* GetFontForChar(CFontManager* , FontHandle_t, uchar32);
private:
	/* fontmanager/fontmanager.cpp:431 */
	FontAliasList_t* CreateOrFindFontAliasList(CFontManager* , const char* );
	/* fontmanager/fontmanager.cpp:401 */
	FontAlias_t* AddFontAlias(CFontManager* , const char* , const char* , const char* , FontHandle_t, bool, int, int);
	/* fontmanager/fontmanager.cpp:820 */
	CPlatformFont* CreateOrFindPlatformFont(CFontManager* , const char* , int, int, int, int, int, CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* );
	/* fontmanager/fontmanager.cpp:1072 */
	const char* GetFallbackFontName(CFontManager* , const char* );
	/* fontmanager/fontmanager.cpp:659 */
	void SpewFontAliasList(CFontManager* , FontAliasList_t* , float, bool);
	/* fontmanager/fontmanager.cpp:1179 */
	int FindOrAddFontDataFile(CFontManager* , const char* , bool, void** , int* );
	/* fontmanager/fontmanager.cpp:1237 */
	CustomFontInfo_t* FindCustomFont(CFontManager* , const char* );
	/* fontmanager/fontmanager.cpp:1257 */
	bool FindCustomFontData(CFontManager* , const char* , void** , int* , CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* , bool* );
	CUtlVector<CFontAmalgam, CUtlMemory<CFontAmalgam, int> > m_FontAmalgams; /* 48 32 */
	CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (*)(const CFontManager::CFontAttributes&, const CFontManager::CFontAttributes&)> m_PlatformFonts; /* 80 48* /
	CUtlSymbolTable m_FontDataSymbols; /* 128 144 */
	CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (*)(short unsigned int const&, short unsigned int const&)> m_FontDataFiles; /* 272 48* /
	CUtlVector<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> > m_CustomFonts; /* 320 32 */
	char m_szLanguage[64]; /* 352 64 */
	CFontTextureCache m_FontTextureCache; /* 416 4240 */
	CUtlVector<FontAliasList_t*, CUtlMemory<FontAliasList_t*, int> > m_pFontAliasLists; /* 4656 32 */
	CThreadMutex m_FontTextureCacheMutex; /* 4688 72 */
	bool m_bAlwaysFindFont; /* 4760 1 */
	void CFontManager(class CFontManager *, const class CFontManager  &); /* linkage=_ZN12CFontManagerC4ERKS_ */
	virtual enum InitReturnVal_t Init(class CFontManager *); /* linkage=_ZN12CFontManager4InitEv */
	virtual void Shutdown(class CFontManager *); /* linkage=_ZN12CFontManager8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CFontManager *); /* linkage=_ZN12CFontManager15GetDependenciesEv */
	void CFontManager(class CFontManager *, class ITextureDictionary *); /* linkage=_ZN12CFontManagerC4EP18ITextureDictionary */
	virtual void ~CFontManager(class CFontManager *); /* linkage=_ZN12CFontManagerD4Ev */
	/* <50b67f> fontmanager/fontmanager.cpp:730 */
	virtual FontHandle_t CreateFont(class CFontManager *); /* linkage=_ZN12CFontManager10CreateFontEv */
	virtual void ClearAllFonts(class CFontManager *); /* linkage=_ZN12CFontManager13ClearAllFontsEv */
	virtual void SetLanguage(class CFontManager *, const char  *); /* linkage=_ZN12CFontManager11SetLanguageEPKc */
	virtual const char  * GetLanguage(class CFontManager *); /* linkage=_ZN12CFontManager11GetLanguageEv */
	virtual bool AddCustomFontFile(class CFontManager *, const char  *, const char  *, int, int, const char  *); /* linkage=_ZN12CFontManager17AddCustomFontFileEPKcS1_iiS1_ */
	/* <50a4c0> fontmanager/fontmanager.cpp:453 */
	virtual class FontAliasList_t * FindFontAliasList(class CFontManager *, class CUtlStringToken); /* linkage=_ZN12CFontManager17FindFontAliasListE15CUtlStringToken */
	virtual void RemoveFontAliasList(class CFontManager *, const char  *); /* linkage=_ZN12CFontManager19RemoveFontAliasListEPKc */
	virtual const class CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >  & GetFontAliases(class CFontManager *, const char  *); /* linkage=_ZN12CFontManager14GetFontAliasesEPKc */
	virtual class FontAlias_t * CreateFontAlias(class CFontManager *, const char  *, const char  *, bool); /* linkage=_ZN12CFontManager15CreateFontAliasEPKcS1_b */
	virtual FontHandle_t GetFont(class CFontManager *, const char  *, const char  *, bool); /* linkage=_ZN12CFontManager7GetFontEPKcS1_b */
	virtual FontHandle_t LoadFont(class CFontManager *, const char  *, const char  *, int, int, bool, int, int, int, int, int, const char  *); /* linkage=_ZN12CFontManager8LoadFontEPKcS1_iibiiiiiS1_ */
	/* <50b5da> fontmanager/fontmanager.cpp:563 */
	virtual FontHandle_t FindFont(class CFontManager *, const char  *, bool, const char  *); /* linkage=_ZN12CFontManager8FindFontEPKcbS1_ */
	virtual FontHandle_t FindOrLoadFont(class CFontManager *, const char  *, const char  *, int, int, bool, int, int, int, int, int, const char  *); /* linkage=_ZN12CFontManager14FindOrLoadFontEPKcS1_iibiiiiiS1_ */
	virtual const char  * GetTrueFontName(class CFontManager *, const class FontAlias_t  &); /* linkage=_ZN12CFontManager15GetTrueFontNameERK11FontAlias_t */
	virtual bool GetFontRange(class CFontManager *, const char  *, int &, int &, const char  *); /* linkage=_ZN12CFontManager12GetFontRangeEPKcRiS2_S1_ */
	virtual void SetFontRange(class CFontManager *, const char  *, int, int, const char  *); /* linkage=_ZN12CFontManager12SetFontRangeEPKciiS1_ */
	virtual bool SetFontGlyphSet(class CFontManager *, FontHandle_t, const char  *, int, int, int, int, int, int, int); /* linkage=_ZN12CFontManager15SetFontGlyphSetEjPKciiiiiii */
	/* <50a79c> fontmanager/fontmanager.cpp:901 */
	virtual const char  * GetFontName(class CFontManager *, FontHandle_t); /* linkage=_ZN12CFontManager11GetFontNameEj */
	/* <50a896> fontmanager/fontmanager.cpp:939 */
	virtual int GetFontTall(class CFontManager *, FontHandle_t); /* linkage=_ZN12CFontManager11GetFontTallEj */
	/* <50a999> fontmanager/fontmanager.cpp:974 */
	virtual int GetCharacterWidth(class CFontManager *, FontHandle_t, uchar32); /* linkage=_ZN12CFontManager17GetCharacterWidthEjw */
	virtual void GetKernedCharWidth(class CFontManager *, FontHandle_t, uchar32, uchar32, uchar32, float &, float &, float &); /* linkage=_ZN12CFontManager18GetKernedCharWidthEjwwwRfS0_S0_ */
	virtual void GetCharABCwide(class CFontManager *, FontHandle_t, uchar32, int &, int &, int &); /* linkage=_ZN12CFontManager14GetCharABCwideEjwRiS0_S0_ */
	/* <50ac2a> fontmanager/fontmanager.cpp:988 */
	virtual void GetTextSize(class CFontManager *, FontHandle_t, const uchar32  *, int &, int &); /* linkage=_ZN12CFontManager11GetTextSizeEjPKwRiS2_ */
	virtual HRenderTexture GetTextureHandle(class CFontManager *, int); /* linkage=_ZN12CFontManager16GetTextureHandleEi */
	virtual int GetFontAscent(class CFontManager *, FontHandle_t, uchar32); /* linkage=_ZN12CFontManager13GetFontAscentEjw */
	virtual bool GetFontUnderlined(class CFontManager *, FontHandle_t); /* linkage=_ZN12CFontManager17GetFontUnderlinedEj */
	virtual bool IsFontAdditive(class CFontManager *, FontHandle_t); /* linkage=_ZN12CFontManager14IsFontAdditiveEj */
	virtual void PrecacheFontCharacters(class CFontManager *, FontHandle_t, const uchar32  *); /* linkage=_ZN12CFontManager22PrecacheFontCharactersEjPKw */
	virtual void ClearFontTextureCache(class CFontManager *); /* linkage=_ZN12CFontManager21ClearFontTextureCacheEv */
	virtual bool GetTextureForChar(class CFontManager *, FontHandle_t, enum FontDrawType_t, uchar32, int *, float * *); /* linkage=_ZN12CFontManager17GetTextureForCharEj14FontDrawType_twPiPPf */
	virtual void ClearTemporaryFontCache(class CFontManager *); /* linkage=_ZN12CFontManager23ClearTemporaryFontCacheEv */
	virtual void SpewFonts(class CFontManager *, const char  *, float); /* linkage=_ZN12CFontManager9SpewFontsEPKcf */
	/* <50b271> fontmanager/fontmanager.cpp:705 */
	void SpewAllFonts(class CFontManager *, float); /* linkage=_ZN12CFontManager12SpewAllFontsEf */
	class CFontBase * GetFontForChar(class CFontManager *, FontHandle_t, uchar32); /* linkage=_ZN12CFontManager14GetFontForCharEjw */
	class FontAliasList_t * CreateOrFindFontAliasList(class CFontManager *, const char  *); /* linkage=_ZN12CFontManager25CreateOrFindFontAliasListEPKc */
	class FontAlias_t * AddFontAlias(class CFontManager *, const char  *, const char  *, const char  *, FontHandle_t, bool, int, int); /* linkage=_ZN12CFontManager12AddFontAliasEPKcS1_S1_jbii */
	class CPlatformFont * CreateOrFindPlatformFont(class CFontManager *, const char  *, int, int, int, int, int, class CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> > *); /* linkage=_ZN12CFontManager24CreateOrFindPlatformFontEPKciiiiiP10CUtlVectorI16SFontDescription10CUtlMemoryIS3_iEE */
	/* <50b36b> fontmanager/fontmanager.cpp:1072 */
	const char  * GetFallbackFontName(class CFontManager *, const char  *); /* linkage=_ZN12CFontManager19GetFallbackFontNameEPKc */
	void SpewFontAliasList(class CFontManager *, class FontAliasList_t *, float, bool); /* linkage=_ZN12CFontManager17SpewFontAliasListEP15FontAliasList_tfb */
	int FindOrAddFontDataFile(class CFontManager *, const char  *, bool, void * *, int *); /* linkage=_ZN12CFontManager21FindOrAddFontDataFileEPKcbPPvPi */
	/* <50b3ca> fontmanager/fontmanager.cpp:1237 */
	class CustomFontInfo_t * FindCustomFont(class CFontManager *, const char  *); /* linkage=_ZN12CFontManager14FindCustomFontEPKc */
	bool FindCustomFontData(class CFontManager *, const char  *, void * *, int *, class CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> > *, bool *); /* linkage=_ZN12CFontManager18FindCustomFontDataEPKcPPvPiP10CUtlVectorI16SFontDescription10CUtlMemoryIS6_iEEPb */
};

// <00509729> fontmanager/fontmanager.h:149
inline void CFontAttributes::Set(const char* pstrName, int tall, int weight, int blur, int scanlines, int flags, bool haveDescs)
{
} /* size: 0 */

// <00509712> fontmanager/fontmanager.h:161
void CFontAttributes::CFontAttributes()
{
} /* size: 0 */

// <005096F9> fontmanager/fontmanager.h:161
inline void CFontAttributes::CFontAttributes()
{
} /* size: 0 */

// <005096BF> fontmanager/fontmanager.h:166
void CFontAttributes::CFontAttributes(const char* pstrName, int tall, int weight, int blur, int scanlines, int flags, bool haveDescs)
{
} /* size: 0 */

// <00509652> fontmanager/fontmanager.h:166
inline void CFontAttributes::CFontAttributes(const char* pstrName, int tall, int weight, int blur, int scanlines, int flags, bool haveDescs)
{
} /* size: 0 */

// <004FE89B> fontmanager/fontmanager.h:178
void CFontInfo::~CFontInfo()
{
} /* size: 0 */

// <004FE87F> fontmanager/fontmanager.h:178
inline void CFontInfo::~CFontInfo()
{
} /* size: 0 */

// <004F71FD> fontmanager/fontmanager.h:178
void CFontInfo::CFontInfo(const CFontInfo &)
{
} /* size: 0 */

// <004F71DC> fontmanager/fontmanager.h:178
inline void CFontInfo::CFontInfo(const CFontInfo &)
{
} /* size: 0 */

// <00509607> fontmanager/fontmanager.h:181
void CFontInfo::CFontInfo()
{
} /* size: 0 */

// <005095EE> fontmanager/fontmanager.h:181
inline void CFontInfo::CFontInfo()
{
} /* size: 0 */

// <005095CD> fontmanager/fontmanager.h:185
void CFontInfo::CFontInfo(CFontBase* font, CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* descs)
{
} /* size: 0 */

// <0050959C> fontmanager/fontmanager.h:185
inline void CFontInfo::CFontInfo(CFontBase* font, CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* descs)
{
} /* size: 0 */

