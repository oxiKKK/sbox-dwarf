
//
// public/meshutils/modelmeshtangents.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	classes: 2
//

// <060D2307> ../public/meshutils/modelmeshtangents.h:16
void CModelMeshComputeTangents_MikkTSpace::~CModelMeshComputeTangents_MikkTSpace()
{
} /* size: 0 */

// <060D22EB> ../public/meshutils/modelmeshtangents.h:16
inline void CModelMeshComputeTangents_MikkTSpace::~CModelMeshComputeTangents_MikkTSpace()
{
} /* size: 0 */

// <06024FC9> ../public/meshutils/modelmeshtangents.h:16
// member functions: 18
// member variables: 9
// class size: 152
class CModelMeshComputeTangents_MikkTSpace {
	/* ../public/meshutils/modelmeshtangents.h:19 */
	void CModelMeshComputeTangents_MikkTSpace(CModelMeshComputeTangents_MikkTSpace* , CModelMesh* );
	/* ../public/meshutils/modelmeshtangents.h:20 */
	bool ComputeTangents(CModelMeshComputeTangents_MikkTSpace* );
	/* ../public/meshutils/modelmeshtangents.h:25 */
	int GetNumTriangles(const CModelMeshComputeTangents_MikkTSpace* );
	/* ../public/meshutils/modelmeshtangents.h:26 */
	Vector GetPosition(const CModelMeshComputeTangents_MikkTSpace* , int, int);
	/* ../public/meshutils/modelmeshtangents.h:27 */
	Vector GetNormal(const CModelMeshComputeTangents_MikkTSpace* , int, int);
	/* ../public/meshutils/modelmeshtangents.h:28 */
	Vector2D GetTexCoord(const CModelMeshComputeTangents_MikkTSpace* , int, int);
	/* ../public/meshutils/modelmeshtangents.h:29 */
	void SetTangentAndFlip(CModelMeshComputeTangents_MikkTSpace* , int, int, const Vector4D& );
private:
	/* ../public/meshutils/modelmeshtangents.h:32 */
	bool TriangulateMesh(CModelMeshComputeTangents_MikkTSpace* , CModelMesh* );
	const class CModelMesh * m_pMesh; /* 0 8 */
	VertexStreamIndex_t m_nPositionStream; /* 8 4 */
	FaceVertexStreamIndex_t m_nNormalStream; /* 12 4 */
	FaceVertexStreamIndex_t m_nTexCoordStream; /* 16 4 */
	FaceVertexStreamIndex_t m_nTangentStream; /* 20 4 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > m_Vertices; /* 24 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > m_FaceVertices; /* 56 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_TriangleVertexIndicies; /* 88 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_TriangleFaceVertexIndices; /* 120 32 */
	void ~CModelMeshComputeTangents_MikkTSpace(CModelMeshComputeTangents_MikkTSpace* );
	void CModelMeshComputeTangents_MikkTSpace(class CModelMeshComputeTangents_MikkTSpace *, class CModelMesh *); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpaceC4EP10CModelMesh */
	bool ComputeTangents(class CModelMeshComputeTangents_MikkTSpace *); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpace15ComputeTangentsEv */
	/* <61d6442> meshutils/modelmeshtangents.cpp:141 */
	int GetNumTriangles(const class CModelMeshComputeTangents_MikkTSpace  *); /* linkage=_ZNK36CModelMeshComputeTangents_MikkTSpace15GetNumTrianglesEv */
	class Vector GetPosition(const class CModelMeshComputeTangents_MikkTSpace  *, int, int); /* linkage=_ZNK36CModelMeshComputeTangents_MikkTSpace11GetPositionEii */
	class Vector GetNormal(const class CModelMeshComputeTangents_MikkTSpace  *, int, int); /* linkage=_ZNK36CModelMeshComputeTangents_MikkTSpace9GetNormalEii */
	class Vector2D GetTexCoord(const class CModelMeshComputeTangents_MikkTSpace  *, int, int); /* linkage=_ZNK36CModelMeshComputeTangents_MikkTSpace11GetTexCoordEii */
	void SetTangentAndFlip(class CModelMeshComputeTangents_MikkTSpace *, int, int, const class Vector4D  &); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpace17SetTangentAndFlipEiiRK8Vector4D */
	bool TriangulateMesh(class CModelMeshComputeTangents_MikkTSpace *, class CModelMesh *); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpace15TriangulateMeshEP10CModelMesh */
	void ~CModelMeshComputeTangents_MikkTSpace(class CModelMeshComputeTangents_MikkTSpace *); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpaceD4Ev */
};

