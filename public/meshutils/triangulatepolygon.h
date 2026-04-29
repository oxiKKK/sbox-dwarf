
//
// public/meshutils/triangulatepolygon.h
//
//	referenced by: libengine2.so
//
//	functions: 17
//	class: 1
//	struct: 1
//

// <01258472> ../public/meshutils/triangulatepolygon.h:25
int TriangulatePolygon(const Vector *, int, int *, int)
{
} /* size: 0 */

// <05CAC407> ../public/meshutils/triangulatepolygon.h:39
inline void TriangleVertexBarycentric_t::operator=(const TriangleVertexBarycentric_t &)
{
} /* size: 0 */

// <05C86934> ../public/meshutils/triangulatepolygon.h:39
// member functions: 3
// member variables: 2
// struct size: 16
struct TriangleVertexBarycentric_t {
	/* ../public/meshutils/triangulatepolygon.h:41 */
	void TriangleVertexBarycentric_t(TriangleVertexBarycentric_t* );
	/* ../public/meshutils/triangulatepolygon.h:47 */
	void TriangleVertexBarycentric_t(TriangleVertexBarycentric_t* , int, const Vector& );
	int m_nTriangleIndex; /* 0 4 */
	Vector m_vCoord; /* 4 12 */
	TriangleVertexBarycentric_t& operator=(TriangleVertexBarycentric_t* , const TriangleVertexBarycentric_t& );
};

// <05CB4D44> ../public/meshutils/triangulatepolygon.h:41
void TriangleVertexBarycentric_t::TriangleVertexBarycentric_t()
{
} /* size: 0 */

// <05CB4D2B> ../public/meshutils/triangulatepolygon.h:41
inline void TriangleVertexBarycentric_t::TriangleVertexBarycentric_t()
{
} /* size: 0 */

// <05CB4D0A> ../public/meshutils/triangulatepolygon.h:47
void TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(int nTriangleIndex, const Vector& vCoord)
{
} /* size: 0 */

// <05CB4CD9> ../public/meshutils/triangulatepolygon.h:47
inline void TriangleVertexBarycentric_t::TriangleVertexBarycentric_t(int nTriangleIndex, const Vector& vCoord)
{
} /* size: 0 */

