
//
// public/tier0/mempool.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 219
//	classes: 43
//	struct: 1
//

// <021F5918> ../public/tier0/mempool.h:50
// member functions: 32
// member variables: 9
// static member variable: 1
// class size: 56
class CUtlMemoryPoolBase {
	/* ../public/tier0/mempool.h:78 */
	class CBlob {
		CBlob * m_pNext; /* 0 8 */
		int m_NumBytes; /* 8 4 */
		char m_Data[1]; /* 12 1 */
		char m_Padding[3]; /* 13 3 */
	};
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/mempool.h:91 */
	struct FreeList_t {
		FreeList_t * pNext; /* 0 8 */
	};
	/* tag__fprintf: volatile_type tag not supported! */;
	/* ../public/tier0/mempool.h:53 */
	void CUtlMemoryPoolBase(CUtlMemoryPoolBase* , int, int, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:54 */
	void ~CUtlMemoryPoolBase(CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:56 */
	void* Alloc(CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:57 */
	void* AllocZero(CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:58 */
	void Free(CUtlMemoryPoolBase* , void* );
	/* ../public/tier0/mempool.h:62 */
	void Clear(CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:65 */
	void SetErrorReportFunc(MemoryPoolReportFunc_t);
	/* ../public/tier0/mempool.h:68 */
	int Count(const CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:69 */
	int PeakCount(const CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:70 */
	int BlockSize(const CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:71 */
	int Size(const CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:73 */
	bool IsAllocationWithinPool(const CUtlMemoryPoolBase* , void* );
protected:
	/* ../public/tier0/mempool.h:76 */
	void ClearDestruct(CUtlMemoryPoolBase* , void (*)(void* ));
	/* ../public/tier0/mempool.h:88 */
	void ResetAllocationCounts(CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:97 */
	FreeList_t* AddNewBlob(CUtlMemoryPoolBase* );
	/* ../public/tier0/mempool.h:103 */
	void InternalClear(CUtlMemoryPoolBase* , CBlob* , FreeList_t* );
	int m_BlockSize; /* 0 4 */
	int m_BlocksPerBlob; /* 4 4 */
	MemoryPoolGrowType_t m_GrowMode; /* 8 4 */
	CInterlockedInt m_BlocksAllocated __attribute__((__aligned__(4))); /* 12 4 */
	CInterlockedInt m_PeakAlloc __attribute__((__aligned__(4))); /* 16 4 */
	short unsigned int m_nAlignment; /* 20 2 */
	short unsigned int m_NumBlobs; /* 22 2 */
	CTSFastPushQueue m_FreeList __attribute__((__aligned__(8))); /* 24 16 */
	CTSFastPushQueue m_Blobs __attribute__((__aligned__(8))); /* 40 16 */
	static MemoryPoolReportFunc_t g_ReportFunc; /* 0 0 */
	void CUtlMemoryPoolBase(class CUtlMemoryPoolBase *, int, int, int, enum MemoryPoolGrowType_t, const char  *); /* linkage=_ZN18CUtlMemoryPoolBaseC4Eiii20MemoryPoolGrowType_tPKc */
	void ~CUtlMemoryPoolBase(class CUtlMemoryPoolBase *); /* linkage=_ZN18CUtlMemoryPoolBaseD4Ev */
	void * Alloc(class CUtlMemoryPoolBase *); /* linkage=_ZN18CUtlMemoryPoolBase5AllocEv */
	void * AllocZero(class CUtlMemoryPoolBase *); /* linkage=_ZN18CUtlMemoryPoolBase9AllocZeroEv */
	void Free(class CUtlMemoryPoolBase *, void *); /* linkage=_ZN18CUtlMemoryPoolBase4FreeEPv */
	/* <2b2440> tier0/mempool.cpp:227 */
	void Clear(class CUtlMemoryPoolBase *); /* linkage=_ZN18CUtlMemoryPoolBase5ClearEv */
	void SetErrorReportFunc(MemoryPoolReportFunc_t); /* linkage=_ZN18CUtlMemoryPoolBase18SetErrorReportFuncEPFvPKczE */
	int Count(const class CUtlMemoryPoolBase  *); /* linkage=_ZNK18CUtlMemoryPoolBase5CountEv */
	int PeakCount(const class CUtlMemoryPoolBase  *); /* linkage=_ZNK18CUtlMemoryPoolBase9PeakCountEv */
	int BlockSize(const class CUtlMemoryPoolBase  *); /* linkage=_ZNK18CUtlMemoryPoolBase9BlockSizeEv */
	int Size(const class CUtlMemoryPoolBase  *); /* linkage=_ZNK18CUtlMemoryPoolBase4SizeEv */
	bool IsAllocationWithinPool(const class CUtlMemoryPoolBase  *, void *); /* linkage=_ZNK18CUtlMemoryPoolBase22IsAllocationWithinPoolEPv */
	void ClearDestruct(class CUtlMemoryPoolBase *, void (*)(void *)); /* linkage=_ZN18CUtlMemoryPoolBase13ClearDestructEPFvPvE */
	void ResetAllocationCounts(class CUtlMemoryPoolBase *); /* linkage=_ZN18CUtlMemoryPoolBase21ResetAllocationCountsEv */
	class FreeList_t * AddNewBlob(class CUtlMemoryPoolBase *); /* linkage=_ZN18CUtlMemoryPoolBase10AddNewBlobEv */
	/* <2b1dd9> tier0/mempool.cpp:305 */
	void InternalClear(class CUtlMemoryPoolBase *, class CBlob *, class FreeList_t *); /* linkage=_ZN18CUtlMemoryPoolBase13InternalClearEPNS_5CBlobEPNS_10FreeList_tE */
} __attribute__((__aligned__(8)));

// <0321C054> ../public/tier0/mempool.h:53
void CUtlMemoryPoolBase::CUtlMemoryPoolBase(int nElementSize, int numElements, int nElementAlignment, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <0321C0AC> ../public/tier0/mempool.h:54
void CUtlMemoryPoolBase::~CUtlMemoryPoolBase()
{
} /* size: 0 */

// <02383C7D> ../public/tier0/mempool.h:68
inline void CUtlMemoryPoolBase::Count()
{
} /* size: 0 */

// <001ACADB> ../public/tier0/mempool.h:69
inline void CUtlMemoryPoolBase::PeakCount()
{
} /* size: 0 */

// <001ACAC2> ../public/tier0/mempool.h:70
inline void CUtlMemoryPoolBase::BlockSize()
{
} /* size: 0 */

// <0321CBA3> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CSceneView>::~CUtlMemoryPool()
{
} /* size: 9 */

// <0321CB87> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CSceneView>::~CUtlMemoryPool()
{
} /* size: 0 */

// <02EAC9CC> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CRenderBatchList>::~CUtlMemoryPool()
{
} /* size: 0 */

// <02EAC9B0> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CRenderBatchList>::~CUtlMemoryPool()
{
} /* size: 0 */

// <02EAC917> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CSceneLayer>::~CUtlMemoryPool()
{
} /* size: 0 */

// <02EAC8FB> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CSceneLayer>::~CUtlMemoryPool()
{
} /* size: 0 */

// <0269EBD9> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CSfxTable>::~CUtlMemoryPool()
{
} /* size: 0 */

// <0269EBBC> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CSfxTable>::~CUtlMemoryPool()
{
} /* size: 0 */

// <02358E7D> ../public/tier0/mempool.h:126
void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this)
{
} /* size: 0 */

// <02358E61> ../public/tier0/mempool.h:126
inline void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this)
{
} /* size: 0 */

// <009E95AA> ../public/tier0/mempool.h:126
void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this)
{
} /* size: 0 */

// <009E958D> ../public/tier0/mempool.h:126
inline void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this)
{
} /* size: 0 */

// <009DB358> ../public/tier0/mempool.h:126
void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, this)
{
} /* size: 0 */

// <009DB33B> ../public/tier0/mempool.h:126
inline void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, this)
{
} /* size: 0 */

// <005444EE> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t::~CUtlMemoryPool()
{
} /* size: 0 */

// <005444D1> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t::~CUtlMemoryPool()
{
} /* size: 0 */

// <002A2FEA> ../public/tier0/mempool.h:126
void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this)
{
} /* size: 0 */

// <002A2FCE> ../public/tier0/mempool.h:126
inline void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this)
{
} /* size: 0 */

// <001A5021> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::~CUtlMemoryPool()
{
} /* size: 0 */

// <001A5005> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::~CUtlMemoryPool()
{
} /* size: 0 */

// <00178FF3> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CUtlTSHashBase<void::~CUtlMemoryPool()
{
} /* size: 0 */

// <00178FD7> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CUtlTSHashBase<void::~CUtlMemoryPool()
{
} /* size: 0 */

// <000F6606> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CCommandBufferChunk>::~CUtlMemoryPool()
{
} /* size: 9 */

// <000F65EA> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CCommandBufferChunk>::~CUtlMemoryPool()
{
} /* size: 0 */

// <000F659F> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CMediumCommandBufferChunk>::~CUtlMemoryPool()
{
} /* size: 9 */

// <000F6583> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CMediumCommandBufferChunk>::~CUtlMemoryPool()
{
} /* size: 0 */

// <000F6538> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CLargeCommandBufferChunk>::~CUtlMemoryPool()
{
} /* size: 9 */

// <000F651C> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CLargeCommandBufferChunk>::~CUtlMemoryPool()
{
} /* size: 0 */

// <005A5788> ../public/tier0/mempool.h:126
void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHas this)
{
} /* size: 0 */

// <005A576C> ../public/tier0/mempool.h:126
inline void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHas this)
{
} /* size: 0 */

// <002A3C0A> ../public/tier0/mempool.h:126
void CUtlMemoryPool<TSPointerListNode_t>::~CUtlMemoryPool()
{
} /* size: 9 */

// <002A3BEE> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<TSPointerListNode_t>::~CUtlMemoryPool()
{
} /* size: 0 */

// <00264BC9> ../public/tier0/mempool.h:126
void CUtlMemoryPool<KeyValues>::~CUtlMemoryPool()
{
} /* size: 0 */

// <00264BAD> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<KeyValues>::~CUtlMemoryPool()
{
} /* size: 0 */

// <0025747F> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::~CUtlMemoryPool()
{
} /* size: 9 */

// <00257463> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::~CUtlMemoryPool()
{
} /* size: 0 */

// <001C8980> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CPooledStdFunctionJob>::~CUtlMemoryPool()
{
} /* size: 9 */

// <001C8964> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CPooledStdFunctionJob>::~CUtlMemoryPool()
{
} /* size: 0 */

// <001C8594> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CExecMultiWorkerJob>::~CUtlMemoryPool()
{
} /* size: 9 */

// <001C8578> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CExecMultiWorkerJob>::~CUtlMemoryPool()
{
} /* size: 0 */

// <001C852E> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CThreadPool::CSerialJobExecutor>::~CUtlMemoryPool()
{
} /* size: 9 */

// <0012B141> ../public/tier0/mempool.h:126
void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRW this)
{
} /* size: 0 */

