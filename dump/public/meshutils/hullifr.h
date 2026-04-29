
//
// public/meshutils/hullifr.h
//
//	referenced by: libengine2.so
//
//	functions: 25
//	class: 1
//	structs: 7
//

// <05F0769F> ../public/meshutils/hullifr.h:21
void HullIFREdgeDissolveCost_t::HullIFREdgeDissolveCost_t()
{
} /* size: 0 */

// <05F07683> ../public/meshutils/hullifr.h:21
inline void HullIFREdgeDissolveCost_t::HullIFREdgeDissolveCost_t()
{
} /* size: 0 */

// <05EFF47B> ../public/meshutils/hullifr.h:21
inline void HullIFREdgeDissolveCost_t::operator=(const HullIFREdgeDissolveCost_t &)
{
} /* size: 0 */

// <05EB30F4> ../public/meshutils/hullifr.h:21
// member functions: 2
// member variables: 5
// struct size: 32
struct HullIFREdgeDissolveCost_t {
	float flCollapseAngleSin; /* 0 4 */
	float flMaxPlaneDiff; /* 4 4 */
	RnPlane_t m_FittedPlane; /* 8 16 */
	float flDisplacementVolume; /* 24 4 */
	int8 nCollapseAngleBucket; /* 28 1 */
	HullIFREdgeDissolveCost_t& operator=(HullIFREdgeDissolveCost_t* , const HullIFREdgeDissolveCost_t& );
	void HullIFREdgeDissolveCost_t(HullIFREdgeDissolveCost_t* );
};

// <05EB318F> ../public/meshutils/hullifr.h:34
// member variable: 1
// struct size: 4
struct HullIFRVertexData_t {
	int m_nSourceVert; /* 0 4 */
};

// <05F083FE> ../public/meshutils/hullifr.h:42
inline void CSurfaceFitter::operator=(CSurfaceFitter &)
{
} /* size: 0 */

// <05EFB2F7> ../public/meshutils/hullifr.h:42
inline void CSurfaceFitter::operator=(const CSurfaceFitter &)
{
} /* size: 0 */

// <05EB31B1> ../public/meshutils/hullifr.h:42
// member functions: 8
// member variables: 4
// struct size: 52
struct CSurfaceFitter {
	/* ../public/meshutils/hullifr.h:44 */
	void CSurfaceFitter(CSurfaceFitter* );
	/* ../public/meshutils/hullifr.h:45 */
	void CSurfaceFitter(CSurfaceFitter* , const Vector& , const Vector& , const Vector& );
	/* ../public/meshutils/hullifr.h:46 */
	RnPlane_t GetBestFitPlane(const CSurfaceFitter* );
	/* ../public/meshutils/hullifr.h:47 */
	RnPlane_t GetBestFitPlaneLSq(const CSurfaceFitter* );
	/* ../public/meshutils/hullifr.h:48 */
	RnPlane_t GetAveragePlane(const CSurfaceFitter* );
	Vector m_vSumArea; /* 0 12 */
	float m_flSumArea; /* 12 4 */
	Vector m_vCenter; /* 16 12 */
	SymMatrix3<float> m_Momenta; /* 28 24 */
	/* ../public/meshutils/hullifr.h:54 */
	SymMatrix3<float> GetMomentaAt(const CSurfaceFitter* , const Vector& );
	/* ../public/meshutils/hullifr.h:52 */
	typedef float Real;
	CSurfaceFitter& operator=(CSurfaceFitter* , const CSurfaceFitter& );
	CSurfaceFitter& operator=(CSurfaceFitter* , CSurfaceFitter& );
};

// <05F08DCB> ../public/meshutils/hullifr.h:44
void CSurfaceFitter::CSurfaceFitter()
{
} /* size: 0 */

// <05F08DB2> ../public/meshutils/hullifr.h:44
inline void CSurfaceFitter::CSurfaceFitter()
{
} /* size: 0 */

// <05F08D8D> ../public/meshutils/hullifr.h:54
inline void CSurfaceFitter::GetMomentaAt(const Vector& vWhere)
{
} /* size: 0 */

// <05F021F8> ../public/meshutils/hullifr.h:80
void HullIFRFaceData_t::~HullIFRFaceData_t()
{
} /* size: 0 */

