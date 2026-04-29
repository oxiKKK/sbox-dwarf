
//
// public/mathlib/feagglomerator.h
//
//	referenced by: libengine2.so
//
//	functions: 11
//	class: 1
//

// <06F18D9B> ../../public/mathlib/feagglomerator.h:44
// member functions: 38
// member variables: 2
// vtable entry: 1
// class size: 40
class CFeAgglomerator {
	/* ../../public/mathlib/feagglomerator.h:54 */
	class CLink {
		CCluster * m_pOtherCluster; /* 0 8 */
		float m_flCost; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/mathlib/feagglomerator.h:81 */
	class CCluster {
		int m_nIndex; /* 0 4 */
		int m_nPriorityIndex; /* 4 4 */
		int m_nChildLeafs; /* 8 4 */
		AABB_t m_Aabb; /* 12 24 */
		int m_nParent; /* 36 4 */
		int m_nChild[2]; /* 40 8 */
		ClusterLinkQueue_t m_Links; /* 48 40 */
		/* ../../public/mathlib/feagglomerator.h:94 */
		void CCluster(CCluster* , int, int);
		/* ../../public/mathlib/feagglomerator.h:96 */
		bool HasLinks(const CCluster* );
		/* ../../public/mathlib/feagglomerator.h:97 */
		float GetBestCost(const CCluster* );
		/* ../../public/mathlib/feagglomerator.h:98 */
		void RemoveLink(CCluster* , CCluster* );
		/* ../../public/mathlib/feagglomerator.h:99 */
		CLink* FindLink(CCluster* , CCluster* );
		/* ../../public/mathlib/feagglomerator.h:100 */
		void AddLink(CCluster* , CCluster* , float);
		void ~CCluster(CCluster* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/mathlib/feagglomerator.h:62 */
	struct LinkLessFunc_t {
		/* ../../public/mathlib/feagglomerator.h:64 */
		bool operator()(LinkLessFunc_t* , const CLink& , const CLink& , bool (*)(const CLink& , const CLink& ));
	};
	/* ../../public/mathlib/feagglomerator.h:79 */
	typedef struct CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefUtlPriorityQueueSetIndexFunc<CFeAgglomerator::CLink>, bool (*)(const CFeAgglomerator::CLink&, const CFeAgglomerator::CLink&)> ClusterLinkQueue_t;
	/* ../../public/mathlib/feagglomerator.h:103 */
	struct ClusterLessFunc_t {
		/* ../../public/mathlib/feagglomerator.h:105 */
		bool operator()(ClusterLessFunc_t* , const CCluster* , const CCluster* , bool (*)(CCluster* const& , CCluster* const& ));
	};
	/* ../../public/mathlib/feagglomerator.h:111 */
	struct ClusterSetIndexFunc_t {
		/* ../../public/mathlib/feagglomerator.h:113 */
		void SetIndex(CCluster* , int, bool (*)(CCluster* const& , CCluster* const& ));
	};
	void CFeAgglomerator(CFeAgglomerator* , const CFeAgglomerator& );
	int ()(void) * * _vptr.CFeAgglomerator; /* 0 8 */
	/* mathlib/extended/feagglomerator.cpp:5 */
	void CFeAgglomerator(CFeAgglomerator* , uint);
	/* mathlib/extended/feagglomerator.cpp:19 */
	void ~CFeAgglomerator(CFeAgglomerator* );
	/* ../../public/mathlib/feagglomerator.h:119 */
	int GetClusterCount(const CFeAgglomerator* );
	/* ../../public/mathlib/feagglomerator.h:120 */
	CCluster* GetCluster(const CFeAgglomerator* , int);
	/* mathlib/extended/feagglomerator.cpp:81 */
	virtual float ComputeCost(CFeAgglomerator* , const CCluster* , const CCluster* );
	/* ../../public/mathlib/feagglomerator.h:125 */
	CCluster* SetNode(CFeAgglomerator* , int, const Vector& );
	/* mathlib/extended/feagglomerator.cpp:139 */
	void LinkNodes(CFeAgglomerator* , int, int);
	/* mathlib/extended/feagglomerator.cpp:159 */
	void Build(CFeAgglomerator* , bool, function<void()>);
protected:
	/* mathlib/extended/feagglomerator.cpp:253 */
	void Process(CFeAgglomerator* , ClustersPriorityQueue_t& , function<void()>);
	/* ../../public/mathlib/feagglomerator.h:138 */
	typedef struct CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, int>, CFeAgglomerator::ClusterSetIndexFunc_t, bool (*)(CFeAgglomerator::CCluster* const&, CFeAgglomerator::CCluster* const&)> ClustersPriorityQueue_t;
	/* mathlib/extended/feagglomerator.cpp:191 */
	void Validate(CFeAgglomerator* , ClustersPriorityQueue_t* );
	/* mathlib/extended/feagglomerator.cpp:109 */
	void AddLink(CFeAgglomerator* , CCluster* , CCluster* , ClustersPriorityQueue_t& );
	/* mathlib/extended/feagglomerator.cpp:130 */
	void AddInterLink(CFeAgglomerator* , CCluster* , CCluster* );
	CUtlVector<CFeAgglomerator::CCluster*, CUtlMemory<CFeAgglomerator::CCluster*, int> > m_Clusters; /* 8 32 */
	void ~CFeAgglomerator(class CFeAgglomerator *); /* linkage=_ZN15CFeAgglomeratorD4Ev */
	void LinkNodes(class CFeAgglomerator *, int, int); /* linkage=_ZN15CFeAgglomerator9LinkNodesEii */
	void Build(class CFeAgglomerator *, bool, class function<void()>); /* linkage=_ZN15CFeAgglomerator5BuildEbSt8functionIFvvEE */
	void CFeAgglomerator(class CFeAgglomerator *, uint); /* linkage=_ZN15CFeAgglomeratorC4Ej */
	class CCluster * SetNode(class CFeAgglomerator *, int, const class Vector  &); /* linkage=_ZN15CFeAgglomerator7SetNodeEiRK6Vector */
	class CCluster * GetCluster(const class CFeAgglomerator  *, int); /* linkage=_ZNK15CFeAgglomerator10GetClusterEi */
	int GetClusterCount(const class CFeAgglomerator  *); /* linkage=_ZNK15CFeAgglomerator15GetClusterCountEv */
	void CFeAgglomerator(class CFeAgglomerator *, const class CFeAgglomerator  &); /* linkage=_ZN15CFeAgglomeratorC4ERKS_ */
	virtual float ComputeCost(class CFeAgglomerator *, const class CCluster  *, const class CCluster  *); /* linkage=_ZN15CFeAgglomerator11ComputeCostEPKNS_8CClusterES2_ */
	void Process(class CFeAgglomerator *, ClustersPriorityQueue_t &, class function<void()>); /* linkage=_ZN15CFeAgglomerator7ProcessER17CUtlPriorityQueueIPNS_8CClusterENS_17ClusterLessFunc_tE10CUtlMemoryIS2_iENS_21ClusterSetIndexFunc_tEPFbRKS2_S8_EESt8functionIFvvEE */
	/* <6f2fd22> mathlib/extended/feagglomerator.cpp:191 */
	void Validate(class CFeAgglomerator *, ClustersPriorityQueue_t *); /* linkage=_ZN15CFeAgglomerator8ValidateEP17CUtlPriorityQueueIPNS_8CClusterENS_17ClusterLessFunc_tE10CUtlMemoryIS2_iENS_21ClusterSetIndexFunc_tEPFbRKS2_S8_EE */
	void AddLink(class CFeAgglomerator *, class CCluster *, class CCluster *, ClustersPriorityQueue_t &); /* linkage=_ZN15CFeAgglomerator7AddLinkEPNS_8CClusterES1_R17CUtlPriorityQueueIS1_NS_17ClusterLessFunc_tE10CUtlMemoryIS1_iENS_21ClusterSetIndexFunc_tEPFbRKS1_S8_EE */
	void AddInterLink(class CFeAgglomerator *, class CCluster *, class CCluster *); /* linkage=_ZN15CFeAgglomerator12AddInterLinkEPNS_8CClusterES1_ */
};

// <05DB4769> ../public/mathlib/feagglomerator.h:47
void CFeAgglomerator::CFeAgglomerator(uint nReserveNodes)
{
} /* size: 0 */

// <05DB464D> ../public/mathlib/feagglomerator.h:48
void CFeAgglomerator::~CFeAgglomerator()
{
} /* size: 0 */

// <06F2E9DF> ../../public/mathlib/feagglomerator.h:64
inline void LinkLessFunc_t::operator(const CLink& lhs, const CLink& rhs, bool (*lessFuncPtr)(const CLink &, const CLink &))
{
} /* size: 0 */

// <06F2076A> ../../public/mathlib/feagglomerator.h:81
void CCluster::~CCluster()
{
} /* size: 0 */

// <06F2074E> ../../public/mathlib/feagglomerator.h:81
inline void CCluster::~CCluster()
{
} /* size: 0 */

// <05DB4719> ../public/mathlib/feagglomerator.h:94
void CCluster::CCluster(int nIndex, int nLeafCount)
{
} /* size: 0 */

// <06F2E9A2> ../../public/mathlib/feagglomerator.h:105
inline void ClusterLessFunc_t::operator(const CCluster* pLeft, const CCluster* pRight, bool (*lessFuncPtr)(CCluster* const &, CCluster* const &))
{
} /* size: 0 */

// <06F2E972> ../../public/mathlib/feagglomerator.h:113
inline void SetIndex(CCluster* heapElement, int nNewIndex, bool (*lessFuncPtr)(CCluster* const &, CCluster* const &))
{
} /* size: 0 */

// <05DFEA96> ../public/mathlib/feagglomerator.h:119
inline void CFeAgglomerator::GetClusterCount()
{
} /* size: 0 */

// <05DFEA71> ../public/mathlib/feagglomerator.h:120
inline void CFeAgglomerator::GetCluster(int nIndex)
{
} /* size: 0 */

// <05DFEA35> ../public/mathlib/feagglomerator.h:125
inline void CFeAgglomerator::SetNode(int nIndex, const Vector& origin)
{
} /* size: 0 */