// <0012B125> ../public/tier0/mempool.h:126
inline void ~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRW this)
{
} /* size: 0 */

// <000D99DA> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth::~CUtlMemoryPool()
{
} /* size: 0 */

// <000D99BE> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth::~CUtlMemoryPool()
{
} /* size: 0 */

// <000D9935> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth::~CUtlMemoryPool()
{
} /* size: 0 */

// <000D9919> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth::~CUtlMemoryPool()
{
} /* size: 0 */

// <000D8B7E> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::~CUtlMemoryPool()
{
} /* size: 0 */

// <000D8B62> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::~CUtlMemoryPool()
{
} /* size: 0 */

// <000D8AD9> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::~CUtlMemoryPool()
{
} /* size: 0 */

// <000D8ABD> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::~CUtlMemoryPool()
{
} /* size: 0 */

// <000771DA> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CMeshInstance_Imp>::~CUtlMemoryPool()
{
} /* size: 9 */

// <000771BE> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CMeshInstance_Imp>::~CUtlMemoryPool()
{
} /* size: 0 */

// <00152E05> ../public/tier0/mempool.h:126
void CUtlMemoryPool<CMaterial2>::~CUtlMemoryPool()
{
} /* size: 9 */

// <00152DE9> ../public/tier0/mempool.h:126
inline void CUtlMemoryPool<CMaterial2>::~CUtlMemoryPool()
{
} /* size: 0 */

// <0224C179> ../public/tier0/mempool.h:126
// member functions: 9
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<ResourceBindingBase_t> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<ResourceBindingBase_t>* Alloc(CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long );
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<ResourceBindingBase_t>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long , HashFixedDataInternal_t<ResourceBindingBase_t>* );
	void CUtlMemoryPool(class CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long , int, enum MemoryPoolGrowType_t, const char  *); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEEC4Ei20MemoryPoolGrowType_tPKc */
	class HashFixedDataInternal_t<ResourceBindingBase_t> * Alloc(class CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long ); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEE5AllocEv */
	class HashFixedDataInternal_t<ResourceBindingBase_t> * AllocZero(class CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long ); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEE9AllocZeroEv */
	void Free(class CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long , class HashFixedDataInternal_t<ResourceBindingBase_t> *); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEE4FreeEPS7_ */
	void ~CUtlMemoryPool(class CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long long ); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI21ResourceBindingBase_tLi1021Ey27CUtlTSHashGenericHashMethodIyE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEED4Ev */
} __attribute__((__aligned__(8)));

// <026975EA> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CSfxTable> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CSfxTable>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CSfxTable* Alloc(CUtlMemoryPool<CSfxTable>* );
	/* ../public/tier0/mempool.h:137 */
	CSfxTable* AllocZero(CUtlMemoryPool<CSfxTable>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CSfxTable>* , CSfxTable* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CSfxTable>* );
} __attribute__((__aligned__(8)));

// <02DC3C3D> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CRenderBatchList> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CRenderBatchList>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CRenderBatchList* Alloc(CUtlMemoryPool<CRenderBatchList>* );
	/* ../public/tier0/mempool.h:137 */
	CRenderBatchList* AllocZero(CUtlMemoryPool<CRenderBatchList>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CRenderBatchList>* , CRenderBatchList* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CRenderBatchList>* );
} __attribute__((__aligned__(8)));

// <02DC42BB> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CSceneLayer> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CSceneLayer>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CSceneLayer* Alloc(CUtlMemoryPool<CSceneLayer>* );
	/* ../public/tier0/mempool.h:137 */
	CSceneLayer* AllocZero(CUtlMemoryPool<CSceneLayer>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CSceneLayer>* , CSceneLayer* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CSceneLayer>* );
} __attribute__((__aligned__(8)));

// <02DDA830> ../public/tier0/mempool.h:126
// member functions: 4
// member variable: 1
// class size: 56
class CUtlMemoryPool<CSceneView> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CSceneView>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CSceneView* Alloc(CUtlMemoryPool<CSceneView>* );
	/* ../public/tier0/mempool.h:137 */
	CSceneView* AllocZero(CUtlMemoryPool<CSceneView>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CSceneView>* , CSceneView* );
} __attribute__((__aligned__(8)));

// <0613EF13> ../public/tier0/mempool.h:126
// member functions: 4
// member variable: 1
// class size: 56
class CUtlMemoryPool<CDmeVertexData> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CDmeVertexData>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CDmeVertexData* Alloc(CUtlMemoryPool<CDmeVertexData>* );
	/* ../public/tier0/mempool.h:137 */
	CDmeVertexData* AllocZero(CUtlMemoryPool<CDmeVertexData>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CDmeVertexData>* , CDmeVertexData* );
} __attribute__((__aligned__(8)));

// <0613EFC8> ../public/tier0/mempool.h:126
// member functions: 4
// member variable: 1
// class size: 56
class CUtlMemoryPool<CDmeVertexDeltaData> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CDmeVertexDeltaData>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CDmeVertexDeltaData* Alloc(CUtlMemoryPool<CDmeVertexDeltaData>* );
	/* ../public/tier0/mempool.h:137 */
	CDmeVertexDeltaData* AllocZero(CUtlMemoryPool<CDmeVertexDeltaData>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CDmeVertexDeltaData>* , CDmeVertexDeltaData* );
} __attribute__((__aligned__(8)));

// <000DEA49> ../public/tier0/mempool.h:126
// member functions: 4
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t>, , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<void*>* Alloc(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t>, );
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<void*>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t>, );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t>, , HashFixedDataInternal_t<void*>* );
} __attribute__((__aligned__(8)));

// <000DF199> ../public/tier0/mempool.h:126
// member functions: 4
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<void*>* Alloc(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<void*>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_, HashFixedDataInternal_t<void*>* );
} __attribute__((__aligned__(8)));

// <000DF804> ../public/tier0/mempool.h:126
// member functions: 4
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t>, CThreadSpi, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<void*>* Alloc(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t>, CThreadSpi);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<void*>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t>, CThreadSpi);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t>, CThreadSpi, HashFixedDataInternal_t<void*>* );
} __attribute__((__aligned__(8)));

// <000DF922> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CCommandBufferChunk> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CCommandBufferChunk>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CCommandBufferChunk* Alloc(CUtlMemoryPool<CCommandBufferChunk>* );
	/* ../public/tier0/mempool.h:137 */
	CCommandBufferChunk* AllocZero(CUtlMemoryPool<CCommandBufferChunk>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CCommandBufferChunk>* , CCommandBufferChunk* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CCommandBufferChunk>* );
} __attribute__((__aligned__(8)));

// <000DFAF4> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CMediumCommandBufferChunk> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CMediumCommandBufferChunk>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CMediumCommandBufferChunk* Alloc(CUtlMemoryPool<CMediumCommandBufferChunk>* );
	/* ../public/tier0/mempool.h:137 */
	CMediumCommandBufferChunk* AllocZero(CUtlMemoryPool<CMediumCommandBufferChunk>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CMediumCommandBufferChunk>* , CMediumCommandBufferChunk* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CMediumCommandBufferChunk>* );
} __attribute__((__aligned__(8)));

// <000DFCCE> ../public/tier0/mempool.h:126
// member functions: 10
// member variable: 1
// class size: 56
class CUtlMemoryPool<CLargeCommandBufferChunk> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CLargeCommandBufferChunk>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CLargeCommandBufferChunk* Alloc(CUtlMemoryPool<CLargeCommandBufferChunk>* );
	/* ../public/tier0/mempool.h:137 */
	CLargeCommandBufferChunk* AllocZero(CUtlMemoryPool<CLargeCommandBufferChunk>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CLargeCommandBufferChunk>* , CLargeCommandBufferChunk* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CLargeCommandBufferChunk>* );
	void CUtlMemoryPool(class CUtlMemoryPool<CLargeCommandBufferChunk> *, int, enum MemoryPoolGrowType_t, const char  *); /* linkage=_ZN14CUtlMemoryPoolI24CLargeCommandBufferChunkEC4Ei20MemoryPoolGrowType_tPKc */
	class CLargeCommandBufferChunk * Alloc(class CUtlMemoryPool<CLargeCommandBufferChunk> *); /* linkage=_ZN14CUtlMemoryPoolI24CLargeCommandBufferChunkE5AllocEv */
	class CLargeCommandBufferChunk * AllocZero(class CUtlMemoryPool<CLargeCommandBufferChunk> *); /* linkage=_ZN14CUtlMemoryPoolI24CLargeCommandBufferChunkE9AllocZeroEv */
	void Free(class CUtlMemoryPool<CLargeCommandBufferChunk> *, class CLargeCommandBufferChunk *); /* linkage=_ZN14CUtlMemoryPoolI24CLargeCommandBufferChunkE4FreeEPS0_ */
	void ~CUtlMemoryPool(class CUtlMemoryPool<CLargeCommandBufferChunk> *); /* linkage=_ZN14CUtlMemoryPoolI24CLargeCommandBufferChunkED4Ev */
} __attribute__((__aligned__(8)));

// <0013DF04> ../public/tier0/mempool.h:126
// member functions: 4
// member variable: 1
// class size: 56
class CUtlMemoryPool<TSPointerListNode_t> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<TSPointerListNode_t>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	TSPointerListNode_t* Alloc(CUtlMemoryPool<TSPointerListNode_t>* );
	/* ../public/tier0/mempool.h:137 */
	TSPointerListNode_t* AllocZero(CUtlMemoryPool<TSPointerListNode_t>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<TSPointerListNode_t>* , TSPointerListNode_t* );
} __attribute__((__aligned__(8)));

// <0015C629> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	FencedWaitingList_t<void, void>* Alloc(CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >* );
	/* ../public/tier0/mempool.h:137 */
	FencedWaitingList_t<void, void>* AllocZero(CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >* , FencedWaitingList_t<void, void>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >* );
} __attribute__((__aligned__(8)));

// <00164274> ../public/tier0/mempool.h:126
// member functions: 4
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenceHashKey_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<CTextureSequenceRecord_t> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextu, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<CTextureSequenceRecord_t>* Alloc(CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextu);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<CTextureSequenceRecord_t>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextu);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextu, HashFixedDataInternal_t<CTextureSequenceRecord_t>* );
} __attribute__((__aligned__(8)));

// <0054064C> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int>, CThreadSpinRWLock>::HashFixedDataInternal_t<InputLayoutVulkan_t*> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int>, CThrea, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<InputLayoutVulkan_t*>* Alloc(CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int>, CThrea);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<InputLayoutVulkan_t*>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int>, CThrea);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int>, CThrea, HashFixedDataInternal_t<InputLayoutVulkan_t*>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t*, 16, long long int, CUtlTSHashGenericHashMethod<long long int>, CThrea);
} __attribute__((__aligned__(8)));

// <009456B0> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<ConcatLayoutResult_t> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThrea, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<ConcatLayoutResult_t>* Alloc(CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThrea);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<ConcatLayoutResult_t>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThrea);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThrea, HashFixedDataInternal_t<ConcatLayoutResult_t>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThrea);
} __attribute__((__aligned__(8)));

