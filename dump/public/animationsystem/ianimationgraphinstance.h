
//
// public/animationsystem/ianimationgraphinstance.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 8
//	class: 1
//	struct: 1
//

// <015B6E58> ../public/animationsystem/ianimationgraphinstance.h:30
void AnimGraphOperation_t::AnimGraphOperation_t()
{
} /* size: 0 */

// <015B6E3C> ../public/animationsystem/ianimationgraphinstance.h:30
inline void AnimGraphOperation_t::AnimGraphOperation_t()
{
} /* size: 0 */

// <00D93D9C> ../public/animationsystem/ianimationgraphinstance.h:30
// member variables: 4
// struct size: 16
struct AnimGraphOperation_t {
	HSequence m_hSequence; /* 0 4 */
	float m_flCycle; /* 4 4 */
	float m_flPrevCycle; /* 8 4 */
	float m_flWeight; /* 12 4 */
};

// <00E73018> ../public/animationsystem/ianimationgraphinstance.h:53
void IAnimationGraphInstance::IAnimationGraphInstance()
{
} /* size: 0 */

// <00E72FFC> ../public/animationsystem/ianimationgraphinstance.h:53
inline void IAnimationGraphInstance::IAnimationGraphInstance()
{
} /* size: 0 */

// <00E72FE5> ../public/animationsystem/ianimationgraphinstance.h:53
void IAnimationGraphInstance::~IAnimationGraphInstance()
{
} /* size: 0 */

// <00E72FB2> ../public/animationsystem/ianimationgraphinstance.h:53
inline void IAnimationGraphInstance::~IAnimationGraphInstance()
{
} /* size: 0 */

// <00DD2EA6> ../public/animationsystem/ianimationgraphinstance.h:53
// member functions: 101
// member variables: 2
// static member variable: 1
// vtable entries: 44
// class size: 24
class IAnimationGraphInstance : public Object, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	class IReplayPreprocessingHelper {
	};
