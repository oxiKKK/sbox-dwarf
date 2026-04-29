
//
// tier0/keyvaluessystem.cpp
//
//	referenced by: libtier0.so
//
//	functions: 56
//	classes: 2
//	struct: 1
//

// <0024D298> tier0/keyvaluessystem.cpp:66
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 4,392
class CUtlNoEscConversion : public CUtlCharConversion {
public:
	/* class CUtlCharConversion <ancestor>; */ /* 0 0 */
	void ~CUtlNoEscConversion(CUtlNoEscConversion* );
	void CUtlNoEscConversion(CUtlNoEscConversion* , CUtlNoEscConversion& );
	void CUtlNoEscConversion(CUtlNoEscConversion* , const CUtlNoEscConversion& );
	/* tier0/keyvaluessystem.cpp:69 */
	void CUtlNoEscConversion(CUtlNoEscConversion* , char, const char* , int, const ConversionArray_t* );
	/* tier0/keyvaluessystem.cpp:73 */
	virtual char FindConversion(CUtlNoEscConversion* , const char* , int* );
	void ~CUtlNoEscConversion(class CUtlNoEscConversion *); /* linkage=_ZN19CUtlNoEscConversionD4Ev */
	void CUtlNoEscConversion(class CUtlNoEscConversion *, class CUtlNoEscConversion &); /* linkage=_ZN19CUtlNoEscConversionC4EOS_ */
	void CUtlNoEscConversion(class CUtlNoEscConversion *, const class CUtlNoEscConversion  &); /* linkage=_ZN19CUtlNoEscConversionC4ERKS_ */
	void CUtlNoEscConversion(class CUtlNoEscConversion *, char, const char  *, int, const class ConversionArray_t  *); /* linkage=_ZN19CUtlNoEscConversionC4EcPKciPKN18CUtlCharConversion17ConversionArray_tE */
	virtual char FindConversion(class CUtlNoEscConversion *, const char  *, int *); /* linkage=_ZN19CUtlNoEscConversion14FindConversionEPKcPi */
};

// <00265B63> tier0/keyvaluessystem.cpp:69
void CUtlNoEscConversion::CUtlNoEscConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
} /* size: 0 */

// <00265B1A> tier0/keyvaluessystem.cpp:69
inline void CUtlNoEscConversion::CUtlNoEscConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
} /* size: 0 */

// <00265ACC> tier0/keyvaluessystem.cpp:73
void CUtlNoEscConversion::FindConversion(const char* pString, int* pLength)
{
} /* size: 13 */

// <00265AB9> tier0/keyvaluessystem.cpp:87
CUtlCharConversion* GetNoEscCharConversion(void)
{
} /* size: 0 */

// <00263894> tier0/keyvaluessystem.cpp:92
void TempKeyValueAllocator_t::TempKeyValueAllocator_t()
{
} /* size: 0 */

// <00263878> tier0/keyvaluessystem.cpp:92
inline void TempKeyValueAllocator_t::TempKeyValueAllocator_t()
{
} /* size: 0 */

// <0026378D> tier0/keyvaluessystem.cpp:92
void TempKeyValueAllocator_t::~TempKeyValueAllocator_t()
{
} /* size: 0 */

// <00263771> tier0/keyvaluessystem.cpp:92
inline void TempKeyValueAllocator_t::~TempKeyValueAllocator_t()
{
} /* size: 0 */

// <0024D38E> tier0/keyvaluessystem.cpp:92
// member functions: 2
// member variable: 1
// struct size: 16
struct TempKeyValueAllocator_t {
	CUtlScratchMemoryPool m_memPool; /* 0 16 */
	void ~TempKeyValueAllocator_t(TempKeyValueAllocator_t* );
	void TempKeyValueAllocator_t(TempKeyValueAllocator_t* );
};

