
//
// animgraph/futurevelocitymetricinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <013E5186> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.h:13
// function calls: 8
void CFutureVelocityMetricInstance::~CFutureVelocityMetricInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
	CMotionMetricInstance::~CMotionMetricInstance(); // 13
} /* size: 65, inline expansions: 8 (171 bytes) */

// <013E4EFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.h:13
// function calls: 13
void CFutureVelocityMetricInstance::~CFutureVelocityMetricInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
	Object::~Object(); // 12
	IMotionMetricInstance::~IMotionMetricInstance(); // 15
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 15
	CMotionMetricInstance::~CMotionMetricInstance(); // 13
	CFutureVelocityMetricInstance::~CFutureVelocityMetricInstance(); // 13
} /* size: 109, inline expansions: 13 (224 bytes) */

// <013E4EE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.h:13
inline void CFutureVelocityMetricInstance::~CFutureVelocityMetricInstance()
{
} /* size: 0 */

// <013B11E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.h:13
// member functions: 26
// member variables: 2
// static member variable: 1
// vtable entries: 6
// class size: 48
class CFutureVelocityMetricInstance : public CMotionMetricInstance, public IFutureVelocityMetricInstance {
public:
	/* class CMotionMetricInstance <ancestor>; */ /* 0 40 */
	/* class IFutureVelocityMetricInstance <ancestor>; */ /* 40 8 */
	void CFutureVelocityMetricInstance(CFutureVelocityMetricInstance* , CFutureVelocityMetricInstance& );
	void CFutureVelocityMetricInstance(CFutureVelocityMetricInstance* , const CFutureVelocityMetricInstance& );
private:
	static class CClassInfoT<CFutureVelocityMetricInstance> m_classInfoCFutureVelocityMetricInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CFutureVelocityMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:12 */
	virtual void* CastToBase(CFutureVelocityMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:12 */
	virtual const void* CastToBase(const CFutureVelocityMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:19 */
	void CFutureVelocityMetricInstance(CFutureVelocityMetricInstance* , const CAnimGraphUpdateContextPtr& , CPackedHandle<const CMotionMetricEvaluator>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:26 */
	virtual Vector GetGoalPosition(const CFutureVelocityMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:32 */
	virtual Vector GetClipPosition(const CFutureVelocityMetricInstance* , HSequence, float, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:38 */
	virtual bool IsDirectionless(const CFutureVelocityMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:44 */
	const CFutureVelocityMetricEvaluator* GetVelocityEvaluator(const CFutureVelocityMetricInstance* );
	virtual void ~CFutureVelocityMetricInstance(CFutureVelocityMetricInstance* );
	void CFutureVelocityMetricInstance(class CFutureVelocityMetricInstance *, class CFutureVelocityMetricInstance &); /* linkage=_ZN29CFutureVelocityMetricInstanceC4EOS_ */
	void CFutureVelocityMetricInstance(class CFutureVelocityMetricInstance *, const class CFutureVelocityMetricInstance  &); /* linkage=_ZN29CFutureVelocityMetricInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN29CFutureVelocityMetricInstance8MyTypeIDEv */
	/* <140ec4a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN29CFutureVelocityMetricInstance10MyTypeInfoEv */
	/* <140c5a3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFutureVelocityMetricInstance  *); /* linkage=_ZNK29CFutureVelocityMetricInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CFutureVelocityMetricInstance *, class ClassID); /* linkage=_ZN29CFutureVelocityMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CFutureVelocityMetricInstance  *, class ClassID); /* linkage=_ZNK29CFutureVelocityMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	void CFutureVelocityMetricInstance(class CFutureVelocityMetricInstance *, const CAnimGraphUpdateContextPtr  &, class CPackedHandle<const CMotionMetricEvaluator>); /* linkage=_ZN29CFutureVelocityMetricInstanceC4ERK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE13CPackedHandleIK22CMotionMetricEvaluatorE */
	/* <140dde7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:26 */
	virtual class Vector GetGoalPosition(const class CFutureVelocityMetricInstance  *); /* linkage=_ZNK29CFutureVelocityMetricInstance15GetGoalPositionEv */
	/* <140e379> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:32 */
	virtual class Vector GetClipPosition(const class CFutureVelocityMetricInstance  *, class HSequence, float, bool); /* linkage=_ZNK29CFutureVelocityMetricInstance15GetClipPositionE9HSequencefb */
	/* <140cf92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:38 */
	virtual bool IsDirectionless(const class CFutureVelocityMetricInstance  *); /* linkage=_ZNK29CFutureVelocityMetricInstance15IsDirectionlessEv */
	/* <140ec68> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.cpp:44 */
	const class CFutureVelocityMetricEvaluator  * GetVelocityEvaluator(const class CFutureVelocityMetricInstance  *); /* linkage=_ZNK29CFutureVelocityMetricInstance20GetVelocityEvaluatorEv */
	virtual void ~CFutureVelocityMetricInstance(class CFutureVelocityMetricInstance *); /* linkage=_ZN29CFutureVelocityMetricInstanceD4Ev */
};

// <01403CBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricinstance.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 47143
} /* size: 0, variables: 2 */