// <05F021DC> ../public/meshutils/hullifr.h:80
inline void HullIFRFaceData_t::~HullIFRFaceData_t()
{
} /* size: 0 */

// <05EF048C> ../public/meshutils/hullifr.h:80
void HullIFRFaceData_t::HullIFRFaceData_t()
{
} /* size: 0 */

// <05EF0470> ../public/meshutils/hullifr.h:80
inline void HullIFRFaceData_t::HullIFRFaceData_t()
{
} /* size: 0 */

// <05EE6A0A> ../public/meshutils/hullifr.h:80
inline void HullIFRFaceData_t::operator=(const HullIFRFaceData_t &)
{
} /* size: 0 */

// <05EDC1F9> ../public/meshutils/hullifr.h:80
void HullIFRFaceData_t::HullIFRFaceData_t(const HullIFRFaceData_t &)
{
} /* size: 0 */

// <05EDC1D8> ../public/meshutils/hullifr.h:80
inline void HullIFRFaceData_t::HullIFRFaceData_t(const HullIFRFaceData_t &)
{
} /* size: 0 */

// <05EB3350> ../public/meshutils/hullifr.h:80
// member functions: 4
// member variables: 3
// struct size: 104
struct HullIFRFaceData_t {
	RnPlane_t m_FitPlane; /* 0 16 */
	CSurfaceFitter m_Fitter; /* 16 52 */
	CUtlVector<int, CUtlMemory<int, int> > m_SourceTris; /* 72 32 */
	void HullIFRFaceData_t(HullIFRFaceData_t* , const HullIFRFaceData_t& );
	HullIFRFaceData_t& operator=(HullIFRFaceData_t* , const HullIFRFaceData_t& );
	void HullIFRFaceData_t(HullIFRFaceData_t* );
	void ~HullIFRFaceData_t(HullIFRFaceData_t* );
};

// <05EE13FA> ../public/meshutils/hullifr.h:92
inline void HullIFRHalfEdgeData_t::operator=(const HullIFRHalfEdgeData_t &)
{
} /* size: 0 */

// <05EB3408> ../public/meshutils/hullifr.h:92
// member functions: 3
// member variables: 3
// struct size: 40
struct HullIFRHalfEdgeData_t {
	int m_nPlaceInDissolveQueue; /* 0 4 */
	HullIFREdgeDissolveCost_t m_DissolveCost; /* 4 32 */
	int m_nDebugIndex; /* 36 4 */
	/* ../public/meshutils/hullifr.h:104 */
	void HullIFRHalfEdgeData_t(HullIFRHalfEdgeData_t* );
	/* ../public/meshutils/hullifr.h:105 */
	void HullIFRHalfEdgeData_t(HullIFRHalfEdgeData_t* , const HullIFRHalfEdgeData_t& );
	HullIFRHalfEdgeData_t& operator=(HullIFRHalfEdgeData_t* , const HullIFRHalfEdgeData_t& );
};

// <05EB56DC> ../public/meshutils/hullifr.h:111
// member functions: 2
// member variable: 1
// struct size: 12
struct HullIfrTriangle_t {
	int v[3]; /* 0 12 */
	/* ../public/meshutils/hullifr.h:114 */
	void HullIfrTriangle_t(HullIfrTriangle_t* );
	/* ../public/meshutils/hullifr.h:115 */
	void HullIfrTriangle_t(HullIfrTriangle_t* , int, int, int);
};

// <05EE45D3> ../public/meshutils/hullifr.h:122
void HullIfrSourceTriangle_t::HullIfrSourceTriangle_t()
{
} /* size: 0 */

// <05EE45B7> ../public/meshutils/hullifr.h:122
inline void HullIfrSourceTriangle_t::HullIfrSourceTriangle_t()
{
} /* size: 0 */

// <05EB575A> ../public/meshutils/hullifr.h:122
// member function: 1
// member variables: 3
// struct size: 80
struct HullIfrSourceTriangle_t {
	HullIfrTriangle_t tri; /* 0 12 */
	CSurfaceFitter fit; /* 12 52 */
	RnPlane_t plane; /* 64 16 */
	void HullIfrSourceTriangle_t(HullIfrSourceTriangle_t* );
};

