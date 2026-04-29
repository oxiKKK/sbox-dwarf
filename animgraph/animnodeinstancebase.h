
//
// animgraph/animnodeinstancebase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0128F6C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.h:15
void CAnimNodeInstanceBase::~CAnimNodeInstanceBase()
{
} /* size: 0 */

// <0128F694> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.h:15
inline void CAnimNodeInstanceBase::~CAnimNodeInstanceBase()
{
} /* size: 0 */

// <0107E487> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.h:15
// function calls: 14
void CAnimNodeInstanceBase::~CAnimNodeInstanceBase()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 15
} /* size: 114, inline expansions: 14 (271 bytes) */

// <0107E089> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.h:15
// function calls: 19
void CAnimNodeInstanceBase::~CAnimNodeInstanceBase()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	Object::~Object(); // 14
	IAnimNodeInstance::~IAnimNodeInstance(); // 15
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 15
} /* size: 110, inline expansions: 19 (247 bytes) */

// <01006DEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.h:15
// member functions: 64
// member variables: 5
// static member variable: 1
// vtable entries: 26
// class size: 48
class CAnimNodeInstanceBase : public IAnimNodeInstance, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IAnimNodeInstance <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CAnimNodeInstanceBase(CAnimNodeInstanceBase* , CAnimNodeInstanceBase& );
	void CAnimNodeInstanceBase(CAnimNodeInstanceBase* , const CAnimNodeInstanceBase& );
