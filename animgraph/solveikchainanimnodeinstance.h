
//
// animgraph/solveikchainanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0125737D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.h:14
// function calls: 15
void CSolveIKChainAnimNodeInstance::~CSolveIKChainAnimNodeInstance()
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
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 14
} /* size: 130, inline expansions: 15 (357 bytes) */

// <01256F4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.h:14
// function calls: 20
void CSolveIKChainAnimNodeInstance::~CSolveIKChainAnimNodeInstance()
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
	CAnimNodeInstanceBase::~CAnimNodeInstanceBase(); // 14
	CSolveIKChainAnimNodeInstance::~CSolveIKChainAnimNodeInstance(); // 14
} /* size: 129, inline expansions: 20 (350 bytes) */

// <01256F33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.h:14
inline void CSolveIKChainAnimNodeInstance::~CSolveIKChainAnimNodeInstance()
{
} /* size: 0 */

// <0122CE12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.h:14
// member functions: 22
// member variables: 2
// static member variable: 1
// vtable entries: 4
// class size: 56
class CSolveIKChainAnimNodeInstance : public CAnimNodeInstanceBase, public ISolveIKChainAnimNodeInstance {
public:
	/* class CAnimNodeInstanceBase <ancestor>; */ /* 0 0 */
	/* class ISolveIKChainAnimNodeInstance <ancestor>; */ /* 48 8 */
	void CSolveIKChainAnimNodeInstance(CSolveIKChainAnimNodeInstance* , CSolveIKChainAnimNodeInstance& );
	void CSolveIKChainAnimNodeInstance(CSolveIKChainAnimNodeInstance* , const CSolveIKChainAnimNodeInstance& );
private:
	static class CClassInfoT<CSolveIKChainAnimNodeInstance> m_classInfoCSolveIKChainAnimNodeInstance; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.h:16 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const CSolveIKChainAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:10 */
	virtual void* CastToBase(CSolveIKChainAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:10 */
	virtual const void* CastToBase(const CSolveIKChainAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:14 */
	void CSolveIKChainAnimNodeInstance(CSolveIKChainAnimNodeInstance* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:19 */
	virtual void GetSolveIKChainData(const CSolveIKChainAnimNodeInstance* , const CAnimationResult& , CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:24 */
	const CSolveIKChainUpdateNode* GetUpdateNode(const CSolveIKChainAnimNodeInstance* );
	virtual void ~CSolveIKChainAnimNodeInstance(CSolveIKChainAnimNodeInstance* );
	void CSolveIKChainAnimNodeInstance(class CSolveIKChainAnimNodeInstance *, class CSolveIKChainAnimNodeInstance &); /* linkage=_ZN29CSolveIKChainAnimNodeInstanceC4EOS_ */
	void CSolveIKChainAnimNodeInstance(class CSolveIKChainAnimNodeInstance *, const class CSolveIKChainAnimNodeInstance  &); /* linkage=_ZN29CSolveIKChainAnimNodeInstanceC4ERKS_ */
	const class ClassID  MyTypeID(void); /* linkage=_ZN29CSolveIKChainAnimNodeInstance8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN29CSolveIKChainAnimNodeInstance10MyTypeInfoEv */
	/* <129be8d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:10 */
	virtual const class CClassInfo  & GetTypeInfo(const class CSolveIKChainAnimNodeInstance  *); /* linkage=_ZNK29CSolveIKChainAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class CSolveIKChainAnimNodeInstance *, class ClassID); /* linkage=_ZN29CSolveIKChainAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CSolveIKChainAnimNodeInstance  *, class ClassID); /* linkage=_ZNK29CSolveIKChainAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	void CSolveIKChainAnimNodeInstance(class CSolveIKChainAnimNodeInstance *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN29CSolveIKChainAnimNodeInstanceC4ERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	/* <129c505> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:19 */
	virtual void GetSolveIKChainData(const class CSolveIKChainAnimNodeInstance  *, const class CAnimationResult  &, class CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> > &); /* linkage=_ZNK29CSolveIKChainAnimNodeInstance19GetSolveIKChainDataERK16CAnimationResultR10CUtlVectorI17CSolveIKChainData10CUtlMemoryIS4_iEE */
	/* <129f1fb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:24 */
	const class CSolveIKChainUpdateNode  * GetUpdateNode(const class CSolveIKChainAnimNodeInstance  *); /* linkage=_ZNK29CSolveIKChainAnimNodeInstance13GetUpdateNodeEv */
	virtual void ~CSolveIKChainAnimNodeInstance(class CSolveIKChainAnimNodeInstance *); /* linkage=_ZN29CSolveIKChainAnimNodeInstanceD4Ev */
};

// <0128FEA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 11337
} /* size: 0, variables: 2 */

// <00F913D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.h:16
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 16
	const char   __PRETTY_FUNCTION__; // 39160
} /* size: 0, variables: 2 */

// <00F349B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.h:18
void CSolveIKChainAnimNodeInstance::CSolveIKChainAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

