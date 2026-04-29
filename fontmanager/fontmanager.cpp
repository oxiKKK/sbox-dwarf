
//
// fontmanager/fontmanager.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 64
//	struct: 1
//

// <005093C6> fontmanager/fontmanager.cpp:45
// variables: 2
// function call: 1
bool IsFakeUiFontPath(const char* pPath)
{
	const char* pEnd; // 47
	bool bDigits; // 48
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 78
} /* size: 134, variables: 2, inline expansions: 1 (17 bytes) */

// <0050937C> fontmanager/fontmanager.cpp:81
bool SymbolLessFunc(const UtlSymId_t& lhs, const UtlSymId_t& rhs)
{
} /* size: 14 */

// <0050930D> fontmanager/fontmanager.cpp:86
// variable: 1
void LessFunc(const CFontAttributes& lhs, const CFontAttributes& rhs)
{
	int nResult; // 118
} /* size: 138, variables: 1 */

// <00509252> fontmanager/fontmanager.cpp:128
// variables: 3
void GetMungedFontName(char& pBuf, const char* pFontName, const char* pTagname, bool bProportional)
{
	const char   __FUNCTION__; // 11953
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 130
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 131
	}
} /* size: 0, variables: 1 */

// <00509231> fontmanager/fontmanager.cpp:141
void* __CreateCFontManagerIFontManager_interface(void)
{
} /* size: 12 */

// <00508247> fontmanager/fontmanager.cpp:147
// function calls: 66
void CFontManager::CFontManager(ITextureDictionary* pTextureDictionary)
{
	IAppSystem::IAppSystem(); // 44
	IFontManager::IFontManager(); // 120
	CBaseAppSystem<IFontManager>::CBaseAppSystem(); // 171
	CTier0AppSystem<IFontManager, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IFontManager, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IFontManager, 0>::CTier2AppSystem(); // 151
	CUtlMemory<CFontAmalgam, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFontAmalgam, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CFontAmalgam, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 148
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this,
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 150
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int> this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int, this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int,  this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 151
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::CUtlVector(); // 151
	CUtlMemory<FontAliasList_t::ValidateGrowSize(); // 475
	CUtlMemory<FontAliasList_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<FontAliasList_t::ResetDbgInfo(); // 530
	CUtlVectorBase<FontAliasList_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<FontAliasList_t::CUtlVector(); // 151
	CThreadMutex::CThreadMutex(
			const char* pName);  // 151
	CUtlMemory<CFontAmalgam, int>::IsGrowable(); // 881
	CUtlMemory<CFontAmalgam, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CFontAmalgam, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::EnsureCapacity(
			int num);  // 156
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Element(
		int i);  // 1148
	Construct<CFontAmalgam>(CFontAmalgam* pMemory); // 1148
	CUtlMemory<CFontAmalgam, int>::Base(); // 112
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Base(); // 368
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::AddToTail(); // 157
	IsGrowable(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this); // 881
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this); // 888
	EnsureCapacity(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this,
			int num);  // 515
	EnsureCapacity(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this,
			int num);  // 82
	CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::EnsureCapacity(
			int num);  // 158
} /* size: 774, inline expansions: 66 (1466 bytes) */

// <00508222> fontmanager/fontmanager.cpp:147
void CFontManager::CFontManager(ITextureDictionary* pTextureDictionary)
{
} /* size: 0 */

// <0050757E> fontmanager/fontmanager.cpp:176
// variable: 1
// function calls: 64
void CFontManager::~CFontManager()
{
	CThreadMutex::~CThreadMutex(); // 179
	CUtlVectorBase<FontAliasList_t::RemoveAll(); // 1798
	CUtlMemory<FontAliasList_t::IsExternallyAllocated(); // 905
	CUtlMemory<FontAliasList_t::Purge(); // 903
	CUtlMemory<FontAliasList_t::Purge(); // 1799
	CUtlVectorBase<FontAliasList_t::Purge(); // 560
	ValidateAlignment<FontAliasList_t*>(void); // 508
	CUtlMemory<FontAliasList_t::Purge(); // 510
	CUtlMemory<FontAliasList_t::~CUtlMemory(); // 562
	CUtlVectorBase<FontAliasList_t::~CUtlVectorBase(); // 410
	CUtlVector<FontAliasList_t::~CUtlVector(); // 179
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::Purge(); // 903
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::Purge(); // 560
	ValidateAlignment<CFontManager::CustomFontInfo_t>(void); // 508
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::Purge(); // 510
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::~CUtlVector(); // 179
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int> this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int> this); // 1288
	Purge(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int, this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::~CUtlMemory(); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int, this); // 47
	CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::~CUtlMap()(short unsigned int const&, short unsigned in this); // 179
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this); // 1288
	Purge(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this); // 47
	CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::~CUtlMap()(const CFontManager::CFontAttributes&, this); // 179
	{
		int i; // 1721
		CUtlMemory<CFontAmalgam, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Element(
			int i);  // 1723
		Destruct<CFontAmalgam>(CFontAmalgam* pMemory); // 1723
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::RemoveAll(); // 1798
	CUtlMemory<CFontAmalgam, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFontAmalgam, int>::Purge(); // 903
	CUtlMemory<CFontAmalgam, int>::Purge(); // 1799
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Purge(); // 560
	ValidateAlignment<CFontAmalgam>(void); // 508
	CUtlMemory<CFontAmalgam, int>::Purge(); // 510
	CUtlMemory<CFontAmalgam, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::~CUtlVector(); // 179
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IFontManager, 0>::~CTier2AppSystem(); // 179
} /* size: 435, inline expansions: 61 (1418 bytes) */

// <00507516> fontmanager/fontmanager.cpp:176
void CFontManager::~CFontManager()
{
} /* size: 36 */

// <005074CF> fontmanager/fontmanager.cpp:191
void CFontManager::GetDependencies()
{
} /* size: 12 */

// <00507424> fontmanager/fontmanager.cpp:199
// function call: 1
void CFontManager::SetLanguage(const char* pLanguage)
{
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 201
} /* size: 21, inline expansions: 1 (10 bytes) */