// <05EBFB15> ../public/meshutils/hullifr.h:142
// member functions: 72
// member variables: 15
// static member variable: 1
// class size: 536
class CHullIFR : public CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t> {
	/* ../public/meshutils/hullifr.h:157 */
	struct HalfEdgeOp_t {
		/* ../public/meshutils/hullifr.h:159 */
		bool operator()(HalfEdgeOp_t* , const HalfEdgeHandle_t& , const HalfEdgeHandle_t& , CHullIFR* );
		/* ../public/meshutils/hullifr.h:163 */
		void SetIndex(const HalfEdgeHandle_t& , int, CHullIFR* );
	};
	/* ../public/meshutils/hullifr.h:169 */
	class COpMeshBuilder {
		/* ../public/meshutils/hullifr.h:172 */
		void COpMeshBuilder(COpMeshBuilder* , const qhConvex* , CHullIFR* );
	protected:
		/* ../public/meshutils/hullifr.h:176 */
		bool ProcessFace(COpMeshBuilder* , const qhFace* );
		/* ../public/meshutils/hullifr.h:178 */
		VertexHandle_t MapVert(COpMeshBuilder* , qhVertex* );
		CHullIFR * m_pMesh; /* 0 8 */
		CUtlHashtable<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, DefaultHashFunctor<const qhVertex*>, DefaultEqualFunctor<const qhVertex*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, int> > m_mapVert; /* 8 32 */
		void ~COpMeshBuilder(COpMeshBuilder* );
	};
public:
	/* class CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t> <ancestor>; */ /* 0 384 */
	/* ../public/meshutils/hullifr.h:145 */
	void CHullIFR(CHullIFR* , const RnHullSimplificationParams_t* , const qhConvex* );
	/* ../public/meshutils/hullifr.h:146 */
	void ~CHullIFR(CHullIFR* );
	/* ../public/meshutils/hullifr.h:148 */
	void SetGeoView(CHullIFR* , CGeoViewBuffer* );
	/* ../public/meshutils/hullifr.h:149 */
	bool Run(CHullIFR* );
	/* ../public/meshutils/hullifr.h:151 */
	qhConvex* GetConvex(CHullIFR* );
	/* ../public/meshutils/hullifr.h:152 */
	qhConvex* TakeConvex(CHullIFR* );
	/* ../public/meshutils/hullifr.h:154 */
	bool CompareCost(const CHullIFR* , const HalfEdgeHandle_t& , const HalfEdgeHandle_t& );
protected:
	static struct HullIFRVertexData_t s_DefaultVertexData; /* 0 0 */
	/* ../public/meshutils/hullifr.h:188 */
	CSurfaceFitter ComputeTriangleFitter(const CHullIFR* , const HullIfrTriangle_t& );
	/* ../public/meshutils/hullifr.h:189 */
	float TriPlaneError(const CHullIFR* , int, const RnPlane_t& );
	/* ../public/meshutils/hullifr.h:190 */
	HullIFRFaceData_t Combine(const CHullIFR* , const HullIFRFaceData_t& , const HullIFRFaceData_t& );
	/* ../public/meshutils/hullifr.h:191 */
	HullIFREdgeDissolveCost_t ComputeMergeCost(const CHullIFR* , FaceHandle_t, FaceHandle_t);
	/* ../public/meshutils/hullifr.h:192 */
	float ComputePushBack(const CHullIFR* , const RnPlane_t& , FaceHandle_t, FaceHandle_t, float);
	/* ../public/meshutils/hullifr.h:193 */
	float ComputeVertexPushBack(const CHullIFR* , const RnPlane_t& , const RnPlane_t& , const RnPlane_t& , float, GJKSimplexCache_t& );
	/* ../public/meshutils/hullifr.h:194 */
	HullIFREdgeDissolveCost_t ComputeMergeCost(CHullIFR* , FullEdgeHandle_t, HalfEdgeHandle_t& , HalfEdgeHandle_t& );
	/* ../public/meshutils/hullifr.h:195 */
	void RemoveFaceLoopFromEdgeQueue(CHullIFR* , EdgeDissolveQueue_t& , HalfEdgeHandle_t);
	/* ../public/meshutils/hullifr.h:186 */
	typedef struct CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t, CHullIFR::HalfEdgeOp_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t, int>, CHullIFR::HalfEdgeOp_t, CHullIFR*> EdgeDissolveQueue_t;
	/* ../public/meshutils/hullifr.h:196 */
	bool IsConvexTooComplex(CHullIFR* );
	/* ../public/meshutils/hullifr.h:197 */
	void Validate(CHullIFR* );
	/* ../public/meshutils/hullifr.h:198 */
	Range_t GetTriPlaneRange(const CHullIFR* , const CUtlVector<int, CUtlMemory<int, int> >& , const RnPlane_t& );
	/* ../public/meshutils/hullifr.h:199 */
	bool MergeFaces(CHullIFR* , EdgeDissolveQueue_t& );
	/* ../public/meshutils/hullifr.h:200 */
	bool CollapseEdges(CHullIFR* );
	/* ../public/meshutils/hullifr.h:202 */
	void LogSource(CHullIFR* );
	/* ../public/meshutils/hullifr.h:203 */
	void Log(CHullIFR* , const char* , VertexColor_t);
	/* ../public/meshutils/hullifr.h:204 */
	void Log(CHullIFR* , const HullIFRFaceData_t* , const char* , VertexColor_t);
	/* ../public/meshutils/hullifr.h:205 */
	void Log(CHullIFR* , HalfEdgeHandle_t, const char* , VertexColor_t);
	/* ../public/meshutils/hullifr.h:207 */
	void ValidateEdges(CHullIFR* , EdgeDissolveQueue_t& );
	/* ../public/meshutils/hullifr.h:208 */
	void ValidateEdge(CHullIFR* , FullEdgeHandle_t);
	/* ../public/meshutils/hullifr.h:209 */
	void ValidateFaces(CHullIFR* );
	/* ../public/meshutils/hullifr.h:210 */
	void ValidateFace(CHullIFR* , FaceHandle_t);
	/* ../public/meshutils/hullifr.h:211 */
	bool TryDissolveEdge(CHullIFR* , EdgeDissolveQueue_t& , HalfEdgeHandle_t);
	/* ../public/meshutils/hullifr.h:212 */
	bool TrySyncConvex(CHullIFR* );
	/* ../public/meshutils/hullifr.h:214 */
	void InitEdgeDissolveQueue(CHullIFR* , EdgeDissolveQueue_t& );
	/* ../public/meshutils/hullifr.h:215 */
	RnPlane_t GetMinMomentumPlane(const CHullIFR* , const HullIFRFaceData_t* , const HullIFRFaceData_t* );
	/* ../public/meshutils/hullifr.h:216 */
	Vector GetNormalMomentum(const CHullIFR* , const HullIFRFaceData_t& , const Vector& );
	RnHullSimplificationParams_t m_Params; /* 384 24 */
	CUtlVector<Vector, CUtlMemory<Vector, int> > m_SourceVerts; /* 408 32 */
	CUtlVector<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> > m_SourceTris; /* 440 32 */
	Vector m_vOrigin; /* 472 12 */
	float m_flScale; /* 484 4 */
	float m_flInscribedRadius; /* 488 4 */
	float m_flPrecisionAngleSin; /* 492 4 */
	qhConvex * m_pConvex; /* 496 8 */
	bool m_bConvexInSync; /* 504 1 */
	CGeoViewBuffer * m_pGeoView; /* 512 8 */
	int m_nReduceEdgeAttempts; /* 520 4 */
	int m_nRefitAttempts; /* 524 4 */
	float m_flCollapseAngle; /* 528 4 */
	bool m_bPushBackEnabled; /* 532 1 */
	void CHullIFR(class CHullIFR *, const class RnHullSimplificationParams_t  *, const class qhConvex  *); /* linkage=_ZN8CHullIFRC4EPK28RnHullSimplificationParams_tPK8qhConvex */
	void ~CHullIFR(class CHullIFR *); /* linkage=_ZN8CHullIFRD4Ev */
	void SetGeoView(class CHullIFR *, class CGeoViewBuffer *); /* linkage=_ZN8CHullIFR10SetGeoViewEP14CGeoViewBuffer */
	bool Run(class CHullIFR *); /* linkage=_ZN8CHullIFR3RunEv */
	class qhConvex * GetConvex(class CHullIFR *); /* linkage=_ZN8CHullIFR9GetConvexEv */
	class qhConvex * TakeConvex(class CHullIFR *); /* linkage=_ZN8CHullIFR10TakeConvexEv */
	bool CompareCost(const class CHullIFR  *, const HalfEdgeHandle_t  &, const HalfEdgeHandle_t  &); /* linkage=_ZNK8CHullIFR11CompareCostERKN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE10HalfEdge_tEE32ComponentHandleWithListPointer_tESA_ */
	/* <5f0d902> meshutils/hullifr.cpp:786 */
	class CSurfaceFitter ComputeTriangleFitter(const class CHullIFR  *, const class HullIfrTriangle_t  &); /* linkage=_ZNK8CHullIFR21ComputeTriangleFitterERK17HullIfrTriangle_t */
	float TriPlaneError(const class CHullIFR  *, int, const class RnPlane_t  &); /* linkage=_ZNK8CHullIFR13TriPlaneErrorEiRK9RnPlane_t */
	class HullIFRFaceData_t Combine(const class CHullIFR  *, const class HullIFRFaceData_t  &, const class HullIFRFaceData_t  &); /* linkage=_ZNK8CHullIFR7CombineERK17HullIFRFaceData_tS2_ */
	class HullIFREdgeDissolveCost_t ComputeMergeCost(const class CHullIFR  *, FaceHandle_t, FaceHandle_t); /* linkage=_ZNK8CHullIFR16ComputeMergeCostEN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE6Face_tEE32ComponentHandleWithListPointer_tES8_ */
	float ComputePushBack(const class CHullIFR  *, const class RnPlane_t  &, FaceHandle_t, FaceHandle_t, float); /* linkage=_ZNK8CHullIFR15ComputePushBackERK9RnPlane_tN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE6Face_tEE32ComponentHandleWithListPointer_tESB_f */
	float ComputeVertexPushBack(const class CHullIFR  *, const class RnPlane_t  &, const class RnPlane_t  &, const class RnPlane_t  &, float, class GJKSimplexCache_t &); /* linkage=_ZNK8CHullIFR21ComputeVertexPushBackERK9RnPlane_tS2_S2_fR17GJKSimplexCache_t */
	class HullIFREdgeDissolveCost_t ComputeMergeCost(class CHullIFR *, class FullEdgeHandle_t, HalfEdgeHandle_t &, HalfEdgeHandle_t &); /* linkage=_ZN8CHullIFR16ComputeMergeCostEN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE16FullEdgeHandle_tERN22CHalfEdgeComponentListINS4_10HalfEdge_tEE32ComponentHandleWithListPointer_tESA_ */
	void RemoveFaceLoopFromEdgeQueue(class CHullIFR *, EdgeDissolveQueue_t &, HalfEdgeHandle_t); /* linkage=_ZN8CHullIFR27RemoveFaceLoopFromEdgeQueueER17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE10HalfEdge_tEE32ComponentHandleWithListPointer_tENS_12HalfEdgeOp_tE10CUtlMemoryIS9_iESA_PS_ES9_ */
	/* <5f0eb90> meshutils/hullifr.cpp:555 */
	bool IsConvexTooComplex(class CHullIFR *); /* linkage=_ZN8CHullIFR18IsConvexTooComplexEv */
	void Validate(class CHullIFR *); /* linkage=_ZN8CHullIFR8ValidateEv */
	class Range_t GetTriPlaneRange(const class CHullIFR  *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class RnPlane_t  &); /* linkage=_ZNK8CHullIFR16GetTriPlaneRangeERK10CUtlVectorIi10CUtlMemoryIiiEERK9RnPlane_t */
	bool MergeFaces(class CHullIFR *, EdgeDissolveQueue_t &); /* linkage=_ZN8CHullIFR10MergeFacesER17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE10HalfEdge_tEE32ComponentHandleWithListPointer_tENS_12HalfEdgeOp_tE10CUtlMemoryIS9_iESA_PS_E */
	/* <5f0d898> meshutils/hullifr.cpp:328 */
	bool CollapseEdges(class CHullIFR *); /* linkage=_ZN8CHullIFR13CollapseEdgesEv */
	/* <5f0f33c> meshutils/hullifr.cpp:344 */
	void LogSource(class CHullIFR *); /* linkage=_ZN8CHullIFR9LogSourceEv */
	void Log(class CHullIFR *, const char  *, class VertexColor_t); /* linkage=_ZN8CHullIFR3LogEPKc13VertexColor_t */
	void Log(class CHullIFR *, const class HullIFRFaceData_t  *, const char  *, class VertexColor_t); /* linkage=_ZN8CHullIFR3LogEPK17HullIFRFaceData_tPKc13VertexColor_t */
	void Log(class CHullIFR *, HalfEdgeHandle_t, const char  *, class VertexColor_t); /* linkage=_ZN8CHullIFR3LogEN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE10HalfEdge_tEE32ComponentHandleWithListPointer_tEPKc13VertexColor_t */
	/* <5f0d8c2> meshutils/hullifr.cpp:468 */
	void ValidateEdges(class CHullIFR *, EdgeDissolveQueue_t &); /* linkage=_ZN8CHullIFR13ValidateEdgesER17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE10HalfEdge_tEE32ComponentHandleWithListPointer_tENS_12HalfEdgeOp_tE10CUtlMemoryIS9_iESA_PS_E */
	void ValidateEdge(class CHullIFR *, class FullEdgeHandle_t); /* linkage=_ZN8CHullIFR12ValidateEdgeEN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE16FullEdgeHandle_tE */
	void ValidateFaces(class CHullIFR *); /* linkage=_ZN8CHullIFR13ValidateFacesEv */
	void ValidateFace(class CHullIFR *, FaceHandle_t); /* linkage=_ZN8CHullIFR12ValidateFaceEN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE6Face_tEE32ComponentHandleWithListPointer_tE */
	bool TryDissolveEdge(class CHullIFR *, EdgeDissolveQueue_t &, HalfEdgeHandle_t); /* linkage=_ZN8CHullIFR15TryDissolveEdgeER17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE10HalfEdge_tEE32ComponentHandleWithListPointer_tENS_12HalfEdgeOp_tE10CUtlMemoryIS9_iESA_PS_ES9_ */
	/* <5f0eb47> meshutils/hullifr.cpp:236 */
	bool TrySyncConvex(class CHullIFR *); /* linkage=_ZN8CHullIFR13TrySyncConvexEv */
	void InitEdgeDissolveQueue(class CHullIFR *, EdgeDissolveQueue_t &); /* linkage=_ZN8CHullIFR21InitEdgeDissolveQueueER17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE10HalfEdge_tEE32ComponentHandleWithListPointer_tENS_12HalfEdgeOp_tE10CUtlMemoryIS9_iESA_PS_E */
	class RnPlane_t GetMinMomentumPlane(const class CHullIFR  *, const class HullIFRFaceData_t  *, const class HullIFRFaceData_t  *); /* linkage=_ZNK8CHullIFR19GetMinMomentumPlaneEPK17HullIFRFaceData_tS2_ */
	class Vector GetNormalMomentum(const class CHullIFR  *, const class HullIFRFaceData_t  &, const class Vector  &); /* linkage=_ZNK8CHullIFR17GetNormalMomentumERK17HullIFRFaceData_tRK6Vector */
};

