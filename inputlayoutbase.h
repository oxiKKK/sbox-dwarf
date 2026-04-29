
//
// ./inputlayoutbase.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 21
//	classes: 2
//	struct: 1
//

// <0053FE2B> ./inputlayoutbase.h:24
// member functions: 22
// member variables: 3
// class size: 24
class CInputLayoutBase {
	/* ./inputlayoutbase.h:27 */
	void CInputLayoutBase(CInputLayoutBase* , int, const RenderInputLayoutField_t* , const char* );
	/* ./inputlayoutbase.h:28 */
	void ~CInputLayoutBase(CInputLayoutBase* );
	/* ./inputlayoutbase.h:31 */
	int AddRef(CInputLayoutBase* );
	/* ./inputlayoutbase.h:32 */
	int Release(CInputLayoutBase* );
	/* ./inputlayoutbase.h:33 */
	int GetRefCount(const CInputLayoutBase* );
	/* ./inputlayoutbase.h:36 */
	const char* GetDebugName(const CInputLayoutBase* );
	/* ./inputlayoutbase.h:39 */
	int GetFieldCount(const CInputLayoutBase* );
	/* ./inputlayoutbase.h:40 */
	int GetSlotsUsed(const CInputLayoutBase* );
	/* ./inputlayoutbase.h:45 */
	int AddFieldsToLayout(CInputLayoutBase* , int, RenderInputLayoutField_t* , int);
	/* ./inputlayoutbase.h:47 */
	bool GetFriendlyShaderSemanticToActualSemanticMapping(const char** , uint32* , const char* , const CVsInputSignatureVector* );
	/* ./inputlayoutbase.h:49 */
	RenderInputLayoutField_t* GetFieldDescs(CInputLayoutBase* );
protected:
	int m_nFieldCount; /* 0 4 */
	RenderInputLayoutField_t * m_pFieldDescs; /* 8 8 */
private:
	CInterlockedInt m_nRef __attribute__((__aligned__(4))); /* 16 4 */
	void CInputLayoutBase(class CInputLayoutBase *, int, const class RenderInputLayoutField_t  *, const char  *); /* linkage=_ZN16CInputLayoutBaseC4EiPK24RenderInputLayoutField_tPKc */
	void ~CInputLayoutBase(class CInputLayoutBase *); /* linkage=_ZN16CInputLayoutBaseD4Ev */
	int AddRef(class CInputLayoutBase *); /* linkage=_ZN16CInputLayoutBase6AddRefEv */
	int Release(class CInputLayoutBase *); /* linkage=_ZN16CInputLayoutBase7ReleaseEv */
	int GetRefCount(const class CInputLayoutBase  *); /* linkage=_ZNK16CInputLayoutBase11GetRefCountEv */
	const char  * GetDebugName(const class CInputLayoutBase  *); /* linkage=_ZNK16CInputLayoutBase12GetDebugNameEv */
	int GetFieldCount(const class CInputLayoutBase  *); /* linkage=_ZNK16CInputLayoutBase13GetFieldCountEv */
	int GetSlotsUsed(const class CInputLayoutBase  *); /* linkage=_ZNK16CInputLayoutBase12GetSlotsUsedEv */
	int AddFieldsToLayout(class CInputLayoutBase *, int, class RenderInputLayoutField_t *, int); /* linkage=_ZN16CInputLayoutBase17AddFieldsToLayoutEiP24RenderInputLayoutField_ti */
	bool GetFriendlyShaderSemanticToActualSemanticMapping(const char  * *, uint32 *, const char  *, const CVsInputSignatureVector  *); /* linkage=_ZN16CInputLayoutBase48GetFriendlyShaderSemanticToActualSemanticMappingEPPKcPjS1_PK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS5_iEE */
	class RenderInputLayoutField_t * GetFieldDescs(class CInputLayoutBase *); /* linkage=_ZN16CInputLayoutBase13GetFieldDescsEv */
} __attribute__((__aligned__(8)));

// <0054341C> ./inputlayoutbase.h:27
void CInputLayoutBase::CInputLayoutBase(int nFieldCount, const RenderInputLayoutField_t* pFieldDescs, const char* pDebugName)
{
} /* size: 0 */

// <00543351> ./inputlayoutbase.h:28
void CInputLayoutBase::~CInputLayoutBase()
{
} /* size: 0 */

