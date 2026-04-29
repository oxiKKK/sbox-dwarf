
//
// animgraph/pathmetricinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <013E5DC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.h:13
// function calls: 8
void CPathMetricInstance::~CPathMetricInstance()
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

// <013E5B40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.h:13
// function calls: 13
void CPathMetricInstance::~CPathMetricInstance()
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
	CPathMetricInstance::~CPathMetricInstance(); // 13
} /* size: 109, inline expansions: 13 (224 bytes) */

// <013E5B24> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.h:13
inline void CPathMetricInstance::~CPathMetricInstance()
{
} /* size: 0 */

// <013CE9FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.h:13
// member functions: 24
// member variables: 2
// static member variable: 1
// vtable entries: 5
// class size: 48
class CPathMetricInstance : public CMotionMetricInstance, public IPathMetricInstance {
public:
	/* class CMotionMetricInstance <ancestor>; */ /* 0 40 */
	/* class IPathMetricInstance <ancestor>; */ /* 40 8 */
	void CPathMetricInstance(CPathMetricInstance* , CPathMetricInstance& );
	void CPathMetricInstance(CPathMetricInstance* , const CPathMetricInstance& );
private:
	static class CClassInfoT<CPathMetricInstance> m_classInfoCPathMetricInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.h:15 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CPathMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12 */
	virtual void* CastToBase(CPathMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12 */
	virtual const void* CastToBase(const CPathMetricInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:19 */
	void CPathMetricInstance(CPathMetricInstance* , const CAnimGraphUpdateContextPtr& , CPackedHandle<const CMotionMetricEvaluator>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:26 */
	virtual int GetSampleCount(const CPathMetricInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:32 */
	virtual float GetSampleTime(const CPathMetricInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:38 */
	const CPathMetricEvaluator* GetPathEvaluator(const CPathMetricInstance* );
	virtual void ~CPathMetricInstance(CPathMetricInstance* );
	void CPathMetricInstance(class CPathMetricInstance *, class CPathMetricInstance &); /* linkage=_ZN19CPathMetricInstanceC4EOS_ */
	void CPathMetricInstance(class CPathMetricInstance *, const class CPathMetricInstance  &); /* linkage=_ZN19CPathMetricInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19CPathMetricInstance8MyTypeIDEv */
	/* <140f074> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19CPathMetricInstance10MyTypeInfoEv */
	/* <140c64b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CPathMetricInstance  *); /* linkage=_ZNK19CPathMetricInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CPathMetricInstance *, class ClassID); /* linkage=_ZN19CPathMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CPathMetricInstance  *, class ClassID); /* linkage=_ZNK19CPathMetricInstance10CastToBaseEN10Reflection7ClassIDE */
	void CPathMetricInstance(class CPathMetricInstance *, const CAnimGraphUpdateContextPtr  &, class CPackedHandle<const CMotionMetricEvaluator>); /* linkage=_ZN19CPathMetricInstanceC4ERK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE13CPackedHandleIK22CMotionMetricEvaluatorE */
	/* <140d439> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:26 */
	virtual int GetSampleCount(const class CPathMetricInstance  *); /* linkage=_ZNK19CPathMetricInstance14GetSampleCountEv */
	/* <140da58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:32 */
	virtual float GetSampleTime(const class CPathMetricInstance  *, int); /* linkage=_ZNK19CPathMetricInstance13GetSampleTimeEi */
	/* <140f092> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:38 */
	const class CPathMetricEvaluator  * GetPathEvaluator(const class CPathMetricInstance  *); /* linkage=_ZNK19CPathMetricInstance16GetPathEvaluatorEv */
	virtual void ~CPathMetricInstance(class CPathMetricInstance *); /* linkage=_ZN19CPathMetricInstanceD4Ev */
};

// <013FA399> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.h:15
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 15
	const char   __PRETTY_FUNCTION__; // 46888
} /* size: 0, variables: 2 */

