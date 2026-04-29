
//
// public/meshutils/hullivr.h
//
//	referenced by: libengine2.so
//
//	functions: 27
//	class: 1
//	structs: 5
//

// <05E8236F> ../public/meshutils/hullivr.h:20
void HullIVRCollapseCost_t::HullIVRCollapseCost_t()
{
} /* size: 0 */

// <05E82353> ../public/meshutils/hullivr.h:20
inline void HullIVRCollapseCost_t::HullIVRCollapseCost_t()
{
} /* size: 0 */

// <05E22275> ../public/meshutils/hullivr.h:20
// member functions: 2
// member variables: 5
// struct size: 20
struct HullIVRCollapseCost_t {
	float flSilouetteLossDistance; /* 0 4 */
	float flTotalVolumeLost; /* 4 4 */
	/* ../public/meshutils/hullivr.h:24 */
	float GetSilhouetteLossAngle(const HullIVRCollapseCost_t* );
	float flRaiseAngleBefore; /* 8 4 */
	float flRaiseAngleAfter; /* 12 4 */
	float flSolidAngle; /* 16 4 */
	void HullIVRCollapseCost_t(HullIVRCollapseCost_t* );
};

// <05E82E4C> ../public/meshutils/hullivr.h:24
inline void HullIVRCollapseCost_t::GetSilhouetteLossAngle()
{
} /* size: 0 */

// <05E82331> ../public/meshutils/hullivr.h:37
void HullIVRVertexData_t::HullIVRVertexData_t()
{
} /* size: 0 */

// <05E82315> ../public/meshutils/hullivr.h:37
inline void HullIVRVertexData_t::HullIVRVertexData_t()
{
} /* size: 0 */

// <05E5D9B8> ../public/meshutils/hullivr.h:37
inline void HullIVRVertexData_t::operator=(const HullIVRVertexData_t &)
{
} /* size: 0 */

// <05E22317> ../public/meshutils/hullivr.h:37
// member functions: 3
// member variables: 4
// struct size: 48
struct HullIVRVertexData_t {
	/* ../public/meshutils/hullivr.h:41 */
	enum PlaceInQueueSpecialEnum_t {
		NOT_IN_QUEUE_YET = -1,
		LOCKED_OUT_OF_QUEUE = -2,
	};
	Vector m_vPosition; /* 0 12 */
	int m_nPlaceInQueue; /* 12 4 */
	HullIVRCollapseCost_t m_CollapseCost; /* 16 20 */
	HullIVRHole_t * m_pHole; /* 40 8 */
	HullIVRVertexData_t& operator=(HullIVRVertexData_t* , const HullIVRVertexData_t& );
	/* ../public/meshutils/hullivr.h:190 */
	void SetHoleVerts<CHullIvrVertRing>(HullIVRVertexData_t* , const CHullIvrVertRing& );
	void HullIVRVertexData_t(HullIVRVertexData_t* );
};

// <05E22530> ../public/meshutils/hullivr.h:58
// member variable: 1
// struct size: 4
struct HullIVRFaceData_t {
	int m_nIndex; /* 0 4 */
};

// <05E2E9EF> ../public/meshutils/hullivr.h:68
// member function: 1
// struct size: 1
struct DefaultHashFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> {
	/* ../public/meshutils/hullivr.h:70 */
	unsigned int operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>, const VertexHandle_t& );
};

// <05E82E1D> ../public/meshutils/hullivr.h:70
// variable: 1
inline void operator()(const DefaultHashFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ver this, const VertexHandle_t& s)
{
	uint32 nKey; // 72
} /* size: 0, variables: 1 */

// <05E223EF> ../public/meshutils/hullivr.h:79
// member functions: 8
// member variable: 1
// struct size: 4
struct HullIVRHole_t {
	/* ../public/meshutils/hullivr.h:83 */
	struct Tri_t {
		VertexHandle_t vh[3]; /* 0 48 */
	};
	int nVerts; /* 0 4 */
	/* ../public/meshutils/hullivr.h:87 */
	Tri_t* GetTris(HullIVRHole_t* );
	/* ../public/meshutils/hullivr.h:88 */
	int NumTris(const HullIVRHole_t* );
	/* ../public/meshutils/hullivr.h:89 */
	int NumVerts(const HullIVRHole_t* );
	/* ../public/meshutils/hullivr.h:90 */
	VertexHandle_t* GetVerts(HullIVRHole_t* );
	/* ../public/meshutils/hullivr.h:91 */
	Tri_t* GetTrisEnd(HullIVRHole_t* );
	/* ../public/meshutils/hullivr.h:92 */
	void Dump(HullIVRHole_t* );
	/* ../public/meshutils/hullivr.h:94 */
	void* operator new(size_t, int);
	/* ../public/meshutils/hullivr.h:102 */
	void operator delete(void* );
};