// <05F083B0> ../public/meshutils/hullifr.h:151
inline void CHullIFR::GetConvex()
{
} /* size: 0 */

// <05F0838B> ../public/meshutils/hullifr.h:152
// variable: 1
inline void CHullIFR::TakeConvex()
{
	qhConvex* pConvex; // 152
} /* size: 0, variables: 1 */

// <05F0834E> ../public/meshutils/hullifr.h:159
inline void HalfEdgeOp_t::operator(const HalfEdgeHandle_t& lhs, const HalfEdgeHandle_t& rhs, CHullIFR* pMesh)
{
} /* size: 0 */

// <05F0831F> ../public/meshutils/hullifr.h:163
inline void SetIndex(const HalfEdgeHandle_t& heapElement, int nNewIndex, CHullIFR* pMesh)
{
} /* size: 0 */

// <05F00F2F> ../public/meshutils/hullifr.h:169
void COpMeshBuilder::~COpMeshBuilder()
{
} /* size: 0 */

// <05F00F13> ../public/meshutils/hullifr.h:169
inline void COpMeshBuilder::~COpMeshBuilder()
{
} /* size: 0 */

// <05C75ABF> ../public/meshutils/hullifr.h:238
qhConvex* SimplifyIFR(const RnHullSimplificationParams_t *, const qhConvex *)
{
} /* size: 0 */