// <00506D50> fontmanager/fontmanager.cpp:208
// variables: 2
// function calls: 25
void CFontManager::Init()
{
	InitReturnVal_t nRetVal; // 210
	FontAliasList_t* pNew; // 226
	CTier0AppSystem<IFontManager, 0>::Init(); // 71
	CTier2AppSystem<IFontManager, 0>::Init(); // 210
	CUtlString::operator=(
			const char* src);  // 227
	CUtlString::CUtlString(); // 37
	CUtlStringToken::CUtlStringToken(); // 37
	CUtlMemory<FontAlias_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<FontAlias_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >::CUtlVector(); // 37
	FontAliasList_t::FontAliasList_t(); // 226
	CUtlString::Get(); // 99
	CUtlString::String(); // 228
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 228
	CUtlMemory<FontAliasList_t::NumAllocated(); // 1196
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 602
	CUtlVectorBase<FontAliasList_t::Element(
		int i);  // 1201
	CopyConstruct<FontAliasList_t*>(FontAliasList_t** pMemory,
					FontAliasList_t* const& src);  // 1201
	CUtlMemory<FontAliasList_t::Base(); // 112
	CUtlVectorBase<FontAliasList_t::Base(); // 368
	CUtlVectorBase<FontAliasList_t::ResetDbgInfo(); // 824
	CUtlVectorBase<FontAliasList_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<FontAliasList_t::AddToTail(
			FontAliasList_t* const& src);  // 229
} /* size: 0, variables: 2, inline expansions: 25 (593 bytes) */

// <00506CAE> fontmanager/fontmanager.cpp:234
// function calls: 2
void CFontManager::Shutdown()
{
	CTier0AppSystem<IFontManager, 0>::Shutdown(); // 85
	CTier2AppSystem<IFontManager, 0>::Shutdown(); // 240
} /* size: 58, inline expansions: 2 (50 bytes) */

// <00506C80> fontmanager/fontmanager.cpp:246
void CFontManager::GetLanguage()
{
} /* size: 12 */

// <00506603> fontmanager/fontmanager.cpp:255
// variables: 8
// function calls: 18
void CFontManager::AddCustomFontFile(const char* fontName, const char* fontFileName, int nMinChar, int nMaxChar, const char* pTagName)
{
	CUtlSymbol nameSym; // 257
	bool bKeepData; // 298
	void* fontData; // 301
	int fontDataBytes; // 302
	int dataLoaded; // 303
	CustomFontInfo_t info; // 309
	{
		CustomFontInfo_t* pExistingInfo; // 273
		CUtlSymbol::IsValid(); // 1240
		{
			int i; // 1245
			CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::Count(); // 1245
			CUtlMemory<CFontManager::CustomFontInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::operator[](
					int i);  // 1247
		}
		CFontManager::FindCustomFont(
				const char* fontName);  // 273
		CUtlSymbol::operator==(
				UtlSymId_t id);  // 278
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 290
	}
	CUtlSymbol::CUtlSymbol(); // 257
	CUtlSymbol::operator UtlSymId_t(); // 311
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::NumAllocated(); // 1196
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::Element(
		int i);  // 1201
	CopyConstruct<CFontManager::CustomFontInfo_t>(CustomFontInfo_t* pMemory,
							const CustomFontInfo_t& src);  // 1201
	CUtlMemory<CFontManager::CustomFontInfo_t, int>::Base(); // 112
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::Base(); // 368
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::AddToTail(
			const CustomFontInfo_t& src);  // 355
} /* size: 622, variables: 6, inline expansions: 11 (225 bytes) */

// <00505CCE> fontmanager/fontmanager.cpp:370
// variables: 6
// function calls: 37
void CFontManager::ClearAllFonts()
{
	const char   __FUNCTION__; // 11850
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 372
	}
	{
		int i; // 373
		CUtlVectorBase<FontAliasList_t::Count(); // 373
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 375
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::RemoveAll(); // 1798
		CUtlMemory<FontAlias_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<FontAlias_t, int>::Purge(); // 903
		CUtlMemory<FontAlias_t, int>::Purge(); // 1799
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::Purge(); // 560
		ValidateAlignment<FontAlias_t>(void); // 508
		CUtlMemory<FontAlias_t, int>::Purge(); // 510
		CUtlMemory<FontAlias_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >::~CUtlVector(); // 37
		CUtlString::~CUtlString(); // 37
		FontAliasList_t::~FontAliasList_t(); // 375
	}
	{
		int i; // 380
		Count(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontMa this); // 177
		CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::Count()(const CFontManager::CFontAttrib this); // 380
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this,
				int i);  // 539
		Element(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this,
			int i);  // 92
		CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::operator[](
				IndexType_t i);  // 382
	}
	{
		int i; // 386
		NumAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int> this); // 594
		MaxElement(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned this); // 187
		CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::MaxElement()(short unsigned int const&, short unsig this); // 386
		IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>  this,
				int i,
				const Iterator_t& it);  // 664
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>  this,
				int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned this,
				int i);  // 667
		IsValidIndex(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned this,
				int i);  // 659
		IsValidIndex(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned this,
				int i);  // 190
		CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::IsValidIndex(
				IndexType_t i);  // 386
	}
	CUtlVectorBase<FontAliasList_t::RemoveAll(); // 377
	CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::RemoveAll()(const CFontManager::CFontAttributes&, this); // 384
	CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::RemoveAll()(short unsigned int const&, short unsigned in this); // 390
	CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::RemoveAll(); // 391
	{
		int i; // 1721
		CUtlMemory<CFontAmalgam, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Element(
			int i);  // 1723
		Destruct<CFontAmalgam>(CFontAmalgam* pMemory); // 1723
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::RemoveAll(); // 393
} /* size: 0, variables: 1, inline expansions: 5 (110 bytes) */

