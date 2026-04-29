
//
// public/meshutils/quickhullsimplifier.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	classes: 2
//

// <05DEE344> ../public/meshutils/quickhullsimplifier.h:34
void CQuickHullSimplifier::CQuickHullSimplifier()
{
} /* size: 0 */

// <05DEE328> ../public/meshutils/quickhullsimplifier.h:34
inline void CQuickHullSimplifier::CQuickHullSimplifier()
{
} /* size: 0 */

// <05DEE311> ../public/meshutils/quickhullsimplifier.h:34
void CQuickHullSimplifier::~CQuickHullSimplifier()
{
} /* size: 0 */

// <05DEE2F5> ../public/meshutils/quickhullsimplifier.h:34
inline void CQuickHullSimplifier::~CQuickHullSimplifier()
{
} /* size: 0 */

// <05D9F837> ../public/meshutils/quickhullsimplifier.h:34
// member functions: 10
// member variables: 3
// class size: 8,264
class CQuickHullSimplifier {
	/* ../public/meshutils/quickhullsimplifier.h:37 */
	struct Face_t {
		int m_nCluster; /* 0 4 */
		const class qhFace * m_pSourceFace; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/quickhullsimplifier.h:42 */
	struct Cluster_t {
		int m_nFaceCount; /* 0 4 */
		Vector m_vNormal; /* 4 12 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/quickhullsimplifier.h:49 */
	qhConvex* Run(CQuickHullSimplifier* , qhConvex* , int);
protected:
	/* ../public/meshutils/quickhullsimplifier.h:53 */
	uint ReassignClusters(CQuickHullSimplifier* );
	/* ../public/meshutils/quickhullsimplifier.h:56 */
	int FindBestCluster(CQuickHullSimplifier* , const Vector& );
	const class qhList<qhFace> * m_pSourceFaces; /* 0 8 */
	CUtlVectorFixedGrowable<CQuickHullSimplifier::Face_t, 256> m_Faces __attribute__((__aligned__(8))); /* 8 4128 */
	CUtlVectorFixedGrowable<CQuickHullSimplifier::Cluster_t, 256> m_Clusters __attribute__((__aligned__(8))); /* 4136 4128 */
	void ~CQuickHullSimplifier(CQuickHullSimplifier* );
	void CQuickHullSimplifier(CQuickHullSimplifier* );
	class qhConvex * Run(class CQuickHullSimplifier *, class qhConvex *, int); /* linkage=_ZN20CQuickHullSimplifier3RunEP8qhConvexi */
	uint ReassignClusters(class CQuickHullSimplifier *); /* linkage=_ZN20CQuickHullSimplifier16ReassignClustersEv */
	int FindBestCluster(class CQuickHullSimplifier *, const class Vector  &); /* linkage=_ZN20CQuickHullSimplifier15FindBestClusterERK6Vector */
	void ~CQuickHullSimplifier(class CQuickHullSimplifier *); /* linkage=_ZN20CQuickHullSimplifierD4Ev */
	void CQuickHullSimplifier(class CQuickHullSimplifier *); /* linkage=_ZN20CQuickHullSimplifierC4Ev */
} __attribute__((__aligned__(8)));

// <06106EEA> ../public/meshutils/quickhullsimplifier.h:34
// member functions: 9
// member variables: 3
// class size: 8,264
class CQuickHullSimplifier {
	/* ../public/meshutils/quickhullsimplifier.h:37 */
	struct Face_t {
		int m_nCluster; /* 0 4 */
		const class qhFace * m_pSourceFace; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/quickhullsimplifier.h:42 */
	struct Cluster_t {
		int m_nFaceCount; /* 0 4 */
		Vector m_vNormal; /* 4 12 */
		void Cluster_t(Cluster_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/quickhullsimplifier.h:49 */
	qhConvex* Run(CQuickHullSimplifier* , qhConvex* , int);
protected:
	/* ../public/meshutils/quickhullsimplifier.h:53 */
	uint ReassignClusters(CQuickHullSimplifier* );
	/* ../public/meshutils/quickhullsimplifier.h:56 */
	int FindBestCluster(CQuickHullSimplifier* , const Vector& );
	const class qhList<qhFace> * m_pSourceFaces; /* 0 8 */
	CUtlVectorFixedGrowable<CQuickHullSimplifier::Face_t, 256> m_Faces __attribute__((__aligned__(8))); /* 8 4128 */
	CUtlVectorFixedGrowable<CQuickHullSimplifier::Cluster_t, 256> m_Clusters __attribute__((__aligned__(8))); /* 4136 4128 */
	class qhConvex * Run(class CQuickHullSimplifier *, class qhConvex *, int); /* linkage=_ZN20CQuickHullSimplifier3RunEP8qhConvexi */
	uint ReassignClusters(class CQuickHullSimplifier *); /* linkage=_ZN20CQuickHullSimplifier16ReassignClustersEv */
	int FindBestCluster(class CQuickHullSimplifier *, const class Vector  &); /* linkage=_ZN20CQuickHullSimplifier15FindBestClusterERK6Vector */
	void ~CQuickHullSimplifier(class CQuickHullSimplifier *); /* linkage=_ZN20CQuickHullSimplifierD4Ev */
	void CQuickHullSimplifier(class CQuickHullSimplifier *); /* linkage=_ZN20CQuickHullSimplifierC4Ev */
} __attribute__((__aligned__(8)));

// <0610DC56> ../public/meshutils/quickhullsimplifier.h:42
void Cluster_t::Cluster_t()
{
} /* size: 0 */

// <0610DC3A> ../public/meshutils/quickhullsimplifier.h:42
inline void Cluster_t::Cluster_t()
{
} /* size: 0 */

