
//
// fontmanager/fonttexturecache.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 18
//

// <0053B50F> fontmanager/fonttexturecache.cpp:24
// function calls: 29
void CFontTextureCache::CFontTextureCache(ITextureDictionary* pTextureDictionary)
{
	CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Grow(
		int num);  // 247
	CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Grow(
		int num);  // 181
	CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Init(
		int nGrowSize,
		int nInitSize);  // 126
	CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 59
	CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
	CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::ResetDbgInfo()(const CFontTextureCache::CacheEntry_t&, co this); // 491
	CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 470
	CUtlBlockRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::CUtlBlockRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 24
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::Init(
		int nGrowSize,
		int nInitSize);  // 126
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<CFontTextureCache::Page_t, int>::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 24
	ResetDbgInfo(const CUtlRBTree<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CFon this); // 491
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, short uns this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, short uns this,
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, sho this); // 489
	CUtlRBTree(const CUtlRBTree<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CFon this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<unsigned int, CFontTextureCache::Page_t, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 24
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 28
	CUtlString::CUtlString(); // 24
} /* size: 239, inline expansions: 29 (504 bytes) */

// <0053B4E7> fontmanager/fonttexturecache.cpp:24
void CFontTextureCache::CFontTextureCache(ITextureDictionary* pTextureDictionary)
{
} /* size: 0 */

// <0053AEA9> fontmanager/fonttexturecache.cpp:35
// variables: 3
// function calls: 29
void CFontTextureCache::~CFontTextureCache()
{
	CUtlString::~CUtlString(); // 38
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, sho this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, short uns this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, short uns this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, sho this); // 1288
	Purge(const CUtlRBTree<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CFon this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, short uns this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int>, short uns this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CFon this); // 47
	CUtlMap<unsigned int, CFontTextureCache::Page_t, short unsigned int, bool (::~CUtlMap()(unsigned int const&, unsigned int con this); // 38
	{
		int i; // 1721
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
				int i);  // 191
		{
		}
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::Element(
			int i);  // 1723
	}
	CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::Purge(); // 354
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::Purge(); // 1799
	CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::Purge(); // 560
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::Purge(); // 132
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::~CUtlBlockMemory(); // 562
	CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<CFontTextureCache::Page_t, int>::~CUtlBlockVector(); // 38
	{
		int i; // 359
	}
	CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Purge(); // 354
	CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::Purge()(const CFontTextureCache::CacheEntry_t&, co this); // 509
	CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::~CUtlRBTree()(const CFontTextureCache::CacheEntry_t&, co this); // 465
	CUtlBlockRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::~CUtlBlockRBTree()(const CFontTextureCache::CacheEntry_t this); // 38
} /* size: 0, inline expansions: 25 (1417 bytes) */

// <0053AE8D> fontmanager/fonttexturecache.cpp:35
void CFontTextureCache::~CFontTextureCache()
{
} /* size: 0 */

// <0053AE4B> fontmanager/fonttexturecache.cpp:42
void CFontTextureCache::InstallFontManager(CFontManager* pFontManagerImp)
{
} /* size: 8 */

