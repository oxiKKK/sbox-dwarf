
//
// animgraph/futurefacingmetricinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <013E48B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.h:13
// function calls: 8
void CFutureFacingMetricInstance::~CFutureFacingMetricInstance()
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

// <013E462F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.h:13
// function calls: 13
void CFutureFacingMetricInstance::~CFutureFacingMetricInstance()
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
	CFutureFacingMetricInstance::~CFutureFacingMetricInstance(); // 13
} /* size: 109, inline expansions: 13 (224 bytes) */

// <013E4613> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.h:13
inline void CFutureFacingMetricInstance::~CFutureFacingMetricInstance()
{
} /* size: 0 */

// <013B09F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.h:13
// member functions: 24
// member variables: 2
// static member variable: 1
// vtable entries: 5
// class size: 48
class CFutureFacingMetricInstance : public CMotionMetricInstance, public IFutureFacingMetricInstance {
public:
	/* class CMotionMetricInstance <ancestor>; */ /* 0 40 */
	/* class IFutureFacingMetricInstance <ancestor>; */ /* 40 8 */
	void CFutureFacingMetricInstance(CFutureFacingMetricInstance* , CFutureFacingMetricInstance& );
	void CFutureFacingMetricInstance(CFutureFacingMetricInstance* , const CFutureFacingMetricInstance& );
private:
	static class CClassInfoT<CFutureFacingMetricInstance> m_classInfoCFutureFacingMetricInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CFutureFacingMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12 */
	virtual void* CastToBase(CFutureFacingMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12 */
	virtual const void* CastToBase(const CFutureFacingMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:19 */
	void CFutureFacingMetricInstance(CFutureFacingMetricInstance* , const CAnimGraphUpdateContextPtr& , CPackedHandle<const CMotionMetricEvaluator>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:26 */
	virtual Vector GetGoalPosition(const CFutureFacingMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:32 */
	virtual Vector GetClipPosition(const CFutureFacingMetricInstance* , HSequence, float, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:38 */
	const CFutureFacingMetricEvaluator* GetFacingEvaluator(const CFutureFacingMetricInstance* );
	virtual void ~CFutureFacingMetricInstance(CFutureFacingMetricInstance* );
	void CFutureFacingMetricInstance(class CFutureFacingMetricInstance *, class CFutureFacingMetricInstance &); /* linkage=_ZN27CFutureFacingMetricInstanceC4EOS_ */
	void CFutureFacingMetricInstance(class CFutureFacingMetricInstance *, const class CFutureFacingMetricInstance  &); /* linkage=_ZN27CFutureFacingMetricInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN27CFutureFacingMetricInstance8MyTypeIDEv */
	/* <140ea81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN27CFutureFacingMetricInstance10MyTypeInfoEv */
	/* <140c54f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFutureFacingMetricInstance  *); /* linkage=_ZNK27CFutureFacingMetricInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CFutureFacingMetricInstance *, class ClassID); /* linkage=_ZN27CFutureFacingMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CFutureFacingMetricInstance  *, class ClassID); /* linkage=_ZNK27CFutureFacingMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	void CFutureFacingMetricInstance(class CFutureFacingMetricInstance *, const CAnimGraphUpdateContextPtr  &, class CPackedHandle<const CMotionMetricEvaluator>); /* linkage=_ZN27CFutureFacingMetricInstanceC4ERK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE13CPackedHandleIK22CMotionMetricEvaluatorE */
	/* <140dbd6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:26 */
	virtual class Vector GetGoalPosition(const class CFutureFacingMetricInstance  *); /* linkage=_ZNK27CFutureFacingMetricInstance15GetGoalPositionEv */
	/* <140e16f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:32 */
	virtual class Vector GetClipPosition(const class CFutureFacingMetricInstance  *, class HSequence, float, bool); /* linkage=_ZNK27CFutureFacingMetricInstance15GetClipPositionE9HSequencefb */
	/* <140ea9f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:38 */
	const class CFutureFacingMetricEvaluator  * GetFacingEvaluator(const class CFutureFacingMetricInstance  *); /* linkage=_ZNK27CFutureFacingMetricInstance18GetFacingEvaluatorEv */
	virtual void ~CFutureFacingMetricInstance(class CFutureFacingMetricInstance *); /* linkage=_ZN27CFutureFacingMetricInstanceD4Ev */
};

// <0140512B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 47094
} /* size: 0, variables: 2 */