// <00A55E88> ./inputlayoutbase.h:66
inline void CInputLayoutBase::GetRefCount()
{
} /* size: 0 */

// <00A55E6C> ./inputlayoutbase.h:88
inline void CInputLayoutBase::GetFieldCount()
{
} /* size: 0 */

// <009450F2> ./inputlayoutbase.h:93
// member variable: 1
// struct size: 24
struct ConcatLayoutResult_t {
	RenderInputLayout_t m_layouts[3]; /* 0 24 */
};

// <009616DD> ./inputlayoutbase.h:102
// member functions: 40
// member variables: 4
// class size: 49,312
class CInputLayoutDict<CInputLayoutVulkan> {
	/* ./inputlayoutbase.h:149 */
	struct RenderInputLayoutDesc_t {
		int m_nFieldCount; /* 0 4 */
		const class RenderInputLayoutField_t * m_pFieldDescs; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ./inputlayoutbase.h:170 */
	struct RenderInputLayoutCreateEqualFunctor_t {
		/* ./inputlayoutbase.h:172 */
		bool operator()(const RenderInputLayoutCreateEqualFunctor_t* , const RenderInputLayoutDesc_t& , const RenderInputLayoutDesc_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ./inputlayoutbase.h:155 */
	struct RenderInputLayoutCreateHashFunctor_t {
		/* ./inputlayoutbase.h:157 */
		unsigned int operator()(const RenderInputLayoutCreateHashFunctor_t* , const RenderInputLayoutDesc_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CInputLayoutDict(CInputLayoutDict<CInputLayoutVulkan>* , const CInputLayoutDict<CInputLayoutVulkan>& );
	int ()(void) * * _vptr.CInputLayoutDict; /* 0 8 */
	/* ./inputlayoutbase.h:231 */
	void CInputLayoutDict(CInputLayoutDict<CInputLayoutVulkan>* );
	/* ./inputlayoutbase.h:237 */
	virtual void ~CInputLayoutDict(CInputLayoutDict<CInputLayoutVulkan>* );
	/* ./inputlayoutbase.h:250 */
	RenderInputLayout_t CreateInputLayout(CInputLayoutDict<CInputLayoutVulkan>* , const char* , int, const RenderInputLayoutField_t* );
	/* ./inputlayoutbase.h:310 */
	void AddInputLayoutReference(CInputLayoutDict<CInputLayoutVulkan>* , RenderInputLayout_t);
	/* ./inputlayoutbase.h:321 */
	void DestroyInputLayout(CInputLayoutDict<CInputLayoutVulkan>* , RenderInputLayout_t);
	/* ./inputlayoutbase.h:111 */
	UtlHashHandle_t FirstLayout(const CInputLayoutDict<CInputLayoutVulkan>* );
	/* ./inputlayoutbase.h:112 */
	UtlHashHandle_t NextLayout(const CInputLayoutDict<CInputLayoutVulkan>* , UtlHashHandle_t);
	/* ./inputlayoutbase.h:113 */
	UtlHashHandle_t InvalidLayout(void);
	/* ./inputlayoutbase.h:336 */
	int LayoutCount(const CInputLayoutDict<CInputLayoutVulkan>* );
	/* ./inputlayoutbase.h:349 */
	CInputLayoutVulkan* GetLayout(const CInputLayoutDict<CInputLayoutVulkan>* , UtlHashHandle_t);
	/* ./inputlayoutbase.h:342 */
	CInputLayoutVulkan* GetLayout(const CInputLayoutDict<CInputLayoutVulkan>* , RenderInputLayout_t);
	/* ./inputlayoutbase.h:358 */
	void MarkInputLayoutInvalid(CInputLayoutDict<CInputLayoutVulkan>* , UtlHashHandle_t);
	/* ./inputlayoutbase.h:368 */
	void GetInputLayoutFields(CInputLayoutDict<CInputLayoutVulkan>* , RenderInputLayout_t, const RenderInputLayoutField_t** , int& );
	/* ./inputlayoutbase.h:380 */
	void ConcatentateInputLayouts(CInputLayoutDict<CInputLayoutVulkan>* , int, RenderInputLayout_t* , int, const RenderInputLayout_t* );
	/* ./inputlayoutbase.h:562 */
	void CommitInputLayoutChanges(CInputLayoutDict<CInputLayoutVulkan>* , bool);
	/* ./inputlayoutbase.h:611 */
	void DeleteUnreferencedLayouts(CInputLayoutDict<CInputLayoutVulkan>* );
	/* ./inputlayoutbase.h:617 */
	void DestroyConcatenatedHash(CInputLayoutDict<CInputLayoutVulkan>* );
private:
	/* ./inputlayoutbase.h:131 */
	bool InputLayoutLessFunc(const RenderInputLayoutField_t& , const RenderInputLayoutField_t& );
	/* ./inputlayoutbase.h:223 */
	typedef struct CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*, CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutCreateHashFunctor_t, CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutCreateEqualFunctor_t, undefined_t, CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>, int> > RenderInputLayoutHashTable_t;
	RenderInputLayoutHashTable_t m_inputLayoutHashTable; /* 8 32 */
	CUtlTSHash<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> > m_concatHash __attribute__((__aligned__(16))); /* 48 49232 */
	CThreadFastMutex m_ILLock; /* 49280 24 */
	class CInputLayoutVulkan * GetLayout(const class CInputLayoutDict<CInputLayoutVulkan>  *, RenderInputLayout_t); /* linkage=_ZNK16CInputLayoutDictI18CInputLayoutVulkanE9GetLayoutEP21RenderInputLayout_t__ */
	void CInputLayoutDict(class CInputLayoutDict<CInputLayoutVulkan> *, const class CInputLayoutDict<CInputLayoutVulkan>  &); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanEC4ERKS1_ */
	void CInputLayoutDict(class CInputLayoutDict<CInputLayoutVulkan> *); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanEC4Ev */
	virtual void ~CInputLayoutDict(class CInputLayoutDict<CInputLayoutVulkan> *); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanED4Ev */
	RenderInputLayout_t CreateInputLayout(class CInputLayoutDict<CInputLayoutVulkan> *, const char  *, int, const class RenderInputLayoutField_t  *); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE17CreateInputLayoutEPKciPK24RenderInputLayoutField_t */
	void AddInputLayoutReference(class CInputLayoutDict<CInputLayoutVulkan> *, RenderInputLayout_t); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE23AddInputLayoutReferenceEP21RenderInputLayout_t__ */
	void DestroyInputLayout(class CInputLayoutDict<CInputLayoutVulkan> *, RenderInputLayout_t); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE18DestroyInputLayoutEP21RenderInputLayout_t__ */
	UtlHashHandle_t FirstLayout(const class CInputLayoutDict<CInputLayoutVulkan>  *); /* linkage=_ZNK16CInputLayoutDictI18CInputLayoutVulkanE11FirstLayoutEv */
	UtlHashHandle_t NextLayout(const class CInputLayoutDict<CInputLayoutVulkan>  *, UtlHashHandle_t); /* linkage=_ZNK16CInputLayoutDictI18CInputLayoutVulkanE10NextLayoutEj */
	UtlHashHandle_t InvalidLayout(void); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE13InvalidLayoutEv */
	int LayoutCount(const class CInputLayoutDict<CInputLayoutVulkan>  *); /* linkage=_ZNK16CInputLayoutDictI18CInputLayoutVulkanE11LayoutCountEv */
	class CInputLayoutVulkan * GetLayout(const class CInputLayoutDict<CInputLayoutVulkan>  *, UtlHashHandle_t); /* linkage=_ZNK16CInputLayoutDictI18CInputLayoutVulkanE9GetLayoutEj */
	void MarkInputLayoutInvalid(class CInputLayoutDict<CInputLayoutVulkan> *, UtlHashHandle_t); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE22MarkInputLayoutInvalidEj */
	void GetInputLayoutFields(class CInputLayoutDict<CInputLayoutVulkan> *, RenderInputLayout_t, const class RenderInputLayoutField_t  * *, int &); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE20GetInputLayoutFieldsEP21RenderInputLayout_t__PPK24RenderInputLayoutField_tRi */
	void ConcatentateInputLayouts(class CInputLayoutDict<CInputLayoutVulkan> *, int, RenderInputLayout_t *, int, const RenderInputLayout_t  *); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE24ConcatentateInputLayoutsEiPP21RenderInputLayout_t__iPKS3_ */
	void CommitInputLayoutChanges(class CInputLayoutDict<CInputLayoutVulkan> *, bool); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE24CommitInputLayoutChangesEb */
	void DeleteUnreferencedLayouts(class CInputLayoutDict<CInputLayoutVulkan> *); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE25DeleteUnreferencedLayoutsEv */
	void DestroyConcatenatedHash(class CInputLayoutDict<CInputLayoutVulkan> *); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE23DestroyConcatenatedHashEv */
	/* <a5e7bc> ./inputlayoutbase.h:131 */
	bool InputLayoutLessFunc(const class RenderInputLayoutField_t  &, const class RenderInputLayoutField_t  &); /* linkage=_ZN16CInputLayoutDictI18CInputLayoutVulkanE19InputLayoutLessFuncERK24RenderInputLayoutField_tS4_ */
} __attribute__((__aligned__(16)));

// <00A5E7BC> ./inputlayoutbase.h:131
// function calls: 2
void InputLayoutLessFunc(const RenderInputLayoutField_t& left, const RenderInputLayoutField_t& right)
{
	V_strcmp(const char* s1,
		const char* s2);  // 146
	InputLayoutLessFunc(const RenderInputLayoutField_t& left,
				const RenderInputLayoutField_t& right);  // 131
} /* size: 54, inline expansions: 2 (13 bytes) */

// <009D5E09> ./inputlayoutbase.h:131
inline void InputLayoutLessFunc(const RenderInputLayoutField_t& left, const RenderInputLayoutField_t& right)
{
} /* size: 0 */

// <009C81FA> ./inputlayoutbase.h:157
// variables: 3
inline void RenderInputLayoutCreateHashFunctor_t::operator(const RenderInputLayoutDesc_t& inputLayoutDesc)
{
	uint64 nHash; // 159
	{
		int32 nField; // 160
		{
			const RenderInputLayoutField_t* pFieldDesc; // 162
		}
	}
} /* size: 0, variables: 1 */

// <009B8538> ./inputlayoutbase.h:172
// variables: 3
inline void RenderInputLayoutCreateEqualFunctor_t::operator(const RenderInputLayoutDesc_t& rhs, const RenderInputLayoutDesc_t& lhs)
{
	{
		int32 nField; // 179
		{
			const RenderInputLayoutField_t* pFieldDescRHS; // 181
			const RenderInputLayoutField_t* pFieldDescLHS; // 182
		}
	}
} /* size: 0 */

// <009E8F0F> ./inputlayoutbase.h:231
// variables: 2
// function calls: 17
void CInputLayoutDict<CInputLayoutVulkan>::CInputLayoutDict()
{
	CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::Init(); // 178
	CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::CUtlHashtable(
			int minimumSize);  // 232
	ValidateAlignment<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<ConcatLayoutResult_t> >(void); // 133
	CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>,  this,
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 318
	{
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
		{
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2291
	}
	CThreadSpinRWLock::CThreadSpinRWLock(
				const char* pLockName);  // 297
	HashBucket_t::HashBucket_t(); // 318
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 318
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 320
	{
		int i; // 322
		{
			HashBucket_t& bucket; // 324
		}
	}
	CUtlTSHashBase(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this,
			int nAllocationCount);  // 809
	CUtlTSHash<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> >::CUtlTSHash(
			int nAllocationCount);  // 232
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 232
} /* size: 344, inline expansions: 14 (830 bytes) */

// <009E8EF6> ./inputlayoutbase.h:231
void CInputLayoutDict<CInputLayoutVulkan>::CInputLayoutDict()
{
} /* size: 0 */

// <009E856B> ./inputlayoutbase.h:237
// variables: 10
// function calls: 40
void CInputLayoutDict<CInputLayoutVulkan>::~CInputLayoutDict()
{
	{
		UtlHashHandle_t hLayout; // 239
		{
			const RenderInputLayoutDesc_t& desc; // 241
		}
	}
	{
		UtlHashHandle_t hLayout; // 239
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 915
			CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 914
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::FirstHandle(); // 239
		InvalidHandle(void); // 239
		{
			const RenderInputLayoutDesc_t& desc; // 241
			operator[](const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this,
					int i);  // 293
			CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::Key(
				handle_t idx);  // 241
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 914
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 915
			CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::IsValid(); // 917
		}
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::NextHandle(
				handle_t start);  // 239
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
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
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	RemoveAll(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this); // 668
	RemoveAll(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this); // 352
	Purge(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this); // 343
	~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, this); // 344
	~CUtlTSHashBase(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this); // 803
	CUtlTSHash<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> >::~CUtlTSHash(); // 244
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::Base(); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 897
			CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::IsValid(); // 899
			CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*> >(CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* pMemory); // 902
		}
	}
	CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 905
	CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::~CUtlMemory(); // 188
	CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::~CUtlHashtable(); // 244
} /* size: 511, inline expansions: 15 (1138 bytes) */

// <009E8504> ./inputlayoutbase.h:237
void CInputLayoutDict<CInputLayoutVulkan>::~CInputLayoutDict()
{
} /* size: 36 */

// <009E84CF> ./inputlayoutbase.h:237
// variables: 2
void CInputLayoutDict<CInputLayoutVulkan>::~CInputLayoutDict()
{
	{
		UtlHashHandle_t hLayout; // 239
		{
			const RenderInputLayoutDesc_t& desc; // 241
		}
	}
} /* size: 0 */

// <009E467B> ./inputlayoutbase.h:250
// variables: 15
// function calls: 40
void CInputLayoutDict<CInputLayoutVulkan>::CreateInputLayout(const char* pLayoutName, int nFieldCount, const RenderInputLayoutField_t* pFieldDescs)
{
	const char   __FUNCTION__; // 28813
	int nSizeInBytes; // 260
	RenderInputLayoutField_t* pSortedFields; // 261
	RenderInputLayoutDesc_t inputLayoutDesc; // 276
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_281; // 281
	CInputLayoutVulkan* pLayout; // 282
	UtlHashHandle_t hLayout; // 283
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 252
	}
	{
		int j; // 263
		V_strncpy<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars);  // 268
	}
	{
		RenderInputLayoutField_t* pNewFieldDescs; // 287
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 288
		{
			int32 nField; // 160
			{
				const RenderInputLayoutField_t* pFieldDesc; // 162
			}
		}
		RenderInputLayoutCreateHashFunctor_t::operator(
				const RenderInputLayoutDesc_t& inputLayoutDesc);  // 249
		CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
				int i);  // 720
		CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>(
															const RenderInputLayoutDesc_t& k,
															CInputLayoutVulkan* const& v);  // 1514
		Construct<CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>, const CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t&, CInputLayoutVulkan*&>(CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* pMemory); // 720
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::DoInsert<const CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t&>(
												const RenderInputLayoutDesc_t& k,
												Arg_t v,
												unsigned int h,
												bool* pDidInsert);  // 714
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::DoInsert<const CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t&>(
												const RenderInputLayoutDesc_t& k,
												Arg_t v,
												unsigned int h,
												bool* pDidInsert);  // 249
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 294
		CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
				int i);  // 297
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
				handle_t idx);  // 298
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 262
	_Iter_comp_iter<bool (::_Iter_comp_iter(
			bool (*__comp)(const RenderInputLayoutField_t &, const RenderInputLayoutField_t &));  // 412
	{
		_ValueType __value; // 355
	}
	__make_heap<RenderInputLayoutField_t*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const RenderInputLayoutField_t&, const RenderInputLayoutField_t&)> >(RenderInputLayoutField_t* __first,
																RenderInputLayoutField_t* __last,
																_Iter_comp_iter<bool (*)(const RenderInputLayoutField_t&, const RenderInputLayoutField_t&)>& __comp); // 413
	make_heap<RenderInputLayoutField_t*, bool (*)(const RenderInputLayoutField_t&, const RenderInputLayoutField_t&)>(RenderInputLayoutField_t* __first,
															RenderInputLayoutField_t* __last,
															bool (*__comp)(const RenderInputLayoutField_t &, const RenderInputLayoutField_t &)); // 273
	__pop_heap<RenderInputLayoutField_t*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const RenderInputLayoutField_t&, const RenderInputLayoutField_t&)> >(RenderInputLayoutField_t* __first,
																RenderInputLayoutField_t* __last,
																RenderInputLayoutField_t* __result,
																_Iter_comp_iter<bool (*)(const RenderInputLayoutField_t&, const RenderInputLayoutField_t&)>& __comp); // 425
	__sort_heap<RenderInputLayoutField_t*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const RenderInputLayoutField_t&, const RenderInputLayoutField_t&)> >(RenderInputLayoutField_t* __first,
																RenderInputLayoutField_t* __last,
																_Iter_comp_iter<bool (*)(const RenderInputLayoutField_t&, const RenderInputLayoutField_t&)>& __comp); // 480
	_Iter_comp_iter<bool (::_Iter_comp_iter(
			bool (*__comp)(const RenderInputLayoutField_t &, const RenderInputLayoutField_t &));  // 479
	sort_heap<RenderInputLayoutField_t*, bool (*)(const RenderInputLayoutField_t&, const RenderInputLayoutField_t&)>(RenderInputLayoutField_t* __first,
															RenderInputLayoutField_t* __last,
															bool (*__comp)(const RenderInputLayoutField_t &, const RenderInputLayoutField_t &)); // 274
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
			int nLineNumber);  // 281
	{
		int32 nField; // 160
		{
			const RenderInputLayoutField_t* pFieldDesc; // 162
		}
	}
	RenderInputLayoutCreateHashFunctor_t::operator(
			const RenderInputLayoutDesc_t& inputLayoutDesc);  // 218
	CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::Find(
		KeyArg_t k);  // 283
	CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
			int i);  // 297
	CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
			handle_t idx);  // 284
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 307
} /* size: 1680, variables: 7, inline expansions: 23 (2013 bytes) */

