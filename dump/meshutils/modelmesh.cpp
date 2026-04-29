
//
// meshutils/modelmesh.cpp
//
//	referenced by: libengine2.so
//
//	functions: 161
//

// <05F9FE8B> meshutils/modelmesh.cpp:35
// function calls: 83
void CModelMesh::CModelMesh()
{
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModel this); // 384
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 384
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::CHalfEdgeComponentList(); // 119
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMeshDelta<CModelMesh::Vertex_t>::CUtlVector(); // 94
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::CModelMeshDeltaSet(
				const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pComponentList);  // 119
	CModelMeshComponentList<CModelMesh::Vertex_t>::CModelMeshComponentList(); // 35
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 384
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 384
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::CHalfEdgeComponentList(); // 119
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMeshDelta<CModelMesh::FaceVertex_t>::CUtlVector(); // 94
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::CModelMeshDeltaSet(
				const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pComponentList);  // 119
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::CModelMeshComponentList(); // 35
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMe this); // 384
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 384
	CHalfEdgeComponentList<CModelMesh::Edge_t>::CHalfEdgeComponentList(); // 119
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMeshDelta<CModelMesh::Edge_t>::CUtlVector(); // 94
	CModelMeshDeltaSet<CModelMesh::Edge_t>::CModelMeshDeltaSet(
				const CHalfEdgeComponentList<CModelMesh::Edge_t>* pComponentList);  // 119
	CModelMeshComponentList<CModelMesh::Edge_t>::CModelMeshComponentList(); // 35
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMe this); // 384
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 384
	CHalfEdgeComponentList<CModelMesh::Face_t>::CHalfEdgeComponentList(); // 119
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMeshDelta<CModelMesh::Face_t>::CUtlVector(); // 94
	CModelMeshDeltaSet<CModelMesh::Face_t>::CModelMeshDeltaSet(
				const CHalfEdgeComponentList<CModelMesh::Face_t>* pComponentList);  // 119
	CModelMeshComponentList<CModelMesh::Face_t>::CModelMeshComponentList(); // 35
	CUtlMemory<CModelMesh::FaceGroup_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::FaceGroup_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::CUtlVector(); // 35
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 35
	CModelMeshMetaData::CModelMeshMetaData(); // 35
} /* size: 0, inline expansions: 83 (0 bytes) */

// <05F9FE6F> meshutils/modelmesh.cpp:35
void CModelMesh::CModelMesh()
{
} /* size: 0 */

// <05F9ED4D> meshutils/modelmesh.cpp:44
// function calls: 84
void CModelMesh::CModelMesh(const CModelMesh& src)
{
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModel this); // 384
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 384
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::CHalfEdgeComponentList(); // 119
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMeshDelta<CModelMesh::Vertex_t>::CUtlVector(); // 94
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::CModelMeshDeltaSet(
				const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pComponentList);  // 119
	CModelMeshComponentList<CModelMesh::Vertex_t>::CModelMeshComponentList(); // 44
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 384
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 384
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::CHalfEdgeComponentList(); // 119
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMeshDelta<CModelMesh::FaceVertex_t>::CUtlVector(); // 94
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::CModelMeshDeltaSet(
				const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pComponentList);  // 119
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::CModelMeshComponentList(); // 44
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMe this); // 384
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 384
	CHalfEdgeComponentList<CModelMesh::Edge_t>::CHalfEdgeComponentList(); // 119
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMeshDelta<CModelMesh::Edge_t>::CUtlVector(); // 94
	CModelMeshDeltaSet<CModelMesh::Edge_t>::CModelMeshDeltaSet(
				const CHalfEdgeComponentList<CModelMesh::Edge_t>* pComponentList);  // 119
	CModelMeshComponentList<CModelMesh::Edge_t>::CModelMeshComponentList(); // 44
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMe this); // 384
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 384
	CHalfEdgeComponentList<CModelMesh::Face_t>::CHalfEdgeComponentList(); // 119
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMeshDelta<CModelMesh::Face_t>::CUtlVector(); // 94
	CModelMeshDeltaSet<CModelMesh::Face_t>::CModelMeshDeltaSet(
				const CHalfEdgeComponentList<CModelMesh::Face_t>* pComponentList);  // 119
	CModelMeshComponentList<CModelMesh::Face_t>::CModelMeshComponentList(); // 44
	CUtlMemory<CModelMesh::FaceGroup_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::FaceGroup_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::CUtlVector(); // 44
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 44
	CModelMeshMetaData::CModelMeshMetaData(); // 44
	CModelMesh::operator=(
			const CModelMesh& src);  // 46
} /* size: 0, inline expansions: 84 (0 bytes) */

// <05F9ED25> meshutils/modelmesh.cpp:44
void CModelMesh::CModelMesh(const CModelMesh& src)
{
} /* size: 0 */

// <05FA7E6F> meshutils/modelmesh.cpp:52
void CModelMesh::operator=(const CModelMesh& src)
{
} /* size: 0 */

// <05F97A46> meshutils/modelmesh.cpp:61
// variables: 12
// function calls: 512
void CModelMesh::CopyFrom(const CModelMesh& src)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
		int count);  // 573
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 102
	begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 574
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 105
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 105
	end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t* pFrom,
														const ComponentHandleWithListPointer_t* pFromEnd,
														ComponentHandleWithListPointer_t* pTo);  // 173
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t>(const ComponentEntry_t* pFrom,
											const ComponentEntry_t* pFromEnd,
											ComponentEntry_t* pTo);  // 574
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod other);  // 565
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod other);  // 452
	operator=(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMe this,
			const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMe src);  // 398
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
		int count);  // 573
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 102
	begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 574
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 105
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 105
	end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t* pFrom,
														const ComponentHandleWithListPointer_t* pFromEnd,
														ComponentHandleWithListPointer_t* pTo);  // 173
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t>(const ComponentReference_t* pFrom,
												const ComponentReference_t* pFromEnd,
												ComponentReference_t* pTo);  // 574
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< other);  // 565
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< other);  // 452
	operator=(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CMod src);  // 399
	CHalfEdgeComponentList<CModelMesh::Face_t>::operator=(
			const CHalfEdgeComponentList<CModelMesh::Face_t>& src);  // 140
	{
		int i; // 1807
		CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Element(
			int i);  // 1809
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 26
		ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 26
		CUtlString::~CUtlString(); // 26
		CModelMeshDelta<CModelMesh::Face_t>::~CModelMeshDelta(); // 1809
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::RemoveAll(); // 1798
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::Purge(); // 903
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::Purge(); // 1799
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Purge(); // 1811
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::PurgeAndDeleteElements(); // 146
	CModelMeshDeltaSet<CModelMesh::Face_t>::RemoveAll(); // 115
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::NumAllocated(); // 782
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::IsGrowable(); // 823
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::IsExternallyAllocated(); // 859
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::IsExternallyAllocated(); // 861
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::Grow(
		int num);  // 806
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::SetCount(
		int count);  // 119
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 118
	{
		int iDelta; // 121
		{
			const CModelMeshDelta<CModelMesh::Face_t>* pSrcDelta; // 123
			CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 123
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::Face_t>::GetName(); // 124
			CUtlString::CUtlString(); // 168
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
			CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
					int minimumSize);  // 168
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 168
			CModelMeshDelta<CModelMesh::Face_t>::CModelMeshDelta(
					const char* pDeltaName,
					const CHalfEdgeComponentList<CModelMesh::Face_t>* pComponentList);  // 124
			CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 124
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 182
			CModelMeshDelta<CModelMesh::Face_t>::operator=(
					const CModelMeshDelta<CModelMesh::Face_t>& src);  // 125
			CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 125
		}
	}
	CModelMeshDeltaSet<CModelMesh::Face_t>::operator=(
			const CModelMeshDeltaSet<CModelMesh::Face_t>& src);  // 142
	CModelMeshComponentList<CModelMesh::Face_t>::operator=(
			const CModelMeshComponentList<CModelMesh::Face_t>& src);  // 63
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
		int count);  // 573
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 102
	begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 574
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 105
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 105
	end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t* pFrom,
														const ComponentHandleWithListPointer_t* pFromEnd,
														ComponentHandleWithListPointer_t* pTo);  // 173
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t>(const ComponentEntry_t* pFrom,
												const ComponentEntry_t* pFromEnd,
												ComponentEntry_t* pTo);  // 574
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM other);  // 565
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM other);  // 452
	operator=(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModel this,
			const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModel src);  // 398
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
		int count);  // 573
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 102
	begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 574
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 105
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 105
	end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t* pFrom,
														const ComponentHandleWithListPointer_t* pFromEnd,
														ComponentHandleWithListPointer_t* pTo);  // 173
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t>(const ComponentReference_t* pFrom,
												const ComponentReference_t* pFromEnd,
												ComponentReference_t* pTo);  // 574
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis other);  // 565
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis other);  // 452
	operator=(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CM src);  // 399
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::operator=(
			const CHalfEdgeComponentList<CModelMesh::Vertex_t>& src);  // 140
	{
		int i; // 1807
		CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Element(
			int i);  // 1809
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 26
		ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 26
		CUtlString::~CUtlString(); // 26
		CModelMeshDelta<CModelMesh::Vertex_t>::~CModelMeshDelta(); // 1809
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::RemoveAll(); // 1798
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::Purge(); // 903
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::Purge(); // 1799
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Purge(); // 1811
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::PurgeAndDeleteElements(); // 146
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::RemoveAll(); // 115
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::NumAllocated(); // 782
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::IsGrowable(); // 823
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::IsExternallyAllocated(); // 859
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::IsExternallyAllocated(); // 861
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::Grow(
		int num);  // 806
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::SetCount(
		int count);  // 119
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 118
	{
		int iDelta; // 121
		{
			const CModelMeshDelta<CModelMesh::Vertex_t>* pSrcDelta; // 123
			CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 123
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::Vertex_t>::GetName(); // 124
			CUtlString::CUtlString(); // 168
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
			CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
					int minimumSize);  // 168
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 168
			CModelMeshDelta<CModelMesh::Vertex_t>::CModelMeshDelta(
					const char* pDeltaName,
					const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pComponentList);  // 124
			CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 124
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 182
			CModelMeshDelta<CModelMesh::Vertex_t>::operator=(
					const CModelMeshDelta<CModelMesh::Vertex_t>& src);  // 125
			CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 125
		}
	}
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::operator=(
			const CModelMeshDeltaSet<CModelMesh::Vertex_t>& src);  // 142
	CModelMeshComponentList<CModelMesh::Vertex_t>::operator=(
			const CModelMeshComponentList<CModelMesh::Vertex_t>& src);  // 64
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
		int count);  // 573
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 102
	begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 574
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 105
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 105
	end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t* pFrom,
														const ComponentHandleWithListPointer_t* pFromEnd,
														ComponentHandleWithListPointer_t* pTo);  // 173
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t>(const ComponentEntry_t* pFrom,
												const ComponentEntry_t* pFromEnd,
												ComponentEntry_t* pTo);  // 574
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis other);  // 565
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis other);  // 452
	operator=(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM src);  // 398
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
		int count);  // 573
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 102
	begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 574
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 105
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 105
	end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t* pFrom,
														const ComponentHandleWithListPointer_t* pFromEnd,
														ComponentHandleWithListPointer_t* pTo);  // 173
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t>(const ComponentReference_t* pFrom,
													const ComponentReference_t* pFromEnd,
													ComponentReference_t* pTo);  // 574
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen other);  // 565
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen other);  // 452
	operator=(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this,
			const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis src);  // 399
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::operator=(
			const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& src);  // 140
	{
		int i; // 1807
		CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Element(
			int i);  // 1809
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 26
		ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 26
		CUtlString::~CUtlString(); // 26
		CModelMeshDelta<CModelMesh::FaceVertex_t>::~CModelMeshDelta(); // 1809
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::RemoveAll(); // 1798
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::Purge(); // 903
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::Purge(); // 1799
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Purge(); // 1811
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::PurgeAndDeleteElements(); // 146
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::RemoveAll(); // 115
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::NumAllocated(); // 782
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::IsGrowable(); // 823
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::IsExternallyAllocated(); // 859
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::IsExternallyAllocated(); // 861
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::Grow(
		int num);  // 806
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::SetCount(
		int count);  // 119
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 118
	{
		int iDelta; // 121
		{
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pSrcDelta; // 123
			CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 123
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetName(); // 124
			CUtlString::CUtlString(); // 168
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
			CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
					int minimumSize);  // 168
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 168
			CModelMeshDelta<CModelMesh::FaceVertex_t>::CModelMeshDelta(
					const char* pDeltaName,
					const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pComponentList);  // 124
			CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 124
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 182
			CModelMeshDelta<CModelMesh::FaceVertex_t>::operator=(
					const CModelMeshDelta<CModelMesh::FaceVertex_t>& src);  // 125
			CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 125
		}
	}
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::operator=(
			const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& src);  // 142
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::operator=(
			const CModelMeshComponentList<CModelMesh::FaceVertex_t>& src);  // 65
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
		int count);  // 573
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 102
	begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 574
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 105
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 105
	end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t* pFrom,
														const ComponentHandleWithListPointer_t* pFromEnd,
														ComponentHandleWithListPointer_t* pTo);  // 173
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t>(const ComponentEntry_t* pFrom,
											const ComponentEntry_t* pFromEnd,
											ComponentEntry_t* pTo);  // 574
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod other);  // 565
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod other);  // 452
	operator=(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMe this,
			const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CModelMe src);  // 398
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
		int count);  // 573
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 102
	begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 574
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::Base(); // 113
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 105
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 105
	end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t* pFrom,
														const ComponentHandleWithListPointer_t* pFromEnd,
														ComponentHandleWithListPointer_t* pTo);  // 173
	UtlTraitsCopyRange<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t>(const ComponentReference_t* pFrom,
												const ComponentReference_t* pFromEnd,
												ComponentReference_t* pTo);  // 574
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< other);  // 565
	operator=(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this,
			const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< other);  // 452
	operator=(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList<CMod src);  // 399
	CHalfEdgeComponentList<CModelMesh::Edge_t>::operator=(
			const CHalfEdgeComponentList<CModelMesh::Edge_t>& src);  // 140
	{
		int i; // 1807
		CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Element(
			int i);  // 1809
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 26
		ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 26
		CUtlString::~CUtlString(); // 26
		CModelMeshDelta<CModelMesh::Edge_t>::~CModelMeshDelta(); // 1809
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::RemoveAll(); // 1798
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::Purge(); // 903
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::Purge(); // 1799
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Purge(); // 1811
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::PurgeAndDeleteElements(); // 146
	CModelMeshDeltaSet<CModelMesh::Edge_t>::RemoveAll(); // 115
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::NumAllocated(); // 782
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::IsGrowable(); // 823
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::IsExternallyAllocated(); // 859
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::IsExternallyAllocated(); // 861
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::Grow(
		int num);  // 806
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::SetCount(
		int count);  // 119
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Count(); // 118
	{
		int iDelta; // 121
		{
			const CModelMeshDelta<CModelMesh::Edge_t>* pSrcDelta; // 123
			CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
					int i);  // 123
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::Edge_t>::GetName(); // 124
			CUtlString::CUtlString(); // 168
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			Init(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 178
			CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t,  this,
					int minimumSize);  // 168
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 168
			CModelMeshDelta<CModelMesh::Edge_t>::CModelMeshDelta(
					const char* pDeltaName,
					const CHalfEdgeComponentList<CModelMesh::Edge_t>* pComponentList);  // 124
			CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
					int i);  // 124
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 182
			CModelMeshDelta<CModelMesh::Edge_t>::operator=(
					const CModelMeshDelta<CModelMesh::Edge_t>& src);  // 125
			CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
					int i);  // 125
		}
	}
	CModelMeshDeltaSet<CModelMesh::Edge_t>::operator=(
			const CModelMeshDeltaSet<CModelMesh::Edge_t>& src);  // 142
	CModelMeshComponentList<CModelMesh::Edge_t>::operator=(
			const CModelMeshComponentList<CModelMesh::Edge_t>& src);  // 66
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 573
	CUtlMemory<CModelMesh::FaceGroup_t, int>::Base(); // 112
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Base(); // 102
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::begin(); // 574
	CUtlMemory<CModelMesh::FaceGroup_t, int>::Base(); // 113
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Base(); // 105
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 105
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 296
	FaceGroup_t::operator=(
			const FaceGroup_t  &);  // 209
	UtlTraitsCopyRange<CModelMesh::FaceGroup_t>(const FaceGroup_t* pFrom,
							const FaceGroup_t* pFromEnd,
							FaceGroup_t* pTo);  // 200
	UtlTraitsCopyRange<CModelMesh::FaceGroup_t>(const FaceGroup_t* pFrom,
							const FaceGroup_t* pFromEnd,
							FaceGroup_t* pTo);  // 574
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator=(
			const CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >& other);  // 565
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator=(
			const CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >& other);  // 452
	CUtlVector<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator=(
			const CUtlVector<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >& src);  // 67
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 68
	CModelMeshMetaData::operator=(
			const CModelMeshMetaData  &);  // 69
} /* size: 0, inline expansions: 340 (0 bytes) */

