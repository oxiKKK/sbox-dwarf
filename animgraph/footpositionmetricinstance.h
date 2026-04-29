
//
// animgraph/footpositionmetricinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <013E3FE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.h:13
// function calls: 8
void CFootPositionMetricInstance::~CFootPositionMetricInstance()
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

// <013E3D5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.h:13
// function calls: 13
void CFootPositionMetricInstance::~CFootPositionMetricInstance()
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
	CFootPositionMetricInstance::~CFootPositionMetricInstance(); // 13
} /* size: 109, inline expansions: 13 (224 bytes) */

// <013E3D43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.h:13
inline void CFootPositionMetricInstance::~CFootPositionMetricInstance()
{
} /* size: 0 */

// <013AE411> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.h:13
// member functions: 24
// member variables: 2
// static member variable: 1
// vtable entries: 5
// class size: 48
class CFootPositionMetricInstance : public CMotionMetricInstance, public IFootPositionMetricInstance {
public:
	/* class CMotionMetricInstance <ancestor>; */ /* 0 40 */
	/* class IFootPositionMetricInstance <ancestor>; */ /* 40 8 */
	void CFootPositionMetricInstance(CFootPositionMetricInstance* , CFootPositionMetricInstance& );
	void CFootPositionMetricInstance(CFootPositionMetricInstance* , const CFootPositionMetricInstance& );
private:
	static class CClassInfoT<CFootPositionMetricInstance> m_classInfoCFootPositionMetricInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CFootPositionMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12 */
	virtual void* CastToBase(CFootPositionMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12 */
	virtual const void* CastToBase(const CFootPositionMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:19 */
	void CFootPositionMetricInstance(CFootPositionMetricInstance* , const CAnimGraphUpdateContextPtr& , CPackedHandle<const CMotionMetricEvaluator>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:26 */
	virtual int GetFootCount(const CFootPositionMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:32 */
	virtual int GetFootIndex(const CFootPositionMetricInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:38 */
	const CFootPositionMetricEvaluator* GetFootPosEvaluator(const CFootPositionMetricInstance* );
	virtual void ~CFootPositionMetricInstance(CFootPositionMetricInstance* );
	void CFootPositionMetricInstance(class CFootPositionMetricInstance *, class CFootPositionMetricInstance &); /* linkage=_ZN27CFootPositionMetricInstanceC4EOS_ */
	void CFootPositionMetricInstance(class CFootPositionMetricInstance *, const class CFootPositionMetricInstance  &); /* linkage=_ZN27CFootPositionMetricInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN27CFootPositionMetricInstance8MyTypeIDEv */
	/* <140e8b8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN27CFootPositionMetricInstance10MyTypeInfoEv */
	/* <140c4fb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CFootPositionMetricInstance  *); /* linkage=_ZNK27CFootPositionMetricInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CFootPositionMetricInstance *, class ClassID); /* linkage=_ZN27CFootPositionMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CFootPositionMetricInstance  *, class ClassID); /* linkage=_ZNK27CFootPositionMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	void CFootPositionMetricInstance(class CFootPositionMetricInstance *, const CAnimGraphUpdateContextPtr  &, class CPackedHandle<const CMotionMetricEvaluator>); /* linkage=_ZN27CFootPositionMetricInstanceC4ERK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE13CPackedHandleIK22CMotionMetricEvaluatorE */
	/* <140cde5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:26 */
	virtual int GetFootCount(const class CFootPositionMetricInstance  *); /* linkage=_ZNK27CFootPositionMetricInstance12GetFootCountEv */
	/* <140d5e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:32 */
	virtual int GetFootIndex(const class CFootPositionMetricInstance  *, int); /* linkage=_ZNK27CFootPositionMetricInstance12GetFootIndexEi */
	/* <140e8d6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:38 */
	const class CFootPositionMetricEvaluator  * GetFootPosEvaluator(const class CFootPositionMetricInstance  *); /* linkage=_ZNK27CFootPositionMetricInstance19GetFootPosEvaluatorEv */
	virtual void ~CFootPositionMetricInstance(class CFootPositionMetricInstance *); /* linkage=_ZN27CFootPositionMetricInstanceD4Ev */
};

// <0140699F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 47094
} /* size: 0, variables: 2 */