// <0053ADAD> fontmanager/fonttexturecache.cpp:50
// function call: 1
void CFontTextureCache::SetPrefix(const char* pTexturePagePrefix)
{
	CUtlString::operator=(
			const char* src);  // 52
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0053A2EF> fontmanager/fonttexturecache.cpp:59
// variables: 5
// function calls: 39
void CFontTextureCache::Clear()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_61; // 61
	{
		int i; // 66
		{
			int j; // 68
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
					int i);  // 70
		}
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::Count(); // 66
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
				int i);  // 73
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
				int i);  // 191
		{
		}
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
				int i);  // 193
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
				int i);  // 75
	}
	{
		int i; // 85
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 61
	{
		int i; // 1721
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
				int i);  // 191
		{
		}
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::Element(
			int i);  // 1723
	}
	CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::RemoveAll(); // 78
	CUtlMap<unsigned int, CFontTextureCache::Page_t, short unsigned int, bool (::RemoveAll()(unsigned int const&, unsigned int con this); // 82
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	Count(const CUtlRBTree<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int, CUtlMap<unsigned int this); // 1636
	{
	}
	SetLessFunc(const CUtlRBTree<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CFon this,
			const LessFunc_t& func);  // 1634
	SetLessFunc(const CUtlRBTree<CUtlMap<unsigned int, CFontTextureCache::Page_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CFon this,
			const LessFunc_t& func);  // 201
	CUtlMap<unsigned int, CFontTextureCache::Page_t, short unsigned int, bool (::SetLessFunc(
			LessFunc_t func);  // 83
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 90
} /* size: 0, variables: 1, inline expansions: 17 (619 bytes) */

// <0053A287> fontmanager/fonttexturecache.cpp:95
// variables: 2
void CacheEntryLessFunc(const CacheEntry_t& lhs, const CacheEntry_t& rhs)
{
	uint64 lhsLookupID; // 97
	uint64 rhsLookupID; // 98
} /* size: 37, variables: 2 */

// <0053A1B3> fontmanager/fonttexturecache.cpp:106
void CFontTextureCache::GetTextureForChar(FontHandle_t font, FontDrawType_t type, uchar32 uniChar, int* textureID, float** texCoords)
{
} /* size: 28 */

// <00539DBC> fontmanager/fonttexturecache.cpp:116
// variables: 7
// function calls: 8
void CFontTextureCache::IsCharCached(FontHandle_t hFont, FontDrawType_t type, uchar32 uniChar)
{
	int typePage; // 123
	const char   __FUNCTION__; // 17036
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
	}
	{
		CommonChar_t* pCommonChars; // 130
		{
			float* pCacheCoords; // 133
		}
	}
	{
		CacheEntry_t cacheItemTest; // 140
		HCacheEntry cacheHandleTest; // 143
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
				short unsigned int i);  // 661
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
				int i);  // 201
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
				short unsigned int i);  // 609
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
				short unsigned int i);  // 667
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::IsValidIndex(
				short unsigned int i);  // 144
	}
} /* size: 0, variables: 2 */

// <0053C64C> fontmanager/fonttexturecache.cpp:151
// variables: 4
// function calls: 9
void CFontTextureCache::IsCharCachedInternal(FontHandle_t hFont, FontDrawType_t type, uchar32 uniChar)
{
	{
		CommonChar_t* pCommonChars; // 155
		{
			float* pCacheCoords; // 158
		}
	}
	{
		CacheEntry_t cacheItemTest; // 165
		HCacheEntry cacheHandleTest; // 168
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
				short unsigned int i);  // 661
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
				int i);  // 201
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
				short unsigned int i);  // 609
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
				short unsigned int i);  // 667
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::IsValidIndex(
				short unsigned int i);  // 169
	}
	CFontTextureCache::IsCharCachedInternal(
				FontHandle_t hFont,
				FontDrawType_t type,
				uchar32 uniChar);  // 151
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00539D42> fontmanager/fonttexturecache.cpp:151
// variables: 4
void CFontTextureCache::IsCharCachedInternal(FontHandle_t hFont, FontDrawType_t type, uchar32 uniChar)
{
	{
		CommonChar_t* pCommonChars; // 155
		{
			float* pCacheCoords; // 158
		}
	}
	{
		CacheEntry_t cacheItemTest; // 165
		HCacheEntry cacheHandleTest; // 168
	}
} /* size: 0 */

// <00539552> fontmanager/fonttexturecache.cpp:176
// variables: 13
// function calls: 21
void CFontTextureCache::IsCharCached(FontHandle_t hFont, FontDrawType_t type, uchar32 uniChar, int* textureID, float** texCoords)
{
	const char   __FUNCTION__; // 17036
	int typePage; // 185
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 188
	}
	{
		CommonChar_t* pCommonChars; // 192
		{
			float* pCacheCoords; // 195
			{
				int nCachePage; // 198
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
						int i);  // 191
				{
				}
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
						int i);  // 201
			}
		}
	}
	{
		CacheEntry_t cacheItemTest; // 209
		HCacheEntry cacheHandleTest; // 212
		{
			int nCachePage; // 215
			float* pCacheCoords; // 216
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 219
			}
			CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::Count(); // 218
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
					int i);  // 222
		}
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
				short unsigned int i);  // 661
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
				int i);  // 201
		CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
				short unsigned int i);  // 609
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
				short unsigned int i);  // 667
		CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::IsValidIndex(
				short unsigned int i);  // 213
	}
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 186
} /* size: 0, variables: 2, inline expansions: 1 (21 bytes) */

