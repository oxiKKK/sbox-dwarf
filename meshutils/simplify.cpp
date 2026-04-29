
//
// meshutils/simplify.cpp
//
//	referenced by: libengine2.so
//
//	functions: 46
//	classes: 5
//	structs: 3
//

// <0613F4A7> meshutils/simplify.cpp:14
// member functions: 16
// member variables: 9
// class size: 76
class CQEMEdge {
	/* meshutils/simplify.cpp:17 */
	void CQEMEdge(CQEMEdge* );
	/* meshutils/simplify.cpp:18 */
	void CQEMEdge(CQEMEdge* , int, int);
	/* meshutils/simplify.cpp:19 */
	void Init(CQEMEdge* , int, int);
	/* meshutils/simplify.cpp:30 */
	void InitVerts(CQEMEdge* , int, int);
	/* meshutils/simplify.cpp:36 */
	void MarkCollapsed(CQEMEdge* );
	/* meshutils/simplify.cpp:37 */
	bool IsCollapsed(CQEMEdge* );
	/* meshutils/simplify.cpp:38 */
	void UpdateError(CQEMEdge* , const Vector& , const Vector& , const CQuadricError* );
	/* meshutils/simplify.cpp:79 */
	int GetVertIndex(CQEMEdge* , int);
	CQuadricError m_error; /* 0 40 */
	Vector m_vOptimal; /* 40 12 */
	float m_flCurrentError; /* 52 4 */
	float m_flInterp; /* 56 4 */
	int m_nVert[2]; /* 60 8 */
	int m_nReferences; /* 68 4 */
	short int m_nBestIndex; /* 72 2 */
	bool m_bCollapsed; /* 74 1 */
	bool m_bNonManifold; /* 75 1 */
	void CQEMEdge(class CQEMEdge *); /* linkage=_ZN8CQEMEdgeC4Ev */
	void CQEMEdge(class CQEMEdge *, int, int); /* linkage=_ZN8CQEMEdgeC4Eii */
	void Init(class CQEMEdge *, int, int); /* linkage=_ZN8CQEMEdge4InitEii */
	void InitVerts(class CQEMEdge *, int, int); /* linkage=_ZN8CQEMEdge9InitVertsEii */
	void MarkCollapsed(class CQEMEdge *); /* linkage=_ZN8CQEMEdge13MarkCollapsedEv */
	bool IsCollapsed(class CQEMEdge *); /* linkage=_ZN8CQEMEdge11IsCollapsedEv */
	void UpdateError(class CQEMEdge *, const class Vector  &, const class Vector  &, const class CQuadricError  *); /* linkage=_ZN8CQEMEdge11UpdateErrorERK6VectorS2_PK13CQuadricError */
	int GetVertIndex(class CQEMEdge *, int); /* linkage=_ZN8CQEMEdge12GetVertIndexEi */
};

// <0615B4A6> meshutils/simplify.cpp:17
void CQEMEdge::CQEMEdge()
{
} /* size: 0 */

// <0615B48D> meshutils/simplify.cpp:17
inline void CQEMEdge::CQEMEdge()
{
} /* size: 0 */

// <0615B45C> meshutils/simplify.cpp:19
inline void CQEMEdge::Init(int nV0, int nV1)
{
} /* size: 0 */

// <0615B42B> meshutils/simplify.cpp:30
inline void CQEMEdge::InitVerts(int nV0, int nV1)
{
} /* size: 0 */

// <0615B412> meshutils/simplify.cpp:36
inline void CQEMEdge::MarkCollapsed()
{
} /* size: 0 */

// <0615B3F9> meshutils/simplify.cpp:37
inline void CQEMEdge::IsCollapsed()
{
} /* size: 0 */

// <0615A8A1> meshutils/simplify.cpp:38
// variables: 13
// function calls: 44
void CQEMEdge::UpdateError(const Vector& v0, const Vector& v1, const CQuadricError* pVertError)
{
	float err1; // 42
	Vector vTest; // 56
	float flError; // 57
	{
		Vector vEdge; // 60
		float flLen; // 61
		float flDist0; // 62
		float flDist1; // 63
		{
			Vector vTmp; // 69
			Vector::operator=(
					const Vector& vOther);  // 66
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 69
			DotProduct(const Vector& a,
					const Vector& b);  // 72
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 73
		}
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 60
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 62
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 62
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 63
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 63
	}
	CQuadricError::CQuadricError(); // 40
	{
		int i; // 41
	}
	CQuadricError::operator+(
			const CQuadricError& inError0);  // 40
	{
		int i; // 50
	}
	CQuadricError::operator=(
			const CQuadricError& inError0);  // 40
	{
		int i; // 130
	}
	CQuadricError::ComputeError(
			const Vector& v0);  // 41
	{
		int i; // 130
	}
	CQuadricError::ComputeError(
			const Vector& v0);  // 42
	Vector::operator=(
			const Vector& vOther);  // 46
	Cholesky3x3_t::Init(
		const matrix3x4_t& m);  // 28
	Cholesky3x3_t::Cholesky3x3_t(
			const matrix3x4_t& m);  // 66
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Cholesky3x3_t::Solve(
		const Vector& rhs);  // 67
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 67
	CholeskySolve(const matrix3x4_t& m); // 75
	matrix3x4_t::matrix3x4_t(
			float m00,
			float m01,
			float m02,
			float m03,
			float m10,
			float m11,
			float m12,
			float m13,
			float m20,
			float m21,
			float m22,
			float m23);  // 73
	CQuadricError::SolveForMinimumError(); // 56
	{
		int i; // 130
	}
	CQuadricError::ComputeError(
			const Vector& v0);  // 57
	Vector::operator=(
			const Vector& vOther);  // 53
} /* size: 1530, variables: 3, inline expansions: 17 (1267 bytes) */

// <0613F66E> meshutils/simplify.cpp:96
// member variables: 2
// struct size: 8
struct edge_queue_entry_t {
	float m_flError; /* 0 4 */
	int m_nEdgeIndex; /* 4 4 */
};

// <061529CA> meshutils/simplify.cpp:104
void CEdgeQueue::~CEdgeQueue()
{
} /* size: 0 */

// <061529AE> meshutils/simplify.cpp:104
inline void CEdgeQueue::~CEdgeQueue()
{
} /* size: 0 */

