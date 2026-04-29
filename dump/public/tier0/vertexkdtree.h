
//
// public/tier0/vertexkdtree.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   libtier0.so
//
//	functions: 9
//	classes: 3
//

// <05B89BFE> ../public/tier0/vertexkdtree.h:10
// member functions: 10
// member variables: 3
// class size: 16
class CVertexKDNode {
	uint32 m_nChildren[2]; /* 0 8 */
	int32 m_nAxis; /* 8 4 */
	float m_flSplit; /* 12 4 */
	/* ../public/tier0/vertexkdtree.h:17 */
	bool IsLeaf(const CVertexKDNode* );
	/* ../public/tier0/vertexkdtree.h:18 */
	void InitAsSplit(CVertexKDNode* , float, int, int);
	/* ../public/tier0/vertexkdtree.h:26 */
	int GetLeafVertCount(const CVertexKDNode* );
	/* ../public/tier0/vertexkdtree.h:27 */
	int GetLeafVertStart(const CVertexKDNode* );
	/* ../public/tier0/vertexkdtree.h:28 */
	void InitAsLeaf(CVertexKDNode* , int, int);
	bool IsLeaf(const class CVertexKDNode  *); /* linkage=_ZNK13CVertexKDNode6IsLeafEv */
	void InitAsSplit(class CVertexKDNode *, float, int, int); /* linkage=_ZN13CVertexKDNode11InitAsSplitEfii */
	int GetLeafVertCount(const class CVertexKDNode  *); /* linkage=_ZNK13CVertexKDNode16GetLeafVertCountEv */
	int GetLeafVertStart(const class CVertexKDNode  *); /* linkage=_ZNK13CVertexKDNode16GetLeafVertStartEv */
	void InitAsLeaf(class CVertexKDNode *, int, int); /* linkage=_ZN13CVertexKDNode10InitAsLeafEii */
};

// <005160C2> ../public/tier0/vertexkdtree.h:17
inline void CVertexKDNode::IsLeaf()
{
} /* size: 0 */

// <00516085> ../public/tier0/vertexkdtree.h:18
inline void CVertexKDNode::InitAsSplit(float flSplit, int nAxis, int nCount)
{
} /* size: 0 */

// <0051604D> ../public/tier0/vertexkdtree.h:26
// variables: 2
inline void CVertexKDNode::GetLeafVertCount()
{
	const char   __FUNCTION__; // 40636
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
	}
} /* size: 0, variables: 1 */

// <00516000> ../public/tier0/vertexkdtree.h:27
// variables: 2
inline void CVertexKDNode::GetLeafVertStart()
{
	const char   __FUNCTION__; // 40636
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 27
	}
} /* size: 0, variables: 1 */

// <00515FCF> ../public/tier0/vertexkdtree.h:28
inline void CVertexKDNode::InitAsLeaf(int nStart, int nCount)
{
} /* size: 0 */

// <05BD680A> ../public/tier0/vertexkdtree.h:37
void CVertexKDTree::~CVertexKDTree()
{
} /* size: 0 */

// <05BD67EE> ../public/tier0/vertexkdtree.h:37
inline void CVertexKDTree::~CVertexKDTree()
{
} /* size: 0 */

// <05B8C8CF> ../public/tier0/vertexkdtree.h:37
// member functions: 20
// member variables: 2
// class size: 64
class CVertexKDTree {
	/* ../public/tier0/vertexkdtree.h:40 */
	void CVertexKDTree(CVertexKDTree* );
	/* ../public/tier0/vertexkdtree.h:41 */
	void BuildMidpoint(CVertexKDTree* , const float* , int, int);
	/* ../public/tier0/vertexkdtree.h:42 */
	void FindVertsInBox(const CVertexKDTree* , CUtlVectorFixedGrowable<float const*, 64>& , const Vector& , const Vector& , int);
	/* ../public/tier0/vertexkdtree.h:43 */
	void FindVertsInBox(const CVertexKDTree* , CUtlVectorFixed<float const*, 64>& , const Vector& , const Vector& , int);
	/* ../public/tier0/vertexkdtree.h:44 */
	void ForEachInBox(CVertexKDTree* , const Vector& , const Vector& , function<void(float const*)>, int);
	/* ../public/tier0/vertexkdtree.h:45 */
	void ForEachInSphere(CVertexKDTree* , const Vector& , float, function<void(float const*)>, int);
private:
	/* ../public/tier0/vertexkdtree.h:54 */
	int FindMidpointIndex(CVertexKDTree* , int, int, int, float);
	/* ../public/tier0/vertexkdtree.h:55 */
	void ComputeBounds(CVertexKDTree* , Vector* , Vector* , int, int);
	/* ../public/tier0/vertexkdtree.h:56 */
	int BuildNode(CVertexKDTree* , int, int);
	CUtlVector<CVertexKDNode, CUtlMemory<CVertexKDNode, int> > m_tree; /* 0 32 */
	CUtlBlockVector<float const*, int> m_vertexList; /* 32 32 */
	void ~CVertexKDTree(CVertexKDTree* );
	void CVertexKDTree(class CVertexKDTree *); /* linkage=_ZN13CVertexKDTreeC4Ev */
	void BuildMidpoint(class CVertexKDTree *, const float  *, int, int); /* linkage=_ZN13CVertexKDTree13BuildMidpointEPKfii */
	void FindVertsInBox(const class CVertexKDTree  *, class CUtlVectorFixedGrowable<float const*, 64> &, const class Vector  &, const class Vector  &, int); /* linkage=_ZNK13CVertexKDTree14FindVertsInBoxER23CUtlVectorFixedGrowableIPKfLm64EERK6VectorS7_i */
	void FindVertsInBox(const class CVertexKDTree  *, class CUtlVectorFixed<float const*, 64> &, const class Vector  &, const class Vector  &, int); /* linkage=_ZNK13CVertexKDTree14FindVertsInBoxER15CUtlVectorFixedIPKfLm64EERK6VectorS7_i */
	void ForEachInBox(class CVertexKDTree *, const class Vector  &, const class Vector  &, class function<void(float const*)>, int); /* linkage=_ZN13CVertexKDTree12ForEachInBoxERK6VectorS2_St8functionIFvPKfEEi */
	void ForEachInSphere(class CVertexKDTree *, const class Vector  &, float, class function<void(float const*)>, int); /* linkage=_ZN13CVertexKDTree15ForEachInSphereERK6VectorfSt8functionIFvPKfEEi */
	int FindMidpointIndex(class CVertexKDTree *, int, int, int, float); /* linkage=_ZN13CVertexKDTree17FindMidpointIndexEiiif */
	void ComputeBounds(class CVertexKDTree *, class Vector *, class Vector *, int, int); /* linkage=_ZN13CVertexKDTree13ComputeBoundsEP6VectorS1_ii */
	int BuildNode(class CVertexKDTree *, int, int); /* linkage=_ZN13CVertexKDTree9BuildNodeEii */
	void ~CVertexKDTree(class CVertexKDTree *); /* linkage=_ZN13CVertexKDTreeD4Ev */
};

