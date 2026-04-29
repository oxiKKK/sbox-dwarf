
//
// public/tier0/globallist.h
//
//	referenced by: libtier0.so
//
//	functions: 25
//	class: 1
//	structs: 3
//

// <0037DAF4> ../public/tier0/globallist.h:17
// member function: 1
// member variables: 2
// struct size: 16
struct GlobalListEntryBase_t {
	/* ../public/tier0/globallist.h:19 */
	void GlobalListEntryBase_t(GlobalListEntryBase_t* );
	GlobalListEntryBase_t * m_pA; /* 0 8 */
	GlobalListEntryBase_t * m_pB; /* 8 8 */
};

// <0038FC8C> ../public/tier0/globallist.h:19
void GlobalListEntryBase_t::GlobalListEntryBase_t()
{
} /* size: 0 */

// <0038FC73> ../public/tier0/globallist.h:19
inline void GlobalListEntryBase_t::GlobalListEntryBase_t()
{
} /* size: 0 */

// <0037DB48> ../public/tier0/globallist.h:24
// member function: 1
// member variables: 2
// struct size: 24
struct GlobalListEntryTree_t : public GlobalListEntryBase_t {
public:
	/* struct GlobalListEntryBase_t <ancestor>; */ /* 0 16 */
	/* ../public/tier0/globallist.h:26 */
	void GlobalListEntryTree_t(GlobalListEntryTree_t* );
	GlobalListEntryTree_t * m_pParent; /* 16 8 */
};

// <0038FC5C> ../public/tier0/globallist.h:26
void GlobalListEntryTree_t::GlobalListEntryTree_t()
{
} /* size: 0 */

// <0038FC43> ../public/tier0/globallist.h:26
inline void GlobalListEntryTree_t::GlobalListEntryTree_t()
{
} /* size: 0 */

// <00386706> ../public/tier0/globallist.h:31
void GlobalListTypelessRegistry_t::GlobalListTypelessRegistry_t()
{
} /* size: 0 */

// <003866E9> ../public/tier0/globallist.h:31
inline void GlobalListTypelessRegistry_t::GlobalListTypelessRegistry_t()
{
} /* size: 0 */

// <003865F0> ../public/tier0/globallist.h:31
// function calls: 3
void GlobalListTypelessRegistry_t::~GlobalListTypelessRegistry_t()
{
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 31
} /* size: 72, inline expansions: 3 (99 bytes) */

// <003865D3> ../public/tier0/globallist.h:31
inline void GlobalListTypelessRegistry_t::~GlobalListTypelessRegistry_t()
{
} /* size: 0 */

// <0037DB96> ../public/tier0/globallist.h:31
// member functions: 3
// member variables: 3
// struct size: 424
struct GlobalListTypelessRegistry_t {
	CThreadRWLock_FastRead listRWLock __attribute__((__aligned__(8))); /* 0 408 */
	GlobalListEntryBase_t * pListHead; /* 408 8 */
	GlobalListEntryBase_t * pListTail; /* 416 8 */
	/* ../public/tier0/globallist.h:47 */
	void InitRegistry(GlobalListTypelessRegistry_t* );
	void ~GlobalListTypelessRegistry_t(GlobalListTypelessRegistry_t* );
	void GlobalListTypelessRegistry_t(GlobalListTypelessRegistry_t* );
} __attribute__((__aligned__(8)));

// <0038FC2A> ../public/tier0/globallist.h:47
inline void GlobalListTypelessRegistry_t::InitRegistry()
{
} /* size: 0 */

// <003850F6> ../public/tier0/globallist.h:64
inline void GetRegistry(void)
{
} /* size: 0 */

// <0038FBFB> ../public/tier0/globallist.h:159
inline void AddToSortedRegistry_R(GlobalListEntryTree_t* pInsert, int (*pFNSort)(GlobalListEntryTree_t *, GlobalListEntryTree_t *), GlobalListEntryTree_t* pIter)
{
} /* size: 0 */

// <0038FB4A> ../public/tier0/globallist.h:189
inline void AddToSortedRegistry(GlobalListEntryTree_t* pInsert, int (*pFNSort)(GlobalListEntryTree_t *, GlobalListEntryTree_t *), GlobalListTypelessRegistry_t& registry)
{
	{
	}
} /* size: 0 */

// <00385150> ../public/tier0/globallist.h:262
void CGlobalListBase<CGlobalListRegistryItem::CGlobalListBase()
{
} /* size: 0 */

// <00385137> ../public/tier0/globallist.h:262
inline void CGlobalListBase<CGlobalListRegistryItem::CGlobalListBase()
{
} /* size: 0 */