// <05F95C3B> meshutils/modelmesh.cpp:75
// variables: 6
// function calls: 143
void CModelMesh::RemoveAll()
{
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 775
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 776
	CHalfEdgeComponentList<CModelMesh::Face_t>::RemoveAll(); // 353
	{
		int i; // 1807
		CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Element(
			int i);  // 1809
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 26
		ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 26
		CUtlString::~CUtlString(); // 26
		CModelMeshDelta<CModelMesh::Face_t>::~CModelMeshDelta(); // 1809
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::RemoveAll(); // 1798
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::Purge(); // 903
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::Purge(); // 1799
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Purge(); // 1811
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::PurgeAndDeleteElements(); // 146
	CModelMeshDeltaSet<CModelMesh::Face_t>::RemoveAll(); // 355
	CModelMeshComponentList<CModelMesh::Face_t>::RemoveAll(); // 77
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this); // 775
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentLis this); // 776
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::RemoveAll(); // 353
	{
		int i; // 1807
		CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Element(
			int i);  // 1809
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 26
		ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 26
		CUtlString::~CUtlString(); // 26
		CModelMeshDelta<CModelMesh::Vertex_t>::~CModelMeshDelta(); // 1809
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::RemoveAll(); // 1798
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::Purge(); // 903
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::Purge(); // 1799
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Purge(); // 1811
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::PurgeAndDeleteElements(); // 146
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::RemoveAll(); // 355
	CModelMeshComponentList<CModelMesh::Vertex_t>::RemoveAll(); // 78
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 775
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 776
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::RemoveAll(); // 353
	{
		int i; // 1807
		CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Element(
			int i);  // 1809
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 26
		ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 26
		CUtlString::~CUtlString(); // 26
		CModelMeshDelta<CModelMesh::FaceVertex_t>::~CModelMeshDelta(); // 1809
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::RemoveAll(); // 1798
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::Purge(); // 903
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::Purge(); // 1799
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Purge(); // 1811
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::PurgeAndDeleteElements(); // 146
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::RemoveAll(); // 355
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::RemoveAll(); // 79
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this); // 775
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponentList< this); // 776
	CHalfEdgeComponentList<CModelMesh::Edge_t>::RemoveAll(); // 353
	{
		int i; // 1807
		CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Element(
			int i);  // 1809
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 26
		ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 26
		CUtlString::~CUtlString(); // 26
		CModelMeshDelta<CModelMesh::Edge_t>::~CModelMeshDelta(); // 1809
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::RemoveAll(); // 1798
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::Purge(); // 903
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::Purge(); // 1799
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Purge(); // 1811
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::PurgeAndDeleteElements(); // 146
	CModelMeshDeltaSet<CModelMesh::Edge_t>::RemoveAll(); // 355
	CModelMeshComponentList<CModelMesh::Edge_t>::RemoveAll(); // 80
	{
		int i; // 1721
		CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 296
		FaceGroup_t::~FaceGroup_t(); // 1526
		Destruct<CModelMesh::FaceGroup_t>(FaceGroup_t* pMemory); // 1723
	}
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::RemoveAll(); // 81
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 82
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 46
	CModelMeshMetaData::Clear(); // 83
} /* size: 0, inline expansions: 54 (0 bytes) */

// <05F95879> meshutils/modelmesh.cpp:88
// function calls: 19
void CModelMesh::IsEmpty()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 90
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 575
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Vertex_t>::Count(); // 92
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::Count(); // 94
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Edge_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Edge_t>::Count(); // 96
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 98
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 100
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 245
	KeyValues3::IsNull(); // 51
	CModelMeshMetaData::IsEmpty(); // 102
} /* size: 0, inline expansions: 19 (0 bytes) */

// <05F950B9> meshutils/modelmesh.cpp:111
// variables: 4
// function calls: 28
void CModelMesh::CheckIntegrity()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 427
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 320
	{
		int i; // 321
		CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 324
	}
	CModelMeshDeltaSet<CModelMesh::Face_t>::CheckIntegrity(); // 430
	CModelMeshComponentList<CModelMesh::Face_t>::CheckIntegrity(); // 113
	{
		int i; // 321
		CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 324
	}
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 320
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::CheckIntegrity(); // 430
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 427
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::CheckIntegrity(); // 116
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 575
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count(); // 427
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 320
	{
		int i; // 321
		CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 324
	}
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::CheckIntegrity(); // 430
	CModelMeshComponentList<CModelMesh::Vertex_t>::CheckIntegrity(); // 114
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Edge_t>::Count(); // 427
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Count(); // 320
	{
		int i; // 321
		CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
				int i);  // 324
	}
	CModelMeshDeltaSet<CModelMesh::Edge_t>::CheckIntegrity(); // 430
	CModelMeshComponentList<CModelMesh::Edge_t>::CheckIntegrity(); // 115
} /* size: 0, inline expansions: 20 (0 bytes) */

// <05F940B0> meshutils/modelmesh.cpp:124
// variables: 6
// function calls: 63
void CModelMesh::AddVertices(int nNumVertices, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutNewVertices)
{
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t> newVertexHandles; // 127
	{
		int iVertex; // 132
		{
			VertexHandle_t hVertex; // 134
			Vertex_t* pVertex; // 135
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
					int i);  // 134
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 466
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
					int i);  // 470
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 364
			CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 1721
			CModelMesh::GetVertex(
					VertexHandle_t hVertex);  // 135
		}
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemoryFixedGrowable_Base(
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 127
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this,
		int count);  // 128
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 575
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count(); // 749
	{
		int iComp; // 754
		{
			ComponentHandle_t handle; // 756
		}
	}
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::AddMultiple(
			int nCount,
			ComponentHandle_t* pHandles);  // 243
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 575
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count(); // 245
	{
	}
	CModelMeshComponentList<CModelMesh::Vertex_t>::AddMultiple(
			int nCount,
			ComponentHandle_t* pOutHandles);  // 241
	CModelMeshComponentList<CModelMesh::Vertex_t>::AddMultiple(
			int nCount,
			ComponentHandle_t* pOutHandles);  // 129
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixe this); // 142
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 142
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 1798
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 237
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowa this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 144
} /* size: 0, variables: 1, inline expansions: 51 (0 bytes) */