// <00536A3D> fontmanager/fonttexturecache.cpp:235
// variables: 37
// function calls: 152
void CFontTextureCache::GetTextureForChars(FontHandle_t hFont, FontDrawType_t type, uchar32* pChars, int* textureID, float** texCoords, int numChars)
{
	const char   __FUNCTION__; // 17057
	int typePage; // 248
	CPlatformFont* pWinFont; // 251
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
	{
		int i; // 264
		{
			uchar32 uniChar; // 266
			bool bCharChached; // 268
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_274; // 274
				int* pCachePage; // 281
				float* pCacheCoords; // 282
				{
					CommonChar_t* pCommonChars; // 289
					memset(void* __dest,
						int __ch,
						size_t __len);  // 301
				}
				{
					CacheEntry_t cacheItem; // 311
					HCacheEntry cacheHandle; // 314
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
					}
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
							short unsigned int i);  // 661
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxAfter(
							short unsigned int i,
							const Iterator_t& it);  // 664
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
							int i);  // 201
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 611
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
							short unsigned int i);  // 609
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
							short unsigned int i);  // 667
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::IsValidIndex(
							short unsigned int i);  // 315
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
							short unsigned int i);  // 191
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 192
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
							int i);  // 193
					{
					}
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 539
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::Element(
						short unsigned int i);  // 1669
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
							short unsigned int i);  // 199
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 200
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
							int i);  // 201
					{
					}
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 617
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::RightChild(
							short unsigned int i);  // 615
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::RightChild(
							short unsigned int i);  // 1677
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
							short unsigned int i);  // 191
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 192
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
							int i);  // 193
					{
					}
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 539
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::Element(
						short unsigned int i);  // 1665
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
							short unsigned int i);  // 199
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 200
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
							int i);  // 201
					{
					}
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 611
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
							short unsigned int i);  // 609
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
							short unsigned int i);  // 1667
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::FindInsertionPosition(
								const CacheEntry_t& insert,
								bool bCheckForDuplicates,
								short unsigned int& parent,
								bool& leftchild,
								bool& isDuplicate);  // 1693
					{
						short unsigned int newNode; // 1709
						CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::InsertAt(
							short unsigned int parent,
							bool leftchild,
							const CacheEntry_t* pCopyFrom);  // 1709
						{
						}
					}
					{
						short unsigned int newNode; // 1696
						CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::InsertAt(
							short unsigned int parent,
							bool leftchild,
							const CacheEntry_t* pCopyFrom);  // 1696
					}
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::Insert(
						const CacheEntry_t& insert,
						ERBTreeInsertBehavior eInsertBehavior);  // 329
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
							short unsigned int i);  // 661
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxAfter(
							short unsigned int i,
							const Iterator_t& it);  // 664
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
							int i);  // 201
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 611
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
							short unsigned int i);  // 609
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
							short unsigned int i);  // 667
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::IsValidIndex(
							short unsigned int i);  // 330
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 192
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
							int i);  // 193
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
							short unsigned int i);  // 191
					{
					}
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 539
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::Element(
						short unsigned int i);  // 551
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::operator[](
							short unsigned int i);  // 332
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
							short unsigned int i);  // 191
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
							int i);  // 192
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
							int i);  // 193
					{
					}
					CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 539
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::Element(
						short unsigned int i);  // 551
					CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::operator[](
							short unsigned int i);  // 333
				}
				{
					int a; // 343
					int b; // 343
					int c; // 343
					int fontWide; // 345
					int fontTall; // 346
					int page; // 353
					int drawX; // 353
					int drawY; // 353
					int twide; // 353
					int ttall; // 353
					newChar_t newCharData; // 360
					newPageEntry_t newPageEntryData; // 361
					int newCharTexels; // 368
					int nByteCount; // 412
					CUtlVectorFixedGrowable<unsigned char, 2048> rgbaBuffer; // 414
					unsigned char* pRGBA; // 416
					{
						char* pMissString; // 382
						char* pString; // 383
						CFmtStr fmtMem; // 397
						const char* pMsg; // 398
						V_isprint(char c); // 386
						CBufferString::InitMinConstruct(
								bool bGrowable);  // 712
						CBufferString::CBufferString(); // 591
						CBufferStringN<256>::CBufferStringN(); // 29
						CFmtStrN<256>::CFmtStrN(); // 397
						CUtlString::Get(); // 99
						CUtlString::String(); // 42
						CFontBase::GetName(); // 398
						CBufferString::~CBufferString(); // 587
						CBufferStringN<256>::~CBufferStringN(); // 41
						CFmtStrN<256>::~CFmtStrN(); // 402
					}
					Max<int>(const int& val1,
						const int& val2);  // 345
					CFontBase::GetHeight(); // 346
					Max<int>(const int& val1,
						const int& val2);  // 346
					CFontBase::GetUnderlined(); // 347
					CFontTextureCache::AllocatePageForChar(
								int charWide,
								int charTall,
								int& pageIndex,
								int& drawX,
								int& drawY,
								int& twide,
								int& ttall);  // 354
					ConVar::GetInt(); // 351
					ConVar::GetBool(); // 380
					CUtlMemory<unsigned char, int>::CUtlMemory(
							unsigned char* pMemory,
							int numElements,
							bool bGrowable,
							uint32 nGrowable_GrowSize);  // 197
					CUtlMemory<unsigned char, int>::EnsureCapacity(
							int num);  // 199
					CUtlMemoryFixedGrowable_Base<unsigned char, int>::CUtlMemoryFixedGrowable_Base(
									unsigned char* pFixedMemory,
									int nFixedElements,
									int nGrowSize,
									int nInitAllocationCount);  // 228
					AlignedByteArrayExplicit_t<2048, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
					AlignedByteArray_t<2048, unsigned char>::AlignedByteArray_t(); // 228
					AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base(); // 231
					CUtlMemoryFixedGrowable<unsigned char, 2048, int>::CUtlMemoryFixedGrowable(
								int nGrowSize,
								int nInitSize);  // 527
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 484
					CUtlVectorFixedGrowable<unsigned char, 2048>::CUtlVectorFixedGrowable(
								int growSize);  // 414
					CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
					CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
					CUtlMemory<unsigned char, int>::Grow(
						int num);  // 806
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::RemoveMultipleFromTail(
								int num);  // 1323
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::SetCount(
						int count);  // 415
					memset(void* __dest,
						int __ch,
						size_t __len);  // 51
					V_memset(void* dest,
						int fill,
						int count);  // 419
					CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
							int i);  // 191
					CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
							int i);  // 192
					CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
							int i);  // 193
					{
					}
					CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
							int i);  // 446
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::RemoveAll(); // 1798
					CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 577
					CUtlMemory<unsigned char, int>::ConvertToExternalMemory(
								unsigned char* pMemory,
								int numElements,
								int nCopyElements,
								bool bSetGrowable,
								uint32 nGrowable_GrowSize);  // 207
					CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
								unsigned char* pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 203
					CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
								unsigned char* pFixedMemory,
								int nFixedElements,
								int nPurgeToCount);  // 237
					AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base(); // 237
					CUtlMemoryFixedGrowable<unsigned char, 2048, int>::Purge(
						int numElements);  // 1799
					CUtlMemory<unsigned char, int>::Base(); // 112
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 368
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 1800
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Purge(); // 560
					ValidateAlignment<unsigned char>(void); // 508
					CUtlMemory<unsigned char, int>::Purge(); // 903
					CUtlMemory<unsigned char, int>::Purge(); // 510
					CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
					CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
					CUtlMemoryFixedGrowable<unsigned char, 2048, int>::~CUtlMemoryFixedGrowable(); // 562
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::~CUtlVectorBase(); // 478
					CUtlVectorFixedGrowable<unsigned char, 2048>::~CUtlVectorFixedGrowable(); // 447
					CUtlMemory<unsigned char, int>::Base(); // 112
					CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 416
				}
				ThreadInterlockedAssignIf64(volatile int64* pDest,
								int64 value,
								int64 comparand);  // 800
				CThreadFastMutex::TryLockInline(
						const char* pFileName,
						int nLineNumber,
						const ThreadId_t  threadId);  // 837
				ThreadPause(void); // 839
				CThreadFastMutex::Lock(
					const char* pFileName,
					int nLineNumber,
					unsigned int nSpinSleepTime);  // 943
				Lock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
						const CThreadFastMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 274
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
						int i);  // 450
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 452
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 452
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 452
			}
		}
	}
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 249
} /* size: 0, variables: 3, inline expansions: 1 (39 bytes) */

