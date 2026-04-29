
//
// public/meshutils/quickhullbuilder.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	classes: 2
//	structs: 2
//

// <00998CC8> ../public/meshutils/quickhullbuilder.h:28
// member function: 1
// member variables: 2
// struct size: 28
struct HullSimplificationParams_t {
	/* ../public/meshutils/quickhullbuilder.h:30 */
	void HullSimplificationParams_t(HullSimplificationParams_t* );
	RnHullSimplificationParams_t m_Simpification; /* 0 24 */
	int m_nIterations; /* 24 4 */
};

// <05C7E18F> ../public/meshutils/quickhullbuilder.h:30
void HullSimplificationParams_t::HullSimplificationParams_t()
{
} /* size: 0 */

// <05C7E176> ../public/meshutils/quickhullbuilder.h:30
inline void HullSimplificationParams_t::HullSimplificationParams_t()
{
} /* size: 0 */

// <00998D21> ../public/meshutils/quickhullbuilder.h:41
// member function: 1
// member variables: 15
// struct size: 52
struct HullDecompositionParams_t {
	/* ../public/meshutils/quickhullbuilder.h:43 */
	void HullDecompositionParams_t(HullDecompositionParams_t* );
	uint m_resolution; /* 0 4 */
	int m_depth; /* 4 4 */
	float m_concavity; /* 8 4 */
	int m_planeDownsampling; /* 12 4 */
	int m_convexhullDownsampling; /* 16 4 */
	float m_alpha; /* 20 4 */
	float m_beta; /* 24 4 */
	float m_gamma; /* 28 4 */
	int m_pca; /* 32 4 */
	int m_mode; /* 36 4 */
	uint m_maxNumVerticesPerCH; /* 40 4 */
	float m_minVolumePerCH; /* 44 4 */
	bool m_convexhullApproximation; /* 48 1 */
	bool m_oclAcceleration; /* 49 1 */
	bool m_bDoublePrecision; /* 50 1 */
};

// <05C7E15F> ../public/meshutils/quickhullbuilder.h:43
void HullDecompositionParams_t::HullDecompositionParams_t()
{
} /* size: 0 */

// <05C7E146> ../public/meshutils/quickhullbuilder.h:43
inline void HullDecompositionParams_t::HullDecompositionParams_t()
{
} /* size: 0 */

// <009FED7C> ../public/meshutils/quickhullbuilder.h:101
void CQuickHullBuilder::CQuickHullBuilder()
{
} /* size: 0 */

// <009FED60> ../public/meshutils/quickhullbuilder.h:101
inline void CQuickHullBuilder::CQuickHullBuilder()
{
} /* size: 0 */