// <05F93FED> meshutils/modelmesh.cpp:149
// function calls: 3
void CModelMesh::GetNumVertices()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 575
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Vertex_t>::Count(); // 151
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F93D4C> meshutils/modelmesh.cpp:157
// function calls: 10
void CModelMesh::GetVertexHandleForIndex(int nVertexIndex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 489
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::InvalidHandle(); // 490
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this,
			int i);  // 492
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 492
	ComponentHandleWithListPointer_t::operator!=(
			InvalidMeshComponent_t);  // 495
	{
	}
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandle(
				int nIndex);  // 487
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandle(
				int nIndex);  // 181
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentHandle(
				ComponentIndex_t nIndex);  // 159
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F9371E> meshutils/modelmesh.cpp:165
// variable: 1
// function calls: 26
void CModelMesh::GetAllVertices(CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutAllVertices)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 508
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 509
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int num);  // 510
	{
		int iComp; // 518
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
				int num);  // 1198
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
				const ComponentHandleWithListPointer_t& src);  // 520
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
				int i);  // 522
		ComponentHandleWithListPointer_t::operator!=(
				InvalidMeshComponent_t);  // 522
		{
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this,
				int i);  // 520
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 520
	}
	{
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1861
	NumAllocated(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 515
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > >(
																CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL handleVector);  // 167
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F93474> meshutils/modelmesh.cpp:173
// function calls: 10
void CModelMesh::IsVertexInMesh(VertexHandle_t hVertex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1721
	CModelMesh::GetVertex(
			VertexHandle_t hVertex);  // 175
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F91F89> meshutils/modelmesh.cpp:198
// variables: 11
// function calls: 73
void CModelMesh::RemoveVertex(VertexHandle_t hVertex, FreeVertexRemovalMode_t nRemoveMode)
{
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> connectedEdges; // 206
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> connectedFaceVertices; // 211
	{
		FaceVertexHandle_t hFaceVertex; // 214
		CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>& __for_range; // 51352
		iterator __for_begin; // 52359
		iterator __for_end; // 52359
		{
			FaceVertex_t* pFaceVertex; // 219
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 214
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 214
	}
	{
		EdgeHandle_t hEdge; // 228
		CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>& __for_range; // 21672
		iterator __for_begin; // 3847
		iterator __for_end; // 3847
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 228
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 228
	}
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 200
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemoryFixedGrowable_Base(
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 206
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 211
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
		int numElements);  // 1799
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 236
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1798
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 237
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 236
} /* size: 0, variables: 2, inline expansions: 63 (0 bytes) */

// <05F91EE0> meshutils/modelmesh.cpp:241
// variable: 1
void CModelMesh::RemoveVertices(VertexHandle_t* pVertices, int nNumVertices, FreeVertexRemovalMode_t nRemoveMode)
{
	{
		int iVertex; // 243
	}
} /* size: 0 */

// <05F91AF5> meshutils/modelmesh.cpp:252
// variables: 8
// function calls: 11
void CModelMesh::SaveVerticesToKV3(KeyValues3* pKV3)
{
	int nNumBoneNames; // 254
	{
		KeyValues3* pStringList; // 257
		{
			UtlSymId_t iString; // 259
			{
				const char* pString; // 261
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
						int i);  // 1214
				CUtlString::Get(); // 1214
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1211
				CModelMesh::GetBoneName(
						int nBoneIndex);  // 261
			}
		}
		CKV3MemberName::CKV3MemberName<12>(
					const char& str);  // 257
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1203
	CModelMesh::GetNumBones(); // 254
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetStreamSet(); // 267
	{
		const uint32  m; // 226
		uint32 h; // 227
		uint32 k; // 228
		const int  r; // 229
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 267
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05F913DB> meshutils/modelmesh.cpp:273
// variables: 6
// function calls: 19
void CModelMesh::LoadVerticesFromKV3(const KeyValues3* pKV3, CUtlString* pOutError)
{
	const KeyValues3* pStreamData; // 290
	int nNumValues; // 291
	{
		const KeyValues3* pStringList; // 277
		{
			int iBone; // 279
			{
				const char* pBone; // 281
				{
					int iBone; // 1224
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
							int i);  // 1226
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 1226
				}
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1222
				CModelMesh::FindBoneByName(
						const char* pBoneName);  // 1240
				CModelMesh::FindOrCreateBone(
						const char* pBoneName);  // 282
			}
		}
		CKV3MemberName::CKV3MemberName<12>(
					const char& str);  // 277
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 277
	}
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 290
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 290
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 291
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetStreamSet(); // 293
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <05F90216> meshutils/modelmesh.cpp:299
// variables: 17
// function calls: 63
void CModelMesh::SaveToKV3(KeyValues3* pKV3)
{
	KeyValues3* pFaceGroups; // 304
	KeyValues3* pFaces; // 312
	{
		int iFaceGroup; // 307
		CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 307
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 309
		CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
				int i);  // 309
	}
	{
		int iFace; // 315
		{
			CFace face; // 317
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > vertices; // 319
			KeyValues3* pFace; // 322
			KeyValues3* pVertices; // 325
			{
				int i; // 328
				ComponentHandleWithListPointer_t::GetBaseIndex(); // 330
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 209
				KeyValues3::SetValueInt(
						int value);  // 330
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
						int i);  // 330
			}
			CKV3MemberName::CKV3MemberName<12>(
						const char& str);  // 323
			{
				const uint32  m; // 146
				uint32 h; // 147
				uint32 k; // 148
				const int  r; // 149
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<9>(
						const char& str);  // 325
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
					int i);  // 492
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
					int i);  // 492
			ComponentHandleWithListPointer_t::operator!=(
					InvalidMeshComponent_t);  // 495
			{
			}
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(
						int nIndex);  // 487
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(
						int nIndex);  // 181
			CModelMeshComponentList<CModelMesh::Face_t>::GetComponentHandle(
						ComponentIndex_t nIndex);  // 317
			CFace::GetVertices(
					CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutVertices);  // 320
			{
			}
			CFace::CFace(
				CModelMesh* pMesh,
				FaceHandle_t hFace);  // 1640
			CModelMesh::Face(
				FaceHandle_t hFace);  // 317
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 319
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 466
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
					int i);  // 470
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(
					ComponentHandle_t handle);  // 364
			CModelMeshComponentList<CModelMesh::Face_t>::GetComponent(
					ComponentHandle_t handle);  // 1770
			CModelMesh::GetFace(
				FaceHandle_t hFace);  // 2126
			CFace::GetFaceGroupIndex(); // 323
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 332
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
		CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
		CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 315
	}
	CKV3MemberName::CKV3MemberName<21>(
				const char& str);  // 301
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetStreamSet(); // 301
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetStreamSet(); // 302
	CKV3MemberName::CKV3MemberName<26>(
				const char& str);  // 302
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 304
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 305
	{
		const uint32  m; // 80
		uint32 h; // 81
		uint32 k; // 82
		const int  r; // 83
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 312
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 313
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <05F8EC4E> meshutils/modelmesh.cpp:338
// variables: 13
// function calls: 79
void CModelMesh::LoadFromKV3(const KeyValues3* pKV3, CUtlString* pOutError)
{
	const KeyValues3* pVerticesStreamData; // 342
	int nNumVertices; // 343
	const KeyValues3* pFaceVerticesStreamData; // 375
	{
		const KeyValues3* pFaceGroups; // 348
		{
			int i; // 350
			{
				int nFaceGroup; // 352
				CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Element(
					int i);  // 1148
				CUtlString::CUtlString(); // 296
				FaceGroup_t::FaceGroup_t(); // 1479
				Construct<CModelMesh::FaceGroup_t>(FaceGroup_t* pMemory); // 1148
				CUtlMemory<CModelMesh::FaceGroup_t, int>::NumAllocated(); // 1143
				CUtlMemory<CModelMesh::FaceGroup_t, int>::Base(); // 112
				CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Base(); // 368
				CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::AddToTail(); // 1023
				CModelMesh::AddFaceGroup(); // 352
			}
		}
		CKV3MemberName::CKV3MemberName<12>(
					const char& str);  // 348
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 348
	}
	{
		const KeyValues3* pFaces; // 357
		{
			int i; // 359
			{
				const KeyValues3* pFace; // 361
				{
					const KeyValues3* pVertices; // 363
					{
						CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > vertices; // 365
						int nGroupIndex; // 369
						{
							int j; // 366
							KeyValues3::Internal_Type(); // 90
							KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
							KeyValues3::GetType(); // 696
							{
							}
							KV3Helper_StringToNumber<int>(const char* pString); // 715
							KeyValues3::GetValueAsNumeric<int>(); // 694
							KeyValues3::GetValueAsNumeric<int>(); // 184
							KeyValues3::GetValueInt(); // 367
							CHalfEdgeComponentList<CModelMesh::Vertex_t>::InvalidHandle(); // 490
							Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 489
							CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
									int i);  // 595
							operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this,
									int i);  // 492
							CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
									int i);  // 595
							operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
									int i);  // 492
							ComponentHandleWithListPointer_t::operator!=(
									InvalidMeshComponent_t);  // 495
							{
							}
							CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandle(
										int nIndex);  // 487
							CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentHandle(
										int nIndex);  // 181
							CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentHandle(
										ComponentIndex_t nIndex);  // 367
							CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
									int i);  // 602
							Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
								int i);  // 1252
							Construct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory); // 1252
							ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 824
							GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
									int num);  // 1249
							AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
									ComponentHandleWithListPointer_t& src);  // 367
						}
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
						CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
								int growSize,
								int initCapacity);  // 418
						CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 365
						CKV3MemberName::CKV3MemberName<12>(
									const char& str);  // 369
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
						Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
						ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
						~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
						~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 371
					}
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 101
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 101
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							const KeyValues3* pDefaultValue);  // 363
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 363
				}
			}
		}
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<6>(
					const char& str);  // 357
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 357
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 342
	CKV3MemberName::CKV3MemberName<21>(
				const char& str);  // 342
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 343
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetStreamSet(); // 345
	CKV3MemberName::CKV3MemberName<26>(
				const char& str);  // 375
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 375
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetStreamSet(); // 376
} /* size: 0, variables: 3, inline expansions: 13 (0 bytes) */

// <05F8EB8A> meshutils/modelmesh.cpp:385
// function calls: 3
void CModelMesh::GetNumFaceVertices()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::Count(); // 387
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F8E8E7> meshutils/modelmesh.cpp:393
// function calls: 10
void CModelMesh::GetFaceVertexHandleForIndex(int nFaceVertexIndex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 489
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::InvalidHandle(); // 490
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 492
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 492
	ComponentHandleWithListPointer_t::operator!=(
			InvalidMeshComponent_t);  // 495
	{
	}
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentHandle(
				int nIndex);  // 487
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentHandle(
				int nIndex);  // 181
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentHandle(
				ComponentIndex_t nIndex);  // 395
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F8E2B7> meshutils/modelmesh.cpp:401
// variable: 1
// function calls: 26
void CModelMesh::GetAllFaceVertices(CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertices)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 508
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 509
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 510
	{
		int iComp; // 518
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
				int num);  // 1198
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
															const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
				const ComponentHandleWithListPointer_t& src);  // 520
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
				int i);  // 522
		ComponentHandleWithListPointer_t::operator!=(
				InvalidMeshComponent_t);  // 522
		{
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this,
				int i);  // 520
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 520
	}
	{
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1861
	NumAllocated(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 515
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(
																CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon handleVector);  // 403
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F8E00B> meshutils/modelmesh.cpp:409
// function calls: 10
void CModelMesh::IsFaceVertexInMesh(FaceVertexHandle_t hFaceVertex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 411
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05FA25AD> meshutils/modelmesh.cpp:417
// variable: 1
// function calls: 11
void CModelMesh::GetOutgoingEdgeConnectedToFaceVertex(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 419
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 419
	CModelMesh::GetOutgoingEdgeConnectedToFaceVertex(
						FaceVertexHandle_t hFaceVertex);  // 417
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <05F8DFD4> meshutils/modelmesh.cpp:417
// variable: 1
void CModelMesh::GetOutgoingEdgeConnectedToFaceVertex(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 419
} /* size: 0, variables: 1 */

// <05FA41D5> meshutils/modelmesh.cpp:429
// variables: 2
void CModelMesh::GetIncomingEdgeConnectedToFaceVertex(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 431
	const FaceVertex_t* pPrevFaceVertex; // 435
} /* size: 0, variables: 2 */

// <05FA2894> meshutils/modelmesh.cpp:445
// variable: 1
// function calls: 11
void CModelMesh::GetNextFaceVertexInFace(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 447
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 447
	CModelMesh::GetNextFaceVertexInFace(
				FaceVertexHandle_t hFaceVertex);  // 445
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <05F8DF59> meshutils/modelmesh.cpp:445
// variable: 1
void CModelMesh::GetNextFaceVertexInFace(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 447
} /* size: 0, variables: 1 */

// <05FA2B7B> meshutils/modelmesh.cpp:457
// variable: 1
// function calls: 11
void CModelMesh::GetPreviousFaceVertexInFace(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 459
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 459
	CModelMesh::GetNextFaceVertexInFace(
				FaceVertexHandle_t hFaceVertex);  // 445
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <05F8DF22> meshutils/modelmesh.cpp:457
// variable: 1
void CModelMesh::GetPreviousFaceVertexInFace(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 459
} /* size: 0, variables: 1 */

// <05F8DBD6> meshutils/modelmesh.cpp:471
// variables: 3
// function calls: 12
void CModelMesh::GetFaceVertexForVertex(FaceHandle_t hFace, VertexHandle_t hVertex)
{
	const Vertex_t* pVertex; // 473
	FaceVertexHandle_t hCurrentFaceVertex; // 477
	{
		const FaceVertex_t* pFaceVertex; // 480
		ComponentHandleWithListPointer_t::operator==(
				const ComponentHandleWithListPointer_t& src);  // 481
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1721
	CModelMesh::GetVertex(
			VertexHandle_t hVertex);  // 473
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 478
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <05F8D585> meshutils/modelmesh.cpp:495
// variables: 2
// function calls: 22
void CModelMesh::GetEdgesConnectedToVertex(VertexHandle_t hVertex, CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<C pOutEdgeTable)
{
	const Vertex_t* pVertex; // 500
	FaceVertexHandle_t hCurrentFaceVertex; // 501
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 497
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 502
	CModelMesh::GetOutgoingEdgeConnectedToFaceVertex(
						FaceVertexHandle_t hFaceVertex);  // 417
	CModelMesh::GetOutgoingEdgeConnectedToFaceVertex(
						FaceVertexHandle_t hFaceVertex);  // 504
	ComponentHandleWithListPointer_t::AsInt(); // 887
	Mix32HashFunctor::operator(
			uint32 n);  // 887
	DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::operator(
			const EdgeHandle_t& handle);  // 240
	operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t this,
			int i);  // 706
	CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(
													const ComponentHandleWithListPointer_t& k);  // 1514
	Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory); // 706
	DoInsert<const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
													const ComponentHandleWithListPointer_t& k,
													unsigned int h,
													bool* pDidInsert);  // 695
	DoInsert<const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
													const ComponentHandleWithListPointer_t& k,
													unsigned int h,
													bool* pDidInsert);  // 240
	Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
		KeyArg_t k);  // 504
	operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t this,
			int i);  // 706
	CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(
													const ComponentHandleWithListPointer_t& k);  // 1514
	Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory); // 706
	DoInsert<const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
													const ComponentHandleWithListPointer_t& k,
													unsigned int h,
													bool* pDidInsert);  // 695
	DoInsert<const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
													const ComponentHandleWithListPointer_t& k,
													unsigned int h,
													bool* pDidInsert);  // 240
	Mix32HashFunctor::operator(
			uint32 n);  // 887
	ComponentHandleWithListPointer_t::AsInt(); // 887
	DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::operator(
			const EdgeHandle_t& handle);  // 240
	Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
		KeyArg_t k);  // 505
} /* size: 0, variables: 2, inline expansions: 22 (0 bytes) */