// <005030D6> fontmanager/fontmanager.cpp:401
// variables: 8
// function calls: 169
void CFontManager::AddFontAlias(const char* pFontName, const char* pTag, const char* pTrueFontName, FontHandle_t hFont, bool bProportional, int nRangeMin, int nRangeMax)
{
	FontAliasList_t* pList; // 407
	const char   __FUNCTION__; // 11823
	int nIndex; // 410
	FontAlias_t* pAlias; // 411
	char mungeBuffer; // 413
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 408
	}
	CUtlMemory<FontAlias_t, int>::NumAllocated(); // 1143
	CUtlMemory<FontAlias_t, int>::Base(); // 112
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::Base(); // 368
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<FontAlias_t, int>::IsGrowable(); // 823
	CUtlMemory<FontAlias_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<FontAlias_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<FontAlias_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<FontAlias_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::Element(
		int i);  // 1148
	CUtlSymbolLarge::CUtlSymbolLarge(); // 23
	CUtlSymbolLarge::CUtlSymbolLarge(); // 23
	FontAlias_t::FontAlias_t(); // 1479
	Construct<FontAlias_t>(FontAlias_t* pMemory); // 1148
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::AddToTail(); // 410
	CUtlMemory<FontAlias_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
			int i);  // 411
	{
	}
	GetMungedFontName(char& pBuf,
				const char* pFontName,
				const char* pTagname,
				bool bProportional);  // 414
	V_strlen(const char* str); // 68
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::SymbolFromID(
			uint nId);  // 312
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindInternal(
			const char* pString,
			int nStringLen);  // 267
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::CAutoLockT(
			CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 278
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddString(
			const char* pString);  // 415
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 415
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::SymbolFromID(
			uint nId);  // 312
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindInternal(
			const char* pString,
			int nStringLen);  // 267
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::CAutoLockT(
			CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 278
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
	V_strlen(const char* str); // 68
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddString(
			const char* pString);  // 416
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 416
} /* size: 0, variables: 5, inline expansions: 145 (8929 bytes) */

// <005027A0> fontmanager/fontmanager.cpp:431
// variables: 4
// function calls: 32
void CFontManager::CreateOrFindFontAliasList(const char* pTagName)
{
	FontAliasList_t* pNew; // 433
	const char   __FUNCTION__; // 12154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 436
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 433
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 588
	CUtlVectorBase<FontAliasList_t::operator[](
			int i);  // 457
	{
		int i; // 460
		CUtlVectorBase<FontAliasList_t::Count(); // 460
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 462
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 462
	}
	CFontManager::FindFontAliasList(
				CUtlStringToken nTagName);  // 433
	V_strlen(const char* str); // 437
	CUtlString::operator=(
			const char* src);  // 443
	CUtlString::CUtlString(); // 37
	CUtlStringToken::CUtlStringToken(); // 37
	CUtlMemory<FontAlias_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<FontAlias_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >::CUtlVector(); // 37
	FontAliasList_t::FontAliasList_t(); // 442
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 444
	CUtlMemory<FontAliasList_t::NumAllocated(); // 1196
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 602
	CUtlVectorBase<FontAliasList_t::Element(
		int i);  // 1201
	CopyConstruct<FontAliasList_t*>(FontAliasList_t** pMemory,
					FontAliasList_t* const& src);  // 1201
	CUtlMemory<FontAliasList_t::Base(); // 112
	CUtlVectorBase<FontAliasList_t::Base(); // 368
	CUtlVectorBase<FontAliasList_t::ResetDbgInfo(); // 824
	CUtlVectorBase<FontAliasList_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<FontAliasList_t::AddToTail(
			FontAliasList_t* const& src);  // 445
} /* size: 0, variables: 2, inline expansions: 28 (810 bytes) */

// <0050A4C0> fontmanager/fontmanager.cpp:453
// variable: 1
// function calls: 7
void CFontManager::FindFontAliasList(CUtlStringToken nTagName)
{
	CUtlStringToken::IsValid(); // 455
	{
		int i; // 460
		CUtlVectorBase<FontAliasList_t::Count(); // 460
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 462
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 462
	}
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 588
	CUtlVectorBase<FontAliasList_t::operator[](
			int i);  // 457
} /* size: 78, inline expansions: 3 (0 bytes) */

// <0050276D> fontmanager/fontmanager.cpp:453
// variable: 1
void CFontManager::FindFontAliasList(CUtlStringToken nTagName)
{
	{
		int i; // 460
	}
} /* size: 0 */

// <005023C9> fontmanager/fontmanager.cpp:472
// variables: 4
// function calls: 10
void CFontManager::GetFontAliases(const char* pTagName)
{
	FontAliasList_t* pFontAliasList; // 474
	const char   __FUNCTION__; // 11877
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 475
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 474
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 588
	CUtlVectorBase<FontAliasList_t::operator[](
			int i);  // 457
	{
		int i; // 460
		CUtlVectorBase<FontAliasList_t::Count(); // 460
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 462
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 462
	}
	CFontManager::FindFontAliasList(
				CUtlStringToken nTagName);  // 474
} /* size: 0, variables: 2, inline expansions: 6 (265 bytes) */

// <00501C34> fontmanager/fontmanager.cpp:481
// variables: 4
// function calls: 30
void CFontManager::RemoveFontAliasList(const char* pTagName)
{
	const char   __FUNCTION__; // 12007
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 484
	}
	{
		int i; // 486
		CUtlVectorBase<FontAliasList_t::Count(); // 486
		CUtlString::Get(); // 99
		CUtlString::String(); // 488
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 488
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 490
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::RemoveAll(); // 490
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 491
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::RemoveAll(); // 1798
		CUtlMemory<FontAlias_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<FontAlias_t, int>::Purge(); // 903
		CUtlMemory<FontAlias_t, int>::Purge(); // 1799
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::Purge(); // 560
		ValidateAlignment<FontAlias_t>(void); // 508
		CUtlMemory<FontAlias_t, int>::Purge(); // 510
		CUtlMemory<FontAlias_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >::~CUtlVector(); // 37
		CUtlString::~CUtlString(); // 37
		FontAliasList_t::~FontAliasList_t(); // 491
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 602
		CUtlVectorBase<FontAliasList_t::Element(
			int i);  // 1114
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 602
		CUtlVectorBase<FontAliasList_t::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<FontAliasList_t::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<FontAliasList_t::Remove(
			int elem);  // 492
	}
} /* size: 0, variables: 1 */