// <061410F1> meshutils/simplify.cpp:104
// member functions: 7
// member variable: 1
// class size: 40
class CEdgeQueue : public CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, int>, CDefUtlPriorityQueueSetIndexFunc<edge_queue_entry_t>, bool (*)(const edge_queue_entry_t&, const edge_queue_entry_t&)> {
public:
	/* CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, int>, CDefUtlPriorityQueueSetIndexFunc<edge_queue_entry_t>, bool (*)(const edge_queue_entry_t&, const edge_queue_entry_t&)> <ancestor>;* / /* 0 40* /
	/* meshutils/simplify.cpp:107 */
	bool IsLowerPriority(const edge_queue_entry_t& , const edge_queue_entry_t& );
	/* meshutils/simplify.cpp:113 */
	void CEdgeQueue(CEdgeQueue* , int);
	void ~CEdgeQueue(CEdgeQueue* );
	bool IsLowerPriority(const class edge_queue_entry_t  &, const class edge_queue_entry_t  &); /* linkage=_ZN10CEdgeQueue15IsLowerPriorityERK18edge_queue_entry_tS2_ */
	void CEdgeQueue(class CEdgeQueue *, int); /* linkage=_ZN10CEdgeQueueC4Ei */
	void ~CEdgeQueue(class CEdgeQueue *); /* linkage=_ZN10CEdgeQueueD4Ev */
};

// <0615A864> meshutils/simplify.cpp:107
void IsLowerPriority(const edge_queue_entry_t& node1, const edge_queue_entry_t& node2)
{
} /* size: 15 */

// <0615A7E1> meshutils/simplify.cpp:113
void CEdgeQueue::CEdgeQueue(int nInitSize)
{
} /* size: 0 */

// <0615A7BC> meshutils/simplify.cpp:113
inline void CEdgeQueue::CEdgeQueue(int nInitSize)
{
} /* size: 0 */

// <0614116E> meshutils/simplify.cpp:119
// member variables: 2
// struct size: 8
struct vertex_triangle_t {
	uint32 nV1; /* 0 4 */
	uint32 nV2; /* 4 4 */
};

// <0614BFDE> meshutils/simplify.cpp:125
void CVertVisit::~CVertVisit()
{
} /* size: 0 */

// <0614BFC2> meshutils/simplify.cpp:125
inline void CVertVisit::~CVertVisit()
{
} /* size: 0 */

// <0614B414> meshutils/simplify.cpp:125
void CVertVisit::CVertVisit()
{
} /* size: 0 */

// <0614B3F8> meshutils/simplify.cpp:125
inline void CVertVisit::CVertVisit()
{
} /* size: 0 */

// <061428C2> meshutils/simplify.cpp:125
// member functions: 4
// member variable: 1
// class size: 32
class CVertVisit {
	CUtlVector<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> > m_triangles; /* 0 32 */
	void CVertVisit(CVertVisit* );
	void ~CVertVisit(CVertVisit* );
	void CVertVisit(class CVertVisit *); /* linkage=_ZN10CVertVisitC4Ev */
	void ~CVertVisit(class CVertVisit *); /* linkage=_ZN10CVertVisitD4Ev */
};

// <06142917> meshutils/simplify.cpp:131
// member function: 1
// member variables: 3
// struct size: 16
struct edge_hash_t {
	CQEMEdge * m_pSharedEdge; /* 0 8 */
	/* meshutils/simplify.cpp:134 */
	bool operator==(const edge_hash_t* , const edge_hash_t& );
	uint32 m_nV0; /* 8 4 */
	uint32 m_nV1; /* 12 4 */
};

// <06158D32> meshutils/simplify.cpp:139
void CUniqueVertexList::CUniqueVertexList()
{
} /* size: 0 */

// <06158D16> meshutils/simplify.cpp:139
inline void CUniqueVertexList::CUniqueVertexList()
{
} /* size: 0 */

// <06158CFF> meshutils/simplify.cpp:139
void CUniqueVertexList::~CUniqueVertexList()
{
} /* size: 0 */

// <06158CE3> meshutils/simplify.cpp:139
inline void CUniqueVertexList::~CUniqueVertexList()
{
} /* size: 0 */

// <061441FE> meshutils/simplify.cpp:139
// member functions: 6
// member variable: 1
// class size: 160
class CUniqueVertexList : public CUtlVectorFixedGrowable<unsigned int, 32> {
public:
	/* class CUtlVectorFixedGrowable<unsigned int, 32> <ancestor>; */ /* 0 160 */
	/* meshutils/simplify.cpp:142 */
	void AddIfUnique(CUniqueVertexList* , uint32);
	void ~CUniqueVertexList(CUniqueVertexList* );
	void CUniqueVertexList(CUniqueVertexList* );
	void AddIfUnique(class CUniqueVertexList *, uint32); /* linkage=_ZN17CUniqueVertexList11AddIfUniqueEj */
	void ~CUniqueVertexList(class CUniqueVertexList *); /* linkage=_ZN17CUniqueVertexListD4Ev */
	void CUniqueVertexList(class CUniqueVertexList *); /* linkage=_ZN17CUniqueVertexListC4Ev */
} __attribute__((__aligned__(8)));

// <0615A772> meshutils/simplify.cpp:142
inline void CUniqueVertexList::AddIfUnique(uint32 nVertex)
{
} /* size: 0 */

// <06152963> meshutils/simplify.cpp:151
void CMeshVisit::CMeshVisit()
{
} /* size: 0 */

// <06152947> meshutils/simplify.cpp:151
inline void CMeshVisit::CMeshVisit()
{
} /* size: 0 */