// <0053D83F> fontmanager/fonttexturecache.cpp:462
// variables: 5
void CFontTextureCache::AllocatePageForChar(int charWide, int charTall, int& pageIndex, int& drawX, int& drawY, int& twide, int& ttall)
{
	bool bNeedsNewPage; // 471
	int nodeIndex; // 472
	Rect_t glpyhRect; // 473
	Page_t& page; // 540
	const TreeEntry_t& newEntry; // 542
} /* size: 0, variables: 5 */

// <0053C994> fontmanager/fonttexturecache.cpp:462
// variables: 13
// function calls: 53
void CFontTextureCache::AllocatePageForChar(int charWide, int charTall, int& pageIndex, int& drawX, int& drawY, int& twide, int& ttall)
{
	bool bNeedsNewPage; // 471
	int nodeIndex; // 472
	Rect_t glpyhRect; // 473
	Page_t& page; // 540
	const TreeEntry_t& newEntry; // 542
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
			int i);  // 482
	{
		Page_t& newPage; // 490
		char pTextureName; // 504
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::NumElementsInBlock(); // 227
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::NumAllocated(); // 1143
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::Element(
			int i);  // 1148
		Page_t::Page_t(); // 1479
		Construct<CFontTextureCache::Page_t>(Page_t* pMemory); // 1148
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::Grow(
			int num);  // 247
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::AddToTail(); // 489
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
				int i);  // 490
		{
			int i; // 493
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 495
		}
		{
		}
		CUtlString::Get(); // 99
		CUtlString::String(); // 505
		{
			int nByteCount; // 511
			CUtlMemory<unsigned char, int> mRGBA; // 512
			int typePageNonAdditive; // 524
			int typePageAdditive; // 533
			CUtlMemory<unsigned char, int>::EnsureCapacity(
					int num);  // 513
			CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned char, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 512
			{
				int i; // 518
			}
			CUtlString::Get(); // 141
			CFontTextureCache::GetPrefix(); // 525
			CUtlString::Get(); // 141
			CFontTextureCache::GetPrefix(); // 534
			ValidateAlignment<unsigned char>(void); // 508
			CUtlMemory<unsigned char, int>::Purge(); // 903
			CUtlMemory<unsigned char, int>::Purge(); // 510
			CUtlMemory<unsigned char, int>::~CUtlMemory(); // 536
		}
	}
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<CFontTextureCache::Page_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontTextureCache::Page_t, CUtlBlockMemory<CFontTextureCache::Page_t, int> >::operator[](
			int i);  // 540
	{
	}
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 191
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
			int i);  // 39
	CTexturePacker::GetEntry(
		int i);  // 542
} /* size: 0, variables: 5, inline expansions: 15 (698 bytes) */