private:
	static class CClassInfoT<CAnimNodeInstanceBase> m_classInfoCAnimNodeInstanceBase; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15 */
	virtual const CClassInfo& GetTypeInfo(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15 */
	virtual void* CastToBase(CAnimNodeInstanceBase* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15 */
	virtual const void* CastToBase(const CAnimNodeInstanceBase* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:19 */
	void CAnimNodeInstanceBase(CAnimNodeInstanceBase* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:28 */
	virtual const IAnimNode* GetSourceNode(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:34 */
	virtual const CUtlString& GetName(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:40 */
	virtual AnimNodeID GetNodeID(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:46 */
	virtual bool IsActive(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:52 */
	virtual bool IsWaning(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:58 */
	virtual bool IsReset(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:64 */
	virtual int GetChildCount(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:70 */
	virtual AnimNodeID GetChildID(const CAnimNodeInstanceBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:76 */
	virtual bool IsChildConnectionActive(const CAnimNodeInstanceBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:82 */
	virtual bool IsChildConnectionWaning(const CAnimNodeInstanceBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:88 */
	virtual PoseHandle GetPoseHandle(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:99 */
	virtual CMotionTransform GetRootMotion(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:105 */
	virtual float GetCycle(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:111 */
	virtual float GetDuration(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:117 */
	virtual CMotionTransform GetTotalMovement(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:123 */
	virtual CMotionTransform GetRemainingMovement(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:129 */
	virtual bool IsFinished(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:135 */
	virtual int GetLastUpdateID(const CAnimNodeInstanceBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:141 */
	virtual CFootTrajectory GetFootTrajectory(const CAnimNodeInstanceBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:152 */
	virtual CFootCycle GetFootCycle(const CAnimNodeInstanceBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:163 */
	virtual FootMotionStage GetFootStage(const CAnimNodeInstanceBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:174 */
	virtual bool IsTriggeringPark(const CAnimNodeInstanceBase* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:185 */
	virtual bool IsTriggeringTrajectoryReset(const CAnimNodeInstanceBase* , int);
protected:
	CAnimNodeBaseConstPtr m_pSrcNode; /* 24 8 */
	const class CAnimUpdateNodeBase * m_pUpdateNode; /* 32 8 */
	CAnimGraphUpdateContextPtr m_pContext; /* 40 8 */
	virtual void ~CAnimNodeInstanceBase(CAnimNodeInstanceBase* );
	void CAnimNodeInstanceBase(class CAnimNodeInstanceBase *, class CAnimNodeInstanceBase &); /* linkage=_ZN21CAnimNodeInstanceBaseC4EOS_ */
	void CAnimNodeInstanceBase(class CAnimNodeInstanceBase *, const class CAnimNodeInstanceBase  &); /* linkage=_ZN21CAnimNodeInstanceBaseC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21CAnimNodeInstanceBase8MyTypeIDEv */
	/* <1094a7c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21CAnimNodeInstanceBase10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase11GetTypeInfoEv */
	virtual void * CastToBase(class CAnimNodeInstanceBase *, class ClassID); /* linkage=_ZN21CAnimNodeInstanceBase10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CAnimNodeInstanceBase  *, class ClassID); /* linkage=_ZNK21CAnimNodeInstanceBase10CastToBaseEN10Reflection7ClassIDE */
	void CAnimNodeInstanceBase(class CAnimNodeInstanceBase *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN21CAnimNodeInstanceBaseC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	virtual const class IAnimNode  * GetSourceNode(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase13GetSourceNodeEv */
	virtual const class CUtlString  & GetName(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase7GetNameEv */
	virtual class AnimNodeID GetNodeID(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase9GetNodeIDEv */
	virtual bool IsActive(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase8IsActiveEv */
	virtual bool IsWaning(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase8IsWaningEv */
	virtual bool IsReset(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase7IsResetEv */
	virtual int GetChildCount(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase13GetChildCountEv */
	virtual class AnimNodeID GetChildID(const class CAnimNodeInstanceBase  *, int); /* linkage=_ZNK21CAnimNodeInstanceBase10GetChildIDEi */
	virtual bool IsChildConnectionActive(const class CAnimNodeInstanceBase  *, int); /* linkage=_ZNK21CAnimNodeInstanceBase23IsChildConnectionActiveEi */
	virtual bool IsChildConnectionWaning(const class CAnimNodeInstanceBase  *, int); /* linkage=_ZNK21CAnimNodeInstanceBase23IsChildConnectionWaningEi */
	/* <109382d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:88 */
	virtual PoseHandle GetPoseHandle(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase13GetPoseHandleEv */
	virtual class CMotionTransform GetRootMotion(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase13GetRootMotionEv */
	virtual float GetCycle(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase8GetCycleEv */
	virtual float GetDuration(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase11GetDurationEv */
	virtual class CMotionTransform GetTotalMovement(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase16GetTotalMovementEv */
	virtual class CMotionTransform GetRemainingMovement(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase20GetRemainingMovementEv */
	virtual bool IsFinished(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase10IsFinishedEv */
	virtual int GetLastUpdateID(const class CAnimNodeInstanceBase  *); /* linkage=_ZNK21CAnimNodeInstanceBase15GetLastUpdateIDEv */
	virtual class CFootTrajectory GetFootTrajectory(const class CAnimNodeInstanceBase  *, int); /* linkage=_ZNK21CAnimNodeInstanceBase17GetFootTrajectoryEi */
	virtual class CFootCycle GetFootCycle(const class CAnimNodeInstanceBase  *, int); /* linkage=_ZNK21CAnimNodeInstanceBase12GetFootCycleEi */
	virtual enum FootMotionStage GetFootStage(const class CAnimNodeInstanceBase  *, int); /* linkage=_ZNK21CAnimNodeInstanceBase12GetFootStageEi */
	virtual bool IsTriggeringPark(const class CAnimNodeInstanceBase  *, int); /* linkage=_ZNK21CAnimNodeInstanceBase16IsTriggeringParkEi */
	virtual bool IsTriggeringTrajectoryReset(const class CAnimNodeInstanceBase  *, int); /* linkage=_ZNK21CAnimNodeInstanceBase27IsTriggeringTrajectoryResetEi */
	virtual void ~CAnimNodeInstanceBase(class CAnimNodeInstanceBase *); /* linkage=_ZN21CAnimNodeInstanceBaseD4Ev */
};

// <0108D489> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 21213
} /* size: 0, variables: 2 */

// <012450FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.h:19
void CAnimNodeInstanceBase::CAnimNodeInstanceBase(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