// <06151D2F> meshutils/simplify.cpp:151
// variable: 1
// function calls: 64
void CMeshVisit::~CMeshVisit()
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 151
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::RemoveAll(); // 1798
	CUtlMemory<edge_queue_entry_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<edge_queue_entry_t, int>::Purge(); // 903
	CUtlMemory<edge_queue_entry_t, int>::Purge(); // 1799
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::Purge(); // 560
	ValidateAlignment<edge_queue_entry_t>(void); // 508
	CUtlMemory<edge_queue_entry_t, int>::Purge(); // 510
	CUtlMemory<edge_queue_entry_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::~CUtlVector(); // 38
	~CUtlPriorityQueue(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this); // 104
	CEdgeQueue::~CEdgeQueue(); // 151
	{
		int i; // 1721
		CUtlMemory<CVertVisit, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::RemoveAll(); // 1798
		CUtlMemory<vertex_triangle_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<vertex_triangle_t, int>::Purge(); // 903
		CUtlMemory<vertex_triangle_t, int>::Purge(); // 1799
		CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Purge(); // 560
		ValidateAlignment<vertex_triangle_t>(void); // 508
		CUtlMemory<vertex_triangle_t, int>::Purge(); // 510
		CUtlMemory<vertex_triangle_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::~CUtlVector(); // 125
		CVertVisit::~CVertVisit(); // 1526
		Destruct<CVertVisit>(CVertVisit* pMemory); // 1723
	}
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::RemoveAll(); // 1798
	CUtlMemory<CVertVisit, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVertVisit, int>::Purge(); // 903
	CUtlMemory<CVertVisit, int>::Purge(); // 1799
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::Purge(); // 560
	ValidateAlignment<CVertVisit>(void); // 508
	CUtlMemory<CVertVisit, int>::Purge(); // 510
	CUtlMemory<CVertVisit, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVertVisit, CUtlMemory<CVertVisit, int> >::~CUtlVector(); // 151
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::RemoveAll(); // 1798
	CUtlMemory<CQuadricError, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CQuadricError, int>::Purge(); // 903
	CUtlMemory<CQuadricError, int>::Purge(); // 1799
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::Purge(); // 560
	ValidateAlignment<CQuadricError>(void); // 508
	CUtlMemory<CQuadricError, int>::Purge(); // 510
	CUtlMemory<CQuadricError, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CQuadricError, CUtlMemory<CQuadricError, int> >::~CUtlVector(); // 151
	CUtlScalarHash<edge_hash_t, CDefaultHash32>::~CUtlScalarHash(); // 151
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::RemoveAll(); // 1798
	CUtlMemory<CQEMEdge, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CQEMEdge, int>::Purge(); // 903
	CUtlMemory<CQEMEdge, int>::Purge(); // 1799
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::Purge(); // 560
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CQEMEdge, CUtlMemory<CQEMEdge, int> >::~CUtlVector(); // 151
} /* size: 339, inline expansions: 50 (1322 bytes) */

// <06151D13> meshutils/simplify.cpp:151
inline void CMeshVisit::~CMeshVisit()
{
} /* size: 0 */

// <06148B37> meshutils/simplify.cpp:151
// member functions: 36
// member variables: 12
// class size: 224
class CMeshVisit {
	/* meshutils/simplify.cpp:154 */
	void BuildFromMesh(CMeshVisit* , const CMesh& );
	/* meshutils/simplify.cpp:155 */
	int FindMinErrorEdge(CMeshVisit* );
	/* meshutils/simplify.cpp:156 */
	void CollapseEdge(CMeshVisit* , int);
	/* meshutils/simplify.cpp:157 */
	void RemapEdge(CMeshVisit* , int, int, int);
	/* meshutils/simplify.cpp:158 */
	void ComputeVertListError(CMeshVisit* , float, float, float, const mesh_simplifyweights_t* );
	/* meshutils/simplify.cpp:159 */
	void UpdateEdgeError(CMeshVisit* , CQEMEdge* );
	/* meshutils/simplify.cpp:167 */
	void Get1Ring(CMeshVisit* , CUniqueVertexList& , uint32);
	/* meshutils/simplify.cpp:168 */
	int CountSharedVerts(CMeshVisit* , int, int);
	/* meshutils/simplify.cpp:169 */
	bool IsValidCollapse(CMeshVisit* , int);
	/* meshutils/simplify.cpp:170 */
	bool IsValidCollapseVertex(CMeshVisit* , int, int, const Vector& );
	/* meshutils/simplify.cpp:171 */
	int CountTotalUsedVerts(CMeshVisit* );
	/* meshutils/simplify.cpp:173 */
	UtlHashFastHandle_t FindEdge(CMeshVisit* , int, int);
	/* meshutils/simplify.cpp:183 */
	bool IsOpenEdge(CMeshVisit* , int, int);
	/* meshutils/simplify.cpp:195 */
	void WriteMeshIndexList(CMeshVisit* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& );
	/* meshutils/simplify.cpp:197 */
	float* GetVertex(CMeshVisit* , int);
	/* meshutils/simplify.cpp:198 */
	Vector& GetVertexPosition(CMeshVisit* , int);
	CUtlVector<CQEMEdge, CUtlMemory<CQEMEdge, int> > m_edgeList; /* 0 32 */
	CUtlScalarHash<edge_hash_t, CDefaultHash32> m_edgeHash; /* 32 24 */
	CUtlVector<CQuadricError, CUtlMemory<CQuadricError, int> > m_errorVert; /* 56 32 */
	CUtlVector<CVertVisit, CUtlMemory<CVertVisit, int> > m_vertList; /* 88 32 */
	CEdgeQueue m_edgeQueue; /* 120 40 */
	CUtlVector<float, CUtlMemory<float, int> > m_vertData; /* 160 32 */
	float * m_pVertexBase; /* 192 8 */
	int m_nVertexStrideFloats; /* 200 4 */
	int m_nInputVertCount; /* 204 4 */
	int m_nTriangleCount; /* 208 4 */
	int m_nCollapseIndex; /* 212 4 */
	float m_flIntegrationPenalty; /* 216 4 */
	void ~CMeshVisit(CMeshVisit* );
	void CMeshVisit(CMeshVisit* );
	/* <615cfa4> meshutils/simplify.cpp:530 */
	void BuildFromMesh(class CMeshVisit *, const class CMesh  &); /* linkage=_ZN10CMeshVisit13BuildFromMeshERK5CMesh */
	int FindMinErrorEdge(class CMeshVisit *); /* linkage=_ZN10CMeshVisit16FindMinErrorEdgeEv */
	void CollapseEdge(class CMeshVisit *, int); /* linkage=_ZN10CMeshVisit12CollapseEdgeEi */
	void RemapEdge(class CMeshVisit *, int, int, int); /* linkage=_ZN10CMeshVisit9RemapEdgeEiii */
	void ComputeVertListError(class CMeshVisit *, float, float, float, const class mesh_simplifyweights_t  *); /* linkage=_ZN10CMeshVisit20ComputeVertListErrorEfffPK22mesh_simplifyweights_t */
	void UpdateEdgeError(class CMeshVisit *, class CQEMEdge *); /* linkage=_ZN10CMeshVisit15UpdateEdgeErrorEP8CQEMEdge */
	void Get1Ring(class CMeshVisit *, class CUniqueVertexList &, uint32); /* linkage=_ZN10CMeshVisit8Get1RingER17CUniqueVertexListj */
	int CountSharedVerts(class CMeshVisit *, int, int); /* linkage=_ZN10CMeshVisit16CountSharedVertsEii */
	bool IsValidCollapse(class CMeshVisit *, int); /* linkage=_ZN10CMeshVisit15IsValidCollapseEi */
	bool IsValidCollapseVertex(class CMeshVisit *, int, int, const class Vector  &); /* linkage=_ZN10CMeshVisit21IsValidCollapseVertexEiiRK6Vector */
	int CountTotalUsedVerts(class CMeshVisit *); /* linkage=_ZN10CMeshVisit19CountTotalUsedVertsEv */
	UtlHashFastHandle_t FindEdge(class CMeshVisit *, int, int); /* linkage=_ZN10CMeshVisit8FindEdgeEii */
	bool IsOpenEdge(class CMeshVisit *, int, int); /* linkage=_ZN10CMeshVisit10IsOpenEdgeEii */
	void WriteMeshIndexList(class CMeshVisit *, class CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &); /* linkage=_ZN10CMeshVisit18WriteMeshIndexListER10CUtlVectorIj10CUtlMemoryIjiEE */
	float * GetVertex(class CMeshVisit *, int); /* linkage=_ZN10CMeshVisit9GetVertexEi */
	class Vector & GetVertexPosition(class CMeshVisit *, int); /* linkage=_ZN10CMeshVisit17GetVertexPositionEi */
	void ~CMeshVisit(class CMeshVisit *); /* linkage=_ZN10CMeshVisitD4Ev */
	void CMeshVisit(class CMeshVisit *); /* linkage=_ZN10CMeshVisitC4Ev */
};