// <05C9CA39> ../public/meshutils/triangulatepolygon.h:62
// function calls: 55
void CTriangulatedPolygon::~CTriangulatedPolygon()
{
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<int, int>::ConvertToExternalMemory(
				int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<45, int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<int, 45, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 45, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 45>::~CUtlVectorFixedGrowable(); // 62
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<16, Vector2D, 4>::Base(); // 237
	CUtlMemory<Vector2D, int>::IsExternallyAllocated(); // 577
	CUtlMemory<Vector2D, int>::ConvertToExternalMemory(
				Vector2D* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::Purge_FixedGrowable(
				Vector2D* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::Purge_FixedGrowable(
				Vector2D* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<Vector2D, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<Vector2D, int>::Base(); // 112
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::Purge(); // 560
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 510
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Vector2D, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Vector2D, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Vector2D, 16>::~CUtlVectorFixedGrowable(); // 62
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 577
	CUtlMemory<Vector, int>::ConvertToExternalMemory(
				Vector* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<Vector, int>::Purge_FixedGrowable(
				Vector* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<Vector, int>::Purge_FixedGrowable(
				Vector* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, Vector, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<Vector, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Purge(); // 560
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 510
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Vector, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Vector, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Vector, 16>::~CUtlVectorFixedGrowable(); // 62
} /* size: 0, inline expansions: 55 (0 bytes) */

// <05C9CA1D> ../public/meshutils/triangulatepolygon.h:62
inline void CTriangulatedPolygon::~CTriangulatedPolygon()
{
} /* size: 0 */

// <012ABB79> ../public/meshutils/triangulatepolygon.h:62
void CTriangulatedPolygon::~CTriangulatedPolygon()
{
} /* size: 0 */

// <011E978B> ../public/meshutils/triangulatepolygon.h:62
// member functions: 60
// member variables: 7
// class size: 640
class CTriangulatedPolygon {
	/* ../public/meshutils/triangulatepolygon.h:64 */
	enum PolygonClassification_t {
		POLYGON_TYPE_UKNOWN = 0,
		POLYGON_TYPE_CONVEX = 1,
		POLYGON_TYPE_CONCAVE = 2,
	};
	/* ../public/meshutils/triangulatepolygon.h:73 */
	void CTriangulatedPolygon(CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:74 */
	void CTriangulatedPolygon(CTriangulatedPolygon* , const CTriangulatedPolygon& );
	/* ../public/meshutils/triangulatepolygon.h:75 */
	void CTriangulatedPolygon(CTriangulatedPolygon* , const Vector* , const Vector2D* , int);
	/* ../public/meshutils/triangulatepolygon.h:77 */
	const CTriangulatedPolygon& operator=(CTriangulatedPolygon* , const CTriangulatedPolygon& );
	/* ../public/meshutils/triangulatepolygon.h:80 */
	void ConstructPolygon(CTriangulatedPolygon* , const Vector* , const Vector2D* , int);
	/* ../public/meshutils/triangulatepolygon.h:83 */
	void ConstructPolygon2D(CTriangulatedPolygon* , const Vector2D* , int);
	/* ../public/meshutils/triangulatepolygon.h:86 */
	bool IsPointInPolygon(const CTriangulatedPolygon* , const Vector& );
	/* ../public/meshutils/triangulatepolygon.h:89 */
	bool IsPointInPolygon(const CTriangulatedPolygon* , const Vector& , float);
	/* ../public/meshutils/triangulatepolygon.h:92 */
	bool IntersectLineSegment(const CTriangulatedPolygon* , const Vector& , const Vector& , Vector* );
	/* ../public/meshutils/triangulatepolygon.h:95 */
	Vector2D ComputeTextureCoordinateForPoint(const CTriangulatedPolygon* , const Vector& );
	/* ../public/meshutils/triangulatepolygon.h:100 */
	void ClipLineSegment(CTriangulatedPolygon* , const Vector& , const Vector& , CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	/* ../public/meshutils/triangulatepolygon.h:104 */
	void ClipTrianglesToPolygonProjection(const CTriangulatedPolygon* , const Vector& , float, bool, const CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> >* );
	/* ../public/meshutils/triangulatepolygon.h:107 */
	bool IsConvex(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:110 */
	Vector ComputeCenter(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:113 */
	void GetPlane(const CTriangulatedPolygon* , VPlane* );
	/* ../public/meshutils/triangulatepolygon.h:116 */
	void SnapVertices(CTriangulatedPolygon* , float);
	/* ../public/meshutils/triangulatepolygon.h:119 */
	void RebaseTextureCoordinates(CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:122 */
	bool HasTextureCoordinates(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:125 */
	bool IsValid(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:128 */
	bool IsValidPolygonEdge(const CTriangulatedPolygon* , int, int);
	/* ../public/meshutils/triangulatepolygon.h:130 */
	const Vector& GetNormal(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:131 */
	const Vector& GetMin(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:132 */
	const Vector& GetMax(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:133 */
	int GetNumTriangleIndices(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:134 */
	const int* GetTriangleIndices(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:135 */
	int GetNumVertices(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:136 */
	const Vector* GetVertices(const CTriangulatedPolygon* );
	/* ../public/meshutils/triangulatepolygon.h:137 */
	const Vector2D* GetTexcoords(const CTriangulatedPolygon* );
private:
	/* ../public/meshutils/triangulatepolygon.h:140 */
	void InitializeAndTriangluatePolygon(CTriangulatedPolygon* );
	PolygonClassification_t m_Classification; /* 0 4 */
	Vector m_vNormal; /* 4 12 */
	Vector m_vMin; /* 16 12 */
	Vector m_vMax; /* 28 12 */
	CUtlVectorFixedGrowable<Vector, 16> m_Vertices __attribute__((__aligned__(8))); /* 40 224 */
	CUtlVectorFixedGrowable<Vector2D, 16> m_Texcoords __attribute__((__aligned__(8))); /* 264 160 */
	CUtlVectorFixedGrowable<int, 45> m_TriangleIndices __attribute__((__aligned__(8))); /* 424 216 */
	void ~CTriangulatedPolygon(CTriangulatedPolygon* );
	void CTriangulatedPolygon(class CTriangulatedPolygon *); /* linkage=_ZN20CTriangulatedPolygonC4Ev */
	void CTriangulatedPolygon(class CTriangulatedPolygon *, const class CTriangulatedPolygon  &); /* linkage=_ZN20CTriangulatedPolygonC4ERKS_ */
	void CTriangulatedPolygon(class CTriangulatedPolygon *, const class Vector  *, const class Vector2D  *, int); /* linkage=_ZN20CTriangulatedPolygonC4EPK6VectorPK8Vector2Di */
	const class CTriangulatedPolygon  & operator=(class CTriangulatedPolygon *, const class CTriangulatedPolygon  &); /* linkage=_ZN20CTriangulatedPolygonaSERKS_ */
	void ConstructPolygon(class CTriangulatedPolygon *, const class Vector  *, const class Vector2D  *, int); /* linkage=_ZN20CTriangulatedPolygon16ConstructPolygonEPK6VectorPK8Vector2Di */
	void ConstructPolygon2D(class CTriangulatedPolygon *, const class Vector2D  *, int); /* linkage=_ZN20CTriangulatedPolygon18ConstructPolygon2DEPK8Vector2Di */
	bool IsPointInPolygon(const class CTriangulatedPolygon  *, const class Vector  &); /* linkage=_ZNK20CTriangulatedPolygon16IsPointInPolygonERK6Vector */
	bool IsPointInPolygon(const class CTriangulatedPolygon  *, const class Vector  &, float); /* linkage=_ZNK20CTriangulatedPolygon16IsPointInPolygonERK6Vectorf */
	bool IntersectLineSegment(const class CTriangulatedPolygon  *, const class Vector  &, const class Vector  &, class Vector *); /* linkage=_ZNK20CTriangulatedPolygon20IntersectLineSegmentERK6VectorS2_PS0_ */
	class Vector2D ComputeTextureCoordinateForPoint(const class CTriangulatedPolygon  *, const class Vector  &); /* linkage=_ZNK20CTriangulatedPolygon32ComputeTextureCoordinateForPointERK6Vector */
	void ClipLineSegment(class CTriangulatedPolygon *, const class Vector  &, const class Vector  &, class CUtlVector<Vector, CUtlMemory<Vector, int> > *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZN20CTriangulatedPolygon15ClipLineSegmentERK6VectorS2_P10CUtlVectorIS0_10CUtlMemoryIS0_iEES7_ */
	void ClipTrianglesToPolygonProjection(const class CTriangulatedPolygon  *, const class Vector  &, float, bool, const class CUtlVector<Vector, CUtlMemory<Vector, int> >  &, class CUtlVector<Vector, CUtlMemory<Vector, int> > *, class CUtlVector<TriangleVertexBarycentric_t, CUtlMemory<TriangleVertexBarycentric_t, int> > *); /* linkage=_ZNK20CTriangulatedPolygon32ClipTrianglesToPolygonProjectionERK6VectorfbRK10CUtlVectorIS0_10CUtlMemoryIS0_iEEPS6_PS3_I27TriangleVertexBarycentric_tS4_ISA_iEE */
	/* <5cb5ebe> meshutils/triangulatepolygon.cpp:1004 */
	bool IsConvex(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon8IsConvexEv */
	class Vector ComputeCenter(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon13ComputeCenterEv */
	/* <5cb5fa3> meshutils/triangulatepolygon.cpp:1037 */
	void GetPlane(const class CTriangulatedPolygon  *, class VPlane *); /* linkage=_ZNK20CTriangulatedPolygon8GetPlaneEP6VPlane */
	void SnapVertices(class CTriangulatedPolygon *, float); /* linkage=_ZN20CTriangulatedPolygon12SnapVerticesEf */
	void RebaseTextureCoordinates(class CTriangulatedPolygon *); /* linkage=_ZN20CTriangulatedPolygon24RebaseTextureCoordinatesEv */
	bool HasTextureCoordinates(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon21HasTextureCoordinatesEv */
	/* <5cb6226> meshutils/triangulatepolygon.cpp:1496 */
	bool IsValid(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon7IsValidEv */
	bool IsValidPolygonEdge(const class CTriangulatedPolygon  *, int, int); /* linkage=_ZNK20CTriangulatedPolygon18IsValidPolygonEdgeEii */
	const class Vector  & GetNormal(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon9GetNormalEv */
	const class Vector  & GetMin(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon6GetMinEv */
	const class Vector  & GetMax(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon6GetMaxEv */
	int GetNumTriangleIndices(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon21GetNumTriangleIndicesEv */
	const int  * GetTriangleIndices(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon18GetTriangleIndicesEv */
	int GetNumVertices(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon14GetNumVerticesEv */
	const class Vector  * GetVertices(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon11GetVerticesEv */
	const class Vector2D  * GetTexcoords(const class CTriangulatedPolygon  *); /* linkage=_ZNK20CTriangulatedPolygon12GetTexcoordsEv */
	void InitializeAndTriangluatePolygon(class CTriangulatedPolygon *); /* linkage=_ZN20CTriangulatedPolygon31InitializeAndTriangluatePolygonEv */
	void ~CTriangulatedPolygon(class CTriangulatedPolygon *); /* linkage=_ZN20CTriangulatedPolygonD4Ev */
} __attribute__((__aligned__(8)));

// <01258432> ../public/meshutils/triangulatepolygon.h:75
void CTriangulatedPolygon::CTriangulatedPolygon(const Vector* pPositions, const Vector2D* pTexcoords, int nNumVertices)
{
} /* size: 0 */

// <05CB4CC0> ../public/meshutils/triangulatepolygon.h:130
inline void CTriangulatedPolygon::GetNormal()
{
} /* size: 0 */

// <05CB4CA7> ../public/meshutils/triangulatepolygon.h:131
inline void CTriangulatedPolygon::GetMin()
{
} /* size: 0 */

// <05CB4C8E> ../public/meshutils/triangulatepolygon.h:132
inline void CTriangulatedPolygon::GetMax()
{
} /* size: 0 */

// <05CB4C75> ../public/meshutils/triangulatepolygon.h:133
inline void CTriangulatedPolygon::GetNumTriangleIndices()
{
} /* size: 0 */

// <05CB4C5C> ../public/meshutils/triangulatepolygon.h:134
inline void CTriangulatedPolygon::GetTriangleIndices()
{
} /* size: 0 */

// <05CB4C43> ../public/meshutils/triangulatepolygon.h:135
inline void CTriangulatedPolygon::GetNumVertices()
{
} /* size: 0 */

// <05CB4C2A> ../public/meshutils/triangulatepolygon.h:136
inline void CTriangulatedPolygon::GetVertices()
{
} /* size: 0 */

