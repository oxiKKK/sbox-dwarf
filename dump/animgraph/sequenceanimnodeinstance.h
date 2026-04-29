
//
// animgraph/sequenceanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <01144FF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.h:12
// function calls: 15
void CSequenceAnimNodeInstance::~CSequenceAnimNodeInstance()
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
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 12
} /* size: 130, inline expansions: 15 (357 bytes) */

// <01144BC4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.h:12
// function calls: 20
void CSequenceAnimNodeInstance::~CSequenceAnimNodeInstance()
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
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 12
	CSequenceAnimNodeInstance::~CSequenceAnimNodeInstance(); // 12
} /* size: 129, inline expansions: 20 (350 bytes) */

// <01144BA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.h:12
inline void CSequenceAnimNodeInstance::~CSequenceAnimNodeInstance()
{
} /* size: 0 */

// <0111EE9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.h:12
// member functions: 20
// member variables: 2
// static member variable: 1
// vtable entries: 4
// class size: 56
class CSequenceAnimNodeInstance : public CAnimNodeInstanceBase, public ISequenceAnimNodeInstance {
public:
	/* class CAnimNodeInstanceBase <ancestor>; */ /* 0 0 */
	/* class ISequenceAnimNodeInstance <ancestor>; */ /* 48 8 */
	void CSequenceAnimNodeInstance(CSequenceAnimNodeInstance* , CSequenceAnimNodeInstance& );
	void CSequenceAnimNodeInstance(CSequenceAnimNodeInstance* , const CSequenceAnimNodeInstance& );
private:
	static class CClassInfoT<CSequenceAnimNodeInstance> m_classInfoCSequenceAnimNodeInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CSequenceAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:12 */
	virtual void* CastToBase(CSequenceAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:12 */
	virtual const void* CastToBase(const CSequenceAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:17 */
	void CSequenceAnimNodeInstance(CSequenceAnimNodeInstance* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:24 */
	virtual float GetCycle(const CSequenceAnimNodeInstance* );
	virtual void ~CSequenceAnimNodeInstance(CSequenceAnimNodeInstance* );
	void CSequenceAnimNodeInstance(class CSequenceAnimNodeInstance *, class CSequenceAnimNodeInstance &); /* linkage=_ZN25CSequenceAnimNodeInstanceC4EOS_ */
	void CSequenceAnimNodeInstance(class CSequenceAnimNodeInstance *, const class CSequenceAnimNodeInstance  &); /* linkage=_ZN25CSequenceAnimNodeInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN25CSequenceAnimNodeInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN25CSequenceAnimNodeInstance10MyTypeInfoEv */
	/* <1193ddc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSequenceAnimNodeInstance  *); /* linkage=_ZNK25CSequenceAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CSequenceAnimNodeInstance *, class ClassID); /* linkage=_ZN25CSequenceAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CSequenceAnimNodeInstance  *, class ClassID); /* linkage=_ZNK25CSequenceAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	void CSequenceAnimNodeInstance(class CSequenceAnimNodeInstance *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN25CSequenceAnimNodeInstanceC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	/* <1193e05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:24 */
	virtual float GetCycle(const class CSequenceAnimNodeInstance  *); /* linkage=_ZNK25CSequenceAnimNodeInstance8GetCycleEv */
	virtual void ~CSequenceAnimNodeInstance(class CSequenceAnimNodeInstance *); /* linkage=_ZN25CSequenceAnimNodeInstanceD4Ev */
};

// <0116C6B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 44574
} /* size: 0, variables: 2 */

// <00F34712> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.h:16
void CSequenceAnimNodeInstance::CSequenceAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