// <05E82E04> ../public/meshutils/hullivr.h:87
inline void HullIVRHole_t::GetTris()
{
} /* size: 0 */

// <05E82DEB> ../public/meshutils/hullivr.h:88
inline void HullIVRHole_t::NumTris()
{
} /* size: 0 */

// <05E82DD2> ../public/meshutils/hullivr.h:89
inline void HullIVRHole_t::NumVerts()
{
} /* size: 0 */

// <05E82DB9> ../public/meshutils/hullivr.h:90
inline void HullIVRHole_t::GetVerts()
{
} /* size: 0 */

// <05E82DA0> ../public/meshutils/hullivr.h:91
inline void HullIVRHole_t::GetTrisEnd()
{
} /* size: 0 */

// <05E2EB16> ../public/meshutils/hullivr.h:106
// member functions: 44
// member variables: 4
// static member variable: 1
// class size: 360
class CHullIVR : public CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> {
	/* ../public/meshutils/hullivr.h:124 */
	struct VertexOp_t {
		/* ../public/meshutils/hullivr.h:126 */
		bool operator()(VertexOp_t* , const VertexHandle_t& , const VertexHandle_t& , CHullIVR* );
		/* ../public/meshutils/hullivr.h:130 */
		void SetIndex(const VertexHandle_t& , int, CHullIVR* );
	};
	/* ../public/meshutils/hullivr.h:135 */
	struct VertexSet_t {
		float flDisplacement; /* 0 4 */
		CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector, DefaultHashFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector>, int> > verts; /* 8 32 */
		void ~VertexSet_t(VertexSet_t* );
		void VertexSet_t(VertexSet_t* );
	};
	/* ../public/meshutils/hullivr.h:145 */
	class COpMeshBuilder {
		/* ../public/meshutils/hullivr.h:148 */
		void COpMeshBuilder(COpMeshBuilder* , const qhConvex* , CHullIVR* );
	protected:
		/* ../public/meshutils/hullivr.h:159 */
		bool AddConvexFace(COpMeshBuilder* , const qhFace* );
		/* ../public/meshutils/hullivr.h:160 */
		VertexHandle_t MapVert(COpMeshBuilder* , qhVertex* );
		CHullIVR * m_pMesh; /* 0 8 */
		CUtlHashtable<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, DefaultHashFunctor<qhVertex*>, DefaultEqualFunctor<qhVertex*>, undefined_t, CUtlMemory<CUtlHashtableEntry<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, int> > m_mapVert; /* 8 32 */
		void ~COpMeshBuilder(COpMeshBuilder* );
	};
public:
	/* class CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t> <ancestor>; */ /* 0 288 */
	/* ../public/meshutils/hullivr.h:109 */
	void CHullIVR(CHullIVR* , const RnHullSimplificationParams_t* , const qhConvex* );
	/* ../public/meshutils/hullivr.h:110 */
	void ~CHullIVR(CHullIVR* );
	/* ../public/meshutils/hullivr.h:112 */
	qhConvex* CreateConvex(CHullIVR* );
	/* ../public/meshutils/hullivr.h:114 */
	bool Failed(const CHullIVR* );
	/* ../public/meshutils/hullivr.h:115 */
	bool CompareCost(const CHullIVR* , const VertexHandle_t& , const VertexHandle_t& );
protected:
	/* ../public/meshutils/hullivr.h:117 */
	void StraightenAllFaces(CHullIVR* );
	/* ../public/meshutils/hullivr.h:119 */
	float StraightenFaces(CHullIVR* , const FaceHandle_t* , int, const Vector& , CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Component);
	static struct HullIVRVertexData_t s_DefaultVertexData; /* 0 0 */
	/* ../public/meshutils/hullivr.h:140 */
	bool VertexSetLess(VertexSet_t* const& , VertexSet_t* const& );
	/* ../public/meshutils/hullivr.h:168 */
	void Revaluate(CHullIVR* , const VertexHandle_t& );
	/* ../public/meshutils/hullivr.h:122 */
	typedef struct Tri_t Tri_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/hullivr.h:170 */
	Tri_t* Triangulate(CHullIVR* , const VertexHandle_t* , int, Tri_t* );
	/* ../public/meshutils/hullivr.h:171 */
	const Vector& GetPos(const CHullIVR* , const VertexHandle_t& );
	/* ../public/meshutils/hullivr.h:172 */
	Vector GetFaceOuterProduct(const CHullIVR* , FaceHandle_t);
	/* ../public/meshutils/hullivr.h:174 */
	int ReduceVertices(CHullIVR* );
	/* ../public/meshutils/hullivr.h:175 */
	bool ReduceVertex(CHullIVR* , VertexHandle_t);
	/* ../public/meshutils/hullivr.h:176 */
	void SaveObj(CHullIVR* , const char* );
	/* ../public/meshutils/hullivr.h:178 */
	float GetAcceptableSilhouetteLossAngle(const CHullIVR* );
	/* ../public/meshutils/hullivr.h:179 */
	float GetAcceptableSilhouetteLossDist(const CHullIVR* );
	RnHullSimplificationParams_t m_Params; /* 288 24 */
	CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, CHullIVR::VertexOp_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, int>, CHullIVR::VertexOp_t, CHullIVR*> m_Queue; /* 312 40 */
	bool m_bFailed; /* 352 1 */
	/* ../public/meshutils/hullivr.h:208 */
	void GetFaceVertices<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> >(const CHullIVR* , FaceHandle_t, CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:);
	void CHullIVR(class CHullIVR *, const class RnHullSimplificationParams_t  *, const class qhConvex  *); /* linkage=_ZN8CHullIVRC4EPK28RnHullSimplificationParams_tPK8qhConvex */
	void ~CHullIVR(class CHullIVR *); /* linkage=_ZN8CHullIVRD4Ev */
	class qhConvex * CreateConvex(class CHullIVR *); /* linkage=_ZN8CHullIVR12CreateConvexEv */
	bool Failed(const class CHullIVR  *); /* linkage=_ZNK8CHullIVR6FailedEv */
	bool CompareCost(const class CHullIVR  *, const VertexHandle_t  &, const VertexHandle_t  &); /* linkage=_ZNK8CHullIVR11CompareCostERKN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tESA_ */
	void StraightenAllFaces(class CHullIVR *); /* linkage=_ZN8CHullIVR18StraightenAllFacesEv */
	float StraightenFaces(class CHullIVR *, const FaceHandle_t  *, int, const class Vector  &, class CUtlHashtable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Component); /* linkage=_ZN8CHullIVR15StraightenFacesEPKN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE6Face_tEE32ComponentHandleWithListPointer_tEiRK6VectorR13CUtlHashtableINS0_INS5_8Vertex_tEE32ComponentHandleWithListPointer_tESB_18DefaultHashFunctorISH_E19DefaultEqualFunctorISH_E11undefined_t10CUtlMemoryI18CUtlHashtableEntryISH_SB_EiEE */
	bool VertexSetLess(class VertexSet_t * const &, class VertexSet_t * const &); /* linkage=_ZN8CHullIVR13VertexSetLessERKPNS_11VertexSet_tES3_ */
	void Revaluate(class CHullIVR *, const VertexHandle_t  &); /* linkage=_ZN8CHullIVR9RevaluateERKN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE */
	/* <5e86a74> meshutils/hullivr.cpp:309 */
	Tri_t * Triangulate(class CHullIVR *, const VertexHandle_t  *, int, Tri_t *); /* linkage=_ZN8CHullIVR11TriangulateEPKN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEiPN13HullIVRHole_t5Tri_tE */
	const class Vector  & GetPos(const class CHullIVR  *, const VertexHandle_t  &); /* linkage=_ZNK8CHullIVR6GetPosERKN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE */
	class Vector GetFaceOuterProduct(const class CHullIVR  *, FaceHandle_t); /* linkage=_ZNK8CHullIVR19GetFaceOuterProductEN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE6Face_tEE32ComponentHandleWithListPointer_tE */
	int ReduceVertices(class CHullIVR *); /* linkage=_ZN8CHullIVR14ReduceVerticesEv */
	bool ReduceVertex(class CHullIVR *, VertexHandle_t); /* linkage=_ZN8CHullIVR12ReduceVertexEN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE */
	void SaveObj(class CHullIVR *, const char  *); /* linkage=_ZN8CHullIVR7SaveObjEPKc */
	float GetAcceptableSilhouetteLossAngle(const class CHullIVR  *); /* linkage=_ZNK8CHullIVR32GetAcceptableSilhouetteLossAngleEv */
	float GetAcceptableSilhouetteLossDist(const class CHullIVR  *); /* linkage=_ZNK8CHullIVR31GetAcceptableSilhouetteLossDistEv */
	void GetFaceVertices<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> >(const class CHullIVR  *, FaceHandle_t, class CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:); /* linkage=_ZNK8CHullIVR15GetFaceVerticesI23CUtlVectorFixedGrowableIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tELm8EEEEvNS2_INS7_6Face_tEE32ComponentHandleWithListPointer_tERT_ */
};

