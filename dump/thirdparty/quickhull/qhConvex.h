
//
// thirdparty/quickhull/qhConvex.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	classes: 2
//	structs: 2
//

// <0099781B> ../thirdparty/quickhull/qhConvex.h:25
// member variables: 4
// struct size: 96
struct qhMesh {
	qhArray<qhVector3> Vertices; /* 0 24 */
	qhArray<qhVector3> Normals; /* 24 24 */
	qhArray<int> Faces; /* 48 24 */
	qhArray<int> Indices; /* 72 24 */
};

// <061EA965> thirdparty/quickhull/qhConvex.h:37
void qhIteration::~qhIteration()
{
} /* size: 0 */

// <061EA949> thirdparty/quickhull/qhConvex.h:37
inline void qhIteration::~qhIteration()
{
} /* size: 0 */

// <061EA463> thirdparty/quickhull/qhConvex.h:37
void qhIteration::qhIteration()
{
} /* size: 0 */

// <061EA447> thirdparty/quickhull/qhConvex.h:37
inline void qhIteration::qhIteration()
{
} /* size: 0 */

// <0099786B> ../thirdparty/quickhull/qhConvex.h:37
// member variables: 4
// struct size: 88
struct qhIteration {
	qhVector3 Apex; /* 0 12 */
	qhArray<qhVector3> Horizon; /* 16 24 */
	qhArray<qhVector3> Vertices; /* 40 24 */
	qhArray<int> Faces; /* 64 24 */
};

