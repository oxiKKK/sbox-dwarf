
//
// public/meshutils/modelmeshutils.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <05C696FF> ../public/meshutils/modelmeshutils.h:19
// member functions: 48
// class size: 1
class CModelMeshUtils {
	/* ../public/meshutils/modelmeshutils.h:29 */
	void GetAllStreamsOfType(CModelMesh* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshutils.h:32 */
	void GetAllDeltaStreamsOfType(CModelMesh* , ModelStreamType_t, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* );
	/* ../public/meshutils/modelmeshutils.h:40 */
	void ApplyTransform(CModelMesh* , const matrix3x4_t& );
	/* ../public/meshutils/modelmeshutils.h:43 */
	void ApplyScale(CModelMesh* , Vector);
	/* ../public/meshutils/modelmeshutils.h:48 */
	bool ComputeTangents(CModelMesh* );
	/* ../public/meshutils/modelmeshutils.h:54 */
	bool ComputeTangentsMikkTSpace(CModelMesh* );
	/* ../public/meshutils/modelmeshutils.h:58 */
	bool ComputeFacetedNormals(CModelMesh* );
	/* ../public/meshutils/modelmeshutils.h:63 */
	void GetVertexPositions(const CModelMesh* , CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	/* ../public/meshutils/modelmeshutils.h:69 */
	void GetPositionsAndNormals(const CModelMesh* , CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	/* ../public/meshutils/modelmeshutils.h:72 */
	void ComputeBounds(const CModelMesh* , AABB_t* );
	/* ../public/meshutils/modelmeshutils.h:76 */
	bool GetTriangles(const CModelMesh* , CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:77 */
	bool GetTrianglesForFaces(const CModelMesh* , const FaceHandle_t* , int, CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:78 */
	bool GetTrianglesForFaces(const CModelMesh* , const FaceHandle_t* , int, VertexStreamIndex_t, CUtlVector<Vector, CUtlMemory<Vector, int> >* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:82 */
	bool GetTrianglesForFaces(const CModelMesh* , const FaceHandle_t* , int, VertexStreamIndex_t, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* , CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* , CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:100 */
	bool AppendMesh(CModelMesh* , const CModelMesh& );
	/* ../public/meshutils/modelmeshutils.h:105 */
	bool AppendFacesFromMesh(CModelMesh* , const CModelMesh& , const FaceHandle_t* , int);
	/* ../public/meshutils/modelmeshutils.h:114 */
	void FindFacesConnectedToVertices(const CModelMesh* , const VertexHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmeshutils.h:117 */
	void FindVerticesConnectedToFaceVertices(const CModelMesh* , const FaceVertexHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmeshutils.h:122 */
	void FindVerticesConnectedToFaces(const CModelMesh* , const FaceHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:127 */
	void FindEdgesConnectedToFaces(const CModelMesh* , const FaceHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:130 */
	void FindFaceVerticesConnectedToFaces(const CModelMesh* , const FaceHandle_t* , int, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon);
	/* ../public/meshutils/modelmeshutils.h:133 */
	void FindFaceIslands(const CModelMesh* , CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeC);
	/* ../public/meshutils/modelmeshutils.h:136 */
	void FindFaceIslands(const CModelMesh* , FaceHandle_t* , int, CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeC);
	/* ../public/meshutils/modelmeshutils.h:139 */
	void FindNeigboringVertices(const CModelMesh* , VertexHandle_t, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL);
	/* ../public/meshutils/modelmeshutils.h:147 */
	void FindFaceGroupsUsedByFaces(const CModelMesh* , const FaceHandle_t* , int, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:151 */
	void FindBonesUsedByFaces(const CModelMesh* , const FaceHandle_t* , int, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:155 */
	void FindBonesUsedByVertices(const CModelMesh* , const VertexHandle_t* , int, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:164 */
	bool FindFacesSkinnedToBone(const CModelMesh* , int, float, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis);
	/* ../public/meshutils/modelmeshutils.h:169 */
	void RemapBoneIndicesForVertices(CModelMesh* , VertexHandle_t* , int, const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../public/meshutils/modelmeshutils.h:172 */
	void RemapBoneIndicesForMesh(CModelMesh* , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* ../public/meshutils/modelmeshutils.h:175 */
	void TransferSkinningInformation(CModelMesh* , const CUtlVector<const CModelMesh*, CUtlMemory<const CModelMesh*, int> >& );
	/* ../public/meshutils/modelmeshutils.h:178 */
	void SkinAllVertsToSingleBone(CModelMesh* , const char* );
	/* ../public/meshutils/modelmeshutils.h:181 */
	void RemoveSkinningInformation(CModelMesh* );
	/* ../public/meshutils/modelmeshutils.h:184 */
	bool ReassignBoneSkinning(CModelMesh* , const char* , const char* );
	/* ../public/meshutils/modelmeshutils.h:185 */
	bool ReassignBoneSkinningMultiple(CModelMesh* , const int* , int, int);
	/* ../public/meshutils/modelmeshutils.h:188 */
	bool RemoveBone(CModelMesh* , int, int);
	/* ../public/meshutils/modelmeshutils.h:189 */
	bool RemoveBones(CModelMesh* , const CUtlVector<int, CUtlMemory<int, int> >& , int);
	/* ../public/meshutils/modelmeshutils.h:193 */
	bool FindBonesWithNoDirectlySkinnedVerts(const CModelMesh* , float, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:199 */
	void ApplyPose(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* , CModelMesh* );
	/* ../public/meshutils/modelmeshutils.h:206 */
	void FindCopositionalTexCoordVertexIslands(const CModelMesh* , CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeC, const char* , int, int);
	/* ../public/meshutils/modelmeshutils.h:209 */
	void CreateRaytraceEnvironmentForMesh(const CModelMesh* , RayTracingEnvironment* );
	/* ../public/meshutils/modelmeshutils.h:212 */
	void CalculateBentNormalsForMesh(const CModelMesh* , CModelMesh* );
	/* ../public/meshutils/modelmeshutils.h:216 */
	void CopyBentNormalsToMesh(const CModelMesh* , CModelMesh* );
	/* ../public/meshutils/modelmeshutils.h:219 */
	int GroupFaceVerticesByNormal(const CModelMesh* , const FaceVertexHandle_t* , int, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/meshutils/modelmeshutils.h:224 */
	VertexStreamIndex_t CreateFusedVertexStreamFromFaceVertexStream(CModelMesh* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshutils.h:229 */
	bool FuseAllFaceVertexStreamsInMesh(CModelMesh* );
	/* ../public/meshutils/modelmeshutils.h:234 */
	FaceVertexStreamIndex_t AverageFaceVertexStreamInPlace(CModelMesh* , FaceVertexStreamIndex_t);
	/* ../public/meshutils/modelmeshutils.h:240 */
	FaceVertexStreamIndex_t CreateFaceVertexStreamFromVertexStream(CModelMesh* , VertexStreamIndex_t);
};