public:
	/* class Object <ancestor>; */ /* 0 0 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void IAnimationGraphInstance(IAnimationGraphInstance* , IAnimationGraphInstance& );
	void IAnimationGraphInstance(IAnimationGraphInstance* , const IAnimationGraphInstance& );
	void IAnimationGraphInstance(IAnimationGraphInstance* );
private:
	static class CClassInfoT<IAnimationGraphInstance> m_classInfoIAnimationGraphInstance; /* 0 0 */
	/* ../public/animationsystem/ianimationgraphinstance.h:55 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27 */
	virtual const CClassInfo& GetTypeInfo(const IAnimationGraphInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27 */
	virtual void* CastToBase(IAnimationGraphInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27 */
	virtual const void* CastToBase(const IAnimationGraphInstance* , ClassID);
	/* ../public/animationsystem/ianimationgraphinstance.h:59 */
	virtual int GetNodeCount(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:62 */
	virtual IAnimNodeInstance* GetNode(IAnimationGraphInstance* , const AnimNodeLocation_t& );
	/* ../public/animationsystem/ianimationgraphinstance.h:63 */
	virtual const IAnimNodeInstance* GetNode(const IAnimationGraphInstance* , const AnimNodeLocation_t& );
	/* ../public/animationsystem/ianimationgraphinstance.h:70 */
	virtual CAnimSkeletonConstPtr GetSkeleton(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:73 */
	virtual HModel GetModel(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:76 */
	virtual const IAnimNodeInstance* GetRootNode(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:79 */
	virtual const CTransform& GetLocalToWorldTransform(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:82 */
	virtual const CTransform& GetPreviousLocalToWorldTransform(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:87 */
	virtual void Update(IAnimationGraphInstance* , const CTransform& , float, bool);
	/* ../public/animationsystem/ianimationgraphinstance.h:90 */
	virtual void Update(IAnimationGraphInstance* , const CTransform& , float, float);
	/* ../public/animationsystem/ianimationgraphinstance.h:93 */
	virtual void EvaluateRootMotion(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:98 */
	virtual CAnimPoseConstPtr EvaluatePose(IAnimationGraphInstance* , const CTransform& );
	/* ../public/animationsystem/ianimationgraphinstance.h:102 */
	virtual CAnimPosePtr EvaluatePartialPose(IAnimationGraphInstance* , PoseHandle);
	/* ../public/animationsystem/ianimationgraphinstance.h:106 */
	virtual CAnimPosePtr GetPoseAtTime(IAnimationGraphInstance* , float, CTransform& );
	/* ../public/animationsystem/ianimationgraphinstance.h:109 */
	virtual float GetLastTimeStep(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:112 */
	virtual float GetAnimTime(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:115 */
	virtual CMotionTransform GetRootMotion(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:118 */
	virtual void ResetToTime(IAnimationGraphInstance* , float);
	/* ../public/animationsystem/ianimationgraphinstance.h:122 */
	virtual bool DispatchTagEvents(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:125 */
	virtual const CUtlVector<animevent_t, CUtlMemory<animevent_t, int> >& GetPendingAnimEvents(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:128 */
	virtual void ClearPendingAnimEvents(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:131 */
	virtual const CUtlVector<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >& GetActiveSequences(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:134 */
	virtual IAnimParameterListInstance* GetParameterList(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:135 */
	virtual const IAnimParameterListInstance* GetParameterList(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:139 */
	virtual IAnimTagManagerInstance* GetAnimTagManager(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:140 */
	virtual const IAnimTagManagerInstance* GetAnimTagManager(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:144 */
	virtual IAnimMovementManagerInstance* GetMovementManager(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:145 */
	virtual const IAnimMovementManagerInstance* GetMovementManager(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:147 */
	virtual IAnimationGraphPhysicsTraceManager* GetPhysicsTraceManager(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:148 */
	virtual IAnimationGraphVisualizationManager* GetVisualizationManager(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:152 */
	virtual IAnimVRProxy* GetVRProxy(IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:153 */
	virtual const IAnimVRProxy* GetVRProxy(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:154 */
	virtual void SetVRProxy(IAnimationGraphInstance* , IAnimVRProxy* );
	/* ../public/animationsystem/ianimationgraphinstance.h:157 */
	virtual Activity GetActivity(const IAnimationGraphInstance* , int);
	/* ../public/animationsystem/ianimationgraphinstance.h:162 */
	virtual void SetActivity(IAnimationGraphInstance* , Activity, int);
	/* ../public/animationsystem/ianimationgraphinstance.h:166 */
	virtual CReceiptPtr RegisterSequenceListener(IAnimationGraphInstance* , IAnimGraphSequenceFinishedListener* );
	/* ../public/animationsystem/ianimationgraphinstance.h:169 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > DebugGetActiveNodes(const IAnimationGraphInstance* , bool);
	/* ../public/animationsystem/ianimationgraphinstance.h:173 */
	virtual IAnimGraphDebugReplayPtr GetDebugReplay(const IAnimationGraphInstance* );
	/* ../public/animationsystem/ianimationgraphinstance.h:185 */
	virtual void SetDebugReplay(IAnimationGraphInstance* , const IAnimGraphDebugReplayPtr& , IReplayPreprocessingHelper* );
	/* ../public/animationsystem/ianimationgraphinstance.h:187 */
	virtual void CollectVisualizations(const IAnimationGraphInstance* , IAnimationGraphVisualizationManager* );
protected:
	/* ../public/animationsystem/ianimationgraphinstance.h:191 */
	virtual void* DoQueryInterface(IAnimationGraphInstance* , ClassID);
	virtual void ~IAnimationGraphInstance(IAnimationGraphInstance* );
	class IDirectPlaybackAnimNodeInstance * QueryInterface<IDirectPlaybackAnimNodeInstance>(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance14QueryInterfaceI31IDirectPlaybackAnimNodeInstanceEEPT_v */
	void IAnimationGraphInstance(class IAnimationGraphInstance *, class IAnimationGraphInstance &); /* linkage=_ZN23IAnimationGraphInstanceC4EOS_ */
	void IAnimationGraphInstance(class IAnimationGraphInstance *, const class IAnimationGraphInstance  &); /* linkage=_ZN23IAnimationGraphInstanceC4ERKS_ */
	void IAnimationGraphInstance(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstanceC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23IAnimationGraphInstance8MyTypeIDEv */
	/* <e8ebf8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23IAnimationGraphInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IAnimationGraphInstance *, class ClassID); /* linkage=_ZN23IAnimationGraphInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IAnimationGraphInstance  *, class ClassID); /* linkage=_ZNK23IAnimationGraphInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetNodeCount(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance12GetNodeCountEv */
	virtual class IAnimNodeInstance * GetNode(class IAnimationGraphInstance *, const class AnimNodeLocation_t  &); /* linkage=_ZN23IAnimationGraphInstance7GetNodeERK18AnimNodeLocation_t */
	virtual const class IAnimNodeInstance  * GetNode(const class IAnimationGraphInstance  *, const class AnimNodeLocation_t  &); /* linkage=_ZNK23IAnimationGraphInstance7GetNodeERK18AnimNodeLocation_t */
	virtual CAnimSkeletonConstPtr GetSkeleton(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance11GetSkeletonEv */
	virtual HModel GetModel(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance8GetModelEv */
	virtual const class IAnimNodeInstance  * GetRootNode(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance11GetRootNodeEv */
	virtual const class CTransform  & GetLocalToWorldTransform(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance24GetLocalToWorldTransformEv */
	virtual const class CTransform  & GetPreviousLocalToWorldTransform(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance32GetPreviousLocalToWorldTransformEv */
	virtual void Update(class IAnimationGraphInstance *, const class CTransform  &, float, bool); /* linkage=_ZN23IAnimationGraphInstance6UpdateERK10CTransformfb */
	virtual void Update(class IAnimationGraphInstance *, const class CTransform  &, float, float); /* linkage=_ZN23IAnimationGraphInstance6UpdateERK10CTransformff */
	virtual void EvaluateRootMotion(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance18EvaluateRootMotionEv */
	virtual CAnimPoseConstPtr EvaluatePose(class IAnimationGraphInstance *, const class CTransform  &); /* linkage=_ZN23IAnimationGraphInstance12EvaluatePoseERK10CTransform */
	virtual CAnimPosePtr EvaluatePartialPose(class IAnimationGraphInstance *, PoseHandle); /* linkage=_ZN23IAnimationGraphInstance19EvaluatePartialPoseEh */
	virtual CAnimPosePtr GetPoseAtTime(class IAnimationGraphInstance *, float, class CTransform &); /* linkage=_ZN23IAnimationGraphInstance13GetPoseAtTimeEfR10CTransform */
	virtual float GetLastTimeStep(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance15GetLastTimeStepEv */
	virtual float GetAnimTime(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance11GetAnimTimeEv */
	virtual class CMotionTransform GetRootMotion(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance13GetRootMotionEv */
	virtual void ResetToTime(class IAnimationGraphInstance *, float); /* linkage=_ZN23IAnimationGraphInstance11ResetToTimeEf */
	virtual bool DispatchTagEvents(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance17DispatchTagEventsEv */
	virtual const class CUtlVector<animevent_t, CUtlMemory<animevent_t, int> >  & GetPendingAnimEvents(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance20GetPendingAnimEventsEv */
	virtual void ClearPendingAnimEvents(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance22ClearPendingAnimEventsEv */
	virtual const class CUtlVector<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >  & GetActiveSequences(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance18GetActiveSequencesEv */
	virtual class IAnimParameterListInstance * GetParameterList(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance16GetParameterListEv */
	virtual const class IAnimParameterListInstance  * GetParameterList(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance16GetParameterListEv */
	virtual class IAnimTagManagerInstance * GetAnimTagManager(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance17GetAnimTagManagerEv */
	virtual const class IAnimTagManagerInstance  * GetAnimTagManager(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance17GetAnimTagManagerEv */
	virtual class IAnimMovementManagerInstance * GetMovementManager(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance18GetMovementManagerEv */
	virtual const class IAnimMovementManagerInstance  * GetMovementManager(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance18GetMovementManagerEv */
	virtual class IAnimationGraphPhysicsTraceManager * GetPhysicsTraceManager(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance22GetPhysicsTraceManagerEv */
	virtual class IAnimationGraphVisualizationManager * GetVisualizationManager(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance23GetVisualizationManagerEv */
	virtual class IAnimVRProxy * GetVRProxy(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstance10GetVRProxyEv */
	virtual const class IAnimVRProxy  * GetVRProxy(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance10GetVRProxyEv */
	virtual void SetVRProxy(class IAnimationGraphInstance *, class IAnimVRProxy *); /* linkage=_ZN23IAnimationGraphInstance10SetVRProxyEP12IAnimVRProxy */
	virtual Activity GetActivity(const class IAnimationGraphInstance  *, int); /* linkage=_ZNK23IAnimationGraphInstance11GetActivityEi */
	virtual void SetActivity(class IAnimationGraphInstance *, Activity, int); /* linkage=_ZN23IAnimationGraphInstance11SetActivityEii */
	virtual CReceiptPtr RegisterSequenceListener(class IAnimationGraphInstance *, class IAnimGraphSequenceFinishedListener *); /* linkage=_ZN23IAnimationGraphInstance24RegisterSequenceListenerEP34IAnimGraphSequenceFinishedListener */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > DebugGetActiveNodes(const class IAnimationGraphInstance  *, bool); /* linkage=_ZNK23IAnimationGraphInstance19DebugGetActiveNodesEb */
	virtual IAnimGraphDebugReplayPtr GetDebugReplay(const class IAnimationGraphInstance  *); /* linkage=_ZNK23IAnimationGraphInstance14GetDebugReplayEv */
	virtual void SetDebugReplay(class IAnimationGraphInstance *, const IAnimGraphDebugReplayPtr  &, class IReplayPreprocessingHelper *); /* linkage=_ZN23IAnimationGraphInstance14SetDebugReplayERK9CSmartPtrI21IAnimGraphDebugReplay17CRefCountAccessorEPNS_26IReplayPreprocessingHelperE */
	virtual void CollectVisualizations(const class IAnimationGraphInstance  *, class IAnimationGraphVisualizationManager *); /* linkage=_ZNK23IAnimationGraphInstance21CollectVisualizationsEP35IAnimationGraphVisualizationManager */
	virtual void * DoQueryInterface(class IAnimationGraphInstance *, class ClassID); /* linkage=_ZN23IAnimationGraphInstance16DoQueryInterfaceEN10Reflection7ClassIDE */
	virtual void ~IAnimationGraphInstance(class IAnimationGraphInstance *); /* linkage=_ZN23IAnimationGraphInstanceD4Ev */
};

// <00E86595> ../public/animationsystem/ianimationgraphinstance.h:55
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 55
	const char   __PRETTY_FUNCTION__; // 11667
} /* size: 0, variables: 2 */

// <0127A495> ../public/animationsystem/ianimationgraphinstance.h:198
inline void IAnimationGraphInstance::QueryInterface<IDirectPlaybackAnimNodeInstance>()
{
} /* size: 0 */