// <05F8D4C1> meshutils/modelmesh.cpp:512
// function calls: 3
void CModelMesh::GetNumEdges()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Edge_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Edge_t>::Count(); // 514
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F8D21E> meshutils/modelmesh.cpp:520
// function calls: 10
void CModelMesh::GetEdgeHandleForIndex(int nEdgeIndex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 489
	CHalfEdgeComponentList<CModelMesh::Edge_t>::InvalidHandle(); // 490
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 492
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 492
	ComponentHandleWithListPointer_t::operator!=(
			InvalidMeshComponent_t);  // 495
	{
	}
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentHandle(
				int nIndex);  // 487
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentHandle(
				int nIndex);  // 181
	CModelMeshComponentList<CModelMesh::Edge_t>::GetComponentHandle(
				ComponentIndex_t nIndex);  // 522
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F8CBEE> meshutils/modelmesh.cpp:529
// variable: 1
// function calls: 26
void CModelMesh::GetAllEdgeHandles(CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutEdgeHandles)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 508
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 509
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int num);  // 510
	{
		int iComp; // 518
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int num);  // 1198
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				const ComponentHandleWithListPointer_t& src);  // 520
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 522
		ComponentHandleWithListPointer_t::operator!=(
				InvalidMeshComponent_t);  // 522
		{
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 520
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 520
	}
	{
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1861
	NumAllocated(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 515
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > >(
																CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis handleVector);  // 531
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F8C942> meshutils/modelmesh.cpp:537
// function calls: 10
void CModelMesh::IsEdgeInMesh(EdgeHandle_t hEdge)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Edge_t>::GetComponent(
			ComponentHandle_t handle);  // 1754
	CModelMesh::GetEdge(
		EdgeHandle_t hEdge);  // 539
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05FA5479> meshutils/modelmesh.cpp:546
void CModelMesh::GetNumFacesConnectedToEdge(EdgeHandle_t hEdge)
{
} /* size: 0 */

// <05F8BF5B> meshutils/modelmesh.cpp:554
// variables: 5
// function calls: 40
void CModelMesh::FindEdgeConnectingVertices(VertexHandle_t hVertexA, VertexHandle_t hVertexB)
{
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> connectedFaceVertices; // 559
	const int  nNumFaceVertices; // 563
	{
		int i; // 564
		{
			const FaceVertex_t* pFaceVertex; // 566
			const FaceVertex_t* pNextFaceVertex; // 567
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
					int i);  // 566
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 569
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 569
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 570
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 570
		}
	}
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 556
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 556
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 559
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 563
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
		int numElements);  // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 579
} /* size: 0, variables: 2, inline expansions: 34 (0 bytes) */

// <05F8BCFA> meshutils/modelmesh.cpp:595
// variables: 6
// function calls: 3
void CModelMesh::ReplaceVertexInFace(FaceHandle_t hFace, VertexHandle_t hVertexToReplace, VertexHandle_t hVertexDst)
{
	FaceVertexHandle_t hFaceVertexToReplace; // 598
	FaceVertex_t* pFaceVertexToReplace; // 599
	Vertex_t* pDstVertex; // 603
	FaceVertexHandle_t hFaceVertexDst; // 608
	{
		FaceVertex_t* pNextFaceVertex; // 630
		FaceVertex_t* pPrevFaceVertex; // 631
	}
	ComponentHandleWithListPointer_t::operator!=(
			InvalidMeshComponent_t);  // 609
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 611
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 612
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

// <05F8A942> meshutils/modelmesh.cpp:647
// variables: 13
// function calls: 84
void CModelMesh::CollapseEdge(EdgeHandle_t hEdge)
{
	Edge_t* pEdge; // 649
	VertexHandle_t hVertexA; // 653
	VertexHandle_t hVertexB; // 654
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> facesConnectedToVertexA; // 656
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> edgesConnectedToVertexA; // 659
	{
		FaceHandle_t hFace; // 662
		CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>& __for_range; // 21666
		iterator __for_begin; // 10187
		iterator __for_end; // 10187
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 662
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 662
	}
	{
		EdgeHandle_t hConnectedEdge; // 669
		CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>& __for_range; // 21672
		iterator __for_begin; // 3847
		iterator __for_end; // 3847
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 669
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 669
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemoryFixedGrowable_Base(
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 656
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 975
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 980
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1247
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
		int i);  // 1252
	Construct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory); // 1252
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			int num);  // 1249
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			ComponentHandleWithListPointer_t& src);  // 982
	CModelMesh::GetFacesConnectedToVertex<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> >(
																VertexHandle_t hVertex,
																CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* pOutFaces);  // 657
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemoryFixedGrowable_Base(
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 659
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::Purge(
		int numElements);  // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 675
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1798
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 237
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 675
} /* size: 0, variables: 5, inline expansions: 74 (0 bytes) */

// <05F8A7F2> meshutils/modelmesh.cpp:680
// variables: 2
// function calls: 2
void CModelMesh::FindOrCreateEdgeConnectingVertices(VertexHandle_t hVertexA, VertexHandle_t hVertexB)
{
	EdgeHandle_t hEdge; // 682
	{
		Edge_t* pEdge; // 688
		ComponentHandleWithListPointer_t::operator>(
				const ComponentHandleWithListPointer_t& src);  // 691
	}
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 684
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05F8A72E> meshutils/modelmesh.cpp:709
// function calls: 3
void CModelMesh::GetNumFaces()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 711
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F8A48B> meshutils/modelmesh.cpp:717
// function calls: 10
void CModelMesh::GetFaceHandleForIndex(int nFaceIndex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 489
	CHalfEdgeComponentList<CModelMesh::Face_t>::InvalidHandle(); // 490
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 492
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 492
	ComponentHandleWithListPointer_t::operator!=(
			InvalidMeshComponent_t);  // 495
	{
	}
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(
				int nIndex);  // 487
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(
				int nIndex);  // 181
	CModelMeshComponentList<CModelMesh::Face_t>::GetComponentHandle(
				ComponentIndex_t nIndex);  // 719
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F89E5B> meshutils/modelmesh.cpp:725
// variable: 1
// function calls: 26
void CModelMesh::GetAllFaces(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutAllFaces)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 508
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 509
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int num);  // 510
	{
		int iComp; // 518
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int num);  // 1198
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				const ComponentHandleWithListPointer_t& src);  // 520
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 522
		ComponentHandleWithListPointer_t::operator!=(
				InvalidMeshComponent_t);  // 522
		{
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 520
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 520
	}
	{
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1861
	NumAllocated(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 515
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandles<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(
																CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis handleVector);  // 727
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F89BAF> meshutils/modelmesh.cpp:733
// function calls: 10
void CModelMesh::IsFaceInMesh(FaceHandle_t hFace)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 1770
	CModelMesh::GetFace(
		FaceHandle_t hFace);  // 735
} /* size: 0, inline expansions: 10 (0 bytes) */

// <05F894A7> meshutils/modelmesh.cpp:741
// variables: 6
// function calls: 24
void CModelMesh::AddFaces(int nNumFaces, const int* pVertexCountsForEachFace, const VertexHandle_t* pVerticesUsedByEachFace, int nFaceGroupIndex, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaceHandles, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertexHandles)
{
	int nTotalVertexCount; // 751
	int nVerticesOffset; // 769
	{
		int iFace; // 752
	}
	{
		int iFace; // 771
		{
			const int  nNumVertices; // 774
			FaceHandle_t hNewFace; // 775
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
			CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 219
			CModelMeshComponentList<CModelMesh::Face_t>::CanAddComponents(
					int nNumComponents);  // 792
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 219
			CModelMeshComponentList<CModelMesh::FaceVertex_t>::CanAddComponents(
					int nNumComponents);  // 793
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
			CHalfEdgeComponentList<CModelMesh::Edge_t>::Count(); // 219
			CModelMeshComponentList<CModelMesh::Edge_t>::CanAddComponents(
					int nNumComponents);  // 794
			CModelMesh::AddFace(
				const VertexHandle_t* pVertices,
				int nNumVertices,
				int nFaceGroupIndex,
				CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertexHandles);  // 775
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 781
		}
	}
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 760
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 761
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 765
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::Count(); // 766
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <05FA7BF7> meshutils/modelmesh.cpp:789
// variables: 3
// function calls: 9
void CModelMesh::AddFace(const VertexHandle_t* pVertices, int nNumVertices, int nFaceGroupIndex, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertexHandles)
{
	FaceHandle_t hFace; // 797
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> faceVertexHandles; // 799
	Face_t* pFace; // 804
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 219
	CModelMeshComponentList<CModelMesh::Face_t>::CanAddComponents(
			int nNumComponents);  // 792
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 219
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::CanAddComponents(
			int nNumComponents);  // 793
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Edge_t>::Count(); // 219
	CModelMeshComponentList<CModelMesh::Edge_t>::CanAddComponents(
			int nNumComponents);  // 794
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <05FA6752> meshutils/modelmesh.cpp:789
// variables: 13
// function calls: 81
void CModelMesh::AddFace(const VertexHandle_t* pVertices, int nNumVertices, int nFaceGroupIndex, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertexHandles)
{
	FaceHandle_t hFace; // 797
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> faceVertexHandles; // 799
	Face_t* pFace; // 804
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 799
	RemoveMultipleFromTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
				int num);  // 1323
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
		int count);  // 800
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 749
	{
		int iComp; // 754
		{
			ComponentHandle_t handle; // 756
		}
	}
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::AddMultiple(
			int nCount,
			ComponentHandle_t* pHandles);  // 243
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 245
	{
	}
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::AddMultiple(
			int nCount,
			ComponentHandle_t* pOutHandles);  // 241
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::AddMultiple(
			int nCount,
			ComponentHandle_t* pOutHandles);  // 801
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int i);  // 805
	{
		int iVertex; // 810
		{
			const int  nNextVertexIndex; // 812
			const int  nPrevVertexIndex; // 813
			VertexHandle_t hVertex; // 815
			FaceVertexHandle_t hFaceVertex; // 816
			FaceVertex_t* pFaceVertex; // 818
			Vertex_t* pVertex; // 826
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
					int i);  // 546
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 466
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
					int i);  // 470
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 364
			CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 1721
			CModelMesh::GetVertex(
					VertexHandle_t hVertex);  // 826
			{
			}
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
					int i);  // 816
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
					int i);  // 822
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
					int i);  // 823
		}
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 834
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 834
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 782
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int i);  // 1502
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
															const ComponentHandleWithListPointer_t& src);  // 1502
	}
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
				int elem,
				int num,
				const ComponentHandleWithListPointer_t* pToInsert);  // 1476
	InsertMultipleBefore(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
				int elem,
				int num,
				const ComponentHandleWithListPointer_t* pToInsert);  // 1303
	AddMultipleToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
				int num,
				const ComponentHandleWithListPointer_t* pToCopy);  // 834
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
		int numElements);  // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 838
} /* size: 0, variables: 3, inline expansions: 62 (0 bytes) */

// <05F893AC> meshutils/modelmesh.cpp:789
// variables: 12
void CModelMesh::AddFace(const VertexHandle_t* pVertices, int nNumVertices, int nFaceGroupIndex, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertexHandles)
{
	FaceHandle_t hFace; // 797
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> faceVertexHandles; // 799
	Face_t* pFace; // 804
	const char   __FUNCTION__; // 36292
	{
		int iVertex; // 810
		{
			const int  nNextVertexIndex; // 812
			const int  nPrevVertexIndex; // 813
			VertexHandle_t hVertex; // 815
			FaceVertexHandle_t hFaceVertex; // 816
			FaceVertex_t* pFaceVertex; // 818
			Vertex_t* pVertex; // 826
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 827
			}
		}
	}
} /* size: 0, variables: 4 */

// <05F89208> meshutils/modelmesh.cpp:843
// variables: 4
// function calls: 3
void CModelMesh::DetachFaceVertexFromVertex(FaceVertexHandle_t hFaceVertex)
{
	FaceVertex_t* pFaceVertex; // 845
	Vertex_t* pVertex; // 849
	{
		FaceVertexHandle_t hCurrentFaceVertex; // 861
		{
			FaceVertex_t* pPrevFaceVertex; // 864
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 867
		}
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 862
	}
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 851
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <05F88EED> meshutils/modelmesh.cpp:879
// variables: 2
// function calls: 11
void CModelMesh::AttachFaceVertexToVertex(FaceVertexHandle_t hFaceVertex, VertexHandle_t hVertex)
{
	FaceVertex_t* pFaceVertex; // 881
	Vertex_t* pVertex; // 882
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1721
	CModelMesh::GetVertex(
			VertexHandle_t hVertex);  // 882
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 887
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <05F88D2E> meshutils/modelmesh.cpp:903
// variables: 4
// function calls: 2
void CModelMesh::RemoveFaceVertexFromFace(FaceVertexHandle_t hFaceVertex)
{
	FaceVertex_t* pFaceVertex; // 905
	Face_t* pFace; // 909
	FaceVertex_t* pNextFaceVertex; // 913
	FaceVertex_t* pPrevFaceVertex; // 914
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 919
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 929
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <05F87618> meshutils/modelmesh.cpp:947
// variables: 11
// function calls: 95
void CModelMesh::RemoveFace(FaceHandle_t hFace, FreeVertexRemovalMode_t nRemoveMode)
{
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> connectedFaceVertices; // 953
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> connectedEdges; // 957
	const int  nNumFaceVertices; // 964
	const int  nNumEdges; // 988
	{
		int i; // 965
		{
			FaceVertexHandle_t hFaceVertex; // 967
			{
				FaceVertex_t* pFaceVertex; // 975
				Vertex_t* pVertex; // 976
				ComponentHandleWithListPointer_t::operator==(
						const ComponentHandleWithListPointer_t& src);  // 977
			}
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
					int i);  // 967
		}
	}
	{
		int iEdge; // 989
		{
			EdgeHandle_t hEdge; // 991
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
					int i);  // 991
			CModelMesh::GetNumFacesConnectedToEdge(
							EdgeHandle_t hEdge);  // 992
		}
	}
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 949
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 953
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 930
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			int num);  // 1198
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
		int i);  // 1201
	CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this,
			const ComponentHandleWithListPointer_t& src);  // 938
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 941
	CModelMesh::GetFaceVerticesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> >(
																FaceHandle_t hFace,
																CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* pOutFaceVertices);  // 954
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 952
	{
		const FaceVertex_t* pFaceVertex; // 960
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
				const ComponentHandleWithListPointer_t& src);  // 961
	}
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 964
	CModelMesh::GetEdgesConnectedToFace<CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> >(
																FaceHandle_t hFace,
																CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* pOutEdges);  // 958
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemoryFixedGrowable_Base(
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 857
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::CUtlVectorMeshComponents(
				int nGrowSize);  // 957
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 964
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 988
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1798
	AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 8>::Base(); // 237
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge_FixedGrowable(
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedGrowabl this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 997
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1798
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, this); // 237
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ConvertToExternalMemory(
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this,
		int numElements);  // 1799
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, in this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16, int this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemoryFixedG this); // 478
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 16>::~CUtlVectorFixedGrowable(); // 854
	CUtlVectorMeshComponents<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::~CUtlVectorMeshComponents(); // 997
} /* size: 0, variables: 4, inline expansions: 80 (0 bytes) */

