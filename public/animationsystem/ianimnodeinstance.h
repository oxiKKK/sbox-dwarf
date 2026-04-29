
//
// public/animationsystem/ianimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <0128F711> ../public/animationsystem/ianimnodeinstance.h:14
void IAnimNodeInstance::~IAnimNodeInstance()
{
} /* size: 0 */

// <0128F6DE> ../public/animationsystem/ianimnodeinstance.h:14
inline void IAnimNodeInstance::~IAnimNodeInstance()
{
} /* size: 0 */

// <01087028> ../public/animationsystem/ianimnodeinstance.h:14
void IAnimNodeInstance::IAnimNodeInstance()
{
} /* size: 0 */

// <0108700C> ../public/animationsystem/ianimnodeinstance.h:14
inline void IAnimNodeInstance::IAnimNodeInstance()
{
} /* size: 0 */

// <010068B0> ../public/animationsystem/ianimnodeinstance.h:14
// member functions: 64
// member variable: 1
// static member variable: 1
// vtable entries: 26
// class size: 8
class IAnimNodeInstance : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimNodeInstance(IAnimNodeInstance* , IAnimNodeInstance& );
	void IAnimNodeInstance(IAnimNodeInstance* , const IAnimNodeInstance& );
	void IAnimNodeInstance(IAnimNodeInstance* );
private:
	static class CClassInfoT<IAnimNodeInstance> m_classInfoIAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/ianimnodeinstance.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const IAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:12 */
	virtual void* CastToBase(IAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:12 */
	virtual const void* CastToBase(const IAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/ianimnodeinstance.h:19 */
	virtual const IAnimNode* GetSourceNode(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:22 */
	virtual const CUtlString& GetName(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:25 */
	virtual AnimNodeID GetNodeID(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:28 */
	virtual bool IsActive(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:31 */
	virtual bool IsWaning(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:34 */
	virtual bool IsReset(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:37 */
	virtual int GetChildCount(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:40 */
	virtual AnimNodeID GetChildID(const IAnimNodeInstance* , int);
	/* ../public/animationsystem/ianimnodeinstance.h:43 */
	virtual bool IsChildConnectionActive(const IAnimNodeInstance* , int);
	/* ../public/animationsystem/ianimnodeinstance.h:46 */
	virtual bool IsChildConnectionWaning(const IAnimNodeInstance* , int);
	/* ../public/animationsystem/ianimnodeinstance.h:49 */
	virtual PoseHandle GetPoseHandle(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:52 */
	virtual CMotionTransform GetRootMotion(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:55 */
	virtual float GetCycle(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:58 */
	virtual float GetDuration(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:61 */
	virtual CMotionTransform GetTotalMovement(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:65 */
	virtual CMotionTransform GetRemainingMovement(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:68 */
	virtual bool IsFinished(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:72 */
	virtual int GetLastUpdateID(const IAnimNodeInstance* );
	/* ../public/animationsystem/ianimnodeinstance.h:75 */
	virtual CFootTrajectory GetFootTrajectory(const IAnimNodeInstance* , int);
	/* ../public/animationsystem/ianimnodeinstance.h:78 */
	virtual CFootCycle GetFootCycle(const IAnimNodeInstance* , int);
	/* ../public/animationsystem/ianimnodeinstance.h:81 */
	virtual FootMotionStage GetFootStage(const IAnimNodeInstance* , int);
	/* ../public/animationsystem/ianimnodeinstance.h:84 */
	virtual bool IsTriggeringPark(const IAnimNodeInstance* , int);
	/* ../public/animationsystem/ianimnodeinstance.h:87 */
	virtual bool IsTriggeringTrajectoryReset(const IAnimNodeInstance* , int);
	virtual void ~IAnimNodeInstance(IAnimNodeInstance* );
	void IAnimNodeInstance(class IAnimNodeInstance *, class IAnimNodeInstance &); /* linkage=_ZN17IAnimNodeInstanceC4EOS_ */
	void IAnimNodeInstance(class IAnimNodeInstance *, const class IAnimNodeInstance  &); /* linkage=_ZN17IAnimNodeInstanceC4ERKS_ */
	void IAnimNodeInstance(class IAnimNodeInstance *); /* linkage=_ZN17IAnimNodeInstanceC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN17IAnimNodeInstance8MyTypeIDEv */
	/* <1094a5e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17IAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IAnimNodeInstance *, class ClassID); /* linkage=_ZN17IAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IAnimNodeInstance  *, class ClassID); /* linkage=_ZNK17IAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const class IAnimNode  * GetSourceNode(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance13GetSourceNodeEv */
	virtual const class CUtlString  & GetName(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance7GetNameEv */
	virtual class AnimNodeID GetNodeID(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance9GetNodeIDEv */
	virtual bool IsActive(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance8IsActiveEv */
	virtual bool IsWaning(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance8IsWaningEv */
	virtual bool IsReset(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance7IsResetEv */
	virtual int GetChildCount(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance13GetChildCountEv */
	virtual class AnimNodeID GetChildID(const class IAnimNodeInstance  *, int); /* linkage=_ZNK17IAnimNodeInstance10GetChildIDEi */
	virtual bool IsChildConnectionActive(const class IAnimNodeInstance  *, int); /* linkage=_ZNK17IAnimNodeInstance23IsChildConnectionActiveEi */
	virtual bool IsChildConnectionWaning(const class IAnimNodeInstance  *, int); /* linkage=_ZNK17IAnimNodeInstance23IsChildConnectionWaningEi */
	virtual PoseHandle GetPoseHandle(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance13GetPoseHandleEv */
	virtual class CMotionTransform GetRootMotion(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance13GetRootMotionEv */
	virtual float GetCycle(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance8GetCycleEv */
	virtual float GetDuration(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance11GetDurationEv */
	virtual class CMotionTransform GetTotalMovement(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance16GetTotalMovementEv */
	virtual class CMotionTransform GetRemainingMovement(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance20GetRemainingMovementEv */
	virtual bool IsFinished(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance10IsFinishedEv */
	virtual int GetLastUpdateID(const class IAnimNodeInstance  *); /* linkage=_ZNK17IAnimNodeInstance15GetLastUpdateIDEv */
	virtual class CFootTrajectory GetFootTrajectory(const class IAnimNodeInstance  *, int); /* linkage=_ZNK17IAnimNodeInstance17GetFootTrajectoryEi */
	virtual class CFootCycle GetFootCycle(const class IAnimNodeInstance  *, int); /* linkage=_ZNK17IAnimNodeInstance12GetFootCycleEi */
	virtual enum FootMotionStage GetFootStage(const class IAnimNodeInstance  *, int); /* linkage=_ZNK17IAnimNodeInstance12GetFootStageEi */
	virtual bool IsTriggeringPark(const class IAnimNodeInstance  *, int); /* linkage=_ZNK17IAnimNodeInstance16IsTriggeringParkEi */
	virtual bool IsTriggeringTrajectoryReset(const class IAnimNodeInstance  *, int); /* linkage=_ZNK17IAnimNodeInstance27IsTriggeringTrajectoryResetEi */
	virtual void ~IAnimNodeInstance(class IAnimNodeInstance *); /* linkage=_ZN17IAnimNodeInstanceD4Ev */
};

// <0108DECC> ../public/animationsystem/ianimnodeinstance.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 21110
} /* size: 0, variables: 2 */