// <00383E98> ../public/tier0/globallist.h:271
inline void CGlobalListBase<CGlobalListRegistryItem::AddToRegistry<GlobalRegistrySortCallback>(GlobalListTypelessRegistry_t& registry)
{
} /* size: 0 */

// <003827A9> ../public/tier0/globallist.h:286
inline void SortWrapper<GlobalRegistrySortCallback>(GlobalListEntryTree_t* pA, GlobalListEntryTree_t* pB)
{
} /* size: 0 */

// <00382726> ../public/tier0/globallist.h:292
// variable: 1
inline void SearchList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor, GlobalListEntryTree_t* pIter)
{
	int nResult; // 294
} /* size: 0, variables: 1 */

// <003918E5> ../public/tier0/globallist.h:318
// variables: 17
// function calls: 17
void IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor, GlobalListEntryTree_t* pIter)
{
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
} /* size: 571, inline expansions: 17 (2353 bytes) */

// <00382761> ../public/tier0/globallist.h:318
inline void IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor, GlobalListEntryTree_t* pIter)
{
} /* size: 0 */

// <00391D0C> ../public/tier0/globallist.h:343
// variables: 8
// function calls: 14
void SearchList<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor, GlobalListTypelessRegistry_t& registry, bool bIterateFromBeginning)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 345
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 294
	SearchList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
													GlobalListEntryTree_t* pIter); // 355
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 359
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	operator()(const class* __closure,
			CGlobalListRegistryItem* pIter); // 325
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 320
	IterateList_R<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor,
														GlobalListEntryTree_t* pIter); // 351
} /* size: 412, inline expansions: 14 (723 bytes) */

// <00383E5D> ../public/tier0/globallist.h:343
inline void SearchList<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor, GlobalListTypelessRegistry_t& registry, bool bIterateFromBeginning)
{
} /* size: 0 */

// <0038676E> ../public/tier0/globallist.h:426
void CGlobalList<CGlobalListRegistryItem::CGlobalList()
{
} /* size: 0 */

// <00386751> ../public/tier0/globallist.h:426
inline void CGlobalList<CGlobalListRegistryItem::CGlobalList()
{
} /* size: 0 */

// <0037EEBB> ../public/tier0/globallist.h:426
// member functions: 10
// member variable: 1
// class size: 24
class CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback> : public CGlobalListBase<CGlobalListRegistryItem*, true> {
public:
	/* class CGlobalListBase<CGlobalListRegistryItem*, true> <ancestor>; */ /* 0 24 */
	/* ../public/tier0/globallist.h:434 */
	void RegisterInList(CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback>* );
	/* ../public/tier0/globallist.h:439 */
	void UnregisterFromList(CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback>* );
	/* ../public/tier0/globallist.h:444 */
	void ~CGlobalList(CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback>* );
	/* ../public/tier0/globallist.h:457 */
	void SearchList<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& );
	void CGlobalList(CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback>* );
	void RegisterInList(class CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback> *); /* linkage=_ZN11CGlobalListIP23CGlobalListRegistryItemLy2822503234662103753ELb0EXadL_Z26GlobalRegistrySortCallbackS1_S1_EEE14RegisterInListEv */
	void UnregisterFromList(class CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback> *); /* linkage=_ZN11CGlobalListIP23CGlobalListRegistryItemLy2822503234662103753ELb0EXadL_Z26GlobalRegistrySortCallbackS1_S1_EEE18UnregisterFromListEv */
	void ~CGlobalList(class CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback> *); /* linkage=_ZN11CGlobalListIP23CGlobalListRegistryItemLy2822503234662103753ELb0EXadL_Z26GlobalRegistrySortCallbackS1_S1_EEED4Ev */
	void SearchList<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class  &); /* linkage=_ZN11CGlobalListIP23CGlobalListRegistryItemLy2822503234662103753ELb0EXadL_Z26GlobalRegistrySortCallbackS1_S1_EEE10SearchListIRZNS0_12FindOrInsertEyEUlS1_E_EEvOT_ */
	void CGlobalList(class CGlobalList<CGlobalListRegistryItem*, 2822503234662103753, false, GlobalRegistrySortCallback> *); /* linkage=_ZN11CGlobalListIP23CGlobalListRegistryItemLy2822503234662103753ELb0EXadL_Z26GlobalRegistrySortCallbackS1_S1_EEEC4Ev */
};

// <0038511E> ../public/tier0/globallist.h:434
inline void CGlobalList<CGlobalListRegistryItem::RegisterInList()
{
} /* size: 0 */

// <003850FD> ../public/tier0/globallist.h:457
inline void SearchList<CGlobalListRegistryItem::FindOrInsert(uint64)::<lambda(CGlobalListRegistryItem*)>&>(class& functor)
{
} /* size: 0 */

