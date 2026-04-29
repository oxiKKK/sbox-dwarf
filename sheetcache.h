
//
// ./sheetcache.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	class: 1
//

// <008B9BB8> ./sheetcache.h:44
// member functions: 25
// member variables: 9
// class size: 6,352
class CSheetDataTextureCache {
private:
	CUtlTSHash<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenceHashKey_t> > m_sequenceHash __attribute__((__aligned__(16))); /* 0 6224 */
	HRenderTextureStrong m_hTexture; /* 6224 8 */
	int m_nCurrentScanLine; /* 6232 4 */
	bool m_bUses16BitFixedPoint; /* 6236 1 */
	bool m_bClearCacheNextFrame; /* 6237 1 */
	CTextureDesc m_TextureDesc; /* 6240 28 */
	/* ./sheetcache.h:58 */
	void CSheetDataTextureCache(CSheetDataTextureCache* );
	/* ./sheetcache.h:68 */
	bool GetSequenceTextureData(CSheetDataTextureCache* , HRenderTexture, HRenderTexture* , Vector2D* , int* );
	/* ./sheetcache.h:72 */
	ConstantBufferHandle_t GetSequenceTextureDataConstantBuffer(CSheetDataTextureCache* , HRenderTexture);
	/* ./sheetcache.h:75 */
	void AllocateAndUploadSequenceData(CSheetDataTextureCache* , const Sheet_t* , Vector2D* , int* );
	/* ./sheetcache.h:77 */
	void Commit(CSheetDataTextureCache* );
	/* ./sheetcache.h:82 */
	bool OnRenderEnd(CSheetDataTextureCache* );
	/* ./sheetcache.h:84 */
	void FlushAllSheetData(CSheetDataTextureCache* );
	/* ./sheetcache.h:86 */
	void RemoveAll(CSheetDataTextureCache* );
	/* ./sheetcache.h:93 */
	void InitTexture(CSheetDataTextureCache* );
	/* ./sheetcache.h:95 */
	void Shutdown(CSheetDataTextureCache* );
	/* ./sheetcache.h:97 */
	HRenderTexture GetTexture(const CSheetDataTextureCache* );
	/* ./sheetcache.h:102 */
	void GetSheetCacheTextureSize(CSheetDataTextureCache* , int& , int& );
	CThreadMutex m_AllocateMutex; /* 6272 72 */
	int m_nSheetCacheTextureWidth; /* 6344 4 */
	int m_nSheetCacheTextureHeight; /* 6348 4 */
	void CSheetDataTextureCache(class CSheetDataTextureCache *); /* linkage=_ZN22CSheetDataTextureCacheC4Ev */
	bool GetSequenceTextureData(class CSheetDataTextureCache *, HRenderTexture, HRenderTexture *, class Vector2D *, int *); /* linkage=_ZN22CSheetDataTextureCache22GetSequenceTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPS2_P8Vector2DPi */
	ConstantBufferHandle_t GetSequenceTextureDataConstantBuffer(class CSheetDataTextureCache *, HRenderTexture); /* linkage=_ZN22CSheetDataTextureCache36GetSequenceTextureDataConstantBufferE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void AllocateAndUploadSequenceData(class CSheetDataTextureCache *, const class Sheet_t  *, class Vector2D *, int *); /* linkage=_ZN22CSheetDataTextureCache29AllocateAndUploadSequenceDataEPK7Sheet_tP8Vector2DPi */
	void Commit(class CSheetDataTextureCache *); /* linkage=_ZN22CSheetDataTextureCache6CommitEv */
	bool OnRenderEnd(class CSheetDataTextureCache *); /* linkage=_ZN22CSheetDataTextureCache11OnRenderEndEv */
	/* <2a95c4> rendersystem/sheetcache.cpp:144 */
	void FlushAllSheetData(class CSheetDataTextureCache *); /* linkage=_ZN22CSheetDataTextureCache17FlushAllSheetDataEv */
	void RemoveAll(class CSheetDataTextureCache *); /* linkage=_ZN22CSheetDataTextureCache9RemoveAllEv */
	void InitTexture(class CSheetDataTextureCache *); /* linkage=_ZN22CSheetDataTextureCache11InitTextureEv */
	void Shutdown(class CSheetDataTextureCache *); /* linkage=_ZN22CSheetDataTextureCache8ShutdownEv */
	HRenderTexture GetTexture(const class CSheetDataTextureCache  *); /* linkage=_ZNK22CSheetDataTextureCache10GetTextureEv */
	void GetSheetCacheTextureSize(class CSheetDataTextureCache *, int &, int &); /* linkage=_ZN22CSheetDataTextureCache24GetSheetCacheTextureSizeERiS0_ */
	void ~CSheetDataTextureCache(class CSheetDataTextureCache *); /* linkage=_ZN22CSheetDataTextureCacheD4Ev */
} __attribute__((__aligned__(16)));