// <0024D3DD> tier0/keyvaluessystem.cpp:100
// member functions: 70
// member variables: 10
// vtable entries: 19
// class size: 1,928
class CKeyValuesSystem : public IKeyValuesSystem {
	/* tier0/keyvaluessystem.cpp:188 */
	struct hash_item_t {
		int stringIndex; /* 0 4 */
		hash_item_t * next; /* 8 8 */
		/* tier0/keyvaluessystem.cpp:193 */
		void* operator new(size_t);
		/* tier0/keyvaluessystem.cpp:193 */
		void* operator new(size_t, int, const char* , int);
		/* tier0/keyvaluessystem.cpp:193 */
		void operator delete(void* );
		/* tier0/keyvaluessystem.cpp:193 */
		void operator delete(void* , int, const char* , int);
		/* tier0/keyvaluessystem.cpp:193 */
		void PurgeFixedAllocator(bool);
	private:
		static class CUtlMemoryPool<CKeyValuesSystem::hash_item_t> s_Allocator; /* 0 0 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/keyvaluessystem.cpp:198 */
	struct IndexedString_t {
		HKeySymbol hCaseInsensitiveSymbol; /* 0 4 */
		uint32 nStringMemoryOffset; /* 4 4 */
		void IndexedString_t(IndexedString_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/keyvaluessystem.cpp:230 */
	struct SharedStringData_t {
		uint8 nReferences; /* 0 1 */
		char stringData[1]; /* 1 1 */
	};
	/* tier0/keyvaluessystem.cpp:236 */
	struct ReferenceMap_t {
		CUtlHashtable<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4>, DefaultHashFunctor<CKeyValuesSystem::SharedStringData_t*>, DefaultEqualFunctor<CKeyValuesSystem::SharedStringData_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >, int> > Hash; /* 0 32 */
		CThreadRWLock_FastRead RWLock __attribute__((__aligned__(8))); /* 32 408 */
		/* tier0/keyvaluessystem.cpp:242 */
		void AddReference(ReferenceMap_t* , SharedStringData_t* );
		/* tier0/keyvaluessystem.cpp:243 */
		bool RemoveReference(ReferenceMap_t* , SharedStringData_t* );
		/* tier0/keyvaluessystem.cpp:239 */
		typedef handle_t HashElementHandle_t;
		void ~ReferenceMap_t(ReferenceMap_t* );
		void ReferenceMap_t(ReferenceMap_t* );
	} __attribute__((__aligned__(8)));
	/* tier0/keyvaluessystem.cpp:246 */
	struct SharingMap_t {
		/* tier0/keyvaluessystem.cpp:262 */
		union InterlockHelper_t {
			SharedStringData_t asStruct; /* 0 2 */
			uint32 nInt; /* 0 4 */
		};
		/* tier0/keyvaluessystem.cpp:248 */
		void SharingMap_t(SharingMap_t* );
		CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t*>, int> > Hash; /* 0 32 */
		CThreadRWLock_FastRead RWLock __attribute__((__aligned__(8))); /* 32 408 */
		ReferenceMap_t OverflowReferences __attribute__((__aligned__(8))); /* 440 440 */
		bool bHasHashEverCollided; /* 880 1 */
		/* tier0/keyvaluessystem.cpp:268 */
		void IncrementRefCount(SharingMap_t* , SharedStringData_t* );
		/* tier0/keyvaluessystem.cpp:254 */
		typedef handle_t HashElementHandle_t;
		void ~SharingMap_t(SharingMap_t* );
	} __attribute__((__aligned__(8)));
public:
	/* class IKeyValuesSystem <ancestor>; */ /* 0 8 */
	void CKeyValuesSystem(CKeyValuesSystem* , const CKeyValuesSystem& );
	/* tier0/keyvaluessystem.cpp:348 */
	void CKeyValuesSystem(CKeyValuesSystem* );
	/* tier0/keyvaluessystem.cpp:455 */
	void ~CKeyValuesSystem(CKeyValuesSystem* );
	/* tier0/keyvaluessystem.cpp:552 */
	virtual KeyValues* AllocKeyValuesMemory(CKeyValuesSystem* );
	/* tier0/keyvaluessystem.cpp:584 */
	virtual void FreeKeyValuesMemory(CKeyValuesSystem* , KeyValues* );
	/* tier0/keyvaluessystem.cpp:606 */
	virtual HKeySymbol GetSymbolForString(CKeyValuesSystem* , const char* , bool);
	/* tier0/keyvaluessystem.cpp:960 */
	virtual const char* GetStringForSymbol(CKeyValuesSystem* , HKeySymbol);
	/* tier0/keyvaluessystem.cpp:115 */
	void GetLocalizedFromANSI(CKeyValuesSystem* , const char* , wchar_t* , int);
	/* tier0/keyvaluessystem.cpp:116 */
	void GetANSIFromLocalized(CKeyValuesSystem* , const wchar_t* , char* , int);
	/* tier0/keyvaluessystem.cpp:391 */
	virtual void AddKeyValuesToMemoryLeakList(CKeyValuesSystem* , void* , HKeySymbol);
	/* tier0/keyvaluessystem.cpp:416 */
	virtual void RemoveKeyValuesFromMemoryLeakList(CKeyValuesSystem* , void* );
	/* tier0/keyvaluessystem.cpp:427 */
	virtual void SetMemoryLeakListContextName(CKeyValuesSystem* , const void* , const char* );
	/* tier0/keyvaluessystem.cpp:1002 */
	virtual void SetKeyValuesExpressionSymbol(CKeyValuesSystem* , const char* , bool);
	/* tier0/keyvaluessystem.cpp:1019 */
	virtual bool GetKeyValuesExpressionSymbol(CKeyValuesSystem* , const char* );
	/* tier0/keyvaluessystem.cpp:687 */
	virtual HKeySymbol GetSymbolForStringCaseSensitive(CKeyValuesSystem* , HKeySymbol& , const char* , bool);
	/* tier0/keyvaluessystem.cpp:842 */
	virtual HKeySymbol GetCaseInsensitiveSymbolFromCaseSensitiveSymbol(CKeyValuesSystem* , HKeySymbol);
	/* tier0/keyvaluessystem.cpp:855 */
	virtual const char* CopyString(CKeyValuesSystem* , const char* );
	/* tier0/keyvaluessystem.cpp:887 */
	virtual void ReleaseStringCopy(CKeyValuesSystem* , const char* );
	/* tier0/keyvaluessystem.cpp:913 */
	virtual const wchar_t* CopyWString(CKeyValuesSystem* , const wchar_t* );
	/* tier0/keyvaluessystem.cpp:938 */
	virtual void ReleaseWStringCopy(CKeyValuesSystem* , const wchar_t* );
	/* tier0/keyvaluessystem.cpp:952 */
	virtual CUtlCharConversion* GetCharacterConversion(CKeyValuesSystem* , bool);
	/* tier0/keyvaluessystem.cpp:528 */
	virtual HTemporaryKeyValueAllocationScope AllocTemporaryKeyValueAllocationScope(CKeyValuesSystem* );
	/* tier0/keyvaluessystem.cpp:535 */
	virtual void FreeTemporaryKeyValueAllocationScope(CKeyValuesSystem* , HTemporaryKeyValueAllocationScope);
	/* tier0/keyvaluessystem.cpp:541 */
	virtual HTemporaryKeyValueAllocationScope SetTemporaryKeyValueAllocationScope(CKeyValuesSystem* , HTemporaryKeyValueAllocationScope);
private:
	CUtlMemoryPoolMT * m_pMemPool; /* 8 8 */
	bool m_bIgnoreMemPool; /* 16 1 */
	CMemoryStack m_Strings; /* 24 96 */
	CUtlVector<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> > m_HashTable; /* 120 32 */
	/* tier0/keyvaluessystem.cpp:979 */
	int CaseInsensitiveHash(CKeyValuesSystem* , const char* , int);
	CUtlVector<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> > m_IndexedStrings; /* 152 32 */
	CUtlMap<HKeySymbol, bool, short unsigned int, bool (*)(const HKeySymbol&, const HKeySymbol&)> m_KvConditionalSymbolTable; /* 184 40* /
	CThreadRWLock_FastRead m_Symbol_RWLock __attribute__((__aligned__(8))); /* 224 408 */
	CThreadRWLock_FastRead m_ConditionalSymbolTable_RWLock __attribute__((__aligned__(8))); /* 632 408 */
	SharingMap_t m_SharedStrings __attribute__((__aligned__(8))); /* 1040 888 */
	/* tier0/keyvaluessystem.cpp:1211 */
	const char* FindOrInsertSharedString(CKeyValuesSystem* , const char* , size_t);
	/* tier0/keyvaluessystem.cpp:1272 */
	void ReleaseSharedString(CKeyValuesSystem* , const char* , size_t);
	void CKeyValuesSystem(class CKeyValuesSystem *, const class CKeyValuesSystem  &); /* linkage=_ZN16CKeyValuesSystemC4ERKS_ */
	void CKeyValuesSystem(class CKeyValuesSystem *); /* linkage=_ZN16CKeyValuesSystemC4Ev */
	void ~CKeyValuesSystem(class CKeyValuesSystem *); /* linkage=_ZN16CKeyValuesSystemD4Ev */
	/* <266e5e> tier0/keyvaluessystem.cpp:552 */
	virtual class KeyValues * AllocKeyValuesMemory(class CKeyValuesSystem *); /* linkage=_ZN16CKeyValuesSystem20AllocKeyValuesMemoryEv */
	/* <266c98> tier0/keyvaluessystem.cpp:584 */
	virtual void FreeKeyValuesMemory(class CKeyValuesSystem *, class KeyValues *); /* linkage=_ZN16CKeyValuesSystem19FreeKeyValuesMemoryEP9KeyValues */
	/* <267d7e> tier0/keyvaluessystem.cpp:606 */
	virtual class HKeySymbol GetSymbolForString(class CKeyValuesSystem *, const char  *, bool); /* linkage=_ZN16CKeyValuesSystem18GetSymbolForStringEPKcb */
	virtual const char  * GetStringForSymbol(class CKeyValuesSystem *, class HKeySymbol); /* linkage=_ZN16CKeyValuesSystem18GetStringForSymbolE10HKeySymbol */
	void GetLocalizedFromANSI(class CKeyValuesSystem *, const char  *, wchar_t *, int); /* linkage=_ZN16CKeyValuesSystem20GetLocalizedFromANSIEPKcPwi */
	void GetANSIFromLocalized(class CKeyValuesSystem *, const wchar_t  *, char *, int); /* linkage=_ZN16CKeyValuesSystem20GetANSIFromLocalizedEPKwPci */
	/* <266ac5> tier0/keyvaluessystem.cpp:391 */
	virtual void AddKeyValuesToMemoryLeakList(class CKeyValuesSystem *, void *, class HKeySymbol); /* linkage=_ZN16CKeyValuesSystem28AddKeyValuesToMemoryLeakListEPv10HKeySymbol */
	/* <266b00> tier0/keyvaluessystem.cpp:416 */
	virtual void RemoveKeyValuesFromMemoryLeakList(class CKeyValuesSystem *, void *); /* linkage=_ZN16CKeyValuesSystem33RemoveKeyValuesFromMemoryLeakListEPv */
	virtual void SetMemoryLeakListContextName(class CKeyValuesSystem *, const void  *, const char  *); /* linkage=_ZN16CKeyValuesSystem28SetMemoryLeakListContextNameEPKvPKc */
	virtual void SetKeyValuesExpressionSymbol(class CKeyValuesSystem *, const char  *, bool); /* linkage=_ZN16CKeyValuesSystem28SetKeyValuesExpressionSymbolEPKcb */
	virtual bool GetKeyValuesExpressionSymbol(class CKeyValuesSystem *, const char  *); /* linkage=_ZN16CKeyValuesSystem28GetKeyValuesExpressionSymbolEPKc */
	/* <267dfe> tier0/keyvaluessystem.cpp:687 */
	virtual class HKeySymbol GetSymbolForStringCaseSensitive(class CKeyValuesSystem *, class HKeySymbol &, const char  *, bool); /* linkage=_ZN16CKeyValuesSystem31GetSymbolForStringCaseSensitiveER10HKeySymbolPKcb */
	virtual class HKeySymbol GetCaseInsensitiveSymbolFromCaseSensitiveSymbol(class CKeyValuesSystem *, class HKeySymbol); /* linkage=_ZN16CKeyValuesSystem47GetCaseInsensitiveSymbolFromCaseSensitiveSymbolE10HKeySymbol */
	virtual const char  * CopyString(class CKeyValuesSystem *, const char  *); /* linkage=_ZN16CKeyValuesSystem10CopyStringEPKc */
	/* <2694c8> tier0/keyvaluessystem.cpp:887 */
	virtual void ReleaseStringCopy(class CKeyValuesSystem *, const char  *); /* linkage=_ZN16CKeyValuesSystem17ReleaseStringCopyEPKc */
	virtual const wchar_t  * CopyWString(class CKeyValuesSystem *, const wchar_t  *); /* linkage=_ZN16CKeyValuesSystem11CopyWStringEPKw */
	/* <266b33> tier0/keyvaluessystem.cpp:938 */
	virtual void ReleaseWStringCopy(class CKeyValuesSystem *, const wchar_t  *); /* linkage=_ZN16CKeyValuesSystem18ReleaseWStringCopyEPKw */
	virtual class CUtlCharConversion * GetCharacterConversion(class CKeyValuesSystem *, bool); /* linkage=_ZN16CKeyValuesSystem22GetCharacterConversionEb */
	virtual HTemporaryKeyValueAllocationScope AllocTemporaryKeyValueAllocationScope(class CKeyValuesSystem *); /* linkage=_ZN16CKeyValuesSystem37AllocTemporaryKeyValueAllocationScopeEv */
	/* <266bb9> tier0/keyvaluessystem.cpp:535 */
	virtual void FreeTemporaryKeyValueAllocationScope(class CKeyValuesSystem *, HTemporaryKeyValueAllocationScope); /* linkage=_ZN16CKeyValuesSystem36FreeTemporaryKeyValueAllocationScopeEP35HTemporaryKeyValueAllocationScope__ */
	virtual HTemporaryKeyValueAllocationScope SetTemporaryKeyValueAllocationScope(class CKeyValuesSystem *, HTemporaryKeyValueAllocationScope); /* linkage=_ZN16CKeyValuesSystem35SetTemporaryKeyValueAllocationScopeEP35HTemporaryKeyValueAllocationScope__ */
	/* <267065> tier0/keyvaluessystem.cpp:979 */
	int CaseInsensitiveHash(class CKeyValuesSystem *, const char  *, int); /* linkage=_ZN16CKeyValuesSystem19CaseInsensitiveHashEPKci */
	const char  * FindOrInsertSharedString(class CKeyValuesSystem *, const char  *, size_t); /* linkage=_ZN16CKeyValuesSystem24FindOrInsertSharedStringEPKcm */
	void ReleaseSharedString(class CKeyValuesSystem *, const char  *, size_t); /* linkage=_ZN16CKeyValuesSystem19ReleaseSharedStringEPKcm */
} __attribute__((__aligned__(8)));

// <0025D91D> tier0/keyvaluessystem.cpp:198
void IndexedString_t::IndexedString_t()
{
} /* size: 0 */

// <0025D901> tier0/keyvaluessystem.cpp:198
inline void IndexedString_t::IndexedString_t()
{
} /* size: 0 */

// <00265A3C> tier0/keyvaluessystem.cpp:236
void ReferenceMap_t::ReferenceMap_t()
{
} /* size: 0 */

// <00265A20> tier0/keyvaluessystem.cpp:236
inline void ReferenceMap_t::ReferenceMap_t()
{
} /* size: 0 */

// <00265A09> tier0/keyvaluessystem.cpp:236
void ReferenceMap_t::~ReferenceMap_t()
{
} /* size: 0 */

// <002659ED> tier0/keyvaluessystem.cpp:236
inline void ReferenceMap_t::~ReferenceMap_t()
{
} /* size: 0 */

// <002658B3> tier0/keyvaluessystem.cpp:246
void SharingMap_t::~SharingMap_t()
{
} /* size: 0 */

// <00265897> tier0/keyvaluessystem.cpp:246
inline void SharingMap_t::~SharingMap_t()
{
} /* size: 0 */

// <002659D6> tier0/keyvaluessystem.cpp:248
void SharingMap_t::SharingMap_t()
{
} /* size: 0 */

// <002659BD> tier0/keyvaluessystem.cpp:248
inline void SharingMap_t::SharingMap_t()
{
} /* size: 0 */

// <00264CCB> tier0/keyvaluessystem.cpp:348
// variables: 6
// function calls: 50
void CKeyValuesSystem::CKeyValuesSystem()
{
	{
		unsigned int nStringStackMaxSize; // 365
		char* pszEmpty; // 373
		{
			int i; // 359
		}
	}
	IKeyValuesSystem::IKeyValuesSystem(); // 355
	CUtlMemory<CKeyValuesSystem::hash_item_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CKeyValuesSystem::hash_item_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::CUtlVector(); // 355
	CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::CUtlVector(); // 355
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 69
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 496
	InvalidIndex(void); // 498
	InvalidIndex(void); // 500
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 501
	ResetDbgInfo(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this); // 503
	CUtlRBTree(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this,
			const LessFunc_t& lessfunc);  // 69
	CUtlMap<HKeySymbol, bool, short unsigned int, bool (::CUtlMap(
		LessFunc_t lessfunc);  // 355
	CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Init(); // 178
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::CUtlHashtable(
			int minimumSize);  // 249
	CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::Init(); // 178
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::CUtlHashtable(
			int minimumSize);  // 236
	ReferenceMap_t::ReferenceMap_t(); // 249
	SharingMap_t::SharingMap_t(); // 355
	{
		unsigned int nStringStackMaxSize; // 365
		char* pszEmpty; // 373
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::NumAllocated(); // 782
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::IsGrowable(); // 823
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::Grow(
			int num);  // 806
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::Base(); // 112
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::Base(); // 368
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::AddMultipleToTail(
					int num);  // 358
		{
			int i; // 359
			CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::Count(); // 359
			InvalidIndex(void); // 361
			CUtlMemory<CKeyValuesSystem::hash_item_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::operator[](
					int i);  // 361
			CUtlMemory<CKeyValuesSystem::hash_item_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::operator[](
					int i);  // 362
		}
	}
} /* size: 806, inline expansions: 31 (632 bytes) */

// <00264C89> tier0/keyvaluessystem.cpp:348
// variables: 3
void CKeyValuesSystem::CKeyValuesSystem()
{
	{
		unsigned int nStringStackMaxSize; // 365
		char* pszEmpty; // 373
		{
			int i; // 359
		}
	}
} /* size: 0 */

// <00266AC5> tier0/keyvaluessystem.cpp:391
void CKeyValuesSystem::AddKeyValuesToMemoryLeakList(void* pMem, HKeySymbol name)
{
} /* size: 5 */

// <00266B00> tier0/keyvaluessystem.cpp:416
void CKeyValuesSystem::RemoveKeyValuesFromMemoryLeakList(void* pMem)
{
} /* size: 5 */

// <00264BE0> tier0/keyvaluessystem.cpp:427
void CKeyValuesSystem::SetMemoryLeakListContextName(const void* pMem, const char* name)
{
} /* size: 5 */

// <002639E6> tier0/keyvaluessystem.cpp:455
// variables: 10
// function calls: 75
void CKeyValuesSystem::~CKeyValuesSystem()
{
	{
		{
		}
		{
			int i; // 500
			{
				hash_item_t* pIter; // 502
				{
					hash_item_t* pNext; // 506
				}
			}
		}
	}
	{
		{
		}
		CUtlMemoryPool<KeyValues>::~CUtlMemoryPool(); // 496
		{
			int i; // 500
			CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::Count(); // 500
			{
				hash_item_t* pIter; // 502
				CUtlMemory<CKeyValuesSystem::hash_item_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::operator[](
						int i);  // 502
				{
					hash_item_t* pNext; // 506
					CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::Free(
						hash_item_t* pMem);  // 193
					operator delete(void* p); // 507
				}
			}
		}
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 236
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::Count(); // 897
				CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::IsValid(); // 899
				CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> > >(CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* pMemory); // 902
			}
		}
		CUtlHashtable<CKeyValuesSystem::SharedStringData_t::RemoveAll(); // 188
		ValidateAlignment<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> > >(void); // 508
		CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::~CUtlMemory(); // 188
		CUtlHashtable<CKeyValuesSystem::SharedStringData_t::~CUtlHashtable(); // 236
		ReferenceMap_t::~ReferenceMap_t(); // 246
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 246
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::Count(); // 897
				CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::IsValid(); // 899
				CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> >(CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* pMemory); // 902
			}
		}
		CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::RemoveAll(); // 188
		ValidateAlignment<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t*> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::~CUtlMemory(); // 188
		CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::~CUtlHashtable(); // 246
		SharingMap_t::~SharingMap_t(); // 511
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 511
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 511
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
		Purge(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this); // 509
		ValidateAlignment<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
		~CUtlRBTree(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this); // 47
		CUtlMap<HKeySymbol, bool, short unsigned int, bool (::~CUtlMap()(const HKeySymbol&, const HKeySymbol&)>* this); // 511
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::RemoveAll(); // 1798
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::Purge(); // 903
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::Purge(); // 1799
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::Purge(); // 560
		ValidateAlignment<CKeyValuesSystem::IndexedString_t>(void); // 508
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::Purge(); // 510
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::~CUtlVector(); // 511
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::RemoveAll(); // 1798
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::Purge(); // 903
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::Purge(); // 1799
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::Purge(); // 560
		ValidateAlignment<CKeyValuesSystem::hash_item_t>(void); // 508
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::Purge(); // 510
		CUtlMemory<CKeyValuesSystem::hash_item_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::~CUtlVector(); // 511
	}
} /* size: 0 */

