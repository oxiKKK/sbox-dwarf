
//
// public/meshutils/dualhull.h
//
//	referenced by: libengine2.so
//
//	functions: 9
//	class: 1
//	struct: 1
//

// <05DEEE8C> ../public/meshutils/dualhull.h:18
void CDualHullAgglomerator::~CDualHullAgglomerator()
{
} /* size: 0 */

// <05DEEE70> ../public/meshutils/dualhull.h:18
inline void CDualHullAgglomerator::~CDualHullAgglomerator()
{
} /* size: 0 */

// <05D9848C> ../public/meshutils/dualhull.h:18
// member functions: 44
// member variables: 10
// vtable entry: 1
// class size: 424
class CDualHullAgglomerator : public CFeAgglomerator {
	/* ../public/meshutils/dualhull.h:33 */
	struct CClusterInfo {
		Vector4D m_vSumPlanes; /* 0 16 */
		float m_flSumAreas; /* 16 4 */
		VertexHandle_t m_hDualVert; /* 24 16 */
		float m_flErrorMultiplier; /* 40 4 */
		/* ../public/meshutils/dualhull.h:39 */
		void Init(CClusterInfo* , const qhFace* , const Vector& );
		/* ../public/meshutils/dualhull.h:40 */
		CClusterInfo operator+(const CClusterInfo* , const CClusterInfo& );
		/* ../public/meshutils/dualhull.h:41 */
		const Vector GetNormal(const CClusterInfo* );
		/* ../public/meshutils/dualhull.h:42 */
		const Vector GetDualVert(const CClusterInfo* );
		/* ../public/meshutils/dualhull.h:43 */
		bool ConstructPlane(const CClusterInfo* , qhPlane& );
		void CClusterInfo(CClusterInfo* , const CClusterInfo& );
		CClusterInfo& operator=(CClusterInfo* , CClusterInfo& );
		void CClusterInfo(CClusterInfo* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CFeAgglomerator <ancestor>; */ /* 0 0 */
	void ~CDualHullAgglomerator(CDualHullAgglomerator* );
	void CDualHullAgglomerator(CDualHullAgglomerator* , CDualHullAgglomerator& );
	void CDualHullAgglomerator(CDualHullAgglomerator* , const CDualHullAgglomerator& );
	/* meshutils/dualhull.cpp:152 */
	void CDualHullAgglomerator(CDualHullAgglomerator* , const qhConvex* , float);
	/* meshutils/dualhull.cpp:512 */
	qhConvex* ConstructReducedPrimalHull(CDualHullAgglomerator* , uint);
	/* meshutils/dualhull.cpp:524 */
	void ComputeMergedPlanes(CDualHullAgglomerator* , CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >& , uint);
	/* ../public/meshutils/dualhull.h:25 */
	const Vector& GetCentroid(const CDualHullAgglomerator* );
protected:
	/* meshutils/dualhull.cpp:369 */
	void LinkNodes(CDualHullAgglomerator* );
	/* meshutils/dualhull.cpp:191 */
	void SetNodes(CDualHullAgglomerator* );
	/* meshutils/dualhull.cpp:220 */
	void InitDualTopo(CDualHullAgglomerator* );
	/* meshutils/dualhull.cpp:407 */
	virtual float ComputeCost(CDualHullAgglomerator* , const CCluster* , const CCluster* );
	/* meshutils/dualhull.cpp:423 */
	CClusterInfo GetClusterInfo(CDualHullAgglomerator* , int);
	/* meshutils/dualhull.cpp:586 */
	qhConvex* ConstructDualHull(CDualHullAgglomerator* , int, const CVarBitVec& );
	/* meshutils/dualhull.cpp:600 */
	qhConvex* ConstructPrimalHull(CDualHullAgglomerator* , qhConvex* );
	/* meshutils/dualhull.cpp:619 */
	int ReducePlaneCount(CDualHullAgglomerator* , uint, int& , CVarBitVec& );
	/* meshutils/dualhull.cpp:652 */
	int ReduceFlatEdges(CDualHullAgglomerator* , int& , CVarBitVec& );
	/* meshutils/dualhull.cpp:541 */
	int ComputeMergedPlanes(CDualHullAgglomerator* , CVarBitVec& , uint);
	/* meshutils/dualhull.cpp:124 */
	void LogClusters(CDualHullAgglomerator* , CGeoViewBuffer& );
	uint m_nFaceCount; /* 40 4 */
	const class qhConvex * m_pConvex; /* 48 8 */
	Vector m_vCentroid; /* 56 12 */
	CUtlVector<const qhFace*, CUtlMemory<const qhFace*, int> > m_Faces; /* 72 32 */
	CUtlVector<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> > m_ClusterInfo; /* 104 32 */
	CUtlHashtable<const qhFace*, int, PointerHashFunctor, DefaultEqualFunctor<const qhFace*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const qhFace*, int>, int> > m_FaceToIndex; /* 136 32 */
	CTopologyMesh m_DualTopo; /* 168 248 */
	uint m_nCouldNotMergeVerts; /* 416 4 */
	float m_flMaxMergeTan; /* 420 4 */
	void ~CDualHullAgglomerator(class CDualHullAgglomerator *); /* linkage=_ZN21CDualHullAgglomeratorD4Ev */
	void CDualHullAgglomerator(class CDualHullAgglomerator *, class CDualHullAgglomerator &); /* linkage=_ZN21CDualHullAgglomeratorC4EOS_ */
	void CDualHullAgglomerator(class CDualHullAgglomerator *, const class CDualHullAgglomerator  &); /* linkage=_ZN21CDualHullAgglomeratorC4ERKS_ */
	void CDualHullAgglomerator(class CDualHullAgglomerator *, const class qhConvex  *, float); /* linkage=_ZN21CDualHullAgglomeratorC4EPK8qhConvexf */
	class qhConvex * ConstructReducedPrimalHull(class CDualHullAgglomerator *, uint); /* linkage=_ZN21CDualHullAgglomerator26ConstructReducedPrimalHullEj */
	void ComputeMergedPlanes(class CDualHullAgglomerator *, class CUtlVector<qhPlane, CUtlMemory<qhPlane, int> > &, uint); /* linkage=_ZN21CDualHullAgglomerator19ComputeMergedPlanesER10CUtlVectorI7qhPlane10CUtlMemoryIS1_iEEj */
	const class Vector  & GetCentroid(const class CDualHullAgglomerator  *); /* linkage=_ZNK21CDualHullAgglomerator11GetCentroidEv */
	void LinkNodes(class CDualHullAgglomerator *); /* linkage=_ZN21CDualHullAgglomerator9LinkNodesEv */
	void SetNodes(class CDualHullAgglomerator *); /* linkage=_ZN21CDualHullAgglomerator8SetNodesEv */
	void InitDualTopo(class CDualHullAgglomerator *); /* linkage=_ZN21CDualHullAgglomerator12InitDualTopoEv */
	virtual float ComputeCost(class CDualHullAgglomerator *, const class CCluster  *, const class CCluster  *); /* linkage=_ZN21CDualHullAgglomerator11ComputeCostEPKN15CFeAgglomerator8CClusterES3_ */
	class CClusterInfo GetClusterInfo(class CDualHullAgglomerator *, int); /* linkage=_ZN21CDualHullAgglomerator14GetClusterInfoEi */
	class qhConvex * ConstructDualHull(class CDualHullAgglomerator *, int, const class CVarBitVec  &); /* linkage=_ZN21CDualHullAgglomerator17ConstructDualHullEiRK10CVarBitVec */
	class qhConvex * ConstructPrimalHull(class CDualHullAgglomerator *, class qhConvex *); /* linkage=_ZN21CDualHullAgglomerator19ConstructPrimalHullEP8qhConvex */
	/* <5e00790> meshutils/dualhull.cpp:619 */
	int ReducePlaneCount(class CDualHullAgglomerator *, uint, int &, class CVarBitVec &); /* linkage=_ZN21CDualHullAgglomerator16ReducePlaneCountEjRiR10CVarBitVec */
	int ReduceFlatEdges(class CDualHullAgglomerator *, int &, class CVarBitVec &); /* linkage=_ZN21CDualHullAgglomerator15ReduceFlatEdgesERiR10CVarBitVec */
	int ComputeMergedPlanes(class CDualHullAgglomerator *, class CVarBitVec &, uint); /* linkage=_ZN21CDualHullAgglomerator19ComputeMergedPlanesER10CVarBitVecj */
	void LogClusters(class CDualHullAgglomerator *, class CGeoViewBuffer &); /* linkage=_ZN21CDualHullAgglomerator11LogClustersER14CGeoViewBuffer */
};

// <05DFE608> ../public/meshutils/dualhull.h:25
inline void CDualHullAgglomerator::GetCentroid()
{
} /* size: 0 */

// <05DFDF53> ../public/meshutils/dualhull.h:33
void CClusterInfo::CClusterInfo()
{
} /* size: 0 */

// <05DFDF37> ../public/meshutils/dualhull.h:33
inline void CClusterInfo::CClusterInfo()
{
} /* size: 0 */

// <05DF4889> ../public/meshutils/dualhull.h:33
inline void CClusterInfo::operator=(CClusterInfo &)
{
} /* size: 0 */

// <05DF486D> ../public/meshutils/dualhull.h:33
void CClusterInfo::CClusterInfo(const CClusterInfo &)
{
} /* size: 0 */

// <05DF484C> ../public/meshutils/dualhull.h:33
inline void CClusterInfo::CClusterInfo(const CClusterInfo &)
{
} /* size: 0 */

// <05C75B01> ../public/meshutils/dualhull.h:80
qhConvex* SimplifyQem(const RnHullSimplificationParams_t *, const qhConvex *)
{
} /* size: 0 */

// <05D9D27A> ../public/meshutils/dualhull.h:87
// member functions: 2
// member variables: 3
// struct size: 12
struct SurfaceDiffSqr_t {
	float flArea; /* 0 4 */
	float flDiff; /* 4 4 */
	float flMax; /* 8 4 */
	/* ../public/meshutils/dualhull.h:92 */
	float GetAvgDiff(const SurfaceDiffSqr_t* );
	/* ../public/meshutils/dualhull.h:93 */
	SurfaceDiffSqr_t& operator+=(SurfaceDiffSqr_t* , const SurfaceDiffSqr_t& );
};