// <05E82CEA> ../public/meshutils/hullivr.h:126
inline void VertexOp_t::operator(const VertexHandle_t& lhs, const VertexHandle_t& rhs, CHullIVR* pMesh)
{
} /* size: 0 */

// <05E82CBB> ../public/meshutils/hullivr.h:130
inline void SetIndex(const VertexHandle_t& heapElement, int nNewIndex, CHullIVR* pMesh)
{
} /* size: 0 */

// <05E75747> ../public/meshutils/hullivr.h:135
void VertexSet_t::VertexSet_t()
{
} /* size: 0 */

// <05E7572B> ../public/meshutils/hullivr.h:135
inline void VertexSet_t::VertexSet_t()
{
} /* size: 0 */

// <05E75714> ../public/meshutils/hullivr.h:135
void VertexSet_t::~VertexSet_t()
{
} /* size: 0 */

// <05E756F8> ../public/meshutils/hullivr.h:135
inline void VertexSet_t::~VertexSet_t()
{
} /* size: 0 */

// <05E82C82> ../public/meshutils/hullivr.h:140
void VertexSetLess(VertexSet_t* const& l, VertexSet_t* const& r)
{
} /* size: 21 */

// <05E8159C> ../public/meshutils/hullivr.h:145
void COpMeshBuilder::~COpMeshBuilder()
{
} /* size: 0 */