// <0050D9A6> ../public/tier0/vertexkdtree.h:37
// member functions: 19
// member variables: 2
// class size: 64
class CVertexKDTree {
	/* ../public/tier0/vertexkdtree.h:40 */
	void CVertexKDTree(CVertexKDTree* );
	/* ../public/tier0/vertexkdtree.h:41 */
	void BuildMidpoint(CVertexKDTree* , const float* , int, int);
	/* ../public/tier0/vertexkdtree.h:42 */
	void FindVertsInBox(const CVertexKDTree* , CUtlVectorFixedGrowable<float const*, 64>& , const Vector& , const Vector& , int);
	/* ../public/tier0/vertexkdtree.h:43 */
	void FindVertsInBox(const CVertexKDTree* , CUtlVectorFixed<float const*, 64>& , const Vector& , const Vector& , int);
	/* ../public/tier0/vertexkdtree.h:44 */
	void ForEachInBox(CVertexKDTree* , const Vector& , const Vector& , function<void(float const*)>, int);
	/* ../public/tier0/vertexkdtree.h:45 */
	void ForEachInSphere(CVertexKDTree* , const Vector& , float, function<void(float const*)>, int);
private:
	/* ../public/tier0/vertexkdtree.h:54 */
	int FindMidpointIndex(CVertexKDTree* , int, int, int, float);
	/* ../public/tier0/vertexkdtree.h:55 */
	void ComputeBounds(CVertexKDTree* , Vector* , Vector* , int, int);
	/* ../public/tier0/vertexkdtree.h:56 */
	int BuildNode(CVertexKDTree* , int, int);
	CUtlVector<CVertexKDNode, CUtlMemory<CVertexKDNode, int> > m_tree; /* 0 32 */
	CUtlBlockVector<float const*, int> m_vertexList; /* 32 32 */
	void CVertexKDTree(class CVertexKDTree *); /* linkage=_ZN13CVertexKDTreeC4Ev */
	void BuildMidpoint(class CVertexKDTree *, const float  *, int, int); /* linkage=_ZN13CVertexKDTree13BuildMidpointEPKfii */
	void FindVertsInBox(const class CVertexKDTree  *, class CUtlVectorFixedGrowable<float const*, 64> &, const class Vector  &, const class Vector  &, int); /* linkage=_ZNK13CVertexKDTree14FindVertsInBoxER23CUtlVectorFixedGrowableIPKfLm64EERK6VectorS7_i */
	void FindVertsInBox(const class CVertexKDTree  *, class CUtlVectorFixed<float const*, 64> &, const class Vector  &, const class Vector  &, int); /* linkage=_ZNK13CVertexKDTree14FindVertsInBoxER15CUtlVectorFixedIPKfLm64EERK6VectorS7_i */
	void ForEachInBox(class CVertexKDTree *, const class Vector  &, const class Vector  &, class function<void(float const*)>, int); /* linkage=_ZN13CVertexKDTree12ForEachInBoxERK6VectorS2_St8functionIFvPKfEEi */
	void ForEachInSphere(class CVertexKDTree *, const class Vector  &, float, class function<void(float const*)>, int); /* linkage=_ZN13CVertexKDTree15ForEachInSphereERK6VectorfSt8functionIFvPKfEEi */
	int FindMidpointIndex(class CVertexKDTree *, int, int, int, float); /* linkage=_ZN13CVertexKDTree17FindMidpointIndexEiiif */
	void ComputeBounds(class CVertexKDTree *, class Vector *, class Vector *, int, int); /* linkage=_ZN13CVertexKDTree13ComputeBoundsEP6VectorS1_ii */
	int BuildNode(class CVertexKDTree *, int, int); /* linkage=_ZN13CVertexKDTree9BuildNodeEii */
	void ~CVertexKDTree(class CVertexKDTree *); /* linkage=_ZN13CVertexKDTreeD4Ev */
};

// <05BE1A9D> ../public/tier0/vertexkdtree.h:40
void CVertexKDTree::CVertexKDTree()
{
} /* size: 0 */

// <05BE1A84> ../public/tier0/vertexkdtree.h:40
inline void CVertexKDTree::CVertexKDTree()
{
} /* size: 0 */

