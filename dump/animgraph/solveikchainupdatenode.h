
//
// animgraph/solveikchainupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//	classes: 2
//	structs: 2
//

// <0191D45B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:19
void SolveIKChainUpdateNodeFixedSettings_t::SolveIKChainUpdateNodeFixedSettings_t()
{
} /* size: 0 */

// <0191D43F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:19
inline void SolveIKChainUpdateNodeFixedSettings_t::SolveIKChainUpdateNodeFixedSettings_t()
{
} /* size: 0 */

// <012285F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:19
// member variable: 1
// struct size: 8
struct SolveIKChainUpdateNodeFixedSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:21 */
	struct ChainToSolveData_t {
		CAnimParamHandle m_hTargetVectorParameter; /* 0 2 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t> m_ChainsToSolveData; /* 0 8 */
};

// <01907B75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:19
// member functions: 2
// member variable: 1
// struct size: 8
struct SolveIKChainUpdateNodeFixedSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:21 */
	struct ChainToSolveData_t {
		CAnimParamHandle m_hTargetVectorParameter; /* 0 2 */
		void ChainToSolveData_t(ChainToSolveData_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t> m_ChainsToSolveData; /* 0 8 */
	void SolveIKChainUpdateNodeFixedSettings_t(SolveIKChainUpdateNodeFixedSettings_t* );
};

// <0191D3AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:21
void ChainToSolveData_t::ChainToSolveData_t()
{
} /* size: 0 */

// <0191D390> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:21
inline void ChainToSolveData_t::ChainToSolveData_t()
{
} /* size: 0 */

// <01910B6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:29
// member functions: 14
// member variables: 5
// vtable entries: 3
// class size: 32
class CSolveIKChainUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CSolveIKChainUpdateNode(CSolveIKChainUpdateNode* , CSolveIKChainUpdateNode& );
	void CSolveIKChainUpdateNode(CSolveIKChainUpdateNode* , const CSolveIKChainUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:132 */
	void CSolveIKChainUpdateNode(CSolveIKChainUpdateNode* , CAnimGraphInitContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:220 */
	void GetSolverData(const CSolveIKChainUpdateNode* , const CAnimGraphUpdateContext& , const CAnimationResult& , CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:230 */
	virtual void Update(const CSolveIKChainUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:251 */
	virtual void CreatePoseOp(const CSolveIKChainUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.cpp:264 */
	virtual PoseHandle GetPoseHandle(const CSolveIKChainUpdateNode* , const CAnimGraphUpdateContext& );
	CPackedHandle<unsigned char> m_hPoseHandle; /* 16 4 */
	CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t> m_hUpdateNodeFixedData; /* 20 4 */
	CPackedHandle<SolveIKChainPoseOpFixedSettings_t> m_hOpFixedData; /* 24 4 */
	CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> m_hOpInstanceData; /* 28 4 */
	void CSolveIKChainUpdateNode(class CSolveIKChainUpdateNode *, class CSolveIKChainUpdateNode &); /* linkage=_ZN23CSolveIKChainUpdateNodeC4EOS_ */
	void CSolveIKChainUpdateNode(class CSolveIKChainUpdateNode *, const class CSolveIKChainUpdateNode  &); /* linkage=_ZN23CSolveIKChainUpdateNodeC4ERKS_ */
	void CSolveIKChainUpdateNode(class CSolveIKChainUpdateNode *, class CAnimGraphInitContext &, int); /* linkage=_ZN23CSolveIKChainUpdateNodeC4ER21CAnimGraphInitContexti */
	void GetSolverData(const class CSolveIKChainUpdateNode  *, const class CAnimGraphUpdateContext  &, const class CAnimationResult  &, class CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> > &); /* linkage=_ZNK23CSolveIKChainUpdateNode13GetSolverDataERK23CAnimGraphUpdateContextRK16CAnimationResultR10CUtlVectorI17CSolveIKChainData10CUtlMemoryIS7_iEE */
	virtual void Update(const class CSolveIKChainUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CSolveIKChainUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CSolveIKChainUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CSolveIKChainUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CSolveIKChainUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK23CSolveIKChainUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
};

// <0124516E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:33
void CSolveIKChainUpdateNode::CSolveIKChainUpdateNode(CAnimGraphInitContext& initContext, int nNumChains)
{
} /* size: 0 */

// <01916613> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:49
// function calls: 7
void CSolveIKChainAnimationGraphVisualizerInfo::~CSolveIKChainAnimationGraphVisualizerInfo()
{
	ValidateAlignment<CUtlHashtableEntry<int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 10
	IAnimationGraphVisualizerInfo::~IAnimationGraphVisualizerInfo(); // 49
} /* size: 70, inline expansions: 7 (131 bytes) */

// <0191645D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:49
// function calls: 8
void CSolveIKChainAnimationGraphVisualizerInfo::~CSolveIKChainAnimationGraphVisualizerInfo()
{
	ValidateAlignment<CUtlHashtableEntry<int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 10
	IAnimationGraphVisualizerInfo::~IAnimationGraphVisualizerInfo(); // 49
	CSolveIKChainAnimationGraphVisualizerInfo::~CSolveIKChainAnimationGraphVisualizerInfo(); // 49
} /* size: 77, inline expansions: 8 (174 bytes) */

// <01916441> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:49
inline void CSolveIKChainAnimationGraphVisualizerInfo::~CSolveIKChainAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <0171599C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:49
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 40
class CSolveIKChainAnimationGraphVisualizerInfo : public IAnimationGraphVisualizerInfo {
public:
	/* class IAnimationGraphVisualizerInfo <ancestor>; */ /* 0 40 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:52 */
	CSolveIKChainAnimationGraphVisualizerInfo* Get(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:54 */
	void CSolveIKChainAnimationGraphVisualizerInfo(CSolveIKChainAnimationGraphVisualizerInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:58 */
	virtual const char* GetName(const CSolveIKChainAnimationGraphVisualizerInfo* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:63 */
	virtual void GetSubVisualizerNamesAndValues(const CSolveIKChainAnimationGraphVisualizerInfo* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlVector<long long int, CUtlMemory<long long int, int> >& );
	virtual void ~CSolveIKChainAnimationGraphVisualizerInfo(CSolveIKChainAnimationGraphVisualizerInfo* );
	void CSolveIKChainAnimationGraphVisualizerInfo(class CSolveIKChainAnimationGraphVisualizerInfo *, class CSolveIKChainAnimationGraphVisualizerInfo &); /* linkage=_ZN41CSolveIKChainAnimationGraphVisualizerInfoC4EOS_ */
	void CSolveIKChainAnimationGraphVisualizerInfo(class CSolveIKChainAnimationGraphVisualizerInfo *, const class CSolveIKChainAnimationGraphVisualizerInfo  &); /* linkage=_ZN41CSolveIKChainAnimationGraphVisualizerInfoC4ERKS_ */
	class CSolveIKChainAnimationGraphVisualizerInfo * Get(void); /* linkage=_ZN41CSolveIKChainAnimationGraphVisualizerInfo3GetEv */
	void CSolveIKChainAnimationGraphVisualizerInfo(class CSolveIKChainAnimationGraphVisualizerInfo *); /* linkage=_ZN41CSolveIKChainAnimationGraphVisualizerInfoC4Ev */
	virtual const char  * GetName(const class CSolveIKChainAnimationGraphVisualizerInfo  *); /* linkage=_ZNK41CSolveIKChainAnimationGraphVisualizerInfo7GetNameEv */
	virtual void GetSubVisualizerNamesAndValues(const class CSolveIKChainAnimationGraphVisualizerInfo  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlVector<long long int, CUtlMemory<long long int, int> > &); /* linkage=_ZNK41CSolveIKChainAnimationGraphVisualizerInfo30GetSubVisualizerNamesAndValuesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEERS0_IxS2_IxiEE */
	virtual void ~CSolveIKChainAnimationGraphVisualizerInfo(class CSolveIKChainAnimationGraphVisualizerInfo *); /* linkage=_ZN41CSolveIKChainAnimationGraphVisualizerInfoD4Ev */
};

// <01946B82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:54
void CSolveIKChainAnimationGraphVisualizerInfo::CSolveIKChainAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <01946B69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:54
inline void CSolveIKChainAnimationGraphVisualizerInfo::CSolveIKChainAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <01946B3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:58
void CSolveIKChainAnimationGraphVisualizerInfo::GetName()
{
} /* size: 12 */

// <01946AEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainupdatenode.h:63
void CSolveIKChainAnimationGraphVisualizerInfo::GetSubVisualizerNamesAndValues(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& names, CUtlVector<long long int, CUtlMemory<long long int, int> >& values)
{
} /* size: 5 */