// <06159EA9> meshutils/simplify.cpp:159
// variables: 2
// function calls: 37
void CMeshVisit::UpdateEdgeError(CQEMEdge* pEdge)
{
	edge_queue_entry_t entry; // 162
	CUtlMemory<CQuadricError, int>::Base(); // 112
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::Base(); // 161
	CMeshVisit::GetVertex(
			int nIndex);  // 198
	CMeshVisit::GetVertexPosition(
				int nIndex);  // 161
	CMeshVisit::GetVertex(
			int nIndex);  // 198
	CMeshVisit::GetVertexPosition(
				int nIndex);  // 161
	CUtlMemory<CQEMEdge, int>::Base(); // 112
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::Base(); // 164
	CUtlMemory<edge_queue_entry_t, int>::NumAllocated(); // 1143
	CUtlMemory<edge_queue_entry_t, int>::Base(); // 112
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::Base(); // 368
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<edge_queue_entry_t, int>::IsGrowable(); // 823
	CUtlMemory<edge_queue_entry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<edge_queue_entry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<edge_queue_entry_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::AddToTail(); // 228
	CUtlMemory<edge_queue_entry_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
			int i);  // 229
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue this); // 207
	{
		int parent; // 213
		CUtlMemory<edge_queue_entry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
				int i);  // 214
		CUtlMemory<edge_queue_entry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
				int i);  // 214
		CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>::operator(
												const edge_queue_entry_t& lhs,
												const edge_queue_entry_t& rhs,
												bool (*lessFuncPtr)(const edge_queue_entry_t &, const edge_queue_entry_t &));  // 214
		CUtlMemory<edge_queue_entry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
				int i);  // 238
		CUtlMemory<edge_queue_entry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
				int i);  // 239
		CUtlMemory<edge_queue_entry_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
				int i);  // 240
		Swap(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this,
			int index1,
			int index2);  // 218
	}
	PercolateUp(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this,
			int index);  // 205
	PercolateUp(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this,
			int index);  // 232
	Insert(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this,
		const edge_queue_entry_t& element);  // 165
} /* size: 541, variables: 1, inline expansions: 25 (1591 bytes) */

// <06159E60> meshutils/simplify.cpp:173
// variables: 2
inline void CMeshVisit::FindEdge(int nV0, int nV1)
{
	edge_hash_t tmp; // 175
	uint nHashKey; // 178
} /* size: 0, variables: 2 */

// <06159E23> meshutils/simplify.cpp:183
// variable: 1
inline void CMeshVisit::IsOpenEdge(int nV0, int nV1)
{
	UtlHashFastHandle_t edgeHashIndex; // 185
} /* size: 0, variables: 1 */

// <06159DFE> meshutils/simplify.cpp:197
inline void CMeshVisit::GetVertex(int nIndex)
{
} /* size: 0 */

// <06159DD9> meshutils/simplify.cpp:198
inline void CMeshVisit::GetVertexPosition(int nIndex)
{
} /* size: 0 */

// <0615994F> meshutils/simplify.cpp:217
// variables: 9
// function calls: 15
void CMeshVisit::WriteMeshIndexList(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& indexOut)
{
	uint32 nCurrentVertexCount; // 219
	int nTotalTrianglesRemaining; // 220
	const char   __FUNCTION__; // 52655
	int nWriteIndex; // 229
	{
		uint32 i; // 221
		CUtlMemory<CVertVisit, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
				int i);  // 223
		CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Count(); // 223
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
	{
		uint32 i; // 230
		{
			int j; // 232
			{
				vertex_triangle_t& tri; // 234
				CUtlMemory<vertex_triangle_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::operator[](
						int i);  // 234
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 239
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 240
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 241
			}
			CUtlMemory<CVertVisit, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
					int i);  // 232
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Count(); // 232
		}
	}
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::Count(); // 219
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <06159585> meshutils/simplify.cpp:247
// variables: 6
// function calls: 5
void CMeshVisit::RemapEdge(int nVertexRemove, int nVertexConnect, int nVertexKeep)
{
	UtlHashFastHandle_t edgeHashIndex; // 249
	edge_hash_t tmp; // 253
	CQEMEdge* pEdge; // 254
	bool bNeedsUpdate; // 255
	{
		int i; // 256
	}
	{
		uint nHashKey; // 281
		CQEMEdge::MarkCollapsed(); // 285
		VertHashKey(int nV0,
				int nV1);  // 281
	}
	VertHashKey(int nV0,
			int nV1);  // 178
	CMeshVisit::FindEdge(
		int nV0,
		int nV1);  // 249
	{
	}
	CUtlScalarHash<edge_hash_t, CDefaultHash32>::Element(
		UtlHashFastHandle_t hHash);  // 253
} /* size: 0, variables: 4, inline expansions: 3 (111 bytes) */