// <0095DD52> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSamplerStateBinding> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<CSamplerStateBinding>* Alloc(CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<CSamplerStateBinding>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc, HashFixedDataInternal_t<CSamplerStateBinding>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc);
} __attribute__((__aligned__(8)));

// <00124F9B> ../public/tier0/mempool.h:126
// member functions: 10
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CEventId> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<CEventId>* Alloc(CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<CEventId>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:, HashFixedDataInternal_t<CEventId>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:);
	void CUtlMemoryPool(class CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:, int, enum MemoryPoolGrowType_t, const char  *); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI8CEventIdLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEEC4Ei20MemoryPoolGrowType_tPKc */
	class HashFixedDataInternal_t<CEventId> * Alloc(class CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI8CEventIdLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEE5AllocEv */
	class HashFixedDataInternal_t<CEventId> * AllocZero(class CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI8CEventIdLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEE9AllocZeroEv */
	void Free(class CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:, class HashFixedDataInternal_t<CEventId> *); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI8CEventIdLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEE4FreeEPS7_ */
	void ~CUtlMemoryPool(class CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>:); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseI8CEventIdLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS1_EEED4Ev */
} __attribute__((__aligned__(8)));

// <001B8732> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CPooledStdFunctionJob> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CPooledStdFunctionJob>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CPooledStdFunctionJob* Alloc(CUtlMemoryPool<CPooledStdFunctionJob>* );
	/* ../public/tier0/mempool.h:137 */
	CPooledStdFunctionJob* AllocZero(CUtlMemoryPool<CPooledStdFunctionJob>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CPooledStdFunctionJob>* , CPooledStdFunctionJob* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CPooledStdFunctionJob>* );
} __attribute__((__aligned__(8)));

// <001B8C2B> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CExecMultiWorkerJob> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CExecMultiWorkerJob>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CExecMultiWorkerJob* Alloc(CUtlMemoryPool<CExecMultiWorkerJob>* );
	/* ../public/tier0/mempool.h:137 */
	CExecMultiWorkerJob* AllocZero(CUtlMemoryPool<CExecMultiWorkerJob>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CExecMultiWorkerJob>* , CExecMultiWorkerJob* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CExecMultiWorkerJob>* );
} __attribute__((__aligned__(8)));

// <001BE4B1> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CThreadPool::CSerialJobExecutor> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CThreadPool::CSerialJobExecutor>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CSerialJobExecutor* Alloc(CUtlMemoryPool<CThreadPool::CSerialJobExecutor>* );
	/* ../public/tier0/mempool.h:137 */
	CSerialJobExecutor* AllocZero(CUtlMemoryPool<CThreadPool::CSerialJobExecutor>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CThreadPool::CSerialJobExecutor>* , CSerialJobExecutor* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CThreadPool::CSerialJobExecutor>* );
} __attribute__((__aligned__(8)));

// <0024DC3E> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CKeyValuesSystem::hash_item_t> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CKeyValuesSystem::hash_item_t>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	hash_item_t* Alloc(CUtlMemoryPool<CKeyValuesSystem::hash_item_t>* );
	/* ../public/tier0/mempool.h:137 */
	hash_item_t* AllocZero(CUtlMemoryPool<CKeyValuesSystem::hash_item_t>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CKeyValuesSystem::hash_item_t>* , hash_item_t* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CKeyValuesSystem::hash_item_t>* );
} __attribute__((__aligned__(8)));

// <00256138> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<KeyValues> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<KeyValues>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	KeyValues* Alloc(CUtlMemoryPool<KeyValues>* );
	/* ../public/tier0/mempool.h:137 */
	KeyValues* AllocZero(CUtlMemoryPool<KeyValues>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<KeyValues>* , KeyValues* );
	void ~CUtlMemoryPool(CUtlMemoryPool<KeyValues>* );
} __attribute__((__aligned__(8)));

// <002A14D3> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<TSPointerListNode_t> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<TSPointerListNode_t>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	TSPointerListNode_t* Alloc(CUtlMemoryPool<TSPointerListNode_t>* );
	/* ../public/tier0/mempool.h:137 */
	TSPointerListNode_t* AllocZero(CUtlMemoryPool<TSPointerListNode_t>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<TSPointerListNode_t>* , TSPointerListNode_t* );
	void ~CUtlMemoryPool(CUtlMemoryPool<TSPointerListNode_t>* );
} __attribute__((__aligned__(8)));

// <005A0400> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CUtlStringTokenSystem::CTokenStringAndSource> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMetho, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<CUtlStringTokenSystem::CTokenStringAndSource>* Alloc(CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMetho);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<CUtlStringTokenSystem::CTokenStringAndSource>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMetho);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMetho, HashFixedDataInternal_t<CUtlStringTokenSystem::CTokenStringAndSource>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHashMetho);
} __attribute__((__aligned__(8)));

// <000441F0> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSchemaClassInfo*>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaClassInfoSynth*> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSc, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<CSchemaClassInfoSynth*>* Alloc(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSc);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<CSchemaClassInfoSynth*>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSc);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSc, HashFixedDataInternal_t<CSchemaClassInfoSynth*>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSc);
} __attribute__((__aligned__(8)));

// <00044945> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSchemaEnumInfo*>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaEnumInfoSynth*> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSche, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<CSchemaEnumInfoSynth*>* Alloc(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSche);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<CSchemaEnumInfoSynth*>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSche);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSche, HashFixedDataInternal_t<CSchemaEnumInfoSynth*>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSche);
} __attribute__((__aligned__(8)));

// <000629A9> ../public/tier0/mempool.h:126
// member functions: 5
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaClassInfo*> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpi, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<CSchemaClassInfo*>* Alloc(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpi);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<CSchemaClassInfo*>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpi);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpi, HashFixedDataInternal_t<CSchemaClassInfo*>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpi);
} __attribute__((__aligned__(8)));

// <00063103> ../public/tier0/mempool.h:126
// member functions: 10
// member variable: 1
// class size: 56
class CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::HashFixedDataInternal_t<CSchemaEnumInfo*> > : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin, int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	HashFixedDataInternal_t<CSchemaEnumInfo*>* Alloc(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin);
	/* ../public/tier0/mempool.h:137 */
	HashFixedDataInternal_t<CSchemaEnumInfo*>* AllocZero(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin);
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin, HashFixedDataInternal_t<CSchemaEnumInfo*>* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin);
	void CUtlMemoryPool(class CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin, int, enum MemoryPoolGrowType_t, const char  *); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseIP15CSchemaEnumInfoLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS2_EEEC4Ei20MemoryPoolGrowType_tPKc */
	class HashFixedDataInternal_t<CSchemaEnumInfo*> * Alloc(class CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseIP15CSchemaEnumInfoLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS2_EEE5AllocEv */
	class HashFixedDataInternal_t<CSchemaEnumInfo*> * AllocZero(class CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseIP15CSchemaEnumInfoLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS2_EEE9AllocZeroEv */
	void Free(class CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin, class HashFixedDataInternal_t<CSchemaEnumInfo*> *); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseIP15CSchemaEnumInfoLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS2_EEE4FreeEPS8_ */
	void ~CUtlMemoryPool(class CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpin); /* linkage=_ZN14CUtlMemoryPoolIN14CUtlTSHashBaseIP15CSchemaEnumInfoLi256Ej27CUtlTSHashGenericHashMethodIjE17CThreadSpinRWLockE23HashFixedDataInternal_tIS2_EEED4Ev */
} __attribute__((__aligned__(8)));

// <00075DD4> ../public/tier0/mempool.h:126
// member functions: 10
// member variable: 1
// class size: 56
class CUtlMemoryPool<CMeshInstance_Imp> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CMeshInstance_Imp>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CMeshInstance_Imp* Alloc(CUtlMemoryPool<CMeshInstance_Imp>* );
	/* ../public/tier0/mempool.h:137 */
	CMeshInstance_Imp* AllocZero(CUtlMemoryPool<CMeshInstance_Imp>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CMeshInstance_Imp>* , CMeshInstance_Imp* );
	void ~CUtlMemoryPool(CUtlMemoryPool<CMeshInstance_Imp>* );
	void CUtlMemoryPool(class CUtlMemoryPool<CMeshInstance_Imp> *, int, enum MemoryPoolGrowType_t, const char  *); /* linkage=_ZN14CUtlMemoryPoolI17CMeshInstance_ImpEC4Ei20MemoryPoolGrowType_tPKc */
	class CMeshInstance_Imp * Alloc(class CUtlMemoryPool<CMeshInstance_Imp> *); /* linkage=_ZN14CUtlMemoryPoolI17CMeshInstance_ImpE5AllocEv */
	class CMeshInstance_Imp * AllocZero(class CUtlMemoryPool<CMeshInstance_Imp> *); /* linkage=_ZN14CUtlMemoryPoolI17CMeshInstance_ImpE9AllocZeroEv */
	void Free(class CUtlMemoryPool<CMeshInstance_Imp> *, class CMeshInstance_Imp *); /* linkage=_ZN14CUtlMemoryPoolI17CMeshInstance_ImpE4FreeEPS0_ */
	void ~CUtlMemoryPool(class CUtlMemoryPool<CMeshInstance_Imp> *); /* linkage=_ZN14CUtlMemoryPoolI17CMeshInstance_ImpED4Ev */
} __attribute__((__aligned__(8)));

// <0007FD55> ../public/tier0/mempool.h:126
// member functions: 9
// member variable: 1
// class size: 56
class CUtlMemoryPool<CMaterial2> : public CUtlMemoryPoolBase {
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:129 */
	void CUtlMemoryPool(CUtlMemoryPool<CMaterial2>* , int, MemoryPoolGrowType_t, const char* );
	/* ../public/tier0/mempool.h:136 */
	CMaterial2* Alloc(CUtlMemoryPool<CMaterial2>* );
	/* ../public/tier0/mempool.h:137 */
	CMaterial2* AllocZero(CUtlMemoryPool<CMaterial2>* );
	/* ../public/tier0/mempool.h:138 */
	void Free(CUtlMemoryPool<CMaterial2>* , CMaterial2* );
	void CUtlMemoryPool(class CUtlMemoryPool<CMaterial2> *, int, enum MemoryPoolGrowType_t, const char  *); /* linkage=_ZN14CUtlMemoryPoolI10CMaterial2EC4Ei20MemoryPoolGrowType_tPKc */
	class CMaterial2 * Alloc(class CUtlMemoryPool<CMaterial2> *); /* linkage=_ZN14CUtlMemoryPoolI10CMaterial2E5AllocEv */
	class CMaterial2 * AllocZero(class CUtlMemoryPool<CMaterial2> *); /* linkage=_ZN14CUtlMemoryPoolI10CMaterial2E9AllocZeroEv */
	void Free(class CUtlMemoryPool<CMaterial2> *, class CMaterial2 *); /* linkage=_ZN14CUtlMemoryPoolI10CMaterial2E4FreeEPS0_ */
	void ~CUtlMemoryPool(class CUtlMemoryPool<CMaterial2> *); /* linkage=_ZN14CUtlMemoryPoolI10CMaterial2ED4Ev */
} __attribute__((__aligned__(8)));

