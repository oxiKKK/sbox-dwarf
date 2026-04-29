
//
// meshutils/modelmeshtangents.cpp
//
//	referenced by: libengine2.so
//
//	functions: 17
//

// <061D5662> meshutils/modelmeshtangents.cpp:10
// function calls: 40
void CModelMeshComputeTangents_MikkTSpace::CModelMeshComputeTangents_MikkTSpace(CModelMesh* pMesh)
{
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(); // 159
	VertexStreamIndex_t::VertexStreamIndex_t(); // 11
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(); // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(); // 11
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(); // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(); // 11
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(); // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(); // 11
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 11
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 11
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 11
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 11
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 13
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 14
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 15
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 16
} /* size: 0, inline expansions: 40 (0 bytes) */

// <061D563A> meshutils/modelmeshtangents.cpp:10
void CModelMeshComputeTangents_MikkTSpace::CModelMeshComputeTangents_MikkTSpace(CModelMesh* pMesh)
{
} /* size: 0 */

// <061D5617> meshutils/modelmeshtangents.cpp:22
CModelMeshComputeTangents_MikkTSpace* GetTangentComputationHelper(const SMikkTSpaceContext* pContext)
{
} /* size: 0 */

// <061D554D> meshutils/modelmeshtangents.cpp:29
// function calls: 3
int MikkTSpace_GetNumFaces(const SMikkTSpaceContext* pContext)
{
	GetTangentComputationHelper(const SMikkTSpaceContext* pContext); // 31
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 143
	CModelMeshComputeTangents_MikkTSpace::GetNumTriangles(); // 31
} /* size: 0, inline expansions: 3 (0 bytes) */

// <061D5506> meshutils/modelmeshtangents.cpp:37
int MikkTSpace_GetNumVerticesOfFace(const SMikkTSpaceContext* pContext, const int iFace)
{
} /* size: 0 */