// <06158D7D> meshutils/simplify.cpp:295
// variables: 5
// function calls: 35
void CMeshVisit::Get1Ring(CUniqueVertexList& list, uint32 nVertex)
{
	int nTriCount; // 297
	{
		int i; // 298
		{
			const vertex_triangle_t& tri; // 300
			CUtlMemory<CVertVisit, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
					int i);  // 300
			CUtlMemory<vertex_triangle_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::operator[](
					int i);  // 300
			{
				int i; // 1531
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Count(); // 1531
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 609
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Element(
					int i);  // 1533
			}
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Find(
				const unsigned int& src);  // 144
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::AddToTail(
					const unsigned int& src);  // 146
			CUniqueVertexList::AddIfUnique(
					uint32 nVertex);  // 301
			{
				int i; // 1531
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Count(); // 1531
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 609
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Element(
					int i);  // 1533
			}
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Find(
				const unsigned int& src);  // 144
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::AddToTail(
					const unsigned int& src);  // 146
			CUniqueVertexList::AddIfUnique(
					uint32 nVertex);  // 302
		}
	}
	CUtlMemory<CVertVisit, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
			int i);  // 297
	CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Count(); // 297
} /* size: 366, variables: 1, inline expansions: 3 (27 bytes) */

// <06157DE5> meshutils/simplify.cpp:308
// variables: 5
// function calls: 67
void CMeshVisit::CountSharedVerts(int nVert0, int nVert1)
{
	CUniqueVertexList vertIndex0; // 310
	CUniqueVertexList vertIndex1; // 311
	int nSharedCount; // 315
	{
		int i; // 316
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Count(); // 316
		{
			int i; // 1531
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Count(); // 1531
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 609
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Find(
			const unsigned int& src);  // 318
	}
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 139
	CUniqueVertexList::CUniqueVertexList(); // 311
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 139
	CUniqueVertexList::CUniqueVertexList(); // 310
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 139
	CUniqueVertexList::~CUniqueVertexList(); // 324
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 139
	CUniqueVertexList::~CUniqueVertexList(); // 324
} /* size: 548, variables: 3, inline expansions: 62 (1660 bytes) */

// <0615763D> meshutils/simplify.cpp:327
// variables: 15
// function calls: 28
void CMeshVisit::IsValidCollapseVertex(int nVertCheck, int nVertOpposite, const Vector& vReplacePos)
{
	Vector vOld; // 329
	int nTriCount; // 331
	{
		int i; // 333
		{
			const vertex_triangle_t& tri; // 335
			int nV1; // 336
			int nV2; // 337
			Vector v1; // 342
			Vector v2; // 343
			Vector vEdge0; // 344
			Vector vEdge1; // 345
			Vector vNormal; // 346
			Vector vNewEdge0; // 347
			Vector vNewEdge1; // 348
			Vector vNewNormal; // 349
			float flDot; // 350
			CUtlMemory<vertex_triangle_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::operator[](
					int i);  // 335
			CMeshVisit::GetVertex(
					int nIndex);  // 198
			CMeshVisit::GetVertexPosition(
						int nIndex);  // 342
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 344
			CMeshVisit::GetVertex(
					int nIndex);  // 198
			CMeshVisit::GetVertexPosition(
						int nIndex);  // 343
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 347
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 345
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 348
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 346
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 349
			DotProduct(const Vector& a,
					const Vector& b);  // 350
		}
	}
	CMeshVisit::GetVertex(
			int nIndex);  // 198
	CMeshVisit::GetVertexPosition(
				int nIndex);  // 329
	CUtlMemory<CVertVisit, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
			int i);  // 331
	CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Count(); // 331
} /* size: 461, variables: 2, inline expansions: 5 (76 bytes) */

// <06157426> meshutils/simplify.cpp:360
// variables: 3
// function calls: 4
void CMeshVisit::IsValidCollapse(int nMinEdge)
{
	int nVert0; // 368
	int nVert1; // 369
	Vector vOptimal; // 374
	CUtlMemory<CQEMEdge, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
			int i);  // 365
	CUtlMemory<CQEMEdge, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
			int i);  // 374
} /* size: 193, variables: 3, inline expansions: 4 (28 bytes) */

// <061554A1> meshutils/simplify.cpp:379
// variables: 26
// function calls: 132
void CMeshVisit::CollapseEdge(int nCollapse)
{
	Vector vOptimal; // 382
	const char   __FUNCTION__; // 52518
	int nV0; // 385
	int nV1; // 386
	float flInterp; // 389
	uint32 nVertexKeep; // 390
	uint32 nVertexRemove; // 391
	CUniqueVertexList vertIndex; // 402
	int nTrianglesRemoved; // 408
	CUtlVectorFixedGrowable<unsigned int, 32> removeList; // 409
	int nRemoveCount; // 446
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 387
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 388
	}
	{
		int i; // 411
		{
			uint32 nVertex; // 413
			{
				int j; // 414
				{
					vertex_triangle_t& tri; // 416
					CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Element(
						int i);  // 1252
					Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::AddToTail(
							unsigned int& src);  // 430
					CUtlMemory<vertex_triangle_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::operator[](
							int i);  // 416
				}
				CUtlMemory<CVertVisit, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
						int i);  // 414
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Count(); // 414
			}
			{
				int j; // 434
				CUtlMemory<CVertVisit, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
						int i);  // 436
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::operator[](
						int i);  // 436
				CUtlMemory<vertex_triangle_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Element(
					int i);  // 1575
				Destruct<vertex_triangle_t>(vertex_triangle_t* pMemory); // 1575
				{
					const bool  bNotLast; // 1578
					CUtlMemory<vertex_triangle_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Element(
						int i);  // 1584
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 1584
				}
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::FastRemove(
						int elem);  // 436
			}
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::operator[](
					int i);  // 413
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Count(); // 433
			CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 438
		}
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Count(); // 411
	}
	{
		int i; // 441
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Count(); // 441
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::operator[](
				int i);  // 443
	}
	{
		int j; // 447
		{
			vertex_triangle_t& tri; // 449
			CUtlMemory<CVertVisit, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
					int i);  // 455
			CUtlMemory<vertex_triangle_t, int>::NumAllocated(); // 1196
			CUtlMemory<vertex_triangle_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Element(
				int i);  // 1201
			CopyConstruct<vertex_triangle_t>(vertex_triangle_t* pMemory,
							const vertex_triangle_t& src);  // 1201
			CUtlMemory<vertex_triangle_t, int>::Base(); // 112
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Base(); // 368
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::AddToTail(
					const vertex_triangle_t& src);  // 455
			CUtlMemory<vertex_triangle_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::operator[](
					int i);  // 449
		}
		CUtlMemory<CVertVisit, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
				int i);  // 447
		CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Count(); // 447
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 461
	}
	CUtlMemory<CQEMEdge, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
			int i);  // 381
	CQEMEdge::MarkCollapsed(); // 381
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::Count(); // 384
	CUtlMemory<CQEMEdge, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
			int i);  // 385
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::Count(); // 387
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::Count(); // 388
	CUtlMemory<CQEMEdge, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
			int i);  // 389
	CUtlMemory<CQuadricError, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::operator[](
			int i);  // 399
	CUtlMemory<CQuadricError, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::operator[](
			int i);  // 399
	{
		int i; // 31
	}
	CQuadricError::operator+=(
			const CQuadricError& inError);  // 399
	CUtlMemory<CQuadricError, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::operator[](
			int i);  // 400
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 139
	CUniqueVertexList::CUniqueVertexList(); // 402
	{
		int i; // 59
	}
	CQuadricError::operator*=(
			float flScale);  // 400
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 409
	CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::RemoveAll(); // 459
	CMeshVisit::GetVertex(
			int nIndex);  // 466
	CMeshVisit::GetVertex(
			int nIndex);  // 466
	CMeshVisit::GetVertex(
			int nIndex);  // 466
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 468
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 139
	CUniqueVertexList::~CUniqueVertexList(); // 468
} /* size: 0, variables: 11, inline expansions: 82 (2294 bytes) */