// <00501B27> fontmanager/fontmanager.cpp:503
// variables: 2
void CFontManager::CreateFontAlias(const char* pTrueFontName, const char* pTagName, bool bIsProportional)
{
	const char   __FUNCTION__; // 11904
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 505
	}
} /* size: 0, variables: 1 */

// <0050145C> fontmanager/fontmanager.cpp:514
// variables: 6
// function calls: 20
void CFontManager::GetFont(const char* fontName, const char* pTagName, bool bProportional)
{
	FontAliasList_t* pList; // 516
	const char* pTag; // 520
	char mungeBuffer; // 526
	const char* pFontName; // 528
	{
		int i; // 531
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::Count(); // 531
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 533
		CUtlSymbolLarge::String(); // 533
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 533
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 535
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 536
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 516
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 588
	CUtlVectorBase<FontAliasList_t::operator[](
			int i);  // 457
	{
		int i; // 460
		CUtlVectorBase<FontAliasList_t::Count(); // 460
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 462
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 462
	}
	CFontManager::FindFontAliasList(
				CUtlStringToken nTagName);  // 516
	{
	}
	GetMungedFontName(char& pBuf,
				const char* pFontName,
				const char* pTagname,
				bool bProportional);  // 527
} /* size: 0, variables: 4, inline expansions: 7 (498 bytes) */

// <005011FB> fontmanager/fontmanager.cpp:548
// variables: 4
void CFontManager::LoadFont(const char* fontName, const char* windowsFontName, int tall, int flags, bool bIsProportional, int weight, int blur, int scanlines, int nRangeMin, int nRangeMax, const char* pTagName)
{
	const char   __FUNCTION__; // 11715
	FontHandle_t fontHandle; // 553
	FontAlias_t* pAlias; // 556
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
} /* size: 0, variables: 3 */

// <0050B5DA> fontmanager/fontmanager.cpp:563
// variable: 1
void CFontManager::FindFont(const char* fontName, bool bIsProportional, const char* pTagName)
{
	const char* pTag; // 565
} /* size: 59, variables: 1 */

// <00500F6E> fontmanager/fontmanager.cpp:577
// variables: 2
// function call: 1
void CFontManager::FindOrLoadFont(const char* fontName, const char* windowsFontName, int tall, int flags, bool bIsProportional, int weight, int blur, int scanlines, int nRangeMin, int nRangeMax, const char* pTagName)
{
	FontHandle_t fontHandle; // 579
	const char* pTag; // 580
	CFontManager::FindFont(
		const char* fontName,
		bool bIsProportional,
		const char* pTagName);  // 585
} /* size: 299, variables: 2, inline expansions: 1 (74 bytes) */

// <00500EFF> fontmanager/fontmanager.cpp:597
// function call: 1
void CFontManager::GetTrueFontName(const FontAlias_t& fontAlias)
{
	CUtlSymbolLarge::String(); // 599
} /* size: 23, inline expansions: 1 (18 bytes) */

// <005008D5> fontmanager/fontmanager.cpp:605
// variables: 6
// function calls: 18
void CFontManager::GetFontRange(const char* fontname, int& nMin, int& nMax, const char* pTagName)
{
	FontAliasList_t* pList; // 607
	char mungeBuffer; // 611
	const char* pInternalFontName; // 613
	CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >& fontAliases; // 615
	{
		int i; // 616
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::Count(); // 616
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 618
		CUtlSymbolLarge::String(); // 618
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 620
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 621
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 607
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 588
	CUtlVectorBase<FontAliasList_t::operator[](
			int i);  // 457
	{
		int i; // 460
		CUtlVectorBase<FontAliasList_t::Count(); // 460
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 462
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 462
	}
	CFontManager::FindFontAliasList(
				CUtlStringToken nTagName);  // 607
} /* size: 0, variables: 4, inline expansions: 6 (310 bytes) */

// <0050024B> fontmanager/fontmanager.cpp:632
// variables: 8
// function calls: 18
void CFontManager::SetFontRange(const char* fontname, int nMin, int nMax, const char* pTagName)
{
	const char   __FUNCTION__; // 11823
	FontAliasList_t* pList; // 635
	char mungeBuffer; // 639
	const char* pInternalFontName; // 641
	CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >& fontAliases; // 643
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 634
	}
	{
		int i; // 644
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::Count(); // 644
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 646
		CUtlSymbolLarge::String(); // 646
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 648
		CUtlMemory<FontAlias_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
				int i);  // 649
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 635
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 588
	CUtlVectorBase<FontAliasList_t::operator[](
			int i);  // 457
	{
		int i; // 460
		CUtlVectorBase<FontAliasList_t::Count(); // 460
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 462
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 462
	}
	CFontManager::FindFontAliasList(
				CUtlStringToken nTagName);  // 635
} /* size: 0, variables: 5, inline expansions: 6 (296 bytes) */

// <004FFB26> fontmanager/fontmanager.cpp:659
// variables: 5
// function calls: 22
void CFontManager::SpewFontAliasList(FontAliasList_t* pList, float yRes, bool bMarkUsed)
{
	CUtlVector<FontAlias_t, CUtlMemory<FontAlias_t, int> >& fontAliases; // 662
	{
		int i; // 663
		{
			float fontTall; // 665
			const char* pUsage; // 668
			Color col; // 669
			CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 941
			{
			}
			CUtlMemory<CFontAmalgam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
					int i);  // 942
			CFontManager::GetFontTall(
					FontHandle_t font);  // 665
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 669
			CUtlMemory<FontAlias_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
					int i);  // 670
			CUtlMemory<FontAlias_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
					int i);  // 683
			CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 903
			{
			}
			CUtlMemory<CFontAmalgam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
					int i);  // 905
			CFontManager::GetFontName(
					FontHandle_t font);  // 683
			CUtlMemory<FontAlias_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
					int i);  // 683
			CUtlSymbolLarge::String(); // 683
			CUtlSymbolLarge::String(); // 683
			CUtlMemory<FontAlias_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::operator[](
					int i);  // 665
		}
		CUtlVectorBase<FontAlias_t, CUtlMemory<FontAlias_t, int> >::Count(); // 663
	}
	CUtlString::Get(); // 661
} /* size: 0, variables: 1, inline expansions: 1 (17 bytes) */

