
//
// public/meshutils/qhdrv.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//

// <05DFDFF1> ../public/meshutils/qhdrv.h:16
inline qhVector3 AsQhVector(const Vector& v)
{
} /* size: 0 */

// <05DFDF9E> ../public/meshutils/qhdrv.h:46
// variables: 3
inline bool IsConvexTooComplexForRuntime(qhConvex* pConvex, const RnHullSimplificationParams_t* pParams)
{
	int nFaces; // 48
	int nEdges; // 49
	int nVerts; // 50
} /* size: 0, variables: 3 */

// <05EF1420> ../public/meshutils/qhdrv.h:58
// variables: 6
inline int EnumTriangles<GetTriangleCount(const qhConvex*)::<lambda(int, qhVertex*, qhVertex*, qhVertex*, const qhFace*)> >(const qhConvex* pConvex, const class& fn)
{
	int nTriangles; // 60
	{
		const qhFace* itFace; // 61
		{
			const qhHalfEdge* pEdge0; // 63
			const qhHalfEdge* pEdge1; // 63
			const qhHalfEdge* pEdge2; // 63
			{
				const qhHalfEdge* pEdge3; // 65
			}
		}
	}
} /* size: 0, variables: 1 */

// <05DE2753> ../public/meshutils/qhdrv.h:58
// variables: 6
inline int EnumTriangles<ConstructMeshFromConvex(const qhConvex*, CMesh&)::<lambda(int, qhVertex*, qhVertex*, qhVertex*, const qhFace*)> >(const qhConvex* pConvex, const class& fn)
{
	int nTriangles; // 60
	{
		const qhFace* itFace; // 61
		{
			const qhHalfEdge* pEdge0; // 63
			const qhHalfEdge* pEdge1; // 63
			const qhHalfEdge* pEdge2; // 63
			{
				const qhHalfEdge* pEdge3; // 65
			}
		}
	}
} /* size: 0, variables: 1 */

// <05DE234E> ../public/meshutils/qhdrv.h:58
// variables: 6
inline int EnumTriangles<ComputeDiffSqr(qhConvex*, qhConvex*)::<lambda(int, qhVertex*, qhVertex*, qhVertex*, const qhFace*)> >(const qhConvex* pConvex, const class& fn)
{
	int nTriangles; // 60
	{
		const qhFace* itFace; // 61
		{
			const qhHalfEdge* pEdge0; // 63
			const qhHalfEdge* pEdge1; // 63
			const qhHalfEdge* pEdge2; // 63
			{
				const qhHalfEdge* pEdge3; // 65
			}
		}
	}
} /* size: 0, variables: 1 */

// <05DE255F> ../public/meshutils/qhdrv.h:75
// variables: 6
inline int EnumDualTriangles<ConstructGaussMeshFromConvex(const qhConvex*, CMesh&, CUtlVector<float>&)::<lambda(int, qhFace*, qhFace*, qhFace*)> >(const qhConvex* pConvex, const class& fn)
{
	int nDualTriangles; // 77
	{
		const qhVertex* itVertex; // 78
		{
			const qhHalfEdge* pEdge0; // 80
			const qhHalfEdge* pEdge1; // 80
			const qhHalfEdge* pEdge2; // 80
			{
				const qhHalfEdge* pEdge3; // 82
			}
		}
	}
} /* size: 0, variables: 1 */

// <05F07E7E> ../public/meshutils/qhdrv.h:92
// variable: 1
inline int GetTriangleCount(const qhConvex* pConvex)
{
	int nTriangles; // 94
} /* size: 0, variables: 1 */

