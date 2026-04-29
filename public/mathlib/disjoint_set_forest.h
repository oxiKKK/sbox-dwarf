
//
// public/mathlib/disjoint_set_forest.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 12
//	class: 1
//

// <05E75849> ../public/mathlib/disjoint_set_forest.h:17
void CDisjointSetForest::~CDisjointSetForest()
{
} /* size: 0 */

// <05E7582D> ../public/mathlib/disjoint_set_forest.h:17
inline void CDisjointSetForest::~CDisjointSetForest()
{
} /* size: 0 */

// <05B9AF47> ../public/mathlib/disjoint_set_forest.h:17
// member functions: 12
// member variable: 1
// class size: 32
class CDisjointSetForest {
	/* ../public/mathlib/disjoint_set_forest.h:28 */
	struct Node_t {
		int nRank; /* 0 4 */
		int nParent; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/mathlib/disjoint_set_forest.h:20 */
	void CDisjointSetForest(CDisjointSetForest* , int);
	/* ../public/mathlib/disjoint_set_forest.h:23 */
	int Find(CDisjointSetForest* , int);
	/* ../public/mathlib/disjoint_set_forest.h:24 */
	void Union(CDisjointSetForest* , int, int);
	/* ../public/mathlib/disjoint_set_forest.h:25 */
	void EnsureExists(CDisjointSetForest* , int);
	/* ../public/mathlib/disjoint_set_forest.h:26 */
	int GetNodeCount(const CDisjointSetForest* );
protected:
	CUtlVector<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> > m_Nodes; /* 0 32 */
	void ~CDisjointSetForest(CDisjointSetForest* );
	void CDisjointSetForest(class CDisjointSetForest *, int); /* linkage=_ZN18CDisjointSetForestC4Ei */
	int Find(class CDisjointSetForest *, int); /* linkage=_ZN18CDisjointSetForest4FindEi */
	void Union(class CDisjointSetForest *, int, int); /* linkage=_ZN18CDisjointSetForest5UnionEii */
	void EnsureExists(class CDisjointSetForest *, int); /* linkage=_ZN18CDisjointSetForest12EnsureExistsEi */
	int GetNodeCount(const class CDisjointSetForest  *); /* linkage=_ZNK18CDisjointSetForest12GetNodeCountEv */
	void ~CDisjointSetForest(class CDisjointSetForest *); /* linkage=_ZN18CDisjointSetForestD4Ev */
};

// <05BE1583> ../public/mathlib/disjoint_set_forest.h:26
inline void CDisjointSetForest::GetNodeCount()
{
} /* size: 0 */

// <05E8299C> ../public/mathlib/disjoint_set_forest.h:36
// variable: 1
void CDisjointSetForest::CDisjointSetForest(int nCount)
{
	{
		int i; // 39
	}
} /* size: 0 */

// <05E82968> ../public/mathlib/disjoint_set_forest.h:36
// variable: 1
inline void CDisjointSetForest::CDisjointSetForest(int nCount)
{
	{
		int i; // 39
	}
} /* size: 0 */

// <05BE14B1> ../public/mathlib/disjoint_set_forest.h:47
// variables: 2
inline void CDisjointSetForest::EnsureExists(int nNode)
{
	int nOldCount; // 49
	{
		int n; // 53
	}
} /* size: 0, variables: 1 */

// <05E83793> ../public/mathlib/disjoint_set_forest.h:66
// variables: 2
void CDisjointSetForest::Find()
{
	int nTopParent; // 68
	int nParent; // 75
	{
	}
} /* size: 23, variables: 2 */

// <05E828DB> ../public/mathlib/disjoint_set_forest.h:66
// variables: 6
inline void CDisjointSetForest::Find(int nStartNode)
{
	int nTopParent; // 68
	int nParent; // 75
	const char   __FUNCTION__; // 60026
	{
		int nNode; // 69
	}
	{
		int nNode; // 76
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
} /* size: 0, variables: 3 */

// <05BE1424> ../public/mathlib/disjoint_set_forest.h:66
// variables: 6
inline void CDisjointSetForest::Find(int nStartNode)
{
	int nTopParent; // 68
	int nParent; // 75
	const char   __FUNCTION__; // 39217
	{
		int nNode; // 69
	}
	{
		int nNode; // 76
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
} /* size: 0, variables: 3 */

// <02D2296C> ../public/mathlib/disjoint_set_forest.h:66
// variables: 6
inline void CDisjointSetForest::Find(int nStartNode)
{
	int nTopParent; // 68
	int nParent; // 75
	const char   __FUNCTION__; // 32110
	{
		int nNode; // 69
	}
	{
		int nNode; // 76
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
} /* size: 0, variables: 3 */

// <0150C5A4> ../public/mathlib/disjoint_set_forest.h:66
// variables: 6
inline void CDisjointSetForest::Find(int nStartNode)
{
	int nTopParent; // 68
	int nParent; // 75
	const char   __FUNCTION__; // 22294
	{
		int nNode; // 69
	}
	{
		int nNode; // 76
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
} /* size: 0, variables: 3 */

// <05E8288F> ../public/mathlib/disjoint_set_forest.h:87
// variables: 2
inline void CDisjointSetForest::Union(int nNodeA, int nNodeB)
{
	int nRootA; // 89
	int nRootB; // 90
} /* size: 0, variables: 2 */