// <03226E45> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CSceneView>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <03226E08> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CSceneView>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <02E99638> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CRenderBatchList>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <02E995FB> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CRenderBatchList>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <02E995BC> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CSceneLayer>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <02E9957F> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CSceneLayer>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <0269E200> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CSfxTable>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <0269E1C3> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CSfxTable>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <02350A56> ../public/tier0/mempool.h:129
void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <02350A19> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <009CF6C2> ../public/tier0/mempool.h:129
void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <009CF685> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <009BCEBC> ../public/tier0/mempool.h:129
void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <009BCE7F> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00543BD2> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00543B95> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <002A1EFF> ../public/tier0/mempool.h:129
void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <002A1EC2> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00178DA7> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00178D6A> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <001729B2> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CUtlTSHashBase<void::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00172975> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CUtlTSHashBase<void::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000F9E58> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CCommandBufferChunk>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000F9E1B> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CCommandBufferChunk>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000F9DF5> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CMediumCommandBufferChunk>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000F9DB8> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CMediumCommandBufferChunk>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000F9D92> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CLargeCommandBufferChunk>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000F9D55> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CLargeCommandBufferChunk>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <005A4250> ../public/tier0/mempool.h:129
void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHas this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <005A4213> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHas this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <002AB07A> ../public/tier0/mempool.h:129
void CUtlMemoryPool<TSPointerListNode_t>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <002AB03D> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<TSPointerListNode_t>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <0025EF87> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <0025EF4A> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <0025ECE5> ../public/tier0/mempool.h:129
void CUtlMemoryPool<KeyValues>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <0025ECA8> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<KeyValues>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <001CD6C2> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CPooledStdFunctionJob>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <001CD685> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CPooledStdFunctionJob>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <001CD51D> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CExecMultiWorkerJob>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <001CD4E0> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CExecMultiWorkerJob>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <001CD354> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CThreadPool::CSerialJobExecutor>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00127DBF> ../public/tier0/mempool.h:129
void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRW this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00127D82> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRW this, int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000CCE40> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000CCE03> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfoSynth::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000CCD43> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000CCD06> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfoSynth::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000C780B> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000C77CE> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000C7734> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <000C76F7> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00079B79> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CMeshInstance_Imp>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00079B3C> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CMeshInstance_Imp>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00169EA6> ../public/tier0/mempool.h:129
void CUtlMemoryPool<CMaterial2>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <00169E69> ../public/tier0/mempool.h:129
inline void CUtlMemoryPool<CMaterial2>::CUtlMemoryPool(int numElements, MemoryPoolGrowType_t growMode, const char* pszAllocOwner)
{
} /* size: 0 */

// <02EB0146> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CSceneView>::Alloc()
{
} /* size: 0 */

// <02E96561> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CRenderBatchList>::Alloc()
{
} /* size: 0 */

// <02E964CF> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CSceneLayer>::Alloc()
{
} /* size: 0 */

// <0269DDF9> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CSfxTable>::Alloc()
{
} /* size: 0 */

// <0234E235> ../public/tier0/mempool.h:136
inline void Alloc(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this)
{
} /* size: 0 */

// <009E9B65> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CCommandBufferChunk>::Alloc()
{
} /* size: 0 */

// <009C610F> ../public/tier0/mempool.h:136
inline void Alloc(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this)
{
} /* size: 0 */

// <009B827B> ../public/tier0/mempool.h:136
inline void Alloc(const CUtlMemoryPool<CUtlTSHashBase<ConcatLayoutResult_t, 1024, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, this)
{
} /* size: 0 */

// <00543A21> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CUtlTSHashBase<InputLayoutVulkan_t::Alloc()
{
} /* size: 0 */

// <002A1E2F> ../public/tier0/mempool.h:136
inline void Alloc(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this)
{
} /* size: 0 */

// <00178625> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Alloc()
{
} /* size: 0 */

// <001745D6> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<TSPointerListNode_t>::Alloc()
{
} /* size: 0 */

// <00170F96> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CUtlTSHashBase<void::Alloc()
{
} /* size: 0 */

// <000FA081> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CMediumCommandBufferChunk>::Alloc()
{
} /* size: 0 */

// <000FA068> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CLargeCommandBufferChunk>::Alloc()
{
} /* size: 0 */

// <005A413D> ../public/tier0/mempool.h:136
inline void Alloc(const CUtlMemoryPool<CUtlTSHashBase<CUtlStringTokenSystem::CTokenStringAndSource, 512, unsigned int, CUtlTSHashGenericHas this)
{
} /* size: 0 */

// <0025F0B4> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::Alloc()
{
} /* size: 0 */

// <0025EC8F> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<KeyValues>::Alloc()
{
} /* size: 0 */

// <001CD70D> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CPooledStdFunctionJob>::Alloc()
{
} /* size: 0 */

// <001CD568> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CExecMultiWorkerJob>::Alloc()
{
} /* size: 0 */

// <001CD3DC> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CThreadPool::CSerialJobExecutor>::Alloc()
{
} /* size: 0 */

// <00127CD2> ../public/tier0/mempool.h:136
inline void Alloc(const CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRW this)
{
} /* size: 0 */

// <000CCA30> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::Alloc()
{
} /* size: 0 */

// <000CCA17> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::Alloc()
{
} /* size: 0 */

// <00079AFE> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CMeshInstance_Imp>::Alloc()
{
} /* size: 0 */

// <00347214> ../public/tier0/mempool.h:136
inline void CUtlMemoryPool<CMaterial2>::Alloc()
{
} /* size: 0 */

// <03226EC4> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CSceneView>::Free(CSceneView* pMem)
{
} /* size: 0 */

// <02E964E8> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CRenderBatchList>::Free(CRenderBatchList* pMem)
{
} /* size: 0 */

// <02E96456> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CSceneLayer>::Free(CSceneLayer* pMem)
{
} /* size: 0 */

// <0234D8D5> ../public/tier0/mempool.h:138
inline void Free(const CUtlMemoryPool<CUtlTSHashBase<ResourceBindingBase_t, 1021, long long unsigned int, CUtlTSHashGenericHashMethod<long this, HashFixedDataInternal_t<ResourceBindingBase_t>* pMem)
{
} /* size: 0 */

// <00B75E53> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CCommandBufferChunk>::Free(CCommandBufferChunk* pMem)
{
} /* size: 0 */

// <0022E7D3> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CMediumCommandBufferChunk>::Free(CMediumCommandBufferChunk* pMem)
{
} /* size: 0 */

// <0022E7AE> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CLargeCommandBufferChunk>::Free(CLargeCommandBufferChunk* pMem)
{
} /* size: 0 */

// <00174E77> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<TSPointerListNode_t>::Free(TSPointerListNode_t* pMem)
{
} /* size: 0 */

// <00174D38> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Free(FencedWaitingList_t<void, void>* pMem)
{
} /* size: 0 */

// <0025F08F> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CKeyValuesSystem::hash_item_t>::Free(hash_item_t* pMem)
{
} /* size: 0 */

// <0025EC6A> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<KeyValues>::Free(KeyValues* pMem)
{
} /* size: 0 */

// <001CD6E8> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CPooledStdFunctionJob>::Free(CPooledStdFunctionJob* pMem)
{
} /* size: 0 */

// <001CD543> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CExecMultiWorkerJob>::Free(CExecMultiWorkerJob* pMem)
{
} /* size: 0 */

// <001CD3B7> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CThreadPool::CSerialJobExecutor>::Free(CSerialJobExecutor* pMem)
{
} /* size: 0 */

// <000C51FA> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaClassInfo::Free(HashFixedDataInternal_t<CSchemaClassInfo*>* pMem)
{
} /* size: 0 */

// <000C51AD> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CUtlTSHashBase<CSchemaEnumInfo::Free(HashFixedDataInternal_t<CSchemaEnumInfo*>* pMem)
{
} /* size: 0 */

// <00079B17> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CMeshInstance_Imp>::Free(CMeshInstance_Imp* pMem)
{
} /* size: 0 */

// <0016A1B9> ../public/tier0/mempool.h:138
inline void CUtlMemoryPool<CMaterial2>::Free(CMaterial2* pMem)
{
} /* size: 0 */

// <026976BF> ../public/tier0/mempool.h:152
// member functions: 14
// member variable: 1
// class size: 56
class CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> > : public CUtlMemoryPool<CSfxTable> {
public:
	/* class CUtlMemoryPool<CSfxTable> <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:155 */
	void CClassMemoryPool(CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >* , int, MemoryPoolGrowType_t);
	/* ../public/tier0/mempool.h:160 */
	void ~CClassMemoryPool(CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >* );
	/* ../public/tier0/mempool.h:175 */
	CSfxTable* Alloc(CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >* );
	/* ../public/tier0/mempool.h:191 */
	CSfxTable* AllocZero(CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >* );
	/* ../public/tier0/mempool.h:207 */
	void Free(CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >* , CSfxTable* );
	/* ../public/tier0/mempool.h:218 */
	void Clear(CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >* );
private:
	/* ../public/tier0/mempool.h:171 */
	void DestructTyped(void* );
	void CClassMemoryPool(class CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> > *, int, enum MemoryPoolGrowType_t); /* linkage=_ZN16CClassMemoryPoolI9CSfxTable14CUtlMemoryPoolIS0_EEC4Ei20MemoryPoolGrowType_t */
	void ~CClassMemoryPool(class CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> > *); /* linkage=_ZN16CClassMemoryPoolI9CSfxTable14CUtlMemoryPoolIS0_EED4Ev */
	class CSfxTable * Alloc(class CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> > *); /* linkage=_ZN16CClassMemoryPoolI9CSfxTable14CUtlMemoryPoolIS0_EE5AllocEv */
	class CSfxTable * AllocZero(class CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> > *); /* linkage=_ZN16CClassMemoryPoolI9CSfxTable14CUtlMemoryPoolIS0_EE9AllocZeroEv */
	void Free(class CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> > *, class CSfxTable *); /* linkage=_ZN16CClassMemoryPoolI9CSfxTable14CUtlMemoryPoolIS0_EE4FreeEPS0_ */
	void Clear(class CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> > *); /* linkage=_ZN16CClassMemoryPoolI9CSfxTable14CUtlMemoryPoolIS0_EE5ClearEv */
	void DestructTyped(void *); /* linkage=_ZN16CClassMemoryPoolI9CSfxTable14CUtlMemoryPoolIS0_EE13DestructTypedEPv */
} __attribute__((__aligned__(8)));