// <004FF7A4> fontmanager/fontmanager.cpp:696
// variables: 2
// function calls: 10
void CFontManager::SpewFonts(const char* pTagName, float yRes)
{
	FontAliasList_t* pList; // 698
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 698
	CUtlMemory<FontAliasList_t::operator[](
			int i);  // 588
	CUtlVectorBase<FontAliasList_t::operator[](
			int i);  // 457
	{
		int i; // 460
		CUtlVectorBase<FontAliasList_t::Count(); // 460
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 462
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 462
	}
	CFontManager::FindFontAliasList(
				CUtlStringToken nTagName);  // 698
} /* size: 0, variables: 1, inline expansions: 6 (363 bytes) */

// <0050B271> fontmanager/fontmanager.cpp:705
// variable: 1
// function calls: 3
void CFontManager::SpewAllFonts(float yRes)
{
	{
		int i; // 707
		CUtlVectorBase<FontAliasList_t::Count(); // 707
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 710
	}
} /* size: 0 */

// <004FF732> fontmanager/fontmanager.cpp:705
// variable: 1
void CFontManager::SpewAllFonts(float yRes)
{
	{
		int i; // 707
	}
} /* size: 0 */

// <0050B02C> fontmanager/fontmanager.cpp:714
// variable: 1
// function calls: 7
void spew_fonts(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 716
	CCommand::Arg(
		int nIndex);  // 718
	{
		int i; // 707
		CUtlVectorBase<FontAliasList_t::Count(); // 707
		CUtlMemory<FontAliasList_t::operator[](
				int i);  // 588
		CUtlVectorBase<FontAliasList_t::operator[](
				int i);  // 710
	}
	CFontManager::SpewAllFonts(
			float yRes);  // 722
	spew_fonts(const CCommandContext& ctx,
			const CCommand& args);  // 714
} /* size: 144, inline expansions: 4 (150 bytes) */

// <004FF708> fontmanager/fontmanager.cpp:714
void spew_fonts(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <0050B67F> fontmanager/fontmanager.cpp:730
// variable: 1
// function calls: 10
void CFontManager::CreateFont()
{
	uint nIndex; // 733
	{
	}
	CUtlMemory<CFontAmalgam, int>::NumAllocated(); // 1143
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Element(
		int i);  // 1148
	Construct<CFontAmalgam>(CFontAmalgam* pMemory); // 1148
	CUtlMemory<CFontAmalgam, int>::Base(); // 112
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Base(); // 368
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::AddToTail(); // 733
	{
	}
	CFontManager::CreateFont(); // 730
} /* size: 0, variables: 1, inline expansions: 10 (186 bytes) */

// <004FF686> fontmanager/fontmanager.cpp:730
// variables: 4
void CFontManager::CreateFont()
{
	const char   __FUNCTION__; // 11769
	uint nIndex; // 733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 732
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 737
	}
} /* size: 0, variables: 2 */

// <004FE8B2> fontmanager/fontmanager.cpp:744
// variables: 10
// function calls: 50
void CFontManager::SetFontGlyphSet(FontHandle_t font, const char* windowsFontName, int tall, int weight, int blur, int scanlines, int flags, int nRangeMin, int nRangeMax)
{
	const char   __FUNCTION__; // 11904
	CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> > descs; // 775
	CFontBase* platFont; // 776
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 747
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 748
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 761
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 805
	}
	{
		int i; // 809
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Count(); // 809
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 811
		CUtlMemory<CFontAmalgam, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
				int i);  // 811
		CUtlMemory<SFontDescription, int>::operator[](
				int i);  // 588
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::operator[](
				int i);  // 811
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 748
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 752
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 755
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 757
	CUtlMemory<SFontDescription, int>::ValidateGrowSize(); // 475
	CUtlMemory<SFontDescription, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >::CUtlVector(); // 775
	CUtlMemory<SFontDescription, int>::IsExternallyAllocated(); // 888
	CUtlMemory<SFontDescription, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::EnsureCapacity(
			int num);  // 780
	CFontManager::GetFallbackFontName(
				const char* windowsFontName);  // 798
	{
		int i; // 1721
		CUtlMemory<SFontDescription, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 44
		SFontDescription::~SFontDescription(); // 1526
		Destruct<SFontDescription>(SFontDescription* pMemory); // 1723
	}
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::RemoveAll(); // 788
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Count(); // 805
	{
		int i; // 1721
		CUtlMemory<SFontDescription, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 44
		SFontDescription::~SFontDescription(); // 1526
		Destruct<SFontDescription>(SFontDescription* pMemory); // 1723
	}
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::RemoveAll(); // 1798
	CUtlMemory<SFontDescription, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SFontDescription, int>::Purge(); // 903
	CUtlMemory<SFontDescription, int>::Purge(); // 1799
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Purge(); // 560
	ValidateAlignment<SFontDescription>(void); // 508
	CUtlMemory<SFontDescription, int>::Purge(); // 510
	CUtlMemory<SFontDescription, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >::~CUtlVector(); // 815
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 808
	CUtlMemory<SFontDescription, int>::operator[](
			int i);  // 588
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::operator[](
			int i);  // 808
} /* size: 0, variables: 3, inline expansions: 33 (841 bytes) */

