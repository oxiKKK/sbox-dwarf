
//
// animgraph/animgraphcontext.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <00DFA8A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.h:24
// function calls: 2
void CAnimGraphContext::~CAnimGraphContext()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 24
} /* size: 5, inline expansions: 2 (0 bytes) */

// <00DFA7C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.h:24
// function calls: 3
void CAnimGraphContext::~CAnimGraphContext()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 24
	CAnimGraphContext::~CAnimGraphContext(); // 24
} /* size: 14, inline expansions: 3 (0 bytes) */

// <00DFA7A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.h:24
inline void CAnimGraphContext::~CAnimGraphContext()
{
} /* size: 0 */

// <00DB2ECA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.h:24
// member functions: 30
// member variables: 3
// class size: 32
class CAnimGraphContext : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimGraphContext(CAnimGraphContext* , CAnimGraphContext& );
	void CAnimGraphContext(CAnimGraphContext* , const CAnimGraphContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:12 */
	void CAnimGraphContext(CAnimGraphContext* , CAnimationGraph* , CAnimNodeManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:20 */
	CAnimationGraph* GetGraph(CAnimGraphContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:26 */
	const CAnimationGraph* GetGraph(const CAnimGraphContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:32 */
	CAnimNodeBase* GetNodeByID(const CAnimGraphContext* , AnimNodeID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:40 */
	void FillParameterChoiceProvider(const CAnimGraphContext* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , AnimParamType_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:75 */
	void FillTagChoiceProvider(const CAnimGraphContext* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:92 */
	CAnimNodeManager* GetNodeManager(const CAnimGraphContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:98 */
	CAnimTagManager* GetTagManager(const CAnimGraphContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:104 */
	CAnimGraphLogManager* GetLogManager(const CAnimGraphContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:110 */
	const CAnimParameterBase* GetParameter(const CAnimGraphContext* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:122 */
	void SetGraph(CAnimGraphContext* , CAnimationGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:128 */
	void SetNodeManager(CAnimGraphContext* , CAnimNodeManager* );
private:
	CAnimationGraph * m_pGraph; /* 16 8 */
	CAnimNodeManager * m_pNodeManager; /* 24 8 */
	virtual void ~CAnimGraphContext(CAnimGraphContext* );
	void CAnimGraphContext(class CAnimGraphContext *, class CAnimGraphContext &); /* linkage=_ZN17CAnimGraphContextC4EOS_ */
	void CAnimGraphContext(class CAnimGraphContext *, const class CAnimGraphContext  &); /* linkage=_ZN17CAnimGraphContextC4ERKS_ */
	void CAnimGraphContext(class CAnimGraphContext *, class CAnimationGraph *, class CAnimNodeManager *); /* linkage=_ZN17CAnimGraphContextC4EP15CAnimationGraphP16CAnimNodeManager */
	/* <e8f135> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:20 */
	class CAnimationGraph * GetGraph(class CAnimGraphContext *); /* linkage=_ZN17CAnimGraphContext8GetGraphEv */
	const class CAnimationGraph  * GetGraph(const class CAnimGraphContext  *); /* linkage=_ZNK17CAnimGraphContext8GetGraphEv */
	class CAnimNodeBase * GetNodeByID(const class CAnimGraphContext  *, class AnimNodeID); /* linkage=_ZNK17CAnimGraphContext11GetNodeByIDE10AnimNodeID */
	void FillParameterChoiceProvider(const class CAnimGraphContext  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, enum AnimParamType_t); /* linkage=_ZNK17CAnimGraphContext27FillParameterChoiceProviderEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEES5_15AnimParamType_t */
	void FillTagChoiceProvider(const class CAnimGraphContext  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZNK17CAnimGraphContext21FillTagChoiceProviderEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEES5_ */
	/* <e8f15e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:92 */
	class CAnimNodeManager * GetNodeManager(const class CAnimGraphContext  *); /* linkage=_ZNK17CAnimGraphContext14GetNodeManagerEv */
	class CAnimTagManager * GetTagManager(const class CAnimGraphContext  *); /* linkage=_ZNK17CAnimGraphContext13GetTagManagerEv */
	/* <e8f187> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.cpp:104 */
	class CAnimGraphLogManager * GetLogManager(const class CAnimGraphContext  *); /* linkage=_ZNK17CAnimGraphContext13GetLogManagerEv */
	const class CAnimParameterBase  * GetParameter(const class CAnimGraphContext  *, class AnimParamID); /* linkage=_ZNK17CAnimGraphContext12GetParameterE11AnimParamID */
	void SetGraph(class CAnimGraphContext *, class CAnimationGraph *); /* linkage=_ZN17CAnimGraphContext8SetGraphEP15CAnimationGraph */
	void SetNodeManager(class CAnimGraphContext *, class CAnimNodeManager *); /* linkage=_ZN17CAnimGraphContext14SetNodeManagerEP16CAnimNodeManager */
	virtual void ~CAnimGraphContext(class CAnimGraphContext *); /* linkage=_ZN17CAnimGraphContextD4Ev */
};

// <01244C0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphcontext.h:27
void CAnimGraphContext::CAnimGraphContext(CAnimationGraph* pGraph, CAnimNodeManager* pNodeManager)
{
} /* size: 0 */