// <02DC41A8> ../public/tier0/mempool.h:152
// member functions: 7
// member variable: 1
// class size: 56
class CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> > : public CUtlMemoryPool<CRenderBatchList> {
public:
	/* class CUtlMemoryPool<CRenderBatchList> <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:155 */
	void CClassMemoryPool(CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >* , int, MemoryPoolGrowType_t);
	/* ../public/tier0/mempool.h:160 */
	void ~CClassMemoryPool(CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >* );
	/* ../public/tier0/mempool.h:175 */
	CRenderBatchList* Alloc(CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >* );
	/* ../public/tier0/mempool.h:191 */
	CRenderBatchList* AllocZero(CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >* );
	/* ../public/tier0/mempool.h:207 */
	void Free(CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >* , CRenderBatchList* );
	/* ../public/tier0/mempool.h:218 */
	void Clear(CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >* );
private:
	/* ../public/tier0/mempool.h:171 */
	void DestructTyped(void* );
} __attribute__((__aligned__(8)));

// <02DC4F0C> ../public/tier0/mempool.h:152
// member functions: 7
// member variable: 1
// class size: 56
class CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> > : public CUtlMemoryPool<CSceneLayer> {
public:
	/* class CUtlMemoryPool<CSceneLayer> <ancestor>; */ /* 0 56 */
	/* ../public/tier0/mempool.h:155 */
	void CClassMemoryPool(CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >* , int, MemoryPoolGrowType_t);
	/* ../public/tier0/mempool.h:160 */
	void ~CClassMemoryPool(CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >* );
	/* ../public/tier0/mempool.h:175 */
	CSceneLayer* Alloc(CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >* );
	/* ../public/tier0/mempool.h:191 */
	CSceneLayer* AllocZero(CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >* );
	/* ../public/tier0/mempool.h:207 */
	void Free(CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >* , CSceneLayer* );
	/* ../public/tier0/mempool.h:218 */
	void Clear(CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >* );
private:
	/* ../public/tier0/mempool.h:171 */
	void DestructTyped(void* );
} __attribute__((__aligned__(8)));

// <02EAC98F> ../public/tier0/mempool.h:155
void CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >::CClassMemoryPool(int numElements, MemoryPoolGrowType_t growMode)
{
} /* size: 0 */

// <02EAC95E> ../public/tier0/mempool.h:155
inline void CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >::CClassMemoryPool(int numElements, MemoryPoolGrowType_t growMode)
{
} /* size: 0 */

// <02EAC8DA> ../public/tier0/mempool.h:155
void CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >::CClassMemoryPool(int numElements, MemoryPoolGrowType_t growMode)
{
} /* size: 0 */

// <02EAC8A9> ../public/tier0/mempool.h:155
inline void CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >::CClassMemoryPool(int numElements, MemoryPoolGrowType_t growMode)
{
} /* size: 0 */

// <0269EB9B> ../public/tier0/mempool.h:155
void CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::CClassMemoryPool(int numElements, MemoryPoolGrowType_t growMode)
{
} /* size: 0 */

// <0269EB6A> ../public/tier0/mempool.h:155
inline void CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::CClassMemoryPool(int numElements, MemoryPoolGrowType_t growMode)
{
} /* size: 0 */

// <02EAC947> ../public/tier0/mempool.h:160
void CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >::~CClassMemoryPool()
{
} /* size: 0 */

// <02EAC92E> ../public/tier0/mempool.h:160
inline void CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >::~CClassMemoryPool()
{
} /* size: 0 */

// <02EAC892> ../public/tier0/mempool.h:160
void CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >::~CClassMemoryPool()
{
} /* size: 0 */

// <02EAC879> ../public/tier0/mempool.h:160
inline void CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >::~CClassMemoryPool()
{
} /* size: 0 */

// <0269EB53> ../public/tier0/mempool.h:160
void CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::~CClassMemoryPool()
{
} /* size: 0 */

// <0269EB3A> ../public/tier0/mempool.h:160
inline void CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::~CClassMemoryPool()
{
} /* size: 0 */

// <02E8C3BA> ../public/tier0/mempool.h:171
// function call: 1
void DestructTyped(void* pMemory)
{
	Destruct<CRenderBatchList>(CRenderBatchList* pMemory); // 171
} /* size: 9, inline expansions: 1 (5 bytes) */

// <02E8C328> ../public/tier0/mempool.h:171
// function call: 1
void DestructTyped(void* pMemory)
{
	Destruct<CSceneLayer>(CSceneLayer* pMemory); // 171
} /* size: 13, inline expansions: 1 (9 bytes) */

// <0269DB9F> ../public/tier0/mempool.h:171
// function call: 1
void DestructTyped(void* pMemory)
{
	Destruct<CSfxTable>(CSfxTable* pMemory); // 171
} /* size: 9, inline expansions: 1 (5 bytes) */

// <02EA7F52> ../public/tier0/mempool.h:175
// variable: 1
inline void CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >::Alloc()
{
	CRenderBatchList* pRet; // 177
} /* size: 0, variables: 1 */

// <02EA7F08> ../public/tier0/mempool.h:175
// variable: 1
inline void CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >::Alloc()
{
	CSceneLayer* pRet; // 177
} /* size: 0, variables: 1 */

// <0269E912> ../public/tier0/mempool.h:175
// variable: 1
inline void CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::Alloc()
{
	CSfxTable* pRet; // 177
} /* size: 0, variables: 1 */

// <02EA7F2D> ../public/tier0/mempool.h:207
inline void CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >::Free(CRenderBatchList* pMem)
{
} /* size: 0 */

// <02EA7EE3> ../public/tier0/mempool.h:207
inline void CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >::Free(CSceneLayer* pMem)
{
} /* size: 0 */

// <02E995E2> ../public/tier0/mempool.h:218
inline void CClassMemoryPool<CRenderBatchList, CUtlMemoryPool<CRenderBatchList> >::Clear()
{
} /* size: 0 */

// <02E99566> ../public/tier0/mempool.h:218
inline void CClassMemoryPool<CSceneLayer, CUtlMemoryPool<CSceneLayer> >::Clear()
{
} /* size: 0 */

// <0269E28D> ../public/tier0/mempool.h:218
inline void CClassMemoryPool<CSfxTable, CUtlMemoryPool<CSfxTable> >::Clear()
{
} /* size: 0 */

// <00034397> ../public/tier0/mempool.h:267
// member variables: 2
// struct size: 16
struct UtlScratchMemoryPoolMark_t {
	void * m_pBlock; /* 0 8 */
	int m_nBytesFree; /* 8 4 */
};