// <009983A5> ../thirdparty/quickhull/qhConvex.h:62
// member functions: 86
// member variables: 12
// class size: 336
class qhConvex {
	/* ../thirdparty/quickhull/qhConvex.h:66 */
	void qhConvex(qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:67 */
	void ~qhConvex(qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:69 */
	void Construct(qhConvex* , int, const qhVector3* , qhReal);
	/* ../thirdparty/quickhull/qhConvex.h:70 */
	void Construct(qhConvex* , int, const qhPlane* , qhReal, const qhVector3& );
	/* ../thirdparty/quickhull/qhConvex.h:71 */
	bool IsConsistent(const qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:73 */
	void Simplify(const qhConvex* , qhConvex& , qhReal);
	/* ../thirdparty/quickhull/qhConvex.h:76 */
	qhVector3 GetCentroid(const qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:78 */
	int GetVertexCount(const qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:79 */
	int GetEdgeCount(const qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:80 */
	int GetFaceCount(const qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:82 */
	const qhList<qhVertex>& GetVertexList(const qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:83 */
	const qhList<qhFace>& GetFaceList(const qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:86 */
	void GetMesh(const qhConvex* , qhMesh& );
	/* ../thirdparty/quickhull/qhConvex.h:89 */
	qhMass ComputeMass(const qhConvex* , qhReal);
	/* ../thirdparty/quickhull/qhConvex.h:92 */
	void ShiftHull(qhConvex* , const qhVector3& );
	/* ../thirdparty/quickhull/qhConvex.h:93 */
	void ScaleHull(qhConvex* , qhReal);
	/* ../thirdparty/quickhull/qhConvex.h:96 */
	int GetIterationCount(const qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:97 */
	const qhIteration& GetIteration(const qhConvex* , int);
	/* ../thirdparty/quickhull/qhConvex.h:99 */
	qhErrorCode GetErrorCode(const qhConvex* );
private:
	/* ../thirdparty/quickhull/qhConvex.h:103 */
	void AllocateMemory(qhConvex* , int);
	/* ../thirdparty/quickhull/qhConvex.h:104 */
	qhVertex* CreateVertex(qhConvex* , const qhVector3& );
	/* ../thirdparty/quickhull/qhConvex.h:105 */
	void DestroyVertex(qhConvex* , qhVertex* );
	/* ../thirdparty/quickhull/qhConvex.h:106 */
	qhFace* CreateFace(qhConvex* , qhVertex* , qhVertex* , qhVertex* );
	/* ../thirdparty/quickhull/qhConvex.h:107 */
	void DestroyFace(qhConvex* , qhFace* );
	/* ../thirdparty/quickhull/qhConvex.h:110 */
	void ComputeTolerance(qhConvex* , qhArray<qhVector3>& );
	/* ../thirdparty/quickhull/qhConvex.h:111 */
	bool BuildInitialHull(qhConvex* , int, const qhVector3* );
	/* ../thirdparty/quickhull/qhConvex.h:112 */
	qhVertex* NextConflictVertex(qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:113 */
	void AddVertexToHull(qhConvex* , qhVertex* );
	/* ../thirdparty/quickhull/qhConvex.h:114 */
	void CleanHull(qhConvex* );
	/* ../thirdparty/quickhull/qhConvex.h:116 */
	void BuildHorizon(qhConvex* , qhArray<qhHalfEdge*>& , qhVertex* , qhFace* , qhHalfEdge* );
	/* ../thirdparty/quickhull/qhConvex.h:117 */
	void BuildCone(qhConvex* , qhArray<qhFace*>& , const qhArray<qhHalfEdge*>& , qhVertex* );
	/* ../thirdparty/quickhull/qhConvex.h:118 */
	void MergeFaces(qhConvex* , qhArray<qhFace*>& );
	/* ../thirdparty/quickhull/qhConvex.h:119 */
	void ResolveVertices(qhConvex* , qhArray<qhFace*>& );
	/* ../thirdparty/quickhull/qhConvex.h:120 */
	void ResolveFaces(qhConvex* , qhArray<qhFace*>& );
	/* ../thirdparty/quickhull/qhConvex.h:122 */
	bool MergeConcave(qhConvex* , qhFace* );
	/* ../thirdparty/quickhull/qhConvex.h:123 */
	bool MergeCoplanar(qhConvex* , qhFace* );
	/* ../thirdparty/quickhull/qhConvex.h:124 */
	void ConnectFaces(qhConvex* , qhHalfEdge* );
	/* ../thirdparty/quickhull/qhConvex.h:125 */
	void ConnectEdges(qhConvex* , qhHalfEdge* , qhHalfEdge* , qhArray<qhFace*>& );
	/* ../thirdparty/quickhull/qhConvex.h:126 */
	void DestroyEdges(qhConvex* , qhHalfEdge* , qhHalfEdge* );
	/* ../thirdparty/quickhull/qhConvex.h:127 */
	void AbsorbFaces(qhConvex* , qhFace* , qhArray<qhFace*>& );
	/* ../thirdparty/quickhull/qhConvex.h:129 */
	void AddIteration(qhConvex* , qhVertex* , const qhArray<qhHalfEdge*>& , const qhList<qhFace>& );
	qhReal mTolerance; /* 0 4 */
	qhReal mMinRadius; /* 4 4 */
	qhReal mMinOutside; /* 8 4 */
	qhVector3 mInteriorPoint; /* 12 12 */
	qhList<qhVertex> mOrphanedList; /* 24 48 */
	qhList<qhVertex> mVertexList; /* 72 48 */
	qhList<qhFace> mFaceList; /* 120 112 */
	qhPool<qhVertex> mVertexPool; /* 232 24 */
	qhPool<qhHalfEdge> mEdgePool; /* 256 24 */
	qhPool<qhFace> mFacePool; /* 280 24 */
	qhArray<qhIteration> mIterations; /* 304 24 */
	qhErrorCode mLastError; /* 328 4 */
	/* ../thirdparty/quickhull/qhConvex.h:149 */
	void qhConvex(qhConvex* , const qhConvex& );
	/* ../thirdparty/quickhull/qhConvex.h:150 */
	qhConvex& operator=(qhConvex* , const qhConvex& );
	void qhConvex(class qhConvex *); /* linkage=_ZN8qhConvexC4Ev */
	void ~qhConvex(class qhConvex *); /* linkage=_ZN8qhConvexD4Ev */
	void Construct(class qhConvex *, int, const class qhVector3  *, qhReal); /* linkage=_ZN8qhConvex9ConstructEiPK9qhVector3f */
	void Construct(class qhConvex *, int, const class qhPlane  *, qhReal, const class qhVector3  &); /* linkage=_ZN8qhConvex9ConstructEiPK7qhPlanefRK9qhVector3 */
	bool IsConsistent(const class qhConvex  *); /* linkage=_ZNK8qhConvex12IsConsistentEv */
	void Simplify(const class qhConvex  *, class qhConvex &, qhReal); /* linkage=_ZNK8qhConvex8SimplifyERS_f */
	class qhVector3 GetCentroid(const class qhConvex  *); /* linkage=_ZNK8qhConvex11GetCentroidEv */
	int GetVertexCount(const class qhConvex  *); /* linkage=_ZNK8qhConvex14GetVertexCountEv */
	int GetEdgeCount(const class qhConvex  *); /* linkage=_ZNK8qhConvex12GetEdgeCountEv */
	int GetFaceCount(const class qhConvex  *); /* linkage=_ZNK8qhConvex12GetFaceCountEv */
	const class qhList<qhVertex>  & GetVertexList(const class qhConvex  *); /* linkage=_ZNK8qhConvex13GetVertexListEv */
	const class qhList<qhFace>  & GetFaceList(const class qhConvex  *); /* linkage=_ZNK8qhConvex11GetFaceListEv */
	void GetMesh(const class qhConvex  *, class qhMesh &); /* linkage=_ZNK8qhConvex7GetMeshER6qhMesh */
	class qhMass ComputeMass(const class qhConvex  *, qhReal); /* linkage=_ZNK8qhConvex11ComputeMassEf */
	void ShiftHull(class qhConvex *, const class qhVector3  &); /* linkage=_ZN8qhConvex9ShiftHullERK9qhVector3 */
	void ScaleHull(class qhConvex *, qhReal); /* linkage=_ZN8qhConvex9ScaleHullEf */
	int GetIterationCount(const class qhConvex  *); /* linkage=_ZNK8qhConvex17GetIterationCountEv */
	const class qhIteration  & GetIteration(const class qhConvex  *, int); /* linkage=_ZNK8qhConvex12GetIterationEi */
	enum qhErrorCode GetErrorCode(const class qhConvex  *); /* linkage=_ZNK8qhConvex12GetErrorCodeEv */
	void AllocateMemory(class qhConvex *, int); /* linkage=_ZN8qhConvex14AllocateMemoryEi */
	/* <61f6fe0> thirdparty/quickhull/qhConvex.cpp:665 */
	class qhVertex * CreateVertex(class qhConvex *, const class qhVector3  &); /* linkage=_ZN8qhConvex12CreateVertexERK9qhVector3 */
	/* <61f704f> thirdparty/quickhull/qhConvex.cpp:686 */
	void DestroyVertex(class qhConvex *, class qhVertex *); /* linkage=_ZN8qhConvex13DestroyVertexEP8qhVertex */
	class qhFace * CreateFace(class qhConvex *, class qhVertex *, class qhVertex *, class qhVertex *); /* linkage=_ZN8qhConvex10CreateFaceEP8qhVertexS1_S1_ */
	/* <61f70d0> thirdparty/quickhull/qhConvex.cpp:755 */
	void DestroyFace(class qhConvex *, class qhFace *); /* linkage=_ZN8qhConvex11DestroyFaceEP6qhFace */
	void ComputeTolerance(class qhConvex *, class qhArray<qhVector3> &); /* linkage=_ZN8qhConvex16ComputeToleranceER7qhArrayI9qhVector3E */
	bool BuildInitialHull(class qhConvex *, int, const class qhVector3  *); /* linkage=_ZN8qhConvex16BuildInitialHullEiPK9qhVector3 */
	class qhVertex * NextConflictVertex(class qhConvex *); /* linkage=_ZN8qhConvex18NextConflictVertexEv */
	void AddVertexToHull(class qhConvex *, class qhVertex *); /* linkage=_ZN8qhConvex15AddVertexToHullEP8qhVertex */
	void CleanHull(class qhConvex *); /* linkage=_ZN8qhConvex9CleanHullEv */
	void BuildHorizon(class qhConvex *, class qhArray<qhHalfEdge*> &, class qhVertex *, class qhFace *, class qhHalfEdge *); /* linkage=_ZN8qhConvex12BuildHorizonER7qhArrayIP10qhHalfEdgeEP8qhVertexP6qhFaceS2_ */
	void BuildCone(class qhConvex *, class qhArray<qhFace*> &, const class qhArray<qhHalfEdge*>  &, class qhVertex *); /* linkage=_ZN8qhConvex9BuildConeER7qhArrayIP6qhFaceERKS0_IP10qhHalfEdgeEP8qhVertex */
	void MergeFaces(class qhConvex *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex10MergeFacesER7qhArrayIP6qhFaceE */
	void ResolveVertices(class qhConvex *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex15ResolveVerticesER7qhArrayIP6qhFaceE */
	void ResolveFaces(class qhConvex *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex12ResolveFacesER7qhArrayIP6qhFaceE */
	bool MergeConcave(class qhConvex *, class qhFace *); /* linkage=_ZN8qhConvex12MergeConcaveEP6qhFace */
	bool MergeCoplanar(class qhConvex *, class qhFace *); /* linkage=_ZN8qhConvex13MergeCoplanarEP6qhFace */
	void ConnectFaces(class qhConvex *, class qhHalfEdge *); /* linkage=_ZN8qhConvex12ConnectFacesEP10qhHalfEdge */
	/* <61f71b8> thirdparty/quickhull/qhConvex.cpp:1438 */
	void ConnectEdges(class qhConvex *, class qhHalfEdge *, class qhHalfEdge *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex12ConnectEdgesEP10qhHalfEdgeS1_R7qhArrayIP6qhFaceE */
	/* <61f75f6> thirdparty/quickhull/qhConvex.cpp:1510 */
	void DestroyEdges(class qhConvex *, class qhHalfEdge *, class qhHalfEdge *); /* linkage=_ZN8qhConvex12DestroyEdgesEP10qhHalfEdgeS1_ */
	void AbsorbFaces(class qhConvex *, class qhFace *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex11AbsorbFacesEP6qhFaceR7qhArrayIS1_E */
	void AddIteration(class qhConvex *, class qhVertex *, const class qhArray<qhHalfEdge*>  &, const class qhList<qhFace>  &); /* linkage=_ZN8qhConvex12AddIterationEP8qhVertexRK7qhArrayIP10qhHalfEdgeERK6qhListI6qhFaceE */
	void qhConvex(class qhConvex *, const class qhConvex  &); /* linkage=_ZN8qhConvexC4ERKS_ */
	class qhConvex & operator=(class qhConvex *, const class qhConvex  &); /* linkage=_ZN8qhConvexaSERKS_ */
};

// <061E7C5B> thirdparty/quickhull/qhConvex.h:62
// member functions: 86
// member variables: 12
// class size: 336
class qhConvex {
	/* thirdparty/quickhull/qhConvex.h:66 */
	void qhConvex(qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:67 */
	void ~qhConvex(qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:69 */
	void Construct(qhConvex* , int, const qhVector3* , qhReal);
	/* thirdparty/quickhull/qhConvex.h:70 */
	void Construct(qhConvex* , int, const qhPlane* , qhReal, const qhVector3& );
	/* thirdparty/quickhull/qhConvex.h:71 */
	bool IsConsistent(const qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:73 */
	void Simplify(const qhConvex* , qhConvex& , qhReal);
	/* thirdparty/quickhull/qhConvex.h:76 */
	qhVector3 GetCentroid(const qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:78 */
	int GetVertexCount(const qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:79 */
	int GetEdgeCount(const qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:80 */
	int GetFaceCount(const qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:82 */
	const qhList<qhVertex>& GetVertexList(const qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:83 */
	const qhList<qhFace>& GetFaceList(const qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:86 */
	void GetMesh(const qhConvex* , qhMesh& );
	/* thirdparty/quickhull/qhConvex.h:89 */
	qhMass ComputeMass(const qhConvex* , qhReal);
	/* thirdparty/quickhull/qhConvex.h:92 */
	void ShiftHull(qhConvex* , const qhVector3& );
	/* thirdparty/quickhull/qhConvex.h:93 */
	void ScaleHull(qhConvex* , qhReal);
	/* thirdparty/quickhull/qhConvex.h:96 */
	int GetIterationCount(const qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:97 */
	const qhIteration& GetIteration(const qhConvex* , int);
	/* thirdparty/quickhull/qhConvex.h:99 */
	qhErrorCode GetErrorCode(const qhConvex* );
private:
	/* thirdparty/quickhull/qhConvex.h:103 */
	void AllocateMemory(qhConvex* , int);
	/* thirdparty/quickhull/qhConvex.h:104 */
	qhVertex* CreateVertex(qhConvex* , const qhVector3& );
	/* thirdparty/quickhull/qhConvex.h:105 */
	void DestroyVertex(qhConvex* , qhVertex* );
	/* thirdparty/quickhull/qhConvex.h:106 */
	qhFace* CreateFace(qhConvex* , qhVertex* , qhVertex* , qhVertex* );
	/* thirdparty/quickhull/qhConvex.h:107 */
	void DestroyFace(qhConvex* , qhFace* );
	/* thirdparty/quickhull/qhConvex.h:110 */
	void ComputeTolerance(qhConvex* , qhArray<qhVector3>& );
	/* thirdparty/quickhull/qhConvex.h:111 */
	bool BuildInitialHull(qhConvex* , int, const qhVector3* );
	/* thirdparty/quickhull/qhConvex.h:112 */
	qhVertex* NextConflictVertex(qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:113 */
	void AddVertexToHull(qhConvex* , qhVertex* );
	/* thirdparty/quickhull/qhConvex.h:114 */
	void CleanHull(qhConvex* );
	/* thirdparty/quickhull/qhConvex.h:116 */
	void BuildHorizon(qhConvex* , qhArray<qhHalfEdge*>& , qhVertex* , qhFace* , qhHalfEdge* );
	/* thirdparty/quickhull/qhConvex.h:117 */
	void BuildCone(qhConvex* , qhArray<qhFace*>& , const qhArray<qhHalfEdge*>& , qhVertex* );
	/* thirdparty/quickhull/qhConvex.h:118 */
	void MergeFaces(qhConvex* , qhArray<qhFace*>& );
	/* thirdparty/quickhull/qhConvex.h:119 */
	void ResolveVertices(qhConvex* , qhArray<qhFace*>& );
	/* thirdparty/quickhull/qhConvex.h:120 */
	void ResolveFaces(qhConvex* , qhArray<qhFace*>& );
	/* thirdparty/quickhull/qhConvex.h:122 */
	bool MergeConcave(qhConvex* , qhFace* );
	/* thirdparty/quickhull/qhConvex.h:123 */
	bool MergeCoplanar(qhConvex* , qhFace* );
	/* thirdparty/quickhull/qhConvex.h:124 */
	void ConnectFaces(qhConvex* , qhHalfEdge* );
	/* thirdparty/quickhull/qhConvex.h:125 */
	void ConnectEdges(qhConvex* , qhHalfEdge* , qhHalfEdge* , qhArray<qhFace*>& );
	/* thirdparty/quickhull/qhConvex.h:126 */
	void DestroyEdges(qhConvex* , qhHalfEdge* , qhHalfEdge* );
	/* thirdparty/quickhull/qhConvex.h:127 */
	void AbsorbFaces(qhConvex* , qhFace* , qhArray<qhFace*>& );
	/* thirdparty/quickhull/qhConvex.h:129 */
	void AddIteration(qhConvex* , qhVertex* , const qhArray<qhHalfEdge*>& , const qhList<qhFace>& );
	qhReal mTolerance; /* 0 4 */
	qhReal mMinRadius; /* 4 4 */
	qhReal mMinOutside; /* 8 4 */
	qhVector3 mInteriorPoint; /* 12 12 */
	qhList<qhVertex> mOrphanedList; /* 24 48 */
	qhList<qhVertex> mVertexList; /* 72 48 */
	qhList<qhFace> mFaceList; /* 120 112 */
	qhPool<qhVertex> mVertexPool; /* 232 24 */
	qhPool<qhHalfEdge> mEdgePool; /* 256 24 */
	qhPool<qhFace> mFacePool; /* 280 24 */
	qhArray<qhIteration> mIterations; /* 304 24 */
	qhErrorCode mLastError; /* 328 4 */
	/* thirdparty/quickhull/qhConvex.h:149 */
	void qhConvex(qhConvex* , const qhConvex& );
	/* thirdparty/quickhull/qhConvex.h:150 */
	qhConvex& operator=(qhConvex* , const qhConvex& );
	void qhConvex(class qhConvex *); /* linkage=_ZN8qhConvexC4Ev */
	void ~qhConvex(class qhConvex *); /* linkage=_ZN8qhConvexD4Ev */
	void Construct(class qhConvex *, int, const class qhVector3  *, qhReal); /* linkage=_ZN8qhConvex9ConstructEiPK9qhVector3f */
	void Construct(class qhConvex *, int, const class qhPlane  *, qhReal, const class qhVector3  &); /* linkage=_ZN8qhConvex9ConstructEiPK7qhPlanefRK9qhVector3 */
	bool IsConsistent(const class qhConvex  *); /* linkage=_ZNK8qhConvex12IsConsistentEv */
	void Simplify(const class qhConvex  *, class qhConvex &, qhReal); /* linkage=_ZNK8qhConvex8SimplifyERS_f */
	class qhVector3 GetCentroid(const class qhConvex  *); /* linkage=_ZNK8qhConvex11GetCentroidEv */
	int GetVertexCount(const class qhConvex  *); /* linkage=_ZNK8qhConvex14GetVertexCountEv */
	int GetEdgeCount(const class qhConvex  *); /* linkage=_ZNK8qhConvex12GetEdgeCountEv */
	int GetFaceCount(const class qhConvex  *); /* linkage=_ZNK8qhConvex12GetFaceCountEv */
	const class qhList<qhVertex>  & GetVertexList(const class qhConvex  *); /* linkage=_ZNK8qhConvex13GetVertexListEv */
	const class qhList<qhFace>  & GetFaceList(const class qhConvex  *); /* linkage=_ZNK8qhConvex11GetFaceListEv */
	void GetMesh(const class qhConvex  *, class qhMesh &); /* linkage=_ZNK8qhConvex7GetMeshER6qhMesh */
	class qhMass ComputeMass(const class qhConvex  *, qhReal); /* linkage=_ZNK8qhConvex11ComputeMassEf */
	void ShiftHull(class qhConvex *, const class qhVector3  &); /* linkage=_ZN8qhConvex9ShiftHullERK9qhVector3 */
	void ScaleHull(class qhConvex *, qhReal); /* linkage=_ZN8qhConvex9ScaleHullEf */
	int GetIterationCount(const class qhConvex  *); /* linkage=_ZNK8qhConvex17GetIterationCountEv */
	const class qhIteration  & GetIteration(const class qhConvex  *, int); /* linkage=_ZNK8qhConvex12GetIterationEi */
	enum qhErrorCode GetErrorCode(const class qhConvex  *); /* linkage=_ZNK8qhConvex12GetErrorCodeEv */
	void AllocateMemory(class qhConvex *, int); /* linkage=_ZN8qhConvex14AllocateMemoryEi */
	/* <61f6fe0> thirdparty/quickhull/qhConvex.cpp:665 */
	class qhVertex * CreateVertex(class qhConvex *, const class qhVector3  &); /* linkage=_ZN8qhConvex12CreateVertexERK9qhVector3 */
	/* <61f704f> thirdparty/quickhull/qhConvex.cpp:686 */
	void DestroyVertex(class qhConvex *, class qhVertex *); /* linkage=_ZN8qhConvex13DestroyVertexEP8qhVertex */
	class qhFace * CreateFace(class qhConvex *, class qhVertex *, class qhVertex *, class qhVertex *); /* linkage=_ZN8qhConvex10CreateFaceEP8qhVertexS1_S1_ */
	/* <61f70d0> thirdparty/quickhull/qhConvex.cpp:755 */
	void DestroyFace(class qhConvex *, class qhFace *); /* linkage=_ZN8qhConvex11DestroyFaceEP6qhFace */
	void ComputeTolerance(class qhConvex *, class qhArray<qhVector3> &); /* linkage=_ZN8qhConvex16ComputeToleranceER7qhArrayI9qhVector3E */
	bool BuildInitialHull(class qhConvex *, int, const class qhVector3  *); /* linkage=_ZN8qhConvex16BuildInitialHullEiPK9qhVector3 */
	class qhVertex * NextConflictVertex(class qhConvex *); /* linkage=_ZN8qhConvex18NextConflictVertexEv */
	void AddVertexToHull(class qhConvex *, class qhVertex *); /* linkage=_ZN8qhConvex15AddVertexToHullEP8qhVertex */
	void CleanHull(class qhConvex *); /* linkage=_ZN8qhConvex9CleanHullEv */
	void BuildHorizon(class qhConvex *, class qhArray<qhHalfEdge*> &, class qhVertex *, class qhFace *, class qhHalfEdge *); /* linkage=_ZN8qhConvex12BuildHorizonER7qhArrayIP10qhHalfEdgeEP8qhVertexP6qhFaceS2_ */
	void BuildCone(class qhConvex *, class qhArray<qhFace*> &, const class qhArray<qhHalfEdge*>  &, class qhVertex *); /* linkage=_ZN8qhConvex9BuildConeER7qhArrayIP6qhFaceERKS0_IP10qhHalfEdgeEP8qhVertex */
	void MergeFaces(class qhConvex *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex10MergeFacesER7qhArrayIP6qhFaceE */
	void ResolveVertices(class qhConvex *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex15ResolveVerticesER7qhArrayIP6qhFaceE */
	void ResolveFaces(class qhConvex *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex12ResolveFacesER7qhArrayIP6qhFaceE */
	bool MergeConcave(class qhConvex *, class qhFace *); /* linkage=_ZN8qhConvex12MergeConcaveEP6qhFace */
	bool MergeCoplanar(class qhConvex *, class qhFace *); /* linkage=_ZN8qhConvex13MergeCoplanarEP6qhFace */
	void ConnectFaces(class qhConvex *, class qhHalfEdge *); /* linkage=_ZN8qhConvex12ConnectFacesEP10qhHalfEdge */
	/* <61f71b8> thirdparty/quickhull/qhConvex.cpp:1438 */
	void ConnectEdges(class qhConvex *, class qhHalfEdge *, class qhHalfEdge *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex12ConnectEdgesEP10qhHalfEdgeS1_R7qhArrayIP6qhFaceE */
	/* <61f75f6> thirdparty/quickhull/qhConvex.cpp:1510 */
	void DestroyEdges(class qhConvex *, class qhHalfEdge *, class qhHalfEdge *); /* linkage=_ZN8qhConvex12DestroyEdgesEP10qhHalfEdgeS1_ */
	void AbsorbFaces(class qhConvex *, class qhFace *, class qhArray<qhFace*> &); /* linkage=_ZN8qhConvex11AbsorbFacesEP6qhFaceR7qhArrayIS1_E */
	void AddIteration(class qhConvex *, class qhVertex *, const class qhArray<qhHalfEdge*>  &, const class qhList<qhFace>  &); /* linkage=_ZN8qhConvex12AddIterationEP8qhVertexRK7qhArrayIP10qhHalfEdgeERK6qhListI6qhFaceE */
	void qhConvex(class qhConvex *, const class qhConvex  &); /* linkage=_ZN8qhConvexC4ERKS_ */
	class qhConvex & operator=(class qhConvex *, const class qhConvex  &); /* linkage=_ZN8qhConvexaSERKS_ */
};

// <0610CFF8> ../thirdparty/quickhull/qhConvex.h:66
void qhConvex::qhConvex()
{
} /* size: 0 */

// <0610CF9E> ../thirdparty/quickhull/qhConvex.h:67
void qhConvex::~qhConvex()
{
} /* size: 0 */

// <061F6801> thirdparty/quickhull/qhConvex.h:99
inline void qhConvex::GetErrorCode()
{
} /* size: 0 */