// <05F8756B> meshutils/modelmesh.cpp:1002
// variable: 1
void CModelMesh::RemoveFaces(const FaceHandle_t* pFaces, int nNumFaces, FreeVertexRemovalMode_t nRemoveMode)
{
	{
		int iFace; // 1004
	}
} /* size: 0 */

// <05F87508> meshutils/modelmesh.cpp:1013
// function call: 1
void CModelMesh::GetNumFaceGroups()
{
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1015
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05FA4D1E> meshutils/modelmesh.cpp:1021
// function calls: 11
void CModelMesh::AddFaceGroup()
{
	CUtlMemory<CModelMesh::FaceGroup_t, int>::NumAllocated(); // 1143
	CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 296
	FaceGroup_t::FaceGroup_t(); // 1479
	Construct<CModelMesh::FaceGroup_t>(FaceGroup_t* pMemory); // 1148
	CUtlMemory<CModelMesh::FaceGroup_t, int>::Base(); // 112
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Base(); // 368
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::AddToTail(); // 1023
} /* size: 0, inline expansions: 11 (0 bytes) */

// <05F874EB> meshutils/modelmesh.cpp:1021
void CModelMesh::AddFaceGroup()
{
} /* size: 0 */

// <05F86C44> meshutils/modelmesh.cpp:1029
// variables: 5
// function calls: 36
void CModelMesh::RemoveFaceGroup(int nFaceGroupToRemove)
{
	CUtlVector<int, CUtlMemory<int, int> > remapTable; // 1033
	const int  nNumFaces; // 1049
	{
		int iGroup; // 1036
	}
	{
		int iGroup; // 1040
		CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1040
	}
	{
		int iFace; // 1050
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
				int i);  // 415
		CHalfEdgeComponentList<CModelMesh::Face_t>::operator[](
				int nIndex);  // 153
		CModelMeshComponentList<CModelMesh::Face_t>::operator[](
				ComponentIndex_t nIndex);  // 1052
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1052
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1033
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1034
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1035
	CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Element(
		int i);  // 1607
	CUtlString::~CUtlString(); // 296
	FaceGroup_t::~FaceGroup_t(); // 1526
	Destruct<CModelMesh::FaceGroup_t>(FaceGroup_t* pMemory); // 1607
	CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Element(
		int i);  // 1114
	CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Remove(
		int elem);  // 1046
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 1049
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1054
} /* size: 0, variables: 2, inline expansions: 29 (0 bytes) */

// <05FA2E5A> meshutils/modelmesh.cpp:1059
// function calls: 6
void CModelMesh::SetFaceGroupMaterial(int nFaceGroup, const char* pMaterialName)
{
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1061
	{
	}
	CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
			int i);  // 1065
	CUtlString::operator=(
			const char* src);  // 1065
	CModelMesh::SetFaceGroupMaterial(
				int nFaceGroup,
				const char* pMaterialName);  // 1059
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1062
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05F86BAF> meshutils/modelmesh.cpp:1059
// variables: 2
void CModelMesh::SetFaceGroupMaterial(int nFaceGroup, const char* pMaterialName)
{
	const char   __FUNCTION__; // 36623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
} /* size: 0, variables: 1 */

// <05F86A23> meshutils/modelmesh.cpp:1071
// variables: 2
// function calls: 5
void CModelMesh::GetFaceGroupMaterial(int nFaceGroup)
{
	const char   __FUNCTION__; // 36623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1073
	}
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1073
	CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
			int i);  // 1077
	CUtlString::Get(); // 1077
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1074
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05F8641E> meshutils/modelmesh.cpp:1083
// variables: 2
// function calls: 26
void CModelMesh::FindFaceGroupsUsingMaterial(const char* pMaterialName, CUtlVector<int, CUtlMemory<int, int> >* pOutFaceGroupIndices)
{
	const int  nNumGroups; // 1085
	{
		int iGroup; // 1089
		CUtlString::Get(); // 1091
		CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
				int i);  // 1091
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 1093
	}
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1085
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1087
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 1087
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 932
	CUtlMemory<int, int>::Purge(
		int numElements);  // 918
	CUtlMemory<int, int>::Purge(
		int numElements);  // 1837
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1855
	CUtlVectorBase<int, CUtlMemory<int, int> >::Compact(); // 1097
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <05F86394> meshutils/modelmesh.cpp:1103
void CModelMesh::AssignFaceToGroup(FaceHandle_t hFace, int nFaceGroup)
{
} /* size: 0 */

// <05FA2FF5> meshutils/modelmesh.cpp:1111
// variables: 2
// function calls: 13
void CModelMesh::AssignFacesToGroup(FaceHandle_t* pFacesHandles, int nNumFaces, int nFaceGroup)
{
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1113
	{
	}
	{
		int iFace; // 1117
		{
			Face_t* pFace; // 1119
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 466
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
					int i);  // 470
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(
					ComponentHandle_t handle);  // 364
			CModelMeshComponentList<CModelMesh::Face_t>::GetComponent(
					ComponentHandle_t handle);  // 1770
			CModelMesh::GetFace(
				FaceHandle_t hFace);  // 1119
		}
	}
	CModelMesh::AssignFacesToGroup(
				FaceHandle_t* pFacesHandles,
				int nNumFaces,
				int nFaceGroup);  // 1111
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1114
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F862EE> meshutils/modelmesh.cpp:1111
// variables: 4
void CModelMesh::AssignFacesToGroup(FaceHandle_t* pFacesHandles, int nNumFaces, int nFaceGroup)
{
	const char   __FUNCTION__; // 36569
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1113
	}
	{
		int iFace; // 1117
		{
			Face_t* pFace; // 1119
		}
	}
} /* size: 0, variables: 1 */

