
//
// public/tier0/stackstats_base.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 32
//	classes: 4
//	structs: 2
//

// <000FADEC> ../public/tier0/stackstats_base.h:78
// member variables: 3
// struct size: 24
struct CallStackStatsGatherer_SharedInstanceData_t {
	const CallStackGatherer_FunctionTable * pFunctionTable; /* 0 8 */
	const char * const * pImportList; /* 8 8 */
	const char * const * pExportList; /* 16 8 */
};

// <00474FD2> ../public/tier0/stackstats_base.h:87
// member functions: 15
// struct size: 1
struct StackStatsBareBonesHelpers<CNewDeleteAllocator> {
	/* ../public/tier0/stackstats_base.h:220 */
	class CBareVector<CCallStackStatsGatherer_Base*> : public CBareVector_SizedImpl<CCallStackStatsGatherer_Base*> {
	public:
		/* class CBareVector_SizedImpl<CCallStackStatsGatherer_Base*> <ancestor>; */ /* 0 24 */
		void ~CBareVector(CBareVector<CCallStackStatsGatherer_Base*>* );
		void CBareVector(CBareVector<CCallStackStatsGatherer_Base*>* );
	};
	/* ../public/tier0/stackstats_base.h:90 */
	class CBareVector_Sized<1024> {
		/* ../public/tier0/stackstats_base.h:95 */
		class CBareVector_SizedImpl<CCallStackStatsGatherer_Base*> {
			/* ../public/tier0/stackstats_base.h:98 */
			void CBareVector_SizedImpl(CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
			/* ../public/tier0/stackstats_base.h:104 */
			void ~CBareVector_SizedImpl(CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
			/* ../public/tier0/stackstats_base.h:109 */
			uint32 Count(const CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
			/* ../public/tier0/stackstats_base.h:114 */
			CCallStackStatsGatherer_Base** Base(CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
			/* ../public/tier0/stackstats_base.h:119 */
			CCallStackStatsGatherer_Base* const* Base(const CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
			/* ../public/tier0/stackstats_base.h:124 */
			CCallStackStatsGatherer_Base* & operator[](CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* , uint32);
			/* ../public/tier0/stackstats_base.h:129 */
			CCallStackStatsGatherer_Base* const& operator[](const CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* , uint32);
			/* ../public/tier0/stackstats_base.h:134 */
			uint32 AddToTail_NoConstruct(CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
			/* ../public/tier0/stackstats_base.h:144 */
			uint32 AddToTail(CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* , CCallStackStatsGatherer_Base* const& );
			/* ../public/tier0/stackstats_base.h:151 */
			bool NewElementWillInvalidatePointers(const CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
			/* ../public/tier0/stackstats_base.h:156 */
			void Remove(CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* , uint32);
			/* ../public/tier0/stackstats_base.h:163 */
			void RemoveAll(CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
		private:
			/* ../public/tier0/stackstats_base.h:173 */
			void Grow(CBareVector_SizedImpl<CCallStackStatsGatherer_Base*>* );
			uint32 m_nElements; /* 0 4 */
			uint32 m_nAllocated; /* 4 4 */
			CCallStackStatsGatherer_Base * * m_pElements; /* 8 8 */
			CNewDeleteAllocator<unsigned char> m_Allocator; /* 16 0 */
		};
		/* tag__fprintf: const_type tag not supported! */;
	};
};

// <0047716A> ../public/tier0/stackstats_base.h:98
void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::CBareVector_SizedImpl()
{
} /* size: 0 */

// <00477151> ../public/tier0/stackstats_base.h:98
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::CBareVector_SizedImpl()
{
} /* size: 0 */

// <0047713A> ../public/tier0/stackstats_base.h:104
void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::~CBareVector_SizedImpl()
{
} /* size: 0 */

// <00477121> ../public/tier0/stackstats_base.h:104
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::~CBareVector_SizedImpl()
{
} /* size: 0 */

// <00477108> ../public/tier0/stackstats_base.h:109
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count()
{
} /* size: 0 */

// <004770E5> ../public/tier0/stackstats_base.h:124
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::operator[](uint32 i)
{
} /* size: 0 */

// <00476A3A> ../public/tier0/stackstats_base.h:134
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::AddToTail_NoConstruct()
{
} /* size: 0 */

// <00477082> ../public/tier0/stackstats_base.h:144
// variable: 1
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::AddToTail(CCallStackStatsGatherer_Base* const& val)
{
	uint32 nIndex; // 146
} /* size: 0, variables: 1 */

// <0047705D> ../public/tier0/stackstats_base.h:156
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Remove(uint32 nIndex)
{
} /* size: 0 */

// <00476A6C> ../public/tier0/stackstats_base.h:163
// variable: 1
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::RemoveAll()
{
	{
		uint32 i; // 165
	}
} /* size: 0 */

// <00476554> ../public/tier0/stackstats_base.h:173
// variables: 3
inline void CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Grow()
{
	{
		uint32 nTestVal; // 181
	}
	{
		size_t nCurMemSize; // 199
		CCallStackStatsGatherer_Base** pNewMem; // 202
	}
} /* size: 0 */

// <004792B6> ../public/tier0/stackstats_base.h:220
void CBareVector<CCallStackStatsGatherer_Base::CBareVector()
{
} /* size: 0 */

// <0047929A> ../public/tier0/stackstats_base.h:220
inline void CBareVector<CCallStackStatsGatherer_Base::CBareVector()
{
} /* size: 0 */

// <004791D7> ../public/tier0/stackstats_base.h:220
// function calls: 3
void CBareVector<CCallStackStatsGatherer_Base::~CBareVector()
{
	CBareVector_SizedImpl<CCallStackStatsGatherer_Base::RemoveAll(); // 106
	CNewDeleteAllocator<unsigned char>::~CNewDeleteAllocator(); // 107
	CBareVector_SizedImpl<CCallStackStatsGatherer_Base::~CBareVector_SizedImpl(); // 220
} /* size: 0, inline expansions: 3 (0 bytes) */

// <004791BB> ../public/tier0/stackstats_base.h:220
inline void CBareVector<CCallStackStatsGatherer_Base::~CBareVector()
{
} /* size: 0 */

// <000FAE32> ../public/tier0/stackstats_base.h:227
// member functions: 62
// member variables: 9
// class size: 1,680
class CCallStackStatsGatherer_Base {
	/* ../public/tier0/stackstats_base.h:233 */
	void CCallStackStatsGatherer_Base(CCallStackStatsGatherer_Base* , const CallStackGatherer_FunctionTable* , const char* const* , const char* const* );
	/* ../public/tier0/stackstats_base.h:240 */
	uint32 GetCapturedCallStackDepth(const CCallStackStatsGatherer_Base* );
	/* ../public/tier0/stackstats_base.h:245 */
	uint32 GetStatStructSize(const CCallStackStatsGatherer_Base* );
	/* ../public/tier0/stackstats_base.h:250 */
	const char* GetStatStructName(const CCallStackStatsGatherer_Base* );
	/* ../public/tier0/stackstats_base.h:255 */
	void GetVectorData_StatEntries(const CCallStackStatsGatherer_Base* , const void* & , uint32& );
	/* ../public/tier0/stackstats_base.h:260 */
	void GetVectorData_StoredSubTrees(const CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base* const* & , uint32& );
	/* ../public/tier0/stackstats_base.h:265 */
	void EvaluateGathererLinkage(CCallStackStatsGatherer_Base* , CCallStackStatsGatherer_Base& );
	/* ../public/tier0/stackstats_base.h:270 */
	void OnGathererRemoved(CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base& );
	/* ../public/tier0/stackstats_base.h:275 */
	void OnLinkedGathererPushed(CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base& , const CCallStackMarkerBase& );
	/* ../public/tier0/stackstats_base.h:280 */
	void OnLinkedGathererPopped(CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base& );
	/* ../public/tier0/stackstats_base.h:230 */
	typedef void StatStructType_t;
	/* ../public/tier0/stackstats_base.h:285 */
	StatStructType_t* LockEntry(CCallStackStatsGatherer_Base* , uint32);
	/* ../public/tier0/stackstats_base.h:290 */
	void UnlockEntry(CCallStackStatsGatherer_Base* , uint32);
	/* ../public/tier0/stackstats_base.h:295 */
	void LockEverything(const CCallStackStatsGatherer_Base* , bool);
	/* ../public/tier0/stackstats_base.h:311 */
	void PopFromLinkedGatherers(const CCallStackStatsGatherer_Base* );
	/* ../public/tier0/stackstats_base.h:316 */
	void RemoveSharedInstanceData(CCallStackStatsGatherer_Base* , const CallStackStatsGatherer_SharedInstanceData_t& );
	/* ../public/tier0/stackstats_base.h:432 */
	const CallStackGatherer_FunctionTable* GetSTUBFunctionTable(void);
protected:
	const CallStackGatherer_FunctionTable * m_pFunctionTable; /* 0 8 */
	/* ../public/tier0/stackstats_base.h:231 */
	typedef struct CThreadRWLock_FastRead RWLockType_t;
	RWLockType_t m_StatEntryLock __attribute__((__aligned__(8))); /* 8 408 */
	RWLockType_t m_IndexMapRWLock __attribute__((__aligned__(8))); /* 416 408 */
	RWLockType_t m_ThreadInfoLock __attribute__((__aligned__(8))); /* 824 408 */
	RWLockType_t m_StoredSubTreeLock __attribute__((__aligned__(8))); /* 1232 408 */
	uint8 * m_pStatStructDescription; /* 1640 8 */
	uint32 m_nStatStructDescriptionSize; /* 1648 4 */
	const char * const * m_pGathererImportList; /* 1656 8 */
	const char * const * m_pGathererExportList; /* 1664 8 */
	/* ../public/tier0/stackstats_base.h:453 */
	bool CompareStringList(const char* const* , const char* const* );
	/* ../public/tier0/stackstats_base.h:476 */
	uint32 STUB_GetCapturedCallStackDepth(const CCallStackStatsGatherer_Base* );
	/* ../public/tier0/stackstats_base.h:477 */
	uint32 STUB_GetStatStructSize(const CCallStackStatsGatherer_Base* );
	/* ../public/tier0/stackstats_base.h:478 */
	const char* STUB_GetStatStructName(const CCallStackStatsGatherer_Base* );
	/* ../public/tier0/stackstats_base.h:479 */
	void STUB_GetVectorData_StatEntries(const CCallStackStatsGatherer_Base* , const void* & , uint32& );
	/* ../public/tier0/stackstats_base.h:480 */
	void STUB_GetVectorData_StoredSubTrees(const CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base* const* & , uint32& );
	/* ../public/tier0/stackstats_base.h:481 */
	void STUB_EvaluateGathererLinkage(CCallStackStatsGatherer_Base* , CCallStackStatsGatherer_Base& );
	/* ../public/tier0/stackstats_base.h:482 */
	void STUB_OnGathererRemoved(CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base& );
	/* ../public/tier0/stackstats_base.h:483 */
	void STUB_OnLinkedGathererPushed(CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base& , const CCallStackMarkerBase& );
	/* ../public/tier0/stackstats_base.h:484 */
	void STUB_OnLinkedGathererPopped(CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base& );
	/* ../public/tier0/stackstats_base.h:485 */
	StatStructType_t* STUB_LockEntry(CCallStackStatsGatherer_Base* , uint32);
	/* ../public/tier0/stackstats_base.h:486 */
	void STUB_UnlockEntry(CCallStackStatsGatherer_Base* , uint32);
	/* ../public/tier0/stackstats_base.h:487 */
	void STUB_PopFromLinkedGatherers(const CCallStackStatsGatherer_Base* );
	/* ../public/tier0/stackstats_base.h:488 */
	void STUB_RemoveSharedInstanceData(CCallStackStatsGatherer_Base* , const CallStackStatsGatherer_SharedInstanceData_t& );
private:
	/* ../public/tier0/stackstats_base.h:491 */
	CCallStackStatsGatherer_Base& operator=(CCallStackStatsGatherer_Base* , const CCallStackStatsGatherer_Base& );
	void CCallStackStatsGatherer_Base(class CCallStackStatsGatherer_Base *, const CallStackGatherer_FunctionTable  *, const char  * const *, const char  * const *); /* linkage=_ZN28CCallStackStatsGatherer_BaseC4EPKN6detail40CallStackGatherer_FunctionTable_TemplateIS_EEPKPKcS8_ */
	uint32 GetCapturedCallStackDepth(const class CCallStackStatsGatherer_Base  *); /* linkage=_ZNK28CCallStackStatsGatherer_Base25GetCapturedCallStackDepthEv */
	uint32 GetStatStructSize(const class CCallStackStatsGatherer_Base  *); /* linkage=_ZNK28CCallStackStatsGatherer_Base17GetStatStructSizeEv */
	const char  * GetStatStructName(const class CCallStackStatsGatherer_Base  *); /* linkage=_ZNK28CCallStackStatsGatherer_Base17GetStatStructNameEv */
	void GetVectorData_StatEntries(const class CCallStackStatsGatherer_Base  *, const void  * &, uint32 &); /* linkage=_ZNK28CCallStackStatsGatherer_Base25GetVectorData_StatEntriesERPKvRj */
	void GetVectorData_StoredSubTrees(const class CCallStackStatsGatherer_Base  *, const class CCallStackStatsGatherer_Base  * const * &, uint32 &); /* linkage=_ZNK28CCallStackStatsGatherer_Base28GetVectorData_StoredSubTreesERPKPKS_Rj */
	void EvaluateGathererLinkage(class CCallStackStatsGatherer_Base *, class CCallStackStatsGatherer_Base &); /* linkage=_ZN28CCallStackStatsGatherer_Base23EvaluateGathererLinkageERS_ */
	void OnGathererRemoved(class CCallStackStatsGatherer_Base *, const class CCallStackStatsGatherer_Base  &); /* linkage=_ZN28CCallStackStatsGatherer_Base17OnGathererRemovedERKS_ */
	void OnLinkedGathererPushed(class CCallStackStatsGatherer_Base *, const class CCallStackStatsGatherer_Base  &, const class CCallStackMarkerBase  &); /* linkage=_ZN28CCallStackStatsGatherer_Base22OnLinkedGathererPushedERKS_RK20CCallStackMarkerBase */
	void OnLinkedGathererPopped(class CCallStackStatsGatherer_Base *, const class CCallStackStatsGatherer_Base  &); /* linkage=_ZN28CCallStackStatsGatherer_Base22OnLinkedGathererPoppedERKS_ */
	StatStructType_t * LockEntry(class CCallStackStatsGatherer_Base *, uint32); /* linkage=_ZN28CCallStackStatsGatherer_Base9LockEntryEj */
	void UnlockEntry(class CCallStackStatsGatherer_Base *, uint32); /* linkage=_ZN28CCallStackStatsGatherer_Base11UnlockEntryEj */
	void LockEverything(const class CCallStackStatsGatherer_Base  *, bool); /* linkage=_ZNK28CCallStackStatsGatherer_Base14LockEverythingEb */
	void PopFromLinkedGatherers(const class CCallStackStatsGatherer_Base  *); /* linkage=_ZNK28CCallStackStatsGatherer_Base22PopFromLinkedGatherersEv */
	void RemoveSharedInstanceData(class CCallStackStatsGatherer_Base *, const class CallStackStatsGatherer_SharedInstanceData_t  &); /* linkage=_ZN28CCallStackStatsGatherer_Base24RemoveSharedInstanceDataERK43CallStackStatsGatherer_SharedInstanceData_t */
	const CallStackGatherer_FunctionTable  * GetSTUBFunctionTable(void); /* linkage=_ZN28CCallStackStatsGatherer_Base20GetSTUBFunctionTableEv */
	bool CompareStringList(const char  * const *, const char  * const *); /* linkage=_ZN28CCallStackStatsGatherer_Base17CompareStringListEPKPKcS3_ */
	/* <47eb4e> tier0/stackstats.cpp:42 */
	uint32 STUB_GetCapturedCallStackDepth(const class CCallStackStatsGatherer_Base  *); /* linkage=_ZNK28CCallStackStatsGatherer_Base30STUB_GetCapturedCallStackDepthEv */
	uint32 STUB_GetStatStructSize(const class CCallStackStatsGatherer_Base  *); /* linkage=_ZNK28CCallStackStatsGatherer_Base22STUB_GetStatStructSizeEv */
	const char  * STUB_GetStatStructName(const class CCallStackStatsGatherer_Base  *); /* linkage=_ZNK28CCallStackStatsGatherer_Base22STUB_GetStatStructNameEv */
	void STUB_GetVectorData_StatEntries(const class CCallStackStatsGatherer_Base  *, const void  * &, uint32 &); /* linkage=_ZNK28CCallStackStatsGatherer_Base30STUB_GetVectorData_StatEntriesERPKvRj */
	void STUB_GetVectorData_StoredSubTrees(const class CCallStackStatsGatherer_Base  *, const class CCallStackStatsGatherer_Base  * const * &, uint32 &); /* linkage=_ZNK28CCallStackStatsGatherer_Base33STUB_GetVectorData_StoredSubTreesERPKPKS_Rj */
	/* <47eb78> tier0/stackstats.cpp:69 */
	void STUB_EvaluateGathererLinkage(class CCallStackStatsGatherer_Base *, class CCallStackStatsGatherer_Base &); /* linkage=_ZN28CCallStackStatsGatherer_Base28STUB_EvaluateGathererLinkageERS_ */
	void STUB_OnGathererRemoved(class CCallStackStatsGatherer_Base *, const class CCallStackStatsGatherer_Base  &); /* linkage=_ZN28CCallStackStatsGatherer_Base22STUB_OnGathererRemovedERKS_ */
	void STUB_OnLinkedGathererPushed(class CCallStackStatsGatherer_Base *, const class CCallStackStatsGatherer_Base  &, const class CCallStackMarkerBase  &); /* linkage=_ZN28CCallStackStatsGatherer_Base27STUB_OnLinkedGathererPushedERKS_RK20CCallStackMarkerBase */
	void STUB_OnLinkedGathererPopped(class CCallStackStatsGatherer_Base *, const class CCallStackStatsGatherer_Base  &); /* linkage=_ZN28CCallStackStatsGatherer_Base27STUB_OnLinkedGathererPoppedERKS_ */
	StatStructType_t * STUB_LockEntry(class CCallStackStatsGatherer_Base *, uint32); /* linkage=_ZN28CCallStackStatsGatherer_Base14STUB_LockEntryEj */
	void STUB_UnlockEntry(class CCallStackStatsGatherer_Base *, uint32); /* linkage=_ZN28CCallStackStatsGatherer_Base16STUB_UnlockEntryEj */
	void STUB_PopFromLinkedGatherers(const class CCallStackStatsGatherer_Base  *); /* linkage=_ZNK28CCallStackStatsGatherer_Base27STUB_PopFromLinkedGatherersEv */
	void STUB_RemoveSharedInstanceData(class CCallStackStatsGatherer_Base *, const class CallStackStatsGatherer_SharedInstanceData_t  &); /* linkage=_ZN28CCallStackStatsGatherer_Base29STUB_RemoveSharedInstanceDataERK43CallStackStatsGatherer_SharedInstanceData_t */
	class CCallStackStatsGatherer_Base & operator=(class CCallStackStatsGatherer_Base *, const class CCallStackStatsGatherer_Base  &); /* linkage=_ZN28CCallStackStatsGatherer_BaseaSERKS_ */
} __attribute__((__aligned__(16)));

// <0047E77A> ../public/tier0/stackstats_base.h:240
inline void CCallStackStatsGatherer_Base::GetCapturedCallStackDepth()
{
} /* size: 0 */

// <0047E761> ../public/tier0/stackstats_base.h:245
inline void CCallStackStatsGatherer_Base::GetStatStructSize()
{
} /* size: 0 */

// <0047E748> ../public/tier0/stackstats_base.h:250
inline void CCallStackStatsGatherer_Base::GetStatStructName()
{
} /* size: 0 */

// <0047E717> ../public/tier0/stackstats_base.h:255
inline void CCallStackStatsGatherer_Base::GetVectorData_StatEntries(const void *& pBaseOut, uint32& nSizeOut)
{
} /* size: 0 */

// <0047E6E4> ../public/tier0/stackstats_base.h:260
inline void CCallStackStatsGatherer_Base::GetVectorData_StoredSubTrees(const CCallStackStatsGatherer_Base* const *& pBaseOut, uint32& nSizeOut)
{
} /* size: 0 */

// <0047E6BE> ../public/tier0/stackstats_base.h:265
inline void CCallStackStatsGatherer_Base::EvaluateGathererLinkage(CCallStackStatsGatherer_Base& other)
{
} /* size: 0 */

// <0047E698> ../public/tier0/stackstats_base.h:270
inline void CCallStackStatsGatherer_Base::OnGathererRemoved(const CCallStackStatsGatherer_Base& other)
{
} /* size: 0 */

// <0047E672> ../public/tier0/stackstats_base.h:295
inline void CCallStackStatsGatherer_Base::LockEverything(bool bLock)
{
} /* size: 0 */

// <0047E64C> ../public/tier0/stackstats_base.h:316
inline void CCallStackStatsGatherer_Base::RemoveSharedInstanceData(const CallStackStatsGatherer_SharedInstanceData_t& SharedInstanceData)
{
} /* size: 0 */

// <00475284> ../public/tier0/stackstats_base.h:537
// member functions: 20
// class size: 1
class CNewDeleteAllocator<unsigned char> {
	/* ../public/tier0/stackstats_base.h:549 */
	void CNewDeleteAllocator(CNewDeleteAllocator<unsigned char>* );
	/* ../public/tier0/stackstats_base.h:550 */
	void CNewDeleteAllocator(CNewDeleteAllocator<unsigned char>* , const CNewDeleteAllocator<unsigned char>& );
	/* ../public/tier0/stackstats_base.h:552 */
	void ~CNewDeleteAllocator(CNewDeleteAllocator<unsigned char>* );
	/* ../public/tier0/stackstats_base.h:542 */
	typedef unsigned char * pointer;
	/* ../public/tier0/stackstats_base.h:558 */
	pointer address(const CNewDeleteAllocator<unsigned char>* , reference);
	/* ../public/tier0/stackstats_base.h:544 */
	typedef unsigned char & reference;
	/* ../public/tier0/stackstats_base.h:543 */
	typedef const unsigned char * const_pointer;
	/* ../public/tier0/stackstats_base.h:560 */
	const_pointer address(const CNewDeleteAllocator<unsigned char>* , const_reference);
	/* ../public/tier0/stackstats_base.h:545 */
	typedef const unsigned char & const_reference;
	/* ../public/tier0/stackstats_base.h:546 */
	typedef size_t size_type;
	/* ../public/tier0/stackstats_base.h:561 */
	size_type max_size(const CNewDeleteAllocator<unsigned char>* );
	/* ../public/tier0/stackstats_base.h:563 */
	pointer allocate(CNewDeleteAllocator<unsigned char>* , size_type, const void* );
	/* ../public/tier0/stackstats_base.h:564 */
	void deallocate(CNewDeleteAllocator<unsigned char>* , pointer, size_type);
	/* ../public/tier0/stackstats_base.h:565 */
	void construct(CNewDeleteAllocator<unsigned char>* , pointer, const unsigned char& );
	/* ../public/tier0/stackstats_base.h:566 */
	void destroy(CNewDeleteAllocator<unsigned char>* , pointer);
	void CNewDeleteAllocator(class CNewDeleteAllocator<unsigned char> *); /* linkage=_ZN19CNewDeleteAllocatorIhEC4Ev */
	void CNewDeleteAllocator(class CNewDeleteAllocator<unsigned char> *, const class CNewDeleteAllocator<unsigned char>  &); /* linkage=_ZN19CNewDeleteAllocatorIhEC4ERKS0_ */
	void ~CNewDeleteAllocator(class CNewDeleteAllocator<unsigned char> *); /* linkage=_ZN19CNewDeleteAllocatorIhED4Ev */
	pointer address(const class CNewDeleteAllocator<unsigned char>  *, reference); /* linkage=_ZNK19CNewDeleteAllocatorIhE7addressERh */
	const_pointer address(const class CNewDeleteAllocator<unsigned char>  *, const_reference); /* linkage=_ZNK19CNewDeleteAllocatorIhE7addressERKh */
	size_type max_size(const class CNewDeleteAllocator<unsigned char>  *); /* linkage=_ZNK19CNewDeleteAllocatorIhE8max_sizeEv */
	pointer allocate(class CNewDeleteAllocator<unsigned char> *, size_type, const void  *); /* linkage=_ZN19CNewDeleteAllocatorIhE8allocateEmPKv */
	void deallocate(class CNewDeleteAllocator<unsigned char> *, pointer, size_type); /* linkage=_ZN19CNewDeleteAllocatorIhE10deallocateEPhm */
	void construct(class CNewDeleteAllocator<unsigned char> *, pointer, const unsigned char  &); /* linkage=_ZN19CNewDeleteAllocatorIhE9constructEPhRKh */
	void destroy(class CNewDeleteAllocator<unsigned char> *, pointer); /* linkage=_ZN19CNewDeleteAllocatorIhE7destroyEPh */
};

// <00476ADB> ../public/tier0/stackstats_base.h:549
void CNewDeleteAllocator<unsigned char>::CNewDeleteAllocator()
{
} /* size: 0 */

// <00476AC2> ../public/tier0/stackstats_base.h:549
inline void CNewDeleteAllocator<unsigned char>::CNewDeleteAllocator()
{
} /* size: 0 */

// <00476AAB> ../public/tier0/stackstats_base.h:552
void CNewDeleteAllocator<unsigned char>::~CNewDeleteAllocator()
{
} /* size: 0 */

// <00476A92> ../public/tier0/stackstats_base.h:552
inline void CNewDeleteAllocator<unsigned char>::~CNewDeleteAllocator()
{
} /* size: 0 */

// <004763E5> ../public/tier0/stackstats_base.h:563
inline void CNewDeleteAllocator<unsigned char>::allocate(size_type num, const void *)
{
} /* size: 0 */

// <004763B4> ../public/tier0/stackstats_base.h:564
inline void CNewDeleteAllocator<unsigned char>::deallocate(pointer p, size_type num)
{
} /* size: 0 */

// <00474320> ../public/tier0/stackstats_base.h:1861
// member functions: 10
// member variables: 4
// vtable entry: 1
// class size: 32
class CallStackStatStructDescFuncs {
	/* ../public/tier0/stackstats_base.h:1869 */
	enum DescribeFieldVersions_t {
		DFV_BasicStatStructFieldTypes_t = 0,
	};
	void ~CallStackStatStructDescFuncs(CallStackStatStructDescFuncs* );
	void CallStackStatStructDescFuncs(CallStackStatStructDescFuncs* , CallStackStatStructDescFuncs& );
	void CallStackStatStructDescFuncs(CallStackStatStructDescFuncs* , const CallStackStatStructDescFuncs& );
	void CallStackStatStructDescFuncs(CallStackStatStructDescFuncs* );
	int ()(void) * * _vptr.CallStackStatStructDescFuncs; /* 0 8 */
	/* ../public/tier0/stackstats_base.h:1866 */
	virtual size_t DescribeField(CallStackStatStructDescFuncs* , uint8* , size_t);
	const char * m_szFieldName; /* 8 8 */
	size_t m_iFieldOffset; /* 16 8 */
	CallStackStatStructDescFuncs * m_pNext; /* 24 8 */
	void ~CallStackStatStructDescFuncs(class CallStackStatStructDescFuncs *); /* linkage=_ZN28CallStackStatStructDescFuncsD4Ev */
	void CallStackStatStructDescFuncs(class CallStackStatStructDescFuncs *, class CallStackStatStructDescFuncs &); /* linkage=_ZN28CallStackStatStructDescFuncsC4EOS_ */
	void CallStackStatStructDescFuncs(class CallStackStatStructDescFuncs *, const class CallStackStatStructDescFuncs  &); /* linkage=_ZN28CallStackStatStructDescFuncsC4ERKS_ */
	void CallStackStatStructDescFuncs(class CallStackStatStructDescFuncs *); /* linkage=_ZN28CallStackStatStructDescFuncsC4Ev */
	virtual size_t DescribeField(class CallStackStatStructDescFuncs *, uint8 *, size_t); /* linkage=_ZN28CallStackStatStructDescFuncs13DescribeFieldEPhm */
};

// <00475581> ../public/tier0/stackstats_base.h:1931
// member functions: 4
// member variables: 3
// vtable entry: 1
// class size: 40
class BasicStatStructFieldDesc : public CallStackStatStructDescFuncs {
public:
	/* class CallStackStatStructDescFuncs <ancestor>; */ /* 0 32 */
	/* ../public/tier0/stackstats_base.h:1934 */
	void BasicStatStructFieldDesc(BasicStatStructFieldDesc* , BasicStatStructFieldTypes_t, BasicStatStructFieldCombineMethods_t);
	/* tier0/stackstats.cpp:771 */
	virtual size_t DescribeField(BasicStatStructFieldDesc* , uint8* , size_t);
	BasicStatStructFieldTypes_t m_Type; /* 32 4 */
	BasicStatStructFieldCombineMethods_t m_Combine; /* 36 4 */
	void BasicStatStructFieldDesc(class BasicStatStructFieldDesc *, enum BasicStatStructFieldTypes_t, enum BasicStatStructFieldCombineMethods_t); /* linkage=_ZN24BasicStatStructFieldDescC4E27BasicStatStructFieldTypes_t36BasicStatStructFieldCombineMethods_t */
	virtual size_t DescribeField(class BasicStatStructFieldDesc *, uint8 *, size_t); /* linkage=_ZN24BasicStatStructFieldDesc13DescribeFieldEPhm */
};

// <00127F8F> ../public/tier0/stackstats_base.h:2036
bool StackStats_DumpNamedInstance(const char *, const char *, bool, bool)
{
} /* size: 0 */

// <0012800C> ../public/tier0/stackstats_base.h:2043
void StackStats_EnumerateRegisteredInstances(FN_StackStats_EnumInstances_Callback, void *)
{
} /* size: 0 */

