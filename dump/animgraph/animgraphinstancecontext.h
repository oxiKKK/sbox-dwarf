
//
// animgraph/animgraphinstancecontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <00DFB03B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.h:17
// function calls: 31
void CAnimGraphInstanceContext::~CAnimGraphInstanceContext()
{
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCModel>::~CStrongHandleCopyable(); // 295
	CStrongHandleVolatile<InfoForResourceTypeCModel>::~CStrongHandleVolatile(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 344
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphVisualizationManager>(CAnimationGraphVisualizationManager* pObj); // 344
	CSmartPtr<CAnimationGraphVisualizationManager, CRefCountAccessor>::~CSmartPtr(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceData>(CAnimGraphInstanceData* pObj); // 344
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::~CSmartPtr(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimGraphFixedData>(const CAnimGraphFixedData* pObj); // 344
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::~CSmartPtr(); // 17
} /* size: 142, inline expansions: 31 (366 bytes) */

// <00DFA950> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.h:17
// function calls: 34
void CAnimGraphInstanceContext::~CAnimGraphInstanceContext()
{
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 211
	CStrongHandleCopyable<InfoForResourceTypeCModel>::~CStrongHandleCopyable(); // 295
	CStrongHandleVolatile<InfoForResourceTypeCModel>::~CStrongHandleVolatile(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 344
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphVisualizationManager>(CAnimationGraphVisualizationManager* pObj); // 344
	CSmartPtr<CAnimationGraphVisualizationManager, CRefCountAccessor>::~CSmartPtr(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceData>(CAnimGraphInstanceData* pObj); // 344
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::~CSmartPtr(); // 17
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimGraphFixedData>(const CAnimGraphFixedData* pObj); // 344
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::~CSmartPtr(); // 17
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 17
	CAnimGraphInstanceContext::~CAnimGraphInstanceContext(); // 17
} /* size: 142, inline expansions: 34 (439 bytes) */

// <00DFA934> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.h:17
inline void CAnimGraphInstanceContext::~CAnimGraphInstanceContext()
{
} /* size: 0 */

// <00DAEDB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.h:17
// member functions: 32
// member variables: 6
// class size: 72
class CAnimGraphInstanceContext : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimGraphInstanceContext(CAnimGraphInstanceContext* , CAnimGraphInstanceContext& );
	void CAnimGraphInstanceContext(CAnimGraphInstanceContext* , const CAnimGraphInstanceContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:11 */
	void CAnimGraphInstanceContext(CAnimGraphInstanceContext* , const AnimGraphInstanceCreationSettings_t& , const CAnimGraphModelBindingConstPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:30 */
	const CAnimGraphFixedData& GetFixedData(const CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:38 */
	const CAnimGraphInstanceData& GetInstanceData(const CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:46 */
	CAnimGraphInstanceData& GetInstanceData(CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:54 */
	const CAnimSkeletonConstPtr& GetSkeleton(const CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:62 */
	HModel GetModel(const CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:70 */
	CAnimationGraphVisualizationManager* GetVisualizationManager(CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:78 */
	float GetAnimTime(const CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:86 */
	int GetUpdateID(const CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:94 */
	const CTransform& GetLocalToWorldTransform(const CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:102 */
	const CTransform& GetPreviousLocalToWorldTransform(const CAnimGraphInstanceContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:110 */
	void Save(const CAnimGraphInstanceContext* , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:118 */
	void Restore(CAnimGraphInstanceContext* , IRestore* );
private:
	CAnimGraphFixedDataConstPtr m_pFixedData; /* 16 8 */
	CAnimGraphInstanceDataPtr m_pInstanceData; /* 24 8 */
	CAnimationGraphVisualizationManagerPtr m_pVisualizationManager; /* 32 8 */
	CAnimSkeletonConstPtr m_pSkeleton; /* 40 8 */
	HModelStrongVolatile m_hModel; /* 48 24 */
	virtual void ~CAnimGraphInstanceContext(CAnimGraphInstanceContext* );
	void CAnimGraphInstanceContext(class CAnimGraphInstanceContext *, class CAnimGraphInstanceContext &); /* linkage=_ZN25CAnimGraphInstanceContextC4EOS_ */
	void CAnimGraphInstanceContext(class CAnimGraphInstanceContext *, const class CAnimGraphInstanceContext  &); /* linkage=_ZN25CAnimGraphInstanceContextC4ERKS_ */
	void CAnimGraphInstanceContext(class CAnimGraphInstanceContext *, const class AnimGraphInstanceCreationSettings_t  &, const CAnimGraphModelBindingConstPtr  &); /* linkage=_ZN25CAnimGraphInstanceContextC4ERK35AnimGraphInstanceCreationSettings_tRK9CSmartPtrIK22CAnimGraphModelBinding17CRefCountAccessorE */
	const class CAnimGraphFixedData  & GetFixedData(const class CAnimGraphInstanceContext  *); /* linkage=_ZNK25CAnimGraphInstanceContext12GetFixedDataEv */
	/* <e8f1e0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:38 */
	const class CAnimGraphInstanceData  & GetInstanceData(const class CAnimGraphInstanceContext  *); /* linkage=_ZNK25CAnimGraphInstanceContext15GetInstanceDataEv */
	class CAnimGraphInstanceData & GetInstanceData(class CAnimGraphInstanceContext *); /* linkage=_ZN25CAnimGraphInstanceContext15GetInstanceDataEv */
	/* <e8f239> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:54 */
	const CAnimSkeletonConstPtr  & GetSkeleton(const class CAnimGraphInstanceContext  *); /* linkage=_ZNK25CAnimGraphInstanceContext11GetSkeletonEv */
	/* <e8f262> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:62 */
	HModel GetModel(const class CAnimGraphInstanceContext  *); /* linkage=_ZNK25CAnimGraphInstanceContext8GetModelEv */
	/* <e8f33e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:70 */
	class CAnimationGraphVisualizationManager * GetVisualizationManager(class CAnimGraphInstanceContext *); /* linkage=_ZN25CAnimGraphInstanceContext23GetVisualizationManagerEv */
	/* <e8f397> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:78 */
	float GetAnimTime(const class CAnimGraphInstanceContext  *); /* linkage=_ZNK25CAnimGraphInstanceContext11GetAnimTimeEv */
	int GetUpdateID(const class CAnimGraphInstanceContext  *); /* linkage=_ZNK25CAnimGraphInstanceContext11GetUpdateIDEv */
	const class CTransform  & GetLocalToWorldTransform(const class CAnimGraphInstanceContext  *); /* linkage=_ZNK25CAnimGraphInstanceContext24GetLocalToWorldTransformEv */
	const class CTransform  & GetPreviousLocalToWorldTransform(const class CAnimGraphInstanceContext  *); /* linkage=_ZNK25CAnimGraphInstanceContext32GetPreviousLocalToWorldTransformEv */
	void Save(const class CAnimGraphInstanceContext  *, class ISave *); /* linkage=_ZNK25CAnimGraphInstanceContext4SaveEP5ISave */
	void Restore(class CAnimGraphInstanceContext *, class IRestore *); /* linkage=_ZN25CAnimGraphInstanceContext7RestoreEP8IRestore */
	virtual void ~CAnimGraphInstanceContext(class CAnimGraphInstanceContext *); /* linkage=_ZN25CAnimGraphInstanceContextD4Ev */
};