// <0099A4F9> ../public/meshutils/quickhullbuilder.h:101
// member functions: 28
// member variable: 1
// class size: 32
class CQuickHullBuilder {
	/* ../public/meshutils/quickhullbuilder.h:105 */
	void ~CQuickHullBuilder(CQuickHullBuilder* );
	/* ../public/meshutils/quickhullbuilder.h:108 */
	void Clear(CQuickHullBuilder* );
	/* ../public/meshutils/quickhullbuilder.h:111 */
	int GetNumHulls(const CQuickHullBuilder* );
	/* ../public/meshutils/quickhullbuilder.h:116 */
	const qhConvex* GetHull(const CQuickHullBuilder* , int);
	/* ../public/meshutils/quickhullbuilder.h:121 */
	qhConvex* TakeHull(CQuickHullBuilder* , int);
	/* ../public/meshutils/quickhullbuilder.h:124 */
	void TakeAllHulls(CQuickHullBuilder* , CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> >* );
	/* ../public/meshutils/quickhullbuilder.h:127 */
	bool GetHullVertics(const CQuickHullBuilder* , int, CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	/* ../public/meshutils/quickhullbuilder.h:130 */
	bool CreateHullFromConvexHullVertices(CQuickHullBuilder* , const Vector* , int);
	/* ../public/meshutils/quickhullbuilder.h:133 */
	bool CreateHullFromMeshVertices(CQuickHullBuilder* , const Vector* , int, const HullSimplificationParams_t& );
	/* ../public/meshutils/quickhullbuilder.h:136 */
	bool CreateHullsFromMeshes(CQuickHullBuilder* , const CModelMesh* const* , int, HullsFromMeshesMode_t, const HullSimplificationParams_t& );
	/* ../public/meshutils/quickhullbuilder.h:139 */
	bool CreateHullsByConvexDecomposition(CQuickHullBuilder* , const Vector* , int, const uint32* , int, const HullDecompositionParams_t& , IHullDecompositionListener_t* );
	/* ../public/meshutils/quickhullbuilder.h:142 */
	bool CreateHullsByConvexDecomposition(CQuickHullBuilder* , const CModelMesh* const* , int, const HullDecompositionParams_t& , IHullDecompositionListener_t* );
	/* ../public/meshutils/quickhullbuilder.h:145 */
	void ApplyScaleToCreatedHulls(CQuickHullBuilder* , float);
private:
	CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> > m_Hulls; /* 0 32 */
	void CQuickHullBuilder(CQuickHullBuilder* );
	void ~CQuickHullBuilder(class CQuickHullBuilder *); /* linkage=_ZN17CQuickHullBuilderD4Ev */
	/* <5c7e591> meshutils/quickhullbuilder.cpp:36 */
	void Clear(class CQuickHullBuilder *); /* linkage=_ZN17CQuickHullBuilder5ClearEv */
	int GetNumHulls(const class CQuickHullBuilder  *); /* linkage=_ZNK17CQuickHullBuilder11GetNumHullsEv */
	/* <5c7e7d0> meshutils/quickhullbuilder.cpp:52 */
	const class qhConvex  * GetHull(const class CQuickHullBuilder  *, int); /* linkage=_ZNK17CQuickHullBuilder7GetHullEi */
	class qhConvex * TakeHull(class CQuickHullBuilder *, int); /* linkage=_ZN17CQuickHullBuilder8TakeHullEi */
	void TakeAllHulls(class CQuickHullBuilder *, class CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> > *); /* linkage=_ZN17CQuickHullBuilder12TakeAllHullsEP10CUtlVectorIP8qhConvex10CUtlMemoryIS2_iEE */
	bool GetHullVertics(const class CQuickHullBuilder  *, int, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK17CQuickHullBuilder14GetHullVerticsEiP10CUtlVectorI6Vector10CUtlMemoryIS1_iEE */
	bool CreateHullFromConvexHullVertices(class CQuickHullBuilder *, const class Vector  *, int); /* linkage=_ZN17CQuickHullBuilder32CreateHullFromConvexHullVerticesEPK6Vectori */
	bool CreateHullFromMeshVertices(class CQuickHullBuilder *, const class Vector  *, int, const class HullSimplificationParams_t  &); /* linkage=_ZN17CQuickHullBuilder26CreateHullFromMeshVerticesEPK6VectoriRK26HullSimplificationParams_t */
	bool CreateHullsFromMeshes(class CQuickHullBuilder *, const class CModelMesh  * const *, int, enum HullsFromMeshesMode_t, const class HullSimplificationParams_t  &); /* linkage=_ZN17CQuickHullBuilder21CreateHullsFromMeshesEPKPK10CModelMeshi21HullsFromMeshesMode_tRK26HullSimplificationParams_t */
	bool CreateHullsByConvexDecomposition(class CQuickHullBuilder *, const class Vector  *, int, const uint32  *, int, const class HullDecompositionParams_t  &, class IHullDecompositionListener_t *); /* linkage=_ZN17CQuickHullBuilder32CreateHullsByConvexDecompositionEPK6VectoriPKjiRK25HullDecompositionParams_tP28IHullDecompositionListener_t */
	bool CreateHullsByConvexDecomposition(class CQuickHullBuilder *, const class CModelMesh  * const *, int, const class HullDecompositionParams_t  &, class IHullDecompositionListener_t *); /* linkage=_ZN17CQuickHullBuilder32CreateHullsByConvexDecompositionEPKPK10CModelMeshiRK25HullDecompositionParams_tP28IHullDecompositionListener_t */
	void ApplyScaleToCreatedHulls(class CQuickHullBuilder *, float); /* linkage=_ZN17CQuickHullBuilder24ApplyScaleToCreatedHullsEf */
	void CQuickHullBuilder(class CQuickHullBuilder *); /* linkage=_ZN17CQuickHullBuilderC4Ev */
};

// <05C324E1> ../public/meshutils/quickhullbuilder.h:101
// member functions: 27
// member variable: 1
// class size: 32
class CQuickHullBuilder {
	/* ../public/meshutils/quickhullbuilder.h:105 */
	void ~CQuickHullBuilder(CQuickHullBuilder* );
	/* ../public/meshutils/quickhullbuilder.h:108 */
	void Clear(CQuickHullBuilder* );
	/* ../public/meshutils/quickhullbuilder.h:111 */
	int GetNumHulls(const CQuickHullBuilder* );
	/* ../public/meshutils/quickhullbuilder.h:116 */
	const qhConvex* GetHull(const CQuickHullBuilder* , int);
	/* ../public/meshutils/quickhullbuilder.h:121 */
	qhConvex* TakeHull(CQuickHullBuilder* , int);
	/* ../public/meshutils/quickhullbuilder.h:124 */
	void TakeAllHulls(CQuickHullBuilder* , CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> >* );
	/* ../public/meshutils/quickhullbuilder.h:127 */
	bool GetHullVertics(const CQuickHullBuilder* , int, CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	/* ../public/meshutils/quickhullbuilder.h:130 */
	bool CreateHullFromConvexHullVertices(CQuickHullBuilder* , const Vector* , int);
	/* ../public/meshutils/quickhullbuilder.h:133 */
	bool CreateHullFromMeshVertices(CQuickHullBuilder* , const Vector* , int, const HullSimplificationParams_t& );
	/* ../public/meshutils/quickhullbuilder.h:136 */
	bool CreateHullsFromMeshes(CQuickHullBuilder* , const CModelMesh* const* , int, HullsFromMeshesMode_t, const HullSimplificationParams_t& );
	/* ../public/meshutils/quickhullbuilder.h:139 */
	bool CreateHullsByConvexDecomposition(CQuickHullBuilder* , const Vector* , int, const uint32* , int, const HullDecompositionParams_t& , IHullDecompositionListener_t* );
	/* ../public/meshutils/quickhullbuilder.h:142 */
	bool CreateHullsByConvexDecomposition(CQuickHullBuilder* , const CModelMesh* const* , int, const HullDecompositionParams_t& , IHullDecompositionListener_t* );
	/* ../public/meshutils/quickhullbuilder.h:145 */
	void ApplyScaleToCreatedHulls(CQuickHullBuilder* , float);
private:
	CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> > m_Hulls; /* 0 32 */
	void ~CQuickHullBuilder(class CQuickHullBuilder *); /* linkage=_ZN17CQuickHullBuilderD4Ev */
	/* <5c7e591> meshutils/quickhullbuilder.cpp:36 */
	void Clear(class CQuickHullBuilder *); /* linkage=_ZN17CQuickHullBuilder5ClearEv */
	int GetNumHulls(const class CQuickHullBuilder  *); /* linkage=_ZNK17CQuickHullBuilder11GetNumHullsEv */
	/* <5c7e7d0> meshutils/quickhullbuilder.cpp:52 */
	const class qhConvex  * GetHull(const class CQuickHullBuilder  *, int); /* linkage=_ZNK17CQuickHullBuilder7GetHullEi */
	class qhConvex * TakeHull(class CQuickHullBuilder *, int); /* linkage=_ZN17CQuickHullBuilder8TakeHullEi */
	void TakeAllHulls(class CQuickHullBuilder *, class CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> > *); /* linkage=_ZN17CQuickHullBuilder12TakeAllHullsEP10CUtlVectorIP8qhConvex10CUtlMemoryIS2_iEE */
	bool GetHullVertics(const class CQuickHullBuilder  *, int, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK17CQuickHullBuilder14GetHullVerticsEiP10CUtlVectorI6Vector10CUtlMemoryIS1_iEE */
	bool CreateHullFromConvexHullVertices(class CQuickHullBuilder *, const class Vector  *, int); /* linkage=_ZN17CQuickHullBuilder32CreateHullFromConvexHullVerticesEPK6Vectori */
	bool CreateHullFromMeshVertices(class CQuickHullBuilder *, const class Vector  *, int, const class HullSimplificationParams_t  &); /* linkage=_ZN17CQuickHullBuilder26CreateHullFromMeshVerticesEPK6VectoriRK26HullSimplificationParams_t */
	bool CreateHullsFromMeshes(class CQuickHullBuilder *, const class CModelMesh  * const *, int, enum HullsFromMeshesMode_t, const class HullSimplificationParams_t  &); /* linkage=_ZN17CQuickHullBuilder21CreateHullsFromMeshesEPKPK10CModelMeshi21HullsFromMeshesMode_tRK26HullSimplificationParams_t */
	bool CreateHullsByConvexDecomposition(class CQuickHullBuilder *, const class Vector  *, int, const uint32  *, int, const class HullDecompositionParams_t  &, class IHullDecompositionListener_t *); /* linkage=_ZN17CQuickHullBuilder32CreateHullsByConvexDecompositionEPK6VectoriPKjiRK25HullDecompositionParams_tP28IHullDecompositionListener_t */
	bool CreateHullsByConvexDecomposition(class CQuickHullBuilder *, const class CModelMesh  * const *, int, const class HullDecompositionParams_t  &, class IHullDecompositionListener_t *); /* linkage=_ZN17CQuickHullBuilder32CreateHullsByConvexDecompositionEPKPK10CModelMeshiRK25HullDecompositionParams_tP28IHullDecompositionListener_t */
	void ApplyScaleToCreatedHulls(class CQuickHullBuilder *, float); /* linkage=_ZN17CQuickHullBuilder24ApplyScaleToCreatedHullsEf */
	void CQuickHullBuilder(class CQuickHullBuilder *); /* linkage=_ZN17CQuickHullBuilderC4Ev */
};

// <009DC1C8> ../public/meshutils/quickhullbuilder.h:105
void CQuickHullBuilder::~CQuickHullBuilder()
{
} /* size: 0 */

