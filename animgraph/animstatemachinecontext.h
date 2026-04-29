
//
// animgraph/animstatemachinecontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <019ED574> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.h:18
// function calls: 2
void CAnimStateMachineContext::~CAnimStateMachineContext()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 18
} /* size: 5, inline expansions: 2 (0 bytes) */

// <019ED48F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.h:18
// function calls: 3
void CAnimStateMachineContext::~CAnimStateMachineContext()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 18
	CAnimStateMachineContext::~CAnimStateMachineContext(); // 18
} /* size: 14, inline expansions: 3 (0 bytes) */

// <019ED473> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.h:18
inline void CAnimStateMachineContext::~CAnimStateMachineContext()
{
} /* size: 0 */

// <019E0473> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.h:18
// member functions: 32
// member variables: 2
// class size: 24
class CAnimStateMachineContext : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimStateMachineContext(CAnimStateMachineContext* , CAnimStateMachineContext& );
	void CAnimStateMachineContext(CAnimStateMachineContext* , const CAnimStateMachineContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:13 */
	void CAnimStateMachineContext(CAnimStateMachineContext* , CStateMachineAnimNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:20 */
	CStateMachineAnimNode* GetStateMachine(CAnimStateMachineContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:26 */
	const CStateMachineAnimNode* GetStateMachine(const CAnimStateMachineContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:32 */
	void FillParameterChoiceProvider(const CAnimStateMachineContext* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , AnimParamType_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:38 */
	void FillTagChoiceProvider(const CAnimStateMachineContext* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:44 */
	const CUtlString& GetParamName(const CAnimStateMachineContext* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:62 */
	AnimParamID GetParamID(const CAnimStateMachineContext* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:79 */
	AnimParamID GetParamID(const CAnimStateMachineContext* , int, AnimParamType_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:107 */
	int GetParamIndex(const CAnimStateMachineContext* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:115 */
	int GetParamIndex(const CAnimStateMachineContext* , AnimParamID, AnimParamType_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:140 */
	CAnimParameterBaseConstPtr GetParam(const CAnimStateMachineContext* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:148 */
	CAnimTagManager* GetTagManager(const CAnimStateMachineContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:154 */
	CAnimNodeBase* GetNodeByID(const CAnimStateMachineContext* , AnimNodeID);
private:
	CStateMachineAnimNode * m_stateMachine; /* 16 8 */
	virtual void ~CAnimStateMachineContext(CAnimStateMachineContext* );
	void CAnimStateMachineContext(class CAnimStateMachineContext *, class CAnimStateMachineContext &); /* linkage=_ZN24CAnimStateMachineContextC4EOS_ */
	void CAnimStateMachineContext(class CAnimStateMachineContext *, const class CAnimStateMachineContext  &); /* linkage=_ZN24CAnimStateMachineContextC4ERKS_ */
	void CAnimStateMachineContext(class CAnimStateMachineContext *, class CStateMachineAnimNode *); /* linkage=_ZN24CAnimStateMachineContextC4EP21CStateMachineAnimNode */
	/* <1a0303d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:20 */
	class CStateMachineAnimNode * GetStateMachine(class CAnimStateMachineContext *); /* linkage=_ZN24CAnimStateMachineContext15GetStateMachineEv */
	const class CStateMachineAnimNode  * GetStateMachine(const class CAnimStateMachineContext  *); /* linkage=_ZNK24CAnimStateMachineContext15GetStateMachineEv */
	void FillParameterChoiceProvider(const class CAnimStateMachineContext  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, enum AnimParamType_t); /* linkage=_ZNK24CAnimStateMachineContext27FillParameterChoiceProviderEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEES5_15AnimParamType_t */
	void FillTagChoiceProvider(const class CAnimStateMachineContext  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZNK24CAnimStateMachineContext21FillTagChoiceProviderEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEES5_ */
	const class CUtlString  & GetParamName(const class CAnimStateMachineContext  *, class AnimParamID); /* linkage=_ZNK24CAnimStateMachineContext12GetParamNameE11AnimParamID */
	class AnimParamID GetParamID(const class CAnimStateMachineContext  *, int); /* linkage=_ZNK24CAnimStateMachineContext10GetParamIDEi */
	class AnimParamID GetParamID(const class CAnimStateMachineContext  *, int, enum AnimParamType_t); /* linkage=_ZNK24CAnimStateMachineContext10GetParamIDEi15AnimParamType_t */
	int GetParamIndex(const class CAnimStateMachineContext  *, class AnimParamID); /* linkage=_ZNK24CAnimStateMachineContext13GetParamIndexE11AnimParamID */
	int GetParamIndex(const class CAnimStateMachineContext  *, class AnimParamID, enum AnimParamType_t); /* linkage=_ZNK24CAnimStateMachineContext13GetParamIndexE11AnimParamID15AnimParamType_t */
	CAnimParameterBaseConstPtr GetParam(const class CAnimStateMachineContext  *, class AnimParamID); /* linkage=_ZNK24CAnimStateMachineContext8GetParamE11AnimParamID */
	/* <1a03067> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.cpp:148 */
	class CAnimTagManager * GetTagManager(const class CAnimStateMachineContext  *); /* linkage=_ZNK24CAnimStateMachineContext13GetTagManagerEv */
	class CAnimNodeBase * GetNodeByID(const class CAnimStateMachineContext  *, class AnimNodeID); /* linkage=_ZNK24CAnimStateMachineContext11GetNodeByIDE10AnimNodeID */
	virtual void ~CAnimStateMachineContext(class CAnimStateMachineContext *); /* linkage=_ZN24CAnimStateMachineContextD4Ev */
};

// <0124504E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatemachinecontext.h:21
void CAnimStateMachineContext::CAnimStateMachineContext(CStateMachineAnimNode* stateMachine)
{
} /* size: 0 */