// <009E4628> ./inputlayoutbase.h:310
// variables: 3
inline void CInputLayoutDict<CInputLayoutVulkan>::AddInputLayoutReference(RenderInputLayout_t hInputLayout)
{
	const char   __FUNCTION__; // 28970
	CInputLayoutVulkan* pLayout; // 312
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 313
	}
} /* size: 0, variables: 2 */

// <009E45D5> ./inputlayoutbase.h:321
// variables: 3
inline void CInputLayoutDict<CInputLayoutVulkan>::DestroyInputLayout(RenderInputLayout_t hInputLayout)
{
	const char   __FUNCTION__; // 28840
	CInputLayoutVulkan* pLayout; // 323
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 324
	}
} /* size: 0, variables: 2 */

// <009E9C2A> ./inputlayoutbase.h:342
// variable: 1
inline void CInputLayoutDict<CInputLayoutVulkan>::GetLayout(RenderInputLayout_t hInputLayout)
{
	CInputLayoutVulkan* pLayout; // 344
} /* size: 0, variables: 1 */

// <009E330C> ./inputlayoutbase.h:368
// variable: 1
void CInputLayoutDict<CInputLayoutVulkan>::GetInputLayoutFields(RenderInputLayout_t hInputLayout, const RenderInputLayoutField_t ** ppFieldsOut, int& nFieldsOut)
{
	CInputLayoutBase* pLayout; // 370
} /* size: 0, variables: 1 */