// <004FCCB7> fontmanager/fontmanager.cpp:820
// variables: 14
// function calls: 109
void CFontManager::CreateOrFindPlatformFont(const char* windowsFontName, int tall, int weight, int blur, int scanlines, int flags, CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* descs)
{
	CFontAttributes key; // 823
	int i; // 824
	CPlatformFont* pNewFont; // 845
	CPathBufferString fontDataFile; // 846
	void* fontData; // 847
	int fontDataBytes; // 848
	bool bDoSystemSearch; // 855
	bool bFoundCustom; // 856
	CFontInfo fontInfo; // 887
	{
		CFontInfo& fontInfo; // 827
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this,
				int i);  // 539
		Element(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this,
			int i);  // 92
		CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::operator[](
				IndexType_t i);  // 827
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Count(); // 830
		CUtlMemory<SFontDescription, int>::Base(); // 112
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Base(); // 830
		CUtlMemory<SFontDescription, int>::Base(); // 112
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Base(); // 102
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::begin(); // 1344
		UtlTraitsCopyRange<SFontDescription>(const SFontDescription* pFrom,
							const SFontDescription* pFromEnd,
							SFontDescription* pTo);  // 1344
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::CopyArray(
				const SFontDescription* pArray,
				int size);  // 830
	}
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 151
	CFontAttributes::Set(
		const char* pstrName,
		int tall,
		int weight,
		int blur,
		int scanlines,
		int flags,
		bool haveDescs);  // 168
	CFontAttributes::CFontAttributes(
			const char* pstrName,
			int tall,
			int weight,
			int blur,
			int scanlines,
			int flags,
			bool haveDescs);  // 823
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this,
			int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontMa this,
			int i);  // 1913
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this,
			int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontMa this,
		int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this,
			int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontMa this,
			int i);  // 1915
	FindAltKeyType<CFontManager::CFontAttributes, CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::CKeyLess>(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontMa this,
																const CFontAttributes& search,
																const CKeyLess& altLess);  // 298
	FindAltKeyType<CFontManager::CFontAttributes>(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontMa this,
							const CFontAttributes& search);  // 243
	CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::Find(
		const KeyType_t& key);  // 824
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 846
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 878
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 899
	CUtlMemory<SFontDescription, int>::ValidateGrowSize(); // 475
	CUtlMemory<SFontDescription, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >::CUtlVector(); // 186
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Count(); // 190
	CUtlMemory<SFontDescription, int>::Base(); // 112
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Base(); // 190
	UtlTraitsCopyRange<SFontDescription>(const SFontDescription* pFrom,
						const SFontDescription* pFromEnd,
						SFontDescription* pTo);  // 1344
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::CopyArray(
			const SFontDescription* pArray,
			int size);  // 190
	CFontInfo::CFontInfo(
			CFontBase* font,
			CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* descs);  // 185
	CFontInfo::CFontInfo(
			CFontBase* font,
			CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* descs);  // 887
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::end(); // 574
	CUtlMemory<SFontDescription, int>::Base(); // 112
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Base(); // 102
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::begin(); // 574
	UtlTraitsCopyRange<SFontDescription>(const SFontDescription* pFrom,
						const SFontDescription* pFromEnd,
						SFontDescription* pTo);  // 574
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::operator=(
			const CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >& other);  // 565
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::operator=(
			const CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >& other);  // 452
	CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >::operator=(
			const CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >& src);  // 434
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::ResetDbgInfo(); // 530
	CUtlMemory<SFontDescription, int>::ValidateGrowSize(); // 475
	CUtlMemory<SFontDescription, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >::CUtlVector(
			const CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >& src);  // 178
	CFontInfo::CFontInfo(
			const CFontInfo  &);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this,
			int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontMa this,
			int i);  // 1667
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int>, int> this,
			int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this,
		int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int> this,
			int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontMa this,
			int i);  // 1677
	FindInsertionPosition(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this,
				const Node_t& insert,
				bool bCheckForDuplicates,
				int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		int newNode; // 1709
		{
		}
	}
	{
		int newNode; // 1696
	}
	Insert(const CUtlRBTree<CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int>::Node_t, int, CUtlMap<CFontManager: this,
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	{
		int i; // 1721
		CUtlMemory<SFontDescription, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 44
		SFontDescription::~SFontDescription(); // 1526
		Destruct<SFontDescription>(SFontDescription* pMemory); // 1723
	}
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::RemoveAll(); // 1798
	CUtlMemory<SFontDescription, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SFontDescription, int>::Purge(); // 903
	CUtlMemory<SFontDescription, int>::Purge(); // 1799
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Purge(); // 560
	ValidateAlignment<SFontDescription>(void); // 508
	CUtlMemory<SFontDescription, int>::Purge(); // 510
	CUtlMemory<SFontDescription, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >::~CUtlVector(); // 178
	CFontInfo::~CFontInfo(); // 402
	Node_t::~Node_t(); // 207
	CUtlMap<CFontManager::CFontAttributes, CFontManager::CFontInfo, int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 888
	{
		int i; // 1721
		CUtlMemory<SFontDescription, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 44
		SFontDescription::~SFontDescription(); // 1526
		Destruct<SFontDescription>(SFontDescription* pMemory); // 1723
	}
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::RemoveAll(); // 1798
	CUtlMemory<SFontDescription, int>::Purge(); // 903
	CUtlMemory<SFontDescription, int>::Purge(); // 1799
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Purge(); // 560
	ValidateAlignment<SFontDescription>(void); // 508
	CUtlMemory<SFontDescription, int>::Purge(); // 510
	CUtlMemory<SFontDescription, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >::~CUtlVector(); // 178
	CFontInfo::~CFontInfo(); // 899
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 866
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 868
} /* size: 0, variables: 9, inline expansions: 88 (5417 bytes) */

// <0050A79C> fontmanager/fontmanager.cpp:901
// function calls: 3
void CFontManager::GetFontName(FontHandle_t font)
{
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 903
	{
	}
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 905
} /* size: 0, inline expansions: 3 (22 bytes) */

// <004FCC52> fontmanager/fontmanager.cpp:901
// variables: 2
void CFontManager::GetFontName(FontHandle_t font)
{
	const char   __FUNCTION__; // 11796
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 903
	}
} /* size: 0, variables: 1 */

// <004FCAFB> fontmanager/fontmanager.cpp:911
// variables: 2
// function calls: 3
void CFontManager::GetFontForChar(FontHandle_t font, uchar32 ch)
{
	const char   __FUNCTION__; // 11877
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 913
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 914
} /* size: 0, variables: 1, inline expansions: 3 (22 bytes) */

