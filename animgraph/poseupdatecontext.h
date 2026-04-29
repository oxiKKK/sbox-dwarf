
//
// animgraph/poseupdatecontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//	classes: 6
//	struct: 1
//

// <015876FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:23
void OpResult::OpResult()
{
} /* size: 0 */

// <015876E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:23
inline void OpResult::OpResult()
{
} /* size: 0 */

// <015876CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:23
void OpResult::~OpResult()
{
} /* size: 0 */

// <015876AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:23
inline void OpResult::~OpResult()
{
} /* size: 0 */

// <0157955B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:23
void OpResult::OpResult(const OpResult &)
{
} /* size: 0 */

// <0157953A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:23
inline void OpResult::OpResult(const OpResult &)
{
} /* size: 0 */

// <0155AC4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:23
// member functions: 3
// member variables: 2
// struct size: 16
struct OpResult {
	CAnimPosePtr m_pPose; /* 0 8 */
	int m_refCount; /* 8 4 */
	void OpResult(OpResult* , const OpResult& );
	void ~OpResult(OpResult* );
	void OpResult(OpResult* );
};

// <0158B6D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:34
void CDecompressionContext::~CDecompressionContext()
{
} /* size: 0 */

// <0158B6BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:34
inline void CDecompressionContext::~CDecompressionContext()
{
} /* size: 0 */