// <009E3359> ./inputlayoutbase.h:380
// variables: 45
// function calls: 35
void CInputLayoutDict<CInputLayoutVulkan>::ConcatentateInputLayouts(int nOutputLayoutVariations, RenderInputLayout_t* pOutputLayouts, int nInputLayouts, const RenderInputLayout_t* pInputLayouts)
{
	const char   __FUNCTION__; // 28997
	uint32 nHash; // 394
	UtlTSHashHandle_t nHashHandle; // 395
	ConcatLayoutResult_t newConcatLayout; // 413
	RenderInputLayoutField_t s_ExtraFields; // 416
	int s_ExtraFieldCounts; // 435
	int nTotalFieldCount; // 438
	int nMaxStreamsUsed; // 439
	RenderInputLayoutField_t* pStaticLayoutFields; // 471
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 385
	}
	{
		int i; // 386
	}
	{
		ConcatLayoutResult_t& result; // 398
		{
			int i; // 399
			{
				CInputLayoutVulkan* pLayout; // 404
			}
		}
	}
	{
		int i; // 440
		{
			CInputLayoutBase* pLayout; // 442
			CInputLayoutBase::GetFieldCount(); // 444
		}
	}
	{
		int i; // 451
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 458
	}
	{
		int i; // 461
	}
	{
		int nStaticFieldsUsed; // 473
		int nStartSlot; // 474
		{
			int i; // 475
			{
				CInputLayoutBase* pLayout; // 477
				RenderInputLayoutField_t* pCurrentField; // 478
				int nFieldsRemaining; // 480
				int nFieldsAdded; // 481
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 490
		}
	}
	{
		int i; // 493
		{
			const RenderInputLayoutField_t& fieldBefore; // 495
			{
				int j; // 497
				{
					const RenderInputLayoutField_t& fieldAfter; // 499
					{
						int nToCopy; // 504
						{
							int f; // 505
						}
					}
				}
			}
		}
	}
	{
		int i; // 516
		{
			RenderInputLayoutField_t* pLayoutFields; // 518
			int nBaseSlotOld; // 524
			int nBaseSlotNew; // 525
			{
				int e; // 526
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 528
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 521
		}
	}
	{
		int i; // 542
	}
	{
		int i; // 548
	}
	HashIntConventional(const int n); // 63
	Hash(const unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSp this,
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSp this,
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSp this,
		unsigned int uiKey);  // 395
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSp this,
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSp this,
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSp this,
		unsigned int uiKey);  // 469
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
			int nLineNumber);  // 474
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	Find(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSp this,
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 476
	Alloc(const CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, this); // 438
	InsertUncommitted(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this,
				unsigned int uiKey,
				HashBucket_t& bucket);  // 479
	CopyConstruct<ConcatLayoutResult_t>(ConcatLayoutResult_t* pMemory,
						const ConcatLayoutResult_t& src);  // 480
	Insert(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this,
		unsigned int uiKey,
		const ConcatLayoutResult_t& data,
		bool* pDidInsert);  // 556
} /* size: 2511, variables: 9, inline expansions: 25 (1892 bytes) */