// <0026397A> tier0/keyvaluessystem.cpp:455
// variables: 5
void CKeyValuesSystem::~CKeyValuesSystem()
{
	const char   __FUNCTION__; // 4198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
	}
	{
		int i; // 500
		{
			hash_item_t* pIter; // 502
			{
				hash_item_t* pNext; // 506
			}
		}
	}
} /* size: 0, variables: 1 */

// <002638AB> tier0/keyvaluessystem.cpp:513
// variables: 2
void KVLeak(const char* fmt, ...)
{
	va_list argptr; // 515
	char data; // 516
} /* size: 230, variables: 2 */

// <002637A4> tier0/keyvaluessystem.cpp:528
// variable: 1
// function call: 1
void CKeyValuesSystem::AllocTemporaryKeyValueAllocationScope()
{
	TempKeyValueAllocator_t* pAllocator; // 530
	TempKeyValueAllocator_t::TempKeyValueAllocator_t(); // 530
} /* size: 63, variables: 1, inline expansions: 1 (8 bytes) */

// <00266BB9> tier0/keyvaluessystem.cpp:535
// variable: 1
// function calls: 2
void CKeyValuesSystem::FreeTemporaryKeyValueAllocationScope(HTemporaryKeyValueAllocationScope hScope)
{
	TempKeyValueAllocator_t* pAllocator; // 537
	TempKeyValueAllocator_t::~TempKeyValueAllocator_t(); // 538
	CKeyValuesSystem::FreeTemporaryKeyValueAllocationScope(
						HTemporaryKeyValueAllocationScope hScope);  // 535
} /* size: 49, variables: 1, inline expansions: 2 (37 bytes) */

