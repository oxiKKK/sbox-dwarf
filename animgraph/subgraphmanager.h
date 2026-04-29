
//
// animgraph/subgraphmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	classes: 2
//

// <0125A767> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:14
// function call: 1
void CSubGraph::~CSubGraph()
{
	CUtlString::~CUtlString(); // 14
} /* size: 49, inline expansions: 1 (13 bytes) */

// <0125A651> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:14
// function calls: 4
void CSubGraph::~CSubGraph()
{
	CUtlString::~CUtlString(); // 14
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 14
	CSubGraph::~CSubGraph(); // 14
} /* size: 77, inline expansions: 4 (55 bytes) */

// <0125A635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:14
inline void CSubGraph::~CSubGraph()
{
} /* size: 0 */

// <01237EB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:14
// member functions: 12
// member variables: 4
// vtable entries: 2
// class size: 40
class CSubGraph : public ISubGraph, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class ISubGraph <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:10 */
	void CSubGraph(CSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:23 */
	virtual const CUtlString& GetFilePath(const CSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:29 */
	virtual IAnimationSubGraph* GetSubGraph(CSubGraph* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:27 */
	void CSubGraph(CSubGraph* , const CSubGraph& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:17 */
	void operator=(CSubGraph* , const CSubGraph& );
	CUtlString m_filePath; /* 24 8 */
	CAnimationSubGraph * m_pSubGraph; /* 32 8 */
	virtual void ~CSubGraph(CSubGraph* );
	void CSubGraph(class CSubGraph *); /* linkage=_ZN9CSubGraphC4Ev */
	virtual const class CUtlString  & GetFilePath(const class CSubGraph  *); /* linkage=_ZNK9CSubGraph11GetFilePathEv */
	/* <129c3b9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:29 */
	virtual class IAnimationSubGraph * GetSubGraph(class CSubGraph *); /* linkage=_ZN9CSubGraph11GetSubGraphEv */
	void CSubGraph(class CSubGraph *, const class CSubGraph  &); /* linkage=_ZN9CSubGraphC4ERKS_ */
	void operator=(class CSubGraph *, const class CSubGraph  &); /* linkage=_ZN9CSubGraphaSERKS_ */
	virtual void ~CSubGraph(class CSubGraph *); /* linkage=_ZN9CSubGraphD4Ev */
};

// <0125A9E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:36
// function calls: 6
void CSubGraphManager::~CSubGraphManager()
{
	ValidateAlignment<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this); // 36
} /* size: 94, inline expansions: 6 (116 bytes) */

// <0125A7F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:36
// function calls: 9
void CSubGraphManager::~CSubGraphManager()
{
	ValidateAlignment<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this); // 36
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 36
	CSubGraphManager::~CSubGraphManager(); // 36
} /* size: 94, inline expansions: 9 (148 bytes) */

// <0125A7D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:36
inline void CSubGraphManager::~CSubGraphManager()
{
} /* size: 0 */

// <0123AABF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:36
// member functions: 24
// member variables: 4
// vtable entries: 5
// class size: 64
class CSubGraphManager : public ISubGraphManager, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class ISubGraphManager <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:35 */
	void CSubGraphManager(CSubGraphManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:42 */
	virtual int Count(const CSubGraphManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:48 */
	virtual CSubGraph* GetSubGraph(CSubGraphManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:65 */
	virtual const CSubGraph* GetSubGraph(const CSubGraphManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:82 */
	virtual int GetSubGraphRefCount(const CSubGraphManager* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:100 */
	virtual void AddSubGraphFromBuffer(CSubGraphManager* , const CUtlString& , const CUtlBuffer& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:117 */
	CSubGraphPtr AddNewSubGraph(CSubGraphManager* , const CUtlString& , IAnimationSubGraph* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:160 */
	CSubGraphPtr AddSubGraph(CSubGraphManager* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:111 */
	void SetGraph(CSubGraphManager* , CAnimationGraph* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:56 */
	void CSubGraphManager(CSubGraphManager* , const CSubGraphManager& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:177 */
	void operator=(CSubGraphManager* , const CSubGraphManager& );
	CAnimationGraph * m_pGraph; /* 24 8 */
	CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int> > m_subgraphs; /* 32 32 */
	virtual void ~CSubGraphManager(CSubGraphManager* );
	CSubGraphPtr AddSubGraph(class CSubGraphManager *, const class CUtlString  &); /* linkage=_ZN16CSubGraphManager11AddSubGraphERK10CUtlString */
	CSubGraphPtr AddNewSubGraph(class CSubGraphManager *, const class CUtlString  &, class IAnimationSubGraph *); /* linkage=_ZN16CSubGraphManager14AddNewSubGraphERK10CUtlStringP18IAnimationSubGraph */
	void SetGraph(class CSubGraphManager *, class CAnimationGraph *); /* linkage=_ZN16CSubGraphManager8SetGraphEP15CAnimationGraph */
	void CSubGraphManager(class CSubGraphManager *); /* linkage=_ZN16CSubGraphManagerC4Ev */
	virtual int Count(const class CSubGraphManager  *); /* linkage=_ZNK16CSubGraphManager5CountEv */
	virtual class CSubGraph * GetSubGraph(class CSubGraphManager *, int); /* linkage=_ZN16CSubGraphManager11GetSubGraphEi */
	virtual const class CSubGraph  * GetSubGraph(const class CSubGraphManager  *, int); /* linkage=_ZNK16CSubGraphManager11GetSubGraphEi */
	/* <129d7af> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:82 */
	virtual int GetSubGraphRefCount(const class CSubGraphManager  *, const class CUtlString  &); /* linkage=_ZNK16CSubGraphManager19GetSubGraphRefCountERK10CUtlString */
	/* <12a0d4a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:100 */
	virtual void AddSubGraphFromBuffer(class CSubGraphManager *, const class CUtlString  &, const class CUtlBuffer  &); /* linkage=_ZN16CSubGraphManager21AddSubGraphFromBufferERK10CUtlStringRK10CUtlBuffer */
	void CSubGraphManager(class CSubGraphManager *, const class CSubGraphManager  &); /* linkage=_ZN16CSubGraphManagerC4ERKS_ */
	void operator=(class CSubGraphManager *, const class CSubGraphManager  &); /* linkage=_ZN16CSubGraphManageraSERKS_ */
	virtual void ~CSubGraphManager(class CSubGraphManager *); /* linkage=_ZN16CSubGraphManagerD4Ev */
};

// <00DF51F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.h:40
void CSubGraphManager::CSubGraphManager()
{
} /* size: 0 */