// <061D0652> ../public/meshutils/modelmeshtangents.h:16
// member functions: 17
// member variables: 9
// class size: 152
class CModelMeshComputeTangents_MikkTSpace {
	/* ../public/meshutils/modelmeshtangents.h:19 */
	void CModelMeshComputeTangents_MikkTSpace(CModelMeshComputeTangents_MikkTSpace* , CModelMesh* );
	/* ../public/meshutils/modelmeshtangents.h:20 */
	bool ComputeTangents(CModelMeshComputeTangents_MikkTSpace* );
	/* ../public/meshutils/modelmeshtangents.h:25 */
	int GetNumTriangles(const CModelMeshComputeTangents_MikkTSpace* );
	/* ../public/meshutils/modelmeshtangents.h:26 */
	Vector GetPosition(const CModelMeshComputeTangents_MikkTSpace* , int, int);
	/* ../public/meshutils/modelmeshtangents.h:27 */
	Vector GetNormal(const CModelMeshComputeTangents_MikkTSpace* , int, int);
	/* ../public/meshutils/modelmeshtangents.h:28 */
	Vector2D GetTexCoord(const CModelMeshComputeTangents_MikkTSpace* , int, int);
	/* ../public/meshutils/modelmeshtangents.h:29 */
	void SetTangentAndFlip(CModelMeshComputeTangents_MikkTSpace* , int, int, const Vector4D& );
private:
	/* ../public/meshutils/modelmeshtangents.h:32 */
	bool TriangulateMesh(CModelMeshComputeTangents_MikkTSpace* , CModelMesh* );
	const class CModelMesh * m_pMesh; /* 0 8 */
	VertexStreamIndex_t m_nPositionStream; /* 8 4 */
	FaceVertexStreamIndex_t m_nNormalStream; /* 12 4 */
	FaceVertexStreamIndex_t m_nTexCoordStream; /* 16 4 */
	FaceVertexStreamIndex_t m_nTangentStream; /* 20 4 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > m_Vertices; /* 24 32 */
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > m_FaceVertices; /* 56 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_TriangleVertexIndicies; /* 88 32 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_TriangleFaceVertexIndices; /* 120 32 */
	void CModelMeshComputeTangents_MikkTSpace(class CModelMeshComputeTangents_MikkTSpace *, class CModelMesh *); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpaceC4EP10CModelMesh */
	bool ComputeTangents(class CModelMeshComputeTangents_MikkTSpace *); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpace15ComputeTangentsEv */
	/* <61d6442> meshutils/modelmeshtangents.cpp:141 */
	int GetNumTriangles(const class CModelMeshComputeTangents_MikkTSpace  *); /* linkage=_ZNK36CModelMeshComputeTangents_MikkTSpace15GetNumTrianglesEv */
	class Vector GetPosition(const class CModelMeshComputeTangents_MikkTSpace  *, int, int); /* linkage=_ZNK36CModelMeshComputeTangents_MikkTSpace11GetPositionEii */
	class Vector GetNormal(const class CModelMeshComputeTangents_MikkTSpace  *, int, int); /* linkage=_ZNK36CModelMeshComputeTangents_MikkTSpace9GetNormalEii */
	class Vector2D GetTexCoord(const class CModelMeshComputeTangents_MikkTSpace  *, int, int); /* linkage=_ZNK36CModelMeshComputeTangents_MikkTSpace11GetTexCoordEii */
	void SetTangentAndFlip(class CModelMeshComputeTangents_MikkTSpace *, int, int, const class Vector4D  &); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpace17SetTangentAndFlipEiiRK8Vector4D */
	bool TriangulateMesh(class CModelMeshComputeTangents_MikkTSpace *, class CModelMesh *); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpace15TriangulateMeshEP10CModelMesh */
	void ~CModelMeshComputeTangents_MikkTSpace(class CModelMeshComputeTangents_MikkTSpace *); /* linkage=_ZN36CModelMeshComputeTangents_MikkTSpaceD4Ev */
};

// <060674A7> ../public/meshutils/modelmeshtangents.h:19
void CModelMeshComputeTangents_MikkTSpace::CModelMeshComputeTangents_MikkTSpace(CModelMesh* pMesh)
{
} /* size: 0 */

