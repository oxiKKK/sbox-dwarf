
//
// fontmanager/fonttexturecache.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 5
//	classes: 2
//	struct: 1
//

// <00523420> fontmanager/fonttexturecache.h:26
// member variables: 4
// struct size: 16
struct newChar_t {
	uchar32 uniChar; /* 0 4 */
	int fontWide; /* 4 4 */
	int fontTall; /* 8 4 */
	int offset; /* 12 4 */
};

// <004DA7CE> fontmanager/fonttexturecache.h:37
// member functions: 31
// member variables: 8
// class size: 4,240
class CFontTextureCache {
	/* fontmanager/fonttexturecache.h:69 */
	struct charDetail_t {
		int page; /* 0 4 */
		float texCoords[4]; /* 4 16 */
	};
	/* fontmanager/fonttexturecache.h:74 */
	struct CommonChar_t {
		charDetail_t details[256]; /* 0 5120 */
	};
	/* fontmanager/fonttexturecache.h:81 */
	struct CacheEntry_t {
		FontHandle_t font; /* 0 4 */
		uchar32 uniChar; /* 4 4 */
		short int pad; /* 8 2 */
		int page; /* 12 4 */
		float texCoords[4]; /* 16 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fonttexturecache.h:97 */
	struct Page_t {
		/* fontmanager/fonttexturecache.h:100 */
		void Page_t(Page_t* );
		int textureID[2]; /* 0 8 */
		CTexturePacker * pPackedFontTextureCache; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fonttexturecache.h:40 */
	void CFontTextureCache(CFontTextureCache* , ITextureDictionary* );
	/* fontmanager/fonttexturecache.h:41 */
	void ~CFontTextureCache(CFontTextureCache* );
	/* fontmanager/fonttexturecache.h:43 */
	void InstallFontManager(CFontTextureCache* , CFontManager* );
	/* fontmanager/fonttexturecache.h:46 */
	void SetPrefix(CFontTextureCache* , const char* );
	/* fontmanager/fonttexturecache.h:47 */
	const char* GetPrefix(const CFontTextureCache* );
	/* fontmanager/fonttexturecache.h:49 */
	bool IsCharCached(CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32);
	/* fontmanager/fonttexturecache.h:53 */
	bool GetTextureForChar(CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32, int* , float** );
	/* fontmanager/fonttexturecache.h:58 */
	bool GetTextureForChars(CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32* , int* , float** , int);
	/* fontmanager/fonttexturecache.h:61 */
	void CacheChars(CFontTextureCache* , FontHandle_t, FontDrawType_t, const uchar32* , int);
	/* fontmanager/fonttexturecache.h:64 */
	void Clear(CFontTextureCache* );
private:
	/* fontmanager/fonttexturecache.h:109 */
	bool IsCharCachedInternal(const CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32);
	/* fontmanager/fonttexturecache.h:111 */
	bool IsCharCached(CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32, int* , float** );
	/* fontmanager/fonttexturecache.h:114 */
	bool AllocatePageForChar(CFontTextureCache* , int, int, int& , int& , int& , int& , int& );
	CFontManager * m_pFontManagerImp; /* 0 8 */
	ITextureDictionary * m_pTextureDictionary; /* 8 8 */
	CommonChar_t * m_CommonCharCache[512]; /* 16 4096 */
	/* fontmanager/fonttexturecache.h:125 */
	bool CacheEntryLessFunc(const CacheEntry_t& , const CacheEntry_t& );
	CUtlBlockRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (*)(const CFontTextureCache::CacheEntry_t&, const CFontTextureCache::CacheEntry_t&)> m_CharCache; /* 4112 40* /
	/* fontmanager/fonttexturecache.h:129 */
	typedef struct CUtlBlockVector<CFontTextureCache::Page_t, int> FontPageList_t;
	FontPageList_t m_PageList; /* 4152 32 */
	int m_CurrPage; /* 4184 4 */
	CUtlMap<unsigned int, CFontTextureCache::Page_t, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_FontPages; /* 4192 40* /
	CUtlString m_TexturePagePrefix; /* 4232 8 */
	void CFontTextureCache(class CFontTextureCache *, class ITextureDictionary *); /* linkage=_ZN17CFontTextureCacheC4EP18ITextureDictionary */
	void ~CFontTextureCache(class CFontTextureCache *); /* linkage=_ZN17CFontTextureCacheD4Ev */
	void InstallFontManager(class CFontTextureCache *, class CFontManager *); /* linkage=_ZN17CFontTextureCache18InstallFontManagerEP12CFontManager */
	void SetPrefix(class CFontTextureCache *, const char  *); /* linkage=_ZN17CFontTextureCache9SetPrefixEPKc */
	const char  * GetPrefix(const class CFontTextureCache  *); /* linkage=_ZNK17CFontTextureCache9GetPrefixEv */
	bool IsCharCached(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, uchar32); /* linkage=_ZN17CFontTextureCache12IsCharCachedEj14FontDrawType_tw */
	bool GetTextureForChar(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, uchar32, int *, float * *); /* linkage=_ZN17CFontTextureCache17GetTextureForCharEj14FontDrawType_twPiPPf */
	bool GetTextureForChars(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, uchar32 *, int *, float * *, int); /* linkage=_ZN17CFontTextureCache18GetTextureForCharsEj14FontDrawType_tPwPiPPfi */
	void CacheChars(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, const uchar32  *, int); /* linkage=_ZN17CFontTextureCache10CacheCharsEj14FontDrawType_tPKwi */
	void Clear(class CFontTextureCache *); /* linkage=_ZN17CFontTextureCache5ClearEv */
	/* <53c64c> fontmanager/fonttexturecache.cpp:151 */
	bool IsCharCachedInternal(const class CFontTextureCache  *, FontHandle_t, enum FontDrawType_t, uchar32); /* linkage=_ZNK17CFontTextureCache20IsCharCachedInternalEj14FontDrawType_tw */
	bool IsCharCached(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, uchar32, int *, float * *); /* linkage=_ZN17CFontTextureCache12IsCharCachedEj14FontDrawType_twPiPPf */
	/* <53d83f> fontmanager/fonttexturecache.cpp:462 */
	bool AllocatePageForChar(class CFontTextureCache *, int, int, int &, int &, int &, int &, int &); /* linkage=_ZN17CFontTextureCache19AllocatePageForCharEiiRiS0_S0_S0_S0_ */
	bool CacheEntryLessFunc(const class CacheEntry_t  &, const class CacheEntry_t  &); /* linkage=_ZN17CFontTextureCache18CacheEntryLessFuncERKNS_12CacheEntry_tES2_ */
};

// <0052346A> fontmanager/fonttexturecache.h:37
// member functions: 31
// member variables: 8
// class size: 4,240
class CFontTextureCache {
	/* fontmanager/fonttexturecache.h:69 */
	struct charDetail_t {
		int page; /* 0 4 */
		float texCoords[4]; /* 4 16 */
	};
	/* fontmanager/fonttexturecache.h:74 */
	struct CommonChar_t {
		charDetail_t details[256]; /* 0 5120 */
	};
	/* fontmanager/fonttexturecache.h:81 */
	struct CacheEntry_t {
		FontHandle_t font; /* 0 4 */
		uchar32 uniChar; /* 4 4 */
		short int pad; /* 8 2 */
		int page; /* 12 4 */
		float texCoords[4]; /* 16 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fonttexturecache.h:97 */
	struct Page_t {
		/* fontmanager/fonttexturecache.h:100 */
		void Page_t(Page_t* );
		int textureID[2]; /* 0 8 */
		CTexturePacker * pPackedFontTextureCache; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* fontmanager/fonttexturecache.h:40 */
	void CFontTextureCache(CFontTextureCache* , ITextureDictionary* );
	/* fontmanager/fonttexturecache.h:41 */
	void ~CFontTextureCache(CFontTextureCache* );
	/* fontmanager/fonttexturecache.h:43 */
	void InstallFontManager(CFontTextureCache* , CFontManager* );
	/* fontmanager/fonttexturecache.h:46 */
	void SetPrefix(CFontTextureCache* , const char* );
	/* fontmanager/fonttexturecache.h:47 */
	const char* GetPrefix(const CFontTextureCache* );
	/* fontmanager/fonttexturecache.h:49 */
	bool IsCharCached(CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32);
	/* fontmanager/fonttexturecache.h:53 */
	bool GetTextureForChar(CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32, int* , float** );
	/* fontmanager/fonttexturecache.h:58 */
	bool GetTextureForChars(CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32* , int* , float** , int);
	/* fontmanager/fonttexturecache.h:61 */
	void CacheChars(CFontTextureCache* , FontHandle_t, FontDrawType_t, const uchar32* , int);
	/* fontmanager/fonttexturecache.h:64 */
	void Clear(CFontTextureCache* );
private:
	/* fontmanager/fonttexturecache.h:109 */
	bool IsCharCachedInternal(const CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32);
	/* fontmanager/fonttexturecache.h:111 */
	bool IsCharCached(CFontTextureCache* , FontHandle_t, FontDrawType_t, uchar32, int* , float** );
	/* fontmanager/fonttexturecache.h:114 */
	bool AllocatePageForChar(CFontTextureCache* , int, int, int& , int& , int& , int& , int& );
	CFontManager * m_pFontManagerImp; /* 0 8 */
	ITextureDictionary * m_pTextureDictionary; /* 8 8 */
	CommonChar_t * m_CommonCharCache[512]; /* 16 4096 */
	/* fontmanager/fonttexturecache.h:125 */
	bool CacheEntryLessFunc(const CacheEntry_t& , const CacheEntry_t& );
	CUtlBlockRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (*)(const CFontTextureCache::CacheEntry_t&, const CFontTextureCache::CacheEntry_t&)> m_CharCache; /* 4112 40* /
	/* fontmanager/fonttexturecache.h:129 */
	typedef struct CUtlBlockVector<CFontTextureCache::Page_t, int> FontPageList_t;
	FontPageList_t m_PageList; /* 4152 32 */
	int m_CurrPage; /* 4184 4 */
	CUtlMap<unsigned int, CFontTextureCache::Page_t, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_FontPages; /* 4192 40* /
	CUtlString m_TexturePagePrefix; /* 4232 8 */
	/* fontmanager/fonttexturecache.h:80 */
	typedef short unsigned int HCacheEntry;
	void CFontTextureCache(class CFontTextureCache *, class ITextureDictionary *); /* linkage=_ZN17CFontTextureCacheC4EP18ITextureDictionary */
	void ~CFontTextureCache(class CFontTextureCache *); /* linkage=_ZN17CFontTextureCacheD4Ev */
	void InstallFontManager(class CFontTextureCache *, class CFontManager *); /* linkage=_ZN17CFontTextureCache18InstallFontManagerEP12CFontManager */
	void SetPrefix(class CFontTextureCache *, const char  *); /* linkage=_ZN17CFontTextureCache9SetPrefixEPKc */
	const char  * GetPrefix(const class CFontTextureCache  *); /* linkage=_ZNK17CFontTextureCache9GetPrefixEv */
	bool IsCharCached(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, uchar32); /* linkage=_ZN17CFontTextureCache12IsCharCachedEj14FontDrawType_tw */
	bool GetTextureForChar(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, uchar32, int *, float * *); /* linkage=_ZN17CFontTextureCache17GetTextureForCharEj14FontDrawType_twPiPPf */
	bool GetTextureForChars(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, uchar32 *, int *, float * *, int); /* linkage=_ZN17CFontTextureCache18GetTextureForCharsEj14FontDrawType_tPwPiPPfi */
	void CacheChars(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, const uchar32  *, int); /* linkage=_ZN17CFontTextureCache10CacheCharsEj14FontDrawType_tPKwi */
	void Clear(class CFontTextureCache *); /* linkage=_ZN17CFontTextureCache5ClearEv */
	/* <53c64c> fontmanager/fonttexturecache.cpp:151 */
	bool IsCharCachedInternal(const class CFontTextureCache  *, FontHandle_t, enum FontDrawType_t, uchar32); /* linkage=_ZNK17CFontTextureCache20IsCharCachedInternalEj14FontDrawType_tw */
	bool IsCharCached(class CFontTextureCache *, FontHandle_t, enum FontDrawType_t, uchar32, int *, float * *); /* linkage=_ZN17CFontTextureCache12IsCharCachedEj14FontDrawType_twPiPPf */
	/* <53d83f> fontmanager/fonttexturecache.cpp:462 */
	bool AllocatePageForChar(class CFontTextureCache *, int, int, int &, int &, int &, int &, int &); /* linkage=_ZN17CFontTextureCache19AllocatePageForCharEiiRiS0_S0_S0_S0_ */
	bool CacheEntryLessFunc(const class CacheEntry_t  &, const class CacheEntry_t  &); /* linkage=_ZN17CFontTextureCache18CacheEntryLessFuncERKNS_12CacheEntry_tES2_ */
};

// <004ECCC2> fontmanager/fonttexturecache.h:40
void CFontTextureCache::CFontTextureCache(ITextureDictionary* pTextureDictionary)
{
} /* size: 0 */

// <004ECAED> fontmanager/fonttexturecache.h:41
void CFontTextureCache::~CFontTextureCache()
{
} /* size: 0 */

// <0053BD24> fontmanager/fonttexturecache.h:100
void Page_t::Page_t()
{
} /* size: 0 */

// <0053BD0B> fontmanager/fonttexturecache.h:100
inline void Page_t::Page_t()
{
} /* size: 0 */

// <0053BCEF> fontmanager/fonttexturecache.h:139
inline void CFontTextureCache::GetPrefix()
{
} /* size: 0 */