// <00DDD821> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:34
// member functions: 13
// member variables: 4
// class size: 80
class CDecompressionContext {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:37 */
	void CDecompressionContext(CDecompressionContext* , HModel);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:43 */
	IBoneSetup& GetBoneSetup(CDecompressionContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:44 */
	const IBoneSetup& GetBoneSetup(const CDecompressionContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:48 */
	void* GetBonePositionDecompressCache(CDecompressionContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:49 */
	void* GetBoneRotationDecompressCache(CDecompressionContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:52 */
	int GetRequestPatternIndex(const CDecompressionContext* );
private:
	IBoneSetup m_boneSetup; /* 0 8 */
	CUtlVectorConservative<Vector> m_bonePositionCache; /* 8 32 */
	CUtlVectorConservative<Quaternion> m_boneRotationCache; /* 40 32 */
	int m_nRequestPattern; /* 72 4 */
	void CDecompressionContext(class CDecompressionContext *, HModel); /* linkage=_ZN21CDecompressionContextC4E11CWeakHandleI25InfoForResourceTypeCModelE */
	/* <15d6544> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:53 */
	class IBoneSetup & GetBoneSetup(class CDecompressionContext *); /* linkage=_ZN21CDecompressionContext12GetBoneSetupEv */
	const class IBoneSetup  & GetBoneSetup(const class CDecompressionContext  *); /* linkage=_ZNK21CDecompressionContext12GetBoneSetupEv */
	void * GetBonePositionDecompressCache(class CDecompressionContext *); /* linkage=_ZN21CDecompressionContext30GetBonePositionDecompressCacheEv */
	void * GetBoneRotationDecompressCache(class CDecompressionContext *); /* linkage=_ZN21CDecompressionContext30GetBoneRotationDecompressCacheEv */
	int GetRequestPatternIndex(const class CDecompressionContext  *); /* linkage=_ZNK21CDecompressionContext22GetRequestPatternIndexEv */
	void ~CDecompressionContext(class CDecompressionContext *); /* linkage=_ZN21CDecompressionContextD4Ev */
};

// <0155D390> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:34
// member functions: 14
// member variables: 4
// class size: 80
class CDecompressionContext {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:37 */
	void CDecompressionContext(CDecompressionContext* , HModel);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:43 */
	IBoneSetup& GetBoneSetup(CDecompressionContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:44 */
	const IBoneSetup& GetBoneSetup(const CDecompressionContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:48 */
	void* GetBonePositionDecompressCache(CDecompressionContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:49 */
	void* GetBoneRotationDecompressCache(CDecompressionContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:52 */
	int GetRequestPatternIndex(const CDecompressionContext* );
private:
	IBoneSetup m_boneSetup; /* 0 8 */
	CUtlVectorConservative<Vector> m_bonePositionCache; /* 8 32 */
	CUtlVectorConservative<Quaternion> m_boneRotationCache; /* 40 32 */
	int m_nRequestPattern; /* 72 4 */
	void ~CDecompressionContext(CDecompressionContext* );
	void CDecompressionContext(class CDecompressionContext *, HModel); /* linkage=_ZN21CDecompressionContextC4E11CWeakHandleI25InfoForResourceTypeCModelE */
	/* <15d6544> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:53 */
	class IBoneSetup & GetBoneSetup(class CDecompressionContext *); /* linkage=_ZN21CDecompressionContext12GetBoneSetupEv */
	const class IBoneSetup  & GetBoneSetup(const class CDecompressionContext  *); /* linkage=_ZNK21CDecompressionContext12GetBoneSetupEv */
	void * GetBonePositionDecompressCache(class CDecompressionContext *); /* linkage=_ZN21CDecompressionContext30GetBonePositionDecompressCacheEv */
	void * GetBoneRotationDecompressCache(class CDecompressionContext *); /* linkage=_ZN21CDecompressionContext30GetBoneRotationDecompressCacheEv */
	int GetRequestPatternIndex(const class CDecompressionContext  *); /* linkage=_ZNK21CDecompressionContext22GetRequestPatternIndexEv */
	void ~CDecompressionContext(class CDecompressionContext *); /* linkage=_ZN21CDecompressionContextD4Ev */
};

// <01569DB7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:68
// variables: 2
// function calls: 71
void CPoseUpdateResources::~CPoseUpdateResources()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CStaticPoseCache>(CStaticPoseCache* pObj); // 344
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::~CSmartPtr(); // 68
	{
		int i; // 1721
		{
			CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
			CUtlMemory<CAnimPose::NumAllocated(); // 228
			CUtlMemory<CAnimPose::Base(); // 97
			CUtlStack<CAnimPose::ResetDbgInfo(); // 233
			CUtlStack<CAnimPose::GrowStack(); // 267
			CUtlMemory<CAnimPose::operator[](
					int i);  // 155
			CUtlStack<CAnimPose::Element(
				int i);  // 268
			CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
							CAnimPose* const& src);  // 268
			CUtlStack<CAnimPose::Push(
				CAnimPose* const& src);  // 604
			CEnduringClassMemoryPool<CAnimPose>::Free(
				CAnimPose* pObject);  // 699
		}
		ThreadInterlockedDecrement(volatile int32* p); // 690
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
		Release<CAnimPose>(CAnimPose* pObj); // 344
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 23
		OpResult::~OpResult(); // 1526
		Destruct<OpResult>(OpResult* pMemory); // 1723
		CUtlMemory<OpResult, int>::operator[](
				int i);  // 602
		CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Element(
			int i);  // 1723
	}
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::RemoveAll(); // 1798
	CUtlMemory<OpResult, int>::IsExternallyAllocated(); // 905
	CUtlMemory<OpResult, int>::Purge(); // 903
	CUtlMemory<OpResult, int>::Purge(); // 1799
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Purge(); // 560
	ValidateAlignment<OpResult>(void); // 508
	CUtlMemory<OpResult, int>::Purge(); // 510
	CUtlMemory<OpResult, int>::~CUtlMemory(); // 562
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::~CUtlVectorBase(); // 410
	CUtlVector<OpResult, CUtlMemory<OpResult, int> >::~CUtlVector(); // 68
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 344
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 14
	Purge(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this); // 1799
	Purge(const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this); // 560
	~CUtlMemoryConservative(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this); // 562
	~CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this); // 509
	~CUtlVectorConservative(const CUtlVectorConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this); // 538
	CUtlStack<CAnimPose::Clear(); // 324
	CUtlMemory<CAnimPose::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimPose::Purge(); // 903
	CUtlMemory<CAnimPose::Purge(); // 325
	CUtlStack<CAnimPose::Purge(); // 114
	ValidateAlignment<CAnimPose*>(void); // 508
	CUtlMemory<CAnimPose::Purge(); // 510
	CUtlMemory<CAnimPose::~CUtlMemory(); // 115
	CUtlStack<CAnimPose::~CUtlStack(); // 538
	CEnduringClassMemoryPool<CAnimPose>::~CEnduringClassMemoryPool(); // 14
	CAnimPosePool::~CAnimPosePool(); // 68
	CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::RemoveAll(); // 1798
	CUtlMemoryConservative<Quaternion>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::Purge(); // 560
	CUtlMemoryConservative<Quaternion>::~CUtlMemoryConservative(); // 562
	CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::~CUtlVectorBase(); // 509
	CUtlVectorConservative<Quaternion>::~CUtlVectorConservative(); // 34
	CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::RemoveAll(); // 1798
	CUtlMemoryConservative<Vector>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::Purge(); // 560
	CUtlMemoryConservative<Vector>::~CUtlMemoryConservative(); // 562
	CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::~CUtlVectorBase(); // 509
	CUtlVectorConservative<Vector>::~CUtlVectorConservative(); // 34
	CDecompressionContext::~CDecompressionContext(); // 68
} /* size: 455, inline expansions: 53 (1649 bytes) */

// <01569D51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:68
void CPoseUpdateResources::~CPoseUpdateResources()
{
} /* size: 36 */

// <01569D35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:68
inline void CPoseUpdateResources::~CPoseUpdateResources()
{
} /* size: 0 */

// <0155EFB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:68
// member functions: 8
// member variables: 6
// class size: 232
class CPoseUpdateResources : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CPoseUpdateResources(CPoseUpdateResources* , CPoseUpdateResources& );
	void CPoseUpdateResources(CPoseUpdateResources* , CPoseUpdateResources& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:84 */
	void CPoseUpdateResources(CPoseUpdateResources* , const CStaticPoseCachePtr& , const CAnimSkeletonConstPtr& , HModel);
	CDecompressionContext m_decompressionContext; /* 16 80 */
	CAnimPosePool m_posePool; /* 96 0 */
	CUtlVector<OpResult, CUtlMemory<OpResult, int> > m_opResults; /* 184 32 */
	CStaticPoseCachePtr m_pStaticPoseCache; /* 216 8 */
	IAnimVRProxy * m_pVRProxy; /* 224 8 */
	virtual void ~CPoseUpdateResources(CPoseUpdateResources* );
	void CPoseUpdateResources(class CPoseUpdateResources *, const CStaticPoseCachePtr  &, const CAnimSkeletonConstPtr  &, HModel); /* linkage=_ZN20CPoseUpdateResourcesC4ERK9CSmartPtrI16CStaticPoseCache17CRefCountAccessorERKS0_IK13CAnimSkeletonS2_E11CWeakHandleI25InfoForResourceTypeCModelE */
	void CPoseUpdateResources(class CPoseUpdateResources *, class CPoseUpdateResources &); /* linkage=_ZN20CPoseUpdateResourcesC4EOS_ */
	void CPoseUpdateResources(class CPoseUpdateResources *, class CPoseUpdateResources &); /* linkage=_ZN20CPoseUpdateResourcesC4ERS_ */
	virtual void ~CPoseUpdateResources(class CPoseUpdateResources *); /* linkage=_ZN20CPoseUpdateResourcesD4Ev */
};

// <00DF4F54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:71
void CPoseUpdateResources::CPoseUpdateResources(const CStaticPoseCachePtr& pStaticPoseCache, const CAnimSkeletonConstPtr& pSkeleton, HModel hModel)
{
} /* size: 0 */

// <00E6990A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:86
void CPoseUpdateContext::~CPoseUpdateContext()
{
} /* size: 0 */

// <00E698EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:86
inline void CPoseUpdateContext::~CPoseUpdateContext()
{
} /* size: 0 */

// <00DAAD74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:86
// member functions: 44
// member variables: 7
// class size: 48
class CPoseUpdateContext {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:89 */
	void CPoseUpdateContext(CPoseUpdateContext* , const CPoseRecipePtr& , const CPoseUpdateResourcesPtr& , const CAnimGraphInstanceContextPtr& , CAnimationGraphPhysicsTraceManagerPtr& , PoseHandle, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:99 */
	int GetUpdateID(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:102 */
	const CAnimGraphFixedData& GetFixedData(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:105 */
	CAnimGraphInstanceData& GetInstanceData(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:108 */
	CDecompressionContext& GetDecompressionContext(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:111 */
	const CCachedPose& GetCachedPose(const CPoseUpdateContext* , StaticPoseCacheHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:114 */
	CAnimationGraphPhysicsTraceManagerPtr& GetPhysicsTraceManager(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:117 */
	CAnimationGraphVisualizationManager* GetVisualizationManager(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:120 */
	CAnimPosePtr AllocPose(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:124 */
	CAnimPosePtr TryTakePose(CPoseUpdateContext* , PoseHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:129 */
	CAnimPosePtr GetPose(CPoseUpdateContext* , PoseHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:132 */
	const CAnimSkeletonConstPtr& GetSkeleton(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:135 */
	const CModel* GetModel(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:138 */
	float GetTimeStep(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:141 */
	float GetAnimTime(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:144 */
	const CTransform& GetLocalToWorld(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:147 */
	const CTransform& GetStartingLocalToWorld(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:150 */
	IAnimVRProxy* GetVRProxy(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:151 */
	const IAnimVRProxy* GetVRProxy(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:154 */
	bool IsReplay(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:156 */
	CThreadLocalAnimationDecodeCache* GetDecodeCache(const CPoseUpdateContext* );
protected:
	CPoseRecipePtr m_pPoseRecipe; /* 0 8 */
	CPoseUpdateResourcesPtr m_pPoseUpdateResources; /* 8 8 */
	CAnimGraphInstanceContextPtr m_pGraphContext; /* 16 8 */
	CAnimationGraphPhysicsTraceManagerPtr m_pPhysicsTraceManager; /* 24 8 */
	PoseHandle m_hTerminalPoseHandle; /* 32 1 */
	bool m_bIsReplay; /* 33 1 */
	CThreadLocalAnimationDecodeCache * m_pDecodeCache; /* 40 8 */
	void ~CPoseUpdateContext(CPoseUpdateContext* );
	void CPoseUpdateContext(class CPoseUpdateContext *, const CPoseRecipePtr  &, const CPoseUpdateResourcesPtr  &, const CAnimGraphInstanceContextPtr  &, CAnimationGraphPhysicsTraceManagerPtr &, PoseHandle, bool); /* linkage=_ZN18CPoseUpdateContextC4ERK9CSmartPtrI11CPoseRecipe17CRefCountAccessorERKS0_I20CPoseUpdateResourcesS2_ERKS0_I25CAnimGraphInstanceContextS2_ERS0_I34CAnimationGraphPhysicsTraceManagerS2_Ehb */
	int GetUpdateID(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext11GetUpdateIDEv */
	const class CAnimGraphFixedData  & GetFixedData(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext12GetFixedDataEv */
	class CAnimGraphInstanceData & GetInstanceData(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext15GetInstanceDataEv */
	class CDecompressionContext & GetDecompressionContext(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext23GetDecompressionContextEv */
	const class CCachedPose  & GetCachedPose(const class CPoseUpdateContext  *, class StaticPoseCacheHandle); /* linkage=_ZNK18CPoseUpdateContext13GetCachedPoseE21StaticPoseCacheHandle */
	CAnimationGraphPhysicsTraceManagerPtr & GetPhysicsTraceManager(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext22GetPhysicsTraceManagerEv */
	class CAnimationGraphVisualizationManager * GetVisualizationManager(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext23GetVisualizationManagerEv */
	CAnimPosePtr AllocPose(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext9AllocPoseEv */
	CAnimPosePtr TryTakePose(class CPoseUpdateContext *, PoseHandle); /* linkage=_ZN18CPoseUpdateContext11TryTakePoseEh */
	CAnimPosePtr GetPose(class CPoseUpdateContext *, PoseHandle); /* linkage=_ZN18CPoseUpdateContext7GetPoseEh */
	const CAnimSkeletonConstPtr  & GetSkeleton(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext11GetSkeletonEv */
	const class CModel  * GetModel(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext8GetModelEv */
	float GetTimeStep(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext11GetTimeStepEv */
	float GetAnimTime(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext11GetAnimTimeEv */
	const class CTransform  & GetLocalToWorld(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext15GetLocalToWorldEv */
	const class CTransform  & GetStartingLocalToWorld(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext23GetStartingLocalToWorldEv */
	/* <15d656d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:262 */
	class IAnimVRProxy * GetVRProxy(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext10GetVRProxyEv */
	const class IAnimVRProxy  * GetVRProxy(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext10GetVRProxyEv */
	bool IsReplay(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext8IsReplayEv */
	class CThreadLocalAnimationDecodeCache * GetDecodeCache(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext14GetDecodeCacheEv */
	void ~CPoseUpdateContext(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContextD4Ev */
};

// <015265BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:86
// member functions: 43
// member variables: 7
// class size: 48
class CPoseUpdateContext {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:89 */
	void CPoseUpdateContext(CPoseUpdateContext* , const CPoseRecipePtr& , const CPoseUpdateResourcesPtr& , const CAnimGraphInstanceContextPtr& , CAnimationGraphPhysicsTraceManagerPtr& , PoseHandle, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:99 */
	int GetUpdateID(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:102 */
	const CAnimGraphFixedData& GetFixedData(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:105 */
	CAnimGraphInstanceData& GetInstanceData(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:108 */
	CDecompressionContext& GetDecompressionContext(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:111 */
	const CCachedPose& GetCachedPose(const CPoseUpdateContext* , StaticPoseCacheHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:114 */
	CAnimationGraphPhysicsTraceManagerPtr& GetPhysicsTraceManager(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:117 */
	CAnimationGraphVisualizationManager* GetVisualizationManager(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:120 */
	CAnimPosePtr AllocPose(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:124 */
	CAnimPosePtr TryTakePose(CPoseUpdateContext* , PoseHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:129 */
	CAnimPosePtr GetPose(CPoseUpdateContext* , PoseHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:132 */
	const CAnimSkeletonConstPtr& GetSkeleton(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:135 */
	const CModel* GetModel(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:138 */
	float GetTimeStep(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:141 */
	float GetAnimTime(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:144 */
	const CTransform& GetLocalToWorld(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:147 */
	const CTransform& GetStartingLocalToWorld(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:150 */
	IAnimVRProxy* GetVRProxy(CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:151 */
	const IAnimVRProxy* GetVRProxy(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:154 */
	bool IsReplay(const CPoseUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:156 */
	CThreadLocalAnimationDecodeCache* GetDecodeCache(const CPoseUpdateContext* );
protected:
	CPoseRecipePtr m_pPoseRecipe; /* 0 8 */
	CPoseUpdateResourcesPtr m_pPoseUpdateResources; /* 8 8 */
	CAnimGraphInstanceContextPtr m_pGraphContext; /* 16 8 */
	CAnimationGraphPhysicsTraceManagerPtr m_pPhysicsTraceManager; /* 24 8 */
	PoseHandle m_hTerminalPoseHandle; /* 32 1 */
	bool m_bIsReplay; /* 33 1 */
	CThreadLocalAnimationDecodeCache * m_pDecodeCache; /* 40 8 */
	void CPoseUpdateContext(class CPoseUpdateContext *, const CPoseRecipePtr  &, const CPoseUpdateResourcesPtr  &, const CAnimGraphInstanceContextPtr  &, CAnimationGraphPhysicsTraceManagerPtr &, PoseHandle, bool); /* linkage=_ZN18CPoseUpdateContextC4ERK9CSmartPtrI11CPoseRecipe17CRefCountAccessorERKS0_I20CPoseUpdateResourcesS2_ERKS0_I25CAnimGraphInstanceContextS2_ERS0_I34CAnimationGraphPhysicsTraceManagerS2_Ehb */
	int GetUpdateID(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext11GetUpdateIDEv */
	const class CAnimGraphFixedData  & GetFixedData(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext12GetFixedDataEv */
	class CAnimGraphInstanceData & GetInstanceData(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext15GetInstanceDataEv */
	class CDecompressionContext & GetDecompressionContext(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext23GetDecompressionContextEv */
	const class CCachedPose  & GetCachedPose(const class CPoseUpdateContext  *, class StaticPoseCacheHandle); /* linkage=_ZNK18CPoseUpdateContext13GetCachedPoseE21StaticPoseCacheHandle */
	CAnimationGraphPhysicsTraceManagerPtr & GetPhysicsTraceManager(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext22GetPhysicsTraceManagerEv */
	class CAnimationGraphVisualizationManager * GetVisualizationManager(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext23GetVisualizationManagerEv */
	CAnimPosePtr AllocPose(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext9AllocPoseEv */
	CAnimPosePtr TryTakePose(class CPoseUpdateContext *, PoseHandle); /* linkage=_ZN18CPoseUpdateContext11TryTakePoseEh */
	CAnimPosePtr GetPose(class CPoseUpdateContext *, PoseHandle); /* linkage=_ZN18CPoseUpdateContext7GetPoseEh */
	const CAnimSkeletonConstPtr  & GetSkeleton(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext11GetSkeletonEv */
	const class CModel  * GetModel(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext8GetModelEv */
	float GetTimeStep(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext11GetTimeStepEv */
	float GetAnimTime(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext11GetAnimTimeEv */
	const class CTransform  & GetLocalToWorld(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext15GetLocalToWorldEv */
	const class CTransform  & GetStartingLocalToWorld(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext23GetStartingLocalToWorldEv */
	/* <15d656d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:262 */
	class IAnimVRProxy * GetVRProxy(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContext10GetVRProxyEv */
	const class IAnimVRProxy  * GetVRProxy(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext10GetVRProxyEv */
	bool IsReplay(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext8IsReplayEv */
	class CThreadLocalAnimationDecodeCache * GetDecodeCache(const class CPoseUpdateContext  *); /* linkage=_ZNK18CPoseUpdateContext14GetDecodeCacheEv */
	void ~CPoseUpdateContext(class CPoseUpdateContext *); /* linkage=_ZN18CPoseUpdateContextD4Ev */
};

// <0178C176> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:117
inline void CPoseUpdateContext::GetVisualizationManager()
{
} /* size: 0 */

// <00E698D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:172
void CPoseUpdateManager::~CPoseUpdateManager()
{
} /* size: 0 */

// <00E698BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:172
inline void CPoseUpdateManager::~CPoseUpdateManager()
{
} /* size: 0 */

// <00DDE20F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:172
// member functions: 6
// member variable: 1
// class size: 48
class CPoseUpdateManager : public CPoseUpdateContext {
public:
	/* class CPoseUpdateContext <ancestor>; */ /* 0 48 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:175 */
	void CPoseUpdateManager(CPoseUpdateManager* , const CPoseRecipePtr& , const CPoseUpdateResourcesPtr& , const CAnimGraphInstanceContextPtr& , CAnimationGraphPhysicsTraceManagerPtr& , PoseHandle, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:185 */
	CAnimPosePtr Evaluate(CPoseUpdateManager* );
	void ~CPoseUpdateManager(CPoseUpdateManager* );
	void CPoseUpdateManager(class CPoseUpdateManager *, const CPoseRecipePtr  &, const CPoseUpdateResourcesPtr  &, const CAnimGraphInstanceContextPtr  &, CAnimationGraphPhysicsTraceManagerPtr &, PoseHandle, bool); /* linkage=_ZN18CPoseUpdateManagerC4ERK9CSmartPtrI11CPoseRecipe17CRefCountAccessorERKS0_I20CPoseUpdateResourcesS2_ERKS0_I25CAnimGraphInstanceContextS2_ERS0_I34CAnimationGraphPhysicsTraceManagerS2_Ehb */
	CAnimPosePtr Evaluate(class CPoseUpdateManager *); /* linkage=_ZN18CPoseUpdateManager8EvaluateEv */
	void ~CPoseUpdateManager(class CPoseUpdateManager *); /* linkage=_ZN18CPoseUpdateManagerD4Ev */
};

// <00DF4E94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.h:175
void CPoseUpdateManager::CPoseUpdateManager(const CPoseRecipePtr& pPoseRecipe, const CPoseUpdateResourcesPtr& pPoseUpdateResources, const CAnimGraphInstanceContextPtr& pGraphContext, CAnimationGraphPhysicsTraceManagerPtr& pPhysicsTraceManager, const PoseHandle hTerminalPoseHandle, bool bIsReplay)
{
} /* size: 0 */

