
//
// public/animationsystem/isolveikchainanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	classes: 2
//

// <017129B7> ../public/animationsystem/isolveikchainanimnodeinstance.h:14
// member functions: 4
// member variables: 3
// class size: 48
class CSolveIKChainData {
	/* ../public/animationsystem/isolveikchainanimnodeinstance.h:17 */
	void CSolveIKChainData(CSolveIKChainData* );
	/* ../public/animationsystem/isolveikchainanimnodeinstance.h:18 */
	void CSolveIKChainData(CSolveIKChainData* , const CIKChainData_t* , const IKSolverSettings_t* , const CTransform& );
	const class CIKChainData_t * m_pChain; /* 0 8 */
	const class IKSolverSettings_t * m_pSolverSettings; /* 8 8 */
	CTransform m_xWsTarget __attribute__((__aligned__(16))); /* 16 32 */
	void CSolveIKChainData(class CSolveIKChainData *); /* linkage=_ZN17CSolveIKChainDataC4Ev */
	void CSolveIKChainData(class CSolveIKChainData *, const class CIKChainData_t  *, const class IKSolverSettings_t  *, const class CTransform  &); /* linkage=_ZN17CSolveIKChainDataC4EPK14CIKChainData_tPK18IKSolverSettings_tRK10CTransform */
} __attribute__((__aligned__(16)));

// <01946CB3> ../public/animationsystem/isolveikchainanimnodeinstance.h:18
void CSolveIKChainData::CSolveIKChainData(const CIKChainData_t* pChainData, const IKSolverSettings_t* pSolverSettings, const CTransform& xWsTarget)
{
} /* size: 0 */

// <01946C76> ../public/animationsystem/isolveikchainanimnodeinstance.h:18
inline void CSolveIKChainData::CSolveIKChainData(const CIKChainData_t* pChainData, const IKSolverSettings_t* pSolverSettings, const CTransform& xWsTarget)
{
} /* size: 0 */

// <0128F67D> ../public/animationsystem/isolveikchainanimnodeinstance.h:30
void ISolveIKChainAnimNodeInstance::ISolveIKChainAnimNodeInstance()
{
} /* size: 0 */

// <0128F661> ../public/animationsystem/isolveikchainanimnodeinstance.h:30
inline void ISolveIKChainAnimNodeInstance::ISolveIKChainAnimNodeInstance()
{
} /* size: 0 */

// <0122CC7F> ../public/animationsystem/isolveikchainanimnodeinstance.h:30
// member functions: 20
// member variable: 1
// static member variable: 1
// vtable entries: 4
// class size: 8
class ISolveIKChainAnimNodeInstance {
	void ISolveIKChainAnimNodeInstance(ISolveIKChainAnimNodeInstance* , ISolveIKChainAnimNodeInstance& );
	void ISolveIKChainAnimNodeInstance(ISolveIKChainAnimNodeInstance* , const ISolveIKChainAnimNodeInstance& );
	void ISolveIKChainAnimNodeInstance(ISolveIKChainAnimNodeInstance* );
	void ~ISolveIKChainAnimNodeInstance(ISolveIKChainAnimNodeInstance* );
	int ()(void) * * _vptr.ISolveIKChainAnimNodeInstance; /* 0 8 */
private:
	static class CClassInfoT<ISolveIKChainAnimNodeInstance> m_classInfoISolveIKChainAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/isolveikchainanimnodeinstance.h:32 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const ISolveIKChainAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8 */
	virtual void* CastToBase(ISolveIKChainAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8 */
	virtual const void* CastToBase(const ISolveIKChainAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/isolveikchainanimnodeinstance.h:34 */
	virtual void GetSolveIKChainData(const ISolveIKChainAnimNodeInstance* , const CAnimationResult& , CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >& );
	void ISolveIKChainAnimNodeInstance(class ISolveIKChainAnimNodeInstance *, class ISolveIKChainAnimNodeInstance &); /* linkage=_ZN29ISolveIKChainAnimNodeInstanceC4EOS_ */
	void ISolveIKChainAnimNodeInstance(class ISolveIKChainAnimNodeInstance *, const class ISolveIKChainAnimNodeInstance  &); /* linkage=_ZN29ISolveIKChainAnimNodeInstanceC4ERKS_ */
	void ISolveIKChainAnimNodeInstance(class ISolveIKChainAnimNodeInstance *); /* linkage=_ZN29ISolveIKChainAnimNodeInstanceC4Ev */
	void ~ISolveIKChainAnimNodeInstance(class ISolveIKChainAnimNodeInstance *); /* linkage=_ZN29ISolveIKChainAnimNodeInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN29ISolveIKChainAnimNodeInstance8MyTypeIDEv */
	/* <129f1dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN29ISolveIKChainAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class ISolveIKChainAnimNodeInstance  *); /* linkage=_ZNK29ISolveIKChainAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class ISolveIKChainAnimNodeInstance *, class ClassID); /* linkage=_ZN29ISolveIKChainAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class ISolveIKChainAnimNodeInstance  *, class ClassID); /* linkage=_ZNK29ISolveIKChainAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual void GetSolveIKChainData(const class ISolveIKChainAnimNodeInstance  *, const class CAnimationResult  &, class CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> > &); /* linkage=_ZNK29ISolveIKChainAnimNodeInstance19GetSolveIKChainDataERK16CAnimationResultR10CUtlVectorI17CSolveIKChainData10CUtlMemoryIS4_iEE */
};

// <0128FED9> ../public/animationsystem/isolveikchainanimnodeinstance.h:32
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 32
	const char   __PRETTY_FUNCTION__; // 11337
} /* size: 0, variables: 2 */

