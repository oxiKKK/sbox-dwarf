
//
// rendersystem/sheetcache.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 13
//	classes: 3
//	structs: 2
//

// <00163C10> rendersystem/sheetcache.h:14
// member functions: 4
// member variables: 4
// class size: 32
class CTextureSequenceRecord_t {
	HRenderTexture m_hTexture; /* 0 8 */
	Vector2D m_vecUVCoord; /* 8 8 */
	int m_nSequenceCount; /* 16 4 */
	ConstantBufferHandle_t m_hConstantBuffer; /* 24 8 */
	/* rendersystem/sheetcache.h:22 */
	void CTextureSequenceRecord_t(CTextureSequenceRecord_t* );
	/* rendersystem/sheetcache.h:23 */
	void ~CTextureSequenceRecord_t(CTextureSequenceRecord_t* );
	void CTextureSequenceRecord_t(class CTextureSequenceRecord_t *); /* linkage=_ZN24CTextureSequenceRecord_tC4Ev */
	void ~CTextureSequenceRecord_t(class CTextureSequenceRecord_t *); /* linkage=_ZN24CTextureSequenceRecord_tD4Ev */
};

// <00163C9C> rendersystem/sheetcache.h:26
// member functions: 2
// member variable: 1
// struct size: 8
struct CTextureSequenceHashKey_t {
	ResourceId_t m_TextureId; /* 0 8 */
	/* rendersystem/sheetcache.h:30 */
	uint32 HashValue(const CTextureSequenceHashKey_t* );
	/* rendersystem/sheetcache.h:35 */
	bool operator==(const CTextureSequenceHashKey_t* , const CTextureSequenceHashKey_t& );
};

// <002A8633> rendersystem/sheetcache.h:30
inline void CTextureSequenceHashKey_t::HashValue()
{
} /* size: 0 */

// <002A860E> rendersystem/sheetcache.h:35
inline void CTextureSequenceHashKey_t::operator==(const CTextureSequenceHashKey_t& other)
{
} /* size: 0 */