// <06154B0E> meshutils/simplify.cpp:471
// variables: 8
// function calls: 37
void CMeshVisit::CountTotalUsedVerts()
{
	int nVertCount; // 473
	int nMaxVertexIndex; // 474
	CUtlVector<int, CUtlMemory<int, int> > used; // 476
	int nUsedCount; // 479
	{
		int i; // 481
		{
			int nTriCount; // 483
			{
				int j; // 492
				CUtlMemory<CVertVisit, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
						int i);  // 494
				CUtlMemory<vertex_triangle_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::operator[](
						int i);  // 494
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 494
				CUtlMemory<vertex_triangle_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::operator[](
						int i);  // 499
				CUtlMemory<CVertVisit, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
						int i);  // 499
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 499
			}
			CUtlMemory<CVertVisit, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
					int i);  // 483
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Count(); // 483
		}
	}
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::Count(); // 473
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 476
	CUtlMemory<int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
		int count);  // 477
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 507
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 478
} /* size: 0, variables: 4, inline expansions: 22 (0 bytes) */

// <061544BB> meshutils/simplify.cpp:509
// variables: 5
// function calls: 22
int CountUsedVerts(const uint32* pIndexList, int nIndexCount, int nVertexCount)
{
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > used; // 511
	int nUsedCount; // 517
	{
		int i; // 513
	}
	{
		int i; // 518
		{
			int nIndex; // 520
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
					int i);  // 521
		}
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 511
	CUtlMemory<unsigned char, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount(
		int count);  // 512
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 528
} /* size: 226, variables: 2, inline expansions: 20 (599 bytes) */

// <0615CFA4> meshutils/simplify.cpp:530
// variables: 4
void CMeshVisit::BuildFromMesh(const CMesh& input)
{
	int nPosOffset; // 533
	int nInputVertCount; // 539
	int nInputIndexCount; // 540
	int nInputTriangleCount; // 541
} /* size: 0, variables: 4 */

// <0615C17A> meshutils/simplify.cpp:530
// variables: 17
// function calls: 55
void CMeshVisit::BuildFromMesh(const CMesh& input)
{
	int nPosOffset; // 533
	int nInputVertCount; // 539
	int nInputIndexCount; // 540
	int nInputTriangleCount; // 541
	{
	}
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 961
	{
		int i; // 1070
	}
	CUtlScalarHash<edge_hash_t, CDefaultHash32>::RemoveAll(); // 965
	CUtlScalarHash<edge_hash_t, CDefaultHash32>::Init(
		int nBucketCount);  // 543
	{
		int i; // 547
		CUtlMemory<vertex_triangle_t, int>::IsGrowable(); // 881
		CUtlMemory<vertex_triangle_t, int>::IsExternallyAllocated(); // 888
		CUtlMemory<vertex_triangle_t, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::EnsureCapacity(
				int num);  // 549
		CUtlMemory<CVertVisit, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
				int i);  // 549
	}
	CUtlMemory<CQEMEdge, int>::IsGrowable(); // 881
	CUtlMemory<CQEMEdge, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CQEMEdge, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::EnsureCapacity(
			int num);  // 552
	{
		int i; // 568
		{
			int j; // 570
			{
				int nV0; // 572
				int nNext; // 573
				int nV1; // 574
				edge_hash_t tmp; // 575
				uint nHashKey; // 578
				UtlHashFastHandle_t edgeHashIndex; // 580
				edge_hash_t& edgeHash; // 589
				vertex_triangle_t tri; // 592
				VertHashKey(int nV0,
						int nV1);  // 578
				{
					int nEdgeIndex; // 584
					CUtlMemory<CQEMEdge, int>::NumAllocated(); // 1143
					CUtlMemory<CQEMEdge, int>::Base(); // 112
					CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::Base(); // 368
					CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::ResetDbgInfo(); // 824
					CUtlMemory<CQEMEdge, int>::IsGrowable(); // 823
					CUtlMemory<CQEMEdge, int>::IsExternallyAllocated(); // 859
					CUtlMemory<CQEMEdge, int>::IsExternallyAllocated(); // 861
					CUtlMemory<CQEMEdge, int>::Grow(
						int num);  // 806
					CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::GrowMemory(
							int num);  // 1145
					CUtlMemory<CQEMEdge, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::Element(
						int i);  // 1148
					CQuadricError::CQuadricError(); // 17
					Vector::Vector(); // 17
					CQEMEdge::Init(
						int nV0,
						int nV1);  // 17
					CQEMEdge::CQEMEdge(); // 1479
					Construct<CQEMEdge>(CQEMEdge* pMemory); // 1148
					CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::AddToTail(); // 584
					CUtlMemory<CQEMEdge, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
							int i);  // 585
					CQEMEdge::InitVerts(
							int nV0,
							int nV1);  // 586
				}
				{
				}
				CUtlScalarHash<edge_hash_t, CDefaultHash32>::Element(
					UtlHashFastHandle_t hHash);  // 589
				CUtlMemory<CVertVisit, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
						int i);  // 595
				CUtlMemory<vertex_triangle_t, int>::NumAllocated(); // 1196
				CUtlMemory<vertex_triangle_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<vertex_triangle_t>(vertex_triangle_t* pMemory,
								const vertex_triangle_t& src);  // 1201
				CUtlMemory<vertex_triangle_t, int>::Base(); // 112
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Base(); // 368
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::AddToTail(
						const vertex_triangle_t& src);  // 595
			}
		}
	}
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 602
	CMesh::GetVertexSizeInBytes(); // 200
	CMesh::GetTotalVertexSizeInBytes(); // 604
	CMesh::GetVertex(
			int nIndex);  // 604
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 604
} /* size: 0, variables: 4, inline expansions: 15 (734 bytes) */