// <0026373E> tier0/keyvaluessystem.cpp:535
// variable: 1
void CKeyValuesSystem::FreeTemporaryKeyValueAllocationScope(HTemporaryKeyValueAllocationScope hScope)
{
	TempKeyValueAllocator_t* pAllocator; // 537
} /* size: 0, variables: 1 */

// <002636DE> tier0/keyvaluessystem.cpp:541
// variable: 1
void CKeyValuesSystem::SetTemporaryKeyValueAllocationScope(HTemporaryKeyValueAllocationScope hScope)
{
	HTemporaryKeyValueAllocationScope hPrevAllocator; // 543
} /* size: 51, variables: 1 */

// <00266E5E> tier0/keyvaluessystem.cpp:552
// variable: 1
// function calls: 5
void CKeyValuesSystem::AllocKeyValuesMemory()
{
	KeyValues* r; // 572
	CUtlScratchMemoryPool::Alloc(
		int nSizeInBytes);  // 556
	CUtlMemoryPool<KeyValues>::Alloc(); // 572
	ValidateAlignment<KeyValues>(void); // 133
	CUtlMemoryPool<KeyValues>::CUtlMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 569
	CKeyValuesSystem::AllocKeyValuesMemory(); // 552
} /* size: 188, variables: 1, inline expansions: 5 (168 bytes) */

