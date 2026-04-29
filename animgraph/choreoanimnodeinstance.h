
//
// animgraph/choreoanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0104EAF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.h:11
// function calls: 15
void CChoreoAnimNodeInstance::~CChoreoAnimNodeInstance()
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
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 11
} /* size: 122, inline expansions: 15 (349 bytes) */

// <0104E6CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.h:11
// function calls: 20
void CChoreoAnimNodeInstance::~CChoreoAnimNodeInstance()
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
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 11
	CChoreoAnimNodeInstance::~CChoreoAnimNodeInstance(); // 11
} /* size: 121, inline expansions: 20 (334 bytes) */

// <0104E6AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.h:11
inline void CChoreoAnimNodeInstance::~CChoreoAnimNodeInstance()
{
} /* size: 0 */

// <010134CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.h:11
// member functions: 46
// member variables: 2
// static member variable: 1
// vtable entries: 16
// class size: 56
class CChoreoAnimNodeInstance : public CAnimNodeInstanceBase, public IChoreoAnimNodeInstance {
public:
	/* class CAnimNodeInstanceBase <ancestor>; */ /* 0 48 */
	/* class IChoreoAnimNodeInstance <ancestor>; */ /* 48 8 */
	void CChoreoAnimNodeInstance(CChoreoAnimNodeInstance* , CChoreoAnimNodeInstance& );
	void CChoreoAnimNodeInstance(CChoreoAnimNodeInstance* , const CChoreoAnimNodeInstance& );
private:
	static class CClassInfoT<CChoreoAnimNodeInstance> m_classInfoCChoreoAnimNodeInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CChoreoAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:10 */
	virtual void* CastToBase(CChoreoAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:10 */
	virtual const void* CastToBase(const CChoreoAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:14 */
	void CChoreoAnimNodeInstance(CChoreoAnimNodeInstance* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:20 */
	virtual int AddLayeredSequence(CChoreoAnimNodeInstance* , HSequence, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:25 */
	virtual void RemoveLayer(CChoreoAnimNodeInstance* , int, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:30 */
	virtual void FastRemoveLayer(CChoreoAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:35 */
	virtual bool IsValidLayer(const CChoreoAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:40 */
	virtual void SetLayerPriority(CChoreoAnimNodeInstance* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:45 */
	virtual float GetLayerWeight(const CChoreoAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:50 */
	virtual void SetLayerWeight(CChoreoAnimNodeInstance* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:55 */
	virtual bool IsLayerLooping(const CChoreoAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:60 */
	virtual void SetLayerLooping(CChoreoAnimNodeInstance* , int, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:65 */
	virtual void SetLayerNoRestore(CChoreoAnimNodeInstance* , int, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:70 */
	virtual float GetLayerCycle(const CChoreoAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:75 */
	virtual void SetLayerCycle(CChoreoAnimNodeInstance* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:80 */
	virtual void SetLayerCycle(CChoreoAnimNodeInstance* , int, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:85 */
	const CChoreoUpdateNode* GetChoreoUpdateNode(const CChoreoAnimNodeInstance* );
	virtual void ~CChoreoAnimNodeInstance(CChoreoAnimNodeInstance* );
	void CChoreoAnimNodeInstance(class CChoreoAnimNodeInstance *, class CChoreoAnimNodeInstance &); /* linkage=_ZN23CChoreoAnimNodeInstanceC4EOS_ */
	void CChoreoAnimNodeInstance(class CChoreoAnimNodeInstance *, const class CChoreoAnimNodeInstance  &); /* linkage=_ZN23CChoreoAnimNodeInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23CChoreoAnimNodeInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23CChoreoAnimNodeInstance10MyTypeInfoEv */
	/* <1090693> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CChoreoAnimNodeInstance  *); /* linkage=_ZNK23CChoreoAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CChoreoAnimNodeInstance *, class ClassID); /* linkage=_ZN23CChoreoAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CChoreoAnimNodeInstance  *, class ClassID); /* linkage=_ZNK23CChoreoAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	void CChoreoAnimNodeInstance(class CChoreoAnimNodeInstance *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN23CChoreoAnimNodeInstanceC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	/* <109128b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:20 */
	virtual int AddLayeredSequence(class CChoreoAnimNodeInstance *, class HSequence, int); /* linkage=_ZN23CChoreoAnimNodeInstance18AddLayeredSequenceE9HSequencei */
	/* <1091352> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:25 */
	virtual void RemoveLayer(class CChoreoAnimNodeInstance *, int, float, float); /* linkage=_ZN23CChoreoAnimNodeInstance11RemoveLayerEiff */
	/* <1091438> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:30 */
	virtual void FastRemoveLayer(class CChoreoAnimNodeInstance *, int); /* linkage=_ZN23CChoreoAnimNodeInstance15FastRemoveLayerEi */
	/* <10914f2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:35 */
	virtual bool IsValidLayer(const class CChoreoAnimNodeInstance  *, int); /* linkage=_ZNK23CChoreoAnimNodeInstance12IsValidLayerEi */
	/* <10915ac> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:40 */
	virtual void SetLayerPriority(class CChoreoAnimNodeInstance *, int, int); /* linkage=_ZN23CChoreoAnimNodeInstance16SetLayerPriorityEii */
	/* <109167a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:45 */
	virtual float GetLayerWeight(const class CChoreoAnimNodeInstance  *, int); /* linkage=_ZNK23CChoreoAnimNodeInstance14GetLayerWeightEi */
	/* <1091734> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:50 */
	virtual void SetLayerWeight(class CChoreoAnimNodeInstance *, int, float); /* linkage=_ZN23CChoreoAnimNodeInstance14SetLayerWeightEif */
	/* <1091804> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:55 */
	virtual bool IsLayerLooping(const class CChoreoAnimNodeInstance  *, int); /* linkage=_ZNK23CChoreoAnimNodeInstance14IsLayerLoopingEi */
	/* <10918be> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:60 */
	virtual void SetLayerLooping(class CChoreoAnimNodeInstance *, int, bool); /* linkage=_ZN23CChoreoAnimNodeInstance15SetLayerLoopingEib */
	/* <109198f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:65 */
	virtual void SetLayerNoRestore(class CChoreoAnimNodeInstance *, int, bool); /* linkage=_ZN23CChoreoAnimNodeInstance17SetLayerNoRestoreEib */
	/* <1091a60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:70 */
	virtual float GetLayerCycle(const class CChoreoAnimNodeInstance  *, int); /* linkage=_ZNK23CChoreoAnimNodeInstance13GetLayerCycleEi */
	/* <1091b1a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:75 */
	virtual void SetLayerCycle(class CChoreoAnimNodeInstance *, int, float); /* linkage=_ZN23CChoreoAnimNodeInstance13SetLayerCycleEif */
	/* <1091bea> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:80 */
	virtual void SetLayerCycle(class CChoreoAnimNodeInstance *, int, float, float); /* linkage=_ZN23CChoreoAnimNodeInstance13SetLayerCycleEiff */
	/* <1095504> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:85 */
	const class CChoreoUpdateNode  * GetChoreoUpdateNode(const class CChoreoAnimNodeInstance  *); /* linkage=_ZNK23CChoreoAnimNodeInstance19GetChoreoUpdateNodeEv */
	virtual void ~CChoreoAnimNodeInstance(class CChoreoAnimNodeInstance *); /* linkage=_ZN23CChoreoAnimNodeInstanceD4Ev */
};

// <01074C5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 21262
} /* size: 0, variables: 2 */

// <00F914FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 39003
} /* size: 0, variables: 2 */

// <00F345C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.h:15
void CChoreoAnimNodeInstance::CChoreoAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