// <05E81580> ../public/meshutils/hullivr.h:145
inline void COpMeshBuilder::~COpMeshBuilder()
{
} /* size: 0 */

// <05E82C5E> ../public/meshutils/hullivr.h:171
inline void CHullIVR::GetPos(const VertexHandle_t& vh)
{
} /* size: 0 */

// <05E82C45> ../public/meshutils/hullivr.h:178
inline void CHullIVR::GetAcceptableSilhouetteLossAngle()
{
} /* size: 0 */

// <05E82C2C> ../public/meshutils/hullivr.h:179
inline void CHullIVR::GetAcceptableSilhouetteLossDist()
{
} /* size: 0 */

// <05C75AE0> ../public/meshutils/hullivr.h:187
qhConvex* SimplifyIVR(const RnHullSimplificationParams_t *, const qhConvex *)
{
} /* size: 0 */

// <05E6C2B9> ../public/meshutils/hullivr.h:190
// variable: 1
inline void HullIVRVertexData_t::SetHoleVerts<CHullIvrVertRing>(const CHullIvrVertRing& verts)
{
	{
		int i; // 202
	}
} /* size: 0 */

// <05E6B550> ../public/meshutils/hullivr.h:208
// variables: 3
// function calls: 46
void GetFaceVertices<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 8> CHullIVR::>(FaceHandle_t fh, CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: out)
{
	HalfEdgeHandle_t hStartFaceEdge; // 210
	HalfEdgeHandle_t hCurrentFaceEdge; // 211
	{
		VertexHandle_t vh; // 214
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 480
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5491
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::InvalidHandle(); // 1062
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::InvalidVertex(); // 5493
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetEndVertexConnectedToEdge(
						HalfEdgeHandle_t hHalfEdge);  // 214
		NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this); // 1196
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this,
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
		Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon this); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Co this,
				const ComponentHandleWithListPointer_t& src);  // 215
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponentIndex(
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t> this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdg this,
				int i);  // 480
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::GetComponent(
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5592
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::InvalidHandle(); // 1072
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::InvalidHalfEdge(); // 5597
		CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetNextEdgeInFaceLoop(
					HalfEdgeHandle_t hEdge);  // 216
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::Co this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t> this,
			int i);  // 480
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 1401
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Face(
		FaceHandle_t faceHandle);  // 5578
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::HalfEdge_t>::InvalidHandle(); // 1072
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::InvalidHalfEdge(); // 5580
	CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::GetFirstEdgeInFaceLoop(
				FaceHandle_t hFace);  // 210
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 217
} /* size: 711, variables: 2, inline expansions: 13 (570 bytes) */