// <05F85C23> meshutils/modelmesh.cpp:1130
// variables: 2
// function calls: 30
void CModelMesh::FindFacesInFaceGroup(int nFaceGroup, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaceHandles)
{
	const int  nNumFaces; // 1132
	{
		int iFace; // 1135
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 421
		CHalfEdgeComponentList<CModelMesh::Face_t>::operator[](
				int nIndex);  // 162
		CModelMeshComponentList<CModelMesh::Face_t>::operator[](
				ComponentIndex_t nIndex);  // 1137
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 489
		CHalfEdgeComponentList<CModelMesh::Face_t>::InvalidHandle(); // 490
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
				int i);  // 492
		ComponentHandleWithListPointer_t::operator!=(
				InvalidMeshComponent_t);  // 495
		{
		}
		CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(
					int nIndex);  // 487
		CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentHandle(
					int nIndex);  // 181
		CModelMeshComponentList<CModelMesh::Face_t>::GetComponentHandle(
					ComponentIndex_t nIndex);  // 1139
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1247
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 1252
		Construct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory); // 1252
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int num);  // 1249
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				ComponentHandleWithListPointer_t& src);  // 1139
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 1132
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1133
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int num);  // 1133
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <05F85A18> meshutils/modelmesh.cpp:1147
// variables: 2
// function calls: 7
void CModelMesh::HasFacesInFaceGroup(int nFaceGroup)
{
	const int  nNumFaces; // 1149
	{
		int iFace; // 1151
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 421
		CHalfEdgeComponentList<CModelMesh::Face_t>::operator[](
				int nIndex);  // 162
		CModelMeshComponentList<CModelMesh::Face_t>::operator[](
				ComponentIndex_t nIndex);  // 1153
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 1149
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05F857BA> meshutils/modelmesh.cpp:1165
// variables: 2
// function calls: 8
void CModelMesh::SetBoneNames(const char ** pBoneNames, int nNumBoneNames)
{
	{
		int i; // 1170
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1172
		CUtlString::operator=(
				const char* src);  // 1172
	}
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1167
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F854B2> meshutils/modelmesh.cpp:1179
// variables: 2
// function calls: 11
void CModelMesh::SetBoneNames(CUtlString* pBoneNames, int nNumBoneNames)
{
	{
		int i; // 1184
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 1186
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1186
	}
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1181
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F850FF> meshutils/modelmesh.cpp:1193
// function calls: 17
void CModelMesh::GetBoneNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pOutBoneNames)
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 1195
} /* size: 0, inline expansions: 17 (0 bytes) */

// <05FA3353> meshutils/modelmesh.cpp:1201
// function call: 1
void CModelMesh::GetNumBones()
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1203
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F850E2> meshutils/modelmesh.cpp:1201
void CModelMesh::GetNumBones()
{
} /* size: 0 */

// <05FA33AD> meshutils/modelmesh.cpp:1209
// function calls: 4
void CModelMesh::GetBoneName(int nBoneIndex)
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1211
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 1214
	CUtlString::Get(); // 1214
} /* size: 0, inline expansions: 4 (0 bytes) */

// <05F850B8> meshutils/modelmesh.cpp:1209
void CModelMesh::GetBoneName(int nBoneIndex)
{
} /* size: 0 */

// <05FA349F> meshutils/modelmesh.cpp:1220
// variables: 2
// function calls: 5
void CModelMesh::FindBoneByName(const char* pBoneName)
{
	const int  nNumBones; // 1222
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1222
	{
		int iBone; // 1224
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1226
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1226
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05F8505E> meshutils/modelmesh.cpp:1220
// variables: 2
void CModelMesh::FindBoneByName(const char* pBoneName)
{
	const int  nNumBones; // 1222
	{
		int iBone; // 1224
	}
} /* size: 0, variables: 1 */

// <05FA52A0> meshutils/modelmesh.cpp:1238
// variables: 2
// function calls: 6
void CModelMesh::FindOrCreateBone(const char* pBoneName)
{
	int nIndex; // 1240
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1222
	{
		int iBone; // 1224
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1226
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1226
	}
	CModelMesh::FindBoneByName(
			const char* pBoneName);  // 1240
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05FA4F52> meshutils/modelmesh.cpp:1238
// variable: 1
// function calls: 13
void CModelMesh::FindOrCreateBone(const char* pBoneName)
{
	int nIndex; // 1240
	CUtlString::CUtlString(
			const char* pString);  // 1243
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 1243
	CUtlString::~CUtlString(); // 1243
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <05F85027> meshutils/modelmesh.cpp:1238
// variable: 1
void CModelMesh::FindOrCreateBone(const char* pBoneName)
{
	int nIndex; // 1240
} /* size: 0, variables: 1 */

// <05F84DCE> meshutils/modelmesh.cpp:1252
// variable: 1
// function calls: 9
void CModelMesh::DoBoneListsMatch(const CModelMesh& otherMesh)
{
	{
		int i; // 1257
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1257
		CUtlString::Get(); // 1259
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1259
		CUtlString::Get(); // 1259
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1259
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1254
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1254
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05F84D2B> meshutils/modelmesh.cpp:1271
// function call: 1
void CModelMesh::RemoveBoneName(int nBoneIndex)
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::IsValidIndex(
			int i);  // 1273
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F84C30> meshutils/modelmesh.cpp:1283
// variables: 3
// function call: 1
void CModelMesh::RemoveBoneNames(const int* pBones, int nNumBonesToRemove)
{
	{
		int iBone; // 1285
		{
			bool bRemove; // 1287
			{
				int iCheck; // 1289
			}
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1285
	}
} /* size: 0 */

// <05F84816> meshutils/modelmesh.cpp:1308
// variables: 3
// function calls: 15
void CModelMesh::RenameBone(const char* pOldName, const char* pNewName)
{
	int nIndex; // 1310
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1222
	{
		int iBone; // 1224
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1226
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1226
	}
	CModelMesh::FindBoneByName(
			const char* pBoneName);  // 1310
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1222
	{
		int iBone; // 1224
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 1226
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1226
	}
	CModelMesh::FindBoneByName(
			const char* pBoneName);  // 1314
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 1317
	CUtlString::operator=(
			const char* src);  // 1317
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05FA40FB> meshutils/modelmesh.cpp:1325
// variable: 1
// function calls: 2
void CModelMesh::GetVertexConnectedToFaceVertex(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 1330
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 1327
	CModelMesh::GetVertexConnectedToFaceVertex(
					FaceVertexHandle_t hFaceVertex);  // 1325
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05F847DF> meshutils/modelmesh.cpp:1325
// variable: 1
void CModelMesh::GetVertexConnectedToFaceVertex(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 1330
} /* size: 0, variables: 1 */

// <05FA4021> meshutils/modelmesh.cpp:1338
// variable: 1
// function calls: 2
void CModelMesh::GetFaceConnectedToFaceVertex(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 1343
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 1340
	CModelMesh::GetFaceConnectedToFaceVertex(
					FaceVertexHandle_t hFaceVertex);  // 1338
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05F847A8> meshutils/modelmesh.cpp:1338
// variable: 1
void CModelMesh::GetFaceConnectedToFaceVertex(FaceVertexHandle_t hFaceVertex)
{
	const FaceVertex_t* pFaceVertex; // 1343
} /* size: 0, variables: 1 */

// <05F8461A> meshutils/modelmesh.cpp:1350
// function calls: 6
void CModelMesh::GetVertexComponentIndex(VertexHandle_t hVertex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 171
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 1352
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05F8448C> meshutils/modelmesh.cpp:1358
// function calls: 6
void CModelMesh::GetFaceVertexComponentIndex(FaceVertexHandle_t hFaceVertex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 171
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 1360
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05F842FE> meshutils/modelmesh.cpp:1366
// function calls: 6
void CModelMesh::GetFaceComponentIndex(FaceHandle_t hFace)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 171
	CModelMeshComponentList<CModelMesh::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 1368
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05F83F91> meshutils/modelmesh.cpp:1374
// variables: 9
// function calls: 6
void CalculateStreamSetHashIncremental(CRC64_t* pCRC, const CModelMeshStreamSet& streamSet)
{
	int nNumStreams; // 1376
	{
		int iStream; // 1379
		{
			CModelStreamReader streamReader; // 1381
			const char* pStreamName; // 1383
			int nLen; // 1384
			const char* pStreamTypeName; // 1387
			int nTypeLen; // 1388
			int nUint32Count; // 1391
			const uint32* pRaw; // 1392
			V_strlen(const char* str); // 1384
			CModelStreamReader::GetTypeName(); // 1387
			V_strlen(const char* str); // 1388
			GetNumComponentsForModelStreamType(ModelStreamType_t nStreamType); // 596
			CModelStreamReader::GetValuesRaw(
					int* pOutNumUInt32s);  // 1392
			CModelStreamReader::GetName(); // 1383
		}
	}
} /* size: 0, variables: 1 */

// <05F6EB27> meshutils/modelmesh.cpp:1401
// variables: 10
void CalculateDeltaSetHashIncremental<CModelMesh::Vertex_t>(CRC64_t* pCRC, const CModelMeshComponentList<CModelMesh::Vertex_t>& componentList)
{
	const CModelMeshDeltaSet<CModelMesh::Vertex_t>& deltaSet; // 1403
	int nNumDeltas; // 1404
	{
		int iDelta; // 1407
		{
			DeltaIndex_t nDeltaIndex; // 1409
			const CModelMeshDelta<CModelMesh::Vertex_t>* pDelta; // 1410
			const char* pDeltaName; // 1412
			int nLen; // 1413
			{
				int iValue; // 1418
				{
					ComponentHandle_t hComponent; // 1420
					int info; // 1422
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <05F6EA6A> meshutils/modelmesh.cpp:1401
// variables: 10
void CalculateDeltaSetHashIncremental<CModelMesh::FaceVertex_t>(CRC64_t* pCRC, const CModelMeshComponentList<CModelMesh::FaceVertex_t>& componentList)
{
	const CModelMeshDeltaSet<CModelMesh::FaceVertex_t>& deltaSet; // 1403
	int nNumDeltas; // 1404
	{
		int iDelta; // 1407
		{
			DeltaIndex_t nDeltaIndex; // 1409
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pDelta; // 1410
			const char* pDeltaName; // 1412
			int nLen; // 1413
			{
				int iValue; // 1418
				{
					ComponentHandle_t hComponent; // 1420
					int info; // 1422
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <05F6E994> meshutils/modelmesh.cpp:1401
// variables: 10
void CalculateDeltaSetHashIncremental<CModelMesh::Edge_t>(CRC64_t* pCRC, const CModelMeshComponentList<CModelMesh::Edge_t>& componentList)
{
	const CModelMeshDeltaSet<CModelMesh::Edge_t>& deltaSet; // 1403
	int nNumDeltas; // 1404
	{
		int iDelta; // 1407
		{
			DeltaIndex_t nDeltaIndex; // 1409
			const CModelMeshDelta<CModelMesh::Edge_t>* pDelta; // 1410
			const char* pDeltaName; // 1412
			int nLen; // 1413
			{
				int iValue; // 1418
				{
					ComponentHandle_t hComponent; // 1420
					int info; // 1422
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <05F6E8AE> meshutils/modelmesh.cpp:1401
// variables: 10
void CalculateDeltaSetHashIncremental<CModelMesh::Face_t>(CRC64_t* pCRC, const CModelMeshComponentList<CModelMesh::Face_t>& componentList)
{
	const CModelMeshDeltaSet<CModelMesh::Face_t>& deltaSet; // 1403
	int nNumDeltas; // 1404
	{
		int iDelta; // 1407
		{
			DeltaIndex_t nDeltaIndex; // 1409
			const CModelMeshDelta<CModelMesh::Face_t>* pDelta; // 1410
			const char* pDeltaName; // 1412
			int nLen; // 1413
			{
				int iValue; // 1418
				{
					ComponentHandle_t hComponent; // 1420
					int info; // 1422
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <05F7645B> meshutils/modelmesh.cpp:1434
void CalculateComponentListHashIncremental<CModelMesh::Vertex_t>(CRC64_t* pCRC, const CModelMeshComponentList<CModelMesh::Vertex_t>& componentList)
{
} /* size: 0 */

// <05F76428> meshutils/modelmesh.cpp:1434
void CalculateComponentListHashIncremental<CModelMesh::FaceVertex_t>(CRC64_t* pCRC, const CModelMeshComponentList<CModelMesh::FaceVertex_t>& componentList)
{
} /* size: 0 */

// <05F763F5> meshutils/modelmesh.cpp:1434
void CalculateComponentListHashIncremental<CModelMesh::Edge_t>(CRC64_t* pCRC, const CModelMeshComponentList<CModelMesh::Edge_t>& componentList)
{
} /* size: 0 */

// <05F763C2> meshutils/modelmesh.cpp:1434
void CalculateComponentListHashIncremental<CModelMesh::Face_t>(CRC64_t* pCRC, const CModelMeshComponentList<CModelMesh::Face_t>& componentList)
{
} /* size: 0 */

// <05F808ED> meshutils/modelmesh.cpp:1443
// variables: 53
// function calls: 218
void CModelMesh::CalculateMeshHash()
{
	CRC64_t nCRC; // 1445
	int nNumFaceGroups; // 1505
	int nNumBoneNames; // 1516
	{
		int iVertex; // 1449
		{
			const Vertex_t& vert; // 1451
			int info; // 1452
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this,
					int i);  // 421
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::operator[](
					int nIndex);  // 162
			CModelMeshComponentList<CModelMesh::Vertex_t>::operator[](
					ComponentIndex_t nIndex);  // 1451
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1453
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentL this); // 575
		CHalfEdgeComponentList<CModelMesh::Vertex_t>::Count(); // 190
		CModelMeshComponentList<CModelMesh::Vertex_t>::Count(); // 1449
	}
	{
		int iFaceVertex; // 1459
		{
			const FaceVertex_t& faceVert; // 1461
			int info; // 1463
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this,
					int i);  // 421
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::operator[](
					int nIndex);  // 162
			CModelMeshComponentList<CModelMesh::FaceVertex_t>::operator[](
					ComponentIndex_t nIndex);  // 1461
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1464
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::Face_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1465
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::Edge_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1466
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1467
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1468
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1469
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeCompon this); // 575
		CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::Count(); // 190
		CModelMeshComponentList<CModelMesh::FaceVertex_t>::Count(); // 1459
	}
	{
		int iEdge; // 1476
		{
			const Edge_t& edge; // 1478
			int info; // 1479
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
					int i);  // 421
			CHalfEdgeComponentList<CModelMesh::Edge_t>::operator[](
					int nIndex);  // 162
			CModelMeshComponentList<CModelMesh::Edge_t>::operator[](
					ComponentIndex_t nIndex);  // 1478
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1480
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1481
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
		CHalfEdgeComponentList<CModelMesh::Edge_t>::Count(); // 190
		CModelMeshComponentList<CModelMesh::Edge_t>::Count(); // 1476
	}
	{
		int iFace; // 1487
		{
			const Face_t& face; // 1489
			int info; // 1491
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
					int i);  // 421
			CHalfEdgeComponentList<CModelMesh::Face_t>::operator[](
					int nIndex);  // 162
			CModelMeshComponentList<CModelMesh::Face_t>::operator[](
					ComponentIndex_t nIndex);  // 1489
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 171
			CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 1492
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
		CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
		CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 1487
	}
	{
		int iFaceGroup; // 1508
		{
			const char* pFaceGroup; // 1510
			int nLen; // 1511
			V_strlen(const char* str); // 1511
			CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
					int i);  // 1510
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1510
		}
	}
	{
		int iBoneName; // 1519
		{
			const char* pBoneName; // 1521
			int nLen; // 1522
			V_strlen(const char* str); // 1522
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1521
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1521
		}
	}
	CRC64_Init(CRC64_t* pCRC); // 1446
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetStreamSet(); // 1436
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetNumDeltas(); // 1404
	{
		int iDelta; // 1407
		{
			DeltaIndex_t nDeltaIndex; // 1409
			const CModelMeshDelta<CModelMesh::Vertex_t>* pDelta; // 1410
			const char* pDeltaName; // 1412
			int nLen; // 1413
			CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 1409
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetDelta(
				DeltaIndex_t nDelta);  // 1410
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::Vertex_t>::GetName(); // 1412
			V_strlen(const char* str); // 1413
			{
				int iValue; // 1418
				{
					ComponentHandle_t hComponent; // 1420
					int info; // 1422
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 238
					ComponentHandleWithListPointer_t::FromInt(
						uint32 nBits,
						const CHalfEdgeComponentList<CModelMesh::Vertex_t>* pList);  // 242
					CModelMeshDelta<CModelMesh::Vertex_t>::GetComponentHandleForValue(
									int nValueIndex);  // 232
					CModelMeshDelta<CModelMesh::Vertex_t>::GetComponentHandleForValue(
									int nValueIndex);  // 1420
					Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
							int i);  // 546
					ComponentHandleWithListPointer_t::operator!=(
							const ComponentHandleWithListPointer_t& src);  // 547
					CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 171
					CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 1423
				}
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
				{
				}
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
				CModelMeshDelta<CModelMesh::Vertex_t>::GetNumValues(); // 1418
			}
			CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamSet(); // 1416
		}
	}
	CalculateDeltaSetHashIncremental<CModelMesh::Vertex_t>(CRC64_t* pCRC,
								const CModelMeshComponentList<CModelMesh::Vertex_t>& componentList);  // 1437
	CalculateComponentListHashIncremental<CModelMesh::Vertex_t>(CRC64_t* pCRC,
									const CModelMeshComponentList<CModelMesh::Vertex_t>& componentList);  // 1499
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetStreamSet(); // 1436
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetNumDeltas(); // 1404
	{
		int iDelta; // 1407
		{
			DeltaIndex_t nDeltaIndex; // 1409
			const CModelMeshDelta<CModelMesh::FaceVertex_t>* pDelta; // 1410
			const char* pDeltaName; // 1412
			int nLen; // 1413
			CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 1409
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetDelta(
				DeltaIndex_t nDelta);  // 1410
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetName(); // 1412
			V_strlen(const char* str); // 1413
			{
				int iValue; // 1418
				{
					ComponentHandle_t hComponent; // 1420
					int info; // 1422
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 238
					ComponentHandleWithListPointer_t::FromInt(
						uint32 nBits,
						const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>* pList);  // 242
					CModelMeshDelta<CModelMesh::FaceVertex_t>::GetComponentHandleForValue(
									int nValueIndex);  // 232
					CModelMeshDelta<CModelMesh::FaceVertex_t>::GetComponentHandleForValue(
									int nValueIndex);  // 1420
					Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
							int i);  // 546
					ComponentHandleWithListPointer_t::operator!=(
							const ComponentHandleWithListPointer_t& src);  // 547
					CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 171
					CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 1423
				}
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
				{
				}
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
				CModelMeshDelta<CModelMesh::FaceVertex_t>::GetNumValues(); // 1418
			}
			CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamSet(); // 1416
		}
	}
	CalculateDeltaSetHashIncremental<CModelMesh::FaceVertex_t>(CRC64_t* pCRC,
									const CModelMeshComponentList<CModelMesh::FaceVertex_t>& componentList);  // 1437
	CalculateComponentListHashIncremental<CModelMesh::FaceVertex_t>(CRC64_t* pCRC,
									const CModelMeshComponentList<CModelMesh::FaceVertex_t>& componentList);  // 1500
	CModelMeshComponentList<CModelMesh::Edge_t>::GetStreamSet(); // 1436
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::Edge_t>::GetNumDeltas(); // 1404
	{
		int iDelta; // 1407
		{
			DeltaIndex_t nDeltaIndex; // 1409
			const CModelMeshDelta<CModelMesh::Edge_t>* pDelta; // 1410
			const char* pDeltaName; // 1412
			int nLen; // 1413
			CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 1409
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Edge_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::Edge_t>::GetDelta(
				DeltaIndex_t nDelta);  // 1410
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::Edge_t>::GetName(); // 1412
			V_strlen(const char* str); // 1413
			{
				int iValue; // 1418
				{
					ComponentHandle_t hComponent; // 1420
					int info; // 1422
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 238
					ComponentHandleWithListPointer_t::FromInt(
						uint32 nBits,
						const CHalfEdgeComponentList<CModelMesh::Edge_t>* pList);  // 242
					CModelMeshDelta<CModelMesh::Edge_t>::GetComponentHandleForValue(
									int nValueIndex);  // 232
					CModelMeshDelta<CModelMesh::Edge_t>::GetComponentHandleForValue(
									int nValueIndex);  // 1420
					Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
							int i);  // 546
					ComponentHandleWithListPointer_t::operator!=(
							const ComponentHandleWithListPointer_t& src);  // 547
					CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 171
					CModelMeshComponentList<CModelMesh::Edge_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 1423
				}
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
				{
				}
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
				CModelMeshDelta<CModelMesh::Edge_t>::GetNumValues(); // 1418
			}
			CModelMeshDelta<CModelMesh::Edge_t>::GetStreamSet(); // 1416
		}
	}
	CalculateDeltaSetHashIncremental<CModelMesh::Edge_t>(CRC64_t* pCRC,
								const CModelMeshComponentList<CModelMesh::Edge_t>& componentList);  // 1437
	CalculateComponentListHashIncremental<CModelMesh::Edge_t>(CRC64_t* pCRC,
									const CModelMeshComponentList<CModelMesh::Edge_t>& componentList);  // 1501
	CModelMeshComponentList<CModelMesh::Face_t>::GetStreamSet(); // 1436
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::Face_t>::GetNumDeltas(); // 1404
	{
		int iDelta; // 1407
		{
			DeltaIndex_t nDeltaIndex; // 1409
			const CModelMeshDelta<CModelMesh::Face_t>* pDelta; // 1410
			const char* pDeltaName; // 1412
			int nLen; // 1413
			CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(
					int nVal);  // 1409
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 308
			CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
					int i);  // 311
			CModelMeshDeltaSet<CModelMesh::Face_t>::GetDelta(
				DeltaIndex_t nDelta);  // 1410
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 216
			CModelMeshDelta<CModelMesh::Face_t>::GetName(); // 1412
			V_strlen(const char* str); // 1413
			{
				int iValue; // 1418
				{
					ComponentHandle_t hComponent; // 1420
					int info; // 1422
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 238
					ComponentHandleWithListPointer_t::FromInt(
						uint32 nBits,
						const CHalfEdgeComponentList<CModelMesh::Face_t>* pList);  // 242
					CModelMeshDelta<CModelMesh::Face_t>::GetComponentHandleForValue(
									int nValueIndex);  // 232
					CModelMeshDelta<CModelMesh::Face_t>::GetComponentHandleForValue(
									int nValueIndex);  // 1420
					Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
							int i);  // 546
					ComponentHandleWithListPointer_t::operator!=(
							const ComponentHandleWithListPointer_t& src);  // 547
					CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 171
					CModelMeshComponentList<CModelMesh::Face_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 1423
				}
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 196
				{
				}
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 198
				CModelMeshDelta<CModelMesh::Face_t>::GetNumValues(); // 1418
			}
			CModelMeshDelta<CModelMesh::Face_t>::GetStreamSet(); // 1416
		}
	}
	CalculateDeltaSetHashIncremental<CModelMesh::Face_t>(CRC64_t* pCRC,
								const CModelMeshComponentList<CModelMesh::Face_t>& componentList);  // 1437
	CalculateComponentListHashIncremental<CModelMesh::Face_t>(CRC64_t* pCRC,
									const CModelMeshComponentList<CModelMesh::Face_t>& componentList);  // 1502
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1505
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1516
	CRC64_Final(CRC64_t* pCRC); // 1527
} /* size: 0, variables: 3, inline expansions: 24 (0 bytes) */

// <05FA3600> meshutils/modelmesh.cpp:1534
void CModelMesh::MetaData()
{
} /* size: 0 */

// <05FA3629> meshutils/modelmesh.cpp:1550
// function calls: 3
void CModelMesh::VertexStreamSet()
{
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponents(); // 1552
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetStreamSet(); // 1552
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::CModelMeshStreamSetAccessor(
					CModelMeshStreamSet& streamSet,
					const CHalfEdgeComponentList<CModelMesh::Vertex_t>& componentList);  // 1552
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F80896> meshutils/modelmesh.cpp:1550
void CModelMesh::VertexStreamSet()
{
} /* size: 0 */

// <05FA36F3> meshutils/modelmesh.cpp:1566
// function calls: 3
void CModelMesh::FaceVertexStreamSet()
{
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponents(); // 1568
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetStreamSet(); // 1568
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::CModelMeshStreamSetAccessor(
					CModelMeshStreamSet& streamSet,
					const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>& componentList);  // 1568
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F8085C> meshutils/modelmesh.cpp:1566
void CModelMesh::FaceVertexStreamSet()
{
} /* size: 0 */

// <05FA37C3> meshutils/modelmesh.cpp:1582
// function call: 1
void CModelMesh::Vertex(VertexHandle_t hVertex)
{
	{
	}
	CVertex::CVertex(
		CModelMesh* pMesh,
		VertexHandle_t hVertex);  // 1584
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F80815> meshutils/modelmesh.cpp:1582
void CModelMesh::Vertex(VertexHandle_t hVertex)
{
} /* size: 0 */

// <05FA3841> meshutils/modelmesh.cpp:1598
// function call: 1
void CModelMesh::FaceVertex(FaceVertexHandle_t hFaceVertex)
{
	{
	}
	CFaceVertex::CFaceVertex(
			CModelMesh* pMesh,
			FaceVertexHandle_t hFaceVertex);  // 1600
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F807C1> meshutils/modelmesh.cpp:1598
void CModelMesh::FaceVertex(FaceVertexHandle_t hFaceVertex)
{
} /* size: 0 */

// <05FA38BF> meshutils/modelmesh.cpp:1614
// function call: 1
void CModelMesh::Edge(EdgeHandle_t hEdge)
{
	CEdge::CEdge(
		CModelMesh* pMesh,
		EdgeHandle_t hEdge);  // 1616
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F8076D> meshutils/modelmesh.cpp:1614
void CModelMesh::Edge(EdgeHandle_t hEdge)
{
} /* size: 0 */

// <05FA392B> meshutils/modelmesh.cpp:1630
// function call: 1
void CModelMesh::Face(FaceHandle_t hFace)
{
	{
	}
	CFace::CFace(
		CModelMesh* pMesh,
		FaceHandle_t hFace);  // 1632
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F80719> meshutils/modelmesh.cpp:1630
void CModelMesh::Face(FaceHandle_t hFace)
{
} /* size: 0 */

// <05FA39A9> meshutils/modelmesh.cpp:1646
// function call: 1
void CModelMesh::VertexDeltaSet()
{
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetDeltaSet(); // 1648
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F806D2> meshutils/modelmesh.cpp:1646
void CModelMesh::VertexDeltaSet()
{
} /* size: 0 */

// <05FA3A03> meshutils/modelmesh.cpp:1661
// function call: 1
void CModelMesh::FaceVertexDeltaSet()
{
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetDeltaSet(); // 1663
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F80698> meshutils/modelmesh.cpp:1661
void CModelMesh::FaceVertexDeltaSet()
{
} /* size: 0 */

// <05FA3A5D> meshutils/modelmesh.cpp:1677
// function call: 1
void CModelMesh::FaceDeltaSet()
{
	CModelMeshComponentList<CModelMesh::Face_t>::GetDeltaSet(); // 1679
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F804E4> meshutils/modelmesh.cpp:1693
// function calls: 6
void CModelMesh::HasDeltaData()
{
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetNumDeltas(); // 1695
	CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetNumDeltas(); // 1695
	CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 137
	CModelMeshDeltaSet<CModelMesh::Face_t>::GetNumDeltas(); // 1695
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05FA3AB7> meshutils/modelmesh.cpp:1703
// function calls: 3
void CModelMesh::FaceStreamSet()
{
	CModelMeshComponentList<CModelMesh::Face_t>::GetComponents(); // 1705
	CModelMeshComponentList<CModelMesh::Face_t>::GetStreamSet(); // 1705
	CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>::CModelMeshStreamSetAccessor(
					CModelMeshStreamSet& streamSet,
					const CHalfEdgeComponentList<CModelMesh::Face_t>& componentList);  // 1705
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F804C7> meshutils/modelmesh.cpp:1703
void CModelMesh::FaceStreamSet()
{
} /* size: 0 */

// <05FA3B87> meshutils/modelmesh.cpp:1719
// function calls: 9
void CModelMesh::GetVertex(VertexHandle_t hVertex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1721
} /* size: 0, inline expansions: 9 (0 bytes) */

// <05F80480> meshutils/modelmesh.cpp:1719
void CModelMesh::GetVertex(VertexHandle_t hVertex)
{
} /* size: 0 */

// <05FA3DD4> meshutils/modelmesh.cpp:1735
// function calls: 9
void CModelMesh::GetFaceVertex(FaceVertexHandle_t hFaceVertex)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
} /* size: 0, inline expansions: 9 (0 bytes) */

// <05F8042C> meshutils/modelmesh.cpp:1735
void CModelMesh::GetFaceVertex(FaceVertexHandle_t hFaceVertex)
{
} /* size: 0 */

// <05FA4253> meshutils/modelmesh.cpp:1752
// function calls: 9
void CModelMesh::GetEdge(EdgeHandle_t hEdge)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Edge_t>::GetComponent(
			ComponentHandle_t handle);  // 1754
} /* size: 0, inline expansions: 9 (0 bytes) */

// <05F803D8> meshutils/modelmesh.cpp:1752
void CModelMesh::GetEdge(EdgeHandle_t hEdge)
{
} /* size: 0 */

// <05FA44A0> meshutils/modelmesh.cpp:1768
// function calls: 9
void CModelMesh::GetFace(FaceHandle_t hFace)
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 1770
} /* size: 0, inline expansions: 9 (0 bytes) */

// <05F80384> meshutils/modelmesh.cpp:1768
void CModelMesh::GetFace(FaceHandle_t hFace)
{
} /* size: 0 */

// <05F80078> meshutils/modelmesh.cpp:1784
// function calls: 9
void CModelMesh::CanAppendMesh(const CModelMesh& srcMesh)
{
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetStreamSet(); // 254
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetDeltaSet(); // 257
	CModelMeshComponentList<CModelMesh::Vertex_t>::CanAppendComponentList(
				const CModelMeshComponentList<CModelMesh::Vertex_t>& srcComponentList);  // 1786
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetStreamSet(); // 254
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetDeltaSet(); // 257
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::CanAppendComponentList(
				const CModelMeshComponentList<CModelMesh::FaceVertex_t>& srcComponentList);  // 1789
	CModelMeshComponentList<CModelMesh::Face_t>::GetStreamSet(); // 254
	CModelMeshComponentList<CModelMesh::Face_t>::GetDeltaSet(); // 257
	CModelMeshComponentList<CModelMesh::Face_t>::CanAppendComponentList(
				const CModelMeshComponentList<CModelMesh::Face_t>& srcComponentList);  // 1792
} /* size: 0, inline expansions: 9 (0 bytes) */

// <05F7FB4F> meshutils/modelmesh.cpp:1801
// variables: 8
// function calls: 19
void CModelMesh::FlipAllFaces()
{
	const int  nNumFaces; // 1804
	{
		int iFace; // 1805
		{
			Face_t& face; // 1807
			FaceVertexHandle_t hCurrentFaceVertex; // 1811
			EdgeHandle_t hPreviousEdge; // 1812
			{
				FaceVertex_t* pCurrentFaceVertex; // 1816
				EdgeHandle_t hCurrentEdge; // 1819
				FaceVertexHandle_t hNextFaceVertex; // 1824
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
						int i);  // 546
				ComponentHandleWithListPointer_t::operator!=(
						const ComponentHandleWithListPointer_t& src);  // 547
				CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
							ComponentHandle_t handle);  // 466
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
						int i);  // 470
				CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
						ComponentHandle_t handle);  // 364
				CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
						ComponentHandle_t handle);  // 1737
				CModelMesh::GetFaceVertex(
						FaceVertexHandle_t hFaceVertex);  // 1816
			}
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 1808
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
					int i);  // 415
			CHalfEdgeComponentList<CModelMesh::Face_t>::operator[](
					int nIndex);  // 153
			CModelMeshComponentList<CModelMesh::Face_t>::operator[](
					ComponentIndex_t nIndex);  // 1807
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 1832
		}
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this); // 575
	CHalfEdgeComponentList<CModelMesh::Face_t>::Count(); // 190
	CModelMeshComponentList<CModelMesh::Face_t>::Count(); // 1804
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05FA46ED> meshutils/modelmesh.cpp:1839
// variables: 2
// function calls: 3
void CModelMesh::FindMatchingFaceGroup(const FaceGroup_t& faceGroup)
{
	const int  nNumFaceGroups; // 1841
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1841
	{
		int iGroup; // 1842
		CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
				int i);  // 1844
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05F7FAF5> meshutils/modelmesh.cpp:1839
// variables: 2
void CModelMesh::FindMatchingFaceGroup(const FaceGroup_t& faceGroup)
{
	const int  nNumFaceGroups; // 1841
	{
		int iGroup; // 1842
	}
} /* size: 0, variables: 1 */

// <05F7F203> meshutils/modelmesh.cpp:1856
// variables: 9
// function calls: 36
void CModelMesh::MergeFaceGroupsFromMesh(const CModelMesh& srcMesh, const CUtlVector<int, CUtlMemory<int, int> >* pSrcFaceGroups, CUtlVector<int, CUtlMemory<int, int> >* pOutFaceGroupRemapTable)
{
	const int  nNumSrcFaceGroups; // 1858
	const char   __FUNCTION__; // 36694
	{
		int iSrcFaceGroup; // 1866
		{
			const int  nSrcFaceGroupIndex; // 1868
			const FaceGroup_t& srcFaceGroup; // 1871
			int nDstFaceGroupIndex; // 1873
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1869
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 609
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1868
			CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
					int i);  // 1871
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1841
			{
				int iGroup; // 1842
				CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
						int i);  // 1844
			}
			CModelMesh::FindMatchingFaceGroup(
						const FaceGroup_t& faceGroup);  // 1873
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1882
			CUtlMemory<CModelMesh::FaceGroup_t, int>::NumAllocated(); // 1143
			CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 296
			FaceGroup_t::FaceGroup_t(); // 1479
			Construct<CModelMesh::FaceGroup_t>(FaceGroup_t* pMemory); // 1148
			CUtlMemory<CModelMesh::FaceGroup_t, int>::Base(); // 112
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Base(); // 368
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::AddToTail(); // 1023
			CModelMesh::AddFaceGroup(); // 1876
			CUtlMemory<CModelMesh::FaceGroup_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::operator[](
					int i);  // 1877
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 296
			FaceGroup_t::operator=(
					const FaceGroup_t  &);  // 1877
		}
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1858
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1862
	{
		int i; // 1554
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1554
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1863
	CUtlVectorBase<CModelMesh::FaceGroup_t, CUtlMemory<CModelMesh::FaceGroup_t, int> >::Count(); // 1858
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <05F7EBF9> meshutils/modelmesh.cpp:1890
// variables: 7
// function calls: 22
void CModelMesh::MergeBonesFromMesh(const CModelMesh& srcMesh, const CUtlVector<int, CUtlMemory<int, int> >* pSrcBones, CUtlVector<int, CUtlMemory<int, int> >* pOutBoneRemapTable)
{
	const int  nNumSrcBones; // 1892
	{
		int iSrcBone; // 1900
		{
			const int  nSrcBoneIndex; // 1902
			const CUtlString& boneName; // 1903
			int nDstBoneIndex; // 1905
			CUtlString::Get(); // 1905
			CUtlMemory<int, int>::operator[](
					int i);  // 609
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1902
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 1903
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1222
			{
				int iBone; // 1224
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
						int i);  // 1226
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 1226
			}
			CModelMesh::FindBoneByName(
					const char* pBoneName);  // 1240
			CModelMesh::FindOrCreateBone(
					const char* pBoneName);  // 1905
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1909
		}
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1892
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1896
	{
		int i; // 1554
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1554
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1897
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1203
	CModelMesh::GetNumBones(); // 1892
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05F7EB48> meshutils/modelmesh.cpp:1927
// function call: 1
void CVertex::CVertex(CModelMesh* pMesh, VertexHandle_t hVertex)
{
	{
		{
		}
	}
	{
	}
	{
	}
	CVertex::CVertex(
		CModelMesh* pMesh,
		VertexHandle_t hVertex);  // 1927
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F7EAED> meshutils/modelmesh.cpp:1927
// variables: 2
void CVertex::CVertex(CModelMesh* pMesh, VertexHandle_t hVertex)
{
	const char   __FUNCTION__; // 36292
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1931
	}
} /* size: 0, variables: 1 */

// <05F7EA8A> meshutils/modelmesh.cpp:1939
void CVertex::GetFacesConnectedToVertex(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaces)
{
} /* size: 0 */

// <05F7E567> meshutils/modelmesh.cpp:1949
// function calls: 22
void CVertex::GetFaceVerticesConnectedToVertex(CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertices)
{
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 995
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CM this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Vertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1721
	CModelMesh::GetVertex(
			VertexHandle_t hVertex);  // 998
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 1003
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
		int i);  // 1201
	CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			const ComponentHandleWithListPointer_t& src);  // 1005
	CModelMesh::GetFaceVerticesConnectedToVertex<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(
																VertexHandle_t hVertex,
																CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertices);  // 1951
} /* size: 0, inline expansions: 22 (0 bytes) */

// <05F7E4B6> meshutils/modelmesh.cpp:1964
// function call: 1
void CFaceVertex::CFaceVertex(CModelMesh* pMesh, FaceVertexHandle_t hFaceVertex)
{
	{
		{
		}
	}
	{
	}
	{
	}
	CFaceVertex::CFaceVertex(
			CModelMesh* pMesh,
			FaceVertexHandle_t hFaceVertex);  // 1964
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F7E45B> meshutils/modelmesh.cpp:1964
// variables: 2
void CFaceVertex::CFaceVertex(CModelMesh* pMesh, FaceVertexHandle_t hFaceVertex)
{
	const char   __FUNCTION__; // 36390
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1968
	}
} /* size: 0, variables: 1 */

// <05F7E362> meshutils/modelmesh.cpp:1975
// function calls: 3
void CFaceVertex::GetVertexConnectedToFaceVertex()
{
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 1327
	CModelMesh::GetVertexConnectedToFaceVertex(
					FaceVertexHandle_t hFaceVertex);  // 1325
	CModelMesh::GetVertexConnectedToFaceVertex(
					FaceVertexHandle_t hFaceVertex);  // 1977
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F7E269> meshutils/modelmesh.cpp:1984
// function calls: 3
void CFaceVertex::GetFaceConnectedToFaceVertex()
{
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 1340
	CModelMesh::GetFaceConnectedToFaceVertex(
					FaceVertexHandle_t hFaceVertex);  // 1338
	CModelMesh::GetFaceConnectedToFaceVertex(
					FaceVertexHandle_t hFaceVertex);  // 1986
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05F7DF5C> meshutils/modelmesh.cpp:1992
// function calls: 12
void CFaceVertex::GetOutgoingEdge()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 419
	CModelMesh::GetOutgoingEdgeConnectedToFaceVertex(
						FaceVertexHandle_t hFaceVertex);  // 417
	CModelMesh::GetOutgoingEdgeConnectedToFaceVertex(
						FaceVertexHandle_t hFaceVertex);  // 1994
} /* size: 0, inline expansions: 12 (0 bytes) */

// <05F7DEB3> meshutils/modelmesh.cpp:2000
// function call: 1
void CFaceVertex::GetIncomingEdge()
{
	CModelMesh::GetIncomingEdgeConnectedToFaceVertex(
						FaceVertexHandle_t hFaceVertex);  // 2002
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F7DBA6> meshutils/modelmesh.cpp:2009
// function calls: 12
void CFaceVertex::GetNextFaceVertexInFace()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 447
	CModelMesh::GetNextFaceVertexInFace(
				FaceVertexHandle_t hFaceVertex);  // 445
	CModelMesh::GetNextFaceVertexInFace(
				FaceVertexHandle_t hFaceVertex);  // 2011
} /* size: 0, inline expansions: 12 (0 bytes) */

// <05F7D8A1> meshutils/modelmesh.cpp:2019
// function calls: 12
void CFaceVertex::GetPreviousFaceVertexInFace()
{
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 459
	CModelMesh::GetNextFaceVertexInFace(
				FaceVertexHandle_t hFaceVertex);  // 445
	CModelMesh::GetPreviousFaceVertexInFace(
					FaceVertexHandle_t hFaceVertex);  // 2021
} /* size: 0, inline expansions: 12 (0 bytes) */

// <05F7D860> meshutils/modelmesh.cpp:2036
void CEdge::CEdge(CModelMesh* pMesh, EdgeHandle_t hEdge)
{
} /* size: 0 */

// <05F7D57D> meshutils/modelmesh.cpp:2046
// variable: 1
// function calls: 10
void CEdge::GetVertexA()
{
	const Edge_t* pEdge; // 2048
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Edge_t>::GetComponent(
			ComponentHandle_t handle);  // 1754
	CModelMesh::GetEdge(
		EdgeHandle_t hEdge);  // 2048
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <05F7D2D1> meshutils/modelmesh.cpp:2058
// variable: 1
// function calls: 10
void CEdge::GetVertexB()
{
	const Edge_t* pEdge; // 2060
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Edge_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Edge_t>::GetComponent(
			ComponentHandle_t handle);  // 1754
	CModelMesh::GetEdge(
		EdgeHandle_t hEdge);  // 2060
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <05F7D26E> meshutils/modelmesh.cpp:2071
void CEdge::GetConnectedFaces(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaces)
{
} /* size: 0 */

// <05F7D1BD> meshutils/modelmesh.cpp:2087
// function call: 1
void CFace::CFace(CModelMesh* pMesh, FaceHandle_t hFace)
{
	{
		{
		}
	}
	{
	}
	{
	}
	CFace::CFace(
		CModelMesh* pMesh,
		FaceHandle_t hFace);  // 2087
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F7D162> meshutils/modelmesh.cpp:2087
// variables: 2
void CFace::CFace(CModelMesh* pMesh, FaceHandle_t hFace)
{
	const char   __FUNCTION__; // 36243
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2091
	}
} /* size: 0, variables: 1 */

// <05F7CC46> meshutils/modelmesh.cpp:2099
// variables: 3
// function calls: 22
void CFace::ComputeNumVertices()
{
	const Face_t* pFace; // 2101
	int nNumVertices; // 2103
	{
		FaceVertexHandle_t hCurrentFaceVertex; // 2107
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
					ComponentHandle_t handle);  // 466
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
				int i);  // 470
		CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
				ComponentHandle_t handle);  // 364
		CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
				ComponentHandle_t handle);  // 1737
		CModelMesh::GetFaceVertex(
				FaceVertexHandle_t hFaceVertex);  // 2111
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 2113
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 1770
	CModelMesh::GetFace(
		FaceHandle_t hFace);  // 2101
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 2105
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <05FA47E8> meshutils/modelmesh.cpp:2124
// variable: 1
// function calls: 10
void CFace::GetFaceGroupIndex()
{
	const Face_t* pFace; // 2126
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentReference_t, CUtlMemory<CHalfEdgeComponen this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentList<CMod this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::Face_t>::GetComponent(
			ComponentHandle_t handle);  // 1770
	CModelMesh::GetFace(
		FaceHandle_t hFace);  // 2126
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <05F7CC1C> meshutils/modelmesh.cpp:2124
// variable: 1
void CFace::GetFaceGroupIndex()
{
	const Face_t* pFace; // 2126
} /* size: 0, variables: 1 */

// <05FA4CCC> meshutils/modelmesh.cpp:2135
void CFace::GetVertices(CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutVertices)
{
} /* size: 0 */

// <05F7C70D> meshutils/modelmesh.cpp:2145
// function calls: 22
void CFace::GetFaceVertices(CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertices)
{
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 930
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 824
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 1198
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
		int i);  // 1201
	CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			const ComponentHandleWithListPointer_t& src);  // 938
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
				ComponentHandle_t handle);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentEntry_t, CUtlMemory<CHalfEdgeComponentLis this,
			int i);  // 470
	CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 364
	CModelMeshComponentList<CModelMesh::FaceVertex_t>::GetComponent(
			ComponentHandle_t handle);  // 1737
	CModelMesh::GetFaceVertex(
			FaceVertexHandle_t hFaceVertex);  // 939
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 941
	CModelMesh::GetFaceVerticesConnectedToFace<CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > >(
																FaceHandle_t hFace,
																CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertices);  // 2147
} /* size: 0, inline expansions: 22 (0 bytes) */

// <05F7C6AA> meshutils/modelmesh.cpp:2155
void CFace::GetEdges(CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaceEdges)
{
} /* size: 0 */

// <05F7C648> meshutils/modelmesh.cpp:2164
void CFace::GetFaceVertexForVertex(VertexHandle_t hVertex)
{
} /* size: 0 */