// <061543B9> meshutils/simplify.cpp:530
// variables: 16
void CMeshVisit::BuildFromMesh(const CMesh& input)
{
	int nPosOffset; // 533
	int nInputVertCount; // 539
	int nInputIndexCount; // 540
	int nInputTriangleCount; // 541
	{
		int i; // 547
	}
	{
		int i; // 568
		{
			int j; // 570
			{
				int nV0; // 572
				int nNext; // 573
				int nV1; // 574
				edge_hash_t tmp; // 575
				uint nHashKey; // 578
				UtlHashFastHandle_t edgeHashIndex; // 580
				edge_hash_t& edgeHash; // 589
				vertex_triangle_t tri; // 592
				{
					int nEdgeIndex; // 584
				}
			}
		}
	}
} /* size: 0, variables: 4 */

// <06153BE7> meshutils/simplify.cpp:609
// variables: 5
// function calls: 33
void CMeshVisit::FindMinErrorEdge()
{
	int nBest; // 611
	{
		edge_queue_entry_t entry; // 618
		CQEMEdge& edge; // 621
		CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::Count(); // 71
		Count(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue this); // 615
		CUtlMemory<edge_queue_entry_t, int>::operator[](
				int i);  // 609
		CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::Element(
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue this); // 618
		{
			const bool  bNotLast; // 1578
			CUtlMemory<edge_queue_entry_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		Destruct<edge_queue_entry_t>(edge_queue_entry_t* pMemory); // 1575
		CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::FastRemove(
				int elem);  // 110
		{
			int child; // 174
			CUtlMemory<edge_queue_entry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
					int i);  // 178
			CUtlMemory<edge_queue_entry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
					int i);  // 178
			CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>::operator(
													const edge_queue_entry_t& lhs,
													const edge_queue_entry_t& rhs,
													bool (*lessFuncPtr)(const edge_queue_entry_t &, const edge_queue_entry_t &));  // 178
			CUtlMemory<edge_queue_entry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
					int i);  // 189
			CUtlMemory<edge_queue_entry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
					int i);  // 189
			CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>::operator(
													const edge_queue_entry_t& lhs,
													const edge_queue_entry_t& rhs,
													bool (*lessFuncPtr)(const edge_queue_entry_t &, const edge_queue_entry_t &));  // 189
			CUtlMemory<edge_queue_entry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
					int i);  // 238
			CUtlMemory<edge_queue_entry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
					int i);  // 239
			CUtlMemory<edge_queue_entry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::operator[](
					int i);  // 240
			Swap(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this,
				int index1,
				int index2);  // 197
		}
		PercolateDown(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this,
				int index);  // 117
		RemoveAtHead(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this); // 619
		CUtlMemory<CQEMEdge, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
				int i);  // 621
		CQEMEdge::IsCollapsed(); // 622
	}
} /* size: 473, variables: 1 */

// <06152A7D> meshutils/simplify.cpp:635
// variables: 19
// function calls: 65
void CMeshVisit::ComputeVertListError(float flOpenEdgePenalty, float flMinArea, float flMaxArea, const mesh_simplifyweights_t* pWeights)
{
	int nInputEdgeCount; // 677
	{
		int i; // 646
		{
			int j; // 649
			{
				int nV0; // 651
				int nV1; // 652
				int nV2; // 653
				CQuadricError errorThisTri; // 667
				{
					Vector v0; // 656
					Vector v1; // 657
					Vector v2; // 658
					Vector vNormal; // 659
					Vector vPlaneNormal; // 660
					float flArea; // 661
					CQuadricError errorThisEdge; // 662
					CMeshVisit::GetVertex(
							int nIndex);  // 198
					CMeshVisit::GetVertexPosition(
								int nIndex);  // 656
					Vector::NormalizeInPlace(); // 661
					CMeshVisit::GetVertex(
							int nIndex);  // 198
					CMeshVisit::GetVertexPosition(
								int nIndex);  // 658
					CMeshVisit::GetVertex(
							int nIndex);  // 198
					CMeshVisit::GetVertexPosition(
								int nIndex);  // 657
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 659
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 659
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 659
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 660
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 660
					DotProduct(const Vector& a,
							const Vector& b);  // 663
					CQuadricError::InitFromPlane(
							const Vector& vNormal,
							float flDist,
							float flScale);  // 663
					CUtlMemory<CQuadricError, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::operator[](
							int i);  // 664
					CQuadricError::CQuadricError(); // 662
					{
						int i; // 31
					}
					CQuadricError::operator+=(
							const CQuadricError& inError);  // 664
				}
				{
				}
				CUtlScalarHash<edge_hash_t, CDefaultHash32>::Element(
					UtlHashFastHandle_t hHash);  // 188
				VertHashKey(int nV0,
						int nV1);  // 178
				CMeshVisit::FindEdge(
					int nV0,
					int nV1);  // 185
				CMeshVisit::IsOpenEdge(
						int nV0,
						int nV1);  // 654
				CUtlMemory<vertex_triangle_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::operator[](
						int i);  // 652
				CQuadricError::CQuadricError(); // 667
				CMeshVisit::GetVertex(
						int nIndex);  // 198
				CMeshVisit::GetVertexPosition(
							int nIndex);  // 668
				Vector::NormalizeInPlace(); // 107
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 106
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 106
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 106
				DotProduct(const Vector& a,
						const Vector& b);  // 109
				CQuadricError::InitFromPlane(
						const Vector& vNormal,
						float flDist,
						float flScale);  // 110
				CQuadricError::InitFromTriangle(
						const Vector& v0,
						const Vector& v1,
						const Vector& v2,
						float flMinArea);  // 668
				CMeshVisit::GetVertex(
						int nIndex);  // 198
				CMeshVisit::GetVertexPosition(
							int nIndex);  // 668
				CMeshVisit::GetVertex(
						int nIndex);  // 198
				CMeshVisit::GetVertexPosition(
							int nIndex);  // 668
				CUtlMemory<CQuadricError, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::operator[](
						int i);  // 669
				{
					int i; // 31
				}
				CQuadricError::operator+=(
						const CQuadricError& inError);  // 669
			}
			CUtlMemory<CVertVisit, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::operator[](
					int i);  // 649
			CUtlVectorBase<vertex_triangle_t, CUtlMemory<vertex_triangle_t, int> >::Count(); // 649
		}
		CUtlMemory<CQuadricError, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::operator[](
				int i);  // 648
		{
			int i; // 81
		}
		CQuadricError::SetToZero(); // 648
		CUtlMemory<CQuadricError, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::operator[](
				int i);  // 673
		{
			int i; // 59
		}
		CQuadricError::operator*=(
				float flScale);  // 673
	}
	{
		int i; // 678
		CUtlMemory<CQEMEdge, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
				int i);  // 680
	}
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::Count(); // 677
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <06151020> meshutils/simplify.cpp:684
// variables: 2
// function calls: 57
void GetOpenEdges(CUtlVector<Vector, CUtlMemory<Vector, int> >& list, const CMesh& input)
{
	CMeshVisit visit; // 686
	{
		int i; // 689
		CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::Count(); // 689
		CUtlMemory<CQEMEdge, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
				int i);  // 691
		CMeshVisit::GetVertex(
				int nIndex);  // 198
		CMeshVisit::GetVertexPosition(
					int nIndex);  // 693
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 693
		CUtlMemory<CQEMEdge, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
				int i);  // 694
		CMeshVisit::GetVertex(
				int nIndex);  // 198
		CMeshVisit::GetVertexPosition(
					int nIndex);  // 694
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 694
	}
	CUtlMemory<edge_queue_entry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<edge_queue_entry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 96
	CUtlPriorityQueue(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this,
				int growSize,
				int initSize,
				bool (*lessfunc)(const edge_queue_entry_t &, const edge_queue_entry_t &));  // 113
	CEdgeQueue::CEdgeQueue(
			int nInitSize);  // 151
	CUtlMemory<CQEMEdge, int>::ValidateGrowSize(); // 475
	CUtlMemory<CQEMEdge, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CQEMEdge, CUtlMemory<CQEMEdge, int> >::CUtlVector(); // 151
	CUtlScalarHash<edge_hash_t, CDefaultHash32>::CUtlScalarHash(); // 151
	CUtlMemory<CQuadricError, int>::ValidateGrowSize(); // 475
	CUtlMemory<CQuadricError, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CQuadricError, CUtlMemory<CQuadricError, int> >::CUtlVector(); // 151
	CUtlMemory<CVertVisit, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVertVisit, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVertVisit, CUtlMemory<CVertVisit, int> >::CUtlVector(); // 151
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 151
	CMeshVisit::CMeshVisit(); // 686
	CMeshVisit::BuildFromMesh(
			const CMesh& input);  // 687
} /* size: 0, variables: 1, inline expansions: 30 (0 bytes) */

