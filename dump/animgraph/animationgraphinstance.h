
//
// animgraph/animationgraphinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	classes: 2
//

// <00DDFEDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:27
// member functions: 6
// member variables: 2
// class size: 32
class CParallelUpdateCheck {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:30 */
	void CParallelUpdateCheck(CParallelUpdateCheck* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:32 */
	void BeginUpdate(CParallelUpdateCheck* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:47 */
	void EndUpdate(CParallelUpdateCheck* );
private:
	volatile int32 m_nUpdating; /* 0 4 */
	CThreadFastMutex m_Lock; /* 8 24 */
	void CParallelUpdateCheck(class CParallelUpdateCheck *); /* linkage=_ZN20CParallelUpdateCheckC4Ev */
	void BeginUpdate(class CParallelUpdateCheck *); /* linkage=_ZN20CParallelUpdateCheck11BeginUpdateEv */
	void EndUpdate(class CParallelUpdateCheck *); /* linkage=_ZN20CParallelUpdateCheck9EndUpdateEv */
};

// <00E7DCC4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:30
void CParallelUpdateCheck::CParallelUpdateCheck()
{
} /* size: 0 */

// <00E7DCAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:30
inline void CParallelUpdateCheck::CParallelUpdateCheck()
{
} /* size: 0 */

// <00E7DC05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:32
// variable: 1
inline void CParallelUpdateCheck::BeginUpdate()
{
	const int  nUpdateCount; // 34
} /* size: 0, variables: 1 */

// <00E7DB6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:47
inline void CParallelUpdateCheck::EndUpdate()
{
} /* size: 0 */

// <00DE9CF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:71
// member functions: 118
// member variables: 25
// static member variables: 2
// vtable entries: 44
// class size: 344
class CAnimationGraphInstance : public IAnimationGraphInstance {
public:
	/* class IAnimationGraphInstance <ancestor>; */ /* 0 24 */
	void CAnimationGraphInstance(CAnimationGraphInstance* , const CAnimationGraphInstance& );
private:
	static class CClassInfoT<CAnimationGraphInstance> m_classInfoCAnimationGraphInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:73 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:30 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:30 */
	virtual const CClassInfo& GetTypeInfo(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:30 */
	virtual void* CastToBase(CAnimationGraphInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:30 */
	virtual const void* CastToBase(const CAnimationGraphInstance* , ClassID);
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:35 */
	datamap_t* GetBaseMap(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:60 */
	void CAnimationGraphInstance(CAnimationGraphInstance* , const AnimGraphInstanceCreationSettings_t& , const CAnimGraphModelBindingConstPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:114 */
	virtual void ~CAnimationGraphInstance(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:120 */
	virtual int GetNodeCount(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:126 */
	virtual IAnimNodeInstance* GetNode(CAnimationGraphInstance* , const AnimNodeLocation_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:132 */
	virtual const IAnimNodeInstance* GetNode(const CAnimationGraphInstance* , const AnimNodeLocation_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:139 */
	virtual CAnimSkeletonConstPtr GetSkeleton(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:145 */
	virtual HModel GetModel(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:151 */
	virtual const IAnimNodeInstance* GetRootNode(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:160 */
	virtual const CTransform& GetLocalToWorldTransform(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:166 */
	virtual const CTransform& GetPreviousLocalToWorldTransform(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:172 */
	virtual void Update(CAnimationGraphInstance* , const CTransform& , float, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:185 */
	virtual void Update(CAnimationGraphInstance* , const CTransform& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:332 */
	virtual void EvaluateRootMotion(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:349 */
	virtual CAnimPoseConstPtr EvaluatePose(CAnimationGraphInstance* , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:397 */
	virtual CAnimPosePtr EvaluatePartialPose(CAnimationGraphInstance* , PoseHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:418 */
	virtual CAnimPosePtr GetPoseAtTime(CAnimationGraphInstance* , float, CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:278 */
	virtual float GetLastTimeStep(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:284 */
	virtual float GetAnimTime(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:290 */
	virtual CMotionTransform GetRootMotion(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:296 */
	virtual bool DispatchTagEvents(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:320 */
	virtual const CUtlVector<animevent_t, CUtlMemory<animevent_t, int> >& GetPendingAnimEvents(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:326 */
	virtual void ClearPendingAnimEvents(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:427 */
	virtual void ResetToTime(CAnimationGraphInstance* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:434 */
	virtual const CUtlVector<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >& GetActiveSequences(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:440 */
	virtual IAnimParameterListInstance* GetParameterList(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:446 */
	virtual const IAnimParameterListInstance* GetParameterList(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:452 */
	virtual IAnimTagManagerInstance* GetAnimTagManager(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:458 */
	virtual const IAnimTagManagerInstance* GetAnimTagManager(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:464 */
	virtual IAnimMovementManagerInstance* GetMovementManager(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:470 */
	virtual const IAnimMovementManagerInstance* GetMovementManager(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:475 */
	virtual IAnimationGraphPhysicsTraceManager* GetPhysicsTraceManager(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:480 */
	virtual IAnimationGraphVisualizationManager* GetVisualizationManager(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:485 */
	virtual IAnimVRProxy* GetVRProxy(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:491 */
	virtual const IAnimVRProxy* GetVRProxy(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:497 */
	virtual void SetVRProxy(CAnimationGraphInstance* , IAnimVRProxy* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:505 */
	virtual Activity GetActivity(const CAnimationGraphInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:518 */
	virtual void SetActivity(CAnimationGraphInstance* , Activity, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:596 */
	virtual CReceiptPtr RegisterSequenceListener(CAnimationGraphInstance* , IAnimGraphSequenceFinishedListener* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:609 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > DebugGetActiveNodes(const CAnimationGraphInstance* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:635 */
	virtual IAnimGraphDebugReplayPtr GetDebugReplay(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:641 */
	virtual void SetDebugReplay(CAnimationGraphInstance* , const IAnimGraphDebugReplayPtr& , IReplayPreprocessingHelper* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:869 */
	virtual void CollectVisualizations(const CAnimationGraphInstance* , IAnimationGraphVisualizationManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:660 */
	const CAnimGraphInstanceData& GetInstanceDataInternal(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:666 */
	CAnimGraphInstanceData& GetInstanceDataInternal(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:672 */
	const CPoseRecipe& GetPoseRecipe(const CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:678 */
	CPoseRecipe& GetPoseRecipe(CAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:684 */
	virtual void* DoQueryInterface(CAnimationGraphInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:741 */
	CAnimNodeInstanceBase* GetNodeInternal(CAnimationGraphInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:724 */
	CAnimNodeInstanceBase* GetNodeInternal(CAnimationGraphInstance* , const AnimNodeLocation_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:208 */
	CAnimPosePtr EvaluatePoseAtTime(CAnimationGraphInstance* , float, CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:769 */
	void UnregisterSequenceListener(CAnimationGraphInstance* , IAnimGraphSequenceFinishedListener* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:775 */
	void DebugGetActiveNodesRecurs(const CAnimationGraphInstance* , int, const AnimNodeLocation_t& , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	CAnimGraphInstanceContextPtr m_pGraphContext; /* 24 8 */
	CAnimGraphFixedDataConstPtr m_pFixedData; /* 32 8 */
	CAnimationGraphPhysicsTraceManagerPtr m_pPhysicsTraceManager; /* 40 8 */
	CAnimParameterListInstancePtr m_pParamList; /* 48 8 */
	CAnimTagManagerInstancePtr m_pTagMgr; /* 56 8 */
	CAnimGraphUpdateContextBuilderPtr m_pUpdateContext; /* 64 8 */
	CActivityValueListConstPtr m_pActivityValueList; /* 72 8 */
	CPoseUpdateResourcesPtr m_pPoseUpdateResources; /* 80 8 */
	CAnimMovementManagerInstancePtr m_pMovementMgr; /* 88 8 */
	CFootMotionManagerPtr m_pFootMotionMgr; /* 96 8 */
	IAnimVRProxy * m_pVRProxy; /* 104 8 */
	CAnimPosePtr m_pLatestPose; /* 112 8 */
	CPoseRecipePtr m_pPoseRecipe; /* 120 8 */
	CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int> > m_cachedNodeInstanceTable; /* 128 32 */
	AnimNodeID m_rootNodeID; /* 160 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_activityLayers; /* 168 32 */
	CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int> > m_activityParamTable; /* 200 32 */
	CUtlVector<IAnimGraphSequenceFinishedListener*, CUtlMemory<IAnimGraphSequenceFinishedListener*, int> > m_sequenceFinishedListeners; /* 232 32 */
	CAnimGraphDebugReplayPtr m_pDebugReplay; /* 264 8 */
	CAnimNodeInstanceFactory m_nodeInsanceFactory; /* 272 32 */
	bool m_bLastUpdateWasReplay; /* 304 1 */
	bool m_bTagDispatchDirty; /* 305 1 */
	bool m_bPoseDirty; /* 306 1 */
	CParallelUpdateCheck m_updateCheck; /* 312 32 */
	void CAnimationGraphInstance(class CAnimationGraphInstance *, const class CAnimationGraphInstance  &); /* linkage=_ZN23CAnimationGraphInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23CAnimationGraphInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23CAnimationGraphInstance10MyTypeInfoEv */
	/* <e89e95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:30 */
	virtual const class CClassInfo  & GetTypeInfo(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CAnimationGraphInstance *, class ClassID); /* linkage=_ZN23CAnimationGraphInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CAnimationGraphInstance  *, class ClassID); /* linkage=_ZNK23CAnimationGraphInstance10CastToBaseEN10Reflection7ClassIDE */
	/* <e8ec16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:35 */
	class datamap_t * GetBaseMap(void); /* linkage=_ZN23CAnimationGraphInstance10GetBaseMapEv */
	void CAnimationGraphInstance(class CAnimationGraphInstance *, const class AnimGraphInstanceCreationSettings_t  &, const CAnimGraphModelBindingConstPtr  &); /* linkage=_ZN23CAnimationGraphInstanceC4ERK35AnimGraphInstanceCreationSettings_tRK9CSmartPtrIK22CAnimGraphModelBinding17CRefCountAccessorE */
	virtual void ~CAnimationGraphInstance(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstanceD4Ev */
	/* <e8a5f1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:120 */
	virtual int GetNodeCount(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance12GetNodeCountEv */
	virtual class IAnimNodeInstance * GetNode(class CAnimationGraphInstance *, const class AnimNodeLocation_t  &); /* linkage=_ZN23CAnimationGraphInstance7GetNodeERK18AnimNodeLocation_t */
	virtual const class IAnimNodeInstance  * GetNode(const class CAnimationGraphInstance  *, const class AnimNodeLocation_t  &); /* linkage=_ZNK23CAnimationGraphInstance7GetNodeERK18AnimNodeLocation_t */
	virtual CAnimSkeletonConstPtr GetSkeleton(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance11GetSkeletonEv */
	virtual HModel GetModel(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance8GetModelEv */
	virtual const class IAnimNodeInstance  * GetRootNode(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance11GetRootNodeEv */
	/* <e8a663> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:160 */
	virtual const class CTransform  & GetLocalToWorldTransform(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance24GetLocalToWorldTransformEv */
	/* <e8a739> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:166 */
	virtual const class CTransform  & GetPreviousLocalToWorldTransform(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance32GetPreviousLocalToWorldTransformEv */
	/* <e8adc6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:172 */
	virtual void Update(class CAnimationGraphInstance *, const class CTransform  &, float, bool); /* linkage=_ZN23CAnimationGraphInstance6UpdateERK10CTransformfb */
	virtual void Update(class CAnimationGraphInstance *, const class CTransform  &, float, float); /* linkage=_ZN23CAnimationGraphInstance6UpdateERK10CTransformff */
	virtual void EvaluateRootMotion(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance18EvaluateRootMotionEv */
	virtual CAnimPoseConstPtr EvaluatePose(class CAnimationGraphInstance *, const class CTransform  &); /* linkage=_ZN23CAnimationGraphInstance12EvaluatePoseERK10CTransform */
	virtual CAnimPosePtr EvaluatePartialPose(class CAnimationGraphInstance *, PoseHandle); /* linkage=_ZN23CAnimationGraphInstance19EvaluatePartialPoseEh */
	virtual CAnimPosePtr GetPoseAtTime(class CAnimationGraphInstance *, float, class CTransform &); /* linkage=_ZN23CAnimationGraphInstance13GetPoseAtTimeEfR10CTransform */
	virtual float GetLastTimeStep(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance15GetLastTimeStepEv */
	/* <e8a80f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:284 */
	virtual float GetAnimTime(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance11GetAnimTimeEv */
	virtual class CMotionTransform GetRootMotion(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance13GetRootMotionEv */
	/* <e8aefd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:296 */
	virtual bool DispatchTagEvents(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance17DispatchTagEventsEv */
	virtual const class CUtlVector<animevent_t, CUtlMemory<animevent_t, int> >  & GetPendingAnimEvents(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance20GetPendingAnimEventsEv */
	virtual void ClearPendingAnimEvents(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance22ClearPendingAnimEventsEv */
	virtual void ResetToTime(class CAnimationGraphInstance *, float); /* linkage=_ZN23CAnimationGraphInstance11ResetToTimeEf */
	/* <e8a8c9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:434 */
	virtual const class CUtlVector<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >  & GetActiveSequences(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance18GetActiveSequencesEv */
	virtual class IAnimParameterListInstance * GetParameterList(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance16GetParameterListEv */
	virtual const class IAnimParameterListInstance  * GetParameterList(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance16GetParameterListEv */
	virtual class IAnimTagManagerInstance * GetAnimTagManager(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance17GetAnimTagManagerEv */
	virtual const class IAnimTagManagerInstance  * GetAnimTagManager(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance17GetAnimTagManagerEv */
	virtual class IAnimMovementManagerInstance * GetMovementManager(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance18GetMovementManagerEv */
	virtual const class IAnimMovementManagerInstance  * GetMovementManager(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance18GetMovementManagerEv */
	virtual class IAnimationGraphPhysicsTraceManager * GetPhysicsTraceManager(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance22GetPhysicsTraceManagerEv */
	virtual class IAnimationGraphVisualizationManager * GetVisualizationManager(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance23GetVisualizationManagerEv */
	virtual class IAnimVRProxy * GetVRProxy(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance10GetVRProxyEv */
	virtual const class IAnimVRProxy  * GetVRProxy(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance10GetVRProxyEv */
	virtual void SetVRProxy(class CAnimationGraphInstance *, class IAnimVRProxy *); /* linkage=_ZN23CAnimationGraphInstance10SetVRProxyEP12IAnimVRProxy */
	virtual Activity GetActivity(const class CAnimationGraphInstance  *, int); /* linkage=_ZNK23CAnimationGraphInstance11GetActivityEi */
	virtual void SetActivity(class CAnimationGraphInstance *, Activity, int); /* linkage=_ZN23CAnimationGraphInstance11SetActivityEii */
	virtual CReceiptPtr RegisterSequenceListener(class CAnimationGraphInstance *, class IAnimGraphSequenceFinishedListener *); /* linkage=_ZN23CAnimationGraphInstance24RegisterSequenceListenerEP34IAnimGraphSequenceFinishedListener */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > DebugGetActiveNodes(const class CAnimationGraphInstance  *, bool); /* linkage=_ZNK23CAnimationGraphInstance19DebugGetActiveNodesEb */
	virtual IAnimGraphDebugReplayPtr GetDebugReplay(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance14GetDebugReplayEv */
	/* <e8c083> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:641 */
	virtual void SetDebugReplay(class CAnimationGraphInstance *, const IAnimGraphDebugReplayPtr  &, class IReplayPreprocessingHelper *); /* linkage=_ZN23CAnimationGraphInstance14SetDebugReplayERK9CSmartPtrI21IAnimGraphDebugReplay17CRefCountAccessorEPN23IAnimationGraphInstance26IReplayPreprocessingHelperE */
	virtual void CollectVisualizations(const class CAnimationGraphInstance  *, class IAnimationGraphVisualizationManager *); /* linkage=_ZNK23CAnimationGraphInstance21CollectVisualizationsEP35IAnimationGraphVisualizationManager */
	/* <e8ec6e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:660 */
	const class CAnimGraphInstanceData  & GetInstanceDataInternal(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance23GetInstanceDataInternalEv */
	class CAnimGraphInstanceData & GetInstanceDataInternal(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance23GetInstanceDataInternalEv */
	/* <e8ed2d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:672 */
	const class CPoseRecipe  & GetPoseRecipe(const class CAnimationGraphInstance  *); /* linkage=_ZNK23CAnimationGraphInstance13GetPoseRecipeEv */
	class CPoseRecipe & GetPoseRecipe(class CAnimationGraphInstance *); /* linkage=_ZN23CAnimationGraphInstance13GetPoseRecipeEv */
	virtual void * DoQueryInterface(class CAnimationGraphInstance *, class ClassID); /* linkage=_ZN23CAnimationGraphInstance16DoQueryInterfaceEN10Reflection7ClassIDE */
	class CAnimNodeInstanceBase * GetNodeInternal(class CAnimationGraphInstance *, int); /* linkage=_ZN23CAnimationGraphInstance15GetNodeInternalEi */
	/* <e93afa> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:724 */
	class CAnimNodeInstanceBase * GetNodeInternal(class CAnimationGraphInstance *, const class AnimNodeLocation_t  &); /* linkage=_ZN23CAnimationGraphInstance15GetNodeInternalERK18AnimNodeLocation_t */
	CAnimPosePtr EvaluatePoseAtTime(class CAnimationGraphInstance *, float, class CTransform &); /* linkage=_ZN23CAnimationGraphInstance18EvaluatePoseAtTimeEfR10CTransform */
	void UnregisterSequenceListener(class CAnimationGraphInstance *, class IAnimGraphSequenceFinishedListener *); /* linkage=_ZN23CAnimationGraphInstance26UnregisterSequenceListenerEP34IAnimGraphSequenceFinishedListener */
	void DebugGetActiveNodesRecurs(const class CAnimationGraphInstance  *, int, const class AnimNodeLocation_t  &, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK23CAnimationGraphInstance25DebugGetActiveNodesRecursEiRK18AnimNodeLocation_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
};

// <00E7DB39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.h:73
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 73
	const char   __PRETTY_FUNCTION__; // 11667
} /* size: 0, variables: 2 */