// <005368B7> fontmanager/fonttexturecache.cpp:462
// variables: 17
void CFontTextureCache::AllocatePageForChar(int charWide, int charTall, int& pageIndex, int& drawX, int& drawY, int& twide, int& ttall)
{
	bool bNeedsNewPage; // 471
	int nodeIndex; // 472
	Rect_t glpyhRect; // 473
	const char   __FUNCTION__; // 17078
	Page_t& page; // 540
	const TreeEntry_t& newEntry; // 542
	{
		Page_t& newPage; // 490
		int nFontPageId; // 503
		char pTextureName; // 504
		{
			int i; // 493
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 500
		}
		{
			int nByteCount; // 511
			CUtlMemory<unsigned char, int> mRGBA; // 512
			int typePageNonAdditive; // 524
			int typePageAdditive; // 533
			{
				int i; // 518
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 541
	}
} /* size: 0, variables: 6 */

// <00536472> fontmanager/fonttexturecache.cpp:552
// variables: 9
// function calls: 10
void CFontTextureCache::CacheChars(FontHandle_t hFont, FontDrawType_t type, const uchar32* pChars, int nNumChars)
{
	uchar32* pCharsToCache; // 559
	int nCharsToCache; // 560
	int* pDummyTexIds; // 575
	float** pDummyTexCoords; // 576
	{
		int i; // 562
		{
			CommonChar_t* pCommonChars; // 155
			{
				float* pCacheCoords; // 158
			}
		}
		{
			CacheEntry_t cacheItemTest; // 165
			HCacheEntry cacheHandleTest; // 168
			CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxValid(
					short unsigned int i);  // 661
			CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::IsIdxAfter(
					short unsigned int i,
					const Iterator_t& it);  // 664
			CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::MinorIndex(
					int i);  // 201
			CUtlBlockMemory<UtlRBTreeNode_t<CFontTextureCache::CacheEntry_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 611
			CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
					short unsigned int i);  // 609
			CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::LeftChild(
					short unsigned int i);  // 667
			CUtlRBTree<CFontTextureCache::CacheEntry_t, short unsigned int, bool (::IsValidIndex(
					short unsigned int i);  // 169
		}
		CFontTextureCache::IsCharCachedInternal(
					FontHandle_t hFont,
					FontDrawType_t type,
					uchar32 uniChar);  // 151
		CFontTextureCache::IsCharCachedInternal(
					FontHandle_t hFont,
					FontDrawType_t type,
					uchar32 uniChar);  // 564
	}
} /* size: 720, variables: 4 */