// <002A159B> rendersystem/sheetcache.h:44
// variables: 3
// function calls: 20
void CSheetDataTextureCache::~CSheetDataTextureCache()
{
	CThreadMutex::~CThreadMutex(); // 44
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 44
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 3226
			CThreadSpinRWLock::AssignIf(
				const union LockInfo_t& newValue,
				const union LockInfo_t& comparand);  // 3257
			CThreadSpinRWLock::TryLockForWrite(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 3307
			ThreadPause(void); // 3309
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
			{
				HashFixedData_t* pElement; // 689
				CTextureSequenceRecord_t::~CTextureSequenceRecord_t(); // 1526
				Destruct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory); // 691
			}
		}
	}
	RemoveAll(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 668
	RemoveAll(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 352
	Purge(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 343
	~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this); // 344
	~CUtlTSHashBase(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 803
	~CUtlTSHash(const CUtlTSHash<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenceHas this); // 44
} /* size: 341, inline expansions: 10 (1344 bytes) */

// <002A157F> rendersystem/sheetcache.h:44
inline void CSheetDataTextureCache::~CSheetDataTextureCache()
{
} /* size: 0 */

// <001644B3> rendersystem/sheetcache.h:44
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
	/* rendersystem/sheetcache.h:58 */
	void CSheetDataTextureCache(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:68 */
	bool GetSequenceTextureData(CSheetDataTextureCache* , HRenderTexture, HRenderTexture* , Vector2D* , int* );
	/* rendersystem/sheetcache.h:72 */
	ConstantBufferHandle_t GetSequenceTextureDataConstantBuffer(CSheetDataTextureCache* , HRenderTexture);
	/* rendersystem/sheetcache.h:75 */
	void AllocateAndUploadSequenceData(CSheetDataTextureCache* , const Sheet_t* , Vector2D* , int* );
	/* rendersystem/sheetcache.h:77 */
	void Commit(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:82 */
	bool OnRenderEnd(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:84 */
	void FlushAllSheetData(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:86 */
	void RemoveAll(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:93 */
	void InitTexture(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:95 */
	void Shutdown(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:97 */
	HRenderTexture GetTexture(const CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:102 */
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

// <0029E724> rendersystem/sheetcache.h:44
// member functions: 26
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
	/* rendersystem/sheetcache.h:58 */
	void CSheetDataTextureCache(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:68 */
	bool GetSequenceTextureData(CSheetDataTextureCache* , HRenderTexture, HRenderTexture* , Vector2D* , int* );
	/* rendersystem/sheetcache.h:72 */
	ConstantBufferHandle_t GetSequenceTextureDataConstantBuffer(CSheetDataTextureCache* , HRenderTexture);
	/* rendersystem/sheetcache.h:75 */
	void AllocateAndUploadSequenceData(CSheetDataTextureCache* , const Sheet_t* , Vector2D* , int* );
	/* rendersystem/sheetcache.h:77 */
	void Commit(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:82 */
	bool OnRenderEnd(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:84 */
	void FlushAllSheetData(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:86 */
	void RemoveAll(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:93 */
	void InitTexture(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:95 */
	void Shutdown(CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:97 */
	HRenderTexture GetTexture(const CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:102 */
	void GetSheetCacheTextureSize(CSheetDataTextureCache* , int& , int& );
	CThreadMutex m_AllocateMutex; /* 6272 72 */
	int m_nSheetCacheTextureWidth; /* 6344 4 */
	int m_nSheetCacheTextureHeight; /* 6348 4 */
	void ~CSheetDataTextureCache(CSheetDataTextureCache* );
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

// <002A85C2> rendersystem/sheetcache.h:58
void CSheetDataTextureCache::CSheetDataTextureCache()
{
} /* size: 0 */

// <002A85A9> rendersystem/sheetcache.h:58
inline void CSheetDataTextureCache::CSheetDataTextureCache()
{
} /* size: 0 */

// <002A8590> rendersystem/sheetcache.h:77
inline void CSheetDataTextureCache::Commit()
{
} /* size: 0 */

// <002A8577> rendersystem/sheetcache.h:86
inline void CSheetDataTextureCache::RemoveAll()
{
} /* size: 0 */

// <001A6A8D> rendersystem/sheetcache.h:97
inline void CSheetDataTextureCache::GetTexture()
{
} /* size: 0 */

// <002A03C9> rendersystem/sheetcache.h:111
// member functions: 5
// member variables: 3
// vtable entry: 1
// struct size: 24
class CSheetHashConstructor : public ITSHashConstructor<CTextureSequenceRecord_t> {
public:
	/* class ITSHashConstructor<CTextureSequenceRecord_t> <ancestor>; */ /* 0 8 */
	void ~CSheetHashConstructor(CSheetHashConstructor* );
	void CSheetHashConstructor(CSheetHashConstructor* , CSheetHashConstructor& );
	void CSheetHashConstructor(CSheetHashConstructor* , const CSheetHashConstructor& );
private:
	const class Sheet_t * m_pSheet; /* 8 8 */
	CSheetDataTextureCache * m_pCache; /* 16 8 */
	/* rendersystem/sheetcache.h:117 */
	void CSheetHashConstructor(CSheetHashConstructor* , const Sheet_t* , CSheetDataTextureCache* );
	/* rendersystem/sheetcache.h:123 */
	virtual void Construct(CSheetHashConstructor* , CTextureSequenceRecord_t* );
};

// <002A8523> rendersystem/sheetcache.h:117
void CSheetHashConstructor::CSheetHashConstructor(const Sheet_t* pSheet, CSheetDataTextureCache* pCache)
{
} /* size: 0 */

// <002A84F2> rendersystem/sheetcache.h:117
inline void CSheetHashConstructor::CSheetHashConstructor(const Sheet_t* pSheet, CSheetDataTextureCache* pCache)
{
} /* size: 0 */

// <002A95EE> rendersystem/sheetcache.h:123
// function calls: 9
void CSheetHashConstructor::Construct(CTextureSequenceRecord_t* pElement)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 24
	Vector2D::Vector2D(); // 24
	CTextureSequenceRecord_t::CTextureSequenceRecord_t(); // 1479
	Construct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory); // 125
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 127
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 127
} /* size: 0, inline expansions: 9 (0 bytes) */

// <002A84CD> rendersystem/sheetcache.h:123
inline void CSheetHashConstructor::Construct(CTextureSequenceRecord_t* pElement)
{
} /* size: 0 */