// <009E2E91> ./inputlayoutbase.h:562
// variables: 9
// function calls: 16
void CInputLayoutDict<CInputLayoutVulkan>::CommitInputLayoutChanges(bool bDeleteOnly)
{
	int nCount; // 564
	int nNumUniqueLayoutsToDelete; // 568
	CInputLayoutVulkan** ppUniqueLayoutsToDelete; // 569
	{
		UtlHashHandle_t hInputLayout; // 571
		{
			CInputLayoutVulkan* pLayout; // 573
			{
				int j; // 585
				CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
						int i);  // 297
				CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
						handle_t idx);  // 594
			}
			CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
					int i);  // 297
			CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::operator[](
					handle_t idx);  // 573
			CInterlockedIntT<int, 4>::operator int(); // 68
			CInputLayoutBase::GetRefCount(); // 577
		}
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 915
			CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 914
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::FirstHandle(); // 571
		Base(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 914
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulk this); // 915
			CUtlHashtableEntry<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::IsValid(); // 917
		}
		CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::NextHandle(
				handle_t start);  // 571
	}
	{
		int j; // 604
	}
	CUtlHashtable<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::Count(); // 564
} /* size: 526, variables: 3, inline expansions: 1 (17 bytes) */

// <009E6C0F> ./inputlayoutbase.h:617
// variables: 11
// function calls: 17
void CInputLayoutDict<CInputLayoutVulkan>::DestroyConcatenatedHash()
{
	UtlTSHashHandle_t iterHandles; // 619
	{
		int nGrabStart; // 620
		{
			int nGrabbed; // 622
			{
				int i; // 623
				{
					ConcatLayoutResult_t& elem; // 625
					{
						int j; // 626
					}
				}
			}
			{
				int i; // 379
				{
					const HashBucket_t& bucket; // 381
					CThreadSpinRWLock::LockForRead(
							const char* pFileName,
							int nLineNumber);  // 382
					{
						HashFixedData_t* pElement; // 383
						CThreadSpinRWLock::UnlockRead(
								const char* pFileName,
								int nLineNumber);  // 391
					}
					CThreadSpinRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 395
				}
			}
			GetElements(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSp this,
					int nFirstElement,
					int nCount,
					UtlTSHashHandle_t* pHandles);  // 622
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
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
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	RemoveAll(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this); // 668
	RemoveAll(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this); // 352
	Purge(const CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLo this); // 638
} /* size: 632, variables: 1, inline expansions: 5 (562 bytes) */

