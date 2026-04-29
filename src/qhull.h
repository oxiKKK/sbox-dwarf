
//
// src/qhull.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	class: 1
//	structs: 3
//

// <06B6A597> src/qhull.h:16
// member variables: 6
// struct size: 48
struct b3QHVertex {
	b3QHVertex * prev; /* 0 8 */
	b3QHVertex * next; /* 8 8 */
	int mark; /* 16 4 */
	b3Vec3 position; /* 20 12 */
	b3QHFace * conflictFace; /* 32 8 */
	int userIndex; /* 40 4 */
};

// <06B6A6AA> src/qhull.h:29
// member variables: 5
// struct size: 40
struct b3QHHalfEdge {
	b3QHHalfEdge * prev; /* 0 8 */
	b3QHHalfEdge * next; /* 8 8 */
	b3QHVertex * origin; /* 16 8 */
	b3QHFace * face; /* 24 8 */
	b3QHHalfEdge * twin; /* 32 8 */
};

// <06B6A60A> src/qhull.h:42
// member variables: 9
// struct size: 112
struct b3QHFace {
	b3QHFace * prev; /* 0 8 */
	b3QHFace * next; /* 8 8 */
	b3QHHalfEdge * edge; /* 16 8 */
	int mark; /* 24 4 */
	float area; /* 28 4 */
	b3Vec3 centroid; /* 32 12 */
	b3Plane plane; /* 44 16 */
	bool flipped; /* 60 1 */
	b3QHVertex conflictList; /* 64 48 */
};

