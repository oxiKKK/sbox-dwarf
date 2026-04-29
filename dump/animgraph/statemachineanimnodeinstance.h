
//
// animgraph/statemachineanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <01258FC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.h:11
// function calls: 15
void CStateMachineAnimNodeInstance::~CStateMachineAnimNodeInstance()
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
} /* size: 130, inline expansions: 15 (357 bytes) */

// <01258B9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.h:11
// function calls: 20
void CStateMachineAnimNodeInstance::~CStateMachineAnimNodeInstance()
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
	CStateMachineAnimNodeInstance::~CStateMachineAnimNodeInstance(); // 11
} /* size: 129, inline expansions: 20 (350 bytes) */

// <01258B7F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.h:11
inline void CStateMachineAnimNodeInstance::~CStateMachineAnimNodeInstance()
{
} /* size: 0 */

// <01235660> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.h:11
// member functions: 26
// member variables: 2
// static member variable: 1
// vtable entries: 7
// class size: 56
class CStateMachineAnimNodeInstance : public CAnimNodeInstanceBase, public IAnimStateMachineInstance {
public:
	/* class CAnimNodeInstanceBase <ancestor>; */ /* 0 0 */
	/* class IAnimStateMachineInstance <ancestor>; */ /* 48 8 */
	void CStateMachineAnimNodeInstance(CStateMachineAnimNodeInstance* , CStateMachineAnimNodeInstance& );
	void CStateMachineAnimNodeInstance(CStateMachineAnimNodeInstance* , const CStateMachineAnimNodeInstance& );
private:
	static class CClassInfoT<CStateMachineAnimNodeInstance> m_classInfoCStateMachineAnimNodeInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:12 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:12 */
	virtual const CClassInfo& GetTypeInfo(const CStateMachineAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:12 */
	virtual void* CastToBase(CStateMachineAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:12 */
	virtual const void* CastToBase(const CStateMachineAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:17 */
	void CStateMachineAnimNodeInstance(CStateMachineAnimNodeInstance* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:24 */
	virtual int GetStateCount(const CStateMachineAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:30 */
	virtual const CUtlString& GetStateName(const CStateMachineAnimNodeInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:37 */
	virtual int GetCurrentStateIndex(const CStateMachineAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:51 */
	virtual bool GetCurrentTransitionIndex(const CStateMachineAnimNodeInstance* , int& , int& );
	virtual void ~CStateMachineAnimNodeInstance(CStateMachineAnimNodeInstance* );
	void CStateMachineAnimNodeInstance(class CStateMachineAnimNodeInstance *, class CStateMachineAnimNodeInstance &); /* linkage=_ZN29CStateMachineAnimNodeInstanceC4EOS_ */
	void CStateMachineAnimNodeInstance(class CStateMachineAnimNodeInstance *, const class CStateMachineAnimNodeInstance  &); /* linkage=_ZN29CStateMachineAnimNodeInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN29CStateMachineAnimNodeInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN29CStateMachineAnimNodeInstance10MyTypeInfoEv */
	/* <129c105> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:12 */
	virtual const class CClassInfo  & GetTypeInfo(const class CStateMachineAnimNodeInstance  *); /* linkage=_ZNK29CStateMachineAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CStateMachineAnimNodeInstance *, class ClassID); /* linkage=_ZN29CStateMachineAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CStateMachineAnimNodeInstance  *, class ClassID); /* linkage=_ZNK29CStateMachineAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	void CStateMachineAnimNodeInstance(class CStateMachineAnimNodeInstance *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN29CStateMachineAnimNodeInstanceC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	/* <129c12f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:24 */
	virtual int GetStateCount(const class CStateMachineAnimNodeInstance  *); /* linkage=_ZNK29CStateMachineAnimNodeInstance13GetStateCountEv */
	virtual const class CUtlString  & GetStateName(const class CStateMachineAnimNodeInstance  *, int); /* linkage=_ZNK29CStateMachineAnimNodeInstance12GetStateNameEi */
	/* <129d5f2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:37 */
	virtual int GetCurrentStateIndex(const class CStateMachineAnimNodeInstance  *); /* linkage=_ZNK29CStateMachineAnimNodeInstance20GetCurrentStateIndexEv */
	virtual bool GetCurrentTransitionIndex(const class CStateMachineAnimNodeInstance  *, int &, int &); /* linkage=_ZNK29CStateMachineAnimNodeInstance25GetCurrentTransitionIndexERiS0_ */
	virtual void ~CStateMachineAnimNodeInstance(class CStateMachineAnimNodeInstance *); /* linkage=_ZN29CStateMachineAnimNodeInstanceD4Ev */
};

// <0128E94A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 11337
} /* size: 0, variables: 2 */

// <00F9146C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 39160
} /* size: 0, variables: 2 */

// <00F347BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.h:15
void CStateMachineAnimNodeInstance::CStateMachineAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