// <000343C6> ../public/tier0/mempool.h:278
// member functions: 42
// member variables: 3
// class size: 16
class CUtlScratchMemoryPool {
	/* ../public/tier0/mempool.h:394 */
	struct MemoryBlock_t {
		MemoryBlock_t * m_pNext; /* 0 8 */
		uint m_nBytesFree; /* 8 4 */
		uint m_nBlockSize; /* 12 4 */
		uint m_nBytesAllocated; /* 16 4 */
		/* ../public/tier0/mempool.h:404 */
		uint8* GetAllocPtr(MemoryBlock_t* , int);
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/mempool.h:283 */
	uint ExternalMemoryOverhead(void);
	/* ../public/tier0/mempool.h:298 */
	void CUtlScratchMemoryPool(CUtlScratchMemoryPool* );
	/* ../public/tier0/mempool.h:299 */
	void CUtlScratchMemoryPool(CUtlScratchMemoryPool* , uint, uint, void* , bool);
	/* ../public/tier0/mempool.h:300 */
	void ~CUtlScratchMemoryPool(CUtlScratchMemoryPool* );
	/* ../public/tier0/mempool.h:302 */
	void Init(CUtlScratchMemoryPool* , uint, uint, void* , bool);
	/* ../public/tier0/mempool.h:306 */
	void* AllocAligned(CUtlScratchMemoryPool* , int, int);
	/* ../public/tier0/mempool.h:309 */
	void* AllocNaturalAligned(CUtlScratchMemoryPool* , int);
	/* ../public/tier0/mempool.h:332 */
	void* Alloc(CUtlScratchMemoryPool* , int);
	/* ../public/tier0/mempool.h:338 */
	void* AllocZero(CUtlScratchMemoryPool* , int);
	/* ../public/tier0/mempool.h:352 */
	const char* DupString(CUtlScratchMemoryPool* , const char* );
	/* ../public/tier0/mempool.h:361 */
	void FreeAll(CUtlScratchMemoryPool* );
	/* ../public/tier0/mempool.h:365 */
	UtlScratchMemoryPoolMark_t GetCurrentAllocPoint(const CUtlScratchMemoryPool* );
	/* ../public/tier0/mempool.h:366 */
	void FreeToAllocPoint(CUtlScratchMemoryPool* , UtlScratchMemoryPoolMark_t);
	/* ../public/tier0/mempool.h:369 */
	size_t AllocSize(const CUtlScratchMemoryPool* );
	/* ../public/tier0/mempool.h:372 */
	size_t AllocationCount(const CUtlScratchMemoryPool* );
	/* ../public/tier0/mempool.h:375 */
	size_t TotalMemFree(const CUtlScratchMemoryPool* );
protected:
	/* ../public/tier0/mempool.h:411 */
	bool IsInitialized(const CUtlScratchMemoryPool* );
	/* ../public/tier0/mempool.h:415 */
	void* AddNewBlock(CUtlScratchMemoryPool* , int);
	/* ../public/tier0/mempool.h:417 */
	int GetFirstBytesFree(const CUtlScratchMemoryPool* );
	/* ../public/tier0/mempool.h:422 */
	int GetBlockUsableBytes(const CUtlScratchMemoryPool* , MemoryBlock_t* );
	MemoryBlock_t * m_pFirstBlock; /* 0 8 */
	int m_nBlockSize; /* 8 4 */
	bool m_bSearchAllBlocks; /* 12 1 */
	uint ExternalMemoryOverhead(void); /* linkage=_ZN21CUtlScratchMemoryPool22ExternalMemoryOverheadEv */
	void CUtlScratchMemoryPool(class CUtlScratchMemoryPool *); /* linkage=_ZN21CUtlScratchMemoryPoolC4Ev */
	void CUtlScratchMemoryPool(class CUtlScratchMemoryPool *, uint, uint, void *, bool); /* linkage=_ZN21CUtlScratchMemoryPoolC4EjjPvb */
	void ~CUtlScratchMemoryPool(class CUtlScratchMemoryPool *); /* linkage=_ZN21CUtlScratchMemoryPoolD4Ev */
	void Init(class CUtlScratchMemoryPool *, uint, uint, void *, bool); /* linkage=_ZN21CUtlScratchMemoryPool4InitEjjPvb */
	void * AllocAligned(class CUtlScratchMemoryPool *, int, int); /* linkage=_ZN21CUtlScratchMemoryPool12AllocAlignedEii */
	void * AllocNaturalAligned(class CUtlScratchMemoryPool *, int); /* linkage=_ZN21CUtlScratchMemoryPool19AllocNaturalAlignedEi */
	void * Alloc(class CUtlScratchMemoryPool *, int); /* linkage=_ZN21CUtlScratchMemoryPool5AllocEi */
	void * AllocZero(class CUtlScratchMemoryPool *, int); /* linkage=_ZN21CUtlScratchMemoryPool9AllocZeroEi */
	const char  * DupString(class CUtlScratchMemoryPool *, const char  *); /* linkage=_ZN21CUtlScratchMemoryPool9DupStringEPKc */
	void FreeAll(class CUtlScratchMemoryPool *); /* linkage=_ZN21CUtlScratchMemoryPool7FreeAllEv */
	class UtlScratchMemoryPoolMark_t GetCurrentAllocPoint(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool20GetCurrentAllocPointEv */
	void FreeToAllocPoint(class CUtlScratchMemoryPool *, class UtlScratchMemoryPoolMark_t); /* linkage=_ZN21CUtlScratchMemoryPool16FreeToAllocPointE26UtlScratchMemoryPoolMark_t */
	size_t AllocSize(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool9AllocSizeEv */
	size_t AllocationCount(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool15AllocationCountEv */
	size_t TotalMemFree(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool12TotalMemFreeEv */
	bool IsInitialized(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool13IsInitializedEv */
	/* <2b1c2b> tier0/mempool.cpp:818 */
	void * AddNewBlock(class CUtlScratchMemoryPool *, int); /* linkage=_ZN21CUtlScratchMemoryPool11AddNewBlockEi */
	int GetFirstBytesFree(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool17GetFirstBytesFreeEv */
	int GetBlockUsableBytes(const class CUtlScratchMemoryPool  *, class MemoryBlock_t *); /* linkage=_ZNK21CUtlScratchMemoryPool19GetBlockUsableBytesEPNS_13MemoryBlock_tE */
};

// <057F125D> ../../public/tier0/mempool.h:278
// member functions: 42
// member variables: 3
// class size: 16
class CUtlScratchMemoryPool {
	/* ../../public/tier0/mempool.h:394 */
	struct MemoryBlock_t {
		MemoryBlock_t * m_pNext; /* 0 8 */
		uint m_nBytesFree; /* 8 4 */
		uint m_nBlockSize; /* 12 4 */
		uint m_nBytesAllocated; /* 16 4 */
		/* ../../public/tier0/mempool.h:404 */
		uint8* GetAllocPtr(MemoryBlock_t* , int);
	} __attribute__((__aligned__(16)));
	/* ../../public/tier0/mempool.h:283 */
	uint ExternalMemoryOverhead(void);
	/* ../../public/tier0/mempool.h:298 */
	void CUtlScratchMemoryPool(CUtlScratchMemoryPool* );
	/* ../../public/tier0/mempool.h:299 */
	void CUtlScratchMemoryPool(CUtlScratchMemoryPool* , uint, uint, void* , bool);
	/* ../../public/tier0/mempool.h:300 */
	void ~CUtlScratchMemoryPool(CUtlScratchMemoryPool* );
	/* ../../public/tier0/mempool.h:302 */
	void Init(CUtlScratchMemoryPool* , uint, uint, void* , bool);
	/* ../../public/tier0/mempool.h:306 */
	void* AllocAligned(CUtlScratchMemoryPool* , int, int);
	/* ../../public/tier0/mempool.h:309 */
	void* AllocNaturalAligned(CUtlScratchMemoryPool* , int);
	/* ../../public/tier0/mempool.h:332 */
	void* Alloc(CUtlScratchMemoryPool* , int);
	/* ../../public/tier0/mempool.h:338 */
	void* AllocZero(CUtlScratchMemoryPool* , int);
	/* ../../public/tier0/mempool.h:352 */
	const char* DupString(CUtlScratchMemoryPool* , const char* );
	/* ../../public/tier0/mempool.h:361 */
	void FreeAll(CUtlScratchMemoryPool* );
	/* ../../public/tier0/mempool.h:365 */
	UtlScratchMemoryPoolMark_t GetCurrentAllocPoint(const CUtlScratchMemoryPool* );
	/* ../../public/tier0/mempool.h:366 */
	void FreeToAllocPoint(CUtlScratchMemoryPool* , UtlScratchMemoryPoolMark_t);
	/* ../../public/tier0/mempool.h:369 */
	size_t AllocSize(const CUtlScratchMemoryPool* );
	/* ../../public/tier0/mempool.h:372 */
	size_t AllocationCount(const CUtlScratchMemoryPool* );
	/* ../../public/tier0/mempool.h:375 */
	size_t TotalMemFree(const CUtlScratchMemoryPool* );
protected:
	/* ../../public/tier0/mempool.h:411 */
	bool IsInitialized(const CUtlScratchMemoryPool* );
	/* ../../public/tier0/mempool.h:415 */
	void* AddNewBlock(CUtlScratchMemoryPool* , int);
	/* ../../public/tier0/mempool.h:417 */
	int GetFirstBytesFree(const CUtlScratchMemoryPool* );
	/* ../../public/tier0/mempool.h:422 */
	int GetBlockUsableBytes(const CUtlScratchMemoryPool* , MemoryBlock_t* );
	MemoryBlock_t * m_pFirstBlock; /* 0 8 */
	int m_nBlockSize; /* 8 4 */
	bool m_bSearchAllBlocks; /* 12 1 */
	uint ExternalMemoryOverhead(void); /* linkage=_ZN21CUtlScratchMemoryPool22ExternalMemoryOverheadEv */
	void CUtlScratchMemoryPool(class CUtlScratchMemoryPool *); /* linkage=_ZN21CUtlScratchMemoryPoolC4Ev */
	void CUtlScratchMemoryPool(class CUtlScratchMemoryPool *, uint, uint, void *, bool); /* linkage=_ZN21CUtlScratchMemoryPoolC4EjjPvb */
	void ~CUtlScratchMemoryPool(class CUtlScratchMemoryPool *); /* linkage=_ZN21CUtlScratchMemoryPoolD4Ev */
	void Init(class CUtlScratchMemoryPool *, uint, uint, void *, bool); /* linkage=_ZN21CUtlScratchMemoryPool4InitEjjPvb */
	void * AllocAligned(class CUtlScratchMemoryPool *, int, int); /* linkage=_ZN21CUtlScratchMemoryPool12AllocAlignedEii */
	void * AllocNaturalAligned(class CUtlScratchMemoryPool *, int); /* linkage=_ZN21CUtlScratchMemoryPool19AllocNaturalAlignedEi */
	void * Alloc(class CUtlScratchMemoryPool *, int); /* linkage=_ZN21CUtlScratchMemoryPool5AllocEi */
	void * AllocZero(class CUtlScratchMemoryPool *, int); /* linkage=_ZN21CUtlScratchMemoryPool9AllocZeroEi */
	const char  * DupString(class CUtlScratchMemoryPool *, const char  *); /* linkage=_ZN21CUtlScratchMemoryPool9DupStringEPKc */
	void FreeAll(class CUtlScratchMemoryPool *); /* linkage=_ZN21CUtlScratchMemoryPool7FreeAllEv */
	class UtlScratchMemoryPoolMark_t GetCurrentAllocPoint(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool20GetCurrentAllocPointEv */
	void FreeToAllocPoint(class CUtlScratchMemoryPool *, class UtlScratchMemoryPoolMark_t); /* linkage=_ZN21CUtlScratchMemoryPool16FreeToAllocPointE26UtlScratchMemoryPoolMark_t */
	size_t AllocSize(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool9AllocSizeEv */
	size_t AllocationCount(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool15AllocationCountEv */
	size_t TotalMemFree(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool12TotalMemFreeEv */
	bool IsInitialized(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool13IsInitializedEv */
	/* <2b1c2b> tier0/mempool.cpp:818 */
	void * AddNewBlock(class CUtlScratchMemoryPool *, int); /* linkage=_ZN21CUtlScratchMemoryPool11AddNewBlockEi */
	int GetFirstBytesFree(const class CUtlScratchMemoryPool  *); /* linkage=_ZNK21CUtlScratchMemoryPool17GetFirstBytesFreeEv */
	int GetBlockUsableBytes(const class CUtlScratchMemoryPool  *, class MemoryBlock_t *); /* linkage=_ZNK21CUtlScratchMemoryPool19GetBlockUsableBytesEPNS_13MemoryBlock_tE */
};

// <00E690F2> ../public/tier0/mempool.h:298
void CUtlScratchMemoryPool::CUtlScratchMemoryPool()
{
} /* size: 0 */

// <067D0913> ../public/tier0/mempool.h:299
void CUtlScratchMemoryPool::CUtlScratchMemoryPool(uint nBlockSize, uint nExternalMemBlockSize, void* pExternalMem, bool bSearchAllBlocks)
{
} /* size: 0 */

// <067D08F7> ../public/tier0/mempool.h:300
void CUtlScratchMemoryPool::~CUtlScratchMemoryPool()
{
} /* size: 0 */

// <067E17CA> ../public/tier0/mempool.h:332
inline void* CUtlScratchMemoryPool::Alloc(int nSizeInBytes)
{
} /* size: 0 */

// <002B1535> ../public/tier0/mempool.h:404
inline void MemoryBlock_t::GetAllocPtr(int nOffset)
{
} /* size: 0 */

// <002B151C> ../public/tier0/mempool.h:411
inline void CUtlScratchMemoryPool::IsInitialized()
{
} /* size: 0 */

// <002B1503> ../public/tier0/mempool.h:417
inline void CUtlScratchMemoryPool::GetFirstBytesFree()
{
} /* size: 0 */

// <002B14DD> ../public/tier0/mempool.h:422
inline void CUtlScratchMemoryPool::GetBlockUsableBytes(MemoryBlock_t* pBlock)
{
} /* size: 0 */

// <00017E0F> ../public/tier0/mempool.h:461
// member functions: 27
// member variables: 6
// class size: 56
class CUtlMemoryBlockAllocator {
	/* ../public/tier0/mempool.h:491 */
	struct MemPage_t {
		uint m_nTotalLen; /* 0 4 */
		uint m_nSpaceUsed; /* 4 4 */
		char * m_pData; /* 8 8 */
		/* ../public/tier0/mempool.h:497 */
		uint AvailableSpace(const MemPage_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	const uint kPageBits; /* 0 4 */
	const uint kPageMask; /* 4 4 */
	const uint kOffsetBits; /* 8 4 */
	const uint kOffsetMask; /* 12 4 */
	/* ../public/tier0/mempool.h:468 */
	uint PageFromBlock(const CUtlMemoryBlockAllocator* , blockpooloffset_t);
	/* ../public/tier0/mempool.h:472 */
	uint OffsetFromBlock(const CUtlMemoryBlockAllocator* , blockpooloffset_t);
	/* ../public/tier0/mempool.h:476 */
	blockpooloffset_t MakeBlock(const CUtlMemoryBlockAllocator* , uint, uint);
	/* ../public/tier0/mempool.h:486 */
	void CUtlMemoryBlockAllocator(CUtlMemoryBlockAllocator* , int, uint);
	/* ../public/tier0/mempool.h:487 */
	void ~CUtlMemoryBlockAllocator(CUtlMemoryBlockAllocator* );
	/* ../public/tier0/mempool.h:489 */
	void Purge(CUtlMemoryBlockAllocator* );
	/* ../public/tier0/mempool.h:500 */
	size_t MemUsage(const CUtlMemoryBlockAllocator* );
	/* ../public/tier0/mempool.h:501 */
	void SetPageSize(CUtlMemoryBlockAllocator* , uint);
	/* ../public/tier0/mempool.h:502 */
	blockpooloffset_t Alloc(CUtlMemoryBlockAllocator* , uint);
	/* ../public/tier0/mempool.h:504 */
	blockpooloffset_t AllocCopy(CUtlMemoryBlockAllocator* , const char* , uint);
	/* ../public/tier0/mempool.h:506 */
	char* MemFromBlock(const CUtlMemoryBlockAllocator* , blockpooloffset_t);
	/* ../public/tier0/mempool.h:514 */
	char* AllocPtr(CUtlMemoryBlockAllocator* , uint);
	/* ../public/tier0/mempool.h:520 */
	int FindPageWithSpace(const CUtlMemoryBlockAllocator* , uint);
	CUtlVector<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> > m_Pages; /* 16 32 */
	uint m_nMinPageSize; /* 48 4 */
	uint PageFromBlock(const class CUtlMemoryBlockAllocator  *, blockpooloffset_t); /* linkage=_ZNK24CUtlMemoryBlockAllocator13PageFromBlockEj */
	uint OffsetFromBlock(const class CUtlMemoryBlockAllocator  *, blockpooloffset_t); /* linkage=_ZNK24CUtlMemoryBlockAllocator15OffsetFromBlockEj */
	blockpooloffset_t MakeBlock(const class CUtlMemoryBlockAllocator  *, uint, uint); /* linkage=_ZNK24CUtlMemoryBlockAllocator9MakeBlockEjj */
	void CUtlMemoryBlockAllocator(class CUtlMemoryBlockAllocator *, int, uint); /* linkage=_ZN24CUtlMemoryBlockAllocatorC4Eij */
	void ~CUtlMemoryBlockAllocator(class CUtlMemoryBlockAllocator *); /* linkage=_ZN24CUtlMemoryBlockAllocatorD4Ev */
	void Purge(class CUtlMemoryBlockAllocator *); /* linkage=_ZN24CUtlMemoryBlockAllocator5PurgeEv */
	size_t MemUsage(const class CUtlMemoryBlockAllocator  *); /* linkage=_ZNK24CUtlMemoryBlockAllocator8MemUsageEv */
	void SetPageSize(class CUtlMemoryBlockAllocator *, uint); /* linkage=_ZN24CUtlMemoryBlockAllocator11SetPageSizeEj */
	blockpooloffset_t Alloc(class CUtlMemoryBlockAllocator *, uint); /* linkage=_ZN24CUtlMemoryBlockAllocator5AllocEj */
	blockpooloffset_t AllocCopy(class CUtlMemoryBlockAllocator *, const char  *, uint); /* linkage=_ZN24CUtlMemoryBlockAllocator9AllocCopyEPKcj */
	char * MemFromBlock(const class CUtlMemoryBlockAllocator  *, blockpooloffset_t); /* linkage=_ZNK24CUtlMemoryBlockAllocator12MemFromBlockEj */
	char * AllocPtr(class CUtlMemoryBlockAllocator *, uint); /* linkage=_ZN24CUtlMemoryBlockAllocator8AllocPtrEj */
	int FindPageWithSpace(const class CUtlMemoryBlockAllocator  *, uint); /* linkage=_ZNK24CUtlMemoryBlockAllocator17FindPageWithSpaceEj */
};

// <067E17A4> ../public/tier0/mempool.h:468
inline void CUtlMemoryBlockAllocator::PageFromBlock(blockpooloffset_t nBlock)
{
} /* size: 0 */

// <067E177E> ../public/tier0/mempool.h:472
inline void CUtlMemoryBlockAllocator::OffsetFromBlock(blockpooloffset_t nBlock)
{
} /* size: 0 */

// <002B145E> ../public/tier0/mempool.h:476
inline void CUtlMemoryBlockAllocator::MakeBlock(uint nPage, uint nOffset)
{
} /* size: 0 */

// <0568ADA3> ../public/tier0/mempool.h:486
void CUtlMemoryBlockAllocator::CUtlMemoryBlockAllocator(int nPoolReserve, uint nMinPageSize)
{
} /* size: 0 */

// <0568AB94> ../public/tier0/mempool.h:487
void CUtlMemoryBlockAllocator::~CUtlMemoryBlockAllocator()
{
} /* size: 0 */

// <002B1445> ../public/tier0/mempool.h:497
inline void MemPage_t::AvailableSpace()
{
} /* size: 0 */

// <067E174B> ../public/tier0/mempool.h:506
// variable: 1
inline void CUtlMemoryBlockAllocator::MemFromBlock(blockpooloffset_t nIndex)
{
	uint nPage; // 508
} /* size: 0, variables: 1 */

// <00574B32> ../public/tier0/mempool.h:514
inline void CUtlMemoryBlockAllocator::AllocPtr(uint nSize)
{
} /* size: 0 */

// <0158B671> ../public/tier0/mempool.h:538
void CEnduringClassMemoryPool<CAnimPose>::~CEnduringClassMemoryPool()
{
} /* size: 0 */

// <0158B654> ../public/tier0/mempool.h:538
inline void CEnduringClassMemoryPool<CAnimPose>::~CEnduringClassMemoryPool()
{
} /* size: 0 */

// <00F2F5D6> ../public/tier0/mempool.h:538
// member functions: 18
// member variables: 4
// vtable entry: 1
// class size: 80
class CEnduringClassMemoryPool<CAnimPose> {
	/* ../public/tier0/mempool.h:556 */
	struct Block {
		/* ../public/tier0/mempool.h:558 */
		void ~Block(Block* );
		CAnimPose * m_pElements; /* 0 8 */
		uint32_t m_elementCount; /* 8 4 */
		void Block(Block* );
	};
	void ~CEnduringClassMemoryPool(CEnduringClassMemoryPool<CAnimPose>* );
	void CEnduringClassMemoryPool(CEnduringClassMemoryPool<CAnimPose>* , CEnduringClassMemoryPool<CAnimPose>& );
	void CEnduringClassMemoryPool(CEnduringClassMemoryPool<CAnimPose>* , CEnduringClassMemoryPool<CAnimPose>& );
	int ()(void) * * _vptr.CEnduringClassMemoryPool; /* 0 8 */
	/* ../public/tier0/mempool.h:573 */
	void CEnduringClassMemoryPool(CEnduringClassMemoryPool<CAnimPose>* , uint32_t);
	/* ../public/tier0/mempool.h:582 */
	CAnimPose* Alloc(CEnduringClassMemoryPool<CAnimPose>* );
	/* ../public/tier0/mempool.h:602 */
	void Free(CEnduringClassMemoryPool<CAnimPose>* , CAnimPose* );
protected:
	/* ../public/tier0/mempool.h:550 */
	virtual void InitObject(CEnduringClassMemoryPool<CAnimPose>* , CAnimPose& );
	/* ../public/tier0/mempool.h:610 */
	void AddNewBlock(CEnduringClassMemoryPool<CAnimPose>* );
private:
	CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > m_freeList; /* 8 32 */
	CUtlVectorConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > > m_blocks; /* 40 32 */
	uint32_t m_blockSize; /* 72 4 */
	/* ../public/tier0/mempool.h:563 */
	typedef struct unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > BlockPtr;
	void Free(class CEnduringClassMemoryPool<CAnimPose> *, class CAnimPose *); /* linkage=_ZN24CEnduringClassMemoryPoolI9CAnimPoseE4FreeEPS0_ */
	/* <e8a51b> ../public/tier0/mempool.h:550 */
	virtual void InitObject(class CEnduringClassMemoryPool<CAnimPose> *, class CAnimPose &); /* linkage=_ZN24CEnduringClassMemoryPoolI9CAnimPoseE10InitObjectERS0_ */
	void AddNewBlock(class CEnduringClassMemoryPool<CAnimPose> *); /* linkage=_ZN24CEnduringClassMemoryPoolI9CAnimPoseE11AddNewBlockEv */
	class CAnimPose * Alloc(class CEnduringClassMemoryPool<CAnimPose> *); /* linkage=_ZN24CEnduringClassMemoryPoolI9CAnimPoseE5AllocEv */
	void ~CEnduringClassMemoryPool(class CEnduringClassMemoryPool<CAnimPose> *); /* linkage=_ZN24CEnduringClassMemoryPoolI9CAnimPoseED4Ev */
	void CEnduringClassMemoryPool(class CEnduringClassMemoryPool<CAnimPose> *, class CEnduringClassMemoryPool<CAnimPose> &); /* linkage=_ZN24CEnduringClassMemoryPoolI9CAnimPoseEC4EOS1_ */
	void CEnduringClassMemoryPool(class CEnduringClassMemoryPool<CAnimPose> *, class CEnduringClassMemoryPool<CAnimPose> &); /* linkage=_ZN24CEnduringClassMemoryPoolI9CAnimPoseEC4ERS1_ */
	void CEnduringClassMemoryPool(class CEnduringClassMemoryPool<CAnimPose> *, uint32_t); /* linkage=_ZN24CEnduringClassMemoryPoolI9CAnimPoseEC4Ej */
};

// <01573B4D> ../public/tier0/mempool.h:550
void CEnduringClassMemoryPool<CAnimPose>::InitObject(CAnimPose& pObject)
{
} /* size: 5 */

// <00E09E07> ../public/tier0/mempool.h:550
inline void CEnduringClassMemoryPool<CAnimPose>::InitObject(CAnimPose& pObject)
{
} /* size: 0 */

// <0157AE3C> ../public/tier0/mempool.h:556
void Block::Block()
{
} /* size: 0 */

// <0157AE1F> ../public/tier0/mempool.h:556
inline void Block::Block()
{
} /* size: 0 */

// <0156D737> ../public/tier0/mempool.h:558
void Block::~Block()
{
} /* size: 0 */

// <0156D71E> ../public/tier0/mempool.h:558
inline void Block::~Block()
{
} /* size: 0 */

// <00F5778B> ../public/tier0/mempool.h:573
void CEnduringClassMemoryPool<CAnimPose>::CEnduringClassMemoryPool(uint32_t blockSize)
{
} /* size: 0 */

// <00F57765> ../public/tier0/mempool.h:573
inline void CEnduringClassMemoryPool<CAnimPose>::CEnduringClassMemoryPool(uint32_t blockSize)
{
} /* size: 0 */

// <01580AD4> ../public/tier0/mempool.h:582
// variable: 1
inline void CEnduringClassMemoryPool<CAnimPose>::Alloc()
{
	CAnimPose* newObject; // 593
} /* size: 0, variables: 1 */

// <02728AAB> ../public/tier0/mempool.h:602
inline void CEnduringClassMemoryPool<CAnimPose>::Free(CAnimPose* pObject)
{
} /* size: 0 */

// <015796B8> ../public/tier0/mempool.h:610
// variables: 3
// function calls: 113
void CEnduringClassMemoryPool<CAnimPose>::AddNewBlock()
{
	BlockPtr pNewBlock; // 613
	int nIndex; // 634
	{
		uint32_t i; // 621
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlStack<CAnimPose::GrowStack(); // 267
		CUtlMemory<CAnimPose::operator[](
				int i);  // 155
		CUtlStack<CAnimPose::Element(
			int i);  // 268
		CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
						CAnimPose* const& src);  // 268
		CUtlStack<CAnimPose::Push(
			CAnimPose* const& src);  // 630
		CRefCountedMemPoolObject<CAnimPose>::SetPool(
			CEnduringClassMemoryPool<CAnimPose>* pPool);  // 627
	}
	Block::Block(); // 613
	_Head_base<1, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> >::_Tuple_impl(); // 303
	_Head_base<0, CEnduringClassMemoryPool<CAnimPose>::Block::_Head_base(); // 303
	_Tuple_impl<0, CEnduringClassMemoryPool<CAnimPose>::Block::_Tuple_impl(); // 966
	tuple<CEnduringClassMemoryPool<CAnimPose>::Block::tuple(); // 169
	_M_ptr(const __uniq_ptr_impl<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose> this); // 169
	__uniq_ptr_impl(const __uniq_ptr_impl<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose> this,
			pointer __p);  // 234
	__uniq_ptr_data(const __uniq_ptr_data<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose> this,
			pointer);  // 311
	unique_ptr<>(const unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Blo this,
			pointer __p);  // 613
	CUtlMemory<CAnimPose::IsGrowable(); // 881
	CUtlMemory<CAnimPose::IsExternallyAllocated(); // 888
	CUtlMemory<CAnimPose::EnsureCapacity(
			int num);  // 243
	CUtlStack<CAnimPose::ResetDbgInfo(); // 244
	CUtlStack<CAnimPose::EnsureCapacity(
			int num);  // 620
	CUtlStack<CAnimPose::Count(); // 620
	AllocSize(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEndur this); // 392
	NumAllocated(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEndur this); // 1143
	{
	}
	RememberAllocSize(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this,
				size_t sz);  // 403
	ReAlloc(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this,
		size_t sz);  // 409
	Grow(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this,
		int num);  // 806
	ResetDbgInfo(const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this); // 824
	GrowMemory(const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this,
			int num);  // 1145
	operator[](const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this,
			int i);  // 602
	Element(const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this,
		int i);  // 1148
	_Head_base<1, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> >::_Tuple_impl(); // 303
	_Head_base<0, CEnduringClassMemoryPool<CAnimPose>::Block::_Head_base(); // 303
	_Tuple_impl<0, CEnduringClassMemoryPool<CAnimPose>::Block::_Tuple_impl(); // 966
	tuple<CEnduringClassMemoryPool<CAnimPose>::Block::tuple(); // 167
	__uniq_ptr_impl(const __uniq_ptr_impl<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose> this); // 232
	__uniq_ptr_data(const __uniq_ptr_data<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose> this); // 298
	unique_ptr<>(const unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Blo this); // 1479
	Construct<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > >(unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > pMemory); // 1148
	AddToTail(const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this); // 634
	Base(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this); // 365
	operator[](const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this,
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this,
			int i);  // 635
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 344
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 17
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 17
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 17
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 17
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 17
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 17
	CAnimPose::~CAnimPose(); // 558
	Block::~Block(); // 92
	default_delete<CEnduringClassMemoryPool<CAnimPose>::Block>::operator(
			Block* __ptr);  // 86
	default_delete<CEnduringClassMemoryPool<CAnimPose>::Block>::operator(
			Block* __ptr);  // 204
	reset(const __uniq_ptr_impl<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose> this,
		pointer __p);  // 184
	operator=(const __uniq_ptr_impl<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose> this,
			__uniq_ptr_impl<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Bloc __u);  // 236
	operator=(const __uniq_ptr_data<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose> this,
			__uniq_ptr_data<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Bloc);  // 408
	operator=(const unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Blo this,
			unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > );  // 635
} /* size: 0, variables: 2, inline expansions: 104 (0 bytes) */

// <022DFFFB> ../public/tier0/mempool.h:646
void CRefCountedMemPoolObject<CAnimPose>::CRefCountedMemPoolObject()
{
} /* size: 0 */

// <022DFFDE> ../public/tier0/mempool.h:646
inline void CRefCountedMemPoolObject<CAnimPose>::CRefCountedMemPoolObject()
{
} /* size: 0 */

// <000882B0> ../public/tier0/mempool.h:646
// member functions: 12
// member variables: 3
// class size: 24
class CRefCountedMemPoolObject<CAnimPose> {
	int ()(void) * * _vptr.CRefCountedMemPoolObject; /* 0 8 */
	/* ../public/tier0/mempool.h:649 */
	virtual void ~CRefCountedMemPoolObject(CRefCountedMemPoolObject<CAnimPose>* );
	/* ../public/tier0/mempool.h:667 */
	void SetPool(CRefCountedMemPoolObject<CAnimPose>* , CEnduringClassMemoryPool<CAnimPose>* );
private:
	/* ../public/tier0/mempool.h:674 */
	int GetRefCount(const CRefCountedMemPoolObject<CAnimPose>* );
	/* ../public/tier0/mempool.h:681 */
	int AddRef(const CRefCountedMemPoolObject<CAnimPose>* );
	/* ../public/tier0/mempool.h:688 */
	int Release(const CRefCountedMemPoolObject<CAnimPose>* );
	CEnduringClassMemoryPool<CAnimPose> * m_pPool; /* 8 8 */
	int32 m_iRefs; /* 16 4 */
	void CRefCountedMemPoolObject(class CRefCountedMemPoolObject<CAnimPose> *, const class CRefCountedMemPoolObject<CAnimPose>  &); /* linkage=_ZN24CRefCountedMemPoolObjectI9CAnimPoseEC4ERKS1_ */
	void CRefCountedMemPoolObject(class CRefCountedMemPoolObject<CAnimPose> *); /* linkage=_ZN24CRefCountedMemPoolObjectI9CAnimPoseEC4Ev */
	virtual void ~CRefCountedMemPoolObject(class CRefCountedMemPoolObject<CAnimPose> *); /* linkage=_ZN24CRefCountedMemPoolObjectI9CAnimPoseED4Ev */
	void SetPool(class CRefCountedMemPoolObject<CAnimPose> *, class CEnduringClassMemoryPool<CAnimPose> *); /* linkage=_ZN24CRefCountedMemPoolObjectI9CAnimPoseE7SetPoolEP24CEnduringClassMemoryPoolIS0_E */
	int GetRefCount(const class CRefCountedMemPoolObject<CAnimPose>  *); /* linkage=_ZNK24CRefCountedMemPoolObjectI9CAnimPoseE11GetRefCountEv */
	int AddRef(const class CRefCountedMemPoolObject<CAnimPose>  *); /* linkage=_ZNK24CRefCountedMemPoolObjectI9CAnimPoseE6AddRefEv */
	int Release(const class CRefCountedMemPoolObject<CAnimPose>  *); /* linkage=_ZNK24CRefCountedMemPoolObjectI9CAnimPoseE7ReleaseEv */
};

// <00C11809> ../public/tier0/mempool.h:646
// member functions: 14
// member variables: 3
// class size: 24
class CRefCountedMemPoolObject<CAnimPose> {
	void CRefCountedMemPoolObject(CRefCountedMemPoolObject<CAnimPose>* , const CRefCountedMemPoolObject<CAnimPose>& );
	void CRefCountedMemPoolObject(CRefCountedMemPoolObject<CAnimPose>* );
	int ()(void) * * _vptr.CRefCountedMemPoolObject; /* 0 8 */
	/* ../public/tier0/mempool.h:649 */
	virtual void ~CRefCountedMemPoolObject(CRefCountedMemPoolObject<CAnimPose>* );
	/* ../public/tier0/mempool.h:667 */
	void SetPool(CRefCountedMemPoolObject<CAnimPose>* , CEnduringClassMemoryPool<CAnimPose>* );
private:
	/* ../public/tier0/mempool.h:674 */
	int GetRefCount(const CRefCountedMemPoolObject<CAnimPose>* );
	/* ../public/tier0/mempool.h:681 */
	int AddRef(const CRefCountedMemPoolObject<CAnimPose>* );
	/* ../public/tier0/mempool.h:688 */
	int Release(const CRefCountedMemPoolObject<CAnimPose>* );
	CEnduringClassMemoryPool<CAnimPose> * m_pPool; /* 8 8 */
	int32 m_iRefs; /* 16 4 */
	void CRefCountedMemPoolObject(class CRefCountedMemPoolObject<CAnimPose> *, const class CRefCountedMemPoolObject<CAnimPose>  &); /* linkage=_ZN24CRefCountedMemPoolObjectI9CAnimPoseEC4ERKS1_ */
	void CRefCountedMemPoolObject(class CRefCountedMemPoolObject<CAnimPose> *); /* linkage=_ZN24CRefCountedMemPoolObjectI9CAnimPoseEC4Ev */
	virtual void ~CRefCountedMemPoolObject(class CRefCountedMemPoolObject<CAnimPose> *); /* linkage=_ZN24CRefCountedMemPoolObjectI9CAnimPoseED4Ev */
	void SetPool(class CRefCountedMemPoolObject<CAnimPose> *, class CEnduringClassMemoryPool<CAnimPose> *); /* linkage=_ZN24CRefCountedMemPoolObjectI9CAnimPoseE7SetPoolEP24CEnduringClassMemoryPoolIS0_E */
	int GetRefCount(const class CRefCountedMemPoolObject<CAnimPose>  *); /* linkage=_ZNK24CRefCountedMemPoolObjectI9CAnimPoseE11GetRefCountEv */
	int AddRef(const class CRefCountedMemPoolObject<CAnimPose>  *); /* linkage=_ZNK24CRefCountedMemPoolObjectI9CAnimPoseE6AddRefEv */
	int Release(const class CRefCountedMemPoolObject<CAnimPose>  *); /* linkage=_ZNK24CRefCountedMemPoolObjectI9CAnimPoseE7ReleaseEv */
};

// <02728A7C> ../public/tier0/mempool.h:649
void CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject()
{
} /* size: 5 */

// <027289F8> ../public/tier0/mempool.h:649
// function call: 1
void CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject()
{
	CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
} /* size: 14, inline expansions: 1 (0 bytes) */

// <027289DF> ../public/tier0/mempool.h:649
inline void CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject()
{
} /* size: 0 */

// <01573B27> ../public/tier0/mempool.h:667
inline void CRefCountedMemPoolObject<CAnimPose>::SetPool(CEnduringClassMemoryPool<CAnimPose>* pPool)
{
} /* size: 0 */

// <017192D2> ../public/tier0/mempool.h:681
inline void CRefCountedMemPoolObject<CAnimPose>::AddRef()
{
} /* size: 0 */

// <02729E58> ../public/tier0/mempool.h:688
// variables: 2
inline void CRefCountedMemPoolObject<CAnimPose>::Release()
{
	int result; // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
	}
} /* size: 0, variables: 1 */