// <004FC89D> fontmanager/fontmanager.cpp:920
// variables: 3
// function calls: 5
void CFontManager::GetCharABCwide(FontHandle_t font, uchar32 ch, int& a, int& b, int& c)
{
	const char   __FUNCTION__; // 11877
	CFontBase* pWinFont; // 923
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 922
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 922
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 923
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 932
} /* size: 0, variables: 2, inline expansions: 5 (42 bytes) */

// <0050A896> fontmanager/fontmanager.cpp:939
// function calls: 3
void CFontManager::GetFontTall(FontHandle_t font)
{
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 941
	{
	}
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 942
} /* size: 0, inline expansions: 3 (44 bytes) */

// <004FC838> fontmanager/fontmanager.cpp:939
// variables: 2
void CFontManager::GetFontTall(FontHandle_t font)
{
	const char   __FUNCTION__; // 11796
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 941
	}
} /* size: 0, variables: 1 */

// <004FC699> fontmanager/fontmanager.cpp:948
// variables: 3
// function calls: 4
void CFontManager::GetFontAscent(FontHandle_t font, uchar32 ch)
{
	const char   __FUNCTION__; // 11850
	CFontBase* pFont; // 951
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 950
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 951
	CFontBase::GetAscent(); // 954
} /* size: 0, variables: 2, inline expansions: 4 (25 bytes) */

// <004FC558> fontmanager/fontmanager.cpp:965
// variables: 2
// function calls: 3
void CFontManager::IsFontAdditive(FontHandle_t font)
{
	const char   __FUNCTION__; // 11877
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 967
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 967
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 968
} /* size: 0, variables: 1, inline expansions: 3 (22 bytes) */

// <0050A999> fontmanager/fontmanager.cpp:974
// variables: 3
// function calls: 2
void CFontManager::GetCharacterWidth(FontHandle_t font, uchar32 ch)
{
	V_iswcntrl32(uchar32 c); // 976
	{
		int a; // 978
		int b; // 978
		int c; // 978
	}
	CFontManager::GetCharacterWidth(
				FontHandle_t font,
				uchar32 ch);  // 974
} /* size: 153, inline expansions: 2 (75 bytes) */

// <004FC503> fontmanager/fontmanager.cpp:974
// variables: 3
void CFontManager::GetCharacterWidth(FontHandle_t font, uchar32 ch)
{
	{
		int a; // 978
		int b; // 978
		int c; // 978
	}
} /* size: 0 */

// <0050AC2A> fontmanager/fontmanager.cpp:988
// variables: 8
// function calls: 9
void CFontManager::GetTextSize(FontHandle_t font, const uchar32* text, int& wide, int& tall)
{
	float xx; // 998
	uchar32 chBefore; // 999
	uchar32 chAfter; // 1000
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 941
	{
	}
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 942
	CFontManager::GetFontTall(
			FontHandle_t font);  // 996
	{
		int i; // 1001
		{
			uchar32 uniChar; // 1003
			CUtlMemory<CFontAmalgam, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
					int i);  // 942
			CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 941
			{
			}
			CFontManager::GetFontTall(
					FontHandle_t font);  // 1013
			{
				float flWide; // 1022
				float flabcA; // 1022
				float flabcC; // 1022
			}
		}
	}
	CFontManager::GetTextSize(
			FontHandle_t font,
			const uchar32* text,
			int& wide,
			int& tall);  // 988
} /* size: 0, variables: 3, inline expansions: 5 (494 bytes) */

// <004FC44B> fontmanager/fontmanager.cpp:988
// variables: 8
void CFontManager::GetTextSize(FontHandle_t font, const uchar32* text, int& wide, int& tall)
{
	float xx; // 998
	uchar32 chBefore; // 999
	uchar32 chAfter; // 1000
	{
		int i; // 1001
		{
			uchar32 uniChar; // 1003
			{
				float flWide; // 1022
				float flabcA; // 1022
				float flabcC; // 1022
			}
		}
	}
} /* size: 0, variables: 3 */

// <004EB2E3> fontmanager/fontmanager.cpp:1036
// member variables: 2
// struct size: 16
struct FallbackFont_t {
	const char * font; /* 0 8 */
	const char * fallbackFont; /* 8 8 */
};

// <0050B36B> fontmanager/fontmanager.cpp:1072
// variable: 1
void CFontManager::GetFallbackFontName(const char* windowsFontName)
{
	int i; // 1074
} /* size: 0, variables: 1 */

// <004FC3EC> fontmanager/fontmanager.cpp:1087
void CFontManager::ClearTemporaryFontCache()
{
} /* size: 5 */

// <004FC2A0> fontmanager/fontmanager.cpp:1095
// variables: 2
// function calls: 3
void CFontManager::GetFontUnderlined(FontHandle_t font)
{
	const char   __FUNCTION__; // 11953
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1097
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 1097
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 1098
} /* size: 0, variables: 1, inline expansions: 3 (44 bytes) */

// <004FBEED> fontmanager/fontmanager.cpp:1101
// variables: 4
// function calls: 9
void CFontManager::GetKernedCharWidth(FontHandle_t font, uchar32 ch, uchar32 chBefore, uchar32 chAfter, float& wide, float& flabcA, float& flabcC)
{
	const char   __FUNCTION__; // 11980
	CFontBase* pFont; // 1112
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1106
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1110
	}
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::Count(); // 1110
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 1112
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 1121
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 1124
	CUtlMemory<CFontAmalgam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFontAmalgam, CUtlMemory<CFontAmalgam, int> >::operator[](
			int i);  // 1117
} /* size: 0, variables: 2, inline expansions: 9 (78 bytes) */

// <004FBCAB> fontmanager/fontmanager.cpp:1133
// variables: 2
// function calls: 6
void CFontManager::PrecacheFontCharacters(FontHandle_t font, const uchar32* pCharacterString)
{
	int numChars; // 1135
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1150; // 1150
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1150
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1152
} /* size: 243, variables: 2, inline expansions: 6 (321 bytes) */