// <06B6AD23> src/qhull.h:59
// member functions: 68
// member variables: 10
// class size: 304
class b3HullBuilder {
	/* src/qhull.h:63 */
	void b3HullBuilder(b3HullBuilder* );
	/* src/qhull.h:64 */
	void b3HullBuilder(b3HullBuilder* , const b3HullBuilder& );
	/* src/qhull.h:65 */
	void b3HullBuilder(b3HullBuilder* , b3HullBuilder& );
	/* src/qhull.h:66 */
	void ~b3HullBuilder(b3HullBuilder* );
	/* src/qhull.h:68 */
	b3HullBuilder& operator=(b3HullBuilder* , const b3HullBuilder& );
	/* src/qhull.h:69 */
	b3HullBuilder& operator=(b3HullBuilder* , b3HullBuilder& );
	/* src/qhull.h:72 */
	void Construct(b3HullBuilder* , const b3Vec3* , int);
	/* src/qhull.h:73 */
	bool IsConsistent(const b3HullBuilder* );
	/* src/qhull.h:76 */
	int GetVertexCount(const b3HullBuilder* );
	/* src/qhull.h:77 */
	int GetHalfEdgeCount(const b3HullBuilder* );
	/* src/qhull.h:78 */
	int GetFaceCount(const b3HullBuilder* );
	/* src/qhull.h:80 */
	const b3QHVertex& GetVertexList(const b3HullBuilder* );
	/* src/qhull.h:81 */
	const b3QHFace& GetFaceList(const b3HullBuilder* );
	/* src/qhull.h:84 */
	void AllocateMemory(b3HullBuilder* , int);
	/* src/qhull.h:85 */
	b3QHVertex* CreateVertex(b3HullBuilder* , const b3Vec3& , int);
	/* src/qhull.h:86 */
	void DestroyVertex(b3HullBuilder* , b3QHVertex* );
	/* src/qhull.h:87 */
	b3QHFace* CreateFace(b3HullBuilder* , b3QHVertex* , b3QHVertex* , b3QHVertex* );
	/* src/qhull.h:88 */
	void DestroyFace(b3HullBuilder* , b3QHFace* );
	/* src/qhull.h:91 */
	void ComputeTolerance(b3HullBuilder* , int, const b3Vec3* );
	/* src/qhull.h:92 */
	bool BuildInitialHull(b3HullBuilder* , int, const b3Vec3* );
	/* src/qhull.h:93 */
	b3QHVertex* NextConflictVertex(b3HullBuilder* );
	/* src/qhull.h:94 */
	void AddVertexToHull(b3HullBuilder* , b3QHVertex* );
	/* src/qhull.h:95 */
	void CleanHull(b3HullBuilder* , b3Vec3);
	/* src/qhull.h:97 */
	void BuildHorizon(b3HullBuilder* , b3StackArray<b3QHHalfEdge*, 32>& , b3QHVertex* , b3QHFace* , b3QHHalfEdge* );
	/* src/qhull.h:99 */
	void BuildCone(b3HullBuilder* , b3StackArray<b3QHFace*, 32>& , const b3StackArray<b3QHHalfEdge*, 32>& , b3QHVertex* );
	/* src/qhull.h:100 */
	void MergeFaces(b3HullBuilder* , const b3StackArray<b3QHFace*, 32>& );
	/* src/qhull.h:101 */
	void ResolveVertices(b3HullBuilder* , const b3StackArray<b3QHFace*, 32>& );
	/* src/qhull.h:102 */
	void ResolveFaces(b3HullBuilder* , const b3StackArray<b3QHFace*, 32>& );
	/* src/qhull.h:104 */
	bool MergeConcave(b3HullBuilder* , b3QHFace* );
	/* src/qhull.h:105 */
	bool MergeCoplanar(b3HullBuilder* , b3QHFace* );
	/* src/qhull.h:106 */
	void ConnectFaces(b3HullBuilder* , b3QHHalfEdge* );
	/* src/qhull.h:107 */
	void ConnectEdges(b3HullBuilder* , b3QHHalfEdge* , b3QHHalfEdge* , b3StackArray<b3QHFace*, 32>& );
	/* src/qhull.h:108 */
	void DestroyEdges(b3HullBuilder* , b3QHHalfEdge* , b3QHHalfEdge* );
	/* src/qhull.h:109 */
	void AbsorbFaces(b3HullBuilder* , b3QHFace* , b3StackArray<b3QHFace*, 32>& );
	float m_tolerance; /* 0 4 */
	float m_minRadius; /* 4 4 */
	float m_minOutside; /* 8 4 */
	b3Vec3 m_interiorPoint; /* 12 12 */
	b3QHVertex m_orphanedList; /* 24 48 */
	b3QHVertex m_vertexList; /* 72 48 */
	b3QHFace m_faceList; /* 120 112 */
	b3Pool<b3QHVertex> m_vertexPool; /* 232 24 */
	b3Pool<b3QHHalfEdge> m_edgePool; /* 256 24 */
	b3Pool<b3QHFace> m_facePool; /* 280 24 */
	void b3HullBuilder(class b3HullBuilder *); /* linkage=_ZN13b3HullBuilderC4Ev */
	void b3HullBuilder(class b3HullBuilder *, const class b3HullBuilder  &); /* linkage=_ZN13b3HullBuilderC4ERKS_ */
	void b3HullBuilder(class b3HullBuilder *, class b3HullBuilder &); /* linkage=_ZN13b3HullBuilderC4EOS_ */
	void ~b3HullBuilder(class b3HullBuilder *); /* linkage=_ZN13b3HullBuilderD4Ev */
	class b3HullBuilder & operator=(class b3HullBuilder *, const class b3HullBuilder  &); /* linkage=_ZN13b3HullBuilderaSERKS_ */
	class b3HullBuilder & operator=(class b3HullBuilder *, class b3HullBuilder &); /* linkage=_ZN13b3HullBuilderaSEOS_ */
	void Construct(class b3HullBuilder *, const b3Vec3  *, int); /* linkage=_ZN13b3HullBuilder9ConstructEPK6b3Vec3i */
	bool IsConsistent(const class b3HullBuilder  *); /* linkage=_ZNK13b3HullBuilder12IsConsistentEv */
	/* <6c10242> src/qhull.cpp:89 */
	int GetVertexCount(const class b3HullBuilder  *); /* linkage=_ZNK13b3HullBuilder14GetVertexCountEv */
	int GetHalfEdgeCount(const class b3HullBuilder  *); /* linkage=_ZNK13b3HullBuilder16GetHalfEdgeCountEv */
	/* <6c102d7> src/qhull.cpp:113 */
	int GetFaceCount(const class b3HullBuilder  *); /* linkage=_ZNK13b3HullBuilder12GetFaceCountEv */
	const class b3QHVertex  & GetVertexList(const class b3HullBuilder  *); /* linkage=_ZNK13b3HullBuilder13GetVertexListEv */
	const class b3QHFace  & GetFaceList(const class b3HullBuilder  *); /* linkage=_ZNK13b3HullBuilder11GetFaceListEv */
	/* <6c104ba> src/qhull.cpp:623 */
	void AllocateMemory(class b3HullBuilder *, int); /* linkage=_ZN13b3HullBuilder14AllocateMemoryEi */
	class b3QHVertex * CreateVertex(class b3HullBuilder *, const b3Vec3  &, int); /* linkage=_ZN13b3HullBuilder12CreateVertexERK6b3Vec3i */
	void DestroyVertex(class b3HullBuilder *, class b3QHVertex *); /* linkage=_ZN13b3HullBuilder13DestroyVertexEP10b3QHVertex */
	class b3QHFace * CreateFace(class b3HullBuilder *, class b3QHVertex *, class b3QHVertex *, class b3QHVertex *); /* linkage=_ZN13b3HullBuilder10CreateFaceEP10b3QHVertexS1_S1_ */
	void DestroyFace(class b3HullBuilder *, class b3QHFace *); /* linkage=_ZN13b3HullBuilder11DestroyFaceEP8b3QHFace */
	void ComputeTolerance(class b3HullBuilder *, int, const b3Vec3  *); /* linkage=_ZN13b3HullBuilder16ComputeToleranceEiPK6b3Vec3 */
	bool BuildInitialHull(class b3HullBuilder *, int, const b3Vec3  *); /* linkage=_ZN13b3HullBuilder16BuildInitialHullEiPK6b3Vec3 */
	class b3QHVertex * NextConflictVertex(class b3HullBuilder *); /* linkage=_ZN13b3HullBuilder18NextConflictVertexEv */
	void AddVertexToHull(class b3HullBuilder *, class b3QHVertex *); /* linkage=_ZN13b3HullBuilder15AddVertexToHullEP10b3QHVertex */
	void CleanHull(class b3HullBuilder *, b3Vec3); /* linkage=_ZN13b3HullBuilder9CleanHullE6b3Vec3 */
	void BuildHorizon(class b3HullBuilder *, class b3StackArray<b3QHHalfEdge*, 32> &, class b3QHVertex *, class b3QHFace *, class b3QHHalfEdge *); /* linkage=_ZN13b3HullBuilder12BuildHorizonER12b3StackArrayIP12b3QHHalfEdgeLi32EEP10b3QHVertexP8b3QHFaceS2_ */
	void BuildCone(class b3HullBuilder *, class b3StackArray<b3QHFace*, 32> &, const class b3StackArray<b3QHHalfEdge*, 32>  &, class b3QHVertex *); /* linkage=_ZN13b3HullBuilder9BuildConeER12b3StackArrayIP8b3QHFaceLi32EERKS0_IP12b3QHHalfEdgeLi32EEP10b3QHVertex */
	void MergeFaces(class b3HullBuilder *, const class b3StackArray<b3QHFace*, 32>  &); /* linkage=_ZN13b3HullBuilder10MergeFacesERK12b3StackArrayIP8b3QHFaceLi32EE */
	void ResolveVertices(class b3HullBuilder *, const class b3StackArray<b3QHFace*, 32>  &); /* linkage=_ZN13b3HullBuilder15ResolveVerticesERK12b3StackArrayIP8b3QHFaceLi32EE */
	void ResolveFaces(class b3HullBuilder *, const class b3StackArray<b3QHFace*, 32>  &); /* linkage=_ZN13b3HullBuilder12ResolveFacesERK12b3StackArrayIP8b3QHFaceLi32EE */
	bool MergeConcave(class b3HullBuilder *, class b3QHFace *); /* linkage=_ZN13b3HullBuilder12MergeConcaveEP8b3QHFace */
	bool MergeCoplanar(class b3HullBuilder *, class b3QHFace *); /* linkage=_ZN13b3HullBuilder13MergeCoplanarEP8b3QHFace */
	void ConnectFaces(class b3HullBuilder *, class b3QHHalfEdge *); /* linkage=_ZN13b3HullBuilder12ConnectFacesEP12b3QHHalfEdge */
	void ConnectEdges(class b3HullBuilder *, class b3QHHalfEdge *, class b3QHHalfEdge *, class b3StackArray<b3QHFace*, 32> &); /* linkage=_ZN13b3HullBuilder12ConnectEdgesEP12b3QHHalfEdgeS1_R12b3StackArrayIP8b3QHFaceLi32EE */
	void DestroyEdges(class b3HullBuilder *, class b3QHHalfEdge *, class b3QHHalfEdge *); /* linkage=_ZN13b3HullBuilder12DestroyEdgesEP12b3QHHalfEdgeS1_ */
	void AbsorbFaces(class b3HullBuilder *, class b3QHFace *, class b3StackArray<b3QHFace*, 32> &); /* linkage=_ZN13b3HullBuilder11AbsorbFacesEP8b3QHFaceR12b3StackArrayIS1_Li32EE */
};

// <06B6BA87> src/qhull.h:63
void b3HullBuilder::b3HullBuilder()
{
} /* size: 0 */

// <06B6BA6B> src/qhull.h:66
void b3HullBuilder::~b3HullBuilder()
{
} /* size: 0 */

// <06B6BCBF> src/qhull.h:127
b3QHFace* b3Begin<b3QHFace>(b3QHFace& head)
{
} /* size: 0 */

// <06B6BD13> src/qhull.h:132
const b3QHVertex* b3Begin<b3QHVertex>(const b3QHVertex& head)
{
} /* size: 0 */

// <06B6BC8F> src/qhull.h:137
b3QHFace* b3End<b3QHFace>(b3QHFace& head)
{
} /* size: 0 */

// <06B6BCE9> src/qhull.h:142
const b3QHVertex* b3End<b3QHVertex>(const b3QHVertex& head)
{
} /* size: 0 */

