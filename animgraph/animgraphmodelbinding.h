
//
// animgraph/animgraphmodelbinding.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <00DFF4FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.h:18
// function calls: 44
void CAnimGraphModelBinding::~CAnimGraphModelBinding()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimSkeleton>(CAnimSkeleton* pObj); // 344
	CSmartPtr<CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CStaticPoseCache>(CStaticPoseCache* pObj); // 344
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::~CSmartPtr(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParamIdMap>(CAnimParamIdMap* pObj); // 344
	CSmartPtr<CAnimParamIdMap, CRefCountAccessor>::~CSmartPtr(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceData>(CAnimGraphInstanceData* pObj); // 344
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::~CSmartPtr(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 344
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::~CSmartPtr(); // 18
	CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimNodeID, int>::Purge(); // 903
	CUtlMemory<AnimNodeID, int>::Purge(); // 1799
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
	AnimNodeLocation_t::~AnimNodeLocation_t(); // 19
	CAnimGraphInitContext::~CAnimGraphInitContext(); // 18
} /* size: 198, inline expansions: 44 (604 bytes) */

// <00DFEAE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.h:18
// function calls: 51
void CAnimGraphModelBinding::~CAnimGraphModelBinding()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimSkeleton>(CAnimSkeleton* pObj); // 344
	CSmartPtr<CAnimSkeleton, CRefCountAccessor>::~CSmartPtr(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CStaticPoseCache>(CStaticPoseCache* pObj); // 344
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::~CSmartPtr(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParamIdMap>(CAnimParamIdMap* pObj); // 344
	CSmartPtr<CAnimParamIdMap, CRefCountAccessor>::~CSmartPtr(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceData>(CAnimGraphInstanceData* pObj); // 344
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::~CSmartPtr(); // 18
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 344
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::~CSmartPtr(); // 18
	CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimNodeID, int>::Purge(); // 903
	CUtlMemory<AnimNodeID, int>::Purge(); // 1799
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
	ValidateAlignment<AnimNodeID>(void); // 508
	CUtlMemory<AnimNodeID, int>::Purge(); // 510
	CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
	AnimNodeLocation_t::~AnimNodeLocation_t(); // 19
	CAnimGraphInitContext::~CAnimGraphInitContext(); // 18
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 32
	IAnimGraphModelBinding::~IAnimGraphModelBinding(); // 18
	CAnimGraphModelBinding::~CAnimGraphModelBinding(); // 18
} /* size: 203, inline expansions: 51 (759 bytes) */

// <00DFEAC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.h:18
inline void CAnimGraphModelBinding::~CAnimGraphModelBinding()
{
} /* size: 0 */

// <00DEA924> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.h:18
// member functions: 44
// member variables: 10
// vtable entries: 10
// class size: 128
class CAnimGraphModelBinding : public IAnimGraphModelBinding, public CAnimGraphInitContext {
public:
	/* class IAnimGraphModelBinding <ancestor>; */ /* 0 16 */
	/* class CAnimGraphInitContext <ancestor>; */ /* 16 48 */
	void CAnimGraphModelBinding(CAnimGraphModelBinding* , CAnimGraphModelBinding& );
	void CAnimGraphModelBinding(CAnimGraphModelBinding* , const CAnimGraphModelBinding& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:15 */
	void CAnimGraphModelBinding(CAnimGraphModelBinding* , const CAnimationGraph* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:62 */
	virtual IAnimationGraphInstancePtr CreateInstance(const CAnimGraphModelBinding* , const AnimGraphInstanceCreationSettings_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:75 */
	virtual const CModel& GetModel(const CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:81 */
	virtual CPackedData& GetFixedData(CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:87 */
	virtual CSaveablePackedData& GetInstanceData(CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:93 */
	virtual CStaticPoseCache& GetStaticPoseCache(CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:99 */
	virtual CAnimParamHandle GetHandleForParameter(const CAnimGraphModelBinding* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:105 */
	virtual const CAnimParameterBase* GetParameter(const CAnimGraphModelBinding* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:112 */
	virtual int GetIndexOfTag(const CAnimGraphModelBinding* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:119 */
	virtual CAnimUpdateNodeBase* GetUpdateNode(const CAnimGraphModelBinding* , AnimNodeID, AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:128 */
	virtual TraceRequestID AllocTraceRequest(CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:134 */
	CAnimGraphFixedDataConstPtr GetFixedDataPtr(const CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:140 */
	CAnimGraphInstanceDataConstPtr GetInstanceDataPtr(const CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:146 */
	CStaticPoseCachePtr GetStaticPoseCachePtr(const CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:152 */
	CAnimParamIdMapConstPtr GetParamMapPtr(const CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:158 */
	CAnimSkeletonConstPtr GetSkeleton(const CAnimGraphModelBinding* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:229 */
	AnimNodeLocation_t InitializeNodesRecurs(CAnimGraphModelBinding* , const AnimNodeLocation_t& , AnimOutputID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:164 */
	int AddNodes(CAnimGraphModelBinding* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:192 */
	int AddNodesRecurs(CAnimGraphModelBinding* , const AnimNodeLocation_t& , const IAnimNodeManager* , CUpdateNodeManager* );
	CAnimGraphFixedDataPtr m_pFixedData; /* 64 8 */
	CAnimGraphInstanceDataPtr m_pNodeInstanceData; /* 72 8 */
	CAnimParamIdMapPtr m_pParamIdMap; /* 80 8 */
	CStaticPoseCachePtr m_pStaticPoseCache; /* 88 8 */
	CAnimSkeletonPtr m_pSkeleton; /* 96 8 */
	int m_nTraceRequestCount; /* 104 4 */
	const class CAnimationGraph * m_pAnimGraph; /* 112 8 */
	const class CModel * m_pModel; /* 120 8 */
	virtual void ~CAnimGraphModelBinding(CAnimGraphModelBinding* );
	void CAnimGraphModelBinding(class CAnimGraphModelBinding *, class CAnimGraphModelBinding &); /* linkage=_ZN22CAnimGraphModelBindingC4EOS_ */
	void CAnimGraphModelBinding(class CAnimGraphModelBinding *, const class CAnimGraphModelBinding  &); /* linkage=_ZN22CAnimGraphModelBindingC4ERKS_ */
	void CAnimGraphModelBinding(class CAnimGraphModelBinding *, const class CAnimationGraph  *, const class CModel  *); /* linkage=_ZN22CAnimGraphModelBindingC4EPK15CAnimationGraphPK6CModel */
	virtual IAnimationGraphInstancePtr CreateInstance(const class CAnimGraphModelBinding  *, const class AnimGraphInstanceCreationSettings_t  &); /* linkage=_ZNK22CAnimGraphModelBinding14CreateInstanceERK35AnimGraphInstanceCreationSettings_t */
	/* <e8a39f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:75 */
	virtual const class CModel  & GetModel(const class CAnimGraphModelBinding  *); /* linkage=_ZNK22CAnimGraphModelBinding8GetModelEv */
	/* <e8ac10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:81 */
	virtual CPackedData & GetFixedData(class CAnimGraphModelBinding *); /* linkage=_ZN22CAnimGraphModelBinding12GetFixedDataEv */
	/* <e8ac82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:87 */
	virtual CSaveablePackedData & GetInstanceData(class CAnimGraphModelBinding *); /* linkage=_ZN22CAnimGraphModelBinding15GetInstanceDataEv */
	/* <e8a3c8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:93 */
	virtual class CStaticPoseCache & GetStaticPoseCache(class CAnimGraphModelBinding *); /* linkage=_ZN22CAnimGraphModelBinding18GetStaticPoseCacheEv */
	/* <e8acf4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:99 */
	virtual class CAnimParamHandle GetHandleForParameter(const class CAnimGraphModelBinding  *, class AnimParamID); /* linkage=_ZNK22CAnimGraphModelBinding21GetHandleForParameterE11AnimParamID */
	virtual const class CAnimParameterBase  * GetParameter(const class CAnimGraphModelBinding  *, class AnimParamID); /* linkage=_ZNK22CAnimGraphModelBinding12GetParameterE11AnimParamID */
	virtual int GetIndexOfTag(const class CAnimGraphModelBinding  *, class AnimTagID); /* linkage=_ZNK22CAnimGraphModelBinding13GetIndexOfTagE9AnimTagID */
	virtual class CAnimUpdateNodeBase * GetUpdateNode(const class CAnimGraphModelBinding  *, class AnimNodeID, class AnimOutputID); /* linkage=_ZNK22CAnimGraphModelBinding13GetUpdateNodeE10AnimNodeID12AnimOutputID */
	/* <e8a421> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:128 */
	virtual class TraceRequestID AllocTraceRequest(class CAnimGraphModelBinding *); /* linkage=_ZN22CAnimGraphModelBinding17AllocTraceRequestEv */
	/* <e8f409> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:134 */
	CAnimGraphFixedDataConstPtr GetFixedDataPtr(const class CAnimGraphModelBinding  *); /* linkage=_ZNK22CAnimGraphModelBinding15GetFixedDataPtrEv */
	/* <e8f6fd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:140 */
	CAnimGraphInstanceDataConstPtr GetInstanceDataPtr(const class CAnimGraphModelBinding  *); /* linkage=_ZNK22CAnimGraphModelBinding18GetInstanceDataPtrEv */
	/* <e8f9f1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:146 */
	CStaticPoseCachePtr GetStaticPoseCachePtr(const class CAnimGraphModelBinding  *); /* linkage=_ZNK22CAnimGraphModelBinding21GetStaticPoseCachePtrEv */
	/* <e8fcbc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:152 */
	CAnimParamIdMapConstPtr GetParamMapPtr(const class CAnimGraphModelBinding  *); /* linkage=_ZNK22CAnimGraphModelBinding14GetParamMapPtrEv */
	/* <e8ffb0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:158 */
	CAnimSkeletonConstPtr GetSkeleton(const class CAnimGraphModelBinding  *); /* linkage=_ZNK22CAnimGraphModelBinding11GetSkeletonEv */
	class AnimNodeLocation_t InitializeNodesRecurs(class CAnimGraphModelBinding *, const class AnimNodeLocation_t  &, class AnimOutputID); /* linkage=_ZN22CAnimGraphModelBinding21InitializeNodesRecursERK18AnimNodeLocation_t12AnimOutputID */
	int AddNodes(class CAnimGraphModelBinding *); /* linkage=_ZN22CAnimGraphModelBinding8AddNodesEv */
	int AddNodesRecurs(class CAnimGraphModelBinding *, const class AnimNodeLocation_t  &, const class IAnimNodeManager  *, class CUpdateNodeManager *); /* linkage=_ZN22CAnimGraphModelBinding14AddNodesRecursERK18AnimNodeLocation_tPK16IAnimNodeManagerP18CUpdateNodeManager */
	virtual void ~CAnimGraphModelBinding(class CAnimGraphModelBinding *); /* linkage=_ZN22CAnimGraphModelBindingD4Ev */
};