// <004FBABF> fontmanager/fontmanager.cpp:1156
// variable: 1
// function calls: 6
void CFontManager::ClearFontTextureCache()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1158; // 1158
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1158
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1160
} /* size: 125, variables: 1, inline expansions: 6 (285 bytes) */

// <004FB9E6> fontmanager/fontmanager.cpp:1164
void CFontManager::GetTextureForChar(FontHandle_t font, FontDrawType_t type, uchar32 ch, int* textureID, float** texCoords)
{
} /* size: 16 */

// <004FB974> fontmanager/fontmanager.cpp:1171
void CFontManager::GetTextureHandle(int textureID)
{
} /* size: 74 */

// <004FAC95> fontmanager/fontmanager.cpp:1179
// variables: 13
// function calls: 40
void CFontManager::FindOrAddFontDataFile(const char* fontFileName, bool bKeepData, void** pFontData, int* pFontDataBytes)
{
	const char   __FUNCTION__; // 12056
	CUtlSymbol fileSym; // 1185
	int symIdx; // 1187
	CUtlBuffer loadBuf; // 1197
	bool bEncoded; // 1207
	CFontDataFile fileData; // 1214
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1184
	}
	{
		CFontDataFile& fileData; // 1191
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::operator[](
				int i);  // 539
		Element(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int,  this,
			int i);  // 92
		CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::operator[](
				IndexType_t i);  // 1191
	}
	CUtlSymbol::operator UtlSymId_t(); // 1187
	FindAltKeyType<short unsigned int>(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned this,
						const short unsigned int& search);  // 243
	CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::Find(
		const KeyType_t& key);  // 1187
	V_striEndsWith(const char* pStr,
			const char* pSuffix);  // 1207
	CUtlBuffer::TellPut(); // 1216
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 656
	CUtlMemory<unsigned char, int>::DetachMemory(); // 668
	CUtlMemory<unsigned char, int>::Detach(); // 1567
	CUtlBuffer::Clear(); // 1568
	CUtlBuffer::Detach(); // 1227
	CUtlSymbol::operator UtlSymId_t(); // 1229
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>  this,
			int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned this,
			int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::operator[](
			int i);  // 539
	Element(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int,  this,
		int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>  this,
			int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned this,
			int i);  // 1677
	FindInsertionPosition(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int,  this,
				const Node_t& insert,
				bool bCheckForDuplicates,
				int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		int newNode; // 1709
		{
		}
	}
	{
		int newNode; // 1696
	}
	Insert(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int,  this,
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 1229
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1232
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1221
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1221
	CUtlBuffer::TellPut(); // 45
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 53
	{
		unsigned char* pvSult; // 65
	}
	{
		int numBufBytes; // 72
		{
			unsigned char v; // 74
		}
	}
	DecodeBuffer(unsigned char* pvBuffer,
			int& numBytes);  // 58
	DecodeFont(CUtlBuffer& buffer); // 1208
} /* size: 0, variables: 6, inline expansions: 37 (1878 bytes) */

// <0050B3CA> fontmanager/fontmanager.cpp:1237
// variables: 2
// function calls: 4
void CFontManager::FindCustomFont(const char* fontName)
{
	CUtlSymbol nameSym; // 1239
	CUtlSymbol::IsValid(); // 1240
	{
		int i; // 1245
		CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::Count(); // 1245
		CUtlMemory<CFontManager::CustomFontInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::operator[](
				int i);  // 1247
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <004FAC55> fontmanager/fontmanager.cpp:1237
// variables: 2
void CFontManager::FindCustomFont(const char* fontName)
{
	CUtlSymbol nameSym; // 1239
	{
		int i; // 1245
	}
} /* size: 0, variables: 1 */

// <004FA40E> fontmanager/fontmanager.cpp:1257
// variables: 9
// function calls: 27
void CFontManager::FindCustomFontData(const char* fontName, void** pFontData, int* pFontDataBytes, CUtlVector<SFontDescription, CUtlMemory<SFontDescription, int> >* descs, bool* pDoSystemSearch)
{
	CustomFontInfo_t* pExistingInfo; // 1276
	int symIdx; // 1282
	const char   __FUNCTION__; // 11980
	CFontDataFile& fileData; // 1285
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1283
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1288
	}
	{
		SFontDescription desc; // 1297
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1305
		}
		CUtlString::CUtlString(); // 44
		SFontDescription::SFontDescription(); // 1297
		CUtlString::operator=(
				const char* src);  // 1299
		CUtlMemory<SFontDescription, int>::NumAllocated(); // 1196
		CUtlMemory<SFontDescription, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 44
		SFontDescription::SFontDescription(
				const SFontDescription  &);  // 1520
		CopyConstruct<SFontDescription>(SFontDescription* pMemory,
						const SFontDescription& src);  // 1201
		CUtlMemory<SFontDescription, int>::Base(); // 112
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::Base(); // 368
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<SFontDescription, CUtlMemory<SFontDescription, int> >::AddToTail(
				const SFontDescription& src);  // 1308
		CUtlString::~CUtlString(); // 44
		SFontDescription::~SFontDescription(); // 1344
	}
	CUtlSymbol::IsValid(); // 1240
	{
		int i; // 1245
		CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::Count(); // 1245
		CUtlMemory<CFontManager::CustomFontInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFontManager::CustomFontInfo_t, CUtlMemory<CFontManager::CustomFontInfo_t, int> >::operator[](
				int i);  // 1247
	}
	CFontManager::FindCustomFont(
			const char* fontName);  // 1276
	FindAltKeyType<short unsigned int>(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned this,
						const short unsigned int& search);  // 243
	CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::Find(
		const KeyType_t& key);  // 1282
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int>, int>::operator[](
			int i);  // 539
	Element(const CUtlRBTree<CUtlMap<short unsigned int, CFontManager::CFontDataFile, int>::Node_t, int, CUtlMap<short unsigned int,  this,
		int i);  // 92
	CUtlMap<short unsigned int, CFontManager::CFontDataFile, int, bool (::operator[](
			IndexType_t i);  // 1285
} /* size: 0, variables: 4, inline expansions: 7 (183 bytes) */

