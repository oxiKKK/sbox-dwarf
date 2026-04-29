
//
// animgraph/motionmetricinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <0140601A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.h:15
// function calls: 7
void CMotionMetricInstance::~CMotionMetricInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
} /* size: 49, inline expansions: 7 (97 bytes) */

// <01405DB7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.h:15
// function calls: 12
void CMotionMetricInstance::~CMotionMetricInstance()
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
	CMotionMetricInstance::~CMotionMetricInstance(); // 15
} /* size: 93, inline expansions: 12 (165 bytes) */

// <01405D9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.h:15
inline void CMotionMetricInstance::~CMotionMetricInstance()
{
} /* size: 0 */

// <013B01E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.h:15
// member functions: 32
// member variables: 4
// static member variable: 1
// vtable entries: 8
// class size: 40
class CMotionMetricInstance : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IMotionMetricInstance {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IMotionMetricInstance <ancestor>; */ /* 16 8 */
	void CMotionMetricInstance(CMotionMetricInstance* , CMotionMetricInstance& );
	void CMotionMetricInstance(CMotionMetricInstance* , const CMotionMetricInstance& );
private:
	static class CClassInfoT<CMotionMetricInstance> m_classInfoCMotionMetricInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const CMotionMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11 */
	virtual void* CastToBase(CMotionMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11 */
	virtual const void* CastToBase(const CMotionMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:15 */
	void CMotionMetricInstance(CMotionMetricInstance* , const CAnimGraphUpdateContextPtr& , CPackedHandle<const CMotionMetricEvaluator>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:23 */
	virtual CUtlString GetName(const CMotionMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:29 */
	virtual int GetDimensionCount(const CMotionMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:35 */
	virtual float GetWeight(const CMotionMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:41 */
	virtual float GetMean(const CMotionMetricInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:47 */
	virtual float GetStandardDeviation(const CMotionMetricInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:53 */
	CAnimGraphUpdateContext* GetContext(const CMotionMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:59 */
	const CMotionMetricEvaluator* GetEvaluator(const CMotionMetricInstance* );
	CAnimGraphUpdateContextPtr m_pContext; /* 24 8 */
	CPackedHandle<const CMotionMetricEvaluator> m_hEvaluator; /* 32 4 */
	virtual void ~CMotionMetricInstance(CMotionMetricInstance* );
	void CMotionMetricInstance(class CMotionMetricInstance *, const CAnimGraphUpdateContextPtr  &, class CPackedHandle<const CMotionMetricEvaluator>); /* linkage=_ZN21CMotionMetricInstanceC4ERK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE13CPackedHandleIK22CMotionMetricEvaluatorE */
	void CMotionMetricInstance(class CMotionMetricInstance *, class CMotionMetricInstance &); /* linkage=_ZN21CMotionMetricInstanceC4EOS_ */
	void CMotionMetricInstance(class CMotionMetricInstance *, const class CMotionMetricInstance  &); /* linkage=_ZN21CMotionMetricInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN21CMotionMetricInstance8MyTypeIDEv */
	/* <140ee85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN21CMotionMetricInstance10MyTypeInfoEv */
	/* <140c5f7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CMotionMetricInstance  *); /* linkage=_ZNK21CMotionMetricInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CMotionMetricInstance *, class ClassID); /* linkage=_ZN21CMotionMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CMotionMetricInstance  *, class ClassID); /* linkage=_ZNK21CMotionMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	/* <140dff8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:23 */
	virtual class CUtlString GetName(const class CMotionMetricInstance  *); /* linkage=_ZNK21CMotionMetricInstance7GetNameEv */
	/* <140d13f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:29 */
	virtual int GetDimensionCount(const class CMotionMetricInstance  *); /* linkage=_ZNK21CMotionMetricInstance17GetDimensionCountEv */
	/* <140d2bc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:35 */
	virtual float GetWeight(const class CMotionMetricInstance  *); /* linkage=_ZNK21CMotionMetricInstance9GetWeightEv */
	/* <140d764> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:41 */
	virtual float GetMean(const class CMotionMetricInstance  *, int); /* linkage=_ZNK21CMotionMetricInstance7GetMeanEi */
	/* <140d8de> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:47 */
	virtual float GetStandardDeviation(const class CMotionMetricInstance  *, int); /* linkage=_ZNK21CMotionMetricInstance20GetStandardDeviationEi */
	/* <140eea3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:53 */
	class CAnimGraphUpdateContext * GetContext(const class CMotionMetricInstance  *); /* linkage=_ZNK21CMotionMetricInstance10GetContextEv */
	/* <140eefd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:59 */
	const class CMotionMetricEvaluator  * GetEvaluator(const class CMotionMetricInstance  *); /* linkage=_ZNK21CMotionMetricInstance12GetEvaluatorEv */
	virtual void ~CMotionMetricInstance(class CMotionMetricInstance *); /* linkage=_ZN21CMotionMetricInstanceD4Ev */
};

// <01406A01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 46942
} /* size: 0, variables: 2 */

// <01125934> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.h:19
void CMotionMetricInstance::CMotionMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
{
} /* size: 0 */