// <0614F878> meshutils/simplify.cpp:699
// variables: 17
// function calls: 95
void SimplifyMeshQEM2(CMesh& meshOut, const CMesh& input, const mesh_simplifyparams_t& params, const mesh_simplifyweights_t* pWeights)
{
	CMeshVisit visit; // 702
	CUtlVector<CQuadricError, CUtlMemory<CQuadricError, int> > errorEdge; // 704
	int nInputVertCount; // 706
	int nInputEdgeCount; // 708
	int nMinEdge; // 713
	int nVertexCurrent; // 714
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indexOut; // 743
	int nOutputIndexCount; // 746
	const uint32  nInvalidIndex; // 747
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > nIndexMap; // 748
	int nOutputVertexCount; // 752
	{
		float flMinError; // 718
		CUtlMemory<CQEMEdge, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
				int i);  // 718
		CUtlMemory<CQEMEdge, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::operator[](
				int i);  // 739
	}
	{
		int i; // 753
		{
			int nIndex; // 755
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 756
		}
	}
	{
		int i; // 765
	}
	{
		int i; // 769
		CMeshVisit::GetVertex(
				int nIndex);  // 773
		CMesh::GetVertex(
				int nIndex);  // 773
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 773
	}
	CMeshVisit::BuildFromMesh(
			const CMesh& input);  // 703
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CQEMEdge, int>::ValidateGrowSize(); // 475
	CUtlMemory<CQEMEdge, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CQEMEdge, CUtlMemory<CQEMEdge, int> >::CUtlVector(); // 151
	CUtlScalarHash<edge_hash_t, CDefaultHash32>::CUtlScalarHash(); // 151
	CUtlMemory<CQuadricError, int>::ValidateGrowSize(); // 475
	CUtlMemory<CQuadricError, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CQuadricError, CUtlMemory<CQuadricError, int> >::CUtlVector(); // 151
	CUtlMemory<CVertVisit, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVertVisit, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVertVisit, CUtlMemory<CVertVisit, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVertVisit, CUtlMemory<CVertVisit, int> >::CUtlVector(); // 151
	CUtlMemory<edge_queue_entry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<edge_queue_entry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 96
	CUtlPriorityQueue(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this,
				int growSize,
				int initSize,
				bool (*lessfunc)(const edge_queue_entry_t &, const edge_queue_entry_t &));  // 113
	CEdgeQueue::CEdgeQueue(
			int nInitSize);  // 151
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 151
	CMeshVisit::CMeshVisit(); // 702
	CUtlMemory<CQuadricError, int>::ValidateGrowSize(); // 475
	CUtlMemory<CQuadricError, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CQuadricError, CUtlMemory<CQuadricError, int> >::CUtlVector(); // 704
	CUtlVectorBase<CQEMEdge, CUtlMemory<CQEMEdge, int> >::Count(); // 708
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 743
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 748
	{
		int i; // 1554
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::FillWithValue(
			const unsigned int& src);  // 750
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 776
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 785
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 785
	CUtlMemory<CQuadricError, int>::Purge(); // 903
	CUtlMemory<CQuadricError, int>::Purge(); // 1799
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::Purge(); // 560
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CQuadricError, CUtlMemory<CQuadricError, int> >::~CUtlVector(); // 785
	CUtlMemory<CQuadricError, int>::Purge(); // 903
	CUtlMemory<CQuadricError, int>::Purge(); // 1799
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::Purge(); // 560
	ValidateAlignment<CQuadricError>(void); // 508
	CUtlMemory<CQuadricError, int>::Purge(); // 510
	CUtlMemory<CQuadricError, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CQuadricError, CUtlMemory<CQuadricError, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CQuadricError, CUtlMemory<CQuadricError, int> >::~CUtlVector(); // 785
} /* size: 1486, variables: 11, inline expansions: 85 (2127 bytes) */