// <002636BA> tier0/keyvaluessystem.cpp:552
// variable: 1
void CKeyValuesSystem::AllocKeyValuesMemory()
{
	KeyValues* r; // 572
} /* size: 0, variables: 1 */

// <00266C98> tier0/keyvaluessystem.cpp:584
// function calls: 2
void CKeyValuesSystem::FreeKeyValuesMemory(KeyValues* pMem)
{
	CUtlMemoryPool<KeyValues>::Free(
		KeyValues* pMem);  // 597
	CKeyValuesSystem::FreeKeyValuesMemory(
				KeyValues* pMem);  // 584
} /* size: 92, inline expansions: 2 (44 bytes) */

// <00263694> tier0/keyvaluessystem.cpp:584
void CKeyValuesSystem::FreeKeyValuesMemory(KeyValues* pMem)
{
} /* size: 0 */

// <00267D7E> tier0/keyvaluessystem.cpp:606
// variables: 3
void CKeyValuesSystem::GetSymbolForString(const char* name, bool bCreate)
{
	int hash; // 613
	hash_item_t* item; // 614
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 616
} /* size: 30, variables: 3 */

// <002670BC> tier0/keyvaluessystem.cpp:606
// variables: 9
// function calls: 44
void CKeyValuesSystem::GetSymbolForString(const char* name, bool bCreate)
{
	int hash; // 613
	hash_item_t* item; // 614
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 616
	CKeyValuesSystem::CaseInsensitiveHash(
				const char* string,
				int iBounds);  // 613
	CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::Count(); // 613
	CUtlMemory<CKeyValuesSystem::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::operator[](
			int i);  // 614
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 617
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 616
	CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::IsValidIndex(
			int i);  // 621
	CMemoryStack::GetBase(); // 621
	CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::operator[](
			int i);  // 621
	{
		int numStringBytes; // 643
		char* pString; // 644
		uint32 nAddedIndex; // 654
		IndexedString_t& indexedEntry; // 655
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 635
		V_strlen(const char* str); // 643
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 647
		{
			int* _pCrash; // 647
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 651
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::NumAllocated(); // 1143
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::Element(
			int i);  // 1148
		HKeySymbol::HKeySymbol(); // 198
		IndexedString_t::IndexedString_t(); // 1479
		Construct<CKeyValuesSystem::IndexedString_t>(IndexedString_t* pMemory); // 1148
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::Base(); // 112
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::Base(); // 368
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::AddToTail(); // 654
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::operator[](
				int i);  // 655
		CMemoryStack::GetBase(); // 656
		HKeySymbol::HKeySymbol(
				uint32 index);  // 657
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::IsValidIndex(
				int i);  // 659
		CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::Alloc(); // 193
		operator new(size_t size); // 662
		{
			int* _pCrash; // 665
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 665
		HKeySymbol::HKeySymbol(
				uint32 index);  // 673
	}
	HKeySymbol::HKeySymbol(
			uint32 index);  // 623
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 682
} /* size: 894, variables: 3, inline expansions: 19 (484 bytes) */

// <002635C4> tier0/keyvaluessystem.cpp:606
// variables: 11
void CKeyValuesSystem::GetSymbolForString(const char* name, bool bCreate)
{
	int hash; // 613
	hash_item_t* item; // 614
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 616
	const char   __FUNCTION__; // 4219
	{
		int numStringBytes; // 643
		char* pString; // 644
		uint32 nAddedIndex; // 654
		IndexedString_t& indexedEntry; // 655
		{
			int* _pCrash; // 647
		}
		{
			int* _pCrash; // 665
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 680
	}
} /* size: 0, variables: 4 */

// <00267DFE> tier0/keyvaluessystem.cpp:687
// variables: 19
// function calls: 79
void CKeyValuesSystem::GetSymbolForStringCaseSensitive(HKeySymbol& hCaseInsensitiveSymbol, const char* name, bool bCreate)
{
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 694
	int hash; // 697
	int numNameStringBytes; // 698
	hash_item_t* item; // 699
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 695
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 694
	CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::Count(); // 697
	CKeyValuesSystem::CaseInsensitiveHash(
				const char* string,
				int iBounds);  // 697
	CUtlMemory<CKeyValuesSystem::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CKeyValuesSystem::hash_item_t, CUtlMemory<CKeyValuesSystem::hash_item_t, int> >::operator[](
			int i);  // 699
	CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::IsValidIndex(
			int i);  // 702
	{
		char* pCompareString; // 704
		int iResult; // 705
		CMemoryStack::GetBase(); // 704
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::operator[](
				int i);  // 704
		{
			uint32* pnCaseResolveIndex; // 717
			V_strlen(const char* str); // 716
			HKeySymbol::HKeySymbol(
					uint32 index);  // 718
			{
				int nAlternativeStringIndex; // 721
				CMemoryStack::GetBase(); // 723
				CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::operator[](
						int i);  // 723
				V_strcmp(const char* s1,
					const char* s2);  // 724
			}
			{
				char* pString; // 761
				uint32 nAddedIndex; // 771
				IndexedString_t& indexedEntry; // 772
				{
					size_t nCaseResolveOffset; // 747
					CMemoryStack::GetBase(); // 747
					CInterlockedIntT<int, 4>::GetRaw(); // 3180
					ThreadInterlockedExchangeAdd(volatile int32* p,
									int32 value);  // 660
					CInterlockedIntT<unsigned int, 4>::AtomicAdd(
							unsigned int add);  // 3189
					CThreadRWLock_FastRead::LockForWrite(
							const char* pFileName,
							int nLineNumber);  // 1074
					CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
							const char* pFileName,
							int nLineNumber);  // 749
					CMemoryStack::GetBase(); // 752
				}
				{
					int* _pCrash; // 764
				}
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 764
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 768
				CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::NumAllocated(); // 1143
				CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::Element(
					int i);  // 1148
				HKeySymbol::HKeySymbol(); // 198
				IndexedString_t::IndexedString_t(); // 1479
				Construct<CKeyValuesSystem::IndexedString_t>(IndexedString_t* pMemory); // 1148
				CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::Base(); // 112
				CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::Base(); // 368
				CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::AddToTail(); // 771
				CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::operator[](
						int i);  // 772
				CMemoryStack::GetBase(); // 773
				HKeySymbol::HKeySymbol(
						uint32 index);  // 777
			}
			HKeySymbol::HKeySymbol(
					uint32 index);  // 740
		}
		HKeySymbol::HKeySymbol(
				uint32 index);  // 709
		HKeySymbol::HKeySymbol(
				uint32 index);  // 710
	}
	{
		int numStringBytes; // 800
		char* pString; // 801
		uint32 nAddedIndex; // 811
		IndexedString_t& indexedEntry; // 812
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 792
		V_strlen(const char* str); // 800
		{
			int* _pCrash; // 804
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 804
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 808
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::NumAllocated(); // 1143
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::Element(
			int i);  // 1148
		HKeySymbol::HKeySymbol(); // 198
		IndexedString_t::IndexedString_t(); // 1479
		Construct<CKeyValuesSystem::IndexedString_t>(IndexedString_t* pMemory); // 1148
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::Base(); // 112
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::Base(); // 368
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::AddToTail(); // 811
		CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::operator[](
				int i);  // 812
		CMemoryStack::GetBase(); // 813
		HKeySymbol::HKeySymbol(
				uint32 index);  // 814
		CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::IsValidIndex(
				int i);  // 816
		CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::Alloc(); // 193
		operator new(size_t size); // 819
		{
			int* _pCrash; // 822
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 822
		HKeySymbol::HKeySymbol(
				uint32 index);  // 830
		HKeySymbol::HKeySymbol(
				uint32 index);  // 831
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 840
	CKeyValuesSystem::GetSymbolForStringCaseSensitive(
					HKeySymbol& hCaseInsensitiveSymbol,
					const char* name,
					bool bCreate);  // 687
} /* size: 0, variables: 4, inline expansions: 16 (2384 bytes) */

// <00263447> tier0/keyvaluessystem.cpp:687
// variables: 21
void CKeyValuesSystem::GetSymbolForStringCaseSensitive(HKeySymbol& hCaseInsensitiveSymbol, const char* name, bool bCreate)
{
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 694
	int hash; // 697
	int numNameStringBytes; // 698
	hash_item_t* item; // 699
	const char   __FUNCTION__; // 4282
	{
		char* pCompareString; // 704
		int iResult; // 705
		{
			uint32* pnCaseResolveIndex; // 717
			{
				int nAlternativeStringIndex; // 721
			}
			{
				char* pString; // 761
				uint32 nAddedIndex; // 771
				IndexedString_t& indexedEntry; // 772
				{
					size_t nCaseResolveOffset; // 747
				}
				{
					int* _pCrash; // 764
				}
			}
		}
	}
	{
		int numStringBytes; // 800
		char* pString; // 801
		uint32 nAddedIndex; // 811
		IndexedString_t& indexedEntry; // 812
		{
			int* _pCrash; // 804
		}
		{
			int* _pCrash; // 822
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 838
	}
} /* size: 0, variables: 5 */

// <002630D7> tier0/keyvaluessystem.cpp:842
// variables: 3
// function calls: 11
void CKeyValuesSystem::GetCaseInsensitiveSymbolFromCaseSensitiveSymbol(HKeySymbol hCaseSensitiveSymbol)
{
	const char   __FUNCTION__; // 4303
	HKeySymbol hRet; // 850
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 844
	}
	HKeySymbol::operator uint32(); // 844
	HKeySymbol::HKeySymbol(
			uint32 index);  // 844
	HKeySymbol::HKeySymbol(
			uint32 index);  // 846
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 849
	CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::operator[](
			int i);  // 850
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 851
} /* size: 0, variables: 2, inline expansions: 11 (158 bytes) */

// <00262EC7> tier0/keyvaluessystem.cpp:855
// variables: 2
// function calls: 4
void CKeyValuesSystem::CopyString(const char* pSource)
{
	int nLength; // 857
	{
		char* pRet; // 862
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 862
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 863
	}
	V_strlen(const char* str); // 857
} /* size: 229, variables: 1, inline expansions: 1 (17 bytes) */

// <002694C8> tier0/keyvaluessystem.cpp:887
// variable: 1
// function calls: 2
void CKeyValuesSystem::ReleaseStringCopy(const char* pCopiedString)
{
	int nLength; // 893
	V_strlen(const char* str); // 893
	CKeyValuesSystem::ReleaseStringCopy(
				const char* pCopiedString);  // 887
} /* size: 84, variables: 1, inline expansions: 2 (49 bytes) */

// <00262E94> tier0/keyvaluessystem.cpp:887
// variable: 1
void CKeyValuesSystem::ReleaseStringCopy(const char* pCopiedString)
{
	int nLength; // 893
} /* size: 0, variables: 1 */

// <00262C14> tier0/keyvaluessystem.cpp:913
// variables: 3
// function calls: 6
void CKeyValuesSystem::CopyWString(const wchar_t* pSource)
{
	int nLength; // 915
	wchar_t* pRet; // 933
	{
		wchar_t* pRet; // 921
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 921
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 922
	}
	V_wcslen(const wchar_t* pwch); // 915
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 934
} /* size: 216, variables: 2, inline expansions: 3 (44 bytes) */

// <00266B33> tier0/keyvaluessystem.cpp:938
// function call: 1
void CKeyValuesSystem::ReleaseWStringCopy(const wchar_t* pCopiedWString)
{
	CKeyValuesSystem::ReleaseWStringCopy(
				const wchar_t* pCopiedWString);  // 938
} /* size: 69, inline expansions: 1 (23 bytes) */

// <00262BEE> tier0/keyvaluessystem.cpp:938
void CKeyValuesSystem::ReleaseWStringCopy(const wchar_t* pCopiedWString)
{
} /* size: 0 */

// <00262B95> tier0/keyvaluessystem.cpp:952
void CKeyValuesSystem::GetCharacterConversion(bool bHasEscapeSequences)
{
} /* size: 29 */

// <002627FC> tier0/keyvaluessystem.cpp:960
// variables: 3
// function calls: 12
void CKeyValuesSystem::GetStringForSymbol(HKeySymbol symbol)
{
	const char   __FUNCTION__; // 4219
	const char* pRetVal; // 969
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 962
	}
	HKeySymbol::operator uint32(); // 962
	HKeySymbol::HKeySymbol(
			uint32 index);  // 962
	HKeySymbol::HKeySymbol(
			uint32 index);  // 963
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 968
	CMemoryStack::GetBase(); // 969
	CUtlMemory<CKeyValuesSystem::IndexedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CKeyValuesSystem::IndexedString_t, CUtlMemory<CKeyValuesSystem::IndexedString_t, int> >::operator[](
			int i);  // 969
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 970
} /* size: 0, variables: 2, inline expansions: 12 (169 bytes) */

// <00267065> tier0/keyvaluessystem.cpp:979
// variable: 1
void CKeyValuesSystem::CaseInsensitiveHash(const char* string, int iBounds)
{
	unsigned int hash; // 981
} /* size: 0, variables: 1 */

// <00262043> tier0/keyvaluessystem.cpp:1002
// variables: 3
// function calls: 23
void CKeyValuesSystem::SetKeyValuesExpressionSymbol(const char* name, bool bValue)
{
	HKeySymbol hSym; // 1010
	CKeyValuesSystem::GetSymbolForString(
				const char* name,
				bool bCreate);  // 1010
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 1013
	FindAltKeyType<HKeySymbol>(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMe this,
					const HKeySymbol& search);  // 243
	CUtlMap<HKeySymbol, bool, short unsigned int, bool (::Find(
		const KeyType_t& key);  // 387
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this,
		short unsigned int i);  // 90
	CUtlMap<HKeySymbol, bool, short unsigned int, bool (::Element(
		IndexType_t i);  // 390
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMe this,
			short unsigned int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this,
		short unsigned int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMe this,
			short unsigned int i);  // 1677
	FindInsertionPosition(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this,
				const Node_t& insert,
				bool bCheckForDuplicates,
				short unsigned int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		short unsigned int newNode; // 1709
		{
		}
	}
	{
		short unsigned int newNode; // 1696
	}
	Insert(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this,
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<HKeySymbol, bool, short unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 394
	CUtlMap<HKeySymbol, bool, short unsigned int, bool (::InsertOrReplace(
			const KeyType_t& key,
			const ElemType_t& insert);  // 1014
} /* size: 0, variables: 1, inline expansions: 23 (1181 bytes) */

// <00261785> tier0/keyvaluessystem.cpp:1019
// variables: 4
// function calls: 26
void CKeyValuesSystem::GetKeyValuesExpressionSymbol(const char* name)
{
	HKeySymbol hSym; // 1027
	{
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_1030; // 1030
		IndexType_t idx; // 1031
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
		CThreadRWLock_FastRead::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 951
		Lock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
				const CThreadRWLock_FastRead& lock,
				const char* pFilename,
				int nLineNumber);  // 1030
		FindAltKeyType<HKeySymbol>(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMe this,
						const HKeySymbol& search);  // 243
		CUtlMap<HKeySymbol, bool, short unsigned int, bool (::Find(
			const KeyType_t& key);  // 1031
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 539
		Element(const CUtlRBTree<CUtlMap<HKeySymbol, bool>::Node_t, short unsigned int, CUtlMap<HKeySymbol, bool>::CKeyLess, CUtlMemory<U this,
			short unsigned int i);  // 90
		CUtlMap<HKeySymbol, bool, short unsigned int, bool (::Element(
			IndexType_t i);  // 1035
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1037
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1037
	}
	{
		ConVarRef cvRef; // 1066
		ConVarRef::CheckAccess(); // 129
		ConVarRef::GetInt(); // 48
		ConVarRef::GetBool(); // 1068
	}
	CKeyValuesSystem::GetSymbolForString(
				const char* name,
				bool bCreate);  // 1027
	HKeySymbol::HKeySymbol(
			uint32 index);  // 1028
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1064
} /* size: 532, variables: 1, inline expansions: 3 (30 bytes) */

// <00260FEB> tier0/keyvaluessystem.cpp:1079
// variables: 3
// function calls: 25
void ReferenceMap_t::AddReference(SharedStringData_t* pData)
{
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 1081
	HashElementHandle_t hElem; // 1084
	CInterlockedInt* pEntry; // 1094
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 1081
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 1082
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::Find(
		KeyArg_t k);  // 1084
	CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::operator[](
			int i);  // 295
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::Element(
		handle_t idx);  // 1094
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 1095
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 1096
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 1088
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 1091
	CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::operator[](
			int i);  // 720
	CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t::CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> >(
											SharedStringData_t* const& k,
											const CInterlockedIntT<int, 4>& v);  // 1514
	Construct<CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> >, CKeyValuesSystem::SharedStringData_t*&, const CInterlockedIntT<int, 4>&>(CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* pMemory); // 720
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::DoInsert<CKeyValuesSystem::SharedStringData_t*>(
							SharedStringData_t* k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::DoInsert<CKeyValuesSystem::SharedStringData_t*>(
							SharedStringData_t* k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::Insert(
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 1091
} /* size: 429, variables: 3, inline expansions: 25 (913 bytes) */

// <002608A8> tier0/keyvaluessystem.cpp:1098
// variables: 6
// function calls: 25
void ReferenceMap_t::RemoveReference(SharedStringData_t* pData)
{
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 1100
	HashElementHandle_t hElem; // 1103
	CInterlockedInt* pEntry; // 1109
	int nNewRefCount; // 1111
	const char   __FUNCTION__; // 4177
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1142
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 1101
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 1100
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::Find(
		KeyArg_t k);  // 1103
	CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::operator[](
			int i);  // 295
	CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t::GetValue(); // 295
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::Element(
		handle_t idx);  // 1109
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 1111
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 1124
	CInterlockedIntT<int, 4>::GetRaw(); // 1141
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::Find(
		KeyArg_t k);  // 1127
	CUtlMemory<CUtlHashtableEntry<CKeyValuesSystem::SharedStringData_t::operator[](
			int i);  // 295
	CUtlHashtable<CKeyValuesSystem::SharedStringData_t::Element(
		handle_t idx);  // 1130
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 1152
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 1115
} /* size: 0, variables: 5, inline expansions: 25 (756 bytes) */

// <00260705> tier0/keyvaluessystem.cpp:1154
// variables: 4
// function calls: 4
void SharingMap_t::IncrementRefCount(SharedStringData_t* pEntry)
{
	CInterlockedUInt* pAsInterlocked; // 1158
	union InterlockHelper_t interlockRead; // 1160
	union InterlockHelper_t interlockChange; // 1160
	bool bHaveAddedOverflowReference; // 1163
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1161
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1167
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 597
	CInterlockedIntT<unsigned int, 4>::AssignIf(
		unsigned int conditionValue,
		unsigned int newValue);  // 1184
} /* size: 144, variables: 4, inline expansions: 4 (24 bytes) */

// <0025FC22> tier0/keyvaluessystem.cpp:1211
// variables: 9
// function calls: 29
void CKeyValuesSystem::FindOrInsertSharedString(const char* pSource, size_t nCharacterCount)
{
	uint32 nHash; // 1213
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 1215
	HashElementHandle_t hElem; // 1218
	SharedStringData_t* pEntry; // 1228
	const char   __FUNCTION__; // 4261
	{
		SharedStringData_t* pNew; // 1235
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1233
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1236
		}
		Max<long unsigned int>(const long unsigned int& val1,
					const long unsigned int& val2);  // 1235
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1238
		CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::operator[](
				int i);  // 295
		CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Element(
			handle_t idx);  // 1239
	}
	{
		char* pNew; // 1261
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1262
	}
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Find(
		KeyArg_t k);  // 1218
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 1215
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 1216
	CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::operator[](
			int i);  // 295
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Element(
		handle_t idx);  // 1228
	V_strcmp(const char* s1,
		const char* s2);  // 1248
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 1270
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 1222
	CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t::CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(
										const unsigned int& k,
										SharedStringData_t* const& v);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>, unsigned int&, CKeyValuesSystem::SharedStringData_t*&>(CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* pMemory); // 720
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::DoInsert<unsigned int>(
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::DoInsert<unsigned int>(
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 249
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Insert(
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 1225
} /* size: 0, variables: 5, inline expansions: 22 (871 bytes) */

// <0025F386> tier0/keyvaluessystem.cpp:1272
// variables: 11
// function calls: 22
void CKeyValuesSystem::ReleaseSharedString(const char* pShared, size_t nCharacterCount)
{
	uint32 nHash; // 1274
	CSemiAutoRWLockT<CThreadRWLock_FastRead> RWLockHelper; // 1276
	HashElementHandle_t hElem; // 1279
	const char   __FUNCTION__; // 4240
	SharedStringData_t* pEntry; // 1297
	CInterlockedUInt* pAsInterlocked; // 1317
	union InterlockHelper_t interlockRead; // 1319
	union InterlockHelper_t interlockChange; // 1319
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1283
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1302
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1336
	}
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Find(
		KeyArg_t k);  // 1279
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 1276
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 1277
	CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::operator[](
			int i);  // 295
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Element(
		handle_t idx);  // 1297
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 1397
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1320
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1324
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 597
	CInterlockedIntT<unsigned int, 4>::AssignIf(
		unsigned int conditionValue,
		unsigned int newValue);  // 1371
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 1332
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Find(
		KeyArg_t k);  // 1335
	CUtlMemory<CUtlHashtableEntry<unsigned int, CKeyValuesSystem::SharedStringData_t::operator[](
			int i);  // 295
	CUtlHashtable<unsigned int, CKeyValuesSystem::SharedStringData_t::Element(
		handle_t idx);  // 1337
} /* size: 0, variables: 8, inline expansions: 22 (651 bytes) */