// <061D53F1> meshutils/modelmeshtangents.cpp:45
// variable: 1
// function calls: 2
void MikkTSpace_GetPosition(const SMikkTSpaceContext* pContext, float* fvPosOut, const int iFace, const int iVert)
{
	Vector vPosition; // 47
	GetTangentComputationHelper(const SMikkTSpaceContext* pContext); // 47
	Vector::CopyToArray(
			float* rgfl);  // 48
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <061D52DC> meshutils/modelmeshtangents.cpp:54
// variable: 1
// function calls: 2
void MikkTSpace_GetNormal(const SMikkTSpaceContext* pContext, float* fvNormOut, const int iFace, const int iVert)
{
	Vector vNormal; // 56
	GetTangentComputationHelper(const SMikkTSpaceContext* pContext); // 56
	Vector::CopyToArray(
			float* rgfl);  // 57
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <061D51B0> meshutils/modelmeshtangents.cpp:63
// variable: 1
// function calls: 2
void MikkTSpace_GetTexCoord(const SMikkTSpaceContext* pContext, float* fvTexcOut, const int iFace, const int iVert)
{
	Vector2D vTexCoord; // 65
	GetTangentComputationHelper(const SMikkTSpaceContext* pContext); // 65
	Vector2D::CopyToArray(
			float* rgfl);  // 66
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <061D5051> meshutils/modelmeshtangents.cpp:72
// variable: 1
// function calls: 2
void MikkTSpace_SetTSpaceBasic(const SMikkTSpaceContext* pContext, const float* fvTangent, const float fSign, const int iFace, const int iVert)
{
	Vector4D vTangnentAndFlip; // 74
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 74
	GetTangentComputationHelper(const SMikkTSpaceContext* pContext); // 79
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <061D4C07> meshutils/modelmeshtangents.cpp:85
// variable: 1
// function calls: 18
void CModelMeshComputeTangents_MikkTSpace::TriangulateMesh(CModelMesh* pMesh)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > allFaces; // 87
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 87
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 90
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 90
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 92
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <061D49C4> meshutils/modelmeshtangents.cpp:97
// variables: 3
// function calls: 6
void CModelMeshComputeTangents_MikkTSpace::ComputeTangents()
{
	SMikkTSpaceInterface mikkTSpaceInterface; // 116
	SMikkTSpaceContext mikkTSpaceContext; // 127
	tbool bResult; // 134
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 101
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 102
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 106
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 108
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <061D6442> meshutils/modelmeshtangents.cpp:141
// function call: 1
void CModelMeshComputeTangents_MikkTSpace::GetNumTriangles()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 143
} /* size: 0, inline expansions: 1 (0 bytes) */

// <061D49A8> meshutils/modelmeshtangents.cpp:141
void CModelMeshComputeTangents_MikkTSpace::GetNumTriangles()
{
} /* size: 0 */

// <061D44E0> meshutils/modelmeshtangents.cpp:149
// variables: 2
// function calls: 16
void CModelMeshComputeTangents_MikkTSpace::GetPosition(const int nTriangle, const int nTriangleVertex)
{
	const int  nVertexIndex; // 151
	VertexHandle_t hVertex; // 152
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 151
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this,
			int i);  // 152
	Vector::Vector(); // 363
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 365
	{
	}
	CModelStreamReader::GetStreamType(); // 567
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
	CModelStreamReader::GetValues<Vector>(
				int nNumValues,
				const int* pValueIndices,
				Vector* pOutValues);  // 369
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataValue<Vector>(
					VertexStreamIndex_t nStream,
					const ComponentHandle_t  hComponent);  // 1090
	CVertex::GetValue<Vector>(
			VertexStreamIndex_t nStream);  // 153
} /* size: 0, variables: 2, inline expansions: 16 (0 bytes) */

// <061D4018> meshutils/modelmeshtangents.cpp:159
// variables: 2
// function calls: 16
void CModelMeshComputeTangents_MikkTSpace::GetNormal(const int nTriangle, const int nTriangleVertex)
{
	const int  nFaceVertexIndex; // 161
	FaceVertexHandle_t hFaceVertex; // 162
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 161
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this,
			int i);  // 162
	Vector::Vector(); // 363
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 365
	{
	}
	CModelStreamReader::GetStreamType(); // 567
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
	CModelStreamReader::GetValues<Vector>(
				int nNumValues,
				const int* pValueIndices,
				Vector* pOutValues);  // 369
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataValue<Vector>(
					FaceVertexStreamIndex_t nStream,
					const ComponentHandle_t  hComponent);  // 1110
	CFaceVertex::GetValue<Vector>(
			FaceVertexStreamIndex_t nStream);  // 163
} /* size: 0, variables: 2, inline expansions: 16 (0 bytes) */

// <061D39C1> meshutils/modelmeshtangents.cpp:169
// variables: 2
// function calls: 21
void CModelMeshComputeTangents_MikkTSpace::GetTexCoord(const int nTriangle, const int nTriangleVertex)
{
	const int  nFaceVertexIndex; // 171
	FaceVertexHandle_t hFaceVertex; // 172
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 171
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this,
			int i);  // 172
	Vector2D::Vector2D(); // 363
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 365
	{
	}
	CModelStreamReader::GetStreamType(); // 567
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
	{
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 572
	CModelStreamReader::GetValues<Vector2D>(
				int nNumValues,
				const int* pValueIndices,
				Vector2D* pOutValues);  // 564
	CModelStreamReader::GetValues<Vector2D>(
				int nNumValues,
				const int* pValueIndices,
				Vector2D* pOutValues);  // 369
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 373
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataValue<Vector2D>(
					FaceVertexStreamIndex_t nStream,
					const ComponentHandle_t  hComponent);  // 1110
	CFaceVertex::GetValue<Vector2D>(
				FaceVertexStreamIndex_t nStream);  // 173
} /* size: 0, variables: 2, inline expansions: 21 (0 bytes) */

// <061D34BA> meshutils/modelmeshtangents.cpp:179
// variables: 2
// function calls: 16
void CModelMeshComputeTangents_MikkTSpace::SetTangentAndFlip(const int nTriangle, const int nTriangleVertex, const Vector4D& vTangentAndFlip)
{
	const int  nFaceVertexIndex; // 181
	FaceVertexHandle_t hFaceVertex; // 182
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 181
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int i);  // 182
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 307
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataIndex(
				const ComponentHandle_t  hComponent);  // 348
	{
	}
	CModelStreamReader::GetStreamType(); // 653
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
	{
	}
	CModelStreamAccessor::SetValues<Vector4D>(
				int nNumValues,
				const int* pValueIndices,
				const Vector4D* pValues);  // 650
	CModelStreamAccessor::SetValues<Vector4D>(
				int nNumValues,
				const int* pValueIndices,
				const Vector4D* pValues);  // 353
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::SetComponentDataValue<Vector4D>(
					FaceVertexStreamIndex_t nStream,
					ComponentHandle_t hComponent,
					const Vector4D& value);  // 1100
	CFaceVertex::SetValue<Vector4D>(
				FaceVertexStreamIndex_t nStream,
				const Vector4D& value);  // 183
} /* size: 0, variables: 2, inline expansions: 16 (0 bytes) */

